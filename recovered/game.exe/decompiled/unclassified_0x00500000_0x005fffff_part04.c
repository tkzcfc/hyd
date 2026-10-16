/* Auto-decompiled pseudo-code from game.exe / unclassified_0x00500000_0x005fffff part 4/4 */
/* NOT original source. Bucketed by evidence (strings/imports/call-graph), not raw address. */

/* ==== 005fef70  FUN_005fef70  size=164 ==== */

undefined4 FUN_005fef70(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00721a4d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_18 = FUN_00402d20(&param_1,DAT_007c5940 ^ (uint)&stack0xfffffffc);
  FUN_00403180(param_3,param_4);
  local_8 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_00608210(local_18);
    local_18 = local_18 + 0x28;
  }
  uVar1 = FUN_00403130();
  local_8 = 0xffffffff;
  FUN_00602530();
  ExceptionList = local_10;
  return uVar1;
}


/* ==== 005ff020  FUN_005ff020  size=58 ==== */

int FUN_005ff020(int param_1,int param_2,int param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_005f45d0(param_1);
    param_3 = param_3 + 0x28;
    param_1 = param_1 + 0x28;
  }
  return param_3;
}


/* ==== 005ff060  FUN_005ff060  size=164 ==== */

undefined4 FUN_005ff060(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00721a7d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_18 = FUN_00402d20(&param_1,DAT_007c5940 ^ (uint)&stack0xfffffffc);
  FUN_00403180(param_3,param_4);
  local_8 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_00608250(local_18);
    local_18 = local_18 + 0x24;
  }
  uVar1 = FUN_00403130();
  local_8 = 0xffffffff;
  FUN_006024b0();
  ExceptionList = local_10;
  return uVar1;
}


/* ==== 005ff110  FUN_005ff110  size=58 ==== */

int FUN_005ff110(int param_1,int param_2,int param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_005f4620(param_1);
    param_3 = param_3 + 0x24;
    param_1 = param_1 + 0x24;
  }
  return param_3;
}


/* ==== 005ff150  FUN_005ff150  size=110 ==== */

int FUN_005ff150(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  int *piVar3;
  
  piVar3 = (int *)(in_ECX + 4);
  uVar2 = _Unfancy<>(*piVar3,param_1);
  uVar2 = FUN_00401c60(uVar2);
  FUN_00608290(uVar2);
  FUN_004023d0(*piVar3,*piVar3);
  iVar1 = *piVar3;
  *piVar3 = *piVar3 + 0x24;
  return iVar1;
}


/* ==== 005ff1c0  FUN_005ff1c0  size=461 ==== */

int FUN_005ff1c0(int param_1,undefined4 param_2)

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
  puStack_c = &LAB_00721aad;
  local_10 = ExceptionList;
  uVar1 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_18 = FUN_00401c60(uVar1);
  local_30 = local_1c;
  local_24 = local_1c;
  local_28 = local_1c + 1;
  local_20 = (param_1 - *local_1c) / 0x24;
  local_34 = (*local_28 - *local_1c) / 0x24;
  iVar2 = FUN_0044fbc0();
  if (local_34 == iVar2) {
    FUN_00401c80();
  }
  local_40 = local_34 + 1;
  local_2c = FUN_0044fb60(local_40);
  local_14 = FUN_00450c20(local_18,&local_2c);
  local_4c = local_14 + 0x24 + local_20 * 0x24;
  local_8 = 0;
  local_3c = &local_4c;
  uVar4 = local_18;
  local_48 = local_4c;
  local_38 = local_4c;
  uVar3 = _Unfancy<>(local_20 * 0x24 + local_14,param_2,uVar1,local_18,local_14,local_2c);
  FUN_00608290(local_18,uVar3);
  *local_3c = local_20 * 0x24 + local_14;
  if (param_1 == *local_28) {
    FUN_006082c0(*local_24,*local_28,local_14,local_18);
  }
  else {
    FUN_006082c0(*local_24,param_1,local_14,local_18);
    *local_3c = local_14;
    FUN_006082c0(param_1,*local_28,local_14 + 0x24 + local_20 * 0x24,local_18);
  }
  uVar3 = 0;
  FUN_00604960(local_14,local_40,local_2c);
  local_44 = local_20 * 0x24 + local_14;
  local_8 = 0xffffffff;
  FUN_00602460(uVar1,uVar4,uVar3);
  ExceptionList = local_10;
  return local_44;
}


/* ==== 005ff390  FUN_005ff390  size=115 ==== */

int FUN_005ff390(undefined4 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0070be4d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar1 = FUN_00402d20(&param_1,DAT_007c5940 ^ (uint)&stack0xfffffffc);
  uVar2 = _Unfancy<>(param_3);
  FUN_005ff460(uVar1,param_2,uVar2);
  ExceptionList = local_10;
  return param_2 * 0x2c + param_3;
}


/* ==== 005ff460  FUN_005ff460  size=62 ==== */

void FUN_005ff460(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00402d20(&param_1);
  FUN_00403360(uVar1,param_3,param_2 * 0x2c,param_2);
  return;
}


/* ==== 005ff4a0  FUN_005ff4a0  size=31 ==== */

void FUN_005ff4a0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_005ff460(param_1,param_2,param_3);
  return;
}


/* ==== 005ff500  FUN_005ff500  size=92 ==== */

int FUN_005ff500(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  int *piVar2;
  
  piVar2 = (int *)(in_ECX + 4);
  FUN_006083b0(*piVar2,param_1);
  FUN_004023d0(*piVar2,*piVar2);
  iVar1 = *piVar2;
  *piVar2 = *piVar2 + 0x2c;
  return iVar1;
}


/* ==== 005ff560  FUN_005ff560  size=461 ==== */

int FUN_005ff560(int param_1,undefined4 param_2)

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
  puStack_c = &LAB_00721add;
  local_10 = ExceptionList;
  uVar1 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_18 = FUN_00401c60(uVar1);
  local_30 = local_1c;
  local_24 = local_1c;
  local_28 = local_1c + 1;
  local_20 = (param_1 - *local_1c) / 0x2c;
  local_34 = (*local_28 - *local_1c) / 0x2c;
  iVar2 = FUN_0042a2b0();
  if (local_34 == iVar2) {
    FUN_00401c80();
  }
  local_40 = local_34 + 1;
  local_2c = FUN_004950b0(local_40);
  local_14 = FUN_00495c90(local_18,&local_2c);
  local_4c = local_14 + 0x2c + local_20 * 0x2c;
  local_8 = 0;
  local_3c = &local_4c;
  uVar4 = local_18;
  local_48 = local_4c;
  local_38 = local_4c;
  uVar3 = _Unfancy<>(local_20 * 0x2c + local_14,param_2,uVar1,local_18,local_14,local_2c);
  FUN_006083f0(local_18,uVar3);
  *local_3c = local_20 * 0x2c + local_14;
  if (param_1 == *local_28) {
    FUN_00608420(*local_24,*local_28,local_14,local_18);
  }
  else {
    FUN_00608420(*local_24,param_1,local_14,local_18);
    *local_3c = local_14;
    FUN_00608420(param_1,*local_28,local_14 + 0x2c + local_20 * 0x2c,local_18);
  }
  uVar3 = 0;
  FUN_00604a10(local_14,local_40,local_2c);
  local_44 = local_20 * 0x2c + local_14;
  local_8 = 0xffffffff;
  FUN_00602410(uVar1,uVar4,uVar3);
  ExceptionList = local_10;
  return local_44;
}


/* ==== 005ff730  FUN_005ff730  size=110 ==== */

int FUN_005ff730(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  int *piVar3;
  
  piVar3 = (int *)(in_ECX + 4);
  uVar2 = _Unfancy<>(*piVar3,param_1);
  uVar2 = FUN_00401c60(uVar2);
  FUN_005841b0(uVar2);
  FUN_004023d0(*piVar3,*piVar3);
  iVar1 = *piVar3;
  *piVar3 = *piVar3 + 100;
  return iVar1;
}


/* ==== 005ff7a0  FUN_005ff7a0  size=461 ==== */

int FUN_005ff7a0(int param_1,undefined4 param_2)

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
  puStack_c = &LAB_00721b0d;
  local_10 = ExceptionList;
  uVar1 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_18 = FUN_00401c60(uVar1);
  local_30 = local_1c;
  local_24 = local_1c;
  local_28 = local_1c + 1;
  local_20 = (param_1 - *local_1c) / 100;
  local_34 = (*local_28 - *local_1c) / 100;
  iVar2 = FUN_00582d20();
  if (local_34 == iVar2) {
    FUN_00401c80();
  }
  local_40 = local_34 + 1;
  local_2c = FUN_00582cc0(local_40);
  local_14 = FUN_00583590(local_18,&local_2c);
  local_4c = local_14 + 100 + local_20 * 100;
  local_8 = 0;
  local_3c = &local_4c;
  uVar4 = local_18;
  local_48 = local_4c;
  local_38 = local_4c;
  uVar3 = _Unfancy<>(local_20 * 100 + local_14,param_2,uVar1,local_18,local_14,local_2c);
  FUN_005841b0(local_18,uVar3);
  *local_3c = local_20 * 100 + local_14;
  if (param_1 == *local_28) {
    FUN_00608500(*local_24,*local_28,local_14,local_18);
  }
  else {
    FUN_00608500(*local_24,param_1,local_14,local_18);
    *local_3c = local_14;
    FUN_00608500(param_1,*local_28,local_14 + 100 + local_20 * 100,local_18);
  }
  uVar3 = 0;
  FUN_00604ac0(local_14,local_40,local_2c);
  local_44 = local_20 * 100 + local_14;
  local_8 = 0xffffffff;
  FUN_006023c0(uVar1,uVar4,uVar3);
  ExceptionList = local_10;
  return local_44;
}


/* ==== 005ff970  FUN_005ff970  size=92 ==== */

int FUN_005ff970(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  int *piVar2;
  
  piVar2 = (int *)(in_ECX + 4);
  FUN_006085b0(*piVar2,param_1);
  FUN_004023d0(*piVar2,*piVar2);
  iVar1 = *piVar2;
  *piVar2 = *piVar2 + 0x30;
  return iVar1;
}


/* ==== 005ff9d0  FUN_005ff9d0  size=461 ==== */

int FUN_005ff9d0(int param_1,undefined4 param_2)

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
  puStack_c = &LAB_00721b3d;
  local_10 = ExceptionList;
  uVar1 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_18 = FUN_00401c60(uVar1);
  local_30 = local_1c;
  local_24 = local_1c;
  local_28 = local_1c + 1;
  local_20 = (param_1 - *local_1c) / 0x30;
  local_34 = (*local_28 - *local_1c) / 0x30;
  iVar2 = FUN_00429f00();
  if (local_34 == iVar2) {
    FUN_00401c80();
  }
  local_40 = local_34 + 1;
  local_2c = FUN_00526f00(local_40);
  local_14 = FUN_0042c2d0(local_18,&local_2c);
  local_4c = local_14 + 0x30 + local_20 * 0x30;
  local_8 = 0;
  local_3c = &local_4c;
  uVar4 = local_18;
  local_48 = local_4c;
  local_38 = local_4c;
  uVar3 = _Unfancy<>(local_20 * 0x30 + local_14,param_2,uVar1,local_18,local_14,local_2c);
  FUN_005841e0(local_18,uVar3);
  *local_3c = local_20 * 0x30 + local_14;
  if (param_1 == *local_28) {
    FUN_006085f0(*local_24,*local_28,local_14,local_18);
  }
  else {
    FUN_006085f0(*local_24,param_1,local_14,local_18);
    *local_3c = local_14;
    FUN_006085f0(param_1,*local_28,local_14 + 0x30 + local_20 * 0x30,local_18);
  }
  uVar3 = 0;
  FUN_00604b70(local_14,local_40,local_2c);
  local_44 = local_20 * 0x30 + local_14;
  local_8 = 0xffffffff;
  FUN_00602370(uVar1,uVar4,uVar3);
  ExceptionList = local_10;
  return local_44;
}


/* ==== 005ffba0  FUN_005ffba0  size=315 ==== */

void FUN_005ffba0(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int local_3c;
  int *local_38;
  int *local_34;
  int *local_30;
  int local_2c;
  int *local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00721b6d;
  local_10 = ExceptionList;
  uVar1 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar2 = FUN_00490370(uVar1);
  if (uVar2 < param_1) {
    FUN_00401c80();
  }
  local_18 = FUN_00401c60();
  local_28 = local_14;
  local_34 = local_14;
  local_30 = local_14 + 1;
  local_2c = (*local_30 - *local_14) / 0x34;
  local_24 = FUN_00521110(param_1);
  local_1c = FUN_00526240(local_18,&local_24);
  local_3c = local_2c * 0x34 + local_1c;
  local_8 = 0;
  local_38 = &local_3c;
  uVar4 = local_18;
  local_20 = local_3c;
  iVar3 = FUN_005ffce0(local_3c,param_1 - local_2c,local_18,uVar1,local_18,local_1c,local_24,
                       local_3c);
  *local_38 = iVar3;
  FUN_006086d0(*local_34,*local_30,local_1c,local_18);
  uVar5 = 0;
  FUN_00604c20(local_1c,param_1,local_24);
  local_8 = 0xffffffff;
  FUN_00602320(uVar1,uVar4,uVar5);
  ExceptionList = local_10;
  return;
}


/* ==== 005ffce0  FUN_005ffce0  size=132 ==== */

undefined4 FUN_005ffce0(undefined4 param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00721b9d;
  local_10 = ExceptionList;
  uVar1 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_00403180(param_1,param_3);
  local_8 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_00608780();
  }
  uVar2 = FUN_00403130(uVar1);
  local_8 = 0xffffffff;
  FUN_00526710();
  ExceptionList = local_10;
  return uVar2;
}


/* ==== 005ffd70  FUN_005ffd70  size=110 ==== */

int FUN_005ffd70(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  int *piVar3;
  
  piVar3 = (int *)(in_ECX + 4);
  uVar2 = _Unfancy<>(*piVar3,param_1);
  uVar2 = FUN_00401c60(uVar2);
  FUN_0052ab80(uVar2);
  FUN_004023d0(*piVar3,*piVar3);
  iVar1 = *piVar3;
  *piVar3 = *piVar3 + 0x34;
  return iVar1;
}


/* ==== 005ffde0  FUN_005ffde0  size=461 ==== */

int FUN_005ffde0(int param_1,undefined4 param_2)

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
  puStack_c = &LAB_00721bcd;
  local_10 = ExceptionList;
  uVar1 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_18 = FUN_00401c60(uVar1);
  local_30 = local_1c;
  local_24 = local_1c;
  local_28 = local_1c + 1;
  local_20 = (param_1 - *local_1c) / 0x34;
  local_34 = (*local_28 - *local_1c) / 0x34;
  iVar2 = FUN_00490370();
  if (local_34 == iVar2) {
    FUN_00401c80();
  }
  local_40 = local_34 + 1;
  local_2c = FUN_00521110(local_40);
  local_14 = FUN_00526240(local_18,&local_2c);
  local_4c = local_14 + 0x34 + local_20 * 0x34;
  local_8 = 0;
  local_3c = &local_4c;
  uVar4 = local_18;
  local_48 = local_4c;
  local_38 = local_4c;
  uVar3 = _Unfancy<>(local_20 * 0x34 + local_14,param_2,uVar1,local_18,local_14,local_2c);
  FUN_0052ab80(local_18,uVar3);
  *local_3c = local_20 * 0x34 + local_14;
  if (param_1 == *local_28) {
    FUN_006086d0(*local_24,*local_28,local_14,local_18);
  }
  else {
    FUN_006086d0(*local_24,param_1,local_14,local_18);
    *local_3c = local_14;
    FUN_006086d0(param_1,*local_28,local_14 + 0x34 + local_20 * 0x34,local_18);
  }
  uVar3 = 0;
  FUN_00604c20(local_14,local_40,local_2c);
  local_44 = local_20 * 0x34 + local_14;
  local_8 = 0xffffffff;
  FUN_00602320(uVar1,uVar4,uVar3);
  ExceptionList = local_10;
  return local_44;
}


/* ==== 005fffb0  FUN_005fffb0  size=315 ==== */

void FUN_005fffb0(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int local_3c;
  int *local_38;
  int *local_34;
  int *local_30;
  int local_2c;
  int *local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00721bfd;
  local_10 = ExceptionList;
  uVar1 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar2 = FUN_00490370(uVar1);
  if (uVar2 < param_1) {
    FUN_00401c80();
  }
  local_18 = FUN_00401c60();
  local_28 = local_14;
  local_34 = local_14;
  local_30 = local_14 + 1;
  local_2c = (*local_30 - *local_14) / 0x34;
  local_24 = FUN_00521110(param_1);
  local_1c = FUN_00526240(local_18,&local_24);
  local_3c = local_2c * 0x34 + local_1c;
  local_8 = 0;
  local_38 = &local_3c;
  uVar4 = local_18;
  local_20 = local_3c;
  iVar3 = FUN_006000f0(local_3c,param_1 - local_2c,local_18,uVar1,local_18,local_1c,local_24,
                       local_3c);
  *local_38 = iVar3;
  FUN_006087c0(*local_34,*local_30,local_1c,local_18);
  uVar5 = 0;
  FUN_00604cd0(local_1c,param_1,local_24);
  local_8 = 0xffffffff;
  FUN_006022d0(uVar1,uVar4,uVar5);
  ExceptionList = local_10;
  return;
}

