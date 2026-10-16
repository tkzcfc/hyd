/* Auto-decompiled pseudo-code from game.exe / window_message */
/* NOT original source. Bucketed by evidence (strings/imports/call-graph), not raw address. */

/* ==== 00661a00  window_update_or_related  size=694 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void window_update_or_related(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined1 *puVar4;
  undefined1 local_5c [4];
  undefined1 local_58 [4];
  undefined1 local_54 [4];
  undefined1 local_50 [4];
  int *local_4c;
  int local_48;
  undefined4 local_44;
  int local_40;
  int local_3c;
  int *local_38;
  int *local_34;
  int *local_30;
  int *local_2c;
  int local_28;
  int local_24;
  int local_20;
  undefined1 local_1c [4];
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  local_20 = *(int *)(param_1 + 0x10) - *(int *)(param_1 + 8);
  local_24 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x14);
  if (DAT_007ca1e4 != 0) {
    cVar1 = FUN_00427c60(DAT_007ca1e4 + 0x1c,&DAT_0076f2f4);
    if (cVar1 == '\0') {
      *(int *)(DAT_007ca1e4 + 0x54) = *(int *)(DAT_007ca1e4 + 0x54) + local_20;
      *(int *)(DAT_007ca1e4 + 0x58) = *(int *)(DAT_007ca1e4 + 0x58) + local_24;
      puVar4 = local_1c;
      FUN_00426f10(DAT_007ca1e4 + 0x98c);
      FUN_004021b0(puVar4);
      while( true ) {
        puVar4 = local_54;
        FUN_00426f10(DAT_007ca1e4 + 0x98c);
        uVar2 = FUN_00402170(puVar4);
        cVar1 = FUN_00426ed0(uVar2);
        if (cVar1 == '\0') break;
        piVar3 = (int *)FUN_0044ddc0(DAT_007ca1e4 + 0x1c);
        cVar1 = destroy<>(*piVar3 + 0x34);
        if (cVar1 != '\0') {
          piVar3 = (int *)FUN_0044ddc0();
          local_34 = (int *)(*piVar3 + 0x54);
          *local_34 = *local_34 + local_20;
          piVar3 = (int *)FUN_0044ddc0();
          local_38 = (int *)(*piVar3 + 0x58);
          *local_38 = *local_38 + local_24;
        }
        FUN_00489b50(local_50,0);
      }
      local_3c = DAT_007ca1e4 + 0x990;
      local_28 = game_loop_helper_018d0();
      local_48 = game_loop_helper_018b0();
      for (; local_28 != local_48; local_28 = local_28 + 4) {
        local_40 = local_28;
        uVar2 = FUN_00489e00(local_58);
        FUN_00489da0(local_5c,local_40);
        cVar1 = FUN_0040d2d0(uVar2);
        if (cVar1 != '\0') {
          local_44 = FUN_00426f10(local_40);
          local_2c = (int *)game_loop_helper_018d0();
          local_4c = (int *)game_loop_helper_018b0();
          for (; local_2c != local_4c; local_2c = local_2c + 1) {
            local_30 = local_2c;
            *(int *)(*local_2c + 0x54) = *(int *)(*local_2c + 0x54) + local_20;
            *(int *)(*local_2c + 0x58) = *(int *)(*local_2c + 0x58) + local_24;
          }
        }
      }
    }
    else {
      GetWindowRect(DAT_007ca22c,&local_18);
      SetWindowPos(DAT_007ca22c,(HWND)0x0,local_18.left + local_20,local_18.top + local_24,0x280,
                   0x1e0,0);
      UpdateWindow(DAT_007ca22c);
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) - local_20;
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) - local_24;
    }
  }
  return;
}


/* ==== 00683610  window_wndproc_main  size=5249 ==== */
/* DECOMPILE_FAILED: Exception while decompiling 00683610: process: timeout
 */
void window_wndproc_main(void) { /* failed */ }

/* ==== 0068e490  WinMain  size=1658 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 WinMain(HINSTANCE param_1)

{
  char cVar1;
  undefined4 *puVar2;
  WNDCLASSA local_7c;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  int local_44;
  int local_40;
  undefined4 local_3c;
  int local_38;
  undefined4 local_34;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  FILE *local_20;
  FILE *local_1c;
  FILE *local_18;
  FILE *local_14;
  FILE *local_10;
  void *local_c;
  int local_8;
  
  _DAT_007ca664 = param_1;
  cVar1 = read_dnf_login_txt();
  if (cVar1 == '\0') {
    MessageBoxA((HWND)0x0,&DAT_00774148,&DAT_00774168,0x10);
  }
  else {
    cVar1 = net_login_connect_and_spawn_thread();
    if (cVar1 == '\0') {
      MessageBoxA((HWND)0x0,&DAT_007741ec,&DAT_007741fc,0x10);
      Ordinal_3();
      net_wsa_cleanup_wrapper();
    }
    else {
      cVar1 = FUN_0068e130();
      if (cVar1 == '\0') {
        MessageBoxA((HWND)0x0,&DAT_007741b0,&DAT_007741e4,0x10);
        Ordinal_3();
        net_wsa_cleanup_wrapper();
      }
      else {
        local_7c.cbClsExtra = 0;
        local_7c.cbWndExtra = 0;
        local_7c.hIcon = (HICON)0x0;
        local_7c.hCursor = (HCURSOR)0x0;
        local_7c.hbrBackground = (HBRUSH)0x0;
        local_7c.lpszMenuName = (LPCSTR)0x0;
        local_7c.lpszClassName = (LPCSTR)0x0;
        local_7c.hInstance = param_1;
        local_7c.style = 0x48;
        local_7c.lpfnWndProc = window_wndproc_main;
        local_7c.hbrBackground = CreateSolidBrush(0);
        local_7c.lpszClassName = "DNF";
        RegisterClassA(&local_7c);
        local_44 = GetSystemMetrics(0);
        local_40 = GetSystemMetrics(1);
        DAT_007ca22c = CreateWindowExA(0,"DNF","DNF",0x80000000,0,0,local_44,local_40,(HWND)0x0,
                                       (HMENU)0x0,param_1,(LPVOID)0x0);
        if (DAT_007ca22c == (HWND)0x0) {
          Ordinal_3();
          net_wsa_cleanup_wrapper();
        }
        else {
          local_8 = 1;
          FID_conflict___rmdir("Script\\etc\\recharge.bin");
          FID_conflict___rmdir("Script\\etc\\cash.bin");
          local_10 = _fopen("Script\\etc\\MyCashRecharge.bin","rb");
          if (local_10 == (FILE *)0x0) {
            local_8 = 0;
          }
          else {
            FUN_006e940a();
          }
          local_14 = _fopen("ImagePacks2\\sprite_interface_box.NPK","rb");
          if (local_14 == (FILE *)0x0) {
            local_8 = 0;
          }
          else {
            FUN_006e940a();
          }
          local_18 = _fopen("ImagePacks2\\sprite_item_stackable_box.NPK","rb");
          if (local_18 == (FILE *)0x0) {
            local_8 = 0;
          }
          else {
            FUN_006e940a();
          }
          local_1c = _fopen("ImagePacks2\\sprite_Creature_Panda.NPK","rb");
          if (local_1c == (FILE *)0x0) {
            local_8 = 0;
          }
          else {
            FUN_006e940a();
          }
          local_20 = _fopen("ImagePacks2\\sprite_item_creature_box.NPK","rb");
          if (local_20 == (FILE *)0x0) {
            local_8 = 0;
          }
          else {
            FUN_006e940a();
          }
          if (local_8 == 0) {
            game_missing_asset_fallback();
            game_missing_asset_fallback_2();
          }
          else {
            game_missing_asset_fallback();
          }
          puVar2 = (undefined4 *)game_get_global_ptr_f2480();
          *puVar2 = 0;
          timeGetTime();
          FUN_006f3545();
          ShowCursor(0);
          local_24 = crt_or_heap_alloc_helper();
          if (local_24 == 0) {
            local_28 = 0;
          }
          else {
            local_28 = npk_or_resource_subsystem_init();
          }
          local_48 = local_28;
          DAT_007ca230 = local_28;
          local_c = (void *)crt_or_heap_alloc_helper();
          if (local_c == (void *)0x0) {
            local_2c = 0;
          }
          else {
            _memset(local_c,0,0x4c);
            local_2c = game_subsystem_init_68dde0();
          }
          local_4c = local_2c;
          DAT_007ca1a4 = local_2c;
          npk_scan_imagepacks2();
          d3d9_create_device_bootstrap();
          ShowWindow(DAT_007ca22c,3);
          UpdateWindow(DAT_007ca22c);
          game_post_d3d_init();
          net_get_adapters_info();
          local_30 = crt_or_heap_alloc_helper();
          if (local_30 == 0) {
            local_34 = 0;
          }
          else {
            local_34 = game_subsystem_init_59b0b0();
          }
          local_50 = local_34;
          DAT_007ca640 = local_34;
          local_38 = crt_or_heap_alloc_helper();
          if (local_38 == 0) {
            local_3c = 0;
          }
          else {
            local_3c = sound_dsound_create();
          }
          local_54 = local_3c;
          DAT_007ca238 = local_3c;
          FUN_004054a0(&DAT_007742c0);
          game_load_string_resource_helper();
          FUN_004054a0(&DAT_00774348);
          game_load_string_resource_helper();
          FUN_004054a0(&DAT_0077433c);
          game_load_string_resource_helper();
          FUN_004054a0(&DAT_00774330);
          game_load_string_resource_helper();
          FUN_004054a0(&DAT_00774324);
          game_load_string_resource_helper();
          FUN_004054a0(&DAT_00774390);
          game_load_string_resource_helper();
          FUN_004054a0(&DAT_00774378);
          game_load_string_resource_helper();
          FUN_004054a0(&DAT_00774364);
          game_load_string_resource_helper();
          game_startup_call_a1d60();
          game_startup_call_a1e10();
          game_startup_call_d1b40();
          game_init_before_main_loop();
          game_main_loop();
          Ordinal_3();
          net_wsa_cleanup_wrapper();
          UnregisterClassA(&DAT_00774354,param_1);
        }
      }
    }
  }
  return 0;
}

