# game.exe

Ghidra 伪代码恢复（非原始源码）。约 **15462** 函数；**140+** 处有证据重命名（见 `renames.md`）。

## 分桶原则（重要）

- **具名模块**（`window_message`、`ui_command_dispatch`、`game_main_loop`、`npk_img_resource`、`network_login`、`render_d3d9`、`sound_dsound` 等）：仅含字符串/导入/从已知入口可辩护的调用关系所支撑的函数
- **`unclassified_0xAAA_0xBBB*.c`**：其余函数按映像地址 1MB 带归档——**不是**“游戏循环/UI/角色逻辑”的分析结果
- 超过 ~40000 行的模块拆成 `_part01.c` …

## 主循环与窗口

- **`game_main_loop`** @ `0x00510800`：PeekMessage + D3D Clear/BeginScene/EndScene/Present
- **`WinMain`** @ `0x0068e490`：登录、建窗、资源与设备初始化后进入主循环
- **`window_wndproc_main`** @ `0x00683610`：**全文已恢复**于 `decompiled/window_message.c`（专用 headless：timeout 3600s / payload 1024MB / JVM 6G，约 133s）。按键与 `WM_*` 表见 `hard_functions/message_map.md`
- **`ui_command_dispatch`** @ `0x0068eb20`（原 `window_input_ui_dispatch_68eb20`）：**UI 命令/控件类型 ID 分发器**，全文在 `decompiled/ui_command_dispatch.c`（约 545s 专用反编译）；旧 unclassified 桩处仅留指针注释

## hard_functions/

专用工程产物目录：`0x00683610_*`、`0x0068eb20_*`（decompile / disasm / switches / callees）以及汇总表 `message_map.md`。

## NPK/IMG

见上级 `../README.md` 中格式小节；伪代码在 `decompiled/npk_img_resource.c`（含本 pass 迁入的 map/entry/声音辅助函数）。  
**可读重建**：`reconstructed/npk_img.h`、`npk_img.cpp`、`texture_cache.h`、`texture_cache.cpp`；格式表与地址→新名见 `reconstructed/README.md`。重命名证据见 `renames.md`「NPK/IMG resource pass」。
