# WndProc / UI 命令分发映射

来源：专用 Ghidra headless 反编译（`0x00683610_decompile.c` / `0x0068eb20_decompile.c`），并结合 `.text` 内对 `ui_command_dispatch` 的 `E8` 调用点上的立即数。伪代码参数已标为 `hWnd/uMsg/wParam/lParam` 与 `command_id/ui_ctx`。

## `window_wndproc_main` @ `0x00683610` — `uMsg` → 行为

| uMsg | 常量 | 行为摘要 |
|------|------|----------|
| `0x0F` | `WM_PAINT` | 调用 `ui_command_dispatch`（参数在伪代码中被省略） |
| `0x10` | `WM_CLOSE` | `DestroyWindow` + `PostQuitMessage(0)` |
| `0x12` | `WM_QUIT` | 跳到设备重建路径（与 `0x218` 共享） |
| `0x7E` | `WM_DISPLAYCHANGE` | 销毁并重建 `DAT_007ca1a4` 子系统后 `d3d9_create_device_bootstrap` |
| `0x100` | `WM_KEYDOWN` | 主按键分发（见下表）；忽略 `lParam` 的 auto-repeat 位 `0x40000000` |
| `0x101` | `WM_KEYUP` | 方向/技能键抬起；可能组网发包（`net_packet_write_*`） |
| `0x102` | `WM_CHAR` | 文本/聊天输入路径（大段缓冲与字符串对象） |
| `0x10E` | IME 相关 | `FUN_004053a0` 清理 |
| `0x10F` | `WM_IME_COMPOSITION` | `ImmGetContext` + `ImmGetCompositionStringA(..., GCS_RESULTSTR=0x800)` |
| `0x200` | `WM_MOUSEMOVE` | 更新 `DAT_007ca71c/720` 鼠标坐标 → `window_update_or_related` → `FUN_0065e180` |
| `0x201` | `WM_LBUTTONDOWN` | `ui_handle_lbutton_down`（若 `DAT_007ca1d0==0`） |
| `0x202` | `WM_LBUTTONUP` | `ui_handle_lbutton_up` |
| `0x203` | `WM_LBUTTONDBLCLK` | `ui_dispatch_focused_widget` → `ui_command_dispatch(*(focus+0x988), focus)` |
| `0x204` | `WM_RBUTTONDOWN` | `ui_reset_rmb_mode_state` |
| `0x205` | `WM_RBUTTONUP` | `ui_handle_rbutton_up`（聚焦控件 `+0x9d0` 物品/槽位） |
| `0x20A` | `WM_MOUSEWHEEL` | 取 `HIWORD(wParam)` 滚轮增量，规范化为 ±0xC |
| `0x218` | `WM_POWERBROADCAST` 等 | 重建 D3D/子系统（同显示变更路径） |
| `0x282` | `WM_IME_NOTIFY` | `wParam==3`（`IMN_OPENCANDIDATE`）时 `ImmGetCandidateListA` 填候选 |
| 其它 | — | `DefWindowProcA` |

输入关闭标志：`DAT_007ca1d0 != 0` 时多数鼠标消息被跳过。

### `WM_KEYDOWN` 内 `wParam`（VK_*）→ 游戏行为

部分键在聊天/模态（`session+0xdfb` 等）下被屏蔽。箭头键在特定视角下会左右对调。

| VK | 码 | 行为摘要 |
|----|-----|----------|
| `VK_SHIFT` | `0x10` | 置 `session+0xdfa` |
| `VK_ESCAPE` | `0x1B` | 清模态标志；对多个 UI 命令 ID 调 `ui_command_dispatch`（机器码立即数含 `0x2c6,0x15e,0x140,0x118,0x17c,0x622,0x1c2,0x5e6,0xb4,0x8c,0x3e8,0x424,…`）；`ui_clear_modal_input_state` |
| `VK_SPACE` | `0x20` | 置 `session+0xdf9`（跳跃/确认类） |
| `VK_LEFT/UP/RIGHT/DOWN` | `0x25–0x28` | 移动标志（`+0xded` 等）+ 连击/缓冲队列（`timeGetTime`） |
| `VK_1`…`VK_6` | `0x31–0x36` | 快捷栏/技能槽（`FUN_0067e820` 等） |
| `VK_A` | `0x41` | 技能/动作标志 `+0xdf2` + `FUN_00465f30` |
| `VK_C` | `0x43` | 标志 `+0xdef` |
| `VK_D` | `0x44` | 标志 `+0xdf4` + `FUN_00465f30` |
| `VK_F` | `0x46` | 标志 `+0xdf5` |
| `VK_G` | `0x47` | 标志 `+0xdf6` |
| `VK_H` | `0x48` | 标志 `+0xdf7` |
| `VK_I` | `0x49` | `ui_command_dispatch`（背包/界面开关类） |
| `VK_K` | `0x4B` | `ui_command_dispatch` |
| `VK_M` | `0x4D` | `FUN_0066b900` |
| `VK_N` | `0x4E` | 按 `session+0xdd8` 阶段分支 `ui_command_dispatch` |
| `VK_O` | `0x4F` | `ui_command_dispatch` |
| `VK_P` | `0x50` | 队伍/标记相关（遍历列表写坐标） |
| `VK_Q` | `0x51` | 按 UI 键 `0x12c0` 是否存在分支 `ui_command_dispatch` |
| `VK_S` | `0x53` | 标志 `+0xdf3` |
| `VK_U` | `0x55` | `ui_command_dispatch` |
| `VK_V` | `0x56` | 宠物/生物强化动画路径（`.ani` 字符串） |
| `VK_X` | `0x58` | 标志 `+0xdf0` + `FUN_00459220` |
| `VK_Y` | `0x59` | `ui_command_dispatch` |
| `VK_Z` | `0x5A` | 标志 `+0xdf1` |
| `VK_F1` | `0x70` | 附近交互/`ui_command_dispatch` |
| `VK_F2` | `0x71` | 切换 `game_get_f2_toggle_flag` + `FUN_0049d780` |
| `VK_F3`–`VK_F5` | `0x72–0x74` | `FUN_006634f0`（命令立即数 `0x375`） |
| `VK_F6` | `0x75` | 字符串拼装 + `FUN_0049d780` |
| `VK_F7` | `0x76` | 大块缓冲初始化（截图/调试类） |

`WM_KEYUP` 对重叠键集合（方向键、`Space`、`Z/X/C/A/S/D/F/G/H/V`）做抬起处理，并在部分状态下发送网络字段。

---

## `ui_command_dispatch` @ `0x0068eb20` — 角色与 ID 范围

**结论（高置信）**：按**整数 UI 命令 / 控件类型 ID**分发，而不是网络包 ID、音效 ID 或纯字符串表。

证据：

1. 签名 `void(int command_id, int ui_ctx)`；典型调用 `ui_command_dispatch(*(DAT_007ca1e8+0x988), DAT_007ca1e8)`（聚焦控件上的类型字段）。
2. 体表对 ID 做分段 `switch`（见 `0x0068eb20_switches.txt`）：基址 `0xA`、`0x1A4`、`0x398`、`0x532`。
3. 分支内反复用 `game_timing_or_delay_helper(UI类型常量)` + `ui_close_matching_widgets` / `ui_register_or_show_widget` / `ui_activate_widget_pair` 开关界面。
4. `.text` 中约 190 处直接 `call`；立即数 ID 含 `0x2FA/0x2FC/0x2FE/0x300/0x302`（来自 `ui_handle_lbutton_down` 一带）、`3000`、`1000`、`10001` 等。
5. 含 `DestroyWindow`/`PostQuitMessage` 等窗口收尾 callee；**无**主导 Winsock/DirectSound 路径。

### ID 范围 → 行为（概览）

| 范围 / 哨兵 | 代表 case | 行为概要 |
|-------------|-----------|----------|
| `0xA` …（表长约 `0x64`） | `10`, `0x14`, `0x28`, `0x32`… | 低号 UI：按 `ui_ctx+0x98c` 类型成对 show/hide；`0x14` 扫描列表项 `+0x9a8` 等 |
| `0x19A`, `0x528` | 稀疏 | `0x19A` 关 UI `0x32`；`0x528` 递归再分发 |
| `0x1A4` …（表长约 `0xDE`） | `0x1A4`, `0x1AE`, `0x1C2`, `0x1E0`… | 中号：打开/关闭面板、遍历 `7000` 类控件、状态翻转 |
| `0x363`…`0x38E` | 稀疏 | 过渡区单独 if |
| `0x398` …（表长约 `0xF0`） | `0x398`, `0x39B`, `0x456`… | 商店/社交/扩展面板族 |
| `0x532` …（表长约 `0xFA`） | `0x532`, `0x53C`, `0x550`…`0x62C` | 大族：物品/槽位（`ui_ctx+0x9d0`）、校验、`FUN_006634f0` 提示、买卖逻辑 |
| `0x636` | — | `game_missing_asset_fallback` 等 |
| `0xAF0`…`0xB0E`, `0xC1C`, `0xCE4`, `0xD48`… | 高稀疏 | 大面板/活动 UI；常检查 `ui_ctx+0x5c` |
| `3000` (`0xBB8`) | 调用点立即数 | 外部模块触发的命令 |
| `0xE10`, `0xF0A`, `0x35E8`… | 更高稀疏 | 稀有界面/流程 |
| `0x184AC`, `0x184C0`, `0x1869E` | 很高 | 特殊大 ID（活动/副本类 UI） |

完整 case 列表见 `decompiled/ui_command_dispatch.c`；跳转表目标地址见 `0x0068eb20_switches.txt`（Ghidra 未解析表项）。
