/* Auto-decompiled pseudo-code from game.exe / sound_dsound */
/* NOT original source. Bucketed by evidence (strings/imports/call-graph), not raw address. */

/* ==== 0049daa0  FUN_0049daa0  size=26 ==== */

void FUN_0049daa0(undefined4 param_1)

{
  FUN_0049de50(param_1);
  return;
}


/* ==== 0049de50  FUN_0049de50  size=75 ==== */

void FUN_0049de50(undefined4 param_1)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) == *(int *)(in_ECX + 8)) {
    FUN_0049e2b0(*(int *)(in_ECX + 4),param_1);
  }
  else {
    FUN_0049e240(param_1);
  }
  return;
}


/* ==== 0049e240  FUN_0049e240  size=110 ==== */

int FUN_0049e240(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  int *piVar3;
  
  piVar3 = (int *)(in_ECX + 4);
  uVar2 = _Unfancy<>(*piVar3,param_1);
  uVar2 = FUN_00401c60(uVar2);
  FUN_0040a760(uVar2);
  FUN_004023d0(*piVar3,*piVar3);
  iVar1 = *piVar3;
  *piVar3 = *piVar3 + 0x1c;
  return iVar1;
}


/* ==== 0049e2b0  FUN_0049e2b0  size=461 ==== */

int FUN_0049e2b0(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int *local_3c;
  int local_38;
  int local_34;
  int *local_30;
  undefined4 local_2c;
  int *local_28;
  int *local_24;
  int local_20;
  int *local_1c;
  undefined4 local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00712c0d;
  local_10 = ExceptionList;
  uVar1 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_18 = FUN_00401c60(uVar1);
  local_30 = local_1c;
  local_24 = local_1c;
  local_28 = local_1c + 1;
  local_20 = (param_1 - *local_1c) / 0x1c;
  local_34 = (*local_28 - *local_1c) / 0x1c;
  iVar2 = FUN_004902b0();
  if (local_34 == iVar2) {
    FUN_00401c80();
  }
  local_40 = local_34 + 1;
  local_2c = FUN_0049e6a0(local_40);
  local_14 = FUN_0049e7d0(local_18,&local_2c);
  local_4c = local_14 + 0x1c + local_20 * 0x1c;
  local_8 = 0;
  local_3c = &local_4c;
  uVar4 = local_18;
  local_48 = local_4c;
  local_38 = local_4c;
  uVar3 = _Unfancy<>(local_20 * 0x1c + local_14,param_2,uVar1,local_18,local_14,local_2c);
  FUN_0040a760(local_18,uVar3);
  *local_3c = local_20 * 0x1c + local_14;
  if (param_1 == *local_28) {
    FUN_0049e7f0(*local_24,*local_28,local_14,local_18);
  }
  else {
    FUN_0049e7f0(*local_24,param_1,local_14,local_18);
    *local_3c = local_14;
    FUN_0049e7f0(param_1,*local_28,local_14 + 0x1c + local_20 * 0x1c,local_18);
  }
  uVar3 = 0;
  FUN_0049e5f0(local_14,local_40,local_2c);
  local_44 = local_20 * 0x1c + local_14;
  local_8 = 0xffffffff;
  FUN_0049e5a0(uVar1,uVar4,uVar3);
  ExceptionList = local_10;
  return local_44;
}


/* ==== 0049e5f0  FUN_0049e5f0  size=163 ==== */

void FUN_0049e5f0(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int *in_ECX;
  int *piVar2;
  int *piVar3;
  
  uVar1 = FUN_00401c60();
  piVar3 = in_ECX + 1;
  piVar2 = in_ECX + 2;
  FUN_00401710(piVar2,piVar3,uVar1);
  if (*in_ECX != 0) {
    FUN_0044f500(*in_ECX,*piVar3,uVar1);
    FUN_0044ea10(*in_ECX,(*piVar2 - *in_ECX) / 0x1c);
  }
  *in_ECX = param_1;
  *piVar3 = param_2 * 0x1c + param_1;
  *piVar2 = param_3 * 0x1c + param_1;
  return;
}


/* ==== 0049e6a0  FUN_0049e6a0  size=84 ==== */

uint FUN_0049e6a0(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_0049e700();
  uVar2 = FUN_004902b0();
  if ((uVar1 <= uVar2 - (uVar1 >> 1)) && (uVar2 = (uVar1 >> 1) + uVar1, uVar2 < param_1)) {
    uVar2 = param_1;
  }
  return uVar2;
}


/* ==== 0049e700  FUN_0049e700  size=38 ==== */

int FUN_0049e700(void)

{
  int *in_ECX;
  
  return (in_ECX[2] - *in_ECX) / 0x1c;
}


/* ==== 0049e7d0  FUN_0049e7d0  size=19 ==== */

void FUN_0049e7d0(undefined4 param_1,undefined4 *param_2)

{
  allocate(*param_2);
  return;
}


/* ==== 0049e7f0  FUN_0049e7f0  size=168 ==== */

undefined4 FUN_0049e7f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00712c3d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = FUN_00402d20(&param_1,DAT_007c5940 ^ (uint)&stack0xfffffffc);
  iVar1 = FUN_00402d20(&param_2);
  FUN_00403180(param_3,param_4);
  local_8 = 0;
  for (; local_14 != iVar1; local_14 = local_14 + 0x1c) {
    FUN_0049e950(local_14);
  }
  uVar2 = FUN_00403130();
  local_8 = 0xffffffff;
  FUN_0049e8a0();
  ExceptionList = local_10;
  return uVar2;
}


/* ==== 0049e950  FUN_0049e950  size=63 ==== */

void FUN_0049e950(undefined4 param_1)

{
  undefined4 uVar1;
  int in_ECX;
  
  uVar1 = _Unfancy<>(*(undefined4 *)(in_ECX + 4),param_1);
  FUN_0049e9f0(*(undefined4 *)(in_ECX + 8),uVar1);
  *(int *)(in_ECX + 4) = *(int *)(in_ECX + 4) + 0x1c;
  return;
}


/* ==== 0049e9f0  FUN_0049e9f0  size=38 ==== */

void FUN_0049e9f0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_004013e0(0x1c,param_2);
  FUN_0049ea20(param_3);
  return;
}


/* ==== 0049ea20  FUN_0049ea20  size=40 ==== */

int FUN_0049ea20(int param_1)

{
  int in_ECX;
  
  FUN_00405450(param_1);
  *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(param_1 + 0x18);
  return in_ECX;
}


/* ==== 004bd380  FUN_004bd380  size=186 ==== */

int FUN_004bd380(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007144c8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0040d8b0(DAT_007c5940 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  FUN_0040d8b0();
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_004053a0(&DAT_007793b1);
  FUN_004053a0(&DAT_007793b1);
  *(undefined4 *)(in_ECX + 0x34) = 0;
  *(undefined4 *)(in_ECX + 0x30) = 0;
  *(undefined4 *)(in_ECX + 0x44) = 0;
  *(undefined4 *)(in_ECX + 0x40) = 0;
  *(undefined4 *)(in_ECX + 0x3c) = 0;
  *(undefined4 *)(in_ECX + 0x38) = 0;
  ExceptionList = local_10;
  return in_ECX;
}


/* ==== 004bd440  FUN_004bd440  size=150 ==== */

int FUN_004bd440(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00714508;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0040d8b0(DAT_007c5940 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  FUN_004c3870();
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_004053a0(&DAT_007793b1);
  *(undefined4 *)(in_ECX + 0x24) = 0;
  *(undefined4 *)(in_ECX + 0x20) = 0;
  *(undefined4 *)(in_ECX + 0x1c) = 0;
  *(undefined4 *)(in_ECX + 0x18) = 0;
  ExceptionList = local_10;
  return in_ECX;
}


/* ==== 004bd4e0  FUN_004bd4e0  size=135 ==== */

int FUN_004bd4e0(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070ce0d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0040d8b0(DAT_007c5940 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  FUN_004053a0(&DAT_007793b1);
  *(undefined4 *)(in_ECX + 0x24) = 0;
  *(undefined4 *)(in_ECX + 0x20) = 0;
  *(undefined4 *)(in_ECX + 0x1c) = 0;
  *(undefined4 *)(in_ECX + 0x18) = 0;
  ExceptionList = local_10;
  return in_ECX;
}


/* ==== 004bd570  FUN_004bd570  size=182 ==== */

int FUN_004bd570(void)

{
  int in_ECX;
  
  FUN_0040d8b0();
  FUN_0040d8b0();
  *(undefined4 *)(in_ECX + 0x3c) = 0;
  *(undefined4 *)(in_ECX + 0x38) = 0;
  *(undefined4 *)(in_ECX + 0x40) = 0x45610000;
  *(undefined4 *)(in_ECX + 0x44) = 0;
  *(undefined4 *)(in_ECX + 0x34) = 0;
  *(undefined4 *)(in_ECX + 0x30) = 0;
  *(undefined4 *)(in_ECX + 0x5c) = 0;
  *(undefined4 *)(in_ECX + 0x58) = 0;
  *(undefined4 *)(in_ECX + 0x54) = 0;
  *(undefined4 *)(in_ECX + 0x50) = 0;
  *(undefined4 *)(in_ECX + 0x4c) = 0;
  *(undefined4 *)(in_ECX + 0x48) = 0;
  *(undefined4 *)(in_ECX + 0x60) = 0;
  *(undefined4 *)(in_ECX + 100) = 0;
  return in_ECX;
}


/* ==== 004bd630  FUN_004bd630  size=54 ==== */

int FUN_004bd630(void)

{
  int in_ECX;
  
  FUN_0040d8b0();
  FUN_0040d8b0();
  *(undefined4 *)(in_ECX + 0x30) = 0;
  *(undefined4 *)(in_ECX + 0x34) = 0;
  return in_ECX;
}


/* ==== 004be060  sound_dsound_create  size=241 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int sound_dsound_create(void)

{
  int in_ECX;
  undefined4 local_74 [24];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007145a3;
  local_10 = ExceptionList;
  local_14 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_004c3800(local_14);
  local_8 = 0;
  FUN_004c37b0();
  local_8._0_1_ = 1;
  FUN_004c3690();
  local_8 = CONCAT31(local_8._1_3_,2);
  Ordinal_11(0,in_ECX + 0x60,0);
  (**(code **)(**(int **)(in_ECX + 0x60) + 0x18))(*(undefined4 *)(in_ECX + 0x60),DAT_007ca22c,1);
  local_74[0] = 0x60;
  (**(code **)(**(int **)(in_ECX + 0x60) + 0x10))(*(undefined4 *)(in_ECX + 0x60),local_74);
  npk_scan_soundpacks();
  sound_load_audio_xml();
  DAT_007ca1a8 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCSTR)0x0);
  ExceptionList = local_10;
  return in_ECX;
}


/* ==== 004be5c0  sound_load_audio_xml  size=11816 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void sound_load_audio_xml(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  double dVar6;
  undefined1 local_a00 [8];
  undefined1 local_9f8 [8];
  undefined1 local_9f0 [8];
  undefined1 local_9e8 [8];
  undefined1 local_9e0 [8];
  undefined4 local_9d8;
  undefined4 local_9d4;
  undefined4 local_9d0;
  undefined4 local_9cc;
  undefined4 local_9c8;
  undefined4 local_9c4;
  undefined4 local_9c0;
  undefined4 local_9bc;
  undefined4 local_9b8;
  undefined4 local_9b4;
  undefined4 local_9b0;
  int local_9ac [3];
  undefined4 local_9a0;
  int local_99c [3];
  undefined4 local_990;
  int local_98c;
  int local_988;
  int local_984;
  int local_980;
  uint local_97c;
  int local_978;
  char *local_974;
  int local_970;
  int local_96c;
  uint local_968;
  undefined4 local_964;
  undefined4 local_960;
  int local_95c;
  int local_958;
  int local_954;
  int local_950;
  int local_94c;
  int local_948;
  int local_944;
  uint local_940;
  int local_93c;
  uint local_938;
  undefined4 local_934;
  undefined4 local_930;
  int local_92c;
  int local_928;
  int local_924;
  int local_920;
  int local_91c;
  int local_918;
  int local_914;
  int local_910;
  int local_90c;
  int local_908;
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
  int local_8dc;
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
  int local_8b0;
  int local_8ac;
  char *local_8a8;
  undefined4 local_8a4;
  undefined4 local_8a0;
  int local_89c;
  int local_898;
  int local_894;
  int local_890;
  int local_88c;
  int local_888;
  int local_884;
  int local_880;
  int local_87c;
  int local_878;
  uint local_874;
  int local_870;
  char *local_86c;
  int local_868;
  char *local_864;
  int local_860;
  int local_85c;
  uint local_858;
  undefined4 local_854;
  undefined4 local_850;
  int local_84c;
  int local_848;
  int local_844;
  int local_840;
  uint local_83c;
  int local_838;
  char *local_834;
  int local_830;
  char *local_82c;
  int local_828;
  int local_824;
  int local_820;
  int local_81c;
  int local_818;
  int local_814;
  int local_810;
  int local_80c;
  int local_808;
  int local_804;
  int local_800;
  uint local_7fc;
  undefined4 local_7f8;
  undefined4 local_7f4;
  int local_7f0;
  int local_7ec;
  int local_7e8;
  int local_7e4;
  int local_7e0;
  int local_7dc;
  int local_7d8;
  int local_7d4;
  int local_7d0;
  int local_7cc;
  int local_7c8;
  int local_7c4;
  int local_7c0;
  uint local_7bc;
  int local_7b8;
  uint local_7b4;
  int local_7b0;
  int local_7ac;
  uint local_7a8;
  int local_7a4;
  int local_7a0;
  uint local_79c;
  uint local_798;
  int local_794;
  int local_790;
  uint local_78c;
  int local_788;
  int local_784;
  uint local_780;
  int local_77c;
  uint local_778;
  undefined4 local_774;
  undefined4 *local_770;
  size_t local_76c;
  undefined4 local_768;
  byte *local_764;
  byte *local_760;
  byte *local_75c;
  byte *local_758;
  byte *local_754;
  byte *local_750;
  byte *local_74c;
  byte *local_748;
  void *local_744;
  byte *local_740;
  byte *local_73c;
  byte *local_738;
  byte *local_734;
  byte *local_730;
  byte *local_72c;
  byte *local_728;
  byte *local_724;
  char *local_720;
  char *local_71c;
  char *local_718;
  char *local_714;
  char *local_710;
  char *local_70c;
  char *local_708;
  char *local_704;
  char *local_700;
  char *local_6f8;
  char *local_6f4;
  char *local_6f0;
  char *local_6ec;
  char *local_6e8;
  char *local_6e4;
  char *local_6e0;
  char *local_6dc;
  char *local_6d8;
  char *local_6d4;
  char *local_6d0;
  char *local_6cc;
  char *local_6c8;
  char *local_6c4;
  char *local_6c0;
  char *local_6bc;
  char *local_6b8;
  char *local_6b4;
  char *local_6b0;
  char *local_6ac;
  char *local_6a8;
  char *local_6a4;
  char *local_6a0;
  char *local_69c;
  char *local_698;
  char *local_694;
  char *local_690;
  char *local_68c;
  char *local_688;
  char *local_684;
  char *local_680;
  char *local_67c;
  char *local_678;
  char *local_674;
  char *local_670;
  char *local_66c;
  char *local_668;
  char *local_664;
  int local_660;
  FILE *local_65c;
  undefined1 local_657;
  undefined1 local_656;
  undefined1 local_655;
  byte local_654;
  byte local_653;
  undefined1 local_652;
  undefined1 local_651;
  undefined1 local_650;
  byte local_64f;
  undefined1 local_64e;
  undefined1 local_64d;
  undefined1 local_64c;
  undefined1 local_64b;
  undefined1 local_64a;
  byte local_649;
  byte local_648;
  char local_647;
  byte local_646;
  char local_645;
  undefined1 local_644;
  undefined1 local_643;
  undefined1 local_642;
  undefined1 local_641;
  byte local_640;
  byte local_63f;
  undefined1 local_63e;
  undefined1 local_63d;
  undefined1 local_63c;
  undefined1 local_63b;
  undefined1 local_63a;
  undefined1 local_639;
  undefined1 local_638;
  undefined1 local_637;
  undefined1 local_636;
  undefined1 local_635;
  undefined1 local_634;
  undefined1 local_633;
  undefined1 local_632;
  undefined1 local_631;
  undefined1 local_630;
  undefined1 local_62f;
  byte local_62e;
  byte local_62d;
  undefined1 local_62c;
  undefined1 local_62b;
  undefined1 local_62a;
  undefined1 local_629;
  undefined1 local_628;
  byte local_627;
  byte local_626;
  char local_625;
  char local_624;
  undefined1 local_623;
  byte local_622;
  byte local_621;
  undefined1 local_620;
  undefined1 local_61f;
  byte local_61e;
  byte local_61d;
  char local_61c;
  char local_61b;
  undefined1 local_61a;
  undefined1 local_619;
  int local_618;
  int local_614;
  char *local_610;
  int local_60c;
  int local_608;
  int local_604;
  char *local_600;
  char *local_5fc;
  undefined1 local_5f8 [32];
  undefined1 local_5d8 [32];
  undefined1 local_5b8 [32];
  undefined1 local_598 [32];
  undefined1 local_578 [32];
  undefined1 local_558 [24];
  undefined4 local_540;
  undefined1 local_53c [24];
  float local_524;
  float local_520;
  float local_51c;
  float local_518;
  char local_514 [1024];
  undefined2 local_114;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071468a;
  local_10 = ExceptionList;
  uVar2 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar2;
  local_65c = _fopen("audio.xml","rb");
  if (local_65c == (FILE *)0x0) {
    MessageBoxA((HWND)0x0,"can not open audio.xml !",(LPCSTR)0x0,0);
  }
  FUN_006e9723(local_65c,0,2,uVar2);
  local_76c = FUN_006e92b5(local_65c);
  local_744 = (void *)FUN_006f191d(local_76c);
  FUN_006e9723(local_65c,0,0);
  _fread(local_744,1,local_76c,local_65c);
  local_60c = (int)local_744 + local_76c;
  local_604 = config_find_section_marker(local_744,"<AudioTagDatabase>");
  local_604 = local_604 + 0x12;
  local_604 = config_section_span_helper(local_604,local_60c);
LAB_004be6ef:
  do {
    FUN_004a1ba0(local_604,"<%[^>]",local_514);
    local_6e0 = local_514;
    local_8a8 = local_514 + 1;
    do {
      local_645 = *local_6e0;
      local_6e0 = local_6e0 + 1;
    } while (local_645 != '\0');
    local_970 = (int)local_6e0 - (int)local_8a8;
    local_604 = local_604 + local_970 + 2;
    local_604 = config_section_span_helper(local_604,local_60c);
    FUN_004a1ba0(local_514,&DAT_0074e7a4,&local_114);
    local_704 = local_514;
    local_974 = local_514 + 1;
    do {
      local_647 = *local_704;
      local_704 = local_704 + 1;
    } while (local_647 != '\0');
    local_978 = (int)local_704 - (int)local_974;
    local_514[local_978] = '@';
    local_5fc = local_514;
    local_748 = (byte *)0x74e7bc;
    local_728 = (byte *)&local_114;
    do {
      local_648 = *local_728;
      bVar5 = local_648 < *local_748;
      if (local_648 != *local_748) {
LAB_004be88d:
        local_79c = -(uint)bVar5 | 1;
        goto LAB_004be898;
      }
      if (local_648 == 0) break;
      local_649 = local_728[1];
      bVar5 = local_649 < local_748[1];
      if (local_649 != local_748[1]) goto LAB_004be88d;
      local_728 = local_728 + 2;
      local_748 = local_748 + 2;
    } while (local_649 != 0);
    local_79c = 0;
LAB_004be898:
    local_97c = local_79c;
    if (local_79c != 0) {
      local_750 = (byte *)0x74e830;
      local_74c = (byte *)&local_114;
      do {
        local_653 = *local_74c;
        bVar5 = local_653 < *local_750;
        if (local_653 != *local_750) {
LAB_004beffb:
          local_7a8 = -(uint)bVar5 | 1;
          goto LAB_004bf006;
        }
        if (local_653 == 0) break;
        local_654 = local_74c[1];
        bVar5 = local_654 < local_750[1];
        if (local_654 != local_750[1]) goto LAB_004beffb;
        local_74c = local_74c + 2;
        local_750 = local_750 + 2;
      } while (local_654 != 0);
      local_7a8 = 0;
LAB_004bf006:
      local_7fc = local_7a8;
      if (local_7a8 == 0) {
        local_7ac = crt_or_heap_alloc_helper(0x34);
        local_8 = 2;
        if (local_7ac == 0) {
          local_7b0 = 0;
        }
        else {
          local_7b0 = FUN_004bd440();
        }
        local_800 = local_7b0;
        local_8 = 0xffffffff;
        local_618 = local_7b0;
        local_5fc = local_5fc + 6;
        local_5fc = (char *)config_section_span_helper(local_5fc,local_60c);
        while( true ) {
          iVar3 = FUN_004a1ba0(local_5fc,"ID=\"%[^\"]",&local_114);
          if (iVar3 == 1) {
            FUN_004053a0(&local_114);
            local_668 = (char *)&local_114;
            local_804 = (int)&local_114 + 1;
            do {
              cVar1 = *local_668;
              local_668 = local_668 + 1;
            } while (cVar1 != '\0');
            local_808 = (int)local_668 - local_804;
            local_5fc = local_5fc + local_808 + 5;
            local_655 = 0;
          }
          else {
            iVar3 = FUN_004a1ba0(local_5fc,"DELAY=\"%[^\"]",&local_114);
            if (iVar3 == 1) {
              dVar6 = FID_conflict__atof(&local_114);
              *(float *)(local_618 + 0x18) = (float)dVar6;
              local_66c = (char *)&local_114;
              local_80c = (int)&local_114 + 1;
              do {
                cVar1 = *local_66c;
                local_66c = local_66c + 1;
              } while (cVar1 != '\0');
              local_810 = (int)local_66c - local_80c;
              local_5fc = local_5fc + local_810 + 8;
              local_656 = 0;
            }
            else {
              iVar3 = FUN_004a1ba0(local_5fc,"DELAY_RANGE=\"%[^\"]",&local_114);
              if (iVar3 == 1) {
                dVar6 = FID_conflict__atof(&local_114);
                *(float *)(local_618 + 0x1c) = (float)dVar6;
                local_670 = (char *)&local_114;
                local_814 = (int)&local_114 + 1;
                do {
                  cVar1 = *local_670;
                  local_670 = local_670 + 1;
                } while (cVar1 != '\0');
                local_818 = (int)local_670 - local_814;
                local_5fc = local_5fc + local_818 + 0xe;
                local_657 = 0;
              }
              else {
                iVar3 = FUN_004a1ba0(local_5fc,"LOOP_DELAY=\"%[^\"]",&local_114);
                if (iVar3 == 1) {
                  dVar6 = FID_conflict__atof(&local_114);
                  *(float *)(local_618 + 0x20) = (float)dVar6;
                  local_674 = (char *)&local_114;
                  local_81c = (int)&local_114 + 1;
                  do {
                    cVar1 = *local_674;
                    local_674 = local_674 + 1;
                  } while (cVar1 != '\0');
                  local_820 = (int)local_674 - local_81c;
                  local_5fc = local_5fc + local_820 + 0xd;
                  local_619 = 0;
                }
                else {
                  iVar3 = FUN_004a1ba0(local_5fc,"LOOP_DELAY_RANGE=\"%[^\"]",&local_114);
                  if (iVar3 == 1) {
                    dVar6 = FID_conflict__atof(&local_114);
                    *(float *)(local_618 + 0x24) = (float)dVar6;
                    local_678 = (char *)&local_114;
                    local_824 = (int)&local_114 + 1;
                    do {
                      cVar1 = *local_678;
                      local_678 = local_678 + 1;
                    } while (cVar1 != '\0');
                    local_828 = (int)local_678 - local_824;
                    local_5fc = local_5fc + local_828 + 0x13;
                    local_61a = 0;
                  }
                  else {
                    local_9bc = 0;
                  }
                }
              }
            }
          }
          if (*local_5fc == '@') break;
          local_5fc = (char *)config_section_span_helper(local_5fc,local_60c);
        }
        do {
          FUN_004a1ba0(local_604,"<%[^>]",local_514);
          local_67c = local_514;
          local_82c = local_514 + 1;
          do {
            local_61b = *local_67c;
            local_67c = local_67c + 1;
          } while (local_61b != '\0');
          local_830 = (int)local_67c - (int)local_82c;
          local_604 = local_604 + local_830 + 2;
          local_604 = config_section_span_helper(local_604,local_60c);
          FUN_004a1ba0(local_514,&DAT_0074e8bc,&local_114);
          local_680 = local_514;
          local_834 = local_514 + 1;
          do {
            local_61c = *local_680;
            local_680 = local_680 + 1;
          } while (local_61c != '\0');
          local_838 = (int)local_680 - (int)local_834;
          local_514[local_838] = '@';
          local_610 = local_514;
          local_758 = (byte *)0x74e8b4;
          local_754 = (byte *)&local_114;
          do {
            local_61d = *local_754;
            bVar5 = local_61d < *local_758;
            if (local_61d != *local_758) {
LAB_004bf603:
              local_7b4 = -(uint)bVar5 | 1;
              goto LAB_004bf60e;
            }
            if (local_61d == 0) break;
            local_61e = local_754[1];
            bVar5 = local_61e < local_758[1];
            if (local_61e != local_758[1]) goto LAB_004bf603;
            local_754 = local_754 + 2;
            local_758 = local_758 + 2;
          } while (local_61e != 0);
          local_7b4 = 0;
LAB_004bf60e:
          local_83c = local_7b4;
          if (local_7b4 == 0) goto LAB_004bf854;
          FUN_004c1430();
          local_8 = 3;
          local_610 = local_610 + 4;
          local_610 = (char *)config_section_span_helper(local_610,local_60c);
          local_7b8 = 0;
          while( true ) {
            iVar3 = FUN_004a1ba0(local_610,"TAG=\"%[^\"]",&local_114);
            if (iVar3 == 1) {
              FUN_004053a0(&local_114);
              local_684 = (char *)&local_114;
              local_840 = (int)&local_114 + 1;
              do {
                cVar1 = *local_684;
                local_684 = local_684 + 1;
              } while (cVar1 != '\0');
              local_844 = (int)local_684 - local_840;
              local_610 = local_610 + local_844 + 6;
              local_61f = 0;
            }
            else {
              iVar3 = FUN_004a1ba0(local_610,"PROB=\"%[^\"]",&local_114);
              if (iVar3 == 1) {
                local_540 = FUN_006f2595(&local_114);
                local_688 = (char *)&local_114;
                local_848 = (int)&local_114 + 1;
                do {
                  cVar1 = *local_688;
                  local_688 = local_688 + 1;
                } while (cVar1 != '\0');
                local_84c = (int)local_688 - local_848;
                local_610 = local_610 + local_84c + 7;
                local_620 = 0;
              }
              else {
                local_9c0 = 0;
              }
            }
            if (*local_610 == '/') break;
            local_610 = (char *)config_section_span_helper(local_610,local_60c);
            local_7b8 = local_7b8 + 1;
          }
          FUN_0049daa0(local_558);
          local_8 = 0xffffffff;
          FUN_004089b0();
        } while( true );
      }
      local_760 = (byte *)0x74e8e4;
      local_75c = (byte *)&local_114;
      do {
        local_621 = *local_75c;
        bVar5 = local_621 < *local_760;
        if (local_621 != *local_760) {
LAB_004bf945:
          local_7bc = -(uint)bVar5 | 1;
          goto LAB_004bf950;
        }
        if (local_621 == 0) break;
        local_622 = local_75c[1];
        bVar5 = local_622 < local_760[1];
        if (local_622 != local_760[1]) goto LAB_004bf945;
        local_75c = local_75c + 2;
        local_760 = local_760 + 2;
      } while (local_622 != 0);
      local_7bc = 0;
LAB_004bf950:
      local_858 = local_7bc;
      if (local_7bc == 0) {
        local_770 = (undefined4 *)crt_or_heap_alloc_helper(0x24);
        if (local_770 == (undefined4 *)0x0) {
          local_774 = 0;
        }
        else {
          *local_770 = 0;
          local_770[1] = 0;
          local_770[2] = 0;
          local_770[3] = 0;
          local_770[4] = 0;
          local_770[5] = 0;
          local_770[6] = 0;
          local_770[7] = 0;
          local_770[8] = 0;
          local_774 = FUN_004c1400();
        }
        local_768 = local_774;
        local_5fc = local_5fc + 5;
        local_5fc = (char *)config_section_span_helper(local_5fc,local_60c);
        while( true ) {
          iVar3 = FUN_004a1ba0(local_5fc,"ID=\"%[^\"]",&local_114);
          if (iVar3 == 1) {
            FUN_004053a0(&local_114);
            local_68c = (char *)&local_114;
            local_85c = (int)&local_114 + 1;
            do {
              cVar1 = *local_68c;
              local_68c = local_68c + 1;
            } while (cVar1 != '\0');
            local_860 = (int)local_68c - local_85c;
            local_5fc = local_5fc + local_860 + 5;
            local_623 = 0;
          }
          else {
            local_9c4 = 0;
          }
          if (*local_5fc == '@') break;
          local_5fc = (char *)config_section_span_helper(local_5fc,local_60c);
        }
        do {
          FUN_004a1ba0(local_604,"<%[^>]",local_514);
          local_690 = local_514;
          local_864 = local_514 + 1;
          do {
            local_624 = *local_690;
            local_690 = local_690 + 1;
          } while (local_624 != '\0');
          local_868 = (int)local_690 - (int)local_864;
          local_604 = local_604 + local_868 + 2;
          local_604 = config_section_span_helper(local_604,local_60c);
          FUN_004a1ba0(local_514,&DAT_0074e8ec,&local_114);
          local_694 = local_514;
          local_86c = local_514 + 1;
          do {
            local_625 = *local_694;
            local_694 = local_694 + 1;
          } while (local_625 != '\0');
          local_870 = (int)local_694 - (int)local_86c;
          local_514[local_870] = '@';
          local_600 = local_514;
          local_724 = (byte *)0x74e904;
          local_764 = (byte *)&local_114;
          do {
            local_626 = *local_764;
            bVar5 = local_626 < *local_724;
            if (local_626 != *local_724) {
LAB_004bfc8d:
              local_778 = -(uint)bVar5 | 1;
              goto LAB_004bfc98;
            }
            if (local_626 == 0) break;
            local_627 = local_764[1];
            bVar5 = local_627 < local_724[1];
            if (local_627 != local_724[1]) goto LAB_004bfc8d;
            local_764 = local_764 + 2;
            local_724 = local_724 + 2;
          } while (local_627 != 0);
          local_778 = 0;
LAB_004bfc98:
          local_874 = local_778;
          if (local_778 == 0) goto LAB_004c00eb;
          FUN_004bd4e0();
          local_8 = 5;
          local_600 = local_600 + 4;
          local_600 = (char *)config_section_span_helper(local_600,local_60c);
          local_77c = 0;
          while( true ) {
            iVar3 = FUN_004a1ba0(local_600,"TAG=\"%[^\"]",&local_114);
            if (iVar3 == 1) {
              FUN_004053a0(&local_114);
              local_698 = (char *)&local_114;
              local_878 = (int)&local_114 + 1;
              do {
                cVar1 = *local_698;
                local_698 = local_698 + 1;
              } while (cVar1 != '\0');
              local_87c = (int)local_698 - local_878;
              local_600 = local_600 + local_87c + 6;
              local_628 = 0;
            }
            else {
              iVar3 = FUN_004a1ba0(local_600,"DELAY=\"%[^\"]",&local_114);
              if (iVar3 == 1) {
                dVar6 = FID_conflict__atof(&local_114);
                local_524 = (float)dVar6;
                local_69c = (char *)&local_114;
                local_880 = (int)&local_114 + 1;
                do {
                  cVar1 = *local_69c;
                  local_69c = local_69c + 1;
                } while (cVar1 != '\0');
                local_884 = (int)local_69c - local_880;
                local_600 = local_600 + local_884 + 8;
                local_629 = 0;
              }
              else {
                iVar3 = FUN_004a1ba0(local_600,"DELAY_RANGE=\"%[^\"]",&local_114);
                if (iVar3 == 1) {
                  dVar6 = FID_conflict__atof(&local_114);
                  local_520 = (float)dVar6;
                  local_6a0 = (char *)&local_114;
                  local_888 = (int)&local_114 + 1;
                  do {
                    cVar1 = *local_6a0;
                    local_6a0 = local_6a0 + 1;
                  } while (cVar1 != '\0');
                  local_88c = (int)local_6a0 - local_888;
                  local_600 = local_600 + local_88c + 0xe;
                  local_62a = 0;
                }
                else {
                  iVar3 = FUN_004a1ba0(local_600,"LOOP_DELAY=\"%[^\"]",&local_114);
                  if (iVar3 == 1) {
                    dVar6 = FID_conflict__atof(&local_114);
                    local_51c = (float)dVar6;
                    local_6a4 = (char *)&local_114;
                    local_890 = (int)&local_114 + 1;
                    do {
                      cVar1 = *local_6a4;
                      local_6a4 = local_6a4 + 1;
                    } while (cVar1 != '\0');
                    local_894 = (int)local_6a4 - local_890;
                    local_600 = local_600 + local_894 + 0xd;
                    local_62b = 0;
                  }
                  else {
                    iVar3 = FUN_004a1ba0(local_600,"LOOP_DELAY_RANGE=\"%[^\"]",&local_114);
                    if (iVar3 == 1) {
                      dVar6 = FID_conflict__atof(&local_114);
                      local_518 = (float)dVar6;
                      local_6a8 = (char *)&local_114;
                      local_898 = (int)&local_114 + 1;
                      do {
                        cVar1 = *local_6a8;
                        local_6a8 = local_6a8 + 1;
                      } while (cVar1 != '\0');
                      local_89c = (int)local_6a8 - local_898;
                      local_600 = local_600 + local_89c + 0x13;
                      local_62c = 0;
                    }
                    else {
                      local_9c8 = 0;
                    }
                  }
                }
              }
            }
            if (*local_600 == '/') break;
            local_600 = (char *)config_section_span_helper(local_600,local_60c);
            local_77c = local_77c + 1;
          }
          FUN_004c38d0(local_53c);
          local_8 = 0xffffffff;
          FUN_004089b0();
        } while( true );
      }
      local_730 = (byte *)0x74e968;
      local_72c = (byte *)&local_114;
      do {
        local_62d = *local_72c;
        bVar5 = local_62d < *local_730;
        if (local_62d != *local_730) {
LAB_004c01dc:
          local_780 = -(uint)bVar5 | 1;
          goto LAB_004c01e7;
        }
        if (local_62d == 0) break;
        local_62e = local_72c[1];
        bVar5 = local_62e < local_730[1];
        if (local_62e != local_730[1]) goto LAB_004c01dc;
        local_72c = local_72c + 2;
        local_730 = local_730 + 2;
      } while (local_62e != 0);
      local_780 = 0;
LAB_004c01e7:
      local_940 = local_780;
      if (local_780 == 0) {
        local_784 = crt_or_heap_alloc_helper(0x68);
        local_8 = 7;
        if (local_784 == 0) {
          local_788 = 0;
        }
        else {
          local_788 = FUN_004bd570();
        }
        local_8ac = local_788;
        local_8 = 0xffffffff;
        local_608 = local_788;
        local_5fc = local_5fc + 7;
        local_5fc = (char *)config_section_span_helper(local_5fc,local_60c);
        while( true ) {
          iVar3 = FUN_004a1ba0(local_5fc,"ID=\"%[^\"]",&local_114);
          if (iVar3 == 1) {
            FUN_004053a0(&local_114);
            cVar1 = FUN_00427c60(local_608,"HORROR_AMB_01");
            if (cVar1 != '\0') {
              local_9cc = 0;
            }
            local_6ac = (char *)&local_114;
            local_8b0 = (int)&local_114 + 1;
            do {
              cVar1 = *local_6ac;
              local_6ac = local_6ac + 1;
            } while (cVar1 != '\0');
            local_8b4 = (int)local_6ac - local_8b0;
            local_5fc = local_5fc + local_8b4 + 5;
            local_62f = 0;
          }
          else {
            iVar3 = FUN_004a1ba0(local_5fc,"FILE=\"%[^\"]",&local_114);
            if (iVar3 == 1) {
              FUN_004053a0(&local_114);
              local_6b0 = (char *)&local_114;
              local_8b8 = (int)&local_114 + 1;
              do {
                cVar1 = *local_6b0;
                local_6b0 = local_6b0 + 1;
              } while (cVar1 != '\0');
              local_8bc = (int)local_6b0 - local_8b8;
              local_5fc = local_5fc + local_8bc + 7;
              local_630 = 0;
            }
            else {
              iVar3 = FUN_004a1ba0(local_5fc,"VOLUME_ADJUST=\"%[^\"]",&local_114);
              if (iVar3 == 1) {
                uVar4 = FUN_006f2595(&local_114);
                *(undefined4 *)(local_608 + 0x30) = uVar4;
                local_6b4 = (char *)&local_114;
                local_8c0 = (int)&local_114 + 1;
                do {
                  cVar1 = *local_6b4;
                  local_6b4 = local_6b4 + 1;
                } while (cVar1 != '\0');
                local_8c4 = (int)local_6b4 - local_8c0;
                local_5fc = local_5fc + local_8c4 + 0x10;
                local_631 = 0;
              }
              else {
                iVar3 = FUN_004a1ba0(local_5fc,"PRIORITY=\"%[^\"]",&local_114);
                if (iVar3 == 1) {
                  uVar4 = FUN_006f2595(&local_114);
                  *(undefined4 *)(local_608 + 0x34) = uVar4;
                  local_6b8 = (char *)&local_114;
                  local_8c8 = (int)&local_114 + 1;
                  do {
                    cVar1 = *local_6b8;
                    local_6b8 = local_6b8 + 1;
                  } while (cVar1 != '\0');
                  local_8cc = (int)local_6b8 - local_8c8;
                  local_5fc = local_5fc + local_8cc + 0xb;
                  local_632 = 0;
                }
                else {
                  iVar3 = FUN_004a1ba0(local_5fc,"DELAY=\"%[^\"]",&local_114);
                  if (iVar3 == 1) {
                    dVar6 = FID_conflict__atof(&local_114);
                    *(float *)(local_608 + 0x38) = (float)dVar6;
                    local_6bc = (char *)&local_114;
                    local_8d0 = (int)&local_114 + 1;
                    do {
                      cVar1 = *local_6bc;
                      local_6bc = local_6bc + 1;
                    } while (cVar1 != '\0');
                    local_8d4 = (int)local_6bc - local_8d0;
                    local_5fc = local_5fc + local_8d4 + 8;
                    local_633 = 0;
                  }
                  else {
                    iVar3 = FUN_004a1ba0(local_5fc,"DELAY_RANGE=\"%[^\"]",&local_114);
                    if (iVar3 == 1) {
                      dVar6 = FID_conflict__atof(&local_114);
                      *(float *)(local_608 + 0x3c) = (float)dVar6;
                      local_6c0 = (char *)&local_114;
                      local_8d8 = (int)&local_114 + 1;
                      do {
                        cVar1 = *local_6c0;
                        local_6c0 = local_6c0 + 1;
                      } while (cVar1 != '\0');
                      local_8dc = (int)local_6c0 - local_8d8;
                      local_5fc = local_5fc + local_8dc + 0xe;
                      local_634 = 0;
                    }
                    else {
                      iVar3 = FUN_004a1ba0(local_5fc,"LOOP_DELAY=\"%[^\"]",&local_114);
                      if (iVar3 == 1) {
                        dVar6 = FID_conflict__atof(&local_114);
                        *(float *)(local_608 + 0x40) = (float)dVar6;
                        local_6c4 = (char *)&local_114;
                        local_8e0 = (int)&local_114 + 1;
                        do {
                          cVar1 = *local_6c4;
                          local_6c4 = local_6c4 + 1;
                        } while (cVar1 != '\0');
                        local_8e4 = (int)local_6c4 - local_8e0;
                        local_5fc = local_5fc + local_8e4 + 0xd;
                        local_635 = 0;
                      }
                      else {
                        iVar3 = FUN_004a1ba0(local_5fc,"LOOP_DELAY_RANGE=\"%[^\"]",&local_114);
                        if (iVar3 == 1) {
                          dVar6 = FID_conflict__atof(&local_114);
                          *(float *)(local_608 + 0x44) = (float)dVar6;
                          local_6c8 = (char *)&local_114;
                          local_8e8 = (int)&local_114 + 1;
                          do {
                            cVar1 = *local_6c8;
                            local_6c8 = local_6c8 + 1;
                          } while (cVar1 != '\0');
                          local_8ec = (int)local_6c8 - local_8e8;
                          local_5fc = local_5fc + local_8ec + 0x13;
                          local_636 = 0;
                        }
                        else {
                          iVar3 = FUN_004a1ba0(local_5fc,"X=\"%[^\"]",&local_114);
                          if (iVar3 == 1) {
                            uVar4 = FUN_006f2595(&local_114);
                            *(undefined4 *)(local_608 + 0x48) = uVar4;
                            local_6cc = (char *)&local_114;
                            local_8f0 = (int)&local_114 + 1;
                            do {
                              cVar1 = *local_6cc;
                              local_6cc = local_6cc + 1;
                            } while (cVar1 != '\0');
                            local_8f4 = (int)local_6cc - local_8f0;
                            local_5fc = local_5fc + local_8f4 + 4;
                            local_637 = 0;
                          }
                          else {
                            iVar3 = FUN_004a1ba0(local_5fc,"Y=\"%[^\"]",&local_114);
                            if (iVar3 == 1) {
                              uVar4 = FUN_006f2595(&local_114);
                              *(undefined4 *)(local_608 + 0x4c) = uVar4;
                              local_6d0 = (char *)&local_114;
                              local_8f8 = (int)&local_114 + 1;
                              do {
                                cVar1 = *local_6d0;
                                local_6d0 = local_6d0 + 1;
                              } while (cVar1 != '\0');
                              local_8fc = (int)local_6d0 - local_8f8;
                              local_5fc = local_5fc + local_8fc + 4;
                              local_638 = 0;
                            }
                            else {
                              iVar3 = FUN_004a1ba0(local_5fc,"Z=\"%[^\"]",&local_114);
                              if (iVar3 == 1) {
                                uVar4 = FUN_006f2595(&local_114);
                                *(undefined4 *)(local_608 + 0x50) = uVar4;
                                local_6d4 = (char *)&local_114;
                                local_900 = (int)&local_114 + 1;
                                do {
                                  cVar1 = *local_6d4;
                                  local_6d4 = local_6d4 + 1;
                                } while (cVar1 != '\0');
                                local_904 = (int)local_6d4 - local_900;
                                local_5fc = local_5fc + local_904 + 4;
                                local_639 = 0;
                              }
                              else {
                                iVar3 = FUN_004a1ba0(local_5fc,"XRANGE=\"%[^\"]",&local_114);
                                if (iVar3 == 1) {
                                  uVar4 = FUN_006f2595(&local_114);
                                  *(undefined4 *)(local_608 + 0x54) = uVar4;
                                  local_6d8 = (char *)&local_114;
                                  local_908 = (int)&local_114 + 1;
                                  do {
                                    cVar1 = *local_6d8;
                                    local_6d8 = local_6d8 + 1;
                                  } while (cVar1 != '\0');
                                  local_90c = (int)local_6d8 - local_908;
                                  local_5fc = local_5fc + local_90c + 9;
                                  local_63a = 0;
                                }
                                else {
                                  iVar3 = FUN_004a1ba0(local_5fc,"YRANGE=\"%[^\"]",&local_114);
                                  if (iVar3 == 1) {
                                    uVar4 = FUN_006f2595(&local_114);
                                    *(undefined4 *)(local_608 + 0x58) = uVar4;
                                    local_6dc = (char *)&local_114;
                                    local_910 = (int)&local_114 + 1;
                                    do {
                                      cVar1 = *local_6dc;
                                      local_6dc = local_6dc + 1;
                                    } while (cVar1 != '\0');
                                    local_914 = (int)local_6dc - local_910;
                                    local_5fc = local_5fc + local_914 + 9;
                                    local_63b = 0;
                                  }
                                  else {
                                    iVar3 = FUN_004a1ba0(local_5fc,"ZRANGE=\"%[^\"]",&local_114);
                                    if (iVar3 == 1) {
                                      uVar4 = FUN_006f2595(&local_114);
                                      *(undefined4 *)(local_608 + 0x5c) = uVar4;
                                      local_700 = (char *)&local_114;
                                      local_918 = (int)&local_114 + 1;
                                      do {
                                        cVar1 = *local_700;
                                        local_700 = local_700 + 1;
                                      } while (cVar1 != '\0');
                                      local_91c = (int)local_700 - local_918;
                                      local_5fc = local_5fc + local_91c + 9;
                                      local_63c = 0;
                                    }
                                    else {
                                      iVar3 = FUN_004a1ba0(local_5fc,"LOOP_TIMES=\"%[^\"]",
                                                           &local_114);
                                      if (iVar3 == 1) {
                                        uVar4 = FUN_006f2595(&local_114);
                                        *(undefined4 *)(local_608 + 0x60) = uVar4;
                                        local_6e4 = (char *)&local_114;
                                        local_920 = (int)&local_114 + 1;
                                        do {
                                          cVar1 = *local_6e4;
                                          local_6e4 = local_6e4 + 1;
                                        } while (cVar1 != '\0');
                                        local_924 = (int)local_6e4 - local_920;
                                        local_5fc = local_5fc + local_924 + 0xd;
                                        local_63d = 0;
                                      }
                                      else {
                                        iVar3 = FUN_004a1ba0(local_5fc,"NPCNO=\"%[^\"]",&local_114);
                                        if (iVar3 == 1) {
                                          uVar4 = FUN_006f2595(&local_114);
                                          *(undefined4 *)(local_608 + 100) = uVar4;
                                          local_6e8 = (char *)&local_114;
                                          local_928 = (int)&local_114 + 1;
                                          do {
                                            cVar1 = *local_6e8;
                                            local_6e8 = local_6e8 + 1;
                                          } while (cVar1 != '\0');
                                          local_92c = (int)local_6e8 - local_928;
                                          local_5fc = local_5fc + local_92c + 8;
                                          local_63e = 0;
                                        }
                                        else {
                                          local_9d0 = 0;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          if (*local_5fc == '/') break;
          local_5fc = (char *)config_section_span_helper(local_5fc,local_60c);
        }
        local_9ac[2] = local_608;
        local_9a0 = 2;
        local_934 = FUN_004c4270(local_5d8,local_608,local_9ac + 2);
        local_8 = 8;
        local_930 = local_934;
        FUN_004c42a0(local_9f8,local_934);
        local_8 = 0xffffffff;
        FUN_004089b0();
      }
      else {
        local_738 = (byte *)0x74ea88;
        local_734 = (byte *)&local_114;
        do {
          local_63f = *local_734;
          bVar5 = local_63f < *local_738;
          if (local_63f != *local_738) {
LAB_004c0ee8:
            local_78c = -(uint)bVar5 | 1;
            goto LAB_004c0ef3;
          }
          if (local_63f == 0) break;
          local_640 = local_734[1];
          bVar5 = local_640 < local_738[1];
          if (local_640 != local_738[1]) goto LAB_004c0ee8;
          local_734 = local_734 + 2;
          local_738 = local_738 + 2;
        } while (local_640 != 0);
        local_78c = 0;
LAB_004c0ef3:
        local_938 = local_78c;
        if (local_78c == 0) {
          local_790 = crt_or_heap_alloc_helper(0x38);
          local_8 = 9;
          if (local_790 == 0) {
            local_794 = 0;
          }
          else {
            local_794 = FUN_004bd630();
          }
          local_93c = local_794;
          local_8 = 0xffffffff;
          local_660 = local_794;
          local_5fc = local_5fc + 5;
          local_5fc = (char *)config_section_span_helper(local_5fc,local_60c);
          while( true ) {
            iVar3 = FUN_004a1ba0(local_5fc,"ID=\"%[^\"]",&local_114);
            if (iVar3 == 1) {
              FUN_004053a0(&local_114);
              local_6ec = (char *)&local_114;
              local_96c = (int)&local_114 + 1;
              do {
                cVar1 = *local_6ec;
                local_6ec = local_6ec + 1;
              } while (cVar1 != '\0');
              local_944 = (int)local_6ec - local_96c;
              local_5fc = local_5fc + local_944 + 5;
              local_641 = 0;
            }
            else {
              iVar3 = FUN_004a1ba0(local_5fc,"FILE=\"%[^\"]",&local_114);
              if (iVar3 == 1) {
                FUN_004053a0(&local_114);
                local_6f0 = (char *)&local_114;
                local_948 = (int)&local_114 + 1;
                do {
                  cVar1 = *local_6f0;
                  local_6f0 = local_6f0 + 1;
                } while (cVar1 != '\0');
                local_94c = (int)local_6f0 - local_948;
                local_5fc = local_5fc + local_94c + 7;
                local_642 = 0;
              }
              else {
                iVar3 = FUN_004a1ba0(local_5fc,"VOLUME_ADJUST=\"%[^\"]",&local_114);
                if (iVar3 == 1) {
                  uVar4 = FUN_006f2595(&local_114);
                  *(undefined4 *)(local_660 + 0x30) = uVar4;
                  local_6f4 = (char *)&local_114;
                  local_950 = (int)&local_114 + 1;
                  do {
                    cVar1 = *local_6f4;
                    local_6f4 = local_6f4 + 1;
                  } while (cVar1 != '\0');
                  local_954 = (int)local_6f4 - local_950;
                  local_5fc = local_5fc + local_954 + 0x10;
                  local_643 = 0;
                }
                else {
                  iVar3 = FUN_004a1ba0(local_5fc,"LOOP_DELAY=\"%[^\"]",&local_114);
                  if (iVar3 == 1) {
                    dVar6 = FID_conflict__atof(&local_114);
                    *(float *)(local_660 + 0x34) = (float)dVar6;
                    local_6f8 = (char *)&local_114;
                    local_958 = (int)&local_114 + 1;
                    do {
                      cVar1 = *local_6f8;
                      local_6f8 = local_6f8 + 1;
                    } while (cVar1 != '\0');
                    local_95c = (int)local_6f8 - local_958;
                    local_5fc = local_5fc + local_95c + 0xd;
                    local_644 = 0;
                  }
                  else {
                    local_9d4 = 0;
                  }
                }
              }
            }
            if (*local_5fc == '/') break;
            local_5fc = (char *)config_section_span_helper(local_5fc,local_60c);
          }
          local_9ac[0] = local_660;
          local_9ac[1] = 4;
          local_964 = FUN_004c4270(local_5f8,local_660,local_9ac);
          local_8 = 10;
          local_960 = local_964;
          FUN_004c42a0(local_a00,local_964);
          local_8 = 0xffffffff;
          FUN_004089b0();
        }
        else {
          local_740 = (byte *)0x74eab4;
          local_73c = (byte *)&local_114;
          do {
            local_64f = *local_73c;
            bVar5 = local_64f < *local_740;
            if (local_64f != *local_740) {
LAB_004c138e:
              local_798 = -(uint)bVar5 | 1;
              goto LAB_004c1399;
            }
            if (local_64f == 0) break;
            local_646 = local_73c[1];
            bVar5 = local_646 < local_740[1];
            if (local_646 != local_740[1]) goto LAB_004c138e;
            local_73c = local_73c + 2;
            local_740 = local_740 + 2;
          } while (local_646 != 0);
          local_798 = 0;
LAB_004c1399:
          local_968 = local_798;
          if (local_798 == 0) {
            FUN_006f1902(local_744);
            FUN_006e940a(local_65c);
            ExceptionList = local_10;
            return;
          }
          local_9d8 = 0;
        }
      }
      goto LAB_004be6ef;
    }
    local_7a0 = crt_or_heap_alloc_helper(0x48);
    local_8 = 0;
    if (local_7a0 == 0) {
      local_7a4 = 0;
    }
    else {
      local_7a4 = FUN_004bd380();
    }
    local_980 = local_7a4;
    local_8 = 0xffffffff;
    local_614 = local_7a4;
    local_5fc = local_5fc + 6;
    local_5fc = (char *)config_section_span_helper(local_5fc,local_60c);
    while( true ) {
      iVar3 = FUN_004a1ba0(local_5fc,"ID=\"%[^\"]",&local_114);
      if (iVar3 == 1) {
        FUN_004053a0(&local_114);
        local_708 = (char *)&local_114;
        local_984 = (int)&local_114 + 1;
        do {
          cVar1 = *local_708;
          local_708 = local_708 + 1;
        } while (cVar1 != '\0');
        local_988 = (int)local_708 - local_984;
        local_5fc = local_5fc + local_988 + 5;
        local_64a = 0;
      }
      else {
        iVar3 = FUN_004a1ba0(local_5fc,"FILE=\"%[^\"]",&local_114);
        if (iVar3 == 1) {
          FUN_004053a0(&local_114);
          local_70c = (char *)&local_114;
          local_98c = (int)&local_114 + 1;
          do {
            cVar1 = *local_70c;
            local_70c = local_70c + 1;
          } while (cVar1 != '\0');
          local_7c0 = (int)local_70c - local_98c;
          local_5fc = local_5fc + local_7c0 + 7;
          local_64b = 0;
        }
        else {
          iVar3 = FUN_004a1ba0(local_5fc,"VOLUME_ADJUST=\"%[^\"]",&local_114);
          if (iVar3 == 1) {
            uVar4 = FUN_006f2595(&local_114);
            *(undefined4 *)(local_614 + 0x30) = uVar4;
            local_710 = (char *)&local_114;
            local_7c4 = (int)&local_114 + 1;
            do {
              cVar1 = *local_710;
              local_710 = local_710 + 1;
            } while (cVar1 != '\0');
            local_7c8 = (int)local_710 - local_7c4;
            local_5fc = local_5fc + local_7c8 + 0x10;
            local_64c = 0;
          }
          else {
            iVar3 = FUN_004a1ba0(local_5fc,"PRIORITY=\"%[^\"]",&local_114);
            if (iVar3 == 1) {
              uVar4 = FUN_006f2595(&local_114);
              *(undefined4 *)(local_614 + 0x34) = uVar4;
              local_714 = (char *)&local_114;
              local_7cc = (int)&local_114 + 1;
              do {
                cVar1 = *local_714;
                local_714 = local_714 + 1;
              } while (cVar1 != '\0');
              local_7d0 = (int)local_714 - local_7cc;
              local_5fc = local_5fc + local_7d0 + 0xb;
              local_64d = 0;
            }
            else {
              iVar3 = FUN_004a1ba0(local_5fc,"DELAY=\"%[^\"]",&local_114);
              if (iVar3 == 1) {
                dVar6 = FID_conflict__atof(&local_114);
                *(float *)(local_614 + 0x38) = (float)dVar6;
                local_718 = (char *)&local_114;
                local_7d4 = (int)&local_114 + 1;
                do {
                  cVar1 = *local_718;
                  local_718 = local_718 + 1;
                } while (cVar1 != '\0');
                local_7d8 = (int)local_718 - local_7d4;
                local_5fc = local_5fc + local_7d8 + 8;
                local_64e = 0;
              }
              else {
                iVar3 = FUN_004a1ba0(local_5fc,"DELAY_RANGE=\"%[^\"]",&local_114);
                if (iVar3 == 1) {
                  dVar6 = FID_conflict__atof(&local_114);
                  *(float *)(local_614 + 0x3c) = (float)dVar6;
                  local_71c = (char *)&local_114;
                  local_7dc = (int)&local_114 + 1;
                  do {
                    cVar1 = *local_71c;
                    local_71c = local_71c + 1;
                  } while (cVar1 != '\0');
                  local_7e0 = (int)local_71c - local_7dc;
                  local_5fc = local_5fc + local_7e0 + 0xe;
                  local_650 = 0;
                }
                else {
                  iVar3 = FUN_004a1ba0(local_5fc,"LOOP_DELAY=\"%[^\"]",&local_114);
                  if (iVar3 == 1) {
                    dVar6 = FID_conflict__atof(&local_114);
                    *(float *)(local_614 + 0x40) = (float)dVar6;
                    local_720 = (char *)&local_114;
                    local_7e4 = (int)&local_114 + 1;
                    do {
                      cVar1 = *local_720;
                      local_720 = local_720 + 1;
                    } while (cVar1 != '\0');
                    local_7e8 = (int)local_720 - local_7e4;
                    local_5fc = local_5fc + local_7e8 + 0xd;
                    local_651 = 0;
                  }
                  else {
                    iVar3 = FUN_004a1ba0(local_5fc,"LOOP_DELAY_RANGE=\"%[^\"]",&local_114);
                    if (iVar3 == 1) {
                      dVar6 = FID_conflict__atof(&local_114);
                      *(float *)(local_614 + 0x44) = (float)dVar6;
                      local_664 = (char *)&local_114;
                      local_7ec = (int)&local_114 + 1;
                      do {
                        cVar1 = *local_664;
                        local_664 = local_664 + 1;
                      } while (cVar1 != '\0');
                      local_7f0 = (int)local_664 - local_7ec;
                      local_5fc = local_5fc + local_7f0 + 0x13;
                      local_652 = 0;
                    }
                    else {
                      local_9b8 = 0;
                    }
                  }
                }
              }
            }
          }
        }
      }
      if (*local_5fc == '/') break;
      local_5fc = (char *)config_section_span_helper(local_5fc,local_60c);
    }
    local_99c[2] = local_614;
    local_990 = 0;
    local_7f8 = FUN_004c4270(local_578,local_614,local_99c + 2);
    local_8 = 1;
    local_7f4 = local_7f8;
    FUN_004c42a0(local_9e0,local_7f8);
    local_8 = 0xffffffff;
    FUN_004089b0();
  } while( true );
LAB_004bf854:
  local_99c[0] = local_618;
  local_99c[1] = 1;
  local_854 = FUN_004c4270(local_598,local_618,local_99c);
  local_8 = 4;
  local_850 = local_854;
  FUN_004c42a0(local_9e8,local_854);
  local_8 = 0xffffffff;
  FUN_004089b0();
  goto LAB_004be6ef;
LAB_004c00eb:
  local_9b4 = local_768;
  local_9b0 = 3;
  local_8a4 = FUN_004c4270(local_5b8,local_768,&local_9b4);
  local_8 = 6;
  local_8a0 = local_8a4;
  FUN_004c42a0(local_9f0,local_8a4);
  local_8 = 0xffffffff;
  FUN_004089b0();
  goto LAB_004be6ef;
}

/* ==== 004c1400  FUN_004c1400  size=34 ==== */

undefined4 FUN_004c1400(void)

{
  undefined4 in_ECX;
  
  FUN_0040d8b0();
  FUN_004c3870();
  return in_ECX;
}


/* ==== 004c1430  FUN_004c1430  size=23 ==== */

undefined4 FUN_004c1430(void)

{
  undefined4 in_ECX;
  
  FUN_0040d8b0();
  return in_ECX;
}


/* ==== 004c2e50  FUN_004c2e50  size=124 ==== */

int FUN_004c2e50(undefined4 param_1,int param_2,int param_3)

{
  undefined4 local_10;
  int local_c;
  int local_8;
  
  local_10 = 0;
  local_8 = 0;
  while (local_8 < param_3) {
    local_c = FUN_006d2d00(param_1,param_2 + local_8,param_3 - local_8,0,2,1,&local_10);
    if (local_c == 0) {
      FUN_006d2860(param_1,0,0);
    }
    else {
      local_8 = local_8 + local_c;
    }
  }
  return local_8;
}


/* ==== 004c2ed0  sound_createsoundbuffer_myerror_path  size=1116 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 sound_createsoundbuffer_myerror_path(undefined4 param_1)

{
  short sVar1;
  ushort uVar2;
  int iVar3;
  HANDLE pvVar4;
  DWORD DVar5;
  undefined4 local_368;
  int local_364;
  int *local_360;
  uint local_35c;
  int *local_358;
  int local_354;
  int local_350;
  char local_349;
  int *local_348;
  undefined4 local_344;
  undefined4 local_340;
  undefined4 local_33c;
  undefined4 local_338;
  undefined2 *local_334;
  undefined4 local_330;
  undefined4 local_32c;
  undefined4 local_328;
  undefined4 local_324;
  undefined1 local_320 [720];
  undefined2 local_50;
  short sStack_4e;
  int local_4c;
  int local_48;
  ushort local_44;
  ushort uStack_42;
  undefined2 local_40;
  int local_3c [8];
  HANDLE local_1c [4];
  undefined4 uStack_c;
  uint local_8;
  
  local_8 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  iVar3 = FUN_006d26a0(param_1,local_320);
  if (iVar3 == 0) {
    FUN_006f1902(param_1);
    iVar3 = FUN_006d26f0(local_320,0xffffffff);
    local_40 = 0;
    sVar1 = *(short *)(iVar3 + 4);
    _local_50 = CONCAT22(sVar1,1);
    local_4c = *(int *)(iVar3 + 8);
    uVar2 = (short)((int)(uint)(ushort)(sVar1 << 3) >> 3) * sVar1;
    _local_44 = CONCAT22(sVar1 << 3,uVar2);
    local_48 = (uint)uVar2 * local_4c;
    local_338 = 0;
    local_330 = 0;
    local_32c = 0;
    local_328 = 0;
    local_324 = 0;
    local_344 = 0x24;
    local_340 = 0x18180;
    local_33c = 0x40000;
    local_334 = &local_50;
    local_354 = (**(code **)(**(int **)(DAT_007ca238 + 0x60) + 0xc))
                          (*(undefined4 *)(DAT_007ca238 + 0x60),&local_344,&local_360,0);
    if (local_354 == 0) {
      local_348 = (int *)0x0;
      local_354 = (**(code **)*local_360)(local_360,&DAT_0072b360,&local_348);
      if (local_354 != 0) {
        MessageBoxA((HWND)0x0,"m_pDSBuffer8 error!",(LPCSTR)0x0,0);
      }
      local_358 = (int *)0x0;
      local_354 = (**(code **)*local_348)(local_348,&DAT_0072b370,&local_358);
      if (local_354 != 0) {
        MessageBoxA((HWND)0x0,"m_pDSNotify error!",(LPCSTR)0x0,0);
      }
      for (local_350 = 0; local_350 < 4; local_350 = local_350 + 1) {
        local_3c[local_350 * 2] = local_350 << 0x10;
        pvVar4 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCSTR)0x0);
        local_1c[local_350] = pvVar4;
        local_3c[local_350 * 2 + 1] = (int)local_1c[local_350];
      }
      uStack_c = DAT_007ca1a8;
      (**(code **)(*local_358 + 0xc))(local_358,4,local_3c);
      (**(code **)(*local_358 + 8))(local_358);
      (**(code **)(*local_360 + 8))(local_360);
      local_368 = 0;
      local_364 = 0;
      local_35c = 0x10000;
      local_349 = '\0';
      do {
        (**(code **)(*local_348 + 0x2c))(local_348,local_35c,0x10000,&local_368,&local_364,0,0,0);
        FUN_004c2e50(local_320,local_368,local_364);
        local_35c = (local_35c + local_364) % 0x40000;
        (**(code **)(*local_348 + 0x4c))(local_348,local_368,local_364,0,0);
        if (local_349 == '\0') {
          (**(code **)(*local_348 + 0x34))(local_348,0x10000);
          (**(code **)(*local_348 + 0x30))(local_348,0,0,1);
          local_349 = '\x01';
        }
        DVar5 = WaitForMultipleObjects(5,local_1c,0,0xffffffff);
      } while (DVar5 != 4);
      FUN_006d2590(local_320);
      (**(code **)(*local_348 + 0x48))(local_348);
      (**(code **)(*local_348 + 8))(local_348);
    }
    else {
      MessageBoxA((HWND)0x0,"CreateSoundBuffer MyError!",(LPCSTR)0x0,0);
      FUN_006d2590(local_320);
    }
  }
  else {
    FUN_006f1902(param_1);
  }
  return 0;
}


/* ==== 004c3690  FUN_004c3690  size=43 ==== */

undefined4 FUN_004c3690(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 in_ECX;
  
  uVar1 = allocator<>();
  uVar2 = FUN_0048ba10(uVar1);
  FUN_004c3b00(uVar2,uVar1);
  return in_ECX;
}


/* ==== 004c37b0  FUN_004c37b0  size=43 ==== */

undefined4 FUN_004c37b0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 in_ECX;
  
  uVar1 = allocator<>();
  uVar2 = FUN_0048ba10(uVar1);
  FUN_004c3c70(uVar2,uVar1);
  return in_ECX;
}


/* ==== 004c3800  FUN_004c3800  size=43 ==== */

undefined4 FUN_004c3800(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 in_ECX;
  
  uVar1 = allocator<>();
  uVar2 = FUN_0048ba10(uVar1);
  FUN_004c3d80(uVar2,uVar1);
  return in_ECX;
}


/* ==== 004c38d0  FUN_004c38d0  size=26 ==== */

void FUN_004c38d0(undefined4 param_1)

{
  FUN_004c44c0(param_1);
  return;
}


/* ==== 004c3b00  FUN_004c3b00  size=192 ==== */

int FUN_004c3b00(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined1 local_18 [4];
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071497b;
  local_10 = ExceptionList;
  uVar1 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_0048c070(param_1);
  FUN_004c3f80(param_2);
  local_8 = 0;
  FUN_004c4510(param_2);
  local_8 = CONCAT31(local_8._1_3_,1);
  *(undefined4 *)(local_14 + 0x18) = 7;
  *(undefined4 *)(local_14 + 0x1c) = 8;
  puVar2 = (undefined4 *)FUN_00401c60(uVar1);
  *puVar2 = 0x3f800000;
  puVar2 = (undefined4 *)FUN_0042a9c0(local_18);
  FUN_0042a650(0x10,*puVar2);
  ExceptionList = local_10;
  return local_14;
}


/* ==== 004c3c70  FUN_004c3c70  size=192 ==== */

int FUN_004c3c70(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined1 local_18 [4];
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007149bb;
  local_10 = ExceptionList;
  uVar1 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_0048c070(param_1);
  FUN_004c3fb0(param_2);
  local_8 = 0;
  FUN_004c4510(param_2);
  local_8 = CONCAT31(local_8._1_3_,1);
  *(undefined4 *)(local_14 + 0x18) = 7;
  *(undefined4 *)(local_14 + 0x1c) = 8;
  puVar2 = (undefined4 *)FUN_00401c60(uVar1);
  *puVar2 = 0x3f800000;
  puVar2 = (undefined4 *)FUN_0042a9c0(local_18);
  FUN_0042a650(0x10,*puVar2);
  ExceptionList = local_10;
  return local_14;
}


/* ==== 004c3d80  FUN_004c3d80  size=192 ==== */

int FUN_004c3d80(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined1 local_18 [4];
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007149fb;
  local_10 = ExceptionList;
  uVar1 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_0048c070(param_1);
  FUN_004c3fe0(param_2);
  local_8 = 0;
  FUN_004c4510(param_2);
  local_8 = CONCAT31(local_8._1_3_,1);
  *(undefined4 *)(local_14 + 0x18) = 7;
  *(undefined4 *)(local_14 + 0x1c) = 8;
  puVar2 = (undefined4 *)FUN_00401c60(uVar1);
  *puVar2 = 0x3f800000;
  puVar2 = (undefined4 *)FUN_0042a9c0(local_18);
  FUN_0042a650(0x10,*puVar2);
  ExceptionList = local_10;
  return local_14;
}


/* ==== 004c3f80  FUN_004c3f80  size=45 ==== */

undefined4 FUN_004c3f80(undefined4 param_1)

{
  undefined4 in_ECX;
  undefined1 local_5;
  
  FUN_0048eb90(local_5,param_1);
  FUN_004c4010();
  return in_ECX;
}


/* ==== 004c3fb0  FUN_004c3fb0  size=45 ==== */

undefined4 FUN_004c3fb0(undefined4 param_1)

{
  undefined4 in_ECX;
  undefined1 local_5;
  
  FUN_0048eb90(local_5,param_1);
  FUN_004c4080();
  return in_ECX;
}


/* ==== 004c3fe0  FUN_004c3fe0  size=45 ==== */

undefined4 FUN_004c3fe0(undefined4 param_1)

{
  undefined4 in_ECX;
  undefined1 local_5;
  
  FUN_0048eb90(local_5,param_1);
  FUN_004c40f0();
  return in_ECX;
}


/* ==== 004c4010  FUN_004c4010  size=112 ==== */

void FUN_004c4010(void)

{
  undefined4 uVar1;
  int *in_ECX;
  int local_c [2];
  
  FUN_00401740(&DAT_0073f976,in_ECX);
  uVar1 = FUN_00401c60();
  local_c[0] = allocate(1);
  FUN_004064c0(local_c[0],local_c,uVar1);
  FUN_004064c0(local_c[0] + 4,local_c);
  *in_ECX = local_c[0];
  FUN_00401710();
  return;
}


/* ==== 004c4080  FUN_004c4080  size=112 ==== */

void FUN_004c4080(void)

{
  undefined4 uVar1;
  int *in_ECX;
  int local_c [2];
  
  FUN_00401740(&DAT_0073f976,in_ECX);
  uVar1 = FUN_00401c60();
  local_c[0] = allocate(1);
  FUN_004064c0(local_c[0],local_c,uVar1);
  FUN_004064c0(local_c[0] + 4,local_c);
  *in_ECX = local_c[0];
  FUN_00401710();
  return;
}


/* ==== 004c40f0  FUN_004c40f0  size=112 ==== */

void FUN_004c40f0(void)

{
  undefined4 uVar1;
  int *in_ECX;
  int local_c [2];
  
  FUN_00401740(&DAT_0073f976,in_ECX);
  uVar1 = FUN_00401c60();
  local_c[0] = allocate(1);
  FUN_004064c0(local_c[0],local_c,uVar1);
  FUN_004064c0(local_c[0] + 4,local_c);
  *in_ECX = local_c[0];
  FUN_00401710();
  return;
}


/* ==== 004c4270  FUN_004c4270  size=43 ==== */

undefined4 FUN_004c4270(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_004c4f40(param_2,param_3);
  return param_1;
}


/* ==== 004c42a0  FUN_004c42a0  size=32 ==== */

undefined4 FUN_004c42a0(undefined4 param_1,undefined4 param_2)

{
  FUN_004c4f70(param_1,param_2);
  return param_1;
}


/* ==== 004c4510  FUN_004c4510  size=50 ==== */

undefined4 FUN_004c4510(undefined4 param_1)

{
  undefined4 in_ECX;
  undefined1 local_5;
  
  FUN_00493c00(local_5,param_1);
  FUN_00401720(&DAT_0073f976);
  return in_ECX;
}


/* ==== 006d2050  FUN_006d2050  size=243 ==== */

int FUN_006d2050(int param_1,int *param_2,int param_3,undefined4 param_4,int param_5,code *param_6,
                int param_7,int param_8)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_1 == 0) || (param_6 == (code *)0x0)) {
    iVar1 = -1;
  }
  else {
    iVar1 = (*param_6)(param_1,0,0,1);
  }
  _memset(param_2 + 1,0,700);
  *param_2 = param_1;
  param_2[0xb0] = param_5;
  param_2[0xb1] = (int)param_6;
  param_2[0xb2] = param_7;
  param_2[0xb3] = param_8;
  FUN_006e3250(param_2 + 6);
  if (param_3 != 0) {
    uVar2 = FUN_006e31a0(param_2 + 6,param_4);
    FUN_006e6bd0(uVar2,param_3,param_4);
    FUN_006e3410(param_2 + 6,param_4);
  }
  if (iVar1 != -1) {
    param_2[1] = 1;
  }
  param_2[0xd] = 1;
  iVar1 = FUN_006f3f73(1,0x20);
  param_2[0x12] = iVar1;
  iVar1 = FUN_006f3f73(param_2[0xd],0x10);
  param_2[0x13] = iVar1;
  FUN_006e2dc0(param_2 + 0x1e,0xffffffff);
  iVar1 = FUN_006d18d0(param_2,param_2[0x12],param_2[0x13],param_2 + 0x17,0);
  if (iVar1 < 0) {
    *param_2 = 0;
    FUN_006d2590(param_2);
    return iVar1;
  }
  param_2[0x16] = 1;
  return iVar1;
}


/* ==== 006d2150  FUN_006d2150  size=83 ==== */

int FUN_006d2150(undefined4 *param_1)

{
  int iVar1;
  
  if (param_1[0x16] != 1) {
    return -0x83;
  }
  param_1[0x16] = 2;
  if (param_1[1] != 0) {
    iVar1 = FUN_006d1f10(param_1);
    if (iVar1 != 0) {
      *param_1 = 0;
      FUN_006d2590(param_1);
    }
    return iVar1;
  }
  param_1[0x16] = 3;
  return 0;
}


/* ==== 006d2590  FUN_006d2590  size=264 ==== */

undefined4 FUN_006d2590(int *param_1)

{
  int *piVar1;
  int *_Dst;
  int iVar2;
  int iVar3;
  
  _Dst = param_1;
  if (param_1 != (int *)0x0) {
    FUN_006d3e10(param_1 + 0x94);
    FUN_006d3f00(param_1 + 0x78);
    FUN_006e2d70(param_1 + 0x1e);
    iVar2 = param_1[0x12];
    if ((iVar2 != 0) && (piVar1 = param_1 + 0xd, *piVar1 != 0)) {
      param_1 = (int *)0x0;
      if (0 < *piVar1) {
        iVar3 = 0;
        iVar2 = 0;
        do {
          FUN_006d3600(_Dst[0x12] + iVar2);
          FUN_006d3580(_Dst[0x13] + iVar3);
          param_1 = (int *)((int)param_1 + 1);
          iVar2 = iVar2 + 0x20;
          iVar3 = iVar3 + 0x10;
        } while ((int)param_1 < _Dst[0xd]);
        iVar2 = _Dst[0x12];
      }
      FUN_006f1902(iVar2);
      FUN_006f1902(_Dst[0x13]);
    }
    if (_Dst[0xf] != 0) {
      FUN_006f1902(_Dst[0xf]);
    }
    if (_Dst[0x11] != 0) {
      FUN_006f1902(_Dst[0x11]);
    }
    if (_Dst[0x10] != 0) {
      FUN_006f1902(_Dst[0x10]);
    }
    if (_Dst[0xe] != 0) {
      FUN_006f1902(_Dst[0xe]);
    }
    FUN_006e3220(_Dst + 6);
    if ((*_Dst != 0) && ((code *)_Dst[0xb2] != (code *)0x0)) {
      (*(code *)_Dst[0xb2])(*_Dst);
    }
    _memset(_Dst,0,0x2d0);
  }
  return 0;
}


/* ==== 006d26a0  FUN_006d26a0  size=70 ==== */

int FUN_006d26a0(char *param_1,undefined4 param_2)

{
  FILE *pFVar1;
  int iVar2;
  
  pFVar1 = _fopen(param_1,"rb");
  if (pFVar1 == (FILE *)0x0) {
    return -1;
  }
  iVar2 = FUN_006d2730(pFVar1,param_2,0,0);
  if (iVar2 != 0) {
    FUN_006e940a(pFVar1);
  }
  return iVar2;
}


/* ==== 006d26f0  FUN_006d26f0  size=50 ==== */

int FUN_006d26f0(int param_1,int param_2)

{
  if (*(int *)(param_1 + 4) != 0) {
    if (param_2 < 0) {
      if (*(int *)(param_1 + 0x58) < 3) goto LAB_006d271d;
      param_2 = *(int *)(param_1 + 0x60);
    }
    else if (*(int *)(param_1 + 0x34) <= param_2) {
      return 0;
    }
    return param_2 * 0x20 + *(int *)(param_1 + 0x48);
  }
LAB_006d271d:
  return *(int *)(param_1 + 0x48);
}


/* ==== 006d2730  FUN_006d2730  size=70 ==== */

void FUN_006d2730(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_006d2780(param_1,param_2,param_3,param_4,_fread,FUN_006d1af0,FUN_006e940a,FUN_006e92b5);
  return;
}


/* ==== 006d2780  FUN_006d2780  size=52 ==== */

void FUN_006d2780(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  
  iVar1 = FUN_006d2050(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  if (iVar1 == 0) {
    FUN_006d2150(param_2);
  }
  return;
}


/* ==== 006d3580  FUN_006d3580  size=100 ==== */

void FUN_006d3580(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != (int *)0x0) {
    iVar2 = 0;
    if (0 < param_1[2]) {
      do {
        iVar1 = *(int *)(*param_1 + iVar2 * 4);
        if (iVar1 != 0) {
          FUN_006f1902(iVar1);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < param_1[2]);
    }
    if (*param_1 != 0) {
      FUN_006f1902(*param_1);
    }
    if (param_1[1] != 0) {
      FUN_006f1902(param_1[1]);
    }
    if (param_1[3] != 0) {
      FUN_006f1902(param_1[3]);
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return;
}


/* ==== 006d3600  FUN_006d3600  size=384 ==== */

void FUN_006d3600(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int local_8;
  
  iVar1 = param_1[7];
  if (iVar1 != 0) {
    iVar4 = 0;
    if (0 < *(int *)(iVar1 + 8)) {
      piVar2 = (int *)(iVar1 + 0x20);
      do {
        if (*piVar2 != 0) {
          FUN_006f1902(*piVar2);
        }
        iVar4 = iVar4 + 1;
        piVar2 = piVar2 + 1;
      } while (iVar4 < *(int *)(iVar1 + 8));
    }
    iVar4 = 0;
    if (0 < *(int *)(iVar1 + 0xc)) {
      piVar2 = (int *)(iVar1 + 0x120);
      do {
        if (piVar2[0x40] != 0) {
          (**(code **)((&PTR_PTR_007bcfcc)[*piVar2] + 8))(piVar2[0x40]);
        }
        iVar4 = iVar4 + 1;
        piVar2 = piVar2 + 1;
      } while (iVar4 < *(int *)(iVar1 + 0xc));
    }
    iVar4 = 0;
    if (0 < *(int *)(iVar1 + 0x10)) {
      piVar2 = (int *)(iVar1 + 800);
      do {
        if (piVar2[0x40] != 0) {
          (**(code **)((&PTR_DAT_007bcfb8)[*piVar2] + 0xc))(piVar2[0x40]);
        }
        iVar4 = iVar4 + 1;
        piVar2 = piVar2 + 1;
      } while (iVar4 < *(int *)(iVar1 + 0x10));
    }
    iVar4 = 0;
    if (0 < *(int *)(iVar1 + 0x14)) {
      piVar2 = (int *)(iVar1 + 0x520);
      do {
        if (piVar2[0x40] != 0) {
          (**(code **)((&PTR_DAT_007bcfc0)[*piVar2] + 0xc))(piVar2[0x40]);
        }
        iVar4 = iVar4 + 1;
        piVar2 = piVar2 + 1;
      } while (iVar4 < *(int *)(iVar1 + 0x14));
    }
    iVar4 = 0;
    if (0 < *(int *)(iVar1 + 0x18)) {
      piVar2 = (int *)(iVar1 + 0x720);
      local_8 = 0;
      do {
        if (*piVar2 != 0) {
          FUN_006d5690(*piVar2);
        }
        if (*(int *)(iVar1 + 0xb20) != 0) {
          FUN_006d50a0(*(int *)(iVar1 + 0xb20) + local_8);
        }
        iVar4 = iVar4 + 1;
        local_8 = local_8 + 0x2c;
        piVar2 = piVar2 + 1;
      } while (iVar4 < *(int *)(iVar1 + 0x18));
    }
    if (*(int *)(iVar1 + 0xb20) != 0) {
      FUN_006f1902(*(int *)(iVar1 + 0xb20));
    }
    iVar4 = 0;
    if (0 < *(int *)(iVar1 + 0x1c)) {
      puVar3 = (undefined4 *)(iVar1 + 0xb24);
      do {
        FUN_006d6520(*puVar3);
        iVar4 = iVar4 + 1;
        puVar3 = puVar3 + 1;
      } while (iVar4 < *(int *)(iVar1 + 0x1c));
    }
    FUN_006f1902(iVar1);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}


/* ==== 006d3d80  FUN_006d3d80  size=107 ==== */

void FUN_006d3d80(int param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  
  puVar2 = *(undefined8 **)(param_1 + 0x54);
  while (puVar2 != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)((int)puVar2 + 4);
    FUN_006f1902(*(undefined4 *)puVar2);
    *puVar2 = 0;
    FUN_006f1902(puVar2);
    puVar2 = puVar1;
  }
  if (*(int *)(param_1 + 0x50) != 0) {
    uVar3 = FUN_006f3f7e(*(undefined4 *)(param_1 + 0x44),
                         *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x50));
    *(undefined4 *)(param_1 + 0x44) = uVar3;
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x50);
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  return;
}


/* ==== 006d3e10  FUN_006d3e10  size=114 ==== */

undefined4 FUN_006d3e10(void *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar1 = *(int *)((int)param_1 + 0x68);
  FUN_006d3d80(param_1);
  if (*(int *)((int)param_1 + 0x44) != 0) {
    FUN_006f1902(*(int *)((int)param_1 + 0x44));
  }
  if (iVar1 != 0) {
    iVar2 = 0;
    puVar3 = (undefined4 *)(iVar1 + 0xc);
    do {
      FUN_006e36e0(*puVar3);
      if (iVar2 != 7) {
        FUN_006f1902(*puVar3);
      }
      iVar2 = iVar2 + 1;
      puVar3 = puVar3 + 1;
    } while (iVar2 < 0xf);
    FUN_006f1902(iVar1);
  }
  _memset(param_1,0,0x70);
  return 0;
}


/* ==== 006d3f00  FUN_006d3f00  size=572 ==== */

void FUN_006d3f00(void *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_8;
  
  if (param_1 != (void *)0x0) {
    iVar1 = *(int *)((int)param_1 + 4);
    if (iVar1 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(iVar1 + 0x1c);
    }
    piVar2 = *(int **)((int)param_1 + 0x68);
    if (piVar2 != (int *)0x0) {
      if (*piVar2 != 0) {
        FUN_006db3f0(*piVar2);
        FUN_006f1902(*piVar2);
      }
      if ((undefined4 *)piVar2[3] != (undefined4 *)0x0) {
        FUN_006daeb0(*(undefined4 *)piVar2[3]);
        FUN_006f1902(*(undefined4 *)piVar2[3]);
        FUN_006f1902(piVar2[3]);
      }
      if ((undefined4 *)piVar2[4] != (undefined4 *)0x0) {
        FUN_006daeb0(*(undefined4 *)piVar2[4]);
        FUN_006f1902(*(undefined4 *)piVar2[4]);
        FUN_006f1902(piVar2[4]);
      }
      iVar4 = piVar2[0xc];
      if (iVar4 != 0) {
        if ((iVar5 != 0) && (0 < *(int *)(iVar5 + 0x10))) {
          iVar4 = 0;
          do {
            (**(code **)((&PTR_DAT_007bcfb8)[*(int *)(iVar5 + 800 + iVar4 * 4)] + 0x10))
                      (*(undefined4 *)(piVar2[0xc] + iVar4 * 4));
            iVar4 = iVar4 + 1;
          } while (iVar4 < *(int *)(iVar5 + 0x10));
          iVar4 = piVar2[0xc];
        }
        FUN_006f1902(iVar4);
      }
      iVar4 = piVar2[0xd];
      if (iVar4 != 0) {
        if ((iVar5 != 0) && (0 < *(int *)(iVar5 + 0x14))) {
          iVar4 = 0;
          do {
            (**(code **)((&PTR_DAT_007bcfc0)[*(int *)(iVar5 + 0x520 + iVar4 * 4)] + 0x10))
                      (*(undefined4 *)(piVar2[0xd] + iVar4 * 4));
            iVar4 = iVar4 + 1;
          } while (iVar4 < *(int *)(iVar5 + 0x14));
          iVar4 = piVar2[0xd];
        }
        FUN_006f1902(iVar4);
      }
      iVar4 = piVar2[0xe];
      if (iVar4 != 0) {
        if ((iVar5 != 0) && (local_8 = 0, 0 < *(int *)(iVar5 + 0x1c))) {
          iVar4 = 0;
          do {
            FUN_006d75a0(piVar2[0xe] + iVar4);
            local_8 = local_8 + 1;
            iVar4 = iVar4 + 0x34;
          } while (local_8 < *(int *)(iVar5 + 0x1c));
          iVar4 = piVar2[0xe];
        }
        FUN_006f1902(iVar4);
      }
      if (piVar2[0xf] != 0) {
        FUN_006d69c0(piVar2[0xf]);
      }
      FUN_006dcea0(piVar2 + 0x14);
      FUN_006dc9e0(piVar2 + 5);
      FUN_006dc9e0(piVar2 + 8);
    }
    iVar5 = *(int *)((int)param_1 + 8);
    if (iVar5 != 0) {
      iVar4 = iVar5;
      if ((iVar1 != 0) && (iVar6 = 0, 0 < *(int *)(iVar1 + 4))) {
        do {
          iVar3 = *(int *)(iVar5 + iVar6 * 4);
          if (iVar3 != 0) {
            FUN_006f1902(iVar3);
            iVar5 = *(int *)((int)param_1 + 8);
            iVar4 = iVar5;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < *(int *)(iVar1 + 4));
      }
      FUN_006f1902(iVar4);
      if (*(int *)((int)param_1 + 0xc) != 0) {
        FUN_006f1902(*(int *)((int)param_1 + 0xc));
      }
    }
    if (piVar2 != (int *)0x0) {
      if (piVar2[0x10] != 0) {
        FUN_006f1902(piVar2[0x10]);
      }
      if (piVar2[0x11] != 0) {
        FUN_006f1902(piVar2[0x11]);
      }
      if (piVar2[0x12] != 0) {
        FUN_006f1902(piVar2[0x12]);
      }
      FUN_006f1902(piVar2);
    }
    _memset(param_1,0,0x70);
  }
  return;
}


/* ==== 006d50a0  FUN_006d50a0  size=103 ==== */

void FUN_006d50a0(void *param_1)

{
  if (*(int *)((int)param_1 + 0x10) != 0) {
    FUN_006f1902(*(int *)((int)param_1 + 0x10));
  }
  if (*(int *)((int)param_1 + 0x14) != 0) {
    FUN_006f1902(*(int *)((int)param_1 + 0x14));
  }
  if (*(int *)((int)param_1 + 0x18) != 0) {
    FUN_006f1902(*(int *)((int)param_1 + 0x18));
  }
  if (*(int *)((int)param_1 + 0x1c) != 0) {
    FUN_006f1902(*(int *)((int)param_1 + 0x1c));
  }
  if (*(int *)((int)param_1 + 0x20) != 0) {
    FUN_006f1902(*(int *)((int)param_1 + 0x20));
  }
  _memset(param_1,0,0x2c);
  return;
}


/* ==== 006d55d0  FUN_006d55d0  size=182 ==== */

void FUN_006d55d0(void *param_1)

{
  undefined4 *puVar1;
  
  if (*(int *)((int)param_1 + 0x30) != 0) {
    if (*(int *)((int)param_1 + 0x20) != 0) {
      FUN_006f1902(*(int *)((int)param_1 + 0x20));
    }
    if (*(int *)((int)param_1 + 8) != 0) {
      FUN_006f1902(*(int *)((int)param_1 + 8));
    }
    if (*(undefined4 **)((int)param_1 + 0x24) != (undefined4 *)0x0) {
      FUN_006f1902(**(undefined4 **)((int)param_1 + 0x24));
      FUN_006f1902(*(undefined4 *)(*(int *)((int)param_1 + 0x24) + 4));
      FUN_006f1902(*(undefined4 *)(*(int *)((int)param_1 + 0x24) + 8));
      FUN_006f1902(*(undefined4 *)(*(int *)((int)param_1 + 0x24) + 0xc));
      puVar1 = *(undefined4 **)((int)param_1 + 0x24);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      *(undefined8 *)(puVar1 + 4) = 0;
      FUN_006f1902(*(undefined4 *)((int)param_1 + 0x24));
    }
    if (*(undefined4 **)((int)param_1 + 0x28) != (undefined4 *)0x0) {
      FUN_006f1902(**(undefined4 **)((int)param_1 + 0x28));
      FUN_006f1902(*(undefined4 *)(*(int *)((int)param_1 + 0x28) + 4));
      puVar1 = *(undefined4 **)((int)param_1 + 0x28);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      FUN_006f1902(*(undefined4 *)((int)param_1 + 0x28));
    }
    _memset(param_1,0,0x34);
  }
  return;
}


/* ==== 006d5690  FUN_006d5690  size=31 ==== */

void FUN_006d5690(int param_1)

{
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_006d55d0(param_1);
    FUN_006f1902(param_1);
  }
  return;
}


/* ==== 006d6520  FUN_006d6520  size=36 ==== */

void FUN_006d6520(void *param_1)

{
  if (param_1 != (void *)0x0) {
    _memset(param_1,0,0x210);
    FUN_006f1902(param_1);
  }
  return;
}


/* ==== 006d69c0  FUN_006d69c0  size=38 ==== */

void FUN_006d69c0(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    FUN_006f1902();
    return;
  }
  return;
}


/* ==== 006d75a0  FUN_006d75a0  size=199 ==== */

void FUN_006d75a0(void *param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != (void *)0x0) {
    if (*(int *)((int)param_1 + 0x10) != 0) {
      FUN_006f1902(*(int *)((int)param_1 + 0x10));
    }
    if (*(int *)((int)param_1 + 0x14) != 0) {
      FUN_006f1902(*(int *)((int)param_1 + 0x14));
    }
    if (*(int *)((int)param_1 + 0x18) != 0) {
      FUN_006f1902(*(int *)((int)param_1 + 0x18));
    }
    if (*(int *)((int)param_1 + 8) != 0) {
      iVar1 = 0;
      do {
        iVar2 = 0;
        do {
          FUN_006f1902(*(undefined4 *)(*(int *)(iVar1 + *(int *)((int)param_1 + 8)) + iVar2));
          iVar2 = iVar2 + 4;
        } while (iVar2 < 0x20);
        FUN_006f1902(*(undefined4 *)(iVar1 + *(int *)((int)param_1 + 8)));
        iVar1 = iVar1 + 4;
      } while (iVar1 < 0x44);
      FUN_006f1902(*(undefined4 *)((int)param_1 + 8));
    }
    if (*(int *)((int)param_1 + 0xc) != 0) {
      iVar1 = 0;
      do {
        FUN_006f1902(*(undefined4 *)(iVar1 + *(int *)((int)param_1 + 0xc)));
        iVar1 = iVar1 + 4;
      } while (iVar1 < 0xc);
      FUN_006f1902(*(undefined4 *)((int)param_1 + 0xc));
    }
    _memset(param_1,0,0x34);
  }
  return;
}


/* ==== 006daeb0  FUN_006daeb0  size=59 ==== */

void FUN_006daeb0(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    if (param_1[2] != 0) {
      FUN_006f1902(param_1[2]);
    }
    if (param_1[3] != 0) {
      FUN_006f1902(param_1[3]);
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
  }
  return;
}


/* ==== 006db3f0  FUN_006db3f0  size=100 ==== */

void FUN_006db3f0(void *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  FUN_006daeb0((int)param_1 + 0x10);
  puVar1 = (undefined4 *)((int)param_1 + 0x30);
  iVar2 = 7;
  do {
    FUN_006f1902(*puVar1);
    puVar1 = puVar1 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  FUN_006f1902(*(undefined4 *)((int)param_1 + 0x24));
  FUN_006f1902(*(undefined4 *)((int)param_1 + 0x98));
  FUN_006f1902(*(undefined4 *)((int)param_1 + 0xa0));
  _memset(param_1,0,0xb4);
  return;
}


/* ==== 006dc9e0  FUN_006dc9e0  size=60 ==== */

void FUN_006dc9e0(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    if (*(int *)((int)param_1 + 4) != 0) {
      FUN_006f1902(*(int *)((int)param_1 + 4));
    }
    if (*(int *)(param_1 + 1) != 0) {
      FUN_006f1902(*(int *)(param_1 + 1));
    }
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 0;
  }
  return;
}


/* ==== 006dcea0  FUN_006dcea0  size=20 ==== */

void FUN_006dcea0(void *param_1)

{
  _memset(param_1,0,0x30);
  return;
}


/* ==== 006e2d70  FUN_006e2d70  size=79 ==== */

undefined4 FUN_006e2d70(int *param_1)

{
  if (param_1 != (int *)0x0) {
    if (*param_1 != 0) {
      FUN_006f1902(*param_1);
    }
    if (param_1[4] != 0) {
      FUN_006f1902(param_1[4]);
    }
    if (param_1[5] != 0) {
      FUN_006f1902(param_1[5]);
    }
    _memset(param_1,0,0x168);
  }
  return 0;
}


/* ==== 006e3220  FUN_006e3220  size=40 ==== */

undefined4 FUN_006e3220(int *param_1)

{
  if (param_1 != (int *)0x0) {
    if (*param_1 != 0) {
      FUN_006f1902(*param_1);
    }
    FUN_006e3250(param_1);
  }
  return 0;
}


/* ==== 006e36e0  FUN_006e36e0  size=34 ==== */

void FUN_006e36e0(undefined4 *param_1)

{
  FUN_006f1902(param_1[2]);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}


/* ==== 006f2595  FUN_006f2595  size=63 ==== */

undefined4 FUN_006f2595(undefined4 param_1)

{
  undefined4 uVar1;
  undefined1 local_30 [44];
  
  FUN_006e8923(0);
  uVar1 = FUN_006f1a78(local_30,param_1,0,10,1);
  FUN_006e896b();
  return uVar1;
}


