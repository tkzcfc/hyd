/* Auto-decompiled pseudo-code from game.exe / unclassified_0x00400000_0x004fffff part 3/3 */
/* NOT original source. Bucketed by evidence (strings/imports/call-graph), not raw address. */

/* ==== 004c3910  FUN_004c3910  size=487 ==== */

int FUN_004c3910(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int in_ECX;
  int local_4c;
  
  if (param_1 != param_2) {
    iVar3 = *(int *)(in_ECX + 4);
    iVar4 = *(int *)(in_ECX + 0xc);
    FUN_0042ace0(in_ECX + 4,param_1);
    iVar8 = *(int *)(param_1 + 4);
    uVar6 = _Unfancy<>(local_4c + 8);
    iVar7 = FUN_0042a7d0(uVar6);
    piVar1 = (int *)(iVar4 + iVar7 * 8);
    piVar2 = (int *)(iVar4 + 4 + iVar7 * 8);
    iVar7 = *piVar1;
    iVar5 = *piVar2;
    do {
      FUN_004c3f30();
      if (local_4c == iVar5) {
        if (iVar7 == local_4c) {
          *piVar1 = iVar3;
          *piVar2 = iVar3;
        }
        else {
          *piVar2 = iVar8;
        }
        do {
          if (local_4c == param_2) {
            FUN_0042ac60();
            return param_2;
          }
          uVar6 = _Unfancy<>(local_4c + 8);
          iVar8 = FUN_0042a7d0(uVar6);
          piVar1 = (int *)(iVar4 + iVar8 * 8);
          piVar2 = (int *)(iVar4 + 4 + iVar8 * 8);
          iVar8 = *piVar2;
          while (FUN_004c3f30(), local_4c != iVar8) {
            if (local_4c == param_2) {
              *piVar1 = local_4c;
              FUN_0042ac60();
              return param_2;
            }
          }
          *piVar1 = iVar3;
          *piVar2 = iVar3;
        } while( true );
      }
    } while (local_4c != param_2);
    if (iVar7 == local_4c) {
      *piVar1 = local_4c;
    }
    FUN_0042ac60();
  }
  return param_2;
}


/* ==== 004c3bc0  FUN_004c3bc0  size=74 ==== */

void FUN_004c3bc0(void)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  
  uVar1 = FUN_00401c60();
  FUN_00401710(uVar1);
  FUN_004c4550(uVar1,*in_ECX);
  FUN_004c45a0(uVar1,*in_ECX);
  return;
}


/* ==== 004c3c10  FUN_004c3c10  size=85 ==== */

void FUN_004c3c10(void)

{
  undefined4 uVar1;
  int *in_ECX;
  
  FUN_00401710();
  uVar1 = FUN_00401c60(*in_ECX);
  FUN_004c4550(uVar1);
  *(int *)*in_ECX = *in_ECX;
  *(int *)(*in_ECX + 4) = *in_ECX;
  in_ECX[1] = 0;
  return;
}


/* ==== 004c3d30  FUN_004c3d30  size=74 ==== */

void FUN_004c3d30(void)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  
  uVar1 = FUN_00401c60();
  FUN_00401710(uVar1);
  FUN_004c45e0(uVar1,*in_ECX);
  FUN_004c4630(uVar1,*in_ECX);
  return;
}


/* ==== 004c3e40  FUN_004c3e40  size=74 ==== */

void FUN_004c3e40(void)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  
  uVar1 = FUN_00401c60();
  FUN_00401710(uVar1);
  FUN_004c4670(uVar1,*in_ECX);
  FUN_004c46c0(uVar1,*in_ECX);
  return;
}


/* ==== 004c3e90  FUN_004c3e90  size=155 ==== */

void FUN_004c3e90(void)

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
    FUN_004c4700(*in_ECX,*piVar3,uVar1);
    FUN_00411d70(*in_ECX,(*piVar2 - *in_ECX) / 0x28);
    *in_ECX = 0;
    *piVar3 = 0;
    *piVar2 = 0;
  }
  return;
}


/* ==== 004c3f30  FUN_004c3f30  size=75 ==== */

void FUN_004c3f30(void)

{
  int *piVar1;
  undefined4 uVar2;
  int *in_ECX;
  
  piVar1 = (int *)in_ECX[2];
  in_ECX[2] = *piVar1;
  uVar2 = FUN_00401c60(piVar1);
  FUN_004c4770(uVar2);
  *(int *)(*in_ECX + 4) = *(int *)(*in_ECX + 4) + -1;
  return;
}


/* ==== 004c4160  allocate  size=34 ==== */

/* Library Function - Multiple Matches With Same Base Name
    public: char * __thiscall std::allocator<char>::allocate(unsigned int)
    public: unsigned short * __thiscall std::allocator<unsigned short>::allocate(unsigned int)
    public: struct std::_Container_proxy * __thiscall std::allocator<struct
   std::_Container_proxy>::allocate(unsigned int)
    public: wchar_t * __thiscall std::allocator<wchar_t>::allocate(unsigned int)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void allocate(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_004c47e0(param_1);
  FUN_00403080(uVar1);
  return;
}


/* 004c4190 npk_sound_path_join_soundpacks size=136 → moved to npk_img_resource.c (NPK/IMG pass; single copy) */

/* 004c4220 npk_sound_map_insert size=43 → moved to npk_img_resource.c (NPK/IMG pass; single copy) */

/* 004c4250 npk_sound_map_insert_commit size=32 → moved to npk_img_resource.c (NPK/IMG pass; single copy) */

/* ==== 004c42c0  FUN_004c42c0  size=75 ==== */

void FUN_004c42c0(undefined4 param_1)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) == *(int *)(in_ECX + 8)) {
    FUN_004c5150(*(int *)(in_ECX + 4),param_1);
  }
  else {
    FUN_004c50e0(param_1);
  }
  return;
}


/* ==== 004c4310  FUN_004c4310  size=339 ==== */

undefined4 FUN_004c4310(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined *puVar7;
  undefined1 local_40 [12];
  int local_34;
  undefined4 local_30;
  int local_2c;
  undefined1 local_28 [4];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_13;
  undefined1 local_12;
  undefined1 local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00714a2d;
  local_10 = ExceptionList;
  uVar2 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_20 = param_2;
  local_1c = FUN_0040f0e0(param_2);
  FUN_0040f280(&local_30,local_20,local_1c);
  if (local_2c == 0) {
    FUN_004c4920(uVar2);
    uVar3 = _Unfancy<>(&local_13);
    uVar4 = FUN_004072d0(local_28,param_2,uVar3);
    puVar7 = &DAT_0073f977;
    uVar5 = FUN_00401c60(&DAT_0073f977,uVar4);
    FUN_004c5320(uVar5,puVar7,uVar4,uVar3);
    local_8 = 0;
    cVar1 = FUN_00429580();
    if (cVar1 != '\0') {
      FUN_004c48e0();
      uVar3 = local_1c;
      uVar4 = _Unfancy<>(local_34 + 8,local_1c);
      puVar6 = (undefined4 *)FUN_0040f280(local_40,uVar4,uVar3);
      local_30 = *puVar6;
      local_2c = puVar6[1];
    }
    uVar3 = FUN_00406690();
    local_24 = FUN_00429670(local_1c,local_30,uVar3);
    local_12 = 1;
    FUN_004072a0(&local_24,&local_12);
    local_8 = 0xffffffff;
    FUN_004c4870();
  }
  else {
    local_11 = 0;
    FUN_004072a0(&local_2c,&local_11);
  }
  ExceptionList = local_10;
  return param_1;
}


/* ==== 004c4470  FUN_004c4470  size=75 ==== */

void FUN_004c4470(undefined4 param_1)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) == *(int *)(in_ECX + 8)) {
    FUN_004c5410(*(int *)(in_ECX + 4),param_1);
  }
  else {
    FUN_004c53b0(param_1);
  }
  return;
}


/* ==== 004c44c0  FUN_004c44c0  size=75 ==== */

void FUN_004c44c0(undefined4 param_1)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) == *(int *)(in_ECX + 8)) {
    FUN_004c5650(*(int *)(in_ECX + 4),param_1);
  }
  else {
    FUN_004c55e0(param_1);
  }
  return;
}


/* ==== 004c4550  FUN_004c4550  size=70 ==== */

void FUN_004c4550(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *local_8;
  
  *(undefined4 *)param_2[1] = 0;
  local_8 = (undefined4 *)*param_2;
  while (local_8 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*local_8;
    FUN_004c4770(param_1,local_8);
    local_8 = puVar1;
  }
  return;
}


/* ==== 004c45a0  FUN_004c45a0  size=50 ==== */

void FUN_004c45a0(undefined4 param_1,int param_2)

{
  FUN_004025f0(param_2);
  FUN_004025f0(param_2 + 4);
  FUN_004c4960(param_1,param_2,1);
  return;
}


/* ==== 004c45e0  FUN_004c45e0  size=70 ==== */

void FUN_004c45e0(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *local_8;
  
  *(undefined4 *)param_2[1] = 0;
  local_8 = (undefined4 *)*param_2;
  while (local_8 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*local_8;
    FUN_004c5820(param_1,local_8);
    local_8 = puVar1;
  }
  return;
}


/* ==== 004c4630  FUN_004c4630  size=50 ==== */

void FUN_004c4630(undefined4 param_1,int param_2)

{
  FUN_004025f0(param_2);
  FUN_004025f0(param_2 + 4);
  FUN_004c4980(param_1,param_2,1);
  return;
}


/* ==== 004c4670  FUN_004c4670  size=70 ==== */

void FUN_004c4670(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *local_8;
  
  *(undefined4 *)param_2[1] = 0;
  local_8 = (undefined4 *)*param_2;
  while (local_8 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*local_8;
    FUN_004c5890(param_1,local_8);
    local_8 = puVar1;
  }
  return;
}


/* ==== 004c46c0  FUN_004c46c0  size=50 ==== */

void FUN_004c46c0(undefined4 param_1,int param_2)

{
  FUN_004025f0(param_2);
  FUN_004025f0(param_2 + 4);
  FUN_004c49a0(param_1,param_2,1);
  return;
}


/* ==== 004c4700  FUN_004c4700  size=95 ==== */

void FUN_004c4700(int param_1,int param_2,void *param_3)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0070bdc0;
  local_10 = ExceptionList;
  uVar1 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  for (; param_1 != param_2; param_1 = param_1 + 0x28) {
    _Unfancy<>(param_1,uVar1);
    __ExceptionPtrDestroy(param_3);
  }
  ExceptionList = local_10;
  return;
}


/* ==== 004c4770  FUN_004c4770  size=93 ==== */

void FUN_004c4770(void *param_1,int param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0070bdc0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  _Unfancy<>(param_2 + 8,DAT_007c5940 ^ (uint)&stack0xfffffffc);
  __ExceptionPtrDestroy(param_1);
  FUN_004c45a0(param_1,param_2);
  ExceptionList = local_10;
  return;
}


/* ==== 004c47e0  FUN_004c47e0  size=40 ==== */

int FUN_004c47e0(uint param_1)

{
  if (0x2c8590b < param_1) {
    FUN_004015f0(0x2c8590b);
  }
  return param_1 * 0x5c;
}


/* ==== 004c4810  FUN_004c4810  size=82 ==== */

int FUN_004c4810(int param_1)

{
  int in_ECX;
  
  FUN_00405450(param_1);
  FUN_00405450(param_1 + 0x18);
  *(undefined4 *)(in_ECX + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(in_ECX + 0x38) = *(undefined4 *)(param_1 + 0x38);
  return in_ECX;
}


/* ==== 004c4870  FUN_004c4870  size=104 ==== */

void FUN_004c4870(void)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0070c170;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (in_ECX[1] != 0) {
    _Unfancy<>(in_ECX[1] + 8,DAT_007c5940 ^ (uint)&stack0xfffffffc);
    __ExceptionPtrDestroy((void *)*in_ECX);
  }
  FUN_004c49c0();
  ExceptionList = local_10;
  return;
}


/* ==== 004c48e0  FUN_004c48e0  size=53 ==== */

void FUN_004c48e0(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  uVar1 = FUN_004c4c40(*(int *)(in_ECX + 8) + 1);
  FUN_004c49f0(uVar1);
  return;
}


/* ==== 004c4920  FUN_004c4920  size=49 ==== */

void FUN_004c4920(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 8);
  iVar2 = FUN_0044fbc0();
  if (iVar1 == iVar2) {
    FUN_006e38d3("unordered_map/set too long");
  }
  return;
}


/* ==== 004c4960  FUN_004c4960  size=22 ==== */

void FUN_004c4960(undefined4 param_1,undefined4 param_2,int param_3)

{
  _Deallocate<>(param_2,param_3 * 0x24);
  return;
}


/* ==== 004c4980  FUN_004c4980  size=22 ==== */

void FUN_004c4980(undefined4 param_1,undefined4 param_2,int param_3)

{
  _Deallocate<>(param_2,param_3 * 0x5c);
  return;
}


/* ==== 004c49a0  FUN_004c49a0  size=22 ==== */

void FUN_004c49a0(undefined4 param_1,undefined4 param_2,int param_3)

{
  _Deallocate<>(param_2,param_3 * 0x28);
  return;
}


/* ==== 004c49c0  FUN_004c49c0  size=40 ==== */

void FUN_004c49c0(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) != 0) {
    FUN_0044ea30(*(undefined4 *)(in_ECX + 4),1);
  }
  return;
}


/* ==== 004c49f0  FUN_004c49f0  size=582 ==== */

void FUN_004c49f0(uint param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 local_1c;
  undefined4 *local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  uVar4 = FUN_0042a720();
  uVar5 = FUN_00414f10(uVar4 >> 1);
  uVar4 = 1 << ((byte)uVar5 & 0x1f);
  if (uVar4 < param_1) {
    FUN_006e38d3("invalid hash bucket count");
  }
  bVar2 = FUN_00414f30(param_1);
  iVar8 = 1 << (bVar2 & 0x1f);
  FUN_0042a7f0(&local_1c);
  FUN_0042a650(iVar8 << 1,local_1c);
  *(int *)(local_8 + 0x18) = iVar8 + -1;
  *(int *)(local_8 + 0x1c) = iVar8;
  FUN_00409400(local_8);
  FUN_0042a810(&local_c);
  do {
    local_14 = local_c;
    cVar3 = FUN_0040d2d0(&local_1c);
    if (cVar3 == '\0') {
      FUN_004c4cb0(uVar4,uVar5,0);
      return;
    }
    FUN_0042a560();
    uVar6 = FUN_0042a580();
    uVar6 = _Unfancy<>(uVar6);
    iVar8 = FUN_0042a7d0(uVar6);
    local_18 = (undefined4 *)(*(int *)(local_8 + 0xc) + iVar8 * 8);
    puVar1 = (undefined4 *)(*(int *)(local_8 + 0xc) + 4 + iVar8 * 8);
    cVar3 = FUN_0040d970(&local_1c);
    if (cVar3 == '\0') {
      local_10 = *puVar1;
      uVar7 = FUN_0042a620();
      uVar7 = _Unfancy<>(uVar7);
      cVar3 = FUN_00410b50(uVar6,uVar7);
      if (cVar3 == '\0') {
        FUN_0042a600();
        cVar3 = FUN_0040d2d0(&local_c);
        if (cVar3 != '\0') {
          FUN_0042a830(local_10,local_c,local_14);
        }
        *puVar1 = local_c;
      }
      else {
        do {
          cVar3 = FUN_0040d970(&local_10);
          if (cVar3 != '\0') {
            FUN_0042a830(local_10,local_c,local_14);
            *local_18 = local_c;
            goto LAB_004c4aa1;
          }
          FUN_0042a5e0();
          uVar7 = FUN_0042a620();
          uVar7 = _Unfancy<>(uVar7);
          cVar3 = FUN_00410b50(uVar6,uVar7);
        } while (cVar3 != '\0');
        FUN_0042a600();
        FUN_0042a830(local_10,local_c,local_14);
      }
    }
    else {
      *local_18 = local_c;
      *puVar1 = local_c;
    }
LAB_004c4aa1:
    local_c = local_14;
  } while( true );
}


/* ==== 004c4c40  FUN_004c4c40  size=107 ==== */

uint FUN_004c4c40(undefined4 param_1)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint local_14 [3];
  uint local_8;
  
  local_8 = FUN_0042a290();
  local_14[0] = FUN_0042a760(param_1);
  puVar2 = std::_Max_value<unsigned_int>((uint *)&DAT_007838bc,local_14);
  uVar1 = *puVar2;
  uVar3 = local_8;
  if (((local_8 < uVar1) && (uVar3 = uVar1, local_8 < 0x200)) && (uVar1 <= local_8 << 3)) {
    uVar3 = local_8 << 3;
  }
  return uVar3;
}


/* ==== 004c4cb0  FUN_004c4cb0  size=30 ==== */

void FUN_004c4cb0(void)

{
  int *in_ECX;
  
  if (*in_ECX != 0) {
    FUN_004c36c0();
  }
  return;
}


/* 004c4cd0 npk_sound_entry_assign_for_insert size=100 → moved to npk_img_resource.c (NPK/IMG pass; single copy) */

/* 004c4d40 npk_sound_entry_copy size=138 → moved to npk_img_resource.c (NPK/IMG pass; single copy) */

/* ==== 004c4dd0  FUN_004c4dd0  size=354 ==== */

undefined4 FUN_004c4dd0(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined1 local_48 [12];
  int local_3c;
  undefined4 local_38;
  int local_34;
  undefined1 local_30 [4];
  undefined1 local_2c [4];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_12;
  undefined1 local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00714a5d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_20 = _Unfancy<>(param_2,DAT_007c5940 ^ (uint)&stack0xfffffffc);
  local_1c = FUN_0040f0e0(local_20);
  FUN_0040f280(&local_38,local_20,local_1c);
  if (local_34 == 0) {
    FUN_004c5be0();
    uVar2 = FUN_00401c60(param_2);
    FUN_004c6ab0(uVar2,param_2);
    local_8 = 0;
    cVar1 = FUN_00429580();
    if (cVar1 != '\0') {
      FUN_004c5ba0();
      uVar2 = local_1c;
      uVar3 = _Unfancy<>(local_3c + 8,local_1c);
      puVar4 = (undefined4 *)FUN_0040f280(local_48,uVar3,uVar2);
      local_38 = *puVar4;
      local_34 = puVar4[1];
    }
    uVar2 = FUN_00406690();
    uVar2 = FUN_00429670(local_1c,local_38,uVar2);
    local_28 = FUN_0040f070(local_30,uVar2);
    local_12 = 1;
    FUN_004c6a80(local_28,&local_12);
    local_8 = 0xffffffff;
    FUN_004c5a50();
  }
  else {
    local_24 = FUN_0040f070(local_2c,local_34);
    local_11 = 0;
    FUN_004c6a80(local_24,&local_11);
  }
  ExceptionList = local_10;
  return param_1;
}


/* ==== 004c4f40  FUN_004c4f40  size=45 ==== */

int FUN_004c4f40(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int in_ECX;
  
  FUN_00405520(param_1);
  uVar1 = param_2[1];
  *(undefined4 *)(in_ECX + 0x18) = *param_2;
  *(undefined4 *)(in_ECX + 0x1c) = uVar1;
  return in_ECX;
}


/* ==== 004c4f70  FUN_004c4f70  size=354 ==== */

undefined4 FUN_004c4f70(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined1 local_48 [12];
  int local_3c;
  undefined4 local_38;
  int local_34;
  undefined1 local_30 [4];
  undefined1 local_2c [4];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_12;
  undefined1 local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00714a8d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_20 = _Unfancy<>(param_2,DAT_007c5940 ^ (uint)&stack0xfffffffc);
  local_1c = FUN_0040f0e0(local_20);
  FUN_0040f280(&local_38,local_20,local_1c);
  if (local_34 == 0) {
    FUN_004c5c60();
    uVar2 = FUN_00401c60(param_2);
    FUN_004c6b40(uVar2,param_2);
    local_8 = 0;
    cVar1 = FUN_00429580();
    if (cVar1 != '\0') {
      FUN_004c5c20();
      uVar2 = local_1c;
      uVar3 = _Unfancy<>(local_3c + 8,local_1c);
      puVar4 = (undefined4 *)FUN_0040f280(local_48,uVar3,uVar2);
      local_38 = *puVar4;
      local_34 = puVar4[1];
    }
    uVar2 = FUN_00406690();
    uVar2 = FUN_00429670(local_1c,local_38,uVar2);
    local_28 = FUN_0040f070(local_30,uVar2);
    local_12 = 1;
    FUN_004c6a80(local_28,&local_12);
    local_8 = 0xffffffff;
    FUN_004c59e0();
  }
  else {
    local_24 = FUN_0040f070(local_2c,local_34);
    local_11 = 0;
    FUN_004c6a80(local_24,&local_11);
  }
  ExceptionList = local_10;
  return param_1;
}


/* ==== 004c50e0  FUN_004c50e0  size=110 ==== */

int FUN_004c50e0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  int *piVar3;
  
  piVar3 = (int *)(in_ECX + 4);
  uVar2 = _Unfancy<>(*piVar3,param_1);
  uVar2 = FUN_00401c60(uVar2);
  FUN_004c6bd0(uVar2);
  FUN_004023d0(*piVar3,*piVar3);
  iVar1 = *piVar3;
  *piVar3 = *piVar3 + 0x20;
  return iVar1;
}


/* ==== 004c5150  FUN_004c5150  size=457 ==== */

int FUN_004c5150(int param_1,undefined4 param_2)

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
  puStack_c = &LAB_00714abd;
  local_10 = ExceptionList;
  uVar1 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_18 = FUN_00401c60(uVar1);
  local_30 = local_1c;
  local_24 = local_1c;
  local_28 = local_1c + 1;
  local_20 = param_1 - *local_1c >> 5;
  local_34 = *local_28 - *local_1c >> 5;
  iVar2 = FUN_00406f30();
  if (local_34 == iVar2) {
    FUN_00401c80();
  }
  local_40 = local_34 + 1;
  local_2c = FUN_0042c950(local_40);
  local_14 = FUN_0042ce60(local_18,&local_2c);
  local_4c = local_14 + 0x20 + local_20 * 0x20;
  local_8 = 0;
  local_3c = &local_4c;
  uVar4 = local_18;
  local_48 = local_4c;
  local_38 = local_4c;
  uVar3 = _Unfancy<>(local_20 * 0x20 + local_14,param_2,uVar1,local_18,local_14,local_2c);
  FUN_004c6bd0(local_18,uVar3);
  *local_3c = local_20 * 0x20 + local_14;
  if (param_1 == *local_28) {
    FUN_004c6c00(*local_24,*local_28,local_14,local_18);
  }
  else {
    FUN_004c6c00(*local_24,param_1,local_14,local_18);
    *local_3c = local_14;
    FUN_004c6c00(param_1,*local_28,local_14 + 0x20 + local_20 * 0x20,local_18);
  }
  uVar3 = 0;
  FUN_004c5af0(local_14,local_40,local_2c);
  local_44 = local_20 * 0x20 + local_14;
  local_8 = 0xffffffff;
  FUN_004c5990(uVar1,uVar4,uVar3);
  ExceptionList = local_10;
  return local_44;
}


/* ==== 004c5320  FUN_004c5320  size=137 ==== */

undefined4 *
FUN_004c5320(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00714aed;
  local_10 = ExceptionList;
  uVar1 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_00407de0(param_1);
  local_8 = 0;
  FUN_004c5ac0(uVar1);
  uVar2 = _Unfancy<>(in_ECX[1] + 8,param_2,param_3,param_4);
  FUN_00496250(*in_ECX,uVar2);
  ExceptionList = local_10;
  return in_ECX;
}


/* ==== 004c53b0  FUN_004c53b0  size=92 ==== */

int FUN_004c53b0(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  int *piVar2;
  
  piVar2 = (int *)(in_ECX + 4);
  FUN_004c6cb0(*piVar2,param_1);
  FUN_004023d0(*piVar2,*piVar2);
  iVar1 = *piVar2;
  *piVar2 = *piVar2 + 8;
  return iVar1;
}


/* ==== 004c5410  FUN_004c5410  size=451 ==== */

int FUN_004c5410(int param_1,undefined4 param_2)

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
  puStack_c = &LAB_00714b1d;
  local_10 = ExceptionList;
  uVar1 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_18 = FUN_00401c60(uVar1);
  local_30 = local_1c;
  local_24 = local_1c;
  local_28 = local_1c + 1;
  local_20 = param_1 - *local_1c >> 3;
  local_34 = *local_28 - *local_1c >> 3;
  iVar2 = FUN_00401d60();
  if (local_34 == iVar2) {
    FUN_00401c80();
  }
  local_40 = local_34 + 1;
  local_2c = FUN_004035d0(local_40);
  local_14 = FUN_00402d00(local_18,&local_2c);
  local_4c = local_14 + 8 + local_20 * 8;
  local_8 = 0;
  local_3c = &local_4c;
  uVar4 = local_18;
  local_48 = local_4c;
  local_38 = local_4c;
  uVar3 = _Unfancy<>(local_14 + local_20 * 8,param_2,uVar1,local_18,local_14,local_2c);
  FUN_00403660(local_18,uVar3);
  *local_3c = local_14 + local_20 * 8;
  if (param_1 == *local_28) {
    FUN_00402d30(*local_24,*local_28,local_14,local_18);
  }
  else {
    FUN_00402d30(*local_24,param_1,local_14,local_18);
    *local_3c = local_14;
    FUN_00402d30(param_1,*local_28,local_14 + 8 + local_20 * 8,local_18);
  }
  uVar3 = 0;
  FUN_004029c0(local_14,local_40,local_2c);
  local_44 = local_14 + local_20 * 8;
  local_8 = 0xffffffff;
  FUN_00403580(uVar1,uVar4,uVar3);
  ExceptionList = local_10;
  return local_44;
}


/* ==== 004c55e0  FUN_004c55e0  size=110 ==== */

int FUN_004c55e0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  int *piVar3;
  
  piVar3 = (int *)(in_ECX + 4);
  uVar2 = _Unfancy<>(*piVar3,param_1);
  uVar2 = FUN_00401c60(uVar2);
  FUN_004c6cf0(uVar2);
  FUN_004023d0(*piVar3,*piVar3);
  iVar1 = *piVar3;
  *piVar3 = *piVar3 + 0x28;
  return iVar1;
}


/* ==== 004c5650  FUN_004c5650  size=461 ==== */

int FUN_004c5650(int param_1,undefined4 param_2)

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
  puStack_c = &LAB_00714b4d;
  local_10 = ExceptionList;
  uVar1 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_18 = FUN_00401c60(uVar1);
  local_30 = local_1c;
  local_24 = local_1c;
  local_28 = local_1c + 1;
  local_20 = (param_1 - *local_1c) / 0x28;
  local_34 = (*local_28 - *local_1c) / 0x28;
  iVar2 = FUN_00429e50();
  if (local_34 == iVar2) {
    FUN_00401c80();
  }
  local_40 = local_34 + 1;
  local_2c = FUN_00429df0(local_40);
  local_14 = FUN_0042c2b0(local_18,&local_2c);
  local_4c = local_14 + 0x28 + local_20 * 0x28;
  local_8 = 0;
  local_3c = &local_4c;
  uVar4 = local_18;
  local_48 = local_4c;
  local_38 = local_4c;
  uVar3 = _Unfancy<>(local_20 * 0x28 + local_14,param_2,uVar1,local_18,local_14,local_2c);
  FUN_004c6cf0(local_18,uVar3);
  *local_3c = local_20 * 0x28 + local_14;
  if (param_1 == *local_28) {
    FUN_004c6d20(*local_24,*local_28,local_14,local_18);
  }
  else {
    FUN_004c6d20(*local_24,param_1,local_14,local_18);
    *local_3c = local_14;
    FUN_004c6d20(param_1,*local_28,local_14 + 0x28 + local_20 * 0x28,local_18);
  }
  uVar3 = 0;
  FUN_004c5ca0(local_14,local_40,local_2c);
  local_44 = local_20 * 0x28 + local_14;
  local_8 = 0xffffffff;
  FUN_004c5940(uVar1,uVar4,uVar3);
  ExceptionList = local_10;
  return local_44;
}


/* ==== 004c5820  FUN_004c5820  size=93 ==== */

void FUN_004c5820(void *param_1,int param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0070bdc0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  _Unfancy<>(param_2 + 8,DAT_007c5940 ^ (uint)&stack0xfffffffc);
  __ExceptionPtrDestroy(param_1);
  FUN_004c4630(param_1,param_2);
  ExceptionList = local_10;
  return;
}


/* ==== 004c5890  FUN_004c5890  size=93 ==== */

void FUN_004c5890(void *param_1,int param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0070bdc0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  _Unfancy<>(param_2 + 8,DAT_007c5940 ^ (uint)&stack0xfffffffc);
  __ExceptionPtrDestroy(param_1);
  FUN_004c46c0(param_1,param_2);
  ExceptionList = local_10;
  return;
}


/* ==== 004c5910  FID_conflict:`scalar_deleting_destructor'  size=46 ==== */

/* Library Function - Multiple Matches With Different Base Names
    public: void * __thiscall std::function<bool __cdecl(unsigned int const &)>::`scalar deleting
   destructor'(unsigned int)
    public: void * __thiscall std::function<bool __cdecl(enum Concurrency::agent_status const
   &)>::`scalar deleting destructor'(unsigned int)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

undefined4 FID_conflict__scalar_deleting_destructor_(uint param_1)

{
  undefined4 in_ECX;
  
  FUN_004089b0();
  if ((param_1 & 1) != 0) {
    FUN_006e4b8e(in_ECX,0x28);
  }
  return in_ECX;
}


/* ==== 004c5940  FUN_004c5940  size=73 ==== */

void FUN_004c5940(void)

{
  undefined4 *in_ECX;
  
  if (in_ECX[1] != 0) {
    FUN_004c4700(in_ECX[3],in_ECX[4],*in_ECX);
    FUN_00411d70(in_ECX[1],in_ECX[2]);
  }
  return;
}


/* ==== 004c5990  FUN_004c5990  size=73 ==== */

void FUN_004c5990(void)

{
  undefined4 *in_ECX;
  
  if (in_ECX[1] != 0) {
    FUN_00428180(in_ECX[3],in_ECX[4],*in_ECX);
    FUN_00407060(in_ECX[1],in_ECX[2]);
  }
  return;
}


/* ==== 004c59e0  FUN_004c59e0  size=104 ==== */

void FUN_004c59e0(void)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0070c170;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (in_ECX[1] != 0) {
    _Unfancy<>(in_ECX[1] + 8,DAT_007c5940 ^ (uint)&stack0xfffffffc);
    __ExceptionPtrDestroy((void *)*in_ECX);
  }
  FUN_004c5d50();
  ExceptionList = local_10;
  return;
}


/* ==== 004c5a50  FUN_004c5a50  size=104 ==== */

void FUN_004c5a50(void)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0070c170;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (in_ECX[1] != 0) {
    _Unfancy<>(in_ECX[1] + 8,DAT_007c5940 ^ (uint)&stack0xfffffffc);
    __ExceptionPtrDestroy((void *)*in_ECX);
  }
  FUN_004c5d80();
  ExceptionList = local_10;
  return;
}


/* ==== 004c5ac0  FUN_004c5ac0  size=39 ==== */

void FUN_004c5ac0(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = 0;
  uVar1 = allocate(1);
  *(undefined4 *)(in_ECX + 4) = uVar1;
  return;
}


/* ==== 004c5af0  FUN_004c5af0  size=162 ==== */

void FUN_004c5af0(int param_1,int param_2,int param_3)

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
    FUN_00428180(*in_ECX,*piVar3,uVar1);
    FUN_00407060(*in_ECX,*piVar2 - *in_ECX >> 5);
  }
  *in_ECX = param_1;
  *piVar3 = param_2 * 0x20 + param_1;
  *piVar2 = param_3 * 0x20 + param_1;
  return;
}


/* ==== 004c5ba0  FUN_004c5ba0  size=53 ==== */

void FUN_004c5ba0(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  uVar1 = FUN_004c6000(*(int *)(in_ECX + 8) + 1);
  FUN_004c5db0(uVar1);
  return;
}


/* ==== 004c5be0  FUN_004c5be0  size=49 ==== */

void FUN_004c5be0(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 8);
  iVar2 = FUN_004c6070();
  if (iVar1 == iVar2) {
    FUN_006e38d3("unordered_map/set too long");
  }
  return;
}


/* ==== 004c5c20  FUN_004c5c20  size=53 ==== */

void FUN_004c5c20(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  uVar1 = FUN_004c6300(*(int *)(in_ECX + 8) + 1);
  FUN_004c60b0(uVar1);
  return;
}


/* ==== 004c5c60  FUN_004c5c60  size=49 ==== */

void FUN_004c5c60(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 8);
  iVar2 = FUN_00429e50();
  if (iVar1 == iVar2) {
    FUN_006e38d3("unordered_map/set too long");
  }
  return;
}


/* ==== 004c5ca0  FUN_004c5ca0  size=163 ==== */

void FUN_004c5ca0(int param_1,int param_2,int param_3)

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
    FUN_004c4700(*in_ECX,*piVar3,uVar1);
    FUN_00411d70(*in_ECX,(*piVar2 - *in_ECX) / 0x28);
  }
  *in_ECX = param_1;
  *piVar3 = param_2 * 0x28 + param_1;
  *piVar2 = param_3 * 0x28 + param_1;
  return;
}


/* ==== 004c5d50  FUN_004c5d50  size=40 ==== */

void FUN_004c5d50(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) != 0) {
    FUN_00411d70(*(undefined4 *)(in_ECX + 4),1);
  }
  return;
}


/* ==== 004c5d80  FUN_004c5d80  size=40 ==== */

void FUN_004c5d80(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) != 0) {
    FUN_004c63c0(*(undefined4 *)(in_ECX + 4),1);
  }
  return;
}


/* ==== 004c5db0  FUN_004c5db0  size=582 ==== */

void FUN_004c5db0(uint param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 local_1c;
  undefined4 *local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  uVar4 = FUN_0042a720();
  uVar5 = FUN_00414f10(uVar4 >> 1);
  uVar4 = 1 << ((byte)uVar5 & 0x1f);
  if (uVar4 < param_1) {
    FUN_006e38d3("invalid hash bucket count");
  }
  bVar2 = FUN_00414f30(param_1);
  iVar8 = 1 << (bVar2 & 0x1f);
  FUN_0042a7f0(&local_1c);
  FUN_0042a650(iVar8 << 1,local_1c);
  *(int *)(local_8 + 0x18) = iVar8 + -1;
  *(int *)(local_8 + 0x1c) = iVar8;
  FUN_00409400(local_8);
  FUN_0042a810(&local_c);
  do {
    local_14 = local_c;
    cVar3 = FUN_0040d2d0(&local_1c);
    if (cVar3 == '\0') {
      FUN_004c6390(uVar4,uVar5,0);
      return;
    }
    FUN_0042a560();
    uVar6 = FUN_0042a580();
    uVar6 = _Unfancy<>(uVar6);
    iVar8 = FUN_0042a7d0(uVar6);
    local_18 = (undefined4 *)(*(int *)(local_8 + 0xc) + iVar8 * 8);
    puVar1 = (undefined4 *)(*(int *)(local_8 + 0xc) + 4 + iVar8 * 8);
    cVar3 = FUN_0040d970(&local_1c);
    if (cVar3 == '\0') {
      local_10 = *puVar1;
      uVar7 = FUN_0042a620();
      uVar7 = _Unfancy<>(uVar7);
      cVar3 = FUN_00410b50(uVar6,uVar7);
      if (cVar3 == '\0') {
        FUN_0042a600();
        cVar3 = FUN_0040d2d0(&local_c);
        if (cVar3 != '\0') {
          FUN_0042a830(local_10,local_c,local_14);
        }
        *puVar1 = local_c;
      }
      else {
        do {
          cVar3 = FUN_0040d970(&local_10);
          if (cVar3 != '\0') {
            FUN_0042a830(local_10,local_c,local_14);
            *local_18 = local_c;
            goto LAB_004c5e61;
          }
          FUN_0042a5e0();
          uVar7 = FUN_0042a620();
          uVar7 = _Unfancy<>(uVar7);
          cVar3 = FUN_00410b50(uVar6,uVar7);
        } while (cVar3 != '\0');
        FUN_0042a600();
        FUN_0042a830(local_10,local_c,local_14);
      }
    }
    else {
      *local_18 = local_c;
      *puVar1 = local_c;
    }
LAB_004c5e61:
    local_c = local_14;
  } while( true );
}


/* ==== 004c6000  FUN_004c6000  size=107 ==== */

uint FUN_004c6000(undefined4 param_1)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint local_14 [3];
  uint local_8;
  
  local_8 = FUN_0042a290();
  local_14[0] = FUN_0042a760(param_1);
  puVar2 = std::_Max_value<unsigned_int>((uint *)&DAT_007838c4,local_14);
  uVar1 = *puVar2;
  uVar3 = local_8;
  if (((local_8 < uVar1) && (uVar3 = uVar1, local_8 < 0x200)) && (uVar1 <= local_8 << 3)) {
    uVar3 = local_8 << 3;
  }
  return uVar3;
}


/* ==== 004c6070  FUN_004c6070  size=59 ==== */

uint FUN_004c6070(void)

{
  undefined4 uVar1;
  uint *puVar2;
  uint local_10;
  uint local_c [2];
  
  uVar1 = FUN_00401c60();
  local_c[0] = FUN_004c63b0(uVar1);
  local_10 = FUN_00402140();
  puVar2 = std::_Max_value<unsigned_int>(&local_10,local_c);
  return *puVar2;
}


/* ==== 004c60b0  FUN_004c60b0  size=582 ==== */

void FUN_004c60b0(uint param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 local_1c;
  undefined4 *local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  uVar4 = FUN_0042a720();
  uVar5 = FUN_00414f10(uVar4 >> 1);
  uVar4 = 1 << ((byte)uVar5 & 0x1f);
  if (uVar4 < param_1) {
    FUN_006e38d3("invalid hash bucket count");
  }
  bVar2 = FUN_00414f30(param_1);
  iVar8 = 1 << (bVar2 & 0x1f);
  FUN_0042a7f0(&local_1c);
  FUN_0042a650(iVar8 << 1,local_1c);
  *(int *)(local_8 + 0x18) = iVar8 + -1;
  *(int *)(local_8 + 0x1c) = iVar8;
  FUN_00409400(local_8);
  FUN_0042a810(&local_c);
  do {
    local_14 = local_c;
    cVar3 = FUN_0040d2d0(&local_1c);
    if (cVar3 == '\0') {
      FUN_004c6370(uVar4,uVar5,0);
      return;
    }
    FUN_0042a560();
    uVar6 = FUN_0042a580();
    uVar6 = _Unfancy<>(uVar6);
    iVar8 = FUN_0042a7d0(uVar6);
    local_18 = (undefined4 *)(*(int *)(local_8 + 0xc) + iVar8 * 8);
    puVar1 = (undefined4 *)(*(int *)(local_8 + 0xc) + 4 + iVar8 * 8);
    cVar3 = FUN_0040d970(&local_1c);
    if (cVar3 == '\0') {
      local_10 = *puVar1;
      uVar7 = FUN_0042a620();
      uVar7 = _Unfancy<>(uVar7);
      cVar3 = FUN_00410b50(uVar6,uVar7);
      if (cVar3 == '\0') {
        FUN_0042a600();
        cVar3 = FUN_0040d2d0(&local_c);
        if (cVar3 != '\0') {
          FUN_0042a830(local_10,local_c,local_14);
        }
        *puVar1 = local_c;
      }
      else {
        do {
          cVar3 = FUN_0040d970(&local_10);
          if (cVar3 != '\0') {
            FUN_0042a830(local_10,local_c,local_14);
            *local_18 = local_c;
            goto LAB_004c6161;
          }
          FUN_0042a5e0();
          uVar7 = FUN_0042a620();
          uVar7 = _Unfancy<>(uVar7);
          cVar3 = FUN_00410b50(uVar6,uVar7);
        } while (cVar3 != '\0');
        FUN_0042a600();
        FUN_0042a830(local_10,local_c,local_14);
      }
    }
    else {
      *local_18 = local_c;
      *puVar1 = local_c;
    }
LAB_004c6161:
    local_c = local_14;
  } while( true );
}


/* ==== 004c6300  FUN_004c6300  size=107 ==== */

uint FUN_004c6300(undefined4 param_1)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint local_14 [3];
  uint local_8;
  
  local_8 = FUN_0042a290();
  local_14[0] = FUN_0042a760(param_1);
  puVar2 = std::_Max_value<unsigned_int>((uint *)&DAT_007838c0,local_14);
  uVar1 = *puVar2;
  uVar3 = local_8;
  if (((local_8 < uVar1) && (uVar3 = uVar1, local_8 < 0x200)) && (uVar1 <= local_8 << 3)) {
    uVar3 = local_8 << 3;
  }
  return uVar3;
}


/* ==== 004c6370  FUN_004c6370  size=30 ==== */

void FUN_004c6370(void)

{
  int *in_ECX;
  
  if (*in_ECX != 0) {
    FUN_004c6490();
  }
  return;
}


/* ==== 004c6390  FUN_004c6390  size=30 ==== */

void FUN_004c6390(void)

{
  int *in_ECX;
  
  if (*in_ECX != 0) {
    FUN_004c63e0();
  }
  return;
}


/* ==== 004c63b0  FUN_004c63b0  size=10 ==== */

undefined4 FUN_004c63b0(void)

{
  return 0x2c8590b;
}


/* ==== 004c63c0  FUN_004c63c0  size=30 ==== */

void FUN_004c63c0(undefined4 param_1,int param_2)

{
  _Deallocate<>(param_1,param_2 * 0x5c);
  return;
}


/* ==== 004c63e0  FUN_004c63e0  size=165 ==== */

void FUN_004c63e0(void)

{
  uint uVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined1 local_20 [4];
  undefined4 *local_1c;
  uint local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0070df40;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_18 = *(uint *)(in_ECX + 8);
  if (local_18 != 0) {
    local_14 = in_ECX;
    uVar1 = FUN_0042a290(DAT_007c5940 ^ (uint)&stack0xfffffffc);
    if (local_18 < uVar1 >> 3) {
      local_1c = *(undefined4 **)(local_14 + 4);
      FUN_004c6540(*local_1c,local_1c);
    }
    else {
      FUN_004c6730();
      uVar2 = FUN_0042a7f0(local_20);
      FUN_0042c4d0(*(undefined4 *)(local_14 + 0xc),*(undefined4 *)(local_14 + 0x10),uVar2);
    }
  }
  ExceptionList = local_10;
  return;
}


/* ==== 004c6490  FUN_004c6490  size=165 ==== */

void FUN_004c6490(void)

{
  uint uVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined1 local_20 [4];
  undefined4 *local_1c;
  uint local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0070df40;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_18 = *(uint *)(in_ECX + 8);
  if (local_18 != 0) {
    local_14 = in_ECX;
    uVar1 = FUN_0042a290(DAT_007c5940 ^ (uint)&stack0xfffffffc);
    if (local_18 < uVar1 >> 3) {
      local_1c = *(undefined4 **)(local_14 + 4);
      FUN_004c6790(*local_1c,local_1c);
    }
    else {
      FUN_004c6980();
      uVar2 = FUN_0042a7f0(local_20);
      FUN_0042c4d0(*(undefined4 *)(local_14 + 0xc),*(undefined4 *)(local_14 + 0x10),uVar2);
    }
  }
  ExceptionList = local_10;
  return;
}


/* ==== 004c6540  FUN_004c6540  size=487 ==== */

int FUN_004c6540(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int in_ECX;
  int local_4c;
  
  if (param_1 != param_2) {
    iVar3 = *(int *)(in_ECX + 4);
    iVar4 = *(int *)(in_ECX + 0xc);
    FUN_0042ace0(in_ECX + 4,param_1);
    iVar8 = *(int *)(param_1 + 4);
    uVar6 = _Unfancy<>(local_4c + 8);
    iVar7 = FUN_0042a7d0(uVar6);
    piVar1 = (int *)(iVar4 + iVar7 * 8);
    piVar2 = (int *)(iVar4 + 4 + iVar7 * 8);
    iVar7 = *piVar1;
    iVar5 = *piVar2;
    do {
      FUN_004c6a30();
      if (local_4c == iVar5) {
        if (iVar7 == local_4c) {
          *piVar1 = iVar3;
          *piVar2 = iVar3;
        }
        else {
          *piVar2 = iVar8;
        }
        do {
          if (local_4c == param_2) {
            FUN_0042ac60();
            return param_2;
          }
          uVar6 = _Unfancy<>(local_4c + 8);
          iVar8 = FUN_0042a7d0(uVar6);
          piVar1 = (int *)(iVar4 + iVar8 * 8);
          piVar2 = (int *)(iVar4 + 4 + iVar8 * 8);
          iVar8 = *piVar2;
          while (FUN_004c6a30(), local_4c != iVar8) {
            if (local_4c == param_2) {
              *piVar1 = local_4c;
              FUN_0042ac60();
              return param_2;
            }
          }
          *piVar1 = iVar3;
          *piVar2 = iVar3;
        } while( true );
      }
    } while (local_4c != param_2);
    if (iVar7 == local_4c) {
      *piVar1 = local_4c;
    }
    FUN_0042ac60();
  }
  return param_2;
}


/* ==== 004c6730  FUN_004c6730  size=85 ==== */

void FUN_004c6730(void)

{
  undefined4 uVar1;
  int *in_ECX;
  
  FUN_00401710();
  uVar1 = FUN_00401c60(*in_ECX);
  FUN_004c45e0(uVar1);
  *(int *)*in_ECX = *in_ECX;
  *(int *)(*in_ECX + 4) = *in_ECX;
  in_ECX[1] = 0;
  return;
}


/* ==== 004c6790  FUN_004c6790  size=487 ==== */

int FUN_004c6790(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int in_ECX;
  int local_4c;
  
  if (param_1 != param_2) {
    iVar3 = *(int *)(in_ECX + 4);
    iVar4 = *(int *)(in_ECX + 0xc);
    FUN_0042ace0(in_ECX + 4,param_1);
    iVar8 = *(int *)(param_1 + 4);
    uVar6 = _Unfancy<>(local_4c + 8);
    iVar7 = FUN_0042a7d0(uVar6);
    piVar1 = (int *)(iVar4 + iVar7 * 8);
    piVar2 = (int *)(iVar4 + 4 + iVar7 * 8);
    iVar7 = *piVar1;
    iVar5 = *piVar2;
    do {
      FUN_004c69e0();
      if (local_4c == iVar5) {
        if (iVar7 == local_4c) {
          *piVar1 = iVar3;
          *piVar2 = iVar3;
        }
        else {
          *piVar2 = iVar8;
        }
        do {
          if (local_4c == param_2) {
            FUN_0042ac60();
            return param_2;
          }
          uVar6 = _Unfancy<>(local_4c + 8);
          iVar8 = FUN_0042a7d0(uVar6);
          piVar1 = (int *)(iVar4 + iVar8 * 8);
          piVar2 = (int *)(iVar4 + 4 + iVar8 * 8);
          iVar8 = *piVar2;
          while (FUN_004c69e0(), local_4c != iVar8) {
            if (local_4c == param_2) {
              *piVar1 = local_4c;
              FUN_0042ac60();
              return param_2;
            }
          }
          *piVar1 = iVar3;
          *piVar2 = iVar3;
        } while( true );
      }
    } while (local_4c != param_2);
    if (iVar7 == local_4c) {
      *piVar1 = local_4c;
    }
    FUN_0042ac60();
  }
  return param_2;
}


/* ==== 004c6980  FUN_004c6980  size=85 ==== */

void FUN_004c6980(void)

{
  undefined4 uVar1;
  int *in_ECX;
  
  FUN_00401710();
  uVar1 = FUN_00401c60(*in_ECX);
  FUN_004c4670(uVar1);
  *(int *)*in_ECX = *in_ECX;
  *(int *)(*in_ECX + 4) = *in_ECX;
  in_ECX[1] = 0;
  return;
}


/* ==== 004c69e0  FUN_004c69e0  size=75 ==== */

void FUN_004c69e0(void)

{
  int *piVar1;
  undefined4 uVar2;
  int *in_ECX;
  
  piVar1 = (int *)in_ECX[2];
  in_ECX[2] = *piVar1;
  uVar2 = FUN_00401c60(piVar1);
  FUN_004c5890(uVar2);
  *(int *)(*in_ECX + 4) = *(int *)(*in_ECX + 4) + -1;
  return;
}


/* ==== 004c6a30  FUN_004c6a30  size=75 ==== */

void FUN_004c6a30(void)

{
  int *piVar1;
  undefined4 uVar2;
  int *in_ECX;
  
  piVar1 = (int *)in_ECX[2];
  in_ECX[2] = *piVar1;
  uVar2 = FUN_00401c60(piVar1);
  FUN_004c5820(uVar2);
  *(int *)(*in_ECX + 4) = *(int *)(*in_ECX + 4) + -1;
  return;
}


/* ==== 004c6a80  FUN_004c6a80  size=37 ==== */

undefined4 * FUN_004c6a80(undefined4 *param_1,undefined1 *param_2)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  *(undefined1 *)(in_ECX + 1) = *param_2;
  return in_ECX;
}


/* ==== 004c6ab0  FUN_004c6ab0  size=129 ==== */

undefined4 * FUN_004c6ab0(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00714b7d;
  local_10 = ExceptionList;
  uVar1 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_00407de0(param_1);
  local_8 = 0;
  FUN_004c6f50(uVar1);
  uVar2 = _Unfancy<>(in_ECX[1] + 8,param_2);
  FUN_004c6ff0(*in_ECX,uVar2);
  ExceptionList = local_10;
  return in_ECX;
}


/* ==== 004c6b40  FUN_004c6b40  size=129 ==== */

undefined4 * FUN_004c6b40(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00714bad;
  local_10 = ExceptionList;
  uVar1 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_00407de0(param_1);
  local_8 = 0;
  FUN_004c6f20(uVar1);
  uVar2 = _Unfancy<>(in_ECX[1] + 8,param_2);
  FUN_004c7020(*in_ECX,uVar2);
  ExceptionList = local_10;
  return in_ECX;
}


/* ==== 004c6bd0  FUN_004c6bd0  size=38 ==== */

void FUN_004c6bd0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_004013e0(0x20,param_2);
  FID_conflict_CMFCRestoredTabInfo(param_3);
  return;
}


/* ==== 004c6c00  FUN_004c6c00  size=168 ==== */

undefined4 FUN_004c6c00(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00714bdd;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = FUN_00402d20(&param_1,DAT_007c5940 ^ (uint)&stack0xfffffffc);
  iVar1 = FUN_00402d20(&param_2);
  FUN_00403180(param_3,param_4);
  local_8 = 0;
  for (; local_14 != iVar1; local_14 = local_14 + 0x20) {
    FUN_004c7050(local_14);
  }
  uVar2 = FUN_00403130();
  local_8 = 0xffffffff;
  FUN_004c6ef0();
  ExceptionList = local_10;
  return uVar2;
}


/* ==== 004c6cb0  FUN_004c6cb0  size=50 ==== */

void FUN_004c6cb0(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  uVar1 = _Unfancy<>(param_1);
  puVar2 = (undefined4 *)FUN_004013e0(8,uVar1);
  uVar1 = param_2[1];
  *puVar2 = *param_2;
  puVar2[1] = uVar1;
  return;
}


/* ==== 004c6cf0  FUN_004c6cf0  size=38 ==== */

void FUN_004c6cf0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_004013e0(0x28,param_2);
  FUN_004c6e40(param_3);
  return;
}


/* ==== 004c6d20  FUN_004c6d20  size=168 ==== */

undefined4 FUN_004c6d20(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00714c0d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = FUN_00402d20(&param_1,DAT_007c5940 ^ (uint)&stack0xfffffffc);
  iVar1 = FUN_00402d20(&param_2);
  FUN_00403180(param_3,param_4);
  local_8 = 0;
  for (; local_14 != iVar1; local_14 = local_14 + 0x28) {
    FUN_004c7090(local_14);
  }
  uVar2 = FUN_00403130();
  local_8 = 0xffffffff;
  FUN_004c6ec0();
  ExceptionList = local_10;
  return uVar2;
}


/* ==== 004c6de0  FID_conflict:CMFCRestoredTabInfo  size=88 ==== */

/* Library Function - Multiple Matches With Different Base Names
    public: __thiscall CMFCRestoredTabInfo::CMFCRestoredTabInfo(struct CMFCRestoredTabInfo const &)
    public: struct CMFCRestoredTabInfo & __thiscall CMFCRestoredTabInfo::operator=(struct
   CMFCRestoredTabInfo const &)
   
   Library: Visual Studio 2010 Debug */

int FID_conflict_CMFCRestoredTabInfo(int param_1)

{
  int in_ECX;
  
  FUN_004c6f80(param_1);
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(in_ECX + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(in_ECX + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  return in_ECX;
}


/* ==== 004c6e40  FUN_004c6e40  size=76 ==== */

int FUN_004c6e40(int param_1)

{
  int in_ECX;
  
  FUN_00405520(param_1);
  *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(in_ECX + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(in_ECX + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(in_ECX + 0x24) = *(undefined4 *)(param_1 + 0x24);
  return in_ECX;
}


/* ==== 004c6ec0  FUN_004c6ec0  size=39 ==== */

void FUN_004c6ec0(void)

{
  undefined4 *in_ECX;
  
  FUN_004c4700(*in_ECX,in_ECX[1],in_ECX[2]);
  return;
}


/* ==== 004c6ef0  FUN_004c6ef0  size=39 ==== */

void FUN_004c6ef0(void)

{
  undefined4 *in_ECX;
  
  FUN_00428180(*in_ECX,in_ECX[1],in_ECX[2]);
  return;
}


/* ==== 004c6f20  FUN_004c6f20  size=39 ==== */

void FUN_004c6f20(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = 0;
  uVar1 = allocate(1);
  *(undefined4 *)(in_ECX + 4) = uVar1;
  return;
}


/* ==== 004c6f50  FUN_004c6f50  size=39 ==== */

void FUN_004c6f50(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = 0;
  uVar1 = allocate(1);
  *(undefined4 *)(in_ECX + 4) = uVar1;
  return;
}


/* ==== 004c6f80  FUN_004c6f80  size=101 ==== */

undefined4 FUN_004c6f80(int *param_1)

{
  undefined4 uVar1;
  undefined4 in_ECX;
  undefined1 local_6;
  undefined1 local_5;
  
  uVar1 = FUN_00401c60();
  uVar1 = _Unfancy<>(&local_5,uVar1);
  _Vector_alloc<>(local_6,uVar1);
  FUN_004c70d0(param_1[1] - *param_1 >> 3,param_1,param_1 + 1);
  return in_ECX;
}


/* ==== 004c6ff0  FUN_004c6ff0  size=38 ==== */

void FUN_004c6ff0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_004013e0(0x54,param_2);
  FUN_004c71a0(param_3);
  return;
}


/* ==== 004c7020  FUN_004c7020  size=38 ==== */

void FUN_004c7020(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_004013e0(0x20,param_2);
  FUN_004c71d0(param_3);
  return;
}


/* ==== 004c7050  FUN_004c7050  size=63 ==== */

void FUN_004c7050(undefined4 param_1)

{
  undefined4 uVar1;
  int in_ECX;
  
  uVar1 = _Unfancy<>(*(undefined4 *)(in_ECX + 4),param_1);
  FUN_004c7200(*(undefined4 *)(in_ECX + 8),uVar1);
  *(int *)(in_ECX + 4) = *(int *)(in_ECX + 4) + 0x20;
  return;
}


/* ==== 004c7090  FUN_004c7090  size=63 ==== */

void FUN_004c7090(undefined4 param_1)

{
  undefined4 uVar1;
  int in_ECX;
  
  uVar1 = _Unfancy<>(*(undefined4 *)(in_ECX + 4),param_1);
  FUN_004c7230(*(undefined4 *)(in_ECX + 8),uVar1);
  *(int *)(in_ECX + 4) = *(int *)(in_ECX + 4) + 0x28;
  return;
}


/* ==== 004c70d0  FUN_004c70d0  size=197 ==== */

void FUN_004c70d0(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070bd9d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar1 = FUN_00401c60(DAT_007c5940 ^ (uint)&stack0xfffffffc);
  FUN_00401740(&DAT_0073f976,in_ECX);
  if (param_1 != 0) {
    FUN_00402a70(param_1);
    local_8 = 0;
    uVar1 = FUN_00402e10(*param_2,*param_3,*in_ECX,uVar1);
    in_ECX[1] = uVar1;
    local_8 = 0xffffffff;
    FUN_00402920();
  }
  FUN_00401710();
  ExceptionList = local_10;
  return;
}


/* ==== 004c71a0  FUN_004c71a0  size=47 ==== */

undefined4 FUN_004c71a0(int param_1)

{
  undefined4 in_ECX;
  
  FUN_00405450(param_1);
  FUN_004c4810(param_1 + 0x18);
  return in_ECX;
}


/* ==== 004c71d0  FUN_004c71d0  size=46 ==== */

int FUN_004c71d0(int param_1)

{
  undefined4 uVar1;
  int in_ECX;
  
  FUN_00405450(param_1);
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(in_ECX + 0x1c) = uVar1;
  return in_ECX;
}


/* ==== 004c7200  FUN_004c7200  size=38 ==== */

void FUN_004c7200(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_004013e0(0x20,param_2);
  FID_conflict_CMFCRestoredTabInfo(param_3);
  return;
}


/* ==== 004c7230  FUN_004c7230  size=38 ==== */

void FUN_004c7230(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_004013e0(0x28,param_2);
  FUN_004c72c0(param_3);
  return;
}


/* ==== 004c7260  FID_conflict:CMFCRestoredTabInfo  size=88 ==== */

/* Library Function - Multiple Matches With Different Base Names
    public: __thiscall CMFCRestoredTabInfo::CMFCRestoredTabInfo(struct CMFCRestoredTabInfo const &)
    public: struct CMFCRestoredTabInfo & __thiscall CMFCRestoredTabInfo::operator=(struct
   CMFCRestoredTabInfo const &)
   
   Library: Visual Studio 2010 Debug */

int FID_conflict_CMFCRestoredTabInfo(int param_1)

{
  int in_ECX;
  
  FUN_004c7310(param_1);
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(in_ECX + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(in_ECX + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  return in_ECX;
}


/* ==== 004c72c0  FUN_004c72c0  size=76 ==== */

int FUN_004c72c0(int param_1)

{
  int in_ECX;
  
  FUN_00405450(param_1);
  *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(in_ECX + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(in_ECX + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(in_ECX + 0x24) = *(undefined4 *)(param_1 + 0x24);
  return in_ECX;
}


/* ==== 004c7310  FUN_004c7310  size=163 ==== */

undefined4 FUN_004c7310(_Facet_base **param_1)

{
  undefined4 uVar1;
  _Facet_base **pp_Var2;
  _Facet_base **pp_Var3;
  _Facet_base **pp_Var4;
  _Facet_base *local_24;
  _Facet_base *local_20;
  _Facet_base *local_1c;
  _Facet_base *local_18;
  _Facet_base *local_14;
  _Facet_base *local_10;
  undefined4 local_c;
  undefined1 local_5;
  
  local_10 = (_Facet_base *)0x0;
  local_1c = std::exchange<std::_Facet_base*,std::_Facet_base*>(param_1 + 2,&local_10);
  local_14 = (_Facet_base *)0x0;
  local_20 = std::exchange<std::_Facet_base*,std::_Facet_base*>(param_1 + 1,&local_14);
  local_18 = (_Facet_base *)0x0;
  local_24 = std::exchange<std::_Facet_base*,std::_Facet_base*>(param_1,&local_18);
  pp_Var4 = &local_1c;
  pp_Var3 = &local_20;
  pp_Var2 = &local_24;
  uVar1 = FUN_00401c60(pp_Var2,pp_Var3,pp_Var4);
  FUN_00409d40(local_5,uVar1,pp_Var2,pp_Var3,pp_Var4);
  FUN_00401720(&DAT_0073f976);
  FUN_00401720(param_1);
  return local_c;
}


/* ==== 004c73c0  config_section_span_helper  size=307 ==== */

char * config_section_span_helper(char *param_1,char *param_2)

{
  char cVar1;
  
  do {
    while( true ) {
      while( true ) {
        if (param_1 == (char *)0x0) {
          return (char *)0x0;
        }
        if (param_2 <= param_1) {
          return (char *)0x0;
        }
        cVar1 = *param_1;
        if (cVar1 == '\0') {
          return (char *)0x0;
        }
        if ((((cVar1 != '\t') && (cVar1 != '\r')) && (cVar1 != '\n')) && (cVar1 != ' ')) break;
        param_1 = param_1 + 1;
      }
      if (*param_1 != '/') {
        return param_1;
      }
      if (param_2 <= param_1 + 1) {
        return (char *)0x0;
      }
      if (param_1[1] != '/') break;
      for (; ((param_1 < param_2 && (*param_1 != '\n')) && (*param_1 != '\r'));
          param_1 = param_1 + 1) {
      }
    }
    if (param_1[1] != '*') {
      return param_1;
    }
    for (param_1 = param_1 + 2; param_1 < param_2; param_1 = param_1 + 1) {
      if (((param_1 + 1 < param_2) && (*param_1 == '*')) && (param_1[1] == '/')) {
        param_1 = param_1 + 2;
        break;
      }
    }
  } while( true );
}


/* ==== 004c7510  FUN_004c7510  size=114 ==== */

undefined4 FUN_004c7510(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  uint uVar1;
  char *pcVar2;
  uint local_8;
  
  local_8 = 0;
  while( true ) {
    uVar1 = FUN_00410b30();
    if (uVar1 <= local_8) break;
    pcVar2 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator[]
                       (param_1,local_8);
    if ('@' < *pcVar2) {
      pcVar2 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator[]
                         (param_1,local_8);
      if (*pcVar2 < '[') {
        pcVar2 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator[]
                           (param_1,local_8);
        *pcVar2 = *pcVar2 + ' ';
      }
    }
    local_8 = local_8 + 1;
  }
  return 1;
}


/* ==== 004c7590  FUN_004c7590  size=151 ==== */

undefined4 FUN_004c7590(undefined4 param_1)

{
  uint uVar1;
  char *pcVar2;
  undefined4 uVar3;
  uint local_8;
  
  uVar3 = 0;
  local_8 = 0;
  while( true ) {
    uVar1 = FUN_00410b30(uVar3);
    if (uVar1 <= local_8) break;
    pcVar2 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator[]
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                        &stack0x00000008,local_8);
    if ('@' < *pcVar2) {
      pcVar2 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator[]
                         ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                          &stack0x00000008,local_8);
      if (*pcVar2 < '[') {
        pcVar2 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator[]
                           ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                            &stack0x00000008,local_8);
        *pcVar2 = *pcVar2 + ' ';
      }
    }
    local_8 = local_8 + 1;
  }
  FUN_00405450(&stack0x00000008);
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)&stack0x00000008);
  return param_1;
}


/* ==== 004c7630  FUN_004c7630  size=105 ==== */

char * FUN_004c7630(char *param_1)

{
  char cVar1;
  char *pcVar2;
  char *local_10;
  char *local_c;
  
  local_10 = param_1;
  do {
    cVar1 = *local_10;
    local_10 = local_10 + 1;
  } while (cVar1 != '\0');
  do {
    pcVar2 = local_10;
    local_c = pcVar2 + -1;
    local_10 = local_c;
  } while (*local_c != '/');
  *pcVar2 = '\0';
  return param_1;
}


/* ==== 004c76a0  FUN_004c76a0  size=149 ==== */

void FUN_004c76a0(char *param_1)

{
  char cVar1;
  char *pcVar2;
  char *local_10;
  char *local_c;
  
  local_10 = param_1;
  do {
    cVar1 = *local_10;
    local_10 = local_10 + 1;
  } while (cVar1 != '\0');
  do {
    local_c = local_10 + -1;
    pcVar2 = local_c;
    local_10 = local_c;
  } while (*local_c != '/');
  do {
    local_c = pcVar2 + -1;
    if (*local_c == '/') {
      *pcVar2 = '\0';
      return;
    }
    pcVar2 = local_c;
  } while (local_c != param_1);
  *param_1 = '\0';
  return;
}


/* ==== 004c7740  FUN_004c7740  size=943 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_004c7740(char *param_1,char *param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *local_350;
  char *local_34c;
  char *local_348;
  char *local_344;
  char *local_340;
  char *local_33c;
  char *local_338;
  char *local_334;
  char *local_330;
  char *local_32c;
  char *local_328;
  char *local_324;
  char *local_320;
  char *local_31c;
  char *local_318;
  char local_308 [256];
  char local_208 [256];
  char local_108 [256];
  uint local_8;
  
  local_8 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  local_318 = param_2;
  do {
    cVar1 = *local_318;
    local_318 = local_318 + 1;
  } while (cVar1 != '\0');
  if (local_318 == param_2 + 1) {
    local_34c = param_3;
    local_320 = param_1;
    do {
      cVar1 = *local_34c;
      *local_320 = cVar1;
      local_34c = local_34c + 1;
      local_320 = local_320 + 1;
    } while (cVar1 != '\0');
  }
  else {
    local_350 = param_2;
    local_324 = local_208;
    do {
      cVar1 = *local_350;
      *local_324 = cVar1;
      local_350 = local_350 + 1;
      local_324 = local_324 + 1;
    } while (cVar1 != '\0');
    local_33c = param_3;
    local_328 = local_108;
    do {
      cVar1 = *local_33c;
      *local_328 = cVar1;
      local_33c = local_33c + 1;
      local_328 = local_328 + 1;
    } while (cVar1 != '\0');
    FUN_004c7630(local_208);
    while (iVar2 = _strncmp(local_108,"../",3), iVar2 == 0) {
      local_340 = local_108 + 3;
      local_32c = local_308;
      do {
        cVar1 = *local_340;
        *local_32c = cVar1;
        local_340 = local_340 + 1;
        local_32c = local_32c + 1;
      } while (cVar1 != '\0');
      local_344 = local_308;
      local_330 = local_108;
      do {
        cVar1 = *local_344;
        *local_330 = cVar1;
        local_344 = local_344 + 1;
        local_330 = local_330 + 1;
      } while (cVar1 != '\0');
      FUN_004c76a0(local_208);
    }
    local_348 = local_208;
    local_334 = param_1;
    do {
      cVar1 = *local_348;
      *local_334 = cVar1;
      local_348 = local_348 + 1;
      local_334 = local_334 + 1;
    } while (cVar1 != '\0');
    local_31c = local_108;
    do {
      cVar1 = *local_31c;
      local_31c = local_31c + 1;
    } while (cVar1 != '\0');
    uVar3 = (int)local_31c - (int)local_108;
    local_338 = param_1 + -1;
    do {
      pcVar5 = local_338 + 1;
      local_338 = local_338 + 1;
    } while (*pcVar5 != '\0');
    pcVar5 = local_108;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)local_338 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      local_338 = local_338 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *local_338 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      local_338 = local_338 + 1;
    }
  }
  return;
}


/* ==== 004c7af0  FUN_004c7af0  size=196 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_004c7af0(undefined4 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined1 local_114 [256];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00714c64;
  local_10 = ExceptionList;
  uVar1 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar3 = 0;
  local_8 = 2;
  local_14 = uVar1;
  uVar2 = FUN_0040d8b0(uVar1);
  uVar2 = npk_get_relative_res_path(uVar1,uVar2,uVar3 | 1);
  uVar2 = npk_get_relative_res_path(uVar2);
  FUN_004c7740(local_114,uVar2);
  FUN_004053a0(local_114);
  local_8._0_1_ = 1;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)&stack0x00000008);
  local_8 = (uint)local_8._1_3_ << 8;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)&stack0x00000020);
  ExceptionList = local_10;
  return param_1;
}


/* ==== 004c7bc0  FUN_004c7bc0  size=58 ==== */

void FUN_004c7bc0(char *param_1)

{
  for (; *param_1 != '\0'; param_1 = param_1 + 1) {
    if (*param_1 == '\\') {
      *param_1 = '/';
    }
  }
  return;
}


/* ==== 004c7c00  FUN_004c7c00  size=100 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_004c7c00(undefined4 param_1,undefined4 param_2)

{
  undefined1 local_108 [256];
  uint local_8;
  
  local_8 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  FUN_00414e80(local_108,&DAT_0074ec78,param_2,0);
  FUN_004054a0(local_108);
  return param_1;
}


/* ==== 004c7c70  FUN_004c7c70  size=271 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_004c7c70(undefined4 param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  uint local_30;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_2c [24];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00714cb6;
  local_10 = ExceptionList;
  uVar1 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar5 = 0;
  local_14 = uVar1;
  FUN_0040d8b0(uVar1);
  local_8 = 1;
  do {
    iVar4 = param_2 % 10;
    param_2 = param_2 / 10;
    FUN_004cc240(iVar4 + 0x30);
  } while (param_2 != 0);
  uVar2 = FUN_0040d8b0(uVar1);
  local_30 = FUN_00410b30(uVar1,uVar2,iVar4,uVar5 | 1);
  while (local_30 = local_30 - 1, -1 < (int)local_30) {
    pcVar3 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator[]
                       (local_2c,local_30);
    FUN_004cc240(*pcVar3);
    if (((int)local_30 % 3 == 0) && (local_30 != 0)) {
      FUN_004cc240(0x2c);
    }
  }
  local_8 = local_8 & 0xffffff00;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)local_2c);
  ExceptionList = local_10;
  return param_1;
}


/* ==== 004c7d80  FUN_004c7d80  size=134 ==== */

int FUN_004c7d80(void)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int local_10;
  char *local_c;
  
  local_10 = 0;
  local_c = (char *)npk_get_relative_res_path();
  pcVar2 = (char *)FUN_004cc180();
  for (; local_c != pcVar2; local_c = local_c + 1) {
    cVar1 = *local_c;
    if ((cVar1 != ',') && (iVar3 = _isdigit((int)cVar1), iVar3 != 0)) {
      local_10 = local_10 * 10 + -0x30 + (int)cVar1;
    }
  }
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)&stack0x00000004);
  return local_10;
}


/* ==== 004c7e10  FUN_004c7e10  size=6216 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_004c7e10(undefined4 param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  char *local_16c;
  char *local_168;
  function<void___cdecl(void)> local_15c [24];
  function<void___cdecl(void)> local_144 [24];
  function<void___cdecl(void)> local_12c [24];
  char local_114 [256];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00714ced;
  local_10 = ExceptionList;
  uVar2 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  local_14 = uVar2;
  local_16c = (char *)npk_get_relative_res_path(uVar2);
  pcVar5 = local_114;
  local_168 = pcVar5;
  do {
    cVar1 = *local_16c;
    *local_168 = cVar1;
    local_16c = local_16c + 1;
    local_168 = local_168 + 1;
  } while (cVar1 != '\0');
  __strlwr(local_114);
  iVar3 = config_find_section_marker(local_114,"weapon break",uVar2,pcVar5);
  if (iVar3 != 0) {
    FUN_004054a0(&DAT_0074ec88);
    local_8 = 0xffffffff;
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>
              ((function<void___cdecl(void)> *)&stack0x00000008);
    ExceptionList = local_10;
    return param_1;
  }
  iVar3 = config_find_section_marker(local_114,"armor break",uVar2,pcVar5);
  if (iVar3 != 0) {
    FUN_004054a0(&DAT_0074ec94);
    local_8 = 0xffffffff;
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>
              ((function<void___cdecl(void)> *)&stack0x00000008);
    ExceptionList = local_10;
    return param_1;
  }
  iVar3 = config_find_section_marker(local_114,&DAT_0074ec90);
  if (iVar3 != 0) {
    FUN_004054a0(&DAT_0074eca0);
    local_8 = 0xffffffff;
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>
              ((function<void___cdecl(void)> *)&stack0x00000008);
    ExceptionList = local_10;
    return param_1;
  }
  iVar3 = config_find_section_marker(local_114,&DAT_0074ec9c);
  if ((iVar3 != 0) && (iVar3 = config_find_section_marker(local_114,&DAT_0074ecb8), iVar3 != 0)) {
    FUN_004054a0(&DAT_0074ecac);
    local_8 = 0xffffffff;
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>
              ((function<void___cdecl(void)> *)&stack0x00000008);
    ExceptionList = local_10;
    return param_1;
  }
  iVar3 = config_find_section_marker(local_114,&DAT_0074ecc0);
  if ((iVar3 != 0) && (iVar3 = config_find_section_marker(local_114,&DAT_0074ecbc), iVar3 != 0)) {
    FUN_004054a0(&DAT_0074ecc8);
    local_8 = 0xffffffff;
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>
              ((function<void___cdecl(void)> *)&stack0x00000008);
    ExceptionList = local_10;
    return param_1;
  }
  iVar3 = config_find_section_marker(local_114,&DAT_0074ecc4);
  if ((iVar3 != 0) && (iVar3 = config_find_section_marker(local_114,&DAT_0074ece0), iVar3 != 0)) {
    FUN_004054a0(&DAT_0074ecd4);
    local_8 = 0xffffffff;
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>
              ((function<void___cdecl(void)> *)&stack0x00000008);
    ExceptionList = local_10;
    return param_1;
  }
  iVar3 = config_find_section_marker(local_114,&DAT_0074ecf0);
  if ((iVar3 != 0) && (iVar3 = config_find_section_marker(local_114,"regenrate"), iVar3 != 0)) {
    FUN_004054a0(&DAT_0074ecf8);
    local_8 = 0xffffffff;
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>
              ((function<void___cdecl(void)> *)&stack0x00000008);
    ExceptionList = local_10;
    return param_1;
  }
  iVar3 = config_find_section_marker(local_114,&DAT_0074ecf4);
  if ((iVar3 != 0) && (iVar3 = config_find_section_marker(local_114,"regenrate"), iVar3 != 0)) {
    FUN_004054a0(&DAT_0074ed04);
    local_8 = 0xffffffff;
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>
              ((function<void___cdecl(void)> *)&stack0x00000008);
    ExceptionList = local_10;
    return param_1;
  }
  uVar4 = FUN_004054a0(local_114);
  cVar1 = FUN_00427c60(uVar4,&DAT_0074ed20);
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_12c);
  if (cVar1 != '\0') {
    FUN_004054a0(&DAT_0074ed1c);
    local_8 = 0xffffffff;
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>
              ((function<void___cdecl(void)> *)&stack0x00000008);
    ExceptionList = local_10;
    return param_1;
  }
  uVar4 = FUN_004054a0(local_114);
  cVar1 = FUN_00427c60(uVar4,&DAT_0074ed28);
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_144);
  if (cVar1 != '\0') {
    FUN_004054a0(&DAT_0074ed24);
    local_8 = 0xffffffff;
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>
              ((function<void___cdecl(void)> *)&stack0x00000008);
    ExceptionList = local_10;
    return param_1;
  }
  iVar3 = config_find_section_marker(local_114,"equipment");
  if (((iVar3 != 0) && (iVar3 = config_find_section_marker(local_114,"physical"), iVar3 != 0)) &&
     (iVar3 = config_find_section_marker(local_114,"attack"), iVar3 != 0)) {
    FUN_004054a0(&DAT_0074ed44);
    local_8 = 0xffffffff;
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>
              ((function<void___cdecl(void)> *)&stack0x00000008);
    ExceptionList = local_10;
    return param_1;
  }
  iVar3 = config_find_section_marker(local_114,"equipment");
  if (((iVar3 != 0) && (iVar3 = config_find_section_marker(local_114,"magical"), iVar3 != 0)) &&
     (iVar3 = config_find_section_marker(local_114,"attack"), iVar3 != 0)) {
    FUN_004054a0(&DAT_0074ed6c);
    local_8 = 0xffffffff;
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>
              ((function<void___cdecl(void)> *)&stack0x00000008);
    ExceptionList = local_10;
    return param_1;
  }
  iVar3 = config_find_section_marker(local_114,"equipment");
  if (((iVar3 != 0) && (iVar3 = config_find_section_marker(local_114,"physical"), iVar3 != 0)) &&
     (iVar3 = config_find_section_marker(local_114,"defense"), iVar3 != 0)) {
    FUN_004054a0(&DAT_0074ed98);
    local_8 = 0xffffffff;
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>
              ((function<void___cdecl(void)> *)&stack0x00000008);
    ExceptionList = local_10;
    return param_1;
  }
  iVar3 = config_find_section_marker(local_114,"equipment");
  if (((iVar3 != 0) && (iVar3 = config_find_section_marker(local_114,"magical"), iVar3 != 0)) &&
     (iVar3 = config_find_section_marker(local_114,"defense"), iVar3 != 0)) {
    FUN_004054a0(&DAT_0074edc0);
    local_8 = 0xffffffff;
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>
              ((function<void___cdecl(void)> *)&stack0x00000008);
    ExceptionList = local_10;
    return param_1;
  }
  iVar3 = config_find_section_marker(local_114,"physical");
  if ((iVar3 != 0) && (iVar3 = config_find_section_marker(local_114,"attack"), iVar3 != 0)) {
    FUN_004054a0(&DAT_0074edf0);
    local_8 = 0xffffffff;
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>
              ((function<void___cdecl(void)> *)&stack0x00000008);
    ExceptionList = local_10;
    return param_1;
  }
  iVar3 = config_find_section_marker(local_114,"magical");
  if ((iVar3 != 0) && (iVar3 = config_find_section_marker(local_114,"attack"), iVar3 != 0)) {
    FUN_004054a0(&DAT_0074edf8);
    local_8 = 0xffffffff;
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>
              ((function<void___cdecl(void)> *)&stack0x00000008);
    ExceptionList = local_10;
    return param_1;
  }
  iVar3 = config_find_section_marker(local_114,"physical");
  if (((iVar3 != 0) && (iVar3 = config_find_section_marker(local_114,"defense"), iVar3 != 0)) &&
     (iVar3 = config_find_section_marker(local_114,"absolute"), iVar3 != 0)) {
    FUN_004054a0(&DAT_0074ee1c);
    local_8 = 0xffffffff;
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>
              ((function<void___cdecl(void)> *)&stack0x00000008);
    ExceptionList = local_10;
    return param_1;
  }
  iVar3 = config_find_section_marker(local_114,"magical");
  if (((iVar3 != 0) && (iVar3 = config_find_section_marker(local_114,"defense"), iVar3 != 0)) &&
     (iVar3 = config_find_section_marker(local_114,"absolute"), iVar3 != 0)) {
    FUN_004054a0(&DAT_0074ee4c);
    local_8 = 0xffffffff;
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>
              ((function<void___cdecl(void)> *)&stack0x00000008);
    ExceptionList = local_10;
    return param_1;
  }
  iVar3 = config_find_section_marker(local_114,"physical");
  if ((iVar3 != 0) && (iVar3 = config_find_section_marker(local_114,"defense"), iVar3 != 0)) {
    FUN_004054a0(&DAT_0074ee88);
    local_8 = 0xffffffff;
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>
              ((function<void___cdecl(void)> *)&stack0x00000008);
    ExceptionList = local_10;
    return param_1;
  }
  iVar3 = config_find_section_marker(local_114,"magical");
  if ((iVar3 != 0) && (iVar3 = config_find_section_marker(local_114,"defense"), iVar3 != 0)) {
    FUN_004054a0(&DAT_0074ee90);
    local_8 = 0xffffffff;
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>
              ((function<void___cdecl(void)> *)&stack0x00000008);
    ExceptionList = local_10;
    return param_1;
  }
  iVar3 = config_find_section_marker(local_114,"activestatus");
  if ((((iVar3 != 0) && (iVar3 = config_find_section_marker(local_114,"tolerance"), iVar3 != 0)) &&
      (iVar3 = config_find_section_marker(local_114,&DAT_0074eed8), iVar3 != 0)) ||
     (iVar3 = config_find_section_marker(local_114,"all activestatus resistance"), iVar3 != 0)) {
    FUN_004054a0(&DAT_0074eee4);
    local_8 = 0xffffffff;
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>
              ((function<void___cdecl(void)> *)&stack0x00000008);
    ExceptionList = local_10;
    return param_1;
  }
  iVar3 = config_find_section_marker(local_114,"element");
  if ((((iVar3 == 0) || (iVar3 = config_find_section_marker(local_114,"tolerance"), iVar3 == 0)) ||
      (iVar3 = config_find_section_marker(local_114,&DAT_0074eef8), iVar3 == 0)) &&
     (iVar3 = config_find_section_marker(local_114,"hold resistance"), iVar3 == 0)) {
    iVar3 = config_find_section_marker(local_114,"element");
    if ((((iVar3 != 0) && (iVar3 = config_find_section_marker(local_114,"tolerance"), iVar3 != 0)) &&
        (iVar3 = config_find_section_marker(local_114,"water"), iVar3 != 0)) ||
       ((iVar3 = config_find_section_marker(local_114,"water resistance"), iVar3 != 0 ||
        (iVar3 = config_find_section_marker(local_114,"ice resistance"), iVar3 != 0)))) {
      FUN_004054a0(&DAT_0074ef58);
      local_8 = 0xffffffff;
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                ((function<void___cdecl(void)> *)&stack0x00000008);
      ExceptionList = local_10;
      return param_1;
    }
    iVar3 = config_find_section_marker(local_114,"element");
    if (((iVar3 != 0) &&
        ((iVar3 = config_find_section_marker(local_114,"tolerance"), iVar3 != 0 &&
         (iVar3 = config_find_section_marker(local_114,&DAT_0074ef98), iVar3 != 0)))) ||
       (iVar3 = config_find_section_marker(local_114,"dark resistance"), iVar3 != 0)) {
      FUN_004054a0(&DAT_0074efa8);
      local_8 = 0xffffffff;
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                ((function<void___cdecl(void)> *)&stack0x00000008);
      ExceptionList = local_10;
      return param_1;
    }
    iVar3 = config_find_section_marker(local_114,"element");
    if ((((iVar3 != 0) && (iVar3 = config_find_section_marker(local_114,"tolerance"), iVar3 != 0)) &&
        (iVar3 = config_find_section_marker(local_114,"light"), iVar3 != 0)) ||
       (iVar3 = config_find_section_marker(local_114,"light resistance"), iVar3 != 0)) {
      FUN_004054a0(&DAT_0074efc8);
      local_8 = 0xffffffff;
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                ((function<void___cdecl(void)> *)&stack0x00000008);
      ExceptionList = local_10;
      return param_1;
    }
    iVar3 = config_find_section_marker(local_114,"all elemental resistance");
    if (iVar3 != 0) {
      FUN_004054a0(&DAT_0074efe8);
      local_8 = 0xffffffff;
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                ((function<void___cdecl(void)> *)&stack0x00000008);
      ExceptionList = local_10;
      return param_1;
    }
    iVar3 = config_find_section_marker(local_114,"element");
    if ((iVar3 != 0) && (iVar3 = config_find_section_marker(local_114,&DAT_0074f014), iVar3 != 0)) {
      FUN_004054a0(&DAT_0074f02c);
      local_8 = 0xffffffff;
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                ((function<void___cdecl(void)> *)&stack0x00000008);
      ExceptionList = local_10;
      return param_1;
    }
    iVar3 = config_find_section_marker(local_114,"element");
    if ((iVar3 != 0) && (iVar3 = config_find_section_marker(local_114,"water"), iVar3 != 0)) {
      FUN_004054a0(&DAT_0074f038);
      local_8 = 0xffffffff;
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                ((function<void___cdecl(void)> *)&stack0x00000008);
      ExceptionList = local_10;
      return param_1;
    }
    iVar3 = config_find_section_marker(local_114,"element");
    if ((iVar3 != 0) && (iVar3 = config_find_section_marker(local_114,&DAT_0074f04c), iVar3 != 0)) {
      FUN_004054a0(&DAT_0074f064);
      local_8 = 0xffffffff;
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                ((function<void___cdecl(void)> *)&stack0x00000008);
      ExceptionList = local_10;
      return param_1;
    }
    iVar3 = config_find_section_marker(local_114,"element");
    if ((iVar3 != 0) && (iVar3 = config_find_section_marker(local_114,"light"), iVar3 != 0)) {
      FUN_004054a0(&DAT_0074f070);
      local_8 = 0xffffffff;
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                ((function<void___cdecl(void)> *)&stack0x00000008);
      ExceptionList = local_10;
      return param_1;
    }
    iVar3 = config_find_section_marker(local_114,"activestatus");
    if ((((iVar3 != 0) && (iVar3 = config_find_section_marker(local_114,"tolerance"), iVar3 != 0)) &&
        (iVar3 = config_find_section_marker(local_114,"stuck"), iVar3 != 0)) ||
       ((iVar3 = config_find_section_marker(local_114,"resistance"), iVar3 != 0 &&
        (iVar3 = config_find_section_marker(local_114,"stuck"), iVar3 != 0)))) {
      FUN_004054a0(&DAT_0074f0b4);
      local_8 = 0xffffffff;
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                ((function<void___cdecl(void)> *)&stack0x00000008);
      ExceptionList = local_10;
      return param_1;
    }
    uVar4 = FUN_004054a0(local_114);
    cVar1 = FUN_00427c60(uVar4,"stuck");
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_15c);
    if (cVar1 != '\0') {
      FUN_004054a0(&DAT_0074f0c4);
      local_8 = 0xffffffff;
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                ((function<void___cdecl(void)> *)&stack0x00000008);
      ExceptionList = local_10;
      return param_1;
    }
    iVar3 = config_find_section_marker(local_114,"attack");
    if ((iVar3 != 0) && (iVar3 = config_find_section_marker(local_114,"speed"), iVar3 != 0)) {
      FUN_004054a0(&DAT_0074f0ec);
      local_8 = 0xffffffff;
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                ((function<void___cdecl(void)> *)&stack0x00000008);
      ExceptionList = local_10;
      return param_1;
    }
    iVar3 = config_find_section_marker(local_114,&DAT_0074f0e4);
    if ((iVar3 != 0) && (iVar3 = config_find_section_marker(local_114,"speed"), iVar3 != 0)) {
      FUN_004054a0(&DAT_0074f0f8);
      local_8 = 0xffffffff;
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                ((function<void___cdecl(void)> *)&stack0x00000008);
      ExceptionList = local_10;
      return param_1;
    }
    iVar3 = config_find_section_marker(local_114,&DAT_0074f114);
    if ((iVar3 != 0) && (iVar3 = config_find_section_marker(local_114,"speed"), iVar3 != 0)) {
      FUN_004054a0(&DAT_0074f130);
      local_8 = 0xffffffff;
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                ((function<void___cdecl(void)> *)&stack0x00000008);
      ExceptionList = local_10;
      return param_1;
    }
    iVar3 = config_find_section_marker(local_114,"critical hit rate");
    if (iVar3 != 0) {
      FUN_004054a0(&DAT_0074f148);
      local_8 = 0xffffffff;
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                ((function<void___cdecl(void)> *)&stack0x00000008);
      ExceptionList = local_10;
      return param_1;
    }
    iVar3 = config_find_section_marker(local_114,"physical");
    if (((iVar3 != 0) && (iVar3 = config_find_section_marker(local_114,"critical"), iVar3 != 0)) &&
       (iVar3 = config_find_section_marker(local_114,&DAT_0074f150), iVar3 != 0)) {
      FUN_004054a0(&DAT_0074f168);
      local_8 = 0xffffffff;
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                ((function<void___cdecl(void)> *)&stack0x00000008);
      ExceptionList = local_10;
      return param_1;
    }
    iVar3 = config_find_section_marker(local_114,"magical");
    if (((iVar3 != 0) && (iVar3 = config_find_section_marker(local_114,"critical"), iVar3 != 0)) &&
       (iVar3 = config_find_section_marker(local_114,&DAT_0074f174), iVar3 != 0)) {
      FUN_004054a0(&DAT_0074f18c);
      local_8 = 0xffffffff;
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                ((function<void___cdecl(void)> *)&stack0x00000008);
      ExceptionList = local_10;
      return param_1;
    }
    iVar3 = config_find_section_marker(local_114,&DAT_0074f184);
    if (((iVar3 != 0) && (iVar3 = config_find_section_marker(local_114,&DAT_0074f1a0), iVar3 != 0)) &&
       ((iVar3 = config_find_section_marker(local_114,&DAT_0074f198), iVar3 != 0 &&
        ((iVar3 = config_find_section_marker(local_114,"speed"), iVar3 != 0 &&
         (iVar3 = config_find_section_marker(local_114,&DAT_0074f1a8), iVar3 != 0)))))) {
      FUN_004054a0(&DAT_0074f1c4);
      local_8 = 0xffffffff;
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                ((function<void___cdecl(void)> *)&stack0x00000008);
      ExceptionList = local_10;
      return param_1;
    }
    iVar3 = config_find_section_marker(local_114,"inventory");
    if (((iVar3 != 0) && (iVar3 = config_find_section_marker(local_114,&DAT_0074f1dc), iVar3 != 0)) &&
       (iVar3 = config_find_section_marker(local_114,"weight"), iVar3 != 0)) {
      FUN_004054a0(&DAT_0074f1e8);
      local_8 = 0xffffffff;
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                ((function<void___cdecl(void)> *)&stack0x00000008);
      ExceptionList = local_10;
      return param_1;
    }
    iVar3 = config_find_section_marker(local_114,&DAT_0074f1e0);
    if ((iVar3 != 0) && (iVar3 = config_find_section_marker(local_114,"power"), iVar3 != 0)) {
      FUN_004054a0(&DAT_0074f1f4);
      local_8 = 0xffffffff;
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                ((function<void___cdecl(void)> *)&stack0x00000008);
      ExceptionList = local_10;
      return param_1;
    }
    iVar3 = config_find_section_marker(local_114,&DAT_0074f210);
    if ((iVar3 != 0) && (iVar3 = config_find_section_marker(local_114,"recovery"), iVar3 != 0)) {
      FUN_004054a0(&DAT_0074f21c);
      local_8 = 0xffffffff;
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                ((function<void___cdecl(void)> *)&stack0x00000008);
      ExceptionList = local_10;
      return param_1;
    }
    iVar3 = config_find_section_marker(local_114,"skill");
    if ((iVar3 != 0) && (iVar3 = config_find_section_marker(local_114,"level"), iVar3 != 0)) {
      FUN_004054a0(&DAT_0074f224);
      local_8 = 0xffffffff;
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                ((function<void___cdecl(void)> *)&stack0x00000008);
      ExceptionList = local_10;
      return param_1;
    }
    cVar1 = FUN_00427c60(&stack0x00000008,"bleeding");
    if (cVar1 != '\0') {
      FUN_004054a0(&DAT_0074f23c);
      local_8 = 0xffffffff;
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                ((function<void___cdecl(void)> *)&stack0x00000008);
      ExceptionList = local_10;
      return param_1;
    }
    cVar1 = FUN_00427c60(&stack0x00000008,"lightning");
    if (cVar1 != '\0') {
      FUN_004054a0(&DAT_0074f250);
      local_8 = 0xffffffff;
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                ((function<void___cdecl(void)> *)&stack0x00000008);
      ExceptionList = local_10;
      return param_1;
    }
    cVar1 = FUN_00427c60(&stack0x00000008,"poison");
    if (cVar1 != '\0') {
      FUN_004054a0(&DAT_0074f264);
      local_8 = 0xffffffff;
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                ((function<void___cdecl(void)> *)&stack0x00000008);
      ExceptionList = local_10;
      return param_1;
    }
    cVar1 = FUN_00427c60(&stack0x00000008,&DAT_0074f27c);
    if (cVar1 != '\0') {
      FUN_004054a0(&DAT_0074f274);
      local_8 = 0xffffffff;
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                ((function<void___cdecl(void)> *)&stack0x00000008);
      ExceptionList = local_10;
      return param_1;
    }
    cVar1 = FUN_00427c60(&stack0x00000008,"stone");
    if (cVar1 != '\0') {
      FUN_004054a0(&DAT_0074f284);
      local_8 = 0xffffffff;
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                ((function<void___cdecl(void)> *)&stack0x00000008);
      ExceptionList = local_10;
      return param_1;
    }
    cVar1 = FUN_00427c60(&stack0x00000008,"freeze");
    if (cVar1 != '\0') {
      FUN_004054a0(&DAT_0074f294);
      local_8 = 0xffffffff;
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                ((function<void___cdecl(void)> *)&stack0x00000008);
      ExceptionList = local_10;
      return param_1;
    }
    cVar1 = FUN_00427c60(&stack0x00000008,&DAT_0074f2ac);
    if (cVar1 != '\0') {
      FUN_004054a0(&DAT_0074f2a4);
      local_8 = 0xffffffff;
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                ((function<void___cdecl(void)> *)&stack0x00000008);
      ExceptionList = local_10;
      return param_1;
    }
    cVar1 = FUN_00427c60(&stack0x00000008,"blind");
    if (cVar1 != '\0') {
      FUN_004054a0(&DAT_0074f2b4);
      local_8 = 0xffffffff;
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                ((function<void___cdecl(void)> *)&stack0x00000008);
      ExceptionList = local_10;
      return param_1;
    }
    cVar1 = FUN_00427c60(&stack0x00000008,&DAT_0074f2cc);
    if (cVar1 != '\0') {
      FUN_004054a0(&DAT_0074f2c4);
      local_8 = 0xffffffff;
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                ((function<void___cdecl(void)> *)&stack0x00000008);
      ExceptionList = local_10;
      return param_1;
    }
    cVar1 = FUN_00427c60(&stack0x00000008,"sleep");
    if (cVar1 != '\0') {
      FUN_004054a0(&DAT_0074f2d4);
      local_8 = 0xffffffff;
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                ((function<void___cdecl(void)> *)&stack0x00000008);
      ExceptionList = local_10;
      return param_1;
    }
    cVar1 = FUN_00427c60(&stack0x00000008,&DAT_0074f2ec);
    if (cVar1 != '\0') {
      FUN_004054a0(&DAT_0074f2e4);
      local_8 = 0xffffffff;
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                ((function<void___cdecl(void)> *)&stack0x00000008);
      ExceptionList = local_10;
      return param_1;
    }
    cVar1 = FUN_00427c60(&stack0x00000008,"haste");
    if (cVar1 != '\0') {
      FUN_004054a0(&DAT_0074f2f4);
      local_8 = 0xffffffff;
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                ((function<void___cdecl(void)> *)&stack0x00000008);
      ExceptionList = local_10;
      return param_1;
    }
    cVar1 = FUN_00427c60(&stack0x00000008,"bless");
    if (cVar1 != '\0') {
      FUN_004054a0(&DAT_0074f304);
      local_8 = 0xffffffff;
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                ((function<void___cdecl(void)> *)&stack0x00000008);
      ExceptionList = local_10;
      return param_1;
    }
    cVar1 = FUN_00427c60(&stack0x00000008,"curse");
    if (cVar1 != '\0') {
      FUN_004054a0(&DAT_0074f314);
      local_8 = 0xffffffff;
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                ((function<void___cdecl(void)> *)&stack0x00000008);
      ExceptionList = local_10;
      return param_1;
    }
    cVar1 = FUN_00427c60(&stack0x00000008,"confuse");
    if (cVar1 != '\0') {
      FUN_004054a0(&DAT_0074f324);
      local_8 = 0xffffffff;
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                ((function<void___cdecl(void)> *)&stack0x00000008);
      ExceptionList = local_10;
      return param_1;
    }
    FUN_004054a0(&DAT_0074f340);
    local_8 = 0xffffffff;
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>
              ((function<void___cdecl(void)> *)&stack0x00000008);
    ExceptionList = local_10;
    return param_1;
  }
  FUN_004054a0(&DAT_0074ef0c);
  local_8 = 0xffffffff;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)&stack0x00000008);
  ExceptionList = local_10;
  return param_1;
}


/* ==== 004c9790  FUN_004c9790  size=1808 ==== */

void FUN_004c9790(void)

{
  char cVar1;
  uint uVar2;
  int in_stack_00000020;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00714d2d;
  local_10 = ExceptionList;
  uVar2 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar3 = 0;
  local_8 = 0;
  cVar1 = FUN_00427c60(&stack0x00000008,"[swordman]",uVar2,0);
  if (cVar1 == '\0') {
    cVar1 = FUN_00427c60(&stack0x00000008,"[fighter]",uVar2,uVar3);
    if (cVar1 == '\0') {
      cVar1 = FUN_00427c60(&stack0x00000008,"[gunner]",uVar2,uVar3);
      if (cVar1 == '\0') {
        cVar1 = FUN_00427c60(&stack0x00000008,"[mage]",uVar2,uVar3);
        if (cVar1 == '\0') {
          cVar1 = FUN_00427c60(&stack0x00000008,"[priest]",uVar2,uVar3);
          if (cVar1 == '\0') {
            FUN_004054a0(&DAT_0073f9a2);
            local_8 = 0xffffffff;
            std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                      ((function<void___cdecl(void)> *)&stack0x00000008);
            ExceptionList = local_10;
            return;
          }
          if (in_stack_00000020 == 0) {
            FUN_004054a0(&DAT_0074f45c);
            local_8 = 0xffffffff;
            std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                      ((function<void___cdecl(void)> *)&stack0x00000008);
            ExceptionList = local_10;
            return;
          }
          if (in_stack_00000020 == 1) {
            FUN_004054a0(&DAT_0074f454);
            local_8 = 0xffffffff;
            std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                      ((function<void___cdecl(void)> *)&stack0x00000008);
            ExceptionList = local_10;
            return;
          }
          if (in_stack_00000020 == 2) {
            FUN_004054a0(&DAT_0074f46c);
            local_8 = 0xffffffff;
            std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                      ((function<void___cdecl(void)> *)&stack0x00000008);
            ExceptionList = local_10;
            return;
          }
          if (in_stack_00000020 == 3) {
            FUN_004054a0(&DAT_0074f464);
            local_8 = 0xffffffff;
            std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                      ((function<void___cdecl(void)> *)&stack0x00000008);
            ExceptionList = local_10;
            return;
          }
          if (in_stack_00000020 == 4) {
            FUN_004054a0(&DAT_0074f484);
            local_8 = 0xffffffff;
            std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                      ((function<void___cdecl(void)> *)&stack0x00000008);
            ExceptionList = local_10;
            return;
          }
          if (in_stack_00000020 == 5) {
            FUN_004054a0(&DAT_0074f474);
            local_8 = 0xffffffff;
            std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                      ((function<void___cdecl(void)> *)&stack0x00000008);
            ExceptionList = local_10;
            return;
          }
        }
        else {
          if (in_stack_00000020 == 0) {
            FUN_004054a0(&DAT_0074f40c);
            local_8 = 0xffffffff;
            std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                      ((function<void___cdecl(void)> *)&stack0x00000008);
            ExceptionList = local_10;
            return;
          }
          if (in_stack_00000020 == 1) {
            FUN_004054a0(&DAT_0074f420);
            local_8 = 0xffffffff;
            std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                      ((function<void___cdecl(void)> *)&stack0x00000008);
            ExceptionList = local_10;
            return;
          }
          if (in_stack_00000020 == 2) {
            FUN_004054a0(&DAT_0074f418);
            local_8 = 0xffffffff;
            std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                      ((function<void___cdecl(void)> *)&stack0x00000008);
            ExceptionList = local_10;
            return;
          }
          if (in_stack_00000020 == 3) {
            FUN_004054a0(&DAT_0074f430);
            local_8 = 0xffffffff;
            std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                      ((function<void___cdecl(void)> *)&stack0x00000008);
            ExceptionList = local_10;
            return;
          }
          if (in_stack_00000020 == 4) {
            FUN_004054a0(&DAT_0074f428);
            local_8 = 0xffffffff;
            std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                      ((function<void___cdecl(void)> *)&stack0x00000008);
            ExceptionList = local_10;
            return;
          }
          if (in_stack_00000020 == 5) {
            FUN_004054a0(&DAT_0074f444);
            local_8 = 0xffffffff;
            std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                      ((function<void___cdecl(void)> *)&stack0x00000008);
            ExceptionList = local_10;
            return;
          }
        }
      }
      else {
        if (in_stack_00000020 == 0) {
          FUN_004054a0(&DAT_0074f3e0);
          local_8 = 0xffffffff;
          std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                    ((function<void___cdecl(void)> *)&stack0x00000008);
          ExceptionList = local_10;
          return;
        }
        if (in_stack_00000020 == 1) {
          FUN_004054a0(&DAT_0074f3d4);
          local_8 = 0xffffffff;
          std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                    ((function<void___cdecl(void)> *)&stack0x00000008);
          ExceptionList = local_10;
          return;
        }
        if (in_stack_00000020 == 2) {
          FUN_004054a0(&DAT_0074f3f0);
          local_8 = 0xffffffff;
          std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                    ((function<void___cdecl(void)> *)&stack0x00000008);
          ExceptionList = local_10;
          return;
        }
        if (in_stack_00000020 == 3) {
          FUN_004054a0(&DAT_0074f3e8);
          local_8 = 0xffffffff;
          std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                    ((function<void___cdecl(void)> *)&stack0x00000008);
          ExceptionList = local_10;
          return;
        }
        if (in_stack_00000020 == 4) {
          FUN_004054a0(&DAT_0074f408);
          local_8 = 0xffffffff;
          std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                    ((function<void___cdecl(void)> *)&stack0x00000008);
          ExceptionList = local_10;
          return;
        }
        if (in_stack_00000020 == 5) {
          FUN_004054a0(&DAT_0074f3f8);
          local_8 = 0xffffffff;
          std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                    ((function<void___cdecl(void)> *)&stack0x00000008);
          ExceptionList = local_10;
          return;
        }
      }
    }
    else {
      if (in_stack_00000020 == 0) {
        FUN_004054a0(&DAT_0074f384);
        local_8 = 0xffffffff;
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                  ((function<void___cdecl(void)> *)&stack0x00000008);
        ExceptionList = local_10;
        return;
      }
      if (in_stack_00000020 == 1) {
        FUN_004054a0(&DAT_0074f3a0);
        local_8 = 0xffffffff;
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                  ((function<void___cdecl(void)> *)&stack0x00000008);
        ExceptionList = local_10;
        return;
      }
      if (in_stack_00000020 == 2) {
        FUN_004054a0(&DAT_0074f398);
        local_8 = 0xffffffff;
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                  ((function<void___cdecl(void)> *)&stack0x00000008);
        ExceptionList = local_10;
        return;
      }
      if (in_stack_00000020 == 3) {
        FUN_004054a0(&DAT_0074f3b8);
        local_8 = 0xffffffff;
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                  ((function<void___cdecl(void)> *)&stack0x00000008);
        ExceptionList = local_10;
        return;
      }
      if (in_stack_00000020 == 4) {
        FUN_004054a0(&DAT_0074f3a8);
        local_8 = 0xffffffff;
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                  ((function<void___cdecl(void)> *)&stack0x00000008);
        ExceptionList = local_10;
        return;
      }
      if (in_stack_00000020 == 5) {
        FUN_004054a0(&DAT_0074f3cc);
        local_8 = 0xffffffff;
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                  ((function<void___cdecl(void)> *)&stack0x00000008);
        ExceptionList = local_10;
        return;
      }
    }
  }
  else {
    if (in_stack_00000020 == 0) {
      FUN_004054a0(&DAT_0074f354);
      local_8 = 0xffffffff;
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                ((function<void___cdecl(void)> *)&stack0x00000008);
      ExceptionList = local_10;
      return;
    }
    if (in_stack_00000020 == 1) {
      FUN_004054a0(&DAT_0074f34c);
      local_8 = 0xffffffff;
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                ((function<void___cdecl(void)> *)&stack0x00000008);
      ExceptionList = local_10;
      return;
    }
    if (in_stack_00000020 == 2) {
      FUN_004054a0(&DAT_0074f364);
      local_8 = 0xffffffff;
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                ((function<void___cdecl(void)> *)&stack0x00000008);
      ExceptionList = local_10;
      return;
    }
    if (in_stack_00000020 == 3) {
      FUN_004054a0(&DAT_0074f35c);
      local_8 = 0xffffffff;
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                ((function<void___cdecl(void)> *)&stack0x00000008);
      ExceptionList = local_10;
      return;
    }
    if (in_stack_00000020 == 4) {
      FUN_004054a0(&DAT_0074f374);
      local_8 = 0xffffffff;
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                ((function<void___cdecl(void)> *)&stack0x00000008);
      ExceptionList = local_10;
      return;
    }
    if (in_stack_00000020 == 5) {
      FUN_004054a0(&DAT_0074f36c);
      local_8 = 0xffffffff;
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                ((function<void___cdecl(void)> *)&stack0x00000008);
      ExceptionList = local_10;
      return;
    }
  }
  local_8 = 0xffffffff;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)&stack0x00000008);
  ExceptionList = local_10;
  return;
}


/* ==== 004c9f00  FUN_004c9f00  size=358 ==== */

undefined4 FUN_004c9f00(undefined4 param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00714d2d;
  local_10 = ExceptionList;
  uVar2 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar3 = 0;
  local_8 = 0;
  cVar1 = FUN_00427c60(&stack0x00000008,"[waste]",uVar2,0);
  if (((cVar1 != '\0') ||
      (cVar1 = FUN_00427c60(&stack0x00000008,"[feed]",uVar2,uVar3), cVar1 != '\0')) ||
     (cVar1 = FUN_00427c60(&stack0x00000008,"[recipe]",uVar2,uVar3), cVar1 != '\0')) {
    FUN_004054a0(&DAT_0074f4b4);
    local_8 = 0xffffffff;
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>
              ((function<void___cdecl(void)> *)&stack0x00000008);
    ExceptionList = local_10;
    return param_1;
  }
  cVar1 = FUN_00427c60(&stack0x00000008,"[material]",uVar2,uVar3);
  if (cVar1 != '\0') {
    FUN_004054a0(&DAT_0074f4c4);
    local_8 = 0xffffffff;
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>
              ((function<void___cdecl(void)> *)&stack0x00000008);
    ExceptionList = local_10;
    return param_1;
  }
  cVar1 = FUN_00427c60(&stack0x00000008,"[quest]",uVar2,uVar3);
  if (cVar1 != '\0') {
    FUN_004054a0(&DAT_0074f4d4);
    local_8 = 0xffffffff;
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>
              ((function<void___cdecl(void)> *)&stack0x00000008);
    ExceptionList = local_10;
    return param_1;
  }
  FUN_004054a0(&DAT_0074f4cc);
  local_8 = 0xffffffff;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)&stack0x00000008);
  ExceptionList = local_10;
  return param_1;
}


/* ==== 004ca080  FUN_004ca080  size=1621 ==== */

undefined4 FUN_004ca080(undefined4 param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00714d2d;
  local_10 = ExceptionList;
  uVar2 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar3 = 0;
  local_8 = 0;
  cVar1 = FUN_00427c60(&stack0x00000008,"[weapon]",uVar2,0);
  if (cVar1 == '\0') {
    cVar1 = FUN_00427c60(&stack0x00000008,"[title name]",uVar2,uVar3);
    if (cVar1 == '\0') {
      cVar1 = FUN_00427c60(&stack0x00000008,"[coat]",uVar2,uVar3);
      if (cVar1 == '\0') {
        cVar1 = FUN_00427c60(&stack0x00000008,"[shoulder]",uVar2,uVar3);
        if (cVar1 == '\0') {
          cVar1 = FUN_00427c60(&stack0x00000008,"[pants]",uVar2,uVar3);
          if (cVar1 == '\0') {
            cVar1 = FUN_00427c60(&stack0x00000008,"[shoes]");
            if (cVar1 == '\0') {
              cVar1 = FUN_00427c60(&stack0x00000008,"[waist]");
              if (cVar1 == '\0') {
                cVar1 = FUN_00427c60(&stack0x00000008,"[amulet]");
                if (cVar1 == '\0') {
                  cVar1 = FUN_00427c60(&stack0x00000008,"[wrist]");
                  if (cVar1 == '\0') {
                    cVar1 = FUN_00427c60(&stack0x00000008,"[ring]");
                    if (cVar1 == '\0') {
                      cVar1 = FUN_00427c60(&stack0x00000008,"[coat avatar]");
                      if (cVar1 == '\0') {
                        cVar1 = FUN_00427c60(&stack0x00000008,"[pants avatar]");
                        if (cVar1 == '\0') {
                          cVar1 = FUN_00427c60(&stack0x00000008,"[hair avatar]");
                          if (cVar1 == '\0') {
                            cVar1 = FUN_00427c60(&stack0x00000008,"[hat avatar]");
                            if (cVar1 == '\0') {
                              cVar1 = FUN_00427c60(&stack0x00000008,"[face avatar]");
                              if (cVar1 == '\0') {
                                cVar1 = FUN_00427c60(&stack0x00000008,"[breast avatar]");
                                if (cVar1 == '\0') {
                                  cVar1 = FUN_00427c60(&stack0x00000008,"[waist avatar]");
                                  if (cVar1 == '\0') {
                                    cVar1 = FUN_00427c60(&stack0x00000008,"[shoes avatar]");
                                    if (cVar1 == '\0') {
                                      cVar1 = FUN_00427c60(&stack0x00000008,"[skin avatar]");
                                      if (cVar1 == '\0') {
                                        cVar1 = FUN_00427c60(&stack0x00000008,"[artifact red]");
                                        if (cVar1 == '\0') {
                                          cVar1 = FUN_00427c60(&stack0x00000008,"[artifact blue]");
                                          if (cVar1 == '\0') {
                                            cVar1 = FUN_00427c60(&stack0x00000008,"[artifact green]"
                                                                );
                                            if (cVar1 == '\0') {
                                              FUN_004054a0(&DAT_0074f710);
                                              local_8 = 0xffffffff;
                                              std::function<void___cdecl(void)>::
                                              ~function<void___cdecl(void)>
                                                        ((function<void___cdecl(void)> *)
                                                         &stack0x00000008);
                                            }
                                            else {
                                              FUN_004054a0(&DAT_0074f718);
                                              local_8 = 0xffffffff;
                                              std::function<void___cdecl(void)>::
                                              ~function<void___cdecl(void)>
                                                        ((function<void___cdecl(void)> *)
                                                         &stack0x00000008);
                                            }
                                          }
                                          else {
                                            FUN_004054a0(&DAT_0074f708);
                                            local_8 = 0xffffffff;
                                            std::function<void___cdecl(void)>::
                                            ~function<void___cdecl(void)>
                                                      ((function<void___cdecl(void)> *)
                                                       &stack0x00000008);
                                          }
                                        }
                                        else {
                                          FUN_004054a0(&DAT_0074f6ec);
                                          local_8 = 0xffffffff;
                                          std::function<void___cdecl(void)>::
                                          ~function<void___cdecl(void)>
                                                    ((function<void___cdecl(void)> *)
                                                     &stack0x00000008);
                                        }
                                      }
                                      else {
                                        FUN_004054a0(&DAT_0074f6d4);
                                        local_8 = 0xffffffff;
                                        std::function<void___cdecl(void)>::
                                        ~function<void___cdecl(void)>
                                                  ((function<void___cdecl(void)> *)&stack0x00000008)
                                        ;
                                      }
                                    }
                                    else {
                                      FUN_004054a0(&DAT_0074f6c0);
                                      local_8 = 0xffffffff;
                                      std::function<void___cdecl(void)>::
                                      ~function<void___cdecl(void)>
                                                ((function<void___cdecl(void)> *)&stack0x00000008);
                                    }
                                  }
                                  else {
                                    FUN_004054a0(&DAT_0074f6a8);
                                    local_8 = 0xffffffff;
                                    std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                                              ((function<void___cdecl(void)> *)&stack0x00000008);
                                  }
                                }
                                else {
                                  FUN_004054a0(&DAT_0074f690);
                                  local_8 = 0xffffffff;
                                  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                                            ((function<void___cdecl(void)> *)&stack0x00000008);
                                }
                              }
                              else {
                                FUN_004054a0(&DAT_0074f678);
                                local_8 = 0xffffffff;
                                std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                                          ((function<void___cdecl(void)> *)&stack0x00000008);
                              }
                            }
                            else {
                              FUN_004054a0(&DAT_0074f660);
                              local_8 = 0xffffffff;
                              std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                                        ((function<void___cdecl(void)> *)&stack0x00000008);
                            }
                          }
                          else {
                            FUN_004054a0(&DAT_0074f648);
                            local_8 = 0xffffffff;
                            std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                                      ((function<void___cdecl(void)> *)&stack0x00000008);
                          }
                        }
                        else {
                          FUN_004054a0(&DAT_0074f630);
                          local_8 = 0xffffffff;
                          std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                                    ((function<void___cdecl(void)> *)&stack0x00000008);
                        }
                      }
                      else {
                        FUN_004054a0(&DAT_0074f618);
                        local_8 = 0xffffffff;
                        std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                                  ((function<void___cdecl(void)> *)&stack0x00000008);
                      }
                    }
                    else {
                      FUN_004054a0(&DAT_0074f600);
                      local_8 = 0xffffffff;
                      std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                                ((function<void___cdecl(void)> *)&stack0x00000008);
                    }
                  }
                  else {
                    FUN_004054a0(&DAT_0074f5e8);
                    local_8 = 0xffffffff;
                    std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                              ((function<void___cdecl(void)> *)&stack0x00000008);
                  }
                }
                else {
                  FUN_004054a0(&DAT_0074f5d8);
                  local_8 = 0xffffffff;
                  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                            ((function<void___cdecl(void)> *)&stack0x00000008);
                }
              }
              else {
                FUN_004054a0(&DAT_0074f5c8);
                local_8 = 0xffffffff;
                std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                          ((function<void___cdecl(void)> *)&stack0x00000008);
              }
            }
            else {
              FUN_004054a0(&DAT_0074f5b8);
              local_8 = 0xffffffff;
              std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                        ((function<void___cdecl(void)> *)&stack0x00000008);
            }
          }
          else {
            FUN_004054a0(&DAT_0074f5a8);
            local_8 = 0xffffffff;
            std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                      ((function<void___cdecl(void)> *)&stack0x00000008);
          }
        }
        else {
          FUN_004054a0(&DAT_0074f598);
          local_8 = 0xffffffff;
          std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                    ((function<void___cdecl(void)> *)&stack0x00000008);
        }
      }
      else {
        FUN_004054a0(&DAT_0074f588);
        local_8 = 0xffffffff;
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                  ((function<void___cdecl(void)> *)&stack0x00000008);
      }
    }
    else {
      FUN_004054a0(&DAT_0074f574);
      local_8 = 0xffffffff;
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                ((function<void___cdecl(void)> *)&stack0x00000008);
    }
  }
  else {
    FUN_004054a0(&DAT_0074f564);
    local_8 = 0xffffffff;
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>
              ((function<void___cdecl(void)> *)&stack0x00000008);
  }
  ExceptionList = local_10;
  return param_1;
}


/* ==== 004ca750  FUN_004ca750  size=181 ==== */

void FUN_004ca750(undefined4 param_1,int param_2)

{
  if (param_2 == 0) {
    FUN_004054a0(&DAT_0074f728);
  }
  else if (param_2 == 1) {
    FUN_004054a0(&DAT_0074f720);
  }
  else if (param_2 == 2) {
    FUN_004054a0(&DAT_0074f738);
  }
  else if (param_2 == 3) {
    FUN_004054a0(&DAT_0074f730);
  }
  else if (param_2 == 4) {
    FUN_004054a0(&DAT_0074f74c);
  }
  return;
}


/* ==== 004ca810  FUN_004ca810  size=584 ==== */

undefined4 FUN_004ca810(undefined4 param_1)

{
  char cVar1;
  int in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00714d2d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  cVar1 = FUN_00427c60(&stack0x00000008,"[gunner]",DAT_007c5940 ^ (uint)&stack0xfffffffc,0);
  if (cVar1 == '\0') {
    if (in_stack_00000020 < -100) {
      FUN_004054a0(&DAT_0074f794);
      local_8 = 0xffffffff;
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                ((function<void___cdecl(void)> *)&stack0x00000008);
    }
    else if (in_stack_00000020 < -0x1e) {
      FUN_004054a0(&DAT_0074f7c4);
      local_8 = 0xffffffff;
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                ((function<void___cdecl(void)> *)&stack0x00000008);
    }
    else if (in_stack_00000020 < 0x1e) {
      FUN_004054a0(&DAT_0074f7b4);
      local_8 = 0xffffffff;
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                ((function<void___cdecl(void)> *)&stack0x00000008);
    }
    else if (in_stack_00000020 < 100) {
      FUN_004054a0(&DAT_0074f7e4);
      local_8 = 0xffffffff;
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                ((function<void___cdecl(void)> *)&stack0x00000008);
    }
    else {
      FUN_004054a0(&DAT_0074f7d4);
      local_8 = 0xffffffff;
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                ((function<void___cdecl(void)> *)&stack0x00000008);
    }
  }
  else if (in_stack_00000020 < -100) {
    FUN_004054a0(&DAT_0074f764);
    local_8 = 0xffffffff;
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>
              ((function<void___cdecl(void)> *)&stack0x00000008);
  }
  else if (in_stack_00000020 < 0) {
    FUN_004054a0(&DAT_0074f754);
    local_8 = 0xffffffff;
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>
              ((function<void___cdecl(void)> *)&stack0x00000008);
  }
  else if (in_stack_00000020 < 0x1e) {
    FUN_004054a0(&DAT_0074f784);
    local_8 = 0xffffffff;
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>
              ((function<void___cdecl(void)> *)&stack0x00000008);
  }
  else if (in_stack_00000020 < 0x50) {
    FUN_004054a0(&DAT_0074f774);
    local_8 = 0xffffffff;
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>
              ((function<void___cdecl(void)> *)&stack0x00000008);
  }
  else {
    FUN_004054a0(&DAT_0074f7a4);
    local_8 = 0xffffffff;
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>
              ((function<void___cdecl(void)> *)&stack0x00000008);
  }
  ExceptionList = local_10;
  return param_1;
}


/* ==== 004caab0  FUN_004caab0  size=256 ==== */

undefined4 FUN_004caab0(void)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_00427c60(&stack0x00000004,"[swordman]");
  if (cVar1 == '\0') {
    cVar1 = FUN_00427c60(&stack0x00000004,"[fighter]");
    if (cVar1 == '\0') {
      cVar1 = FUN_00427c60(&stack0x00000004,"[gunner]");
      if (cVar1 == '\0') {
        cVar1 = FUN_00427c60(&stack0x00000004,"[mage]");
        if (cVar1 == '\0') {
          cVar1 = FUN_00427c60(&stack0x00000004,"[priest]");
          if (cVar1 == '\0') {
            std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                      ((function<void___cdecl(void)> *)&stack0x00000004);
            uVar2 = 0;
          }
          else {
            std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                      ((function<void___cdecl(void)> *)&stack0x00000004);
            uVar2 = 4;
          }
        }
        else {
          std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                    ((function<void___cdecl(void)> *)&stack0x00000004);
          uVar2 = 3;
        }
      }
      else {
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                  ((function<void___cdecl(void)> *)&stack0x00000004);
        uVar2 = 2;
      }
    }
    else {
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                ((function<void___cdecl(void)> *)&stack0x00000004);
      uVar2 = 1;
    }
  }
  else {
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>
              ((function<void___cdecl(void)> *)&stack0x00000004);
    uVar2 = 0;
  }
  return uVar2;
}


/* ==== 004cabd0  FUN_004cabd0  size=211 ==== */

undefined4 FUN_004cabd0(undefined4 param_1,int param_2)

{
  if (param_2 == 0) {
    FUN_004054a0("[swordman]");
  }
  else if (param_2 == 1) {
    FUN_004054a0("[fighter]");
  }
  else if (param_2 == 2) {
    FUN_004054a0("[gunner]");
  }
  else if (param_2 == 3) {
    FUN_004054a0("[mage]");
  }
  else if (param_2 == 4) {
    FUN_004054a0("[priest]");
  }
  else {
    FUN_004054a0(&DAT_0073f9a3);
  }
  return param_1;
}


/* ==== 004cacc0  FUN_004cacc0  size=313 ==== */

undefined4 FUN_004cacc0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00714d6e;
  local_10 = ExceptionList;
  uVar2 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar6 = 0;
  uVar3 = FUN_0040d650(uVar2);
  local_8 = 0;
  local_14 = (char *)npk_get_relative_res_path(uVar2,uVar3,uVar6 | 1);
  while (*local_14 != '\0') {
    pcVar4 = (char *)FUN_006e66f0(local_14,"<int>");
    if (pcVar4 == local_14) {
      cVar1 = game_frame_should_continue();
      if (cVar1 == '\0') {
        iVar5 = FUN_00401a90();
        uVar3 = game_get_flag_object_01a70(iVar5 + param_4);
        FUN_0040d490(uVar3);
      }
      local_14 = local_14 + 5;
    }
    else {
      pcVar4 = (char *)FUN_006e66f0(local_14,"<float1>");
      if ((pcVar4 == local_14) ||
         (pcVar4 = (char *)FUN_006e66f0(local_14,"<float2>"), pcVar4 == local_14)) {
        cVar1 = game_frame_should_continue();
        if (cVar1 == '\0') {
          iVar5 = FUN_00401a90();
          uVar3 = game_get_flag_object_01a70(iVar5 + param_4);
          FUN_0040d490(uVar3);
        }
        local_14 = local_14 + 8;
      }
      else {
        local_14 = local_14 + 1;
      }
    }
  }
  ExceptionList = local_10;
  return param_1;
}


/* ==== 004cae00  FUN_004cae00  size=1161 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_004cae00(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  char *_Dest;
  char *pcVar3;
  uint uVar4;
  float *pfVar5;
  uint uVar6;
  char *local_24c;
  char *local_248;
  char *local_244;
  char *local_23c;
  char *local_238;
  uint local_22c;
  char *local_224;
  function<void___cdecl(void)> local_220 [24];
  char local_208 [256];
  char local_108 [256];
  uint local_8;
  
  local_8 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  iVar2 = FUN_00410b30();
  _Dest = (char *)FUN_006f191d();
  if (_Dest == (char *)0x0) {
    FUN_004054a0();
  }
  else {
    _memset(_Dest,0,iVar2 + 1000);
    pcVar3 = (char *)npk_get_relative_res_path();
    local_22c = 0;
    iVar2 = FUN_006e6960(pcVar3);
    if (iVar2 != 0) {
      _strncpy(_Dest,pcVar3,(iVar2 - (int)pcVar3) + 1);
      _Dest[(iVar2 - (int)pcVar3) + 1] = '\0';
      local_224 = (char *)(iVar2 + 1);
      while (*local_224 != '\0') {
        pcVar3 = (char *)FUN_006e66f0(local_224);
        if (pcVar3 == local_224) {
          uVar4 = FUN_00401a90();
          if (local_22c < uVar4) {
            game_get_flag_object_01a70();
            FUN_00414e80(local_108,&DAT_0074f8a8);
            local_238 = local_108;
            do {
              cVar1 = *local_238;
              local_238 = local_238 + 1;
            } while (cVar1 != '\0');
            uVar4 = (int)local_238 - (int)local_108;
            local_244 = _Dest + -1;
            do {
              pcVar3 = local_244 + 1;
              local_244 = local_244 + 1;
            } while (*pcVar3 != '\0');
            pcVar3 = local_108;
            for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
              *(undefined4 *)local_244 = *(undefined4 *)pcVar3;
              pcVar3 = pcVar3 + 4;
              local_244 = local_244 + 4;
            }
            for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
              *local_244 = *pcVar3;
              pcVar3 = pcVar3 + 1;
              local_244 = local_244 + 1;
            }
            local_22c = local_22c + 1;
          }
          local_224 = local_224 + 5;
        }
        else {
          pcVar3 = (char *)FUN_006e66f0(local_224);
          if ((pcVar3 == local_224) ||
             (pcVar3 = (char *)FUN_006e66f0(local_224), pcVar3 == local_224)) {
            uVar4 = FUN_00401a90();
            if (local_22c < uVar4) {
              pfVar5 = (float *)game_get_flag_object_01a70();
              FUN_00414e80(local_208,&DAT_0074f8d0,(double)*pfVar5);
              local_23c = local_208;
              do {
                cVar1 = *local_23c;
                local_23c = local_23c + 1;
              } while (cVar1 != '\0');
              uVar4 = (int)local_23c - (int)local_208;
              local_248 = _Dest + -1;
              do {
                pcVar3 = local_248 + 1;
                local_248 = local_248 + 1;
              } while (*pcVar3 != '\0');
              pcVar3 = local_208;
              for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
                *(undefined4 *)local_248 = *(undefined4 *)pcVar3;
                pcVar3 = pcVar3 + 4;
                local_248 = local_248 + 4;
              }
              for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
                *local_248 = *pcVar3;
                pcVar3 = pcVar3 + 1;
                local_248 = local_248 + 1;
              }
              local_22c = local_22c + 1;
            }
            local_224 = local_224 + 8;
          }
          else {
            pcVar3 = (char *)FUN_006e66f0(local_224);
            if (pcVar3 == local_224) {
              local_24c = _Dest + -1;
              do {
                pcVar3 = local_24c + 1;
                local_24c = local_24c + 1;
              } while (*pcVar3 != '\0');
              local_24c[0] = '%';
              local_24c[1] = '\0';
              local_224 = local_224 + 2;
            }
            else {
              _strncat(_Dest,local_224,1);
              local_224 = local_224 + 1;
            }
          }
        }
      }
    }
    FUN_004054a0();
    FUN_006f1902();
    FUN_00405450();
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_220);
  }
  return param_1;
}


/* ==== 004cb290  FUN_004cb290  size=322 ==== */

void FUN_004cb290(undefined4 param_1,char *param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *local_20;
  char *local_1c;
  char *local_18;
  char *local_14;
  char *local_10;
  
  iVar2 = config_find_section_marker(param_1,param_2);
  if (iVar2 != 0) {
    local_10 = param_2;
    do {
      cVar1 = *local_10;
      local_10 = local_10 + 1;
    } while (cVar1 != '\0');
    iVar3 = config_find_section_marker(local_10 + (iVar2 - (int)(param_2 + 1)),param_3);
    if (iVar3 != 0) {
      local_14 = param_3;
      do {
        cVar1 = *local_14;
        local_14 = local_14 + 1;
      } while (cVar1 != '\0');
      local_18 = param_3;
      do {
        cVar1 = *local_18;
        local_18 = local_18 + 1;
      } while (cVar1 != '\0');
      local_1c = local_18 + (iVar3 - (int)(param_3 + 1));
      pcVar4 = local_1c + 1;
      do {
        cVar1 = *local_1c;
        local_1c = local_1c + 1;
      } while (cVar1 != '\0');
      local_20 = param_3;
      do {
        cVar1 = *local_20;
        local_20 = local_20 + 1;
      } while (cVar1 != '\0');
      FUN_006e6bd0(iVar2,local_20 + (iVar3 - (int)(param_3 + 1)),local_1c + (1 - (int)pcVar4),
                   local_14 + ((iVar3 - (int)(param_3 + 1)) - iVar2));
    }
  }
  return;
}


/* ==== 004cb3e0  FUN_004cb3e0  size=331 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_004cb3e0(int param_1,char *param_2)

{
  char cVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 *local_54;
  undefined1 *local_50;
  char *local_4c;
  function<void___cdecl(void)> local_44 [24];
  function<void___cdecl(void)> local_2c [24];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00714da5;
  local_10 = ExceptionList;
  local_14 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_4c = param_2;
  do {
    cVar1 = *local_4c;
    local_4c = local_4c + 1;
  } while (cVar1 != '\0');
  iVar3 = (int)local_4c - (int)(param_2 + 1);
  if ((param_1 != 0) &&
     (puVar2 = (undefined1 *)FUN_006f2db8(param_1,local_14,iVar3), puVar2 != (undefined1 *)0x0)) {
    local_50 = (undefined1 *)config_find_section_marker(puVar2,param_2);
    local_54 = puVar2;
    do {
      if (local_50 == (undefined1 *)0x0) break;
      *local_50 = 0;
      FUN_004054a0(local_54);
      local_8 = 0;
      FUN_0044e400(local_2c);
      local_8 = 0xffffffff;
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_2c);
      local_54 = local_50 + iVar3;
      local_50 = (undefined1 *)config_find_section_marker(local_54,param_2);
    } while (local_50 != (undefined1 *)0x0);
    FUN_004054a0(local_54);
    local_8 = 1;
    FUN_0044e400(local_44);
    local_8 = 0xffffffff;
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_44);
    FUN_006f1902(puVar2);
  }
  ExceptionList = local_10;
  return;
}


/* ==== 004cb530  FUN_004cb530  size=295 ==== */

undefined4 FUN_004cb530(undefined4 param_1,char *param_2)

{
  char cVar1;
  void *_Dst;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  char *local_14;
  int local_c;
  
  uVar6 = 0;
  local_14 = param_2;
  pcVar3 = param_2 + 1;
  do {
    cVar1 = *local_14;
    local_14 = local_14 + 1;
  } while (cVar1 != '\0');
  iVar4 = (int)local_14 - (int)pcVar3;
  iVar5 = iVar4;
  _Dst = (void *)FUN_006f191d(iVar4 + 5);
  FUN_006e6bd0(_Dst,param_2,iVar4);
  *(undefined1 *)((int)_Dst + iVar4) = 0;
  for (local_c = 0; (local_c < 4 && (*(char *)((int)_Dst + local_c) == ' ')); local_c = local_c + 1)
  {
  }
  if (local_c < 4) {
    FUN_006e6bd0((4 - local_c) + (int)_Dst,_Dst,iVar4 + 1);
    _memset(_Dst,0x20,4 - local_c);
  }
  else if (4 < local_c) {
    FUN_006e6bd0(_Dst,(int)_Dst + local_c + -4,(iVar4 - (local_c + -4)) + 1);
  }
  uVar2 = FUN_004054a0(_Dst);
  FUN_006f1902(_Dst,uVar2,iVar5,pcVar3,uVar6 | 1);
  return param_1;
}


/* ==== 004cb660  FUN_004cb660  size=1348 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_004cb660(undefined4 param_1,CDocObjectServer *param_2,undefined1 param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  undefined1 local_2b8 [4];
  undefined1 local_2b4 [4];
  undefined1 local_2b0 [4];
  CDocObjectServer *local_2ac;
  CDocObjectServer *local_2a8;
  CDocObjectServer *local_2a4;
  CDocObjectServer *local_2a0;
  CDocObjectServer *local_29c;
  CDocObjectServer *local_298;
  CDocObjectServer *local_294;
  CDocObjectServer *local_290;
  undefined4 local_28c;
  char *local_288;
  char *local_284;
  undefined4 local_280;
  undefined4 local_27c;
  undefined4 local_278;
  undefined4 local_274;
  CDocObjectServer *local_270;
  uint local_26c;
  CDocObjectServer *local_268;
  CDocObjectServer *local_264;
  CDocObjectServer *local_260;
  CDocObjectServer *local_25c;
  char *local_258;
  CDocObjectServer local_254 [8];
  int local_24c;
  int local_224;
  int local_204;
  CDocObjectServer local_1c4 [8];
  int local_1bc;
  int local_194;
  int local_174;
  CDocObjectServer local_134 [8];
  int local_12c;
  int local_104;
  int local_e4;
  CDocObjectServer local_a4 [8];
  int local_9c;
  int local_74;
  int local_54;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00714e01;
  local_10 = ExceptionList;
  uVar1 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar1;
  if (*(int *)(param_2 + 0x34) == 0) {
    FUN_004cc240(param_3);
    CDocObjectServer::ReleaseDocSite(param_2);
  }
  else {
    iVar2 = FUN_00410b30(uVar1);
    if ((uint)(iVar2 * *(int *)(param_2 + 0x2c)) < *(uint *)(param_2 + 0x34)) {
      FUN_004cc240(param_3);
      CDocObjectServer::ReleaseDocSite(param_2);
      iVar2 = FUN_00410b30(uVar1);
      if (iVar2 * *(int *)(param_2 + 0x2c) - *(int *)(param_2 + 0x34) == 0) {
        local_26c = 0;
        local_270 = param_2 + 0x10;
        local_258 = (char *)npk_get_relative_res_path();
        local_284 = (char *)FUN_004cc180();
        for (; local_258 != local_284; local_258 = local_258 + 1) {
          local_288 = local_258;
          if (((int)*local_258 & 0x80U) != 0) {
            local_26c = local_26c + 1;
          }
        }
        uVar1 = local_26c & 0x80000001;
        if ((int)uVar1 < 0) {
          uVar1 = (uVar1 - 1 | 0xfffffffe) + 1;
        }
        if (uVar1 != 0) {
          uVar5 = 1;
          puVar4 = local_2b0;
          FUN_004cc1a0(local_2b4);
          puVar3 = (undefined4 *)FUN_004cc110(puVar4,uVar5);
          local_28c = *puVar3;
          FUN_004cc1e0(local_2b8,local_28c);
          if (*(int *)(param_2 + 0x38) == 0) {
            FUN_00411890(param_2);
            local_8 = 1;
            FUN_004cc260(param_3);
            CDocObjectServer::ReleaseDocSite(local_134);
            local_12c = local_104 + local_e4 + local_12c;
            local_278 = param_1;
            local_260 = (CDocObjectServer *)game_loop_helper_018d0();
            local_298 = (CDocObjectServer *)game_loop_helper_018b0();
            for (; local_260 != local_298; local_260 = local_260 + 0x90) {
              local_29c = local_260;
              CDocObjectServer::ReleaseDocSite(local_260);
            }
            FUN_0040d310(local_134);
            local_8 = 0xffffffff;
            FUN_0040c940();
          }
          else {
            iVar2 = FUN_00427230();
            if ((uint)(iVar2 * *(int *)(param_2 + 0x30)) < *(uint *)(param_2 + 0x38)) {
              FUN_00411890(param_2);
              local_8 = 0;
              FUN_004cc260(param_3);
              CDocObjectServer::ReleaseDocSite(local_a4);
              local_9c = local_74 + local_54 + local_9c;
              local_274 = param_1;
              local_25c = (CDocObjectServer *)game_loop_helper_018d0();
              local_290 = (CDocObjectServer *)game_loop_helper_018b0();
              for (; local_25c != local_290; local_25c = local_25c + 0x90) {
                local_294 = local_25c;
                CDocObjectServer::ReleaseDocSite(local_25c);
              }
              FUN_0040d310(local_a4);
              local_8 = 0xffffffff;
              FUN_0040c940();
            }
          }
        }
      }
    }
    else if (*(int *)(param_2 + 0x38) == 0) {
      FUN_00411890(param_2);
      local_8 = 3;
      FUN_004cc260(param_3);
      CDocObjectServer::ReleaseDocSite(local_254);
      local_24c = local_224 + local_204 + local_24c;
      local_280 = param_1;
      local_268 = (CDocObjectServer *)game_loop_helper_018d0();
      local_2a8 = (CDocObjectServer *)game_loop_helper_018b0();
      for (; local_268 != local_2a8; local_268 = local_268 + 0x90) {
        local_2ac = local_268;
        CDocObjectServer::ReleaseDocSite(local_268);
      }
      FUN_0040d310(local_254);
      local_8 = 0xffffffff;
      FUN_0040c940();
    }
    else {
      iVar2 = FUN_00427230();
      if ((uint)(iVar2 * *(int *)(param_2 + 0x30)) < *(uint *)(param_2 + 0x38)) {
        FUN_00411890(param_2);
        local_8 = 2;
        FUN_004cc260(param_3);
        CDocObjectServer::ReleaseDocSite(local_1c4);
        local_1bc = local_194 + local_174 + local_1bc;
        local_27c = param_1;
        local_264 = (CDocObjectServer *)game_loop_helper_018d0();
        local_2a0 = (CDocObjectServer *)game_loop_helper_018b0();
        for (; local_264 != local_2a0; local_264 = local_264 + 0x90) {
          local_2a4 = local_264;
          CDocObjectServer::ReleaseDocSite(local_264);
        }
        FUN_0040d310(local_1c4);
        local_8 = 0xffffffff;
        FUN_0040c940();
      }
    }
  }
  ExceptionList = local_10;
  return;
}


/* ==== 004cbbb0  FUN_004cbbb0  size=369 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_004cbbb0(undefined4 param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *this;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 in_stack_00000014;
  int in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  uint local_ac;
  uint local_a8;
  undefined1 local_a4 [4];
  undefined4 local_a0;
  int local_9c;
  undefined4 local_98;
  int local_74;
  undefined4 local_70;
  int local_54;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00714e48;
  local_10 = ExceptionList;
  uVar1 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  local_a8 = 0;
  local_14 = uVar1;
  while( true ) {
    uVar2 = FUN_004274f0(uVar1);
    if (uVar2 <= local_a8) break;
    FUN_0040b110();
    local_8 = CONCAT31(local_8._1_3_,1);
    local_a0 = in_stack_00000014;
    iVar6 = local_74 + local_54;
    iVar3 = FUN_00427230();
    local_9c = iVar6 * iVar3 + in_stack_00000018;
    local_98 = in_stack_0000001c;
    local_70 = in_stack_00000020;
    FUN_0040d310(local_a4);
    local_ac = 0;
    while( true ) {
      FUN_004274d0(local_a8);
      uVar2 = FUN_00410b30();
      if (uVar2 <= local_ac) break;
      uVar2 = local_ac;
      this = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             FUN_004274d0(local_a8);
      pcVar4 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator[]
                         (this,uVar2);
      iVar3 = FUN_00427230(*pcVar4);
      uVar5 = FUN_00427200(iVar3 + -1);
      FUN_004cb660(param_1,uVar5);
      local_ac = local_ac + 1;
    }
    local_8 = local_8 & 0xffffff00;
    FUN_0040c940();
    local_a8 = local_a8 + 1;
  }
  local_8 = 0xffffffff;
  FUN_0040d7d0();
  ExceptionList = local_10;
  return;
}


/* ==== 004cbd30  FUN_004cbd30  size=411 ==== */

char * FUN_004cbd30(char *param_1,char *param_2,char *param_3)

{
  char cVar1;
  char *pcVar2;
  char *local_14;
  char *local_10;
  char *local_c;
  
  local_c = (char *)config_find_section_marker(param_1,param_3);
  if (local_c == (char *)0x0) {
    local_c = (char *)0x0;
  }
  else if (((param_1 <= local_c + -2) && (local_c[-1] == '/')) && (local_c[-2] == '/')) {
    while( true ) {
      local_10 = param_3;
      do {
        cVar1 = *local_10;
        local_10 = local_10 + 1;
      } while (cVar1 != '\0');
      pcVar2 = (char *)config_section_span_helper(local_10 + ((int)local_c - (int)(param_3 + 1)),param_2);
      if ((pcVar2 == (char *)0x0) || (param_2 <= pcVar2)) break;
      local_c = (char *)config_find_section_marker(pcVar2,param_3);
      if ((local_c == (char *)0x0) || (param_2 <= local_c)) {
        return (char *)0x0;
      }
      local_14 = param_3;
      do {
        cVar1 = *local_14;
        local_14 = local_14 + 1;
      } while (cVar1 != '\0');
      if (param_2 < local_14 + ((int)local_c - (int)(param_3 + 1))) {
        return (char *)0x0;
      }
      if (local_c + -2 < param_1) {
        return local_c;
      }
      if (local_c[-1] != '/') {
        return local_c;
      }
      if (local_c[-2] != '/') {
        return local_c;
      }
    }
    local_c = (char *)0x0;
  }
  return local_c;
}


/* ==== 004cbed0  FUN_004cbed0  size=251 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_004cbed0(undefined4 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  function<void___cdecl(void)> local_5c [24];
  function<void___cdecl(void)> local_44 [24];
  function<void___cdecl(void)> local_2c [24];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00714ea5;
  local_10 = ExceptionList;
  uVar1 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  local_14 = uVar1;
  uVar2 = FUN_004054a0(&DAT_0074f920);
  local_8._0_1_ = 1;
  uVar3 = FUN_004054a0(&DAT_0074f91c);
  local_8._0_1_ = 2;
  uVar3 = FUN_0040e3d0(local_2c,uVar3,&stack0x00000008,uVar1);
  local_8._0_1_ = 3;
  FUN_00405cf0(param_1,uVar3,uVar2);
  local_8._0_1_ = 2;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_2c);
  local_8._0_1_ = 1;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_44);
  local_8 = (uint)local_8._1_3_ << 8;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_5c);
  local_8 = 0xffffffff;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)&stack0x00000008);
  ExceptionList = local_10;
  return param_1;
}


/* ==== 004cbfd0  FUN_004cbfd0  size=79 ==== */

void FUN_004cbfd0(undefined4 param_1,int param_2)

{
  if (param_2 == 0) {
    FUN_004054a0(&DAT_0074f930);
  }
  else if (param_2 == 1) {
    FUN_004054a0(&DAT_0074f924);
  }
  return;
}


/* ==== 004cc030  FUN_004cc030  size=106 ==== */

undefined4 FUN_004cc030(undefined4 param_1,int param_2)

{
  if (param_2 == 0) {
    FUN_004054a0(&DAT_0074f940);
  }
  else if (param_2 == 1) {
    FUN_004054a0(&DAT_0074f938);
  }
  else {
    FUN_004054a0(&DAT_0073f9be);
  }
  return param_1;
}


/* ==== 004cc0a0  FUN_004cc0a0  size=111 ==== */

undefined4 FUN_004cc0a0(void)

{
  char *pcVar1;
  char *local_c;
  
  local_c = (char *)npk_get_relative_res_path();
  pcVar1 = (char *)FUN_004cc180();
  while( true ) {
    if (local_c == pcVar1) {
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                ((function<void___cdecl(void)> *)&stack0x00000004);
      return 0;
    }
    if (((int)*local_c & 0x80U) != 0) break;
    local_c = local_c + 1;
  }
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)&stack0x00000004);
  return 1;
}


/* ==== 004cc110  FUN_004cc110  size=38 ==== */

undefined4 * FUN_004cc110(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  
  *param_1 = *in_ECX;
  FUN_004cc2c0(param_2);
  return param_1;
}


/* ==== 004cc140  FUN_004cc140  size=57 ==== */

void FUN_004cc140(_String_val<std::_Simple_types<char>_> *param_1,undefined4 param_2)

{
  char *pcVar1;
  char *pcVar2;
  _String_val<std::_Simple_types<char>_> *in_ECX;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar4 = *(undefined4 *)(param_1 + 0x10);
  pcVar1 = std::_String_val<std::_Simple_types<char>_>::_Myptr(param_1);
  uVar3 = *(undefined4 *)(in_ECX + 0x10);
  pcVar2 = std::_String_val<std::_Simple_types<char>_>::_Myptr(in_ECX);
  FUN_00428dc0(pcVar2,uVar3,param_2,pcVar1,uVar4);
  return;
}


/* ==== 004cc180  FUN_004cc180  size=25 ==== */

char * FUN_004cc180(void)

{
  char *pcVar1;
  _String_val<std::_Simple_types<char>_> *in_ECX;
  
  pcVar1 = std::_String_val<std::_Simple_types<char>_>::_Myptr(in_ECX);
  return pcVar1 + *(int *)(in_ECX + 0x10);
}


/* ==== 004cc1a0  FUN_004cc1a0  size=61 ==== */

undefined4 FUN_004cc1a0(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  int iVar3;
  _String_val<std::_Simple_types<char>_> *in_ECX;
  
  uVar1 = _Unfancy<>();
  pcVar2 = std::_String_val<std::_Simple_types<char>_>::_Myptr(in_ECX);
  iVar3 = _Unfancy<>(pcVar2,uVar1);
  _Vector_iterator<>(iVar3 + *(int *)(in_ECX + 0x10),uVar1);
  return param_1;
}


/* ==== 004cc1e0  FUN_004cc1e0  size=90 ==== */

undefined4 FUN_004cc1e0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined1 local_10 [4];
  int local_c;
  _String_val<std::_Simple_types<char>_> *local_8;
  
  iVar1 = _Unfancy<>(param_2);
  pcVar2 = std::_String_val<std::_Simple_types<char>_>::_Myptr(local_8);
  local_c = iVar1 - (int)pcVar2;
  FUN_00427af0(local_c,1);
  uVar3 = param_1;
  iVar1 = local_c;
  FUN_004cc400(local_10);
  FUN_004cc2e0(uVar3,iVar1);
  return param_1;
}


/* ==== 004cc240  FUN_004cc240  size=29 ==== */

undefined4 FUN_004cc240(undefined1 param_1)

{
  undefined4 in_ECX;
  
  FUN_004cc310(param_1);
  return in_ECX;
}


/* ==== 004cc260  FUN_004cc260  size=91 ==== */

_String_val<std::_Simple_types<char>_> * FUN_004cc260(void)

{
  char *pcVar1;
  _String_val<std::_Simple_types<char>_> *in_ECX;
  undefined1 local_5;
  
  *(undefined4 *)(in_ECX + 0x10) = 1;
  pcVar1 = std::_String_val<std::_Simple_types<char>_>::_Myptr(in_ECX);
  FUN_00405cc0(pcVar1,&stack0x00000004);
  local_5 = 0;
  FUN_00405cc0(pcVar1 + 1,&local_5);
  return in_ECX;
}


/* ==== 004cc2c0  FUN_004cc2c0  size=28 ==== */

_String_const_iterator<std::_String_val<std::_Simple_types<char>_>_> * FUN_004cc2c0(int param_1)

{
  _String_const_iterator<std::_String_val<std::_Simple_types<char>_>_> *in_ECX;
  
  std::_String_const_iterator<std::_String_val<std::_Simple_types<char>_>_>::operator-=
            (in_ECX,param_1);
  return in_ECX;
}


/* ==== 004cc2e0  FUN_004cc2e0  size=38 ==== */

undefined4 * FUN_004cc2e0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  
  *param_1 = *in_ECX;
  FUN_004cc440(param_2);
  return param_1;
}


/* ==== 004cc310  FUN_004cc310  size=132 ==== */

void FUN_004cc310(undefined1 param_1)

{
  uint uVar1;
  char *pcVar2;
  _String_val<std::_Simple_types<char>_> *in_ECX;
  undefined1 local_5;
  
  uVar1 = *(uint *)(in_ECX + 0x10);
  if (uVar1 < *(uint *)(in_ECX + 0x14)) {
    *(uint *)(in_ECX + 0x10) = uVar1 + 1;
    pcVar2 = std::_String_val<std::_Simple_types<char>_>::_Myptr(in_ECX);
    FUN_00405cc0(pcVar2 + uVar1,&param_1);
    local_5 = 0;
    FUN_00405cc0(pcVar2 + uVar1 + 1,&local_5);
  }
  else {
    FUN_004cc4a0(1,0,param_1);
  }
  return;
}


/* ==== 004cc3a0  FID_conflict:operator()  size=81 ==== */

/* Library Function - Multiple Matches With Different Base Names
    public: void __thiscall <lambda_15711c68e099a15a58f4d77303cb286d>::operator()(char * const,char
   const * const,unsigned int,char)const 
    public: void __thiscall `public: void __thiscall std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char>
   >::push_back(char)'::`2'::<lambda_1>::operator()(char * const,char const * const,unsigned
   int,char)const 
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void FID_conflict_operator__(int param_1,undefined4 param_2,int param_3)

{
  undefined1 local_5;
  
  _Unchecked_idl0<>(param_1,param_2,param_3);
  FUN_00405cc0(param_1 + param_3,&stack0x00000010);
  local_5 = 0;
  FUN_00405cc0(param_1 + 1 + param_3,&local_5);
  return;
}


/* ==== 004cc400  FUN_004cc400  size=55 ==== */

undefined4 FUN_004cc400(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined4 uVar3;
  _String_val<std::_Simple_types<char>_> *in_ECX;
  
  uVar1 = _Unfancy<>();
  pcVar2 = std::_String_val<std::_Simple_types<char>_>::_Myptr(in_ECX);
  uVar3 = _Unfancy<>(pcVar2,uVar1);
  _Vector_iterator<>(uVar3,uVar1);
  return param_1;
}


/* ==== 004cc440  FUN_004cc440  size=28 ==== */

_String_const_iterator<std::_String_val<std::_Simple_types<char>_>_> * FUN_004cc440(int param_1)

{
  _String_const_iterator<std::_String_val<std::_Simple_types<char>_>_> *in_ECX;
  
  std::_String_const_iterator<std::_String_val<std::_Simple_types<char>_>_>::operator+=
            (in_ECX,param_1);
  return in_ECX;
}


/* ==== 004cc460  operator-=  size=27 ==== */

/* Library Function - Single Match
    public: class std::_String_const_iterator<class std::_String_val<struct std::_Simple_types<char>
   > > & __thiscall std::_String_const_iterator<class std::_String_val<struct
   std::_Simple_types<char> > >::operator-=(int)
   
   Library: Visual Studio 2019 Release */

_String_const_iterator<class_std::_String_val<struct_std::_Simple_types<char>_>_> * __thiscall
std::_String_const_iterator<std::_String_val<std::_Simple_types<char>_>_>::operator-=
          (_String_const_iterator<std::_String_val<std::_Simple_types<char>_>_> *this,int param_1)

{
  _String_const_iterator<class_std::_String_val<struct_std::_Simple_types<char>_>_> *p_Var1;
  
  p_Var1 = operator+=(this,-param_1);
  return p_Var1;
}


/* ==== 004cc480  operator+=  size=29 ==== */

/* Library Function - Single Match
    public: class std::_String_const_iterator<class std::_String_val<struct std::_Simple_types<char>
   > > & __thiscall std::_String_const_iterator<class std::_String_val<struct
   std::_Simple_types<char> > >::operator+=(int)
   
   Library: Visual Studio 2019 Release */

_String_const_iterator<class_std::_String_val<struct_std::_Simple_types<char>_>_> * __thiscall
std::_String_const_iterator<std::_String_val<std::_Simple_types<char>_>_>::operator+=
          (_String_const_iterator<std::_String_val<std::_Simple_types<char>_>_> *this,int param_1)

{
  *(int *)this = *(int *)this + param_1;
  return (_String_const_iterator<class_std::_String_val<struct_std::_Simple_types<char>_>_> *)this;
}


/* ==== 004cc4a0  FUN_004cc4a0  size=278 ==== */

basic_string<char,std::char_traits<char>,std::allocator<char>_> *
FUN_004cc4a0(uint param_1,undefined4 param_2,byte param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *in_ECX;
  uint uVar6;
  int iVar7;
  undefined4 local_1c;
  int local_18;
  undefined4 local_14;
  int local_10;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_c;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_8;
  
  local_10 = *(int *)(in_ECX + 0x10);
  local_c = in_ECX;
  local_8 = in_ECX;
  uVar2 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::max_size(in_ECX);
  if (uVar2 - local_10 < param_1) {
    FUN_00403960();
  }
  local_18 = local_10 + param_1;
  uVar2 = *(uint *)(local_8 + 0x14);
  local_1c = FUN_004069d0(local_18);
  uVar3 = FUN_00401c60();
  local_14 = FUN_00407750(uVar3,&local_1c);
  FUN_00401710();
  *(int *)(local_8 + 0x10) = local_18;
  *(undefined4 *)(local_8 + 0x14) = local_1c;
  uVar4 = _Unfancy<>(local_14);
  if (uVar2 < 0x10) {
    FID_conflict_operator__(uVar4,local_8,local_10,param_3);
    FUN_004064c0(local_8,&local_14);
  }
  else {
    uVar1 = *(undefined4 *)local_8;
    uVar6 = (uint)param_3;
    iVar7 = local_10;
    uVar5 = _Unfancy<>(uVar1,local_10,uVar6);
    FID_conflict_operator__(uVar4,uVar5,iVar7,uVar6);
    FUN_00405c30(uVar3,uVar1,uVar2);
    *(undefined4 *)local_8 = local_14;
  }
  return local_c;
}


/* ==== 004cc5c0  FUN_004cc5c0  size=923 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_004cc5c0(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *in_ECX;
  undefined1 *puVar4;
  undefined4 *puVar5;
  QuickBitSet local_178 [8];
  undefined1 local_170 [4];
  undefined1 local_16c [4];
  undefined1 local_168 [4];
  undefined1 local_164 [4];
  undefined1 local_160 [4];
  undefined4 local_15c;
  undefined4 local_158;
  int local_154;
  int local_150;
  int local_14c;
  int local_148;
  int local_144;
  int local_140;
  int local_13c;
  int local_138;
  undefined4 local_134;
  undefined4 *local_130;
  uint local_8;
  
  local_8 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  puVar5 = in_ECX + 0x5c;
  puVar3 = &local_134;
  local_130 = in_ECX;
  FUN_004bcf00(puVar3,puVar5);
  FUN_0040e2f0(puVar3,puVar5);
  puVar4 = local_160;
  FUN_004bcf00(puVar4);
  uVar2 = FUN_0040d380(puVar4);
  cVar1 = FUN_0040d2d0(uVar2);
  if (cVar1 != '\0') {
    local_140 = FUN_0044de10();
    local_140 = local_140 + 0x18;
    local_138 = game_loop_helper_018d0();
    local_148 = game_loop_helper_018b0();
    for (; local_138 != local_148; local_138 = local_138 + 0x28) {
      local_14c = local_138;
      FUN_004b55a0();
    }
    FUN_0044de10();
    FUN_0040d5f0();
    puVar4 = local_164;
    FUN_004bcf00(puVar4,local_134);
    FUN_004cdeb0(puVar4,local_134);
  }
  puVar3 = local_130 + 0x62;
  puVar4 = local_168;
  FUN_004bcf00(puVar4,puVar3);
  puVar3 = (undefined4 *)FUN_0040e2f0(puVar4,puVar3);
  local_134 = *puVar3;
  puVar4 = local_16c;
  FUN_004bcf00(puVar4);
  uVar2 = FUN_0040d380(puVar4);
  cVar1 = FUN_0040d2d0(uVar2);
  if (cVar1 != '\0') {
    local_144 = FUN_0044de10();
    local_144 = local_144 + 0x18;
    local_13c = game_loop_helper_018d0();
    local_150 = game_loop_helper_018b0();
    for (; local_13c != local_150; local_13c = local_13c + 0x28) {
      local_154 = local_13c;
      FUN_004b55a0();
    }
    FUN_0044de10();
    FUN_0040d5f0();
    puVar4 = local_170;
    uVar2 = local_134;
    FUN_004bcf00(puVar4,local_134);
    FUN_004cdeb0(puVar4,uVar2);
  }
  local_130[0x27] = 0;
  local_158 = FUN_0040a880();
  FUN_00452610(local_158);
  FUN_004039a0();
  puVar3 = (undefined4 *)Concurrency::details::QuickBitSet::QuickBitSet(local_178);
  uVar2 = puVar3[1];
  *local_130 = *puVar3;
  local_130[1] = uVar2;
  local_130[0x28] = 0;
  local_130[0x29] = 0;
  local_130[0x2a] = 0;
  local_130[0x2b] = 0;
  local_130[0x2c] = 0;
  local_130[0x2d] = 0;
  local_130[0x2e] = 0;
  local_130[0x2f] = 0;
  local_130[0x30] = 0;
  CDocObjectServer::ReleaseDocSite((CDocObjectServer *)(local_130 + 0x31));
  local_15c = FUN_0040b110();
  FUN_00453d00(local_15c);
  FUN_0040c940();
  FUN_004053a0(&DAT_0073f9bf);
  local_130[0x5b] = 0xffffffff;
  FUN_004053a0(&DAT_0073f9e9);
  FUN_004053a0(&DAT_0073f9ea);
  return;
}


/* ==== 004cc960  FUN_004cc960  size=170 ==== */

QuickBitSet * FUN_004cc960(void)

{
  uint uVar1;
  QuickBitSet *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00714f18;
  local_10 = ExceptionList;
  uVar1 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  Concurrency::details::QuickBitSet::QuickBitSet(in_ECX);
  FUN_0040a880(uVar1);
  local_8 = 0;
  FUN_0040b110();
  local_8._0_1_ = 1;
  FUN_0040d8b0();
  local_8._0_1_ = 2;
  FUN_0040d8b0();
  local_8._0_1_ = 3;
  FUN_0040d8b0();
  local_8 = CONCAT31(local_8._1_3_,4);
  FUN_004cc5c0();
  ExceptionList = local_10;
  return in_ECX;
}


/* ==== 004cca10  FUN_004cca10  size=89 ==== */

void FUN_004cca10(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0xa0) = 0;
  *(undefined4 *)(in_ECX + 0xa4) = 0;
  *(undefined4 *)(in_ECX + 0xa8) = 0;
  *(undefined4 *)(in_ECX + 0xac) = 0;
  *(undefined4 *)(in_ECX + 0xb0) = 0;
  *(undefined4 *)(in_ECX + 0xb4) = 0;
  return;
}


/* ==== 004cca70  FUN_004cca70  size=3082 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int * FUN_004cca70(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  undefined4 uStack_2dc;
  int *piStack_2d8;
  undefined1 auStack_2d4 [12];
  undefined4 uStack_2c8;
  function<void___cdecl(void)> *pfStack_2c4;
  function<void___cdecl(void)> *pfStack_2c0;
  int **ppiStack_2bc;
  uint uStack_2b8;
  undefined1 *local_2b4;
  undefined1 *local_2b0;
  undefined4 local_2ac;
  undefined1 *local_2a8;
  undefined1 *local_2a4;
  undefined1 *local_2a0;
  undefined4 local_29c;
  undefined1 *local_298;
  undefined4 local_294;
  undefined1 *local_290;
  undefined4 local_28c;
  undefined1 *local_288;
  undefined4 local_284;
  undefined1 *local_280;
  undefined4 local_27c;
  undefined1 *local_278;
  undefined4 local_274;
  undefined4 local_270;
  undefined1 *local_26c;
  undefined4 local_268;
  undefined4 local_264;
  undefined4 local_260;
  undefined4 local_25c;
  undefined4 local_258;
  undefined4 local_254;
  undefined4 local_250;
  int local_24c;
  int local_248;
  int local_244;
  int local_240;
  int local_23c;
  int local_238;
  undefined4 local_234;
  undefined4 local_230;
  undefined4 local_22c;
  undefined4 local_228;
  undefined4 local_224;
  int local_220;
  int local_21c;
  int local_218;
  int local_214;
  int local_210;
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
  int local_1c0;
  undefined4 local_1bc;
  int local_1b8;
  int local_1b4;
  int *local_1b0;
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
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071502e;
  local_10 = ExceptionList;
  uStack_2b8 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  ppiStack_2bc = (int **)0x4ccaa0;
  local_14 = uStack_2b8;
  FUN_004d1b30();
  ppiStack_2bc = (int **)0x4ccaa7;
  local_1b0 = (int *)FUN_005170d0();
  ppiStack_2bc = (int **)0x4ccab2;
  iVar1 = FUN_00641430();
  local_1b0[0x28] = (iVar1 % 100 + -0x32) * 1000;
  local_1b0[0x29] = 0;
  ppiStack_2bc = (int **)0x4ccae4;
  iVar1 = FUN_00641430();
  local_1b0[0x2a] = (iVar1 % 200 + 200) * 1000;
  ppiStack_2bc = (int **)0x4ccb09;
  iVar1 = FUN_00641430();
  local_1b0[0x2e] = param_4 + -0x19 + iVar1 % 0x32;
  ppiStack_2bc = (int **)0x4ccb29;
  iVar1 = FUN_00641430();
  local_1b0[0x2f] = param_5 + -0x19 + iVar1 % 0x32;
  ppiStack_2bc = (int **)0x4ccb49;
  iVar1 = FUN_00641430();
  local_1b0[0x30] = iVar1 % 100 + param_6;
  local_1b0[3] = param_2;
  if (param_2 == 0) {
    local_1b0[4] = param_3;
    ppiStack_2bc = (int **)&DAT_0074f980;
    pfStack_2c0 = (function<void___cdecl(void)> *)0x4ccb92;
    local_22c = FUN_004054a0();
    local_8 = 0;
    ppiStack_2bc = (int **)local_1b0[4];
    pfStack_2c0 = local_74;
    pfStack_2c4 = (function<void___cdecl(void)> *)0x4ccbbe;
    local_224 = local_22c;
    pfStack_2c0 = (function<void___cdecl(void)> *)FUN_004c7c00();
    local_8._0_1_ = 1;
    ppiStack_2bc = (int **)local_22c;
    pfStack_2c4 = local_5c;
    uStack_2c8 = 0x4ccbee;
    local_230 = pfStack_2c0;
    local_228 = pfStack_2c0;
    ppiStack_2bc = (int **)FUN_00405cf0();
    pfStack_2c0 = (function<void___cdecl(void)> *)0x4ccc0f;
    local_234 = ppiStack_2bc;
    FUN_004053e0();
    ppiStack_2bc = (int **)0x4ccc17;
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_5c);
    local_8 = (uint)local_8._1_3_ << 8;
    ppiStack_2bc = (int **)0x4ccc23;
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_74);
    local_8 = 0xffffffff;
    ppiStack_2bc = (int **)0x4ccc35;
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_8c);
    ppiStack_2bc = (int **)0x74f948;
    pfStack_2c0 = (function<void___cdecl(void)> *)0x4ccc4c;
    FUN_004053a0();
    local_1b0[0x5b] = 0x1b;
    ppiStack_2bc = (int **)0x1b;
    local_2b0 = auStack_2d4;
    piStack_2d8 = (int *)0x74f964;
    uStack_2dc = 0x4ccc73;
    local_274 = FUN_004054a0();
    local_8 = 2;
    piStack_2d8 = (int *)0x4ccc85;
    FUN_004bcf00();
    local_8 = 0xffffffff;
    piStack_2d8 = (int *)0x4ccc93;
    local_210 = FUN_004b8ca0();
    *local_1b0 = *(int *)(local_210 + 0xc);
    ppiStack_2bc = (int **)0x1b;
    piStack_2d8 = (int *)0x74f990;
    uStack_2dc = 0x4cccc1;
    local_278 = auStack_2d4;
    local_27c = FUN_004054a0();
    local_8 = 3;
    piStack_2d8 = (int *)0x4cccd3;
    FUN_004bcf00();
    local_8 = 0xffffffff;
    piStack_2d8 = (int *)0x4ccce1;
    local_238 = FUN_004b8ca0();
    local_1b0[1] = *(int *)(local_238 + 0x10);
  }
  else {
    ppiStack_2bc = (int **)param_2;
    pfStack_2c0 = (function<void___cdecl(void)> *)0x4ccd07;
    iVar1 = game_loop_helper_caba0();
    if (iVar1 == 0x71) {
      ppiStack_2bc = (int **)param_2;
      pfStack_2c0 = (function<void___cdecl(void)> *)0x4ccd1c;
      iVar1 = FUN_006c8730();
      if (iVar1 == 1) {
        ppiStack_2bc = (int **)0x4ccd29;
        iVar1 = FUN_00641430();
        local_1b0[6] = iVar1 % 100;
        ppiStack_2bc = (int **)local_1b0[3];
        pfStack_2c0 = (function<void___cdecl(void)> *)0x4ccd49;
        game_loop_helper_e9240();
        pfStack_2c0 = (function<void___cdecl(void)> *)0x4ccd50;
        iVar1 = game_loop_helper_cc840();
        local_1b0[10] = *(int *)(iVar1 + 0x148);
      }
      ppiStack_2bc = (int **)param_2;
      pfStack_2c0 = (function<void___cdecl(void)> *)0x4ccd6e;
      local_1b8 = game_loop_helper_cc840();
      ppiStack_2bc = *(int ***)(local_1b8 + 0x120);
      local_280 = auStack_2d4;
      piStack_2d8 = (int *)(local_1b8 + 0x108);
      uStack_2dc = 0x4ccd9d;
      local_284 = FUN_00405520();
      local_8 = 4;
      piStack_2d8 = (int *)0x4ccdaf;
      FUN_004bcf00();
      local_8 = 0xffffffff;
      piStack_2d8 = (int *)0x4ccdbd;
      local_23c = FUN_004b8ca0();
      *local_1b0 = *(int *)(local_23c + 0xc);
      ppiStack_2bc = *(int ***)(local_1b8 + 0x120);
      piStack_2d8 = (int *)(local_1b8 + 0x108);
      uStack_2dc = 0x4ccdfd;
      local_288 = auStack_2d4;
      local_28c = FUN_00405520();
      local_8 = 5;
      piStack_2d8 = (int *)0x4cce0f;
      FUN_004bcf00();
      local_8 = 0xffffffff;
      piStack_2d8 = (int *)0x4cce1d;
      local_244 = FUN_004b8ca0();
      local_1b0[1] = *(int *)(local_244 + 0x10);
      ppiStack_2bc = (int **)(local_1b8 + 0xc);
      pfStack_2c0 = (function<void___cdecl(void)> *)0x4cce50;
      FUN_0040d840();
      if (*(int *)(local_1b8 + 0xb8) == 1) {
        local_1b0[0x34] = -0x972a13;
      }
      else if (*(int *)(local_1b8 + 0xb8) == 2) {
        local_1b0[0x34] = -0x4c9401;
      }
      else if (*(int *)(local_1b8 + 0xb8) == 3) {
        local_1b0[0x34] = -0xff10;
      }
      else if (*(int *)(local_1b8 + 0xb8) == 4) {
        local_1b0[0x34] = -0x4f00;
      }
      ppiStack_2bc = (int **)(local_1b8 + 0x108);
      pfStack_2c0 = (function<void___cdecl(void)> *)0x4ccef1;
      FUN_0040d840();
      local_1b0[0x5b] = *(int *)(local_1b8 + 0x120);
    }
    else {
      ppiStack_2bc = (int **)param_2;
      pfStack_2c0 = (function<void___cdecl(void)> *)0x4ccf17;
      iVar1 = game_loop_helper_caba0();
      if (iVar1 == 0x8e) {
        local_1b0[4] = param_3;
        ppiStack_2bc = (int **)param_2;
        pfStack_2c0 = (function<void___cdecl(void)> *)0x4ccf40;
        local_1b4 = game_loop_helper_cd6d0();
        ppiStack_2bc = *(int ***)(local_1b4 + 0xe4);
        local_290 = auStack_2d4;
        piStack_2d8 = (int *)(local_1b4 + 0xcc);
        uStack_2dc = 0x4ccf70;
        local_294 = FUN_00405520();
        local_8 = 6;
        piStack_2d8 = (int *)0x4ccf82;
        FUN_004bcf00();
        local_8 = 0xffffffff;
        piStack_2d8 = (int *)0x4ccf90;
        local_248 = FUN_004b8ca0();
        *local_1b0 = *(int *)(local_248 + 0xc);
        ppiStack_2bc = *(int ***)(local_1b4 + 0xe4);
        piStack_2d8 = (int *)(local_1b4 + 0xcc);
        uStack_2dc = 0x4ccfd1;
        local_298 = auStack_2d4;
        local_29c = FUN_00405520();
        local_8 = 7;
        piStack_2d8 = (int *)0x4ccfe3;
        FUN_004bcf00();
        local_8 = 0xffffffff;
        piStack_2d8 = (int *)0x4ccff1;
        local_24c = FUN_004b8ca0();
        local_1b0[1] = *(int *)(local_24c + 0x10);
        if (param_3 < 2) {
          ppiStack_2bc = (int **)local_1b4;
          pfStack_2c0 = (function<void___cdecl(void)> *)0x4cd19a;
          FUN_0040d840();
        }
        else {
          ppiStack_2bc = (int **)&DAT_0074f9ac;
          pfStack_2c0 = (function<void___cdecl(void)> *)0x4cd023;
          local_250 = FUN_004054a0();
          local_8 = 8;
          ppiStack_2bc = (int **)param_3;
          pfStack_2c0 = local_ec;
          pfStack_2c4 = (function<void___cdecl(void)> *)0x4cd04c;
          local_1cc = local_250;
          local_264 = FUN_0040a850();
          local_8._0_1_ = 9;
          ppiStack_2bc = (int **)&DAT_0074f984;
          pfStack_2c0 = (function<void___cdecl(void)> *)0x4cd072;
          local_254 = local_264;
          ppiStack_2bc = (int **)FUN_004054a0();
          local_8._0_1_ = 10;
          pfStack_2c0 = (function<void___cdecl(void)> *)local_1b4;
          pfStack_2c4 = local_d4;
          uStack_2c8 = 0x4cd0a2;
          local_25c = ppiStack_2bc;
          local_258 = ppiStack_2bc;
          pfStack_2c0 = (function<void___cdecl(void)> *)FUN_00427c80();
          local_8._0_1_ = 0xb;
          ppiStack_2bc = (int **)local_264;
          pfStack_2c4 = local_bc;
          uStack_2c8 = 0x4cd0d5;
          local_260 = pfStack_2c0;
          local_1c4 = pfStack_2c0;
          pfStack_2c0 = (function<void___cdecl(void)> *)FUN_00405cf0();
          local_8._0_1_ = 0xc;
          ppiStack_2bc = (int **)local_1cc;
          pfStack_2c4 = local_a4;
          uStack_2c8 = 0x4cd108;
          local_1d0 = pfStack_2c0;
          local_1c8 = pfStack_2c0;
          ppiStack_2bc = (int **)FUN_00405cf0();
          pfStack_2c0 = (function<void___cdecl(void)> *)0x4cd129;
          local_1d4 = ppiStack_2bc;
          FUN_004053e0();
          ppiStack_2bc = (int **)0x4cd134;
          std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_a4);
          local_8._0_1_ = 0xb;
          ppiStack_2bc = (int **)0x4cd143;
          std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_bc);
          local_8._0_1_ = 10;
          ppiStack_2bc = (int **)0x4cd152;
          std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_d4);
          local_8._0_1_ = 9;
          ppiStack_2bc = (int **)0x4cd15e;
          std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_44);
          local_8 = CONCAT31(local_8._1_3_,8);
          ppiStack_2bc = (int **)0x4cd16d;
          std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_ec);
          local_8 = 0xffffffff;
          ppiStack_2bc = (int **)0x4cd17f;
          std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_104);
        }
        if (*(int *)(local_1b4 + 0x94) == 1) {
          local_1b0[0x34] = -0x972a13;
        }
        else if (*(int *)(local_1b4 + 0x94) == 2) {
          local_1b0[0x34] = -0x4c9401;
        }
        else if (*(int *)(local_1b4 + 0x94) == 3) {
          local_1b0[0x34] = -0xff10;
        }
        else if (*(int *)(local_1b4 + 0x94) == 4) {
          local_1b0[0x34] = -0x4f00;
        }
        ppiStack_2bc = (int **)(local_1b4 + 0xcc);
        pfStack_2c0 = (function<void___cdecl(void)> *)0x4cd23b;
        FUN_0040d840();
        local_1b0[0x5b] = *(int *)(local_1b4 + 0xe4);
      }
    }
  }
  ppiStack_2bc = (int **)DAT_007ca1ac;
  pfStack_2c0 = local_164;
  pfStack_2c4 = (function<void___cdecl(void)> *)0x4cd265;
  local_1e8 = FUN_0040a850();
  local_8 = 0xd;
  ppiStack_2bc = (int **)&DAT_0074f988;
  pfStack_2c0 = (function<void___cdecl(void)> *)0x4cd291;
  local_1d8 = local_1e8;
  pfStack_2c0 = (function<void___cdecl(void)> *)FUN_004054a0();
  local_8._0_1_ = 0xe;
  ppiStack_2bc = (int **)(local_1b0 + 0x35);
  pfStack_2c4 = local_134;
  uStack_2c8 = 0x4cd2c7;
  local_1e0 = pfStack_2c0;
  local_1dc = pfStack_2c0;
  pfStack_2c0 = (function<void___cdecl(void)> *)FUN_0040e3d0();
  local_8._0_1_ = 0xf;
  ppiStack_2bc = (int **)local_1e8;
  pfStack_2c4 = local_11c;
  uStack_2c8 = 0x4cd2fa;
  local_1ec = pfStack_2c0;
  local_1e4 = pfStack_2c0;
  ppiStack_2bc = (int **)FUN_00405cf0();
  pfStack_2c0 = (function<void___cdecl(void)> *)0x4cd31b;
  local_1f0 = ppiStack_2bc;
  FUN_004053e0();
  ppiStack_2bc = (int **)0x4cd326;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_11c);
  local_8._0_1_ = 0xe;
  ppiStack_2bc = (int **)0x4cd335;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_134);
  local_8 = CONCAT31(local_8._1_3_,0xd);
  ppiStack_2bc = (int **)0x4cd344;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_14c);
  local_8 = 0xffffffff;
  ppiStack_2bc = (int **)0x4cd356;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_164);
  ppiStack_2bc = (int **)DAT_007ca1ac;
  pfStack_2c0 = local_2c;
  pfStack_2c4 = (function<void___cdecl(void)> *)0x4cd366;
  local_204 = FUN_0040a850();
  local_8 = 0x10;
  ppiStack_2bc = (int **)&DAT_0074f9b0;
  pfStack_2c0 = (function<void___cdecl(void)> *)0x4cd392;
  local_1f4 = local_204;
  pfStack_2c0 = (function<void___cdecl(void)> *)FUN_004054a0();
  local_8._0_1_ = 0x11;
  ppiStack_2bc = (int **)(local_1b0 + 0x35);
  pfStack_2c4 = local_194;
  uStack_2c8 = 0x4cd3c8;
  local_1fc = pfStack_2c0;
  local_1f8 = pfStack_2c0;
  pfStack_2c0 = (function<void___cdecl(void)> *)FUN_0040e3d0();
  local_8._0_1_ = 0x12;
  ppiStack_2bc = (int **)local_204;
  pfStack_2c4 = local_17c;
  uStack_2c8 = 0x4cd3fb;
  local_208 = pfStack_2c0;
  local_200 = pfStack_2c0;
  ppiStack_2bc = (int **)FUN_00405cf0();
  pfStack_2c0 = (function<void___cdecl(void)> *)0x4cd41c;
  local_20c = ppiStack_2bc;
  FUN_004053e0();
  ppiStack_2bc = (int **)0x4cd427;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_17c);
  local_8._0_1_ = 0x11;
  ppiStack_2bc = (int **)0x4cd436;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_194);
  local_8 = CONCAT31(local_8._1_3_,0x10);
  ppiStack_2bc = (int **)0x4cd445;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_1ac);
  local_8 = 0xffffffff;
  ppiStack_2bc = (int **)0x4cd454;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_2c);
  ppiStack_2bc = (int **)0x4cd466;
  iVar1 = FUN_00410b30();
  ppiStack_2bc = (int **)((uint)(iVar1 * 6) / 0xc);
  pfStack_2c0 = (function<void___cdecl(void)> *)0x4cd478;
  FUN_004cdee0();
  ppiStack_2bc = (int **)0x4cd480;
  pfStack_2c4 = (function<void___cdecl(void)> *)thunk_FUN_006e5750();
  ppiStack_2bc = (int **)0x1;
  pfStack_2c0 = (function<void___cdecl(void)> *)0x1;
  local_2a0 = (undefined1 *)&uStack_2dc;
  local_1bc = pfStack_2c4;
  FUN_00405520(local_1b0 + 0x5c);
  local_240 = d3d9_create_texture_004b7450();
  if (local_240 != 0) {
    ppiStack_2bc = (int **)0x2;
    pfStack_2c0 = (function<void___cdecl(void)> *)0x1;
    pfStack_2c4 = (function<void___cdecl(void)> *)local_1bc;
    local_2a4 = (undefined1 *)&uStack_2dc;
    FUN_00405520(local_1b0 + 0x62);
    local_214 = d3d9_create_texture_004b7450();
    if (local_214 != 0) {
      ppiStack_2bc = (int **)0x0;
      local_2a8 = auStack_2d4;
      piStack_2d8 = local_1b0 + 0x5c;
      uStack_2dc = 0x4cd52f;
      local_2ac = FUN_00405520();
      local_8 = 0x13;
      piStack_2d8 = (int *)0x4cd541;
      FUN_004bcf00();
      local_8 = 0xffffffff;
      piStack_2d8 = (int *)0x4cd54f;
      local_218 = FUN_004b8ca0();
      if (*(int *)(local_218 + 0xc) < *local_1b0) {
        local_1c0 = *local_1b0;
      }
      else {
        ppiStack_2bc = (int **)0x0;
        piStack_2d8 = local_1b0 + 0x5c;
        uStack_2dc = 0x4cd596;
        local_2b4 = auStack_2d4;
        local_268 = FUN_00405520();
        local_8 = 0x14;
        piStack_2d8 = (int *)0x4cd5a8;
        FUN_004bcf00();
        local_8 = 0xffffffff;
        piStack_2d8 = (int *)0x4cd5b6;
        local_21c = FUN_004b8ca0();
        local_1c0 = *(int *)(local_21c + 0xc);
      }
      *local_1b0 = local_1c0;
      ppiStack_2bc = (int **)0x0;
      local_26c = auStack_2d4;
      piStack_2d8 = local_1b0 + 0x5c;
      uStack_2dc = 0x4cd5f8;
      local_270 = FUN_00405520();
      local_8 = 0x15;
      piStack_2d8 = (int *)0x4cd60a;
      FUN_004bcf00();
      local_8 = 0xffffffff;
      piStack_2d8 = (int *)0x4cd618;
      local_220 = FUN_004b8ca0();
      local_1b0[1] = local_1b0[1] + *(int *)(local_220 + 0x10);
      DAT_007ca1ac = DAT_007ca1ac + 1;
      ppiStack_2bc = &local_1b0;
      pfStack_2c0 = (function<void___cdecl(void)> *)0x4cd657;
      FUN_0040d490();
      ExceptionList = local_10;
      return local_1b0;
    }
  }
  ExceptionList = local_10;
  return (int *)0x0;
}


/* ==== 004cd680  FUN_004cd680  size=2096 ==== */

void FUN_004cd680(undefined4 param_1,int *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_b4 [24];
  undefined4 uStack_9c;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  undefined4 uStack_88;
  undefined4 local_84;
  int local_80;
  int iStack_7c;
  int local_78;
  undefined1 *local_74;
  undefined1 *local_70;
  undefined1 *local_6c;
  undefined1 *local_68;
  undefined1 *local_64;
  undefined1 *local_60;
  uint local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int *local_48;
  int *local_44;
  undefined4 local_40;
  int local_3c;
  int local_38;
  int local_34;
  undefined4 local_30;
  int local_2c;
  int local_28;
  int local_24;
  int *local_20;
  int *local_1c;
  int *local_18;
  int local_14;
  int local_10;
  int *local_c;
  char local_5;
  
  local_78 = 0x4cd68e;
  cVar1 = game_frame_should_continue();
  if (cVar1 == '\0') {
    local_30 = param_1;
    local_78 = 0x4cd6a8;
    local_1c = (int *)game_loop_helper_018d0();
    local_78 = 0x4cd6b3;
    local_44 = (int *)game_loop_helper_018b0();
    for (; local_1c != local_44; local_1c = local_1c + 1) {
      local_c = local_1c;
      if (*local_1c != 0) {
        if (0 < *(int *)(*local_1c + 0xc0)) {
          *(int *)(*local_1c + 0xac) =
               *(int *)(*local_1c + 0xa0) * param_3 + *(int *)(*local_1c + 0xac);
          *(int *)(*local_1c + 0xb0) =
               *(int *)(*local_1c + 0xa4) * param_3 + *(int *)(*local_1c + 0xb0);
          *(int *)(*local_1c + 0xb4) =
               *(int *)(*local_1c + 0xa8) * param_3 + *(int *)(*local_1c + 0xb4);
          *(int *)(*local_1c + 0xa8) = *(int *)(*local_1c + 0xa8) + param_3 * -0x5dc;
          local_34 = *(int *)(*local_1c + 0xac) / 1000000;
          local_38 = *(int *)(*local_1c + 0xb0) / 1000000;
          local_3c = *(int *)(*local_1c + 0xb4) / 1000000;
          local_10 = *(int *)(*local_1c + 0xb8) + local_34;
          local_14 = *(int *)(*local_1c + 0xbc) + local_38;
          local_4c = *(int *)(*local_1c + 0xc0) + local_3c;
          *(int *)(*local_1c + 0xac) = *(int *)(*local_1c + 0xac) + local_34 * -1000000;
          *(int *)(*local_1c + 0xb0) = *(int *)(*local_1c + 0xb0) + local_38 * -1000000;
          *(int *)(*local_1c + 0xb4) = *(int *)(*local_1c + 0xb4) + local_3c * -1000000;
          local_5 = '\0';
          local_78 = 0x4cd858;
          iVar2 = game_get_player_or_session_blob();
          if (*(char *)(iVar2 + 0xdb8) == '\0') {
            local_78 = *(undefined4 *)(*local_c + 0xbc);
            iStack_7c = local_10;
            local_80 = 0x4cd87c;
            game_get_player_or_session_blob();
            local_80 = 0x4cd883;
            cVar1 = FUN_00634bb0();
            if (cVar1 == '\0') {
              local_78 = 0;
              iStack_7c = *(int *)(*local_c + 0xbc);
              local_80 = local_10;
              local_84 = 0x4cd8a1;
              local_84 = FUN_00634ac0();
              uStack_88 = 0x4cd8a7;
              cVar1 = FUN_00634570();
              if (cVar1 == '\0') {
                local_78 = local_14;
                iStack_7c = *(int *)(*local_c + 0xb8);
                local_80 = 0x4cd8cf;
                game_get_player_or_session_blob();
                local_80 = 0x4cd8d6;
                cVar1 = FUN_00634bb0();
                if (cVar1 == '\0') {
                  local_78 = 0;
                  iStack_7c = local_14;
                  local_80 = *(int *)(*local_c + 0xb8);
                  local_84 = 0x4cd8f4;
                  local_84 = FUN_00634ac0();
                  uStack_88 = 0x4cd8fa;
                  cVar1 = FUN_00634570();
                  if (cVar1 == '\0') {
                    local_78 = local_14;
                    iStack_7c = local_10;
                    local_80 = 0x4cd917;
                    game_get_player_or_session_blob();
                    local_80 = 0x4cd91e;
                    cVar1 = FUN_00634bb0();
                    if (cVar1 == '\0') {
                      local_78 = 0;
                      iStack_7c = local_14;
                      local_80 = local_10;
                      local_84 = 0x4cd934;
                      local_84 = FUN_00634ac0();
                      uStack_88 = 0x4cd93a;
                      cVar1 = FUN_00634570();
                      if (cVar1 == '\0') goto LAB_004cda8a;
                    }
                    local_5 = '\x01';
                    goto LAB_004cda8a;
                  }
                }
                local_5 = '\x01';
                goto LAB_004cda8a;
              }
            }
            local_5 = '\x01';
          }
          else {
            local_78 = 0x4cd952;
            local_40 = FUN_004d1a70();
            local_78 = 0x4cd95d;
            local_20 = (int *)game_loop_helper_018d0();
            local_78 = 0x4cd968;
            local_48 = (int *)game_loop_helper_018b0();
            for (; local_20 != local_48; local_20 = local_20 + 1) {
              local_18 = local_20;
              if ((*local_20 != 0) && (*(char *)(*local_20 + 0xdb9) != '\0')) {
                local_78 = *(undefined4 *)(*local_c + 0xbc);
                iStack_7c = local_10;
                local_80 = 0x4cd9c2;
                cVar1 = FUN_00634bb0();
                if (cVar1 == '\0') {
                  local_78 = 0;
                  iStack_7c = *(int *)(*local_c + 0xbc);
                  local_80 = local_10;
                  local_84 = 0x4cd9e0;
                  local_84 = FUN_00634ac0();
                  uStack_88 = 0x4cd9e6;
                  cVar1 = FUN_00634570();
                  if (cVar1 == '\0') {
                    local_78 = local_14;
                    iStack_7c = *(int *)(*local_c + 0xb8);
                    local_80 = 0x4cda13;
                    cVar1 = FUN_00634bb0();
                    if (cVar1 == '\0') {
                      local_78 = 0;
                      iStack_7c = local_14;
                      local_80 = *(int *)(*local_c + 0xb8);
                      local_84 = 0x4cda31;
                      local_84 = FUN_00634ac0();
                      uStack_88 = 0x4cda37;
                      cVar1 = FUN_00634570();
                      if (cVar1 == '\0') {
                        local_78 = local_14;
                        iStack_7c = local_10;
                        local_80 = 0x4cda59;
                        cVar1 = FUN_00634bb0();
                        if (cVar1 == '\0') {
                          local_78 = 0;
                          iStack_7c = local_14;
                          local_80 = local_10;
                          local_84 = 0x4cda6f;
                          local_84 = FUN_00634ac0();
                          uStack_88 = 0x4cda75;
                          cVar1 = FUN_00634570();
                          if (cVar1 == '\0') break;
                        }
                        local_5 = '\x01';
                        break;
                      }
                    }
                    local_5 = '\x01';
                    break;
                  }
                }
                local_5 = '\x01';
                break;
              }
            }
          }
LAB_004cda8a:
          if (local_5 == '\0') {
            *(int *)(*local_c + 0xb8) = local_10;
            *(int *)(*local_c + 0xbc) = local_14;
          }
          else {
            *(undefined4 *)(*local_c + 0xac) = 0;
            *(undefined4 *)(*local_c + 0xb0) = 0;
          }
          *(int *)(*local_c + 0xc0) = local_4c;
          if (*(int *)(*local_c + 0xc0) < 1) {
            *(undefined4 *)(*local_c + 0xc0) = 0;
            *(undefined4 *)(*local_c + 0xa0) = 0;
            *(undefined4 *)(*local_c + 0xa4) = 0;
            *(undefined4 *)(*local_c + 0xa8) = 0;
            *(undefined4 *)(*local_c + 0xac) = 0;
            *(undefined4 *)(*local_c + 0xb0) = 0;
            *(undefined4 *)(*local_c + 0xb4) = 0;
          }
        }
        local_78 = 0;
        local_60 = (undefined1 *)&iStack_90;
        iStack_94 = *local_c + 0x170;
        iStack_98 = 0x4cdb6d;
        FUN_00405520();
        iStack_94 = 0x4cdb78;
        local_50 = FUN_004b8ca0();
        local_78 = *(undefined4 *)(*local_c + 0x16c);
        local_64 = (undefined1 *)&iStack_90;
        iStack_94 = *local_c + 0x154;
        iStack_98 = 0x4cdba5;
        local_24 = local_50;
        FUN_00405520();
        iStack_94 = 0x4cdbb0;
        local_54 = FUN_004b8ca0();
        local_2c = (*(int *)(local_24 + 0xc) - *(int *)(local_54 + 0xc)) / 2;
        local_28 = *(int *)(local_24 + 0x10);
        if (*(int *)(*local_c + 0x9c) == 0) {
          local_78 = 0;
          iStack_7c = 0;
          local_80 = 0x3f800000;
          local_84 = 0x3f800000;
          uStack_88 = 0xffffffff;
          iStack_8c = (*(int *)(*local_c + 0xbc) - *(int *)(*local_c + 0xc0)) - param_2[1];
          iStack_90 = *(int *)(*local_c + 0xb8) - *param_2;
          iStack_94 = -local_28;
          iStack_98 = -local_2c;
          uStack_9c = 0;
          local_68 = auStack_b4;
          FUN_00405520(*local_c + 0x170);
          FUN_004baec0();
        }
        else {
          local_78 = 0;
          iStack_7c = 0;
          local_80 = 0x3f800000;
          local_84 = 0x3f800000;
          uStack_88 = 0xffffffff;
          iStack_8c = (*(int *)(*local_c + 0xbc) - *(int *)(*local_c + 0xc0)) - param_2[1];
          iStack_90 = *(int *)(*local_c + 0xb8) - *param_2;
          iStack_94 = -local_28;
          iStack_98 = -local_2c;
          uStack_9c = 0;
          local_6c = auStack_b4;
          FUN_00405520(*local_c + 0x188);
          FUN_004baec0();
        }
        local_78 = 0x4cdd09;
        iVar2 = FUN_00410b30();
        local_5c = (uint)(*(int *)(local_24 + 0xc) - (iVar2 * 6 + 2)) >> 1;
        local_58 = (*(int *)(local_24 + 0x10) + -0xe) / 2;
        local_78 = (((*(int *)(*local_c + 0xbc) - *(int *)(*local_c + 0xc0)) - local_28) + local_58)
                   - param_2[1];
        iStack_7c = ((*(int *)(*local_c + 0xb8) - local_2c) + local_5c) - *param_2;
        local_80 = *local_c + 0xc4;
        local_84 = 0x4cdd7e;
        FUN_004bb400();
        local_78 = 0;
        iStack_7c = 0;
        local_80 = 0x3f800000;
        local_84 = 0x3f800000;
        uStack_88 = 0xffffffff;
        iStack_8c = (*(int *)(*local_c + 0xbc) - *(int *)(*local_c + 0xc0)) - param_2[1];
        iStack_90 = *(int *)(*local_c + 0xb8) - *param_2;
        iStack_94 = 0;
        iStack_98 = 0;
        uStack_9c = *(undefined4 *)(*local_c + 0x16c);
        local_70 = auStack_b4;
        FUN_00405520(*local_c + 0x154);
        FUN_004baec0();
        if (*(int *)(*local_c + 0x9c) != 0) {
          local_78 = 0;
          iStack_7c = 0;
          local_80 = 0x3f800000;
          local_84 = 0x3f800000;
          uStack_88 = 0xffffffff;
          iStack_8c = (*(int *)(*local_c + 0xbc) - *(int *)(*local_c + 0xc0)) - param_2[1];
          iStack_90 = *(int *)(*local_c + 0xb8) - *param_2;
          iStack_94 = 0;
          iStack_98 = 0;
          uStack_9c = *(undefined4 *)(*local_c + 0x16c);
          local_74 = auStack_b4;
          FUN_00405520(*local_c + 0x154);
          d3d9_matrix_transform_2d_004ba420();
        }
      }
    }
  }
  return;
}


/* ==== 004cdeb0  FUN_004cdeb0  size=44 ==== */

undefined4 FUN_004cdeb0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_004cdf20(param_2);
  FUN_0040f070(param_1,uVar1);
  return param_1;
}


/* ==== 004cdee0  FUN_004cdee0  size=58 ==== */

void FUN_004cdee0(int param_1)

{
  FUN_006f5c30((double)param_1 + *(double *)(&DAT_00795d70 + (param_1 >> 0x1f) * -8));
  return;
}


/* ==== 004cdf20  FUN_004cdf20  size=73 ==== */

void FUN_004cdf20(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = _Unfancy<>(param_1 + 8);
  uVar1 = FUN_0042a7d0(uVar1);
  FUN_0040ef70(param_1,uVar1);
  FUN_0040f000(param_1);
  return;
}


/* ==== 004cdf70  FID_conflict:__vfprintf_l  size=41 ==== */

/* Library Function - Multiple Matches With Different Base Names
    __vfprintf_l
    __vfwprintf_l
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

int __cdecl FID_conflict___vfprintf_l(FILE *_File,char *_Format,_locale_t _Locale,va_list _ArgList)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_00414e00(_File,_Format,_Locale,_ArgList);
  iVar2 = FUN_006ec556(*puVar1,puVar1[1]);
  return iVar2;
}


/* ==== 004cdfa0  FID_conflict:_fwprintf  size=51 ==== */

/* Library Function - Multiple Matches With Different Base Names
    _fprintf
    _fwprintf
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

int __cdecl FID_conflict__fwprintf(FILE *_File,wchar_t *_Format,...)

{
  int iVar1;
  
  iVar1 = FID_conflict___vfprintf_l(_File,(char *)_Format,(_locale_t)0x0,&stack0x0000000c);
  return iVar1;
}


/* ==== 004cdfe0  FUN_004cdfe0  size=119 ==== */

undefined4 FUN_004cdfe0(undefined4 param_1,int *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int local_10;
  int *local_c;
  int local_8;
  
  local_c = (int *)FUN_006f390a();
  local_8 = npk_get_relative_res_path();
  *local_c = 0;
  uVar1 = FUN_006f391d(local_8,&local_10,param_3);
  if (local_8 == local_10) {
    FUN_006e38b3("invalid stoi argument");
  }
  if (*local_c == 0x22) {
    FUN_006e38f3("stoi argument out of range");
  }
  if (param_2 != (int *)0x0) {
    *param_2 = local_10 - local_8;
  }
  return uVar1;
}


/* ==== 004ce060  FUN_004ce060  size=138 ==== */

undefined4 FUN_004ce060(void)

{
  undefined4 in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00715083;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0040d8b0(DAT_007c5940 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  FUN_0040d8b0();
  local_8._0_1_ = 1;
  FUN_0040d650();
  local_8 = CONCAT31(local_8._1_3_,2);
  FUN_004053a0(&DAT_007793b1);
  FUN_004053a0(&DAT_007793b1);
  ExceptionList = local_10;
  return in_ECX;
}


/* ==== 004ce0f0  CMFCToolBarInfo  size=93 ==== */

/* Library Function - Single Match
    public: __thiscall CMFCToolBarInfo::CMFCToolBarInfo(void)
   
   Library: Visual Studio 2010 Debug */

CMFCToolBarInfo * __thiscall CMFCToolBarInfo::CMFCToolBarInfo(CMFCToolBarInfo *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  return this;
}


/* ==== 004ce150  FUN_004ce150  size=100 ==== */

void FUN_004ce150(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  FUN_0040a900();
  in_ECX[0x2e] = 0;
  _memset(in_ECX + 0x2f,0,0x100);
  return;
}


/* ==== 004ce1c0  FUN_004ce1c0  size=33 ==== */

undefined4 * FUN_004ce1c0(void)

{
  undefined4 *in_ECX;
  
  in_ECX[1] = 0;
  *in_ECX = 0;
  return in_ECX;
}


/* ==== 004ce1f0  FUN_004ce1f0  size=40 ==== */

int FUN_004ce1f0(int param_1)

{
  int in_ECX;
  
  FUN_004053e0(param_1);
  *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(param_1 + 0x18);
  return in_ECX;
}


/* ==== 004ce220  FUN_004ce220  size=291 ==== */

undefined1 * FUN_004ce220(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined1 *in_ECX;
  undefined4 in_stack_00000028;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_007150c3;
  local_10 = ExceptionList;
  uVar1 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  *in_ECX = 1;
  *(undefined4 *)(in_ECX + 4) = param_1;
  *(undefined4 *)(in_ECX + 8) = param_2;
  *(undefined4 *)(in_ECX + 0xc) = param_3;
  FUN_00405520(&stack0x00000010);
  local_8._0_1_ = 1;
  *(undefined4 *)(in_ECX + 0x28) = in_stack_00000028;
  *(undefined4 *)(in_ECX + 0x2c) = 6;
  *(undefined4 *)(in_ECX + 0x30) = 0xc;
  in_ECX[0x3c] = 0;
  *(undefined4 *)(in_ECX + 0x4c) = 1;
  *(undefined4 *)(in_ECX + 0x50) = 2;
  *(undefined4 *)(in_ECX + 0x54) = 0x78;
  *(undefined4 *)(in_ECX + 0x58) = 0;
  *(undefined4 *)(in_ECX + 0x5c) = 0;
  FUN_0040d650(uVar1);
  local_8 = CONCAT31(local_8._1_3_,2);
  *(undefined4 *)(in_ECX + 0x6c) = 0;
  in_ECX[0x70] = 0;
  FUN_004054a0(&DAT_007793b1);
  *(undefined4 *)(in_ECX + 0x8c) = 0xff;
  FUN_0040d770();
  local_8 = 0xffffffff;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)&stack0x00000010);
  ExceptionList = local_10;
  return in_ECX;
}


/* ==== 004ce350  FUN_004ce350  size=33 ==== */

undefined4 * FUN_004ce350(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0xffffffac;
  return in_ECX;
}


/* ==== 004ce380  FUN_004ce380  size=129 ==== */

void FUN_004ce380(void)

{
  undefined1 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  in_ECX[0xe] = 0;
  in_ECX[0xf] = 0;
  in_ECX[0x10] = 0;
  return;
}


/* ==== 004ce410  FUN_004ce410  size=276 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_004ce410(void)

{
  undefined4 uVar1;
  undefined4 in_ECX;
  _RunAllParam<unsigned_char> local_a8 [60];
  _RunAllParam<unsigned_char> local_6c [88];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071510c;
  local_10 = ExceptionList;
  local_14 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_00498c80(local_14);
  local_8 = 0;
  FUN_004ce060();
  local_8._0_1_ = 1;
  FUN_004ce060();
  local_8 = CONCAT31(local_8._1_3_,2);
  uVar1 = FUN_00498c80();
  FUN_004ce1f0(uVar1);
  FUN_004089b0();
  uVar1 = FUN_004ce060();
  FUN_004ce560(uVar1);
  Concurrency::details::_RunAllParam<unsigned_char>::~_RunAllParam<unsigned_char>(local_6c);
  uVar1 = FUN_004ce060();
  FUN_004ce560(uVar1);
  Concurrency::details::_RunAllParam<unsigned_char>::~_RunAllParam<unsigned_char>(local_a8);
  ExceptionList = local_10;
  return in_ECX;
}


/* ==== 004ce530  ~_RunAllParam<unsigned_char>  size=42 ==== */

/* Library Function - Single Match
    public: __thiscall Concurrency::details::_RunAllParam<unsigned char>::~_RunAllParam<unsigned
   char>(void)
   
   Libraries: Visual Studio 2012 Debug, Visual Studio 2012 Release */

void __thiscall
Concurrency::details::_RunAllParam<unsigned_char>::~_RunAllParam<unsigned_char>
          (_RunAllParam<unsigned_char> *this)

{
  FUN_00401ac0();
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(this + 0x18));
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)this);
  return;
}


/* ==== 004ce560  FUN_004ce560  size=64 ==== */

undefined4 FUN_004ce560(int param_1)

{
  undefined4 in_ECX;
  
  FUN_004053e0(param_1);
  FUN_004053e0(param_1 + 0x18);
  FUN_00495320(param_1 + 0x30);
  return in_ECX;
}


/* ==== 004ce5a0  FUN_004ce5a0  size=438 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_004ce5a0(void)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  QuickBitSet local_d0 [8];
  undefined4 local_c8;
  int local_c4;
  _RunAllParam<unsigned_char> local_c0 [148];
  function<void___cdecl(void)> local_2c [24];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071514d;
  local_10 = ExceptionList;
  uVar2 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar2;
  FUN_004053a0(&DAT_007793b1);
  FUN_004053a0(&DAT_007793b1);
  FUN_0040d770(uVar2);
  FUN_0040d5f0();
  FUN_0040d5f0();
  local_c8 = FUN_004ce410();
  FUN_004ce790(local_c8);
  Concurrency::details::_RunAllParam<unsigned_char>::~_RunAllParam<unsigned_char>(local_c0);
  FUN_0040d8b0();
  local_8 = 0;
  puVar3 = (undefined4 *)Concurrency::details::QuickBitSet::QuickBitSet(local_d0);
  uVar1 = puVar3[1];
  *(undefined4 *)(local_c4 + 0x100) = *puVar3;
  *(undefined4 *)(local_c4 + 0x104) = uVar1;
  *(undefined4 *)(local_c4 + 0x108) = 0;
  FUN_004053a0(&DAT_007793b1);
  *(undefined4 *)(local_c4 + 0x124) = 0;
  FUN_004053a0(&DAT_007793b1);
  FUN_0040d770();
  FUN_004053a0(&DAT_007793b1);
  FUN_0040d770();
  FUN_004053a0(&DAT_007793b1);
  FUN_0048ab60();
  local_8 = 0xffffffff;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_2c);
  ExceptionList = local_10;
  return;
}


/* ==== 004ce760  ~_RunAllParam<unsigned_char>  size=42 ==== */

/* Library Function - Single Match
    public: __thiscall Concurrency::details::_RunAllParam<unsigned char>::~_RunAllParam<unsigned
   char>(void)
   
   Libraries: Visual Studio 2012 Debug, Visual Studio 2012 Release */

void __thiscall
Concurrency::details::_RunAllParam<unsigned_char>::~_RunAllParam<unsigned_char>
          (_RunAllParam<unsigned_char> *this)

{
  ~_RunAllParam<unsigned_char>(this + 0x58);
  ~_RunAllParam<unsigned_char>(this + 0x1c);
  FUN_004089b0();
  return;
}


/* ==== 004ce790  FUN_004ce790  size=64 ==== */

undefined4 FUN_004ce790(int param_1)

{
  undefined4 in_ECX;
  
  FUN_004ce1f0(param_1);
  FUN_004ce560(param_1 + 0x1c);
  FUN_004ce560(param_1 + 0x58);
  return in_ECX;
}


/* ==== 004ce7d0  FUN_004ce7d0  size=230 ==== */

undefined4 * FUN_004ce7d0(void)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007151a9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0040d8b0(DAT_007c5940 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  FUN_004ce940();
  local_8._0_1_ = 1;
  FUN_00426e80();
  local_8 = CONCAT31(local_8._1_3_,2);
  in_ECX[0x78] = 0;
  in_ECX[0x79] = 0x3f800000;
  in_ECX[1] = 0;
  *in_ECX = 0;
  in_ECX[2] = 0;
  FUN_004053a0(&DAT_007793b1);
  in_ECX[0x77] = 0;
  FUN_004051f0();
  FUN_004ce5a0();
  ExceptionList = local_10;
  return in_ECX;
}


/* ==== 004ce8c0  FUN_004ce8c0  size=114 ==== */

void FUN_004ce8c0(void)

{
  undefined4 *in_ECX;
  
  in_ECX[0x79] = 0x3f800000;
  in_ECX[1] = 0;
  *in_ECX = 0;
  in_ECX[2] = 0;
  FUN_004053a0(&DAT_007793b1);
  in_ECX[0x77] = 0;
  FUN_004051f0();
  FUN_004ce5a0();
  return;
}


/* ==== 004ce940  FUN_004ce940  size=312 ==== */

int FUN_004ce940(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00715222;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0040d8b0(DAT_007c5940 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  FUN_0040d8b0();
  local_8._0_1_ = 1;
  FUN_0040d650();
  local_8._0_1_ = 2;
  FUN_0040d650();
  local_8._0_1_ = 3;
  FUN_00489bc0();
  local_8._0_1_ = 4;
  FUN_004ce410();
  local_8._0_1_ = 5;
  FUN_0040d8b0();
  local_8 = CONCAT31(local_8._1_3_,6);
  Concurrency::details::QuickBitSet::QuickBitSet((QuickBitSet *)(in_ECX + 0x100));
  FUN_0040d8b0();
  FUN_0040d8b0();
  FUN_0040d650();
  FUN_0040d8b0();
  FUN_0040d650();
  FUN_0040d8b0();
  FUN_0040d650();
  FUN_0049dac0();
  FUN_005182b0();
  ExceptionList = local_10;
  return in_ECX;
}


/* ==== 004cea80  FUN_004cea80  size=215 ==== */

void FUN_004cea80(void)

{
  function<void___cdecl(void)> *in_ECX;
  
  FUN_00519fd0();
  FUN_0044e210();
  FUN_0040d7d0();
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(in_ECX + 0x170);
  FUN_0040d7d0();
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(in_ECX + 0x14c);
  FUN_0040d7d0();
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(in_ECX + 0x128);
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(in_ECX + 0x10c);
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(in_ECX + 0xe8);
  Concurrency::details::_RunAllParam<unsigned_char>::~_RunAllParam<unsigned_char>
            ((_RunAllParam<unsigned_char> *)(in_ECX + 0x54));
  FUN_0048ad80();
  FUN_00401ac0();
  FUN_0040d7d0();
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(in_ECX + 0x18);
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(in_ECX);
  return;
}


/* ==== 004ceb60  FUN_004ceb60  size=95 ==== */

void FUN_004ceb60(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  return;
}


/* ==== 004cebc0  FUN_004cebc0  size=23 ==== */

undefined4 FUN_004cebc0(void)

{
  undefined4 in_ECX;
  
  FUN_004ceb60();
  return in_ECX;
}


/* ==== 004cebe0  FUN_004cebe0  size=70 ==== */

void FUN_004cebe0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = param_1;
  *(undefined4 *)(in_ECX + 0xc) = param_2;
  *(undefined4 *)(in_ECX + 0x10) = param_2;
  *(undefined4 *)(in_ECX + 0x1c) = param_3;
  *(undefined4 *)(in_ECX + 0x18) = param_3;
  return;
}


/* ==== 004cec30  FUN_004cec30  size=70 ==== */

undefined4 FUN_004cec30(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    param_1 = 0x6cfc;
    break;
  case 1:
    param_1 = 29000;
    break;
  case 2:
    param_1 = 31000;
    break;
  case 3:
    param_1 = 0x846c;
    break;
  case 4:
    param_1 = 35000;
  }
  return param_1;
}


/* ==== 004ceca0  FUN_004ceca0  size=113 ==== */

void FUN_004ceca0(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0xc0) != 0) {
    (**(code **)(**(int **)(in_ECX + 0xc0) + 8))(*(undefined4 *)(in_ECX + 0xc0));
    *(undefined4 *)(in_ECX + 0xc0) = 0;
  }
  if (*(int *)(in_ECX + 0xe8) != 0) {
    (**(code **)(**(int **)(in_ECX + 0xe8) + 8))(*(undefined4 *)(in_ECX + 0xe8));
    *(undefined4 *)(in_ECX + 0xe8) = 0;
  }
  return;
}


/* ==== 004ced20  FUN_004ced20  size=184 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_004ced20(void)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  
  FUN_004ceca0();
  in_ECX[4] = 0;
  in_ECX[3] = 0;
  in_ECX[2] = 0;
  in_ECX[1] = 0;
  *in_ECX = 0;
  FUN_004053a0(&DAT_007793b1);
  uVar1 = FUN_0040a880();
  FUN_00452610(uVar1);
  FUN_004039a0();
  return;
}


/* ==== 004cede0  FUN_004cede0  size=159 ==== */

int FUN_004cede0(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071525b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0040d8b0(DAT_007c5940 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  FUN_0040a880();
  local_8 = CONCAT31(local_8._1_3_,1);
  CCmdUI::CCmdUI((CCmdUI *)(in_ECX + 0xc0));
  CCmdUI::CCmdUI((CCmdUI *)(in_ECX + 0xe8));
  *(undefined4 *)(in_ECX + 0xe8) = 0;
  *(undefined4 *)(in_ECX + 0xc0) = 0;
  FUN_004ced20();
  ExceptionList = local_10;
  return in_ECX;
}


/* ==== 004ceee0  net_cs_lock_recursion_check  size=44 ==== */

bool net_cs_lock_recursion_check(void)

{
  int in_ECX;
  bool bVar1;
  
  bVar1 = *(int *)(in_ECX + 0x2c) != 0x7fffffff;
  if (!bVar1) {
    *(int *)(in_ECX + 0x2c) = *(int *)(in_ECX + 0x2c) + -1;
  }
  return bVar1;
}


/* ==== 004cef10  FUN_004cef10  size=63 ==== */

int FUN_004cef10(void)

{
  int in_ECX;
  
  FUN_0040d8b0();
  FUN_0040d8b0();
  *(undefined4 *)(in_ECX + 0x38) = 0;
  *(undefined4 *)(in_ECX + 0x34) = 0;
  *(undefined4 *)(in_ECX + 0x30) = 0;
  return in_ECX;
}


/* ==== 004cef50  FUN_004cef50  size=64 ==== */

undefined4 * FUN_004cef50(void)

{
  undefined4 *in_ECX;
  
  FUN_0040d8b0();
  *in_ECX = 0;
  in_ECX[9] = 0;
  in_ECX[8] = 0;
  in_ECX[7] = 0;
  return in_ECX;
}


/* ==== 004cef90  FUN_004cef90  size=367 ==== */

int FUN_004cef90(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00715344;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0040d8b0(DAT_007c5940 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  FUN_005182b0();
  local_8._0_1_ = 1;
  FUN_005182b0();
  local_8._0_1_ = 2;
  FUN_005182b0();
  local_8._0_1_ = 3;
  FUN_005182b0();
  local_8._0_1_ = 4;
  FUN_005182b0();
  local_8._0_1_ = 5;
  FUN_0040d650();
  local_8._0_1_ = 6;
  FUN_005182b0();
  local_8._0_1_ = 7;
  FUN_005182b0();
  local_8._0_1_ = 8;
  FUN_0040d650();
  local_8._0_1_ = 9;
  FUN_0040d650();
  local_8._0_1_ = 10;
  FUN_00452560();
  FUN_0040d650();
  local_8._0_1_ = 0xb;
  FUN_0040d8b0();
  local_8._0_1_ = 0xc;
  FUN_0040d8b0();
  local_8._0_1_ = 0xd;
  FUN_004039e0(in_ECX + 0xe8,8,4,FUN_004ce1c0);
  FUN_005182b0();
  local_8._0_1_ = 0xe;
  FUN_00518110();
  local_8 = CONCAT31(local_8._1_3_,0xf);
  FUN_004cf100();
  ExceptionList = local_10;
  return in_ECX;
}


/* ==== 004cf100  FUN_004cf100  size=334 ==== */

void FUN_004cf100(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int in_ECX;
  int local_c;
  
  *(undefined4 *)(in_ECX + 0x90) = 0x32;
  *(undefined4 *)(in_ECX + 0x94) = 0x5a;
  *(undefined4 *)(in_ECX + 0x98) = 0x6e;
  puVar2 = (undefined4 *)FUN_00452560();
  *(undefined4 *)(in_ECX + 0x9c) = *puVar2;
  *(undefined4 *)(in_ECX + 0xa0) = puVar2[1];
  *(undefined4 *)(in_ECX + 0xa4) = puVar2[2];
  *(undefined4 *)(in_ECX + 0xa8) = puVar2[3];
  FUN_00519a70();
  FUN_005198b0();
  FUN_005196f0();
  FUN_005194f0();
  FUN_0040d770();
  FUN_0040d5f0();
  FUN_0040d5f0();
  FUN_0040d770();
  FUN_0040d770();
  FUN_0040d5f0();
  FUN_0040d5f0();
  FUN_004053a0(&DAT_007793b1);
  FUN_004053a0(&DAT_007793b1);
  FUN_004053a0(&DAT_007793b1);
  for (local_c = 0; local_c < 4; local_c = local_c + 1) {
    puVar2 = (undefined4 *)FUN_004ce1c0();
    uVar1 = puVar2[1];
    *(undefined4 *)(in_ECX + 0xe8 + local_c * 8) = *puVar2;
    *(undefined4 *)(in_ECX + 0xec + local_c * 8) = uVar1;
  }
  return;
}


/* ==== 004cf250  FUN_004cf250  size=20 ==== */

void FUN_004cf250(void)

{
  FUN_00519300();
  return;
}


/* ==== 004cf270  FUN_004cf270  size=134 ==== */

undefined4 *
FUN_004cf270(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 *in_ECX;
  
  *in_ECX = param_1;
  in_ECX[1] = param_2;
  in_ECX[2] = param_3;
  in_ECX[3] = param_4;
  in_ECX[4] = param_5;
  in_ECX[5] = param_6;
  in_ECX[6] = param_7;
  in_ECX[7] = param_8;
  in_ECX[8] = 0xffffffff;
  in_ECX[9] = 0;
  in_ECX[10] = 0xffffffff;
  in_ECX[0xb] = 0;
  *(undefined1 *)(in_ECX + 0xc) = 1;
  return in_ECX;
}


/* ==== 004cf300  FUN_004cf300  size=115 ==== */

int FUN_004cf300(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071537d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_004cef10(DAT_007c5940 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  FUN_0040ac90();
  *(undefined4 *)(in_ECX + 0x170) = 0;
  *(undefined4 *)(in_ECX + 0x174) = 0;
  ExceptionList = local_10;
  return in_ECX;
}


/* ==== 004cf380  FUN_004cf380  size=183 ==== */

int FUN_004cf380(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007153d4;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_004cef50(DAT_007c5940 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  FUN_0040ac90();
  local_8._0_1_ = 1;
  FUN_0040ac90();
  local_8._0_1_ = 2;
  FUN_005182b0();
  local_8 = CONCAT31(local_8._1_3_,3);
  FUN_004153b0();
  *(undefined4 *)(in_ECX + 0x3f8) = 0xffffffff;
  FUN_00426e80();
  *(undefined4 *)(in_ECX + 0x3f8) = 0xffffffff;
  ExceptionList = local_10;
  return in_ECX;
}


/* ==== 004cf440  FUN_004cf440  size=1046 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_004cf440(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  CDocObjectServer *pCVar4;
  undefined4 uVar5;
  CDocObjectServer *local_148;
  int *local_144;
  int local_140;
  int local_13c;
  int *local_138;
  int local_134;
  
  FUN_004cf100();
  FUN_00519090();
  FUN_00518f90();
  local_134 = game_loop_helper_018d0();
  iVar1 = game_loop_helper_018b0();
  for (; local_134 != iVar1; local_134 = local_134 + 0x20) {
    local_138 = (int *)game_loop_helper_018d0();
    piVar2 = (int *)game_loop_helper_018b0();
    for (; local_138 != piVar2; local_138 = local_138 + 2) {
      if (*local_138 != 0) {
        (**(code **)(*(int *)*local_138 + 0x48))(*local_138);
        (**(code **)(*(int *)*local_138 + 8))(*local_138);
        *local_138 = 0;
      }
    }
    FUN_0040d5f0();
  }
  FUN_00426fa0();
  local_13c = game_loop_helper_018d0();
  iVar1 = game_loop_helper_018b0();
  for (; local_13c != iVar1; local_13c = local_13c + 0x408) {
    local_140 = game_loop_helper_018d0();
    iVar3 = game_loop_helper_018b0();
    for (; local_140 != iVar3; local_140 = local_140 + 0x20) {
      local_144 = (int *)game_loop_helper_018d0();
      piVar2 = (int *)game_loop_helper_018b0();
      for (; local_144 != piVar2; local_144 = local_144 + 2) {
        if (*local_144 != 0) {
          (**(code **)(*(int *)*local_144 + 0x48))(*local_144);
          (**(code **)(*(int *)*local_144 + 8))(*local_144);
          *local_144 = 0;
        }
      }
      FUN_0040d5f0();
    }
    FUN_00426fa0();
    local_148 = (CDocObjectServer *)game_loop_helper_018d0();
    pCVar4 = (CDocObjectServer *)game_loop_helper_018b0();
    for (; local_148 != pCVar4; local_148 = local_148 + 0x90) {
      CDocObjectServer::ReleaseDocSite(local_148);
    }
    FUN_00427260();
  }
  FUN_00518e90();
  FUN_00518df0();
  FUN_00518df0();
  uVar5 = FUN_004cef90();
  FUN_004cfa60(uVar5);
  FUN_004cf990();
  FUN_00519090();
  FUN_00518f90();
  return;
}


/* ==== 004cf860  FUN_004cf860  size=303 ==== */

undefined4 FUN_004cf860(void)

{
  undefined4 in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007154b5;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_004cef90(DAT_007c5940 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  FUN_005182b0();
  local_8._0_1_ = 1;
  FUN_005182b0();
  local_8._0_1_ = 2;
  FUN_005182b0();
  local_8._0_1_ = 3;
  FUN_005182b0();
  local_8._0_1_ = 4;
  FUN_005182b0();
  local_8._0_1_ = 5;
  FUN_005182b0();
  local_8._0_1_ = 6;
  FUN_005182b0();
  local_8._0_1_ = 7;
  FUN_00518c20();
  local_8._0_1_ = 8;
  FUN_00518c20();
  local_8._0_1_ = 9;
  FUN_00518c20();
  local_8._0_1_ = 10;
  FUN_00518c20();
  local_8._0_1_ = 0xb;
  FUN_005182b0();
  local_8 = CONCAT31(local_8._1_3_,0xc);
  FUN_004cf440();
  ExceptionList = local_10;
  return in_ECX;
}


/* ==== 004cf990  FUN_004cf990  size=203 ==== */

void FUN_004cf990(void)

{
  function<void___cdecl(void)> *in_ECX;
  
  FUN_004cf250();
  FUN_0048a7b0();
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(in_ECX + 0xd0);
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(in_ECX + 0xb8);
  FUN_00401ac0();
  FUN_0040d7d0();
  FUN_0040d7d0();
  FUN_00405350();
  FUN_0048a7b0();
  FUN_0040d7d0();
  FUN_005195f0();
  FUN_005195f0();
  FUN_005197d0();
  FUN_00519990();
  FUN_00519b50();
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(in_ECX);
  return;
}


/* ==== 004cfa60  FUN_004cfa60  size=496 ==== */

int FUN_004cfa60(int param_1)

{
  undefined4 uVar1;
  int in_ECX;
  undefined4 local_c;
  
  FUN_004053e0(param_1);
  FUN_00519b70(param_1 + 0x18);
  FUN_005199b0(param_1 + 0x24);
  FUN_005197f0(param_1 + 0x30);
  FUN_00519610(param_1 + 0x3c);
  FUN_00519610(param_1 + 0x48);
  FUN_0048af40(param_1 + 0x54);
  FUN_00519420(param_1 + 0x60);
  FUN_00519330(param_1 + 0x6c);
  FUN_0048af40(param_1 + 0x78);
  FUN_0048af40(param_1 + 0x84);
  *(undefined4 *)(in_ECX + 0x90) = *(undefined4 *)(param_1 + 0x90);
  *(undefined4 *)(in_ECX + 0x94) = *(undefined4 *)(param_1 + 0x94);
  *(undefined4 *)(in_ECX + 0x98) = *(undefined4 *)(param_1 + 0x98);
  *(undefined4 *)(in_ECX + 0x9c) = *(undefined4 *)(param_1 + 0x9c);
  *(undefined4 *)(in_ECX + 0xa0) = *(undefined4 *)(param_1 + 0xa0);
  *(undefined4 *)(in_ECX + 0xa4) = *(undefined4 *)(param_1 + 0xa4);
  *(undefined4 *)(in_ECX + 0xa8) = *(undefined4 *)(param_1 + 0xa8);
  FUN_00495320(param_1 + 0xac);
  FUN_004053e0(param_1 + 0xb8);
  FUN_004053e0(param_1 + 0xd0);
  for (local_c = 0; local_c < 4; local_c = local_c + 1) {
    uVar1 = *(undefined4 *)(param_1 + 0xec + local_c * 8);
    *(undefined4 *)(in_ECX + 0xe8 + local_c * 8) = *(undefined4 *)(param_1 + 0xe8 + local_c * 8);
    *(undefined4 *)(in_ECX + 0xec + local_c * 8) = uVar1;
  }
  FUN_00519420(param_1 + 0x108);
  FUN_005192c0(param_1 + 0x114);
  return in_ECX;
}


/* ==== 004cfc50  FUN_004cfc50  size=310 ==== */

undefined4 * FUN_004cfc50(void)

{
  undefined4 *in_ECX;
  
  FUN_00518d80();
  FUN_0040d650();
  FUN_0040d650();
  in_ECX[2] = 0xffffffff;
  in_ECX[5] = 0x8c;
  in_ECX[0xf] = 0;
  in_ECX[6] = 0;
  in_ECX[9] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  in_ECX[0xe] = 0;
  in_ECX[0x10] = 0;
  in_ECX[0x11] = 0;
  in_ECX[0x1a] = 0x1b;
  in_ECX[0x1b] = 0x2f;
  in_ECX[0x1c] = 0x44;
  in_ECX[0x1d] = 0x3a;
  in_ECX[0x1e] = 0x1a;
  in_ECX[0x1f] = 0x39;
  in_ECX[1] = 0;
  in_ECX[0x12] = 0;
  in_ECX[0x13] = 0;
  in_ECX[0x20] = 0xffffffff;
  *(undefined1 *)(in_ECX + 0x21) = 0;
  *in_ECX = 0;
  return in_ECX;
}


/* ==== 004cfd90  FUN_004cfd90  size=20 ==== */

void FUN_004cfd90(void)

{
  FUN_00518da0();
  return;
}


/* ==== 004d10b0  FUN_004d10b0  size=43 ==== */

int FUN_004d10b0(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,
                int param_2)

{
  char *pcVar1;
  
  pcVar1 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator[]
                     (param_1,0);
  return param_2 + (*pcVar1 + -0x42) * 8;
}


/* ==== 004d10e0  FUN_004d10e0  size=195 ==== */

uint FUN_004d10e0(int param_1)

{
  uint uVar1;
  uint uVar2;
  int in_ECX;
  uint uVar3;
  uint local_10;
  
  local_10 = game_loop_helper_018d0();
  uVar1 = game_loop_helper_018b0();
  uVar2 = uVar1;
  while( true ) {
    if (local_10 == uVar1) {
      return uVar2 & 0xffffff00;
    }
    uVar2 = local_10;
    if ((*(int *)(local_10 + 0x10) == param_1) &&
       (((uVar2 = *(int *)(in_ECX + 0x180) - *(int *)(local_10 + 0x18), uVar3 = (int)uVar2 >> 0x1f,
         (uVar2 ^ uVar3) - uVar3 == 1 &&
         (uVar2 = *(int *)(in_ECX + 0x184) - *(int *)(local_10 + 0x1c), uVar3 = (int)uVar2 >> 0x1f,
         (uVar2 ^ uVar3) == uVar3)) ||
        ((uVar3 = *(int *)(in_ECX + 0x180) - *(int *)(local_10 + 0x18), uVar2 = (int)uVar3 >> 0x1f,
         uVar2 = (uVar3 ^ uVar2) - uVar2, uVar2 == 0 &&
         (uVar3 = *(int *)(in_ECX + 0x184) - *(int *)(local_10 + 0x1c), uVar2 = (int)uVar3 >> 0x1f,
         uVar2 = (uVar3 ^ uVar2) - uVar2, uVar2 == 1)))))) break;
    local_10 = local_10 + 0x20;
  }
  return 1;
}


/* ==== 004d11b0  FUN_004d11b0  size=45 ==== */

void FUN_004d11b0(void)

{
  FUN_00401ac0();
  FUN_00401ac0();
  FUN_004cfd90();
  return;
}


/* ==== 004d11e0  FUN_004d11e0  size=20 ==== */

void FUN_004d11e0(void)

{
  FUN_004d13c0();
  return;
}


/* ==== 004d1200  FUN_004d1200  size=48 ==== */

void FUN_004d1200(void)

{
  int in_ECX;
  
  FUN_00427480();
  FUN_004cea80();
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(in_ECX + 0xc));
  return;
}


/* ==== 004d1230  FUN_004d1230  size=392 ==== */

undefined4 * FUN_004d1230(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  FUN_00518d60(param_1 + 3);
  in_ECX[5] = param_1[5];
  in_ECX[6] = param_1[6];
  in_ECX[7] = param_1[7];
  in_ECX[8] = param_1[8];
  in_ECX[9] = param_1[9];
  in_ECX[10] = param_1[10];
  in_ECX[0xb] = param_1[0xb];
  in_ECX[0xc] = param_1[0xc];
  in_ECX[0xd] = param_1[0xd];
  in_ECX[0xe] = param_1[0xe];
  in_ECX[0xf] = param_1[0xf];
  in_ECX[0x10] = param_1[0x10];
  in_ECX[0x11] = param_1[0x11];
  in_ECX[0x12] = param_1[0x12];
  in_ECX[0x13] = param_1[0x13];
  FUN_00495320(param_1 + 0x14);
  FUN_00495320(param_1 + 0x17);
  in_ECX[0x1a] = param_1[0x1a];
  in_ECX[0x1b] = param_1[0x1b];
  in_ECX[0x1c] = param_1[0x1c];
  in_ECX[0x1d] = param_1[0x1d];
  in_ECX[0x1e] = param_1[0x1e];
  in_ECX[0x1f] = param_1[0x1f];
  in_ECX[0x20] = param_1[0x20];
  *(undefined1 *)(in_ECX + 0x21) = *(undefined1 *)(param_1 + 0x21);
  return in_ECX;
}


/* ==== 004d13c0  FUN_004d13c0  size=34 ==== */

void FUN_004d13c0(void)

{
  FUN_00489ca0();
  FUN_00518ae0();
  return;
}


/* ==== 004d13f0  FUN_004d13f0  size=69 ==== */

undefined4 *
FUN_004d13f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined1 param_6)

{
  undefined4 *in_ECX;
  
  *in_ECX = param_1;
  in_ECX[1] = param_2;
  in_ECX[2] = param_3;
  in_ECX[3] = param_4;
  in_ECX[4] = param_5;
  *(undefined1 *)(in_ECX + 5) = param_6;
  return in_ECX;
}


/* ==== 004d1440  FUN_004d1440  size=100 ==== */

void FUN_004d1440(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  return;
}


/* ==== 004d14b0  FUN_004d14b0  size=23 ==== */

undefined4 FUN_004d14b0(void)

{
  undefined4 in_ECX;
  
  FUN_004d1440();
  return in_ECX;
}


/* ==== 004d14d0  FUN_004d14d0  size=72 ==== */

void FUN_004d14d0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[3] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[4] = 0;
  FUN_004a1760();
  return;
}


/* ==== 004d1530  FUN_004d1530  size=1055 ==== */

void FUN_004d1530(void)

{
  char cVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined1 local_c4 [8];
  undefined1 local_bc [8];
  undefined1 local_b4 [8];
  undefined1 local_ac [32];
  void *local_8c;
  UMSFreeVirtualProcessorRoot *local_88;
  undefined1 local_84 [4];
  undefined4 local_80;
  undefined4 local_7c;
  undefined1 local_78 [4];
  undefined4 local_74;
  undefined1 local_70 [4];
  undefined4 local_6c;
  undefined4 *local_68;
  undefined1 local_64 [4];
  undefined4 local_60;
  undefined1 local_5c [4];
  undefined1 local_58 [4];
  UMSFreeVirtualProcessorRoot *local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  undefined1 *local_40;
  int local_3c;
  int local_38;
  int local_34;
  undefined1 local_30 [4];
  undefined1 local_2c [4];
  undefined1 local_28 [4];
  undefined1 local_24 [4];
  undefined1 local_20 [4];
  int *local_1c;
  undefined1 local_18 [4];
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00715880;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_004cf440(DAT_007c5940 ^ (uint)&stack0xfffffffc);
  FUN_00518840();
  local_34 = local_14 + 0x170;
  FUN_0042a9e0(local_18);
  FUN_0042a9c0(local_58);
  while( true ) {
    cVar1 = FUN_0040d2d0(local_58);
    if (cVar1 == '\0') break;
    local_1c = (int *)FUN_0042a580();
    if ((*(int *)(*local_1c + 0x204) != 0) && (*(int *)(*local_1c + 0x204) != 300)) {
      FUN_00518920(local_b4,local_1c);
    }
    FUN_0042a560();
  }
  local_38 = local_14 + 0x188;
  FUN_0042a9e0(local_20);
  FUN_0042a9c0(local_5c);
  while( true ) {
    cVar1 = FUN_0040d2d0(local_5c);
    if (cVar1 == '\0') break;
    local_60 = FUN_0042a580();
    FUN_00518920(local_bc,local_60);
    FUN_0042a560();
  }
  piVar2 = (int *)game_get_state_ptr_d1520();
  local_3c = *piVar2 + 0x150;
  FUN_0042a9e0(local_24);
  FUN_0042a9c0(local_64);
  while( true ) {
    cVar1 = FUN_0040d2d0(local_64);
    if (cVar1 == '\0') break;
    local_68 = (undefined4 *)FUN_0042a580();
    local_6c = *local_68;
    FUN_00518920(local_c4,&local_6c);
    FUN_0042a560();
  }
  local_40 = local_ac;
  FUN_005180b0(local_28);
  FUN_00518080(local_70);
  while( true ) {
    cVar1 = FUN_0040d2d0(local_70);
    if (cVar1 == '\0') break;
    piVar2 = (int *)FUN_0042a620();
    local_44 = *piVar2;
    FUN_0062ed50();
    local_48 = local_44;
    if (local_44 == 0) {
      local_74 = 0;
    }
    else {
      local_74 = FUN_004d1980(1);
    }
    FUN_0042a600();
  }
  FUN_00518870();
  FUN_0044e040();
  FUN_0044e040();
  game_get_state_ptr_d1520();
  FUN_0044e040();
  local_4c = local_14 + 0x178;
  FUN_0042a9e0(local_2c);
  FUN_0042a9c0(local_78);
  while( true ) {
    cVar1 = FUN_0040d2d0(local_78);
    if (cVar1 == '\0') break;
    puVar3 = (undefined4 *)FUN_0042a580();
    local_80 = *puVar3;
    local_7c = local_80;
    FUN_006e4b8e(local_80,0x34);
    FUN_0042a560();
  }
  FUN_0044e040();
  local_50 = local_14 + 0x180;
  FUN_0042a9e0(local_30);
  FUN_0042a9c0(local_84);
  while( true ) {
    cVar1 = FUN_0040d2d0(local_84);
    if (cVar1 == '\0') break;
    puVar3 = (undefined4 *)FUN_0042a580();
    local_88 = (UMSFreeVirtualProcessorRoot *)*puVar3;
    local_54 = local_88;
    if (local_88 == (UMSFreeVirtualProcessorRoot *)0x0) {
      local_8c = (void *)0x0;
    }
    else {
      local_8c = Concurrency::details::UMSFreeVirtualProcessorRoot::_scalar_deleting_destructor_
                           (local_88,1);
    }
    FUN_0042a560();
  }
  FUN_0044e040();
  FUN_004d1960();
  FUN_00518b20();
  FUN_0044e120();
  FUN_0044e120();
  FUN_0044e120();
  FUN_0044e120();
  FUN_00518dd0();
  FUN_00518e70();
  FUN_00518e70();
  FUN_00519180();
  FUN_00518f10();
  FUN_00519010();
  FUN_00519110();
  FUN_004cf990();
  ExceptionList = local_10;
  return;
}


/* ==== 004d1960  FUN_004d1960  size=20 ==== */

void FUN_004d1960(void)

{
  FUN_004d19f0();
  return;
}


/* ==== 004d1980  FUN_004d1980  size=49 ==== */

undefined4 FUN_004d1980(uint param_1)

{
  undefined4 in_ECX;
  
  FUN_0042f960();
  if ((param_1 & 1) != 0) {
    FUN_006e4b8e(in_ECX,0x8e0);
  }
  return in_ECX;
}


/* ==== 004d19f0  FUN_004d19f0  size=34 ==== */

void FUN_004d19f0(void)

{
  FUN_00489ca0();
  FUN_0044e120();
  return;
}


/* ==== 004d1a20  FUN_004d1a20  size=45 ==== */

void FUN_004d1a20(void)

{
  int in_ECX;
  
  FUN_00401ac0();
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(in_ECX + 0x44));
  FUN_00401ac0();
  return;
}


/* ==== 004d1a50  FUN_004d1a50  size=20 ==== */

void FUN_004d1a50(void)

{
  FUN_00518810();
  return;
}


/* ==== 004d1a70  FUN_004d1a70  size=10 ==== */

undefined * FUN_004d1a70(void)

{
  return &DAT_007ca758;
}


/* ==== 004d1a80  FUN_004d1a80  size=99 ==== */

int FUN_004d1a80(int param_1)

{
  int *piVar1;
  int *local_8;
  
  local_8 = (int *)game_loop_helper_018d0();
  piVar1 = (int *)game_loop_helper_018b0();
  while( true ) {
    if (local_8 == piVar1) {
      return 0;
    }
    if ((*local_8 != 0) && (*(int *)(*local_8 + 0xdc0) == param_1)) break;
    local_8 = local_8 + 1;
  }
  return *local_8;
}


/* ==== 004d1b00  FUN_004d1b00  size=26 ==== */

undefined4 FUN_004d1b00(void)

{
  undefined4 in_ECX;
  
  FUN_00498b80();
  return in_ECX;
}


/* ==== 004d1b20  FUN_004d1b20  size=10 ==== */

undefined * FUN_004d1b20(void)

{
  return &DAT_007ca72c;
}


/* ==== 004d1b30  FUN_004d1b30  size=10 ==== */

undefined4 * FUN_004d1b30(void)

{
  return &DAT_007ca200;
}


/* ==== 004d1b40  game_startup_call_d1b40  size=53 ==== */

void game_startup_call_d1b40(void)

{
  undefined4 local_c;
  
  local_c = crt_or_heap_alloc_helper(1);
  if (local_c == 0) {
    local_c = 0;
  }
  DAT_007ca200 = local_c;
  return;
}


/* ==== 004d1b80  FUN_004d1b80  size=30 ==== */

void FUN_004d1b80(void)

{
  FUN_006e4b8e(DAT_007ca200,1);
  return;
}


/* ==== 004d1ba0  FUN_004d1ba0  size=10 ==== */

undefined4 * FUN_004d1ba0(void)

{
  return &DAT_007ca764;
}


/* ==== 004d1bb0  FUN_004d1bb0  size=10 ==== */

undefined * FUN_004d1bb0(void)

{
  return &DAT_007ca6e8;
}


/* ==== 004d1bc0  FUN_004d1bc0  size=1031 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_004d1bc0(void)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined1 auStack_b8 [12];
  undefined4 uStack_ac;
  uint uStack_a8;
  function<void___cdecl(void)> *pfStack_a4;
  uint uStack_a0;
  undefined4 local_9c;
  undefined1 *local_98;
  undefined4 local_94;
  undefined1 *local_90;
  undefined4 local_8c;
  undefined1 *local_88;
  undefined4 local_84;
  undefined1 *local_80;
  undefined4 local_7c;
  undefined1 *local_78;
  undefined4 local_74;
  undefined1 *local_70;
  undefined4 local_68;
  int local_64;
  undefined4 local_60;
  int local_5c;
  undefined4 local_58;
  int local_54;
  undefined4 local_50;
  int local_4c;
  undefined4 local_48;
  int local_44;
  undefined4 local_40;
  int local_3c;
  int local_38;
  uint local_34;
  int local_30;
  function<void___cdecl(void)> local_2c [24];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00715966;
  local_10 = ExceptionList;
  uStack_a0 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  pfStack_a4 = (function<void___cdecl(void)> *)0x4d1bf0;
  local_14 = uStack_a0;
  piVar2 = (int *)game_get_state_ptr_d1520();
  *(undefined1 *)(*piVar2 + 0x44) = 1;
  local_30 = 0;
  local_40 = 0x40;
  local_70 = auStack_b8;
  local_74 = FUN_004054a0(&DAT_0074f9b8);
  local_8 = 0;
  uVar3 = game_timing_or_delay_helper(&local_40);
  local_8 = 0xffffffff;
  local_44 = ui_find_widget_by_key(uVar3);
  pfStack_a4 = (function<void___cdecl(void)> *)0x74f9c8;
  uStack_a8 = 0;
  uStack_ac = 0x4d1c5c;
  local_30 = local_44;
  FUN_0040d680();
  uStack_a8 = 0x4d1c66;
  FUN_004053a0();
  pfStack_a4 = (function<void___cdecl(void)> *)0x0;
  uStack_a8 = 0x4d1c76;
  iVar4 = FUN_0040d680();
  *(undefined1 *)(iVar4 + 0x20) = 0;
  pfStack_a4 = (function<void___cdecl(void)> *)0x4d1c88;
  cVar1 = game_frame_should_continue();
  if (cVar1 == '\0') {
    *(undefined4 *)(local_30 + 0x30c) = 6;
  }
  else {
    *(undefined4 *)(local_30 + 0x30c) = 6;
    pfStack_a4 = *(function<void___cdecl(void)> **)(local_30 + 0x30c);
    uStack_a8 = 0x4d1cb8;
    FUN_0040d4e0();
    local_34 = 0;
    while( true ) {
      pfStack_a4 = (function<void___cdecl(void)> *)0x4d1cd9;
      uVar5 = FUN_00519d80();
      if (uVar5 <= local_34) break;
      pfStack_a4 = (function<void___cdecl(void)> *)0x74fa00;
      uStack_a8 = 0x4d1cef;
      FUN_004054a0();
      local_8 = 1;
      pfStack_a4 = local_2c;
      uStack_a8 = 0x4d1cff;
      local_38 = FUN_005e9250();
      local_8 = 0xffffffff;
      pfStack_a4 = (function<void___cdecl(void)> *)0x4d1d14;
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_2c);
      *(uint *)(local_38 + 0x40) = local_34 * 0x78 + -0x1e;
      *(undefined4 *)(local_38 + 0x44) = 0x19a;
      pfStack_a4 = (function<void___cdecl(void)> *)local_38;
      uStack_a8 = local_34;
      uStack_ac = 0x4d1d42;
      FUN_0040d4b0();
      uStack_a8 = 0x4d1d49;
      FUN_00426840();
      pfStack_a4 = (function<void___cdecl(void)> *)local_34;
      uStack_a8 = 0x4d1d5b;
      iVar4 = FUN_0040d4b0();
      *(undefined1 *)(iVar4 + 0x60) = 1;
      pfStack_a4 = (function<void___cdecl(void)> *)&local_38;
      uStack_a8 = 0x4d1d68;
      FUN_004d1b30();
      uStack_a8 = 0x4d1d6f;
      FUN_00517ee0();
      local_34 = local_34 + 1;
    }
  }
  local_48 = 0x40;
  local_78 = auStack_b8;
  local_7c = FUN_004054a0(&DAT_0074fa20);
  local_8 = 2;
  uVar3 = game_timing_or_delay_helper(&local_48);
  local_8 = 0xffffffff;
  local_4c = ui_find_widget_by_key(uVar3);
  pfStack_a4 = (function<void___cdecl(void)> *)0x0;
  uStack_a8 = 0x4d1dde;
  local_30 = local_4c;
  iVar4 = FUN_0040d680();
  *(undefined1 *)(iVar4 + 0x20) = 0x1b;
  pfStack_a4 = (function<void___cdecl(void)> *)0x1;
  uStack_a8 = 0x4d1df2;
  iVar4 = FUN_0040d680();
  *(undefined1 *)(iVar4 + 0x20) = 0x1c;
  *(undefined4 *)(local_30 + 0x984) = 0x5d9;
  local_50 = 0x3f;
  local_80 = auStack_b8;
  local_84 = FUN_004054a0(&DAT_0074f9f0);
  local_8 = 3;
  uVar3 = game_timing_or_delay_helper(&local_50);
  local_8 = 0xffffffff;
  local_54 = ui_find_widget_by_key(uVar3);
  local_30 = local_54;
  if (local_54 != 0) {
    local_58 = 0x3f;
    local_88 = auStack_b8;
    local_8c = FUN_004054a0(&DAT_0074f9f8);
    local_8 = 4;
    uVar3 = game_timing_or_delay_helper(&local_58);
    local_8 = 0xffffffff;
    local_5c = ui_find_widget_by_key(uVar3);
    pfStack_a4 = *(function<void___cdecl(void)> **)(local_5c + 0x9a0);
    uStack_a8 = 0x4d1eb6;
    local_3c = FUN_005e4170();
    if (*(int *)(local_3c + 0x84) == 0) {
      local_60 = 0x3f;
      local_90 = auStack_b8;
      local_94 = FUN_00427d20(auStack_b8,local_3c + 0xcc,&DAT_0074fa50);
      local_8 = 5;
      uVar3 = game_timing_or_delay_helper(&local_60);
      local_8 = 0xffffffff;
      local_64 = ui_find_widget_by_key(uVar3);
      pfStack_a4 = (function<void___cdecl(void)> *)0x0;
      uStack_a8 = 0x4d1f36;
      local_30 = local_64;
      iVar4 = FUN_0040d680();
      *(undefined1 *)(iVar4 + 0x20) = 0xc;
      pfStack_a4 = (function<void___cdecl(void)> *)0x0;
      uStack_a8 = 0x4d1f4a;
      iVar4 = FUN_0040d680();
      *(undefined4 *)(iVar4 + 0x28) = 0xffffffe8;
    }
  }
  local_68 = 0x40;
  local_98 = auStack_b8;
  local_9c = FUN_004054a0(&DAT_0074fa60);
  local_8 = 6;
  uVar3 = game_timing_or_delay_helper(&local_68);
  local_8 = 0xffffffff;
  iVar4 = ui_find_widget_by_key(uVar3);
  if (iVar4 != 0) {
    *(undefined1 *)(iVar4 + 0x51) = 0;
  }
  ExceptionList = local_10;
  return;
}


/* ==== 004d1fd0  FUN_004d1fd0  size=775 ==== */

void FUN_004d1fd0(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_98 [12];
  undefined4 uStack_8c;
  undefined4 uStack_88;
  int iStack_84;
  uint uStack_80;
  undefined4 local_7c;
  undefined1 *local_78;
  undefined4 local_74;
  undefined1 *local_70;
  undefined4 local_6c;
  undefined1 *local_68;
  undefined4 local_64;
  undefined1 *local_60;
  undefined4 local_5c;
  undefined1 *local_58;
  undefined4 local_54;
  undefined1 *local_50;
  undefined4 local_48;
  int local_44;
  undefined4 local_40;
  int local_3c;
  undefined4 local_38;
  int local_34;
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  int local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007159c5;
  local_10 = ExceptionList;
  uStack_80 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iStack_84 = 0x4d1ffa;
  piVar1 = (int *)game_get_state_ptr_d1520();
  *(undefined1 *)(*piVar1 + 0x44) = 0;
  local_14 = 0;
  local_20 = 0x40;
  local_50 = auStack_98;
  local_54 = FUN_004054a0(&DAT_0074fa30);
  local_8 = 0;
  uVar2 = game_timing_or_delay_helper(&local_20);
  local_8 = 0xffffffff;
  local_24 = ui_find_widget_by_key(uVar2);
  iStack_84 = 0x4d2056;
  local_14 = local_24;
  iVar3 = game_get_player_or_session_blob();
  iStack_84 = *(undefined4 *)(iVar3 + 0xdc8);
  uStack_88 = 0x4d2068;
  iStack_84 = FUN_005e3d00();
  uStack_88 = 0;
  uStack_8c = 0x4d207f;
  local_18 = iStack_84;
  FUN_0040d680();
  uStack_88 = 0x4d2089;
  FUN_0040d840();
  iStack_84 = 0;
  uStack_88 = 0x4d2099;
  iVar3 = FUN_0040d680();
  *(undefined1 *)(iVar3 + 0x20) = *(undefined1 *)(local_18 + 0x18);
  *(undefined4 *)(local_14 + 0x30c) = 0;
  local_28 = 0x40;
  local_58 = auStack_98;
  local_5c = FUN_004054a0(&DAT_0074fa40);
  local_8 = 1;
  uVar2 = game_timing_or_delay_helper(&local_28);
  local_8 = 0xffffffff;
  local_2c = ui_find_widget_by_key(uVar2);
  iStack_84 = 0;
  uStack_88 = 0x4d2109;
  local_14 = local_2c;
  iVar3 = FUN_0040d680();
  *(undefined1 *)(iVar3 + 0x20) = 0x19;
  iStack_84 = 1;
  uStack_88 = 0x4d211d;
  iVar3 = FUN_0040d680();
  *(undefined1 *)(iVar3 + 0x20) = 0x1a;
  *(undefined4 *)(local_14 + 0x984) = 0x5d7;
  local_30 = 0x3f;
  local_60 = auStack_98;
  local_64 = FUN_004054a0(&DAT_0074fa98);
  local_8 = 2;
  uVar2 = game_timing_or_delay_helper(&local_30);
  local_8 = 0xffffffff;
  local_34 = ui_find_widget_by_key(uVar2);
  local_14 = local_34;
  if (local_34 != 0) {
    local_38 = 0x3f;
    local_68 = auStack_98;
    local_6c = FUN_004054a0(&DAT_0074faa0);
    local_8 = 3;
    uVar2 = game_timing_or_delay_helper(&local_38);
    local_8 = 0xffffffff;
    local_3c = ui_find_widget_by_key(uVar2);
    iStack_84 = *(undefined4 *)(local_3c + 0x9a0);
    uStack_88 = 0x4d21db;
    local_1c = FUN_005e4170();
    if (*(int *)(local_1c + 0x84) == 0) {
      local_40 = 0x3f;
      local_70 = auStack_98;
      local_74 = FUN_00427d20(auStack_98,local_1c + 0xcc,&DAT_0074fa74);
      local_8 = 4;
      uVar2 = game_timing_or_delay_helper(&local_40);
      local_8 = 0xffffffff;
      local_44 = ui_find_widget_by_key(uVar2);
      iStack_84 = 0;
      uStack_88 = 0x4d2256;
      local_14 = local_44;
      iVar3 = FUN_0040d680();
      *(undefined1 *)(iVar3 + 0x20) = 0;
      iStack_84 = 0;
      uStack_88 = 0x4d226a;
      iVar3 = FUN_0040d680();
      *(undefined4 *)(iVar3 + 0x28) = 0xfffffff4;
    }
  }
  local_48 = 0x40;
  local_78 = auStack_98;
  local_7c = FUN_004054a0(&DAT_0074fa84);
  local_8 = 5;
  uVar2 = game_timing_or_delay_helper(&local_48);
  local_8 = 0xffffffff;
  iVar3 = ui_find_widget_by_key(uVar2);
  if (iVar3 != 0) {
    *(undefined1 *)(iVar3 + 0x51) = 1;
  }
  ExceptionList = local_10;
  return;
}


/* ==== 004d4b10  FUN_004d4b10  size=792 ==== */

undefined4 FUN_004d4b10(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int *local_18;
  int *local_14;
  int *local_10;
  int *local_c;
  
  local_c = (int *)game_loop_helper_018d0();
  piVar1 = (int *)game_loop_helper_018b0();
  do {
    if (local_c == piVar1) {
      return 0;
    }
    if (local_c[5] == 1) {
      if (*(char *)(param_1 + 0xdb8) == '\0') {
        if (((param_2 + -0x40 <= *local_c + -0x30) && (*local_c + -0x30 <= param_2 + 0x40)) &&
           ((param_3 + -0x30 <= local_c[1] + -0x24 && (local_c[1] + -0x24 <= param_3 + 0x30)))) {
          return 1;
        }
      }
      else {
        local_10 = (int *)game_loop_helper_018d0();
        piVar2 = (int *)game_loop_helper_018b0();
        for (; local_10 != piVar2; local_10 = local_10 + 1) {
          if ((((*local_10 != 0) && (param_2 + -0x40 <= *local_c + -0x30)) &&
              (*local_c + -0x30 <= param_2 + 0x40)) &&
             ((param_3 + -0x30 <= local_c[1] + -0x24 && (local_c[1] + -0x24 <= param_3 + 0x30)))) {
            return 1;
          }
        }
      }
    }
    else if (*(int *)(param_1 + 0xdc8) < 5) {
      if (*(char *)(param_1 + 0xdb8) == '\0') {
        if (((param_2 + -0x40 <= *local_c) && (*local_c <= param_2 + 0x40)) &&
           ((param_3 + -0x30 <= local_c[1] + -0x18 && (local_c[1] + -0x18 <= param_3 + 0x30)))) {
          return 1;
        }
      }
      else {
        local_14 = (int *)game_loop_helper_018d0();
        piVar2 = (int *)game_loop_helper_018b0();
        for (; local_14 != piVar2; local_14 = local_14 + 1) {
          if ((((*local_14 != 0) && (param_2 + -0x40 <= *local_c)) && (*local_c <= param_2 + 0x40))
             && ((param_3 + -0x30 <= local_c[1] + -0x18 && (local_c[1] + -0x18 <= param_3 + 0x30))))
          {
            return 1;
          }
        }
      }
    }
    else if (*(char *)(param_1 + 0xdb8) == '\0') {
      if (((param_2 + -0x40 <= *local_c) && (*local_c <= param_2 + 0x40)) &&
         ((param_3 + -0x30 <= local_c[1] && (local_c[1] <= param_3 + 0x30)))) {
        return 1;
      }
    }
    else {
      local_18 = (int *)game_loop_helper_018d0();
      piVar2 = (int *)game_loop_helper_018b0();
      for (; local_18 != piVar2; local_18 = local_18 + 1) {
        if ((((*local_18 != 0) && (param_2 + -0x40 <= *local_c)) && (*local_c <= param_2 + 0x40)) &&
           ((param_3 + -0x30 <= local_c[1] && (local_c[1] <= param_3 + 0x30)))) {
          return 1;
        }
      }
    }
    local_c = local_c + 8;
  } while( true );
}


/* ==== 004d4e30  FUN_004d4e30  size=969 ==== */

QuickBitSet *
FUN_004d4e30(QuickBitSet *param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  uVar3 = FUN_00634ac0(param_3,param_4,1);
  cVar2 = FUN_00634570(uVar3);
  if ((cVar2 == '\0') && (cVar2 = FUN_00634bb0(param_3,param_4), cVar2 == '\0')) {
    Concurrency::details::QuickBitSet::QuickBitSet(param_1);
    *(int *)param_1 = param_3;
    *(int *)(param_1 + 4) = param_4;
  }
  else {
    if (param_5 == -1) {
      local_18 = 1;
      do {
        iVar6 = local_18 * 0x10 + param_3;
        iVar5 = param_4 + local_18 * -0xc;
        iVar7 = local_18 * 0xc + param_4;
        bVar1 = false;
        iVar4 = param_3 + local_18 * -0x10;
        for (local_10 = iVar4; local_14 = iVar5, local_10 <= iVar6; local_10 = local_10 + 0x10) {
          for (; local_14 <= iVar7; local_14 = local_14 + 0xc) {
            if ((((local_10 <= iVar4) || (iVar6 <= local_10)) || (local_14 <= iVar5)) ||
               (iVar7 <= local_14)) {
              uVar3 = FUN_00634ac0(local_10,local_14,1);
              cVar2 = FUN_00634570(uVar3);
              if ((cVar2 == '\0') && (cVar2 = FUN_00634bb0(local_10,local_14), cVar2 == '\0')) {
                param_3 = local_10;
                param_4 = local_14;
                bVar1 = true;
                break;
              }
            }
          }
          if (bVar1) break;
        }
        if (bVar1) goto LAB_004d51d7;
        local_18 = local_18 + 1;
      } while( true );
    }
    local_c = 0;
    do {
      do {
        do {
          while( true ) {
            while( true ) {
              while (param_5 == 0) {
                local_c = local_c + -0x10;
                uVar3 = FUN_00634ac0(param_3 + local_c,param_4,1);
                cVar2 = FUN_00634570(uVar3);
                if ((cVar2 == '\0') &&
                   (cVar2 = FUN_00634bb0(param_3 + local_c,param_4), cVar2 == '\0')) {
                  iVar5 = param_3 + local_c;
                  uVar3 = param_2;
                  iVar4 = param_4;
                  game_get_state_ptr_d1520(param_2,iVar5,param_4);
                  cVar2 = FUN_004d4b10(uVar3,iVar5,iVar4);
                  if (cVar2 == '\0') {
                    param_3 = param_3 + local_c;
                    goto LAB_004d51d7;
                  }
                }
              }
              if (param_5 != 1) break;
              local_c = local_c + 0x10;
              uVar3 = FUN_00634ac0(param_3 + local_c,param_4,1);
              cVar2 = FUN_00634570(uVar3);
              if ((cVar2 == '\0') &&
                 (cVar2 = FUN_00634bb0(param_3 + local_c,param_4), cVar2 == '\0')) {
                iVar5 = param_3 + local_c;
                uVar3 = param_2;
                iVar4 = param_4;
                game_get_state_ptr_d1520(param_2,iVar5,param_4);
                cVar2 = FUN_004d4b10(uVar3,iVar5,iVar4);
                if (cVar2 == '\0') {
                  param_3 = param_3 + local_c;
                  goto LAB_004d51d7;
                }
              }
            }
            if (param_5 != 2) break;
            local_c = local_c + -0xc;
            uVar3 = FUN_00634ac0(param_3,param_4 + local_c,1);
            cVar2 = FUN_00634570(uVar3);
            if ((cVar2 == '\0') && (cVar2 = FUN_00634bb0(param_3,param_4 + local_c), cVar2 == '\0'))
            {
              iVar5 = param_4 + local_c;
              uVar3 = param_2;
              iVar4 = param_3;
              game_get_state_ptr_d1520(param_2,param_3,iVar5);
              cVar2 = FUN_004d4b10(uVar3,iVar4,iVar5);
              if (cVar2 == '\0') {
                param_4 = param_4 + local_c;
                goto LAB_004d51d7;
              }
            }
          }
        } while (param_5 != 3);
        local_c = local_c + 0xc;
        uVar3 = FUN_00634ac0(param_3,param_4 + local_c,1);
        cVar2 = FUN_00634570(uVar3);
      } while ((cVar2 != '\0') || (cVar2 = FUN_00634bb0(param_3,param_4 + local_c), cVar2 != '\0'));
      iVar5 = param_4 + local_c;
      uVar3 = param_2;
      iVar4 = param_3;
      game_get_state_ptr_d1520(param_2,param_3,iVar5);
      cVar2 = FUN_004d4b10(uVar3,iVar4,iVar5);
    } while (cVar2 != '\0');
    param_4 = param_4 + local_c;
LAB_004d51d7:
    Concurrency::details::QuickBitSet::QuickBitSet(param_1);
    *(int *)param_1 = param_3;
    *(int *)(param_1 + 4) = param_4;
  }
  return param_1;
}


/* ==== 004d5200  FUN_004d5200  size=1758 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_004d5200(int param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  int *local_120;
  uint local_11c;
  undefined1 local_114 [256];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00715c9b;
  local_10 = ExceptionList;
  local_14 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  game_timing_or_delay_helper();
  ui_close_matching_widgets();
  game_timing_or_delay_helper();
  ui_close_matching_widgets();
  ui_command_dispatch();
  game_timing_or_delay_helper();
  ui_close_matching_widgets();
  game_timing_or_delay_helper();
  ui_close_matching_widgets();
  game_timing_or_delay_helper();
  ui_close_matching_widgets();
  game_timing_or_delay_helper();
  ui_close_matching_widgets();
  ui_command_dispatch();
  ui_command_dispatch();
  ui_command_dispatch();
  ui_command_dispatch();
  game_timing_or_delay_helper();
  ui_close_matching_widgets();
  game_timing_or_delay_helper();
  ui_close_matching_widgets();
  game_timing_or_delay_helper();
  ui_clear_flag_bits_on_list();
  game_timing_or_delay_helper();
  cVar2 = game_frame_should_continue();
  if (cVar2 == '\0') {
    iVar3 = game_get_player_or_session_blob();
    *(undefined1 *)(iVar3 + 0xdfb) = 0;
  }
  game_timing_or_delay_helper();
  cVar2 = game_frame_should_continue();
  if (cVar2 == '\0') {
    ui_command_dispatch();
  }
  ui_clear_modal_input_state();
  DAT_007ca1d8 = 3;
  FUN_004d9010();
  if (*(char *)(param_1 + 0xdb8) == '\0') {
    piVar4 = (int *)game_get_state_ptr_d1520();
    *(undefined4 *)(param_1 + 0xdd4) = *(undefined4 *)(*piVar4 + 0x17c);
  }
  else {
    local_120 = (int *)game_loop_helper_018d0();
    piVar4 = (int *)game_loop_helper_018b0();
    for (; local_120 != piVar4; local_120 = local_120 + 1) {
      if (*local_120 != 0) {
        piVar5 = (int *)game_get_state_ptr_d1520();
        *(undefined4 *)(*local_120 + 0xdd4) = *(undefined4 *)(*piVar5 + 0x17c);
      }
    }
  }
  game_get_state_ptr_d1520();
  FUN_004ed450();
  game_timing_or_delay_helper();
  game_get_state_ptr_d1520();
  game_get_state_ptr_d1520();
  FUN_00405520();
  local_8 = 0;
  FUN_004054a0();
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_004054a0(&DAT_00750180);
  local_8 = 0xffffffff;
  iVar3 = FUN_00661cc0(0,0);
  *(undefined4 *)(iVar3 + 0xae8) = 1;
  *(undefined4 *)(iVar3 + 0xaec) = 1;
  *(undefined4 *)(iVar3 + 0xae4) = 3000;
  bVar1 = false;
  local_11c = 0;
  do {
    game_loop_helper_e9240();
    uVar6 = FUN_005191f0();
    if (uVar6 <= local_11c) {
LAB_004d5847:
      if (bVar1) {
        FUN_004054a0();
        FUN_0049d780();
      }
      _memset(local_114,0,0x100);
      FUN_00414e80();
      FUN_004054a0();
      FUN_0049d780();
      ExceptionList = local_10;
      return;
    }
    piVar4 = (int *)FUN_005191d0();
    if (*piVar4 == DAT_007ca224) {
      FUN_005191d0();
      cVar2 = FUN_00427c60();
      if ((cVar2 == '\0') || (iVar3 = game_get_player_or_session_blob(), *(int *)(iVar3 + 0xdc8) != 1)) {
        FUN_005191d0();
        cVar2 = FUN_00427c60();
        if ((cVar2 == '\0') || (iVar3 = game_get_player_or_session_blob(), *(int *)(iVar3 + 0xdc8) != 2)) {
          FUN_005191d0();
          cVar2 = FUN_00427c60();
          if ((cVar2 == '\0') || (iVar3 = game_get_player_or_session_blob(), *(int *)(iVar3 + 0xdc8) != 3)) {
            FUN_005191d0();
            cVar2 = FUN_00427c60();
            if ((cVar2 == '\0') || (iVar3 = game_get_player_or_session_blob(), *(int *)(iVar3 + 0xdc8) != 4)) {
              FUN_005191d0();
              cVar2 = FUN_00427c60();
              if ((cVar2 == '\0') || (iVar3 = game_get_player_or_session_blob(), *(int *)(iVar3 + 0xdc8) != 5)) {
                FUN_005191d0();
                cVar2 = FUN_00427c60();
                if ((cVar2 == '\0') || (iVar3 = game_get_player_or_session_blob(), *(int *)(iVar3 + 0xdc8) != 6)) {
                  FUN_005191d0();
                  cVar2 = FUN_00427c60();
                  if ((cVar2 != '\0') && (iVar3 = game_get_player_or_session_blob(), *(int *)(iVar3 + 0xdc8) == 7)) {
                    bVar1 = true;
                  }
                }
                else {
                  bVar1 = true;
                }
              }
              else {
                bVar1 = true;
              }
            }
            else {
              bVar1 = true;
            }
          }
          else {
            bVar1 = true;
          }
        }
        else {
          bVar1 = true;
        }
      }
      else {
        bVar1 = true;
      }
      goto LAB_004d5847;
    }
    local_11c = local_11c + 1;
  } while( true );
}


/* ==== 004d58e0  FUN_004d58e0  size=16 ==== */

undefined4 * FUN_004d58e0(void)

{
  return &DAT_007ca234;
}


/* ==== 004d58f0  FUN_004d58f0  size=767 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint FUN_004d58f0(int *param_1,int *param_2,int param_3,int *param_4,int *param_5,int param_6,
                 int *param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint3 uVar5;
  int iVar6;
  int iVar7;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_38;
  int local_20;
  
  _Vector_val<>();
  _Vector_val<>();
  local_20 = *param_1;
  local_60 = param_1[3];
  local_68 = param_1[4];
  local_70 = param_1[5];
  local_38 = *param_4;
  iVar1 = param_4[3];
  iVar2 = param_4[4];
  iVar3 = param_4[5];
  if (param_3 == -1) {
    local_20 = -local_60 - local_20;
  }
  if (param_6 == -1) {
    local_38 = -iVar1 - local_38;
  }
  local_20 = local_20 + *param_2;
  iVar7 = param_1[1] + param_2[1];
  iVar6 = param_1[2] + param_2[2];
  local_64 = local_38 + *param_5;
  local_6c = param_4[1] + param_5[1];
  local_74 = param_4[2] + param_5[2];
  if (local_20 + local_60 < local_64) {
    uVar4 = (uint)param_5 & 0xffffff00;
  }
  else {
    uVar4 = local_64 + iVar1;
    if (local_20 < (int)uVar4) {
      uVar5 = (uint3)(uVar4 >> 8);
      if (iVar7 + local_68 < local_6c) {
        uVar4 = (uint)uVar5 << 8;
      }
      else if (iVar7 < local_6c + iVar2) {
        uVar5 = (uint3)((uint)(iVar6 + local_70) >> 8);
        if (iVar6 + local_70 < local_74) {
          uVar4 = (uint)uVar5 << 8;
        }
        else if (iVar6 < local_74 + iVar3) {
          local_54 = local_64;
          if (local_64 < local_20) {
            local_54 = local_20;
          }
          local_58 = local_6c;
          if (local_6c < iVar7) {
            local_58 = iVar7;
          }
          local_5c = local_74;
          if (local_74 < iVar6) {
            local_5c = iVar6;
          }
          if (local_20 + local_60 < local_64 + iVar1) {
            local_60 = local_20 + local_60;
          }
          else {
            local_60 = local_64 + iVar1;
          }
          if (local_64 < local_20) {
            local_64 = local_20;
          }
          if (iVar7 + local_68 < local_6c + iVar2) {
            local_68 = iVar7 + local_68;
          }
          else {
            local_68 = local_6c + iVar2;
          }
          if (local_6c < iVar7) {
            local_6c = iVar7;
          }
          if (iVar6 + local_70 < local_74 + iVar3) {
            local_70 = iVar6 + local_70;
          }
          else {
            local_70 = local_74 + iVar3;
          }
          if (local_74 < iVar6) {
            local_74 = iVar6;
          }
          *param_7 = (local_60 - local_64) / 2 + local_54;
          param_7[1] = (local_68 - local_6c) / 2 + local_58;
          local_5c = (local_70 - local_74) / 2 + local_5c;
          param_7[2] = local_5c;
          uVar4 = CONCAT31((int3)((uint)local_5c >> 8),1);
        }
        else {
          uVar4 = (uint)uVar5 << 8;
        }
      }
      else {
        uVar4 = (uint)uVar5 << 8;
      }
    }
    else {
      uVar4 = uVar4 & 0xffffff00;
    }
  }
  return uVar4;
}


/* ==== 004d5bf0  FUN_004d5bf0  size=196 ==== */

undefined4
FUN_004d5bf0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 local_20 [4];
  undefined1 local_1c [4];
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  undefined1 local_10 [4];
  undefined1 local_c [7];
  char local_5;
  
  FUN_0048b680(local_10);
  do {
    uVar2 = FUN_0048b650(local_18);
    cVar1 = FUN_0040d2d0(uVar2);
    if (cVar1 == '\0') {
      return 0;
    }
    FUN_0048b680(local_c);
    while( true ) {
      uVar2 = FUN_0048b650(local_20);
      cVar1 = FUN_0040d2d0(uVar2);
      if (cVar1 == '\0') break;
      uVar2 = FUN_0042a620(param_5,param_6,param_7);
      uVar2 = FUN_0042a620(param_2,param_3,uVar2);
      local_5 = FUN_004d58f0(uVar2);
      if (local_5 != '\0') {
        return 1;
      }
      FUN_0044dde0(local_1c,0);
    }
    FUN_0044dde0(local_14,0);
  } while( true );
}


/* ==== 004d5cc0  FUN_004d5cc0  size=12948 ==== */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_004d5cc0(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 local_101c;
  undefined4 local_1018;
  undefined4 local_1014;
  undefined4 local_1010;
  undefined4 local_100c;
  undefined4 local_1008;
  undefined4 local_1004;
  undefined4 local_1000;
  undefined4 local_ffc;
  undefined4 local_ff8;
  undefined4 local_ff4;
  undefined4 local_ff0;
  undefined4 local_fec;
  undefined4 local_fe8;
  undefined4 local_fe4;
  undefined4 local_fe0;
  undefined4 local_fdc;
  undefined4 local_fd8;
  undefined4 local_fd4;
  undefined4 local_fd0;
  undefined4 local_fcc;
  undefined4 local_fc8;
  undefined4 local_fc4;
  undefined4 local_fc0;
  undefined4 local_fbc;
  undefined4 local_fb8;
  undefined4 local_fb4;
  undefined4 local_fb0;
  undefined4 local_fac;
  undefined4 local_fa8;
  undefined4 local_fa4;
  undefined4 local_fa0;
  undefined4 local_f9c;
  undefined4 local_f98;
  undefined4 local_f94;
  undefined4 local_f90;
  undefined4 local_f8c;
  undefined4 local_f88;
  undefined4 local_f84;
  undefined4 local_f80;
  undefined4 local_f7c;
  undefined4 local_f78;
  undefined4 local_f74;
  undefined4 local_f70;
  undefined4 local_f6c;
  undefined4 local_f68;
  undefined4 local_f64;
  undefined4 local_f60;
  undefined4 local_f5c;
  undefined4 local_f58;
  undefined4 local_f54;
  undefined4 local_f50;
  undefined4 local_f4c;
  undefined4 local_f48;
  undefined4 local_f44;
  undefined4 local_f40;
  undefined4 local_f3c;
  undefined4 local_f38;
  undefined4 local_f34;
  undefined4 local_f30;
  undefined4 local_f2c;
  undefined4 local_f28;
  undefined4 local_f24;
  undefined4 local_f20;
  undefined4 local_f1c;
  undefined4 local_f18;
  undefined4 local_f14;
  undefined4 local_f10;
  undefined4 local_f0c;
  undefined4 local_f08;
  undefined4 local_f04;
  undefined4 local_f00;
  undefined4 local_efc;
  undefined4 local_ef8;
  undefined4 local_ef4;
  undefined4 local_ef0;
  undefined4 local_eec;
  undefined4 local_ee8;
  undefined4 local_ee4;
  undefined4 local_ee0;
  undefined1 local_edc [4];
  undefined4 local_ed8;
  undefined4 local_ed4;
  undefined4 local_ed0;
  undefined4 local_ecc;
  undefined4 local_ec8;
  undefined4 local_ec4;
  undefined4 local_ec0;
  undefined4 local_ebc;
  undefined4 local_eb8;
  undefined4 local_eb4;
  undefined4 local_eb0;
  undefined4 local_eac;
  undefined4 local_ea8;
  undefined4 local_ea4;
  undefined4 local_ea0;
  undefined4 local_e9c;
  undefined4 local_e98;
  undefined4 local_e94;
  undefined4 local_e90;
  undefined4 local_e8c;
  undefined4 local_e88;
  undefined4 local_e84;
  undefined4 local_e80;
  undefined4 local_e7c;
  undefined4 local_e78;
  undefined4 local_e74;
  undefined4 local_e70;
  undefined4 local_e6c;
  undefined4 local_e68;
  undefined4 local_e64;
  undefined4 local_e60;
  undefined4 local_e5c;
  undefined4 local_e58;
  undefined4 local_e54;
  undefined4 local_e50;
  undefined4 local_e4c;
  undefined4 local_e48;
  undefined4 local_e44;
  undefined4 local_e40;
  undefined4 local_e3c;
  undefined4 local_e38;
  undefined4 local_e34;
  undefined4 local_e30;
  undefined4 local_e2c;
  undefined4 local_e28;
  undefined4 local_e24;
  undefined4 local_e20;
  undefined4 local_e1c;
  undefined4 local_e18;
  undefined4 local_e14;
  undefined4 local_e10;
  undefined4 local_e0c;
  undefined4 local_e08;
  undefined4 local_e04;
  undefined4 local_e00;
  undefined4 local_dfc;
  undefined4 local_df8;
  undefined4 local_df4;
  undefined4 local_df0;
  undefined4 local_dec;
  undefined4 local_de8;
  undefined4 local_de4;
  undefined4 local_de0;
  undefined1 local_ddc [4];
  undefined4 local_dd8;
  undefined4 local_dd4;
  undefined4 local_dd0;
  undefined4 local_dcc;
  undefined4 local_dc8;
  undefined4 local_dc4;
  undefined4 local_dc0;
  undefined4 local_dbc;
  undefined4 local_db8;
  undefined4 local_db4;
  undefined4 local_db0;
  undefined4 local_dac;
  undefined4 local_da8;
  undefined4 local_da4;
  undefined4 local_da0;
  undefined4 local_d9c;
  undefined4 local_d98;
  undefined4 local_d94;
  undefined4 local_d90;
  undefined4 local_d8c;
  undefined4 local_d88;
  undefined4 local_d84;
  undefined4 local_d80;
  undefined4 local_d7c;
  undefined4 local_d78;
  undefined4 local_d74;
  undefined4 local_d70;
  undefined4 local_d6c;
  undefined4 local_d68;
  undefined4 local_d64;
  undefined4 local_d60;
  undefined4 local_d5c;
  undefined4 local_d58;
  undefined4 local_d54;
  undefined4 local_d50;
  undefined4 local_d4c;
  undefined4 local_d48;
  undefined4 local_d44;
  undefined4 local_d40;
  undefined4 local_d3c;
  undefined4 local_d38;
  undefined4 local_d34;
  undefined4 local_d30;
  undefined4 local_d2c;
  undefined4 local_d28;
  undefined4 local_d24;
  undefined4 local_d20;
  undefined4 local_d1c;
  undefined4 local_d18;
  undefined4 local_d14;
  undefined4 local_d10;
  undefined4 local_d0c;
  undefined4 local_d08;
  undefined4 local_d04;
  undefined4 local_d00;
  undefined1 local_cfc [4];
  undefined4 local_cf8;
  undefined4 local_cf4;
  undefined4 local_cf0;
  undefined4 local_cec;
  undefined4 local_ce8;
  undefined4 local_ce4;
  undefined4 local_ce0;
  undefined4 local_cdc;
  undefined4 local_cd8;
  undefined4 local_cd4;
  undefined4 local_cd0;
  undefined4 local_ccc;
  undefined4 local_cc8;
  undefined4 local_cc4;
  undefined4 local_cc0;
  undefined4 local_cbc;
  undefined4 local_cb8;
  undefined4 local_cb4;
  undefined4 local_cb0;
  undefined4 local_cac;
  undefined4 local_ca8;
  undefined4 local_ca4;
  undefined4 local_ca0;
  undefined4 local_c9c;
  undefined4 local_c98;
  undefined4 local_c94;
  undefined4 local_c90;
  undefined4 local_c8c;
  undefined4 local_c88;
  undefined4 local_c84;
  undefined4 local_c80;
  undefined4 local_c7c;
  undefined4 local_c78;
  undefined4 local_c74;
  undefined4 local_c70;
  undefined4 local_c6c;
  undefined4 local_c68;
  undefined4 local_c64;
  undefined4 local_c60;
  undefined4 local_c5c;
  undefined4 local_c58;
  undefined4 local_c54;
  undefined4 local_c50;
  undefined4 local_c4c;
  undefined4 local_c48;
  undefined4 local_c44;
  undefined4 local_c40;
  undefined4 local_c3c;
  undefined1 local_c38 [4];
  undefined4 local_c34;
  undefined4 local_c30;
  undefined4 local_c2c;
  undefined4 local_c28;
  undefined4 local_c24;
  undefined4 local_c20;
  undefined4 local_c1c;
  undefined4 local_c18;
  undefined4 local_c14;
  undefined4 local_c10;
  undefined4 local_c0c;
  undefined4 local_c08;
  undefined4 local_c04;
  undefined4 local_c00;
  undefined4 local_bfc;
  undefined4 local_bf8;
  undefined4 local_bf4;
  undefined4 local_bf0;
  undefined4 local_bec;
  undefined4 local_be8;
  undefined4 local_be4;
  undefined4 local_be0;
  undefined4 local_bdc;
  undefined4 local_bd8;
  undefined4 local_bd4;
  undefined4 local_bd0;
  undefined4 local_bcc;
  undefined4 local_bc8;
  undefined4 local_bc4;
  undefined4 local_bc0;
  undefined4 local_bbc;
  undefined4 local_bb8;
  undefined4 local_bb4;
  undefined4 local_bb0;
  undefined4 local_bac;
  undefined4 local_ba8;
  undefined4 local_ba4;
  undefined4 local_ba0;
  undefined4 local_b9c;
  undefined4 local_b98;
  undefined4 local_b94;
  undefined4 local_b90;
  undefined4 local_b8c;
  undefined4 local_b88;
  undefined4 local_b84;
  undefined4 local_b80;
  undefined4 local_b7c;
  undefined4 local_b78;
  undefined1 local_b74 [4];
  undefined4 local_b70;
  undefined4 local_b6c;
  undefined4 local_b68;
  undefined4 local_b64;
  undefined4 local_b60;
  undefined4 local_b5c;
  undefined4 local_b58;
  undefined4 local_b54;
  undefined4 local_b50;
  undefined4 local_b4c;
  undefined4 local_b48;
  undefined4 local_b44;
  undefined4 local_b40;
  undefined4 local_b3c;
  undefined4 local_b38;
  undefined4 local_b34;
  undefined4 local_b30;
  undefined4 local_b2c;
  undefined4 local_b28;
  undefined4 local_b24;
  undefined4 local_b20;
  undefined4 local_b1c;
  undefined4 local_b18;
  undefined4 local_b14;
  undefined4 local_b10;
  undefined4 local_b0c;
  undefined4 local_b08;
  undefined4 local_b04;
  undefined4 local_b00;
  undefined4 local_afc;
  undefined4 local_af8;
  undefined4 local_af4;
  undefined4 local_af0;
  undefined4 local_aec;
  undefined4 local_ae8;
  undefined4 local_ae4;
  undefined4 local_ae0;
  undefined4 local_adc;
  undefined4 local_ad8;
  undefined4 local_ad4;
  undefined4 local_ad0;
  undefined1 local_acc [4];
  undefined4 local_ac8;
  undefined4 local_ac4;
  undefined4 local_ac0;
  undefined4 local_abc;
  undefined4 local_ab8;
  undefined4 local_ab4;
  undefined4 local_ab0;
  undefined4 local_aac;
  undefined4 local_aa8;
  undefined4 local_aa4;
  undefined4 local_aa0;
  undefined4 local_a9c;
  undefined4 local_a98;
  undefined4 local_a94;
  undefined4 local_a90;
  undefined4 local_a8c;
  undefined4 local_a88;
  undefined4 local_a84;
  undefined4 local_a80;
  undefined4 local_a7c;
  undefined4 local_a78;
  undefined4 local_a74;
  undefined4 local_a70;
  undefined4 local_a6c;
  undefined4 local_a68;
  undefined4 local_a64;
  undefined4 local_a60;
  undefined4 local_a5c;
  undefined4 local_a58;
  undefined4 local_a54;
  undefined4 local_a50;
  undefined4 local_a4c;
  undefined4 local_a48;
  undefined4 local_a44;
  undefined4 local_a40;
  undefined4 local_a3c;
  undefined4 local_a38;
  undefined4 local_a34;
  undefined4 local_a30;
  undefined4 local_a2c;
  undefined1 local_a28 [4];
  undefined4 local_a24;
  undefined4 local_a20;
  undefined4 local_a1c;
  undefined4 local_a18;
  undefined4 local_a14;
  undefined4 local_a10;
  undefined4 local_a0c;
  undefined4 local_a08;
  undefined4 local_a04;
  undefined4 local_a00;
  undefined4 local_9fc;
  undefined4 local_9f8;
  undefined4 local_9f4;
  undefined4 local_9f0;
  undefined4 local_9ec;
  undefined4 local_9e8;
  undefined4 local_9e4;
  undefined4 local_9e0;
  undefined4 local_9dc;
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
  undefined4 local_9ac;
  undefined4 local_9a8;
  undefined4 local_9a4;
  undefined4 local_9a0;
  undefined4 local_99c;
  undefined4 local_998;
  undefined4 local_994;
  undefined4 local_990;
  undefined4 local_98c;
  undefined4 local_988;
  undefined1 local_984 [4];
  undefined4 local_980;
  undefined4 local_97c;
  undefined4 local_978;
  undefined4 local_974;
  undefined4 local_970;
  undefined4 local_96c;
  undefined4 local_968;
  undefined4 local_964;
  undefined4 local_960;
  undefined4 local_95c;
  undefined4 local_958;
  undefined4 local_954;
  undefined4 local_950;
  undefined4 local_94c;
  undefined4 local_948;
  undefined4 local_944;
  undefined4 local_940;
  undefined4 local_93c;
  undefined4 local_938;
  undefined4 local_934;
  undefined4 local_930;
  undefined4 local_92c;
  undefined4 local_928;
  undefined4 local_924;
  undefined4 local_920;
  undefined4 local_91c;
  undefined4 local_918;
  undefined4 local_914;
  undefined4 local_910;
  undefined4 local_90c;
  undefined4 local_908;
  undefined4 local_904;
  undefined4 local_900;
  undefined4 local_8fc;
  undefined4 local_8f8;
  undefined4 local_8f4;
  undefined4 local_8f0;
  undefined4 local_8ec;
  undefined1 local_8e8 [4];
  undefined4 local_8e4;
  undefined4 local_8e0;
  undefined4 local_8dc;
  undefined4 local_8d8;
  undefined4 local_8d4;
  undefined4 local_8d0;
  undefined4 local_8cc;
  undefined4 local_8c8;
  undefined4 local_8c4;
  undefined4 local_8c0;
  undefined4 local_8bc;
  undefined4 local_8b8;
  undefined4 local_8b4;
  undefined4 local_8b0;
  undefined4 local_8ac;
  undefined4 local_8a8;
  undefined4 local_8a4;
  undefined4 local_8a0;
  undefined4 local_89c;
  undefined4 local_898;
  undefined4 local_894;
  undefined4 local_890;
  undefined4 local_88c;
  undefined4 local_888;
  undefined4 local_884;
  undefined4 local_880;
  undefined4 local_87c;
  undefined4 local_878;
  undefined4 local_874;
  undefined4 local_870;
  undefined4 local_86c;
  undefined4 local_868;
  undefined4 local_864;
  undefined4 local_860;
  undefined4 local_85c;
  undefined4 local_858;
  undefined4 local_854;
  undefined4 local_850;
  undefined1 local_84c [4];
  undefined4 local_848;
  undefined4 local_844;
  undefined4 local_840;
  undefined4 local_83c;
  undefined4 local_838;
  undefined4 local_834;
  undefined4 local_830;
  undefined4 local_82c;
  undefined4 local_828;
  undefined4 local_824;
  undefined4 local_820;
  undefined4 local_81c;
  undefined4 local_818;
  undefined4 local_814;
  undefined4 local_810;
  undefined4 local_80c;
  undefined4 local_808;
  undefined4 local_804;
  undefined4 local_800;
  undefined4 local_7fc;
  undefined4 local_7f8;
  undefined4 local_7f4;
  undefined4 local_7f0;
  undefined4 local_7ec;
  undefined4 local_7e8;
  undefined4 local_7e4;
  undefined4 local_7e0;
  undefined4 local_7dc;
  undefined4 local_7d8;
  undefined4 local_7d4;
  undefined4 local_7d0;
  undefined4 local_7cc;
  undefined4 local_7c8;
  undefined4 local_7c4;
  undefined4 local_7c0;
  undefined4 local_7bc;
  undefined1 local_7b8 [4];
  undefined4 local_7b4;
  undefined4 local_7b0;
  undefined4 local_7ac;
  undefined4 local_7a8;
  undefined4 local_7a4;
  undefined4 local_7a0;
  undefined4 local_79c;
  undefined4 local_798;
  undefined4 local_794;
  undefined4 local_790;
  undefined4 local_78c;
  undefined4 local_788;
  undefined4 local_784;
  undefined4 local_780;
  undefined4 local_77c;
  undefined4 local_778;
  undefined4 local_774;
  undefined4 local_770;
  undefined4 local_76c;
  undefined4 local_768;
  undefined4 local_764;
  undefined4 local_760;
  undefined4 local_75c;
  undefined4 local_758;
  undefined4 local_754;
  undefined4 local_750;
  undefined4 local_74c;
  undefined4 local_748;
  undefined4 local_744;
  undefined4 local_740;
  undefined4 local_73c;
  undefined4 local_738;
  undefined1 local_734 [4];
  undefined4 local_730;
  undefined4 local_72c;
  undefined4 local_728;
  undefined4 local_724;
  undefined4 local_720;
  undefined4 local_71c;
  undefined4 local_718;
  undefined4 local_714;
  undefined4 local_710;
  undefined4 local_70c;
  undefined4 local_708;
  undefined4 local_704;
  undefined4 local_700;
  undefined4 local_6fc;
  undefined4 local_6f8;
  undefined4 local_6f4;
  undefined4 local_6f0;
  undefined4 local_6ec;
  undefined4 local_6e8;
  undefined4 local_6e4;
  undefined4 local_6e0;
  undefined4 local_6dc;
  undefined4 local_6d8;
  undefined4 local_6d4;
  undefined4 local_6d0;
  undefined4 local_6cc;
  undefined4 local_6c8;
  undefined4 local_6c4;
  undefined4 local_6c0;
  undefined4 local_6bc;
  undefined4 local_6b8;
  undefined1 local_6b4 [4];
  undefined4 local_6b0;
  undefined4 local_6ac;
  undefined4 local_6a8;
  undefined4 local_6a4;
  undefined4 local_6a0;
  undefined4 local_69c;
  undefined4 local_698;
  undefined4 local_694;
  undefined4 local_690;
  undefined4 local_68c;
  undefined4 local_688;
  undefined4 local_684;
  undefined4 local_680;
  undefined4 local_67c;
  undefined4 local_678;
  undefined4 local_674;
  undefined4 local_670;
  undefined4 local_66c;
  undefined4 local_668;
  undefined4 local_664;
  undefined4 local_660;
  undefined4 local_65c;
  undefined4 local_658;
  undefined4 local_654;
  undefined4 local_650;
  undefined4 local_64c;
  undefined4 local_648;
  undefined4 local_644;
  undefined4 local_640;
  undefined1 local_63c [4];
  undefined4 local_638;
  undefined4 local_634;
  undefined4 local_630;
  undefined4 local_62c;
  undefined4 local_628;
  undefined4 local_624;
  undefined4 local_620;
  undefined4 local_61c;
  undefined4 local_618;
  undefined4 local_614;
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
  undefined1 local_5c4 [4];
  undefined4 local_5c0;
  undefined4 local_5bc;
  undefined4 local_5b8;
  undefined4 local_5b4;
  undefined4 local_5b0;
  undefined4 local_5ac;
  undefined4 local_5a8;
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
  undefined4 local_56c;
  undefined4 local_568;
  undefined4 local_564;
  undefined4 local_560;
  undefined4 local_55c;
  undefined4 local_558;
  undefined1 local_554 [4];
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
  undefined1 local_4ec [4];
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
  undefined1 local_484 [4];
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
  undefined1 local_420 [4];
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
  undefined1 local_3bc [4];
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
  undefined1 local_360 [4];
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
  undefined1 local_304 [4];
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
  undefined1 local_2b0 [4];
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
  undefined1 local_260 [4];
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
  undefined1 local_210 [4];
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
  undefined1 local_1c0 [4];
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
  undefined1 local_17c [4];
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
  undefined1 local_13c [4];
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined1 local_100 [4];
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined1 local_c8 [4];
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined1 local_98 [4];
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined1 local_70 [4];
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined1 local_54 [4];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_38 [4];
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c [4];
  uint local_8;
  
  local_8 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  if (param_2 == 1) {
    local_1bc = 1;
    local_1b8 = 2;
    local_1b4 = 3;
    local_1b0 = 4;
    local_1ac = 5;
    local_1a8 = 6;
    local_1a4 = 7;
    local_1a0 = 8;
    local_19c = 9;
    local_198 = 10;
    local_194 = 0xb;
    local_190 = 0xc;
    local_18c = 0xd;
    local_188 = 0xe;
    local_184 = 0xf;
    local_180 = 0x10;
    uVar1 = allocator<>();
    puVar2 = (undefined4 *)FUN_00401880(&local_1bc,local_17c);
    FUN_0051a0b0(*puVar2,puVar2[1],uVar1);
  }
  else if (param_2 == 2) {
    local_2ac = 0x65;
    local_2a8 = 0x66;
    local_2a4 = 0x67;
    local_2a0 = 0x68;
    local_29c = 0x69;
    local_298 = 0x6a;
    local_294 = 0x6b;
    local_290 = 0x6c;
    local_28c = 0x6d;
    local_288 = 0x6e;
    local_284 = 0x6f;
    local_280 = 0x70;
    local_27c = 0x71;
    local_278 = 0x72;
    local_274 = 0x73;
    local_270 = 0x74;
    local_26c = 0x75;
    local_268 = 0x76;
    local_264 = 0x77;
    uVar1 = allocator<>();
    puVar2 = (undefined4 *)FUN_00401880(&local_2ac,local_260);
    FUN_0051a0b0(*puVar2,puVar2[1],uVar1);
  }
  else if (param_2 == 3) {
    local_a24 = 0xc9;
    local_a20 = 0xca;
    local_a1c = 0xcb;
    local_a18 = 0xcc;
    local_a14 = 0xcd;
    local_a10 = 0xce;
    local_a0c = 0xcf;
    local_a08 = 0xd0;
    local_a04 = 0xd1;
    local_a00 = 0xd2;
    local_9fc = 0xd3;
    local_9f8 = 0xd4;
    local_9f4 = 0xd5;
    local_9f0 = 0xd6;
    local_9ec = 0xd7;
    local_9e8 = 0xd8;
    local_9e4 = 0xd9;
    local_9e0 = 0xda;
    local_9dc = 0xdb;
    local_9d8 = 0xdc;
    local_9d4 = 0xdd;
    local_9d0 = 0xde;
    local_9cc = 0xdf;
    local_9c8 = 0xe0;
    local_9c4 = 0xe1;
    local_9c0 = 0xe2;
    local_9bc = 0xe3;
    local_9b8 = 0xe4;
    local_9b4 = 0xe5;
    local_9b0 = 0xe6;
    local_9ac = 0xe7;
    local_9a8 = 0xe8;
    local_9a4 = 0xe9;
    local_9a0 = 0xea;
    local_99c = 0xeb;
    local_998 = 0xec;
    local_994 = 0xed;
    local_990 = 0xee;
    local_98c = 0xef;
    local_988 = 0xf0;
    uVar1 = allocator<>();
    puVar2 = (undefined4 *)FUN_00401880(&local_a24,local_984);
    FUN_0051a0b0(*puVar2,puVar2[1],uVar1);
  }
  else if (param_2 == 4) {
    local_ed8 = 0x191;
    local_ed4 = 0x192;
    local_ed0 = 0x193;
    local_ecc = 0x194;
    local_ec8 = 0x195;
    local_ec4 = 0x196;
    local_ec0 = 0x197;
    local_ebc = 0x198;
    local_eb8 = 0x199;
    local_eb4 = 0x19a;
    local_eb0 = 0x19b;
    local_eac = 0x19c;
    local_ea8 = 0x19d;
    local_ea4 = 0x19e;
    local_ea0 = 0x19f;
    local_e9c = 0x1a0;
    local_e98 = 0x1a1;
    local_e94 = 0x1a2;
    local_e90 = 0x1a3;
    local_e8c = 0x1a4;
    local_e88 = 0x1a5;
    local_e84 = 0x1a6;
    local_e80 = 0x1a7;
    local_e7c = 0x1a8;
    local_e78 = 0x1a9;
    local_e74 = 0x1aa;
    local_e70 = 0x1ab;
    local_e6c = 0x1ac;
    local_e68 = 0x1ad;
    local_e64 = 0x1ae;
    local_e60 = 0x1af;
    local_e5c = 0x1b0;
    local_e58 = 0x1b1;
    local_e54 = 0x1b2;
    local_e50 = 0x1b3;
    local_e4c = 0x1b4;
    local_e48 = 0x1b5;
    local_e44 = 0x1b6;
    local_e40 = 0x1b7;
    local_e3c = 0x1b8;
    local_e38 = 0x1b9;
    local_e34 = 0x1ba;
    local_e30 = 0x1bb;
    local_e2c = 0x1bc;
    local_e28 = 0x1bd;
    local_e24 = 0x1be;
    local_e20 = 0x1bf;
    local_e1c = 0x1c0;
    local_e18 = 0x1c1;
    local_e14 = 0x1c2;
    local_e10 = 0x1c3;
    local_e0c = 0x1c4;
    local_e08 = 0x1c5;
    local_e04 = 0x1c6;
    local_e00 = 0x1c7;
    local_dfc = 0x1c8;
    local_df8 = 0x1c9;
    local_df4 = 0x1ca;
    local_df0 = 0x1cb;
    local_dec = 0x1cc;
    local_de8 = 0x1cd;
    local_de4 = 0x1ce;
    local_de0 = 0x1cf;
    uVar1 = allocator<>();
    puVar2 = (undefined4 *)FUN_00401880(&local_ed8,local_ddc);
    FUN_0051a0b0(*puVar2,puVar2[1],uVar1);
  }
  else if (param_2 == 5) {
    local_8e4 = 0x259;
    local_8e0 = 0x25a;
    local_8dc = 0x25b;
    local_8d8 = 0x25c;
    local_8d4 = 0x25d;
    local_8d0 = 0x25e;
    local_8cc = 0x25f;
    local_8c8 = 0x260;
    local_8c4 = 0x261;
    local_8c0 = 0x262;
    local_8bc = 0x263;
    local_8b8 = 0x264;
    local_8b4 = 0x265;
    local_8b0 = 0x266;
    local_8ac = 0x267;
    local_8a8 = 0x268;
    local_8a4 = 0x269;
    local_8a0 = 0x26a;
    local_89c = 0x26b;
    local_898 = 0x26c;
    local_894 = 0x26d;
    local_890 = 0x26e;
    local_88c = 0x26f;
    local_888 = 0x270;
    local_884 = 0x271;
    local_880 = 0x272;
    local_87c = 0x273;
    local_878 = 0x274;
    local_874 = 0x275;
    local_870 = 0x276;
    local_86c = 0x277;
    local_868 = 0x278;
    local_864 = 0x279;
    local_860 = 0x27a;
    local_85c = 0x27b;
    local_858 = 0x27c;
    local_854 = 0x27d;
    local_850 = 0x27e;
    uVar1 = allocator<>();
    puVar2 = (undefined4 *)FUN_00401880(&local_8e4,local_84c);
    FUN_0051a0b0(*puVar2,puVar2[1],uVar1);
  }
  else if (param_2 == 6) {
    local_101c = 0x321;
    local_1018 = 0x322;
    local_1014 = 0x323;
    local_1010 = 0x324;
    local_100c = 0x325;
    local_1008 = 0x326;
    local_1004 = 0x327;
    local_1000 = 0x328;
    local_ffc = 0x329;
    local_ff8 = 0x32a;
    local_ff4 = 0x32b;
    local_ff0 = 0x32c;
    local_fec = 0x32d;
    local_fe8 = 0x32e;
    local_fe4 = 0x32f;
    local_fe0 = 0x330;
    local_fdc = 0x331;
    local_fd8 = 0x332;
    local_fd4 = 0x333;
    local_fd0 = 0x334;
    local_fcc = 0x335;
    local_fc8 = 0x336;
    local_fc4 = 0x337;
    local_fc0 = 0x338;
    local_fbc = 0x339;
    local_fb8 = 0x33a;
    local_fb4 = 0x33b;
    local_fb0 = 0x33c;
    local_fac = 0x33d;
    local_fa8 = 0x33e;
    local_fa4 = 0x33f;
    local_fa0 = 0x340;
    local_f9c = 0x341;
    local_f98 = 0x342;
    local_f94 = 0x343;
    local_f90 = 0x344;
    local_f8c = 0x345;
    local_f88 = 0x346;
    local_f84 = 0x347;
    local_f80 = 0x348;
    local_f7c = 0x349;
    local_f78 = 0x34a;
    local_f74 = 0x34b;
    local_f70 = 0x34c;
    local_f6c = 0x34d;
    local_f68 = 0x34e;
    local_f64 = 0x34f;
    local_f60 = 0x350;
    local_f5c = 0x351;
    local_f58 = 0x352;
    local_f54 = 0x353;
    local_f50 = 0x354;
    local_f4c = 0x355;
    local_f48 = 0x356;
    local_f44 = 0x357;
    local_f40 = 0x358;
    local_f3c = 0x359;
    local_f38 = 0x35a;
    local_f34 = 0x35b;
    local_f30 = 0x35c;
    local_f2c = 0x35d;
    local_f28 = 0x35e;
    local_f24 = 0x35f;
    local_f20 = 0x360;
    local_f1c = 0x361;
    local_f18 = 0x362;
    local_f14 = 0x363;
    local_f10 = 0x364;
    local_f0c = 0x365;
    local_f08 = 0x366;
    local_f04 = 0x367;
    local_f00 = 0x368;
    local_efc = 0x369;
    local_ef8 = 0x36a;
    local_ef4 = 0x36b;
    local_ef0 = 0x36c;
    local_eec = 0x36d;
    local_ee8 = 0x36e;
    local_ee4 = 0x36f;
    local_ee0 = 0x370;
    uVar1 = allocator<>();
    puVar2 = (undefined4 *)FUN_00401880(&local_101c,local_edc);
    FUN_0051a0b0(*puVar2,puVar2[1],uVar1);
  }
  else if (param_2 == 7) {
    local_730 = 0x3e9;
    local_72c = 0x3ea;
    local_728 = 0x3eb;
    local_724 = 0x3ec;
    local_720 = 0x3ed;
    local_71c = 0x3ee;
    local_718 = 0x3ef;
    local_714 = 0x3f0;
    local_710 = 0x3f1;
    local_70c = 0x3f2;
    local_708 = 0x3f3;
    local_704 = 0x3f4;
    local_700 = 0x3f5;
    local_6fc = 0x3f6;
    local_6f8 = 0x3f7;
    local_6f4 = 0x3f8;
    local_6f0 = 0x3f9;
    local_6ec = 0x3fa;
    local_6e8 = 0x3fb;
    local_6e4 = 0x3fc;
    local_6e0 = 0x3fd;
    local_6dc = 0x3fe;
    local_6d8 = 0x3ff;
    local_6d4 = 0x400;
    local_6d0 = 0x401;
    local_6cc = 0x402;
    local_6c8 = 0x403;
    local_6c4 = 0x404;
    local_6c0 = 0x405;
    local_6bc = 0x406;
    local_6b8 = 0x407;
    uVar1 = allocator<>();
    puVar2 = (undefined4 *)FUN_00401880(&local_730,local_6b4);
    FUN_0051a0b0(*puVar2,puVar2[1],uVar1);
  }
  else if (param_2 == 8) {
    local_c34 = 0x4b1;
    local_c30 = 0x4b2;
    local_c2c = 0x4b3;
    local_c28 = 0x4b4;
    local_c24 = 0x4b5;
    local_c20 = 0x4b6;
    local_c1c = 0x4b7;
    local_c18 = 0x4b8;
    local_c14 = 0x4b9;
    local_c10 = 0x4ba;
    local_c0c = 0x4bb;
    local_c08 = 0x4bc;
    local_c04 = 0x4bd;
    local_c00 = 0x4be;
    local_bfc = 0x4bf;
    local_bf8 = 0x4c0;
    local_bf4 = 0x4c1;
    local_bf0 = 0x4c2;
    local_bec = 0x4c3;
    local_be8 = 0x4c4;
    local_be4 = 0x4c5;
    local_be0 = 0x4c6;
    local_bdc = 0x4c7;
    local_bd8 = 0x4c8;
    local_bd4 = 0x4c9;
    local_bd0 = 0x4ca;
    local_bcc = 0x4cb;
    local_bc8 = 0x4cc;
    local_bc4 = 0x4cd;
    local_bc0 = 0x4ce;
    local_bbc = 0x4cf;
    local_bb8 = 0x4d0;
    local_bb4 = 0x4d1;
    local_bb0 = 0x4d2;
    local_bac = 0x4d3;
    local_ba8 = 0x4d4;
    local_ba4 = 0x4d5;
    local_ba0 = 0x4d6;
    local_b9c = 0x4d7;
    local_b98 = 0x4d8;
    local_b94 = 0x4d9;
    local_b90 = 0x4da;
    local_b8c = 0x4db;
    local_b88 = 0x4dc;
    local_b84 = 0x4dd;
    local_b80 = 0x4de;
    local_b7c = 0x4df;
    local_b78 = 0x4e0;
    uVar1 = allocator<>();
    puVar2 = (undefined4 *)FUN_00401880(&local_c34,local_b74);
    FUN_0051a0b0(*puVar2,puVar2[1],uVar1);
  }
  else if (param_2 == 9) {
    local_25c = 0x579;
    local_258 = 0x57a;
    local_254 = 0x57b;
    local_250 = 0x57c;
    local_24c = 0x57d;
    local_248 = 0x57e;
    local_244 = 0x57f;
    local_240 = 0x580;
    local_23c = 0x581;
    local_238 = 0x582;
    local_234 = 0x583;
    local_230 = 0x584;
    local_22c = 0x585;
    local_228 = 0x586;
    local_224 = 0x587;
    local_220 = 0x588;
    local_21c = 0x589;
    local_218 = 0x58a;
    local_214 = 0x58b;
    uVar1 = allocator<>();
    puVar2 = (undefined4 *)FUN_00401880(&local_25c,local_210);
    FUN_0051a0b0(*puVar2,puVar2[1],uVar1);
  }
  else if (param_2 == 0xb) {
    local_6b0 = 0x641;
    local_6ac = 0x642;
    local_6a8 = 0x643;
    local_6a4 = 0x644;
    local_6a0 = 0x645;
    local_69c = 0x646;
    local_698 = 0x647;
    local_694 = 0x648;
    local_690 = 0x649;
    local_68c = 0x64a;
    local_688 = 0x64b;
    local_684 = 0x64c;
    local_680 = 0x64d;
    local_67c = 0x64e;
    local_678 = 0x64f;
    local_674 = 0x650;
    local_670 = 0x651;
    local_66c = 0x652;
    local_668 = 0x653;
    local_664 = 0x654;
    local_660 = 0x655;
    local_65c = 0x656;
    local_658 = 0x657;
    local_654 = 0x658;
    local_650 = 0x659;
    local_64c = 0x65a;
    local_648 = 0x65b;
    local_644 = 0x65c;
    local_640 = 0x65d;
    uVar1 = allocator<>();
    puVar2 = (undefined4 *)FUN_00401880(&local_6b0,local_63c);
    FUN_0051a0b0(*puVar2,puVar2[1],uVar1);
  }
  else if (param_2 == 0xc) {
    local_7b4 = 0x709;
    local_7b0 = 0x70a;
    local_7ac = 0x70b;
    local_7a8 = 0x70c;
    local_7a4 = 0x70d;
    local_7a0 = 0x70e;
    local_79c = 0x70f;
    local_798 = 0x710;
    local_794 = 0x711;
    local_790 = 0x712;
    local_78c = 0x713;
    local_788 = 0x714;
    local_784 = 0x715;
    local_780 = 0x716;
    local_77c = 0x717;
    local_778 = 0x718;
    local_774 = 0x719;
    local_770 = 0x71a;
    local_76c = 0x71b;
    local_768 = 0x71c;
    local_764 = 0x71d;
    local_760 = 0x71e;
    local_75c = 0x71f;
    local_758 = 0x720;
    local_754 = 0x721;
    local_750 = 0x722;
    local_74c = 0x723;
    local_748 = 0x724;
    local_744 = 0x725;
    local_740 = 0x726;
    local_73c = 0x727;
    local_738 = 0x728;
    uVar1 = allocator<>();
    puVar2 = (undefined4 *)FUN_00401880(&local_7b4,local_734);
    FUN_0051a0b0(*puVar2,puVar2[1],uVar1);
  }
  else if (param_2 == 0xd) {
    local_638 = 0x7d1;
    local_634 = 0x7d2;
    local_630 = 0x7d3;
    local_62c = 0x7d4;
    local_628 = 0x7d5;
    local_624 = 0x7d6;
    local_620 = 0x7d7;
    local_61c = 0x7d8;
    local_618 = 0x7d9;
    local_614 = 0x7da;
    local_610 = 0x7db;
    local_60c = 0x7dc;
    local_608 = 0x7dd;
    local_604 = 0x7de;
    local_600 = 0x7df;
    local_5fc = 0x7e0;
    local_5f8 = 0x7e1;
    local_5f4 = 0x7e2;
    local_5f0 = 0x7e3;
    local_5ec = 0x7e4;
    local_5e8 = 0x7e5;
    local_5e4 = 0x7e6;
    local_5e0 = 0x7e7;
    local_5dc = 0x7e8;
    local_5d8 = 0x7e9;
    local_5d4 = 0x7ea;
    local_5d0 = 0x7eb;
    local_5cc = 0x7ec;
    local_5c8 = 0x7ed;
    uVar1 = allocator<>();
    puVar2 = (undefined4 *)FUN_00401880(&local_638,local_5c4);
    FUN_0051a0b0(*puVar2,puVar2[1],uVar1);
  }
  else if (param_2 == 0xe) {
    local_480 = 0x899;
    local_47c = 0x89a;
    local_478 = 0x89b;
    local_474 = 0x89c;
    local_470 = 0x89d;
    local_46c = 0x89e;
    local_468 = 0x89f;
    local_464 = 0x8a0;
    local_460 = 0x8a1;
    local_45c = 0x8a2;
    local_458 = 0x8a3;
    local_454 = 0x8a4;
    local_450 = 0x8a5;
    local_44c = 0x8a6;
    local_448 = 0x8a7;
    local_444 = 0x8a8;
    local_440 = 0x8a9;
    local_43c = 0x8aa;
    local_438 = 0x8ab;
    local_434 = 0x8ac;
    local_430 = 0x8ad;
    local_42c = 0x8ae;
    local_428 = 0x8af;
    local_424 = 0x8b0;
    uVar1 = allocator<>();
    puVar2 = (undefined4 *)FUN_00401880(&local_480,local_420);
    FUN_0051a0b0(*puVar2,puVar2[1],uVar1);
  }
  else if (param_2 == 0xf) {
    local_cf8 = 0x961;
    local_cf4 = 0x962;
    local_cf0 = 0x963;
    local_cec = 0x964;
    local_ce8 = 0x965;
    local_ce4 = 0x966;
    local_ce0 = 0x967;
    local_cdc = 0x968;
    local_cd8 = 0x969;
    local_cd4 = 0x96a;
    local_cd0 = 0x96b;
    local_ccc = 0x96d;
    local_cc8 = 0x96e;
    local_cc4 = 0x96f;
    local_cc0 = 0x970;
    local_cbc = 0x971;
    local_cb8 = 0x972;
    local_cb4 = 0x973;
    local_cb0 = 0x974;
    local_cac = 0x975;
    local_ca8 = 0x976;
    local_ca4 = 0x977;
    local_ca0 = 0x978;
    local_c9c = 0x979;
    local_c98 = 0x97a;
    local_c94 = 0x97b;
    local_c90 = 0x97c;
    local_c8c = 0x97d;
    local_c88 = 0x97e;
    local_c84 = 0x97f;
    local_c80 = 0x980;
    local_c7c = 0x981;
    local_c78 = 0x982;
    local_c74 = 0x983;
    local_c70 = 0x984;
    local_c6c = 0x985;
    local_c68 = 0x986;
    local_c64 = 0x987;
    local_c60 = 0x988;
    local_c5c = 0x989;
    local_c58 = 0x98a;
    local_c54 = 0x98b;
    local_c50 = 0x98c;
    local_c4c = 0x98d;
    local_c48 = 0x98e;
    local_c44 = 0x98f;
    local_c40 = 0x990;
    local_c3c = 0x991;
    uVar1 = allocator<>();
    puVar2 = (undefined4 *)FUN_00401880(&local_cf8,local_c38);
    FUN_0051a0b0(*puVar2,puVar2[1],uVar1);
  }
  else if (param_2 == 0x10) {
    local_ac8 = 0xa29;
    local_ac4 = 0xa2a;
    local_ac0 = 0xa2b;
    local_abc = 0xa2c;
    local_ab8 = 0xa2e;
    local_ab4 = 0xa30;
    local_ab0 = 0xa31;
    local_aac = 0xa32;
    local_aa8 = 0xa33;
    local_aa4 = 0xa34;
    local_aa0 = 0xa35;
    local_a9c = 0xa36;
    local_a98 = 0xa37;
    local_a94 = 0xa38;
    local_a90 = 0xa39;
    local_a8c = 0xa3a;
    local_a88 = 0xa3b;
    local_a84 = 0xa3c;
    local_a80 = 0xa3d;
    local_a7c = 0xa3e;
    local_a78 = 0xa40;
    local_a74 = 0xa41;
    local_a70 = 0xa42;
    local_a6c = 0xa43;
    local_a68 = 0xa44;
    local_a64 = 0xa46;
    local_a60 = 0xa49;
    local_a5c = 0xa4a;
    local_a58 = 0xa4b;
    local_a54 = 0xa4c;
    local_a50 = 0xa51;
    local_a4c = 0xa52;
    local_a48 = 0xa53;
    local_a44 = 0xa54;
    local_a40 = 0xa55;
    local_a3c = 0xa56;
    local_a38 = 0xa57;
    local_a34 = 0xa58;
    local_a30 = 0xa59;
    local_a2c = 0xa5a;
    uVar1 = allocator<>();
    puVar2 = (undefined4 *)FUN_00401880(&local_ac8,local_a28);
    FUN_0051a0b0(*puVar2,puVar2[1],uVar1);
  }
  else if (param_2 == 0x11) {
    local_94 = 0x11f9;
    local_90 = 0x11fa;
    local_8c = 0x11fb;
    local_88 = 0x11fc;
    local_84 = 0x11fd;
    local_80 = 0x11fe;
    local_7c = 0x11ff;
    local_78 = 0x1200;
    local_74 = 0x1201;
    uVar1 = allocator<>();
    puVar2 = (undefined4 *)FUN_00401880(&local_94,local_70);
    FUN_0051a0b0(*puVar2,puVar2[1],uVar1);
  }
  else if (param_2 == 0x15) {
    local_4e8 = 0xbb9;
    local_4e4 = 0xbba;
    local_4e0 = 0xbbb;
    local_4dc = 0xbbc;
    local_4d8 = 0xbbd;
    local_4d4 = 0xbbe;
    local_4d0 = 0xbbf;
    local_4cc = 0xbc0;
    local_4c8 = 0xbc1;
    local_4c4 = 0xbc2;
    local_4c0 = 0xbc3;
    local_4bc = 0xbc4;
    local_4b8 = 0xbc5;
    local_4b4 = 0xbc6;
    local_4b0 = 0xbc7;
    local_4ac = 0xbc8;
    local_4a8 = 0xbc9;
    local_4a4 = 0xbca;
    local_4a0 = 0xbcb;
    local_49c = 0xbcc;
    local_498 = 0xbcd;
    local_494 = 0xbce;
    local_490 = 0xbcf;
    local_48c = 0xbd0;
    local_488 = 0xbd1;
    uVar1 = allocator<>();
    puVar2 = (undefined4 *)FUN_00401880(&local_4e8,local_484);
    FUN_0051a0b0(*puVar2,puVar2[1],uVar1);
  }
  else if (param_2 == 0x16) {
    local_dd8 = 0xc81;
    local_dd4 = 0xc82;
    local_dd0 = 0xc83;
    local_dcc = 0xc84;
    local_dc8 = 0xc85;
    local_dc4 = 0xc86;
    local_dc0 = 0xc87;
    local_dbc = 0xc88;
    local_db8 = 0xc89;
    local_db4 = 0xc8a;
    local_db0 = 0xc8b;
    local_dac = 0xc8c;
    local_da8 = 0xc8d;
    local_da4 = 0xc8e;
    local_da0 = 0xc8f;
    local_d9c = 0xc90;
    local_d98 = 0xc91;
    local_d94 = 0xc92;
    local_d90 = 0xc93;
    local_d8c = 0xc94;
    local_d88 = 0xc95;
    local_d84 = 0xc96;
    local_d80 = 0xc97;
    local_d7c = 0xc98;
    local_d78 = 0xc99;
    local_d74 = 0xc9a;
    local_d70 = 0xc9b;
    local_d6c = 0xc9c;
    local_d68 = 0xc9d;
    local_d64 = 0xc9e;
    local_d60 = 0xc9f;
    local_d5c = 0xca0;
    local_d58 = 0xca1;
    local_d54 = 0xca2;
    local_d50 = 0xca3;
    local_d4c = 0xca4;
    local_d48 = 0xca5;
    local_d44 = 0xca6;
    local_d40 = 0xca7;
    local_d3c = 0xca8;
    local_d38 = 0xca9;
    local_d34 = 0xcaa;
    local_d30 = 0xcab;
    local_d2c = 0xcac;
    local_d28 = 0xcad;
    local_d24 = 0xcae;
    local_d20 = 0xcaf;
    local_d1c = 0xcb0;
    local_d18 = 0xcb1;
    local_d14 = 0xcb2;
    local_d10 = 0xcb3;
    local_d0c = 0xcb4;
    local_d08 = 0xcb5;
    local_d04 = 0xcb6;
    local_d00 = 0xcb7;
    uVar1 = allocator<>();
    puVar2 = (undefined4 *)FUN_00401880(&local_dd8,local_cfc);
    FUN_0051a0b0(*puVar2,puVar2[1],uVar1);
  }
  else if (param_2 == 0x17) {
    local_550 = 0xd49;
    local_54c = 0xd4a;
    local_548 = 0xd4b;
    local_544 = 0xd4c;
    local_540 = 0xd4d;
    local_53c = 0xd4e;
    local_538 = 0xd4f;
    local_534 = 0xd50;
    local_530 = 0xd51;
    local_52c = 0xd52;
    local_528 = 0xd53;
    local_524 = 0xd54;
    local_520 = 0xd55;
    local_51c = 0xd56;
    local_518 = 0xd57;
    local_514 = 0xd58;
    local_510 = 0xd59;
    local_50c = 0xd5a;
    local_508 = 0xd5b;
    local_504 = 0xd5c;
    local_500 = 0xd5d;
    local_4fc = 0xd5e;
    local_4f8 = 0xd5f;
    local_4f4 = 0xd60;
    local_4f0 = 0xd61;
    uVar1 = allocator<>();
    puVar2 = (undefined4 *)FUN_00401880(&local_550,local_4ec);
    FUN_0051a0b0(*puVar2,puVar2[1],uVar1);
  }
  else if (param_2 == 0x18) {
    local_b70 = 0xe11;
    local_b6c = 0xe12;
    local_b68 = 0xe13;
    local_b64 = 0xe14;
    local_b60 = 0xe15;
    local_b5c = 0xe16;
    local_b58 = 0xe17;
    local_b54 = 0xe18;
    local_b50 = 0xe19;
    local_b4c = 0xe1a;
    local_b48 = 0xe1b;
    local_b44 = 0xe1c;
    local_b40 = 0xe1d;
    local_b3c = 0xe1e;
    local_b38 = 0xe1f;
    local_b34 = 0xe20;
    local_b30 = 0xe21;
    local_b2c = 0xe22;
    local_b28 = 0xe23;
    local_b24 = 0xe24;
    local_b20 = 0xe25;
    local_b1c = 0xe26;
    local_b18 = 0xe27;
    local_b14 = 0xe28;
    local_b10 = 0xe29;
    local_b0c = 0xe2a;
    local_b08 = 0xe2b;
    local_b04 = 0xe2c;
    local_b00 = 0xe2d;
    local_afc = 0xe2e;
    local_af8 = 0xe2f;
    local_af4 = 0xe30;
    local_af0 = 0xe31;
    local_aec = 0xe32;
    local_ae8 = 0xe33;
    local_ae4 = 0xe34;
    local_ae0 = 0xe35;
    local_adc = 0xe36;
    local_ad8 = 0xe37;
    local_ad4 = 0xe38;
    local_ad0 = 0xe39;
    uVar1 = allocator<>();
    puVar2 = (undefined4 *)FUN_00401880(&local_b70,local_acc);
    FUN_0051a0b0(*puVar2,puVar2[1],uVar1);
  }
  else if (param_2 == 0x19) {
    local_20c = 0xed9;
    local_208 = 0xeda;
    local_204 = 0xedb;
    local_200 = 0xedc;
    local_1fc = 0xedd;
    local_1f8 = 0xede;
    local_1f4 = 0xedf;
    local_1f0 = 0xee0;
    local_1ec = 0xee1;
    local_1e8 = 0xee2;
    local_1e4 = 0xee3;
    local_1e0 = 0xee4;
    local_1dc = 0xee5;
    local_1d8 = 0xee6;
    local_1d4 = 0xee7;
    local_1d0 = 0xee8;
    local_1cc = 0xee9;
    local_1c8 = 0xeea;
    local_1c4 = 0xeeb;
    uVar1 = allocator<>();
    puVar2 = (undefined4 *)FUN_00401880(&local_20c,local_1c0);
    FUN_0051a0b0(*puVar2,puVar2[1],uVar1);
  }
  else if (param_2 == 0x1a) {
    local_980 = 0xfa1;
    local_97c = 0xfa2;
    local_978 = 0xfa3;
    local_974 = 0xfa4;
    local_970 = 0xfa5;
    local_96c = 0xfa6;
    local_968 = 0xfa7;
    local_964 = 0xfa8;
    local_960 = 0xfa9;
    local_95c = 0xfaa;
    local_958 = 0xfab;
    local_954 = 0xfac;
    local_950 = 0xfad;
    local_94c = 0xfae;
    local_948 = 0xfaf;
    local_944 = 0xfb0;
    local_940 = 0xfb1;
    local_93c = 0xfb2;
    local_938 = 0xfb3;
    local_934 = 0xfb4;
    local_930 = 0xfb5;
    local_92c = 0xfb6;
    local_928 = 0xfb7;
    local_924 = 0xfb8;
    local_920 = 0xfb9;
    local_91c = 0xfba;
    local_918 = 0xfbb;
    local_914 = 0xfbc;
    local_910 = 0xfbd;
    local_90c = 0xfbe;
    local_908 = 0xfbf;
    local_904 = 0xfc0;
    local_900 = 0xfc1;
    local_8fc = 0xfc2;
    local_8f8 = 0xfc3;
    local_8f4 = 0xfc4;
    local_8f0 = 0xfc5;
    local_8ec = 0xfc6;
    uVar1 = allocator<>();
    puVar2 = (undefined4 *)FUN_00401880(&local_980,local_8e8);
    FUN_0051a0b0(*puVar2,puVar2[1],uVar1);
  }
  else if (param_2 == 0x1b) {
    local_300 = 0x1771;
    local_2fc = 0x1772;
    local_2f8 = 0x1773;
    local_2f4 = 0x1774;
    local_2f0 = 0x1775;
    local_2ec = 0x1776;
    local_2e8 = 0x1777;
    local_2e4 = 0x1778;
    local_2e0 = 0x1779;
    local_2dc = 0x177a;
    local_2d8 = 0x177b;
    local_2d4 = 0x177c;
    local_2d0 = 0x177d;
    local_2cc = 0x177e;
    local_2c8 = 0x177f;
    local_2c4 = 0x1780;
    local_2c0 = 0x1781;
    local_2bc = 0x1782;
    local_2b8 = 0x1783;
    local_2b4 = 0x1784;
    uVar1 = allocator<>();
    puVar2 = (undefined4 *)FUN_00401880(&local_300,local_2b0);
    FUN_0051a0b0(*puVar2,puVar2[1],uVar1);
  }
  else if (param_2 == 0x1f) {
    local_848 = 0x1069;
    local_844 = 0x106a;
    local_840 = 0x106b;
    local_83c = 0x106c;
    local_838 = 0x106d;
    local_834 = 0x106e;
    local_830 = 0x106f;
    local_82c = 0x1070;
    local_828 = 0x1071;
    local_824 = 0x1072;
    local_820 = 0x1073;
    local_81c = 0x1074;
    local_818 = 0x1075;
    local_814 = 0x1076;
    local_810 = 0x1077;
    local_80c = 0x1078;
    local_808 = 0x1079;
    local_804 = 0x107a;
    local_800 = 0x107b;
    local_7fc = 0x107c;
    local_7f8 = 0x107d;
    local_7f4 = 0x107e;
    local_7f0 = 0x107f;
    local_7ec = 0x1080;
    local_7e8 = 0x1081;
    local_7e4 = 0x1082;
    local_7e0 = 0x1083;
    local_7dc = 0x1084;
    local_7d8 = 0x1085;
    local_7d4 = 0x1086;
    local_7d0 = 0x1087;
    local_7cc = 0x1088;
    local_7c8 = 0x1089;
    local_7c4 = 0x108a;
    local_7c0 = 0x108b;
    local_7bc = 0x108c;
    uVar1 = allocator<>();
    puVar2 = (undefined4 *)FUN_00401880(&local_848,local_7b8);
    FUN_0051a0b0(*puVar2,puVar2[1],uVar1);
  }
  else if (param_2 == 0x20) {
    local_3b8 = 0x1131;
    local_3b4 = 0x1132;
    local_3b0 = 0x1133;
    local_3ac = 0x1134;
    local_3a8 = 0x1135;
    local_3a4 = 0x1136;
    local_3a0 = 0x1137;
    local_39c = 0x1138;
    local_398 = 0x1139;
    local_394 = 0x113a;
    local_390 = 0x113b;
    local_38c = 0x113c;
    local_388 = 0x113d;
    local_384 = 0x113e;
    local_380 = 0x113f;
    local_37c = 0x1140;
    local_378 = 0x1141;
    local_374 = 0x1142;
    local_370 = 0x1143;
    local_36c = 0x1144;
    local_368 = 0x1145;
    local_364 = 0x1146;
    uVar1 = allocator<>();
    puVar2 = (undefined4 *)FUN_00401880(&local_3b8,local_360);
    FUN_0051a0b0(*puVar2,puVar2[1],uVar1);
  }
  else if (param_2 == 0x21) {
    local_34 = 0x12c1;
    local_30 = 0x12c2;
    local_2c = 0x12c3;
    local_28 = 0x12c4;
    local_24 = 0x12c5;
    local_20 = 0x12c6;
    uVar1 = allocator<>();
    puVar2 = (undefined4 *)FUN_00401880(&local_34,local_1c);
    FUN_0051a0b0(*puVar2,puVar2[1],uVar1);
  }
  else if (param_2 == 0x22) {
    local_fc = 0x1389;
    local_f8 = 0x138a;
    local_f4 = 0x138b;
    local_f0 = 0x138c;
    local_ec = 0x138d;
    local_e8 = 0x138e;
    local_e4 = 0x138f;
    local_e0 = 0x1390;
    local_dc = 0x1391;
    local_d8 = 0x1392;
    local_d4 = 0x1393;
    local_d0 = 0x1394;
    local_cc = 0x1395;
    uVar1 = allocator<>();
    puVar2 = (undefined4 *)FUN_00401880(&local_fc,local_c8);
    FUN_0051a0b0(*puVar2,puVar2[1],uVar1);
  }
  else if (param_2 == 0x23) {
    local_41c = 0x1519;
    local_418 = 0x151a;
    local_414 = 0x151b;
    local_410 = 0x151c;
    local_40c = 0x151d;
    local_408 = 0x151e;
    local_404 = 0x151f;
    local_400 = 0x1520;
    local_3fc = 0x1521;
    local_3f8 = 0x1522;
    local_3f4 = 0x1523;
    local_3f0 = 0x1524;
    local_3ec = 0x1525;
    local_3e8 = 0x1526;
    local_3e4 = 0x1527;
    local_3e0 = 0x1528;
    local_3dc = 0x1529;
    local_3d8 = 0x152a;
    local_3d4 = 0x152b;
    local_3d0 = 0x152c;
    local_3cc = 0x152d;
    local_3c8 = 0x152e;
    local_3c4 = 0x152f;
    local_3c0 = 0x1530;
    uVar1 = allocator<>();
    puVar2 = (undefined4 *)FUN_00401880(&local_41c,local_3bc);
    FUN_0051a0b0(*puVar2,puVar2[1],uVar1);
  }
  else if (param_2 == 0x24) {
    local_178 = 0x19c9;
    local_174 = 0x19ca;
    local_170 = 0x19cb;
    local_16c = 0x19cc;
    local_168 = 0x19cd;
    local_164 = 0x19ce;
    local_160 = 0x19cf;
    local_15c = 0x19d0;
    local_158 = 0x19d1;
    local_154 = 0x19d2;
    local_150 = 0x19d3;
    local_14c = 0x19d4;
    local_148 = 0x19d5;
    local_144 = 0x19d6;
    local_140 = 0x19d7;
    uVar1 = allocator<>();
    puVar2 = (undefined4 *)FUN_00401880(&local_178,local_13c);
    FUN_0051a0b0(*puVar2,puVar2[1],uVar1);
  }
  else if (param_2 == 0x28) {
    local_c4 = 0x15e1;
    local_c0 = 0x15e2;
    local_bc = 0x15e3;
    local_b8 = 0x15e4;
    local_b4 = 0x15e5;
    local_b0 = 0x15e6;
    local_ac = 0x15e7;
    local_a8 = 0x15e8;
    local_a4 = 0x15e9;
    local_a0 = 0x15ea;
    local_9c = 0x15eb;
    uVar1 = allocator<>();
    puVar2 = (undefined4 *)FUN_00401880(&local_c4,local_98);
    FUN_0051a0b0(*puVar2,puVar2[1],uVar1);
  }
  else if (param_2 == 0x29) {
    local_18 = 0x16a9;
    local_14 = 0x16aa;
    local_10 = 0x16ab;
    uVar1 = allocator<>();
    puVar2 = (undefined4 *)FUN_00401880(&local_18,local_c);
    FUN_0051a0b0(*puVar2,puVar2[1],uVar1);
  }
  else if (param_2 == 0x32) {
    local_138 = 0x1839;
    local_134 = 0x183a;
    local_130 = 0x183b;
    local_12c = 0x183c;
    local_128 = 0x183d;
    local_124 = 0x183e;
    local_120 = 0x183f;
    local_11c = 0x1840;
    local_118 = 0x1841;
    local_114 = 0x1842;
    local_110 = 0x1843;
    local_10c = 0x1844;
    local_108 = 0x1845;
    local_104 = 0x184c;
    uVar1 = allocator<>();
    puVar2 = (undefined4 *)FUN_00401880(&local_138,local_100);
    FUN_0051a0b0(*puVar2,puVar2[1],uVar1);
  }
  else if (param_2 == 0x33) {
    local_35c = 0x1901;
    local_358 = 0x1902;
    local_354 = 0x1903;
    local_350 = 0x1904;
    local_34c = 0x1905;
    local_348 = 0x1906;
    local_344 = 0x1907;
    local_340 = 0x1908;
    local_33c = 0x1909;
    local_338 = 0x190a;
    local_334 = 0x190b;
    local_330 = 0x190c;
    local_32c = 0x190d;
    local_328 = 0x190e;
    local_324 = 0x190f;
    local_320 = 0x1910;
    local_31c = 0x1911;
    local_318 = 0x1912;
    local_314 = 0x1914;
    local_310 = 0x1916;
    local_30c = 0x1917;
    local_308 = 0x1918;
    uVar1 = allocator<>();
    puVar2 = (undefined4 *)FUN_00401880(&local_35c,local_304);
    FUN_0051a0b0(*puVar2,puVar2[1],uVar1);
  }
  else if (param_2 == 1000) {
    local_5c0 = 0xaf1;
    local_5bc = 0xaf2;
    local_5b8 = 0xaf3;
    local_5b4 = 0xaf4;
    local_5b0 = 0xaf5;
    local_5ac = 0xaf6;
    local_5a8 = 0xaf7;
    local_5a4 = 0xaf8;
    local_5a0 = 0xaf9;
    local_59c = 0xafa;
    local_598 = 0xafb;
    local_594 = 0xafc;
    local_590 = 0xafd;
    local_58c = 0xafe;
    local_588 = 0xaff;
    local_584 = 0xb00;
    local_580 = 0xb01;
    local_57c = 0xb02;
    local_578 = 0xb03;
    local_574 = 0xb04;
    local_570 = 0xb05;
    local_56c = 0xb06;
    local_568 = 0xb07;
    local_564 = 0xb08;
    local_560 = 0xb09;
    local_55c = 0xb0a;
    local_558 = 0xb0b;
    uVar1 = allocator<>();
    puVar2 = (undefined4 *)FUN_00401880(&local_5c0,local_554);
    FUN_0051a0b0(*puVar2,puVar2[1],uVar1);
  }
  else if (param_2 == 0x5dc) {
    local_6c = 0x1451;
    local_68 = 0x1452;
    local_64 = 0x1453;
    local_60 = 0x1454;
    local_5c = 0x1455;
    local_58 = 0x1456;
    uVar1 = allocator<>();
    puVar2 = (undefined4 *)FUN_00401880(&local_6c,local_54);
    FUN_0051a0b0(*puVar2,puVar2[1],uVar1);
  }
  else if (param_2 == 0x5dd) {
    local_50 = 0x1a91;
    local_4c = 0x1a92;
    local_48 = 0x1a93;
    local_44 = 0x1a94;
    local_40 = 0x1a95;
    local_3c = 0x1a96;
    uVar1 = allocator<>();
    puVar2 = (undefined4 *)FUN_00401880(&local_50,local_38);
    FUN_0051a0b0(*puVar2,puVar2[1],uVar1);
  }
  else {
    FUN_0040d650();
  }
  return param_1;
}


/* ==== 004d9010  FUN_004d9010  size=7975 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_004d9010(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar8;
  char *pcVar9;
  undefined4 *puVar10;
  uint *puVar11;
  bool bVar12;
  undefined1 local_2ec [24];
  undefined4 local_2d4;
  undefined4 local_2d0;
  int local_2cc;
  uint local_2c8;
  int local_2c4;
  int local_2c0;
  int local_2bc;
  int local_2b8;
  undefined4 local_2b4;
  undefined4 local_2b0;
  uint local_2ac;
  int local_2a8;
  int local_2a4;
  int local_2a0;
  uint local_29c;
  undefined4 local_298;
  undefined4 local_294;
  undefined4 local_290;
  undefined4 local_28c;
  int local_288;
  undefined4 local_284;
  int local_274;
  undefined4 local_270;
  int local_26c;
  undefined4 local_268;
  uint local_260;
  uint local_25c;
  undefined4 local_258;
  undefined4 local_254;
  uint local_24c;
  uint local_248;
  undefined4 local_244;
  undefined4 local_240;
  int local_238;
  int local_234;
  int local_230;
  undefined4 local_22c;
  int local_224;
  int *local_220;
  int *local_21c;
  undefined4 *local_218;
  undefined4 local_214;
  undefined1 *local_210;
  undefined4 local_20c;
  undefined1 *local_208;
  undefined1 *local_204;
  int local_200;
  undefined4 local_1fc;
  uint local_1f8;
  int local_1f4;
  uint local_1f0;
  int local_1ec;
  undefined4 local_1e8;
  uint local_1e4;
  int local_1e0;
  int local_1dc;
  undefined1 *local_1d8;
  int local_1d4;
  int local_1d0;
  int local_1cc;
  byte *local_1b8;
  undefined4 *local_1b4;
  undefined4 *local_1b0;
  undefined4 *local_1ac;
  int local_1a8;
  int local_1a4;
  uint local_1a0;
  byte *local_19c;
  int local_198;
  int local_194;
  int local_190;
  int local_18c;
  int local_188;
  int local_184;
  int local_180;
  uint local_17c;
  int local_178;
  int local_174;
  uint local_170;
  uint local_16c;
  uint local_168;
  uint local_164;
  uint local_160;
  uint local_15c;
  uint local_158;
  int local_154;
  int local_150;
  uint local_14c;
  byte local_148;
  byte local_147;
  char local_146;
  undefined1 local_145;
  int local_144;
  int local_140;
  char local_13b;
  char local_13a;
  undefined1 local_139;
  int *local_138;
  function<void___cdecl(void)> local_134 [24];
  function<void___cdecl(void)> local_11c [24];
  function<void___cdecl(void)> local_104 [24];
  function<void___cdecl(void)> local_ec [24];
  function<void___cdecl(void)> local_d4 [24];
  function<void___cdecl(void)> local_bc [24];
  function<void___cdecl(void)> local_a4 [24];
  function<void___cdecl(void)> local_8c [24];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_74 [24];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_5c [24];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_44 [24];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_2c [24];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00715dbb;
  local_10 = ExceptionList;
  local_14 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_004d0c70();
  local_139 = param_2 != 0;
  *(undefined1 *)(local_138 + 0x11) = local_139;
  local_1d0 = game_get_player_or_session_blob();
  local_1d0 = local_1d0 + 0xc40;
  local_188 = game_loop_helper_018d0();
  local_2cc = game_loop_helper_018b0();
  for (; local_188 != local_2cc; local_188 = local_188 + 0x94) {
    local_1d4 = local_188;
    if (0 < *(int *)(local_188 + 4)) {
      local_174 = FUN_005d83e0();
      cVar3 = FUN_00427c60();
      if ((cVar3 != '\0') && (iVar4 = FUN_0044de50(), iVar4 != 0)) {
        piVar5 = (int *)FUN_0044de30();
        iVar4 = game_get_player_or_session_blob();
        if (*piVar5 == *(int *)(iVar4 + 0xdcc)) {
          iVar4 = FUN_0044de30();
          iVar6 = game_get_player_or_session_blob();
          if ((*(int *)(iVar4 + 4) <= *(int *)(iVar6 + 0xdd0)) && (*(int *)(local_174 + 0xe8) == 0))
          {
            *(undefined1 *)(local_138 + 0x50) = 1;
            local_138[0x4f] = 0;
          }
        }
      }
    }
  }
  FUN_004a1760();
  local_138[0x5b] = param_1;
  iVar4 = game_get_player_or_session_blob();
  local_138[0x5c] = *(int *)(iVar4 + 0xdd0);
  local_138[0x6e] = 5;
  iVar4 = FUN_005e4170();
  *local_138 = iVar4;
  if (*local_138 == 0) {
    ExceptionList = local_10;
    return;
  }
  FUN_00641430();
  FUN_00519240();
  local_144 = FUN_00519220();
  npk_get_relative_res_path();
  FUN_004cb3e0();
  local_145 = 0;
  allocator<>();
  local_2d4 = FUN_00401a00();
  local_8 = 0;
  local_2d0 = local_2d4;
  allocator<>();
  FUN_00401830();
  local_8 = CONCAT31(local_8._1_3_,2);
  FUN_004019e0();
  local_14c = 0;
  while (uVar7 = FUN_004274f0(), local_14c < uVar7) {
    local_160 = 0;
    while( true ) {
      FUN_004274d0();
      uVar7 = FUN_00410b30();
      if (uVar7 <= local_160) break;
      uVar7 = local_160;
      pbVar8 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)FUN_004274d0();
      pcVar9 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator[]
                         (pbVar8,uVar7);
      if (*pcVar9 == 'A') {
        uVar7 = local_160 + 1;
        pbVar8 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)FUN_004274d0();
        pcVar9 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator[]
                           (pbVar8,uVar7);
        if (*pcVar9 == 'A') {
          FUN_004017f0();
          FUN_004019a0();
          FUN_00401790();
        }
      }
      local_160 = local_160 + 2;
    }
    local_14c = local_14c + 1;
  }
  FUN_00518ba0();
  FUN_004d5cc0();
  local_8._0_1_ = 3;
  FUN_00518470();
  local_8._0_1_ = 4;
  FUN_0040d650();
  local_8 = CONCAT31(local_8._1_3_,5);
  local_1d8 = local_2ec;
  local_18c = game_loop_helper_018d0();
  iVar4 = game_loop_helper_018b0();
  for (; local_18c != iVar4; local_18c = local_18c + 4) {
    local_1e0 = local_18c;
    local_1dc = FUN_005bcf10();
    cVar3 = FUN_00427c60();
    if ((cVar3 != '\0') && (*(int *)(local_1dc + 0x9c) != 0)) {
      FUN_0040d490();
    }
  }
  do {
    FUN_00451db0();
    uVar7 = FUN_00641430();
    local_1e4 = FUN_004a61d0();
    local_1e4 = uVar7 % local_1e4;
    piVar5 = (int *)FUN_00427540();
    local_238 = *piVar5;
    iVar4 = FUN_00427540();
    local_234 = *(int *)(iVar4 + 4);
    FUN_00641430();
    FUN_00401a90();
    piVar5 = (int *)game_get_flag_object_01a70();
    local_178 = *piVar5;
    local_1e8 = FUN_005bcf10();
    FUN_004bcf80();
    local_8._0_1_ = 6;
    pcVar9 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator[]
                       (local_74,0);
    cVar3 = *pcVar9;
    uVar7 = local_238 << 1;
    pbVar8 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)FUN_004274d0();
    pcVar9 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator[]
                       (pbVar8,uVar7);
    if (cVar3 == *pcVar9) {
      pcVar9 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator[]
                         (local_74,1);
      cVar3 = *pcVar9;
      uVar7 = local_238 * 2 + 1;
      pbVar8 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)FUN_004274d0();
      pcVar9 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator[]
                         (pbVar8,uVar7);
      if (cVar3 == *pcVar9) break;
    }
    local_8 = CONCAT31(local_8._1_3_,5);
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>
              ((function<void___cdecl(void)> *)local_74);
  } while( true );
  local_230 = local_178;
  FUN_004bcf80();
  local_8._0_1_ = 7;
  local_22c = FUN_004d10b0();
  local_8._0_1_ = 6;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_134);
  FUN_00519d30();
  FUN_004017f0();
  FUN_004019a0();
  FUN_00401790();
  local_138[0x5e] = local_178;
  local_138[0x5f] = local_178;
  local_138[0x60] = local_238;
  local_138[0x61] = local_234;
  FUN_0051bb60();
  local_8._0_1_ = 5;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)local_74);
  local_8._0_1_ = 4;
  FUN_00401ac0();
  FUN_0040d650();
  local_8 = CONCAT31(local_8._1_3_,8);
  local_204 = local_2ec;
  local_190 = game_loop_helper_018d0();
  iVar4 = game_loop_helper_018b0();
  for (; local_190 != iVar4; local_190 = local_190 + 4) {
    local_1ec = local_190;
    FUN_005bcf10();
    cVar3 = FUN_00427c60();
    if (cVar3 != '\0') {
      FUN_0040d490();
    }
  }
  do {
    FUN_00451db0();
    uVar7 = FUN_00641430();
    local_1f8 = FUN_004a61d0();
    local_1f8 = uVar7 % local_1f8;
    piVar5 = (int *)FUN_00427540();
    local_274 = *piVar5;
    iVar4 = FUN_00427540();
    local_270 = *(undefined4 *)(iVar4 + 4);
    FUN_00641430();
    FUN_00401a90();
    piVar5 = (int *)game_get_flag_object_01a70();
    local_194 = *piVar5;
    local_1fc = FUN_005bcf10();
    FUN_004bcf80();
    local_8._0_1_ = 9;
    pcVar9 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator[]
                       (local_5c,0);
    cVar3 = *pcVar9;
    uVar7 = local_274 << 1;
    pbVar8 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)FUN_004274d0();
    pcVar9 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator[]
                       (pbVar8,uVar7);
    if (cVar3 == *pcVar9) {
      pcVar9 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator[]
                         (local_5c,1);
      cVar3 = *pcVar9;
      uVar7 = local_274 * 2 + 1;
      pbVar8 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)FUN_004274d0();
      pcVar9 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator[]
                         (pbVar8,uVar7);
      if (cVar3 == *pcVar9) break;
    }
    local_8 = CONCAT31(local_8._1_3_,8);
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>
              ((function<void___cdecl(void)> *)local_5c);
  } while( true );
  local_26c = local_194;
  FUN_004bcf80();
  local_8._0_1_ = 10;
  local_268 = FUN_004d10b0();
  local_8._0_1_ = 9;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_11c);
  FUN_00519d30();
  FUN_004017f0();
  FUN_004019a0();
  FUN_00401790();
  FUN_0051bb60();
  local_138[0x5d] = local_194;
  local_8._0_1_ = 8;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)local_5c);
  local_8 = CONCAT31(local_8._1_3_,4);
  FUN_00401ac0();
  local_200 = local_144 + 0x20;
  local_198 = game_loop_helper_018d0();
  iVar4 = game_loop_helper_018b0();
  for (; local_198 != iVar4; local_198 = local_198 + 0xc) {
    local_150 = local_198;
    game_get_flag_object_01a70();
    game_get_flag_object_01a70();
    FUN_004017f0();
    FUN_004019a0();
    cVar3 = FUN_00401750();
    if (cVar3 == '\0') {
      FUN_0040d650();
      local_8._0_1_ = 0xb;
      local_17c = 2;
      while (uVar7 = FUN_00401a90(), local_17c < uVar7) {
        FUN_005184c0();
        game_get_flag_object_01a70();
        FUN_00518490();
        cVar3 = FUN_0040d970();
        if (cVar3 != '\0') {
          game_get_flag_object_01a70();
          FUN_0040d490();
        }
        local_17c = local_17c + 1;
      }
      cVar3 = game_frame_should_continue();
      if (cVar3 == '\0') {
        FUN_00451db0();
        game_get_flag_object_01a70();
        game_get_flag_object_01a70();
        FUN_00641430();
        FUN_00401a90();
        game_get_flag_object_01a70();
        FUN_005bcf10();
        FUN_004bcf80();
        local_8._0_1_ = 0xc;
        FUN_004d10b0();
        local_8._0_1_ = 0xb;
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_ec);
        FUN_00519d30();
        FUN_004017f0();
        FUN_004019a0();
        FUN_00401790();
        FUN_0051bb60();
        local_8 = CONCAT31(local_8._1_3_,4);
        FUN_00401ac0();
      }
      else {
        local_8 = CONCAT31(local_8._1_3_,4);
        FUN_00401ac0();
      }
    }
  }
  local_164 = 0;
  while (uVar7 = FUN_00518260(), local_164 < uVar7) {
    local_16c = 0;
    while( true ) {
      FUN_004017f0();
      uVar7 = FUN_0040d3a0();
      if (uVar7 <= local_16c) break;
      FUN_004017f0();
      FUN_004019a0();
      cVar3 = FUN_00401750();
      if (cVar3 == '\0') {
        FUN_00451db0();
        local_248 = local_164;
        local_24c = local_16c;
        local_208 = local_2ec;
        local_1b4 = (undefined4 *)game_loop_helper_018d0();
        puVar10 = (undefined4 *)game_loop_helper_018b0();
        for (; local_1b4 != puVar10; local_1b4 = local_1b4 + 1) {
          local_1b0 = local_1b4;
          FUN_005184c0();
          FUN_00518490();
          cVar3 = FUN_0040d2d0();
          if (cVar3 == '\0') {
            local_20c = FUN_005bcf10();
            local_13a = '\0';
            cVar3 = FUN_00427c60();
            if (cVar3 != '\0') {
              FUN_004bcf80();
              local_8._0_1_ = 0xd;
              pcVar9 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                       operator[](local_44,0);
              cVar3 = *pcVar9;
              uVar7 = local_24c << 1;
              pbVar8 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       FUN_004274d0();
              pcVar9 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                       operator[](pbVar8,uVar7);
              if (cVar3 == *pcVar9) {
                pcVar9 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                         operator[](local_44,1);
                cVar3 = *pcVar9;
                uVar7 = local_24c * 2 + 1;
                pbVar8 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         FUN_004274d0();
                pcVar9 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                         operator[](pbVar8,uVar7);
                if (cVar3 == *pcVar9) {
                  local_244 = *local_1b0;
                  FUN_005bcf10();
                  FUN_004bcf80();
                  local_8._0_1_ = 0xe;
                  local_240 = FUN_004d10b0();
                  local_8._0_1_ = 0xd;
                  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_d4);
                  local_13a = '\x01';
                  local_8 = CONCAT31(local_8._1_3_,4);
                  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                            ((function<void___cdecl(void)> *)local_44);
                  if (local_13a == '\0') {
                    MessageBoxA((HWND)0x0,&DAT_007502ec,(LPCSTR)0x0,0);
                    goto LAB_004d9f20;
                  }
                  FUN_00519d30();
                  FUN_004017f0();
                  FUN_004019a0();
                  FUN_00401790();
                  FUN_0051bb60();
                  break;
                }
              }
              local_8 = CONCAT31(local_8._1_3_,4);
              std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                        ((function<void___cdecl(void)> *)local_44);
            }
          }
LAB_004d9f20:
        }
      }
      local_16c = local_16c + 1;
    }
    local_164 = local_164 + 1;
  }
  local_168 = 0;
  while (uVar7 = FUN_00518260(), local_168 < uVar7) {
    local_170 = 0;
    while( true ) {
      FUN_004017f0();
      uVar7 = FUN_0040d3a0();
      if (uVar7 <= local_170) break;
      FUN_004017f0();
      FUN_004019a0();
      cVar3 = FUN_00401750();
      if (cVar3 == '\0') {
        FUN_00451db0();
        local_25c = local_168;
        local_260 = local_170;
        local_210 = local_2ec;
        local_1ac = (undefined4 *)game_loop_helper_018d0();
        puVar10 = (undefined4 *)game_loop_helper_018b0();
        for (; local_1ac != puVar10; local_1ac = local_1ac + 1) {
          local_218 = local_1ac;
          local_214 = FUN_005bcf10();
          local_13b = '\0';
          cVar3 = FUN_00427c60();
          if (cVar3 != '\0') {
            FUN_004bcf80();
            local_8._0_1_ = 0xf;
            pcVar9 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                     operator[](local_2c,0);
            cVar3 = *pcVar9;
            uVar7 = local_260 << 1;
            pbVar8 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     FUN_004274d0();
            pcVar9 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                     operator[](pbVar8,uVar7);
            if (cVar3 == *pcVar9) {
              pcVar9 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                       operator[](local_2c,1);
              cVar3 = *pcVar9;
              uVar7 = local_260 * 2 + 1;
              pbVar8 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       FUN_004274d0();
              pcVar9 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                       operator[](pbVar8,uVar7);
              if (cVar3 == *pcVar9) {
                local_258 = *local_218;
                FUN_005bcf10();
                local_284 = FUN_004bcf80();
                local_8._0_1_ = 0x10;
                local_254 = FUN_004d10b0();
                local_8._0_1_ = 0xf;
                std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_bc);
                local_13b = '\x01';
                local_8 = CONCAT31(local_8._1_3_,4);
                std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                          ((function<void___cdecl(void)> *)local_2c);
                if (local_13b == '\0') {
                  MessageBoxA((HWND)0x0,&DAT_007502d4,(LPCSTR)0x0,0);
                  goto LAB_004da2c9;
                }
                FUN_00519d30();
                FUN_004017f0();
                FUN_004019a0();
                FUN_00401790();
                break;
              }
            }
            local_8 = CONCAT31(local_8._1_3_,4);
            std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                      ((function<void___cdecl(void)> *)local_2c);
          }
LAB_004da2c9:
        }
      }
      local_170 = local_170 + 1;
    }
    local_168 = local_168 + 1;
  }
  if (local_138[0x5b] == 0x23) {
    FUN_00519ff0();
    FUN_00489bc0();
    local_8 = CONCAT31(local_8._1_3_,0x11);
    local_21c = local_138 + 0x75;
    local_1a8 = game_loop_helper_018d0();
    local_288 = game_loop_helper_018b0();
    for (; local_1a8 != local_288; local_1a8 = local_1a8 + 0x14) {
      local_1cc = local_1a8;
      if ((*(int *)(local_1a8 + 8) != local_138[0x5e]) &&
         (*(int *)(local_1a8 + 8) != local_138[0x5d])) {
        FUN_00519d30();
      }
    }
    for (local_154 = 0; local_154 < 4; local_154 = local_154 + 1) {
      FUN_00641430();
      FUN_00519d00();
      puVar10 = (undefined4 *)FUN_00519ce0();
      uVar1 = *puVar10;
      uVar2 = puVar10[1];
      puVar10 = (undefined4 *)FUN_0044de30();
      *puVar10 = uVar1;
      iVar4 = FUN_0044de30();
      *(undefined4 *)(iVar4 + 4) = uVar2;
      iVar6 = local_154 + 0xc399;
      iVar4 = FUN_0044de30();
      *(int *)(iVar4 + 8) = iVar6;
    }
    local_8 = CONCAT31(local_8._1_3_,4);
    FUN_0048ab20();
  }
  if ((char)local_138[0x11] != '\0') {
    local_140 = 0;
    if ((local_138[0x5b] < 0xb) || (0x11 < local_138[0x5b])) {
      if ((local_138[0x5b] < 0x15) || (0x1a < local_138[0x5b])) {
        if (local_138[0x5b] == 0x1f) {
          local_140 = 0xea6e;
        }
        else if (local_138[0x5b] == 0x20) {
          local_140 = 0xea6f;
        }
        else if (local_138[0x5b] == 0x23) {
          local_140 = 0xea70;
        }
        else if (local_138[0x5b] == 0x22) {
          local_140 = 0xea71;
        }
        else if (local_138[0x5b] == 0x32) {
          local_140 = 0xea72;
        }
        else if (local_138[0x5b] == 0x33) {
          local_140 = 0xea73;
        }
        else if (local_138[0x5b] == 0x24) {
          local_140 = 0xea74;
        }
      }
      else {
        local_140 = local_138[0x5b] + 0xea53;
      }
    }
    else {
      local_140 = local_138[0x5b] + 0xea56;
    }
    FUN_0040d650();
    local_8._0_1_ = 0x12;
    local_158 = 0;
    while (uVar7 = FUN_00519d00(), local_158 < uVar7) {
      iVar4 = FUN_00519ce0();
      if ((*(int *)(iVar4 + 8) != local_138[0x5e]) &&
         (iVar4 = FUN_00519ce0(), *(int *)(iVar4 + 8) != local_138[0x5d])) {
        FUN_00519ce0();
        local_290 = FUN_005bcf10();
        FUN_005bcf10();
        local_294 = FUN_004bcf80();
        local_8._0_1_ = 0x13;
        local_28c = local_294;
        local_298 = FUN_004bcf80();
        local_146 = destroy<>();
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_104);
        local_8._0_1_ = 0x12;
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_a4);
        if (local_146 != '\0') {
          FUN_0040d490();
        }
      }
      local_158 = local_158 + 1;
    }
    cVar3 = game_frame_should_continue();
    if (cVar3 == '\0') {
      FUN_00641430();
      FUN_00401a90();
      puVar11 = (uint *)game_get_flag_object_01a70();
      local_29c = *puVar11;
      local_15c = 0;
      while (uVar7 = FUN_00519d00(), local_15c < uVar7) {
        if (local_15c == local_29c) {
          piVar5 = (int *)FUN_00519ce0();
          local_138[0x15] = *piVar5;
          iVar4 = FUN_00519ce0();
          local_138[0x16] = *(int *)(iVar4 + 4);
          iVar4 = FUN_00519ce0();
          *(int *)(iVar4 + 8) = local_140;
          break;
        }
        local_15c = local_15c + 1;
      }
    }
    local_8 = CONCAT31(local_8._1_3_,4);
    FUN_00401ac0();
  }
  local_138[0x19] = 0;
  local_220 = local_138 + 0x75;
  local_1a4 = game_loop_helper_018d0();
  local_2a0 = game_loop_helper_018b0();
  do {
    if (local_1a4 == local_2a0) {
      if (local_138[0x5b] == 0x33) {
        local_138[0x19] = local_138[0x19] + 2;
      }
      local_2b0 = 0x2a8;
      game_timing_or_delay_helper();
      ui_close_matching_widgets();
      local_2b4 = 0x2a8;
      game_timing_or_delay_helper();
      FUN_004054a0();
      local_8._0_1_ = 0x14;
      FUN_004054a0();
      local_8._0_1_ = 0x15;
      FUN_004054a0(&DAT_00750310);
      local_8._0_1_ = 4;
      local_2b8 = FUN_00661cc0(0,2);
      local_184 = local_2b8;
      iVar4 = FUN_0040d680();
      *(undefined1 *)(iVar4 + 0x20) = *(undefined1 *)(local_184 + 0x8c8);
      *(undefined4 *)(local_184 + 0x984) = 0xf0a;
      FUN_004053a0();
      FUN_004054a0();
      local_8._0_1_ = 0x16;
      FUN_0040e2f0();
      local_8 = CONCAT31(local_8._1_3_,4);
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_8c);
      FUN_0040d380();
      cVar3 = FUN_0040d2d0();
      if (cVar3 != '\0') {
        local_1f4 = FUN_0044de10();
        local_1f4 = local_1f4 + 0x18;
        local_180 = game_loop_helper_018d0();
        local_2bc = game_loop_helper_018b0();
        for (; local_180 != local_2bc; local_180 = local_180 + 0x28) {
          local_2c0 = local_180;
          FUN_004b55a0();
        }
        FUN_0044de10();
        FUN_0040d5f0();
        FUN_004cdeb0();
      }
      FUN_004274d0();
      local_2c8 = FUN_00410b30();
      local_2c8 = local_2c8 >> 1;
      local_2c4 = FUN_004274f0();
      local_2c4 = local_2c4 + 1;
      FUN_004054a0();
      d3d9_create_texture_004b7450();
      local_8._0_1_ = 3;
      FUN_004daf40();
      local_8 = CONCAT31(local_8._1_3_,2);
      FUN_00401ac0();
      local_8 = 0xffffffff;
      FUN_00401810();
      ExceptionList = local_10;
      return;
    }
    local_2a4 = local_1a4;
    local_2a8 = FUN_005bcf10();
    local_224 = local_2a8 + 0x3c;
    local_1a0 = 0;
    while (uVar7 = FUN_005194c0(), local_1a0 < uVar7) {
      local_1b8 = &DAT_00750318;
      iVar4 = FUN_00519490();
      local_19c = (byte *)(iVar4 + 0x38);
      do {
        local_147 = *local_19c;
        bVar12 = local_147 < *local_1b8;
        if (local_147 != *local_1b8) {
LAB_004dac07:
          local_1f0 = -(uint)bVar12 | 1;
          goto LAB_004dac12;
        }
        if (local_147 == 0) break;
        local_148 = local_19c[1];
        bVar12 = local_148 < local_1b8[1];
        if (local_148 != local_1b8[1]) goto LAB_004dac07;
        local_19c = local_19c + 2;
        local_1b8 = local_1b8 + 2;
      } while (local_148 != 0);
      local_1f0 = 0;
LAB_004dac12:
      local_2ac = local_1f0;
      if (local_1f0 == 0) {
        local_138[0x19] = local_138[0x19] + 1;
      }
      local_1a0 = local_1a0 + 1;
    }
    local_1a4 = local_1a4 + 0x14;
  } while( true );
}


/* ==== 004daf40  FUN_004daf40  size=20 ==== */

void FUN_004daf40(void)

{
  FUN_005184f0();
  return;
}


/* ==== 004daf60  FUN_004daf60  size=3467 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_004daf60(void)

{
  char cVar1;
  byte bVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  int in_ECX;
  bool bVar6;
  uint local_978;
  uint local_974;
  uint local_96c;
  uint local_968;
  char *local_964;
  char *local_960;
  char *local_95c;
  char *local_958;
  byte *local_954;
  byte *local_950;
  char *local_94c;
  byte *local_948;
  byte *local_944;
  char *local_940;
  byte *local_93c;
  byte *local_938;
  char *local_934;
  byte *local_930;
  byte *local_92c;
  char *local_928;
  int local_924;
  char *local_920;
  uint local_91c;
  char *local_918;
  uint local_914;
  char *local_910;
  uint local_90c;
  uint local_908;
  char *local_904;
  undefined1 local_8e4 [1232];
  char local_414 [256];
  char local_314 [256];
  char local_214 [256];
  char local_114 [256];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00715e29;
  local_10 = ExceptionList;
  local_14 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  for (local_924 = in_ECX + 0x20c; local_924 != in_ECX + 0x9cc; local_924 = local_924 + 0x1f0) {
    FUN_004051f0();
  }
  game_get_state_ptr_d1520();
  FUN_005e53f0();
  FUN_00405520();
  iVar4 = FUN_005b75d0();
  FUN_004dbcf0();
  *(undefined4 *)(in_ECX + 0x20c) = *(undefined4 *)(iVar4 + 0xe8);
  *(undefined4 *)(in_ECX + 0x210) = *(undefined4 *)(iVar4 + 0xec);
  FUN_004053a0();
  local_91c = 0;
  do {
    uVar5 = FUN_004274f0();
    if (uVar5 <= local_91c) {
      game_get_state_ptr_d1520();
      FUN_005e53f0();
      FUN_004dbcf0();
      *(undefined4 *)(in_ECX + 0x3fc) = *(undefined4 *)(iVar4 + 0xf0);
      *(undefined4 *)(in_ECX + 0x400) = *(undefined4 *)(iVar4 + 0xf4);
      FUN_004053a0();
      local_914 = 0;
      do {
        uVar5 = FUN_004274f0();
        if (uVar5 <= local_914) {
          game_get_state_ptr_d1520();
          FUN_005e53f0();
          FUN_004dbcf0();
          *(undefined4 *)(in_ECX + 0x5ec) = *(undefined4 *)(iVar4 + 0xf8);
          *(undefined4 *)(in_ECX + 0x5f0) = *(undefined4 *)(iVar4 + 0xfc);
          FUN_004053a0();
          local_908 = 0;
          do {
            uVar5 = FUN_004274f0();
            if (uVar5 <= local_908) {
              game_get_state_ptr_d1520();
              FUN_005e53f0();
              FUN_004dbcf0();
              *(undefined4 *)(in_ECX + 0x7dc) = *(undefined4 *)(iVar4 + 0x100);
              *(undefined4 *)(in_ECX + 0x7e0) = *(undefined4 *)(iVar4 + 0x104);
              FUN_004053a0();
              local_90c = 0;
              do {
                uVar5 = FUN_004274f0();
                if (uVar5 <= local_90c) {
                  local_8 = 0xffffffff;
                  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                            ((function<void___cdecl(void)> *)&stack0x00000004);
                  ExceptionList = local_10;
                  return;
                }
                FUN_004274d0();
                local_964 = (char *)npk_get_relative_res_path();
                local_94c = local_214;
                do {
                  cVar1 = *local_964;
                  *local_94c = cVar1;
                  local_964 = local_964 + 1;
                  local_94c = local_94c + 1;
                } while (cVar1 != '\0');
                __strlwr(local_214);
                npk_get_relative_res_path();
                FUN_004c7740();
                pcVar3 = local_214;
                do {
                  local_904 = pcVar3;
                  pcVar3 = local_904 + 1;
                } while (*local_904 != '\0');
                local_954 = (byte *)(local_904 + -4);
                local_950 = &DAT_007503a4;
                do {
                  bVar2 = *local_950;
                  bVar6 = bVar2 < *local_954;
                  if (bVar2 != *local_954) {
LAB_004dbc04:
                    local_96c = -(uint)bVar6 | 1;
                    goto LAB_004dbc0f;
                  }
                  if (bVar2 == 0) break;
                  bVar2 = local_950[1];
                  bVar6 = bVar2 < local_954[1];
                  if (bVar2 != local_954[1]) goto LAB_004dbc04;
                  local_950 = local_950 + 2;
                  local_954 = local_954 + 2;
                } while (bVar2 != 0);
                local_96c = 0;
LAB_004dbc0f:
                if (local_96c == 0) {
                  game_get_flag_object_01a70();
                  FUN_004054a0(local_214);
                  FUN_005b7480(DAT_007ca640,local_8e4);
                  local_8._0_1_ = 4;
                  FUN_00519db0();
                  local_8 = (uint)local_8._1_3_ << 8;
                  FUN_00403a10();
                }
                local_90c = local_90c + 1;
              } while( true );
            }
            FUN_004274d0();
            local_960 = (char *)npk_get_relative_res_path();
            local_940 = local_314;
            do {
              cVar1 = *local_960;
              *local_940 = cVar1;
              local_960 = local_960 + 1;
              local_940 = local_940 + 1;
            } while (cVar1 != '\0');
            __strlwr(local_314);
            npk_get_relative_res_path();
            FUN_004c7740();
            pcVar3 = local_314;
            do {
              local_910 = pcVar3;
              pcVar3 = local_910 + 1;
            } while (*local_910 != '\0');
            local_948 = (byte *)(local_910 + -4);
            local_944 = &DAT_007503b8;
            do {
              bVar2 = *local_944;
              bVar6 = bVar2 < *local_948;
              if (bVar2 != *local_948) {
LAB_004db8e2:
                local_968 = -(uint)bVar6 | 1;
                goto LAB_004db8ed;
              }
              if (bVar2 == 0) break;
              bVar2 = local_944[1];
              bVar6 = bVar2 < local_948[1];
              if (bVar2 != local_948[1]) goto LAB_004db8e2;
              local_944 = local_944 + 2;
              local_948 = local_948 + 2;
            } while (bVar2 != 0);
            local_968 = 0;
LAB_004db8ed:
            if (local_968 == 0) {
              game_get_flag_object_01a70();
              FUN_004054a0();
              FUN_005b7480(DAT_007ca640);
              local_8._0_1_ = 3;
              FUN_00519db0();
              local_8 = (uint)local_8._1_3_ << 8;
              FUN_00403a10();
            }
            local_908 = local_908 + 1;
          } while( true );
        }
        FUN_004274d0();
        local_95c = (char *)npk_get_relative_res_path();
        local_934 = local_414;
        do {
          cVar1 = *local_95c;
          *local_934 = cVar1;
          local_95c = local_95c + 1;
          local_934 = local_934 + 1;
        } while (cVar1 != '\0');
        __strlwr(local_414);
        npk_get_relative_res_path();
        FUN_004c7740();
        pcVar3 = local_414;
        do {
          local_918 = pcVar3;
          pcVar3 = local_918 + 1;
        } while (*local_918 != '\0');
        local_93c = (byte *)(local_918 + -4);
        local_938 = &DAT_0075037c;
        do {
          bVar2 = *local_938;
          bVar6 = bVar2 < *local_93c;
          if (bVar2 != *local_93c) {
LAB_004db5c5:
            local_978 = -(uint)bVar6 | 1;
            goto LAB_004db5d0;
          }
          if (bVar2 == 0) break;
          bVar2 = local_938[1];
          bVar6 = bVar2 < local_93c[1];
          if (bVar2 != local_93c[1]) goto LAB_004db5c5;
          local_938 = local_938 + 2;
          local_93c = local_93c + 2;
        } while (bVar2 != 0);
        local_978 = 0;
LAB_004db5d0:
        if (local_978 == 0) {
          game_get_flag_object_01a70();
          FUN_004054a0();
          FUN_005b7480();
          local_8._0_1_ = 2;
          FUN_00519db0();
          local_8 = (uint)local_8._1_3_ << 8;
          FUN_00403a10();
        }
        local_914 = local_914 + 1;
      } while( true );
    }
    FUN_004274d0();
    local_958 = (char *)npk_get_relative_res_path();
    local_928 = local_114;
    do {
      cVar1 = *local_958;
      *local_928 = cVar1;
      local_958 = local_958 + 1;
      local_928 = local_928 + 1;
    } while (cVar1 != '\0');
    __strlwr(local_114);
    npk_get_relative_res_path();
    FUN_004c7740();
    pcVar3 = local_114;
    do {
      local_920 = pcVar3;
      pcVar3 = local_920 + 1;
    } while (*local_920 != '\0');
    local_930 = (byte *)(local_920 + -4);
    local_92c = &DAT_00750390;
    do {
      bVar2 = *local_92c;
      bVar6 = bVar2 < *local_930;
      if (bVar2 != *local_930) {
LAB_004db2a2:
        local_974 = -(uint)bVar6 | 1;
        goto LAB_004db2ad;
      }
      if (bVar2 == 0) break;
      bVar2 = local_92c[1];
      bVar6 = bVar2 < local_930[1];
      if (bVar2 != local_930[1]) goto LAB_004db2a2;
      local_92c = local_92c + 2;
      local_930 = local_930 + 2;
    } while (bVar2 != 0);
    local_974 = 0;
LAB_004db2ad:
    if (local_974 == 0) {
      game_get_flag_object_01a70();
      FUN_004054a0();
      FUN_005b7480();
      local_8._0_1_ = 1;
      FUN_00519db0();
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_00403a10();
    }
    local_91c = local_91c + 1;
  } while( true );
}


/* ==== 004dbcf0  FUN_004dbcf0  size=420 ==== */

int FUN_004dbcf0(int param_1)

{
  undefined4 uVar1;
  int in_ECX;
  
  FUN_0040d840(param_1);
  FUN_0040d840(param_1 + 0x18);
  FUN_00429b00(param_1 + 0x30);
  FUN_00427560(param_1 + 0x3c);
  FUN_00519e10(param_1 + 0x48);
  FUN_004dbea0(param_1 + 0x54);
  FUN_0040d840(param_1 + 0xe8);
  uVar1 = *(undefined4 *)(param_1 + 0x104);
  *(undefined4 *)(in_ECX + 0x100) = *(undefined4 *)(param_1 + 0x100);
  *(undefined4 *)(in_ECX + 0x104) = uVar1;
  *(undefined4 *)(in_ECX + 0x108) = *(undefined4 *)(param_1 + 0x108);
  FUN_0040d840(param_1 + 0x10c);
  *(undefined4 *)(in_ECX + 0x124) = *(undefined4 *)(param_1 + 0x124);
  FUN_0040d840(param_1 + 0x128);
  FUN_00429b00(param_1 + 0x140);
  FUN_0040d840(param_1 + 0x14c);
  FUN_00429b00(param_1 + 0x164);
  FUN_0040d840(param_1 + 0x170);
  FUN_00429b00(param_1 + 0x188);
  FUN_0051a030(param_1 + 0x194);
  FUN_00519f50(param_1 + 0x1a0);
  return in_ECX;
}


/* ==== 004dbea0  FUN_004dbea0  size=64 ==== */

undefined4 FUN_004dbea0(int param_1)

{
  undefined4 in_ECX;
  
  FUN_004dbee0(param_1);
  FUN_004dbf10(param_1 + 0x1c);
  FUN_004dbf10(param_1 + 0x58);
  return in_ECX;
}


/* ==== 004dbee0  FUN_004dbee0  size=40 ==== */

int FUN_004dbee0(int param_1)

{
  int in_ECX;
  
  FUN_0040d840(param_1);
  *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(param_1 + 0x18);
  return in_ECX;
}


/* ==== 004dbf10  FUN_004dbf10  size=64 ==== */

undefined4 FUN_004dbf10(int param_1)

{
  undefined4 in_ECX;
  
  FUN_0040d840(param_1);
  FUN_0040d840(param_1 + 0x18);
  FUN_00427560(param_1 + 0x30);
  return in_ECX;
}


/* ==== 004dbf50  FUN_004dbf50  size=3406 ==== */

void FUN_004dbf50(void)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  undefined4 uVar8;
  int in_ECX;
  bool bVar9;
  uint uStack_1b0;
  uint uStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  uint *puStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined1 *puStack_188;
  undefined4 *puStack_184;
  uint uStack_180;
  undefined1 local_178 [4];
  undefined1 local_174 [4];
  undefined4 local_170;
  undefined1 *local_16c;
  undefined1 *local_168;
  undefined1 local_164 [4];
  undefined1 local_160 [4];
  undefined1 local_15c [16];
  undefined1 local_14c [4];
  int local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  uint local_138;
  uint local_134;
  uint local_130;
  uint local_12c;
  int *local_128;
  int *local_124;
  uint local_120;
  int local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  uint local_10c;
  undefined4 *local_108;
  int local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  int local_e8;
  int *local_e4;
  undefined4 local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  uint local_d0;
  uint local_cc;
  uint local_c8;
  uint local_c4;
  uint local_c0;
  int *local_bc;
  int local_b8;
  int local_b4;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  undefined4 local_a4;
  int local_a0;
  uint local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int *local_84;
  undefined1 local_80 [16];
  byte *local_70;
  byte *local_6c;
  byte *local_68;
  byte *local_64;
  byte *local_60;
  byte *local_5c;
  byte *local_58;
  byte *local_54;
  int *local_50;
  int *local_4c;
  byte *local_48;
  byte *local_44;
  undefined4 *local_40;
  undefined4 *local_3c;
  undefined4 local_38;
  int local_34;
  uint local_30;
  undefined4 local_2c;
  byte local_28;
  byte local_27;
  byte local_26;
  byte local_25;
  byte local_24;
  byte local_23;
  byte local_22;
  byte local_21;
  byte local_20;
  byte local_1f;
  undefined1 local_1e;
  undefined1 local_1d;
  uint local_1c;
  undefined4 local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00715ec4;
  local_10 = ExceptionList;
  uStack_180 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  local_14 = in_ECX;
  if (((*(int *)(in_ECX + 0x17c) != *(int *)(in_ECX + 0x174)) && (-1 < *(int *)(in_ECX + 0xa4))) &&
     (-1 < *(int *)(in_ECX + 0xa8))) {
    puStack_184 = (undefined4 *)0x4dbfc6;
    cVar1 = game_frame_should_continue();
    if (cVar1 == '\0') {
      puStack_184 = &local_2c;
      puStack_188 = (undefined1 *)0x4dbfe0;
      FUN_004021b0();
      while( true ) {
        puStack_184 = (undefined4 *)local_174;
        puStack_188 = (undefined1 *)0x4dbffe;
        puStack_184 = (undefined4 *)FUN_00402170();
        puStack_188 = (undefined1 *)0x4dc007;
        cVar1 = FUN_00426ed0();
        if (cVar1 == '\0') break;
        puStack_184 = (undefined4 *)0x4dc01a;
        piVar2 = (int *)FUN_00401b20();
        if (*piVar2 == *(int *)(local_14 + 0x180)) {
          puStack_184 = (undefined4 *)0x4dc033;
          iVar3 = FUN_00401b20();
          if (*(int *)(iVar3 + 4) == *(int *)(local_14 + 0x184)) {
            puStack_184 = (undefined4 *)0x4dc04d;
            local_e8 = FUN_00401b20();
            local_e8 = local_e8 + 8;
            puStack_184 = (undefined4 *)local_80;
            puStack_188 = (undefined1 *)0x4dc065;
            FUN_0042a9e0();
            puStack_184 = (undefined4 *)local_14c;
            puStack_188 = (undefined1 *)0x4dc077;
            FUN_0042a9c0();
            while( true ) {
              puStack_184 = (undefined4 *)local_14c;
              puStack_188 = (undefined1 *)0x4dc092;
              cVar1 = FUN_0040d2d0();
              if (cVar1 == '\0') break;
              puStack_184 = (undefined4 *)0x4dc0a1;
              puStack_184 = (undefined4 *)FUN_0042a580();
              puStack_188 = (undefined1 *)0x4dc0b3;
              local_ec = puStack_184;
              game_get_state_ptr_d1520();
              puStack_188 = (undefined1 *)0x4dc0ba;
              FUN_004d58e0();
              puStack_188 = (undefined1 *)0x4dc0c7;
              FUN_0044de80();
              puStack_184 = (undefined4 *)0x4dc082;
              FUN_0042a560();
            }
            puStack_184 = (undefined4 *)0x4dc0d2;
            iVar3 = FUN_00401b20();
            puStack_184 = (undefined4 *)(iVar3 + 0x10);
            puStack_188 = (undefined1 *)0x4dc0db;
            game_get_state_ptr_d1520();
            puStack_188 = (undefined1 *)0x4dc0e8;
            FUN_00427560();
            local_f0 = local_2c;
            puStack_184 = (undefined4 *)local_2c;
            puStack_188 = local_178;
            uStack_18c = 0x4dc10b;
            FUN_00518c50();
            local_8 = 0xffffffff;
            puStack_184 = (undefined4 *)0x4dc11b;
            std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                      ((function<void___cdecl(void)> *)&stack0x00000004);
            ExceptionList = local_10;
            return;
          }
        }
        puStack_184 = (undefined4 *)0x4dbfeb;
        FUN_00518450();
      }
    }
  }
  puStack_184 = (undefined4 *)0x4dc12e;
  FUN_004d58e0();
  puStack_184 = (undefined4 *)0x4dc13b;
  cVar1 = FUN_0044e1c0();
  if (cVar1 == '\0') {
    puStack_184 = &local_18;
    puStack_188 = (undefined1 *)0x4dc152;
    FUN_004d58e0();
    puStack_188 = (undefined1 *)0x4dc15f;
    FUN_0044e0f0();
    while( true ) {
      puStack_184 = (undefined4 *)local_15c;
      puStack_188 = (undefined1 *)0x4dc16f;
      FUN_004d58e0();
      puStack_188 = (undefined1 *)0x4dc17c;
      puStack_184 = (undefined4 *)FUN_0040d9a0();
      puStack_188 = (undefined1 *)0x4dc185;
      cVar1 = FUN_0040d2d0();
      if (cVar1 == '\0') break;
      puStack_184 = (undefined4 *)0x4dc198;
      piVar2 = (int *)FUN_0042a580();
      if (*(int *)(*piVar2 + 0x204) == 100) {
        puStack_184 = (undefined4 *)0x0;
        puStack_188 = (undefined1 *)0xffffffff;
        uStack_18c = 0xffffffff;
        uStack_190 = 0xffffffff;
        uStack_194 = 3;
        uStack_198 = 0xffffffff;
        puStack_19c = (uint *)0x4dc1bb;
        puVar4 = (undefined4 *)FUN_0042a580();
        puStack_19c = (uint *)*puVar4;
        fStack_1a0 = 7.140842e-39;
        FUN_004e50c0();
        fStack_1a0 = 7.140852e-39;
        FUN_004e5240();
        puStack_184 = (undefined4 *)0x4dc1d2;
        FUN_0042a580();
        puStack_184 = (undefined4 *)0x4dc1d9;
        FUN_0062ed50();
        puStack_184 = (undefined4 *)0x4dc1e2;
        piVar2 = (int *)FUN_0042a580();
        local_8c = *piVar2;
        if (local_8c == 0) {
          local_f4 = 0;
        }
        else {
          puStack_184 = (undefined4 *)0x1;
          puStack_188 = (undefined1 *)0x4dc200;
          local_f4 = FUN_004d1980();
        }
        local_f8 = local_18;
        puStack_184 = (undefined4 *)local_18;
        puStack_188 = local_160;
        uStack_18c = 0x4dc231;
        FUN_004d58e0();
        uStack_18c = 0x4dc23e;
        puVar4 = (undefined4 *)FUN_0044e0a0();
        local_18 = *puVar4;
      }
      else {
        puStack_184 = (undefined4 *)0x4dc250;
        piVar2 = (int *)FUN_0042a580();
        if (*(int *)(*piVar2 + 0x204) == 200) {
          puStack_184 = (undefined4 *)0x0;
          puStack_188 = (undefined1 *)0xffffffff;
          uStack_18c = 0xffffffff;
          uStack_190 = 0xffffffff;
          uStack_194 = 0x4dc272;
          piVar2 = (int *)FUN_0042a580();
          uStack_194 = *(undefined4 *)(*piVar2 + 0x978);
          uStack_198 = 0xffffffff;
          puStack_19c = (uint *)0x4dc285;
          puVar4 = (undefined4 *)FUN_0042a580();
          puStack_19c = (uint *)*puVar4;
          fStack_1a0 = 7.141125e-39;
          FUN_004e50c0();
          fStack_1a0 = 7.141135e-39;
          FUN_004e5240();
          puStack_184 = (undefined4 *)0x4dc29c;
          FUN_0042a580();
          puStack_184 = (undefined4 *)0x4dc2a3;
          FUN_0062ed50();
          puStack_184 = (undefined4 *)0x4dc2ac;
          piVar2 = (int *)FUN_0042a580();
          local_90 = *piVar2;
          if (local_90 == 0) {
            local_fc = 0;
          }
          else {
            puStack_184 = (undefined4 *)0x1;
            puStack_188 = (undefined1 *)0x4dc2ca;
            local_fc = FUN_004d1980();
          }
          local_100 = local_18;
          puStack_184 = (undefined4 *)local_18;
          puStack_188 = local_164;
          uStack_18c = 0x4dc2fb;
          FUN_004d58e0();
          uStack_18c = 0x4dc308;
          puVar4 = (undefined4 *)FUN_0044e0a0();
          local_18 = *puVar4;
        }
        else {
          puStack_184 = (undefined4 *)0x4dc317;
          FUN_0042a560();
        }
      }
    }
  }
  local_168 = (undefined1 *)&uStack_198;
  puStack_19c = (uint *)&stack0x00000004;
  fStack_1a0 = 7.141355e-39;
  FUN_00405520();
  puStack_19c = (uint *)0x4dc33c;
  local_104 = FUN_005b75d0();
  local_94 = local_104 + 0x108;
  puStack_19c = (uint *)0x4dc365;
  local_34 = local_104;
  local_3c = (undefined4 *)game_loop_helper_018d0();
  puStack_19c = (uint *)0x4dc373;
  local_108 = (undefined4 *)game_loop_helper_018b0();
  for (; local_3c != local_108; local_3c = local_3c + 4) {
    local_40 = local_3c;
    puStack_19c = (uint *)0x9a0;
    fStack_1a0 = 7.141514e-39;
    local_98 = crt_or_heap_alloc_helper();
    local_8._0_1_ = 1;
    if (local_98 == 0) {
      local_9c = 0;
    }
    else {
      puStack_19c = (uint *)0x4dc3c4;
      local_9c = FUN_0042f870();
    }
    local_10c = local_9c;
    local_8._0_1_ = 0;
    local_a8 = local_9c;
    puStack_19c = (uint *)0x78;
    fStack_1a0 = 7.141635e-39;
    local_a0 = crt_or_heap_alloc_helper();
    local_8._0_1_ = 2;
    if (local_a0 == 0) {
      local_a4 = 0;
    }
    else {
      puStack_19c = (uint *)0x1;
      fStack_1a0 = (float)(int)local_40[3];
      fStack_1a4 = (float)(int)local_40[2];
      fStack_1a8 = (float)(int)local_40[1];
      uStack_1ac = *local_40;
      uStack_1b0 = local_a8;
      local_a4 = FUN_0042dfc0();
    }
    local_110 = local_a4;
    local_8 = (uint)local_8._1_3_ << 8;
    local_114 = local_a4;
    puStack_19c = (uint *)local_a4;
    fStack_1a0 = 7.141847e-39;
    FUN_004d58e0();
    fStack_1a0 = 7.141856e-39;
    FUN_0042f230();
    local_ac = local_a8;
    if (local_a8 == 0) {
      local_118 = 0;
    }
    else {
      puStack_19c = (uint *)0x1;
      fStack_1a0 = 7.141905e-39;
      local_118 = FUN_004dcca0();
    }
  }
  if (0 < *(int *)(local_14 + 0x16c)) {
    puStack_19c = (uint *)0x4dc4e6;
    puVar4 = (undefined4 *)game_get_state_ptr_d1520();
    local_11c = *(int *)(*(int *)*puVar4 + 0x94 + *(int *)(local_14 + 0x170) * 4);
    puStack_19c = (uint *)0x4dc505;
    iVar3 = FUN_00641430();
    local_1e = iVar3 % 100 < local_11c;
    local_d0 = 0xffffffff;
    local_1d = local_1e;
    if ((bool)local_1e) {
      puStack_19c = (uint *)0x4dc546;
      FUN_0040d650();
      local_8 = CONCAT31(local_8._1_3_,3);
      local_30 = 0;
      while( true ) {
        puStack_19c = (uint *)0x4dc567;
        uVar5 = FUN_005194c0();
        if (uVar5 <= local_30) break;
        local_48 = (byte *)0x7503ac;
        puStack_19c = (uint *)local_30;
        fStack_1a0 = 7.142191e-39;
        iVar3 = FUN_00519490();
        local_44 = (byte *)(iVar3 + 0x38);
        do {
          local_1f = *local_44;
          bVar9 = local_1f < *local_48;
          if (local_1f != *local_48) {
LAB_004dc5cc:
            local_b0 = -(uint)bVar9 | 1;
            goto LAB_004dc5d7;
          }
          if (local_1f == 0) break;
          local_20 = local_44[1];
          bVar9 = local_20 < local_48[1];
          if (local_20 != local_48[1]) goto LAB_004dc5cc;
          local_44 = local_44 + 2;
          local_48 = local_48 + 2;
        } while (local_20 != 0);
        local_b0 = 0;
LAB_004dc5d7:
        local_120 = local_b0;
        if (local_b0 == 0) {
          puStack_19c = (uint *)local_30;
          fStack_1a0 = 7.142362e-39;
          piVar2 = (int *)FUN_00519490();
          if (49999 < *piVar2) {
            puStack_19c = (uint *)local_30;
            fStack_1a0 = 7.142394e-39;
            piVar2 = (int *)FUN_00519490();
            if (*piVar2 < 0xc3ae) goto LAB_004dc553;
          }
          puStack_19c = &local_30;
          fStack_1a0 = 7.142434e-39;
          FUN_0040d490();
        }
LAB_004dc553:
        local_30 = local_30 + 1;
      }
      puStack_19c = (uint *)0x4dc644;
      cVar1 = game_frame_should_continue();
      if (cVar1 == '\0') {
        puStack_19c = (uint *)0x4dc650;
        uVar5 = FUN_00641430();
        puStack_19c = (uint *)0x4dc65d;
        uVar6 = FUN_00401a90();
        puStack_19c = (uint *)(uVar5 % uVar6);
        fStack_1a0 = 7.14252e-39;
        puVar7 = (uint *)game_get_flag_object_01a70();
        local_d0 = *puVar7;
      }
      local_8 = local_8 & 0xffffff00;
      puStack_19c = (uint *)0x4dc688;
      FUN_00401ac0();
    }
    puStack_19c = (uint *)(local_34 + 0x3c);
    fStack_1a0 = 7.142575e-39;
    FUN_00519680();
    local_8 = CONCAT31(local_8._1_3_,4);
    local_b4 = local_14 + 0x48;
    puStack_19c = (uint *)0x4dc6c0;
    local_4c = (int *)game_loop_helper_018d0();
    puStack_19c = (uint *)0x4dc6ce;
    local_124 = (int *)game_loop_helper_018b0();
    for (; local_4c != local_124; local_4c = local_4c + 3) {
      local_84 = local_4c;
      if ((*(int *)(local_14 + 0x180) == *local_4c) && (*(int *)(local_14 + 0x184) == local_4c[1]))
      {
        local_b8 = local_34 + 0x48;
        puStack_19c = (uint *)0x4dc730;
        local_50 = (int *)game_loop_helper_018d0();
        puStack_19c = (uint *)0x4dc73e;
        local_128 = (int *)game_loop_helper_018b0();
        for (; local_50 != local_128; local_50 = local_50 + 0x51) {
          local_bc = local_50;
          if (*local_50 == local_84[2]) {
            puStack_19c = (uint *)local_50;
            fStack_1a0 = 7.142907e-39;
            FUN_005195d0();
            break;
          }
        }
      }
    }
    local_1c = 0;
    while( true ) {
      puStack_19c = (uint *)0x4dc7b6;
      uVar5 = FUN_005194c0();
      if (uVar5 <= local_1c) break;
      local_38 = 0xffffffff;
      local_58 = (byte *)0x7503e8;
      puStack_19c = (uint *)local_1c;
      fStack_1a0 = 7.143025e-39;
      iVar3 = FUN_00519490();
      local_54 = (byte *)(iVar3 + 0x38);
      do {
        local_21 = *local_54;
        bVar9 = local_21 < *local_58;
        if (local_21 != *local_58) {
LAB_004dc81f:
          local_c0 = -(uint)bVar9 | 1;
          goto LAB_004dc82a;
        }
        if (local_21 == 0) break;
        local_22 = local_54[1];
        bVar9 = local_22 < local_58[1];
        if (local_22 != local_58[1]) goto LAB_004dc81f;
        local_54 = local_54 + 2;
        local_58 = local_58 + 2;
      } while (local_22 != 0);
      local_c0 = 0;
LAB_004dc82a:
      local_12c = local_c0;
      if (local_c0 == 0) {
        local_38 = 0;
      }
      else {
        local_60 = (byte *)0x7503f4;
        puStack_19c = (uint *)local_1c;
        fStack_1a0 = 7.143211e-39;
        iVar3 = FUN_00519490();
        local_5c = (byte *)(iVar3 + 0x38);
        do {
          local_23 = *local_5c;
          bVar9 = local_23 < *local_60;
          if (local_23 != *local_60) {
LAB_004dc8a4:
            local_c4 = -(uint)bVar9 | 1;
            goto LAB_004dc8af;
          }
          if (local_23 == 0) break;
          local_24 = local_5c[1];
          bVar9 = local_24 < local_60[1];
          if (local_24 != local_60[1]) goto LAB_004dc8a4;
          local_5c = local_5c + 2;
          local_60 = local_60 + 2;
        } while (local_24 != 0);
        local_c4 = 0;
LAB_004dc8af:
        local_130 = local_c4;
        if (local_c4 == 0) {
          local_38 = 1;
        }
        else {
          local_68 = (byte *)0x7503cc;
          puStack_19c = (uint *)local_1c;
          fStack_1a0 = 7.143398e-39;
          iVar3 = FUN_00519490();
          local_64 = (byte *)(iVar3 + 0x38);
          do {
            local_25 = *local_64;
            bVar9 = local_25 < *local_68;
            if (local_25 != *local_68) {
LAB_004dc929:
              local_c8 = -(uint)bVar9 | 1;
              goto LAB_004dc934;
            }
            if (local_25 == 0) break;
            local_26 = local_64[1];
            bVar9 = local_26 < local_68[1];
            if (local_26 != local_68[1]) goto LAB_004dc929;
            local_64 = local_64 + 2;
            local_68 = local_68 + 2;
          } while (local_26 != 0);
          local_c8 = 0;
LAB_004dc934:
          local_134 = local_c8;
          if (local_c8 == 0) {
            local_38 = 2;
          }
          else {
            local_70 = &DAT_007503e0;
            puStack_19c = (uint *)local_1c;
            fStack_1a0 = 7.143584e-39;
            iVar3 = FUN_00519490();
            local_6c = (byte *)(iVar3 + 0x38);
            do {
              local_27 = *local_6c;
              bVar9 = local_27 < *local_70;
              if (local_27 != *local_70) {
LAB_004dc9ae:
                local_cc = -(uint)bVar9 | 1;
                goto LAB_004dc9b9;
              }
              if (local_27 == 0) break;
              local_28 = local_6c[1];
              bVar9 = local_28 < local_70[1];
              if (local_28 != local_70[1]) goto LAB_004dc9ae;
              local_6c = local_6c + 2;
              local_70 = local_70 + 2;
            } while (local_28 != 0);
            local_cc = 0;
LAB_004dc9b9:
            local_138 = local_cc;
            if (local_cc == 0) {
              local_38 = 3;
            }
          }
        }
      }
      if (local_d0 == local_1c) {
        puStack_19c = (uint *)0x4dc9e5;
        iVar3 = FUN_00641430();
        if (iVar3 % 100 < 0x33) {
          local_38 = 1;
        }
        else {
          local_38 = 2;
        }
      }
      puStack_19c = (uint *)local_1c;
      fStack_1a0 = 7.143817e-39;
      iVar3 = FUN_00519490();
      local_d4 = *(int *)(iVar3 + 8);
      puStack_19c = (uint *)local_1c;
      fStack_1a0 = 7.143846e-39;
      iVar3 = FUN_00519490();
      if (*(int *)(iVar3 + 4) == 0) {
        local_d8 = local_d4;
      }
      else {
        puStack_19c = (uint *)local_1c;
        fStack_1a0 = 7.143891e-39;
        puVar4 = (undefined4 *)FUN_00519490();
        puStack_19c = (uint *)*puVar4;
        fStack_1a0 = 7.143902e-39;
        game_loop_helper_e9240();
        fStack_1a0 = 7.143912e-39;
        iVar3 = FUN_005d1b00();
        local_d8 = local_d4 + *(int *)(iVar3 + 0x2b0);
      }
      local_88 = local_d8;
      puStack_19c = *(uint **)(local_14 + 0x16c);
      fStack_1a0 = 7.143975e-39;
      game_loop_helper_e9240();
      fStack_1a0 = 7.143985e-39;
      iVar3 = FUN_005e4170();
      if (local_88 < *(int *)(iVar3 + 0x8c)) {
        puStack_19c = *(uint **)(local_14 + 0x16c);
        fStack_1a0 = 7.144026e-39;
        game_loop_helper_e9240();
        fStack_1a0 = 7.144035e-39;
        iVar3 = FUN_005e4170();
        local_88 = *(int *)(iVar3 + 0x8c);
      }
      puStack_19c = (uint *)0x34;
      fStack_1a0 = 7.144062e-39;
      local_dc = crt_or_heap_alloc_helper();
      local_8._0_1_ = 5;
      if (local_dc == 0) {
        local_e0 = 0;
      }
      else {
        puStack_19c = (uint *)0x1;
        fStack_1a0 = (float)local_38;
        fStack_1a4 = 1.4013e-43;
        fStack_1a8 = (float)local_1c;
        uStack_1ac = 0x4dcae7;
        iVar3 = FUN_00519490();
        fStack_1a8 = *(float *)(iVar3 + 0x14);
        uStack_1ac = local_1c;
        uStack_1b0 = 0x4dcaf7;
        iVar3 = FUN_00519490();
        uStack_1ac = *(undefined4 *)(iVar3 + 0x10);
        uStack_1b0 = local_1c;
        iVar3 = FUN_00519490();
        uStack_1b0 = *(uint *)(iVar3 + 0xc);
        iVar3 = local_88;
        puVar4 = (undefined4 *)FUN_00519490(local_1c);
        local_e0 = FUN_004cf270(*puVar4,iVar3);
      }
      local_13c = local_e0;
      local_8 = CONCAT31(local_8._1_3_,4);
      local_140 = local_e0;
      puStack_19c = &local_140;
      fStack_1a0 = 7.144303e-39;
      FUN_004d58e0();
      fStack_1a0 = 7.144321e-39;
      FUN_0044de80();
      local_1c = local_1c + 1;
    }
    local_8 = local_8 & 0xffffff00;
    puStack_19c = (uint *)0x4dcb88;
    FUN_005195f0();
  }
  puStack_19c = (uint *)0x4dcb91;
  FUN_004d58e0();
  puStack_19c = (uint *)0x4dcb98;
  FUN_004dceb0();
  puStack_19c = (uint *)0x4dcba0;
  FUN_004d58e0();
  puStack_19c = (uint *)0x4dcba7;
  FUN_004dcce0();
  puStack_19c = (uint *)0x4dcbad;
  iVar3 = game_get_player_or_session_blob();
  if (*(int *)(iVar3 + 0xdd8) == 4) {
    puStack_19c = (uint *)0x4dcbbf;
    iVar3 = game_get_player_or_session_blob();
    local_e4 = (int *)(iVar3 + 0x998);
    *local_e4 = *local_e4 + -1;
    puStack_19c = (uint *)0x4dcbe2;
    iVar3 = game_get_player_or_session_blob();
    if (*(int *)(iVar3 + 0x998) < 1) {
      puStack_19c = (uint *)0x4dcbf0;
      iVar3 = game_get_player_or_session_blob();
      *(undefined4 *)(iVar3 + 0x998) = 0;
    }
    puStack_19c = (uint *)0x4dcbff;
    puStack_19c = (uint *)game_get_player_or_session_blob();
    fStack_1a0 = 1.96182e-44;
    fStack_1a4 = 1.47136e-41;
    fStack_1a8 = 7.144531e-39;
    net_packet_send_opcode_onlyish();
    local_144 = 0x28a;
    local_16c = (undefined1 *)&uStack_1b0;
    local_170 = FUN_004054a0(&DAT_00750440);
    local_8._0_1_ = 6;
    uVar8 = game_timing_or_delay_helper(&local_144);
    local_8 = (uint)local_8._1_3_ << 8;
    local_148 = ui_find_widget_by_key(uVar8);
    puStack_19c = (uint *)0x4dcc61;
    iVar3 = game_get_player_or_session_blob();
    *(int *)(local_148 + 0x8a4) = (*(int *)(iVar3 + 0x998) * 100) / 0x9c;
  }
  local_8 = 0xffffffff;
  puStack_19c = (uint *)0x4dcc8b;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)&stack0x00000004);
  ExceptionList = local_10;
  return;
}


/* ==== 004dcca0  FUN_004dcca0  size=49 ==== */

undefined4 FUN_004dcca0(uint param_1)

{
  undefined4 in_ECX;
  
  FUN_00433520();
  if ((param_1 & 1) != 0) {
    FUN_006e4b8e(in_ECX,0x9a0);
  }
  return in_ECX;
}


/* ==== 004dcce0  FUN_004dcce0  size=447 ==== */

void FUN_004dcce0(void)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int in_ECX;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 local_34 [4];
  undefined1 local_30 [4];
  undefined4 local_2c;
  undefined4 local_28;
  int *local_24;
  undefined1 local_20 [4];
  int local_1c;
  int local_18;
  int local_14;
  undefined1 local_10 [8];
  undefined4 local_8;
  
  local_14 = in_ECX + 0x188;
  cVar1 = FUN_0044e1c0();
  if (cVar1 == '\0') {
    local_18 = local_14;
    FUN_0042a9e0(local_10);
    FUN_0042a9c0(local_20);
    while( true ) {
      cVar1 = FUN_0040d2d0(local_20);
      if (cVar1 == '\0') break;
      local_24 = (int *)FUN_0042a580();
      FUN_0044e0f0(&local_8);
      while( true ) {
        uVar2 = FUN_0040d9a0(local_30);
        cVar1 = FUN_0040d2d0(uVar2);
        if (cVar1 == '\0') break;
        piVar3 = (int *)FUN_0042a580();
        if (*piVar3 == *local_24) {
          piVar3 = (int *)FUN_0042a580();
          if (*(int *)(*piVar3 + 0x204) == 100) {
            uVar10 = 0;
            uVar9 = 0xffffffff;
            uVar8 = 0xffffffff;
            uVar7 = 0xffffffff;
            uVar6 = 3;
            uVar5 = 0xffffffff;
            puVar4 = (undefined4 *)FUN_0042a580(0xffffffff,3,0xffffffff,0xffffffff,0xffffffff,0);
            uVar2 = *puVar4;
            FUN_004e50c0(uVar2);
            FUN_004e5240(uVar2,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10);
          }
          else {
            piVar3 = (int *)FUN_0042a580();
            if (*(int *)(*piVar3 + 0x204) == 200) {
              uVar10 = 0;
              uVar9 = 0xffffffff;
              uVar8 = 0xffffffff;
              uVar7 = 0xffffffff;
              piVar3 = (int *)FUN_0042a580(0xffffffff,0xffffffff,0xffffffff,0);
              uVar2 = *(undefined4 *)(*piVar3 + 0x978);
              uVar6 = 0xffffffff;
              puVar4 = (undefined4 *)FUN_0042a580(0xffffffff,uVar2);
              uVar5 = *puVar4;
              FUN_004e50c0(uVar5);
              FUN_004e5240(uVar5,uVar6,uVar2,uVar7,uVar8,uVar9,uVar10);
            }
          }
          FUN_0042a580();
          FUN_0062ed50();
          piVar3 = (int *)FUN_0042a580();
          local_1c = *piVar3;
          if (local_1c == 0) {
            local_28 = 0;
          }
          else {
            local_28 = FUN_004d1980(1);
          }
          local_2c = local_8;
          puVar4 = (undefined4 *)FUN_0044e0a0(local_34,local_8);
          local_8 = *puVar4;
          break;
        }
        FUN_0042a560();
      }
      FUN_0042a560();
    }
    FUN_0044e040();
  }
  return;
}


/* ==== 004dceb0  FUN_004dceb0  size=569 ==== */

void FUN_004dceb0(void)

{
  char cVar1;
  undefined4 *puVar2;
  int *piVar3;
  int in_ECX;
  undefined4 uVar4;
  undefined4 local_5c;
  undefined4 local_58;
  undefined1 local_54 [4];
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 local_48 [4];
  void *local_44;
  undefined4 local_40;
  undefined1 local_3c [4];
  int local_38;
  undefined4 local_34;
  int local_30;
  UMSFreeVirtualProcessorRoot *local_2c;
  UMSFreeVirtualProcessorRoot *local_28;
  int local_24;
  int local_20;
  undefined1 local_1c [4];
  int local_18;
  undefined1 local_14 [4];
  int local_10;
  undefined1 local_c [4];
  int local_8;
  
  local_10 = in_ECX + 0x180;
  local_8 = in_ECX;
  cVar1 = FUN_0044e1c0();
  if (cVar1 == '\0') {
    local_24 = local_10;
    FUN_0042a9e0(local_c);
    FUN_0042a9c0(local_3c);
    while( true ) {
      cVar1 = FUN_0040d2d0(local_3c);
      if (cVar1 == '\0') break;
      puVar2 = (undefined4 *)FUN_0042a580();
      local_28 = (UMSFreeVirtualProcessorRoot *)*puVar2;
      local_40 = FUN_0044c850(local_28);
      FUN_0044de80(&local_40);
      puVar2 = (undefined4 *)FUN_004b1090();
      uVar4 = *puVar2;
      game_get_state_ptr_d1520(uVar4);
      FUN_004ab460(uVar4);
      local_2c = local_28;
      if (local_28 == (UMSFreeVirtualProcessorRoot *)0x0) {
        local_44 = (void *)0x0;
      }
      else {
        local_44 = Concurrency::details::UMSFreeVirtualProcessorRoot::_scalar_deleting_destructor_
                             (local_28,1);
      }
      FUN_0042a560();
    }
    FUN_0044e040();
  }
  local_18 = local_8 + 0x178;
  cVar1 = FUN_0044e1c0();
  if (cVar1 == '\0') {
    local_30 = local_18;
    FUN_0042a9e0(local_14);
    FUN_0042a9c0(local_48);
    while( true ) {
      cVar1 = FUN_0040d2d0(local_48);
      if (cVar1 == '\0') break;
      puVar2 = (undefined4 *)FUN_0042a580();
      local_34 = *puVar2;
      local_4c = FUN_0057b190(local_34);
      FUN_0044de80(&local_4c);
      puVar2 = (undefined4 *)FUN_004b1090();
      uVar4 = *puVar2;
      game_get_state_ptr_d1520(uVar4);
      FUN_004ab460(uVar4);
      local_50 = local_34;
      FUN_006e4b8e(local_34,0x34);
      FUN_0042a560();
    }
    FUN_0044e040();
  }
  piVar3 = (int *)game_get_state_ptr_d1520();
  local_20 = *piVar3 + 0x150;
  cVar1 = FUN_0044e1c0();
  if (cVar1 == '\0') {
    local_38 = local_20;
    FUN_0042a9e0(local_1c);
    FUN_0042a9c0(local_54);
    while( true ) {
      cVar1 = FUN_0040d2d0(local_54);
      if (cVar1 == '\0') break;
      puVar2 = (undefined4 *)FUN_0042a580();
      local_5c = *puVar2;
      local_58 = local_5c;
      FUN_0044de80(&local_5c);
      FUN_0042a560();
    }
    FUN_0044e040();
  }
  return;
}


/* ==== 004dd0f0  FUN_004dd0f0  size=2802 ==== */

void FUN_004dd0f0(int param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 local_d0 [4];
  undefined1 local_cc [4];
  undefined1 local_c8 [4];
  undefined1 local_c4 [4];
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  int *local_78;
  undefined1 local_74 [4];
  int *local_70;
  undefined1 local_6c [4];
  undefined4 local_68;
  undefined4 local_64;
  int *local_60;
  undefined4 local_5c;
  int local_58;
  float local_50;
  float local_4c;
  undefined1 local_48 [4];
  int local_44;
  int local_40;
  int local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  undefined1 local_28 [4];
  undefined4 local_24;
  undefined1 local_20 [4];
  int local_1c;
  undefined4 local_18;
  int *local_14;
  char local_e;
  char local_d;
  int *local_c;
  undefined1 local_8 [4];
  
  piVar2 = (int *)FUN_004d58e0();
  local_1c = *piVar2 + 0x170;
  cVar1 = FUN_0044e1c0();
  if (cVar1 == '\0') {
    FUN_0044e0f0(&local_18);
    while( true ) {
      uVar3 = FUN_0040d9a0(local_c4);
      cVar1 = FUN_0040d2d0(uVar3);
      if (cVar1 == '\0') break;
      local_14 = (int *)FUN_0042a580();
      local_14 = (int *)*local_14;
      if (local_14 == (int *)0x0) {
        local_68 = local_18;
        FUN_0044e0a0(local_c8,local_18);
        break;
      }
      local_d = '\0';
      piVar2 = (int *)FUN_004d58e0();
      local_58 = *piVar2 + 0x188;
      FUN_0042a9e0(local_20);
      FUN_0042a9c0(local_6c);
      while (cVar1 = FUN_0040d2d0(local_6c), cVar1 != '\0') {
        local_70 = (int *)FUN_0042a580();
        if ((int *)*local_70 == local_14) {
          local_d = '\x01';
          break;
        }
        FUN_0042a560();
      }
      if (local_d == '\0') {
        if (((char)local_14[6] != '\0') && (local_14[1] = local_14[1] - param_1, local_14[1] < 1)) {
          local_14[1] = 0;
        }
        (**(code **)(*local_14 + 0xb8))(param_1);
        (**(code **)(*local_14 + 0xbc))(param_1);
      }
      FUN_0042a560();
    }
  }
  local_24 = FUN_00516d20();
  cVar1 = FUN_0044e1c0();
  if (cVar1 == '\0') {
    FUN_0044e0f0(local_8);
    while( true ) {
      uVar3 = FUN_0040d9a0(local_cc);
      cVar1 = FUN_0040d2d0(uVar3);
      if (cVar1 == '\0') break;
      piVar2 = (int *)FUN_0042a580();
      if ((*piVar2 != 0) && (piVar2 = (int *)FUN_0042a580(), *(int *)(*piVar2 + 0x2c) < 1)) {
        local_e = '\0';
        local_5c = FUN_00516d40();
        FUN_0042a9e0(local_28);
        FUN_0042a9c0(local_74);
        while (cVar1 = FUN_0040d2d0(local_74), cVar1 != '\0') {
          local_78 = (int *)FUN_0042a580();
          piVar2 = (int *)FUN_0042a580();
          if (*local_78 == *piVar2) {
            local_e = '\x01';
            break;
          }
          FUN_0042a560();
        }
        if (local_e == '\0') {
          piVar2 = (int *)FUN_0042a580();
          if (*(char *)(*piVar2 + 0x18) != '\0') {
            piVar2 = (int *)FUN_0042a580();
            local_60 = (int *)(*piVar2 + 4);
            *local_60 = *local_60 - param_1;
            piVar2 = (int *)FUN_0042a580();
            if (*(int *)(*piVar2 + 4) < 1) {
              piVar2 = (int *)FUN_0042a580();
              *(undefined4 *)(*piVar2 + 4) = 0;
            }
          }
          piVar2 = (int *)FUN_0042a580();
          if (*(char *)(*piVar2 + 0x18) == '\0') {
            piVar2 = (int *)FUN_0042a580();
            if (*(char *)(*piVar2 + 0x55) == '\0') {
              piVar2 = (int *)FUN_0042a580();
              if ((*(int *)(*piVar2 + 0x130) == 0) ||
                 (piVar2 = (int *)FUN_0042a580(), *(char *)(*piVar2 + 0xe9) == '\0')) {
                uVar11 = 1;
                piVar2 = (int *)FUN_0042a580(1);
                iVar4 = *(int *)(*piVar2 + 0x44) - DAT_007ca768;
                piVar2 = (int *)FUN_0042a580();
                iVar4 = iVar4 - *(int *)(*piVar2 + 0x48);
                piVar2 = (int *)FUN_0042a580(iVar4);
                iVar6 = *(int *)(*piVar2 + 0x40) - DAT_007ca764;
                piVar2 = (int *)FUN_0042a580(iVar6);
                uVar3 = *(undefined4 *)(*piVar2 + 0x114);
                piVar2 = (int *)FUN_0042a580(uVar3);
                uVar13 = *(undefined4 *)(*piVar2 + 0x110);
                uVar10 = 0xb;
                puVar5 = (undefined4 *)FUN_0042a580(0xb,uVar13);
                uVar9 = *puVar5;
                FUN_004e50c0(uVar9);
                FUN_004e5240(uVar9,uVar10,uVar13,uVar3,iVar6,iVar4,uVar11);
              }
              else {
                uVar11 = 1;
                piVar2 = (int *)FUN_0042a580(1);
                iVar6 = *(int *)(*piVar2 + 0x130);
                piVar2 = (int *)FUN_0042a580();
                iVar4 = (*(int *)(iVar6 + 0x228) + *(int *)(*piVar2 + 0x44)) - DAT_007ca768;
                piVar2 = (int *)FUN_0042a580();
                iVar6 = *(int *)(*(int *)(*piVar2 + 0x130) + 0x22c);
                piVar2 = (int *)FUN_0042a580();
                iVar4 = (iVar4 - iVar6) - *(int *)(*piVar2 + 0x48);
                piVar2 = (int *)FUN_0042a580(iVar4);
                iVar6 = *(int *)(*piVar2 + 0x130);
                piVar2 = (int *)FUN_0042a580();
                iVar6 = (*(int *)(iVar6 + 0x224) + *(int *)(*piVar2 + 0x40)) - DAT_007ca764;
                piVar2 = (int *)FUN_0042a580(iVar6);
                uVar3 = *(undefined4 *)(*piVar2 + 0x114);
                piVar2 = (int *)FUN_0042a580(uVar3);
                uVar13 = *(undefined4 *)(*piVar2 + 0x110);
                uVar10 = 0xb;
                puVar5 = (undefined4 *)FUN_0042a580(0xb,uVar13);
                uVar9 = *puVar5;
                FUN_004e50c0(uVar9);
                FUN_004e5240(uVar9,uVar10,uVar13,uVar3,iVar6,iVar4,uVar11);
              }
            }
            else {
              uVar12 = 1;
              piVar2 = (int *)FUN_0042a580(1);
              iVar6 = *piVar2;
              piVar2 = (int *)FUN_0042a580();
              iVar6 = *(int *)(iVar6 + 0x44) - *(int *)(*piVar2 + 0x48);
              piVar2 = (int *)FUN_0042a580(iVar6);
              uVar3 = *(undefined4 *)(*piVar2 + 0x40);
              piVar2 = (int *)FUN_0042a580(uVar3);
              uVar13 = *(undefined4 *)(*piVar2 + 0x114);
              piVar2 = (int *)FUN_0042a580(uVar13);
              uVar9 = *(undefined4 *)(*piVar2 + 0x110);
              uVar11 = 0xb;
              puVar5 = (undefined4 *)FUN_0042a580(0xb,uVar9);
              uVar10 = *puVar5;
              FUN_004e50c0(uVar10);
              FUN_004e5240(uVar10,uVar11,uVar9,uVar13,uVar3,iVar6,uVar12);
            }
          }
          else {
            piVar2 = (int *)FUN_0042a580();
            local_7c = (float)*(int *)(*piVar2 + 4);
            piVar2 = (int *)FUN_0042a580();
            local_2c = local_7c / (float)*(int *)(*piVar2 + 8);
            piVar2 = (int *)FUN_0042a580();
            local_80 = (float)*(int *)(*piVar2 + 8);
            piVar2 = (int *)FUN_0042a580();
            local_84 = local_80 - (float)*(int *)(*piVar2 + 4);
            piVar2 = (int *)FUN_0042a580();
            local_30 = local_84 / (float)*(int *)(*piVar2 + 8);
            piVar2 = (int *)FUN_0042a580();
            local_88 = (float)*(int *)(*piVar2 + 0xc) * local_2c;
            piVar2 = (int *)FUN_0042a580();
            local_44 = (int)(local_88 + (float)*(int *)(*piVar2 + 0x40) * local_30);
            piVar2 = (int *)FUN_0042a580();
            local_8c = (float)*(int *)(*piVar2 + 0x10) * local_2c;
            piVar2 = (int *)FUN_0042a580();
            local_3c = (int)(local_8c + (float)*(int *)(*piVar2 + 0x44) * local_30);
            piVar2 = (int *)FUN_0042a580();
            local_90 = (float)*(int *)(*piVar2 + 0x14) * local_2c;
            piVar2 = (int *)FUN_0042a580();
            local_40 = (int)(local_90 + (float)*(int *)(*piVar2 + 0x48) * local_30);
            piVar2 = (int *)FUN_0042a580();
            if (*(char *)(*piVar2 + 0x55) == '\0') {
              piVar2 = (int *)FUN_0042a580();
              if ((*(int *)(*piVar2 + 0x130) == 0) ||
                 (piVar2 = (int *)FUN_0042a580(), *(char *)(*piVar2 + 0xe9) == '\0')) {
                uVar11 = 1;
                iVar6 = (local_3c - DAT_007ca768) - local_40;
                iVar4 = local_44 - DAT_007ca764;
                piVar2 = (int *)FUN_0042a580(iVar4,iVar6,1);
                uVar3 = *(undefined4 *)(*piVar2 + 0x114);
                piVar2 = (int *)FUN_0042a580(uVar3);
                uVar13 = *(undefined4 *)(*piVar2 + 0x110);
                uVar10 = 0xb;
                puVar5 = (undefined4 *)FUN_0042a580(0xb,uVar13);
                uVar9 = *puVar5;
                FUN_004e50c0(uVar9);
                FUN_004e5240(uVar9,uVar10,uVar13,uVar3,iVar4,iVar6,uVar11);
              }
              else {
                piVar2 = (int *)FUN_0042a580();
                local_94 = (float)*(int *)(*(int *)(*piVar2 + 0x130) + 4);
                piVar2 = (int *)FUN_0042a580();
                local_34 = local_94 / (float)*(int *)(*(int *)(*piVar2 + 0x130) + 8);
                piVar2 = (int *)FUN_0042a580();
                local_98 = (float)*(int *)(*(int *)(*piVar2 + 0x130) + 8);
                piVar2 = (int *)FUN_0042a580();
                local_9c = local_98 - (float)*(int *)(*(int *)(*piVar2 + 0x130) + 4);
                piVar2 = (int *)FUN_0042a580();
                local_38 = local_9c / (float)*(int *)(*(int *)(*piVar2 + 0x130) + 8);
                piVar2 = (int *)FUN_0042a580();
                local_a0 = (float)*(int *)(*(int *)(*piVar2 + 0x130) + 0xc) * local_34;
                piVar2 = (int *)FUN_0042a580();
                local_b4 = (int)(local_a0 +
                                (float)*(int *)(*(int *)(*piVar2 + 0x130) + 0x224) * local_38);
                piVar2 = (int *)FUN_0042a580();
                local_a4 = (float)*(int *)(*(int *)(*piVar2 + 0x130) + 0x10) * local_34;
                piVar2 = (int *)FUN_0042a580();
                local_ac = (int)(local_a4 +
                                (float)*(int *)(*(int *)(*piVar2 + 0x130) + 0x228) * local_38);
                piVar2 = (int *)FUN_0042a580();
                local_a8 = (float)*(int *)(*(int *)(*piVar2 + 0x130) + 0x14) * local_34;
                piVar2 = (int *)FUN_0042a580();
                local_b0 = (int)(local_a8 +
                                (float)*(int *)(*(int *)(*piVar2 + 0x130) + 0x22c) * local_38);
                uVar11 = 1;
                iVar4 = (((local_ac + local_3c) - DAT_007ca768) - local_b0) - local_40;
                iVar6 = (local_b4 + local_44) - DAT_007ca764;
                piVar2 = (int *)FUN_0042a580(iVar6,iVar4,1);
                uVar3 = *(undefined4 *)(*piVar2 + 0x114);
                piVar2 = (int *)FUN_0042a580(uVar3);
                uVar13 = *(undefined4 *)(*piVar2 + 0x110);
                uVar10 = 0xb;
                puVar5 = (undefined4 *)FUN_0042a580(0xb,uVar13);
                uVar9 = *puVar5;
                FUN_004e50c0(uVar9);
                FUN_004e5240(uVar9,uVar10,uVar13,uVar3,iVar6,iVar4,uVar11);
              }
            }
            else {
              uVar11 = 1;
              iVar4 = local_3c - local_40;
              iVar6 = local_44;
              piVar2 = (int *)FUN_0042a580(local_44,iVar4,1);
              uVar3 = *(undefined4 *)(*piVar2 + 0x114);
              piVar2 = (int *)FUN_0042a580(uVar3);
              uVar13 = *(undefined4 *)(*piVar2 + 0x110);
              uVar10 = 0xb;
              puVar5 = (undefined4 *)FUN_0042a580(0xb,uVar13);
              uVar9 = *puVar5;
              FUN_004e50c0(uVar9);
              FUN_004e5240(uVar9,uVar10,uVar13,uVar3,iVar6,iVar4,uVar11);
            }
          }
        }
      }
      FUN_0042a560();
    }
  }
  local_64 = FUN_004aa6e0();
  FUN_0044e0f0(local_48);
  while( true ) {
    uVar3 = FUN_0040d9a0(local_d0);
    cVar1 = FUN_0040d2d0(uVar3);
    if (cVar1 == '\0') break;
    puVar5 = (undefined4 *)FUN_0042a580();
    local_c = (int *)*puVar5;
    if ((local_c != (int *)0x0) && (cVar1 = FUN_0044e1c0(), cVar1 == '\0')) {
      if (((char)local_c[5] != '\0') && (*local_c = *local_c - param_1, *local_c < 1)) {
        *local_c = 0;
      }
      if ((char)local_c[5] == '\0') {
        uVar13 = 1;
        iVar4 = (local_c[0x1b] - DAT_007ca768) - local_c[0x1c];
        iVar7 = local_c[0x1a] - DAT_007ca764;
        iVar8 = local_c[7] + local_c[0x16] + local_c[0x1b];
        iVar6 = local_c[0x28];
        uVar3 = 10;
        piVar2 = local_c;
        FUN_004e50c0(local_c,10,iVar6,iVar8,iVar7,iVar4,1);
        FUN_004e5240(piVar2,uVar3,iVar6,iVar8,iVar7,iVar4,uVar13);
      }
      else {
        local_4c = (float)*local_c / (float)local_c[1];
        local_50 = ((float)local_c[1] - (float)*local_c) / (float)local_c[1];
        local_c0 = (int)((float)local_c[2] * local_4c + (float)local_c[0x1a] * local_50);
        local_b8 = (int)((float)local_c[3] * local_4c + (float)local_c[0x1b] * local_50);
        local_bc = (int)((float)local_c[4] * local_4c + (float)local_c[0x1c] * local_50);
        uVar13 = 1;
        iVar7 = (local_b8 - DAT_007ca768) - local_bc;
        iVar4 = local_c0 - DAT_007ca764;
        iVar8 = local_c[7] + local_c[0x16] + local_c[0x1b];
        iVar6 = local_c[0x28];
        uVar3 = 10;
        piVar2 = local_c;
        FUN_004e50c0(local_c,10,iVar6,iVar8,iVar4,iVar7,1);
        FUN_004e5240(piVar2,uVar3,iVar6,iVar8,iVar4,iVar7,uVar13);
      }
    }
    FUN_0042a560();
  }
  return;
}


/* ==== 004ddf00  FUN_004ddf00  size=10507 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_004ddf00(int param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  char *pcVar14;
  undefined4 uVar15;
  undefined1 local_3c8 [12];
  undefined1 local_3bc [20];
  undefined1 local_3a8 [4];
  undefined1 local_3a4 [4];
  undefined1 local_3a0 [4];
  undefined1 local_39c [4];
  undefined1 local_398 [4];
  undefined1 local_394 [4];
  undefined1 local_390 [4];
  undefined1 local_38c [4];
  undefined1 local_388 [4];
  undefined1 local_384 [4];
  undefined1 local_380 [4];
  undefined1 local_37c [4];
  undefined4 local_378;
  undefined4 local_374;
  undefined4 local_370;
  int local_36c;
  int local_368;
  undefined1 local_364 [4];
  undefined4 local_360;
  undefined4 local_35c;
  undefined1 local_358 [4];
  int local_354;
  int local_350;
  undefined1 local_34c [4];
  undefined4 local_348;
  undefined4 local_344;
  undefined1 local_340 [4];
  undefined4 local_33c;
  undefined4 local_338;
  undefined1 local_334 [4];
  int local_330;
  int local_32c;
  undefined1 local_328 [4];
  int local_324;
  int local_320;
  undefined1 local_31c [4];
  undefined4 local_318;
  undefined4 local_314;
  undefined1 local_310 [4];
  undefined1 local_30c [20];
  int *local_2f8;
  int *local_2f4;
  undefined4 local_2f0;
  int *local_2ec;
  undefined4 local_2e8;
  undefined4 local_2e4;
  undefined1 local_2e0 [4];
  undefined4 local_2dc;
  undefined4 local_2d8;
  undefined4 local_2d4;
  undefined1 local_2d0 [4];
  int *local_2cc;
  undefined1 local_2c8 [4];
  undefined4 local_2c4;
  int local_2c0;
  undefined1 local_2bc [4];
  int *local_2b8;
  int *local_2b4;
  undefined4 local_2b0;
  undefined1 local_2ac [4];
  int local_2a8;
  undefined1 local_2a4 [4];
  undefined4 local_2a0;
  undefined4 local_29c;
  int local_298;
  int local_294;
  int *local_290;
  int *local_28c;
  undefined4 local_288;
  int local_284;
  int local_280;
  int local_27c;
  int local_278;
  int local_274;
  int local_270;
  int local_26c;
  int local_268;
  int local_264;
  int *local_250;
  int local_24c;
  undefined1 local_248 [4];
  int local_244;
  undefined1 local_240 [4];
  undefined1 local_23c [4];
  undefined1 local_238 [4];
  undefined1 local_234 [4];
  undefined1 local_230 [4];
  undefined1 local_22c [4];
  int *local_228;
  int local_224;
  undefined4 local_220;
  int local_21c;
  int *local_218;
  int *local_214;
  int *local_210;
  undefined4 local_20c;
  undefined4 local_208;
  int local_204;
  int *local_200;
  int local_1fc;
  int *local_1f8;
  int local_1f4;
  char local_1ee;
  undefined1 local_1ed;
  undefined4 local_1e8;
  int *local_1e4;
  int local_1e0;
  uint local_1dc;
  undefined1 local_1d8 [4];
  undefined4 local_1d4;
  char local_1d0;
  char local_1cf;
  char local_1ce;
  char local_1cd;
  int *local_1cc;
  int local_1c8;
  int local_1c4;
  int local_1c0;
  int local_1bc;
  int local_1b8;
  int local_1b4;
  char local_1ad;
  int local_1ac;
  int *local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 local_194;
  undefined1 local_190 [4];
  int local_18c;
  int local_188;
  int local_184;
  int local_180;
  int local_17c;
  undefined1 local_178 [4];
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined1 local_164 [4];
  int local_160;
  int local_15c;
  int local_158;
  int local_154;
  undefined1 local_150 [4];
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined1 local_13c [4];
  int local_138;
  int local_134;
  int local_130;
  int local_12c;
  undefined1 local_128 [4];
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined1 local_114 [4];
  int local_110;
  int local_10c;
  int local_108;
  int local_104;
  undefined1 local_100 [4];
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined1 local_ec [4];
  int local_e8;
  int local_e4;
  int local_e0;
  int local_dc;
  undefined1 local_d8 [4];
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined1 local_c8 [4];
  int local_c4;
  int local_c0;
  int local_bc;
  undefined1 local_b8 [4];
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined1 local_a8 [4];
  int local_a4;
  int local_a0;
  int local_9c;
  undefined1 local_98 [4];
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined1 local_88 [4];
  int local_84;
  int local_80;
  int local_7c;
  undefined1 local_78 [4];
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined1 local_68 [4];
  int local_64;
  int local_60;
  int local_5c;
  undefined1 local_58 [4];
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 local_48 [4];
  int local_44;
  int local_40;
  int local_3c;
  undefined1 local_38 [4];
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 local_28 [4];
  int local_24;
  int local_20;
  int local_1c;
  undefined1 local_18 [4];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00715f47;
  local_10 = ExceptionList;
  local_14 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar4 = game_get_player_or_session_blob(local_14);
  FUN_004e49c0(param_1,uVar4);
  FUN_004edff0((float)param_1);
  iVar5 = game_get_player_or_session_blob();
  if ((iVar5 != 0) && (piVar6 = (int *)FUN_004d58e0(), *piVar6 != 0)) {
    *(undefined1 *)(local_1ac + 0xb3) = 0;
    game_get_player_or_session_blob();
    FUN_004d58e0();
    FUN_004dceb0();
    FUN_004d58e0();
    FUN_004dcce0();
    FUN_006477a0(param_1);
    FUN_0064cd40(param_1);
    if (*(int *)(local_1ac + 0x13c) != -1) {
      *(int *)(local_1ac + 0x13c) = *(int *)(local_1ac + 0x13c) + param_1;
    }
    if (*(int *)(local_1ac + 0xb4) == 1) {
      *(undefined4 *)(local_1ac + 0xb4) = 0xffffffff;
      piVar6 = (int *)game_get_state_ptr_d1520();
      if (*(int *)(*piVar6 + 100) == 0) {
        local_1d0 = '\0';
        local_264 = game_get_player_or_session_blob();
        local_264 = local_264 + 0xd7c;
        local_210 = (int *)game_loop_helper_018d0();
        local_2f8 = (int *)game_loop_helper_018b0();
        for (; local_210 != local_2f8; local_210 = local_210 + 2) {
          local_2f4 = local_210;
          if (*local_210 == *(int *)(local_1ac + 0x16c)) {
            local_1d0 = '\x01';
            break;
          }
        }
        if (local_1d0 == '\0') {
          Concurrency::details::QuickBitSet::QuickBitSet((QuickBitSet *)&local_2a0);
          local_2a0 = *(undefined4 *)(local_1ac + 0x16c);
          local_29c = 1;
          puVar8 = &local_2a0;
          game_get_player_or_session_blob(puVar8);
          FUN_004c3850(puVar8);
          uVar4 = game_get_player_or_session_blob();
          net_packet_send_fixed_0x24(0x2904,0x12,*(undefined4 *)(local_1ac + 0x16c),local_29c,uVar4);
        }
        else {
          local_268 = game_get_player_or_session_blob();
          local_268 = local_268 + 0xd7c;
          local_214 = (int *)game_loop_helper_018d0();
          local_2b8 = (int *)game_loop_helper_018b0();
          for (; local_214 != local_2b8; local_214 = local_214 + 2) {
            local_200 = local_214;
            if (((*local_214 == *(int *)(local_1ac + 0x16c)) && (*(int *)(local_1ac + 0x170) < 3))
               && (local_214[1] <= *(int *)(local_1ac + 0x170))) {
              local_214[1] = local_214[1] + 1;
              uVar4 = game_get_player_or_session_blob();
              net_packet_send_fixed_0x24(0x2904,0x12,*(undefined4 *)(local_1ac + 0x16c),local_200[1],uVar4);
              break;
            }
          }
        }
        uVar4 = game_get_player_or_session_blob();
        net_packet_send_fixed_0x20(47000,*(undefined1 *)(local_1ac + 0x44),*(undefined4 *)(local_1ac + 0x16c),
                     uVar4);
        piVar6 = (int *)game_get_state_ptr_d1520();
        *(undefined1 *)(*piVar6 + 0x9d4) = 1;
        FUN_004d58e0();
        FUN_004dcce0();
        piVar6 = (int *)FUN_004d58e0();
        local_26c = *piVar6 + 0x170;
        FUN_0042a9e0(local_22c);
        FUN_0042a9c0(local_2bc);
        while (cVar3 = FUN_0040d2d0(local_2bc), cVar3 != '\0') {
          local_218 = (int *)FUN_0042a580();
          if ((*(int *)(*local_218 + 0x200) == 100) && (*(int *)(*local_218 + 0x204) == 100)) {
            (**(code **)(*(int *)*local_218 + 0x84))(2);
          }
          FUN_0042a560();
        }
        FUN_004d58e0();
        FUN_004dcce0();
        local_1f4 = 0;
        local_1bc = 0;
        piVar6 = (int *)game_get_state_ptr_d1520();
        if (*(int *)(*piVar6 + 0xf8) < 0x69) {
          piVar6 = (int *)game_get_state_ptr_d1520();
          if (*(int *)(*piVar6 + 0xf8) < 0x5f) {
            piVar6 = (int *)game_get_state_ptr_d1520();
            if (*(int *)(*piVar6 + 0xf8) < 0x55) {
              piVar6 = (int *)game_get_state_ptr_d1520();
              if (*(int *)(*piVar6 + 0xf8) < 0x46) {
                piVar6 = (int *)game_get_state_ptr_d1520();
                if (*(int *)(*piVar6 + 0xf8) < 0x37) {
                  local_1f4 = 0;
                }
                else {
                  local_1f4 = 5;
                }
              }
              else {
                local_1f4 = 10;
              }
            }
            else {
              local_1f4 = 0xf;
            }
          }
          else {
            local_1f4 = 0x14;
          }
        }
        else {
          local_1f4 = 0x1e;
        }
        piVar6 = (int *)game_get_state_ptr_d1520();
        local_1bc = (*(int *)(*piVar6 + 0x104) * local_1f4) / 100;
        local_1fc = 0;
        local_270 = game_get_player_or_session_blob();
        local_270 = local_270 + 0xb78;
        local_21c = game_loop_helper_018d0();
        local_2c0 = game_loop_helper_018b0();
        for (; local_21c != local_2c0; local_21c = local_21c + 0x94) {
          local_274 = local_21c;
          if (*(int *)(local_21c + 4) != 0) {
            uVar4 = *(undefined4 *)(local_21c + 4);
            game_loop_helper_e9240(uVar4);
            iVar5 = game_loop_helper_cc840(uVar4);
            if (*(int *)(iVar5 + 0xb8) == 2) {
              local_1fc = local_1fc + 2;
            }
            else {
              local_1fc = local_1fc + 1;
            }
          }
        }
        if (local_1fc == 0) {
          local_278 = 0;
        }
        else {
          piVar6 = (int *)game_get_state_ptr_d1520();
          local_278 = (*(int *)(*piVar6 + 0x104) * local_1fc) / 100;
        }
        local_1c8 = local_278;
        local_1ad = '\0';
        local_1dc = 0;
        while( true ) {
          game_loop_helper_e9240();
          uVar7 = FUN_005191f0();
          if (uVar7 <= local_1dc) break;
          piVar6 = (int *)FUN_005191d0(local_1dc);
          if (*piVar6 == DAT_007ca224) {
            pcVar14 = "[elven_guard]";
            iVar5 = FUN_005191d0(local_1dc);
            cVar3 = FUN_00427c60(iVar5 + 0x20,pcVar14);
            if ((cVar3 == '\0') || (iVar5 = game_get_player_or_session_blob(), *(int *)(iVar5 + 0xdc8) != 1)) {
              pcVar14 = "[granfloris]";
              iVar5 = FUN_005191d0(local_1dc);
              cVar3 = FUN_00427c60(iVar5 + 0x20,pcVar14);
              if ((cVar3 == '\0') || (iVar5 = game_get_player_or_session_blob(), *(int *)(iVar5 + 0xdc8) != 2)) {
                pcVar14 = "[sky_catle]";
                iVar5 = FUN_005191d0(local_1dc);
                cVar3 = FUN_00427c60(iVar5 + 0x20,pcVar14);
                if ((cVar3 == '\0') || (iVar5 = game_get_player_or_session_blob(), *(int *)(iVar5 + 0xdc8) != 3)) {
                  pcVar14 = "[behemoth]";
                  iVar5 = FUN_005191d0(local_1dc);
                  cVar3 = FUN_00427c60(iVar5 + 0x20,pcVar14);
                  if ((cVar3 == '\0') || (iVar5 = game_get_player_or_session_blob(), *(int *)(iVar5 + 0xdc8) != 4)) {
                    pcVar14 = "[Alfhlyra]";
                    iVar5 = FUN_005191d0(local_1dc);
                    cVar3 = FUN_00427c60(iVar5 + 0x20,pcVar14);
                    if ((cVar3 == '\0') || (iVar5 = game_get_player_or_session_blob(), *(int *)(iVar5 + 0xdc8) != 5)) {
                      pcVar14 = "[stormpass]";
                      iVar5 = FUN_005191d0(local_1dc);
                      cVar3 = FUN_00427c60(iVar5 + 0x20,pcVar14);
                      if ((cVar3 == '\0') || (iVar5 = game_get_player_or_session_blob(), *(int *)(iVar5 + 0xdc8) != 6))
                      {
                        pcVar14 = "[north_myre]";
                        iVar5 = FUN_005191d0(local_1dc);
                        cVar3 = FUN_00427c60(iVar5 + 0x20,pcVar14);
                        if ((cVar3 != '\0') &&
                           (iVar5 = game_get_player_or_session_blob(), *(int *)(iVar5 + 0xdc8) == 7)) {
                          local_1ad = '\x01';
                        }
                      }
                      else {
                        local_1ad = '\x01';
                      }
                    }
                    else {
                      local_1ad = '\x01';
                    }
                  }
                  else {
                    local_1ad = '\x01';
                  }
                }
                else {
                  local_1ad = '\x01';
                }
              }
              else {
                local_1ad = '\x01';
              }
            }
            else {
              local_1ad = '\x01';
            }
            break;
          }
          local_1dc = local_1dc + 1;
        }
        if (local_1ad == '\0') {
          local_27c = 0;
        }
        else {
          piVar6 = (int *)game_get_state_ptr_d1520();
          local_27c = (*(int *)(*piVar6 + 0x104) * 5) / 100;
        }
        local_1c4 = local_27c;
        local_1c0 = 0;
        iVar5 = game_get_player_or_session_blob();
        if (*(int *)(iVar5 + 0xd74) != 0) {
          uVar4 = 0;
          game_get_player_or_session_blob(0);
          iVar5 = FUN_00405270(uVar4);
          if (0 < *(int *)(iVar5 + 0x20)) {
            uVar4 = 1;
            game_get_player_or_session_blob(1);
            FUN_004ac030(uVar4);
            piVar6 = (int *)game_get_state_ptr_d1520();
            local_1c0 = (*(int *)(*piVar6 + 0x104) * 0xf) / 100;
          }
        }
        local_1b8 = 0;
        iVar5 = game_get_player_or_session_blob();
        if (*(char *)(iVar5 + 0xdb8) != '\0') {
          iVar5 = game_get_player_or_session_blob();
          if (*(int *)(iVar5 + 0xdc4) == 1) {
            game_get_state_ptr_d1520();
            local_1b8 = 0;
          }
          else {
            iVar5 = game_get_player_or_session_blob();
            if (*(int *)(iVar5 + 0xdc4) == 2) {
              piVar6 = (int *)game_get_state_ptr_d1520();
              local_1b8 = (*(int *)(*piVar6 + 0x104) * 0x1e) / 100;
            }
            else {
              iVar5 = game_get_player_or_session_blob();
              if (*(int *)(iVar5 + 0xdc4) == 3) {
                piVar6 = (int *)game_get_state_ptr_d1520();
                local_1b8 = (*(int *)(*piVar6 + 0x104) * 0x32) / 100;
              }
              else {
                iVar5 = game_get_player_or_session_blob();
                if (*(int *)(iVar5 + 0xdc4) == 4) {
                  piVar6 = (int *)game_get_state_ptr_d1520();
                  local_1b8 = (*(int *)(*piVar6 + 0x104) * 0x46) / 100;
                }
              }
            }
          }
        }
        piVar6 = (int *)game_get_state_ptr_d1520();
        iVar5 = *(int *)(*piVar6 + 0x104) + local_1bc + local_1c8 + local_1c4 + local_1c0 +
                local_1b8;
        game_get_player_or_session_blob(iVar5);
        FUN_00457a40(iVar5);
        if ((((local_1c8 < 1) || (local_1c4 < 1)) || (local_1c0 < 1)) || (local_1b8 < 1)) {
          if (((local_1b8 < 1) || (local_1c8 < 1)) || (local_1c0 < 1)) {
            if (((local_1b8 < 1) || (local_1c8 < 1)) || (local_1c4 < 1)) {
              if (((local_1b8 < 1) || (local_1c0 < 1)) || (local_1c4 < 1)) {
                if (((local_1c8 < 1) || (local_1c0 < 1)) || (local_1c4 < 1)) {
                  if ((local_1b8 < 1) || (local_1c8 < 1)) {
                    if ((local_1b8 < 1) || (local_1c0 < 1)) {
                      if ((local_1b8 < 1) || (local_1c4 < 1)) {
                        if ((local_1c8 < 1) || (local_1c0 < 1)) {
                          if ((local_1c8 < 1) || (local_1c4 < 1)) {
                            if ((local_1c0 < 1) || (local_1c4 < 1)) {
                              if (local_1b8 < 1) {
                                if (local_1c8 < 1) {
                                  if (local_1c0 < 1) {
                                    if (local_1c4 < 1) {
                                      local_2a8 = local_1bc;
                                      puVar8 = (undefined4 *)FUN_00401880(&local_2a8,local_2a4);
                                      uVar4 = puVar8[1];
                                      uVar10 = *puVar8;
                                      game_get_state_ptr_d1520(uVar10,uVar4);
                                      FUN_0048b070(uVar10,uVar4);
                                      local_2b0 = 0;
                                      puVar8 = (undefined4 *)FUN_00401880(&local_2b0,local_2ac);
                                      uVar4 = puVar8[1];
                                      uVar10 = *puVar8;
                                      game_get_state_ptr_d1520(uVar10,uVar4);
                                      FUN_0048b070(uVar10,uVar4);
                                    }
                                    else {
                                      local_36c = local_1bc;
                                      local_368 = local_1c4;
                                      puVar8 = (undefined4 *)FUN_00401880(&local_36c,local_364);
                                      uVar4 = puVar8[1];
                                      uVar10 = *puVar8;
                                      game_get_state_ptr_d1520(uVar10,uVar4);
                                      FUN_0048b070(uVar10,uVar4);
                                      local_318 = 0;
                                      local_314 = 7;
                                      puVar8 = (undefined4 *)FUN_00401880(&local_318,local_310);
                                      uVar4 = puVar8[1];
                                      uVar10 = *puVar8;
                                      game_get_state_ptr_d1520(uVar10,uVar4);
                                      FUN_0048b070(uVar10,uVar4);
                                    }
                                  }
                                  else {
                                    local_354 = local_1bc;
                                    local_350 = local_1c0;
                                    puVar8 = (undefined4 *)FUN_00401880(&local_354,local_34c);
                                    uVar4 = puVar8[1];
                                    uVar10 = *puVar8;
                                    game_get_state_ptr_d1520(uVar10,uVar4);
                                    FUN_0048b070(uVar10,uVar4);
                                    local_360 = 0;
                                    local_35c = 4;
                                    puVar8 = (undefined4 *)FUN_00401880(&local_360,local_358);
                                    uVar4 = puVar8[1];
                                    uVar10 = *puVar8;
                                    game_get_state_ptr_d1520(uVar10,uVar4);
                                    FUN_0048b070(uVar10,uVar4);
                                  }
                                }
                                else {
                                  local_324 = local_1bc;
                                  local_320 = local_1c8;
                                  puVar8 = (undefined4 *)FUN_00401880(&local_324,local_31c);
                                  uVar4 = puVar8[1];
                                  uVar10 = *puVar8;
                                  game_get_state_ptr_d1520(uVar10,uVar4);
                                  FUN_0048b070(uVar10,uVar4);
                                  local_348 = 0;
                                  local_344 = 3;
                                  puVar8 = (undefined4 *)FUN_00401880(&local_348,local_340);
                                  uVar4 = puVar8[1];
                                  uVar10 = *puVar8;
                                  game_get_state_ptr_d1520(uVar10,uVar4);
                                  FUN_0048b070(uVar10,uVar4);
                                }
                              }
                              else {
                                local_330 = local_1bc;
                                local_32c = local_1b8;
                                puVar8 = (undefined4 *)FUN_00401880(&local_330,local_328);
                                uVar4 = puVar8[1];
                                uVar10 = *puVar8;
                                game_get_state_ptr_d1520(uVar10,uVar4);
                                FUN_0048b070(uVar10,uVar4);
                                local_33c = 0;
                                local_338 = 1;
                                puVar8 = (undefined4 *)FUN_00401880(&local_33c,local_334);
                                uVar4 = puVar8[1];
                                uVar10 = *puVar8;
                                game_get_state_ptr_d1520(uVar10,uVar4);
                                FUN_0048b070(uVar10,uVar4);
                              }
                            }
                            else {
                              local_64 = local_1bc;
                              local_60 = local_1c0;
                              local_5c = local_1c4;
                              puVar8 = (undefined4 *)FUN_00401880(&local_64,local_58);
                              uVar4 = puVar8[1];
                              uVar10 = *puVar8;
                              game_get_state_ptr_d1520(uVar10,uVar4);
                              FUN_0048b070(uVar10,uVar4);
                              local_94 = 0;
                              local_90 = 4;
                              local_8c = 7;
                              puVar8 = (undefined4 *)FUN_00401880(&local_94,local_88);
                              uVar4 = puVar8[1];
                              uVar10 = *puVar8;
                              game_get_state_ptr_d1520(uVar10,uVar4);
                              FUN_0048b070(uVar10,uVar4);
                            }
                          }
                          else {
                            local_44 = local_1bc;
                            local_40 = local_1c8;
                            local_3c = local_1c4;
                            puVar8 = (undefined4 *)FUN_00401880(&local_44,local_38);
                            uVar4 = puVar8[1];
                            uVar10 = *puVar8;
                            game_get_state_ptr_d1520(uVar10,uVar4);
                            FUN_0048b070(uVar10,uVar4);
                            local_54 = 0;
                            local_50 = 3;
                            local_4c = 7;
                            puVar8 = (undefined4 *)FUN_00401880(&local_54,local_48);
                            uVar4 = puVar8[1];
                            uVar10 = *puVar8;
                            game_get_state_ptr_d1520(uVar10,uVar4);
                            FUN_0048b070(uVar10,uVar4);
                          }
                        }
                        else {
                          local_a4 = local_1bc;
                          local_a0 = local_1c8;
                          local_9c = local_1c0;
                          puVar8 = (undefined4 *)FUN_00401880(&local_a4,local_98);
                          uVar4 = puVar8[1];
                          uVar10 = *puVar8;
                          game_get_state_ptr_d1520(uVar10,uVar4);
                          FUN_0048b070(uVar10,uVar4);
                          local_34 = 0;
                          local_30 = 3;
                          local_2c = 4;
                          puVar8 = (undefined4 *)FUN_00401880(&local_34,local_28);
                          uVar4 = puVar8[1];
                          uVar10 = *puVar8;
                          game_get_state_ptr_d1520(uVar10,uVar4);
                          FUN_0048b070(uVar10,uVar4);
                        }
                      }
                      else {
                        local_c4 = local_1bc;
                        local_c0 = local_1b8;
                        local_bc = local_1c4;
                        puVar8 = (undefined4 *)FUN_00401880(&local_c4,local_b8);
                        uVar4 = puVar8[1];
                        uVar10 = *puVar8;
                        game_get_state_ptr_d1520(uVar10,uVar4);
                        FUN_0048b070(uVar10,uVar4);
                        local_b4 = 0;
                        local_b0 = 1;
                        local_ac = 7;
                        puVar8 = (undefined4 *)FUN_00401880(&local_b4,local_a8);
                        uVar4 = puVar8[1];
                        uVar10 = *puVar8;
                        game_get_state_ptr_d1520(uVar10,uVar4);
                        FUN_0048b070(uVar10,uVar4);
                      }
                    }
                    else {
                      local_24 = local_1bc;
                      local_20 = local_1b8;
                      local_1c = local_1c0;
                      puVar8 = (undefined4 *)FUN_00401880(&local_24,local_18);
                      uVar4 = puVar8[1];
                      uVar10 = *puVar8;
                      game_get_state_ptr_d1520(uVar10,uVar4);
                      FUN_0048b070(uVar10,uVar4);
                      local_d4 = 0;
                      local_d0 = 1;
                      local_cc = 4;
                      puVar8 = (undefined4 *)FUN_00401880(&local_d4,local_c8);
                      uVar4 = puVar8[1];
                      uVar10 = *puVar8;
                      game_get_state_ptr_d1520(uVar10,uVar4);
                      FUN_0048b070(uVar10,uVar4);
                    }
                  }
                  else {
                    local_84 = local_1bc;
                    local_80 = local_1b8;
                    local_7c = local_1c8;
                    puVar8 = (undefined4 *)FUN_00401880(&local_84,local_78);
                    uVar4 = puVar8[1];
                    uVar10 = *puVar8;
                    game_get_state_ptr_d1520(uVar10,uVar4);
                    FUN_0048b070(uVar10,uVar4);
                    local_74 = 0;
                    local_70 = 1;
                    local_6c = 3;
                    puVar8 = (undefined4 *)FUN_00401880(&local_74,local_68);
                    uVar4 = puVar8[1];
                    uVar10 = *puVar8;
                    game_get_state_ptr_d1520(uVar10,uVar4);
                    FUN_0048b070(uVar10,uVar4);
                  }
                }
                else {
                  local_160 = local_1bc;
                  local_15c = local_1c8;
                  local_158 = local_1c0;
                  local_154 = local_1c4;
                  puVar8 = (undefined4 *)FUN_00401880(&local_160,local_150);
                  uVar4 = puVar8[1];
                  uVar10 = *puVar8;
                  game_get_state_ptr_d1520(uVar10,uVar4);
                  FUN_0048b070(uVar10,uVar4);
                  local_174 = 0;
                  local_170 = 3;
                  local_16c = 4;
                  local_168 = 7;
                  puVar8 = (undefined4 *)FUN_00401880(&local_174,local_164);
                  uVar4 = puVar8[1];
                  uVar10 = *puVar8;
                  game_get_state_ptr_d1520(uVar10,uVar4);
                  FUN_0048b070(uVar10,uVar4);
                }
              }
              else {
                local_138 = local_1bc;
                local_134 = local_1b8;
                local_130 = local_1c0;
                local_12c = local_1c4;
                puVar8 = (undefined4 *)FUN_00401880(&local_138,local_128);
                uVar4 = puVar8[1];
                uVar10 = *puVar8;
                game_get_state_ptr_d1520(uVar10,uVar4);
                FUN_0048b070(uVar10,uVar4);
                local_14c = 0;
                local_148 = 1;
                local_144 = 4;
                local_140 = 7;
                puVar8 = (undefined4 *)FUN_00401880(&local_14c,local_13c);
                uVar4 = puVar8[1];
                uVar10 = *puVar8;
                game_get_state_ptr_d1520(uVar10,uVar4);
                FUN_0048b070(uVar10,uVar4);
              }
            }
            else {
              local_110 = local_1bc;
              local_10c = local_1b8;
              local_108 = local_1c8;
              local_104 = local_1c4;
              puVar8 = (undefined4 *)FUN_00401880(&local_110,local_100);
              uVar4 = puVar8[1];
              uVar10 = *puVar8;
              game_get_state_ptr_d1520(uVar10,uVar4);
              FUN_0048b070(uVar10,uVar4);
              local_124 = 0;
              local_120 = 1;
              local_11c = 3;
              local_118 = 7;
              puVar8 = (undefined4 *)FUN_00401880(&local_124,local_114);
              uVar4 = puVar8[1];
              uVar10 = *puVar8;
              game_get_state_ptr_d1520(uVar10,uVar4);
              FUN_0048b070(uVar10,uVar4);
            }
          }
          else {
            local_e8 = local_1bc;
            local_e4 = local_1b8;
            local_e0 = local_1c8;
            local_dc = local_1c0;
            puVar8 = (undefined4 *)FUN_00401880(&local_e8,local_d8);
            uVar4 = puVar8[1];
            uVar10 = *puVar8;
            game_get_state_ptr_d1520(uVar10,uVar4);
            FUN_0048b070(uVar10,uVar4);
            local_fc = 0;
            local_f8 = 1;
            local_f4 = 3;
            local_f0 = 4;
            puVar8 = (undefined4 *)FUN_00401880(&local_fc,local_ec);
            uVar4 = puVar8[1];
            uVar10 = *puVar8;
            game_get_state_ptr_d1520(uVar10,uVar4);
            FUN_0048b070(uVar10,uVar4);
          }
        }
        else {
          local_18c = local_1bc;
          local_188 = local_1b8;
          local_184 = local_1c8;
          local_180 = local_1c0;
          local_17c = local_1c4;
          puVar8 = (undefined4 *)FUN_00401880(&local_18c,local_178);
          uVar4 = puVar8[1];
          uVar10 = *puVar8;
          game_get_state_ptr_d1520(uVar10,uVar4);
          FUN_0048b070(uVar10,uVar4);
          local_1a4 = 0;
          local_1a0 = 1;
          local_19c = 3;
          local_198 = 4;
          local_194 = 7;
          puVar8 = (undefined4 *)FUN_00401880(&local_1a4,local_190);
          uVar4 = puVar8[1];
          uVar10 = *puVar8;
          game_get_state_ptr_d1520(uVar10,uVar4);
          FUN_0048b070(uVar10,uVar4);
        }
        piVar6 = (int *)game_get_state_ptr_d1520();
        iVar5 = *piVar6;
        piVar6 = (int *)game_get_state_ptr_d1520();
        iVar5 = *(int *)(iVar5 + 0xe0);
        iVar1 = *(int *)(*piVar6 + 0xd8);
        piVar6 = (int *)game_get_state_ptr_d1520();
        iVar2 = *(int *)(*piVar6 + 0xdc);
        piVar6 = (int *)game_get_state_ptr_d1520();
        *(int *)(*piVar6 + 0xd4) = iVar5 + iVar1 + iVar2;
        piVar6 = (int *)game_get_state_ptr_d1520();
        iVar5 = *piVar6;
        piVar6 = (int *)game_get_state_ptr_d1520();
        iVar5 = *(int *)(iVar5 + 0xf0);
        iVar1 = *(int *)(*piVar6 + 0xe8);
        piVar6 = (int *)game_get_state_ptr_d1520();
        iVar2 = *(int *)(*piVar6 + 0xec);
        piVar6 = (int *)game_get_state_ptr_d1520();
        *(int *)(*piVar6 + 0xe4) = iVar5 + iVar1 + iVar2;
        piVar6 = (int *)game_get_state_ptr_d1520();
        iVar5 = *piVar6;
        piVar6 = (int *)game_get_state_ptr_d1520();
        iVar5 = *(int *)(iVar5 + 0xd4);
        iVar1 = *(int *)(*piVar6 + 0xe4);
        piVar6 = (int *)game_get_state_ptr_d1520();
        iVar2 = *(int *)(*piVar6 + 0xf4);
        piVar6 = (int *)game_get_state_ptr_d1520();
        *(int *)(*piVar6 + 0xf8) = (iVar5 + iVar1) - iVar2;
        piVar6 = (int *)game_get_state_ptr_d1520();
        iVar5 = *(int *)(*piVar6 + 0xd4);
        piVar6 = (int *)game_get_state_ptr_d1520();
        *(int *)(*piVar6 + 0xfc) = (int)(((double)iVar5 * 100.0) / 70.0);
        piVar6 = (int *)game_get_state_ptr_d1520();
        iVar5 = *(int *)(*piVar6 + 0xe4);
        piVar6 = (int *)game_get_state_ptr_d1520();
        *(int *)(*piVar6 + 0x100) = (int)(((double)iVar5 * 100.0) / 70.0);
        FUN_00643c90();
        FUN_00643f80();
        uVar4 = game_get_player_or_session_blob();
        FUN_004e3cb0(uVar4);
      }
    }
    piVar6 = (int *)FUN_004d58e0();
    local_1e0 = *piVar6 + 0x170;
    cVar3 = FUN_0044e1c0();
    if (cVar3 == '\0') {
      local_1ed = 0;
      FUN_0051bbb0(0);
      FUN_0044e0f0(&local_220);
      while( true ) {
        uVar4 = FUN_0040d9a0(local_3a8);
        cVar3 = FUN_0040d2d0(uVar4);
        if (cVar3 == '\0') break;
        local_1a8 = (int *)FUN_0042a580();
        local_1a8 = (int *)*local_1a8;
        if (local_1a8 == (int *)0x0) {
          local_2c4 = local_220;
          FUN_0044e0a0(local_3a4,local_220);
          break;
        }
        local_1cf = '\0';
        piVar6 = (int *)FUN_004d58e0();
        local_280 = *piVar6 + 0x188;
        FUN_0042a9e0(local_230);
        FUN_0042a9c0(local_2c8);
        while (cVar3 = FUN_0040d2d0(local_2c8), cVar3 != '\0') {
          local_2cc = (int *)FUN_0042a580();
          if ((int *)*local_2cc == local_1a8) {
            local_1cf = '\x01';
            break;
          }
          FUN_0042a560();
        }
        if (local_1cf == '\0') {
          if ((local_1a8[0x72] != -1) &&
             (piVar6 = (int *)(**(code **)(*local_1a8 + 0x9c))(), *piVar6 == local_1a8[0x72])) {
            local_1a8[0x71] = local_1a8[0x70];
            local_1a8[0x72] = -1;
          }
          if ((0 < local_1a8[0x71]) &&
             (local_1a8[0x71] = local_1a8[0x71] - param_1, local_1a8[0x71] < 1)) {
            FUN_0040d5f0();
            local_1a8[0x71] = local_1a8[0x70];
            local_1a8[0x6f] = local_1a8[0x6f] + -1;
            if (local_1a8[0x6f] == 0) {
              local_1a8[0x71] = 0;
              local_1a8[0x6f] = 0;
              local_1a8[0x70] = 0;
            }
          }
          local_288 = (**(code **)(*local_1a8 + 0xa4))();
          cVar3 = FUN_0044e1c0();
          if (cVar3 == '\0') {
            local_1ce = '\0';
            if (((local_1a8[0x81] == 0) && (piVar6 = (int *)game_get_player_or_session_blob(), local_1a8 != piVar6)) &&
               ((char)local_1a8[0x381] == '\0')) {
              local_1ce = '\x01';
            }
            if (local_1ce == '\0') {
              FUN_0044e0f0(local_234);
              while( true ) {
                uVar4 = FUN_0040d9a0(local_3a0);
                cVar3 = FUN_0040d2d0(uVar4);
                if (cVar3 == '\0') break;
                puVar8 = (undefined4 *)FUN_0042a580();
                local_1f8 = (int *)*puVar8;
                local_1cd = '\0';
                piVar6 = (int *)FUN_004d58e0();
                local_284 = *piVar6 + 0x188;
                FUN_0042a9e0(local_238);
                FUN_0042a9c0(local_2d0);
                while (cVar3 = FUN_0040d2d0(local_2d0), cVar3 != '\0') {
                  local_2ec = (int *)FUN_0042a580();
                  if ((int *)*local_2ec == local_1f8) {
                    local_1cd = '\x01';
                    break;
                  }
                  FUN_0042a560();
                }
                if ((local_1cd == '\0') &&
                   (cVar3 = (**(code **)(*local_1a8 + 0x88))(local_1f8), cVar3 != '\0')) {
                  FUN_00630610(local_3c8);
                  FUN_00630610(local_3bc);
                  local_2d4 = (**(code **)(*local_1f8 + 0xa8))();
                  _Vector_val<>();
                  local_1ee = FUN_004d5bf0(local_288,local_3c8,local_1a8[0x7d],local_2d4,local_3bc,
                                           local_1f8[0x7d],&local_378);
                  if (local_1ee != '\0') {
                    FUN_004ddbf0(local_1a8,local_1f8,local_378,local_374,local_370);
                  }
                }
                FUN_0042a560();
              }
            }
          }
          (**(code **)(*local_1a8 + 0xb4))(param_1);
          FUN_006308e0();
          FUN_00630840();
          local_204 = -1;
          local_28c = local_1a8 + 0x22e;
          FUN_0042a9e0(local_23c);
          FUN_0042a9c0(local_30c);
          while (cVar3 = FUN_0040d2d0(local_30c), cVar3 != '\0') {
            local_1cc = (int *)FUN_0042a580();
            cVar3 = FUN_0044e1c0();
            if (cVar3 != '\0') break;
            if (*(char *)(*local_1cc + 0xe0) == '\0') {
              (**(code **)(*local_1a8 + 0x7c))(*local_1cc,param_1);
              cVar3 = FUN_0044e1c0();
              if (cVar3 != '\0') break;
              if (*(char *)(*local_1cc + 0x26) == '\0') {
                local_204 = FUN_0062fe30(param_1);
              }
              else {
                iVar5 = (**(code **)(*local_1a8 + 0x58))();
                *(undefined4 *)(*local_1cc + 0x90) = *(undefined4 *)(iVar5 + 0x90);
                iVar5 = (**(code **)(*local_1a8 + 0x58))();
                *(undefined4 *)(*local_1cc + 0x98) = *(undefined4 *)(iVar5 + 0x98);
              }
            }
            else if (local_1a8[0x84] == 0) {
              (**(code **)(*local_1a8 + 0x7c))(*local_1cc,param_1);
              cVar3 = FUN_0044e1c0();
              if (cVar3 != '\0') break;
              if (*(char *)(*local_1cc + 0x26) == '\0') {
                local_204 = FUN_0062fe30(param_1);
              }
              else {
                iVar5 = (**(code **)(*local_1a8 + 0x58))();
                *(undefined4 *)(*local_1cc + 0x90) = *(undefined4 *)(iVar5 + 0x90);
                iVar5 = (**(code **)(*local_1a8 + 0x58))();
                *(undefined4 *)(*local_1cc + 0x98) = *(undefined4 *)(iVar5 + 0x98);
              }
            }
            if ((local_204 == 1) || (local_204 == 2)) {
              (**(code **)(*local_1a8 + 0xd4))(*local_1cc,*(undefined4 *)(*local_1cc + 0x90));
            }
            if ((local_204 == 3) || (*(char *)(*local_1cc + 0x9c) != '\0')) {
              (**(code **)(*local_1a8 + 0xd8))(*local_1cc);
            }
            cVar3 = FUN_0044e1c0();
            if (cVar3 != '\0') break;
            FUN_0042a560();
          }
        }
        FUN_0042a560();
      }
      FUN_0044e0f0(local_240);
      while( true ) {
        uVar4 = FUN_0040d9a0(local_39c);
        cVar3 = FUN_0040d2d0(uVar4);
        if (cVar3 == '\0') break;
        piVar6 = (int *)FUN_0042a580();
        local_244 = *piVar6;
        if ((*(int *)(local_244 + 0x204) == 100) && (*(int *)(local_244 + 0x200) == 100)) {
          *(undefined1 *)(local_1ac + 0xb3) = 1;
          FUN_0044e040();
        }
        FUN_0042a560();
      }
    }
    local_208 = FUN_00516d20();
    uVar4 = FUN_00516d40();
    FUN_00516be0(local_208,uVar4);
    uVar4 = FUN_00516d30();
    FUN_00516b60(local_208,uVar4);
    cVar3 = FUN_0044e1c0();
    if (cVar3 == '\0') {
      local_224 = -1;
      FUN_0044e0f0(local_1d8);
      while( true ) {
        uVar4 = FUN_0040d9a0(local_398);
        cVar3 = FUN_0040d2d0(uVar4);
        if (cVar3 == '\0') break;
        piVar6 = (int *)FUN_0042a580();
        if (*piVar6 != 0) {
          piVar6 = (int *)FUN_0042a580();
          if (*(int *)(*piVar6 + 0x2c) < 1) {
            puVar8 = (undefined4 *)FUN_0042a580(param_1);
            FUN_005158e0(*puVar8);
            iVar5 = param_1;
            FUN_0042a580(param_1);
            local_224 = FUN_0062fe30(iVar5);
            if ((local_224 == 1) || (local_224 == 2)) {
              piVar6 = (int *)FUN_0042a580();
              puVar8 = (undefined4 *)FUN_0042a580(*(undefined4 *)(*piVar6 + 0x90));
              FUN_00515790(*puVar8);
            }
            if ((local_224 == 3) ||
               (piVar6 = (int *)FUN_0042a580(), *(char *)(*piVar6 + 0x9c) != '\0')) {
              puVar8 = (undefined4 *)FUN_0042a580();
              FUN_005153c0(*puVar8);
            }
          }
          else {
            piVar6 = (int *)FUN_0042a580();
            local_290 = (int *)(*piVar6 + 0x2c);
            *local_290 = *local_290 - param_1;
          }
        }
        FUN_0042a560();
      }
    }
    local_20c = FUN_004aa6e0();
    FUN_0044e0f0(&local_1d4);
    while( true ) {
      uVar4 = FUN_0040d9a0(local_394);
      cVar3 = FUN_0040d2d0(uVar4);
      if (cVar3 == '\0') break;
      piVar6 = (int *)FUN_0042a580();
      local_1b4 = *piVar6;
      if (local_1b4 == 0) {
        local_2dc = local_1d4;
        puVar8 = (undefined4 *)FUN_0044e0a0(local_390,local_1d4);
        local_1d4 = *puVar8;
      }
      else {
        if (*(int *)(local_1b4 + 0x60) != 0) {
          game_get_state_ptr_d1520();
          piVar6 = (int *)FUN_004d58e0();
          local_294 = *piVar6 + 0x170;
          FUN_0042a9e0(local_248);
          FUN_0042a9c0(local_2e0);
          while (cVar3 = FUN_0040d2d0(local_2e0), cVar3 != '\0') {
            local_1e4 = (int *)FUN_0042a580();
            if (*local_1e4 == *(int *)(local_1b4 + 0x60)) {
              if (*(int *)(local_1b4 + 100) != -1) {
                if (*(char *)(local_1b4 + 0x29) == '\0') {
                  *(undefined4 *)(local_1b4 + 0x2c) = *(undefined4 *)(*local_1e4 + 500);
                }
                else {
                  *(int *)(local_1b4 + 0x2c) = -*(int *)(*local_1e4 + 500);
                }
                if (*(int *)(local_1b4 + 100) == 0) {
                  *(undefined4 *)(local_1b4 + 0x68) = *(undefined4 *)(*local_1e4 + 0x224);
                  *(undefined4 *)(local_1b4 + 0x6c) = *(undefined4 *)(*local_1e4 + 0x228);
                  *(undefined4 *)(local_1b4 + 0x70) = *(undefined4 *)(*local_1e4 + 0x22c);
                }
                else if (*(int *)(local_1b4 + 100) == 1) {
                  *(undefined4 *)(local_1b4 + 0x54) = *(undefined4 *)(*local_1e4 + 0x224);
                  *(undefined4 *)(local_1b4 + 0x58) = *(undefined4 *)(*local_1e4 + 0x228);
                  *(undefined4 *)(local_1b4 + 0x5c) = *(undefined4 *)(*local_1e4 + 0x22c);
                }
              }
              break;
            }
            FUN_0042a560();
          }
        }
        if (*(int *)(local_1b4 + 0xa4) == 0) {
          FUN_004a98b0(param_1);
        }
        else if (*(int *)(local_1b4 + 0xa4) == 1) {
          FUN_004aa550();
        }
        cVar3 = FUN_0044e1c0();
        if (cVar3 == '\0') {
          FUN_0044e0f0(&local_1e8);
          while( true ) {
            uVar4 = FUN_0040d9a0(local_38c);
            cVar3 = FUN_0040d2d0(uVar4);
            if (cVar3 == '\0') break;
            piVar6 = (int *)FUN_0042a580();
            local_24c = *piVar6;
            if (local_24c == 0) {
              local_2f0 = local_1e8;
              puVar8 = (undefined4 *)FUN_0044e0a0(local_384,local_1e8);
              local_1e8 = *puVar8;
            }
            else {
              FUN_004a8500(param_1);
              if (*(char *)(local_24c + 0x12d) == '\0') {
                FUN_0042a560();
              }
              else {
                uVar4 = FUN_0042a580();
                FUN_004d1b30(uVar4);
                FUN_00517f40(uVar4);
                local_2e4 = local_1e8;
                puVar8 = (undefined4 *)FUN_0044e0a0(local_388,local_1e8);
                local_1e8 = *puVar8;
              }
            }
          }
          cVar3 = FUN_0044e1c0();
          if (cVar3 == '\0') {
            FUN_0042a560();
          }
          else {
            uVar15 = 0;
            uVar13 = 0xffffffff;
            uVar12 = 0xffffffff;
            uVar11 = 0xffffffff;
            uVar4 = *(undefined4 *)(local_1b4 + 0xa0);
            uVar10 = 0xffffffff;
            iVar5 = local_1b4;
            FUN_004e50c0(local_1b4,0xffffffff,uVar4,0xffffffff,0xffffffff,0xffffffff,0);
            FUN_004e5240(iVar5,uVar10,uVar4,uVar11,uVar12,uVar13,uVar15);
            uVar4 = FUN_0042a580();
            FUN_004d1b30(uVar4);
            FUN_00517c10(uVar4);
            local_2e8 = local_1d4;
            puVar8 = (undefined4 *)FUN_0044e0a0(local_380,local_1d4);
            local_1d4 = *puVar8;
          }
        }
        else {
          uVar15 = 0;
          uVar13 = 0xffffffff;
          uVar12 = 0xffffffff;
          uVar11 = 0xffffffff;
          uVar4 = *(undefined4 *)(local_1b4 + 0xa0);
          uVar10 = 0xffffffff;
          iVar5 = local_1b4;
          FUN_004e50c0(local_1b4,0xffffffff,uVar4,0xffffffff,0xffffffff,0xffffffff,0);
          FUN_004e5240(iVar5,uVar10,uVar4,uVar11,uVar12,uVar13,uVar15);
          uVar4 = FUN_0042a580();
          FUN_004d1b30(uVar4);
          FUN_00517c10(uVar4);
          local_2d8 = local_1d4;
          puVar8 = (undefined4 *)FUN_0044e0a0(local_37c,local_1d4);
          local_1d4 = *puVar8;
        }
      }
    }
    iVar5 = game_get_player_or_session_blob();
    if (*(int *)(iVar5 + 0xdd8) == 4) {
      if (*(char *)(local_1ac + 0xb3) == '\0') {
        piVar6 = (int *)game_get_state_ptr_d1520();
        pcVar14 = (char *)FUN_00489ea0(*piVar6 + 0x17c);
        if (*pcVar14 == '\0') {
          if ((*(char *)(local_1ac + 0x9d4) == '\0') &&
             (iVar5 = game_get_player_or_session_blob(), *(int *)(iVar5 + 0xd74) != 0)) {
            uVar4 = 0;
            game_get_player_or_session_blob(0);
            iVar5 = FUN_00405270(uVar4);
            if (0 < *(int *)(iVar5 + 0x20)) {
              uVar4 = 1;
              game_get_player_or_session_blob(1);
              FUN_004ac030(uVar4);
            }
          }
          piVar6 = (int *)game_get_state_ptr_d1520();
          puVar9 = (undefined1 *)FUN_00489ea0(*piVar6 + 0x17c);
          *puVar9 = 1;
          local_298 = local_1ac + 0x1d4;
          local_228 = (int *)game_loop_helper_018d0();
          local_2b4 = (int *)game_loop_helper_018b0();
          for (; local_228 != local_2b4; local_228 = local_228 + 5) {
            local_250 = local_228;
            if ((*local_228 == *(int *)(local_1ac + 0x180)) &&
               (local_228[1] == *(int *)(local_1ac + 0x184))) {
              local_228[4] = 1;
            }
          }
        }
      }
      else {
        piVar6 = (int *)game_get_state_ptr_d1520();
        puVar9 = (undefined1 *)FUN_00489ea0(*piVar6 + 0x17c);
        *puVar9 = 0;
      }
    }
    if (*(char *)(local_1ac + 0x9d4) != '\0') {
      piVar6 = (int *)game_get_state_ptr_d1520();
      puVar9 = (undefined1 *)FUN_00489ea0(*piVar6 + 0x17c);
      *puVar9 = 0;
    }
    iVar5 = game_get_player_or_session_blob();
    if (*(char *)(iVar5 + 0xe40) != '\0') {
      iVar5 = game_get_player_or_session_blob();
      *(undefined1 *)(iVar5 + 0xe40) = 0;
      uVar4 = game_get_player_or_session_blob();
      net_packet_send_helper_645e0(0x3f7,uVar4);
    }
    iVar5 = game_get_player_or_session_blob();
    if (*(char *)(iVar5 + 0xe42) == '\0') {
      iVar5 = game_get_player_or_session_blob();
      if (*(char *)(iVar5 + 0xe41) != '\0') {
        uVar4 = game_get_player_or_session_blob();
        iVar5 = game_get_player_or_session_blob(uVar4);
        net_packet_send_fixed_0x20(0x2904,5,*(undefined4 *)(iVar5 + 0xabc));
      }
    }
    else {
      uVar4 = game_get_player_or_session_blob();
      iVar5 = game_get_player_or_session_blob(uVar4);
      iVar5 = game_get_player_or_session_blob(9,*(undefined4 *)(iVar5 + 0xac4));
      iVar5 = game_get_player_or_session_blob(4,*(undefined4 *)(iVar5 + 0x1fc));
      net_packet_send_fixed_0x30(0x2904,5,*(undefined4 *)(iVar5 + 0xabc));
    }
    iVar5 = game_get_player_or_session_blob();
    *(undefined1 *)(iVar5 + 0xe42) = 0;
    iVar5 = game_get_player_or_session_blob();
    *(undefined1 *)(iVar5 + 0xe41) = 0;
  }
  ExceptionList = local_10;
  return;
}


/* ==== 004e0a00  FUN_004e0a00  size=55 ==== */

bool FUN_004e0a00(int param_1,int param_2)

{
  return *(int *)(param_1 + 0x1e8) < *(int *)(param_2 + 0x1e8);
}


/* ==== 004e1910  FUN_004e1910  size=739 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_004e1910(void)

{
  undefined4 local_9c;
  undefined4 local_98;
  int local_8c;
  undefined4 local_88;
  int local_84;
  int local_80;
  int *local_7c;
  int *local_78;
  int *local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  int local_60;
  undefined4 local_5c;
  int *local_58;
  int *local_54;
  int *local_50;
  int *local_4c;
  undefined4 local_48;
  int local_44;
  int local_40;
  int *local_3c;
  int *local_38;
  int local_34;
  char local_2d;
  function<void___cdecl(void)> local_2c [24];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00715fcd;
  local_10 = ExceptionList;
  local_14 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_0040d5f0(local_14);
  local_68 = FUN_005bcf10(*(undefined4 *)(local_34 + 0x17c));
  local_70 = FUN_004bcf80(local_2c,0,2);
  local_8 = 0;
  local_6c = local_70;
  local_5c = FUN_00518ab0(local_70);
  local_8 = 0xffffffff;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_2c);
  local_50 = (int *)game_loop_helper_018d0();
  local_74 = (int *)game_loop_helper_018b0();
LAB_004e19d0:
  if (local_50 == local_74) {
    ExceptionList = local_10;
    return;
  }
  local_38 = local_50;
  CMFCToolBarInfo::CMFCToolBarInfo((CMFCToolBarInfo *)&local_9c);
  local_9c = *(undefined4 *)(local_34 + 0x20c + *local_38 * 0x1f0);
  local_98 = *(undefined4 *)(local_34 + 0x210 + *local_38 * 0x1f0);
  local_60 = local_34 + 0x1d4;
  local_54 = (int *)game_loop_helper_018d0();
  local_78 = (int *)game_loop_helper_018b0();
  for (; local_54 != local_78; local_54 = local_54 + 5) {
    local_3c = local_54;
    if (((local_54[2] == *(int *)(local_34 + 0x17c)) && (*local_54 == *(int *)(local_34 + 0x180)))
       && (local_54[1] == *(int *)(local_34 + 0x184))) {
      local_40 = *local_54;
      local_44 = local_54[1];
      local_48 = 0xffffffff;
      if (*local_38 == 0) {
        local_40 = local_40 + -1;
        local_48 = 0;
      }
      else if (*local_38 == 1) {
        local_40 = local_40 + 1;
        local_48 = 1;
      }
      else if (*local_38 == 2) {
        local_44 = local_44 + -1;
        local_48 = 2;
      }
      else if (*local_38 == 3) {
        local_44 = local_44 + 1;
        local_48 = 3;
      }
      local_2d = '\0';
      local_64 = local_34 + 0x1d4;
      local_58 = (int *)game_loop_helper_018d0();
      local_7c = (int *)game_loop_helper_018b0();
      goto LAB_004e1b4b;
    }
  }
  goto LAB_004e19c7;
LAB_004e1b4b:
  if (local_58 == local_7c) goto LAB_004e1b9c;
  local_4c = local_58;
  if ((*local_58 == local_40) && (local_58[1] == local_44)) {
    local_8c = local_58[2];
    local_88 = local_48;
    local_84 = *local_58;
    local_80 = local_58[1];
    local_2d = '\x01';
    goto LAB_004e1b9c;
  }
  local_58 = local_58 + 5;
  goto LAB_004e1b4b;
LAB_004e1b9c:
  if (local_2d == '\0') {
    MessageBoxA((HWND)0x0,&DAT_00750580,(LPCSTR)0x0,0);
  }
LAB_004e19c7:
  FUN_00518b00(&local_9c);
  local_50 = local_50 + 1;
  goto LAB_004e19d0;
}


/* ==== 004e1c00  FUN_004e1c00  size=692 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_004e1c00(void)

{
  uint uVar1;
  int iVar2;
  int in_ECX;
  uint local_34;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_2c [24];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00716015;
  local_10 = ExceptionList;
  local_14 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*(char *)(in_ECX + 0x140) != '\0') {
    FUN_004054a0();
    local_8 = 0;
    FUN_004cc240();
    FUN_004cc240();
    FUN_004cc240();
    FUN_004cc240();
    FUN_004cc240();
    FUN_004cc240();
    FUN_004cc240();
    FUN_004cc240();
    for (local_34 = 0; uVar1 = FUN_00410b30(), local_34 < uVar1; local_34 = local_34 + 1) {
      iVar2 = FUN_00410b30();
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator[]
                (local_2c,(iVar2 + -1) - local_34);
      if (local_34 != 0) {
        FUN_004054a0();
        local_8._0_1_ = 1;
        FUN_004bcf00();
        local_8 = (uint)local_8._1_3_ << 8;
        FUN_004b8ca0();
      }
      FUN_004054a0("sprite/common/etc/combo.img");
      FUN_004baec0();
    }
    local_8 = 0xffffffff;
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>
              ((function<void___cdecl(void)> *)local_2c);
  }
  ExceptionList = local_10;
  return;
}


/* ==== 004e1ec0  FUN_004e1ec0  size=3014 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_004e1ec0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int in_ECX;
  uint local_9c;
  uint local_94;
  uint local_90;
  uint local_8c;
  function<void___cdecl(void)> local_74 [24];
  function<void___cdecl(void)> local_5c [24];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_44 [24];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_2c [24];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00716097;
  local_10 = ExceptionList;
  local_14 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  piVar3 = (int *)game_get_state_ptr_d1520();
  iVar5 = *piVar3;
  piVar3 = (int *)game_get_state_ptr_d1520();
  iVar5 = *(int *)(iVar5 + 0xe0);
  iVar1 = *(int *)(*piVar3 + 0xd8);
  piVar3 = (int *)game_get_state_ptr_d1520();
  iVar2 = *(int *)(*piVar3 + 0xdc);
  piVar3 = (int *)game_get_state_ptr_d1520();
  *(int *)(*piVar3 + 0xd4) = iVar5 + iVar1 + iVar2;
  piVar3 = (int *)game_get_state_ptr_d1520();
  iVar5 = *piVar3;
  piVar3 = (int *)game_get_state_ptr_d1520();
  iVar5 = *(int *)(iVar5 + 0xf0);
  iVar1 = *(int *)(*piVar3 + 0xe8);
  piVar3 = (int *)game_get_state_ptr_d1520();
  iVar2 = *(int *)(*piVar3 + 0xec);
  piVar3 = (int *)game_get_state_ptr_d1520();
  *(int *)(*piVar3 + 0xe4) = iVar5 + iVar1 + iVar2;
  FUN_004054a0("sprite/common/etc/combo.img");
  FUN_004baec0();
  game_get_state_ptr_d1520();
  FUN_0040a850();
  local_8 = 0;
  for (local_8c = 0; uVar4 = FUN_00410b30(), local_8c < uVar4; local_8c = local_8c + 1) {
    iVar5 = FUN_00410b30();
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator[]
              (local_2c,(iVar5 + -1) - local_8c);
    FUN_004054a0();
    local_8._0_1_ = 1;
    FUN_004bcf00();
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_004b8ca0();
    FUN_004054a0("sprite/common/etc/combo.img");
    FUN_004baec0();
  }
  FUN_004054a0("sprite/common/etc/combo.img");
  FUN_004baec0();
  game_get_state_ptr_d1520();
  FUN_0040a850();
  FUN_004053e0();
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_74);
  for (local_90 = 0; uVar4 = FUN_00410b30(), local_90 < uVar4; local_90 = local_90 + 1) {
    iVar5 = FUN_00410b30();
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator[]
              (local_2c,(iVar5 + -1) - local_90);
    FUN_004054a0();
    local_8._0_1_ = 2;
    FUN_004bcf00();
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_004b8ca0();
    FUN_004054a0("sprite/common/etc/combo.img");
    FUN_004baec0();
  }
  game_get_state_ptr_d1520();
  FUN_0040a850();
  FUN_004053e0();
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_5c);
  for (local_94 = 0; uVar4 = FUN_00410b30(), local_94 < uVar4; local_94 = local_94 + 1) {
    iVar5 = FUN_00410b30();
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator[]
              (local_2c,(iVar5 + -1) - local_94);
    FUN_004054a0();
    local_8._0_1_ = 3;
    FUN_004bcf00();
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_004b8ca0();
    FUN_004054a0("sprite/common/etc/combo.img");
    FUN_004baec0();
  }
  piVar3 = (int *)game_get_state_ptr_d1520();
  iVar5 = *piVar3;
  piVar3 = (int *)game_get_state_ptr_d1520();
  iVar5 = *(int *)(iVar5 + 0xd4);
  iVar1 = *(int *)(*piVar3 + 0xe4);
  piVar3 = (int *)game_get_state_ptr_d1520();
  iVar2 = *(int *)(*piVar3 + 0xf4);
  piVar3 = (int *)game_get_state_ptr_d1520();
  *(int *)(*piVar3 + 0xf8) = (iVar5 + iVar1) - iVar2;
  piVar3 = (int *)game_get_state_ptr_d1520();
  if (((((*(int *)(*piVar3 + 0xf8) < 0x69) &&
        (piVar3 = (int *)game_get_state_ptr_d1520(), *(int *)(*piVar3 + 0xf8) < 0x5f)) &&
       (piVar3 = (int *)game_get_state_ptr_d1520(), *(int *)(*piVar3 + 0xf8) < 0x55)) &&
      ((piVar3 = (int *)game_get_state_ptr_d1520(), *(int *)(*piVar3 + 0xf8) < 0x46 &&
       (piVar3 = (int *)game_get_state_ptr_d1520(), *(int *)(*piVar3 + 0xf8) < 0x37)))) &&
     ((piVar3 = (int *)game_get_state_ptr_d1520(), *(int *)(*piVar3 + 0xf8) < 0x2d &&
      (piVar3 = (int *)game_get_state_ptr_d1520(), *(int *)(*piVar3 + 0xf8) < 0x28)))) {
    game_get_state_ptr_d1520();
  }
  FUN_004054a0();
  FUN_004b8ca0();
  FUN_004054a0("sprite/common/etc/combo.img");
  FUN_004baec0();
  FUN_004054a0("sprite/common/etc/combo.img");
  FUN_004baec0();
  local_8 = 0xffffffff;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)local_2c);
  if (*(int *)(in_ECX + 0x158) < 1) {
    if ((DAT_007ca804 != '\0') && (DAT_007c6440 = DAT_007c6440 - param_1, DAT_007c6440 < 1)) {
      DAT_007ca804 = '\0';
      DAT_007ca808 = 0;
    }
  }
  else {
    DAT_007ca808 = DAT_007ca808 + *(int *)(in_ECX + 0x158);
    DAT_007c6440 = 3000;
    DAT_007ca804 = '\x01';
    piVar3 = (int *)game_get_state_ptr_d1520();
    *(int *)(*piVar3 + 0xe0) = *(int *)(*piVar3 + 0xe0) + *(int *)(in_ECX + 0x158);
    piVar3 = (int *)game_get_state_ptr_d1520();
    if (0x1d < *(int *)(*piVar3 + 0xe0)) {
      piVar3 = (int *)game_get_state_ptr_d1520();
      *(undefined4 *)(*piVar3 + 0xe0) = 0x1e;
    }
    *(undefined4 *)(in_ECX + 0x158) = 0;
  }
  if (DAT_007ca804 != '\0') {
    FUN_004054a0("sprite/common/etc/combo.img");
    FUN_004baec0();
    FUN_0040a850();
    local_8 = 4;
    iVar5 = FUN_00410b30();
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator[]
              (local_44,iVar5 - 1);
    for (local_9c = 0; uVar4 = FUN_00410b30(), local_9c < uVar4; local_9c = local_9c + 1) {
      iVar5 = FUN_00410b30();
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator[]
                (local_44,(iVar5 + -1) - local_9c);
      FUN_004054a0();
      local_8._0_1_ = 5;
      FUN_004bcf00();
      local_8._0_1_ = 4;
      FUN_004b8ca0();
      FUN_004054a0();
      local_8._0_1_ = 6;
      FUN_004bcf00();
      local_8._0_1_ = 4;
      FUN_004b8ca0();
      FUN_004054a0();
      local_8._0_1_ = 7;
      FUN_004bcf00();
      local_8 = CONCAT31(local_8._1_3_,4);
      FUN_004b8ca0();
      FUN_004054a0("sprite/common/etc/combo.img");
      FUN_004baec0();
    }
    local_8 = 0xffffffff;
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>
              ((function<void___cdecl(void)> *)local_44);
  }
  ExceptionList = local_10;
  return;
}


/* ==== 004e2a90  FUN_004e2a90  size=4637 ==== */

void FUN_004e2a90(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  undefined4 **ppuVar6;
  undefined1 auStack_168 [20];
  undefined4 uStack_154;
  char *pcStack_150;
  undefined1 auStack_14c [8];
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  char *pcStack_138;
  undefined4 *apuStack_134 [4];
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 *puStack_11c;
  undefined4 *puStack_118;
  undefined4 *puStack_114;
  code *pcStack_110;
  uint uStack_10c;
  undefined1 local_f0 [4];
  undefined1 local_ec [4];
  undefined1 *local_e8;
  undefined4 local_e4;
  undefined1 *local_e0;
  undefined4 local_dc;
  undefined1 *local_d8;
  undefined1 *local_d4;
  undefined4 local_d0;
  undefined1 *local_cc;
  undefined4 local_c8;
  undefined1 *local_c4;
  undefined4 local_c0;
  undefined1 *local_bc;
  int *local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  int *local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  int local_94;
  undefined4 local_90;
  undefined4 local_8c;
  int local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  int local_78;
  undefined4 local_74;
  int local_70;
  int local_6c;
  int local_68;
  undefined4 local_64;
  undefined4 local_60;
  int local_5c;
  undefined4 local_58;
  undefined4 local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  undefined4 local_40;
  int local_3c;
  int local_38;
  int *local_34;
  int *local_30;
  int local_2c;
  int local_28;
  int local_24;
  int *local_20;
  int *local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00716122;
  local_10 = ExceptionList;
  uStack_10c = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_54 = 100;
  pcStack_110 = (code *)&local_54;
  puStack_114 = (undefined4 *)0x4e2adf;
  game_timing_or_delay_helper();
  pcStack_110 = (code *)0x4e2ae6;
  cVar1 = game_frame_should_continue();
  if (cVar1 == '\0') {
    local_58 = 100;
    local_bc = (undefined1 *)&uStack_124;
    apuStack_134[3] = (undefined4 *)&DAT_00750794;
    apuStack_134[2] = (undefined4 *)0x4e2b0d;
    local_c0 = FUN_004054a0();
    local_8 = 0;
    apuStack_134[3] = &local_58;
    apuStack_134[2] = (undefined4 *)0x4e2b28;
    apuStack_134[3] = (undefined4 *)game_timing_or_delay_helper();
    local_8 = 0xffffffff;
    apuStack_134[2] = (undefined4 *)0x4e2b35;
    local_5c = ui_find_widget_by_key();
    local_14 = local_5c;
    if ((local_5c != 0) && (*(char *)(local_5c + 0x51) == '\0')) {
      local_60 = 100;
      pcStack_110 = (code *)&local_60;
      puStack_114 = (undefined4 *)0x4e2b6f;
      pcStack_110 = (code *)game_timing_or_delay_helper();
      puStack_114 = (undefined4 *)0x4e2b75;
      ui_close_matching_widgets();
      local_64 = 100;
      pcStack_110 = (code *)&local_64;
      puStack_114 = (undefined4 *)0x4e2b8d;
      pcStack_110 = (code *)game_timing_or_delay_helper();
      puStack_114 = (undefined4 *)0x0;
      puStack_118 = (undefined4 *)0x0;
      puStack_11c = (undefined4 *)0x0;
      local_c4 = (undefined1 *)apuStack_134;
      pcStack_138 = "";
      uStack_13c = 0x4e2ba9;
      local_c8 = FUN_004054a0();
      local_8 = 1;
      local_cc = auStack_14c;
      pcStack_150 = &DAT_00750800;
      uStack_154 = 0x4e2bcb;
      local_d0 = FUN_004054a0();
      local_8 = CONCAT31(local_8._1_3_,2);
      pcStack_150 = (char *)0x30;
      local_d4 = auStack_168;
      FUN_004054a0(&DAT_007507e0);
      local_8 = 0xffffffff;
      local_68 = FUN_00661cc0(0,0);
      *(undefined4 *)(local_68 + 0x54) = 0x140;
      *(undefined4 *)(local_68 + 0x58) = 0xf0;
      *(undefined4 *)(local_68 + 0xadc) = 0;
      *(undefined4 *)(local_68 + 0xad8) = 0;
      *(undefined4 *)(local_68 + 0xae4) = 5000;
      *(undefined4 *)(local_68 + 0xaec) = 1000;
      *(undefined4 *)(local_68 + 0xae8) = 1000;
      pcStack_110 = (code *)0x4e2c62;
      local_14 = local_68;
      puVar2 = (undefined4 *)game_get_state_ptr_d1520();
      pcStack_110 = (code *)(*(int *)*puVar2 + 0xc);
      puStack_114 = (undefined4 *)0x4e2c6f;
      pcStack_110 = (code *)FUN_005e9250();
      *(undefined1 *)(local_14 + 0x1d4) = 1;
      puStack_114 = (undefined4 *)0x4e2c91;
      local_40 = pcStack_110;
      FUN_00426840();
      pcStack_110 = (code *)&local_40;
      puStack_114 = (undefined4 *)0x4e2c9a;
      FUN_004d1b30();
      puStack_114 = (undefined4 *)0x4e2ca1;
      FUN_00517ee0();
      if (*(char *)(local_18 + 0x44) == '\0') {
        if (*(int *)(local_18 + 0x16c) == 0x29) {
          *(undefined4 *)(local_14 + 0x1a8) = 5;
          pcStack_110 = (code *)0x5;
          puStack_114 = (undefined4 *)0x4e2fb1;
          FUN_0040d4e0();
          local_48 = local_14 + 0x19c;
          pcStack_110 = (code *)0x4e2fc6;
          local_2c = game_loop_helper_018d0();
          pcStack_110 = (code *)0x4e2fd1;
          local_70 = game_loop_helper_018b0();
          for (; local_2c != local_70; local_2c = local_2c + 0x134) {
            local_3c = local_2c;
            *(int *)(local_2c + 0x40) = -*(int *)(local_14 + 0x54);
            *(int *)(local_2c + 0x44) = -*(int *)(local_14 + 0x58);
            pcStack_110 = (code *)0x1;
            puStack_114 = (undefined4 *)0x4e3019;
            FUN_0040d730();
          }
          pcStack_110 = (code *)0x750918;
          puStack_114 = (undefined4 *)0x0;
          puStack_118 = (undefined4 *)0x0;
          puStack_11c = (undefined4 *)0x4e3033;
          FUN_0040d4b0();
          puStack_118 = (undefined4 *)0x4e303d;
          FUN_0040d680();
          puStack_114 = (undefined4 *)0x4e3047;
          FUN_004053a0();
          pcStack_110 = (code *)0x0;
          puStack_114 = (undefined4 *)0x0;
          puStack_118 = (undefined4 *)0x4e3059;
          FUN_0040d4b0();
          puStack_114 = (undefined4 *)0x4e3063;
          iVar3 = FUN_0040d680();
          *(undefined4 *)(iVar3 + 0x28) = 0xb4;
          pcStack_110 = (code *)0x750930;
          puStack_114 = (undefined4 *)0x0;
          puStack_118 = (undefined4 *)0x1;
          puStack_11c = (undefined4 *)0x4e3081;
          FUN_0040d4b0();
          puStack_118 = (undefined4 *)0x4e308b;
          FUN_0040d680();
          puStack_114 = (undefined4 *)0x4e3095;
          FUN_004053a0();
          pcStack_110 = (code *)0x0;
          puStack_114 = (undefined4 *)0x1;
          puStack_118 = (undefined4 *)0x4e30a7;
          FUN_0040d4b0();
          puStack_114 = (undefined4 *)0x4e30b1;
          iVar3 = FUN_0040d680();
          *(undefined1 *)(iVar3 + 0x20) = 1;
          pcStack_110 = (code *)0x0;
          puStack_114 = (undefined4 *)0x1;
          puStack_118 = (undefined4 *)0x4e30c7;
          FUN_0040d4b0();
          puStack_114 = (undefined4 *)0x4e30d1;
          iVar3 = FUN_0040d680();
          *(undefined1 *)(iVar3 + 0x3d) = 3;
          pcStack_110 = (code *)0x0;
          puStack_114 = (undefined4 *)0x1;
          puStack_118 = (undefined4 *)0x4e30e7;
          FUN_0040d4b0();
          puStack_114 = (undefined4 *)0x4e30f1;
          iVar3 = FUN_0040d680();
          *(undefined4 *)(iVar3 + 0x28) = 100;
          pcStack_110 = (code *)0x7508c0;
          puStack_114 = (undefined4 *)0x0;
          puStack_118 = (undefined4 *)0x2;
          puStack_11c = (undefined4 *)0x4e310f;
          FUN_0040d4b0();
          puStack_118 = (undefined4 *)0x4e3119;
          FUN_0040d680();
          puStack_114 = (undefined4 *)0x4e3123;
          FUN_004053a0();
          pcStack_110 = (code *)0x0;
          puStack_114 = (undefined4 *)0x2;
          puStack_118 = (undefined4 *)0x4e3135;
          FUN_0040d4b0();
          puStack_114 = (undefined4 *)0x4e313f;
          iVar3 = FUN_0040d680();
          *(undefined1 *)(iVar3 + 0x20) = 0;
          pcStack_110 = (code *)0x0;
          puStack_114 = (undefined4 *)0x2;
          puStack_118 = (undefined4 *)0x4e3155;
          FUN_0040d4b0();
          puStack_114 = (undefined4 *)0x4e315f;
          iVar3 = FUN_0040d680();
          *(undefined4 *)(iVar3 + 0x28) = 100;
          pcStack_110 = (code *)0x7508ec;
          puStack_114 = (undefined4 *)0x0;
          puStack_118 = (undefined4 *)0x3;
          puStack_11c = (undefined4 *)0x4e317d;
          FUN_0040d4b0();
          puStack_118 = (undefined4 *)0x4e3187;
          FUN_0040d680();
          puStack_114 = (undefined4 *)0x4e3191;
          FUN_004053a0();
          pcStack_110 = (code *)0x0;
          puStack_114 = (undefined4 *)0x3;
          puStack_118 = (undefined4 *)0x4e31a3;
          FUN_0040d4b0();
          puStack_114 = (undefined4 *)0x4e31ad;
          iVar3 = FUN_0040d680();
          *(undefined1 *)(iVar3 + 0x20) = 1;
          pcStack_110 = (code *)0x0;
          puStack_114 = (undefined4 *)0x3;
          puStack_118 = (undefined4 *)0x4e31c3;
          FUN_0040d4b0();
          puStack_114 = (undefined4 *)0x4e31cd;
          iVar3 = FUN_0040d680();
          *(undefined1 *)(iVar3 + 0x3d) = 3;
          pcStack_110 = (code *)0x0;
          puStack_114 = (undefined4 *)0x3;
          puStack_118 = (undefined4 *)0x4e31e3;
          FUN_0040d4b0();
          puStack_114 = (undefined4 *)0x4e31ed;
          iVar3 = FUN_0040d680();
          *(undefined4 *)(iVar3 + 0x28) = 0xf0;
          pcStack_110 = (code *)0x75096c;
          puStack_114 = (undefined4 *)0x0;
          puStack_118 = (undefined4 *)0x4;
          puStack_11c = (undefined4 *)0x4e320b;
          FUN_0040d4b0();
          puStack_118 = (undefined4 *)0x4e3215;
          FUN_0040d680();
          puStack_114 = (undefined4 *)0x4e321f;
          FUN_004053a0();
          pcStack_110 = (code *)0x0;
          puStack_114 = (undefined4 *)0x4;
          puStack_118 = (undefined4 *)0x4e3231;
          FUN_0040d4b0();
          puStack_114 = (undefined4 *)0x4e323b;
          iVar3 = FUN_0040d680();
          *(undefined1 *)(iVar3 + 0x20) = 0;
          pcStack_110 = (code *)0x0;
          puStack_114 = (undefined4 *)0x4;
          puStack_118 = (undefined4 *)0x4e3251;
          FUN_0040d4b0();
          puStack_114 = (undefined4 *)0x4e325b;
          iVar3 = FUN_0040d680();
          *(undefined4 *)(iVar3 + 0x28) = 0xf0;
        }
      }
      else {
        *(undefined4 *)(local_14 + 0x1a8) = 5;
        pcStack_110 = (code *)0x5;
        puStack_114 = (undefined4 *)0x4e2cce;
        FUN_0040d4e0();
        local_44 = local_14 + 0x19c;
        pcStack_110 = (code *)0x4e2ce3;
        local_28 = game_loop_helper_018d0();
        pcStack_110 = (code *)0x4e2cee;
        local_6c = game_loop_helper_018b0();
        for (; local_28 != local_6c; local_28 = local_28 + 0x134) {
          local_38 = local_28;
          *(int *)(local_28 + 0x40) = -*(int *)(local_14 + 0x54);
          *(int *)(local_28 + 0x44) = -*(int *)(local_14 + 0x58);
          pcStack_110 = (code *)0x1;
          puStack_114 = (undefined4 *)0x4e2d36;
          FUN_0040d730();
        }
        pcStack_110 = (code *)0x7507e8;
        puStack_114 = (undefined4 *)0x0;
        puStack_118 = (undefined4 *)0x0;
        puStack_11c = (undefined4 *)0x4e2d50;
        FUN_0040d4b0();
        puStack_118 = (undefined4 *)0x4e2d5a;
        FUN_0040d680();
        puStack_114 = (undefined4 *)0x4e2d64;
        FUN_004053a0();
        pcStack_110 = (code *)0x0;
        puStack_114 = (undefined4 *)0x0;
        puStack_118 = (undefined4 *)0x4e2d76;
        FUN_0040d4b0();
        puStack_114 = (undefined4 *)0x4e2d80;
        iVar3 = FUN_0040d680();
        *(undefined4 *)(iVar3 + 0x28) = 0xb4;
        pcStack_110 = (code *)0x750868;
        puStack_114 = (undefined4 *)0x0;
        puStack_118 = (undefined4 *)0x1;
        puStack_11c = (undefined4 *)0x4e2d9e;
        FUN_0040d4b0();
        puStack_118 = (undefined4 *)0x4e2da8;
        FUN_0040d680();
        puStack_114 = (undefined4 *)0x4e2db2;
        FUN_004053a0();
        pcStack_110 = (code *)0x0;
        puStack_114 = (undefined4 *)0x1;
        puStack_118 = (undefined4 *)0x4e2dc4;
        FUN_0040d4b0();
        puStack_114 = (undefined4 *)0x4e2dce;
        iVar3 = FUN_0040d680();
        *(undefined1 *)(iVar3 + 0x20) = 5;
        pcStack_110 = (code *)0x0;
        puStack_114 = (undefined4 *)0x1;
        puStack_118 = (undefined4 *)0x4e2de4;
        FUN_0040d4b0();
        puStack_114 = (undefined4 *)0x4e2dee;
        iVar3 = FUN_0040d680();
        *(undefined1 *)(iVar3 + 0x3d) = 3;
        pcStack_110 = (code *)0x0;
        puStack_114 = (undefined4 *)0x1;
        puStack_118 = (undefined4 *)0x4e2e04;
        FUN_0040d4b0();
        puStack_114 = (undefined4 *)0x4e2e0e;
        iVar3 = FUN_0040d680();
        *(undefined4 *)(iVar3 + 0x28) = 100;
        pcStack_110 = (code *)0x750894;
        puStack_114 = (undefined4 *)0x0;
        puStack_118 = (undefined4 *)0x2;
        puStack_11c = (undefined4 *)0x4e2e2c;
        FUN_0040d4b0();
        puStack_118 = (undefined4 *)0x4e2e36;
        FUN_0040d680();
        puStack_114 = (undefined4 *)0x4e2e40;
        FUN_004053a0();
        pcStack_110 = (code *)0x0;
        puStack_114 = (undefined4 *)0x2;
        puStack_118 = (undefined4 *)0x4e2e52;
        FUN_0040d4b0();
        puStack_114 = (undefined4 *)0x4e2e5c;
        iVar3 = FUN_0040d680();
        *(undefined1 *)(iVar3 + 0x20) = 4;
        pcStack_110 = (code *)0x0;
        puStack_114 = (undefined4 *)0x2;
        puStack_118 = (undefined4 *)0x4e2e72;
        FUN_0040d4b0();
        puStack_114 = (undefined4 *)0x4e2e7c;
        iVar3 = FUN_0040d680();
        *(undefined4 *)(iVar3 + 0x28) = 100;
        pcStack_110 = (code *)0x750810;
        puStack_114 = (undefined4 *)0x0;
        puStack_118 = (undefined4 *)0x3;
        puStack_11c = (undefined4 *)0x4e2e9a;
        FUN_0040d4b0();
        puStack_118 = (undefined4 *)0x4e2ea4;
        FUN_0040d680();
        puStack_114 = (undefined4 *)0x4e2eae;
        FUN_004053a0();
        pcStack_110 = (code *)0x0;
        puStack_114 = (undefined4 *)0x3;
        puStack_118 = (undefined4 *)0x4e2ec0;
        FUN_0040d4b0();
        puStack_114 = (undefined4 *)0x4e2eca;
        iVar3 = FUN_0040d680();
        *(undefined1 *)(iVar3 + 0x20) = 5;
        pcStack_110 = (code *)0x0;
        puStack_114 = (undefined4 *)0x3;
        puStack_118 = (undefined4 *)0x4e2ee0;
        FUN_0040d4b0();
        puStack_114 = (undefined4 *)0x4e2eea;
        iVar3 = FUN_0040d680();
        *(undefined1 *)(iVar3 + 0x3d) = 3;
        pcStack_110 = (code *)0x0;
        puStack_114 = (undefined4 *)0x3;
        puStack_118 = (undefined4 *)0x4e2f00;
        FUN_0040d4b0();
        puStack_114 = (undefined4 *)0x4e2f0a;
        iVar3 = FUN_0040d680();
        *(undefined4 *)(iVar3 + 0x28) = 0xf0;
        pcStack_110 = (code *)0x75083c;
        puStack_114 = (undefined4 *)0x0;
        puStack_118 = (undefined4 *)0x4;
        puStack_11c = (undefined4 *)0x4e2f28;
        FUN_0040d4b0();
        puStack_118 = (undefined4 *)0x4e2f32;
        FUN_0040d680();
        puStack_114 = (undefined4 *)0x4e2f3c;
        FUN_004053a0();
        pcStack_110 = (code *)0x0;
        puStack_114 = (undefined4 *)0x4;
        puStack_118 = (undefined4 *)0x4e2f4e;
        FUN_0040d4b0();
        puStack_114 = (undefined4 *)0x4e2f58;
        iVar3 = FUN_0040d680();
        *(undefined1 *)(iVar3 + 0x20) = 4;
        pcStack_110 = (code *)0x0;
        puStack_114 = (undefined4 *)0x4;
        puStack_118 = (undefined4 *)0x4e2f6e;
        FUN_0040d4b0();
        puStack_114 = (undefined4 *)0x4e2f78;
        iVar3 = FUN_0040d680();
        *(undefined4 *)(iVar3 + 0x28) = 0xf0;
      }
      local_74 = 100;
      pcStack_110 = (code *)&local_74;
      puStack_114 = (undefined4 *)0x4e3277;
      pcStack_110 = (code *)game_timing_or_delay_helper();
      puStack_114 = (undefined4 *)0x0;
      puStack_118 = (undefined4 *)0x0;
      puStack_11c = (undefined4 *)0x0;
      local_d8 = (undefined1 *)apuStack_134;
      pcStack_138 = "Black";
      uStack_13c = 0x4e3293;
      local_dc = FUN_004054a0();
      local_8 = 3;
      local_e0 = auStack_14c;
      pcStack_150 = "Black";
      uStack_154 = 0x4e32b5;
      local_e4 = FUN_004054a0();
      local_8 = CONCAT31(local_8._1_3_,4);
      pcStack_150 = (char *)0x2d;
      local_e8 = auStack_168;
      FUN_004054a0(&DAT_00750964);
      local_8 = 0xffffffff;
      local_78 = FUN_00661cc0(0,0);
      *(undefined4 *)(local_78 + 0xaec) = 3000;
      *(undefined4 *)(local_78 + 0xae8) = 3000;
      local_7c = 100;
      local_80 = 100;
      pcStack_110 = FUN_006574e0;
      puStack_114 = (undefined4 *)local_ec;
      puStack_118 = &local_7c;
      puStack_11c = (undefined4 *)0x4e3334;
      local_14 = local_78;
      game_timing_or_delay_helper();
      puStack_118 = (undefined4 *)0x4e333b;
      puStack_114 = (undefined4 *)FUN_00402170();
      puStack_114 = (undefined4 *)*puStack_114;
      puStack_118 = (undefined4 *)local_f0;
      puStack_11c = &local_80;
      uStack_120 = 0x4e3353;
      game_timing_or_delay_helper();
      puStack_11c = (undefined4 *)0x4e335a;
      puStack_118 = (undefined4 *)FUN_004021b0();
      puStack_118 = (undefined4 *)*puStack_118;
      puStack_11c = (undefined4 *)0x4e3362;
      FUN_00405d30();
      pcStack_110 = (code *)DAT_007ca768;
      puStack_114 = (undefined4 *)DAT_007ca764;
      puVar2 = &DAT_007ca70c;
      ppuVar6 = apuStack_134;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *ppuVar6 = (undefined4 *)*puVar2;
        puVar2 = puVar2 + 1;
        ppuVar6 = ppuVar6 + 1;
      }
      pcStack_138 = (char *)0x4e3388;
      FUN_0065e180();
    }
    local_84 = 100;
    apuStack_134[3] = (undefined4 *)&DAT_007509ac;
    apuStack_134[2] = (undefined4 *)0x4e33a7;
    FUN_004054a0();
    local_8 = 5;
    apuStack_134[3] = &local_84;
    apuStack_134[2] = (undefined4 *)0x4e33c2;
    apuStack_134[3] = (undefined4 *)game_timing_or_delay_helper();
    local_8 = 0xffffffff;
    apuStack_134[2] = (undefined4 *)0x4e33cf;
    local_88 = ui_find_widget_by_key();
    local_14 = local_88;
    if ((local_88 != 0) && (*(char *)(local_88 + 0x51) == '\0')) {
      local_8c = 100;
      pcStack_110 = (code *)&local_8c;
      puStack_114 = (undefined4 *)0x4e340d;
      pcStack_110 = (code *)game_timing_or_delay_helper();
      puStack_114 = (undefined4 *)0x4e3413;
      ui_close_matching_widgets();
    }
    local_90 = 100;
    apuStack_134[3] = (undefined4 *)&DAT_007509bc;
    apuStack_134[2] = (undefined4 *)0x4e3435;
    FUN_004054a0();
    local_8 = 6;
    apuStack_134[3] = &local_90;
    apuStack_134[2] = (undefined4 *)0x4e3453;
    apuStack_134[3] = (undefined4 *)game_timing_or_delay_helper();
    local_8 = 0xffffffff;
    apuStack_134[2] = (undefined4 *)0x4e3460;
    local_94 = ui_find_widget_by_key();
    local_14 = local_94;
    if ((local_94 != 0) && (*(char *)(local_94 + 0x51) == '\0')) {
      local_98 = 100;
      pcStack_110 = (code *)&local_98;
      puStack_114 = (undefined4 *)0x4e349e;
      pcStack_110 = (code *)game_timing_or_delay_helper();
      puStack_114 = (undefined4 *)0x4e34a4;
      ui_close_matching_widgets();
      pcStack_110 = (code *)0x0;
      puStack_114 = (undefined4 *)0xbb8;
      puStack_118 = (undefined4 *)0x4e34b3;
      ui_command_dispatch();
    }
  }
  local_9c = 100;
  pcStack_110 = (code *)&local_9c;
  puStack_114 = (undefined4 *)0x4e34de;
  game_timing_or_delay_helper();
  pcStack_110 = (code *)0x4e34e5;
  cVar1 = game_frame_should_continue();
  if (cVar1 == '\0') {
    if (*(char *)(local_18 + 0xb0) == '\0') {
      if (*(char *)(local_18 + 0xb1) == '\0') {
        if (*(char *)(local_18 + 0xb2) != '\0') {
          local_a8 = 100;
          pcStack_110 = (code *)0x0;
          puStack_114 = &local_a8;
          puStack_118 = (undefined4 *)0x4e35ce;
          game_timing_or_delay_helper();
          puStack_114 = (undefined4 *)0x4e35d5;
          piVar4 = (int *)game_get_flag_object_01a70();
          if (*(int *)(*piVar4 + 0xadc) < 1) {
            *(undefined1 *)(local_18 + 0xb2) = 0;
            pcStack_110 = (code *)0x0;
            puStack_114 = (undefined4 *)0xdac;
            puStack_118 = (undefined4 *)0x4e35f6;
            ui_command_dispatch();
          }
        }
      }
      else {
        local_a4 = 100;
        pcStack_110 = (code *)0x0;
        puStack_114 = &local_a4;
        puStack_118 = (undefined4 *)0x4e3576;
        game_timing_or_delay_helper();
        puStack_114 = (undefined4 *)0x4e357d;
        piVar4 = (int *)game_get_flag_object_01a70();
        if (*(int *)(*piVar4 + 0xadc) < 1) {
          *(undefined1 *)(local_18 + 0xb1) = 0;
          pcStack_110 = (code *)0x0;
          puStack_114 = (undefined4 *)0xd48;
          puStack_118 = (undefined4 *)0x4e359e;
          ui_command_dispatch();
        }
      }
    }
    else {
      local_a0 = 100;
      pcStack_110 = (code *)0x0;
      puStack_114 = &local_a0;
      puStack_118 = (undefined4 *)0x4e351b;
      game_timing_or_delay_helper();
      puStack_114 = (undefined4 *)0x4e3522;
      piVar4 = (int *)game_get_flag_object_01a70();
      if (*(int *)(*piVar4 + 0xadc) < 1) {
        *(undefined1 *)(local_18 + 0xb0) = 0;
        pcStack_110 = (code *)0x0;
        puStack_114 = (undefined4 *)0xce4;
        puStack_118 = (undefined4 *)0x4e3543;
        ui_command_dispatch();
      }
    }
  }
  if (param_1 != 0) {
    pcStack_110 = (code *)0x4e3609;
    iVar3 = game_get_player_or_session_blob();
    if ((param_1 == iVar3) && (*(int *)(param_1 + 0xdd8) == 4)) {
      pcStack_110 = (code *)0x4e3629;
      piVar4 = (int *)net_disconnect_flag_ptr();
      if (*piVar4 < 1) {
        if (*(char *)(param_1 + 0xdb8) == '\0') {
          *(undefined4 *)(local_18 + 0x98) = 0;
          if (*(int *)(local_18 + 0xa0) == -1) {
            pcStack_110 = (code *)(local_18 + 0x17c);
            puStack_114 = (undefined4 *)0x4e367a;
            pcVar5 = (char *)FUN_00489ea0();
            if (*pcVar5 != '\0') {
              local_4c = local_18 + 0x1e0;
              pcStack_110 = (code *)0x4e3699;
              local_30 = (int *)game_loop_helper_018d0();
              pcStack_110 = (code *)0x4e36a4;
              local_ac = (int *)game_loop_helper_018b0();
              for (; local_30 != local_ac; local_30 = local_30 + 8) {
                local_1c = local_30;
                if (local_30[5] == 1) {
                  if (((*(int *)(param_1 + 0x224) + -0x40 <= *local_30 + -0x30) &&
                      (*local_30 + -0x30 <= *(int *)(param_1 + 0x224) + 0x40)) &&
                     ((*(int *)(param_1 + 0x228) + -0x30 <= local_30[1] + -0x24 &&
                      (local_30[1] + -0x24 <= *(int *)(param_1 + 0x228) + 0x30)))) {
                    *(undefined4 *)(local_18 + 0x98) = 1;
                  }
                }
                else if (*(int *)(param_1 + 0xdc8) < 5) {
                  if (((*(int *)(param_1 + 0x224) + -0x40 <= *local_30) &&
                      (*local_30 <= *(int *)(param_1 + 0x224) + 0x40)) &&
                     ((*(int *)(param_1 + 0x228) + -0x30 <= local_30[1] + -0x18 &&
                      (local_30[1] + -0x18 <= *(int *)(param_1 + 0x228) + 0x30)))) {
                    *(undefined4 *)(local_18 + 0x98) = 1;
                  }
                }
                else if ((((*(int *)(param_1 + 0x224) + -0x40 <= *local_30) &&
                          (*local_30 <= *(int *)(param_1 + 0x224) + 0x40)) &&
                         (*(int *)(param_1 + 0x228) + -0x30 <= local_30[1])) &&
                        (local_30[1] <= *(int *)(param_1 + 0x228) + 0x30)) {
                  *(undefined4 *)(local_18 + 0x98) = 1;
                }
                if ((*(int *)(local_18 + 0x98) == 1) && (*(int *)(local_18 + 0x9c) == 0)) {
                  *(int *)(local_18 + 0xa0) = local_30[4];
                  *(int *)(local_18 + 0xac) = local_30[5];
                  *(undefined4 *)(local_18 + 0xa4) = *(undefined4 *)(local_18 + 0x180);
                  *(undefined4 *)(local_18 + 0xa8) = *(undefined4 *)(local_18 + 0x184);
                  *(int *)(local_18 + 0x180) = local_30[6];
                  *(int *)(local_18 + 0x184) = local_30[7];
                  *(undefined4 *)(local_18 + 0x98) = 1;
                  *(undefined4 *)(local_18 + 0x9c) = 1;
                  pcStack_110 = (code *)0x4e38b4;
                  local_24 = FUN_00657510();
                  *(undefined4 *)(local_24 + 0xad4) = 0;
                  *(undefined4 *)(local_24 + 0xadc) = 100;
                  *(undefined4 *)(local_24 + 0xad8) = 100;
                  *(undefined4 *)(local_24 + 0xae8) = 100;
                  *(undefined4 *)(local_24 + 0xaec) = 100;
                  break;
                }
              }
            }
          }
          *(undefined4 *)(local_18 + 0x9c) = *(undefined4 *)(local_18 + 0x98);
          if (*(int *)(local_18 + 0xa0) != -1) {
            local_b0 = 100;
            pcStack_110 = (code *)&local_b0;
            puStack_114 = (undefined4 *)0x4e3938;
            game_timing_or_delay_helper();
            pcStack_110 = (code *)0x4e393f;
            cVar1 = game_frame_should_continue();
            if (cVar1 == '\0') {
              local_b4 = 100;
              pcStack_110 = (code *)0x0;
              puStack_114 = &local_b4;
              puStack_118 = (undefined4 *)0x4e3963;
              game_timing_or_delay_helper();
              puStack_114 = (undefined4 *)0x4e396a;
              piVar4 = (int *)game_get_flag_object_01a70();
              if (*(int *)(*piVar4 + 0xadc) < 1) {
                pcStack_110 = *(code **)(local_18 + 0xac);
                puStack_114 = *(undefined4 **)(local_18 + 0xa0);
                puStack_118 = (undefined4 *)param_1;
                puStack_11c = (undefined4 *)0x4e3995;
                FUN_004ed450();
              }
            }
          }
        }
        else {
          *(undefined4 *)(local_18 + 0x98) = 0;
          if (*(int *)(local_18 + 0xa0) == -1) {
            pcStack_110 = (code *)(local_18 + 0x17c);
            puStack_114 = (undefined4 *)0x4e39d0;
            pcVar5 = (char *)FUN_00489ea0();
            if (*pcVar5 != '\0') {
              local_50 = local_18 + 0x1e0;
              pcStack_110 = (code *)0x4e39ee;
              local_34 = (int *)game_loop_helper_018d0();
              pcStack_110 = (code *)0x4e39f9;
              local_b8 = (int *)game_loop_helper_018b0();
              for (; local_34 != local_b8; local_34 = local_34 + 8) {
                local_20 = local_34;
                if (local_34[5] == 1) {
                  if (((*(int *)(param_1 + 0x224) + -0x40 <= *local_34 + -0x30) &&
                      (*local_34 + -0x30 <= *(int *)(param_1 + 0x224) + 0x40)) &&
                     ((*(int *)(param_1 + 0x228) + -0x30 <= local_34[1] + -0x24 &&
                      (local_34[1] + -0x24 <= *(int *)(param_1 + 0x228) + 0x30)))) {
                    *(undefined4 *)(local_18 + 0x98) = 1;
                  }
                }
                else if (*(int *)(param_1 + 0xdc8) < 5) {
                  if (((*(int *)(param_1 + 0x224) + -0x40 <= *local_34) &&
                      (*local_34 <= *(int *)(param_1 + 0x224) + 0x40)) &&
                     ((*(int *)(param_1 + 0x228) + -0x30 <= local_34[1] + -0x18 &&
                      (local_34[1] + -0x18 <= *(int *)(param_1 + 0x228) + 0x30)))) {
                    *(undefined4 *)(local_18 + 0x98) = 1;
                  }
                }
                else if ((((*(int *)(param_1 + 0x224) + -0x40 <= *local_34) &&
                          (*local_34 <= *(int *)(param_1 + 0x224) + 0x40)) &&
                         (*(int *)(param_1 + 0x228) + -0x30 <= local_34[1])) &&
                        (local_34[1] <= *(int *)(param_1 + 0x228) + 0x30)) {
                  *(undefined4 *)(local_18 + 0x98) = 1;
                }
                if ((*(int *)(local_18 + 0x98) == 1) && (*(int *)(local_18 + 0x9c) == 0)) {
                  *(int *)(local_18 + 0xa0) = local_34[4];
                  *(int *)(local_18 + 0xac) = local_34[5];
                  *(undefined4 *)(local_18 + 0xa4) = *(undefined4 *)(local_18 + 0x180);
                  *(undefined4 *)(local_18 + 0xa8) = *(undefined4 *)(local_18 + 0x184);
                  *(int *)(local_18 + 0x180) = local_34[6];
                  *(int *)(local_18 + 0x184) = local_34[7];
                  *(undefined4 *)(local_18 + 0x98) = 1;
                  *(undefined4 *)(local_18 + 0x9c) = 1;
                  pcStack_110 = (code *)param_1;
                  puStack_114 = *(undefined4 **)(local_18 + 0x184);
                  puStack_118 = *(undefined4 **)(local_18 + 0x180);
                  puStack_11c = *(undefined4 **)(local_18 + 0xa8);
                  uStack_120 = *(undefined4 *)(local_18 + 0xa4);
                  uStack_124 = *(undefined4 *)(param_1 + 0x228);
                  apuStack_134[3] = *(undefined4 **)(param_1 + 0x224);
                  apuStack_134[2] = *(undefined4 **)(local_18 + 0xac);
                  apuStack_134[1] = *(undefined4 **)(local_18 + 0xa0);
                  apuStack_134[0] = *(undefined4 **)(param_1 + 0xdbc);
                  pcStack_138 = (char *)0x4e3c67;
                  puVar2 = (undefined4 *)FUN_004d1b20();
                  pcStack_138 = *(char **)*puVar2;
                  uStack_13c = 0x4e3c71;
                  puVar2 = (undefined4 *)FUN_00641420();
                  uStack_13c = *puVar2;
                  uStack_140 = 37000;
                  uStack_144 = 0x4e3c7e;
                  net_packet_send_fixed_0x44();
                  break;
                }
              }
            }
          }
          *(undefined4 *)(local_18 + 0x9c) = *(undefined4 *)(local_18 + 0x98);
        }
      }
    }
  }
  ExceptionList = local_10;
  return;
}


/* ==== 004e3cb0  FUN_004e3cb0  size=3337 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_004e3cb0(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined1 local_1d0 [8];
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [12];
  undefined1 local_1ac [12];
  int local_1a0;
  int local_19c;
  undefined4 local_198;
  int *local_194;
  int local_190;
  undefined1 *local_18c;
  int local_188;
  int local_184;
  int local_180;
  int *local_17c;
  int local_178;
  int local_174;
  char local_16d;
  int *local_16c;
  int local_168;
  int local_164;
  int local_160;
  undefined1 local_15c [4];
  int local_158;
  int local_154;
  undefined4 local_14c;
  undefined4 local_13c;
  undefined4 local_c8;
  undefined4 local_c4;
  function<void___cdecl(void)> local_2c [24];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00716181;
  local_10 = ExceptionList;
  local_14 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar2 = game_get_player_or_session_blob(local_14);
  if (param_1 == iVar2) {
    local_184 = param_1 + 0xc40;
    local_178 = game_loop_helper_018d0();
    local_190 = game_loop_helper_018b0();
    for (; local_178 != local_190; local_178 = local_178 + 0x94) {
      local_164 = local_178;
      local_160 = FUN_005d83e0(*(undefined4 *)(local_178 + 4));
      cVar1 = FUN_00427c60(local_160 + 0xd0,"[seeking]");
      if (cVar1 == '\0') {
        cVar1 = FUN_00427c60(local_160 + 0xd0,"[condition under clear]");
        if (cVar1 != '\0') {
          if (*(int *)(local_160 + 0xe8) == 0) {
            if (((*(char *)(local_168 + 0x140) != '\0') && (*(int *)(local_168 + 0x13c) != -1)) &&
               ((cVar1 = game_frame_should_continue(), cVar1 != '\0' ||
                (((iVar2 = FUN_0044de50(), iVar2 != 0 &&
                  (piVar5 = (int *)FUN_0044de30(0), *piVar5 == *(int *)(param_1 + 0xdcc))) &&
                 (iVar2 = FUN_0044de30(0), *(int *)(iVar2 + 4) <= *(int *)(param_1 + 0xdd0))))))) {
              cVar1 = game_frame_should_continue();
              if ((cVar1 != '\0') ||
                 ((iVar2 = FUN_0044de50(), iVar2 != 0 &&
                  (iVar2 = FUN_0044de30(0),
                  *(int *)(local_168 + 0x13c) / 1000 <= *(int *)(iVar2 + 8))))) {
                FUN_00611860(0,param_1,param_1 + 0xc30,*(undefined4 *)(local_164 + 4));
              }
              *(undefined4 *)(local_168 + 0x13c) = 0xffffffff;
              *(undefined1 *)(local_168 + 0x140) = 0;
            }
          }
          else if (*(int *)(local_160 + 0xe8) == 1) {
            cVar1 = game_frame_should_continue();
            if ((cVar1 != '\0') ||
               (((iVar2 = FUN_0044de50(), iVar2 != 0 &&
                 (piVar5 = (int *)FUN_0044de30(0), *piVar5 == *(int *)(param_1 + 0xdcc))) &&
                ((iVar2 = FUN_0044de30(0), *(int *)(iVar2 + 4) <= *(int *)(param_1 + 0xdd0) &&
                 (iVar2 = FUN_0044de30(0), *(int *)(local_168 + 0xf4) <= *(int *)(iVar2 + 8))))))) {
              FUN_00611860(0,param_1,param_1 + 0xc30,*(undefined4 *)(local_164 + 4));
            }
          }
          else if (*(int *)(local_160 + 0xe8) == 2) {
            cVar1 = game_frame_should_continue();
            if ((cVar1 != '\0') ||
               ((((iVar2 = FUN_0044de50(), iVar2 != 0 &&
                  (piVar5 = (int *)FUN_0044de30(0), *piVar5 == *(int *)(param_1 + 0xdcc))) &&
                 (iVar2 = FUN_0044de30(0), *(int *)(iVar2 + 4) <= *(int *)(param_1 + 0xdd0))) &&
                (iVar2 = FUN_0044de30(0),
                *(int *)(iVar2 + 8) <= (*(int *)(local_168 + 0xe4) * 100) / 0x46)))) {
              FUN_00611860(0,param_1,param_1 + 0xc30,*(undefined4 *)(local_164 + 4));
            }
          }
          else if (*(int *)(local_160 + 0xe8) == 3) {
            cVar1 = game_frame_should_continue();
            if ((cVar1 != '\0') ||
               (((iVar2 = FUN_0044de50(), iVar2 != 0 &&
                 (piVar5 = (int *)FUN_0044de30(0), *piVar5 == *(int *)(param_1 + 0xdcc))) &&
                ((iVar2 = FUN_0044de30(0), *(int *)(iVar2 + 4) <= *(int *)(param_1 + 0xdd0) &&
                 (iVar2 = FUN_0044de30(0),
                 *(int *)(iVar2 + 8) <= (*(int *)(local_168 + 0xd4) * 100) / 0x46)))))) {
              FUN_00611860(0,param_1,param_1 + 0xc30,*(undefined4 *)(local_164 + 4));
            }
          }
          else if (*(int *)(local_160 + 0xe8) == 4) {
            if (*(int *)(local_168 + 0xbc) == 0) {
              FUN_00611860(0,param_1,param_1 + 0xc30,*(undefined4 *)(local_164 + 4));
            }
          }
          else if (*(int *)(local_160 + 0xe8) == 5) {
            cVar1 = game_frame_should_continue();
            if (cVar1 == '\0') {
              iVar2 = FUN_0044de50();
              if ((iVar2 == 0) || (iVar2 = FUN_0044de30(0), *(int *)(iVar2 + 8) != 1)) {
                iVar2 = FUN_0044de50();
                if ((((iVar2 != 0) && (iVar2 = FUN_0044de30(0), 1 < *(int *)(iVar2 + 8))) &&
                    (iVar2 = FUN_0044de30(0), *(int *)(iVar2 + 8) <= *(int *)(param_1 + 0xdc4))) &&
                   ((piVar5 = (int *)FUN_0044de30(0), *piVar5 == *(int *)(param_1 + 0xdcc) &&
                    (iVar2 = FUN_0044de30(0), *(int *)(iVar2 + 4) <= *(int *)(param_1 + 0xdd0))))) {
                  FUN_00611860(0,param_1,param_1 + 0xc30,*(undefined4 *)(local_164 + 4));
                }
              }
              else {
                iVar2 = FUN_0044de30(0);
                if ((*(int *)(param_1 + 0xdc4) == *(int *)(iVar2 + 8)) &&
                   ((piVar5 = (int *)FUN_0044de30(0), *piVar5 == *(int *)(param_1 + 0xdcc) &&
                    (iVar2 = FUN_0044de30(0), *(int *)(iVar2 + 4) <= *(int *)(param_1 + 0xdd0))))) {
                  FUN_00611860(0,param_1,param_1 + 0xc30,*(undefined4 *)(local_164 + 4));
                }
              }
            }
            else {
              FUN_00611860(0,param_1,param_1 + 0xc30,*(undefined4 *)(local_164 + 4));
            }
          }
          else if (*(int *)(local_160 + 0xe8) == 6) {
            cVar1 = game_frame_should_continue();
            if ((cVar1 == '\0') && (cVar1 = game_frame_should_continue(), cVar1 != '\0')) {
              piVar5 = (int *)FUN_00427540(0);
              if ((*piVar5 == *(int *)(param_1 + 0xdcc)) &&
                 (iVar2 = FUN_00427540(0), *(int *)(iVar2 + 4) <= *(int *)(param_1 + 0xdd0))) {
                FUN_00611860(0,param_1,param_1 + 0xc30,*(undefined4 *)(local_164 + 4));
              }
            }
            else {
              cVar1 = game_frame_should_continue();
              if (((cVar1 != '\0') &&
                  ((cVar1 = game_frame_should_continue(), cVar1 == '\0' &&
                   (piVar5 = (int *)FUN_0044de30(0), *piVar5 == *(int *)(param_1 + 0xdcc))))) &&
                 ((iVar2 = FUN_0044de30(0), *(int *)(iVar2 + 4) <= *(int *)(param_1 + 0xdd0) &&
                  (iVar2 = FUN_0044de30(0), *(int *)(iVar2 + 8) <= *(int *)(param_1 + 0xdc4))))) {
                FUN_00611860(0,param_1,param_1 + 0xc30,*(undefined4 *)(local_164 + 4));
              }
            }
          }
          else if (*(int *)(local_160 + 0xe8) == 7) {
            cVar1 = game_frame_should_continue();
            if ((cVar1 != '\0') ||
               ((((iVar2 = FUN_0044de50(), iVar2 != 0 &&
                  (piVar5 = (int *)FUN_0044de30(0), *piVar5 == *(int *)(param_1 + 0xdcc))) &&
                 (iVar2 = FUN_0044de30(0), *(int *)(iVar2 + 4) <= *(int *)(param_1 + 0xdd0))) &&
                (iVar2 = FUN_0044de30(0), *(int *)(iVar2 + 8) <= *(int *)(local_168 + 0xf8))))) {
              FUN_00611860(0,param_1,param_1 + 0xc30,*(undefined4 *)(local_164 + 4));
            }
          }
          else if (*(int *)(local_160 + 0xe8) == -1) {
            FUN_00611860(0,param_1,param_1 + 0xc30,*(undefined4 *)(local_164 + 4));
          }
        }
      }
      else {
        FUN_0040d650();
        local_8 = 0;
        local_188 = local_160 + 0x90;
        local_17c = (int *)game_loop_helper_018d0();
        local_194 = (int *)game_loop_helper_018b0();
        for (; local_17c != local_194; local_17c = local_17c + 6) {
          local_16c = local_17c;
          if (((*local_17c == *(int *)(param_1 + 0xdcc)) &&
              (local_17c[1] <= *(int *)(param_1 + 0xdd0))) &&
             ((local_17c[5] == -1 ||
              ((iVar2 = FUN_006c79e0(param_1,local_17c[2]), iVar2 == 0 ||
               (iVar2 = FUN_006c79e0(param_1,local_16c[2]), *(int *)(iVar2 + 8) < local_16c[5]))))))
          {
            uVar3 = FUN_00641460();
            FUN_0040d2a0(0,100);
            iVar2 = FUN_0040e400(uVar3);
            if (iVar2 <= local_16c[4]) {
              FUN_0040a880();
              local_8 = CONCAT31(local_8._1_3_,1);
              local_158 = local_16c[2];
              local_154 = local_16c[3];
              iVar2 = FUN_006c8730(local_158);
              if (iVar2 == 1) {
                local_14c = 0x32;
                iVar2 = local_158;
                game_loop_helper_e9240(local_158);
                iVar2 = game_loop_helper_cc840(iVar2);
                local_13c = *(undefined4 *)(iVar2 + 0x148);
              }
              FUN_00519dd0(local_15c);
              local_8 = local_8 & 0xffffff00;
              FUN_004039a0();
            }
          }
        }
        local_198 = FUN_0067f660(local_2c,param_1,local_1b8);
        local_16d = FUN_00427c60(local_198,&DAT_0073fa31);
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_2c);
        if (local_16d != '\0') {
          FUN_00489bc0();
          local_8._0_1_ = 2;
          FUN_004525a0();
          local_8 = CONCAT31(local_8._1_3_,3);
          local_174 = 0;
          local_18c = local_1b8;
          local_180 = game_loop_helper_018d0();
          local_19c = game_loop_helper_018b0();
          for (; local_180 != local_19c; local_180 = local_180 + 0x94) {
            local_1a0 = local_180;
            local_174 = FUN_0067f8c0(0,param_1,local_180,1);
            if (local_174 != 0) {
              puVar4 = (undefined4 *)FUN_006c9280(local_1c8,local_174,param_1);
              local_c8 = *puVar4;
              iVar2 = FUN_006c9280(local_1d0,local_174,param_1);
              local_c4 = *(undefined4 *)(iVar2 + 4);
              FUN_00426c50(local_174);
              FUN_00489b80(&local_c8);
            }
          }
          cVar1 = game_frame_should_continue();
          if (cVar1 == '\0') {
            uVar3 = game_get_player_or_session_blob();
            net_packet_send_helper_647c0(0,0x3f4,local_1ac,uVar3);
          }
          local_8._0_1_ = 2;
          FUN_00456cf0();
          local_8 = (uint)local_8._1_3_ << 8;
          FUN_00489ba0();
        }
        local_8 = 0xffffffff;
        FUN_004052a0();
      }
    }
  }
  ExceptionList = local_10;
  return;
}


/* ==== 004e49c0  FUN_004e49c0  size=1089 ==== */

void FUN_004e49c0(int param_1,int param_2)

{
  int iVar1;
  undefined1 auStack_98 [8];
  undefined4 uStack_90;
  undefined *puStack_8c;
  char *pcStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  int iStack_74;
  undefined4 *puStack_70;
  uint uStack_6c;
  undefined1 *local_68;
  undefined1 *local_64;
  undefined1 *local_60;
  undefined4 local_5c;
  undefined1 *local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined1 *local_4c;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  char local_34 [4];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  char local_20 [4];
  int local_1c;
  int local_18;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007161c5;
  local_10 = ExceptionList;
  uStack_6c = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (param_2 != 0) {
    puStack_70 = (undefined4 *)0x4e49f8;
    iVar1 = game_get_player_or_session_blob();
    if (((param_2 == iVar1) && (*(int *)(param_2 + 0xdd8) < 4)) &&
       (*(int *)(param_2 + 0x6e8) < *(int *)(param_2 + 0x6e0))) {
      local_11 = '\0';
      local_20[0] = 'H';
      local_20[1] = '\0';
      local_20[2] = '\0';
      local_20[3] = '\0';
      local_4c = (undefined1 *)&uStack_84;
      pcStack_88 = &DAT_00750a10;
      puStack_8c = (undefined *)0x4e4a48;
      local_50 = FUN_004054a0();
      local_8 = 0;
      pcStack_88 = local_20;
      puStack_8c = (undefined *)0x4e4a60;
      pcStack_88 = (char *)game_timing_or_delay_helper();
      local_8 = 0xffffffff;
      puStack_8c = (undefined *)0x4e4a6d;
      local_24 = ui_find_widget_by_key();
      if ((local_24 != 0) && (*(char *)(local_24 + 0x9a8) != '\0')) {
        local_11 = '\x01';
      }
      local_18 = local_24;
      if (local_11 == '\0') {
        local_54 = 60000;
        *(int *)(param_2 + 0x9a4) = *(int *)(param_2 + 0x9a4) + param_1;
        if (59999 < *(int *)(param_2 + 0x9a4)) {
          *(undefined4 *)(param_2 + 0x9a4) = 0;
          *(int *)(param_2 + 0x6e8) = *(int *)(param_2 + 0x6e0) / 10 + *(int *)(param_2 + 0x6e8);
          *(int *)(param_2 + 0x6ec) = *(int *)(param_2 + 0x6e4) / 10 + *(int *)(param_2 + 0x6ec);
          if ((*(int *)(param_2 + 0x6e8) < *(int *)(param_2 + 0x6e0)) &&
             (*(int *)(param_2 + 0x6ec) < *(int *)(param_2 + 0x6e4))) {
            puStack_70 = (undefined4 *)param_2;
            iStack_74 = *(undefined4 *)(param_2 + 0x6ec);
            uStack_78 = 8;
            uStack_7c = *(undefined4 *)(param_2 + 0x6e8);
            uStack_80 = 7;
            uStack_84 = 0x2904;
            pcStack_88 = (char *)0x4e4c26;
            net_packet_send_fixed_0x28();
            puStack_70 = (undefined4 *)0x0;
            iStack_74 = 0xe74;
            uStack_78 = 0x4e4c35;
            ui_command_dispatch();
            puStack_70 = (undefined4 *)param_2;
            iStack_74 = 0x4e4c41;
            FUN_00658a10();
          }
          else {
            *(undefined4 *)(param_2 + 0x6e8) = *(undefined4 *)(param_2 + 0x6e0);
            *(undefined4 *)(param_2 + 0x6ec) = *(undefined4 *)(param_2 + 0x6e4);
            puStack_70 = (undefined4 *)param_2;
            iStack_74 = *(undefined4 *)(param_2 + 0x6ec);
            uStack_78 = 8;
            uStack_7c = *(undefined4 *)(param_2 + 0x6e8);
            uStack_80 = 7;
            uStack_84 = 0x2904;
            pcStack_88 = (char *)0x4e4b95;
            net_packet_send_fixed_0x28();
            local_28 = 0x48;
            puStack_70 = &local_28;
            iStack_74 = 0x4e4bad;
            puStack_70 = (undefined4 *)game_timing_or_delay_helper();
            iStack_74 = 0x4e4bb3;
            ui_close_matching_widgets();
            local_2c = 0x39;
            puStack_70 = &local_2c;
            iStack_74 = 0x4e4bcb;
            puStack_70 = (undefined4 *)game_timing_or_delay_helper();
            iStack_74 = 0x4e4bd1;
            ui_close_matching_widgets();
            local_30 = 0x294;
            puStack_70 = &local_30;
            iStack_74 = 0x4e4be9;
            puStack_70 = (undefined4 *)game_timing_or_delay_helper();
            iStack_74 = 0x4e4bef;
            ui_close_matching_widgets();
            puStack_70 = (undefined4 *)param_2;
            iStack_74 = 0x4e4bfb;
            FUN_00658a10();
          }
        }
      }
      else {
        local_34[0] = 'd';
        local_34[1] = '\0';
        local_34[2] = '\0';
        local_34[3] = '\0';
        local_58 = (undefined1 *)&uStack_84;
        pcStack_88 = "White";
        puStack_8c = (undefined *)0x4e4c62;
        local_5c = FUN_004054a0();
        local_8 = 1;
        pcStack_88 = local_34;
        puStack_8c = (undefined *)0x4e4c7a;
        pcStack_88 = (char *)game_timing_or_delay_helper();
        local_8 = 0xffffffff;
        puStack_8c = (undefined *)0x4e4c87;
        local_38 = ui_find_widget_by_key();
        if ((local_38 != 0) && (*(char *)(local_38 + 0x51) == '\0')) {
          puStack_70 = (undefined4 *)param_2;
          iStack_74 = 0x4e4cb5;
          local_1c = local_38;
          iVar1 = FUN_00642760();
          if (*(int *)(param_2 + 0xac8) < iVar1) {
            local_3c = 0x48;
            puStack_70 = &local_3c;
            iStack_74 = 0x4e4cd8;
            puStack_70 = (undefined4 *)game_timing_or_delay_helper();
            iStack_74 = 0x4e4cde;
            ui_close_matching_widgets();
            puStack_70 = (undefined4 *)0x0;
            iStack_74 = 0;
            uStack_78 = 0;
            uStack_7c = 0;
            uStack_80 = 10;
            local_60 = auStack_98;
            FUN_004054a0(&DAT_007509d8);
            FUN_006634f0();
          }
          else {
            local_64 = (undefined1 *)&uStack_84;
            pcStack_88 = "sounds/ui/stamina_recover.wav";
            puStack_8c = (undefined *)0x4e4d1c;
            FUN_004054a0();
            pcStack_88 = (char *)0x4e4d21;
            FUN_004c3500();
            local_40 = 0x294;
            puStack_70 = &local_40;
            iStack_74 = 0x4e4d39;
            puStack_70 = (undefined4 *)game_timing_or_delay_helper();
            iStack_74 = 0x4e4d3f;
            ui_close_matching_widgets();
            local_44 = 0x48;
            puStack_70 = &local_44;
            iStack_74 = 0x4e4d57;
            puStack_70 = (undefined4 *)game_timing_or_delay_helper();
            iStack_74 = 0x4e4d5d;
            ui_close_matching_widgets();
            puStack_70 = (undefined4 *)param_2;
            iStack_74 = param_2;
            uStack_78 = 0x4e4d6d;
            iStack_74 = FUN_00642760();
            iStack_74 = *(int *)(param_2 + 0xac8) - iStack_74;
            uStack_78 = 0x4e4d81;
            FUN_00680fb0();
            *(undefined4 *)(param_2 + 0x6e8) = *(undefined4 *)(param_2 + 0x6e0);
            *(undefined4 *)(param_2 + 0x6ec) = *(undefined4 *)(param_2 + 0x6e4);
            puStack_70 = (undefined4 *)param_2;
            iStack_74 = *(undefined4 *)(param_2 + 0x6ec);
            uStack_78 = 8;
            uStack_7c = *(undefined4 *)(param_2 + 0x6e8);
            uStack_80 = 7;
            uStack_84 = 0x2904;
            pcStack_88 = (char *)0x4e4dce;
            net_packet_send_fixed_0x28();
            puStack_70 = (undefined4 *)0xffe6c89c;
            local_68 = (undefined1 *)&pcStack_88;
            puStack_8c = &DAT_00750a5c;
            uStack_90 = 0x4e4de8;
            FUN_004054a0();
            puStack_8c = (undefined *)0x4e4ded;
            FUN_0049d850();
          }
        }
      }
    }
  }
  ExceptionList = local_10;
  return;
}


/* ==== 004e4e10  FUN_004e4e10  size=208 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_004e4e10(undefined4 *param_1,int param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  uVar3 = 0;
  FUN_004bcf00(0);
  FUN_004b5650(uVar3);
  FUN_004bcf00();
  FUN_004ba640();
  allocator<>();
  puVar1 = (undefined4 *)FUN_004a6f40((float)(param_2 + param_1[1]),(float)(param_3 + param_1[2]),0)
  ;
  local_14 = *puVar1;
  local_10 = puVar1[1];
  local_c = puVar1[2];
  iVar2 = FUN_004bcf00();
  (**(code **)(**(int **)(iVar2 + 0xc) + 0x24))
            (*(int **)(iVar2 + 0xc),*param_1,0,0,&local_14,param_4 << 0x18 | 0xffffff);
  return;
}


/* ==== 004e50c0  FUN_004e50c0  size=10 ==== */

undefined4 FUN_004e50c0(void)

{
  return DAT_007ca1c0;
}


/* ==== 004e5110  FUN_004e5110  size=245 ==== */

void * FUN_004e5110(void)

{
  void *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0070c170;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  _eh_vector_constructor_iterator_(in_ECX,0xc,0xb,FUN_005182b0,FUN_00405350);
  *(undefined4 *)((int)in_ECX + 0x84) = 0;
  *(undefined4 *)((int)in_ECX + 0x88) = 0;
  *(undefined2 *)((int)in_ECX + 0x8c) = 0;
  *(undefined1 *)((int)in_ECX + 0x8e) = 0;
  *(undefined4 *)((int)in_ECX + 0x90) = 10;
  *(undefined4 *)((int)in_ECX + 0x94) = 9;
  *(undefined4 *)((int)in_ECX + 0x98) = 8;
  *(undefined4 *)((int)in_ECX + 0x9c) = 7;
  *(undefined4 *)((int)in_ECX + 0xa0) = 6;
  *(undefined4 *)((int)in_ECX + 0xa4) = 5;
  *(undefined4 *)((int)in_ECX + 0xa8) = 4;
  *(undefined4 *)((int)in_ECX + 0xac) = 3;
  *(undefined4 *)((int)in_ECX + 0xb0) = 2;
  *(undefined4 *)((int)in_ECX + 0xb4) = 1;
  *(undefined4 *)((int)in_ECX + 0xb8) = 0;
  ExceptionList = local_10;
  return in_ECX;
}


/* ==== 004e5210  FUN_004e5210  size=38 ==== */

void FUN_004e5210(int param_1)

{
  int in_ECX;
  
  if ((-1 < param_1) && (param_1 < 0xb)) {
    *(undefined1 *)(in_ECX + param_1 + 0x84) = 1;
  }
  return;
}


/* ==== 004e5240  FUN_004e5240  size=565 ==== */

void FUN_004e5240(int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,
                 undefined4 param_6,char param_7)

{
  uint uVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 local_54 [24];
  undefined1 local_3c [4];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  undefined1 local_30 [4];
  undefined1 local_2c [4];
  undefined1 local_28 [4];
  undefined4 local_24;
  undefined4 local_20;
  uint local_1c;
  uint local_18;
  int local_14;
  uint local_10;
  char local_5;
  
  local_10 = 0xffffffff;
  local_18 = 0;
  do {
    uVar1 = FUN_004274f0();
    if (uVar1 <= local_18) {
LAB_004e5294:
      if ((int)local_10 < 0) {
        if (param_7 == '\0') {
          for (local_14 = 0; local_14 < 0xb; local_14 = local_14 + 1) {
            local_5 = '\0';
            local_1c = 0;
            while (uVar1 = FUN_004274f0(), local_1c < uVar1) {
              piVar2 = (int *)FUN_004274d0(local_1c);
              if (*piVar2 == param_1) {
                local_5 = '\x01';
                puVar5 = local_34;
                uVar1 = local_1c;
                FUN_004021b0(local_38);
                puVar3 = (undefined4 *)FUN_005183d0(puVar5,uVar1);
                local_24 = *puVar3;
                FUN_00518940(local_3c,local_24);
                break;
              }
              local_1c = local_1c + 1;
            }
            if (local_5 != '\0') {
              return;
            }
          }
        }
        else {
          FUN_004d13f0(param_1,param_2,param_4,param_5,param_6,1);
          FUN_00427520(local_54);
          FUN_004e5210(param_3);
        }
      }
      else if (param_7 == '\0') {
        puVar5 = local_28;
        uVar1 = local_10;
        FUN_004021b0(local_2c);
        puVar3 = (undefined4 *)FUN_005183d0(puVar5,uVar1);
        local_20 = *puVar3;
        FUN_00518940(local_30,local_20);
      }
      else {
        iVar4 = FUN_004274d0(local_10);
        if (*(int *)(iVar4 + 8) != param_4) {
          FUN_004e5210(param_3);
        }
        iVar4 = FUN_004274d0(local_10);
        *(undefined4 *)(iVar4 + 4) = param_2;
        iVar4 = FUN_004274d0(local_10);
        *(int *)(iVar4 + 8) = param_4;
        iVar4 = FUN_004274d0(local_10);
        *(undefined4 *)(iVar4 + 0xc) = param_5;
        iVar4 = FUN_004274d0(local_10);
        *(undefined4 *)(iVar4 + 0x10) = param_6;
        iVar4 = FUN_004274d0(local_10);
        *(char *)(iVar4 + 0x14) = param_7;
      }
      return;
    }
    piVar2 = (int *)FUN_004274d0(local_18);
    if (*piVar2 == param_1) {
      local_10 = local_18;
      goto LAB_004e5294;
    }
    local_18 = local_18 + 1;
  } while( true );
}


/* ==== 004e5480  FUN_004e5480  size=224 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e5480(undefined4 param_1,float param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  float afStack_4b8 [2];
  int *piStack_4b0;
  int *piStack_4a8;
  int *piStack_4a0;
  int *piStack_498;
  int *piStack_490;
  int iStack_488;
  int *piStack_484;
  int *piStack_47c;
  undefined4 uStack_478;
  int *piStack_474;
  int iStack_46c;
  int iStack_468;
  undefined4 uStack_464;
  undefined4 uStack_460;
  undefined4 uStack_45c;
  undefined4 uStack_458;
  undefined4 uStack_454;
  undefined4 uStack_450;
  undefined4 uStack_44c;
  undefined4 uStack_448;
  undefined4 uStack_444;
  undefined4 uStack_440;
  undefined4 uStack_43c;
  undefined4 uStack_438;
  int iStack_434;
  undefined4 uStack_430;
  undefined4 uStack_42c;
  undefined4 uStack_428;
  undefined4 uStack_424;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  undefined4 uStack_418;
  undefined4 uStack_414;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  int *local_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  undefined4 uStack_3f8;
  undefined4 uStack_3f4;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  undefined4 uStack_3e8;
  undefined4 uStack_3e4;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  undefined4 uStack_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined4 uStack_3c8;
  undefined4 uStack_3c4;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  undefined4 uStack_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  undefined4 uStack_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined4 uStack_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined4 uStack_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined4 uStack_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined4 uStack_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  int iStack_268;
  undefined4 uStack_264;
  uint uStack_260;
  float fStack_25c;
  int iStack_258;
  int local_254;
  int iStack_250;
  int iStack_24c;
  int iStack_248;
  int iStack_244;
  undefined4 uStack_240;
  int iStack_23c;
  int iStack_238;
  int iStack_234;
  int iStack_230;
  undefined4 local_22c;
  int *piStack_228;
  undefined4 uStack_224;
  float fStack_220;
  int iStack_21c;
  undefined4 uStack_218;
  float fStack_214;
  int iStack_210;
  int iStack_200;
  int iStack_1fc;
  int iStack_1f8;
  int iStack_1e0;
  int iStack_1dc;
  int iStack_1d8;
  int *piStack_1d4;
  int *local_1d0;
  int iStack_1cc;
  int *piStack_1c8;
  int iStack_1c4;
  int iStack_1c0;
  int iStack_1bc;
  int iStack_1b8;
  int iStack_1b4;
  int iStack_1b0;
  int iStack_1ac;
  uint uStack_1a8;
  char cStack_19e;
  char cStack_19d;
  char cStack_19c;
  char cStack_19b;
  char cStack_19a;
  char cStack_199;
  int iStack_198;
  int *local_194;
  function<void___cdecl(void)> afStack_190 [24];
  function<void___cdecl(void)> afStack_178 [24];
  function<void___cdecl(void)> afStack_160 [24];
  function<void___cdecl(void)> afStack_148 [24];
  float afStack_130 [4];
  float afStack_120 [3];
  undefined1 auStack_114 [256];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0071620c;
  local_10 = ExceptionList;
  local_14 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_22c = param_1;
  local_1d0 = (int *)game_loop_helper_018d0();
  local_408 = (int *)game_loop_helper_018b0();
  do {
    if (local_1d0 == local_408) {
      ExceptionList = local_10;
      return;
    }
    local_194 = local_1d0;
    *(undefined1 *)(local_1d0 + 5) = 0;
    local_254 = local_1d0[1];
    switch(local_254) {
    case 0:
      piVar6 = (int *)game_get_state_ptr_d1520();
      if (*piVar6 != 0) {
        game_get_state_ptr_d1520();
        cVar4 = FUN_00427e30();
        if (cVar4 != '\0') {
          piVar6 = (int *)game_get_state_ptr_d1520();
          iVar5 = *piVar6;
          piVar6 = (int *)game_get_state_ptr_d1520();
          if (*(int *)(iVar5 + 0x54) == *(int *)(*piVar6 + 0x180)) {
            piVar6 = (int *)game_get_state_ptr_d1520();
            iVar5 = *piVar6;
            piVar6 = (int *)game_get_state_ptr_d1520();
            if (*(int *)(iVar5 + 0x58) == *(int *)(*piVar6 + 0x184)) {
              FUN_004bcf00();
              FUN_004b5650();
              FUN_004bcf00();
              FUN_004ba640();
              piVar6 = (int *)game_get_state_ptr_d1520();
              FUN_00405520(*piVar6 + 0x74);
              FUN_004b8ca0();
              FUN_004b9480();
            }
          }
        }
      }
      FUN_004e9070();
      break;
    case 1:
      if (((DAT_007ca1d8 == 3) && (iVar5 = game_get_player_or_session_blob(), iVar5 != 0)) &&
         (iVar5 = game_get_player_or_session_blob(), *(char *)(iVar5 + 0xdb8) != '\0')) {
        _memset(auStack_114,0,0x100);
        if ((*(int *)(*(int *)ThreadLocalStoragePointer + 4) < DAT_007cab5c) &&
           (FUN_006e4c3b(), DAT_007cab5c == -1)) {
          uStack_8 = 0;
          FUN_004054a0();
          FUN_004ce220();
          FUN_006e4fef();
          uStack_8 = 0xffffffff;
          FUN_006e4bea();
        }
        iVar5 = game_get_player_or_session_blob();
        if (*(int *)(iVar5 + 0xdc4) == 1) {
          game_get_flag_object_01a70();
          FUN_00414e80();
          _DAT_007caa20 = 0x118;
          FUN_004054a0();
          FUN_004053e0();
          std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_160);
          _DAT_007caa24 = 0xffff0000;
          CDocObjectServer::ReleaseDocSite((CDocObjectServer *)&DAT_007caa18);
          FUN_004bb400();
        }
        else {
          iVar5 = game_get_player_or_session_blob();
          if (*(int *)(iVar5 + 0xdc4) == 2) {
            piVar6 = (int *)game_get_flag_object_01a70();
            iVar5 = *piVar6;
            piVar6 = (int *)game_get_flag_object_01a70();
            iStack_258 = *(int *)(iVar5 + 0xddc) + *(int *)(*piVar6 + 0xddc);
            for (iStack_1b4 = 0; iStack_1b4 < 2; iStack_1b4 = iStack_1b4 + 1) {
              if (iStack_258 == 0) {
                fStack_25c = 0.0;
              }
              else {
                piVar6 = (int *)game_get_flag_object_01a70();
                fStack_25c = ((float)*(int *)(*piVar6 + 0xddc) / (float)iStack_258) * 100.0;
              }
              afStack_4b8[iStack_1b4] = fStack_25c;
            }
            if (afStack_4b8[0] < afStack_4b8[1]) {
              uStack_260 = 1;
            }
            else {
              uStack_260 = 0;
            }
            uStack_260 = (uint)(afStack_4b8[0] < afStack_4b8[1]);
            uVar3 = uStack_260;
            for (uStack_1a8 = 0; (int)uStack_1a8 < 2; uStack_1a8 = uStack_1a8 + 1) {
              game_get_flag_object_01a70();
              FUN_00414e80();
              _DAT_007caa20 = uStack_1a8 * 0x14 + 0x118;
              FUN_004054a0();
              FUN_004053e0();
              std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_178);
              if (uStack_1a8 == uVar3) {
                uStack_264 = 0xffff0000;
              }
              else {
                uStack_264 = 0xffffffff;
              }
              _DAT_007caa24 = uStack_264;
              CDocObjectServer::ReleaseDocSite((CDocObjectServer *)&DAT_007caa18);
              FUN_004bb400();
            }
          }
          else {
            iVar5 = game_get_player_or_session_blob();
            if (*(int *)(iVar5 + 0xdc4) == 3) {
              piVar6 = (int *)game_get_flag_object_01a70();
              iVar5 = *piVar6;
              piVar6 = (int *)game_get_flag_object_01a70();
              iVar5 = *(int *)(iVar5 + 0xddc);
              iVar1 = *(int *)(*piVar6 + 0xddc);
              piVar6 = (int *)game_get_flag_object_01a70();
              iStack_268 = iVar5 + iVar1 + *(int *)(*piVar6 + 0xddc);
              for (iStack_1b8 = 0; iStack_1b8 < 3; iStack_1b8 = iStack_1b8 + 1) {
                if (iStack_268 == 0) {
                  fStack_214 = 0.0;
                }
                else {
                  piVar6 = (int *)game_get_flag_object_01a70();
                  fStack_214 = ((float)*(int *)(*piVar6 + 0xddc) / (float)iStack_268) * 100.0;
                }
                afStack_120[iStack_1b8] = fStack_214;
              }
              iStack_1f8 = 0;
              for (iStack_1bc = 1; iStack_1bc < 3; iStack_1bc = iStack_1bc + 1) {
                if (afStack_120[iStack_1f8] <= afStack_120[iStack_1bc] &&
                    afStack_120[iStack_1bc] != afStack_120[iStack_1f8]) {
                  iStack_1f8 = iStack_1bc;
                }
              }
              for (iStack_1ac = 0; iStack_1ac < 3; iStack_1ac = iStack_1ac + 1) {
                game_get_flag_object_01a70();
                FUN_00414e80();
                _DAT_007caa20 = iStack_1ac * 0x14 + 0x118;
                FUN_004054a0();
                FUN_004053e0();
                std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_190);
                if (iStack_1ac == iStack_1f8) {
                  uStack_218 = 0xffff0000;
                }
                else {
                  uStack_218 = 0xffffffff;
                }
                _DAT_007caa24 = uStack_218;
                CDocObjectServer::ReleaseDocSite((CDocObjectServer *)&DAT_007caa18);
                FUN_004bb400();
              }
            }
            else {
              iVar5 = game_get_player_or_session_blob();
              if (*(int *)(iVar5 + 0xdc4) == 4) {
                piVar6 = (int *)game_get_flag_object_01a70();
                iVar5 = *piVar6;
                piVar6 = (int *)game_get_flag_object_01a70();
                iVar5 = *(int *)(iVar5 + 0xddc);
                iVar1 = *(int *)(*piVar6 + 0xddc);
                piVar6 = (int *)game_get_flag_object_01a70();
                iVar2 = *(int *)(*piVar6 + 0xddc);
                piVar6 = (int *)game_get_flag_object_01a70();
                iStack_21c = iVar5 + iVar1 + iVar2 + *(int *)(*piVar6 + 0xddc);
                for (iStack_1c0 = 0; iStack_1c0 < 4; iStack_1c0 = iStack_1c0 + 1) {
                  if (iStack_21c == 0) {
                    fStack_220 = 0.0;
                  }
                  else {
                    piVar6 = (int *)game_get_flag_object_01a70();
                    fStack_220 = ((float)*(int *)(*piVar6 + 0xddc) / (float)iStack_21c) * 100.0;
                  }
                  afStack_130[iStack_1c0] = fStack_220;
                }
                iStack_1fc = 0;
                for (iStack_1c4 = 1; iStack_1c4 < 4; iStack_1c4 = iStack_1c4 + 1) {
                  if (afStack_130[iStack_1fc] <= afStack_130[iStack_1c4] &&
                      afStack_130[iStack_1c4] != afStack_130[iStack_1fc]) {
                    iStack_1fc = iStack_1c4;
                  }
                }
                for (iStack_1b0 = 0; iStack_1b0 < 4; iStack_1b0 = iStack_1b0 + 1) {
                  game_get_flag_object_01a70();
                  FUN_00414e80();
                  _DAT_007caa20 = iStack_1b0 * 0x14 + 0x118;
                  FUN_004054a0();
                  FUN_004053e0();
                  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_148);
                  if (iStack_1b0 == iStack_1fc) {
                    uStack_224 = 0xffff0000;
                  }
                  else {
                    uStack_224 = 0xffffffff;
                  }
                  _DAT_007caa24 = uStack_224;
                  CDocObjectServer::ReleaseDocSite((CDocObjectServer *)&DAT_007caa18);
                  FUN_004bb400();
                }
              }
            }
          }
        }
      }
      iVar5 = game_get_player_or_session_blob();
      if (((*(int *)(iVar5 + 0xdd8) == 4) && (piVar6 = (int *)game_get_state_ptr_d1520(), *piVar6 != 0)) &&
         (piVar6 = (int *)game_get_state_ptr_d1520(), *(int *)(*piVar6 + 0x16c) != 0)) {
        FUN_0053c920();
        game_get_state_ptr_d1520();
        FUN_004e1c00();
        game_get_state_ptr_d1520();
        FUN_004e1ec0();
        game_get_state_ptr_d1520();
        FUN_004e0a40();
      }
      uStack_270 = 0x2a8;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      uStack_274 = 0x15e0;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      uStack_278 = 0x1644;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      uStack_27c = 0x39;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      uStack_280 = 0x294;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      uStack_284 = 0x28a;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      uStack_288 = 0x280;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      game_get_player_or_session_blob();
      FUN_00513830();
      game_get_player_or_session_blob();
      FUN_00514020();
      iVar5 = game_get_player_or_session_blob();
      if (*(int *)(iVar5 + 0xdd8) < 4) {
        uStack_28c = 0x157c;
        FUN_006e5600();
        game_timing_or_delay_helper();
        ui_or_render_draw_helper_657640();
      }
      uStack_290 = 0x170c;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      uStack_294 = 0x1518;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      uStack_298 = 0x14b4;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      uStack_29c = 0x1450;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      uStack_2a0 = 0xed8;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      uStack_2a4 = 0x1068;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      uStack_2a8 = 0x1004;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      uStack_2ac = 0x960;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      uStack_2b0 = 0xa28;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      uStack_2b4 = 0xaf0;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      uStack_2b8 = 4000;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      uStack_2bc = 0xf3c;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      uStack_2c0 = 0x6a4;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      uStack_2c4 = 0x76c;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      uStack_2c8 = 2000;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      uStack_2cc = 0x834;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      uStack_2d0 = 0x898;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      uStack_2d4 = 0x8fc;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      uStack_2d8 = 0x532;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      uStack_2dc = 0x53c;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      uStack_2e0 = 0x546;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      uStack_2e4 = 0x51e;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      uStack_2e8 = 0x528;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      uStack_2ec = 0x708;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      uStack_2f0 = 0x9c4;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      uStack_2f4 = 0xa8c;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      uStack_2f8 = 0x640;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      uStack_2fc = 0x64a;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      uStack_300 = 0x654;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      uStack_304 = 0x65e;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      uStack_308 = 0x668;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      uStack_30c = 0x672;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      uStack_310 = 0xce4;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      uStack_314 = 0xc80;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      uStack_318 = 0xc8a;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      uStack_31c = 0xc94;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      uStack_320 = 0xc9e;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      uStack_324 = 0xca8;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      uStack_328 = 0xdac;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      uStack_32c = 0xd48;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      uStack_330 = 0xe74;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      uStack_334 = 0xe6a;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      uStack_338 = 0xe60;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      uStack_33c = 0xe56;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      uStack_340 = 0xe4c;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      uStack_344 = 0xe42;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      uStack_348 = 0x5dc;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      uStack_34c = 0x5aa;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      uStack_350 = 0x578;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      uStack_354 = 0x42e;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      uStack_358 = 0x424;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      uStack_35c = 0x41a;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      uStack_360 = 0x3b6;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      uStack_364 = 900;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      uStack_368 = 0x366;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      game_get_player_or_session_blob();
      FUN_00414340();
      uStack_36c = 0x35c;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      game_get_player_or_session_blob();
      FUN_0040c970();
      uStack_370 = 0x352;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      uStack_374 = 0x348;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      uStack_378 = 0x33e;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      uStack_37c = 0x334;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      game_get_player_or_session_blob();
      FUN_006a6840();
      uStack_380 = 0x32a;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      game_get_player_or_session_blob();
      FUN_004b4470();
      uStack_384 = 800;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      game_get_player_or_session_blob();
      FUN_00535170();
      uStack_388 = 0x1324;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      uStack_38c = 0x12c0;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      uStack_390 = 0x125c;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      uStack_394 = 0x11f8;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      uStack_398 = 0x13ec;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      uStack_39c = 5000;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      game_get_player_or_session_blob();
      FUN_0060e970();
      uStack_3a0 = 0x1130;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      uStack_3a4 = 0x10cc;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      uStack_3a8 = 0x10b3;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      uStack_3ac = 0x109a;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      uStack_3b0 = 700;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      uStack_3b4 = 0x96;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      uStack_3b8 = 0x78;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      uStack_3bc = 100;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      uStack_3c0 = 0x5e;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      uStack_3c4 = 0x51;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      uStack_3c8 = 0x52;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      uStack_3cc = 0x53;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      uStack_3d0 = 0x54;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      uStack_3d4 = 0x55;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      uStack_3d8 = 0x56;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      uStack_3dc = 0x57;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      uStack_3e0 = 0x58;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      uStack_3e4 = 0x59;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      uStack_3e8 = 0x5b;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      uStack_3ec = 0x5c;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      uStack_3f0 = 0x5d;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      uStack_3f4 = 0x50;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      uStack_3f8 = 0x4e;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      uStack_3fc = 0x4c;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      uStack_400 = 0x49;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      uStack_404 = 0x48;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      uStack_478 = 0x45;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      uStack_40c = 0x44;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      uStack_410 = 0x43;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      uStack_414 = 0x42;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      uStack_418 = 0x41;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      uStack_41c = 0x46;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      uStack_420 = 0x47;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      uStack_424 = 0x40;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      uStack_428 = 0x3f;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      uStack_42c = 0x40;
      game_timing_or_delay_helper();
      cVar4 = game_frame_should_continue();
      if (cVar4 == '\0') {
        uStack_430 = 0x40;
        FUN_004054a0();
        uStack_8 = 1;
        game_timing_or_delay_helper();
        uStack_8 = 0xffffffff;
        iStack_434 = ui_find_widget_by_key();
        if (*(char *)(iStack_434 + 0x51) != '\0') {
          uStack_438 = 0x170c;
          FUN_006e5600();
          game_timing_or_delay_helper();
          ui_or_render_draw_helper_657640();
        }
      }
      uStack_43c = 0x3e;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      uStack_440 = 0x3d;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      uStack_444 = 0x3c;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      uStack_448 = 0x3b;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      uStack_44c = 0x3a;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      uStack_450 = 0x38;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      uStack_454 = 0x32;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      uStack_458 = 0xaf;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      uStack_45c = 0x12;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      uStack_460 = 0xc;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      uStack_464 = 0xe;
      FUN_006e5600();
      game_timing_or_delay_helper();
      ui_or_render_draw_helper_657640();
      game_get_player_or_session_blob();
      FUN_006cabf0();
      break;
    case 2:
      piVar6 = (int *)game_get_state_ptr_d1520();
      if (*(int *)(*piVar6 + 0x5c) != 0) {
        d3d9_create_texture_004e4ee0();
      }
      piVar6 = (int *)game_get_state_ptr_d1520();
      if (*(int *)(*piVar6 + 0x60) != -1) {
        piVar6 = (int *)game_get_state_ptr_d1520();
        piStack_228 = (int *)(*piVar6 + 0x60);
        *piStack_228 = (int)((float)*piStack_228 - param_2);
        piVar6 = (int *)game_get_state_ptr_d1520();
        if (*(int *)(*piVar6 + 0x60) < 1) {
          piVar6 = (int *)game_get_state_ptr_d1520();
          *(undefined4 *)(*piVar6 + 0x60) = 0xffffffff;
        }
        d3d9_create_texture_004e4ee0();
      }
      break;
    case 3:
      iStack_468 = *local_1d0;
      FUN_004e8d50();
      break;
    case 4:
      iStack_200 = *local_1d0;
      if ((DAT_007ca1d8 == 3) &&
         (piVar6 = (int *)game_get_state_ptr_d1520(), *(int *)(*piVar6 + 0x17c) == 0x108c)) {
        cVar4 = FUN_00427c60();
        if (cVar4 != '\0') {
          FUN_004e8f20();
        }
      }
      else {
        FUN_004e8f20();
      }
      break;
    case 5:
      iStack_46c = *local_1d0;
      FUN_004e8b10();
      break;
    case 6:
      iStack_24c = *local_1d0;
      if (iStack_24c != 0) {
        FUN_004e8ac0();
      }
      break;
    case 7:
      piStack_1c8 = (int *)*local_1d0;
      cStack_19a = '\0';
      game_get_state_ptr_d1520();
      piVar6 = (int *)FUN_004d58e0();
      iStack_230 = *piVar6 + 0x170;
      FUN_0042a9e0();
      FUN_0042a9c0();
      while (cVar4 = FUN_0040d2d0(), cVar4 != '\0') {
        piStack_474 = (int *)FUN_0042a580();
        if (piStack_1c8 == (int *)*piStack_474) {
          cStack_19a = '\x01';
          break;
        }
        FUN_0042a560();
      }
      if (((cStack_19a != '\0') && (piStack_1c8 != (int *)0x0)) &&
         ((char)piStack_1c8[0x381] != '\0')) {
        (**(code **)(*piStack_1c8 + 0x144))();
      }
      break;
    case 8:
      piStack_1d4 = (int *)*local_1d0;
      cStack_19b = '\0';
      game_get_state_ptr_d1520();
      piVar6 = (int *)FUN_004d58e0();
      iStack_234 = *piVar6 + 0x170;
      FUN_0042a9e0();
      FUN_0042a9c0();
      while (cVar4 = FUN_0040d2d0(), cVar4 != '\0') {
        piStack_47c = (int *)FUN_0042a580();
        if (piStack_1d4 == (int *)*piStack_47c) {
          cStack_19b = '\x01';
          break;
        }
        FUN_0042a560();
      }
      if ((cStack_19b != '\0') && (piStack_1d4 != (int *)0x0)) {
        (**(code **)(*piStack_1d4 + 0x144))();
      }
      break;
    case 9:
      iStack_210 = *local_1d0;
      cStack_19c = '\0';
      game_get_state_ptr_d1520();
      piVar6 = (int *)FUN_004d58e0();
      iStack_238 = *piVar6 + 0x170;
      FUN_0042a9e0();
      FUN_0042a9c0();
      while (cVar4 = FUN_0040d2d0(), cVar4 != '\0') {
        piStack_484 = (int *)FUN_0042a580();
        if (iStack_210 == *piStack_484) {
          cStack_19c = '\x01';
          break;
        }
        FUN_0042a560();
      }
      if ((cStack_19c != '\0') && (iStack_210 != 0)) {
        iStack_23c = iStack_210 + 0x8e4;
        iStack_1d8 = game_loop_helper_018d0();
        iStack_488 = game_loop_helper_018b0();
        for (; iStack_1d8 != iStack_488; iStack_1d8 = iStack_1d8 + 4) {
          iStack_1dc = iStack_1d8;
          FUN_004e8ac0();
        }
      }
      break;
    case 10:
      iStack_1cc = *local_1d0;
      cStack_19d = '\0';
      uStack_240 = FUN_004aa6e0();
      FUN_0042a9e0();
      FUN_0042a9c0();
      while (cVar4 = FUN_0040d2d0(), cVar4 != '\0') {
        piStack_490 = (int *)FUN_0042a580();
        if (iStack_1cc == *piStack_490) {
          cStack_19d = '\x01';
          break;
        }
        FUN_0042a560();
      }
      if (((cStack_19d != '\0') && (iStack_1cc != 0)) && (cVar4 = FUN_0044e1c0(), cVar4 == '\0')) {
        FUN_0044e0f0();
        while( true ) {
          FUN_0040d9a0();
          cVar4 = FUN_0040d2d0();
          if (cVar4 == '\0') break;
          piVar6 = (int *)FUN_0042a580();
          if ((*piVar6 != 0) && (piVar6 = (int *)FUN_0042a580(), *(int *)(*piVar6 + 0x24) != 0)) {
            FUN_0042a580();
            FUN_0042a580();
            FUN_0042a580();
            FUN_0042a580();
            FUN_004e8ac0();
          }
          FUN_0042a560();
        }
      }
      break;
    case 0xb:
      iStack_1e0 = *local_1d0;
      cStack_199 = '\0';
      game_get_state_ptr_d1520();
      piVar6 = (int *)FUN_004d58e0();
      iStack_244 = *piVar6 + 0x170;
      FUN_0042a9e0();
      FUN_0042a9c0();
      while (cVar4 = FUN_0040d2d0(), cVar4 != '\0') {
        piStack_498 = (int *)FUN_0042a580();
        iStack_248 = *piStack_498 + 0x8b8;
        FUN_0042a9e0();
        FUN_0042a9c0();
        while (cVar4 = FUN_0040d2d0(), cVar4 != '\0') {
          piStack_4a0 = (int *)FUN_0042a580();
          if (*piStack_4a0 == iStack_1e0) {
            cStack_199 = '\x01';
            break;
          }
          FUN_0042a560();
        }
        FUN_0042a560();
      }
      uStack_26c = FUN_00516d20();
      FUN_0042a9e0();
      FUN_0042a9c0();
      while (cVar4 = FUN_0040d2d0(), cVar4 != '\0') {
        piStack_4a8 = (int *)FUN_0042a580();
        if (*piStack_4a8 == iStack_1e0) {
          cStack_199 = '\x01';
          break;
        }
        FUN_0042a560();
      }
      if ((cStack_199 != '\0') && (iStack_1e0 != 0)) {
        FUN_004e8ac0();
      }
      break;
    case 0xc:
      iStack_198 = *local_1d0;
      cStack_19e = '\0';
      game_get_state_ptr_d1520();
      piVar6 = (int *)FUN_004d58e0();
      iStack_250 = *piVar6 + 0x170;
      FUN_0042a9e0();
      FUN_0042a9c0();
      while (cVar4 = FUN_0040d2d0(), cVar4 != '\0') {
        piStack_4b0 = (int *)FUN_0042a580();
        if (iStack_198 == *piStack_4b0) {
          cStack_19e = '\x01';
          break;
        }
        FUN_0042a560();
      }
      if ((cStack_19e != '\0') && (iStack_198 != 0)) {
        if (*(char *)(*(int *)(iStack_198 + 0x8e8) + 0x54) == '\0') {
          *(undefined4 *)(*(int *)(iStack_198 + 0x8e8) + 0x88) = 1;
          FUN_004e8ae0();
          *(undefined4 *)(*(int *)(iStack_198 + 0x8e8) + 0x88) = 0;
          FUN_004e8ac0();
        }
        else {
          *(undefined1 *)(*(int *)(iStack_198 + 0x8e8) + 0x54) = 0;
          *(undefined4 *)(*(int *)(iStack_198 + 0x8e8) + 0x88) = 1;
          FUN_004e8ae0();
          *(undefined4 *)(*(int *)(iStack_198 + 0x8e8) + 0x88) = 0;
          *(undefined1 *)(*(int *)(iStack_198 + 0x8e8) + 0x54) = 0;
          FUN_004e8ac0();
          *(undefined1 *)(*(int *)(iStack_198 + 0x8e8) + 0x54) = 1;
          FUN_004e8ac0();
        }
        FUN_004bb400();
      }
    }
    local_1d0 = local_1d0 + 6;
  } while( true );
}


/* ==== 004e82c0  FUN_004e82c0  size=316 ==== */

void FUN_004e82c0(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int in_ECX;
  undefined4 uVar5;
  undefined1 local_34 [4];
  undefined1 local_30 [4];
  undefined1 local_2c [4];
  undefined1 local_28 [4];
  undefined4 local_24;
  int *local_20;
  int *local_1c;
  int *local_18;
  undefined4 local_14;
  int *local_10;
  int local_c;
  undefined1 local_5;
  
  local_20 = (int *)(in_ECX + 0xbc);
  local_1c = (int *)(in_ECX + 0x90);
  local_c = in_ECX;
  for (local_18 = local_1c; local_18 != local_20; local_18 = local_18 + 1) {
    local_10 = local_18;
    FUN_004021b0(&local_14);
    while( true ) {
      uVar2 = FUN_00402170(local_28);
      cVar1 = FUN_00426ed0(uVar2);
      if (cVar1 == '\0') break;
      iVar3 = FUN_00401b20();
      if (*(char *)(iVar3 + 0x14) == '\0') {
        local_24 = local_14;
        puVar4 = (undefined4 *)FUN_00518940(local_2c,local_14);
        local_14 = *puVar4;
      }
      else {
        FUN_005183b0();
      }
    }
    if (*(char *)(local_c + 0x84 + *local_10) != '\0') {
      local_5 = 0;
      uVar5 = 0;
      puVar4 = (undefined4 *)FUN_00402170(local_30);
      uVar2 = *puVar4;
      puVar4 = (undefined4 *)FUN_004021b0(local_34);
      FUN_0051bc00(*puVar4,uVar2,uVar5);
      *(undefined1 *)(local_c + 0x84 + *local_10) = 0;
    }
    FUN_004e5480(*local_10 * 0xc + local_c,param_1);
  }
  return;
}


/* ==== 004e8400  FUN_004e8400  size=49 ==== */

bool FUN_004e8400(int param_1,int param_2)

{
  return *(int *)(param_1 + 8) < *(int *)(param_2 + 8);
}


/* ==== 004e8440  FUN_004e8440  size=122 ==== */

void FUN_004e8440(int param_1,int *param_2,int *param_3,float param_4)

{
  int iVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0x8c) != 1) && (*(int *)(param_1 + 0x8c) != 0)) {
    *param_3 = (int)((float)*param_3 - param_4);
    while (*param_3 < 1) {
      iVar2 = (*param_2 + 1) % *(int *)(param_1 + 0x8c);
      iVar1 = FUN_0040d680(iVar2);
      *param_3 = *param_3 + *(int *)(iVar1 + 0x44);
      *param_2 = iVar2;
    }
  }
  return;
}


/* ==== 004e84c0  FUN_004e84c0  size=38 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_004e84c0(void)

{
  return;
}


/* ==== 004e8ac0  FUN_004e8ac0  size=29 ==== */

void FUN_004e8ac0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_004bba80(param_1,param_2,param_3);
  return;
}


/* ==== 004e8ae0  FUN_004e8ae0  size=33 ==== */

void FUN_004e8ae0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_004bc570(param_1,param_2,param_3,param_4);
  return;
}


/* ==== 004e8b10  FUN_004e8b10  size=574 ==== */

void FUN_004e8b10(int *param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint local_c;
  uint local_8;
  
  if ((*param_1 != 1000) ||
     ((piVar2 = (int *)game_get_state_ptr_d1520(), *(char *)(*piVar2 + 0x9d4) != '\0' &&
      (piVar2 = (int *)game_get_state_ptr_d1520(), *(int *)(*piVar2 + 0xb4) == -1)))) {
    cVar1 = FUN_00427c60(param_1 + 1,"[left]");
    if (cVar1 == '\0') {
      param_1[0x1d] = 1;
    }
    else {
      param_1[0x1d] = -1;
    }
    cVar1 = game_frame_should_continue();
    if (cVar1 == '\0') {
      param_1[0x2c] = 1;
      FUN_004e8ae0(param_1 + 10,param_1[7] - *param_2,param_1[8] - param_2[1],0x7d000000);
      param_1[0x2c] = 0;
      if ((char)param_1[0x1f] != '\0') {
        *(undefined1 *)(param_1 + 0x1f) = 0;
        FUN_004e8ac0(param_1 + 10,param_1[7] - *param_2,param_1[8] - param_2[1]);
        *(undefined1 *)(param_1 + 0x1f) = 1;
      }
      FUN_004e8ac0(param_1 + 10,param_1[7] - *param_2,param_1[8] - param_2[1]);
    }
    cVar1 = game_frame_should_continue();
    if (cVar1 == '\0') {
      FUN_004e8ac0(param_1 + 0x57,param_1[7] - *param_2,param_1[8] - param_2[1]);
    }
    for (local_8 = 0; uVar3 = FUN_00427230(), local_8 < uVar3; local_8 = local_8 + 1) {
      iVar5 = param_1[0xa8] - param_2[1];
      iVar6 = param_1[0xa7] - *param_2;
      uVar4 = FUN_00427200(local_8);
      FUN_004bb400(uVar4,iVar6,iVar5);
    }
    for (local_c = 0; uVar3 = FUN_00519d80(), local_c < uVar3; local_c = local_c + 1) {
      iVar5 = param_1[0xa8] - param_2[1];
      iVar6 = param_1[0xa7] - *param_2;
      uVar4 = FUN_0040d4b0(local_c);
      FUN_004e8ac0(uVar4,iVar6,iVar5);
    }
  }
  return;
}


/* ==== 004e8d50  FUN_004e8d50  size=461 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_004e8d50(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_60 [12];
  undefined4 uStack_54;
  int iStack_50;
  int iStack_4c;
  char *pcStack_48;
  uint uStack_44;
  undefined1 *local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  function<void___cdecl(void)> local_2c [24];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071624d;
  local_10 = ExceptionList;
  uStack_44 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  pcStack_48 = (char *)0x4e8d83;
  local_14 = uStack_44;
  cVar1 = game_frame_should_continue();
  if (cVar1 == '\0') {
    pcStack_48 = "[distantback]";
    iStack_4c = param_1 + 0x18;
    iStack_50 = 0x4e8d9f;
    cVar1 = FUN_00427c60();
    if (cVar1 == '\0') {
      pcStack_48 = "[middleback]";
      iStack_4c = param_1 + 0x18;
      iStack_50 = 0x4e8de7;
      cVar1 = FUN_00427c60();
      if (cVar1 == '\0') {
        pcStack_48 = "[close]";
        iStack_4c = param_1 + 0x18;
        iStack_50 = 0x4e8e2b;
        cVar1 = FUN_00427c60();
        if (cVar1 == '\0') {
          local_30 = 0;
        }
        else {
          local_30 = (int)((float)*param_2 * ((float)*(int *)(DAT_007ca234 + 0x98) / 100.0));
        }
      }
      else {
        local_30 = (int)((float)*param_2 * ((float)*(int *)(DAT_007ca234 + 0x94) / 100.0));
      }
    }
    else {
      local_30 = (int)((float)*param_2 * ((float)*(int *)(DAT_007ca234 + 0x90) / 100.0));
    }
    pcStack_48 = (char *)0x0;
    iStack_4c = 0x4e8e73;
    iVar2 = FUN_0040d680();
    pcStack_48 = (char *)(iVar2 + 8);
    iStack_4c = 0x4e8e7f;
    FUN_00405520();
    local_8 = 0;
    pcStack_48 = (char *)0x0;
    local_40 = auStack_60;
    FUN_00405520(local_2c);
    local_3c = FUN_004b8ca0();
    local_38 = local_3c;
    for (local_34 = -1; local_34 < 5; local_34 = local_34 + 1) {
      pcStack_48 = (char *)(-0x78 - param_2[1]);
      iStack_4c = local_34 * *(int *)(local_3c + 0xc) - local_30;
      iStack_50 = param_1 + 0x48;
      uStack_54 = 0x4e8eef;
      FUN_004e8ac0();
    }
    local_8 = 0xffffffff;
    pcStack_48 = (char *)0x4e8f03;
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_2c);
  }
  ExceptionList = local_10;
  return;
}


/* ==== 004e8f20  FUN_004e8f20  size=331 ==== */

void FUN_004e8f20(int param_1,int *param_2)

{
  char cVar1;
  int local_c;
  int local_8;
  
  cVar1 = game_frame_should_continue();
  if (cVar1 == '\0') {
    cVar1 = FUN_00427c60(param_1 + 0x18,"[distantback]");
    if (cVar1 == '\0') {
      cVar1 = FUN_00427c60(param_1 + 0x18,"[middleback]");
      if (cVar1 == '\0') {
        cVar1 = FUN_00427c60(param_1 + 0x18,"[close]");
        if (cVar1 == '\0') {
          local_8 = *param_2;
        }
        else {
          local_8 = (int)((float)*param_2 * ((float)*(int *)(DAT_007ca234 + 0x98) / 100.0));
        }
      }
      else {
        local_8 = (int)((float)*param_2 * ((float)*(int *)(DAT_007ca234 + 0x94) / 100.0));
      }
    }
    else {
      local_8 = (int)((float)*param_2 * ((float)*(int *)(DAT_007ca234 + 0x90) / 100.0));
    }
    cVar1 = FUN_00427c60(param_1 + 0x18,"[bottom]");
    if (cVar1 == '\0') {
      local_c = param_2[1];
    }
    else {
      local_c = param_2[1];
    }
    FUN_004e8ac0(param_1 + 0x3c,*(int *)(param_1 + 0x30) - local_8,
                 *(int *)(param_1 + 0x34) - local_c);
  }
  return;
}


/* ==== 004e9070  FUN_004e9070  size=756 ==== */

void FUN_004e9070(void)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_c;
  undefined4 local_8;
  
  local_8 = 0;
  while( true ) {
    uVar1 = FUN_00427020();
    if (uVar1 <= local_8) break;
    local_14 = 0;
    while( true ) {
      FUN_00427000();
      uVar1 = FUN_0048afb0();
      if (uVar1 <= local_14) break;
      FUN_00427000();
      FUN_0044e440();
      uVar1 = local_14;
      FUN_00427000(local_8);
      uVar2 = FUN_0044e440(uVar1);
      FUN_00405520(uVar2);
      FUN_004bad40();
      local_14 = local_14 + 1;
    }
    iVar3 = FUN_004277a0();
    if (iVar3 == -1) {
      FUN_00427000();
      FUN_0044e2b0();
    }
    else {
      FUN_00427000();
      FUN_0044e2b0();
    }
    local_c = 0;
    while( true ) {
      uVar1 = FUN_00427020();
      uVar4 = FUN_00427020();
      if (uVar1 / uVar4 <= local_c) break;
      local_18 = 0;
      while( true ) {
        FUN_00427020();
        FUN_00427000();
        uVar1 = FUN_0048afb0();
        if (uVar1 <= local_18) break;
        FUN_00427020();
        FUN_00427000();
        FUN_0044e440();
        uVar1 = local_18;
        iVar3 = FUN_00427020(local_18);
        FUN_00427000(iVar3 * local_c + local_8);
        uVar2 = FUN_0044e440(uVar1);
        FUN_00405520(uVar2);
        FUN_004bad40();
        local_18 = local_18 + 1;
      }
      FUN_00427020();
      FUN_00427000();
      FUN_0044e2b0();
      local_c = local_c + 1;
    }
    local_8 = local_8 + 1;
  }
  return;
}


/* ==== 004e9370  FUN_004e9370  size=590 ==== */

undefined4 FUN_004e9370(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  undefined1 local_78 [24];
  undefined1 local_60 [12];
  undefined1 local_54 [4];
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  undefined1 local_38 [4];
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  undefined1 local_11;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_007162be;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  local_20 = 0;
  local_34 = FUN_005182b0(DAT_007c5940 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  local_20 = local_20 | 1;
  uVar1 = FUN_0044de50();
  uVar2 = FUN_0044de50();
  if (uVar1 < uVar2) {
    FUN_005186d0(param_3);
    local_8 = 1;
    local_11 = 2;
    uVar3 = allocator<>();
    uVar3 = FUN_00519ef0(0xe,&local_11,uVar3);
    local_8._0_1_ = 2;
    local_28 = uVar3;
    local_24 = uVar3;
    uVar4 = FUN_0044de50(uVar3);
    FUN_00518580(uVar4,uVar3);
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_0048ad80();
    local_18 = 0;
    while( true ) {
      uVar1 = FUN_0044de50();
      if (uVar1 <= local_18) break;
      uVar3 = FUN_0044de30(local_18);
      FUN_00519e80(uVar3);
      local_8._0_1_ = 3;
      puVar5 = (undefined4 *)FUN_00402170(local_38);
      local_2c = *puVar5;
      puVar6 = local_3c;
      FUN_0044de30(local_18);
      puVar5 = (undefined4 *)FUN_00402170(puVar6);
      uVar3 = *puVar5;
      puVar6 = local_40;
      FUN_0044de30(local_18);
      puVar5 = (undefined4 *)FUN_004021b0(puVar6);
      FUN_0051bc70(local_44,local_2c,*puVar5,uVar3);
      FUN_00518620(local_60);
      local_8 = CONCAT31(local_8._1_3_,1);
      FUN_0048ad80();
      local_18 = local_18 + 1;
    }
    local_8 = local_8 & 0xffffff00;
    FUN_00518640();
  }
  else {
    local_1c = 0;
    while( true ) {
      uVar1 = FUN_0044de50();
      if (uVar1 <= local_1c) break;
      uVar3 = FUN_0044de30(local_1c);
      FUN_00519e80(uVar3);
      local_8 = 4;
      puVar5 = (undefined4 *)FUN_00402170(local_48);
      local_30 = *puVar5;
      puVar6 = local_4c;
      FUN_0044de30(local_1c);
      puVar5 = (undefined4 *)FUN_00427720(puVar6);
      uVar3 = *puVar5;
      puVar6 = local_50;
      FUN_0044de30(local_1c);
      puVar5 = (undefined4 *)FUN_00427760(puVar6);
      FUN_0051bc70(local_54,local_30,*puVar5,uVar3);
      FUN_00518620(local_78);
      local_8 = local_8 & 0xffffff00;
      FUN_0048ad80();
      local_1c = local_1c + 1;
    }
  }
  ExceptionList = local_10;
  return param_1;
}


/* ==== 004e95d0  FUN_004e95d0  size=11910 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_004e95d0(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  int *piVar5;
  char *pcVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  undefined1 auStack_bb8 [8];
  undefined4 uStack_bb0;
  uint uStack_bac;
  function<void___cdecl(void)> *pfStack_ba8;
  undefined1 *puStack_ba4;
  undefined4 uStack_ba0;
  char *pcStack_b9c;
  undefined4 uStack_b98;
  function<void___cdecl(void)> *pfStack_b94;
  undefined *puStack_b90;
  _AsyncTaskCollection *p_Stack_b8c;
  undefined4 uStack_b88;
  undefined4 uStack_b84;
  undefined4 uStack_b80;
  undefined4 uStack_b7c;
  undefined1 *puStack_b78;
  undefined4 *puStack_b74;
  uint uStack_b70;
  function<void___cdecl(void)> local_b5c [12];
  undefined4 local_b50;
  undefined1 *local_b4c;
  undefined1 *local_b48;
  undefined1 *local_b44;
  undefined1 *local_b40;
  undefined1 local_b3c [4];
  undefined1 *local_b38;
  undefined1 *local_b34;
  undefined1 *local_b30;
  undefined1 *local_b2c;
  undefined1 *local_b28;
  undefined1 *local_b24;
  undefined4 local_b20;
  undefined1 *local_b1c;
  undefined1 *local_b18;
  undefined1 *local_b14;
  undefined4 local_b10;
  undefined4 local_b0c;
  undefined1 *local_b08;
  undefined1 *local_b04;
  undefined4 local_b00;
  undefined1 *local_afc;
  undefined1 *local_af8;
  int local_af4;
  undefined1 local_af0 [4];
  undefined1 *local_aec;
  undefined1 *local_ae8;
  undefined4 local_ae4;
  undefined1 *local_ae0;
  undefined1 *local_adc;
  undefined1 local_ad8 [4];
  undefined1 *local_ad4;
  undefined1 local_ad0 [12];
  int local_ac4;
  int local_ac0;
  undefined4 local_abc;
  int *local_ab8;
  int local_ab4;
  int local_ab0;
  int local_aac;
  int local_aa8;
  undefined4 local_a98;
  int local_a94;
  int local_a90;
  int local_a8c;
  undefined4 local_a88;
  undefined4 local_a84;
  undefined1 *local_a80;
  undefined4 local_a7c;
  undefined4 local_a78;
  int local_a74;
  undefined4 local_a70;
  undefined4 local_a6c;
  uint local_a68;
  int *local_a64;
  undefined4 local_a60;
  undefined4 local_a5c;
  uint local_a58;
  undefined4 local_a54;
  undefined4 local_a50;
  int local_a4c;
  undefined4 local_a48;
  undefined4 local_a44;
  undefined4 local_a40;
  undefined4 local_a3c;
  undefined4 local_a38;
  int local_a34;
  int local_a30;
  function<void___cdecl(void)> *local_a2c;
  int local_a28;
  undefined1 local_a24 [4];
  undefined4 local_a20;
  undefined4 local_a1c;
  int local_a18;
  int local_a14;
  undefined1 local_a10 [4];
  undefined *local_a0c;
  int local_a08;
  int local_a04;
  int local_a00;
  int local_9fc;
  int local_9f8;
  int local_9f4;
  int local_9f0;
  undefined1 local_9ec [8];
  int *local_9e4;
  uint local_9e0;
  undefined1 *local_9dc;
  int *local_9d8;
  int local_9d4;
  uint local_9d0;
  int local_9cc;
  int local_9c8;
  undefined4 local_9c4;
  uint local_9c0;
  int local_9bc;
  uint local_9b8;
  uint local_9b4;
  int local_9b0;
  int local_9ac;
  int local_9a8;
  uint local_9a4;
  uint local_9a0;
  uint local_99c;
  undefined1 *local_998;
  uint local_994;
  undefined1 local_98d;
  int local_98c;
  undefined1 local_985;
  uint local_984;
  uint local_980;
  int *local_97c;
  uint local_978;
  uint local_974;
  uint local_970;
  uint local_96c;
  int *local_968;
  uint local_964;
  int local_960;
  undefined4 local_95c [7];
  undefined4 local_940;
  undefined4 local_93c;
  undefined4 local_938;
  _AsyncTaskCollection local_554 [380];
  _AsyncTaskCollection local_3d8 [48];
  undefined4 local_3a8;
  undefined4 local_3a4;
  undefined4 local_3a0;
  int local_260;
  int local_25c;
  undefined4 local_258;
  undefined4 local_254;
  function<void___cdecl(void)> local_104 [24];
  function<void___cdecl(void)> local_ec [24];
  function<void___cdecl(void)> local_d4 [24];
  function<void___cdecl(void)> local_bc [24];
  undefined1 local_a4 [4];
  undefined4 local_a0;
  int local_9c;
  undefined4 local_98;
  undefined4 local_7c;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_0071637c;
  local_10 = ExceptionList;
  uStack_b70 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  puStack_b74 = (undefined4 *)0x4e9608;
  local_14 = uStack_b70;
  FUN_004aac10();
  puStack_b74 = (undefined4 *)0x4e960d;
  FUN_00516d50();
  if (*(int *)(param_1 + 0xdd8) == 4) {
    if (*(char *)(param_1 + 0xdb8) == '\0') {
      local_a98 = 0x28;
      puStack_b74 = &local_a98;
      puStack_b78 = local_a24;
      uStack_b7c = 0x4e9656;
      FUN_00489da0();
      puStack_b74 = (undefined4 *)local_ad8;
      puStack_b78 = (undefined1 *)0x4e966c;
      puStack_b74 = (undefined4 *)FUN_00489e00();
      puStack_b78 = (undefined1 *)0x4e9678;
      cVar1 = FUN_0040d2d0();
      if (cVar1 != '\0') {
        puStack_b74 = (undefined4 *)0x4e968a;
        iVar2 = FUN_00489a10();
        if (0 < *(int *)(iVar2 + 0x78)) {
          local_b28 = (undefined1 *)&uStack_b88;
          p_Stack_b8c = (_AsyncTaskCollection *)0x750da8;
          puStack_b90 = (undefined *)0x4e96a5;
          FUN_004054a0();
          p_Stack_b8c = (_AsyncTaskCollection *)0x0;
          puStack_b90 = (undefined *)0x0;
          pfStack_b94 = (function<void___cdecl(void)> *)0x0;
          uStack_b98 = 0;
          pcStack_b9c = (char *)0x4e96b2;
          local_aa8 = FUN_004aa990();
          *(int *)(local_aa8 + 0x60) = param_1;
        }
      }
      if (*(char *)(param_1 + 0xa8e) != '\0') {
        local_b30 = (undefined1 *)&uStack_b88;
        p_Stack_b8c = (_AsyncTaskCollection *)0x750dd8;
        puStack_b90 = (undefined *)0x4e96ee;
        FUN_004054a0();
        p_Stack_b8c = (_AsyncTaskCollection *)0x0;
        puStack_b90 = (undefined *)0x0;
        pfStack_b94 = (function<void___cdecl(void)> *)0x0;
        uStack_b98 = 0;
        pcStack_b9c = (char *)0x4e96fb;
        local_aac = FUN_004aa990();
        *(int *)(local_aac + 0x60) = param_1;
        local_b34 = (undefined1 *)&uStack_b88;
        p_Stack_b8c = (_AsyncTaskCollection *)0x750d40;
        puStack_b90 = (undefined *)0x4e9725;
        FUN_004054a0();
        p_Stack_b8c = (_AsyncTaskCollection *)0x0;
        puStack_b90 = (undefined *)0x0;
        pfStack_b94 = (function<void___cdecl(void)> *)0x0;
        uStack_b98 = 0;
        pcStack_b9c = (char *)0x4e9732;
        local_ab0 = FUN_004aa990();
        *(int *)(local_ab0 + 0x60) = param_1;
        local_b38 = (undefined1 *)&uStack_b88;
        p_Stack_b8c = (_AsyncTaskCollection *)0x750d74;
        puStack_b90 = (undefined *)0x4e975c;
        FUN_004054a0();
        p_Stack_b8c = (_AsyncTaskCollection *)0x0;
        puStack_b90 = (undefined *)0x0;
        pfStack_b94 = (function<void___cdecl(void)> *)0x0;
        uStack_b98 = 0;
        pcStack_b9c = (char *)0x4e9769;
        local_ab4 = FUN_004aa990();
        *(int *)(local_ab4 + 0x60) = param_1;
      }
    }
    else {
      local_a0c = &DAT_007ca758;
      puStack_b74 = (undefined4 *)0x4e9798;
      local_9e4 = (int *)game_loop_helper_018d0();
      puStack_b74 = (undefined4 *)0x4e97a9;
      local_ab8 = (int *)game_loop_helper_018b0();
      for (; local_9e4 != local_ab8; local_9e4 = local_9e4 + 1) {
        local_97c = local_9e4;
        if (*local_9e4 != 0) {
          local_abc = 0x28;
          puStack_b74 = &local_abc;
          puStack_b78 = local_a10;
          uStack_b7c = 0x4e9818;
          FUN_00489da0();
          puStack_b74 = (undefined4 *)local_b3c;
          puStack_b78 = (undefined1 *)0x4e9833;
          puStack_b74 = (undefined4 *)FUN_00489e00();
          puStack_b78 = (undefined1 *)0x4e983f;
          cVar1 = FUN_0040d2d0();
          if (cVar1 != '\0') {
            puStack_b74 = (undefined4 *)0x4e9851;
            iVar2 = FUN_00489a10();
            if (0 < *(int *)(iVar2 + 0x78)) {
              local_b40 = (undefined1 *)&uStack_b88;
              p_Stack_b8c = (_AsyncTaskCollection *)0x750e74;
              puStack_b90 = (undefined *)0x4e986c;
              FUN_004054a0();
              p_Stack_b8c = (_AsyncTaskCollection *)0x0;
              puStack_b90 = (undefined *)0x0;
              pfStack_b94 = (function<void___cdecl(void)> *)0x0;
              uStack_b98 = 0;
              pcStack_b9c = (char *)0x4e9879;
              local_ac0 = FUN_004aa990();
              *(int *)(local_ac0 + 0x60) = *local_97c;
            }
          }
          if (*(char *)(*local_97c + 0xa8e) != '\0') {
            local_b44 = (undefined1 *)&uStack_b88;
            p_Stack_b8c = (_AsyncTaskCollection *)0x750ea4;
            puStack_b90 = (undefined *)0x4e98bf;
            FUN_004054a0();
            p_Stack_b8c = (_AsyncTaskCollection *)0x0;
            puStack_b90 = (undefined *)0x0;
            pfStack_b94 = (function<void___cdecl(void)> *)0x0;
            uStack_b98 = 0;
            pcStack_b9c = (char *)0x4e98cc;
            local_ac4 = FUN_004aa990();
            *(int *)(local_ac4 + 0x60) = *local_97c;
            local_b48 = (undefined1 *)&uStack_b88;
            p_Stack_b8c = (_AsyncTaskCollection *)0x750e0c;
            puStack_b90 = (undefined *)0x4e98fb;
            FUN_004054a0();
            p_Stack_b8c = (_AsyncTaskCollection *)0x0;
            puStack_b90 = (undefined *)0x0;
            pfStack_b94 = (function<void___cdecl(void)> *)0x0;
            uStack_b98 = 0;
            pcStack_b9c = (char *)0x4e9908;
            local_a30 = FUN_004aa990();
            *(int *)(local_a30 + 0x60) = *local_97c;
            local_b4c = (undefined1 *)&uStack_b88;
            p_Stack_b8c = (_AsyncTaskCollection *)0x750e40;
            puStack_b90 = (undefined *)0x4e9937;
            FUN_004054a0();
            p_Stack_b8c = (_AsyncTaskCollection *)0x0;
            puStack_b90 = (undefined *)0x0;
            pfStack_b94 = (function<void___cdecl(void)> *)0x0;
            uStack_b98 = 0;
            pcStack_b9c = (char *)0x4e9944;
            local_a34 = FUN_004aa990();
            *(int *)(local_a34 + 0x60) = *local_97c;
          }
        }
      }
    }
  }
  local_9a0 = 0;
  while( true ) {
    puStack_b74 = (undefined4 *)0x4e999c;
    uVar3 = FUN_00518f60();
    if (uVar3 <= local_9a0) break;
    puStack_b74 = (undefined4 *)0x0;
    puStack_b78 = (undefined1 *)0x0;
    uStack_b7c = 0;
    uStack_b80 = 0;
    local_b2c = (undefined1 *)&uStack_b98;
    pcStack_b9c = (char *)local_9a0;
    uStack_ba0 = 0x4e99cf;
    iVar2 = FUN_00518f30();
    pcStack_b9c = (char *)(iVar2 + 0x18);
    uStack_ba0 = 0x4e99da;
    FUN_00405520();
    pcStack_b9c = (char *)0x4e99df;
    uStack_b84 = FUN_0063d0d0();
    uStack_b88 = 3;
    p_Stack_b8c = (_AsyncTaskCollection *)local_9a0;
    puStack_b90 = (undefined *)0x4e9a09;
    local_a38 = uStack_b84;
    p_Stack_b8c = (_AsyncTaskCollection *)FUN_00518f30();
    puStack_b90 = (undefined *)0x4e9a0f;
    FUN_004e50c0();
    puStack_b90 = (undefined *)0x4e9a16;
    FUN_004e5240();
    local_9a0 = local_9a0 + 1;
  }
  local_9a4 = 0;
  while( true ) {
    puStack_b74 = (undefined4 *)0x4e9a48;
    uVar3 = FUN_00519060();
    if (uVar3 <= local_9a4) break;
    puStack_b74 = (undefined4 *)0x0;
    puStack_b78 = (undefined1 *)0x0;
    uStack_b7c = 0;
    uStack_b80 = 0;
    local_ad4 = (undefined1 *)&uStack_b98;
    pcStack_b9c = (char *)local_9a4;
    uStack_ba0 = 0x4e9a7b;
    iVar2 = FUN_00519030();
    pcStack_b9c = (char *)(iVar2 + 0x18);
    uStack_ba0 = 0x4e9a86;
    FUN_00405520();
    pcStack_b9c = (char *)0x4e9a8b;
    uStack_b84 = FUN_0063d0d0();
    uStack_b88 = 4;
    p_Stack_b8c = (_AsyncTaskCollection *)local_9a4;
    puStack_b90 = (undefined *)0x4e9ab5;
    local_a3c = uStack_b84;
    p_Stack_b8c = (_AsyncTaskCollection *)FUN_00519030();
    puStack_b90 = (undefined *)0x4e9abb;
    FUN_004e50c0();
    puStack_b90 = (undefined *)0x4e9ac2;
    FUN_004e5240();
    local_9a4 = local_9a4 + 1;
  }
  puStack_b74 = (undefined4 *)0x0;
  puStack_b78 = (undefined1 *)0x0;
  uStack_b7c = 0;
  uStack_b80 = 0;
  local_b18 = (undefined1 *)&uStack_b98;
  pcStack_b9c = "[tile]";
  uStack_ba0 = 0x4e9ae5;
  FUN_004054a0();
  pcStack_b9c = (char *)0x4e9aea;
  uStack_b84 = FUN_0063d0d0();
  uStack_b88 = 0;
  p_Stack_b8c = (_AsyncTaskCollection *)&DAT_007ca1c4;
  puStack_b90 = (undefined *)0x4e9b06;
  local_a40 = uStack_b84;
  FUN_004e50c0();
  puStack_b90 = (undefined *)0x4e9b0d;
  FUN_004e5240();
  local_9e0 = 0;
  while( true ) {
    puStack_b74 = (undefined4 *)0x4e9b3a;
    uVar3 = FUN_00426f70();
    if (uVar3 <= local_9e0) break;
    puStack_b74 = (undefined4 *)0x0;
    puStack_b78 = (undefined1 *)0x0;
    uStack_b7c = 0;
    uStack_b80 = 0;
    local_adc = (undefined1 *)&uStack_b98;
    pcStack_b9c = "[normal]";
    uStack_ba0 = 0x4e9b5f;
    FUN_004054a0();
    pcStack_b9c = (char *)0x4e9b64;
    uStack_b84 = FUN_0063d0d0();
    uStack_b88 = 5;
    p_Stack_b8c = (_AsyncTaskCollection *)local_9e0;
    puStack_b90 = (undefined *)0x4e9b8e;
    local_a44 = uStack_b84;
    p_Stack_b8c = (_AsyncTaskCollection *)FUN_00426f40();
    puStack_b90 = (undefined *)0x4e9b94;
    FUN_004e50c0();
    puStack_b90 = (undefined *)0x4e9b9b;
    FUN_004e5240();
    local_9e0 = local_9e0 + 1;
  }
  puStack_b74 = (undefined4 *)0x4e9bac;
  FUN_004cf440();
  local_ae0 = (undefined1 *)&uStack_b88;
  p_Stack_b8c = (_AsyncTaskCollection *)&stack0x00000008;
  puStack_b90 = (undefined *)0x4e9bc1;
  FUN_00405520();
  p_Stack_b8c = (_AsyncTaskCollection *)0x4e9bcc;
  p_Stack_b8c = (_AsyncTaskCollection *)FUN_005b75d0();
  puStack_b90 = (undefined *)0x4e9be4;
  local_a48 = p_Stack_b8c;
  FUN_004ec460();
  p_Stack_b8c = (_AsyncTaskCollection *)0x0;
  puStack_b90 = &DAT_00750ed8;
  pfStack_b94 = (function<void___cdecl(void)> *)0x4e9bf4;
  iVar2 = FUN_004277a0();
  if (iVar2 != -1) {
    local_ae4 = 0;
  }
  local_980 = 0;
  while( true ) {
    p_Stack_b8c = (_AsyncTaskCollection *)0x4e9c2c;
    uVar3 = FUN_00519a40();
    if (uVar3 <= local_980) break;
    p_Stack_b8c = (_AsyncTaskCollection *)0x4e9c43;
    FUN_004cf300();
    local_8._0_1_ = 1;
    p_Stack_b8c = (_AsyncTaskCollection *)local_980;
    puStack_b90 = (undefined *)0x4e9c5c;
    p_Stack_b8c = (_AsyncTaskCollection *)FUN_00519a20();
    puStack_b90 = (undefined *)0x4e9c68;
    FUN_0040d840();
    p_Stack_b8c = (_AsyncTaskCollection *)local_980;
    puStack_b90 = (undefined *)0x4e9c7d;
    iVar2 = FUN_00519a20();
    p_Stack_b8c = (_AsyncTaskCollection *)(iVar2 + 0x18);
    puStack_b90 = (undefined *)0x4e9c8c;
    FUN_0040d840();
    p_Stack_b8c = (_AsyncTaskCollection *)local_980;
    puStack_b90 = (undefined *)0x4e9ca1;
    iVar2 = FUN_00519a20();
    local_3a8 = *(undefined4 *)(iVar2 + 0x30);
    p_Stack_b8c = (_AsyncTaskCollection *)local_980;
    puStack_b90 = (undefined *)0x4e9cbf;
    iVar2 = FUN_00519a20();
    local_3a4 = *(undefined4 *)(iVar2 + 0x34);
    p_Stack_b8c = (_AsyncTaskCollection *)local_980;
    puStack_b90 = (undefined *)0x4e9cdd;
    iVar2 = FUN_00519a20();
    local_3a0 = *(undefined4 *)(iVar2 + 0x38);
    p_Stack_b8c = local_3d8;
    puStack_b90 = (undefined *)0x4e9cfe;
    FUN_005190f0();
    local_8 = (uint)local_8._1_3_ << 8;
    p_Stack_b8c = (_AsyncTaskCollection *)0x4e9d0d;
    Concurrency::details::_AsyncTaskCollection::~_AsyncTaskCollection(local_3d8);
    local_980 = local_980 + 1;
  }
  local_974 = 0;
  while( true ) {
    p_Stack_b8c = (_AsyncTaskCollection *)0x4e9d3f;
    uVar3 = FUN_00519060();
    if (uVar3 <= local_974) break;
    p_Stack_b8c = (_AsyncTaskCollection *)local_974;
    puStack_b90 = (undefined *)0x4e9d63;
    p_Stack_b8c = (_AsyncTaskCollection *)FUN_00519030();
    puStack_b90 = (undefined *)0x4e9d69;
    local_9a8 = FUN_005e9250();
    p_Stack_b8c = (_AsyncTaskCollection *)local_974;
    puStack_b90 = (undefined *)0x4e9d8a;
    iVar2 = FUN_00519030();
    *(undefined1 *)(iVar2 + 0x65) = 1;
    p_Stack_b8c = (_AsyncTaskCollection *)(local_9a8 + 0x34);
    puStack_b90 = (undefined *)local_974;
    pfStack_b94 = (function<void___cdecl(void)> *)0x4e9db0;
    FUN_00519030();
    puStack_b90 = (undefined *)0x4e9dba;
    FUN_004275e0();
    p_Stack_b8c = (_AsyncTaskCollection *)local_974;
    puStack_b90 = (undefined *)0x4e9dd2;
    iVar2 = FUN_00519030();
    *(undefined4 *)(iVar2 + 0xc0) = *(undefined4 *)(local_9a8 + 0x84);
    p_Stack_b8c = (_AsyncTaskCollection *)local_974;
    puStack_b90 = (undefined *)0x4e9dfc;
    iVar2 = FUN_00519030();
    *(undefined4 *)(iVar2 + 200) = *(undefined4 *)(local_9a8 + 0x8c);
    p_Stack_b8c = (_AsyncTaskCollection *)local_974;
    puStack_b90 = (undefined *)0x4e9e26;
    iVar2 = FUN_00519030();
    *(undefined4 *)(iVar2 + 0xc4) = *(undefined4 *)(local_9a8 + 0x88);
    p_Stack_b8c = (_AsyncTaskCollection *)&local_9a8;
    puStack_b90 = (undefined *)0x4e9e44;
    FUN_004d1b30();
    puStack_b90 = (undefined *)0x4e9e4b;
    FUN_00517ee0();
    local_974 = local_974 + 1;
  }
  local_994 = 0;
  while( true ) {
    p_Stack_b8c = (_AsyncTaskCollection *)0x4e9e7a;
    uVar3 = FUN_00519880();
    if (uVar3 <= local_994) break;
    p_Stack_b8c = (_AsyncTaskCollection *)0x4e9e91;
    FUN_004ec670();
    local_8._0_1_ = 2;
    p_Stack_b8c = (_AsyncTaskCollection *)local_994;
    puStack_b90 = (undefined *)0x4e9eaa;
    p_Stack_b8c = (_AsyncTaskCollection *)FUN_00519860();
    puStack_b90 = (undefined *)0x4e9eb6;
    FUN_0040d840();
    p_Stack_b8c = (_AsyncTaskCollection *)local_994;
    puStack_b90 = (undefined *)0x4e9ecb;
    iVar2 = FUN_00519860();
    p_Stack_b8c = (_AsyncTaskCollection *)(iVar2 + 0x18);
    puStack_b90 = (undefined *)0x4e9eda;
    FUN_0040d840();
    p_Stack_b8c = (_AsyncTaskCollection *)local_994;
    puStack_b90 = (undefined *)0x4e9eef;
    iVar2 = FUN_00519860();
    p_Stack_b8c = (_AsyncTaskCollection *)(iVar2 + 0x30);
    puStack_b90 = (undefined *)0x4e9efe;
    FUN_0040d840();
    p_Stack_b8c = local_554;
    puStack_b90 = (undefined *)0x4e9f16;
    FUN_00518ff0();
    local_8 = (uint)local_8._1_3_ << 8;
    p_Stack_b8c = (_AsyncTaskCollection *)0x4e9f25;
    Concurrency::details::_AsyncTaskCollection::~_AsyncTaskCollection(local_554);
    local_994 = local_994 + 1;
  }
  local_978 = 0;
  while( true ) {
    p_Stack_b8c = (_AsyncTaskCollection *)0x4e9f57;
    uVar3 = FUN_00518f60();
    if (uVar3 <= local_978) break;
    p_Stack_b8c = (_AsyncTaskCollection *)local_978;
    puStack_b90 = (undefined *)0x4e9f7b;
    p_Stack_b8c = (_AsyncTaskCollection *)FUN_00518f30();
    puStack_b90 = (undefined *)0x4e9f81;
    local_9ac = FUN_005e9250();
    p_Stack_b8c = (_AsyncTaskCollection *)local_978;
    puStack_b90 = (undefined *)0x4e9fa2;
    iVar2 = FUN_00518f30();
    *(undefined1 *)(iVar2 + 0x71) = 1;
    p_Stack_b8c = (_AsyncTaskCollection *)(local_9ac + 0x34);
    puStack_b90 = (undefined *)local_978;
    pfStack_b94 = (function<void___cdecl(void)> *)0x4e9fc8;
    FUN_00518f30();
    puStack_b90 = (undefined *)0x4e9fd2;
    FUN_004275e0();
    p_Stack_b8c = (_AsyncTaskCollection *)local_978;
    puStack_b90 = (undefined *)0x4e9fea;
    iVar2 = FUN_00518f30();
    *(undefined4 *)(iVar2 + 0xcc) = *(undefined4 *)(local_9ac + 0x84);
    p_Stack_b8c = (_AsyncTaskCollection *)local_978;
    puStack_b90 = (undefined *)0x4ea014;
    iVar2 = FUN_00518f30();
    *(undefined4 *)(iVar2 + 0xd0) = *(undefined4 *)(local_9ac + 0x88);
    p_Stack_b8c = (_AsyncTaskCollection *)local_978;
    puStack_b90 = (undefined *)0x4ea03e;
    iVar2 = FUN_00518f30();
    *(undefined4 *)(iVar2 + 0xd4) = *(undefined4 *)(local_9ac + 0x8c);
    p_Stack_b8c = (_AsyncTaskCollection *)&local_9ac;
    puStack_b90 = (undefined *)0x4ea05c;
    FUN_004d1b30();
    puStack_b90 = (undefined *)0x4ea063;
    FUN_00517ee0();
    local_978 = local_978 + 1;
  }
  p_Stack_b8c = (_AsyncTaskCollection *)0x4ea074;
  FUN_005182b0();
  local_8 = CONCAT31(local_8._1_3_,3);
  local_9dc = (undefined1 *)0x0;
  while( true ) {
    p_Stack_b8c = (_AsyncTaskCollection *)0x4ea0a1;
    puVar4 = (undefined1 *)FUN_004274f0();
    if (puVar4 <= local_9dc) break;
    local_ae8 = (undefined1 *)&uStack_ba0;
    puStack_ba4 = local_9dc;
    pfStack_ba8 = (function<void___cdecl(void)> *)0x4ea0c9;
    puStack_ba4 = (undefined1 *)FUN_004274d0();
    pfStack_ba8 = (function<void___cdecl(void)> *)0x4ea0d1;
    FUN_00405520();
    puStack_ba4 = (undefined1 *)0x4ea0dc;
    p_Stack_b8c = (_AsyncTaskCollection *)FUN_005bcfc0();
    puStack_b90 = (undefined *)0x4ea106;
    local_a4c = (int)p_Stack_b8c;
    local_a14 = (int)p_Stack_b8c;
    FUN_00518e50();
    p_Stack_b8c = (_AsyncTaskCollection *)(local_a14 + 0x24);
    puStack_b90 = (undefined *)0x4ea11b;
    FUN_00518620();
    local_9dc = local_9dc + 1;
  }
  local_998 = (undefined1 *)0x0;
  while( true ) {
    p_Stack_b8c = (_AsyncTaskCollection *)0x4ea14d;
    puVar4 = (undefined1 *)FUN_004274f0();
    if (puVar4 <= local_998) break;
    local_aec = (undefined1 *)&uStack_ba0;
    puStack_ba4 = local_998;
    pfStack_ba8 = (function<void___cdecl(void)> *)0x4ea17c;
    puStack_ba4 = (undefined1 *)FUN_004274d0();
    pfStack_ba8 = (function<void___cdecl(void)> *)0x4ea184;
    FUN_00405520();
    puStack_ba4 = (undefined1 *)0x4ea18f;
    p_Stack_b8c = (_AsyncTaskCollection *)FUN_005bd910();
    puStack_b90 = (undefined *)0x4ea1b9;
    local_a54 = p_Stack_b8c;
    local_a50 = p_Stack_b8c;
    FUN_00518e50();
    p_Stack_b8c = (_AsyncTaskCollection *)local_998;
    puStack_b90 = (undefined *)0x4ea1d2;
    FUN_00427000();
    p_Stack_b8c = (_AsyncTaskCollection *)0x4ea1dc;
    uVar3 = FUN_0044e2b0();
    if (0x8c < uVar3) {
      p_Stack_b8c = (_AsyncTaskCollection *)0x8c;
      puStack_b90 = local_998;
      pfStack_b94 = (function<void___cdecl(void)> *)0x4ea200;
      FUN_00427000();
      puStack_b90 = (undefined *)0x4ea20a;
      FUN_00519df0();
    }
    local_998 = local_998 + 1;
  }
  p_Stack_b8c = (_AsyncTaskCollection *)0x4ea221;
  cVar1 = game_frame_should_continue();
  if (cVar1 == '\0') {
    p_Stack_b8c = (_AsyncTaskCollection *)0x4ea23a;
    local_a18 = FUN_004274f0();
    p_Stack_b8c = (_AsyncTaskCollection *)0x4ea251;
    uVar3 = FUN_004274f0();
    p_Stack_b8c = (_AsyncTaskCollection *)0x4ea261;
    local_a58 = FUN_004274f0();
    local_a58 = uVar3 / local_a58;
    for (local_9b0 = 0; local_9b0 < local_a18; local_9b0 = local_9b0 + 1) {
      for (local_9d4 = 0; local_9d4 < (int)local_a58; local_9d4 = local_9d4 + 1) {
        p_Stack_b8c = (_AsyncTaskCollection *)(local_9d4 * local_a18 + local_9b0);
        puStack_b90 = (undefined *)0x4ea2ee;
        local_a1c = FUN_00427000();
        local_9d0 = 0;
        while( true ) {
          p_Stack_b8c = (_AsyncTaskCollection *)0x4ea31d;
          uVar3 = FUN_0044e2b0();
          if (uVar3 <= local_9d0) break;
          p_Stack_b8c = (_AsyncTaskCollection *)local_9d0;
          puStack_b90 = (undefined *)0x4ea33a;
          p_Stack_b8c = (_AsyncTaskCollection *)FUN_0048ad40();
          puStack_b90 = (undefined *)local_9b0;
          pfStack_b94 = (function<void___cdecl(void)> *)0x4ea34d;
          FUN_0044de30();
          puStack_b90 = (undefined *)0x4ea354;
          FUN_0048ad60();
          local_9d0 = local_9d0 + 1;
        }
      }
    }
  }
  p_Stack_b8c = (_AsyncTaskCollection *)0x4ea366;
  FUN_00634ac0();
  p_Stack_b8c = (_AsyncTaskCollection *)0x4ea36d;
  FUN_00518520();
  local_99c = 0;
  do {
    p_Stack_b8c = (_AsyncTaskCollection *)0x4ea394;
    uVar3 = FUN_0044de50();
    if (uVar3 <= local_99c) {
      local_984 = 0;
      while( true ) {
        p_Stack_b8c = (_AsyncTaskCollection *)0x4eb778;
        uVar3 = FUN_004c38a0();
        if (uVar3 <= local_984) break;
        p_Stack_b8c = (_AsyncTaskCollection *)0x4eb78f;
        FUN_004cf380();
        local_8._0_1_ = 9;
        p_Stack_b8c = (_AsyncTaskCollection *)local_984;
        puStack_b90 = (undefined *)0x4eb7a8;
        puVar8 = (undefined4 *)npk_img_frame_ptr_at();
        local_95c[0] = *puVar8;
        p_Stack_b8c = (_AsyncTaskCollection *)local_984;
        puStack_b90 = (undefined *)0x4eb7c5;
        iVar2 = npk_img_frame_ptr_at();
        p_Stack_b8c = (_AsyncTaskCollection *)(iVar2 + 4);
        puStack_b90 = (undefined *)0x4eb7d4;
        FUN_0040d840();
        p_Stack_b8c = (_AsyncTaskCollection *)local_984;
        puStack_b90 = (undefined *)0x4eb7e9;
        iVar2 = npk_img_frame_ptr_at();
        local_940 = *(undefined4 *)(iVar2 + 0x1c);
        p_Stack_b8c = (_AsyncTaskCollection *)local_984;
        puStack_b90 = (undefined *)0x4eb807;
        iVar2 = npk_img_frame_ptr_at();
        local_93c = *(undefined4 *)(iVar2 + 0x20);
        p_Stack_b8c = (_AsyncTaskCollection *)local_984;
        puStack_b90 = (undefined *)0x4eb825;
        iVar2 = npk_img_frame_ptr_at();
        local_938 = *(undefined4 *)(iVar2 + 0x24);
        p_Stack_b8c = (_AsyncTaskCollection *)local_95c;
        puStack_b90 = (undefined *)0x4eb846;
        FUN_00518ef0();
        local_8 = CONCAT31(local_8._1_3_,3);
        p_Stack_b8c = (_AsyncTaskCollection *)0x4eb855;
        FUN_004ec720();
        local_984 = local_984 + 1;
      }
      local_964 = 0;
      while( true ) {
        p_Stack_b8c = (_AsyncTaskCollection *)0x4eb887;
        uVar3 = FUN_00426f70();
        if (uVar3 <= local_964) break;
        p_Stack_b8c = (_AsyncTaskCollection *)local_964;
        puStack_b90 = (undefined *)0x4eb8ab;
        piVar5 = (int *)FUN_00426f40();
        p_Stack_b8c = (_AsyncTaskCollection *)*piVar5;
        puStack_b90 = (undefined *)0x4eb8c5;
        local_a28 = (int)p_Stack_b8c;
        local_98c = FUN_005aa430();
        if (local_a28 == 0x16) {
          if (*(int *)(param_1 + 0xae4) < 9) {
            p_Stack_b8c = (_AsyncTaskCollection *)(local_98c + 0x6c);
            puStack_b90 = (undefined *)0x4eb8f7;
            local_9fc = FUN_005e9250();
            p_Stack_b8c = (_AsyncTaskCollection *)local_964;
            puStack_b90 = (undefined *)0x4eb918;
            iVar2 = FUN_00426f40();
            *(undefined1 *)(iVar2 + 0x51) = 1;
            p_Stack_b8c = (_AsyncTaskCollection *)(local_9fc + 0x34);
            puStack_b90 = (undefined *)local_964;
            pfStack_b94 = (function<void___cdecl(void)> *)0x4eb93e;
            FUN_00426f40();
            puStack_b90 = (undefined *)0x4eb948;
            FUN_004275e0();
            p_Stack_b8c = (_AsyncTaskCollection *)local_964;
            puStack_b90 = (undefined *)0x4eb960;
            iVar2 = FUN_00426f40();
            *(undefined4 *)(iVar2 + 0xb8) = 0;
            p_Stack_b8c = (_AsyncTaskCollection *)local_964;
            puStack_b90 = (undefined *)0x4eb982;
            iVar2 = FUN_00426f40();
            *(undefined4 *)(iVar2 + 0xac) = 0;
            p_Stack_b8c = (_AsyncTaskCollection *)local_964;
            puStack_b90 = (undefined *)0x4eb9a4;
            iVar2 = FUN_00426f40();
            *(undefined4 *)(iVar2 + 0xb4) = 1;
            p_Stack_b8c = (_AsyncTaskCollection *)&local_9fc;
            puStack_b90 = (undefined *)0x4eb9ba;
            FUN_004d1b30();
            puStack_b90 = (undefined *)0x4eb9c1;
            FUN_00517ee0();
          }
          else if (*(int *)(param_1 + 0xae4) == 0x18) {
            p_Stack_b8c = (_AsyncTaskCollection *)(local_98c + 0x6c);
            puStack_b90 = (undefined *)0x4eb9e6;
            local_a00 = FUN_005e9250();
            p_Stack_b8c = (_AsyncTaskCollection *)local_964;
            puStack_b90 = (undefined *)0x4eba07;
            iVar2 = FUN_00426f40();
            *(undefined1 *)(iVar2 + 0x51) = 1;
            p_Stack_b8c = (_AsyncTaskCollection *)(local_a00 + 0x34);
            puStack_b90 = (undefined *)local_964;
            pfStack_b94 = (function<void___cdecl(void)> *)0x4eba2d;
            FUN_00426f40();
            puStack_b90 = (undefined *)0x4eba37;
            FUN_004275e0();
            p_Stack_b8c = (_AsyncTaskCollection *)local_964;
            puStack_b90 = (undefined *)0x4eba4f;
            iVar2 = FUN_00426f40();
            *(undefined4 *)(iVar2 + 0xb8) = 1;
            p_Stack_b8c = (_AsyncTaskCollection *)local_964;
            puStack_b90 = (undefined *)0x4eba71;
            iVar2 = FUN_00426f40();
            *(undefined4 *)(iVar2 + 0xac) = 0;
            p_Stack_b8c = (_AsyncTaskCollection *)local_964;
            puStack_b90 = (undefined *)0x4eba93;
            iVar2 = FUN_00426f40();
            *(undefined4 *)(iVar2 + 0xb4) = 1;
            p_Stack_b8c = (_AsyncTaskCollection *)&local_a00;
            puStack_b90 = (undefined *)0x4ebaa9;
            FUN_004d1b30();
            puStack_b90 = (undefined *)0x4ebab0;
            FUN_00517ee0();
          }
          else if ((*(int *)(param_1 + 0xae4) < 0x28) || (0x47 < *(int *)(param_1 + 0xae4))) {
            if ((*(int *)(param_1 + 0xae4) < 0x48) || (0x77 < *(int *)(param_1 + 0xae4))) {
              if (*(int *)(param_1 + 0xae4) == 0x78) {
                local_af8 = (undefined1 *)&uStack_ba0;
                local_a80 = (undefined1 *)&uStack_ba0;
                local_afc = auStack_bb8;
                FUN_00405520(local_98c + 0xfc);
                local_b00 = FUN_004c7590(local_a80);
                local_8._0_1_ = 10;
                local_b04 = auStack_bb8;
                FUN_00405520(local_98c);
                local_8._0_1_ = 3;
                p_Stack_b8c = (_AsyncTaskCollection *)FUN_004c7af0(local_d4);
                local_8._0_1_ = 0xb;
                puStack_b90 = (undefined *)0x4ebd57;
                local_a88 = p_Stack_b8c;
                local_a84 = p_Stack_b8c;
                local_9f8 = FUN_005e9250();
                local_8 = CONCAT31(local_8._1_3_,3);
                p_Stack_b8c = (_AsyncTaskCollection *)0x4ebd6f;
                std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_d4);
                p_Stack_b8c = (_AsyncTaskCollection *)local_964;
                puStack_b90 = (undefined *)0x4ebd88;
                iVar2 = FUN_00426f40();
                *(undefined1 *)(iVar2 + 0x51) = 1;
                p_Stack_b8c = (_AsyncTaskCollection *)(local_9f8 + 0x34);
                puStack_b90 = (undefined *)local_964;
                pfStack_b94 = (function<void___cdecl(void)> *)0x4ebdae;
                FUN_00426f40();
                puStack_b90 = (undefined *)0x4ebdb8;
                FUN_004275e0();
                p_Stack_b8c = (_AsyncTaskCollection *)local_964;
                puStack_b90 = (undefined *)0x4ebdd0;
                iVar2 = FUN_00426f40();
                *(undefined4 *)(iVar2 + 0xb8) = 0;
                p_Stack_b8c = (_AsyncTaskCollection *)local_964;
                puStack_b90 = (undefined *)0x4ebdf2;
                iVar2 = FUN_00426f40();
                *(undefined4 *)(iVar2 + 0xac) = 0;
                p_Stack_b8c = (_AsyncTaskCollection *)local_964;
                puStack_b90 = (undefined *)0x4ebe14;
                iVar2 = FUN_00426f40();
                *(undefined4 *)(iVar2 + 0xb4) = *(undefined4 *)(local_9f8 + 0x8c);
                p_Stack_b8c = (_AsyncTaskCollection *)&local_9f8;
                puStack_b90 = (undefined *)0x4ebe32;
                FUN_004d1b30();
                puStack_b90 = (undefined *)0x4ebe39;
                FUN_00517ee0();
              }
            }
            else {
              p_Stack_b8c = (_AsyncTaskCollection *)(local_98c + 0x6c);
              puStack_b90 = (undefined *)0x4ebbe4;
              local_a08 = FUN_005e9250();
              p_Stack_b8c = (_AsyncTaskCollection *)local_964;
              puStack_b90 = (undefined *)0x4ebc05;
              iVar2 = FUN_00426f40();
              *(undefined1 *)(iVar2 + 0x51) = 1;
              p_Stack_b8c = (_AsyncTaskCollection *)(local_a08 + 0x34);
              puStack_b90 = (undefined *)local_964;
              pfStack_b94 = (function<void___cdecl(void)> *)0x4ebc2b;
              FUN_00426f40();
              puStack_b90 = (undefined *)0x4ebc35;
              FUN_004275e0();
              p_Stack_b8c = (_AsyncTaskCollection *)local_964;
              puStack_b90 = (undefined *)0x4ebc4d;
              iVar2 = FUN_00426f40();
              *(undefined4 *)(iVar2 + 0xb8) = 3;
              p_Stack_b8c = (_AsyncTaskCollection *)local_964;
              puStack_b90 = (undefined *)0x4ebc6f;
              iVar2 = FUN_00426f40();
              *(undefined4 *)(iVar2 + 0xac) = 0;
              p_Stack_b8c = (_AsyncTaskCollection *)local_964;
              puStack_b90 = (undefined *)0x4ebc91;
              iVar2 = FUN_00426f40();
              *(undefined4 *)(iVar2 + 0xb4) = 1;
              p_Stack_b8c = (_AsyncTaskCollection *)&local_a08;
              puStack_b90 = (undefined *)0x4ebca7;
              FUN_004d1b30();
              puStack_b90 = (undefined *)0x4ebcae;
              FUN_00517ee0();
            }
          }
          else {
            p_Stack_b8c = (_AsyncTaskCollection *)(local_98c + 0x6c);
            puStack_b90 = (undefined *)0x4ebae5;
            local_a04 = FUN_005e9250();
            p_Stack_b8c = (_AsyncTaskCollection *)local_964;
            puStack_b90 = (undefined *)0x4ebb06;
            iVar2 = FUN_00426f40();
            *(undefined1 *)(iVar2 + 0x51) = 1;
            p_Stack_b8c = (_AsyncTaskCollection *)(local_a04 + 0x34);
            puStack_b90 = (undefined *)local_964;
            pfStack_b94 = (function<void___cdecl(void)> *)0x4ebb2c;
            FUN_00426f40();
            puStack_b90 = (undefined *)0x4ebb36;
            FUN_004275e0();
            p_Stack_b8c = (_AsyncTaskCollection *)local_964;
            puStack_b90 = (undefined *)0x4ebb4e;
            iVar2 = FUN_00426f40();
            *(undefined4 *)(iVar2 + 0xb8) = 2;
            p_Stack_b8c = (_AsyncTaskCollection *)local_964;
            puStack_b90 = (undefined *)0x4ebb70;
            iVar2 = FUN_00426f40();
            *(undefined4 *)(iVar2 + 0xac) = 0;
            p_Stack_b8c = (_AsyncTaskCollection *)local_964;
            puStack_b90 = (undefined *)0x4ebb92;
            iVar2 = FUN_00426f40();
            *(undefined4 *)(iVar2 + 0xb4) = 1;
            p_Stack_b8c = (_AsyncTaskCollection *)&local_a04;
            puStack_b90 = (undefined *)0x4ebba8;
            FUN_004d1b30();
            puStack_b90 = (undefined *)0x4ebbaf;
            FUN_00517ee0();
          }
        }
        else {
          p_Stack_b8c = (_AsyncTaskCollection *)(local_98c + 0x6c);
          puStack_b90 = (undefined *)0x4ebe4e;
          local_9bc = FUN_005e9250();
          p_Stack_b8c = (_AsyncTaskCollection *)local_964;
          puStack_b90 = (undefined *)0x4ebe6f;
          iVar2 = FUN_00426f40();
          *(undefined1 *)(iVar2 + 0x51) = 1;
          p_Stack_b8c = (_AsyncTaskCollection *)(local_9bc + 0x34);
          puStack_b90 = (undefined *)local_964;
          pfStack_b94 = (function<void___cdecl(void)> *)0x4ebe95;
          FUN_00426f40();
          puStack_b90 = (undefined *)0x4ebe9f;
          FUN_004275e0();
          p_Stack_b8c = (_AsyncTaskCollection *)local_964;
          puStack_b90 = (undefined *)0x4ebeb7;
          iVar2 = FUN_00426f40();
          *(undefined4 *)(iVar2 + 0xac) = *(undefined4 *)(local_9bc + 0x84);
          p_Stack_b8c = (_AsyncTaskCollection *)local_964;
          puStack_b90 = (undefined *)0x4ebee1;
          iVar2 = FUN_00426f40();
          *(undefined4 *)(iVar2 + 0xb0) = *(undefined4 *)(local_9bc + 0x88);
          p_Stack_b8c = (_AsyncTaskCollection *)local_964;
          puStack_b90 = (undefined *)0x4ebf0b;
          iVar2 = FUN_00426f40();
          *(undefined4 *)(iVar2 + 0xb4) = *(undefined4 *)(local_9bc + 0x8c);
          p_Stack_b8c = (_AsyncTaskCollection *)&local_9bc;
          puStack_b90 = (undefined *)0x4ebf29;
          FUN_004d1b30();
          puStack_b90 = (undefined *)0x4ebf30;
          FUN_00517ee0();
        }
        local_964 = local_964 + 1;
      }
      local_b08 = (undefined1 *)&uStack_ba0;
      puStack_ba4 = &stack0x00000008;
      pfStack_ba8 = (function<void___cdecl(void)> *)0x4ebf4a;
      local_b0c = FUN_00405520();
      local_8._0_1_ = 0xc;
      puStack_ba4 = (undefined1 *)0x4ebf59;
      game_get_state_ptr_d1520();
      local_8 = CONCAT31(local_8._1_3_,3);
      puStack_ba4 = (undefined1 *)0x4ebf64;
      FUN_004dbf50();
      local_9b8 = 0;
      while( true ) {
        p_Stack_b8c = (_AsyncTaskCollection *)0x4ebf8e;
        uVar3 = FUN_004274f0();
        if (uVar3 <= local_9b8) break;
        p_Stack_b8c = (_AsyncTaskCollection *)&DAT_0073fa33;
        puStack_b90 = (undefined *)local_9b8;
        pfStack_b94 = (function<void___cdecl(void)> *)0x4ebfb4;
        puStack_b90 = (undefined *)FUN_004274d0();
        pfStack_b94 = (function<void___cdecl(void)> *)0x4ebfba;
        cVar1 = FUN_00427c60();
        if (cVar1 != '\0') {
          local_b10 = 0;
        }
        p_Stack_b8c = (_AsyncTaskCollection *)(DAT_007ca234 + 0x140);
        local_b14 = (undefined1 *)&puStack_ba4;
        pfStack_ba8 = (function<void___cdecl(void)> *)local_9b8;
        uStack_bac = 0x4ebff9;
        pfStack_ba8 = (function<void___cdecl(void)> *)FUN_004274d0();
        uStack_bac = 0x4ec001;
        FUN_00405520();
        pfStack_ba8 = local_bc;
        uStack_bac = 0x4ec013;
        local_b50 = FUN_004c20b0();
        p_Stack_b8c = (_AsyncTaskCollection *)0x4ec024;
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_bc);
        local_9b8 = local_9b8 + 1;
      }
      local_9b4 = 0;
      while( true ) {
        p_Stack_b8c = (_AsyncTaskCollection *)0x4ec056;
        uVar3 = FUN_00426f70();
        if (uVar3 <= local_9b4) break;
        p_Stack_b8c = (_AsyncTaskCollection *)local_9b4;
        puStack_b90 = (undefined *)0x4ec07a;
        puVar8 = (undefined4 *)FUN_00426f40();
        p_Stack_b8c = (_AsyncTaskCollection *)*puVar8;
        puStack_b90 = (undefined *)0x4ec088;
        local_a8c = FUN_005aa430();
        p_Stack_b8c = (_AsyncTaskCollection *)local_9b4;
        puStack_b90 = (undefined *)0x4ec0a6;
        iVar2 = FUN_00426f40();
        p_Stack_b8c = (_AsyncTaskCollection *)(iVar2 + 0x290);
        local_b1c = (undefined1 *)&puStack_ba4;
        pfStack_ba8 = (function<void___cdecl(void)> *)(local_a8c + 0x84);
        uStack_bac = 0x4ec0c9;
        FUN_00405520();
        pfStack_ba8 = local_104;
        uStack_bac = 0x4ec0db;
        local_b20 = FUN_004c20b0();
        p_Stack_b8c = (_AsyncTaskCollection *)0x4ec0ec;
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_104);
        local_9b4 = local_9b4 + 1;
      }
      local_970 = 0;
      while( true ) {
        p_Stack_b8c = (_AsyncTaskCollection *)0x4ec11e;
        uVar3 = FUN_00426f70();
        if (uVar3 <= local_970) break;
        p_Stack_b8c = (_AsyncTaskCollection *)0x4ec135;
        FUN_004153b0();
        local_8._0_1_ = 0xd;
        p_Stack_b8c = (_AsyncTaskCollection *)local_970;
        puStack_b90 = (undefined *)0x4ec151;
        iVar2 = FUN_00426f40();
        local_260 = *(int *)(iVar2 + 0x1c) + -100;
        p_Stack_b8c = (_AsyncTaskCollection *)local_970;
        puStack_b90 = (undefined *)0x4ec175;
        iVar2 = FUN_00426f40();
        local_25c = *(int *)(iVar2 + 0x20) + -200;
        local_258 = 200;
        local_254 = 200;
        p_Stack_b8c = (_AsyncTaskCollection *)0x4ec1a3;
        FUN_0040b110();
        local_8 = CONCAT31(local_8._1_3_,0xe);
        local_7c = 1;
        local_a0 = 100;
        p_Stack_b8c = (_AsyncTaskCollection *)0x0;
        puStack_b90 = (undefined *)local_970;
        pfStack_b94 = (function<void___cdecl(void)> *)0x4ec1d2;
        FUN_00426f40();
        puStack_b90 = (undefined *)0x4ec1dc;
        iVar2 = FUN_0040d680();
        p_Stack_b8c = (_AsyncTaskCollection *)(uint)*(byte *)(iVar2 + 0x20);
        local_b24 = (undefined1 *)&puStack_ba4;
        pfStack_ba8 = (function<void___cdecl(void)> *)0x0;
        uStack_bac = local_970;
        uStack_bb0 = 0x4ec206;
        FUN_00426f40();
        uStack_bac = 0x4ec210;
        iVar2 = FUN_0040d680();
        pfStack_ba8 = (function<void___cdecl(void)> *)(iVar2 + 8);
        uStack_bac = 0x4ec21b;
        FUN_00405520();
        pfStack_ba8 = (function<void___cdecl(void)> *)0x4ec226;
        local_a94 = FUN_004b8ca0();
        local_9c = 0xb9 - *(int *)(local_a94 + 0x10);
        local_98 = 0xffe6c89c;
        p_Stack_b8c = (_AsyncTaskCollection *)local_970;
        puStack_b90 = (undefined *)0x4ec26e;
        local_a90 = local_a94;
        piVar5 = (int *)FUN_00426f40();
        if (*piVar5 == 0x16) {
          if (*(int *)(param_1 + 0xae4) == 8) {
            p_Stack_b8c = (_AsyncTaskCollection *)&DAT_00751910;
            puStack_b90 = (undefined *)0x4ec293;
            FUN_004053a0();
          }
          else if (*(int *)(param_1 + 0xae4) == 0x18) {
            p_Stack_b8c = (_AsyncTaskCollection *)&DAT_00751920;
            puStack_b90 = (undefined *)0x4ec2b5;
            FUN_004053a0();
          }
          else if (*(int *)(param_1 + 0xae4) == 0x28) {
            p_Stack_b8c = (_AsyncTaskCollection *)&DAT_00751970;
            puStack_b90 = (undefined *)0x4ec2d7;
            FUN_004053a0();
          }
          else if (*(int *)(param_1 + 0xae4) == 0x38) {
            p_Stack_b8c = (_AsyncTaskCollection *)&DAT_0075197c;
            puStack_b90 = (undefined *)0x4ec2f9;
            FUN_004053a0();
          }
          else if (*(int *)(param_1 + 0xae4) == 0x48) {
            p_Stack_b8c = (_AsyncTaskCollection *)&DAT_00751954;
            puStack_b90 = (undefined *)0x4ec318;
            FUN_004053a0();
          }
          else if (*(int *)(param_1 + 0xae4) == 0x58) {
            p_Stack_b8c = (_AsyncTaskCollection *)&DAT_00751960;
            puStack_b90 = (undefined *)0x4ec337;
            FUN_004053a0();
          }
          else if (*(int *)(param_1 + 0xae4) == 0x68) {
            p_Stack_b8c = (_AsyncTaskCollection *)&DAT_00751994;
            puStack_b90 = (undefined *)0x4ec356;
            FUN_004053a0();
          }
          else if (*(int *)(param_1 + 0xae4) == 0x78) {
            p_Stack_b8c = (_AsyncTaskCollection *)&DAT_007519a4;
            puStack_b90 = (undefined *)0x4ec375;
            FUN_004053a0();
          }
        }
        else {
          p_Stack_b8c = (_AsyncTaskCollection *)local_970;
          puStack_b90 = (undefined *)0x4ec390;
          puVar8 = (undefined4 *)FUN_00426f40();
          p_Stack_b8c = (_AsyncTaskCollection *)*puVar8;
          puStack_b90 = (undefined *)0x4ec39e;
          iVar2 = FUN_005aa430();
          p_Stack_b8c = (_AsyncTaskCollection *)(iVar2 + 0xe4);
          puStack_b90 = (undefined *)0x4ec3af;
          FUN_0040d840();
        }
        p_Stack_b8c = (_AsyncTaskCollection *)local_a4;
        puStack_b90 = (undefined *)0x4ec3c2;
        FUN_0040d310();
        p_Stack_b8c = (_AsyncTaskCollection *)&local_260;
        puStack_b90 = (undefined *)local_970;
        pfStack_b94 = (function<void___cdecl(void)> *)0x4ec3e1;
        FUN_00426f40();
        puStack_b90 = (undefined *)0x4ec3ed;
        FUN_004267c0();
        local_8._0_1_ = 0xd;
        p_Stack_b8c = (_AsyncTaskCollection *)0x4ec3fc;
        FUN_0040c940();
        local_8 = CONCAT31(local_8._1_3_,3);
        p_Stack_b8c = (_AsyncTaskCollection *)0x4ec40b;
        FUN_00415410();
        local_970 = local_970 + 1;
      }
      p_Stack_b8c = (_AsyncTaskCollection *)param_1;
      puStack_b90 = (undefined *)0x4ec41a;
      FUN_0060f570();
      local_8 = local_8 & 0xffffff00;
      p_Stack_b8c = (_AsyncTaskCollection *)0x4ec42c;
      FUN_00518640();
      local_8 = 0xffffffff;
      p_Stack_b8c = (_AsyncTaskCollection *)0x4ec43b;
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                ((function<void___cdecl(void)> *)&stack0x00000008);
      ExceptionList = local_10;
      return;
    }
    p_Stack_b8c = (_AsyncTaskCollection *)local_99c;
    puStack_b90 = (undefined *)0x4ea3b2;
    local_9c4 = FUN_0044de30();
    if (*(int *)(param_1 + 0xdd8) == 4) {
      p_Stack_b8c = (_AsyncTaskCollection *)0x2;
      puStack_b90 = (undefined *)0x0;
      pfStack_b94 = local_ec;
      uStack_b98 = 0x4ea3d8;
      piVar5 = (int *)game_get_state_ptr_d1520();
      uStack_b98 = *(undefined4 *)(*piVar5 + 0x17c);
      pcStack_b9c = (char *)0x4ea3ec;
      FUN_005bcf10();
      uStack_b98 = 0x4ea3f8;
      p_Stack_b8c = (_AsyncTaskCollection *)FUN_004bcf80();
      local_8._0_1_ = 4;
      puStack_b90 = (undefined *)0x4ea41a;
      local_a60 = p_Stack_b8c;
      local_a5c = p_Stack_b8c;
      game_get_state_ptr_d1520();
      puStack_b90 = (undefined *)0x4ea427;
      local_a20 = FUN_00518ab0();
      local_8 = CONCAT31(local_8._1_3_,3);
      p_Stack_b8c = (_AsyncTaskCollection *)0x4ea43c;
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_ec);
      p_Stack_b8c = (_AsyncTaskCollection *)0x4ea448;
      local_9d8 = (int *)game_loop_helper_018d0();
      p_Stack_b8c = (_AsyncTaskCollection *)0x4ea459;
      local_a64 = (int *)game_loop_helper_018b0();
      for (; local_9d8 != local_a64; local_9d8 = local_9d8 + 1) {
        local_968 = local_9d8;
        local_98d = 0;
        p_Stack_b8c = (_AsyncTaskCollection *)local_9ec;
        puStack_b90 = (undefined *)0x4ea4a1;
        game_get_state_ptr_d1520();
        puStack_b90 = (undefined *)0x4ea4bb;
        FUN_004021b0();
        while( true ) {
          p_Stack_b8c = (_AsyncTaskCollection *)local_af0;
          puStack_b90 = (undefined *)0x4ea4d6;
          game_get_state_ptr_d1520();
          puStack_b90 = (undefined *)0x4ea4f0;
          p_Stack_b8c = (_AsyncTaskCollection *)FUN_00402170();
          puStack_b90 = (undefined *)0x4ea4fc;
          cVar1 = FUN_00426ed0();
          if (cVar1 == '\0') break;
          p_Stack_b8c = (_AsyncTaskCollection *)0x0;
          puStack_b90 = &DAT_00750ee0;
          pfStack_b94 = (function<void___cdecl(void)> *)0x4ea519;
          FUN_00401b20();
          pfStack_b94 = (function<void___cdecl(void)> *)0x4ea520;
          iVar2 = FUN_004277a0();
          if (iVar2 != -1) {
            p_Stack_b8c = (_AsyncTaskCollection *)0x4ea52e;
            piVar5 = (int *)game_get_state_ptr_d1520();
            local_a68 = *(int *)(*piVar5 + 0x20c + *local_968 * 0x1f0) / 0xe0;
            if (local_a68 != local_99c) break;
            local_98d = 1;
            p_Stack_b8c = (_AsyncTaskCollection *)0x4ea56f;
            piVar5 = (int *)game_get_state_ptr_d1520();
            local_9f0 = *piVar5 + 0x278 + *local_968 * 0x1f0;
            local_96c = 0;
            local_960 = 0;
            if (*(int *)(param_1 + 0xdc8) < 5) {
              p_Stack_b8c = (_AsyncTaskCollection *)0x4ea5af;
              piVar5 = (int *)game_get_state_ptr_d1520();
              if (*(int *)(*piVar5 + 0x16c) == 0x5dd) {
                if (*local_968 == 0) {
                  local_960 = 5;
                  p_Stack_b8c = (_AsyncTaskCollection *)0x750f3c;
                  puStack_b90 = DAT_007ca234;
                  pfStack_b94 = (function<void___cdecl(void)> *)0x4ea5e3;
                  cVar1 = FUN_00427c60();
                  if (cVar1 != '\0') {
                    local_96c = 0xe0;
                    local_960 = 10;
                  }
                }
                else if (*local_968 == 1) {
                  local_960 = 0xb;
                }
              }
            }
            else if (*(int *)(param_1 + 0xdc8) == 5) {
              if (*local_968 == 0) {
                p_Stack_b8c = (_AsyncTaskCollection *)0x4ea641;
                piVar5 = (int *)game_get_state_ptr_d1520();
                if (*(int *)(*piVar5 + 0x16c) == 0x1f) {
                  p_Stack_b8c = (_AsyncTaskCollection *)0x750f58;
                  puStack_b90 = DAT_007ca234;
                  pfStack_b94 = (function<void___cdecl(void)> *)0x4ea661;
                  cVar1 = FUN_00427c60();
                  if (cVar1 == '\0') {
                    p_Stack_b8c = (_AsyncTaskCollection *)0x750efc;
                    puStack_b90 = DAT_007ca234;
                    pfStack_b94 = (function<void___cdecl(void)> *)0x4ea67b;
                    cVar1 = FUN_00427c60();
                    if (cVar1 == '\0') {
                      p_Stack_b8c = (_AsyncTaskCollection *)0x750f1c;
                      puStack_b90 = DAT_007ca234;
                      pfStack_b94 = (function<void___cdecl(void)> *)0x4ea6a2;
                      cVar1 = FUN_00427c60();
                      if (cVar1 == '\0') {
                        p_Stack_b8c = (_AsyncTaskCollection *)0x750fac;
                        puStack_b90 = DAT_007ca234;
                        pfStack_b94 = (function<void___cdecl(void)> *)0x4ea6bd;
                        cVar1 = FUN_00427c60();
                        if (cVar1 == '\0') goto LAB_004ea6d1;
                      }
                      local_960 = 1;
                      goto LAB_004ea6d1;
                    }
                  }
                  local_96c = 0x46;
                }
LAB_004ea6d1:
                p_Stack_b8c = (_AsyncTaskCollection *)0x4ea6d6;
                piVar5 = (int *)game_get_state_ptr_d1520();
                if (*(int *)(*piVar5 + 0x16c) == 0x22) {
                  p_Stack_b8c = (_AsyncTaskCollection *)0x750fcc;
                  puStack_b90 = DAT_007ca234;
                  pfStack_b94 = (function<void___cdecl(void)> *)0x4ea6f2;
                  cVar1 = FUN_00427c60();
                  if (cVar1 != '\0') {
                    local_96c = 0x38;
                  }
                  p_Stack_b8c = (_AsyncTaskCollection *)0x750f78;
                  puStack_b90 = DAT_007ca234;
                  pfStack_b94 = (function<void___cdecl(void)> *)0x4ea716;
                  cVar1 = FUN_00427c60();
                  if (cVar1 != '\0') {
                    local_96c = 0x54;
                  }
                }
                p_Stack_b8c = (_AsyncTaskCollection *)0x4ea72f;
                piVar5 = (int *)game_get_state_ptr_d1520();
                if (*(int *)(*piVar5 + 0x16c) == 0x20) {
                  local_96c = 0x54;
                  local_960 = 6;
                  p_Stack_b8c = (_AsyncTaskCollection *)0x750f90;
                  puStack_b90 = DAT_007ca234;
                  pfStack_b94 = (function<void___cdecl(void)> *)0x4ea75e;
                  cVar1 = FUN_00427c60();
                  if (cVar1 == '\0') {
                    p_Stack_b8c = (_AsyncTaskCollection *)0x751024;
                    puStack_b90 = DAT_007ca234;
                    pfStack_b94 = (function<void___cdecl(void)> *)0x4ea785;
                    cVar1 = FUN_00427c60();
                    if (cVar1 != '\0') {
                      local_960 = 1;
                    }
                  }
                  else {
                    local_960 = 1;
                  }
                }
                else {
                  p_Stack_b8c = (_AsyncTaskCollection *)0x4ea7a3;
                  piVar5 = (int *)game_get_state_ptr_d1520();
                  if (*(int *)(*piVar5 + 0x16c) == 0x21) {
                    local_96c = 0x1c;
                  }
                  else {
                    p_Stack_b8c = (_AsyncTaskCollection *)0x4ea7c2;
                    piVar5 = (int *)game_get_state_ptr_d1520();
                    if (*(int *)(*piVar5 + 0x16c) == 0x23) {
                      local_96c = 0x1c;
                      p_Stack_b8c = (_AsyncTaskCollection *)0x751040;
                      puStack_b90 = DAT_007ca234;
                      pfStack_b94 = (function<void___cdecl(void)> *)0x4ea7eb;
                      cVar1 = FUN_00427c60();
                      if (cVar1 == '\0') {
                        p_Stack_b8c = (_AsyncTaskCollection *)0x750fe4;
                        puStack_b90 = DAT_007ca234;
                        pfStack_b94 = (function<void___cdecl(void)> *)0x4ea812;
                        cVar1 = FUN_00427c60();
                        if (cVar1 == '\0') {
                          p_Stack_b8c = (_AsyncTaskCollection *)0x751004;
                          puStack_b90 = DAT_007ca234;
                          pfStack_b94 = (function<void___cdecl(void)> *)0x4ea839;
                          cVar1 = FUN_00427c60();
                          if (cVar1 != '\0') {
                            local_960 = 0x10;
                          }
                        }
                        else {
                          local_960 = 0x13;
                        }
                      }
                      else {
                        local_960 = 0x13;
                      }
                    }
                    else {
                      p_Stack_b8c = (_AsyncTaskCollection *)0x4ea857;
                      piVar5 = (int *)game_get_state_ptr_d1520();
                      if (*(int *)(*piVar5 + 0x16c) == 0x24) {
                        p_Stack_b8c = (_AsyncTaskCollection *)0x7510a0;
                        puStack_b90 = DAT_007ca234;
                        pfStack_b94 = (function<void___cdecl(void)> *)0x4ea877;
                        cVar1 = FUN_00427c60();
                        if (cVar1 == '\0') {
                          p_Stack_b8c = (_AsyncTaskCollection *)0x7510c0;
                          puStack_b90 = DAT_007ca234;
                          pfStack_b94 = (function<void___cdecl(void)> *)0x4ea8aa;
                          cVar1 = FUN_00427c60();
                          if (cVar1 == '\0') {
                            p_Stack_b8c = (_AsyncTaskCollection *)0x751060;
                            puStack_b90 = DAT_007ca234;
                            pfStack_b94 = (function<void___cdecl(void)> *)0x4ea8d4;
                            cVar1 = FUN_00427c60();
                            if (cVar1 == '\0') {
                              p_Stack_b8c = (_AsyncTaskCollection *)0x751080;
                              puStack_b90 = DAT_007ca234;
                              pfStack_b94 = (function<void___cdecl(void)> *)0x4ea8fe;
                              cVar1 = FUN_00427c60();
                              if (cVar1 == '\0') {
                                p_Stack_b8c = (_AsyncTaskCollection *)0x751120;
                                puStack_b90 = DAT_007ca234;
                                pfStack_b94 = (function<void___cdecl(void)> *)0x4ea927;
                                cVar1 = FUN_00427c60();
                                if (cVar1 == '\0') {
                                  p_Stack_b8c = (_AsyncTaskCollection *)0x751140;
                                  puStack_b90 = DAT_007ca234;
                                  pfStack_b94 = (function<void___cdecl(void)> *)0x4ea951;
                                  cVar1 = FUN_00427c60();
                                  if (cVar1 == '\0') {
                                    p_Stack_b8c = (_AsyncTaskCollection *)0x7510e0;
                                    puStack_b90 = DAT_007ca234;
                                    pfStack_b94 = (function<void___cdecl(void)> *)0x4ea978;
                                    cVar1 = FUN_00427c60();
                                    if (cVar1 == '\0') {
                                      p_Stack_b8c = (_AsyncTaskCollection *)0x751100;
                                      puStack_b90 = DAT_007ca234;
                                      pfStack_b94 = (function<void___cdecl(void)> *)0x4ea99e;
                                      cVar1 = FUN_00427c60();
                                      if (cVar1 == '\0') {
                                        p_Stack_b8c = (_AsyncTaskCollection *)0x7511a0;
                                        puStack_b90 = DAT_007ca234;
                                        pfStack_b94 = (function<void___cdecl(void)> *)0x4ea9c5;
                                        cVar1 = FUN_00427c60();
                                        if (cVar1 != '\0') {
                                          local_960 = 9;
                                        }
                                      }
                                      else {
                                        local_960 = 0x14;
                                      }
                                    }
                                    else {
                                      local_960 = 2;
                                    }
                                  }
                                  else {
                                    local_960 = 0x13;
                                  }
                                }
                                else {
                                  local_960 = 0xd;
                                }
                              }
                              else {
                                local_960 = 0xc;
                              }
                            }
                            else {
                              local_960 = 0x24;
                            }
                          }
                          else {
                            local_960 = 0x1d;
                          }
                        }
                        else {
                          local_96c = 0xe;
                          local_960 = 0xb;
                        }
                      }
                    }
                  }
                }
              }
              else if (*local_968 == 1) {
                local_960 = 5;
                p_Stack_b8c = (_AsyncTaskCollection *)0x4ea9fc;
                piVar5 = (int *)game_get_state_ptr_d1520();
                if (*(int *)(*piVar5 + 0x16c) == 0x1f) {
                  p_Stack_b8c = (_AsyncTaskCollection *)0x7511c0;
                  puStack_b90 = DAT_007ca234;
                  pfStack_b94 = (function<void___cdecl(void)> *)0x4eaa1b;
                  cVar1 = FUN_00427c60();
                  if (cVar1 == '\0') {
                    p_Stack_b8c = (_AsyncTaskCollection *)0x751160;
                    puStack_b90 = DAT_007ca234;
                    pfStack_b94 = (function<void___cdecl(void)> *)0x4eaa45;
                    cVar1 = FUN_00427c60();
                    if (cVar1 == '\0') {
                      p_Stack_b8c = (_AsyncTaskCollection *)0x751180;
                      puStack_b90 = DAT_007ca234;
                      pfStack_b94 = (function<void___cdecl(void)> *)0x4eaa60;
                      cVar1 = FUN_00427c60();
                      if (cVar1 == '\0') {
                        p_Stack_b8c = (_AsyncTaskCollection *)0x751210;
                        puStack_b90 = DAT_007ca234;
                        pfStack_b94 = (function<void___cdecl(void)> *)0x4eaa7a;
                        cVar1 = FUN_00427c60();
                        if (cVar1 == '\0') {
                          p_Stack_b8c = (_AsyncTaskCollection *)0x751230;
                          puStack_b90 = DAT_007ca234;
                          pfStack_b94 = (function<void___cdecl(void)> *)0x4eaaa1;
                          cVar1 = FUN_00427c60();
                          if (cVar1 != '\0') {
                            local_960 = 1;
                          }
                          goto LAB_004eaab5;
                        }
                      }
                    }
                    local_960 = 8;
                  }
                  else {
                    local_960 = 6;
                  }
                }
LAB_004eaab5:
                p_Stack_b8c = (_AsyncTaskCollection *)0x4eaaba;
                piVar5 = (int *)game_get_state_ptr_d1520();
                if (*(int *)(*piVar5 + 0x16c) == 0x22) {
                  local_960 = 4;
                  p_Stack_b8c = (_AsyncTaskCollection *)0x7511e0;
                  puStack_b90 = DAT_007ca234;
                  pfStack_b94 = (function<void___cdecl(void)> *)0x4eaae0;
                  cVar1 = FUN_00427c60();
                  if (cVar1 != '\0') {
                    local_960 = 7;
                  }
                  p_Stack_b8c = (_AsyncTaskCollection *)0x7511f8;
                  puStack_b90 = DAT_007ca234;
                  pfStack_b94 = (function<void___cdecl(void)> *)0x4eab05;
                  cVar1 = FUN_00427c60();
                  if (cVar1 != '\0') {
                    local_960 = 1;
                  }
                }
                p_Stack_b8c = (_AsyncTaskCollection *)0x4eab1e;
                piVar5 = (int *)game_get_state_ptr_d1520();
                if (*(int *)(*piVar5 + 0x16c) == 0x20) {
                  p_Stack_b8c = (_AsyncTaskCollection *)0x75128c;
                  puStack_b90 = DAT_007ca234;
                  pfStack_b94 = (function<void___cdecl(void)> *)0x4eab3e;
                  cVar1 = FUN_00427c60();
                  if (cVar1 == '\0') {
                    p_Stack_b8c = (_AsyncTaskCollection *)0x7512a8;
                    puStack_b90 = DAT_007ca234;
                    pfStack_b94 = (function<void___cdecl(void)> *)0x4eab58;
                    cVar1 = FUN_00427c60();
                    if (cVar1 == '\0') {
                      p_Stack_b8c = (_AsyncTaskCollection *)0x751250;
                      puStack_b90 = DAT_007ca234;
                      pfStack_b94 = (function<void___cdecl(void)> *)0x4eab82;
                      cVar1 = FUN_00427c60();
                      if (cVar1 == '\0') {
                        p_Stack_b8c = (_AsyncTaskCollection *)0x75126c;
                        puStack_b90 = DAT_007ca234;
                        pfStack_b94 = (function<void___cdecl(void)> *)0x4eabac;
                        cVar1 = FUN_00427c60();
                        if (cVar1 == '\0') {
                          p_Stack_b8c = (_AsyncTaskCollection *)0x751304;
                          puStack_b90 = DAT_007ca234;
                          pfStack_b94 = (function<void___cdecl(void)> *)0x4eabc6;
                          cVar1 = FUN_00427c60();
                          if (cVar1 == '\0') {
                            p_Stack_b8c = (_AsyncTaskCollection *)0x751324;
                            puStack_b90 = DAT_007ca234;
                            pfStack_b94 = (function<void___cdecl(void)> *)0x4eabe1;
                            cVar1 = FUN_00427c60();
                            if (cVar1 == '\0') {
                              p_Stack_b8c = (_AsyncTaskCollection *)0x7512c4;
                              puStack_b90 = DAT_007ca234;
                              pfStack_b94 = (function<void___cdecl(void)> *)0x4eabfc;
                              cVar1 = FUN_00427c60();
                              if (cVar1 == '\0') {
                                p_Stack_b8c = (_AsyncTaskCollection *)0x7512e4;
                                puStack_b90 = DAT_007ca234;
                                pfStack_b94 = (function<void___cdecl(void)> *)0x4eac16;
                                cVar1 = FUN_00427c60();
                                if (cVar1 == '\0') goto LAB_004eb4ae;
                              }
                            }
                          }
                        }
                        local_960 = 7;
                      }
                      else {
                        local_960 = 4;
                      }
                      goto LAB_004eb4ae;
                    }
                  }
                  local_960 = 2;
                }
                else {
                  p_Stack_b8c = (_AsyncTaskCollection *)0x4eac34;
                  piVar5 = (int *)game_get_state_ptr_d1520();
                  if (*(int *)(*piVar5 + 0x16c) == 0x23) {
                    p_Stack_b8c = (_AsyncTaskCollection *)0x751384;
                    puStack_b90 = DAT_007ca234;
                    pfStack_b94 = (function<void___cdecl(void)> *)0x4eac53;
                    cVar1 = FUN_00427c60();
                    if (cVar1 == '\0') {
                      p_Stack_b8c = (_AsyncTaskCollection *)0x7513a4;
                      puStack_b90 = DAT_007ca234;
                      pfStack_b94 = (function<void___cdecl(void)> *)0x4eac7a;
                      cVar1 = FUN_00427c60();
                      if (cVar1 == '\0') {
                        p_Stack_b8c = (_AsyncTaskCollection *)0x751344;
                        puStack_b90 = DAT_007ca234;
                        pfStack_b94 = (function<void___cdecl(void)> *)0x4eaca1;
                        cVar1 = FUN_00427c60();
                        if (cVar1 == '\0') {
                          p_Stack_b8c = (_AsyncTaskCollection *)0x751364;
                          puStack_b90 = DAT_007ca234;
                          pfStack_b94 = (function<void___cdecl(void)> *)0x4eacc7;
                          cVar1 = FUN_00427c60();
                          if (cVar1 != '\0') {
                            local_960 = 0x20;
                          }
                        }
                        else {
                          local_960 = 0x26;
                        }
                      }
                      else {
                        local_960 = 0x1c;
                      }
                    }
                    else {
                      local_960 = 0x17;
                    }
                  }
                  else {
                    p_Stack_b8c = (_AsyncTaskCollection *)0x4eace5;
                    piVar5 = (int *)game_get_state_ptr_d1520();
                    if (*(int *)(*piVar5 + 0x16c) == 0x24) {
                      p_Stack_b8c = (_AsyncTaskCollection *)0x751404;
                      puStack_b90 = DAT_007ca234;
                      pfStack_b94 = (function<void___cdecl(void)> *)0x4ead04;
                      cVar1 = FUN_00427c60();
                      if (cVar1 == '\0') {
                        p_Stack_b8c = (_AsyncTaskCollection *)0x751424;
                        puStack_b90 = DAT_007ca234;
                        pfStack_b94 = (function<void___cdecl(void)> *)0x4ead2e;
                        cVar1 = FUN_00427c60();
                        if (cVar1 == '\0') {
                          p_Stack_b8c = (_AsyncTaskCollection *)0x7513c4;
                          puStack_b90 = DAT_007ca234;
                          pfStack_b94 = (function<void___cdecl(void)> *)0x4ead58;
                          cVar1 = FUN_00427c60();
                          if (cVar1 == '\0') {
                            p_Stack_b8c = (_AsyncTaskCollection *)0x7513e4;
                            puStack_b90 = DAT_007ca234;
                            pfStack_b94 = (function<void___cdecl(void)> *)0x4ead81;
                            cVar1 = FUN_00427c60();
                            if (cVar1 == '\0') {
                              p_Stack_b8c = (_AsyncTaskCollection *)0x751484;
                              puStack_b90 = DAT_007ca234;
                              pfStack_b94 = (function<void___cdecl(void)> *)0x4eadab;
                              cVar1 = FUN_00427c60();
                              if (cVar1 == '\0') {
                                p_Stack_b8c = (_AsyncTaskCollection *)0x7514a4;
                                puStack_b90 = DAT_007ca234;
                                pfStack_b94 = (function<void___cdecl(void)> *)0x4eadd5;
                                cVar1 = FUN_00427c60();
                                if (cVar1 == '\0') {
                                  p_Stack_b8c = (_AsyncTaskCollection *)0x751444;
                                  puStack_b90 = DAT_007ca234;
                                  pfStack_b94 = (function<void___cdecl(void)> *)0x4eadfb;
                                  cVar1 = FUN_00427c60();
                                  if (cVar1 == '\0') {
                                    p_Stack_b8c = (_AsyncTaskCollection *)0x751464;
                                    puStack_b90 = DAT_007ca234;
                                    pfStack_b94 = (function<void___cdecl(void)> *)0x4eae22;
                                    cVar1 = FUN_00427c60();
                                    if (cVar1 == '\0') {
                                      p_Stack_b8c = (_AsyncTaskCollection *)0x7514fc;
                                      puStack_b90 = DAT_007ca234;
                                      pfStack_b94 = (function<void___cdecl(void)> *)0x4eae49;
                                      cVar1 = FUN_00427c60();
                                      if (cVar1 != '\0') {
                                        local_960 = 0x10;
                                      }
                                    }
                                    else {
                                      local_960 = 0xe;
                                    }
                                  }
                                  else {
                                    local_960 = 0x2a;
                                  }
                                }
                                else {
                                  local_960 = 1;
                                }
                              }
                              else {
                                local_960 = 6;
                              }
                            }
                            else {
                              local_960 = 0xc;
                            }
                          }
                          else {
                            local_960 = 0x10;
                          }
                        }
                        else {
                          local_960 = 0xc;
                        }
                      }
                      else {
                        local_960 = 8;
                      }
                    }
                  }
                }
              }
            }
            else if (*(int *)(param_1 + 0xdc8) == 6) {
              if (*local_968 == 0) {
                local_960 = 0xb;
                p_Stack_b8c = (_AsyncTaskCollection *)0x75151c;
                puStack_b90 = DAT_007ca234;
                pfStack_b94 = (function<void___cdecl(void)> *)0x4eae9c;
                cVar1 = FUN_00427c60();
                if (cVar1 == '\0') {
                  p_Stack_b8c = (_AsyncTaskCollection *)0x7514c4;
                  puStack_b90 = DAT_007ca234;
                  pfStack_b94 = (function<void___cdecl(void)> *)0x4eaec3;
                  cVar1 = FUN_00427c60();
                  if (cVar1 == '\0') {
                    p_Stack_b8c = (_AsyncTaskCollection *)0x7514e0;
                    puStack_b90 = DAT_007ca234;
                    pfStack_b94 = (function<void___cdecl(void)> *)0x4eaee9;
                    cVar1 = FUN_00427c60();
                    if (cVar1 == '\0') {
                      p_Stack_b8c = (_AsyncTaskCollection *)0x751570;
                      puStack_b90 = DAT_007ca234;
                      pfStack_b94 = (function<void___cdecl(void)> *)0x4eaf10;
                      cVar1 = FUN_00427c60();
                      if (cVar1 != '\0') {
                        local_960 = 0xc;
                      }
                    }
                    else {
                      local_960 = 5;
                    }
                  }
                  else {
                    local_960 = 0xe;
                  }
                }
                else {
                  local_960 = 0xb;
                }
              }
              else if (*local_968 == 1) {
                local_960 = 0x19;
                p_Stack_b8c = (_AsyncTaskCollection *)0x75158c;
                puStack_b90 = DAT_007ca234;
                pfStack_b94 = (function<void___cdecl(void)> *)0x4eaf53;
                cVar1 = FUN_00427c60();
                if (cVar1 == '\0') {
                  p_Stack_b8c = (_AsyncTaskCollection *)0x751538;
                  puStack_b90 = DAT_007ca234;
                  pfStack_b94 = (function<void___cdecl(void)> *)0x4eaf7d;
                  cVar1 = FUN_00427c60();
                  if (cVar1 == '\0') {
                    p_Stack_b8c = (_AsyncTaskCollection *)0x751554;
                    puStack_b90 = DAT_007ca234;
                    pfStack_b94 = (function<void___cdecl(void)> *)0x4eafa6;
                    cVar1 = FUN_00427c60();
                    if (cVar1 == '\0') {
                      p_Stack_b8c = (_AsyncTaskCollection *)0x7515e0;
                      puStack_b90 = DAT_007ca234;
                      pfStack_b94 = (function<void___cdecl(void)> *)0x4eafd0;
                      cVar1 = FUN_00427c60();
                      if (cVar1 == '\0') {
                        p_Stack_b8c = (_AsyncTaskCollection *)0x7515fc;
                        puStack_b90 = DAT_007ca234;
                        pfStack_b94 = (function<void___cdecl(void)> *)0x4eaff7;
                        cVar1 = FUN_00427c60();
                        if (cVar1 == '\0') {
                          p_Stack_b8c = (_AsyncTaskCollection *)0x7515a8;
                          puStack_b90 = DAT_007ca234;
                          pfStack_b94 = (function<void___cdecl(void)> *)0x4eb01d;
                          cVar1 = FUN_00427c60();
                          if (cVar1 == '\0') {
                            p_Stack_b8c = (_AsyncTaskCollection *)0x7515c4;
                            puStack_b90 = DAT_007ca234;
                            pfStack_b94 = (function<void___cdecl(void)> *)0x4eb044;
                            cVar1 = FUN_00427c60();
                            if (cVar1 != '\0') {
                              local_960 = 0x12;
                            }
                          }
                          else {
                            local_960 = 0x23;
                          }
                        }
                        else {
                          local_960 = 0x23;
                        }
                      }
                      else {
                        local_960 = 0x12;
                      }
                    }
                    else {
                      local_960 = 0x16;
                    }
                  }
                  else {
                    local_960 = 0xc;
                  }
                }
                else {
                  local_960 = 0x16;
                }
              }
            }
            else if (*(int *)(param_1 + 0xdc8) == 7) {
              p_Stack_b8c = (_AsyncTaskCollection *)0x4eb072;
              piVar5 = (int *)game_get_state_ptr_d1520();
              if (*(int *)(*piVar5 + 0x16c) == 0x32) {
                if (*local_968 == 0) {
                  p_Stack_b8c = (_AsyncTaskCollection *)0x751650;
                  puStack_b90 = DAT_007ca234;
                  pfStack_b94 = (function<void___cdecl(void)> *)0x4eb0a1;
                  cVar1 = FUN_00427c60();
                  if (cVar1 == '\0') {
                    p_Stack_b8c = (_AsyncTaskCollection *)0x75166c;
                    puStack_b90 = DAT_007ca234;
                    pfStack_b94 = (function<void___cdecl(void)> *)0x4eb0ca;
                    cVar1 = FUN_00427c60();
                    if (cVar1 == '\0') {
                      p_Stack_b8c = (_AsyncTaskCollection *)0x751618;
                      puStack_b90 = DAT_007ca234;
                      pfStack_b94 = (function<void___cdecl(void)> *)0x4eb0f4;
                      cVar1 = FUN_00427c60();
                      if (cVar1 == '\0') {
                        p_Stack_b8c = (_AsyncTaskCollection *)0x751634;
                        puStack_b90 = DAT_007ca234;
                        pfStack_b94 = (function<void___cdecl(void)> *)0x4eb11e;
                        cVar1 = FUN_00427c60();
                        if (cVar1 == '\0') {
                          p_Stack_b8c = (_AsyncTaskCollection *)0x7516c0;
                          puStack_b90 = DAT_007ca234;
                          pfStack_b94 = (function<void___cdecl(void)> *)0x4eb144;
                          cVar1 = FUN_00427c60();
                          if (cVar1 == '\0') {
                            p_Stack_b8c = (_AsyncTaskCollection *)0x7516dc;
                            puStack_b90 = DAT_007ca234;
                            pfStack_b94 = (function<void___cdecl(void)> *)0x4eb16b;
                            cVar1 = FUN_00427c60();
                            if (cVar1 == '\0') {
                              p_Stack_b8c = (_AsyncTaskCollection *)0x751688;
                              puStack_b90 = DAT_007ca234;
                              pfStack_b94 = (function<void___cdecl(void)> *)0x4eb192;
                              cVar1 = FUN_00427c60();
                              if (cVar1 != '\0') {
                                local_960 = 5;
                              }
                            }
                            else {
                              local_960 = 3;
                            }
                          }
                          else {
                            local_960 = 4;
                          }
                        }
                        else {
                          local_960 = 5;
                        }
                      }
                      else {
                        local_960 = 8;
                      }
                    }
                    else {
                      local_960 = 3;
                    }
                  }
                  else {
                    local_960 = 8;
                  }
                }
                else if (*local_968 == 1) {
                  p_Stack_b8c = (_AsyncTaskCollection *)0x7516a4;
                  puStack_b90 = DAT_007ca234;
                  pfStack_b94 = (function<void___cdecl(void)> *)0x4eb1cb;
                  cVar1 = FUN_00427c60();
                  if (cVar1 == '\0') {
                    p_Stack_b8c = (_AsyncTaskCollection *)0x751730;
                    puStack_b90 = DAT_007ca234;
                    pfStack_b94 = (function<void___cdecl(void)> *)0x4eb1f4;
                    cVar1 = FUN_00427c60();
                    if (cVar1 == '\0') {
                      p_Stack_b8c = (_AsyncTaskCollection *)0x75174c;
                      puStack_b90 = DAT_007ca234;
                      pfStack_b94 = (function<void___cdecl(void)> *)0x4eb21e;
                      cVar1 = FUN_00427c60();
                      if (cVar1 == '\0') {
                        p_Stack_b8c = (_AsyncTaskCollection *)0x7516f8;
                        puStack_b90 = DAT_007ca234;
                        pfStack_b94 = (function<void___cdecl(void)> *)0x4eb245;
                        cVar1 = FUN_00427c60();
                        if (cVar1 == '\0') {
                          p_Stack_b8c = (_AsyncTaskCollection *)0x751714;
                          puStack_b90 = DAT_007ca234;
                          pfStack_b94 = (function<void___cdecl(void)> *)0x4eb26b;
                          cVar1 = FUN_00427c60();
                          if (cVar1 == '\0') {
                            p_Stack_b8c = (_AsyncTaskCollection *)0x7517b0;
                            puStack_b90 = DAT_007ca234;
                            pfStack_b94 = (function<void___cdecl(void)> *)0x4eb292;
                            cVar1 = FUN_00427c60();
                            if (cVar1 != '\0') {
                              local_960 = 2;
                            }
                          }
                          else {
                            local_960 = 3;
                          }
                        }
                        else {
                          local_960 = 7;
                        }
                      }
                      else {
                        local_960 = 4;
                      }
                    }
                    else {
                      local_960 = 7;
                    }
                  }
                  else {
                    local_960 = 0x16;
                  }
                }
              }
              else {
                p_Stack_b8c = (_AsyncTaskCollection *)0x4eb2b0;
                piVar5 = (int *)game_get_state_ptr_d1520();
                if (*(int *)(*piVar5 + 0x16c) == 0x33) {
                  if (*local_968 == 0) {
                    local_960 = 0xf;
                    p_Stack_b8c = (_AsyncTaskCollection *)0x7517cc;
                    puStack_b90 = DAT_007ca234;
                    pfStack_b94 = (function<void___cdecl(void)> *)0x4eb2e8;
                    cVar1 = FUN_00427c60();
                    if (cVar1 != '\0') {
                      local_960 = 0xd;
                    }
                    p_Stack_b8c = (_AsyncTaskCollection *)0x751768;
                    puStack_b90 = DAT_007ca234;
                    pfStack_b94 = (function<void___cdecl(void)> *)0x4eb30d;
                    cVar1 = FUN_00427c60();
                    if (cVar1 != '\0') {
                      local_960 = 10;
                    }
                    p_Stack_b8c = (_AsyncTaskCollection *)0x75178c;
                    puStack_b90 = DAT_007ca234;
                    pfStack_b94 = (function<void___cdecl(void)> *)0x4eb332;
                    cVar1 = FUN_00427c60();
                    if (cVar1 != '\0') {
                      local_960 = 10;
                    }
                    p_Stack_b8c = (_AsyncTaskCollection *)0x751838;
                    puStack_b90 = DAT_007ca234;
                    pfStack_b94 = (function<void___cdecl(void)> *)0x4eb356;
                    cVar1 = FUN_00427c60();
                    if (cVar1 != '\0') {
                      local_960 = 6;
                    }
                    p_Stack_b8c = (_AsyncTaskCollection *)0x75185c;
                    puStack_b90 = DAT_007ca234;
                    pfStack_b94 = (function<void___cdecl(void)> *)0x4eb37b;
                    cVar1 = FUN_00427c60();
                    if (cVar1 != '\0') {
                      local_960 = 8;
                    }
                    p_Stack_b8c = (_AsyncTaskCollection *)0x7517f0;
                    puStack_b90 = DAT_007ca234;
                    pfStack_b94 = (function<void___cdecl(void)> *)0x4eb3a0;
                    cVar1 = FUN_00427c60();
                    if (cVar1 != '\0') {
                      local_960 = 9;
                    }
                  }
                  else if (*local_968 == 1) {
                    local_960 = 0xd;
                    p_Stack_b8c = (_AsyncTaskCollection *)0x751814;
                    puStack_b90 = DAT_007ca234;
                    pfStack_b94 = (function<void___cdecl(void)> *)0x4eb3e3;
                    cVar1 = FUN_00427c60();
                    if (cVar1 != '\0') {
                      local_960 = 7;
                    }
                    p_Stack_b8c = (_AsyncTaskCollection *)0x7518c8;
                    puStack_b90 = DAT_007ca234;
                    pfStack_b94 = (function<void___cdecl(void)> *)0x4eb407;
                    cVar1 = FUN_00427c60();
                    if (cVar1 != '\0') {
                      local_960 = 9;
                    }
                    p_Stack_b8c = (_AsyncTaskCollection *)0x7518ec;
                    puStack_b90 = DAT_007ca234;
                    pfStack_b94 = (function<void___cdecl(void)> *)0x4eb42c;
                    cVar1 = FUN_00427c60();
                    if (cVar1 != '\0') {
                      local_960 = 10;
                    }
                    p_Stack_b8c = (_AsyncTaskCollection *)0x751880;
                    puStack_b90 = DAT_007ca234;
                    pfStack_b94 = (function<void___cdecl(void)> *)0x4eb451;
                    cVar1 = FUN_00427c60();
                    if (cVar1 != '\0') {
                      local_960 = 10;
                    }
                    p_Stack_b8c = (_AsyncTaskCollection *)0x7518a4;
                    puStack_b90 = DAT_007ca234;
                    pfStack_b94 = (function<void___cdecl(void)> *)0x4eb475;
                    cVar1 = FUN_00427c60();
                    if (cVar1 != '\0') {
                      local_960 = 7;
                    }
                    p_Stack_b8c = (_AsyncTaskCollection *)0x751930;
                    puStack_b90 = DAT_007ca234;
                    pfStack_b94 = (function<void___cdecl(void)> *)0x4eb49a;
                    cVar1 = FUN_00427c60();
                    if (cVar1 != '\0') {
                      local_960 = 10;
                    }
                  }
                }
              }
            }
LAB_004eb4ae:
            if ((*local_968 == 2) || (*local_968 == 3)) break;
            local_9c0 = local_960 * 0xe;
            while( true ) {
              p_Stack_b8c = (_AsyncTaskCollection *)0x4eb4f2;
              uVar3 = FUN_0044e2b0();
              if (uVar3 <= local_9c0) break;
              p_Stack_b8c = (_AsyncTaskCollection *)0x4eb505;
              uVar3 = FUN_0044e2b0();
              if (local_96c < uVar3) {
                p_Stack_b8c = (_AsyncTaskCollection *)local_96c;
                puStack_b90 = (undefined *)0x4eb51f;
                pcVar6 = (char *)FUN_0048ad40();
                if (*pcVar6 != '\0') {
                  p_Stack_b8c = (_AsyncTaskCollection *)local_96c;
                  puStack_b90 = (undefined *)0x4eb538;
                  puVar4 = (undefined1 *)FUN_0048ad40();
                  p_Stack_b8c = (_AsyncTaskCollection *)local_9c0;
                  puStack_b90 = (undefined *)0x4eb54c;
                  puVar7 = (undefined1 *)FUN_0048ad40();
                  *puVar7 = *puVar4;
                }
              }
              local_96c = local_96c + 1;
              local_9c0 = local_9c0 + 1;
            }
          }
          p_Stack_b8c = (_AsyncTaskCollection *)0x4ea4c9;
          FUN_005183b0();
        }
      }
    }
    p_Stack_b8c = (_AsyncTaskCollection *)0x4eb57d;
    uVar3 = FUN_0044e2b0();
    local_a2c = (function<void___cdecl(void)> *)(uVar3 / 0xe);
    local_af4 = local_99c * 0xe;
    local_985 = 0;
    p_Stack_b8c = (_AsyncTaskCollection *)0x4eb5ab;
    p_Stack_b8c = (_AsyncTaskCollection *)allocator<>();
    puStack_b90 = &local_985;
    pfStack_b94 = (function<void___cdecl(void)> *)0xe;
    uStack_b98 = 0x4eb5c0;
    local_a70 = FUN_00519ef0();
    local_8._0_1_ = 5;
    p_Stack_b8c = (_AsyncTaskCollection *)0x4eb5e1;
    local_a6c = local_a70;
    p_Stack_b8c = (_AsyncTaskCollection *)allocator<>();
    puStack_b90 = (undefined *)local_a70;
    pfStack_b94 = local_a2c;
    uStack_b98 = 0x4eb5fb;
    FUN_00518740();
    local_8 = CONCAT31(local_8._1_3_,7);
    p_Stack_b8c = (_AsyncTaskCollection *)0x4eb60a;
    FUN_0048ad80();
    local_9f4 = 0;
    for (local_9cc = 0; local_9cc < (int)local_a2c; local_9cc = local_9cc + 1) {
      for (local_9c8 = 0; local_9c8 < 0xe; local_9c8 = local_9c8 + 1) {
        local_a74 = local_9f4;
        p_Stack_b8c = (_AsyncTaskCollection *)local_9f4;
        puStack_b90 = (undefined *)0x4eb680;
        puVar4 = (undefined1 *)FUN_0048ad40();
        p_Stack_b8c = (_AsyncTaskCollection *)local_9c8;
        puStack_b90 = (undefined *)local_9cc;
        pfStack_b94 = (function<void___cdecl(void)> *)0x4eb69b;
        FUN_0044de30();
        puStack_b90 = (undefined *)0x4eb6a2;
        puVar7 = (undefined1 *)FUN_0048ad40();
        *puVar7 = *puVar4;
        local_9f4 = local_9f4 + 1;
      }
    }
    p_Stack_b8c = (_AsyncTaskCollection *)0x4eb6c1;
    FUN_00634ac0();
    p_Stack_b8c = (_AsyncTaskCollection *)0x4eb6c8;
    cVar1 = game_frame_should_continue();
    if (cVar1 == '\0') {
      p_Stack_b8c = (_AsyncTaskCollection *)local_ad0;
      puStack_b90 = (undefined *)0x4eb6f1;
      puStack_b90 = (undefined *)FUN_00634ac0();
      pfStack_b94 = local_b5c;
      uStack_b98 = 0x4eb6fe;
      p_Stack_b8c = (_AsyncTaskCollection *)FUN_004e9370();
      local_8._0_1_ = 8;
      puStack_b90 = (undefined *)0x4eb723;
      local_a7c = p_Stack_b8c;
      local_a78 = p_Stack_b8c;
      FUN_00634ac0();
      puStack_b90 = (undefined *)0x4eb72a;
      FUN_00518660();
      local_8 = CONCAT31(local_8._1_3_,7);
      p_Stack_b8c = (_AsyncTaskCollection *)0x4eb739;
      FUN_00518640();
    }
    else {
      p_Stack_b8c = (_AsyncTaskCollection *)local_ad0;
      puStack_b90 = (undefined *)0x4eb6db;
      FUN_00634ac0();
      puStack_b90 = (undefined *)0x4eb6e2;
      FUN_005185a0();
    }
    local_8 = CONCAT31(local_8._1_3_,3);
    p_Stack_b8c = (_AsyncTaskCollection *)0x4eb749;
    FUN_00518640();
    local_99c = local_99c + 1;
  } while( true );
}


/* ==== 004ec460  FUN_004ec460  size=496 ==== */

int FUN_004ec460(int param_1)

{
  undefined4 uVar1;
  int in_ECX;
  undefined4 local_c;
  
  FUN_0040d840(param_1);
  FUN_00519ad0(param_1 + 0x18);
  FUN_00519910(param_1 + 0x24);
  FUN_00519750(param_1 + 0x30);
  FUN_00519550(param_1 + 0x3c);
  FUN_00519550(param_1 + 0x48);
  FUN_00429b00(param_1 + 0x54);
  FUN_005193a0(param_1 + 0x60);
  FUN_004299b0(param_1 + 0x6c);
  FUN_00429b00(param_1 + 0x78);
  FUN_00429b00(param_1 + 0x84);
  *(undefined4 *)(in_ECX + 0x90) = *(undefined4 *)(param_1 + 0x90);
  *(undefined4 *)(in_ECX + 0x94) = *(undefined4 *)(param_1 + 0x94);
  *(undefined4 *)(in_ECX + 0x98) = *(undefined4 *)(param_1 + 0x98);
  *(undefined4 *)(in_ECX + 0x9c) = *(undefined4 *)(param_1 + 0x9c);
  *(undefined4 *)(in_ECX + 0xa0) = *(undefined4 *)(param_1 + 0xa0);
  *(undefined4 *)(in_ECX + 0xa4) = *(undefined4 *)(param_1 + 0xa4);
  *(undefined4 *)(in_ECX + 0xa8) = *(undefined4 *)(param_1 + 0xa8);
  FUN_00427560(param_1 + 0xac);
  FUN_0040d840(param_1 + 0xb8);
  FUN_0040d840(param_1 + 0xd0);
  for (local_c = 0; local_c < 4; local_c = local_c + 1) {
    uVar1 = *(undefined4 *)(param_1 + 0xec + local_c * 8);
    *(undefined4 *)(in_ECX + 0xe8 + local_c * 8) = *(undefined4 *)(param_1 + 0xe8 + local_c * 8);
    *(undefined4 *)(in_ECX + 0xec + local_c * 8) = uVar1;
  }
  FUN_005193a0(param_1 + 0x108);
  FUN_005192e0(param_1 + 0x114);
  return in_ECX;
}


/* ==== 004ec650  ~_AsyncTaskCollection  size=31 ==== */

/* Library Function - Single Match
    public: virtual __thiscall
   Concurrency::details::_AsyncTaskCollection::~_AsyncTaskCollection(void)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void __thiscall
Concurrency::details::_AsyncTaskCollection::~_AsyncTaskCollection(_AsyncTaskCollection *this)

{
  FUN_00403a10();
  WorkQueue::~WorkQueue((WorkQueue *)this);
  return;
}


/* ==== 004ec670  FUN_004ec670  size=90 ==== */

undefined4 FUN_004ec670(void)

{
  undefined4 in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007163bd;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_004ec6d0(DAT_007c5940 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  FUN_0040ac90();
  ExceptionList = local_10;
  return in_ECX;
}


/* ==== 004ec6d0  FUN_004ec6d0  size=45 ==== */

undefined4 FUN_004ec6d0(void)

{
  undefined4 in_ECX;
  
  FUN_0040d8b0();
  FUN_0040d8b0();
  FUN_0040d8b0();
  return in_ECX;
}


/* ==== 004ec700  ~_AsyncTaskCollection  size=31 ==== */

/* Library Function - Single Match
    public: virtual __thiscall
   Concurrency::details::_AsyncTaskCollection::~_AsyncTaskCollection(void)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void __thiscall
Concurrency::details::_AsyncTaskCollection::~_AsyncTaskCollection(_AsyncTaskCollection *this)

{
  FUN_00403a10();
  _RunAllParam<unsigned_char>::~_RunAllParam<unsigned_char>((_RunAllParam<unsigned_char> *)this);
  return;
}


/* ==== 004ec720  FUN_004ec720  size=87 ==== */

void FUN_004ec720(void)

{
  FUN_00427480();
  FUN_00415410();
  FUN_00519180();
  FUN_00403a10();
  FUN_00403a10();
  FUN_00450d20();
  return;
}


/* ==== 004ec780  ~_RunAllParam<unsigned_char>  size=42 ==== */

/* Library Function - Single Match
    public: __thiscall Concurrency::details::_RunAllParam<unsigned char>::~_RunAllParam<unsigned
   char>(void)
   
   Libraries: Visual Studio 2012 Debug, Visual Studio 2012 Release */

void __thiscall
Concurrency::details::_RunAllParam<unsigned_char>::~_RunAllParam<unsigned_char>
          (_RunAllParam<unsigned_char> *this)

{
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(this + 0x30));
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(this + 0x18));
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)this);
  return;
}


/* ==== 004ec7b0  FUN_004ec7b0  size=893 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_004ec7b0(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  function<void___cdecl(void)> **ppfVar6;
  function<void___cdecl(void)> *apfStack_98 [5];
  undefined4 uStack_84;
  undefined4 *puStack_80;
  undefined4 *puStack_7c;
  undefined1 *puStack_78;
  code *pcStack_74;
  uint uStack_70;
  undefined1 local_60 [4];
  undefined1 local_5c [4];
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  int local_44;
  undefined4 local_40;
  int local_3c;
  uint local_38;
  uint local_34;
  undefined4 local_30;
  function<void___cdecl(void)> local_2c [24];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00716411;
  local_10 = ExceptionList;
  uStack_70 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  pcStack_74 = (code *)0x4ec7df;
  local_14 = uStack_70;
  img_path_loader_24();
  pcStack_74 = (code *)0x4ec7e4;
  FUN_0066a620();
  pcStack_74 = (code *)param_1;
  puStack_78 = (undefined1 *)0x4ec7ed;
  FUN_00667750();
  pcStack_74 = (code *)param_1;
  puStack_78 = (undefined1 *)0x4ec7f9;
  FUN_005399f0();
  pcStack_74 = (code *)0x4ec801;
  FUN_00666d80();
  pcStack_74 = (code *)param_1;
  puStack_78 = (undefined1 *)0x4ec80a;
  FUN_004af5f0();
  pcStack_74 = (code *)param_1;
  puStack_78 = (undefined1 *)0x4ec816;
  img_path_loader_02();
  pcStack_74 = (code *)param_1;
  puStack_78 = (undefined1 *)0x4ec822;
  FUN_00629060();
  pcStack_74 = (code *)0x4ec82a;
  FUN_006696f0();
  pcStack_74 = (code *)param_1;
  puStack_78 = (undefined1 *)0x4ec833;
  FUN_0062d970();
  pcStack_74 = (code *)0x9d8;
  puStack_78 = (undefined1 *)0x4ec840;
  local_3c = crt_or_heap_alloc_helper();
  local_8 = 0;
  if (local_3c == 0) {
    local_40 = 0;
  }
  else {
    pcStack_74 = (code *)0x4ec85b;
    local_40 = FUN_004cfdb0();
  }
  local_4c = local_40;
  local_8 = 0xffffffff;
  DAT_007ca1b0 = local_40;
  pcStack_74 = (code *)0x19c;
  puStack_78 = (undefined1 *)0x4ec887;
  local_44 = crt_or_heap_alloc_helper();
  local_8 = 1;
  if (local_44 == 0) {
    local_48 = 0;
  }
  else {
    pcStack_74 = (code *)0x4ec8a2;
    local_48 = FUN_004cf860();
  }
  local_50 = local_48;
  local_8 = 0xffffffff;
  pcStack_74 = (code *)0x4ec8c6;
  puVar2 = (undefined4 *)FUN_004d58e0();
  *puVar2 = local_50;
  local_54 = 7000;
  local_58 = 7000;
  pcStack_74 = FUN_006574e0;
  puStack_78 = local_5c;
  puStack_7c = &local_54;
  puStack_80 = (undefined4 *)0x4ec8f0;
  game_timing_or_delay_helper();
  puStack_7c = (undefined4 *)0x4ec8f7;
  puVar2 = (undefined4 *)FUN_00402170();
  puStack_78 = (undefined1 *)*puVar2;
  puStack_7c = (undefined4 *)local_60;
  puStack_80 = &local_58;
  uStack_84 = 0x4ec90c;
  game_timing_or_delay_helper();
  puStack_80 = (undefined4 *)0x4ec913;
  puStack_7c = (undefined4 *)FUN_004021b0();
  puStack_7c = (undefined4 *)*puStack_7c;
  puStack_80 = (undefined4 *)0x4ec91b;
  FUN_00405d30();
  pcStack_74 = (code *)DAT_007ca768;
  puStack_78 = (undefined1 *)DAT_007ca764;
  puVar2 = &DAT_007ca70c;
  ppfVar6 = apfStack_98;
  for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
    *ppfVar6 = (function<void___cdecl(void)> *)*puVar2;
    puVar2 = puVar2 + 1;
    ppfVar6 = ppfVar6 + 1;
  }
  FUN_0065e180();
  if (*(int *)(param_1 + 0xadc) == 1) {
    *(undefined4 *)(param_1 + 0xae0) = 1;
  }
  else if (*(int *)(param_1 + 0xadc) == 2) {
    *(undefined4 *)(param_1 + 0xae0) = 5;
  }
  else if (*(int *)(param_1 + 0xadc) == 3) {
    *(undefined4 *)(param_1 + 0xae0) = 2;
  }
  else if (*(int *)(param_1 + 0xadc) == 4) {
    *(undefined4 *)(param_1 + 0xae0) = 1;
  }
  else if (*(int *)(param_1 + 0xadc) == 5) {
    *(undefined4 *)(param_1 + 0xae0) = 1;
  }
  pcStack_74 = *(code **)(param_1 + 0xadc);
  puStack_78 = (undefined1 *)0x4ec9de;
  local_30 = FUN_005a7d70();
  pcStack_74 = (code *)&DAT_0073fa47;
  puStack_78 = (undefined1 *)0x4ec9ee;
  FUN_004054a0();
  local_8 = 2;
  local_38 = 0;
  while( true ) {
    pcStack_74 = (code *)0x4eca12;
    uVar3 = FUN_00519290();
    if (uVar3 <= local_38) break;
    pcStack_74 = (code *)local_38;
    puStack_78 = (undefined1 *)0x4eca26;
    piVar4 = (int *)FUN_00519270();
    if (*piVar4 == *(int *)(param_1 + 0xae0)) {
      pcStack_74 = (code *)local_38;
      puStack_78 = (undefined1 *)0x4eca42;
      iVar5 = FUN_00519270();
      pcStack_74 = (code *)(iVar5 + 4);
      puStack_78 = (undefined1 *)0x4eca4e;
      FUN_0040d840();
    }
    local_38 = local_38 + 1;
  }
  apfStack_98[3] = local_2c;
  apfStack_98[2] = (function<void___cdecl(void)> *)0x4eca62;
  FUN_00405520();
  apfStack_98[3] = (function<void___cdecl(void)> *)param_1;
  apfStack_98[2] = (function<void___cdecl(void)> *)0x4eca6b;
  FUN_004e95d0();
  local_34 = 0;
  do {
    pcStack_74 = (code *)0x4eca8b;
    uVar3 = FUN_00519290();
    if (uVar3 <= local_34) {
LAB_004ecafd:
      pcStack_74 = (code *)0x4ecb02;
      d3d9_create_texture_0066d9b0();
      local_8 = 0xffffffff;
      pcStack_74 = (code *)0x4ecb11;
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_2c);
      ExceptionList = local_10;
      return;
    }
    pcStack_74 = (code *)0x75198c;
    puStack_78 = (undefined1 *)local_34;
    puStack_7c = (undefined4 *)0x4ecaa4;
    iVar5 = FUN_00519270();
    puStack_78 = (undefined1 *)(iVar5 + 0x2c);
    puStack_7c = (undefined4 *)0x4ecaad;
    cVar1 = FUN_00427c60();
    if (cVar1 != '\0') {
      pcStack_74 = (code *)local_34;
      puStack_78 = (undefined1 *)0x4ecac6;
      iVar5 = FUN_00519270();
      *(undefined4 *)(param_1 + 0x224) = *(undefined4 *)(iVar5 + 0x48);
      pcStack_74 = (code *)local_34;
      puStack_78 = (undefined1 *)0x4ecae1;
      iVar5 = FUN_00519270();
      *(undefined4 *)(param_1 + 0x228) = *(undefined4 *)(iVar5 + 0x4c);
      pcStack_74 = (code *)0x4ecaf5;
      FUN_00479060();
      goto LAB_004ecafd;
    }
    local_34 = local_34 + 1;
  } while( true );
}


/* ==== 004ecb30  FUN_004ecb30  size=2334 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_004ecb30(function<void___cdecl(void)> *param_1,function<void___cdecl(void)> *param_2,
                 int param_3,int param_4,int param_5)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  function<void___cdecl(void)> *pfVar4;
  undefined4 *puVar5;
  function<void___cdecl(void)> **ppfVar6;
  undefined1 auStack_2c4 [8];
  undefined4 uStack_2bc;
  function<void___cdecl(void)> *pfStack_2b8;
  undefined1 auStack_2b4 [4];
  undefined4 uStack_2b0;
  char *pcStack_2ac;
  undefined1 auStack_2a8 [4];
  undefined4 uStack_2a4;
  function<void___cdecl(void)> *pfStack_2a0;
  function<void___cdecl(void)> *pfStack_29c;
  undefined4 uStack_298;
  function<void___cdecl(void)> *pfStack_294;
  function<void___cdecl(void)> *apfStack_290 [5];
  undefined4 uStack_27c;
  undefined4 *puStack_278;
  undefined4 *puStack_274;
  function<void___cdecl(void)> *pfStack_270;
  function<void___cdecl(void)> *pfStack_26c;
  undefined1 auStack_268 [12];
  undefined4 uStack_25c;
  undefined4 uStack_258;
  function<void___cdecl(void)> *pfStack_254;
  uint uStack_250;
  undefined1 local_23c [4];
  undefined1 local_238 [4];
  undefined1 *local_234;
  undefined4 local_230;
  undefined1 *local_22c;
  undefined1 *local_228;
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
  undefined1 *local_1f4;
  undefined1 *local_1f0;
  undefined1 *local_1ec;
  undefined1 *local_1e8;
  undefined1 *local_1e4;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined4 local_1d8;
  undefined4 local_1d4;
  int local_1d0;
  undefined4 local_1cc;
  int local_1c8;
  undefined4 local_1c4;
  int local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  int local_1b4;
  int local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  int *local_1a4;
  int local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  int local_194;
  undefined4 local_190;
  int local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  function<void___cdecl(void)> *local_178;
  function<void___cdecl(void)> *local_174;
  undefined4 local_170;
  uint local_16c;
  function<void___cdecl(void)> *local_168;
  int local_164;
  function<void___cdecl(void)> local_2c [24];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071649a;
  local_10 = ExceptionList;
  uStack_250 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_1dc = 0xdac;
  pfStack_254 = (function<void___cdecl(void)> *)&local_1dc;
  uStack_258 = 0x4ecb78;
  local_14 = uStack_250;
  pfStack_254 = (function<void___cdecl(void)> *)game_timing_or_delay_helper();
  uStack_258 = 0x4ecb7e;
  ui_close_matching_widgets();
  local_1e0 = 0xd48;
  pfStack_254 = (function<void___cdecl(void)> *)&local_1e0;
  uStack_258 = 0x4ecb9c;
  pfStack_254 = (function<void___cdecl(void)> *)game_timing_or_delay_helper();
  uStack_258 = 0x4ecba2;
  ui_close_matching_widgets();
  local_17c = 0x15e0;
  pfStack_254 = (function<void___cdecl(void)> *)&local_17c;
  uStack_258 = 0x4ecbc0;
  pfStack_254 = (function<void___cdecl(void)> *)game_timing_or_delay_helper();
  uStack_258 = 0x4ecbc6;
  ui_close_matching_widgets();
  local_180 = 0x1644;
  pfStack_254 = (function<void___cdecl(void)> *)&local_180;
  uStack_258 = 0x4ecbe4;
  pfStack_254 = (function<void___cdecl(void)> *)game_timing_or_delay_helper();
  uStack_258 = 0x4ecbea;
  ui_close_matching_widgets();
  pfStack_254 = (function<void___cdecl(void)> *)0x0;
  uStack_258 = 0x5e6;
  uStack_25c = 0x4ecbf9;
  ui_command_dispatch();
  pfStack_254 = param_2;
  uStack_258 = 0x4ecc0b;
  local_170 = FUN_005a7d70();
  pfStack_254 = (function<void___cdecl(void)> *)&DAT_0073fa4e;
  uStack_258 = 0x4ecc1e;
  FUN_004054a0();
  local_8 = 0;
  local_16c = 0;
  while( true ) {
    pfStack_254 = (function<void___cdecl(void)> *)0x4ecc4e;
    uVar1 = FUN_00519290();
    if (uVar1 <= local_16c) break;
    pfStack_254 = (function<void___cdecl(void)> *)local_16c;
    uStack_258 = 0x4ecc6b;
    piVar2 = (int *)FUN_00519270();
    if (*piVar2 == param_3) {
      pfStack_254 = (function<void___cdecl(void)> *)local_16c;
      uStack_258 = 0x4ecc87;
      iVar3 = FUN_00519270();
      pfStack_254 = (function<void___cdecl(void)> *)(iVar3 + 4);
      uStack_258 = 0x4ecc93;
      FUN_0040d840();
    }
    local_16c = local_16c + 1;
  }
  local_20c = auStack_268;
  pfStack_26c = local_2c;
  pfStack_270 = (function<void___cdecl(void)> *)0x4eccaa;
  FUN_00405520();
  pfStack_26c = param_1;
  pfStack_270 = (function<void___cdecl(void)> *)0x4eccb3;
  FUN_004e95d0();
  local_168 = (function<void___cdecl(void)> *)0x0;
  while( true ) {
    pfStack_26c = local_2c;
    pfStack_270 = (function<void___cdecl(void)> *)0x4ecce5;
    FUN_00405520();
    pfStack_26c = (function<void___cdecl(void)> *)0x4eccf0;
    local_184 = FUN_005b75d0();
    pfStack_26c = (function<void___cdecl(void)> *)0x4ecd04;
    pfVar4 = (function<void___cdecl(void)> *)FUN_004274f0();
    if (pfVar4 <= local_168) break;
    pfStack_26c = local_168;
    local_1e4 = (undefined1 *)(apfStack_290 + 3);
    apfStack_290[2] = local_2c;
    apfStack_290[1] = (function<void___cdecl(void)> *)0x4ecd2b;
    FUN_00405520();
    apfStack_290[2] = (function<void___cdecl(void)> *)0x4ecd36;
    local_188 = FUN_005b75d0();
    uStack_258 = 0x4ecd4a;
    local_18c = FUN_004274d0();
    if (*(int *)(local_18c + 0x10) == param_4) {
      pfStack_254 = local_168;
      local_1e8 = (undefined1 *)&pfStack_26c;
      pfStack_270 = local_2c;
      puStack_274 = (undefined4 *)0x4ecd7d;
      FUN_00405520();
      pfStack_270 = (function<void___cdecl(void)> *)0x4ecd88;
      local_190 = FUN_005b75d0();
      uStack_258 = 0x4ecd9c;
      local_194 = FUN_004274d0();
      if (*(int *)(local_194 + 0x14) == param_5) {
        pfStack_254 = local_168;
        local_1ec = (undefined1 *)&pfStack_26c;
        pfStack_270 = local_2c;
        puStack_274 = (undefined4 *)0x4ecdcf;
        FUN_00405520();
        pfStack_270 = (function<void___cdecl(void)> *)0x4ecdda;
        local_198 = FUN_005b75d0();
        pfStack_270 = (function<void___cdecl(void)> *)0x4ecdee;
        local_1a4 = (int *)FUN_004274d0();
        pfStack_26c = local_168;
        local_1f0 = (undefined1 *)(apfStack_290 + 3);
        apfStack_290[2] = local_2c;
        apfStack_290[1] = (function<void___cdecl(void)> *)0x4ece0f;
        FUN_00405520();
        apfStack_290[2] = (function<void___cdecl(void)> *)0x4ece1a;
        local_19c = FUN_005b75d0();
        apfStack_290[2] = (function<void___cdecl(void)> *)0x4ece2e;
        local_1a0 = FUN_004274d0();
        *(int *)(param_1 + 0x224) = *(int *)(local_1a0 + 8) / 2 + *local_1a4;
        apfStack_290[3] = local_168;
        local_1f4 = (undefined1 *)&pfStack_29c;
        pfStack_2a0 = local_2c;
        uStack_2a4 = 0x4ece6e;
        FUN_00405520();
        pfStack_2a0 = (function<void___cdecl(void)> *)0x4ece79;
        local_1a8 = FUN_005b75d0();
        pfStack_2a0 = (function<void___cdecl(void)> *)0x4ece8d;
        local_1b4 = FUN_004274d0();
        pfStack_29c = local_168;
        local_1f8 = auStack_2b4;
        pfStack_2b8 = local_2c;
        uStack_2bc = 0x4eceae;
        FUN_00405520();
        pfStack_2b8 = (function<void___cdecl(void)> *)0x4eceb9;
        local_1ac = FUN_005b75d0();
        uStack_258 = 0x4ececd;
        local_1b0 = FUN_004274d0();
        *(int *)(param_1 + 0x228) = *(int *)(local_1b0 + 0xc) / 2 + *(int *)(local_1b4 + 4);
        pfStack_254 = (function<void___cdecl(void)> *)0x4ecefb;
        FUN_00479060();
      }
    }
    local_168 = local_168 + 1;
  }
  if (DAT_007ca800 != param_2) {
    DAT_007ca800 = param_2;
    pfStack_26c = (function<void___cdecl(void)> *)0x4ecf30;
    FUN_0040ac90();
    local_8._0_1_ = 1;
    pfStack_26c = param_2;
    pfStack_270 = (function<void___cdecl(void)> *)0x4ecf43;
    local_174 = (function<void___cdecl(void)> *)FUN_005a7d70();
    local_1b8 = 100;
    pfStack_26c = (function<void___cdecl(void)> *)&local_1b8;
    pfStack_270 = (function<void___cdecl(void)> *)0x4ecf64;
    pfStack_26c = (function<void___cdecl(void)> *)game_timing_or_delay_helper();
    pfStack_270 = (function<void___cdecl(void)> *)0x4ecf6a;
    ui_close_matching_widgets();
    local_1bc = 100;
    pfStack_26c = (function<void___cdecl(void)> *)&local_1bc;
    pfStack_270 = (function<void___cdecl(void)> *)0x4ecf88;
    pfStack_26c = (function<void___cdecl(void)> *)game_timing_or_delay_helper();
    pfStack_270 = (function<void___cdecl(void)> *)0x0;
    puStack_274 = (undefined4 *)0x0;
    puStack_278 = *(undefined4 **)(local_174 + 0x30);
    local_1fc = (undefined1 *)apfStack_290;
    pfStack_294 = local_174 + 0x18;
    uStack_298 = 0x4ecfb1;
    local_200 = FUN_00405520();
    local_8._0_1_ = 2;
    local_204 = auStack_2a8;
    pcStack_2ac = "Cutscene";
    uStack_2b0 = 0x4ecfd0;
    local_208 = FUN_004054a0();
    local_8._0_1_ = 3;
    pcStack_2ac = (char *)0x32;
    local_228 = auStack_2c4;
    FUN_004054a0(&DAT_007519b8);
    local_8._0_1_ = 1;
    local_1c0 = FUN_00661cc0(0,0);
    *(undefined4 *)(local_1c0 + 0xae4) = 0x8fc;
    *(undefined4 *)(local_1c0 + 0xaec) = 1;
    *(undefined4 *)(local_1c0 + 0xae8) = 1;
    local_1c4 = 100;
    pfStack_26c = (function<void___cdecl(void)> *)&local_1c4;
    pfStack_270 = (function<void___cdecl(void)> *)0x4ed05e;
    local_164 = local_1c0;
    pfStack_26c = (function<void___cdecl(void)> *)game_timing_or_delay_helper();
    pfStack_270 = (function<void___cdecl(void)> *)0x0;
    puStack_274 = (undefined4 *)0x0;
    puStack_278 = (undefined4 *)0x0;
    local_210 = (undefined1 *)apfStack_290;
    pfStack_294 = (function<void___cdecl(void)> *)&DAT_0073fa4d;
    uStack_298 = 0x4ed07a;
    local_214 = FUN_004054a0();
    local_8._0_1_ = 4;
    local_218 = auStack_2a8;
    pcStack_2ac = "entering title";
    uStack_2b0 = 0x4ed099;
    local_21c = FUN_004054a0();
    local_8._0_1_ = 5;
    pcStack_2ac = (char *)0x30;
    local_220 = auStack_2c4;
    FUN_004054a0(&DAT_007519ec);
    local_8._0_1_ = 1;
    local_1c8 = FUN_00661cc0(0,0);
    *(undefined4 *)(local_1c8 + 0x54) = 0x140;
    *(undefined4 *)(local_1c8 + 0x58) = 0xf0;
    *(undefined4 *)(local_1c8 + 0xadc) = 0;
    *(undefined4 *)(local_1c8 + 0xad8) = 0;
    *(undefined4 *)(local_1c8 + 0xae4) = 5000;
    *(undefined4 *)(local_1c8 + 0xaec) = 200;
    *(undefined4 *)(local_1c8 + 0xae8) = 200;
    pfStack_26c = local_174;
    pfStack_270 = (function<void___cdecl(void)> *)0x4ed152;
    local_164 = local_1c8;
    pfStack_26c = (function<void___cdecl(void)> *)FUN_005e9250();
    *(undefined1 *)(local_164 + 0x1d4) = 1;
    pfStack_270 = (function<void___cdecl(void)> *)0x4ed180;
    local_178 = pfStack_26c;
    FUN_00426840();
    pfStack_26c = (function<void___cdecl(void)> *)&local_178;
    pfStack_270 = (function<void___cdecl(void)> *)0x4ed18c;
    FUN_004d1b30();
    pfStack_270 = (function<void___cdecl(void)> *)0x4ed193;
    FUN_00517ee0();
    local_1cc = 100;
    pfStack_26c = (function<void___cdecl(void)> *)&local_1cc;
    pfStack_270 = (function<void___cdecl(void)> *)0x4ed1af;
    pfStack_26c = (function<void___cdecl(void)> *)game_timing_or_delay_helper();
    pfStack_270 = (function<void___cdecl(void)> *)0x0;
    puStack_274 = (undefined4 *)0x0;
    puStack_278 = (undefined4 *)0x0;
    local_224 = (undefined1 *)apfStack_290;
    pfStack_294 = (function<void___cdecl(void)> *)0x7519cc;
    uStack_298 = 0x4ed1cb;
    FUN_004054a0();
    local_8._0_1_ = 6;
    local_22c = auStack_2a8;
    pcStack_2ac = "Black";
    uStack_2b0 = 0x4ed1ea;
    local_230 = FUN_004054a0();
    local_8._0_1_ = 7;
    pcStack_2ac = (char *)0x2d;
    local_234 = auStack_2c4;
    FUN_004054a0(&DAT_00751a04);
    local_8._0_1_ = 1;
    local_1d0 = FUN_00661cc0(0,0);
    *(undefined4 *)(local_1d0 + 0x5c) = 0;
    *(undefined4 *)(local_1d0 + 0xad4) = 2000;
    *(undefined4 *)(local_1d0 + 0xadc) = 300;
    *(undefined4 *)(local_1d0 + 0xad8) = 300;
    *(undefined4 *)(local_1d0 + 0xae4) = 0;
    *(undefined4 *)(local_1d0 + 0xaec) = 1000;
    *(undefined4 *)(local_1d0 + 0xae8) = 1000;
    local_8 = (uint)local_8._1_3_ << 8;
    pfStack_26c = (function<void___cdecl(void)> *)0x4ed2a9;
    local_164 = local_1d0;
    FUN_00403a10();
    local_1d4 = 100;
    local_1d8 = 100;
    pfStack_26c = (function<void___cdecl(void)> *)FUN_006574e0;
    pfStack_270 = (function<void___cdecl(void)> *)local_238;
    puStack_274 = &local_1d4;
    puStack_278 = (undefined4 *)0x4ed2db;
    game_timing_or_delay_helper();
    puStack_274 = (undefined4 *)0x4ed2e2;
    puVar5 = (undefined4 *)FUN_00402170();
    pfStack_270 = (function<void___cdecl(void)> *)*puVar5;
    puStack_274 = (undefined4 *)local_23c;
    puStack_278 = &local_1d8;
    uStack_27c = 0x4ed2fd;
    game_timing_or_delay_helper();
    puStack_278 = (undefined4 *)0x4ed304;
    puStack_274 = (undefined4 *)FUN_004021b0();
    puStack_274 = (undefined4 *)*puStack_274;
    puStack_278 = (undefined4 *)0x4ed30c;
    FUN_00405d30();
    pfStack_26c = DAT_007ca768;
    pfStack_270 = (function<void___cdecl(void)> *)DAT_007ca764;
    puVar5 = &DAT_007ca70c;
    ppfVar6 = apfStack_290;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *ppfVar6 = (function<void___cdecl(void)> *)*puVar5;
      puVar5 = puVar5 + 1;
      ppfVar6 = ppfVar6 + 1;
    }
    pfStack_294 = (function<void___cdecl(void)> *)0x4ed332;
    FUN_0065e180();
  }
  *(function<void___cdecl(void)> **)(param_1 + 0xadc) = param_2;
  *(int *)(param_1 + 0xae0) = param_3;
  if ((*(int *)(param_1 + 0xadc) == 1) && (*(int *)(param_1 + 0xae0) == 1)) {
    *(undefined4 *)(param_1 + 0xdd8) = 1;
  }
  else if ((*(int *)(param_1 + 0xadc) == 2) && (*(int *)(param_1 + 0xae0) == 5)) {
    *(undefined4 *)(param_1 + 0xdd8) = 1;
  }
  else if ((*(int *)(param_1 + 0xadc) == 3) && (*(int *)(param_1 + 0xae0) == 2)) {
    *(undefined4 *)(param_1 + 0xdd8) = 1;
  }
  else if ((*(int *)(param_1 + 0xadc) == 4) && (*(int *)(param_1 + 0xae0) == 1)) {
    *(undefined4 *)(param_1 + 0xdd8) = 1;
  }
  else if ((*(int *)(param_1 + 0xadc) == 5) && (*(int *)(param_1 + 0xae0) == 1)) {
    *(undefined4 *)(param_1 + 0xdd8) = 1;
  }
  else {
    *(undefined4 *)(param_1 + 0xdd8) = 2;
  }
  local_8 = 0xffffffff;
  pfStack_26c = (function<void___cdecl(void)> *)0x4ed432;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_2c);
  ExceptionList = local_10;
  return;
}


/* ==== 004ed450  FUN_004ed450  size=2836 ==== */

void FUN_004ed450(undefined4 *param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined4 *puStack_164;
  undefined4 uStack_160;
  undefined4 *puStack_15c;
  undefined4 *puStack_158;
  undefined4 *puStack_154;
  undefined4 *puStack_150;
  CTraceSnapshot *pCStack_14c;
  uint uStack_148;
  undefined1 local_140 [28];
  undefined4 local_124 [4];
  undefined1 *local_114;
  undefined1 *local_110;
  undefined1 *local_10c;
  undefined1 *local_108;
  undefined1 local_104 [4];
  undefined1 local_100 [4];
  undefined4 local_fc;
  undefined4 local_f8;
  CTraceSnapshot local_f4 [20];
  int *local_e0;
  int local_dc;
  int *local_d8;
  int *local_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  int *local_c4;
  int *local_c0;
  int *local_bc;
  undefined4 local_b8;
  int *local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined *local_a0;
  int local_9c;
  undefined *local_98;
  int local_94;
  undefined *local_90;
  int local_8c;
  undefined4 *local_88;
  int *local_84;
  undefined *local_80;
  int *local_7c;
  int local_78;
  int *local_74;
  int local_70;
  int *local_6c;
  undefined4 local_68;
  int *local_64;
  int *local_60;
  int local_5c;
  int local_58;
  int *local_54;
  int *local_50;
  int local_4c;
  int *local_48;
  int *local_44;
  int *local_40;
  int local_3c;
  int *local_38;
  int *local_34;
  int *local_30;
  int *local_2c;
  int *local_28;
  int local_24;
  int local_20;
  char local_1a;
  char local_19;
  undefined4 local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007164eb;
  local_10 = ExceptionList;
  uStack_148 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  pCStack_14c = (CTraceSnapshot *)0x4ed481;
  iVar2 = FUN_0053c7e0();
  if (iVar2 != 0) {
    pCStack_14c = (CTraceSnapshot *)0x4ed48a;
    FUN_0053c7e0();
    pCStack_14c = (CTraceSnapshot *)0x4ed491;
    FUN_004a1510();
  }
  pCStack_14c = (CTraceSnapshot *)0x4ed49d;
  FUN_00518c20();
  pCStack_14c = (CTraceSnapshot *)0x4ed4a8;
  FUN_005182b0();
  local_8 = 0;
  pCStack_14c = (CTraceSnapshot *)0x4ed4b4;
  game_get_state_ptr_d1520();
  pCStack_14c = (CTraceSnapshot *)0x4ed4c1;
  cVar1 = game_frame_should_continue();
  if (cVar1 == '\0') {
    pCStack_14c = (CTraceSnapshot *)0x4ed4cd;
    piVar3 = (int *)game_get_state_ptr_d1520();
    pCStack_14c = (CTraceSnapshot *)(*piVar3 + 0x160);
    puStack_150 = (undefined4 *)0x4ed4e1;
    FUN_00427560();
    pCStack_14c = (CTraceSnapshot *)0x4ed4e6;
    game_get_state_ptr_d1520();
    pCStack_14c = (CTraceSnapshot *)0x4ed4f3;
    FUN_0040d5f0();
  }
  pCStack_14c = (CTraceSnapshot *)0x4ed4fc;
  FUN_004d58e0();
  pCStack_14c = (CTraceSnapshot *)0x4ed509;
  cVar1 = FUN_0044e1c0();
  if (cVar1 == '\0') {
    pCStack_14c = (CTraceSnapshot *)0x4ed51c;
    piVar3 = (int *)FUN_004d58e0();
    local_58 = *piVar3 + 0x170;
    pCStack_14c = (CTraceSnapshot *)0x4ed52e;
    cVar1 = FUN_0044e1c0();
    if (cVar1 == '\0') {
      pCStack_14c = (CTraceSnapshot *)&local_18;
      puStack_150 = (undefined4 *)0x4ed545;
      FUN_0044e0f0();
      while( true ) {
        pCStack_14c = (CTraceSnapshot *)local_100;
        puStack_150 = (undefined4 *)0x4ed555;
        pCStack_14c = (CTraceSnapshot *)FUN_0040d9a0();
        puStack_150 = (undefined4 *)0x4ed55e;
        cVar1 = FUN_0040d2d0();
        if (cVar1 == '\0') break;
        pCStack_14c = (CTraceSnapshot *)0x4ed571;
        piVar3 = (int *)FUN_0042a580();
        if (*(int *)(*piVar3 + 0x204) == 200) {
          pCStack_14c = (CTraceSnapshot *)0x4ed58b;
          pCStack_14c = (CTraceSnapshot *)FUN_0042a580();
          puStack_150 = (undefined4 *)0x4ed597;
          FUN_0044de80();
          pCStack_14c = (CTraceSnapshot *)0x4ed5a0;
          piVar3 = (int *)FUN_0042a580();
          if (*(int *)(*piVar3 + 0x204) == 200) {
            pCStack_14c = (CTraceSnapshot *)0x4ed5ba;
            piVar3 = (int *)FUN_0042a580();
            if (*(int *)(*piVar3 + 0x1e4) == 0x4e2b) {
              pCStack_14c = (CTraceSnapshot *)0x4ed5d1;
              iVar2 = game_get_player_or_session_blob();
              if (*(char *)(iVar2 + 0xdb8) == '\0') {
                pCStack_14c = (CTraceSnapshot *)0x4ed5e1;
                iVar2 = game_get_player_or_session_blob();
                pCStack_14c = (CTraceSnapshot *)0x4ed5eb;
                piVar3 = (int *)FUN_0042a580();
                if (*(int *)(iVar2 + 0x9b4) == *piVar3) {
                  pCStack_14c = (CTraceSnapshot *)0x4ed5fa;
                  iVar2 = game_get_player_or_session_blob();
                  *(undefined4 *)(iVar2 + 0x9b4) = 0;
                  pCStack_14c = (CTraceSnapshot *)0x4ed60c;
                  puVar4 = (undefined4 *)FUN_0042a580();
                  local_64 = (int *)*puVar4;
                  pCStack_14c = (CTraceSnapshot *)0x0;
                  puStack_150 = (undefined4 *)0x4ed623;
                  (**(code **)(*local_64 + 0xb4))();
                  pCStack_14c = (CTraceSnapshot *)0x4ed62b;
                  puVar4 = (undefined4 *)FUN_0042a580();
                  pCStack_14c = (CTraceSnapshot *)0x4ed632;
                  iVar2 = game_get_player_or_session_blob();
                  *(undefined4 *)(iVar2 + 0x9b4) = *puVar4;
                }
              }
              else {
                pCStack_14c = (CTraceSnapshot *)0x4ed644;
                local_68 = FUN_004d1a70();
                pCStack_14c = (CTraceSnapshot *)0x4ed64f;
                local_28 = (int *)game_loop_helper_018d0();
                pCStack_14c = (CTraceSnapshot *)0x4ed65a;
                local_b4 = (int *)game_loop_helper_018b0();
                for (; local_28 != local_b4; local_28 = local_28 + 1) {
                  local_2c = local_28;
                  if (*local_28 != 0) {
                    iVar2 = *local_28;
                    pCStack_14c = (CTraceSnapshot *)0x4ed691;
                    piVar3 = (int *)FUN_0042a580();
                    if (*(int *)(iVar2 + 0x9b4) == *piVar3) {
                      *(undefined4 *)(*local_2c + 0x9b4) = 0;
                      pCStack_14c = (CTraceSnapshot *)0x4ed6b2;
                      puVar4 = (undefined4 *)FUN_0042a580();
                      local_6c = (int *)*puVar4;
                      pCStack_14c = (CTraceSnapshot *)0x0;
                      puStack_150 = (undefined4 *)0x4ed6c9;
                      (**(code **)(*local_6c + 0xb4))();
                      pCStack_14c = (CTraceSnapshot *)0x4ed6d1;
                      puVar4 = (undefined4 *)FUN_0042a580();
                      *(undefined4 *)(*local_2c + 0x9b4) = *puVar4;
                    }
                  }
                }
              }
            }
          }
          pCStack_14c = (CTraceSnapshot *)0x0;
          puStack_150 = (undefined4 *)0xffffffff;
          puStack_154 = (undefined4 *)0xffffffff;
          puStack_158 = (undefined4 *)0xffffffff;
          puStack_15c = (undefined4 *)0x4ed6f0;
          piVar3 = (int *)FUN_0042a580();
          puStack_15c = *(undefined4 **)(*piVar3 + 0x978);
          uStack_160 = 0xffffffff;
          puStack_164 = (undefined4 *)0x4ed703;
          puStack_164 = (undefined4 *)FUN_0042a580();
          puStack_164 = (undefined4 *)*puStack_164;
          FUN_004e50c0();
          FUN_004e5240();
          local_b8 = local_18;
          pCStack_14c = (CTraceSnapshot *)local_18;
          puStack_150 = (undefined4 *)local_104;
          puStack_154 = (undefined4 *)0x4ed732;
          FUN_004d58e0();
          puStack_154 = (undefined4 *)0x4ed73f;
          puVar4 = (undefined4 *)FUN_0044e0a0();
          local_18 = *puVar4;
        }
        else {
          pCStack_14c = (CTraceSnapshot *)0x4ed74e;
          FUN_0042a560();
        }
      }
    }
  }
  if ((-1 < *(int *)(local_14 + 0xa4)) && (-1 < *(int *)(local_14 + 0xa8))) {
    local_19 = '\0';
    local_70 = local_14 + 0x38;
    pCStack_14c = (CTraceSnapshot *)0x4ed789;
    local_30 = (int *)game_loop_helper_018d0();
    pCStack_14c = (CTraceSnapshot *)0x4ed794;
    local_bc = (int *)game_loop_helper_018b0();
    for (; local_30 != local_bc; local_30 = local_30 + 7) {
      local_74 = local_30;
      if ((*local_30 == *(int *)(local_14 + 0xa4)) && (local_30[1] == *(int *)(local_14 + 0xa8))) {
        local_19 = '\x01';
        break;
      }
    }
    if (local_19 == '\0') {
      puStack_150 = (undefined4 *)(local_14 + 0xa4);
      pCStack_14c = local_f4;
      puStack_154 = (undefined4 *)0x4ed802;
      FUN_0051bd20();
      local_8._0_1_ = 1;
      pCStack_14c = (CTraceSnapshot *)local_140;
      puStack_150 = (undefined4 *)0x4ed818;
      FUN_00518d20();
      local_8 = (uint)local_8._1_3_ << 8;
      pCStack_14c = (CTraceSnapshot *)0x4ed827;
      FUN_004edf90();
    }
  }
  local_1a = '\0';
  local_78 = local_14 + 0x38;
  pCStack_14c = (CTraceSnapshot *)0x4ed83d;
  local_34 = (int *)game_loop_helper_018d0();
  pCStack_14c = (CTraceSnapshot *)0x4ed848;
  local_c0 = (int *)game_loop_helper_018b0();
  for (; local_34 != local_c0; local_34 = local_34 + 7) {
    local_7c = local_34;
    if ((*local_34 == *(int *)(local_14 + 0x180)) && (local_34[1] == *(int *)(local_14 + 0x184))) {
      local_1a = '\x01';
    }
  }
  if (local_1a == '\0') {
    pCStack_14c = (CTraceSnapshot *)(local_14 + 0xa0);
    puStack_150 = (undefined4 *)0x4ed8b1;
    puVar5 = (undefined1 *)FUN_00489ea0();
    *puVar5 = 0;
  }
  else {
    pCStack_14c = (CTraceSnapshot *)(local_14 + 0xa0);
    puStack_150 = (undefined4 *)0x4ed8cd;
    puVar5 = (undefined1 *)FUN_00489ea0();
    *puVar5 = 1;
    *(undefined4 *)(local_14 + 0x9c) = 1;
  }
  *(int *)(local_14 + 0x17c) = param_2;
  if (*(char *)(param_1 + 0x36e) == '\0') {
    param_1[0x375] = param_2;
  }
  else {
    local_80 = &DAT_007ca758;
    pCStack_14c = (CTraceSnapshot *)0x4ed914;
    local_38 = (int *)game_loop_helper_018d0();
    pCStack_14c = (CTraceSnapshot *)0x4ed91f;
    local_c4 = (int *)game_loop_helper_018b0();
    for (; local_38 != local_c4; local_38 = local_38 + 1) {
      local_84 = local_38;
      if (*local_38 != 0) {
        *(int *)(*local_38 + 0xdd4) = param_2;
      }
    }
  }
  *(undefined4 *)(local_14 + 0xa0) = 0xffffffff;
  *(undefined4 *)(local_14 + 0xac) = 0xffffffff;
  if (*(int *)(local_14 + 0x16c) < 1) {
    local_8 = 0xffffffff;
    pCStack_14c = (CTraceSnapshot *)0x4ed991;
    CTraceSnapshot::~CTraceSnapshot(local_f4);
  }
  else if (param_2 < 1) {
    local_8 = 0xffffffff;
    pCStack_14c = (CTraceSnapshot *)0x4ed9af;
    CTraceSnapshot::~CTraceSnapshot(local_f4);
  }
  else {
    pCStack_14c = (CTraceSnapshot *)0x4ed9ba;
    puVar4 = (undefined4 *)game_get_player_or_session_blob();
    if ((param_1 == puVar4) && (*(char *)(param_1 + 0x36e) != '\0')) {
      local_88 = param_1 + 0x310;
      pCStack_14c = (CTraceSnapshot *)0x4ed9ef;
      local_3c = game_loop_helper_018d0();
      pCStack_14c = (CTraceSnapshot *)0x4ed9fd;
      local_c8 = game_loop_helper_018b0();
      for (; local_3c != local_c8; local_3c = local_3c + 0x94) {
        local_5c = local_3c;
        if (0 < *(int *)(local_3c + 4)) {
          pCStack_14c = *(CTraceSnapshot **)(local_3c + 4);
          puStack_150 = (undefined4 *)0x4eda44;
          local_24 = FUN_005d83e0();
          pCStack_14c = (CTraceSnapshot *)0x751a0c;
          puStack_150 = (undefined4 *)(local_24 + 0xd0);
          puStack_154 = (undefined4 *)0x4eda5a;
          cVar1 = FUN_00427c60();
          if ((((cVar1 != '\0') && (*(int *)(local_24 + 0xb4) == param_1[0x373])) &&
              (*(int *)(local_24 + 0xb8) <= (int)param_1[0x374])) &&
             (*(int *)(local_24 + 0xbc) == param_1[0x375])) {
            pCStack_14c = (CTraceSnapshot *)0x4edaa9;
            pCStack_14c = (CTraceSnapshot *)FUN_00641460();
            puStack_150 = (undefined4 *)0x64;
            puStack_154 = (undefined4 *)0x0;
            puStack_158 = (undefined4 *)0x4edab9;
            FUN_0040d2a0();
            puStack_150 = (undefined4 *)0x4edac0;
            iVar2 = FUN_0040e400();
            if (iVar2 <= *(int *)(local_24 + 0xc0)) {
              pCStack_14c = *(CTraceSnapshot **)(local_5c + 4);
              puStack_150 = param_1 + 0x30c;
              puStack_154 = param_1;
              puStack_158 = (undefined4 *)0x0;
              puStack_15c = (undefined4 *)0x4edae7;
              FUN_00611860();
            }
          }
        }
      }
    }
    pCStack_14c = *(CTraceSnapshot **)(local_14 + 0x16c);
    local_108 = (undefined1 *)&puStack_164;
    uVar6 = FUN_00489ed0(&param_2);
    FUN_00405520(uVar6);
    FUN_004daf60();
    pCStack_14c = (CTraceSnapshot *)param_2;
    puStack_150 = (undefined4 *)0x4edb33;
    FUN_004e1910();
    local_10c = (undefined1 *)&uStack_160;
    puStack_164 = &param_2;
    puStack_164 = (undefined4 *)FUN_00489ed0();
    FUN_00405520();
    puStack_164 = param_1;
    FUN_004e95d0();
    if (param_3 == -1) {
      if (*(char *)(param_1 + 0x36e) == '\0') {
        local_110 = (undefined1 *)&uStack_160;
        puStack_164 = (undefined4 *)0x4edb91;
        iVar2 = game_get_player_or_session_blob();
        puStack_164 = (undefined4 *)(iVar2 + 0xdd4);
        puStack_164 = (undefined4 *)FUN_00489ed0();
        FUN_00405520();
        puStack_164 = (undefined4 *)0x4edbb8;
        local_cc = FUN_005b75d0();
        pCStack_14c = (CTraceSnapshot *)0xffffffff;
        puStack_150 = *(undefined4 **)(local_cc + 0xa0);
        puStack_154 = *(undefined4 **)(local_cc + 0x9c);
        puStack_158 = (undefined4 *)0x4edbeb;
        local_8c = local_cc;
        puStack_158 = (undefined4 *)game_get_player_or_session_blob();
        puStack_15c = &local_fc;
        uStack_160 = 0x4edbfe;
        FUN_004d4e30();
        param_1[0x89] = local_fc;
        param_1[0x8a] = local_f8;
        pCStack_14c = (CTraceSnapshot *)0x4edc24;
        FUN_00479060();
      }
      else {
        local_114 = (undefined1 *)&uStack_160;
        puStack_164 = (undefined4 *)0x4edc3a;
        iVar2 = game_get_player_or_session_blob();
        puStack_164 = (undefined4 *)(iVar2 + 0xdd4);
        puStack_164 = (undefined4 *)FUN_00489ed0();
        FUN_00405520();
        puStack_164 = (undefined4 *)0x4edc61;
        local_d0 = FUN_005b75d0();
        pCStack_14c = (CTraceSnapshot *)0x4edc7e;
        local_94 = local_d0;
        Concurrency::details::QuickBitSet::QuickBitSet((QuickBitSet *)&local_a8);
        local_90 = &DAT_007ca758;
        pCStack_14c = (CTraceSnapshot *)0x4edc94;
        local_40 = (int *)game_loop_helper_018d0();
        pCStack_14c = (CTraceSnapshot *)0x4edca2;
        local_d4 = (int *)game_loop_helper_018b0();
        for (; local_40 != local_d4; local_40 = local_40 + 1) {
          local_60 = local_40;
          if ((*local_40 != 0) && (*(char *)(*local_40 + 0xdb9) != '\0')) {
            pCStack_14c = (CTraceSnapshot *)0xffffffff;
            puStack_150 = *(undefined4 **)(local_94 + 0xa0);
            puStack_154 = *(undefined4 **)(local_94 + 0x9c);
            puStack_158 = (undefined4 *)*local_40;
            puStack_15c = local_124;
            uStack_160 = 0x4edd10;
            puVar4 = (undefined4 *)FUN_004d4e30();
            local_a8 = *puVar4;
            local_a4 = puVar4[1];
            break;
          }
        }
        local_98 = &DAT_007ca758;
        pCStack_14c = (CTraceSnapshot *)0x4edd3a;
        local_44 = (int *)game_loop_helper_018d0();
        pCStack_14c = (CTraceSnapshot *)0x4edd48;
        local_d8 = (int *)game_loop_helper_018b0();
        for (; local_44 != local_d8; local_44 = local_44 + 1) {
          local_48 = local_44;
          if (*local_44 != 0) {
            *(undefined4 *)(*local_44 + 0x224) = local_a8;
            *(undefined4 *)(*local_44 + 0x228) = local_a4;
            pCStack_14c = (CTraceSnapshot *)0x4edd9e;
            FUN_00479060();
          }
        }
      }
    }
    else {
      local_9c = local_14 + 0x1e0;
      pCStack_14c = (CTraceSnapshot *)0x4eddc0;
      local_4c = game_loop_helper_018d0();
      pCStack_14c = (CTraceSnapshot *)0x4eddce;
      local_dc = game_loop_helper_018b0();
      for (; local_4c != local_dc; local_4c = local_4c + 0x20) {
        local_20 = local_4c;
        if (((((param_3 == 0) && (*(int *)(local_4c + 0x14) == 1)) ||
             ((param_3 == 1 && (*(int *)(local_4c + 0x14) == 0)))) ||
            ((param_3 == 2 && (*(int *)(local_4c + 0x14) == 3)))) ||
           ((param_3 == 3 && (*(int *)(local_4c + 0x14) == 2)))) {
          pCStack_14c = (CTraceSnapshot *)param_3;
          puStack_150 = (undefined4 *)0x4ede41;
          piVar3 = (int *)game_get_state_ptr_d1520();
          puStack_150 = *(undefined4 **)(*piVar3 + 0x210 + *(int *)(local_20 + 0x14) * 0x1f0);
          puStack_154 = (undefined4 *)0x4ede5a;
          piVar3 = (int *)game_get_state_ptr_d1520();
          puStack_154 = *(undefined4 **)(*piVar3 + 0x20c + *(int *)(local_20 + 0x14) * 0x1f0);
          puStack_158 = param_1;
          puStack_15c = &local_b0;
          uStack_160 = 0x4ede84;
          FUN_004d4e30();
          if (*(char *)(param_1 + 0x36e) == '\0') {
            param_1[0x89] = local_b0;
            param_1[0x8a] = local_ac;
            pCStack_14c = (CTraceSnapshot *)0x4edeb9;
            FUN_00479060();
          }
          else {
            local_a0 = &DAT_007ca758;
            pCStack_14c = (CTraceSnapshot *)0x4eded1;
            local_50 = (int *)game_loop_helper_018d0();
            pCStack_14c = (CTraceSnapshot *)0x4ededf;
            local_e0 = (int *)game_loop_helper_018b0();
            for (; local_50 != local_e0; local_50 = local_50 + 1) {
              local_54 = local_50;
              if (*local_50 != 0) {
                *(undefined4 *)(*local_50 + 0x224) = local_b0;
                *(undefined4 *)(*local_50 + 0x228) = local_ac;
                pCStack_14c = (CTraceSnapshot *)0x4edf35;
                FUN_00479060();
              }
            }
          }
          break;
        }
      }
    }
    local_8 = 0xffffffff;
    pCStack_14c = (CTraceSnapshot *)0x4edf51;
    CTraceSnapshot::~CTraceSnapshot(local_f4);
  }
  ExceptionList = local_10;
  return;
}


/* ==== 004edf70  ~CTraceSnapshot  size=31 ==== */

/* Library Function - Single Match
    public: __thiscall CTraceSnapshot::~CTraceSnapshot(void)
   
   Library: Visual Studio */

void __thiscall CTraceSnapshot::~CTraceSnapshot(CTraceSnapshot *this)

{
  FUN_00401ac0(this);
  FUN_0044e120();
  return;
}


/* ==== 004edf90  FUN_004edf90  size=23 ==== */

void FUN_004edf90(void)

{
  int in_ECX;
  
  CTraceSnapshot::~CTraceSnapshot((CTraceSnapshot *)(in_ECX + 8));
  return;
}


/* ==== 004edfb0  FUN_004edfb0  size=54 ==== */

void FUN_004edfb0(undefined4 param_1,undefined4 param_2)

{
  undefined4 local_10;
  undefined4 local_c;
  
  Concurrency::details::QuickBitSet::QuickBitSet((QuickBitSet *)&local_10);
  local_10 = param_1;
  local_c = param_2;
  FUN_004c3850(&local_10);
  return;
}


/* ==== 004edff0  FUN_004edff0  size=364 ==== */

void FUN_004edff0(float param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined1 local_2c [4];
  undefined1 local_28 [4];
  undefined1 local_24 [4];
  undefined1 local_20 [4];
  undefined1 local_1c [4];
  undefined4 local_18;
  int *local_14;
  undefined1 local_c [4];
  undefined4 local_8;
  
  FUN_004021b0(&local_8);
  while( true ) {
    uVar2 = FUN_00402170(local_1c);
    cVar1 = FUN_00426ed0(uVar2);
    if (cVar1 == '\0') break;
    iVar3 = FUN_00401b20();
    local_14 = (int *)(iVar3 + 4);
    *local_14 = (int)((float)*local_14 - param_1);
    iVar3 = FUN_00401b20();
    if (*(int *)(iVar3 + 4) < 1) {
      local_18 = local_8;
      puVar4 = (undefined4 *)FUN_004a6200(local_20,local_8);
      local_8 = *puVar4;
    }
    else {
      FUN_00518380(local_24,0);
    }
  }
  FUN_004021b0(local_c);
  while( true ) {
    uVar2 = FUN_00402170(local_2c);
    cVar1 = FUN_00426ed0(uVar2);
    if (cVar1 == '\0') break;
    iVar3 = FUN_00641430();
    piVar5 = (int *)FUN_00401b20();
    iVar3 = iVar3 % (*piVar5 << 1) + DAT_007ca764;
    piVar5 = (int *)FUN_00401b20();
    DAT_007ca764 = iVar3 - *piVar5;
    iVar3 = FUN_00641430();
    piVar5 = (int *)FUN_00401b20();
    iVar3 = iVar3 % (*piVar5 << 1) + DAT_007ca768;
    piVar5 = (int *)FUN_00401b20();
    DAT_007ca768 = iVar3 - *piVar5;
    if (DAT_007ca764 < 0) {
      DAT_007ca764 = 0;
    }
    FUN_00518380(local_28,0);
  }
  return;
}


/* ==== 004ee160  FUN_004ee160  size=366 ==== */

void FUN_004ee160(int param_1,int param_2,int param_3,char param_4)

{
  int iVar1;
  int iVar2;
  undefined4 local_10;
  
  iVar1 = *(int *)(param_1 + 0x224);
  iVar2 = *(int *)(param_1 + 0x228);
  if (iVar1 < DAT_007ca7e8 + 0x10e) {
    DAT_007ca7e8 = iVar1 + -0x10e;
  }
  if (DAT_007ca7e8 + 0x172 < iVar1) {
    DAT_007ca7e8 = iVar1 + -0x172;
  }
  if (DAT_007ca7e8 < 0) {
    DAT_007ca7e8 = 0;
  }
  else if (param_2 + -0x280 < DAT_007ca7e8) {
    DAT_007ca7e8 = param_2 + -0x280;
  }
  if (param_4 == '\0') {
    DAT_007ca7e4 = -0x55;
  }
  else {
    if (iVar2 < DAT_007ca7e4 + 0xf5) {
      DAT_007ca7e4 = iVar2 + -0xf5;
    }
    if (DAT_007ca7e4 + 0x145 < iVar2) {
      DAT_007ca7e4 = iVar2 + -0x145;
    }
    if (DAT_007ca7e4 < -0x78) {
      DAT_007ca7e4 = -0x78;
    }
    if (param_3 + -0x1ba < DAT_007ca7e4) {
      DAT_007ca7e4 = param_3 + -0x1ba;
    }
  }
  if (*(int *)(param_1 + 0x22c) / 5 < 0x1f) {
    local_10 = *(int *)(param_1 + 0x22c) / 5;
  }
  else {
    local_10 = 0x1e;
  }
  DAT_007ca764 = DAT_007ca7e8;
  DAT_007ca768 = DAT_007ca7e4 - local_10;
  return;
}


/* ==== 004ee2d0  FUN_004ee2d0  size=900 ==== */

void FUN_004ee2d0(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  
  if (*(char *)(param_1 + 0x18) == '\0') {
    if (*(int *)(param_1 + 0x224) < (int)(DAT_007ca764 + 0x10e)) {
      DAT_007ca764 = *(int *)(param_1 + 0x224) - 0x10e;
    }
    if ((int)(DAT_007ca764 + 0x172) < *(int *)(param_1 + 0x224)) {
      DAT_007ca764 = *(int *)(param_1 + 0x224) - 0x172;
    }
    if ((int)DAT_007ca764 < 0) {
      DAT_007ca764 = 0;
    }
    iVar1 = FUN_004274f0();
    if (iVar1 * 0xe0 - 0x280U < DAT_007ca764) {
      iVar1 = FUN_004274f0();
      DAT_007ca764 = iVar1 * 0xe0 - 0x280;
    }
    uVar3 = FUN_004274f0();
    uVar4 = FUN_004274f0();
    if (uVar3 / uVar4 == 0) {
      DAT_007ca768 = -0x78;
    }
    else {
      if (*(int *)(param_1 + 0x228) < DAT_007ca768 + 0x118) {
        DAT_007ca768 = *(int *)(param_1 + 0x228) + -0x118;
      }
      if (DAT_007ca768 + 0x168 < *(int *)(param_1 + 0x228)) {
        DAT_007ca768 = *(int *)(param_1 + 0x228) + -0x168;
      }
      iVar1 = (uVar3 / uVar4) * 0xa0;
      if (DAT_007ca768 < -0x78) {
        DAT_007ca768 = -0x78;
      }
      if (iVar1 + -0x78 < DAT_007ca768) {
        DAT_007ca768 = iVar1 + -0x78;
      }
    }
  }
  else {
    fVar5 = (float)*(int *)(param_1 + 4) / (float)*(int *)(param_1 + 8);
    fVar6 = ((float)*(int *)(param_1 + 8) - (float)*(int *)(param_1 + 4)) /
            (float)*(int *)(param_1 + 8);
    iVar1 = (int)((float)*(int *)(param_1 + 0xc) * fVar5 + (float)*(int *)(param_1 + 0x224) * fVar6)
    ;
    iVar2 = (int)((float)*(int *)(param_1 + 0x10) * fVar5 + (float)*(int *)(param_1 + 0x228) * fVar6
                 );
    if (iVar1 < (int)(DAT_007ca764 + 0x10e)) {
      DAT_007ca764 = iVar1 - 0x10e;
    }
    if ((int)(DAT_007ca764 + 0x172) < iVar1) {
      DAT_007ca764 = iVar1 - 0x172;
    }
    if ((int)DAT_007ca764 < 0) {
      DAT_007ca764 = 0;
    }
    iVar1 = FUN_004274f0();
    if (iVar1 * 0xe0 - 0x280U < DAT_007ca764) {
      iVar1 = FUN_004274f0();
      DAT_007ca764 = iVar1 * 0xe0 - 0x280;
    }
    uVar3 = FUN_004274f0();
    uVar4 = FUN_004274f0();
    if (uVar3 / uVar4 == 0) {
      DAT_007ca768 = -0x78;
    }
    else {
      if (iVar2 < DAT_007ca768 + 0x118) {
        DAT_007ca768 = iVar2 + -0x118;
      }
      if (DAT_007ca768 + 0x168 < iVar2) {
        DAT_007ca768 = iVar2 + -0x168;
      }
      iVar1 = (uVar3 / uVar4) * 0xa0;
      if (DAT_007ca768 < -0x78) {
        DAT_007ca768 = -0x78;
      }
      if (iVar1 + -0x78 < DAT_007ca768) {
        DAT_007ca768 = iVar1 + -0x78;
      }
    }
  }
  return;
}


/* ==== 004ee660  FUN_004ee660  size=3240 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_004ee660(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  int *piVar5;
  char *pcVar6;
  undefined1 local_bc [12];
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  int *local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  int local_84;
  undefined4 local_80;
  undefined1 *local_7c;
  int local_78;
  int local_74;
  int local_70;
  undefined4 local_6c;
  int *local_68;
  int local_64;
  uint local_60;
  uint local_5c;
  char local_55;
  uint local_54;
  uint local_50;
  uint local_4c;
  int *local_48;
  function<void___cdecl(void)> local_44 [24];
  function<void___cdecl(void)> local_2c [24];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00716530;
  local_10 = ExceptionList;
  local_14 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_5c = 0;
  while (uVar2 = FUN_00518f60(), local_5c < uVar2) {
    FUN_00518f30();
    FUN_0040d680();
    FUN_00405520();
    local_8 = 0;
    FUN_00518f30();
    cVar1 = FUN_00427c60();
    if (cVar1 == '\0') {
      FUN_00518f30();
      cVar1 = FUN_00427c60();
      if (cVar1 == '\0') {
        local_6c = 0;
      }
      else {
        local_6c = 0xffff;
      }
    }
    else {
      local_6c = 0;
    }
    iVar3 = FUN_00518f30(local_5c);
    FUN_00405520(iVar3 + 0x18);
    local_80 = FUN_0063d0d0();
    FUN_00518f30();
    FUN_004e50c0();
    FUN_004e5240();
    local_8 = 0xffffffff;
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_44);
    local_5c = local_5c + 1;
  }
  local_54 = 0;
  do {
    uVar2 = FUN_00519060();
    if (uVar2 <= local_54) {
      FUN_004054a0("[tile]");
      local_8c = FUN_0063d0d0();
      FUN_004e50c0();
      FUN_004e5240();
      local_50 = 0;
      while (uVar2 = FUN_00426f70(), local_50 < uVar2) {
        FUN_00426f40();
        FUN_00426f40();
        FUN_00426f40();
        FUN_004e8440();
        local_60 = 0;
        while( true ) {
          FUN_00426f40();
          uVar2 = FUN_00519d80();
          if (uVar2 <= local_60) break;
          FUN_00426f40();
          FUN_0040d4b0();
          FUN_00426f40();
          FUN_0040d4b0();
          FUN_00426f40();
          FUN_0040d4b0();
          FUN_004e8440();
          local_60 = local_60 + 1;
        }
        FUN_00426f40();
        FUN_004054a0("[normal]");
        local_ac = FUN_0063d0d0();
        FUN_00426f40();
        FUN_004e50c0();
        FUN_004e5240();
        local_50 = local_50 + 1;
      }
      FUN_0040d650();
      local_8 = 1;
      if ((*(int *)(param_1 + 0xdd8) == 1) || (*(int *)(param_1 + 0xdd8) == 2)) {
        FUN_0044e460();
      }
      else if (*(int *)(param_1 + 0xdd8) == 4) {
        game_get_state_ptr_d1520();
        FUN_005bcf10();
        local_b0 = FUN_004bcf80();
        local_8._0_1_ = 2;
        local_90 = local_b0;
        game_get_state_ptr_d1520();
        FUN_00518ab0();
        FUN_00427560();
        local_8 = CONCAT31(local_8._1_3_,1);
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_2c);
      }
      local_7c = local_bc;
      local_68 = (int *)game_loop_helper_018d0();
      local_94 = (int *)game_loop_helper_018b0();
      for (; local_68 != local_94; local_68 = local_68 + 1) {
        local_48 = local_68;
        local_4c = 0;
        while( true ) {
          game_get_state_ptr_d1520();
          uVar2 = FUN_00519d80();
          if (uVar2 <= local_4c) break;
          if ((*(int *)(param_1 + 0xdd8) == 1) || (*(int *)(param_1 + 0xdd8) == 2)) {
            game_get_state_ptr_d1520();
            puVar4 = (uint *)game_get_flag_object_01a70();
            if ((*puVar4 & 1) == 0) {
              game_get_state_ptr_d1520();
              iVar3 = FUN_0040d4b0();
              if (*(int *)(iVar3 + 0x84) == 1) {
                game_get_state_ptr_d1520();
                FUN_0040d4b0();
                game_get_state_ptr_d1520();
                FUN_0040d4b0();
                game_get_state_ptr_d1520();
                FUN_0040d4b0();
                FUN_004e8440();
              }
              game_get_state_ptr_d1520();
              game_get_state_ptr_d1520();
              game_get_state_ptr_d1520();
              iVar3 = *local_48;
              piVar5 = (int *)game_get_state_ptr_d1520();
              FUN_00405520(*piVar5 + 0x248 + iVar3 * 0x1f0);
              local_98 = FUN_0063d0d0();
              game_get_state_ptr_d1520();
              FUN_0040d4b0();
              FUN_004e50c0();
              FUN_004e5240();
            }
          }
          else if (*(int *)(param_1 + 0xdd8) == 4) {
            game_get_state_ptr_d1520();
            game_get_state_ptr_d1520();
            pcVar6 = (char *)FUN_00489ea0();
            if (*pcVar6 == '\0') {
              game_get_state_ptr_d1520();
              piVar5 = (int *)game_get_flag_object_01a70();
              if (*piVar5 != 2) {
                game_get_state_ptr_d1520();
                iVar3 = FUN_0040d4b0();
                if (*(int *)(iVar3 + 0x84) == 1) {
                  game_get_state_ptr_d1520();
                  FUN_0040d4b0();
                  game_get_state_ptr_d1520();
                  FUN_0040d4b0();
                  game_get_state_ptr_d1520();
                  FUN_0040d4b0();
                  FUN_004e8440();
                }
                game_get_state_ptr_d1520();
                game_get_state_ptr_d1520();
                game_get_state_ptr_d1520();
                iVar3 = *local_48;
                piVar5 = (int *)game_get_state_ptr_d1520();
                FUN_00405520(*piVar5 + 0x248 + iVar3 * 0x1f0);
                local_a0 = FUN_0063d0d0();
                game_get_state_ptr_d1520();
                FUN_0040d4b0();
                FUN_004e50c0();
                FUN_004e5240();
              }
            }
            else {
              game_get_state_ptr_d1520();
              puVar4 = (uint *)game_get_flag_object_01a70();
              if ((*puVar4 & 1) == 0) {
                game_get_state_ptr_d1520();
                iVar3 = FUN_0040d4b0();
                if (*(int *)(iVar3 + 0x84) == 1) {
                  game_get_state_ptr_d1520();
                  FUN_0040d4b0();
                  game_get_state_ptr_d1520();
                  FUN_0040d4b0();
                  game_get_state_ptr_d1520();
                  FUN_0040d4b0();
                  FUN_004e8440();
                }
                game_get_state_ptr_d1520();
                game_get_state_ptr_d1520();
                game_get_state_ptr_d1520();
                iVar3 = *local_48;
                piVar5 = (int *)game_get_state_ptr_d1520();
                FUN_00405520(*piVar5 + 0x248 + iVar3 * 0x1f0);
                local_9c = FUN_0063d0d0();
                game_get_state_ptr_d1520();
                FUN_0040d4b0();
                FUN_004e50c0();
                FUN_004e5240();
              }
            }
          }
          local_4c = local_4c + 1;
        }
      }
      FUN_004054a0(&DAT_00751a90);
      local_a4 = FUN_0063d0d0();
      FUN_004e50c0();
      FUN_004e5240();
      FUN_004054a0("[cutsence]");
      local_a8 = FUN_0063d0d0();
      FUN_004e50c0();
      FUN_004e5240();
      local_8 = 0xffffffff;
      FUN_00401ac0();
      ExceptionList = local_10;
      return;
    }
    FUN_00519030();
    FUN_00519030();
    FUN_00519030();
    FUN_004e8440();
    local_55 = '\0';
    local_74 = FUN_00519030();
    local_74 = local_74 + 0x70;
    local_64 = game_loop_helper_018d0();
    local_84 = game_loop_helper_018b0();
    for (; local_64 != local_84; local_64 = local_64 + 0x60) {
      local_70 = local_64;
      cVar1 = FUN_00427c60();
      if ((cVar1 != '\0') ||
         ((cVar1 = FUN_00427c60(), cVar1 != '\0' && (*(char *)(local_70 + 0x20) == '\0')))) {
        local_55 = '\x01';
        break;
      }
    }
    if (local_55 == '\0') {
      iVar3 = FUN_00519030();
      local_78 = *(int *)(iVar3 + 0x34);
    }
    else {
      iVar3 = FUN_00519030();
      local_78 = *(int *)(iVar3 + 0x34) + -1000;
    }
    iVar3 = FUN_00519030(local_54);
    FUN_00405520(iVar3 + 0x18);
    local_88 = FUN_0063d0d0();
    FUN_00519030();
    FUN_004e50c0();
    FUN_004e5240();
    local_54 = local_54 + 1;
  } while( true );
}


/* ==== 004ef310  FUN_004ef310  size=20 ==== */

void FUN_004ef310(void)

{
  FUN_00518350();
  return;
}


/* ==== 004ef330  net_parse_equip_slot_block_weaponish  size=1289 ==== */

void net_parse_equip_slot_block_weaponish(int param_1,int *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  int local_10;
  uint local_c;
  int local_8;
  
  iVar2 = net_packet_read_u32_be(param_1 + 0xb54,param_3 + *param_2);
  *param_2 = iVar2 + *param_2;
  *(undefined4 *)(param_1 + 0xb54) = 10;
  FUN_0040d5a0(*(undefined4 *)(param_1 + 0xb54));
  local_c = 0;
  while (uVar3 = FUN_004274a0(), local_c < uVar3) {
    local_8 = FUN_00405270(local_c);
    iVar2 = net_packet_read_u32_be(local_8,param_3 + *param_2);
    *param_2 = iVar2 + *param_2;
    iVar2 = net_packet_read_u32_be(local_8 + 4,param_3 + *param_2);
    *param_2 = iVar2 + *param_2;
    iVar2 = net_packet_read_u32_be(local_8 + 8,param_3 + *param_2);
    *param_2 = iVar2 + *param_2;
    cVar1 = net_packet_read_u8(local_8 + 0x1c,param_3 + *param_2);
    *param_2 = (int)cVar1 + *param_2;
    cVar1 = net_packet_read_u8(local_8 + 0x24,param_3 + *param_2);
    *param_2 = (int)cVar1 + *param_2;
    cVar1 = net_packet_read_u8(local_8 + 0xc,param_3 + *param_2);
    *param_2 = (int)cVar1 + *param_2;
    cVar1 = net_packet_read_u8(local_8 + 0x10,param_3 + *param_2);
    *param_2 = (int)cVar1 + *param_2;
    cVar1 = net_packet_read_u8(local_8 + 0x14,param_3 + *param_2);
    *param_2 = (int)cVar1 + *param_2;
    cVar1 = net_packet_read_u8(local_8 + 0x18,param_3 + *param_2);
    *param_2 = (int)cVar1 + *param_2;
    cVar1 = net_packet_read_u8(local_8 + 0x20,param_3 + *param_2);
    *param_2 = (int)cVar1 + *param_2;
    cVar1 = net_packet_read_u8(local_8 + 0x28,param_3 + *param_2);
    *param_2 = (int)cVar1 + *param_2;
    iVar2 = net_packet_write_bytes(local_8 + 0x2c,param_3 + *param_2,0x20);
    *param_2 = iVar2 + *param_2;
    iVar2 = net_packet_write_bytes(local_8 + 0x4c,param_3 + *param_2,0x14);
    *param_2 = iVar2 + *param_2;
    if (*(int *)(local_8 + 4) < 1) {
      *(undefined4 *)(local_8 + 4) = 0;
    }
    else {
      puVar5 = local_14;
      game_loop_helper_e9240(puVar5);
      uVar4 = FUN_00489e00(puVar5);
      iVar2 = local_8 + 4;
      puVar5 = local_18;
      game_loop_helper_e9240(puVar5,iVar2,uVar4);
      FUN_00489da0(puVar5,iVar2);
      cVar1 = FUN_0040d970(uVar4);
      if (cVar1 == '\0') {
        local_10 = game_loop_helper_cc840(*(undefined4 *)(local_8 + 4));
        if (((((((local_c != 0) ||
                (cVar1 = FUN_00427c60(local_10 + 0x124,"[weapon]"), cVar1 == '\0')) &&
               ((local_c != 1 ||
                (cVar1 = FUN_00427c60(local_10 + 0x124,"[title name]"), cVar1 == '\0')))) &&
              ((local_c != 2 || (cVar1 = FUN_00427c60(local_10 + 0x124,"[coat]"), cVar1 == '\0'))))
             && (((local_c != 3 || (cVar1 = FUN_00427c60(local_10 + 0x124,"[pants]"), cVar1 == '\0')
                  ) && ((((local_c != 4 ||
                          (cVar1 = FUN_00427c60(local_10 + 0x124,"[shoulder]"), cVar1 == '\0')) &&
                         ((local_c != 5 ||
                          (cVar1 = FUN_00427c60(local_10 + 0x124,"[shoes]"), cVar1 == '\0')))) &&
                        ((local_c != 6 ||
                         (cVar1 = FUN_00427c60(local_10 + 0x124,"[waist]"), cVar1 == '\0')))))))) &&
            ((local_c != 7 || (cVar1 = FUN_00427c60(local_10 + 0x124,"[amulet]"), cVar1 == '\0'))))
           && (((local_c != 8 || (cVar1 = FUN_00427c60(local_10 + 0x124,"[wrist]"), cVar1 == '\0'))
               && ((local_c != 9 || (cVar1 = FUN_00427c60(local_10 + 0x124,"[ring]"), cVar1 == '\0')
                   ))))) {
          *(undefined4 *)(local_8 + 4) = 0;
        }
      }
      else {
        *(undefined4 *)(local_8 + 4) = 0;
      }
    }
    if (*(int *)(local_8 + 8) != 1) {
      *(undefined4 *)(local_8 + 8) = 1;
    }
    if ((*(int *)(local_8 + 0xc) < 0) || (0x1f < *(int *)(local_8 + 0xc))) {
      *(undefined4 *)(local_8 + 0xc) = 0;
    }
    if ((*(int *)(local_8 + 0x10) < 0) || (100 < *(int *)(local_8 + 0x10))) {
      *(undefined4 *)(local_8 + 0x10) = 0;
    }
    if (*(int *)(local_8 + 0x20) < 0) {
      *(undefined4 *)(local_8 + 0x20) = 0;
    }
    if ((*(int *)(local_8 + 0x28) < 0) || (7 < *(int *)(local_8 + 0x28))) {
      *(undefined4 *)(local_8 + 0x28) = 0;
    }
    FUN_0065b490(param_1,3,local_c,local_8);
    local_c = local_c + 1;
  }
  return;
}


/* ==== 004ef840  net_parse_equip_slot_block_b74  size=1325 ==== */

void net_parse_equip_slot_block_b74(int param_1,int *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  int local_10;
  uint local_c;
  int local_8;
  
  iVar2 = net_packet_read_u32_be(param_1 + 0xb74,param_3 + *param_2);
  *param_2 = iVar2 + *param_2;
  *(undefined4 *)(param_1 + 0xb74) = 9;
  FUN_0040d5a0(*(undefined4 *)(param_1 + 0xb74));
  local_c = 0;
  while (uVar3 = FUN_004274a0(), local_c < uVar3) {
    local_8 = FUN_00405270(local_c);
    iVar2 = net_packet_read_u32_be(local_8,param_3 + *param_2);
    *param_2 = iVar2 + *param_2;
    iVar2 = net_packet_read_u32_be(local_8 + 4,param_3 + *param_2);
    *param_2 = iVar2 + *param_2;
    iVar2 = net_packet_read_u32_be(local_8 + 8,param_3 + *param_2);
    *param_2 = iVar2 + *param_2;
    cVar1 = net_packet_read_u8(local_8 + 0x1c,param_3 + *param_2);
    *param_2 = (int)cVar1 + *param_2;
    cVar1 = net_packet_read_u8(local_8 + 0x24,param_3 + *param_2);
    *param_2 = (int)cVar1 + *param_2;
    cVar1 = net_packet_read_u8(local_8 + 0xc,param_3 + *param_2);
    *param_2 = (int)cVar1 + *param_2;
    cVar1 = net_packet_read_u8(local_8 + 0x10,param_3 + *param_2);
    *param_2 = (int)cVar1 + *param_2;
    cVar1 = net_packet_read_u8(local_8 + 0x14,param_3 + *param_2);
    *param_2 = (int)cVar1 + *param_2;
    cVar1 = net_packet_read_u8(local_8 + 0x18,param_3 + *param_2);
    *param_2 = (int)cVar1 + *param_2;
    cVar1 = net_packet_read_u8(local_8 + 0x20,param_3 + *param_2);
    *param_2 = (int)cVar1 + *param_2;
    cVar1 = net_packet_read_u8(local_8 + 0x28,param_3 + *param_2);
    *param_2 = (int)cVar1 + *param_2;
    iVar2 = net_packet_write_bytes(local_8 + 0x2c,param_3 + *param_2,0x20);
    *param_2 = iVar2 + *param_2;
    iVar2 = net_packet_write_bytes(local_8 + 0x4c,param_3 + *param_2,0x14);
    *param_2 = iVar2 + *param_2;
    if (*(int *)(local_8 + 4) < 1) {
      *(undefined4 *)(local_8 + 4) = 0;
    }
    else {
      puVar5 = local_14;
      game_loop_helper_e9240(puVar5);
      uVar4 = FUN_00489e00(puVar5);
      iVar2 = local_8 + 4;
      puVar5 = local_18;
      game_loop_helper_e9240(puVar5,iVar2,uVar4);
      FUN_00489da0(puVar5,iVar2);
      cVar1 = FUN_0040d970(uVar4);
      if (cVar1 == '\0') {
        local_10 = game_loop_helper_cc840(*(undefined4 *)(local_8 + 4));
        iVar2 = FUN_004277a0("avatar",0);
        if (iVar2 == -1) {
          *(undefined4 *)(local_8 + 4) = 0;
        }
        if ((*(int *)(local_8 + 0x18) < 0) ||
           (uVar3 = FUN_004271d0(), uVar3 <= *(uint *)(local_8 + 0x18))) {
          *(undefined4 *)(local_8 + 4) = 0;
        }
        if ((((((local_c != 0) ||
               (cVar1 = FUN_00427c60(local_10 + 0x124,"[hair avatar]"), cVar1 == '\0')) &&
              ((local_c != 1 ||
               (cVar1 = FUN_00427c60(local_10 + 0x124,"[hat avatar]"), cVar1 == '\0')))) &&
             ((local_c != 2 ||
              (cVar1 = FUN_00427c60(local_10 + 0x124,"[face avatar]"), cVar1 == '\0')))) &&
            ((local_c != 3 ||
             (cVar1 = FUN_00427c60(local_10 + 0x124,"[breast avatar]"), cVar1 == '\0')))) &&
           (((((local_c != 4 ||
               (cVar1 = FUN_00427c60(local_10 + 0x124,"[coat avatar]"), cVar1 == '\0')) &&
              ((local_c != 5 ||
               (cVar1 = FUN_00427c60(local_10 + 0x124,"[skin avatar]"), cVar1 == '\0')))) &&
             ((local_c != 6 ||
              (cVar1 = FUN_00427c60(local_10 + 0x124,"[waist avatar]"), cVar1 == '\0')))) &&
            (((local_c != 7 ||
              (cVar1 = FUN_00427c60(local_10 + 0x124,"[pants avatar]"), cVar1 == '\0')) &&
             ((local_c != 8 ||
              (cVar1 = FUN_00427c60(local_10 + 0x124,"[shoes avatar]"), cVar1 == '\0')))))))) {
          *(undefined4 *)(local_8 + 4) = 0;
        }
      }
      else {
        *(undefined4 *)(local_8 + 4) = 0;
      }
    }
    if (*(int *)(local_8 + 8) != 1) {
      *(undefined4 *)(local_8 + 8) = 1;
    }
    if ((*(int *)(local_8 + 0xc) < 0) || (0x1f < *(int *)(local_8 + 0xc))) {
      *(undefined4 *)(local_8 + 0xc) = 0;
    }
    if ((*(int *)(local_8 + 0x10) < 0) || (100 < *(int *)(local_8 + 0x10))) {
      *(undefined4 *)(local_8 + 0x10) = 0;
    }
    if (*(int *)(local_8 + 0x20) < 0) {
      *(undefined4 *)(local_8 + 0x20) = 0;
    }
    if ((*(int *)(local_8 + 0x28) < 0) || (7 < *(int *)(local_8 + 0x28))) {
      *(undefined4 *)(local_8 + 0x28) = 0;
    }
    FUN_0065b490(param_1,8,local_c,local_8);
    local_c = local_c + 1;
  }
  return;
}


/* ==== 004efd70  net_parse_equip_slot_block_b94  size=1016 ==== */

void net_parse_equip_slot_block_b94(int param_1,int *param_2,int param_3)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined1 local_24 [4];
  undefined1 local_20 [4];
  undefined4 local_1c;
  int local_18;
  uint *local_14;
  int local_10;
  int local_c;
  int local_8;
  
  iVar3 = net_packet_read_u32_be(param_1 + 0xb94,param_3 + *param_2);
  *param_2 = iVar3 + *param_2;
  *(undefined4 *)(param_1 + 0xb94) = 1;
  FUN_0040d5a0(*(undefined4 *)(param_1 + 0xb94));
  local_10 = param_1 + 0xb98;
  local_c = game_loop_helper_018d0();
  local_18 = game_loop_helper_018b0();
  do {
    if (local_c == local_18) {
      return;
    }
    local_8 = local_c;
    iVar3 = net_packet_read_u32_be(local_c,param_3 + *param_2);
    *param_2 = iVar3 + *param_2;
    iVar3 = net_packet_read_u32_be(local_8 + 4,param_3 + *param_2);
    *param_2 = iVar3 + *param_2;
    iVar3 = net_packet_read_u32_be(local_8 + 8,param_3 + *param_2);
    *param_2 = iVar3 + *param_2;
    cVar2 = net_packet_read_u8(local_8 + 0x1c,param_3 + *param_2);
    *param_2 = (int)cVar2 + *param_2;
    cVar2 = net_packet_read_u8(local_8 + 0x24,param_3 + *param_2);
    *param_2 = (int)cVar2 + *param_2;
    cVar2 = net_packet_read_u8(local_8 + 0xc,param_3 + *param_2);
    *param_2 = (int)cVar2 + *param_2;
    cVar2 = net_packet_read_u8(local_8 + 0x10,param_3 + *param_2);
    *param_2 = (int)cVar2 + *param_2;
    cVar2 = net_packet_read_u8(local_8 + 0x14,param_3 + *param_2);
    *param_2 = (int)cVar2 + *param_2;
    cVar2 = net_packet_read_u8(local_8 + 0x18,param_3 + *param_2);
    *param_2 = (int)cVar2 + *param_2;
    cVar2 = net_packet_read_u8(local_8 + 0x20,param_3 + *param_2);
    *param_2 = (int)cVar2 + *param_2;
    cVar2 = net_packet_read_u8(local_8 + 0x28,param_3 + *param_2);
    *param_2 = (int)cVar2 + *param_2;
    iVar3 = net_packet_write_bytes(local_8 + 0x2c,param_3 + *param_2,0x20);
    *param_2 = iVar3 + *param_2;
    iVar3 = net_packet_write_bytes(local_8 + 0x4c,param_3 + *param_2,0x14);
    *param_2 = iVar3 + *param_2;
    if (*(int *)(local_8 + 4) < 1) {
      *(undefined4 *)(local_8 + 4) = 0;
    }
    else {
      puVar6 = local_20;
      game_loop_helper_e9240(puVar6);
      uVar4 = FUN_00489e00(puVar6);
      iVar3 = local_8 + 4;
      puVar6 = local_24;
      game_loop_helper_e9240(puVar6,iVar3,uVar4);
      FUN_00489da0(puVar6,iVar3);
      cVar2 = FUN_0040d970(uVar4);
      if (cVar2 == '\0') {
        local_1c = game_loop_helper_cc840(*(undefined4 *)(local_8 + 4));
        iVar3 = FUN_004277a0("[creature]",0);
        if (iVar3 == -1) {
          *(undefined4 *)(local_8 + 4) = 0;
        }
      }
      else {
        *(undefined4 *)(local_8 + 4) = 0;
      }
    }
    if (*(int *)(local_8 + 8) < 0) {
LAB_004f00cb:
      *(undefined4 *)(local_8 + 8) = 0;
    }
    else {
      uVar1 = *(uint *)(local_8 + 8);
      iVar5 = (int)uVar1 >> 0x1f;
      iVar3 = FUN_004a61d0();
      local_14 = (uint *)FUN_00427540(iVar3 + -1);
      if (((int)local_14[1] <= iVar5) && (((int)local_14[1] < iVar5 || (*local_14 < uVar1))))
      goto LAB_004f00cb;
    }
    if ((*(int *)(local_8 + 0xc) < 1) || (0x32 < *(int *)(local_8 + 0xc))) {
      *(undefined4 *)(local_8 + 0xc) = 1;
    }
    if ((*(int *)(local_8 + 0x10) < 0) || (100 < *(int *)(local_8 + 0x10))) {
      *(undefined4 *)(local_8 + 0x10) = 0;
    }
    if (*(int *)(local_8 + 0x20) < 0) {
      *(undefined4 *)(local_8 + 0x20) = 0;
    }
    if ((*(int *)(local_8 + 0x28) < 0) || (7 < *(int *)(local_8 + 0x28))) {
      *(undefined4 *)(local_8 + 0x28) = 0;
    }
    uVar4 = FUN_00405270(0);
    FUN_0065b490(param_1,10,0,uVar4);
    local_c = local_c + 0x94;
  } while( true );
}


/* ==== 004f0170  net_parse_equip_slot_block_bb4  size=923 ==== */

void net_parse_equip_slot_block_bb4(int param_1,int *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 local_20 [4];
  undefined1 local_1c [4];
  int local_18;
  int local_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  
  iVar2 = net_packet_read_u32_be(param_1 + 0xbb4,param_3 + *param_2);
  *param_2 = iVar2 + *param_2;
  *(undefined4 *)(param_1 + 0xbb4) = 3;
  FUN_0040d5a0(*(undefined4 *)(param_1 + 0xbb4));
  local_14 = param_1 + 3000;
  local_c = game_loop_helper_018d0();
  local_18 = game_loop_helper_018b0();
  for (; local_c != local_18; local_c = local_c + 0x94) {
    local_8 = local_c;
    iVar2 = net_packet_read_u32_be(local_c,param_3 + *param_2);
    *param_2 = iVar2 + *param_2;
    iVar2 = net_packet_read_u32_be(local_8 + 4,param_3 + *param_2);
    *param_2 = iVar2 + *param_2;
    iVar2 = net_packet_read_u32_be(local_8 + 8,param_3 + *param_2);
    *param_2 = iVar2 + *param_2;
    cVar1 = net_packet_read_u8(local_8 + 0x1c,param_3 + *param_2);
    *param_2 = (int)cVar1 + *param_2;
    cVar1 = net_packet_read_u8(local_8 + 0x24,param_3 + *param_2);
    *param_2 = (int)cVar1 + *param_2;
    cVar1 = net_packet_read_u8(local_8 + 0xc,param_3 + *param_2);
    *param_2 = (int)cVar1 + *param_2;
    cVar1 = net_packet_read_u8(local_8 + 0x10,param_3 + *param_2);
    *param_2 = (int)cVar1 + *param_2;
    cVar1 = net_packet_read_u8(local_8 + 0x14,param_3 + *param_2);
    *param_2 = (int)cVar1 + *param_2;
    cVar1 = net_packet_read_u8(local_8 + 0x18,param_3 + *param_2);
    *param_2 = (int)cVar1 + *param_2;
    cVar1 = net_packet_read_u8(local_8 + 0x20,param_3 + *param_2);
    *param_2 = (int)cVar1 + *param_2;
    cVar1 = net_packet_read_u8(local_8 + 0x28,param_3 + *param_2);
    *param_2 = (int)cVar1 + *param_2;
    iVar2 = net_packet_write_bytes(local_8 + 0x2c,param_3 + *param_2,0x20);
    *param_2 = iVar2 + *param_2;
    iVar2 = net_packet_write_bytes(local_8 + 0x4c,param_3 + *param_2,0x14);
    *param_2 = iVar2 + *param_2;
    if (*(int *)(local_8 + 4) < 1) {
      *(undefined4 *)(local_8 + 4) = 0;
    }
    else {
      puVar4 = local_1c;
      game_loop_helper_e9240(puVar4);
      uVar3 = FUN_00489e00(puVar4);
      iVar2 = local_8 + 4;
      puVar4 = local_20;
      game_loop_helper_e9240(puVar4,iVar2,uVar3);
      FUN_00489da0(puVar4,iVar2);
      cVar1 = FUN_0040d970(uVar3);
      if (cVar1 == '\0') {
        local_10 = game_loop_helper_cc840(*(undefined4 *)(local_8 + 4));
        iVar2 = FUN_004277a0("[artifact red]",0);
        if (((iVar2 == -1) && (iVar2 = FUN_004277a0("[artifact green]",0), iVar2 == -1)) &&
           (iVar2 = FUN_004277a0("[artifact blue]",0), iVar2 == -1)) {
          *(undefined4 *)(local_8 + 4) = 0;
        }
      }
      else {
        *(undefined4 *)(local_8 + 4) = 0;
      }
    }
    *(undefined4 *)(local_8 + 8) = 1;
    *(undefined4 *)(local_8 + 0xc) = 0;
    if ((*(int *)(local_8 + 0x10) < 0) || (100 < *(int *)(local_8 + 0x10))) {
      *(undefined4 *)(local_8 + 0x10) = 0;
    }
    if (*(int *)(local_8 + 0x20) < 0) {
      *(undefined4 *)(local_8 + 0x20) = 0;
    }
    if ((*(int *)(local_8 + 0x28) < 0) || (7 < *(int *)(local_8 + 0x28))) {
      *(undefined4 *)(local_8 + 0x28) = 0;
    }
  }
  return;
}


/* ==== 004f0510  FUN_004f0510  size=252 ==== */

void FUN_004f0510(int param_1)

{
  if ((*(int *)(param_1 + 0xadc) < 1) || (5 < *(int *)(param_1 + 0xadc))) {
    *(undefined4 *)(param_1 + 0xadc) = 1;
  }
  if (*(int *)(param_1 + 0xae0) < 0) {
    *(undefined4 *)(param_1 + 0xae0) = 0;
  }
  if ((*(int *)(param_1 + 0xadc) == 1) && (3 < *(int *)(param_1 + 0xae0))) {
    *(undefined4 *)(param_1 + 0xae0) = 3;
  }
  if ((*(int *)(param_1 + 0xadc) == 2) && (9 < *(int *)(param_1 + 0xae0))) {
    *(undefined4 *)(param_1 + 0xae0) = 9;
  }
  if ((*(int *)(param_1 + 0xadc) == 3) && (6 < *(int *)(param_1 + 0xae0))) {
    *(undefined4 *)(param_1 + 0xae0) = 6;
  }
  if ((*(int *)(param_1 + 0xadc) == 4) && (3 < *(int *)(param_1 + 0xae0))) {
    *(undefined4 *)(param_1 + 0xae0) = 3;
  }
  if ((*(int *)(param_1 + 0xadc) == 5) && (3 < *(int *)(param_1 + 0xae0))) {
    *(undefined4 *)(param_1 + 0xae0) = 3;
  }
  return;
}


/* ==== 004f0800  net_parse_player_state_packet  size=2428 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int net_parse_player_state_packet(int param_1,int param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 local_70 [4];
  undefined1 local_6c [4];
  undefined1 local_68 [4];
  undefined1 local_64 [12];
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  char *local_44;
  int local_40;
  undefined1 local_39;
  undefined1 local_38;
  undefined1 local_37;
  undefined1 local_36;
  byte local_35;
  int local_34;
  int local_30;
  function<void___cdecl(void)> local_2c [24];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071656d;
  local_10 = ExceptionList;
  local_14 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_30 = 0;
  iVar2 = net_packet_read_u32_be(param_1 + 0x1e8,param_2,local_14);
  local_30 = iVar2 + local_30;
  iVar2 = net_packet_write_bytes(param_1 + 0xa98,param_2 + local_30,0x20);
  local_30 = iVar2 + local_30;
  iVar2 = net_packet_read_u32_be(param_1 + 0xab8,param_2 + local_30);
  local_30 = iVar2 + local_30;
  iVar2 = net_packet_read_u32_be(param_1 + 0xac0,param_2 + local_30);
  local_30 = iVar2 + local_30;
  iVar2 = net_packet_read_u32_be(param_1 + 0x1fc,param_2 + local_30);
  local_30 = iVar2 + local_30;
  iVar2 = net_packet_read_u32_be(param_1 + 0xabc,param_2 + local_30);
  local_30 = iVar2 + local_30;
  iVar2 = net_packet_read_u32_be(param_1 + 0xad4,param_2 + local_30);
  local_30 = iVar2 + local_30;
  iVar2 = net_packet_read_u32_be(param_1 + 0xad8,param_2 + local_30);
  local_30 = iVar2 + local_30;
  iVar2 = net_packet_read_u32_be(param_1 + 0x6e8,param_2 + local_30);
  local_30 = iVar2 + local_30;
  iVar2 = net_packet_read_u32_be(param_1 + 0x6ec,param_2 + local_30);
  local_30 = iVar2 + local_30;
  iVar2 = net_packet_read_u32_be(param_1 + 0xadc,param_2 + local_30);
  local_30 = iVar2 + local_30;
  iVar2 = net_packet_read_u32_be(param_1 + 0xae0,param_2 + local_30);
  local_30 = iVar2 + local_30;
  FUN_004f0510(param_1);
  iVar2 = net_packet_read_u32_be(param_1 + 0x224,param_2 + local_30);
  local_30 = iVar2 + local_30;
  iVar2 = net_packet_read_u32_be(param_1 + 0x228,param_2 + local_30);
  local_30 = iVar2 + local_30;
  iVar2 = net_packet_read_u32_be(param_1 + 500,param_2 + local_30);
  local_30 = iVar2 + local_30;
  iVar2 = net_packet_read_u32_be(param_1 + 0xdd8,param_2 + local_30);
  local_30 = iVar2 + local_30;
  cVar1 = net_packet_read_u8(&local_35,param_2 + local_30);
  local_30 = cVar1 + local_30;
  *(byte *)(param_1 + 0xdb8) = local_35 & 1;
  local_36 = (local_35 & 2) != 0;
  *(undefined1 *)(param_1 + 0xdb9) = local_36;
  local_37 = (local_35 & 4) != 0;
  *(undefined1 *)(param_1 + 0xe06) = local_37;
  local_38 = (local_35 & 8) != 0;
  *(undefined1 *)(param_1 + 0xe07) = local_38;
  local_39 = (local_35 & 0x10) != 0;
  *(undefined1 *)(param_1 + 0xe08) = local_39;
  iVar2 = net_packet_write_bytes(param_1 + 0xe09,param_2 + local_30,0x20);
  local_30 = iVar2 + local_30;
  net_parse_equip_slot_block_weaponish(param_1,&local_30,param_2);
  net_parse_equip_slot_block_b74(param_1,&local_30,param_2);
  net_parse_equip_slot_block_b94(param_1,&local_30,param_2);
  net_parse_equip_slot_block_bb4(param_1,&local_30,param_2);
  iVar2 = net_packet_read_u32_be(param_1 + 0xc6c,param_2 + local_30);
  local_30 = iVar2 + local_30;
  FUN_0040d5a0(*(undefined4 *)(param_1 + 0xc6c));
  local_4c = param_1 + 0xc70;
  local_48 = game_loop_helper_018d0();
  local_50 = game_loop_helper_018b0();
  for (; local_48 != local_50; local_48 = local_48 + 0x94) {
    local_34 = local_48;
    iVar2 = net_packet_read_u32_be(local_48,param_2 + local_30);
    local_30 = iVar2 + local_30;
    iVar2 = net_packet_read_u32_be(local_34 + 4,param_2 + local_30);
    local_30 = iVar2 + local_30;
    iVar2 = net_packet_read_u32_be(local_34 + 8,param_2 + local_30);
    local_30 = iVar2 + local_30;
    cVar1 = net_packet_read_u8(local_34 + 0x1c,param_2 + local_30);
    local_30 = cVar1 + local_30;
    cVar1 = net_packet_read_u8(local_34 + 0x24,param_2 + local_30);
    local_30 = cVar1 + local_30;
    cVar1 = net_packet_read_u8(local_34 + 0xc,param_2 + local_30);
    local_30 = cVar1 + local_30;
    cVar1 = net_packet_read_u8(local_34 + 0x10,param_2 + local_30);
    local_30 = cVar1 + local_30;
    cVar1 = net_packet_read_u8(local_34 + 0x14,param_2 + local_30);
    local_30 = cVar1 + local_30;
    cVar1 = net_packet_read_u8(local_34 + 0x18,param_2 + local_30);
    local_30 = cVar1 + local_30;
    cVar1 = net_packet_read_u8(local_34 + 0x20,param_2 + local_30);
    local_30 = cVar1 + local_30;
    cVar1 = net_packet_read_u8(local_34 + 0x28,param_2 + local_30);
    local_30 = cVar1 + local_30;
    iVar2 = net_packet_write_bytes(local_34 + 0x2c,param_2 + local_30,0x20);
    local_30 = iVar2 + local_30;
    iVar2 = net_packet_write_bytes(local_34 + 0x4c,param_2 + local_30,0x14);
    local_30 = iVar2 + local_30;
    if (*(int *)(local_34 + 4) < 1) {
      *(undefined4 *)(local_34 + 4) = 0;
    }
    else {
      local_40 = 0;
      puVar4 = local_64;
      game_loop_helper_e9240(puVar4);
      uVar3 = FUN_00489e00(puVar4);
      iVar2 = local_34 + 4;
      puVar4 = local_68;
      game_loop_helper_e9240(puVar4,iVar2,uVar3);
      FUN_00489da0(puVar4,iVar2);
      cVar1 = FUN_0040d970(uVar3);
      if (cVar1 != '\0') {
        local_40 = local_40 + 1;
      }
      puVar4 = local_6c;
      game_loop_helper_e9240(puVar4);
      uVar3 = FUN_00489e00(puVar4);
      iVar2 = local_34 + 4;
      puVar4 = local_70;
      game_loop_helper_e9240(puVar4,iVar2,uVar3);
      FUN_00489da0(puVar4,iVar2);
      cVar1 = FUN_0040d970(uVar3);
      if (cVar1 != '\0') {
        local_40 = local_40 + 1;
      }
      if (local_40 < 2) {
        FUN_004054a0(&DAT_0073fa4f);
        local_8 = 0;
        iVar2 = game_loop_helper_caba0(*(undefined4 *)(local_34 + 4));
        if (iVar2 == 0x71) {
          local_54 = game_loop_helper_cc840(*(undefined4 *)(local_34 + 4));
          FUN_0040d840(local_54 + 0xa0);
        }
        else {
          iVar2 = game_loop_helper_caba0(*(undefined4 *)(local_34 + 4));
          if (iVar2 == 0x8e) {
            local_58 = game_loop_helper_cd6d0(*(undefined4 *)(local_34 + 4));
            FUN_0040d840(local_58 + 0x7c);
          }
        }
        cVar1 = FUN_00427c60(local_2c,"[free]");
        if ((cVar1 == '\0') &&
           ((cVar1 = FUN_00427c60(local_2c,"[sealing]"), cVar1 == '\0' ||
            (*(int *)(local_34 + 0x14) != 0)))) {
          *(undefined4 *)(local_34 + 4) = 0;
        }
        local_8 = 0xffffffff;
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_2c);
      }
      else {
        *(undefined4 *)(local_34 + 4) = 0;
      }
    }
    if ((*(int *)(local_34 + 0xc) < 0) || (0x1f < *(int *)(local_34 + 0xc))) {
      *(undefined4 *)(local_34 + 0xc) = 0;
    }
    if ((*(int *)(local_34 + 8) < 1) || (1000 < *(int *)(local_34 + 8))) {
      *(undefined4 *)(local_34 + 8) = 1;
    }
    if ((*(int *)(local_34 + 0x10) < 0) || (100 < *(int *)(local_34 + 0x10))) {
      *(undefined4 *)(local_34 + 0x10) = 0;
    }
    if (*(int *)(local_34 + 0x20) < 0) {
      *(undefined4 *)(local_34 + 0x20) = 0;
    }
    if ((*(int *)(local_34 + 0x28) < 0) || (7 < *(int *)(local_34 + 0x28))) {
      *(undefined4 *)(local_34 + 0x28) = 0;
    }
  }
  if (*param_3 == '\0') {
    if (*(int *)(param_1 + 0xadc) == 1) {
      if ((*(int *)(param_1 + 0xae0) < 0) || (3 < *(int *)(param_1 + 0xae0))) {
        *param_3 = '\x01';
      }
    }
    else if (*(int *)(param_1 + 0xadc) == 2) {
      if ((*(int *)(param_1 + 0xae0) < 0) || (9 < *(int *)(param_1 + 0xae0))) {
        *param_3 = '\x01';
      }
    }
    else if (*(int *)(param_1 + 0xadc) == 3) {
      if ((*(int *)(param_1 + 0xae0) < 0) || (6 < *(int *)(param_1 + 0xae0))) {
        *param_3 = '\x01';
      }
    }
    else if (*(int *)(param_1 + 0xadc) == 4) {
      if ((*(int *)(param_1 + 0xae0) < 0) || (3 < *(int *)(param_1 + 0xae0))) {
        *param_3 = '\x01';
      }
    }
    else if (*(int *)(param_1 + 0xadc) == 5) {
      if ((*(int *)(param_1 + 0xae0) < 0) || (3 < *(int *)(param_1 + 0xae0))) {
        *param_3 = '\x01';
      }
    }
    else {
      *param_3 = '\x01';
    }
  }
  if ((*param_3 == '\0') &&
     ((((*(int *)(param_1 + 0x224) < 0 || (*(int *)(param_1 + 0x228) < 0)) ||
       (*(int *)(param_1 + 0xdd8) < 0)) ||
      ((6 < *(int *)(param_1 + 0xdd8) ||
       ((*(int *)(param_1 + 500) != 1 && (*(int *)(param_1 + 500) != -1)))))))) {
    *param_3 = '\x01';
  }
  if (*param_3 == '\0') {
    local_44 = (char *)(param_1 + 0xa98);
    do {
      cVar1 = *local_44;
      local_44 = local_44 + 1;
    } while (cVar1 != '\0');
    if ((((local_44 == (char *)(param_1 + 0xa99)) || (*(int *)(param_1 + 0x1fc) < 1)) ||
        ((0x3c < *(int *)(param_1 + 0x1fc) ||
         ((((*(int *)(param_1 + 0x1e8) < 1 || (999999 < *(int *)(param_1 + 0x1e8))) ||
           (*(int *)(param_1 + 0xab8) < 0)) ||
          ((4 < *(int *)(param_1 + 0xab8) || (*(int *)(param_1 + 0xac0) < 0)))))))) ||
       (4 < *(int *)(param_1 + 0xac0))) {
      *param_3 = '\x01';
    }
  }
  ExceptionList = local_10;
  return local_30;
}


/* ==== 004f1180  net_packet_parser_4f1180  size=1215 ==== */

int net_packet_parser_4f1180(int param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  int local_10;
  char local_9;
  char local_8;
  char local_7;
  undefined1 local_6;
  byte local_5;
  
  local_10 = 0;
  iVar2 = net_packet_read_u32_be(param_1 + 0x224,param_2);
  local_10 = iVar2 + local_10;
  iVar2 = net_packet_read_u32_be(param_1 + 0x228,param_2 + local_10);
  local_10 = iVar2 + local_10;
  iVar2 = net_packet_read_u32_be(param_1 + 500,param_2 + local_10);
  local_10 = iVar2 + local_10;
  cVar1 = net_packet_read_u8(param_1 + 0xdd8,param_2 + local_10);
  local_10 = cVar1 + local_10;
  cVar1 = net_packet_read_u8(param_1 + 0xadc,param_2 + local_10);
  local_10 = cVar1 + local_10;
  cVar1 = net_packet_read_u8(param_1 + 0xae0,param_2 + local_10);
  local_10 = cVar1 + local_10;
  FUN_004f0510(param_1);
  local_5 = 0;
  cVar1 = net_packet_read_u8(&local_5,param_2 + local_10);
  local_10 = cVar1 + local_10;
  bVar3 = (local_5 & 1) != 0;
  local_14 = (uint)bVar3;
  *(bool *)param_3 = bVar3;
  local_8 = (local_5 & 2) != 0;
  local_18 = (uint)(byte)local_8;
  local_9 = (local_5 & 4) != 0;
  local_1c = (uint)(byte)local_9;
  local_6 = (local_5 & 8) != 0;
  local_20 = (uint)(byte)local_6;
  local_7 = (local_5 & 0x10) != 0;
  local_24 = (uint)(byte)local_7;
  if ((*(char *)(param_1 + 0xded) == '\0') && ((bool)local_6)) {
    *(undefined1 *)(param_1 + 0xded) = 1;
    local_28 = 0x25;
    FUN_0044de80(&local_28);
  }
  else if ((*(char *)(param_1 + 0xded) == '\x01') && (!(bool)local_6)) {
    *(undefined1 *)(param_1 + 0xded) = 0;
    FUN_00470960(0x25);
  }
  if ((*(char *)(param_1 + 0xdee) == '\0') && (local_7 == '\x01')) {
    *(undefined1 *)(param_1 + 0xdee) = 1;
    local_2c = 0x27;
    FUN_0044de80(&local_2c);
  }
  else if ((*(char *)(param_1 + 0xdee) == '\x01') && (local_7 == '\0')) {
    *(undefined1 *)(param_1 + 0xdee) = 0;
    FUN_00470960(0x27);
  }
  if ((*(char *)(param_1 + 0xdeb) == '\0') && (local_8 == '\x01')) {
    *(undefined1 *)(param_1 + 0xdeb) = 1;
    local_30 = 0x26;
    FUN_0044de80(&local_30);
  }
  else if ((*(char *)(param_1 + 0xdeb) == '\x01') && (local_8 == '\0')) {
    *(undefined1 *)(param_1 + 0xdeb) = 0;
    FUN_00470960(0x26);
  }
  if ((*(char *)(param_1 + 0xdec) == '\0') && (local_9 == '\x01')) {
    *(undefined1 *)(param_1 + 0xdec) = 1;
    local_34 = 0x28;
    FUN_0044de80(&local_34);
  }
  else if ((*(char *)(param_1 + 0xdec) == '\x01') && (local_9 == '\0')) {
    *(undefined1 *)(param_1 + 0xdec) = 0;
    FUN_00470960(0x28);
  }
  if (*(int *)(param_1 + 0xadc) == 1) {
    if ((*(int *)(param_1 + 0xae0) < 0) || (3 < *(int *)(param_1 + 0xae0))) {
      *(undefined4 *)(param_1 + 0xae0) = 1;
    }
  }
  else if (*(int *)(param_1 + 0xadc) == 2) {
    if ((*(int *)(param_1 + 0xae0) < 0) || (9 < *(int *)(param_1 + 0xae0))) {
      *(undefined4 *)(param_1 + 0xae0) = 5;
    }
  }
  else if (*(int *)(param_1 + 0xadc) == 3) {
    if ((*(int *)(param_1 + 0xae0) < 0) || (6 < *(int *)(param_1 + 0xae0))) {
      *(undefined4 *)(param_1 + 0xae0) = 2;
    }
  }
  else if (*(int *)(param_1 + 0xadc) == 4) {
    if ((*(int *)(param_1 + 0xae0) < 0) || (3 < *(int *)(param_1 + 0xae0))) {
      *(undefined4 *)(param_1 + 0xae0) = 1;
    }
  }
  else if (*(int *)(param_1 + 0xadc) == 5) {
    if ((*(int *)(param_1 + 0xae0) < 0) || (3 < *(int *)(param_1 + 0xae0))) {
      *(undefined4 *)(param_1 + 0xae0) = 1;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xadc) = 1;
    *(undefined4 *)(param_1 + 0xae0) = 1;
  }
  if ((*(int *)(param_1 + 0xdd8) < 0) || (6 < *(int *)(param_1 + 0xdd8))) {
    *(undefined4 *)(param_1 + 0xdd8) = 1;
  }
  if ((*(int *)(param_1 + 500) != 1) && (*(int *)(param_1 + 500) != -1)) {
    *(undefined4 *)(param_1 + 500) = 1;
  }
  return local_10;
}


/* ==== 004f1640  net_packet_parser_4f1640  size=712 ==== */

int net_packet_parser_4f1640(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte local_13 [13];
  byte local_6;
  byte local_5;
  
  iVar2 = net_packet_read_u32_be(param_1 + 500,param_2);
  iVar3 = net_packet_read_u32_be(param_1 + 0x1f8,param_2 + iVar2);
  iVar4 = net_packet_read_u32_be(param_1 + 0xe00,param_2 + iVar3 + iVar2);
  iVar4 = iVar4 + iVar3 + iVar2;
  iVar2 = net_packet_read_u32_be(param_1 + 0x224,param_2 + iVar4);
  iVar2 = iVar2 + iVar4;
  iVar3 = net_packet_read_u32_be(param_1 + 0x228,param_2 + iVar2);
  iVar3 = iVar3 + iVar2;
  iVar2 = net_packet_read_u32_be(param_1 + 0x22c,param_2 + iVar3);
  iVar2 = iVar2 + iVar3;
  cVar1 = net_packet_read_u8(&local_5,param_2 + iVar2);
  iVar2 = cVar1 + iVar2;
  cVar1 = net_packet_read_u8(&local_6,param_2 + iVar2);
  iVar2 = cVar1 + iVar2;
  cVar1 = net_packet_read_u8(local_13,param_2 + iVar2);
  *(byte *)(param_1 + 0xdf9) = local_5 & 1;
  *(bool *)(param_1 + 0xdeb) = (local_5 & 2) != 0;
  *(bool *)(param_1 + 0xdec) = (local_5 & 4) != 0;
  *(bool *)(param_1 + 0xded) = (local_5 & 8) != 0;
  *(bool *)(param_1 + 0xdee) = (local_5 & 0x10) != 0;
  *(bool *)(param_1 + 0xdef) = (local_5 & 0x20) != 0;
  *(bool *)(param_1 + 0xdf0) = (local_5 & 0x40) != 0;
  *(bool *)(param_1 + 0xdf1) = (local_5 & 0x80) != 0;
  *(byte *)(param_1 + 0xdf2) = local_6 & 1;
  *(bool *)(param_1 + 0xdf3) = (local_6 & 2) != 0;
  *(bool *)(param_1 + 0xdf4) = (local_6 & 4) != 0;
  *(bool *)(param_1 + 0xdf5) = (local_6 & 8) != 0;
  *(bool *)(param_1 + 0xdf6) = (local_6 & 0x10) != 0;
  *(bool *)(param_1 + 0xdf7) = (local_6 & 0x20) != 0;
  *(byte *)(param_1 + 0xdfc) = local_13[0] & 1;
  return cVar1 + iVar2;
}


/* ==== 004f1910  FUN_004f1910  size=125 ==== */

uint FUN_004f1910(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int *local_c;
  
  local_c = (int *)game_loop_helper_018d0();
  piVar1 = (int *)game_loop_helper_018b0();
  piVar2 = piVar1;
  while( true ) {
    if (local_c == piVar1) {
      return (uint)piVar2 & 0xffffff00;
    }
    piVar2 = local_c;
    if ((((*local_c <= param_1) && (param_1 <= *local_c + local_c[2])) && (local_c[1] <= param_2))
       && (piVar2 = (int *)(local_c[1] + local_c[3]), param_2 <= (int)piVar2)) break;
    local_c = local_c + 4;
  }
  return CONCAT31((int3)((uint)piVar2 >> 8),1);
}


/* ==== 004f1990  FUN_004f1990  size=2723 ==== */

void FUN_004f1990(void)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  undefined1 local_9c [4];
  undefined1 local_98 [4];
  undefined1 local_94 [4];
  undefined1 local_90 [4];
  undefined1 local_8c [4];
  undefined1 local_88 [4];
  undefined4 local_84;
  undefined4 local_80;
  int local_7c;
  undefined4 local_78;
  undefined4 local_74;
  int local_70;
  int local_6c;
  float local_68;
  float local_64;
  undefined1 local_60 [4];
  float local_5c;
  float local_58;
  undefined1 local_54 [4];
  float local_50;
  float local_4c;
  undefined1 local_48 [4];
  int local_44;
  float local_40;
  float local_3c;
  undefined1 local_38 [4];
  float local_34;
  float local_30;
  undefined1 local_2c [4];
  float local_28;
  float local_24;
  undefined1 local_20 [4];
  int *local_1c;
  int *local_18;
  int *local_14;
  int *local_10;
  int *local_c;
  int *local_8;
  
  piVar3 = (int *)game_get_state_ptr_d1af0();
  if (0 < *(int *)(*piVar3 + 0x18)) {
    game_get_state_ptr_d1520();
    piVar3 = (int *)FUN_004d58e0();
    local_70 = *piVar3 + 0x170;
    FUN_0042a9e0(local_20);
    FUN_0042a9c0(local_88);
    while( true ) {
      cVar2 = FUN_0040d2d0(local_88);
      if (cVar2 == '\0') break;
      local_8 = (int *)FUN_0042a580();
      *(undefined1 *)(*local_8 + 0x18) = 1;
      if (*(int *)(*local_8 + 8) < 1) {
        *(undefined4 *)(*local_8 + 0xc) = *(undefined4 *)(*local_8 + 0x224);
        *(undefined4 *)(*local_8 + 0x10) = *(undefined4 *)(*local_8 + 0x228);
        *(undefined4 *)(*local_8 + 0x14) = *(undefined4 *)(*local_8 + 0x22c);
      }
      else {
        local_24 = (float)*(int *)(*local_8 + 4) / (float)*(int *)(*local_8 + 8);
        local_28 = ((float)*(int *)(*local_8 + 8) - (float)*(int *)(*local_8 + 4)) /
                   (float)*(int *)(*local_8 + 8);
        *(int *)(*local_8 + 0xc) =
             (int)((float)*(int *)(*local_8 + 0xc) * local_24 +
                  (float)*(int *)(*local_8 + 0x224) * local_28);
        *(int *)(*local_8 + 0x10) =
             (int)((float)*(int *)(*local_8 + 0x10) * local_24 +
                  (float)*(int *)(*local_8 + 0x228) * local_28);
        *(int *)(*local_8 + 0x14) =
             (int)((float)*(int *)(*local_8 + 0x14) * local_24 +
                  (float)*(int *)(*local_8 + 0x22c) * local_28);
      }
      iVar1 = *local_8;
      piVar3 = (int *)game_get_state_ptr_d1af0();
      *(int *)(*local_8 + 4) = *(int *)(iVar1 + 4) + *(int *)(*piVar3 + 0x18);
      *(undefined4 *)(*local_8 + 8) = *(undefined4 *)(*local_8 + 4);
      FUN_0042a560();
    }
    local_74 = FUN_00516d20();
    FUN_0042a9e0(local_2c);
    FUN_0042a9c0(local_8c);
    while( true ) {
      cVar2 = FUN_0040d2d0(local_8c);
      if (cVar2 == '\0') break;
      local_c = (int *)FUN_0042a580();
      *(undefined1 *)(*local_c + 0x18) = 1;
      if (*(int *)(*local_c + 8) < 1) {
        *(undefined4 *)(*local_c + 0xc) = *(undefined4 *)(*local_c + 0x40);
        *(undefined4 *)(*local_c + 0x10) = *(undefined4 *)(*local_c + 0x44);
        *(undefined4 *)(*local_c + 0x14) = *(undefined4 *)(*local_c + 0x48);
      }
      else {
        local_30 = (float)*(int *)(*local_c + 4) / (float)*(int *)(*local_c + 8);
        local_34 = ((float)*(int *)(*local_c + 8) - (float)*(int *)(*local_c + 4)) /
                   (float)*(int *)(*local_c + 8);
        *(int *)(*local_c + 0xc) =
             (int)((float)*(int *)(*local_c + 0xc) * local_30 +
                  (float)*(int *)(*local_c + 0x40) * local_34);
        *(int *)(*local_c + 0x10) =
             (int)((float)*(int *)(*local_c + 0x10) * local_30 +
                  (float)*(int *)(*local_c + 0x44) * local_34);
        *(int *)(*local_c + 0x14) =
             (int)((float)*(int *)(*local_c + 0x14) * local_30 +
                  (float)*(int *)(*local_c + 0x48) * local_34);
      }
      iVar1 = *local_c;
      piVar3 = (int *)game_get_state_ptr_d1af0();
      *(int *)(*local_c + 4) = *(int *)(iVar1 + 4) + *(int *)(*piVar3 + 0x18);
      *(undefined4 *)(*local_c + 8) = *(undefined4 *)(*local_c + 4);
      FUN_0042a560();
    }
    local_78 = FUN_004aa6e0();
    FUN_0042a9e0(local_38);
    FUN_0042a9c0(local_90);
    while( true ) {
      cVar2 = FUN_0040d2d0(local_90);
      if (cVar2 == '\0') break;
      local_10 = (int *)FUN_0042a580();
      *(undefined1 *)(*local_10 + 0x14) = 1;
      if (*(int *)(*local_10 + 4) < 1) {
        *(undefined4 *)(*local_10 + 8) = *(undefined4 *)(*local_10 + 0x68);
        *(undefined4 *)(*local_10 + 0xc) = *(undefined4 *)(*local_10 + 0x6c);
        *(undefined4 *)(*local_10 + 0x10) = *(undefined4 *)(*local_10 + 0x70);
      }
      else {
        local_3c = (float)*(int *)*local_10 / (float)*(int *)(*local_10 + 4);
        local_40 = ((float)*(int *)(*local_10 + 4) - (float)*(int *)*local_10) /
                   (float)*(int *)(*local_10 + 4);
        *(int *)(*local_10 + 8) =
             (int)((float)*(int *)(*local_10 + 8) * local_3c +
                  (float)*(int *)(*local_10 + 0x68) * local_40);
        *(int *)(*local_10 + 0xc) =
             (int)((float)*(int *)(*local_10 + 0xc) * local_3c +
                  (float)*(int *)(*local_10 + 0x6c) * local_40);
        *(int *)(*local_10 + 0x10) =
             (int)((float)*(int *)(*local_10 + 0x10) * local_3c +
                  (float)*(int *)(*local_10 + 0x70) * local_40);
      }
      piVar3 = (int *)*local_10;
      piVar4 = (int *)game_get_state_ptr_d1af0();
      *(int *)*local_10 = *piVar3 + *(int *)(*piVar4 + 0x18);
      *(undefined4 *)(*local_10 + 4) = *(undefined4 *)*local_10;
      FUN_0042a560();
    }
    local_44 = 0;
    while( true ) {
      piVar3 = (int *)game_get_state_ptr_d1af0();
      if (*(int *)(*piVar3 + 0x18) <= local_44) break;
      game_get_state_ptr_d1520(1);
      FUN_004ddf00();
      local_44 = local_44 + 1;
    }
    piVar3 = (int *)game_get_state_ptr_d1af0();
    *(undefined4 *)(*piVar3 + 0x18) = 0;
  }
  piVar3 = (int *)FUN_004d1b20();
  if (0 < *(int *)(*piVar3 + 0x10)) {
    game_get_state_ptr_d1520();
    piVar3 = (int *)FUN_004d58e0();
    local_7c = *piVar3 + 0x170;
    FUN_0042a9e0(local_48);
    FUN_0042a9c0(local_94);
    while( true ) {
      cVar2 = FUN_0040d2d0(local_94);
      if (cVar2 == '\0') break;
      local_14 = (int *)FUN_0042a580();
      *(undefined1 *)(*local_14 + 0x18) = 1;
      if (*(int *)(*local_14 + 8) < 1) {
        *(undefined4 *)(*local_14 + 0xc) = *(undefined4 *)(*local_14 + 0x224);
        *(undefined4 *)(*local_14 + 0x10) = *(undefined4 *)(*local_14 + 0x228);
        *(undefined4 *)(*local_14 + 0x14) = *(undefined4 *)(*local_14 + 0x22c);
      }
      else {
        local_4c = (float)*(int *)(*local_14 + 4) / (float)*(int *)(*local_14 + 8);
        local_50 = ((float)*(int *)(*local_14 + 8) - (float)*(int *)(*local_14 + 4)) /
                   (float)*(int *)(*local_14 + 8);
        *(int *)(*local_14 + 0xc) =
             (int)((float)*(int *)(*local_14 + 0xc) * local_4c +
                  (float)*(int *)(*local_14 + 0x224) * local_50);
        *(int *)(*local_14 + 0x10) =
             (int)((float)*(int *)(*local_14 + 0x10) * local_4c +
                  (float)*(int *)(*local_14 + 0x228) * local_50);
        *(int *)(*local_14 + 0x14) =
             (int)((float)*(int *)(*local_14 + 0x14) * local_4c +
                  (float)*(int *)(*local_14 + 0x22c) * local_50);
      }
      iVar1 = *local_14;
      piVar3 = (int *)FUN_004d1b20();
      *(int *)(*local_14 + 4) = *(int *)(iVar1 + 4) + *(int *)(*piVar3 + 0x10);
      *(undefined4 *)(*local_14 + 8) = *(undefined4 *)(*local_14 + 4);
      FUN_0042a560();
    }
    local_80 = FUN_00516d20();
    FUN_0042a9e0(local_54);
    FUN_0042a9c0(local_98);
    while( true ) {
      cVar2 = FUN_0040d2d0(local_98);
      if (cVar2 == '\0') break;
      local_18 = (int *)FUN_0042a580();
      *(undefined1 *)(*local_18 + 0x18) = 1;
      if (*(int *)(*local_18 + 8) < 1) {
        *(undefined4 *)(*local_18 + 0xc) = *(undefined4 *)(*local_18 + 0x40);
        *(undefined4 *)(*local_18 + 0x10) = *(undefined4 *)(*local_18 + 0x44);
        *(undefined4 *)(*local_18 + 0x14) = *(undefined4 *)(*local_18 + 0x48);
      }
      else {
        local_58 = (float)*(int *)(*local_18 + 4) / (float)*(int *)(*local_18 + 8);
        local_5c = ((float)*(int *)(*local_18 + 8) - (float)*(int *)(*local_18 + 4)) /
                   (float)*(int *)(*local_18 + 8);
        *(int *)(*local_18 + 0xc) =
             (int)((float)*(int *)(*local_18 + 0xc) * local_58 +
                  (float)*(int *)(*local_18 + 0x40) * local_5c);
        *(int *)(*local_18 + 0x10) =
             (int)((float)*(int *)(*local_18 + 0x10) * local_58 +
                  (float)*(int *)(*local_18 + 0x44) * local_5c);
        *(int *)(*local_18 + 0x14) =
             (int)((float)*(int *)(*local_18 + 0x14) * local_58 +
                  (float)*(int *)(*local_18 + 0x48) * local_5c);
      }
      iVar1 = *local_18;
      piVar3 = (int *)FUN_004d1b20();
      *(int *)(*local_18 + 4) = *(int *)(iVar1 + 4) + *(int *)(*piVar3 + 0x10);
      *(undefined4 *)(*local_18 + 8) = *(undefined4 *)(*local_18 + 4);
      FUN_0042a560();
    }
    local_84 = FUN_004aa6e0();
    FUN_0042a9e0(local_60);
    FUN_0042a9c0(local_9c);
    while( true ) {
      cVar2 = FUN_0040d2d0(local_9c);
      if (cVar2 == '\0') break;
      local_1c = (int *)FUN_0042a580();
      *(undefined1 *)(*local_1c + 0x14) = 1;
      if (*(int *)(*local_1c + 4) < 1) {
        *(undefined4 *)(*local_1c + 8) = *(undefined4 *)(*local_1c + 0x68);
        *(undefined4 *)(*local_1c + 0xc) = *(undefined4 *)(*local_1c + 0x6c);
        *(undefined4 *)(*local_1c + 0x10) = *(undefined4 *)(*local_1c + 0x70);
      }
      else {
        local_64 = (float)*(int *)*local_1c / (float)*(int *)(*local_1c + 4);
        local_68 = ((float)*(int *)(*local_1c + 4) - (float)*(int *)*local_1c) /
                   (float)*(int *)(*local_1c + 4);
        *(int *)(*local_1c + 8) =
             (int)((float)*(int *)(*local_1c + 8) * local_64 +
                  (float)*(int *)(*local_1c + 0x68) * local_68);
        *(int *)(*local_1c + 0xc) =
             (int)((float)*(int *)(*local_1c + 0xc) * local_64 +
                  (float)*(int *)(*local_1c + 0x6c) * local_68);
        *(int *)(*local_1c + 0x10) =
             (int)((float)*(int *)(*local_1c + 0x10) * local_64 +
                  (float)*(int *)(*local_1c + 0x70) * local_68);
      }
      piVar3 = (int *)*local_1c;
      piVar4 = (int *)FUN_004d1b20();
      *(int *)*local_1c = *piVar3 + *(int *)(*piVar4 + 0x10);
      *(undefined4 *)(*local_1c + 4) = *(undefined4 *)*local_1c;
      FUN_0042a560();
    }
    local_6c = 0;
    while( true ) {
      piVar3 = (int *)FUN_004d1b20();
      if (*(int *)(*piVar3 + 0x10) <= local_6c) break;
      game_get_state_ptr_d1520(1);
      FUN_004ddf00();
      local_6c = local_6c + 1;
    }
    piVar3 = (int *)FUN_004d1b20();
    *(undefined4 *)(*piVar3 + 0x10) = 0;
  }
  return;
}


/* ==== 004f2440  FUN_004f2440  size=10 ==== */

undefined * FUN_004f2440(void)

{
  return &DAT_007ca1d2;
}


/* ==== 004f2450  FUN_004f2450  size=10 ==== */

undefined * FUN_004f2450(void)

{
  return &DAT_007ca1b8;
}


/* ==== 004f2460  FUN_004f2460  size=10 ==== */

undefined * FUN_004f2460(void)

{
  return &DAT_007ca1cc;
}


/* ==== 004f2470  FUN_004f2470  size=10 ==== */

undefined * FUN_004f2470(void)

{
  return &DAT_007ca1bc;
}


/* ==== 004f2480  net_disconnect_flag_ptr  size=10 ==== */

undefined * net_disconnect_flag_ptr(void)

{
  return &DAT_007c6428;
}


/* ==== 004f2720  net_wait_until_opcode  size=34 ==== */

/* WARNING: Removing unreachable block (ram,0x004f273d) */

int net_wait_until_opcode(int param_1)

{
  int iVar1;
  
  do {
    iVar1 = game_frame_pump_packets();
  } while (iVar1 != param_1);
  return param_1;
}


/* ==== 004f2750  net_wait_until_opcode_either  size=51 ==== */

/* WARNING: Removing unreachable block (ram,0x004f277c) */

int net_wait_until_opcode_either(int param_1,int param_2)

{
  int iVar1;
  
  do {
    iVar1 = game_frame_pump_packets();
    if (iVar1 == param_1) {
      return iVar1;
    }
  } while (iVar1 != param_2);
  return iVar1;
}


