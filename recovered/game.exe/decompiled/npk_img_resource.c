/* Auto-decompiled pseudo-code from game.exe / npk_img_resource */
/* NOT original source. Bucketed by evidence (strings/imports/call-graph), not raw address. */

/* ==== 00403be0  img_path_loader_01  size=865 ==== */

void img_path_loader_01(int param_1,undefined4 param_2,int param_3)

{
  undefined1 auStack_ec [16];
  undefined4 uStack_dc;
  int iStack_d8;
  undefined1 auStack_d4 [12];
  undefined4 uStack_c8;
  undefined *puStack_c4;
  undefined1 auStack_c0 [12];
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined *puStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  char *pcStack_a0;
  undefined1 auStack_9c [4];
  undefined4 uStack_98;
  char *pcStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 *puStack_7c;
  uint uStack_78;
  undefined4 local_74;
  undefined1 *local_70;
  undefined4 local_6c;
  undefined1 *local_68;
  undefined1 *local_64;
  undefined4 local_60;
  undefined1 *local_5c;
  undefined4 local_58;
  undefined1 *local_54;
  undefined4 local_50;
  undefined1 *local_4c;
  undefined1 *local_48;
  undefined1 *local_44;
  undefined1 *local_40;
  int local_3c;
  undefined4 local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070bf2d;
  local_10 = ExceptionList;
  uStack_78 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = param_1 + -0x140;
  switch(param_1) {
  case 0x140:
    local_18 = 4000;
    puStack_7c = &local_18;
    uStack_80 = 0x403cc0;
    puStack_7c = (undefined4 *)game_timing_or_delay_helper();
    uStack_80 = 0x403cc6;
    FUN_0065dd40();
    local_1c = 0x8fc;
    puStack_7c = &local_1c;
    uStack_80 = 0x403cde;
    puStack_7c = (undefined4 *)game_timing_or_delay_helper();
    uStack_80 = 0x403ce4;
    FUN_0065dd40();
    local_20 = 0x898;
    puStack_7c = &local_20;
    uStack_80 = 0x403cfc;
    puStack_7c = (undefined4 *)game_timing_or_delay_helper();
    uStack_80 = 0x403d02;
    FUN_0065dd40();
    puStack_7c = (undefined4 *)0x0;
    uStack_80 = 0x249;
    uStack_84 = 0x403d11;
    window_input_ui_dispatch_68eb20();
    puStack_7c = (undefined4 *)0x0;
    uStack_80 = 0x8c;
    uStack_84 = 0x403d20;
    window_input_ui_dispatch_68eb20();
    break;
  case 0x14a:
    local_48 = (undefined1 *)&uStack_90;
    pcStack_94 = "WINDOW_SHOW";
    uStack_98 = 0x403d3a;
    FUN_004054a0();
    pcStack_94 = (char *)0x403d3f;
    FUN_004c3570();
    puStack_7c = (undefined4 *)0x0;
    uStack_80 = 1000;
    uStack_84 = 0x403d4e;
    window_input_ui_dispatch_68eb20();
    puStack_7c = (undefined4 *)0x0;
    uStack_80 = 0x118;
    uStack_84 = 0x403d5d;
    window_input_ui_dispatch_68eb20();
    puStack_7c = (undefined4 *)0x0;
    uStack_80 = 0x15e;
    uStack_84 = 0x403d6c;
    window_input_ui_dispatch_68eb20();
    puStack_7c = (undefined4 *)0x0;
    uStack_80 = 0x17c;
    uStack_84 = 0x403d7b;
    window_input_ui_dispatch_68eb20();
    local_24 = 4000;
    puStack_7c = &local_24;
    uStack_80 = 0x403d93;
    puStack_7c = (undefined4 *)game_timing_or_delay_helper();
    uStack_80 = 0x403d99;
    FUN_0065ddb0();
    local_28 = 0x898;
    puStack_7c = &local_28;
    uStack_80 = 0x403db1;
    puStack_7c = (undefined4 *)game_timing_or_delay_helper();
    uStack_80 = 0x403db7;
    FUN_0065ddb0();
    local_2c = 0x8fc;
    puStack_7c = &local_2c;
    uStack_80 = 0x403dcf;
    puStack_7c = (undefined4 *)game_timing_or_delay_helper();
    uStack_80 = 0x403dd5;
    FUN_0065ddb0();
    puStack_7c = (undefined4 *)0xdb;
    uStack_80 = 0xff;
    uStack_84 = 0xd;
    local_4c = auStack_9c;
    pcStack_a0 = "sprite/interface/avatarinventorywindow.img";
    uStack_a4 = 0x403df6;
    local_50 = FUN_004054a0();
    local_8 = 0;
    pcStack_a0 = (char *)0x4;
    uStack_a4 = 0x1c;
    uStack_a8 = 7;
    local_54 = auStack_c0;
    puStack_c4 = &DAT_0073f598;
    uStack_c8 = 0x403e18;
    local_58 = FUN_004054a0();
    local_8._0_1_ = 1;
    puStack_c4 = (undefined *)0x898;
    uStack_c8 = 4000;
    local_5c = auStack_d4;
    iStack_d8 = param_3 + 0xb68;
    uStack_dc = 0x403e40;
    local_60 = FUN_004052c0();
    local_8 = CONCAT31(local_8._1_3_,2);
    local_64 = auStack_ec;
    FUN_004054a0(&DAT_0073f5a4);
    local_8 = 0xffffffff;
    FUN_006227f0();
    puStack_7c = (undefined4 *)param_3;
    uStack_80 = 0x403e71;
    FUN_00403a70();
    break;
  case 0x154:
    local_30 = 4000;
    local_68 = (undefined1 *)&uStack_90;
    pcStack_94 = &DAT_0073f5b0;
    uStack_98 = 0x403e92;
    local_6c = FUN_004054a0();
    local_8 = 3;
    pcStack_94 = (char *)&local_30;
    uStack_98 = 0x403eaa;
    pcStack_94 = (char *)game_timing_or_delay_helper();
    local_8 = 0xffffffff;
    uStack_98 = 0x403eb7;
    local_34 = FUN_006ce000();
    if (local_34 != 0) {
      local_38 = 4000;
      local_70 = (undefined1 *)&uStack_90;
      pcStack_94 = &DAT_0073f5bc;
      uStack_98 = 0x403edc;
      local_74 = FUN_004054a0();
      local_8 = 4;
      pcStack_94 = (char *)&local_38;
      uStack_98 = 0x403ef4;
      pcStack_94 = (char *)game_timing_or_delay_helper();
      local_8 = 0xffffffff;
      uStack_98 = 0x403f01;
      local_3c = FUN_006ce000();
      if (*(char *)(local_3c + 0x51) == '\0') {
        puStack_7c = (undefined4 *)0x0;
        uStack_80 = 0x14a;
        uStack_84 = 0x403f2f;
        window_input_ui_dispatch_68eb20();
      }
      else {
        puStack_7c = (undefined4 *)0x0;
        uStack_80 = 0x140;
        uStack_84 = 0x403f1e;
        window_input_ui_dispatch_68eb20();
      }
    }
    break;
  case 0x229:
    puStack_7c = (undefined4 *)0x20;
    uStack_80 = 0x1c;
    uStack_84 = 7;
    uStack_88 = 0xdb;
    uStack_8c = 0x54;
    uStack_90 = 0xff;
    local_40 = (undefined1 *)&uStack_a8;
    puStack_ac = &DAT_0073f540;
    uStack_b0 = 0x403c59;
    FUN_004054a0();
    puStack_ac = (undefined *)0x898;
    uStack_b0 = 4000;
    uStack_b4 = 0x403c68;
    FUN_00622d00();
    break;
  case 0x22d:
    puStack_7c = (undefined4 *)0x20;
    uStack_80 = 0x1c;
    uStack_84 = 7;
    uStack_88 = 0xdb;
    uStack_8c = 0x54;
    uStack_90 = 0xff;
    local_44 = (undefined1 *)&uStack_a8;
    puStack_ac = &DAT_0073f550;
    uStack_b0 = 0x403c94;
    FUN_004054a0();
    puStack_ac = (undefined *)0x898;
    uStack_b0 = 4000;
    uStack_b4 = 0x403ca3;
    FUN_00622f80();
  }
  ExceptionList = local_10;
  return;
}


/* ==== 00404050  img_path_loader_02  size=4460 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void img_path_loader_02(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 auStack_2ec [20];
  undefined4 uStack_2d8;
  char *pcStack_2d4;
  undefined1 auStack_2d0 [16];
  undefined4 uStack_2c0;
  char *pcStack_2bc;
  undefined4 auStack_2b8 [5];
  undefined4 uStack_2a4;
  undefined4 *puStack_2a0;
  function<void___cdecl(void)> *pfStack_29c;
  function<void___cdecl(void)> *pfStack_298;
  code *pcStack_294;
  uint uStack_290;
  undefined1 local_278 [4];
  undefined1 local_274 [4];
  undefined1 *local_270;
  undefined4 local_26c;
  undefined1 *local_268;
  undefined4 local_264;
  undefined1 *local_260;
  undefined1 *local_25c;
  undefined4 local_258;
  undefined1 *local_254;
  undefined4 local_250;
  undefined1 *local_24c;
  undefined1 *local_248;
  undefined4 local_244;
  undefined1 *local_240;
  undefined4 local_23c;
  undefined1 *local_238;
  undefined1 *local_234;
  undefined4 local_230;
  undefined1 *local_22c;
  undefined4 local_228;
  undefined1 *local_224;
  undefined1 *local_220;
  undefined4 local_21c;
  undefined1 *local_218;
  undefined4 local_214;
  undefined1 *local_210;
  undefined1 *local_20c;
  undefined4 local_208;
  undefined1 *local_204;
  undefined4 local_200;
  undefined1 *local_1fc;
  undefined1 *local_1f8;
  undefined4 local_1f4;
  undefined1 *local_1f0;
  undefined4 local_1ec;
  undefined1 *local_1e8;
  undefined1 *local_1e4;
  undefined4 local_1e0;
  undefined1 *local_1dc;
  undefined4 local_1d8;
  undefined1 *local_1d4;
  undefined1 *local_1d0;
  undefined4 local_1cc;
  undefined1 *local_1c8;
  undefined4 local_1c4;
  undefined1 *local_1c0;
  undefined1 *local_1bc;
  undefined4 local_1b8;
  undefined1 *local_1b4;
  undefined4 local_1b0;
  undefined1 *local_1ac;
  undefined1 *local_1a8;
  undefined4 local_1a4;
  undefined1 *local_1a0;
  undefined4 local_19c;
  undefined1 *local_198;
  undefined1 *local_194;
  undefined4 local_190;
  undefined1 *local_18c;
  undefined4 local_188;
  undefined1 *local_184;
  undefined1 *local_180;
  undefined4 local_17c;
  undefined1 *local_178;
  undefined4 local_174;
  undefined1 *local_170;
  undefined1 *local_16c;
  undefined4 local_168;
  undefined1 *local_164;
  undefined4 local_160;
  undefined1 *local_15c;
  undefined1 *local_158;
  undefined4 local_154;
  undefined1 *local_150;
  undefined4 local_14c;
  undefined1 *local_148;
  undefined1 *local_144;
  undefined4 local_140;
  undefined1 *local_13c;
  undefined4 local_138;
  undefined1 *local_134;
  undefined1 *local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  int local_110;
  undefined4 local_10c;
  int local_108;
  undefined4 local_104;
  int local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  int local_f0;
  undefined4 local_ec;
  int local_e8;
  undefined4 local_e4;
  int local_e0;
  undefined4 local_dc;
  int local_d8;
  undefined4 local_d4;
  int local_d0;
  undefined4 local_cc;
  int local_c8;
  undefined4 local_c4;
  int local_c0;
  undefined4 local_bc;
  int local_b8;
  undefined4 local_b4;
  int local_b0;
  undefined4 local_ac;
  int local_a8;
  undefined4 local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  undefined4 local_94;
  int local_90;
  undefined4 local_8c;
  int local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  int local_6c;
  undefined4 local_68;
  uint local_64;
  int local_60;
  function<void___cdecl(void)> local_5c [24];
  function<void___cdecl(void)> local_44 [24];
  function<void___cdecl(void)> local_2c [24];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070c0db;
  local_10 = ExceptionList;
  uStack_290 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_f8 = 4000;
  pcStack_294 = (code *)&local_f8;
  pfStack_298 = (function<void___cdecl(void)> *)0x404098;
  local_14 = uStack_290;
  pcStack_294 = (code *)game_timing_or_delay_helper();
  pfStack_298 = (function<void___cdecl(void)> *)0x40409e;
  FUN_0065e0b0();
  local_120 = 0x898;
  pcStack_294 = (code *)&local_120;
  pfStack_298 = (function<void___cdecl(void)> *)0x4040bc;
  pcStack_294 = (code *)game_timing_or_delay_helper();
  pfStack_298 = (function<void___cdecl(void)> *)0x4040c2;
  FUN_0065e0b0();
  local_124 = 0x8fc;
  pcStack_294 = (code *)&local_124;
  pfStack_298 = (function<void___cdecl(void)> *)0x4040e0;
  pcStack_294 = (code *)game_timing_or_delay_helper();
  pfStack_298 = (function<void___cdecl(void)> *)0x4040e6;
  FUN_0065e0b0();
  local_9c = 0x140;
  local_98 = 0x21;
  local_68 = 4000;
  pcStack_294 = (code *)&local_68;
  pfStack_298 = (function<void___cdecl(void)> *)0x404112;
  pcStack_294 = (code *)game_timing_or_delay_helper();
  pfStack_298 = (function<void___cdecl(void)> *)0x21;
  pfStack_29c = (function<void___cdecl(void)> *)0x140;
  puStack_2a0 = (undefined4 *)0x0;
  local_1fc = (undefined1 *)auStack_2b8;
  pcStack_2bc = "sprite/interface/avatarinventorywindow.img";
  uStack_2c0 = 0x404131;
  FUN_004054a0();
  local_8 = 0;
  pcStack_2d4 = &DAT_0073f5f4;
  uStack_2d8 = 0x404153;
  local_12c = FUN_004054a0();
  local_8 = CONCAT31(local_8._1_3_,1);
  pcStack_2d4 = (char *)0x64;
  local_130 = auStack_2ec;
  FUN_004054a0(&DAT_0073f600);
  local_8 = 0xffffffff;
  local_6c = FUN_00661cc0(0,0);
  pcStack_294 = (code *)&DAT_0073f608;
  pfStack_298 = (function<void___cdecl(void)> *)0x40419d;
  local_60 = local_6c;
  local_78 = FUN_004054a0();
  local_8 = 2;
  pcStack_294 = *(code **)(param_1 + 0xacc);
  pfStack_298 = local_2c;
  pfStack_29c = (function<void___cdecl(void)> *)0x4041c0;
  local_70 = local_78;
  pfStack_298 = (function<void___cdecl(void)> *)FUN_004c7c70();
  local_8._0_1_ = 3;
  pcStack_294 = (code *)local_78;
  pfStack_29c = local_5c;
  puStack_2a0 = (undefined4 *)0x4041e1;
  local_7c = pfStack_298;
  local_74 = pfStack_298;
  pcStack_294 = (code *)FUN_00405cf0();
  pfStack_298 = (function<void___cdecl(void)> *)0x4041f9;
  local_80 = pcStack_294;
  FUN_004053e0();
  pcStack_294 = (code *)0x404201;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_5c);
  local_8 = CONCAT31(local_8._1_3_,2);
  pcStack_294 = (code *)0x40420d;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_2c);
  local_8 = 0xffffffff;
  pcStack_294 = (code *)0x40421c;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_44);
  *(undefined4 *)(local_60 + 0xa40) = 0xea;
  *(undefined4 *)(local_60 + 0xa44) = 0x15f;
  *(undefined4 *)(local_60 + 0xa64) = 2;
  *(undefined4 *)(local_60 + 0xa48) = 0xffe6c89c;
  local_84 = 4000;
  pcStack_294 = (code *)&local_84;
  pfStack_298 = (function<void___cdecl(void)> *)0x404266;
  pcStack_294 = (code *)game_timing_or_delay_helper();
  pfStack_298 = (function<void___cdecl(void)> *)0x0;
  pfStack_29c = (function<void___cdecl(void)> *)0xbf;
  puStack_2a0 = (undefined4 *)0x4;
  local_134 = (undefined1 *)auStack_2b8;
  pcStack_2bc = "sprite/interface/inventorytab.img";
  uStack_2c0 = 0x404285;
  local_138 = FUN_004054a0();
  local_8 = 4;
  local_13c = auStack_2d0;
  pcStack_2d4 = &DAT_0073f634;
  uStack_2d8 = 0x4042a7;
  local_140 = FUN_004054a0();
  local_8 = CONCAT31(local_8._1_3_,5);
  pcStack_2d4 = (char *)0x63;
  local_144 = auStack_2ec;
  FUN_004054a0(&DAT_0073f640);
  local_8 = 0xffffffff;
  local_88 = FUN_00661cc0(0,1);
  pcStack_294 = (code *)0x73f64c;
  pfStack_298 = (function<void___cdecl(void)> *)0x4042fd;
  local_60 = local_88;
  FUN_004053a0();
  *(undefined4 *)(local_60 + 0x984) = 0x122;
  local_8c = 4000;
  pcStack_294 = (code *)&local_8c;
  pfStack_298 = (function<void___cdecl(void)> *)0x404325;
  pcStack_294 = (code *)game_timing_or_delay_helper();
  pfStack_298 = (function<void___cdecl(void)> *)0x0;
  pfStack_29c = (function<void___cdecl(void)> *)0xa;
  puStack_2a0 = (undefined4 *)0x0;
  local_148 = (undefined1 *)auStack_2b8;
  pcStack_2bc = "sprite/interface/inventorytab.img";
  uStack_2c0 = 0x404341;
  local_14c = FUN_004054a0();
  local_8 = 6;
  local_150 = auStack_2d0;
  pcStack_2d4 = &DAT_0073f67c;
  uStack_2d8 = 0x404363;
  local_154 = FUN_004054a0();
  local_8 = CONCAT31(local_8._1_3_,7);
  pcStack_2d4 = (char *)0x63;
  local_158 = auStack_2ec;
  FUN_004054a0(&DAT_0073f684);
  local_8 = 0xffffffff;
  local_90 = FUN_00661cc0(0,1);
  pcStack_294 = (code *)0x73f690;
  pfStack_298 = (function<void___cdecl(void)> *)0x4043b9;
  local_60 = local_90;
  FUN_004053a0();
  *(undefined4 *)(local_60 + 0x984) = 0x168;
  local_94 = 4000;
  pcStack_294 = (code *)&local_94;
  pfStack_298 = (function<void___cdecl(void)> *)0x4043e1;
  pcStack_294 = (code *)game_timing_or_delay_helper();
  pfStack_298 = (function<void___cdecl(void)> *)(0x1a0 - local_98);
  pfStack_29c = (function<void___cdecl(void)> *)(0x173 - local_9c);
  puStack_2a0 = (undefined4 *)0xb;
  local_15c = (undefined1 *)auStack_2b8;
  pcStack_2bc = "sprite/interface/skillbuywindow.img";
  uStack_2c0 = 0x404411;
  local_160 = FUN_004054a0();
  local_8 = 8;
  local_164 = auStack_2d0;
  pcStack_2d4 = &DAT_0073f6c0;
  uStack_2d8 = 0x404433;
  local_168 = FUN_004054a0();
  local_8 = CONCAT31(local_8._1_3_,9);
  pcStack_2d4 = (char *)0x46;
  local_16c = auStack_2ec;
  FUN_004054a0(&DAT_0073f6cc);
  local_8 = 0xffffffff;
  local_a0 = FUN_00661cc0(0,2);
  *(undefined4 *)(local_a0 + 0x984) = 0x140;
  pcStack_294 = (code *)0x73f6d8;
  pfStack_298 = (function<void___cdecl(void)> *)0x404496;
  local_60 = local_a0;
  FUN_004053a0();
  local_a4 = 4000;
  pcStack_294 = (code *)&local_a4;
  pfStack_298 = (function<void___cdecl(void)> *)0x4044b2;
  pcStack_294 = (code *)game_timing_or_delay_helper();
  pfStack_298 = (function<void___cdecl(void)> *)0x159;
  pfStack_29c = (function<void___cdecl(void)> *)0x3c;
  puStack_2a0 = (undefined4 *)0x0;
  local_170 = (undefined1 *)auStack_2b8;
  pcStack_2bc = "sprite/interface/additionalavatarinventoryimage.img";
  uStack_2c0 = 0x4044d1;
  local_174 = FUN_004054a0();
  local_8 = 10;
  local_178 = auStack_2d0;
  pcStack_2d4 = &DAT_0073f71c;
  uStack_2d8 = 0x4044f3;
  local_17c = FUN_004054a0();
  local_8 = CONCAT31(local_8._1_3_,0xb);
  pcStack_2d4 = (char *)0x46;
  local_180 = auStack_2ec;
  FUN_004054a0(&DAT_0073f728);
  local_8 = 0xffffffff;
  local_a8 = FUN_00661cc0(0,2);
  *(undefined4 *)(local_a8 + 0x984) = 10000;
  pcStack_294 = (code *)0x73f734;
  pfStack_298 = (function<void___cdecl(void)> *)0x404556;
  local_60 = local_a8;
  FUN_004053a0();
  local_ac = 4000;
  pcStack_294 = (code *)&local_ac;
  pfStack_298 = (function<void___cdecl(void)> *)0x404572;
  pcStack_294 = (code *)game_timing_or_delay_helper();
  pfStack_298 = (function<void___cdecl(void)> *)0xcc;
  pfStack_29c = (function<void___cdecl(void)> *)0xff;
  puStack_2a0 = (undefined4 *)0x9;
  local_184 = (undefined1 *)auStack_2b8;
  pcStack_2bc = "sprite/interface/stackableshopwindow.img";
  uStack_2c0 = 0x404594;
  local_188 = FUN_004054a0();
  local_8 = 0xc;
  local_18c = auStack_2d0;
  pcStack_2d4 = "RollUp";
  uStack_2d8 = 0x4045b6;
  local_190 = FUN_004054a0();
  local_8 = CONCAT31(local_8._1_3_,0xd);
  pcStack_2d4 = (char *)0x23;
  local_194 = auStack_2ec;
  FUN_004054a0(&DAT_0073f778);
  local_8 = 0xffffffff;
  local_b0 = FUN_00661cc0(0,1);
  *(undefined4 *)(local_b0 + 0x984) = 0x229;
  local_b4 = 4000;
  pcStack_294 = (code *)&local_b4;
  pfStack_298 = (function<void___cdecl(void)> *)0x404621;
  local_60 = local_b0;
  pcStack_294 = (code *)game_timing_or_delay_helper();
  pfStack_298 = (function<void___cdecl(void)> *)0x13f;
  pfStack_29c = (function<void___cdecl(void)> *)0xff;
  puStack_2a0 = (undefined4 *)0xb;
  local_198 = (undefined1 *)auStack_2b8;
  pcStack_2bc = "sprite/interface/stackableshopwindow.img";
  uStack_2c0 = 0x404643;
  local_19c = FUN_004054a0();
  local_8 = 0xe;
  local_1a0 = auStack_2d0;
  pcStack_2d4 = "RollDown";
  uStack_2d8 = 0x404665;
  local_1a4 = FUN_004054a0();
  local_8 = CONCAT31(local_8._1_3_,0xf);
  pcStack_2d4 = (char *)0x23;
  local_1a8 = auStack_2ec;
  FUN_004054a0(&DAT_0073f7bc);
  local_8 = 0xffffffff;
  local_b8 = FUN_00661cc0(0,1);
  *(undefined4 *)(local_b8 + 0x984) = 0x22d;
  local_60 = local_b8;
  for (local_64 = 0; local_64 < *(uint *)(param_1 + 0xb64); local_64 = local_64 + 1) {
    local_bc = 0x898;
    pcStack_294 = (code *)&local_bc;
    pfStack_298 = (function<void___cdecl(void)> *)0x4046f4;
    pcStack_294 = (code *)game_timing_or_delay_helper();
    pfStack_298 = (function<void___cdecl(void)> *)((local_64 / 7) * 0x20 + 0xef);
    pfStack_29c = (function<void___cdecl(void)> *)((local_64 % 7) * 0x20 + 0x15c);
    puStack_2a0 = (undefined4 *)0x6;
    local_1ac = (undefined1 *)auStack_2b8;
    pcStack_2bc = "sprite/interface/iteminventorywindow.img";
    uStack_2c0 = 0x404737;
    local_1b0 = FUN_004054a0();
    local_8 = 0x10;
    local_1b4 = auStack_2d0;
    pcStack_2d4 = &DAT_0073f7f4;
    uStack_2d8 = 0x404759;
    local_1b8 = FUN_004054a0();
    local_8 = CONCAT31(local_8._1_3_,0x11);
    pcStack_2d4 = (char *)0x46;
    local_1bc = auStack_2ec;
    FUN_004054a0(&DAT_0073f808);
    local_8 = 0xffffffff;
    local_c0 = FUN_00661cc0(0,8);
    *(undefined4 *)(local_c0 + 0xa08) = 0x10;
    *(undefined4 *)(local_c0 + 0xa0c) = 1;
    pcStack_294 = (code *)local_64;
    pfStack_298 = (function<void___cdecl(void)> *)0x4047c8;
    local_60 = local_c0;
    pcStack_294 = (code *)FUN_00405270();
    pfStack_298 = (function<void___cdecl(void)> *)local_60;
    pfStack_29c = (function<void___cdecl(void)> *)param_1;
    puStack_2a0 = (undefined4 *)0x4047d6;
    FUN_006cdee0();
    *(uint *)(local_60 + 0xa10) = local_64;
    *(undefined4 *)(local_60 + 0x98c) = 0x898;
  }
  local_c4 = 0x8fc;
  pcStack_294 = (code *)&local_c4;
  pfStack_298 = (function<void___cdecl(void)> *)0x40481f;
  pcStack_294 = (code *)game_timing_or_delay_helper();
  pfStack_298 = (function<void___cdecl(void)> *)0x60;
  pfStack_29c = (function<void___cdecl(void)> *)0x1d4;
  puStack_2a0 = (undefined4 *)0x6;
  local_1c0 = (undefined1 *)auStack_2b8;
  pcStack_2bc = "sprite/interface/iteminventorywindow.img";
  uStack_2c0 = 0x40483e;
  local_1c4 = FUN_004054a0();
  local_8 = 0x12;
  local_1c8 = auStack_2d0;
  pcStack_2d4 = &DAT_0073f83c;
  uStack_2d8 = 0x404860;
  local_1cc = FUN_004054a0();
  local_8 = CONCAT31(local_8._1_3_,0x13);
  pcStack_2d4 = (char *)0x46;
  local_1d0 = auStack_2ec;
  FUN_004054a0(&DAT_0073f850);
  local_8 = 0xffffffff;
  local_c8 = FUN_00661cc0(0,8);
  *(undefined4 *)(local_c8 + 0xa0c) = 5;
  pcStack_294 = (code *)0x0;
  pfStack_298 = (function<void___cdecl(void)> *)0x4048c0;
  local_60 = local_c8;
  pcStack_294 = (code *)FUN_00405270();
  pfStack_298 = (function<void___cdecl(void)> *)local_60;
  pfStack_29c = (function<void___cdecl(void)> *)param_1;
  puStack_2a0 = (undefined4 *)0x4048ce;
  FUN_006cdee0();
  *(undefined4 *)(local_60 + 0xa08) = 0x10;
  *(undefined4 *)(local_60 + 0xa10) = 0;
  *(undefined4 *)(local_60 + 0x98c) = 0x8fc;
  local_cc = 0x8fc;
  pcStack_294 = (code *)&local_cc;
  pfStack_298 = (function<void___cdecl(void)> *)0x404913;
  pcStack_294 = (code *)game_timing_or_delay_helper();
  pfStack_298 = (function<void___cdecl(void)> *)0x60;
  pfStack_29c = (function<void___cdecl(void)> *)0x1fc;
  puStack_2a0 = (undefined4 *)0x6;
  local_1d4 = (undefined1 *)auStack_2b8;
  pcStack_2bc = "sprite/interface/iteminventorywindow.img";
  uStack_2c0 = 0x404932;
  local_1d8 = FUN_004054a0();
  local_8 = 0x14;
  local_1dc = auStack_2d0;
  pcStack_2d4 = &DAT_0073f884;
  uStack_2d8 = 0x404954;
  local_1e0 = FUN_004054a0();
  local_8 = CONCAT31(local_8._1_3_,0x15);
  pcStack_2d4 = (char *)0x46;
  local_1e4 = auStack_2ec;
  FUN_004054a0(&DAT_0073f898);
  local_8 = 0xffffffff;
  local_d0 = FUN_00661cc0(0,8);
  *(undefined4 *)(local_d0 + 0xa0c) = 5;
  pcStack_294 = (code *)0x1;
  pfStack_298 = (function<void___cdecl(void)> *)0x4049b4;
  local_60 = local_d0;
  pcStack_294 = (code *)FUN_00405270();
  pfStack_298 = (function<void___cdecl(void)> *)local_60;
  pfStack_29c = (function<void___cdecl(void)> *)param_1;
  puStack_2a0 = (undefined4 *)0x4049c2;
  FUN_006cdee0();
  *(undefined4 *)(local_60 + 0xa08) = 0x10;
  *(undefined4 *)(local_60 + 0xa10) = 1;
  *(undefined4 *)(local_60 + 0x98c) = 0x8fc;
  local_d4 = 0x8fc;
  pcStack_294 = (code *)&local_d4;
  pfStack_298 = (function<void___cdecl(void)> *)0x404a07;
  pcStack_294 = (code *)game_timing_or_delay_helper();
  pfStack_298 = (function<void___cdecl(void)> *)0x60;
  pfStack_29c = (function<void___cdecl(void)> *)0x225;
  puStack_2a0 = (undefined4 *)0x6;
  local_1e8 = (undefined1 *)auStack_2b8;
  pcStack_2bc = "sprite/interface/iteminventorywindow.img";
  uStack_2c0 = 0x404a26;
  local_1ec = FUN_004054a0();
  local_8 = 0x16;
  local_1f0 = auStack_2d0;
  pcStack_2d4 = &DAT_0073f8cc;
  uStack_2d8 = 0x404a48;
  local_1f4 = FUN_004054a0();
  local_8 = CONCAT31(local_8._1_3_,0x17);
  pcStack_2d4 = (char *)0x46;
  local_1f8 = auStack_2ec;
  FUN_004054a0(&DAT_0073f8e0);
  local_8 = 0xffffffff;
  local_d8 = FUN_00661cc0(0,8);
  *(undefined4 *)(local_d8 + 0xa0c) = 5;
  pcStack_294 = (code *)0x2;
  pfStack_298 = (function<void___cdecl(void)> *)0x404aa8;
  local_60 = local_d8;
  pcStack_294 = (code *)FUN_00405270();
  pfStack_298 = (function<void___cdecl(void)> *)local_60;
  pfStack_29c = (function<void___cdecl(void)> *)param_1;
  puStack_2a0 = (undefined4 *)0x404ab6;
  FUN_006cdee0();
  *(undefined4 *)(local_60 + 0xa08) = 0x10;
  *(undefined4 *)(local_60 + 0xa10) = 2;
  *(undefined4 *)(local_60 + 0x98c) = 0x8fc;
  local_dc = 0x8fc;
  pcStack_294 = (code *)&local_dc;
  pfStack_298 = (function<void___cdecl(void)> *)0x404afb;
  pcStack_294 = (code *)game_timing_or_delay_helper();
  pfStack_298 = (function<void___cdecl(void)> *)0x88;
  pfStack_29c = (function<void___cdecl(void)> *)0x1d4;
  puStack_2a0 = (undefined4 *)0x6;
  local_240 = (undefined1 *)auStack_2b8;
  pcStack_2bc = "sprite/interface/iteminventorywindow.img";
  uStack_2c0 = 0x404b1d;
  local_200 = FUN_004054a0();
  local_8 = 0x18;
  local_204 = auStack_2d0;
  pcStack_2d4 = &DAT_0073f914;
  uStack_2d8 = 0x404b3f;
  local_208 = FUN_004054a0();
  local_8 = CONCAT31(local_8._1_3_,0x19);
  pcStack_2d4 = (char *)0x46;
  local_20c = auStack_2ec;
  FUN_004054a0(&DAT_0073f928);
  local_8 = 0xffffffff;
  local_e0 = FUN_00661cc0(0,8);
  *(undefined4 *)(local_e0 + 0xa0c) = 5;
  pcStack_294 = (code *)0x3;
  pfStack_298 = (function<void___cdecl(void)> *)0x404b9f;
  local_60 = local_e0;
  pcStack_294 = (code *)FUN_00405270();
  pfStack_298 = (function<void___cdecl(void)> *)local_60;
  pfStack_29c = (function<void___cdecl(void)> *)param_1;
  puStack_2a0 = (undefined4 *)0x404bad;
  FUN_006cdee0();
  *(undefined4 *)(local_60 + 0xa08) = 0x10;
  *(undefined4 *)(local_60 + 0xa10) = 3;
  *(undefined4 *)(local_60 + 0x98c) = 0x8fc;
  local_e4 = 0x8fc;
  pcStack_294 = (code *)&local_e4;
  pfStack_298 = (function<void___cdecl(void)> *)0x404bf2;
  pcStack_294 = (code *)game_timing_or_delay_helper();
  pfStack_298 = (function<void___cdecl(void)> *)0x88;
  pfStack_29c = (function<void___cdecl(void)> *)0x1fc;
  puStack_2a0 = (undefined4 *)0x6;
  local_210 = (undefined1 *)auStack_2b8;
  pcStack_2bc = "sprite/interface/iteminventorywindow.img";
  uStack_2c0 = 0x404c14;
  local_214 = FUN_004054a0();
  local_8 = 0x1a;
  local_218 = auStack_2d0;
  pcStack_2d4 = &DAT_0073f95c;
  uStack_2d8 = 0x404c36;
  local_21c = FUN_004054a0();
  local_8 = CONCAT31(local_8._1_3_,0x1b);
  pcStack_2d4 = (char *)0x46;
  local_220 = auStack_2ec;
  FUN_004054a0(&DAT_0073f970);
  local_8 = 0xffffffff;
  local_e8 = FUN_00661cc0(0,8);
  *(undefined4 *)(local_e8 + 0xa0c) = 5;
  pcStack_294 = (code *)0x4;
  pfStack_298 = (function<void___cdecl(void)> *)0x404c96;
  local_60 = local_e8;
  pcStack_294 = (code *)FUN_00405270();
  pfStack_298 = (function<void___cdecl(void)> *)local_60;
  pfStack_29c = (function<void___cdecl(void)> *)param_1;
  puStack_2a0 = (undefined4 *)0x404ca4;
  FUN_006cdee0();
  *(undefined4 *)(local_60 + 0xa08) = 0x10;
  *(undefined4 *)(local_60 + 0xa10) = 4;
  *(undefined4 *)(local_60 + 0x98c) = 0x8fc;
  local_ec = 0x8fc;
  pcStack_294 = (code *)&local_ec;
  pfStack_298 = (function<void___cdecl(void)> *)0x404ce9;
  pcStack_294 = (code *)game_timing_or_delay_helper();
  pfStack_298 = (function<void___cdecl(void)> *)0x88;
  pfStack_29c = (function<void___cdecl(void)> *)0x225;
  puStack_2a0 = (undefined4 *)0x6;
  local_224 = (undefined1 *)auStack_2b8;
  pcStack_2bc = "sprite/interface/iteminventorywindow.img";
  uStack_2c0 = 0x404d0b;
  local_228 = FUN_004054a0();
  local_8 = 0x1c;
  local_22c = auStack_2d0;
  pcStack_2d4 = &DAT_0073f9a4;
  uStack_2d8 = 0x404d2d;
  local_230 = FUN_004054a0();
  local_8 = CONCAT31(local_8._1_3_,0x1d);
  pcStack_2d4 = (char *)0x46;
  local_234 = auStack_2ec;
  FUN_004054a0(&DAT_0073f9b8);
  local_8 = 0xffffffff;
  local_f0 = FUN_00661cc0(0,8);
  *(undefined4 *)(local_f0 + 0xa0c) = 5;
  pcStack_294 = (code *)0x5;
  pfStack_298 = (function<void___cdecl(void)> *)0x404d8d;
  local_60 = local_f0;
  pcStack_294 = (code *)FUN_00405270();
  pfStack_298 = (function<void___cdecl(void)> *)local_60;
  pfStack_29c = (function<void___cdecl(void)> *)param_1;
  puStack_2a0 = (undefined4 *)0x404d9b;
  FUN_006cdee0();
  *(undefined4 *)(local_60 + 0xa08) = 0x10;
  *(undefined4 *)(local_60 + 0xa10) = 5;
  *(undefined4 *)(local_60 + 0x98c) = 0x8fc;
  local_f4 = 0x8fc;
  pcStack_294 = (code *)&local_f4;
  pfStack_298 = (function<void___cdecl(void)> *)0x404de0;
  pcStack_294 = (code *)game_timing_or_delay_helper();
  pfStack_298 = (function<void___cdecl(void)> *)0xb1;
  pfStack_29c = (function<void___cdecl(void)> *)0x1d4;
  puStack_2a0 = (undefined4 *)0x6;
  local_238 = (undefined1 *)auStack_2b8;
  pcStack_2bc = "sprite/interface/iteminventorywindow.img";
  uStack_2c0 = 0x404e02;
  local_23c = FUN_004054a0();
  local_8 = 0x1e;
  pcStack_2d4 = &DAT_0073f9ec;
  uStack_2d8 = 0x404e24;
  local_244 = FUN_004054a0();
  local_8 = CONCAT31(local_8._1_3_,0x1f);
  pcStack_2d4 = (char *)0x46;
  local_248 = auStack_2ec;
  FUN_004054a0(&DAT_0073fa00);
  local_8 = 0xffffffff;
  local_110 = FUN_00661cc0(0,8);
  *(undefined4 *)(local_110 + 0xa0c) = 5;
  pcStack_294 = (code *)0x6;
  pfStack_298 = (function<void___cdecl(void)> *)0x404e84;
  local_60 = local_110;
  pcStack_294 = (code *)FUN_00405270();
  pfStack_298 = (function<void___cdecl(void)> *)local_60;
  pfStack_29c = (function<void___cdecl(void)> *)param_1;
  puStack_2a0 = (undefined4 *)0x404e92;
  FUN_006cdee0();
  *(undefined4 *)(local_60 + 0xa08) = 0x10;
  *(undefined4 *)(local_60 + 0xa10) = 6;
  *(undefined4 *)(local_60 + 0x98c) = 0x8fc;
  local_fc = 0x8fc;
  pcStack_294 = (code *)&local_fc;
  pfStack_298 = (function<void___cdecl(void)> *)0x404ed7;
  pcStack_294 = (code *)game_timing_or_delay_helper();
  pfStack_298 = (function<void___cdecl(void)> *)0xb1;
  pfStack_29c = (function<void___cdecl(void)> *)0x1fc;
  puStack_2a0 = (undefined4 *)0x6;
  local_24c = (undefined1 *)auStack_2b8;
  pcStack_2bc = "sprite/interface/iteminventorywindow.img";
  uStack_2c0 = 0x404ef9;
  local_250 = FUN_004054a0();
  local_8 = 0x20;
  local_254 = auStack_2d0;
  pcStack_2d4 = &DAT_0073fa34;
  uStack_2d8 = 0x404f1b;
  local_258 = FUN_004054a0();
  local_8 = CONCAT31(local_8._1_3_,0x21);
  pcStack_2d4 = (char *)0x46;
  local_25c = auStack_2ec;
  FUN_004054a0(&DAT_0073fa48);
  local_8 = 0xffffffff;
  local_100 = FUN_00661cc0(0,8);
  *(undefined4 *)(local_100 + 0xa0c) = 5;
  pcStack_294 = (code *)0x7;
  pfStack_298 = (function<void___cdecl(void)> *)0x404f7b;
  local_60 = local_100;
  pcStack_294 = (code *)FUN_00405270();
  pfStack_298 = (function<void___cdecl(void)> *)local_60;
  pfStack_29c = (function<void___cdecl(void)> *)param_1;
  puStack_2a0 = (undefined4 *)0x404f89;
  FUN_006cdee0();
  *(undefined4 *)(local_60 + 0xa08) = 0x10;
  *(undefined4 *)(local_60 + 0xa10) = 7;
  *(undefined4 *)(local_60 + 0x98c) = 0x8fc;
  local_104 = 0x8fc;
  pcStack_294 = (code *)&local_104;
  pfStack_298 = (function<void___cdecl(void)> *)0x404fce;
  pcStack_294 = (code *)game_timing_or_delay_helper();
  pfStack_298 = (function<void___cdecl(void)> *)0xb1;
  pfStack_29c = (function<void___cdecl(void)> *)0x225;
  puStack_2a0 = (undefined4 *)0x6;
  local_260 = (undefined1 *)auStack_2b8;
  pcStack_2bc = "sprite/interface/iteminventorywindow.img";
  uStack_2c0 = 0x404ff0;
  local_264 = FUN_004054a0();
  local_8 = 0x22;
  local_268 = auStack_2d0;
  pcStack_2d4 = &DAT_0073fa7c;
  uStack_2d8 = 0x405012;
  local_26c = FUN_004054a0();
  local_8 = CONCAT31(local_8._1_3_,0x23);
  pcStack_2d4 = (char *)0x46;
  local_270 = auStack_2ec;
  FUN_004054a0(&DAT_0073fa90);
  local_8 = 0xffffffff;
  local_108 = FUN_00661cc0(0,8);
  *(undefined4 *)(local_108 + 0xa0c) = 5;
  pcStack_294 = (code *)0x8;
  pfStack_298 = (function<void___cdecl(void)> *)0x405072;
  local_60 = local_108;
  pcStack_294 = (code *)FUN_00405270();
  pfStack_298 = (function<void___cdecl(void)> *)local_60;
  pfStack_29c = (function<void___cdecl(void)> *)param_1;
  puStack_2a0 = (undefined4 *)0x405080;
  FUN_006cdee0();
  *(undefined4 *)(local_60 + 0xa08) = 0x10;
  *(undefined4 *)(local_60 + 0xa10) = 8;
  *(undefined4 *)(local_60 + 0x98c) = 0x8fc;
  local_10c = 4000;
  pcStack_294 = (code *)&local_10c;
  pfStack_298 = (function<void___cdecl(void)> *)0x4050c5;
  pcStack_294 = (code *)game_timing_or_delay_helper();
  pfStack_298 = (function<void___cdecl(void)> *)0x4050cb;
  FUN_0065dd40();
  local_128 = 0x898;
  pcStack_294 = (code *)&local_128;
  pfStack_298 = (function<void___cdecl(void)> *)0x4050e9;
  pcStack_294 = (code *)game_timing_or_delay_helper();
  pfStack_298 = (function<void___cdecl(void)> *)0x4050ef;
  FUN_0065dd40();
  local_114 = 0x8fc;
  pcStack_294 = (code *)&local_114;
  pfStack_298 = (function<void___cdecl(void)> *)0x40510d;
  pcStack_294 = (code *)game_timing_or_delay_helper();
  pfStack_298 = (function<void___cdecl(void)> *)0x405113;
  FUN_0065dd40();
  local_118 = 4000;
  local_11c = 4000;
  pcStack_294 = FUN_006574e0;
  pfStack_298 = (function<void___cdecl(void)> *)local_274;
  pfStack_29c = (function<void___cdecl(void)> *)&local_118;
  puStack_2a0 = (undefined4 *)0x405147;
  game_timing_or_delay_helper();
  pfStack_29c = (function<void___cdecl(void)> *)0x40514e;
  puVar1 = (undefined4 *)FUN_00402170();
  pfStack_298 = (function<void___cdecl(void)> *)*puVar1;
  pfStack_29c = (function<void___cdecl(void)> *)local_278;
  puStack_2a0 = &local_11c;
  uStack_2a4 = 0x405169;
  game_timing_or_delay_helper();
  puStack_2a0 = (undefined4 *)0x405170;
  puVar1 = (undefined4 *)FUN_004021b0();
  pfStack_29c = (function<void___cdecl(void)> *)*puVar1;
  puStack_2a0 = (undefined4 *)0x405178;
  FUN_00405d30();
  pcStack_294 = (code *)DAT_007ca768;
  pfStack_298 = (function<void___cdecl(void)> *)DAT_007ca764;
  puVar1 = &DAT_007ca70c;
  puVar3 = auStack_2b8;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  pcStack_2bc = (char *)0x40519e;
  FUN_0065e180();
  ExceptionList = local_10;
  return;
}


/* ==== 0040b1d0  img_path_loader_03  size=845 ==== */

void img_path_loader_03(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined1 auStack_8c [12];
  undefined4 uStack_80;
  undefined4 *puStack_7c;
  undefined4 uStack_78;
  undefined4 *puStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 *puStack_68;
  char *pcStack_64;
  uint uStack_60;
  undefined1 *local_5c;
  undefined4 local_58;
  undefined1 *local_54;
  undefined4 local_50;
  undefined4 local_4c;
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  uint local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070c64d;
  local_10 = ExceptionList;
  uStack_60 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_1c = param_1;
  if (param_1 == 0x283) {
    local_30 = 0x22;
    pcStack_64 = (char *)0x0;
    puStack_68 = &local_30;
    uStack_6c = 0x40b294;
    FUN_0040d330();
    puStack_68 = (undefined4 *)0x40b29b;
    iVar1 = FUN_00405270();
    if (*(int *)(iVar1 + 4) != 0) {
      local_34 = 0x22;
      pcStack_64 = (char *)0xffffffff;
      puStack_68 = (undefined4 *)0xa;
      uStack_6c = 0x284;
      uStack_70 = 0;
      puStack_74 = &local_34;
      uStack_78 = 0x40b2c6;
      FUN_0040d330();
      puStack_74 = (undefined4 *)0x40b2cd;
      uStack_70 = FUN_00405270();
      puStack_74 = (undefined4 *)param_3;
      uStack_78 = 0x40b2d7;
      img_path_loader_04();
    }
  }
  else if (param_1 == 0x284) {
    local_38 = 0x46;
    local_3c = 0x46;
    pcStack_64 = (char *)param_2;
    puStack_68 = &local_38;
    uStack_6c = 0x40b2ff;
    puStack_68 = (undefined4 *)game_timing_or_delay_helper();
    uStack_6c = 0x40b305;
    pcStack_64 = (char *)FUN_0065de20();
    puStack_68 = &local_3c;
    uStack_6c = 0x40b317;
    puStack_68 = (undefined4 *)game_timing_or_delay_helper();
    uStack_6c = 0x40b31d;
    FUN_0065dee0();
    local_40 = 0x22;
    pcStack_64 = (char *)0x0;
    puStack_68 = &local_40;
    uStack_6c = 0x40b337;
    FUN_0040d330();
    puStack_68 = (undefined4 *)0x40b33e;
    iVar1 = FUN_00405270();
    if (*(int *)(iVar1 + 4) != 0) {
      local_44 = 0x35c;
      local_54 = (undefined1 *)&uStack_78;
      puStack_7c = (undefined4 *)&DAT_0073fa98;
      uStack_80 = 0x40b362;
      local_58 = FUN_004054a0();
      local_8 = 0;
      puStack_7c = &local_44;
      uStack_80 = 0x40b37a;
      puStack_7c = (undefined4 *)game_timing_or_delay_helper();
      local_8 = 0xffffffff;
      uStack_80 = 0x40b387;
      local_48 = FUN_006ce000();
      local_20 = *(int *)(local_48 + 0x9d0);
      pcStack_64 = *(char **)(local_20 + 0xa10);
      puStack_68 = (undefined4 *)(local_20 + 0x98c);
      uStack_6c = 0x40b3b2;
      FUN_00642750();
      uStack_6c = 0x40b3b9;
      FUN_0040d5c0();
      puStack_68 = (undefined4 *)0x40b3c0;
      piVar2 = (int *)game_get_flag_object_01a70();
      if (*(int *)(local_20 + 0x10) == *piVar2) {
        local_14 = 0;
        pcStack_64 = (char *)0xf;
        puStack_68 = (undefined4 *)param_3;
        uStack_6c = 0x40b3e1;
        iVar1 = FUN_006c79e0();
        if (iVar1 == 0) {
          pcStack_64 = (char *)0x0;
          puStack_68 = (undefined4 *)0x0;
          uStack_6c = 0;
          uStack_70 = 0;
          puStack_74 = (undefined4 *)0xa;
          local_5c = auStack_8c;
          FUN_004054a0(&DAT_0073faa8);
          FUN_00663db0(1);
        }
        else {
          local_4c = 0x22;
          local_50 = 0x35c;
          pcStack_64 = (char *)0x0;
          puStack_68 = &local_4c;
          uStack_6c = 0x40b431;
          FUN_0040d330();
          puStack_68 = (undefined4 *)0x40b438;
          pcStack_64 = (char *)FUN_00405270();
          puStack_68 = &local_50;
          uStack_6c = 0x40b447;
          puStack_68 = (undefined4 *)game_timing_or_delay_helper();
          uStack_6c = 0x40b44d;
          local_14 = FUN_006cdfa0();
          *(undefined1 *)(local_14 + 0x31c) = 1;
          pcStack_64 = (char *)0x9;
          puStack_68 = (undefined4 *)0x40b46d;
          FUN_0040d730();
          local_18 = 0;
          while( true ) {
            pcStack_64 = (char *)0x40b48e;
            uVar3 = FUN_0040d6a0();
            if (uVar3 <= local_18) break;
            pcStack_64 = "sprite/common/etc/cooltimeend.img";
            puStack_68 = (undefined4 *)local_18;
            uStack_6c = 0x40b4aa;
            FUN_0040d680();
            puStack_68 = (undefined4 *)0x40b4b4;
            FUN_004053a0();
            pcStack_64 = (char *)local_18;
            puStack_68 = (undefined4 *)0x40b4c6;
            iVar1 = FUN_0040d680();
            *(undefined1 *)(iVar1 + 0x20) = (undefined1)local_18;
            pcStack_64 = (char *)local_18;
            puStack_68 = (undefined4 *)0x40b4de;
            iVar1 = FUN_0040d680();
            *(undefined4 *)(iVar1 + 0x44) = 100;
            local_18 = local_18 + 1;
          }
          *(undefined4 *)(local_14 + 0x3b0) = 0;
          *(undefined4 *)(local_14 + 0x3a4) = 0;
          *(undefined4 *)(local_14 + 0x3ac) = 9;
        }
      }
    }
  }
  else if (param_1 == 0x285) {
    local_24 = 0x46;
    pcStack_64 = (char *)&local_24;
    puStack_68 = (undefined4 *)0x40b234;
    pcStack_64 = (char *)game_timing_or_delay_helper();
    puStack_68 = (undefined4 *)0x40b23a;
    FUN_0065e0b0();
    local_28 = 0x35c;
    pcStack_64 = (char *)&local_28;
    puStack_68 = (undefined4 *)0x40b252;
    pcStack_64 = (char *)game_timing_or_delay_helper();
    puStack_68 = (undefined4 *)0x40b258;
    FUN_0065e0b0();
    local_2c = 0x22;
    pcStack_64 = (char *)&local_2c;
    puStack_68 = (undefined4 *)0x40b270;
    FUN_0040d330();
    pcStack_64 = (char *)0x40b277;
    FUN_0040d540();
  }
  ExceptionList = local_10;
  return;
}


/* ==== 0040b520  img_path_loader_04  size=5145 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void img_path_loader_04(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  char **ppcVar6;
  undefined1 auStack_404 [20];
  undefined4 uStack_3f0;
  undefined *puStack_3ec;
  undefined1 auStack_3e8 [16];
  undefined4 uStack_3d8;
  char *pcStack_3d4;
  char *apcStack_3d0 [3];
  undefined1 auStack_3c4 [8];
  undefined4 uStack_3bc;
  undefined4 *puStack_3b8;
  function<void___cdecl(void)> *pfStack_3b4;
  function<void___cdecl(void)> *pfStack_3b0;
  function<void___cdecl(void)> *pfStack_3ac;
  uint uStack_3a8;
  undefined1 local_368 [4];
  undefined4 local_364;
  undefined1 *local_360;
  char **local_35c;
  undefined1 local_358 [4];
  undefined1 local_354 [4];
  undefined1 *local_350;
  undefined4 local_34c;
  undefined1 *local_348;
  undefined4 local_344;
  undefined1 *local_340;
  undefined1 *local_33c;
  undefined4 local_338;
  undefined1 local_334 [4];
  undefined4 local_330;
  undefined1 *local_32c;
  undefined4 local_328;
  undefined1 *local_324;
  undefined4 local_320;
  undefined1 *local_31c;
  undefined4 local_318;
  undefined1 *local_314;
  undefined4 local_310;
  undefined1 *local_30c;
  undefined4 local_308;
  undefined1 *local_304;
  undefined4 local_300;
  undefined4 local_2fc;
  undefined4 local_2f8;
  undefined4 local_2f4;
  undefined4 local_2f0;
  undefined4 local_2ec;
  undefined4 local_2e8;
  int local_2e4;
  int local_2e0;
  int local_2dc;
  int local_2d8;
  int local_2d4;
  int local_2d0;
  int local_2cc;
  undefined4 local_2c8;
  undefined4 local_2c4;
  int local_2c0;
  undefined4 local_2bc;
  undefined4 local_2b8;
  int local_2b4;
  int local_2b0;
  undefined4 local_2ac;
  int local_2a8;
  int local_2a4;
  undefined4 local_2a0;
  int local_29c;
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
  int local_25c;
  int local_258;
  undefined4 local_254;
  undefined4 local_250;
  undefined4 local_24c;
  undefined4 local_248;
  undefined4 local_244;
  int local_240;
  int local_23c;
  int local_238;
  char local_231;
  int local_230;
  undefined4 local_22c;
  int local_228;
  function<void___cdecl(void)> local_224 [24];
  function<void___cdecl(void)> local_20c [24];
  function<void___cdecl(void)> local_1f4 [24];
  function<void___cdecl(void)> local_1dc [24];
  function<void___cdecl(void)> local_1c4 [24];
  function<void___cdecl(void)> local_1ac [24];
  function<void___cdecl(void)> local_194 [24];
  function<void___cdecl(void)> local_17c [24];
  function<void___cdecl(void)> local_164 [24];
  function<void___cdecl(void)> local_14c [24];
  function<void___cdecl(void)> local_134 [24];
  function<void___cdecl(void)> local_11c [24];
  function<void___cdecl(void)> local_104 [24];
  function<void___cdecl(void)> local_ec [24];
  function<void___cdecl(void)> local_d4 [24];
  function<void___cdecl(void)> local_bc [24];
  undefined1 local_a4 [4];
  int local_a0;
  int local_9c;
  undefined4 local_98;
  undefined4 local_7c;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070c7bf;
  local_10 = ExceptionList;
  uStack_3a8 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_2c4 = 0x46;
  pfStack_3ac = (function<void___cdecl(void)> *)&local_2c4;
  pfStack_3b0 = (function<void___cdecl(void)> *)0x40b568;
  local_14 = uStack_3a8;
  pfStack_3ac = (function<void___cdecl(void)> *)game_timing_or_delay_helper();
  pfStack_3b0 = (function<void___cdecl(void)> *)0x40b56e;
  FUN_0065e0b0();
  pfStack_3ac = (function<void___cdecl(void)> *)&DAT_0073fadc;
  pfStack_3b0 = (function<void___cdecl(void)> *)0x40b581;
  FUN_004054a0();
  local_8 = 0;
  pfStack_3ac = (function<void___cdecl(void)> *)local_334;
  pfStack_3b0 = (function<void___cdecl(void)> *)0x40b59d;
  pfStack_3ac = (function<void___cdecl(void)> *)FUN_0040d380();
  pfStack_3b0 = local_bc;
  pfStack_3b4 = (function<void___cdecl(void)> *)local_368;
  puStack_3b8 = (undefined4 *)0x40b5ba;
  FUN_0040e2f0();
  pfStack_3b0 = (function<void___cdecl(void)> *)0x40b5c1;
  local_231 = FUN_0040d2d0();
  local_8 = 0xffffffff;
  pfStack_3ac = (function<void___cdecl(void)> *)0x40b5d9;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_bc);
  if (local_231 != '\0') {
    pfStack_3ac = (function<void___cdecl(void)> *)&DAT_0073faec;
    pfStack_3b0 = (function<void___cdecl(void)> *)0x40b5f4;
    FUN_004054a0();
    pfStack_3ac = local_d4;
    pfStack_3b0 = (function<void___cdecl(void)> *)0x40b609;
    FUN_0040d360();
    pfStack_3ac = (function<void___cdecl(void)> *)0x40b614;
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_d4);
  }
  local_230 = 0x13;
  local_23c = 0xc;
  pfStack_3ac = (function<void___cdecl(void)> *)0x0;
  pfStack_3b0 = (function<void___cdecl(void)> *)0xc;
  pfStack_3b4 = (function<void___cdecl(void)> *)0x13;
  local_35c = apcStack_3d0 + 1;
  apcStack_3d0[0] = &DAT_0073fafc;
  pcStack_3d4 = (char *)0x40b64e;
  FUN_004054a0();
  apcStack_3d0[0] = (char *)0x40b659;
  d3d9_create_texture_004b7450();
  local_2c8 = 0x46;
  pfStack_3ac = (function<void___cdecl(void)> *)&local_2c8;
  pfStack_3b0 = (function<void___cdecl(void)> *)0x40b675;
  pfStack_3ac = (function<void___cdecl(void)> *)game_timing_or_delay_helper();
  pfStack_3b0 = (function<void___cdecl(void)> *)(0xf0 - (local_23c * 0xd + 0xc) / 2);
  pfStack_3b4 = (function<void___cdecl(void)> *)(0x140 - (local_230 * 0xc + 0xc) / 2);
  puStack_3b8 = (undefined4 *)0x0;
  local_360 = (undefined1 *)apcStack_3d0;
  pcStack_3d4 = &DAT_0073fb0c;
  uStack_3d8 = 0x40b6bb;
  local_364 = FUN_004054a0();
  local_8 = 1;
  puStack_3ec = &DAT_0073fb1c;
  uStack_3f0 = 0x40b6dd;
  FUN_004054a0();
  local_8 = CONCAT31(local_8._1_3_,2);
  puStack_3ec = (undefined *)0x64;
  FUN_004054a0(&DAT_0073fb2c);
  local_8 = 0xffffffff;
  local_2cc = FUN_00661cc0(0,0);
  *(undefined4 *)(local_2cc + 0x98c) = 0x46;
  *(undefined1 *)(local_2cc + 0x50) = 1;
  if (param_5 == -1) {
    *(int *)(local_2cc + 0x54) = (DAT_007ca71c - ((local_230 * 0x18 + 0x18) / 3 + -0x17)) + -0x1a;
  }
  else {
    *(int *)(local_2cc + 0x54) = (DAT_007ca71c - ((local_230 * 0xc + 0xc) / 3 + -0x17)) + -0x1a;
  }
  *(int *)(local_2cc + 0x58) = (DAT_007ca720 - (local_23c * 0xd + -0x14)) + -0xc;
  pfStack_3ac = (function<void___cdecl(void)> *)0x1;
  pfStack_3b0 = (function<void___cdecl(void)> *)0x2;
  pfStack_3b4 = (function<void___cdecl(void)> *)0x40b7cb;
  local_228 = local_2cc;
  FUN_0040d3c0();
  pfStack_3ac = (function<void___cdecl(void)> *)0x40b7dc;
  pfStack_3ac = (function<void___cdecl(void)> *)FUN_0040d3a0();
  pfStack_3b0 = (function<void___cdecl(void)> *)0x40b7ee;
  FUN_0040d4e0();
  pfStack_3ac = (function<void___cdecl(void)> *)0x1;
  pfStack_3b0 = (function<void___cdecl(void)> *)0x0;
  pfStack_3b4 = (function<void___cdecl(void)> *)0x40b803;
  FUN_0040d4b0();
  pfStack_3b0 = (function<void___cdecl(void)> *)0x40b80d;
  FUN_0040d730();
  pfStack_3ac = (function<void___cdecl(void)> *)0x73fb34;
  pfStack_3b0 = (function<void___cdecl(void)> *)0x0;
  pfStack_3b4 = (function<void___cdecl(void)> *)0x0;
  puStack_3b8 = (undefined4 *)0x40b827;
  FUN_0040d4b0();
  pfStack_3b4 = (function<void___cdecl(void)> *)0x40b831;
  FUN_0040d680();
  pfStack_3b0 = (function<void___cdecl(void)> *)0x40b83b;
  FUN_004053a0();
  pfStack_3ac = (function<void___cdecl(void)> *)0x0;
  pfStack_3b0 = (function<void___cdecl(void)> *)0x0;
  pfStack_3b4 = (function<void___cdecl(void)> *)0x40b850;
  FUN_0040d4b0();
  pfStack_3b0 = (function<void___cdecl(void)> *)0x40b85a;
  iVar1 = FUN_0040d680();
  *(undefined1 *)(iVar1 + 0x20) = 0x5a;
  pfStack_3ac = (function<void___cdecl(void)> *)0x5a;
  apcStack_3d0[2] = "sprite/interface/popup.img";
  apcStack_3d0[1] = (char *)0x40b875;
  FUN_004054a0();
  local_8 = 3;
  apcStack_3d0[2] = (char *)0x40b887;
  FUN_004bcf00();
  local_8 = 0xffffffff;
  apcStack_3d0[2] = (char *)0x40b895;
  local_2d0 = FUN_004b8ca0();
  iVar2 = local_230 * 0xc;
  iVar1 = *(int *)(local_2d0 + 0xc);
  pfStack_3ac = (function<void___cdecl(void)> *)0x0;
  pfStack_3b0 = (function<void___cdecl(void)> *)0x0;
  pfStack_3b4 = (function<void___cdecl(void)> *)0x40b8ca;
  FUN_0040d4b0();
  pfStack_3b0 = (function<void___cdecl(void)> *)0x40b8d4;
  iVar3 = FUN_0040d680();
  *(int *)(iVar3 + 0x24) = ((iVar2 + 0xc) - iVar1) / 2;
  pfStack_3ac = (function<void___cdecl(void)> *)0x0;
  pfStack_3b0 = (function<void___cdecl(void)> *)0x0;
  pfStack_3b4 = (function<void___cdecl(void)> *)0x40b8ec;
  FUN_0040d4b0();
  pfStack_3b0 = (function<void___cdecl(void)> *)0x40b8f6;
  iVar1 = FUN_0040d680();
  *(undefined4 *)(iVar1 + 0x28) = 0xf;
  pfStack_3ac = (function<void___cdecl(void)> *)0x0;
  pfStack_3b0 = (function<void___cdecl(void)> *)0x0;
  pfStack_3b4 = (function<void___cdecl(void)> *)0x40b912;
  FUN_0040d4b0();
  pfStack_3b0 = (function<void___cdecl(void)> *)0x40b91c;
  iVar1 = FUN_0040d680();
  *(undefined1 *)(iVar1 + 0x3b) = 0x57;
  pfStack_3ac = (function<void___cdecl(void)> *)0x0;
  pfStack_3b0 = (function<void___cdecl(void)> *)0x40b933;
  iVar1 = FUN_0040d4b0();
  *(undefined4 *)(iVar1 + 0x8c) = 1;
  pfStack_3ac = (function<void___cdecl(void)> *)0x0;
  pfStack_3b0 = (function<void___cdecl(void)> *)0x40b950;
  iVar1 = FUN_0040d4b0();
  *(undefined4 *)(iVar1 + 0x84) = 0;
  pfStack_3ac = (function<void___cdecl(void)> *)0x1;
  pfStack_3b0 = (function<void___cdecl(void)> *)0x1;
  pfStack_3b4 = (function<void___cdecl(void)> *)0x40b96f;
  FUN_0040d4b0();
  pfStack_3b0 = (function<void___cdecl(void)> *)0x40b979;
  FUN_0040d730();
  pfStack_3ac = (function<void___cdecl(void)> *)0x73fb6c;
  pfStack_3b0 = (function<void___cdecl(void)> *)0x0;
  pfStack_3b4 = (function<void___cdecl(void)> *)0x1;
  puStack_3b8 = (undefined4 *)0x40b993;
  FUN_0040d4b0();
  pfStack_3b4 = (function<void___cdecl(void)> *)0x40b99d;
  FUN_0040d680();
  pfStack_3b0 = (function<void___cdecl(void)> *)0x40b9a7;
  FUN_004053a0();
  pfStack_3ac = (function<void___cdecl(void)> *)0x0;
  pfStack_3b0 = (function<void___cdecl(void)> *)0x1;
  pfStack_3b4 = (function<void___cdecl(void)> *)0x40b9bc;
  FUN_0040d4b0();
  pfStack_3b0 = (function<void___cdecl(void)> *)0x40b9c6;
  iVar1 = FUN_0040d680();
  *(undefined1 *)(iVar1 + 0x20) = 0x5a;
  pfStack_3ac = (function<void___cdecl(void)> *)0x5a;
  apcStack_3d0[2] = "sprite/interface/popup.img";
  apcStack_3d0[1] = (char *)0x40b9e1;
  FUN_004054a0();
  local_8 = 4;
  apcStack_3d0[2] = (char *)0x40b9f3;
  FUN_004bcf00();
  local_8 = 0xffffffff;
  apcStack_3d0[2] = (char *)0x40ba01;
  local_2d4 = FUN_004b8ca0();
  iVar2 = local_230 * 0xc;
  iVar1 = *(int *)(local_2d4 + 0xc);
  pfStack_3ac = (function<void___cdecl(void)> *)0x0;
  pfStack_3b0 = (function<void___cdecl(void)> *)0x1;
  pfStack_3b4 = (function<void___cdecl(void)> *)0x40ba36;
  FUN_0040d4b0();
  pfStack_3b0 = (function<void___cdecl(void)> *)0x40ba40;
  iVar3 = FUN_0040d680();
  *(int *)(iVar3 + 0x24) = ((iVar2 + 0xc) - iVar1) / 2;
  pfStack_3ac = (function<void___cdecl(void)> *)0x5a;
  apcStack_3d0[2] = "sprite/interface/popup.img";
  apcStack_3d0[1] = (char *)0x40ba5a;
  FUN_004054a0();
  local_8 = 5;
  apcStack_3d0[2] = (char *)0x40ba6c;
  FUN_004bcf00();
  local_8 = 0xffffffff;
  apcStack_3d0[2] = (char *)0x40ba7a;
  local_2d8 = FUN_004b8ca0();
  pfStack_3ac = (function<void___cdecl(void)> *)0x0;
  pfStack_3b0 = (function<void___cdecl(void)> *)0x0;
  pfStack_3b4 = (function<void___cdecl(void)> *)0x40ba95;
  FUN_0040d4b0();
  pfStack_3b0 = (function<void___cdecl(void)> *)0x40ba9f;
  iVar1 = FUN_0040d680();
  iVar1 = *(int *)(iVar1 + 0x28);
  iVar2 = *(int *)(local_2d8 + 0x10);
  pfStack_3ac = (function<void___cdecl(void)> *)0x0;
  pfStack_3b0 = (function<void___cdecl(void)> *)0x1;
  pfStack_3b4 = (function<void___cdecl(void)> *)0x40bac4;
  FUN_0040d4b0();
  pfStack_3b0 = (function<void___cdecl(void)> *)0x40bace;
  iVar3 = FUN_0040d680();
  *(int *)(iVar3 + 0x28) = iVar1 + 0x2c + iVar2;
  pfStack_3ac = (function<void___cdecl(void)> *)0x0;
  pfStack_3b0 = (function<void___cdecl(void)> *)0x1;
  pfStack_3b4 = (function<void___cdecl(void)> *)0x40bae6;
  FUN_0040d4b0();
  pfStack_3b0 = (function<void___cdecl(void)> *)0x40baf0;
  iVar1 = FUN_0040d680();
  *(undefined1 *)(iVar1 + 0x3b) = 0x57;
  pfStack_3ac = (function<void___cdecl(void)> *)0x1;
  pfStack_3b0 = (function<void___cdecl(void)> *)0x40bb07;
  iVar1 = FUN_0040d4b0();
  *(undefined4 *)(iVar1 + 0x8c) = 1;
  pfStack_3ac = (function<void___cdecl(void)> *)0x1;
  pfStack_3b0 = (function<void___cdecl(void)> *)0x40bb24;
  iVar1 = FUN_0040d4b0();
  *(undefined4 *)(iVar1 + 0x84) = 0;
  *(undefined4 *)(local_228 + 0x1a8) = 2;
  pfStack_3ac = *(function<void___cdecl(void)> **)(local_228 + 0x1a8);
  pfStack_3b0 = (function<void___cdecl(void)> *)0x40bb5c;
  FUN_0040d4e0();
  pfStack_3ac = (function<void___cdecl(void)> *)0x1;
  pfStack_3b0 = (function<void___cdecl(void)> *)0x0;
  pfStack_3b4 = (function<void___cdecl(void)> *)0x40bb71;
  FUN_0040d4b0();
  pfStack_3b0 = (function<void___cdecl(void)> *)0x40bb7b;
  FUN_0040d730();
  pfStack_3ac = *(function<void___cdecl(void)> **)(param_2 + 4);
  pfStack_3b0 = (function<void___cdecl(void)> *)0x40bb8d;
  iVar1 = game_loop_helper_cc840();
  pfStack_3ac = (function<void___cdecl(void)> *)(iVar1 + 0xd0);
  pfStack_3b0 = (function<void___cdecl(void)> *)0x0;
  pfStack_3b4 = (function<void___cdecl(void)> *)0x0;
  puStack_3b8 = (undefined4 *)0x40bba8;
  FUN_0040d4b0();
  pfStack_3b4 = (function<void___cdecl(void)> *)0x40bbb2;
  FUN_0040d680();
  pfStack_3b0 = (function<void___cdecl(void)> *)0x40bbbc;
  FUN_0040d840();
  pfStack_3ac = *(function<void___cdecl(void)> **)(param_2 + 4);
  pfStack_3b0 = (function<void___cdecl(void)> *)0x40bbce;
  iVar1 = game_loop_helper_cc840();
  pfStack_3ac = (function<void___cdecl(void)> *)0x0;
  pfStack_3b0 = (function<void___cdecl(void)> *)0x0;
  pfStack_3b4 = (function<void___cdecl(void)> *)0x40bbe5;
  FUN_0040d4b0();
  pfStack_3b0 = (function<void___cdecl(void)> *)0x40bbef;
  iVar2 = FUN_0040d680();
  *(undefined1 *)(iVar2 + 0x20) = *(undefined1 *)(iVar1 + 0xe8);
  pfStack_3ac = (function<void___cdecl(void)> *)0x0;
  pfStack_3b0 = (function<void___cdecl(void)> *)0x0;
  pfStack_3b4 = (function<void___cdecl(void)> *)0x40bc0d;
  FUN_0040d4b0();
  pfStack_3b0 = (function<void___cdecl(void)> *)0x40bc17;
  iVar1 = FUN_0040d680();
  iVar1 = *(int *)(iVar1 + 0x24);
  pfStack_3ac = (function<void___cdecl(void)> *)0x0;
  pfStack_3b0 = (function<void___cdecl(void)> *)0x0;
  pfStack_3b4 = (function<void___cdecl(void)> *)0x40bc32;
  FUN_0040d4b0();
  pfStack_3b0 = (function<void___cdecl(void)> *)0x40bc3c;
  iVar2 = FUN_0040d680();
  *(int *)(iVar2 + 0x24) = iVar1 + 1;
  pfStack_3ac = (function<void___cdecl(void)> *)0x5a;
  apcStack_3d0[2] = "sprite/interface/popup.img";
  apcStack_3d0[1] = (char *)0x40bc56;
  FUN_004054a0();
  local_8 = 6;
  apcStack_3d0[2] = (char *)0x40bc68;
  FUN_004bcf00();
  local_8 = 0xffffffff;
  apcStack_3d0[2] = (char *)0x40bc76;
  local_2c0 = FUN_004b8ca0();
  pfStack_3ac = *(function<void___cdecl(void)> **)(param_2 + 4);
  pfStack_3b0 = (function<void___cdecl(void)> *)0x40bc8e;
  iVar1 = game_loop_helper_cc840();
  pfStack_3ac = *(function<void___cdecl(void)> **)(iVar1 + 0xe8);
  apcStack_3d0[2] = *(char **)(param_2 + 4);
  apcStack_3d0[1] = (char *)0x40bcb2;
  iVar1 = game_loop_helper_cc840();
  apcStack_3d0[2] = (char *)(iVar1 + 0xd0);
  apcStack_3d0[1] = (char *)0x40bcbf;
  local_300 = FUN_00405520();
  local_8 = 7;
  apcStack_3d0[2] = (char *)0x40bcd1;
  FUN_004bcf00();
  local_8 = 0xffffffff;
  apcStack_3d0[2] = (char *)0x40bcdf;
  local_2dc = FUN_004b8ca0();
  iVar1 = *(int *)(local_2c0 + 0x10);
  iVar2 = *(int *)(local_2dc + 0x10);
  pfStack_3ac = (function<void___cdecl(void)> *)0x0;
  pfStack_3b0 = (function<void___cdecl(void)> *)0x0;
  pfStack_3b4 = (function<void___cdecl(void)> *)0x40bd13;
  FUN_0040d4b0();
  pfStack_3b0 = (function<void___cdecl(void)> *)0x40bd1d;
  iVar3 = FUN_0040d680();
  iVar3 = *(int *)(iVar3 + 0x28);
  pfStack_3ac = (function<void___cdecl(void)> *)0x0;
  pfStack_3b0 = (function<void___cdecl(void)> *)0x0;
  pfStack_3b4 = (function<void___cdecl(void)> *)0x40bd35;
  FUN_0040d4b0();
  pfStack_3b0 = (function<void___cdecl(void)> *)0x40bd3f;
  iVar4 = FUN_0040d680();
  *(int *)(iVar4 + 0x28) = (iVar1 - iVar2) / 2 + iVar3;
  pfStack_3ac = (function<void___cdecl(void)> *)0x1;
  pfStack_3b0 = (function<void___cdecl(void)> *)0x1;
  pfStack_3b4 = (function<void___cdecl(void)> *)0x40bd57;
  FUN_0040d4b0();
  pfStack_3b0 = (function<void___cdecl(void)> *)0x40bd61;
  FUN_0040d730();
  pfStack_3ac = (function<void___cdecl(void)> *)0xf;
  pfStack_3b0 = (function<void___cdecl(void)> *)0x40bd6e;
  iVar1 = game_loop_helper_cd6d0();
  pfStack_3ac = (function<void___cdecl(void)> *)(iVar1 + 0xb0);
  pfStack_3b0 = (function<void___cdecl(void)> *)0x0;
  pfStack_3b4 = (function<void___cdecl(void)> *)0x1;
  puStack_3b8 = (undefined4 *)0x40bd89;
  FUN_0040d4b0();
  pfStack_3b4 = (function<void___cdecl(void)> *)0x40bd93;
  FUN_0040d680();
  pfStack_3b0 = (function<void___cdecl(void)> *)0x40bd9d;
  FUN_0040d840();
  pfStack_3ac = (function<void___cdecl(void)> *)0xf;
  pfStack_3b0 = (function<void___cdecl(void)> *)0x40bdaa;
  iVar1 = game_loop_helper_cd6d0();
  pfStack_3ac = (function<void___cdecl(void)> *)0x0;
  pfStack_3b0 = (function<void___cdecl(void)> *)0x1;
  pfStack_3b4 = (function<void___cdecl(void)> *)0x40bdc1;
  FUN_0040d4b0();
  pfStack_3b0 = (function<void___cdecl(void)> *)0x40bdcb;
  iVar2 = FUN_0040d680();
  *(undefined1 *)(iVar2 + 0x20) = *(undefined1 *)(iVar1 + 200);
  pfStack_3ac = (function<void___cdecl(void)> *)0x0;
  pfStack_3b0 = (function<void___cdecl(void)> *)0x0;
  pfStack_3b4 = (function<void___cdecl(void)> *)0x40bde9;
  FUN_0040d4b0();
  pfStack_3b0 = (function<void___cdecl(void)> *)0x40bdf3;
  iVar1 = FUN_0040d680();
  iVar1 = *(int *)(iVar1 + 0x24);
  pfStack_3ac = (function<void___cdecl(void)> *)0x0;
  pfStack_3b0 = (function<void___cdecl(void)> *)0x1;
  pfStack_3b4 = (function<void___cdecl(void)> *)0x40be0e;
  FUN_0040d4b0();
  pfStack_3b0 = (function<void___cdecl(void)> *)0x40be18;
  iVar2 = FUN_0040d680();
  *(int *)(iVar2 + 0x24) = iVar1 + 1;
  pfStack_3ac = (function<void___cdecl(void)> *)0x5a;
  apcStack_3d0[2] = "sprite/interface/popup.img";
  apcStack_3d0[1] = (char *)0x40be32;
  local_304 = auStack_3c4;
  local_308 = FUN_004054a0();
  local_8 = 8;
  apcStack_3d0[2] = (char *)0x40be44;
  FUN_004bcf00();
  local_8 = 0xffffffff;
  apcStack_3d0[2] = (char *)0x40be52;
  local_2e0 = FUN_004b8ca0();
  pfStack_3ac = (function<void___cdecl(void)> *)0xf;
  pfStack_3b0 = (function<void___cdecl(void)> *)0x40be65;
  iVar1 = game_loop_helper_cd6d0();
  pfStack_3ac = *(function<void___cdecl(void)> **)(iVar1 + 200);
  apcStack_3d0[2] = (char *)0xf;
  apcStack_3d0[1] = (char *)0x40be84;
  local_30c = auStack_3c4;
  iVar1 = game_loop_helper_cd6d0();
  apcStack_3d0[2] = (char *)(iVar1 + 0xb0);
  apcStack_3d0[1] = (char *)0x40be91;
  local_310 = FUN_00405520();
  local_8 = 9;
  apcStack_3d0[2] = (char *)0x40bea3;
  FUN_004bcf00();
  local_8 = 0xffffffff;
  apcStack_3d0[2] = (char *)0x40beb1;
  local_2e4 = FUN_004b8ca0();
  iVar1 = *(int *)(local_2e0 + 0x10);
  iVar2 = *(int *)(local_2e4 + 0x10);
  pfStack_3ac = (function<void___cdecl(void)> *)0x0;
  pfStack_3b0 = (function<void___cdecl(void)> *)0x1;
  pfStack_3b4 = (function<void___cdecl(void)> *)0x40bee5;
  FUN_0040d4b0();
  pfStack_3b0 = (function<void___cdecl(void)> *)0x40beef;
  iVar3 = FUN_0040d680();
  iVar3 = *(int *)(iVar3 + 0x28);
  pfStack_3ac = (function<void___cdecl(void)> *)0x0;
  pfStack_3b0 = (function<void___cdecl(void)> *)0x1;
  pfStack_3b4 = (function<void___cdecl(void)> *)0x40bf07;
  FUN_0040d4b0();
  pfStack_3b0 = (function<void___cdecl(void)> *)0x40bf11;
  iVar4 = FUN_0040d680();
  *(int *)(iVar4 + 0x28) = (iVar1 - iVar2) / 2 + iVar3;
  local_22c = 0xffffffff;
  pfStack_3ac = *(function<void___cdecl(void)> **)(param_2 + 4);
  pfStack_3b0 = (function<void___cdecl(void)> *)0x40bf30;
  iVar1 = game_loop_helper_cc840();
  if (*(int *)(iVar1 + 0xb8) == 1) {
    local_22c = 0xff68d5ed;
  }
  else {
    pfStack_3ac = *(function<void___cdecl(void)> **)(param_2 + 4);
    pfStack_3b0 = (function<void___cdecl(void)> *)0x40bf57;
    iVar1 = game_loop_helper_cc840();
    if (*(int *)(iVar1 + 0xb8) == 2) {
      local_22c = 0xffb36bff;
    }
    else {
      pfStack_3ac = *(function<void___cdecl(void)> **)(param_2 + 4);
      pfStack_3b0 = (function<void___cdecl(void)> *)0x40bf7e;
      iVar1 = game_loop_helper_cc840();
      if (*(int *)(iVar1 + 0xb8) == 3) {
        local_22c = 0xffff00f0;
      }
      else {
        pfStack_3ac = *(function<void___cdecl(void)> **)(param_2 + 4);
        pfStack_3b0 = (function<void___cdecl(void)> *)0x40bfa5;
        iVar1 = game_loop_helper_cc840();
        if (*(int *)(iVar1 + 0xb8) == 4) {
          local_22c = 0xffffb100;
        }
      }
    }
  }
  pfStack_3ac = (function<void___cdecl(void)> *)0x40bfc3;
  FUN_0040b110();
  local_8 = 10;
  if (*(int *)(param_2 + 0xc) < 1) {
    pfStack_3ac = *(function<void___cdecl(void)> **)(param_2 + 4);
    pfStack_3b0 = (function<void___cdecl(void)> *)0x40c164;
    iVar1 = game_loop_helper_cc840();
    pfStack_3ac = (function<void___cdecl(void)> *)(iVar1 + 0xc);
    pfStack_3b0 = (function<void___cdecl(void)> *)0x40c173;
    FUN_0040d840();
  }
  else {
    pfStack_3ac = (function<void___cdecl(void)> *)&DAT_0073fbf8;
    pfStack_3b0 = (function<void___cdecl(void)> *)0x40bfe7;
    local_2e8 = FUN_004054a0();
    local_8._0_1_ = 0xb;
    pfStack_3ac = *(function<void___cdecl(void)> **)(param_2 + 0xc);
    pfStack_3b0 = local_14c;
    pfStack_3b4 = (function<void___cdecl(void)> *)0x40c010;
    local_244 = local_2e8;
    local_2f4 = FUN_0040a850();
    local_8._0_1_ = 0xc;
    pfStack_3ac = (function<void___cdecl(void)> *)&DAT_0073fbfc;
    pfStack_3b0 = (function<void___cdecl(void)> *)0x40c039;
    local_2ec = local_2f4;
    pfStack_3b0 = (function<void___cdecl(void)> *)FUN_004054a0();
    local_8._0_1_ = 0xd;
    pfStack_3ac = (function<void___cdecl(void)> *)local_2f4;
    pfStack_3b4 = local_11c;
    puStack_3b8 = (undefined4 *)0x40c069;
    local_2f8 = pfStack_3b0;
    local_2f0 = pfStack_3b0;
    pfStack_3b0 = (function<void___cdecl(void)> *)FUN_00405cf0();
    local_8._0_1_ = 0xe;
    pfStack_3ac = (function<void___cdecl(void)> *)local_244;
    pfStack_3b4 = local_ec;
    puStack_3b8 = (undefined4 *)0x40c09c;
    local_2fc = pfStack_3b0;
    local_248 = pfStack_3b0;
    local_250 = FUN_00405cf0();
    local_8._0_1_ = 0xf;
    pfStack_3ac = *(function<void___cdecl(void)> **)(param_2 + 4);
    pfStack_3b0 = (function<void___cdecl(void)> *)0x40c0c7;
    local_24c = local_250;
    iVar1 = game_loop_helper_cc840();
    pfStack_3ac = (function<void___cdecl(void)> *)(iVar1 + 0xc);
    pfStack_3b0 = (function<void___cdecl(void)> *)local_250;
    pfStack_3b4 = local_104;
    puStack_3b8 = (undefined4 *)0x40c0de;
    pfStack_3ac = (function<void___cdecl(void)> *)FUN_0040e3d0();
    pfStack_3b0 = (function<void___cdecl(void)> *)0x40c0f9;
    local_254 = pfStack_3ac;
    FUN_004053e0();
    pfStack_3ac = (function<void___cdecl(void)> *)0x40c104;
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_104);
    local_8._0_1_ = 0xe;
    pfStack_3ac = (function<void___cdecl(void)> *)0x40c113;
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_ec);
    local_8._0_1_ = 0xd;
    pfStack_3ac = (function<void___cdecl(void)> *)0x40c122;
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_11c);
    local_8._0_1_ = 0xc;
    pfStack_3ac = (function<void___cdecl(void)> *)0x40c131;
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_134);
    local_8._0_1_ = 0xb;
    pfStack_3ac = (function<void___cdecl(void)> *)0x40c140;
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_14c);
    local_8 = CONCAT31(local_8._1_3_,10);
    pfStack_3ac = (function<void___cdecl(void)> *)0x40c14f;
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_164);
  }
  local_a0 = *(int *)(local_228 + 0x5c) / 2;
  pfStack_3ac = (function<void___cdecl(void)> *)0x5a;
  local_314 = auStack_3c4;
  apcStack_3d0[2] = "sprite/interface/popup.img";
  apcStack_3d0[1] = (char *)0x40c19f;
  local_318 = FUN_004054a0();
  local_8._0_1_ = 0x10;
  apcStack_3d0[2] = (char *)0x40c1ae;
  FUN_004bcf00();
  local_8._0_1_ = 10;
  apcStack_3d0[2] = (char *)0x40c1b9;
  local_258 = FUN_004b8ca0();
  iVar1 = *(int *)(local_258 + 0x10);
  pfStack_3ac = (function<void___cdecl(void)> *)0x0;
  pfStack_3b0 = (function<void___cdecl(void)> *)0x0;
  pfStack_3b4 = (function<void___cdecl(void)> *)0x40c1e7;
  FUN_0040d4b0();
  pfStack_3b0 = (function<void___cdecl(void)> *)0x40c1f1;
  iVar2 = FUN_0040d680();
  local_9c = (iVar1 + -0xc) / 2 + *(int *)(iVar2 + 0x28);
  local_7c = 1;
  local_98 = local_22c;
  pfStack_3ac = (function<void___cdecl(void)> *)local_a4;
  pfStack_3b0 = (function<void___cdecl(void)> *)0x40c225;
  FUN_0040d310();
  pfStack_3ac = (function<void___cdecl(void)> *)&DAT_0073fc1c;
  pfStack_3b0 = (function<void___cdecl(void)> *)0x40c235;
  FUN_004053a0();
  local_a0 = *(int *)(local_228 + 0x5c) / 2;
  pfStack_3ac = (function<void___cdecl(void)> *)0x5a;
  apcStack_3d0[2] = "sprite/interface/popup.img";
  apcStack_3d0[1] = (char *)0x40c260;
  local_31c = auStack_3c4;
  local_320 = FUN_004054a0();
  local_8._0_1_ = 0x11;
  apcStack_3d0[2] = (char *)0x40c26f;
  FUN_004bcf00();
  local_8._0_1_ = 10;
  apcStack_3d0[2] = (char *)0x40c27a;
  local_25c = FUN_004b8ca0();
  pfStack_3ac = (function<void___cdecl(void)> *)0x0;
  pfStack_3b0 = (function<void___cdecl(void)> *)0x0;
  pfStack_3b4 = (function<void___cdecl(void)> *)0x40c295;
  FUN_0040d4b0();
  pfStack_3b0 = (function<void___cdecl(void)> *)0x40c29f;
  iVar1 = FUN_0040d680();
  local_9c = *(int *)(iVar1 + 0x28) + 10 + *(int *)(local_25c + 0x10);
  local_7c = 1;
  pfStack_3ac = (function<void___cdecl(void)> *)local_a4;
  pfStack_3b0 = (function<void___cdecl(void)> *)0x40c2d4;
  FUN_0040d310();
  pfStack_3ac = (function<void___cdecl(void)> *)&DAT_0073fc54;
  pfStack_3b0 = (function<void___cdecl(void)> *)0x40c2e4;
  FUN_004053a0();
  local_a0 = *(int *)(local_228 + 0x5c) / 2;
  local_9c = local_9c + 0xc;
  local_7c = 1;
  pfStack_3ac = (function<void___cdecl(void)> *)local_a4;
  pfStack_3b0 = (function<void___cdecl(void)> *)0x40c326;
  FUN_0040d310();
  pfStack_3ac = (function<void___cdecl(void)> *)&DAT_0073fc68;
  pfStack_3b0 = (function<void___cdecl(void)> *)0x40c337;
  local_290 = FUN_004054a0();
  local_8._0_1_ = 0x12;
  pfStack_3ac = (function<void___cdecl(void)> *)0x1;
  pfStack_3b0 = local_20c;
  pfStack_3b4 = (function<void___cdecl(void)> *)0x40c35b;
  local_260 = local_290;
  local_284 = FUN_0040a850();
  local_8._0_1_ = 0x13;
  pfStack_3ac = (function<void___cdecl(void)> *)&DAT_0073fc6c;
  pfStack_3b0 = (function<void___cdecl(void)> *)0x40c384;
  local_264 = local_284;
  local_278 = FUN_004054a0();
  local_8._0_1_ = 0x14;
  pfStack_3ac = (function<void___cdecl(void)> *)&DAT_0073fc70;
  pfStack_3b0 = (function<void___cdecl(void)> *)0x40c3aa;
  local_268 = local_278;
  local_270 = FUN_004054a0();
  local_8._0_1_ = 0x15;
  pfStack_3ac = (function<void___cdecl(void)> *)0xf;
  pfStack_3b0 = (function<void___cdecl(void)> *)0x40c3cd;
  local_26c = local_270;
  pfStack_3ac = (function<void___cdecl(void)> *)game_loop_helper_cd6d0();
  pfStack_3b0 = (function<void___cdecl(void)> *)local_270;
  pfStack_3b4 = local_1c4;
  puStack_3b8 = (undefined4 *)0x40c3e1;
  pfStack_3b0 = (function<void___cdecl(void)> *)FUN_0040e3d0();
  local_8._0_1_ = 0x16;
  pfStack_3ac = (function<void___cdecl(void)> *)local_278;
  pfStack_3b4 = local_1ac;
  puStack_3b8 = (undefined4 *)0x40c414;
  local_27c = pfStack_3b0;
  local_274 = pfStack_3b0;
  pfStack_3b0 = (function<void___cdecl(void)> *)FUN_00405cf0();
  local_8._0_1_ = 0x17;
  pfStack_3ac = (function<void___cdecl(void)> *)local_284;
  pfStack_3b4 = local_194;
  puStack_3b8 = (undefined4 *)0x40c447;
  local_288 = pfStack_3b0;
  local_280 = pfStack_3b0;
  pfStack_3b0 = (function<void___cdecl(void)> *)FUN_00405cf0();
  local_8._0_1_ = 0x18;
  pfStack_3ac = (function<void___cdecl(void)> *)local_290;
  pfStack_3b4 = local_17c;
  puStack_3b8 = (undefined4 *)0x40c47a;
  local_294 = pfStack_3b0;
  local_28c = pfStack_3b0;
  pfStack_3ac = (function<void___cdecl(void)> *)FUN_00405cf0();
  pfStack_3b0 = (function<void___cdecl(void)> *)0x40c495;
  local_298 = pfStack_3ac;
  FUN_004053e0();
  pfStack_3ac = (function<void___cdecl(void)> *)0x40c4a0;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_17c);
  local_8._0_1_ = 0x17;
  pfStack_3ac = (function<void___cdecl(void)> *)0x40c4af;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_194);
  local_8._0_1_ = 0x16;
  pfStack_3ac = (function<void___cdecl(void)> *)0x40c4be;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_1ac);
  local_8._0_1_ = 0x15;
  pfStack_3ac = (function<void___cdecl(void)> *)0x40c4cd;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_1c4);
  local_8._0_1_ = 0x14;
  pfStack_3ac = (function<void___cdecl(void)> *)0x40c4dc;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_1dc);
  local_8._0_1_ = 0x13;
  pfStack_3ac = (function<void___cdecl(void)> *)0x40c4eb;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_1f4);
  local_8._0_1_ = 0x12;
  pfStack_3ac = (function<void___cdecl(void)> *)0x40c4fa;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_20c);
  local_8._0_1_ = 10;
  pfStack_3ac = (function<void___cdecl(void)> *)0x40c509;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_224);
  local_a0 = *(int *)(local_228 + 0x5c) / 2;
  pfStack_3ac = (function<void___cdecl(void)> *)0x5a;
  apcStack_3d0[2] = "sprite/interface/popup.img";
  apcStack_3d0[1] = (char *)0x40c535;
  local_324 = auStack_3c4;
  local_328 = FUN_004054a0();
  local_8._0_1_ = 0x19;
  apcStack_3d0[2] = (char *)0x40c544;
  FUN_004bcf00();
  local_8 = CONCAT31(local_8._1_3_,10);
  apcStack_3d0[2] = (char *)0x40c54f;
  local_29c = FUN_004b8ca0();
  iVar1 = *(int *)(local_29c + 0x10);
  pfStack_3ac = (function<void___cdecl(void)> *)0x0;
  pfStack_3b0 = (function<void___cdecl(void)> *)0x1;
  pfStack_3b4 = (function<void___cdecl(void)> *)0x40c57d;
  FUN_0040d4b0();
  pfStack_3b0 = (function<void___cdecl(void)> *)0x40c587;
  iVar2 = FUN_0040d680();
  local_9c = (iVar1 + -0xc) / 2 + *(int *)(iVar2 + 0x28);
  local_7c = 1;
  local_22c = 0xffffffff;
  pfStack_3ac = (function<void___cdecl(void)> *)0xf;
  pfStack_3b0 = (function<void___cdecl(void)> *)0x40c5ae;
  iVar1 = game_loop_helper_cd6d0();
  if (*(int *)(iVar1 + 0x94) == 1) {
    local_22c = 0xff68d5ed;
  }
  else {
    pfStack_3ac = (function<void___cdecl(void)> *)0xf;
    pfStack_3b0 = (function<void___cdecl(void)> *)0x40c5d0;
    iVar1 = game_loop_helper_cd6d0();
    if (*(int *)(iVar1 + 0x94) == 2) {
      local_22c = 0xffb36bff;
    }
    else {
      pfStack_3ac = (function<void___cdecl(void)> *)0xf;
      pfStack_3b0 = (function<void___cdecl(void)> *)0x40c5f2;
      iVar1 = game_loop_helper_cd6d0();
      if (*(int *)(iVar1 + 0x94) == 3) {
        local_22c = 0xffff00f0;
      }
      else {
        pfStack_3ac = (function<void___cdecl(void)> *)0xf;
        pfStack_3b0 = (function<void___cdecl(void)> *)0x40c614;
        iVar1 = game_loop_helper_cd6d0();
        if (*(int *)(iVar1 + 0x94) == 4) {
          local_22c = 0xffffb100;
        }
      }
    }
  }
  local_98 = local_22c;
  pfStack_3ac = (function<void___cdecl(void)> *)local_a4;
  pfStack_3b0 = (function<void___cdecl(void)> *)0x40c64b;
  FUN_0040d310();
  local_2a0 = 0x46;
  pfStack_3ac = (function<void___cdecl(void)> *)&local_2a0;
  pfStack_3b0 = (function<void___cdecl(void)> *)0x40c667;
  pfStack_3ac = (function<void___cdecl(void)> *)game_timing_or_delay_helper();
  pfStack_3b0 = (function<void___cdecl(void)> *)(local_23c * 0xd + -0x17);
  pfStack_3b4 = (function<void___cdecl(void)> *)((local_230 * 0xc + 0xc) / 3 + -0x1d);
  puStack_3b8 = (undefined4 *)0x9;
  local_32c = (undefined1 *)apcStack_3d0;
  pcStack_3d4 = "sprite/interface/popup.img";
  uStack_3d8 = 0x40c6a0;
  local_330 = FUN_004054a0();
  local_8._0_1_ = 0x1a;
  puStack_3ec = &DAT_0073fcac;
  uStack_3f0 = 0x40c6bf;
  local_338 = FUN_004054a0();
  local_8._0_1_ = 0x1b;
  puStack_3ec = (undefined *)0x4b;
  local_33c = auStack_404;
  FUN_004054a0(&DAT_0073fcc0);
  local_8._0_1_ = 10;
  local_2a4 = FUN_00661cc0(0,2);
  *(undefined4 *)(local_2a4 + 0x98c) = 0x46;
  *(undefined4 *)(local_2a4 + 0x984) = param_3;
  pfStack_3ac = (function<void___cdecl(void)> *)0x73fcd0;
  pfStack_3b0 = (function<void___cdecl(void)> *)0x40c737;
  local_238 = local_2a4;
  FUN_004053a0();
  *(int *)(local_238 + 0xc) = local_228;
  local_2a8 = local_238;
  pfStack_3ac = (function<void___cdecl(void)> *)&local_2a8;
  pfStack_3b0 = (function<void___cdecl(void)> *)0x40c764;
  FUN_0040d490();
  local_2ac = 0x46;
  pfStack_3ac = (function<void___cdecl(void)> *)&local_2ac;
  pfStack_3b0 = (function<void___cdecl(void)> *)0x40c780;
  pfStack_3ac = (function<void___cdecl(void)> *)game_timing_or_delay_helper();
  pfStack_3b0 = (function<void___cdecl(void)> *)(local_23c * 0xd + -0x17);
  pfStack_3b4 = (function<void___cdecl(void)> *)((local_230 * 0x18 + 0x18) / 3 + -0x17);
  puStack_3b8 = (undefined4 *)0xc;
  local_340 = (undefined1 *)apcStack_3d0;
  pcStack_3d4 = "sprite/interface/popup.img";
  uStack_3d8 = 0x40c7ba;
  local_344 = FUN_004054a0();
  local_8._0_1_ = 0x1c;
  local_348 = auStack_3e8;
  puStack_3ec = &DAT_0073fcfc;
  uStack_3f0 = 0x40c7d9;
  local_34c = FUN_004054a0();
  local_8._0_1_ = 0x1d;
  puStack_3ec = (undefined *)0x4b;
  local_350 = auStack_404;
  FUN_004054a0(&DAT_0073fd10);
  local_8 = CONCAT31(local_8._1_3_,10);
  local_2b0 = FUN_00661cc0(0,2);
  *(undefined4 *)(local_2b0 + 0x98c) = 0x46;
  *(undefined4 *)(local_2b0 + 0x984) = param_4;
  pfStack_3ac = (function<void___cdecl(void)> *)0x73fd20;
  pfStack_3b0 = (function<void___cdecl(void)> *)0x40c851;
  local_240 = local_2b0;
  FUN_004053a0();
  *(int *)(local_240 + 0xc) = local_228;
  local_2b4 = local_240;
  pfStack_3ac = (function<void___cdecl(void)> *)&local_2b4;
  pfStack_3b0 = (function<void___cdecl(void)> *)0x40c87e;
  FUN_0040d490();
  local_2b8 = 0x46;
  local_2bc = 0x46;
  pfStack_3ac = (function<void___cdecl(void)> *)FUN_006574e0;
  pfStack_3b0 = (function<void___cdecl(void)> *)local_354;
  pfStack_3b4 = (function<void___cdecl(void)> *)&local_2b8;
  puStack_3b8 = (undefined4 *)0x40c8b0;
  game_timing_or_delay_helper();
  pfStack_3b4 = (function<void___cdecl(void)> *)0x40c8b7;
  puVar5 = (undefined4 *)FUN_00402170();
  pfStack_3b0 = (function<void___cdecl(void)> *)*puVar5;
  pfStack_3b4 = (function<void___cdecl(void)> *)local_358;
  puStack_3b8 = &local_2bc;
  uStack_3bc = 0x40c8d2;
  game_timing_or_delay_helper();
  puStack_3b8 = (undefined4 *)0x40c8d9;
  puVar5 = (undefined4 *)FUN_004021b0();
  pfStack_3b4 = (function<void___cdecl(void)> *)*puVar5;
  puStack_3b8 = (undefined4 *)0x40c8e1;
  FUN_00405d30();
  pfStack_3ac = (function<void___cdecl(void)> *)DAT_007ca768;
  pfStack_3b0 = (function<void___cdecl(void)> *)DAT_007ca764;
  puVar5 = &DAT_007ca70c;
  ppcVar6 = apcStack_3d0;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *ppcVar6 = (char *)*puVar5;
    puVar5 = puVar5 + 1;
    ppcVar6 = ppcVar6 + 1;
  }
  pcStack_3d4 = (char *)0x40c908;
  FUN_0065e180();
  local_8 = 0xffffffff;
  pfStack_3ac = (function<void___cdecl(void)> *)0x40c91d;
  FUN_0040c940();
  ExceptionList = local_10;
  return;
}


/* ==== 0040ce80  img_path_loader_05  size=1052 ==== */

void img_path_loader_05(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined1 auStack_110 [20];
  undefined4 uStack_fc;
  undefined *puStack_f8;
  undefined1 auStack_f4 [16];
  undefined4 uStack_e4;
  char *pcStack_e0;
  undefined4 auStack_dc [5];
  undefined4 uStack_c8;
  undefined4 *puStack_c4;
  undefined4 *puStack_c0;
  undefined4 *puStack_bc;
  code *pcStack_b8;
  uint uStack_b4;
  undefined1 local_a8 [4];
  undefined1 local_a4 [4];
  undefined1 *local_a0;
  undefined4 local_9c;
  undefined1 *local_98;
  undefined4 local_94;
  undefined1 *local_90;
  undefined1 *local_8c;
  undefined4 local_88;
  undefined1 *local_84;
  undefined4 local_80;
  undefined1 *local_7c;
  undefined1 *local_78;
  undefined4 local_74;
  undefined1 *local_70;
  undefined4 local_6c;
  undefined1 *local_68;
  undefined1 *local_64;
  undefined4 local_60;
  undefined1 *local_5c;
  undefined4 local_58;
  undefined1 *local_54;
  undefined4 local_50;
  undefined4 local_4c;
  int local_48;
  undefined4 local_44;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070c8ab;
  local_10 = ExceptionList;
  uStack_b4 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_1c = 0x35c;
  pcStack_b8 = (code *)&local_1c;
  puStack_bc = (undefined4 *)0x40cebf;
  pcStack_b8 = (code *)game_timing_or_delay_helper();
  puStack_bc = (undefined4 *)0x40cec5;
  FUN_0065e0b0();
  local_20 = 0x22;
  pcStack_b8 = (code *)&local_20;
  puStack_bc = (undefined4 *)0x40cedd;
  FUN_0040d330();
  pcStack_b8 = (code *)0x40cee4;
  FUN_0040d540();
  local_24 = 0x35c;
  pcStack_b8 = (code *)&local_24;
  puStack_bc = (undefined4 *)0x40cefa;
  pcStack_b8 = (code *)game_timing_or_delay_helper();
  puStack_bc = (undefined4 *)0xc8;
  puStack_c0 = (undefined4 *)0x8c;
  puStack_c4 = (undefined4 *)0x2c;
  local_54 = (undefined1 *)auStack_dc;
  pcStack_e0 = "sprite/interface/disjointshopwindow.img";
  uStack_e4 = 0x40cf19;
  local_58 = FUN_004054a0();
  local_8 = 0;
  local_5c = auStack_f4;
  puStack_f8 = &DAT_0073fdb0;
  uStack_fc = 0x40cf35;
  local_60 = FUN_004054a0();
  local_8 = CONCAT31(local_8._1_3_,1);
  puStack_f8 = (undefined *)0x64;
  local_64 = auStack_110;
  FUN_004054a0(&DAT_0073fdc0);
  local_8 = 0xffffffff;
  local_28 = FUN_00661cc0(0,0);
  *(undefined4 *)(local_28 + 0x98c) = 0x35c;
  *(undefined1 *)(local_28 + 0x50) = 1;
  local_2c = 0x22;
  pcStack_b8 = (code *)0x1;
  puStack_bc = &local_2c;
  puStack_c0 = (undefined4 *)0x40cf97;
  local_14 = local_28;
  FUN_0040d330();
  puStack_bc = (undefined4 *)0x40cf9e;
  FUN_0040d5a0();
  for (local_18 = 0; local_18 == 0; local_18 = local_18 + 1) {
    local_30 = 0x35c;
    pcStack_b8 = (code *)&local_30;
    puStack_bc = (undefined4 *)0x40cfd0;
    pcStack_b8 = (code *)game_timing_or_delay_helper();
    puStack_bc = (undefined4 *)0x35;
    puStack_c0 = (undefined4 *)0x38;
    puStack_c4 = (undefined4 *)0x6;
    local_68 = (undefined1 *)auStack_dc;
    pcStack_e0 = "sprite/interface/iteminventorywindow.img";
    uStack_e4 = 0x40cfe9;
    local_6c = FUN_004054a0();
    local_8 = 2;
    local_70 = auStack_f4;
    puStack_f8 = &DAT_0073fdf4;
    uStack_fc = 0x40d005;
    local_74 = FUN_004054a0();
    local_8 = CONCAT31(local_8._1_3_,3);
    puStack_f8 = (undefined *)0x32;
    local_78 = auStack_110;
    FUN_004054a0(&DAT_0073fe08);
    local_8 = 0xffffffff;
    local_34 = FUN_00661cc0(0,0);
    *(undefined4 *)(local_34 + 0x98c) = 0x35c;
    *(undefined4 *)(local_34 + 0xa0c) = 0xd;
    *(int *)(local_34 + 0xa10) = local_18;
    local_38 = 0x22;
    pcStack_b8 = (code *)local_18;
    puStack_bc = &local_38;
    puStack_c0 = (undefined4 *)0x40d07b;
    local_14 = local_34;
    FUN_0040d330();
    puStack_bc = (undefined4 *)0x40d082;
    pcStack_b8 = (code *)FUN_00405270();
    puStack_bc = (undefined4 *)local_14;
    puStack_c0 = (undefined4 *)0x40d08c;
    puStack_c0 = (undefined4 *)game_get_player_or_session_blob();
    puStack_c4 = (undefined4 *)0x40d092;
    FUN_006cdee0();
  }
  local_3c = 0x35c;
  pcStack_b8 = (code *)&local_3c;
  puStack_bc = (undefined4 *)0x40d0af;
  pcStack_b8 = (code *)game_timing_or_delay_helper();
  puStack_bc = (undefined4 *)0xd;
  puStack_c0 = (undefined4 *)0x70;
  puStack_c4 = (undefined4 *)0x30;
  local_7c = (undefined1 *)auStack_dc;
  pcStack_e0 = "sprite/interface/disjointshopwindow.img";
  uStack_e4 = 0x40d0c8;
  local_80 = FUN_004054a0();
  local_8 = 4;
  local_84 = auStack_f4;
  puStack_f8 = &DAT_0073fe40;
  uStack_fc = 0x40d0e4;
  local_88 = FUN_004054a0();
  local_8 = CONCAT31(local_8._1_3_,5);
  puStack_f8 = (undefined *)0x46;
  local_8c = auStack_110;
  FUN_004054a0(&DAT_0073fe58);
  local_8 = 0xffffffff;
  local_40 = FUN_00661cc0(0,2);
  *(undefined4 *)(local_40 + 0x98c) = 0x35c;
  pcStack_b8 = (code *)0x73fe68;
  puStack_bc = (undefined4 *)0x40d141;
  local_14 = local_40;
  FUN_004053a0();
  *(undefined4 *)(local_14 + 0x984) = 0x285;
  local_44 = 0x35c;
  pcStack_b8 = (code *)&local_44;
  puStack_bc = (undefined4 *)0x40d163;
  pcStack_b8 = (code *)game_timing_or_delay_helper();
  puStack_bc = (undefined4 *)0x5f;
  puStack_c0 = (undefined4 *)0x2e;
  puStack_c4 = (undefined4 *)0x33;
  local_90 = (undefined1 *)auStack_dc;
  pcStack_e0 = "sprite/interface/disjointshopwindow.img";
  uStack_e4 = 0x40d17f;
  local_94 = FUN_004054a0();
  local_8 = 6;
  local_98 = auStack_f4;
  puStack_f8 = &DAT_0073fea0;
  uStack_fc = 0x40d1a1;
  local_9c = FUN_004054a0();
  local_8 = CONCAT31(local_8._1_3_,7);
  puStack_f8 = (undefined *)0x46;
  local_a0 = auStack_110;
  FUN_004054a0(&DAT_0073feb0);
  local_8 = 0xffffffff;
  local_48 = FUN_00661cc0(0,2);
  *(undefined4 *)(local_48 + 0x98c) = 0x35c;
  pcStack_b8 = (code *)0x73fec0;
  puStack_bc = (undefined4 *)0x40d1fe;
  local_14 = local_48;
  FUN_004053a0();
  *(undefined4 *)(local_14 + 0x984) = 0x283;
  local_4c = 0x35c;
  local_50 = 0x35c;
  pcStack_b8 = FUN_006574e0;
  puStack_bc = (undefined4 *)local_a4;
  puStack_c0 = &local_4c;
  puStack_c4 = (undefined4 *)0x40d233;
  game_timing_or_delay_helper();
  puStack_c0 = (undefined4 *)0x40d23a;
  puStack_bc = (undefined4 *)FUN_00402170();
  puStack_bc = (undefined4 *)*puStack_bc;
  puStack_c0 = (undefined4 *)local_a8;
  puStack_c4 = &local_50;
  uStack_c8 = 0x40d252;
  game_timing_or_delay_helper();
  puStack_c4 = (undefined4 *)0x40d259;
  puStack_c0 = (undefined4 *)FUN_004021b0();
  puStack_c0 = (undefined4 *)*puStack_c0;
  puStack_c4 = (undefined4 *)0x40d261;
  FUN_00405d30();
  pcStack_b8 = (code *)DAT_007ca768;
  puStack_bc = (undefined4 *)DAT_007ca764;
  puVar2 = &DAT_007ca70c;
  puVar3 = auStack_dc;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  pcStack_e0 = (char *)0x40d288;
  FUN_0065e180();
  ExceptionList = local_10;
  return;
}


/* ==== 0040d7f0  npk_get_relative_res_path  size=19 ==== */

void npk_get_relative_res_path(void)

{
  _String_val<std::_Simple_types<char>_> *in_ECX;
  
  std::_String_val<std::_Simple_types<char>_>::_Myptr(in_ECX);
  return;
}


/* ==== 00412e30  img_path_loader_06  size=5383 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void img_path_loader_06(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  undefined4 *puVar7;
  char **ppcVar8;
  undefined1 auStack_40c [20];
  undefined4 uStack_3f8;
  undefined *puStack_3f4;
  undefined1 auStack_3f0 [16];
  undefined4 uStack_3e0;
  char *pcStack_3dc;
  char *apcStack_3d8 [3];
  undefined1 auStack_3cc [8];
  undefined4 uStack_3c4;
  undefined4 *puStack_3c0;
  function<void___cdecl(void)> *pfStack_3bc;
  function<void___cdecl(void)> *pfStack_3b8;
  function<void___cdecl(void)> *pfStack_3b4;
  uint uStack_3b0;
  undefined1 local_36c [4];
  undefined1 *local_368;
  char **local_364;
  undefined1 local_360 [4];
  undefined1 local_35c [4];
  undefined1 *local_358;
  undefined4 local_354;
  undefined1 *local_350;
  undefined4 local_34c;
  undefined1 *local_348;
  undefined1 *local_344;
  undefined4 local_340;
  undefined1 *local_33c;
  undefined4 local_338;
  undefined1 local_334 [4];
  undefined4 local_330;
  undefined1 *local_32c;
  undefined4 local_328;
  undefined1 *local_324;
  undefined4 local_320;
  undefined1 *local_31c;
  undefined4 local_318;
  undefined1 *local_314;
  undefined4 local_310;
  undefined1 *local_30c;
  undefined4 local_308;
  undefined4 local_304;
  undefined4 local_300;
  undefined4 local_2fc;
  undefined4 local_2f8;
  undefined4 local_2f4;
  undefined4 local_2f0;
  undefined4 local_2ec;
  int local_2e8;
  int local_2e4;
  int local_2e0;
  int local_2dc;
  int local_2d8;
  int local_2d4;
  int local_2d0;
  undefined4 local_2cc;
  undefined4 local_2c8;
  int local_2c4;
  undefined4 local_2c0;
  undefined4 local_2bc;
  int local_2b8;
  int local_2b4;
  undefined4 local_2b0;
  int local_2ac;
  int local_2a8;
  undefined4 local_2a4;
  int local_2a0;
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
  int local_264;
  undefined4 local_260;
  int local_25c;
  int local_258;
  undefined4 local_254;
  undefined4 local_250;
  undefined4 local_24c;
  undefined4 local_248;
  int local_244;
  int local_240;
  int local_23c;
  int local_238;
  char local_231;
  int local_230;
  undefined4 local_22c;
  int local_228;
  function<void___cdecl(void)> local_224 [24];
  function<void___cdecl(void)> local_20c [24];
  function<void___cdecl(void)> local_1f4 [24];
  function<void___cdecl(void)> local_1dc [24];
  function<void___cdecl(void)> local_1c4 [24];
  function<void___cdecl(void)> local_1ac [24];
  function<void___cdecl(void)> local_194 [24];
  function<void___cdecl(void)> local_17c [24];
  function<void___cdecl(void)> local_164 [24];
  function<void___cdecl(void)> local_14c [24];
  function<void___cdecl(void)> local_134 [24];
  function<void___cdecl(void)> local_11c [24];
  function<void___cdecl(void)> local_104 [24];
  function<void___cdecl(void)> local_ec [24];
  function<void___cdecl(void)> local_d4 [24];
  function<void___cdecl(void)> local_bc [24];
  undefined1 local_a4 [4];
  int local_a0;
  int local_9c;
  undefined4 local_98;
  undefined4 local_7c;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070cd6f;
  local_10 = ExceptionList;
  uStack_3b0 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_2c8 = 0x47;
  pfStack_3b4 = (function<void___cdecl(void)> *)&local_2c8;
  pfStack_3b8 = (function<void___cdecl(void)> *)0x412e78;
  local_14 = uStack_3b0;
  pfStack_3b4 = (function<void___cdecl(void)> *)game_timing_or_delay_helper();
  pfStack_3b8 = (function<void___cdecl(void)> *)0x412e7e;
  FUN_0065e0b0();
  pfStack_3b4 = (function<void___cdecl(void)> *)&DAT_0073ff28;
  pfStack_3b8 = (function<void___cdecl(void)> *)0x412e91;
  FUN_004054a0();
  local_8 = 0;
  pfStack_3b4 = (function<void___cdecl(void)> *)local_36c;
  pfStack_3b8 = (function<void___cdecl(void)> *)0x412ead;
  pfStack_3b4 = (function<void___cdecl(void)> *)FUN_0040d380();
  pfStack_3b8 = local_bc;
  pfStack_3bc = (function<void___cdecl(void)> *)local_334;
  puStack_3c0 = (undefined4 *)0x412eca;
  FUN_0040e2f0();
  pfStack_3b8 = (function<void___cdecl(void)> *)0x412ed1;
  local_231 = FUN_0040d2d0();
  local_8 = 0xffffffff;
  pfStack_3b4 = (function<void___cdecl(void)> *)0x412ee9;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_bc);
  if (local_231 != '\0') {
    pfStack_3b4 = (function<void___cdecl(void)> *)&DAT_0073ff38;
    pfStack_3b8 = (function<void___cdecl(void)> *)0x412f04;
    FUN_004054a0();
    pfStack_3b4 = local_d4;
    pfStack_3b8 = (function<void___cdecl(void)> *)0x412f19;
    FUN_0040d360();
    pfStack_3b4 = (function<void___cdecl(void)> *)0x412f24;
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_d4);
  }
  local_230 = 0x13;
  local_23c = 0xc;
  pfStack_3b4 = (function<void___cdecl(void)> *)0x0;
  pfStack_3b8 = (function<void___cdecl(void)> *)0xc;
  pfStack_3bc = (function<void___cdecl(void)> *)0x13;
  local_364 = apcStack_3d8 + 1;
  apcStack_3d8[0] = &DAT_0073ff48;
  pcStack_3dc = (char *)0x412f5e;
  FUN_004054a0();
  apcStack_3d8[0] = (char *)0x412f69;
  d3d9_create_texture_004b7450();
  local_2cc = 0x47;
  pfStack_3b4 = (function<void___cdecl(void)> *)&local_2cc;
  pfStack_3b8 = (function<void___cdecl(void)> *)0x412f85;
  pfStack_3b4 = (function<void___cdecl(void)> *)game_timing_or_delay_helper();
  pfStack_3b8 = (function<void___cdecl(void)> *)(0xf0 - (local_23c * 0xd + 0xc) / 2);
  pfStack_3bc = (function<void___cdecl(void)> *)(0x140 - (local_230 * 0xc + 0xc) / 2);
  puStack_3c0 = (undefined4 *)0x0;
  local_368 = (undefined1 *)apcStack_3d8;
  pcStack_3dc = &DAT_0073ff58;
  uStack_3e0 = 0x412fcb;
  FUN_004054a0();
  local_8 = 1;
  puStack_3f4 = &DAT_0073ff68;
  uStack_3f8 = 0x412fed;
  FUN_004054a0();
  local_8 = CONCAT31(local_8._1_3_,2);
  puStack_3f4 = (undefined *)0x64;
  FUN_004054a0(&DAT_0073ff78);
  local_8 = 0xffffffff;
  local_2d0 = FUN_00661cc0(0,0);
  *(undefined4 *)(local_2d0 + 0x98c) = 0x47;
  *(undefined1 *)(local_2d0 + 0x50) = 1;
  if (param_5 == -1) {
    *(int *)(local_2d0 + 0x54) = (DAT_007ca71c - ((local_230 * 0x18 + 0x18) / 3 + -0x17)) + -0x1a;
  }
  else {
    *(int *)(local_2d0 + 0x54) = (DAT_007ca71c - ((local_230 * 0xc + 0xc) / 3 + -0x17)) + -0x1a;
  }
  *(int *)(local_2d0 + 0x58) = (DAT_007ca720 - (local_23c * 0xd + -0x14)) + -0xc;
  pfStack_3b4 = (function<void___cdecl(void)> *)0x1;
  pfStack_3b8 = (function<void___cdecl(void)> *)0x2;
  pfStack_3bc = (function<void___cdecl(void)> *)0x4130db;
  local_228 = local_2d0;
  FUN_0040d3c0();
  pfStack_3b4 = (function<void___cdecl(void)> *)0x4130ec;
  pfStack_3b4 = (function<void___cdecl(void)> *)FUN_0040d3a0();
  pfStack_3b8 = (function<void___cdecl(void)> *)0x4130fe;
  FUN_0040d4e0();
  pfStack_3b4 = (function<void___cdecl(void)> *)0x1;
  pfStack_3b8 = (function<void___cdecl(void)> *)0x0;
  pfStack_3bc = (function<void___cdecl(void)> *)0x413113;
  FUN_0040d4b0();
  pfStack_3b8 = (function<void___cdecl(void)> *)0x41311d;
  FUN_0040d730();
  pfStack_3b4 = (function<void___cdecl(void)> *)0x73ff80;
  pfStack_3b8 = (function<void___cdecl(void)> *)0x0;
  pfStack_3bc = (function<void___cdecl(void)> *)0x0;
  puStack_3c0 = (undefined4 *)0x413137;
  FUN_0040d4b0();
  pfStack_3bc = (function<void___cdecl(void)> *)0x413141;
  FUN_0040d680();
  pfStack_3b8 = (function<void___cdecl(void)> *)0x41314b;
  FUN_004053a0();
  pfStack_3b4 = (function<void___cdecl(void)> *)0x0;
  pfStack_3b8 = (function<void___cdecl(void)> *)0x0;
  pfStack_3bc = (function<void___cdecl(void)> *)0x413160;
  FUN_0040d4b0();
  pfStack_3b8 = (function<void___cdecl(void)> *)0x41316a;
  iVar1 = FUN_0040d680();
  *(undefined1 *)(iVar1 + 0x20) = 0x5a;
  pfStack_3b4 = (function<void___cdecl(void)> *)0x5a;
  apcStack_3d8[2] = "sprite/interface/popup.img";
  apcStack_3d8[1] = (char *)0x413185;
  FUN_004054a0();
  local_8 = 3;
  apcStack_3d8[2] = (char *)0x413197;
  FUN_004bcf00();
  local_8 = 0xffffffff;
  apcStack_3d8[2] = (char *)0x4131a5;
  local_2d4 = FUN_004b8ca0();
  iVar2 = local_230 * 0xc;
  iVar1 = *(int *)(local_2d4 + 0xc);
  pfStack_3b4 = (function<void___cdecl(void)> *)0x0;
  pfStack_3b8 = (function<void___cdecl(void)> *)0x0;
  pfStack_3bc = (function<void___cdecl(void)> *)0x4131da;
  FUN_0040d4b0();
  pfStack_3b8 = (function<void___cdecl(void)> *)0x4131e4;
  iVar3 = FUN_0040d680();
  *(int *)(iVar3 + 0x24) = ((iVar2 + 0xc) - iVar1) / 2;
  pfStack_3b4 = (function<void___cdecl(void)> *)0x0;
  pfStack_3b8 = (function<void___cdecl(void)> *)0x0;
  pfStack_3bc = (function<void___cdecl(void)> *)0x4131fc;
  FUN_0040d4b0();
  pfStack_3b8 = (function<void___cdecl(void)> *)0x413206;
  iVar1 = FUN_0040d680();
  *(undefined4 *)(iVar1 + 0x28) = 0xf;
  pfStack_3b4 = (function<void___cdecl(void)> *)0x0;
  pfStack_3b8 = (function<void___cdecl(void)> *)0x0;
  pfStack_3bc = (function<void___cdecl(void)> *)0x413222;
  FUN_0040d4b0();
  pfStack_3b8 = (function<void___cdecl(void)> *)0x41322c;
  iVar1 = FUN_0040d680();
  *(undefined1 *)(iVar1 + 0x3b) = 0x57;
  pfStack_3b4 = (function<void___cdecl(void)> *)0x0;
  pfStack_3b8 = (function<void___cdecl(void)> *)0x413243;
  iVar1 = FUN_0040d4b0();
  *(undefined4 *)(iVar1 + 0x8c) = 1;
  pfStack_3b4 = (function<void___cdecl(void)> *)0x0;
  pfStack_3b8 = (function<void___cdecl(void)> *)0x413260;
  iVar1 = FUN_0040d4b0();
  *(undefined4 *)(iVar1 + 0x84) = 0;
  pfStack_3b4 = (function<void___cdecl(void)> *)0x1;
  pfStack_3b8 = (function<void___cdecl(void)> *)0x1;
  pfStack_3bc = (function<void___cdecl(void)> *)0x41327f;
  FUN_0040d4b0();
  pfStack_3b8 = (function<void___cdecl(void)> *)0x413289;
  FUN_0040d730();
  pfStack_3b4 = (function<void___cdecl(void)> *)0x73ffb8;
  pfStack_3b8 = (function<void___cdecl(void)> *)0x0;
  pfStack_3bc = (function<void___cdecl(void)> *)0x1;
  puStack_3c0 = (undefined4 *)0x4132a3;
  FUN_0040d4b0();
  pfStack_3bc = (function<void___cdecl(void)> *)0x4132ad;
  FUN_0040d680();
  pfStack_3b8 = (function<void___cdecl(void)> *)0x4132b7;
  FUN_004053a0();
  pfStack_3b4 = (function<void___cdecl(void)> *)0x0;
  pfStack_3b8 = (function<void___cdecl(void)> *)0x1;
  pfStack_3bc = (function<void___cdecl(void)> *)0x4132cc;
  FUN_0040d4b0();
  pfStack_3b8 = (function<void___cdecl(void)> *)0x4132d6;
  iVar1 = FUN_0040d680();
  *(undefined1 *)(iVar1 + 0x20) = 0x5a;
  pfStack_3b4 = (function<void___cdecl(void)> *)0x5a;
  apcStack_3d8[2] = "sprite/interface/popup.img";
  apcStack_3d8[1] = (char *)0x4132f1;
  FUN_004054a0();
  local_8 = 4;
  apcStack_3d8[2] = (char *)0x413303;
  FUN_004bcf00();
  local_8 = 0xffffffff;
  apcStack_3d8[2] = (char *)0x413311;
  local_2d8 = FUN_004b8ca0();
  iVar2 = local_230 * 0xc;
  iVar1 = *(int *)(local_2d8 + 0xc);
  pfStack_3b4 = (function<void___cdecl(void)> *)0x0;
  pfStack_3b8 = (function<void___cdecl(void)> *)0x1;
  pfStack_3bc = (function<void___cdecl(void)> *)0x413346;
  FUN_0040d4b0();
  pfStack_3b8 = (function<void___cdecl(void)> *)0x413350;
  iVar3 = FUN_0040d680();
  *(int *)(iVar3 + 0x24) = ((iVar2 + 0xc) - iVar1) / 2;
  pfStack_3b4 = (function<void___cdecl(void)> *)0x5a;
  apcStack_3d8[2] = "sprite/interface/popup.img";
  apcStack_3d8[1] = (char *)0x41336a;
  FUN_004054a0();
  local_8 = 5;
  apcStack_3d8[2] = (char *)0x41337c;
  FUN_004bcf00();
  local_8 = 0xffffffff;
  apcStack_3d8[2] = (char *)0x41338a;
  local_2dc = FUN_004b8ca0();
  pfStack_3b4 = (function<void___cdecl(void)> *)0x0;
  pfStack_3b8 = (function<void___cdecl(void)> *)0x0;
  pfStack_3bc = (function<void___cdecl(void)> *)0x4133a5;
  FUN_0040d4b0();
  pfStack_3b8 = (function<void___cdecl(void)> *)0x4133af;
  iVar1 = FUN_0040d680();
  iVar1 = *(int *)(iVar1 + 0x28);
  iVar2 = *(int *)(local_2dc + 0x10);
  pfStack_3b4 = (function<void___cdecl(void)> *)0x0;
  pfStack_3b8 = (function<void___cdecl(void)> *)0x1;
  pfStack_3bc = (function<void___cdecl(void)> *)0x4133d4;
  FUN_0040d4b0();
  pfStack_3b8 = (function<void___cdecl(void)> *)0x4133de;
  iVar3 = FUN_0040d680();
  *(int *)(iVar3 + 0x28) = iVar1 + 0x2c + iVar2;
  pfStack_3b4 = (function<void___cdecl(void)> *)0x0;
  pfStack_3b8 = (function<void___cdecl(void)> *)0x1;
  pfStack_3bc = (function<void___cdecl(void)> *)0x4133f6;
  FUN_0040d4b0();
  pfStack_3b8 = (function<void___cdecl(void)> *)0x413400;
  iVar1 = FUN_0040d680();
  *(undefined1 *)(iVar1 + 0x3b) = 0x57;
  pfStack_3b4 = (function<void___cdecl(void)> *)0x1;
  pfStack_3b8 = (function<void___cdecl(void)> *)0x413417;
  iVar1 = FUN_0040d4b0();
  *(undefined4 *)(iVar1 + 0x8c) = 1;
  pfStack_3b4 = (function<void___cdecl(void)> *)0x1;
  pfStack_3b8 = (function<void___cdecl(void)> *)0x413434;
  iVar1 = FUN_0040d4b0();
  *(undefined4 *)(iVar1 + 0x84) = 0;
  *(undefined4 *)(local_228 + 0x1a8) = 2;
  pfStack_3b4 = *(function<void___cdecl(void)> **)(local_228 + 0x1a8);
  pfStack_3b8 = (function<void___cdecl(void)> *)0x41346c;
  FUN_0040d4e0();
  pfStack_3b4 = (function<void___cdecl(void)> *)0x1;
  pfStack_3b8 = (function<void___cdecl(void)> *)0x0;
  pfStack_3bc = (function<void___cdecl(void)> *)0x413481;
  FUN_0040d4b0();
  pfStack_3b8 = (function<void___cdecl(void)> *)0x41348b;
  FUN_0040d730();
  pfStack_3b4 = *(function<void___cdecl(void)> **)(param_2 + 4);
  pfStack_3b8 = (function<void___cdecl(void)> *)0x41349d;
  iVar1 = game_loop_helper_cc840();
  pfStack_3b4 = (function<void___cdecl(void)> *)(iVar1 + 0xd0);
  pfStack_3b8 = (function<void___cdecl(void)> *)0x0;
  pfStack_3bc = (function<void___cdecl(void)> *)0x0;
  puStack_3c0 = (undefined4 *)0x4134b8;
  FUN_0040d4b0();
  pfStack_3bc = (function<void___cdecl(void)> *)0x4134c2;
  FUN_0040d680();
  pfStack_3b8 = (function<void___cdecl(void)> *)0x4134cc;
  FUN_0040d840();
  pfStack_3b4 = *(function<void___cdecl(void)> **)(param_2 + 4);
  pfStack_3b8 = (function<void___cdecl(void)> *)0x4134de;
  iVar1 = game_loop_helper_cc840();
  pfStack_3b4 = (function<void___cdecl(void)> *)0x0;
  pfStack_3b8 = (function<void___cdecl(void)> *)0x0;
  pfStack_3bc = (function<void___cdecl(void)> *)0x4134f5;
  FUN_0040d4b0();
  pfStack_3b8 = (function<void___cdecl(void)> *)0x4134ff;
  iVar2 = FUN_0040d680();
  *(undefined1 *)(iVar2 + 0x20) = *(undefined1 *)(iVar1 + 0xe8);
  pfStack_3b4 = (function<void___cdecl(void)> *)0x0;
  pfStack_3b8 = (function<void___cdecl(void)> *)0x0;
  pfStack_3bc = (function<void___cdecl(void)> *)0x41351d;
  FUN_0040d4b0();
  pfStack_3b8 = (function<void___cdecl(void)> *)0x413527;
  iVar1 = FUN_0040d680();
  iVar1 = *(int *)(iVar1 + 0x24);
  pfStack_3b4 = (function<void___cdecl(void)> *)0x0;
  pfStack_3b8 = (function<void___cdecl(void)> *)0x0;
  pfStack_3bc = (function<void___cdecl(void)> *)0x413542;
  FUN_0040d4b0();
  pfStack_3b8 = (function<void___cdecl(void)> *)0x41354c;
  iVar2 = FUN_0040d680();
  *(int *)(iVar2 + 0x24) = iVar1 + 1;
  pfStack_3b4 = (function<void___cdecl(void)> *)0x5a;
  apcStack_3d8[2] = "sprite/interface/popup.img";
  apcStack_3d8[1] = (char *)0x413566;
  FUN_004054a0();
  local_8 = 6;
  apcStack_3d8[2] = (char *)0x413578;
  FUN_004bcf00();
  local_8 = 0xffffffff;
  apcStack_3d8[2] = (char *)0x413586;
  local_2c4 = FUN_004b8ca0();
  pfStack_3b4 = *(function<void___cdecl(void)> **)(param_2 + 4);
  pfStack_3b8 = (function<void___cdecl(void)> *)0x41359e;
  iVar1 = game_loop_helper_cc840();
  pfStack_3b4 = *(function<void___cdecl(void)> **)(iVar1 + 0xe8);
  apcStack_3d8[2] = *(char **)(param_2 + 4);
  apcStack_3d8[1] = (char *)0x4135c2;
  iVar1 = game_loop_helper_cc840();
  apcStack_3d8[2] = (char *)(iVar1 + 0xd0);
  apcStack_3d8[1] = (char *)0x4135cf;
  local_308 = FUN_00405520();
  local_8 = 7;
  apcStack_3d8[2] = (char *)0x4135e1;
  FUN_004bcf00();
  local_8 = 0xffffffff;
  apcStack_3d8[2] = (char *)0x4135ef;
  local_2e0 = FUN_004b8ca0();
  iVar1 = *(int *)(local_2c4 + 0x10);
  iVar2 = *(int *)(local_2e0 + 0x10);
  pfStack_3b4 = (function<void___cdecl(void)> *)0x0;
  pfStack_3b8 = (function<void___cdecl(void)> *)0x0;
  pfStack_3bc = (function<void___cdecl(void)> *)0x413623;
  FUN_0040d4b0();
  pfStack_3b8 = (function<void___cdecl(void)> *)0x41362d;
  iVar3 = FUN_0040d680();
  iVar3 = *(int *)(iVar3 + 0x28);
  pfStack_3b4 = (function<void___cdecl(void)> *)0x0;
  pfStack_3b8 = (function<void___cdecl(void)> *)0x0;
  pfStack_3bc = (function<void___cdecl(void)> *)0x413645;
  FUN_0040d4b0();
  pfStack_3b8 = (function<void___cdecl(void)> *)0x41364f;
  iVar4 = FUN_0040d680();
  *(int *)(iVar4 + 0x28) = (iVar1 - iVar2) / 2 + iVar3;
  pfStack_3b4 = (function<void___cdecl(void)> *)0x1;
  pfStack_3b8 = (function<void___cdecl(void)> *)0x1;
  pfStack_3bc = (function<void___cdecl(void)> *)0x413667;
  FUN_0040d4b0();
  pfStack_3b8 = (function<void___cdecl(void)> *)0x413671;
  FUN_0040d730();
  pfStack_3b4 = (function<void___cdecl(void)> *)0xe;
  pfStack_3b8 = (function<void___cdecl(void)> *)0x41367e;
  iVar1 = game_loop_helper_cd6d0();
  pfStack_3b4 = (function<void___cdecl(void)> *)(iVar1 + 0xb0);
  pfStack_3b8 = (function<void___cdecl(void)> *)0x0;
  pfStack_3bc = (function<void___cdecl(void)> *)0x1;
  puStack_3c0 = (undefined4 *)0x413699;
  FUN_0040d4b0();
  pfStack_3bc = (function<void___cdecl(void)> *)0x4136a3;
  FUN_0040d680();
  pfStack_3b8 = (function<void___cdecl(void)> *)0x4136ad;
  FUN_0040d840();
  pfStack_3b4 = (function<void___cdecl(void)> *)0xe;
  pfStack_3b8 = (function<void___cdecl(void)> *)0x4136ba;
  iVar1 = game_loop_helper_cd6d0();
  pfStack_3b4 = (function<void___cdecl(void)> *)0x0;
  pfStack_3b8 = (function<void___cdecl(void)> *)0x1;
  pfStack_3bc = (function<void___cdecl(void)> *)0x4136d1;
  FUN_0040d4b0();
  pfStack_3b8 = (function<void___cdecl(void)> *)0x4136db;
  iVar2 = FUN_0040d680();
  *(undefined1 *)(iVar2 + 0x20) = *(undefined1 *)(iVar1 + 200);
  pfStack_3b4 = (function<void___cdecl(void)> *)0x0;
  pfStack_3b8 = (function<void___cdecl(void)> *)0x0;
  pfStack_3bc = (function<void___cdecl(void)> *)0x4136f9;
  FUN_0040d4b0();
  pfStack_3b8 = (function<void___cdecl(void)> *)0x413703;
  iVar1 = FUN_0040d680();
  iVar1 = *(int *)(iVar1 + 0x24);
  pfStack_3b4 = (function<void___cdecl(void)> *)0x0;
  pfStack_3b8 = (function<void___cdecl(void)> *)0x1;
  pfStack_3bc = (function<void___cdecl(void)> *)0x41371e;
  FUN_0040d4b0();
  pfStack_3b8 = (function<void___cdecl(void)> *)0x413728;
  iVar2 = FUN_0040d680();
  *(int *)(iVar2 + 0x24) = iVar1 + 1;
  pfStack_3b4 = (function<void___cdecl(void)> *)0x5a;
  apcStack_3d8[2] = "sprite/interface/popup.img";
  apcStack_3d8[1] = (char *)0x413742;
  local_30c = auStack_3cc;
  local_310 = FUN_004054a0();
  local_8 = 8;
  apcStack_3d8[2] = (char *)0x413754;
  FUN_004bcf00();
  local_8 = 0xffffffff;
  apcStack_3d8[2] = (char *)0x413762;
  local_2e4 = FUN_004b8ca0();
  pfStack_3b4 = (function<void___cdecl(void)> *)0xe;
  pfStack_3b8 = (function<void___cdecl(void)> *)0x413775;
  iVar1 = game_loop_helper_cd6d0();
  pfStack_3b4 = *(function<void___cdecl(void)> **)(iVar1 + 200);
  apcStack_3d8[2] = (char *)0xe;
  apcStack_3d8[1] = (char *)0x413794;
  local_314 = auStack_3cc;
  iVar1 = game_loop_helper_cd6d0();
  apcStack_3d8[2] = (char *)(iVar1 + 0xb0);
  apcStack_3d8[1] = (char *)0x4137a1;
  local_318 = FUN_00405520();
  local_8 = 9;
  apcStack_3d8[2] = (char *)0x4137b3;
  FUN_004bcf00();
  local_8 = 0xffffffff;
  apcStack_3d8[2] = (char *)0x4137c1;
  local_2e8 = FUN_004b8ca0();
  iVar1 = *(int *)(local_2e4 + 0x10);
  iVar2 = *(int *)(local_2e8 + 0x10);
  pfStack_3b4 = (function<void___cdecl(void)> *)0x0;
  pfStack_3b8 = (function<void___cdecl(void)> *)0x1;
  pfStack_3bc = (function<void___cdecl(void)> *)0x4137f5;
  FUN_0040d4b0();
  pfStack_3b8 = (function<void___cdecl(void)> *)0x4137ff;
  iVar3 = FUN_0040d680();
  iVar3 = *(int *)(iVar3 + 0x28);
  pfStack_3b4 = (function<void___cdecl(void)> *)0x0;
  pfStack_3b8 = (function<void___cdecl(void)> *)0x1;
  pfStack_3bc = (function<void___cdecl(void)> *)0x413817;
  FUN_0040d4b0();
  pfStack_3b8 = (function<void___cdecl(void)> *)0x413821;
  iVar4 = FUN_0040d680();
  *(int *)(iVar4 + 0x28) = (iVar1 - iVar2) / 2 + iVar3;
  local_22c = 0xffffffff;
  pfStack_3b4 = *(function<void___cdecl(void)> **)(param_2 + 4);
  pfStack_3b8 = (function<void___cdecl(void)> *)0x413840;
  iVar1 = game_loop_helper_cc840();
  if (*(int *)(iVar1 + 0xb8) == 1) {
    local_22c = 0xff68d5ed;
  }
  else {
    pfStack_3b4 = *(function<void___cdecl(void)> **)(param_2 + 4);
    pfStack_3b8 = (function<void___cdecl(void)> *)0x413867;
    iVar1 = game_loop_helper_cc840();
    if (*(int *)(iVar1 + 0xb8) == 2) {
      local_22c = 0xffb36bff;
    }
    else {
      pfStack_3b4 = *(function<void___cdecl(void)> **)(param_2 + 4);
      pfStack_3b8 = (function<void___cdecl(void)> *)0x41388e;
      iVar1 = game_loop_helper_cc840();
      if (*(int *)(iVar1 + 0xb8) == 3) {
        local_22c = 0xffff00f0;
      }
      else {
        pfStack_3b4 = *(function<void___cdecl(void)> **)(param_2 + 4);
        pfStack_3b8 = (function<void___cdecl(void)> *)0x4138b5;
        iVar1 = game_loop_helper_cc840();
        if (*(int *)(iVar1 + 0xb8) == 4) {
          local_22c = 0xffffb100;
        }
      }
    }
  }
  pfStack_3b4 = (function<void___cdecl(void)> *)0x4138d3;
  FUN_0040b110();
  local_8 = 10;
  if (*(int *)(param_2 + 0xc) < 1) {
    pfStack_3b4 = *(function<void___cdecl(void)> **)(param_2 + 4);
    pfStack_3b8 = (function<void___cdecl(void)> *)0x413a74;
    iVar1 = game_loop_helper_cc840();
    pfStack_3b4 = (function<void___cdecl(void)> *)(iVar1 + 0xc);
    pfStack_3b8 = (function<void___cdecl(void)> *)0x413a83;
    FUN_0040d840();
  }
  else {
    pfStack_3b4 = (function<void___cdecl(void)> *)&DAT_00740044;
    pfStack_3b8 = (function<void___cdecl(void)> *)0x4138f7;
    local_304 = FUN_004054a0();
    local_8._0_1_ = 0xb;
    pfStack_3b4 = *(function<void___cdecl(void)> **)(param_2 + 0xc);
    pfStack_3b8 = local_14c;
    pfStack_3bc = (function<void___cdecl(void)> *)0x413920;
    local_2ec = local_304;
    local_2f8 = FUN_0040a850();
    local_8._0_1_ = 0xc;
    pfStack_3b4 = (function<void___cdecl(void)> *)&DAT_00740048;
    pfStack_3b8 = (function<void___cdecl(void)> *)0x413949;
    local_2f0 = local_2f8;
    pfStack_3b8 = (function<void___cdecl(void)> *)FUN_004054a0();
    local_8._0_1_ = 0xd;
    pfStack_3b4 = (function<void___cdecl(void)> *)local_2f8;
    pfStack_3bc = local_11c;
    puStack_3c0 = (undefined4 *)0x413979;
    local_2fc = pfStack_3b8;
    local_2f4 = pfStack_3b8;
    pfStack_3b8 = (function<void___cdecl(void)> *)FUN_00405cf0();
    local_8._0_1_ = 0xe;
    pfStack_3b4 = (function<void___cdecl(void)> *)local_304;
    pfStack_3bc = local_104;
    puStack_3c0 = (undefined4 *)0x4139ac;
    local_300 = pfStack_3b8;
    local_248 = pfStack_3b8;
    local_250 = FUN_00405cf0();
    local_8._0_1_ = 0xf;
    pfStack_3b4 = *(function<void___cdecl(void)> **)(param_2 + 4);
    pfStack_3b8 = (function<void___cdecl(void)> *)0x4139d7;
    local_24c = local_250;
    iVar1 = game_loop_helper_cc840();
    pfStack_3b4 = (function<void___cdecl(void)> *)(iVar1 + 0xc);
    pfStack_3b8 = (function<void___cdecl(void)> *)local_250;
    pfStack_3bc = local_ec;
    puStack_3c0 = (undefined4 *)0x4139ee;
    pfStack_3b4 = (function<void___cdecl(void)> *)FUN_0040e3d0();
    pfStack_3b8 = (function<void___cdecl(void)> *)0x413a09;
    local_254 = pfStack_3b4;
    FUN_004053e0();
    pfStack_3b4 = (function<void___cdecl(void)> *)0x413a14;
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_ec);
    local_8._0_1_ = 0xe;
    pfStack_3b4 = (function<void___cdecl(void)> *)0x413a23;
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_104);
    local_8._0_1_ = 0xd;
    pfStack_3b4 = (function<void___cdecl(void)> *)0x413a32;
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_11c);
    local_8._0_1_ = 0xc;
    pfStack_3b4 = (function<void___cdecl(void)> *)0x413a41;
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_134);
    local_8._0_1_ = 0xb;
    pfStack_3b4 = (function<void___cdecl(void)> *)0x413a50;
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_14c);
    local_8 = CONCAT31(local_8._1_3_,10);
    pfStack_3b4 = (function<void___cdecl(void)> *)0x413a5f;
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_164);
  }
  local_a0 = *(int *)(local_228 + 0x5c) / 2;
  pfStack_3b4 = (function<void___cdecl(void)> *)0x5a;
  local_31c = auStack_3cc;
  apcStack_3d8[2] = "sprite/interface/popup.img";
  apcStack_3d8[1] = (char *)0x413aaf;
  local_320 = FUN_004054a0();
  local_8._0_1_ = 0x10;
  apcStack_3d8[2] = (char *)0x413abe;
  FUN_004bcf00();
  local_8._0_1_ = 10;
  apcStack_3d8[2] = (char *)0x413ac9;
  local_258 = FUN_004b8ca0();
  iVar1 = *(int *)(local_258 + 0x10);
  pfStack_3b4 = (function<void___cdecl(void)> *)0x0;
  pfStack_3b8 = (function<void___cdecl(void)> *)0x0;
  pfStack_3bc = (function<void___cdecl(void)> *)0x413af7;
  FUN_0040d4b0();
  pfStack_3b8 = (function<void___cdecl(void)> *)0x413b01;
  iVar2 = FUN_0040d680();
  local_9c = (iVar1 + -0xc) / 2 + *(int *)(iVar2 + 0x28);
  local_7c = 1;
  local_98 = local_22c;
  pfStack_3b4 = (function<void___cdecl(void)> *)local_a4;
  pfStack_3b8 = (function<void___cdecl(void)> *)0x413b35;
  FUN_0040d310();
  pfStack_3b4 = (function<void___cdecl(void)> *)&DAT_00740068;
  pfStack_3b8 = (function<void___cdecl(void)> *)0x413b45;
  FUN_004053a0();
  local_a0 = *(int *)(local_228 + 0x5c) / 2;
  pfStack_3b4 = (function<void___cdecl(void)> *)0x5a;
  apcStack_3d8[2] = "sprite/interface/popup.img";
  apcStack_3d8[1] = (char *)0x413b70;
  local_324 = auStack_3cc;
  local_328 = FUN_004054a0();
  local_8._0_1_ = 0x11;
  apcStack_3d8[2] = (char *)0x413b7f;
  FUN_004bcf00();
  local_8 = CONCAT31(local_8._1_3_,10);
  apcStack_3d8[2] = (char *)0x413b8a;
  local_25c = FUN_004b8ca0();
  pfStack_3b4 = (function<void___cdecl(void)> *)0x0;
  pfStack_3b8 = (function<void___cdecl(void)> *)0x0;
  pfStack_3bc = (function<void___cdecl(void)> *)0x413ba5;
  FUN_0040d4b0();
  pfStack_3b8 = (function<void___cdecl(void)> *)0x413baf;
  iVar1 = FUN_0040d680();
  local_9c = *(int *)(iVar1 + 0x28) + 10 + *(int *)(local_25c + 0x10);
  local_7c = 1;
  pfStack_3b4 = (function<void___cdecl(void)> *)local_a4;
  pfStack_3b8 = (function<void___cdecl(void)> *)0x413be4;
  FUN_0040d310();
  pfStack_3b4 = (function<void___cdecl(void)> *)&DAT_0074009c;
  pfStack_3b8 = (function<void___cdecl(void)> *)0x413bf4;
  FUN_004053a0();
  local_a0 = *(int *)(local_228 + 0x5c) / 2;
  local_9c = local_9c + 0xc;
  local_7c = 1;
  pfStack_3b4 = (function<void___cdecl(void)> *)local_a4;
  pfStack_3b8 = (function<void___cdecl(void)> *)0x413c36;
  FUN_0040d310();
  pfStack_3b4 = *(function<void___cdecl(void)> **)(param_2 + 4);
  pfStack_3b8 = (function<void___cdecl(void)> *)0x413c48;
  iVar1 = game_loop_helper_cc840();
  if ((*(int *)(iVar1 + 0x9c) + -1) / 10 < 5) {
    pfStack_3b4 = *(function<void___cdecl(void)> **)(param_2 + 4);
    pfStack_3b8 = (function<void___cdecl(void)> *)0x413c7c;
    iVar1 = game_loop_helper_cc840();
    local_244 = (*(int *)(iVar1 + 0x9c) + -1) / 10;
  }
  else {
    local_244 = 4;
  }
  pfStack_3b4 = (function<void___cdecl(void)> *)local_244;
  pfStack_3b8 = (function<void___cdecl(void)> *)0x413ca5;
  FUN_005dcf50();
  pfStack_3b8 = (function<void___cdecl(void)> *)0x413cac;
  piVar5 = (int *)game_get_flag_object_01a70();
  pfStack_3b4 = *(function<void___cdecl(void)> **)(param_2 + 4);
  pfStack_3b8 = (function<void___cdecl(void)> *)0x413cc0;
  iVar1 = game_loop_helper_cc840();
  pfStack_3b4 = *(function<void___cdecl(void)> **)(iVar1 + 0xb8);
  pfStack_3b8 = (function<void___cdecl(void)> *)0x413cd2;
  FUN_005dcf50();
  pfStack_3b8 = (function<void___cdecl(void)> *)0x413cdc;
  piVar6 = (int *)game_get_flag_object_01a70();
  iVar1 = *piVar5;
  iVar2 = *piVar6;
  pfStack_3b4 = *(function<void___cdecl(void)> **)(param_2 + 4);
  pfStack_3b8 = (function<void___cdecl(void)> *)0x413cf3;
  iVar3 = game_loop_helper_cc840();
  pfStack_3b4 = *(function<void___cdecl(void)> **)(iVar3 + 0xb8);
  pfStack_3b8 = (function<void___cdecl(void)> *)0x413d05;
  FUN_005dcf50();
  pfStack_3b8 = (function<void___cdecl(void)> *)0x413d0f;
  piVar5 = (int *)game_get_flag_object_01a70();
  local_264 = iVar1 * iVar2 + *piVar5 * *(int *)(param_2 + 0x28);
  pfStack_3b4 = (function<void___cdecl(void)> *)&DAT_007400ac;
  pfStack_3b8 = (function<void___cdecl(void)> *)0x413d30;
  local_294 = FUN_004054a0();
  local_8._0_1_ = 0x12;
  pfStack_3b4 = (function<void___cdecl(void)> *)local_264;
  pfStack_3b8 = local_20c;
  pfStack_3bc = (function<void___cdecl(void)> *)0x413d59;
  local_260 = local_294;
  local_288 = FUN_0040a850();
  local_8._0_1_ = 0x13;
  pfStack_3b4 = (function<void___cdecl(void)> *)&DAT_007400b0;
  pfStack_3b8 = (function<void___cdecl(void)> *)0x413d82;
  local_268 = local_288;
  local_27c = FUN_004054a0();
  local_8._0_1_ = 0x14;
  pfStack_3b4 = (function<void___cdecl(void)> *)&DAT_007400b4;
  pfStack_3b8 = (function<void___cdecl(void)> *)0x413da8;
  local_26c = local_27c;
  local_274 = FUN_004054a0();
  local_8._0_1_ = 0x15;
  pfStack_3b4 = (function<void___cdecl(void)> *)0xe;
  pfStack_3b8 = (function<void___cdecl(void)> *)0x413dcb;
  local_270 = local_274;
  pfStack_3b4 = (function<void___cdecl(void)> *)game_loop_helper_cd6d0();
  pfStack_3b8 = (function<void___cdecl(void)> *)local_274;
  pfStack_3bc = local_1c4;
  puStack_3c0 = (undefined4 *)0x413ddf;
  pfStack_3b8 = (function<void___cdecl(void)> *)FUN_0040e3d0();
  local_8._0_1_ = 0x16;
  pfStack_3b4 = (function<void___cdecl(void)> *)local_27c;
  pfStack_3bc = local_1ac;
  puStack_3c0 = (undefined4 *)0x413e12;
  local_280 = pfStack_3b8;
  local_278 = pfStack_3b8;
  pfStack_3b8 = (function<void___cdecl(void)> *)FUN_00405cf0();
  local_8._0_1_ = 0x17;
  pfStack_3b4 = (function<void___cdecl(void)> *)local_288;
  pfStack_3bc = local_194;
  puStack_3c0 = (undefined4 *)0x413e45;
  local_28c = pfStack_3b8;
  local_284 = pfStack_3b8;
  pfStack_3b8 = (function<void___cdecl(void)> *)FUN_00405cf0();
  local_8._0_1_ = 0x18;
  pfStack_3b4 = (function<void___cdecl(void)> *)local_294;
  pfStack_3bc = local_17c;
  puStack_3c0 = (undefined4 *)0x413e78;
  local_298 = pfStack_3b8;
  local_290 = pfStack_3b8;
  pfStack_3b4 = (function<void___cdecl(void)> *)FUN_00405cf0();
  pfStack_3b8 = (function<void___cdecl(void)> *)0x413e93;
  local_29c = pfStack_3b4;
  FUN_004053e0();
  pfStack_3b4 = (function<void___cdecl(void)> *)0x413e9e;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_17c);
  local_8._0_1_ = 0x17;
  pfStack_3b4 = (function<void___cdecl(void)> *)0x413ead;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_194);
  local_8._0_1_ = 0x16;
  pfStack_3b4 = (function<void___cdecl(void)> *)0x413ebc;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_1ac);
  local_8._0_1_ = 0x15;
  pfStack_3b4 = (function<void___cdecl(void)> *)0x413ecb;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_1c4);
  local_8._0_1_ = 0x14;
  pfStack_3b4 = (function<void___cdecl(void)> *)0x413eda;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_1dc);
  local_8._0_1_ = 0x13;
  pfStack_3b4 = (function<void___cdecl(void)> *)0x413ee9;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_1f4);
  local_8._0_1_ = 0x12;
  pfStack_3b4 = (function<void___cdecl(void)> *)0x413ef8;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_20c);
  local_8._0_1_ = 10;
  pfStack_3b4 = (function<void___cdecl(void)> *)0x413f07;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_224);
  local_a0 = *(int *)(local_228 + 0x5c) / 2;
  pfStack_3b4 = (function<void___cdecl(void)> *)0x5a;
  local_32c = auStack_3cc;
  apcStack_3d8[2] = "sprite/interface/popup.img";
  apcStack_3d8[1] = (char *)0x413f33;
  local_330 = FUN_004054a0();
  local_8._0_1_ = 0x19;
  apcStack_3d8[2] = (char *)0x413f42;
  FUN_004bcf00();
  local_8 = CONCAT31(local_8._1_3_,10);
  apcStack_3d8[2] = (char *)0x413f4d;
  local_2a0 = FUN_004b8ca0();
  iVar1 = *(int *)(local_2a0 + 0x10);
  pfStack_3b4 = (function<void___cdecl(void)> *)0x0;
  pfStack_3b8 = (function<void___cdecl(void)> *)0x1;
  pfStack_3bc = (function<void___cdecl(void)> *)0x413f7b;
  FUN_0040d4b0();
  pfStack_3b8 = (function<void___cdecl(void)> *)0x413f85;
  iVar2 = FUN_0040d680();
  local_9c = (iVar1 + -0xc) / 2 + *(int *)(iVar2 + 0x28);
  local_7c = 1;
  local_22c = 0xffffffff;
  pfStack_3b4 = (function<void___cdecl(void)> *)0xe;
  pfStack_3b8 = (function<void___cdecl(void)> *)0x413fac;
  iVar1 = game_loop_helper_cd6d0();
  if (*(int *)(iVar1 + 0x94) == 1) {
    local_22c = 0xff68d5ed;
  }
  else {
    pfStack_3b4 = (function<void___cdecl(void)> *)0xe;
    pfStack_3b8 = (function<void___cdecl(void)> *)0x413fce;
    iVar1 = game_loop_helper_cd6d0();
    if (*(int *)(iVar1 + 0x94) == 2) {
      local_22c = 0xffb36bff;
    }
    else {
      pfStack_3b4 = (function<void___cdecl(void)> *)0xe;
      pfStack_3b8 = (function<void___cdecl(void)> *)0x413ff0;
      iVar1 = game_loop_helper_cd6d0();
      if (*(int *)(iVar1 + 0x94) == 3) {
        local_22c = 0xffff00f0;
      }
      else {
        pfStack_3b4 = (function<void___cdecl(void)> *)0xe;
        pfStack_3b8 = (function<void___cdecl(void)> *)0x414012;
        iVar1 = game_loop_helper_cd6d0();
        if (*(int *)(iVar1 + 0x94) == 4) {
          local_22c = 0xffffb100;
        }
      }
    }
  }
  local_98 = local_22c;
  pfStack_3b4 = (function<void___cdecl(void)> *)local_a4;
  pfStack_3b8 = (function<void___cdecl(void)> *)0x414049;
  FUN_0040d310();
  local_2a4 = 0x47;
  pfStack_3b4 = (function<void___cdecl(void)> *)&local_2a4;
  pfStack_3b8 = (function<void___cdecl(void)> *)0x414065;
  pfStack_3b4 = (function<void___cdecl(void)> *)game_timing_or_delay_helper();
  pfStack_3b8 = (function<void___cdecl(void)> *)(local_23c * 0xd + -0x17);
  pfStack_3bc = (function<void___cdecl(void)> *)((local_230 * 0xc + 0xc) / 3 + -0x1d);
  puStack_3c0 = (undefined4 *)0x9;
  pcStack_3dc = "sprite/interface/popup.img";
  uStack_3e0 = 0x41409e;
  local_338 = FUN_004054a0();
  local_8._0_1_ = 0x1a;
  local_33c = auStack_3f0;
  puStack_3f4 = &DAT_007400f0;
  uStack_3f8 = 0x4140bd;
  local_340 = FUN_004054a0();
  local_8._0_1_ = 0x1b;
  puStack_3f4 = (undefined *)0x4b;
  local_344 = auStack_40c;
  FUN_004054a0(&DAT_00740104);
  local_8._0_1_ = 10;
  local_2a8 = FUN_00661cc0(0,2);
  *(undefined4 *)(local_2a8 + 0x98c) = 0x47;
  *(undefined4 *)(local_2a8 + 0x984) = param_3;
  pfStack_3b4 = (function<void___cdecl(void)> *)0x740114;
  pfStack_3b8 = (function<void___cdecl(void)> *)0x414135;
  local_238 = local_2a8;
  FUN_004053a0();
  *(int *)(local_238 + 0xc) = local_228;
  local_2ac = local_238;
  pfStack_3b4 = (function<void___cdecl(void)> *)&local_2ac;
  pfStack_3b8 = (function<void___cdecl(void)> *)0x414162;
  FUN_0040d490();
  local_2b0 = 0x47;
  pfStack_3b4 = (function<void___cdecl(void)> *)&local_2b0;
  pfStack_3b8 = (function<void___cdecl(void)> *)0x41417e;
  pfStack_3b4 = (function<void___cdecl(void)> *)game_timing_or_delay_helper();
  pfStack_3b8 = (function<void___cdecl(void)> *)(local_23c * 0xd + -0x17);
  pfStack_3bc = (function<void___cdecl(void)> *)((local_230 * 0x18 + 0x18) / 3 + -0x17);
  puStack_3c0 = (undefined4 *)0xc;
  local_348 = (undefined1 *)apcStack_3d8;
  pcStack_3dc = "sprite/interface/popup.img";
  uStack_3e0 = 0x4141b8;
  local_34c = FUN_004054a0();
  local_8._0_1_ = 0x1c;
  local_350 = auStack_3f0;
  puStack_3f4 = &DAT_00740140;
  uStack_3f8 = 0x4141d7;
  local_354 = FUN_004054a0();
  local_8._0_1_ = 0x1d;
  puStack_3f4 = (undefined *)0x4b;
  local_358 = auStack_40c;
  FUN_004054a0(&DAT_00740154);
  local_8 = CONCAT31(local_8._1_3_,10);
  local_2b4 = FUN_00661cc0(0,2);
  *(undefined4 *)(local_2b4 + 0x98c) = 0x47;
  *(undefined4 *)(local_2b4 + 0x984) = param_4;
  pfStack_3b4 = (function<void___cdecl(void)> *)0x740164;
  pfStack_3b8 = (function<void___cdecl(void)> *)0x41424f;
  local_240 = local_2b4;
  FUN_004053a0();
  *(int *)(local_240 + 0xc) = local_228;
  local_2b8 = local_240;
  pfStack_3b4 = (function<void___cdecl(void)> *)&local_2b8;
  pfStack_3b8 = (function<void___cdecl(void)> *)0x41427c;
  FUN_0040d490();
  local_2bc = 0x47;
  local_2c0 = 0x47;
  pfStack_3b4 = (function<void___cdecl(void)> *)FUN_006574e0;
  pfStack_3b8 = (function<void___cdecl(void)> *)local_35c;
  pfStack_3bc = (function<void___cdecl(void)> *)&local_2bc;
  puStack_3c0 = (undefined4 *)0x4142ae;
  game_timing_or_delay_helper();
  pfStack_3bc = (function<void___cdecl(void)> *)0x4142b5;
  puVar7 = (undefined4 *)FUN_00402170();
  pfStack_3b8 = (function<void___cdecl(void)> *)*puVar7;
  pfStack_3bc = (function<void___cdecl(void)> *)local_360;
  puStack_3c0 = &local_2c0;
  uStack_3c4 = 0x4142d0;
  game_timing_or_delay_helper();
  puStack_3c0 = (undefined4 *)0x4142d7;
  puVar7 = (undefined4 *)FUN_004021b0();
  pfStack_3bc = (function<void___cdecl(void)> *)*puVar7;
  puStack_3c0 = (undefined4 *)0x4142df;
  FUN_00405d30();
  pfStack_3b4 = (function<void___cdecl(void)> *)DAT_007ca768;
  pfStack_3b8 = (function<void___cdecl(void)> *)DAT_007ca764;
  puVar7 = &DAT_007ca70c;
  ppcVar8 = apcStack_3d8;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *ppcVar8 = (char *)*puVar7;
    puVar7 = puVar7 + 1;
    ppcVar8 = ppcVar8 + 1;
  }
  pcStack_3dc = (char *)0x414306;
  FUN_0065e180();
  local_8 = 0xffffffff;
  pfStack_3b4 = (function<void___cdecl(void)> *)0x41431b;
  FUN_0040c940();
  ExceptionList = local_10;
  return;
}


/* ==== 004149e0  img_path_loader_07  size=1052 ==== */

void img_path_loader_07(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined1 auStack_110 [20];
  undefined4 uStack_fc;
  undefined *puStack_f8;
  undefined1 auStack_f4 [16];
  undefined4 uStack_e4;
  char *pcStack_e0;
  undefined4 auStack_dc [5];
  undefined4 uStack_c8;
  undefined4 *puStack_c4;
  undefined4 *puStack_c0;
  undefined4 *puStack_bc;
  code *pcStack_b8;
  uint uStack_b4;
  undefined1 local_a8 [4];
  undefined1 local_a4 [4];
  undefined1 *local_a0;
  undefined4 local_9c;
  undefined1 *local_98;
  undefined4 local_94;
  undefined1 *local_90;
  undefined1 *local_8c;
  undefined4 local_88;
  undefined1 *local_84;
  undefined4 local_80;
  undefined1 *local_7c;
  undefined1 *local_78;
  undefined4 local_74;
  undefined1 *local_70;
  undefined4 local_6c;
  undefined1 *local_68;
  undefined1 *local_64;
  undefined4 local_60;
  undefined1 *local_5c;
  undefined4 local_58;
  undefined1 *local_54;
  undefined4 local_50;
  undefined4 local_4c;
  int local_48;
  undefined4 local_44;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070c8ab;
  local_10 = ExceptionList;
  uStack_b4 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_1c = 0x366;
  pcStack_b8 = (code *)&local_1c;
  puStack_bc = (undefined4 *)0x414a1f;
  pcStack_b8 = (code *)game_timing_or_delay_helper();
  puStack_bc = (undefined4 *)0x414a25;
  FUN_0065e0b0();
  local_20 = 0x23;
  pcStack_b8 = (code *)&local_20;
  puStack_bc = (undefined4 *)0x414a3d;
  FUN_0040d330();
  pcStack_b8 = (code *)0x414a44;
  FUN_0040d540();
  local_24 = 0x366;
  pcStack_b8 = (code *)&local_24;
  puStack_bc = (undefined4 *)0x414a5a;
  pcStack_b8 = (code *)game_timing_or_delay_helper();
  puStack_bc = (undefined4 *)0xc8;
  puStack_c0 = (undefined4 *)0x8c;
  puStack_c4 = (undefined4 *)0x2b;
  local_54 = (undefined1 *)auStack_dc;
  pcStack_e0 = "sprite/interface/disjointshopwindow.img";
  uStack_e4 = 0x414a79;
  local_58 = FUN_004054a0();
  local_8 = 0;
  local_5c = auStack_f4;
  puStack_f8 = &DAT_007401dc;
  uStack_fc = 0x414a95;
  local_60 = FUN_004054a0();
  local_8 = CONCAT31(local_8._1_3_,1);
  puStack_f8 = (undefined *)0x64;
  local_64 = auStack_110;
  FUN_004054a0(&DAT_007401ec);
  local_8 = 0xffffffff;
  local_28 = FUN_00661cc0(0,0);
  *(undefined4 *)(local_28 + 0x98c) = 0x366;
  *(undefined1 *)(local_28 + 0x50) = 1;
  local_2c = 0x23;
  pcStack_b8 = (code *)0x1;
  puStack_bc = &local_2c;
  puStack_c0 = (undefined4 *)0x414af7;
  local_14 = local_28;
  FUN_0040d330();
  puStack_bc = (undefined4 *)0x414afe;
  FUN_0040d5a0();
  for (local_18 = 0; local_18 == 0; local_18 = local_18 + 1) {
    local_30 = 0x366;
    pcStack_b8 = (code *)&local_30;
    puStack_bc = (undefined4 *)0x414b30;
    pcStack_b8 = (code *)game_timing_or_delay_helper();
    puStack_bc = (undefined4 *)0x35;
    puStack_c0 = (undefined4 *)0x38;
    puStack_c4 = (undefined4 *)0x6;
    local_68 = (undefined1 *)auStack_dc;
    pcStack_e0 = "sprite/interface/iteminventorywindow.img";
    uStack_e4 = 0x414b49;
    local_6c = FUN_004054a0();
    local_8 = 2;
    local_70 = auStack_f4;
    puStack_f8 = &DAT_00740220;
    uStack_fc = 0x414b65;
    local_74 = FUN_004054a0();
    local_8 = CONCAT31(local_8._1_3_,3);
    puStack_f8 = (undefined *)0x32;
    local_78 = auStack_110;
    FUN_004054a0(&DAT_00740234);
    local_8 = 0xffffffff;
    local_34 = FUN_00661cc0(0,0);
    *(undefined4 *)(local_34 + 0x98c) = 0x366;
    *(undefined4 *)(local_34 + 0xa0c) = 0xe;
    *(int *)(local_34 + 0xa10) = local_18;
    local_38 = 0x23;
    pcStack_b8 = (code *)local_18;
    puStack_bc = &local_38;
    puStack_c0 = (undefined4 *)0x414bdb;
    local_14 = local_34;
    FUN_0040d330();
    puStack_bc = (undefined4 *)0x414be2;
    pcStack_b8 = (code *)FUN_00405270();
    puStack_bc = (undefined4 *)local_14;
    puStack_c0 = (undefined4 *)0x414bec;
    puStack_c0 = (undefined4 *)game_get_player_or_session_blob();
    puStack_c4 = (undefined4 *)0x414bf2;
    FUN_006cdee0();
  }
  local_3c = 0x366;
  pcStack_b8 = (code *)&local_3c;
  puStack_bc = (undefined4 *)0x414c0f;
  pcStack_b8 = (code *)game_timing_or_delay_helper();
  puStack_bc = (undefined4 *)0xd;
  puStack_c0 = (undefined4 *)0x70;
  puStack_c4 = (undefined4 *)0x30;
  local_7c = (undefined1 *)auStack_dc;
  pcStack_e0 = "sprite/interface/disjointshopwindow.img";
  uStack_e4 = 0x414c28;
  local_80 = FUN_004054a0();
  local_8 = 4;
  local_84 = auStack_f4;
  puStack_f8 = &DAT_0074026c;
  uStack_fc = 0x414c44;
  local_88 = FUN_004054a0();
  local_8 = CONCAT31(local_8._1_3_,5);
  puStack_f8 = (undefined *)0x46;
  local_8c = auStack_110;
  FUN_004054a0(&DAT_00740284);
  local_8 = 0xffffffff;
  local_40 = FUN_00661cc0(0,2);
  *(undefined4 *)(local_40 + 0x98c) = 0x366;
  pcStack_b8 = (code *)0x740294;
  puStack_bc = (undefined4 *)0x414ca1;
  local_14 = local_40;
  FUN_004053a0();
  *(undefined4 *)(local_14 + 0x984) = 0x288;
  local_44 = 0x366;
  pcStack_b8 = (code *)&local_44;
  puStack_bc = (undefined4 *)0x414cc3;
  pcStack_b8 = (code *)game_timing_or_delay_helper();
  puStack_bc = (undefined4 *)0x67;
  puStack_c0 = (undefined4 *)0x31;
  puStack_c4 = (undefined4 *)0x2d;
  local_90 = (undefined1 *)auStack_dc;
  pcStack_e0 = "sprite/interface/disjointshopwindow.img";
  uStack_e4 = 0x414cdf;
  local_94 = FUN_004054a0();
  local_8 = 6;
  local_98 = auStack_f4;
  puStack_f8 = &DAT_007402cc;
  uStack_fc = 0x414d01;
  local_9c = FUN_004054a0();
  local_8 = CONCAT31(local_8._1_3_,7);
  puStack_f8 = (undefined *)0x46;
  local_a0 = auStack_110;
  FUN_004054a0(&DAT_007402dc);
  local_8 = 0xffffffff;
  local_48 = FUN_00661cc0(0,2);
  *(undefined4 *)(local_48 + 0x98c) = 0x366;
  pcStack_b8 = (code *)0x7402ec;
  puStack_bc = (undefined4 *)0x414d5e;
  local_14 = local_48;
  FUN_004053a0();
  *(undefined4 *)(local_14 + 0x984) = 0x286;
  local_4c = 0x366;
  local_50 = 0x366;
  pcStack_b8 = FUN_006574e0;
  puStack_bc = (undefined4 *)local_a4;
  puStack_c0 = &local_4c;
  puStack_c4 = (undefined4 *)0x414d93;
  game_timing_or_delay_helper();
  puStack_c0 = (undefined4 *)0x414d9a;
  puStack_bc = (undefined4 *)FUN_00402170();
  puStack_bc = (undefined4 *)*puStack_bc;
  puStack_c0 = (undefined4 *)local_a8;
  puStack_c4 = &local_50;
  uStack_c8 = 0x414db2;
  game_timing_or_delay_helper();
  puStack_c4 = (undefined4 *)0x414db9;
  puStack_c0 = (undefined4 *)FUN_004021b0();
  puStack_c0 = (undefined4 *)*puStack_c0;
  puStack_c4 = (undefined4 *)0x414dc1;
  FUN_00405d30();
  pcStack_b8 = (code *)DAT_007ca768;
  puStack_bc = (undefined4 *)DAT_007ca764;
  puVar2 = &DAT_007ca70c;
  puVar3 = auStack_dc;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  pcStack_e0 = (char *)0x414de8;
  FUN_0065e180();
  ExceptionList = local_10;
  return;
}


/* ==== 004165a0  img_path_loader_08  size=4485 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void img_path_loader_08(undefined4 param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000034;
  int in_stack_00000038;
  int in_stack_0000003c;
  undefined1 auStack_564 [12];
  undefined4 uStack_558;
  undefined1 *puStack_554;
  undefined1 *puStack_550;
  undefined *puStack_54c;
  undefined1 auStack_548 [8];
  undefined4 uStack_540;
  function<void___cdecl(void)> *pfStack_53c;
  undefined1 *puStack_538;
  char *pcStack_534;
  undefined1 auStack_530 [16];
  undefined4 uStack_520;
  undefined1 *puStack_51c;
  undefined1 *puStack_518;
  function<void___cdecl(void)> *pfStack_514;
  function<void___cdecl(void)> *pfStack_510;
  char *pcStack_50c;
  uint uStack_508;
  undefined1 local_4cc [4];
  undefined1 local_4c8 [4];
  undefined1 local_4c4 [4];
  undefined1 local_4c0 [4];
  undefined1 *local_4bc;
  undefined1 *local_4b8;
  undefined4 local_4b4;
  undefined1 *local_4b0;
  undefined4 local_4ac;
  undefined1 *local_4a8;
  undefined4 local_4a4;
  undefined1 *local_4a0;
  undefined4 local_49c;
  undefined1 *local_498;
  undefined4 local_494;
  undefined1 *local_490;
  undefined4 local_48c;
  undefined1 *local_488;
  undefined1 *local_484;
  undefined4 local_480;
  undefined1 *local_47c;
  undefined1 *local_478;
  undefined1 *local_474;
  undefined1 *local_470;
  undefined4 local_46c;
  undefined1 *local_468;
  undefined4 local_464;
  undefined1 *local_460;
  undefined1 *local_45c;
  undefined4 local_458;
  undefined1 *local_454;
  undefined4 local_450;
  undefined1 *local_44c;
  undefined1 *local_448;
  undefined4 local_444;
  undefined1 *local_440;
  undefined4 local_43c;
  undefined4 local_438;
  undefined4 local_434;
  int local_430;
  undefined4 local_42c;
  undefined4 local_428;
  int local_424;
  undefined4 local_420;
  undefined4 local_41c;
  undefined4 local_418;
  undefined4 local_414;
  undefined4 local_410;
  int local_40c;
  undefined4 local_408;
  undefined4 local_404;
  undefined4 local_400;
  undefined4 local_3fc;
  undefined4 local_3f8;
  undefined4 local_3f4;
  int local_3f0;
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
  int local_3c4;
  undefined4 local_3c0;
  undefined4 local_3bc;
  undefined4 local_3b8;
  int local_3b4;
  undefined4 local_3b0;
  undefined4 local_3ac;
  undefined4 local_3a8;
  int local_3a4;
  undefined4 local_3a0;
  undefined4 local_39c;
  undefined4 local_398;
  int local_394;
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
  undefined1 local_34c;
  undefined1 local_34b;
  undefined1 local_34a;
  undefined1 local_349;
  uint local_348;
  undefined1 local_344 [32];
  undefined1 local_324;
  undefined1 local_307;
  function<void___cdecl(void)> local_2e4 [24];
  function<void___cdecl(void)> local_2cc [24];
  function<void___cdecl(void)> local_2b4 [24];
  function<void___cdecl(void)> local_29c [24];
  function<void___cdecl(void)> local_284 [24];
  function<void___cdecl(void)> local_26c [24];
  function<void___cdecl(void)> local_254 [24];
  function<void___cdecl(void)> local_23c [24];
  function<void___cdecl(void)> local_224 [24];
  function<void___cdecl(void)> local_20c [24];
  function<void___cdecl(void)> local_1f4 [24];
  function<void___cdecl(void)> local_1dc [24];
  function<void___cdecl(void)> local_1c4 [24];
  function<void___cdecl(void)> local_1ac [24];
  function<void___cdecl(void)> local_194 [24];
  function<void___cdecl(void)> local_17c [24];
  function<void___cdecl(void)> local_164 [24];
  function<void___cdecl(void)> local_14c [24];
  function<void___cdecl(void)> local_134 [24];
  function<void___cdecl(void)> local_11c [24];
  function<void___cdecl(void)> local_104 [24];
  function<void___cdecl(void)> local_ec [24];
  function<void___cdecl(void)> local_d4 [24];
  function<void___cdecl(void)> local_bc [24];
  undefined1 local_a4 [4];
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_7c;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_0070d08b;
  local_10 = ExceptionList;
  uStack_508 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  pcStack_50c = &stack0x00000010;
  pfStack_510 = (function<void___cdecl(void)> *)0x4165e1;
  local_14 = uStack_508;
  FUN_004273a0();
  pcStack_50c = (char *)0x4165e8;
  FUN_0040d540();
  pcStack_50c = (char *)0x4165f0;
  pcStack_50c = (char *)FUN_004274f0();
  pfStack_510 = (function<void___cdecl(void)> *)&stack0x00000010;
  pfStack_514 = (function<void___cdecl(void)> *)0x4165ff;
  FUN_004273a0();
  pfStack_510 = (function<void___cdecl(void)> *)0x416606;
  FUN_0040d5a0();
  local_348 = 0;
  while( true ) {
    pcStack_50c = (char *)0x41662a;
    uVar2 = FUN_004274f0();
    if (uVar2 <= local_348) break;
    pcStack_50c = (char *)local_348;
    pfStack_510 = (function<void___cdecl(void)> *)0x416645;
    iVar3 = FUN_004274d0();
    pcStack_50c = (char *)local_348;
    pfStack_510 = (function<void___cdecl(void)> *)&stack0x00000010;
    pfStack_514 = (function<void___cdecl(void)> *)0x41665c;
    FUN_004273a0();
    pfStack_510 = (function<void___cdecl(void)> *)0x416663;
    iVar4 = FUN_00405270();
    *(undefined4 *)(iVar4 + 4) = *(undefined4 *)(iVar3 + 4);
    pcStack_50c = (char *)&stack0x00000014;
    pfStack_510 = (function<void___cdecl(void)> *)0x416677;
    pcStack_50c = (char *)FUN_00426f10();
    pfStack_510 = (function<void___cdecl(void)> *)((local_348 % 6 >> 1) * 100 + 0xa6);
    pfStack_514 = (function<void___cdecl(void)> *)((local_348 % 2) * 0xb5 + 0x22);
    puStack_518 = (undefined1 *)0x6;
    local_4a8 = auStack_530;
    pcStack_534 = "sprite/interface/iteminventorywindow.img";
    puStack_538 = (undefined1 *)0x4166c3;
    local_4a4 = FUN_004054a0();
    local_8._0_1_ = 1;
    local_4a0 = auStack_548;
    puStack_54c = &DAT_0074054c;
    puStack_550 = (undefined1 *)0x4166e2;
    local_49c = FUN_004054a0();
    local_8._0_1_ = 2;
    puStack_54c = (undefined *)0x46;
    local_478 = auStack_564;
    FUN_004054a0(&DAT_00740560);
    local_8._0_1_ = 0;
    iVar3 = FUN_00661cc0(0,0);
    *(undefined4 *)(iVar3 + 0x98c) = in_stack_00000014;
    *(uint *)(iVar3 + 0xa10) = local_348;
    if ((local_348 < (uint)((in_stack_00000038 + -1) * 6)) ||
       ((uint)(in_stack_00000038 * 6) <= local_348)) {
      *(undefined1 *)(iVar3 + 0x51) = 0;
      local_349 = 0;
    }
    else {
      *(undefined1 *)(iVar3 + 0x51) = 1;
      local_349 = 1;
    }
    pcStack_50c = (char *)local_348;
    pfStack_510 = (function<void___cdecl(void)> *)&stack0x00000010;
    pfStack_514 = (function<void___cdecl(void)> *)0x41678d;
    local_3f0 = iVar3;
    FUN_004273a0();
    pfStack_510 = (function<void___cdecl(void)> *)0x416794;
    pcStack_50c = (char *)FUN_00405270();
    pfStack_514 = (function<void___cdecl(void)> *)param_1;
    puStack_518 = (undefined1 *)0x4167a2;
    pfStack_510 = (function<void___cdecl(void)> *)iVar3;
    FUN_006cdee0();
    pcStack_50c = (char *)&stack0x00000014;
    pfStack_510 = (function<void___cdecl(void)> *)0x4167b3;
    pcStack_50c = (char *)FUN_00426f10();
    pfStack_510 = (function<void___cdecl(void)> *)((local_348 % 6 >> 1) * 100 + 0xc9);
    pfStack_514 = (function<void___cdecl(void)> *)((local_348 % 2) * 0xb5 + 0x48);
    puStack_518 = (undefined1 *)0x26;
    local_4bc = auStack_530;
    pcStack_534 = "sprite/interface/cashshop/cashshopbtn.img";
    puStack_538 = (undefined1 *)0x4167ff;
    local_4ac = FUN_004054a0();
    local_8._0_1_ = 3;
    pcStack_534 = &DAT_00740594;
    puStack_538 = (undefined1 *)0x416819;
    local_404 = FUN_004054a0();
    local_8._0_1_ = 4;
    pcStack_534 = &DAT_007405a0;
    puStack_538 = (undefined1 *)0x41683f;
    local_3f4 = local_404;
    pcStack_534 = (char *)FUN_004054a0();
    local_8._0_1_ = 5;
    puStack_538 = &stack0x0000001c;
    pfStack_53c = local_d4;
    uStack_540 = 0x41686c;
    local_3fc = pcStack_534;
    local_3f8 = pcStack_534;
    puStack_550 = (undefined1 *)FUN_00427c80();
    local_8._0_1_ = 6;
    local_4b0 = auStack_548;
    puStack_554 = auStack_548;
    puStack_54c = (undefined *)local_404;
    uStack_558 = 0x4168a4;
    local_408 = puStack_550;
    local_400 = puStack_550;
    local_4b4 = FUN_00405cf0();
    local_8._0_1_ = 7;
    puStack_54c = (undefined *)0x46;
    local_4b8 = auStack_564;
    FUN_004054a0(&DAT_007405b4);
    local_8._0_1_ = 10;
    iVar3 = FUN_00661cc0(0,2);
    local_8._0_1_ = 9;
    pcStack_50c = (char *)0x4168f6;
    local_40c = iVar3;
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_d4);
    local_8._0_1_ = 8;
    pcStack_50c = (char *)0x416905;
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_11c);
    local_8._0_1_ = 0;
    pcStack_50c = (char *)0x416914;
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_104);
    if ((local_348 < (uint)((in_stack_00000038 + -1) * 6)) ||
       ((uint)(in_stack_00000038 * 6) <= local_348)) {
      *(undefined1 *)(iVar3 + 0x51) = 0;
      local_34a = 0;
    }
    else {
      *(undefined1 *)(iVar3 + 0x51) = 1;
      local_34a = 1;
    }
    *(undefined4 *)(iVar3 + 0x984) = 0x2af9;
    pcStack_50c = "COMMAND_SELECT";
    pfStack_510 = (function<void___cdecl(void)> *)0x416970;
    FUN_004053a0();
    pcStack_50c = (char *)local_348;
    pfStack_510 = (function<void___cdecl(void)> *)&stack0x00000010;
    pfStack_514 = (function<void___cdecl(void)> *)0x416985;
    FUN_004273a0();
    pfStack_510 = (function<void___cdecl(void)> *)0x41698c;
    uVar5 = FUN_00405270();
    *(undefined4 *)(iVar3 + 0x9d0) = uVar5;
    pcStack_50c = local_4c0;
    pfStack_510 = (function<void___cdecl(void)> *)0x4169a7;
    pcStack_50c = (char *)FUN_00427720();
    pfStack_510 = (function<void___cdecl(void)> *)local_348;
    pfStack_514 = (function<void___cdecl(void)> *)0x4169b7;
    pfStack_510 = (function<void___cdecl(void)> *)FUN_004274d0();
    pfStack_514 = (function<void___cdecl(void)> *)local_4c4;
    puStack_518 = (undefined1 *)0x4169ca;
    puVar6 = (undefined4 *)FUN_00427720();
    pfStack_514 = (function<void___cdecl(void)> *)*puVar6;
    puStack_518 = local_4c8;
    puStack_51c = (undefined1 *)0x4169df;
    puVar6 = (undefined4 *)FUN_00427760();
    puStack_518 = (undefined1 *)*puVar6;
    puStack_51c = local_4cc;
    uStack_520 = 0x4169ee;
    FUN_00427cc0();
    pfStack_510 = (function<void___cdecl(void)> *)0x4169f8;
    cVar1 = FUN_00426ed0();
    if (cVar1 != '\0') {
      *(undefined1 *)(iVar3 + 0x51) = 0;
    }
    pcStack_50c = (char *)&stack0x00000014;
    pfStack_510 = (function<void___cdecl(void)> *)0x416a14;
    pcStack_50c = (char *)FUN_00426f10();
    pfStack_510 = (function<void___cdecl(void)> *)((local_348 % 6 >> 1) * 100 + 0xc9);
    pfStack_514 = (function<void___cdecl(void)> *)((local_348 % 2) * 0xb5 + 0x87);
    puStack_518 = (undefined1 *)0x2a;
    pcStack_534 = "sprite/interface/cashshop/cashshopbtn.img";
    puStack_538 = (undefined1 *)0x416a63;
    FUN_004054a0();
    local_8._0_1_ = 0xb;
    pcStack_534 = &DAT_007405f8;
    puStack_538 = (undefined1 *)0x416a7d;
    local_410 = FUN_004054a0();
    local_8._0_1_ = 0xc;
    pcStack_534 = &DAT_00740604;
    puStack_538 = (undefined1 *)0x416aa3;
    local_3ec = local_410;
    pcStack_534 = (char *)FUN_004054a0();
    local_8._0_1_ = 0xd;
    puStack_538 = &stack0x0000001c;
    pfStack_53c = local_ec;
    uStack_540 = 0x416ad0;
    local_418 = pcStack_534;
    local_414 = pcStack_534;
    puStack_550 = (undefined1 *)FUN_00427c80();
    local_8._0_1_ = 0xe;
    puStack_554 = auStack_548;
    puStack_54c = (undefined *)local_3ec;
    uStack_558 = 0x416b08;
    local_420 = puStack_550;
    local_41c = puStack_550;
    FUN_00405cf0();
    local_8._0_1_ = 0xf;
    puStack_54c = (undefined *)0x46;
    FUN_004054a0(&DAT_00740618);
    local_8._0_1_ = 0x12;
    iVar3 = FUN_00661cc0(0,2);
    local_8._0_1_ = 0x11;
    pcStack_50c = (char *)0x416b5a;
    local_424 = iVar3;
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_ec);
    local_8._0_1_ = 0x10;
    pcStack_50c = (char *)0x416b69;
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_134);
    local_8._0_1_ = 0;
    pcStack_50c = (char *)0x416b78;
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_14c);
    if ((local_348 < (uint)((in_stack_00000038 + -1) * 6)) ||
       ((uint)(in_stack_00000038 * 6) <= local_348)) {
      *(undefined1 *)(iVar3 + 0x51) = 0;
      local_34b = 0;
    }
    else {
      *(undefined1 *)(iVar3 + 0x51) = 1;
      local_34b = 1;
    }
    *(undefined4 *)(iVar3 + 0x984) = 11000;
    pcStack_50c = "COMMAND_SELECT";
    pfStack_510 = (function<void___cdecl(void)> *)0x416bd4;
    FUN_004053a0();
    pcStack_50c = (char *)local_348;
    pfStack_510 = (function<void___cdecl(void)> *)&stack0x00000010;
    pfStack_514 = (function<void___cdecl(void)> *)0x416be9;
    FUN_004273a0();
    pfStack_510 = (function<void___cdecl(void)> *)0x416bf0;
    uVar5 = FUN_00405270();
    *(undefined4 *)(iVar3 + 0x9d0) = uVar5;
    pcStack_50c = (char *)local_348;
    pfStack_510 = (function<void___cdecl(void)> *)&stack0x00000010;
    pfStack_514 = (function<void___cdecl(void)> *)0x416c0e;
    FUN_004273a0();
    pfStack_510 = (function<void___cdecl(void)> *)0x416c15;
    iVar4 = FUN_00405270();
    pcStack_50c = *(char **)(iVar4 + 4);
    pfStack_510 = (function<void___cdecl(void)> *)0x416c24;
    iVar4 = game_loop_helper_cc840();
    *(undefined4 *)(iVar3 + 0x9a0) = *(undefined4 *)(iVar4 + 0x144);
    pcStack_50c = (char *)&stack0x00000014;
    pfStack_510 = (function<void___cdecl(void)> *)0x416c41;
    pcStack_50c = (char *)FUN_00426f10();
    pfStack_510 = (function<void___cdecl(void)> *)((local_348 % 6 >> 1) * 100 + 0x8b);
    pfStack_514 = (function<void___cdecl(void)> *)((local_348 % 2) * 0xb5 + 0x17);
    puStack_518 = (undefined1 *)0x3;
    pcStack_534 = "sprite/interface/cashshop/cashshopimg.img";
    puStack_538 = (undefined1 *)0x416c8d;
    FUN_004054a0();
    local_8._0_1_ = 0x13;
    pcStack_534 = &DAT_0074065c;
    puStack_538 = (undefined1 *)0x416ca7;
    puStack_54c = (undefined *)FUN_004054a0();
    local_8._0_1_ = 0x14;
    puStack_554 = auStack_548;
    puStack_550 = &stack0x0000001c;
    uStack_558 = 0x416cd9;
    local_42c = puStack_54c;
    local_428 = puStack_54c;
    FUN_00427c80();
    local_8._0_1_ = 0x15;
    puStack_54c = (undefined *)0x5a;
    FUN_004054a0(&DAT_00740670);
    local_8._0_1_ = 0x16;
    iVar3 = FUN_00661cc0(0,0);
    local_8._0_1_ = 0;
    pcStack_50c = (char *)0x416d2b;
    local_430 = iVar3;
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_164);
    if ((local_348 < (uint)((in_stack_00000038 + -1) * 6)) ||
       ((uint)(in_stack_00000038 * 6) <= local_348)) {
      *(undefined1 *)(iVar3 + 0x51) = 0;
      local_34c = 0;
    }
    else {
      *(undefined1 *)(iVar3 + 0x51) = 1;
      local_34c = 1;
    }
    pcStack_50c = (char *)0x416d72;
    FUN_0040b110();
    local_8._0_1_ = 0x17;
    pcStack_50c = (char *)local_348;
    pfStack_510 = (function<void___cdecl(void)> *)&stack0x00000010;
    pfStack_514 = (function<void___cdecl(void)> *)0x416d8b;
    FUN_004273a0();
    pfStack_510 = (function<void___cdecl(void)> *)0x416d92;
    iVar4 = FUN_00405270();
    pcStack_50c = *(char **)(iVar4 + 4);
    pfStack_510 = (function<void___cdecl(void)> *)0x416da1;
    iVar4 = game_loop_helper_cc840();
    pcStack_50c = (char *)(iVar4 + 0xc);
    pfStack_510 = (function<void___cdecl(void)> *)0x416db0;
    FUN_0040d840();
    local_a0 = 0x58;
    local_9c = 3;
    local_98 = 0xffe6c89c;
    local_7c = 1;
    pcStack_50c = local_a4;
    pfStack_510 = (function<void___cdecl(void)> *)0x416dea;
    FUN_0040d310();
    pcStack_50c = &DAT_00740678;
    pfStack_510 = (function<void___cdecl(void)> *)0x416dfa;
    FUN_004053a0();
    local_a0 = 0xa9;
    local_9c = 0x1c;
    local_98 = 0xffe6c89c;
    local_7c = 2;
    pcStack_50c = local_a4;
    pfStack_510 = (function<void___cdecl(void)> *)0x416e34;
    FUN_0040d310();
    pcStack_50c = &DAT_00740688;
    pfStack_510 = (function<void___cdecl(void)> *)0x416e45;
    local_43c = FUN_004054a0();
    local_8._0_1_ = 0x18;
    pcStack_50c = (char *)local_348;
    pfStack_510 = (function<void___cdecl(void)> *)&stack0x00000010;
    pfStack_514 = (function<void___cdecl(void)> *)0x416e70;
    local_434 = local_43c;
    FUN_004273a0();
    pfStack_510 = (function<void___cdecl(void)> *)0x416e77;
    iVar4 = FUN_00405270();
    pcStack_50c = *(char **)(iVar4 + 4);
    pfStack_510 = (function<void___cdecl(void)> *)0x416e86;
    iVar4 = game_loop_helper_cc840();
    pcStack_50c = *(char **)(iVar4 + 0x144);
    pfStack_510 = local_bc;
    pfStack_514 = (function<void___cdecl(void)> *)0x416e99;
    pfStack_510 = (function<void___cdecl(void)> *)FUN_0040a850();
    local_8._0_1_ = 0x19;
    pcStack_50c = (char *)local_43c;
    pfStack_514 = local_17c;
    puStack_518 = (undefined1 *)0x416ecc;
    local_438 = pfStack_510;
    local_350 = pfStack_510;
    pcStack_50c = (char *)FUN_00405cf0();
    pfStack_510 = (function<void___cdecl(void)> *)0x416ee7;
    local_354 = pcStack_50c;
    FUN_004053e0();
    pcStack_50c = (char *)0x416ef2;
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_17c);
    local_8._0_1_ = 0x18;
    pcStack_50c = (char *)0x416f01;
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_bc);
    local_8._0_1_ = 0x17;
    pcStack_50c = (char *)0x416f10;
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_194);
    local_a0 = 0xa9;
    local_9c = 0x2d;
    local_98 = 0xffe6c89c;
    local_7c = 2;
    pcStack_50c = local_a4;
    pfStack_510 = (function<void___cdecl(void)> *)0x416f4b;
    FUN_0040d310();
    pcStack_50c = (char *)0x416f56;
    FUN_0040aa90();
    local_8._0_1_ = 0x1a;
    pcStack_50c = "sprite/interface/cashshop/cashshopimg.img";
    pfStack_510 = (function<void___cdecl(void)> *)0x416f6a;
    FUN_004053a0();
    local_324 = 4;
    local_307 = 3;
    pcStack_50c = local_344;
    pfStack_510 = (function<void___cdecl(void)> *)0x416f8d;
    FUN_00427660();
    *(undefined1 *)(iVar3 + 0x6e0) = 1;
    local_8._0_1_ = 0x17;
    pcStack_50c = (char *)0x416fa6;
    FUN_00407a80();
    local_8 = (uint)local_8._1_3_ << 8;
    pcStack_50c = (char *)0x416fb5;
    FUN_0040c940();
    local_348 = local_348 + 1;
  }
  local_358 = 0x5e;
  pcStack_50c = (char *)&local_358;
  pfStack_510 = (function<void___cdecl(void)> *)0x416fd6;
  pcStack_50c = (char *)game_timing_or_delay_helper();
  pfStack_510 = (function<void___cdecl(void)> *)0x67;
  pfStack_514 = (function<void___cdecl(void)> *)(in_stack_0000003c * 0x27 + 0x19);
  puStack_518 = (undefined1 *)(in_stack_0000003c * 2 + 99);
  pcStack_534 = "sprite/interface/cashshop/cashshopbtn.img";
  puStack_538 = (undefined1 *)0x416ffe;
  FUN_004054a0();
  local_8._0_1_ = 0x1b;
  pcStack_534 = &DAT_007406e8;
  puStack_538 = (undefined1 *)0x417018;
  local_36c = FUN_004054a0();
  local_8._0_1_ = 0x1c;
  pcStack_534 = &DAT_007406f4;
  puStack_538 = (undefined1 *)0x41703e;
  local_35c = local_36c;
  puStack_538 = (undefined1 *)FUN_004054a0();
  local_8._0_1_ = 0x1d;
  pcStack_534 = &stack0x0000001c;
  pfStack_53c = local_1ac;
  uStack_540 = 0x41706b;
  local_364 = puStack_538;
  local_360 = puStack_538;
  puStack_550 = (undefined1 *)FUN_0040e3d0();
  local_8._0_1_ = 0x1e;
  local_440 = auStack_548;
  puStack_554 = auStack_548;
  puStack_54c = (undefined *)local_36c;
  uStack_558 = 0x4170a3;
  local_370 = puStack_550;
  local_368 = puStack_550;
  local_444 = FUN_00405cf0();
  local_8._0_1_ = 0x1f;
  puStack_54c = (undefined *)0x50;
  local_448 = auStack_564;
  FUN_004054a0(&DAT_007406fc);
  local_8._0_1_ = 0x22;
  local_374 = FUN_00661cc0(0,0);
  local_8._0_1_ = 0x21;
  pcStack_50c = (char *)0x4170f5;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_1ac);
  local_8._0_1_ = 0x20;
  pcStack_50c = (char *)0x417104;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_1c4);
  local_8._0_1_ = 0;
  pcStack_50c = (char *)0x417113;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_1dc);
  local_378 = 0x5e;
  pcStack_50c = (char *)&local_378;
  pfStack_510 = (function<void___cdecl(void)> *)0x41712f;
  pcStack_50c = (char *)game_timing_or_delay_helper();
  pfStack_510 = (function<void___cdecl(void)> *)0x67;
  pfStack_514 = (function<void___cdecl(void)> *)(in_stack_0000003c * 0x27 + 0x19);
  puStack_518 = (undefined1 *)(in_stack_0000003c * 2 + 0x62);
  local_44c = auStack_530;
  pcStack_534 = "sprite/interface/cashshop/cashshopbtn.img";
  puStack_538 = (undefined1 *)0x417157;
  local_450 = FUN_004054a0();
  local_8._0_1_ = 0x23;
  pcStack_534 = &DAT_00740730;
  puStack_538 = (undefined1 *)0x417171;
  local_38c = FUN_004054a0();
  local_8._0_1_ = 0x24;
  pcStack_534 = &DAT_00740738;
  puStack_538 = (undefined1 *)0x417197;
  local_37c = local_38c;
  puStack_538 = (undefined1 *)FUN_004054a0();
  local_8._0_1_ = 0x25;
  pcStack_534 = &stack0x0000001c;
  pfStack_53c = local_1f4;
  uStack_540 = 0x4171c4;
  local_384 = puStack_538;
  local_380 = puStack_538;
  puStack_550 = (undefined1 *)FUN_0040e3d0();
  local_8._0_1_ = 0x26;
  local_454 = auStack_548;
  puStack_554 = auStack_548;
  puStack_54c = (undefined *)local_38c;
  uStack_558 = 0x4171fc;
  local_390 = puStack_550;
  local_388 = puStack_550;
  local_458 = FUN_00405cf0();
  local_8._0_1_ = 0x27;
  puStack_54c = (undefined *)0x5a;
  local_45c = auStack_564;
  FUN_004054a0(&DAT_00740740);
  local_8._0_1_ = 0x2a;
  iVar3 = FUN_00661cc0(0,0);
  local_8._0_1_ = 0x29;
  pcStack_50c = (char *)0x41724e;
  local_394 = iVar3;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_1f4);
  local_8._0_1_ = 0x28;
  pcStack_50c = (char *)0x41725d;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_20c);
  local_8._0_1_ = 0;
  pcStack_50c = (char *)0x41726c;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_224);
  *(undefined4 *)(iVar3 + 0x984) = in_stack_00000034;
  pcStack_50c = "ICON_QUICK_SET";
  pfStack_510 = (function<void___cdecl(void)> *)0x41728c;
  FUN_004053a0();
  *(undefined1 *)(iVar3 + 0x51) = 1;
  local_398 = 0x5e;
  pcStack_50c = (char *)&local_398;
  pfStack_510 = (function<void___cdecl(void)> *)0x4172ae;
  pcStack_50c = (char *)game_timing_or_delay_helper();
  pfStack_510 = (function<void___cdecl(void)> *)0x1ba;
  pfStack_514 = (function<void___cdecl(void)> *)0xa4;
  puStack_518 = (undefined1 *)0x2e;
  local_460 = auStack_530;
  pcStack_534 = "sprite/interface/cashshop/cashshopbtn.img";
  puStack_538 = (undefined1 *)0x4172d0;
  local_464 = FUN_004054a0();
  local_8._0_1_ = 0x2b;
  pcStack_534 = &DAT_00740784;
  puStack_538 = (undefined1 *)0x4172ea;
  puStack_54c = (undefined *)FUN_004054a0();
  local_8._0_1_ = 0x2c;
  local_468 = auStack_548;
  puStack_554 = auStack_548;
  puStack_550 = &stack0x0000001c;
  uStack_558 = 0x41731c;
  local_3a0 = puStack_54c;
  local_39c = puStack_54c;
  local_46c = FUN_00427c80();
  local_8._0_1_ = 0x2d;
  puStack_54c = (undefined *)0x46;
  local_470 = auStack_564;
  FUN_004054a0(&DAT_00740790);
  local_8._0_1_ = 0x2e;
  iVar3 = FUN_00661cc0(0,2);
  local_8._0_1_ = 0;
  pcStack_50c = (char *)0x41736e;
  local_3a4 = iVar3;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_23c);
  *(undefined4 *)(iVar3 + 0x984) = 0x35c;
  *(int *)(iVar3 + 0x9d0) = iVar3;
  local_3a8 = 0x5e;
  pcStack_50c = (char *)&local_3a8;
  pfStack_510 = (function<void___cdecl(void)> *)0x4173a3;
  pcStack_50c = (char *)game_timing_or_delay_helper();
  pfStack_510 = (function<void___cdecl(void)> *)0x1ba;
  pfStack_514 = (function<void___cdecl(void)> *)0xe0;
  puStack_518 = (undefined1 *)0x31;
  local_474 = auStack_530;
  pcStack_534 = "sprite/interface/cashshop/cashshopbtn.img";
  puStack_538 = (undefined1 *)0x4173c5;
  FUN_004054a0();
  local_8._0_1_ = 0x2f;
  pcStack_534 = &DAT_007407c4;
  puStack_538 = (undefined1 *)0x4173df;
  puStack_54c = (undefined *)FUN_004054a0();
  local_8._0_1_ = 0x30;
  local_47c = auStack_548;
  puStack_554 = auStack_548;
  puStack_550 = &stack0x0000001c;
  uStack_558 = 0x417411;
  local_3b0 = puStack_54c;
  local_3ac = puStack_54c;
  local_480 = FUN_00427c80();
  local_8._0_1_ = 0x31;
  puStack_54c = (undefined *)0x46;
  local_484 = auStack_564;
  FUN_004054a0(&DAT_007407d0);
  local_8._0_1_ = 0x32;
  iVar3 = FUN_00661cc0(0,2);
  local_8._0_1_ = 0;
  pcStack_50c = (char *)0x417463;
  local_3b4 = iVar3;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_254);
  *(undefined4 *)(iVar3 + 0x984) = 0x366;
  *(int *)(iVar3 + 0x9d0) = iVar3;
  local_3b8 = 0x5e;
  pcStack_50c = (char *)&local_3b8;
  pfStack_510 = (function<void___cdecl(void)> *)0x417498;
  pcStack_50c = (char *)game_timing_or_delay_helper();
  pfStack_510 = (function<void___cdecl(void)> *)0x1ba;
  pfStack_514 = (function<void___cdecl(void)> *)0xa7;
  puStack_518 = (undefined1 *)0x0;
  local_488 = auStack_530;
  pcStack_534 = "";
  puStack_538 = (undefined1 *)0x4174ba;
  local_48c = FUN_004054a0();
  local_8._0_1_ = 0x33;
  pcStack_534 = &DAT_007407d8;
  puStack_538 = (undefined1 *)0x4174d4;
  puStack_54c = (undefined *)FUN_004054a0();
  local_8._0_1_ = 0x34;
  local_490 = auStack_548;
  puStack_554 = auStack_548;
  puStack_550 = &stack0x0000001c;
  uStack_558 = 0x417506;
  local_3c0 = puStack_54c;
  local_3bc = puStack_54c;
  local_494 = FUN_00427c80();
  local_8._0_1_ = 0x35;
  puStack_54c = (undefined *)0x0;
  local_498 = auStack_564;
  FUN_004054a0(&DAT_007407e4);
  local_8._0_1_ = 0x36;
  iVar3 = FUN_00661cc0(0,0);
  local_8._0_1_ = 0;
  pcStack_50c = (char *)0x417558;
  local_3c4 = iVar3;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_26c);
  *(int *)(iVar3 + 0xb04) = in_stack_00000038;
  pcStack_50c = &stack0x00000010;
  pfStack_510 = (function<void___cdecl(void)> *)0x417573;
  FUN_004273a0();
  pcStack_50c = (char *)0x41757a;
  iVar4 = FUN_004274a0();
  *(uint *)(iVar3 + 0xb00) = (iVar4 + 5U) / 6;
  pcStack_50c = *(char **)(iVar3 + 0xb00);
  pfStack_510 = local_2e4;
  pfStack_514 = (function<void___cdecl(void)> *)0x4175a5;
  local_3e0 = FUN_0040a850();
  local_8._0_1_ = 0x37;
  pcStack_50c = "/";
  pfStack_510 = (function<void___cdecl(void)> *)0x4175ce;
  local_3c8 = local_3e0;
  local_3d4 = FUN_004054a0();
  local_8._0_1_ = 0x38;
  pcStack_50c = *(char **)(iVar3 + 0xb04);
  pfStack_510 = local_2b4;
  pfStack_514 = (function<void___cdecl(void)> *)0x4175fa;
  local_3cc = local_3d4;
  pfStack_510 = (function<void___cdecl(void)> *)FUN_0040a850();
  local_8._0_1_ = 0x39;
  pcStack_50c = (char *)local_3d4;
  pfStack_514 = local_29c;
  puStack_518 = (undefined1 *)0x41762d;
  local_3d8 = pfStack_510;
  local_3d0 = pfStack_510;
  pfStack_510 = (function<void___cdecl(void)> *)FUN_00405cf0();
  local_8._0_1_ = 0x3a;
  pcStack_50c = (char *)local_3e0;
  pfStack_514 = local_284;
  puStack_518 = (undefined1 *)0x417660;
  local_3e4 = pfStack_510;
  local_3dc = pfStack_510;
  pcStack_50c = (char *)FUN_00405cf0();
  pfStack_510 = (function<void___cdecl(void)> *)0x41767e;
  local_3e8 = pcStack_50c;
  FUN_004053e0();
  pcStack_50c = (char *)0x417689;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_284);
  local_8._0_1_ = 0x39;
  pcStack_50c = (char *)0x417698;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_29c);
  local_8._0_1_ = 0x38;
  pcStack_50c = (char *)0x4176a7;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_2b4);
  local_8._0_1_ = 0x37;
  pcStack_50c = (char *)0x4176b6;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_2cc);
  local_8 = (uint)local_8._1_3_ << 8;
  pcStack_50c = (char *)0x4176c5;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_2e4);
  pcStack_50c = (char *)0x4176d4;
  CDocObjectServer::ReleaseDocSite((CDocObjectServer *)(iVar3 + 0xa3c));
  *(undefined4 *)(iVar3 + 0xa40) = 0x25;
  *(undefined4 *)(iVar3 + 0xa44) = 0;
  *(undefined4 *)(iVar3 + 0xa64) = 1;
  local_8 = 0xffffffff;
  pcStack_50c = (char *)0x41770a;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)&stack0x0000001c);
  ExceptionList = local_10;
  return;
}


/* ==== 004182f0  img_path_loader_09  size=4021 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void img_path_loader_09(undefined4 param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 in_stack_00000014;
  int in_stack_00000034;
  undefined1 auStack_470 [12];
  undefined4 uStack_464;
  undefined1 *puStack_460;
  undefined1 *puStack_45c;
  undefined *puStack_458;
  undefined1 auStack_454 [8];
  undefined4 uStack_44c;
  function<void___cdecl(void)> *pfStack_448;
  undefined1 *puStack_444;
  char *pcStack_440;
  undefined1 auStack_43c [16];
  undefined4 uStack_42c;
  undefined1 *puStack_428;
  undefined1 *puStack_424;
  function<void___cdecl(void)> *pfStack_420;
  function<void___cdecl(void)> *pfStack_41c;
  char *pcStack_418;
  uint uStack_414;
  undefined1 local_3f0 [4];
  undefined1 local_3ec [4];
  undefined1 local_3e8 [4];
  undefined1 local_3e4 [4];
  undefined1 *local_3e0;
  undefined4 local_3dc;
  undefined1 *local_3d8;
  undefined1 *local_3d4;
  undefined4 local_3d0;
  undefined1 *local_3cc;
  undefined4 local_3c8;
  undefined1 *local_3c4;
  undefined4 local_3c0;
  undefined1 *local_3bc;
  undefined4 local_3b8;
  undefined1 *local_3b4;
  undefined4 local_3b0;
  undefined1 *local_3ac;
  undefined1 *local_3a8;
  undefined1 *local_3a4;
  undefined1 *local_3a0;
  undefined4 local_39c;
  undefined1 *local_398;
  undefined1 *local_394;
  undefined4 local_390;
  undefined1 *local_38c;
  undefined4 local_388;
  undefined1 *local_384;
  undefined4 local_380;
  undefined1 *local_37c;
  undefined4 local_378;
  undefined1 *local_374;
  undefined4 local_370;
  int local_36c;
  undefined4 local_368;
  undefined4 local_364;
  undefined4 local_360;
  undefined4 local_35c;
  undefined4 local_358;
  int local_354;
  undefined4 local_350;
  undefined4 local_34c;
  undefined4 local_348;
  undefined4 local_344;
  undefined4 local_340;
  undefined4 local_33c;
  int local_338;
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
  int local_30c;
  undefined4 local_308;
  undefined4 local_304;
  undefined4 local_300;
  int local_2fc;
  undefined4 local_2f8;
  undefined4 local_2f4;
  undefined4 local_2f0;
  int local_2ec;
  undefined4 local_2e8;
  undefined4 local_2e4;
  undefined4 local_2e0;
  undefined4 local_2dc;
  undefined4 local_2d8;
  undefined4 local_2d4;
  undefined4 local_2d0;
  undefined4 local_2cc;
  int local_2c8;
  undefined4 local_2c4;
  undefined4 local_2c0;
  undefined1 local_2bc;
  undefined1 local_2bb;
  undefined1 local_2ba;
  undefined1 local_2b9;
  uint local_2b8;
  undefined1 local_2b4 [32];
  undefined1 local_294;
  undefined1 local_277;
  function<void___cdecl(void)> local_254 [24];
  function<void___cdecl(void)> local_23c [24];
  function<void___cdecl(void)> local_224 [24];
  function<void___cdecl(void)> local_20c [24];
  function<void___cdecl(void)> local_1f4 [24];
  function<void___cdecl(void)> local_1dc [24];
  function<void___cdecl(void)> local_1c4 [24];
  function<void___cdecl(void)> local_1ac [24];
  function<void___cdecl(void)> local_194 [24];
  function<void___cdecl(void)> local_17c [24];
  function<void___cdecl(void)> local_164 [24];
  function<void___cdecl(void)> local_14c [24];
  function<void___cdecl(void)> local_134 [24];
  function<void___cdecl(void)> local_11c [24];
  function<void___cdecl(void)> local_104 [24];
  function<void___cdecl(void)> local_ec [24];
  function<void___cdecl(void)> local_d4 [24];
  function<void___cdecl(void)> local_bc [24];
  undefined1 local_a4 [4];
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_7c;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_0070d30d;
  local_10 = ExceptionList;
  uStack_414 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  pcStack_418 = &stack0x00000010;
  pfStack_41c = (function<void___cdecl(void)> *)0x418331;
  local_14 = uStack_414;
  FUN_004273a0();
  pcStack_418 = (char *)0x418338;
  FUN_0040d540();
  pcStack_418 = (char *)0x418340;
  pcStack_418 = (char *)FUN_00427020();
  pfStack_41c = (function<void___cdecl(void)> *)&stack0x00000010;
  pfStack_420 = (function<void___cdecl(void)> *)0x41834f;
  FUN_004273a0();
  pfStack_41c = (function<void___cdecl(void)> *)0x418356;
  FUN_0040d5a0();
  local_2b8 = 0;
  while( true ) {
    pcStack_418 = (char *)0x41837a;
    uVar2 = FUN_00427020();
    if (uVar2 <= local_2b8) break;
    pcStack_418 = (char *)local_2b8;
    pfStack_41c = (function<void___cdecl(void)> *)0x418395;
    iVar3 = FUN_00427000();
    pcStack_418 = (char *)local_2b8;
    pfStack_41c = (function<void___cdecl(void)> *)&stack0x00000010;
    pfStack_420 = (function<void___cdecl(void)> *)0x4183ac;
    FUN_004273a0();
    pfStack_41c = (function<void___cdecl(void)> *)0x4183b3;
    iVar4 = FUN_00405270();
    *(undefined4 *)(iVar4 + 4) = *(undefined4 *)(iVar3 + 4);
    pcStack_418 = (char *)local_2b8;
    pfStack_41c = (function<void___cdecl(void)> *)0x4183c8;
    iVar3 = FUN_00427000();
    pcStack_418 = (char *)local_2b8;
    pfStack_41c = (function<void___cdecl(void)> *)&stack0x00000010;
    pfStack_420 = (function<void___cdecl(void)> *)0x4183df;
    FUN_004273a0();
    pfStack_41c = (function<void___cdecl(void)> *)0x4183e6;
    iVar4 = FUN_00405270();
    *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(iVar3 + 8);
    pcStack_418 = (char *)&stack0x00000014;
    pfStack_41c = (function<void___cdecl(void)> *)0x4183fa;
    pcStack_418 = (char *)FUN_00426f10();
    pfStack_41c = (function<void___cdecl(void)> *)((local_2b8 % 6 >> 1) * 100 + 0xa6);
    pfStack_420 = (function<void___cdecl(void)> *)((local_2b8 % 2) * 0xb5 + 0x22);
    puStack_424 = (undefined1 *)0x6;
    local_3cc = auStack_43c;
    pcStack_440 = "sprite/interface/iteminventorywindow.img";
    puStack_444 = (undefined1 *)0x418446;
    local_3c8 = FUN_004054a0();
    local_8._0_1_ = 1;
    local_3c4 = auStack_454;
    puStack_458 = &DAT_007408ac;
    puStack_45c = (undefined1 *)0x418465;
    local_3c0 = FUN_004054a0();
    local_8._0_1_ = 2;
    puStack_458 = (undefined *)0x46;
    local_3a4 = auStack_470;
    FUN_004054a0(&DAT_007408c0);
    local_8._0_1_ = 0;
    iVar3 = FUN_00661cc0(0,0);
    *(undefined4 *)(iVar3 + 0x98c) = in_stack_00000014;
    *(uint *)(iVar3 + 0xa10) = local_2b8;
    if ((local_2b8 < (uint)((in_stack_00000034 + -1) * 6)) ||
       ((uint)(in_stack_00000034 * 6) <= local_2b8)) {
      *(undefined1 *)(iVar3 + 0x51) = 0;
      local_2b9 = 0;
    }
    else {
      *(undefined1 *)(iVar3 + 0x51) = 1;
      local_2b9 = 1;
    }
    pcStack_418 = (char *)local_2b8;
    pfStack_41c = (function<void___cdecl(void)> *)&stack0x00000010;
    pfStack_420 = (function<void___cdecl(void)> *)0x418510;
    local_338 = iVar3;
    FUN_004273a0();
    pfStack_41c = (function<void___cdecl(void)> *)0x418517;
    pcStack_418 = (char *)FUN_00405270();
    pfStack_420 = (function<void___cdecl(void)> *)param_1;
    puStack_424 = (undefined1 *)0x418525;
    pfStack_41c = (function<void___cdecl(void)> *)iVar3;
    FUN_006cdee0();
    pcStack_418 = (char *)&stack0x00000014;
    pfStack_41c = (function<void___cdecl(void)> *)0x418536;
    pcStack_418 = (char *)FUN_00426f10();
    pfStack_41c = (function<void___cdecl(void)> *)((local_2b8 % 6 >> 1) * 100 + 0xc9);
    pfStack_420 = (function<void___cdecl(void)> *)((local_2b8 % 2) * 0xb5 + 0x48);
    puStack_424 = (undefined1 *)0x26;
    local_3d8 = auStack_43c;
    pcStack_440 = "sprite/interface/cashshop/cashshopbtn.img";
    puStack_444 = (undefined1 *)0x418582;
    local_3d0 = FUN_004054a0();
    local_8._0_1_ = 3;
    pcStack_440 = &DAT_007408f4;
    puStack_444 = (undefined1 *)0x41859c;
    local_34c = FUN_004054a0();
    local_8._0_1_ = 4;
    pcStack_440 = &DAT_00740900;
    puStack_444 = (undefined1 *)0x4185c2;
    local_33c = local_34c;
    pcStack_440 = (char *)FUN_004054a0();
    local_8._0_1_ = 5;
    puStack_444 = &stack0x0000001c;
    pfStack_448 = local_bc;
    uStack_44c = 0x4185ef;
    local_344 = pcStack_440;
    local_340 = pcStack_440;
    puStack_45c = (undefined1 *)FUN_00427c80();
    local_8._0_1_ = 6;
    local_3d4 = auStack_454;
    puStack_460 = auStack_454;
    puStack_458 = (undefined *)local_34c;
    uStack_464 = 0x418627;
    local_350 = puStack_45c;
    local_348 = puStack_45c;
    local_3dc = FUN_00405cf0();
    local_8._0_1_ = 7;
    puStack_458 = (undefined *)0x46;
    local_3e0 = auStack_470;
    FUN_004054a0(&DAT_00740914);
    local_8._0_1_ = 10;
    iVar3 = FUN_00661cc0(0,2);
    local_8._0_1_ = 9;
    pcStack_418 = (char *)0x418679;
    local_354 = iVar3;
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_bc);
    local_8._0_1_ = 8;
    pcStack_418 = (char *)0x418688;
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_11c);
    local_8._0_1_ = 0;
    pcStack_418 = (char *)0x418697;
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_104);
    if ((local_2b8 < (uint)((in_stack_00000034 + -1) * 6)) ||
       ((uint)(in_stack_00000034 * 6) <= local_2b8)) {
      *(undefined1 *)(iVar3 + 0x51) = 0;
      local_2ba = 0;
    }
    else {
      *(undefined1 *)(iVar3 + 0x51) = 1;
      local_2ba = 1;
    }
    *(undefined4 *)(iVar3 + 0x984) = 0x2af9;
    pcStack_418 = "COMMAND_SELECT";
    pfStack_41c = (function<void___cdecl(void)> *)0x4186f3;
    FUN_004053a0();
    pcStack_418 = (char *)local_2b8;
    pfStack_41c = (function<void___cdecl(void)> *)&stack0x00000010;
    pfStack_420 = (function<void___cdecl(void)> *)0x418708;
    FUN_004273a0();
    pfStack_41c = (function<void___cdecl(void)> *)0x41870f;
    uVar5 = FUN_00405270();
    *(undefined4 *)(iVar3 + 0x9d0) = uVar5;
    pcStack_418 = local_3e4;
    pfStack_41c = (function<void___cdecl(void)> *)0x41872a;
    pcStack_418 = (char *)FUN_00427720();
    pfStack_41c = (function<void___cdecl(void)> *)local_2b8;
    pfStack_420 = (function<void___cdecl(void)> *)0x41873a;
    pfStack_41c = (function<void___cdecl(void)> *)FUN_00427000();
    pfStack_420 = (function<void___cdecl(void)> *)local_3e8;
    puStack_424 = (undefined1 *)0x41874d;
    puVar6 = (undefined4 *)FUN_00427720();
    pfStack_420 = (function<void___cdecl(void)> *)*puVar6;
    puStack_424 = local_3ec;
    puStack_428 = (undefined1 *)0x418762;
    puVar6 = (undefined4 *)FUN_00427760();
    puStack_424 = (undefined1 *)*puVar6;
    puStack_428 = local_3f0;
    uStack_42c = 0x418771;
    FUN_00427cc0();
    pfStack_41c = (function<void___cdecl(void)> *)0x41877b;
    cVar1 = FUN_00426ed0();
    if (cVar1 != '\0') {
      *(undefined1 *)(iVar3 + 0x51) = 0;
    }
    pcStack_418 = (char *)&stack0x00000014;
    pfStack_41c = (function<void___cdecl(void)> *)0x418797;
    pcStack_418 = (char *)FUN_00426f10();
    pfStack_41c = (function<void___cdecl(void)> *)((local_2b8 % 6 >> 1) * 100 + 0xc9);
    pfStack_420 = (function<void___cdecl(void)> *)((local_2b8 % 2) * 0xb5 + 0x87);
    puStack_424 = (undefined1 *)0x2a;
    pcStack_440 = "sprite/interface/cashshop/cashshopbtn.img";
    puStack_444 = (undefined1 *)0x4187e6;
    FUN_004054a0();
    local_8._0_1_ = 0xb;
    pcStack_440 = &DAT_00740958;
    puStack_444 = (undefined1 *)0x418800;
    local_364 = FUN_004054a0();
    local_8._0_1_ = 0xc;
    pcStack_440 = &DAT_00740964;
    puStack_444 = (undefined1 *)0x418826;
    local_334 = local_364;
    pcStack_440 = (char *)FUN_004054a0();
    local_8._0_1_ = 0xd;
    puStack_444 = &stack0x0000001c;
    pfStack_448 = local_ec;
    uStack_44c = 0x418853;
    local_35c = pcStack_440;
    local_358 = pcStack_440;
    puStack_45c = (undefined1 *)FUN_00427c80();
    local_8._0_1_ = 0xe;
    puStack_460 = auStack_454;
    puStack_458 = (undefined *)local_364;
    uStack_464 = 0x41888b;
    local_368 = puStack_45c;
    local_360 = puStack_45c;
    FUN_00405cf0();
    local_8._0_1_ = 0xf;
    puStack_458 = (undefined *)0x46;
    FUN_004054a0(&DAT_00740978);
    local_8._0_1_ = 0x12;
    iVar3 = FUN_00661cc0(0,2);
    local_8._0_1_ = 0x11;
    pcStack_418 = (char *)0x4188dd;
    local_36c = iVar3;
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_ec);
    local_8._0_1_ = 0x10;
    pcStack_418 = (char *)0x4188ec;
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_134);
    local_8._0_1_ = 0;
    pcStack_418 = (char *)0x4188fb;
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_14c);
    if ((local_2b8 < (uint)((in_stack_00000034 + -1) * 6)) ||
       ((uint)(in_stack_00000034 * 6) <= local_2b8)) {
      *(undefined1 *)(iVar3 + 0x51) = 0;
      local_2bb = 0;
    }
    else {
      *(undefined1 *)(iVar3 + 0x51) = 1;
      local_2bb = 1;
    }
    *(undefined4 *)(iVar3 + 0x984) = 11000;
    pcStack_418 = "COMMAND_SELECT";
    pfStack_41c = (function<void___cdecl(void)> *)0x418957;
    FUN_004053a0();
    pcStack_418 = (char *)local_2b8;
    pfStack_41c = (function<void___cdecl(void)> *)&stack0x00000010;
    pfStack_420 = (function<void___cdecl(void)> *)0x41896c;
    FUN_004273a0();
    pfStack_41c = (function<void___cdecl(void)> *)0x418973;
    uVar5 = FUN_00405270();
    *(undefined4 *)(iVar3 + 0x9d0) = uVar5;
    pcStack_418 = (char *)local_2b8;
    pfStack_41c = (function<void___cdecl(void)> *)0x41898b;
    iVar4 = FUN_00427000();
    *(undefined4 *)(iVar3 + 0x9a0) = *(undefined4 *)(iVar4 + 0x14);
    pcStack_418 = (char *)&stack0x00000014;
    pfStack_41c = (function<void___cdecl(void)> *)0x4189a5;
    pcStack_418 = (char *)FUN_00426f10();
    pfStack_41c = (function<void___cdecl(void)> *)((local_2b8 % 6 >> 1) * 100 + 0x8b);
    pfStack_420 = (function<void___cdecl(void)> *)((local_2b8 % 2) * 0xb5 + 0x17);
    puStack_424 = (undefined1 *)0x3;
    pcStack_440 = "sprite/interface/cashshop/cashshopimg.img";
    puStack_444 = (undefined1 *)0x4189f1;
    local_370 = FUN_004054a0();
    local_8._0_1_ = 0x13;
    pcStack_440 = &DAT_007409bc;
    puStack_444 = (undefined1 *)0x418a0b;
    puStack_458 = (undefined *)FUN_004054a0();
    local_8._0_1_ = 0x14;
    local_374 = auStack_454;
    puStack_460 = auStack_454;
    puStack_45c = &stack0x0000001c;
    uStack_464 = 0x418a3d;
    local_2c4 = puStack_458;
    local_2c0 = puStack_458;
    local_378 = FUN_00427c80();
    local_8._0_1_ = 0x15;
    puStack_458 = (undefined *)0x5a;
    local_37c = auStack_470;
    FUN_004054a0(&DAT_007409d0);
    local_8._0_1_ = 0x16;
    iVar3 = FUN_00661cc0(0,0);
    local_8._0_1_ = 0;
    pcStack_418 = (char *)0x418a8f;
    local_2c8 = iVar3;
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_d4);
    if ((local_2b8 < (uint)((in_stack_00000034 + -1) * 6)) ||
       ((uint)(in_stack_00000034 * 6) <= local_2b8)) {
      *(undefined1 *)(iVar3 + 0x51) = 0;
      local_2bc = 0;
    }
    else {
      *(undefined1 *)(iVar3 + 0x51) = 1;
      local_2bc = 1;
    }
    pcStack_418 = (char *)0x418ad6;
    FUN_0040b110();
    local_8 = CONCAT31(local_8._1_3_,0x17);
    pcStack_418 = (char *)local_2b8;
    pfStack_41c = (function<void___cdecl(void)> *)&stack0x00000010;
    pfStack_420 = (function<void___cdecl(void)> *)0x418aef;
    FUN_004273a0();
    pfStack_41c = (function<void___cdecl(void)> *)0x418af6;
    iVar4 = FUN_00405270();
    pcStack_418 = *(char **)(iVar4 + 4);
    pfStack_41c = (function<void___cdecl(void)> *)0x418aff;
    local_380 = FUN_006c8730();
    pcStack_418 = (char *)local_2b8;
    pfStack_41c = (function<void___cdecl(void)> *)&stack0x00000010;
    pfStack_420 = (function<void___cdecl(void)> *)0x418b1d;
    FUN_004273a0();
    pfStack_41c = (function<void___cdecl(void)> *)0x418b24;
    iVar4 = FUN_00405270();
    pcStack_418 = *(char **)(iVar4 + 4);
    pfStack_41c = (function<void___cdecl(void)> *)0x418b2d;
    iVar4 = game_loop_helper_caba0();
    if (iVar4 == 0x71) {
      pcStack_418 = (char *)local_2b8;
      pfStack_41c = (function<void___cdecl(void)> *)&stack0x00000010;
      pfStack_420 = (function<void___cdecl(void)> *)0x418b4a;
      FUN_004273a0();
      pfStack_41c = (function<void___cdecl(void)> *)0x418b51;
      iVar4 = FUN_00405270();
      pcStack_418 = *(char **)(iVar4 + 4);
      pfStack_41c = (function<void___cdecl(void)> *)0x418b60;
      iVar4 = game_loop_helper_cc840();
      pcStack_418 = (char *)(iVar4 + 0xc);
      pfStack_41c = (function<void___cdecl(void)> *)0x418b6f;
      FUN_0040d840();
    }
    else {
      pcStack_418 = (char *)local_2b8;
      pfStack_41c = (function<void___cdecl(void)> *)&stack0x00000010;
      pfStack_420 = (function<void___cdecl(void)> *)0x418b87;
      FUN_004273a0();
      pfStack_41c = (function<void___cdecl(void)> *)0x418b8e;
      iVar4 = FUN_00405270();
      pcStack_418 = *(char **)(iVar4 + 4);
      pfStack_41c = (function<void___cdecl(void)> *)0x418b97;
      iVar4 = game_loop_helper_caba0();
      if (iVar4 == 0x8e) {
        pcStack_418 = (char *)local_2b8;
        pfStack_41c = (function<void___cdecl(void)> *)&stack0x00000010;
        pfStack_420 = (function<void___cdecl(void)> *)0x418bb6;
        FUN_004273a0();
        pfStack_41c = (function<void___cdecl(void)> *)0x418bbd;
        iVar4 = FUN_00405270();
        pcStack_418 = *(char **)(iVar4 + 4);
        pfStack_41c = (function<void___cdecl(void)> *)0x418bcc;
        pcStack_418 = (char *)game_loop_helper_cd6d0();
        pfStack_41c = (function<void___cdecl(void)> *)0x418bd8;
        FUN_0040d840();
      }
    }
    local_a0 = 0x58;
    local_9c = 3;
    local_98 = 0xffe6c89c;
    local_7c = 1;
    pcStack_418 = local_a4;
    pfStack_41c = (function<void___cdecl(void)> *)0x418c13;
    FUN_0040d310();
    pcStack_418 = (char *)local_2b8;
    pfStack_41c = (function<void___cdecl(void)> *)0x418c22;
    iVar4 = FUN_00427000();
    pcStack_418 = (char *)(iVar4 + 0x18);
    pfStack_41c = (function<void___cdecl(void)> *)0x418c31;
    FUN_0040d840();
    local_a0 = 0xa9;
    local_9c = 0x1c;
    local_98 = 0xffe6c89c;
    local_7c = 2;
    pcStack_418 = local_a4;
    pfStack_41c = (function<void___cdecl(void)> *)0x418c6b;
    FUN_0040d310();
    pcStack_418 = &DAT_007409d8;
    pfStack_41c = (function<void___cdecl(void)> *)0x418c7c;
    local_2d4 = FUN_004054a0();
    local_8._0_1_ = 0x18;
    pcStack_418 = (char *)local_2b8;
    pfStack_41c = (function<void___cdecl(void)> *)0x418ca1;
    local_2cc = local_2d4;
    iVar4 = FUN_00427000();
    pcStack_418 = *(char **)(iVar4 + 0x14);
    pfStack_41c = local_17c;
    pfStack_420 = (function<void___cdecl(void)> *)0x418cb1;
    pfStack_41c = (function<void___cdecl(void)> *)FUN_0040a850();
    local_8._0_1_ = 0x19;
    pcStack_418 = (char *)local_2d4;
    pfStack_420 = local_164;
    puStack_424 = (undefined1 *)0x418ce4;
    local_2d8 = pfStack_41c;
    local_2d0 = pfStack_41c;
    pcStack_418 = (char *)FUN_00405cf0();
    pfStack_41c = (function<void___cdecl(void)> *)0x418cff;
    local_2dc = pcStack_418;
    FUN_004053e0();
    pcStack_418 = (char *)0x418d0a;
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_164);
    local_8._0_1_ = 0x18;
    pcStack_418 = (char *)0x418d19;
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_17c);
    local_8._0_1_ = 0x17;
    pcStack_418 = (char *)0x418d28;
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_194);
    local_a0 = 0xa9;
    local_9c = 0x2d;
    local_98 = 0xffe6c89c;
    local_7c = 2;
    pcStack_418 = local_a4;
    pfStack_41c = (function<void___cdecl(void)> *)0x418d63;
    FUN_0040d310();
    pcStack_418 = (char *)0x418d6e;
    FUN_0040aa90();
    local_8._0_1_ = 0x1a;
    pcStack_418 = "sprite/interface/cashshop/cashshopimg.img";
    pfStack_41c = (function<void___cdecl(void)> *)0x418d82;
    FUN_004053a0();
    local_294 = 4;
    local_277 = 3;
    pcStack_418 = local_2b4;
    pfStack_41c = (function<void___cdecl(void)> *)0x418da5;
    FUN_00427660();
    *(undefined1 *)(iVar3 + 0x6e0) = 1;
    local_8._0_1_ = 0x17;
    pcStack_418 = (char *)0x418dbe;
    FUN_00407a80();
    local_8 = (uint)local_8._1_3_ << 8;
    pcStack_418 = (char *)0x418dcd;
    FUN_0040c940();
    local_2b8 = local_2b8 + 1;
  }
  local_2e0 = 0x5e;
  pcStack_418 = (char *)&local_2e0;
  pfStack_41c = (function<void___cdecl(void)> *)0x418dee;
  pcStack_418 = (char *)game_timing_or_delay_helper();
  pfStack_41c = (function<void___cdecl(void)> *)0x1ba;
  pfStack_420 = (function<void___cdecl(void)> *)0xa4;
  puStack_424 = (undefined1 *)0x2e;
  local_384 = auStack_43c;
  pcStack_440 = "sprite/interface/cashshop/cashshopbtn.img";
  puStack_444 = (undefined1 *)0x418e10;
  local_388 = FUN_004054a0();
  local_8._0_1_ = 0x1b;
  pcStack_440 = &DAT_00740a38;
  puStack_444 = (undefined1 *)0x418e2a;
  puStack_458 = (undefined *)FUN_004054a0();
  local_8._0_1_ = 0x1c;
  local_38c = auStack_454;
  puStack_460 = auStack_454;
  puStack_45c = &stack0x0000001c;
  uStack_464 = 0x418e5c;
  local_2e8 = puStack_458;
  local_2e4 = puStack_458;
  local_390 = FUN_00427c80();
  local_8._0_1_ = 0x1d;
  puStack_458 = (undefined *)0x46;
  local_394 = auStack_470;
  FUN_004054a0(&DAT_00740a44);
  local_8._0_1_ = 0x1e;
  iVar3 = FUN_00661cc0(0,2);
  local_8._0_1_ = 0;
  pcStack_418 = (char *)0x418eae;
  local_2ec = iVar3;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_1ac);
  *(undefined4 *)(iVar3 + 0x984) = 0x35c;
  pcStack_418 = "SCROLL_ARROW";
  pfStack_41c = (function<void___cdecl(void)> *)0x418ecf;
  FUN_004053a0();
  *(int *)(iVar3 + 0x9d0) = iVar3;
  local_2f0 = 0x5e;
  pcStack_418 = (char *)&local_2f0;
  pfStack_41c = (function<void___cdecl(void)> *)0x418ef6;
  pcStack_418 = (char *)game_timing_or_delay_helper();
  pfStack_41c = (function<void___cdecl(void)> *)0x1ba;
  pfStack_420 = (function<void___cdecl(void)> *)0xe0;
  puStack_424 = (undefined1 *)0x31;
  local_398 = auStack_43c;
  pcStack_440 = "sprite/interface/cashshop/cashshopbtn.img";
  puStack_444 = (undefined1 *)0x418f18;
  local_39c = FUN_004054a0();
  local_8._0_1_ = 0x1f;
  pcStack_440 = &DAT_00740a88;
  puStack_444 = (undefined1 *)0x418f32;
  puStack_458 = (undefined *)FUN_004054a0();
  local_8._0_1_ = 0x20;
  local_3a0 = auStack_454;
  puStack_460 = auStack_454;
  puStack_45c = &stack0x0000001c;
  uStack_464 = 0x418f64;
  local_2f8 = puStack_458;
  local_2f4 = puStack_458;
  FUN_00427c80();
  local_8._0_1_ = 0x21;
  puStack_458 = (undefined *)0x46;
  local_3a8 = auStack_470;
  FUN_004054a0(&DAT_00740a94);
  local_8._0_1_ = 0x22;
  iVar3 = FUN_00661cc0(0,2);
  local_8._0_1_ = 0;
  pcStack_418 = (char *)0x418fb6;
  local_2fc = iVar3;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_1c4);
  *(undefined4 *)(iVar3 + 0x984) = 0x366;
  *(int *)(iVar3 + 0x9d0) = iVar3;
  pcStack_418 = "SCROLL_ARROW";
  pfStack_41c = (function<void___cdecl(void)> *)0x418fe3;
  FUN_004053a0();
  local_300 = 0x5e;
  pcStack_418 = (char *)&local_300;
  pfStack_41c = (function<void___cdecl(void)> *)0x418fff;
  pcStack_418 = (char *)game_timing_or_delay_helper();
  pfStack_41c = (function<void___cdecl(void)> *)0x1ba;
  pfStack_420 = (function<void___cdecl(void)> *)0xa7;
  puStack_424 = (undefined1 *)0x0;
  local_3ac = auStack_43c;
  pcStack_440 = "";
  puStack_444 = (undefined1 *)0x419021;
  local_3b0 = FUN_004054a0();
  local_8._0_1_ = 0x23;
  pcStack_440 = &DAT_00740aac;
  puStack_444 = (undefined1 *)0x41903b;
  puStack_458 = (undefined *)FUN_004054a0();
  local_8._0_1_ = 0x24;
  local_3b4 = auStack_454;
  puStack_460 = auStack_454;
  puStack_45c = &stack0x0000001c;
  uStack_464 = 0x41906d;
  local_308 = puStack_458;
  local_304 = puStack_458;
  local_3b8 = FUN_00427c80();
  local_8._0_1_ = 0x25;
  puStack_458 = (undefined *)0x0;
  local_3bc = auStack_470;
  FUN_004054a0(&DAT_00740ab8);
  local_8._0_1_ = 0x26;
  iVar3 = FUN_00661cc0(0,0);
  local_8._0_1_ = 0;
  pcStack_418 = (char *)0x4190bf;
  local_30c = iVar3;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_1dc);
  *(int *)(iVar3 + 0xb04) = in_stack_00000034;
  pcStack_418 = &stack0x00000010;
  pfStack_41c = (function<void___cdecl(void)> *)0x4190da;
  FUN_004273a0();
  pcStack_418 = (char *)0x4190e1;
  iVar4 = FUN_004274a0();
  *(uint *)(iVar3 + 0xb00) = (iVar4 + 5U) / 6;
  if (*(int *)(iVar3 + 0xb00) == 0) {
    *(undefined4 *)(iVar3 + 0xb00) = 1;
  }
  pcStack_418 = *(char **)(iVar3 + 0xb00);
  pfStack_41c = local_254;
  pfStack_420 = (function<void___cdecl(void)> *)0x419125;
  local_328 = FUN_0040a850();
  local_8._0_1_ = 0x27;
  pcStack_418 = "/";
  pfStack_41c = (function<void___cdecl(void)> *)0x41914e;
  local_310 = local_328;
  local_31c = FUN_004054a0();
  local_8._0_1_ = 0x28;
  pcStack_418 = *(char **)(iVar3 + 0xb04);
  pfStack_41c = local_224;
  pfStack_420 = (function<void___cdecl(void)> *)0x41917a;
  local_314 = local_31c;
  pfStack_41c = (function<void___cdecl(void)> *)FUN_0040a850();
  local_8._0_1_ = 0x29;
  pcStack_418 = (char *)local_31c;
  pfStack_420 = local_20c;
  puStack_424 = (undefined1 *)0x4191ad;
  local_320 = pfStack_41c;
  local_318 = pfStack_41c;
  pfStack_41c = (function<void___cdecl(void)> *)FUN_00405cf0();
  local_8._0_1_ = 0x2a;
  pcStack_418 = (char *)local_328;
  pfStack_420 = local_1f4;
  puStack_424 = (undefined1 *)0x4191e0;
  local_32c = pfStack_41c;
  local_324 = pfStack_41c;
  pcStack_418 = (char *)FUN_00405cf0();
  pfStack_41c = (function<void___cdecl(void)> *)0x4191fe;
  local_330 = pcStack_418;
  FUN_004053e0();
  pcStack_418 = (char *)0x419209;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_1f4);
  local_8._0_1_ = 0x29;
  pcStack_418 = (char *)0x419218;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_20c);
  local_8._0_1_ = 0x28;
  pcStack_418 = (char *)0x419227;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_224);
  local_8._0_1_ = 0x27;
  pcStack_418 = (char *)0x419236;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_23c);
  local_8 = (uint)local_8._1_3_ << 8;
  pcStack_418 = (char *)0x419245;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_254);
  pcStack_418 = (char *)0x419254;
  CDocObjectServer::ReleaseDocSite((CDocObjectServer *)(iVar3 + 0xa3c));
  *(undefined4 *)(iVar3 + 0xa40) = 0x25;
  *(undefined4 *)(iVar3 + 0xa44) = 0;
  *(undefined4 *)(iVar3 + 0xa64) = 1;
  local_8 = 0xffffffff;
  pcStack_418 = (char *)0x41928a;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)&stack0x0000001c);
  ExceptionList = local_10;
  return;
}


/* ==== 0041a080  img_path_loader_10  size=12058 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void img_path_loader_10(undefined *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  CDocObjectServer *this;
  uint uVar4;
  char *pcVar5;
  undefined **ppuVar6;
  undefined1 auStack_938 [16];
  undefined4 uStack_928;
  undefined *puStack_924;
  undefined *puStack_920;
  undefined *puStack_91c;
  undefined *puStack_918;
  int iStack_914;
  undefined *puStack_910;
  undefined4 *puStack_90c;
  char *pcStack_908;
  undefined *apuStack_904 [3];
  undefined1 auStack_8f8 [8];
  undefined4 uStack_8f0;
  undefined4 *puStack_8ec;
  function<void___cdecl(void)> *pfStack_8e8;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbStack_8e4;
  undefined1 local_8b4 [8];
  undefined1 local_8ac [8];
  undefined1 local_8a4 [8];
  undefined1 local_89c [8];
  undefined1 local_894 [8];
  undefined1 local_88c [8];
  undefined1 local_884 [8];
  undefined1 local_87c [8];
  undefined1 local_874 [8];
  undefined1 local_86c [4];
  undefined1 local_868 [4];
  undefined1 local_864 [4];
  undefined1 *local_860;
  undefined4 local_85c;
  undefined1 *local_858;
  undefined4 local_854;
  undefined1 *local_850;
  undefined1 *local_84c;
  undefined4 local_848;
  undefined1 *local_844;
  undefined4 local_840;
  undefined1 *local_83c;
  undefined1 *local_838;
  undefined4 local_834;
  undefined1 *local_830;
  undefined4 local_82c;
  undefined1 *local_828;
  undefined **local_824;
  undefined1 *local_820;
  undefined1 *local_81c;
  undefined1 *local_818;
  undefined4 local_814;
  undefined **local_810;
  undefined **local_80c;
  undefined **local_808;
  undefined1 *local_804;
  undefined1 *local_800;
  undefined1 *local_7fc;
  undefined4 local_7f8;
  undefined **local_7f4;
  undefined **local_7f0;
  undefined **local_7ec;
  undefined1 *local_7e8;
  undefined1 *local_7e4;
  undefined1 *local_7e0;
  undefined4 local_7dc;
  undefined **local_7d8;
  undefined **local_7d4;
  undefined **local_7d0;
  undefined1 *local_7cc;
  undefined1 *local_7c8;
  undefined1 *local_7c4;
  undefined4 local_7c0;
  undefined **local_7bc;
  undefined **local_7b8;
  undefined **local_7b4;
  undefined1 *local_7b0;
  undefined1 *local_7ac;
  undefined1 *local_7a8;
  undefined4 local_7a4;
  undefined **local_7a0;
  undefined **local_79c;
  undefined **local_798;
  undefined1 *local_794;
  undefined1 *local_78c;
  undefined4 local_788;
  undefined **local_784;
  undefined **local_780;
  undefined **local_77c;
  undefined1 *local_778;
  undefined1 *local_774;
  undefined1 *local_770;
  undefined4 local_76c;
  undefined **local_768;
  undefined **local_764;
  undefined **local_760;
  undefined1 *local_75c;
  undefined1 *local_758;
  undefined1 *local_754;
  undefined4 local_750;
  undefined **local_74c;
  undefined **local_748;
  undefined **local_744;
  undefined1 *local_740;
  undefined1 *local_73c;
  undefined1 *local_738;
  undefined4 local_734;
  undefined **local_730;
  undefined **local_72c;
  undefined4 local_728;
  undefined1 *local_724;
  undefined **local_720;
  undefined1 *local_71c;
  undefined1 *local_718;
  undefined4 local_714;
  undefined1 *local_710;
  undefined4 local_70c;
  undefined1 *local_708;
  undefined **local_704;
  undefined1 *local_700;
  undefined1 *local_6fc;
  undefined4 local_6f8;
  undefined1 *local_6f4;
  undefined4 local_6f0;
  undefined1 *local_6ec;
  undefined **local_6e8;
  undefined1 *local_6e4;
  undefined1 *local_6e0;
  undefined4 local_6dc;
  undefined1 *local_6d8;
  undefined1 *local_6d4;
  undefined4 local_6d0;
  undefined1 *local_6cc;
  undefined4 local_6c8;
  undefined1 *local_6c4;
  undefined1 *local_6c0;
  undefined4 local_6bc;
  undefined1 *local_6b8;
  undefined4 local_6b4;
  undefined1 *local_6b0;
  undefined1 *local_6ac;
  undefined4 local_6a8;
  undefined1 *local_6a4;
  undefined4 local_6a0;
  undefined1 *local_69c;
  undefined1 *local_698;
  undefined4 local_694;
  undefined1 *local_690;
  undefined4 local_68c;
  undefined1 *local_688;
  undefined1 *local_684;
  undefined4 local_680;
  undefined1 *local_67c;
  undefined4 local_678;
  undefined1 local_674 [12];
  undefined1 local_668 [12];
  undefined1 local_65c [12];
  undefined1 local_650 [12];
  undefined1 local_644 [12];
  undefined1 local_638 [12];
  undefined1 local_62c [12];
  undefined1 local_620 [12];
  undefined1 local_614 [12];
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
  int local_5bc;
  undefined4 local_5b8;
  int local_5b4;
  undefined4 local_5b0;
  int local_5ac;
  undefined4 local_5a8;
  int local_5a4;
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
  undefined *local_4c4;
  undefined4 local_4c0;
  undefined4 local_4bc;
  undefined4 local_4b8;
  undefined *local_4b4;
  undefined4 local_4b0;
  undefined4 local_4ac;
  undefined4 local_4a8;
  undefined *local_4a4;
  undefined4 local_4a0;
  int local_49c;
  int local_498;
  undefined4 local_494;
  int local_490;
  undefined4 local_48c;
  int local_488;
  undefined4 local_484;
  int local_480;
  undefined4 local_47c;
  int local_478;
  undefined4 local_474;
  int local_470;
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
  int local_410;
  int local_40c;
  uint local_408;
  int local_404;
  uint local_400;
  undefined4 local_3fc;
  undefined4 local_3f8;
  char local_3f1;
  undefined1 local_3f0 [12];
  undefined4 local_3e4;
  undefined4 local_3e0;
  undefined4 local_3dc;
  undefined4 local_3d8;
  undefined4 local_3d4;
  undefined4 local_3d0;
  undefined4 local_3cc;
  undefined4 local_3c8;
  int local_3c4;
  int local_3c0;
  int local_3bc;
  undefined4 local_32c;
  undefined4 local_328;
  char local_204;
  int local_200;
  undefined4 local_1fc;
  function<void___cdecl(void)> local_1c4 [24];
  function<void___cdecl(void)> local_1ac [24];
  function<void___cdecl(void)> local_194 [24];
  function<void___cdecl(void)> local_17c [24];
  function<void___cdecl(void)> local_164 [24];
  function<void___cdecl(void)> local_14c [24];
  function<void___cdecl(void)> local_134 [24];
  function<void___cdecl(void)> local_11c [24];
  function<void___cdecl(void)> local_104 [24];
  function<void___cdecl(void)> local_ec [28];
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_ac;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_44 [24];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_2c [24];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070d71c;
  local_10 = ExceptionList;
  local_14 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_3c4 = game_loop_helper_cd070();
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41a0d3;
  FUN_00427140();
  local_8 = 0;
  if (*(int *)(param_1 + 0xae4) == 8) {
    pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41a0fc;
    FUN_004021b0();
    while( true ) {
      pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41a10f;
      FUN_00402170();
      pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41a11b;
      cVar1 = FUN_00426ed0();
      if (cVar1 == '\0') break;
      iVar2 = FUN_00401b20();
      if (((((*(int *)(iVar2 + 4) == 0x39) || (iVar2 = FUN_00401b20(), *(int *)(iVar2 + 4) == 0x3a))
           || (iVar2 = FUN_00401b20(), *(int *)(iVar2 + 4) == 0x3b)) ||
          ((iVar2 = FUN_00401b20(), *(int *)(iVar2 + 4) == 0x3c ||
           (iVar2 = FUN_00401b20(), *(int *)(iVar2 + 4) == 0x3d)))) ||
         (iVar2 = FUN_00401b20(), *(int *)(iVar2 + 4) == 0x3e)) {
        local_584 = local_3cc;
        pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_86c;
        pfStack_8e8 = (function<void___cdecl(void)> *)0x41a1b1;
        puVar3 = (undefined4 *)FUN_00427050();
        local_3cc = *puVar3;
      }
      else {
        FUN_00426eb0();
      }
    }
  }
  else if (*(int *)(param_1 + 0xae4) == 0x18) {
    pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41a1f3;
    FUN_004021b0();
    while( true ) {
      pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41a206;
      FUN_00402170();
      pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41a212;
      cVar1 = FUN_00426ed0();
      if (cVar1 == '\0') break;
      iVar2 = FUN_00401b20();
      if ((((*(int *)(iVar2 + 4) == 0x32) || (iVar2 = FUN_00401b20(), *(int *)(iVar2 + 4) == 0x3a))
          || (iVar2 = FUN_00401b20(), *(int *)(iVar2 + 4) == 0x3b)) ||
         (((iVar2 = FUN_00401b20(), *(int *)(iVar2 + 4) == 0x3c ||
           (iVar2 = FUN_00401b20(), *(int *)(iVar2 + 4) == 0x3d)) ||
          (iVar2 = FUN_00401b20(), *(int *)(iVar2 + 4) == 0x3e)))) {
        local_5c8 = local_3d0;
        pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_874;
        pfStack_8e8 = (function<void___cdecl(void)> *)0x41a2a8;
        puVar3 = (undefined4 *)FUN_00427050();
        local_3d0 = *puVar3;
      }
      else {
        FUN_00426eb0();
      }
    }
  }
  else if (*(int *)(param_1 + 0xae4) == 0x28) {
    pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41a2ea;
    FUN_004021b0();
    while( true ) {
      pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41a2fd;
      FUN_00402170();
      pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41a309;
      cVar1 = FUN_00426ed0();
      if (cVar1 == '\0') break;
      iVar2 = FUN_00401b20();
      if ((((*(int *)(iVar2 + 4) == 0x32) || (iVar2 = FUN_00401b20(), *(int *)(iVar2 + 4) == 0x39))
          || ((iVar2 = FUN_00401b20(), *(int *)(iVar2 + 4) == 0x3b ||
              ((iVar2 = FUN_00401b20(), *(int *)(iVar2 + 4) == 0x3c ||
               (iVar2 = FUN_00401b20(), *(int *)(iVar2 + 4) == 0x3d)))))) ||
         (iVar2 = FUN_00401b20(), *(int *)(iVar2 + 4) == 0x3e)) {
        local_5cc = local_3d4;
        pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_87c;
        pfStack_8e8 = (function<void___cdecl(void)> *)0x41a39f;
        puVar3 = (undefined4 *)FUN_00427050();
        local_3d4 = *puVar3;
      }
      else {
        FUN_00426eb0();
      }
    }
  }
  else if (*(int *)(param_1 + 0xae4) == 0x38) {
    pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41a3e1;
    FUN_004021b0();
    while( true ) {
      pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41a3f4;
      FUN_00402170();
      pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41a400;
      cVar1 = FUN_00426ed0();
      if (cVar1 == '\0') break;
      iVar2 = FUN_00401b20();
      if (((*(int *)(iVar2 + 4) == 0x32) || (iVar2 = FUN_00401b20(), *(int *)(iVar2 + 4) == 0x39))
         || ((iVar2 = FUN_00401b20(), *(int *)(iVar2 + 4) == 0x3a ||
             (((iVar2 = FUN_00401b20(), *(int *)(iVar2 + 4) == 0x3c ||
               (iVar2 = FUN_00401b20(), *(int *)(iVar2 + 4) == 0x3d)) ||
              (iVar2 = FUN_00401b20(), *(int *)(iVar2 + 4) == 0x3e)))))) {
        local_5d4 = local_3d8;
        pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_884;
        pfStack_8e8 = (function<void___cdecl(void)> *)0x41a496;
        puVar3 = (undefined4 *)FUN_00427050();
        local_3d8 = *puVar3;
      }
      else {
        FUN_00426eb0();
      }
    }
  }
  else if (*(int *)(param_1 + 0xae4) == 0x48) {
    pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41a4d8;
    FUN_004021b0();
    while( true ) {
      pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41a4eb;
      FUN_00402170();
      pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41a4f7;
      cVar1 = FUN_00426ed0();
      if (cVar1 == '\0') break;
      iVar2 = FUN_00401b20();
      if (((((*(int *)(iVar2 + 4) == 0x32) || (iVar2 = FUN_00401b20(), *(int *)(iVar2 + 4) == 0x39))
           || (iVar2 = FUN_00401b20(), *(int *)(iVar2 + 4) == 0x3a)) ||
          ((iVar2 = FUN_00401b20(), *(int *)(iVar2 + 4) == 0x3b ||
           (iVar2 = FUN_00401b20(), *(int *)(iVar2 + 4) == 0x3d)))) ||
         (iVar2 = FUN_00401b20(), *(int *)(iVar2 + 4) == 0x3e)) {
        local_5d8 = local_3dc;
        pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_88c;
        pfStack_8e8 = (function<void___cdecl(void)> *)0x41a58d;
        puVar3 = (undefined4 *)FUN_00427050();
        local_3dc = *puVar3;
      }
      else {
        FUN_00426eb0();
      }
    }
  }
  else if (*(int *)(param_1 + 0xae4) == 0x58) {
    pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41a5cf;
    FUN_004021b0();
    while( true ) {
      pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41a5e2;
      FUN_00402170();
      pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41a5ee;
      cVar1 = FUN_00426ed0();
      if (cVar1 == '\0') break;
      iVar2 = FUN_00401b20();
      if ((((*(int *)(iVar2 + 4) == 0x32) || (iVar2 = FUN_00401b20(), *(int *)(iVar2 + 4) == 0x39))
          || ((iVar2 = FUN_00401b20(), *(int *)(iVar2 + 4) == 0x3a ||
              ((iVar2 = FUN_00401b20(), *(int *)(iVar2 + 4) == 0x3b ||
               (iVar2 = FUN_00401b20(), *(int *)(iVar2 + 4) == 0x3c)))))) ||
         (iVar2 = FUN_00401b20(), *(int *)(iVar2 + 4) == 0x3e)) {
        local_5dc = local_3e0;
        pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_894;
        pfStack_8e8 = (function<void___cdecl(void)> *)0x41a684;
        puVar3 = (undefined4 *)FUN_00427050();
        local_3e0 = *puVar3;
      }
      else {
        FUN_00426eb0();
      }
    }
  }
  else if (*(int *)(param_1 + 0xae4) == 0x68) {
    pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41a6c6;
    FUN_004021b0();
    while( true ) {
      pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41a6d9;
      FUN_00402170();
      pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41a6e5;
      cVar1 = FUN_00426ed0();
      if (cVar1 == '\0') break;
      iVar2 = FUN_00401b20();
      if (((*(int *)(iVar2 + 4) == 0x32) || (iVar2 = FUN_00401b20(), *(int *)(iVar2 + 4) == 0x39))
         || ((iVar2 = FUN_00401b20(), *(int *)(iVar2 + 4) == 0x3a ||
             (((iVar2 = FUN_00401b20(), *(int *)(iVar2 + 4) == 0x3b ||
               (iVar2 = FUN_00401b20(), *(int *)(iVar2 + 4) == 0x3c)) ||
              (iVar2 = FUN_00401b20(), *(int *)(iVar2 + 4) == 0x3d)))))) {
        local_5e0 = local_3e4;
        pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_89c;
        pfStack_8e8 = (function<void___cdecl(void)> *)0x41a77b;
        puVar3 = (undefined4 *)FUN_00427050();
        local_3e4 = *puVar3;
      }
      else {
        FUN_00426eb0();
      }
    }
  }
  else if (*(int *)(param_1 + 0xae4) == 0x78) {
    pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41a7bd;
    FUN_004021b0();
    while( true ) {
      pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41a7d0;
      FUN_00402170();
      pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41a7dc;
      cVar1 = FUN_00426ed0();
      if (cVar1 == '\0') break;
      iVar2 = FUN_00401b20();
      if ((((*(int *)(iVar2 + 4) == 0x32) || (iVar2 = FUN_00401b20(), *(int *)(iVar2 + 4) == 0x39))
          || (iVar2 = FUN_00401b20(), *(int *)(iVar2 + 4) == 0x3a)) ||
         (((iVar2 = FUN_00401b20(), *(int *)(iVar2 + 4) == 0x3b ||
           (iVar2 = FUN_00401b20(), *(int *)(iVar2 + 4) == 0x3c)) ||
          ((iVar2 = FUN_00401b20(), *(int *)(iVar2 + 4) == 0x3d ||
           (iVar2 = FUN_00401b20(), *(int *)(iVar2 + 4) == 0x3e)))))) {
        local_5e4 = local_3c8;
        pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_8a4;
        pfStack_8e8 = (function<void___cdecl(void)> *)0x41a883;
        puVar3 = (undefined4 *)FUN_00427050();
        local_3c8 = *puVar3;
      }
      else {
        FUN_00426eb0();
      }
    }
  }
  if (*(int *)(param_1 + 0xd70) != 0) {
    pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41a8c0;
    FUN_004021b0();
    while( true ) {
      pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41a8d3;
      FUN_00402170();
      pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41a8df;
      cVar1 = FUN_00426ed0();
      if (cVar1 == '\0') break;
      iVar2 = FUN_00401b20();
      if (*(int *)(iVar2 + 4) == 0x10) {
        local_5e8 = local_3fc;
        pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_8ac;
        pfStack_8e8 = (function<void___cdecl(void)> *)0x41a91c;
        puVar3 = (undefined4 *)FUN_00427050();
        local_3fc = *puVar3;
        break;
      }
      FUN_00426eb0();
    }
  }
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)param_1;
  pfStack_8e8 = (function<void___cdecl(void)> *)0x41a941;
  iVar2 = FUN_006c79e0();
  if (iVar2 != 0) {
    pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41a95e;
    FUN_004021b0();
    while( true ) {
      pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41a971;
      FUN_00402170();
      pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41a97d;
      cVar1 = FUN_00426ed0();
      if (cVar1 == '\0') break;
      iVar2 = FUN_00401b20();
      if (*(int *)(iVar2 + 4) == 10) {
        local_5ec = local_3f8;
        pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_8b4;
        pfStack_8e8 = (function<void___cdecl(void)> *)0x41a9ba;
        puVar3 = (undefined4 *)FUN_00427050();
        local_3f8 = *puVar3;
        break;
      }
      FUN_00426eb0();
    }
  }
  local_5f0 = 0x51;
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41a9ef;
  game_timing_or_delay_helper();
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41a9f5;
  FUN_0065e0b0();
  local_5f4 = 0x52;
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41aa13;
  game_timing_or_delay_helper();
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41aa19;
  FUN_0065e0b0();
  local_5f8 = 0x53;
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41aa37;
  game_timing_or_delay_helper();
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41aa3d;
  FUN_0065e0b0();
  local_5fc = 0x54;
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41aa5b;
  game_timing_or_delay_helper();
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41aa61;
  FUN_0065e0b0();
  local_600 = 0x55;
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41aa7f;
  game_timing_or_delay_helper();
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41aa85;
  FUN_0065e0b0();
  local_604 = 0x56;
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41aaa3;
  game_timing_or_delay_helper();
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41aaa9;
  FUN_0065e0b0();
  local_608 = 0x57;
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41aac7;
  game_timing_or_delay_helper();
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41aacd;
  FUN_0065e0b0();
  local_414 = 0x58;
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41aaeb;
  game_timing_or_delay_helper();
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41aaf1;
  FUN_0065e0b0();
  local_418 = 0x59;
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41ab0f;
  game_timing_or_delay_helper();
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41ab15;
  FUN_0065e0b0();
  local_41c = 0x5b;
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41ab33;
  game_timing_or_delay_helper();
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41ab39;
  FUN_0065e0b0();
  local_420 = 0x5c;
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41ab57;
  game_timing_or_delay_helper();
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41ab5d;
  FUN_0065e0b0();
  local_424 = 0x5d;
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41ab7b;
  game_timing_or_delay_helper();
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41ab81;
  FUN_0065e0b0();
  local_428 = 0x4c;
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41ab9f;
  game_timing_or_delay_helper();
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41aba5;
  FUN_0065e0b0();
  local_42c = 0x4e;
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41abc3;
  game_timing_or_delay_helper();
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41abc9;
  FUN_0065e0b0();
  local_430 = 0x50;
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41abe7;
  game_timing_or_delay_helper();
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41abed;
  FUN_0065e0b0();
  local_434 = 0x5e;
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41ac0b;
  game_timing_or_delay_helper();
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41ac11;
  FUN_0065e0b0();
  local_438 = 9000;
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41ac2f;
  FUN_0040d330();
  FUN_0040d540();
  local_43c = 0x2329;
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41ac52;
  FUN_0040d330();
  FUN_0040d540();
  local_440 = 0x232a;
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41ac75;
  FUN_0040d330();
  FUN_0040d540();
  local_444 = 0x232b;
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41ac98;
  FUN_0040d330();
  FUN_0040d540();
  local_448 = 0x232c;
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41acbb;
  FUN_0040d330();
  FUN_0040d540();
  local_44c = 0x232d;
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41acde;
  FUN_0040d330();
  FUN_0040d540();
  local_450 = 0x232e;
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41ad01;
  FUN_0040d330();
  FUN_0040d540();
  local_454 = 0x232f;
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41ad24;
  FUN_0040d330();
  FUN_0040d540();
  local_458 = 0x2330;
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41ad47;
  FUN_0040d330();
  FUN_0040d540();
  local_45c = 0x2332;
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41ad6a;
  FUN_0040d330();
  FUN_0040d540();
  local_460 = 0x2333;
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41ad8d;
  FUN_0040d330();
  FUN_0040d540();
  local_464 = 0x2334;
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41adb0;
  FUN_0040d330();
  FUN_0040d540();
  local_468 = 0x2335;
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41add3;
  FUN_0040d330();
  FUN_0040d540();
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41ade2;
  FUN_004192b0();
  local_46c = 0x5e;
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41ae00;
  game_timing_or_delay_helper();
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  pfStack_8e8 = (function<void___cdecl(void)> *)0x0;
  puStack_8ec = (undefined4 *)0x0;
  pcStack_908 = "sprite/interface/cashshop/cashshopimg.img";
  puStack_90c = (undefined4 *)0x41ae1c;
  FUN_004054a0();
  local_8._0_1_ = 1;
  puStack_920 = &DAT_00740bec;
  puStack_924 = (undefined *)0x41ae3b;
  FUN_004054a0();
  local_8._0_1_ = 2;
  puStack_920 = (undefined *)0x64;
  FUN_004054a0(&DAT_00740bf8);
  local_8._0_1_ = 0;
  local_470 = FUN_00661cc0(0,0);
  *(undefined1 *)(local_470 + 0x51) = 1;
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41ae95;
  local_3bc = local_470;
  FUN_004054a0();
  local_8 = CONCAT31(local_8._1_3_,3);
  FUN_006ac870();
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41aeb7;
  FUN_004272c0();
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  pfStack_8e8 = (function<void___cdecl(void)> *)0x41aecf;
  FUN_00427200();
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41aed9;
  FUN_004053a0();
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41aeec;
  this = (CDocObjectServer *)FUN_00427200();
  CDocObjectServer::ReleaseDocSite(this);
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41af06;
  iVar2 = FUN_00427200();
  *(undefined4 *)(iVar2 + 4) = 0x99;
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41af20;
  iVar2 = FUN_00427200();
  *(undefined4 *)(iVar2 + 8) = 0x32;
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41af3a;
  iVar2 = FUN_00427200();
  *(undefined4 *)(iVar2 + 0xc) = 0xffe6c89c;
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41af54;
  iVar2 = FUN_00427200();
  *(undefined4 *)(iVar2 + 0x34) = 0x9c;
  local_408 = 0;
  while (uVar4 = FUN_00410b30(), local_408 < uVar4) {
    pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41af95;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator[]
              (local_44,local_408);
    pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41afac;
    iVar2 = FUN_00427230();
    pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(iVar2 + -1);
    pfStack_8e8 = (function<void___cdecl(void)> *)0x41afc1;
    pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)FUN_00427200();
    pfStack_8e8 = (function<void___cdecl(void)> *)(local_3bc + 0x1ac);
    puStack_8ec = (undefined4 *)0x41afd3;
    FUN_004cb660();
    local_408 = local_408 + 1;
  }
  local_474 = 0x5e;
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41aff3;
  game_timing_or_delay_helper();
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x7;
  pfStack_8e8 = (function<void___cdecl(void)> *)0xdc;
  puStack_8ec = (undefined4 *)0x0;
  pcStack_908 = "sprite/interface/cashshop/cashshopbtn.img";
  puStack_90c = (undefined4 *)0x41b012;
  local_678 = FUN_004054a0();
  local_8._0_1_ = 4;
  local_67c = (undefined1 *)&puStack_91c;
  puStack_920 = &DAT_00740c6c;
  puStack_924 = (undefined *)0x41b031;
  local_680 = FUN_004054a0();
  local_8._0_1_ = 5;
  puStack_920 = (undefined *)0x5a;
  local_684 = auStack_938;
  FUN_004054a0(&DAT_00740c80);
  local_8._0_1_ = 3;
  local_478 = FUN_00661cc0(0,0xc);
  local_3bc = local_478;
  FUN_0040aa90();
  local_8._0_1_ = 6;
  *(undefined1 *)(local_3bc + 0x6e0) = 1;
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41b0a8;
  FUN_00427660();
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  pfStack_8e8 = (function<void___cdecl(void)> *)0x41b0c0;
  FUN_0040d680();
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41b0ca;
  FUN_004053a0();
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41b0dd;
  iVar2 = FUN_0040d680();
  *(undefined1 *)(iVar2 + 0x20) = 2;
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41b0f4;
  iVar2 = FUN_0040d680();
  *(undefined4 *)(iVar2 + 0x24) = 0;
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41b10e;
  iVar2 = FUN_0040d680();
  *(undefined4 *)(iVar2 + 0x28) = 0;
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41b12b;
  FUN_004053a0();
  *(undefined4 *)(local_3bc + 0x984) = 0x271a;
  local_47c = 0x5e;
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41b156;
  game_timing_or_delay_helper();
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x7;
  pfStack_8e8 = (function<void___cdecl(void)> *)0x12c;
  puStack_8ec = (undefined4 *)0x6;
  local_688 = (undefined1 *)apuStack_904;
  pcStack_908 = "sprite/interface/cashshop/cashshopbtn.img";
  puStack_90c = (undefined4 *)0x41b175;
  local_68c = FUN_004054a0();
  local_8._0_1_ = 7;
  local_690 = (undefined1 *)&puStack_91c;
  puStack_920 = &DAT_00740cf4;
  puStack_924 = (undefined *)0x41b194;
  local_694 = FUN_004054a0();
  local_8._0_1_ = 8;
  puStack_920 = (undefined *)0x5a;
  local_698 = auStack_938;
  FUN_004054a0(&DAT_00740d08);
  local_8._0_1_ = 6;
  local_480 = FUN_00661cc0(0,0xc);
  *(undefined1 *)(local_480 + 0x6e0) = 1;
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41b1fc;
  local_3bc = local_480;
  FUN_00427660();
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  pfStack_8e8 = (function<void___cdecl(void)> *)0x41b214;
  FUN_0040d680();
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41b21e;
  FUN_004053a0();
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41b231;
  iVar2 = FUN_0040d680();
  *(undefined1 *)(iVar2 + 0x20) = 8;
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41b248;
  iVar2 = FUN_0040d680();
  *(undefined4 *)(iVar2 + 0x24) = 0;
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41b262;
  iVar2 = FUN_0040d680();
  *(undefined4 *)(iVar2 + 0x28) = 0;
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41b27f;
  FUN_004053a0();
  *(undefined4 *)(local_3bc + 0x984) = 0x271b;
  local_484 = 0x5e;
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41b2aa;
  game_timing_or_delay_helper();
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x7;
  pfStack_8e8 = (function<void___cdecl(void)> *)0x17e;
  puStack_8ec = (undefined4 *)0xc;
  local_69c = (undefined1 *)apuStack_904;
  pcStack_908 = "sprite/interface/cashshop/cashshopbtn.img";
  puStack_90c = (undefined4 *)0x41b2c9;
  local_6a0 = FUN_004054a0();
  local_8._0_1_ = 9;
  local_6a4 = (undefined1 *)&puStack_91c;
  puStack_920 = &DAT_00740d7c;
  puStack_924 = (undefined *)0x41b2e8;
  local_6a8 = FUN_004054a0();
  local_8._0_1_ = 10;
  puStack_920 = (undefined *)0x5a;
  local_6ac = auStack_938;
  FUN_004054a0(&DAT_00740d90);
  local_8._0_1_ = 6;
  local_488 = FUN_00661cc0(0,0xc);
  *(undefined1 *)(local_488 + 0x6e0) = 1;
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41b350;
  local_3bc = local_488;
  FUN_00427660();
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  pfStack_8e8 = (function<void___cdecl(void)> *)0x41b368;
  FUN_0040d680();
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41b372;
  FUN_004053a0();
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41b385;
  iVar2 = FUN_0040d680();
  *(undefined1 *)(iVar2 + 0x20) = 0xe;
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41b39c;
  iVar2 = FUN_0040d680();
  *(undefined4 *)(iVar2 + 0x24) = 0;
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41b3b6;
  iVar2 = FUN_0040d680();
  *(undefined4 *)(iVar2 + 0x28) = 0;
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41b3d3;
  FUN_004053a0();
  *(undefined4 *)(local_3bc + 0x984) = 0x271c;
  local_48c = 0x5e;
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41b3fe;
  game_timing_or_delay_helper();
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x7;
  pfStack_8e8 = (function<void___cdecl(void)> *)0x1c7;
  puStack_8ec = (undefined4 *)0x58;
  local_6b0 = (undefined1 *)apuStack_904;
  pcStack_908 = "sprite/interface/cashshop/cashshopbtn.img";
  puStack_90c = (undefined4 *)0x41b41d;
  local_6b4 = FUN_004054a0();
  local_8._0_1_ = 0xb;
  local_6b8 = (undefined1 *)&puStack_91c;
  puStack_920 = &DAT_00740e04;
  puStack_924 = (undefined *)0x41b43c;
  local_6bc = FUN_004054a0();
  local_8._0_1_ = 0xc;
  puStack_920 = (undefined *)0x5a;
  local_6c0 = auStack_938;
  FUN_004054a0(&DAT_00740e18);
  local_8._0_1_ = 6;
  local_490 = FUN_00661cc0(0,0xc);
  *(undefined1 *)(local_490 + 0x6e0) = 1;
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41b4a4;
  local_3bc = local_490;
  FUN_00427660();
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  pfStack_8e8 = (function<void___cdecl(void)> *)0x41b4bc;
  FUN_0040d680();
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41b4c6;
  FUN_004053a0();
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41b4d9;
  iVar2 = FUN_0040d680();
  *(undefined1 *)(iVar2 + 0x20) = 0x5a;
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41b4f0;
  iVar2 = FUN_0040d680();
  *(undefined4 *)(iVar2 + 0x24) = 0;
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41b50a;
  iVar2 = FUN_0040d680();
  *(undefined4 *)(iVar2 + 0x28) = 0;
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41b527;
  FUN_004053a0();
  *(undefined4 *)(local_3bc + 0x984) = 0x271d;
  local_494 = 0x5e;
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41b552;
  game_timing_or_delay_helper();
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x7;
  pfStack_8e8 = (function<void___cdecl(void)> *)0x22d;
  puStack_8ec = (undefined4 *)0x18;
  local_6c4 = (undefined1 *)apuStack_904;
  pcStack_908 = "sprite/interface/cashshop/cashshopbtn.img";
  puStack_90c = (undefined4 *)0x41b571;
  local_6c8 = FUN_004054a0();
  local_8._0_1_ = 0xd;
  local_6cc = (undefined1 *)&puStack_91c;
  puStack_920 = &DAT_00740e8c;
  puStack_924 = (undefined *)0x41b590;
  local_6d0 = FUN_004054a0();
  local_8._0_1_ = 0xe;
  puStack_920 = (undefined *)0x5a;
  local_6d4 = auStack_938;
  FUN_004054a0(&DAT_00740e9c);
  local_8._0_1_ = 6;
  local_498 = FUN_00661cc0(0,0xc);
  *(undefined1 *)(local_498 + 0x6e0) = 1;
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41b5f8;
  local_3bc = local_498;
  FUN_00427660();
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  pfStack_8e8 = (function<void___cdecl(void)> *)0x41b610;
  FUN_0040d680();
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41b61a;
  FUN_004053a0();
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41b62d;
  iVar2 = FUN_0040d680();
  *(undefined1 *)(iVar2 + 0x20) = 0x1a;
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41b644;
  iVar2 = FUN_0040d680();
  *(undefined4 *)(iVar2 + 0x24) = 0;
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41b65e;
  iVar2 = FUN_0040d680();
  *(undefined4 *)(iVar2 + 0x28) = 0;
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41b67b;
  FUN_004053a0();
  *(undefined4 *)(local_3bc + 0x984) = 0x2711;
  FUN_00426e80();
  local_8._0_1_ = 0xf;
  FUN_00426e80();
  local_8._0_1_ = 0x10;
  FUN_00426e80();
  local_8._0_1_ = 0x11;
  FUN_00426e80();
  local_8._0_1_ = 0x12;
  FUN_00426e80();
  local_8._0_1_ = 0x13;
  FUN_00426e80();
  local_8._0_1_ = 0x14;
  FUN_00426e80();
  local_8._0_1_ = 0x15;
  FUN_00426e80();
  local_8._0_1_ = 0x16;
  FUN_00426e80();
  local_8 = CONCAT31(local_8._1_3_,0x17);
  local_410 = local_3c4;
  local_404 = game_loop_helper_018d0();
  local_49c = game_loop_helper_018b0();
  for (; local_404 != local_49c; local_404 = local_404 + 0x18) {
    local_3c0 = local_404;
    if ((*(int *)(local_404 + 8) != 2) && (*(int *)(local_404 + 8) != 3)) {
      pbStack_8e4 = *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)
                     (local_404 + 4);
      pfStack_8e8 = (function<void___cdecl(void)> *)0x41b7a6;
      game_loop_helper_cc840();
      pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41b7b2;
      FUN_004274d0();
      pbStack_8e4 = *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)
                     (param_1 + 0xab8);
      pfStack_8e8 = (function<void___cdecl(void)> *)0x41b7c8;
      pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                    FUN_005dfdf0();
      pfStack_8e8 = (function<void___cdecl(void)> *)0x41b7ce;
      cVar1 = destroy<>();
      if (cVar1 != '\0') {
        pbStack_8e4 = *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)
                       (local_3c0 + 4);
        pfStack_8e8 = (function<void___cdecl(void)> *)0x41b7f6;
        iVar2 = game_loop_helper_cc840();
        pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                      (iVar2 + 0x124);
        pfStack_8e8 = (function<void___cdecl(void)> *)0x41b801;
        cVar1 = FUN_00427c60();
        if (cVar1 == '\0') {
          pbStack_8e4 = *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)
                         (local_3c0 + 4);
          pfStack_8e8 = (function<void___cdecl(void)> *)0x41b83d;
          iVar2 = game_loop_helper_cc840();
          pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                        (iVar2 + 0x124);
          pfStack_8e8 = (function<void___cdecl(void)> *)0x41b848;
          cVar1 = FUN_00427c60();
          if (cVar1 == '\0') {
            pbStack_8e4 = *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)
                           (local_3c0 + 4);
            pfStack_8e8 = (function<void___cdecl(void)> *)0x41b884;
            iVar2 = game_loop_helper_cc840();
            pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                          (iVar2 + 0x124);
            pfStack_8e8 = (function<void___cdecl(void)> *)0x41b88f;
            cVar1 = FUN_00427c60();
            if (cVar1 == '\0') {
              pbStack_8e4 = *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)
                             (local_3c0 + 4);
              pfStack_8e8 = (function<void___cdecl(void)> *)0x41b8cb;
              iVar2 = game_loop_helper_cc840();
              pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                            (iVar2 + 0x124);
              pfStack_8e8 = (function<void___cdecl(void)> *)0x41b8d6;
              cVar1 = FUN_00427c60();
              if (cVar1 == '\0') {
                pbStack_8e4 = *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)
                               (local_3c0 + 4);
                pfStack_8e8 = (function<void___cdecl(void)> *)0x41b912;
                iVar2 = game_loop_helper_cc840();
                pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                              (iVar2 + 0x124);
                pfStack_8e8 = (function<void___cdecl(void)> *)0x41b91d;
                cVar1 = FUN_00427c60();
                if (cVar1 == '\0') {
                  pbStack_8e4 = *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **
                                 )(local_3c0 + 4);
                  pfStack_8e8 = (function<void___cdecl(void)> *)0x41b959;
                  iVar2 = game_loop_helper_cc840();
                  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                (iVar2 + 0x124);
                  pfStack_8e8 = (function<void___cdecl(void)> *)0x41b964;
                  cVar1 = FUN_00427c60();
                  if (cVar1 == '\0') {
                    pbStack_8e4 = *(basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                    **)(local_3c0 + 4);
                    pfStack_8e8 = (function<void___cdecl(void)> *)0x41b9a0;
                    iVar2 = game_loop_helper_cc840();
                    pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *
                                  )(iVar2 + 0x124);
                    pfStack_8e8 = (function<void___cdecl(void)> *)0x41b9ab;
                    cVar1 = FUN_00427c60();
                    if (cVar1 == '\0') {
                      pbStack_8e4 = *(basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                      **)(local_3c0 + 4);
                      pfStack_8e8 = (function<void___cdecl(void)> *)0x41b9e7;
                      iVar2 = game_loop_helper_cc840();
                      pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                     *)(iVar2 + 0x124);
                      pfStack_8e8 = (function<void___cdecl(void)> *)0x41b9f2;
                      cVar1 = FUN_00427c60();
                      if (cVar1 == '\0') {
                        pbStack_8e4 = *(basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                        **)(local_3c0 + 4);
                        pfStack_8e8 = (function<void___cdecl(void)> *)0x41ba2b;
                        iVar2 = game_loop_helper_cc840();
                        pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                       *)(iVar2 + 0x124);
                        pfStack_8e8 = (function<void___cdecl(void)> *)0x41ba36;
                        cVar1 = FUN_00427c60();
                        if (cVar1 != '\0') {
                          pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                         *)0x41ba52;
                          FUN_00427520();
                        }
                      }
                      else {
                        pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                       *)0x41ba0e;
                        FUN_00427520();
                      }
                    }
                    else {
                      pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                     *)0x41b9c7;
                      FUN_00427520();
                    }
                  }
                  else {
                    pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *
                                  )0x41b980;
                    FUN_00427520();
                  }
                }
                else {
                  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                0x41b939;
                  FUN_00427520();
                }
              }
              else {
                pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                              0x41b8f2;
                FUN_00427520();
              }
            }
            else {
              pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                            0x41b8ab;
              FUN_00427520();
            }
          }
          else {
            pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                          0x41b864;
            FUN_00427520();
          }
        }
        else {
          pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41b81d;
          FUN_00427520();
        }
      }
    }
  }
  local_6d8 = auStack_8f8;
  apuStack_904[2] = &DAT_00740f74;
  apuStack_904[1] = (undefined *)0x41ba6f;
  local_6dc = FUN_004054a0();
  local_8._0_1_ = 0x18;
  apuStack_904[2] = (undefined *)(local_3c4 + 0xc);
  local_6e0 = (undefined1 *)&iStack_914;
  puStack_918 = &DAT_00740f80;
  puStack_91c = (undefined *)0x41ba98;
  FUN_004054a0();
  puStack_918 = (undefined *)0x41ba9d;
  apuStack_904[1] = (undefined *)FUN_006ce090();
  local_6e4 = (undefined1 *)&puStack_918;
  puStack_91c = &DAT_00740f8c;
  puStack_920 = (undefined *)0x41bac2;
  local_4a0 = apuStack_904[1];
  FUN_004054a0();
  puStack_91c = (undefined *)0x41bac7;
  apuStack_904[0] = (undefined *)FUN_00416080();
  pcStack_908 = (char *)local_3c4;
  puStack_90c = (undefined4 *)local_3bc;
  puStack_910 = param_1;
  local_8._0_1_ = 0x17;
  iStack_914 = 0x41baf2;
  local_4a4 = apuStack_904[0];
  img_path_loader_09();
  local_4ac = 0x5e;
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x6;
  pfStack_8e8 = (function<void___cdecl(void)> *)0x4;
  local_6e8 = apuStack_904 + 1;
  apuStack_904[0] = &DAT_00740f98;
  pcStack_908 = (char *)0x41bb1a;
  FUN_004054a0();
  apuStack_904[0] = (undefined *)0x41bb1f;
  puStack_8ec = (undefined4 *)FUN_006ce090();
  local_6ec = (undefined1 *)apuStack_904;
  pcStack_908 = &DAT_00740fa4;
  puStack_90c = (undefined4 *)0x41bb44;
  local_4a8 = puStack_8ec;
  local_6f0 = FUN_004054a0();
  local_8._0_1_ = 0x19;
  pcStack_908 = (char *)0x0;
  puStack_90c = &local_4ac;
  puStack_910 = (undefined *)0x41bb61;
  puStack_90c = (undefined4 *)game_timing_or_delay_helper();
  local_8._0_1_ = 0x17;
  puStack_910 = (undefined *)0x41bb6b;
  FUN_00622460();
  local_6f4 = auStack_8f8;
  apuStack_904[2] = &DAT_00740fb0;
  apuStack_904[1] = (undefined *)0x41bb85;
  local_6f8 = FUN_004054a0();
  local_8._0_1_ = 0x1a;
  apuStack_904[2] = local_3f0;
  local_6fc = (undefined1 *)&iStack_914;
  puStack_918 = &DAT_00740fbc;
  puStack_91c = (undefined *)0x41bbab;
  FUN_004054a0();
  puStack_918 = (undefined *)0x41bbb0;
  apuStack_904[1] = (undefined *)FUN_006ce090();
  local_700 = (undefined1 *)&puStack_918;
  puStack_91c = &DAT_00740fc8;
  puStack_920 = (undefined *)0x41bbd5;
  local_4b0 = apuStack_904[1];
  FUN_004054a0();
  puStack_91c = (undefined *)0x41bbda;
  apuStack_904[0] = (undefined *)FUN_00416080();
  pcStack_908 = (char *)local_3c4;
  puStack_90c = (undefined4 *)local_3bc;
  puStack_910 = param_1;
  local_8._0_1_ = 0x17;
  iStack_914 = 0x41bc05;
  local_4b4 = apuStack_904[0];
  img_path_loader_09();
  local_4bc = 0x5e;
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x6;
  pfStack_8e8 = (function<void___cdecl(void)> *)0x4;
  local_704 = apuStack_904 + 1;
  apuStack_904[0] = &DAT_00740fd4;
  pcStack_908 = (char *)0x41bc2d;
  FUN_004054a0();
  apuStack_904[0] = (undefined *)0x41bc32;
  puStack_8ec = (undefined4 *)FUN_006ce090();
  local_708 = (undefined1 *)apuStack_904;
  pcStack_908 = &DAT_00740fe0;
  puStack_90c = (undefined4 *)0x41bc57;
  local_4b8 = puStack_8ec;
  local_70c = FUN_004054a0();
  local_8._0_1_ = 0x1b;
  pcStack_908 = (char *)0x0;
  puStack_90c = &local_4bc;
  puStack_910 = (undefined *)0x41bc74;
  puStack_90c = (undefined4 *)game_timing_or_delay_helper();
  local_8._0_1_ = 0x17;
  puStack_910 = (undefined *)0x41bc7e;
  FUN_00622460();
  local_710 = auStack_8f8;
  apuStack_904[2] = &DAT_00740fec;
  apuStack_904[1] = (undefined *)0x41bc98;
  local_714 = FUN_004054a0();
  local_8._0_1_ = 0x1c;
  apuStack_904[2] = (undefined *)(local_3c4 + 0x24);
  local_718 = (undefined1 *)&iStack_914;
  puStack_918 = &DAT_00740ff8;
  puStack_91c = (undefined *)0x41bcc1;
  FUN_004054a0();
  puStack_918 = (undefined *)0x41bcc6;
  apuStack_904[1] = (undefined *)FUN_006ce090();
  local_71c = (undefined1 *)&puStack_918;
  puStack_91c = &DAT_00741004;
  puStack_920 = (undefined *)0x41bceb;
  local_4c0 = apuStack_904[1];
  FUN_004054a0();
  puStack_91c = (undefined *)0x41bcf0;
  apuStack_904[0] = (undefined *)FUN_00416080();
  pcStack_908 = (char *)local_3c4;
  puStack_90c = (undefined4 *)local_3bc;
  puStack_910 = param_1;
  local_8._0_1_ = 0x17;
  iStack_914 = 0x41bd1b;
  local_4c4 = apuStack_904[0];
  img_path_loader_09();
  local_4cc = 0x5e;
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x6;
  pfStack_8e8 = (function<void___cdecl(void)> *)0x4;
  local_720 = apuStack_904 + 1;
  apuStack_904[0] = &DAT_00741010;
  pcStack_908 = (char *)0x41bd43;
  FUN_004054a0();
  apuStack_904[0] = (undefined *)0x41bd48;
  puStack_8ec = (undefined4 *)FUN_006ce090();
  local_724 = (undefined1 *)apuStack_904;
  pcStack_908 = &DAT_0074101c;
  puStack_90c = (undefined4 *)0x41bd6d;
  local_4c8 = puStack_8ec;
  local_728 = FUN_004054a0();
  local_8._0_1_ = 0x1d;
  pcStack_908 = (char *)0x0;
  puStack_90c = &local_4cc;
  puStack_910 = (undefined *)0x41bd8a;
  puStack_90c = (undefined4 *)game_timing_or_delay_helper();
  local_8._0_1_ = 0x17;
  puStack_910 = (undefined *)0x41bd94;
  FUN_00622460();
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x1;
  local_72c = apuStack_904 + 2;
  apuStack_904[1] = &DAT_00741028;
  apuStack_904[0] = (undefined *)0x41bdb0;
  FUN_004054a0();
  apuStack_904[1] = (undefined *)0x41bdb5;
  pfStack_8e8 = (function<void___cdecl(void)> *)FUN_00416310();
  local_730 = apuStack_904 + 1;
  apuStack_904[0] = &DAT_00741038;
  pcStack_908 = (char *)0x41bdda;
  local_4d0 = pfStack_8e8;
  local_734 = FUN_004054a0();
  local_8._0_1_ = 0x1e;
  apuStack_904[0] = local_620;
  local_738 = (undefined1 *)&puStack_91c;
  puStack_920 = &DAT_00741048;
  puStack_924 = (undefined *)0x41be00;
  FUN_004054a0();
  puStack_920 = (undefined *)0x41be05;
  pcStack_908 = (char *)FUN_006ce090();
  local_73c = (undefined1 *)&puStack_920;
  puStack_924 = &DAT_00741058;
  uStack_928 = 0x41be2a;
  local_4d4 = pcStack_908;
  FUN_004054a0();
  puStack_924 = (undefined *)0x41be2f;
  puStack_90c = (undefined4 *)FUN_00416080();
  puStack_910 = (undefined *)local_3c4;
  iStack_914 = local_3bc;
  puStack_918 = param_1;
  local_8._0_1_ = 0x17;
  puStack_91c = (undefined *)0x41be5a;
  local_4d8 = puStack_90c;
  img_path_loader_08();
  local_740 = auStack_8f8;
  apuStack_904[2] = &DAT_00741068;
  apuStack_904[1] = (undefined *)0x41be74;
  FUN_004054a0();
  apuStack_904[2] = (undefined *)0x41be79;
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)FUN_006ce090();
  local_744 = apuStack_904 + 2;
  apuStack_904[1] = &DAT_00741078;
  apuStack_904[0] = (undefined *)0x41be9e;
  local_4dc = pbStack_8e4;
  FUN_004054a0();
  apuStack_904[1] = (undefined *)0x1;
  apuStack_904[0] = (undefined *)0x41bea5;
  FUN_00417730();
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x1;
  local_748 = apuStack_904 + 2;
  apuStack_904[1] = &DAT_00741088;
  apuStack_904[0] = (undefined *)0x41bec1;
  FUN_004054a0();
  apuStack_904[1] = (undefined *)0x41bec6;
  pfStack_8e8 = (function<void___cdecl(void)> *)FUN_00416310();
  local_74c = apuStack_904 + 1;
  apuStack_904[0] = &DAT_00741098;
  pcStack_908 = (char *)0x41beeb;
  local_4e0 = pfStack_8e8;
  local_750 = FUN_004054a0();
  local_8._0_1_ = 0x1f;
  apuStack_904[0] = local_614;
  local_754 = (undefined1 *)&puStack_91c;
  puStack_920 = &DAT_007410a8;
  puStack_924 = (undefined *)0x41bf11;
  FUN_004054a0();
  puStack_920 = (undefined *)0x41bf16;
  pcStack_908 = (char *)FUN_006ce090();
  local_758 = (undefined1 *)&puStack_920;
  puStack_924 = &DAT_007410b8;
  uStack_928 = 0x41bf3b;
  local_4e4 = pcStack_908;
  FUN_004054a0();
  puStack_924 = (undefined *)0x41bf40;
  puStack_90c = (undefined4 *)FUN_00416080();
  puStack_910 = (undefined *)local_3c4;
  iStack_914 = local_3bc;
  puStack_918 = param_1;
  local_8._0_1_ = 0x17;
  puStack_91c = (undefined *)0x41bf6b;
  local_4e8 = puStack_90c;
  img_path_loader_08();
  local_75c = auStack_8f8;
  apuStack_904[2] = &DAT_007410c8;
  apuStack_904[1] = (undefined *)0x41bf85;
  FUN_004054a0();
  apuStack_904[2] = (undefined *)0x41bf8a;
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)FUN_006ce090();
  local_760 = apuStack_904 + 2;
  apuStack_904[1] = &DAT_007410d8;
  apuStack_904[0] = (undefined *)0x41bfaf;
  local_4ec = pbStack_8e4;
  FUN_004054a0();
  apuStack_904[1] = (undefined *)0x0;
  apuStack_904[0] = (undefined *)0x41bfb6;
  FUN_00417730();
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x1;
  local_764 = apuStack_904 + 2;
  apuStack_904[1] = &DAT_007410e8;
  apuStack_904[0] = (undefined *)0x41bfd2;
  FUN_004054a0();
  apuStack_904[1] = (undefined *)0x41bfd7;
  pfStack_8e8 = (function<void___cdecl(void)> *)FUN_00416310();
  local_768 = apuStack_904 + 1;
  apuStack_904[0] = &DAT_007410f8;
  pcStack_908 = (char *)0x41bffc;
  local_4f0 = pfStack_8e8;
  local_76c = FUN_004054a0();
  local_8._0_1_ = 0x20;
  apuStack_904[0] = local_668;
  local_770 = (undefined1 *)&puStack_91c;
  puStack_920 = &DAT_00741108;
  puStack_924 = (undefined *)0x41c022;
  FUN_004054a0();
  puStack_920 = (undefined *)0x41c027;
  pcStack_908 = (char *)FUN_006ce090();
  local_774 = (undefined1 *)&puStack_920;
  puStack_924 = &DAT_00741118;
  uStack_928 = 0x41c04c;
  local_4f4 = pcStack_908;
  FUN_004054a0();
  puStack_924 = (undefined *)0x41c051;
  puStack_90c = (undefined4 *)FUN_00416080();
  puStack_910 = (undefined *)local_3c4;
  iStack_914 = local_3bc;
  puStack_918 = param_1;
  local_8._0_1_ = 0x17;
  puStack_91c = (undefined *)0x41c07c;
  local_4f8 = puStack_90c;
  img_path_loader_08();
  local_778 = auStack_8f8;
  apuStack_904[2] = &DAT_00741128;
  apuStack_904[1] = (undefined *)0x41c096;
  FUN_004054a0();
  apuStack_904[2] = (undefined *)0x41c09b;
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)FUN_006ce090();
  local_77c = apuStack_904 + 2;
  apuStack_904[1] = &DAT_00741138;
  apuStack_904[0] = (undefined *)0x41c0c0;
  local_4fc = pbStack_8e4;
  FUN_004054a0();
  apuStack_904[1] = (undefined *)0x0;
  apuStack_904[0] = (undefined *)0x41c0c7;
  FUN_00417730();
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x1;
  local_780 = apuStack_904 + 2;
  apuStack_904[1] = &DAT_00741148;
  apuStack_904[0] = (undefined *)0x41c0e3;
  FUN_004054a0();
  apuStack_904[1] = (undefined *)0x41c0e8;
  pfStack_8e8 = (function<void___cdecl(void)> *)FUN_00416310();
  local_784 = apuStack_904 + 1;
  apuStack_904[0] = &DAT_00741158;
  pcStack_908 = (char *)0x41c10d;
  local_500 = pfStack_8e8;
  local_788 = FUN_004054a0();
  local_8._0_1_ = 0x21;
  apuStack_904[0] = local_65c;
  local_78c = (undefined1 *)&puStack_91c;
  puStack_920 = &DAT_00741168;
  puStack_924 = (undefined *)0x41c133;
  FUN_004054a0();
  puStack_920 = (undefined *)0x41c138;
  pcStack_908 = (char *)FUN_006ce090();
  local_830 = (undefined1 *)&puStack_920;
  puStack_924 = &DAT_00741178;
  uStack_928 = 0x41c15d;
  local_504 = pcStack_908;
  FUN_004054a0();
  puStack_924 = (undefined *)0x41c162;
  puStack_90c = (undefined4 *)FUN_00416080();
  puStack_910 = (undefined *)local_3c4;
  iStack_914 = local_3bc;
  puStack_918 = param_1;
  local_8._0_1_ = 0x17;
  puStack_91c = (undefined *)0x41c18d;
  local_508 = puStack_90c;
  img_path_loader_08();
  local_794 = auStack_8f8;
  apuStack_904[2] = &DAT_00741188;
  apuStack_904[1] = (undefined *)0x41c1a7;
  FUN_004054a0();
  apuStack_904[2] = (undefined *)0x41c1ac;
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)FUN_006ce090();
  local_798 = apuStack_904 + 2;
  apuStack_904[1] = &DAT_00741198;
  apuStack_904[0] = (undefined *)0x41c1d1;
  local_50c = pbStack_8e4;
  FUN_004054a0();
  apuStack_904[1] = (undefined *)0x0;
  apuStack_904[0] = (undefined *)0x41c1d8;
  FUN_00417730();
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x1;
  local_79c = apuStack_904 + 2;
  apuStack_904[1] = &DAT_007411a8;
  apuStack_904[0] = (undefined *)0x41c1f4;
  FUN_004054a0();
  apuStack_904[1] = (undefined *)0x41c1f9;
  pfStack_8e8 = (function<void___cdecl(void)> *)FUN_00416310();
  local_7a0 = apuStack_904 + 1;
  apuStack_904[0] = &DAT_007411b8;
  pcStack_908 = (char *)0x41c21e;
  local_510 = pfStack_8e8;
  local_7a4 = FUN_004054a0();
  local_8._0_1_ = 0x22;
  apuStack_904[0] = local_650;
  local_7a8 = (undefined1 *)&puStack_91c;
  puStack_920 = &DAT_007411c8;
  puStack_924 = (undefined *)0x41c244;
  FUN_004054a0();
  puStack_920 = (undefined *)0x41c249;
  pcStack_908 = (char *)FUN_006ce090();
  local_7ac = (undefined1 *)&puStack_920;
  puStack_924 = &DAT_007411d8;
  uStack_928 = 0x41c26e;
  local_514 = pcStack_908;
  FUN_004054a0();
  puStack_924 = (undefined *)0x41c273;
  puStack_90c = (undefined4 *)FUN_00416080();
  puStack_910 = (undefined *)local_3c4;
  iStack_914 = local_3bc;
  puStack_918 = param_1;
  local_8._0_1_ = 0x17;
  puStack_91c = (undefined *)0x41c29e;
  local_518 = puStack_90c;
  img_path_loader_08();
  local_7b0 = auStack_8f8;
  apuStack_904[2] = &DAT_007411e8;
  apuStack_904[1] = (undefined *)0x41c2b8;
  FUN_004054a0();
  apuStack_904[2] = (undefined *)0x41c2bd;
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)FUN_006ce090();
  local_7b4 = apuStack_904 + 2;
  apuStack_904[1] = &DAT_007411f8;
  apuStack_904[0] = (undefined *)0x41c2e2;
  local_51c = pbStack_8e4;
  FUN_004054a0();
  apuStack_904[1] = (undefined *)0x0;
  apuStack_904[0] = (undefined *)0x41c2e9;
  FUN_00417730();
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x1;
  local_7b8 = apuStack_904 + 2;
  apuStack_904[1] = &DAT_00741208;
  apuStack_904[0] = (undefined *)0x41c305;
  FUN_004054a0();
  apuStack_904[1] = (undefined *)0x41c30a;
  pfStack_8e8 = (function<void___cdecl(void)> *)FUN_00416310();
  local_7bc = apuStack_904 + 1;
  apuStack_904[0] = &DAT_00741218;
  pcStack_908 = (char *)0x41c32f;
  local_520 = pfStack_8e8;
  local_7c0 = FUN_004054a0();
  local_8._0_1_ = 0x23;
  apuStack_904[0] = local_644;
  local_7c4 = (undefined1 *)&puStack_91c;
  puStack_920 = &DAT_00741228;
  puStack_924 = (undefined *)0x41c355;
  FUN_004054a0();
  puStack_920 = (undefined *)0x41c35a;
  pcStack_908 = (char *)FUN_006ce090();
  local_7c8 = (undefined1 *)&puStack_920;
  puStack_924 = &DAT_00741238;
  uStack_928 = 0x41c37f;
  local_524 = pcStack_908;
  FUN_004054a0();
  puStack_924 = (undefined *)0x41c384;
  puStack_90c = (undefined4 *)FUN_00416080();
  puStack_910 = (undefined *)local_3c4;
  iStack_914 = local_3bc;
  puStack_918 = param_1;
  local_8._0_1_ = 0x17;
  puStack_91c = (undefined *)0x41c3af;
  local_528 = puStack_90c;
  img_path_loader_08();
  local_7cc = auStack_8f8;
  apuStack_904[2] = &DAT_00741248;
  apuStack_904[1] = (undefined *)0x41c3c9;
  FUN_004054a0();
  apuStack_904[2] = (undefined *)0x41c3ce;
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)FUN_006ce090();
  local_7d0 = apuStack_904 + 2;
  apuStack_904[1] = &DAT_00741258;
  apuStack_904[0] = (undefined *)0x41c3f3;
  local_52c = pbStack_8e4;
  FUN_004054a0();
  apuStack_904[1] = (undefined *)0x0;
  apuStack_904[0] = (undefined *)0x41c3fa;
  FUN_00417730();
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x1;
  local_7d4 = apuStack_904 + 2;
  apuStack_904[1] = &DAT_00741268;
  apuStack_904[0] = (undefined *)0x41c416;
  FUN_004054a0();
  apuStack_904[1] = (undefined *)0x41c41b;
  pfStack_8e8 = (function<void___cdecl(void)> *)FUN_00416310();
  local_7d8 = apuStack_904 + 1;
  apuStack_904[0] = &DAT_00741278;
  pcStack_908 = (char *)0x41c440;
  local_530 = pfStack_8e8;
  local_7dc = FUN_004054a0();
  local_8._0_1_ = 0x24;
  apuStack_904[0] = local_674;
  local_7e0 = (undefined1 *)&puStack_91c;
  puStack_920 = &DAT_00741288;
  puStack_924 = (undefined *)0x41c466;
  FUN_004054a0();
  puStack_920 = (undefined *)0x41c46b;
  pcStack_908 = (char *)FUN_006ce090();
  local_7e4 = (undefined1 *)&puStack_920;
  puStack_924 = &DAT_00741298;
  uStack_928 = 0x41c490;
  local_534 = pcStack_908;
  FUN_004054a0();
  puStack_924 = (undefined *)0x41c495;
  puStack_90c = (undefined4 *)FUN_00416080();
  puStack_910 = (undefined *)local_3c4;
  iStack_914 = local_3bc;
  puStack_918 = param_1;
  local_8._0_1_ = 0x17;
  puStack_91c = (undefined *)0x41c4c0;
  local_538 = puStack_90c;
  img_path_loader_08();
  local_7e8 = auStack_8f8;
  apuStack_904[2] = &DAT_007412a8;
  apuStack_904[1] = (undefined *)0x41c4da;
  FUN_004054a0();
  apuStack_904[2] = (undefined *)0x41c4df;
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)FUN_006ce090();
  local_7ec = apuStack_904 + 2;
  apuStack_904[1] = &DAT_007412b8;
  apuStack_904[0] = (undefined *)0x41c504;
  local_53c = pbStack_8e4;
  FUN_004054a0();
  apuStack_904[1] = (undefined *)0x0;
  apuStack_904[0] = (undefined *)0x41c50b;
  FUN_00417730();
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x1;
  local_7f0 = apuStack_904 + 2;
  apuStack_904[1] = &DAT_007412c8;
  apuStack_904[0] = (undefined *)0x41c527;
  FUN_004054a0();
  apuStack_904[1] = (undefined *)0x41c52c;
  pfStack_8e8 = (function<void___cdecl(void)> *)FUN_00416310();
  local_7f4 = apuStack_904 + 1;
  apuStack_904[0] = &DAT_007412d4;
  pcStack_908 = (char *)0x41c551;
  local_540 = pfStack_8e8;
  local_7f8 = FUN_004054a0();
  local_8._0_1_ = 0x25;
  apuStack_904[0] = local_62c;
  local_7fc = (undefined1 *)&puStack_91c;
  puStack_920 = &DAT_007412e0;
  puStack_924 = (undefined *)0x41c577;
  FUN_004054a0();
  puStack_920 = (undefined *)0x41c57c;
  pcStack_908 = (char *)FUN_006ce090();
  local_800 = (undefined1 *)&puStack_920;
  puStack_924 = &DAT_007412ec;
  uStack_928 = 0x41c5a1;
  local_544 = pcStack_908;
  FUN_004054a0();
  puStack_924 = (undefined *)0x41c5a6;
  puStack_90c = (undefined4 *)FUN_00416080();
  puStack_910 = (undefined *)local_3c4;
  iStack_914 = local_3bc;
  puStack_918 = param_1;
  local_8._0_1_ = 0x17;
  puStack_91c = (undefined *)0x41c5d1;
  local_548 = puStack_90c;
  img_path_loader_08();
  local_804 = auStack_8f8;
  apuStack_904[2] = &DAT_007412f8;
  apuStack_904[1] = (undefined *)0x41c5eb;
  FUN_004054a0();
  apuStack_904[2] = (undefined *)0x41c5f0;
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)FUN_006ce090();
  local_808 = apuStack_904 + 2;
  apuStack_904[1] = &DAT_00741304;
  apuStack_904[0] = (undefined *)0x41c615;
  local_54c = pbStack_8e4;
  FUN_004054a0();
  apuStack_904[1] = (undefined *)0x0;
  apuStack_904[0] = (undefined *)0x41c61c;
  FUN_00417730();
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x1;
  local_80c = apuStack_904 + 2;
  apuStack_904[1] = &DAT_00741310;
  apuStack_904[0] = (undefined *)0x41c638;
  FUN_004054a0();
  apuStack_904[1] = (undefined *)0x41c63d;
  pfStack_8e8 = (function<void___cdecl(void)> *)FUN_00416310();
  local_810 = apuStack_904 + 1;
  apuStack_904[0] = &DAT_00741320;
  pcStack_908 = (char *)0x41c662;
  local_550 = pfStack_8e8;
  local_814 = FUN_004054a0();
  local_8._0_1_ = 0x26;
  apuStack_904[0] = local_638;
  local_818 = (undefined1 *)&puStack_91c;
  puStack_920 = &DAT_00741330;
  puStack_924 = (undefined *)0x41c688;
  FUN_004054a0();
  puStack_920 = (undefined *)0x41c68d;
  pcStack_908 = (char *)FUN_006ce090();
  local_81c = (undefined1 *)&puStack_920;
  puStack_924 = &DAT_00741340;
  uStack_928 = 0x41c6b2;
  local_554 = pcStack_908;
  FUN_004054a0();
  puStack_924 = (undefined *)0x41c6b7;
  puStack_90c = (undefined4 *)FUN_00416080();
  puStack_910 = (undefined *)local_3c4;
  iStack_914 = local_3bc;
  puStack_918 = param_1;
  local_8._0_1_ = 0x17;
  puStack_91c = (undefined *)0x41c6e2;
  local_558 = puStack_90c;
  img_path_loader_08();
  local_820 = auStack_8f8;
  apuStack_904[2] = &DAT_00741350;
  apuStack_904[1] = (undefined *)0x41c6fc;
  FUN_004054a0();
  apuStack_904[2] = (undefined *)0x41c701;
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)FUN_006ce090();
  local_824 = apuStack_904 + 2;
  apuStack_904[1] = &DAT_00741360;
  apuStack_904[0] = (undefined *)0x41c726;
  local_55c = pbStack_8e4;
  FUN_004054a0();
  apuStack_904[1] = (undefined *)0x0;
  apuStack_904[0] = (undefined *)0x41c72d;
  FUN_00417730();
  local_560 = 0x5e;
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41c74b;
  game_timing_or_delay_helper();
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0xfb;
  pfStack_8e8 = (function<void___cdecl(void)> *)0x18b;
  puStack_8ec = (undefined4 *)0x1;
  local_828 = (undefined1 *)apuStack_904;
  pcStack_908 = "sprite/interface/cashshop/cashshopimg.img";
  puStack_90c = (undefined4 *)0x41c76d;
  local_82c = FUN_004054a0();
  local_8._0_1_ = 0x27;
  puStack_920 = &DAT_0074139c;
  puStack_924 = (undefined *)0x41c78c;
  local_834 = FUN_004054a0();
  local_8._0_1_ = 0x28;
  puStack_920 = (undefined *)0x5a;
  local_838 = auStack_938;
  FUN_004054a0(&DAT_007413b8);
  local_8._0_1_ = 0x17;
  local_564 = FUN_00661cc0(0,0);
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41c7e2;
  local_3bc = local_564;
  iVar2 = FUN_0040d680();
  *(undefined4 *)(iVar2 + 0x24) = 0xfffffe75;
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41c7fc;
  iVar2 = FUN_0040d680();
  *(undefined4 *)(iVar2 + 0x28) = 0xffffff05;
  FUN_0040b110();
  local_8._0_1_ = 0x29;
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41c822;
  local_570 = FUN_004054a0();
  local_8._0_1_ = 0x2a;
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_104;
  pfStack_8e8 = (function<void___cdecl(void)> *)0x41c84e;
  local_568 = local_570;
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)FUN_004c7c70();
  local_8._0_1_ = 0x2b;
  pfStack_8e8 = local_ec;
  puStack_8ec = (undefined4 *)0x41c881;
  local_574 = pbStack_8e4;
  local_56c = pbStack_8e4;
  local_578 = FUN_00405cf0();
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41c89c;
  FUN_004053e0();
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_ec);
  local_8._0_1_ = 0x2a;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_104);
  local_8._0_1_ = 0x29;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_11c);
  local_d0 = 0xce;
  local_cc = 0x70;
  local_ac = 2;
  local_c8 = 0xffe6c89c;
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41c906;
  FUN_0040d310();
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41c917;
  local_5d0 = FUN_004054a0();
  local_8._0_1_ = 0x2c;
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_14c;
  pfStack_8e8 = (function<void___cdecl(void)> *)0x41c943;
  local_57c = local_5d0;
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)FUN_004c7c70();
  local_8._0_1_ = 0x2d;
  pfStack_8e8 = local_134;
  puStack_8ec = (undefined4 *)0x41c976;
  local_588 = pbStack_8e4;
  local_580 = pbStack_8e4;
  local_58c = FUN_00405cf0();
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41c991;
  FUN_004053e0();
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_134);
  local_8._0_1_ = 0x2c;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_14c);
  local_8._0_1_ = 0x29;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_164);
  local_d0 = 0xce;
  local_cc = 0x8b;
  local_ac = 2;
  local_c8 = 0xffe6c89c;
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41c9fb;
  FUN_0040d310();
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41ca0c;
  local_598 = FUN_004054a0();
  local_8._0_1_ = 0x2e;
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_194;
  pfStack_8e8 = (function<void___cdecl(void)> *)0x41ca38;
  local_590 = local_598;
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)FUN_004c7c70();
  local_8._0_1_ = 0x2f;
  pfStack_8e8 = local_17c;
  puStack_8ec = (undefined4 *)0x41ca6b;
  local_59c = pbStack_8e4;
  local_594 = pbStack_8e4;
  local_5a0 = FUN_00405cf0();
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41ca86;
  FUN_004053e0();
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_17c);
  local_8._0_1_ = 0x2e;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_194);
  local_8._0_1_ = 0x29;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_1ac);
  local_d0 = 0x5c;
  local_cc = 0x70;
  local_ac = 2;
  local_c8 = 0xffe6c89c;
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41caf0;
  FUN_0040d310();
  pbStack_8e4 = local_2c;
  pfStack_8e8 = (function<void___cdecl(void)> *)0x41cb03;
  FUN_0040a850();
  local_8 = CONCAT31(local_8._1_3_,0x30);
  local_5a4 = FUN_00410b30();
  local_5a4 = 4 - local_5a4;
  for (local_40c = 0; local_40c < local_5a4; local_40c = local_40c + 1) {
    pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x30;
    pfStack_8e8 = local_1c4;
    puStack_8ec = (undefined4 *)0x41cb5a;
    local_5a8 = FUN_00427db0();
    pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41cb72;
    FUN_004053e0();
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_1c4);
  }
  for (local_400 = 0; local_400 < 4; local_400 = local_400 + 1) {
    FUN_0040ac90();
    local_8._0_1_ = 0x31;
    FUN_0040aa90();
    local_8._0_1_ = 0x32;
    pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41cbd5;
    pcVar5 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator[]
                       (local_2c,local_400);
    local_3f1 = *pcVar5;
    local_5ac = local_3f1 + -0x30;
    pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41cbfd;
    FUN_004053a0();
    local_204 = (char)local_5ac + '\x1a';
    local_200 = local_400 * 0xb + 0x2f;
    local_1fc = 0x8a;
    pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41cc38;
    FUN_00427660();
    FUN_00414fc0();
    local_328 = 0;
    local_32c = 1;
    pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41cc6f;
    FUN_00405250();
    FUN_004150a0();
    local_8._0_1_ = 0x31;
    FUN_00407a80();
    local_8 = CONCAT31(local_8._1_3_,0x30);
    FUN_00403a10();
  }
  local_5b0 = 0x5e;
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41ccb9;
  game_timing_or_delay_helper();
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x19d;
  pfStack_8e8 = (function<void___cdecl(void)> *)0x195;
  puStack_8ec = (undefined4 *)0x23;
  local_83c = (undefined1 *)apuStack_904;
  pcStack_908 = "sprite/interface/cashshop/cashshopbtn.img";
  puStack_90c = (undefined4 *)0x41ccdb;
  local_840 = FUN_004054a0();
  local_8._0_1_ = 0x33;
  local_844 = (undefined1 *)&puStack_91c;
  puStack_920 = &DAT_00741430;
  puStack_924 = (undefined *)0x41ccfa;
  local_848 = FUN_004054a0();
  local_8._0_1_ = 0x34;
  puStack_920 = (undefined *)0x50;
  local_84c = auStack_938;
  FUN_004054a0(&DAT_0074144c);
  local_8._0_1_ = 0x30;
  local_5b4 = FUN_00661cc0(0,2);
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41cd53;
  local_3bc = local_5b4;
  FUN_004053a0();
  *(undefined4 *)(local_3bc + 0x984) = 0x271e;
  local_5b8 = 0x5e;
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41cd7e;
  game_timing_or_delay_helper();
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x185;
  pfStack_8e8 = (function<void___cdecl(void)> *)0x258;
  puStack_8ec = (undefined4 *)0x21;
  local_850 = (undefined1 *)apuStack_904;
  pcStack_908 = "sprite/interface/cashshop/cashshopbtn.img";
  puStack_90c = (undefined4 *)0x41cda0;
  local_854 = FUN_004054a0();
  local_8._0_1_ = 0x35;
  local_858 = (undefined1 *)&puStack_91c;
  puStack_920 = &DAT_00741494;
  puStack_924 = (undefined *)0x41cdbf;
  local_85c = FUN_004054a0();
  local_8._0_1_ = 0x36;
  puStack_920 = (undefined *)0x46;
  local_860 = auStack_938;
  FUN_004054a0(&DAT_007414b4);
  local_8 = CONCAT31(local_8._1_3_,0x30);
  local_5bc = FUN_00661cc0(0,1);
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x41ce18;
  local_3bc = local_5bc;
  FUN_004053a0();
  *(undefined4 *)(local_3bc + 0x984) = 0x271f;
  local_5c0 = 0x5e;
  local_5c4 = 0x5e;
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_864;
  pfStack_8e8 = (function<void___cdecl(void)> *)&local_5c0;
  puStack_8ec = (undefined4 *)0x41ce59;
  game_timing_or_delay_helper();
  pfStack_8e8 = (function<void___cdecl(void)> *)0x41ce60;
  puVar3 = (undefined4 *)FUN_00402170();
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)*puVar3;
  pfStack_8e8 = (function<void___cdecl(void)> *)local_868;
  puStack_8ec = &local_5c4;
  uStack_8f0 = 0x41ce7b;
  game_timing_or_delay_helper();
  puStack_8ec = (undefined4 *)0x41ce82;
  puVar3 = (undefined4 *)FUN_004021b0();
  pfStack_8e8 = (function<void___cdecl(void)> *)*puVar3;
  puStack_8ec = (undefined4 *)0x41ce8a;
  FUN_00405d30();
  pbStack_8e4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)DAT_007ca764;
  puVar3 = &DAT_007ca70c;
  ppuVar6 = apuStack_904;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *ppuVar6 = (undefined *)*puVar3;
    puVar3 = puVar3 + 1;
    ppuVar6 = ppuVar6 + 1;
  }
  pcStack_908 = (char *)0x41ceb0;
  FUN_0065e180();
  local_8._0_1_ = 0x29;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)local_2c);
  local_8._0_1_ = 0x17;
  FUN_0040c940();
  local_8._0_1_ = 0x16;
  FUN_00405350();
  local_8._0_1_ = 0x15;
  FUN_00405350();
  local_8._0_1_ = 0x14;
  FUN_00405350();
  local_8._0_1_ = 0x13;
  FUN_00405350();
  local_8._0_1_ = 0x12;
  FUN_00405350();
  local_8._0_1_ = 0x11;
  FUN_00405350();
  local_8._0_1_ = 0x10;
  FUN_00405350();
  local_8._0_1_ = 0xf;
  FUN_00405350();
  local_8._0_1_ = 6;
  FUN_00405350();
  local_8._0_1_ = 3;
  FUN_00407a80();
  local_8 = (uint)local_8._1_3_ << 8;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)local_44);
  local_8 = 0xffffffff;
  FUN_00427120();
  ExceptionList = local_10;
  return;
}


/* ==== 0042ea60  img_path_loader_11  size=1134 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void img_path_loader_11(char param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined1 auStack_cc [16];
  undefined4 uStack_bc;
  function<void___cdecl(void)> *pfStack_b8;
  int *piStack_b4;
  uint uStack_b0;
  undefined4 local_ac;
  undefined1 *local_a8;
  undefined4 local_a4;
  undefined1 *local_a0;
  undefined1 local_9c [4];
  undefined1 local_98 [4];
  undefined4 local_94;
  undefined1 *local_90;
  undefined4 local_8c;
  undefined1 *local_88;
  undefined1 local_84 [4];
  undefined1 local_80 [4];
  undefined4 local_7c;
  undefined4 local_78;
  int local_70;
  int local_6c;
  undefined4 local_68;
  int local_64;
  int local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  int local_4c;
  int local_48;
  function<void___cdecl(void)> local_44 [24];
  function<void___cdecl(void)> local_2c [24];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070e351;
  local_10 = ExceptionList;
  uStack_b0 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_78 = 0x247;
  local_7c = 0xce;
  local_14 = uStack_b0;
  if (param_1 != '\0') {
    piStack_b4 = &local_50;
    pfStack_b8 = (function<void___cdecl(void)> *)0x42eab1;
    FUN_00516d20();
    pfStack_b8 = (function<void___cdecl(void)> *)0x42eab8;
    FUN_0044e0f0();
    while( true ) {
      piStack_b4 = (int *)local_80;
      pfStack_b8 = (function<void___cdecl(void)> *)0x42eac2;
      FUN_00516d20();
      pfStack_b8 = (function<void___cdecl(void)> *)0x42eac9;
      piStack_b4 = (int *)FUN_0040d9a0();
      pfStack_b8 = (function<void___cdecl(void)> *)0x42ead2;
      cVar1 = FUN_0040d2d0();
      if (cVar1 == '\0') break;
      piStack_b4 = (int *)&DAT_007429a0;
      pfStack_b8 = (function<void___cdecl(void)> *)0x42eae6;
      piVar2 = (int *)FUN_0042a580();
      pfStack_b8 = (function<void___cdecl(void)> *)(*piVar2 + 0xa4);
      uStack_bc = 0x42eaf4;
      cVar1 = FUN_00427c60();
      if (cVar1 == '\0') {
        piStack_b4 = (int *)0x42eb3d;
        FUN_0042a560();
      }
      else {
        piStack_b4 = (int *)0x42eb06;
        piStack_b4 = (int *)FUN_0042a580();
        pfStack_b8 = (function<void___cdecl(void)> *)0x42eb0c;
        FUN_004d1b30();
        pfStack_b8 = (function<void___cdecl(void)> *)0x42eb13;
        FUN_00517ee0();
        local_5c = local_50;
        piStack_b4 = (int *)local_50;
        pfStack_b8 = (function<void___cdecl(void)> *)local_84;
        uStack_bc = 0x42eb27;
        FUN_00516d20();
        uStack_bc = 0x42eb2e;
        puVar3 = (undefined4 *)FUN_0044e0a0();
        local_50 = *puVar3;
      }
    }
    piStack_b4 = (int *)0x7429ac;
    pfStack_b8 = (function<void___cdecl(void)> *)0x42eb50;
    FUN_004054a0();
    local_8 = 0;
    piStack_b4 = (int *)0x64;
    pfStack_b8 = local_2c;
    uStack_bc = 0x42eb62;
    game_loop_helper_e9240();
    uStack_bc = 0x42eb69;
    local_48 = FUN_005b6ee0();
    local_8 = 0xffffffff;
    piStack_b4 = (int *)0x42eb7b;
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_2c);
    piStack_b4 = (int *)&DAT_007429c8;
    pfStack_b8 = (function<void___cdecl(void)> *)0x42eb8f;
    FUN_004053a0();
    *(undefined4 *)(local_48 + 0x84) = 0;
    *(undefined1 *)(local_48 + 0x55) = 1;
    *(undefined4 *)(local_48 + 0x98) = 1000;
    piStack_b4 = (int *)0x64;
    local_88 = auStack_cc;
    local_8c = FUN_004054a0("sprite/common/etc/combo.img");
    local_8 = 1;
    FUN_004bcf00();
    local_8 = 0xffffffff;
    local_60 = FUN_004b8ca0();
    *(int *)(local_48 + 0x40) = 0x247 - *(int *)(local_60 + 0xc) / 2;
    piStack_b4 = (int *)0x64;
    local_90 = auStack_cc;
    local_94 = FUN_004054a0("sprite/common/etc/combo.img");
    local_8 = 2;
    FUN_004bcf00();
    local_8 = 0xffffffff;
    local_64 = FUN_004b8ca0();
    *(int *)(local_48 + 0x44) = 0xce - *(int *)(local_64 + 0x10) / 2;
    *(undefined4 *)(local_48 + 0x110) = 3;
    *(undefined4 *)(local_48 + 0x114) = 10000;
    piStack_b4 = &local_48;
    pfStack_b8 = (function<void___cdecl(void)> *)0x42ec77;
    FUN_00516d20();
    pfStack_b8 = (function<void___cdecl(void)> *)0x42ec7e;
    FUN_0044de80();
  }
  piStack_b4 = (int *)0x42ec84;
  iVar4 = game_get_player_or_session_blob();
  if ((*(char *)(iVar4 + 0xdb8) != '\0') && (param_2 != 0)) {
    local_58 = 0xffffffff;
    if (param_2 == 2) {
      local_58 = 0x87;
    }
    else if (param_2 == 3) {
      local_58 = 0x89;
    }
    else if (param_2 == 4) {
      local_58 = 0x8b;
    }
    piStack_b4 = &local_54;
    pfStack_b8 = (function<void___cdecl(void)> *)0x42ecd9;
    FUN_00516d20();
    pfStack_b8 = (function<void___cdecl(void)> *)0x42ece0;
    FUN_0044e0f0();
    while( true ) {
      piStack_b4 = (int *)local_98;
      pfStack_b8 = (function<void___cdecl(void)> *)0x42eced;
      FUN_00516d20();
      pfStack_b8 = (function<void___cdecl(void)> *)0x42ecf4;
      piStack_b4 = (int *)FUN_0040d9a0();
      pfStack_b8 = (function<void___cdecl(void)> *)0x42ecfd;
      cVar1 = FUN_0040d2d0();
      if (cVar1 == '\0') break;
      piStack_b4 = (int *)&DAT_00742a0c;
      pfStack_b8 = (function<void___cdecl(void)> *)0x42ed11;
      piVar2 = (int *)FUN_0042a580();
      pfStack_b8 = (function<void___cdecl(void)> *)(*piVar2 + 0xa4);
      uStack_bc = 0x42ed1f;
      cVar1 = FUN_00427c60();
      if (cVar1 == '\0') {
        piStack_b4 = (int *)0x42ed6b;
        FUN_0042a560();
      }
      else {
        piStack_b4 = (int *)0x42ed31;
        piStack_b4 = (int *)FUN_0042a580();
        pfStack_b8 = (function<void___cdecl(void)> *)0x42ed37;
        FUN_004d1b30();
        pfStack_b8 = (function<void___cdecl(void)> *)0x42ed3e;
        FUN_00517ee0();
        local_68 = local_54;
        piStack_b4 = (int *)local_54;
        pfStack_b8 = (function<void___cdecl(void)> *)local_9c;
        uStack_bc = 0x42ed55;
        FUN_00516d20();
        uStack_bc = 0x42ed5c;
        puVar3 = (undefined4 *)FUN_0044e0a0();
        local_54 = *puVar3;
      }
    }
    piStack_b4 = (int *)0x742a18;
    pfStack_b8 = (function<void___cdecl(void)> *)0x42ed7e;
    FUN_004054a0();
    local_8 = 3;
    piStack_b4 = (int *)local_58;
    pfStack_b8 = local_44;
    uStack_bc = 0x42ed92;
    game_loop_helper_e9240();
    uStack_bc = 0x42ed99;
    local_4c = FUN_005b6ee0();
    local_8 = 0xffffffff;
    piStack_b4 = (int *)0x42edab;
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_44);
    piStack_b4 = (int *)&DAT_00742a34;
    pfStack_b8 = (function<void___cdecl(void)> *)0x42edbf;
    FUN_004053a0();
    *(undefined4 *)(local_4c + 0x84) = 0;
    *(undefined1 *)(local_4c + 0x55) = 1;
    *(undefined4 *)(local_4c + 0x98) = 1000;
    piStack_b4 = (int *)local_58;
    local_a0 = auStack_cc;
    local_a4 = FUN_004054a0("sprite/common/etc/combo.img");
    local_8 = 4;
    FUN_004bcf00();
    local_8 = 0xffffffff;
    local_6c = FUN_004b8ca0();
    *(int *)(local_4c + 0x40) = 0x247 - *(int *)(local_6c + 0xc) / 2;
    piStack_b4 = (int *)local_58;
    local_a8 = auStack_cc;
    local_ac = FUN_004054a0("sprite/common/etc/combo.img");
    local_8 = 5;
    FUN_004bcf00();
    local_8 = 0xffffffff;
    local_70 = FUN_004b8ca0();
    *(int *)(local_4c + 0x44) = 0xce - *(int *)(local_70 + 0x10) / 2;
    *(undefined4 *)(local_4c + 0x110) = 3;
    *(undefined4 *)(local_4c + 0x114) = 10000;
    piStack_b4 = &local_4c;
    pfStack_b8 = (function<void___cdecl(void)> *)0x42eeab;
    FUN_00516d20();
    pfStack_b8 = (function<void___cdecl(void)> *)0x42eeb2;
    FUN_0044de80();
  }
  ExceptionList = local_10;
  return;
}


/* ==== 00432050  img_path_loader_12  size=1889 ==== */

int img_path_loader_12(int *param_1)

{
  void *pvVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *in_ECX;
  int iVar5;
  int iVar6;
  undefined1 auStack_a4 [4];
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  int iStack_98;
  int iStack_94;
  int *piStack_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  int *piStack_80;
  int *piStack_7c;
  undefined *puStack_78;
  int *piStack_74;
  int iStack_70;
  int iStack_6c;
  uint uStack_68;
  int local_64;
  byte local_60;
  undefined1 *local_5c;
  undefined1 *local_58;
  undefined1 *local_54;
  undefined4 local_50;
  undefined1 *local_4c;
  undefined4 local_48;
  undefined1 *local_44;
  undefined4 local_40;
  undefined1 *local_3c;
  int local_38;
  int *local_34;
  int *local_30;
  int local_2c;
  int local_28;
  int *local_24;
  undefined4 local_20;
  int *local_1c;
  undefined4 local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pvVar1 = ExceptionList;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070e5bd;
  local_10 = ExceptionList;
  uStack_68 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  if ((char)in_ECX[0x238] == '\0') {
    return 0;
  }
  ExceptionList = &local_10;
  in_ECX[0x84] = (int)((float)*(int *)(*param_1 + 0x878) * *(float *)(*param_1 + 0x87c));
  *(int *)(*param_1 + 0x210) = in_ECX[0x84];
  if (in_ECX[0x1ba] < 0) {
    ExceptionList = pvVar1;
    return 0;
  }
  iStack_70 = *param_1;
  iStack_6c = *param_1 + 0x778;
  piStack_74 = &local_64;
  puStack_78 = (undefined *)0x432107;
  local_38 = iStack_70;
  local_14 = in_ECX;
  (**(code **)(*in_ECX + 0xe8))();
  if (*(int *)(*param_1 + 0x204) == 0) {
    if (*(int *)(*param_1 + 0x1a4) == 0x140) {
      puStack_78 = (undefined *)*param_1;
      piStack_7c = (int *)0x432136;
      cVar2 = FUN_004679f0();
      if (cVar2 == '\0') goto LAB_00432140;
    }
    else {
LAB_00432140:
      if ((*(int *)(*param_1 + 0x1a4) != 400) || (*(char *)(*param_1 + 0xa8c) == '\0'))
      goto LAB_00432508;
    }
    puStack_78 = (undefined *)0x43216e;
    iVar3 = FUN_00641430();
    local_28 = local_64 + -5 + iVar3 % 10;
    puStack_78 = (undefined *)0x432185;
    iVar3 = FUN_00641430();
    local_2c = local_64 + -5 + iVar3 % 10;
    if (*(char *)((int)local_14 + 0x8f1) != '\0') {
      puStack_78 = (undefined *)0x0;
      piStack_7c = (int *)0x1f4;
      piStack_80 = (int *)0x32;
      iStack_84 = 1000;
      iStack_88 = 1;
      iStack_8c = 0x8f;
      local_3c = auStack_a4;
      local_40 = FUN_004054a0("sprite/common/etc/combo.img");
      local_8 = 0;
      iVar6 = local_28;
      iVar3 = FUN_00641430(local_28);
      iVar3 = iVar3 % 0x1e + -0xf + param_1[4];
      iVar5 = param_1[3];
      iVar4 = FUN_00641430(iVar5,iVar3);
      iVar4 = iVar4 % 0x1e + -0xf + param_1[2];
      game_get_state_ptr_d1520(iVar4);
      FUN_004d58e0();
      local_8 = 0xffffffff;
      FUN_0042e1d0(iVar4,iVar5,iVar3,iVar6);
      puStack_78 = (undefined *)0x0;
      piStack_7c = (int *)0x1f4;
      piStack_80 = (int *)0x32;
      iStack_84 = 1000;
      iStack_88 = 1;
      iStack_8c = 0x8f;
      local_44 = auStack_a4;
      local_48 = FUN_004054a0("sprite/common/etc/combo.img");
      local_8 = 1;
      iVar6 = local_2c;
      iVar3 = FUN_00641430(local_2c);
      iVar3 = iVar3 % 0x1e + -0xf + param_1[4];
      iVar5 = param_1[3];
      iVar4 = FUN_00641430(iVar5,iVar3);
      iVar4 = iVar4 % 0x1e + -0xf + param_1[2];
      game_get_state_ptr_d1520(iVar4);
      FUN_004d58e0();
      local_8 = 0xffffffff;
      FUN_0042e1d0(iVar4,iVar5,iVar3,iVar6);
    }
    if (*(char *)((int)local_14 + 0x8f2) != '\0') {
      if (*(char *)((int)local_14 + 0x8f3) == '\0') {
        if (local_14[0x89] < *(int *)(*param_1 + 0x224)) {
          local_20 = 0xffffffff;
        }
        else {
          local_20 = 1;
        }
        puStack_78 = (undefined *)0x0;
        piStack_7c = (int *)local_20;
        piStack_80 = param_1;
        iStack_84 = 0x432410;
        iVar3 = FUN_00641430();
        iStack_84 = iVar3 % 0x1e + -0xf + param_1[4];
        iStack_88 = param_1[3];
        iStack_8c = 0x43242f;
        iVar3 = FUN_00641430();
        iStack_8c = iVar3 % 0x1e + -0xf + param_1[2];
        piStack_90 = (int *)0x432447;
        game_get_state_ptr_d1520();
        piStack_90 = (int *)0x43244e;
        FUN_004d58e0();
        piStack_90 = (int *)0x432455;
        FUN_0042eed0();
        if (local_14[0x89] < *(int *)(*param_1 + 0x224)) {
          local_24 = (int *)0xffffffff;
        }
        else {
          local_24 = (int *)0x1;
        }
        puStack_78 = (undefined *)0x0;
        piStack_7c = local_24;
        piStack_80 = param_1;
        iStack_84 = 0x43248a;
        iVar3 = FUN_00641430();
        iStack_84 = iVar3 % 0x1e + -0xf + param_1[4];
        iStack_88 = param_1[3];
        iStack_8c = 0x4324a9;
        iVar3 = FUN_00641430();
        iStack_8c = iVar3 % 0x1e + -0xf + param_1[2];
        piStack_90 = (int *)0x4324c1;
        game_get_state_ptr_d1520();
        piStack_90 = (int *)0x4324c8;
        FUN_004d58e0();
        piStack_90 = (int *)0x4324cf;
        FUN_0042eed0();
      }
      else {
        if (local_14[0x89] < *(int *)(*param_1 + 0x224)) {
          local_18 = 0xffffffff;
        }
        else {
          local_18 = 1;
        }
        puStack_78 = (undefined *)(uint)local_60;
        piStack_7c = (int *)local_18;
        piStack_80 = param_1;
        iStack_84 = 0x432313;
        iVar3 = FUN_00641430();
        iStack_84 = iVar3 % 0x1e + -0xf + param_1[4];
        iStack_88 = param_1[3];
        iStack_8c = 0x432332;
        iVar3 = FUN_00641430();
        iStack_8c = iVar3 % 0x1e + -0xf + param_1[2];
        piStack_90 = (int *)0x43234a;
        game_get_state_ptr_d1520();
        piStack_90 = (int *)0x432351;
        FUN_004d58e0();
        piStack_90 = (int *)0x432358;
        FUN_0042eed0();
        if (local_14[0x89] < *(int *)(*param_1 + 0x224)) {
          local_1c = (int *)0xffffffff;
        }
        else {
          local_1c = (int *)0x1;
        }
        puStack_78 = (undefined *)(uint)local_60;
        piStack_7c = local_1c;
        piStack_80 = param_1;
        iStack_84 = 0x432390;
        iVar3 = FUN_00641430();
        iStack_84 = iVar3 % 0x1e + -0xf + param_1[4];
        iStack_88 = param_1[3];
        iStack_8c = 0x4323af;
        iVar3 = FUN_00641430();
        iStack_8c = iVar3 % 0x1e + -0xf + param_1[2];
        piStack_90 = (int *)0x4323c7;
        game_get_state_ptr_d1520();
        piStack_90 = (int *)0x4323ce;
        FUN_004d58e0();
        piStack_90 = (int *)0x4323d5;
        FUN_0042eed0();
      }
    }
    local_14[0x1ba] = local_14[0x1ba] - (local_28 + local_2c);
    if (local_14[0x1ba] < 1) {
      local_14[0x1ba] = 0;
    }
  }
  else {
LAB_00432508:
    if (*(char *)((int)local_14 + 0x8f1) != '\0') {
      puStack_78 = (undefined *)0x0;
      piStack_7c = (int *)0x1f4;
      piStack_80 = (int *)0x32;
      iStack_84 = 1000;
      iStack_88 = 1;
      iStack_8c = 0x8f;
      local_4c = auStack_a4;
      local_50 = FUN_004054a0("sprite/common/etc/combo.img");
      local_8 = 2;
      iVar3 = param_1[4];
      iVar4 = param_1[3];
      iVar5 = param_1[2];
      iVar6 = local_64;
      game_get_state_ptr_d1520(iVar5,iVar4,iVar3,local_64);
      FUN_004d58e0();
      local_8 = 0xffffffff;
      FUN_0042e1d0(iVar5,iVar4,iVar3,iVar6);
    }
    if (*(char *)((int)local_14 + 0x8f2) != '\0') {
      if (*(char *)((int)local_14 + 0x8f3) == '\0') {
        if (local_14[0x89] < *(int *)(*param_1 + 0x224)) {
          local_34 = (int *)0xffffffff;
        }
        else {
          local_34 = (int *)0x1;
        }
        puStack_78 = (undefined *)0x0;
        piStack_7c = local_34;
        piStack_80 = param_1;
        iStack_84 = param_1[4];
        iStack_88 = param_1[3];
        iStack_8c = param_1[2];
        piStack_90 = (int *)0x432643;
        game_get_state_ptr_d1520();
        piStack_90 = (int *)0x43264a;
        FUN_004d58e0();
        piStack_90 = (int *)0x432651;
        FUN_0042eed0();
      }
      else {
        if (local_14[0x89] < *(int *)(*param_1 + 0x224)) {
          local_30 = (int *)0xffffffff;
        }
        else {
          local_30 = (int *)0x1;
        }
        puStack_78 = (undefined *)(uint)local_60;
        piStack_7c = local_30;
        piStack_80 = param_1;
        iStack_84 = param_1[4];
        iStack_88 = param_1[3];
        iStack_8c = param_1[2];
        piStack_90 = (int *)0x4325e8;
        game_get_state_ptr_d1520();
        piStack_90 = (int *)0x4325ef;
        FUN_004d58e0();
        piStack_90 = (int *)0x4325f6;
        FUN_0042eed0();
      }
    }
    local_14[0x1ba] = local_14[0x1ba] - local_64;
    if (local_14[0x1ba] < 1) {
      local_14[0x1ba] = 0;
    }
  }
  puStack_78 = (undefined *)0x432690;
  cVar2 = FUN_0044e480();
  if (cVar2 == '\0') {
    local_54 = (undefined1 *)&iStack_8c;
    piStack_90 = (int *)(*param_1 + 0x818);
    iStack_94 = 0x4326b0;
    FUN_00405520();
    piStack_90 = (int *)0x4326b5;
    FUN_004c3570();
  }
  puStack_78 = (undefined *)0x4326c6;
  cVar2 = FUN_0044e480();
  if (cVar2 == '\0') {
    local_58 = (undefined1 *)&iStack_8c;
    piStack_90 = local_14 + 0x4d;
    iStack_94 = 0x4326e4;
    FUN_00405520();
    piStack_90 = (int *)0x4326e9;
    FUN_004c3570();
  }
  if ((char)local_14[0x23d] != '\0') {
    puStack_78 = &DAT_0073f657;
    piStack_7c = local_14 + 0x23e;
    piStack_80 = (int *)0x43270e;
    cVar2 = FUN_00427e30();
    if (cVar2 != '\0') {
      local_5c = (undefined1 *)&iStack_8c;
      piStack_90 = local_14 + 0x23e;
      iStack_94 = 0x43272f;
      FUN_00405520();
      piStack_90 = (int *)(local_14[0x8b] + local_14[0x255]);
      iStack_94 = local_14[0x8a] + local_14[0x254];
      iStack_98 = local_14[0x89] + local_14[0x253];
      uStack_9c = 0;
      uStack_a0 = 0x43276f;
      FUN_004aa990();
    }
  }
  if ((local_14[0x1ba] == 0) && ((char)local_14[0x23c] != '\0')) {
    puStack_78 = (undefined *)0x43279c;
    (**(code **)(*local_14 + 0xb0))();
  }
  ExceptionList = local_10;
  return local_64;
}


/* ==== 0043d840  img_path_loader_13  size=565 ==== */

undefined4 * img_path_loader_13(undefined4 param_1)

{
  uint uVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 local_20;
  uint local_1c;
  undefined4 *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070ef1d;
  local_10 = ExceptionList;
  uVar1 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_0042fb60(param_1);
  local_8 = 0;
  *local_18 = breath::vftable;
  piVar2 = (int *)game_get_flag_object_01a70(0);
  *(undefined4 *)(*piVar2 + 0x8c) = 9;
  game_get_flag_object_01a70(0);
  FUN_0040d6d0(uVar1);
  uVar5 = 9;
  game_get_flag_object_01a70(0);
  FUN_0040d730(uVar5);
  local_1c = 0;
  while( true ) {
    game_get_flag_object_01a70(0);
    uVar1 = FUN_0040d6a0();
    if (uVar1 <= local_1c) break;
    uVar1 = local_1c;
    game_get_flag_object_01a70(0);
    local_14 = FUN_0040d680(uVar1);
    if (local_1c == 0) {
      *(undefined1 *)(local_14 + 0x3c) = 1;
      *(undefined1 *)(local_14 + 0x3b) = 0;
    }
    else if (local_1c == 8) {
      *(undefined1 *)(local_14 + 0x3c) = 1;
      FUN_0044e2d0(1);
      puVar3 = (undefined4 *)FUN_004274d0(0);
      *puVar3 = 0xffffffb5;
      iVar4 = FUN_004274d0(0);
      *(undefined4 *)(iVar4 + 4) = 0xffffffe2;
      iVar4 = FUN_004274d0(0);
      *(undefined4 *)(iVar4 + 8) = 0xffffffff;
      iVar4 = FUN_004274d0(0);
      *(undefined4 *)(iVar4 + 0xc) = 0x96;
      iVar4 = FUN_004274d0(0);
      *(undefined4 *)(iVar4 + 0x10) = 0x3c;
      iVar4 = FUN_004274d0(0);
      *(undefined4 *)(iVar4 + 0x14) = 0x2c;
    }
    FUN_004053a0("sprite/common/commoneffect/terriblemagiccursor.img");
    *(undefined1 *)(local_14 + 0x20) = (undefined1)local_1c;
    *(undefined4 *)(local_14 + 0x24) = 0xffffffa0;
    *(undefined4 *)(local_14 + 0x28) = 0xffffffc4;
    *(undefined1 *)(local_14 + 0x3d) = 3;
    *(undefined4 *)(local_14 + 0x44) = 100;
    local_1c = local_1c + 1;
  }
  FUN_0040d3c0(1,0);
  local_20 = 0xfa;
  game_loop_helper_0e1f0(1,&local_20);
  local_18[0x268] = 0;
  ExceptionList = local_10;
  return local_18;
}


/* ==== 0043f590  img_path_loader_14  size=440 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 * img_path_loader_14(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_ECX;
  function<void___cdecl(void)> local_2c [24];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070f0a5;
  local_10 = ExceptionList;
  local_14 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_0042fb60();
  local_8 = 0;
  *in_ECX = FlyBat::vftable;
  FUN_004054a0();
  iVar1 = FUN_00630a40();
  *(undefined4 *)(iVar1 + 0x84) = 1;
  FUN_004054a0();
  local_8._0_1_ = 1;
  game_loop_helper_e9240();
  iVar2 = FUN_005b6ee0();
  local_8._0_1_ = 0;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_2c);
  FUN_004054a0("sprite/monster/flyingmonstermark.img");
  local_8._0_1_ = 2;
  FUN_004bcf00();
  local_8._0_1_ = 0;
  iVar1 = FUN_004b8ca0();
  iVar1 = *(int *)(iVar1 + 0xc);
  iVar3 = FUN_0040d680();
  *(int *)(iVar3 + 0x24) = -iVar1 / 2;
  FUN_004054a0("sprite/monster/flyingmonstermark.img");
  local_8._0_1_ = 3;
  FUN_004bcf00();
  local_8 = (uint)local_8._1_3_ << 8;
  iVar1 = FUN_004b8ca0();
  iVar1 = *(int *)(iVar1 + 0x10);
  iVar3 = FUN_0040d680();
  *(int *)(iVar3 + 0x28) = -iVar1 / 2;
  FUN_004053a0();
  *(undefined4 *)(iVar2 + 0x110) = 4;
  *(undefined4 *)(iVar2 + 0x114) = in_ECX[0x8a];
  *(undefined1 *)(iVar2 + 0xe9) = 1;
  *(undefined1 *)(iVar2 + 0x25) = 0;
  FUN_0044de80();
  ExceptionList = local_10;
  return in_ECX;
}


/* ==== 00441ef0  img_path_loader_15  size=404 ==== */

undefined4 * img_path_loader_15(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *in_ECX;
  undefined4 uVar4;
  char *pcVar5;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070e69d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0042fb60(param_1);
  local_8 = 0;
  *in_ECX = Dogmissile::vftable;
  *(undefined1 *)(in_ECX + 0x238) = 1;
  uVar4 = 0;
  game_get_flag_object_01a70(0);
  uVar4 = FUN_0040d680(uVar4);
  game_get_flag_object_01a70(0);
  FUN_00427660(uVar4);
  uVar4 = 0;
  game_get_flag_object_01a70(0);
  uVar4 = FUN_0040d680(uVar4);
  game_get_flag_object_01a70(0);
  FUN_00427660(uVar4);
  local_18 = 0;
  while( true ) {
    game_get_flag_object_01a70(0);
    uVar1 = FUN_0040d6a0();
    if (uVar1 <= local_18) break;
    pcVar5 = "sprite/monster/dog/bombdog.img";
    uVar1 = local_18;
    game_get_flag_object_01a70(0);
    FUN_0040d680(uVar1);
    FUN_004053a0(pcVar5);
    uVar1 = local_18;
    game_get_flag_object_01a70(0);
    iVar2 = FUN_0040d680(uVar1);
    *(undefined1 *)(iVar2 + 0x20) = (undefined1)local_18;
    local_18 = local_18 + 1;
  }
  piVar3 = (int *)game_get_flag_object_01a70(0);
  *(undefined4 *)(*piVar3 + 0x84) = 1;
  piVar3 = (int *)game_get_flag_object_01a70(0);
  *(undefined4 *)(*piVar3 + 0x8c) = 3;
  ExceptionList = local_10;
  return in_ECX;
}


/* ==== 004444d0  img_path_loader_16  size=621 ==== */

void img_path_loader_16(int param_1)

{
  char cVar1;
  undefined1 auStack_58 [16];
  undefined4 uStack_48;
  int iStack_44;
  int *local_40;
  uint uStack_3c;
  undefined1 local_38 [12];
  undefined1 *local_2c;
  int local_28;
  int local_24;
  undefined1 *local_20;
  int local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070f3ad;
  local_10 = ExceptionList;
  uStack_3c = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*(char *)(param_1 + 0xbc) != '\0') {
    local_40 = (int *)0x0;
    iStack_44 = 0x444520;
    local_40 = (int *)FUN_004274d0();
    iStack_44 = param_1 + 100;
    uStack_48 = 0x44452d;
    cVar1 = destroy<>();
    if (cVar1 != '\0') {
      local_40 = (int *)0x0;
      iStack_44 = 0x444551;
      local_40 = (int *)FUN_004274d0();
      iStack_44 = param_1 + 100;
      uStack_48 = 0x44455e;
      cVar1 = destroy<>();
      if ((cVar1 != '\0') && (*(int *)(param_1 + 0x90) == 5)) {
        local_40 = (int *)0x0;
        iStack_44 = 0x444592;
        local_40 = (int *)FUN_004274d0();
        iStack_44 = 0x444598;
        local_14 = FUN_005e9250();
        local_40 = (int *)0x5;
        local_2c = auStack_58;
        FUN_004054a0("sprite/character/mage/effect/void2.img");
        FUN_0062fc50();
        local_40 = (int *)0x40000000;
        iStack_44 = 0x4445d1;
        FUN_0062fd10();
        *(undefined4 *)(local_14 + 0x4c) = *(undefined4 *)(local_18 + 500);
        *(undefined4 *)(local_14 + 0x110) = 3;
        *(undefined4 *)(local_14 + 0x114) = 0xffffff9c;
        local_40 = (int *)0x0;
        iStack_44 = 0x444610;
        local_40 = (int *)FUN_004274d0();
        iStack_44 = 0x44461c;
        FUN_0040d840();
        *(undefined1 *)(local_14 + 0xe9) = 1;
        *(undefined1 *)(local_14 + 0xe8) = 1;
        *(undefined4 *)(local_14 + 0x90) = 4;
        *(undefined4 *)(local_14 + 0x84) = 1;
        local_40 = &local_14;
        iStack_44 = 0x44465c;
        FUN_0044de80();
        local_40 = (int *)0x444664;
        FUN_0040d650();
        local_8 = 0;
        local_40 = (int *)0x3;
        iStack_44 = 0x444678;
        local_40 = (int *)FUN_0040d680();
        iStack_44 = 0x444681;
        FUN_00427660();
        local_40 = (int *)0x4;
        iStack_44 = 0x44468e;
        local_40 = (int *)FUN_0040d680();
        iStack_44 = 0x444697;
        FUN_00427660();
        local_20 = local_38;
        local_40 = (int *)0x4446a6;
        local_1c = game_loop_helper_018d0();
        local_40 = (int *)0x4446b1;
        local_24 = game_loop_helper_018b0();
        for (; local_1c != local_24; local_1c = local_1c + 0x60) {
          local_28 = local_1c;
          *(undefined4 *)(local_1c + 0x44) = 0xfa;
        }
        local_40 = (int *)local_38;
        iStack_44 = 0x4446e8;
        FUN_004275e0();
        *(undefined4 *)(param_1 + 0x90) = 0;
        *(undefined4 *)(param_1 + 0x98) = 0xfa;
        *(undefined4 *)(param_1 + 0x8c) = 2;
        *(undefined4 *)(param_1 + 0x84) = 1;
        local_8 = 0xffffffff;
        local_40 = (int *)0x44472b;
        FUN_00405330();
      }
    }
  }
  ExceptionList = local_10;
  return;
}


/* ==== 00446b00  img_frame_dispatch_compress_5_6  size=620 ==== */

void img_frame_dispatch_compress_5_6(void)

{
  char cVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined1 auStack_5c [24];
  float local_44;
  float local_40;
  float local_3c;
  char *pcStack_38;
  uint uStack_34;
  undefined4 local_30;
  undefined1 *local_2c;
  undefined4 local_28;
  undefined1 *local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070f6b5;
  local_10 = ExceptionList;
  uStack_34 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_18 = (*(int *)(in_ECX + 0x1e4) / 100) % 10;
  local_14 = in_ECX;
  if (local_18 == 0) {
    pcStack_38 = "TINGKERBELL_HP_ABSORB";
    local_3c = 6.283328e-39;
    FUN_004053a0();
  }
  else if (local_18 == 1) {
    pcStack_38 = "TINGKERBELL_MP_ABSORB";
    local_3c = 6.283372e-39;
    FUN_004053a0();
  }
  else if (local_18 == 2) {
    pcStack_38 = "TINGKERBELL_ALL_ABSORB";
    local_3c = 6.283415e-39;
    FUN_004053a0();
  }
  else if (local_18 == 3) {
    pcStack_38 = "TINGKERBELL_MP_ABSORB";
    local_3c = 6.283455e-39;
    FUN_004053a0();
  }
  else if (local_18 == 4) {
    pcStack_38 = "TINGKERBELL_MP_ABSORB";
    local_3c = 6.283494e-39;
    FUN_004053a0();
  }
  else if (local_18 == 5) {
    pcStack_38 = "TINGKERBELL_MP_ABSORB";
    local_3c = 6.283533e-39;
    FUN_004053a0();
  }
  else if (local_18 == 6) {
    pcStack_38 = "TINGKERBELL_MP_ABSORB";
    local_3c = 6.283572e-39;
    FUN_004053a0();
  }
  pcStack_38 = "";
  local_3c = (float)(local_14 + 0x9e0);
  local_40 = 6.283602e-39;
  cVar1 = FUN_00427e30();
  if (cVar1 != '\0') {
    pcStack_38 = (char *)0x4;
    local_3c = (float)*(int *)(local_14 + 0x22c);
    local_40 = (float)*(int *)(local_14 + 0x228);
    local_44 = (float)*(int *)(local_14 + 0x224);
    local_24 = auStack_5c;
    local_28 = FUN_00405520(local_14 + 0x9e0);
    local_8 = 0;
    uVar2 = FUN_00516d20();
    local_8 = 0xffffffff;
    local_1c = FUN_00516a90(uVar2);
    *(undefined4 *)(local_1c + 0x4c) = *(undefined4 *)(local_14 + 500);
  }
  if (*(char *)(local_14 + 0xa10) != '\0') {
    pcStack_38 = "";
    local_3c = (float)(local_14 + 0x9f8);
    local_40 = 6.283844e-39;
    cVar1 = FUN_00427e30();
    if (cVar1 != '\0') {
      pcStack_38 = (char *)0x4;
      local_3c = (float)*(int *)(local_14 + 0x22c);
      local_40 = (float)*(int *)(local_14 + 0x228);
      local_44 = (float)*(int *)(local_14 + 0x224);
      local_2c = auStack_5c;
      local_30 = FUN_00405520(local_14 + 0x9f8);
      local_8 = 1;
      uVar2 = FUN_00516d20();
      local_8 = 0xffffffff;
      local_20 = FUN_00516a90(uVar2);
      *(undefined4 *)(local_20 + 0x4c) = *(undefined4 *)(local_14 + 500);
    }
  }
  pcStack_38 = (char *)0x446d5c;
  FUN_00432d30();
  ExceptionList = local_10;
  return;
}


/* ==== 00446d70  img_frame_dispatch_compress_5_6_b  size=1059 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void img_frame_dispatch_compress_5_6_b(int param_1)

{
  undefined4 *puVar1;
  int *in_ECX;
  undefined1 auStack_a8 [12];
  undefined4 uStack_9c;
  int iStack_98;
  WorkQueue *pWStack_94;
  uint uStack_90;
  undefined1 *local_8c;
  undefined1 *local_88;
  int local_84;
  int local_80;
  undefined4 local_7c;
  undefined4 local_78;
  int *local_74;
  int local_70;
  int local_6c;
  int local_68;
  WorkQueue local_64 [24];
  undefined4 local_4c;
  WorkQueue local_3c [24];
  undefined4 local_24;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070f6f5;
  local_10 = ExceptionList;
  uStack_90 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*(int *)(*(int *)(param_1 + 4) + 0x204) == 0) {
    local_68 = *(int *)(param_1 + 4);
    local_70 = (in_ECX[0x79] / 100) % 10;
    local_6c = in_ECX[0x79] % 10;
    local_74 = in_ECX;
    local_14 = uStack_90;
    if (local_70 == 0) {
      if (local_6c == 0) {
        pWStack_94 = (WorkQueue *)0x3e8;
        iStack_98 = *(int *)(local_68 + 0x6e0) / 10;
        uStack_9c = 0x446e12;
        FUN_006315c0();
      }
      else if (local_6c == 1) {
        pWStack_94 = (WorkQueue *)0x3e8;
        iStack_98 = *(int *)(local_68 + 0x6e0) / 2;
        uStack_9c = 0x446e37;
        FUN_006315c0();
      }
      else if (local_6c == 2) {
        pWStack_94 = (WorkQueue *)0x3e8;
        iStack_98 = *(int *)(local_68 + 0x6e0);
        uStack_9c = 0x446e57;
        FUN_006315c0();
      }
    }
    else if (local_70 == 1) {
      if (local_6c == 0) {
        pWStack_94 = (WorkQueue *)0x3e8;
        iStack_98 = *(int *)(local_68 + 0x6e4) / 10;
        uStack_9c = 0x446e88;
        FUN_00631750();
      }
      else if (local_6c == 1) {
        pWStack_94 = (WorkQueue *)0x3e8;
        iStack_98 = *(int *)(local_68 + 0x6e4) / 2;
        uStack_9c = 0x446ead;
        FUN_00631750();
      }
      else if (local_6c == 2) {
        pWStack_94 = (WorkQueue *)0x3e8;
        iStack_98 = *(int *)(local_68 + 0x6e4);
        uStack_9c = 0x446ecd;
        FUN_00631750();
      }
    }
    else if (local_70 == 2) {
      if (local_6c == 0) {
        pWStack_94 = (WorkQueue *)0x3e8;
        iStack_98 = *(int *)(local_68 + 0x6e0) / 10;
        uStack_9c = 0x446f02;
        FUN_006315c0();
        pWStack_94 = (WorkQueue *)0x3e8;
        iStack_98 = *(int *)(local_68 + 0x6e4) / 10;
        uStack_9c = 0x446f21;
        FUN_00631750();
      }
      else if (local_6c == 1) {
        pWStack_94 = (WorkQueue *)0x3e8;
        iStack_98 = *(int *)(local_68 + 0x6e0) / 2;
        uStack_9c = 0x446f46;
        FUN_006315c0();
        pWStack_94 = (WorkQueue *)0x3e8;
        iStack_98 = *(int *)(local_68 + 0x6e4) / 2;
        uStack_9c = 0x446f62;
        FUN_00631750();
      }
      else if (local_6c == 2) {
        pWStack_94 = (WorkQueue *)0x3e8;
        iStack_98 = *(undefined4 *)(local_68 + 0x6e0);
        uStack_9c = 0x446f82;
        FUN_006315c0();
        pWStack_94 = (WorkQueue *)0x3e8;
        iStack_98 = *(int *)(local_68 + 0x6e4);
        uStack_9c = 0x446f99;
        FUN_00631750();
      }
    }
    else if (local_70 == 3) {
      local_78 = 10000;
      pWStack_94 = (WorkQueue *)&local_78;
      iStack_98 = 0x446fbb;
      FUN_0040d490();
    }
    else if (local_70 == 4) {
      local_7c = 10000;
      pWStack_94 = (WorkQueue *)&local_7c;
      iStack_98 = 0x446fdd;
      FUN_0040d490();
    }
    else if (local_70 == 5) {
      local_88 = auStack_a8;
      FUN_004054a0(&DAT_0077a9b4);
      local_80 = FUN_006356a0();
      if (local_80 == 0) {
        pWStack_94 = (WorkQueue *)0x44701f;
        FUN_0042df20();
        local_8 = 0;
        pWStack_94 = (WorkQueue *)&DAT_0077a9b4;
        iStack_98 = 0x447033;
        FUN_004053a0();
        local_24 = 10000;
        pWStack_94 = (WorkQueue *)0x4;
        iStack_98 = 0x447044;
        FUN_0044e460();
        pWStack_94 = (WorkQueue *)0x0;
        iStack_98 = 0x44704e;
        puVar1 = (undefined4 *)game_get_flag_object_01a70();
        *puVar1 = 100;
        pWStack_94 = (WorkQueue *)0x1;
        iStack_98 = 0x44705e;
        puVar1 = (undefined4 *)game_get_flag_object_01a70();
        *puVar1 = 100;
        pWStack_94 = (WorkQueue *)0x2;
        iStack_98 = 0x44706e;
        puVar1 = (undefined4 *)game_get_flag_object_01a70();
        *puVar1 = 100;
        pWStack_94 = (WorkQueue *)0x3;
        iStack_98 = 0x44707e;
        puVar1 = (undefined4 *)game_get_flag_object_01a70();
        *puVar1 = 100;
        pWStack_94 = local_3c;
        iStack_98 = 0x447096;
        FUN_0044e230();
        pWStack_94 = (WorkQueue *)0x44709e;
        FUN_00635d80();
        local_8 = 0xffffffff;
        pWStack_94 = (WorkQueue *)0x4470ad;
        Concurrency::details::WorkQueue::~WorkQueue(local_3c);
      }
    }
    else if (local_70 == 6) {
      local_8c = auStack_a8;
      FUN_004054a0(&DAT_0077a9bc);
      local_84 = FUN_006356a0();
      if (local_84 == 0) {
        pWStack_94 = (WorkQueue *)0x4470eb;
        FUN_0042df20();
        local_8 = 1;
        pWStack_94 = (WorkQueue *)&DAT_0077a9bc;
        iStack_98 = 0x4470ff;
        FUN_004053a0();
        local_4c = 10000;
        pWStack_94 = (WorkQueue *)0x2;
        iStack_98 = 0x447110;
        FUN_0044e460();
        pWStack_94 = (WorkQueue *)0x0;
        iStack_98 = 0x44711a;
        puVar1 = (undefined4 *)game_get_flag_object_01a70();
        *puVar1 = 100;
        pWStack_94 = (WorkQueue *)0x1;
        iStack_98 = 0x44712a;
        puVar1 = (undefined4 *)game_get_flag_object_01a70();
        *puVar1 = 100;
        pWStack_94 = local_64;
        iStack_98 = 0x447142;
        FUN_0044e230();
        pWStack_94 = (WorkQueue *)0x44714a;
        FUN_00635d80();
        local_8 = 0xffffffff;
        pWStack_94 = (WorkQueue *)0x447159;
        Concurrency::details::WorkQueue::~WorkQueue(local_64);
      }
    }
    local_74[0x1ba] = 0;
    pWStack_94 = (WorkQueue *)0x447177;
    (**(code **)(*local_74 + 0xb0))();
  }
  ExceptionList = local_10;
  return;
}


/* ==== 00455170  img_path_loader_17  size=7040 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int img_path_loader_17(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  int *in_ECX;
  float10 fVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 uStack_234;
  char *pcStack_230;
  undefined4 uStack_22c;
  int iStack_228;
  int iStack_224;
  char *pcStack_220;
  int *piStack_21c;
  int iStack_218;
  float fStack_214;
  int *piStack_210;
  int *piStack_20c;
  int *piStack_208;
  int *piStack_204;
  int *piStack_200;
  undefined1 *puStack_1fc;
  int *piStack_1f8;
  uint uStack_1f4;
  undefined1 local_1f0 [4];
  undefined1 *local_1ec;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined1 *local_1e0;
  int local_1dc;
  undefined1 local_1d8 [4];
  undefined4 local_1d4;
  undefined1 *local_1d0;
  int local_1cc;
  undefined1 *local_1c8;
  undefined1 *local_1c4;
  undefined4 local_1c0;
  undefined1 *local_1bc;
  undefined4 local_1b8;
  undefined1 *local_1b4;
  undefined1 *local_1b0;
  undefined4 local_1ac;
  undefined1 *local_1a8;
  undefined1 *local_1a4;
  undefined1 *local_1a0;
  undefined1 *local_19c;
  undefined1 *local_198;
  undefined1 *local_194;
  undefined1 *local_190;
  undefined4 local_18c;
  undefined1 *local_188;
  undefined4 local_184;
  undefined1 *local_180;
  undefined4 local_17c;
  undefined1 *local_178;
  undefined4 local_174;
  undefined1 local_170 [12];
  float local_164;
  undefined4 local_160;
  int local_15c;
  float local_158;
  float local_154;
  float local_150;
  int local_14c;
  float local_148;
  float local_144;
  undefined4 local_140;
  undefined4 local_13c;
  int local_138;
  float local_134;
  float local_130;
  float local_12c;
  int local_128;
  float local_124;
  float local_120;
  undefined4 local_11c;
  undefined4 local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  int local_104;
  int local_100;
  int local_fc;
  int local_f8;
  int local_f4;
  float local_f0;
  float local_ec;
  undefined4 local_e8;
  int *local_e4;
  int *local_e0;
  int local_dc;
  float local_d8;
  float local_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  byte local_c0;
  undefined4 local_bc;
  char local_b8;
  char local_b7;
  char local_b6;
  char local_b5;
  int *local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00710d29;
  local_10 = ExceptionList;
  uStack_1f4 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  if (1 < in_ECX[0x85]) {
    return 0;
  }
  local_b5 = '\0';
  if (((*(int *)(*param_1 + 0x204) == 200) && (*(int *)(*param_1 + 0x1e4) == 0x7576)) &&
     (*(int **)(*param_1 + 0x18c) == in_ECX)) {
    local_b5 = '\x01';
  }
  ExceptionList = &local_10;
  local_b4 = in_ECX;
  local_14 = uStack_1f4;
  if (local_b5 == '\0') {
    piStack_1f8 = (int *)0x455213;
    cVar1 = game_frame_should_continue();
    if ((cVar1 == '\0') || (*(char *)((int)local_b4 + 0x2b) != '\0')) {
      ExceptionList = local_10;
      return 0;
    }
  }
  if ((local_b4[0x376] == 4) && (local_b5 == '\0')) {
    piStack_1f8 = (int *)0x45525c;
    FUN_00489bc0();
    local_8 = 0;
    piStack_1f8 = (int *)0x45526e;
    FUN_004525a0();
    local_8 = CONCAT31(local_8._1_3_,1);
    local_b8 = '\0';
    piStack_1f8 = (int *)0x45527e;
    iVar2 = FUN_00641430();
    if (iVar2 % 100 < 5) {
      for (local_c8 = 0; local_c8 < 5; local_c8 = local_c8 + 1) {
        piStack_1f8 = *(int **)(&DAT_007c63e0 + local_c8 * 4);
        puStack_1fc = (undefined1 *)0x4552e2;
        local_bc = piStack_1f8;
        iVar2 = FUN_00405270();
        if (0 < *(int *)(iVar2 + 4)) {
          piStack_1f8 = (int *)local_bc;
          puStack_1fc = (undefined1 *)0x455304;
          iVar2 = FUN_00405270();
          if (0 < *(int *)(iVar2 + 0x20)) {
            piStack_1f8 = (int *)local_bc;
            puStack_1fc = (undefined1 *)0x455326;
            iVar2 = FUN_00405270();
            local_e0 = (int *)(iVar2 + 0x20);
            *local_e0 = *local_e0 + -1;
            piStack_1f8 = (int *)local_bc;
            puStack_1fc = (undefined1 *)0x45535a;
            iVar2 = FUN_00405270();
            if (*(int *)(iVar2 + 0x20) < 1) {
              piStack_1f8 = (int *)local_bc;
              puStack_1fc = (undefined1 *)0x455378;
              iVar2 = FUN_00405270();
              *(undefined4 *)(iVar2 + 0x20) = 0;
              local_b8 = '\x01';
            }
            piStack_1f8 = (int *)0x45538b;
            piVar3 = (int *)game_get_player_or_session_blob();
            if (local_b4 == piVar3) {
              local_160 = 0x708;
              piStack_1f8 = (int *)local_bc;
              puStack_1fc = (undefined1 *)0x4553b9;
              piStack_1f8 = (int *)FUN_00405270();
              puStack_1fc = (undefined1 *)local_bc;
              piStack_200 = &local_160;
              piStack_204 = (int *)0x4553cd;
              FUN_004d1bb0();
              piStack_204 = (int *)0x4553d4;
              game_timing_or_delay_helper();
              piStack_200 = (int *)0x4553db;
              puVar4 = (undefined4 *)game_get_flag_object_01a70();
              puStack_1fc = (undefined1 *)*puVar4;
              piStack_200 = local_b4;
              piStack_204 = (int *)0x4553ea;
              FUN_006cdee0();
              piStack_1f8 = (int *)local_bc;
              puStack_1fc = (undefined1 *)0x455405;
              piStack_1f8 = (int *)FUN_00405270();
              puStack_1fc = (undefined1 *)0x455411;
              FUN_00426c50();
              local_b0 = 3;
              local_ac = local_bc;
              piStack_1f8 = &local_b0;
              puStack_1fc = (undefined1 *)0x455439;
              FUN_00489b80();
            }
          }
        }
      }
      if (local_b8 != '\0') {
        piStack_1f8 = local_b4;
        puStack_1fc = (undefined1 *)0x455456;
        FUN_006593e0();
      }
      piStack_1f8 = (int *)0x45545e;
      piVar3 = (int *)game_get_player_or_session_blob();
      if (local_b4 == piVar3) {
        piStack_1f8 = (int *)0x455471;
        cVar1 = game_frame_should_continue();
        if (cVar1 == '\0') {
          piStack_1f8 = (int *)0x45547d;
          iVar2 = game_get_player_or_session_blob();
          if (*(char *)(iVar2 + 0xdb8) == '\0') {
            piStack_1f8 = local_b4;
            puStack_1fc = local_170;
            piStack_200 = (int *)0x3f4;
            piStack_204 = (int *)0x0;
            piStack_208 = (int *)0x4554a2;
            FUN_006a47c0();
          }
        }
      }
    }
    local_8 = local_8 & 0xffffff00;
    piStack_1f8 = (int *)0x4554b4;
    FUN_00456cf0();
    local_8 = 0xffffffff;
    piStack_1f8 = (int *)0x4554c6;
    FUN_00489ba0();
  }
  local_b4[0x84] = (int)((float)*(int *)(*param_1 + 0x878) * *(float *)(*param_1 + 0x87c));
  *(int *)(*param_1 + 0x210) = local_b4[0x84];
  piStack_1f8 = param_1;
  puStack_1fc = (undefined1 *)0x455522;
  (**(code **)(*local_b4 + 200))();
  if (local_b5 == '\0') {
    puStack_1fc = (undefined1 *)0x455533;
    piVar3 = (int *)game_get_player_or_session_blob();
    if (local_b4 == piVar3) {
      puStack_1fc = (undefined1 *)0x455540;
      piVar3 = (int *)game_get_state_ptr_d1520();
      local_e4 = (int *)(*piVar3 + 0xf4);
      *local_e4 = *local_e4 + 1;
    }
  }
  puStack_1fc = (undefined1 *)(*param_1 + 0x778);
  piStack_200 = (int *)*param_1;
  piStack_204 = &local_c4;
  piStack_208 = (int *)0x45558f;
  (**(code **)(*local_b4 + 0xe8))();
  if ((*(char *)((int)local_b4 + 0xe05) != '\0') && (local_c4 = local_c4 / 100, local_c4 == 0)) {
    local_c4 = 1;
  }
  if (local_b4[0x69] == 0x1a4) {
    piStack_208 = (int *)0x742fbc;
    piStack_20c = (int *)(*param_1 + 0x78c);
    piStack_210 = (int *)0x4555f4;
    cVar1 = FUN_00427c60();
    if (cVar1 == '\0') {
      piStack_208 = (int *)0x742fc8;
      piStack_20c = (int *)(*param_1 + 0x78c);
      piStack_210 = (int *)0x455669;
      cVar1 = FUN_00427c60();
      if (cVar1 != '\0') {
        local_110 = (float)local_c4;
        piStack_208 = (int *)0x3;
        piStack_20c = (int *)0x1;
        piStack_210 = (int *)0x455692;
        fVar6 = (float10)FUN_0047bd30();
        local_10c = (float)fVar6;
        local_c4 = (int)((local_110 * (100.0 - local_10c)) / 100.0);
      }
    }
    else {
      local_108 = (float)local_c4;
      piStack_208 = (int *)0x2;
      piStack_20c = (int *)0x1;
      piStack_210 = (int *)0x45561d;
      fVar6 = (float10)FUN_0047bd30();
      local_164 = (float)fVar6;
      local_c4 = (int)((local_108 * (100.0 - local_164)) / 100.0);
    }
  }
  if (local_b5 != '\0') {
    local_c4 = (local_b4[0x1b8] * 0xf) / 100;
  }
  if (*(char *)(*param_1 + 0x118) == '\0') goto LAB_00455cb4;
  if (*(int *)(*param_1 + 0x204) == 0) {
    if (*(int *)(*param_1 + 0x1a4) == 0x140) {
      piStack_208 = (int *)*param_1;
      piStack_20c = (int *)0x45572e;
      cVar1 = FUN_004679f0();
      if (cVar1 == '\0') goto LAB_00455738;
    }
    else {
LAB_00455738:
      if ((*(int *)(*param_1 + 0x1a4) != 400) || (*(char *)(*param_1 + 0xa8c) == '\0'))
      goto LAB_00455ae5;
    }
    piStack_208 = (int *)0x455766;
    iVar2 = FUN_00641430();
    local_cc = local_c4 + -5 + iVar2 % 10;
    piStack_208 = (int *)0x455783;
    iVar2 = FUN_00641430();
    local_d0 = local_c4 + -5 + iVar2 % 10;
    piStack_208 = (int *)0x0;
    piStack_20c = (int *)0x1f4;
    piStack_210 = (int *)0x32;
    fStack_214 = 1.4013e-42;
    iStack_218 = 1;
    piStack_21c = (int *)0x8f;
    local_1a0 = (undefined1 *)&uStack_234;
    local_1e8 = FUN_004054a0("sprite/common/etc/combo.img");
    local_8 = 2;
    iVar11 = local_cc;
    iVar2 = FUN_00641430(local_cc);
    iVar2 = iVar2 % 0x1e + -0xf + param_1[4];
    iVar8 = param_1[3];
    iVar5 = FUN_00641430(iVar8,iVar2);
    iVar5 = iVar5 % 0x1e + -0xf + param_1[2];
    game_get_state_ptr_d1520(iVar5);
    FUN_004d58e0();
    local_8 = 0xffffffff;
    FUN_0042e1d0(iVar5,iVar8,iVar2,iVar11);
    piStack_208 = (int *)0x0;
    piStack_20c = (int *)0x1f4;
    piStack_210 = (int *)0x32;
    fStack_214 = 1.4013e-42;
    iStack_218 = 1;
    piStack_21c = (int *)0x8f;
    local_1ec = (undefined1 *)&uStack_234;
    local_174 = FUN_004054a0("sprite/common/etc/combo.img");
    local_8 = 3;
    iVar11 = local_d0;
    iVar2 = FUN_00641430(local_d0);
    iVar2 = iVar2 % 0x1e + -0xf + param_1[4];
    iVar8 = param_1[3];
    iVar5 = FUN_00641430(iVar8,iVar2);
    iVar5 = iVar5 % 0x1e + -0xf + param_1[2];
    game_get_state_ptr_d1520(iVar5);
    FUN_004d58e0();
    local_8 = 0xffffffff;
    FUN_0042e1d0(iVar5,iVar8,iVar2,iVar11);
    if (local_b4[0x89] < *(int *)(*param_1 + 0x224)) {
      local_e8 = 0xffffffff;
    }
    else {
      local_e8 = 1;
    }
    piStack_208 = (int *)(uint)local_c0;
    piStack_20c = (int *)local_e8;
    piStack_210 = param_1;
    fStack_214 = 6.368579e-39;
    iVar2 = FUN_00641430();
    fStack_214 = (float)(iVar2 % 0x1e + -0xf + param_1[4]);
    iStack_218 = param_1[3];
    piStack_21c = (int *)0x455921;
    iVar2 = FUN_00641430();
    piStack_21c = (int *)(iVar2 % 0x1e + -0xf + param_1[2]);
    pcStack_220 = (char *)0x455939;
    game_get_state_ptr_d1520();
    pcStack_220 = (char *)0x455940;
    FUN_004d58e0();
    pcStack_220 = (char *)0x455947;
    FUN_0042eed0();
    if (local_b4[0x89] < *(int *)(*param_1 + 0x224)) {
      local_ec = -NAN;
    }
    else {
      local_ec = 1.4013e-45;
    }
    piStack_208 = (int *)(uint)local_c0;
    piStack_20c = (int *)local_ec;
    piStack_210 = param_1;
    fStack_214 = 6.368775e-39;
    iVar2 = FUN_00641430();
    fStack_214 = (float)(iVar2 % 0x1e + -0xf + param_1[4]);
    iStack_218 = param_1[3];
    piStack_21c = (int *)0x4559ad;
    iVar2 = FUN_00641430();
    piStack_21c = (int *)(iVar2 % 0x1e + -0xf + param_1[2]);
    pcStack_220 = (char *)0x4559c5;
    game_get_state_ptr_d1520();
    pcStack_220 = (char *)0x4559cc;
    FUN_004d58e0();
    pcStack_220 = (char *)0x4559d3;
    FUN_0042eed0();
    if ((char)param_1[7] == '\0') {
      local_b4[0x1ba] = local_b4[0x1ba] - (local_cc + local_d0);
      if (local_b4[0x1ba] < 1) {
        local_b4[0x1ba] = 0;
      }
    }
    else {
      local_b4[0x1bb] = local_b4[0x1bb] - (local_cc + local_d0);
      if (local_b4[0x1bb] < 1) {
        local_b4[0x1bb] = 0;
      }
    }
    piStack_208 = (int *)0x455a70;
    piVar3 = (int *)game_get_player_or_session_blob();
    if (local_b4 == piVar3) {
      piStack_208 = (int *)0x0;
      piStack_20c = (int *)0xfa;
      piStack_210 = (int *)0x5a;
      fStack_214 = 2.10195e-42;
      iStack_218 = 7;
      piStack_21c = (int *)0x58;
      local_178 = (undefined1 *)&uStack_234;
      local_17c = FUN_004054a0("sprite/common/etc/combo.img");
      local_8 = 4;
      iVar2 = local_cc + local_d0;
      uVar10 = 0;
      uVar9 = 0xeb;
      uVar7 = 0x280;
      game_get_state_ptr_d1520(0x280,0xeb,0,iVar2);
      FUN_004d58e0();
      local_8 = 0xffffffff;
      FUN_0042e1d0(uVar7,uVar9,uVar10,iVar2);
    }
  }
  else {
LAB_00455ae5:
    piStack_208 = (int *)0x0;
    piStack_20c = (int *)0x1f4;
    piStack_210 = (int *)0x32;
    fStack_214 = 1.4013e-42;
    iStack_218 = 1;
    piStack_21c = (int *)0x8f;
    local_180 = (undefined1 *)&uStack_234;
    local_184 = FUN_004054a0("sprite/common/etc/combo.img");
    local_8 = 5;
    iVar2 = param_1[4];
    iVar5 = param_1[3];
    iVar8 = param_1[2];
    iVar11 = local_c4;
    game_get_state_ptr_d1520(iVar8,iVar5,iVar2,local_c4);
    FUN_004d58e0();
    local_8 = 0xffffffff;
    FUN_0042e1d0(iVar8,iVar5,iVar2,iVar11);
    if (local_b4[0x89] < *(int *)(*param_1 + 0x224)) {
      local_f0 = -NAN;
    }
    else {
      local_f0 = 1.4013e-45;
    }
    piStack_208 = (int *)(uint)local_c0;
    piStack_20c = (int *)local_f0;
    piStack_210 = param_1;
    fStack_214 = (float)param_1[4];
    iStack_218 = param_1[3];
    piStack_21c = (int *)param_1[2];
    pcStack_220 = (char *)0x455baf;
    game_get_state_ptr_d1520();
    pcStack_220 = (char *)0x455bb6;
    FUN_004d58e0();
    pcStack_220 = (char *)0x455bbd;
    FUN_0042eed0();
    if ((char)param_1[7] == '\0') {
      local_b4[0x1ba] = local_b4[0x1ba] - local_c4;
      if (local_b4[0x1ba] < 1) {
        local_b4[0x1ba] = 0;
      }
    }
    else {
      local_b4[0x1bb] = local_b4[0x1bb] - local_c4;
      if (local_b4[0x1bb] < 1) {
        local_b4[0x1bb] = 0;
      }
    }
    piStack_208 = (int *)0x455c4a;
    piVar3 = (int *)game_get_player_or_session_blob();
    if (local_b4 == piVar3) {
      piStack_208 = (int *)0x0;
      piStack_20c = (int *)0xfa;
      piStack_210 = (int *)0x5a;
      fStack_214 = 2.10195e-42;
      iStack_218 = 7;
      piStack_21c = (int *)0x58;
      local_188 = (undefined1 *)&uStack_234;
      local_18c = FUN_004054a0("sprite/common/etc/combo.img");
      local_8 = 6;
      uVar10 = 0;
      uVar9 = 0xeb;
      uVar7 = 0x280;
      iVar2 = local_c4;
      game_get_state_ptr_d1520(0x280,0xeb,0,local_c4);
      FUN_004d58e0();
      local_8 = 0xffffffff;
      FUN_0042e1d0(uVar7,uVar9,uVar10,iVar2);
    }
  }
LAB_00455cb4:
  local_f4 = *param_1 + 0xb4;
  piStack_208 = (int *)0x455cd0;
  local_d4 = (float)game_loop_helper_018d0();
  piStack_208 = (int *)0x455ce1;
  local_114 = (float)game_loop_helper_018b0();
  for (; local_d4 != local_114; local_d4 = (float)((int)local_d4 + 0x1c)) {
    local_d8 = local_d4;
    piStack_208 = (int *)0x74305c;
    piStack_20c = (int *)local_d4;
    piStack_210 = (int *)0x455d27;
    cVar1 = FUN_00427c60();
    if (cVar1 != '\0') {
      local_190 = (undefined1 *)&piStack_21c;
      pcStack_220 = "sounds/effect/atk_fire.wav";
      iStack_224 = 0x455d46;
      FUN_004054a0();
      pcStack_220 = (char *)0x455d4b;
      FUN_004c3500();
      local_194 = (undefined1 *)&piStack_21c;
      pcStack_220 = "common/hiteffect/particle/firehitparticle.ptl";
      iStack_224 = 0x455d63;
      FUN_004054a0();
      pcStack_220 = (char *)param_1[4];
      iStack_224 = param_1[3];
      iStack_228 = param_1[2];
      uStack_22c = 0;
      pcStack_230 = (char *)0x455d7f;
      FUN_004aa990();
    }
    piStack_208 = (int *)0x7430b8;
    piStack_20c = (int *)local_d8;
    piStack_210 = (int *)0x455d93;
    cVar1 = FUN_00427c60();
    if (cVar1 != '\0') {
      local_198 = (undefined1 *)&piStack_21c;
      pcStack_220 = "sounds/effect/atk_water.wav";
      iStack_224 = 0x455db6;
      FUN_004054a0();
      pcStack_220 = (char *)0x455dbb;
      FUN_004c3500();
      local_19c = (undefined1 *)&piStack_21c;
      pcStack_220 = "common/hiteffect/particle/waterhitparticle.ptl";
      iStack_224 = 0x455dd3;
      FUN_004054a0();
      pcStack_220 = (char *)param_1[4];
      iStack_224 = param_1[3];
      iStack_228 = param_1[2];
      uStack_22c = 0;
      pcStack_230 = (char *)0x455def;
      FUN_004aa990();
      local_1c8 = (undefined1 *)&piStack_21c;
      pcStack_220 = "common/hiteffect/particle/waterhitparticleice.ptl";
      iStack_224 = 0x455e07;
      FUN_004054a0();
      pcStack_220 = (char *)param_1[4];
      iStack_224 = param_1[3];
      iStack_228 = param_1[2];
      uStack_22c = 0;
      pcStack_230 = (char *)0x455e23;
      FUN_004aa990();
    }
    piStack_208 = (int *)0x743148;
    piStack_20c = (int *)local_d8;
    piStack_210 = (int *)0x455e37;
    cVar1 = FUN_00427c60();
    if (cVar1 != '\0') {
      local_1a4 = (undefined1 *)&piStack_21c;
      pcStack_220 = "sounds/effect/atk_lightning.wav";
      iStack_224 = 0x455e5a;
      FUN_004054a0();
      pcStack_220 = (char *)0x455e5f;
      FUN_004c3500();
      piStack_208 = (int *)0x3;
      piStack_20c = (int *)(float)param_1[4];
      piStack_210 = (int *)(float)param_1[3];
      fStack_214 = (float)param_1[2];
      local_1a8 = (undefined1 *)&uStack_22c;
      pcStack_230 = "common/hiteffect/animation/lighthit.ani";
      uStack_234 = 0x455ea3;
      local_1ac = FUN_004054a0();
      local_8 = 7;
      pcStack_230 = (char *)0x455eb5;
      pcStack_230 = (char *)FUN_00516d20();
      local_8 = 0xffffffff;
      uStack_234 = 0x455ec2;
      FUN_00516a90();
    }
    piStack_208 = (int *)0x7431a0;
    piStack_20c = (int *)local_d8;
    piStack_210 = (int *)0x455ed6;
    cVar1 = FUN_00427c60();
    if (cVar1 != '\0') {
      local_1b0 = (undefined1 *)&piStack_21c;
      pcStack_220 = "sounds/effect/atk_darklightning.wav";
      iStack_224 = 0x455ef9;
      FUN_004054a0();
      pcStack_220 = (char *)0x455efe;
      FUN_004c3500();
      piStack_208 = (int *)0x3;
      piStack_20c = (int *)(float)param_1[4];
      piStack_210 = (int *)(float)param_1[3];
      fStack_214 = (float)param_1[2];
      local_1b4 = (undefined1 *)&uStack_22c;
      pcStack_230 = "common/hiteffect/animation/darkhit1.ani";
      uStack_234 = 0x455f42;
      local_1b8 = FUN_004054a0();
      local_8 = 8;
      pcStack_230 = (char *)0x455f54;
      pcStack_230 = (char *)FUN_00516d20();
      local_8 = 0xffffffff;
      uStack_234 = 0x455f61;
      FUN_00516a90();
      piStack_208 = (int *)0x3;
      piStack_20c = (int *)(float)param_1[4];
      piStack_210 = (int *)(float)param_1[3];
      fStack_214 = (float)param_1[2];
      pcStack_230 = "common/hiteffect/animation/darkhit2.ani";
      uStack_234 = 0x455fa5;
      local_1bc = (undefined1 *)&uStack_22c;
      local_1c0 = FUN_004054a0();
      local_8 = 9;
      pcStack_230 = (char *)0x455fb7;
      pcStack_230 = (char *)FUN_00516d20();
      local_8 = 0xffffffff;
      uStack_234 = 0x455fc4;
      FUN_00516a90();
    }
  }
  local_1c4 = (undefined1 *)&piStack_21c;
  pcStack_220 = (char *)(*param_1 + 0x818);
  iStack_224 = 0x455fe7;
  FUN_00405520();
  pcStack_220 = (char *)0x455fec;
  FUN_004c3570();
  piStack_208 = (int *)0x455ffa;
  cVar1 = FUN_006357d0();
  if (cVar1 != '\0') {
    piStack_208 = (int *)0x456017;
    (**(code **)(*local_b4 + 0x114))();
  }
  if (local_b4[0x1ba] < 1) {
    local_b4[0x1ba] = 0;
    if (local_b4[0x85] == 0) {
      piStack_208 = (int *)0x1;
      piStack_20c = (int *)0x456062;
      (**(code **)(*local_b4 + 0x84))();
    }
    if (local_b4[0x8b] < 1) {
      if (local_b4[0x85] == 1) {
        piStack_208 = (int *)0x2;
        piStack_20c = (int *)0x4561c6;
        (**(code **)(*local_b4 + 0x84))();
      }
    }
    else {
      piStack_208 = (int *)0x743224;
      piStack_20c = (int *)(*param_1 + 0x7c4);
      piStack_210 = (int *)0x45608b;
      cVar1 = FUN_00427c60();
      if (cVar1 == '\0') {
        piStack_208 = (int *)0x74322c;
        piStack_20c = (int *)(*param_1 + 0x7c4);
        piStack_210 = (int *)0x4560fe;
        cVar1 = FUN_00427c60();
        if (cVar1 == '\0') {
          piStack_208 = param_1;
          piStack_20c = (int *)0x45619c;
          (**(code **)(*local_b4 + 0x124))();
        }
        else {
          if (*(int *)(*param_1 + 0x204) == 200) {
            piStack_208 = (int *)*param_1;
            piStack_20c = (int *)0x456124;
            local_dc = FUN_004550d0();
            if ((local_dc != 0) && (*(int *)(local_dc + 0x1a4) == 0xa0)) {
              *(undefined4 *)(local_dc + 0x18c) = 0;
            }
          }
          if (local_b4[0x85] == 1) {
            piStack_208 = (int *)0x2;
            piStack_20c = (int *)0x45617f;
            (**(code **)(*local_b4 + 0x84))();
          }
        }
      }
      else if (local_b4[0x69] != 100) {
        piStack_208 = (int *)0x4560af;
        cVar1 = FUN_006357d0();
        if (cVar1 != '\0') {
          piStack_208 = (int *)0x4560c1;
          cVar1 = FUN_004677f0();
          if (cVar1 == '\0') {
            piStack_208 = param_1;
            piStack_20c = (int *)0x4560e2;
            (**(code **)(*local_b4 + 0x11c))();
          }
        }
      }
    }
  }
  else {
    piStack_208 = (int *)0x743238;
    piStack_20c = (int *)(*param_1 + 0x7c4);
    piStack_210 = (int *)0x4561e2;
    cVar1 = FUN_00427c60();
    if (cVar1 == '\0') {
      piStack_208 = (int *)0x743274;
      piStack_20c = (int *)(*param_1 + 0x7c4);
      piStack_210 = (int *)0x4566ff;
      cVar1 = FUN_00427c60();
      if (cVar1 == '\0') {
        piStack_208 = param_1;
        piStack_20c = (int *)0x456c7a;
        (**(code **)(*local_b4 + 0x124))();
      }
      else if (local_b4[0x69] != 100) {
        piStack_208 = (int *)0x45672b;
        cVar1 = FUN_006357d0();
        if (cVar1 != '\0') {
          piStack_208 = (int *)0x456741;
          cVar1 = FUN_004677f0();
          if (cVar1 == '\0') {
            if (local_b4[0x8b] < 1) {
              if (local_b4[0x69] == 0x1a4) {
                local_b4[0x8c] = 250000;
                piStack_208 = (int *)0x1;
                piStack_20c = (int *)0x1;
                piStack_210 = (int *)0x456a11;
                fVar6 = (float10)FUN_0047bd30();
                local_158 = (float)fVar6;
                local_b4[0x284] = (int)(local_158 * 1000.0);
                piStack_208 = (int *)0x4;
                piStack_20c = (int *)(float)param_1[4];
                piStack_210 = (int *)(float)local_b4[0x8a];
                fStack_214 = (float)param_1[2];
                local_1e0 = (undefined1 *)&uStack_22c;
                pcStack_230 = "character/swordman/effect/animation/guard/spark.ani";
                uStack_234 = 0x456a7e;
                local_1e4 = FUN_004054a0();
                local_8 = 0xb;
                pcStack_230 = (char *)0x456a90;
                pcStack_230 = (char *)FUN_00516d20();
                local_8 = 0xffffffff;
                uStack_234 = 0x456a9d;
                local_15c = FUN_00516a90();
                *(int *)(local_15c + 0x4c) = param_1[5];
                piStack_208 = local_b4;
                piStack_20c = (int *)0x456ac1;
                cVar1 = FUN_004678b0();
                if (cVar1 == '\0') {
                  piStack_208 = local_b4;
                  piStack_20c = (int *)0x456b98;
                  cVar1 = FUN_00467900();
                  if (cVar1 != '\0') {
                    piStack_208 = (int *)0xe;
                    piStack_20c = local_b4;
                    piStack_210 = (int *)0x456bb4;
                    local_104 = FUN_006ca800();
                    if (local_104 != 0) {
                      piStack_208 = (int *)0x0;
                      piStack_20c = (int *)0xe;
                      piStack_210 = (int *)local_b4[0x2ae];
                      fStack_214 = 6.375347e-39;
                      game_loop_helper_e9240();
                      fStack_214 = 6.375357e-39;
                      FUN_005d9da0();
                      piStack_20c = (int *)0x456bf3;
                      piVar3 = (int *)game_get_flag_object_01a70();
                      if (*piVar3 <= *(int *)(local_104 + 8)) {
                        piStack_208 = (int *)0x0;
                        piStack_20c = (int *)0x3;
                        piStack_210 = (int *)0xe;
                        fStack_214 = 6.375416e-39;
                        FUN_0047bd30();
                        piStack_20c = (int *)0x456c16;
                        piStack_20c = (int *)thunk_FUN_006e5750();
                        piStack_210 = (int *)0x456c22;
                        FUN_00631910();
                        piStack_208 = (int *)local_b4[0x7d];
                        piStack_20c = (int *)0x4e47;
                        piStack_210 = (int *)0x0;
                        fStack_214 = 0.0;
                        iStack_218 = 0;
                        piStack_21c = local_b4;
                        pcStack_220 = (char *)0x456c5b;
                        FUN_0042f340();
                      }
                    }
                  }
                }
                else {
                  piStack_208 = (int *)0xc;
                  piStack_20c = local_b4;
                  piStack_210 = (int *)0x456add;
                  local_100 = FUN_006ca800();
                  if (local_100 != 0) {
                    piStack_208 = (int *)0x1;
                    piStack_20c = (int *)0xc;
                    piStack_210 = (int *)local_b4[0x2ae];
                    fStack_214 = 6.375046e-39;
                    game_loop_helper_e9240();
                    fStack_214 = 6.375056e-39;
                    FUN_005d9da0();
                    piStack_20c = (int *)0x456b1c;
                    piVar3 = (int *)game_get_flag_object_01a70();
                    if (*piVar3 <= *(int *)(local_100 + 8)) {
                      piStack_208 = (int *)0x0;
                      piStack_20c = (int *)0x4;
                      piStack_210 = (int *)0xc;
                      fStack_214 = 6.375115e-39;
                      FUN_0047bd30();
                      piStack_20c = (int *)0x456b3f;
                      piStack_20c = (int *)thunk_FUN_006e5750();
                      piStack_210 = (int *)0x456b4b;
                      FUN_00631910();
                      piStack_208 = (int *)local_b4[0x7d];
                      piStack_20c = (int *)0x4e47;
                      piStack_210 = (int *)0x0;
                      fStack_214 = 0.0;
                      iStack_218 = 0;
                      piStack_21c = local_b4;
                      pcStack_220 = (char *)0x456b84;
                      FUN_0042f340();
                    }
                  }
                }
              }
              else {
                local_b7 = '\0';
                if ((((local_b4[0x69] == 0) || (local_b4[0x69] == 1)) || (local_b4[0x69] == 2)) ||
                   (local_b4[0x69] == 400)) {
                  local_13c = 3;
                  piStack_208 = (int *)local_1d8;
                  piStack_20c = (int *)0x45682a;
                  piStack_208 = (int *)FUN_00489e00();
                  piStack_20c = &local_13c;
                  piStack_210 = &local_1dc;
                  fStack_214 = 6.374061e-39;
                  FUN_00489da0();
                  piStack_20c = (int *)0x456851;
                  cVar1 = FUN_0040d2d0();
                  if (cVar1 != '\0') {
                    local_140 = 3;
                    piStack_208 = &local_140;
                    piStack_20c = (int *)0x45687e;
                    iVar2 = FUN_0048a8f0();
                    if (0 < *(int *)(iVar2 + 0x74)) {
                      piStack_208 = (int *)0x456889;
                      iVar2 = FUN_00641430();
                      local_148 = (float)(iVar2 % 100);
                      piStack_208 = (int *)0x0;
                      piStack_20c = (int *)0x3;
                      piStack_210 = (int *)0x4568ac;
                      fVar6 = (float10)FUN_0047bd30();
                      local_144 = (float)fVar6;
                      if (local_148 < local_144) {
                        piStack_208 = (int *)0x1;
                        piStack_20c = (int *)0x4568d4;
                        iVar2 = img_path_loader_21();
                        if (iVar2 == 1) {
                          local_b7 = '\x01';
                        }
                      }
                    }
                  }
                }
                if ((((local_b7 == '\0') && (param_1[5] == -1)) &&
                    (*(char *)((int)local_b4 + 0xdf1) != '\0')) &&
                   (((local_b4[0x69] == 0 || (local_b4[0x69] == 1)) ||
                    ((local_b4[0x69] == 2 || (local_b4[0x69] == 400)))))) {
                  piStack_208 = (int *)0x7;
                  piStack_20c = local_b4;
                  piStack_210 = (int *)0x45695e;
                  local_14c = FUN_006ca800();
                  if (local_14c != 0) {
                    piStack_208 = (int *)0x456975;
                    iVar2 = FUN_00641430();
                    local_154 = (float)(iVar2 % 100);
                    piStack_208 = (int *)0x0;
                    piStack_20c = (int *)0x7;
                    piStack_210 = (int *)0x456998;
                    fVar6 = (float10)FUN_0047bd30();
                    local_150 = (float)fVar6;
                    if (local_154 < local_150) {
                      piStack_208 = (int *)0x7;
                      piStack_20c = (int *)0x4569c0;
                      img_path_loader_21();
                      local_b7 = '\x01';
                    }
                  }
                }
                if (local_b7 == '\0') {
                  piStack_208 = param_1;
                  piStack_20c = (int *)0x4569ec;
                  (**(code **)(*local_b4 + 0x120))();
                }
              }
            }
            else if (((local_b4[0x69] == 3) || (9 < local_b4[0x69])) || (local_b4[0x69] == -1)) {
              piStack_208 = param_1;
              piStack_20c = (int *)0x4567a2;
              (**(code **)(*local_b4 + 0x11c))();
            }
          }
        }
      }
    }
    else if (local_b4[0x69] != 100) {
      piStack_208 = (int *)0x45620e;
      cVar1 = FUN_006357d0();
      if (cVar1 != '\0') {
        piStack_208 = (int *)0x456224;
        cVar1 = FUN_004677f0();
        if (cVar1 == '\0') {
          if (local_b4[0x69] == 0x1a4) {
            local_b4[0x8c] = 250000;
            piStack_208 = (int *)0x1;
            piStack_20c = (int *)0x1;
            piStack_210 = (int *)0x456498;
            fVar6 = (float10)FUN_0047bd30();
            local_134 = (float)fVar6;
            local_b4[0x284] = (int)(local_134 * 1000.0);
            piStack_208 = (int *)0x4;
            piStack_20c = (int *)(float)param_1[4];
            piStack_210 = (int *)(float)local_b4[0x8a];
            fStack_214 = (float)param_1[2];
            local_1d0 = (undefined1 *)&uStack_22c;
            pcStack_230 = "character/swordman/effect/animation/guard/spark.ani";
            uStack_234 = 0x456505;
            local_1d4 = FUN_004054a0();
            local_8 = 10;
            pcStack_230 = (char *)0x456517;
            pcStack_230 = (char *)FUN_00516d20();
            local_8 = 0xffffffff;
            uStack_234 = 0x456524;
            local_138 = FUN_00516a90();
            *(int *)(local_138 + 0x4c) = param_1[5];
            piStack_208 = local_b4;
            piStack_20c = (int *)0x456548;
            cVar1 = FUN_004678b0();
            if (cVar1 == '\0') {
              piStack_208 = local_b4;
              piStack_20c = (int *)0x45661f;
              cVar1 = FUN_00467900();
              if (cVar1 != '\0') {
                piStack_208 = (int *)0xe;
                piStack_20c = local_b4;
                piStack_210 = (int *)0x45663b;
                local_fc = FUN_006ca800();
                if (local_fc != 0) {
                  piStack_208 = (int *)0x0;
                  piStack_20c = (int *)0xe;
                  piStack_210 = (int *)local_b4[0x2ae];
                  fStack_214 = 6.373384e-39;
                  game_loop_helper_e9240();
                  fStack_214 = 6.373394e-39;
                  FUN_005d9da0();
                  piStack_20c = (int *)0x45667a;
                  piVar3 = (int *)game_get_flag_object_01a70();
                  if (*piVar3 <= *(int *)(local_fc + 8)) {
                    piStack_208 = (int *)0x0;
                    piStack_20c = (int *)0x3;
                    piStack_210 = (int *)0xe;
                    fStack_214 = 6.373453e-39;
                    FUN_0047bd30();
                    piStack_20c = (int *)0x45669d;
                    piStack_20c = (int *)thunk_FUN_006e5750();
                    piStack_210 = (int *)0x4566a9;
                    FUN_00631910();
                    piStack_208 = (int *)local_b4[0x7d];
                    piStack_20c = (int *)0x4e47;
                    piStack_210 = (int *)0x0;
                    fStack_214 = 0.0;
                    iStack_218 = 0;
                    piStack_21c = local_b4;
                    pcStack_220 = (char *)0x4566e2;
                    FUN_0042f340();
                  }
                }
              }
            }
            else {
              piStack_208 = (int *)0xc;
              piStack_20c = local_b4;
              piStack_210 = (int *)0x456564;
              local_f8 = FUN_006ca800();
              if (local_f8 != 0) {
                piStack_208 = (int *)0x1;
                piStack_20c = (int *)0xc;
                piStack_210 = (int *)local_b4[0x2ae];
                fStack_214 = 6.373083e-39;
                game_loop_helper_e9240();
                fStack_214 = 6.373093e-39;
                FUN_005d9da0();
                piStack_20c = (int *)0x4565a3;
                piVar3 = (int *)game_get_flag_object_01a70();
                if (*piVar3 <= *(int *)(local_f8 + 8)) {
                  piStack_208 = (int *)0x0;
                  piStack_20c = (int *)0x4;
                  piStack_210 = (int *)0xc;
                  fStack_214 = 6.373152e-39;
                  FUN_0047bd30();
                  piStack_20c = (int *)0x4565c6;
                  piStack_20c = (int *)thunk_FUN_006e5750();
                  piStack_210 = (int *)0x4565d2;
                  FUN_00631910();
                  piStack_208 = (int *)local_b4[0x7d];
                  piStack_20c = (int *)0x4e47;
                  piStack_210 = (int *)0x0;
                  fStack_214 = 0.0;
                  iStack_218 = 0;
                  piStack_21c = local_b4;
                  pcStack_220 = (char *)0x45660b;
                  FUN_0042f340();
                }
              }
            }
          }
          else {
            local_b6 = '\0';
            if (((local_b4[0x69] == 0) || (local_b4[0x69] == 1)) ||
               ((local_b4[0x69] == 2 || (local_b4[0x69] == 400)))) {
              local_118 = 3;
              piStack_208 = (int *)local_1f0;
              piStack_20c = (int *)0x4562b1;
              piStack_208 = (int *)FUN_00489e00();
              piStack_20c = &local_118;
              piStack_210 = &local_1cc;
              fStack_214 = 6.372098e-39;
              FUN_00489da0();
              piStack_20c = (int *)0x4562d8;
              cVar1 = FUN_0040d2d0();
              if (cVar1 != '\0') {
                local_11c = 3;
                piStack_208 = &local_11c;
                piStack_20c = (int *)0x456305;
                iVar2 = FUN_0048a8f0();
                if (0 < *(int *)(iVar2 + 0x74)) {
                  piStack_208 = (int *)0x456310;
                  iVar2 = FUN_00641430();
                  local_124 = (float)(iVar2 % 100);
                  piStack_208 = (int *)0x0;
                  piStack_20c = (int *)0x3;
                  piStack_210 = (int *)0x456333;
                  fVar6 = (float10)FUN_0047bd30();
                  local_120 = (float)fVar6;
                  if (local_124 < local_120) {
                    piStack_208 = (int *)0x1;
                    piStack_20c = (int *)0x45635b;
                    iVar2 = img_path_loader_21();
                    if (iVar2 == 1) {
                      local_b6 = '\x01';
                    }
                  }
                }
              }
            }
            if ((((local_b6 == '\0') && (param_1[5] == -1)) &&
                (*(char *)((int)local_b4 + 0xdf1) != '\0')) &&
               ((((local_b4[0x69] == 0 || (local_b4[0x69] == 1)) || (local_b4[0x69] == 2)) ||
                (local_b4[0x69] == 400)))) {
              piStack_208 = (int *)0x7;
              piStack_20c = local_b4;
              piStack_210 = (int *)0x4563e5;
              local_128 = FUN_006ca800();
              if (local_128 != 0) {
                piStack_208 = (int *)0x4563fc;
                iVar2 = FUN_00641430();
                local_130 = (float)(iVar2 % 100);
                piStack_208 = (int *)0x0;
                piStack_20c = (int *)0x7;
                piStack_210 = (int *)0x45641f;
                fVar6 = (float10)FUN_0047bd30();
                local_12c = (float)fVar6;
                if (local_130 < local_12c) {
                  piStack_208 = (int *)0x7;
                  piStack_20c = (int *)0x456447;
                  img_path_loader_21();
                  local_b6 = '\x01';
                }
              }
            }
            if (local_b6 == '\0') {
              piStack_208 = param_1;
              piStack_20c = (int *)0x456473;
              (**(code **)(*local_b4 + 0x11c))();
            }
          }
        }
      }
    }
  }
  piStack_208 = param_1;
  piStack_20c = (int *)0x456c95;
  (**(code **)(*local_b4 + 0xd0))();
  if (*(int *)(*param_1 + 0x204) == 0) {
    *(undefined1 *)((int)local_b4 + 0x95) = 1;
    piStack_1f8 = (int *)*param_1;
    puStack_1fc = (undefined1 *)0x456cc2;
    FUN_00486660();
    *(undefined1 *)((int)local_b4 + 0x95) = 0;
  }
  ExceptionList = local_10;
  return local_c4;
}


/* ==== 004586c0  img_path_loader_18  size=2908 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void img_path_loader_18(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  int *in_ECX;
  float10 fVar6;
  uint local_4c;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_2c [24];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00710f13;
  local_10 = ExceptionList;
  local_14 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (in_ECX[0x85] == 0) {
    iVar2 = (**(code **)(*in_ECX + 0x58))();
    *(undefined1 *)(iVar2 + 0x54) = 0;
    iVar2 = (**(code **)(*in_ECX + 0x58))();
    *(undefined4 *)(iVar2 + 0x88) = 1;
    if ((char)in_ECX[6] == '\0') {
      (**(code **)(*in_ECX + 0x58))();
      FUN_004e8ae0();
    }
    else {
      (**(code **)(*in_ECX + 0x58))();
      FUN_004e8ae0();
    }
    iVar2 = (**(code **)(*in_ECX + 0x58))();
    *(undefined4 *)(iVar2 + 0x88) = 0;
    FUN_0044e0f0();
    while( true ) {
      FUN_0040d9a0();
      cVar1 = FUN_0040d2d0();
      if (cVar1 == '\0') break;
      FUN_0042a580();
      FUN_0062fc30();
      FUN_0062fc30();
      FUN_0062fc30();
      FUN_004e8ae0();
      FUN_0044dde0();
    }
    FUN_004021b0();
    while( true ) {
      FUN_00402170();
      cVar1 = FUN_00426ed0();
      if (cVar1 == '\0') break;
      FUN_0044ddc0();
      iVar2 = FUN_005e9570();
      if (iVar2 != 0) {
        *(undefined1 *)(iVar2 + 0x54) = 0;
        if (in_ECX[7] == 0) {
          iVar2 = FUN_0062fc30();
          *(undefined1 *)(iVar2 + 0x3b) = 0xff;
        }
        else {
          iVar2 = FUN_0062fc30();
          *(undefined1 *)(iVar2 + 0x3b) = 0x7f;
        }
        FUN_004e8ac0();
      }
      FUN_00489b50();
    }
    if ((char)in_ECX[0x2a3] != '\0') {
      FUN_004021b0();
      while( true ) {
        FUN_00402170();
        cVar1 = FUN_00426ed0();
        if (cVar1 == '\0') break;
        FUN_0044ddc0();
        iVar2 = FUN_005e9570();
        if (iVar2 != 0) {
          *(undefined1 *)(iVar2 + 0x54) = 0;
          FUN_0044ddc0();
          iVar2 = FUN_004277a0();
          if (iVar2 == -1) {
            FUN_0044ddc0();
            iVar2 = FUN_004277a0();
            if (iVar2 == -1) {
              FUN_004e8ae0();
            }
          }
        }
        FUN_00489b50();
      }
    }
    cVar1 = game_frame_should_continue();
    if ((cVar1 == '\0') || ((char)in_ECX[0xb] != '\0')) {
      if (in_ECX[0x16] != -1) {
        fVar6 = (float10)FUN_00451d90();
        FUN_004021b0();
        while( true ) {
          FUN_00402170();
          cVar1 = FUN_00426ed0();
          if (cVar1 == '\0') break;
          piVar3 = (int *)FUN_0044ddc0();
          piVar4 = (int *)game_get_flag_object_01a70();
          if (*piVar3 != *piVar4) {
            FUN_0044ddc0();
            iVar2 = FUN_005e9570();
            if (iVar2 != 0) {
              *(undefined1 *)(iVar2 + 0x54) = 1;
              *(uint *)(iVar2 + 0x20) =
                   ((int)((1.0 - (float)fVar6) * 0.5 * 255.0) & 0xffU) << 8 | 0xffff0000;
              FUN_0044ddc0();
              iVar2 = FUN_004277a0();
              if (iVar2 != -1) {
                FUN_0044ddc0();
                iVar2 = FUN_004277a0();
                if (iVar2 != -1) goto LAB_00458c10;
              }
              FUN_004e8ac0();
            }
          }
LAB_00458c10:
          FUN_00489b50();
        }
        in_ECX[0x16] = in_ECX[0x16] + param_1;
      }
    }
    else {
      in_ECX[0x16] = 0;
    }
    (**(code **)(*in_ECX + 0x1c))();
    (**(code **)(*in_ECX + 0x18))();
  }
  else if (in_ECX[0x85] == 2) {
    if (in_ECX[8] < 400) {
      FUN_004021b0();
      while( true ) {
        FUN_00402170();
        cVar1 = FUN_00426ed0();
        if (cVar1 == '\0') break;
        FUN_0044ddc0();
        iVar2 = FUN_005e9570();
        if (iVar2 != 0) {
          FUN_004e8ac0();
        }
        FUN_00489b50();
      }
    }
    else if ((((in_ECX[8] < 400) || (799 < in_ECX[8])) && (799 < in_ECX[8])) && (in_ECX[8] < 0x4b0))
    {
      FUN_004021b0();
      while( true ) {
        FUN_00402170();
        cVar1 = FUN_00426ed0();
        if (cVar1 == '\0') break;
        FUN_0044ddc0();
        iVar2 = FUN_005e9570();
        if (iVar2 != 0) {
          FUN_004e8ac0();
        }
        FUN_00489b50();
      }
    }
  }
  else if (in_ECX[0x85] == 3) {
    FUN_004021b0();
    while( true ) {
      FUN_00402170();
      cVar1 = FUN_00426ed0();
      if (cVar1 == '\0') break;
      FUN_0044ddc0();
      iVar2 = FUN_005e9570();
      if (iVar2 != 0) {
        FUN_004e8ac0();
      }
      FUN_00489b50();
    }
    if ((in_ECX[0x376] == 4) && (piVar3 = (int *)game_get_player_or_session_blob(), in_ECX == piVar3)) {
      FUN_004054a0();
      local_8 = 0;
      FUN_004bcf00();
      local_8 = 0xffffffff;
      FUN_004b8ca0();
      FUN_004054a0("sprite/interface/countdown.img");
      FUN_004baec0();
      if (0 < in_ECX[0x38b]) {
        FUN_004054a0("sprite/interface/countdown.img");
        FUN_004baec0();
        FUN_0040a850();
        local_8 = 1;
        for (local_4c = 0; uVar5 = FUN_00410b30(), local_4c < uVar5; local_4c = local_4c + 1) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator[]
                    (local_2c,local_4c);
          FUN_004054a0("sprite/interface/countdown.img");
          FUN_004baec0();
          FUN_004054a0();
          local_8._0_1_ = 2;
          FUN_004bcf00();
          local_8 = CONCAT31(local_8._1_3_,1);
          FUN_004b8ca0();
        }
        local_8 = 0xffffffff;
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                  ((function<void___cdecl(void)> *)local_2c);
      }
    }
  }
  ExceptionList = local_10;
  return;
}


/* ==== 00459220  img_path_loader_19  size=1149 ==== */

void img_path_loader_19(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00710f4d;
  local_10 = ExceptionList;
  if (in_ECX[0x376] != 4) {
    return;
  }
  if (in_ECX[0x85] == 3) {
    if (in_ECX[0x38b] < 1) {
      return;
    }
    ExceptionList = &local_10;
    piVar1 = (int *)game_get_state_ptr_d1520();
    if ((*piVar1 != 0) && (puVar2 = (undefined4 *)game_get_state_ptr_d1520(), *(int *)*puVar2 != 0)) {
      iVar3 = game_get_player_or_session_blob();
      if (*(char *)(iVar3 + 0xdb8) == '\0') {
        puVar2 = (undefined4 *)game_get_state_ptr_d1520();
        if (0 < *(int *)(*(int *)*puVar2 + 0x80)) {
          piVar1 = (int *)game_get_state_ptr_d1520();
          iVar3 = *piVar1;
          puVar2 = (undefined4 *)game_get_state_ptr_d1520();
          if (*(int *)(*(int *)*puVar2 + 0x80) <= *(int *)(iVar3 + 0xbc)) {
            FUN_004054a0();
            FUN_0049d780();
            ExceptionList = local_10;
            return;
          }
        }
        piVar1 = (int *)game_get_state_ptr_d1520();
        *(int *)(*piVar1 + 0xbc) = *(int *)(*piVar1 + 0xbc) + 1;
      }
      else {
        puVar2 = (undefined4 *)game_get_state_ptr_d1520();
        if (0 < *(int *)(*(int *)*puVar2 + 0x80)) {
          FUN_004d1b20();
          piVar1 = (int *)FUN_00489d00();
          puVar2 = (undefined4 *)game_get_state_ptr_d1520();
          if (*(int *)(*(int *)*puVar2 + 0x80) <= *piVar1) {
            FUN_004054a0();
            FUN_0049d780();
            ExceptionList = local_10;
            return;
          }
        }
        FUN_004d1b20();
        piVar1 = (int *)FUN_00489d00();
        *piVar1 = *piVar1 + 1;
      }
    }
    *(undefined1 *)(in_ECX + 0x37c) = 0;
    in_ECX[0x38b] = in_ECX[0x38b] + -1;
    in_ECX[7] = 3000;
    FUN_0040d490();
    in_ECX[8] = 0;
    in_ECX[0x85] = 0;
    in_ECX[0x1ba] = in_ECX[0x1b8];
    in_ECX[0x1bb] = in_ECX[0x1b9];
    *(undefined1 *)((int)in_ECX + 0x97) = 1;
    (**(code **)(*in_ECX + 0x134))();
    *(undefined1 *)((int)in_ECX + 0x97) = 0;
    FUN_0042f340();
    FUN_004054a0();
    iVar3 = FUN_004aa990();
    *(int **)(iVar3 + 0x60) = in_ECX;
    FUN_004054a0();
    (**(code **)(*in_ECX + 0x78))();
    FUN_0062fd90();
    FUN_004054a0();
    iVar3 = (**(code **)(*in_ECX + 0x78))();
    FUN_0062fd90();
    *(int *)(iVar3 + 0x114) = *(int *)(iVar3 + 0x114) + 100;
    FUN_004054a0();
    iVar3 = (**(code **)(*in_ECX + 0x78))();
    FUN_0062fd90();
    *(int *)(iVar3 + 0x114) = *(int *)(iVar3 + 0x114) + 200;
    FUN_004054a0();
    iVar3 = (**(code **)(*in_ECX + 0x78))();
    FUN_0062fd90();
    FUN_004054a0("sprite/common/commoneffect/bufficon.img");
    FUN_0062fc50();
    *(int *)(iVar3 + 0x114) = *(int *)(iVar3 + 0x114) + 300;
    (**(code **)(*in_ECX + 0x10))();
    piVar1 = (int *)game_get_player_or_session_blob();
    if (in_ECX == piVar1) {
      FUN_006a3b20();
      FUN_004054a0();
      local_8 = 0;
      FUN_004d1bb0();
      game_timing_or_delay_helper();
      local_8 = 0xffffffff;
      FUN_006ce000();
      FUN_005397f0();
      FUN_006a51c0();
    }
    ExceptionList = local_10;
    return;
  }
  return;
}


/* ==== 0045bde0  img_path_loader_20  size=33167 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void img_path_loader_20(void)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  uint uVar7;
  int *in_ECX;
  uint uVar8;
  float10 fVar9;
  float fVar10;
  undefined1 auStack_c8c [4];
  undefined4 uStack_c88;
  char *pcStack_c84;
  char *pcStack_c80;
  undefined4 uStack_c7c;
  char *pcStack_c78;
  undefined4 uStack_c74;
  char *pcStack_c70;
  char *pcStack_c6c;
  char *pcStack_c68;
  char *pcStack_c64;
  char *pcStack_c60;
  undefined4 uStack_c5c;
  char *pcStack_c58;
  char *pcStack_c54;
  char *pcStack_c50;
  undefined4 uStack_c4c;
  char *pcStack_c48;
  undefined4 uStack_c44;
  char *pcStack_c40;
  char *pcStack_c3c;
  char *pcStack_c38;
  undefined4 uStack_c34;
  char *pcStack_c30;
  int iStack_c2c;
  char *pcStack_c28;
  char *pcStack_c24;
  int *piStack_c20;
  char *pcStack_c1c;
  int *piStack_c18;
  int *piStack_c14;
  int *piStack_c10;
  function<void___cdecl(void)> *pfStack_c0c;
  undefined1 *puStack_c08;
  int *piStack_c04;
  function<void___cdecl(void)> *pfStack_c00;
  uint uStack_bfc;
  undefined1 local_ab0 [4];
  undefined1 local_aac [4];
  undefined1 *local_aa8;
  undefined1 *local_aa4;
  undefined1 *local_aa0;
  undefined1 *local_a9c;
  undefined1 *local_a98;
  undefined1 *local_a94;
  undefined1 *local_a90;
  undefined1 *local_a8c;
  undefined1 *local_a88;
  undefined1 *local_a84;
  undefined1 *local_a80;
  undefined1 *local_a7c;
  undefined1 *local_a78;
  undefined1 *local_a74;
  undefined1 *local_a70;
  undefined1 *local_a6c;
  undefined1 *local_a68;
  undefined1 *local_a64;
  undefined1 *local_a60;
  undefined1 *local_a5c;
  undefined1 *local_a58;
  undefined1 *local_a54;
  undefined1 *local_a50;
  undefined1 *local_a4c;
  undefined1 *local_a48;
  undefined1 *local_a44;
  undefined1 *local_a40;
  undefined1 *local_a3c;
  undefined1 *local_a38;
  undefined1 *local_a34;
  undefined1 *local_a30;
  undefined1 *local_a2c;
  undefined1 *local_a28;
  undefined1 *local_a24;
  undefined1 *local_a20;
  undefined1 *local_a1c;
  undefined1 *local_a18;
  undefined1 *local_a14;
  undefined1 *local_a10;
  undefined1 *local_a0c;
  undefined1 *local_a08;
  undefined1 *local_a04;
  undefined1 *local_a00;
  undefined1 *local_9fc;
  undefined1 *local_9f8;
  undefined1 *local_9f4;
  undefined1 *local_9f0;
  undefined1 *local_9ec;
  undefined1 *local_9e8;
  undefined1 *local_9e4;
  undefined1 *local_9e0;
  undefined1 *local_9dc;
  undefined1 *local_9d8;
  undefined1 *local_9d4;
  undefined1 *local_9d0;
  undefined1 *local_9cc;
  undefined1 *local_9c8;
  undefined1 *local_9c4;
  undefined1 *local_9c0;
  undefined1 *local_9bc;
  undefined1 *local_9b8;
  undefined1 *local_9b4;
  undefined1 *local_9b0;
  undefined1 *local_9ac;
  undefined1 *local_9a8;
  undefined1 *local_9a4;
  undefined1 *local_9a0;
  undefined1 *local_99c;
  undefined1 *local_998;
  undefined1 *local_994;
  undefined1 *local_990;
  undefined1 *local_98c;
  undefined1 *local_988;
  undefined1 *local_984;
  undefined1 *local_980;
  undefined1 *local_97c;
  undefined1 local_978 [4];
  undefined1 local_974 [4];
  undefined1 *local_970;
  undefined1 *local_96c;
  undefined1 *local_968;
  undefined1 *local_964;
  undefined1 *local_960;
  undefined1 *local_95c;
  undefined1 *local_958;
  undefined1 *local_954;
  undefined1 *local_950;
  undefined1 *local_94c;
  undefined4 local_948 [2];
  int local_940;
  int *local_93c;
  float local_938;
  int local_930;
  int local_92c;
  int local_928;
  int local_924;
  int local_920;
  int local_91c;
  int local_918;
  int local_914;
  int local_910;
  int local_90c;
  int local_904;
  int local_900;
  int local_8fc;
  int local_8f8;
  int local_8f4;
  int local_8f0;
  int local_8ec;
  int local_8e8;
  int local_8e4;
  int local_8e0;
  int local_8d8;
  int local_8d4;
  int local_8d0;
  int local_8cc;
  int local_8c8;
  int local_8c4;
  int local_8c0;
  int local_8bc;
  int local_8b8;
  int local_8b4;
  int local_8ac;
  int local_8a8;
  int local_8a4;
  int local_8a0;
  int local_89c;
  int local_898;
  int local_894;
  int local_890;
  int local_88c;
  int local_888;
  float local_884;
  int local_880;
  int local_87c;
  int local_878;
  float local_874;
  int local_870;
  int local_86c;
  int local_868;
  int local_860;
  undefined4 local_85c;
  undefined4 local_858;
  int *local_854;
  undefined4 local_850;
  undefined4 local_84c;
  float local_848;
  undefined4 local_844;
  undefined4 local_840;
  undefined4 local_83c;
  undefined4 local_838;
  undefined4 local_834;
  int *local_830;
  undefined4 local_82c;
  int *local_828;
  undefined4 local_824;
  float local_820;
  undefined1 local_81c [4];
  undefined4 local_818;
  undefined4 local_814;
  undefined4 local_810;
  undefined4 local_80c;
  int local_808;
  int *local_804;
  undefined4 local_800;
  int *local_7fc;
  undefined4 local_7f8;
  undefined4 local_7f4;
  float local_7f0;
  undefined4 local_7ec;
  undefined4 local_7e8;
  undefined4 local_7e4;
  float local_7e0;
  undefined4 local_7dc;
  float local_7d8;
  undefined4 local_7d4;
  float local_7d0;
  undefined4 local_7cc;
  float local_7c8;
  undefined4 local_7c4;
  undefined4 local_7c0;
  int *local_7bc;
  undefined4 local_7b8;
  int *local_7b4;
  undefined4 local_7b0;
  int *local_7ac;
  undefined4 local_7a8;
  int *local_7a4;
  undefined4 local_7a0;
  undefined4 local_79c;
  int *local_798;
  undefined4 local_794;
  undefined4 local_790;
  undefined4 local_78c;
  int local_788;
  int local_784;
  int local_780;
  int *local_77c;
  undefined4 local_778;
  undefined4 local_774;
  float local_770;
  undefined4 local_76c;
  int local_768;
  int *local_764;
  undefined4 local_760;
  undefined4 local_75c;
  float local_758;
  undefined4 local_754;
  int *local_750;
  undefined4 local_74c;
  undefined4 local_748;
  float local_744;
  undefined4 local_740;
  int local_73c;
  int local_738;
  int local_734;
  int *local_730;
  float local_72c;
  int *local_728;
  int local_724;
  int local_720;
  int local_71c;
  int local_718;
  int local_714;
  int local_710;
  int local_70c;
  int local_708;
  int local_704;
  int *local_700;
  float local_6fc;
  float local_6f8;
  int *local_6f4;
  int local_6f0;
  int local_6ec;
  int local_6e8;
  int local_6e4;
  int local_6e0;
  int local_6dc;
  int local_6d8;
  int local_6d4;
  float local_6d0;
  int *local_6cc;
  float local_6c8;
  int *local_6c4;
  undefined1 local_6c0 [4];
  float local_6bc;
  int local_6b8;
  int local_6b4;
  int local_6b0;
  int local_6ac;
  int local_6a8;
  float local_6a4;
  int *local_6a0;
  float local_69c;
  int *local_698;
  int *local_694;
  float local_690;
  int *local_68c;
  int *local_688;
  int *local_684;
  float local_680;
  float local_67c;
  float local_678;
  float local_674;
  float local_670;
  float local_66c;
  int *local_668;
  int *local_664;
  int *local_660;
  int *local_65c;
  int *local_658;
  int *local_654;
  int *local_650;
  int local_64c [2];
  int *local_644;
  int *local_640;
  float local_63c;
  int *local_638;
  int local_634;
  int *local_630;
  int *local_62c;
  int local_628;
  int *local_624;
  int *local_620;
  int local_61c;
  int *local_618;
  int *local_614;
  int local_610;
  int *local_60c;
  int *local_608;
  char *local_604;
  int *local_600;
  int *local_5fc;
  int *local_5f8;
  int *local_5f4;
  int *local_5f0;
  int local_5ec;
  int *local_5e8;
  int *local_5e4;
  int *local_5e0;
  int *local_5dc;
  int *local_5d8;
  int *local_5d4;
  int *local_5d0;
  int *local_5cc;
  int *local_5c8;
  int *local_5c4;
  int local_5c0;
  int local_5bc;
  int *local_5b8;
  int local_5b4;
  int *local_5b0;
  int *local_5ac;
  int *local_5a8;
  int local_5a4;
  int *local_5a0;
  int *local_59c;
  int *local_598;
  int local_594;
  int *local_590;
  int *local_58c;
  int local_588;
  int *local_584;
  int *local_580;
  int local_57c;
  int local_578;
  int *local_574;
  int local_570;
  int local_56c;
  int *local_568;
  int *local_564;
  int *local_560;
  int local_55c;
  int *local_558;
  int *local_554;
  int *local_550;
  int *local_54c;
  int *local_548;
  int *local_544;
  int local_540;
  int *local_53c;
  int *local_538;
  int local_534;
  int *local_530;
  int *local_52c;
  int *local_528;
  int *local_524;
  int *local_520;
  int *local_51c;
  int *local_518;
  int local_514;
  undefined1 local_510 [4];
  undefined1 local_50c [4];
  undefined1 local_508 [4];
  undefined1 local_504 [4];
  undefined1 local_500 [4];
  undefined1 local_4fc [4];
  undefined1 local_4f8 [4];
  undefined1 local_4f4 [4];
  undefined1 local_4f0 [4];
  int local_4ec;
  undefined1 local_4e8 [4];
  undefined1 local_4e4 [4];
  undefined1 local_4e0 [4];
  undefined1 local_4dc [4];
  undefined1 local_4d8 [4];
  undefined1 local_4d4 [4];
  undefined1 local_4d0 [4];
  int local_4cc;
  int local_4c8;
  int local_4c4;
  int local_4c0;
  uint local_4bc;
  uint local_4b8;
  uint local_4b4;
  int local_4b0;
  int local_4ac;
  int local_4a8;
  byte local_4a2;
  byte local_4a1;
  byte local_4a0;
  byte local_49f;
  byte local_49e;
  byte local_49d;
  byte local_49c;
  byte local_49b;
  byte local_49a;
  byte local_499;
  byte local_498;
  byte local_497;
  byte local_496;
  byte local_495;
  int local_494;
  char local_48e;
  char local_48d;
  int local_48c;
  int local_488;
  int local_484;
  char local_47d;
  int *local_47c;
  int local_478;
  int local_474;
  int local_470;
  int local_46c;
  int *local_468;
  function<void___cdecl(void)> local_464 [24];
  function<void___cdecl(void)> local_44c [24];
  function<void___cdecl(void)> local_434 [24];
  function<void___cdecl(void)> local_41c [24];
  function<void___cdecl(void)> local_404 [24];
  function<void___cdecl(void)> local_3ec [24];
  function<void___cdecl(void)> local_3d4 [24];
  function<void___cdecl(void)> local_3bc [24];
  function<void___cdecl(void)> local_3a4 [24];
  function<void___cdecl(void)> local_38c [24];
  function<void___cdecl(void)> local_374 [24];
  function<void___cdecl(void)> local_35c [24];
  function<void___cdecl(void)> local_344 [24];
  function<void___cdecl(void)> local_32c [24];
  function<void___cdecl(void)> local_314 [24];
  function<void___cdecl(void)> local_2fc [24];
  function<void___cdecl(void)> local_2e4 [24];
  function<void___cdecl(void)> local_2cc [24];
  function<void___cdecl(void)> local_2b4 [24];
  function<void___cdecl(void)> local_29c [24];
  function<void___cdecl(void)> local_284 [24];
  function<void___cdecl(void)> local_26c [24];
  function<void___cdecl(void)> local_254 [24];
  function<void___cdecl(void)> local_23c [24];
  function<void___cdecl(void)> local_224 [24];
  function<void___cdecl(void)> local_20c [24];
  function<void___cdecl(void)> local_1f4 [24];
  function<void___cdecl(void)> local_1dc [24];
  function<void___cdecl(void)> local_1c4 [24];
  function<void___cdecl(void)> local_1ac [24];
  function<void___cdecl(void)> local_194 [24];
  function<void___cdecl(void)> local_17c [24];
  function<void___cdecl(void)> local_164 [24];
  function<void___cdecl(void)> local_14c [24];
  function<void___cdecl(void)> local_134 [24];
  function<void___cdecl(void)> local_11c [24];
  function<void___cdecl(void)> local_104 [24];
  function<void___cdecl(void)> local_ec [24];
  function<void___cdecl(void)> local_d4 [24];
  function<void___cdecl(void)> local_bc [24];
  function<void___cdecl(void)> local_a4 [24];
  function<void___cdecl(void)> local_8c [24];
  function<void___cdecl(void)> local_74 [24];
  function<void___cdecl(void)> local_5c [24];
  function<void___cdecl(void)> local_44 [24];
  function<void___cdecl(void)> local_2c [24];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071119a;
  local_10 = ExceptionList;
  uStack_bfc = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  if (in_ECX[0x2ae] != 0) {
    return;
  }
  if ((char)in_ECX[0x15] != '\0') {
    return;
  }
  iVar4 = in_ECX[0x69];
  local_468 = in_ECX;
  local_14 = uStack_bfc;
  if (0x10e < iVar4) {
    local_494 = iVar4 + -0x122;
    switch(iVar4) {
    case 0x122:
      if (in_ECX[0x6a] == 0) {
        pfStack_c00 = (function<void___cdecl(void)> *)0x463329;
        ExceptionList = &local_10;
        (**(code **)(*in_ECX + 0x108))();
        pfStack_c00 = (function<void___cdecl(void)> *)0x0;
        piStack_c04 = (int *)0xd;
        puStack_c08 = (undefined1 *)0x463343;
        (**(code **)(*local_468 + 0x138))();
        puStack_c08 = (undefined1 *)0x3;
        pfStack_c0c = (function<void___cdecl(void)> *)0x18;
        piStack_c10 = (int *)0x463352;
        puStack_c08 = (undefined1 *)FUN_0047bcc0();
        pfStack_c0c = (function<void___cdecl(void)> *)0x463369;
        (**(code **)(*local_468 + 0x104))();
        local_468[0x6a] = 1;
        ExceptionList = local_10;
        return;
      }
      pfStack_c00 = (function<void___cdecl(void)> *)0x463391;
      ExceptionList = &local_10;
      (**(code **)(*in_ECX + 0x108))();
      pfStack_c00 = (function<void___cdecl(void)> *)0x4633a7;
      (**(code **)(*local_468 + 0x134))();
      ExceptionList = local_10;
      return;
    case 0x127:
      if (in_ECX[0x249] != 0) {
        return;
      }
      if (in_ECX[0x6a] == 0) {
        pfStack_c00 = (function<void___cdecl(void)> *)0x462c27;
        ExceptionList = &local_10;
        _Vector_val<>();
        pfStack_c00 = (function<void___cdecl(void)> *)0x0;
        piStack_c04 = (int *)0x22;
        puStack_c08 = (undefined1 *)0x462c36;
        FUN_0047bd30();
        pfStack_c00 = (function<void___cdecl(void)> *)0x462c3b;
        local_948[0] = thunk_FUN_006e5750();
        pfStack_c00 = (function<void___cdecl(void)> *)0x1;
        piStack_c04 = (int *)0x22;
        puStack_c08 = (undefined1 *)0x462c50;
        fVar9 = (float10)FUN_0047bd30();
        local_820 = (float)fVar9;
        local_940 = (int)(local_820 * 1000.0);
        pfStack_c00 = (function<void___cdecl(void)> *)local_948;
        piStack_c04 = (int *)0x462c88;
        FUN_0048ab40();
        pfStack_c00 = (function<void___cdecl(void)> *)local_468;
        piStack_c04 = (int *)0x462c94;
        FUN_00658a10();
        pfStack_c00 = (function<void___cdecl(void)> *)local_468;
        piStack_c04 = (int *)0x1f4;
        puStack_c08 = (undefined1 *)0x32;
        pfStack_c0c = (function<void___cdecl(void)> *)0x3e8;
        piStack_c10 = (int *)0x1;
        piStack_c14 = (int *)0x8f;
        pcStack_c30 = "sprite/common/etc/combo.img";
        uStack_c34 = 0x462cc6;
        FUN_004054a0();
        local_8 = 0x2e;
        pcStack_c30 = (char *)0x0;
        uStack_c34 = 0x22;
        pcStack_c38 = (char *)0x462ce2;
        FUN_0047bd30();
        pcStack_c30 = (char *)0x462ce7;
        pcStack_c30 = (char *)thunk_FUN_006e5750();
        uStack_c34 = 0x462cfb;
        uStack_c34 = (**(code **)(*local_468 + 0x68))();
        pcStack_c38 = (char *)0x0;
        pcStack_c3c = (char *)0x0;
        pcStack_c40 = (char *)0x462d05;
        game_get_state_ptr_d1520();
        pcStack_c40 = (char *)0x462d0c;
        FUN_004d58e0();
        local_8 = 0xffffffff;
        pcStack_c40 = (char *)0x462d1a;
        FUN_0042e1d0();
        piStack_c18 = (int *)0x745764;
        pcStack_c1c = (char *)0x462d30;
        FUN_004054a0();
        piStack_c18 = (int *)0x462d35;
        FUN_004c3500();
        pfStack_c00 = (function<void___cdecl(void)> *)0x0;
        piStack_c04 = (int *)0xd;
        puStack_c08 = (undefined1 *)0x462d52;
        (**(code **)(*local_468 + 0x138))();
        puStack_c08 = (undefined1 *)0x1;
        pfStack_c0c = (function<void___cdecl(void)> *)0x22;
        piStack_c10 = (int *)0x462d61;
        puStack_c08 = (undefined1 *)FUN_0047bcc0();
        pfStack_c0c = (function<void___cdecl(void)> *)0x462d78;
        (**(code **)(*local_468 + 0x104))();
        local_468[0x6a] = 1;
        pcStack_c24 = "character/swordman/effect/animation/pinchhpregen1.ani";
        pcStack_c28 = (char *)0x462d9d;
        FUN_004054a0();
        pcStack_c24 = (char *)0x462db0;
        (**(code **)(*local_468 + 0x78))();
        pcStack_c3c = "character/swordman/effect/animation/pinchhpregen2.ani";
        pcStack_c40 = (char *)0x462dc6;
        FUN_004054a0();
        pcStack_c3c = (char *)0x462dd9;
        (**(code **)(*local_468 + 0x78))();
        local_824 = 0x22;
        pfStack_c00 = (function<void___cdecl(void)> *)&local_824;
        piStack_c04 = (int *)0x462dfc;
        FUN_0048a8f0();
        pfStack_c00 = (function<void___cdecl(void)> *)0x462e06;
        cVar1 = FUN_00489dd0();
        if (cVar1 == '\0') {
          pfStack_c00 = (function<void___cdecl(void)> *)&DAT_00745800;
          piStack_c04 = (int *)0x462e21;
          FUN_004054a0();
          local_8 = 0x2f;
          local_82c = 0x22;
          piStack_c18 = (int *)&DAT_007457f4;
          pcStack_c1c = (char *)0x462e47;
          FUN_004054a0();
          piStack_c18 = (int *)0x462e52;
          local_828 = (int *)FUN_0063bda0();
          pfStack_c00 = local_41c;
          piStack_c04 = &local_82c;
          puStack_c08 = (undefined1 *)0x462e83;
          local_554 = local_828;
          FUN_0048a8f0();
          piStack_c04 = (int *)0x462e8d;
          piVar3 = (int *)FUN_0048ae20();
          *local_554 = *local_554 - *piVar3;
          local_8 = 0xffffffff;
          pfStack_c00 = (function<void___cdecl(void)> *)0x462eb1;
          std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_41c);
          pfStack_c00 = (function<void___cdecl(void)> *)&DAT_00745814;
          piStack_c04 = (int *)0x462ec2;
          FUN_004054a0();
          local_8 = 0x30;
          local_834 = 0x22;
          piStack_c18 = (int *)&DAT_0074580c;
          pcStack_c1c = (char *)0x462ee8;
          FUN_004054a0();
          piStack_c18 = (int *)0x462ef3;
          local_830 = (int *)FUN_0063bda0();
          pfStack_c00 = local_404;
          piStack_c04 = &local_834;
          puStack_c08 = (undefined1 *)0x462f24;
          local_558 = local_830;
          FUN_0048a8f0();
          piStack_c04 = (int *)0x462f2e;
          piVar3 = (int *)FUN_0048ae20();
          *local_558 = *local_558 - *piVar3;
          local_8 = 0xffffffff;
          pfStack_c00 = (function<void___cdecl(void)> *)0x462f52;
          std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_404);
          pfStack_c00 = (function<void___cdecl(void)> *)0x462f58;
          piVar3 = (int *)game_get_player_or_session_blob();
          if (local_468 == piVar3) {
            pfStack_c00 = (function<void___cdecl(void)> *)0x0;
            piStack_c04 = (int *)0x22;
            puStack_c08 = (undefined1 *)local_468[0x2ae];
            pfStack_c0c = (function<void___cdecl(void)> *)0x462f76;
            game_loop_helper_e9240();
            pfStack_c0c = (function<void___cdecl(void)> *)0x462f7d;
            FUN_005d9da0();
            piStack_c04 = (int *)0x462f89;
            iVar4 = FUN_0044e440();
            pfStack_c00 = *(function<void___cdecl(void)> **)(iVar4 + 0x18);
            pcStack_c1c = (char *)0x0;
            piStack_c20 = (int *)0x22;
            pcStack_c24 = (char *)local_468[0x2ae];
            pcStack_c28 = (char *)0x462fae;
            game_loop_helper_e9240();
            pcStack_c28 = (char *)0x462fb5;
            FUN_005d9da0();
            piStack_c20 = (int *)0x462fc1;
            pcStack_c1c = (char *)FUN_0044e440();
            piStack_c20 = (int *)0x462fc9;
            FUN_00405520();
            pcStack_c1c = (char *)0x462fce;
            FUN_0067aea0();
          }
          pfStack_c00 = (function<void___cdecl(void)> *)0x462fdc;
          FUN_00657c10();
          local_838 = 0x22;
          pfStack_c00 = (function<void___cdecl(void)> *)&local_838;
          piStack_c04 = (int *)0x462fff;
          FUN_0048a8f0();
          pfStack_c00 = (function<void___cdecl(void)> *)0x463009;
          FUN_00427bb0();
        }
        pfStack_c00 = (function<void___cdecl(void)> *)&DAT_0074581c;
        piStack_c04 = (int *)0x46301a;
        FUN_004054a0();
        local_8 = 0x31;
        local_83c = 0x22;
        pfStack_c00 = (function<void___cdecl(void)> *)0x2;
        piStack_c04 = (int *)0x22;
        puStack_c08 = (undefined1 *)0x46303a;
        FUN_0047bd30();
        pfStack_c00 = (function<void___cdecl(void)> *)0x46303f;
        uVar5 = thunk_FUN_006e5750();
        pfStack_c00 = local_3ec;
        piStack_c04 = &local_83c;
        puStack_c08 = (undefined1 *)0x463060;
        FUN_0048a8f0();
        piStack_c04 = (int *)0x46306a;
        puVar6 = (undefined4 *)FUN_0048ae20();
        *puVar6 = uVar5;
        local_8 = 0xffffffff;
        pfStack_c00 = (function<void___cdecl(void)> *)0x46307e;
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_3ec);
        pfStack_c00 = (function<void___cdecl(void)> *)&DAT_00745828;
        piStack_c04 = (int *)0x46308f;
        FUN_004054a0();
        local_8 = 0x32;
        local_840 = 0x22;
        pfStack_c00 = (function<void___cdecl(void)> *)0x3;
        piStack_c04 = (int *)0x22;
        puStack_c08 = (undefined1 *)0x4630af;
        FUN_0047bd30();
        pfStack_c00 = (function<void___cdecl(void)> *)0x4630b4;
        uVar5 = thunk_FUN_006e5750();
        pfStack_c00 = local_3d4;
        piStack_c04 = &local_840;
        puStack_c08 = (undefined1 *)0x4630d5;
        FUN_0048a8f0();
        piStack_c04 = (int *)0x4630df;
        puVar6 = (undefined4 *)FUN_0048ae20();
        *puVar6 = uVar5;
        local_8 = 0xffffffff;
        pfStack_c00 = (function<void___cdecl(void)> *)0x4630f3;
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_3d4);
        pfStack_c00 = (function<void___cdecl(void)> *)0x4630f9;
        piVar3 = (int *)game_get_player_or_session_blob();
        if (local_468 == piVar3) {
          pfStack_c00 = (function<void___cdecl(void)> *)0x0;
          piStack_c04 = (int *)0x22;
          puStack_c08 = (undefined1 *)local_468[0x2ae];
          pfStack_c0c = (function<void___cdecl(void)> *)0x463117;
          game_loop_helper_e9240();
          pfStack_c0c = (function<void___cdecl(void)> *)0x46311e;
          FUN_005d9da0();
          piStack_c04 = (int *)0x46312a;
          iVar4 = FUN_0044e440();
          pfStack_c00 = *(function<void___cdecl(void)> **)(iVar4 + 0x18);
          pcStack_c1c = (char *)0x0;
          piStack_c20 = (int *)0x22;
          pcStack_c24 = (char *)local_468[0x2ae];
          pcStack_c28 = (char *)0x46314f;
          game_loop_helper_e9240();
          pcStack_c28 = (char *)0x463156;
          FUN_005d9da0();
          piStack_c20 = (int *)0x463162;
          pcStack_c1c = (char *)FUN_0044e440();
          piStack_c20 = (int *)0x46316a;
          FUN_00405520();
          pcStack_c1c = (char *)0x46316f;
          FUN_0067aa80();
        }
        local_844 = 0x22;
        pfStack_c00 = (function<void___cdecl(void)> *)&local_844;
        piStack_c04 = (int *)0x463194;
        iVar4 = FUN_0048a8f0();
        *(undefined4 *)(iVar4 + 0x70) = 0;
        local_84c = 0x22;
        pfStack_c00 = (function<void___cdecl(void)> *)0x4;
        piStack_c04 = (int *)0x22;
        puStack_c08 = (undefined1 *)0x4631b4;
        fVar9 = (float10)FUN_0047bd30();
        local_848 = (float)fVar9;
        fVar10 = local_848 * 1000.0;
        pfStack_c00 = (function<void___cdecl(void)> *)&local_84c;
        piStack_c04 = (int *)0x4631e6;
        iVar4 = FUN_0048a8f0();
        *(int *)(iVar4 + 0x74) = (int)fVar10;
        local_850 = 0x22;
        pfStack_c00 = (function<void___cdecl(void)> *)&local_850;
        piStack_c04 = (int *)0x46320b;
        local_55c = FUN_0048a8f0();
        local_55c = local_55c + 0x7c;
        pfStack_c00 = (function<void___cdecl(void)> *)local_4e4;
        piStack_c04 = (int *)0x463226;
        FUN_0044dff0();
        pfStack_c00 = (function<void___cdecl(void)> *)&local_4a2;
        piStack_c04 = (int *)0x463238;
        FUN_0044dfd0();
        while( true ) {
          pfStack_c00 = (function<void___cdecl(void)> *)(uint)local_4a2;
          piStack_c04 = (int *)0x46325a;
          cVar1 = FUN_0044dd70();
          if (cVar1 == '\0') break;
          pfStack_c00 = (function<void___cdecl(void)> *)0x46326c;
          piStack_c18 = (int *)FUN_0044dd50();
          pcStack_c1c = (char *)0x463289;
          local_560 = piStack_c18;
          FUN_00405520();
          piStack_c18 = (int *)0x463294;
          local_854 = (int *)FUN_0063bda0();
          *local_854 = *local_854 + local_560[6];
          pfStack_c00 = (function<void___cdecl(void)> *)0x463246;
          local_564 = local_854;
          FUN_0044dd30();
        }
        pfStack_c00 = (function<void___cdecl(void)> *)0x4632cf;
        FUN_00657c10();
        ExceptionList = local_10;
        return;
      }
      pfStack_c00 = (function<void___cdecl(void)> *)0x4632e8;
      ExceptionList = &local_10;
      (**(code **)(*in_ECX + 0x108))();
      pfStack_c00 = (function<void___cdecl(void)> *)0x4632fe;
      (**(code **)(*local_468 + 0x134))();
      ExceptionList = local_10;
      return;
    case 0x128:
      if (in_ECX[0x249] != 0) {
        return;
      }
      if (in_ECX[0x6a] == 0) {
        ExceptionList = &local_10;
        in_ECX[0x6a] = 1;
        pfStack_c00 = (function<void___cdecl(void)> *)0x461183;
        (**(code **)(*in_ECX + 0x108))();
        *(undefined1 *)((int)local_468 + 0xa8d) = 1;
        local_468[0x286] = 0;
        pfStack_c00 = (function<void___cdecl(void)> *)&DAT_007451d0;
        piStack_c04 = (int *)0x4611b0;
        FUN_004054a0();
        local_8 = 0x1e;
        local_740 = 0x2f;
        pfStack_c00 = (function<void___cdecl(void)> *)0x0;
        piStack_c04 = (int *)0x2f;
        puStack_c08 = (undefined1 *)0x4611d0;
        FUN_0047bd30();
        pfStack_c00 = (function<void___cdecl(void)> *)0x4611d5;
        uVar5 = thunk_FUN_006e5750();
        pfStack_c00 = local_ec;
        piStack_c04 = &local_740;
        puStack_c08 = (undefined1 *)0x4611f6;
        FUN_0048a8f0();
        piStack_c04 = (int *)0x461200;
        puVar6 = (undefined4 *)FUN_0048ae20();
        *puVar6 = uVar5;
        local_8 = 0xffffffff;
        pfStack_c00 = (function<void___cdecl(void)> *)0x461214;
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_ec);
        pfStack_c00 = (function<void___cdecl(void)> *)&DAT_007451d8;
        piStack_c04 = (int *)0x461225;
        FUN_004054a0();
        local_8 = 0x1f;
        local_748 = 0x2f;
        pfStack_c00 = (function<void___cdecl(void)> *)0x1;
        piStack_c04 = (int *)0x2f;
        puStack_c08 = (undefined1 *)0x461245;
        fVar9 = (float10)FUN_0047bd30();
        local_744 = (float)fVar9;
        fVar10 = local_744 * 10.0;
        pfStack_c00 = local_d4;
        piStack_c04 = &local_748;
        puStack_c08 = (undefined1 *)0x46127e;
        FUN_0048a8f0();
        piStack_c04 = (int *)0x461288;
        piVar3 = (int *)FUN_0048ae20();
        *piVar3 = (int)fVar10;
        local_8 = 0xffffffff;
        pfStack_c00 = (function<void___cdecl(void)> *)0x46129c;
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_d4);
        local_74c = 0x2f;
        pfStack_c00 = (function<void___cdecl(void)> *)&local_74c;
        piStack_c04 = (int *)0x4612bf;
        local_61c = FUN_0048a8f0();
        local_61c = local_61c + 0x7c;
        pfStack_c00 = (function<void___cdecl(void)> *)local_500;
        piStack_c04 = (int *)0x4612da;
        FUN_0044dff0();
        pfStack_c00 = (function<void___cdecl(void)> *)&local_49d;
        piStack_c04 = (int *)0x4612ec;
        FUN_0044dfd0();
        while( true ) {
          pfStack_c00 = (function<void___cdecl(void)> *)(uint)local_49d;
          piStack_c04 = (int *)0x46130e;
          cVar1 = FUN_0044dd70();
          if (cVar1 == '\0') break;
          pfStack_c00 = (function<void___cdecl(void)> *)0x461320;
          piStack_c18 = (int *)FUN_0044dd50();
          local_a6c = (undefined1 *)&piStack_c14;
          pcStack_c1c = (char *)0x46133d;
          local_620 = piStack_c18;
          FUN_00405520();
          piStack_c18 = (int *)0x461348;
          local_750 = (int *)FUN_0063bda0();
          *local_750 = *local_750 + local_620[6];
          pfStack_c00 = (function<void___cdecl(void)> *)0x4612fa;
          local_624 = local_750;
          FUN_0044dd30();
        }
        pfStack_c00 = (function<void___cdecl(void)> *)0x461383;
        FUN_00657c10();
        pfStack_c00 = (function<void___cdecl(void)> *)0x0;
        piStack_c04 = (int *)0xd;
        puStack_c08 = (undefined1 *)0x46139d;
        (**(code **)(*local_468 + 0x138))();
        puStack_c08 = (undefined1 *)0x0;
        pfStack_c0c = (function<void___cdecl(void)> *)0x2f;
        piStack_c10 = (int *)0x4613ac;
        puStack_c08 = (undefined1 *)FUN_0047bcc0();
        pfStack_c0c = (function<void___cdecl(void)> *)0x4613c3;
        (**(code **)(*local_468 + 0x104))();
        local_a70 = (undefined1 *)&piStack_c20;
        pcStack_c24 = "character/swordman/effect/animation/wavemark/add.ani";
        pcStack_c28 = (char *)0x4613d9;
        FUN_004054a0();
        pcStack_c24 = (char *)0x4613ec;
        (**(code **)(*local_468 + 0x78))();
        pfStack_c00 = (function<void___cdecl(void)> *)0x4613f2;
        piVar3 = (int *)game_get_player_or_session_blob();
        if (local_468 != piVar3) {
          ExceptionList = local_10;
          return;
        }
        pfStack_c00 = (function<void___cdecl(void)> *)0x0;
        piStack_c04 = (int *)0x2f;
        puStack_c08 = (undefined1 *)local_468[0x2ae];
        pfStack_c0c = (function<void___cdecl(void)> *)0x461410;
        game_loop_helper_e9240();
        pfStack_c0c = (function<void___cdecl(void)> *)0x461417;
        FUN_005d9da0();
        piStack_c04 = (int *)0x461423;
        iVar4 = FUN_0044e440();
        pfStack_c00 = *(function<void___cdecl(void)> **)(iVar4 + 0x18);
        local_a74 = (undefined1 *)&piStack_c18;
        pcStack_c1c = (char *)0x0;
        piStack_c20 = (int *)0x2f;
        pcStack_c24 = (char *)local_468[0x2ae];
        pcStack_c28 = (char *)0x461448;
        game_loop_helper_e9240();
        pcStack_c28 = (char *)0x46144f;
        FUN_005d9da0();
        piStack_c20 = (int *)0x46145b;
        pcStack_c1c = (char *)FUN_0044e440();
        piStack_c20 = (int *)0x461463;
        FUN_00405520();
        pcStack_c1c = (char *)0x461468;
        FUN_0067aa80();
        ExceptionList = local_10;
        return;
      }
      pfStack_c00 = (function<void___cdecl(void)> *)0x461483;
      ExceptionList = &local_10;
      (**(code **)(*in_ECX + 0x108))();
      pfStack_c00 = (function<void___cdecl(void)> *)0x461499;
      (**(code **)(*local_468 + 0x134))();
      ExceptionList = local_10;
      return;
    case 300:
      if (in_ECX[0x6a] == 1) {
        ExceptionList = &local_10;
        in_ECX[0x6a] = 2;
        pfStack_c00 = (function<void___cdecl(void)> *)0x40;
        piStack_c04 = (int *)0x15;
        puStack_c08 = (undefined1 *)0x4627cc;
        (**(code **)(*in_ECX + 0x138))();
        piStack_c20 = (int *)0x7454dc;
        pcStack_c24 = (char *)0x4627e2;
        FUN_004054a0();
        piStack_c20 = (int *)0x4627f5;
        local_808 = (**(code **)(*local_468 + 0x78))();
        *(int *)(local_808 + 0x40) = local_468[0x7d] * 0x32 + *(int *)(local_808 + 0x40);
        *(undefined4 *)(local_808 + 0x48) = 0x5a;
        pcStack_c38 = "character/swordman/effect/animation/bloodyrave/sword1.ani";
        pcStack_c3c = (char *)0x462848;
        local_4ec = local_808;
        FUN_004054a0();
        pcStack_c38 = (char *)0x46285b;
        (**(code **)(*local_468 + 0x78))();
        pcStack_c50 = "character/swordman/effect/animation/bloodyrave/sword2.ani";
        pcStack_c54 = (char *)0x462871;
        FUN_004054a0();
        pcStack_c50 = (char *)0x462884;
        (**(code **)(*local_468 + 0x78))();
        pcStack_c68 = "character/swordman/effect/animation/bloodyrave/sword3.ani";
        pcStack_c6c = (char *)0x46289a;
        FUN_004054a0();
        pcStack_c68 = (char *)0x4628ad;
        (**(code **)(*local_468 + 0x78))();
        pcStack_c80 = "character/swordman/effect/animation/bloodyrave/sword4.ani";
        pcStack_c84 = (char *)0x4628c3;
        FUN_004054a0();
        pcStack_c80 = (char *)0x4628d6;
        (**(code **)(*local_468 + 0x78))();
        piStack_c18 = (int *)0x745604;
        pcStack_c1c = (char *)0x4628ec;
        FUN_004054a0();
        piStack_c18 = (int *)0x4628f7;
        local_810 = FUN_00630790();
        pfStack_c00 = (function<void___cdecl(void)> *)&local_810;
        piStack_c04 = (int *)0x462921;
        local_80c = local_810;
        FUN_0044de80();
        piStack_c18 = (int *)0x745640;
        pcStack_c1c = (char *)0x462937;
        FUN_004054a0();
        piStack_c18 = (int *)0x462942;
        local_818 = FUN_00630790();
        pfStack_c00 = (function<void___cdecl(void)> *)&local_818;
        piStack_c04 = (int *)0x46296c;
        local_814 = local_818;
        FUN_0044de80();
        local_54c = local_468 + 0x22e;
        pfStack_c00 = (function<void___cdecl(void)> *)local_4e8;
        piStack_c04 = (int *)0x462991;
        FUN_0042a9e0();
        pfStack_c00 = (function<void___cdecl(void)> *)local_81c;
        piStack_c04 = (int *)0x4629a3;
        FUN_0042a9c0();
        while( true ) {
          pfStack_c00 = (function<void___cdecl(void)> *)local_81c;
          piStack_c04 = (int *)0x4629c4;
          cVar1 = FUN_0040d2d0();
          if (cVar1 == '\0') break;
          pfStack_c00 = (function<void___cdecl(void)> *)0x4629d6;
          local_550 = (int *)FUN_0042a580();
          pfStack_c00 = (function<void___cdecl(void)> *)0x74567c;
          piStack_c04 = (int *)(*local_550 + 100);
          puStack_c08 = (undefined1 *)0x4629f2;
          cVar1 = FUN_00427c60();
          if (cVar1 != '\0') {
            pfStack_c00 = (function<void___cdecl(void)> *)local_550;
            piStack_c04 = (int *)0x462a14;
            FUN_0044de80();
          }
          pfStack_c00 = (function<void___cdecl(void)> *)0x4629b1;
          FUN_0042a560();
        }
        ExceptionList = local_10;
        return;
      }
      if (in_ECX[0x6a] < 3) {
        return;
      }
      pfStack_c00 = (function<void___cdecl(void)> *)0x462a3e;
      ExceptionList = &local_10;
      (**(code **)(*in_ECX + 0x134))();
      ExceptionList = local_10;
      return;
    case 0x136:
      if (in_ECX[0x6a] == 0) {
        return;
      }
      if (in_ECX[0x6a] == 1) {
        local_47d = '\0';
        pfStack_c00 = (function<void___cdecl(void)> *)0x45da4f;
        ExceptionList = &local_10;
        iVar4 = FUN_00465f90();
        if (iVar4 != 0) {
          pfStack_c00 = (function<void___cdecl(void)> *)0x45da5e;
          iVar4 = FUN_00465f90();
          if (*(int *)(iVar4 + 4) == 0x44) {
            local_47d = '\x01';
            pfStack_c00 = (function<void___cdecl(void)> *)0x44;
            piStack_c04 = (int *)0x45da78;
            img_path_loader_21();
          }
        }
        if (local_47d == '\0') {
          pfStack_c00 = (function<void___cdecl(void)> *)0x45da8f;
          cVar1 = FUN_00466080();
          if (cVar1 != '\0') {
            local_47d = '\x01';
          }
        }
        if (local_47d != '\0') {
          ExceptionList = local_10;
          return;
        }
        pfStack_c00 = (function<void___cdecl(void)> *)0x45dabe;
        (**(code **)(*local_468 + 0x134))();
        ExceptionList = local_10;
        return;
      }
      if (in_ECX[0x6a] != 2) {
        return;
      }
      pfStack_c00 = (function<void___cdecl(void)> *)0x45dae6;
      ExceptionList = &local_10;
      (**(code **)(*in_ECX + 0x134))();
      ExceptionList = local_10;
      return;
    case 0x1a4:
      if ((char)in_ECX[0x37c] != '\0') {
        return;
      }
      pfStack_c00 = (function<void___cdecl(void)> *)0x45beec;
      ExceptionList = &local_10;
      iVar4 = FUN_00465f90();
      if (iVar4 != 0) {
        pfStack_c00 = (function<void___cdecl(void)> *)0x45befb;
        iVar4 = FUN_00465f90();
        if (*(int *)(iVar4 + 4) == 1) {
          ExceptionList = local_10;
          return;
        }
      }
      pfStack_c00 = (function<void___cdecl(void)> *)0x45bf19;
      (**(code **)(*local_468 + 0x108))();
      pfStack_c00 = (function<void___cdecl(void)> *)0x45bf2f;
      (**(code **)(*local_468 + 0x134))();
      ExceptionList = local_10;
      return;
    }
switchD_0045be93_caseD_4:
    pfStack_c00 = (function<void___cdecl(void)> *)0x463f54;
    ExceptionList = &local_10;
    (**(code **)(*in_ECX + 0x134))();
    ExceptionList = local_10;
    return;
  }
  if (iVar4 == 0x10e) {
    return;
  }
  local_494 = iVar4 + -3;
  switch(iVar4) {
  case 3:
    break;
  default:
    goto switchD_0045be93_caseD_4;
  case 5:
    if (3 < in_ECX[0x6a]) {
      ExceptionList = &local_10;
      in_ECX[0x6a] = 0;
      if (*(char *)((int)in_ECX + 0xdef) == '\0') {
        pfStack_c00 = (function<void___cdecl(void)> *)0x463f22;
        (**(code **)(*in_ECX + 0x134))();
      }
      else {
        in_ECX[0x69] = 6;
        pfStack_c00 = (function<void___cdecl(void)> *)0x0;
        piStack_c04 = (int *)0x2;
        puStack_c08 = (undefined1 *)0x463f09;
        (**(code **)(*in_ECX + 0x138))();
      }
    }
    break;
  case 6:
    pfStack_c00 = (function<void___cdecl(void)> *)0x463f3b;
    ExceptionList = &local_10;
    (**(code **)(*in_ECX + 0x134))();
    break;
  case 0xc:
    break;
  case 0xd:
    break;
  case 0x18:
    if (in_ECX[0x249] == 0) {
      if (in_ECX[0x6a] == 0) {
        ExceptionList = &local_10;
        in_ECX[0x6a] = 1;
        pfStack_c00 = (function<void___cdecl(void)> *)0x4614eb;
        (**(code **)(*in_ECX + 0x108))();
        *(undefined1 *)(local_468 + 0x2a3) = 1;
        local_468[0x285] = 0;
        pfStack_c00 = (function<void___cdecl(void)> *)&DAT_0074521c;
        piStack_c04 = (int *)0x461515;
        FUN_004054a0();
        local_8 = 0x20;
        local_754 = 0x4c;
        pfStack_c00 = (function<void___cdecl(void)> *)0x4;
        piStack_c04 = (int *)0x4c;
        puStack_c08 = (undefined1 *)0x461535;
        FUN_0047bd30();
        pfStack_c00 = (function<void___cdecl(void)> *)0x46153a;
        uVar5 = thunk_FUN_006e5750();
        pfStack_c00 = local_2c;
        piStack_c04 = &local_754;
        puStack_c08 = (undefined1 *)0x461558;
        FUN_0048a8f0();
        piStack_c04 = (int *)0x461562;
        puVar6 = (undefined4 *)FUN_0048ae20();
        *puVar6 = uVar5;
        local_8 = 0xffffffff;
        pfStack_c00 = (function<void___cdecl(void)> *)0x461573;
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_2c);
        pfStack_c00 = (function<void___cdecl(void)> *)&DAT_00745224;
        piStack_c04 = (int *)0x461584;
        FUN_004054a0();
        local_8 = 0x21;
        local_75c = 0x4c;
        pfStack_c00 = (function<void___cdecl(void)> *)0x3;
        piStack_c04 = (int *)0x4c;
        puStack_c08 = (undefined1 *)0x4615a4;
        fVar9 = (float10)FUN_0047bd30();
        local_758 = (float)fVar9;
        fVar10 = -local_758;
        pfStack_c00 = local_a4;
        piStack_c04 = &local_75c;
        puStack_c08 = (undefined1 *)0x4615dc;
        FUN_0048a8f0();
        piStack_c04 = (int *)0x4615e6;
        piVar3 = (int *)FUN_0048ae20();
        *piVar3 = (int)fVar10;
        local_8 = 0xffffffff;
        pfStack_c00 = (function<void___cdecl(void)> *)0x4615fa;
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_a4);
        local_760 = 0x4c;
        pfStack_c00 = (function<void___cdecl(void)> *)&local_760;
        piStack_c04 = (int *)0x46161d;
        local_628 = FUN_0048a8f0();
        local_628 = local_628 + 0x7c;
        pfStack_c00 = (function<void___cdecl(void)> *)local_4fc;
        piStack_c04 = (int *)0x461638;
        FUN_0044dff0();
        pfStack_c00 = (function<void___cdecl(void)> *)&local_49e;
        piStack_c04 = (int *)0x46164a;
        FUN_0044dfd0();
        while( true ) {
          pfStack_c00 = (function<void___cdecl(void)> *)(uint)local_49e;
          piStack_c04 = (int *)0x46166c;
          cVar1 = FUN_0044dd70();
          if (cVar1 == '\0') break;
          pfStack_c00 = (function<void___cdecl(void)> *)0x46167e;
          piStack_c18 = (int *)FUN_0044dd50();
          local_a78 = (undefined1 *)&piStack_c14;
          pcStack_c1c = (char *)0x46169b;
          local_62c = piStack_c18;
          FUN_00405520();
          piStack_c18 = (int *)0x4616a6;
          local_764 = (int *)FUN_0063bda0();
          *local_764 = *local_764 + local_62c[6];
          pfStack_c00 = (function<void___cdecl(void)> *)0x461658;
          local_630 = local_764;
          FUN_0044dd30();
        }
        pfStack_c00 = (function<void___cdecl(void)> *)0x4616e1;
        FUN_00657c10();
        pfStack_c00 = (function<void___cdecl(void)> *)0x0;
        piStack_c04 = (int *)0xb;
        puStack_c08 = (undefined1 *)0x4616fb;
        (**(code **)(*local_468 + 0x138))();
        puStack_c08 = (undefined1 *)0x0;
        pfStack_c0c = (function<void___cdecl(void)> *)0x4c;
        piStack_c10 = (int *)0x46170a;
        puStack_c08 = (undefined1 *)FUN_0047bcc0();
        pfStack_c0c = (function<void___cdecl(void)> *)0x461721;
        (**(code **)(*local_468 + 0x104))();
        local_a7c = (undefined1 *)&piStack_c20;
        pcStack_c24 = "character/swordman/effect/animation/frenzy/blast.ani";
        pcStack_c28 = (char *)0x461737;
        FUN_004054a0();
        pcStack_c24 = (char *)0x46174a;
        (**(code **)(*local_468 + 0x78))();
        local_a80 = (undefined1 *)&pcStack_c38;
        pcStack_c3c = "character/swordman/effect/animation/frenzy/buff.ani";
        pcStack_c40 = (char *)0x461760;
        FUN_004054a0();
        pcStack_c3c = (char *)0x461773;
        local_768 = (**(code **)(*local_468 + 0x78))();
        *(undefined1 *)(local_768 + 0x25) = 0;
        pfStack_c00 = (function<void___cdecl(void)> *)0x461788;
        piVar3 = (int *)game_get_player_or_session_blob();
        if (local_468 == piVar3) {
          pfStack_c00 = (function<void___cdecl(void)> *)0x0;
          piStack_c04 = (int *)0x4c;
          puStack_c08 = (undefined1 *)local_468[0x2ae];
          pfStack_c0c = (function<void___cdecl(void)> *)0x4617a6;
          game_loop_helper_e9240();
          pfStack_c0c = (function<void___cdecl(void)> *)0x4617ad;
          FUN_005d9da0();
          piStack_c04 = (int *)0x4617b9;
          iVar4 = FUN_0044e440();
          pfStack_c00 = *(function<void___cdecl(void)> **)(iVar4 + 0x18);
          local_a84 = (undefined1 *)&piStack_c18;
          pcStack_c1c = (char *)0x0;
          piStack_c20 = (int *)0x4c;
          pcStack_c24 = (char *)local_468[0x2ae];
          pcStack_c28 = (char *)0x4617de;
          game_loop_helper_e9240();
          pcStack_c28 = (char *)0x4617e5;
          FUN_005d9da0();
          piStack_c20 = (int *)0x4617f1;
          pcStack_c1c = (char *)FUN_0044e440();
          piStack_c20 = (int *)0x4617f9;
          FUN_00405520();
          pcStack_c1c = (char *)0x4617fe;
          FUN_0067aa80();
        }
      }
      else {
        pfStack_c00 = (function<void___cdecl(void)> *)0x461819;
        ExceptionList = &local_10;
        (**(code **)(*in_ECX + 0x108))();
        pfStack_c00 = (function<void___cdecl(void)> *)0x46182f;
        (**(code **)(*local_468 + 0x134))();
      }
    }
    break;
  case 0x19:
    if (in_ECX[0x6a] == 0) {
      ExceptionList = &local_10;
      in_ECX[0x6a] = 1;
      pfStack_c00 = (function<void___cdecl(void)> *)0x461c3b;
      (**(code **)(*in_ECX + 0x108))();
      pfStack_c00 = (function<void___cdecl(void)> *)0x0;
      piStack_c04 = (int *)0xb;
      puStack_c08 = (undefined1 *)0x461c55;
      (**(code **)(*local_468 + 0x138))();
      puStack_c08 = (undefined1 *)0x2;
      pfStack_c0c = (function<void___cdecl(void)> *)0x17;
      piStack_c10 = (int *)0x461c64;
      puStack_c08 = (undefined1 *)FUN_0047bcc0();
      pfStack_c0c = (function<void___cdecl(void)> *)0x461c7b;
      (**(code **)(*local_468 + 0x104))();
      local_a9c = (undefined1 *)&piStack_c20;
      pcStack_c24 = "character/swordman/effect/animation/givebloodcharge1.ani";
      pcStack_c28 = (char *)0x461c91;
      FUN_004054a0();
      pcStack_c24 = (char *)0x461ca4;
      (**(code **)(*local_468 + 0x78))();
      local_aa0 = (undefined1 *)&pcStack_c38;
      pcStack_c3c = "character/swordman/effect/animation/givebloodcharge2.ani";
      pcStack_c40 = (char *)0x461cba;
      FUN_004054a0();
      pcStack_c3c = (char *)0x461ccd;
      (**(code **)(*local_468 + 0x78))();
      local_aa4 = (undefined1 *)&pcStack_c50;
      pcStack_c54 = "character/swordman/effect/animation/givebloodshoot1.ani";
      pcStack_c58 = (char *)0x461ce3;
      FUN_004054a0();
      pcStack_c54 = (char *)0x461cf6;
      (**(code **)(*local_468 + 0x78))();
      local_aa8 = (undefined1 *)&pcStack_c68;
      pcStack_c6c = "character/swordman/effect/animation/givebloodshoot2.ani";
      pcStack_c70 = (char *)0x461d0c;
      FUN_004054a0();
      pcStack_c6c = (char *)0x461d1f;
      (**(code **)(*local_468 + 0x78))();
      local_48e = '\x01';
      local_78c = 0x28;
      pfStack_c00 = (function<void___cdecl(void)> *)local_aac;
      piStack_c04 = (int *)0x461d56;
      pfStack_c00 = (function<void___cdecl(void)> *)FUN_00489e00();
      piStack_c04 = &local_78c;
      puStack_c08 = local_ab0;
      pfStack_c0c = (function<void___cdecl(void)> *)0x461d76;
      FUN_00489da0();
      piStack_c04 = (int *)0x461d7d;
      cVar1 = FUN_0040d2d0();
      if (cVar1 != '\0') {
        local_790 = 0x28;
        pfStack_c00 = (function<void___cdecl(void)> *)&local_790;
        piStack_c04 = (int *)0x461da6;
        iVar4 = FUN_0048a8f0();
        if (0 < *(int *)(iVar4 + 0x74)) {
          local_48e = '\0';
        }
      }
      if (local_48e != '\0') {
        local_794 = 0x17;
        pfStack_c00 = (function<void___cdecl(void)> *)&local_794;
        piStack_c04 = (int *)0x461de4;
        iVar4 = FUN_0048a8f0();
        if (0 < *(int *)(iVar4 + 0x74)) {
          pfStack_c00 = (function<void___cdecl(void)> *)&DAT_0074543c;
          piStack_c04 = (int *)0x461dfb;
          FUN_004054a0();
          local_8 = 0x24;
          local_79c = 0x17;
          piStack_c18 = (int *)&DAT_00745434;
          pcStack_c1c = (char *)0x461e21;
          FUN_004054a0();
          piStack_c18 = (int *)0x461e2c;
          local_798 = (int *)FUN_0063bda0();
          pfStack_c00 = local_5c;
          piStack_c04 = &local_79c;
          puStack_c08 = (undefined1 *)0x461e5a;
          local_520 = local_798;
          FUN_0048a8f0();
          piStack_c04 = (int *)0x461e64;
          piVar3 = (int *)FUN_0048ae20();
          *local_520 = *local_520 - *piVar3;
          local_8 = 0xffffffff;
          pfStack_c00 = (function<void___cdecl(void)> *)0x461e85;
          std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_5c);
          pfStack_c00 = (function<void___cdecl(void)> *)0x461e91;
          FUN_00657c10();
        }
        pfStack_c00 = (function<void___cdecl(void)> *)0x3f;
        piStack_c04 = local_468;
        puStack_c08 = (undefined1 *)0x461ea0;
        iVar4 = FUN_006ca800();
        if (iVar4 != 0) {
          local_7a0 = 0x17;
          pfStack_c00 = (function<void___cdecl(void)> *)&local_7a0;
          piStack_c04 = (int *)0x461ecd;
          FUN_0048a8f0();
          pfStack_c00 = (function<void___cdecl(void)> *)0x461ed7;
          cVar1 = FUN_00489dd0();
          if (cVar1 == '\0') {
            pfStack_c00 = (function<void___cdecl(void)> *)&DAT_00745450;
            piStack_c04 = (int *)0x461eef;
            FUN_004054a0();
            local_8 = 0x25;
            local_7a8 = 0x17;
            piStack_c18 = (int *)&DAT_00745444;
            pcStack_c1c = (char *)0x461f15;
            FUN_004054a0();
            piStack_c18 = (int *)0x461f20;
            local_7a4 = (int *)FUN_0063bda0();
            pfStack_c00 = local_44;
            piStack_c04 = &local_7a8;
            puStack_c08 = (undefined1 *)0x461f4e;
            local_524 = local_7a4;
            FUN_0048a8f0();
            piStack_c04 = (int *)0x461f58;
            piVar3 = (int *)FUN_0048ae20();
            *local_524 = *local_524 - *piVar3;
            local_8 = 0xffffffff;
            pfStack_c00 = (function<void___cdecl(void)> *)0x461f79;
            std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_44);
            pfStack_c00 = (function<void___cdecl(void)> *)&DAT_00745468;
            piStack_c04 = (int *)0x461f8a;
            FUN_004054a0();
            local_8 = 0x26;
            local_7b0 = 0x17;
            piStack_c18 = (int *)&DAT_0074545c;
            pcStack_c1c = (char *)0x461fb0;
            FUN_004054a0();
            piStack_c18 = (int *)0x461fbb;
            local_7ac = (int *)FUN_0063bda0();
            pfStack_c00 = local_23c;
            piStack_c04 = &local_7b0;
            puStack_c08 = (undefined1 *)0x461fec;
            local_528 = local_7ac;
            FUN_0048a8f0();
            piStack_c04 = (int *)0x461ff6;
            piVar3 = (int *)FUN_0048ae20();
            *local_528 = *local_528 - *piVar3;
            local_8 = 0xffffffff;
            pfStack_c00 = (function<void___cdecl(void)> *)0x46201a;
            std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_23c);
            pfStack_c00 = (function<void___cdecl(void)> *)&DAT_00745480;
            piStack_c04 = (int *)0x46202b;
            FUN_004054a0();
            local_8 = 0x27;
            local_7b8 = 0x17;
            piStack_c18 = (int *)&DAT_00745474;
            pcStack_c1c = (char *)0x462051;
            FUN_004054a0();
            piStack_c18 = (int *)0x46205c;
            local_7b4 = (int *)FUN_0063b7b0();
            pfStack_c00 = local_1f4;
            piStack_c04 = &local_7b8;
            puStack_c08 = (undefined1 *)0x46208d;
            local_52c = local_7b4;
            FUN_0048a8f0();
            piStack_c04 = (int *)0x462097;
            piVar3 = (int *)FUN_0048ae20();
            *local_52c = *local_52c - *piVar3;
            local_8 = 0xffffffff;
            pfStack_c00 = (function<void___cdecl(void)> *)0x4620bb;
            std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_1f4);
            pfStack_c00 = (function<void___cdecl(void)> *)&DAT_00745498;
            piStack_c04 = (int *)0x4620cc;
            FUN_004054a0();
            local_8 = 0x28;
            local_7c0 = 0x17;
            piStack_c18 = (int *)&DAT_0074548c;
            pcStack_c1c = (char *)0x4620f2;
            FUN_004054a0();
            piStack_c18 = (int *)0x4620fd;
            local_7bc = (int *)FUN_0063b7b0();
            pfStack_c00 = local_1dc;
            piStack_c04 = &local_7c0;
            puStack_c08 = (undefined1 *)0x46212e;
            local_530 = local_7bc;
            FUN_0048a8f0();
            piStack_c04 = (int *)0x462138;
            piVar3 = (int *)FUN_0048ae20();
            *local_530 = *local_530 - *piVar3;
            local_8 = 0xffffffff;
            pfStack_c00 = (function<void___cdecl(void)> *)0x46215c;
            std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_1dc);
            pfStack_c00 = (function<void___cdecl(void)> *)0x462168;
            FUN_00657c10();
            local_7c4 = 0x17;
            pfStack_c00 = (function<void___cdecl(void)> *)&local_7c4;
            piStack_c04 = (int *)0x46218b;
            FUN_0048a8f0();
            pfStack_c00 = (function<void___cdecl(void)> *)0x462195;
            FUN_00427bb0();
          }
          pfStack_c00 = (function<void___cdecl(void)> *)&DAT_007454a4;
          piStack_c04 = (int *)0x4621a6;
          FUN_004054a0();
          local_8 = 0x29;
          local_7cc = 0x17;
          pfStack_c00 = (function<void___cdecl(void)> *)0x3;
          piStack_c04 = (int *)0x17;
          puStack_c08 = (undefined1 *)0x4621c6;
          fVar9 = (float10)FUN_0047bd30();
          local_7c8 = (float)fVar9;
          fVar10 = local_7c8 * 10.0;
          pfStack_c00 = local_1c4;
          piStack_c04 = &local_7cc;
          puStack_c08 = (undefined1 *)0x4621ff;
          FUN_0048a8f0();
          piStack_c04 = (int *)0x462209;
          piVar3 = (int *)FUN_0048ae20();
          *piVar3 = (int)fVar10;
          local_8 = 0xffffffff;
          pfStack_c00 = (function<void___cdecl(void)> *)0x46221d;
          std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_1c4);
          pfStack_c00 = (function<void___cdecl(void)> *)&DAT_007454b0;
          piStack_c04 = (int *)0x46222e;
          FUN_004054a0();
          local_8 = 0x2a;
          local_7d4 = 0x17;
          pfStack_c00 = (function<void___cdecl(void)> *)0x4;
          piStack_c04 = (int *)0x17;
          puStack_c08 = (undefined1 *)0x46224e;
          fVar9 = (float10)FUN_0047bd30();
          local_7d0 = (float)fVar9;
          fVar10 = local_7d0 * 10.0;
          pfStack_c00 = local_14c;
          piStack_c04 = &local_7d4;
          puStack_c08 = (undefined1 *)0x462287;
          FUN_0048a8f0();
          piStack_c04 = (int *)0x462291;
          piVar3 = (int *)FUN_0048ae20();
          *piVar3 = (int)fVar10;
          local_8 = 0xffffffff;
          pfStack_c00 = (function<void___cdecl(void)> *)0x4622a5;
          std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_14c);
          pfStack_c00 = (function<void___cdecl(void)> *)&DAT_007454bc;
          piStack_c04 = (int *)0x4622b6;
          FUN_004054a0();
          local_8 = 0x2b;
          local_7dc = 0x17;
          pfStack_c00 = (function<void___cdecl(void)> *)0x5;
          piStack_c04 = (int *)0x17;
          puStack_c08 = (undefined1 *)0x4622d6;
          fVar9 = (float10)FUN_0047bd30();
          local_7d8 = (float)fVar9;
          fVar10 = -local_7d8;
          pfStack_c00 = local_464;
          piStack_c04 = &local_7dc;
          puStack_c08 = (undefined1 *)0x46230e;
          FUN_0048a8f0();
          piStack_c04 = (int *)0x46231a;
          piVar3 = (int *)FUN_0048ae20();
          *piVar3 = (int)fVar10;
          local_8 = 0xffffffff;
          pfStack_c00 = (function<void___cdecl(void)> *)0x46232e;
          std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_464);
          pfStack_c00 = (function<void___cdecl(void)> *)&DAT_007454c8;
          piStack_c04 = (int *)0x46233f;
          FUN_004054a0();
          local_8 = 0x2c;
          local_7e4 = 0x17;
          pfStack_c00 = (function<void___cdecl(void)> *)0x6;
          piStack_c04 = (int *)0x17;
          puStack_c08 = (undefined1 *)0x46235f;
          fVar9 = (float10)FUN_0047bd30();
          local_7e0 = (float)fVar9;
          fVar10 = -local_7e0;
          pfStack_c00 = local_44c;
          piStack_c04 = &local_7e4;
          puStack_c08 = (undefined1 *)0x462397;
          FUN_0048a8f0();
          piStack_c04 = (int *)0x4623a3;
          piVar3 = (int *)FUN_0048ae20();
          *piVar3 = (int)fVar10;
          local_8 = 0xffffffff;
          pfStack_c00 = (function<void___cdecl(void)> *)0x4623b7;
          std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_44c);
        }
        pfStack_c00 = (function<void___cdecl(void)> *)&DAT_007454d4;
        piStack_c04 = (int *)0x4623c8;
        FUN_004054a0();
        local_8 = 0x2d;
        local_7e8 = 0x17;
        pfStack_c00 = (function<void___cdecl(void)> *)0x1;
        piStack_c04 = (int *)0x17;
        puStack_c08 = (undefined1 *)0x4623e8;
        FUN_0047bd30();
        pfStack_c00 = (function<void___cdecl(void)> *)0x4623ed;
        uVar5 = thunk_FUN_006e5750();
        pfStack_c00 = local_434;
        piStack_c04 = &local_7e8;
        puStack_c08 = (undefined1 *)0x46240e;
        FUN_0048a8f0();
        piStack_c04 = (int *)0x462418;
        puVar6 = (undefined4 *)FUN_0048ae20();
        *puVar6 = uVar5;
        local_8 = 0xffffffff;
        pfStack_c00 = (function<void___cdecl(void)> *)0x46242c;
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_434);
        local_7ec = 0x17;
        pfStack_c00 = (function<void___cdecl(void)> *)&local_7ec;
        piStack_c04 = (int *)0x46244f;
        iVar4 = FUN_0048a8f0();
        *(undefined4 *)(iVar4 + 0x70) = 0;
        local_7f4 = 0x17;
        pfStack_c00 = (function<void___cdecl(void)> *)0x2;
        piStack_c04 = (int *)0x17;
        puStack_c08 = (undefined1 *)0x46246f;
        fVar9 = (float10)FUN_0047bd30();
        local_7f0 = (float)fVar9;
        fVar10 = local_7f0 * 1000.0;
        pfStack_c00 = (function<void___cdecl(void)> *)&local_7f4;
        piStack_c04 = (int *)0x4624a1;
        iVar4 = FUN_0048a8f0();
        *(int *)(iVar4 + 0x74) = (int)fVar10;
        local_7f8 = 0x17;
        pfStack_c00 = (function<void___cdecl(void)> *)&local_7f8;
        piStack_c04 = (int *)0x4624c6;
        local_534 = FUN_0048a8f0();
        local_534 = local_534 + 0x7c;
        pfStack_c00 = (function<void___cdecl(void)> *)local_4f4;
        piStack_c04 = (int *)0x4624e1;
        FUN_0044dff0();
        pfStack_c00 = (function<void___cdecl(void)> *)&local_4a0;
        piStack_c04 = (int *)0x4624f3;
        FUN_0044dfd0();
        while( true ) {
          pfStack_c00 = (function<void___cdecl(void)> *)(uint)local_4a0;
          piStack_c04 = (int *)0x462515;
          cVar1 = FUN_0044dd70();
          if (cVar1 == '\0') break;
          pfStack_c00 = (function<void___cdecl(void)> *)0x462527;
          piStack_c18 = (int *)FUN_0044dd50();
          pcStack_c1c = (char *)0x462544;
          local_538 = piStack_c18;
          FUN_00405520();
          piStack_c18 = (int *)0x46254f;
          local_7fc = (int *)FUN_0063bda0();
          *local_7fc = *local_7fc + local_538[6];
          pfStack_c00 = (function<void___cdecl(void)> *)0x462501;
          local_53c = local_7fc;
          FUN_0044dd30();
        }
        local_800 = 0x17;
        pfStack_c00 = (function<void___cdecl(void)> *)&local_800;
        piStack_c04 = (int *)0x4625a1;
        local_540 = FUN_0048a8f0();
        local_540 = local_540 + 0x84;
        pfStack_c00 = (function<void___cdecl(void)> *)local_4f0;
        piStack_c04 = (int *)0x4625be;
        FUN_0044dff0();
        pfStack_c00 = (function<void___cdecl(void)> *)&local_4a1;
        piStack_c04 = (int *)0x4625d0;
        FUN_0044dfd0();
        while( true ) {
          pfStack_c00 = (function<void___cdecl(void)> *)(uint)local_4a1;
          piStack_c04 = (int *)0x4625f2;
          cVar1 = FUN_0044dd70();
          if (cVar1 == '\0') break;
          pfStack_c00 = (function<void___cdecl(void)> *)0x462604;
          piStack_c18 = (int *)FUN_0044dd50();
          pcStack_c1c = (char *)0x462621;
          local_544 = piStack_c18;
          FUN_00405520();
          piStack_c18 = (int *)0x46262c;
          local_804 = (int *)FUN_0063b7b0();
          *local_804 = *local_804 + local_544[6];
          pfStack_c00 = (function<void___cdecl(void)> *)0x4625de;
          local_548 = local_804;
          FUN_0044dd30();
        }
        pfStack_c00 = (function<void___cdecl(void)> *)0x462667;
        FUN_00657c10();
      }
      pfStack_c00 = (function<void___cdecl(void)> *)0x46266d;
      piVar3 = (int *)game_get_player_or_session_blob();
      if (local_468 == piVar3) {
        pfStack_c00 = (function<void___cdecl(void)> *)0x0;
        piStack_c04 = (int *)0x17;
        puStack_c08 = (undefined1 *)local_468[0x2ae];
        pfStack_c0c = (function<void___cdecl(void)> *)0x46268f;
        game_loop_helper_e9240();
        pfStack_c0c = (function<void___cdecl(void)> *)0x462696;
        FUN_005d9da0();
        piStack_c04 = (int *)0x4626a2;
        iVar4 = FUN_0044e440();
        pfStack_c00 = *(function<void___cdecl(void)> **)(iVar4 + 0x18);
        pcStack_c1c = (char *)0x0;
        piStack_c20 = (int *)0x17;
        pcStack_c24 = (char *)local_468[0x2ae];
        pcStack_c28 = (char *)0x4626c7;
        game_loop_helper_e9240();
        pcStack_c28 = (char *)0x4626ce;
        FUN_005d9da0();
        piStack_c20 = (int *)0x4626da;
        pcStack_c1c = (char *)FUN_0044e440();
        piStack_c20 = (int *)0x4626e2;
        FUN_00405520();
        pcStack_c1c = (char *)0x4626e7;
        FUN_0067aea0();
        pfStack_c00 = (function<void___cdecl(void)> *)0x0;
        piStack_c04 = (int *)0x17;
        puStack_c08 = (undefined1 *)local_468[0x2ae];
        pfStack_c0c = (function<void___cdecl(void)> *)0x462700;
        game_loop_helper_e9240();
        pfStack_c0c = (function<void___cdecl(void)> *)0x462707;
        FUN_005d9da0();
        piStack_c04 = (int *)0x462713;
        iVar4 = FUN_0044e440();
        pfStack_c00 = *(function<void___cdecl(void)> **)(iVar4 + 0x18);
        pcStack_c1c = (char *)0x0;
        piStack_c20 = (int *)0x17;
        pcStack_c24 = (char *)local_468[0x2ae];
        pcStack_c28 = (char *)0x462738;
        game_loop_helper_e9240();
        pcStack_c28 = (char *)0x46273f;
        FUN_005d9da0();
        piStack_c20 = (int *)0x46274b;
        pcStack_c1c = (char *)FUN_0044e440();
        piStack_c20 = (int *)0x462753;
        FUN_00405520();
        pcStack_c1c = (char *)0x462758;
        FUN_0067aa80();
      }
    }
    else {
      pfStack_c00 = (function<void___cdecl(void)> *)0x462773;
      ExceptionList = &local_10;
      (**(code **)(*in_ECX + 0x108))();
      pfStack_c00 = (function<void___cdecl(void)> *)0x462789;
      (**(code **)(*local_468 + 0x134))();
    }
    break;
  case 0x1a:
    if (in_ECX[0x249] == 0) {
      if (in_ECX[0x6a] == 0) {
        ExceptionList = &local_10;
        in_ECX[0x6a] = 1;
        pfStack_c00 = (function<void___cdecl(void)> *)0x460cca;
        (**(code **)(*in_ECX + 0x108))();
        pfStack_c00 = (function<void___cdecl(void)> *)0x0;
        piStack_c04 = (int *)0xb;
        puStack_c08 = (undefined1 *)0x460ce4;
        (**(code **)(*local_468 + 0x138))();
        puStack_c08 = (undefined1 *)0x0;
        pfStack_c0c = (function<void___cdecl(void)> *)0x19;
        piStack_c10 = (int *)0x460cf3;
        puStack_c08 = (undefined1 *)FUN_0047bcc0();
        pfStack_c0c = (function<void___cdecl(void)> *)0x460d0a;
        (**(code **)(*local_468 + 0x104))();
        pfStack_c0c = (function<void___cdecl(void)> *)local_468[0x7d];
        piStack_c10 = (int *)0x4e2b;
        piStack_c14 = (int *)0x0;
        piStack_c18 = (int *)0x0;
        pcStack_c1c = (char *)0x42c80000;
        piStack_c20 = local_468;
        pcStack_c24 = (char *)0x460d48;
        FUN_0042f340();
        local_a60 = (undefined1 *)&piStack_c20;
        pcStack_c24 = "common/etc/animation/endofcasting.ani";
        pcStack_c28 = (char *)0x460d60;
        FUN_004054a0();
        pcStack_c24 = (char *)0x460d73;
        local_734 = (**(code **)(*local_468 + 0x78))();
        pcStack_c24 = "Pj";
        local_4a8 = local_734;
        pfStack_c00 = (function<void___cdecl(void)> *)(**(code **)(*local_468 + 0x68))();
        piStack_c04 = (int *)0x0;
        puStack_c08 = (undefined1 *)0x0;
        pfStack_c0c = (function<void___cdecl(void)> *)0x460da8;
        FUN_0062fd90();
        *(int *)(local_4a8 + 0x114) = *(int *)(local_4a8 + 0x114) + 100;
        *(undefined4 *)(local_4a8 + 0x4c) = 1;
        *(undefined1 *)(local_4a8 + 0xe8) = 0;
      }
      else {
        pfStack_c00 = (function<void___cdecl(void)> *)0x460df5;
        ExceptionList = &local_10;
        (**(code **)(*in_ECX + 0x108))();
        pfStack_c00 = (function<void___cdecl(void)> *)0x460e0b;
        (**(code **)(*local_468 + 0x134))();
      }
    }
    break;
  case 0x3c:
    break;
  case 0x49:
    if (in_ECX[0x249] == 0) {
      if (in_ECX[0x6a] == 0) {
        ExceptionList = &local_10;
        in_ECX[0x6a] = 1;
        pfStack_c00 = (function<void___cdecl(void)> *)0x461881;
        (**(code **)(*in_ECX + 0x108))();
        *(undefined1 *)((int)local_468 + 0xa8e) = 1;
        local_468[0x287] = 0;
        local_468[0x288] = 0;
        pfStack_c00 = (function<void___cdecl(void)> *)&DAT_00745298;
        piStack_c04 = (int *)0x4618be;
        FUN_004054a0();
        local_8 = 0x22;
        local_76c = 0x34;
        pfStack_c00 = (function<void___cdecl(void)> *)0x2;
        piStack_c04 = (int *)0x34;
        puStack_c08 = (undefined1 *)0x4618de;
        FUN_0047bd30();
        pfStack_c00 = (function<void___cdecl(void)> *)0x4618e3;
        uVar5 = thunk_FUN_006e5750();
        pfStack_c00 = local_8c;
        piStack_c04 = &local_76c;
        puStack_c08 = (undefined1 *)0x461904;
        FUN_0048a8f0();
        piStack_c04 = (int *)0x46190e;
        puVar6 = (undefined4 *)FUN_0048ae20();
        *puVar6 = uVar5;
        local_8 = 0xffffffff;
        pfStack_c00 = (function<void___cdecl(void)> *)0x461922;
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_8c);
        pfStack_c00 = (function<void___cdecl(void)> *)&DAT_007452a4;
        piStack_c04 = (int *)0x461930;
        FUN_004054a0();
        local_8 = 0x23;
        local_774 = 0x34;
        pfStack_c00 = (function<void___cdecl(void)> *)0x3;
        piStack_c04 = (int *)0x34;
        puStack_c08 = (undefined1 *)0x461950;
        fVar9 = (float10)FUN_0047bd30();
        local_770 = (float)fVar9;
        fVar10 = -local_770;
        pfStack_c00 = local_74;
        piStack_c04 = &local_774;
        puStack_c08 = (undefined1 *)0x461985;
        FUN_0048a8f0();
        piStack_c04 = (int *)0x46198f;
        piVar3 = (int *)FUN_0048ae20();
        *piVar3 = (int)fVar10;
        local_8 = 0xffffffff;
        pfStack_c00 = (function<void___cdecl(void)> *)0x4619a0;
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_74);
        local_778 = 0x34;
        pfStack_c00 = (function<void___cdecl(void)> *)&local_778;
        piStack_c04 = (int *)0x4619c3;
        local_514 = FUN_0048a8f0();
        local_514 = local_514 + 0x7c;
        pfStack_c00 = (function<void___cdecl(void)> *)local_4f8;
        piStack_c04 = (int *)0x4619de;
        FUN_0044dff0();
        pfStack_c00 = (function<void___cdecl(void)> *)&local_49f;
        piStack_c04 = (int *)0x4619f0;
        FUN_0044dfd0();
        while( true ) {
          pfStack_c00 = (function<void___cdecl(void)> *)(uint)local_49f;
          piStack_c04 = (int *)0x461a12;
          cVar1 = FUN_0044dd70();
          if (cVar1 == '\0') break;
          pfStack_c00 = (function<void___cdecl(void)> *)0x461a24;
          piStack_c18 = (int *)FUN_0044dd50();
          local_a88 = (undefined1 *)&piStack_c14;
          pcStack_c1c = (char *)0x461a41;
          local_518 = piStack_c18;
          FUN_00405520();
          piStack_c18 = (int *)0x461a4c;
          local_77c = (int *)FUN_0063bda0();
          *local_77c = *local_77c + local_518[6];
          pfStack_c00 = (function<void___cdecl(void)> *)0x4619fe;
          local_51c = local_77c;
          FUN_0044dd30();
        }
        pfStack_c00 = (function<void___cdecl(void)> *)0x461a87;
        FUN_00657c10();
        pfStack_c00 = (function<void___cdecl(void)> *)0x0;
        piStack_c04 = (int *)0xd;
        puStack_c08 = (undefined1 *)0x461aa1;
        (**(code **)(*local_468 + 0x138))();
        local_a8c = (undefined1 *)&piStack_c14;
        piStack_c18 = (int *)0x7452b0;
        pcStack_c1c = "j";
        FUN_004054a0();
        piStack_c18 = (int *)0x0;
        pcStack_c1c = (char *)0x0;
        piStack_c20 = (int *)0x0;
        pcStack_c24 = (char *)0x0;
        pcStack_c28 = (char *)0x461ac4;
        local_780 = FUN_004aa990();
        *(int **)(local_780 + 0x60) = local_468;
        local_a90 = (undefined1 *)&piStack_c14;
        piStack_c18 = (int *)0x7452e4;
        pcStack_c1c = "j";
        FUN_004054a0();
        piStack_c18 = (int *)0x0;
        pcStack_c1c = (char *)0x0;
        piStack_c20 = (int *)0x0;
        pcStack_c24 = (char *)0x0;
        pcStack_c28 = (char *)0x461afe;
        local_784 = FUN_004aa990();
        *(int **)(local_784 + 0x60) = local_468;
        local_a94 = (undefined1 *)&piStack_c14;
        piStack_c18 = (int *)0x745318;
        pcStack_c1c = "j";
        FUN_004054a0();
        piStack_c18 = (int *)0x0;
        pcStack_c1c = (char *)0x0;
        piStack_c20 = (int *)0x0;
        pcStack_c24 = (char *)0x0;
        pcStack_c28 = (char *)0x461b38;
        local_788 = FUN_004aa990();
        *(int **)(local_788 + 0x60) = local_468;
        pfStack_c00 = (function<void___cdecl(void)> *)0x461b55;
        piVar3 = (int *)game_get_player_or_session_blob();
        if (local_468 == piVar3) {
          pfStack_c00 = (function<void___cdecl(void)> *)0x0;
          piStack_c04 = (int *)0x34;
          puStack_c08 = (undefined1 *)local_468[0x2ae];
          pfStack_c0c = (function<void___cdecl(void)> *)0x461b73;
          game_loop_helper_e9240();
          pfStack_c0c = (function<void___cdecl(void)> *)0x461b7a;
          FUN_005d9da0();
          piStack_c04 = (int *)0x461b86;
          iVar4 = FUN_0044e440();
          pfStack_c00 = *(function<void___cdecl(void)> **)(iVar4 + 0x18);
          local_a98 = (undefined1 *)&piStack_c18;
          pcStack_c1c = (char *)0x0;
          piStack_c20 = (int *)0x34;
          pcStack_c24 = (char *)local_468[0x2ae];
          pcStack_c28 = (char *)0x461bab;
          game_loop_helper_e9240();
          pcStack_c28 = (char *)0x461bb2;
          FUN_005d9da0();
          piStack_c20 = (int *)0x461bbe;
          pcStack_c1c = (char *)FUN_0044e440();
          piStack_c20 = (int *)0x461bc6;
          FUN_00405520();
          pcStack_c1c = (char *)0x461bcb;
          FUN_0067aa80();
        }
      }
      else {
        pfStack_c00 = (function<void___cdecl(void)> *)0x461be6;
        ExceptionList = &local_10;
        (**(code **)(*in_ECX + 0x108))();
        pfStack_c00 = (function<void___cdecl(void)> *)0x461bfc;
        (**(code **)(*local_468 + 0x134))();
      }
    }
    break;
  case 0x4a:
    if (in_ECX[0x6a] == 0) {
      pfStack_c00 = (function<void___cdecl(void)> *)0x0;
      piStack_c04 = (int *)0xd;
      puStack_c08 = (undefined1 *)0x4633d6;
      ExceptionList = &local_10;
      (**(code **)(*in_ECX + 0x138))();
      puStack_c08 = (undefined1 *)0x0;
      pfStack_c0c = (function<void___cdecl(void)> *)0x20;
      piStack_c10 = (int *)0x4633e5;
      puStack_c08 = (undefined1 *)FUN_0047bcc0();
      pfStack_c0c = (function<void___cdecl(void)> *)0x4633fc;
      (**(code **)(*local_468 + 0x104))();
      local_468[0x6a] = 1;
    }
    else {
      pfStack_c00 = (function<void___cdecl(void)> *)0x463424;
      ExceptionList = &local_10;
      (**(code **)(*in_ECX + 0x108))();
      pfStack_c00 = (function<void___cdecl(void)> *)0x46343a;
      (**(code **)(*local_468 + 0x134))();
    }
    break;
  case 0x50:
    if (in_ECX[0x249] == 0) {
      if (in_ECX[0x6a] == 0) {
        ExceptionList = &local_10;
        in_ECX[0x6a] = 1;
        pfStack_c00 = (function<void___cdecl(void)> *)0x460683;
        (**(code **)(*in_ECX + 0x108))();
        pfStack_c00 = (function<void___cdecl(void)> *)0x0;
        piStack_c04 = (int *)0xb;
        puStack_c08 = (undefined1 *)0x46069d;
        (**(code **)(*local_468 + 0x138))();
        puStack_c08 = (undefined1 *)0x0;
        pfStack_c0c = (function<void___cdecl(void)> *)local_468[0x26c];
        piStack_c10 = (int *)0x4606b7;
        puStack_c08 = (undefined1 *)FUN_0047bcc0();
        pfStack_c0c = (function<void___cdecl(void)> *)0x4606ce;
        (**(code **)(*local_468 + 0x104))();
        local_a2c = (undefined1 *)&piStack_c20;
        pcStack_c24 = "character/swordman/effect/animation/keiga/loop1.ani";
        pcStack_c28 = (char *)0x4606e4;
        FUN_004054a0();
        pcStack_c24 = (char *)0x4606ef;
        FUN_00630660();
        local_a30 = (undefined1 *)&piStack_c20;
        pcStack_c24 = "character/swordman/effect/animation/keiga/loop2.ani";
        pcStack_c28 = (char *)0x460705;
        FUN_004054a0();
        pcStack_c24 = (char *)0x460710;
        FUN_00630660();
        local_a34 = (undefined1 *)&piStack_c20;
        pcStack_c24 = "character/swordman/effect/animation/keiga/loop3.ani";
        pcStack_c28 = (char *)0x460726;
        FUN_004054a0();
        pcStack_c24 = (char *)0x460731;
        FUN_00630660();
        local_a38 = (undefined1 *)&piStack_c20;
        pcStack_c24 = "character/swordman/effect/animation/keiga/loop4.ani";
        pcStack_c28 = (char *)0x460747;
        FUN_004054a0();
        pcStack_c24 = (char *)0x460752;
        FUN_00630660();
        local_a3c = (undefined1 *)&piStack_c20;
        pcStack_c24 = "character/swordman/effect/animation/keiga/appear1.ani";
        pcStack_c28 = (char *)0x460768;
        FUN_004054a0();
        pcStack_c24 = (char *)0x46077b;
        local_718 = (**(code **)(*local_468 + 0x78))();
        *(undefined1 *)(local_718 + 0x25) = 0;
        local_a40 = (undefined1 *)&pcStack_c38;
        pcStack_c3c = "character/swordman/effect/animation/keiga/appear2.ani";
        pcStack_c40 = (char *)0x4607a0;
        FUN_004054a0();
        pcStack_c3c = (char *)0x4607b3;
        local_71c = (**(code **)(*local_468 + 0x78))();
        *(undefined1 *)(local_71c + 0x25) = 0;
        local_a44 = (undefined1 *)&pcStack_c50;
        pcStack_c54 = "character/swordman/effect/animation/keiga/appear3.ani";
        pcStack_c58 = (char *)0x4607d8;
        FUN_004054a0();
        pcStack_c54 = (char *)0x4607eb;
        local_720 = (**(code **)(*local_468 + 0x78))();
        *(undefined1 *)(local_720 + 0x25) = 0;
        local_a48 = (undefined1 *)&pcStack_c68;
        pcStack_c6c = "character/swordman/effect/animation/keiga/appear4.ani";
        pcStack_c70 = (char *)0x460810;
        FUN_004054a0();
        pcStack_c6c = (char *)0x460823;
        local_724 = (**(code **)(*local_468 + 0x78))();
        *(undefined1 *)(local_724 + 0x25) = 0;
        pfStack_c00 = (function<void___cdecl(void)> *)0x460838;
        piVar3 = (int *)game_get_player_or_session_blob();
        if (local_468 == piVar3) {
          pfStack_c00 = (function<void___cdecl(void)> *)0x0;
          piStack_c04 = (int *)local_468[0x26c];
          puStack_c08 = (undefined1 *)local_468[0x2ae];
          pfStack_c0c = (function<void___cdecl(void)> *)0x460865;
          game_loop_helper_e9240();
          pfStack_c0c = (function<void___cdecl(void)> *)0x46086c;
          FUN_005d9da0();
          piStack_c04 = (int *)0x460878;
          iVar4 = FUN_0044e440();
          pfStack_c00 = *(function<void___cdecl(void)> **)(iVar4 + 0x18);
          local_a4c = (undefined1 *)&piStack_c18;
          pcStack_c1c = (char *)0x0;
          piStack_c20 = (int *)local_468[0x26c];
          pcStack_c24 = (char *)local_468[0x2ae];
          pcStack_c28 = (char *)0x4608a8;
          game_loop_helper_e9240();
          pcStack_c28 = (char *)0x4608af;
          FUN_005d9da0();
          piStack_c20 = (int *)0x4608bb;
          pcStack_c1c = (char *)FUN_0044e440();
          piStack_c20 = (int *)0x4608c3;
          FUN_00405520();
          pcStack_c1c = (char *)0x4608c8;
          FUN_0067aea0();
          pfStack_c00 = (function<void___cdecl(void)> *)0x0;
          piStack_c04 = (int *)local_468[0x26c];
          puStack_c08 = (undefined1 *)local_468[0x2ae];
          pfStack_c0c = (function<void___cdecl(void)> *)0x4608ec;
          game_loop_helper_e9240();
          pfStack_c0c = (function<void___cdecl(void)> *)0x4608f3;
          FUN_005d9da0();
          piStack_c04 = (int *)0x4608ff;
          iVar4 = FUN_0044e440();
          pfStack_c00 = *(function<void___cdecl(void)> **)(iVar4 + 0x18);
          local_a50 = (undefined1 *)&piStack_c18;
          pcStack_c1c = (char *)0x0;
          piStack_c20 = (int *)local_468[0x26c];
          pcStack_c24 = (char *)local_468[0x2ae];
          pcStack_c28 = (char *)0x46092f;
          game_loop_helper_e9240();
          pcStack_c28 = (char *)0x460936;
          FUN_005d9da0();
          piStack_c20 = (int *)0x460942;
          pcStack_c1c = (char *)FUN_0044e440();
          piStack_c20 = (int *)0x46094a;
          FUN_00405520();
          pcStack_c1c = (char *)0x46094f;
          FUN_0067aa80();
        }
        pfStack_c00 = (function<void___cdecl(void)> *)(local_468 + 0x26c);
        piStack_c04 = (int *)0x460970;
        iVar4 = FUN_0048a8f0();
        *(undefined4 *)(iVar4 + 0x70) = 0;
        pfStack_c00 = (function<void___cdecl(void)> *)(local_468 + 0x26c);
        piStack_c04 = (int *)0x460995;
        FUN_0048a8f0();
        pfStack_c00 = (function<void___cdecl(void)> *)0x46099f;
        cVar1 = FUN_00489dd0();
        if (cVar1 == '\0') {
          pfStack_c00 = (function<void___cdecl(void)> *)&DAT_00745118;
          piStack_c04 = (int *)0x4609ba;
          FUN_004054a0();
          local_8 = 0x1c;
          local_a54 = (undefined1 *)&piStack_c14;
          piStack_c18 = (int *)&DAT_00745110;
          pcStack_c1c = (char *)0x4609d6;
          FUN_004054a0();
          piStack_c18 = (int *)0x4609e1;
          local_728 = (int *)FUN_0063bda0();
          pfStack_c00 = local_11c;
          piStack_c04 = local_468 + 0x26c;
          puStack_c08 = (undefined1 *)0x460a17;
          local_60c = local_728;
          FUN_0048a8f0();
          piStack_c04 = (int *)0x460a21;
          piVar3 = (int *)FUN_0048ae20();
          *local_60c = *local_60c - *piVar3;
          local_8 = 0xffffffff;
          pfStack_c00 = (function<void___cdecl(void)> *)0x460a45;
          std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_11c);
          pfStack_c00 = (function<void___cdecl(void)> *)0x460a51;
          FUN_00657c10();
          pfStack_c00 = (function<void___cdecl(void)> *)(local_468 + 0x26c);
          piStack_c04 = (int *)0x460a6f;
          FUN_0048a8f0();
          pfStack_c00 = (function<void___cdecl(void)> *)0x460a79;
          FUN_00427bb0();
        }
        pfStack_c00 = (function<void___cdecl(void)> *)&DAT_00745120;
        piStack_c04 = (int *)0x460a8a;
        FUN_004054a0();
        local_8 = 0x1d;
        pfStack_c00 = (function<void___cdecl(void)> *)0x2;
        piStack_c04 = (int *)local_468[0x26c];
        puStack_c08 = (undefined1 *)0x460aab;
        FUN_0047bd30();
        pfStack_c00 = (function<void___cdecl(void)> *)0x460ab0;
        uVar5 = thunk_FUN_006e5750();
        pfStack_c00 = local_104;
        piStack_c04 = local_468 + 0x26c;
        puStack_c08 = (undefined1 *)0x460ad7;
        FUN_0048a8f0();
        piStack_c04 = (int *)0x460ae1;
        puVar6 = (undefined4 *)FUN_0048ae20();
        *puVar6 = uVar5;
        local_8 = 0xffffffff;
        pfStack_c00 = (function<void___cdecl(void)> *)0x460af5;
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_104);
        pfStack_c00 = (function<void___cdecl(void)> *)0x3;
        piStack_c04 = (int *)local_468[0x26c];
        puStack_c08 = (undefined1 *)0x460b10;
        fVar9 = (float10)FUN_0047bd30();
        local_72c = (float)fVar9;
        fVar10 = local_72c * 1000.0;
        pfStack_c00 = (function<void___cdecl(void)> *)(local_468 + 0x26c);
        piStack_c04 = (int *)0x460b48;
        iVar4 = FUN_0048a8f0();
        *(int *)(iVar4 + 0x74) = (int)fVar10;
        pfStack_c00 = (function<void___cdecl(void)> *)(local_468 + 0x26c);
        piStack_c04 = (int *)0x460b68;
        local_610 = FUN_0048a8f0();
        local_610 = local_610 + 0x7c;
        pfStack_c00 = (function<void___cdecl(void)> *)local_504;
        piStack_c04 = (int *)0x460b83;
        FUN_0044dff0();
        pfStack_c00 = (function<void___cdecl(void)> *)&local_49c;
        piStack_c04 = (int *)0x460b95;
        FUN_0044dfd0();
        while( true ) {
          pfStack_c00 = (function<void___cdecl(void)> *)(uint)local_49c;
          piStack_c04 = (int *)0x460bb7;
          cVar1 = FUN_0044dd70();
          if (cVar1 == '\0') break;
          pfStack_c00 = (function<void___cdecl(void)> *)0x460bc9;
          piStack_c18 = (int *)FUN_0044dd50();
          local_a58 = (undefined1 *)&piStack_c14;
          pcStack_c1c = (char *)0x460be6;
          local_614 = piStack_c18;
          FUN_00405520();
          piStack_c18 = (int *)0x460bf1;
          local_730 = (int *)FUN_0063bda0();
          *local_730 = *local_730 + local_614[6];
          pfStack_c00 = (function<void___cdecl(void)> *)0x460ba3;
          local_618 = local_730;
          FUN_0044dd30();
        }
        pfStack_c00 = (function<void___cdecl(void)> *)0x460c2c;
        FUN_00657c10();
        local_a5c = (undefined1 *)&piStack_c14;
        piStack_c18 = (int *)0x745128;
        pcStack_c1c = (char *)0x460c42;
        FUN_004054a0();
        piStack_c18 = (int *)0x460c47;
        FUN_004c3500();
      }
      else {
        pfStack_c00 = (function<void___cdecl(void)> *)0x460c62;
        ExceptionList = &local_10;
        (**(code **)(*in_ECX + 0x108))();
        pfStack_c00 = (function<void___cdecl(void)> *)0x460c78;
        (**(code **)(*local_468 + 0x134))();
      }
    }
    break;
  case 0x51:
    if (in_ECX[0x249] == 0) {
      if (in_ECX[0x6a] == 0) {
        ExceptionList = &local_10;
        in_ECX[0x6a] = 1;
        pfStack_c00 = (function<void___cdecl(void)> *)0x460e5d;
        (**(code **)(*in_ECX + 0x108))();
        pfStack_c00 = (function<void___cdecl(void)> *)0x0;
        piStack_c04 = (int *)0xb;
        puStack_c08 = (undefined1 *)0x460e77;
        (**(code **)(*local_468 + 0x138))();
        puStack_c08 = (undefined1 *)0x0;
        pfStack_c0c = (function<void___cdecl(void)> *)0x29;
        piStack_c10 = (int *)0x460e86;
        puStack_c08 = (undefined1 *)FUN_0047bcc0();
        pfStack_c0c = (function<void___cdecl(void)> *)0x460e9d;
        (**(code **)(*local_468 + 0x104))();
        pfStack_c0c = (function<void___cdecl(void)> *)local_468[0x7d];
        piStack_c10 = (int *)0x4e2d;
        piStack_c14 = (int *)0x0;
        piStack_c18 = (int *)0x0;
        pcStack_c1c = (char *)0x42c80000;
        piStack_c20 = local_468;
        pcStack_c24 = (char *)0x460edb;
        FUN_0042f340();
        local_a64 = (undefined1 *)&piStack_c20;
        pcStack_c24 = "common/etc/animation/endofcasting.ani";
        pcStack_c28 = (char *)0x460ef3;
        FUN_004054a0();
        pcStack_c24 = (char *)0x460f06;
        local_738 = (**(code **)(*local_468 + 0x78))();
        pcStack_c24 = "Pj";
        local_4ac = local_738;
        pfStack_c00 = (function<void___cdecl(void)> *)(**(code **)(*local_468 + 0x68))();
        piStack_c04 = (int *)0x0;
        puStack_c08 = (undefined1 *)0x0;
        pfStack_c0c = (function<void___cdecl(void)> *)0x460f3b;
        FUN_0062fd90();
        *(int *)(local_4ac + 0x114) = *(int *)(local_4ac + 0x114) + 100;
        *(undefined4 *)(local_4ac + 0x4c) = 1;
        *(undefined1 *)(local_4ac + 0xe8) = 0;
      }
      else {
        pfStack_c00 = (function<void___cdecl(void)> *)0x460f88;
        ExceptionList = &local_10;
        (**(code **)(*in_ECX + 0x108))();
        pfStack_c00 = (function<void___cdecl(void)> *)0x460f9e;
        (**(code **)(*local_468 + 0x134))();
      }
    }
    break;
  case 0x52:
    if (in_ECX[0x249] == 0) {
      if (in_ECX[0x6a] == 0) {
        ExceptionList = &local_10;
        in_ECX[0x6a] = 1;
        pfStack_c00 = (function<void___cdecl(void)> *)0x45f6c7;
        (**(code **)(*in_ECX + 0x108))();
        pfStack_c00 = (function<void___cdecl(void)> *)0x0;
        piStack_c04 = (int *)0xd;
        puStack_c08 = (undefined1 *)0x45f6e1;
        (**(code **)(*local_468 + 0x138))();
        puStack_c08 = (undefined1 *)0x0;
        pfStack_c0c = (function<void___cdecl(void)> *)local_468[0x26c];
        piStack_c10 = (int *)0x45f6fb;
        puStack_c08 = (undefined1 *)FUN_0047bcc0();
        pfStack_c0c = (function<void___cdecl(void)> *)0x45f712;
        (**(code **)(*local_468 + 0x104))();
        pfStack_c0c = (function<void___cdecl(void)> *)(local_468 + 0x26c);
        piStack_c10 = (int *)0x45f730;
        iVar4 = FUN_0048a8f0();
        *(undefined4 *)(iVar4 + 0x70) = 0;
        pfStack_c0c = (function<void___cdecl(void)> *)(local_468 + 0x26c);
        piStack_c10 = (int *)0x45f755;
        iVar4 = FUN_0048a8f0();
        *(int *)(iVar4 + 0x78) = local_468[0x26c];
        pfStack_c0c = (function<void___cdecl(void)> *)0x45f769;
        piVar3 = (int *)game_get_player_or_session_blob();
        if (local_468 == piVar3) {
          pfStack_c0c = (function<void___cdecl(void)> *)0x0;
          piStack_c10 = (int *)local_468[0x26c];
          piStack_c14 = (int *)local_468[0x2ae];
          piStack_c18 = (int *)0x45f796;
          game_loop_helper_e9240();
          piStack_c18 = (int *)0x45f79d;
          FUN_005d9da0();
          piStack_c10 = (int *)0x45f7a9;
          iVar4 = FUN_0044e440();
          pfStack_c0c = *(function<void___cdecl(void)> **)(iVar4 + 0x18);
          local_9c8 = (undefined1 *)&pcStack_c24;
          pcStack_c28 = (char *)0x0;
          iStack_c2c = local_468[0x26c];
          pcStack_c30 = (char *)local_468[0x2ae];
          uStack_c34 = 0x45f7d9;
          game_loop_helper_e9240();
          uStack_c34 = 0x45f7e0;
          FUN_005d9da0();
          iStack_c2c = 0x45f7ec;
          pcStack_c28 = (char *)FUN_0044e440();
          iStack_c2c = 0x45f7f4;
          FUN_00405520();
          pcStack_c28 = (char *)0x45f7f9;
          FUN_0067aea0();
          pfStack_c0c = (function<void___cdecl(void)> *)0x0;
          piStack_c10 = (int *)local_468[0x26c];
          piStack_c14 = (int *)local_468[0x2ae];
          piStack_c18 = (int *)0x45f81d;
          game_loop_helper_e9240();
          piStack_c18 = (int *)0x45f824;
          FUN_005d9da0();
          piStack_c10 = (int *)0x45f830;
          iVar4 = FUN_0044e440();
          pfStack_c0c = *(function<void___cdecl(void)> **)(iVar4 + 0x18);
          local_9cc = (undefined1 *)&pcStack_c24;
          pcStack_c28 = (char *)0x0;
          iStack_c2c = local_468[0x26c];
          pcStack_c30 = (char *)local_468[0x2ae];
          uStack_c34 = 0x45f860;
          game_loop_helper_e9240();
          uStack_c34 = 0x45f867;
          FUN_005d9da0();
          iStack_c2c = 0x45f873;
          pcStack_c28 = (char *)FUN_0044e440();
          iStack_c2c = 0x45f87b;
          FUN_00405520();
          pcStack_c28 = (char *)0x45f880;
          FUN_0067aa80();
        }
        pfStack_c0c = (function<void___cdecl(void)> *)0x45f88e;
        FUN_00465c50();
        pfStack_c0c = (function<void___cdecl(void)> *)0x0;
        piStack_c10 = (int *)local_468[0x26c];
        piStack_c14 = (int *)0x45f8a8;
        fVar9 = (float10)FUN_0047bd30();
        local_6bc = (float)fVar9;
        fVar10 = local_6bc * 1000.0;
        pfStack_c0c = (function<void___cdecl(void)> *)(local_468 + 0x26c);
        piStack_c10 = (int *)0x45f8e0;
        iVar4 = FUN_0048a8f0();
        *(int *)(iVar4 + 0x74) = (int)fVar10;
        pfStack_c0c = (function<void___cdecl(void)> *)0x45f8e8;
        game_get_state_ptr_d1520();
        pfStack_c0c = (function<void___cdecl(void)> *)0x45f8ef;
        piVar3 = (int *)FUN_004d58e0();
        local_588 = *piVar3 + 0x170;
        pfStack_c0c = (function<void___cdecl(void)> *)local_50c;
        piStack_c10 = (int *)0x45f90e;
        FUN_0042a9e0();
        pfStack_c0c = (function<void___cdecl(void)> *)local_6c0;
        piStack_c10 = (int *)0x45f920;
        FUN_0042a9c0();
        while( true ) {
          pfStack_c0c = (function<void___cdecl(void)> *)local_6c0;
          piStack_c10 = (int *)0x45f941;
          cVar1 = FUN_0040d2d0();
          if (cVar1 == '\0') break;
          pfStack_c0c = (function<void___cdecl(void)> *)0x45f957;
          local_47c = (int *)FUN_0042a580();
          if (*local_47c != 0) {
            pfStack_c0c = (function<void___cdecl(void)> *)0x45f979;
            cVar1 = FUN_006352e0();
            if ((cVar1 == '\0') && (*(int *)(*local_47c + 0x24) == 0)) {
              uVar7 = *(int *)(*local_47c + 0x224) - local_468[0x89];
              uVar8 = (int)uVar7 >> 0x1f;
              pfStack_c0c = (function<void___cdecl(void)> *)0x1;
              piStack_c10 = (int *)local_468[0x26c];
              piStack_c14 = (int *)0x45f9d3;
              iVar4 = FUN_0047bcc0();
              if ((int)((uVar7 ^ uVar8) - uVar8) <= iVar4 / 2) {
                pfStack_c0c = (function<void___cdecl(void)> *)*local_47c;
                piStack_c10 = (int *)0x45f9ff;
                cVar1 = (**(code **)(*local_468 + 0x88))();
                if (cVar1 == '\0') {
                  *(undefined4 *)(*local_47c + 0x24) = 1;
                  local_9d4 = (undefined1 *)&pcStack_c24;
                  pcStack_c28 = &DAT_00744bec;
                  iStack_c2c = 0x45fab4;
                  FUN_004054a0();
                  pcStack_c28 = (char *)0x45fac1;
                  local_6cc = (int *)FUN_0063b7b0();
                  piStack_c10 = (int *)0x1;
                  piStack_c14 = (int *)local_468[0x26c];
                  piStack_c18 = (int *)0x45faed;
                  local_580 = local_6cc;
                  fVar9 = (float10)FUN_0047bd30();
                  local_6d0 = (float)fVar9;
                  *local_580 = (int)((float)*local_580 + local_6d0);
                }
                else {
                  *(undefined4 *)(*local_47c + 0x24) = 2;
                  local_9d0 = (undefined1 *)&pcStack_c24;
                  pcStack_c28 = &DAT_00744be0;
                  iStack_c2c = 0x45fa2e;
                  FUN_004054a0();
                  pcStack_c28 = (char *)0x45fa3b;
                  local_6c4 = (int *)FUN_0063b7b0();
                  piStack_c10 = (int *)0x2;
                  piStack_c14 = (int *)local_468[0x26c];
                  piStack_c18 = (int *)0x45fa67;
                  local_584 = local_6c4;
                  fVar9 = (float10)FUN_0047bd30();
                  local_6c8 = (float)fVar9;
                  *local_584 = (int)((float)*local_584 - local_6c8);
                }
                piStack_c10 = (int *)0x45fb1e;
                FUN_00657c10();
                local_9d8 = (undefined1 *)&pcStack_c24;
                pcStack_c28 = "common/commoneffect/animation/buffstartglow.ani";
                iStack_c2c = 0x45fb34;
                FUN_004054a0();
                pcStack_c28 = (char *)0x45fb4b;
                local_6d4 = (**(code **)(*(int *)*local_47c + 0x78))();
                pcStack_c28 = (char *)0x45fb74;
                local_488 = local_6d4;
                iVar4 = (**(code **)(*(int *)*local_47c + 0x68))();
                pcStack_c28 = (char *)(iVar4 + 0x1e);
                iStack_c2c = 0;
                pcStack_c30 = (char *)0x0;
                uStack_c34 = 0x45fb87;
                FUN_0062fd90();
                *(int *)(local_488 + 0x114) = *(int *)(local_488 + 0x114) + 100;
                *(undefined4 *)(local_488 + 0x4c) = 1;
                *(undefined1 *)(local_488 + 0xe8) = 0;
                pcStack_c40 = "common/commoneffect/animation/buffstarticonglow.ani";
                uStack_c44 = 0x45fbd1;
                FUN_004054a0();
                pcStack_c40 = (char *)0x45fbe8;
                local_6d8 = (**(code **)(*(int *)*local_47c + 0x78))();
                pcStack_c40 = (char *)0x45fc11;
                local_488 = local_6d8;
                iVar4 = (**(code **)(*(int *)*local_47c + 0x68))();
                pcStack_c40 = (char *)(iVar4 + 0x1e);
                uStack_c44 = 0;
                pcStack_c48 = (char *)0x0;
                uStack_c4c = 0x45fc24;
                FUN_0062fd90();
                *(int *)(local_488 + 0x114) = *(int *)(local_488 + 0x114) + 200;
                *(undefined4 *)(local_488 + 0x4c) = 1;
                *(undefined1 *)(local_488 + 0xe8) = 0;
                local_9e0 = (undefined1 *)&pcStack_c54;
                pcStack_c58 = "common/commoneffect/animation/buffstarticon.ani";
                uStack_c5c = 0x45fc71;
                FUN_004054a0();
                pcStack_c58 = (char *)0x45fc88;
                local_6dc = (**(code **)(*(int *)*local_47c + 0x78))();
                pcStack_c58 = (char *)0x45fcb1;
                local_488 = local_6dc;
                iVar4 = (**(code **)(*(int *)*local_47c + 0x68))();
                pfStack_c0c = (function<void___cdecl(void)> *)(iVar4 + 0x28);
                piStack_c10 = (int *)0x0;
                piStack_c14 = (int *)0x0;
                piStack_c18 = (int *)0x45fcc4;
                FUN_0062fd90();
                pfStack_c0c = (function<void___cdecl(void)> *)local_468[0x26c];
                piStack_c10 = (int *)0x45fcdd;
                pfStack_c0c = (function<void___cdecl(void)> *)FUN_004596a0();
                local_9e4 = (undefined1 *)&pcStack_c24;
                pcStack_c28 = "sprite/common/commoneffect/bufficon.img";
                iStack_c2c = 0x45fcf3;
                FUN_004054a0();
                pcStack_c28 = (char *)0x45fcfe;
                FUN_0062fc50();
                *(int *)(local_488 + 0x114) = *(int *)(local_488 + 0x114) + 300;
                *(undefined4 *)(local_488 + 0x4c) = 1;
                *(undefined1 *)(local_488 + 0xe8) = 0;
              }
            }
          }
          pfStack_c0c = (function<void___cdecl(void)> *)0x45f92e;
          FUN_0042a560();
        }
        local_9e8 = (undefined1 *)&piStack_c20;
        pcStack_c24 = "character/swordman/effect/animation/mooncurtain_eff_under.ani";
        pcStack_c28 = (char *)0x45fd51;
        FUN_004054a0();
        pcStack_c24 = (char *)0x45fd64;
        local_6e0 = (**(code **)(*local_468 + 0x78))();
        *(undefined4 *)(local_6e0 + 0x114) = 0xfffffed4;
        local_9ec = (undefined1 *)&pcStack_c38;
        pcStack_c3c = "character/swordman/effect/animation/mooncurtain_under.ani";
        pcStack_c40 = (char *)0x45fd8f;
        FUN_004054a0();
        pcStack_c3c = (char *)0x45fda2;
        local_6e4 = (**(code **)(*local_468 + 0x78))();
        *(undefined4 *)(local_6e4 + 0x114) = 0xffffff38;
        local_9f0 = (undefined1 *)&pcStack_c50;
        pcStack_c54 = "character/swordman/effect/animation/mooncurtain_floor.ani";
        pcStack_c58 = (char *)0x45fdcd;
        FUN_004054a0();
        pcStack_c54 = (char *)0x45fde0;
        local_6e8 = (**(code **)(*local_468 + 0x78))();
        *(undefined4 *)(local_6e8 + 0x114) = 0xffffff9c;
        local_9f4 = (undefined1 *)&pcStack_c68;
        pcStack_c6c = "character/swordman/effect/animation/mooncurtain_eff_upper.ani";
        pcStack_c70 = (char *)0x45fe0b;
        FUN_004054a0();
        pcStack_c6c = (char *)0x45fe1e;
        local_6ec = (**(code **)(*local_468 + 0x78))();
        *(undefined4 *)(local_6ec + 0x114) = 100;
        local_9f8 = (undefined1 *)&pcStack_c80;
        pcStack_c84 = "character/swordman/effect/animation/mooncurtain_upper.ani";
        uStack_c88 = 0x45fe49;
        FUN_004054a0();
        pcStack_c84 = (char *)0x45fe5c;
        local_6f0 = (**(code **)(*local_468 + 0x78))();
        *(undefined4 *)(local_6f0 + 0x114) = 200;
        local_9fc = (undefined1 *)&piStack_c14;
        piStack_c18 = (int *)0x744de8;
        pcStack_c1c = (char *)0x45fe87;
        FUN_004054a0();
        piStack_c18 = (int *)0x45fe8c;
        FUN_004c3570();
      }
      else {
        pfStack_c00 = (function<void___cdecl(void)> *)0x45fea7;
        ExceptionList = &local_10;
        (**(code **)(*in_ECX + 0x108))();
        pfStack_c00 = (function<void___cdecl(void)> *)0x45febd;
        (**(code **)(*local_468 + 0x134))();
      }
    }
    break;
  case 0x53:
    if (in_ECX[0x249] == 0) {
      if (in_ECX[0x6a] == 0) {
        ExceptionList = &local_10;
        in_ECX[0x6a] = 1;
        pfStack_c00 = (function<void___cdecl(void)> *)0x460ff0;
        (**(code **)(*in_ECX + 0x108))();
        pfStack_c00 = (function<void___cdecl(void)> *)0x0;
        piStack_c04 = (int *)0xb;
        puStack_c08 = (undefined1 *)0x46100a;
        (**(code **)(*local_468 + 0x138))();
        puStack_c08 = (undefined1 *)0x0;
        pfStack_c0c = (function<void___cdecl(void)> *)0x24;
        piStack_c10 = (int *)0x461019;
        puStack_c08 = (undefined1 *)FUN_0047bcc0();
        pfStack_c0c = (function<void___cdecl(void)> *)0x461030;
        (**(code **)(*local_468 + 0x104))();
        pfStack_c0c = (function<void___cdecl(void)> *)local_468[0x7d];
        piStack_c10 = (int *)0x4e2c;
        piStack_c14 = (int *)0x0;
        piStack_c18 = (int *)0x0;
        pcStack_c1c = (char *)0x42c80000;
        piStack_c20 = local_468;
        pcStack_c24 = (char *)0x46106e;
        FUN_0042f340();
        local_a68 = (undefined1 *)&piStack_c20;
        pcStack_c24 = "common/etc/animation/endofcasting.ani";
        pcStack_c28 = (char *)0x461086;
        FUN_004054a0();
        pcStack_c24 = (char *)0x461099;
        local_73c = (**(code **)(*local_468 + 0x78))();
        pcStack_c24 = "Pj";
        local_4b0 = local_73c;
        pfStack_c00 = (function<void___cdecl(void)> *)(**(code **)(*local_468 + 0x68))();
        piStack_c04 = (int *)0x0;
        puStack_c08 = (undefined1 *)0x0;
        pfStack_c0c = (function<void___cdecl(void)> *)0x4610ce;
        FUN_0062fd90();
        *(int *)(local_4b0 + 0x114) = *(int *)(local_4b0 + 0x114) + 100;
        *(undefined4 *)(local_4b0 + 0x4c) = 1;
        *(undefined1 *)(local_4b0 + 0xe8) = 0;
      }
      else {
        pfStack_c00 = (function<void___cdecl(void)> *)0x46111b;
        ExceptionList = &local_10;
        (**(code **)(*in_ECX + 0x108))();
        pfStack_c00 = (function<void___cdecl(void)> *)0x461131;
        (**(code **)(*local_468 + 0x134))();
      }
    }
    break;
  case 0x54:
    if (in_ECX[0x249] == 0) {
      if (in_ECX[0x6a] == 0) {
        ExceptionList = &local_10;
        in_ECX[0x6a] = 1;
        pfStack_c00 = (function<void___cdecl(void)> *)0x45ff0f;
        (**(code **)(*in_ECX + 0x108))();
        pfStack_c00 = (function<void___cdecl(void)> *)0x0;
        piStack_c04 = (int *)0xb;
        puStack_c08 = (undefined1 *)0x45ff29;
        (**(code **)(*local_468 + 0x138))();
        puStack_c08 = (undefined1 *)0x0;
        pfStack_c0c = (function<void___cdecl(void)> *)local_468[0x26c];
        piStack_c10 = (int *)0x45ff43;
        puStack_c08 = (undefined1 *)FUN_0047bcc0();
        pfStack_c0c = (function<void___cdecl(void)> *)0x45ff5a;
        (**(code **)(*local_468 + 0x104))();
        pfStack_c0c = (function<void___cdecl(void)> *)(local_468 + 0x26c);
        piStack_c10 = (int *)0x45ff78;
        iVar4 = FUN_0048a8f0();
        *(undefined4 *)(iVar4 + 0x70) = 0;
        pfStack_c0c = (function<void___cdecl(void)> *)(local_468 + 0x26c);
        piStack_c10 = (int *)0x45ff9d;
        iVar4 = FUN_0048a8f0();
        *(int *)(iVar4 + 0x78) = local_468[0x26c];
        pfStack_c0c = (function<void___cdecl(void)> *)0x45ffb1;
        piVar3 = (int *)game_get_player_or_session_blob();
        if (local_468 == piVar3) {
          pfStack_c0c = (function<void___cdecl(void)> *)0x0;
          piStack_c10 = (int *)local_468[0x26c];
          piStack_c14 = (int *)local_468[0x2ae];
          piStack_c18 = (int *)0x45ffde;
          game_loop_helper_e9240();
          piStack_c18 = (int *)0x45ffe5;
          FUN_005d9da0();
          piStack_c10 = (int *)0x45fff1;
          iVar4 = FUN_0044e440();
          pfStack_c0c = *(function<void___cdecl(void)> **)(iVar4 + 0x18);
          local_a00 = (undefined1 *)&pcStack_c24;
          pcStack_c28 = (char *)0x0;
          iStack_c2c = local_468[0x26c];
          pcStack_c30 = (char *)local_468[0x2ae];
          uStack_c34 = 0x460021;
          game_loop_helper_e9240();
          uStack_c34 = 0x460028;
          FUN_005d9da0();
          iStack_c2c = 0x460034;
          pcStack_c28 = (char *)FUN_0044e440();
          iStack_c2c = 0x46003c;
          FUN_00405520();
          pcStack_c28 = (char *)0x460041;
          FUN_0067aea0();
          pfStack_c0c = (function<void___cdecl(void)> *)0x0;
          piStack_c10 = (int *)local_468[0x26c];
          piStack_c14 = (int *)local_468[0x2ae];
          piStack_c18 = (int *)0x460065;
          game_loop_helper_e9240();
          piStack_c18 = (int *)0x46006c;
          FUN_005d9da0();
          piStack_c10 = (int *)0x460078;
          iVar4 = FUN_0044e440();
          pfStack_c0c = *(function<void___cdecl(void)> **)(iVar4 + 0x18);
          local_a04 = (undefined1 *)&pcStack_c24;
          pcStack_c28 = (char *)0x0;
          iStack_c2c = local_468[0x26c];
          pcStack_c30 = (char *)local_468[0x2ae];
          uStack_c34 = 0x4600a8;
          game_loop_helper_e9240();
          uStack_c34 = 0x4600af;
          FUN_005d9da0();
          iStack_c2c = 0x4600bb;
          pcStack_c28 = (char *)FUN_0044e440();
          iStack_c2c = 0x4600c3;
          FUN_00405520();
          pcStack_c28 = (char *)0x4600c8;
          FUN_0067aa80();
        }
        pfStack_c0c = (function<void___cdecl(void)> *)(local_468 + 0x26c);
        piStack_c10 = (int *)0x4600e8;
        FUN_0048a8f0();
        pfStack_c0c = (function<void___cdecl(void)> *)0x4600f2;
        cVar1 = FUN_00489dd0();
        if (cVar1 == '\0') {
          pfStack_c0c = (function<void___cdecl(void)> *)&DAT_00744e04;
          piStack_c10 = (int *)0x46010d;
          FUN_004054a0();
          local_8 = 0x1a;
          local_a08 = (undefined1 *)&piStack_c20;
          pcStack_c24 = &DAT_00744df8;
          pcStack_c28 = (char *)0x460129;
          FUN_004054a0();
          pcStack_c24 = (char *)0x460134;
          local_6f4 = (int *)FUN_0063bda0();
          pfStack_c0c = local_134;
          piStack_c10 = local_468 + 0x26c;
          piStack_c14 = (int *)0x46016b;
          local_5e0 = local_6f4;
          FUN_0048a8f0();
          piStack_c10 = (int *)0x460175;
          piVar3 = (int *)FUN_0048ae20();
          *local_5e0 = *local_5e0 - *piVar3;
          local_8 = 0xffffffff;
          pfStack_c0c = (function<void___cdecl(void)> *)0x460199;
          std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_134);
          pfStack_c0c = (function<void___cdecl(void)> *)0x4601a5;
          FUN_00657c10();
          pfStack_c0c = (function<void___cdecl(void)> *)(local_468 + 0x26c);
          piStack_c10 = (int *)0x4601c2;
          FUN_0048a8f0();
          pfStack_c0c = (function<void___cdecl(void)> *)0x4601cc;
          FUN_00427bb0();
        }
        pfStack_c0c = (function<void___cdecl(void)> *)&DAT_00744e10;
        piStack_c10 = (int *)0x4601dd;
        FUN_004054a0();
        local_8 = 0x1b;
        pfStack_c0c = (function<void___cdecl(void)> *)0x2;
        piStack_c10 = (int *)local_468[0x26c];
        piStack_c14 = (int *)0x4601fe;
        fVar9 = (float10)FUN_0047bd30();
        local_6f8 = (float)fVar9;
        fVar10 = local_6f8 * 10.0;
        pfStack_c0c = local_224;
        piStack_c10 = local_468 + 0x26c;
        piStack_c14 = (int *)0x46023d;
        FUN_0048a8f0();
        piStack_c10 = (int *)0x460247;
        piVar3 = (int *)FUN_0048ae20();
        *piVar3 = (int)fVar10;
        local_8 = 0xffffffff;
        pfStack_c0c = (function<void___cdecl(void)> *)0x46025b;
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_224);
        pfStack_c0c = (function<void___cdecl(void)> *)0x0;
        piStack_c10 = (int *)local_468[0x26c];
        piStack_c14 = (int *)0x460276;
        fVar9 = (float10)FUN_0047bd30();
        local_6fc = (float)fVar9;
        fVar10 = local_6fc * 1000.0;
        pfStack_c0c = (function<void___cdecl(void)> *)(local_468 + 0x26c);
        piStack_c10 = (int *)0x4602ae;
        iVar4 = FUN_0048a8f0();
        *(int *)(iVar4 + 0x74) = (int)fVar10;
        pfStack_c0c = (function<void___cdecl(void)> *)(local_468 + 0x26c);
        piStack_c10 = (int *)0x4602cf;
        local_5bc = FUN_0048a8f0();
        local_5bc = local_5bc + 0x7c;
        pfStack_c0c = (function<void___cdecl(void)> *)local_508;
        piStack_c10 = (int *)0x4602ea;
        FUN_0044dff0();
        pfStack_c0c = (function<void___cdecl(void)> *)&local_49b;
        piStack_c10 = (int *)0x4602fc;
        FUN_0044dfd0();
        while( true ) {
          pfStack_c0c = (function<void___cdecl(void)> *)(uint)local_49b;
          piStack_c10 = (int *)0x46031e;
          cVar1 = FUN_0044dd70();
          if (cVar1 == '\0') break;
          pfStack_c0c = (function<void___cdecl(void)> *)0x460330;
          pcStack_c24 = (char *)FUN_0044dd50();
          local_a0c = (undefined1 *)&piStack_c20;
          pcStack_c28 = (char *)0x46034d;
          local_604 = pcStack_c24;
          FUN_00405520();
          pcStack_c24 = (char *)0x460358;
          local_700 = (int *)FUN_0063bda0();
          *local_700 = *local_700 + *(int *)(local_604 + 0x18);
          pfStack_c0c = (function<void___cdecl(void)> *)0x46030a;
          local_608 = local_700;
          FUN_0044dd30();
        }
        pfStack_c0c = (function<void___cdecl(void)> *)0x460393;
        FUN_00657c10();
        local_a10 = (undefined1 *)&piStack_c20;
        pcStack_c24 = "common/commoneffect/animation/buffstartglow.ani";
        pcStack_c28 = (char *)0x4603a9;
        FUN_004054a0();
        pcStack_c24 = (char *)0x4603bc;
        local_704 = (**(code **)(*local_468 + 0x78))();
        pcStack_c24 = (char *)0x8c;
        pcStack_c28 = (char *)0x0;
        iStack_c2c = 0;
        pcStack_c30 = (char *)0x4603e2;
        local_48c = local_704;
        FUN_0062fd90();
        *(int *)(local_48c + 0x114) = *(int *)(local_48c + 0x114) + 100;
        *(undefined4 *)(local_48c + 0x4c) = 1;
        *(undefined1 *)(local_48c + 0xe8) = 0;
        local_a14 = (undefined1 *)&pcStack_c38;
        pcStack_c3c = "common/commoneffect/animation/buffstarticonglow.ani";
        pcStack_c40 = (char *)0x46042c;
        FUN_004054a0();
        pcStack_c3c = (char *)0x46043f;
        local_708 = (**(code **)(*local_468 + 0x78))();
        pcStack_c3c = (char *)0x8c;
        pcStack_c40 = (char *)0x0;
        uStack_c44 = 0;
        pcStack_c48 = (char *)0x460465;
        local_48c = local_708;
        FUN_0062fd90();
        *(int *)(local_48c + 0x114) = *(int *)(local_48c + 0x114) + 200;
        *(undefined4 *)(local_48c + 0x4c) = 1;
        *(undefined1 *)(local_48c + 0xe8) = 0;
        local_a18 = (undefined1 *)&pcStack_c50;
        pcStack_c54 = "common/commoneffect/animation/buffstarticon.ani";
        pcStack_c58 = (char *)0x4604b1;
        FUN_004054a0();
        pcStack_c54 = (char *)0x4604c4;
        local_70c = (**(code **)(*local_468 + 0x78))();
        pcStack_c54 = (char *)0x8c;
        pcStack_c58 = (char *)0x0;
        uStack_c5c = 0;
        pcStack_c60 = (char *)0x4604ea;
        local_48c = local_70c;
        FUN_0062fd90();
        pcStack_c54 = (char *)local_468[0x26c];
        pcStack_c58 = (char *)0x460503;
        pcStack_c54 = (char *)FUN_004596a0();
        local_a1c = (undefined1 *)&pcStack_c6c;
        pcStack_c70 = "sprite/common/commoneffect/bufficon.img";
        uStack_c74 = 0x460519;
        FUN_004054a0();
        pcStack_c70 = (char *)0x460524;
        FUN_0062fc50();
        *(int *)(local_48c + 0x114) = *(int *)(local_48c + 0x114) + 300;
        *(undefined4 *)(local_48c + 0x4c) = 1;
        *(undefined1 *)(local_48c + 0xe8) = 0;
        pcStack_c54 = (char *)0x460568;
        FUN_00465db0();
        local_a20 = (undefined1 *)&pcStack_c68;
        pcStack_c6c = "character/swordman/effect/animation/ghoststep/appear1.ani";
        pcStack_c70 = (char *)0x46057e;
        FUN_004054a0();
        pcStack_c6c = (char *)0x460591;
        local_710 = (**(code **)(*local_468 + 0x78))();
        *(undefined1 *)(local_710 + 0x25) = 0;
        local_a24 = (undefined1 *)&pcStack_c80;
        pcStack_c84 = "character/swordman/effect/animation/ghoststep/appear2.ani";
        uStack_c88 = 0x4605b6;
        FUN_004054a0();
        pcStack_c84 = (char *)0x4605c9;
        local_714 = (**(code **)(*local_468 + 0x78))();
        *(undefined1 *)(local_714 + 0x25) = 0;
        *(undefined1 *)((int)local_468 + 0xa8f) = 1;
        local_a28 = (undefined1 *)&piStack_c14;
        piStack_c18 = (int *)0x744f50;
        pcStack_c1c = (char *)0x4605fb;
        FUN_004054a0();
        piStack_c18 = (int *)0x460600;
        FUN_004c3570();
      }
      else {
        pfStack_c00 = (function<void___cdecl(void)> *)0x46061b;
        ExceptionList = &local_10;
        (**(code **)(*in_ECX + 0x108))();
        pfStack_c00 = (function<void___cdecl(void)> *)0x460631;
        (**(code **)(*local_468 + 0x134))();
      }
    }
    break;
  case 0x96:
    pfStack_c00 = (function<void___cdecl(void)> *)0x462a4f;
    ExceptionList = &local_10;
    FUN_00635730();
    pfStack_c00 = (function<void___cdecl(void)> *)0x462a65;
    (**(code **)(*local_468 + 0x134))();
    break;
  case 0xa0:
    if ((in_ECX[0x6a] == 1) && (in_ECX[99] != 0)) {
      ExceptionList = &local_10;
      in_ECX[0x6a] = 2;
      pfStack_c00 = (function<void___cdecl(void)> *)0xf;
      piStack_c04 = (int *)0x15;
      puStack_c08 = (undefined1 *)0x462abb;
      (**(code **)(*in_ECX + 0x138))();
      puStack_c08 = (undefined1 *)0x12;
      pfStack_c0c = (function<void___cdecl(void)> *)0x3;
      piStack_c10 = (int *)0x462ad5;
      (**(code **)(*local_468 + 0x13c))();
      piStack_c10 = (int *)0x0;
      piStack_c14 = (int *)0x1;
      piStack_c18 = (int *)0x3a;
      pcStack_c1c = (char *)0x462ae6;
      FUN_0047bd30();
      piStack_c14 = (int *)0x462aeb;
      piStack_c14 = (int *)thunk_FUN_006e5750();
      piStack_c18 = (int *)0x462af7;
      FUN_00631910();
      pcStack_c28 = "character/swordman/effect/animation/vaneslash/smash.ani";
      iStack_c2c = 0x462b0d;
      FUN_004054a0();
      pcStack_c28 = (char *)0x462b20;
      (**(code **)(*local_468 + 0x78))();
      pfStack_c00 = (function<void___cdecl(void)> *)local_468[0x7d];
      piStack_c04 = (int *)0x4e36;
      puStack_c08 = (undefined1 *)0x42a00000;
      pfStack_c0c = (function<void___cdecl(void)> *)0x0;
      piStack_c10 = (int *)0x42dc0000;
      piStack_c14 = local_468;
      piStack_c18 = (int *)0x462b64;
      iVar4 = FUN_0042f340();
      *(int *)(iVar4 + 0x68) = local_468[99];
      local_468[99] = 0;
      piStack_c18 = (int *)0x7456f0;
      pcStack_c1c = (char *)0x462b9b;
      FUN_004054a0();
      piStack_c18 = (int *)0x462ba0;
      FUN_004c3500();
      piStack_c18 = (int *)0x745718;
      pcStack_c1c = (char *)0x462bb8;
      FUN_004054a0();
      piStack_c18 = (int *)0x462bbd;
      FUN_004c3500();
    }
    else {
      pfStack_c00 = (function<void___cdecl(void)> *)0x462bcd;
      ExceptionList = &local_10;
      FUN_00635730();
      pfStack_c00 = (function<void___cdecl(void)> *)0x462be3;
      (**(code **)(*local_468 + 0x134))();
    }
    break;
  case 0xaa:
    if (in_ECX[0x6a] == 0) {
      ExceptionList = &local_10;
      in_ECX[0x6a] = 1;
      pfStack_c00 = (function<void___cdecl(void)> *)0x43;
      piStack_c04 = (int *)0x15;
      puStack_c08 = (undefined1 *)0x46347d;
      (**(code **)(*in_ECX + 0x138))();
      local_4b4 = 0;
      while( true ) {
        pfStack_c00 = (function<void___cdecl(void)> *)local_468[0x245];
        piStack_c04 = (int *)local_468[0x244];
        puStack_c08 = (undefined1 *)0x0;
        pfStack_c0c = (function<void___cdecl(void)> *)0x4634d3;
        game_get_flag_object_01a70();
        puStack_c08 = (undefined1 *)0x4634da;
        FUN_005e9570();
        pfStack_c00 = (function<void___cdecl(void)> *)0x4634e4;
        uVar7 = FUN_0040d6a0();
        if ((uVar7 <= local_4b4) || (local_4b4 == 5)) break;
        pfStack_c00 = (function<void___cdecl(void)> *)local_4b4;
        piStack_c04 = (int *)local_468[0x245];
        puStack_c08 = (undefined1 *)local_468[0x244];
        pfStack_c0c = (function<void___cdecl(void)> *)0x0;
        piStack_c10 = (int *)0x46352b;
        game_get_flag_object_01a70();
        pfStack_c0c = (function<void___cdecl(void)> *)0x463532;
        FUN_005e9570();
        piStack_c04 = (int *)0x46353c;
        iVar4 = FUN_0040d680();
        local_468[0x6e] = local_468[0x6e] + *(int *)(iVar4 + 0x44);
        local_4b4 = local_4b4 + 1;
      }
      pfStack_c00 = (function<void___cdecl(void)> *)0x0;
      piStack_c04 = (int *)0x51;
      puStack_c08 = (undefined1 *)0x46356b;
      iVar4 = FUN_0047bcc0();
      local_468[0x8c] = ((iVar4 * 1000) / local_468[0x6e]) * 1000;
      pfStack_c00 = (function<void___cdecl(void)> *)0x1;
      piStack_c04 = (int *)0x51;
      puStack_c08 = (undefined1 *)0x4635b6;
      iVar4 = FUN_0047bcc0();
      local_468[0x8e] = (iVar4 * 4000) / local_468[0x6e];
      local_468[0x91] = (local_468[0x8e] * -2000) / local_468[0x6e];
      local_468[0x8e] = local_468[0x8e] * 1000;
      piStack_c18 = (int *)0x745830;
      pcStack_c1c = (char *)0x463639;
      FUN_004054a0();
      piStack_c18 = (int *)0x463644;
      pfStack_c00 = (function<void___cdecl(void)> *)FUN_00630790();
      piStack_c04 = (int *)0x463667;
      local_858 = pfStack_c00;
      (**(code **)(*local_468 + 0xd8))();
      pcStack_c1c = "character/swordman/effect/animation/outragebreak/sword_ready_ldodge.ani";
      piStack_c20 = (int *)0x46367d;
      FUN_004054a0();
      pcStack_c1c = (char *)0x463688;
      piStack_c04 = (int *)FUN_00630790();
      puStack_c08 = (undefined1 *)0x4636ab;
      local_85c = piStack_c04;
      (**(code **)(*local_468 + 0xd8))();
      piStack_c20 = (int *)0x7458c0;
      pcStack_c24 = (char *)0x4636c1;
      FUN_004054a0();
      piStack_c20 = (int *)0x4636d4;
      local_860 = (**(code **)(*local_468 + 0x78))();
      *(undefined1 *)(local_860 + 0x26) = 1;
      pcStack_c38 = "character/swordman/effect/animation/outragebreak/sword_slash_ldodge.ani";
      pcStack_c3c = (char *)0x4636f9;
      FUN_004054a0();
      pcStack_c38 = (char *)0x46370c;
      iVar4 = (**(code **)(*local_468 + 0x78))();
      *(undefined1 *)(iVar4 + 0x26) = 1;
    }
    else {
      pfStack_c00 = (function<void___cdecl(void)> *)0x463734;
      ExceptionList = &local_10;
      (**(code **)(*in_ECX + 0x134))();
    }
    break;
  case 0xbe:
    if (in_ECX[0x6a] == 0) {
      pfStack_c00 = (function<void___cdecl(void)> *)0x31;
      piStack_c04 = (int *)0x15;
      puStack_c08 = (undefined1 *)0x45bf62;
      ExceptionList = &local_10;
      (**(code **)(*in_ECX + 0x138))();
      puStack_c08 = (undefined1 *)0x2d;
      pfStack_c0c = (function<void___cdecl(void)> *)0x3;
      piStack_c10 = (int *)0x45bf7c;
      (**(code **)(*local_468 + 0x13c))();
      piStack_c10 = (int *)0x0;
      piStack_c14 = (int *)0x0;
      piStack_c18 = (int *)0x48;
      pcStack_c1c = (char *)0x45bf8d;
      FUN_0047bd30();
      piStack_c14 = (int *)0x45bf92;
      piStack_c14 = (int *)thunk_FUN_006e5750();
      piStack_c18 = (int *)0x45bf9e;
      FUN_00631910();
      local_468[0x6a] = 1;
      piStack_c10 = (int *)0x2;
      piStack_c14 = (int *)0x48;
      piStack_c18 = (int *)0x45bfbd;
      iVar4 = FUN_0047bcc0();
      local_468[0x8c] = iVar4 * 1000;
      piStack_c10 = (int *)0x3;
      piStack_c14 = (int *)0x48;
      piStack_c18 = (int *)0x45bfde;
      iVar4 = FUN_0047bcc0();
      local_468[0x8f] = iVar4;
      if (((char)local_468[0x37b] != '\0') || (*(char *)((int)local_468 + 0xdeb) != '\0')) {
        piStack_c10 = (int *)0x45c017;
        iVar4 = FUN_00470840();
        if (iVar4 == 1) {
          local_468[0x7e] = 1;
        }
        piStack_c10 = (int *)0x45c037;
        iVar4 = FUN_00470840();
        if (iVar4 == -1) {
          local_468[0x7e] = -1;
        }
        piStack_c10 = (int *)0x4;
        piStack_c14 = (int *)0x48;
        piStack_c18 = (int *)0x45c05b;
        iVar4 = FUN_0047bcc0();
        local_468[0x8d] = iVar4 * 1000;
        piStack_c10 = (int *)0x5;
        piStack_c14 = (int *)0x48;
        piStack_c18 = (int *)0x45c07c;
        iVar4 = FUN_0047bcc0();
        local_468[0x90] = iVar4;
      }
      piStack_c10 = (int *)0x4;
      piStack_c14 = (int *)(float)local_468[0x8b];
      piStack_c18 = (int *)(float)local_468[0x8a];
      pcStack_c1c = (char *)(float)local_468[0x89];
      local_9dc = (undefined1 *)&uStack_c34;
      pcStack_c38 = "character/swordman/effect/animation/rapidmoveslash/dust.ani";
      pcStack_c3c = (char *)0x45c0db;
      FUN_004054a0();
      local_8 = 0;
      pcStack_c38 = (char *)0x45c0ed;
      pcStack_c38 = (char *)FUN_00516d20();
      local_8 = 0xffffffff;
      pcStack_c3c = (char *)0x45c0fa;
      local_888 = FUN_00516a90();
      *(int *)(local_888 + 0x4c) = local_468[0x7d];
      pcStack_c28 = "character/swordman/animation/rapidmoveslashmove1.ani";
      iStack_c2c = 0x45c12d;
      FUN_004054a0();
      pcStack_c28 = (char *)0x45c140;
      local_88c = (**(code **)(*local_468 + 0x78))();
      pcStack_c28 = (char *)0x45c165;
      local_470 = local_88c;
      iVar4 = (**(code **)(*local_468 + 0x58))();
      pcStack_c28 = (char *)(iVar4 + 0x34);
      iStack_c2c = 0x45c177;
      FUN_004275e0();
      pcStack_c28 = (char *)0x0;
      iStack_c2c = 0x45c187;
      iVar4 = FUN_0040d680();
      *(undefined1 *)(iVar4 + 0x3e) = 1;
      pcStack_c28 = (char *)0x0;
      iStack_c2c = 0x45c19b;
      iVar4 = FUN_0040d680();
      *(undefined1 *)(iVar4 + 0x3a) = 0;
      pcStack_c28 = (char *)0x1;
      iStack_c2c = 0x45c1af;
      iVar4 = FUN_0040d680();
      *(undefined1 *)(iVar4 + 0x3e) = 1;
      pcStack_c28 = (char *)0x1;
      iStack_c2c = 0x45c1c3;
      iVar4 = FUN_0040d680();
      *(undefined1 *)(iVar4 + 0x3a) = 0;
      *(undefined4 *)(local_470 + 0x114) = 0xffffff9c;
      *(undefined1 *)(local_470 + 0x26) = 1;
      pcStack_c28 = (char *)0x2;
      iStack_c2c = 0x45c1f4;
      FUN_0044e460();
      pcStack_c28 = (char *)0x0;
      iStack_c2c = 0x45c207;
      puVar6 = (undefined4 *)game_get_flag_object_01a70();
      *puVar6 = 0;
      pcStack_c28 = (char *)0x0;
      iStack_c2c = 0x45c222;
      (**(code **)(*local_468 + 0x58))();
      iStack_c2c = 0x45c229;
      iVar4 = FUN_0062fc10();
      pcStack_c28 = (char *)0x1;
      iStack_c2c = 0x45c240;
      (**(code **)(*local_468 + 0x58))();
      iStack_c2c = 0x45c247;
      iVar2 = FUN_0062fc10();
      iVar4 = *(int *)(iVar4 + 0x44);
      iVar2 = *(int *)(iVar2 + 0x44);
      pcStack_c28 = (char *)0x1;
      iStack_c2c = 0x45c260;
      piVar3 = (int *)game_get_flag_object_01a70();
      *piVar3 = iVar4 + iVar2;
      pcStack_c28 = (char *)0x2;
      iStack_c2c = 0x45c275;
      FUN_0044e460();
      pcStack_c28 = (char *)0x0;
      iStack_c2c = 0x45c288;
      puVar6 = (undefined4 *)game_get_flag_object_01a70();
      *puVar6 = 0x3fc00000;
      pcStack_c28 = (char *)0x1;
      iStack_c2c = 0x45c2a7;
      puVar6 = (undefined4 *)game_get_flag_object_01a70();
      *puVar6 = 0x3fc00000;
      pcStack_c40 = "character/swordman/effect/animation/rapidmoveslash/move1.ani";
      uStack_c44 = 0x45c2c8;
      FUN_004054a0();
      pcStack_c40 = (char *)0x45c2db;
      local_890 = (**(code **)(*local_468 + 0x78))();
      *(undefined1 *)(local_890 + 0xe0) = 1;
      *(undefined1 *)(local_890 + 0x80) = 1;
      pcStack_c58 = "character/swordman/effect/animation/rapidmoveslash/move2.ani";
      uStack_c5c = 0x45c31c;
      local_470 = local_890;
      FUN_004054a0();
      pcStack_c58 = (char *)0x45c32f;
      local_894 = (**(code **)(*local_468 + 0x78))();
      *(undefined1 *)(local_894 + 0xe0) = 1;
      *(undefined1 *)(local_894 + 0x80) = 1;
      pcStack_c70 = "character/swordman/effect/animation/rapidmoveslash/slash1.ani";
      uStack_c74 = 0x45c370;
      local_470 = local_894;
      FUN_004054a0();
      pcStack_c70 = (char *)0x45c383;
      local_898 = (**(code **)(*local_468 + 0x78))();
      *(undefined1 *)(local_898 + 0xe0) = 1;
      *(undefined1 *)(local_898 + 0x80) = 1;
      pfStack_c00 = (function<void___cdecl(void)> *)0x0;
      piStack_c04 = (int *)0x45c3c2;
      local_470 = local_898;
      iVar4 = FUN_00405270();
      if (*(int *)(iVar4 + 4) != 0) {
        pfStack_c00 = (function<void___cdecl(void)> *)0x0;
        piStack_c04 = (int *)0x45c3df;
        iVar4 = FUN_00405270();
        pfStack_c00 = *(function<void___cdecl(void)> **)(iVar4 + 4);
        piStack_c04 = (int *)0x45c3e8;
        game_loop_helper_e9240();
        piStack_c04 = (int *)0x45c3ef;
        iVar4 = game_loop_helper_cc840();
        if (*(int *)(iVar4 + 0x140) == 5) {
          piStack_c18 = (int *)0x743e88;
          pcStack_c1c = (char *)0x45c411;
          FUN_004054a0();
          piStack_c18 = (int *)0x45c424;
          local_89c = (**(code **)(*local_468 + 0x78))();
          *(undefined1 *)(local_89c + 0x80) = 1;
          *(undefined1 *)(local_89c + 0x26) = 1;
          pcStack_c30 = "character/swordman/effect/animation/rapidmoveslash/lightmove1-2.ani";
          uStack_c34 = 0x45c462;
          local_470 = local_89c;
          FUN_004054a0();
          pcStack_c30 = (char *)0x45c475;
          local_8a0 = (**(code **)(*local_468 + 0x78))();
          *(undefined1 *)(local_8a0 + 0x80) = 1;
          *(undefined1 *)(local_8a0 + 0x26) = 1;
          pcStack_c48 = "character/swordman/effect/animation/rapidmoveslash/lightmove1-3.ani";
          uStack_c4c = 0x45c4b3;
          local_470 = local_8a0;
          FUN_004054a0();
          pcStack_c48 = (char *)0x45c4c6;
          local_8a4 = (**(code **)(*local_468 + 0x78))();
          *(undefined1 *)(local_8a4 + 0x80) = 1;
          *(undefined1 *)(local_8a4 + 0x26) = 1;
          pcStack_c60 = "character/swordman/effect/animation/rapidmoveslash/lightmove1-4.ani";
          pcStack_c64 = (char *)0x45c504;
          local_470 = local_8a4;
          FUN_004054a0();
          pcStack_c60 = (char *)0x45c517;
          local_8a8 = (**(code **)(*local_468 + 0x78))();
          *(undefined1 *)(local_8a8 + 0x80) = 1;
          *(undefined1 *)(local_8a8 + 0x26) = 1;
          pcStack_c78 = "character/swordman/effect/animation/rapidmoveslash/lightmove1-5.ani";
          uStack_c7c = 0x45c555;
          local_470 = local_8a8;
          FUN_004054a0();
          pcStack_c78 = (char *)0x45c568;
          local_8ac = (**(code **)(*local_468 + 0x78))();
          *(undefined1 *)(local_8ac + 0x80) = 1;
          *(undefined1 *)(local_8ac + 0x26) = 1;
          local_470 = local_8ac;
          FUN_004054a0("character/swordman/effect/animation/rapidmoveslash/lightmove1-6.ani");
          iVar4 = (**(code **)(*local_468 + 0x78))();
          *(undefined1 *)(iVar4 + 0x80) = 1;
          *(undefined1 *)(iVar4 + 0x26) = 1;
        }
      }
    }
    else if (in_ECX[0x6a] == 2) {
      pfStack_c00 = (function<void___cdecl(void)> *)0x31;
      piStack_c04 = (int *)0x15;
      puStack_c08 = (undefined1 *)0x45c614;
      ExceptionList = &local_10;
      (**(code **)(*in_ECX + 0x138))();
      puStack_c08 = (undefined1 *)0x2d;
      pfStack_c0c = (function<void___cdecl(void)> *)0x3;
      piStack_c10 = (int *)0x45c62e;
      (**(code **)(*local_468 + 0x13c))();
      piStack_c10 = (int *)0x0;
      piStack_c14 = (int *)0x0;
      piStack_c18 = (int *)0x48;
      pcStack_c1c = (char *)0x45c63f;
      FUN_0047bd30();
      piStack_c14 = (int *)0x45c644;
      piStack_c14 = (int *)thunk_FUN_006e5750();
      piStack_c18 = (int *)0x45c650;
      FUN_00631910();
      local_468[0x6a] = 3;
      piStack_c10 = (int *)0x2;
      piStack_c14 = (int *)0x48;
      piStack_c18 = (int *)0x45c66f;
      iVar4 = FUN_0047bcc0();
      local_468[0x8c] = iVar4 * 1000;
      piStack_c10 = (int *)0x3;
      piStack_c14 = (int *)0x48;
      piStack_c18 = (int *)0x45c690;
      iVar4 = FUN_0047bcc0();
      local_468[0x8f] = iVar4;
      if (((char)local_468[0x37b] != '\0') || (*(char *)((int)local_468 + 0xdeb) != '\0')) {
        piStack_c10 = (int *)0x45c6c9;
        iVar4 = FUN_00470840();
        if (iVar4 == 1) {
          local_468[0x7e] = 1;
        }
        piStack_c10 = (int *)0x45c6e9;
        iVar4 = FUN_00470840();
        if (iVar4 == -1) {
          local_468[0x7e] = -1;
        }
        piStack_c10 = (int *)0x4;
        piStack_c14 = (int *)0x48;
        piStack_c18 = (int *)0x45c70d;
        iVar4 = FUN_0047bcc0();
        local_468[0x8d] = iVar4 * 1000;
        piStack_c10 = (int *)0x5;
        piStack_c14 = (int *)0x48;
        piStack_c18 = (int *)0x45c72e;
        iVar4 = FUN_0047bcc0();
        local_468[0x90] = iVar4;
      }
      piStack_c10 = (int *)0x4;
      piStack_c14 = (int *)(float)local_468[0x8b];
      piStack_c18 = (int *)(float)local_468[0x8a];
      pcStack_c1c = (char *)(float)local_468[0x89];
      pcStack_c38 = "character/swordman/effect/animation/rapidmoveslash/dust.ani";
      pcStack_c3c = (char *)0x45c78d;
      FUN_004054a0();
      local_8 = 1;
      pcStack_c38 = (char *)0x45c79f;
      pcStack_c38 = (char *)FUN_00516d20();
      local_8 = 0xffffffff;
      pcStack_c3c = (char *)0x45c7ac;
      local_8b4 = FUN_00516a90();
      *(int *)(local_8b4 + 0x4c) = local_468[0x7d];
      pcStack_c28 = "character/swordman/animation/rapidmoveslashmove1.ani";
      iStack_c2c = 0x45c7df;
      FUN_004054a0();
      pcStack_c28 = (char *)0x45c7f2;
      local_8b8 = (**(code **)(*local_468 + 0x78))();
      pcStack_c28 = (char *)0x45c817;
      local_474 = local_8b8;
      iVar4 = (**(code **)(*local_468 + 0x58))();
      pcStack_c28 = (char *)(iVar4 + 0x34);
      iStack_c2c = 0x45c829;
      FUN_004275e0();
      pcStack_c28 = (char *)0x0;
      iStack_c2c = 0x45c839;
      iVar4 = FUN_0040d680();
      *(undefined1 *)(iVar4 + 0x3e) = 1;
      pcStack_c28 = (char *)0x0;
      iStack_c2c = 0x45c84d;
      iVar4 = FUN_0040d680();
      *(undefined1 *)(iVar4 + 0x3a) = 0;
      pcStack_c28 = (char *)0x1;
      iStack_c2c = 0x45c861;
      iVar4 = FUN_0040d680();
      *(undefined1 *)(iVar4 + 0x3e) = 1;
      pcStack_c28 = (char *)0x1;
      iStack_c2c = 0x45c875;
      iVar4 = FUN_0040d680();
      *(undefined1 *)(iVar4 + 0x3a) = 0;
      *(undefined4 *)(local_474 + 0x114) = 0xffffff9c;
      *(undefined1 *)(local_474 + 0x26) = 1;
      pcStack_c28 = (char *)0x2;
      iStack_c2c = 0x45c8a6;
      FUN_0044e460();
      pcStack_c28 = (char *)0x0;
      iStack_c2c = 0x45c8b9;
      puVar6 = (undefined4 *)game_get_flag_object_01a70();
      *puVar6 = 0;
      pcStack_c28 = (char *)0x0;
      iStack_c2c = 0x45c8d4;
      (**(code **)(*local_468 + 0x58))();
      iStack_c2c = 0x45c8db;
      iVar4 = FUN_0062fc10();
      pcStack_c28 = (char *)0x1;
      iStack_c2c = 0x45c8f2;
      (**(code **)(*local_468 + 0x58))();
      iStack_c2c = 0x45c8f9;
      iVar2 = FUN_0062fc10();
      iVar4 = *(int *)(iVar4 + 0x44);
      iVar2 = *(int *)(iVar2 + 0x44);
      pcStack_c28 = (char *)0x1;
      iStack_c2c = 0x45c912;
      piVar3 = (int *)game_get_flag_object_01a70();
      *piVar3 = iVar4 + iVar2;
      pcStack_c28 = (char *)0x2;
      iStack_c2c = 0x45c927;
      FUN_0044e460();
      pcStack_c28 = (char *)0x0;
      iStack_c2c = 0x45c93a;
      puVar6 = (undefined4 *)game_get_flag_object_01a70();
      *puVar6 = 0x3fc00000;
      pcStack_c28 = (char *)0x1;
      iStack_c2c = 0x45c959;
      puVar6 = (undefined4 *)game_get_flag_object_01a70();
      *puVar6 = 0x3fc00000;
      pcStack_c40 = "character/swordman/effect/animation/rapidmoveslash/move1.ani";
      uStack_c44 = 0x45c97a;
      FUN_004054a0();
      pcStack_c40 = (char *)0x45c98d;
      local_8bc = (**(code **)(*local_468 + 0x78))();
      *(undefined1 *)(local_8bc + 0xe0) = 1;
      *(undefined1 *)(local_8bc + 0x80) = 1;
      pcStack_c58 = "character/swordman/effect/animation/rapidmoveslash/move2.ani";
      uStack_c5c = 0x45c9ce;
      local_474 = local_8bc;
      FUN_004054a0();
      pcStack_c58 = (char *)0x45c9e1;
      local_8c0 = (**(code **)(*local_468 + 0x78))();
      *(undefined1 *)(local_8c0 + 0xe0) = 1;
      *(undefined1 *)(local_8c0 + 0x80) = 1;
      pcStack_c70 = "character/swordman/effect/animation/rapidmoveslash/slash1.ani";
      uStack_c74 = 0x45ca22;
      local_474 = local_8c0;
      FUN_004054a0();
      pcStack_c70 = (char *)0x45ca35;
      local_8c4 = (**(code **)(*local_468 + 0x78))();
      *(undefined1 *)(local_8c4 + 0xe0) = 1;
      *(undefined1 *)(local_8c4 + 0x80) = 1;
      pfStack_c00 = (function<void___cdecl(void)> *)0x0;
      piStack_c04 = (int *)0x45ca74;
      local_474 = local_8c4;
      iVar4 = FUN_00405270();
      if (*(int *)(iVar4 + 4) != 0) {
        pfStack_c00 = (function<void___cdecl(void)> *)0x0;
        piStack_c04 = (int *)0x45ca91;
        iVar4 = FUN_00405270();
        pfStack_c00 = *(function<void___cdecl(void)> **)(iVar4 + 4);
        piStack_c04 = (int *)0x45ca9a;
        game_loop_helper_e9240();
        piStack_c04 = (int *)0x45caa1;
        iVar4 = game_loop_helper_cc840();
        if (*(int *)(iVar4 + 0x140) == 5) {
          piStack_c18 = (int *)0x744168;
          pcStack_c1c = (char *)0x45cac3;
          FUN_004054a0();
          piStack_c18 = (int *)0x45cad6;
          local_8c8 = (**(code **)(*local_468 + 0x78))();
          *(undefined1 *)(local_8c8 + 0x80) = 1;
          *(undefined1 *)(local_8c8 + 0x26) = 1;
          pcStack_c30 = "character/swordman/effect/animation/rapidmoveslash/lightmove1-2.ani";
          uStack_c34 = 0x45cb14;
          local_474 = local_8c8;
          FUN_004054a0();
          pcStack_c30 = (char *)0x45cb27;
          local_8cc = (**(code **)(*local_468 + 0x78))();
          *(undefined1 *)(local_8cc + 0x80) = 1;
          *(undefined1 *)(local_8cc + 0x26) = 1;
          pcStack_c48 = "character/swordman/effect/animation/rapidmoveslash/lightmove1-3.ani";
          uStack_c4c = 0x45cb65;
          local_474 = local_8cc;
          FUN_004054a0();
          pcStack_c48 = (char *)0x45cb78;
          local_8d0 = (**(code **)(*local_468 + 0x78))();
          *(undefined1 *)(local_8d0 + 0x80) = 1;
          *(undefined1 *)(local_8d0 + 0x26) = 1;
          pcStack_c60 = "character/swordman/effect/animation/rapidmoveslash/lightmove1-4.ani";
          pcStack_c64 = (char *)0x45cbb6;
          local_474 = local_8d0;
          FUN_004054a0();
          pcStack_c60 = (char *)0x45cbc9;
          local_8d4 = (**(code **)(*local_468 + 0x78))();
          *(undefined1 *)(local_8d4 + 0x80) = 1;
          *(undefined1 *)(local_8d4 + 0x26) = 1;
          pcStack_c78 = "character/swordman/effect/animation/rapidmoveslash/lightmove1-5.ani";
          uStack_c7c = 0x45cc07;
          local_474 = local_8d4;
          FUN_004054a0();
          pcStack_c78 = (char *)0x45cc1a;
          local_8d8 = (**(code **)(*local_468 + 0x78))();
          *(undefined1 *)(local_8d8 + 0x80) = 1;
          *(undefined1 *)(local_8d8 + 0x26) = 1;
          local_474 = local_8d8;
          FUN_004054a0("character/swordman/effect/animation/rapidmoveslash/lightmove1-6.ani");
          iVar4 = (**(code **)(*local_468 + 0x78))();
          *(undefined1 *)(iVar4 + 0x80) = 1;
          *(undefined1 *)(iVar4 + 0x26) = 1;
        }
      }
    }
    else if (in_ECX[0x6a] == 4) {
      pfStack_c00 = (function<void___cdecl(void)> *)0x31;
      piStack_c04 = (int *)0x15;
      puStack_c08 = (undefined1 *)0x45ccc6;
      ExceptionList = &local_10;
      (**(code **)(*in_ECX + 0x138))();
      puStack_c08 = (undefined1 *)0x2d;
      pfStack_c0c = (function<void___cdecl(void)> *)0x3;
      piStack_c10 = (int *)0x45cce0;
      (**(code **)(*local_468 + 0x13c))();
      piStack_c10 = (int *)0x0;
      piStack_c14 = (int *)0x0;
      piStack_c18 = (int *)0x48;
      pcStack_c1c = (char *)0x45ccf1;
      FUN_0047bd30();
      piStack_c14 = (int *)0x45ccf6;
      piStack_c14 = (int *)thunk_FUN_006e5750();
      piStack_c18 = (int *)0x45cd02;
      FUN_00631910();
      local_468[0x6a] = 5;
      piStack_c10 = (int *)0x2;
      piStack_c14 = (int *)0x48;
      piStack_c18 = (int *)0x45cd21;
      iVar4 = FUN_0047bcc0();
      local_468[0x8c] = iVar4 * 1000;
      piStack_c10 = (int *)0x3;
      piStack_c14 = (int *)0x48;
      piStack_c18 = (int *)0x45cd42;
      iVar4 = FUN_0047bcc0();
      local_468[0x8f] = iVar4;
      if (((char)local_468[0x37b] != '\0') || (*(char *)((int)local_468 + 0xdeb) != '\0')) {
        piStack_c10 = (int *)0x45cd7b;
        iVar4 = FUN_00470840();
        if (iVar4 == 1) {
          local_468[0x7e] = 1;
        }
        piStack_c10 = (int *)0x45cd9b;
        iVar4 = FUN_00470840();
        if (iVar4 == -1) {
          local_468[0x7e] = -1;
        }
        piStack_c10 = (int *)0x4;
        piStack_c14 = (int *)0x48;
        piStack_c18 = (int *)0x45cdbf;
        iVar4 = FUN_0047bcc0();
        local_468[0x8d] = iVar4 * 1000;
        piStack_c10 = (int *)0x5;
        piStack_c14 = (int *)0x48;
        piStack_c18 = (int *)0x45cde0;
        iVar4 = FUN_0047bcc0();
        local_468[0x90] = iVar4;
      }
      piStack_c10 = (int *)0x4;
      piStack_c14 = (int *)(float)local_468[0x8b];
      piStack_c18 = (int *)(float)local_468[0x8a];
      pcStack_c1c = (char *)(float)local_468[0x89];
      pcStack_c38 = "character/swordman/effect/animation/rapidmoveslash/dust.ani";
      pcStack_c3c = (char *)0x45ce3f;
      FUN_004054a0();
      local_8 = 2;
      pcStack_c38 = (char *)0x45ce51;
      pcStack_c38 = (char *)FUN_00516d20();
      local_8 = 0xffffffff;
      pcStack_c3c = (char *)0x45ce5e;
      local_8e0 = FUN_00516a90();
      *(int *)(local_8e0 + 0x4c) = local_468[0x7d];
      pcStack_c28 = "character/swordman/animation/rapidmoveslashmove1.ani";
      iStack_c2c = 0x45ce91;
      FUN_004054a0();
      pcStack_c28 = (char *)0x45cea4;
      local_8e4 = (**(code **)(*local_468 + 0x78))();
      pcStack_c28 = (char *)0x45cec9;
      local_478 = local_8e4;
      iVar4 = (**(code **)(*local_468 + 0x58))();
      pcStack_c28 = (char *)(iVar4 + 0x34);
      iStack_c2c = 0x45cedb;
      FUN_004275e0();
      pcStack_c28 = (char *)0x0;
      iStack_c2c = 0x45ceeb;
      iVar4 = FUN_0040d680();
      *(undefined1 *)(iVar4 + 0x3e) = 1;
      pcStack_c28 = (char *)0x0;
      iStack_c2c = 0x45ceff;
      iVar4 = FUN_0040d680();
      *(undefined1 *)(iVar4 + 0x3a) = 0;
      pcStack_c28 = (char *)0x1;
      iStack_c2c = 0x45cf13;
      iVar4 = FUN_0040d680();
      *(undefined1 *)(iVar4 + 0x3e) = 1;
      pcStack_c28 = (char *)0x1;
      iStack_c2c = 0x45cf27;
      iVar4 = FUN_0040d680();
      *(undefined1 *)(iVar4 + 0x3a) = 0;
      *(undefined4 *)(local_478 + 0x114) = 0xffffff9c;
      *(undefined1 *)(local_478 + 0x26) = 1;
      pcStack_c28 = (char *)0x2;
      iStack_c2c = 0x45cf58;
      FUN_0044e460();
      pcStack_c28 = (char *)0x0;
      iStack_c2c = 0x45cf6b;
      puVar6 = (undefined4 *)game_get_flag_object_01a70();
      *puVar6 = 0;
      pcStack_c28 = (char *)0x0;
      iStack_c2c = 0x45cf86;
      (**(code **)(*local_468 + 0x58))();
      iStack_c2c = 0x45cf8d;
      iVar4 = FUN_0062fc10();
      pcStack_c28 = (char *)0x1;
      iStack_c2c = 0x45cfa4;
      (**(code **)(*local_468 + 0x58))();
      iStack_c2c = 0x45cfab;
      iVar2 = FUN_0062fc10();
      iVar4 = *(int *)(iVar4 + 0x44);
      iVar2 = *(int *)(iVar2 + 0x44);
      pcStack_c28 = (char *)0x1;
      iStack_c2c = 0x45cfc4;
      piVar3 = (int *)game_get_flag_object_01a70();
      *piVar3 = iVar4 + iVar2;
      pcStack_c28 = (char *)0x2;
      iStack_c2c = 0x45cfd9;
      FUN_0044e460();
      pcStack_c28 = (char *)0x0;
      iStack_c2c = 0x45cfec;
      puVar6 = (undefined4 *)game_get_flag_object_01a70();
      *puVar6 = 0x3fc00000;
      pcStack_c28 = (char *)0x1;
      iStack_c2c = 0x45d00b;
      puVar6 = (undefined4 *)game_get_flag_object_01a70();
      *puVar6 = 0x3fc00000;
      pcStack_c40 = "character/swordman/effect/animation/rapidmoveslash/move1.ani";
      uStack_c44 = 0x45d02c;
      FUN_004054a0();
      pcStack_c40 = (char *)0x45d03f;
      local_8e8 = (**(code **)(*local_468 + 0x78))();
      *(undefined1 *)(local_8e8 + 0xe0) = 1;
      *(undefined1 *)(local_8e8 + 0x80) = 1;
      pcStack_c58 = "character/swordman/effect/animation/rapidmoveslash/move2.ani";
      uStack_c5c = 0x45d080;
      local_478 = local_8e8;
      FUN_004054a0();
      pcStack_c58 = (char *)0x45d093;
      local_8ec = (**(code **)(*local_468 + 0x78))();
      *(undefined1 *)(local_8ec + 0xe0) = 1;
      *(undefined1 *)(local_8ec + 0x80) = 1;
      pcStack_c70 = "character/swordman/effect/animation/rapidmoveslash/slash1.ani";
      uStack_c74 = 0x45d0d4;
      local_478 = local_8ec;
      FUN_004054a0();
      pcStack_c70 = (char *)0x45d0e7;
      local_8f0 = (**(code **)(*local_468 + 0x78))();
      *(undefined1 *)(local_8f0 + 0xe0) = 1;
      *(undefined1 *)(local_8f0 + 0x80) = 1;
      pfStack_c00 = (function<void___cdecl(void)> *)0x0;
      piStack_c04 = (int *)0x45d126;
      local_478 = local_8f0;
      iVar4 = FUN_00405270();
      if (*(int *)(iVar4 + 4) != 0) {
        pfStack_c00 = (function<void___cdecl(void)> *)0x0;
        piStack_c04 = (int *)0x45d143;
        iVar4 = FUN_00405270();
        pfStack_c00 = *(function<void___cdecl(void)> **)(iVar4 + 4);
        piStack_c04 = (int *)0x45d14c;
        game_loop_helper_e9240();
        piStack_c04 = (int *)0x45d153;
        iVar4 = game_loop_helper_cc840();
        if (*(int *)(iVar4 + 0x140) == 5) {
          piStack_c18 = (int *)0x744448;
          pcStack_c1c = (char *)0x45d175;
          FUN_004054a0();
          piStack_c18 = (int *)0x45d188;
          local_8f4 = (**(code **)(*local_468 + 0x78))();
          *(undefined1 *)(local_8f4 + 0x80) = 1;
          *(undefined1 *)(local_8f4 + 0x26) = 1;
          pcStack_c30 = "character/swordman/effect/animation/rapidmoveslash/lightmove1-2.ani";
          uStack_c34 = 0x45d1c6;
          local_478 = local_8f4;
          FUN_004054a0();
          pcStack_c30 = (char *)0x45d1d9;
          local_8f8 = (**(code **)(*local_468 + 0x78))();
          *(undefined1 *)(local_8f8 + 0x80) = 1;
          *(undefined1 *)(local_8f8 + 0x26) = 1;
          pcStack_c48 = "character/swordman/effect/animation/rapidmoveslash/lightmove1-3.ani";
          uStack_c4c = 0x45d217;
          local_478 = local_8f8;
          FUN_004054a0();
          pcStack_c48 = (char *)0x45d22a;
          local_8fc = (**(code **)(*local_468 + 0x78))();
          *(undefined1 *)(local_8fc + 0x80) = 1;
          *(undefined1 *)(local_8fc + 0x26) = 1;
          pcStack_c60 = "character/swordman/effect/animation/rapidmoveslash/lightmove1-4.ani";
          pcStack_c64 = (char *)0x45d268;
          local_478 = local_8fc;
          FUN_004054a0();
          pcStack_c60 = (char *)0x45d27b;
          local_900 = (**(code **)(*local_468 + 0x78))();
          *(undefined1 *)(local_900 + 0x80) = 1;
          *(undefined1 *)(local_900 + 0x26) = 1;
          pcStack_c78 = "character/swordman/effect/animation/rapidmoveslash/lightmove1-5.ani";
          uStack_c7c = 0x45d2b9;
          local_478 = local_900;
          FUN_004054a0();
          pcStack_c78 = (char *)0x45d2cc;
          local_904 = (**(code **)(*local_468 + 0x78))();
          *(undefined1 *)(local_904 + 0x80) = 1;
          *(undefined1 *)(local_904 + 0x26) = 1;
          local_478 = local_904;
          FUN_004054a0("character/swordman/effect/animation/rapidmoveslash/lightmove1-6.ani");
          iVar4 = (**(code **)(*local_468 + 0x78))();
          *(undefined1 *)(iVar4 + 0x80) = 1;
          *(undefined1 *)(iVar4 + 0x26) = 1;
        }
      }
    }
    else if (in_ECX[0x6a] == 6) {
      pfStack_c00 = (function<void___cdecl(void)> *)0x32;
      piStack_c04 = (int *)0x15;
      puStack_c08 = (undefined1 *)0x45d378;
      ExceptionList = &local_10;
      (**(code **)(*in_ECX + 0x138))();
      puStack_c08 = (undefined1 *)0x2e;
      pfStack_c0c = (function<void___cdecl(void)> *)0x3;
      piStack_c10 = (int *)0x45d392;
      (**(code **)(*local_468 + 0x13c))();
      piStack_c10 = (int *)0x0;
      piStack_c14 = (int *)0x1;
      piStack_c18 = (int *)0x48;
      pcStack_c1c = (char *)0x45d3a3;
      FUN_0047bd30();
      piStack_c14 = (int *)0x45d3a8;
      piStack_c14 = (int *)thunk_FUN_006e5750();
      piStack_c18 = (int *)0x45d3b4;
      FUN_00631910();
      local_468[0x6a] = 7;
      piStack_c10 = (int *)0x2;
      piStack_c14 = (int *)0x48;
      piStack_c18 = (int *)0x45d3d3;
      iVar4 = FUN_0047bcc0();
      local_468[0x8c] = iVar4 * 1000;
      piStack_c10 = (int *)0x3;
      piStack_c14 = (int *)0x48;
      piStack_c18 = (int *)0x45d3f4;
      iVar4 = FUN_0047bcc0();
      local_468[0x8f] = iVar4;
      if (((char)local_468[0x37b] != '\0') || (*(char *)((int)local_468 + 0xdeb) != '\0')) {
        piStack_c10 = (int *)0x45d42d;
        iVar4 = FUN_00470840();
        if (iVar4 == 1) {
          local_468[0x7e] = 1;
        }
        piStack_c10 = (int *)0x45d44d;
        iVar4 = FUN_00470840();
        if (iVar4 == -1) {
          local_468[0x7e] = -1;
        }
        piStack_c10 = (int *)0x4;
        piStack_c14 = (int *)0x48;
        piStack_c18 = (int *)0x45d471;
        iVar4 = FUN_0047bcc0();
        local_468[0x8d] = iVar4 * 1000;
        piStack_c10 = (int *)0x5;
        piStack_c14 = (int *)0x48;
        piStack_c18 = (int *)0x45d492;
        iVar4 = FUN_0047bcc0();
        local_468[0x90] = iVar4;
      }
      piStack_c10 = (int *)0x4;
      piStack_c14 = (int *)(float)local_468[0x8b];
      piStack_c18 = (int *)(float)local_468[0x8a];
      pcStack_c1c = (char *)(float)local_468[0x89];
      pcStack_c38 = "character/swordman/effect/animation/rapidmoveslash/dust.ani";
      pcStack_c3c = (char *)0x45d4f1;
      FUN_004054a0();
      local_8 = 3;
      pcStack_c38 = (char *)0x45d503;
      pcStack_c38 = (char *)FUN_00516d20();
      local_8 = 0xffffffff;
      pcStack_c3c = (char *)0x45d510;
      local_90c = FUN_00516a90();
      *(int *)(local_90c + 0x4c) = local_468[0x7d];
      pcStack_c28 = "character/swordman/animation/rapidmoveslashmove2.ani";
      iStack_c2c = 0x45d543;
      FUN_004054a0();
      pcStack_c28 = (char *)0x45d556;
      local_910 = (**(code **)(*local_468 + 0x78))();
      pcStack_c28 = (char *)0x45d57b;
      local_46c = local_910;
      iVar4 = (**(code **)(*local_468 + 0x58))();
      pcStack_c28 = (char *)(iVar4 + 0x34);
      iStack_c2c = 0x45d58d;
      FUN_004275e0();
      pcStack_c28 = (char *)0x0;
      iStack_c2c = 0x45d59d;
      iVar4 = FUN_0040d680();
      *(undefined1 *)(iVar4 + 0x3e) = 1;
      pcStack_c28 = (char *)0x0;
      iStack_c2c = 0x45d5b1;
      iVar4 = FUN_0040d680();
      *(undefined1 *)(iVar4 + 0x3a) = 0;
      pcStack_c28 = (char *)0x1;
      iStack_c2c = 0x45d5c5;
      iVar4 = FUN_0040d680();
      *(undefined1 *)(iVar4 + 0x3e) = 1;
      pcStack_c28 = (char *)0x1;
      iStack_c2c = 0x45d5d9;
      iVar4 = FUN_0040d680();
      *(undefined1 *)(iVar4 + 0x3a) = 0;
      *(undefined4 *)(local_46c + 0x114) = 0xffffff9c;
      *(undefined1 *)(local_46c + 0x26) = 1;
      pcStack_c28 = (char *)0x2;
      iStack_c2c = 0x45d60a;
      FUN_0044e460();
      pcStack_c28 = (char *)0x0;
      iStack_c2c = 0x45d61d;
      puVar6 = (undefined4 *)game_get_flag_object_01a70();
      *puVar6 = 0;
      pcStack_c28 = (char *)0x0;
      iStack_c2c = 0x45d638;
      (**(code **)(*local_468 + 0x58))();
      iStack_c2c = 0x45d63f;
      iVar4 = FUN_0062fc10();
      pcStack_c28 = (char *)0x1;
      iStack_c2c = 0x45d656;
      (**(code **)(*local_468 + 0x58))();
      iStack_c2c = 0x45d65d;
      iVar2 = FUN_0062fc10();
      iVar4 = *(int *)(iVar4 + 0x44);
      iVar2 = *(int *)(iVar2 + 0x44);
      pcStack_c28 = (char *)0x1;
      iStack_c2c = 0x45d676;
      piVar3 = (int *)game_get_flag_object_01a70();
      *piVar3 = iVar4 + iVar2;
      pcStack_c28 = (char *)0x2;
      iStack_c2c = 0x45d68b;
      FUN_0044e460();
      pcStack_c28 = (char *)0x0;
      iStack_c2c = 0x45d69e;
      puVar6 = (undefined4 *)game_get_flag_object_01a70();
      *puVar6 = 0x3fc00000;
      pcStack_c28 = (char *)0x1;
      iStack_c2c = 0x45d6bd;
      puVar6 = (undefined4 *)game_get_flag_object_01a70();
      *puVar6 = 0x3fc00000;
      pcStack_c40 = "character/swordman/effect/animation/rapidmoveslash/move1.ani";
      uStack_c44 = 0x45d6de;
      FUN_004054a0();
      pcStack_c40 = (char *)0x45d6f1;
      local_914 = (**(code **)(*local_468 + 0x78))();
      *(undefined1 *)(local_914 + 0xe0) = 1;
      *(undefined1 *)(local_914 + 0x80) = 1;
      pcStack_c58 = "character/swordman/effect/animation/rapidmoveslash/move2.ani";
      uStack_c5c = 0x45d732;
      local_46c = local_914;
      FUN_004054a0();
      pcStack_c58 = (char *)0x45d745;
      local_918 = (**(code **)(*local_468 + 0x78))();
      *(undefined1 *)(local_918 + 0xe0) = 1;
      *(undefined1 *)(local_918 + 0x80) = 1;
      pcStack_c70 = "character/swordman/effect/animation/rapidmoveslash/slash2.ani";
      uStack_c74 = 0x45d786;
      local_46c = local_918;
      FUN_004054a0();
      pcStack_c70 = (char *)0x45d799;
      local_91c = (**(code **)(*local_468 + 0x78))();
      *(undefined1 *)(local_91c + 0xe0) = 1;
      *(undefined1 *)(local_91c + 0x80) = 1;
      pfStack_c00 = (function<void___cdecl(void)> *)0x0;
      piStack_c04 = (int *)0x45d7d8;
      local_46c = local_91c;
      iVar4 = FUN_00405270();
      if (*(int *)(iVar4 + 4) != 0) {
        pfStack_c00 = (function<void___cdecl(void)> *)0x0;
        piStack_c04 = (int *)0x45d7f5;
        iVar4 = FUN_00405270();
        pfStack_c00 = *(function<void___cdecl(void)> **)(iVar4 + 4);
        piStack_c04 = (int *)0x45d7fe;
        game_loop_helper_e9240();
        piStack_c04 = (int *)0x45d805;
        iVar4 = game_loop_helper_cc840();
        if (*(int *)(iVar4 + 0x140) == 5) {
          piStack_c18 = (int *)0x744728;
          pcStack_c1c = (char *)0x45d827;
          FUN_004054a0();
          piStack_c18 = (int *)0x45d83a;
          local_920 = (**(code **)(*local_468 + 0x78))();
          *(undefined1 *)(local_920 + 0x80) = 1;
          *(undefined1 *)(local_920 + 0x26) = 1;
          pcStack_c30 = "character/swordman/effect/animation/rapidmoveslash/lightmove2-2.ani";
          uStack_c34 = 0x45d878;
          local_46c = local_920;
          FUN_004054a0();
          pcStack_c30 = (char *)0x45d88b;
          local_924 = (**(code **)(*local_468 + 0x78))();
          *(undefined1 *)(local_924 + 0x80) = 1;
          *(undefined1 *)(local_924 + 0x26) = 1;
          pcStack_c48 = "character/swordman/effect/animation/rapidmoveslash/lightmove2-3.ani";
          uStack_c4c = 0x45d8c9;
          local_46c = local_924;
          FUN_004054a0();
          pcStack_c48 = (char *)0x45d8dc;
          local_928 = (**(code **)(*local_468 + 0x78))();
          *(undefined1 *)(local_928 + 0x80) = 1;
          *(undefined1 *)(local_928 + 0x26) = 1;
          pcStack_c60 = "character/swordman/effect/animation/rapidmoveslash/lightmove2-4.ani";
          pcStack_c64 = (char *)0x45d91a;
          local_46c = local_928;
          FUN_004054a0();
          pcStack_c60 = (char *)0x45d92d;
          local_92c = (**(code **)(*local_468 + 0x78))();
          *(undefined1 *)(local_92c + 0x80) = 1;
          *(undefined1 *)(local_92c + 0x26) = 1;
          pcStack_c78 = "character/swordman/effect/animation/rapidmoveslash/lightmove2-5.ani";
          uStack_c7c = 0x45d96b;
          local_46c = local_92c;
          FUN_004054a0();
          pcStack_c78 = (char *)0x45d97e;
          local_930 = (**(code **)(*local_468 + 0x78))();
          *(undefined1 *)(local_930 + 0x80) = 1;
          *(undefined1 *)(local_930 + 0x26) = 1;
          local_94c = auStack_c8c;
          local_46c = local_930;
          FUN_004054a0("character/swordman/effect/animation/rapidmoveslash/lightmove2-6.ani");
          iVar4 = (**(code **)(*local_468 + 0x78))();
          *(undefined1 *)(iVar4 + 0x80) = 1;
          *(undefined1 *)(iVar4 + 0x26) = 1;
        }
      }
    }
    else {
      pfStack_c00 = (function<void___cdecl(void)> *)0x45da10;
      ExceptionList = &local_10;
      (**(code **)(*in_ECX + 0x134))();
    }
    break;
  case 0xd2:
    if (in_ECX[0x6a] == 0) {
      ExceptionList = &local_10;
      in_ECX[0x6a] = 1;
      pfStack_c00 = (function<void___cdecl(void)> *)0x1b;
      piStack_c04 = (int *)0x15;
      puStack_c08 = (undefined1 *)0x463777;
      (**(code **)(*in_ECX + 0x138))();
      puStack_c08 = (undefined1 *)0x19;
      pfStack_c0c = (function<void___cdecl(void)> *)0x3;
      piStack_c10 = (int *)0x463791;
      (**(code **)(*local_468 + 0x13c))();
      pfStack_c00 = (function<void___cdecl(void)> *)0x0;
      piStack_c04 = (int *)0x0;
      puStack_c08 = (undefined1 *)0x41;
      pfStack_c0c = (function<void___cdecl(void)> *)0x4637a2;
      FUN_0047bd30();
      piStack_c04 = (int *)0x4637a7;
      piStack_c04 = (int *)thunk_FUN_006e5750();
      puStack_c08 = (undefined1 *)0x4637b3;
      FUN_00631910();
      if ((*(char *)((int)local_468 + 0xdee) == '\0') && (*(char *)((int)local_468 + 0xded) == '\0')
         ) {
        pfStack_c00 = (function<void___cdecl(void)> *)0x3;
        piStack_c04 = (int *)0x96;
        puStack_c08 = (undefined1 *)0x2;
        pfStack_c0c = (function<void___cdecl(void)> *)0x463b35;
        FUN_0063c390();
        pfStack_c00 = (function<void___cdecl(void)> *)0x6;
        piStack_c04 = (int *)0x41;
        puStack_c08 = (undefined1 *)0x463b52;
        iVar4 = FUN_0047bcc0();
        pfStack_c00 = (function<void___cdecl(void)> *)((float)iVar4 / 100.0);
        piStack_c04 = (int *)0x3;
        puStack_c08 = (undefined1 *)0x1;
        pfStack_c0c = (function<void___cdecl(void)> *)0x463b6d;
        fVar9 = (float10)FUN_00641370();
        local_884 = (float)fVar9;
        local_574 = local_468 + 0x23a;
        pfStack_c00 = (function<void___cdecl(void)> *)0x463b93;
        local_4c8 = game_loop_helper_018d0();
        pfStack_c00 = (function<void___cdecl(void)> *)0x463ba4;
        local_878 = game_loop_helper_018b0();
        for (; local_4c8 != local_878; local_4c8 = local_4c8 + 4) {
          local_87c = local_4c8;
          pfStack_c00 = (function<void___cdecl(void)> *)local_468[0x245];
          piStack_c04 = (int *)local_468[0x244];
          puStack_c08 = (undefined1 *)0x463c00;
          local_578 = FUN_005e9570();
          local_578 = local_578 + 0x34;
          pfStack_c00 = (function<void___cdecl(void)> *)0x463c14;
          local_4cc = game_loop_helper_018d0();
          pfStack_c00 = (function<void___cdecl(void)> *)0x463c25;
          local_880 = game_loop_helper_018b0();
          for (; local_4cc != local_880; local_4cc = local_4cc + 0x60) {
            local_57c = local_4cc;
            *(int *)(local_4cc + 0x44) = (int)((float)*(int *)(local_4cc + 0x44) / local_884);
          }
        }
        pfStack_c00 = (function<void___cdecl(void)> *)0x0;
        piStack_c04 = (int *)local_468[0x245];
        puStack_c08 = (undefined1 *)local_468[0x244];
        pfStack_c0c = (function<void___cdecl(void)> *)0x0;
        piStack_c10 = (int *)0x463cac;
        game_get_flag_object_01a70();
        pfStack_c0c = (function<void___cdecl(void)> *)0x463cb3;
        FUN_005e9570();
        piStack_c04 = (int *)0x463cbd;
        iVar4 = FUN_0040d680();
        pfStack_c00 = *(function<void___cdecl(void)> **)(iVar4 + 0x44);
        piStack_c04 = (int *)0x463cd7;
        (**(code **)(*local_468 + 0x90))();
        local_4bc = 0;
        while( true ) {
          pfStack_c00 = (function<void___cdecl(void)> *)local_468[0x245];
          piStack_c04 = (int *)local_468[0x244];
          puStack_c08 = (undefined1 *)0x0;
          pfStack_c0c = (function<void___cdecl(void)> *)0x463d2d;
          game_get_flag_object_01a70();
          puStack_c08 = (undefined1 *)0x463d34;
          FUN_005e9570();
          pfStack_c00 = (function<void___cdecl(void)> *)0x463d3e;
          uVar7 = FUN_0040d6a0();
          if ((uVar7 <= local_4bc) || (local_4bc == 4)) break;
          pfStack_c00 = (function<void___cdecl(void)> *)local_4bc;
          piStack_c04 = (int *)local_468[0x245];
          puStack_c08 = (undefined1 *)local_468[0x244];
          pfStack_c0c = (function<void___cdecl(void)> *)0x0;
          piStack_c10 = (int *)0x463d85;
          game_get_flag_object_01a70();
          pfStack_c0c = (function<void___cdecl(void)> *)0x463d8c;
          FUN_005e9570();
          piStack_c04 = (int *)0x463d96;
          iVar4 = FUN_0040d680();
          local_468[0x6e] = local_468[0x6e] + *(int *)(iVar4 + 0x44);
          local_4bc = local_4bc + 1;
        }
        pfStack_c00 = (function<void___cdecl(void)> *)0x2;
        piStack_c04 = (int *)0x41;
        puStack_c08 = (undefined1 *)0x463dc5;
        iVar4 = FUN_0047bcc0();
        local_468[0x8c] = ((iVar4 * 1000) / local_468[0x6e]) * 1000;
        pfStack_c00 = (function<void___cdecl(void)> *)0x4;
        piStack_c04 = (int *)0x41;
        puStack_c08 = (undefined1 *)0x463df9;
        iVar4 = FUN_0047bcc0();
        local_468[0x8e] = (iVar4 * 4000) / local_468[0x6e];
        local_468[0x91] = (local_468[0x8e] * -2000) / local_468[0x6e];
        local_468[0x8e] = local_468[0x8e] * 1000;
      }
      else {
        pfStack_c00 = (function<void___cdecl(void)> *)0x3;
        piStack_c04 = (int *)0x64;
        puStack_c08 = (undefined1 *)0x3;
        pfStack_c0c = (function<void___cdecl(void)> *)0x4637eb;
        FUN_0063c390();
        pfStack_c00 = (function<void___cdecl(void)> *)0x7;
        piStack_c04 = (int *)0x41;
        puStack_c08 = (undefined1 *)0x463808;
        iVar4 = FUN_0047bcc0();
        pfStack_c00 = (function<void___cdecl(void)> *)((float)iVar4 / 100.0);
        piStack_c04 = (int *)0x3;
        puStack_c08 = (undefined1 *)0x1;
        pfStack_c0c = (function<void___cdecl(void)> *)0x463823;
        fVar9 = (float10)FUN_00641370();
        local_874 = (float)fVar9;
        local_568 = local_468 + 0x23a;
        pfStack_c00 = (function<void___cdecl(void)> *)0x463848;
        local_4c0 = game_loop_helper_018d0();
        pfStack_c00 = (function<void___cdecl(void)> *)0x463859;
        local_868 = game_loop_helper_018b0();
        for (; local_4c0 != local_868; local_4c0 = local_4c0 + 4) {
          local_86c = local_4c0;
          pfStack_c00 = (function<void___cdecl(void)> *)local_468[0x245];
          piStack_c04 = (int *)local_468[0x244];
          puStack_c08 = (undefined1 *)0x4638b5;
          local_56c = FUN_005e9570();
          local_56c = local_56c + 0x34;
          pfStack_c00 = (function<void___cdecl(void)> *)0x4638c9;
          local_4c4 = game_loop_helper_018d0();
          pfStack_c00 = (function<void___cdecl(void)> *)0x4638da;
          local_870 = game_loop_helper_018b0();
          for (; local_4c4 != local_870; local_4c4 = local_4c4 + 0x60) {
            local_570 = local_4c4;
            *(int *)(local_4c4 + 0x44) = (int)((float)*(int *)(local_4c4 + 0x44) / local_874);
          }
        }
        pfStack_c00 = (function<void___cdecl(void)> *)0x0;
        piStack_c04 = (int *)local_468[0x245];
        puStack_c08 = (undefined1 *)local_468[0x244];
        pfStack_c0c = (function<void___cdecl(void)> *)0x0;
        piStack_c10 = (int *)0x463961;
        game_get_flag_object_01a70();
        pfStack_c0c = (function<void___cdecl(void)> *)0x463968;
        FUN_005e9570();
        piStack_c04 = (int *)0x463972;
        iVar4 = FUN_0040d680();
        pfStack_c00 = *(function<void___cdecl(void)> **)(iVar4 + 0x44);
        piStack_c04 = (int *)0x46398c;
        (**(code **)(*local_468 + 0x90))();
        local_4b8 = 0;
        while( true ) {
          pfStack_c00 = (function<void___cdecl(void)> *)local_468[0x245];
          piStack_c04 = (int *)local_468[0x244];
          puStack_c08 = (undefined1 *)0x0;
          pfStack_c0c = (function<void___cdecl(void)> *)0x4639e2;
          game_get_flag_object_01a70();
          puStack_c08 = (undefined1 *)0x4639e9;
          FUN_005e9570();
          pfStack_c00 = (function<void___cdecl(void)> *)0x4639f3;
          uVar7 = FUN_0040d6a0();
          if ((uVar7 <= local_4b8) || (local_4b8 == 4)) break;
          pfStack_c00 = (function<void___cdecl(void)> *)local_4b8;
          piStack_c04 = (int *)local_468[0x245];
          puStack_c08 = (undefined1 *)local_468[0x244];
          pfStack_c0c = (function<void___cdecl(void)> *)0x0;
          piStack_c10 = (int *)0x463a3a;
          game_get_flag_object_01a70();
          pfStack_c0c = (function<void___cdecl(void)> *)0x463a41;
          FUN_005e9570();
          piStack_c04 = (int *)0x463a4b;
          iVar4 = FUN_0040d680();
          local_468[0x6e] = local_468[0x6e] + *(int *)(iVar4 + 0x44);
          local_4b8 = local_4b8 + 1;
        }
        pfStack_c00 = (function<void___cdecl(void)> *)0x3;
        piStack_c04 = (int *)0x41;
        puStack_c08 = (undefined1 *)0x463a7a;
        iVar4 = FUN_0047bcc0();
        local_468[0x8c] = ((iVar4 * 1000) / local_468[0x6e]) * 1000;
        pfStack_c00 = (function<void___cdecl(void)> *)0x5;
        piStack_c04 = (int *)0x41;
        puStack_c08 = (undefined1 *)0x463aae;
        iVar4 = FUN_0047bcc0();
        local_468[0x8e] = (iVar4 * 4000) / local_468[0x6e];
        local_468[0x91] = (local_468[0x8e] * -2000) / local_468[0x6e];
        local_468[0x8e] = local_468[0x8e] * 1000;
      }
    }
    else {
      pfStack_c00 = (function<void___cdecl(void)> *)0x463e7f;
      ExceptionList = &local_10;
      (**(code **)(*in_ECX + 0x108))();
      pfStack_c00 = (function<void___cdecl(void)> *)0x463e95;
      (**(code **)(*local_468 + 0x134))();
    }
    break;
  case 0xdc:
    if (in_ECX[0x249] != 0) {
      return;
    }
    local_950 = (undefined1 *)&piStack_c14;
    piStack_c18 = (int *)0x7448d4;
    pcStack_c1c = (char *)0x45db1e;
    ExceptionList = &local_10;
    FUN_004054a0();
    piStack_c18 = (int *)0x45db29;
    FUN_00630660();
    local_954 = (undefined1 *)&piStack_c14;
    piStack_c18 = (int *)0x744908;
    pcStack_c1c = (char *)0x45db3f;
    FUN_004054a0();
    piStack_c18 = local_468;
    pcStack_c1c = (char *)0x45db4b;
    FUN_004aad60();
    local_958 = (undefined1 *)&piStack_c14;
    piStack_c18 = (int *)0x74493c;
    pcStack_c1c = (char *)0x45db63;
    FUN_004054a0();
    piStack_c18 = (int *)0x45db68;
    FUN_004c3570();
    pfStack_c00 = (function<void___cdecl(void)> *)0x45db70;
    piVar3 = (int *)game_get_player_or_session_blob();
    if (local_468 == piVar3) {
      pfStack_c00 = (function<void___cdecl(void)> *)0x0;
      piStack_c04 = (int *)local_468[0x26c];
      puStack_c08 = (undefined1 *)local_468[0x2ae];
      pfStack_c0c = (function<void___cdecl(void)> *)0x45db9d;
      game_loop_helper_e9240();
      pfStack_c0c = (function<void___cdecl(void)> *)0x45dba4;
      FUN_005d9da0();
      piStack_c04 = (int *)0x45dbb0;
      iVar4 = FUN_0044e440();
      pfStack_c00 = *(function<void___cdecl(void)> **)(iVar4 + 0x18);
      local_95c = (undefined1 *)&piStack_c18;
      pcStack_c1c = (char *)0x0;
      piStack_c20 = (int *)local_468[0x26c];
      pcStack_c24 = (char *)local_468[0x2ae];
      pcStack_c28 = (char *)0x45dbe0;
      game_loop_helper_e9240();
      pcStack_c28 = (char *)0x45dbe7;
      FUN_005d9da0();
      piStack_c20 = (int *)0x45dbf3;
      pcStack_c1c = (char *)FUN_0044e440();
      piStack_c20 = (int *)0x45dbfb;
      FUN_00405520();
      pcStack_c1c = (char *)0x45dc00;
      FUN_0067aea0();
      pfStack_c00 = (function<void___cdecl(void)> *)0x0;
      piStack_c04 = (int *)local_468[0x26c];
      puStack_c08 = (undefined1 *)local_468[0x2ae];
      pfStack_c0c = (function<void___cdecl(void)> *)0x45dc24;
      game_loop_helper_e9240();
      pfStack_c0c = (function<void___cdecl(void)> *)0x45dc2b;
      FUN_005d9da0();
      piStack_c04 = (int *)0x45dc37;
      iVar4 = FUN_0044e440();
      pfStack_c00 = *(function<void___cdecl(void)> **)(iVar4 + 0x18);
      local_960 = (undefined1 *)&piStack_c18;
      pcStack_c1c = (char *)0x0;
      piStack_c20 = (int *)local_468[0x26c];
      pcStack_c24 = (char *)local_468[0x2ae];
      pcStack_c28 = (char *)0x45dc67;
      game_loop_helper_e9240();
      pcStack_c28 = (char *)0x45dc6e;
      FUN_005d9da0();
      piStack_c20 = (int *)0x45dc7a;
      pcStack_c1c = (char *)FUN_0044e440();
      piStack_c20 = (int *)0x45dc82;
      FUN_00405520();
      pcStack_c1c = (char *)0x45dc87;
      FUN_0067aa80();
    }
    pfStack_c00 = (function<void___cdecl(void)> *)(local_468 + 0x26c);
    piStack_c04 = (int *)0x45dca8;
    iVar4 = FUN_0048a8f0();
    *(undefined4 *)(iVar4 + 0x70) = 0;
    pfStack_c00 = (function<void___cdecl(void)> *)(local_468 + 0x26c);
    piStack_c04 = (int *)0x45dccc;
    iVar4 = FUN_0048a8f0();
    *(int *)(iVar4 + 0x78) = local_468[0x26c];
    if (local_468[0x26c] == 3) {
      pfStack_c00 = (function<void___cdecl(void)> *)0x1;
      piStack_c04 = (int *)local_468[0x26c];
      puStack_c08 = (undefined1 *)0x45dd04;
      fVar9 = (float10)FUN_0047bd30();
      local_938 = (float)fVar9;
      fVar10 = local_938 * 1000.0;
      pfStack_c00 = (function<void___cdecl(void)> *)(local_468 + 0x26c);
      piStack_c04 = (int *)0x45dd3b;
      iVar4 = FUN_0048a8f0();
      *(int *)(iVar4 + 0x74) = (int)fVar10;
      goto LAB_0045f3fa;
    }
    if (local_468[0x26c] == 0x26) {
      pfStack_c00 = (function<void___cdecl(void)> *)(local_468 + 0x26c);
      piStack_c04 = (int *)0x45dd74;
      FUN_0048a8f0();
      pfStack_c00 = (function<void___cdecl(void)> *)0x45dd7e;
      cVar1 = FUN_00489dd0();
      if (cVar1 == '\0') {
LAB_0045ddba:
        pfStack_c00 = (function<void___cdecl(void)> *)&DAT_00744958;
        piStack_c04 = (int *)0x45ddca;
        FUN_004054a0();
        local_8 = 4;
        local_964 = (undefined1 *)&piStack_c14;
        piStack_c18 = (int *)&DAT_0074494c;
        pcStack_c1c = (char *)0x45dde6;
        FUN_004054a0();
        piStack_c18 = (int *)0x45ddf1;
        local_93c = (int *)FUN_0063bda0();
        pfStack_c00 = local_3bc;
        piStack_c04 = local_468 + 0x26c;
        puStack_c08 = (undefined1 *)0x45de28;
        local_600 = local_93c;
        FUN_0048a8f0();
        piStack_c04 = (int *)0x45de32;
        piVar3 = (int *)FUN_0048ae20();
        *local_600 = *local_600 - *piVar3;
        local_8 = 0xffffffff;
        pfStack_c00 = (function<void___cdecl(void)> *)0x45de56;
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_3bc);
        pfStack_c00 = (function<void___cdecl(void)> *)&DAT_00744970;
        piStack_c04 = (int *)0x45de67;
        FUN_004054a0();
        local_8 = 5;
        local_968 = (undefined1 *)&piStack_c14;
        piStack_c18 = (int *)&DAT_00744964;
        pcStack_c1c = (char *)0x45de83;
        FUN_004054a0();
        piStack_c18 = (int *)0x45de8e;
        local_638 = (int *)FUN_0063b7b0();
        pfStack_c00 = local_3a4;
        piStack_c04 = local_468 + 0x26c;
        puStack_c08 = (undefined1 *)0x45dec4;
        local_5fc = local_638;
        FUN_0048a8f0();
        piStack_c04 = (int *)0x45ded0;
        piVar3 = (int *)FUN_0048ae20();
        *local_5fc = *local_5fc - *piVar3;
        local_8 = 0xffffffff;
        pfStack_c00 = (function<void___cdecl(void)> *)0x45def4;
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_3a4);
        pfStack_c00 = (function<void___cdecl(void)> *)0x45df00;
        FUN_00657c10();
        pfStack_c00 = (function<void___cdecl(void)> *)(local_468 + 0x26c);
        piStack_c04 = (int *)0x45df1e;
        FUN_0048a8f0();
        pfStack_c00 = (function<void___cdecl(void)> *)0x45df28;
        FUN_00427bb0();
        pfStack_c00 = (function<void___cdecl(void)> *)(local_468 + 0x26c);
        piStack_c04 = (int *)0x45df46;
        FUN_0048a8f0();
        pfStack_c00 = (function<void___cdecl(void)> *)0x45df52;
        FUN_00427bb0();
      }
      else {
        pfStack_c00 = (function<void___cdecl(void)> *)(local_468 + 0x26c);
        piStack_c04 = (int *)0x45dda3;
        FUN_0048a8f0();
        pfStack_c00 = (function<void___cdecl(void)> *)0x45ddaf;
        cVar1 = FUN_00489dd0();
        if (cVar1 == '\0') goto LAB_0045ddba;
      }
      pfStack_c00 = (function<void___cdecl(void)> *)0x0;
      piStack_c04 = (int *)local_468[0x26c];
      puStack_c08 = (undefined1 *)0x45df6d;
      fVar9 = (float10)FUN_0047bd30();
      local_63c = (float)fVar9;
      fVar10 = local_63c * 1000.0;
      pfStack_c00 = (function<void___cdecl(void)> *)(local_468 + 0x26c);
      piStack_c04 = (int *)0x45dfa5;
      iVar4 = FUN_0048a8f0();
      *(int *)(iVar4 + 0x74) = (int)fVar10;
      pfStack_c00 = (function<void___cdecl(void)> *)&DAT_0074497c;
      piStack_c04 = (int *)0x45dfb8;
      FUN_004054a0();
      local_8 = 6;
      pfStack_c00 = (function<void___cdecl(void)> *)0x2;
      piStack_c04 = (int *)local_468[0x26c];
      puStack_c08 = (undefined1 *)0x45dfd9;
      FUN_0047bd30();
      pfStack_c00 = (function<void___cdecl(void)> *)0x45dfde;
      uVar5 = thunk_FUN_006e5750();
      pfStack_c00 = local_38c;
      piStack_c04 = local_468 + 0x26c;
      puStack_c08 = (undefined1 *)0x45e004;
      FUN_0048a8f0();
      piStack_c04 = (int *)0x45e00e;
      puVar6 = (undefined4 *)FUN_0048ae20();
      *puVar6 = uVar5;
      local_8 = 0xffffffff;
      pfStack_c00 = (function<void___cdecl(void)> *)0x45e022;
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_38c);
      pfStack_c00 = (function<void___cdecl(void)> *)&DAT_00744988;
      piStack_c04 = (int *)0x45e033;
      FUN_004054a0();
      local_8 = 7;
      pfStack_c00 = (function<void___cdecl(void)> *)0x3;
      piStack_c04 = (int *)local_468[0x26c];
      puStack_c08 = (undefined1 *)0x45e054;
      FUN_0047bd30();
      pfStack_c00 = (function<void___cdecl(void)> *)0x45e059;
      uVar5 = thunk_FUN_006e5750();
      pfStack_c00 = local_374;
      piStack_c04 = local_468 + 0x26c;
      puStack_c08 = (undefined1 *)0x45e080;
      FUN_0048a8f0();
      piStack_c04 = (int *)0x45e08a;
      puVar6 = (undefined4 *)FUN_0048ae20();
      *puVar6 = uVar5;
      local_8 = 0xffffffff;
      pfStack_c00 = (function<void___cdecl(void)> *)0x45e09e;
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_374);
      pfStack_c00 = (function<void___cdecl(void)> *)(local_468 + 0x26c);
      piStack_c04 = (int *)0x45e0bd;
      local_634 = FUN_0048a8f0();
      local_634 = local_634 + 0x7c;
      pfStack_c00 = (function<void___cdecl(void)> *)local_4d0;
      piStack_c04 = (int *)0x45e0d8;
      FUN_0044dff0();
      pfStack_c00 = (function<void___cdecl(void)> *)&local_495;
      piStack_c04 = (int *)0x45e0ea;
      FUN_0044dfd0();
      while( true ) {
        pfStack_c00 = (function<void___cdecl(void)> *)(uint)local_495;
        piStack_c04 = (int *)0x45e10c;
        cVar1 = FUN_0044dd70();
        if (cVar1 == '\0') break;
        pfStack_c00 = (function<void___cdecl(void)> *)0x45e11e;
        piStack_c18 = (int *)FUN_0044dd50();
        local_96c = (undefined1 *)&piStack_c14;
        pcStack_c1c = (char *)0x45e13b;
        local_5f4 = piStack_c18;
        FUN_00405520();
        piStack_c18 = (int *)0x45e146;
        local_640 = (int *)FUN_0063bda0();
        *local_640 = *local_640 + local_5f4[6];
        pfStack_c00 = (function<void___cdecl(void)> *)0x45e0f8;
        local_5f0 = local_640;
        FUN_0044dd30();
      }
      pfStack_c00 = (function<void___cdecl(void)> *)(local_468 + 0x26c);
      piStack_c04 = (int *)0x45e194;
      local_5ec = FUN_0048a8f0();
      local_5ec = local_5ec + 0x84;
      pfStack_c00 = (function<void___cdecl(void)> *)local_4d4;
      piStack_c04 = (int *)0x45e1b1;
      FUN_0044dff0();
      pfStack_c00 = (function<void___cdecl(void)> *)&local_496;
      piStack_c04 = (int *)0x45e1c3;
      FUN_0044dfd0();
      while( true ) {
        pfStack_c00 = (function<void___cdecl(void)> *)(uint)local_496;
        piStack_c04 = (int *)0x45e1e5;
        cVar1 = FUN_0044dd70();
        if (cVar1 == '\0') break;
        pfStack_c00 = (function<void___cdecl(void)> *)0x45e1f7;
        piStack_c18 = (int *)FUN_0044dd50();
        local_970 = (undefined1 *)&piStack_c14;
        pcStack_c1c = (char *)0x45e214;
        local_5e8 = piStack_c18;
        FUN_00405520();
        piStack_c18 = (int *)0x45e21f;
        local_644 = (int *)FUN_0063b7b0();
        *local_644 = *local_644 + local_5e8[6];
        pfStack_c00 = (function<void___cdecl(void)> *)0x45e1d1;
        local_5e4 = local_644;
        FUN_0044dd30();
      }
      pfStack_c00 = (function<void___cdecl(void)> *)0x45e25a;
      FUN_00657c10();
    }
    else if (local_468[0x26c] == 0x28) {
      pfStack_c00 = (function<void___cdecl(void)> *)0x1f4;
      piStack_c04 = (int *)0x3;
      puStack_c08 = (undefined1 *)0x45e27f;
      game_get_state_ptr_d1520();
      puStack_c08 = (undefined1 *)0x45e286;
      FUN_004edfb0();
      local_48d = '\x01';
      local_64c[1] = 0x17;
      pfStack_c00 = (function<void___cdecl(void)> *)local_974;
      piStack_c04 = (int *)0x45e2af;
      pfStack_c00 = (function<void___cdecl(void)> *)FUN_00489e00();
      piStack_c04 = local_64c + 1;
      puStack_c08 = local_978;
      pfStack_c0c = (function<void___cdecl(void)> *)0x45e2cf;
      FUN_00489da0();
      piStack_c04 = (int *)0x45e2d6;
      cVar1 = FUN_0040d2d0();
      if (cVar1 != '\0') {
        local_64c[0] = 0x17;
        pfStack_c00 = (function<void___cdecl(void)> *)local_64c;
        piStack_c04 = (int *)0x45e2ff;
        iVar4 = FUN_0048a8f0();
        if (0 < *(int *)(iVar4 + 0x74)) {
          local_48d = '\0';
        }
      }
      if (local_48d != '\0') {
        pfStack_c00 = (function<void___cdecl(void)> *)(local_468 + 0x26c);
        piStack_c04 = (int *)0x45e338;
        FUN_0048a8f0();
        pfStack_c00 = (function<void___cdecl(void)> *)0x45e342;
        cVar1 = FUN_00489dd0();
        if (cVar1 == '\0') {
LAB_0045e37e:
          pfStack_c00 = (function<void___cdecl(void)> *)&DAT_0074499c;
          piStack_c04 = (int *)0x45e38e;
          FUN_004054a0();
          local_8 = 8;
          local_97c = (undefined1 *)&piStack_c14;
          piStack_c18 = (int *)&DAT_00744994;
          pcStack_c1c = (char *)0x45e3aa;
          FUN_004054a0();
          piStack_c18 = (int *)0x45e3b5;
          local_650 = (int *)FUN_0063bda0();
          pfStack_c00 = local_35c;
          piStack_c04 = local_468 + 0x26c;
          puStack_c08 = (undefined1 *)0x45e3eb;
          local_5dc = local_650;
          FUN_0048a8f0();
          piStack_c04 = (int *)0x45e3f5;
          piVar3 = (int *)FUN_0048ae20();
          *local_5dc = *local_5dc - *piVar3;
          local_8 = 0xffffffff;
          pfStack_c00 = (function<void___cdecl(void)> *)0x45e419;
          std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_35c);
          pfStack_c00 = (function<void___cdecl(void)> *)&DAT_007449b0;
          piStack_c04 = (int *)0x45e42a;
          FUN_004054a0();
          local_8 = 9;
          local_980 = (undefined1 *)&piStack_c14;
          piStack_c18 = (int *)&DAT_007449a4;
          pcStack_c1c = (char *)0x45e446;
          FUN_004054a0();
          piStack_c18 = (int *)0x45e451;
          local_654 = (int *)FUN_0063b7b0();
          pfStack_c00 = local_344;
          piStack_c04 = local_468 + 0x26c;
          puStack_c08 = (undefined1 *)0x45e487;
          local_5d8 = local_654;
          FUN_0048a8f0();
          piStack_c04 = (int *)0x45e493;
          piVar3 = (int *)FUN_0048ae20();
          *local_5d8 = *local_5d8 - *piVar3;
          local_8 = 0xffffffff;
          pfStack_c00 = (function<void___cdecl(void)> *)0x45e4b7;
          std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_344);
          pfStack_c00 = (function<void___cdecl(void)> *)&DAT_007449c8;
          piStack_c04 = (int *)0x45e4c8;
          FUN_004054a0();
          local_8 = 10;
          local_984 = (undefined1 *)&piStack_c14;
          piStack_c18 = (int *)&DAT_007449bc;
          pcStack_c1c = (char *)0x45e4e4;
          FUN_004054a0();
          piStack_c18 = (int *)0x45e4ef;
          local_658 = (int *)FUN_0063b7b0();
          pfStack_c00 = local_32c;
          piStack_c04 = local_468 + 0x26c;
          puStack_c08 = (undefined1 *)0x45e525;
          local_5d4 = local_658;
          FUN_0048a8f0();
          piStack_c04 = (int *)0x45e531;
          piVar3 = (int *)FUN_0048ae20();
          *local_5d4 = *local_5d4 - *piVar3;
          local_8 = 0xffffffff;
          pfStack_c00 = (function<void___cdecl(void)> *)0x45e555;
          std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_32c);
          pfStack_c00 = (function<void___cdecl(void)> *)&DAT_007449dc;
          piStack_c04 = (int *)0x45e566;
          FUN_004054a0();
          local_8 = 0xb;
          local_988 = (undefined1 *)&piStack_c14;
          piStack_c18 = (int *)&DAT_007449d4;
          pcStack_c1c = (char *)0x45e582;
          FUN_004054a0();
          piStack_c18 = (int *)0x45e58d;
          local_65c = (int *)FUN_0063bda0();
          pfStack_c00 = local_29c;
          piStack_c04 = local_468 + 0x26c;
          puStack_c08 = (undefined1 *)0x45e5c3;
          local_5d0 = local_65c;
          FUN_0048a8f0();
          piStack_c04 = (int *)0x45e5cd;
          piVar3 = (int *)FUN_0048ae20();
          *local_5d0 = *local_5d0 - *piVar3;
          local_8 = 0xffffffff;
          pfStack_c00 = (function<void___cdecl(void)> *)0x45e5f1;
          std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_29c);
          pfStack_c00 = (function<void___cdecl(void)> *)&DAT_007449f0;
          piStack_c04 = (int *)0x45e602;
          FUN_004054a0();
          local_8 = 0xc;
          local_98c = (undefined1 *)&piStack_c14;
          piStack_c18 = (int *)&DAT_007449e4;
          pcStack_c1c = (char *)0x45e61e;
          FUN_004054a0();
          piStack_c18 = (int *)0x45e629;
          local_660 = (int *)FUN_0063bda0();
          pfStack_c00 = local_314;
          piStack_c04 = local_468 + 0x26c;
          puStack_c08 = (undefined1 *)0x45e65f;
          local_5cc = local_660;
          FUN_0048a8f0();
          piStack_c04 = (int *)0x45e669;
          piVar3 = (int *)FUN_0048ae20();
          *local_5cc = *local_5cc - *piVar3;
          local_8 = 0xffffffff;
          pfStack_c00 = (function<void___cdecl(void)> *)0x45e68d;
          std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_314);
          pfStack_c00 = (function<void___cdecl(void)> *)&DAT_00744a08;
          piStack_c04 = (int *)0x45e69e;
          FUN_004054a0();
          local_8 = 0xd;
          local_990 = (undefined1 *)&piStack_c14;
          piStack_c18 = (int *)&DAT_007449fc;
          pcStack_c1c = (char *)0x45e6ba;
          FUN_004054a0();
          piStack_c18 = (int *)0x45e6c5;
          local_664 = (int *)FUN_0063bda0();
          pfStack_c00 = local_2fc;
          piStack_c04 = local_468 + 0x26c;
          puStack_c08 = (undefined1 *)0x45e6fb;
          local_5c8 = local_664;
          FUN_0048a8f0();
          piStack_c04 = (int *)0x45e705;
          piVar3 = (int *)FUN_0048ae20();
          *local_5c8 = *local_5c8 - *piVar3;
          local_8 = 0xffffffff;
          pfStack_c00 = (function<void___cdecl(void)> *)0x45e729;
          std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_2fc);
          pfStack_c00 = (function<void___cdecl(void)> *)&DAT_00744a28;
          piStack_c04 = (int *)0x45e73a;
          FUN_004054a0();
          local_8 = 0xe;
          local_994 = (undefined1 *)&piStack_c14;
          piStack_c18 = (int *)&DAT_00744a14;
          pcStack_c1c = (char *)0x45e756;
          FUN_004054a0();
          piStack_c18 = (int *)0x45e761;
          local_668 = (int *)FUN_0063bda0();
          pfStack_c00 = local_2e4;
          piStack_c04 = local_468 + 0x26c;
          puStack_c08 = (undefined1 *)0x45e797;
          local_5c4 = local_668;
          FUN_0048a8f0();
          piStack_c04 = (int *)0x45e7a1;
          piVar3 = (int *)FUN_0048ae20();
          *local_5c4 = *local_5c4 - *piVar3;
          local_8 = 0xffffffff;
          pfStack_c00 = (function<void___cdecl(void)> *)0x45e7c5;
          std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_2e4);
          pfStack_c00 = (function<void___cdecl(void)> *)0x45e7d1;
          FUN_00657c10();
          pfStack_c00 = (function<void___cdecl(void)> *)(local_468 + 0x26c);
          piStack_c04 = (int *)0x45e7ef;
          FUN_0048a8f0();
          pfStack_c00 = (function<void___cdecl(void)> *)0x45e7f9;
          FUN_00427bb0();
          pfStack_c00 = (function<void___cdecl(void)> *)(local_468 + 0x26c);
          piStack_c04 = (int *)0x45e817;
          FUN_0048a8f0();
          pfStack_c00 = (function<void___cdecl(void)> *)0x45e823;
          FUN_00427bb0();
        }
        else {
          pfStack_c00 = (function<void___cdecl(void)> *)(local_468 + 0x26c);
          piStack_c04 = (int *)0x45e367;
          FUN_0048a8f0();
          pfStack_c00 = (function<void___cdecl(void)> *)0x45e373;
          cVar1 = FUN_00489dd0();
          if (cVar1 == '\0') goto LAB_0045e37e;
        }
        pfStack_c00 = (function<void___cdecl(void)> *)&DAT_00744a3c;
        piStack_c04 = (int *)0x45e834;
        FUN_004054a0();
        local_8 = 0xf;
        pfStack_c00 = (function<void___cdecl(void)> *)0x1;
        piStack_c04 = (int *)local_468[0x26c];
        puStack_c08 = (undefined1 *)0x45e855;
        FUN_0047bd30();
        pfStack_c00 = (function<void___cdecl(void)> *)0x45e85a;
        uVar5 = thunk_FUN_006e5750();
        pfStack_c00 = local_2cc;
        piStack_c04 = local_468 + 0x26c;
        puStack_c08 = (undefined1 *)0x45e880;
        FUN_0048a8f0();
        piStack_c04 = (int *)0x45e88a;
        puVar6 = (undefined4 *)FUN_0048ae20();
        *puVar6 = uVar5;
        local_8 = 0xffffffff;
        pfStack_c00 = (function<void___cdecl(void)> *)0x45e89e;
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_2cc);
        pfStack_c00 = (function<void___cdecl(void)> *)&DAT_00744a44;
        piStack_c04 = (int *)0x45e8af;
        FUN_004054a0();
        local_8 = 0x10;
        pfStack_c00 = (function<void___cdecl(void)> *)0x2;
        piStack_c04 = (int *)local_468[0x26c];
        puStack_c08 = (undefined1 *)0x45e8d0;
        fVar9 = (float10)FUN_0047bd30();
        local_66c = (float)fVar9;
        fVar10 = -local_66c;
        pfStack_c00 = local_2b4;
        piStack_c04 = local_468 + 0x26c;
        puStack_c08 = (undefined1 *)0x45e90e;
        FUN_0048a8f0();
        piStack_c04 = (int *)0x45e91a;
        piVar3 = (int *)FUN_0048ae20();
        *piVar3 = (int)fVar10;
        local_8 = 0xffffffff;
        pfStack_c00 = (function<void___cdecl(void)> *)0x45e92e;
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_2b4);
        pfStack_c00 = (function<void___cdecl(void)> *)&DAT_00744a50;
        piStack_c04 = (int *)0x45e93f;
        FUN_004054a0();
        local_8 = 0x11;
        pfStack_c00 = (function<void___cdecl(void)> *)0x3;
        piStack_c04 = (int *)local_468[0x26c];
        puStack_c08 = (undefined1 *)0x45e960;
        fVar9 = (float10)FUN_0047bd30();
        local_670 = (float)fVar9;
        fVar10 = -local_670;
        pfStack_c00 = local_20c;
        piStack_c04 = local_468 + 0x26c;
        puStack_c08 = (undefined1 *)0x45e99e;
        FUN_0048a8f0();
        piStack_c04 = (int *)0x45e9aa;
        piVar3 = (int *)FUN_0048ae20();
        *piVar3 = (int)fVar10;
        local_8 = 0xffffffff;
        pfStack_c00 = (function<void___cdecl(void)> *)0x45e9be;
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_20c);
        pfStack_c00 = (function<void___cdecl(void)> *)&DAT_00744a5c;
        piStack_c04 = (int *)0x45e9cf;
        FUN_004054a0();
        local_8 = 0x12;
        pfStack_c00 = (function<void___cdecl(void)> *)0x4;
        piStack_c04 = (int *)local_468[0x26c];
        puStack_c08 = (undefined1 *)0x45e9f0;
        fVar9 = (float10)FUN_0047bd30();
        local_674 = (float)fVar9;
        fVar10 = -local_674;
        pfStack_c00 = local_284;
        piStack_c04 = local_468 + 0x26c;
        puStack_c08 = (undefined1 *)0x45ea2d;
        FUN_0048a8f0();
        piStack_c04 = (int *)0x45ea37;
        piVar3 = (int *)FUN_0048ae20();
        *piVar3 = (int)fVar10;
        local_8 = 0xffffffff;
        pfStack_c00 = (function<void___cdecl(void)> *)0x45ea4b;
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_284);
        pfStack_c00 = (function<void___cdecl(void)> *)&DAT_00744a64;
        piStack_c04 = (int *)0x45ea5c;
        FUN_004054a0();
        local_8 = 0x13;
        pfStack_c00 = (function<void___cdecl(void)> *)0x5;
        piStack_c04 = (int *)local_468[0x26c];
        puStack_c08 = (undefined1 *)0x45ea7d;
        fVar9 = (float10)FUN_0047bd30();
        local_678 = (float)fVar9;
        fVar10 = local_678 * 10.0;
        pfStack_c00 = local_26c;
        piStack_c04 = local_468 + 0x26c;
        puStack_c08 = (undefined1 *)0x45eabc;
        FUN_0048a8f0();
        piStack_c04 = (int *)0x45eac6;
        piVar3 = (int *)FUN_0048ae20();
        *piVar3 = (int)fVar10;
        local_8 = 0xffffffff;
        pfStack_c00 = (function<void___cdecl(void)> *)0x45eada;
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_26c);
        pfStack_c00 = (function<void___cdecl(void)> *)&DAT_00744a70;
        piStack_c04 = (int *)0x45eaeb;
        FUN_004054a0();
        local_8 = 0x14;
        pfStack_c00 = (function<void___cdecl(void)> *)0x6;
        piStack_c04 = (int *)local_468[0x26c];
        puStack_c08 = (undefined1 *)0x45eb0c;
        fVar9 = (float10)FUN_0047bd30();
        local_67c = (float)fVar9;
        fVar10 = local_67c * 10.0;
        pfStack_c00 = local_254;
        piStack_c04 = local_468 + 0x26c;
        puStack_c08 = (undefined1 *)0x45eb4b;
        FUN_0048a8f0();
        piStack_c04 = (int *)0x45eb55;
        piVar3 = (int *)FUN_0048ae20();
        *piVar3 = (int)fVar10;
        local_8 = 0xffffffff;
        pfStack_c00 = (function<void___cdecl(void)> *)0x45eb69;
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_254);
        pfStack_c00 = (function<void___cdecl(void)> *)&DAT_00744a7c;
        piStack_c04 = (int *)0x45eb7a;
        FUN_004054a0();
        local_8 = 0x15;
        pfStack_c00 = (function<void___cdecl(void)> *)0x7;
        piStack_c04 = (int *)local_468[0x26c];
        puStack_c08 = (undefined1 *)0x45eb9b;
        FUN_0047bd30();
        pfStack_c00 = (function<void___cdecl(void)> *)0x45eba0;
        uVar5 = thunk_FUN_006e5750();
        pfStack_c00 = local_1ac;
        piStack_c04 = local_468 + 0x26c;
        puStack_c08 = (undefined1 *)0x45ebc6;
        FUN_0048a8f0();
        piStack_c04 = (int *)0x45ebd0;
        puVar6 = (undefined4 *)FUN_0048ae20();
        *puVar6 = uVar5;
        local_8 = 0xffffffff;
        pfStack_c00 = (function<void___cdecl(void)> *)0x45ebe4;
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_1ac);
        pfStack_c00 = (function<void___cdecl(void)> *)0x0;
        piStack_c04 = (int *)local_468[0x26c];
        puStack_c08 = (undefined1 *)0x45ebff;
        fVar9 = (float10)FUN_0047bd30();
        local_680 = (float)fVar9;
        fVar10 = local_680 * 1000.0;
        pfStack_c00 = (function<void___cdecl(void)> *)(local_468 + 0x26c);
        piStack_c04 = (int *)0x45ec36;
        iVar4 = FUN_0048a8f0();
        *(int *)(iVar4 + 0x74) = (int)fVar10;
        pfStack_c00 = (function<void___cdecl(void)> *)(local_468 + 0x26c);
        piStack_c04 = (int *)0x45ec57;
        local_5c0 = FUN_0048a8f0();
        local_5c0 = local_5c0 + 0x7c;
        pfStack_c00 = (function<void___cdecl(void)> *)local_4d8;
        piStack_c04 = (int *)0x45ec72;
        FUN_0044dff0();
        pfStack_c00 = (function<void___cdecl(void)> *)&local_497;
        piStack_c04 = (int *)0x45ec84;
        FUN_0044dfd0();
        while( true ) {
          pfStack_c00 = (function<void___cdecl(void)> *)(uint)local_497;
          piStack_c04 = (int *)0x45eca6;
          cVar1 = FUN_0044dd70();
          if (cVar1 == '\0') break;
          pfStack_c00 = (function<void___cdecl(void)> *)0x45ecb8;
          piStack_c18 = (int *)FUN_0044dd50();
          local_998 = (undefined1 *)&piStack_c14;
          pcStack_c1c = (char *)0x45ecd5;
          local_5f8 = piStack_c18;
          FUN_00405520();
          piStack_c18 = (int *)0x45ece0;
          local_684 = (int *)FUN_0063bda0();
          *local_684 = *local_684 + local_5f8[6];
          pfStack_c00 = (function<void___cdecl(void)> *)0x45ec92;
          local_5b8 = local_684;
          FUN_0044dd30();
        }
        pfStack_c00 = (function<void___cdecl(void)> *)(local_468 + 0x26c);
        piStack_c04 = (int *)0x45ed2d;
        local_5b4 = FUN_0048a8f0();
        local_5b4 = local_5b4 + 0x84;
        pfStack_c00 = (function<void___cdecl(void)> *)local_4dc;
        piStack_c04 = (int *)0x45ed4a;
        FUN_0044dff0();
        pfStack_c00 = (function<void___cdecl(void)> *)&local_498;
        piStack_c04 = (int *)0x45ed5c;
        FUN_0044dfd0();
        while( true ) {
          pfStack_c00 = (function<void___cdecl(void)> *)(uint)local_498;
          piStack_c04 = (int *)0x45ed7e;
          cVar1 = FUN_0044dd70();
          if (cVar1 == '\0') break;
          pfStack_c00 = (function<void___cdecl(void)> *)0x45ed90;
          piStack_c18 = (int *)FUN_0044dd50();
          local_99c = (undefined1 *)&piStack_c14;
          pcStack_c1c = (char *)0x45edad;
          local_5b0 = piStack_c18;
          FUN_00405520();
          piStack_c18 = (int *)0x45edb8;
          local_688 = (int *)FUN_0063b7b0();
          *local_688 = *local_688 + local_5b0[6];
          pfStack_c00 = (function<void___cdecl(void)> *)0x45ed6a;
          local_5ac = local_688;
          FUN_0044dd30();
        }
        pfStack_c00 = (function<void___cdecl(void)> *)0x45edf3;
        FUN_00657c10();
      }
    }
    else if (local_468[0x26c] == 0xaf) {
      pfStack_c00 = (function<void___cdecl(void)> *)(local_468 + 0x26c);
      piStack_c04 = (int *)0x45ee2c;
      FUN_0048a8f0();
      pfStack_c00 = (function<void___cdecl(void)> *)0x45ee36;
      cVar1 = FUN_00489dd0();
      if (cVar1 == '\0') {
        pfStack_c00 = (function<void___cdecl(void)> *)&DAT_00744a98;
        piStack_c04 = (int *)0x45ee51;
        FUN_004054a0();
        local_8 = 0x16;
        local_9a0 = (undefined1 *)&piStack_c14;
        piStack_c18 = (int *)&DAT_00744a90;
        pcStack_c1c = (char *)0x45ee6d;
        FUN_004054a0();
        piStack_c18 = (int *)0x45ee78;
        local_68c = (int *)FUN_0063bda0();
        pfStack_c00 = local_194;
        piStack_c04 = local_468 + 0x26c;
        puStack_c08 = (undefined1 *)0x45eeaf;
        local_5a8 = local_68c;
        FUN_0048a8f0();
        piStack_c04 = (int *)0x45eeb9;
        piVar3 = (int *)FUN_0048ae20();
        *local_5a8 = *local_5a8 - *piVar3;
        local_8 = 0xffffffff;
        pfStack_c00 = (function<void___cdecl(void)> *)0x45eedd;
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_194);
        pfStack_c00 = (function<void___cdecl(void)> *)0x45eee9;
        FUN_00657c10();
        pfStack_c00 = (function<void___cdecl(void)> *)(local_468 + 0x26c);
        piStack_c04 = (int *)0x45ef06;
        FUN_0048a8f0();
        pfStack_c00 = (function<void___cdecl(void)> *)0x45ef10;
        FUN_00427bb0();
      }
      pfStack_c00 = (function<void___cdecl(void)> *)&DAT_00744aa0;
      piStack_c04 = (int *)0x45ef21;
      FUN_004054a0();
      local_8 = 0x17;
      pfStack_c00 = (function<void___cdecl(void)> *)0x0;
      piStack_c04 = (int *)local_468[0x26c];
      puStack_c08 = (undefined1 *)0x45ef42;
      uVar5 = FUN_0047bcc0();
      pfStack_c00 = local_17c;
      piStack_c04 = local_468 + 0x26c;
      puStack_c08 = (undefined1 *)0x45ef69;
      FUN_0048a8f0();
      piStack_c04 = (int *)0x45ef73;
      puVar6 = (undefined4 *)FUN_0048ae20();
      *puVar6 = uVar5;
      local_8 = 0xffffffff;
      pfStack_c00 = (function<void___cdecl(void)> *)0x45ef87;
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_17c);
      pfStack_c00 = (function<void___cdecl(void)> *)0x0;
      piStack_c04 = (int *)local_468[0x26c];
      puStack_c08 = (undefined1 *)0x45efa2;
      fVar9 = (float10)FUN_0047bd30();
      local_690 = (float)fVar9;
      fVar10 = local_690 * 1000.0;
      pfStack_c00 = (function<void___cdecl(void)> *)(local_468 + 0x26c);
      piStack_c04 = (int *)0x45efda;
      iVar4 = FUN_0048a8f0();
      *(int *)(iVar4 + 0x74) = (int)fVar10;
      pfStack_c00 = (function<void___cdecl(void)> *)(local_468 + 0x26c);
      piStack_c04 = (int *)0x45effb;
      local_5a4 = FUN_0048a8f0();
      local_5a4 = local_5a4 + 0x7c;
      pfStack_c00 = (function<void___cdecl(void)> *)local_4e0;
      piStack_c04 = (int *)0x45f016;
      FUN_0044dff0();
      pfStack_c00 = (function<void___cdecl(void)> *)&local_499;
      piStack_c04 = (int *)0x45f028;
      FUN_0044dfd0();
      while( true ) {
        pfStack_c00 = (function<void___cdecl(void)> *)(uint)local_499;
        piStack_c04 = (int *)0x45f04a;
        cVar1 = FUN_0044dd70();
        if (cVar1 == '\0') break;
        pfStack_c00 = (function<void___cdecl(void)> *)0x45f05c;
        piStack_c18 = (int *)FUN_0044dd50();
        local_9a4 = (undefined1 *)&piStack_c14;
        pcStack_c1c = (char *)0x45f079;
        local_5a0 = piStack_c18;
        FUN_00405520();
        piStack_c18 = (int *)0x45f084;
        local_694 = (int *)FUN_0063bda0();
        *local_694 = *local_694 + local_5a0[6];
        pfStack_c00 = (function<void___cdecl(void)> *)0x45f036;
        local_59c = local_694;
        FUN_0044dd30();
      }
      pfStack_c00 = (function<void___cdecl(void)> *)0x45f0bf;
      FUN_00657c10();
    }
    else if (local_468[0x26c] == 0xb0) {
      pfStack_c00 = (function<void___cdecl(void)> *)(local_468 + 0x26c);
      piStack_c04 = (int *)0x45f0f8;
      FUN_0048a8f0();
      pfStack_c00 = (function<void___cdecl(void)> *)0x45f102;
      cVar1 = FUN_00489dd0();
      if (cVar1 == '\0') {
        pfStack_c00 = (function<void___cdecl(void)> *)&DAT_00744ab0;
        piStack_c04 = (int *)0x45f11d;
        FUN_004054a0();
        local_8 = 0x18;
        local_9a8 = (undefined1 *)&piStack_c14;
        piStack_c18 = (int *)&DAT_00744aa8;
        pcStack_c1c = (char *)0x45f139;
        FUN_004054a0();
        piStack_c18 = (int *)0x45f144;
        local_698 = (int *)FUN_0063bda0();
        pfStack_c00 = local_164;
        piStack_c04 = local_468 + 0x26c;
        puStack_c08 = (undefined1 *)0x45f17b;
        local_598 = local_698;
        FUN_0048a8f0();
        piStack_c04 = (int *)0x45f185;
        piVar3 = (int *)FUN_0048ae20();
        *local_598 = *local_598 - *piVar3;
        local_8 = 0xffffffff;
        pfStack_c00 = (function<void___cdecl(void)> *)0x45f1a9;
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_164);
        pfStack_c00 = (function<void___cdecl(void)> *)0x45f1b5;
        FUN_00657c10();
        pfStack_c00 = (function<void___cdecl(void)> *)(local_468 + 0x26c);
        piStack_c04 = (int *)0x45f1d2;
        FUN_0048a8f0();
        pfStack_c00 = (function<void___cdecl(void)> *)0x45f1dc;
        FUN_00427bb0();
      }
      pfStack_c00 = (function<void___cdecl(void)> *)&DAT_00744ab8;
      piStack_c04 = (int *)0x45f1ed;
      FUN_004054a0();
      local_8 = 0x19;
      pfStack_c00 = (function<void___cdecl(void)> *)0x1;
      piStack_c04 = (int *)local_468[0x26c];
      puStack_c08 = (undefined1 *)0x45f20e;
      FUN_0047bd30();
      pfStack_c00 = (function<void___cdecl(void)> *)0x45f213;
      uVar5 = thunk_FUN_006e5750();
      pfStack_c00 = local_bc;
      piStack_c04 = local_468 + 0x26c;
      puStack_c08 = (undefined1 *)0x45f23a;
      FUN_0048a8f0();
      piStack_c04 = (int *)0x45f244;
      puVar6 = (undefined4 *)FUN_0048ae20();
      *puVar6 = uVar5;
      local_8 = 0xffffffff;
      pfStack_c00 = (function<void___cdecl(void)> *)0x45f258;
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_bc);
      pfStack_c00 = (function<void___cdecl(void)> *)0x0;
      piStack_c04 = (int *)local_468[0x26c];
      puStack_c08 = (undefined1 *)0x45f273;
      fVar9 = (float10)FUN_0047bd30();
      local_69c = (float)fVar9;
      fVar10 = local_69c * 1000.0;
      pfStack_c00 = (function<void___cdecl(void)> *)(local_468 + 0x26c);
      piStack_c04 = (int *)0x45f2ab;
      iVar4 = FUN_0048a8f0();
      *(int *)(iVar4 + 0x74) = (int)fVar10;
      pfStack_c00 = (function<void___cdecl(void)> *)(local_468 + 0x26c);
      piStack_c04 = (int *)0x45f2cc;
      local_594 = FUN_0048a8f0();
      local_594 = local_594 + 0x7c;
      pfStack_c00 = (function<void___cdecl(void)> *)local_510;
      piStack_c04 = (int *)0x45f2e7;
      FUN_0044dff0();
      pfStack_c00 = (function<void___cdecl(void)> *)&local_49a;
      piStack_c04 = (int *)0x45f2f9;
      FUN_0044dfd0();
      while( true ) {
        pfStack_c00 = (function<void___cdecl(void)> *)(uint)local_49a;
        piStack_c04 = (int *)0x45f31b;
        cVar1 = FUN_0044dd70();
        if (cVar1 == '\0') break;
        pfStack_c00 = (function<void___cdecl(void)> *)0x45f32d;
        piStack_c18 = (int *)FUN_0044dd50();
        local_9ac = (undefined1 *)&piStack_c14;
        pcStack_c1c = (char *)0x45f34a;
        local_590 = piStack_c18;
        FUN_00405520();
        piStack_c18 = (int *)0x45f355;
        local_6a0 = (int *)FUN_0063bda0();
        *local_6a0 = *local_6a0 + local_590[6];
        pfStack_c00 = (function<void___cdecl(void)> *)0x45f307;
        local_58c = local_6a0;
        FUN_0044dd30();
      }
      pfStack_c00 = (function<void___cdecl(void)> *)0x45f390;
      FUN_00657c10();
    }
    else if (local_468[0x26c] == 0xb4) {
      pfStack_c00 = (function<void___cdecl(void)> *)0x1;
      piStack_c04 = (int *)local_468[0x26c];
      puStack_c08 = (undefined1 *)0x45f3bf;
      fVar9 = (float10)FUN_0047bd30();
      local_6a4 = (float)fVar9;
      fVar10 = local_6a4 * 1000.0;
      pfStack_c00 = (function<void___cdecl(void)> *)(local_468 + 0x26c);
      piStack_c04 = (int *)0x45f3f7;
      iVar4 = FUN_0048a8f0();
      *(int *)(iVar4 + 0x74) = (int)fVar10;
    }
LAB_0045f3fa:
    local_9b0 = (undefined1 *)&piStack_c14;
    piStack_c18 = (int *)0x744ac0;
    pcStack_c1c = (char *)0x45f40f;
    FUN_004054a0();
    piStack_c18 = (int *)0x45f422;
    local_6a8 = (**(code **)(*local_468 + 0x78))();
    piStack_c18 = (int *)0x8c;
    pcStack_c1c = (char *)0x0;
    piStack_c20 = (int *)0x0;
    pcStack_c24 = (char *)0x45f448;
    local_484 = local_6a8;
    FUN_0062fd90();
    *(int *)(local_484 + 0x114) = *(int *)(local_484 + 0x114) + 100;
    *(undefined4 *)(local_484 + 0x4c) = 1;
    *(undefined1 *)(local_484 + 0xe8) = 0;
    local_9b4 = (undefined1 *)&iStack_c2c;
    pcStack_c30 = "common/commoneffect/animation/buffstarticonglow.ani";
    uStack_c34 = 0x45f492;
    FUN_004054a0();
    pcStack_c30 = (char *)0x45f4a5;
    local_6ac = (**(code **)(*local_468 + 0x78))();
    pcStack_c30 = (char *)0x8c;
    uStack_c34 = 0;
    pcStack_c38 = (char *)0x0;
    pcStack_c3c = (char *)0x45f4cb;
    local_484 = local_6ac;
    FUN_0062fd90();
    *(int *)(local_484 + 0x114) = *(int *)(local_484 + 0x114) + 200;
    *(undefined4 *)(local_484 + 0x4c) = 1;
    *(undefined1 *)(local_484 + 0xe8) = 0;
    local_9b8 = (undefined1 *)&uStack_c44;
    pcStack_c48 = "common/commoneffect/animation/buffstarticon.ani";
    uStack_c4c = 0x45f517;
    FUN_004054a0();
    pcStack_c48 = (char *)0x45f52a;
    local_6b0 = (**(code **)(*local_468 + 0x78))();
    pcStack_c48 = (char *)0x8c;
    uStack_c4c = 0;
    pcStack_c50 = (char *)0x0;
    pcStack_c54 = (char *)0x45f550;
    local_484 = local_6b0;
    FUN_0062fd90();
    pcStack_c48 = (char *)local_468[0x26c];
    uStack_c4c = 0x45f569;
    pcStack_c48 = (char *)FUN_004596a0();
    local_9bc = (undefined1 *)&pcStack_c60;
    pcStack_c64 = "sprite/common/commoneffect/bufficon.img";
    pcStack_c68 = (char *)0x45f57f;
    FUN_004054a0();
    pcStack_c64 = (char *)0x45f58a;
    FUN_0062fc50();
    *(int *)(local_484 + 0x114) = *(int *)(local_484 + 0x114) + 300;
    *(undefined4 *)(local_484 + 0x4c) = 1;
    *(undefined1 *)(local_484 + 0xe8) = 0;
    if (local_468[0x26c] == 0x28) {
      local_9c0 = (undefined1 *)&uStack_c5c;
      pcStack_c60 = "common/commoneffect/particle/buffstartparticle.ptl";
      pcStack_c64 = (char *)0x45f5e7;
      FUN_004054a0();
      pcStack_c60 = (char *)0x8c;
      pcStack_c64 = (char *)0x0;
      pcStack_c68 = (char *)0x0;
      pcStack_c6c = (char *)0x0;
      pcStack_c70 = (char *)0x45f5f7;
      local_6b4 = FUN_004aa990();
      *(int **)(local_6b4 + 0x60) = local_468;
      local_9c4 = (undefined1 *)&uStack_c5c;
      pcStack_c60 = "common/commoneffect/particle/attackpowerup.ptl";
      pcStack_c64 = "j";
      FUN_004054a0();
      pcStack_c60 = (char *)0x0;
      pcStack_c64 = (char *)0x0;
      pcStack_c68 = (char *)0x0;
      pcStack_c6c = (char *)0x0;
      pcStack_c70 = (char *)0x45f631;
      local_6b8 = FUN_004aa990();
      *(int **)(local_6b8 + 0x60) = local_468;
    }
    pcStack_c48 = (char *)0x45f65f;
    (**(code **)(*local_468 + 0x108))();
    pcStack_c48 = (char *)0x45f675;
    (**(code **)(*local_468 + 0x134))();
  }
  ExceptionList = local_10;
  return;
}


/* ==== 00467b10  img_path_loader_21  size=306 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

CMFCColorMenuButton * img_path_loader_21(CMFCColorMenuButton *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  int *piVar7;
  CMFCColorMenuButton *pCVar8;
  CMFCColorMenuButton *in_ECX;
  float10 fVar9;
  undefined4 uStack_6b8;
  char *pcStack_6b4;
  undefined4 uStack_6a8;
  char *pcStack_6a4;
  undefined4 uStack_6a0;
  char *pcStack_69c;
  char *pcStack_698;
  char *pcStack_694;
  undefined4 uStack_690;
  char *pcStack_68c;
  char *pcStack_688;
  char *pcStack_684;
  char *pcStack_680;
  char *pcStack_67c;
  CMFCColorMenuButton *pCStack_678;
  CMFCColorMenuButton *pCStack_674;
  CMFCColorMenuButton *pCStack_670;
  CMFCColorMenuButton *pCStack_66c;
  CMFCColorMenuButton *pCStack_668;
  undefined1 auStack_428 [4];
  undefined1 auStack_424 [4];
  undefined1 *puStack_420;
  undefined1 *puStack_41c;
  undefined1 *puStack_418;
  undefined1 *puStack_414;
  undefined1 *puStack_410;
  undefined1 *puStack_40c;
  undefined1 *puStack_408;
  undefined1 *puStack_404;
  undefined1 *puStack_400;
  undefined1 *puStack_3fc;
  undefined1 *puStack_3f8;
  undefined1 *puStack_3f4;
  undefined1 *puStack_3f0;
  undefined1 *puStack_3ec;
  undefined1 *puStack_3e8;
  undefined1 *puStack_3e4;
  undefined1 *puStack_3e0;
  undefined1 *puStack_3dc;
  undefined1 *puStack_3d8;
  undefined1 *puStack_3d4;
  undefined1 *puStack_3d0;
  undefined1 *puStack_3cc;
  undefined1 *puStack_3c8;
  undefined1 *puStack_3c4;
  undefined1 *puStack_3c0;
  undefined1 *puStack_3bc;
  undefined1 *puStack_3b8;
  undefined1 *puStack_3b4;
  undefined1 *puStack_3b0;
  undefined1 *puStack_3a8;
  undefined1 *puStack_3a4;
  undefined1 *puStack_3a0;
  undefined1 *puStack_39c;
  undefined1 *puStack_398;
  undefined1 *puStack_394;
  undefined1 *puStack_390;
  int iStack_38c;
  int iStack_388;
  int iStack_384;
  float fStack_380;
  float fStack_37c;
  float fStack_378;
  int iStack_374;
  int iStack_370;
  int iStack_36c;
  float fStack_368;
  float fStack_364;
  float fStack_360;
  int iStack_35c;
  int iStack_358;
  int iStack_354;
  int iStack_350;
  int iStack_34c;
  int iStack_348;
  int iStack_344;
  int iStack_33c;
  int iStack_338;
  int iStack_334;
  int iStack_330;
  int iStack_32c;
  int iStack_324;
  int iStack_320;
  int iStack_31c;
  int iStack_318;
  int iStack_314;
  int iStack_310;
  int iStack_30c;
  int iStack_308;
  int iStack_304;
  int iStack_300;
  int iStack_2fc;
  int iStack_2f0;
  undefined4 uStack_2ec;
  int iStack_2e4;
  int iStack_2e0;
  int iStack_2dc;
  int iStack_2d8;
  int iStack_2d4;
  int iStack_2d0;
  int iStack_2c8;
  int iStack_2c4;
  int iStack_2c0;
  int iStack_2bc;
  int iStack_2b8;
  int iStack_2a0;
  int iStack_29c;
  int iStack_298;
  int iStack_294;
  int iStack_290;
  CMFCColorMenuButton *pCStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  int iStack_280;
  int iStack_27c;
  float fStack_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  int iStack_268;
  float fStack_264;
  float fStack_260;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  int iStack_248;
  int iStack_240;
  int iStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  int iStack_230;
  int iStack_22c;
  int iStack_228;
  int iStack_224;
  int iStack_220;
  int iStack_21c;
  int iStack_218;
  int iStack_214;
  int iStack_20c;
  float fStack_208;
  int iStack_204;
  int iStack_200;
  int iStack_1f8;
  int iStack_1f4;
  int iStack_1f0;
  int iStack_1ec;
  int iStack_1e8;
  int iStack_1e4;
  int iStack_1e0;
  int iStack_1dc;
  int iStack_1d8;
  int iStack_1d4;
  int iStack_1d0;
  int iStack_1cc;
  int iStack_1c8;
  int iStack_1c4;
  int iStack_1c0;
  int iStack_1bc;
  int *piStack_1a8;
  int local_1a4;
  int *piStack_1a0;
  int *piStack_19c;
  CMFCColorMenuButton *pCStack_198;
  int iStack_194;
  int iStack_190;
  int iStack_18c;
  int iStack_188;
  int iStack_184;
  undefined1 *puStack_180;
  int iStack_178;
  int iStack_174;
  CMFCColorMenuButton *pCStack_170;
  int iStack_168;
  int iStack_164;
  CMFCColorMenuButton *pCStack_160;
  undefined4 uStack_15c;
  CMFCColorMenuButton *local_158;
  int iStack_154;
  int iStack_150;
  int iStack_14c;
  int iStack_148;
  int iStack_144;
  int iStack_140;
  int iStack_13c;
  char cStack_136;
  char cStack_135;
  int iStack_134;
  int iStack_130;
  int iStack_12c;
  int iStack_128;
  int iStack_124;
  int iStack_120;
  int iStack_11c;
  CMFCColorMenuButton *local_118;
  undefined1 auStack_114 [256];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_007112f1;
  local_10 = ExceptionList;
  local_14 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*(int *)(in_ECX + 0xdd8) < 4) {
    pCVar8 = (CMFCColorMenuButton *)0x0;
  }
  else if (*(int *)(in_ECX + 0xab8) == 0) {
    if (param_1 == (CMFCColorMenuButton *)0x0) {
      pCVar8 = (CMFCColorMenuButton *)0x0;
    }
    else {
      local_118 = in_ECX;
      cVar2 = FUN_00467a40();
      if (cVar2 == '\0') {
        pCVar8 = (CMFCColorMenuButton *)0x0;
      }
      else {
        local_1a4 = FUN_006ca800();
        if (local_1a4 == 0) {
          pCVar8 = (CMFCColorMenuButton *)0x0;
        }
        else {
          iVar3 = FUN_006ca780();
          if (*(int *)(local_1a4 + 8) == iVar3 || *(int *)(local_1a4 + 8) - iVar3 < 0) {
            pCVar8 = (CMFCColorMenuButton *)0x0;
          }
          else {
            local_158 = param_1 + -1;
            pCVar8 = local_158;
            switch(param_1) {
            case (CMFCColorMenuButton *)0x1:
              cVar2 = FUN_00467700();
              if ((cVar2 == '\0') && (cVar2 = FUN_004666c0(), cVar2 == '\0')) {
                pCVar8 = (CMFCColorMenuButton *)0x0;
              }
              else {
                cVar2 = FUN_00482730();
                if (cVar2 == '\0') {
                  pCVar8 = (CMFCColorMenuButton *)0x0;
                }
                else {
                  FUN_00466500();
                  FUN_00467210();
                  CMFCColorMenuButton::Initialize(local_118);
                  (**(code **)(*(int *)local_118 + 0x138))();
                  *(int *)(local_118 + 0xa10) = 0;
                  *(int *)(local_118 + 0x1a8) = 0;
                  *(int *)(local_118 + 0x1a4) = 0x1a4;
                  pCStack_668 = param_1;
                  pCStack_66c = (CMFCColorMenuButton *)0x467cf2;
                  FUN_0047bcc0();
                  pCStack_668 = (CMFCColorMenuButton *)0x467d09;
                  (**(code **)(*(int *)local_118 + 0x104))();
                  pCStack_674 = (CMFCColorMenuButton *)0x746aa4;
                  pCStack_678 = (CMFCColorMenuButton *)0x467d1f;
                  FUN_004054a0();
                  pCStack_674 = (CMFCColorMenuButton *)0x467d24;
                  FUN_004c3500();
                  *(CMFCColorMenuButton **)(local_118 + 0x9b0) = param_1;
                  pCVar8 = (CMFCColorMenuButton *)0x1;
                }
              }
              break;
            case (CMFCColorMenuButton *)0x2:
              cVar2 = FUN_00467700();
              if ((cVar2 == '\0') && (cVar2 = FUN_004666c0(), cVar2 == '\0')) {
                pCVar8 = (CMFCColorMenuButton *)0x0;
              }
              else {
                cVar2 = FUN_00482730();
                if (cVar2 == '\0') {
                  pCVar8 = (CMFCColorMenuButton *)0x0;
                }
                else {
                  iVar3 = FUN_00465360();
                  if (iVar3 == 0) {
                    pCVar8 = (CMFCColorMenuButton *)0x0;
                  }
                  else {
                    *(int *)(local_118 + 0xa18) = 0;
                    iStack_140 = 0;
                    while (iVar3 = FUN_0047bcc0(), iStack_140 < iVar3) {
                      if (*(int *)(local_118 + iStack_140 * 0x14 + 0xa28) != 0) {
                        pCStack_668 = (CMFCColorMenuButton *)0x467e16;
                        _memset(auStack_114,0,0x100);
                        pCStack_668 = (CMFCColorMenuButton *)0x467e3f;
                        FUN_00414e80();
                        puStack_390 = (undefined1 *)&pCStack_670;
                        pCStack_674 = (CMFCColorMenuButton *)auStack_114;
                        pCStack_678 = (CMFCColorMenuButton *)0x467e59;
                        FUN_004054a0();
                        pCStack_674 = (CMFCColorMenuButton *)0x467e64;
                        FUN_00630660();
                        *(undefined4 *)(local_118 + iStack_140 * 0x14 + 0xa28) = 0;
                        *(undefined4 *)(local_118 + iStack_140 * 0x14 + 0xa2c) = 0;
                      }
                      iStack_140 = iStack_140 + 1;
                    }
                    FUN_00466500();
                    FUN_00467210();
                    CMFCColorMenuButton::Initialize(local_118);
                    (**(code **)(*(int *)local_118 + 0x138))();
                    *(int *)(local_118 + 0x1a4) = 0x47;
                    *(int *)(local_118 + 0x1a8) = 0;
                    pCStack_668 = *(CMFCColorMenuButton **)(local_118 + 0xab8);
                    pCStack_66c = (CMFCColorMenuButton *)0x467f0f;
                    game_loop_helper_e9240();
                    pCStack_66c = (CMFCColorMenuButton *)0x467f16;
                    iVar3 = FUN_005d9da0();
                    *(int *)(local_118 + 0x924) =
                         (*(int *)(iVar3 + 0xc4) * 1000) / *(int *)(local_118 + 0x750);
                    *(int *)(local_118 + 0x92c) = 0;
                    *(int *)(local_118 + 0x928) = 0;
                    pCStack_668 = (CMFCColorMenuButton *)0x467f7c;
                    (**(code **)(*(int *)local_118 + 0x90))();
                    pCStack_668 = (CMFCColorMenuButton *)0x3c;
                    pCStack_66c = (CMFCColorMenuButton *)0x0;
                    pCStack_670 = (CMFCColorMenuButton *)(*(int *)(local_118 + 500) * -0x3c);
                    puStack_394 = (undefined1 *)&pcStack_688;
                    pcStack_68c = "character/swordman/effect/animation/reflectguard/charge.ani";
                    uStack_690 = 0x467fa8;
                    FUN_004054a0();
                    pcStack_68c = (char *)0x467fbb;
                    uStack_2ec = (**(code **)(*(int *)local_118 + 0x78))();
                    pCStack_668 = (CMFCColorMenuButton *)0x467fcc;
                    FUN_0062fd90();
                    *(CMFCColorMenuButton **)(local_118 + 0x9b0) = param_1;
                    pCVar8 = (CMFCColorMenuButton *)0x1;
                  }
                }
              }
              break;
            case (CMFCColorMenuButton *)0x3:
            case (CMFCColorMenuButton *)0x26:
            case (CMFCColorMenuButton *)0x28:
            case (CMFCColorMenuButton *)0xaf:
            case (CMFCColorMenuButton *)0xb0:
            case (CMFCColorMenuButton *)0xb4:
              cVar2 = FUN_00467700();
              if ((cVar2 == '\0') && (cVar2 = FUN_004666c0(), cVar2 == '\0')) {
                pCVar8 = (CMFCColorMenuButton *)0x0;
              }
              else {
                cVar2 = FUN_00482730();
                if (cVar2 == '\0') {
                  pCVar8 = (CMFCColorMenuButton *)0x0;
                }
                else {
                  FUN_00466500();
                  FUN_00467210();
                  CMFCColorMenuButton::Initialize(local_118);
                  *(int *)(local_118 + 0x1a4) = 0xdc;
                  *(int *)(local_118 + 0x1a8) = 0;
                  (**(code **)(*(int *)local_118 + 0x138))();
                  pCStack_668 = *(CMFCColorMenuButton **)(local_118 + 0xab8);
                  pCStack_66c = (CMFCColorMenuButton *)0x470526;
                  iVar3 = FUN_005d9da0();
                  *(int *)(local_118 + 0x924) =
                       (*(int *)(iVar3 + 0xc4) * 1000) / *(int *)(local_118 + 0x750);
                  pCStack_668 = (CMFCColorMenuButton *)0x47056c;
                  (**(code **)(*(int *)local_118 + 0x104))();
                  *(int *)(local_118 + 0x92c) = 0;
                  *(int *)(local_118 + 0x928) = 0;
                  pcStack_680 = "common/commoneffect/animation/buffchargeglow.ani";
                  pcStack_684 = (char *)0x4705a1;
                  FUN_004054a0();
                  pcStack_680 = (char *)0x4705b4;
                  iStack_384 = (**(code **)(*(int *)local_118 + 0x78))();
                  pCStack_668 = (CMFCColorMenuButton *)0x4705da;
                  iStack_178 = iStack_384;
                  FUN_0062fd90();
                  *(undefined4 *)(iStack_178 + 0x4c) = 1;
                  *(undefined1 *)(iStack_178 + 0xe8) = 0;
                  pCStack_674 = (CMFCColorMenuButton *)0x748e38;
                  pCStack_678 = (CMFCColorMenuButton *)0x470609;
                  FUN_004054a0();
                  pCStack_674 = (CMFCColorMenuButton *)0x47060e;
                  FUN_004c3570();
                  if ((local_118[0xe05] == (CMFCColorMenuButton)0x0) &&
                     (local_118[0xdb8] == (CMFCColorMenuButton)0x0)) {
                    pCStack_674 = (CMFCColorMenuButton *)0x748e48;
                    pCStack_678 = (CMFCColorMenuButton *)0x470648;
                    FUN_004054a0();
                    pCStack_674 = (CMFCColorMenuButton *)0x8c;
                    pCStack_678 = (CMFCColorMenuButton *)0x0;
                    pcStack_67c = (char *)0x0;
                    pcStack_680 = (char *)0x0;
                    pcStack_684 = (char *)0x470658;
                    iStack_388 = FUN_004aa990();
                    *(CMFCColorMenuButton **)(iStack_388 + 0x60) = local_118;
                    *(CMFCColorMenuButton **)(iStack_388 + 0x38) = local_118;
                    iStack_1d0 = iStack_388;
                  }
                  pCStack_674 = (CMFCColorMenuButton *)0x748e7c;
                  pCStack_678 = (CMFCColorMenuButton *)0x4706a0;
                  FUN_004054a0();
                  pCStack_674 = (CMFCColorMenuButton *)0x4706a5;
                  FUN_004c3570();
                  *(CMFCColorMenuButton **)(local_118 + 0x9b0) = param_1;
                  pCVar8 = (CMFCColorMenuButton *)0x1;
                }
              }
              break;
            case (CMFCColorMenuButton *)0x5:
              cVar2 = FUN_00467700();
              if ((cVar2 == '\0') && (cVar2 = FUN_004666c0(), cVar2 == '\0')) {
                pCVar8 = (CMFCColorMenuButton *)0x0;
              }
              else {
                cVar2 = FUN_00482730();
                if (cVar2 == '\0') {
                  pCVar8 = (CMFCColorMenuButton *)0x0;
                }
                else {
                  FUN_00466500();
                  FUN_00467210();
                  *(undefined4 *)(local_118 + 0x1a8) = 0;
                  CMFCColorMenuButton::Initialize(local_118);
                  (**(code **)(*(int *)local_118 + 0x138))();
                  pCStack_668 = (CMFCColorMenuButton *)0x3;
                  pCStack_66c = (CMFCColorMenuButton *)0x46809b;
                  (**(code **)(*(int *)local_118 + 0x13c))();
                  pCStack_66c = (CMFCColorMenuButton *)0x0;
                  pCStack_670 = (CMFCColorMenuButton *)0x0;
                  pCStack_674 = (CMFCColorMenuButton *)0x5;
                  pCStack_678 = (CMFCColorMenuButton *)0x4680ac;
                  FUN_0047bd30();
                  pCStack_670 = (CMFCColorMenuButton *)0x4680b1;
                  pCStack_670 = (CMFCColorMenuButton *)thunk_FUN_006e5750();
                  pCStack_674 = (CMFCColorMenuButton *)0x4680bd;
                  FUN_00631910();
                  pCStack_66c = (CMFCColorMenuButton *)0x6;
                  pCStack_670 = local_118;
                  pCStack_674 = (CMFCColorMenuButton *)0x4680cc;
                  iVar3 = FUN_006ca800();
                  if (iVar3 == 0) {
                    *(int *)(local_118 + 0x1a4) = 200;
                    puStack_398 = (undefined1 *)&pcStack_680;
                    pcStack_684 = "character/swordman/effect/animation/hardattack1.ani";
                    pcStack_688 = (char *)0x4680fc;
                    FUN_004054a0();
                    pcStack_684 = (char *)0x46810f;
                    iStack_1d8 = (**(code **)(*(int *)local_118 + 0x78))();
                    *(undefined1 *)(iStack_1d8 + 0xe0) = 1;
                    puStack_39c = (undefined1 *)&pcStack_698;
                    pcStack_69c = "character/swordman/effect/animation/hardattack2.ani";
                    uStack_6a0 = 0x468137;
                    FUN_004054a0();
                    pcStack_69c = (char *)0x46814a;
                    iStack_1dc = (**(code **)(*(int *)local_118 + 0x78))();
                    *(undefined1 *)(iStack_1dc + 0xe0) = 1;
                    puStack_3a0 = (undefined1 *)&pCStack_670;
                    pCStack_674 = (CMFCColorMenuButton *)0x746ba8;
                    pCStack_678 = (CMFCColorMenuButton *)0x468172;
                    FUN_004054a0();
                    pCStack_674 = (CMFCColorMenuButton *)0x468177;
                    FUN_004c3500();
                  }
                  else {
                    *(int *)(local_118 + 0x1a4) = 0x59;
                    pCStack_66c = (CMFCColorMenuButton *)0x1;
                    pCStack_670 = param_1;
                    pCStack_674 = (CMFCColorMenuButton *)0x4681a0;
                    iVar3 = FUN_0047bcc0();
                    *(int *)(local_118 + 0xa90) = iVar3;
                    puStack_3a4 = (undefined1 *)&pcStack_680;
                    pcStack_684 = "character/swordman/effect/animation/hardattackoncharge1.ani";
                    pcStack_688 = (char *)0x4681c1;
                    FUN_004054a0();
                    pcStack_684 = (char *)0x4681d4;
                    (**(code **)(*(int *)local_118 + 0x78))();
                    puStack_3a8 = (undefined1 *)&pcStack_698;
                    pcStack_69c = "character/swordman/effect/animation/hardattackoncharge2.ani";
                    uStack_6a0 = 0x4681ea;
                    FUN_004054a0();
                    pcStack_69c = (char *)0x4681fd;
                    (**(code **)(*(int *)local_118 + 0x78))();
                    FUN_004021b0();
                    while( true ) {
                      FUN_00402170();
                      cVar2 = FUN_00426ed0();
                      if (cVar2 == '\0') break;
                      FUN_0044ddc0();
                      puStack_180 = (undefined1 *)FUN_005e9570();
                      if (puStack_180 != (undefined1 *)0x0) {
                        *puStack_180 = 0;
                      }
                      FUN_0044dda0();
                    }
                    puStack_3b0 = (undefined1 *)&pCStack_670;
                    pCStack_674 = (CMFCColorMenuButton *)0x746c44;
                    pCStack_678 = (CMFCColorMenuButton *)0x4682ab;
                    FUN_004054a0();
                    pCStack_674 = (CMFCColorMenuButton *)0x4682b0;
                    FUN_004c3500();
                  }
                  *(CMFCColorMenuButton **)(local_118 + 0x9b0) = param_1;
                  pCVar8 = (CMFCColorMenuButton *)0x1;
                }
              }
              break;
            case (CMFCColorMenuButton *)0x7:
              cVar2 = FUN_00482730();
              if (cVar2 == '\0') {
                pCVar8 = (CMFCColorMenuButton *)0x0;
              }
              else {
                *(int *)(local_118 + 500) = -*(int *)(local_118 + 500);
                CMFCColorMenuButton::Initialize(local_118);
                (**(code **)(*(int *)local_118 + 0x138))();
                pCStack_668 = (CMFCColorMenuButton *)0x3;
                pCStack_66c = (CMFCColorMenuButton *)0x468341;
                (**(code **)(*(int *)local_118 + 0x13c))();
                pCStack_668 = (CMFCColorMenuButton *)0x468354;
                FUN_0047bd30();
                thunk_FUN_006e5750();
                FUN_00631910();
                *(int *)(local_118 + 0x1a4) = 200;
                *(int *)(local_118 + 0x1a8) = 0;
                puStack_3b4 = (undefined1 *)&pCStack_670;
                pCStack_674 = (CMFCColorMenuButton *)0x746c6c;
                pCStack_678 = (CMFCColorMenuButton *)0x46839a;
                FUN_004054a0();
                pCStack_674 = (CMFCColorMenuButton *)0x46839f;
                FUN_004c3570();
                puStack_3b8 = (undefined1 *)&pCStack_670;
                pCStack_674 = (CMFCColorMenuButton *)0x746c7c;
                pCStack_678 = (CMFCColorMenuButton *)0x4683b7;
                FUN_004054a0();
                pCStack_674 = (CMFCColorMenuButton *)0x4683bc;
                FUN_004c3500();
                *(CMFCColorMenuButton **)(local_118 + 0x9b0) = param_1;
                pCVar8 = (CMFCColorMenuButton *)0x1;
              }
              break;
            case (CMFCColorMenuButton *)0x8:
              if (((((*(int *)(local_118 + 0x1a4) == 0) || (*(int *)(local_118 + 0x1a4) == 1)) ||
                   (*(int *)(local_118 + 0x1a4) == 2)) || (cVar2 = FUN_00467700(), cVar2 != '\0'))
                 && (*(int *)(local_118 + 0x1a8) = 0, *(int *)(local_118 + 0x1a8) == 0)) {
                cVar2 = FUN_00482730();
                if (cVar2 == '\0') {
                  pCVar8 = (CMFCColorMenuButton *)0x0;
                }
                else {
                  FUN_00467210();
                  CMFCColorMenuButton::Initialize(local_118);
                  FUN_00466500();
                  (**(code **)(*(int *)local_118 + 0x138))();
                  pCStack_668 = (CMFCColorMenuButton *)0x3;
                  pCStack_66c = (CMFCColorMenuButton *)0x4684bd;
                  (**(code **)(*(int *)local_118 + 0x13c))();
                  pCStack_66c = (CMFCColorMenuButton *)0x0;
                  pCStack_670 = (CMFCColorMenuButton *)0x0;
                  pCStack_674 = (CMFCColorMenuButton *)0x8;
                  pCStack_678 = (CMFCColorMenuButton *)0x4684ce;
                  FUN_0047bd30();
                  pCStack_670 = (CMFCColorMenuButton *)0x4684d3;
                  pCStack_670 = (CMFCColorMenuButton *)thunk_FUN_006e5750();
                  pCStack_674 = (CMFCColorMenuButton *)0x4684df;
                  FUN_00631910();
                  pCStack_66c = (CMFCColorMenuButton *)0x0;
                  pCStack_670 = (CMFCColorMenuButton *)0x8;
                  pCStack_674 = (CMFCColorMenuButton *)0x4684ee;
                  iVar3 = FUN_0047bcc0();
                  *(int *)(local_118 + 0x230) = iVar3 * 1000;
                  pCStack_66c = (CMFCColorMenuButton *)0x1;
                  pCStack_670 = (CMFCColorMenuButton *)0x8;
                  pCStack_674 = (CMFCColorMenuButton *)0x46850f;
                  iVar3 = FUN_0047bcc0();
                  *(int *)(local_118 + 0x23c) = iVar3;
                  puStack_3bc = (undefined1 *)&pcStack_680;
                  pcStack_684 = "character/swordman/effect/animation/tripleslash/slash1.ani";
                  pcStack_688 = (char *)0x468530;
                  FUN_004054a0();
                  pcStack_684 = (char *)0x468543;
                  iStack_1e0 = (**(code **)(*(int *)local_118 + 0x78))();
                  *(undefined1 *)(iStack_1e0 + 0xe0) = 1;
                  *(undefined1 *)(iStack_1e0 + 0x80) = 1;
                  puStack_3c0 = (undefined1 *)&pcStack_698;
                  pcStack_69c = "character/swordman/effect/animation/tripleslash/move1.ani";
                  uStack_6a0 = 0x468584;
                  iStack_144 = iStack_1e0;
                  FUN_004054a0();
                  pcStack_69c = (char *)0x468597;
                  iStack_1e4 = (**(code **)(*(int *)local_118 + 0x78))();
                  *(undefined1 *)(iStack_1e4 + 0xe0) = 1;
                  *(undefined1 *)(iStack_1e4 + 0x80) = 1;
                  *(int *)(local_118 + 0x1a4) = 0x10e;
                  *(int *)(local_118 + 0x1a8) = 1;
                  puStack_3c4 = (undefined1 *)&pCStack_670;
                  pCStack_674 = (CMFCColorMenuButton *)0x746d24;
                  pCStack_678 = (CMFCColorMenuButton *)0x4685f8;
                  iStack_144 = iStack_1e4;
                  FUN_004054a0();
                  pCStack_674 = (CMFCColorMenuButton *)0x4685fd;
                  FUN_004c3500();
                  puStack_3c8 = (undefined1 *)&pCStack_670;
                  pCStack_674 = (CMFCColorMenuButton *)0x746d48;
                  pCStack_678 = (CMFCColorMenuButton *)0x468615;
                  FUN_004054a0();
                  pCStack_674 = (CMFCColorMenuButton *)0x46861a;
                  FUN_004c3500();
                  *(CMFCColorMenuButton **)(local_118 + 0x9b0) = param_1;
                  pCVar8 = (CMFCColorMenuButton *)0x1;
                }
              }
              else {
                if ((*(int *)(local_118 + 0x1a4) == 0x10e) &&
                   (piVar7 = (int *)(**(code **)(*(int *)local_118 + 0x9c))(), 3 < *piVar7)) {
                  if (*(int *)(local_118 + 0x1a8) == 1) {
                    CMFCColorMenuButton::Initialize(local_118);
                    FUN_00466500();
                    (**(code **)(*(int *)local_118 + 0x138))();
                    pCStack_668 = (CMFCColorMenuButton *)0x3;
                    pCStack_66c = (CMFCColorMenuButton *)0x4686c8;
                    (**(code **)(*(int *)local_118 + 0x13c))();
                    pCStack_66c = (CMFCColorMenuButton *)0x0;
                    pCStack_670 = (CMFCColorMenuButton *)0x0;
                    pCStack_674 = (CMFCColorMenuButton *)0x8;
                    pCStack_678 = (CMFCColorMenuButton *)0x4686d9;
                    FUN_0047bd30();
                    pCStack_670 = (CMFCColorMenuButton *)0x4686de;
                    pCStack_670 = (CMFCColorMenuButton *)thunk_FUN_006e5750();
                    pCStack_674 = (CMFCColorMenuButton *)0x4686ea;
                    FUN_00631910();
                    pCStack_66c = (CMFCColorMenuButton *)0x0;
                    pCStack_670 = (CMFCColorMenuButton *)0x8;
                    pCStack_674 = (CMFCColorMenuButton *)0x4686f9;
                    iVar3 = FUN_0047bcc0();
                    *(int *)(local_118 + 0x230) = iVar3 * 1000;
                    pCStack_66c = (CMFCColorMenuButton *)0x1;
                    pCStack_670 = (CMFCColorMenuButton *)0x8;
                    pCStack_674 = (CMFCColorMenuButton *)0x46871a;
                    iVar3 = FUN_0047bcc0();
                    *(int *)(local_118 + 0x23c) = iVar3;
                    puStack_3cc = (undefined1 *)&pcStack_680;
                    pcStack_684 = "character/swordman/effect/animation/tripleslash/slash2.ani";
                    pcStack_688 = (char *)0x46873b;
                    FUN_004054a0();
                    pcStack_684 = (char *)0x46874e;
                    iStack_1e8 = (**(code **)(*(int *)local_118 + 0x78))();
                    *(undefined1 *)(iStack_1e8 + 0xe0) = 1;
                    *(undefined1 *)(iStack_1e8 + 0x80) = 1;
                    puStack_3d0 = (undefined1 *)&pcStack_698;
                    pcStack_69c = "character/swordman/effect/animation/tripleslash/move2.ani";
                    uStack_6a0 = 0x46878f;
                    iStack_148 = iStack_1e8;
                    FUN_004054a0();
                    pcStack_69c = (char *)0x4687a2;
                    iStack_1ec = (**(code **)(*(int *)local_118 + 0x78))();
                    *(undefined1 *)(iStack_1ec + 0xe0) = 1;
                    *(undefined1 *)(iStack_1ec + 0x80) = 1;
                    *(int *)(local_118 + 0x1a4) = 0x10e;
                    *(int *)(local_118 + 0x1a8) = 2;
                    puStack_3d4 = (undefined1 *)&pCStack_670;
                    pCStack_674 = (CMFCColorMenuButton *)0x746dec;
                    pCStack_678 = (CMFCColorMenuButton *)0x468803;
                    iStack_148 = iStack_1ec;
                    FUN_004054a0();
                    pCStack_674 = (CMFCColorMenuButton *)0x468808;
                    FUN_004c3500();
                    puStack_3d8 = (undefined1 *)&pCStack_670;
                    pCStack_674 = (CMFCColorMenuButton *)0x746e10;
                    pCStack_678 = (CMFCColorMenuButton *)0x468820;
                    FUN_004054a0();
                    pCStack_674 = (CMFCColorMenuButton *)0x468825;
                    FUN_004c3500();
                    *(CMFCColorMenuButton **)(local_118 + 0x9b0) = param_1;
                    ExceptionList = local_10;
                    return (CMFCColorMenuButton *)0x1;
                  }
                  if (*(int *)(local_118 + 0x1a8) == 2) {
                    CMFCColorMenuButton::Initialize(local_118);
                    FUN_00466500();
                    (**(code **)(*(int *)local_118 + 0x138))();
                    pCStack_668 = (CMFCColorMenuButton *)0x3;
                    pCStack_66c = (CMFCColorMenuButton *)0x4688a3;
                    (**(code **)(*(int *)local_118 + 0x13c))();
                    pCStack_66c = local_118;
                    pCStack_670 = (CMFCColorMenuButton *)0x4688b0;
                    cVar2 = FUN_00455140();
                    if (cVar2 == '\0') {
                      pCStack_66c = (CMFCColorMenuButton *)0x0;
                      pCStack_670 = (CMFCColorMenuButton *)0x1;
                      pCStack_674 = (CMFCColorMenuButton *)0x8;
                      pCStack_678 = (CMFCColorMenuButton *)0x4688f0;
                      FUN_0047bd30();
                      pCStack_670 = (CMFCColorMenuButton *)0x4688f5;
                      pCStack_670 = (CMFCColorMenuButton *)thunk_FUN_006e5750();
                      pCStack_674 = (CMFCColorMenuButton *)0x468901;
                      FUN_00631910();
                    }
                    else {
                      pCStack_66c = (CMFCColorMenuButton *)0x0;
                      pCStack_670 = (CMFCColorMenuButton *)0x0;
                      pCStack_674 = (CMFCColorMenuButton *)0x8;
                      pCStack_678 = (CMFCColorMenuButton *)0x4688cb;
                      FUN_0047bd30();
                      pCStack_670 = (CMFCColorMenuButton *)0x4688d0;
                      pCStack_670 = (CMFCColorMenuButton *)thunk_FUN_006e5750();
                      pCStack_674 = (CMFCColorMenuButton *)0x4688dc;
                      FUN_00631910();
                    }
                    pCStack_66c = (CMFCColorMenuButton *)0x0;
                    pCStack_670 = (CMFCColorMenuButton *)0x8;
                    pCStack_674 = (CMFCColorMenuButton *)0x468911;
                    iVar3 = FUN_0047bcc0();
                    *(int *)(local_118 + 0x230) = iVar3 * 1000;
                    pCStack_66c = (CMFCColorMenuButton *)0x1;
                    pCStack_670 = (CMFCColorMenuButton *)0x8;
                    pCStack_674 = (CMFCColorMenuButton *)0x468932;
                    iVar3 = FUN_0047bcc0();
                    *(int *)(local_118 + 0x23c) = iVar3;
                    puStack_3dc = (undefined1 *)&pcStack_680;
                    pcStack_684 = "character/swordman/effect/animation/tripleslash/slash3.ani";
                    pcStack_688 = (char *)0x468953;
                    FUN_004054a0();
                    pcStack_684 = (char *)0x468966;
                    iStack_1f0 = (**(code **)(*(int *)local_118 + 0x78))();
                    *(undefined1 *)(iStack_1f0 + 0xe0) = 1;
                    *(undefined1 *)(iStack_1f0 + 0x80) = 1;
                    puStack_3e0 = (undefined1 *)&pcStack_698;
                    pcStack_69c = "character/swordman/effect/animation/tripleslash/move1.ani";
                    uStack_6a0 = 0x4689a7;
                    iStack_14c = iStack_1f0;
                    FUN_004054a0();
                    pcStack_69c = (char *)0x4689ba;
                    iStack_1f4 = (**(code **)(*(int *)local_118 + 0x78))();
                    *(undefined1 *)(iStack_1f4 + 0xe0) = 1;
                    *(undefined1 *)(iStack_1f4 + 0x80) = 1;
                    *(int *)(local_118 + 0x1a4) = 0x10e;
                    *(int *)(local_118 + 0x1a8) = 3;
                    puStack_3e4 = (undefined1 *)&pCStack_670;
                    pCStack_674 = (CMFCColorMenuButton *)0x746eb4;
                    pCStack_678 = (CMFCColorMenuButton *)0x468a1b;
                    iStack_14c = iStack_1f4;
                    FUN_004054a0();
                    pCStack_674 = (CMFCColorMenuButton *)0x468a20;
                    FUN_004c3500();
                    puStack_3e8 = (undefined1 *)&pCStack_670;
                    pCStack_674 = (CMFCColorMenuButton *)0x746ed8;
                    pCStack_678 = (CMFCColorMenuButton *)0x468a38;
                    FUN_004054a0();
                    pCStack_674 = (CMFCColorMenuButton *)0x468a3d;
                    FUN_004c3500();
                    *(CMFCColorMenuButton **)(local_118 + 0x9b0) = param_1;
                    ExceptionList = local_10;
                    return (CMFCColorMenuButton *)0x1;
                  }
                  if (*(int *)(local_118 + 0x1a8) == 3) {
                    cStack_136 = '\0';
                    cVar2 = FUN_004679f0();
                    if ((cVar2 == '\0') || (*(int *)(local_118 + 0xac0) != 1)) {
                      cVar2 = FUN_00467950();
                      if ((cVar2 != '\0') &&
                         ((*(int *)(local_118 + 0xac0) == 1 &&
                          (iStack_188 = FUN_006ca800(), iStack_188 != 0)))) {
                        pCStack_668 = (CMFCColorMenuButton *)0x468b5a;
                        game_loop_helper_e9240();
                        pCStack_668 = (CMFCColorMenuButton *)0x468b61;
                        FUN_005d9da0();
                        piVar7 = (int *)game_get_flag_object_01a70();
                        if (*piVar7 <= *(int *)(iStack_188 + 8)) {
                          cStack_136 = '\x01';
                        }
                      }
                    }
                    else {
                      iStack_184 = FUN_006ca800();
                      if (iStack_184 != 0) {
                        pCStack_668 = (CMFCColorMenuButton *)0x468ad3;
                        game_loop_helper_e9240();
                        pCStack_668 = (CMFCColorMenuButton *)0x468ada;
                        FUN_005d9da0();
                        piVar7 = (int *)game_get_flag_object_01a70();
                        if (*piVar7 <= *(int *)(iStack_184 + 8)) {
                          cStack_136 = '\x01';
                        }
                      }
                    }
                    if (cStack_136 != '\0') {
                      CMFCColorMenuButton::Initialize(local_118);
                      FUN_00466500();
                      (**(code **)(*(int *)local_118 + 0x138))();
                      pCStack_668 = (CMFCColorMenuButton *)0x3;
                      pCStack_66c = (CMFCColorMenuButton *)0x468bda;
                      (**(code **)(*(int *)local_118 + 0x13c))();
                      pCStack_66c = (CMFCColorMenuButton *)0x0;
                      pCStack_670 = (CMFCColorMenuButton *)0x1;
                      pCStack_674 = (CMFCColorMenuButton *)0x8;
                      pCStack_678 = (CMFCColorMenuButton *)0x468beb;
                      FUN_0047bd30();
                      pCStack_670 = (CMFCColorMenuButton *)0x468bf0;
                      pCStack_670 = (CMFCColorMenuButton *)thunk_FUN_006e5750();
                      pCStack_674 = (CMFCColorMenuButton *)0x468bfc;
                      FUN_00631910();
                      pCStack_66c = (CMFCColorMenuButton *)0x0;
                      pCStack_670 = (CMFCColorMenuButton *)0x8;
                      pCStack_674 = (CMFCColorMenuButton *)0x468c0b;
                      iVar3 = FUN_0047bcc0();
                      *(int *)(local_118 + 0x230) = iVar3 * 1000;
                      pCStack_66c = (CMFCColorMenuButton *)0x1;
                      pCStack_670 = (CMFCColorMenuButton *)0x8;
                      pCStack_674 = (CMFCColorMenuButton *)0x468c2c;
                      iVar3 = FUN_0047bcc0();
                      *(int *)(local_118 + 0x23c) = iVar3;
                      puStack_3ec = (undefined1 *)&pcStack_680;
                      pcStack_684 = "character/swordman/effect/animation/tripleslash/slash4.ani";
                      pcStack_688 = (char *)0x468c4d;
                      FUN_004054a0();
                      pcStack_684 = (char *)0x468c60;
                      iStack_1f8 = (**(code **)(*(int *)local_118 + 0x78))();
                      *(undefined1 *)(iStack_1f8 + 0xe0) = 1;
                      *(undefined1 *)(iStack_1f8 + 0x80) = 1;
                      puStack_3f0 = (undefined1 *)&pcStack_698;
                      pcStack_69c = "character/swordman/effect/animation/tripleslash/move2.ani";
                      uStack_6a0 = 0x468ca1;
                      iStack_150 = iStack_1f8;
                      FUN_004054a0();
                      pcStack_69c = (char *)0x468cb4;
                      iVar3 = (**(code **)(*(int *)local_118 + 0x78))();
                      *(undefined1 *)(iVar3 + 0xe0) = 1;
                      *(undefined1 *)(iVar3 + 0x80) = 1;
                      *(int *)(local_118 + 0x1a4) = 0x10e;
                      *(int *)(local_118 + 0x1a8) = 4;
                      *(CMFCColorMenuButton **)(local_118 + 0x9b0) = param_1;
                      ExceptionList = local_10;
                      return (CMFCColorMenuButton *)0x1;
                    }
                  }
                  else if (*(int *)(local_118 + 0x1a8) == 4) {
                    pCStack_160 = (CMFCColorMenuButton *)0x0;
                    uStack_15c = 0xffffffff;
                    cVar2 = FUN_004679f0();
                    if ((cVar2 == '\0') || (*(int *)(local_118 + 0xac0) != 1)) {
                      cVar2 = FUN_00467950();
                      if ((cVar2 != '\0') && (*(int *)(local_118 + 0xac0) == 1)) {
                        iStack_204 = FUN_006ca800();
                        pCStack_668 = (CMFCColorMenuButton *)0x468e22;
                        game_loop_helper_e9240();
                        pCStack_668 = (CMFCColorMenuButton *)0x468e29;
                        FUN_005d9da0();
                        piVar7 = (int *)game_get_flag_object_01a70();
                        if (*piVar7 <= *(int *)(iStack_204 + 8)) {
                          pCStack_160 = (CMFCColorMenuButton *)0xd;
                          uStack_15c = 1;
                        }
                      }
                    }
                    else {
                      iStack_200 = FUN_006ca800();
                      pCStack_668 = (CMFCColorMenuButton *)0x468d97;
                      game_loop_helper_e9240();
                      pCStack_668 = (CMFCColorMenuButton *)0x468d9e;
                      FUN_005d9da0();
                      piVar7 = (int *)game_get_flag_object_01a70();
                      if (*piVar7 <= *(int *)(iStack_200 + 8)) {
                        pCStack_160 = (CMFCColorMenuButton *)0x4;
                        uStack_15c = 3;
                      }
                    }
                    if (0 < (int)pCStack_160) {
                      CMFCColorMenuButton::Initialize(local_118);
                      FUN_00466500();
                      (**(code **)(*(int *)local_118 + 0x138))();
                      pCStack_668 = (CMFCColorMenuButton *)0x3;
                      pCStack_66c = (CMFCColorMenuButton *)0x468eb7;
                      (**(code **)(*(int *)local_118 + 0x13c))();
                      pCStack_66c = (CMFCColorMenuButton *)uStack_15c;
                      pCStack_670 = pCStack_160;
                      pCStack_674 = (CMFCColorMenuButton *)0x468ed0;
                      fVar9 = (float10)FUN_0047bd30();
                      fStack_208 = (float)fVar9;
                      *(int *)(local_118 + 0x7e0) = (int)(fStack_208 + 300.0);
                      pCStack_66c = (CMFCColorMenuButton *)0x0;
                      pCStack_670 = (CMFCColorMenuButton *)0x2;
                      pCStack_674 = (CMFCColorMenuButton *)0x8;
                      pCStack_678 = (CMFCColorMenuButton *)0x468f07;
                      FUN_0047bd30();
                      pCStack_670 = (CMFCColorMenuButton *)0x468f0c;
                      pCStack_670 = (CMFCColorMenuButton *)thunk_FUN_006e5750();
                      pCStack_674 = (CMFCColorMenuButton *)0x468f18;
                      FUN_00631910();
                      pCStack_66c = (CMFCColorMenuButton *)0x0;
                      pCStack_670 = (CMFCColorMenuButton *)0x8;
                      pCStack_674 = (CMFCColorMenuButton *)0x468f27;
                      iVar3 = FUN_0047bcc0();
                      *(int *)(local_118 + 0x230) = iVar3 * 1000;
                      pCStack_66c = (CMFCColorMenuButton *)0x1;
                      pCStack_670 = (CMFCColorMenuButton *)0x8;
                      pCStack_674 = (CMFCColorMenuButton *)0x468f48;
                      iVar3 = FUN_0047bcc0();
                      *(int *)(local_118 + 0x23c) = iVar3;
                      puStack_3f4 = (undefined1 *)&pcStack_680;
                      pcStack_684 = "character/swordman/effect/animation/tripleslash/slash5.ani";
                      pcStack_688 = (char *)0x468f69;
                      FUN_004054a0();
                      pcStack_684 = (char *)0x468f7c;
                      iStack_20c = (**(code **)(*(int *)local_118 + 0x78))();
                      *(undefined1 *)(iStack_20c + 0xe0) = 1;
                      *(undefined1 *)(iStack_20c + 0x80) = 1;
                      puStack_3f8 = (undefined1 *)&pcStack_698;
                      pcStack_69c = "character/swordman/effect/animation/tripleslash/move1.ani";
                      uStack_6a0 = 0x468fbd;
                      iStack_154 = iStack_20c;
                      FUN_004054a0();
                      pcStack_69c = (char *)0x468fd0;
                      iVar3 = (**(code **)(*(int *)local_118 + 0x78))();
                      *(undefined1 *)(iVar3 + 0xe0) = 1;
                      *(undefined1 *)(iVar3 + 0x80) = 1;
                      *(int *)(local_118 + 0x1a4) = 0x10e;
                      *(int *)(local_118 + 0x1a8) = 5;
                      *(CMFCColorMenuButton **)(local_118 + 0x9b0) = param_1;
                      ExceptionList = local_10;
                      return (CMFCColorMenuButton *)0x1;
                    }
                  }
                }
                pCVar8 = (CMFCColorMenuButton *)0x0;
              }
              break;
            case (CMFCColorMenuButton *)0x9:
              if (((((*(int *)(local_118 + 0x1a4) == 0) || (*(int *)(local_118 + 0x1a4) == 1)) ||
                   (*(int *)(local_118 + 0x1a4) == 2)) || (cVar2 = FUN_00467700(), cVar2 != '\0'))
                 && (*(int *)(local_118 + 0x1a8) = 0, *(int *)(local_118 + 0x1a8) == 0)) {
                cVar2 = FUN_00482730();
                if (cVar2 == '\0') {
                  pCVar8 = (CMFCColorMenuButton *)0x0;
                }
                else {
                  FUN_00467210();
                  CMFCColorMenuButton::Initialize(local_118);
                  FUN_00466500();
                  (**(code **)(*(int *)local_118 + 0x138))();
                  pCStack_668 = (CMFCColorMenuButton *)0x3;
                  pCStack_66c = (CMFCColorMenuButton *)0x46911c;
                  (**(code **)(*(int *)local_118 + 0x13c))();
                  pCStack_668 = (CMFCColorMenuButton *)0x46912f;
                  FUN_0047bd30();
                  thunk_FUN_006e5750();
                  FUN_00631910();
                  *(int *)(local_118 + 0x1a4) = 0x104;
                  *(int *)(local_118 + 0x1a8) = 1;
                  *(CMFCColorMenuButton **)(local_118 + 0x9b0) = param_1;
                  puStack_3fc = (undefined1 *)&pCStack_670;
                  pCStack_674 = (CMFCColorMenuButton *)0x746ff4;
                  pCStack_678 = (CMFCColorMenuButton *)0x469184;
                  FUN_004054a0();
                  pCStack_674 = (CMFCColorMenuButton *)0x469189;
                  FUN_004c3500();
                  pCVar8 = (CMFCColorMenuButton *)0x1;
                }
              }
              else {
                if (*(int *)(local_118 + 0x1a4) == 0x104) {
                  piVar7 = (int *)(**(code **)(*(int *)local_118 + 0x9c))();
                  piVar5 = (int *)(**(code **)(*(int *)local_118 + 0x94))();
                  if ((*piVar7 == *piVar5 + -1) && (*(int *)(local_118 + 0x1a8) == 1)) {
                    iStack_164 = 0;
                    pCStack_170 = (CMFCColorMenuButton *)0xffffffff;
                    cVar2 = FUN_004679f0();
                    if (cVar2 == '\0') {
                      cVar2 = FUN_00467950();
                      if ((cVar2 != '\0') && (iStack_190 = FUN_006ca800(), iStack_190 != 0)) {
                        pCStack_668 = (CMFCColorMenuButton *)0x4692df;
                        game_loop_helper_e9240();
                        pCStack_668 = (CMFCColorMenuButton *)0x4692e6;
                        FUN_005d9da0();
                        piVar7 = (int *)game_get_flag_object_01a70();
                        if (*piVar7 <= *(int *)(iStack_190 + 8)) {
                          iStack_164 = 0xd;
                          pCStack_170 = (CMFCColorMenuButton *)0x4;
                        }
                      }
                    }
                    else {
                      iStack_18c = FUN_006ca800();
                      if (iStack_18c != 0) {
                        pCStack_668 = (CMFCColorMenuButton *)0x46925a;
                        game_loop_helper_e9240();
                        pCStack_668 = (CMFCColorMenuButton *)0x469261;
                        FUN_005d9da0();
                        piVar7 = (int *)game_get_flag_object_01a70();
                        if (*piVar7 <= *(int *)(iStack_18c + 8)) {
                          iStack_164 = 4;
                          pCStack_170 = (CMFCColorMenuButton *)0x8;
                        }
                      }
                    }
                    if (iStack_164 != 0) {
                      (**(code **)(*(int *)local_118 + 0x138))();
                      pCStack_668 = (CMFCColorMenuButton *)0x3;
                      pCStack_66c = (CMFCColorMenuButton *)0x469354;
                      (**(code **)(*(int *)local_118 + 0x13c))();
                      pCStack_66c = (CMFCColorMenuButton *)0x0;
                      pCStack_670 = (CMFCColorMenuButton *)0x0;
                      pCStack_674 = param_1;
                      pCStack_678 = (CMFCColorMenuButton *)0x469367;
                      FUN_0047bd30();
                      pCStack_670 = (CMFCColorMenuButton *)0x46936c;
                      pCStack_670 = (CMFCColorMenuButton *)thunk_FUN_006e5750();
                      pCStack_674 = (CMFCColorMenuButton *)0x469378;
                      FUN_00631910();
                      pCStack_66c = (CMFCColorMenuButton *)0x0;
                      pCStack_670 = pCStack_170;
                      pCStack_674 = (CMFCColorMenuButton *)iStack_164;
                      pCStack_678 = (CMFCColorMenuButton *)0x469393;
                      FUN_0047bd30();
                      pCStack_670 = (CMFCColorMenuButton *)0x469398;
                      pCStack_670 = (CMFCColorMenuButton *)thunk_FUN_006e5750();
                      pCStack_674 = (CMFCColorMenuButton *)0x4693a4;
                      FUN_00631910();
                      pCStack_66c = (CMFCColorMenuButton *)0x1;
                      pCStack_670 = (CMFCColorMenuButton *)0x4693bc;
                      (**(code **)(*(int *)local_118 + 0x8c))();
                      pCStack_670 = (CMFCColorMenuButton *)0x4693cf;
                      (**(code **)(*(int *)local_118 + 0x58))();
                      pCStack_670 = (CMFCColorMenuButton *)0x4693d6;
                      iVar3 = FUN_0062fc30();
                      pCStack_670 = *(CMFCColorMenuButton **)(iVar3 + 0x44);
                      pCStack_674 = (CMFCColorMenuButton *)0x4693f0;
                      (**(code **)(*(int *)local_118 + 0x90))();
                      FUN_00405270();
                      game_loop_helper_e9240();
                      iVar3 = game_loop_helper_cc840();
                      if (*(int *)(iVar3 + 0x140) == 1) {
                        puStack_400 = (undefined1 *)&pCStack_670;
                        pCStack_674 = (CMFCColorMenuButton *)0x747018;
                        pCStack_678 = (CMFCColorMenuButton *)0x469436;
                        FUN_004054a0();
                        pCStack_674 = (CMFCColorMenuButton *)0x469449;
                        iStack_214 = (**(code **)(*(int *)local_118 + 0x78))();
                        *(undefined1 *)(iStack_214 + 0xe0) = 1;
                        puStack_404 = (undefined1 *)&pcStack_688;
                        pcStack_68c = 
                        "character/swordman/effect/animation/momentaryslash/momentaryslash_none_upper.ani"
                        ;
                        uStack_690 = 0x469471;
                        FUN_004054a0();
                        pcStack_68c = (char *)0x469484;
                        iStack_218 = (**(code **)(*(int *)local_118 + 0x78))();
                        *(undefined1 *)(iStack_218 + 0xe0) = 1;
                        puStack_408 = (undefined1 *)&uStack_6a0;
                        pcStack_6a4 = 
                        "character/swordman/effect/animation/momentaryslash/momentaryslash_red_ldodge_upper.ani"
                        ;
                        uStack_6a8 = 0x4694ac;
                        FUN_004054a0();
                        pcStack_6a4 = (char *)0x4694bf;
                        iStack_21c = (**(code **)(*(int *)local_118 + 0x78))();
                        *(undefined1 *)(iStack_21c + 0xe0) = 1;
                        puStack_40c = (undefined1 *)&uStack_6b8;
                        FUN_004054a0();
                        iStack_220 = (**(code **)(*(int *)local_118 + 0x78))();
                        *(undefined1 *)(iStack_220 + 0xe0) = 1;
                      }
                      else {
                        FUN_00405270();
                        game_loop_helper_e9240();
                        iVar3 = game_loop_helper_cc840();
                        if (*(int *)(iVar3 + 0x140) == 5) {
                          puStack_410 = (undefined1 *)&pCStack_670;
                          pCStack_674 = (CMFCColorMenuButton *)0x747178;
                          pCStack_678 = (CMFCColorMenuButton *)0x469557;
                          FUN_004054a0();
                          pCStack_674 = (CMFCColorMenuButton *)0x46956a;
                          iStack_224 = (**(code **)(*(int *)local_118 + 0x78))();
                          *(undefined1 *)(iStack_224 + 0xe0) = 1;
                          puStack_414 = (undefined1 *)&pcStack_688;
                          pcStack_68c = 
                          "character/swordman/effect/animation/momentaryslash/momentaryslash_none_upper.ani"
                          ;
                          uStack_690 = 0x469592;
                          FUN_004054a0();
                          pcStack_68c = (char *)0x4695a5;
                          iStack_228 = (**(code **)(*(int *)local_118 + 0x78))();
                          *(undefined1 *)(iStack_228 + 0xe0) = 1;
                          puStack_418 = (undefined1 *)&uStack_6a0;
                          pcStack_6a4 = 
                          "character/swordman/effect/animation/momentaryslash/momentaryslash_white_ldodge_upper.ani"
                          ;
                          uStack_6a8 = 0x4695cd;
                          FUN_004054a0();
                          pcStack_6a4 = (char *)0x4695e0;
                          iStack_22c = (**(code **)(*(int *)local_118 + 0x78))();
                          *(undefined1 *)(iStack_22c + 0xe0) = 1;
                          puStack_41c = (undefined1 *)&uStack_6b8;
                          FUN_004054a0();
                          iStack_230 = (**(code **)(*(int *)local_118 + 0x78))();
                          *(undefined1 *)(iStack_230 + 0xe0) = 1;
                        }
                      }
                      *(int *)(local_118 + 0x1a4) = 0x104;
                      *(int *)(local_118 + 0x1a8) = 2;
                      puStack_420 = (undefined1 *)&pCStack_670;
                      pCStack_674 = (CMFCColorMenuButton *)0x7472e4;
                      pCStack_678 = (CMFCColorMenuButton *)0x469663;
                      FUN_004054a0();
                      pCStack_674 = (CMFCColorMenuButton *)0x469668;
                      FUN_004c3500();
                      *(CMFCColorMenuButton **)(local_118 + 0x9b0) = param_1;
                      ExceptionList = local_10;
                      return (CMFCColorMenuButton *)0x1;
                    }
                  }
                }
                pCVar8 = (CMFCColorMenuButton *)0x0;
              }
              break;
            case (CMFCColorMenuButton *)0xb:
              if ((*(int *)(local_118 + 0x1a4) == 0xb) &&
                 (piVar7 = (int *)(**(code **)(*(int *)local_118 + 0x9c))(), 3 < *piVar7)) {
                cVar2 = FUN_00482730();
                if (cVar2 == '\0') {
                  pCVar8 = (CMFCColorMenuButton *)0x0;
                }
                else {
                  CMFCColorMenuButton::Initialize(local_118);
                  (**(code **)(*(int *)local_118 + 0x138))();
                  pCStack_668 = (CMFCColorMenuButton *)0x3;
                  pCStack_66c = (CMFCColorMenuButton *)0x469718;
                  (**(code **)(*(int *)local_118 + 0x13c))();
                  pCStack_66c = (CMFCColorMenuButton *)0x0;
                  pCStack_670 = (CMFCColorMenuButton *)0x0;
                  pCStack_674 = param_1;
                  pCStack_678 = (CMFCColorMenuButton *)0x46972b;
                  FUN_0047bd30();
                  pCStack_670 = (CMFCColorMenuButton *)0x469730;
                  pCStack_670 = (CMFCColorMenuButton *)thunk_FUN_006e5750();
                  pCStack_674 = (CMFCColorMenuButton *)0x46973c;
                  FUN_00631910();
                  uStack_234 = 4;
                  pCStack_66c = (CMFCColorMenuButton *)auStack_424;
                  pCStack_670 = (CMFCColorMenuButton *)0x46975f;
                  pCStack_66c = (CMFCColorMenuButton *)FUN_00489e00();
                  pCStack_670 = (CMFCColorMenuButton *)&uStack_234;
                  pCStack_674 = (CMFCColorMenuButton *)auStack_428;
                  pCStack_678 = (CMFCColorMenuButton *)0x46977f;
                  FUN_00489da0();
                  pCStack_670 = (CMFCColorMenuButton *)0x469786;
                  cVar2 = FUN_0040d2d0();
                  if (cVar2 != '\0') {
                    pCStack_66c = (CMFCColorMenuButton *)0x0;
                    pCStack_670 = (CMFCColorMenuButton *)0x4697a0;
                    iVar3 = FUN_00405270();
                    pCStack_66c = *(CMFCColorMenuButton **)(iVar3 + 4);
                    pCStack_670 = (CMFCColorMenuButton *)0x4697a9;
                    game_loop_helper_e9240();
                    pCStack_670 = (CMFCColorMenuButton *)0x4697b0;
                    iVar3 = game_loop_helper_cc840();
                    if (*(int *)(iVar3 + 0x140) == 5) {
                      pCStack_66c = (CMFCColorMenuButton *)0x2;
                      pCStack_670 = (CMFCColorMenuButton *)0x4;
                      pCStack_674 = (CMFCColorMenuButton *)0x4697c8;
                      FUN_0047bd30();
                      pCStack_66c = (CMFCColorMenuButton *)0x4697cd;
                      pCStack_66c = (CMFCColorMenuButton *)thunk_FUN_006e5750();
                      pCStack_670 = (CMFCColorMenuButton *)0x0;
                      pCStack_674 = param_1;
                      pCStack_678 = (CMFCColorMenuButton *)0x4697df;
                      FUN_0047bd30();
                      pCStack_670 = (CMFCColorMenuButton *)0x4697e4;
                      pCStack_670 = (CMFCColorMenuButton *)thunk_FUN_006e5750();
                      pCStack_674 = (CMFCColorMenuButton *)0x4697f0;
                      FUN_00631910();
                    }
                  }
                  pcStack_684 = "character/swordman/effect/animation/dashattackmultihit1.ani";
                  pcStack_688 = (char *)0x469806;
                  FUN_004054a0();
                  pcStack_684 = (char *)0x469819;
                  (**(code **)(*(int *)local_118 + 0x78))();
                  pcStack_69c = "character/swordman/effect/animation/dashattackmultihit2.ani";
                  uStack_6a0 = 0x46982f;
                  FUN_004054a0();
                  pcStack_69c = (char *)0x469842;
                  (**(code **)(*(int *)local_118 + 0x78))();
                  *(int *)(local_118 + 0x1a4) = 0x32;
                  *(int *)(local_118 + 0x1a8) = 0;
                  iVar3 = FUN_0047bcc0();
                  *(int *)(local_118 + 0x230) = iVar3 * 1000;
                  iVar3 = FUN_0047bcc0();
                  *(int *)(local_118 + 0x23c) = iVar3;
                  cVar2 = FUN_004679f0();
                  if (cVar2 != '\0') {
                    pCStack_674 = (CMFCColorMenuButton *)0x747380;
                    pCStack_678 = (CMFCColorMenuButton *)0x4698ca;
                    FUN_004054a0();
                    pCStack_674 = (CMFCColorMenuButton *)0x4698cf;
                    FUN_004c3500();
                    pCStack_668 = (CMFCColorMenuButton *)0x0;
                    pCStack_66c = (CMFCColorMenuButton *)0x0;
                    pCStack_670 = local_118;
                    pCStack_674 = (CMFCColorMenuButton *)0x46990b;
                    FUN_0042f340();
                  }
                  *(CMFCColorMenuButton **)(local_118 + 0x9b0) = param_1;
                  pCVar8 = (CMFCColorMenuButton *)0x1;
                }
              }
              else {
                pCVar8 = (CMFCColorMenuButton *)0x0;
              }
              break;
            case (CMFCColorMenuButton *)0x10:
              if ((*(int *)(local_118 + 0x1a4) == 3) ||
                 ((*(int *)(local_118 + 0x1a4) == 0xc &&
                  (piVar7 = (int *)(**(code **)(*(int *)local_118 + 0x9c))(), 2 < *piVar7)))) {
                cVar2 = FUN_00482730();
                if (cVar2 == '\0') {
                  pCVar8 = (CMFCColorMenuButton *)0x0;
                }
                else {
                  (**(code **)(*(int *)local_118 + 0x138))();
                  pCStack_668 = (CMFCColorMenuButton *)0x3;
                  pCStack_66c = (CMFCColorMenuButton *)0x4699b8;
                  (**(code **)(*(int *)local_118 + 0x13c))();
                  pCStack_66c = (CMFCColorMenuButton *)0x0;
                  pCStack_670 = (CMFCColorMenuButton *)0x0;
                  pCStack_674 = (CMFCColorMenuButton *)0x10;
                  pCStack_678 = (CMFCColorMenuButton *)0x4699c9;
                  FUN_0047bd30();
                  pCStack_670 = (CMFCColorMenuButton *)0x4699ce;
                  pCStack_670 = (CMFCColorMenuButton *)thunk_FUN_006e5750();
                  pCStack_674 = (CMFCColorMenuButton *)0x4699da;
                  FUN_00631910();
                  if ((*(int *)(local_118 + 0xab8) == 0) && (*(int *)(local_118 + 0xac0) == 1)) {
                    pCStack_66c = local_118;
                    pCStack_670 = (CMFCColorMenuButton *)0x469a0d;
                    cVar2 = FUN_00467900();
                    if (cVar2 != '\0') {
                      pCStack_66c = (CMFCColorMenuButton *)0xe;
                      pCStack_670 = local_118;
                      pCStack_674 = (CMFCColorMenuButton *)0x469a29;
                      iStack_194 = FUN_006ca800();
                      if (iStack_194 != 0) {
                        pCStack_66c = (CMFCColorMenuButton *)0x1;
                        pCStack_670 = (CMFCColorMenuButton *)0xe;
                        pCStack_674 = *(CMFCColorMenuButton **)(local_118 + 0xab8);
                        pCStack_678 = (CMFCColorMenuButton *)0x469a55;
                        game_loop_helper_e9240();
                        pCStack_678 = (CMFCColorMenuButton *)0x469a5c;
                        FUN_005d9da0();
                        pCStack_670 = (CMFCColorMenuButton *)0x469a68;
                        piVar7 = (int *)game_get_flag_object_01a70();
                        if (*piVar7 <= *(int *)(iStack_194 + 8)) {
                          pCStack_66c = (CMFCColorMenuButton *)0x0;
                          pCStack_670 = (CMFCColorMenuButton *)0x7;
                          pCStack_674 = (CMFCColorMenuButton *)0xe;
                          pCStack_678 = (CMFCColorMenuButton *)0x469a86;
                          FUN_0047bd30();
                          pCStack_670 = (CMFCColorMenuButton *)0x469a8b;
                          pCStack_670 = (CMFCColorMenuButton *)thunk_FUN_006e5750();
                          pCStack_674 = (CMFCColorMenuButton *)0x469a97;
                          FUN_00631910();
                          pCStack_66c = (CMFCColorMenuButton *)0xffffffff;
                          pCStack_670 = (CMFCColorMenuButton *)0x3;
                          pCStack_674 = (CMFCColorMenuButton *)0xe;
                          pCStack_678 = (CMFCColorMenuButton *)0x469aa8;
                          pCStack_670 = (CMFCColorMenuButton *)FUN_0047bcc0();
                          pCStack_674 = (CMFCColorMenuButton *)0x4;
                          pCStack_678 = (CMFCColorMenuButton *)0xe;
                          pcStack_67c = (char *)0x469ab8;
                          iVar3 = FUN_0047bcc0();
                          pCStack_674 = (CMFCColorMenuButton *)(iVar3 + 1);
                          pCStack_678 = (CMFCColorMenuButton *)0x469ac7;
                          FUN_0063c390();
                          uStack_238 = 0xffffffff;
                          pCStack_66c = (CMFCColorMenuButton *)&uStack_238;
                          pCStack_670 = (CMFCColorMenuButton *)0x469ae7;
                          FUN_0040d490();
                        }
                      }
                    }
                  }
                  pCStack_66c = (CMFCColorMenuButton *)0x4;
                  pCStack_670 = (CMFCColorMenuButton *)0x469b00;
                  (**(code **)(*(int *)local_118 + 0x8c))();
                  pCStack_198 = local_118 + 0x8e8;
                  pCStack_670 = (CMFCColorMenuButton *)0x469b1e;
                  iStack_168 = game_loop_helper_018d0();
                  pCStack_670 = (CMFCColorMenuButton *)0x469b2f;
                  iStack_23c = game_loop_helper_018b0();
                  for (; iStack_168 != iStack_23c; iStack_168 = iStack_168 + 4) {
                    iStack_240 = iStack_168;
                    pCStack_670 = *(CMFCColorMenuButton **)(local_118 + 0x914);
                    pCStack_674 = *(CMFCColorMenuButton **)(local_118 + 0x910);
                    pCStack_678 = (CMFCColorMenuButton *)0x469b87;
                    iVar3 = FUN_005e9570();
                    *(undefined4 *)(iVar3 + 0xe4) = 4;
                  }
                  *(int *)(local_118 + 0x1a4) = 0x118;
                  *(int *)(local_118 + 0x1a8) = 0;
                  *(int *)(local_118 + 0x238) = -500000;
                  *(int *)(local_118 + 0x244) = *(int *)(local_118 + 0x244) << 1;
                  *(int *)(local_118 + 0x230) = 300000;
                  *(int *)(local_118 + 0x234) = 0;
                  pcStack_688 = "character/swordman/effect/animation/jumpattackhold.ani";
                  pcStack_68c = (char *)0x469c12;
                  FUN_004054a0();
                  pcStack_688 = (char *)0x469c25;
                  iVar3 = (**(code **)(*(int *)local_118 + 0x78))();
                  *(int *)(iVar3 + 0x4c) = *(int *)(local_118 + 500);
                  *(CMFCColorMenuButton **)(local_118 + 0x9b0) = param_1;
                  pCVar8 = (CMFCColorMenuButton *)0x1;
                }
              }
              else {
                pCVar8 = (CMFCColorMenuButton *)0x0;
              }
              break;
            case (CMFCColorMenuButton *)0x11:
              if ((*(int *)(local_118 + 0x1a4) == 3) ||
                 ((*(int *)(local_118 + 0x1a4) == 0xc &&
                  (piVar7 = (int *)(**(code **)(*(int *)local_118 + 0x9c))(), 2 < *piVar7)))) {
                if (*(int *)(local_118 + 0x1a8) == 0) {
                  cVar2 = FUN_00482730();
                  if (cVar2 == '\0') {
                    pCVar8 = (CMFCColorMenuButton *)0x0;
                  }
                  else {
                    (**(code **)(*(int *)local_118 + 0x138))();
                    pCStack_668 = (CMFCColorMenuButton *)0x0;
                    pCStack_66c = (CMFCColorMenuButton *)0x469cfd;
                    (**(code **)(*(int *)local_118 + 0x13c))();
                    pCStack_668 = (CMFCColorMenuButton *)0x469d0e;
                    FUN_0047bd30();
                    thunk_FUN_006e5750();
                    FUN_00631910();
                    *(int *)(local_118 + 0x1a4) = 0xc;
                    *(int *)(local_118 + 0x1a8) = 1;
                    FUN_00466590();
                    cVar2 = FUN_006412c0();
                    if (cVar2 == '\0') {
                      pCStack_674 = (CMFCColorMenuButton *)0x747410;
                      pCStack_678 = (CMFCColorMenuButton *)0x469d8b;
                      FUN_004054a0();
                      pCStack_674 = (CMFCColorMenuButton *)0x469d90;
                      FUN_004c3500();
                    }
                    else {
                      pCStack_674 = (CMFCColorMenuButton *)0x7473e8;
                      pCStack_678 = (CMFCColorMenuButton *)0x469d6c;
                      FUN_004054a0();
                      pCStack_674 = (CMFCColorMenuButton *)0x469d71;
                      FUN_004c3500();
                    }
                    *(CMFCColorMenuButton **)(local_118 + 0x9b0) = param_1;
                    pCVar8 = (CMFCColorMenuButton *)0x1;
                  }
                }
                else {
                  piVar7 = (int *)(**(code **)(*(int *)local_118 + 0x9c))();
                  if ((*piVar7 < 3) || (*(int *)(local_118 + 0x1a8) < 1)) {
                    pCVar8 = (CMFCColorMenuButton *)0x0;
                  }
                  else {
                    (**(code **)(*(int *)local_118 + 0x138))();
                    pCStack_668 = (CMFCColorMenuButton *)0x0;
                    pCStack_66c = (CMFCColorMenuButton *)0x469e12;
                    (**(code **)(*(int *)local_118 + 0x13c))();
                    pCStack_66c = (CMFCColorMenuButton *)0x0;
                    pCStack_670 = (CMFCColorMenuButton *)0x0;
                    pCStack_674 = (CMFCColorMenuButton *)0x11;
                    pCStack_678 = (CMFCColorMenuButton *)0x469e23;
                    FUN_0047bd30();
                    pCStack_670 = (CMFCColorMenuButton *)0x469e28;
                    pCStack_670 = (CMFCColorMenuButton *)thunk_FUN_006e5750();
                    pCStack_674 = (CMFCColorMenuButton *)0x469e34;
                    FUN_00631910();
                    *(int *)(local_118 + 0x1a4) = 0xc;
                    pcStack_684 = 
                    "character/swordman/effect/animation/jumpattackmulti/jumpchainattacknormal_upper_effect.ani"
                    ;
                    pcStack_688 = (char *)0x469e59;
                    FUN_004054a0();
                    pcStack_684 = (char *)0x469e6c;
                    iStack_248 = (**(code **)(*(int *)local_118 + 0x78))();
                    *(undefined1 *)(iStack_248 + 0xe0) = 1;
                    *(int *)(local_118 + 0x1a8) = *(int *)(local_118 + 0x1a8) + 1;
                    FUN_00466590();
                    cVar2 = FUN_006412c0();
                    if (cVar2 == '\0') {
                      pCStack_674 = (CMFCColorMenuButton *)0x7474bc;
                      pCStack_678 = (CMFCColorMenuButton *)0x469ee6;
                      FUN_004054a0();
                      pCStack_674 = (CMFCColorMenuButton *)0x469eeb;
                      FUN_004c3500();
                    }
                    else {
                      pCStack_674 = (CMFCColorMenuButton *)0x747494;
                      pCStack_678 = (CMFCColorMenuButton *)0x469ec7;
                      FUN_004054a0();
                      pCStack_674 = (CMFCColorMenuButton *)0x469ecc;
                      FUN_004c3500();
                    }
                    *(CMFCColorMenuButton **)(local_118 + 0x9b0) = param_1;
                    pCVar8 = (CMFCColorMenuButton *)0x1;
                  }
                }
              }
              else {
                pCVar8 = (CMFCColorMenuButton *)0x0;
              }
              break;
            case (CMFCColorMenuButton *)0x12:
              cVar2 = FUN_00467700();
              if ((cVar2 == '\0') && (cVar2 = FUN_004666c0(), cVar2 == '\0')) {
                pCVar8 = (CMFCColorMenuButton *)0x0;
              }
              else {
                cVar2 = FUN_00482730();
                if (cVar2 == '\0') {
                  pCVar8 = (CMFCColorMenuButton *)0x0;
                }
                else {
                  FUN_00466500();
                  FUN_00467210();
                  CMFCColorMenuButton::Initialize(local_118);
                  *(int *)(local_118 + 0x1a8) = 0;
                  *(int *)(local_118 + 0x1a4) = 0x54;
                  (**(code **)(*(int *)local_118 + 0x138))();
                  pCStack_668 = *(CMFCColorMenuButton **)(local_118 + 0xab8);
                  pCStack_66c = (CMFCColorMenuButton *)0x46bc28;
                  iVar3 = FUN_005d9da0();
                  *(int *)(local_118 + 0x924) =
                       (*(int *)(iVar3 + 0xc4) * 1000) / *(int *)(local_118 + 0x750);
                  *(int *)(local_118 + 0x92c) = 0;
                  *(int *)(local_118 + 0x928) = 0;
                  pCStack_668 = (CMFCColorMenuButton *)0x46bc8e;
                  (**(code **)(*(int *)local_118 + 0x104))();
                  *(CMFCColorMenuButton **)(local_118 + 0x9b0) = param_1;
                  pCStack_674 = (CMFCColorMenuButton *)0x747784;
                  pCStack_678 = (CMFCColorMenuButton *)0x46bcb2;
                  FUN_004054a0();
                  pCStack_674 = (CMFCColorMenuButton *)0x46bcb7;
                  FUN_004c3500();
                  pCVar8 = (CMFCColorMenuButton *)0x1;
                }
              }
              break;
            case (CMFCColorMenuButton *)0x14:
              cVar2 = FUN_00467700();
              if ((cVar2 == '\0') && (cVar2 = FUN_004666c0(), cVar2 == '\0')) {
                pCVar8 = (CMFCColorMenuButton *)0x0;
              }
              else {
                cVar2 = FUN_00482730();
                if (cVar2 == '\0') {
                  pCVar8 = (CMFCColorMenuButton *)0x0;
                }
                else {
                  FUN_00466500();
                  FUN_00467210();
                  CMFCColorMenuButton::Initialize(local_118);
                  (**(code **)(*(int *)local_118 + 0x138))();
                  *(int *)(local_118 + 0x1a4) = 0x46;
                  *(int *)(local_118 + 0x1a8) = 0;
                  pCStack_668 = *(CMFCColorMenuButton **)(local_118 + 0xab8);
                  pCStack_66c = (CMFCColorMenuButton *)0x469fcf;
                  game_loop_helper_e9240();
                  pCStack_66c = (CMFCColorMenuButton *)0x469fd6;
                  iVar3 = FUN_005d9da0();
                  *(int *)(local_118 + 0x924) =
                       (*(int *)(iVar3 + 0xc4) * 1000) / *(int *)(local_118 + 0x750);
                  *(int *)(local_118 + 0x92c) = 0;
                  *(int *)(local_118 + 0x928) = 0;
                  pCStack_668 = (CMFCColorMenuButton *)0x46a03c;
                  (**(code **)(*(int *)local_118 + 0x90))();
                  pCStack_674 = (CMFCColorMenuButton *)0x7474e4;
                  pCStack_678 = (CMFCColorMenuButton *)0x46a052;
                  FUN_004054a0();
                  pCStack_674 = (CMFCColorMenuButton *)0x46a057;
                  FUN_004c3500();
                  *(CMFCColorMenuButton **)(local_118 + 0x9b0) = param_1;
                  pCVar8 = (CMFCColorMenuButton *)0x1;
                }
              }
              break;
            case (CMFCColorMenuButton *)0x15:
              cVar2 = FUN_00467700();
              if ((cVar2 == '\0') && (cVar2 = FUN_004666c0(), cVar2 == '\0')) {
                pCVar8 = (CMFCColorMenuButton *)0x0;
              }
              else {
                cVar2 = FUN_00482730();
                if (cVar2 == '\0') {
                  pCVar8 = (CMFCColorMenuButton *)0x0;
                }
                else {
                  FUN_00466500();
                  FUN_00467210();
                  CMFCColorMenuButton::Initialize(local_118);
                  (**(code **)(*(int *)local_118 + 0x138))();
                  *(int *)(local_118 + 0x1a4) = 0x4c;
                  *(int *)(local_118 + 0x1a8) = 0;
                  pCStack_668 = *(CMFCColorMenuButton **)(local_118 + 0xab8);
                  pCStack_66c = (CMFCColorMenuButton *)0x46a134;
                  game_loop_helper_e9240();
                  pCStack_66c = (CMFCColorMenuButton *)0x46a13b;
                  iVar3 = FUN_005d9da0();
                  *(int *)(local_118 + 0x924) =
                       (*(int *)(iVar3 + 0xc4) * 1000) / *(int *)(local_118 + 0x750);
                  *(int *)(local_118 + 0x92c) = 0;
                  *(int *)(local_118 + 0x928) = 0;
                  pCStack_668 = (CMFCColorMenuButton *)0x46a1a1;
                  (**(code **)(*(int *)local_118 + 0x90))();
                  *(CMFCColorMenuButton **)(local_118 + 0x9b0) = param_1;
                  pCVar8 = (CMFCColorMenuButton *)0x1;
                }
              }
              break;
            case (CMFCColorMenuButton *)0x16:
              cVar2 = FUN_00467700();
              if ((cVar2 == '\0') && (cVar2 = FUN_004666c0(), cVar2 == '\0')) {
                pCVar8 = (CMFCColorMenuButton *)0x0;
              }
              else {
                cVar2 = FUN_00482730();
                if (cVar2 == '\0') {
                  pCVar8 = (CMFCColorMenuButton *)0x0;
                }
                else {
                  FUN_00466500();
                  FUN_00467210();
                  CMFCColorMenuButton::Initialize(local_118);
                  (**(code **)(*(int *)local_118 + 0x138))();
                  *(int *)(local_118 + 0x1a4) = 0x4d;
                  *(int *)(local_118 + 0x1a8) = 0;
                  pCStack_668 = *(CMFCColorMenuButton **)(local_118 + 0xab8);
                  pCStack_66c = (CMFCColorMenuButton *)0x46a27b;
                  game_loop_helper_e9240();
                  pCStack_66c = (CMFCColorMenuButton *)0x46a282;
                  iVar3 = FUN_005d9da0();
                  *(int *)(local_118 + 0x924) =
                       (*(int *)(iVar3 + 0xc4) * 1000) / *(int *)(local_118 + 0x750);
                  *(int *)(local_118 + 0x92c) = 0;
                  *(int *)(local_118 + 0x928) = 0;
                  pCStack_668 = (CMFCColorMenuButton *)0x46a2e8;
                  (**(code **)(*(int *)local_118 + 0x90))();
                  *(CMFCColorMenuButton **)(local_118 + 0x9b0) = param_1;
                  pCVar8 = (CMFCColorMenuButton *)0x1;
                }
              }
              break;
            case (CMFCColorMenuButton *)0x17:
              iVar3 = FUN_0047bcc0();
              if ((iVar3 * *(int *)(local_118 + 0x6e0)) / 100 < *(int *)(local_118 + 0x6e8)) {
                cVar2 = FUN_00467700();
                if ((cVar2 == '\0') && (cVar2 = FUN_004666c0(), cVar2 == '\0')) {
                  pCVar8 = (CMFCColorMenuButton *)0x0;
                }
                else {
                  cVar2 = FUN_00482730();
                  if (cVar2 == '\0') {
                    pCVar8 = (CMFCColorMenuButton *)0x0;
                  }
                  else {
                    FUN_00466500();
                    FUN_00467210();
                    CMFCColorMenuButton::Initialize(local_118);
                    *(int *)(local_118 + 0x1a8) = 0;
                    iVar3 = FUN_0047bcc0();
                    *(int *)(local_118 + 0x6e8) =
                         *(int *)(local_118 + 0x6e8) - (iVar3 * *(int *)(local_118 + 0x6e0)) / 100;
                    *(int *)(local_118 + 0x1a4) = 0x19;
                    (**(code **)(*(int *)local_118 + 0x138))();
                    pCStack_668 = *(CMFCColorMenuButton **)(local_118 + 0xab8);
                    pCStack_66c = (CMFCColorMenuButton *)0x46a9bc;
                    iVar3 = FUN_005d9da0();
                    *(int *)(local_118 + 0x924) = *(int *)(iVar3 + 0xc4);
                    *(int *)(local_118 + 0x92c) = 0;
                    *(int *)(local_118 + 0x928) = 0;
                    pCStack_668 = (CMFCColorMenuButton *)0x46aa11;
                    (**(code **)(*(int *)local_118 + 0x104))();
                    pCStack_674 = (CMFCColorMenuButton *)0x747518;
                    pCStack_678 = (CMFCColorMenuButton *)0x46aa27;
                    FUN_004054a0();
                    pCStack_674 = (CMFCColorMenuButton *)0x46aa2c;
                    pCVar8 = (CMFCColorMenuButton *)FUN_004c3500();
                  }
                }
              }
              else {
                pCVar8 = (CMFCColorMenuButton *)game_get_player_or_session_blob();
                if (local_118 == pCVar8) {
                  pCStack_678 = (CMFCColorMenuButton *)&DAT_00747510;
                  pcStack_67c = (char *)0x46a8a6;
                  FUN_004054a0();
                  pCStack_678 = (CMFCColorMenuButton *)0x46a8ab;
                  FUN_0049d850();
                }
                pCVar8 = (CMFCColorMenuButton *)0x0;
              }
              break;
            case (CMFCColorMenuButton *)0x18:
              cVar2 = FUN_00467700();
              if ((cVar2 == '\0') && (cVar2 = FUN_004666c0(), cVar2 == '\0')) {
                pCVar8 = (CMFCColorMenuButton *)0x0;
              }
              else {
                cVar2 = FUN_00482730();
                if (cVar2 == '\0') {
                  pCVar8 = (CMFCColorMenuButton *)0x0;
                }
                else {
                  FUN_00466500();
                  FUN_00467210();
                  CMFCColorMenuButton::Initialize(local_118);
                  pCStack_674 = (CMFCColorMenuButton *)0x74753c;
                  pCStack_678 = (CMFCColorMenuButton *)0x46aabb;
                  FUN_004054a0();
                  pCStack_674 = (CMFCColorMenuButton *)0x46aac0;
                  FUN_004c3500();
                  game_get_state_ptr_d1520();
                  FUN_004edfb0();
                  (**(code **)(*(int *)local_118 + 0x138))();
                  pCStack_668 = (CMFCColorMenuButton *)0x18;
                  pCStack_66c = (CMFCColorMenuButton *)0x46aaff;
                  FUN_0047bd30();
                  thunk_FUN_006e5750();
                  pCStack_668 = (CMFCColorMenuButton *)0x46ab1b;
                  (**(code **)(*(int *)local_118 + 0x104))();
                  pCStack_668 = (CMFCColorMenuButton *)0x0;
                  pCStack_66c = (CMFCColorMenuButton *)0x0;
                  pCStack_670 = local_118;
                  pCStack_674 = (CMFCColorMenuButton *)0x46ab54;
                  FUN_0042f340();
                  pCStack_668 = (CMFCColorMenuButton *)0x423c0000;
                  pCStack_66c = (CMFCColorMenuButton *)0x40a00000;
                  pCStack_670 = local_118;
                  pCStack_674 = (CMFCColorMenuButton *)0x46ab9a;
                  FUN_0042f340();
                  pCStack_668 = (CMFCColorMenuButton *)0x423c0000;
                  pCStack_66c = (CMFCColorMenuButton *)0x40a00000;
                  pCStack_670 = local_118;
                  pCStack_674 = (CMFCColorMenuButton *)0x46abe0;
                  FUN_0042f340();
                  *(int *)(local_118 + 0x1a4) = 0x122;
                  *(int *)(local_118 + 0x1a8) = 0;
                  if (local_118[0xa8c] != (CMFCColorMenuButton)0x0) {
                    iVar3 = FUN_006ca800();
                    piStack_1a0 = (int *)(iVar3 + 0x68);
                    fVar9 = (float10)FUN_0047bd30();
                    *piStack_1a0 = (int)((float)*piStack_1a0 + (float)fVar9 * 1000.0);
                  }
                  *(CMFCColorMenuButton **)(local_118 + 0x9b0) = param_1;
                  pCVar8 = (CMFCColorMenuButton *)0x1;
                }
              }
              break;
            case (CMFCColorMenuButton *)0x19:
              cVar2 = FUN_00467700();
              if ((cVar2 == '\0') && (cVar2 = FUN_004666c0(), cVar2 == '\0')) {
                pCVar8 = (CMFCColorMenuButton *)0x0;
              }
              else {
                cVar2 = FUN_00482730();
                if (cVar2 == '\0') {
                  pCVar8 = (CMFCColorMenuButton *)0x0;
                }
                else {
                  FUN_00466500();
                  FUN_00467210();
                  CMFCColorMenuButton::Initialize(local_118);
                  *(int *)(local_118 + 0x1a8) = 0;
                  *(int *)(local_118 + 0x1a4) = 0x1a;
                  (**(code **)(*(int *)local_118 + 0x138))();
                  pCStack_668 = *(CMFCColorMenuButton **)(local_118 + 0xab8);
                  pCStack_66c = (CMFCColorMenuButton *)0x46a3c8;
                  iVar3 = FUN_005d9da0();
                  *(int *)(local_118 + 0x924) = *(int *)(iVar3 + 0xc4);
                  *(int *)(local_118 + 0x92c) = 0;
                  *(int *)(local_118 + 0x928) = 0;
                  pCStack_668 = (CMFCColorMenuButton *)0x46a41d;
                  pCVar8 = (CMFCColorMenuButton *)(**(code **)(*(int *)local_118 + 0x104))();
                }
              }
              break;
            case (CMFCColorMenuButton *)0x1e:
              cVar2 = FUN_00467700();
              if ((cVar2 == '\0') && (cVar2 = FUN_004666c0(), cVar2 == '\0')) {
                pCVar8 = (CMFCColorMenuButton *)0x0;
              }
              else {
                cVar2 = FUN_00482730();
                if (cVar2 == '\0') {
                  pCVar8 = (CMFCColorMenuButton *)0x0;
                }
                else {
                  FUN_00466500();
                  FUN_00467210();
                  CMFCColorMenuButton::Initialize(local_118);
                  *(int *)(local_118 + 0x1a8) = 0;
                  *(int *)(local_118 + 0x1a4) = 0x52;
                  (**(code **)(*(int *)local_118 + 0x138))();
                  pCStack_668 = *(CMFCColorMenuButton **)(local_118 + 0xab8);
                  pCStack_66c = (CMFCColorMenuButton *)0x46bae2;
                  iVar3 = FUN_005d9da0();
                  *(int *)(local_118 + 0x924) =
                       (*(int *)(iVar3 + 0xc4) * 1000) / *(int *)(local_118 + 0x750);
                  *(int *)(local_118 + 0x92c) = 0;
                  *(int *)(local_118 + 0x928) = 0;
                  pCStack_668 = (CMFCColorMenuButton *)0x46bb48;
                  (**(code **)(*(int *)local_118 + 0x104))();
                  *(CMFCColorMenuButton **)(local_118 + 0x9b0) = param_1;
                  pCVar8 = (CMFCColorMenuButton *)0x1;
                }
              }
              break;
            case (CMFCColorMenuButton *)0x1f:
              cVar2 = FUN_00467700();
              if ((cVar2 == '\0') && (cVar2 = FUN_004666c0(), cVar2 == '\0')) {
                pCVar8 = (CMFCColorMenuButton *)0x0;
              }
              else {
                cVar2 = FUN_00482730();
                if (cVar2 == '\0') {
                  pCVar8 = (CMFCColorMenuButton *)0x0;
                }
                else {
                  FUN_00466500();
                  FUN_00467210();
                  CMFCColorMenuButton::Initialize(local_118);
                  (**(code **)(*(int *)local_118 + 0x138))();
                  pCStack_668 = (CMFCColorMenuButton *)0x3;
                  pCStack_66c = (CMFCColorMenuButton *)0x46a70c;
                  (**(code **)(*(int *)local_118 + 0x13c))();
                  if (local_118[0xa8c] == (CMFCColorMenuButton)0x0) {
                    FUN_0047bd30();
                    thunk_FUN_006e5750();
                    FUN_00631910();
                  }
                  else {
                    fVar9 = (float10)FUN_0047bd30();
                    fStack_254 = (float)fVar9;
                    fStack_24c = fStack_254;
                    fVar9 = (float10)FUN_0047bd30();
                    fStack_250 = (float)fVar9;
                    FUN_00631910();
                    iVar3 = FUN_006ca800();
                    piStack_19c = (int *)(iVar3 + 0x68);
                    fVar9 = (float10)FUN_0047bd30();
                    *piStack_19c = (int)((float)*piStack_19c + (float)fVar9 * 1000.0);
                  }
                  *(int *)(local_118 + 0x1a4) = 0x96;
                  *(int *)(local_118 + 0x1a8) = 0;
                  *(CMFCColorMenuButton **)(local_118 + 0x9b0) = param_1;
                  pCVar8 = (CMFCColorMenuButton *)0x1;
                }
              }
              break;
            case (CMFCColorMenuButton *)0x20:
              cVar2 = FUN_00467700();
              if ((cVar2 == '\0') && (cVar2 = FUN_004666c0(), cVar2 == '\0')) {
                pCVar8 = (CMFCColorMenuButton *)0x0;
              }
              else {
                cVar2 = FUN_00482730();
                if (cVar2 == '\0') {
                  pCVar8 = (CMFCColorMenuButton *)0x0;
                }
                else {
                  FUN_00466500();
                  FUN_00467210();
                  CMFCColorMenuButton::Initialize(local_118);
                  (**(code **)(*(int *)local_118 + 0x138))();
                  *(int *)(local_118 + 0x1a4) = 0x4a;
                  *(int *)(local_118 + 0x1a8) = 0;
                  pcStack_67c = "character/swordman/effect/animation/releasewave1.ani";
                  pcStack_680 = (char *)0x46ad48;
                  FUN_004054a0();
                  pcStack_67c = (char *)0x46ad5b;
                  (**(code **)(*(int *)local_118 + 0x78))();
                  pcStack_694 = "character/swordman/effect/animation/releasewave2.ani";
                  pcStack_698 = (char *)0x46ad71;
                  FUN_004054a0();
                  pcStack_694 = (char *)0x46ad84;
                  (**(code **)(*(int *)local_118 + 0x78))();
                  pCStack_668 = (CMFCColorMenuButton *)0x0;
                  pCStack_66c = (CMFCColorMenuButton *)0x0;
                  pCStack_670 = local_118;
                  pCStack_674 = (CMFCColorMenuButton *)0x46adbe;
                  FUN_0042f340();
                  *(CMFCColorMenuButton **)(local_118 + 0x9b0) = param_1;
                  pCVar8 = (CMFCColorMenuButton *)0x1;
                }
              }
              break;
            case (CMFCColorMenuButton *)0x22:
              iVar3 = *(int *)(local_118 + 0x6e8);
              iVar1 = *(int *)(local_118 + 0x6e0);
              iVar4 = FUN_0047bcc0();
              if (iVar4 < (iVar3 * 100) / iVar1) {
                pCVar8 = (CMFCColorMenuButton *)0x0;
              }
              else {
                cVar2 = FUN_00467700();
                if ((cVar2 == '\0') && (cVar2 = FUN_004666c0(), cVar2 == '\0')) {
                  pCVar8 = (CMFCColorMenuButton *)0x0;
                }
                else {
                  cVar2 = FUN_00482730();
                  if (cVar2 == '\0') {
                    pCVar8 = (CMFCColorMenuButton *)0x0;
                  }
                  else {
                    FUN_00466500();
                    FUN_00467210();
                    CMFCColorMenuButton::Initialize(local_118);
                    (**(code **)(*(int *)local_118 + 0x138))();
                    *(int *)(local_118 + 0x1a4) = 0x127;
                    *(int *)(local_118 + 0x1a8) = 0;
                    pCStack_668 = *(CMFCColorMenuButton **)(local_118 + 0xab8);
                    pCStack_66c = (CMFCColorMenuButton *)0x46aed9;
                    iVar3 = FUN_005d9da0();
                    *(int *)(local_118 + 0x924) = *(int *)(iVar3 + 0xc4);
                    pCStack_668 = (CMFCColorMenuButton *)0x46af0e;
                    (**(code **)(*(int *)local_118 + 0x104))();
                    *(int *)(local_118 + 0x92c) = 0;
                    *(int *)(local_118 + 0x928) = 0;
                    *(CMFCColorMenuButton **)(local_118 + 0x9b0) = param_1;
                    pCVar8 = (CMFCColorMenuButton *)0x1;
                  }
                }
              }
              break;
            case (CMFCColorMenuButton *)0x24:
              cVar2 = FUN_00467700();
              if ((cVar2 == '\0') && (cVar2 = FUN_004666c0(), cVar2 == '\0')) {
                pCVar8 = (CMFCColorMenuButton *)0x0;
              }
              else {
                cVar2 = FUN_00482730();
                if (cVar2 == '\0') {
                  pCVar8 = (CMFCColorMenuButton *)0x0;
                }
                else {
                  FUN_00466500();
                  FUN_00467210();
                  CMFCColorMenuButton::Initialize(local_118);
                  *(int *)(local_118 + 0x1a8) = 0;
                  *(int *)(local_118 + 0x1a4) = 0x53;
                  (**(code **)(*(int *)local_118 + 0x138))();
                  pCStack_668 = *(CMFCColorMenuButton **)(local_118 + 0xab8);
                  pCStack_66c = (CMFCColorMenuButton *)0x46a60c;
                  iVar3 = FUN_005d9da0();
                  *(int *)(local_118 + 0x924) = *(int *)(iVar3 + 0xc4);
                  *(int *)(local_118 + 0x92c) = 0;
                  *(int *)(local_118 + 0x928) = 0;
                  pCStack_668 = (CMFCColorMenuButton *)0x46a661;
                  pCVar8 = (CMFCColorMenuButton *)(**(code **)(*(int *)local_118 + 0x104))();
                }
              }
              break;
            case (CMFCColorMenuButton *)0x29:
              cVar2 = FUN_00467700();
              if ((cVar2 == '\0') && (cVar2 = FUN_004666c0(), cVar2 == '\0')) {
                pCVar8 = (CMFCColorMenuButton *)0x0;
              }
              else {
                cVar2 = FUN_00482730();
                if (cVar2 == '\0') {
                  pCVar8 = (CMFCColorMenuButton *)0x0;
                }
                else {
                  FUN_00466500();
                  FUN_00467210();
                  CMFCColorMenuButton::Initialize(local_118);
                  *(int *)(local_118 + 0x1a8) = 0;
                  *(int *)(local_118 + 0x1a4) = 0x51;
                  (**(code **)(*(int *)local_118 + 0x138))();
                  pCStack_668 = *(CMFCColorMenuButton **)(local_118 + 0xab8);
                  pCStack_66c = (CMFCColorMenuButton *)0x46a4ea;
                  iVar3 = FUN_005d9da0();
                  *(int *)(local_118 + 0x924) = *(int *)(iVar3 + 0xc4);
                  *(int *)(local_118 + 0x92c) = 0;
                  *(int *)(local_118 + 0x928) = 0;
                  pCStack_668 = (CMFCColorMenuButton *)0x46a53f;
                  pCVar8 = (CMFCColorMenuButton *)(**(code **)(*(int *)local_118 + 0x104))();
                }
              }
              break;
            case (CMFCColorMenuButton *)0x2e:
              iStack_174 = FUN_006ca800();
              if (iStack_174 == 0) {
                pCVar8 = (CMFCColorMenuButton *)0x0;
              }
              else if ((*(int *)(iStack_174 + 0x24) == 0) ||
                      (iVar3 = FUN_00465f90(), iVar3 == iStack_174)) {
                if ((*(int *)(local_118 + 0x1a4) == 0) ||
                   (((*(int *)(local_118 + 0x1a4) == 1 || (*(int *)(local_118 + 0x1a4) == 2)) ||
                    (cVar2 = FUN_00467700(), cVar2 != '\0')))) {
                  cVar2 = FUN_00467700();
                  if ((cVar2 == '\0') && (cVar2 = FUN_004666c0(), cVar2 == '\0')) {
                    pCVar8 = (CMFCColorMenuButton *)0x0;
                  }
                  else {
                    cVar2 = FUN_00482730();
                    if (cVar2 == '\0') {
                      pCVar8 = (CMFCColorMenuButton *)0x0;
                    }
                    else {
                      FUN_00466500();
                      FUN_00467210();
                      CMFCColorMenuButton::Initialize(local_118);
                      (**(code **)(*(int *)local_118 + 0x138))();
                      pCStack_668 = (CMFCColorMenuButton *)0x3;
                      pCStack_66c = (CMFCColorMenuButton *)0x46b082;
                      (**(code **)(*(int *)local_118 + 0x13c))();
                      fVar9 = (float10)FUN_0047bd30();
                      fStack_264 = (float)fVar9;
                      pCStack_668 = (CMFCColorMenuButton *)0x46b0bd;
                      fStack_260 = fStack_264;
                      game_loop_helper_e9240();
                      pCStack_668 = (CMFCColorMenuButton *)0x46b0c4;
                      FUN_005d9da0();
                      iVar3 = FUN_0044de30();
                      *(int *)(local_118 + 0x7e0) = (int)(fStack_264 / *(float *)(iVar3 + 8));
                      *(int *)(local_118 + 0x7dc) = 100;
                      pCStack_668 = (CMFCColorMenuButton *)0x46b10e;
                      FUN_0047bd30();
                      thunk_FUN_006e5750();
                      FUN_00631910();
                      *(int *)(local_118 + 0x1a4) = 0xbde31;
                      *(int *)(local_118 + 0x1a8) = 0;
                      iVar3 = FUN_0047bcc0();
                      *(int *)(local_118 + 0x230) = iVar3 * 1000;
                      iVar3 = FUN_0047bcc0();
                      *(int *)(local_118 + 0x23c) = iVar3;
                      pCStack_674 = (CMFCColorMenuButton *)0x7475d0;
                      pCStack_678 = (CMFCColorMenuButton *)0x46b190;
                      FUN_004054a0();
                      pCStack_674 = (CMFCColorMenuButton *)0x46b195;
                      FUN_004c3570();
                      pCStack_674 = (CMFCColorMenuButton *)0x7475e0;
                      pCStack_678 = (CMFCColorMenuButton *)0x46b1ad;
                      FUN_004054a0();
                      pCStack_674 = (CMFCColorMenuButton *)0x46b1b2;
                      FUN_004c3500();
                      *(CMFCColorMenuButton **)(local_118 + 0x9b0) = param_1;
                      pCVar8 = (CMFCColorMenuButton *)0x1;
                    }
                  }
                }
                else {
                  if (*(int *)(local_118 + 0x1a4) == 0xbde31) {
                    piVar7 = (int *)(**(code **)(*(int *)local_118 + 0x9c))();
                    piVar5 = (int *)(**(code **)(*(int *)local_118 + 0x94))();
                    if (((*piVar7 == *piVar5 + -1) && (*(int *)(local_118 + 0x1a8) == 0)) &&
                       ((cVar2 = FUN_004678b0(), cVar2 != '\0' &&
                        (iStack_1bc = FUN_006ca800(), iStack_1bc != 0)))) {
                      pCStack_668 = (CMFCColorMenuButton *)0x46b286;
                      game_loop_helper_e9240();
                      pCStack_668 = (CMFCColorMenuButton *)0x46b28d;
                      FUN_005d9da0();
                      piVar7 = (int *)game_get_flag_object_01a70();
                      if (*piVar7 <= *(int *)(iStack_1bc + 8)) {
                        *(undefined4 *)(local_118 + 0x1a8) = 1;
                        CMFCColorMenuButton::Initialize(local_118);
                        (**(code **)(*(int *)local_118 + 0x138))();
                        pCStack_668 = (CMFCColorMenuButton *)0x3;
                        pCStack_66c = (CMFCColorMenuButton *)0x46b2f9;
                        (**(code **)(*(int *)local_118 + 0x13c))();
                        pCStack_66c = (CMFCColorMenuButton *)0x0;
                        pCStack_670 = (CMFCColorMenuButton *)0x2;
                        pCStack_674 = (CMFCColorMenuButton *)0xc;
                        pCStack_678 = (CMFCColorMenuButton *)0x46b30a;
                        FUN_0047bd30();
                        pCStack_670 = (CMFCColorMenuButton *)0x46b30f;
                        pCStack_670 = (CMFCColorMenuButton *)thunk_FUN_006e5750();
                        pCStack_674 = (CMFCColorMenuButton *)0x46b31b;
                        FUN_00631910();
                        pCStack_66c = (CMFCColorMenuButton *)0x3;
                        pCStack_670 = (CMFCColorMenuButton *)0xc;
                        pCStack_674 = (CMFCColorMenuButton *)0x46b32a;
                        FUN_0047bd30();
                        pCStack_66c = (CMFCColorMenuButton *)0x46b32f;
                        iVar3 = thunk_FUN_006e5750();
                        *(int *)(local_118 + 0x7e0) = iVar3;
                        *(int *)(local_118 + 0x1a4) = 0xbde31;
                        pCStack_66c = (CMFCColorMenuButton *)0x0;
                        pCStack_670 = (CMFCColorMenuButton *)0x2e;
                        pCStack_674 = (CMFCColorMenuButton *)0x46b35a;
                        iVar3 = FUN_0047bcc0();
                        *(int *)(local_118 + 0x230) = iVar3 * 1000;
                        pCStack_66c = (CMFCColorMenuButton *)0x1;
                        pCStack_670 = (CMFCColorMenuButton *)0x2e;
                        pCStack_674 = (CMFCColorMenuButton *)0x46b37b;
                        iVar3 = FUN_0047bcc0();
                        *(int *)(local_118 + 0x23c) = iVar3;
                        pcStack_684 = "character/swordman/effect/animation/upperslash2.ani";
                        pcStack_688 = (char *)0x46b39c;
                        FUN_004054a0();
                        pcStack_684 = (char *)0x46b3af;
                        iStack_268 = (**(code **)(*(int *)local_118 + 0x78))();
                        *(undefined1 *)(iStack_268 + 0xe0) = 1;
                        pCStack_674 = (CMFCColorMenuButton *)0x747644;
                        pCStack_678 = (CMFCColorMenuButton *)0x46b3d7;
                        FUN_004054a0();
                        pCStack_674 = (CMFCColorMenuButton *)0x46b3dc;
                        FUN_004c3570();
                        pCStack_674 = (CMFCColorMenuButton *)0x747654;
                        pCStack_678 = (CMFCColorMenuButton *)0x46b3f4;
                        FUN_004054a0();
                        pCStack_674 = (CMFCColorMenuButton *)0x46b3f9;
                        FUN_004c3500();
                        *(CMFCColorMenuButton **)(local_118 + 0x9b0) = param_1;
                        ExceptionList = local_10;
                        return (CMFCColorMenuButton *)0x1;
                      }
                    }
                  }
                  pCVar8 = (CMFCColorMenuButton *)0x0;
                }
              }
              else {
                pCVar8 = (CMFCColorMenuButton *)0x0;
              }
              break;
            case (CMFCColorMenuButton *)0x2f:
              cVar2 = FUN_00467700();
              if ((cVar2 == '\0') && (cVar2 = FUN_004666c0(), cVar2 == '\0')) {
                pCVar8 = (CMFCColorMenuButton *)0x0;
              }
              else {
                cVar2 = FUN_00482730();
                if (cVar2 == '\0') {
                  pCVar8 = (CMFCColorMenuButton *)0x0;
                }
                else {
                  if (local_118[0xa8d] == (CMFCColorMenuButton)0x1) {
                    FUN_00466500();
                    FUN_00467210();
                    CMFCColorMenuButton::Initialize(local_118);
                    *(int *)(local_118 + 0x1a8) = 0;
                    FUN_00465570();
                  }
                  else {
                    FUN_00466500();
                    FUN_00467210();
                    CMFCColorMenuButton::Initialize(local_118);
                    (**(code **)(*(int *)local_118 + 0x138))();
                    *(int *)(local_118 + 0x1a4) = 0x128;
                    *(int *)(local_118 + 0x1a8) = 0;
                    pCStack_668 = *(CMFCColorMenuButton **)(local_118 + 0xab8);
                    pCStack_66c = (CMFCColorMenuButton *)0x46b53b;
                    iVar3 = FUN_005d9da0();
                    *(int *)(local_118 + 0x924) =
                         (*(int *)(iVar3 + 0xc4) * 1000) / *(int *)(local_118 + 0x750);
                    *(int *)(local_118 + 0x92c) = 0;
                    *(int *)(local_118 + 0x928) = 0;
                    pCStack_668 = (CMFCColorMenuButton *)0x46b5a1;
                    (**(code **)(*(int *)local_118 + 0x104))();
                    pcStack_680 = "character/swordman/effect/animation/wavemark/cast.ani";
                    pcStack_684 = (char *)0x46b5b7;
                    FUN_004054a0();
                    pcStack_680 = (char *)0x46b5ca;
                    (**(code **)(*(int *)local_118 + 0x78))();
                  }
                  *(CMFCColorMenuButton **)(local_118 + 0x9b0) = param_1;
                  pCVar8 = (CMFCColorMenuButton *)0x1;
                }
              }
              break;
            case (CMFCColorMenuButton *)0x31:
              cVar2 = FUN_00467700();
              if (cVar2 == '\0') {
                pCVar8 = (CMFCColorMenuButton *)0x0;
              }
              else {
                cVar2 = FUN_00482730();
                if (cVar2 == '\0') {
                  pCVar8 = (CMFCColorMenuButton *)0x0;
                }
                else {
                  (**(code **)(*(int *)local_118 + 0x138))();
                  pCStack_668 = (CMFCColorMenuButton *)0x0;
                  pCStack_66c = (CMFCColorMenuButton *)0x46b652;
                  (**(code **)(*(int *)local_118 + 0x13c))();
                  FUN_00631910();
                  *(int *)(local_118 + 0x1a4) = 0xd;
                  *(int *)(local_118 + 0x1a8) = 0;
                  cVar2 = FUN_006412c0();
                  if (cVar2 == '\0') {
                    pCStack_674 = (CMFCColorMenuButton *)0x7476e4;
                    pCStack_678 = (CMFCColorMenuButton *)0x46b6c1;
                    FUN_004054a0();
                    pCStack_674 = (CMFCColorMenuButton *)0x46b6c6;
                    FUN_004c3500();
                  }
                  else {
                    pCStack_674 = (CMFCColorMenuButton *)0x7476bc;
                    pCStack_678 = (CMFCColorMenuButton *)0x46b6a2;
                    FUN_004054a0();
                    pCStack_674 = (CMFCColorMenuButton *)0x46b6a7;
                    FUN_004c3500();
                  }
                  *(CMFCColorMenuButton **)(local_118 + 0x9b0) = param_1;
                  pCVar8 = (CMFCColorMenuButton *)0x1;
                }
              }
              break;
            case (CMFCColorMenuButton *)0x32:
              cVar2 = FUN_00467700();
              if ((cVar2 == '\0') && (cVar2 = FUN_004666c0(), cVar2 == '\0')) {
                pCVar8 = (CMFCColorMenuButton *)0x0;
              }
              else {
                cVar2 = FUN_00482730();
                if (cVar2 == '\0') {
                  pCVar8 = (CMFCColorMenuButton *)0x0;
                }
                else {
                  FUN_00466500();
                  FUN_00467210();
                  CMFCColorMenuButton::Initialize(local_118);
                  (**(code **)(*(int *)local_118 + 0x138))();
                  *(int *)(local_118 + 0x1a4) = 0x48;
                  *(int *)(local_118 + 0x1a8) = 0;
                  pCStack_668 = *(CMFCColorMenuButton **)(local_118 + 0xab8);
                  pCStack_66c = (CMFCColorMenuButton *)0x46b7a3;
                  game_loop_helper_e9240();
                  pCStack_66c = (CMFCColorMenuButton *)0x46b7aa;
                  iVar3 = FUN_005d9da0();
                  *(int *)(local_118 + 0x924) =
                       (*(int *)(iVar3 + 0xc4) * 1000) / *(int *)(local_118 + 0x750);
                  *(int *)(local_118 + 0x92c) = 0;
                  *(int *)(local_118 + 0x928) = 0;
                  pCStack_668 = (CMFCColorMenuButton *)0x46b810;
                  (**(code **)(*(int *)local_118 + 0x90))();
                  pcStack_680 = "character/swordman/effect/animation/grandwaveoncharge1.ani";
                  pcStack_684 = (char *)0x46b826;
                  FUN_004054a0();
                  pcStack_680 = (char *)0x46b839;
                  (**(code **)(*(int *)local_118 + 0x78))();
                  pcStack_698 = "character/swordman/effect/animation/grandwaveoncharge2.ani";
                  pcStack_69c = (char *)0x46b84f;
                  FUN_004054a0();
                  pcStack_698 = (char *)0x46b862;
                  (**(code **)(*(int *)local_118 + 0x78))();
                  *(CMFCColorMenuButton **)(local_118 + 0x9b0) = param_1;
                  pCVar8 = (CMFCColorMenuButton *)0x1;
                }
              }
              break;
            case (CMFCColorMenuButton *)0x34:
              cVar2 = FUN_00467700();
              if ((cVar2 == '\0') && (cVar2 = FUN_004666c0(), cVar2 == '\0')) {
                pCVar8 = (CMFCColorMenuButton *)0x0;
              }
              else {
                cVar2 = FUN_00482730();
                if (cVar2 == '\0') {
                  pCVar8 = (CMFCColorMenuButton *)0x0;
                }
                else {
                  if (local_118[0xa8e] == (CMFCColorMenuButton)0x1) {
                    FUN_00466500();
                    FUN_00467210();
                    CMFCColorMenuButton::Initialize(local_118);
                    *(int *)(local_118 + 0x1a8) = 0;
                    FUN_00465a40();
                  }
                  else {
                    FUN_00466500();
                    FUN_00467210();
                    CMFCColorMenuButton::Initialize(local_118);
                    *(int *)(local_118 + 0x1a8) = 0;
                    *(int *)(local_118 + 0x1a4) = 0x49;
                    (**(code **)(*(int *)local_118 + 0x138))();
                    pCStack_668 = *(CMFCColorMenuButton **)(local_118 + 0xab8);
                    pCStack_66c = (CMFCColorMenuButton *)0x46b99b;
                    iVar3 = FUN_005d9da0();
                    *(int *)(local_118 + 0x924) =
                         (*(int *)(iVar3 + 0xc4) * 1000) / *(int *)(local_118 + 0x750);
                    *(int *)(local_118 + 0x92c) = 0;
                    *(int *)(local_118 + 0x928) = 0;
                    pCStack_668 = (CMFCColorMenuButton *)0x46ba01;
                    (**(code **)(*(int *)local_118 + 0x104))();
                  }
                  *(CMFCColorMenuButton **)(local_118 + 0x9b0) = param_1;
                  pCVar8 = (CMFCColorMenuButton *)0x1;
                }
              }
              break;
            case (CMFCColorMenuButton *)0x3a:
              cVar2 = FUN_00467700();
              if ((cVar2 == '\0') && (cVar2 = FUN_004666c0(), cVar2 == '\0')) {
                pCVar8 = (CMFCColorMenuButton *)0x0;
              }
              else {
                cVar2 = FUN_00482730();
                if (cVar2 == '\0') {
                  pCVar8 = (CMFCColorMenuButton *)0x0;
                }
                else {
                  FUN_00466500();
                  FUN_00467210();
                  CMFCColorMenuButton::Initialize(local_118);
                  (**(code **)(*(int *)local_118 + 0x138))();
                  pCStack_668 = (CMFCColorMenuButton *)0x3;
                  pCStack_66c = (CMFCColorMenuButton *)0x46beaf;
                  (**(code **)(*(int *)local_118 + 0x13c))();
                  pCStack_66c = (CMFCColorMenuButton *)0x0;
                  pCStack_670 = (CMFCColorMenuButton *)0x0;
                  pCStack_674 = (CMFCColorMenuButton *)0x3a;
                  pCStack_678 = (CMFCColorMenuButton *)0x46bec0;
                  FUN_0047bd30();
                  pCStack_670 = (CMFCColorMenuButton *)0x46bec5;
                  pCStack_670 = (CMFCColorMenuButton *)thunk_FUN_006e5750();
                  pCStack_674 = (CMFCColorMenuButton *)0x46bed1;
                  FUN_00631910();
                  pcStack_684 = "character/swordman/effect/animation/vaneslash/upper.ani";
                  pcStack_688 = (char *)0x46bee7;
                  FUN_004054a0();
                  pcStack_684 = (char *)0x46befa;
                  (**(code **)(*(int *)local_118 + 0x78))();
                  pcStack_69c = "character/swordman/effect/animation/vaneslash/dust.ani";
                  uStack_6a0 = 0x46bf10;
                  FUN_004054a0();
                  pcStack_69c = (char *)0x46bf23;
                  (**(code **)(*(int *)local_118 + 0x78))();
                  *(int *)(local_118 + 0x1a4) = 0xa0;
                  *(int *)(local_118 + 0x1a8) = 0;
                  pCStack_674 = (CMFCColorMenuButton *)0x747818;
                  pCStack_678 = (CMFCColorMenuButton *)0x46bf59;
                  FUN_004054a0();
                  pCStack_674 = (CMFCColorMenuButton *)0x46bf5e;
                  FUN_004c3500();
                  pCStack_674 = (CMFCColorMenuButton *)0x747840;
                  pCStack_678 = (CMFCColorMenuButton *)0x46bf76;
                  FUN_004054a0();
                  pCStack_674 = (CMFCColorMenuButton *)0x46bf7b;
                  FUN_004c3500();
                  *(CMFCColorMenuButton **)(local_118 + 0x9b0) = param_1;
                  pCVar8 = (CMFCColorMenuButton *)0x1;
                }
              }
              break;
            case (CMFCColorMenuButton *)0x40:
              cVar2 = FUN_00467700();
              if ((cVar2 == '\0') && (cVar2 = FUN_004666c0(), cVar2 == '\0')) {
                pCVar8 = (CMFCColorMenuButton *)0x0;
              }
              else {
                cVar2 = FUN_00482730();
                if (cVar2 == '\0') {
                  pCVar8 = (CMFCColorMenuButton *)0x0;
                }
                else {
                  FUN_00466500();
                  FUN_00467210();
                  CMFCColorMenuButton::Initialize(local_118);
                  (**(code **)(*(int *)local_118 + 0x138))();
                  pCStack_668 = (CMFCColorMenuButton *)0x3;
                  pCStack_66c = (CMFCColorMenuButton *)0x46c03c;
                  (**(code **)(*(int *)local_118 + 0x13c))();
                  pCStack_66c = (CMFCColorMenuButton *)0x2;
                  pCStack_670 = (CMFCColorMenuButton *)0xa0;
                  pCStack_674 = (CMFCColorMenuButton *)0x2;
                  pCStack_678 = (CMFCColorMenuButton *)0x46c050;
                  FUN_0063c390();
                  if (local_118[0xa8c] == (CMFCColorMenuButton)0x0) {
                    pCStack_66c = (CMFCColorMenuButton *)0x0;
                    pCStack_670 = (CMFCColorMenuButton *)0x0;
                    pCStack_674 = (CMFCColorMenuButton *)0x40;
                    pCStack_678 = (CMFCColorMenuButton *)0x46c144;
                    FUN_0047bd30();
                    pCStack_670 = (CMFCColorMenuButton *)0x46c149;
                    pCStack_670 = (CMFCColorMenuButton *)thunk_FUN_006e5750();
                    pCStack_674 = (CMFCColorMenuButton *)0x46c155;
                    FUN_00631910();
                  }
                  else {
                    pCStack_66c = (CMFCColorMenuButton *)0x0;
                    pCStack_670 = (CMFCColorMenuButton *)0x0;
                    pCStack_674 = (CMFCColorMenuButton *)0x40;
                    pCStack_678 = (CMFCColorMenuButton *)0x46c077;
                    fVar9 = (float10)FUN_0047bd30();
                    fStack_274 = (float)fVar9;
                    pCStack_670 = (CMFCColorMenuButton *)0xd;
                    pCStack_674 = (CMFCColorMenuButton *)0x4c;
                    pCStack_678 = (CMFCColorMenuButton *)0x46c09c;
                    fStack_26c = fStack_274;
                    fVar9 = (float10)FUN_0047bd30();
                    fStack_270 = (float)fVar9;
                    pCStack_670 = (CMFCColorMenuButton *)
                                  (int)(fStack_274 * (fStack_270 / 100.0 + 1.0));
                    pCStack_674 = (CMFCColorMenuButton *)0x46c0d6;
                    FUN_00631910();
                    pCStack_66c = param_1;
                    pCStack_670 = local_118;
                    pCStack_674 = (CMFCColorMenuButton *)0x46c0e6;
                    iVar3 = FUN_006ca800();
                    piStack_1a8 = (int *)(iVar3 + 0x68);
                    pCStack_66c = (CMFCColorMenuButton *)0xa;
                    pCStack_670 = (CMFCColorMenuButton *)0x4c;
                    pCStack_674 = (CMFCColorMenuButton *)0x46c101;
                    fVar9 = (float10)FUN_0047bd30();
                    fStack_278 = (float)fVar9;
                    *piStack_1a8 = (int)((float)*piStack_1a8 + fStack_278 * 1000.0);
                  }
                  pcStack_684 = "character/swordman/effect/animation/gorecross/slash1.ani";
                  pcStack_688 = (char *)0x46c16b;
                  FUN_004054a0();
                  pcStack_684 = (char *)0x46c17e;
                  iStack_27c = (**(code **)(*(int *)local_118 + 0x78))();
                  *(undefined1 *)(iStack_27c + 0xe8) = 0;
                  pcStack_69c = "character/swordman/effect/animation/gorecross/slash2.ani";
                  uStack_6a0 = 0x46c1a6;
                  FUN_004054a0();
                  pcStack_69c = (char *)0x46c1b9;
                  iStack_280 = (**(code **)(*(int *)local_118 + 0x78))();
                  *(undefined1 *)(iStack_280 + 0xe8) = 0;
                  *(int *)(local_118 + 0x1a4) = 10;
                  *(int *)(local_118 + 0x1a8) = 0;
                  pCStack_674 = (CMFCColorMenuButton *)0x7478e8;
                  pCStack_678 = (CMFCColorMenuButton *)0x46c201;
                  FUN_004054a0();
                  pCStack_674 = (CMFCColorMenuButton *)0x46c206;
                  FUN_004c3500();
                  pCStack_674 = (CMFCColorMenuButton *)0x747910;
                  pCStack_678 = (CMFCColorMenuButton *)0x46c21e;
                  FUN_004054a0();
                  pCStack_674 = (CMFCColorMenuButton *)0x46c223;
                  FUN_004c3500();
                  pCStack_674 = (CMFCColorMenuButton *)0x747940;
                  pCStack_678 = (CMFCColorMenuButton *)0x46c23b;
                  FUN_004054a0();
                  pCStack_674 = (CMFCColorMenuButton *)0x46c240;
                  FUN_004c3500();
                  *(CMFCColorMenuButton **)(local_118 + 0x9b0) = param_1;
                  pCVar8 = (CMFCColorMenuButton *)0x1;
                }
              }
              break;
            case (CMFCColorMenuButton *)0x41:
              cVar2 = FUN_00467700();
              if ((cVar2 == '\0') && (cVar2 = FUN_004666c0(), cVar2 == '\0')) {
                pCVar8 = (CMFCColorMenuButton *)0x0;
              }
              else {
                cVar2 = FUN_00482730();
                if (cVar2 == '\0') {
                  pCVar8 = (CMFCColorMenuButton *)0x0;
                }
                else {
                  FUN_00466500();
                  FUN_00467210();
                  CMFCColorMenuButton::Initialize(local_118);
                  (**(code **)(*(int *)local_118 + 0x138))();
                  *(int *)(local_118 + 0x1a4) = 0xd2;
                  *(int *)(local_118 + 0x1a8) = 0;
                  if ((local_118[0xdee] == (CMFCColorMenuButton)0x0) &&
                     (local_118[0xded] == (CMFCColorMenuButton)0x0)) {
                    pCStack_668 = (CMFCColorMenuButton *)0x41;
                    pCStack_66c = (CMFCColorMenuButton *)0x46c361;
                    FUN_0047bcc0();
                    pCStack_668 = (CMFCColorMenuButton *)0x46c378;
                    (**(code **)(*(int *)local_118 + 0x90))();
                  }
                  else {
                    pCStack_668 = (CMFCColorMenuButton *)0x41;
                    pCStack_66c = (CMFCColorMenuButton *)0x46c338;
                    FUN_0047bcc0();
                    pCStack_668 = (CMFCColorMenuButton *)0x46c34f;
                    (**(code **)(*(int *)local_118 + 0x90))();
                  }
                  *(CMFCColorMenuButton **)(local_118 + 0x9b0) = param_1;
                  pcStack_680 = "character/swordman/effect/animation/hopsmash/sword.ani";
                  pcStack_684 = (char *)0x46c39d;
                  FUN_004054a0();
                  pcStack_680 = (char *)0x46c3a8;
                  pCStack_668 = (CMFCColorMenuButton *)FUN_00630790();
                  pCStack_66c = (CMFCColorMenuButton *)0x46c3cb;
                  uStack_284 = pCStack_668;
                  (**(code **)(*(int *)local_118 + 0xd8))();
                  pcStack_684 = "character/swordman/effect/animation/hopsmash/smash.ani";
                  pcStack_688 = (char *)0x46c3e1;
                  FUN_004054a0();
                  pcStack_684 = (char *)0x46c3ec;
                  pCStack_66c = (CMFCColorMenuButton *)FUN_00630790();
                  pCStack_670 = (CMFCColorMenuButton *)0x46c40f;
                  uStack_288 = pCStack_66c;
                  (**(code **)(*(int *)local_118 + 0xd8))();
                  pcStack_688 = "character/swordman/animation/hopsmash.ani";
                  pcStack_68c = (char *)0x46c425;
                  FUN_004054a0();
                  pcStack_688 = (char *)0x46c430;
                  pCStack_670 = (CMFCColorMenuButton *)FUN_00630790();
                  pCStack_674 = (CMFCColorMenuButton *)0x46c453;
                  pCStack_28c = pCStack_670;
                  (**(code **)(*(int *)local_118 + 0xd8))();
                  pCVar8 = (CMFCColorMenuButton *)0x1;
                }
              }
              break;
            case (CMFCColorMenuButton *)0x43:
              if ((((*(int *)(local_118 + 0x1a4) == 0) || (*(int *)(local_118 + 0x1a4) == 1)) ||
                  (*(int *)(local_118 + 0x1a4) == 2)) ||
                 (pCVar8 = (CMFCColorMenuButton *)FUN_00467700(), ((uint)pCVar8 & 0xff) != 0)) {
                cVar2 = FUN_00482730();
                if (cVar2 == '\0') {
                  ExceptionList = local_10;
                  return (CMFCColorMenuButton *)0x0;
                }
                FUN_00466500();
                FUN_00467210();
                CMFCColorMenuButton::Initialize(local_118);
                iVar3 = FUN_00641430();
                if (iVar3 % 100 < 0x21) {
                  pCStack_674 = (CMFCColorMenuButton *)0x747a0c;
                  pCStack_678 = (CMFCColorMenuButton *)0x46c50f;
                  FUN_004054a0();
                  pCStack_674 = (CMFCColorMenuButton *)0x46c514;
                  FUN_004c3500();
                }
                else {
                  iVar3 = FUN_00641430();
                  if ((iVar3 % 100 < 0x42) && (iVar3 = FUN_00641430(), 0x21 < iVar3 % 100)) {
                    pCStack_674 = (CMFCColorMenuButton *)0x747a30;
                    pCStack_678 = (CMFCColorMenuButton *)0x46c555;
                    FUN_004054a0();
                    pCStack_674 = (CMFCColorMenuButton *)0x46c55a;
                    FUN_004c3500();
                  }
                  else {
                    iVar3 = FUN_00641430();
                    if ((iVar3 % 100 < 100) && (iVar3 = FUN_00641430(), 0x42 < iVar3 % 100)) {
                      pCStack_674 = (CMFCColorMenuButton *)0x747a54;
                      pCStack_678 = (CMFCColorMenuButton *)0x46c598;
                      FUN_004054a0();
                      pCStack_674 = (CMFCColorMenuButton *)0x46c59d;
                      FUN_004c3500();
                    }
                  }
                }
                iVar3 = FUN_00405270();
                if (*(int *)(iVar3 + 4) != 0) {
                  FUN_00405270();
                  game_loop_helper_e9240();
                  iVar3 = game_loop_helper_cc840();
                  if (*(int *)(iVar3 + 0x140) == 0) {
                    (**(code **)(*(int *)local_118 + 0x138))();
                    pCStack_668 = (CMFCColorMenuButton *)0x3;
                    pCStack_66c = (CMFCColorMenuButton *)0x46c621;
                    (**(code **)(*(int *)local_118 + 0x13c))();
                    FUN_00631910();
                    *(int *)(local_118 + 0x1a4) = 0x140;
                    *(int *)(local_118 + 0x1a8) = 0;
                    *(CMFCColorMenuButton **)(local_118 + 0x9b0) = param_1;
                    ExceptionList = local_10;
                    return (CMFCColorMenuButton *)0x1;
                  }
                }
                iVar3 = FUN_00405270();
                if (*(int *)(iVar3 + 4) != 0) {
                  FUN_00405270();
                  game_loop_helper_e9240();
                  iVar3 = game_loop_helper_cc840();
                  if (*(int *)(iVar3 + 0x140) == 1) {
                    (**(code **)(*(int *)local_118 + 0x138))();
                    pCStack_668 = (CMFCColorMenuButton *)0x3;
                    pCStack_66c = (CMFCColorMenuButton *)0x46c6ef;
                    (**(code **)(*(int *)local_118 + 0x13c))();
                    FUN_00631910();
                    *(int *)(local_118 + 0x1a4) = 0x140;
                    *(int *)(local_118 + 0x1a8) = 0;
                    *(CMFCColorMenuButton **)(local_118 + 0x9b0) = param_1;
                    ExceptionList = local_10;
                    return (CMFCColorMenuButton *)0x1;
                  }
                }
                iVar3 = FUN_00405270();
                if (*(int *)(iVar3 + 4) != 0) {
                  FUN_00405270();
                  game_loop_helper_e9240();
                  iVar3 = game_loop_helper_cc840();
                  if (*(int *)(iVar3 + 0x140) == 2) {
                    (**(code **)(*(int *)local_118 + 0x138))();
                    pCStack_668 = (CMFCColorMenuButton *)0x3;
                    pCStack_66c = (CMFCColorMenuButton *)0x46c7bd;
                    (**(code **)(*(int *)local_118 + 0x13c))();
                    FUN_00631910();
                    *(int *)(local_118 + 0x1a4) = 0x140;
                    *(int *)(local_118 + 0x1a8) = 0;
                    *(CMFCColorMenuButton **)(local_118 + 0x9b0) = param_1;
                    ExceptionList = local_10;
                    return (CMFCColorMenuButton *)0x1;
                  }
                }
                iVar3 = FUN_00405270();
                if (*(int *)(iVar3 + 4) != 0) {
                  FUN_00405270();
                  game_loop_helper_e9240();
                  iVar3 = game_loop_helper_cc840();
                  if (*(int *)(iVar3 + 0x140) == 3) {
                    (**(code **)(*(int *)local_118 + 0x138))();
                    pCStack_668 = (CMFCColorMenuButton *)0x3;
                    pCStack_66c = (CMFCColorMenuButton *)0x46c88b;
                    (**(code **)(*(int *)local_118 + 0x13c))();
                    FUN_00631910();
                    *(int *)(local_118 + 0x1a4) = 0x140;
                    *(int *)(local_118 + 0x1a8) = 0;
                    *(CMFCColorMenuButton **)(local_118 + 0x9b0) = param_1;
                    ExceptionList = local_10;
                    return (CMFCColorMenuButton *)0x1;
                  }
                }
                pCVar8 = (CMFCColorMenuButton *)FUN_00405270();
                if (*(int *)(pCVar8 + 4) != 0) {
                  FUN_00405270();
                  game_loop_helper_e9240();
                  pCVar8 = (CMFCColorMenuButton *)game_loop_helper_cc840();
                  if (*(int *)(pCVar8 + 0x140) == 5) {
                    (**(code **)(*(int *)local_118 + 0x138))();
                    pCStack_668 = (CMFCColorMenuButton *)0x3;
                    pCStack_66c = (CMFCColorMenuButton *)0x46c959;
                    (**(code **)(*(int *)local_118 + 0x13c))();
                    pCStack_66c = (CMFCColorMenuButton *)0x0;
                    pCStack_670 = (CMFCColorMenuButton *)0x64;
                    pCStack_674 = (CMFCColorMenuButton *)0x46c968;
                    FUN_00631910();
                    pCStack_66c = (CMFCColorMenuButton *)0x747a78;
                    pCStack_670 = (CMFCColorMenuButton *)0x46c97e;
                    FUN_004053a0();
                    pcStack_684 = "character/swordman/effect/animation/weaponcombo/light1-1.ani";
                    pcStack_688 = (char *)0x46c994;
                    FUN_004054a0();
                    pcStack_684 = (char *)0x46c9a7;
                    iStack_290 = (**(code **)(*(int *)local_118 + 0x78))();
                    *(undefined1 *)(iStack_290 + 0x26) = 1;
                    *(undefined1 *)(iStack_290 + 0x80) = 1;
                    pcStack_69c = "character/swordman/effect/animation/weaponcombo/light1-2.ani";
                    uStack_6a0 = 0x46c9e5;
                    iStack_124 = iStack_290;
                    FUN_004054a0();
                    pcStack_69c = (char *)0x46c9f8;
                    iStack_294 = (**(code **)(*(int *)local_118 + 0x78))();
                    *(undefined1 *)(iStack_294 + 0x26) = 1;
                    *(undefined1 *)(iStack_294 + 0x80) = 1;
                    pcStack_6b4 = "character/swordman/effect/animation/weaponcombo/light1-3.ani";
                    uStack_6b8 = 0x46ca36;
                    iStack_124 = iStack_294;
                    FUN_004054a0();
                    pcStack_6b4 = (char *)0x46ca49;
                    iStack_298 = (**(code **)(*(int *)local_118 + 0x78))();
                    *(undefined1 *)(iStack_298 + 0x26) = 1;
                    *(undefined1 *)(iStack_298 + 0x80) = 1;
                    iStack_124 = iStack_298;
                    FUN_004054a0();
                    iStack_29c = (**(code **)(*(int *)local_118 + 0x78))();
                    *(undefined1 *)(iStack_29c + 0x26) = 1;
                    *(undefined1 *)(iStack_29c + 0x80) = 1;
                    iStack_124 = iStack_29c;
                    FUN_004054a0();
                    iStack_2a0 = (**(code **)(*(int *)local_118 + 0x78))();
                    *(undefined1 *)(iStack_2a0 + 0x26) = 1;
                    *(undefined1 *)(iStack_2a0 + 0x80) = 1;
                    iStack_124 = iStack_2a0;
                    FUN_004054a0();
                    iVar3 = (**(code **)(*(int *)local_118 + 0x78))();
                    *(undefined1 *)(iVar3 + 0x26) = 1;
                    *(undefined1 *)(iVar3 + 0x80) = 1;
                    *(int *)(local_118 + 0x1a4) = 0x140;
                    *(int *)(local_118 + 0x1a8) = 0;
                    *(CMFCColorMenuButton **)(local_118 + 0x9b0) = param_1;
                    ExceptionList = local_10;
                    return (CMFCColorMenuButton *)0x1;
                  }
                }
              }
              if (*(int *)(local_118 + 0x1a4) == 0x140) {
                piVar7 = (int *)(**(code **)(*(int *)local_118 + 0x9c))();
                pCVar8 = (CMFCColorMenuButton *)(**(code **)(*(int *)local_118 + 0x94))();
                if (*piVar7 == *(int *)pCVar8 + -1) {
                  iVar3 = FUN_00641430();
                  if (iVar3 % 100 < 0x21) {
                    pCStack_674 = (CMFCColorMenuButton *)0x747c00;
                    pCStack_678 = (CMFCColorMenuButton *)0x46cc16;
                    FUN_004054a0();
                    pCStack_674 = (CMFCColorMenuButton *)0x46cc1b;
                    FUN_004c3500();
                  }
                  else {
                    iVar3 = FUN_00641430();
                    if ((iVar3 % 100 < 0x42) && (iVar3 = FUN_00641430(), 0x21 < iVar3 % 100)) {
                      pCStack_674 = (CMFCColorMenuButton *)0x747c24;
                      pCStack_678 = (CMFCColorMenuButton *)0x46cc5c;
                      FUN_004054a0();
                      pCStack_674 = (CMFCColorMenuButton *)0x46cc61;
                      FUN_004c3500();
                    }
                    else {
                      iVar3 = FUN_00641430();
                      if ((iVar3 % 100 < 100) && (iVar3 = FUN_00641430(), 0x42 < iVar3 % 100)) {
                        pCStack_674 = (CMFCColorMenuButton *)0x747c48;
                        pCStack_678 = (CMFCColorMenuButton *)0x46cc9f;
                        FUN_004054a0();
                        pCStack_674 = (CMFCColorMenuButton *)0x46cca4;
                        FUN_004c3500();
                      }
                    }
                  }
                  iVar3 = FUN_00405270();
                  if (*(int *)(iVar3 + 4) != 0) {
                    FUN_00405270();
                    game_loop_helper_e9240();
                    iVar3 = game_loop_helper_cc840();
                    if (*(int *)(iVar3 + 0x140) == 0) {
                      if (*(int *)(local_118 + 0x1a8) == 0) {
                        (**(code **)(*(int *)local_118 + 0x138))();
                        pCStack_668 = (CMFCColorMenuButton *)0x3;
                        pCStack_66c = (CMFCColorMenuButton *)0x46cd3b;
                        (**(code **)(*(int *)local_118 + 0x13c))();
                        FUN_00631910();
                        *(int *)(local_118 + 0x23c) = -300;
                        if ((*(int *)(local_118 + 500) == 1) &&
                           (local_118[0xdee] != (CMFCColorMenuButton)0x0)) {
                          *(int *)(local_118 + 0x230) = 100000;
                        }
                        else if ((*(int *)(local_118 + 500) == -1) &&
                                (local_118[0xded] != (CMFCColorMenuButton)0x0)) {
                          *(int *)(local_118 + 0x230) = 100000;
                        }
                        else if ((*(int *)(local_118 + 500) == -1) &&
                                (local_118[0xdee] != (CMFCColorMenuButton)0x0)) {
                          *(int *)(local_118 + 0x230) = 0;
                        }
                        else if ((*(int *)(local_118 + 500) == 1) &&
                                (local_118[0xded] != (CMFCColorMenuButton)0x0)) {
                          *(int *)(local_118 + 0x230) = 0;
                        }
                        *(int *)(local_118 + 0x1a8) = 1;
                        *(CMFCColorMenuButton **)(local_118 + 0x9b0) = param_1;
                        ExceptionList = local_10;
                        return (CMFCColorMenuButton *)0x1;
                      }
                      if (*(int *)(local_118 + 0x1a8) != 1) {
                        ExceptionList = local_10;
                        return local_118;
                      }
                      (**(code **)(*(int *)local_118 + 0x138))();
                      pCStack_668 = (CMFCColorMenuButton *)0x3;
                      pCStack_66c = (CMFCColorMenuButton *)0x46ce98;
                      (**(code **)(*(int *)local_118 + 0x13c))();
                      pCStack_66c = (CMFCColorMenuButton *)0x0;
                      pCStack_670 = (CMFCColorMenuButton *)0x64;
                      pCStack_674 = (CMFCColorMenuButton *)0x46cea7;
                      FUN_00631910();
                      pcStack_684 = "character/swordman/effect/animation/weaponcombo/short.ani";
                      pcStack_688 = (char *)0x46cebd;
                      FUN_004054a0();
                      pcStack_684 = (char *)0x46ced0;
                      iVar3 = (**(code **)(*(int *)local_118 + 0x78))();
                      *(undefined1 *)(iVar3 + 0x26) = 1;
                      *(undefined1 *)(iVar3 + 0x80) = 1;
                      *(int *)(local_118 + 0x23c) = -300;
                      if ((*(int *)(local_118 + 500) == 1) &&
                         (local_118[0xdee] != (CMFCColorMenuButton)0x0)) {
                        *(int *)(local_118 + 0x230) = 100000;
                      }
                      else if ((*(int *)(local_118 + 500) == -1) &&
                              (local_118[0xded] != (CMFCColorMenuButton)0x0)) {
                        *(int *)(local_118 + 0x230) = 100000;
                      }
                      else if ((*(int *)(local_118 + 500) == -1) &&
                              (local_118[0xdee] != (CMFCColorMenuButton)0x0)) {
                        *(int *)(local_118 + 0x230) = 0;
                      }
                      else if ((*(int *)(local_118 + 500) == 1) &&
                              (local_118[0xded] != (CMFCColorMenuButton)0x0)) {
                        *(int *)(local_118 + 0x230) = 0;
                      }
                      *(int *)(local_118 + 0x1a8) = 2;
                      *(CMFCColorMenuButton **)(local_118 + 0x9b0) = param_1;
                      ExceptionList = local_10;
                      return (CMFCColorMenuButton *)0x1;
                    }
                  }
                  iVar3 = FUN_00405270();
                  if (*(int *)(iVar3 + 4) != 0) {
                    FUN_00405270();
                    game_loop_helper_e9240();
                    iVar3 = game_loop_helper_cc840();
                    if (*(int *)(iVar3 + 0x140) == 1) {
                      if (*(int *)(local_118 + 0x1a8) == 0) {
                        (**(code **)(*(int *)local_118 + 0x138))();
                        pCStack_668 = (CMFCColorMenuButton *)0x3;
                        pCStack_66c = (CMFCColorMenuButton *)0x46d094;
                        (**(code **)(*(int *)local_118 + 0x13c))();
                        FUN_00631910();
                        *(int *)(local_118 + 0x23c) = -300;
                        if ((*(int *)(local_118 + 500) == 1) &&
                           (local_118[0xdee] != (CMFCColorMenuButton)0x0)) {
                          *(int *)(local_118 + 0x230) = 100000;
                        }
                        else if ((*(int *)(local_118 + 500) == -1) &&
                                (local_118[0xded] != (CMFCColorMenuButton)0x0)) {
                          *(int *)(local_118 + 0x230) = 100000;
                        }
                        else if ((*(int *)(local_118 + 500) == -1) &&
                                (local_118[0xdee] != (CMFCColorMenuButton)0x0)) {
                          *(int *)(local_118 + 0x230) = 0;
                        }
                        else if ((*(int *)(local_118 + 500) == 1) &&
                                (local_118[0xded] != (CMFCColorMenuButton)0x0)) {
                          *(int *)(local_118 + 0x230) = 0;
                        }
                        *(int *)(local_118 + 0x1a8) = 1;
                        *(CMFCColorMenuButton **)(local_118 + 0x9b0) = param_1;
                        ExceptionList = local_10;
                        return (CMFCColorMenuButton *)0x1;
                      }
                      if (*(int *)(local_118 + 0x1a8) != 1) {
                        if (*(int *)(local_118 + 0x1a8) != 2) {
                          ExceptionList = local_10;
                          return local_118;
                        }
                        (**(code **)(*(int *)local_118 + 0x138))();
                        pCStack_668 = (CMFCColorMenuButton *)0x3;
                        pCStack_66c = (CMFCColorMenuButton *)0x46d34e;
                        (**(code **)(*(int *)local_118 + 0x13c))();
                        pCStack_66c = (CMFCColorMenuButton *)0x0;
                        pCStack_670 = (CMFCColorMenuButton *)0x64;
                        pCStack_674 = (CMFCColorMenuButton *)0x46d35d;
                        FUN_00631910();
                        pcStack_684 = "character/swordman/effect/animation/weaponcombo/blade.ani";
                        pcStack_688 = (char *)0x46d373;
                        FUN_004054a0();
                        pcStack_684 = (char *)0x46d386;
                        iVar3 = (**(code **)(*(int *)local_118 + 0x78))();
                        *(undefined1 *)(iVar3 + 0x80) = 1;
                        *(undefined1 *)(iVar3 + 0xe0) = 1;
                        *(int *)(local_118 + 0x23c) = -300;
                        if ((*(int *)(local_118 + 500) == 1) &&
                           (local_118[0xdee] != (CMFCColorMenuButton)0x0)) {
                          *(int *)(local_118 + 0x230) = 100000;
                        }
                        else if ((*(int *)(local_118 + 500) == -1) &&
                                (local_118[0xded] != (CMFCColorMenuButton)0x0)) {
                          *(int *)(local_118 + 0x230) = 100000;
                        }
                        else if ((*(int *)(local_118 + 500) == -1) &&
                                (local_118[0xdee] != (CMFCColorMenuButton)0x0)) {
                          *(int *)(local_118 + 0x230) = 0;
                        }
                        else if ((*(int *)(local_118 + 500) == 1) &&
                                (local_118[0xded] != (CMFCColorMenuButton)0x0)) {
                          *(int *)(local_118 + 0x230) = 0;
                        }
                        *(int *)(local_118 + 0x1a8) = 3;
                        *(CMFCColorMenuButton **)(local_118 + 0x9b0) = param_1;
                        ExceptionList = local_10;
                        return (CMFCColorMenuButton *)0x1;
                      }
                      (**(code **)(*(int *)local_118 + 0x138))();
                      pCStack_668 = (CMFCColorMenuButton *)0x3;
                      pCStack_66c = (CMFCColorMenuButton *)0x46d1f1;
                      (**(code **)(*(int *)local_118 + 0x13c))();
                      FUN_00631910();
                      *(int *)(local_118 + 0x23c) = -300;
                      if ((*(int *)(local_118 + 500) == 1) &&
                         (local_118[0xdee] != (CMFCColorMenuButton)0x0)) {
                        *(int *)(local_118 + 0x230) = 100000;
                      }
                      else if ((*(int *)(local_118 + 500) == -1) &&
                              (local_118[0xded] != (CMFCColorMenuButton)0x0)) {
                        *(int *)(local_118 + 0x230) = 100000;
                      }
                      else if ((*(int *)(local_118 + 500) == -1) &&
                              (local_118[0xdee] != (CMFCColorMenuButton)0x0)) {
                        *(int *)(local_118 + 0x230) = 0;
                      }
                      else if ((*(int *)(local_118 + 500) == 1) &&
                              (local_118[0xded] != (CMFCColorMenuButton)0x0)) {
                        *(int *)(local_118 + 0x230) = 0;
                      }
                      *(int *)(local_118 + 0x1a8) = 2;
                      *(CMFCColorMenuButton **)(local_118 + 0x9b0) = param_1;
                      ExceptionList = local_10;
                      return (CMFCColorMenuButton *)0x1;
                    }
                  }
                  iVar3 = FUN_00405270();
                  if (*(int *)(iVar3 + 4) != 0) {
                    FUN_00405270();
                    game_loop_helper_e9240();
                    iVar3 = game_loop_helper_cc840();
                    if (*(int *)(iVar3 + 0x140) == 2) {
                      if (*(int *)(local_118 + 0x1a8) == 0) {
                        (**(code **)(*(int *)local_118 + 0x138))();
                        pCStack_668 = (CMFCColorMenuButton *)0x3;
                        pCStack_66c = (CMFCColorMenuButton *)0x46d54d;
                        (**(code **)(*(int *)local_118 + 0x13c))();
                        FUN_00631910();
                        *(int *)(local_118 + 0x23c) = -300;
                        if ((*(int *)(local_118 + 500) == 1) &&
                           (local_118[0xdee] != (CMFCColorMenuButton)0x0)) {
                          *(int *)(local_118 + 0x230) = 100000;
                        }
                        else if ((*(int *)(local_118 + 500) == -1) &&
                                (local_118[0xded] != (CMFCColorMenuButton)0x0)) {
                          *(int *)(local_118 + 0x230) = 100000;
                        }
                        else if ((*(int *)(local_118 + 500) == -1) &&
                                (local_118[0xdee] != (CMFCColorMenuButton)0x0)) {
                          *(int *)(local_118 + 0x230) = 0;
                        }
                        else if ((*(int *)(local_118 + 500) == 1) &&
                                (local_118[0xded] != (CMFCColorMenuButton)0x0)) {
                          *(int *)(local_118 + 0x230) = 0;
                        }
                        *(int *)(local_118 + 0x1a8) = 1;
                        *(CMFCColorMenuButton **)(local_118 + 0x9b0) = param_1;
                        ExceptionList = local_10;
                        return (CMFCColorMenuButton *)0x1;
                      }
                      if (*(int *)(local_118 + 0x1a8) != 1) {
                        ExceptionList = local_10;
                        return local_118;
                      }
                      (**(code **)(*(int *)local_118 + 0x138))();
                      pCStack_668 = (CMFCColorMenuButton *)0x3;
                      pCStack_66c = (CMFCColorMenuButton *)0x46d6aa;
                      (**(code **)(*(int *)local_118 + 0x13c))();
                      pCStack_66c = (CMFCColorMenuButton *)0x0;
                      pCStack_670 = (CMFCColorMenuButton *)0x64;
                      pCStack_674 = (CMFCColorMenuButton *)0x46d6b9;
                      FUN_00631910();
                      pcStack_684 = "character/swordman/effect/animation/weaponcombo/blunt.ani";
                      pcStack_688 = (char *)0x46d6cf;
                      FUN_004054a0();
                      pcStack_684 = (char *)0x46d6e2;
                      iVar3 = (**(code **)(*(int *)local_118 + 0x78))();
                      *(undefined1 *)(iVar3 + 0x26) = 1;
                      *(undefined1 *)(iVar3 + 0x80) = 1;
                      *(int *)(local_118 + 0x23c) = -300;
                      if ((*(int *)(local_118 + 500) == 1) &&
                         (local_118[0xdee] != (CMFCColorMenuButton)0x0)) {
                        *(int *)(local_118 + 0x230) = 100000;
                      }
                      else if ((*(int *)(local_118 + 500) == -1) &&
                              (local_118[0xded] != (CMFCColorMenuButton)0x0)) {
                        *(int *)(local_118 + 0x230) = 100000;
                      }
                      else if ((*(int *)(local_118 + 500) == -1) &&
                              (local_118[0xdee] != (CMFCColorMenuButton)0x0)) {
                        *(int *)(local_118 + 0x230) = 0;
                      }
                      else if ((*(int *)(local_118 + 500) == 1) &&
                              (local_118[0xded] != (CMFCColorMenuButton)0x0)) {
                        *(int *)(local_118 + 0x230) = 0;
                      }
                      *(int *)(local_118 + 0x1a8) = 2;
                      *(CMFCColorMenuButton **)(local_118 + 0x9b0) = param_1;
                      ExceptionList = local_10;
                      return (CMFCColorMenuButton *)0x1;
                    }
                  }
                  iVar3 = FUN_00405270();
                  if (*(int *)(iVar3 + 4) != 0) {
                    FUN_00405270();
                    game_loop_helper_e9240();
                    pCVar8 = (CMFCColorMenuButton *)game_loop_helper_cc840();
                    if (*(int *)(pCVar8 + 0x140) == 3) {
                      if (*(int *)(local_118 + 0x1a8) != 0) {
                        ExceptionList = local_10;
                        return pCVar8;
                      }
                      (**(code **)(*(int *)local_118 + 0x138))();
                      pCStack_668 = (CMFCColorMenuButton *)0x3;
                      pCStack_66c = (CMFCColorMenuButton *)0x46d8a6;
                      (**(code **)(*(int *)local_118 + 0x13c))();
                      pCStack_66c = (CMFCColorMenuButton *)0x0;
                      pCStack_670 = (CMFCColorMenuButton *)0x64;
                      pCStack_674 = (CMFCColorMenuButton *)0x46d8b5;
                      FUN_00631910();
                      pcStack_684 = "character/swordman/effect/animation/weaponcombo/heavy.ani";
                      pcStack_688 = (char *)0x46d8cb;
                      FUN_004054a0();
                      pcStack_684 = (char *)0x46d8de;
                      iVar3 = (**(code **)(*(int *)local_118 + 0x78))();
                      *(undefined1 *)(iVar3 + 0x80) = 1;
                      *(undefined1 *)(iVar3 + 0xe0) = 1;
                      *(int *)(local_118 + 0x23c) = -300;
                      if ((*(int *)(local_118 + 500) == 1) &&
                         (local_118[0xdee] != (CMFCColorMenuButton)0x0)) {
                        *(int *)(local_118 + 0x230) = 100000;
                      }
                      else if ((*(int *)(local_118 + 500) == -1) &&
                              (local_118[0xded] != (CMFCColorMenuButton)0x0)) {
                        *(int *)(local_118 + 0x230) = 100000;
                      }
                      else if ((*(int *)(local_118 + 500) == -1) &&
                              (local_118[0xdee] != (CMFCColorMenuButton)0x0)) {
                        *(int *)(local_118 + 0x230) = 0;
                      }
                      else if ((*(int *)(local_118 + 500) == 1) &&
                              (local_118[0xded] != (CMFCColorMenuButton)0x0)) {
                        *(int *)(local_118 + 0x230) = 0;
                      }
                      *(int *)(local_118 + 0x1a8) = 1;
                      *(CMFCColorMenuButton **)(local_118 + 0x9b0) = param_1;
                      ExceptionList = local_10;
                      return (CMFCColorMenuButton *)0x1;
                    }
                  }
                  pCVar8 = (CMFCColorMenuButton *)FUN_00405270();
                  if (*(int *)(pCVar8 + 4) != 0) {
                    FUN_00405270();
                    game_loop_helper_e9240();
                    pCVar8 = (CMFCColorMenuButton *)game_loop_helper_cc840();
                    if (*(int *)(pCVar8 + 0x140) == 5) {
                      if (*(int *)(local_118 + 0x1a8) == 0) {
                        (**(code **)(*(int *)local_118 + 0x138))();
                        pCStack_668 = (CMFCColorMenuButton *)0x3;
                        pCStack_66c = (CMFCColorMenuButton *)0x46daa5;
                        (**(code **)(*(int *)local_118 + 0x13c))();
                        pCStack_66c = (CMFCColorMenuButton *)0x0;
                        pCStack_670 = (CMFCColorMenuButton *)0x64;
                        pCStack_674 = (CMFCColorMenuButton *)0x46dab4;
                        FUN_00631910();
                        pCStack_66c = (CMFCColorMenuButton *)0x747d5c;
                        pCStack_670 = (CMFCColorMenuButton *)0x46daca;
                        FUN_004053a0();
                        pcStack_684 = "character/swordman/effect/animation/weaponcombo/light2-1.ani"
                        ;
                        pcStack_688 = (char *)0x46dae0;
                        FUN_004054a0();
                        pcStack_684 = (char *)0x46daf3;
                        iStack_2b8 = (**(code **)(*(int *)local_118 + 0x78))();
                        *(undefined1 *)(iStack_2b8 + 0x26) = 1;
                        *(undefined1 *)(iStack_2b8 + 0x80) = 1;
                        pcStack_69c = "character/swordman/effect/animation/weaponcombo/light2-2.ani"
                        ;
                        uStack_6a0 = 0x46db31;
                        iStack_128 = iStack_2b8;
                        FUN_004054a0();
                        pcStack_69c = (char *)0x46db44;
                        iStack_2bc = (**(code **)(*(int *)local_118 + 0x78))();
                        *(undefined1 *)(iStack_2bc + 0x26) = 1;
                        *(undefined1 *)(iStack_2bc + 0x80) = 1;
                        pcStack_6b4 = "character/swordman/effect/animation/weaponcombo/light2-3.ani"
                        ;
                        uStack_6b8 = 0x46db82;
                        iStack_128 = iStack_2bc;
                        FUN_004054a0();
                        pcStack_6b4 = (char *)0x46db95;
                        iStack_2c0 = (**(code **)(*(int *)local_118 + 0x78))();
                        *(undefined1 *)(iStack_2c0 + 0x26) = 1;
                        *(undefined1 *)(iStack_2c0 + 0x80) = 1;
                        iStack_128 = iStack_2c0;
                        FUN_004054a0();
                        iStack_2c4 = (**(code **)(*(int *)local_118 + 0x78))();
                        *(undefined1 *)(iStack_2c4 + 0x26) = 1;
                        *(undefined1 *)(iStack_2c4 + 0x80) = 1;
                        iStack_128 = iStack_2c4;
                        FUN_004054a0();
                        iStack_2c8 = (**(code **)(*(int *)local_118 + 0x78))();
                        *(undefined1 *)(iStack_2c8 + 0x26) = 1;
                        *(undefined1 *)(iStack_2c8 + 0x80) = 1;
                        iStack_128 = iStack_2c8;
                        FUN_004054a0();
                        iVar3 = (**(code **)(*(int *)local_118 + 0x78))();
                        *(undefined1 *)(iVar3 + 0x26) = 1;
                        *(undefined1 *)(iVar3 + 0x80) = 1;
                        *(int *)(local_118 + 0x23c) = -300;
                        if ((*(int *)(local_118 + 500) == 1) &&
                           (local_118[0xdee] != (CMFCColorMenuButton)0x0)) {
                          *(int *)(local_118 + 0x230) = 100000;
                        }
                        else if ((*(int *)(local_118 + 500) == -1) &&
                                (local_118[0xded] != (CMFCColorMenuButton)0x0)) {
                          *(int *)(local_118 + 0x230) = 100000;
                        }
                        else if ((*(int *)(local_118 + 500) == -1) &&
                                (local_118[0xdee] != (CMFCColorMenuButton)0x0)) {
                          *(int *)(local_118 + 0x230) = 0;
                        }
                        else if ((*(int *)(local_118 + 500) == 1) &&
                                (local_118[0xded] != (CMFCColorMenuButton)0x0)) {
                          *(int *)(local_118 + 0x230) = 0;
                        }
                        *(int *)(local_118 + 0x1a8) = 1;
                        *(CMFCColorMenuButton **)(local_118 + 0x9b0) = param_1;
                        pCVar8 = (CMFCColorMenuButton *)0x1;
                      }
                      else {
                        pCVar8 = local_118;
                        if (*(int *)(local_118 + 0x1a8) == 1) {
                          (**(code **)(*(int *)local_118 + 0x138))();
                          pCStack_668 = (CMFCColorMenuButton *)0x3;
                          pCStack_66c = (CMFCColorMenuButton *)0x46ddff;
                          (**(code **)(*(int *)local_118 + 0x13c))();
                          pCStack_66c = (CMFCColorMenuButton *)0x0;
                          pCStack_670 = (CMFCColorMenuButton *)0x64;
                          pCStack_674 = (CMFCColorMenuButton *)0x46de0e;
                          FUN_00631910();
                          pCStack_66c = (CMFCColorMenuButton *)0x747ee4;
                          pCStack_670 = (CMFCColorMenuButton *)0x46de24;
                          FUN_004053a0();
                          pcStack_684 = 
                          "character/swordman/effect/animation/weaponcombo/light3-1.ani";
                          pcStack_688 = (char *)0x46de3a;
                          FUN_004054a0();
                          pcStack_684 = (char *)0x46de4d;
                          iStack_2d0 = (**(code **)(*(int *)local_118 + 0x78))();
                          *(undefined1 *)(iStack_2d0 + 0x26) = 1;
                          *(undefined1 *)(iStack_2d0 + 0x80) = 1;
                          pcStack_69c = 
                          "character/swordman/effect/animation/weaponcombo/light3-2.ani";
                          uStack_6a0 = 0x46de8b;
                          iStack_11c = iStack_2d0;
                          FUN_004054a0();
                          pcStack_69c = (char *)0x46de9e;
                          iStack_2d4 = (**(code **)(*(int *)local_118 + 0x78))();
                          *(undefined1 *)(iStack_2d4 + 0x26) = 1;
                          *(undefined1 *)(iStack_2d4 + 0x80) = 1;
                          pcStack_6b4 = 
                          "character/swordman/effect/animation/weaponcombo/light3-3.ani";
                          uStack_6b8 = 0x46dedc;
                          iStack_11c = iStack_2d4;
                          FUN_004054a0();
                          pcStack_6b4 = (char *)0x46deef;
                          iStack_2d8 = (**(code **)(*(int *)local_118 + 0x78))();
                          *(undefined1 *)(iStack_2d8 + 0x26) = 1;
                          *(undefined1 *)(iStack_2d8 + 0x80) = 1;
                          iStack_11c = iStack_2d8;
                          FUN_004054a0();
                          iStack_2dc = (**(code **)(*(int *)local_118 + 0x78))();
                          *(undefined1 *)(iStack_2dc + 0x26) = 1;
                          *(undefined1 *)(iStack_2dc + 0x80) = 1;
                          iStack_11c = iStack_2dc;
                          FUN_004054a0();
                          iStack_2e0 = (**(code **)(*(int *)local_118 + 0x78))();
                          *(undefined1 *)(iStack_2e0 + 0x26) = 1;
                          *(undefined1 *)(iStack_2e0 + 0x80) = 1;
                          iStack_11c = iStack_2e0;
                          FUN_004054a0();
                          iStack_2e4 = (**(code **)(*(int *)local_118 + 0x78))();
                          *(undefined1 *)(iStack_2e4 + 0x26) = 1;
                          *(undefined1 *)(iStack_2e4 + 0x80) = 1;
                          iStack_11c = iStack_2e4;
                          FUN_004054a0("character/swordman/effect/animation/weaponcombo/light.ani");
                          iVar3 = (**(code **)(*(int *)local_118 + 0x78))();
                          *(undefined1 *)(iVar3 + 0xe0) = 1;
                          *(undefined1 *)(iVar3 + 0x80) = 1;
                          *(int *)(local_118 + 0x23c) = -300;
                          if ((*(int *)(local_118 + 500) == 1) &&
                             (local_118[0xdee] != (CMFCColorMenuButton)0x0)) {
                            *(int *)(local_118 + 0x230) = 100000;
                          }
                          else if ((*(int *)(local_118 + 500) == -1) &&
                                  (local_118[0xded] != (CMFCColorMenuButton)0x0)) {
                            *(int *)(local_118 + 0x230) = 100000;
                          }
                          else if ((*(int *)(local_118 + 500) == -1) &&
                                  (local_118[0xdee] != (CMFCColorMenuButton)0x0)) {
                            *(int *)(local_118 + 0x230) = 0;
                          }
                          else if ((*(int *)(local_118 + 500) == 1) &&
                                  (local_118[0xded] != (CMFCColorMenuButton)0x0)) {
                            *(int *)(local_118 + 0x230) = 0;
                          }
                          *(int *)(local_118 + 0x1a8) = 2;
                          *(CMFCColorMenuButton **)(local_118 + 0x9b0) = param_1;
                          pCVar8 = (CMFCColorMenuButton *)0x1;
                        }
                      }
                    }
                  }
                }
              }
              break;
            case (CMFCColorMenuButton *)0x44:
              if (((*(int *)(local_118 + 0x1a4) == 0) || (*(int *)(local_118 + 0x1a4) == 1)) ||
                 ((*(int *)(local_118 + 0x1a4) == 2 || (cVar2 = FUN_00467700(), cVar2 != '\0')))) {
                cVar2 = FUN_00482730();
                if (cVar2 == '\0') {
                  pCVar8 = (CMFCColorMenuButton *)0x0;
                }
                else {
                  FUN_00466500();
                  FUN_00467210();
                  CMFCColorMenuButton::Initialize(local_118);
                  (**(code **)(*(int *)local_118 + 0x138))();
                  pCStack_668 = (CMFCColorMenuButton *)0x3;
                  pCStack_66c = (CMFCColorMenuButton *)0x46e223;
                  (**(code **)(*(int *)local_118 + 0x13c))();
                  pCStack_66c = (CMFCColorMenuButton *)0x0;
                  pCStack_670 = (CMFCColorMenuButton *)0x0;
                  pCStack_674 = param_1;
                  pCStack_678 = (CMFCColorMenuButton *)0x46e236;
                  FUN_0047bd30();
                  pCStack_670 = (CMFCColorMenuButton *)0x46e23b;
                  pCStack_670 = (CMFCColorMenuButton *)thunk_FUN_006e5750();
                  pCStack_674 = (CMFCColorMenuButton *)0x46e247;
                  FUN_00631910();
                  pcStack_684 = "sounds/char/swordman/effect/ccrash_moving.wav";
                  pcStack_688 = (char *)0x46e25d;
                  FUN_004054a0();
                  pcStack_684 = (char *)0x46e262;
                  FUN_004c3500();
                  pcStack_684 = "sounds/char/swordman/sm_chargecrash.wav";
                  pcStack_688 = (char *)0x46e27a;
                  FUN_004054a0();
                  pcStack_684 = (char *)0x46e27f;
                  FUN_004c3500();
                  *(int *)(local_118 + 0x1a4) = 0x136;
                  *(int *)(local_118 + 0x1a8) = 0;
                  pCStack_66c = (CMFCColorMenuButton *)0x1;
                  pCStack_670 = (CMFCColorMenuButton *)0x44;
                  pCStack_674 = (CMFCColorMenuButton *)0x46e2b1;
                  iVar3 = FUN_0047bcc0();
                  *(int *)(local_118 + 0x23c) = iVar3;
                  pCStack_66c = (CMFCColorMenuButton *)0x0;
                  pCStack_670 = (CMFCColorMenuButton *)0x44;
                  pCStack_674 = (CMFCColorMenuButton *)0x46e2cc;
                  iVar3 = FUN_0047bcc0();
                  *(int *)(local_118 + 0x230) = iVar3 * 1000;
                  pCStack_66c = (CMFCColorMenuButton *)0xffffffff;
                  pCStack_670 = (CMFCColorMenuButton *)0x2;
                  pCStack_674 = (CMFCColorMenuButton *)0x44;
                  pCStack_678 = (CMFCColorMenuButton *)0x46e2ef;
                  pCStack_670 = (CMFCColorMenuButton *)FUN_0047bcc0();
                  pCStack_674 = (CMFCColorMenuButton *)0x2;
                  pCStack_678 = (CMFCColorMenuButton *)0x46e2fd;
                  FUN_0063c390();
                  pcStack_684 = "character/swordman/effect/animation/chargecrash/dash.ani";
                  pcStack_688 = (char *)0x46e313;
                  FUN_004054a0();
                  pcStack_684 = (char *)0x46e326;
                  iStack_33c = (**(code **)(*(int *)local_118 + 0x78))();
                  *(undefined1 *)(iStack_33c + 0xe0) = 1;
                  pcStack_69c = "character/swordman/effect/animation/chargecrash/dustdash.ani";
                  uStack_6a0 = 0x46e34e;
                  FUN_004054a0();
                  pcStack_69c = (char *)0x46e361;
                  iStack_2f0 = (**(code **)(*(int *)local_118 + 0x78))();
                  *(undefined1 *)(iStack_2f0 + 0xe0) = 1;
                  pcStack_6b4 = "character/swordman/effect/animation/chargecrash/dustdashlast.ani";
                  uStack_6b8 = 0x46e389;
                  FUN_004054a0();
                  pcStack_6b4 = (char *)0x46e39c;
                  iVar3 = (**(code **)(*(int *)local_118 + 0x78))();
                  *(undefined1 *)(iVar3 + 0xe0) = 1;
                  *(CMFCColorMenuButton **)(local_118 + 0x9b0) = param_1;
                  pCVar8 = (CMFCColorMenuButton *)0x1;
                }
              }
              else {
                if (*(int *)(local_118 + 0x1a4) == 0x136) {
                  piVar7 = (int *)(**(code **)(*(int *)local_118 + 0x9c))();
                  piVar5 = (int *)(**(code **)(*(int *)local_118 + 0x94))();
                  if ((*piVar7 == *piVar5 + -1) && (*(int *)(local_118 + 0x1a8) == 1)) {
                    cStack_135 = '\0';
                    cVar2 = FUN_004679a0();
                    if (cVar2 == '\0') {
                      cVar2 = FUN_00467900();
                      if ((cVar2 != '\0') && (iStack_1c0 = FUN_006ca800(), iStack_1c0 != 0)) {
                        pCStack_668 = (CMFCColorMenuButton *)0x46e506;
                        game_loop_helper_e9240();
                        pCStack_668 = (CMFCColorMenuButton *)0x46e50d;
                        FUN_005d9da0();
                        piVar7 = (int *)game_get_flag_object_01a70();
                        if (*piVar7 <= *(int *)(iStack_1c0 + 8)) {
                          FUN_00631910();
                          cStack_135 = '\x01';
                        }
                      }
                    }
                    else {
                      iStack_1d4 = FUN_006ca800();
                      if (iStack_1d4 != 0) {
                        pCStack_668 = (CMFCColorMenuButton *)0x46e47f;
                        game_loop_helper_e9240();
                        pCStack_668 = (CMFCColorMenuButton *)0x46e486;
                        FUN_005d9da0();
                        piVar7 = (int *)game_get_flag_object_01a70();
                        if (*piVar7 <= *(int *)(iStack_1d4 + 8)) {
                          FUN_00631910();
                          cStack_135 = '\x01';
                        }
                      }
                    }
                    if (cStack_135 != '\0') {
                      (**(code **)(*(int *)local_118 + 0x138))();
                      pCStack_668 = (CMFCColorMenuButton *)0x3;
                      pCStack_66c = (CMFCColorMenuButton *)0x46e57f;
                      (**(code **)(*(int *)local_118 + 0x13c))();
                      pCStack_66c = (CMFCColorMenuButton *)0x0;
                      pCStack_670 = (CMFCColorMenuButton *)0x64;
                      pCStack_674 = (CMFCColorMenuButton *)0x46e58e;
                      FUN_00631910();
                      pCStack_66c = (CMFCColorMenuButton *)0x3;
                      pCStack_670 = param_1;
                      pCStack_674 = (CMFCColorMenuButton *)0x46e59f;
                      pCStack_66c = (CMFCColorMenuButton *)FUN_0047bcc0();
                      pCStack_670 = (CMFCColorMenuButton *)0x46e5b6;
                      (**(code **)(*(int *)local_118 + 0x90))();
                      pcStack_688 = "sounds/char/swordman/effect/ccrash_get.wav";
                      pcStack_68c = (char *)0x46e5cc;
                      FUN_004054a0();
                      pcStack_688 = (char *)0x46e5d1;
                      FUN_004c3500();
                      pcStack_688 = "sounds/char/swordman/sm_chargecrash_down.wav";
                      pcStack_68c = (char *)0x46e5e9;
                      FUN_004054a0();
                      pcStack_688 = (char *)0x46e5ee;
                      FUN_004c3500();
                      pcStack_688 = "character/swordman/effect/animation/chargecrash/charge.ani";
                      pcStack_68c = (char *)0x46e606;
                      FUN_004054a0();
                      pcStack_688 = (char *)0x46e619;
                      iVar3 = (**(code **)(*(int *)local_118 + 0x78))();
                      *(undefined1 *)(iVar3 + 0x80) = 1;
                      *(undefined1 *)(iVar3 + 0xe0) = 1;
                      *(int *)(iVar3 + 0x40) = *(int *)(local_118 + 500) * -0x3c;
                      *(undefined4 *)(iVar3 + 0x48) = 0x8c;
                      *(int *)(local_118 + 0x1a8) = 2;
                      *(int *)(local_118 + 0x1a4) = 0x136;
                      *(CMFCColorMenuButton **)(local_118 + 0x9b0) = param_1;
                      ExceptionList = local_10;
                      return (CMFCColorMenuButton *)0x1;
                    }
                  }
                }
                pCVar8 = (CMFCColorMenuButton *)0x0;
              }
              break;
            case (CMFCColorMenuButton *)0x48:
              if ((((*(int *)(local_118 + 0x1a4) == 0) || (*(int *)(local_118 + 0x1a4) == 1)) ||
                  (*(int *)(local_118 + 0x1a4) == 2)) || (cVar2 = FUN_00467700(), cVar2 != '\0')) {
                cVar2 = FUN_00482730();
                if (cVar2 == '\0') {
                  pCVar8 = (CMFCColorMenuButton *)0x0;
                }
                else {
                  FUN_00467210();
                  CMFCColorMenuButton::Initialize(local_118);
                  FUN_00466500();
                  (**(code **)(*(int *)local_118 + 0x138))();
                  iVar3 = FUN_00405270();
                  if (*(int *)(iVar3 + 4) != 0) {
                    FUN_00405270();
                    game_loop_helper_e9240();
                    iVar3 = game_loop_helper_cc840();
                    if (*(int *)(iVar3 + 0x140) == 5) {
                      pCStack_674 = (CMFCColorMenuButton *)0x748260;
                      pCStack_678 = (CMFCColorMenuButton *)0x46e7b2;
                      FUN_004054a0();
                      pCStack_674 = (CMFCColorMenuButton *)0x46e7c5;
                      iStack_2fc = (**(code **)(*(int *)local_118 + 0x78))();
                      *(undefined1 *)(iStack_2fc + 0x26) = 1;
                      *(undefined1 *)(iStack_2fc + 0x80) = 1;
                      pcStack_68c = 
                      "character/swordman/effect/animation/rapidmoveslash/lightready1-2.ani";
                      uStack_690 = 0x46e803;
                      iStack_120 = iStack_2fc;
                      FUN_004054a0();
                      pcStack_68c = (char *)0x46e816;
                      iStack_300 = (**(code **)(*(int *)local_118 + 0x78))();
                      *(undefined1 *)(iStack_300 + 0x26) = 1;
                      *(undefined1 *)(iStack_300 + 0x80) = 1;
                      pcStack_6a4 = 
                      "character/swordman/effect/animation/rapidmoveslash/lightready1-3.ani";
                      uStack_6a8 = 0x46e854;
                      iStack_120 = iStack_300;
                      FUN_004054a0();
                      pcStack_6a4 = (char *)0x46e867;
                      iStack_304 = (**(code **)(*(int *)local_118 + 0x78))();
                      *(undefined1 *)(iStack_304 + 0x26) = 1;
                      *(undefined1 *)(iStack_304 + 0x80) = 1;
                      iStack_120 = iStack_304;
                      FUN_004054a0();
                      iStack_308 = (**(code **)(*(int *)local_118 + 0x78))();
                      *(undefined1 *)(iStack_308 + 0x26) = 1;
                      *(undefined1 *)(iStack_308 + 0x80) = 1;
                      iStack_120 = iStack_308;
                      FUN_004054a0();
                      iStack_30c = (**(code **)(*(int *)local_118 + 0x78))();
                      *(undefined1 *)(iStack_30c + 0x26) = 1;
                      *(undefined1 *)(iStack_30c + 0x80) = 1;
                      iStack_120 = iStack_30c;
                      FUN_004054a0();
                      iStack_310 = (**(code **)(*(int *)local_118 + 0x78))();
                      *(undefined1 *)(iStack_310 + 0x26) = 1;
                      *(undefined1 *)(iStack_310 + 0x80) = 1;
                      iStack_120 = iStack_310;
                    }
                  }
                  pCStack_674 = (CMFCColorMenuButton *)0x748410;
                  pCStack_678 = (CMFCColorMenuButton *)0x46e998;
                  FUN_004054a0();
                  pCStack_674 = (CMFCColorMenuButton *)0x46e99d;
                  FUN_004c3500();
                  *(int *)(local_118 + 0xa0c) = 0;
                  *(int *)(local_118 + 0x1a4) = 0xbe;
                  *(int *)(local_118 + 0x1a8) = 0;
                  *(CMFCColorMenuButton **)(local_118 + 0x9b0) = param_1;
                  pCVar8 = (CMFCColorMenuButton *)0x1;
                }
              }
              else {
                if ((*(int *)(local_118 + 0x1a4) == 0xbe) &&
                   (piVar7 = (int *)(**(code **)(*(int *)local_118 + 0x9c))(), 2 < *piVar7)) {
                  if (*(int *)(local_118 + 0x1a8) == 1) {
                    CMFCColorMenuButton::Initialize(local_118);
                    FUN_00466500();
                    (**(code **)(*(int *)local_118 + 0x138))();
                    iVar3 = FUN_00405270();
                    if (*(int *)(iVar3 + 4) != 0) {
                      FUN_00405270();
                      game_loop_helper_e9240();
                      iVar3 = game_loop_helper_cc840();
                      if (*(int *)(iVar3 + 0x140) == 5) {
                        pCStack_674 = (CMFCColorMenuButton *)0x748440;
                        pCStack_678 = (CMFCColorMenuButton *)0x46eac4;
                        FUN_004054a0();
                        pCStack_674 = (CMFCColorMenuButton *)0x46ead7;
                        iStack_314 = (**(code **)(*(int *)local_118 + 0x78))();
                        *(undefined1 *)(iStack_314 + 0x26) = 1;
                        *(undefined1 *)(iStack_314 + 0x80) = 1;
                        pcStack_68c = 
                        "character/swordman/effect/animation/rapidmoveslash/lightready1-2.ani";
                        uStack_690 = 0x46eb15;
                        iStack_12c = iStack_314;
                        FUN_004054a0();
                        pcStack_68c = (char *)0x46eb28;
                        iStack_318 = (**(code **)(*(int *)local_118 + 0x78))();
                        *(undefined1 *)(iStack_318 + 0x26) = 1;
                        *(undefined1 *)(iStack_318 + 0x80) = 1;
                        pcStack_6a4 = 
                        "character/swordman/effect/animation/rapidmoveslash/lightready1-3.ani";
                        uStack_6a8 = 0x46eb66;
                        iStack_12c = iStack_318;
                        FUN_004054a0();
                        pcStack_6a4 = (char *)0x46eb79;
                        iStack_31c = (**(code **)(*(int *)local_118 + 0x78))();
                        *(undefined1 *)(iStack_31c + 0x26) = 1;
                        *(undefined1 *)(iStack_31c + 0x80) = 1;
                        iStack_12c = iStack_31c;
                        FUN_004054a0();
                        iStack_320 = (**(code **)(*(int *)local_118 + 0x78))();
                        *(undefined1 *)(iStack_320 + 0x26) = 1;
                        *(undefined1 *)(iStack_320 + 0x80) = 1;
                        iStack_12c = iStack_320;
                        FUN_004054a0();
                        iStack_324 = (**(code **)(*(int *)local_118 + 0x78))();
                        *(undefined1 *)(iStack_324 + 0x26) = 1;
                        *(undefined1 *)(iStack_324 + 0x80) = 1;
                        iStack_12c = iStack_324;
                        FUN_004054a0();
                        iVar3 = (**(code **)(*(int *)local_118 + 0x78))();
                        *(undefined1 *)(iVar3 + 0x26) = 1;
                        *(undefined1 *)(iVar3 + 0x80) = 1;
                      }
                    }
                    *(int *)(local_118 + 0xa0c) = 0;
                    *(int *)(local_118 + 0x1a4) = 0xbe;
                    *(int *)(local_118 + 0x1a8) = 2;
                    *(CMFCColorMenuButton **)(local_118 + 0x9b0) = param_1;
                    ExceptionList = local_10;
                    return (CMFCColorMenuButton *)0x1;
                  }
                  if (*(int *)(local_118 + 0x1a8) == 3) {
                    CMFCColorMenuButton::Initialize(local_118);
                    FUN_00466500();
                    (**(code **)(*(int *)local_118 + 0x138))();
                    iVar3 = FUN_00405270();
                    if (*(int *)(iVar3 + 4) != 0) {
                      FUN_00405270();
                      game_loop_helper_e9240();
                      iVar3 = game_loop_helper_cc840();
                      if (*(int *)(iVar3 + 0x140) == 5) {
                        pCStack_674 = (CMFCColorMenuButton *)0x7485f0;
                        pCStack_678 = (CMFCColorMenuButton *)0x46ed89;
                        FUN_004054a0();
                        pCStack_674 = (CMFCColorMenuButton *)0x46ed9c;
                        iStack_32c = (**(code **)(*(int *)local_118 + 0x78))();
                        *(undefined1 *)(iStack_32c + 0x26) = 1;
                        *(undefined1 *)(iStack_32c + 0x80) = 1;
                        pcStack_68c = 
                        "character/swordman/effect/animation/rapidmoveslash/lightready1-2.ani";
                        uStack_690 = 0x46edda;
                        iStack_130 = iStack_32c;
                        FUN_004054a0();
                        pcStack_68c = (char *)0x46eded;
                        iStack_330 = (**(code **)(*(int *)local_118 + 0x78))();
                        *(undefined1 *)(iStack_330 + 0x26) = 1;
                        *(undefined1 *)(iStack_330 + 0x80) = 1;
                        pcStack_6a4 = 
                        "character/swordman/effect/animation/rapidmoveslash/lightready1-3.ani";
                        uStack_6a8 = 0x46ee2b;
                        iStack_130 = iStack_330;
                        FUN_004054a0();
                        pcStack_6a4 = (char *)0x46ee3e;
                        iStack_334 = (**(code **)(*(int *)local_118 + 0x78))();
                        *(undefined1 *)(iStack_334 + 0x26) = 1;
                        *(undefined1 *)(iStack_334 + 0x80) = 1;
                        iStack_130 = iStack_334;
                        FUN_004054a0();
                        iStack_338 = (**(code **)(*(int *)local_118 + 0x78))();
                        *(undefined1 *)(iStack_338 + 0x26) = 1;
                        *(undefined1 *)(iStack_338 + 0x80) = 1;
                        iStack_130 = iStack_338;
                        FUN_004054a0();
                        iStack_38c = (**(code **)(*(int *)local_118 + 0x78))();
                        *(undefined1 *)(iStack_38c + 0x26) = 1;
                        *(undefined1 *)(iStack_38c + 0x80) = 1;
                        iStack_130 = iStack_38c;
                        FUN_004054a0();
                        iVar3 = (**(code **)(*(int *)local_118 + 0x78))();
                        *(undefined1 *)(iVar3 + 0x26) = 1;
                        *(undefined1 *)(iVar3 + 0x80) = 1;
                      }
                    }
                    *(int *)(local_118 + 0xa0c) = 0;
                    *(int *)(local_118 + 0x1a4) = 0xbe;
                    *(int *)(local_118 + 0x1a8) = 4;
                    *(CMFCColorMenuButton **)(local_118 + 0x9b0) = param_1;
                    ExceptionList = local_10;
                    return (CMFCColorMenuButton *)0x1;
                  }
                  if (*(int *)(local_118 + 0x1a8) == 5) {
                    CMFCColorMenuButton::Initialize(local_118);
                    FUN_00466500();
                    (**(code **)(*(int *)local_118 + 0x138))();
                    iVar3 = FUN_00405270();
                    if (*(int *)(iVar3 + 4) != 0) {
                      FUN_00405270();
                      game_loop_helper_e9240();
                      iVar3 = game_loop_helper_cc840();
                      if (*(int *)(iVar3 + 0x140) == 5) {
                        pCStack_674 = (CMFCColorMenuButton *)0x7487a0;
                        pCStack_678 = (CMFCColorMenuButton *)0x46f04e;
                        FUN_004054a0();
                        pCStack_674 = (CMFCColorMenuButton *)0x46f061;
                        iStack_344 = (**(code **)(*(int *)local_118 + 0x78))();
                        *(undefined1 *)(iStack_344 + 0x26) = 1;
                        *(undefined1 *)(iStack_344 + 0x80) = 1;
                        pcStack_68c = 
                        "character/swordman/effect/animation/rapidmoveslash/lightready2-2.ani";
                        uStack_690 = 0x46f09f;
                        iStack_134 = iStack_344;
                        FUN_004054a0();
                        pcStack_68c = (char *)0x46f0b2;
                        iStack_348 = (**(code **)(*(int *)local_118 + 0x78))();
                        *(undefined1 *)(iStack_348 + 0x26) = 1;
                        *(undefined1 *)(iStack_348 + 0x80) = 1;
                        pcStack_6a4 = 
                        "character/swordman/effect/animation/rapidmoveslash/lightready2-3.ani";
                        uStack_6a8 = 0x46f0f0;
                        iStack_134 = iStack_348;
                        FUN_004054a0();
                        pcStack_6a4 = (char *)0x46f103;
                        iStack_34c = (**(code **)(*(int *)local_118 + 0x78))();
                        *(undefined1 *)(iStack_34c + 0x26) = 1;
                        *(undefined1 *)(iStack_34c + 0x80) = 1;
                        iStack_134 = iStack_34c;
                        FUN_004054a0();
                        iStack_350 = (**(code **)(*(int *)local_118 + 0x78))();
                        *(undefined1 *)(iStack_350 + 0x26) = 1;
                        *(undefined1 *)(iStack_350 + 0x80) = 1;
                        iStack_134 = iStack_350;
                        FUN_004054a0();
                        iStack_354 = (**(code **)(*(int *)local_118 + 0x78))();
                        *(undefined1 *)(iStack_354 + 0x26) = 1;
                        *(undefined1 *)(iStack_354 + 0x80) = 1;
                        iStack_134 = iStack_354;
                        FUN_004054a0();
                        iStack_358 = (**(code **)(*(int *)local_118 + 0x78))();
                        *(undefined1 *)(iStack_358 + 0x26) = 1;
                        *(undefined1 *)(iStack_358 + 0x80) = 1;
                        iStack_134 = iStack_358;
                      }
                    }
                    *(int *)(local_118 + 0xa0c) = 0;
                    pCStack_674 = (CMFCColorMenuButton *)0x748950;
                    pCStack_678 = (CMFCColorMenuButton *)0x46f244;
                    FUN_004054a0();
                    pCStack_674 = (CMFCColorMenuButton *)0x46f249;
                    FUN_004c3500();
                    *(int *)(local_118 + 0x1a4) = 0xbe;
                    *(int *)(local_118 + 0x1a8) = 6;
                    *(CMFCColorMenuButton **)(local_118 + 0x9b0) = param_1;
                    ExceptionList = local_10;
                    return (CMFCColorMenuButton *)0x1;
                  }
                }
                pCVar8 = (CMFCColorMenuButton *)0x0;
              }
              break;
            case (CMFCColorMenuButton *)0x49:
              cVar2 = FUN_00467700();
              if ((cVar2 == '\0') && (cVar2 = FUN_004666c0(), cVar2 == '\0')) {
                pCVar8 = (CMFCColorMenuButton *)0x0;
              }
              else {
                cVar2 = FUN_00482730();
                if (cVar2 == '\0') {
                  pCVar8 = (CMFCColorMenuButton *)0x0;
                }
                else {
                  FUN_00466500();
                  FUN_00467210();
                  CMFCColorMenuButton::Initialize(local_118);
                  (**(code **)(*(int *)local_118 + 0x138))();
                  pCStack_668 = (CMFCColorMenuButton *)0x0;
                  pCStack_66c = param_1;
                  pCStack_670 = (CMFCColorMenuButton *)0x46f32a;
                  FUN_0047bd30();
                  pCStack_668 = (CMFCColorMenuButton *)0x46f32f;
                  pCStack_668 = (CMFCColorMenuButton *)thunk_FUN_006e5750();
                  pCStack_66c = (CMFCColorMenuButton *)0x46f33b;
                  FUN_00631910();
                  pCStack_668 = (CMFCColorMenuButton *)0x4e41;
                  pCStack_66c = (CMFCColorMenuButton *)0x0;
                  pCStack_670 = (CMFCColorMenuButton *)0x0;
                  pCStack_674 = (CMFCColorMenuButton *)0x0;
                  pCStack_678 = local_118;
                  pcStack_67c = (char *)0x46f374;
                  FUN_0042f340();
                  pcStack_67c = "character/swordman/animation/illusionslash1.ani";
                  pcStack_680 = (char *)0x46f38c;
                  FUN_004054a0();
                  pcStack_67c = (char *)0x46f39f;
                  iStack_35c = (**(code **)(*(int *)local_118 + 0x78))();
                  pcStack_67c = (char *)0x46f3c4;
                  iStack_13c = iStack_35c;
                  iVar3 = (**(code **)(*(int *)local_118 + 0x58))();
                  pcStack_67c = (char *)(iVar3 + 0x34);
                  pcStack_680 = "j";
                  FUN_004275e0();
                  pcStack_67c = (char *)0x0;
                  pcStack_680 = (char *)0x46f3e6;
                  iVar3 = FUN_0040d680();
                  *(undefined1 *)(iVar3 + 0x3e) = 1;
                  pcStack_67c = (char *)0x0;
                  pcStack_680 = (char *)0x46f3fa;
                  iVar3 = FUN_0040d680();
                  *(undefined1 *)(iVar3 + 0x3a) = 0;
                  *(undefined4 *)(iStack_13c + 0x114) = 0xffffff9c;
                  *(undefined1 *)(iStack_13c + 0x26) = 1;
                  pcStack_67c = (char *)0x2;
                  pcStack_680 = "j";
                  FUN_0044e460();
                  pcStack_67c = (char *)0x0;
                  pcStack_680 = (char *)0x46f43e;
                  puVar6 = (undefined4 *)game_get_flag_object_01a70();
                  *puVar6 = 0;
                  pcStack_67c = (char *)0x0;
                  pcStack_680 = (char *)0x46f459;
                  (**(code **)(*(int *)local_118 + 0x58))();
                  iVar3 = FUN_0062fc10();
                  puVar6 = (undefined4 *)game_get_flag_object_01a70();
                  *puVar6 = *(undefined4 *)(iVar3 + 0x44);
                  FUN_0044e460();
                  puVar6 = (undefined4 *)game_get_flag_object_01a70();
                  *puVar6 = 0x3fc00000;
                  puVar6 = (undefined4 *)game_get_flag_object_01a70();
                  *puVar6 = 0x3fc00000;
                  pCStack_674 = (CMFCColorMenuButton *)0x7489ac;
                  pCStack_678 = (CMFCColorMenuButton *)0x46f4e0;
                  FUN_004054a0();
                  pCStack_674 = (CMFCColorMenuButton *)0x46f4e5;
                  FUN_004c3500();
                  *(int *)(local_118 + 0x1a4) = 0x1c2;
                  *(int *)(local_118 + 0x1a8) = 0;
                  if (*(int *)(local_118 + 500) == 1) {
                    pCVar8 = (CMFCColorMenuButton *)game_get_player_or_session_blob();
                    if (local_118 == pCVar8) {
                      pCStack_668 = (CMFCColorMenuButton *)0x5dc;
                      pCStack_66c = (CMFCColorMenuButton *)0x9;
                      pCStack_670 = (CMFCColorMenuButton *)0x0;
                      pcStack_68c = "sprite/interface/skillcutscene/ghost_weapon.img";
                      uStack_690 = 0x46f54e;
                      FUN_004054a0();
                      uStack_8 = 0;
                      pcStack_68c = (char *)0x0;
                      uStack_690 = 0;
                      pcStack_694 = (char *)0x8d;
                      pcStack_698 = (char *)0xfffffeb4;
                      pcStack_69c = (char *)0x46f56e;
                      game_get_state_ptr_d1520();
                      pcStack_69c = (char *)0x46f575;
                      FUN_004d58e0();
                      uStack_8 = 0xffffffff;
                      pcStack_69c = (char *)0x46f583;
                      FUN_0042e1d0();
                    }
                  }
                  else if ((*(int *)(local_118 + 500) == -1) &&
                          (pCVar8 = (CMFCColorMenuButton *)game_get_player_or_session_blob(), local_118 == pCVar8)) {
                    pCStack_668 = (CMFCColorMenuButton *)0x5dc;
                    pCStack_66c = (CMFCColorMenuButton *)0x8;
                    pCStack_670 = (CMFCColorMenuButton *)0x0;
                    pcStack_68c = "sprite/interface/skillcutscene/ghost_weapon.img";
                    uStack_690 = 0x46f5cc;
                    FUN_004054a0();
                    uStack_8 = 1;
                    pcStack_68c = (char *)0x0;
                    uStack_690 = 0;
                    pcStack_694 = (char *)0x8d;
                    pcStack_698 = (char *)0x280;
                    pcStack_69c = (char *)0x46f5ec;
                    game_get_state_ptr_d1520();
                    pcStack_69c = (char *)0x46f5f3;
                    FUN_004d58e0();
                    uStack_8 = 0xffffffff;
                    pcStack_69c = (char *)0x46f601;
                    FUN_0042e1d0();
                  }
                  *(CMFCColorMenuButton **)(local_118 + 0x9b0) = param_1;
                  pCVar8 = (CMFCColorMenuButton *)0x1;
                }
              }
              break;
            case (CMFCColorMenuButton *)0x4c:
              cVar2 = FUN_00467700();
              if ((cVar2 == '\0') && (cVar2 = FUN_004666c0(), cVar2 == '\0')) {
                pCVar8 = (CMFCColorMenuButton *)0x0;
              }
              else {
                cVar2 = FUN_00482730();
                if (cVar2 == '\0') {
                  pCVar8 = (CMFCColorMenuButton *)0x0;
                }
                else {
                  if (local_118[0xa8c] == (CMFCColorMenuButton)0x1) {
                    FUN_00466500();
                    FUN_00467210();
                    CMFCColorMenuButton::Initialize(local_118);
                    *(int *)(local_118 + 0x1a8) = 0;
                    FUN_00465880();
                  }
                  else {
                    fStack_364 = (float)*(int *)(local_118 + 0x6e8);
                    fVar9 = (float10)FUN_0047bd30();
                    fStack_360 = (float)fVar9;
                    if (fStack_364 <= fStack_360) {
                      pCVar8 = (CMFCColorMenuButton *)game_get_player_or_session_blob();
                      if (local_118 == pCVar8) {
                        pCStack_678 = (CMFCColorMenuButton *)&DAT_00748a38;
                        pcStack_67c = (char *)0x46f72b;
                        FUN_004054a0();
                        pCStack_678 = (CMFCColorMenuButton *)0x46f730;
                        FUN_0049d850();
                      }
                      ExceptionList = local_10;
                      return (CMFCColorMenuButton *)0x0;
                    }
                    FUN_00466500();
                    FUN_00467210();
                    CMFCColorMenuButton::Initialize(local_118);
                    *(int *)(local_118 + 0x1a8) = 0;
                    fVar9 = (float10)FUN_0047bd30();
                    fStack_368 = (float)fVar9;
                    *(int *)(local_118 + 0x6e8) =
                         (int)((float)*(int *)(local_118 + 0x6e8) - fStack_368);
                    *(int *)(local_118 + 0x1a4) = 0x18;
                    (**(code **)(*(int *)local_118 + 0x138))();
                    pCStack_668 = *(CMFCColorMenuButton **)(local_118 + 0xab8);
                    pCStack_66c = (CMFCColorMenuButton *)0x46f7f0;
                    iVar3 = FUN_005d9da0();
                    *(int *)(local_118 + 0x924) =
                         (*(int *)(iVar3 + 0xc4) * 1000) / *(int *)(local_118 + 0x750);
                    *(int *)(local_118 + 0x92c) = 0;
                    *(int *)(local_118 + 0x928) = 0;
                    pCStack_668 = (CMFCColorMenuButton *)0x46f856;
                    (**(code **)(*(int *)local_118 + 0x104))();
                    pcStack_680 = "character/swordman/effect/animation/frenzy/cast.ani";
                    pcStack_684 = (char *)0x46f86c;
                    FUN_004054a0();
                    pcStack_680 = (char *)0x46f87f;
                    (**(code **)(*(int *)local_118 + 0x78))();
                    pCStack_674 = (CMFCColorMenuButton *)0x748a74;
                    pCStack_678 = (CMFCColorMenuButton *)0x46f895;
                    FUN_004054a0();
                    pCStack_674 = (CMFCColorMenuButton *)0x46f89a;
                    FUN_004c3570();
                    pCStack_674 = (CMFCColorMenuButton *)0x748a80;
                    pCStack_678 = (CMFCColorMenuButton *)0x46f8b2;
                    FUN_004054a0();
                    pCStack_674 = (CMFCColorMenuButton *)0x46f8b7;
                    FUN_004c3570();
                  }
                  *(CMFCColorMenuButton **)(local_118 + 0x9b0) = param_1;
                  pCVar8 = (CMFCColorMenuButton *)0x1;
                }
              }
              break;
            case (CMFCColorMenuButton *)0x4d:
              if (((((*(int *)(local_118 + 0x1a4) == 0) || (*(int *)(local_118 + 0x1a4) == 1)) ||
                   (*(int *)(local_118 + 0x1a4) == 2)) || (cVar2 = FUN_00467700(), cVar2 != '\0'))
                 && (*(int *)(local_118 + 0x1a8) = 0, *(int *)(local_118 + 0x1a8) == 0)) {
                cVar2 = FUN_00482730();
                if (cVar2 == '\0') {
                  pCVar8 = (CMFCColorMenuButton *)0x0;
                }
                else {
                  FUN_00466500();
                  FUN_00467210();
                  CMFCColorMenuButton::Initialize(local_118);
                  (**(code **)(*(int *)local_118 + 0x138))();
                  pCStack_668 = (CMFCColorMenuButton *)0x3;
                  pCStack_66c = (CMFCColorMenuButton *)0x46f9b3;
                  (**(code **)(*(int *)local_118 + 0x13c))();
                  pCStack_66c = (CMFCColorMenuButton *)0x0;
                  pCStack_670 = (CMFCColorMenuButton *)0x0;
                  pCStack_674 = (CMFCColorMenuButton *)0x4d;
                  pCStack_678 = (CMFCColorMenuButton *)0x46f9c4;
                  FUN_0047bd30();
                  pCStack_670 = (CMFCColorMenuButton *)0x46f9c9;
                  pCStack_670 = (CMFCColorMenuButton *)thunk_FUN_006e5750();
                  pCStack_674 = (CMFCColorMenuButton *)0x46f9d5;
                  FUN_00631910();
                  pcStack_684 = "character/swordman/effect/animation/moonlightslash1.ani";
                  pcStack_688 = (char *)0x46f9eb;
                  FUN_004054a0();
                  pcStack_684 = (char *)0x46f9fe;
                  iStack_36c = (**(code **)(*(int *)local_118 + 0x78))();
                  *(undefined1 *)(iStack_36c + 0x80) = 1;
                  *(undefined1 *)(iStack_36c + 0xe0) = 1;
                  iStack_1c4 = iStack_36c;
                  iVar3 = FUN_0047bcc0();
                  *(int *)(local_118 + 0x230) = iVar3 * 1000;
                  iVar3 = FUN_0047bcc0();
                  *(int *)(local_118 + 0x23c) = iVar3;
                  *(int *)(local_118 + 0x1a4) = 0x3c;
                  *(int *)(local_118 + 0x1a8) = 1;
                  pCStack_674 = (CMFCColorMenuButton *)0x748ac4;
                  pCStack_678 = (CMFCColorMenuButton *)0x46fa9b;
                  FUN_004054a0();
                  pCStack_674 = (CMFCColorMenuButton *)0x46faa0;
                  FUN_004c3500();
                  pCStack_674 = (CMFCColorMenuButton *)0x748aec;
                  pCStack_678 = (CMFCColorMenuButton *)0x46fab8;
                  FUN_004054a0();
                  pCStack_674 = (CMFCColorMenuButton *)0x46fabd;
                  FUN_004c3500();
                  *(CMFCColorMenuButton **)(local_118 + 0x9b0) = param_1;
                  pCVar8 = (CMFCColorMenuButton *)0x1;
                }
              }
              else {
                if ((*(int *)(local_118 + 0x1a4) == 0x3c) &&
                   (piVar7 = (int *)(**(code **)(*(int *)local_118 + 0x9c))(), 3 < *piVar7)) {
                  if (*(int *)(local_118 + 0x1a8) == 1) {
                    FUN_00466500();
                    CMFCColorMenuButton::Initialize(local_118);
                    (**(code **)(*(int *)local_118 + 0x138))();
                    pCStack_668 = (CMFCColorMenuButton *)0x3;
                    pCStack_66c = (CMFCColorMenuButton *)0x46fb68;
                    (**(code **)(*(int *)local_118 + 0x13c))();
                    pCStack_66c = (CMFCColorMenuButton *)0x0;
                    pCStack_670 = (CMFCColorMenuButton *)0x1;
                    pCStack_674 = (CMFCColorMenuButton *)0x4d;
                    pCStack_678 = (CMFCColorMenuButton *)0x46fb79;
                    FUN_0047bd30();
                    pCStack_670 = (CMFCColorMenuButton *)0x46fb7e;
                    pCStack_670 = (CMFCColorMenuButton *)thunk_FUN_006e5750();
                    pCStack_674 = (CMFCColorMenuButton *)0x46fb8a;
                    FUN_00631910();
                    pcStack_684 = "character/swordman/effect/animation/moonlightslash2.ani";
                    pcStack_688 = (char *)0x46fba0;
                    FUN_004054a0();
                    pcStack_684 = (char *)0x46fbb3;
                    iStack_370 = (**(code **)(*(int *)local_118 + 0x78))();
                    *(undefined1 *)(iStack_370 + 0x80) = 1;
                    *(undefined1 *)(iStack_370 + 0xe0) = 1;
                    iStack_1c8 = iStack_370;
                    iVar3 = FUN_0047bcc0();
                    *(int *)(local_118 + 0x230) = iVar3 * 1000;
                    iVar3 = FUN_0047bcc0();
                    *(int *)(local_118 + 0x23c) = iVar3;
                    *(int *)(local_118 + 0x1a8) = 2;
                    *(int *)(local_118 + 0x1a4) = 0x3c;
                    pCStack_674 = (CMFCColorMenuButton *)0x748b50;
                    pCStack_678 = (CMFCColorMenuButton *)0x46fc50;
                    FUN_004054a0();
                    pCStack_674 = (CMFCColorMenuButton *)0x46fc55;
                    FUN_004c3500();
                    *(CMFCColorMenuButton **)(local_118 + 0x9b0) = param_1;
                    ExceptionList = local_10;
                    return (CMFCColorMenuButton *)0x1;
                  }
                  if (*(int *)(local_118 + 0x1a8) == 2) {
                    FUN_00466500();
                    CMFCColorMenuButton::Initialize(local_118);
                    (**(code **)(*(int *)local_118 + 0x138))();
                    pCStack_668 = (CMFCColorMenuButton *)0x3;
                    pCStack_66c = (CMFCColorMenuButton *)0x46fcd3;
                    (**(code **)(*(int *)local_118 + 0x13c))();
                    pCStack_66c = (CMFCColorMenuButton *)0x0;
                    pCStack_670 = (CMFCColorMenuButton *)0x2;
                    pCStack_674 = (CMFCColorMenuButton *)0x4d;
                    pCStack_678 = (CMFCColorMenuButton *)0x46fce4;
                    FUN_0047bd30();
                    pCStack_670 = (CMFCColorMenuButton *)0x46fce9;
                    pCStack_670 = (CMFCColorMenuButton *)thunk_FUN_006e5750();
                    pCStack_674 = (CMFCColorMenuButton *)0x46fcf5;
                    FUN_00631910();
                    pcStack_684 = "character/swordman/effect/animation/moonlightslashfull.ani";
                    pcStack_688 = (char *)0x46fd0b;
                    FUN_004054a0();
                    pcStack_684 = (char *)0x46fd1e;
                    iStack_374 = (**(code **)(*(int *)local_118 + 0x78))();
                    *(undefined1 *)(iStack_374 + 0x80) = 1;
                    *(undefined1 *)(iStack_374 + 0xe0) = 1;
                    iStack_1cc = iStack_374;
                    iVar3 = FUN_0047bcc0();
                    *(int *)(local_118 + 0x230) = iVar3 * 1000;
                    iVar3 = FUN_0047bcc0();
                    *(int *)(local_118 + 0x23c) = iVar3;
                    *(int *)(local_118 + 0x1a8) = 3;
                    *(int *)(local_118 + 0x1a4) = 0x3c;
                    *(CMFCColorMenuButton **)(local_118 + 0x9b0) = param_1;
                    ExceptionList = local_10;
                    return (CMFCColorMenuButton *)0x1;
                  }
                }
                pCVar8 = (CMFCColorMenuButton *)0x0;
              }
              break;
            case (CMFCColorMenuButton *)0x4f:
              if (local_118[0xa8c] == (CMFCColorMenuButton)0x0) {
                pCVar8 = (CMFCColorMenuButton *)game_get_player_or_session_blob();
                if (local_118 == pCVar8) {
                  pCStack_678 = (CMFCColorMenuButton *)&DAT_00748bb8;
                  pcStack_67c = (char *)0x46fdfe;
                  FUN_004054a0();
                  pCStack_678 = (CMFCColorMenuButton *)0x46fe03;
                  FUN_0049d850();
                }
                pCVar8 = (CMFCColorMenuButton *)0x0;
              }
              else {
                cVar2 = FUN_00467700();
                if ((cVar2 == '\0') && (cVar2 = FUN_004666c0(), cVar2 == '\0')) {
                  pCVar8 = (CMFCColorMenuButton *)0x0;
                }
                else {
                  cVar2 = FUN_00482730();
                  if (cVar2 == '\0') {
                    pCVar8 = (CMFCColorMenuButton *)0x0;
                  }
                  else {
                    FUN_00466500();
                    FUN_00467210();
                    CMFCColorMenuButton::Initialize(local_118);
                    (**(code **)(*(int *)local_118 + 0x138))();
                    *(int *)(local_118 + 0x1a4) = 300;
                    *(int *)(local_118 + 0x1a8) = 0;
                    pCStack_674 = (CMFCColorMenuButton *)0x748bd8;
                    pCStack_678 = (CMFCColorMenuButton *)0x46fecd;
                    FUN_004054a0();
                    pCStack_674 = (CMFCColorMenuButton *)0x46fed2;
                    FUN_004c3500();
                    pCStack_674 = (CMFCColorMenuButton *)0x748c08;
                    pCStack_678 = (CMFCColorMenuButton *)0x46feea;
                    FUN_004054a0();
                    pCStack_674 = (CMFCColorMenuButton *)0x46feef;
                    FUN_004c3500();
                    pCStack_674 = (CMFCColorMenuButton *)0x748c3c;
                    pCStack_678 = (CMFCColorMenuButton *)0x46ff07;
                    FUN_004054a0();
                    pCStack_674 = (CMFCColorMenuButton *)0x46ff0c;
                    FUN_004c3500();
                    *(CMFCColorMenuButton **)(local_118 + 0x9b0) = param_1;
                    pCVar8 = (CMFCColorMenuButton *)0x1;
                  }
                }
              }
              break;
            case (CMFCColorMenuButton *)0x51:
              if (local_118[0xa8c] == (CMFCColorMenuButton)0x0) {
                pCVar8 = (CMFCColorMenuButton *)game_get_player_or_session_blob();
                if (local_118 == pCVar8) {
                  pCStack_678 = (CMFCColorMenuButton *)&DAT_00748c70;
                  pcStack_67c = (char *)0x46ff60;
                  FUN_004054a0();
                  pCStack_678 = (CMFCColorMenuButton *)0x46ff65;
                  FUN_0049d850();
                }
                pCVar8 = (CMFCColorMenuButton *)0x0;
              }
              else {
                fStack_37c = (float)*(int *)(local_118 + 0x6e8);
                fVar9 = (float10)FUN_0047bd30();
                fStack_378 = (float)fVar9;
                if (fStack_378 < fStack_37c) {
                  cVar2 = FUN_00467700();
                  if ((cVar2 == '\0') && (cVar2 = FUN_004666c0(), cVar2 == '\0')) {
                    pCVar8 = (CMFCColorMenuButton *)0x0;
                  }
                  else {
                    cVar2 = FUN_00482730();
                    if (cVar2 == '\0') {
                      pCVar8 = (CMFCColorMenuButton *)0x0;
                    }
                    else {
                      FUN_00466500();
                      fVar9 = (float10)FUN_0047bd30();
                      fStack_380 = (float)fVar9;
                      *(int *)(local_118 + 0x6e8) =
                           (int)((float)*(int *)(local_118 + 0x6e8) - fStack_380);
                      FUN_00467210();
                      CMFCColorMenuButton::Initialize(local_118);
                      (**(code **)(*(int *)local_118 + 0x138))();
                      pCStack_668 = (CMFCColorMenuButton *)0x3;
                      pCStack_66c = (CMFCColorMenuButton *)0x4700c5;
                      (**(code **)(*(int *)local_118 + 0x13c))();
                      pCStack_66c = (CMFCColorMenuButton *)0x0;
                      pCStack_670 = (CMFCColorMenuButton *)0x0;
                      pCStack_674 = (CMFCColorMenuButton *)0x51;
                      pCStack_678 = (CMFCColorMenuButton *)0x4700d6;
                      FUN_0047bd30();
                      pCStack_670 = (CMFCColorMenuButton *)0x4700db;
                      pCStack_670 = (CMFCColorMenuButton *)thunk_FUN_006e5750();
                      pCStack_674 = (CMFCColorMenuButton *)0x4700e7;
                      FUN_00631910();
                      pcStack_684 = 
                      "character/swordman/effect/animation/outragebreak/sword_ready_none.ani";
                      pcStack_688 = (char *)0x4700fd;
                      FUN_004054a0();
                      pcStack_684 = (char *)0x470110;
                      (**(code **)(*(int *)local_118 + 0x78))();
                      pcStack_69c = 
                      "character/swordman/effect/animation/outragebreak/sword_ready_ldodge.ani";
                      uStack_6a0 = 0x470126;
                      FUN_004054a0();
                      pcStack_69c = (char *)0x470139;
                      (**(code **)(*(int *)local_118 + 0x78))();
                      *(int *)(local_118 + 0x1a4) = 0xaa;
                      *(int *)(local_118 + 0x1a8) = 0;
                      pCStack_674 = (CMFCColorMenuButton *)0x748d28;
                      pCStack_678 = (CMFCColorMenuButton *)0x47016f;
                      FUN_004054a0();
                      pCStack_674 = (CMFCColorMenuButton *)0x470174;
                      FUN_004c3500();
                      if (*(int *)(local_118 + 500) == 1) {
                        pCStack_674 = (CMFCColorMenuButton *)0x748d58;
                        pCStack_678 = (CMFCColorMenuButton *)0x47019f;
                        FUN_004054a0();
                        pCStack_674 = (CMFCColorMenuButton *)0x4701a4;
                        FUN_004c3570();
                        pCVar8 = (CMFCColorMenuButton *)game_get_player_or_session_blob();
                        if (local_118 == pCVar8) {
                          pCStack_668 = (CMFCColorMenuButton *)0x5dc;
                          pCStack_66c = (CMFCColorMenuButton *)0x9;
                          pCStack_670 = (CMFCColorMenuButton *)0x0;
                          pcStack_68c = "sprite/interface/skillcutscene/ghost_berserker.img";
                          uStack_690 = 0x4701de;
                          FUN_004054a0();
                          uStack_8 = 2;
                          pcStack_68c = (char *)0x0;
                          uStack_690 = 0;
                          pcStack_694 = (char *)0x8d;
                          pcStack_698 = (char *)0xfffffeb4;
                          pcStack_69c = (char *)0x4701fe;
                          game_get_state_ptr_d1520();
                          pcStack_69c = (char *)0x470205;
                          FUN_004d58e0();
                          uStack_8 = 0xffffffff;
                          pcStack_69c = (char *)0x470213;
                          FUN_0042e1d0();
                        }
                      }
                      else if (*(int *)(local_118 + 500) == -1) {
                        pCStack_674 = (CMFCColorMenuButton *)0x748d9c;
                        pCStack_678 = (CMFCColorMenuButton *)0x470241;
                        FUN_004054a0();
                        pCStack_674 = (CMFCColorMenuButton *)0x470246;
                        FUN_004c3570();
                        pCVar8 = (CMFCColorMenuButton *)game_get_player_or_session_blob();
                        if (local_118 == pCVar8) {
                          pCStack_668 = (CMFCColorMenuButton *)0x5dc;
                          pCStack_66c = (CMFCColorMenuButton *)0x8;
                          pCStack_670 = (CMFCColorMenuButton *)0x0;
                          pcStack_68c = "sprite/interface/skillcutscene/ghost_berserker.img";
                          uStack_690 = 0x470280;
                          FUN_004054a0();
                          uStack_8 = 3;
                          pcStack_68c = (char *)0x0;
                          uStack_690 = 0;
                          pcStack_694 = (char *)0x8d;
                          pcStack_698 = (char *)0x280;
                          pcStack_69c = (char *)0x4702a0;
                          game_get_state_ptr_d1520();
                          pcStack_69c = (char *)0x4702a7;
                          FUN_004d58e0();
                          uStack_8 = 0xffffffff;
                          pcStack_69c = (char *)0x4702b5;
                          FUN_0042e1d0();
                        }
                      }
                      *(CMFCColorMenuButton **)(local_118 + 0x9b0) = param_1;
                      pCVar8 = (CMFCColorMenuButton *)0x1;
                    }
                  }
                }
                else {
                  pCVar8 = (CMFCColorMenuButton *)game_get_player_or_session_blob();
                  if (local_118 == pCVar8) {
                    pCStack_678 = (CMFCColorMenuButton *)&DAT_00748c90;
                    pcStack_67c = (char *)0x46ffd6;
                    FUN_004054a0();
                    pCStack_678 = (CMFCColorMenuButton *)0x46ffdb;
                    FUN_0049d850();
                  }
                  pCVar8 = (CMFCColorMenuButton *)0x0;
                }
              }
              break;
            case (CMFCColorMenuButton *)0x54:
              cVar2 = FUN_00467700();
              if ((cVar2 == '\0') && (cVar2 = FUN_004666c0(), cVar2 == '\0')) {
                pCVar8 = (CMFCColorMenuButton *)0x0;
              }
              else {
                cVar2 = FUN_00482730();
                if (cVar2 == '\0') {
                  pCVar8 = (CMFCColorMenuButton *)0x0;
                }
                else {
                  FUN_00466500();
                  FUN_00467210();
                  CMFCColorMenuButton::Initialize(local_118);
                  *(int *)(local_118 + 0x1a8) = 0;
                  *(int *)(local_118 + 0x1a4) = 0x50;
                  (**(code **)(*(int *)local_118 + 0x138))();
                  pCStack_668 = *(CMFCColorMenuButton **)(local_118 + 0xab8);
                  pCStack_66c = (CMFCColorMenuButton *)0x46bd8b;
                  iVar3 = FUN_005d9da0();
                  *(int *)(local_118 + 0x924) =
                       (*(int *)(iVar3 + 0xc4) * 1000) / *(int *)(local_118 + 0x750);
                  *(int *)(local_118 + 0x92c) = 0;
                  *(int *)(local_118 + 0x928) = 0;
                  pCStack_668 = (CMFCColorMenuButton *)0x46bdf1;
                  (**(code **)(*(int *)local_118 + 0x104))();
                  *(CMFCColorMenuButton **)(local_118 + 0x9b0) = param_1;
                  pCVar8 = (CMFCColorMenuButton *)0x1;
                }
              }
              break;
            case (CMFCColorMenuButton *)0xa9:
              cVar2 = FUN_00467700();
              if ((cVar2 == '\0') && (cVar2 = FUN_004666c0(), cVar2 == '\0')) {
                pCVar8 = (CMFCColorMenuButton *)0x0;
              }
              else {
                cVar2 = FUN_00482730();
                if (cVar2 == '\0') {
                  pCVar8 = (CMFCColorMenuButton *)0x0;
                }
                else {
                  FUN_00466500();
                  FUN_00467210();
                  CMFCColorMenuButton::Initialize(local_118);
                  (**(code **)(*(int *)local_118 + 0x138))();
                  pCStack_668 = (CMFCColorMenuButton *)0x470372;
                  (**(code **)(*(int *)local_118 + 0x8c))();
                  pCStack_668 = (CMFCColorMenuButton *)0x470385;
                  (**(code **)(*(int *)local_118 + 0x58))();
                  pCStack_668 = (CMFCColorMenuButton *)0x47038c;
                  iVar3 = FUN_0062fc30();
                  pCStack_668 = *(CMFCColorMenuButton **)(iVar3 + 0x44);
                  pCStack_66c = (CMFCColorMenuButton *)0x4703a6;
                  (**(code **)(*(int *)local_118 + 0x90))();
                  *(int *)(local_118 + 0x1a4) = 8;
                  *(int *)(local_118 + 0x1a8) = 0;
                  *(int *)(local_118 + 0x244) = -0x5dc;
                  iVar3 = FUN_0047bcc0();
                  *(int *)(local_118 + 0x238) =
                       ((iVar3 * 100000) / *(int *)(local_118 + 0x730)) * 1000;
                  *(int *)(local_118 + 0x230) = *(int *)(local_118 + 0x754) * 0x11c;
                  pCStack_674 = (CMFCColorMenuButton *)0x748de0;
                  pCStack_678 = (CMFCColorMenuButton *)0x47043e;
                  FUN_004054a0();
                  pCStack_674 = (CMFCColorMenuButton *)0x470443;
                  FUN_004c3500();
                  *(CMFCColorMenuButton **)(local_118 + 0x9b0) = param_1;
                  pCVar8 = (CMFCColorMenuButton *)0x1;
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    pCVar8 = (CMFCColorMenuButton *)0x0;
  }
  ExceptionList = local_10;
  return pCVar8;
}


/* ==== 0047ce20  img_path_loader_22  size=662 ==== */

void img_path_loader_22(int param_1,int param_2)

{
  float10 fVar1;
  undefined4 uStack_74;
  char *pcStack_70;
  undefined1 auStack_6c [16];
  undefined4 uStack_5c;
  int iStack_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  int iStack_34;
  undefined4 local_30;
  undefined1 *local_2c;
  undefined1 *local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  undefined4 local_14;
  undefined4 local_10;
  float local_c;
  float local_8;
  
  if (param_1 != 0) {
    local_30 = 0xffffffff;
    iStack_34 = 0x5e;
    local_38 = 0;
    local_3c = 0;
    local_40 = 0x3f800000;
    local_44 = 0x3f800000;
    uStack_48 = 0xffffffff;
    uStack_4c = 0;
    iStack_50 = 0;
    uStack_54 = 0x26;
    iStack_58 = param_2 * 400 + 0x15;
    uStack_5c = 0xad;
    local_1c = (undefined1 *)&uStack_74;
    FUN_004054a0("sprite/interface/base.img");
    FUN_004baf90();
    local_30 = 0;
    iStack_34 = 0;
    local_38 = 0x3f800000;
    local_3c = 0x3f800000;
    local_40 = 0xffffffff;
    local_44 = 0;
    uStack_48 = 0;
    uStack_4c = 0x33;
    iStack_50 = param_2 * 400 + 0x73;
    uStack_54 = 0xae;
    local_20 = auStack_6c;
    pcStack_70 = "sprite/interface/base.img";
    uStack_74 = 0x47cee6;
    FUN_004054a0();
    pcStack_70 = (char *)0x47cef1;
    FUN_004baec0();
    local_30 = 0;
    iStack_34 = 0;
    local_38 = 0x3f800000;
    local_3c = 0x3f800000;
    local_40 = 0xffffffff;
    local_44 = 0;
    uStack_48 = 0;
    uStack_4c = 0x26;
    iStack_50 = param_2 * 400 + 0x17;
    uStack_54 = 0;
    local_24 = auStack_6c;
    pcStack_70 = "sprite/character/defaultfaces.img";
    uStack_74 = 0x47cf40;
    FUN_004054a0();
    pcStack_70 = (char *)0x47cf4b;
    FUN_004baec0();
    local_30 = 0xffffffff;
    iStack_34 = 0x47cf56;
    fVar1 = (float10)FUN_00631890();
    local_8 = (float)fVar1;
    iStack_34 = (int)(local_8 * 65.0);
    local_38 = 0;
    local_3c = 0;
    local_40 = 0x3f800000;
    local_44 = 0x3f800000;
    uStack_48 = 0xffffffff;
    uStack_4c = 0;
    iStack_50 = 0;
    uStack_54 = 0x35;
    iStack_58 = param_2 * 400 + 0x32;
    uStack_5c = 0xb0;
    local_28 = (undefined1 *)&uStack_74;
    FUN_004054a0("sprite/interface/base.img");
    FUN_004baf90();
    local_30 = 0xffffffff;
    iStack_34 = 0x47cfd2;
    fVar1 = (float10)FUN_006318d0();
    local_c = (float)fVar1;
    iStack_34 = (int)(local_c * 65.0);
    local_38 = 0;
    local_3c = 0;
    local_40 = 0x3f800000;
    local_44 = 0x3f800000;
    uStack_48 = 0xffffffff;
    uStack_4c = 0;
    iStack_50 = 0;
    uStack_54 = 0x3d;
    iStack_58 = param_2 * 400 + 0x32;
    uStack_5c = 0xb1;
    local_2c = (undefined1 *)&uStack_74;
    FUN_004054a0("sprite/interface/base.img");
    FUN_004baf90();
    local_10 = *(undefined4 *)(param_1 + 0xc88);
    local_14 = *(undefined4 *)(param_1 + 0xc8c);
    *(undefined4 *)(param_1 + 0xc88) = 0;
    *(undefined4 *)(param_1 + 0xc8c) = 0;
    local_30 = 0x26;
    iStack_34 = param_2 * 400 + 0x37;
    local_38 = param_1 + 0xc84;
    local_3c = 0x47d098;
    FUN_004bb400();
    *(undefined4 *)(param_1 + 0xc88) = local_10;
    *(undefined4 *)(param_1 + 0xc8c) = local_14;
  }
  return;
}


/* ==== 0047d0c0  img_path_loader_23  size=685 ==== */

void img_path_loader_23(int param_1,int param_2)

{
  float10 fVar1;
  undefined4 uStack_74;
  char *pcStack_70;
  undefined1 auStack_6c [16];
  undefined4 uStack_5c;
  int iStack_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  int iStack_34;
  undefined4 local_30;
  undefined1 *local_2c;
  undefined1 *local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  undefined4 local_14;
  undefined4 local_10;
  float local_c;
  float local_8;
  
  if (param_1 != 0) {
    local_30 = 0xffffffff;
    iStack_34 = 0x5e;
    local_38 = 0;
    local_3c = 0;
    local_40 = 0x3f800000;
    local_44 = 0x3f800000;
    uStack_48 = 0xffffffff;
    uStack_4c = 0;
    iStack_50 = 0;
    uStack_54 = 0x4d;
    iStack_58 = param_2 * 100 + 0x15;
    uStack_5c = 0xad;
    local_1c = (undefined1 *)&uStack_74;
    FUN_004054a0("sprite/interface/base.img");
    FUN_004baf90();
    local_30 = 0;
    iStack_34 = 0;
    local_38 = 0x3f800000;
    local_3c = 0x3f800000;
    local_40 = 0xffffffff;
    local_44 = 0;
    uStack_48 = 0;
    uStack_4c = 0x5a;
    iStack_50 = param_2 * 100 + 0x73;
    uStack_54 = 0xae;
    local_20 = auStack_6c;
    pcStack_70 = "sprite/interface/base.img";
    uStack_74 = 0x47d180;
    FUN_004054a0();
    pcStack_70 = (char *)0x47d18b;
    FUN_004baec0();
    local_30 = 0;
    iStack_34 = 0;
    local_38 = 0x3f800000;
    local_3c = 0x3f800000;
    local_40 = 0xffffffff;
    local_44 = 0;
    uStack_48 = 0;
    uStack_4c = 0x4d;
    iStack_50 = param_2 * 100 + 0x17;
    uStack_54 = 0;
    local_24 = auStack_6c;
    pcStack_70 = "sprite/character/defaultfaces.img";
    uStack_74 = 0x47d1d7;
    FUN_004054a0();
    pcStack_70 = (char *)0x47d1e2;
    FUN_004baec0();
    local_30 = 0xffffffff;
    iStack_34 = 0x47d1ed;
    fVar1 = (float10)FUN_00631890();
    local_8 = (float)fVar1;
    iStack_34 = (int)(local_8 * 65.0);
    local_38 = 0;
    local_3c = 0;
    local_40 = 0x3f800000;
    local_44 = 0x3f800000;
    uStack_48 = 0xffffffff;
    uStack_4c = 0;
    iStack_50 = 0;
    uStack_54 = 0x5c;
    iStack_58 = param_2 * 100 + 0x32;
    uStack_5c = 0xb0;
    local_28 = (undefined1 *)&uStack_74;
    FUN_004054a0("sprite/interface/base.img");
    FUN_004baf90();
    local_30 = 0xffffffff;
    iStack_34 = 0x47d266;
    fVar1 = (float10)FUN_006318d0();
    local_c = (float)fVar1;
    iStack_34 = (int)(local_c * 65.0);
    local_38 = 0;
    local_3c = 0;
    local_40 = 0x3f800000;
    local_44 = 0x3f800000;
    uStack_48 = 0xffffffff;
    uStack_4c = 0;
    iStack_50 = 0;
    uStack_54 = 100;
    iStack_58 = param_2 * 100 + 0x32;
    uStack_5c = 0xb1;
    local_2c = (undefined1 *)&uStack_74;
    FUN_004054a0("sprite/interface/base.img");
    FUN_004baf90();
    if (*(char *)(param_1 + 0xdb9) == '\0') {
      *(undefined4 *)(param_1 + 0xc90) = 0xffffffff;
    }
    else {
      *(undefined4 *)(param_1 + 0xc90) = 0xffff0000;
    }
    local_10 = *(undefined4 *)(param_1 + 0xc88);
    local_14 = *(undefined4 *)(param_1 + 0xc8c);
    *(undefined4 *)(param_1 + 0xc88) = 0;
    *(undefined4 *)(param_1 + 0xc8c) = 0;
    local_30 = 0x4d;
    iStack_34 = param_2 * 100 + 0x37;
    local_38 = param_1 + 0xc84;
    local_3c = 0x47d34f;
    FUN_004bb400();
    *(undefined4 *)(param_1 + 0xc88) = local_10;
    *(undefined4 *)(param_1 + 0xc8c) = local_14;
  }
  return;
}


/* ==== 0049bb60  img_path_loader_24  size=2388 ==== */

void img_path_loader_24(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined1 auStack_18c [20];
  undefined4 uStack_178;
  char *pcStack_174;
  undefined1 auStack_170 [16];
  undefined4 uStack_160;
  char *pcStack_15c;
  undefined4 auStack_158 [5];
  undefined4 uStack_144;
  undefined4 *puStack_140;
  undefined4 *puStack_13c;
  undefined1 *puStack_138;
  code *pcStack_134;
  uint uStack_130;
  undefined1 local_124 [4];
  undefined1 local_120 [4];
  undefined1 *local_11c;
  undefined4 local_118;
  undefined1 *local_114;
  undefined4 local_110;
  undefined1 *local_10c;
  undefined1 *local_108;
  undefined4 local_104;
  undefined1 *local_100;
  undefined4 local_fc;
  undefined1 *local_f8;
  undefined1 *local_f4;
  undefined4 local_f0;
  undefined1 *local_ec;
  undefined4 local_e8;
  undefined1 *local_e4;
  undefined1 *local_e0;
  undefined4 local_dc;
  undefined1 *local_d8;
  undefined4 local_d4;
  undefined1 *local_d0;
  undefined1 *local_cc;
  undefined4 local_c8;
  undefined1 *local_c4;
  undefined4 local_c0;
  undefined1 *local_bc;
  undefined1 *local_b8;
  undefined4 local_b4;
  undefined1 *local_b0;
  undefined4 local_ac;
  undefined1 *local_a8;
  undefined1 *local_a4;
  undefined4 local_a0;
  undefined1 *local_9c;
  undefined4 local_98;
  undefined1 *local_94;
  undefined1 *local_90;
  undefined4 local_8c;
  undefined1 *local_88;
  undefined4 local_84;
  undefined1 *local_80;
  undefined1 *local_7c;
  undefined4 local_78;
  undefined1 *local_74;
  undefined4 local_70;
  undefined1 *local_6c;
  undefined4 local_68;
  undefined4 local_64;
  int local_60;
  undefined4 local_5c;
  int local_58;
  undefined4 local_54;
  int local_50;
  undefined4 local_4c;
  int local_48;
  undefined4 local_44;
  int local_40;
  undefined4 local_3c;
  int local_38;
  undefined4 local_34;
  int local_30;
  undefined4 local_2c;
  int local_28;
  undefined4 local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00712a42;
  local_10 = ExceptionList;
  uStack_130 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_18 = 0x170c;
  pcStack_134 = (code *)&local_18;
  puStack_138 = (undefined1 *)0x49bb9f;
  pcStack_134 = (code *)game_timing_or_delay_helper();
  puStack_138 = (undefined1 *)0x49bba5;
  FUN_0065e0b0();
  local_1c = 0x170c;
  pcStack_134 = (code *)&local_1c;
  puStack_138 = (undefined1 *)0x49bbbd;
  pcStack_134 = (code *)game_timing_or_delay_helper();
  puStack_138 = (undefined1 *)0x87;
  puStack_13c = (undefined4 *)0x1;
  puStack_140 = (undefined4 *)0x0;
  local_6c = (undefined1 *)auStack_158;
  pcStack_15c = "sprite/interface/chatting.img";
  uStack_160 = 0x49bbd9;
  local_70 = FUN_004054a0();
  local_8 = 0;
  local_74 = auStack_170;
  pcStack_174 = &DAT_0074b41c;
  uStack_178 = 0x49bbf5;
  local_78 = FUN_004054a0();
  local_8 = CONCAT31(local_8._1_3_,1);
  pcStack_174 = (char *)0x64;
  local_7c = auStack_18c;
  FUN_004054a0(&DAT_0074b468);
  local_8 = 0xffffffff;
  local_20 = FUN_00661cc0(0,0);
  pcStack_134 = (code *)0x49bc3a;
  local_14 = local_20;
  FUN_0040d6d0();
  *(undefined1 *)(local_14 + 0x99c) = 0;
  *(undefined1 *)(local_14 + 0x6e0) = 1;
  pcStack_134 = (code *)0x1;
  puStack_138 = (undefined1 *)0x49bc5e;
  FUN_0040d730();
  pcStack_134 = (code *)0x74b448;
  puStack_138 = (undefined1 *)0x0;
  puStack_13c = (undefined4 *)0x49bc73;
  FUN_0040d680();
  puStack_138 = (undefined1 *)0x49bc7d;
  FUN_004053a0();
  pcStack_134 = (code *)0x0;
  puStack_138 = (undefined1 *)0x49bc8d;
  iVar1 = FUN_0040d680();
  *(undefined1 *)(iVar1 + 0x20) = 0;
  local_24 = 0x170c;
  pcStack_134 = (code *)&local_24;
  puStack_138 = (undefined1 *)0x49bca6;
  pcStack_134 = (code *)game_timing_or_delay_helper();
  puStack_138 = (undefined1 *)0x7;
  puStack_13c = (undefined4 *)0x5;
  puStack_140 = (undefined4 *)0x2;
  local_80 = (undefined1 *)auStack_158;
  pcStack_15c = "sprite/interface/chatting.img";
  uStack_160 = 0x49bcbf;
  local_84 = FUN_004054a0();
  local_8 = 2;
  local_88 = auStack_170;
  pcStack_174 = "npcSayUp2";
  uStack_178 = 0x49bcde;
  local_8c = FUN_004054a0();
  local_8 = CONCAT31(local_8._1_3_,3);
  pcStack_174 = (char *)0x5a;
  local_90 = auStack_18c;
  FUN_004054a0(&DAT_0074b4bc);
  local_8 = 0xffffffff;
  local_28 = FUN_00661cc0(0,1);
  *(undefined1 *)(local_28 + 0x51) = 0;
  *(undefined4 *)(local_28 + 0x984) = 0x802;
  local_2c = 0x170c;
  pcStack_134 = (code *)&local_2c;
  puStack_138 = (undefined1 *)0x49bd44;
  local_14 = local_28;
  pcStack_134 = (code *)game_timing_or_delay_helper();
  puStack_138 = (undefined1 *)0x14;
  puStack_13c = (undefined4 *)0x5;
  puStack_140 = (undefined4 *)0x6;
  local_94 = (undefined1 *)auStack_158;
  pcStack_15c = "sprite/interface/chatting.img";
  uStack_160 = 0x49bd60;
  local_98 = FUN_004054a0();
  local_8 = 4;
  local_9c = auStack_170;
  pcStack_174 = "npcSay2";
  uStack_178 = 0x49bd82;
  local_a0 = FUN_004054a0();
  local_8 = CONCAT31(local_8._1_3_,5);
  pcStack_174 = (char *)0x5a;
  local_a4 = auStack_18c;
  FUN_004054a0(&DAT_0074b4c8);
  local_8 = 0xffffffff;
  local_30 = FUN_00661cc0(0,0);
  *(undefined1 *)(local_30 + 0x51) = 0;
  local_34 = 0x170c;
  pcStack_134 = (code *)&local_34;
  puStack_138 = (undefined1 *)0x49bddb;
  local_14 = local_30;
  pcStack_134 = (code *)game_timing_or_delay_helper();
  puStack_138 = (undefined1 *)0x76;
  puStack_13c = (undefined4 *)0x5;
  puStack_140 = (undefined4 *)0x4;
  local_a8 = (undefined1 *)auStack_158;
  pcStack_15c = "sprite/interface/chatting.img";
  uStack_160 = 0x49bdf7;
  local_ac = FUN_004054a0();
  local_8 = 6;
  local_b0 = auStack_170;
  pcStack_174 = "npcSayDown2";
  uStack_178 = 0x49be19;
  local_b4 = FUN_004054a0();
  local_8 = CONCAT31(local_8._1_3_,7);
  pcStack_174 = (char *)0x5a;
  local_b8 = auStack_18c;
  FUN_004054a0(&DAT_0074b528);
  local_8 = 0xffffffff;
  local_38 = FUN_00661cc0(0,1);
  *(undefined1 *)(local_38 + 0x51) = 0;
  *(undefined4 *)(local_38 + 0x984) = 0x803;
  local_3c = 0x170c;
  pcStack_134 = (code *)&local_3c;
  puStack_138 = (undefined1 *)0x49be7f;
  local_14 = local_38;
  pcStack_134 = (code *)game_timing_or_delay_helper();
  puStack_138 = (undefined1 *)0xfffffff0;
  puStack_13c = (undefined4 *)0x14;
  puStack_140 = (undefined4 *)0x12;
  local_bc = (undefined1 *)auStack_158;
  pcStack_15c = "sprite/interface/chatting.img";
  uStack_160 = 0x49be9b;
  local_c0 = FUN_004054a0();
  local_8 = 8;
  local_c4 = auStack_170;
  pcStack_174 = &DAT_0074b540;
  uStack_178 = 0x49bebd;
  local_c8 = FUN_004054a0();
  local_8 = CONCAT31(local_8._1_3_,9);
  pcStack_174 = (char *)0x5a;
  local_cc = auStack_18c;
  FUN_004054a0(&DAT_0074b534);
  local_8 = 0xffffffff;
  local_40 = FUN_00661cc0(0,1);
  *(undefined1 *)(local_40 + 0x9a8) = 1;
  *(undefined4 *)(local_40 + 0x9a0) = 0;
  *(undefined1 *)(local_40 + 0x6e0) = 0;
  pcStack_134 = (code *)0x1;
  puStack_138 = (undefined1 *)0x49bf2b;
  local_14 = local_40;
  FUN_0040d730();
  pcStack_134 = (code *)0x74b56c;
  puStack_138 = (undefined1 *)0x0;
  puStack_13c = (undefined4 *)0x49bf40;
  FUN_0040d680();
  puStack_138 = (undefined1 *)0x49bf4a;
  FUN_004053a0();
  pcStack_134 = (code *)0x0;
  puStack_138 = (undefined1 *)0x49bf5a;
  iVar1 = FUN_0040d680();
  *(undefined1 *)(iVar1 + 0x20) = 0x55;
  pcStack_134 = (code *)0x0;
  puStack_138 = (undefined1 *)0x49bf6e;
  iVar1 = FUN_0040d680();
  *(undefined1 *)(iVar1 + 0x3d) = 3;
  pcStack_134 = (code *)0x0;
  puStack_138 = (undefined1 *)0x49bf82;
  iVar1 = FUN_0040d680();
  *(undefined4 *)(iVar1 + 0x24) = 0xfffffffd;
  *(undefined4 *)(local_14 + 0x984) = 0x80c;
  local_44 = 0x170c;
  pcStack_134 = (code *)&local_44;
  puStack_138 = (undefined1 *)0x49bfab;
  pcStack_134 = (code *)game_timing_or_delay_helper();
  puStack_138 = (undefined1 *)0xfffffff0;
  puStack_13c = (undefined4 *)0x3e;
  puStack_140 = (undefined4 *)0x32;
  local_d0 = (undefined1 *)auStack_158;
  pcStack_15c = "sprite/interface/chatting.img";
  uStack_160 = 0x49bfc7;
  local_d4 = FUN_004054a0();
  local_8 = 10;
  local_d8 = auStack_170;
  pcStack_174 = &DAT_0074b598;
  uStack_178 = 0x49bfe9;
  local_dc = FUN_004054a0();
  local_8 = CONCAT31(local_8._1_3_,0xb);
  pcStack_174 = (char *)0x5a;
  local_e0 = auStack_18c;
  FUN_004054a0(&DAT_0074b58c);
  local_8 = 0xffffffff;
  local_48 = FUN_00661cc0(0,2);
  *(undefined4 *)(local_48 + 0x9a0) = 1;
  *(undefined1 *)(local_48 + 0x6e0) = 0;
  pcStack_134 = (code *)0x1;
  puStack_138 = (undefined1 *)0x49c04d;
  local_14 = local_48;
  FUN_0040d730();
  pcStack_134 = (code *)0x74b5c4;
  puStack_138 = (undefined1 *)0x0;
  puStack_13c = (undefined4 *)0x49c062;
  FUN_0040d680();
  puStack_138 = (undefined1 *)0x49c06c;
  FUN_004053a0();
  pcStack_134 = (code *)0x0;
  puStack_138 = (undefined1 *)0x49c07c;
  iVar1 = FUN_0040d680();
  *(undefined1 *)(iVar1 + 0x20) = 0x55;
  pcStack_134 = (code *)0x0;
  puStack_138 = (undefined1 *)0x49c090;
  iVar1 = FUN_0040d680();
  *(undefined1 *)(iVar1 + 0x3d) = 3;
  pcStack_134 = (code *)0x0;
  puStack_138 = (undefined1 *)0x49c0a4;
  iVar1 = FUN_0040d680();
  *(undefined4 *)(iVar1 + 0x24) = 0xfffffffd;
  *(undefined4 *)(local_14 + 0x984) = 0x811;
  local_4c = 0x170c;
  pcStack_134 = (code *)&local_4c;
  puStack_138 = (undefined1 *)0x49c0cd;
  pcStack_134 = (code *)game_timing_or_delay_helper();
  puStack_138 = (undefined1 *)0xfffffff0;
  puStack_13c = (undefined4 *)0x69;
  puStack_140 = (undefined4 *)0x20;
  local_e4 = (undefined1 *)auStack_158;
  pcStack_15c = "sprite/interface/chatting.img";
  uStack_160 = 0x49c0e9;
  local_e8 = FUN_004054a0();
  local_8 = 0xc;
  local_ec = auStack_170;
  pcStack_174 = &DAT_0074b5f0;
  uStack_178 = 0x49c10b;
  local_f0 = FUN_004054a0();
  local_8 = CONCAT31(local_8._1_3_,0xd);
  pcStack_174 = (char *)0x5a;
  local_f4 = auStack_18c;
  FUN_004054a0(&DAT_0074b5e4);
  local_8 = 0xffffffff;
  local_50 = FUN_00661cc0(0,2);
  *(undefined4 *)(local_50 + 0x9a0) = 2;
  *(undefined1 *)(local_50 + 0x6e0) = 0;
  pcStack_134 = (code *)0x1;
  puStack_138 = (undefined1 *)0x49c16f;
  local_14 = local_50;
  FUN_0040d730();
  pcStack_134 = (code *)0x74b61c;
  puStack_138 = (undefined1 *)0x0;
  puStack_13c = (undefined4 *)0x49c184;
  FUN_0040d680();
  puStack_138 = (undefined1 *)0x49c18e;
  FUN_004053a0();
  pcStack_134 = (code *)0x0;
  puStack_138 = (undefined1 *)0x49c19e;
  iVar1 = FUN_0040d680();
  *(undefined1 *)(iVar1 + 0x20) = 0x55;
  pcStack_134 = (code *)0x0;
  puStack_138 = (undefined1 *)0x49c1b2;
  iVar1 = FUN_0040d680();
  *(undefined1 *)(iVar1 + 0x3d) = 3;
  pcStack_134 = (code *)0x0;
  puStack_138 = (undefined1 *)0x49c1c6;
  iVar1 = FUN_0040d680();
  *(undefined4 *)(iVar1 + 0x24) = 0xfffffffd;
  *(undefined4 *)(local_14 + 0x984) = 0x80e;
  local_54 = 0x170c;
  pcStack_134 = (code *)&local_54;
  puStack_138 = (undefined1 *)0x49c1ef;
  pcStack_134 = (code *)game_timing_or_delay_helper();
  puStack_138 = (undefined1 *)0xfffffff0;
  puStack_13c = (undefined4 *)0x94;
  puStack_140 = (undefined4 *)0x26;
  local_f8 = (undefined1 *)auStack_158;
  pcStack_15c = "sprite/interface/chatting.img";
  uStack_160 = 0x49c20e;
  local_fc = FUN_004054a0();
  local_8 = 0xe;
  local_100 = auStack_170;
  pcStack_174 = &DAT_0074b648;
  uStack_178 = 0x49c230;
  local_104 = FUN_004054a0();
  local_8 = CONCAT31(local_8._1_3_,0xf);
  pcStack_174 = (char *)0x5a;
  local_108 = auStack_18c;
  FUN_004054a0(&DAT_0074b63c);
  local_8 = 0xffffffff;
  local_58 = FUN_00661cc0(0,2);
  *(undefined4 *)(local_58 + 0x9a0) = 3;
  *(undefined1 *)(local_58 + 0x6e0) = 0;
  pcStack_134 = (code *)0x1;
  puStack_138 = (undefined1 *)0x49c294;
  local_14 = local_58;
  FUN_0040d730();
  pcStack_134 = (code *)0x74b674;
  puStack_138 = (undefined1 *)0x0;
  puStack_13c = (undefined4 *)0x49c2a9;
  FUN_0040d680();
  puStack_138 = (undefined1 *)0x49c2b3;
  FUN_004053a0();
  pcStack_134 = (code *)0x0;
  puStack_138 = (undefined1 *)0x49c2c3;
  iVar1 = FUN_0040d680();
  *(undefined1 *)(iVar1 + 0x20) = 0x55;
  pcStack_134 = (code *)0x0;
  puStack_138 = (undefined1 *)0x49c2d7;
  iVar1 = FUN_0040d680();
  *(undefined1 *)(iVar1 + 0x3d) = 3;
  pcStack_134 = (code *)0x0;
  puStack_138 = (undefined1 *)0x49c2eb;
  iVar1 = FUN_0040d680();
  *(undefined4 *)(iVar1 + 0x24) = 0xfffffffd;
  *(undefined4 *)(local_14 + 0x984) = 0x80f;
  local_5c = 0x170c;
  pcStack_134 = (code *)&local_5c;
  puStack_138 = (undefined1 *)0x49c314;
  pcStack_134 = (code *)game_timing_or_delay_helper();
  puStack_138 = (undefined1 *)0xfffffff0;
  puStack_13c = (undefined4 *)0xbf;
  puStack_140 = (undefined4 *)0x2c;
  local_10c = (undefined1 *)auStack_158;
  pcStack_15c = "sprite/interface/chatting.img";
  uStack_160 = 0x49c333;
  local_110 = FUN_004054a0();
  local_8 = 0x10;
  local_114 = auStack_170;
  pcStack_174 = &DAT_0074b6a0;
  uStack_178 = 0x49c355;
  local_118 = FUN_004054a0();
  local_8 = CONCAT31(local_8._1_3_,0x11);
  pcStack_174 = (char *)0x5a;
  local_11c = auStack_18c;
  FUN_004054a0(&DAT_0074b694);
  local_8 = 0xffffffff;
  local_60 = FUN_00661cc0(0,2);
  *(undefined4 *)(local_60 + 0x9a0) = 4;
  *(undefined1 *)(local_60 + 0x6e0) = 0;
  pcStack_134 = (code *)0x1;
  puStack_138 = (undefined1 *)0x49c3b9;
  local_14 = local_60;
  FUN_0040d730();
  pcStack_134 = (code *)0x74b6bc;
  puStack_138 = (undefined1 *)0x0;
  puStack_13c = (undefined4 *)0x49c3ce;
  FUN_0040d680();
  puStack_138 = (undefined1 *)0x49c3d8;
  FUN_004053a0();
  pcStack_134 = (code *)0x0;
  puStack_138 = (undefined1 *)0x49c3e8;
  iVar1 = FUN_0040d680();
  *(undefined1 *)(iVar1 + 0x20) = 0x55;
  pcStack_134 = (code *)0x0;
  puStack_138 = (undefined1 *)0x49c3fc;
  iVar1 = FUN_0040d680();
  *(undefined1 *)(iVar1 + 0x3d) = 3;
  pcStack_134 = (code *)0x0;
  puStack_138 = (undefined1 *)0x49c410;
  iVar1 = FUN_0040d680();
  *(undefined4 *)(iVar1 + 0x24) = 0xfffffffd;
  *(undefined4 *)(local_14 + 0x984) = 0x810;
  local_64 = 0x170c;
  local_68 = 0x170c;
  pcStack_134 = FUN_006574e0;
  puStack_138 = local_120;
  puStack_13c = &local_64;
  puStack_140 = (undefined4 *)0x49c44c;
  game_timing_or_delay_helper();
  puStack_13c = (undefined4 *)0x49c453;
  puVar2 = (undefined4 *)FUN_00402170();
  puStack_138 = (undefined1 *)*puVar2;
  puStack_13c = (undefined4 *)local_124;
  puStack_140 = &local_68;
  uStack_144 = 0x49c46b;
  game_timing_or_delay_helper();
  puStack_140 = (undefined4 *)0x49c472;
  puStack_13c = (undefined4 *)FUN_004021b0();
  puStack_13c = (undefined4 *)*puStack_13c;
  puStack_140 = (undefined4 *)0x49c47a;
  FUN_00405d30();
  pcStack_134 = (code *)DAT_007ca768;
  puStack_138 = (undefined1 *)DAT_007ca764;
  puVar2 = &DAT_007ca70c;
  puVar3 = auStack_158;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  pcStack_15c = (char *)0x49c4a0;
  FUN_0065e180();
  ExceptionList = local_10;
  return;
}


/* ==== 0049c4c0  img_path_loader_25  size=2544 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void img_path_loader_25(int param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *this;
  CDocObjectServer *this_00;
  undefined4 *puVar5;
  int iVar6;
  undefined4 **ppuVar7;
  undefined1 auStack_1dc [20];
  undefined4 uStack_1c8;
  undefined *puStack_1c4;
  undefined1 auStack_1c0 [16];
  undefined4 uStack_1b0;
  char *pcStack_1ac;
  undefined4 *apuStack_1a8 [4];
  undefined1 auStack_198 [4];
  undefined4 uStack_194;
  undefined4 *puStack_190;
  undefined4 *puStack_18c;
  undefined4 *puStack_188;
  undefined1 local_170 [4];
  undefined1 local_16c [4];
  undefined4 local_168;
  undefined1 *local_164;
  undefined1 *local_160;
  undefined1 local_15c [4];
  undefined1 *local_158;
  undefined4 local_154;
  undefined1 *local_150;
  undefined1 local_14c [8];
  undefined1 *local_144;
  undefined1 local_140 [4];
  undefined4 local_13c;
  undefined1 *local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  int local_118;
  int local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined1 *local_104;
  undefined1 *local_100;
  undefined1 *local_fc;
  undefined1 *local_f8;
  int local_f4;
  undefined4 local_f0;
  int *local_ec;
  int *local_e8;
  int local_e4;
  int local_e0;
  int local_dc;
  int local_d8;
  int *local_d4;
  undefined1 *local_cc;
  undefined1 *local_c8;
  uint local_c4;
  uint local_c0;
  uint local_bc;
  int local_b8;
  undefined4 local_b4;
  uint local_b0;
  int local_a8;
  undefined4 local_a0;
  int local_9c;
  undefined4 local_98;
  int local_74;
  undefined4 local_70;
  int local_54;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00712ab7;
  local_10 = ExceptionList;
  local_14 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_b4 = 0xffffffff;
  local_dc = param_1;
  switch(param_1) {
  case 0:
    local_b4 = 0xffffffff;
    break;
  case 1:
    local_b4 = 0xff64c1ff;
    break;
  case 2:
    local_b4 = 0xffff64e8;
    break;
  case 3:
    local_b4 = 0xffc76a38;
    break;
  case 4:
    local_b4 = 0xffffe864;
  }
  local_130 = 0x170c;
  local_144 = auStack_198;
  apuStack_1a8[3] = (undefined4 *)&DAT_0074b6ac;
  apuStack_1a8[2] = (undefined4 *)0x49c56f;
  local_134 = FUN_004054a0();
  local_8 = 0;
  apuStack_1a8[3] = &local_130;
  apuStack_1a8[2] = (undefined4 *)0x49c58d;
  apuStack_1a8[3] = (undefined4 *)game_timing_or_delay_helper();
  local_8 = 0xffffffff;
  apuStack_1a8[2] = (undefined4 *)0x49c59a;
  FUN_0065dbd0();
  local_f0 = 0x170c;
  local_138 = auStack_198;
  apuStack_1a8[3] = (undefined4 *)&DAT_0074b6fc;
  apuStack_1a8[2] = (undefined4 *)0x49c5bc;
  local_13c = FUN_004054a0();
  local_8 = 1;
  apuStack_1a8[3] = &local_f0;
  apuStack_1a8[2] = (undefined4 *)0x49c5da;
  apuStack_1a8[3] = (undefined4 *)game_timing_or_delay_helper();
  local_8 = 0xffffffff;
  apuStack_1a8[2] = (undefined4 *)0x49c5e7;
  local_f4 = FUN_006ce000();
  if (local_f4 != 0) {
    *(undefined1 *)(local_f4 + 0x99c) = (undefined1)param_1;
    puStack_188 = (undefined4 *)0x49c62e;
    local_a8 = local_f4;
    FUN_0049d970();
    uVar2 = FUN_004274f0();
    puStack_188 = (undefined4 *)0x49c640;
    FUN_00642700();
    puStack_188 = (undefined4 *)0x49c647;
    FUN_0049d940();
    uVar3 = FUN_0048afb0();
    if (uVar2 < uVar3) {
      puStack_188 = (undefined4 *)0x49c66b;
      FUN_0049d970();
      local_e0 = FUN_004274f0();
      local_c0 = 0;
      while( true ) {
        puStack_188 = (undefined4 *)0x49c69c;
        FUN_00642700();
        puStack_188 = (undefined4 *)0x49c6a3;
        FUN_0049d940();
        iVar4 = FUN_0048afb0();
        if ((uint)(iVar4 - local_e0) <= local_c0) break;
        local_b8 = local_e0 + local_c0;
        puStack_188 = &param_1;
        puStack_18c = (undefined4 *)0x49c6de;
        FUN_00642700();
        puStack_18c = (undefined4 *)0x49c6e5;
        FUN_0049d940();
        puStack_188 = (undefined4 *)0x49c6ec;
        FUN_0044e440();
        puStack_188 = &param_1;
        puStack_18c = (undefined4 *)0x49c702;
        FUN_0049d970();
        puStack_188 = (undefined4 *)0x49c709;
        FUN_0044e420();
        FUN_0040b110();
        local_8 = 2;
        local_a0 = 0x14;
        iVar6 = local_74 + local_54;
        puStack_188 = (undefined4 *)0x49c740;
        FUN_0049d9a0();
        iVar4 = FUN_00427230();
        local_9c = iVar6 * iVar4 + 10;
        puStack_188 = &param_1;
        puStack_18c = (undefined4 *)0x49c763;
        FUN_00642700();
        puStack_18c = (undefined4 *)0x49c76a;
        FUN_0049d940();
        puStack_188 = (undefined4 *)0x49c771;
        iVar4 = FUN_0044e440();
        if (*(int *)(iVar4 + 0x18) == 0) {
          local_98 = local_b4;
        }
        else {
          puStack_188 = &param_1;
          puStack_18c = (undefined4 *)0x49c787;
          FUN_00642700();
          puStack_18c = (undefined4 *)0x49c78e;
          FUN_0049d940();
          puStack_188 = (undefined4 *)0x49c795;
          iVar4 = FUN_0044e440();
          local_98 = *(undefined4 *)(iVar4 + 0x18);
        }
        local_70 = 0x108;
        puStack_188 = &param_1;
        puStack_18c = (undefined4 *)0x49c7cf;
        FUN_0049d9a0();
        puStack_188 = (undefined4 *)0x49c7d6;
        FUN_0040d310();
        local_c4 = 0;
        while( true ) {
          puStack_188 = &param_1;
          puStack_18c = (undefined4 *)0x49c802;
          FUN_00642700();
          puStack_18c = (undefined4 *)0x49c809;
          FUN_0049d940();
          puStack_188 = (undefined4 *)0x49c810;
          FUN_0044e440();
          uVar2 = FUN_00410b30();
          if (uVar2 <= local_c4) break;
          puStack_188 = (undefined4 *)local_b8;
          puStack_18c = &param_1;
          puStack_190 = (undefined4 *)0x49c83a;
          uVar2 = local_c4;
          FUN_00642700();
          puStack_190 = (undefined4 *)0x49c841;
          FUN_0049d940();
          puStack_18c = (undefined4 *)0x49c848;
          this = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)FUN_0044e440();
          puStack_188 = (undefined4 *)0x49c84f;
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator[]
                    (this,uVar2);
          puStack_188 = &param_1;
          puStack_18c = (undefined4 *)0x49c86a;
          FUN_0049d9a0();
          puStack_188 = (undefined4 *)0x49c871;
          iVar4 = FUN_00427230();
          puStack_188 = (undefined4 *)(iVar4 + -1);
          puStack_18c = &param_1;
          puStack_190 = (undefined4 *)0x49c88a;
          FUN_0049d9a0();
          puStack_18c = (undefined4 *)0x49c891;
          puStack_188 = (undefined4 *)FUN_00427200();
          puStack_18c = &param_1;
          puStack_190 = (undefined4 *)0x49c8a7;
          puStack_18c = (undefined4 *)FUN_0049d9a0();
          puStack_190 = (undefined4 *)0x49c8ad;
          FUN_004cb660();
          local_c4 = local_c4 + 1;
        }
        local_8 = 0xffffffff;
        FUN_0040c940();
        local_c0 = local_c0 + 1;
      }
    }
    local_e4 = local_a8 + 0x1b8;
    puStack_188 = (undefined4 *)0x49c8f0;
    FUN_0044dff0();
    puStack_188 = (undefined4 *)0x49c902;
    FUN_0044dfd0();
    while( true ) {
      puStack_188 = (undefined4 *)0x49c924;
      cVar1 = FUN_0044dd70();
      if (cVar1 == '\0') break;
      local_d4 = (int *)FUN_0044dd50();
      if (*local_d4 == param_1) {
        local_ec = local_d4 + 1;
        local_cc = (undefined1 *)game_loop_helper_018d0();
        local_100 = (undefined1 *)game_loop_helper_018b0();
        for (; local_cc != local_100; local_cc = local_cc + 0x90) {
          local_104 = local_cc;
          *local_cc = 1;
        }
      }
      else {
        local_e8 = local_d4 + 1;
        local_c8 = (undefined1 *)game_loop_helper_018d0();
        local_f8 = (undefined1 *)game_loop_helper_018b0();
        for (; local_c8 != local_f8; local_c8 = local_c8 + 0x90) {
          local_fc = local_c8;
          *local_c8 = 0;
        }
      }
      FUN_0044dd30();
    }
    puStack_188 = (undefined4 *)0x49ca3d;
    FUN_0049d9a0();
    uVar2 = FUN_00427230();
    if (8 < uVar2) {
      puStack_188 = (undefined4 *)0x49ca62;
      FUN_0049d9a0();
      uVar2 = FUN_00427230();
      if (0xf < uVar2) {
        local_bc = 0;
        while( true ) {
          puStack_188 = (undefined4 *)0x49caa2;
          FUN_0049d9a0();
          uVar2 = FUN_00427230();
          if (uVar2 <= local_bc) break;
          puStack_188 = (undefined4 *)0x49cac6;
          FUN_0049d9a0();
          iVar4 = FUN_00427230();
          if (local_bc < iVar4 - 0xfU) {
            puStack_188 = &param_1;
            puStack_18c = (undefined4 *)0x49caf4;
            FUN_0049d9a0();
            puStack_188 = (undefined4 *)0x49cafb;
            this_00 = (CDocObjectServer *)FUN_00427200();
            CDocObjectServer::ReleaseDocSite(this_00);
          }
          local_bc = local_bc + 1;
        }
        puStack_188 = (undefined4 *)0x49cb1d;
        FUN_0049d9a0();
        FUN_00427230();
        puStack_188 = (undefined4 *)local_140;
        puStack_18c = (undefined4 *)local_15c;
        puStack_190 = &param_1;
        uStack_194 = 0x49cb4b;
        FUN_0049d9a0();
        puStack_190 = (undefined4 *)0x49cb52;
        FUN_004021b0();
        puStack_18c = (undefined4 *)0x49cb59;
        puVar5 = (undefined4 *)FUN_0049d910();
        local_108 = *puVar5;
        puStack_188 = &param_1;
        puStack_18c = (undefined4 *)0x49cb7d;
        FUN_0049d9a0();
        puStack_188 = (undefined4 *)0x49cb84;
        puStack_188 = (undefined4 *)FUN_004021b0();
        puStack_188 = (undefined4 *)*puStack_188;
        puStack_18c = (undefined4 *)local_14c;
        puStack_190 = &param_1;
        uStack_194 = 0x49cbb6;
        local_10c = puStack_188;
        FUN_0049d9a0();
        puStack_190 = (undefined4 *)0x49cbbd;
        FUN_0049d9d0();
      }
      local_b0 = 0;
      while( true ) {
        puStack_188 = (undefined4 *)0x49cbee;
        FUN_0049d9a0();
        uVar2 = FUN_00427230();
        if (uVar2 <= local_b0) break;
        puStack_188 = &param_1;
        puStack_18c = (undefined4 *)0x49cc1d;
        FUN_0049d9a0();
        puStack_188 = (undefined4 *)0x49cc24;
        iVar4 = FUN_00427200();
        puStack_188 = &param_1;
        puStack_18c = (undefined4 *)0x49cc42;
        FUN_0049d9a0();
        puStack_188 = (undefined4 *)0x49cc49;
        iVar6 = FUN_00427200();
        iVar6 = (*(int *)(iVar4 + 0x30) + *(int *)(iVar6 + 0x50)) * local_b0;
        puStack_188 = &param_1;
        puStack_18c = (undefined4 *)0x49cc77;
        FUN_0049d9a0();
        puStack_188 = (undefined4 *)0x49cc7e;
        iVar4 = FUN_00427200();
        *(int *)(iVar4 + 8) = iVar6 + 10;
        local_b0 = local_b0 + 1;
      }
      local_110 = 0x170c;
      puStack_188 = (undefined4 *)0x49cca1;
      game_timing_or_delay_helper();
      puStack_188 = (undefined4 *)0x14;
      puStack_18c = (undefined4 *)0x5;
      puStack_190 = (undefined4 *)0x8;
      local_150 = (undefined1 *)apuStack_1a8;
      pcStack_1ac = "sprite/interface/chatting.img";
      uStack_1b0 = 0x49ccbd;
      local_154 = FUN_004054a0();
      local_8 = 3;
      local_158 = auStack_1c0;
      puStack_1c4 = &DAT_0074b714;
      uStack_1c8 = 0x49ccdf;
      FUN_004054a0();
      local_8 = CONCAT31(local_8._1_3_,4);
      puStack_1c4 = (undefined *)0x22;
      local_160 = auStack_1dc;
      FUN_004054a0(&DAT_0074b708);
      local_8 = 0xffffffff;
      local_114 = FUN_00661cc0(0,1);
      *(undefined4 *)(local_114 + 0xb04) = 0;
      local_118 = (int)*(char *)(local_114 + 0x99c);
      local_11c = 0x170c;
      local_164 = (undefined1 *)(apuStack_1a8 + 3);
      apuStack_1a8[2] = (undefined4 *)&DAT_0074b744;
      apuStack_1a8[1] = (undefined4 *)0x49cd6e;
      local_a8 = local_114;
      local_168 = FUN_004054a0();
      local_8 = 5;
      apuStack_1a8[2] = &local_11c;
      apuStack_1a8[1] = (undefined4 *)0x49cd8c;
      apuStack_1a8[2] = (undefined4 *)game_timing_or_delay_helper();
      local_8 = 0xffffffff;
      apuStack_1a8[1] = (undefined4 *)0x49cd99;
      local_120 = FUN_006ce000();
      puStack_188 = (undefined4 *)0x49cdb3;
      local_124 = FUN_0049d9a0();
      iVar4 = FUN_00427230();
      *(int *)(local_a8 + 0xb00) = iVar4 + -8;
      for (local_d8 = 0; local_d8 < *(int *)(local_a8 + 0xb00); local_d8 = local_d8 + 1) {
        FUN_00499160();
      }
    }
    local_128 = 0x170c;
    local_12c = 0x170c;
    puStack_188 = (undefined4 *)local_16c;
    puStack_18c = &local_128;
    puStack_190 = (undefined4 *)0x49ce3b;
    game_timing_or_delay_helper();
    puStack_18c = (undefined4 *)0x49ce42;
    puStack_188 = (undefined4 *)FUN_00402170();
    puStack_188 = (undefined4 *)*puStack_188;
    puStack_18c = (undefined4 *)local_170;
    puStack_190 = &local_12c;
    uStack_194 = 0x49ce5d;
    game_timing_or_delay_helper();
    puStack_190 = (undefined4 *)0x49ce64;
    puStack_18c = (undefined4 *)FUN_004021b0();
    puStack_18c = (undefined4 *)*puStack_18c;
    puStack_190 = (undefined4 *)0x49ce6c;
    FUN_00405d30();
    puStack_188 = (undefined4 *)DAT_007ca764;
    puVar5 = &DAT_007ca70c;
    ppuVar7 = apuStack_1a8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *ppuVar7 = (undefined4 *)*puVar5;
      puVar5 = puVar5 + 1;
      ppuVar7 = ppuVar7 + 1;
    }
    pcStack_1ac = (char *)0x49ce92;
    FUN_0065e180();
  }
  ExceptionList = local_10;
  return;
}


/* ==== 004acd90  npk_path_normalize_helper  size=23 ==== */

undefined4 npk_path_normalize_helper(void)

{
  undefined4 in_ECX;
  
  FUN_004acdb0();
  return in_ECX;
}


/* ==== 004b68a0  npk_img_open_path_under_imagepacks2  size=2081 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 npk_img_open_path_under_imagepacks2(LPCSTR param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  int **ppiVar8;
  undefined1 local_1f4 [4];
  undefined1 local_1f0 [4];
  undefined4 local_1ec;
  undefined1 local_1e8 [4];
  undefined4 local_1e4;
  undefined4 local_1e0;
  undefined4 local_1dc;
  DWORD local_1d8;
  char *local_1d4;
  undefined1 local_1d0 [4];
  undefined4 local_1cc;
  undefined4 local_1c8;
  int local_1c4;
  uint local_1c0;
  char *local_1bc;
  undefined4 local_1b8;
  int *local_1b4;
  int local_1b0;
  int local_1ac;
  int local_1a8;
  int local_1a4;
  int local_1a0;
  int local_19c;
  char *local_18c;
  int *local_188;
  int local_184;
  int local_180;
  int *local_17c;
  undefined1 local_178 [4];
  undefined4 local_174;
  int *local_170;
  char *local_16c;
  undefined4 local_168;
  LPVOID local_164;
  HANDLE local_160;
  int local_15c;
  int local_158;
  char *local_154;
  char *local_150;
  undefined4 local_14c;
  char *local_148;
  int local_144;
  int local_140;
  int local_13c;
  int local_138;
  char local_133;
  char local_132;
  char local_131;
  int *local_130;
  function<void___cdecl(void)> local_12c [23];
  char cStack_115;
  char local_114 [256];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007140e0;
  local_10 = ExceptionList;
  uVar2 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_13c = 0;
  local_14 = uVar2;
  FUN_004054a0(param_1);
  local_8 = 0;
  npk_path_normalize_helper(uVar2);
  puVar3 = (undefined4 *)FUN_0048aa30(local_1d0,local_12c);
  local_168 = *puVar3;
  uVar4 = FUN_00489e00(local_1f4);
  cVar1 = FUN_0040d970(uVar4);
  if (cVar1 == '\0') {
    local_13c = FUN_00489a10();
    local_13c = local_13c + 0x18;
    local_16c = PTR_s_ImagePacks2__007c6430;
    local_1d4 = local_114;
    local_150 = local_1d4;
    do {
      local_131 = *local_16c;
      *local_150 = local_131;
      local_16c = local_16c + 1;
      local_150 = local_150 + 1;
    } while (local_131 != '\0');
    local_1bc = (char *)npk_get_relative_res_path();
    local_148 = local_1bc;
    do {
      local_132 = *local_148;
      local_148 = local_148 + 1;
    } while (local_132 != '\0');
    local_1c0 = (int)local_148 - (int)local_1bc;
    local_154 = &cStack_115;
    do {
      local_133 = local_154[1];
      local_154 = local_154 + 1;
    } while (local_133 != '\0');
    pcVar6 = local_1bc;
    pcVar7 = local_154;
    for (uVar2 = local_1c0 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar2 = local_1c0 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar7 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar7 = pcVar7 + 1;
    }
    local_18c = local_1bc;
    local_160 = CreateFileA(local_114,0xc0000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
    if (local_160 == (HANDLE)0xffffffff) {
      MessageBoxA((HWND)0x0,&DAT_0074e2a8,(LPCSTR)0x0,0);
    }
    local_164 = (LPVOID)FUN_006f191d(*(undefined4 *)(local_13c + 0x20));
    SetFilePointer(local_160,*(LONG *)(local_13c + 0x1c),(PLONG)0x0,0);
    ReadFile(local_160,local_164,*(DWORD *)(local_13c + 0x20),&local_1d8,(LPOVERLAPPED)0x0);
    local_184 = *(int *)((int)local_164 + 0x1c);
    *(int *)(local_13c + 0x3c) = local_184;
    local_130 = (int *)((int)local_164 + 0x20);
    for (local_158 = 0; local_158 < local_184; local_158 = local_158 + 1) {
      CCmdUI::CCmdUI((CCmdUI *)&local_1b4);
      local_138 = *local_130;
      local_140 = local_130[1];
      if (local_138 == 0x11) {
        local_1c4 = local_140;
        if (local_158 <= local_140) {
          MessageBoxA((HWND)0x0,&DAT_0074e274,(LPCSTR)0x0,0);
        }
        puVar3 = (undefined4 *)FUN_004bcf10(local_140);
        ppiVar8 = &local_1b4;
        for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
          *ppiVar8 = (int *)*puVar3;
          puVar3 = puVar3 + 1;
          ppiVar8 = ppiVar8 + 1;
        }
        puVar3 = (undefined4 *)FUN_004bcf10(local_140);
        local_188 = (int *)*puVar3;
        (**(code **)(*local_188 + 0x4c))(local_188,0,local_1e8,0,0);
        local_1dc = D3DXCreateTexture(*(undefined4 *)(local_180 + 4),local_1a8,local_1a4,1,0,0,1,
                                      &local_1b4);
        (**(code **)(*local_1b4 + 0x4c))(local_1b4,0,local_1f0,0,0);
        FUN_006e6bd0(local_1ec,local_1e4,local_1a8 * local_1a4 * 4);
        (**(code **)(*local_1b4 + 0x50))(local_1b4,0);
        puVar3 = (undefined4 *)FUN_004bcf10(local_140);
        local_17c = (int *)*puVar3;
        (**(code **)(*local_17c + 0x50))(local_17c,0);
        FUN_00426e60(&local_1b4);
        local_130 = local_130 + 2;
      }
      else {
        local_1a8 = local_130[2];
        local_1a4 = local_130[3];
        local_144 = local_130[4];
        local_1b0 = local_130[5];
        local_1ac = local_130[6];
        local_1a0 = local_130[7];
        local_19c = local_130[8];
        local_1c8 = D3DXCreateTexture(*(undefined4 *)(local_180 + 4),local_1a8,local_1a4,1,0,0,1,
                                      &local_1b4);
        (**(code **)(*local_1b4 + 0x4c))(local_1b4,0,local_178,0,0);
        if (local_140 == 6) {
          local_14c = FUN_006f191d(local_130[2] * local_130[3] * 0x28);
          local_15c = local_130[2] * local_130[3] * 0x28;
          local_1e0 = zlib_uncompress_buffer(local_14c,&local_15c,local_130 + 9,local_130[4]);
          if (local_138 == 0xe) {
            img_convert_pixels_fmt_0e(local_174,local_14c,local_15c << 1);
            local_130 = (int *)((int)local_130 + local_130[4] + 0x24);
          }
          else if (local_138 == 0xf) {
            img_convert_pixels_fmt_0f(local_174,local_14c,local_15c << 1);
            local_130 = (int *)((int)local_130 + local_130[4] + 0x24);
          }
          else if (local_138 == 0x10) {
            FUN_006e6bd0(local_174,local_14c,local_15c);
            local_130 = (int *)((int)local_130 + local_130[4] + 0x24);
          }
          FUN_006f1902(local_14c);
        }
        else if (local_140 == 5) {
          local_170 = local_130 + 9;
          if (local_138 == 0xe) {
            img_convert_pixels_fmt_0e(local_174,local_170,local_144);
            local_130 = (int *)((int)local_130 + local_144 / 2 + 0x24);
          }
          else if (local_138 == 0xf) {
            img_convert_pixels_fmt_0f(local_174,local_170,local_144);
            local_130 = (int *)((int)local_130 + local_144 / 2 + 0x24);
          }
          else if (local_138 == 0x10) {
            FUN_006e6bd0(local_174,local_170,local_144);
            local_130 = (int *)((int)local_130 + local_144 + 0x24);
          }
        }
        else {
          MessageBoxA((HWND)0x0,&DAT_0074e2f0,(LPCSTR)0x0,0);
        }
        local_1c8 = (**(code **)(*local_1b4 + 0x50))(local_1b4,0);
        FUN_00426e60(&local_1b4);
      }
    }
    CloseHandle(local_160);
    FUN_006f1902(local_164);
    local_1cc = 0;
    local_8 = 0xffffffff;
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_12c);
    local_1b8 = local_1cc;
  }
  else {
    MessageBoxA((HWND)0x0,param_1,(LPCSTR)0x0,0);
    local_1b8 = 0;
    local_8 = 0xffffffff;
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_12c);
  }
  ExceptionList = local_10;
  return local_1b8;
}


/* ==== 004bd6c0  npk_buffer8_error  size=1491 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x004bd86a) */

int * npk_buffer8_error(int param_1)

{
  ushort uVar1;
  LPCSTR lpFileName;
  BOOL BVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  DWORD dwDesiredAccess;
  DWORD dwShareMode;
  LPSECURITY_ATTRIBUTES lpSecurityAttributes;
  DWORD dwCreationDisposition;
  DWORD dwFlagsAndAttributes;
  HANDLE hTemplateFile;
  undefined4 local_c8;
  char *local_c4;
  DWORD local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  char *local_b4;
  int local_b0;
  int *local_ac;
  int local_a8;
  int local_a4;
  uint local_a0;
  undefined4 *local_9c;
  int local_98;
  undefined4 local_94;
  int *local_90;
  HANDLE local_8c;
  char *local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined2 *local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  function<void___cdecl(void)> local_60 [24];
  undefined4 local_48 [4];
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  short sStack_1a;
  int local_18;
  int local_14;
  undefined4 local_10;
  undefined2 local_c;
  uint local_8;
  
  local_8 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  local_bc = FUN_004c4190(local_60,"SoundPacks\\",param_1);
  hTemplateFile = (HANDLE)0x0;
  dwFlagsAndAttributes = 0x80;
  dwCreationDisposition = 3;
  lpSecurityAttributes = (LPSECURITY_ATTRIBUTES)0x0;
  dwShareMode = 3;
  dwDesiredAccess = 0x80000000;
  lpFileName = (LPCSTR)npk_get_relative_res_path();
  local_8c = CreateFileA(lpFileName,dwDesiredAccess,dwShareMode,lpSecurityAttributes,
                         dwCreationDisposition,dwFlagsAndAttributes,hTemplateFile);
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_60);
  if (local_8c == (HANDLE)0xffffffff) {
    MessageBoxA((HWND)0x0,"INVALID_HANDLE_VALUE",(LPCSTR)0x0,0);
  }
  local_9c = (undefined4 *)FUN_006f191d(*(undefined4 *)(param_1 + 0x38));
  if (local_9c == (undefined4 *)0x0) {
    CloseHandle(local_8c);
    local_90 = (int *)0x0;
  }
  else {
    local_c0 = 0;
    SetFilePointer(local_8c,*(LONG *)(param_1 + 0x34),(PLONG)0x0,0);
    BVar2 = ReadFile(local_8c,local_9c,*(DWORD *)(param_1 + 0x38),&local_c0,(LPOVERLAPPED)0x0);
    if (BVar2 == 0) {
      MessageBoxA((HWND)0x0,"ReadFile error!",(LPCSTR)0x0,0);
      FUN_006f1902(local_9c);
      CloseHandle(local_8c);
      local_90 = (int *)0x0;
    }
    else {
      local_c4 = (char *)((int)local_9c + *(int *)(param_1 + 0x38));
      local_a4 = 0;
      local_a8 = 0;
      local_a0 = 0;
      local_94 = 0;
      local_b4 = (char *)0x0;
      puVar4 = local_9c;
      puVar5 = local_48;
      for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      local_88 = (char *)(local_9c + 3);
      do {
        iVar3 = _strncmp(local_88,"fmt ",4);
        if (iVar3 == 0) {
          local_48[3] = *(undefined4 *)local_88;
          local_38 = *(undefined4 *)(local_88 + 4);
          local_a8 = *(int *)(local_88 + 0xc);
          local_2c = *(undefined4 *)(local_88 + 0x10);
          local_34._2_2_ = (short)((uint)*(undefined4 *)(local_88 + 8) >> 0x10);
          local_a4 = (int)local_34._2_2_;
          local_28._2_2_ = (short)((uint)*(undefined4 *)(local_88 + 0x14) >> 0x10);
          local_a0 = (uint)local_28._2_2_;
          local_94 = local_20;
          local_34 = *(undefined4 *)(local_88 + 8);
          local_30 = local_a8;
          local_28 = *(undefined4 *)(local_88 + 0x14);
        }
        else {
          iVar3 = _strncmp(local_88,"data",4);
          if (iVar3 == 0) {
            local_94 = *(undefined4 *)(local_88 + 4);
            local_b4 = local_88 + 8;
            break;
          }
          iVar3 = _strncmp(local_88,"bext",4);
          if ((((((iVar3 != 0) && (iVar3 = _strncmp(local_88,"minf",4), iVar3 != 0)) &&
                (iVar3 = _strncmp(local_88,"elm1",4), iVar3 != 0)) &&
               ((iVar3 = _strncmp(local_88,"cue ",4), iVar3 != 0 &&
                (iVar3 = _strncmp(local_88,"LIST",4), iVar3 != 0)))) &&
              ((iVar3 = _strncmp(local_88,"regn",4), iVar3 != 0 &&
               ((iVar3 = _strncmp(local_88,"ovwf",4), iVar3 != 0 &&
                (iVar3 = _strncmp(local_88,"umid",4), iVar3 != 0)))))) &&
             (iVar3 = _strncmp(local_88,"JUNK",4), iVar3 != 0)) break;
        }
        local_88 = local_88 + *(int *)(local_88 + 4) + 8;
      } while (local_88 < local_c4);
      local_c = 0;
      _local_1c = CONCAT22((short)local_a4,1);
      local_18 = local_a8;
      uVar1 = (short)(local_a0 >> 3) * (short)local_a4;
      local_10 = CONCAT22((short)local_a0,uVar1);
      local_14 = (uint)uVar1 * local_a8;
      local_78 = 0;
      local_70 = 0;
      local_6c = 0;
      local_68 = 0;
      local_64 = 0;
      local_84 = 0x24;
      local_80 = 0x8000;
      local_7c = local_94;
      local_74 = &local_1c;
      local_98 = (**(code **)(**(int **)(local_b0 + 0x60) + 0xc))
                           (*(undefined4 *)(local_b0 + 0x60),&local_84,&local_ac,0);
      if (local_98 != 0) {
        MessageBoxA((HWND)0x0,"CreateSoundBuffer error!",(LPCSTR)0x0,0);
      }
      local_90 = (int *)0x0;
      local_98 = (**(code **)*local_ac)(local_ac,&DAT_0072b360,&local_90);
      if (local_98 != 0) {
        MessageBoxA((HWND)0x0,"m_pBuffer8 error!",(LPCSTR)0x0,0);
      }
      local_98 = (**(code **)(*local_90 + 0x2c))(local_90,0,0,&local_b8,&local_c8,0,0,2);
      FUN_006e6bd0(local_b8,local_b4,local_94);
      local_98 = (**(code **)(*local_90 + 0x4c))(local_90,local_b8,local_c8,0,0);
      (**(code **)(*local_ac + 8))(local_ac);
      FUN_006f1902(local_9c);
      CloseHandle(local_8c);
    }
  }
  return local_90;
}


/* ==== 004bdca0  npk_scan_soundpacks  size=867 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void npk_scan_soundpacks(void)

{
  BOOL BVar1;
  uint uVar2;
  CHAR *pCVar3;
  CHAR *pCVar4;
  undefined1 local_328 [12];
  undefined4 local_31c;
  undefined4 local_318;
  DWORD local_314;
  uint local_310;
  CHAR *local_30c;
  HANDLE local_308;
  CHAR *local_304;
  int local_300;
  CHAR *local_2fc;
  HANDLE local_2f8;
  LPVOID local_2f4;
  CHAR *local_2f0;
  int local_2ec;
  char local_2e6;
  char local_2e5;
  _WIN32_FIND_DATAA local_2e4;
  WorkQueue local_1a4 [84];
  WorkQueue local_150 [24];
  undefined1 local_138 [24];
  int local_120;
  undefined4 local_11c;
  undefined4 local_118;
  char local_114 [256];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071454b;
  local_10 = ExceptionList;
  local_14 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_308 = FindFirstFileA("SoundPacks\\*.npk",&local_2e4);
  do {
    builtin_strncpy(local_114,"SoundPacks\\",0xc);
    _memset(local_114 + 0xc,0,0xf4);
    local_30c = local_2e4.cFileName;
    local_2f0 = local_30c;
    do {
      local_2e5 = *local_2f0;
      local_2f0 = local_2f0 + 1;
    } while (local_2e5 != '\0');
    local_310 = (int)local_2f0 - (int)local_30c;
    local_2fc = (CHAR *)((int)&local_118 + 3);
    do {
      local_2e6 = local_2fc[1];
      local_2fc = local_2fc + 1;
    } while (local_2e6 != '\0');
    pCVar3 = local_30c;
    pCVar4 = local_2fc;
    for (uVar2 = local_310 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined4 *)pCVar4 = *(undefined4 *)pCVar3;
      pCVar3 = pCVar3 + 4;
      pCVar4 = pCVar4 + 4;
    }
    for (uVar2 = local_310 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pCVar4 = *pCVar3;
      pCVar3 = pCVar3 + 1;
      pCVar4 = pCVar4 + 1;
    }
    local_304 = local_30c;
    local_2f8 = CreateFileA(local_114,0x80000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
    if (local_2f8 == (HANDLE)0xffffffff) {
      MessageBoxA((HWND)0x0,"INVALID_HANDLE_VALUE",(LPCSTR)0x0,0);
    }
    SetFilePointer(local_2f8,0x10,(PLONG)0x0,0);
    ReadFile(local_2f8,&local_300,4,&local_314,(LPOVERLAPPED)0x0);
    local_2f4 = (LPVOID)FUN_006f191d(local_300 * 0x108);
    ReadFile(local_2f8,local_2f4,local_300 * 0x108,&local_314,(LPOVERLAPPED)0x0);
    for (local_2ec = 0; local_2ec < local_300; local_2ec = local_2ec + 1) {
      FUN_004be010();
      local_8 = 0;
      local_120 = local_2ec;
      FUN_004053a0(local_2e4.cFileName);
      FUN_004053a0((int)local_2f4 + local_2ec * 0x108 + 8);
      local_11c = *(undefined4 *)((int)local_2f4 + local_2ec * 0x108);
      local_118 = *(undefined4 *)((int)local_2f4 + local_2ec * 0x108 + 4);
      local_31c = FUN_004c4220(local_1a4,local_138,local_150);
      local_8._0_1_ = 1;
      local_318 = local_31c;
      FUN_004c4250(local_328,local_31c);
      local_8 = (uint)local_8._1_3_ << 8;
      Concurrency::details::WorkQueue::~WorkQueue(local_1a4);
      local_8 = 0xffffffff;
      Concurrency::details::WorkQueue::~WorkQueue(local_150);
    }
    FUN_006f1902(local_2f4);
    CloseHandle(local_2f8);
    BVar1 = FindNextFileA(local_308,&local_2e4);
  } while (BVar1 != 0);
  FindClose(local_308);
  ExceptionList = local_10;
  return;
}


/* ==== 00584450  npk_or_resource_subsystem_init  size=23 ==== */

undefined4 npk_or_resource_subsystem_init(void)

{
  undefined4 in_ECX;
  
  FUN_00585b10();
  return in_ECX;
}


/* ==== 00584490  npk_scan_imagepacks2  size=1464 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void npk_scan_imagepacks2(void)

{
  BOOL BVar1;
  uint uVar2;
  CHAR *pCVar3;
  char *pcVar4;
  bool bVar5;
  undefined1 local_384 [8];
  char *local_37c;
  uint local_378;
  int local_374;
  uint local_370;
  uint local_36c;
  CHAR *local_368;
  undefined4 local_360;
  undefined4 local_35c;
  CHAR *local_358;
  HANDLE local_354;
  uint local_350;
  DWORD local_34c;
  uint local_348;
  char *local_344;
  int local_340;
  byte *local_33c;
  byte *local_338;
  byte *local_334;
  byte *local_330;
  char *local_32c;
  char *local_328;
  CHAR *local_324;
  uint local_320;
  HANDLE local_31c;
  byte local_316;
  byte local_315;
  byte local_314;
  byte local_313;
  char local_312;
  char local_311;
  LPVOID local_310;
  int local_30c;
  char local_305;
  undefined1 local_304 [24];
  int local_2ec;
  undefined4 local_2e8;
  undefined4 local_2e4;
  undefined4 local_2c8;
  undefined4 local_2c4;
  _WIN32_FIND_DATAA local_2c0;
  WorkQueue local_180 [91];
  char cStack_125;
  char local_124 [256];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071d09b;
  local_10 = ExceptionList;
  local_14 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_354 = FindFirstFileA(PTR_s_ImagePacks2___npk_007c642c,&local_2c0);
  do {
    local_344 = PTR_s_ImagePacks2__007c6430;
    local_37c = local_124;
    local_328 = local_37c;
    do {
      local_305 = *local_344;
      *local_328 = local_305;
      local_344 = local_344 + 1;
      local_328 = local_328 + 1;
    } while (local_305 != '\0');
    local_368 = local_2c0.cFileName;
    local_324 = local_368;
    do {
      local_311 = *local_324;
      local_324 = local_324 + 1;
    } while (local_311 != '\0');
    local_36c = (int)local_324 - (int)local_368;
    local_32c = &cStack_125;
    do {
      local_312 = local_32c[1];
      local_32c = local_32c + 1;
    } while (local_312 != '\0');
    pCVar3 = local_368;
    pcVar4 = local_32c;
    for (uVar2 = local_36c >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined4 *)pcVar4 = *(undefined4 *)pCVar3;
      pCVar3 = pCVar3 + 4;
      pcVar4 = pcVar4 + 4;
    }
    for (uVar2 = local_36c & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar4 = *pCVar3;
      pCVar3 = pCVar3 + 1;
      pcVar4 = pcVar4 + 1;
    }
    local_358 = local_368;
    local_31c = CreateFileA(local_124,0x80000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
    if (local_31c == (HANDLE)0xffffffff) {
      MessageBoxA((HWND)0x0,&DAT_0075a484,(LPCSTR)0x0,0);
    }
    local_334 = (byte *)0x75a454;
    local_330 = PTR_s_ImagePacks2__007c6430;
    do {
      local_313 = *local_330;
      bVar5 = local_313 < *local_334;
      if (local_313 != *local_334) {
LAB_0058469a:
        local_348 = -(uint)bVar5 | 1;
        goto LAB_005846a5;
      }
      if (local_313 == 0) break;
      local_314 = local_330[1];
      bVar5 = local_314 < local_334[1];
      if (local_314 != local_334[1]) goto LAB_0058469a;
      local_330 = local_330 + 2;
      local_334 = local_334 + 2;
    } while (local_314 != 0);
    local_348 = 0;
LAB_005846a5:
    local_370 = local_348;
    if (local_348 == 0) {
LAB_0058471a:
      SetFilePointer(local_31c,0x10,(PLONG)0x0,0);
      ReadFile(local_31c,&local_340,4,&local_34c,(LPOVERLAPPED)0x0);
      local_310 = (LPVOID)FUN_006f191d(local_340 * 0x108);
      ReadFile(local_31c,local_310,local_340 * 0x108,&local_34c,(LPOVERLAPPED)0x0);
      for (local_30c = 0; local_30c < local_340; local_30c = local_30c + 1) {
        local_338 = (byte *)0x75a4f4;
        local_33c = PTR_s_ImagePacks2__007c6430;
        do {
          local_315 = *local_33c;
          bVar5 = local_315 < *local_338;
          if (local_315 != *local_338) {
LAB_0058482e:
            local_350 = -(uint)bVar5 | 1;
            goto LAB_00584839;
          }
          if (local_315 == 0) break;
          local_316 = local_33c[1];
          bVar5 = local_316 < local_338[1];
          if (local_316 != local_338[1]) goto LAB_0058482e;
          local_33c = local_33c + 2;
          local_338 = local_338 + 2;
        } while (local_316 != 0);
        local_350 = 0;
LAB_00584839:
        local_378 = local_350;
        if (local_350 != 0) {
          for (local_320 = 0; local_320 < 0xff; local_320 = local_320 + 1) {
            *(byte *)((int)local_310 + local_320 + local_30c * 0x108 + 8) =
                 *(byte *)((int)local_310 + local_320 + local_30c * 0x108 + 8) ^
                 "puchikon@neople dungeon and fighter DNFDNFDNFDNFDNFDNFDNFDNFDNFDNFDNFDNFDNFDNFDNFDNFDNFDNFDNFDNFDNFDNFDNFDNFDNFDNFDNFDNFDNFDNFDNFDNFDNFDNFDNFDNFDNFDNFDNFDNFDNFDNFDNFDNFDNFDNFDNFDNFDNFDNFDNFDNFDNFDNFDNFDNFDNFDNFDNFDNFDNFDNFDNFDNFDNFDNFDNFDNFDNFDNFDNFDNFDNF"
                 [local_320];
          }
        }
        *(undefined1 *)((int)local_310 + local_30c * 0x108 + 0x107) = 0;
        FUN_00584a50();
        local_8 = 0;
        local_2e8 = *(undefined4 *)((int)local_310 + local_30c * 0x108);
        local_2e4 = *(undefined4 *)((int)local_310 + local_30c * 0x108 + 4);
        local_2ec = local_30c;
        FUN_004053a0(local_2c0.cFileName);
        FUN_004053a0((int)local_310 + local_30c * 0x108 + 8);
        local_2c4 = 0;
        local_2c8 = 0;
        local_360 = FUN_00585c60(local_180,local_304,local_304);
        local_8._0_1_ = 1;
        local_35c = local_360;
        FUN_00585c90(local_384,local_360);
        local_8 = (uint)local_8._1_3_ << 8;
        Concurrency::details::WorkQueue::~WorkQueue(local_180);
        local_8 = 0xffffffff;
        FUN_00584a80();
      }
      FUN_006f1902(local_310);
      CloseHandle(local_31c);
    }
    else {
      local_24 = 0;
      local_20 = 0;
      local_1c = 0;
      local_18 = 0;
      ReadFile(local_31c,&local_24,0x10,&local_34c,(LPOVERLAPPED)0x0);
      local_374 = util_memmem_or_bytes_find(&local_24,"NeoplePack_Bill",0xf);
      if (local_374 == 0) goto LAB_0058471a;
      CloseHandle(local_31c);
    }
    BVar1 = FindNextFileA(local_354,&local_2c0);
    if (BVar1 == 0) {
      FindClose(local_354);
      ExceptionList = local_10;
      return;
    }
  } while( true );
}

/* ==== 00584ac0  npk_img_decode_frames_from_entry  size=2859 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 npk_img_decode_frames_from_entry(int param_1)

{
  uint uVar1;
  char *pcVar2;
  char *pcVar3;
  DWORD local_190;
  char *local_18c;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  uint local_168;
  uint local_164;
  char *local_160;
  char *local_15c;
  void *local_158;
  void *local_154;
  size_t local_150;
  undefined4 *local_14c;
  uint local_148;
  char *local_144;
  LPVOID local_140;
  HANDLE local_13c;
  void *local_138;
  char *local_134;
  char *local_130;
  undefined4 local_12c;
  char *local_128;
  char local_122;
  char local_121;
  int local_120;
  int local_11c;
  char local_115;
  undefined4 *local_114;
  int local_110;
  undefined4 local_10c;
  char local_108 [256];
  uint local_8;
  
  local_8 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  local_144 = PTR_s_ImagePacks2__007c6430;
  local_18c = local_108;
  local_130 = local_18c;
  do {
    local_115 = *local_144;
    *local_130 = local_115;
    local_144 = local_144 + 1;
    local_130 = local_130 + 1;
  } while (local_115 != '\0');
  local_160 = (char *)npk_get_relative_res_path();
  local_128 = local_160;
  do {
    local_121 = *local_128;
    local_128 = local_128 + 1;
  } while (local_121 != '\0');
  local_164 = (int)local_128 - (int)local_160;
  local_134 = (char *)((int)&local_10c + 3);
  do {
    local_122 = local_134[1];
    local_134 = local_134 + 1;
  } while (local_122 != '\0');
  pcVar2 = local_160;
  pcVar3 = local_134;
  for (uVar1 = local_164 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)pcVar3 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar3 = pcVar3 + 4;
  }
  for (uVar1 = local_164 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *pcVar3 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  }
  local_15c = local_160;
  local_13c = CreateFileA(local_108,0xc0000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  if (local_13c == (HANDLE)0xffffffff) {
    MessageBoxA((HWND)0x0,&DAT_0075a504,(LPCSTR)0x0,0);
  }
  local_140 = (LPVOID)FUN_006f191d(*(undefined4 *)(param_1 + 0x20));
  SetFilePointer(local_13c,*(LONG *)(param_1 + 0x1c),(PLONG)0x0,0);
  ReadFile(local_13c,local_140,*(DWORD *)(param_1 + 0x20),&local_190,(LPOVERLAPPED)0x0);
  local_168 = *(uint *)((int)local_140 + 0x1c);
  *(uint *)(param_1 + 0x3c) = local_168;
  local_150 = (size_t)((ulonglong)local_168 * 0x28);
  if ((int)((ulonglong)local_168 * 0x28 >> 0x20) != 0) {
    local_150 = 0xffffffff;
  }
  local_148 = local_168;
  local_138 = (void *)FUN_006e5209(local_150);
  if (local_138 == (void *)0x0) {
    local_158 = (void *)0x0;
  }
  else {
    _memset(local_138,0,local_150);
    if (local_138 == (void *)0x0) {
      local_154 = (void *)0x0;
    }
    else {
      local_154 = local_138;
    }
    local_158 = local_154;
  }
  local_10c = local_158;
  local_114 = (undefined4 *)((int)local_140 + 0x20);
  for (local_110 = 0; local_110 < (int)local_148; local_110 = local_110 + 1) {
    *(undefined4 *)((int)local_10c + local_110 * 0x28) = *local_114;
    *(undefined4 *)((int)local_10c + local_110 * 0x28 + 4) = local_114[1];
    *(undefined4 *)((int)local_10c + local_110 * 0x28 + 8) = local_114[2];
    *(undefined4 *)((int)local_10c + local_110 * 0x28 + 0xc) = local_114[3];
    *(undefined4 *)((int)local_10c + local_110 * 0x28 + 0x10) = local_114[4];
    *(undefined4 *)((int)local_10c + local_110 * 0x28 + 0x14) = local_114[5];
    *(undefined4 *)((int)local_10c + local_110 * 0x28 + 0x18) = local_114[6];
    *(undefined4 *)((int)local_10c + local_110 * 0x28 + 0x1c) = local_114[7];
    *(undefined4 *)((int)local_10c + local_110 * 0x28 + 0x20) = local_114[8];
    if (*(int *)((int)local_10c + local_110 * 0x28) == 0x11) {
      local_11c = *(int *)((int)local_10c + local_110 * 0x28 + 4);
      if (local_110 <= local_11c) {
        MessageBoxA((HWND)0x0,&DAT_0075a4ac,(LPCSTR)0x0,0);
      }
      local_16c = FUN_006e5209(*(undefined4 *)((int)local_10c + local_11c * 0x28 + 0x10));
      *(undefined4 *)((int)local_10c + local_110 * 0x28 + 0x24) = local_16c;
      FUN_006e6bd0(*(undefined4 *)((int)local_10c + local_110 * 0x28 + 0x24),
                   *(undefined4 *)
                    ((int)local_10c + *(int *)((int)local_10c + local_110 * 0x28 + 4) * 0x28 + 0x24)
                   ,*(undefined4 *)((int)local_10c + local_11c * 0x28 + 0x10));
      *(undefined4 *)((int)local_10c + local_110 * 0x28 + 0x10) =
           *(undefined4 *)((int)local_10c + local_11c * 0x28 + 0x10);
      *(undefined4 *)((int)local_10c + local_110 * 0x28 + 0x20) =
           *(undefined4 *)((int)local_10c + local_11c * 0x28 + 0x20);
      *(undefined4 *)((int)local_10c + local_110 * 0x28 + 0x1c) =
           *(undefined4 *)((int)local_10c + local_11c * 0x28 + 0x1c);
      *(undefined4 *)((int)local_10c + local_110 * 0x28 + 8) =
           *(undefined4 *)((int)local_10c + local_11c * 0x28 + 8);
      *(undefined4 *)((int)local_10c + local_110 * 0x28 + 0xc) =
           *(undefined4 *)((int)local_10c + local_11c * 0x28 + 0xc);
      *(undefined4 *)((int)local_10c + local_110 * 0x28 + 0x14) =
           *(undefined4 *)((int)local_10c + local_11c * 0x28 + 0x14);
      *(undefined4 *)((int)local_10c + local_110 * 0x28 + 0x18) =
           *(undefined4 *)((int)local_10c + local_11c * 0x28 + 0x18);
      local_114 = local_114 + 2;
    }
    else if (*(int *)((int)local_10c + local_110 * 0x28 + 4) == 6) {
      local_12c = FUN_006f191d(local_114[2] * local_114[3] * 0x28);
      local_120 = local_114[2] * local_114[3] * 0x28;
      zlib_uncompress_buffer(local_12c,&local_120,local_114 + 9,local_114[4]);
      if (*(int *)((int)local_10c + local_110 * 0x28) == 0xe) {
        local_170 = FUN_006e5209(local_120 << 1);
        *(undefined4 *)((int)local_10c + local_110 * 0x28 + 0x24) = local_170;
        img_convert_pixels_fmt_0e(*(undefined4 *)((int)local_10c + local_110 * 0x28 + 0x24),local_12c,
                     local_120 << 1);
        *(int *)((int)local_10c + local_110 * 0x28 + 0x10) = local_120 << 1;
        local_114 = (undefined4 *)((int)local_114 + local_114[4] + 0x24);
      }
      else if (*(int *)((int)local_10c + local_110 * 0x28) == 0xf) {
        local_174 = FUN_006e5209(local_120 << 1);
        *(undefined4 *)((int)local_10c + local_110 * 0x28 + 0x24) = local_174;
        img_convert_pixels_fmt_0f(*(undefined4 *)((int)local_10c + local_110 * 0x28 + 0x24),local_12c,
                     local_120 << 1);
        *(int *)((int)local_10c + local_110 * 0x28 + 0x10) = local_120 << 1;
        local_114 = (undefined4 *)((int)local_114 + local_114[4] + 0x24);
      }
      else if (*(int *)((int)local_10c + local_110 * 0x28) == 0x10) {
        local_178 = FUN_006e5209(local_120);
        *(undefined4 *)((int)local_10c + local_110 * 0x28 + 0x24) = local_178;
        FUN_006e6bd0(*(undefined4 *)((int)local_10c + local_110 * 0x28 + 0x24),local_12c,local_120);
        *(int *)((int)local_10c + local_110 * 0x28 + 0x10) = local_120;
        local_114 = (undefined4 *)((int)local_114 + local_114[4] + 0x24);
      }
      else if (*(int *)((int)local_10c + local_110 * 0x28) == 0x11) {
        *(undefined4 *)((int)local_10c + local_110 * 0x28 + 0x24) =
             *(undefined4 *)
              ((int)local_10c + *(int *)((int)local_10c + local_110 * 0x28 + 4) * 0x28 + 0x24);
        local_114 = local_114 + 2;
      }
      else {
        MessageBoxA((HWND)0x0,&DAT_0075a4e0,(LPCSTR)0x0,0);
      }
      FUN_006f1902(local_12c);
    }
    else if (*(int *)((int)local_10c + local_110 * 0x28 + 4) == 5) {
      local_14c = local_114 + 9;
      if (*(int *)((int)local_10c + local_110 * 0x28) == 0xe) {
        local_17c = FUN_006e5209(*(undefined4 *)((int)local_10c + local_110 * 0x28 + 0x10));
        *(undefined4 *)((int)local_10c + local_110 * 0x28 + 0x24) = local_17c;
        img_convert_pixels_fmt_0e(*(undefined4 *)((int)local_10c + local_110 * 0x28 + 0x24),local_14c,
                     *(undefined4 *)((int)local_10c + local_110 * 0x28 + 0x10));
        local_114 = (undefined4 *)
                    ((int)local_114 + *(int *)((int)local_10c + local_110 * 0x28 + 0x10) / 2 + 0x24)
        ;
      }
      else if (*(int *)((int)local_10c + local_110 * 0x28) == 0xf) {
        local_180 = FUN_006e5209(*(undefined4 *)((int)local_10c + local_110 * 0x28 + 0x10));
        *(undefined4 *)((int)local_10c + local_110 * 0x28 + 0x24) = local_180;
        img_convert_pixels_fmt_0f(*(undefined4 *)((int)local_10c + local_110 * 0x28 + 0x24),local_14c,
                     *(undefined4 *)((int)local_10c + local_110 * 0x28 + 0x10));
        local_114 = (undefined4 *)
                    ((int)local_114 + *(int *)((int)local_10c + local_110 * 0x28 + 0x10) / 2 + 0x24)
        ;
      }
      else if (*(int *)((int)local_10c + local_110 * 0x28) == 0x10) {
        local_184 = FUN_006e5209(*(undefined4 *)((int)local_10c + local_110 * 0x28 + 0x10));
        *(undefined4 *)((int)local_10c + local_110 * 0x28 + 0x24) = local_184;
        FUN_005859e0(*(undefined4 *)((int)local_10c + local_110 * 0x28 + 0x24),local_14c,
                     *(undefined4 *)((int)local_10c + local_110 * 0x28 + 0x10));
        local_114 = (undefined4 *)
                    ((int)local_114 + *(int *)((int)local_10c + local_110 * 0x28 + 0x10) + 0x24);
      }
      else if (*(int *)((int)local_10c + local_110 * 0x28) == 0x11) {
        *(undefined4 *)((int)local_10c + local_110 * 0x28 + 0x24) =
             *(undefined4 *)
              ((int)local_10c + *(int *)((int)local_10c + local_110 * 0x28 + 4) * 0x28 + 0x24);
        local_114 = local_114 + 2;
      }
      else {
        MessageBoxA((HWND)0x0,&DAT_0075a568,(LPCSTR)0x0,0);
      }
    }
    else {
      MessageBoxA((HWND)0x0,&DAT_0075a57c,(LPCSTR)0x0,0);
    }
  }
  *(void **)(param_1 + 0x40) = local_10c;
  CloseHandle(local_13c);
  FUN_006f1902(local_140);
  return 0;
}


/* ==== 00585780  img_convert_pixels_fmt_0f  size=304 ==== */

undefined4 img_convert_pixels_fmt_0f(uint *param_1,ushort *param_2,int param_3)

{
  ushort uVar1;
  int local_20;
  
  for (local_20 = 0; local_20 < (int)(param_3 + (param_3 >> 0x1f & 3U)) >> 2;
      local_20 = local_20 + 1) {
    uVar1 = *param_2;
    *param_1 = (uint)(ushort)((ulonglong)((uint)(uVar1 & 0xf) * 0xff) / 0xf) |
               ((uint)(ushort)((ulonglong)((uint)((ushort)((int)(uint)uVar1 >> 4) & 0xf) * 0xff) /
                              0xf) |
               ((uint)(ushort)((ulonglong)((uint)(uVar1 >> 8 & 0xf) * 0xff) / 0xf) |
               (uint)(ushort)((ulonglong)(uint)(((int)(uint)uVar1 >> 0xc) * 0xff) / 0xf) << 8) << 8)
               << 8;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  }
  return 0;
}


/* ==== 005858b0  img_convert_pixels_fmt_0e  size=296 ==== */

undefined4 img_convert_pixels_fmt_0e(uint *param_1,ushort *param_2,int param_3)

{
  ushort uVar1;
  int local_20;
  
  for (local_20 = 0; local_20 < (int)(param_3 + (param_3 >> 0x1f & 3U)) >> 2;
      local_20 = local_20 + 1) {
    uVar1 = *param_2;
    *param_1 = (uint)(ushort)((ulonglong)((uint)(uVar1 & 0x1f) * 0xff) / 0x1f) |
               ((uint)(ushort)((ulonglong)((uint)((ushort)((int)(uint)uVar1 >> 5) & 0x1f) * 0xff) /
                              0x1f) |
               ((uint)(ushort)((ulonglong)((uint)((ushort)((int)(uint)uVar1 >> 10) & 0x1f) * 0xff) /
                              0x1f) | (uint)(ushort)((short)((int)(uint)uVar1 >> 0xf) * 0xff) << 8)
               << 8) << 8;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  }
  return 0;
}


/* ==== 006aec80  img_or_resource_compress_5_6_d  size=1339 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x006aee9c) */
/* WARNING: Removing unreachable block (ram,0x006aee7c) */

void img_or_resource_compress_5_6_d(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  undefined4 uStack_1a0;
  function<void___cdecl(void)> *pfStack_19c;
  undefined1 auStack_198 [16];
  int iStack_188;
  int iStack_184;
  char *pcStack_180;
  uint uStack_17c;
  undefined1 *local_178;
  undefined1 *local_174;
  undefined1 *local_170;
  undefined1 *local_16c;
  undefined4 local_168;
  int local_164;
  int local_160;
  int local_15c;
  int local_158;
  int local_154;
  int local_150;
  int local_14c;
  int local_148;
  int local_144;
  int local_140;
  int local_13c;
  int local_138;
  int local_134;
  int local_130;
  function<void___cdecl(void)> local_12c [23];
  char acStack_115 [257];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0072a4a0;
  local_10 = ExceptionList;
  uStack_17c = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (((*(char *)(in_ECX + 0xa14) != '\0') && (*(char *)(in_ECX + 0xa38) != '\x01')) &&
     (local_140 = *(int *)(in_ECX + 0xa28), local_140 != 1)) {
    local_154 = *(int *)(in_ECX + 0xa20);
    local_13c = *(int *)(in_ECX + 0xa24);
    pcStack_180 = (char *)0x6aed2d;
    local_138 = in_ECX;
    local_14 = uStack_17c;
    FUN_0040d8b0();
    local_8 = 0;
    local_130 = 0x49;
    if (local_13c == 0) {
      pcStack_180 = "sprite/interface/base.img";
      iStack_184 = 0x6aed57;
      FUN_004053a0();
      local_130 = 0x49;
    }
    else if (local_13c == 1) {
      pcStack_180 = "sprite/interface/base.img";
      iStack_184 = 0x6aed7f;
      FUN_004053a0();
      local_130 = 0x1a;
    }
    else if (local_13c == 3) {
      pcStack_180 = "sprite/interface/skillbuywindow.img";
      iStack_184 = 0x6aeda7;
      FUN_004053a0();
      local_130 = 0x28;
    }
    else if (local_13c == 4) {
      pcStack_180 = "sprite/interface/skillbuywindow.img";
      iStack_184 = 0x6aedcf;
      FUN_004053a0();
      local_130 = 0x3d;
    }
    else if (local_13c == 5) {
      pcStack_180 = "sprite/interface/skillbuywindow.img";
      iStack_184 = 0x6aedf7;
      FUN_004053a0();
      local_130 = 0x48;
    }
    else if (local_13c == 7) {
      pcStack_180 = "sprite/interface/skillbuywindow.img";
      iStack_184 = 0x6aee1f;
      FUN_004053a0();
      local_130 = 0x89;
    }
    else if (local_13c == 2) {
      pcStack_180 = "sprite/interface/iteminventorywindow.img";
      iStack_184 = 0x6aee47;
      FUN_004053a0();
      local_130 = 0x1a;
    }
    else if (local_13c == 6) {
      pcStack_180 = "sprite/interface/skillbuywindow.img";
      iStack_184 = 0x6aee6c;
      FUN_004053a0();
      local_130 = 0x54;
    }
    else {
      local_168 = 0;
    }
    acStack_115[1] = '\0';
    acStack_115[2] = '\0';
    acStack_115[3] = '\0';
    acStack_115[4] = '\0';
    acStack_115[5] = '\0';
    acStack_115[6] = '\0';
    acStack_115[7] = '\0';
    acStack_115[8] = '\0';
    acStack_115[9] = '\0';
    acStack_115[10] = '\0';
    acStack_115[0xb] = '\0';
    acStack_115[0xc] = '\0';
    acStack_115[0xd] = '\0';
    acStack_115[0xe] = '\0';
    acStack_115[0xf] = '\0';
    acStack_115[0x10] = '\0';
    acStack_115[0x11] = '\0';
    acStack_115[0x12] = '\0';
    acStack_115[0x13] = '\0';
    acStack_115[0x14] = '\0';
    local_148 = 0;
    iVar2 = local_148;
    do {
      local_148 = iVar2;
      acStack_115[local_148 + 1] = (char)(local_140 % 10);
      local_140 = local_140 / 10;
      local_158 = local_148 + 1;
      iVar2 = local_158;
    } while (local_140 != 0);
    local_134 = 0;
    local_140 = 0;
    iVar2 = local_158;
    if (local_154 == 0) {
      local_134 = 0;
      iVar1 = local_158;
    }
    else if (local_154 == 1) {
      local_14c = local_148;
      local_148 = local_158;
      for (; -1 < local_14c; local_14c = local_14c + -1) {
        pcStack_180 = (char *)(acStack_115[local_14c + 1] + local_130);
        local_16c = auStack_198;
        pfStack_19c = local_12c;
        uStack_1a0 = 0x6aefd0;
        FUN_00405520();
        pfStack_19c = (function<void___cdecl(void)> *)0x6aefdb;
        local_15c = FUN_004b8ca0();
        local_134 = local_134 - *(int *)(local_15c + 0x14);
      }
      local_134 = local_134 / 2;
      iVar1 = local_148;
      iVar2 = local_158;
    }
    else {
      iVar1 = local_158;
      if (local_154 == 2) {
        local_150 = local_148;
        local_148 = local_158;
        for (; iVar1 = local_148, iVar2 = local_158, -1 < local_150; local_150 = local_150 + -1) {
          pcStack_180 = (char *)(acStack_115[local_150 + 1] + local_130);
          local_170 = auStack_198;
          pfStack_19c = local_12c;
          uStack_1a0 = 0x6af06c;
          FUN_00405520();
          pfStack_19c = (function<void___cdecl(void)> *)0x6af077;
          local_160 = FUN_004b8ca0();
          local_134 = local_134 - *(int *)(local_160 + 0x14);
        }
      }
    }
    while (local_148 = iVar1, local_144 = iVar2 + -1, -1 < local_144) {
      pcStack_180 = (char *)(*(int *)(local_138 + 0x58) + *(int *)(local_138 + 0xa1c));
      iStack_184 = *(int *)(local_138 + 0x54) + *(int *)(local_138 + 0xa18) + local_134;
      iStack_188 = acStack_115[iVar2] + local_130;
      local_174 = (undefined1 *)&uStack_1a0;
      FUN_00405520(local_12c);
      FUN_004bad40();
      pcStack_180 = (char *)(acStack_115[local_144 + 1] + local_130);
      local_178 = auStack_198;
      pfStack_19c = local_12c;
      uStack_1a0 = 0x6af164;
      FUN_00405520();
      pfStack_19c = (function<void___cdecl(void)> *)0x6af16f;
      local_164 = FUN_004b8ca0();
      local_134 = local_134 + *(int *)(local_164 + 0x14);
      iVar1 = local_148;
      iVar2 = local_144;
    }
    local_8 = 0xffffffff;
    pcStack_180 = (char *)0x6af1a1;
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_12c);
  }
  ExceptionList = local_10;
  return;
}


/* ==== 006af1c0  img_or_resource_compress_5_6_c  size=1403 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x006af3fd) */
/* WARNING: Removing unreachable block (ram,0x006af41d) */

void img_or_resource_compress_5_6_c(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  undefined4 uStack_1b0;
  function<void___cdecl(void)> *pfStack_1ac;
  undefined1 auStack_1a8 [16];
  int iStack_198;
  int iStack_194;
  char *pcStack_190;
  uint uStack_18c;
  undefined1 *local_188;
  undefined1 *local_184;
  undefined1 *local_180;
  undefined1 *local_17c;
  undefined4 local_178;
  int local_174;
  int local_170;
  int local_16c;
  char *local_168;
  int local_164;
  int local_160;
  int local_15c;
  int local_158;
  int local_154;
  int local_150;
  int local_14c;
  int local_148;
  char *local_144;
  int local_140;
  char *local_13c;
  int local_138;
  int local_134;
  int local_130;
  function<void___cdecl(void)> local_12c [23];
  char acStack_115 [257];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071f780;
  local_10 = ExceptionList;
  uStack_18c = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_164 = in_ECX + 0xa2c;
  pcStack_190 = (char *)0x6af20d;
  local_158 = in_ECX;
  local_14 = uStack_18c;
  local_144 = (char *)game_loop_helper_018d0();
  pcStack_190 = (char *)0x6af21e;
  local_168 = (char *)game_loop_helper_018b0();
  for (; local_144 != local_168; local_144 = local_144 + 0x18) {
    local_13c = local_144;
    if ((*local_144 != '\0') && (*(char *)(local_158 + 0xa38) != '\x01')) {
      local_148 = *(int *)(local_144 + 0x14);
      local_15c = *(int *)(local_144 + 0xc);
      local_138 = *(int *)(local_144 + 0x10);
      pcStack_190 = (char *)0x6af2ae;
      FUN_0040d8b0();
      local_8 = 0;
      local_130 = 0x49;
      if (local_138 == 0) {
        pcStack_190 = "sprite/interface/base.img";
        iStack_194 = 0x6af2d8;
        FUN_004053a0();
        local_130 = 0x49;
      }
      else if (local_138 == 1) {
        pcStack_190 = "sprite/interface/base.img";
        iStack_194 = 0x6af300;
        FUN_004053a0();
        local_130 = 0x1a;
      }
      else if (local_138 == 3) {
        pcStack_190 = "sprite/interface/skillbuywindow.img";
        iStack_194 = 0x6af328;
        FUN_004053a0();
        local_130 = 0x28;
      }
      else if (local_138 == 4) {
        pcStack_190 = "sprite/interface/skillbuywindow.img";
        iStack_194 = 0x6af350;
        FUN_004053a0();
        local_130 = 0x3d;
      }
      else if (local_138 == 5) {
        pcStack_190 = "sprite/interface/skillbuywindow.img";
        iStack_194 = 0x6af378;
        FUN_004053a0();
        local_130 = 0x48;
      }
      else if (local_138 == 7) {
        pcStack_190 = "sprite/interface/skillbuywindow.img";
        iStack_194 = 0x6af3a0;
        FUN_004053a0();
        local_130 = 0x89;
      }
      else if (local_138 == 2) {
        pcStack_190 = "sprite/interface/iteminventorywindow.img";
        iStack_194 = 0x6af3c8;
        FUN_004053a0();
        local_130 = 0x1a;
      }
      else if (local_138 == 6) {
        pcStack_190 = "sprite/interface/skillbuywindow.img";
        iStack_194 = 0x6af3ed;
        FUN_004053a0();
        local_130 = 0x54;
      }
      else {
        local_178 = 0;
      }
      acStack_115[1] = '\0';
      acStack_115[2] = '\0';
      acStack_115[3] = '\0';
      acStack_115[4] = '\0';
      acStack_115[5] = '\0';
      acStack_115[6] = '\0';
      acStack_115[7] = '\0';
      acStack_115[8] = '\0';
      acStack_115[9] = '\0';
      acStack_115[10] = '\0';
      acStack_115[0xb] = '\0';
      acStack_115[0xc] = '\0';
      acStack_115[0xd] = '\0';
      acStack_115[0xe] = '\0';
      acStack_115[0xf] = '\0';
      acStack_115[0x10] = '\0';
      acStack_115[0x11] = '\0';
      acStack_115[0x12] = '\0';
      acStack_115[0x13] = '\0';
      acStack_115[0x14] = '\0';
      local_14c = 0;
      do {
        acStack_115[local_14c + 1] = (char)(local_148 % 10);
        local_148 = local_148 / 10;
        local_160 = local_14c + 1;
        local_14c = local_160;
      } while (local_148 != 0);
      local_134 = 0;
      local_148 = 0;
      iVar1 = local_160;
      if (local_15c == 0) {
        local_134 = 0;
      }
      else if (local_15c == 1) {
        while (local_150 = iVar1 + -1, -1 < local_150) {
          pcStack_190 = (char *)(acStack_115[iVar1] + local_130);
          local_17c = auStack_1a8;
          pfStack_1ac = local_12c;
          uStack_1b0 = 0x6af551;
          FUN_00405520();
          pfStack_1ac = (function<void___cdecl(void)> *)0x6af55c;
          local_16c = FUN_004b8ca0();
          local_134 = local_134 - *(int *)(local_16c + 0x14);
          iVar1 = local_150;
        }
        local_134 = local_134 / 2;
        iVar1 = local_160;
      }
      else {
        iVar2 = local_160;
        if (local_15c == 2) {
          while (local_154 = iVar2 + -1, iVar1 = local_160, -1 < local_154) {
            pcStack_190 = (char *)(acStack_115[iVar2] + local_130);
            local_180 = auStack_1a8;
            pfStack_1ac = local_12c;
            uStack_1b0 = 0x6af5ed;
            FUN_00405520();
            pfStack_1ac = (function<void___cdecl(void)> *)0x6af5f8;
            local_170 = FUN_004b8ca0();
            local_134 = local_134 - *(int *)(local_170 + 0x14);
            iVar2 = local_154;
          }
        }
      }
      while (local_140 = iVar1 + -1, -1 < local_140) {
        pcStack_190 = (char *)(*(int *)(local_158 + 0x58) + *(int *)(local_13c + 8));
        iStack_194 = *(int *)(local_158 + 0x54) + *(int *)(local_13c + 4) + local_134;
        iStack_198 = acStack_115[iVar1] + local_130;
        local_184 = (undefined1 *)&uStack_1b0;
        FUN_00405520(local_12c);
        FUN_004bad40();
        pcStack_190 = (char *)(acStack_115[local_140 + 1] + local_130);
        local_188 = auStack_1a8;
        pfStack_1ac = local_12c;
        uStack_1b0 = 0x6af6df;
        FUN_00405520();
        pfStack_1ac = (function<void___cdecl(void)> *)0x6af6ea;
        local_174 = FUN_004b8ca0();
        local_134 = local_134 + *(int *)(local_174 + 0x14);
        iVar1 = local_140;
      }
      local_8 = 0xffffffff;
      pcStack_190 = (char *)0x6af71c;
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_12c);
    }
  }
  ExceptionList = local_10;
  return;
}


