# reconstructed/ — 可读 C++ 重建

本目录为**语义重建**，不是可直接链接的工程源码。字段/函数旁标注源地址与【确定】/【推断】。

---

## NPK / IMG 资源加载

对应实现：`npk_img.h` / `npk_img.cpp`（可选 `texture_cache.h` / `.cpp`）。  
原始伪代码：`../decompiled/npk_img_resource.c`。

### 格式表

#### NPK 文件

| 偏移 | 大小 | 字段 | 确定性 |
|------|------|------|--------|
| 0x00 | 16 | magic `"NeoplePack_Bill"`（比较长度 15） | 【确定】`util_memcmp_n` @ 扫描路径 |
| 0x10 | 4 | `file_count` | 【确定】`SetFilePointer(0x10)` 后 `ReadFile` |
| 0x14 | `count×0x108` | 索引表 | 【确定】 |

#### NPK 索引项（0x108）

| 偏移 | 大小 | 字段 | 确定性 |
|------|------|------|--------|
| 0x00 | 4 | `offset` | 【确定】 |
| 0x04 | 4 | `size` | 【确定】 |
| 0x08 | 256 | 加密/明文路径名 | 【确定】；XOR 密钥字面量 @ `0x0075A5C0` |
| 0x107 | 1 | 强制 `'\0'` | 【确定】 |

**名解密**：`name[i] ^= key[i]`，`i∈[0,0xFF)`，`key="puchikon@neople dungeon and fighter "+DNF填充`。【确定】算法；【确定】本映像中门控用的两处 `ImagePacks2\` 字面量相同，XOR 分支静态下不执行。`SoundPacks` 扫描无 XOR。

#### IMG 数据块（本加载器观察布局）

| 偏移 | 大小 | 字段 | 确定性 |
|------|------|------|--------|
| 0x00 | 0x1C | 未读头部 | 【推断】或含 magic/version；本 exe **无** `"Neople Img File"` / `"Neople Image File"` 字符串加载分支 |
| 0x1C | 4 | `frame_count` | 【确定】 |
| 0x20 | … | 帧序列 | 【确定】 |

色板（经典 v4/v5/v6）：本二进制加载路径**未见** → 标 TODO，勿臆造。

#### 磁盘帧记录

| 类型 | 磁盘大小 | 说明 |
|------|----------|------|
| 数据帧 `color≠0x11` | **0x24 + payload** | 9×int32 头 + 像素/压缩数据 | 【确定】 |
| 链接帧 `color==0x11` | **8** | `color` + 源帧索引 | 【确定】 |

| 头偏移 | 字段 | 值 |
|--------|------|-----|
| +0 | color | `0x0E` ARGB1555 / `0x0F` ARGB4444 / `0x10` ARGB8888 / `0x11` link |
| +4 | compress **或** link 索引 | `5` raw / `6` zlib |
| +8/+C | width / height | |
| +10 | data_size | raw 的 0x0E/0x0F：为**输出** 32bpp 字节数 → 磁盘 16bpp 长 `size/2` |
| +14/+18 | key_x / key_y | |
| +1C/+20 | max_w / max_h | |

运行时 `ImgFrameRuntime` = 上述 9 字段 + `pixels*` @ +0x24，共 **0x28**。

### 加载流程

```
WinMain
  → npk_img_subsystem_init (0x00584450) → npk_img_map_init
  → npk_scan_imagepacks2 (0x00584490)   // 填路径→NpkImgEntry map
  → npk_scan_soundpacks (0x004BDCA0)    // 声音 map（无 XOR）
按需:
  npk_img_lookup_and_decode (0x005855F0)
    → 若 frames==null → npk_img_decode_frames_from_entry (0x00584AC0)
         → zlib_uncompress_buffer (compress==6)
         → img_convert_pixels_fmt_0e/0f 或 img_copy_pixels_fmt_10
  npk_img_open_path_under_imagepacks2 (0x004B68A0)
    → 每帧 D3DXCreateTexture + LockRect 上传
  sound_npk_load_wav_to_dsound (0x004BD6C0)
    → 读 NPK 内 WAV → CreateSoundBuffer → IDirectSoundBuffer8
```

### 确定性说明

- NPK 头/索引/帧 0x28 运行时、颜色与压缩枚举、像素扩展公式、声音 RIFF 解析：**【确定】**（伪代码 + 反汇编交叉）。
- 完整经典 IMG 多版本头与色板、map 红黑树节点精确布局、DDS 专用路径：**未见或仅推断**；`d3d9_texture_from_memory` 实为**读文件**再 `D3DXCreateTextureFromFileInMemory`（可用于 DDS 等）。

### 函数映射（本区域，含本 pass 新名）

| 地址 | 名称 |
|------|------|
| `0x0040D7F0` | `npk_get_relative_res_path` |
| `0x00426E60` | `npk_img_texture_slot_store` |
| `0x004ACD90` | `npk_path_normalize_helper` |
| `0x004B68A0` | `npk_img_open_path_under_imagepacks2` |
| `0x004BCF10` | `npk_img_frame_ptr_at` |
| `0x004BD6C0` | `sound_npk_load_wav_to_dsound` |
| `0x004BDCA0` | `npk_scan_soundpacks` |
| `0x004BE010` | `npk_sound_entry_ctor` |
| `0x004C4190` | `npk_sound_path_join_soundpacks` |
| `0x004C4220` | `npk_sound_map_insert` |
| `0x004C4250` | `npk_sound_map_insert_commit` |
| `0x004C4CD0` | `npk_sound_entry_assign_for_insert` |
| `0x004C4D40` | `npk_sound_entry_copy` |
| `0x005106C0` | `d3d9_texture_from_memory`（读文件→FromFileInMemory） |
| `0x00584450` | `npk_img_subsystem_init` |
| `0x00584470` | `npk_img_map_clear` |
| `0x00584490` | `npk_scan_imagepacks2` |
| `0x00584A50` | `npk_img_entry_ctor` |
| `0x00584A80` | `npk_img_entry_dtor` |
| `0x00584AC0` | `npk_img_decode_frames_from_entry` |
| `0x005855F0` | `npk_img_lookup_and_decode` |
| `0x005856E0` | `npk_img_free_decoded_frames` |
| `0x00585780` | `img_convert_pixels_fmt_0f` |
| `0x005858B0` | `img_convert_pixels_fmt_0e` |
| `0x005859E0` | `img_copy_pixels_fmt_10` |
| `0x00585A50` | `npk_img_manager_release_all` |
| `0x00585B10` | `npk_img_map_init` |
| `0x00585C60` | `npk_img_map_insert` |
| `0x00585C90` | `npk_img_map_insert_commit` |
| `0x00585E40` | `npk_img_entry_assign_for_insert` |
| `0x00585EB0` | `npk_img_entry_copy` |
| `0x006CE760` | `zlib_uncompress_buffer` |
| `0x00709D5F` | `util_memcmp_n`（原误标 memmem；NPK 魔数比较） |
