# DNF 同人端 — 反编译恢复说明

## 诚实声明

本目录为对交付二进制的**静态反编译与推断**，**不是**原始工程源码。

- 无 PDB（`F:\DNF1126\Release\DNF.pdb` 不可用）时，绝大多数函数名/类型/注释已丢失
- MSVC 优化导致内联与控制流变形；Ghidra 伪代码中的类型名常误标
- **模块分桶**：具名模块仅收录有字符串/导入/调用链证据的函数；其余按映像地址落入 `unclassified_0x........_0x........*.c`（**不是**“游戏循环/UI/角色”的真实分析结果）
- 个别超大函数反编译超时（如主 WndProc、部分 UI 分发器），仅留桩或依赖静态指令扫描说明

---

## 二进制角色

| 文件 | 结论 |
|------|------|
| `game.exe` | 用户主程序（本目录重点） |
| `dep1.dll` | 第三方 **FMOD 2.2.7**；本 exe **未**导入/未见加载（见该目录 README） |
| `dep2.dll` | 第三方 **D3DX9**；exe 以 `d3dx9_43.dll` IAT 导入子集（见该目录 README） |

DLL **未**做全量反编译。

---

## game.exe 结构

### 入口 → WinMain

`entry` @ `0x006e54d5` → `crt_scrt_common_main` @ `0x006e5359` → **`WinMain`** @ `0x0068e490`：

1. `read_dnf_login_txt` 读 `DnfLogin.txt`（两行凭证）
2. `net_login_connect_and_spawn_thread`：WSA + TCP 连接并起收包线程
3. 注册窗口类 `"DNF"`，`lpfnWndProc = window_wndproc_main` @ `0x00683610`
4. 检查必需 NPK/脚本 → `npk_scan_imagepacks2` → `d3d9_create_device_bootstrap` → DirectSound 等
5. 进入 **`game_main_loop`** @ `0x00510800`

### 真实主循环：`game_main_loop`（原 PeekMessage 泵）

证据（`game_main_loop.c`）：

- `PeekMessageA` / `TranslateMessage` / `DispatchMessageA`（含过滤 `0x200` 鼠标移动队列）
- 对 `IDirect3DDevice9*`（`DAT_007ca1a4+4`）vtable：
  - `+0xAC` → **Clear**
  - `+0xA4` → **BeginScene**
  - `+0xA8` → **EndScene**
  - `+0x44` → **Present**
- 客户区 `0x280×0x1E0`（640×480）与 `timeGetTime` 相关节奏辅助

该函数即“消息泵 + 每帧更新/渲染”主循环；相关辅助见 `renames.md` 中 `game_frame_*` / `game_loop_helper_*`。

### 主窗口过程 `window_wndproc_main` @ `0x00683610`

Bulk 反编译超时。对函数体的立即数扫描可见消息常量：

| 常量 | 含义 |
|------|------|
| `0x100` / `0x101` | `WM_KEYDOWN` / `WM_KEYUP` |
| `0x200` / `0x201` | `WM_MOUSEMOVE` / `WM_LBUTTONDOWN` |
| `0x02` / `0x05` / `0x0F` / `0x20` | `WM_DESTROY` / `WM_SIZE` / `WM_PAINT` / `WM_SETCURSOR` |
| `0x285` | `WM_IME_SELECT`（IME 相关） |

WndProc 高频调用 `window_input_ui_dispatch_68eb20` @ `0x0068eb20`（体积极大，亦曾超时）。`IMM32`（`ImmGetContext` 等）在 IAT 中存在，典型用于中文输入；直接 IAT 指针未嵌在 WndProc 机器码字面量中，更可能经分发器/间接调用。WndProc 专项反编译（加大超时单独重跑）因时间与内存限制未完成，`window_message.c` 中该函数仍为失败桩；上面的消息处理说明来自静态指令/常量扫描。

### Direct3D / D3DX

- `d3d9_create_device_bootstrap` @ `0x004b6120`：`Direct3DCreate9`、创建设备、`D3DXCreateSprite`、GDI 字体
- `d3d9_texture_from_memory` @ `0x005106c0`：`D3DXCreateTextureFromFileInMemory`
- 其余矩阵/字体 API 经 IAT（`dep2` / `d3dx9_43.dll`）

### NPK / IMG 格式（伪代码可见部分）

**NPK 包扫描**（`npk_scan_imagepacks2` @ `0x00584490`，`npk_scan_soundpacks` @ `0x004bdca0`）：

- 枚举 `ImagePacks2\*.npk` / `SoundPacks\*.npk`
- `CreateFileA` 后 `SetFilePointer(..., 0x10, ...)` — 跳过约 **16 字节包头**
- 在缓冲中搜索魔数 **`NeoplePack_Bill`**（15 字节，`util_memmem_or_bytes_find`）
- 调试串提到密钥相关：`puchikon@neople dungeon and fighter` + `DNF` 填充（名哈希/解密语境；完整算法需对照索引字段继续挖）

**IMG/帧解码**（`npk_img_decode_frames_from_entry` @ `0x00584ac0`）：

1. 按 NPK 目录项 `offset=@+0x1C`、`size=@+0x20` `ReadFile` 出数据块
2. 块内 **`+0x1C`：帧数量**；帧表自 **`+0x20`** 起
3. **每帧记录 0x28（40）字节**，拷贝字段 `+0..+0x20`
4. **`+0`：颜色/像素格式**，已见表值：
   - `0x0E` → `img_convert_pixels_fmt_0e`
   - `0x0F` → `img_convert_pixels_fmt_0f`
   - `0x10` → 直接拷贝
   - `0x11` → 引用其它帧数据
5. **`+4`：压缩标志**（与调试串一致）：
   - **`5`**：未压缩（raw）
   - **`6`**：zlib — 调用 `zlib_uncompress_buffer` @ `0x006ce760` → `zlib_inflate` @ `0x006ce7b0`
6. 内嵌 **zlib 1.2.13**（Mark Adler 版权串）

`npk_img_open_path_under_imagepacks2` @ `0x004b68a0` 在 `ImagePacks2\` 下打开路径并同样分支 5/6。

### 输入 / 声音 / 网络

- 输入：WndProc + 消息泵；IMM32 导入；无 DirectInput
- 声音：`sound_dsound_create`（`DirectSoundCreate`）；`sound_load_audio_xml`；**不用 FMOD**
- 网络：`[server]` / `etc/channel_info.etc`；`DnfLogin.txt`；硬编码 `47.99.69.51:2026`；Winsock `socket/connect/recv` 线程

---

## 关键函数表（节选）

| 地址 | 名称 |
|------|------|
| `0x006e54d5` | `entry` |
| `0x006e5359` | `crt_scrt_common_main` |
| `0x0068e490` | `WinMain` |
| `0x00683610` | `window_wndproc_main` |
| `0x00510800` | `game_main_loop` |
| `0x004b6120` | `d3d9_create_device_bootstrap` |
| `0x00584490` | `npk_scan_imagepacks2` |
| `0x00584ac0` | `npk_img_decode_frames_from_entry` |
| `0x006ce760` / `0x006ce7b0` | `zlib_uncompress_buffer` / `zlib_inflate` |
| `0x0068de00` | `read_dnf_login_txt` |
| `0x005e7940` | `parse_server_config_section` |
| `0x006a55d0` | `net_create_socket_or_fail` |

完整 **130+** 条见 `game.exe/renames.md`。

---

## 目录说明

```
recovered/game.exe/decompiled/
  winmain_entry.c, window_message.c, game_main_loop.c,
  render_d3d9.c, npk_img_resource.c, sound_dsound.c, network_login.c,
  input_imm.c, ui_interface_part*.c, gameplay_character.c,
  zlib_embedded.c, crt_library.c,
  unclassified_0x00400000_0x004fffff_part*.c  ← 无强证据，仅按地址带
  unclassified_0x00500000_… / 0x006… / 0x007…
```

单文件超过约 4 万行会拆成 `_partNN.c`。

## 限制

无壳常规 MSVC PE；无 PDB；WndProc/超大分发器可能仍失败；地址带分类**故意不**再伪装成 gameplay/ui/game_loop。
