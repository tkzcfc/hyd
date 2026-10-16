# DNF 同人端 — 反编译恢复说明

## 诚实声明

本目录为对交付二进制的**静态反编译与推断**，**不是**原始工程源码。

- 无 PDB（`F:\DNF1126\Release\DNF.pdb` 不可用）时，绝大多数函数名/类型/注释已丢失
- MSVC 优化导致内联与控制流变形；Ghidra 伪代码中的类型名常误标
- **模块分桶**：具名模块仅收录有字符串/导入/调用链证据的函数；其余按映像地址落入 `unclassified_0x........_0x........*.c`（**不是**“游戏循环/UI/角色”的真实分析结果）
- 两处超大函数（主 WndProc、UI 命令分发器）曾在批量反编译中超时；后经**专用 headless 工程**成功恢复，正文已并入 `decompiled/`（见下）

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

**已恢复全文**（约 4760 行伪代码 → `game.exe/decompiled/window_message.c`）。

专用反编译参数：Ghidra DecompileOptions **timeout 3600s**、max payload **1024MB**、JVM **6G**；工程保存在 `work_ghidra/projects/hard_proj`；简化风格 `decompile`，耗时约 **133s**。旁路产物在 `game.exe/hard_functions/`（`*_decompile.c` / `*_disasm.asm` / `*_switches.txt` / `*_callees.txt`），消息与按键表见 **`hard_functions/message_map.md`**。

处理概要：

| 类别 | 内容 |
|------|------|
| 窗口 | `WM_PAINT` / `WM_CLOSE`（Destroy+PostQuit）/ `WM_QUIT` / `WM_DISPLAYCHANGE` 重建 D3D |
| 键盘 | `WM_KEYDOWN`/`KEYUP`/`CHAR`；WASD 与方向键移动标志；`Esc` 批量关闭 UI 命令；`F1`–`F7`、数字键快捷栏等 |
| 鼠标 | 移动更新坐标；左键 down/up 进 `ui_handle_lbutton_*`；双击分发聚焦控件；右键模式/物品 |
| IME | `WM_IME_COMPOSITION` / `WM_IME_NOTIFY` + `ImmGetContext` / `ImmGetCompositionStringA` / `ImmGetCandidateListA` |

### UI 命令分发器 `ui_command_dispatch` @ `0x0068eb20`

原名 `window_input_ui_dispatch_68eb20`（批量反编译曾超时）。专用跑通耗时约 **545s**，正文在 **`decompiled/ui_command_dispatch.c`**（`unclassified_*_part02.c` 仅留指针注释）。

**角色（高置信）**：按整数 **UI 命令 / 控件类型 ID** 分发（`command_id` + 可选 `ui_ctx`），**不是**网络包 ID 或音效 ID。分段 switch 基址 `0xA` / `0x1A4` / `0x398` / `0x532`；调用点立即数含 `0x2FA`/`0x2FC`/`0x2FE`、`3000` 等；聚焦控件路径为 `*(focus+0x988)`。详见 `message_map.md`。

### Direct3D / D3DX

- `d3d9_create_device_bootstrap` @ `0x004b6120`：`Direct3DCreate9`、创建设备、`D3DXCreateSprite`、GDI 字体
- `d3d9_texture_from_memory` @ `0x005106c0`：`D3DXCreateTextureFromFileInMemory`
- 其余矩阵/字体 API 经 IAT（`dep2` / `d3dx9_43.dll`）

### NPK / IMG 格式（AREA 1 已加深）

可读重建：**`game.exe/reconstructed/npk_img.h` / `npk_img.cpp`**（及 `texture_cache.*`）；格式表与函数映射见 **`game.exe/reconstructed/README.md`**（NPK/IMG 节）。

**NPK 包扫描**（`npk_scan_imagepacks2` @ `0x00584490`，`npk_scan_soundpacks` @ `0x004bdca0`）：

- 枚举 `ImagePacks2\*.npk` / `SoundPacks\*.npk`
- 头 **16 字节**魔数 `NeoplePack_Bill`（`util_memcmp_n` 比较 15 字节；原误标 memmem）+ **`uint32 count`** + **`count×0x108`** 索引
- 索引项：`offset@+0`、`size@+4`、名 `@+8`（256）；XOR 密钥 `puchikon@neople dungeon and fighter`+`DNF` 填充（Image 扫描有门控；本映像门控字符串相同导致 XOR 常跳过；Sound **无** XOR）
- 运行时 `NpkImgEntry`：`string` 包名、`index@+0x18`、`offset@+0x1c`、`size@+0x20`、`string` 路径、`frame_count@+0x3c`、`frames*@+0x40`

**IMG/帧解码**（`npk_img_decode_frames_from_entry` @ `0x00584ac0`；查找入口 `npk_img_lookup_and_decode` @ `0x005855f0`）：

1. 按条目 offset/size 读出数据块；**`blob+0x1C`：帧数**；帧自 **`+0x20`**
2. 磁盘数据帧头 **0x24** + payload；链接帧 **8** 字节；运行时帧 **0x28**（`+0x24` 像素指针）
3. 颜色：`0x0E` ARGB1555→8888、`0x0F` ARGB4444→8888、`0x10` ARGB8888 拷贝、`0x11` 链接
4. 压缩：`5` raw / `6` zlib（`zlib_uncompress_buffer` @ `0x006ce760`）
5. 本二进制**无** `"Neople Img File"` / 色板 v4–v6 加载分支（经典多版本头未在此路径出现）

`npk_img_open_path_under_imagepacks2` @ `0x004b68a0`：同上解码逻辑并 `D3DXCreateTexture` 上传。  
`sound_npk_load_wav_to_dsound` @ `0x004bd6c0`（原误名 `npk_buffer8_error`）：NPK 内 WAV → DirectSound Buffer8。

### 输入 / 声音 / 网络

- 输入：完整 WndProc + 消息泵；IMM32 在 WndProc 内直接调用；无 DirectInput；UI 命令经 `ui_command_dispatch`
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
| `0x0068eb20` | `ui_command_dispatch` |
| `0x00510800` | `game_main_loop` |
| `0x004b6120` | `d3d9_create_device_bootstrap` |
| `0x00584490` | `npk_scan_imagepacks2` |
| `0x00584ac0` | `npk_img_decode_frames_from_entry` |
| `0x005855f0` | `npk_img_lookup_and_decode` |
| `0x004bd6c0` | `sound_npk_load_wav_to_dsound` |
| `0x006ce760` / `0x006ce7b0` | `zlib_uncompress_buffer` / `zlib_inflate` |
| `0x0068de00` | `read_dnf_login_txt` |
| `0x005e7940` | `parse_server_config_section` |
| `0x006a55d0` | `net_create_socket_or_fail` |

完整重命名表见 `game.exe/renames.md`（含 hard-function 批次）。

---

## 目录说明

```
recovered/game.exe/
  hard_functions/          ← 专用超时加大后的两函数产物 + message_map.md
  reconstructed/           ← 可读 C++ 重建（NPK/IMG：npk_img.* / texture_cache.*）
  decompiled/
    window_message.c         ← 含完整 window_wndproc_main
    ui_command_dispatch.c    ← 完整 UI 命令分发器（自 unclassified 迁出）
    winmain_entry.c, game_main_loop.c,
    render_d3d9.c, npk_img_resource.c, sound_dsound.c, network_login.c,
    input_imm.c, ui_interface_part*.c, gameplay_character.c,
    zlib_embedded.c, crt_library.c,
    unclassified_0x00400000_…  ← 无强证据，仅按地址带
```

单文件超过约 4 万行会拆成 `_partNN.c`。

## 限制

无壳常规 MSVC PE；无 PDB。主 WndProc 与 UI 命令分发器已在专用工程中恢复；批量默认超时下仍可能对**其它**超大函数失败。地址带分类**故意不**再伪装成 gameplay/ui/game_loop。REA/Ghidra 对 5KB+/20KB 级函数的整函数 dossier 可能超时，细节以已落盘伪代码与指令扫描为准。
