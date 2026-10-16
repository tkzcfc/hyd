/* Auto-decompiled pseudo-code from game.exe / game_main_loop */
/* NOT original source. Bucketed by evidence (strings/imports/call-graph), not raw address. */

/* ==== 004018b0  game_loop_helper_018b0  size=26 ==== */

void game_loop_helper_018b0(void)

{
  int in_ECX;
  
  _Unfancy<>(*(undefined4 *)(in_ECX + 4));
  return;
}


/* ==== 004018d0  game_loop_helper_018d0  size=25 ==== */

void game_loop_helper_018d0(void)

{
  undefined4 *in_ECX;
  
  _Unfancy<>(*in_ECX);
  return;
}


/* ==== 00401a70  game_get_flag_object_01a70  size=32 ==== */

int game_get_flag_object_01a70(int param_1)

{
  int *in_ECX;
  
  return *in_ECX + param_1 * 4;
}


/* ==== 004051c0  game_timing_or_delay_helper  size=36 ==== */

int game_timing_or_delay_helper(undefined4 param_1)

{
  int *piVar1;
  undefined1 local_10 [12];
  
  piVar1 = (int *)FUN_00405dc0(local_10,param_1);
  return *piVar1 + 0x14;
}


/* ==== 0040d500  game_frame_should_continue  size=52 ==== */

bool game_frame_should_continue(void)

{
  int *in_ECX;
  
  return *in_ECX == in_ECX[1];
}


/* ==== 0040e1f0  game_loop_helper_0e1f0  size=30 ==== */

void game_loop_helper_0e1f0(undefined4 param_1,undefined4 param_2)

{
  FUN_0040edd0(param_1,param_2);
  return;
}


/* ==== 00454ea0  game_get_player_or_session_blob  size=58 ==== */

undefined4 game_get_player_or_session_blob(void)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  piVar2 = (int *)FUN_00454e90();
  if (*piVar2 < 1) {
    uVar3 = 0;
  }
  else {
    cVar1 = FUN_00489cc0();
    if (cVar1 == '\0') {
      uVar3 = FUN_00454e90();
      puVar4 = (undefined4 *)FUN_00489c40(uVar3);
      uVar3 = *puVar4;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}


/* ==== 004b1100  game_loop_helper_b1100  size=36 ==== */

int game_loop_helper_b1100(undefined4 param_1)

{
  int *piVar1;
  undefined1 local_10 [12];
  
  piVar1 = (int *)FUN_004b12b0(local_10,param_1);
  return *piVar1 + 0x14;
}


/* ==== 004d1520  game_get_state_ptr_d1520  size=10 ==== */

undefined4 * game_get_state_ptr_d1520(void)

{
  return &DAT_007ca1b0;
}


/* ==== 004d1af0  game_get_state_ptr_d1af0  size=10 ==== */

undefined * game_get_state_ptr_d1af0(void)

{
  return &DAT_007ca738;
}


/* ==== 004e50d0  game_loop_helper_e50d0  size=60 ==== */

void game_loop_helper_e50d0(void)

{
  int iVar1;
  undefined4 local_c;
  
  iVar1 = crt_or_heap_alloc_helper(0xbc);
  if (iVar1 == 0) {
    local_c = 0;
  }
  else {
    local_c = FUN_004e5110();
  }
  DAT_007ca1c0 = local_c;
  return;
}


/* ==== 004f0610  game_sync_session_blob_f0610  size=496 ==== */

undefined4 game_sync_session_blob_f0610(int param_1,byte param_2)

{
  char cVar1;
  void *_Dst;
  int iVar2;
  undefined4 uVar3;
  size_t _Size;
  int iVar4;
  
  _Size = 0x28;
  _Dst = (void *)FUN_006f191d(0x28);
  if (_Dst != (void *)0x0) {
    _memset(_Dst,0,_Size);
  }
  iVar4 = 0;
  iVar2 = net_packet_write_field(_Dst,_Size);
  iVar2 = iVar2 + iVar4;
  iVar4 = net_packet_write_field((int)_Dst + iVar2,12000);
  iVar4 = iVar4 + iVar2;
  iVar2 = net_packet_write_bytes((int)_Dst + iVar4,&DAT_007ca204,0xc);
  iVar2 = iVar2 + iVar4;
  iVar4 = net_packet_write_field((int)_Dst + iVar2,*(undefined4 *)(param_1 + 0x1e8));
  iVar4 = iVar4 + iVar2;
  cVar1 = FUN_006a3490((int)_Dst + iVar4,*(undefined1 *)(param_1 + 0xdd8));
  iVar4 = cVar1 + iVar4;
  cVar1 = FUN_006a3490((int)_Dst + iVar4,*(undefined1 *)(param_1 + 0xadc));
  iVar4 = cVar1 + iVar4;
  cVar1 = FUN_006a3490((int)_Dst + iVar4,*(undefined1 *)(param_1 + 0xae0));
  iVar4 = cVar1 + iVar4;
  iVar2 = net_packet_write_field((int)_Dst + iVar4,*(undefined4 *)(param_1 + 0x224));
  iVar2 = iVar2 + iVar4;
  iVar4 = net_packet_write_field((int)_Dst + iVar2,*(undefined4 *)(param_1 + 0x228));
  iVar4 = iVar4 + iVar2;
  iVar2 = net_packet_write_field((int)_Dst + iVar4,*(undefined4 *)(param_1 + 500));
  iVar2 = iVar2 + iVar4;
  cVar1 = FUN_006a3490((int)_Dst + iVar2,
                       param_2 | *(char *)(param_1 + 0xdeb) << 1 | *(char *)(param_1 + 0xdec) << 2 |
                       *(char *)(param_1 + 0xded) << 3 | *(char *)(param_1 + 0xdee) << 4);
  iVar2 = cVar1 + iVar2;
  uVar3 = FUN_006a31b0(_Dst,_Size);
  FUN_006f1902(_Dst,uVar3,_Size,_Dst,iVar2);
  return 0;
}


/* ==== 004f27a0  game_frame_update_or_draw_prep  size=116237 ==== */
/* DECOMPILE_FAILED: Exception while decompiling 004f27a0: process: timeout
 */
void game_frame_update_or_draw_prep(void) { /* failed */ }

/* ==== 00510800  game_main_loop  size=11700 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void game_main_loop(void)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  int *piVar4;
  BOOL BVar5;
  undefined4 uVar6;
  char *pcVar7;
  uint uVar8;
  int iVar9;
  CDocObjectServer *pCVar10;
  int iVar11;
  float fVar12;
  undefined4 *puStack_704;
  undefined4 *puStack_700;
  undefined4 uStack_6fc;
  int local_6dc;
  tagMSG local_6b4;
  tagMSG local_698;
  undefined4 local_67c;
  undefined1 local_678 [24];
  undefined1 *local_660;
  undefined1 *local_65c;
  undefined4 local_658;
  undefined1 *local_654;
  undefined4 local_650;
  undefined1 *local_64c;
  undefined4 local_648;
  undefined1 *local_644;
  undefined4 local_640;
  undefined1 *local_63c;
  undefined4 local_638;
  undefined1 *local_634;
  undefined4 local_630;
  undefined1 *local_62c;
  undefined4 local_628;
  undefined1 *local_624;
  undefined4 local_620;
  undefined1 *local_61c;
  undefined4 local_618;
  undefined1 *local_614;
  undefined4 local_610;
  undefined4 local_60c;
  undefined4 local_608;
  undefined4 local_604;
  undefined4 local_600;
  undefined4 local_5fc;
  undefined4 local_5f8;
  undefined4 local_5f4;
  undefined4 local_5f0;
  undefined4 local_5ec;
  undefined4 local_5e8;
  undefined4 local_5e4;
  undefined4 local_5e0;
  undefined4 local_5dc;
  undefined4 local_5d8;
  undefined4 local_5d4;
  undefined4 local_5d0;
  undefined4 local_5cc;
  undefined4 local_5c8;
  undefined4 local_5c4;
  undefined4 local_5c0;
  undefined4 local_5bc;
  undefined4 local_5b8;
  int local_5b4;
  int local_5b0;
  int local_5ac;
  int local_5a8;
  undefined4 local_5a4;
  undefined4 local_5a0;
  undefined4 local_59c;
  undefined4 local_598;
  undefined4 local_594;
  undefined4 local_590;
  undefined4 local_58c;
  undefined4 local_588;
  undefined4 local_584;
  undefined4 local_580;
  undefined4 local_57c;
  undefined4 local_578;
  undefined4 local_574;
  undefined4 local_570;
  int local_56c;
  undefined4 local_568;
  undefined4 local_564;
  undefined4 local_55c;
  undefined4 *local_558;
  undefined4 *local_554;
  undefined4 *local_550;
  undefined4 *local_54c;
  int local_548;
  undefined4 local_544;
  undefined4 *local_540;
  undefined4 *local_53c;
  undefined4 *local_538;
  undefined4 *local_534;
  int local_530;
  undefined4 local_52c;
  undefined4 *local_528;
  undefined4 *local_524;
  undefined4 *local_520;
  undefined4 *local_51c;
  CDocObjectServer *local_518;
  undefined4 local_514;
  undefined4 local_510;
  undefined4 local_50c;
  undefined4 *local_508;
  undefined4 local_504;
  undefined4 *local_500;
  int local_4fc;
  int local_4f8;
  int local_4f4;
  undefined4 local_4f0;
  undefined4 local_4ec;
  undefined4 local_4e8;
  undefined4 *local_4e4;
  undefined4 local_4e0;
  undefined4 *local_4dc;
  undefined4 local_4d8;
  undefined4 *local_4d4;
  undefined4 *local_4d0;
  undefined4 *local_4cc;
  undefined4 *local_4c8;
  int local_4c4;
  int local_4c0;
  undefined4 local_4bc;
  undefined4 local_4b8;
  undefined4 local_4b4;
  undefined4 local_4b0;
  undefined4 local_4ac;
  undefined4 local_4a8;
  undefined4 local_4a4;
  undefined4 local_4a0;
  undefined4 local_49c;
  int local_498;
  int local_494;
  int local_490;
  int local_48c;
  int local_488;
  int local_484;
  int local_480;
  int local_47c;
  int local_478;
  int local_474;
  int local_470;
  int local_46c;
  int local_468;
  undefined4 local_464;
  undefined4 *local_460;
  undefined4 *local_45c;
  undefined4 *local_458;
  undefined4 *local_454;
  char *local_450;
  char *local_44c;
  uint local_448;
  int local_444;
  undefined4 local_440;
  undefined4 local_43c;
  undefined4 local_438;
  undefined4 local_434;
  undefined4 local_430;
  undefined4 local_42c;
  undefined4 local_428;
  int local_424;
  undefined4 local_420;
  undefined4 *local_41c;
  undefined4 *local_418;
  undefined4 *local_414;
  undefined4 *local_410;
  int local_40c;
  undefined4 local_408;
  undefined4 *local_404;
  undefined4 *local_400;
  undefined4 *local_3fc;
  undefined4 *local_3f8;
  undefined4 local_3f0;
  undefined4 local_3ec;
  undefined4 local_3e8;
  undefined4 local_3e4;
  undefined4 local_3e0;
  undefined4 local_3dc;
  undefined4 local_3d8;
  undefined4 local_3d4;
  undefined4 local_3d0;
  undefined4 local_3cc;
  undefined4 local_3c8;
  undefined4 local_3c4;
  undefined4 local_3c0;
  undefined4 local_3bc;
  undefined4 local_3b8;
  undefined4 local_3b4;
  undefined4 local_3b0;
  undefined4 local_3ac;
  undefined4 local_3a8;
  undefined4 local_3a4;
  undefined4 local_3a0;
  undefined4 local_39c;
  undefined4 local_398;
  undefined4 local_394;
  float *local_390;
  int *local_38c;
  int *local_388;
  int *local_384;
  int local_380;
  int local_37c;
  int local_378;
  int local_374;
  undefined4 local_370;
  uint local_36c;
  uint local_368;
  undefined4 local_364;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_360;
  undefined4 local_35c;
  int *local_358;
  int *local_354;
  int local_34c;
  int local_348;
  int local_344;
  int local_340;
  uint local_338;
  int local_334;
  int local_330;
  int local_32c;
  int local_328;
  int local_324;
  int local_320;
  int local_31c;
  int local_318;
  int local_314;
  int local_310;
  uint local_30c;
  char *local_308;
  char *local_304;
  uint local_300;
  char *local_2fc;
  char *local_2f8;
  char *local_2f4;
  char *local_2f0;
  uint local_2ec;
  char *local_2e8;
  char *local_2e4;
  uint local_2e0;
  uint local_2dc;
  uint local_2d8;
  char *local_2d4;
  char local_2cd;
  char local_2cc;
  char local_2cb;
  char local_2ca;
  char local_2c9;
  char local_2c8;
  char local_2c7;
  char local_2c6;
  char local_2c5;
  char local_2c4;
  char local_2c3;
  char local_2c2;
  undefined1 local_2c1;
  int local_2c0;
  int local_2bc;
  int local_2b8;
  int local_2b4;
  undefined1 local_2b0 [64];
  function<void___cdecl(void)> local_270 [24];
  function<void___cdecl(void)> local_258 [24];
  function<void___cdecl(void)> local_240 [24];
  function<void___cdecl(void)> local_228 [24];
  function<void___cdecl(void)> local_210 [24];
  function<void___cdecl(void)> local_1f8 [24];
  function<void___cdecl(void)> local_1e0 [24];
  function<void___cdecl(void)> local_1c8 [24];
  function<void___cdecl(void)> local_1b0 [24];
  function<void___cdecl(void)> local_198 [24];
  function<void___cdecl(void)> local_180 [24];
  function<void___cdecl(void)> local_168 [24];
  function<void___cdecl(void)> local_150 [24];
  function<void___cdecl(void)> local_138 [24];
  function<void___cdecl(void)> local_120 [24];
  function<void___cdecl(void)> local_108 [24];
  function<void___cdecl(void)> local_f0 [24];
  function<void___cdecl(void)> local_d8 [24];
  function<void___cdecl(void)> local_c0 [24];
  function<void___cdecl(void)> local_a8 [24];
  function<void___cdecl(void)> local_90 [24];
  function<void___cdecl(void)> local_78 [24];
  function<void___cdecl(void)> local_60 [24];
  undefined1 local_48 [12];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_3c [24];
  tagRECT local_24;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071714d;
  local_10 = ExceptionList;
  local_14 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  d3d9_texture_from_memory();
  if (local_6dc == 0) {
    MessageBoxA((HWND)0x0,&DAT_00753180,(LPCSTR)0x0,0);
  }
  else {
    game_loop_helper_e9240();
    local_380 = game_loop_helper_cd070();
    local_320 = local_380;
    local_310 = game_loop_helper_018d0();
    local_56c = game_loop_helper_018b0();
    for (; local_310 != local_56c; local_310 = local_310 + 0x18) {
      local_5a8 = local_310;
      game_loop_helper_e9240();
      game_loop_helper_cc840();
    }
    local_378 = local_320 + 0xc;
    local_32c = game_loop_helper_018d0();
    local_5ac = game_loop_helper_018b0();
    for (; local_32c != local_5ac; local_32c = local_32c + 0x30) {
      local_314 = local_32c;
      iVar3 = game_loop_helper_caba0();
      if (iVar3 == 0x71) {
        game_loop_helper_e9240();
        game_loop_helper_cc840();
      }
      else {
        iVar3 = game_loop_helper_caba0();
        if (iVar3 == 0x8e) {
          game_loop_helper_e9240();
          game_loop_helper_cd6d0();
        }
      }
    }
    local_37c = local_320 + 0x18;
    local_318 = game_loop_helper_018d0();
    local_5b0 = game_loop_helper_018b0();
    for (; local_318 != local_5b0; local_318 = local_318 + 0x30) {
      local_31c = local_318;
      iVar3 = game_loop_helper_caba0();
      if (iVar3 == 0x71) {
        game_loop_helper_e9240();
        game_loop_helper_cc840();
      }
      else {
        iVar3 = game_loop_helper_caba0();
        if (iVar3 == 0x8e) {
          game_loop_helper_e9240();
          game_loop_helper_cd6d0();
        }
      }
    }
    local_374 = local_320 + 0x24;
    local_328 = game_loop_helper_018d0();
    local_5b4 = game_loop_helper_018b0();
    for (; local_328 != local_5b4; local_328 = local_328 + 0x30) {
      local_324 = local_328;
      iVar3 = game_loop_helper_caba0();
      if (iVar3 == 0x71) {
        game_loop_helper_e9240();
        game_loop_helper_cc840();
      }
      else {
        iVar3 = game_loop_helper_caba0();
        if (iVar3 == 0x8e) {
          game_loop_helper_e9240();
          game_loop_helper_cd6d0();
        }
      }
    }
    local_5b8 = 0;
    local_5bc = 0x41a;
    game_loop_helper_b1100();
    game_loop_helper_0e1f0();
    local_5c0 = 0;
    local_5c4 = 0x424;
    game_loop_helper_b1100();
    game_loop_helper_0e1f0();
    local_5c8 = 0;
    local_5cc = 0x578;
    game_loop_helper_b1100();
    game_loop_helper_0e1f0();
    local_5d0 = 0;
    local_5d4 = 0x5dc;
    game_loop_helper_b1100();
    game_loop_helper_0e1f0();
    local_5d8 = 0;
    local_5dc = 0x640;
    game_loop_helper_b1100();
    game_loop_helper_0e1f0();
    local_5e0 = 0;
    local_5e4 = 0x64a;
    game_loop_helper_b1100();
    game_loop_helper_0e1f0();
    local_5e8 = 0;
    local_5ec = 0x654;
    game_loop_helper_b1100();
    game_loop_helper_0e1f0();
    local_5f0 = 0;
    local_5f4 = 0x65e;
    game_loop_helper_b1100();
    game_loop_helper_0e1f0();
    local_5f8 = 0;
    local_5fc = 0x668;
    game_loop_helper_b1100();
    game_loop_helper_0e1f0();
    local_600 = 0;
    local_604 = 0x672;
    game_loop_helper_b1100();
    game_loop_helper_0e1f0();
    local_608 = 0;
    local_60c = 0x6a4;
    game_loop_helper_b1100();
    game_loop_helper_0e1f0();
    local_394 = 0;
    local_398 = 0x708;
    game_loop_helper_b1100();
    game_loop_helper_0e1f0();
    local_39c = 0;
    local_3a0 = 0x76c;
    game_loop_helper_b1100();
    game_loop_helper_0e1f0();
    local_3a4 = 0;
    local_3a8 = 2000;
    game_loop_helper_b1100();
    game_loop_helper_0e1f0();
    local_3ac = 0;
    local_3b0 = 0x834;
    game_loop_helper_b1100();
    game_loop_helper_0e1f0();
    local_3b4 = 0;
    local_3b8 = 0x898;
    game_loop_helper_b1100();
    game_loop_helper_0e1f0();
    local_3bc = 0;
    local_3c0 = 0x8fc;
    game_loop_helper_b1100();
    game_loop_helper_0e1f0();
    local_3c4 = 0;
    local_3c8 = 0x960;
    game_loop_helper_b1100();
    game_loop_helper_0e1f0();
    local_3cc = 0;
    local_3d0 = 0x9c4;
    game_loop_helper_b1100();
    game_loop_helper_0e1f0();
    local_3d4 = 0;
    local_3d8 = 0xa28;
    game_loop_helper_b1100();
    game_loop_helper_0e1f0();
    local_3dc = 0;
    local_3e0 = 0xa8c;
    game_loop_helper_b1100();
    game_loop_helper_0e1f0();
    local_3e4 = 0;
    local_3e8 = 0xaf0;
    game_loop_helper_b1100();
    game_loop_helper_0e1f0();
    local_3ec = 0;
    local_3f0 = 0x1450;
    game_loop_helper_b1100();
    game_loop_helper_0e1f0();
    piVar4 = (int *)game_loop_get_context_642740();
    if (*piVar4 == 1) {
      game_missing_asset_fallback();
      local_2b8 = 0;
      local_364 = 0;
      game_loop_helper_e50d0();
LAB_00511059:
      while( true ) {
        uStack_6fc = 0x51107b;
        BVar5 = PeekMessageA(&local_698,(HWND)0x0,0,0,1);
        if (BVar5 == 0) {
          util_time_get_time_1();
          util_time_get_time_2();
          util_time_get_time();
          iVar3 = game_get_player_or_session_blob();
          if (iVar3 != 0) {
            iVar3 = game_get_player_or_session_blob();
            if (*(int *)(iVar3 + 0xdd8) < 4) {
              local_370 = FUN_00454ee0();
              FUN_0042a810();
              FUN_0042a7f0();
              while (cVar1 = FUN_0040d2d0(), cVar1 != '\0') {
                local_2b4 = FUN_0042a580();
                uVar2 = FUN_0065d490();
                *(undefined1 *)(*(int *)(local_2b4 + 4) + 0xe04) = uVar2;
                if (*(char *)(*(int *)(local_2b4 + 4) + 0xe04) == '\0') {
                  local_55c = 0x1518;
                  local_554 = (undefined4 *)FUN_004054a0();
                  local_8 = 0x20;
                  local_54c = local_554;
                  puStack_704 = (undefined4 *)FUN_004c7c00();
                  local_8._0_1_ = 0x21;
                  local_65c = (undefined1 *)&uStack_6fc;
                  puStack_700 = local_554;
                  local_558 = puStack_704;
                  local_550 = puStack_704;
                  local_67c = FUN_00405cf0(&uStack_6fc);
                  local_8._0_1_ = 0x22;
                  puStack_700 = &local_55c;
                  puStack_704 = (undefined4 *)0x512667;
                  puStack_700 = (undefined4 *)game_timing_or_delay_helper();
                  local_8._0_1_ = 0x21;
                  puStack_704 = (undefined4 *)0x512671;
                  FUN_0065dbd0();
                  local_8 = CONCAT31(local_8._1_3_,0x20);
                  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_180);
                  local_8 = 0xffffffff;
                  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_168);
                }
                else if ((*(char *)(*(int *)(local_2b4 + 4) + 0xe07) == '\0') ||
                        (*(char *)(*(int *)(local_2b4 + 4) + 0xe08) != '\0')) {
                  if ((*(char *)(*(int *)(local_2b4 + 4) + 0xe07) == '\0') &&
                     (*(char *)(*(int *)(local_2b4 + 4) + 0xe08) != '\0')) {
                    local_420 = 0x1518;
                    local_418 = (undefined4 *)FUN_004054a0();
                    local_8 = 3;
                    local_410 = local_418;
                    puStack_704 = (undefined4 *)FUN_004c7c00();
                    local_8._0_1_ = 4;
                    local_614 = (undefined1 *)&uStack_6fc;
                    puStack_700 = local_418;
                    local_41c = puStack_704;
                    local_414 = puStack_704;
                    local_618 = FUN_00405cf0(&uStack_6fc);
                    local_8._0_1_ = 5;
                    puStack_700 = &local_420;
                    puStack_704 = (undefined4 *)0x511416;
                    puStack_700 = (undefined4 *)game_timing_or_delay_helper();
                    local_8._0_1_ = 4;
                    puStack_704 = (undefined4 *)0x511420;
                    local_424 = ui_find_widget_by_key();
                    local_2c3 = local_424 != 0;
                    local_368 = (uint)(byte)local_2c3;
                    local_8 = CONCAT31(local_8._1_3_,3);
                    std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_108);
                    local_8 = 0xffffffff;
                    std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_f0);
                    if (local_2c3 == '\0') {
                      FUN_0058b4f0();
                    }
                    else {
                      local_438 = 0x1518;
                      local_430 = FUN_004054a0();
                      local_8 = 6;
                      local_428 = local_430;
                      local_434 = FUN_004c7c00();
                      local_8._0_1_ = 7;
                      local_61c = (undefined1 *)&puStack_704;
                      local_42c = local_434;
                      local_620 = FUN_00405cf0(&puStack_704,local_434,local_430);
                      local_8._0_1_ = 8;
                      uVar6 = game_timing_or_delay_helper(&local_438);
                      local_8._0_1_ = 7;
                      local_43c = ui_find_widget_by_key(uVar6);
                      local_440 = FUN_00427200();
                      local_2c5 = FUN_00427c60();
                      local_8 = CONCAT31(local_8._1_3_,6);
                      local_2c4 = local_2c5;
                      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_d8);
                      local_8 = 0xffffffff;
                      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_c0);
                      if (local_2c5 != '\0') {
                        FUN_00454ee0();
                        piVar4 = (int *)FUN_00489bf0();
                        local_2d4 = (char *)(*piVar4 + 0xe09);
                        local_444 = *piVar4 + 0xe0a;
                        do {
                          local_2c6 = *local_2d4;
                          local_2d4 = local_2d4 + 1;
                        } while (local_2c6 != '\0');
                        local_448 = (int)local_2d4 - local_444;
                        if (local_448 < 0x17) {
                          local_4b4 = 0x1518;
                          FUN_00454ee0();
                          FUN_00489bf0();
                          local_4a0 = FUN_004054a0();
                          local_8 = 0xd;
                          local_49c = local_4a0;
                          local_4ac = FUN_004054a0();
                          local_8._0_1_ = 0xe;
                          local_4a4 = local_4ac;
                          local_4b0 = FUN_004c7c00();
                          local_8._0_1_ = 0xf;
                          local_62c = (undefined1 *)&puStack_704;
                          local_4a8 = local_4b0;
                          local_630 = FUN_00405cf0(&puStack_704,local_4b0,local_4ac);
                          local_8._0_1_ = 0x10;
                          uVar6 = game_timing_or_delay_helper(&local_4b4);
                          local_8._0_1_ = 0xf;
                          local_4b8 = ui_find_widget_by_key(uVar6);
                          local_4bc = FUN_00427200();
                          FUN_004053e0();
                          local_8._0_1_ = 0xe;
                          std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_78)
                          ;
                          local_8 = CONCAT31(local_8._1_3_,0xd);
                          std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_60)
                          ;
                          local_8 = 0xffffffff;
                          std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                                    (local_270);
                          FUN_00454ee0();
                          piVar4 = (int *)FUN_00489bf0();
                          local_2f4 = (char *)(*piVar4 + 0xe09);
                          local_4c0 = *piVar4 + 0xe0a;
                          do {
                            local_2cc = *local_2f4;
                            local_2f4 = local_2f4 + 1;
                          } while (local_2cc != '\0');
                          local_4c4 = (int)local_2f4 - local_4c0;
                          local_4f8 = local_4c4 * 6;
                          local_4d8 = 0x1518;
                          local_4ec = 0x1518;
                          local_4d0 = (undefined4 *)FUN_004054a0();
                          local_8 = 0x11;
                          local_4c8 = local_4d0;
                          puStack_704 = (undefined4 *)FUN_004c7c00();
                          local_8._0_1_ = 0x12;
                          local_634 = (undefined1 *)&uStack_6fc;
                          puStack_700 = local_4d0;
                          local_4d4 = puStack_704;
                          local_4cc = puStack_704;
                          local_638 = FUN_00405cf0(&uStack_6fc);
                          local_8._0_1_ = 0x13;
                          puStack_700 = &local_4d8;
                          puStack_704 = (undefined4 *)0x5121a6;
                          puStack_700 = (undefined4 *)game_timing_or_delay_helper();
                          local_8._0_1_ = 0x12;
                          puStack_704 = (undefined4 *)0x5121b0;
                          local_4f4 = ui_find_widget_by_key();
                          local_4e4 = (undefined4 *)FUN_004054a0();
                          local_8._0_1_ = 0x14;
                          local_4dc = local_4e4;
                          local_4e8 = FUN_004c7c00();
                          local_8._0_1_ = 0x15;
                          local_63c = (undefined1 *)&puStack_700;
                          puStack_704 = local_4e4;
                          local_4e0 = local_4e8;
                          local_640 = FUN_00405cf0(&puStack_700,local_4e8);
                          local_8._0_1_ = 0x16;
                          puStack_704 = &local_4ec;
                          puStack_704 = (undefined4 *)game_timing_or_delay_helper();
                          local_8._0_1_ = 0x15;
                          local_4f0 = ui_find_widget_by_key();
                          local_4fc = FUN_00427200();
                          *(int *)(local_4fc + 4) = (*(int *)(local_4f4 + 0x5c) - local_4f8) / 2;
                          local_8._0_1_ = 0x14;
                          std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                                    (local_150);
                          local_8._0_1_ = 0x12;
                          std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                                    (local_258);
                          local_8 = CONCAT31(local_8._1_3_,0x11);
                          std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                                    (local_240);
                          local_8 = 0xffffffff;
                          std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                                    (local_228);
                          local_510 = 0x1518;
                          local_508 = (undefined4 *)FUN_004054a0();
                          local_8 = 0x17;
                          local_500 = local_508;
                          local_50c = FUN_004c7c00();
                          local_8._0_1_ = 0x18;
                          local_644 = (undefined1 *)&puStack_700;
                          puStack_704 = local_508;
                          local_504 = local_50c;
                          local_648 = FUN_00405cf0(&puStack_700,local_50c);
                          local_8._0_1_ = 0x19;
                          puStack_704 = &local_510;
                          puStack_704 = (undefined4 *)game_timing_or_delay_helper();
                          local_8._0_1_ = 0x18;
                          local_514 = ui_find_widget_by_key();
                          local_518 = (CDocObjectServer *)FUN_00427200();
                          CDocObjectServer::ReleaseDocSite(local_518);
                          local_8 = CONCAT31(local_8._1_3_,0x17);
                          std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                                    (local_210);
                          local_8 = 0xffffffff;
                          std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                                    (local_1f8);
                        }
                        else {
                          FUN_004054a0();
                          local_8 = 9;
                          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                          resize(local_3c,0x16,'\0');
                          for (local_2d8 = 0; (int)local_2d8 < 0x16; local_2d8 = local_2d8 + 1) {
                            FUN_00454ee0();
                            piVar4 = (int *)FUN_00489bf0();
                            iVar3 = *piVar4;
                            pcVar7 = std::
                                     basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                     ::operator[](local_3c,local_2d8);
                            *pcVar7 = *(char *)(iVar3 + 0xe09 + local_2d8);
                          }
                          local_338 = 0;
                          local_360 = local_3c;
                          local_308 = (char *)npk_get_relative_res_path();
                          local_44c = (char *)FUN_004cc180();
                          for (; local_308 != local_44c; local_308 = local_308 + 1) {
                            local_450 = local_308;
                            if (((int)*local_308 & 0x80U) != 0) {
                              local_338 = local_338 + 1;
                            }
                          }
                          local_464 = 0x1518;
                          local_45c = (undefined4 *)FUN_004054a0();
                          local_8._0_1_ = 10;
                          local_454 = local_45c;
                          puStack_704 = (undefined4 *)FUN_004c7c00();
                          local_8._0_1_ = 0xb;
                          local_624 = (undefined1 *)&uStack_6fc;
                          puStack_700 = local_45c;
                          local_460 = puStack_704;
                          local_458 = puStack_704;
                          local_628 = FUN_00405cf0(&uStack_6fc);
                          local_8._0_1_ = 0xc;
                          puStack_700 = &local_464;
                          puStack_704 = (undefined4 *)0x5117d7;
                          puStack_700 = (undefined4 *)game_timing_or_delay_helper();
                          local_8._0_1_ = 0xb;
                          puStack_704 = (undefined4 *)0x5117e1;
                          local_468 = ui_find_widget_by_key();
                          local_8._0_1_ = 10;
                          local_2bc = local_468;
                          std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_a8)
                          ;
                          local_8 = CONCAT31(local_8._1_3_,9);
                          std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_90)
                          ;
                          uVar8 = local_338 & 0x80000001;
                          if ((int)uVar8 < 0) {
                            uVar8 = (uVar8 - 1 | 0xfffffffe) + 1;
                          }
                          if (uVar8 == 0) {
                            cVar1 = '\0';
                            uVar8 = 0x16;
                            iVar3 = FUN_00427200();
                            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                            resize((basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                    *)(iVar3 + 0x10),uVar8,cVar1);
                            for (local_2e0 = 0; (int)local_2e0 < 0x16; local_2e0 = local_2e0 + 1) {
                              FUN_00454ee0();
                              piVar4 = (int *)FUN_00489bf0();
                              iVar3 = *piVar4;
                              uVar8 = local_2e0;
                              iVar9 = FUN_00427200();
                              pcVar7 = std::
                                       basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                       ::operator[]((
                                                  basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                                  *)(iVar9 + 0x10),uVar8);
                              *pcVar7 = *(char *)(iVar3 + 0xe09 + local_2e0);
                            }
                            local_330 = 0x84;
                            iVar3 = *(int *)(local_2bc + 0x5c);
                            iVar9 = FUN_00427200();
                            *(int *)(iVar9 + 4) = (iVar3 + -0x84) / 2;
                            iVar3 = FUN_00427200();
                            *(undefined4 *)(iVar3 + 8) = 7;
                            pCVar10 = (CDocObjectServer *)FUN_00427200();
                            CDocObjectServer::ReleaseDocSite(pCVar10);
                            FUN_00454ee0();
                            piVar4 = (int *)FUN_00489bf0();
                            local_2e8 = (char *)(*piVar4 + 0xe09);
                            local_484 = *piVar4 + 0xe0a;
                            do {
                              local_2ca = *local_2e8;
                              local_2e8 = local_2e8 + 1;
                            } while (local_2ca != '\0');
                            local_488 = (int)local_2e8 - local_484;
                            cVar1 = '\0';
                            uVar8 = local_488 - 0x16;
                            iVar3 = FUN_00427200();
                            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                            resize((basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                    *)(iVar3 + 0x10),uVar8,cVar1);
                            local_2ec = 0;
                            while( true ) {
                              FUN_00454ee0();
                              piVar4 = (int *)FUN_00489bf0();
                              local_2f8 = (char *)(*piVar4 + 0xe09);
                              local_48c = *piVar4 + 0xe0a;
                              do {
                                local_2cb = *local_2f8;
                                local_2f8 = local_2f8 + 1;
                              } while (local_2cb != '\0');
                              local_490 = (int)local_2f8 - local_48c;
                              if (local_490 - 0x16U <= local_2ec) break;
                              FUN_00454ee0();
                              piVar4 = (int *)FUN_00489bf0();
                              iVar3 = *piVar4;
                              uVar8 = local_2ec;
                              iVar9 = FUN_00427200();
                              pcVar7 = std::
                                       basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                       ::operator[]((
                                                  basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                                  *)(iVar9 + 0x10),uVar8);
                              *pcVar7 = *(char *)(iVar3 + 0xe1f + local_2ec);
                              local_2ec = local_2ec + 1;
                            }
                            FUN_00454ee0();
                            piVar4 = (int *)FUN_00489bf0();
                            local_2f0 = (char *)(*piVar4 + 0xe09);
                            local_494 = *piVar4 + 0xe0a;
                            do {
                              local_2cd = *local_2f0;
                              local_2f0 = local_2f0 + 1;
                            } while (local_2cd != '\0');
                            local_498 = (int)local_2f0 - local_494;
                            iVar11 = local_498 + -0x16;
                            local_330 = iVar11 * 6;
                            iVar3 = *(int *)(local_2bc + 0x5c);
                            iVar9 = FUN_00427200();
                            *(int *)(iVar9 + 4) = (iVar3 + iVar11 * -6) / 2;
                            pCVar10 = (CDocObjectServer *)FUN_00427200();
                            CDocObjectServer::ReleaseDocSite(pCVar10);
                            iVar3 = FUN_00427200();
                            *(undefined4 *)(iVar3 + 8) = 0x2d;
                            pCVar10 = (CDocObjectServer *)FUN_00427200();
                            CDocObjectServer::ReleaseDocSite(pCVar10);
                          }
                          else {
                            cVar1 = '\0';
                            uVar8 = 0x15;
                            iVar3 = FUN_00427200();
                            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                            resize((basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                    *)(iVar3 + 0x10),uVar8,cVar1);
                            for (local_2dc = 0; (int)local_2dc < 0x15; local_2dc = local_2dc + 1) {
                              FUN_00454ee0();
                              piVar4 = (int *)FUN_00489bf0();
                              iVar3 = *piVar4;
                              uVar8 = local_2dc;
                              iVar9 = FUN_00427200();
                              pcVar7 = std::
                                       basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                       ::operator[]((
                                                  basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                                  *)(iVar9 + 0x10),uVar8);
                              *pcVar7 = *(char *)(iVar3 + 0xe09 + local_2dc);
                            }
                            local_334 = 0x7e;
                            iVar3 = *(int *)(local_2bc + 0x5c);
                            iVar9 = FUN_00427200();
                            *(int *)(iVar9 + 4) = (iVar3 + -0x7e) / 2;
                            iVar3 = FUN_00427200();
                            *(undefined4 *)(iVar3 + 8) = 7;
                            pCVar10 = (CDocObjectServer *)FUN_00427200();
                            CDocObjectServer::ReleaseDocSite(pCVar10);
                            FUN_00454ee0();
                            piVar4 = (int *)FUN_00489bf0();
                            local_2e4 = (char *)(*piVar4 + 0xe09);
                            local_46c = *piVar4 + 0xe0a;
                            do {
                              local_2c7 = *local_2e4;
                              local_2e4 = local_2e4 + 1;
                            } while (local_2c7 != '\0');
                            local_470 = (int)local_2e4 - local_46c;
                            cVar1 = '\0';
                            uVar8 = local_470 - 0x15;
                            iVar3 = FUN_00427200();
                            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                            resize((basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                    *)(iVar3 + 0x10),uVar8,cVar1);
                            local_300 = 0;
                            while( true ) {
                              FUN_00454ee0();
                              piVar4 = (int *)FUN_00489bf0();
                              local_304 = (char *)(*piVar4 + 0xe09);
                              local_474 = *piVar4 + 0xe0a;
                              do {
                                local_2c8 = *local_304;
                                local_304 = local_304 + 1;
                              } while (local_2c8 != '\0');
                              local_478 = (int)local_304 - local_474;
                              if (local_478 - 0x15U <= local_300) break;
                              FUN_00454ee0();
                              piVar4 = (int *)FUN_00489bf0();
                              iVar3 = *piVar4;
                              uVar8 = local_300;
                              iVar9 = FUN_00427200();
                              pcVar7 = std::
                                       basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                       ::operator[]((
                                                  basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                                  *)(iVar9 + 0x10),uVar8);
                              *pcVar7 = *(char *)(iVar3 + 0xe1e + local_300);
                              local_300 = local_300 + 1;
                            }
                            FUN_00454ee0();
                            piVar4 = (int *)FUN_00489bf0();
                            local_2fc = (char *)(*piVar4 + 0xe09);
                            local_47c = *piVar4 + 0xe0a;
                            do {
                              local_2c9 = *local_2fc;
                              local_2fc = local_2fc + 1;
                            } while (local_2c9 != '\0');
                            local_480 = (int)local_2fc - local_47c;
                            iVar9 = local_480 + -0x15;
                            local_334 = iVar9 * 6;
                            iVar3 = *(int *)(local_2bc + 0x5c);
                            iVar11 = FUN_00427200();
                            *(int *)(iVar11 + 4) = (iVar3 + iVar9 * -6) / 2;
                            pCVar10 = (CDocObjectServer *)FUN_00427200();
                            CDocObjectServer::ReleaseDocSite(pCVar10);
                            iVar3 = FUN_00427200();
                            *(undefined4 *)(iVar3 + 8) = 0x2d;
                            pCVar10 = (CDocObjectServer *)FUN_00427200();
                            CDocObjectServer::ReleaseDocSite(pCVar10);
                          }
                          local_8 = 0xffffffff;
                          std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                                    ((function<void___cdecl(void)> *)local_3c);
                        }
                        local_52c = 0x1518;
                        local_524 = (undefined4 *)FUN_004054a0();
                        local_8 = 0x1a;
                        local_51c = local_524;
                        puStack_704 = (undefined4 *)FUN_004c7c00();
                        local_8._0_1_ = 0x1b;
                        local_64c = (undefined1 *)&uStack_6fc;
                        puStack_700 = local_524;
                        local_528 = puStack_704;
                        local_520 = puStack_704;
                        local_650 = FUN_00405cf0(&uStack_6fc);
                        local_8._0_1_ = 0x1c;
                        puStack_700 = &local_52c;
                        puStack_704 = (undefined4 *)0x51247d;
                        puStack_700 = (undefined4 *)game_timing_or_delay_helper();
                        local_8._0_1_ = 0x1b;
                        puStack_704 = (undefined4 *)0x512487;
                        local_530 = ui_find_widget_by_key();
                        *(undefined4 *)(local_530 + 0x984) = 0x32b;
                        local_8 = CONCAT31(local_8._1_3_,0x1a);
                        std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_1e0);
                        local_8 = 0xffffffff;
                        std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_1c8);
                        local_544 = 0x1518;
                        local_53c = (undefined4 *)FUN_004054a0();
                        local_8 = 0x1d;
                        local_534 = local_53c;
                        puStack_704 = (undefined4 *)FUN_004c7c00();
                        local_8._0_1_ = 0x1e;
                        local_654 = (undefined1 *)&uStack_6fc;
                        puStack_700 = local_53c;
                        local_540 = puStack_704;
                        local_538 = puStack_704;
                        local_658 = FUN_00405cf0(&uStack_6fc);
                        local_8._0_1_ = 0x1f;
                        puStack_700 = &local_544;
                        puStack_704 = (undefined4 *)0x512567;
                        puStack_700 = (undefined4 *)game_timing_or_delay_helper();
                        local_8._0_1_ = 0x1e;
                        puStack_704 = (undefined4 *)0x512571;
                        local_548 = ui_find_widget_by_key();
                        *(undefined1 *)(local_548 + 0x6e0) = 1;
                        local_8 = CONCAT31(local_8._1_3_,0x1d);
                        std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_1b0);
                        local_8 = 0xffffffff;
                        std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_198);
                      }
                    }
                  }
                }
                else {
                  local_408 = 0x1518;
                  local_400 = (undefined4 *)FUN_004054a0();
                  local_8 = 0;
                  local_3f8 = local_400;
                  puStack_704 = (undefined4 *)FUN_004c7c00();
                  local_8._0_1_ = 1;
                  local_660 = (undefined1 *)&uStack_6fc;
                  puStack_700 = local_400;
                  local_404 = puStack_704;
                  local_3fc = puStack_704;
                  local_610 = FUN_00405cf0(&uStack_6fc);
                  local_8._0_1_ = 2;
                  puStack_700 = &local_408;
                  puStack_704 = (undefined4 *)0x5112c0;
                  puStack_700 = (undefined4 *)game_timing_or_delay_helper();
                  local_8._0_1_ = 1;
                  puStack_704 = (undefined4 *)0x5112ca;
                  local_40c = ui_find_widget_by_key();
                  local_2c2 = local_40c == 0;
                  local_36c = (uint)(byte)local_2c2;
                  local_8 = (uint)local_8._1_3_ << 8;
                  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_138);
                  local_8 = 0xffffffff;
                  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_120);
                  if (local_2c2 != '\0') {
                    FUN_0058b4f0();
                  }
                }
                FUN_0042a560();
              }
            }
            else {
              local_35c = FUN_00454ee0();
              FUN_0042a810();
              FUN_0042a7f0();
              while (cVar1 = FUN_0040d2d0(), cVar1 != '\0') {
                local_2c0 = FUN_0042a580();
                if (*(int *)(local_2c0 + 4) != 0) {
                  if ((*(char *)(*(int *)(local_2c0 + 4) + 0xe05) == '\0') &&
                     (*(char *)(*(int *)(local_2c0 + 4) + 0xdb8) == '\0')) {
                    iVar3 = game_get_player_or_session_blob();
                    if (*(int *)(local_2c0 + 4) != iVar3) {
                      *(undefined1 *)(*(int *)(local_2c0 + 4) + 0xe04) = 0;
                    }
                  }
                  else if (*(char *)(*(int *)(local_2c0 + 4) + 0xe05) == '\0') {
                    if ((*(char *)(*(int *)(local_2c0 + 4) + 0xdb8) != '\0') &&
                       (iVar3 = *(int *)(local_2c0 + 4), piVar4 = (int *)FUN_004d1b20(),
                       *(int *)(iVar3 + 0xdbc) != *(int *)(*piVar4 + 0xc))) {
                      *(undefined1 *)(*(int *)(local_2c0 + 4) + 0xe04) = 0;
                    }
                  }
                  else {
                    iVar3 = *(int *)(local_2c0 + 4);
                    piVar4 = (int *)game_get_state_ptr_d1af0();
                    if ((*(int *)(iVar3 + 0x1e8) != *(int *)(*piVar4 + 0xc)) ||
                       (iVar3 = *(int *)(local_2c0 + 4), piVar4 = (int *)game_get_state_ptr_d1af0(),
                       *(int *)(iVar3 + 0x1e8) != *(int *)(*piVar4 + 8))) {
                      *(undefined1 *)(*(int *)(local_2c0 + 4) + 0xe04) = 0;
                    }
                  }
                }
                FUN_0042a560();
              }
              local_564 = 0x1518;
              game_timing_or_delay_helper();
              ui_close_matching_widgets();
            }
            iVar3 = game_get_player_or_session_blob();
            if (*(int *)(iVar3 + 0xdd8) == 5) {
              FUN_00454ee0();
              FUN_0040d380();
              game_get_state_ptr_d1af0();
              FUN_00454ee0();
              FUN_0048c970();
              cVar1 = FUN_0040d2d0();
              if (cVar1 != '\0') {
                game_get_state_ptr_d1af0();
                FUN_00454ee0();
                piVar4 = (int *)FUN_00489c40();
                *(undefined1 *)(*piVar4 + 0xe04) = 1;
              }
              FUN_00454ee0();
              FUN_0040d380();
              game_get_state_ptr_d1af0();
              FUN_00454ee0();
              FUN_0048c970();
              cVar1 = FUN_0040d2d0();
              if (cVar1 != '\0') {
                game_get_state_ptr_d1af0();
                FUN_00454ee0();
                piVar4 = (int *)FUN_00489c40();
                *(undefined1 *)(*piVar4 + 0xe04) = 1;
              }
            }
            iVar3 = game_get_player_or_session_blob();
            if ((*(int *)(iVar3 + 0xdd8) < 4) &&
               ((((uVar8 = _DAT_007ca7ec & 0xff, iVar3 = game_get_player_or_session_blob(),
                  uVar8 != *(byte *)(iVar3 + 0xdeb) ||
                  (uVar8 = _DAT_007ca7ec >> 8, iVar3 = game_get_player_or_session_blob(),
                  (uVar8 & 0xff) != (uint)*(byte *)(iVar3 + 0xdec))) ||
                 (uVar8 = _DAT_007ca7ec >> 0x10, iVar3 = game_get_player_or_session_blob(),
                 (uVar8 & 0xff) != (uint)*(byte *)(iVar3 + 0xded))) ||
                (uVar8 = _DAT_007ca7ec >> 0x18, iVar3 = game_get_player_or_session_blob(),
                uVar8 != *(byte *)(iVar3 + 0xdee))))) {
              iVar3 = game_get_player_or_session_blob();
              _DAT_007ca7ec = *(uint *)(iVar3 + 0xdeb);
              _DAT_007ca7f0 = *(undefined4 *)(iVar3 + 0xdef);
              _DAT_007ca7f4 = *(undefined4 *)(iVar3 + 0xdf3);
              _DAT_007ca7f8 = *(undefined4 *)(iVar3 + 0xdf7);
              DAT_007ca7fc = *(undefined1 *)(iVar3 + 0xdfb);
              game_get_player_or_session_blob();
              game_sync_session_blob_f0610();
            }
            iVar3 = game_get_player_or_session_blob();
            *(undefined1 *)(iVar3 + 0xe04) = 1;
          }
          local_568 = 0x96;
          game_timing_or_delay_helper();
          cVar1 = game_frame_should_continue();
          if (cVar1 == '\0') goto code_r0x005129e8;
          goto LAB_00512a1e;
        }
        while( true ) {
          uStack_6fc = 0x51109a;
          BVar5 = PeekMessageA(&local_6b4,(HWND)0x0,0x200,0x200,1);
          if (BVar5 == 0) break;
          do {
            uStack_6fc = 0x5110b9;
            BVar5 = PeekMessageA(&local_6b4,(HWND)0x0,0x200,0x200,1);
          } while (BVar5 != 0);
          DispatchMessageA(&local_6b4);
        }
        if (local_698.message == 0x12) break;
        TranslateMessage(&local_698);
        DispatchMessageA(&local_698);
      }
    }
  }
  ExceptionList = local_10;
  return;
code_r0x005129e8:
  local_5a4 = 0x96;
  game_timing_or_delay_helper();
  piVar4 = (int *)game_get_flag_object_01a70();
  if (*(char *)(*piVar4 + 0x9a8) == '\0') {
LAB_00512a1e:
    if (DAT_007ca1a4 != 0) {
      piVar4 = (int *)game_get_state_ptr_d1520();
      if (((*piVar4 == 0) || (piVar4 = (int *)game_get_state_ptr_d1520(), *(int *)(*piVar4 + 0xb4) == -1)) ||
         (piVar4 = (int *)game_get_state_ptr_d1520(), *(int *)(*piVar4 + 0xb4) != 0)) {
        piVar4 = (int *)game_get_state_ptr_d1af0();
        if ((*piVar4 == 0) || (piVar4 = (int *)game_get_state_ptr_d1af0(), *(int *)(*piVar4 + 0x1c) < 1)) {
          uStack_6fc = 0;
          puStack_700 = *(undefined4 **)(DAT_007ca1a4 + 4);
          puStack_704 = (undefined4 *)0x512b6f;
          (**(code **)(**(int **)(DAT_007ca1a4 + 4) + 0xac))();
          puStack_704 = *(undefined4 **)(DAT_007ca1a4 + 4);
          (**(code **)(**(int **)(DAT_007ca1a4 + 4) + 0xa4))();
          local_24.left = 0;
          local_24.top = 0;
          local_24.right = 0x280;
          local_24.bottom = 0x1e0;
          GetClientRect(DAT_007ca22c,&local_24);
          if ((local_24.right != DAT_007c644c) ||
             ((local_24.bottom != DAT_007c6450 || (DAT_007ca80c == '\0')))) {
            _DAT_007c6444 = local_24.left;
            _DAT_007c6448 = local_24.top;
            DAT_007c644c = local_24.right;
            DAT_007c6450 = local_24.bottom;
            (**(code **)(**(int **)(DAT_007ca1a4 + 4) + 300))
                      (*(undefined4 *)(DAT_007ca1a4 + 4),&local_24);
            (**(code **)(**(int **)(DAT_007ca1a4 + 4) + 0xe4))
                      (*(undefined4 *)(DAT_007ca1a4 + 4),0xae,1);
            DAT_007ca80c = '\x01';
          }
          (**(code **)(**(int **)(DAT_007ca1a4 + 0xc) + 0x20))
                    (*(undefined4 *)(DAT_007ca1a4 + 0xc),0x10);
          game_frame_update_or_draw_prep();
          if (DAT_007ca1d8 == 0) {
            local_570 = 7000;
            iVar3 = local_2b8;
            uVar6 = game_timing_or_delay_helper(&local_570);
            ui_or_render_draw_helper_657640(uVar6,iVar3);
            local_574 = 0x44c;
            iVar3 = local_2b8;
            uVar6 = game_timing_or_delay_helper(&local_574);
            ui_or_render_draw_helper_657640(uVar6,iVar3);
            local_578 = 0x38;
            iVar3 = local_2b8;
            uVar6 = game_timing_or_delay_helper(&local_578);
            ui_or_render_draw_helper_657640(uVar6,iVar3);
          }
          else if (DAT_007ca1d8 == 1) {
            local_57c = 7000;
            iVar3 = local_2b8;
            uVar6 = game_timing_or_delay_helper(&local_57c);
            ui_or_render_draw_helper_657640(uVar6,iVar3);
            local_580 = 0x4b0;
            iVar3 = local_2b8;
            uVar6 = game_timing_or_delay_helper(&local_580);
            ui_or_render_draw_helper_657640(uVar6,iVar3);
            local_584 = 0x514;
            iVar3 = local_2b8;
            uVar6 = game_timing_or_delay_helper(&local_584);
            ui_or_render_draw_helper_657640(uVar6,iVar3);
            local_588 = 0x38;
            iVar3 = local_2b8;
            uVar6 = game_timing_or_delay_helper(&local_588);
            ui_or_render_draw_helper_657640(uVar6,iVar3);
          }
          else if (DAT_007ca1d8 == 2) {
            if (DAT_007ca234 != 0) {
              uVar6 = game_get_player_or_session_blob();
              game_get_state_ptr_d1520(uVar6);
              FUN_004d58e0();
              FUN_004ee2d0(uVar6);
              uVar6 = game_get_player_or_session_blob((float)local_2b8,&DAT_007ca764);
              FUN_004ee660(uVar6);
              FUN_005135c0(DAT_007ca234 + 0x140,local_2b8);
              local_30c = 0;
              while (uVar8 = FUN_00426f70(), local_30c < uVar8) {
                iVar3 = local_2b8;
                iVar9 = FUN_00426f40(local_30c);
                FUN_005135c0(iVar9 + 0x290,iVar3);
                local_30c = local_30c + 1;
              }
            }
          }
          else if ((DAT_007ca1d8 == 3) && (piVar4 = (int *)game_get_state_ptr_d1520(), *piVar4 != 0)) {
            game_get_state_ptr_d1520();
            piVar4 = (int *)FUN_004d58e0();
            if (*piVar4 != 0) {
              cVar1 = game_frame_should_continue();
              local_2c1 = cVar1 == '\0';
              uVar8 = (uint)(byte)local_2c1;
              FUN_00634ac0(uVar8);
              iVar3 = FUN_0044de50();
              iVar3 = iVar3 * 0xc;
              uVar6 = 0;
              FUN_00634ac0(0,iVar3);
              FUN_0044de30(uVar6);
              iVar9 = FUN_0044e2b0();
              iVar9 = iVar9 << 4;
              uVar6 = game_get_player_or_session_blob(iVar9);
              game_get_state_ptr_d1520(uVar6);
              FUN_004d58e0();
              FUN_004ee160(uVar6,iVar9,iVar3,uVar8);
              uVar6 = game_get_player_or_session_blob((float)local_2b8,&DAT_007ca764);
              FUN_004ee660(uVar6);
              FUN_005135c0(DAT_007ca234 + 0x140,local_2b8);
              uVar6 = game_get_player_or_session_blob();
              game_get_state_ptr_d1520(uVar6);
              FUN_004e2a90(uVar6);
            }
          }
          local_58c = 0x96;
          game_timing_or_delay_helper(&local_58c);
          cVar1 = game_frame_should_continue();
          if (cVar1 == '\0') {
            local_590 = 0x96;
            local_594 = 0x96;
            uVar6 = 0;
            game_timing_or_delay_helper(&local_590);
            piVar4 = (int *)game_get_flag_object_01a70(uVar6);
            fVar12 = *(float *)(*piVar4 + 0x9a4);
            uVar6 = 0;
            game_timing_or_delay_helper(&local_594);
            piVar4 = (int *)game_get_flag_object_01a70(uVar6);
            *(int *)(*piVar4 + 0xa40) = (int)fVar12;
            local_598 = 0x96;
            uVar6 = 0;
            game_timing_or_delay_helper(&local_598);
            piVar4 = (int *)game_get_flag_object_01a70(uVar6);
            local_390 = (float *)(*piVar4 + 0x9a4);
            *local_390 = *local_390 - (float)(local_2b8 * 0x12) / 1000.0;
            local_59c = 0x96;
            uVar6 = 0;
            game_timing_or_delay_helper(&local_59c);
            piVar4 = (int *)game_get_flag_object_01a70(uVar6);
            if (*(float *)(*piVar4 + 0x9a4) <= -2700.0) {
              local_5a0 = 0x96;
              uVar6 = 0;
              game_timing_or_delay_helper(&local_5a0);
              piVar4 = (int *)game_get_flag_object_01a70(uVar6);
              *(undefined4 *)(*piVar4 + 0x9a4) = 0;
            }
          }
          piVar4 = (int *)game_get_state_ptr_d1520();
          if (*piVar4 != 0) {
            piVar4 = (int *)game_get_state_ptr_d1520();
            if (*(int *)(*piVar4 + 0xb4) == -1) {
              iVar3 = game_get_player_or_session_blob();
              if (iVar3 == 0) {
                game_get_state_ptr_d1520(local_2b8);
                FUN_004ddf00();
              }
              else {
                iVar3 = game_get_player_or_session_blob();
                if (*(char *)(iVar3 + 0xe05) == '\0') {
                  iVar3 = game_get_player_or_session_blob();
                  if ((*(char *)(iVar3 + 0xdb8) == '\0') ||
                     (iVar3 = game_get_player_or_session_blob(), *(int *)(iVar3 + 0xdd8) != 4)) {
                    game_get_state_ptr_d1520(local_2b8);
                    FUN_004ddf00();
                  }
                  else {
                    piVar4 = (int *)FUN_004d1b20();
                    if ((0 < *(int *)(*piVar4 + 0x10)) && (0 < local_2b8)) {
                      piVar4 = (int *)FUN_004d1b20();
                      if (*(int *)(*piVar4 + 0x10) < local_2b8) {
                        local_348 = 0;
                        while (piVar4 = (int *)FUN_004d1b20(), local_348 < *(int *)(*piVar4 + 0x10))
                        {
                          game_get_state_ptr_d1520(1);
                          FUN_004ddf00();
                          local_348 = local_348 + 1;
                        }
                        piVar4 = (int *)FUN_004d1b20();
                        *(undefined4 *)(*piVar4 + 0x10) = 0;
                      }
                      else {
                        for (local_344 = 0; local_344 < local_2b8; local_344 = local_344 + 1) {
                          game_get_state_ptr_d1520(1);
                          FUN_004ddf00();
                        }
                        piVar4 = (int *)FUN_004d1b20();
                        local_384 = (int *)(*piVar4 + 0x10);
                        *local_384 = *local_384 - local_2b8;
                      }
                    }
                  }
                }
                else {
                  piVar4 = (int *)game_get_state_ptr_d1af0();
                  if ((0 < *(int *)(*piVar4 + 0x18)) && (0 < local_2b8)) {
                    piVar4 = (int *)game_get_state_ptr_d1af0();
                    if (*(int *)(*piVar4 + 0x18) < local_2b8) {
                      local_340 = 0;
                      while (piVar4 = (int *)game_get_state_ptr_d1af0(), local_340 < *(int *)(*piVar4 + 0x18)) {
                        game_get_state_ptr_d1520(1);
                        FUN_004ddf00();
                        local_340 = local_340 + 1;
                      }
                      piVar4 = (int *)game_get_state_ptr_d1af0();
                      *(undefined4 *)(*piVar4 + 0x18) = 0;
                    }
                    else {
                      for (local_34c = 0; local_34c < local_2b8; local_34c = local_34c + 1) {
                        game_get_state_ptr_d1520(1);
                        FUN_004ddf00();
                      }
                      piVar4 = (int *)game_get_state_ptr_d1af0();
                      local_38c = (int *)(*piVar4 + 0x18);
                      *local_38c = *local_38c - local_2b8;
                    }
                  }
                }
              }
            }
            else {
              piVar4 = (int *)game_get_state_ptr_d1520();
              if (*(int *)(*piVar4 + 0xb4) == 0) {
                piVar4 = (int *)game_get_state_ptr_d1520();
                local_388 = (int *)(*piVar4 + 0xb8);
                *local_388 = *local_388 + local_2b8;
                piVar4 = (int *)game_get_state_ptr_d1520();
                if (0x5db < *(int *)(*piVar4 + 0xb8)) {
                  piVar4 = (int *)game_get_state_ptr_d1520();
                  *(undefined4 *)(*piVar4 + 0xb8) = 0;
                  piVar4 = (int *)game_get_state_ptr_d1520();
                  *(undefined4 *)(*piVar4 + 0xb4) = 1;
                }
                game_get_state_ptr_d1520(0);
                FUN_004ddf00();
              }
              else {
                piVar4 = (int *)game_get_state_ptr_d1520();
                if (*(int *)(*piVar4 + 0xb4) == 1) {
                  game_get_state_ptr_d1520(local_2b8);
                  FUN_004ddf00();
                }
              }
            }
            iVar3 = local_2b8;
            game_get_state_ptr_d1520(local_2b8);
            FUN_004dd0f0(iVar3);
          }
          fVar12 = (float)local_2b8;
          FUN_004e50c0(fVar12);
          FUN_004e82c0(fVar12);
          iVar3 = game_get_player_or_session_blob();
          if (iVar3 != 0) {
            uVar6 = game_get_player_or_session_blob(&DAT_007ca764);
            FUN_004e84c0(uVar6);
          }
          FUN_005147a0(local_364);
          pcVar7 = (char *)game_get_modal_block_flag();
          if (*pcVar7 != '\0') {
            FUN_004b5650(0);
            FUN_004b5370(0x3e4ccccd,0x3e4ccccd);
            allocator<>();
            D3DXMatrixTransformation2D(local_2b0,0,0,local_678,0,0,0);
            (**(code **)(**(int **)(DAT_007ca1a4 + 0xc) + 0x14))
                      (*(undefined4 *)(DAT_007ca1a4 + 0xc),local_2b0);
            FUN_004a6f40(0x44070000,0x43200000,0);
            (**(code **)(**(int **)(DAT_007ca1a4 + 0xc) + 0x24))
                      (*(undefined4 *)(DAT_007ca1a4 + 0xc),local_6dc,0,0,local_48,0xffffffff);
          }
          if (DAT_007ca1d0 == '\0') {
            FUN_00660290(&DAT_007ca70c,(float)local_2b8);
          }
          (**(code **)(**(int **)(DAT_007ca1a4 + 0xc) + 0x2c))(*(undefined4 *)(DAT_007ca1a4 + 0xc));
          (**(code **)(**(int **)(DAT_007ca1a4 + 4) + 0xa8))(*(undefined4 *)(DAT_007ca1a4 + 4));
          (**(code **)(**(int **)(DAT_007ca1a4 + 4) + 0x44))
                    (*(undefined4 *)(DAT_007ca1a4 + 4),0,0,0,0);
        }
        else {
          piVar4 = (int *)game_get_state_ptr_d1af0();
          local_354 = (int *)(*piVar4 + 0x1c);
          *local_354 = *local_354 - local_2b8;
          piVar4 = (int *)game_get_state_ptr_d1af0();
          if (*(int *)(*piVar4 + 0x1c) < 1) {
            game_get_state_ptr_d1af0();
            FUN_004d1440();
            DAT_007ca1d8 = 2;
            game_missing_asset_fallback();
            game_missing_asset_fallback_2();
          }
        }
      }
      else {
        piVar4 = (int *)game_get_state_ptr_d1520();
        local_358 = (int *)(*piVar4 + 0xb8);
        *local_358 = *local_358 + local_2b8;
        piVar4 = (int *)game_get_state_ptr_d1520();
        if (0x5db < *(int *)(*piVar4 + 0xb8)) {
          piVar4 = (int *)game_get_state_ptr_d1520();
          *(undefined4 *)(*piVar4 + 0xb8) = 0;
          piVar4 = (int *)game_get_state_ptr_d1520();
          *(undefined4 *)(*piVar4 + 0xb4) = 1;
        }
      }
    }
  }
  goto LAB_00511059;
}


/* ==== 005cc840  game_loop_helper_cc840  size=413 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 game_loop_helper_cc840(void)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 local_40;
  function<void___cdecl(void)> local_2c [24];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00716f5d;
  local_10 = ExceptionList;
  local_14 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_0040d380();
  FUN_0048c970();
  cVar1 = FUN_0040d2d0();
  if (cVar1 == '\0') {
    FUN_005a7ab0();
    local_8 = 0;
    cVar1 = FUN_00427c60();
    if (cVar1 != '\0') {
      MessageBoxA((HWND)0x0,&DAT_007622cc,(LPCSTR)0x0,0);
    }
    FUN_00405520(local_2c);
    uVar3 = FUN_005c0660();
    FUN_005bf060();
    puVar2 = (undefined4 *)FUN_005ea810();
    *puVar2 = uVar3;
    FUN_0040d380();
    FUN_0048c970();
    cVar1 = FUN_0040d2d0();
    if (cVar1 == '\0') {
      local_40 = 0;
      local_8 = 0xffffffff;
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_2c);
    }
    else {
      puVar2 = (undefined4 *)FUN_005ea810();
      local_40 = *puVar2;
      local_8 = 0xffffffff;
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_2c);
    }
  }
  else {
    puVar2 = (undefined4 *)FUN_005ea810();
    local_40 = *puVar2;
  }
  ExceptionList = local_10;
  return local_40;
}


/* ==== 005cd070  game_loop_helper_cd070  size=1485 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined * game_loop_helper_cd070(void)

{
  int iVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  undefined1 auStack_88 [4];
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined1 *puStack_7c;
  char *pcStack_78;
  code *pcStack_74;
  uint uStack_70;
  undefined1 local_6c [4];
  undefined1 local_68 [4];
  undefined1 local_64 [4];
  undefined1 *local_60;
  undefined4 local_5c;
  int local_58;
  int local_54;
  int local_4c;
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0072034d;
  local_10 = ExceptionList;
  uStack_70 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uStack_70;
  if (*(int *)(*(int *)ThreadLocalStoragePointer + 4) < DAT_007cb018) {
    pcStack_74 = (code *)&DAT_007cb018;
    pcStack_78 = (char *)0x5cd0bb;
    FUN_006e4c3b();
    if (DAT_007cb018 == -1) {
      pcStack_74 = (code *)0x5cd0d1;
      FUN_005cd640();
      pcStack_74 = FUN_0072ac60;
      pcStack_78 = (char *)0x5cd0db;
      FUN_006e4fef();
      pcStack_74 = (code *)&DAT_007cb018;
      pcStack_78 = (char *)0x5cd0e8;
      FUN_006e4bea();
    }
  }
  pcStack_74 = (code *)0x5cd0f5;
  iVar1 = FUN_004274f0();
  if (iVar1 == 0) {
    local_60 = auStack_88;
    FUN_004054a0("etc/newcashshop.etc");
    local_58 = etc_file_get_size_or_data();
    local_4c = *(int *)(local_58 + 0x18) + *(int *)(local_58 + 8);
    pcStack_78 = *(char **)(local_58 + 0x18);
    pcStack_74 = (code *)0x762348;
    puStack_7c = (undefined1 *)0x5cd14c;
    local_54 = local_58;
    local_48 = (int)pcStack_78;
    iVar1 = config_find_section_marker();
    pcStack_78 = (char *)(iVar1 + -3);
    pcStack_74 = (code *)local_4c;
    puStack_7c = (undefined1 *)0x5cd168;
    local_48 = (int)pcStack_78;
    uStack_80 = config_section_span_helper();
    pcStack_74 = (code *)&DAT_007cb1a0;
    pcStack_78 = "[avatar]";
    puStack_7c = (undefined1 *)local_4c;
    uStack_84 = 0x5cd188;
    local_48 = uStack_80;
    FUN_005a5dc0();
    pcStack_74 = (code *)0x76232c;
    pcStack_78 = (char *)local_48;
    puStack_7c = (undefined1 *)0x5cd196;
    iVar1 = config_find_section_marker();
    pcStack_78 = (char *)(iVar1 + -3);
    pcStack_74 = (code *)local_4c;
    puStack_7c = (undefined1 *)0x5cd1b2;
    local_48 = (int)pcStack_78;
    uStack_80 = config_section_span_helper();
    pcStack_74 = (code *)&DAT_007cb1ac;
    pcStack_78 = "[coin]";
    puStack_7c = (undefined1 *)local_4c;
    uStack_84 = 0x5cd1d2;
    local_48 = uStack_80;
    FUN_005a63d0();
    pcStack_74 = (code *)0x76237c;
    pcStack_78 = (char *)local_48;
    puStack_7c = (undefined1 *)0x5cd1e0;
    iVar1 = config_find_section_marker();
    pcStack_78 = (char *)(iVar1 + -3);
    pcStack_74 = (code *)local_4c;
    puStack_7c = (undefined1 *)0x5cd1fc;
    local_48 = (int)pcStack_78;
    uStack_80 = config_section_span_helper();
    pcStack_74 = (code *)&DAT_007cb1b8;
    pcStack_78 = "[item]";
    puStack_7c = (undefined1 *)local_4c;
    uStack_84 = 0x5cd21c;
    local_48 = uStack_80;
    FUN_005a63d0();
    pcStack_74 = (code *)0x5cd232;
    FUN_00596a40();
    local_8 = 0;
    local_44 = 0x186eb;
    local_40 = 10;
    local_3c = 1;
    local_38 = 0;
    local_34 = 0;
    local_30 = 0xa8c;
    pcStack_74 = (code *)&DAT_0076236c;
    pcStack_78 = (char *)0x5cd270;
    FUN_004053a0();
    pcStack_74 = (code *)&local_44;
    pcStack_78 = (char *)0x5cd27e;
    FUN_005eaee0();
    local_44 = 0x186d9;
    local_40 = 0x2b;
    local_30 = 0x44c;
    pcStack_74 = (code *)&DAT_007623d0;
    pcStack_78 = (char *)0x5cd2a0;
    FUN_004053a0();
    pcStack_74 = (code *)&local_44;
    pcStack_78 = (char *)0x5cd2ae;
    FUN_005eaee0();
    local_44 = 0x186da;
    local_40 = 0x2c;
    local_30 = 0xc4e;
    pcStack_74 = (code *)&DAT_007623bc;
    pcStack_78 = (char *)0x5cd2d0;
    FUN_004053a0();
    pcStack_74 = (code *)&local_44;
    pcStack_78 = (char *)0x5cd2de;
    FUN_005eaee0();
    local_44 = 0x186db;
    local_40 = 0x2d;
    local_30 = 0x1b26;
    pcStack_74 = (code *)&DAT_007623a8;
    pcStack_78 = (char *)0x5cd300;
    FUN_004053a0();
    pcStack_74 = (code *)&local_44;
    pcStack_78 = (char *)0x5cd30e;
    FUN_005eaee0();
    local_44 = 0x186dc;
    local_40 = 0x2e;
    local_30 = 0x34ee;
    pcStack_74 = (code *)&DAT_00762394;
    pcStack_78 = (char *)0x5cd330;
    FUN_004053a0();
    pcStack_74 = (code *)&local_44;
    pcStack_78 = (char *)0x5cd33e;
    FUN_005eaee0();
    local_44 = 0x186c6;
    local_40 = 0x1e;
    local_30 = 0x28a;
    pcStack_74 = (code *)&DAT_00762420;
    pcStack_78 = (char *)0x5cd360;
    FUN_004053a0();
    pcStack_74 = (code *)&local_44;
    pcStack_78 = (char *)0x5cd36e;
    FUN_005eaee0();
    local_44 = 0x186c7;
    local_40 = 0x1f;
    local_30 = 0x73a;
    pcStack_74 = (code *)&DAT_0076240c;
    pcStack_78 = (char *)0x5cd390;
    FUN_004053a0();
    pcStack_74 = (code *)&local_44;
    pcStack_78 = (char *)0x5cd39e;
    FUN_005eaee0();
    local_44 = 0x186c9;
    local_40 = 0x21;
    local_30 = 0xed8;
    pcStack_74 = (code *)&DAT_007623f8;
    pcStack_78 = (char *)0x5cd3c0;
    FUN_004053a0();
    pcStack_74 = (code *)&local_44;
    pcStack_78 = (char *)0x5cd3ce;
    FUN_005eaee0();
    local_44 = 0x186ca;
    local_40 = 0x22;
    local_30 = 0x1ac2;
    pcStack_74 = (code *)&DAT_007623e4;
    pcStack_78 = (char *)0x5cd3f0;
    FUN_004053a0();
    pcStack_74 = (code *)&local_44;
    pcStack_78 = (char *)0x5cd3fe;
    FUN_005eaee0();
    local_44 = 0x186ae;
    local_40 = 0xe;
    local_30 = 1000;
    pcStack_74 = (code *)&DAT_00762458;
    pcStack_78 = (char *)0x5cd420;
    FUN_004053a0();
    pcStack_74 = (code *)&local_44;
    pcStack_78 = (char *)0x5cd42e;
    FUN_005eaee0();
    local_44 = 0x186af;
    local_3c = 5;
    local_30 = 0x1324;
    pcStack_74 = (code *)&local_44;
    pcStack_78 = (char *)0x5cd451;
    FUN_005eaee0();
    local_44 = 0x186b0;
    local_3c = 10;
    local_30 = 9000;
    pcStack_74 = (code *)&local_44;
    pcStack_78 = (char *)0x5cd474;
    FUN_005eaee0();
    local_44 = 0x186b1;
    local_3c = 0x1e;
    local_30 = 0x639c;
    pcStack_74 = (code *)&local_44;
    pcStack_78 = (char *)0x5cd497;
    FUN_005eaee0();
    local_44 = 0x186c1;
    local_40 = 0x15;
    local_3c = 1;
    local_30 = 1000;
    pcStack_74 = (code *)&DAT_0076244c;
    pcStack_78 = (char *)0x5cd4c0;
    FUN_004053a0();
    pcStack_74 = (code *)&local_44;
    pcStack_78 = (char *)0x5cd4ce;
    FUN_005eaee0();
    local_44 = 0x186cc;
    local_3c = 5;
    local_30 = 0x1194;
    pcStack_74 = (code *)&local_44;
    pcStack_78 = (char *)0x5cd4f1;
    FUN_005eaee0();
    local_44 = 0x186cd;
    local_3c = 10;
    local_30 = 0x2134;
    pcStack_74 = (code *)&local_44;
    pcStack_78 = (char *)0x5cd514;
    FUN_005eaee0();
    local_44 = 0x1c3a90;
    local_40 = 0x2e2;
    local_3c = 1;
    local_30 = 300;
    pcStack_74 = (code *)&DAT_00762440;
    pcStack_78 = (char *)0x5cd53d;
    FUN_004053a0();
    pcStack_74 = (code *)&local_44;
    pcStack_78 = (char *)0x5cd54b;
    FUN_005eaee0();
    local_44 = 0x1c3a91;
    local_3c = 10;
    local_30 = 0xaf0;
    pcStack_74 = (code *)&local_44;
    pcStack_78 = (char *)0x5cd56e;
    FUN_005eaee0();
    local_44 = 0x1c3a92;
    local_3c = 0x1e;
    local_30 = 0x1fa4;
    pcStack_74 = (code *)&local_44;
    pcStack_78 = (char *)0x5cd591;
    FUN_005eaee0();
    local_8 = 0xffffffff;
    pcStack_74 = (code *)0x5cd5a0;
    FUN_004292c0();
    pcStack_74 = (code *)&DAT_007cb1c4;
    pcStack_78 = "[creature]";
    puStack_7c = (undefined1 *)local_4c;
    uStack_80 = local_48;
    uStack_84 = 0x5cd5bb;
    FUN_005a63d0();
    pcStack_74 = (code *)0x3;
    pcStack_78 = local_64;
    puStack_7c = local_68;
    uStack_80 = 0x5cd5d0;
    FUN_004021b0();
    puStack_7c = (undefined1 *)0x5cd5d7;
    puVar3 = (undefined4 *)FUN_005ea140();
    pcStack_74 = (code *)*puVar3;
    pcStack_78 = local_6c;
    puStack_7c = (undefined1 *)0x5cd5ee;
    local_5c = pcStack_74;
    FUN_00427050();
    pcStack_74 = (code *)&DAT_007cb1d0;
    pcStack_78 = "[gift disallowance]";
    puStack_7c = (undefined1 *)local_4c;
    uStack_80 = *(undefined4 *)(local_54 + 0x18);
    uStack_84 = 0x5cd60c;
    FUN_005a3df0();
    pcStack_74 = (code *)0x5cd617;
    iVar1 = FUN_004274f0();
    if (iVar1 == 0) {
      puVar2 = (undefined *)0x0;
    }
    else {
      puVar2 = &DAT_007cb1a0;
    }
  }
  else {
    puVar2 = &DAT_007cb1a0;
  }
  ExceptionList = local_10;
  return puVar2;
}


/* ==== 005cd6d0  game_loop_helper_cd6d0  size=7423 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 game_loop_helper_cd6d0(int param_1)

{
  undefined4 uVar1;
  undefined1 uVar2;
  char cVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  undefined4 local_67c;
  int local_660;
  char *local_654;
  char *local_650;
  char *local_640;
  function<void___cdecl(void)> local_634 [24];
  WorkQueue local_61c [36];
  undefined1 local_5f8 [28];
  undefined1 local_5dc [28];
  undefined1 local_5c0 [28];
  undefined1 local_5a4 [28];
  undefined4 local_588;
  undefined4 local_584;
  undefined4 local_580;
  undefined4 local_57c;
  undefined4 local_578;
  undefined4 local_574;
  undefined4 local_570;
  undefined4 local_56c;
  undefined4 local_568;
  undefined4 local_564;
  undefined4 local_560;
  undefined4 local_55c;
  undefined4 local_558;
  undefined4 local_554;
  undefined4 local_550;
  undefined4 local_54c;
  undefined4 local_548;
  undefined4 local_544;
  undefined4 local_540;
  undefined4 local_53c;
  undefined4 local_538;
  undefined4 local_534;
  undefined4 local_530;
  undefined4 local_52c;
  undefined4 local_528;
  undefined4 local_524;
  undefined4 local_520;
  undefined4 local_51c;
  undefined4 local_518;
  undefined4 local_514;
  undefined4 local_510;
  undefined4 local_50c;
  undefined4 local_508;
  undefined4 local_504;
  undefined4 local_500;
  undefined4 local_4fc;
  undefined4 local_4f8;
  undefined4 local_4f4;
  undefined4 local_4f0;
  undefined4 local_4ec;
  undefined4 local_4e8;
  undefined4 local_4e4;
  undefined4 local_4e0;
  undefined4 local_4dc;
  undefined4 local_4d8;
  undefined4 local_4d4;
  undefined4 local_4d0;
  undefined4 local_4cc;
  undefined4 local_4c8;
  undefined4 local_4c4;
  undefined4 local_4c0;
  undefined4 local_4bc;
  undefined4 local_4b8;
  undefined4 local_4b4;
  undefined4 local_4b0;
  undefined4 local_4ac;
  undefined4 local_4a8;
  undefined4 local_4a4;
  undefined4 local_4a0;
  undefined4 local_49c;
  undefined4 local_498;
  undefined4 local_494;
  undefined4 local_490;
  undefined4 local_48c;
  undefined4 local_488;
  undefined4 local_484;
  undefined4 local_480;
  undefined4 local_47c;
  undefined4 local_478;
  undefined4 local_474;
  undefined4 local_470;
  undefined4 local_46c;
  undefined4 local_468;
  undefined4 local_464;
  undefined4 local_460;
  undefined4 local_45c;
  undefined4 local_458;
  undefined4 local_454;
  undefined4 local_450;
  undefined4 local_44c;
  undefined4 local_448;
  undefined4 local_444;
  undefined4 local_440;
  undefined4 local_43c;
  undefined4 local_438;
  undefined4 local_434;
  undefined4 local_430;
  undefined4 local_42c;
  undefined4 local_428;
  undefined4 local_424;
  undefined4 local_420;
  undefined4 local_41c;
  undefined4 local_418;
  undefined4 local_414;
  undefined4 local_410;
  undefined4 local_40c;
  undefined4 local_408;
  undefined4 local_404;
  undefined4 local_400;
  undefined4 local_3fc;
  undefined4 local_3f8;
  undefined4 local_3f4;
  undefined4 local_3f0;
  undefined4 local_3ec;
  undefined4 local_3e8;
  undefined4 local_3e4;
  undefined4 local_3e0;
  undefined4 local_3dc;
  undefined4 local_3d8;
  undefined4 local_3d4;
  undefined4 local_3d0;
  undefined4 local_3cc;
  undefined4 local_3c8;
  undefined4 local_3c4;
  undefined4 local_3c0;
  undefined4 local_3bc;
  undefined4 local_3b8;
  undefined4 local_3b4;
  undefined4 local_3b0;
  undefined4 local_3ac;
  undefined4 local_3a8;
  undefined4 local_3a4;
  undefined4 local_3a0;
  undefined4 local_39c;
  undefined4 local_398;
  undefined4 local_394;
  undefined4 local_390;
  undefined4 local_38c;
  undefined4 local_388;
  undefined4 local_384;
  undefined4 local_380;
  undefined4 local_37c;
  undefined4 local_378;
  undefined4 local_374;
  undefined4 local_370;
  undefined4 local_36c;
  undefined4 local_368;
  undefined4 local_364;
  undefined4 local_360;
  undefined4 local_35c;
  undefined4 local_358;
  undefined4 local_354;
  undefined4 local_350;
  undefined4 local_34c;
  undefined4 local_348;
  undefined4 local_344;
  undefined4 local_340;
  undefined4 local_33c;
  undefined4 local_338;
  undefined4 local_334;
  undefined4 local_330;
  undefined4 local_32c;
  undefined4 local_328;
  undefined4 local_324;
  undefined4 local_320;
  undefined4 local_31c;
  undefined4 local_318;
  undefined4 local_314;
  undefined4 local_310;
  undefined4 local_30c;
  undefined4 local_308;
  undefined4 local_304;
  undefined4 local_300;
  undefined4 local_2fc;
  undefined4 local_2f8;
  undefined4 local_2f4;
  undefined4 local_2f0;
  undefined4 local_2ec;
  undefined4 local_2e8;
  undefined4 local_2e4;
  undefined4 local_2e0;
  undefined4 local_2dc;
  undefined4 local_2d8;
  undefined4 local_2d4;
  undefined4 local_2d0;
  undefined4 local_2cc;
  undefined4 local_2c8;
  undefined4 local_2c4;
  undefined4 local_2c0;
  undefined4 local_2bc;
  undefined4 local_2b8;
  undefined4 local_2b4;
  undefined4 local_2b0;
  undefined4 local_2ac;
  undefined4 local_2a8;
  undefined4 local_2a4;
  undefined4 local_2a0;
  undefined4 local_29c;
  undefined4 local_298;
  undefined4 local_294;
  undefined4 local_290;
  undefined4 local_28c;
  undefined4 local_288;
  undefined4 local_284;
  undefined4 local_280;
  undefined4 local_27c;
  undefined4 local_278;
  undefined4 local_274;
  undefined4 local_270;
  undefined4 local_26c;
  undefined4 local_268;
  undefined4 local_264;
  undefined4 local_260;
  undefined4 local_25c;
  undefined4 local_258;
  undefined4 local_254;
  undefined4 local_250;
  undefined4 local_24c;
  undefined4 local_248;
  undefined4 local_244;
  undefined4 local_240;
  undefined4 local_23c;
  undefined4 local_238;
  undefined4 local_234;
  undefined4 local_230;
  undefined4 local_22c;
  undefined4 local_228;
  undefined4 local_224;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 local_218;
  undefined4 local_214;
  undefined4 local_210;
  undefined4 local_20c;
  undefined4 local_208;
  undefined4 local_204;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  function<void___cdecl(void)> local_12c [24];
  char local_114 [256];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00720408;
  local_10 = ExceptionList;
  local_14 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_0040d380();
  FUN_0048c970();
  cVar3 = FUN_0040d2d0();
  if (cVar3 == '\0') {
    FUN_005a7ab0();
    local_8 = 0;
    cVar3 = FUN_00427c60();
    if (cVar3 != '\0') {
      MessageBoxA((HWND)0x0,&DAT_00762474,(LPCSTR)0x0,0);
    }
    iVar5 = crt_or_heap_alloc_helper();
    local_8._0_1_ = 1;
    if (iVar5 == 0) {
      local_660 = 0;
    }
    else {
      local_660 = FUN_0059a230();
    }
    local_8._0_1_ = 0;
    uVar2 = (undefined1)local_8;
    local_8._0_1_ = 0;
    if (param_1 == 0x1c69) {
      FUN_004053a0();
      FUN_004053a0();
      *(undefined4 *)(local_660 + 0x78) = 1;
      FUN_004053a0();
      *(undefined4 *)(local_660 + 0x94) = 3;
      FUN_004054a0();
      local_8._0_1_ = 2;
      FUN_00401880();
      FUN_00581cb0();
      local_8._0_1_ = 0;
      _eh_vector_destructor_iterator_
                (local_5c0,0x18,1,std::function<void___cdecl(void)>::~function<void___cdecl(void)>);
      *(undefined4 *)(local_660 + 0xa8) = 1;
      *(undefined4 *)(local_660 + 0xac) = 1000;
      FUN_004053a0();
      *(undefined4 *)(local_660 + 200) = 0xbb;
      FUN_004053a0();
      *(undefined4 *)(local_660 + 0x100) = 1;
      *(undefined4 *)(local_660 + 0x104) = 10;
      FUN_004053a0();
      piVar6 = (int *)FUN_005ea7b0();
      *piVar6 = local_660;
      FUN_0040d380();
      FUN_0048c970();
      cVar3 = FUN_0040d2d0();
      if (cVar3 != '\0') {
        puVar4 = (undefined4 *)FUN_005ea7b0();
        uVar1 = *puVar4;
        local_8 = 0xffffffff;
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_12c);
        ExceptionList = local_10;
        return uVar1;
      }
    }
    else {
      local_8._0_1_ = uVar2;
      if (param_1 == 0x1c6a) {
        FUN_004053a0();
        FUN_004053a0();
        *(undefined4 *)(local_660 + 0x78) = 1;
        FUN_004053a0();
        *(undefined4 *)(local_660 + 0x94) = 3;
        FUN_004054a0();
        local_8._0_1_ = 3;
        FUN_00401880();
        FUN_00581cb0();
        local_8._0_1_ = 0;
        _eh_vector_destructor_iterator_
                  (local_5a4,0x18,1,std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                  );
        *(undefined4 *)(local_660 + 0xa8) = 1;
        *(undefined4 *)(local_660 + 0xac) = 1000;
        FUN_004053a0();
        *(undefined4 *)(local_660 + 200) = 0xbc;
        FUN_004053a0();
        *(undefined4 *)(local_660 + 0x100) = 1;
        *(undefined4 *)(local_660 + 0x104) = 10;
        FUN_004053a0();
        piVar6 = (int *)FUN_005ea7b0();
        *piVar6 = local_660;
        FUN_0040d380();
        FUN_0048c970();
        cVar3 = FUN_0040d2d0();
        if (cVar3 != '\0') {
          puVar4 = (undefined4 *)FUN_005ea7b0();
          uVar1 = *puVar4;
          local_8 = 0xffffffff;
          std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_12c);
          ExceptionList = local_10;
          return uVar1;
        }
      }
      else if (param_1 == 0x1c6b) {
        FUN_004053a0();
        FUN_004053a0();
        *(undefined4 *)(local_660 + 0x78) = 1;
        FUN_004053a0();
        *(undefined4 *)(local_660 + 0x94) = 3;
        FUN_004054a0();
        local_8._0_1_ = 4;
        FUN_00401880();
        FUN_00581cb0();
        local_8._0_1_ = 0;
        _eh_vector_destructor_iterator_
                  (local_5f8,0x18,1,std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                  );
        *(undefined4 *)(local_660 + 0xa8) = 1;
        *(undefined4 *)(local_660 + 0xac) = 1000;
        FUN_004053a0();
        *(undefined4 *)(local_660 + 200) = 0xbd;
        FUN_004053a0();
        *(undefined4 *)(local_660 + 0x100) = 1;
        *(undefined4 *)(local_660 + 0x104) = 10;
        FUN_004053a0();
        piVar6 = (int *)FUN_005ea7b0();
        *piVar6 = local_660;
        FUN_0040d380();
        FUN_0048c970();
        cVar3 = FUN_0040d2d0();
        if (cVar3 != '\0') {
          puVar4 = (undefined4 *)FUN_005ea7b0();
          uVar1 = *puVar4;
          local_8 = 0xffffffff;
          std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_12c);
          ExceptionList = local_10;
          return uVar1;
        }
      }
      else if (param_1 == 0x2e2) {
        FUN_004053a0();
        FUN_004053a0();
        FUN_004053a0();
        *(undefined4 *)(local_660 + 0x78) = 1;
        FUN_004053a0();
        *(undefined4 *)(local_660 + 0x94) = 2;
        FUN_004054a0();
        local_8._0_1_ = 5;
        FUN_00401880();
        FUN_00581cb0();
        local_8._0_1_ = 0;
        _eh_vector_destructor_iterator_
                  (local_5dc,0x18,1,std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                  );
        *(undefined4 *)(local_660 + 0xa8) = 1;
        *(undefined4 *)(local_660 + 0xac) = 1000;
        *(undefined4 *)(local_660 + 0x98) = 1;
        FUN_004053a0();
        *(undefined4 *)(local_660 + 200) = 7;
        FUN_004053a0();
        *(undefined4 *)(local_660 + 0x100) = 1;
        FUN_004053a0();
        local_588 = 1;
        local_584 = 1;
        local_580 = 1;
        local_57c = 1000;
        local_578 = 3;
        local_574 = 1;
        local_570 = 1000;
        local_56c = 5;
        local_568 = 1;
        local_564 = 1000;
        local_560 = 10;
        local_55c = 1;
        local_558 = 1000;
        local_554 = 0x1e;
        local_550 = 3;
        local_54c = 1000;
        local_548 = 1;
        local_544 = 3;
        local_540 = 1000;
        local_53c = 2;
        local_538 = 8;
        local_534 = 1000;
        local_530 = 10;
        local_52c = 8;
        local_528 = 1000;
        local_524 = 0x1e;
        local_520 = 8;
        local_51c = 1000;
        local_518 = 0x32;
        local_514 = 0x43d;
        local_510 = 1000;
        local_50c = 10;
        local_508 = 0x43d;
        local_504 = 1000;
        local_500 = 0x1e;
        local_4fc = 0x43d;
        local_4f8 = 1000;
        local_4f4 = 0x32;
        local_4f0 = 0x15;
        local_4ec = 1000;
        local_4e8 = 1;
        local_4e4 = 0x15;
        local_4e0 = 1000;
        local_4dc = 5;
        local_4d8 = 0x15;
        local_4d4 = 1000;
        local_4d0 = 10;
        local_4cc = 0x18;
        local_4c8 = 1000;
        local_4c4 = 10;
        local_4c0 = 0x18;
        local_4bc = 1000;
        local_4b8 = 0x1e;
        local_4b4 = 0x18;
        local_4b0 = 1000;
        local_4ac = 0x32;
        local_4a8 = 0x18;
        local_4a4 = 1000;
        local_4a0 = 100;
        local_49c = 0x19;
        local_498 = 1000;
        local_494 = 1;
        local_490 = 0x19;
        local_48c = 1000;
        local_488 = 3;
        local_484 = 0x19;
        local_480 = 1000;
        local_47c = 5;
        local_478 = 0x19;
        local_474 = 1000;
        local_470 = 10;
        local_46c = 0x1e;
        local_468 = 1000;
        local_464 = 1;
        local_460 = 0x1f;
        local_45c = 1000;
        local_458 = 1;
        local_454 = 0x21;
        local_450 = 1000;
        local_44c = 1;
        local_448 = 0x22;
        local_444 = 1000;
        local_440 = 1;
        local_43c = 0x2b;
        local_438 = 1000;
        local_434 = 1;
        local_430 = 0x2c;
        local_42c = 1000;
        local_428 = 1;
        local_424 = 0x2d;
        local_420 = 1000;
        local_41c = 1;
        local_418 = 0x2e;
        local_414 = 1000;
        local_410 = 1;
        local_40c = 0x24;
        local_408 = 1000;
        local_404 = 10;
        local_400 = 0x24;
        local_3fc = 1000;
        local_3f8 = 0x14;
        local_3f4 = 0x24;
        local_3f0 = 1000;
        local_3ec = 0x1e;
        local_3e8 = 0x24;
        local_3e4 = 1000;
        local_3e0 = 0x32;
        local_3dc = 0x25;
        local_3d8 = 1000;
        local_3d4 = 10;
        local_3d0 = 0x25;
        local_3cc = 1000;
        local_3c8 = 0x14;
        local_3c4 = 0x25;
        local_3c0 = 1000;
        local_3bc = 0x1e;
        local_3b8 = 0x25;
        local_3b4 = 1000;
        local_3b0 = 0x32;
        local_3ac = 0x1c69;
        local_3a8 = 1000;
        local_3a4 = 1;
        local_3a0 = 0x1c6a;
        local_39c = 1000;
        local_398 = 1;
        local_394 = 0xf61e;
        local_390 = 1000;
        local_38c = 1;
        local_388 = 0xf61f;
        local_384 = 1000;
        local_380 = 1;
        local_37c = 0xf625;
        local_378 = 1000;
        local_374 = 1;
        local_370 = 0xf626;
        local_36c = 1000;
        local_368 = 1;
        local_364 = 0xf627;
        local_360 = 1000;
        local_35c = 1;
        local_358 = 0xf628;
        local_354 = 1000;
        local_350 = 1;
        local_34c = 0xf629;
        local_348 = 1000;
        local_344 = 1;
        local_340 = 0xf62a;
        local_33c = 1000;
        local_338 = 1;
        local_334 = 0xf62e;
        local_330 = 1000;
        local_32c = 1;
        local_328 = 0xf630;
        local_324 = 1000;
        local_320 = 1;
        local_31c = 0xf634;
        local_318 = 1000;
        local_314 = 1;
        local_310 = 0xf637;
        local_30c = 1000;
        local_308 = 1;
        local_304 = 0xf63b;
        local_300 = 1000;
        local_2fc = 1;
        local_2f8 = 0xf626;
        local_2f4 = 1000;
        local_2f0 = 1;
        local_2ec = 0x1e8481;
        local_2e8 = 1000;
        local_2e4 = 1;
        local_2e0 = 0x65ca;
        local_2dc = 1000;
        local_2d8 = 1;
        local_2d4 = 0x1e8483;
        local_2d0 = 1000;
        local_2cc = 1;
        local_2c8 = 0x65c7;
        local_2c4 = 1000;
        local_2c0 = 1;
        local_2bc = 0x1c6b;
        local_2b8 = 1000;
        local_2b4 = 1;
        local_2b0 = 0x9f1e;
        local_2ac = 1000;
        local_2a8 = 1;
        local_2a4 = 0x98ad;
        local_2a0 = 1000;
        local_29c = 1;
        local_298 = 0x9a64;
        local_294 = 1000;
        local_290 = 1;
        local_28c = 0x9bbd;
        local_288 = 1000;
        local_284 = 1;
        local_280 = 0x9d49;
        local_27c = 1000;
        local_278 = 1;
        local_274 = 0xa0ad;
        local_270 = 1000;
        local_26c = 1;
        local_268 = 0xa1fc;
        local_264 = 1000;
        local_260 = 1;
        local_25c = 0xa3b5;
        local_258 = 1000;
        local_254 = 1;
        local_250 = 0xc8d;
        local_24c = 1000;
        local_248 = 1;
        local_244 = 0xc8d;
        local_240 = 1000;
        local_23c = 3;
        local_238 = 0xc8d;
        local_234 = 1000;
        local_230 = 5;
        local_22c = 0xc8d;
        local_228 = 1000;
        local_224 = 8;
        local_220 = 0xc8d;
        local_21c = 1000;
        local_218 = 0xf;
        local_214 = 0xc8d;
        local_210 = 1000;
        local_20c = 0x17;
        local_208 = 0xc8e;
        local_204 = 1000;
        local_200 = 1;
        local_1fc = 0xc8e;
        local_1f8 = 1000;
        local_1f4 = 3;
        local_1f0 = 0xc8e;
        local_1ec = 1000;
        local_1e8 = 5;
        local_1e4 = 0xc8e;
        local_1e0 = 1000;
        local_1dc = 8;
        local_1d8 = 0xc8e;
        local_1d4 = 1000;
        local_1d0 = 0xf;
        local_1cc = 0xc8e;
        local_1c8 = 1000;
        local_1c4 = 0x17;
        local_1c0 = 0xc8f;
        local_1bc = 1000;
        local_1b8 = 1;
        local_1b4 = 0xc8f;
        local_1b0 = 1000;
        local_1ac = 3;
        local_1a8 = 0xc8f;
        local_1a4 = 1000;
        local_1a0 = 5;
        local_19c = 0xc8f;
        local_198 = 1000;
        local_194 = 8;
        local_190 = 0xc8f;
        local_18c = 1000;
        local_188 = 0xf;
        local_184 = 0xc8f;
        local_180 = 1000;
        local_17c = 0x17;
        local_178 = 0xc93;
        local_174 = 1000;
        local_170 = 1;
        local_16c = 0xc93;
        local_168 = 1000;
        local_164 = 3;
        local_160 = 0xc93;
        local_15c = 1000;
        local_158 = 5;
        local_154 = 0xc93;
        local_150 = 1000;
        local_14c = 8;
        local_148 = 0xc93;
        local_144 = 1000;
        local_140 = 0xf;
        local_13c = 0xc93;
        local_138 = 1000;
        local_134 = 0x17;
        FUN_00401880();
        FUN_0048b070();
        piVar6 = (int *)FUN_005ea7b0();
        *piVar6 = local_660;
        FUN_0040d380();
        FUN_0048c970();
        cVar3 = FUN_0040d2d0();
        if (cVar3 != '\0') {
          puVar4 = (undefined4 *)FUN_005ea7b0();
          uVar1 = *puVar4;
          local_8 = 0xffffffff;
          std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_12c);
          ExceptionList = local_10;
          return uVar1;
        }
      }
    }
    FUN_00405520(local_12c);
    iVar5 = etc_file_get_size_or_data();
    FUN_005a2a00();
    FUN_005a2a00();
    FUN_005a2a00();
    FUN_005a2a00();
    FUN_005a2a00();
    FUN_005a1580();
    FUN_005a2a00();
    FUN_005a1580();
    FUN_005a1580();
    FUN_005a2c30();
    FUN_005a1580();
    FUN_005a73d0();
    FUN_005a73d0();
    FUN_005a2a00();
    FUN_005a1580();
    FUN_005a1580();
    FUN_005a1580();
    FUN_005a1580();
    FUN_005a2a00();
    FUN_005a1580();
    FUN_0059d750();
    FUN_0059d750();
    FUN_0059e8c0();
    FUN_0059d180();
    FUN_0059db30();
    local_640 = *(char **)(iVar5 + 0x18);
    while ((local_640 != (char *)0x0 && (iVar5 = config_find_section_marker(), iVar5 != 0))) {
      config_section_span_helper();
      FUN_00596500();
      local_8 = CONCAT31(local_8._1_3_,6);
      iVar5 = FUN_004a1ba0();
      if (iVar5 == 0) {
        FUN_005a78f0();
      }
      FUN_004054a0();
      FUN_004053e0();
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_634);
      local_650 = local_114;
      do {
        cVar3 = *local_650;
        local_650 = local_650 + 1;
      } while (cVar3 != '\0');
      local_640 = (char *)config_section_span_helper();
      while ((local_640 != (char *)0x0 && (*local_640 != '['))) {
        iVar5 = FUN_004a1ba0();
        if (iVar5 == 0) {
          FUN_005a78f0();
        }
        else {
          FUN_004a1ba0();
        }
        local_654 = local_114;
        do {
          cVar3 = *local_654;
          local_654 = local_654 + 1;
        } while (cVar3 != '\0');
        local_640 = (char *)config_section_span_helper();
        FUN_0040d490();
      }
      FUN_0044f6c0();
      local_8._0_1_ = 0;
      Concurrency::details::WorkQueue::~WorkQueue(local_61c);
    }
    FUN_005a22b0();
    FUN_005a3df0();
    if (param_1 == 3) {
      FUN_004053a0();
      *(undefined4 *)(local_660 + 0x104) = 10;
    }
    if ((6999 < param_1) && (param_1 < 0x1c84)) {
      *(int *)(local_660 + 0x104) = *(int *)(local_660 + 0x104) * 3;
    }
    piVar6 = (int *)FUN_005ea7b0();
    *piVar6 = local_660;
    FUN_0040d380();
    FUN_0048c970();
    cVar3 = FUN_0040d2d0();
    if (cVar3 == '\0') {
      local_67c = 0;
      local_8 = 0xffffffff;
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_12c);
    }
    else {
      puVar4 = (undefined4 *)FUN_005ea7b0();
      local_67c = *puVar4;
      local_8 = 0xffffffff;
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_12c);
    }
  }
  else {
    puVar4 = (undefined4 *)FUN_005ea7b0();
    local_67c = *puVar4;
  }
  ExceptionList = local_10;
  return local_67c;
}


/* ==== 005e9240  game_loop_helper_e9240  size=10 ==== */

undefined4 game_loop_helper_e9240(void)

{
  return DAT_007ca640;
}


/* ==== 0062f7e0  game_post_d3d_init  size=449 ==== */

void game_post_d3d_init(void)

{
  int iVar1;
  undefined1 auStack_94 [4];
  undefined4 uStack_90;
  int *piStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  int *piStack_78;
  int *piStack_74;
  int *piStack_70;
  undefined4 uStack_6c;
  int *piStack_68;
  int *piStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  uint uStack_48;
  undefined4 local_44;
  undefined1 *local_40;
  undefined4 local_3c;
  undefined1 *local_38;
  undefined4 local_34;
  undefined1 *local_30;
  int *local_2c;
  int *local_28;
  int *local_24;
  int local_20;
  int *local_1c;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0072447d;
  local_10 = ExceptionList;
  uStack_48 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uStack_4c = 0x62f817;
  iVar1 = FUN_004bcf00();
  piStack_64 = *(int **)(iVar1 + 4);
  uStack_4c = 0;
  local_50 = 0x3f800000;
  uStack_54 = 0xff000000;
  uStack_58 = 1;
  uStack_5c = 0;
  uStack_60 = 0;
  piStack_68 = (int *)0x62f849;
  local_14 = piStack_64;
  (**(code **)(*piStack_64 + 0xac))();
  piStack_68 = (int *)0x62f84e;
  iVar1 = FUN_004bcf00();
  piStack_68 = *(int **)(iVar1 + 4);
  uStack_6c = 0x62f865;
  local_18 = piStack_68;
  (**(code **)(*piStack_68 + 0xa4))();
  uStack_6c = 0x62f86a;
  iVar1 = FUN_004bcf00();
  piStack_70 = *(int **)(iVar1 + 0xc);
  uStack_6c = 0x10;
  piStack_74 = (int *)0x62f880;
  local_1c = piStack_70;
  (**(code **)(*piStack_70 + 0x20))();
  local_20 = 100;
  piStack_74 = (int *)0x0;
  piStack_78 = (int *)0x0;
  uStack_7c = 0xc;
  local_30 = auStack_94;
  local_34 = FUN_004054a0("sprite/nowloading.img");
  local_8 = 0;
  FUN_004bcf00();
  local_8 = 0xffffffff;
  FUN_004bad40();
  piStack_74 = (int *)(local_20 + 0x28);
  piStack_78 = (int *)0xe3;
  uStack_7c = 1;
  local_38 = auStack_94;
  local_3c = FUN_004054a0("sprite/nowloading.img");
  local_8 = 1;
  FUN_004bcf00();
  local_8 = 0xffffffff;
  FUN_004bad40();
  piStack_74 = (int *)(local_20 + 0x62);
  piStack_78 = (int *)0xd8;
  uStack_7c = 0;
  local_40 = auStack_94;
  local_44 = FUN_004054a0("sprite/nowloading.img");
  local_8 = 2;
  FUN_004bcf00();
  local_8 = 0xffffffff;
  FUN_004bad40();
  piStack_74 = (int *)0x62f93e;
  iVar1 = FUN_004bcf00();
  piStack_74 = *(int **)(iVar1 + 0xc);
  piStack_78 = (int *)0x62f952;
  local_24 = piStack_74;
  (**(code **)(*piStack_74 + 0x2c))();
  piStack_78 = (int *)0x62f957;
  iVar1 = FUN_004bcf00();
  piStack_78 = *(int **)(iVar1 + 4);
  uStack_7c = 0x62f96e;
  local_28 = piStack_78;
  (**(code **)(*piStack_78 + 0xa8))();
  uStack_7c = 0x62f973;
  iVar1 = FUN_004bcf00();
  piStack_8c = *(int **)(iVar1 + 4);
  uStack_7c = 0;
  uStack_80 = 0;
  uStack_84 = 0;
  uStack_88 = 0;
  uStack_90 = 0x62f98f;
  local_2c = piStack_8c;
  (**(code **)(*piStack_8c + 0x44))();
  ExceptionList = local_10;
  return;
}


/* ==== 006833d0  game_init_before_main_loop  size=575 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void game_init_before_main_loop(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined1 local_35c [4];
  undefined1 local_358 [4];
  int local_354;
  size_t local_350;
  FILE *local_34c;
  int local_348;
  function<void___cdecl(void)> local_344 [24];
  function<void___cdecl(void)> local_32c [24];
  undefined1 local_314 [256];
  undefined1 local_214 [256];
  char local_114 [256];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00728b9b;
  local_10 = ExceptionList;
  local_14 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_004904c0(local_14);
  local_34c = _fopen("SwapKey.txt","r");
  if (local_34c != (FILE *)0x0) {
    while (iVar2 = FUN_006f3f68(local_114,0x100,local_34c), iVar2 != 0) {
      local_350 = _strcspn(local_114,"\r\n");
      if (0xff < local_350) {
        FUN_006e5127();
      }
      local_114[local_350] = '\0';
      if (local_114[0] != '\0') {
        _memset(local_214,0,0x100);
        _memset(local_314,0,0x100);
        iVar2 = FUN_004a1ba0(local_114,"%255s %255s",local_214,local_314);
        if (iVar2 == 2) {
          FUN_004054a0(local_214);
          local_8 = 0;
          local_348 = FUN_00682ee0(local_32c);
          local_8 = 0xffffffff;
          std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_32c);
          FUN_004054a0(local_314);
          local_8 = 1;
          local_354 = FUN_00682ee0(local_344);
          local_8 = 0xffffffff;
          std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_344);
          if ((local_348 != 0) && (local_354 != 0)) {
            uVar3 = FUN_0040d380(local_358);
            FUN_0048c970(local_35c,&local_348);
            cVar1 = FUN_0040d970(uVar3);
            if (cVar1 != '\0') {
              piVar4 = (int *)input_remap_vk_lookup(&local_348);
              *piVar4 = local_354;
            }
          }
        }
      }
    }
    FUN_006e940a(local_34c);
  }
  ExceptionList = local_10;
  return;
}


/* ==== 006caba0  game_loop_helper_caba0  size=58 ==== */

undefined4 game_loop_helper_caba0(undefined4 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_006c8730(param_1);
  if ((uVar1 & 0x71) == 0) {
    if ((uVar1 & 0x8e) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0x8e;
    }
  }
  else {
    uVar2 = 0x71;
  }
  return uVar2;
}


