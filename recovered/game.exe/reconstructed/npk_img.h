#pragma once
// NPK / IMG 资源加载 — 自 game.exe 静态恢复（非原始源码）
// 32-bit MSVC / Win32 / D3D9

#include <cstdint>
#include <cstring>
#include <string>
#include <map>
#include <vector>

struct IDirect3DDevice9;
struct IDirect3DTexture9;
struct IDirectSoundBuffer8;

// ---------------------------------------------------------------------------
// 文件格式常量
// ---------------------------------------------------------------------------

/** 【确定】NPK 包头魔数（15 字节有效 + 填充至 16）；校验见 npk_scan_imagepacks2 @ 0x00584490 */
static constexpr char kNpkMagic[] = "NeoplePack_Bill";
static constexpr uint32_t kNpkHeaderSize = 0x10;   // 【确定】SetFilePointer(..., 0x10, ...)
static constexpr uint32_t kNpkIndexEntrySize = 0x108; // 【确定】count * 0x108

/** 【确定】索引名 XOR 密钥：字面量 @ 0x0075A5C0 */
static constexpr char kNpkNameXorKey[] =
    "puchikon@neople dungeon and fighter "
    "DNFDNFDNFDNFDNFDNFDNFDNFDNFDNFDNFDNFDNFDNFDNFDNFDNFDNFDNFDNFDNFDNFDNFDNF"
    "DNFDNFDNFDNFDNFDNFDNFDNFDNFDNFDNFDNFDNFDNFDNFDNFDNFDNFDNFDNFDNFDNFDNFDNF"
    "DNFDNFDNFDNFDNFDNFDNFDNFDNFDNFDNFDNFDNFDNFDNFDNFDNFDNFDNFDNFDNFDNFDNFDNF"
    "DNFDNFDNFDNFDNFDNFDNFDNFDNF"; // 运行时按 0..0xFE 逐字节 XOR

/** 【确定】本加载器读取的 IMG 帧颜色模式（错误串「没见过的NPK颜色模式」） */
enum ImgColorFormat : int32_t {
  kImgColorArgb1555 = 0x0E, // → img_convert_pixels_fmt_0e @ 0x005858B0
  kImgColorArgb4444 = 0x0F, // → img_convert_pixels_fmt_0f @ 0x00585780
  kImgColorArgb8888 = 0x10, // → img_copy_pixels_fmt_10 / memcpy
  kImgColorLink     = 0x11, // 链接到先前帧索引
};

/** 【确定】压缩标志（错误串「不是没压缩的0x05和zlib的0x06」） */
enum ImgCompression : int32_t {
  kImgCompressRaw  = 5,
  kImgCompressZlib = 6,
};

// ---------------------------------------------------------------------------
// 磁盘结构（packed）
// ---------------------------------------------------------------------------

#pragma pack(push, 1)

/** 【确定】NPK 文件头 — npk_scan_imagepacks2 / npk_scan_soundpacks */
struct NpkFileHeader {
  char     magic[16];   // 【确定】"NeoplePack_Bill\0" 等；用 util_memcmp_n 与 15 字节比较
  uint32_t file_count;  // 【确定】紧随 0x10 头之后读 4 字节
};

/**
 * 【确定】NPK 索引项 0x108 字节 — 扫描循环 local_30c * 0x108
 * offset/size 在项首；名在 +8，256 字节区，末字节写 0
 */
struct NpkIndexEntry {
  uint32_t offset;       // 【确定】+0x00 → 运行时 NpkImgEntry::file_offset
  uint32_t size;         // 【确定】+0x04 → NpkImgEntry::file_size
  char     name_enc[256]; // 【确定】+0x08..+0x107；可选 XOR 解密（见 cpp 注释）
};

/**
 * 【确定】本 exe 加载的 IMG 数据块布局（无独立魔数校验路径）：
 *   +0x00..+0x1B : 头部未知字段（TODO @ 0x00584AC0 未读）
 *   +0x1C        : uint32 帧数 frame_count
 *   +0x20        : 第一帧记录起
 * 经典 "Neople Img File"/"Neople Image File"/色板 v4–v6 字符串在本二进制中
 * **未**作为加载分支出现 → 【推断】本同人端可能使用简化/固定版 IMG。
 */
struct ImgBlobHeaderObserved {
  uint8_t  unknown_00_1b[0x1C]; // 【推断】可能含 magic/version/index_size；未在加载路径读取
  uint32_t frame_count;         // 【确定】*(blob+0x1C)
  // frames follow at +0x20
};

/**
 * 【确定】磁盘上数据帧头 0x24 字节，后接像素；链接帧仅 8 字节。
 * 运行时拷贝到 ImgFrameRuntime（0x28，+0x24 为像素指针）。
 */
struct ImgFrameDisk {
  int32_t color_format;  // 【确定】+0x00  0x0E/0x0F/0x10/0x11
  int32_t compression;   // 【确定】+0x04  5=raw / 6=zlib（链接帧时此字段为链接目标索引）
  int32_t width;         // 【确定】+0x08
  int32_t height;        // 【确定】+0x0C
  int32_t data_size;     // 【确定】+0x10  对 0x0E/0x0F raw：存的是 *输出* ARGB8888 字节数
  int32_t key_x;         // 【确定】+0x14
  int32_t key_y;         // 【确定】+0x18
  int32_t max_w;         // 【确定】+0x1C
  int32_t max_h;         // 【确定】+0x20
  // uint8_t pixels[];  // 【确定】数据紧随；zlib 时长度为 data_size（压缩长度）
};

#pragma pack(pop)

// ---------------------------------------------------------------------------
// 运行时结构
// ---------------------------------------------------------------------------

/** 【确定】解码后单帧 0x28 — npk_img_decode_frames_from_entry / npk_img_frame_ptr_at */
struct ImgFrameRuntime {
  int32_t  color_format; // 【确定】+0x00
  int32_t  compression;  // 【确定】+0x04（链接帧解码后可能被覆盖为源帧字段）
  int32_t  width;        // 【确定】+0x08
  int32_t  height;       // 【确定】+0x0C
  int32_t  data_size;    // 【确定】+0x10  解码后像素字节数
  int32_t  key_x;        // 【确定】+0x14
  int32_t  key_y;        // 【确定】+0x18
  int32_t  max_w;        // 【确定】+0x1C
  int32_t  max_h;        // 【确定】+0x20
  uint8_t* pixels;       // 【确定】+0x24  堆上 ARGB8888（或链接共享指针）
};

/**
 * 【确定】ImagePacks2 映射表值 — npk_img_entry_copy @ 0x00585EB0
 * MSVC 32-bit std::string 按 0x18 计。
 */
struct NpkImgEntry {
  std::string npk_filename;  // 【确定】+0x00  包文件名（FindFirst 的 cFileName）
  int32_t     index;         // 【确定】+0x18  包内序号
  uint32_t    file_offset;   // 【确定】+0x1C
  uint32_t    file_size;     // 【确定】+0x20
  std::string entry_path;    // 【确定】+0x24  项内路径名（索引 +8）
  int32_t     frame_count;   // 【确定】+0x3C  解码后写入
  ImgFrameRuntime* frames;   // 【确定】+0x40  未解码时为 nullptr
};

/**
 * 【确定】SoundPacks 映射表值 — npk_sound_entry_copy @ 0x004C4D40
 */
struct NpkSoundEntry {
  std::string npk_filename;  // 【确定】+0x00
  std::string entry_path;    // 【确定】+0x18
  int32_t     index;         // 【确定】+0x30
  uint32_t    file_offset;   // 【确定】+0x34
  uint32_t    file_size;     // 【确定】+0x38
};

/** 【推断】全局 IMG 包管理器：std::map 风格红黑树，入口 npk_img_map_init */
struct NpkImgPackManager {
  // TODO(0x00585B10): 精确 map 节点布局与全局 this 指针 DAT_*
  std::map<std::string, NpkImgEntry> by_path; // 【推断】按 entry_path 查找（lookup 用路径键）
};

/** 【推断】音效包目录 */
struct NpkSoundPackManager {
  std::map<std::string, NpkSoundEntry> by_path; // 【推断】
};

// 像素转换（源地址见 cpp）
void img_convert_pixels_fmt_0e(uint32_t* dst, const uint16_t* src, int out_bytes); // 0x005858B0
void img_convert_pixels_fmt_0f(uint32_t* dst, const uint16_t* src, int out_bytes); // 0x00585780
void img_copy_pixels_fmt_10(uint8_t* dst, const uint8_t* src, int bytes);         // 0x005859E0

void npk_decrypt_index_name(char name[256]); // 【确定】算法在 0x0058484E

// 子系统
void npk_img_subsystem_init();          // 0x00584450
void npk_scan_imagepacks2();            // 0x00584490
void npk_scan_soundpacks();             // 0x004BDCA0
NpkImgEntry* npk_img_lookup_and_decode(const char* path); // 0x005855F0
int npk_img_decode_frames_from_entry(NpkImgEntry* entry); // 0x00584AC0
void npk_img_free_decoded_frames(NpkImgEntry* entry);     // 0x005856E0

// 打开路径并上传 D3D 纹理（每帧一张）— 0x004B68A0
int npk_img_open_path_under_imagepacks2(const char* path);

// WAV from NPK → IDirectSoundBuffer8* — 0x004BD6C0
IDirectSoundBuffer8* sound_npk_load_wav_to_dsound(NpkSoundEntry* entry);

// zlib（见 zlib_embedded.c）
int zlib_uncompress_buffer(void* dest, int* dest_len, const void* src, int src_len); // 0x006CE760
