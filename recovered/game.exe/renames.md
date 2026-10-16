# Renamed functions — game.exe

证据来自：字符串交叉引用、导入调用、WinMain/主循环调用关系。地址范围为未分类桶，不作为命名证据。

| Address | New name | Evidence | Confidence |
|---------|----------|----------|------------|
| `004018b0` | `game_loop_helper_018b0` | main loop helper | low |
| `004018d0` | `game_loop_helper_018d0` | main loop helper | low |
| `00401a70` | `game_get_flag_object_01a70` | main loop gate before render path | low |
| `00403be0` | `img_path_loader_01` | string literal *.img path | medium |
| `00404050` | `img_path_loader_02` | string literal *.img path | medium |
| `004051c0` | `game_timing_or_delay_helper` | main loop passes constants like 0x96 / frame pacing | medium |
| `0040b1d0` | `img_path_loader_03` | string literal *.img path | medium |
| `0040b520` | `img_path_loader_04` | string literal *.img path | medium |
| `0040ce80` | `img_path_loader_05` | string literal *.img path | medium |
| `0040d500` | `game_frame_should_continue` | main loop branch before render; returns char | medium |
| `0040d7f0` | `npk_get_relative_res_path` | provides relative path appended under ImagePacks2\ | medium |
| `0040e1f0` | `game_loop_helper_0e1f0` | main loop repeated helper | low |
| `00412e30` | `img_path_loader_06` | string literal *.img path | medium |
| `004149e0` | `img_path_loader_07` | string literal *.img path | medium |
| `004165a0` | `img_path_loader_08` | string literal *.img path | medium |
| `004182f0` | `img_path_loader_09` | string literal *.img path | medium |
| `0041a080` | `img_path_loader_10` | string literal *.img path | medium |
| `0041d440` | `d3d9_create_texture` | D3DXCreateTexture | medium |
| `0042ea60` | `img_path_loader_11` | string literal *.img path | medium |
| `00432050` | `img_path_loader_12` | string literal *.img path | medium |
| `0043d840` | `img_path_loader_13` | string literal *.img path | medium |
| `0043f590` | `img_path_loader_14` | string literal *.img path | medium |
| `00441ef0` | `img_path_loader_15` | string literal *.img path | medium |
| `004444d0` | `img_path_loader_16` | string literal *.img path | medium |
| `00446b00` | `gameplay_tinkerbell_absorb_setup` | 原误标 compress；TINGKERBELL_*_ABSORB（见 NPK/IMG pass） | high |
| `00446d70` | `gameplay_effect_setup_46d70` | 原误标 compress_5_6_b；非 IMG（见 NPK/IMG pass） | medium |
| `00454ea0` | `game_get_player_or_session_blob` | main loop reads fields at +0xdeb.. from returned ptr | low |
| `00455170` | `img_path_loader_17` | string literal *.img path | medium |
| `004586c0` | `img_path_loader_18` | string literal *.img path | medium |
| `00459220` | `img_path_loader_19` | string literal *.img path | medium |
| `0045bde0` | `img_path_loader_20` | string literal *.img path | medium |
| `00467b10` | `img_path_loader_21` | string literal *.img path | medium |
| `0047ce20` | `img_path_loader_22` | string literal *.img path | medium |
| `0047d0c0` | `img_path_loader_23` | string literal *.img path | medium |
| `0049bb60` | `img_path_loader_24` | string literal *.img path | medium |
| `0049c4c0` | `img_path_loader_25` | string literal *.img path | medium |
| `004a1d60` | `game_startup_call_a1d60` | WinMain init sequence before main loop | low |
| `004a1e10` | `game_startup_call_a1e10` | WinMain init sequence before main loop | low |
| `004a3110` | `d3d9_create_texture_004a3110` | D3DXCreateTexture | medium |
| `004acd90` | `npk_path_normalize_helper` | called at start of npk_img_open_path_under_imagepacks2 | low |
| `004b1100` | `game_loop_helper_b1100` | main loop repeated helper | low |
| `004b53a0` | `d3d9_matrix_multiply` | D3DXMatrixMultiply | medium |
| `004b6010` | `d3d9_create_font_indirect` | D3DXCreateFontIndirectA | high |
| `004b6120` | `d3d9_create_device_bootstrap` | Direct3DCreate9 + D3DXCreateSprite | high |
| `004b68a0` | `npk_img_open_path_under_imagepacks2` | builds ImagePacks2\ path, CreateFileA, branches local_140==5/6 like IMG compress modes | high |
| `004b7450` | `d3d9_create_texture_004b7450` | D3DXCreateTexture | medium |
| `004b7f20` | `d3d9_create_texture_004b7f20` | D3DXCreateTexture | medium |
| `004b8870` | `d3d9_create_texture_004b8870` | D3DXCreateTexture | medium |
| `004b8a70` | `d3d9_create_texture_004b8a70` | D3DXCreateTexture | medium |
| `004b8b90` | `d3d9_create_texture_004b8b90` | D3DXCreateTexture | medium |
| `004b90c0` | `d3d9_create_texture_004b90c0` | D3DXCreateTexture | medium |
| `004b9530` | `d3d9_matrix_transform_2d` | D3DXMatrixTransformation2D | high |
| `004ba0e0` | `d3d9_create_texture_004ba0e0` | D3DXCreateTexture | medium |
| `004ba420` | `d3d9_matrix_transform_2d_004ba420` | D3DXMatrixTransformation2D | high |
| `004ba6a0` | `d3d9_matrix_transform_2d_004ba6a0` | D3DXMatrixTransformation2D | high |
| `004bd360` | `config_find_section_marker` | finds [server]/[/server] markers | high |
| `004bd6c0` | `sound_npk_load_wav_to_dsound` | 原误用 m_pBuffer8 错误串命名；NPK 内 WAV→CreateSoundBuffer（见 NPK/IMG pass） | high |
| `004bdca0` | `npk_scan_soundpacks` | SoundPacks\*.npk | high |
| `004be060` | `sound_dsound_create` | DSOUND Ordinal_11 DirectSoundCreate | high |
| `004be5c0` | `sound_load_audio_xml` | audio.xml | high |
| `004c2ed0` | `sound_createsoundbuffer_myerror_path` | CreateSoundBuffer MyError MessageBox | high |
| `004c73c0` | `config_section_span_helper` | between [server] markers | medium |
| `004d1520` | `game_get_state_ptr_d1520` | main loop cooperative-level / state checks | low |
| `004d1af0` | `game_get_state_ptr_d1af0` | main loop state checks before Clear/BeginScene | low |
| `004d1b40` | `game_startup_call_d1b40` | WinMain init sequence before main loop | low |
| `004e4ee0` | `d3d9_create_texture_004e4ee0` | D3DXCreateTexture | medium |
| `004e50d0` | `game_loop_helper_e50d0` | called from main loop path | low |
| `004f0610` | `game_sync_session_blob_f0610` | main loop after copying session fields | low |
| `004f2480` | `game_get_global_ptr_f2480` | WinMain sets *ptr=0 before timeGetTime | low |
| `004f2490` | `net_socket_recv_thread_proc` | CreateThread start routine for socket | high |
| `004f2720` | `game_missing_asset_fallback_2` | WinMain alternate missing-asset path | medium |
| `004f27a0` | `game_frame_update_or_draw_prep` | called in main loop after BeginScene/viewport setup | medium |
| `00510620` | `util_time_get_time_2` | timeGetTime wrapper | low |
| `005106c0` | `d3d9_texture_from_memory` | D3DXCreateTextureFromFileInMemory | high |
| `00510800` | `game_main_loop` | WinMain calls this; PeekMessage loop; device+0xa4 BeginScene, +0xac Clear, +0xa8 EndScene, +0x44 Present | high |
| `005385f0` | `util_time_get_time_1` | timeGetTime wrapper | low |
| `00584450` | `npk_img_subsystem_init` | WinMain 在 npk_scan_imagepacks2 前调用 → npk_img_map_init | high |
| `00584490` | `npk_scan_imagepacks2` | ImagePacks2\*.npk | high |
| `00584ac0` | `npk_img_decode_frames_from_entry` | ReadFile NPK entry; frame count at +0x1c; 0x28-byte frame records; type@+0 (0xE/F/10/11); compress@+4 (5 raw / 6 zlib via inflate) | high |
| `00585780` | `img_convert_pixels_fmt_0f` | post-inflate convert when frame type==0xF | high |
| `005858b0` | `img_convert_pixels_fmt_0e` | post-inflate convert when frame type==0xE | high |
| `0059ae60` | `etc_file_open_helper` | parse_server opens channel_info path | medium |
| `0059af00` | `etc_file_get_size_or_data` | after opening channel_info.etc | medium |
| `0059b0b0` | `game_subsystem_init_59b0b0` | WinMain after adapters info | low |
| `005cc840` | `game_loop_helper_cc840` | main loop branch helper | low |
| `005cd070` | `game_loop_helper_cd070` | main loop branch helper | low |
| `005cd6d0` | `game_loop_helper_cd6d0` | main loop branch helper | low |
| `005e7940` | `parse_server_config_section` | [server] section | high |
| `005e7c40` | `parse_server_config_cleanup` | cleanup at end of parse_server_config_section | medium |
| `005e7c70` | `parse_server_config_getline` | parse_server_config_section line reader | high |
| `005e8480` | `parse_channel_info_load_buffer` | called while loading channel_info.etc | medium |
| `005e9240` | `game_loop_helper_e9240` | repeated in main loop branches | low |
| `005ea950` | `parse_server_entry_finalize` | end of each [server] entry parse loop | medium |
| `0062f7e0` | `game_post_d3d_init` | WinMain after d3d9_create_device_bootstrap + ShowWindow | medium |
| `00642740` | `game_loop_get_context_642740` | near end of main loop message path | low |
| `00657640` | `ui_or_render_draw_helper_657640` | main loop draw helper after timing | low |
| `00661a00` | `window_update_or_related` | UpdateWindow | low |
| `0066d9b0` | `d3d9_create_texture_0066d9b0` | D3DXCreateTexture | medium |
| `006814b0` | `game_load_string_resource_helper` | WinMain repeated FUN_006814b0 after string setup | low |
| `00682a00` | `util_time_get_time` | timeGetTime wrapper | low |
| `006833d0` | `game_init_before_main_loop` | WinMain calls immediately before game_main_loop | medium |
| `00683610` | `window_wndproc_main` | WNDCLASSA.lpfnWndProc | high |
| `0068dde0` | `game_subsystem_init_68dde0` | WinMain inits 0x4c object before NPK/D3D | low |
| `0068de00` | `read_dnf_login_txt` | DnfLogin.txt | high |
| `0068dfc0` | `net_login_connect_and_spawn_thread` | socket connect + CreateThread recv | high |
| `0068e170` | `net_get_adapters_info` | GetAdaptersInfo | high |
| `0068e490` | `WinMain` | CRT calls as WinMain; CreateWindowExA class DNF | high |
| `006a3140` | `net_wsa_startup` | WSAStartup 0x202 | high |
| `006a31a0` | `net_wsa_cleanup_wrapper` | cleanup after failed login / after main loop | medium |
| `006a34a0` | `net_packet_write_field` | login thread packs fields into send buffer | medium |
| `006a34d0` | `net_packet_write_bytes` | copies DnfLogin account bytes into packet | high |
| `006a3f10` | `game_missing_asset_fallback` | WinMain when required NPK/bin missing | medium |
| `006a55d0` | `net_create_socket_or_fail` | Failed to create socket + connect 47.99.69.51 | high |
| `006aec80` | `img_or_resource_compress_5_6_d` | branches local_13c==5/6 | low |
| `006af1c0` | `img_or_resource_compress_5_6_c` | branches local_138==5/6 | low |
| `006af740` | `d3d9_create_texture_006af740` | D3DXCreateTexture | medium |
| `006aff40` | `d3d9_create_texture_006aff40` | D3DXCreateTexture | medium |
| `006b1770` | `d3d9_create_texture_006b1770` | D3DXCreateTexture | medium |
| `006b4360` | `d3d9_create_texture_006b4360` | D3DXCreateTexture | medium |
| `006bb6b0` | `d3d9_create_texture_006bb6b0` | D3DXCreateTexture | medium |
| `006bd790` | `d3d9_create_texture_006bd790` | D3DXCreateTexture | medium |
| `006c2e70` | `d3d9_create_texture_006c2e70` | D3DXCreateTexture | medium |
| `006c5d20` | `d3d9_create_texture_006c5d20` | D3DXCreateTexture | medium |
| `006caba0` | `game_loop_helper_caba0` | main loop condition helper | low |
| `006ce760` | `zlib_uncompress_buffer` | called for IMG frame compress==6 before pixel convert; feeds inflate | high |
| `006ce7b0` | `zlib_inflate` | zlib inflate error strings (invalid literal/lengths, incorrect header check, ...) | high |
| `006d0e60` | `zlib_inflate_fast_or_codes` | zlib invalid literal/length / distance code strings | high |
| `006e4b5e` | `crt_or_heap_alloc_helper` | WinMain allocation helper (repeated) | low |
| `006e5359` | `crt_scrt_common_main` | PE entry CRT -> WinMain | high |
| `006e54d5` | `entry` | PE entry point | high |
| `00709d5f` | `util_memcmp_n` | 实为 memcmp（等返回 0）；NPK 魔数 NeoplePack_Bill 校验 | high |
| `0068eb20` | `ui_command_dispatch` | 整数 UI 命令/控件类型 ID 分发（范围 0xa/0x1a4/0x398/0x532…；调用点 push 0x2fa/0x2fc/0x2fe/3000 等；聚焦控件 `*(+0x988)`） | high |

## Hard-function recovery (WndProc + ui_command_dispatch)
Dedicated Ghidra headless (timeout 3600s, payload 1024MB, JVM 6G) recovered both bodies.

| Address | New name | Evidence | Confidence |
|---------|----------|----------|------------|
| `0068eb20` | `ui_command_dispatch` | param_1=command/widget ID ranges 0xa/0x1a4/0x398/0x532…; call sites push IDs e.g. 0x2fa/0x2fc/0x2fe/3000; focused widget path uses *(obj+0x988); ESC closes many UI IDs; not net/sound | high |
| `0067a880` | `ui_dispatch_focused_widget` | WM_LBUTTONDBLCLK path: if DAT_007ca1e8+0x988 set, calls ui_command_dispatch(id, focused) | high |
| `006713a0` | `ui_handle_lbutton_down` | WndProc WM_LBUTTONDOWN (0x201) only callee when input enabled | high |
| `00671f40` | `ui_handle_lbutton_up` | WndProc WM_LBUTTONUP (0x202) only callee when input enabled; huge UI click handler | high |
| `0067a8c0` | `ui_reset_rmb_mode_state` | WndProc WM_RBUTTONDOWN (0x204): clears DAT_007ca1f8 mode enum + DAT_007ca65c | high |
| `0067a940` | `ui_handle_rbutton_up` | WndProc WM_RBUTTONUP (0x205): operates on focused widget +0x9d0 item/slot | high |
| `0065e0b0` | `ui_close_matching_widgets` | Walks UI list; clears DAT_007ca1e8/1ec focus; used after selecting UI IDs in dispatcher/ESC | high |
| `006ce000` | `ui_find_widget_by_key` | Linear search of UI list with destroy<>/key match; WndProc modal checks + dispatcher | high |
| `00671360` | `ui_clear_modal_input_state` | Clears DAT_007ca1ec+0xa38, DAT_007ca1f8/1e0/65c; called from ESC cleanup | high |
| `006426b0` | `game_get_modal_block_flag` | Returns &DAT_007ca1d3; ESC sets *flag=0 before closing UI commands | high |
| `006426d0` | `game_get_f2_toggle_flag` | Returns &DAT_007c6438; WM_KEYDOWN VK_F2 (0x71) toggles and calls FUN_0049d780 | medium |
| `0065de20` | `ui_register_or_show_widget` | Dispatcher case 10 pairs with ui_activate_widget_pair after game_timing_or_delay_helper(ID) | medium |
| `0065dee0` | `ui_activate_widget_pair` | Paired with ui_register_or_show_widget for UI type IDs at ctx+0x98c | medium |
| `0065dd40` | `ui_clear_flag_bits_on_list` | ESC path: clears byte +0x51 on each game_get_flag_object_01a70 entry | medium |
| `0069eec0` | `input_remap_vk_lookup` | WM_KEYDOWN/UP: remaps wParam via FUN_006a0400 table when FUN_0040d2d0 says remapped | medium |

## NPK/IMG resource pass (AREA 1)

证据：`npk_scan_imagepacks2` / `npk_img_decode_frames_from_entry` / `npk_scan_soundpacks` 伪代码与反汇编；索引拷贝 `npk_img_entry_copy`（+0x18/+0x1c/+0x20/+0x24/+0x3c/+0x40）；声音 `npk_sound_entry_copy`（+0x30/+0x34/+0x38）；GBK 错误串；`puchikon@…` XOR 循环。辅助函数已迁入 `decompiled/npk_img_resource.c`（unclassified 仅留指针注释）。可读重建见 `reconstructed/npk_img.*`。

| Address | New name | Evidence | Confidence |
|---------|----------|----------|------------|
| `005855f0` | `npk_img_lookup_and_decode` | 路径规范化后 map 查找；`*(node+0x58)==0`（即 entry+0x40 frames 空）则调用 `npk_img_decode_frames_from_entry` | high |
| `005856e0` | `npk_img_free_decoded_frames` | 遍历 `frame_count`，释放每帧 +0x24 像素，再释放帧表 | high |
| `005859e0` | `img_copy_pixels_fmt_10` | decode/open 在 color==0x10 raw 路径调用；按 4 字节拷贝 | high |
| `00585a50` | `npk_img_manager_release_all` | 遍历 map，对已解码条目调用 free_decoded_frames，再清空树 | high |
| `00585b10` | `npk_img_map_init` | `npk_img_subsystem_init` 唯一调用；构造 map | high |
| `00585b30` | `npk_img_map_clear_nodes` | 清空红黑树节点并重置 size | medium |
| `00585ba0` | `npk_img_map_destroy_tree` | `npk_img_map_clear` 调用 | medium |
| `00585bd0` | `npk_img_map_construct` | map 构造辅助 | medium |
| `00585c10` | `npk_img_map_allocate_sentinel` | 分配哨兵节点 | medium |
| `00585c60` | `npk_img_map_insert` | `npk_scan_imagepacks2` 每项插入 | high |
| `00585c90` | `npk_img_map_insert_commit` | insert 后提交迭代器 | medium |
| `00585e40` | `npk_img_entry_assign_for_insert` | insert 路径赋值 | medium |
| `00585eb0` | `npk_img_entry_copy` | 拷贝 +0x18 index、+0x1c offset、+0x20 size、+0x24 字符串、+0x3c/+0x40 | high |
| `00584a50` | `npk_img_entry_ctor` | 扫描循环内两项 string 构造 | high |
| `00584a80` | `npk_img_entry_dtor` | 对应析构两 string | high |
| `00584470` | `npk_img_map_clear` | release_all 末尾清空 | medium |
| `00584450` | `npk_img_subsystem_init` | 原 `npk_or_resource_subsystem_init`；WinMain 在 scan 前调用 → `npk_img_map_init` | high |
| `004be010` | `npk_sound_entry_ctor` | `npk_scan_soundpacks` 每项构造 | high |
| `004c4190` | `npk_sound_path_join_soundpacks` | 拼接 `"SoundPacks\\"` + 相对路径；`sound_npk_load_wav_to_dsound` 调用 | high |
| `004c4220` | `npk_sound_map_insert` | sound scan 插入 | high |
| `004c4250` | `npk_sound_map_insert_commit` | insert 提交 | medium |
| `004c4cd0` | `npk_sound_entry_assign_for_insert` | 声音 insert 赋值 | medium |
| `004c4d40` | `npk_sound_entry_copy` | 两 string + +0x30 index +0x34 offset +0x38 size | high |
| `004bcf10` | `npk_img_frame_ptr_at` | `index*0x28 + *ecx`；open_path 取帧 | high |
| `00426e60` | `npk_img_texture_slot_store` | open_path 每帧上传后存槽 | medium |
| `004bd6c0` | `sound_npk_load_wav_to_dsound` | 原 `npk_buffer8_error`（误用错误串命名）；读 NPK 内 WAV，CreateSoundBuffer，QI Buffer8 | high |
| `00709d5f` | `util_memcmp_n` | 原 `util_memmem_or_bytes_find`；实为 memcmp（等返回 0）；用于 `NeoplePack_Bill` 头校验 | high |
| `00446b00` | `gameplay_tinkerbell_absorb_setup` | 原误标 compress_5_6；实为 TINGKERBELL_*_ABSORB 字符串分支 | high |
| `00446d70` | `gameplay_effect_setup_46d70` | 原误标 compress_5_6_b；非 IMG 压缩分发 | medium |
