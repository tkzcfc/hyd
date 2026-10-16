# game.exe

Ghidra 伪代码恢复（非原始源码）。约 **15462** 函数；**130+** 处有证据重命名（见 `renames.md`）。

## 分桶原则（重要）

- **具名模块**（`window_message`、`game_main_loop`、`npk_img_resource`、`network_login`、`render_d3d9`、`sound_dsound` 等）：仅含字符串/导入/从已知入口可辩护的调用关系所支撑的函数
- **`unclassified_0xAAA_0xBBB*.c`**：其余函数按映像地址 1MB 带归档——**不是**“游戏循环/UI/角色逻辑”的分析结果（旧版按地址误标为 `game_loop`/`ui_interface`/`gameplay_character` 已纠正）
- 超过 ~40000 行的模块拆成 `_part01.c` …

## 主循环与窗口

- **`game_main_loop`** @ `0x00510800`：PeekMessage + D3D Clear/BeginScene/EndScene/Present
- **`WinMain`** @ `0x0068e490`：登录、建窗、资源与设备初始化后进入主循环
- **`window_wndproc_main`** @ `0x00683610`：见上级 README 的 WM_* 扫描说明；反编译成功后应替换本目录 `window_message.c` 中的失败桩

## NPK/IMG

见上级 `../README.md` 中格式小节；实现集中在 `npk_img_resource.c`（如 `npk_img_decode_frames_from_entry`）。
