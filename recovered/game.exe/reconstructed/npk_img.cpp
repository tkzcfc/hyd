// NPK / IMG 资源加载 — 可读重构（非原始源码）
// 行为以 decompiled/npk_img_resource.c 为准；未知处标 TODO + 地址。

#include "npk_img.h"

#include <windows.h>
#include <d3d9.h>
#include <d3dx9.h>
#include <dsound.h>

#include <cstdlib>
#include <vector>

// 外部/CRT 包装（地址见 functions.csv）
extern void* FUN_006f191d(size_t);      // heap alloc
extern void  FUN_006f1902(void*);       // heap free
extern void* FUN_006e5209(size_t);      // operator new[]
extern void  FUN_006e6bd0(void*, const void*, size_t); // memcpy-like
extern int   util_memcmp_n(const void* a, const void* b, int n); // 0x00709D5F
extern const char* npk_get_relative_res_path(); // 0x0040D7F0 — this 上的路径串

// ---------------------------------------------------------------------------
// 【确定】名解密 — npk_scan_imagepacks2 @ 0x0058484E
// 注意：当前映像里用于门控的两处 "ImagePacks2\" 字符串相同，
// 比较结果恒为相等 → XOR 分支在静态配置下不会执行（死门控）。
// SoundPacks 扫描路径完全不做 XOR。算法本身仍存在于代码中。
// ---------------------------------------------------------------------------
void npk_decrypt_index_name(char name[256]) {
  for (uint32_t i = 0; i < 0xFF; ++i) {
    name[i] = static_cast<char>(static_cast<unsigned char>(name[i]) ^
                                static_cast<unsigned char>(kNpkNameXorKey[i]));
  }
  name[0xFF] = '\0'; // 【确定】写 name[0x107-0x8?] 即索引项 +0x107 = 0
}

// ---------------------------------------------------------------------------
// 像素转换
// ---------------------------------------------------------------------------

/** 【确定】ARGB1555 → 每像素 uint32（内存字节序 B,G,R,A）@ 0x005858B0 */
void img_convert_pixels_fmt_0e(uint32_t* dst, const uint16_t* src, int out_bytes) {
  const int n = out_bytes / 4;
  for (int i = 0; i < n; ++i) {
    const uint16_t p = src[i];
    const uint32_t b = (uint32_t)((p & 0x1F) * 0xFF / 0x1F);
    const uint32_t g = (uint32_t)(((p >> 5) & 0x1F) * 0xFF / 0x1F);
    const uint32_t r = (uint32_t)(((p >> 10) & 0x1F) * 0xFF / 0x1F);
    const uint32_t a = (uint32_t)((int16_t)(p >> 15) * 0xFF); // 0 or 0xFF
    dst[i] = b | (g << 8) | (r << 16) | (a << 24);
  }
}

/** 【确定】ARGB4444 → uint32 @ 0x00585780 */
void img_convert_pixels_fmt_0f(uint32_t* dst, const uint16_t* src, int out_bytes) {
  const int n = out_bytes / 4;
  for (int i = 0; i < n; ++i) {
    const uint16_t p = src[i];
    const uint32_t b = (uint32_t)((p & 0xF) * 0xFF / 0xF);
    const uint32_t g = (uint32_t)(((p >> 4) & 0xF) * 0xFF / 0xF);
    const uint32_t r = (uint32_t)(((p >> 8) & 0xF) * 0xFF / 0xF);
    const uint32_t a = (uint32_t)(((p >> 12) & 0xF) * 0xFF / 0xF);
    dst[i] = b | (g << 8) | (r << 16) | (a << 24);
  }
}

/** 【确定】ARGB8888 逐 DWORD 拷贝 @ 0x005859E0 */
void img_copy_pixels_fmt_10(uint8_t* dst, const uint8_t* src, int bytes) {
  for (int i = 0; i < bytes; i += 4) {
    dst[i] = src[i];
    dst[i + 1] = src[i + 1];
    dst[i + 2] = src[i + 2];
    dst[i + 3] = src[i + 3];
  }
}

// ---------------------------------------------------------------------------
// NPK 扫描 ImagePacks2
// ---------------------------------------------------------------------------

/**
 * 【确定】流程摘要 — npk_scan_imagepacks2 @ 0x00584490
 * 1. FindFirstFileA("ImagePacks2\\*.npk")
 * 2. CreateFileA(ImagePacks2\\ + name)
 * 3. 若路径前缀比较非平凡：读 16 字节，util_memcmp_n(..., "NeoplePack_Bill", 15)==0 才解析；
 *    否则直接解析（本映像两前缀相同 → 总是直接解析）
 * 4. SetFilePointer(0x10); ReadFile count; ReadFile count*0x108
 * 5. 每项：可选 XOR 名；构造 NpkImgEntry；npk_img_map_insert
 */
void npk_scan_imagepacks2() {
  // 完整控制流见 decompiled；此处保留语义骨架。
  WIN32_FIND_DATAA fd{};
  HANDLE find = FindFirstFileA("ImagePacks2\\*.npk", &fd);
  if (find == INVALID_HANDLE_VALUE) return;

  do {
    char path[256];
    // 【确定】前缀 "ImagePacks2\\" + cFileName
    lstrcpynA(path, "ImagePacks2\\", sizeof(path));
    lstrcatA(path, fd.cFileName);

    HANDLE hf = CreateFileA(path, GENERIC_READ, FILE_SHARE_READ | FILE_SHARE_WRITE,
                            nullptr, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, nullptr);
    if (hf == INVALID_HANDLE_VALUE) {
      // 【确定】MessageBoxA GBK: 文件无法打开，ImagePacks2不在同一目录
      continue;
    }

    // 【确定】跳过 16 字节头，读 count
    SetFilePointer(hf, kNpkHeaderSize, nullptr, FILE_BEGIN);
    uint32_t count = 0;
    DWORD rd = 0;
    ReadFile(hf, &count, 4, &rd, nullptr);

    auto* index = static_cast<NpkIndexEntry*>(FUN_006f191d(count * kNpkIndexEntrySize));
    ReadFile(hf, index, count * kNpkIndexEntrySize, &rd, nullptr);

    for (uint32_t i = 0; i < count; ++i) {
      // 【确定】门控后可能调用 npk_decrypt_index_name(index[i].name_enc)
      index[i].name_enc[255] = '\0';

      NpkImgEntry ent;
      ent.npk_filename = fd.cFileName;          // 【确定】FUN_004053a0(cFileName)
      ent.entry_path = index[i].name_enc;       // 【确定】FUN_004053a0(entry+8)
      ent.index = static_cast<int32_t>(i);
      ent.file_offset = index[i].offset;
      ent.file_size = index[i].size;
      ent.frame_count = 0;
      ent.frames = nullptr;
      // TODO(0x00585C60): npk_img_map_insert(全局 map, ent)
      (void)ent;
    }

    FUN_006f1902(index);
    CloseHandle(hf);
  } while (FindNextFileA(find, &fd));

  FindClose(find);
}

/**
 * 【确定】SoundPacks\\*.npk — npk_scan_soundpacks @ 0x004BDCA0
 * 同样 0x10 头 + count + 0x108 项；**不做**名 XOR；插入声音 map。
 */
void npk_scan_soundpacks() {
  // 骨架同上，路径前缀为 "SoundPacks\\"
  // 详见 decompiled/npk_img_resource.c
}

// ---------------------------------------------------------------------------
// IMG 帧解码
// ---------------------------------------------------------------------------

/**
 * 【确定】npk_img_decode_frames_from_entry @ 0x00584AC0
 * 打开 ImagePacks2\\ + relative_path，按 entry.file_offset/size 读出 IMG blob。
 */
int npk_img_decode_frames_from_entry(NpkImgEntry* entry) {
  if (!entry) return -1;

  char path[256];
  // 【确定】ImagePacks2\\ + npk_get_relative_res_path()（this 上的包相对路径）
  // 实际实现拼的是包文件路径（npk_filename），不是 entry_path。
  // TODO(0x00584AC0): 精确拼接用的是哪条字符串（相对路径 getter）。

  HANDLE hf = INVALID_HANDLE_VALUE; // CreateFileA...
  void* blob = FUN_006f191d(entry->file_size);
  // SetFilePointer(entry->file_offset); ReadFile(blob, entry->file_size);

  const uint32_t frame_count = *reinterpret_cast<uint32_t*>(
      static_cast<uint8_t*>(blob) + 0x1C); // 【确定】
  entry->frame_count = static_cast<int32_t>(frame_count);

  auto* frames = static_cast<ImgFrameRuntime*>(
      FUN_006e5209(static_cast<size_t>(frame_count) * sizeof(ImgFrameRuntime)));
  memset(frames, 0, static_cast<size_t>(frame_count) * sizeof(ImgFrameRuntime));

  // 【确定】游标从 blob+0x20 起
  const int32_t* cursor = reinterpret_cast<const int32_t*>(
      static_cast<uint8_t*>(blob) + 0x20);

  for (uint32_t fi = 0; fi < frame_count; ++fi) {
    ImgFrameRuntime& fr = frames[fi];
    fr.color_format = cursor[0];
    fr.compression = cursor[1];
    fr.width = cursor[2];
    fr.height = cursor[3];
    fr.data_size = cursor[4];
    fr.key_x = cursor[5];
    fr.key_y = cursor[6];
    fr.max_w = cursor[7];
    fr.max_h = cursor[8];

    if (fr.color_format == kImgColorLink) {
      // 【确定】链接：cursor[1] 为源帧索引；磁盘仅 8 字节（cursor+=2）
      const int src_i = fr.compression;
      if (static_cast<int>(fi) <= src_i) {
        // MessageBoxA: img索引号错误 / 索引应该向前索引...
      }
      // 深拷贝源帧像素等到本帧字段（见伪代码）
      cursor += 2;
      continue;
    }

    if (fr.compression == kImgCompressZlib) {
      // 【确定】dest_len 初值 = width*height*0x28；后被 uncompress 改写为实际长度
      int dest_len = fr.width * fr.height * 0x28;
      void* tmp = FUN_006f191d(dest_len);
      zlib_uncompress_buffer(tmp, &dest_len, cursor + 9, cursor[4]);

      if (fr.color_format == kImgColorArgb1555) {
        fr.pixels = static_cast<uint8_t*>(FUN_006e5209(dest_len * 2));
        img_convert_pixels_fmt_0e(reinterpret_cast<uint32_t*>(fr.pixels),
                                  static_cast<uint16_t*>(tmp), dest_len * 2);
        fr.data_size = dest_len * 2;
      } else if (fr.color_format == kImgColorArgb4444) {
        fr.pixels = static_cast<uint8_t*>(FUN_006e5209(dest_len * 2));
        img_convert_pixels_fmt_0f(reinterpret_cast<uint32_t*>(fr.pixels),
                                  static_cast<uint16_t*>(tmp), dest_len * 2);
        fr.data_size = dest_len * 2;
      } else if (fr.color_format == kImgColorArgb8888) {
        fr.pixels = static_cast<uint8_t*>(FUN_006e5209(dest_len));
        FUN_006e6bd0(fr.pixels, tmp, dest_len);
        fr.data_size = dest_len;
      } else {
        // MessageBoxA: 没见过的NPK颜色模式
      }
      // 【确定】推进 cursor：压缩载荷长度 cursor[4] + 0x24
      cursor = reinterpret_cast<const int32_t*>(
          reinterpret_cast<const uint8_t*>(cursor) + cursor[4] + 0x24);
      FUN_006f1902(tmp);
    } else if (fr.compression == kImgCompressRaw) {
      const int32_t* pix = cursor + 9;
      if (fr.color_format == kImgColorArgb1555) {
        fr.pixels = static_cast<uint8_t*>(FUN_006e5209(fr.data_size));
        img_convert_pixels_fmt_0e(reinterpret_cast<uint32_t*>(fr.pixels),
                                  reinterpret_cast<const uint16_t*>(pix), fr.data_size);
        // 【确定】磁盘 16bpp 长度为 data_size/2
        cursor = reinterpret_cast<const int32_t*>(
            reinterpret_cast<const uint8_t*>(cursor) + fr.data_size / 2 + 0x24);
      } else if (fr.color_format == kImgColorArgb4444) {
        fr.pixels = static_cast<uint8_t*>(FUN_006e5209(fr.data_size));
        img_convert_pixels_fmt_0f(reinterpret_cast<uint32_t*>(fr.pixels),
                                  reinterpret_cast<const uint16_t*>(pix), fr.data_size);
        cursor = reinterpret_cast<const int32_t*>(
            reinterpret_cast<const uint8_t*>(cursor) + fr.data_size / 2 + 0x24);
      } else if (fr.color_format == kImgColorArgb8888) {
        fr.pixels = static_cast<uint8_t*>(FUN_006e5209(fr.data_size));
        img_copy_pixels_fmt_10(fr.pixels, reinterpret_cast<const uint8_t*>(pix),
                               fr.data_size);
        cursor = reinterpret_cast<const int32_t*>(
            reinterpret_cast<const uint8_t*>(cursor) + fr.data_size + 0x24);
      } else {
        // MessageBoxA: 没见过的NPK颜色模式
      }
    } else {
      // MessageBoxA: 没见过的NPK压缩模式 / 不是没压缩的0x05和zlib的0x06
    }
  }

  entry->frames = frames;
  // CloseHandle; free blob
  FUN_006f1902(blob);
  (void)hf;
  return 0;
}

/**
 * 【确定】npk_img_lookup_and_decode @ 0x005855F0
 * 规范化路径 → map 查找；若 frames==nullptr 则 decode。
 */
NpkImgEntry* npk_img_lookup_and_decode(const char* path) {
  (void)path;
  // TODO(0x005855F0): 精确 map 迭代器与键类型
  return nullptr;
}

/** 【确定】释放每帧 pixels 与帧表 @ 0x005856E0 */
void npk_img_free_decoded_frames(NpkImgEntry* entry) {
  if (!entry || !entry->frames) return;
  for (int i = 0; i < entry->frame_count; ++i) {
    if (entry->frames[i].pixels) {
      // FUN_006e4b8e(ptr, 1) — delete[] 风格
      entry->frames[i].pixels = nullptr;
    }
  }
  FUN_006f1902(entry->frames);
  entry->frames = nullptr;
}

void npk_img_subsystem_init() {
  // 【确定】调用 npk_img_map_init @ 0x00585B10
}

/**
 * 【确定】npk_img_open_path_under_imagepacks2 @ 0x004B68A0
 * 查找条目后按帧 D3DXCreateTexture + LockRect(vtable+0x4C) 写入像素，
 * UnlockRect(+0x50)，再 npk_img_texture_slot_store。
 * 格式/压缩分支与 decode 相同；链接帧复制已有纹理。
 */
int npk_img_open_path_under_imagepacks2(const char* path) {
  (void)path;
  // TODO(0x004B68A0): 纹理向量容器精确类型
  return 0;
}

/**
 * 【确定】sound_npk_load_wav_to_dsound @ 0x004BD6C0
 * SoundPacks\\ + 相对路径打开 NPK；按 entry.offset/size 读出；
 * 解析 RIFF/WAVE（fmt / data 等 chunk）；CreateSoundBuffer → QueryInterface
 * IDirectSoundBuffer8；Lock 后拷贝 PCM。
 */
IDirectSoundBuffer8* sound_npk_load_wav_to_dsound(NpkSoundEntry* entry) {
  (void)entry;
  return nullptr;
}
