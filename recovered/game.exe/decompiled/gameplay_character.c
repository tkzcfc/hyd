/* Auto-decompiled pseudo-code from game.exe / gameplay_character */
/* NOT original source. Bucketed by evidence (strings/imports/call-graph), not raw address. */

/* ==== 0042eed0  FUN_0042eed0  size=863 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_0042eed0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,char param_6)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int local_34;
  function<void___cdecl(void)> local_2c [24];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070e3ad;
  local_10 = ExceptionList;
  local_14 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (param_6 != '\0') {
    FUN_004054a0();
    local_8 = 0;
    game_loop_helper_e9240();
    iVar2 = FUN_005b6ee0();
    local_8 = 0xffffffff;
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_2c);
    *(undefined4 *)(iVar2 + 0x84) = 0;
    *(undefined4 *)(iVar2 + 0x98) = 0x5dc;
    FUN_004054a0();
    local_8 = 1;
    FUN_004bcf00();
    local_8 = 0xffffffff;
    iVar3 = FUN_004b8ca0();
    *(int *)(iVar2 + 0x40) = param_1 - *(int *)(iVar3 + 0xc);
    *(undefined4 *)(iVar2 + 0x44) = param_2;
    *(undefined4 *)(iVar2 + 0x48) = param_3;
    *(undefined4 *)(iVar2 + 0x110) = 3;
    *(undefined4 *)(iVar2 + 0x114) = param_2;
    FUN_00516d20();
    FUN_0044de80();
  }
  cVar1 = FUN_00427c60();
  if (cVar1 == '\0') {
    cVar1 = FUN_00427c60();
    if (cVar1 != '\0') {
      FUN_004054a0("common/hiteffect/animation/knocksmall.ani");
      local_8 = 3;
      uVar4 = FUN_00516d20();
      local_8 = 0xffffffff;
      FUN_00516a90(uVar4);
      cVar1 = FUN_006412c0();
      if (cVar1 != '\0') {
        FUN_004054a0("common/hiteffect/animation/knocklarge.ani");
        local_8 = 4;
        uVar4 = FUN_00516d20();
        local_8 = 0xffffffff;
        FUN_00516a90(uVar4);
      }
    }
  }
  else {
    cVar1 = FUN_00427c60();
    if (cVar1 == '\0') {
      cVar1 = FUN_00427c60();
      if (cVar1 == '\0') {
        cVar1 = FUN_00427c60();
        if (cVar1 == '\0') {
          local_34 = FUN_00641430();
          local_34 = local_34 % 3;
        }
        else {
          local_34 = 2;
        }
      }
      else {
        local_34 = 1;
      }
    }
    else {
      local_34 = 0;
    }
    uVar4 = FUN_0047c8e0(local_34,0);
    FUN_004054a0(uVar4);
    local_8 = 2;
    uVar4 = FUN_00516d20();
    local_8 = 0xffffffff;
    iVar2 = FUN_00516a90(uVar4);
    *(undefined4 *)(iVar2 + 0x4c) = param_5;
  }
  cVar1 = FUN_00427c60();
  if (cVar1 == '\0') {
    FUN_00427c60();
  }
  ExceptionList = local_10;
  return;
}


/* ==== 00432b70  FUN_00432b70  size=431 ==== */

void FUN_00432b70(void)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  undefined4 uStack_30;
  float local_2c;
  float local_28;
  float local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 *local_18;
  undefined1 *local_14;
  undefined1 *local_10;
  int local_c;
  int local_8;
  
  local_c = *(int *)(in_ECX + 0x1e4);
  local_8 = in_ECX;
  if (local_c < 0x7577) {
    if (local_c == 0x7576) {
switchD_00432bc2_caseD_0:
      uStack_1c = 0;
      uStack_20 = 0x432ca6;
      piVar1 = (int *)game_get_flag_object_01a70();
      if (*(int *)(*piVar1 + 0x90) == 3) {
        local_14 = (undefined1 *)&uStack_30;
        FUN_004054a0("THUNDER_STRIKE");
        FUN_004c3570();
        uStack_1c = 200;
        uStack_20 = 3;
        local_24 = 6.169064e-39;
        game_get_state_ptr_d1520();
        local_24 = 6.169074e-39;
        FUN_004edfb0();
        local_18 = (undefined1 *)&uStack_30;
        FUN_004054a0("passiveobject/common/particle/thunderboltparticle.ptl");
        FUN_004aa990(0,*(undefined4 *)(local_8 + 0x224),*(undefined4 *)(local_8 + 0x228),
                     *(undefined4 *)(local_8 + 0x22c));
      }
    }
    else if (local_c == 0x4e4b) {
      uStack_1c = 0;
      uStack_20 = 0x432bd9;
      piVar1 = (int *)game_get_flag_object_01a70();
      if (*(int *)(*piVar1 + 0x90) == 3) {
        uStack_1c = 0x432bf0;
        iVar2 = FUN_00432b40();
        if (iVar2 != 0) {
          uStack_1c = *(undefined4 *)(local_8 + 500);
          uStack_20 = 0x4e4c;
          local_24 = (float)*(int *)(local_8 + 0x22c);
          local_28 = (float)*(int *)(local_8 + 0x228);
          local_2c = (float)*(int *)(local_8 + 0x224);
          uStack_30 = 0x432c42;
          uStack_30 = FUN_00432b40();
          FUN_0042f250();
          local_10 = (undefined1 *)&uStack_30;
          FUN_004054a0("passiveobject/character/swordman/particle/outragebreak_light_part.ptl");
          FUN_004aa990(0,*(undefined4 *)(local_8 + 0x224),*(undefined4 *)(local_8 + 0x228),0);
          uStack_1c = 500;
          uStack_20 = 3;
          local_24 = 6.168954e-39;
          game_get_state_ptr_d1520();
          local_24 = 6.168964e-39;
          FUN_004edfb0();
        }
      }
    }
switchD_00432bc2_default:
    return;
  }
  local_c = local_c + -0x7577;
  switch(local_c) {
  case 0:
  case 1:
  case 2:
  case 3:
    goto switchD_00432bc2_caseD_0;
  default:
    goto switchD_00432bc2_default;
  }
}


/* ==== 00433a60  FUN_00433a60  size=187 ==== */

undefined4 * FUN_00433a60(undefined4 param_1)

{
  int iVar1;
  undefined1 auStack_40 [16];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uint uStack_28;
  undefined1 *local_24;
  undefined1 *local_20;
  int local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070e70d;
  local_10 = ExceptionList;
  uStack_28 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uStack_2c = param_1;
  uStack_30 = 0x433a94;
  FUN_0042fb60();
  local_8 = 0;
  *local_14 = CGoblinFire::vftable;
  local_20 = auStack_40;
  FUN_004054a0("passiveobject/common/particle/firemissileparticlelight.ptl");
  local_18 = FUN_004aa990(0,0,0,0);
  *(undefined4 **)(local_18 + 0x60) = local_14;
  local_24 = auStack_40;
  FUN_004054a0("passiveobject/common/particle/firemissileparticle.ptl");
  iVar1 = FUN_004aa990(0,0,0,0);
  *(undefined4 **)(iVar1 + 0x60) = local_14;
  ExceptionList = local_10;
  return local_14;
}


/* ==== 00433b20  FUN_00433b20  size=254 ==== */

void FUN_00433b20(void)

{
  undefined1 auStack_30 [20];
  undefined4 uStack_1c;
  undefined1 *local_18;
  undefined1 *local_14;
  undefined1 *local_10;
  undefined1 *local_c;
  int local_8;
  
  uStack_1c = 0x433b31;
  FUN_00432d30();
  local_c = auStack_30;
  FUN_004054a0("passiveobject/character/swordman/particle/firewaveparticle.ptl");
  FUN_004aa990(0,*(undefined4 *)(local_8 + 0x224),*(undefined4 *)(local_8 + 0x228),
               *(undefined4 *)(local_8 + 0x22c));
  local_10 = auStack_30;
  FUN_004054a0("passiveobject/character/swordman/particle/firewaveparticlefloor.ptl");
  FUN_004aa990(0,*(undefined4 *)(local_8 + 0x224),*(undefined4 *)(local_8 + 0x228),
               *(undefined4 *)(local_8 + 0x22c));
  local_14 = auStack_30;
  FUN_004054a0("passiveobject/character/swordman/particle/firewaveparticlelight.ptl");
  FUN_004aa990(0,*(undefined4 *)(local_8 + 0x224),*(undefined4 *)(local_8 + 0x228),
               *(undefined4 *)(local_8 + 0x22c));
  local_18 = auStack_30;
  FUN_004054a0("passiveobject/character/swordman/particle/firewaveparticletail.ptl");
  FUN_004aa990(0,*(undefined4 *)(local_8 + 0x224),*(undefined4 *)(local_8 + 0x228),
               *(undefined4 *)(local_8 + 0x22c));
  return;
}


/* ==== 00433c20  FUN_00433c20  size=284 ==== */

undefined4 * FUN_00433c20(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070e73d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0042fb60();
  local_8 = 0;
  *in_ECX = CGoblinIce::vftable;
  FUN_004054a0("passiveobject/common/particle/icemissileparticletail.ptl");
  iVar1 = FUN_004aa990(0,in_ECX[0x89],in_ECX[0x8a],in_ECX[0x8b]);
  *(undefined4 **)(iVar1 + 0x60) = in_ECX;
  FUN_004054a0("passiveobject/common/particle/icemissileparticlelight.ptl");
  iVar1 = FUN_004aa990(0,in_ECX[0x89],in_ECX[0x8a],in_ECX[0x8b]);
  *(undefined4 **)(iVar1 + 0x60) = in_ECX;
  uVar2 = FUN_004274d0(0);
  FUN_00405520(uVar2);
  FUN_00630a40();
  ExceptionList = local_10;
  return in_ECX;
}


/* ==== 00433f20  FUN_00433f20  size=213 ==== */

undefined4 * FUN_00433f20(undefined4 param_1)

{
  undefined1 auStack_40 [16];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uint uStack_28;
  undefined1 *local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  undefined1 *local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070e70d;
  local_10 = ExceptionList;
  uStack_28 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uStack_2c = param_1;
  uStack_30 = 0x433f54;
  FUN_0042fb60();
  local_8 = 0;
  *local_14 = CFieldForce::vftable;
  *(undefined1 *)(local_14 + 0x265) = 1;
  local_18 = auStack_40;
  FUN_004054a0("passiveobject/common/animation/forcefield/chargecircle.ani");
  FUN_00630a40();
  local_1c = auStack_40;
  FUN_004054a0("passiveobject/common/animation/forcefield/blast.ani");
  FUN_00630a40();
  local_20 = auStack_40;
  FUN_004054a0("passiveobject/common/animation/forcefield/dirt.ani");
  FUN_00630a40();
  local_24 = auStack_40;
  FUN_004054a0("passiveobject/common/animation/forcefield/field.ani");
  FUN_00630a40();
  ExceptionList = local_10;
  return local_14;
}


/* ==== 00434220  FUN_00434220  size=956 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 * FUN_00434220(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  float10 fVar5;
  undefined4 local_c8;
  float local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  undefined4 *local_b4;
  int local_b0;
  int local_ac;
  undefined4 *local_a8;
  undefined1 local_a4 [144];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070e814;
  local_10 = ExceptionList;
  uVar1 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar1;
  FUN_0042fb60(param_1);
  local_8 = 0;
  *local_a8 = icewave::vftable;
  local_b4 = local_a8 + 0x239;
  local_b0 = game_loop_helper_018d0(uVar1);
  local_bc = game_loop_helper_018b0();
  for (; local_b0 != local_bc; local_b0 = local_b0 + 4) {
    local_c0 = local_b0;
    iVar2 = local_b0;
    FUN_004d1b30(local_b0);
    FUN_00517ee0(iVar2);
  }
  FUN_0040d5f0();
  local_a8[0x268] = 0;
  local_a8[0x269] = 0;
  local_a8[0x26a] = 0;
  local_a8[0x26b] = 0;
  local_a8[0x26c] = 0;
  iVar2 = FUN_00432b40();
  if (iVar2 != 0) {
    uVar3 = FUN_00432b40(&CObj::RTTI_Type_Descriptor,&CHARACTER::RTTI_Type_Descriptor,0);
    local_ac = FUN_0070b658(uVar3,0);
    if (local_ac != 0) {
      FUN_004054a0("passiveobject/character/swordman/animation/icewave1.ani");
      local_8._0_1_ = 1;
      FUN_004054a0("passiveobject/character/swordman/animation/icewave2.ani");
      local_8._0_1_ = 2;
      FUN_004054a0("passiveobject/character/swordman/animation/icewave3.ani");
      local_8._0_1_ = 3;
      FUN_004054a0("passiveobject/character/swordman/animation/icewave4.ani");
      local_8._0_1_ = 4;
      FUN_004054a0("passiveobject/character/swordman/animation/icewave5.ani");
      local_8._0_1_ = 5;
      FUN_004054a0("passiveobject/character/swordman/animation/icewave6.ani");
      local_8._0_1_ = 6;
      fVar5 = (float10)FUN_0047bd30(0x15,1);
      local_c4 = (float)fVar5;
      local_b8 = (int)(local_c4 - (float)(int)local_a8[0x47]);
      local_c8 = FUN_005e9250(local_a4 + local_b8 * 0x18);
      FUN_0040d490(&local_c8);
      piVar4 = (int *)game_get_flag_object_01a70(0);
      *(undefined4 *)(*piVar4 + 0x90) = 0;
      uVar3 = 0;
      game_get_flag_object_01a70(0);
      iVar2 = FUN_0040d680(uVar3);
      piVar4 = (int *)game_get_flag_object_01a70(0);
      *(undefined4 *)(*piVar4 + 0x98) = *(undefined4 *)(iVar2 + 0x44);
      local_a8[0x89] = local_a8[0x7d] * 10 * local_b8 + local_a8[0x89];
      FUN_0047bd30(0x15,4);
      uVar3 = thunk_FUN_006e5750();
      local_a8[0x268] = uVar3;
      fVar5 = (float10)FUN_0047bd30(0x15,6);
      local_a8[0x269] = (int)((float)fVar5 * 1000.0);
      local_a8[0x26a] = 200;
      uVar3 = FUN_0047bcc0(0x15,0);
      local_a8[0x26c] = uVar3;
      FUN_0047bd30(0x15,3);
      uVar3 = thunk_FUN_006e5750();
      FUN_00631910(0,uVar3);
      local_8 = (uint)local_8._1_3_ << 8;
      _eh_vector_destructor_iterator_
                (local_a4,0x18,6,std::function<void___cdecl(void)>::~function<void___cdecl(void)>);
    }
  }
  ExceptionList = local_10;
  return local_a8;
}


/* ==== 00434880  FUN_00434880  size=112 ==== */

void FUN_00434880(void)

{
  undefined1 auStack_2c [20];
  undefined4 uStack_18;
  undefined1 *local_14;
  undefined1 *local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  uStack_18 = 0x434891;
  FUN_00432d30();
  local_c = auStack_2c;
  FUN_004054a0("passiveobject/character/swordman/particle/icewaveparticlesmoke.ptl");
  FUN_004aad60(local_8);
  local_10 = auStack_2c;
  FUN_004054a0("passiveobject/character/swordman/particle/icewaveparticlestar.ptl");
  FUN_004aad60(local_8);
  local_14 = auStack_2c;
  FUN_004054a0("passiveobject/character/swordman/particle/icewaveparticle.ptl");
  FUN_004aad60(local_8);
  return;
}


/* ==== 00437b50  FUN_00437b50  size=141 ==== */

undefined4 * FUN_00437b50(undefined4 param_1)

{
  undefined1 auStack_34 [16];
  undefined4 uStack_24;
  undefined4 uStack_20;
  uint uStack_1c;
  undefined1 *local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070e69d;
  local_10 = ExceptionList;
  uStack_1c = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uStack_20 = param_1;
  uStack_24 = 0x437b84;
  FUN_0042fb60();
  local_8 = 0;
  *local_14 = gorecross::vftable;
  *(undefined1 *)(local_14 + 0x30) = 0;
  *(undefined1 *)((int)local_14 + 0xc1) = 0;
  local_18 = auStack_34;
  FUN_004054a0("sounds/char/swordman/effect/upper_slash_02.wav");
  FUN_004c3500();
  ExceptionList = local_10;
  return local_14;
}


/* ==== 004389a0  FUN_004389a0  size=867 ==== */

/* WARNING: Removing unreachable block (ram,0x00438a89) */

undefined4 * FUN_004389a0(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *in_ECX;
  float10 fVar4;
  float10 fVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070eacd;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0042fb60();
  local_8 = 0;
  *in_ECX = CObjIllusionSlashSub::vftable;
  FUN_00432b40();
  FUN_0047bd30();
  thunk_FUN_006e5750();
  FUN_00631910();
  uVar2 = FUN_004274d0(0);
  FUN_00405520(uVar2);
  iVar3 = FUN_00630a40();
  *(undefined4 *)(iVar3 + 0x110) = 5;
  uVar2 = FUN_004274d0(1);
  FUN_00405520(uVar2);
  iVar3 = FUN_00630a40();
  *(undefined4 *)(iVar3 + 0x110) = 5;
  FUN_004054a0("character/swordman/particle/illusionslash.ptl");
  FUN_00433290();
  if (*(char *)(in_ECX + 0x48) == '\0') {
    FUN_00432b40();
    uVar2 = FUN_0047bcc0();
    *(undefined4 *)(in_ECX[0x267] + 0xf0) = uVar2;
  }
  else {
    FUN_00432b40();
    uVar2 = FUN_0047bcc0();
    *(undefined4 *)(in_ECX[0x267] + 0xf0) = uVar2;
  }
  if (in_ECX[0x47] != 0) {
    fVar4 = (float10)FUN_004a1e90();
    fVar5 = (float10)FUN_004a1ec0();
    iVar3 = *(int *)in_ECX[0x267];
    iVar1 = *(int *)(in_ECX[0x267] + 4);
    *(int *)in_ECX[0x267] =
         (int)((float)*(int *)in_ECX[0x267] * (float)fVar5 -
              (float)*(int *)(in_ECX[0x267] + 4) * (float)fVar4);
    *(int *)(in_ECX[0x267] + 4) = (int)((float)iVar3 * (float)fVar4 + (float)iVar1 * (float)fVar5);
  }
  FUN_004054a0("passiveobject/character/swordman/particle/illusionslash.ptl");
  iVar3 = FUN_004aa990(0,0,0,0);
  *(undefined4 **)(iVar3 + 0x60) = in_ECX;
  *(undefined4 *)(iVar3 + 100) = 1;
  *(int *)(iVar3 + 0x68) = in_ECX[0x7d] * 0x3c;
  *(undefined4 *)(iVar3 + 0x6c) = 0xffffffe2;
  *(undefined1 *)(iVar3 + 0x35) = 1;
  FUN_004054a0("passiveobject/character/swordman/particle/illusionslash.ptl");
  iVar3 = FUN_004aa990(0,0,0,0);
  *(undefined4 **)(iVar3 + 0x60) = in_ECX;
  *(undefined4 *)(iVar3 + 100) = 1;
  *(int *)(iVar3 + 0x68) = in_ECX[0x7d] * 0x3c;
  *(undefined4 *)(iVar3 + 0x6c) = 0x1e;
  *(undefined1 *)(iVar3 + 0x35) = 1;
  FUN_00432b40();
  FUN_0047bcc0();
  FUN_00432b40();
  FUN_0047bcc0();
  FUN_0063c390();
  ExceptionList = local_10;
  return in_ECX;
}


/* ==== 00438e70  FUN_00438e70  size=273 ==== */

undefined4 * FUN_00438e70(undefined4 param_1)

{
  int iVar1;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  TypeDescriptor *pTStack_2c;
  TypeDescriptor *pTStack_28;
  undefined4 uStack_24;
  uint uStack_20;
  undefined1 *local_1c;
  int local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070e76d;
  local_10 = ExceptionList;
  uStack_20 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uStack_24 = param_1;
  pTStack_28 = (TypeDescriptor *)0x438ea4;
  FUN_0042fb60();
  local_8 = 0;
  *local_14 = COutrageFloorBloodExp::vftable;
  *(undefined1 *)(local_14 + 0x30) = 0;
  *(undefined1 *)((int)local_14 + 0xc1) = 0;
  *(undefined1 *)(local_14 + 0x265) = 1;
  local_14[0x268] = 0;
  local_1c = (undefined1 *)&uStack_38;
  FUN_004054a0("sounds/char/swordman/effect/outrage_swing.wav");
  FUN_004c3500();
  uStack_24 = 0x438f01;
  iVar1 = FUN_00432b40();
  if (iVar1 != 0) {
    uStack_24 = 0;
    pTStack_28 = &CHARACTER::RTTI_Type_Descriptor;
    pTStack_2c = &CObj::RTTI_Type_Descriptor;
    uStack_30 = 0x438f19;
    uStack_34 = FUN_00432b40();
    uStack_30 = 0;
    uStack_38 = 0x438f21;
    local_18 = FUN_0070b658();
    if (local_18 != 0) {
      uStack_24 = 2;
      pTStack_28 = (TypeDescriptor *)0x51;
      pTStack_2c = (TypeDescriptor *)0x438f39;
      FUN_0047bd30();
      uStack_24 = 0x438f3e;
      uStack_24 = thunk_FUN_006e5750();
      pTStack_28 = (TypeDescriptor *)0x0;
      pTStack_2c = (TypeDescriptor *)0x438f49;
      FUN_00631910();
      uStack_24 = 0xffffffff;
      pTStack_28 = (TypeDescriptor *)0x98;
      pTStack_2c = (TypeDescriptor *)0x3;
      uStack_30 = 0x51;
      uStack_34 = 0x438f5c;
      pTStack_2c = (TypeDescriptor *)FUN_0047bcc0();
      uStack_30 = 0x438f65;
      FUN_0063c390();
    }
  }
  ExceptionList = local_10;
  return local_14;
}


/* ==== 00438f90  FUN_00438f90  size=1228 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00438f90(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined1 auStack_fc [24];
  float local_e4;
  float local_e0;
  float local_dc;
  undefined4 uStack_d8;
  uint uStack_d4;
  undefined4 local_d0;
  undefined1 *local_cc;
  undefined4 local_c8;
  undefined1 *local_c4;
  undefined4 local_c0;
  undefined1 *local_bc;
  undefined4 local_b8;
  undefined1 *local_b4;
  undefined4 local_b0;
  undefined1 *local_ac;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84 [29];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070eb2c;
  local_10 = ExceptionList;
  uStack_d4 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(int *)(in_ECX + 0x9a0) = *(int *)(in_ECX + 0x9a0) + param_1;
  if (0x32 < *(int *)(in_ECX + 0x9a0)) {
    local_84[0xe] = 0xffffff65;
    local_84[0xf] = 0xffffff5a;
    local_84[0x10] = 0xffffff8b;
    local_84[0x11] = 0xffffff92;
    local_84[0x12] = 0xffffff95;
    local_84[0x13] = 0xffffffcc;
    local_84[0x14] = 0xffffffdf;
    local_84[0x15] = 0xffffffea;
    local_84[0x16] = 0x12;
    local_84[0x17] = 0x1c;
    local_84[0x18] = 0x22;
    local_84[0x19] = 0x40;
    local_84[0x1a] = 0x56;
    local_84[0x1b] = 0x71;
    local_84[0] = 0x2a;
    local_84[1] = 0x10;
    local_84[2] = 0x2a;
    local_84[3] = 0x13;
    local_84[4] = 0x3e;
    local_84[5] = 0x3e;
    local_84[6] = 0x54;
    local_84[7] = 0xfffffff6;
    local_84[8] = 0x52;
    local_84[9] = 0xfffffff4;
    local_84[10] = 0x22;
    local_84[0xb] = 0xfffffffc;
    local_84[0xc] = 0x25;
    local_84[0xd] = 0xfffffffc;
    uStack_d8 = 0x4390b8;
    local_88 = in_ECX;
    local_84[0x1c] = uStack_d4;
    local_94 = FUN_00641430();
    local_94 = local_94 % 0xd;
    local_90 = local_84[local_94 + 0xe];
    local_8c = local_84[local_94];
    uStack_d8 = 0x4390eb;
    iVar1 = FUN_00641430();
    if (iVar1 % 100 < 0x32) {
      uStack_d8 = 3;
      local_dc = (float)*(int *)(local_88 + 0x22c);
      local_e0 = (float)(*(int *)(local_88 + 0x228) + local_8c);
      local_e4 = (float)(*(int *)(local_88 + 0x224) + local_90);
      local_bc = auStack_fc;
      local_c0 = FUN_004054a0(
                             "passiveobject/character/swordman/animation/outragebreak/bloodexp2_none.ani"
                             );
      local_8 = 2;
      uVar2 = FUN_00516d20();
      local_8 = 0xffffffff;
      local_a0 = FUN_00516a90(uVar2);
      *(undefined4 *)(local_a0 + 0x4c) = *(undefined4 *)(local_88 + 500);
      uStack_d8 = 3;
      local_dc = (float)*(int *)(local_88 + 0x22c);
      local_e0 = (float)(*(int *)(local_88 + 0x228) + local_8c);
      local_e4 = (float)(*(int *)(local_88 + 0x224) + local_90);
      local_c4 = auStack_fc;
      local_c8 = FUN_004054a0(
                             "passiveobject/character/swordman/animation/outragebreak/bloodexp2_ldodge.ani"
                             );
      local_8 = 3;
      uVar2 = FUN_00516d20();
      local_8 = 0xffffffff;
      local_a4 = FUN_00516a90(uVar2);
      *(undefined4 *)(local_a4 + 0x4c) = *(undefined4 *)(local_88 + 500);
    }
    else {
      uStack_d8 = 3;
      local_dc = (float)*(int *)(local_88 + 0x22c);
      local_e0 = (float)(*(int *)(local_88 + 0x228) + local_8c);
      local_e4 = (float)(*(int *)(local_88 + 0x224) + local_90);
      local_ac = auStack_fc;
      local_b0 = FUN_004054a0(
                             "passiveobject/character/swordman/animation/outragebreak/bloodexp1_none.ani"
                             );
      local_8 = 0;
      uVar2 = FUN_00516d20();
      local_8 = 0xffffffff;
      local_98 = FUN_00516a90(uVar2);
      *(undefined4 *)(local_98 + 0x4c) = *(undefined4 *)(local_88 + 500);
      uStack_d8 = 3;
      local_dc = (float)*(int *)(local_88 + 0x22c);
      local_e0 = (float)(*(int *)(local_88 + 0x228) + local_8c);
      local_e4 = (float)(*(int *)(local_88 + 0x224) + local_90);
      local_b4 = auStack_fc;
      local_b8 = FUN_004054a0(
                             "passiveobject/character/swordman/animation/outragebreak/bloodexp1_ldodge.ani"
                             );
      local_8 = 1;
      uVar2 = FUN_00516d20();
      local_8 = 0xffffffff;
      local_9c = FUN_00516a90(uVar2);
      *(undefined4 *)(local_9c + 0x4c) = *(undefined4 *)(local_88 + 500);
    }
    uStack_d8 = 3;
    local_dc = (float)(*(int *)(local_88 + 0x22c) + 0x1e);
    local_e0 = (float)(*(int *)(local_88 + 0x228) + local_8c);
    local_e4 = (float)(*(int *)(local_88 + 0x224) + local_90);
    local_cc = auStack_fc;
    local_d0 = FUN_004054a0(
                           "passiveobject/character/swordman/animation/outragebreak/bloodexp_glow.ani"
                           );
    local_8 = 4;
    uVar2 = FUN_00516d20();
    local_8 = 0xffffffff;
    iVar1 = FUN_00516a90(uVar2);
    *(undefined4 *)(iVar1 + 0x4c) = *(undefined4 *)(local_88 + 500);
    *(int *)(local_88 + 0x9a0) = *(int *)(local_88 + 0x9a0) + -0x32;
  }
  ExceptionList = local_10;
  return;
}


/* ==== 00439460  FUN_00439460  size=260 ==== */

undefined4 * FUN_00439460(undefined4 param_1)

{
  int iVar1;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  TypeDescriptor *pTStack_30;
  TypeDescriptor *pTStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  int local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070e9fd;
  local_10 = ExceptionList;
  uStack_24 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uStack_28 = param_1;
  pTStack_2c = (TypeDescriptor *)0x439494;
  FUN_0042fb60();
  local_8 = 0;
  *local_14 = CHopSlashSub::vftable;
  *(undefined1 *)(local_14 + 0x30) = 0;
  *(undefined1 *)((int)local_14 + 0xc1) = 0;
  *(undefined1 *)(local_14 + 0x265) = 1;
  uStack_28 = 0x4394ca;
  iVar1 = FUN_00432b40();
  if (iVar1 != 0) {
    uStack_28 = 0;
    pTStack_2c = &CHARACTER::RTTI_Type_Descriptor;
    pTStack_30 = &CObj::RTTI_Type_Descriptor;
    uStack_34 = 0x4394e2;
    uStack_38 = FUN_00432b40();
    uStack_34 = 0;
    uStack_3c = 0x4394ea;
    local_18 = FUN_0070b658();
    if (local_18 != 0) {
      uStack_28 = 1;
      pTStack_2c = (TypeDescriptor *)0x41;
      pTStack_30 = (TypeDescriptor *)0x439502;
      FUN_0047bd30();
      uStack_28 = 0x439507;
      uStack_28 = thunk_FUN_006e5750();
      pTStack_2c = (TypeDescriptor *)0x0;
      pTStack_30 = (TypeDescriptor *)0x439512;
      FUN_00631910();
    }
  }
  local_1c = (undefined1 *)&uStack_3c;
  FUN_004054a0("passiveobject/character/swordman/animation/hopsmashsubback1.ani");
  FUN_00630a40();
  local_20 = (undefined1 *)&uStack_3c;
  FUN_004054a0("passiveobject/character/swordman/animation/hopsmashsubback2.ani");
  FUN_00630a40();
  ExceptionList = local_10;
  return local_14;
}


/* ==== 0043b890  FUN_0043b890  size=404 ==== */

void FUN_0043b890(int param_1)

{
  char cVar1;
  int *piVar2;
  int in_ECX;
  undefined1 auStack_34 [16];
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *local_1c;
  undefined1 local_18 [4];
  int local_14;
  undefined1 local_10 [4];
  int *local_c;
  int local_8;
  
  if ((*(int *)(in_ECX + 0x9a4) == 1) && (0 < *(int *)(in_ECX + 0x9a8))) {
    if (*(int *)(in_ECX + 0x9a8) == param_1 || *(int *)(in_ECX + 0x9a8) - param_1 < 0) {
      *(undefined4 *)(in_ECX + 0x9a8) = 0;
      *(undefined4 *)(in_ECX + 0x9a4) = 2;
      local_1c = auStack_34;
      local_8 = in_ECX;
      FUN_004054a0("passiveobject/mapobject/trap/particle/cage.ptl");
      FUN_00433290();
      puStack_20 = (undefined1 *)0x43b910;
      FUN_0040d5f0();
      puStack_20 = (undefined1 *)0x43b916;
      game_get_state_ptr_d1520();
      puStack_20 = (undefined1 *)0x43b91d;
      piVar2 = (int *)FUN_004d58e0();
      local_14 = *piVar2 + 0x170;
      puStack_20 = local_10;
      uStack_24 = 0x43b933;
      FUN_0042a9e0();
      puStack_20 = local_18;
      uStack_24 = 0x43b93f;
      FUN_0042a9c0();
      while( true ) {
        puStack_20 = local_18;
        uStack_24 = 0x43b957;
        cVar1 = FUN_0040d2d0();
        if (cVar1 == '\0') break;
        puStack_20 = (undefined1 *)0x43b96a;
        local_c = (int *)FUN_0042a580();
        if (((*(int *)(*local_c + 0x204) == 100) &&
            (((*(int *)(*local_c + 0x1e4) == 0x3c || (*(int *)(*local_c + 0x1e4) == 0x3d)) &&
             (*(int *)(*local_c + 0x224) == *(int *)(local_8 + 0x224))))) &&
           (((*(int *)(*local_c + 0x228) == *(int *)(local_8 + 0x228) &&
             (*(int *)(*local_c + 0x22c) == *(int *)(local_8 + 0x22c))) &&
            (*(char *)(*local_c + 0x120) != '\0')))) {
          puStack_20 = (undefined1 *)0x43ba01;
          (**(code **)(*(int *)*local_c + 0x118))();
        }
        puStack_20 = (undefined1 *)0x43b94a;
        FUN_0042a560();
      }
    }
    else {
      *(int *)(in_ECX + 0x9a8) = *(int *)(in_ECX + 0x9a8) - param_1;
    }
  }
  return;
}


/* ==== 0043cbd0  FUN_0043cbd0  size=268 ==== */

void FUN_0043cbd0(void)

{
  undefined4 uVar1;
  int in_ECX;
  undefined1 auStack_50 [24];
  float local_38;
  float local_34;
  float local_30;
  undefined4 uStack_2c;
  uint uStack_28;
  undefined4 local_24;
  undefined1 *local_20;
  undefined4 local_1c;
  undefined1 *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070ee85;
  local_10 = ExceptionList;
  uStack_28 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uStack_2c = 4;
  local_30 = (float)*(int *)(in_ECX + 0x22c);
  local_34 = (float)*(int *)(in_ECX + 0x228);
  local_38 = (float)*(int *)(in_ECX + 0x224);
  local_18 = auStack_50;
  local_14 = in_ECX;
  local_1c = FUN_004054a0("passiveobject/monster/zepplin/ani/bulletblast.ani");
  local_8 = 0;
  uVar1 = FUN_00516d20();
  local_8 = 0xffffffff;
  FUN_00516a90(uVar1);
  uStack_2c = 4;
  local_30 = (float)*(int *)(local_14 + 0x22c);
  local_34 = (float)*(int *)(local_14 + 0x228);
  local_38 = (float)*(int *)(local_14 + 0x224);
  local_20 = auStack_50;
  local_24 = FUN_004054a0("passiveobject/monster/zepplin/ani/bulletsmoke.ani");
  local_8 = 1;
  uVar1 = FUN_00516d20();
  local_8 = 0xffffffff;
  FUN_00516a90(uVar1);
  uStack_2c = 0x43cccc;
  FUN_00432d30();
  ExceptionList = local_10;
  return;
}


/* ==== 0043cd80  FUN_0043cd80  size=396 ==== */

undefined4 * FUN_0043cd80(void)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070e9cd;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0042fb60();
  local_8 = 0;
  *in_ECX = CBombSub::vftable;
  FUN_004054a0("SAJAHU_SPREAD");
  FUN_004c3570();
  FUN_004274d0();
  FUN_005e9250();
  FUN_0040d490();
  uVar1 = FUN_004274d0(1);
  FUN_00405520(uVar1);
  FUN_00630a40();
  uVar1 = FUN_004274d0(2);
  FUN_00405520(uVar1);
  FUN_00630a40();
  FUN_004054a0("common/hiteffect/particle/firehitparticle.ptl");
  FUN_004aa990(0,in_ECX[0x89],in_ECX[0x8a],in_ECX[0x8b]);
  FUN_004054a0("common/hiteffect/particle/firehitparticlelight.ptl");
  FUN_004aa990(0,in_ECX[0x89],in_ECX[0x8a],in_ECX[0x8b]);
  *(undefined1 *)(in_ECX + 0x265) = 1;
  ExceptionList = local_10;
  return in_ECX;
}


/* ==== 0043d1c0  FUN_0043d1c0  size=115 ==== */

void FUN_0043d1c0(int param_1)

{
  char cVar1;
  int in_ECX;
  
  if (param_1 != 0) {
    FUN_0063c3f0(param_1);
    cVar1 = FUN_00427c60(param_1 + 100,"passiveobject/monster/evileye/ani/eyefloorflash.ani");
    if (cVar1 != '\0') {
      FUN_0042f340(in_ECX,0,0,0,0x7660,*(undefined4 *)(in_ECX + 500));
    }
  }
  return;
}


/* ==== 0043d510  FUN_0043d510  size=216 ==== */

undefined4 * FUN_0043d510(undefined4 param_1)

{
  undefined1 auStack_34 [16];
  undefined4 uStack_24;
  undefined4 uStack_20;
  uint uStack_1c;
  undefined1 *local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070e69d;
  local_10 = ExceptionList;
  uStack_1c = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uStack_20 = param_1;
  uStack_24 = 0x43d544;
  FUN_0042fb60();
  local_8 = 0;
  *local_14 = CChain::vftable;
  *(undefined1 *)((int)local_14 + 0xc1) = 0;
  *(undefined1 *)(local_14 + 0x30) = 0;
  local_14[0x89] = local_14[0x89] + 0x640;
  local_14[0x8b] = local_14[0x8b] + 0x1b8;
  local_18 = auStack_34;
  FUN_004054a0("passiveobject/monster/drake/particle/chain.ptl");
  FUN_00433290();
  local_14[0x269] = 3000;
  local_14[0x268] = 0;
  ExceptionList = local_10;
  return local_14;
}


/* ==== 0043d5f0  FUN_0043d5f0  size=147 ==== */

void FUN_0043d5f0(int param_1)

{
  int in_ECX;
  undefined1 auStack_30 [8];
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 local_18 [8];
  undefined1 *local_10;
  int local_c;
  int local_8;
  
  if ((*(int *)(in_ECX + 0x9a0) == 1) &&
     (*(int *)(in_ECX + 0x9a4) = *(int *)(in_ECX + 0x9a4) - param_1, *(int *)(in_ECX + 0x9a4) < 1))
  {
    uStack_1c = 0x43d62e;
    local_8 = in_ECX;
    local_c = FUN_00432b40();
    if (local_c != 0) {
      uStack_1c = 1;
      uStack_20 = 1;
      puStack_24 = local_18;
      uStack_28 = 0x43d64d;
      FUN_004019a0();
      uStack_20 = 0x43d654;
      FUN_00401790();
    }
    *(undefined4 *)(local_8 + 0x9a0) = 2;
    local_10 = auStack_30;
    FUN_004054a0("passiveobject/monster/drake/particle/returnoriginpos.ptl");
    FUN_00433290();
  }
  return;
}


/* ==== 0043d690  FUN_0043d690  size=432 ==== */

void FUN_0043d690(void)

{
  int iVar1;
  int *in_ECX;
  int *piStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  undefined1 *local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  int local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  if (in_ECX[0x268] == 0) {
    in_ECX[0x268] = 1;
    uStack_28 = 0;
    iStack_2c = 0x43d6c8;
    local_8 = in_ECX;
    (**(code **)(*in_ECX + 0x108))();
    iStack_2c = 500;
    uStack_30 = 3;
    fStack_34 = 6.230044e-39;
    game_get_state_ptr_d1520();
    fStack_34 = 6.230054e-39;
    FUN_004edfb0();
    iStack_2c = local_8[0x7d];
    uStack_30 = 0x76a3;
    fStack_34 = (float)local_8[0x8b];
    fStack_38 = (float)local_8[0x8a];
    fStack_3c = (float)local_8[0x89];
    piStack_40 = local_8;
    FUN_0042f250();
    local_1c = (undefined1 *)&piStack_40;
    FUN_004054a0("passiveobject/monster/drake/particle/dust.ptl");
    local_10 = FUN_004aa990(0,local_8[0x89],local_8[0x8a],local_8[0x8b]);
    *(undefined1 *)(local_10 + 0x35) = 1;
    *(undefined4 *)(local_10 + 0x1c) = 0xfffffed4;
    local_20 = (undefined1 *)&piStack_40;
    local_c = local_10;
    FUN_004054a0("passiveobject/monster/drake/particle/rocks.ptl");
    local_14 = FUN_004aa990(0,local_8[0x89],local_8[0x8a],local_8[0x8b]);
    *(undefined1 *)(local_14 + 0x35) = 1;
    *(undefined4 *)(local_14 + 0x1c) = 0xffffff38;
    local_24 = (undefined1 *)&piStack_40;
    local_c = local_14;
    FUN_004054a0("passiveobject/monster/drake/particle/ground.ptl");
    iVar1 = FUN_004aa990(0,local_8[0x89],local_8[0x8a],local_8[0x8b]);
    *(undefined1 *)(iVar1 + 0x35) = 1;
    *(undefined4 *)(iVar1 + 0x1c) = 0xffffff9c;
  }
  else if (in_ECX[0x268] == 2) {
    uStack_28 = 0x43d83b;
    FUN_00432d30();
  }
  return;
}


/* ==== 0043dfa0  FUN_0043dfa0  size=438 ==== */

undefined4 * FUN_0043dfa0(undefined4 param_1)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined1 auStack_64 [8];
  undefined4 uStack_5c;
  undefined1 *puStack_58;
  undefined1 *puStack_54;
  int *piStack_50;
  uint uStack_4c;
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  undefined1 *local_38;
  undefined4 local_34;
  undefined1 *local_30;
  int local_28;
  undefined4 local_24;
  int local_20 [2];
  undefined4 *local_18;
  undefined1 local_11;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070ef95;
  local_10 = ExceptionList;
  uStack_4c = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  piStack_50 = (int *)param_1;
  puStack_54 = (undefined1 *)0x43dfd5;
  FUN_0042fb60();
  local_8 = 0;
  *local_18 = CNugolBall::vftable;
  local_30 = auStack_64;
  uVar1 = FUN_004274d0(0);
  local_34 = FUN_00405520(uVar1);
  local_8._0_1_ = 1;
  game_loop_helper_e9240();
  local_8 = (uint)local_8._1_3_ << 8;
  piStack_50 = (int *)FUN_005be5d0();
  puStack_54 = (undefined1 *)0x43e037;
  local_24 = piStack_50;
  FUN_00430eb0();
  piStack_50 = (int *)0x0;
  puStack_54 = (undefined1 *)0x43e048;
  piVar2 = (int *)game_get_flag_object_01a70();
  *(undefined4 *)(*piVar2 + 0x114) = 0;
  local_38 = auStack_64;
  uVar1 = FUN_004274d0(0);
  FUN_00405520(uVar1);
  local_28 = FUN_00630a40();
  *(undefined4 *)(local_28 + 0x114) = 0xffffff9c;
  piStack_50 = (int *)0x43e0a6;
  local_20[0] = local_28;
  FUN_0044e040();
  piStack_50 = local_20;
  puStack_54 = (undefined1 *)0x43e0b8;
  FUN_0040d490();
  local_11 = 0;
  piStack_50 = (int *)0x0;
  puStack_54 = local_3c;
  puStack_58 = (undefined1 *)0x43e0d5;
  puVar3 = (undefined4 *)FUN_00402170();
  puStack_54 = (undefined1 *)*puVar3;
  puStack_58 = local_40;
  uStack_5c = 0x43e0ea;
  puVar3 = (undefined4 *)FUN_004021b0();
  puStack_58 = (undefined1 *)*puVar3;
  uStack_5c = 0x43e0f2;
  FUN_0044eab0();
  FUN_004054a0("passiveobject/monster/nugol/animation/bug-growl-ball1.ptl");
  iVar4 = FUN_004aa990(0,0,0,0);
  *(undefined4 **)(iVar4 + 0x60) = local_18;
  *(undefined1 *)(iVar4 + 0x35) = 1;
  *(undefined4 *)(iVar4 + 0x1c) = 0xffffff38;
  ExceptionList = local_10;
  return local_18;
}


/* ==== 0043eb40  FUN_0043eb40  size=1666 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_0043eb40(int param_1)

{
  int *piVar1;
  int iVar2;
  int *in_ECX;
  undefined4 uVar3;
  undefined4 local_98;
  int local_94;
  int local_90;
  undefined4 local_8c;
  undefined4 local_88;
  int local_84;
  int local_80;
  int *local_7c;
  int local_78;
  int local_74;
  int local_70;
  int *local_6c;
  int local_68;
  int local_64;
  int *local_60;
  function<void___cdecl(void)> local_5c [24];
  function<void___cdecl(void)> local_44 [24];
  function<void___cdecl(void)> local_2c [24];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070f04d;
  local_10 = ExceptionList;
  local_14 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_60 = in_ECX;
  if ((char)in_ECX[0x268] == '\0') {
    if (in_ECX[0x6a] == 0) {
      in_ECX[0x88] = in_ECX[0x88] + param_1 * -0x14e;
      local_74 = in_ECX[0x88] / 1000;
      in_ECX[0x88] = in_ECX[0x88] + local_74 * -1000;
      in_ECX[0x8b] = in_ECX[0x8b] + local_74;
      if (in_ECX[0x8b] < 1) {
        in_ECX[0x8b] = 0;
        in_ECX[0x6a] = 1;
        (**(code **)(*in_ECX + 0x108))(0,local_14);
        piVar1 = (int *)game_get_flag_object_01a70(0);
        *(undefined4 *)(*piVar1 + 0x4c) = 0xffffffff;
      }
    }
    if (local_60[0x6a] == 1) {
      local_60[0x88] = param_1 * 0x14e + local_60[0x88];
      local_78 = local_60[0x88] / 1000;
      local_60[0x88] = local_60[0x88] + local_78 * -1000;
      local_60[0x8b] = local_60[0x8b] + local_78;
      piVar1 = (int *)game_get_flag_object_01a70(0);
      if (*(int *)(*piVar1 + 0x90) == 1) {
        local_7c = local_60 + 0x239;
        local_68 = game_loop_helper_018d0();
        local_90 = game_loop_helper_018b0();
        for (; local_68 != local_90; local_68 = local_68 + 4) {
          local_94 = local_68;
          iVar2 = local_68;
          FUN_004d1b30(local_68);
          FUN_00517ee0(iVar2);
        }
        FUN_0040d5f0();
        FUN_004054a0("passiveobject/monster/lotus/ani/grabfail.ani");
        local_8 = 2;
        local_98 = FUN_005e9250(local_5c);
        FUN_0040d490(&local_98);
        local_8 = 0xffffffff;
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_5c);
        piVar1 = (int *)game_get_flag_object_01a70(0);
        *(undefined4 *)(*piVar1 + 0x90) = 0;
        uVar3 = 0;
        game_get_flag_object_01a70(0);
        iVar2 = FUN_0040d680(uVar3);
        piVar1 = (int *)game_get_flag_object_01a70(0);
        *(undefined4 *)(*piVar1 + 0x98) = *(undefined4 *)(iVar2 + 0x44);
        piVar1 = (int *)game_get_flag_object_01a70(0);
        *(undefined4 *)(*piVar1 + 0x4c) = 0xffffffff;
        local_60[0x6a] = 2;
      }
    }
  }
  else {
    in_ECX[0x269] = in_ECX[0x269] + param_1;
    if (in_ECX[0x6a] == 0) {
      local_6c = in_ECX + 0x239;
      local_64 = game_loop_helper_018d0();
      local_80 = game_loop_helper_018b0();
      for (; local_64 != local_80; local_64 = local_64 + 4) {
        local_84 = local_64;
        iVar2 = local_64;
        FUN_004d1b30(local_64);
        FUN_00517ee0(iVar2);
      }
      FUN_0040d5f0();
      FUN_004054a0("passiveobject/monster/lotus/ani/grabloopover.ani");
      local_8 = 0;
      local_88 = FUN_005e9250(local_2c);
      FUN_0040d490(&local_88);
      local_8 = 0xffffffff;
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_2c);
      piVar1 = (int *)game_get_flag_object_01a70(0);
      *(undefined4 *)(*piVar1 + 0x84) = 1;
      piVar1 = (int *)game_get_flag_object_01a70(0);
      *(undefined4 *)(*piVar1 + 0x90) = 0;
      uVar3 = 0;
      game_get_flag_object_01a70(0);
      iVar2 = FUN_0040d680(uVar3);
      piVar1 = (int *)game_get_flag_object_01a70(0);
      *(undefined4 *)(*piVar1 + 0x98) = *(undefined4 *)(iVar2 + 0x44);
      FUN_004054a0("passiveobject/monster/lotus/ani/grabloopunder.ani");
      local_8 = 1;
      local_8c = FUN_005e9250(local_44);
      FUN_0040d490(&local_8c);
      local_8 = 0xffffffff;
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_44);
      piVar1 = (int *)game_get_flag_object_01a70(1);
      *(undefined4 *)(*piVar1 + 0x84) = 1;
      piVar1 = (int *)game_get_flag_object_01a70(1);
      *(undefined4 *)(*piVar1 + 0x90) = 0;
      uVar3 = 0;
      game_get_flag_object_01a70(1);
      iVar2 = FUN_0040d680(uVar3);
      piVar1 = (int *)game_get_flag_object_01a70(1);
      *(undefined4 *)(*piVar1 + 0x98) = *(undefined4 *)(iVar2 + 0x44);
      local_60[0x6a] = 1;
    }
    else if (in_ECX[0x6a] == 1) {
      if (499 < in_ECX[0x269]) {
        in_ECX[0x269] = 0;
        in_ECX[0x26a] = in_ECX[0x26a] + 1;
        if (in_ECX[0x26a] < 3) {
          *(undefined4 *)(in_ECX[99] + 0x1a4) = 100;
          (**(code **)(*in_ECX + 0xac))(0);
        }
        else {
          *(undefined4 *)(in_ECX[99] + 0x1a4) = 0xffffffff;
          (**(code **)(*(int *)in_ECX[99] + 0x50))();
          (**(code **)(*local_60 + 0xac))(0);
          (**(code **)(*local_60 + 0x108))(0);
          piVar1 = (int *)game_get_flag_object_01a70(0);
          *(undefined4 *)(*piVar1 + 0x4c) = 0xffffffff;
          local_60[0x6a] = 2;
        }
      }
    }
    else if (in_ECX[0x6a] == 2) {
      in_ECX[0x88] = param_1 * 0x14e + in_ECX[0x88];
      local_70 = in_ECX[0x88] / 1000;
      in_ECX[0x88] = in_ECX[0x88] + local_70 * -1000;
      in_ECX[0x8b] = in_ECX[0x8b] + local_70;
      piVar1 = (int *)game_get_flag_object_01a70(0);
      if (*(int *)(*piVar1 + 0x90) == 1) {
        (**(code **)(*local_60 + 0xdc))();
      }
    }
  }
  local_60[0x7d] = -1;
  ExceptionList = local_10;
  return;
}


/* ==== 0043f3f0  FUN_0043f3f0  size=193 ==== */

undefined4 * FUN_0043f3f0(undefined4 param_1)

{
  int iVar1;
  undefined1 auStack_34 [12];
  undefined4 uStack_28;
  undefined4 uStack_24;
  int iStack_20;
  uint uStack_1c;
  undefined1 *local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070e69d;
  local_10 = ExceptionList;
  uStack_1c = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iStack_20 = param_1;
  uStack_24 = 0x43f424;
  FUN_0042fb60();
  local_8 = 0;
  *local_14 = CSweepingLegOfLotus::vftable;
  local_18 = auStack_34;
  FUN_004054a0("passiveobject/mapobject/trap/animation/sweepinglegoflotusparticle.ani");
  FUN_00630a40();
  iStack_20 = 0;
  uStack_24 = 0x43f456;
  FUN_00634ac0();
  uStack_24 = 0x43f45d;
  FUN_0044de30();
  iStack_20 = 0x43f464;
  iVar1 = FUN_0044e2b0();
  local_14[0x268] = (uint)(iVar1 << 4) / 400;
  iStack_20 = local_14[0x268] * 1000;
  uStack_24 = 3;
  uStack_28 = 0x43f48e;
  game_get_state_ptr_d1520();
  uStack_28 = 0x43f495;
  FUN_004edfb0();
  ExceptionList = local_10;
  return local_14;
}


/* ==== 0043f750  FUN_0043f750  size=113 ==== */

void FUN_0043f750(undefined4 param_1)

{
  undefined1 auStack_28 [16];
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined1 *local_10;
  int local_c;
  int *local_8;
  
  uStack_14 = param_1;
  uStack_18 = 0x43f765;
  FUN_00431fb0();
  local_10 = auStack_28;
  FUN_004054a0("passiveobject/monster/wraith/particle/flybatparticle.ptl");
  local_c = FUN_004aa990(0,local_8[0x89],local_8[0x8a],local_8[0x8b]);
  *(undefined1 *)(local_c + 0x35) = 1;
  uStack_14 = 0x43f7ba;
  (**(code **)(*local_8 + 0xb0))();
  return;
}


/* ==== 0043f9e0  FUN_0043f9e0  size=210 ==== */

undefined4 * FUN_0043f9e0(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_3c [16];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  undefined1 *local_20;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070e9fd;
  local_10 = ExceptionList;
  uStack_24 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uStack_28 = param_1;
  uStack_2c = 0x43fa14;
  FUN_0042fb60();
  local_8 = 0;
  *local_14 = CSkeletonFallingStone::vftable;
  local_14[0x268] = 0;
  local_14[0x269] = 0;
  uStack_28 = 0;
  uStack_2c = 0x43fa4e;
  piVar1 = (int *)game_get_flag_object_01a70();
  *(undefined4 *)(*piVar1 + 0x84) = 1;
  local_20 = auStack_3c;
  FUN_004054a0("passiveobject/monster/skeleton/animation/fallingstoneglow.ani");
  iVar2 = FUN_00630a40();
  *(undefined4 *)(iVar2 + 0x84) = 1;
  *(undefined4 *)(iVar2 + 0x114) = 0xffffff9c;
  ExceptionList = local_10;
  return local_14;
}


/* ==== 0043fac0  FUN_0043fac0  size=195 ==== */

void FUN_0043fac0(int param_1)

{
  int iVar1;
  int in_ECX;
  char *pcVar2;
  
  if ((*(int *)(in_ECX + 0x9a4) < 5) &&
     (*(int *)(in_ECX + 0x9a0) = *(int *)(in_ECX + 0x9a0) + param_1, 0x31 < *(int *)(in_ECX + 0x9a0)
     )) {
    *(undefined4 *)(in_ECX + 0x9a0) = 0;
    *(int *)(in_ECX + 0x9a4) = *(int *)(in_ECX + 0x9a4) + 1;
    pcVar2 = "passiveobject/monster/skeleton/particle/fallingstone.ptl";
    iVar1 = FUN_00641430(0x43fa0000,0x76b5,1,
                         "passiveobject/monster/skeleton/particle/fallingstone.ptl");
    iVar1 = FUN_00641430((float)(iVar1 % 0x32));
    FUN_0042f340(in_ECX,(float)(iVar1 % 0x32));
    FUN_004053a0(pcVar2);
  }
  return;
}


/* ==== 0043fb90  FUN_0043fb90  size=76 ==== */

void FUN_0043fb90(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if ((param_1 != 0) &&
     (cVar1 = FUN_00427c60(param_1 + 100,"passiveobject/monster/skeleton/animation/fallingspark.ani"
                          ), cVar1 != '\0')) {
    uVar3 = 500;
    uVar2 = 3;
    game_get_state_ptr_d1520(3,500);
    FUN_004edfb0(uVar2,uVar3);
    FUN_00432d30();
  }
  return;
}


/* ==== 0043fbe0  FUN_0043fbe0  size=92 ==== */

void FUN_0043fbe0(void)

{
  int iVar1;
  undefined1 auStack_28 [12];
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined1 *local_10;
  int *local_8;
  
  uStack_14 = 0;
  uStack_18 = 0;
  uStack_1c = 0x43fbfb;
  game_get_flag_object_01a70();
  uStack_18 = 0x43fc05;
  iVar1 = FUN_0040d680();
  *(undefined1 *)(iVar1 + 0x3e) = 1;
  local_10 = auStack_28;
  FUN_004054a0("passiveobject/monster/skeleton/animation/fallingspark.ani");
  iVar1 = (**(code **)(*local_8 + 0x78))();
  *(undefined4 *)(iVar1 + 0x114) = 0xffffff38;
  return;
}


/* ==== 0043fc40  FUN_0043fc40  size=184 ==== */

undefined4 * FUN_0043fc40(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_3c [16];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  undefined1 *local_20;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070e9fd;
  local_10 = ExceptionList;
  uStack_24 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uStack_28 = param_1;
  uStack_2c = 0x43fc74;
  FUN_0042fb60();
  local_8 = 0;
  *local_14 = CSkeletonFallingStoneSpark::vftable;
  uStack_28 = 0;
  uStack_2c = 0x43fc94;
  piVar1 = (int *)game_get_flag_object_01a70();
  *(undefined4 *)(*piVar1 + 0x84) = 1;
  local_20 = auStack_3c;
  FUN_004054a0("passiveobject/monster/skeleton/animation/fallingstoneglow.ani");
  iVar2 = FUN_00630a40();
  *(undefined4 *)(iVar2 + 0x84) = 1;
  *(undefined4 *)(iVar2 + 0x114) = 0xffffff9c;
  ExceptionList = local_10;
  return local_14;
}


/* ==== 0043fd00  FUN_0043fd00  size=76 ==== */

void FUN_0043fd00(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if ((param_1 != 0) &&
     (cVar1 = FUN_00427c60(param_1 + 100,"passiveobject/monster/skeleton/animation/fallingspark.ani"
                          ), cVar1 != '\0')) {
    FUN_00432d30();
    uVar3 = 500;
    uVar2 = 3;
    game_get_state_ptr_d1520(3,500);
    FUN_004edfb0(uVar2,uVar3);
  }
  return;
}


/* ==== 00442370  FUN_00442370  size=166 ==== */

void FUN_00442370(void)

{
  undefined4 uVar1;
  int in_ECX;
  undefined1 auStack_48 [24];
  float local_30;
  float local_2c;
  float local_28;
  undefined4 uStack_24;
  uint uStack_20;
  undefined4 local_1c;
  undefined1 *local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070f1ed;
  local_10 = ExceptionList;
  uStack_20 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uStack_24 = 3;
  local_28 = (float)*(int *)(in_ECX + 0x22c);
  local_2c = (float)*(int *)(in_ECX + 0x228);
  local_30 = (float)*(int *)(in_ECX + 0x224);
  local_18 = auStack_48;
  local_1c = FUN_004054a0("passiveobject/monster/thief/animation/warpcloud.ani");
  local_8 = 0;
  uVar1 = FUN_00516d20();
  local_8 = 0xffffffff;
  FUN_00516a90(uVar1);
  uStack_24 = 0x442406;
  FUN_00432d30();
  ExceptionList = local_10;
  return;
}


/* ==== 004425a0  FUN_004425a0  size=403 ==== */

undefined4 * FUN_004425a0(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined1 auStack_4c [12];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  uint uStack_34;
  undefined1 *local_30;
  undefined1 *local_2c;
  undefined1 *local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined4 *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070f21d;
  local_10 = ExceptionList;
  uStack_34 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uStack_38 = param_1;
  uStack_3c = 0x4425d4;
  FUN_0042fb60();
  local_8 = 0;
  *local_18 = Trackingicewave::vftable;
  uStack_38 = 0;
  uStack_3c = 0x4425ee;
  FUN_00442840();
  local_28 = auStack_4c;
  FUN_004054a0("passiveobject/character/swordman/particle/icewaveparticlesmoke.ptl");
  local_1c = FUN_004aa990(0,0,0,0);
  *(undefined4 *)(local_1c + 0x18) = 0;
  *(undefined4 **)(local_1c + 0x60) = local_18;
  *(undefined4 *)(local_1c + 100) = 1;
  local_2c = auStack_4c;
  local_14 = local_1c;
  FUN_004054a0("passiveobject/character/swordman/particle/icewaveparticle.ptl");
  local_20 = FUN_004aa990(0,0,0,0);
  *(undefined4 *)(local_20 + 0x18) = 0;
  *(undefined4 **)(local_20 + 0x60) = local_18;
  *(undefined4 *)(local_20 + 100) = 1;
  local_30 = auStack_4c;
  local_14 = local_20;
  FUN_004054a0("passiveobject/character/swordman/particle/icewaveparticlestar.ptl");
  local_24 = FUN_004aa990(0,0,0,0);
  *(undefined4 *)(local_24 + 0x18) = 0;
  *(undefined4 **)(local_24 + 0x60) = local_18;
  *(undefined4 *)(local_24 + 100) = 1;
  local_18[0x268] = 0;
  uStack_38 = 2;
  uStack_3c = 0xc393;
  uStack_40 = 0x4426e0;
  local_14 = local_24;
  game_loop_helper_e9240();
  uStack_40 = 0x4426e7;
  FUN_005d1b00();
  uStack_40 = 0x4426f3;
  puVar1 = (undefined4 *)game_get_flag_object_01a70();
  local_18[0x269] = *puVar1;
  local_18[0x41] = 1;
  local_18[0x69] = 1;
  ExceptionList = local_10;
  return local_18;
}


/* ==== 004438e0  FUN_004438e0  size=241 ==== */

undefined4 * FUN_004438e0(undefined4 param_1)

{
  undefined1 auStack_38 [12];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  uint uStack_20;
  undefined1 *local_1c;
  undefined1 *local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070e76d;
  local_10 = ExceptionList;
  uStack_20 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uStack_24 = param_1;
  uStack_28 = 0x443914;
  FUN_0042fb60();
  local_8 = 0;
  *local_14 = darksteelshootingstarexp::vftable;
  uStack_24 = 1000;
  uStack_28 = 3;
  uStack_2c = 0x443930;
  game_get_state_ptr_d1520();
  uStack_2c = 0x443937;
  FUN_004edfb0();
  local_18 = auStack_38;
  FUN_004054a0("passiveobject/common/particle/shootingstarexp.ptl");
  FUN_004aa990(0,local_14[0x89],local_14[0x8a],local_14[0x8b]);
  local_1c = auStack_38;
  FUN_004054a0("passiveobject/monster/cosmofiend/particle/shootingstarexp.ptl");
  FUN_004aa990(0,local_14[0x89],local_14[0x8a],local_14[0x8b]);
  *(undefined1 *)(local_14 + 0x265) = 1;
  ExceptionList = local_10;
  return local_14;
}


/* ==== 00443ab0  FUN_00443ab0  size=390 ==== */

void FUN_00443ab0(int param_1)

{
  undefined4 uVar1;
  int *in_ECX;
  undefined1 auStack_54 [8];
  undefined4 uStack_4c;
  int iStack_48;
  undefined1 auStack_44 [8];
  float local_3c;
  float local_38;
  float local_34;
  undefined4 uStack_30;
  uint uStack_2c;
  undefined4 local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  undefined4 local_1c;
  int local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070f34d;
  local_10 = ExceptionList;
  uStack_2c = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (in_ECX[0x6a] == 0) {
    in_ECX[0x88] = in_ECX[0x88] + param_1 * -1000;
    local_18 = in_ECX[0x88] / 1000;
    in_ECX[0x88] = in_ECX[0x88] + local_18 * -1000;
    in_ECX[0x8b] = in_ECX[0x8b] + local_18;
    if (in_ECX[0x8b] < 1) {
      in_ECX[0x8b] = 0;
      in_ECX[0x6a] = 1;
      uStack_30 = 500;
      local_34 = 4.2039e-45;
      local_38 = 6.266154e-39;
      local_14 = in_ECX;
      game_get_state_ptr_d1520();
      local_38 = 6.266164e-39;
      FUN_004edfb0();
      local_20 = auStack_44;
      iStack_48 = local_14[0x25d] + 0x18;
      uStack_4c = 0x443b9f;
      FUN_00405520();
      iStack_48 = 0x443ba4;
      uStack_30 = FUN_0063d0d0();
      local_34 = (float)local_14[0x8b];
      local_38 = (float)local_14[0x8a];
      local_3c = (float)local_14[0x89];
      local_24 = auStack_54;
      local_1c = uStack_30;
      local_28 = FUN_004054a0("passiveobject/monster/cosmofiend/animation/darksteelsteeldust.ani");
      local_8 = 0;
      uVar1 = FUN_00516d20();
      local_8 = 0xffffffff;
      FUN_00516a90(uVar1);
      uStack_30 = 0;
      local_34 = 6.266388e-39;
      (**(code **)(*local_14 + 0x108))();
    }
  }
  ExceptionList = local_10;
  return;
}


/* ==== 00444980  FUN_00444980  size=415 ==== */

undefined4 * FUN_00444980(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070edad;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0042fb60();
  local_8 = 0;
  *in_ECX = CShootingStar::vftable;
  FUN_004054a0("SSTAR_DROP");
  FUN_004c3570();
  if (in_ECX[0x7d] == -1) {
    in_ECX[0x89] = in_ECX[0x89] + 500;
  }
  else {
    in_ECX[0x89] = in_ECX[0x89] + -500;
  }
  in_ECX[0x8b] = in_ECX[0x8b] + 400;
  *(undefined1 *)((int)in_ECX + 0xc1) = 0;
  *(undefined1 *)(in_ECX + 0x30) = 0;
  uVar1 = FUN_004274d0(0);
  FUN_00405520(uVar1);
  iVar2 = FUN_00630a40();
  *(undefined4 *)(iVar2 + 0x114) = 0xffffff9c;
  FUN_004054a0("passiveobject/common/particle/shootingstarfire.ptl");
  iVar2 = FUN_004aa990(0,0,0,0);
  *(undefined4 *)(iVar2 + 0x1c) = 0xffffff38;
  *(undefined4 **)(iVar2 + 0x60) = in_ECX;
  *(undefined4 *)(iVar2 + 0x2c) = in_ECX[0x7d];
  FUN_004054a0("passiveobject/common/particle/shootingstarpath.ptl");
  FUN_00433290();
  FUN_004053a0();
  ExceptionList = local_10;
  return in_ECX;
}


/* ==== 00444c90  FUN_00444c90  size=372 ==== */

undefined4 * FUN_00444c90(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined1 auStack_3c [12];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  undefined1 *local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070e9fd;
  local_10 = ExceptionList;
  uStack_24 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uStack_28 = param_1;
  uStack_2c = 0x444cc4;
  FUN_0042fb60();
  local_8 = 0;
  *local_14 = CShootingStarSummon::vftable;
  uStack_28 = 500;
  uStack_2c = 3;
  uStack_30 = 0x444ce0;
  game_get_state_ptr_d1520();
  uStack_30 = 0x444ce7;
  FUN_004edfb0();
  if (local_14[0x79] == 0x7727) {
    uStack_28 = 3;
    uStack_2c = 0x444d0a;
    puVar1 = (undefined4 *)game_get_flag_object_01a70();
    local_14[0x1b8] = *puVar1;
    local_14[0x1ba] = local_14[0x1b8];
    *(undefined1 *)(local_14 + 0x238) = 1;
  }
  local_18 = auStack_3c;
  FUN_004054a0("passiveobject/common/particle/shootingstarexp.ptl");
  FUN_004aa990(0,local_14[0x89],local_14[0x8a],local_14[0x8b]);
  local_1c = auStack_3c;
  FUN_004054a0("passiveobject/common/particle/shootingstarexpetc.ptl");
  FUN_004aa990(0,local_14[0x89],local_14[0x8a],local_14[0x8b]);
  local_20 = auStack_3c;
  FUN_004054a0("passiveobject/common/particle/shootingstarexpsmoke.ptl");
  FUN_004aa990(0,local_14[0x89],local_14[0x8a],local_14[0x8b]);
  *(undefined1 *)(local_14 + 0x265) = 1;
  ExceptionList = local_10;
  return local_14;
}


/* ==== 00444e10  FUN_00444e10  size=215 ==== */

void FUN_00444e10(void)

{
  undefined1 auStack_2c [20];
  undefined4 uStack_18;
  undefined1 *local_14;
  undefined1 *local_10;
  undefined1 *local_c;
  int local_8;
  
  uStack_18 = 0x444e21;
  FUN_00432d30();
  if (*(int *)(local_8 + 0x1e4) == 0x7727) {
    local_c = auStack_2c;
    FUN_004054a0("passiveobject/common/particle/shootingstarexp.ptl");
    FUN_004aa990(0,*(undefined4 *)(local_8 + 0x224),*(undefined4 *)(local_8 + 0x228),
                 *(undefined4 *)(local_8 + 0x22c));
    local_10 = auStack_2c;
    FUN_004054a0("passiveobject/common/particle/shootingstarexpetc.ptl");
    FUN_004aa990(0,*(undefined4 *)(local_8 + 0x224),*(undefined4 *)(local_8 + 0x228),
                 *(undefined4 *)(local_8 + 0x22c));
    local_14 = auStack_2c;
    FUN_004054a0("passiveobject/common/particle/shootingstarexpsmoke.ptl");
    FUN_004aa990(0,*(undefined4 *)(local_8 + 0x224),*(undefined4 *)(local_8 + 0x228),
                 *(undefined4 *)(local_8 + 0x22c));
  }
  return;
}


/* ==== 00445060  FUN_00445060  size=273 ==== */

undefined4 * FUN_00445060(undefined4 param_1)

{
  int iVar1;
  undefined1 auStack_44 [16];
  undefined4 uStack_34;
  undefined4 *puStack_30;
  uint uStack_2c;
  undefined4 local_28;
  undefined1 *local_24;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070f415;
  local_10 = ExceptionList;
  uStack_2c = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  puStack_30 = (undefined4 *)param_1;
  uStack_34 = 0x445094;
  FUN_0042fb60();
  local_8 = 0;
  *local_14 = FlydragonBouncer::vftable;
  *(undefined1 *)(local_14 + 0x268) = 0;
  puStack_30 = (undefined4 *)0x0;
  uStack_34 = 0x4450c4;
  puStack_30 = (undefined4 *)FUN_004274d0();
  uStack_34 = 0x4450ca;
  local_18 = FUN_005e9250();
  puStack_30 = &local_18;
  uStack_34 = 0x4450e2;
  FUN_0040d490();
  puStack_30 = (undefined4 *)0x1;
  uStack_34 = 0x4450f9;
  puStack_30 = (undefined4 *)FUN_004274d0();
  uStack_34 = 0x4450ff;
  local_1c = FUN_005e9250();
  puStack_30 = &local_1c;
  uStack_34 = 0x445117;
  FUN_0040d490();
  local_24 = auStack_44;
  local_28 = FUN_004054a0("passiveobject/monster/flydragon/particle/bouncer.ptl");
  local_8._0_1_ = 1;
  game_loop_helper_e9240();
  local_8 = (uint)local_8._1_3_ << 8;
  iVar1 = FUN_005b0aa0();
  local_14[0x266] = *(undefined4 *)(iVar1 + 0xb4);
  ExceptionList = local_10;
  return local_14;
}


/* ==== 004545f0  FUN_004545f0  size=1684 ==== */

void FUN_004545f0(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int in_ECX;
  undefined1 local_9c [4];
  undefined1 local_98 [4];
  undefined1 local_94 [4];
  undefined1 local_90 [4];
  undefined1 local_8c [4];
  undefined1 local_88 [4];
  undefined1 local_84 [4];
  int *local_80;
  undefined4 local_7c;
  undefined1 local_78 [4];
  undefined4 local_74;
  undefined1 local_70 [4];
  undefined4 local_6c;
  undefined1 local_68 [4];
  undefined1 local_64 [4];
  undefined4 local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int *local_48;
  undefined1 local_44 [4];
  int *local_40;
  undefined1 local_3c [4];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  int *local_30;
  undefined1 local_2c [4];
  int *local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int *local_18;
  int *local_14;
  int *local_10;
  char local_a;
  char local_9;
  int local_8;
  
  local_8 = in_ECX;
  if ((*(int *)(in_ECX + 0x1a4) == 100) && (*(int *)(in_ECX + 0x19c) == 1)) {
    if ((*(int *)(in_ECX + 0x18c) == 0) || (*(int *)(*(int *)(in_ECX + 0x18c) + 0x18c) == 0)) {
      game_get_state_ptr_d1520();
      piVar4 = (int *)FUN_004d58e0();
      local_4c = *piVar4 + 0x170;
      FUN_0042a9e0(local_2c);
      FUN_0042a9c0(local_64);
      while( true ) {
        cVar1 = FUN_0040d2d0(local_64);
        if (cVar1 == '\0') break;
        local_30 = (int *)FUN_0042a580();
        if ((*(int *)(*local_30 + 0x1e4) == 0x4e36) && (*(int *)(*local_30 + 0x18c) == local_8)) {
          *(undefined4 *)(*local_30 + 0x18c) = 0;
          break;
        }
        FUN_0042a560();
      }
      *(undefined4 *)(local_8 + 0x18c) = 0;
    }
    else {
      *(undefined4 *)(*(int *)(in_ECX + 0x18c) + 0x18c) = 0;
      *(undefined4 *)(in_ECX + 0x18c) = 0;
    }
  }
  if ((*(int *)(local_8 + 0x1a4) == 100) && (*(int *)(local_8 + 0x19c) == 2)) {
    if ((*(int *)(local_8 + 0x18c) == 0) || (*(int *)(*(int *)(local_8 + 0x18c) + 0x18c) == 0)) {
      game_get_state_ptr_d1520();
      piVar4 = (int *)FUN_004d58e0();
      local_50 = *piVar4 + 0x170;
      FUN_0042a9e0(local_34);
      FUN_0042a9c0(local_68);
      while( true ) {
        cVar1 = FUN_0040d2d0(local_68);
        if (cVar1 == '\0') break;
        local_18 = (int *)FUN_0042a580();
        if (((*(int *)(*local_18 + 0x1e4) == 0x4e31) || (*(int *)(*local_18 + 0x1e4) == 0x4e51)) &&
           (*(int *)(*local_18 + 0x18c) == local_8)) {
          *(undefined4 *)(*local_18 + 0x18c) = 0;
          break;
        }
        FUN_0042a560();
      }
      *(undefined4 *)(local_8 + 0x18c) = 0;
    }
    else {
      *(undefined4 *)(*(int *)(local_8 + 0x18c) + 0x18c) = 0;
      *(undefined4 *)(local_8 + 0x18c) = 0;
    }
  }
  if (((*(int *)(local_8 + 0x1a4) == 100) && (*(int *)(local_8 + 0x19c) == 3)) &&
     (*(int *)(local_8 + 0x18c) != 0)) {
    iVar2 = FUN_00401a90();
    if (iVar2 != 0) {
      FUN_004021b0(&local_1c);
      while( true ) {
        uVar3 = FUN_00402170(local_88);
        cVar1 = FUN_00426ed0(uVar3);
        if (cVar1 == '\0') break;
        piVar4 = (int *)FUN_0044ddc0();
        if (*piVar4 == local_8) {
          local_6c = local_1c;
          FUN_0044dea0(local_8c,local_1c);
          break;
        }
        FUN_0044dda0();
      }
    }
    *(undefined4 *)(local_8 + 0x18c) = 0;
  }
  game_get_state_ptr_d1520();
  piVar4 = (int *)FUN_004d58e0();
  local_54 = *piVar4 + 0x180;
  FUN_0042a9e0(local_38);
  FUN_0042a9c0(local_70);
  while( true ) {
    cVar1 = FUN_0040d2d0(local_70);
    if (cVar1 == '\0') break;
    local_10 = (int *)FUN_0042a580();
    if (*(int *)(*local_10 + 0xc) == 0x4e49) {
      local_9 = '\0';
      iVar2 = FUN_00401a90();
      if (iVar2 != 0) {
        FUN_004021b0(&local_20);
        while( true ) {
          uVar3 = FUN_00402170(local_90);
          cVar1 = FUN_00426ed0(uVar3);
          if (cVar1 == '\0') break;
          piVar4 = (int *)FUN_0044ddc0();
          if (*piVar4 == local_8) {
            local_74 = local_20;
            FUN_0044dea0(local_94,local_20);
            local_9 = '\x01';
            break;
          }
          FUN_0044dda0();
        }
      }
      if (local_9 != '\0') {
        *(undefined4 *)(local_8 + 0x18c) = 0;
        break;
      }
    }
    FUN_0042a560();
  }
  game_get_state_ptr_d1520();
  piVar4 = (int *)FUN_004d58e0();
  local_58 = *piVar4 + 0x170;
  FUN_0042a9e0(local_3c);
  FUN_0042a9c0(local_78);
  do {
    cVar1 = FUN_0040d2d0(local_78);
    if (cVar1 == '\0') {
LAB_00454b29:
      if ((*(int *)(local_8 + 0x1a4) == 300) && (*(int *)(local_8 + 0x1a8) < 3)) {
        local_5c = local_8 + 400;
        local_28 = (int *)game_loop_helper_018d0();
        local_80 = (int *)game_loop_helper_018b0();
        for (; local_28 != local_80; local_28 = local_28 + 1) {
          local_40 = local_28;
          *(undefined4 *)(*local_28 + 0x19c) = 0;
          (**(code **)(*(int *)*local_28 + 0x118))();
        }
        FUN_0040d5f0();
      }
      if ((*(int *)(local_8 + 0x1a4) == 100) && (*(int *)(local_8 + 0x18c) != 0)) {
        cVar1 = FUN_006352e0();
        if (cVar1 == '\0') {
          (**(code **)(**(int **)(local_8 + 0x18c) + 0x134))();
        }
      }
      local_60 = FUN_00516d20();
      FUN_0042a9e0(local_44);
      FUN_0042a9c0(local_84);
      while( true ) {
        cVar1 = FUN_0040d2d0(local_84);
        if (cVar1 == '\0') break;
        local_48 = (int *)FUN_0042a580();
        cVar1 = FUN_00427c60(*local_48 + 100,"character/swordman/effect/animation/frenzy/ball.ani");
        if ((cVar1 != '\0') && (*(int *)(*local_48 + 0x130) == local_8)) {
          *(undefined4 *)(*local_48 + 0x130) = 0;
        }
        FUN_0042a560();
      }
      return;
    }
    local_14 = (int *)FUN_0042a580();
    if (*(int *)(*local_14 + 0x1e4) == 0x4e49) {
      local_a = '\0';
      iVar2 = FUN_00401a90();
      if (iVar2 != 0) {
        FUN_004021b0(&local_24);
        while( true ) {
          uVar3 = FUN_00402170(local_98);
          cVar1 = FUN_00426ed0(uVar3);
          if (cVar1 == '\0') break;
          piVar4 = (int *)FUN_0044ddc0();
          if (*piVar4 == local_8) {
            local_7c = local_24;
            FUN_0044dea0(local_9c,local_24);
            local_a = '\x01';
            break;
          }
          FUN_0044dda0();
        }
      }
      if (local_a != '\0') {
        *(undefined4 *)(local_8 + 0x18c) = 0;
        goto LAB_00454b29;
      }
    }
    FUN_0042a560();
  } while( true );
}


/* ==== 00459730  FUN_00459730  size=9479 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00459730(int param_1)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  int *in_ECX;
  undefined1 local_1c4;
  undefined4 local_190;
  int local_188;
  int local_184;
  int *local_180;
  int local_178;
  int local_174;
  int local_16c;
  int local_168;
  int local_164;
  int local_15c;
  int local_134;
  undefined1 local_108 [256];
  uint local_8;
  
  local_8 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  if (in_ECX[0x2ae] == 0) {
    iVar5 = in_ECX[0x69];
    if (iVar5 < 0x105) {
      if (iVar5 == 0x104) {
        if ((in_ECX[0x6a] == 1) && (param_1 == 1)) {
          FUN_004054a0();
          (**(code **)(*in_ECX + 0x78))();
          FUN_004054a0();
          (**(code **)(*in_ECX + 0x78))();
          FUN_004054a0();
          (**(code **)(*in_ECX + 0x78))();
          FUN_004054a0();
          (**(code **)(*in_ECX + 0x78))();
        }
      }
      else {
        switch(iVar5) {
        case 0xc:
          piVar8 = (int *)(**(code **)(*in_ECX + 0x9c))();
          piVar3 = (int *)(**(code **)(*in_ECX + 0x94))();
          if (*piVar8 == *piVar3 + -1) {
            (**(code **)(*in_ECX + 0x138))();
            (**(code **)(*in_ECX + 0x8c))();
            (**(code **)(*in_ECX + 0x58))();
            FUN_0062fc30();
            (**(code **)(*in_ECX + 0x90))();
          }
          break;
        case 0xd:
          piVar8 = (int *)(**(code **)(*in_ECX + 0x9c))();
          piVar3 = (int *)(**(code **)(*in_ECX + 0x94))();
          if (*piVar8 == *piVar3 + -1) {
            (**(code **)(*in_ECX + 0x138))();
            (**(code **)(*in_ECX + 0x8c))();
            (**(code **)(*in_ECX + 0x58))();
            FUN_0062fc30();
            (**(code **)(*in_ECX + 0x90))();
          }
          break;
        case 0x59:
          piVar8 = (int *)(**(code **)(*in_ECX + 0x9c))();
          piVar3 = (int *)(**(code **)(*in_ECX + 0x94))();
          if ((*piVar3 / 2 < *piVar8) && (in_ECX[0x6a] == 1)) {
            (**(code **)(*in_ECX + 0x138))();
            (**(code **)(*in_ECX + 0x13c))();
            FUN_0047bd30();
            FUN_0047bd30();
            FUN_00631910();
            in_ECX[0x6a] = 2;
            if ((in_ECX[0x7d] == 1) && (*(char *)((int)in_ECX + 0xdee) != '\0')) {
              iVar5 = FUN_0047bcc0();
              in_ECX[0x8c] = iVar5 * 1000;
              iVar5 = FUN_0047bcc0();
              in_ECX[0x8f] = iVar5;
            }
            else if ((in_ECX[0x7d] == -1) && (*(char *)((int)in_ECX + 0xded) != '\0')) {
              iVar5 = FUN_0047bcc0();
              in_ECX[0x8c] = iVar5 * 1000;
              iVar5 = FUN_0047bcc0();
              in_ECX[0x8f] = iVar5;
            }
            FUN_004054a0();
            (**(code **)(*in_ECX + 0x78))();
            FUN_0042f340();
          }
          break;
        case 0xaa:
          if (in_ECX[0x6a] == 1) {
            if (param_1 == 2) {
              FUN_004054a0();
              iVar5 = (**(code **)(*in_ECX + 0x78))();
              (**(code **)(*in_ECX + 0x58))();
              FUN_004275e0();
              iVar6 = FUN_0040d680();
              *(undefined1 *)(iVar6 + 0x3e) = 1;
              iVar6 = FUN_0040d680();
              *(undefined1 *)(iVar6 + 0x3a) = 0;
              iVar6 = FUN_0040d680();
              *(undefined1 *)(iVar6 + 0x3e) = 1;
              iVar6 = FUN_0040d680();
              *(undefined1 *)(iVar6 + 0x3a) = 0;
              *(undefined4 *)(iVar5 + 0x114) = 0xffffff9c;
              *(undefined1 *)(iVar5 + 0x26) = 1;
              FUN_0044e460();
              puVar7 = (undefined4 *)game_get_flag_object_01a70();
              *puVar7 = 0;
              (**(code **)(*in_ECX + 0x58))();
              iVar5 = FUN_0062fc10();
              (**(code **)(*in_ECX + 0x58))();
              iVar6 = FUN_0062fc10();
              iVar5 = *(int *)(iVar5 + 0x44);
              iVar6 = *(int *)(iVar6 + 0x44);
              piVar8 = (int *)game_get_flag_object_01a70();
              *piVar8 = iVar5 + iVar6;
              FUN_0044e460();
              puVar7 = (undefined4 *)game_get_flag_object_01a70();
              *puVar7 = 0x3fc00000;
              puVar7 = (undefined4 *)game_get_flag_object_01a70();
              *puVar7 = 0x3fc00000;
            }
            if (param_1 == 5) {
              in_ECX[0x6a] = 2;
            }
          }
          break;
        case 0xd2:
          if (in_ECX[0x6a] == 1) {
            if (param_1 == 2) {
              FUN_004054a0();
              iVar5 = (**(code **)(*in_ECX + 0x78))();
              *(undefined4 *)(iVar5 + 0x90) = 1;
              iVar6 = FUN_0062fc30();
              *(undefined4 *)(iVar5 + 0x98) = *(undefined4 *)(iVar6 + 0x44);
              FUN_004054a0();
              iVar5 = (**(code **)(*in_ECX + 0x78))();
              *(undefined4 *)(iVar5 + 0x90) = 1;
              *(undefined4 *)(iVar5 + 0xe4) = 1;
              FUN_004054a0();
              iVar5 = (**(code **)(*in_ECX + 0x78))();
              (**(code **)(*in_ECX + 0x58))();
              FUN_004275e0();
              iVar6 = FUN_0040d680();
              *(undefined1 *)(iVar6 + 0x3e) = 1;
              iVar6 = FUN_0040d680();
              *(undefined1 *)(iVar6 + 0x3a) = 0;
              *(undefined4 *)(iVar5 + 0x114) = 0xffffff9c;
              *(undefined1 *)(iVar5 + 0x26) = 1;
              FUN_0044e460();
              puVar7 = (undefined4 *)game_get_flag_object_01a70();
              *puVar7 = 0;
              (**(code **)(*in_ECX + 0x58))();
              iVar5 = FUN_0062fc10();
              puVar7 = (undefined4 *)game_get_flag_object_01a70();
              *puVar7 = *(undefined4 *)(iVar5 + 0x44);
              FUN_0044e460();
              puVar7 = (undefined4 *)game_get_flag_object_01a70();
              *puVar7 = 0x3fc00000;
              puVar7 = (undefined4 *)game_get_flag_object_01a70();
              *puVar7 = 0x3fc00000;
            }
            if (param_1 == 3) {
              (**(code **)(*in_ECX + 0x13c))();
            }
            if (param_1 == 4) {
              in_ECX[0x6a] = 2;
            }
          }
        }
      }
    }
    else {
      switch(iVar5) {
      case 300:
        if (in_ECX[0x6a] == 0) {
          if (8 < param_1) {
            in_ECX[0x6a] = 1;
            iVar5 = FUN_00465f90();
            if ((iVar5 == 0) || (iVar5 = FUN_00465f90(), *(int *)(iVar5 + 4) != 0x4f)) {
              FUN_0047bcc0();
              (**(code **)(*in_ECX + 0x90))();
            }
            else {
              FUN_0047bcc0();
              (**(code **)(*in_ECX + 0x90))();
            }
            FUN_004054a0();
            iVar5 = (**(code **)(*in_ECX + 0x78))();
            *(int *)(iVar5 + 0x40) = in_ECX[0x7d] * 0x32 + *(int *)(iVar5 + 0x40);
            *(undefined4 *)(iVar5 + 0x48) = 0x5a;
            FUN_004054a0();
            iVar5 = (**(code **)(*in_ECX + 0x78))();
            *(int *)(iVar5 + 0x40) = in_ECX[0x7d] * 0x32 + *(int *)(iVar5 + 0x40);
            *(undefined4 *)(iVar5 + 0x48) = 0x5a;
            FUN_004054a0();
            iVar5 = (**(code **)(*in_ECX + 0x78))();
            *(int *)(iVar5 + 0x40) = in_ECX[0x7d] * 0x32 + *(int *)(iVar5 + 0x40);
            *(undefined4 *)(iVar5 + 0x48) = 0x5a;
            FUN_004054a0();
            iVar5 = (**(code **)(*in_ECX + 0x78))();
            *(int *)(iVar5 + 0x40) = in_ECX[0x7d] * 0x32 + *(int *)(iVar5 + 0x40);
            *(undefined4 *)(iVar5 + 0x48) = 0x5a;
            FUN_004054a0();
            iVar5 = (**(code **)(*in_ECX + 0x78))();
            *(int *)(iVar5 + 0x40) = in_ECX[0x7d] * 0x32 + *(int *)(iVar5 + 0x40);
            *(undefined4 *)(iVar5 + 0x48) = 0x5a;
            FUN_004054a0("character/swordman/effect/animation/bloodyrave/loop2.ani");
            iVar5 = (**(code **)(*in_ECX + 0x78))();
            *(int *)(iVar5 + 0x40) = in_ECX[0x7d] * 0x32 + *(int *)(iVar5 + 0x40);
            *(undefined4 *)(iVar5 + 0x48) = 0x5a;
            for (local_15c = 0; local_15c < 5; local_15c = local_15c + 1) {
              FUN_004054a0();
              iVar5 = (**(code **)(*in_ECX + 0x78))();
              *(int *)(iVar5 + 0x40) =
                   in_ECX[0x7d] * 0x32 + in_ECX[0x7d] * 0x2d * local_15c + *(int *)(iVar5 + 0x40);
              *(undefined4 *)(iVar5 + 0x48) = 0x5a;
              FUN_0062fd10();
            }
          }
        }
        else if ((in_ECX[0x6a] == 2) && (3 < param_1)) {
          in_ECX[0x6a] = 3;
          FUN_004054a0();
          FUN_004c3500();
          FUN_004054a0();
          FUN_004c3500();
          game_get_state_ptr_d1520();
          FUN_004edfb0();
          local_180 = (int *)game_loop_helper_018d0();
          piVar8 = (int *)game_loop_helper_018b0();
          for (; local_180 != piVar8; local_180 = local_180 + 1) {
            *(undefined4 *)(*local_180 + 0x19c) = 0;
            *(undefined4 *)(*local_180 + 0x1a4) = 0xffffffff;
          }
          iVar5 = FUN_0042f340();
          FUN_00427560();
          *(int *)(iVar5 + 0x34) = in_ECX[0x61];
          FUN_0040d5f0();
          in_ECX[0x61] = 0;
        }
        break;
      case 0x136:
        if ((in_ECX[0x6a] == 2) && (param_1 == 3)) {
          FUN_004054a0();
          FUN_004c3500();
          game_get_state_ptr_d1520();
          FUN_004edfb0();
          FUN_004054a0();
          iVar5 = (**(code **)(*in_ECX + 0x78))();
          *(int *)(iVar5 + 0x40) = in_ECX[0x7d] * 0x78;
          FUN_0042f340();
        }
        break;
      case 0x140:
        piVar8 = (int *)(**(code **)(*in_ECX + 0x94))();
        if (((((param_1 == *piVar8 + -1) && (in_ECX[0x245] != 0x1e)) &&
             ((in_ECX[0x245] != 0x22 && ((in_ECX[0x245] != 0x25 && (in_ECX[0x245] != 0x27)))))) &&
            (in_ECX[0x245] != 0x2a)) && (piVar8 = (int *)game_get_player_or_session_blob(), in_ECX == piVar8)) {
          FUN_006ca610();
          FUN_005d9da0();
          FUN_0044e440();
          FUN_0040d4b0();
          FUN_0040d680();
          FUN_0040d840();
          iVar5 = FUN_0044e440();
          FUN_0040d4b0();
          iVar6 = FUN_0040d680();
          *(undefined1 *)(iVar6 + 0x20) = *(undefined1 *)(iVar5 + 0x18);
          iVar5 = FUN_006ca780();
          if (iVar5 == 0) {
            cVar2 = FUN_00427c60();
            if (cVar2 == '\0') {
              local_1c4 = 0x47;
            }
            else {
              local_1c4 = 0x3c;
            }
            FUN_0040d4b0();
            iVar5 = FUN_0040d680();
            *(undefined1 *)(iVar5 + 0x20) = local_1c4;
            cVar2 = FUN_00427c60();
            if (cVar2 == '\0') {
              local_190 = 5;
            }
            else {
              local_190 = 4;
            }
            iVar5 = FUN_004274d0();
            *(undefined4 *)(iVar5 + 0x10) = local_190;
          }
          else {
            FUN_0040d4b0();
            iVar5 = FUN_0040d680();
            *(undefined1 *)(iVar5 + 0x20) = 0x88;
            iVar5 = FUN_004274d0();
            *(undefined4 *)(iVar5 + 0x10) = 7;
          }
        }
        break;
      case 400:
        if (param_1 == 1) {
          FUN_004054a0();
          FUN_004c3570();
        }
        break;
      case 0x1c2:
        local_134 = -1;
        if ((((param_1 == 3) && (in_ECX[0x6a] == 0)) && (in_ECX[0x244] == 0x15)) &&
           (in_ECX[0x245] == 0x33)) {
          FUN_004054a0();
          FUN_004c3500();
          in_ECX[0x6a] = 1;
          local_164 = game_loop_helper_018d0();
          iVar5 = game_loop_helper_018b0();
          for (; local_164 != iVar5; local_164 = local_164 + 4) {
            FUN_004d1b30();
            iVar6 = FUN_005174d0();
            iVar4 = FUN_005e9570();
            if (iVar4 != 0) {
              FUN_005e9570();
              FUN_00426840();
              *(undefined1 *)(iVar6 + 0x54) = 0;
              *(int *)(iVar6 + 0x4c) = in_ECX[0x7d];
              *(undefined4 *)(iVar6 + 0x110) = 3;
              *(undefined4 *)(iVar6 + 0x114) = 0;
              *(undefined1 *)(iVar6 + 0xe9) = 1;
              *(undefined1 *)(iVar6 + 0xe8) = 1;
              *(undefined4 *)(iVar6 + 0x88) = 0;
              FUN_0044de80();
            }
          }
          (**(code **)(*in_ECX + 0x138))();
          FUN_0042f340();
        }
        else if (((param_1 == 3) && (in_ECX[0x6a] == 1)) &&
                ((in_ECX[0x244] == 0x15 && (in_ECX[0x245] == 0x35)))) {
          in_ECX[0x6a] = 2;
          local_134 = 1;
        }
        else if (((param_1 == 3) && (in_ECX[0x6a] == 2)) &&
                ((in_ECX[0x244] == 0x15 && (in_ECX[0x245] == 0x34)))) {
          in_ECX[0x6a] = 3;
          local_134 = 3;
        }
        else if ((((param_1 == 3) && (in_ECX[0x6a] == 3)) && (in_ECX[0x244] == 0x15)) &&
                (in_ECX[0x245] == 0x36)) {
          in_ECX[0x6a] = 4;
          local_134 = 2;
        }
        else if (((param_1 == 3) && (in_ECX[0x6a] == 4)) &&
                ((in_ECX[0x244] == 0x15 && (in_ECX[0x245] == 0x35)))) {
          in_ECX[0x6a] = 5;
          local_134 = 0;
        }
        else if (((param_1 == 3) && (in_ECX[0x6a] == 5)) &&
                ((in_ECX[0x244] == 0x15 && (in_ECX[0x245] == 0x33)))) {
          in_ECX[0x6a] = 6;
          local_134 = 3;
        }
        else if ((((param_1 == 3) && (in_ECX[0x6a] == 6)) && (in_ECX[0x244] == 0x15)) &&
                (in_ECX[0x245] == 0x36)) {
          in_ECX[0x6a] = 7;
          local_134 = 1;
        }
        else if (((param_1 == 3) && (in_ECX[0x6a] == 7)) &&
                ((in_ECX[0x244] == 0x15 && (in_ECX[0x245] == 0x34)))) {
          in_ECX[0x6a] = 8;
          local_134 = 0;
        }
        else if (((param_1 == 3) && (in_ECX[0x6a] == 8)) &&
                ((in_ECX[0x244] == 0x15 && (in_ECX[0x245] == 0x33)))) {
          in_ECX[0x6a] = 9;
          local_134 = 2;
        }
        else if ((((param_1 == 3) && (in_ECX[0x6a] == 9)) && (in_ECX[0x244] == 0x15)) &&
                (in_ECX[0x245] == 0x35)) {
          in_ECX[0x6a] = 10;
          local_168 = game_loop_helper_018d0();
          iVar5 = game_loop_helper_018b0();
          for (; local_168 != iVar5; local_168 = local_168 + 4) {
            FUN_005e9570();
            (**(code **)(*in_ECX + 0xd8))();
          }
          local_16c = game_loop_helper_018d0();
          iVar5 = game_loop_helper_018b0();
          for (; local_16c != iVar5; local_16c = local_16c + 4) {
            FUN_004d1b30();
            iVar6 = FUN_005174d0();
            FUN_005e9570();
            FUN_00426840();
            *(undefined1 *)(iVar6 + 0x54) = 0;
            *(int *)(iVar6 + 0x4c) = in_ECX[0x7d];
            *(undefined4 *)(iVar6 + 0x110) = 3;
            *(undefined4 *)(iVar6 + 0x114) = 0;
            *(undefined1 *)(iVar6 + 0xe9) = 1;
            *(undefined1 *)(iVar6 + 0xe8) = 1;
            *(undefined4 *)(iVar6 + 0x88) = 0;
            FUN_0044de80();
          }
          bVar1 = false;
          cVar2 = FUN_004679f0();
          if (((cVar2 != '\0') || (cVar2 = FUN_00467950(), cVar2 != '\0')) &&
             ((char)in_ECX[0x37c] != '\0')) {
            bVar1 = true;
          }
          if (bVar1) {
            FUN_004054a0();
            FUN_004c3500();
            (**(code **)(*in_ECX + 0x138))();
            FUN_0042f340();
          }
          else {
            FUN_004054a0();
            FUN_004c3500();
            (**(code **)(*in_ECX + 0x138))();
            (**(code **)(*in_ECX + 0x13c))();
            FUN_004054a0();
            (**(code **)(*in_ECX + 0x78))();
          }
        }
        else if (((param_1 == 3) && (in_ECX[0x6a] == 10)) &&
                ((in_ECX[0x244] == 0x15 && (in_ECX[0x245] == 0x34)))) {
          in_ECX[0x6a] = 0xb;
          local_134 = 3;
        }
        else if (((in_ECX[0x6a] == 10) && (in_ECX[0x244] == 0x15)) && (in_ECX[0x245] == 0x37)) {
          if (param_1 == 5) {
            (**(code **)(*in_ECX + 0x13c))();
          }
          else if (param_1 == 6) {
            FUN_004054a0();
            (**(code **)(*in_ECX + 0x78))();
            iVar5 = FUN_0042f340();
            if ((char)in_ECX[0x37c] != '\0') {
              *(undefined1 *)(iVar5 + 0x30) = 1;
            }
            if (((char)in_ECX[0x37b] != '\0') || (*(char *)((int)in_ECX + 0xdeb) != '\0')) {
              iVar6 = FUN_00470840();
              if (iVar6 == 1) {
                iVar6 = FUN_0047bcc0();
                *(int *)(iVar5 + 0x34) = iVar6 / 3;
              }
              else {
                iVar6 = FUN_00470840();
                if (iVar6 == -1) {
                  iVar6 = FUN_0047bcc0();
                  *(int *)(iVar5 + 0x34) = -iVar6 / 3;
                }
                else {
                  *(undefined4 *)(iVar5 + 0x34) = 0;
                }
              }
            }
          }
        }
        else if ((((param_1 == 3) && (in_ECX[0x6a] == 0xb)) && (in_ECX[0x244] == 0x15)) &&
                (in_ECX[0x245] == 0x36)) {
          in_ECX[0x6a] = 0xc;
          local_134 = 2;
        }
        else if (((param_1 == 3) && (in_ECX[0x6a] == 0xc)) &&
                ((in_ECX[0x244] == 0x15 && (in_ECX[0x245] == 0x35)))) {
          local_134 = 0;
          in_ECX[0x6a] = 0xd;
        }
        else if (((param_1 == 3) && (in_ECX[0x6a] == 0xd)) &&
                ((in_ECX[0x244] == 0x15 && (in_ECX[0x245] == 0x33)))) {
          local_134 = 3;
          in_ECX[0x6a] = 0xe;
        }
        else if ((((param_1 == 3) && (in_ECX[0x6a] == 0xe)) && (in_ECX[0x244] == 0x15)) &&
                (in_ECX[0x245] == 0x36)) {
          local_134 = 1;
          in_ECX[0x6a] = 0xf;
        }
        else if (((param_1 == 3) && (in_ECX[0x6a] == 0xf)) &&
                ((in_ECX[0x244] == 0x15 && (in_ECX[0x245] == 0x34)))) {
          local_134 = 0;
          in_ECX[0x6a] = 0x10;
        }
        else if (((param_1 == 3) && (in_ECX[0x6a] == 0x10)) &&
                ((in_ECX[0x244] == 0x15 && (in_ECX[0x245] == 0x33)))) {
          local_134 = 2;
          in_ECX[0x6a] = 0x11;
        }
        else if ((((param_1 == 3) && (in_ECX[0x6a] == 0x11)) && (in_ECX[0x244] == 0x15)) &&
                (in_ECX[0x245] == 0x35)) {
          FUN_004054a0();
          FUN_004c3500();
          in_ECX[0x6a] = 0x12;
          local_174 = game_loop_helper_018d0();
          iVar5 = game_loop_helper_018b0();
          for (; local_174 != iVar5; local_174 = local_174 + 4) {
            FUN_005e9570();
            (**(code **)(*in_ECX + 0xd8))();
          }
          local_188 = game_loop_helper_018d0();
          iVar5 = game_loop_helper_018b0();
          for (; local_188 != iVar5; local_188 = local_188 + 4) {
            FUN_004d1b30();
            iVar6 = FUN_005174d0();
            FUN_005e9570();
            FUN_00426840();
            *(undefined1 *)(iVar6 + 0x54) = 0;
            *(int *)(iVar6 + 0x4c) = in_ECX[0x7d];
            *(undefined4 *)(iVar6 + 0x110) = 3;
            *(undefined4 *)(iVar6 + 0x114) = 0;
            *(undefined1 *)(iVar6 + 0xe9) = 1;
            *(undefined1 *)(iVar6 + 0xe8) = 1;
            *(undefined4 *)(iVar6 + 0x88) = 0;
            FUN_0044de80();
          }
          (**(code **)(*in_ECX + 0x138))();
          (**(code **)(*in_ECX + 0x13c))();
          FUN_004054a0();
          (**(code **)(*in_ECX + 0x78))();
        }
        else if (((in_ECX[0x6a] == 0x12) && (in_ECX[0x244] == 0x15)) && (in_ECX[0x245] == 0x37)) {
          if (param_1 == 5) {
            (**(code **)(*in_ECX + 0x13c))();
          }
          else if (param_1 == 6) {
            FUN_004054a0();
            (**(code **)(*in_ECX + 0x78))();
            iVar5 = FUN_0042f340();
            if ((char)in_ECX[0x37c] != '\0') {
              *(undefined1 *)(iVar5 + 0x30) = 1;
            }
            if (((char)in_ECX[0x37b] != '\0') || (*(char *)((int)in_ECX + 0xdeb) != '\0')) {
              iVar6 = FUN_00470840();
              if (iVar6 == 1) {
                iVar6 = FUN_0047bcc0();
                *(int *)(iVar5 + 0x34) = iVar6 / 3;
              }
              else {
                iVar6 = FUN_00470840();
                if (iVar6 == -1) {
                  iVar6 = FUN_0047bcc0();
                  *(int *)(iVar5 + 0x34) = -iVar6 / 3;
                }
              }
            }
          }
        }
        if (local_134 != -1) {
          _memset(local_108,0,0x100);
          FUN_00414e80();
          FUN_004054a0();
          FUN_004c3500();
          local_184 = game_loop_helper_018d0();
          iVar5 = game_loop_helper_018b0();
          for (; local_184 != iVar5; local_184 = local_184 + 4) {
            FUN_005e9570();
            (**(code **)(*in_ECX + 0xd8))();
          }
          local_178 = game_loop_helper_018d0();
          iVar5 = game_loop_helper_018b0();
          for (; local_178 != iVar5; local_178 = local_178 + 4) {
            FUN_004d1b30();
            iVar6 = FUN_005174d0();
            FUN_005e9570();
            FUN_00426840();
            *(undefined1 *)(iVar6 + 0x54) = 0;
            *(int *)(iVar6 + 0x4c) = in_ECX[0x7d];
            *(undefined4 *)(iVar6 + 0x110) = 3;
            *(undefined4 *)(iVar6 + 0x114) = 0;
            *(undefined1 *)(iVar6 + 0xe9) = 1;
            *(undefined1 *)(iVar6 + 0xe8) = 1;
            *(undefined4 *)(iVar6 + 0x88) = 0;
            FUN_0044de80();
          }
          (**(code **)(*in_ECX + 0x138))();
          FUN_0042f340();
        }
      }
    }
  }
  return;
}


/* ==== 00464150  FUN_00464150  size=920 ==== */

void FUN_00464150(int param_1,int param_2)

{
  float fVar1;
  char cVar2;
  int *piVar3;
  float *pfVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *in_ECX;
  int *local_c;
  
  cVar2 = FUN_00427c60(param_1 + 100,"character/swordman/animation/hopsmash.ani");
  if (((((cVar2 != '\0') ||
        (cVar2 = FUN_00427c60(param_1 + 100,"character/swordman/animation/outragebreakslash.ani"),
        cVar2 != '\0')) ||
       (cVar2 = FUN_00427c60(param_1 + 100,"character/swordman/animation/rapidmoveslashmove1.ani"),
       cVar2 != '\0')) ||
      ((cVar2 = FUN_00427c60(param_1 + 100,"character/swordman/animation/rapidmoveslashmove2.ani"),
       cVar2 != '\0' ||
       (cVar2 = FUN_00427c60(param_1 + 100,"character/swordman/animation/illusionslash1.ani"),
       cVar2 != '\0')))) &&
     ((cVar2 = game_frame_should_continue(), cVar2 == '\0' && (cVar2 = game_frame_should_continue(), cVar2 == '\0')))) {
    in_ECX[0x16] = -1;
    piVar3 = (int *)game_get_flag_object_01a70(0);
    *piVar3 = *piVar3 + param_2;
    pfVar4 = (float *)game_get_flag_object_01a70(1);
    fVar1 = *pfVar4;
    piVar3 = (int *)game_get_flag_object_01a70(1);
    piVar5 = (int *)game_get_flag_object_01a70(0);
    iVar7 = *piVar3;
    iVar8 = *piVar5;
    piVar3 = (int *)game_get_flag_object_01a70(1);
    iVar9 = *piVar3;
    pfVar4 = (float *)game_get_flag_object_01a70(0);
    *pfVar4 = ((fVar1 - 1.0) * (float)(iVar7 - iVar8)) / (float)iVar9 + 1.0;
    puVar6 = (undefined4 *)game_get_flag_object_01a70(0);
    FUN_0062fd10(*puVar6);
    piVar3 = (int *)game_get_flag_object_01a70(0);
    piVar5 = (int *)game_get_flag_object_01a70(1);
    if ((*piVar5 <= *piVar3) || (pfVar4 = (float *)game_get_flag_object_01a70(0), *pfVar4 <= 1.0)) {
      (**(code **)(*in_ECX + 0xd8))(param_1);
      in_ECX[0x16] = 0;
    }
  }
  iVar7 = FUN_004277a0("character/swordman/effect/animation/wavemark/addmark",0);
  if (iVar7 != -1) {
    for (local_c = in_ECX + 0x28a; local_c != in_ECX + 0x2a3; local_c = local_c + 5) {
      if (*(int *)(param_1 + 0xd0) == *local_c) {
        *(int *)(param_1 + 0x40) = local_c[3];
        *(int *)(param_1 + 0x44) = local_c[4];
      }
    }
  }
  if (*(int *)(param_1 + 0xa0) == 1) {
    if (*(char *)(param_1 + 0xbc) == '\0') {
      iVar7 = FUN_0062fc30();
      if (*(int *)(param_1 + 0x98) <= *(int *)(iVar7 + 0x44) / 2) {
        *(undefined1 *)(param_1 + 0xbc) = 1;
      }
    }
    else if (*(int *)(param_1 + 0xfc) < 1) {
      *(undefined1 *)(param_1 + 0x9c) = 1;
    }
    else {
      iVar7 = *(int *)(param_1 + 0x98);
      iVar8 = FUN_0062fc30();
      iVar8 = *(int *)(iVar8 + 0x44);
      iVar9 = FUN_0062fc30();
      *(char *)(iVar9 + 0x3b) = (char)((iVar7 * 0xff) / (iVar8 / 2 + 1));
      FUN_0062faf0(param_2);
    }
  }
  else if ((((*(int *)(param_1 + 0xa0) == 2) || (*(int *)(param_1 + 0xa0) == 3)) ||
           (*(int *)(param_1 + 0xa0) == 4)) && (*(char *)(param_1 + 0xbc) != '\x01')) {
    if (*(int *)(param_1 + 0xfc) < 1) {
      *(undefined4 *)(param_1 + 0xfc) = 0;
      *(undefined1 *)(param_1 + 0xbc) = 1;
    }
    else {
      FUN_0062faf0(param_2);
    }
  }
  return;
}


/* ==== 004644f0  FUN_004644f0  size=2879 ==== */

void FUN_004644f0(int param_1)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  int *in_ECX;
  float10 fVar8;
  int local_18;
  
  if ((param_1 != 0) && (iVar2 = FUN_004277a0(), iVar2 == -1)) {
    cVar1 = FUN_00427c60();
    if ((cVar1 == '\0') && (cVar1 = FUN_00427c60(), cVar1 == '\0')) {
      cVar1 = FUN_00427c60();
      if ((((cVar1 == '\0') && (cVar1 = FUN_00427c60(), cVar1 == '\0')) &&
          (cVar1 = FUN_00427c60(), cVar1 == '\0')) && (cVar1 = FUN_00427c60(), cVar1 == '\0')) {
        cVar1 = FUN_00427c60();
        if ((cVar1 == '\0') && (cVar1 = FUN_00427c60(), cVar1 == '\0')) {
          cVar1 = FUN_00427c60();
          if (cVar1 == '\0') {
            cVar1 = FUN_00427c60();
            if (cVar1 == '\0') {
              cVar1 = FUN_00427c60();
              if (cVar1 == '\0') {
                cVar1 = FUN_00427c60();
                if (cVar1 == '\0') {
                  cVar1 = FUN_00427c60();
                  if (cVar1 == '\0') {
                    cVar1 = FUN_00427c60();
                    if (cVar1 == '\0') {
                      cVar1 = FUN_00427c60();
                      if (cVar1 == '\0') {
                        cVar1 = FUN_00427c60();
                        if (cVar1 != '\0') {
                          FUN_006315c0();
                        }
                      }
                      else {
                        iVar2 = FUN_0042f340();
                        *(undefined4 *)(iVar2 + 0x24) = 100;
                        *(int **)(iVar2 + 0x68) = in_ECX;
                      }
                    }
                    else {
                      FUN_004054a0();
                      FUN_004aad60();
                    }
                  }
                  else {
                    in_ECX[0x6a] = 3;
                    FUN_00635750();
                    FUN_0047bcc0();
                    FUN_0040d490();
                    FUN_0047bcc0();
                    (**(code **)(*in_ECX + 0x90))();
                    if ((char)in_ECX[0x2a3] == '\0') {
                      local_18 = FUN_0042f340();
                    }
                    else {
                      local_18 = FUN_0042f340();
                    }
                    if (in_ECX[99] != 0) {
                      FUN_004054a0();
                      iVar2 = FUN_006356a0();
                      if (iVar2 != 0) {
                        fVar8 = (float10)FUN_0047bd30();
                        *(int *)(local_18 + 0x2c) =
                             (int)((float)*(int *)(local_18 + 0x2c) + (float)fVar8);
                      }
                      *(int *)(local_18 + 0x68) = in_ECX[99];
                      in_ECX[99] = 0;
                    }
                  }
                }
                else {
                  FUN_004054a0();
                  iVar2 = (**(code **)(*in_ECX + 0x78))();
                  *(undefined4 *)(iVar2 + 0x90) = 5;
                  iVar7 = FUN_0040d680();
                  *(undefined4 *)(iVar2 + 0x98) = *(undefined4 *)(iVar7 + 0x44);
                }
              }
              else {
                FUN_004054a0();
                iVar2 = (**(code **)(*in_ECX + 0x78))();
                *(undefined4 *)(iVar2 + 0x90) = 5;
                iVar7 = FUN_0040d680();
                *(undefined4 *)(iVar2 + 0x98) = *(undefined4 *)(iVar7 + 0x44);
              }
            }
            else {
              FUN_0042f250();
              FUN_0044e460();
              FUN_0047bd30();
              uVar5 = thunk_FUN_006e5750();
              puVar6 = (undefined4 *)game_get_flag_object_01a70();
              *puVar6 = uVar5;
              FUN_0047bd30();
              uVar5 = thunk_FUN_006e5750();
              puVar6 = (undefined4 *)game_get_flag_object_01a70();
              *puVar6 = uVar5;
              fVar8 = (float10)FUN_0047bd30();
              piVar4 = (int *)game_get_flag_object_01a70();
              *piVar4 = (int)((float)fVar8 * 1000.0);
              FUN_0047bd30();
              uVar5 = thunk_FUN_006e5750();
              puVar6 = (undefined4 *)game_get_flag_object_01a70();
              *puVar6 = uVar5;
              FUN_004053a0();
            }
          }
          else {
            FUN_004054a0();
            piVar4 = (int *)FUN_0063bda0();
            *piVar4 = *piVar4 + *(int *)(param_1 + 0xd0);
            FUN_00657c10();
          }
        }
        else {
          FUN_004054a0();
          FUN_00630790();
          FUN_0063c3f0();
          FUN_004054a0();
          FUN_00630790();
          FUN_0063c3f0();
          FUN_004054a0();
          iVar2 = FUN_00630790();
          if (iVar2 == 0) {
            FUN_004054a0();
            iVar2 = FUN_00630790();
            if (iVar2 == 0) {
              FUN_004054a0();
              iVar2 = (**(code **)(*in_ECX + 0x78))();
              *(undefined1 *)(iVar2 + 0x25) = 0;
              FUN_004054a0();
              iVar2 = (**(code **)(*in_ECX + 0x78))();
              *(undefined1 *)(iVar2 + 0x25) = 0;
              return;
            }
          }
        }
      }
      else {
        FUN_004054a0();
        FUN_00630790();
        FUN_0063c3f0();
        FUN_004054a0();
        FUN_00630790();
        FUN_0063c3f0();
        FUN_004054a0();
        FUN_00630790();
        FUN_0063c3f0();
        FUN_004054a0();
        FUN_00630790();
        FUN_0063c3f0();
        FUN_004054a0();
        iVar2 = FUN_00630790();
        if (iVar2 == 0) {
          FUN_004054a0();
          iVar2 = FUN_00630790();
          if (iVar2 == 0) {
            FUN_004054a0();
            iVar2 = FUN_00630790();
            if (iVar2 == 0) {
              FUN_004054a0();
              iVar2 = FUN_00630790();
              if (iVar2 == 0) {
                FUN_004054a0();
                iVar2 = (**(code **)(*in_ECX + 0x78))();
                *(undefined1 *)(iVar2 + 0x25) = 0;
                FUN_004054a0();
                iVar2 = (**(code **)(*in_ECX + 0x78))();
                *(undefined1 *)(iVar2 + 0x25) = 0;
                FUN_004054a0();
                iVar2 = (**(code **)(*in_ECX + 0x78))();
                *(undefined1 *)(iVar2 + 0x25) = 0;
                FUN_004054a0("character/swordman/effect/animation/keiga/loop4.ani");
                iVar2 = (**(code **)(*in_ECX + 0x78))();
                *(undefined1 *)(iVar2 + 0x25) = 0;
                return;
              }
            }
          }
        }
      }
    }
    else {
      FUN_004054a0();
      FUN_00630790();
      FUN_0063c3f0();
      FUN_004054a0();
      FUN_00630790();
      FUN_0063c3f0();
      FUN_004054a0();
      iVar2 = FUN_00630790();
      if (iVar2 == 0) {
        FUN_004054a0();
        iVar2 = FUN_00630790();
        if (iVar2 == 0) {
          FUN_004054a0();
          iVar2 = (**(code **)(*in_ECX + 0x78))();
          *(undefined1 *)(iVar2 + 0xe0) = 1;
          FUN_004054a0();
          iVar2 = (**(code **)(*in_ECX + 0x78))();
          *(undefined1 *)(iVar2 + 0xe0) = 1;
          FUN_004021b0();
          while( true ) {
            FUN_00402170();
            cVar1 = FUN_00426ed0();
            if (cVar1 == '\0') break;
            FUN_0044ddc0();
            puVar3 = (undefined1 *)FUN_005e9570();
            if (puVar3 != (undefined1 *)0x0) {
              *puVar3 = 1;
            }
            FUN_0044dda0();
          }
          FUN_004054a0();
          FUN_004c3500();
          return;
        }
      }
    }
    FUN_0063c3f0();
  }
  return;
}


/* ==== 00465db0  FUN_00465db0  size=370 ==== */

void FUN_00465db0(void)

{
  int in_ECX;
  undefined1 auStack_5c [20];
  undefined4 uStack_48;
  undefined1 *local_44;
  undefined1 *local_40;
  undefined1 *local_3c;
  undefined1 *local_38;
  undefined1 *local_34;
  undefined1 *local_30;
  undefined1 *local_2c;
  undefined1 *local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  if (*(char *)(in_ECX + 0xa8f) != '\0') {
    *(undefined1 *)(in_ECX + 0xa8f) = 0;
    uStack_48 = 0x465dde;
    FUN_00635730();
    local_20 = auStack_5c;
    FUN_004054a0("character/swordman/effect/animation/ghoststep/stay1.ani");
    local_c = FUN_00630790();
    if (local_c != 0) {
      local_24 = auStack_5c;
      FUN_004054a0("character/swordman/effect/animation/ghoststep/stay2.ani");
      local_10 = FUN_00630790();
      if (local_10 != 0) {
        local_28 = auStack_5c;
        FUN_004054a0("character/swordman/effect/animation/ghoststep/stay1.ani");
        FUN_00630660();
        local_2c = auStack_5c;
        FUN_004054a0("character/swordman/effect/animation/ghoststep/stay2.ani");
        FUN_00630660();
        return;
      }
    }
    local_30 = auStack_5c;
    FUN_004054a0("character/swordman/effect/animation/ghoststep/ghost1.ani");
    local_14 = FUN_00630790();
    if (local_14 != 0) {
      local_34 = auStack_5c;
      FUN_004054a0("character/swordman/effect/animation/ghoststep/ghost2.ani");
      local_18 = FUN_00630790();
      if (local_18 != 0) {
        local_38 = auStack_5c;
        FUN_004054a0("character/swordman/effect/animation/ghoststep/ghost3.ani");
        local_1c = FUN_00630790();
        if (local_1c != 0) {
          local_3c = auStack_5c;
          FUN_004054a0("character/swordman/effect/animation/ghoststep/ghost1.ani");
          FUN_00630660();
          local_40 = auStack_5c;
          FUN_004054a0("character/swordman/effect/animation/ghoststep/ghost2.ani");
          FUN_00630660();
          local_44 = auStack_5c;
          FUN_004054a0("character/swordman/effect/animation/ghoststep/ghost3.ani");
          FUN_00630660();
        }
      }
    }
  }
  return;
}


/* ==== 00466700  FUN_00466700  size=136 ==== */

void FUN_00466700(void)

{
  undefined1 auStack_2c [20];
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined1 *local_c;
  CMFCColorMenuButton *local_8;
  
  uStack_10 = 0x466711;
  FUN_00466500();
  uStack_10 = 0x466719;
  CMFCColorMenuButton::Initialize(local_8);
  uStack_10 = 0;
  uStack_14 = 7;
  uStack_18 = 0x46672d;
  (**(code **)(*(int *)local_8 + 0x138))();
  *(int *)(local_8 + 0x1a4) = 3;
  *(int *)(local_8 + 0x1a8) = 0;
  *(int *)(local_8 + 0x244) = -0x5dc;
  *(int *)(local_8 + 0x238) = *(int *)(local_8 + 0x734) * 1000;
  local_c = auStack_2c;
  FUN_004054a0("sounds/char/swordman/sm_jump.wav");
  FUN_004c3500();
  return;
}


/* ==== 00466790  FUN_00466790  size=2676 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00466790(void)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  CMFCColorMenuButton *pCVar4;
  CMFCColorMenuButton *in_ECX;
  int iVar5;
  undefined1 auStack_12c [4];
  undefined4 uStack_128;
  undefined1 *puStack_124;
  CMFCColorMenuButton *pCStack_120;
  undefined *puStack_11c;
  char *pcStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  CMFCColorMenuButton *pCStack_108;
  CMFCColorMenuButton *pCStack_104;
  CMFCColorMenuButton *pCStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  uint uStack_f4;
  undefined1 local_c8 [4];
  undefined4 local_c4;
  undefined1 *local_c0;
  undefined1 local_bc [4];
  undefined1 *local_b8;
  undefined1 *local_b4;
  undefined1 local_b0 [4];
  undefined4 local_ac;
  undefined1 *local_a8;
  undefined4 local_a4;
  undefined1 *local_a0;
  undefined1 *local_9c;
  undefined1 *local_98;
  undefined1 local_94 [4];
  undefined4 local_90;
  undefined1 *local_8c;
  undefined1 local_88 [4];
  undefined4 local_84;
  undefined1 *local_80;
  undefined1 *local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  char local_3d;
  int local_3c;
  undefined4 local_38;
  int local_34;
  CMFCColorMenuButton *local_30;
  function<void___cdecl(void)> local_2c [24];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00711254;
  local_10 = ExceptionList;
  uStack_f4 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_30 = in_ECX;
  local_14 = uStack_f4;
  if (in_ECX[0x994] != (CMFCColorMenuButton)0x0) {
    uStack_f8 = 0x4667d9;
    CMFCColorMenuButton::Initialize(in_ECX);
    uStack_f8 = 0;
    uStack_fc = 0x10;
    pCStack_100 = (CMFCColorMenuButton *)0x4667ed;
    (**(code **)(*(int *)local_30 + 0x138))();
    *(int *)(local_30 + 0x1a4) = 200;
    pCStack_100 = (CMFCColorMenuButton *)&local_38;
    pCStack_104 = (CMFCColorMenuButton *)0x466803;
    game_get_state_ptr_d1520();
    pCStack_104 = (CMFCColorMenuButton *)0x466810;
    FUN_004021b0();
    while( true ) {
      pCStack_100 = (CMFCColorMenuButton *)local_bc;
      pCStack_104 = (CMFCColorMenuButton *)0x46681d;
      game_get_state_ptr_d1520();
      pCStack_104 = (CMFCColorMenuButton *)0x46682a;
      pCStack_100 = (CMFCColorMenuButton *)FUN_00402170();
      pCStack_104 = (CMFCColorMenuButton *)0x466833;
      cVar1 = FUN_00426ed0();
      if (cVar1 == '\0') {
        ExceptionList = local_10;
        return;
      }
      pCStack_100 = (CMFCColorMenuButton *)0x466846;
      piVar2 = (int *)FUN_0044ddc0();
      local_34 = *piVar2;
      if (*(CMFCColorMenuButton **)(local_34 + 0x9c) == local_30) break;
      pCStack_100 = (CMFCColorMenuButton *)0x466f15;
      FUN_0044dda0();
    }
    if (*(int *)(local_34 + 0xc) == 0) {
      local_44 = *(int *)(local_34 + 0x10);
      pCStack_100 = (CMFCColorMenuButton *)0x0;
      pCStack_104 = (CMFCColorMenuButton *)0x466883;
      iVar3 = FUN_00405270();
      if (*(int *)(iVar3 + 4) == 0xf63c) {
        pCStack_100 = (CMFCColorMenuButton *)0x0;
        pCStack_104 = (CMFCColorMenuButton *)0x46689c;
        iVar3 = FUN_00405270();
        if (0 < *(int *)(iVar3 + 0x20)) {
          local_44 = (int)((float)local_44 * 1.05);
        }
      }
      if (local_30[0xdb8] == (CMFCColorMenuButton)0x0) {
        iVar5 = *(int *)(local_30 + 0xac8) + local_44;
        pCStack_100 = *(CMFCColorMenuButton **)(local_30 + 0x1fc);
        pCStack_104 = (CMFCColorMenuButton *)0x4668e9;
        FUN_005dbce0();
        pCStack_104 = (CMFCColorMenuButton *)0x4668f0;
        iVar3 = FUN_00427540();
        if (*(int *)(iVar3 + 4) < iVar5) {
          pCStack_100 = (CMFCColorMenuButton *)0xffe6c89c;
          local_7c = (undefined1 *)&pcStack_118;
          puStack_11c = &DAT_007468ac;
          pCStack_120 = (CMFCColorMenuButton *)0x46690c;
          FUN_004054a0();
          puStack_11c = (undefined *)0x466911;
          FUN_0049d850();
          pCStack_100 = (CMFCColorMenuButton *)0x466921;
          iVar3 = (**(code **)(*(int *)local_30 + 0x68))();
          *(int *)(local_34 + 0xc0) = iVar3 + *(int *)(local_34 + 4);
          pCStack_100 = (CMFCColorMenuButton *)0x466938;
          FUN_004cca10();
          ExceptionList = local_10;
          return;
        }
        pCStack_100 = local_30;
        pCStack_104 = (CMFCColorMenuButton *)(*(int *)(local_30 + 0xac8) + local_44);
        pCStack_108 = (CMFCColorMenuButton *)0x466954;
        FUN_00680fb0();
        pCStack_100 = local_30;
        pCStack_104 = (CMFCColorMenuButton *)0x1f4;
        pCStack_108 = (CMFCColorMenuButton *)0x1e;
        uStack_10c = 1000;
        uStack_110 = 3;
        uStack_114 = 0;
        local_80 = auStack_12c;
        local_84 = FUN_004054a0();
        local_8 = 0;
        game_get_state_ptr_d1520();
        FUN_004d58e0();
        local_8 = 0xffffffff;
        FUN_0042e1d0();
        pCStack_100 = (CMFCColorMenuButton *)0x4669be;
        pCStack_100 = (CMFCColorMenuButton *)FUN_0044ddc0();
        pCStack_104 = (CMFCColorMenuButton *)0x4669c4;
        FUN_004d1b30();
        pCStack_104 = (CMFCColorMenuButton *)0x4669cb;
        FUN_00517980();
        local_58 = local_38;
        pCStack_100 = (CMFCColorMenuButton *)local_38;
        pCStack_104 = (CMFCColorMenuButton *)local_88;
        pCStack_108 = (CMFCColorMenuButton *)0x4669e2;
        game_get_state_ptr_d1520();
        pCStack_108 = (CMFCColorMenuButton *)0x4669ef;
        FUN_0044dea0();
        local_30[0x994] = (CMFCColorMenuButton)0x0;
        ExceptionList = local_10;
        return;
      }
      pCStack_100 = (CMFCColorMenuButton *)0x466a08;
      pCVar4 = (CMFCColorMenuButton *)game_get_player_or_session_blob();
      if (local_30 == pCVar4) {
        pCStack_100 = local_30;
        pCStack_104 = (CMFCColorMenuButton *)(*(int *)(local_30 + 0xac8) + local_44);
        pCStack_108 = (CMFCColorMenuButton *)0x466a23;
        FUN_00680fb0();
      }
      pCStack_100 = local_30;
      pCStack_104 = (CMFCColorMenuButton *)0x1f4;
      pCStack_108 = (CMFCColorMenuButton *)0x1e;
      uStack_10c = 1000;
      uStack_110 = 3;
      uStack_114 = 0;
      local_8c = auStack_12c;
      local_90 = FUN_004054a0();
      local_8 = 1;
      game_get_state_ptr_d1520();
      FUN_004d58e0();
      local_8 = 0xffffffff;
      FUN_0042e1d0();
      pCStack_100 = (CMFCColorMenuButton *)0x466a93;
      pCStack_100 = (CMFCColorMenuButton *)FUN_0044ddc0();
      pCStack_104 = (CMFCColorMenuButton *)0x466a99;
      FUN_004d1b30();
      pCStack_104 = (CMFCColorMenuButton *)0x466aa0;
      FUN_00517980();
      local_5c = local_38;
      pCStack_100 = (CMFCColorMenuButton *)local_38;
      pCStack_104 = (CMFCColorMenuButton *)local_94;
      pCStack_108 = (CMFCColorMenuButton *)0x466ab7;
      game_get_state_ptr_d1520();
      pCStack_108 = (CMFCColorMenuButton *)0x466ac4;
      FUN_0044dea0();
      local_30[0x994] = (CMFCColorMenuButton)0x0;
      ExceptionList = local_10;
      return;
    }
    if (local_30[0xdb8] != (CMFCColorMenuButton)0x0) {
      pCStack_100 = (CMFCColorMenuButton *)0x466d46;
      pCVar4 = (CMFCColorMenuButton *)game_get_player_or_session_blob();
      if (local_30 == pCVar4) {
        local_b4 = (undefined1 *)&uStack_114;
        pcStack_118 = "sounds/ui/get_item.wav";
        puStack_11c = (undefined *)0x466d60;
        FUN_004054a0();
        pcStack_118 = (char *)0x466d65;
        FUN_004c3500();
        pCStack_100 = (CMFCColorMenuButton *)0x1;
        pCStack_104 = (CMFCColorMenuButton *)(local_34 + 8);
        pCStack_108 = local_30;
        uStack_10c = 1;
        uStack_110 = 0x466d7c;
        FUN_0067f8c0();
      }
      pCStack_100 = *(CMFCColorMenuButton **)(local_34 + 0xc);
      pCStack_104 = (CMFCColorMenuButton *)0x466d8b;
      iVar3 = game_loop_helper_caba0();
      if (iVar3 == 0x71) {
        pCStack_100 = *(CMFCColorMenuButton **)(local_34 + 0xc);
        pCStack_104 = (CMFCColorMenuButton *)0x466da3;
        game_loop_helper_e9240();
        pCStack_104 = (CMFCColorMenuButton *)0x466daa;
        local_50 = game_loop_helper_cc840();
        pCStack_100 = local_30;
        pCStack_104 = (CMFCColorMenuButton *)0x1f4;
        pCStack_108 = (CMFCColorMenuButton *)0x1e;
        uStack_10c = 1000;
        uStack_110 = 4;
        uStack_114 = *(undefined4 *)(local_50 + 0xe8);
        local_b8 = auStack_12c;
        FUN_00405520();
        local_8 = 4;
        game_get_state_ptr_d1520();
        FUN_004d58e0();
        local_8 = 0xffffffff;
        FUN_0042e1d0();
      }
      else {
        pCStack_100 = *(CMFCColorMenuButton **)(local_34 + 0xc);
        pCStack_104 = (CMFCColorMenuButton *)0x466e2e;
        iVar3 = game_loop_helper_caba0();
        if (iVar3 == 0x8e) {
          pCStack_100 = *(CMFCColorMenuButton **)(local_34 + 0xc);
          pCStack_104 = (CMFCColorMenuButton *)0x466e48;
          game_loop_helper_e9240();
          pCStack_104 = (CMFCColorMenuButton *)0x466e4f;
          local_54 = game_loop_helper_cd6d0();
          pCStack_100 = local_30;
          pCStack_104 = (CMFCColorMenuButton *)0x1f4;
          pCStack_108 = (CMFCColorMenuButton *)0x1e;
          uStack_10c = 1000;
          uStack_110 = 4;
          uStack_114 = *(undefined4 *)(local_54 + 200);
          local_c0 = auStack_12c;
          local_c4 = FUN_00405520();
          local_8 = 5;
          game_get_state_ptr_d1520();
          FUN_004d58e0();
          local_8 = 0xffffffff;
          FUN_0042e1d0();
        }
      }
      pCStack_100 = (CMFCColorMenuButton *)0x466ec9;
      pCStack_100 = (CMFCColorMenuButton *)FUN_0044ddc0();
      pCStack_104 = (CMFCColorMenuButton *)0x466ecf;
      FUN_004d1b30();
      pCStack_104 = (CMFCColorMenuButton *)0x466ed6;
      FUN_00517980();
      local_68 = local_38;
      pCStack_100 = (CMFCColorMenuButton *)local_38;
      pCStack_104 = (CMFCColorMenuButton *)local_c8;
      pCStack_108 = (CMFCColorMenuButton *)0x466eed;
      game_get_state_ptr_d1520();
      pCStack_108 = (CMFCColorMenuButton *)0x466efa;
      FUN_0044dea0();
      local_30[0x994] = (CMFCColorMenuButton)0x0;
      ExceptionList = local_10;
      return;
    }
    pCStack_100 = (CMFCColorMenuButton *)(local_34 + 8);
    pCStack_104 = local_30;
    pCStack_108 = (CMFCColorMenuButton *)local_2c;
    uStack_10c = 0x466afe;
    pCStack_104 = (CMFCColorMenuButton *)FUN_0067f440();
    pCStack_100 = (CMFCColorMenuButton *)&DAT_0073f6e5;
    pCStack_108 = (CMFCColorMenuButton *)0x466b12;
    local_60 = pCStack_104;
    local_3d = FUN_00427e30();
    pCStack_100 = (CMFCColorMenuButton *)0x466b20;
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_2c);
    if (local_3d != '\0') {
      pCStack_100 = (CMFCColorMenuButton *)0xffe6c89c;
      local_98 = (undefined1 *)&pcStack_118;
      puStack_124 = (undefined1 *)&pcStack_118;
      puStack_11c = (undefined *)(local_34 + 8);
      pCStack_120 = local_30;
      uStack_128 = 0x466b49;
      FUN_0067f440();
      puStack_11c = (undefined *)0x466b51;
      FUN_0049d850();
      pCStack_100 = (CMFCColorMenuButton *)0x466b61;
      iVar3 = (**(code **)(*(int *)local_30 + 0x68))();
      *(int *)(local_34 + 0xc0) = iVar3 + *(int *)(local_34 + 4);
      pCStack_100 = (CMFCColorMenuButton *)0x466b78;
      FUN_004cca10();
      ExceptionList = local_10;
      return;
    }
    local_9c = (undefined1 *)&uStack_114;
    pcStack_118 = "sounds/ui/get_item.wav";
    puStack_11c = (undefined *)0x466b93;
    FUN_004054a0();
    pcStack_118 = (char *)0x466b98;
    FUN_004c3500();
    pCStack_100 = (CMFCColorMenuButton *)0x1;
    pCStack_104 = (CMFCColorMenuButton *)(local_34 + 8);
    pCStack_108 = local_30;
    uStack_10c = 1;
    uStack_110 = 0x466baf;
    FUN_0067f8c0();
    pCStack_100 = *(CMFCColorMenuButton **)(local_34 + 0xc);
    pCStack_104 = (CMFCColorMenuButton *)0x466bbe;
    iVar3 = game_loop_helper_caba0();
    if (iVar3 == 0x71) {
      pCStack_100 = *(CMFCColorMenuButton **)(local_34 + 0xc);
      pCStack_104 = (CMFCColorMenuButton *)0x466bd6;
      game_loop_helper_e9240();
      pCStack_104 = (CMFCColorMenuButton *)0x466bdd;
      local_48 = game_loop_helper_cc840();
      pCStack_100 = local_30;
      pCStack_104 = (CMFCColorMenuButton *)0x1f4;
      pCStack_108 = (CMFCColorMenuButton *)0x1e;
      uStack_10c = 1000;
      uStack_110 = 4;
      uStack_114 = *(undefined4 *)(local_48 + 0xe8);
      local_a0 = auStack_12c;
      local_a4 = FUN_00405520();
      local_8 = 2;
      game_get_state_ptr_d1520();
      FUN_004d58e0();
      local_8 = 0xffffffff;
      FUN_0042e1d0();
    }
    else {
      pCStack_100 = *(CMFCColorMenuButton **)(local_34 + 0xc);
      pCStack_104 = (CMFCColorMenuButton *)0x466c60;
      iVar3 = game_loop_helper_caba0();
      if (iVar3 == 0x8e) {
        pCStack_100 = *(CMFCColorMenuButton **)(local_34 + 0xc);
        pCStack_104 = (CMFCColorMenuButton *)0x466c7a;
        game_loop_helper_e9240();
        pCStack_104 = (CMFCColorMenuButton *)0x466c81;
        local_4c = game_loop_helper_cd6d0();
        pCStack_100 = local_30;
        pCStack_104 = (CMFCColorMenuButton *)0x1f4;
        pCStack_108 = (CMFCColorMenuButton *)0x1e;
        uStack_10c = 1000;
        uStack_110 = 4;
        uStack_114 = *(undefined4 *)(local_4c + 200);
        local_a8 = auStack_12c;
        local_ac = FUN_00405520();
        local_8 = 3;
        game_get_state_ptr_d1520();
        FUN_004d58e0();
        local_8 = 0xffffffff;
        FUN_0042e1d0();
      }
    }
    pCStack_100 = (CMFCColorMenuButton *)0x466cfc;
    pCStack_100 = (CMFCColorMenuButton *)FUN_0044ddc0();
    pCStack_104 = (CMFCColorMenuButton *)0x466d02;
    FUN_004d1b30();
    pCStack_104 = (CMFCColorMenuButton *)0x466d09;
    FUN_00517980();
    local_64 = local_38;
    pCStack_100 = (CMFCColorMenuButton *)local_38;
    pCStack_104 = (CMFCColorMenuButton *)local_b0;
    pCStack_108 = (CMFCColorMenuButton *)0x466d20;
    game_get_state_ptr_d1520();
    pCStack_108 = (CMFCColorMenuButton *)0x466d2d;
    FUN_0044dea0();
    local_30[0x994] = (CMFCColorMenuButton)0x0;
    ExceptionList = local_10;
    return;
  }
  if (in_ECX[0xa8c] == (CMFCColorMenuButton)0x0) {
    uStack_f8 = 0x466f3a;
    FUN_00466500();
    uStack_f8 = 0x466f42;
    CMFCColorMenuButton::Initialize(local_30);
    uStack_f8 = 0;
    uStack_fc = 0x14;
    pCStack_100 = (CMFCColorMenuButton *)0x466f56;
    (**(code **)(*(int *)local_30 + 0x138))();
    pCStack_100 = (CMFCColorMenuButton *)0x0;
    pCStack_104 = (CMFCColorMenuButton *)0x2;
    pCStack_108 = (CMFCColorMenuButton *)0x466f6a;
    (**(code **)(*(int *)local_30 + 0x13c))();
    pCStack_100 = (CMFCColorMenuButton *)0x0;
    pCStack_104 = (CMFCColorMenuButton *)0x64;
    pCStack_108 = (CMFCColorMenuButton *)0x466f76;
    FUN_00631910();
    *(int *)(local_30 + 0x1a4) = 400;
    *(int *)(local_30 + 0x1a8) = 0;
    pcStack_118 = "sounds/char/swordman/sm_atk_01.wav";
    puStack_11c = (undefined *)0x466fa5;
    FUN_004054a0();
    pcStack_118 = (char *)0x466faa;
    FUN_004c3500();
    goto LAB_004671d8;
  }
  uStack_f8 = 0x466fba;
  FUN_00466500();
  uStack_f8 = 0x466fc2;
  CMFCColorMenuButton::Initialize(local_30);
  uStack_f8 = 0x39;
  uStack_fc = 0x15;
  pCStack_100 = (CMFCColorMenuButton *)0x466fd6;
  (**(code **)(*(int *)local_30 + 0x138))();
  pCStack_100 = (CMFCColorMenuButton *)0x31;
  pCStack_104 = (CMFCColorMenuButton *)0x3;
  pCStack_108 = (CMFCColorMenuButton *)0x466fea;
  (**(code **)(*(int *)local_30 + 0x13c))();
  pCStack_108 = (CMFCColorMenuButton *)0x0;
  uStack_10c = 100;
  uStack_110 = 0x466ff6;
  FUN_00631910();
  pCStack_108 = (CMFCColorMenuButton *)0x466ffc;
  iVar3 = FUN_00641430();
  if (iVar3 % 100 < 0x21) {
    pCStack_120 = (CMFCColorMenuButton *)0x746950;
    puStack_124 = (undefined1 *)0x46701e;
    FUN_004054a0();
    pCStack_120 = (CMFCColorMenuButton *)0x467023;
    FUN_004c3500();
  }
  else {
    pCStack_108 = (CMFCColorMenuButton *)0x467030;
    iVar3 = FUN_00641430();
    if (iVar3 % 100 < 0x42) {
      pCStack_108 = (CMFCColorMenuButton *)0x467042;
      iVar3 = FUN_00641430();
      if (0x21 < iVar3 % 100) {
        pCStack_120 = (CMFCColorMenuButton *)0x746974;
        puStack_124 = (undefined1 *)0x467064;
        FUN_004054a0();
        pCStack_120 = (CMFCColorMenuButton *)0x467069;
        FUN_004c3500();
        goto LAB_004670af;
      }
    }
    pCStack_108 = (CMFCColorMenuButton *)0x467073;
    iVar3 = FUN_00641430();
    if (iVar3 % 100 < 100) {
      pCStack_108 = (CMFCColorMenuButton *)0x467085;
      iVar3 = FUN_00641430();
      if (0x42 < iVar3 % 100) {
        pCStack_120 = (CMFCColorMenuButton *)0x746998;
        puStack_124 = (undefined1 *)0x4670a7;
        FUN_004054a0();
        pCStack_120 = (CMFCColorMenuButton *)0x4670ac;
        FUN_004c3500();
      }
    }
  }
LAB_004670af:
  pCStack_108 = (CMFCColorMenuButton *)0x7469bc;
  uStack_10c = 0x4670c2;
  FUN_004053a0();
  *(int *)(local_30 + 0x1a8) = 0;
  pCStack_120 = (CMFCColorMenuButton *)0x7469c4;
  puStack_124 = (undefined1 *)0x4670e4;
  FUN_004054a0();
  pCStack_120 = (CMFCColorMenuButton *)0x4670f1;
  local_6c = (**(code **)(*(int *)local_30 + 0x78))();
  *(undefined1 *)(local_6c + 0x80) = 1;
  *(undefined1 *)(local_6c + 0xe0) = 1;
  local_3c = local_6c;
  FUN_004054a0();
  local_70 = (**(code **)(*(int *)local_30 + 0x78))();
  *(undefined1 *)(local_70 + 0x80) = 1;
  *(undefined1 *)(local_70 + 0xe0) = 1;
  local_3c = local_70;
  FUN_004054a0();
  local_74 = (**(code **)(*(int *)local_30 + 0x78))();
  *(undefined1 *)(local_74 + 0x80) = 1;
  *(undefined1 *)(local_74 + 0xe0) = 1;
  local_3c = local_74;
  FUN_004054a0("character/swordman/effect/animation/frenzy/sword1-4.ani");
  local_78 = (**(code **)(*(int *)local_30 + 0x78))();
  *(undefined1 *)(local_78 + 0x80) = 1;
  *(undefined1 *)(local_78 + 0xe0) = 1;
  *(int *)(local_30 + 0x1a4) = 400;
  local_3c = local_78;
LAB_004671d8:
  pCStack_100 = (CMFCColorMenuButton *)0x4671dd;
  pCVar4 = (CMFCColorMenuButton *)game_get_player_or_session_blob();
  if (local_30 == pCVar4) {
    pCStack_100 = (CMFCColorMenuButton *)0x1;
    pCStack_104 = (CMFCColorMenuButton *)0x4671e9;
    FUN_00667300();
  }
  ExceptionList = local_10;
  return;
}


/* ==== 00470cf0  FUN_00470cf0  size=16149 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00470cf0(int param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  CMFCColorMenuButton *pCVar6;
  int *piVar7;
  CMFCColorMenuButton *in_ECX;
  float10 fVar8;
  float fVar9;
  undefined1 auStack_3b8 [8];
  undefined4 uStack_3b0;
  char *pcStack_3ac;
  undefined4 uStack_3a8;
  char *pcStack_3a4;
  undefined1 auStack_3a0 [8];
  undefined4 uStack_398;
  char *pcStack_394;
  undefined4 uStack_390;
  char *pcStack_38c;
  undefined4 uStack_388;
  char *pcStack_384;
  undefined4 uStack_380;
  char *pcStack_37c;
  undefined4 uStack_378;
  char *pcStack_374;
  undefined4 uStack_370;
  char *pcStack_36c;
  undefined4 uStack_368;
  char *pcStack_364;
  int iStack_360;
  char *pcStack_35c;
  char *pcStack_358;
  char *pcStack_354;
  CMFCColorMenuButton *pCStack_350;
  char *pcStack_34c;
  undefined4 uStack_348;
  int iStack_344;
  CMFCColorMenuButton *pCStack_340;
  function<void___cdecl(void)> *pfStack_33c;
  int iStack_338;
  int iStack_334;
  uint uStack_330;
  undefined1 local_2cc [4];
  undefined1 *local_2c8;
  undefined1 *local_2c4;
  undefined1 *local_2c0;
  undefined1 *local_2bc;
  undefined1 *local_2b8;
  undefined1 *local_2b4;
  undefined1 *local_2b0;
  undefined1 *local_2ac;
  undefined1 *local_2a8;
  undefined1 *local_2a4;
  undefined1 *local_2a0;
  undefined1 *local_29c;
  undefined1 *local_298;
  undefined1 *local_294;
  undefined1 *local_290;
  undefined1 *local_28c;
  undefined1 *local_288;
  undefined1 *local_284;
  undefined1 *local_280;
  undefined1 *local_27c;
  undefined1 *local_278;
  undefined1 *local_274;
  undefined1 *local_270;
  undefined1 local_26c [4];
  undefined1 *local_268;
  undefined1 *local_264;
  undefined1 local_260 [4];
  undefined1 local_25c [4];
  undefined1 *local_258;
  undefined1 *local_254;
  undefined1 *local_250;
  undefined1 *local_24c;
  undefined1 *local_248;
  undefined1 *local_244;
  undefined1 *local_240;
  undefined1 *local_23c;
  undefined1 *local_238;
  undefined1 *local_234;
  undefined1 *local_230;
  undefined1 *local_22c;
  undefined1 *local_228;
  undefined1 *local_224;
  undefined1 *local_220;
  undefined1 *local_21c;
  undefined1 *local_218;
  undefined1 *local_214;
  undefined1 *local_210;
  undefined1 *local_20c;
  undefined1 *local_208;
  undefined1 *local_204;
  undefined1 *local_200;
  undefined1 *local_1fc;
  undefined1 *local_1f8;
  undefined1 *local_1f4;
  undefined1 *local_1f0;
  undefined1 *local_1ec;
  undefined1 *local_1e8;
  undefined1 *local_1e4;
  undefined1 *local_1e0;
  undefined1 *local_1dc;
  undefined1 *local_1d8;
  undefined1 *local_1d4;
  undefined1 *local_1d0;
  undefined1 *local_1cc;
  undefined1 *local_1c8;
  undefined1 *local_1c4;
  undefined4 local_1c0;
  float local_1bc;
  int *local_1b8;
  int local_1b4;
  int local_1b0;
  int local_1ac;
  int *local_1a8;
  int *local_1a4;
  int local_1a0;
  int local_19c;
  int local_198;
  int *local_194;
  int local_190;
  int local_18c;
  int local_188;
  int local_184;
  int local_180;
  int local_17c;
  int local_178;
  int local_174;
  int local_170;
  int local_16c;
  int local_168;
  int local_164;
  undefined4 local_160;
  float local_15c;
  int local_158;
  float local_154;
  int local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  float local_140;
  undefined4 local_13c;
  float local_138;
  undefined4 local_134;
  float local_130;
  int local_12c;
  int *local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  int *local_110;
  undefined4 local_10c;
  int local_108;
  int local_104;
  int local_100;
  int local_fc;
  int local_f8;
  int local_f4;
  undefined4 local_f0;
  int local_ec;
  int local_e8;
  int local_e4;
  int local_e0;
  int *local_dc;
  undefined4 local_d8;
  int local_d4;
  int *local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  undefined4 local_bc;
  undefined1 *local_b8;
  undefined1 *local_b4;
  undefined1 *local_b0;
  undefined1 *local_ac;
  int *local_a8;
  char *local_a4;
  undefined1 local_a0 [4];
  undefined1 local_9c [4];
  undefined1 local_98 [4];
  undefined1 local_94 [4];
  undefined1 local_90 [4];
  int local_8c;
  int local_88;
  int *local_84;
  int *local_80;
  int *local_7c;
  int *local_78;
  undefined4 local_74;
  int local_70;
  byte local_6a;
  char local_69;
  int *local_68;
  int *local_64;
  int local_60;
  int local_5c;
  int local_58;
  int *local_54;
  int local_50;
  int local_4c;
  CMFCColorMenuButton *local_48;
  function<void___cdecl(void)> local_44 [24];
  function<void___cdecl(void)> local_2c [24];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00711335;
  local_10 = ExceptionList;
  uStack_330 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  if (*(int *)(in_ECX + 0xab8) != 0) {
    return;
  }
  iStack_334 = param_1;
  iStack_338 = 0x470d44;
  ExceptionList = &local_10;
  local_48 = in_ECX;
  local_14 = uStack_330;
  (**(code **)(*(int *)in_ECX + 0x128))();
  iStack_338 = param_1;
  pfStack_33c = (function<void___cdecl(void)> *)0x470d58;
  (**(code **)(*(int *)local_48 + 300))();
  local_50 = *(int *)(local_48 + 0x1a4);
  if (0x10e < local_50) {
    if (0x140 < local_50) {
      if (local_50 != 400) {
        if (local_50 == 0x1a4) {
          if (0 < *(int *)(local_48 + 0xa10)) {
            *(int *)(local_48 + 0xa10) = *(int *)(local_48 + 0xa10) - param_1;
            if (*(int *)(local_48 + 0xa10) < 1) {
              *(int *)(local_48 + 0xa10) = 0;
              *(int *)(local_48 + 0x230) = 0;
            }
            *(int *)(local_48 + 0x218) =
                 -*(int *)(local_48 + 500) * *(int *)(local_48 + 0x230) * param_1 +
                 *(int *)(local_48 + 0x218);
            *(int *)(local_48 + 0x230) =
                 *(int *)(local_48 + 0x23c) * param_1 + *(int *)(local_48 + 0x230);
          }
        }
        else if ((local_50 == 0xbde31) && (*(int *)(local_48 + 0x230) < 1)) {
          *(int *)(local_48 + 0x230) = 0;
          *(int *)(local_48 + 0x23c) = 0;
        }
        goto switchD_00470d92_caseD_4;
      }
      if (local_48[0xdf1] != (CMFCColorMenuButton)0x0) {
        pfStack_33c = (function<void___cdecl(void)> *)0x2e;
        pCStack_340 = (CMFCColorMenuButton *)0x473200;
        img_path_loader_21();
      }
      if (local_48[0xdf0] != (CMFCColorMenuButton)0x0) {
        pfStack_33c = (function<void___cdecl(void)> *)0x473223;
        piVar7 = (int *)(**(code **)(*(int *)local_48 + 0x9c))();
        if (3 < *piVar7) {
          if (local_48[0xa8c] == (CMFCColorMenuButton)0x0) {
            if (*(int *)(local_48 + 0x1a8) == 0) {
              pfStack_33c = (function<void___cdecl(void)> *)0x473256;
              CMFCColorMenuButton::Initialize(local_48);
              pfStack_33c = (function<void___cdecl(void)> *)0x47325c;
              pCVar6 = (CMFCColorMenuButton *)game_get_player_or_session_blob();
              if (local_48 == pCVar6) {
                pfStack_33c = (function<void___cdecl(void)> *)0x1;
                pCStack_340 = (CMFCColorMenuButton *)0x473268;
                FUN_00667300();
              }
              pfStack_33c = (function<void___cdecl(void)> *)0x1;
              pCStack_340 = (CMFCColorMenuButton *)0x14;
              iStack_344 = 0x47327f;
              (**(code **)(*(int *)local_48 + 0x138))();
              iStack_344 = 1;
              uStack_348 = 2;
              pcStack_34c = "j";
              (**(code **)(*(int *)local_48 + 0x13c))();
              pfStack_33c = (function<void___cdecl(void)> *)0x0;
              pCStack_340 = (CMFCColorMenuButton *)0x64;
              iStack_344 = 0x47329f;
              FUN_00631910();
              *(int *)(local_48 + 0x1a4) = 400;
              *(int *)(local_48 + 0x1a8) = 1;
              local_2b0 = (undefined1 *)&pCStack_350;
              pcStack_354 = "sounds/char/swordman/sm_atk_02.wav";
              pcStack_358 = (char *)0x4732ce;
              FUN_004054a0();
              pcStack_354 = (char *)0x4732d3;
              FUN_004c3500();
              *(int *)(local_48 + 0x23c) = -300;
              if ((*(int *)(local_48 + 500) == 1) && (local_48[0xdee] != (CMFCColorMenuButton)0x0))
              {
                *(int *)(local_48 + 0x230) = 200;
              }
              else if ((*(int *)(local_48 + 500) == -1) &&
                      (local_48[0xded] != (CMFCColorMenuButton)0x0)) {
                *(int *)(local_48 + 0x230) = 200;
              }
              else if ((*(int *)(local_48 + 500) == -1) &&
                      (local_48[0xdee] != (CMFCColorMenuButton)0x0)) {
                *(int *)(local_48 + 0x230) = 0;
              }
              else if ((*(int *)(local_48 + 500) == 1) &&
                      (local_48[0xded] != (CMFCColorMenuButton)0x0)) {
                *(int *)(local_48 + 0x230) = 0;
              }
              else {
                *(int *)(local_48 + 0x230) = 100;
              }
              *(int *)(local_48 + 0x230) = *(int *)(local_48 + 0x230) * 1000;
            }
            else if (*(int *)(local_48 + 0x1a8) == 1) {
              pfStack_33c = (function<void___cdecl(void)> *)0x4733ca;
              CMFCColorMenuButton::Initialize(local_48);
              pfStack_33c = (function<void___cdecl(void)> *)0x4733d0;
              pCVar6 = (CMFCColorMenuButton *)game_get_player_or_session_blob();
              if (local_48 == pCVar6) {
                pfStack_33c = (function<void___cdecl(void)> *)0x1;
                pCStack_340 = (CMFCColorMenuButton *)0x4733dc;
                FUN_00667300();
              }
              pfStack_33c = (function<void___cdecl(void)> *)0x2;
              pCStack_340 = (CMFCColorMenuButton *)0x14;
              iStack_344 = 0x4733f3;
              (**(code **)(*(int *)local_48 + 0x138))();
              iStack_344 = 2;
              uStack_348 = 2;
              pcStack_34c = "j";
              (**(code **)(*(int *)local_48 + 0x13c))();
              pfStack_33c = (function<void___cdecl(void)> *)0x0;
              pCStack_340 = (CMFCColorMenuButton *)0x64;
              iStack_344 = 0x473413;
              FUN_00631910();
              *(int *)(local_48 + 0x1a4) = 400;
              *(int *)(local_48 + 0x1a8) = 2;
              local_2b4 = (undefined1 *)&pCStack_350;
              pcStack_354 = "sounds/char/swordman/sm_atk_03.wav";
              pcStack_358 = (char *)0x473442;
              FUN_004054a0();
              pcStack_354 = (char *)0x473447;
              FUN_004c3500();
              *(int *)(local_48 + 0x23c) = -300;
              if ((*(int *)(local_48 + 500) == 1) && (local_48[0xdee] != (CMFCColorMenuButton)0x0))
              {
                *(int *)(local_48 + 0x230) = 200;
              }
              else if ((*(int *)(local_48 + 500) == -1) &&
                      (local_48[0xded] != (CMFCColorMenuButton)0x0)) {
                *(int *)(local_48 + 0x230) = 200;
              }
              else if ((*(int *)(local_48 + 500) == -1) &&
                      (local_48[0xdee] != (CMFCColorMenuButton)0x0)) {
                *(int *)(local_48 + 0x230) = 0;
              }
              else if ((*(int *)(local_48 + 500) == 1) &&
                      (local_48[0xded] != (CMFCColorMenuButton)0x0)) {
                *(int *)(local_48 + 0x230) = 0;
              }
              else {
                *(int *)(local_48 + 0x230) = 100;
              }
              *(int *)(local_48 + 0x230) = *(int *)(local_48 + 0x230) * 1000;
            }
          }
          else if (*(int *)(local_48 + 0x1a8) == 0) {
            pfStack_33c = (function<void___cdecl(void)> *)0x47353e;
            CMFCColorMenuButton::Initialize(local_48);
            pfStack_33c = (function<void___cdecl(void)> *)0x473544;
            pCVar6 = (CMFCColorMenuButton *)game_get_player_or_session_blob();
            if (local_48 == pCVar6) {
              pfStack_33c = (function<void___cdecl(void)> *)0x1;
              pCStack_340 = (CMFCColorMenuButton *)0x473550;
              FUN_00667300();
            }
            pfStack_33c = (function<void___cdecl(void)> *)0x3a;
            pCStack_340 = (CMFCColorMenuButton *)0x15;
            iStack_344 = 0x473567;
            (**(code **)(*(int *)local_48 + 0x138))();
            iStack_344 = 0x32;
            uStack_348 = 3;
            pcStack_34c = (char *)0x47357b;
            (**(code **)(*(int *)local_48 + 0x13c))();
            pcStack_34c = (char *)0x473581;
            iVar3 = FUN_00641430();
            if (iVar3 % 100 < 0x21) {
              local_2b8 = (undefined1 *)&iStack_360;
              pcStack_364 = "sounds/char/swordman/sm_atk_01.wav";
              uStack_368 = 0x4735a3;
              FUN_004054a0();
              pcStack_364 = (char *)0x4735a8;
              FUN_004c3500();
            }
            else {
              pcStack_34c = (char *)0x4735b5;
              iVar3 = FUN_00641430();
              if (iVar3 % 100 < 0x42) {
                pcStack_34c = (char *)0x4735c7;
                iVar3 = FUN_00641430();
                if (0x21 < iVar3 % 100) {
                  local_2bc = (undefined1 *)&iStack_360;
                  pcStack_364 = "sounds/char/swordman/sm_atk_02.wav";
                  uStack_368 = 0x4735e9;
                  FUN_004054a0();
                  pcStack_364 = (char *)0x4735ee;
                  FUN_004c3500();
                  goto LAB_00473634;
                }
              }
              pcStack_34c = (char *)0x4735f8;
              iVar3 = FUN_00641430();
              if (iVar3 % 100 < 100) {
                pcStack_34c = (char *)0x47360a;
                iVar3 = FUN_00641430();
                if (0x42 < iVar3 % 100) {
                  local_2c0 = (undefined1 *)&iStack_360;
                  pcStack_364 = "sounds/char/swordman/sm_atk_03.wav";
                  uStack_368 = 0x47362c;
                  FUN_004054a0();
                  pcStack_364 = (char *)0x473631;
                  FUN_004c3500();
                }
              }
            }
LAB_00473634:
            pcStack_34c = "[none]";
            pCStack_350 = (CMFCColorMenuButton *)0x473647;
            FUN_004053a0();
            *(int *)(local_48 + 0x1a8) = 1;
            local_2c4 = (undefined1 *)&iStack_360;
            pcStack_364 = "character/swordman/effect/animation/frenzy/sword2-1.ani";
            uStack_368 = 0x473669;
            FUN_004054a0();
            pcStack_364 = (char *)0x473676;
            local_164 = (**(code **)(*(int *)local_48 + 0x78))();
            *(undefined1 *)(local_164 + 0x80) = 1;
            *(undefined1 *)(local_164 + 0xe0) = 1;
            local_2c8 = (undefined1 *)&uStack_378;
            pcStack_37c = "character/swordman/effect/animation/frenzy/sword2-2.ani";
            uStack_380 = 0x4736ae;
            local_58 = local_164;
            FUN_004054a0();
            pcStack_37c = (char *)0x4736bb;
            local_168 = (**(code **)(*(int *)local_48 + 0x78))();
            *(undefined1 *)(local_168 + 0x80) = 1;
            *(undefined1 *)(local_168 + 0xe0) = 1;
            pcStack_394 = "character/swordman/effect/animation/frenzy/sword2-3.ani";
            uStack_398 = 0x4736f3;
            local_58 = local_168;
            FUN_004054a0();
            pcStack_394 = (char *)0x473700;
            local_16c = (**(code **)(*(int *)local_48 + 0x78))();
            *(undefined1 *)(local_16c + 0x80) = 1;
            *(undefined1 *)(local_16c + 0xe0) = 1;
            pcStack_3ac = "character/swordman/effect/animation/frenzy/sword2-4.ani";
            uStack_3b0 = 0x473738;
            local_58 = local_16c;
            FUN_004054a0();
            pcStack_3ac = (char *)0x473745;
            local_170 = (**(code **)(*(int *)local_48 + 0x78))();
            *(undefined1 *)(local_170 + 0x80) = 1;
            *(undefined1 *)(local_170 + 0xe0) = 1;
            *(int *)(local_48 + 0x23c) = -300;
            if ((*(int *)(local_48 + 500) == 1) && (local_48[0xdee] != (CMFCColorMenuButton)0x0)) {
              *(int *)(local_48 + 0x230) = 100;
            }
            else if ((*(int *)(local_48 + 500) == -1) &&
                    (local_48[0xded] != (CMFCColorMenuButton)0x0)) {
              *(int *)(local_48 + 0x230) = 100;
            }
            else if ((*(int *)(local_48 + 500) == -1) &&
                    (local_48[0xdee] != (CMFCColorMenuButton)0x0)) {
              *(int *)(local_48 + 0x230) = 0;
            }
            else if ((*(int *)(local_48 + 500) == 1) &&
                    (local_48[0xded] != (CMFCColorMenuButton)0x0)) {
              *(int *)(local_48 + 0x230) = 0;
            }
            else {
              *(int *)(local_48 + 0x230) = 0x32;
            }
            *(int *)(local_48 + 0x230) = *(int *)(local_48 + 0x230) * 1000;
            local_58 = local_170;
          }
          else if (*(int *)(local_48 + 0x1a8) == 1) {
            pfStack_33c = (function<void___cdecl(void)> *)0x47385c;
            CMFCColorMenuButton::Initialize(local_48);
            pfStack_33c = (function<void___cdecl(void)> *)0x473862;
            pCVar6 = (CMFCColorMenuButton *)game_get_player_or_session_blob();
            if (local_48 == pCVar6) {
              pfStack_33c = (function<void___cdecl(void)> *)0x1;
              pCStack_340 = (CMFCColorMenuButton *)0x47386e;
              FUN_00667300();
            }
            pfStack_33c = (function<void___cdecl(void)> *)0x3b;
            pCStack_340 = (CMFCColorMenuButton *)0x15;
            iStack_344 = 0x473885;
            (**(code **)(*(int *)local_48 + 0x138))();
            iStack_344 = 0x33;
            uStack_348 = 3;
            pcStack_34c = (char *)0x473899;
            (**(code **)(*(int *)local_48 + 0x13c))();
            pcStack_34c = (char *)0x47389f;
            iVar3 = FUN_00641430();
            if (iVar3 % 100 < 0x21) {
              pcStack_364 = "sounds/char/swordman/sm_atk_01.wav";
              uStack_368 = 0x4738c1;
              FUN_004054a0();
              pcStack_364 = (char *)0x4738c6;
              FUN_004c3500();
            }
            else {
              pcStack_34c = (char *)0x4738d3;
              iVar3 = FUN_00641430();
              if (iVar3 % 100 < 0x42) {
                pcStack_34c = (char *)0x4738e5;
                iVar3 = FUN_00641430();
                if (0x21 < iVar3 % 100) {
                  pcStack_364 = "sounds/char/swordman/sm_atk_02.wav";
                  uStack_368 = 0x473907;
                  FUN_004054a0();
                  pcStack_364 = (char *)0x47390c;
                  FUN_004c3500();
                  goto LAB_00473952;
                }
              }
              pcStack_34c = (char *)0x473916;
              iVar3 = FUN_00641430();
              if (iVar3 % 100 < 100) {
                pcStack_34c = (char *)0x473928;
                iVar3 = FUN_00641430();
                if (0x42 < iVar3 % 100) {
                  pcStack_364 = "sounds/char/swordman/sm_atk_03.wav";
                  uStack_368 = 0x47394a;
                  FUN_004054a0();
                  pcStack_364 = (char *)0x47394f;
                  FUN_004c3500();
                }
              }
            }
LAB_00473952:
            pcStack_34c = "[none]";
            pCStack_350 = (CMFCColorMenuButton *)0x473965;
            FUN_004053a0();
            *(int *)(local_48 + 0x1a8) = 2;
            pcStack_364 = "character/swordman/effect/animation/frenzy/sword3-1.ani";
            uStack_368 = 0x473987;
            FUN_004054a0();
            pcStack_364 = (char *)0x473994;
            local_174 = (**(code **)(*(int *)local_48 + 0x78))();
            *(undefined1 *)(local_174 + 0x80) = 1;
            *(undefined1 *)(local_174 + 0xe0) = 1;
            pcStack_37c = "character/swordman/effect/animation/frenzy/sword3-2.ani";
            uStack_380 = 0x4739cc;
            local_5c = local_174;
            FUN_004054a0();
            pcStack_37c = (char *)0x4739d9;
            local_178 = (**(code **)(*(int *)local_48 + 0x78))();
            *(undefined1 *)(local_178 + 0x80) = 1;
            *(undefined1 *)(local_178 + 0xe0) = 1;
            pcStack_394 = "character/swordman/effect/animation/frenzy/sword3-3.ani";
            uStack_398 = 0x473a11;
            local_5c = local_178;
            FUN_004054a0();
            pcStack_394 = (char *)0x473a1e;
            local_17c = (**(code **)(*(int *)local_48 + 0x78))();
            *(undefined1 *)(local_17c + 0x80) = 1;
            *(undefined1 *)(local_17c + 0xe0) = 1;
            pcStack_3ac = "character/swordman/effect/animation/frenzy/sword3-4.ani";
            uStack_3b0 = 0x473a56;
            local_5c = local_17c;
            FUN_004054a0();
            pcStack_3ac = (char *)0x473a63;
            local_180 = (**(code **)(*(int *)local_48 + 0x78))();
            *(undefined1 *)(local_180 + 0x80) = 1;
            *(undefined1 *)(local_180 + 0xe0) = 1;
            *(int *)(local_48 + 0x23c) = -300;
            if ((*(int *)(local_48 + 500) == 1) && (local_48[0xdee] != (CMFCColorMenuButton)0x0)) {
              *(int *)(local_48 + 0x230) = 100;
            }
            else if ((*(int *)(local_48 + 500) == -1) &&
                    (local_48[0xded] != (CMFCColorMenuButton)0x0)) {
              *(int *)(local_48 + 0x230) = 100;
            }
            else if ((*(int *)(local_48 + 500) == -1) &&
                    (local_48[0xdee] != (CMFCColorMenuButton)0x0)) {
              *(int *)(local_48 + 0x230) = 0;
            }
            else if ((*(int *)(local_48 + 500) == 1) &&
                    (local_48[0xded] != (CMFCColorMenuButton)0x0)) {
              *(int *)(local_48 + 0x230) = 0;
            }
            else {
              *(int *)(local_48 + 0x230) = 0x32;
            }
            *(int *)(local_48 + 0x230) = *(int *)(local_48 + 0x230) * 1000;
            local_5c = local_180;
          }
          else {
            if (*(int *)(local_48 + 0x1a8) != 2) goto LAB_00473e7b;
            pfStack_33c = (function<void___cdecl(void)> *)0x473b7a;
            CMFCColorMenuButton::Initialize(local_48);
            pfStack_33c = (function<void___cdecl(void)> *)0x473b80;
            pCVar6 = (CMFCColorMenuButton *)game_get_player_or_session_blob();
            if (local_48 == pCVar6) {
              pfStack_33c = (function<void___cdecl(void)> *)0x1;
              pCStack_340 = (CMFCColorMenuButton *)0x473b8c;
              FUN_00667300();
            }
            pfStack_33c = (function<void___cdecl(void)> *)0x3c;
            pCStack_340 = (CMFCColorMenuButton *)0x15;
            iStack_344 = 0x473ba3;
            (**(code **)(*(int *)local_48 + 0x138))();
            iStack_344 = 0x34;
            uStack_348 = 3;
            pcStack_34c = (char *)0x473bb7;
            (**(code **)(*(int *)local_48 + 0x13c))();
            pcStack_34c = (char *)0x473bbd;
            iVar3 = FUN_00641430();
            if (iVar3 % 100 < 0x21) {
              pcStack_364 = "sounds/char/swordman/sm_atk_01.wav";
              uStack_368 = 0x473bdf;
              FUN_004054a0();
              pcStack_364 = (char *)0x473be4;
              FUN_004c3500();
            }
            else {
              pcStack_34c = (char *)0x473bf1;
              iVar3 = FUN_00641430();
              if (iVar3 % 100 < 0x42) {
                pcStack_34c = (char *)0x473c03;
                iVar3 = FUN_00641430();
                if (0x21 < iVar3 % 100) {
                  pcStack_364 = "sounds/char/swordman/sm_atk_02.wav";
                  uStack_368 = 0x473c25;
                  FUN_004054a0();
                  pcStack_364 = (char *)0x473c2a;
                  FUN_004c3500();
                  goto LAB_00473c70;
                }
              }
              pcStack_34c = (char *)0x473c34;
              iVar3 = FUN_00641430();
              if (iVar3 % 100 < 100) {
                pcStack_34c = (char *)0x473c46;
                iVar3 = FUN_00641430();
                if (0x42 < iVar3 % 100) {
                  pcStack_364 = "sounds/char/swordman/sm_atk_03.wav";
                  uStack_368 = 0x473c68;
                  FUN_004054a0();
                  pcStack_364 = (char *)0x473c6d;
                  FUN_004c3500();
                }
              }
            }
LAB_00473c70:
            pcStack_34c = "[none]";
            pCStack_350 = (CMFCColorMenuButton *)0x473c83;
            FUN_004053a0();
            *(int *)(local_48 + 0x1a8) = 3;
            pcStack_364 = "character/swordman/effect/animation/frenzy/sword4-1.ani";
            uStack_368 = 0x473ca5;
            FUN_004054a0();
            pcStack_364 = (char *)0x473cb2;
            local_184 = (**(code **)(*(int *)local_48 + 0x78))();
            *(undefined1 *)(local_184 + 0x80) = 1;
            *(undefined1 *)(local_184 + 0xe0) = 1;
            pcStack_37c = "character/swordman/effect/animation/frenzy/sword4-2.ani";
            uStack_380 = 0x473cea;
            local_60 = local_184;
            FUN_004054a0();
            pcStack_37c = (char *)0x473cf7;
            local_188 = (**(code **)(*(int *)local_48 + 0x78))();
            *(undefined1 *)(local_188 + 0x80) = 1;
            *(undefined1 *)(local_188 + 0xe0) = 1;
            pcStack_394 = "character/swordman/effect/animation/frenzy/sword4-3.ani";
            uStack_398 = 0x473d2f;
            local_60 = local_188;
            FUN_004054a0();
            pcStack_394 = (char *)0x473d3c;
            local_18c = (**(code **)(*(int *)local_48 + 0x78))();
            *(undefined1 *)(local_18c + 0x80) = 1;
            *(undefined1 *)(local_18c + 0xe0) = 1;
            pcStack_3ac = "character/swordman/effect/animation/frenzy/sword4-4.ani";
            uStack_3b0 = 0x473d74;
            local_60 = local_18c;
            FUN_004054a0();
            pcStack_3ac = (char *)0x473d81;
            local_190 = (**(code **)(*(int *)local_48 + 0x78))();
            *(undefined1 *)(local_190 + 0x80) = 1;
            *(undefined1 *)(local_190 + 0xe0) = 1;
            *(int *)(local_48 + 0x23c) = -300;
            if ((*(int *)(local_48 + 500) == 1) && (local_48[0xdee] != (CMFCColorMenuButton)0x0)) {
              *(int *)(local_48 + 0x230) = 100;
            }
            else if ((*(int *)(local_48 + 500) == -1) &&
                    (local_48[0xded] != (CMFCColorMenuButton)0x0)) {
              *(int *)(local_48 + 0x230) = 100;
            }
            else if ((*(int *)(local_48 + 500) == -1) &&
                    (local_48[0xdee] != (CMFCColorMenuButton)0x0)) {
              *(int *)(local_48 + 0x230) = 0;
            }
            else if ((*(int *)(local_48 + 500) == 1) &&
                    (local_48[0xded] != (CMFCColorMenuButton)0x0)) {
              *(int *)(local_48 + 0x230) = 0;
            }
            else {
              *(int *)(local_48 + 0x230) = 0x32;
            }
            *(int *)(local_48 + 0x230) = *(int *)(local_48 + 0x230) * 1000;
            local_60 = local_190;
          }
        }
      }
LAB_00473e7b:
      *(int *)(local_48 + 0x234) = 0;
      *(int *)(local_48 + 0x240) = 0;
      if (*(int *)(local_48 + 0x230) < 1) {
        *(int *)(local_48 + 0x230) = 0;
        *(int *)(local_48 + 0x23c) = 0;
      }
      goto switchD_00470d92_caseD_4;
    }
    if (local_50 != 0x140) {
      if (local_50 == 0x118) {
        if (*(int *)(local_48 + 0x22c) < 1) {
          pfStack_33c = (function<void___cdecl(void)> *)0x472bc2;
          FUN_0040d5f0();
          *(int *)(local_48 + 0x230) = 0;
          *(int *)(local_48 + 0x218) = 0;
          *(int *)(local_48 + 0x238) = 0;
          *(int *)(local_48 + 0x244) = 0;
          *(int *)(local_48 + 0x220) = 0;
          *(int *)(local_48 + 0x22c) = 0;
          pfStack_33c = (function<void___cdecl(void)> *)0x0;
          pCStack_340 = (CMFCColorMenuButton *)0x2;
          iStack_344 = 0x472c24;
          (**(code **)(*(int *)local_48 + 0x138))();
          *(int *)(local_48 + 0x1a4) = 6;
          pfStack_33c = *(function<void___cdecl(void)> **)(local_48 + 500);
          pCStack_340 = (CMFCColorMenuButton *)0x4e30;
          iStack_344 = 0;
          uStack_348 = 0;
          pcStack_34c = (char *)0x0;
          pCStack_350 = local_48;
          pcStack_354 = (char *)0x472c64;
          FUN_0042f340();
        }
      }
      else if (local_50 == 300) {
        pfStack_33c = (function<void___cdecl(void)> *)0x47129c;
        iVar3 = FUN_00465f90();
        if (iVar3 != 0) {
          pfStack_33c = (function<void___cdecl(void)> *)0x4712a8;
          iVar3 = FUN_00465f90();
          if (*(int *)(iVar3 + 4) == 0x4f) goto switchD_00470d92_caseD_4;
        }
        if (*(int *)(local_48 + 0x1a8) == 1) {
          *(int *)(local_48 + 0x1a8) = 2;
          pfStack_33c = (function<void___cdecl(void)> *)0x40;
          pCStack_340 = (CMFCColorMenuButton *)0x15;
          iStack_344 = 0x4712e4;
          (**(code **)(*(int *)local_48 + 0x138))();
          local_1f0 = (undefined1 *)&pcStack_358;
          pcStack_35c = "character/swordman/effect/animation/bloodyrave/end.ani";
          iStack_360 = 0x4712fa;
          FUN_004054a0();
          pcStack_35c = (char *)0x471307;
          local_104 = (**(code **)(*(int *)local_48 + 0x78))();
          *(int *)(local_104 + 0x40) = *(int *)(local_48 + 500) * 0x32 + *(int *)(local_104 + 0x40);
          *(undefined4 *)(local_104 + 0x48) = 0x5a;
          local_1f4 = (undefined1 *)&uStack_370;
          pcStack_374 = "character/swordman/effect/animation/bloodyrave/sword1.ani";
          uStack_378 = 0x471357;
          local_88 = local_104;
          FUN_004054a0();
          pcStack_374 = (char *)0x471364;
          (**(code **)(*(int *)local_48 + 0x78))();
          local_1f8 = (undefined1 *)&uStack_388;
          pcStack_38c = "character/swordman/effect/animation/bloodyrave/sword2.ani";
          uStack_390 = 0x47137a;
          FUN_004054a0();
          pcStack_38c = (char *)0x471387;
          (**(code **)(*(int *)local_48 + 0x78))();
          local_1fc = auStack_3a0;
          pcStack_3a4 = "character/swordman/effect/animation/bloodyrave/sword3.ani";
          uStack_3a8 = 0x47139d;
          FUN_004054a0();
          pcStack_3a4 = (char *)0x4713aa;
          (**(code **)(*(int *)local_48 + 0x78))();
          local_200 = auStack_3b8;
          FUN_004054a0("character/swordman/effect/animation/bloodyrave/sword4.ani");
          (**(code **)(*(int *)local_48 + 0x78))();
          local_204 = (undefined1 *)&pCStack_350;
          pcStack_354 = "character/swordman/effect/animation/bloodyrave/loop1.ani";
          pcStack_358 = (char *)0x4713e3;
          FUN_004054a0();
          pcStack_354 = (char *)0x4713eb;
          FUN_00630660();
          local_208 = (undefined1 *)&pCStack_350;
          pcStack_354 = "character/swordman/effect/animation/bloodyrave/loop2.ani";
          pcStack_358 = (char *)0x471401;
          FUN_004054a0();
          pcStack_354 = (char *)0x471409;
          FUN_00630660();
          local_20c = (undefined1 *)&pCStack_350;
          pcStack_354 = "character/swordman/effect/animation/bloodyrave/typhoon.ani";
          pcStack_358 = (char *)0x47141f;
          FUN_004054a0();
          pcStack_354 = (char *)0x471427;
          FUN_00630660();
        }
      }
      else if (((local_50 == 0x136) && (*(int *)(local_48 + 0x1a8) == 0)) &&
              (*(int *)(local_48 + 0x230) < 1)) {
        *(int *)(local_48 + 0x230) = 0;
        *(int *)(local_48 + 0x23c) = 0;
        *(int *)(local_48 + 0x1a8) = 1;
        pfStack_33c = (function<void___cdecl(void)> *)0x2c;
        pCStack_340 = (CMFCColorMenuButton *)0x15;
        iStack_344 = 0x471e12;
        (**(code **)(*(int *)local_48 + 0x138))();
        iStack_344 = 0x2b;
        uStack_348 = 3;
        pcStack_34c = "j";
        (**(code **)(*(int *)local_48 + 0x13c))();
        pcStack_34c = (char *)0x0;
        pCStack_350 = (CMFCColorMenuButton *)0x1;
        pcStack_354 = (char *)0x44;
        pcStack_358 = (char *)0x471e34;
        FUN_0047bd30();
        pCStack_350 = (CMFCColorMenuButton *)0x471e39;
        pCStack_350 = (CMFCColorMenuButton *)thunk_FUN_006e5750();
        pcStack_354 = (char *)0x471e42;
        FUN_00631910();
        local_244 = (undefined1 *)&iStack_360;
        pcStack_364 = "character/swordman/effect/animation/chargecrash/up-slash.ani";
        uStack_368 = 0x471e58;
        FUN_004054a0();
        pcStack_364 = (char *)0x471e65;
        local_158 = (**(code **)(*(int *)local_48 + 0x78))();
        *(undefined1 *)(local_158 + 0xe0) = 1;
        local_248 = (undefined1 *)&pCStack_350;
        pcStack_354 = "sounds/char/swordman/sm_chargecrash_up.wav";
        pcStack_358 = (char *)0x471e8d;
        FUN_004054a0();
        pcStack_354 = (char *)0x471e92;
        FUN_004c3500();
      }
      goto switchD_00470d92_caseD_4;
    }
    if (local_48[0xdf0] != (CMFCColorMenuButton)0x0) {
      pfStack_33c = (function<void___cdecl(void)> *)0x0;
      pCStack_340 = (CMFCColorMenuButton *)0x471ec1;
      iVar3 = FUN_00405270();
      if (*(int *)(iVar3 + 4) != 0) {
        pfStack_33c = (function<void___cdecl(void)> *)0x0;
        pCStack_340 = (CMFCColorMenuButton *)0x471ed7;
        iVar3 = FUN_00405270();
        pfStack_33c = *(function<void___cdecl(void)> **)(iVar3 + 4);
        pCStack_340 = (CMFCColorMenuButton *)0x471ee0;
        game_loop_helper_e9240();
        pCStack_340 = (CMFCColorMenuButton *)0x471ee7;
        iVar3 = game_loop_helper_cc840();
        if (*(int *)(iVar3 + 0x140) == 0) {
          if (*(int *)(local_48 + 0x1a8) < 2) {
            pfStack_33c = (function<void___cdecl(void)> *)0x471f04;
            FUN_00466790();
          }
          goto LAB_00472066;
        }
      }
      pfStack_33c = (function<void___cdecl(void)> *)0x0;
      pCStack_340 = (CMFCColorMenuButton *)0x471f1a;
      iVar3 = FUN_00405270();
      if (*(int *)(iVar3 + 4) != 0) {
        pfStack_33c = (function<void___cdecl(void)> *)0x0;
        pCStack_340 = (CMFCColorMenuButton *)0x471f30;
        iVar3 = FUN_00405270();
        pfStack_33c = *(function<void___cdecl(void)> **)(iVar3 + 4);
        pCStack_340 = (CMFCColorMenuButton *)0x471f39;
        game_loop_helper_e9240();
        pCStack_340 = (CMFCColorMenuButton *)0x471f40;
        iVar3 = game_loop_helper_cc840();
        if (*(int *)(iVar3 + 0x140) == 1) {
          if (*(int *)(local_48 + 0x1a8) < 3) {
            pfStack_33c = (function<void___cdecl(void)> *)0x471f5d;
            FUN_00466790();
          }
          goto LAB_00472066;
        }
      }
      pfStack_33c = (function<void___cdecl(void)> *)0x0;
      pCStack_340 = (CMFCColorMenuButton *)0x471f73;
      iVar3 = FUN_00405270();
      if (*(int *)(iVar3 + 4) != 0) {
        pfStack_33c = (function<void___cdecl(void)> *)0x0;
        pCStack_340 = (CMFCColorMenuButton *)0x471f89;
        iVar3 = FUN_00405270();
        pfStack_33c = *(function<void___cdecl(void)> **)(iVar3 + 4);
        pCStack_340 = (CMFCColorMenuButton *)0x471f92;
        game_loop_helper_e9240();
        pCStack_340 = (CMFCColorMenuButton *)0x471f99;
        iVar3 = game_loop_helper_cc840();
        if (*(int *)(iVar3 + 0x140) == 2) {
          if (*(int *)(local_48 + 0x1a8) < 2) {
            pfStack_33c = (function<void___cdecl(void)> *)0x471fb6;
            FUN_00466790();
          }
          goto LAB_00472066;
        }
      }
      pfStack_33c = (function<void___cdecl(void)> *)0x0;
      pCStack_340 = (CMFCColorMenuButton *)0x471fcc;
      iVar3 = FUN_00405270();
      if (*(int *)(iVar3 + 4) != 0) {
        pfStack_33c = (function<void___cdecl(void)> *)0x0;
        pCStack_340 = (CMFCColorMenuButton *)0x471fe2;
        iVar3 = FUN_00405270();
        pfStack_33c = *(function<void___cdecl(void)> **)(iVar3 + 4);
        pCStack_340 = (CMFCColorMenuButton *)0x471feb;
        game_loop_helper_e9240();
        pCStack_340 = (CMFCColorMenuButton *)0x471ff2;
        iVar3 = game_loop_helper_cc840();
        if (*(int *)(iVar3 + 0x140) == 3) {
          if (*(int *)(local_48 + 0x1a8) < 1) {
            pfStack_33c = (function<void___cdecl(void)> *)0x47200f;
            FUN_00466790();
          }
          goto LAB_00472066;
        }
      }
      pfStack_33c = (function<void___cdecl(void)> *)0x0;
      pCStack_340 = (CMFCColorMenuButton *)0x472022;
      iVar3 = FUN_00405270();
      if (*(int *)(iVar3 + 4) != 0) {
        pfStack_33c = (function<void___cdecl(void)> *)0x0;
        pCStack_340 = (CMFCColorMenuButton *)0x472038;
        iVar3 = FUN_00405270();
        pfStack_33c = *(function<void___cdecl(void)> **)(iVar3 + 4);
        pCStack_340 = (CMFCColorMenuButton *)0x472041;
        game_loop_helper_e9240();
        pCStack_340 = (CMFCColorMenuButton *)0x472048;
        iVar3 = game_loop_helper_cc840();
        if ((*(int *)(iVar3 + 0x140) == 5) && (*(int *)(local_48 + 0x1a8) < 2)) {
          pfStack_33c = (function<void___cdecl(void)> *)0x472065;
          FUN_00466790();
        }
      }
    }
LAB_00472066:
    if (local_48[0xdf1] != (CMFCColorMenuButton)0x0) {
      pfStack_33c = (function<void___cdecl(void)> *)0x2e;
      pCStack_340 = (CMFCColorMenuButton *)0x47207e;
      img_path_loader_21();
    }
    if (*(int *)(local_48 + 0x230) < 1) {
      *(int *)(local_48 + 0x230) = 0;
      *(int *)(local_48 + 0x23c) = 0;
    }
    goto switchD_00470d92_caseD_4;
  }
  if (local_50 == 0x10e) {
switchD_00470d92_caseD_3c:
    *(int *)(local_48 + 0x234) = 0;
    *(int *)(local_48 + 0x240) = 0;
    if (*(int *)(local_48 + 0x230) < 1) {
      *(int *)(local_48 + 0x230) = 0;
      *(int *)(local_48 + 0x23c) = 0;
      pfStack_33c = (function<void___cdecl(void)> *)0x4711f4;
      (**(code **)(*(int *)local_48 + 0x134))();
    }
  }
  else {
    switch(local_50) {
    case 0:
      *(int *)(local_48 + 0x1a8) = 0;
      if (local_48[0xdfc] == (CMFCColorMenuButton)0x0) {
        if ((((local_48[0xdeb] == (CMFCColorMenuButton)0x0) &&
             (local_48[0xdec] == (CMFCColorMenuButton)0x0)) &&
            (local_48[0xded] == (CMFCColorMenuButton)0x0)) &&
           (local_48[0xdee] == (CMFCColorMenuButton)0x0)) {
          if (local_48[0xdef] == (CMFCColorMenuButton)0x0) {
            if (local_48[0xdf0] == (CMFCColorMenuButton)0x0) {
              if (local_48[0xdf1] != (CMFCColorMenuButton)0x0) {
                pfStack_33c = (function<void___cdecl(void)> *)0x2e;
                pCStack_340 = (CMFCColorMenuButton *)0x471075;
                img_path_loader_21();
              }
            }
            else {
              pfStack_33c = (function<void___cdecl(void)> *)0x47105a;
              FUN_00466790();
            }
          }
          else {
            pfStack_33c = (function<void___cdecl(void)> *)0x471041;
            FUN_00466700();
          }
        }
        else {
          pfStack_33c = (function<void___cdecl(void)> *)0x0;
          pCStack_340 = (CMFCColorMenuButton *)0x1;
          iStack_344 = 0x47101c;
          (**(code **)(*(int *)local_48 + 0x138))();
          *(int *)(local_48 + 0x1a4) = 1;
        }
      }
      else {
        local_48[0xdfc] = (CMFCColorMenuButton)0x0;
        pfStack_33c = (function<void___cdecl(void)> *)0x0;
        pCStack_340 = (CMFCColorMenuButton *)0xe;
        iStack_344 = 0x470e44;
        (**(code **)(*(int *)local_48 + 0x138))();
        *(int *)(local_48 + 0x1a4) = 2;
        if (local_48[0xa8f] != (CMFCColorMenuButton)0x0) {
          pfStack_33c = (function<void___cdecl(void)> *)0x1;
          pCStack_340 = (CMFCColorMenuButton *)0x12;
          iStack_344 = 0x470e6f;
          fVar8 = (float10)FUN_0047bd30();
          local_1bc = (float)fVar8;
          *(int *)(local_48 + 0xa24) = (int)(local_1bc * 1000.0);
          local_1c0 = 0xffffffff;
          pfStack_33c = (function<void___cdecl(void)> *)&local_1c0;
          pCStack_340 = (CMFCColorMenuButton *)0x470eae;
          FUN_0040d490();
          local_270 = (undefined1 *)&pCStack_350;
          pcStack_354 = "character/swordman/effect/animation/ghoststep/stay1.ani";
          pcStack_358 = (char *)0x470ec4;
          FUN_004054a0();
          pcStack_354 = (char *)0x470ecc;
          FUN_00630660();
          pcStack_354 = "character/swordman/effect/animation/ghoststep/stay2.ani";
          pcStack_358 = (char *)0x470ee2;
          FUN_004054a0();
          pcStack_354 = (char *)0x470eea;
          FUN_00630660();
          local_1c4 = (undefined1 *)&pCStack_350;
          pcStack_354 = "character/swordman/effect/animation/ghoststep/ghost1.ani";
          pcStack_358 = (char *)0x470f00;
          FUN_004054a0();
          pcStack_354 = (char *)0x470f08;
          FUN_00630660();
          local_1c8 = (undefined1 *)&pCStack_350;
          pcStack_354 = "character/swordman/effect/animation/ghoststep/ghost2.ani";
          pcStack_358 = (char *)0x470f1e;
          FUN_004054a0();
          pcStack_354 = (char *)0x470f26;
          FUN_00630660();
          local_1cc = (undefined1 *)&pCStack_350;
          pcStack_354 = "character/swordman/effect/animation/ghoststep/ghost3.ani";
          pcStack_358 = (char *)0x470f3c;
          FUN_004054a0();
          pcStack_354 = (char *)0x470f44;
          FUN_00630660();
          local_1d0 = (undefined1 *)&pCStack_350;
          pcStack_354 = "character/swordman/effect/animation/ghoststep/ghost1.ani";
          pcStack_358 = (char *)0x470f5a;
          FUN_004054a0();
          pcStack_354 = (char *)0x470f67;
          (**(code **)(*(int *)local_48 + 0x78))();
          local_1d4 = (undefined1 *)&uStack_368;
          pcStack_36c = "character/swordman/effect/animation/ghoststep/ghost2.ani";
          uStack_370 = 0x470f7d;
          FUN_004054a0();
          pcStack_36c = (char *)0x470f8a;
          (**(code **)(*(int *)local_48 + 0x78))();
          local_1d8 = (undefined1 *)&uStack_380;
          pcStack_384 = "character/swordman/effect/animation/ghoststep/ghost3.ani";
          uStack_388 = 0x470fa0;
          FUN_004054a0();
          pcStack_384 = (char *)0x470fad;
          (**(code **)(*(int *)local_48 + 0x78))();
          local_1dc = (undefined1 *)&pCStack_350;
          pcStack_354 = "sounds/char/swordman/effect/keiga_in.wav";
          pcStack_358 = (char *)0x470fc3;
          FUN_004054a0();
          pcStack_354 = (char *)0x470fc8;
          FUN_004c3500();
        }
      }
      if (*(int *)(local_48 + 0xdd8) == 4) {
        pfStack_33c = (function<void___cdecl(void)> *)0x471087;
        piVar7 = (int *)game_get_state_ptr_d1520();
        pfStack_33c = (function<void___cdecl(void)> *)(*piVar7 + 0x17c);
        pCStack_340 = (CMFCColorMenuButton *)0x471094;
        game_get_state_ptr_d1520();
        pCStack_340 = (CMFCColorMenuButton *)0x4710a1;
        pcVar2 = (char *)FUN_00489ea0();
        if ((*pcVar2 != '\0') && (*(int *)(local_48 + 0x910) == 0)) {
          pfStack_33c = (function<void___cdecl(void)> *)0x0;
          pCStack_340 = (CMFCColorMenuButton *)0x9;
          iStack_344 = 0x4710c8;
          (**(code **)(*(int *)local_48 + 0x138))();
        }
      }
      break;
    case 1:
      if ((local_48[0xded] == (CMFCColorMenuButton)0x0) &&
         (local_48[0xdee] == (CMFCColorMenuButton)0x0)) {
        *(int *)(local_48 + 0x230) = 0;
      }
      else {
        *(int *)(local_48 + 0x230) = *(int *)(local_48 + 0x754) * 0x8e;
      }
      if ((local_48[0xdeb] == (CMFCColorMenuButton)0x0) &&
         (local_48[0xdec] == (CMFCColorMenuButton)0x0)) {
        *(int *)(local_48 + 0x234) = 0;
      }
      else {
        *(int *)(local_48 + 0x234) = *(int *)(local_48 + 0x754) * 0x72;
      }
      pfStack_33c = (function<void___cdecl(void)> *)0x472cf3;
      FUN_00466500();
      if (((local_48[0xdeb] == (CMFCColorMenuButton)0x0 &&
           local_48[0xdec] == (CMFCColorMenuButton)0x0) &&
          local_48[0xded] == (CMFCColorMenuButton)0x0) &&
          local_48[0xdee] == (CMFCColorMenuButton)0x0) {
        pfStack_33c = (function<void___cdecl(void)> *)0x472d34;
        (**(code **)(*(int *)local_48 + 0x134))();
      }
      else if (local_48[0xdef] == (CMFCColorMenuButton)0x0) {
        if (local_48[0xdf0] == (CMFCColorMenuButton)0x0) {
          if (local_48[0xdf1] == (CMFCColorMenuButton)0x0) {
            if (local_48[0xdfc] != (CMFCColorMenuButton)0x0) {
              pfStack_33c = (function<void___cdecl(void)> *)0x472daa;
              CMFCColorMenuButton::Initialize(local_48);
              local_48[0xdfc] = (CMFCColorMenuButton)0x0;
              pfStack_33c = (function<void___cdecl(void)> *)0x0;
              pCStack_340 = (CMFCColorMenuButton *)0xe;
              iStack_344 = 0x472dc8;
              (**(code **)(*(int *)local_48 + 0x138))();
              *(int *)(local_48 + 0x1a4) = 2;
              if (local_48[0xa8f] != (CMFCColorMenuButton)0x0) {
                pfStack_33c = (function<void___cdecl(void)> *)0x1;
                pCStack_340 = (CMFCColorMenuButton *)0x12;
                iStack_344 = 0x472df3;
                fVar8 = (float10)FUN_0047bd30();
                local_15c = (float)fVar8;
                *(int *)(local_48 + 0xa24) = (int)(local_15c * 1000.0);
                local_160 = 0xffffffff;
                pfStack_33c = (function<void___cdecl(void)> *)&local_160;
                pCStack_340 = (CMFCColorMenuButton *)0x472e32;
                FUN_0040d490();
                local_288 = (undefined1 *)&pCStack_350;
                pcStack_354 = "character/swordman/effect/animation/ghoststep/stay1.ani";
                pcStack_358 = (char *)0x472e48;
                FUN_004054a0();
                pcStack_354 = (char *)0x472e50;
                FUN_00630660();
                local_28c = (undefined1 *)&pCStack_350;
                pcStack_354 = "character/swordman/effect/animation/ghoststep/stay2.ani";
                pcStack_358 = (char *)0x472e66;
                FUN_004054a0();
                pcStack_354 = (char *)0x472e6e;
                FUN_00630660();
                local_290 = (undefined1 *)&pCStack_350;
                pcStack_354 = "character/swordman/effect/animation/ghoststep/ghost1.ani";
                pcStack_358 = (char *)0x472e84;
                FUN_004054a0();
                pcStack_354 = (char *)0x472e8c;
                FUN_00630660();
                local_294 = (undefined1 *)&pCStack_350;
                pcStack_354 = "character/swordman/effect/animation/ghoststep/ghost2.ani";
                pcStack_358 = (char *)0x472ea2;
                FUN_004054a0();
                pcStack_354 = (char *)0x472eaa;
                FUN_00630660();
                local_298 = (undefined1 *)&pCStack_350;
                pcStack_354 = "character/swordman/effect/animation/ghoststep/ghost3.ani";
                pcStack_358 = (char *)0x472ec0;
                FUN_004054a0();
                pcStack_354 = (char *)0x472ec8;
                FUN_00630660();
                local_29c = (undefined1 *)&pCStack_350;
                pcStack_354 = "character/swordman/effect/animation/ghoststep/ghost1.ani";
                pcStack_358 = (char *)0x472ede;
                FUN_004054a0();
                pcStack_354 = (char *)0x472eeb;
                (**(code **)(*(int *)local_48 + 0x78))();
                local_2a0 = (undefined1 *)&uStack_368;
                pcStack_36c = "character/swordman/effect/animation/ghoststep/ghost2.ani";
                uStack_370 = 0x472f01;
                FUN_004054a0();
                pcStack_36c = (char *)0x472f0e;
                (**(code **)(*(int *)local_48 + 0x78))();
                local_2a4 = (undefined1 *)&uStack_380;
                pcStack_384 = "character/swordman/effect/animation/ghoststep/ghost3.ani";
                uStack_388 = 0x472f24;
                FUN_004054a0();
                pcStack_384 = (char *)0x472f31;
                (**(code **)(*(int *)local_48 + 0x78))();
                local_2a8 = (undefined1 *)&pCStack_350;
                pcStack_354 = "sounds/char/swordman/effect/keiga_in.wav";
                pcStack_358 = (char *)0x472f47;
                FUN_004054a0();
                pcStack_354 = (char *)0x472f4c;
                FUN_004c3500();
              }
            }
          }
          else {
            pfStack_33c = (function<void___cdecl(void)> *)0x2e;
            pCStack_340 = (CMFCColorMenuButton *)0x472d8a;
            img_path_loader_21();
          }
        }
        else {
          pfStack_33c = (function<void___cdecl(void)> *)0x472d6c;
          FUN_00466790();
        }
      }
      else {
        pfStack_33c = (function<void___cdecl(void)> *)0x472d50;
        FUN_00466700();
      }
      break;
    case 2:
      if ((local_48[0xded] == (CMFCColorMenuButton)0x0) &&
         (local_48[0xdee] == (CMFCColorMenuButton)0x0)) {
        *(int *)(local_48 + 0x230) = 0;
      }
      else {
        *(int *)(local_48 + 0x230) = *(int *)(local_48 + 0x754) * 0x11c;
      }
      if ((local_48[0xdeb] == (CMFCColorMenuButton)0x0) &&
         (local_48[0xdec] == (CMFCColorMenuButton)0x0)) {
        *(int *)(local_48 + 0x234) = 0;
      }
      else {
        *(int *)(local_48 + 0x234) = *(int *)(local_48 + 0x754) * 0xe4;
      }
      if ((local_48[0xded] == (CMFCColorMenuButton)0x0) &&
         (local_48[0xdee] == (CMFCColorMenuButton)0x0)) {
        local_bc = 0;
      }
      else {
        local_bc = 1;
      }
      local_69 = (char)local_bc;
      if ((char)local_bc == '\0') {
        pfStack_33c = (function<void___cdecl(void)> *)0x473029;
        (**(code **)(*(int *)local_48 + 0x134))();
      }
      if (local_48[0xdef] == (CMFCColorMenuButton)0x0) {
        if (local_48[0xdf0] == (CMFCColorMenuButton)0x0) {
          if (local_48[0xdf1] != (CMFCColorMenuButton)0x0) {
            pfStack_33c = (function<void___cdecl(void)> *)0x2e;
            pCStack_340 = (CMFCColorMenuButton *)0x4731a5;
            img_path_loader_21();
          }
        }
        else {
          pfStack_33c = (function<void___cdecl(void)> *)0x47305d;
          pCVar6 = (CMFCColorMenuButton *)game_get_player_or_session_blob();
          if (local_48 == pCVar6) {
            pfStack_33c = (function<void___cdecl(void)> *)0x1;
            pCStack_340 = (CMFCColorMenuButton *)0x473069;
            FUN_00667300();
          }
          pfStack_33c = (function<void___cdecl(void)> *)0x0;
          pCStack_340 = (CMFCColorMenuButton *)0xf;
          iStack_344 = 0x473080;
          (**(code **)(*(int *)local_48 + 0x138))();
          iStack_344 = 0;
          uStack_348 = 1;
          pcStack_34c = "j";
          (**(code **)(*(int *)local_48 + 0x13c))();
          pfStack_33c = (function<void___cdecl(void)> *)0x0;
          pCStack_340 = (CMFCColorMenuButton *)0x64;
          iStack_344 = 0x4730a0;
          FUN_00631910();
          *(int *)(local_48 + 0x1a4) = 0xb;
          local_2ac = (undefined1 *)&pCStack_350;
          pcStack_354 = "SM_THRUST";
          pcStack_358 = (char *)0x4730c2;
          FUN_004054a0();
          pcStack_354 = (char *)0x4730c7;
          FUN_004c3570();
          *(int *)(local_48 + 0x23c) = -500;
          if ((*(int *)(local_48 + 500) == 1) && (local_48[0xdee] != (CMFCColorMenuButton)0x0)) {
            *(int *)(local_48 + 0x230) = 200;
          }
          else if ((*(int *)(local_48 + 500) == -1) && (local_48[0xded] != (CMFCColorMenuButton)0x0)
                  ) {
            *(int *)(local_48 + 0x230) = 200;
          }
          else if ((*(int *)(local_48 + 500) == -1) && (local_48[0xdee] != (CMFCColorMenuButton)0x0)
                  ) {
            *(int *)(local_48 + 0x230) = 0;
          }
          else if ((*(int *)(local_48 + 500) == 1) && (local_48[0xded] != (CMFCColorMenuButton)0x0))
          {
            *(int *)(local_48 + 0x230) = 0;
          }
          else {
            *(int *)(local_48 + 0x230) = 100;
          }
        }
      }
      else {
        pfStack_33c = (function<void___cdecl(void)> *)0x473040;
        FUN_00466700();
      }
      if (*(int *)(local_48 + 0xe00) != *(int *)(local_48 + 500)) {
        pfStack_33c = (function<void___cdecl(void)> *)0x4731c2;
        CMFCColorMenuButton::Initialize(local_48);
        pfStack_33c = (function<void___cdecl(void)> *)0x0;
        pCStack_340 = (CMFCColorMenuButton *)0x1;
        iStack_344 = 0x4731d6;
        (**(code **)(*(int *)local_48 + 0x138))();
        *(int *)(local_48 + 0x1a4) = 1;
      }
      break;
    case 3:
      if ((local_48[0xded] == (CMFCColorMenuButton)0x0) &&
         (local_48[0xdee] == (CMFCColorMenuButton)0x0)) {
        *(int *)(local_48 + 0x230) = 0;
      }
      else {
        *(int *)(local_48 + 0x230) = *(int *)(local_48 + 0x754) * 0x8e;
      }
      if ((local_48[0xdeb] == (CMFCColorMenuButton)0x0) &&
         (local_48[0xdec] == (CMFCColorMenuButton)0x0)) {
        *(int *)(local_48 + 0x234) = 0;
      }
      else {
        *(int *)(local_48 + 0x234) = (*(int *)(local_48 + 0x754) * 0x72) / 2;
      }
      if ((*(int *)(local_48 + 0x238) < 1) && (*(int *)(local_48 + 0x910) == 7)) {
        pfStack_33c = (function<void___cdecl(void)> *)0x47232a;
        piVar7 = (int *)(**(code **)(*(int *)local_48 + 0x9c))();
        if (*piVar7 < 8) {
          pfStack_33c = (function<void___cdecl(void)> *)0x0;
          pCStack_340 = (CMFCColorMenuButton *)0x7;
          iStack_344 = 0x472343;
          (**(code **)(*(int *)local_48 + 0x138))();
          *(int *)(local_48 + 0x1a4) = 3;
          *(int *)(local_48 + 0x1a8) = 0;
          iStack_344 = 8;
          uStack_348 = 0x47236f;
          (**(code **)(*(int *)local_48 + 0x8c))();
          uStack_348 = 0x47237c;
          (**(code **)(*(int *)local_48 + 0x58))();
          uStack_348 = 0x472383;
          iVar3 = FUN_0062fc30();
          uStack_348 = *(undefined4 *)(iVar3 + 0x44);
          pcStack_34c = (char *)0x472397;
          (**(code **)(*(int *)local_48 + 0x90))();
        }
      }
      if (local_48[0xdf0] != (CMFCColorMenuButton)0x0) {
        pfStack_33c = (function<void___cdecl(void)> *)0x0;
        pCStack_340 = (CMFCColorMenuButton *)0x8;
        iStack_344 = 0x4723ba;
        (**(code **)(*(int *)local_48 + 0x138))();
        iStack_344 = 0;
        uStack_348 = 0;
        pcStack_34c = "j";
        (**(code **)(*(int *)local_48 + 0x13c))();
        pfStack_33c = (function<void___cdecl(void)> *)0x0;
        pCStack_340 = (CMFCColorMenuButton *)0x64;
        iStack_344 = 0x4723da;
        FUN_00631910();
        *(int *)(local_48 + 0x1a4) = 0xc;
        *(int *)(local_48 + 0x1a8) = 0;
        pfStack_33c = (function<void___cdecl(void)> *)0x4723fc;
        FUN_00466590();
      }
      if (*(int *)(local_48 + 0x22c) < 0) {
        *(int *)(local_48 + 0x238) = 0;
        *(int *)(local_48 + 0x22c) = 0;
        *(int *)(local_48 + 0x220) = 0;
        pfStack_33c = (function<void___cdecl(void)> *)0x472440;
        (**(code **)(*(int *)local_48 + 0x134))();
        local_254 = (undefined1 *)&pCStack_350;
        pcStack_354 = "JUMP_END";
        pcStack_358 = (char *)0x472456;
        FUN_004054a0();
        pcStack_354 = (char *)0x47245b;
        FUN_004c3570();
      }
      break;
    case 8:
      *(int *)(local_48 + 0x218) =
           -*(int *)(local_48 + 500) * *(int *)(local_48 + 0x230) * param_1 +
           *(int *)(local_48 + 0x218);
      *(int *)(local_48 + 0x220) = *(int *)(local_48 + 0x238) * param_1 + *(int *)(local_48 + 0x220)
      ;
      *(int *)(local_48 + 0x238) = *(int *)(local_48 + 0x244) * param_1 + *(int *)(local_48 + 0x238)
      ;
      if ((*(int *)(local_48 + 0x22c) < 0) && (*(int *)(local_48 + 0x238) < 0)) {
        *(int *)(local_48 + 0x230) = 0;
        *(int *)(local_48 + 0x238) = 0;
        *(int *)(local_48 + 0x22c) = 0;
        *(int *)(local_48 + 0x220) = 0;
        pfStack_33c = (function<void___cdecl(void)> *)0x47216f;
        (**(code **)(*(int *)local_48 + 0x134))();
        local_24c = (undefined1 *)&pCStack_350;
        pcStack_354 = "JUMP_END";
        pcStack_358 = (char *)0x472185;
        FUN_004054a0();
        pcStack_354 = (char *)0x47218a;
        FUN_004c3570();
      }
      break;
    case 0xc:
      *(int *)(local_48 + 0x218) = *(int *)(local_48 + 0x230) * param_1 + *(int *)(local_48 + 0x218)
      ;
      *(int *)(local_48 + 0x230) = *(int *)(local_48 + 0x23c) * param_1 + *(int *)(local_48 + 0x230)
      ;
      *(int *)(local_48 + 0x21c) = *(int *)(local_48 + 0x234) * param_1 + *(int *)(local_48 + 0x21c)
      ;
      *(int *)(local_48 + 0x234) = *(int *)(local_48 + 0x240) * param_1 + *(int *)(local_48 + 0x234)
      ;
      *(int *)(local_48 + 0x220) = *(int *)(local_48 + 0x238) * param_1 + *(int *)(local_48 + 0x220)
      ;
      *(int *)(local_48 + 0x238) = *(int *)(local_48 + 0x244) * param_1 + *(int *)(local_48 + 0x238)
      ;
      if (*(int *)(local_48 + 0x22c) < 0) {
        *(int *)(local_48 + 0x238) = 0;
        *(int *)(local_48 + 0x22c) = 0;
        *(int *)(local_48 + 0x220) = 0;
        pfStack_33c = (function<void___cdecl(void)> *)0x472560;
        (**(code **)(*(int *)local_48 + 0x134))();
        local_258 = (undefined1 *)&pCStack_350;
        pcStack_354 = "JUMP_END";
        pcStack_358 = (char *)0x472576;
        FUN_004054a0();
        pcStack_354 = (char *)0x47257b;
        FUN_004c3570();
      }
      break;
    case 0xd:
      *(int *)(local_48 + 0x218) =
           -*(int *)(local_48 + 500) * *(int *)(local_48 + 0x230) * param_1 +
           *(int *)(local_48 + 0x218);
      *(int *)(local_48 + 0x220) = *(int *)(local_48 + 0x238) * param_1 + *(int *)(local_48 + 0x220)
      ;
      *(int *)(local_48 + 0x238) = *(int *)(local_48 + 0x244) * param_1 + *(int *)(local_48 + 0x238)
      ;
      if ((*(int *)(local_48 + 0x22c) < 0) && (*(int *)(local_48 + 0x238) < 0)) {
        *(int *)(local_48 + 0x230) = 0;
        *(int *)(local_48 + 0x238) = 0;
        *(int *)(local_48 + 0x22c) = 0;
        *(int *)(local_48 + 0x220) = 0;
        pfStack_33c = (function<void___cdecl(void)> *)0x472257;
        (**(code **)(*(int *)local_48 + 0x134))();
        local_250 = (undefined1 *)&pCStack_350;
        pcStack_354 = "JUMP_END";
        pcStack_358 = (char *)0x47226d;
        FUN_004054a0();
        pcStack_354 = (char *)0x472272;
        FUN_004c3570();
      }
      break;
    case 0x32:
      *(int *)(local_48 + 0x234) = 0;
      *(int *)(local_48 + 0x240) = 0;
      if (*(int *)(local_48 + 0x230) < 1) {
        *(int *)(local_48 + 0x230) = 0;
        *(int *)(local_48 + 0x23c) = 0;
      }
    case 0xb:
      *(int *)(local_48 + 0x234) = 0;
      *(int *)(local_48 + 0x240) = 0;
      if (*(int *)(local_48 + 0x230) < 1) {
        *(int *)(local_48 + 0x230) = 0;
        *(int *)(local_48 + 0x23c) = 0;
      }
      break;
    case 0x3c:
      goto switchD_00470d92_caseD_3c;
    case 0x46:
      if (*(int *)(local_48 + 0x1a8) == 0) {
        pfStack_33c = (function<void___cdecl(void)> *)0x4725a3;
        piVar7 = (int *)(**(code **)(*(int *)local_48 + 0x9c))();
        if (0 < *piVar7) {
          *(int *)(local_48 + 0x1a8) = 1;
          pfStack_33c = (function<void___cdecl(void)> *)0x1;
          pCStack_340 = (CMFCColorMenuButton *)0x14;
          iStack_344 = 0x4725c1;
          iVar3 = FUN_0047bcc0();
          *(int *)(local_48 + 0x230) = iVar3 * 1000;
          pfStack_33c = (function<void___cdecl(void)> *)0x2;
          pCStack_340 = (CMFCColorMenuButton *)0x14;
          iStack_344 = 0x4725dc;
          iVar3 = FUN_0047bcc0();
          *(int *)(local_48 + 0x23c) = iVar3;
          pfStack_33c = *(function<void___cdecl(void)> **)(local_48 + 500);
          pCStack_340 = (CMFCColorMenuButton *)0x4e21;
          iStack_344 = 0;
          uStack_348 = 0;
          pcStack_34c = (char *)0x0;
          pCStack_350 = local_48;
          pcStack_354 = (char *)0x472618;
          FUN_0042f340();
        }
      }
      break;
    case 0x47:
      if (*(int *)(local_48 + 0x1a8) == 0) {
        pfStack_33c = (function<void___cdecl(void)> *)0x472712;
        piVar7 = (int *)(**(code **)(*(int *)local_48 + 0x9c))();
        if (0 < *piVar7) {
          pfStack_33c = (function<void___cdecl(void)> *)0x472723;
          iVar3 = FUN_00465f90();
          if (iVar3 != 0) {
            pfStack_33c = (function<void___cdecl(void)> *)0x472733;
            iVar3 = FUN_00465f90();
            if (*(int *)(iVar3 + 4) == 2) {
              pfStack_33c = (function<void___cdecl(void)> *)local_94;
              pCStack_340 = (CMFCColorMenuButton *)0x472752;
              FUN_004021b0();
              while( true ) {
                pfStack_33c = (function<void___cdecl(void)> *)local_25c;
                pCStack_340 = (CMFCColorMenuButton *)0x472776;
                pfStack_33c = (function<void___cdecl(void)> *)FUN_00402170();
                pCStack_340 = (CMFCColorMenuButton *)0x472782;
                cVar1 = FUN_00426ed0();
                if (cVar1 == '\0') break;
                pfStack_33c = *(function<void___cdecl(void)> **)(local_48 + 0x914);
                pCStack_340 = *(CMFCColorMenuButton **)(local_48 + 0x910);
                iStack_344 = 0x4727a8;
                FUN_0044ddc0();
                iStack_344 = 0x4727af;
                local_ac = (undefined1 *)FUN_005e9570();
                if (local_ac != (undefined1 *)0x0) {
                  *local_ac = 0;
                }
                pfStack_33c = (function<void___cdecl(void)> *)0x472760;
                FUN_0044dda0();
              }
              break;
            }
          }
          pfStack_33c = (function<void___cdecl(void)> *)local_98;
          pCStack_340 = (CMFCColorMenuButton *)0x4727e3;
          FUN_004021b0();
          while( true ) {
            pfStack_33c = (function<void___cdecl(void)> *)local_260;
            pCStack_340 = (CMFCColorMenuButton *)0x472807;
            pfStack_33c = (function<void___cdecl(void)> *)FUN_00402170();
            pCStack_340 = (CMFCColorMenuButton *)0x472813;
            cVar1 = FUN_00426ed0();
            if (cVar1 == '\0') break;
            pfStack_33c = *(function<void___cdecl(void)> **)(local_48 + 0x914);
            pCStack_340 = *(CMFCColorMenuButton **)(local_48 + 0x910);
            iStack_344 = 0x472839;
            FUN_0044ddc0();
            iStack_344 = 0x472840;
            local_b0 = (undefined1 *)FUN_005e9570();
            if (local_b0 != (undefined1 *)0x0) {
              *local_b0 = 1;
            }
            pfStack_33c = (function<void___cdecl(void)> *)0x4727f1;
            FUN_0044dda0();
          }
          *(int *)(local_48 + 0x1a8) = 1;
          local_264 = (undefined1 *)&pCStack_350;
          pcStack_354 = "character/swordman/effect/animation/reflectguard/charge.ani";
          pcStack_358 = (char *)0x47287c;
          FUN_004054a0();
          pcStack_354 = (char *)0x472884;
          FUN_00630660();
          local_268 = (undefined1 *)&pCStack_350;
          pcStack_354 = "character/swordman/effect/animation/reflectguard/slash.ani";
          pcStack_358 = (char *)0x47289a;
          FUN_004054a0();
          pcStack_354 = (char *)0x4728a7;
          (**(code **)(*(int *)local_48 + 0x78))();
          pfStack_33c = *(function<void___cdecl(void)> **)(local_48 + 500);
          pCStack_340 = (CMFCColorMenuButton *)0x4e40;
          iStack_344 = 0x42700000;
          uStack_348 = 0;
          pcStack_34c = (char *)0x42700000;
          pCStack_350 = local_48;
          pcStack_354 = (char *)0x4728e5;
          FUN_0042f340();
        }
      }
      break;
    case 0x48:
      if (*(int *)(local_48 + 0x1a8) == 0) {
        pfStack_33c = (function<void___cdecl(void)> *)0x47290d;
        piVar7 = (int *)(**(code **)(*(int *)local_48 + 0x9c))();
        if (0 < *piVar7) {
          pfStack_33c = (function<void___cdecl(void)> *)0x47291e;
          iVar3 = FUN_00465f90();
          if (iVar3 != 0) {
            pfStack_33c = (function<void___cdecl(void)> *)0x47292e;
            iVar3 = FUN_00465f90();
            if (*(int *)(iVar3 + 4) == 0x32) {
              pfStack_33c = (function<void___cdecl(void)> *)local_9c;
              pCStack_340 = (CMFCColorMenuButton *)0x47294d;
              FUN_004021b0();
              while( true ) {
                pfStack_33c = (function<void___cdecl(void)> *)local_26c;
                pCStack_340 = (CMFCColorMenuButton *)0x472971;
                pfStack_33c = (function<void___cdecl(void)> *)FUN_00402170();
                pCStack_340 = (CMFCColorMenuButton *)0x47297d;
                cVar1 = FUN_00426ed0();
                if (cVar1 == '\0') break;
                pfStack_33c = *(function<void___cdecl(void)> **)(local_48 + 0x914);
                pCStack_340 = *(CMFCColorMenuButton **)(local_48 + 0x910);
                iStack_344 = 0x4729a3;
                FUN_0044ddc0();
                iStack_344 = 0x4729aa;
                local_b4 = (undefined1 *)FUN_005e9570();
                if (local_b4 != (undefined1 *)0x0) {
                  *local_b4 = 0;
                }
                pfStack_33c = (function<void___cdecl(void)> *)0x47295b;
                FUN_0044dda0();
              }
              break;
            }
          }
          pfStack_33c = (function<void___cdecl(void)> *)local_a0;
          pCStack_340 = (CMFCColorMenuButton *)0x4729de;
          FUN_004021b0();
          while( true ) {
            pfStack_33c = (function<void___cdecl(void)> *)local_2cc;
            pCStack_340 = (CMFCColorMenuButton *)0x472a02;
            pfStack_33c = (function<void___cdecl(void)> *)FUN_00402170();
            pCStack_340 = (CMFCColorMenuButton *)0x472a0e;
            cVar1 = FUN_00426ed0();
            if (cVar1 == '\0') break;
            pfStack_33c = *(function<void___cdecl(void)> **)(local_48 + 0x914);
            pCStack_340 = *(CMFCColorMenuButton **)(local_48 + 0x910);
            iStack_344 = 0x472a34;
            FUN_0044ddc0();
            iStack_344 = 0x472a3b;
            local_b8 = (undefined1 *)FUN_005e9570();
            if (local_b8 != (undefined1 *)0x0) {
              *local_b8 = 1;
            }
            pfStack_33c = (function<void___cdecl(void)> *)0x4729ec;
            FUN_0044dda0();
          }
          *(int *)(local_48 + 0x1a8) = 1;
          local_274 = (undefined1 *)&pCStack_350;
          pcStack_354 = "character/swordman/effect/animation/grandwaveoncharge1.ani";
          pcStack_358 = (char *)0x472a77;
          FUN_004054a0();
          pcStack_354 = (char *)0x472a7f;
          FUN_00630660();
          local_278 = (undefined1 *)&pCStack_350;
          pcStack_354 = "character/swordman/effect/animation/grandwaveoncharge2.ani";
          pcStack_358 = (char *)0x472a95;
          FUN_004054a0();
          pcStack_354 = (char *)0x472a9d;
          FUN_00630660();
          local_27c = (undefined1 *)&pCStack_350;
          pcStack_354 = "character/swordman/effect/animation/grandwavefullcharge1.ani";
          pcStack_358 = (char *)0x472ab3;
          FUN_004054a0();
          pcStack_354 = (char *)0x472ac0;
          (**(code **)(*(int *)local_48 + 0x78))();
          local_280 = (undefined1 *)&uStack_368;
          pcStack_36c = "character/swordman/effect/animation/grandwavefullcharge2.ani";
          uStack_370 = 0x472ad6;
          FUN_004054a0();
          pcStack_36c = (char *)0x472ae3;
          (**(code **)(*(int *)local_48 + 0x78))();
          local_284 = (undefined1 *)&uStack_380;
          pcStack_384 = "character/swordman/effect/animation/grandwave.ani";
          uStack_388 = 0x472af9;
          FUN_004054a0();
          pcStack_384 = (char *)0x472b06;
          (**(code **)(*(int *)local_48 + 0x78))();
          pfStack_33c = (function<void___cdecl(void)> *)0x33;
          pCStack_340 = (CMFCColorMenuButton *)0x472b11;
          cVar1 = FUN_00467a40();
          if (cVar1 != '\0') {
            pfStack_33c = (function<void___cdecl(void)> *)0x33;
            pCStack_340 = local_48;
            iStack_344 = 0x472b23;
            iVar3 = FUN_006ca800();
            if (iVar3 != 0) {
              pfStack_33c = *(function<void___cdecl(void)> **)(local_48 + 500);
              pCStack_340 = (CMFCColorMenuButton *)0x4e28;
              iStack_344 = 0;
              uStack_348 = 0;
              pcStack_34c = (char *)0x42700000;
              pCStack_350 = local_48;
              pcStack_354 = (char *)0x472b62;
              FUN_0042f340();
              break;
            }
          }
          pfStack_33c = *(function<void___cdecl(void)> **)(local_48 + 500);
          pCStack_340 = (CMFCColorMenuButton *)0x4e33;
          iStack_344 = 0;
          uStack_348 = 0;
          pcStack_34c = (char *)0x42700000;
          pCStack_350 = local_48;
          pcStack_354 = (char *)0x472b9f;
          FUN_0042f340();
        }
      }
      break;
    case 0x4c:
      if (*(int *)(local_48 + 0x1a8) == 0) {
        pfStack_33c = (function<void___cdecl(void)> *)0x47263c;
        piVar7 = (int *)(**(code **)(*(int *)local_48 + 0x9c))();
        if (0 < *piVar7) {
          *(int *)(local_48 + 0x1a8) = 1;
          pfStack_33c = *(function<void___cdecl(void)> **)(local_48 + 500);
          pCStack_340 = (CMFCColorMenuButton *)0x4e38;
          iStack_344 = 0;
          uStack_348 = 0;
          pcStack_34c = (char *)0x0;
          pCStack_350 = local_48;
          pcStack_354 = (char *)0x472681;
          FUN_0042f340();
        }
      }
      break;
    case 0x4d:
      if (*(int *)(local_48 + 0x1a8) == 0) {
        pfStack_33c = (function<void___cdecl(void)> *)0x4726a5;
        piVar7 = (int *)(**(code **)(*(int *)local_48 + 0x9c))();
        if (0 < *piVar7) {
          *(int *)(local_48 + 0x1a8) = 1;
          pfStack_33c = *(function<void___cdecl(void)> **)(local_48 + 500);
          pCStack_340 = (CMFCColorMenuButton *)0x4e38;
          iStack_344 = 0;
          uStack_348 = 0;
          pcStack_34c = (char *)0x0;
          pCStack_350 = local_48;
          pcStack_354 = (char *)0x4726ea;
          FUN_0042f340();
        }
      }
      break;
    case 0x59:
      if ((*(int *)(local_48 + 0x1a8) == 0) &&
         (*(int *)(local_48 + 0xa90) = *(int *)(local_48 + 0xa90) - param_1,
         *(int *)(local_48 + 0xa90) < 1)) {
        *(int *)(local_48 + 0xa90) = 0;
        *(int *)(local_48 + 0x1a8) = 1;
        local_1e0 = (undefined1 *)&pCStack_350;
        pcStack_354 = "character/swordman/effect/animation/hardattackoncharge1.ani";
        pcStack_358 = (char *)0x471132;
        FUN_004054a0();
        pcStack_354 = (char *)0x47113a;
        FUN_00630660();
        local_1e4 = (undefined1 *)&pCStack_350;
        pcStack_354 = "character/swordman/effect/animation/hardattackoncharge2.ani";
        pcStack_358 = (char *)0x471150;
        FUN_004054a0();
        pcStack_354 = (char *)0x471158;
        FUN_00630660();
        local_1e8 = (undefined1 *)&pCStack_350;
        pcStack_354 = "character/swordman/effect/animation/hardattackfullcharge1.ani";
        pcStack_358 = (char *)0x47116e;
        FUN_004054a0();
        pcStack_354 = (char *)0x47117b;
        (**(code **)(*(int *)local_48 + 0x78))();
        local_1ec = (undefined1 *)&uStack_368;
        pcStack_36c = "character/swordman/effect/animation/hardattackfullcharge2.ani";
        uStack_370 = 0x471191;
        FUN_004054a0();
        pcStack_36c = (char *)0x47119e;
        (**(code **)(*(int *)local_48 + 0x78))();
      }
      break;
    case 100:
      if (*(int *)(local_48 + 0x19c) == 1) {
        if (*(int *)(local_48 + 0x1a8) < 3) {
          if ((0 < *(int *)(local_48 + 0x1b8)) &&
             (*(int *)(local_48 + 0x1b8) = *(int *)(local_48 + 0x1b8) - param_1,
             *(int *)(local_48 + 0x1b8) < 1)) {
            *(int *)(local_48 + 0x1a8) = 3;
          }
          *(int *)(local_48 + 0x218) =
               *(int *)(local_48 + 0x230) * param_1 + *(int *)(local_48 + 0x218);
          *(int *)(local_48 + 0x21c) =
               *(int *)(local_48 + 0x234) * param_1 + *(int *)(local_48 + 0x21c);
          *(int *)(local_48 + 0x220) =
               *(int *)(local_48 + 0x238) * param_1 + *(int *)(local_48 + 0x220);
          *(int *)(local_48 + 0x238) =
               *(int *)(local_48 + 0x244) * param_1 + *(int *)(local_48 + 0x238);
        }
        if (*(int *)(local_48 + 0x1a8) == 3) {
          *(int *)(local_48 + 0x1a8) = 4;
          *(int *)(local_48 + 0x230) = 0;
          *(int *)(local_48 + 0x218) = 0;
          *(int *)(local_48 + 0x234) = 0;
          *(int *)(local_48 + 0x21c) = 0;
          *(int *)(local_48 + 0x238) = 0;
          *(int *)(local_48 + 0x244) = 0;
          *(int *)(local_48 + 0x220) = 0;
          *(int *)(local_48 + 0x224) = *(int *)(local_48 + 0x1ac);
          *(int *)(local_48 + 0x228) = *(int *)(local_48 + 0x1b0);
          *(int *)(local_48 + 0x22c) = *(int *)(local_48 + 0x1b4);
          *(int *)(local_48 + 0x1ac) = 0;
          *(int *)(local_48 + 0x1b0) = 0;
          *(int *)(local_48 + 0x1b4) = 0;
          *(int *)(local_48 + 0x1b8) = 0;
        }
      }
      else if ((*(int *)(local_48 + 0x19c) == 3) && (*(int *)(local_48 + 0x1a8) == 0)) {
        *(int *)(local_48 + 0x188) = *(int *)(local_48 + 0x188) - param_1;
        if (*(int *)(local_48 + 0x188) < 1) {
          pcStack_354 = "SM_DMG_01";
          pcStack_358 = (char *)0x47434d;
          FUN_004054a0();
          pcStack_354 = (char *)0x474352;
          FUN_004c3570();
          pcStack_354 = "character/swordman/effect/animation/bloodyrave/hit.ani";
          pcStack_358 = (char *)0x47436a;
          FUN_004054a0();
          pcStack_354 = (char *)0x474377;
          (**(code **)(*(int *)local_48 + 0x78))();
          pfStack_33c = (function<void___cdecl(void)> *)0x5;
          pCStack_340 = (CMFCColorMenuButton *)0x4f;
          iStack_344 = 0x47438a;
          iVar3 = FUN_0047bcc0();
          *(int *)(local_48 + 0x188) = iVar3;
        }
        if (*(int *)(local_48 + 0x224) != *(int *)(local_48 + 0x1ac)) {
          *(int *)(local_48 + 0x218) =
               *(int *)(local_48 + 0x230) * param_1 + *(int *)(local_48 + 0x218);
          if ((0 < *(int *)(local_48 + 0x218)) &&
             (*(int *)(local_48 + 0x1ac) <
              *(int *)(local_48 + 0x218) / 1000000 + *(int *)(local_48 + 0x224))) {
            *(int *)(local_48 + 0x218) = 0;
            *(int *)(local_48 + 0x224) = *(int *)(local_48 + 0x1ac);
          }
          if ((*(int *)(local_48 + 0x218) < 0) &&
             (*(int *)(local_48 + 0x218) / 1000000 + *(int *)(local_48 + 0x224) <
              *(int *)(local_48 + 0x1ac))) {
            *(int *)(local_48 + 0x218) = 0;
            *(int *)(local_48 + 0x224) = *(int *)(local_48 + 0x1ac);
          }
        }
        if (*(int *)(local_48 + 0x228) != *(int *)(local_48 + 0x1b0)) {
          *(int *)(local_48 + 0x21c) =
               *(int *)(local_48 + 0x234) * param_1 + *(int *)(local_48 + 0x21c);
          if ((0 < *(int *)(local_48 + 0x21c)) &&
             (*(int *)(local_48 + 0x1b0) <
              *(int *)(local_48 + 0x21c) / 1000000 + *(int *)(local_48 + 0x228))) {
            *(int *)(local_48 + 0x21c) = 0;
            *(int *)(local_48 + 0x228) = *(int *)(local_48 + 0x1b0);
          }
          if ((*(int *)(local_48 + 0x21c) < 0) &&
             (*(int *)(local_48 + 0x21c) / 1000000 + *(int *)(local_48 + 0x228) <
              *(int *)(local_48 + 0x1b0))) {
            *(int *)(local_48 + 0x21c) = 0;
            *(int *)(local_48 + 0x228) = *(int *)(local_48 + 0x1b0);
          }
        }
      }
      break;
    case 0x96:
      if (*(int *)(local_48 + 0x1a8) == 1) {
        *(int *)(local_48 + 0x1a8) = 2;
        local_210 = (undefined1 *)&pCStack_350;
        pcStack_354 = "character/swordman/effect/animation/grabblastblood.ani";
        pcStack_358 = (char *)0x47145f;
        FUN_004054a0();
        pcStack_354 = (char *)0x47146c;
        local_108 = (**(code **)(*(int *)local_48 + 0x78))();
        *(int *)(local_108 + 0x40) = *(int *)(local_48 + 500) * 0x32;
        *(undefined4 *)(local_108 + 0x48) = 0x55;
        *(undefined1 *)(local_108 + 0xe8) = 0;
        pcStack_354 = (char *)0x4714b8;
        local_8c = local_108;
        iVar3 = (**(code **)(*(int *)local_48 + 0x58))();
        pcStack_354 = (char *)(*(int *)(iVar3 + 0x8c) + -1);
        pcStack_358 = "j";
        (**(code **)(*(int *)local_48 + 0x8c))();
        pcStack_358 = (char *)0x0;
        pcStack_35c = (char *)0x1f;
        iStack_360 = 0x4714de;
        pcStack_358 = (char *)FUN_0047bcc0();
        pcStack_35c = (char *)0x4714ef;
        (**(code **)(*(int *)local_48 + 0x90))();
        local_10c = 0x1f;
        pfStack_33c = (function<void___cdecl(void)> *)&local_10c;
        pCStack_340 = (CMFCColorMenuButton *)0x47150f;
        FUN_0048a8f0();
        pfStack_33c = (function<void___cdecl(void)> *)0x471519;
        cVar1 = FUN_00489dd0();
        if (cVar1 == '\0') {
          pfStack_33c = (function<void___cdecl(void)> *)0x471529;
          pCVar6 = (CMFCColorMenuButton *)game_get_player_or_session_blob();
          if (local_48 == pCVar6) {
            pfStack_33c = (function<void___cdecl(void)> *)0x0;
            pCStack_340 = (CMFCColorMenuButton *)0x1f;
            iStack_344 = *(int *)(local_48 + 0xab8);
            uStack_348 = 0x471541;
            game_loop_helper_e9240();
            uStack_348 = 0x471548;
            FUN_005d9da0();
            pCStack_340 = (CMFCColorMenuButton *)0x471554;
            iVar3 = FUN_0044e440();
            pfStack_33c = *(function<void___cdecl(void)> **)(iVar3 + 0x18);
            local_214 = (undefined1 *)&pcStack_354;
            pcStack_358 = (char *)0x0;
            pcStack_35c = (char *)0x1f;
            iStack_360 = *(int *)(local_48 + 0xab8);
            pcStack_364 = (char *)0x471576;
            game_loop_helper_e9240();
            pcStack_364 = (char *)0x47157d;
            FUN_005d9da0();
            pcStack_35c = (char *)0x471589;
            pcStack_358 = (char *)FUN_0044e440();
            pcStack_35c = (char *)0x471591;
            FUN_00405520();
            pcStack_358 = (char *)0x471596;
            FUN_0067aea0();
          }
          pfStack_33c = (function<void___cdecl(void)> *)&DAT_007493a8;
          pCStack_340 = (CMFCColorMenuButton *)0x4715a6;
          FUN_004054a0();
          local_8 = 0;
          local_114 = 0x1f;
          local_218 = (undefined1 *)&pCStack_350;
          pcStack_354 = &DAT_007493a0;
          pcStack_358 = (char *)0x4715cc;
          FUN_004054a0();
          pcStack_354 = (char *)0x4715d4;
          local_110 = (int *)FUN_0063bda0();
          pfStack_33c = local_2c;
          pCStack_340 = (CMFCColorMenuButton *)&local_114;
          iStack_344 = 0x4715ff;
          local_d0 = local_110;
          FUN_0048a8f0();
          pCStack_340 = (CMFCColorMenuButton *)0x471609;
          piVar7 = (int *)FUN_0048ae20();
          *local_d0 = *local_d0 - *piVar7;
          local_8 = 0xffffffff;
          pfStack_33c = (function<void___cdecl(void)> *)0x47162a;
          std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_2c);
          pfStack_33c = (function<void___cdecl(void)> *)0x471633;
          FUN_00657c10();
          local_118 = 0x1f;
          pfStack_33c = (function<void___cdecl(void)> *)&local_118;
          pCStack_340 = (CMFCColorMenuButton *)0x471653;
          FUN_0048a8f0();
          pfStack_33c = (function<void___cdecl(void)> *)0x47165d;
          FUN_00427bb0();
        }
        pfStack_33c = (function<void___cdecl(void)> *)0x471663;
        pCVar6 = (CMFCColorMenuButton *)game_get_player_or_session_blob();
        if (local_48 == pCVar6) {
          pfStack_33c = (function<void___cdecl(void)> *)0x0;
          pCStack_340 = (CMFCColorMenuButton *)0x1f;
          iStack_344 = *(int *)(local_48 + 0xab8);
          uStack_348 = 0x47167b;
          game_loop_helper_e9240();
          uStack_348 = 0x471682;
          FUN_005d9da0();
          pCStack_340 = (CMFCColorMenuButton *)0x47168e;
          iVar3 = FUN_0044e440();
          pfStack_33c = *(function<void___cdecl(void)> **)(iVar3 + 0x18);
          local_21c = (undefined1 *)&pcStack_354;
          pcStack_358 = (char *)0x0;
          pcStack_35c = (char *)0x1f;
          iStack_360 = *(int *)(local_48 + 0xab8);
          pcStack_364 = (char *)0x4716b0;
          game_loop_helper_e9240();
          pcStack_364 = (char *)0x4716b7;
          FUN_005d9da0();
          pcStack_35c = (char *)0x4716c3;
          pcStack_358 = (char *)FUN_0044e440();
          pcStack_35c = (char *)0x4716cb;
          FUN_00405520();
          pcStack_358 = (char *)0x4716d0;
          FUN_0067aa80();
        }
        pfStack_33c = (function<void___cdecl(void)> *)&DAT_007493b0;
        pCStack_340 = (CMFCColorMenuButton *)0x4716e0;
        FUN_004054a0();
        local_8 = 1;
        local_11c = 0x1f;
        pfStack_33c = (function<void___cdecl(void)> *)0x3;
        pCStack_340 = (CMFCColorMenuButton *)0x1f;
        iStack_344 = 0x4716fd;
        FUN_0047bd30();
        pfStack_33c = (function<void___cdecl(void)> *)0x471702;
        uVar4 = thunk_FUN_006e5750();
        pfStack_33c = local_44;
        pCStack_340 = (CMFCColorMenuButton *)&local_11c;
        iStack_344 = 0x47171d;
        FUN_0048a8f0();
        pCStack_340 = (CMFCColorMenuButton *)0x471727;
        puVar5 = (undefined4 *)FUN_0048ae20();
        *puVar5 = uVar4;
        local_8 = 0xffffffff;
        pfStack_33c = (function<void___cdecl(void)> *)0x471738;
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_44);
        local_120 = 0x1f;
        pfStack_33c = (function<void___cdecl(void)> *)&local_120;
        pCStack_340 = (CMFCColorMenuButton *)0x471758;
        iVar3 = FUN_0048a8f0();
        *(undefined4 *)(iVar3 + 0x70) = 0;
        local_124 = 0x1f;
        pfStack_33c = (function<void___cdecl(void)> *)&local_124;
        pCStack_340 = (CMFCColorMenuButton *)0x47177e;
        local_fc = FUN_0048a8f0();
        local_fc = local_fc + 0x7c;
        pfStack_33c = (function<void___cdecl(void)> *)local_90;
        pCStack_340 = (CMFCColorMenuButton *)0x471799;
        FUN_0044dff0();
        pfStack_33c = (function<void___cdecl(void)> *)&local_6a;
        pCStack_340 = (CMFCColorMenuButton *)0x4717a8;
        FUN_0044dfd0();
        while( true ) {
          pfStack_33c = (function<void___cdecl(void)> *)(uint)local_6a;
          pCStack_340 = (CMFCColorMenuButton *)0x4717c7;
          cVar1 = FUN_0044dd70();
          if (cVar1 == '\0') break;
          pfStack_33c = (function<void___cdecl(void)> *)0x4717d9;
          pcStack_354 = (char *)FUN_0044dd50();
          local_220 = (undefined1 *)&pCStack_350;
          pcStack_358 = (char *)0x4717f6;
          local_a4 = pcStack_354;
          FUN_00405520();
          pcStack_354 = (char *)0x4717fe;
          local_128 = (int *)FUN_0063bda0();
          *local_128 = *local_128 + *(int *)(local_a4 + 0x18);
          pfStack_33c = (function<void___cdecl(void)> *)0x4717b6;
          local_a8 = local_128;
          FUN_0044dd30();
        }
        pfStack_33c = (function<void___cdecl(void)> *)0x471833;
        FUN_00657c10();
        if (*(int *)(local_48 + 0x18c) == 0) {
          local_144 = 0x1f;
          pfStack_33c = (function<void___cdecl(void)> *)0x2;
          pCStack_340 = (CMFCColorMenuButton *)0x1f;
          iStack_344 = 0x471920;
          fVar8 = (float10)FUN_0047bd30();
          local_140 = (float)fVar8;
          fVar9 = local_140 * 1000.0;
          pfStack_33c = (function<void___cdecl(void)> *)&local_144;
          pCStack_340 = (CMFCColorMenuButton *)0x47194f;
          iVar3 = FUN_0048a8f0();
          *(int *)(iVar3 + 0x74) = (int)fVar9;
        }
        else {
          local_224 = (undefined1 *)&pCStack_350;
          pcStack_354 = &DAT_007493b8;
          pcStack_358 = (char *)0x471859;
          FUN_004054a0();
          pcStack_354 = (char *)0x471867;
          local_12c = FUN_006356a0();
          if (local_12c == 0) {
            local_13c = 0x1f;
            pfStack_33c = (function<void___cdecl(void)> *)0x2;
            pCStack_340 = (CMFCColorMenuButton *)0x1f;
            iStack_344 = 0x4718d6;
            fVar8 = (float10)FUN_0047bd30();
            local_138 = (float)fVar8;
            fVar9 = local_138 * 1000.0;
            pfStack_33c = (function<void___cdecl(void)> *)&local_13c;
            pCStack_340 = (CMFCColorMenuButton *)0x471905;
            iVar3 = FUN_0048a8f0();
            *(int *)(iVar3 + 0x74) = (int)fVar9;
          }
          else {
            local_134 = 0x1f;
            pfStack_33c = (function<void___cdecl(void)> *)0x5;
            pCStack_340 = (CMFCColorMenuButton *)0x1f;
            iStack_344 = 0x47188c;
            fVar8 = (float10)FUN_0047bd30();
            local_130 = (float)fVar8;
            fVar9 = local_130 * 1000.0;
            pfStack_33c = (function<void___cdecl(void)> *)&local_134;
            pCStack_340 = (CMFCColorMenuButton *)0x4718bb;
            iVar3 = FUN_0048a8f0();
            *(int *)(iVar3 + 0x74) = (int)fVar9;
          }
        }
      }
      break;
    case 0xaa:
      if (((*(int *)(local_48 + 0x1a8) == 1) && (0 < *(int *)(local_48 + 0x1b8))) &&
         (*(int *)(local_48 + 0x1b8) = *(int *)(local_48 + 0x1b8) - param_1,
         *(int *)(local_48 + 0x1b8) < 1)) {
        *(int *)(local_48 + 0x1a8) = 2;
      }
      if (*(int *)(local_48 + 0x1a8) == 2) {
        *(int *)(local_48 + 0x1a8) = 3;
        *(int *)(local_48 + 0x1b8) = 0;
        *(int *)(local_48 + 0x230) = 0;
        *(int *)(local_48 + 0x218) = 0;
        *(int *)(local_48 + 0x238) = 0;
        *(int *)(local_48 + 0x244) = 0;
        *(int *)(local_48 + 0x220) = 0;
        *(int *)(local_48 + 0x22c) = 0;
        local_228 = (undefined1 *)&pCStack_350;
        pcStack_354 = "character/swordman/effect/animation/outragebreak/sword_slash_none.ani";
        pcStack_358 = (char *)0x471a2a;
        FUN_004054a0();
        pcStack_354 = (char *)0x471a32;
        pfStack_33c = (function<void___cdecl(void)> *)FUN_00630790();
        pCStack_340 = (CMFCColorMenuButton *)0x471a4f;
        local_148 = pfStack_33c;
        (**(code **)(*(int *)local_48 + 0xd8))();
        local_22c = (undefined1 *)&pcStack_354;
        pcStack_358 = "character/swordman/effect/animation/outragebreak/sword_slash_ldodge.ani";
        pcStack_35c = (char *)0x471a65;
        FUN_004054a0();
        pcStack_358 = (char *)0x471a6d;
        pCStack_340 = (CMFCColorMenuButton *)FUN_00630790();
        iStack_344 = 0x471a8a;
        local_14c = pCStack_340;
        (**(code **)(*(int *)local_48 + 0xd8))();
        local_230 = (undefined1 *)&pcStack_358;
        pcStack_35c = "character/swordman/effect/animation/outragebreak/sword_slash_impact_none.ani"
        ;
        iStack_360 = 0x471aa0;
        FUN_004054a0();
        pcStack_35c = (char *)0x471aad;
        (**(code **)(*(int *)local_48 + 0x78))();
        local_234 = (undefined1 *)&uStack_370;
        pcStack_374 = 
        "character/swordman/effect/animation/outragebreak/sword_slash_impact_ldodge.ani";
        uStack_378 = 0x471ac3;
        FUN_004054a0();
        pcStack_374 = (char *)0x471ad0;
        (**(code **)(*(int *)local_48 + 0x78))();
        pfStack_33c = (function<void___cdecl(void)> *)0x1f4;
        pCStack_340 = (CMFCColorMenuButton *)0x3;
        iStack_344 = 0x471add;
        game_get_state_ptr_d1520();
        iStack_344 = 0x471ae4;
        FUN_004edfb0();
        local_238 = (undefined1 *)&pCStack_350;
        pcStack_354 = "character/swordman/effect/particle/outragebreak_stone_part.ptl";
        pcStack_358 = "j";
        FUN_004054a0();
        pcStack_354 = (char *)0x0;
        pcStack_358 = *(char **)(local_48 + 0x228);
        pcStack_35c = (char *)(*(int *)(local_48 + 500) * 0x96 + *(int *)(local_48 + 0x224));
        iStack_360 = 0;
        pcStack_364 = (char *)0x471b24;
        FUN_004aa990();
        pfStack_33c = *(function<void___cdecl(void)> **)(local_48 + 500);
        pCStack_340 = (CMFCColorMenuButton *)0x4e4b;
        iStack_344 = 0;
        uStack_348 = 0;
        pcStack_34c = (char *)0x43160000;
        pCStack_350 = local_48;
        pcStack_354 = (char *)0x471b5f;
        FUN_0042f340();
      }
      break;
    case 0xbe:
      if (((*(int *)(local_48 + 0x1a8) == 1) || (*(int *)(local_48 + 0x1a8) == 3)) ||
         ((*(int *)(local_48 + 0x1a8) == 5 || (*(int *)(local_48 + 0x1a8) == 7)))) {
        if ((*(int *)(local_48 + 0xa0c) / 0x32 != (*(int *)(local_48 + 0xa0c) + param_1) / 0x32) &&
           (*(int *)(local_48 + 0xa0c) < 300)) {
          pfStack_33c = (function<void___cdecl(void)> *)0x473fc0;
          FUN_004d1b30();
          pfStack_33c = (function<void___cdecl(void)> *)0x473fc7;
          local_4c = FUN_005174d0();
          *(int *)(local_4c + 0x4c) = *(int *)(local_48 + 500);
          *(undefined4 *)(local_4c + 0x84) = 0;
          pfStack_33c = (function<void___cdecl(void)> *)0x473ff6;
          puVar5 = (undefined4 *)(**(code **)(*(int *)local_48 + 0x9c))();
          *(undefined4 *)(local_4c + 0x90) = *puVar5;
          pfStack_33c = (function<void___cdecl(void)> *)0x474011;
          piVar7 = (int *)(**(code **)(*(int *)local_48 + 0x9c))();
          *(int *)(local_4c + 0x8c) = *piVar7 + 1;
          pfStack_33c = (function<void___cdecl(void)> *)0x47402c;
          iVar3 = (**(code **)(*(int *)local_48 + 0x58))();
          pfStack_33c = (function<void___cdecl(void)> *)(iVar3 + 0x34);
          pCStack_340 = (CMFCColorMenuButton *)0x47403b;
          FUN_004275e0();
          pfStack_33c = (function<void___cdecl(void)> *)0x474043;
          iVar3 = FUN_0062fc30();
          *(undefined4 *)(iVar3 + 0x44) = 1000;
          *(undefined4 *)(local_4c + 0x98) = 1000;
          pfStack_33c = (function<void___cdecl(void)> *)0x47405f;
          iVar3 = FUN_0062fc30();
          *(undefined1 *)(iVar3 + 0x38) = 0x33;
          pfStack_33c = (function<void___cdecl(void)> *)0x47406b;
          iVar3 = FUN_0062fc30();
          *(undefined1 *)(iVar3 + 0x39) = 0x77;
          pfStack_33c = (function<void___cdecl(void)> *)0x474077;
          iVar3 = FUN_0062fc30();
          *(undefined1 *)(iVar3 + 0x3a) = 0xff;
          pfStack_33c = (function<void___cdecl(void)> *)0x474083;
          iVar3 = FUN_0062fc30();
          *(undefined1 *)(iVar3 + 0x3d) = 1;
          *(int *)(local_4c + 0x40) = *(int *)(local_48 + 0x224);
          *(int *)(local_4c + 0x44) = *(int *)(local_48 + 0x228);
          *(int *)(local_4c + 0x48) = *(int *)(local_48 + 0x22c);
          pfStack_33c = (function<void___cdecl(void)> *)&local_4c;
          pCStack_340 = (CMFCColorMenuButton *)0x4740c6;
          FUN_0044de80();
        }
        *(int *)(local_48 + 0xa0c) = *(int *)(local_48 + 0xa0c) + param_1;
        if ((*(int *)(local_48 + 0x230) < 0) || (*(int *)(local_48 + 0x234) < 0)) {
          pfStack_33c = (function<void___cdecl(void)> *)0x474104;
          (**(code **)(*(int *)local_48 + 0x134))();
        }
      }
      break;
    case 0xd2:
      if (((*(int *)(local_48 + 0x1a8) == 1) && (0 < *(int *)(local_48 + 0x1b8))) &&
         (*(int *)(local_48 + 0x1b8) = *(int *)(local_48 + 0x1b8) - param_1,
         *(int *)(local_48 + 0x1b8) < 1)) {
        *(int *)(local_48 + 0x1a8) = 2;
      }
      if (*(int *)(local_48 + 0x1a8) == 2) {
        *(int *)(local_48 + 0x1a8) = 3;
        *(int *)(local_48 + 0x1b8) = 0;
        *(int *)(local_48 + 0x230) = 0;
        *(int *)(local_48 + 0x218) = 0;
        *(int *)(local_48 + 0x238) = 0;
        *(int *)(local_48 + 0x244) = 0;
        *(int *)(local_48 + 0x220) = 0;
        *(int *)(local_48 + 0x22c) = 0;
        local_23c = (undefined1 *)&pCStack_350;
        pcStack_354 = "character/swordman/effect/animation/hopsmash/smash.ani";
        pcStack_358 = (char *)0x471c3a;
        FUN_004054a0();
        pcStack_354 = (char *)0x471c42;
        local_150 = FUN_00630790();
        local_70 = local_150;
        if (local_150 != 0) {
          *(undefined4 *)(local_150 + 0xe4) = 0xffffffff;
          *(undefined4 *)(local_150 + 0x90) = 2;
          pfStack_33c = (function<void___cdecl(void)> *)0x471c79;
          iVar3 = FUN_0062fc30();
          *(undefined4 *)(local_70 + 0x98) = *(undefined4 *)(iVar3 + 0x44);
        }
        local_240 = (undefined1 *)&pCStack_350;
        pcStack_354 = "sounds/char/swordman/sm_boongsan.wav";
        pcStack_358 = (char *)0x471c9a;
        FUN_004054a0();
        pcStack_354 = (char *)0x471c9f;
        FUN_004c3500();
        pfStack_33c = (function<void___cdecl(void)> *)0x3f;
        pCStack_340 = local_48;
        iStack_344 = 0x471cad;
        iVar3 = FUN_006ca800();
        if (iVar3 != 0) {
          pfStack_33c = *(function<void___cdecl(void)> **)(local_48 + 500);
          pCStack_340 = (CMFCColorMenuButton *)0x4e52;
          iStack_344 = 0;
          uStack_348 = 0;
          pcStack_34c = (char *)0x42f00000;
          pCStack_350 = local_48;
          pcStack_354 = (char *)0x471cf0;
          local_74 = FUN_0042f340();
          pfStack_33c = (function<void___cdecl(void)> *)0x4;
          pCStack_340 = (CMFCColorMenuButton *)0x471d03;
          FUN_0044e460();
          pfStack_33c = (function<void___cdecl(void)> *)0x2;
          pCStack_340 = (CMFCColorMenuButton *)0x41;
          iStack_344 = 0x471d0f;
          FUN_0047bd30();
          pfStack_33c = (function<void___cdecl(void)> *)0x471d14;
          uVar4 = thunk_FUN_006e5750();
          pfStack_33c = (function<void___cdecl(void)> *)0x0;
          pCStack_340 = (CMFCColorMenuButton *)0x471d23;
          puVar5 = (undefined4 *)game_get_flag_object_01a70();
          *puVar5 = uVar4;
          pfStack_33c = (function<void___cdecl(void)> *)0x3;
          pCStack_340 = (CMFCColorMenuButton *)0x41;
          iStack_344 = 0x471d31;
          FUN_0047bd30();
          pfStack_33c = (function<void___cdecl(void)> *)0x471d36;
          uVar4 = thunk_FUN_006e5750();
          pfStack_33c = (function<void___cdecl(void)> *)0x1;
          pCStack_340 = (CMFCColorMenuButton *)0x471d45;
          puVar5 = (undefined4 *)game_get_flag_object_01a70();
          *puVar5 = uVar4;
          pfStack_33c = (function<void___cdecl(void)> *)0x4;
          pCStack_340 = (CMFCColorMenuButton *)0x41;
          iStack_344 = 0x471d53;
          fVar8 = (float10)FUN_0047bd30();
          local_154 = (float)fVar8;
          fVar9 = local_154 * 1000.0;
          pfStack_33c = (function<void___cdecl(void)> *)0x2;
          pCStack_340 = (CMFCColorMenuButton *)0x471d7a;
          piVar7 = (int *)game_get_flag_object_01a70();
          *piVar7 = (int)fVar9;
          pfStack_33c = (function<void___cdecl(void)> *)0x5;
          pCStack_340 = (CMFCColorMenuButton *)0x41;
          iStack_344 = 0x471d88;
          FUN_0047bd30();
          pfStack_33c = (function<void___cdecl(void)> *)0x471d8d;
          uVar4 = thunk_FUN_006e5750();
          pfStack_33c = (function<void___cdecl(void)> *)0x3;
          pCStack_340 = (CMFCColorMenuButton *)0x471d9c;
          puVar5 = (undefined4 *)game_get_flag_object_01a70();
          *puVar5 = uVar4;
          pfStack_33c = (function<void___cdecl(void)> *)0x1f4;
          pCStack_340 = (CMFCColorMenuButton *)0x3;
          iStack_344 = 0x471daa;
          game_get_state_ptr_d1520();
          iStack_344 = 0x471db1;
          FUN_004edfb0();
        }
      }
    }
  }
switchD_00470d92_caseD_4:
  if (((*(int *)(local_48 + 0x1a4) != 7) && (*(int *)(local_48 + 0x1a4) != 5)) &&
     ((*(int *)(local_48 + 0x1a4) != 0x1a4 &&
      (((*(int *)(local_48 + 0x1a4) != 8 && (*(int *)(local_48 + 0x1a4) != 0xc)) &&
       (*(int *)(local_48 + 0x1a4) != 0xd)))))) {
    if (0 < *(int *)(local_48 + 0x230)) {
      *(int *)(local_48 + 0x218) =
           *(int *)(local_48 + 500) * *(int *)(local_48 + 0x230) * param_1 +
           *(int *)(local_48 + 0x218);
      *(int *)(local_48 + 0x230) = *(int *)(local_48 + 0x23c) * param_1 + *(int *)(local_48 + 0x230)
      ;
    }
    if (0 < *(int *)(local_48 + 0x234)) {
      *(int *)(local_48 + 0x21c) =
           *(int *)(local_48 + 0x1f8) * *(int *)(local_48 + 0x234) * param_1 +
           *(int *)(local_48 + 0x21c);
      *(int *)(local_48 + 0x234) = *(int *)(local_48 + 0x240) * param_1 + *(int *)(local_48 + 0x234)
      ;
    }
    *(int *)(local_48 + 0x220) = *(int *)(local_48 + 0x238) * param_1 + *(int *)(local_48 + 0x220);
    *(int *)(local_48 + 0x238) = *(int *)(local_48 + 0x244) * param_1 + *(int *)(local_48 + 0x238);
  }
  pfStack_33c = (function<void___cdecl(void)> *)0x47469a;
  (**(code **)(*(int *)local_48 + 0xf0))();
  if (local_48[0xdb8] == (CMFCColorMenuButton)0x0) {
    local_48[0x994] = (CMFCColorMenuButton)0x0;
    pfStack_33c = (function<void___cdecl(void)> *)0x4746bc;
    piVar7 = (int *)game_get_state_ptr_d1520();
    local_c0 = *piVar7 + 0x160;
    pfStack_33c = (function<void___cdecl(void)> *)0x4746d5;
    local_78 = (int *)game_loop_helper_018d0();
    pfStack_33c = (function<void___cdecl(void)> *)0x4746e3;
    local_194 = (int *)game_loop_helper_018b0();
    for (; local_78 != local_194; local_78 = local_78 + 1) {
      local_64 = local_78;
      *(undefined4 *)(*local_78 + 0x9c) = 0;
      pfStack_33c = (function<void___cdecl(void)> *)0x0;
      pcStack_358 = (char *)(*local_78 + 0x170);
      pcStack_35c = (char *)0x474735;
      FUN_00405520();
      pcStack_358 = (char *)0x474740;
      local_198 = FUN_004b8ca0();
      pfStack_33c = *(function<void___cdecl(void)> **)(*local_64 + 0x16c);
      pcStack_358 = (char *)(*local_64 + 0x154);
      pcStack_35c = (char *)0x474779;
      local_c4 = local_198;
      FUN_00405520();
      pcStack_358 = (char *)0x474784;
      local_19c = FUN_004b8ca0();
      local_c8 = (*(int *)(local_c4 + 0xc) - *(int *)(local_19c + 0xc)) / 2;
      local_1a0 = *(int *)(local_c4 + 0x10);
      if (local_c8 < 1) {
        local_cc = *(int *)(*local_64 + 0xb8);
      }
      else {
        local_cc = *(int *)(*local_64 + 0xb8) - local_c8;
      }
      local_e8 = local_cc;
      local_d4 = *(int *)(*local_64 + 0xbc) - local_1a0;
      if ((((*(int *)(*local_64 + 0xc0) == 0) &&
           (local_cc <= *(int *)(local_48 + 0x208) / 2 + *(int *)(local_48 + 0x224))) &&
          (*(int *)(local_48 + 0x224) - *(int *)(local_48 + 0x208) / 2 <=
           local_cc + *(int *)*local_64)) &&
         ((local_d4 <= *(int *)(local_48 + 0x20c) / 2 + *(int *)(local_48 + 0x228) &&
          (*(int *)(local_48 + 0x228) - *(int *)(local_48 + 0x20c) / 2 <=
           local_d4 + *(int *)(*local_64 + 4))))) {
        *(CMFCColorMenuButton **)(*local_64 + 0x9c) = local_48;
        local_48[0x994] = (CMFCColorMenuButton)0x1;
        break;
      }
    }
  }
  else {
    pfStack_33c = (function<void___cdecl(void)> *)0x4748de;
    local_d8 = FUN_004d1a70();
    pfStack_33c = (function<void___cdecl(void)> *)0x4748ef;
    local_7c = (int *)game_loop_helper_018d0();
    pfStack_33c = (function<void___cdecl(void)> *)0x4748fd;
    local_1a4 = (int *)game_loop_helper_018b0();
    for (; local_7c != local_1a4; local_7c = local_7c + 1) {
      local_dc = local_7c;
      if (*local_7c != 0) {
        *(undefined1 *)(*local_7c + 0x994) = 0;
      }
    }
    pfStack_33c = (function<void___cdecl(void)> *)0x474943;
    piVar7 = (int *)game_get_state_ptr_d1520();
    local_e0 = *piVar7 + 0x160;
    pfStack_33c = (function<void___cdecl(void)> *)0x47495c;
    local_80 = (int *)game_loop_helper_018d0();
    pfStack_33c = (function<void___cdecl(void)> *)0x47496a;
    local_1a8 = (int *)game_loop_helper_018b0();
    for (; local_80 != local_1a8; local_80 = local_80 + 1) {
      local_68 = local_80;
      *(undefined4 *)(*local_80 + 0x9c) = 0;
      pfStack_33c = (function<void___cdecl(void)> *)0x0;
      pcStack_358 = (char *)(*local_80 + 0x170);
      pcStack_35c = (char *)0x4749bc;
      FUN_00405520();
      pcStack_358 = (char *)0x4749c7;
      local_1ac = FUN_004b8ca0();
      pfStack_33c = *(function<void___cdecl(void)> **)(*local_68 + 0x16c);
      pcStack_358 = (char *)(*local_68 + 0x154);
      pcStack_35c = (char *)0x474a00;
      local_e4 = local_1ac;
      FUN_00405520();
      pcStack_358 = (char *)0x474a0b;
      local_1b0 = FUN_004b8ca0();
      local_100 = (*(int *)(local_e4 + 0xc) - *(int *)(local_1b0 + 0xc)) / 2;
      local_1b4 = *(int *)(local_e4 + 0x10);
      if (local_100 < 1) {
        local_ec = *(int *)(*local_68 + 0xb8);
      }
      else {
        local_ec = *(int *)(*local_68 + 0xb8) - local_100;
      }
      local_f4 = local_ec;
      local_f8 = *(int *)(*local_68 + 0xbc) - local_1b4;
      pfStack_33c = (function<void___cdecl(void)> *)0x474a98;
      local_f0 = FUN_004d1a70();
      pfStack_33c = (function<void___cdecl(void)> *)0x474aa9;
      local_84 = (int *)game_loop_helper_018d0();
      pfStack_33c = (function<void___cdecl(void)> *)0x474ab7;
      local_1b8 = (int *)game_loop_helper_018b0();
      for (; local_84 != local_1b8; local_84 = local_84 + 1) {
        local_54 = local_84;
        if (((*local_84 != 0) && (*(int *)(*local_68 + 0xc0) == 0)) &&
           ((((local_f4 <= *(int *)(*local_84 + 0x208) / 2 + *(int *)(*local_84 + 0x224) &&
              ((*(int *)(*local_84 + 0x224) - *(int *)(*local_84 + 0x208) / 2 <=
                local_f4 + *(int *)*local_68 &&
               (local_f8 <= *(int *)(*local_84 + 0x20c) / 2 + *(int *)(*local_84 + 0x228))))) &&
             (*(int *)(*local_84 + 0x228) - *(int *)(*local_84 + 0x20c) / 2 <=
              local_f8 + *(int *)(*local_68 + 4))) && (*(char *)(*local_84 + 0x994) == '\0')))) {
          *(int *)(*local_68 + 0x9c) = *local_84;
          *(undefined1 *)(*local_84 + 0x994) = 1;
          break;
        }
      }
    }
  }
  pfStack_33c = (function<void___cdecl(void)> *)param_1;
  pCStack_340 = (CMFCColorMenuButton *)0x474bf2;
  (**(code **)(*(int *)local_48 + 0x10c))();
  ExceptionList = local_10;
  return;
}


/* ==== 0047c8e0  FUN_0047c8e0  size=281 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined * FUN_0047c8e0(int param_1,int param_2)

{
  char local_14 [12];
  uint local_8;
  
  local_8 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  if (param_2 == 0) {
    if (param_1 == 0) {
      builtin_strncpy(local_14,"slashlarge1",0xc);
    }
    else if (param_1 == 1) {
      builtin_strncpy(local_14,"slashlarge2",0xc);
    }
    else if (param_1 == 2) {
      builtin_strncpy(local_14,"slashlarge3",0xc);
    }
  }
  else if (param_1 == 0) {
    builtin_strncpy(local_14,"slashsmall1",0xc);
  }
  else if (param_1 == 1) {
    builtin_strncpy(local_14,"slashsmall2",0xc);
  }
  else if (param_1 == 2) {
    builtin_strncpy(local_14,"slashsmall3",0xc);
  }
  FUN_00414e80(&DAT_007ca8d8,"common/hiteffect/animation/%s.ani",local_14);
  return &DAT_007ca8d8;
}


/* ==== 00483360  FUN_00483360  size=6580 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00483360(int param_1,char param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *in_ECX;
  uint uVar7;
  uint uVar8;
  float10 fVar9;
  float10 fVar10;
  undefined4 local_170;
  undefined1 local_16c;
  int *local_13c;
  int local_120;
  undefined1 local_108 [256];
  uint local_8;
  
  local_8 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  if (((char)in_ECX[0x2a3] != '\0') &&
     (in_ECX[0x285] = in_ECX[0x285] + param_1, 9999 < in_ECX[0x285])) {
    in_ECX[0x285] = 0;
    iVar3 = in_ECX[0x1ba];
    fVar9 = (float10)FUN_0047bd30();
    if ((float)fVar9 < (float)iVar3) {
      fVar9 = (float10)FUN_0047bd30();
      in_ECX[0x1ba] = (int)((float)in_ECX[0x1ba] - (float)fVar9);
    }
    else {
      FUN_00465880();
    }
  }
  if (*(char *)((int)in_ECX + 0xa8d) != '\0') {
    for (local_120 = 0; iVar3 = FUN_0047bcc0(), local_120 < iVar3; local_120 = local_120 + 1) {
      in_ECX[local_120 * 5 + 0x28c] = param_1 * 0x1e + in_ECX[local_120 * 5 + 0x28c];
      if (359999 < in_ECX[local_120 * 5 + 0x28c]) {
        in_ECX[local_120 * 5 + 0x28c] = in_ECX[local_120 * 5 + 0x28c] + -360000;
      }
      fVar9 = (float10)FUN_004a1ec0();
      in_ECX[local_120 * 5 + 0x28d] = (int)((float)fVar9 * 30.0);
      fVar9 = (float10)FUN_004a1e90();
      in_ECX[local_120 * 5 + 0x28e] = (int)((float)fVar9 * 15.0);
    }
    for (local_13c = in_ECX + 0x28a; local_13c != in_ECX + 0x2a3; local_13c = local_13c + 5) {
      if ((*local_13c != 0) && (local_13c[1] = local_13c[1] - param_1, local_13c[1] < 1)) {
        _memset(local_108,0,0x100);
        FUN_00414e80();
        FUN_004054a0();
        FUN_00630660();
        *local_13c = 0;
        local_13c[1] = 0;
      }
    }
    iVar3 = FUN_00465360();
    iVar4 = FUN_0047bcc0();
    if (iVar3 < iVar4) {
      in_ECX[0x286] = in_ECX[0x286] + param_1;
      iVar3 = in_ECX[0x286];
      fVar9 = (float10)FUN_0047bf30();
      if ((float)fVar9 * 1000.0 <= (float)iVar3) {
        in_ECX[0x286] = 0;
        FUN_004653c0();
      }
    }
  }
  if (*(char *)((int)in_ECX + 0xa8e) != '\0') {
    in_ECX[0x288] = in_ECX[0x288] + param_1;
    if (99 < in_ECX[0x288]) {
      in_ECX[0x288] = 0;
      fVar9 = (float10)FUN_0047bd30();
      game_get_state_ptr_d1520();
      FUN_004d58e0();
      FUN_0042a9e0();
      FUN_0042a9c0();
      while (cVar2 = FUN_0040d2d0(), cVar2 != '\0') {
        piVar5 = (int *)FUN_0042a580();
        if ((((*piVar5 == 0) || (cVar2 = FUN_006352e0(), cVar2 != '\0')) ||
            (*(int *)(*piVar5 + 0x22c) != 0)) ||
           (((uVar7 = *(int *)(*piVar5 + 0x224) - in_ECX[0x89], uVar8 = (int)uVar7 >> 0x1f,
             fVar10 = (float10)FUN_0047bd30(),
             (float)fVar10 / 2.0 < (float)(int)((uVar7 ^ uVar8) - uVar8) ||
             (uVar7 = *(int *)(*piVar5 + 0x228) - in_ECX[0x8a], uVar8 = (int)uVar7 >> 0x1f,
             fVar10 = (float10)FUN_0047bd30(),
             (float)fVar10 / 2.0 < (float)(int)((uVar7 ^ uVar8) - uVar8))) ||
            (cVar2 = (**(code **)(*in_ECX + 0x88))(), cVar2 == '\0')))) {
          *(undefined1 *)(*piVar5 + 0x2a) = 0;
        }
        else {
          *(undefined1 *)(*piVar5 + 0x2a) = 1;
          *(int *)(*piVar5 + 0x6e8) = *(int *)(*piVar5 + 0x6e8) - (int)((float)fVar9 / 10.0);
          if (*(int *)(*piVar5 + 0x204) == 0) {
            FUN_00658a10();
          }
          else if (*(int *)(*piVar5 + 0x204) == 100) {
            FUN_0054b1d0();
          }
          if (*(int *)(*piVar5 + 0x6e8) < 1) {
            *(undefined4 *)(*piVar5 + 0x6e8) = 0;
            (**(code **)(*(int *)*piVar5 + 0xb0))();
            (**(code **)(*(int *)*piVar5 + 8))();
          }
        }
        FUN_0042a560();
      }
    }
    in_ECX[0x287] = in_ECX[0x287] + param_1;
    if (999 < in_ECX[0x287]) {
      in_ECX[0x287] = 0;
      game_loop_helper_e9240();
      iVar3 = FUN_005d9da0();
      iVar3 = (*(int *)(iVar3 + 0xbc) + *(int *)(iVar3 + 0xc0)) / 2;
      if (in_ECX[0x1bb] < iVar3) {
        FUN_00465a40();
      }
      else {
        in_ECX[0x1bb] = in_ECX[0x1bb] - iVar3;
      }
    }
  }
  if (((*(char *)((int)in_ECX + 0xa8f) != '\0') && (0 < in_ECX[0x289])) &&
     (in_ECX[0x289] = in_ECX[0x289] - param_1, in_ECX[0x289] < 1)) {
    in_ECX[0x289] = 0;
    FUN_00635730();
    FUN_004054a0();
    FUN_00630660();
    FUN_004054a0();
    FUN_00630660();
    FUN_004054a0();
    FUN_00630660();
    FUN_004054a0();
    FUN_00630660();
    FUN_004054a0();
    FUN_00630660();
    FUN_004054a0();
    (**(code **)(*in_ECX + 0x78))();
    FUN_004054a0();
    (**(code **)(*in_ECX + 0x78))();
    FUN_004054a0();
    (**(code **)(*in_ECX + 0x78))();
    FUN_004054a0();
    FUN_004c3500();
  }
  FUN_00489e30();
  while( true ) {
    FUN_00489e00();
    cVar2 = FUN_0040d2d0();
    if (cVar2 == '\0') break;
    iVar3 = FUN_00489a10();
    bVar1 = false;
    if (0 < *(int *)(iVar3 + 0x70)) {
      *(int *)(iVar3 + 0x6c) = *(int *)(iVar3 + 0x6c) + param_1;
      *(int *)(iVar3 + 0x68) =
           (int)((1.0 - (float)*(int *)(iVar3 + 0x6c) / (float)*(int *)(iVar3 + 0x70)) * 28.0);
      if ((*(int *)(iVar3 + 0x70) <= *(int *)(iVar3 + 0x6c)) || (*(int *)(iVar3 + 0x68) < 1)) {
        *(undefined4 *)(iVar3 + 0x68) = 0;
        *(undefined4 *)(iVar3 + 0x6c) = 0;
        *(undefined4 *)(iVar3 + 0x70) = 0;
        bVar1 = true;
      }
      if (param_2 != '\0') {
        *(undefined4 *)(iVar3 + 0x68) = 0;
        *(undefined4 *)(iVar3 + 0x6c) = 0;
        *(undefined4 *)(iVar3 + 0x70) = 0;
        bVar1 = true;
      }
      piVar5 = (int *)game_get_player_or_session_blob();
      if ((in_ECX == piVar5) && (iVar4 = FUN_00489a10(), *(int *)(iVar4 + 0x98) != 0)) {
        iVar4 = FUN_00489a10();
        if (*(int *)(*(int *)(*(int *)(iVar4 + 0x98) + 0x9d0) + 4) == 0) {
          iVar4 = FUN_00489a10();
          *(undefined1 *)(*(int *)(iVar4 + 0x98) + 100) = 0;
          iVar4 = FUN_00489a10();
          *(undefined4 *)(*(int *)(iVar4 + 0x98) + 0xc4) = 0;
        }
        else {
          iVar4 = FUN_00489a10();
          if (*(int *)(*(int *)(*(int *)(iVar4 + 0x98) + 0x9d0) + 4) == *(int *)(iVar3 + 8)) {
            if (bVar1) {
              iVar4 = FUN_00489a10();
              *(undefined1 *)(*(int *)(iVar4 + 0x98) + 100) = 0;
              iVar4 = FUN_00489a10();
              *(undefined4 *)(*(int *)(iVar4 + 0x98) + 0xc4) = 0;
              bVar1 = true;
              cVar2 = FUN_004666c0();
              if (cVar2 == '\0') {
                bVar1 = false;
                FUN_00489a10();
                cVar2 = FUN_00467700();
                if (cVar2 != '\0') {
                  bVar1 = true;
                }
              }
              if (bVar1) {
                FUN_00489a10();
                FUN_005d9da0();
                FUN_0044e440();
                FUN_00489a10();
                FUN_0040d4b0();
                FUN_0040d680();
                FUN_0040d840();
                iVar4 = FUN_0044e440();
                FUN_00489a10();
                FUN_0040d4b0();
                iVar6 = FUN_0040d680();
                *(undefined1 *)(iVar6 + 0x20) = *(undefined1 *)(iVar4 + 0x18);
                FUN_00489a10();
                iVar4 = FUN_006ca780();
                if (iVar4 == 0) {
                  cVar2 = FUN_00427c60();
                  if (cVar2 == '\0') {
                    local_16c = 0x47;
                  }
                  else {
                    local_16c = 0x3c;
                  }
                  FUN_00489a10();
                  FUN_0040d4b0();
                  iVar4 = FUN_0040d680();
                  *(undefined1 *)(iVar4 + 0x20) = local_16c;
                  cVar2 = FUN_00427c60();
                  if (cVar2 == '\0') {
                    local_170 = 5;
                  }
                  else {
                    local_170 = 4;
                  }
                  FUN_00489a10();
                  iVar4 = FUN_004274d0();
                  *(undefined4 *)(iVar4 + 0x10) = local_170;
                }
                else {
                  FUN_00489a10();
                  FUN_0040d4b0();
                  iVar4 = FUN_0040d680();
                  *(undefined1 *)(iVar4 + 0x20) = 0x88;
                  FUN_00489a10();
                  iVar4 = FUN_004274d0();
                  *(undefined4 *)(iVar4 + 0x10) = 7;
                }
                if ((in_ECX[0x2ae] == 0) && (piVar5 = (int *)FUN_00489a10(), *piVar5 == 0x22)) {
                  iVar4 = in_ECX[0x1ba];
                  iVar6 = FUN_0047bcc0();
                  if (iVar4 * 100 - iVar6 * in_ECX[0x1b8] == 0 ||
                      iVar4 * 100 < iVar6 * in_ECX[0x1b8]) {
                    FUN_005d9da0();
                    FUN_006ca610();
                    FUN_0044e440();
                    FUN_0040d4b0();
                    FUN_0040d680();
                    FUN_0040d840();
                    iVar4 = FUN_0044e440();
                    FUN_0040d4b0();
                    iVar6 = FUN_0040d680();
                    *(undefined1 *)(iVar6 + 0x20) = *(undefined1 *)(iVar4 + 0x18);
                    iVar4 = FUN_006ca780();
                    if (iVar4 == 0) {
                      FUN_0040d4b0();
                      iVar4 = FUN_0040d680();
                      *(undefined1 *)(iVar4 + 0x20) = 0x3c;
                      iVar4 = FUN_004274d0();
                      *(undefined4 *)(iVar4 + 0x10) = 4;
                    }
                    else {
                      FUN_0040d4b0();
                      iVar4 = FUN_0040d680();
                      *(undefined1 *)(iVar4 + 0x20) = 0x88;
                      iVar4 = FUN_004274d0();
                      *(undefined4 *)(iVar4 + 0x10) = 7;
                    }
                  }
                  else {
                    FUN_005d9da0();
                    FUN_006ca610();
                    FUN_0044e440();
                    FUN_0040d4b0();
                    FUN_0040d680();
                    FUN_0040d840();
                    iVar4 = FUN_0044e440();
                    FUN_0040d4b0();
                    iVar6 = FUN_0040d680();
                    *(undefined1 *)(iVar6 + 0x20) = *(undefined1 *)(iVar4 + 0x18);
                    FUN_0040d4b0();
                    iVar4 = FUN_0040d680();
                    *(undefined1 *)(iVar4 + 0x20) = 0x53;
                    iVar4 = FUN_004274d0();
                    *(undefined4 *)(iVar4 + 0x10) = 6;
                  }
                }
              }
            }
            else {
              iVar4 = FUN_00489a10();
              *(undefined4 *)(*(int *)(iVar4 + 0x98) + 0xc4) = *(undefined4 *)(iVar3 + 0x68);
            }
          }
          else {
            iVar4 = FUN_00489a10();
            *(undefined1 *)(*(int *)(iVar4 + 0x98) + 100) = 0;
            iVar4 = FUN_00489a10();
            *(undefined4 *)(*(int *)(iVar4 + 0x98) + 0xc4) = 0;
          }
        }
      }
    }
    if (0 < *(int *)(iVar3 + 0x78)) {
      *(int *)(iVar3 + 0x74) = *(int *)(iVar3 + 0x74) + param_1;
      FUN_00489a10();
      FUN_005d9da0();
      piVar5 = (int *)game_get_player_or_session_blob();
      if (in_ECX == piVar5) {
        FUN_0044e440();
        FUN_0044e440();
        FUN_00405520();
        FUN_0067ac80();
      }
      if (((float)*(int *)(iVar3 + 0x78) * 0.9 <= (float)*(int *)(iVar3 + 0x74)) &&
         (0 < *(int *)(iVar3 + 0x7c))) {
        if (*(int *)(iVar3 + 0x7c) == 0x1e) {
          game_get_state_ptr_d1520();
          FUN_004d58e0();
          FUN_0042a9e0();
          FUN_0042a9c0();
          while (cVar2 = FUN_0040d2d0(), cVar2 != '\0') {
            piVar5 = (int *)FUN_0042a580();
            if (((*piVar5 != 0) && (cVar2 = FUN_006352e0(), cVar2 == '\0')) &&
               (*(int *)(*piVar5 + 0x24) != 0)) {
              FUN_004054a0();
              iVar4 = (**(code **)(*(int *)*piVar5 + 0x78))();
              (**(code **)(*(int *)*piVar5 + 0x68))();
              FUN_0062fd90();
              *(int *)(iVar4 + 0x114) = *(int *)(iVar4 + 0x114) + 100;
              *(undefined4 *)(iVar4 + 0x4c) = 1;
              *(undefined1 *)(iVar4 + 0xe8) = 0;
              FUN_004054a0();
              iVar4 = (**(code **)(*(int *)*piVar5 + 0x78))();
              (**(code **)(*(int *)*piVar5 + 0x68))();
              FUN_0062fd90();
              FUN_00489a10();
              FUN_004596a0();
              FUN_004054a0();
              FUN_0062fc50();
              *(int *)(iVar4 + 0x114) = *(int *)(iVar4 + 0x114) + 200;
              *(undefined4 *)(iVar4 + 0x4c) = 1;
              *(undefined1 *)(iVar4 + 0xe8) = 0;
              *(undefined4 *)(iVar3 + 0x7c) = 0;
            }
            FUN_0042a560();
          }
        }
        else {
          FUN_004054a0();
          iVar4 = (**(code **)(*in_ECX + 0x78))();
          FUN_0062fd90();
          *(int *)(iVar4 + 0x114) = *(int *)(iVar4 + 0x114) + 100;
          *(undefined4 *)(iVar4 + 0x4c) = 1;
          *(undefined1 *)(iVar4 + 0xe8) = 0;
          FUN_004054a0();
          iVar4 = (**(code **)(*in_ECX + 0x78))();
          FUN_0062fd90();
          FUN_00489a10();
          FUN_004596a0();
          FUN_004054a0();
          FUN_0062fc50();
          *(int *)(iVar4 + 0x114) = *(int *)(iVar4 + 0x114) + 200;
          *(undefined4 *)(iVar4 + 0x4c) = 1;
          *(undefined1 *)(iVar4 + 0xe8) = 0;
          *(undefined4 *)(iVar3 + 0x7c) = 0;
        }
      }
      if (*(int *)(iVar3 + 0x78) <= *(int *)(iVar3 + 0x74)) {
        piVar5 = (int *)FUN_00489a10();
        if (*piVar5 == 0x28) {
          FUN_004054a0();
          FUN_004aad60();
        }
        else {
          piVar5 = (int *)FUN_00489a10();
          if (*piVar5 == 0x1e) {
            FUN_00465c50();
          }
        }
        piVar5 = (int *)FUN_00489a10();
        if (*piVar5 == 0x12) {
          FUN_00465db0();
          FUN_004054a0();
          (**(code **)(*in_ECX + 0x78))();
          FUN_004054a0();
          (**(code **)(*in_ECX + 0x78))();
        }
        else {
          piVar5 = (int *)FUN_00489a10();
          if (*piVar5 == 0x54) {
            FUN_004054a0();
            FUN_00630660();
            FUN_004054a0();
            FUN_00630660();
            FUN_004054a0();
            FUN_00630660();
            FUN_004054a0();
            FUN_00630660();
            FUN_004054a0();
            (**(code **)(*in_ECX + 0x78))();
            FUN_004054a0();
            (**(code **)(*in_ECX + 0x78))();
            FUN_004054a0();
            (**(code **)(*in_ECX + 0x78))();
            FUN_004054a0("character/swordman/effect/animation/keiga/disappear4.ani");
            (**(code **)(*in_ECX + 0x78))();
          }
        }
        *(undefined4 *)(iVar3 + 0x78) = 0;
        *(undefined4 *)(iVar3 + 0x74) = 0;
        piVar5 = (int *)game_get_player_or_session_blob();
        if (in_ECX == piVar5) {
          FUN_0044e440();
          FUN_0044e440();
          FUN_00405520();
          FUN_0067aea0();
        }
        FUN_0044dff0();
        FUN_0044dfd0();
        while (cVar2 = FUN_0044dd70(), cVar2 != '\0') {
          iVar3 = FUN_0044dd50();
          FUN_00405520();
          piVar5 = (int *)FUN_0063bda0();
          *piVar5 = *piVar5 - *(int *)(iVar3 + 0x18);
          FUN_0044dd30();
        }
        FUN_0044dff0();
        FUN_0044dfd0();
        while (cVar2 = FUN_0044dd70(), cVar2 != '\0') {
          iVar3 = FUN_0044dd50();
          FUN_00405520();
          piVar5 = (int *)FUN_0063b7b0();
          *piVar5 = *piVar5 - *(int *)(iVar3 + 0x18);
          FUN_0044dd30();
        }
        FUN_00427bb0();
        FUN_00427bb0();
        FUN_00657c10();
      }
    }
    FUN_004899f0();
  }
  return;
}


/* ==== 004ddbf0  FUN_004ddbf0  size=775 ==== */

void FUN_004ddbf0(int *param_1,int param_2,int param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_80 [8];
  undefined4 uStack_78;
  char *pcStack_74;
  undefined1 auStack_70 [8];
  float local_68;
  float local_64;
  float local_60;
  int **ppiStack_5c;
  uint uStack_58;
  int *local_50;
  int local_4c;
  int local_48;
  undefined4 local_44;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 *local_30;
  undefined4 local_2c;
  undefined1 *local_28;
  undefined4 local_24;
  undefined1 *local_20;
  int local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00715f05;
  local_10 = ExceptionList;
  uStack_58 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  ppiStack_5c = (int **)0x4ddc1e;
  FUN_0042dec0();
  ppiStack_5c = (int **)param_1;
  local_60 = 7.150309e-39;
  local_14 = FUN_004550d0();
  if (local_14 == 0) {
    if ((*(int *)(param_2 + 500) == 1) && (param_1[0x89] < *(int *)(param_2 + 0x224))) {
      local_3c = 0xffffffff;
    }
    else if ((*(int *)(param_2 + 500) == -1) && (*(int *)(param_2 + 0x224) < param_1[0x89])) {
      local_3c = 0xffffffff;
    }
    if (*(int *)(param_2 + 0x224) < param_1[0x89]) {
      local_38 = 0xffffffff;
    }
  }
  else {
    if ((*(int *)(param_2 + 500) == 1) && (*(int *)(local_14 + 0x224) < *(int *)(param_2 + 0x224)))
    {
      local_3c = 0xffffffff;
    }
    else if ((*(int *)(param_2 + 500) == -1) &&
            (*(int *)(param_2 + 0x224) < *(int *)(local_14 + 0x224))) {
      local_3c = 0xffffffff;
    }
    if (*(int *)(param_2 + 0x224) < *(int *)(local_14 + 0x224)) {
      local_38 = 0xffffffff;
    }
  }
  local_50 = param_1;
  local_4c = param_2;
  local_48 = param_3;
  local_44 = param_4;
  local_40 = param_5;
  local_18 = (100 - param_1[0x1d8]) - *(int *)(param_2 + 0x764) / 10;
  if ((((*(int *)(param_2 + 0x1a4) == 100) || (*(int *)(param_2 + 0x1a4) == -1)) ||
      (param_1[0x69] == 0xa0)) || ((param_1[0x69] == 0x96 || (param_1[0x69] == 300)))) {
    local_18 = 100;
  }
  ppiStack_5c = (int **)0x4ddd9e;
  iVar1 = FUN_00641430();
  if (iVar1 % 100 < local_18) {
    ppiStack_5c = &local_50;
    local_60 = 7.150881e-39;
    (**(code **)(*param_1 + 0xac))();
  }
  else {
    param_1[0x84] = (int)((float)param_1[0x21e] * (float)param_1[0x21f]);
    *(int *)(param_2 + 0x210) = param_1[0x84];
    ppiStack_5c = (int **)&param_2;
    local_60 = 7.150989e-39;
    FUN_0040d490();
    ppiStack_5c = (int **)0x3;
    local_60 = (float)local_40;
    local_64 = (float)*(int *)(param_2 + 0x228);
    local_68 = (float)local_48;
    local_20 = auStack_80;
    local_24 = FUN_004054a0("common/hiteffect/animation/stuck.ani");
    local_8 = 0;
    uVar2 = FUN_00516d20();
    local_8 = 0xffffffff;
    FUN_00516a90(uVar2);
    ppiStack_5c = (int **)0x3;
    local_60 = (float)local_40;
    local_64 = (float)*(int *)(param_2 + 0x228);
    local_68 = (float)local_48;
    local_28 = auStack_80;
    local_2c = FUN_004054a0("character/swordman/effect/animation/guard/spark.ani");
    local_8 = 1;
    uVar2 = FUN_00516d20();
    local_8 = 0xffffffff;
    local_1c = FUN_00516a90(uVar2);
    *(undefined4 *)(local_1c + 0x4c) = local_3c;
    local_30 = auStack_70;
    pcStack_74 = "SWD_GUARDED";
    uStack_78 = 0x4ddedf;
    FUN_004054a0();
    pcStack_74 = (char *)0x4ddee4;
    FUN_004c3570();
  }
  ExceptionList = local_10;
  return;
}


/* ==== 005153c0  FUN_005153c0  size=389 ==== */

void FUN_005153c0(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined1 local_28 [4];
  int *local_24;
  undefined1 local_20 [4];
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  undefined1 local_10 [4];
  undefined1 local_c [7];
  char local_5;
  
  if ((param_1 != 0) &&
     (cVar1 = FUN_00427c60(param_1 + 100,"sprite/common/etc/storagerope.img"), cVar1 == '\0')) {
    iVar2 = FUN_005aa430(0x16);
    cVar1 = destroy<>(param_1 + 100,iVar2 + 0x6c);
    if (cVar1 == '\0') {
      cVar1 = FUN_00427c60(param_1 + 100,"character/swordman/effect/animation/frenzy/createball.ani"
                          );
      if (cVar1 != '\0') {
        uVar3 = FUN_00516d20(param_1);
        local_14 = FUN_00516980(uVar3);
        *(undefined1 *)(local_14 + 0xbc) = 1;
        *(undefined4 *)(local_14 + 0x130) = *(undefined4 *)(param_1 + 0x130);
      }
      local_18 = FUN_00516d20();
      FUN_0042a9e0(local_c);
      FUN_0042a9c0(local_20);
      while (cVar1 = FUN_0040d2d0(local_20), cVar1 != '\0') {
        local_24 = (int *)FUN_0042a580();
        if (*local_24 == param_1) {
          local_5 = '\0';
          local_1c = FUN_00516d40();
          FUN_0042a9e0(local_10);
          FUN_0042a9c0(local_28);
          goto LAB_005154f1;
        }
        FUN_0042a560();
      }
    }
  }
  return;
LAB_005154f1:
  cVar1 = FUN_0040d2d0(local_28);
  if (cVar1 == '\0') {
LAB_00515521:
    if (local_5 != '\0') {
      return;
    }
    puVar5 = &param_1;
    FUN_00516d40(puVar5);
    FUN_0044de80(puVar5);
    return;
  }
  piVar4 = (int *)FUN_0042a580();
  if (*piVar4 == param_1) {
    local_5 = '\x01';
    goto LAB_00515521;
  }
  FUN_0042a560();
  goto LAB_005154f1;
}


/* ==== 005158e0  FUN_005158e0  size=4248 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_005158e0(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined1 auStack_204 [4];
  undefined4 uStack_200;
  uint uStack_1fc;
  char *pcStack_1f8;
  int iStack_1f4;
  char *pcStack_1f0;
  uint uStack_1ec;
  undefined4 local_ec;
  undefined4 local_e8;
  int local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  uint local_c8;
  uint local_c4;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  int *local_ac;
  uint local_a8;
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
  puStack_c = &LAB_00717489;
  local_10 = ExceptionList;
  uStack_1ec = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_a8 = 0;
  local_14 = uStack_1ec;
  if (*(int *)(param_1 + 0xa0) == 1) {
    if (*(char *)(param_1 + 0xbc) == '\0') {
      pcStack_1f0 = (char *)0x51593d;
      iVar2 = FUN_0062fc30();
      if (*(int *)(param_1 + 0x98) <= *(int *)(iVar2 + 0x44) / 2) {
        *(undefined1 *)(param_1 + 0xbc) = 1;
      }
    }
    else if (*(int *)(param_1 + 0xfc) < 1) {
      *(undefined1 *)(param_1 + 0x9c) = 1;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x98);
      pcStack_1f0 = (char *)0x515989;
      iVar3 = FUN_0062fc30();
      iVar3 = *(int *)(iVar3 + 0x44);
      pcStack_1f0 = (char *)0x5159a5;
      iVar4 = FUN_0062fc30();
      *(char *)(iVar4 + 0x3b) = (char)((iVar2 * 0xff) / (iVar3 / 2 + 1));
      pcStack_1f0 = (char *)param_2;
      iStack_1f4 = 0x5159b4;
      FUN_0062faf0();
    }
  }
  else if (((*(int *)(param_1 + 0xa0) == 6) || (*(int *)(param_1 + 0xa0) == 5)) ||
          (*(int *)(param_1 + 0xa0) == 7)) {
    if (*(char *)(param_1 + 0xbc) != '\x01') {
      if (*(int *)(param_1 + 0xf8) < 1) {
        *(undefined4 *)(param_1 + 0xf8) = 0;
        *(undefined1 *)(param_1 + 0xbc) = 1;
      }
      else {
        pcStack_1f0 = (char *)0xffffffff;
        iStack_1f4 = param_2;
        pcStack_1f8 = (char *)0x515a22;
        FUN_0062fa30();
      }
    }
  }
  else if ((*(int *)(param_1 + 0xa0) == 8) || (*(int *)(param_1 + 0xa0) == 9)) {
    if (*(int *)(param_1 + 0xa0) == 9) {
      if (*(int *)(param_1 + 0x100) < 0) {
        if (-1 < *(int *)(param_1 + 0x40)) {
          *(undefined4 *)(param_1 + 0xf8) = 0;
          *(undefined4 *)(param_1 + 0x40) = 0;
          *(undefined4 *)(param_1 + 0xec) = 0;
          *(int *)(param_1 + 0xd0) = *(int *)(param_1 + 0xd0) + param_2;
          if (999 < *(int *)(param_1 + 0xd0)) {
            *(int *)(param_1 + 0x100) = -*(int *)(param_1 + 0x100);
          }
        }
        pcStack_1f0 = (char *)0x1;
        iStack_1f4 = param_2;
        pcStack_1f8 = (char *)0x515ad2;
        FUN_0062fa30();
      }
      else if (0 < *(int *)(param_1 + 0x100)) {
        pcStack_1f0 = (char *)0x0;
        FUN_00405520();
        local_8 = 0;
        FUN_004bcf00();
        local_8 = 0xffffffff;
        iVar2 = FUN_004b8ca0();
        if (*(int *)(param_1 + 0x40) <= -*(int *)(iVar2 + 0xc)) {
          *(undefined1 *)(param_1 + 0x9c) = 1;
          ExceptionList = local_10;
          return;
        }
        pcStack_1f0 = (char *)0xffffffff;
        iStack_1f4 = param_2;
        pcStack_1f8 = (char *)0x515b50;
        FUN_0062fa30();
      }
    }
    else if (*(int *)(param_1 + 0xa0) == 8) {
      if (*(int *)(param_1 + 0x100) < 0) {
        pcStack_1f0 = (char *)0x0;
        FUN_00405520();
        local_8 = 1;
        FUN_004bcf00();
        local_8 = 0xffffffff;
        iVar2 = FUN_004b8ca0();
        if (*(int *)(param_1 + 0x40) <= 0x280 - *(int *)(iVar2 + 0xc)) {
          *(undefined4 *)(param_1 + 0xf8) = 0;
          pcStack_1f0 = (char *)0x0;
          FUN_00405520();
          local_8 = 2;
          FUN_004bcf00();
          local_8 = 0xffffffff;
          iVar2 = FUN_004b8ca0();
          *(int *)(param_1 + 0x40) = 0x280 - *(int *)(iVar2 + 0xc);
          *(undefined4 *)(param_1 + 0xec) = 0;
          *(int *)(param_1 + 0xd0) = *(int *)(param_1 + 0xd0) + param_2;
          if (999 < *(int *)(param_1 + 0xd0)) {
            *(int *)(param_1 + 0x100) = -*(int *)(param_1 + 0x100);
          }
        }
        pcStack_1f0 = (char *)0xffffffff;
        iStack_1f4 = param_2;
        pcStack_1f8 = (char *)0x515c81;
        FUN_0062fa30();
      }
      if (0 < *(int *)(param_1 + 0x100)) {
        if (0x27f < *(int *)(param_1 + 0x40)) {
          *(undefined1 *)(param_1 + 0x9c) = 1;
          ExceptionList = local_10;
          return;
        }
        pcStack_1f0 = (char *)0x1;
        iStack_1f4 = param_2;
        pcStack_1f8 = (char *)0x515cb7;
        FUN_0062fa30();
      }
    }
  }
  if (*(char *)(param_1 + 0xbc) != '\0') {
    pcStack_1f0 = "character/swordman/effect/animation/frenzy/ball.ani";
    iStack_1f4 = param_1 + 100;
    pcStack_1f8 = (char *)0x515cdb;
    cVar1 = FUN_00427c60();
    if (cVar1 != '\0') {
      local_ac = *(int **)(param_1 + 0x130);
      if (local_ac == (int *)0x0) {
        *(undefined1 *)(param_1 + 0xbc) = 0;
        pcStack_1f0 = (char *)&param_1;
        iStack_1f4 = 0x516127;
        FUN_00516d40();
        iStack_1f4 = 0x51612e;
        FUN_0044de80();
        pcStack_1f0 = (char *)param_1;
        iStack_1f4 = 0x516138;
        iStack_1f4 = FUN_00516d20();
        pcStack_1f8 = (char *)0x51613e;
        local_ec = FUN_00516980();
        pcStack_1f0 = (char *)&local_ec;
        iStack_1f4 = 0x516153;
        FUN_00516d40();
        iStack_1f4 = 0x51615a;
        FUN_0044de80();
        pcStack_1f0 = (char *)param_1;
        iStack_1f4 = 0x516164;
        FUN_004aae50();
      }
      else {
        pcStack_1f0 = (char *)0x515d18;
        iVar2 = (**(code **)(*local_ac + 0x68))();
        local_e4 = iVar2 / 2 + local_ac[0x8b];
        local_b4 = local_ac[0x89] - *(int *)(param_1 + 0x40);
        local_b8 = local_ac[0x8a] - *(int *)(param_1 + 0x44);
        local_bc = local_e4 - *(int *)(param_1 + 0x48);
        if (((int)((local_b4 ^ (int)local_b4 >> 0x1f) - ((int)local_b4 >> 0x1f)) < 0x11) &&
           ((int)((local_b8 ^ (int)local_b8 >> 0x1f) - ((int)local_b8 >> 0x1f)) < 0xd)) {
          *(undefined1 *)(param_1 + 0xbc) = 0;
          FUN_004054a0();
          FUN_004c3500();
          pcStack_1f0 = (char *)&param_1;
          iStack_1f4 = 0x515ded;
          FUN_00516d40();
          iStack_1f4 = 0x515df4;
          FUN_0044de80();
          pcStack_1f0 = (char *)param_1;
          iStack_1f4 = 0x515dfe;
          iStack_1f4 = FUN_00516d20();
          pcStack_1f8 = (char *)0x515e04;
          local_e8 = FUN_00516980();
          pcStack_1f0 = (char *)&local_e8;
          iStack_1f4 = 0x515e19;
          FUN_00516d40();
          iStack_1f4 = 0x515e20;
          FUN_0044de80();
          pcStack_1f0 = (char *)param_1;
          iStack_1f4 = 0x515e2a;
          FUN_004aae50();
          pcStack_1f0 = (char *)0x0;
          iStack_1f4 = *(undefined4 *)(param_1 + 0xd0);
          pcStack_1f8 = (char *)0x515e44;
          FUN_006315c0();
        }
        else {
          pcStack_1f0 = (char *)(local_b4 * local_b4 + local_b8 * local_b8 + local_bc * local_bc);
          iStack_1f4 = 0x515e7b;
          FUN_0051be60();
          pcStack_1f0 = (char *)0x515e83;
          local_d4 = thunk_FUN_006e5750();
          *(int *)(param_1 + 0xec) =
               (int)(*(int *)(param_1 + 0x108) * param_2 * local_b4) / local_d4 +
               *(int *)(param_1 + 0xec);
          *(int *)(param_1 + 0xf0) =
               (int)(*(int *)(param_1 + 0x108) * param_2 * local_b8) / local_d4 +
               *(int *)(param_1 + 0xf0);
          *(int *)(param_1 + 0xf4) =
               (int)(*(int *)(param_1 + 0x108) * param_2 * local_bc) / local_d4 +
               *(int *)(param_1 + 0xf4);
          *(int *)(param_1 + 0x108) =
               *(int *)(param_1 + 0x10c) * param_2 + *(int *)(param_1 + 0x108);
          local_c0 = *(int *)(param_1 + 0xec) / 1000000;
          local_c4 = *(int *)(param_1 + 0xf0) / 1000000;
          local_c8 = *(int *)(param_1 + 0xf4) / 1000000;
          if ((int)((local_b4 ^ (int)local_b4 >> 0x1f) - ((int)local_b4 >> 0x1f)) <=
              (int)((local_c0 ^ (int)local_c0 >> 0x1f) - ((int)local_c0 >> 0x1f))) {
            local_c0 = local_b4;
          }
          if ((int)((local_b8 ^ (int)local_b8 >> 0x1f) - ((int)local_b8 >> 0x1f)) <=
              (int)((local_c4 ^ (int)local_c4 >> 0x1f) - ((int)local_c4 >> 0x1f))) {
            local_c4 = local_b8;
          }
          if ((int)((local_bc ^ (int)local_bc >> 0x1f) - ((int)local_bc >> 0x1f)) <=
              (int)((local_c8 ^ (int)local_c8 >> 0x1f) - ((int)local_c8 >> 0x1f))) {
            local_c8 = local_bc;
          }
          *(uint *)(param_1 + 0xec) = *(int *)(param_1 + 0xec) + local_c0 * -1000000;
          *(uint *)(param_1 + 0xf0) = *(int *)(param_1 + 0xf0) + local_c4 * -1000000;
          *(uint *)(param_1 + 0xf4) = *(int *)(param_1 + 0xf4) + local_c8 * -1000000;
          *(uint *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + local_c0;
          *(uint *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + local_c4;
          *(uint *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + local_c8;
          pcStack_1f0 = (char *)param_1;
          iStack_1f4 = 0x516085;
          iStack_1f4 = FUN_00516d20();
          pcStack_1f8 = (char *)0x51608b;
          local_cc = FUN_00516980();
          if (local_cc != 0) {
            *(undefined4 *)(local_cc + 0x40) = *(undefined4 *)(param_1 + 0x40);
            *(undefined4 *)(local_cc + 0x44) = *(undefined4 *)(param_1 + 0x44);
            *(undefined4 *)(local_cc + 0x48) = *(undefined4 *)(param_1 + 0x48);
          }
          pcStack_1f0 = (char *)param_1;
          iStack_1f4 = 0x5160d3;
          local_d0 = FUN_004aab00();
          if (local_d0 != 0) {
            *(undefined4 *)(local_d0 + 0x54) = *(undefined4 *)(param_1 + 0x40);
            *(undefined4 *)(local_d0 + 0x58) = *(undefined4 *)(param_1 + 0x44);
            *(undefined4 *)(local_d0 + 0x5c) = *(undefined4 *)(param_1 + 0x48);
          }
        }
      }
    }
  }
  pcStack_1f0 = "sprite/common/etc/storagebird.img";
  iStack_1f4 = param_1 + 100;
  pcStack_1f8 = (char *)0x516178;
  cVar1 = FUN_00427c60();
  if (cVar1 != '\0') {
    if (*(char *)(param_1 + 0xbc) == '\0') {
      pcStack_1f0 = (char *)param_2;
      iStack_1f4 = 0x5161a4;
      FUN_0062faf0();
      FUN_004054a0();
      local_8 = 3;
      FUN_00516d20();
      local_8 = 0xffffffff;
      iVar2 = FUN_005169f0();
      *(undefined4 *)(iVar2 + 0x48) = *(undefined4 *)(param_1 + 0x48);
      pcStack_1f0 = (char *)0x5161f6;
      iVar2 = game_get_player_or_session_blob();
      if (*(int *)(iVar2 + 0xae4) == 0x78) {
        iVar2 = FUN_005aa430();
        FUN_00405520(iVar2 + 0xfc);
        FUN_004c7590(auStack_204);
        local_8 = 4;
        FUN_005aa430(0x16);
        FUN_00405520();
        local_8 = 0xffffffff;
        local_d8 = FUN_004c7af0();
        local_8 = 5;
        local_a8 = local_a8 | 1;
      }
      else {
        pcStack_1f0 = (char *)0x16;
        iStack_1f4 = 0x5162cb;
        iVar2 = FUN_005aa430();
        pcStack_1f0 = (char *)(iVar2 + 0x6c);
        iStack_1f4 = 0x5162d7;
        local_d8 = FUN_00405520();
        local_8 = 6;
        local_a8 = local_a8 | 2;
      }
      FUN_00405450();
      local_8 = 7;
      FUN_00516d20();
      local_8 = CONCAT31(local_8._1_3_,6);
      iVar2 = FUN_005169f0();
      *(undefined4 *)(iVar2 + 0x48) = *(undefined4 *)(param_1 + 0x48);
      local_8 = 5;
      if ((local_a8 & 2) != 0) {
        local_a8 = local_a8 & 0xfffffffd;
        pcStack_1f0 = (char *)0x516383;
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_44);
      }
      local_8 = 0xffffffff;
      if ((local_a8 & 1) != 0) {
        local_a8 = local_a8 & 0xfffffffe;
        pcStack_1f0 = (char *)0x5163a5;
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_5c);
      }
      if (*(int *)(param_1 + 0x48) < 0x65) {
        *(int *)(param_1 + 0xfc) = -*(int *)(param_1 + 0xfc);
        *(undefined1 *)(param_1 + 0xbc) = 1;
        FUN_004054a0();
        local_8 = 8;
        FUN_00516d20();
        local_8 = 0xffffffff;
        iVar2 = FUN_005169f0();
        *(undefined1 *)(iVar2 + 0xbc) = 1;
        FUN_004054a0();
        local_8 = 9;
        FUN_00516d20();
        local_8 = 0xffffffff;
        iVar2 = FUN_005169f0();
        *(undefined4 *)(iVar2 + 0xfc) = 0xfffffed4;
      }
    }
    else if (*(char *)(param_1 + 0xbc) != '\0') {
      pcStack_1f0 = (char *)param_2;
      iStack_1f4 = 0x516483;
      FUN_0062faf0();
      if (499 < *(int *)(param_1 + 0x48)) {
        pcStack_1f0 = (char *)param_1;
        iStack_1f4 = 0x516499;
        FUN_005153c0();
      }
    }
  }
  pcStack_1f0 = "sprite/common/etc/storagerope.img";
  iStack_1f4 = param_1 + 100;
  pcStack_1f8 = (char *)0x5164ad;
  cVar1 = FUN_00427c60();
  if ((cVar1 != '\0') && (*(char *)(param_1 + 0xbc) != '\0')) {
    pcStack_1f0 = (char *)param_2;
    iStack_1f4 = 0x5164d9;
    FUN_0062faf0();
    pcStack_1f0 = (char *)0x5164df;
    iVar2 = game_get_player_or_session_blob();
    if (*(int *)(iVar2 + 0xae4) == 0x78) {
      iVar2 = FUN_005aa430();
      FUN_00405520(iVar2 + 0xfc);
      FUN_004c7590(auStack_204);
      local_8 = 10;
      FUN_005aa430(0x16);
      FUN_00405520();
      local_8 = 0xffffffff;
      local_dc = FUN_004c7af0();
      local_8 = 0xb;
      local_a8 = local_a8 | 4;
    }
    else {
      pcStack_1f0 = (char *)0x16;
      iStack_1f4 = 0x5165b7;
      iVar2 = FUN_005aa430();
      pcStack_1f0 = (char *)(iVar2 + 0x6c);
      iStack_1f4 = 0x5165c3;
      local_dc = FUN_00405520();
      local_8 = 0xc;
      local_a8 = local_a8 | 8;
    }
    FUN_00405450();
    local_8 = 0xd;
    FUN_00516d20();
    local_8 = CONCAT31(local_8._1_3_,0xc);
    iVar2 = FUN_005169f0();
    *(undefined4 *)(iVar2 + 0x48) = *(undefined4 *)(param_1 + 0x48);
    local_8 = 0xb;
    if ((local_a8 & 8) != 0) {
      local_a8 = local_a8 & 0xfffffff7;
      pcStack_1f0 = (char *)0x51666f;
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_74);
    }
    local_8 = 0xffffffff;
    if ((local_a8 & 4) != 0) {
      local_a8 = local_a8 & 0xfffffffb;
      pcStack_1f0 = (char *)0x516694;
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_8c);
    }
    if (*(int *)(param_1 + 0x48) < 1) {
      *(undefined1 *)(param_1 + 0xbc) = 0;
      *(undefined4 *)(param_1 + 0x48) = 0;
      *(undefined4 *)(param_1 + 0xfc) = 0;
      *(undefined4 *)(param_1 + 0xf4) = 0;
      pcStack_1f0 = (char *)0x5166d5;
      iVar2 = game_get_player_or_session_blob();
      if (*(int *)(iVar2 + 0xae4) == 0x78) {
        iVar2 = FUN_005aa430();
        FUN_00405520(iVar2 + 0xfc);
        FUN_004c7590(auStack_204);
        local_8 = 0xe;
        uVar5 = FUN_005aa430(0x16);
        FUN_00405520(uVar5);
        local_8 = 0xffffffff;
        local_e0 = FUN_004c7af0(local_2c);
        local_8 = 0xf;
        local_a8 = local_a8 | 0x10;
      }
      else {
        pcStack_1f0 = (char *)0x16;
        iStack_1f4 = 0x5167aa;
        iVar2 = FUN_005aa430();
        pcStack_1f8 = (char *)(iVar2 + 0x6c);
        uStack_1fc = 0x5167b9;
        local_e0 = FUN_00405520();
        local_8 = 0x10;
        local_a8 = local_a8 | 0x20;
      }
      FUN_00405450();
      local_8 = 0x11;
      FUN_00516d20();
      local_8 = CONCAT31(local_8._1_3_,0x10);
      iVar2 = FUN_005169f0();
      *(undefined4 *)(iVar2 + 0x48) = 0;
      local_8 = 0xf;
      if ((local_a8 & 0x20) != 0) {
        local_a8 = local_a8 & 0xffffffdf;
        pcStack_1f8 = (char *)0x516866;
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_a4);
      }
      local_8 = 0xffffffff;
      if ((local_a8 & 0x10) != 0) {
        local_a8 = local_a8 & 0xffffffef;
        pcStack_1f8 = (char *)0x516888;
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_2c);
      }
      pcStack_1f8 = (char *)0x516894;
      FUN_0040d6d0();
      pcStack_1f8 = (char *)0x8;
      uStack_1fc = 0x5168a1;
      FUN_0040d730();
      local_b0 = 0;
      while( true ) {
        pcStack_1f8 = (char *)0x5168c8;
        uVar6 = FUN_0040d6a0();
        if (uVar6 <= local_b0) break;
        pcStack_1f8 = "sprite/common/etc/storagerope.img";
        uStack_1fc = local_b0;
        uStack_200 = 0x5168e7;
        FUN_0040d680();
        uStack_1fc = 0x5168f1;
        FUN_004053a0();
        pcStack_1f8 = (char *)local_b0;
        uStack_1fc = 0x516903;
        iVar2 = FUN_0040d680();
        *(undefined1 *)(iVar2 + 0x20) = (undefined1)local_b0;
        pcStack_1f8 = (char *)local_b0;
        uStack_1fc = 0x51691e;
        iVar2 = FUN_0040d680();
        *(undefined4 *)(iVar2 + 0x44) = 100;
        local_b0 = local_b0 + 1;
      }
      *(undefined4 *)(param_1 + 0x90) = 1;
      *(undefined4 *)(param_1 + 0x84) = 0;
      *(undefined4 *)(param_1 + 0x8c) = 8;
      pcStack_1f8 = (char *)0x0;
      uStack_1fc = 0x5dc;
      uStack_200 = 0x51695a;
      ui_command_dispatch();
    }
  }
  ExceptionList = local_10;
  return;
}


/* ==== 00542c30  FUN_00542c30  size=2713 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_00542c30(undefined4 param_1,int param_2)

{
  undefined1 auStack_65c [16];
  undefined4 uStack_64c;
  char *pcStack_648;
  undefined1 auStack_644 [20];
  undefined4 uStack_630;
  undefined4 uStack_62c;
  uint uStack_628;
  undefined1 *local_624;
  undefined4 local_620;
  undefined1 *local_61c;
  undefined4 local_618;
  undefined1 *local_614;
  undefined1 *local_610;
  undefined4 local_60c;
  undefined1 *local_608;
  undefined1 *local_604;
  undefined4 local_600;
  undefined1 *local_5fc;
  undefined1 *local_5f8;
  undefined1 *local_5f4;
  undefined4 local_5f0;
  undefined1 *local_5ec;
  undefined1 *local_5e8;
  undefined1 *local_5e4;
  undefined4 local_5e0;
  undefined1 *local_5dc;
  undefined1 *local_5d8;
  undefined4 local_5d4;
  undefined1 *local_5d0;
  undefined1 *local_5cc;
  undefined4 local_5c8;
  undefined4 local_5c4;
  undefined1 *local_5c0;
  undefined4 local_5bc;
  undefined1 *local_5b8;
  undefined1 *local_5b4;
  undefined4 local_5b0;
  undefined1 *local_5ac;
  undefined1 *local_5a8;
  undefined4 local_5a4;
  undefined1 *local_5a0;
  undefined1 *local_59c;
  undefined4 local_598;
  undefined1 *local_594;
  undefined1 *local_590;
  undefined4 local_58c;
  undefined1 *local_588;
  undefined1 *local_584;
  undefined4 local_580;
  undefined1 *local_57c;
  undefined1 *local_578;
  undefined4 local_574;
  undefined1 *local_570;
  undefined1 *local_56c;
  undefined4 local_568;
  undefined1 *local_564;
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
  uint local_4e0;
  undefined4 local_4dc;
  int local_4d8;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_0071a0f1;
  local_10 = ExceptionList;
  uStack_628 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  local_4e0 = 0;
  uStack_62c = 0x542c74;
  local_14 = uStack_628;
  local_620 = FUN_005817d0();
  local_8 = 0;
  local_4e0 = local_4e0 | 1;
  local_4d8 = param_2;
  if (0x3fd < param_2) {
    if (param_2 < 0xc39a) {
      if (param_2 != 0xc399) {
        if (param_2 == 0x446) {
          uStack_62c = 0;
          local_5e8 = auStack_644;
          pcStack_648 = "monster/skeleton/particle/head.ptl";
          uStack_64c = 0x542fba;
          local_5c4 = FUN_004054a0();
          local_8 = 9;
          local_5f4 = auStack_65c;
          FUN_004054a0(&DAT_0073fe66);
          local_8 = local_8 & 0xffffff00;
          uStack_62c = FUN_0053c080(4,5,0x49,0,0x4b,0x774c);
          local_8 = 10;
          uStack_630 = 0x543022;
          local_560 = uStack_62c;
          local_504 = uStack_62c;
          FUN_00581720();
          local_8 = local_8 & 0xffffff00;
          uStack_62c = 0x543031;
          FUN_005437c0();
          ExceptionList = local_10;
          return param_1;
        }
        if (param_2 != 0xc351) {
          ExceptionList = local_10;
          return param_1;
        }
        goto switchD_00542ce1_caseD_d3;
      }
    }
    else if (((param_2 != 0xc39a) && (param_2 != 0xc39b)) && (param_2 != 0xc39c)) {
      ExceptionList = local_10;
      return param_1;
    }
    local_4dc = 4;
    if (param_2 == 0xc399) {
      uStack_62c = 1;
      local_588 = auStack_644;
      pcStack_648 = "";
      uStack_64c = 0x54321c;
      local_58c = FUN_004054a0();
      local_8 = 0x11;
      local_590 = auStack_65c;
      FUN_004054a0(&DAT_0073feaf);
      local_8 = local_8 & 0xffffff00;
      uStack_62c = FUN_0053c080(4,1,0x3c,0,0,0x76b7);
      local_8 = 0x12;
      uStack_630 = 0x543284;
      local_524 = uStack_62c;
      local_520 = uStack_62c;
      FUN_00581720();
      local_8 = local_8 & 0xffffff00;
      uStack_62c = 0x543293;
      FUN_005437c0();
      uStack_62c = 0;
      local_594 = auStack_644;
      pcStack_648 = "";
      uStack_64c = 0x5432ab;
      local_598 = FUN_004054a0();
      local_8 = 0x13;
      local_59c = auStack_65c;
      FUN_004054a0(&DAT_0073fead);
      local_8 = local_8 & 0xffffff00;
      uStack_62c = FUN_0053c080(4,2,0x3c,0,0x32,0x76c1);
      local_8 = 0x14;
      uStack_630 = 0x543313;
      local_52c = uStack_62c;
      local_528 = uStack_62c;
      FUN_00581720();
      local_8 = local_8 & 0xffffff00;
      uStack_62c = 0x543322;
      FUN_005437c0();
      local_4dc = 5;
    }
    else if (param_2 == 0xc39c) {
      local_4dc = 8;
      uStack_62c = 0;
      local_5a0 = auStack_644;
      pcStack_648 = "";
      uStack_64c = 0x543360;
      local_5a4 = FUN_004054a0();
      local_8 = 0x15;
      local_5a8 = auStack_65c;
      FUN_004054a0(&DAT_0073febf);
      local_8 = local_8 & 0xffffff00;
      uStack_62c = FUN_0053c080(4,3,0x49,0,0x4b,0x76ca);
      local_8 = 0x16;
      uStack_630 = 0x5433c8;
      local_534 = uStack_62c;
      local_530 = uStack_62c;
      FUN_00581720();
      local_8 = local_8 & 0xffffff00;
      uStack_62c = 0x5433d7;
      FUN_005437c0();
      uStack_62c = 0;
      local_5ac = auStack_644;
      pcStack_648 = "monster/skeleton/particle/boomerang.ptl";
      uStack_64c = 0x5433ef;
      local_5b0 = FUN_004054a0();
      local_8 = 0x17;
      local_5b4 = auStack_65c;
      FUN_004054a0(&DAT_0073febd);
      local_8 = local_8 & 0xffffff00;
      uStack_62c = FUN_0053c080(5,3,0x49,0,0x4b,0x76cb);
      local_8 = 0x18;
      uStack_630 = 0x543457;
      local_53c = uStack_62c;
      local_538 = uStack_62c;
      FUN_00581720();
      local_8 = local_8 & 0xffffff00;
      uStack_62c = 0x543466;
      FUN_005437c0();
      uStack_62c = 0;
      local_5b8 = auStack_644;
      pcStack_648 = "monster/skeleton/particle/bouncer.ptl";
      uStack_64c = 0x54347e;
      local_5bc = FUN_004054a0();
      local_8 = 0x19;
      local_5c0 = auStack_65c;
      FUN_004054a0(&DAT_0073fecf);
      local_8 = local_8 & 0xffffff00;
      uStack_62c = FUN_0053c080(6,3,0x49,0,0x4b,0x76cc);
      local_8 = 0x1a;
      uStack_630 = 0x5434e6;
      local_544 = uStack_62c;
      local_540 = uStack_62c;
      FUN_00581720();
      local_8 = local_8 & 0xffffff00;
      uStack_62c = 0x5434f5;
      FUN_005437c0();
      uStack_62c = 0;
      local_624 = auStack_644;
      pcStack_648 = "monster/skeleton/particle/bouncer.ptl";
      uStack_64c = 0x54350d;
      local_5c8 = FUN_004054a0();
      local_8 = 0x1b;
      local_5cc = auStack_65c;
      FUN_004054a0(&DAT_0073fece);
      local_8 = local_8 & 0xffffff00;
      uStack_62c = FUN_0053c080(7,3,0x49,0,0x4b,0x76d9);
      local_8 = 0x1c;
      uStack_630 = 0x543575;
      local_54c = uStack_62c;
      local_548 = uStack_62c;
      FUN_00581720();
      local_8 = local_8 & 0xffffff00;
      uStack_62c = 0x543584;
      FUN_005437c0();
    }
    uStack_62c = 0;
    local_5d0 = auStack_644;
    pcStack_648 = "monster/skeleton/particle/rollingboneup.ptl";
    uStack_64c = 0x54359c;
    local_5d4 = FUN_004054a0();
    local_8 = 0x1d;
    local_5d8 = auStack_65c;
    FUN_004054a0(&DAT_0073fede);
    local_8 = local_8 & 0xffffff00;
    uStack_62c = FUN_0053c080(local_4dc,2,0,0,0,0x76c2);
    local_8 = 0x1e;
    uStack_630 = 0x543609;
    local_554 = uStack_62c;
    local_550 = uStack_62c;
    FUN_00581720();
    local_8 = local_8 & 0xffffff00;
    uStack_62c = 0x543618;
    FUN_005437c0();
    uStack_62c = 0;
    local_5dc = auStack_644;
    pcStack_648 = "monster/skeleton/particle/rollingbonedown.ptl";
    uStack_64c = 0x543630;
    local_5e0 = FUN_004054a0();
    local_8 = 0x1f;
    local_5e4 = auStack_65c;
    FUN_004054a0(&DAT_0073fedd);
    local_8 = local_8 & 0xffffff00;
    uStack_62c = FUN_0053c080(local_4dc,2,0,0,0,0x76c2);
    local_8 = 0x20;
    uStack_630 = 0x54369d;
    local_55c = uStack_62c;
    local_558 = uStack_62c;
    FUN_00581720();
    local_8 = local_8 & 0xffffff00;
    uStack_62c = 0x5436ac;
    FUN_005437c0();
    ExceptionList = local_10;
    return param_1;
  }
  if (param_2 == 0x3fd) {
switchD_00542ce1_caseD_8:
    uStack_62c = 0;
    local_5f8 = auStack_644;
    pcStack_648 = "passiveobject/common/particle/icemissile.ptl";
    uStack_64c = 0x542f2c;
    local_5f0 = FUN_004054a0();
    local_8 = 7;
    local_5ec = auStack_65c;
    FUN_004054a0(&DAT_0073fe55);
    local_8 = local_8 & 0xffffff00;
    uStack_62c = FUN_0053c080(0,3,0x14,0,0x3c,0x7569);
    local_8 = 8;
    uStack_630 = 0x542f91;
    local_500 = uStack_62c;
    local_4fc = uStack_62c;
    FUN_00581720();
    local_8 = local_8 & 0xffffff00;
    uStack_62c = 0x542f9d;
    FUN_005437c0();
  }
  else {
    local_4d8 = param_2 + -6;
    switch(param_2) {
    case 6:
      uStack_62c = 0;
      local_61c = auStack_644;
      pcStack_648 = "monster/goblin/particle/throwstone.ptl";
      uStack_64c = 0x542d75;
      local_618 = FUN_004054a0();
      local_8 = 1;
      local_614 = auStack_65c;
      FUN_004054a0("THROW_STONE");
      local_8 = local_8 & 0xffffff00;
      uStack_62c = FUN_0053c080(0,3,0x14,0,0x3c,0x7531);
      local_8 = 2;
      uStack_630 = 0x542ddd;
      local_4e8 = uStack_62c;
      local_4e4 = uStack_62c;
      FUN_00581720();
      local_8 = local_8 & 0xffffff00;
      uStack_62c = 0x542dec;
      FUN_005437c0();
      break;
    case 7:
      uStack_62c = 0;
      local_610 = auStack_644;
      pcStack_648 = "passiveobject/common/particle/firemissilegerocenter.ptl";
      uStack_64c = 0x542e09;
      local_60c = FUN_004054a0();
      local_8 = 3;
      local_608 = auStack_65c;
      FUN_004054a0(&DAT_0073fe17);
      local_8 = local_8 & 0xffffff00;
      uStack_62c = FUN_0053c080(0,3,0x14,0,0x3c,0x755f);
      local_8 = 4;
      uStack_630 = 0x542e71;
      local_4f0 = uStack_62c;
      local_4ec = uStack_62c;
      FUN_00581720();
      local_8 = local_8 & 0xffffff00;
      uStack_62c = 0x542e80;
      FUN_005437c0();
      uStack_62c = 0;
      local_604 = auStack_644;
      pcStack_648 = "passiveobject/common/particle/firemissilegerocenter.ptl";
      uStack_64c = 0x542e98;
      local_600 = FUN_004054a0();
      local_8 = 5;
      local_5fc = auStack_65c;
      FUN_004054a0(&DAT_0073fe56);
      local_8 = local_8 & 0xffffff00;
      uStack_62c = FUN_0053c080(1,3,0x14,0,0x3c,0x7561);
      local_8 = 6;
      uStack_630 = 0x542f00;
      local_4f8 = uStack_62c;
      local_4f4 = uStack_62c;
      FUN_00581720();
      local_8 = local_8 & 0xffffff00;
      uStack_62c = 0x542f0f;
      FUN_005437c0();
      break;
    case 8:
      goto switchD_00542ce1_caseD_8;
    case 0xd3:
    case 0xd4:
switchD_00542ce1_caseD_d3:
      uStack_62c = 0;
      local_57c = auStack_644;
      pcStack_648 = "monster/zombie/particle/zombieeye.ptl";
      uStack_64c = 0x543171;
      local_580 = FUN_004054a0();
      local_8 = 0xf;
      local_584 = auStack_65c;
      FUN_004054a0(&DAT_0073fe67);
      local_8 = local_8 & 0xffffff00;
      uStack_62c = FUN_0053c080(2,7,0x1e,0,0x46,0x7534);
      local_8 = 0x10;
      uStack_630 = 0x5431d9;
      local_51c = uStack_62c;
      local_518 = uStack_62c;
      FUN_00581720();
      local_8 = local_8 & 0xffffff00;
      uStack_62c = 0x5431e8;
      FUN_005437c0();
      ExceptionList = local_10;
      return param_1;
    case 0xde:
      uStack_62c = 0;
      local_564 = auStack_644;
      pcStack_648 = "";
      uStack_64c = 0x54304e;
      local_568 = FUN_004054a0();
      local_8 = 0xb;
      local_56c = auStack_65c;
      FUN_004054a0(&DAT_0073fe65);
      local_8 = local_8 & 0xffffff00;
      uStack_62c = FUN_0053c080(1,6,0,0,0,0x753d);
      local_8 = 0xc;
      uStack_630 = 0x5430b6;
      local_50c = uStack_62c;
      local_508 = uStack_62c;
      FUN_00581720();
      local_8 = local_8 & 0xffffff00;
      uStack_62c = 0x5430c5;
      FUN_005437c0();
      uStack_62c = 0;
      local_570 = auStack_644;
      pcStack_648 = "monster/spacefish/particle/bugshot.ptl";
      uStack_64c = 0x5430dd;
      local_574 = FUN_004054a0();
      local_8 = 0xd;
      local_578 = auStack_65c;
      FUN_004054a0(&DAT_0073fe76);
      local_8 = local_8 & 0xffffff00;
      uStack_62c = FUN_0053c080(2,6,0,0,0,0x753d);
      local_8 = 0xe;
      uStack_630 = 0x543145;
      local_514 = uStack_62c;
      local_510 = uStack_62c;
      FUN_00581720();
      local_8 = local_8 & 0xffffff00;
      uStack_62c = 0x543154;
      FUN_005437c0();
    }
  }
  ExceptionList = local_10;
  return param_1;
}


/* ==== 00549580  FUN_00549580  size=7232 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00549580(void)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  uint *puVar9;
  float *pfVar10;
  int *in_ECX;
  undefined4 uStack_408;
  int iStack_404;
  int *piStack_400;
  int *piStack_3fc;
  undefined1 auStack_3f8 [4];
  undefined4 uStack_3f4;
  undefined4 *puStack_3f0;
  function<void___cdecl(void)> *pfStack_3ec;
  undefined1 *puStack_3e8;
  uint *puStack_3e4;
  uint uStack_3e0;
  undefined local_3c4 [4];
  undefined1 local_3c0 [4];
  undefined1 *local_3bc;
  undefined1 local_3b8 [4];
  undefined1 local_3b4 [4];
  undefined1 local_3b0 [4];
  undefined1 *local_3ac;
  undefined4 local_3a8;
  undefined1 *local_3a4;
  undefined4 local_3a0;
  undefined1 *local_39c;
  undefined4 local_398;
  undefined1 *local_394;
  undefined1 *local_390;
  undefined1 local_38c [4];
  undefined1 *local_388;
  undefined1 *local_384;
  undefined1 *local_380;
  undefined1 *local_37c;
  undefined1 *local_378;
  undefined local_374 [4];
  undefined1 local_370 [4];
  undefined1 local_36c [4];
  undefined1 local_368 [4];
  undefined1 local_364 [4];
  undefined1 local_360 [4];
  undefined4 local_35c;
  undefined1 *local_358;
  int *local_354;
  undefined4 local_350;
  undefined1 local_34c [4];
  undefined4 local_348;
  undefined1 local_344 [16];
  undefined4 local_334;
  undefined1 local_330 [4];
  undefined1 local_32c [8];
  int local_324;
  int local_320;
  int local_31c;
  int local_318;
  int local_314;
  int local_310;
  int local_30c;
  int *local_308;
  int local_304;
  int local_300;
  int local_2fc;
  int local_2f8;
  int *local_2f4;
  float local_2f0;
  int local_2ec;
  float local_2e8;
  undefined4 local_2e4;
  undefined4 local_2e0;
  undefined1 local_2dc [4];
  int local_2d8;
  int local_2d4;
  int local_2d0;
  uint local_2cc;
  undefined4 local_2c8;
  undefined4 local_2c4;
  undefined4 local_2c0;
  undefined4 local_2bc;
  undefined4 local_2b8;
  int local_2b4;
  int local_2b0;
  undefined *local_2ac;
  undefined *local_2a8;
  int *local_2a4;
  int local_2a0;
  int local_29c;
  undefined4 local_298;
  int *local_294;
  int local_284;
  int *local_280;
  int local_27c;
  int local_278;
  int local_274;
  int local_270;
  int local_26c;
  int *local_268;
  int local_264;
  int *local_260;
  int local_25c;
  int *local_258;
  int *local_254;
  undefined4 local_250;
  int local_24c;
  int *local_248;
  int local_244;
  int local_240;
  int local_23c;
  undefined4 local_238;
  int local_234;
  int local_230;
  int local_22c;
  int local_228;
  undefined1 local_224 [4];
  undefined1 local_220 [4];
  undefined1 local_21c [4];
  int *local_218;
  undefined1 local_214 [8];
  undefined1 local_20c [4];
  undefined1 local_208 [4];
  undefined1 local_204 [4];
  int local_200;
  undefined4 local_1fc;
  int *local_1f8;
  undefined4 local_1f4;
  int *local_1f0;
  int local_1ec;
  int *local_1e8;
  int local_1e4;
  undefined4 local_1e0;
  int local_1dc;
  int local_1d8;
  int *local_1d4;
  int *local_1d0;
  int *local_1cc;
  undefined4 local_1c8;
  int local_1c4;
  int *local_1c0;
  int *local_1bc;
  int local_1b8;
  float local_1b4;
  char local_1ad;
  int local_1ac;
  uint local_1a8;
  undefined4 *local_1a4;
  undefined4 local_1a0;
  uint local_19c;
  char local_197;
  char local_196;
  char local_195;
  int *local_194;
  function<void___cdecl(void)> local_190 [24];
  function<void___cdecl(void)> local_178 [24];
  function<void___cdecl(void)> local_160 [24];
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined1 local_13c [4];
  int local_138 [73];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071aba8;
  local_10 = ExceptionList;
  uStack_3e0 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  in_ECX[0x1ba] = 0;
  puStack_3e4 = (uint *)0x5495cd;
  local_194 = in_ECX;
  local_14 = uStack_3e0;
  FUN_0054b1d0();
  local_3bc = auStack_3f8;
  piStack_3fc = local_194 + 0x53;
  piStack_400 = (int *)0x5495eb;
  FUN_00405520();
  piStack_3fc = (int *)0x5495f0;
  FUN_004c3570();
  if ((local_194[0x69] == 100) && (local_194[0x67] == 1)) {
    if ((local_194[99] == 0) || (*(int *)(local_194[99] + 0x18c) == 0)) {
      puStack_3e4 = (uint *)0x54966d;
      game_get_state_ptr_d1520();
      puStack_3e4 = (uint *)0x549674;
      piVar3 = (int *)FUN_004d58e0();
      local_24c = *piVar3 + 0x170;
      puStack_3e4 = (uint *)local_214;
      puStack_3e8 = (undefined1 *)0x549694;
      FUN_0042a9e0();
      puStack_3e4 = (uint *)local_32c;
      puStack_3e8 = (undefined1 *)0x5496a6;
      FUN_0042a9c0();
      while( true ) {
        puStack_3e4 = (uint *)local_32c;
        puStack_3e8 = (undefined1 *)0x5496c7;
        cVar1 = FUN_0040d2d0();
        if (cVar1 == '\0') break;
        puStack_3e4 = (uint *)0x5496d9;
        local_218 = (int *)FUN_0042a580();
        if ((*(int *)(*local_218 + 0x1e4) == 0x4e36) && (*(int **)(*local_218 + 0x18c) == local_194)
           ) {
          *(undefined4 *)(*local_218 + 0x18c) = 0;
          break;
        }
        puStack_3e4 = (uint *)0x5496b4;
        FUN_0042a560();
      }
      local_194[99] = 0;
    }
    else {
      *(undefined4 *)(local_194[99] + 0x18c) = 0;
      local_194[99] = 0;
    }
  }
  if ((local_194[0x69] == 100) && (local_194[0x67] == 2)) {
    if ((local_194[99] == 0) || (*(int *)(local_194[99] + 0x18c) == 0)) {
      puStack_3e4 = (uint *)0x5497a9;
      game_get_state_ptr_d1520();
      puStack_3e4 = (uint *)0x5497b0;
      piVar3 = (int *)FUN_004d58e0();
      local_270 = *piVar3 + 0x170;
      puStack_3e4 = (uint *)local_21c;
      puStack_3e8 = (undefined1 *)0x5497d0;
      FUN_0042a9e0();
      puStack_3e4 = (uint *)local_330;
      puStack_3e8 = (undefined1 *)0x5497e2;
      FUN_0042a9c0();
      while( true ) {
        puStack_3e4 = (uint *)local_330;
        puStack_3e8 = (undefined1 *)0x549803;
        cVar1 = FUN_0040d2d0();
        if (cVar1 == '\0') break;
        puStack_3e4 = (uint *)0x549815;
        local_1f8 = (int *)FUN_0042a580();
        if (((*(int *)(*local_1f8 + 0x1e4) == 0x4e31) || (*(int *)(*local_1f8 + 0x1e4) == 0x4e51))
           && (*(int **)(*local_1f8 + 0x18c) == local_194)) {
          *(undefined4 *)(*local_1f8 + 0x18c) = 0;
          break;
        }
        puStack_3e4 = (uint *)0x5497f0;
        FUN_0042a560();
      }
      local_194[99] = 0;
    }
    else {
      *(undefined4 *)(local_194[99] + 0x18c) = 0;
      local_194[99] = 0;
    }
  }
  if (((local_194[0x69] == 100) && (local_194[0x67] == 3)) && (local_194[99] != 0)) {
    puStack_3e4 = (uint *)0x5498d2;
    iVar2 = FUN_00401a90();
    if (iVar2 != 0) {
      puStack_3e4 = &local_1f4;
      puStack_3e8 = (undefined1 *)0x5498f8;
      FUN_004021b0();
      while( true ) {
        puStack_3e4 = (uint *)local_3b0;
        puStack_3e8 = (undefined1 *)0x549917;
        puStack_3e4 = (uint *)FUN_00402170();
        puStack_3e8 = (undefined1 *)0x549923;
        cVar1 = FUN_00426ed0();
        if (cVar1 == '\0') break;
        puStack_3e4 = (uint *)0x549935;
        piVar3 = (int *)FUN_0044ddc0();
        if ((int *)*piVar3 == local_194) {
          local_334 = local_1f4;
          puStack_3e4 = (uint *)local_1f4;
          puStack_3e8 = local_3b4;
          pfStack_3ec = (function<void___cdecl(void)> *)0x549970;
          FUN_0044dea0();
          break;
        }
        puStack_3e4 = (uint *)0x549980;
        FUN_0044dda0();
      }
    }
    local_194[99] = 0;
  }
  puStack_3e4 = (uint *)0x54999b;
  game_get_state_ptr_d1520();
  puStack_3e4 = (uint *)0x5499a2;
  piVar3 = (int *)FUN_004d58e0();
  local_274 = *piVar3 + 0x180;
  puStack_3e4 = (uint *)local_220;
  puStack_3e8 = (undefined1 *)0x5499c2;
  FUN_0042a9e0();
  puStack_3e4 = (uint *)local_344;
  puStack_3e8 = (undefined1 *)0x5499d4;
  FUN_0042a9c0();
  while( true ) {
    puStack_3e4 = (uint *)local_344;
    puStack_3e8 = (undefined1 *)0x5499f5;
    cVar1 = FUN_0040d2d0();
    if (cVar1 == '\0') break;
    puStack_3e4 = (uint *)0x549a0b;
    local_1c0 = (int *)FUN_0042a580();
    if (*(int *)(*local_1c0 + 0xc) == 0x4e49) {
      local_197 = '\0';
      puStack_3e4 = (uint *)0x549a3d;
      iVar2 = FUN_00401a90();
      if (iVar2 != 0) {
        puStack_3e4 = &local_1fc;
        puStack_3e8 = (undefined1 *)0x549a5c;
        FUN_004021b0();
        while( true ) {
          puStack_3e4 = (uint *)local_3b8;
          puStack_3e8 = (undefined1 *)0x549a74;
          puStack_3e4 = (uint *)FUN_00402170();
          puStack_3e8 = (undefined1 *)0x549a80;
          cVar1 = FUN_00426ed0();
          if (cVar1 == '\0') break;
          puStack_3e4 = (uint *)0x549a92;
          piVar3 = (int *)FUN_0044ddc0();
          if ((int *)*piVar3 == local_194) {
            local_348 = local_1fc;
            puStack_3e4 = (uint *)local_1fc;
            puStack_3e8 = local_38c;
            pfStack_3ec = (function<void___cdecl(void)> *)0x549ac6;
            FUN_0044dea0();
            local_197 = '\x01';
            break;
          }
          puStack_3e4 = (uint *)0x549add;
          FUN_0044dda0();
        }
      }
      if (local_197 != '\0') {
        local_194[99] = 0;
        break;
      }
    }
    puStack_3e4 = (uint *)0x5499e2;
    FUN_0042a560();
  }
  puStack_3e4 = (uint *)0x549b0a;
  game_get_state_ptr_d1520();
  puStack_3e4 = (uint *)0x549b11;
  piVar3 = (int *)FUN_004d58e0();
  local_278 = *piVar3 + 0x170;
  puStack_3e4 = (uint *)local_224;
  puStack_3e8 = (undefined1 *)0x549b31;
  FUN_0042a9e0();
  puStack_3e4 = (uint *)local_34c;
  puStack_3e8 = (undefined1 *)0x549b43;
  FUN_0042a9c0();
  while( true ) {
    puStack_3e4 = (uint *)local_34c;
    puStack_3e8 = (undefined *)0x549b64;
    cVar1 = FUN_0040d2d0();
    if (cVar1 == '\0') break;
    puStack_3e4 = (uint *)0x549b7a;
    local_1bc = (int *)FUN_0042a580();
    if (*(int *)(*local_1bc + 0x1e4) == 0x4e49) {
      local_195 = '\0';
      puStack_3e4 = (uint *)0x549bb2;
      iVar2 = FUN_00401a90();
      if (iVar2 != 0) {
        puStack_3e4 = &local_1c8;
        puStack_3e8 = (undefined1 *)0x549bd4;
        FUN_004021b0();
        while( true ) {
          puStack_3e4 = (uint *)local_3c0;
          puStack_3e8 = (undefined1 *)0x549bef;
          puStack_3e4 = (uint *)FUN_00402170();
          puStack_3e8 = (undefined *)0x549bfb;
          cVar1 = FUN_00426ed0();
          if (cVar1 == '\0') break;
          puStack_3e4 = (uint *)0x549c0d;
          piVar3 = (int *)FUN_0044ddc0();
          if ((int *)*piVar3 == local_194) {
            local_350 = local_1c8;
            puStack_3e4 = (uint *)local_1c8;
            puStack_3e8 = local_3c4;
            pfStack_3ec = (function<void___cdecl(void)> *)0x549c44;
            FUN_0044dea0();
            local_195 = '\x01';
            break;
          }
          puStack_3e4 = (uint *)0x549c5b;
          FUN_0044dda0();
        }
      }
      if (local_195 != '\0') {
        local_194[99] = 0;
        break;
      }
    }
    puStack_3e4 = (uint *)0x549b51;
    FUN_0042a560();
  }
  if (((local_194[0x69] == 100) && (*(char *)((int)local_194 + 0x931) != '\0')) &&
     (local_194[99] != 0)) {
    puStack_3e4 = (uint *)0x549cd4;
    (**(code **)(*(int *)local_194[99] + 0x118))();
  }
  local_196 = '\0';
  puStack_3e4 = (uint *)0x549ce1;
  piVar3 = (int *)game_get_state_ptr_d1520();
  local_27c = *piVar3 + 0x144;
  puStack_3e4 = (uint *)0x549cfa;
  local_1cc = (int *)game_loop_helper_018d0();
  puStack_3e4 = (uint *)0x549d0b;
  local_354 = (int *)game_loop_helper_018b0();
  for (; local_1cc != local_354; local_1cc = local_1cc + 1) {
    local_294 = local_1cc;
    if (((*local_1cc == local_194[0x79]) && (local_194[0x79] != 0x2ee)) &&
       (local_194[0x79] != 0x435)) {
      local_196 = '\x01';
      break;
    }
  }
  if (local_196 == '\0') {
    puStack_3e4 = (uint *)(local_194 + 0x79);
    puStack_3e8 = (undefined1 *)0x549da2;
    game_get_state_ptr_d1520();
    puStack_3e8 = (undefined *)0x549daf;
    FUN_0040d490();
    if (local_194[0x26a] == 3) {
      puStack_3e4 = (uint *)0x549dc8;
      piVar3 = (int *)game_get_state_ptr_d1520();
      local_280 = (int *)(*piVar3 + 100);
      *local_280 = *local_280 + -1;
      local_298 = 100;
      piStack_3fc = (int *)&DAT_0075964c;
      piStack_400 = (int *)0x549e05;
      FUN_004054a0();
      local_8 = 0;
      piStack_3fc = &local_298;
      piStack_400 = (int *)0x549e1e;
      FUN_004d1bb0();
      piStack_400 = (int *)0x549e25;
      piStack_3fc = (int *)game_timing_or_delay_helper();
      local_8 = 0xffffffff;
      piStack_400 = (int *)0x549e32;
      local_29c = ui_find_widget_by_key();
      if (local_29c == 0) {
        puStack_3e4 = (uint *)0x549e4d;
        piVar3 = (int *)game_get_state_ptr_d1520();
        if (*(int *)(*piVar3 + 100) != 0) {
          puStack_3e4 = (uint *)0x549e5a;
          piVar3 = (int *)game_get_state_ptr_d1520();
          if (*(int *)(*piVar3 + 0x16c) != 0x33) goto LAB_0054a7fa;
        }
        puStack_3e4 = (uint *)0x549e6e;
        iVar2 = game_get_player_or_session_blob();
        if (*(char *)(iVar2 + 0xdb8) != '\0') {
          puStack_3e4 = (uint *)0x549e7e;
          piVar3 = (int *)game_get_state_ptr_d1520();
          if (*(int *)(*piVar3 + 100) == 0) {
            puStack_3e4 = (uint *)0x549e8b;
            puVar4 = (undefined4 *)FUN_004d1b20();
            puStack_3e4 = *(uint **)*puVar4;
            puStack_3e8 = (undefined1 *)0x549e95;
            puVar4 = (undefined4 *)FUN_00641420();
            puStack_3e8 = (undefined1 *)*puVar4;
            pfStack_3ec = (function<void___cdecl(void)> *)0x549e9d;
            piVar3 = (int *)FUN_004d1b20();
            pfStack_3ec = *(function<void___cdecl(void)> **)(*piVar3 + 0xc);
            puStack_3f0 = (undefined4 *)0x9290;
            uStack_3f4 = 0x549ead;
            net_packet_send_375xx();
          }
        }
        puStack_3e4 = (uint *)0x549eb5;
        piVar3 = (int *)game_get_state_ptr_d1520();
        *(undefined4 *)(*piVar3 + 0xb4) = 0;
        puStack_3e4 = (uint *)0x3;
        puStack_3e8 = (undefined1 *)(float)local_194[0x8b];
        pfStack_3ec = (function<void___cdecl(void)> *)(float)local_194[0x8a];
        puStack_3f0 = (undefined4 *)(float)local_194[0x89];
        local_358 = (undefined1 *)&uStack_408;
        local_35c = FUN_004054a0("common/commoneffect/animation/laststrikeforkillboss.ani");
        local_8 = 1;
        uVar5 = FUN_00516d20();
        local_8 = 0xffffffff;
        local_2a0 = FUN_00516a90(uVar5);
        *(undefined1 *)(local_2a0 + 0x28) = 1;
        puStack_3e4 = (uint *)0x549f4b;
        piVar3 = (int *)game_get_state_ptr_d1520();
        if (0 < *(int *)(*piVar3 + 100)) {
          puStack_3e4 = (uint *)0x549f5c;
          piVar3 = (int *)game_get_state_ptr_d1520();
          if (*(int *)(*piVar3 + 0x16c) == 0x33) {
            puStack_3e4 = (uint *)0x549f70;
            piVar3 = (int *)game_get_state_ptr_d1520();
            local_230 = *piVar3 + 0x1d4;
            puStack_3e4 = (uint *)0x549f89;
            local_1d0 = (int *)game_loop_helper_018d0();
            puStack_3e4 = (uint *)0x549f9a;
            local_2a4 = (int *)game_loop_helper_018b0();
            for (; local_1d0 != local_2a4; local_1d0 = local_1d0 + 5) {
              local_1d4 = local_1d0;
              puStack_3e4 = (uint *)0x549fd4;
              piVar3 = (int *)game_get_state_ptr_d1520();
              if (*(char *)(*piVar3 + 0x44) == '\0') {
LAB_0054a00c:
                puStack_3e4 = (uint *)0x2;
                puStack_3e8 = (undefined1 *)0x0;
                pfStack_3ec = local_190;
                puStack_3f0 = (undefined4 *)local_1d4[2];
                uStack_3f4 = 0x54a026;
                game_loop_helper_e9240();
                uStack_3f4 = 0x54a02d;
                FUN_005bcf10();
                puStack_3f0 = (undefined4 *)0x54a039;
                local_2ac = (undefined *)FUN_004bcf80();
                local_8 = 2;
                puStack_3e4 = (uint *)0x54a057;
                local_2a8 = local_2ac;
                piVar3 = (int *)game_get_state_ptr_d1520();
                puStack_3e4 = *(uint **)(*piVar3 + 0x1b8);
                puStack_3e8 = local_2ac;
                pfStack_3ec = (function<void___cdecl(void)> *)0x54a06c;
                game_get_state_ptr_d1520();
                pfStack_3ec = (function<void___cdecl(void)> *)0x54a073;
                iVar2 = FUN_004d10b0();
                local_1d4[3] = iVar2;
                local_8 = 0xffffffff;
                puStack_3e4 = (uint *)0x54a08e;
                std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_190);
              }
              else {
                puStack_3e4 = (uint *)0x549fe3;
                piVar3 = (int *)game_get_state_ptr_d1520();
                if (*(int *)(*piVar3 + 0x54) != *local_1d4) goto LAB_0054a00c;
                puStack_3e4 = (uint *)0x549ff7;
                piVar3 = (int *)game_get_state_ptr_d1520();
                if (*(int *)(*piVar3 + 0x58) != local_1d4[1]) goto LAB_0054a00c;
              }
            }
            local_148 = 0x1910;
            local_144 = 0x1916;
            local_140 = 0x1917;
            puStack_3e4 = (uint *)0x54a0bd;
            puStack_3e4 = (uint *)allocator<>();
            puStack_3e8 = local_13c;
            pfStack_3ec = (function<void___cdecl(void)> *)&local_148;
            puStack_3f0 = (undefined4 *)0x54a0d7;
            piVar3 = (int *)FUN_00401880();
            puStack_3e8 = (undefined1 *)piVar3[1];
            pfStack_3ec = (function<void___cdecl(void)> *)*piVar3;
            puStack_3f0 = (undefined4 *)0x54a0e9;
            FUN_0051a0b0();
            local_8 = 3;
            puStack_3e4 = (uint *)0x54a0f5;
            piVar3 = (int *)game_get_state_ptr_d1520();
            local_234 = *piVar3 + 0x1d4;
            puStack_3e4 = (uint *)0x54a10e;
            local_1d8 = game_loop_helper_018d0();
            puStack_3e4 = (uint *)0x54a11f;
            local_2b0 = game_loop_helper_018b0();
            for (; local_1d8 != local_2b0; local_1d8 = local_1d8 + 0x14) {
              local_2b4 = local_1d8;
              puStack_3e4 = (uint *)(local_1d8 + 8);
              puStack_3e8 = local_360;
              pfStack_3ec = (function<void___cdecl(void)> *)0x54a170;
              puVar4 = (undefined4 *)FUN_00402170();
              puStack_3e8 = (undefined1 *)*puVar4;
              pfStack_3ec = (function<void___cdecl(void)> *)local_364;
              puStack_3f0 = (undefined4 *)0x54a185;
              piVar3 = (int *)FUN_004021b0();
              pfStack_3ec = (function<void___cdecl(void)> *)*piVar3;
              puStack_3f0 = &local_238;
              uStack_3f4 = 0x54a194;
              FUN_00427cc0();
              puStack_3e4 = (uint *)local_368;
              puStack_3e8 = (undefined1 *)0x54a1a9;
              puStack_3e4 = (uint *)FUN_00402170();
              puStack_3e8 = (undefined1 *)0x54a1b5;
              cVar1 = FUN_00426ed0();
              if (cVar1 != '\0') {
                local_2b8 = local_238;
                puStack_3e4 = (uint *)local_238;
                puStack_3e8 = local_36c;
                pfStack_3ec = (function<void___cdecl(void)> *)0x54a1e1;
                FUN_0044dea0();
              }
            }
            puStack_3e4 = (uint *)0x54a1ec;
            uVar6 = FUN_00641430();
            puStack_3e4 = (uint *)0x54a1f9;
            uVar7 = FUN_00401a90();
            puStack_3e4 = (uint *)(uVar6 % uVar7);
            puStack_3e8 = (undefined1 *)0x54a20d;
            puVar4 = (undefined4 *)game_get_flag_object_01a70();
            local_1e0 = *puVar4;
            puStack_3e4 = (uint *)0x54a220;
            FUN_0040d650();
            local_8 = CONCAT31(local_8._1_3_,4);
            local_19c = 0;
            while( true ) {
              puStack_3e4 = (uint *)0x54a244;
              game_get_state_ptr_d1520();
              puStack_3e4 = (uint *)0x54a251;
              uVar6 = FUN_00519d00();
              if (uVar6 <= local_19c) break;
              puStack_3e4 = (uint *)local_19c;
              puStack_3e8 = (undefined1 *)0x54a269;
              game_get_state_ptr_d1520();
              puStack_3e8 = (undefined1 *)0x54a276;
              piVar3 = (int *)FUN_00519ce0();
              puStack_3e4 = (uint *)0x54a27d;
              piVar8 = (int *)game_get_state_ptr_d1520();
              if (*piVar3 == *(int *)(*piVar8 + 0x180)) {
                puStack_3e4 = (uint *)local_19c;
                puStack_3e8 = (undefined1 *)0x54a295;
                game_get_state_ptr_d1520();
                puStack_3e8 = (undefined1 *)0x54a2a2;
                iVar2 = FUN_00519ce0();
                puStack_3e4 = (uint *)0x54a2a9;
                piVar3 = (int *)game_get_state_ptr_d1520();
                if (*(int *)(iVar2 + 4) != *(int *)(*piVar3 + 0x184)) goto LAB_0054a2ba;
              }
              else {
LAB_0054a2ba:
                puStack_3e4 = (uint *)local_19c;
                puStack_3e8 = (undefined1 *)0x54a2c6;
                game_get_state_ptr_d1520();
                puStack_3e8 = (undefined1 *)0x54a2d3;
                piVar3 = (int *)FUN_00519ce0();
                puStack_3e4 = (uint *)0x54a2da;
                piVar8 = (int *)game_get_state_ptr_d1520();
                if (*piVar3 == *(int *)(*piVar8 + 0x54)) {
                  puStack_3e4 = (uint *)local_19c;
                  puStack_3e8 = (undefined1 *)0x54a2ef;
                  game_get_state_ptr_d1520();
                  puStack_3e8 = (undefined1 *)0x54a2fc;
                  iVar2 = FUN_00519ce0();
                  puStack_3e4 = (uint *)0x54a303;
                  piVar3 = (int *)game_get_state_ptr_d1520();
                  if (*(int *)(iVar2 + 4) == *(int *)(*piVar3 + 0x58)) goto LAB_0054a230;
                }
                puStack_3e4 = (uint *)local_19c;
                puStack_3e8 = (undefined1 *)0x54a31d;
                game_get_state_ptr_d1520();
                puStack_3e8 = (undefined1 *)0x54a32a;
                iVar2 = FUN_00519ce0();
                puStack_3e4 = *(uint **)(iVar2 + 8);
                puStack_3e8 = (undefined1 *)0x54a333;
                game_loop_helper_e9240();
                puStack_3e8 = (undefined1 *)0x54a33a;
                local_2c0 = FUN_005bcf10();
                puStack_3e4 = (uint *)0x2;
                puStack_3e8 = (undefined1 *)0x0;
                pfStack_3ec = local_160;
                puStack_3f0 = (undefined4 *)local_1e0;
                uStack_3f4 = 0x54a357;
                game_loop_helper_e9240();
                uStack_3f4 = 0x54a35e;
                FUN_005bcf10();
                puStack_3f0 = (undefined4 *)0x54a36a;
                local_2c4 = FUN_004bcf80();
                local_8._0_1_ = 5;
                puStack_3e4 = (uint *)0x2;
                puStack_3e8 = (undefined1 *)0x0;
                pfStack_3ec = local_178;
                puStack_3f0 = (undefined4 *)0x54a39c;
                local_2bc = local_2c4;
                puStack_3e8 = (undefined1 *)FUN_004bcf80();
                puStack_3e4 = (uint *)local_2c4;
                pfStack_3ec = (function<void___cdecl(void)> *)0x54a3b5;
                local_2c8 = puStack_3e8;
                local_1ad = destroy<>();
                puStack_3e4 = (uint *)0x54a3c9;
                std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_178);
                local_8 = CONCAT31(local_8._1_3_,4);
                puStack_3e4 = (uint *)0x54a3d8;
                std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_160);
                if (local_1ad != '\0') {
                  puStack_3e4 = &local_19c;
                  puStack_3e8 = (undefined1 *)0x54a3f5;
                  FUN_0040d490();
                }
              }
LAB_0054a230:
              local_19c = local_19c + 1;
            }
            puStack_3e4 = (uint *)0x54a406;
            Concurrency::details::QuickBitSet::QuickBitSet((QuickBitSet *)&local_22c);
            puStack_3e4 = (uint *)0x54a412;
            cVar1 = game_frame_should_continue();
            if (cVar1 == '\0') {
              puStack_3e4 = (uint *)0x54a422;
              uVar6 = FUN_00641430();
              puStack_3e4 = (uint *)0x54a42f;
              uVar7 = FUN_00401a90();
              puStack_3e4 = (uint *)(uVar6 % uVar7);
              puStack_3e8 = (undefined1 *)0x54a443;
              puVar9 = (uint *)game_get_flag_object_01a70();
              local_2cc = *puVar9;
              local_1a8 = 0;
              while( true ) {
                puStack_3e4 = (uint *)0x54a46b;
                game_get_state_ptr_d1520();
                puStack_3e4 = (uint *)0x54a478;
                uVar6 = FUN_00519d00();
                if (uVar6 <= local_1a8) break;
                if (local_1a8 == local_2cc) {
                  puStack_3e4 = (uint *)local_1a8;
                  puStack_3e8 = (undefined1 *)0x54a4a2;
                  game_get_state_ptr_d1520();
                  puStack_3e8 = (undefined1 *)0x54a4af;
                  piVar3 = (int *)FUN_00519ce0();
                  local_22c = *piVar3;
                  puStack_3e4 = (uint *)local_1a8;
                  puStack_3e8 = (undefined1 *)0x54a4c3;
                  game_get_state_ptr_d1520();
                  puStack_3e8 = (undefined1 *)0x54a4d0;
                  iVar2 = FUN_00519ce0();
                  local_228 = *(int *)(iVar2 + 4);
                  puStack_3e4 = (uint *)local_1a8;
                  puStack_3e8 = (undefined1 *)0x54a4e5;
                  game_get_state_ptr_d1520();
                  puStack_3e8 = (undefined1 *)0x54a4f2;
                  iVar2 = FUN_00519ce0();
                  *(undefined4 *)(iVar2 + 8) = local_1e0;
                  puStack_3e4 = (uint *)local_1a8;
                  puStack_3e8 = (undefined1 *)0x54a507;
                  game_get_state_ptr_d1520();
                  puStack_3e8 = (undefined1 *)0x54a514;
                  iVar2 = FUN_00519ce0();
                  *(undefined4 *)(iVar2 + 0x10) = 0;
                  puStack_3e4 = (uint *)0x54a520;
                  piVar3 = (int *)game_get_state_ptr_d1520();
                  *(undefined4 *)(*piVar3 + 0x174) = local_1e0;
                  break;
                }
                local_1a8 = local_1a8 + 1;
              }
            }
            puStack_3e4 = (uint *)0x54a53a;
            piVar3 = (int *)game_get_state_ptr_d1520();
            local_23c = *piVar3 + 0x1e0;
            puStack_3e4 = (uint *)0x54a553;
            local_1dc = game_loop_helper_018d0();
            puStack_3e4 = (uint *)0x54a564;
            local_2d0 = game_loop_helper_018b0();
            for (; local_1dc != local_2d0; local_1dc = local_1dc + 0x20) {
              local_200 = local_1dc;
              if ((*(int *)(local_1dc + 0x18) == local_22c) &&
                 (*(int *)(local_1dc + 0x1c) == local_228)) {
                *(undefined4 *)(local_1dc + 0x10) = local_1e0;
              }
            }
            puStack_3e4 = &local_1a0;
            puStack_3e8 = (undefined1 *)0x54a5d4;
            game_get_state_ptr_d1520();
            puStack_3e8 = (undefined1 *)0x54a5de;
            FUN_004021b0();
LAB_0054a5ed:
            puStack_3e4 = (uint *)local_370;
            puStack_3e8 = (undefined1 *)0x54a5f9;
            game_get_state_ptr_d1520();
            puStack_3e8 = (undefined1 *)0x54a603;
            puStack_3e4 = (uint *)FUN_00402170();
            puStack_3e8 = (undefined *)0x54a60f;
            cVar1 = FUN_00426ed0();
            if (cVar1 != '\0') {
              puStack_3e4 = (uint *)0x54a625;
              piVar3 = (int *)FUN_00401b20();
              if (*piVar3 != local_22c) goto LAB_0054a5e1;
              puStack_3e4 = (uint *)0x54a63e;
              iVar2 = FUN_00401b20();
              if (*(int *)(iVar2 + 4) != local_228) goto LAB_0054a5e1;
              puStack_3e4 = (uint *)0x54a658;
              local_240 = FUN_00401b20();
              local_240 = local_240 + 0x10;
              puStack_3e4 = (uint *)0x54a66c;
              local_1e4 = game_loop_helper_018d0();
              puStack_3e4 = (uint *)0x54a67d;
              local_2d4 = game_loop_helper_018b0();
              for (; local_1e4 != local_2d4; local_1e4 = local_1e4 + 4) {
                local_2d8 = local_1e4;
                puStack_3e4 = (uint *)local_1e4;
                puStack_3e8 = (undefined1 *)0x54a6ba;
                FUN_004d1b30();
                puStack_3e8 = (undefined *)0x54a6c1;
                FUN_00517980();
              }
              puStack_3e4 = (uint *)0x54a6cf;
              FUN_00401b20();
              puStack_3e4 = (uint *)0x54a6d9;
              FUN_0040d5f0();
              puStack_3e4 = (uint *)0x54a6e5;
              local_244 = FUN_00401b20();
              local_244 = local_244 + 8;
              puStack_3e4 = (uint *)local_204;
              puStack_3e8 = (undefined1 *)0x54a700;
              FUN_0042a9e0();
              puStack_3e4 = (uint *)local_2dc;
              puStack_3e8 = (undefined1 *)0x54a712;
              FUN_0042a9c0();
              while( true ) {
                puStack_3e4 = (uint *)local_2dc;
                puStack_3e8 = (undefined1 *)0x54a733;
                cVar1 = FUN_0040d2d0();
                if (cVar1 == '\0') break;
                puStack_3e4 = (uint *)0x54a745;
                local_248 = (int *)FUN_0042a580();
                puStack_3e4 = (uint *)0x54a758;
                FUN_0062ed50();
                local_26c = *local_248;
                if (local_26c == 0) {
                  local_2e0 = 0;
                }
                else {
                  puStack_3e4 = (uint *)0x1;
                  puStack_3e8 = (undefined1 *)0x54a77d;
                  local_2e0 = FUN_004d1980();
                }
                puStack_3e4 = (uint *)0x54a720;
                FUN_0042a560();
              }
              puStack_3e4 = (uint *)0x54a79c;
              FUN_00401b20();
              puStack_3e4 = (uint *)0x54a7a6;
              FUN_0044e040();
              local_2e4 = local_1a0;
              puStack_3e4 = (uint *)local_1a0;
              puStack_3e8 = local_374;
              pfStack_3ec = (function<void___cdecl(void)> *)0x54a7c6;
              game_get_state_ptr_d1520();
              pfStack_3ec = (function<void___cdecl(void)> *)0x54a7d0;
              FUN_00518c50();
            }
            local_8 = CONCAT31(local_8._1_3_,3);
            puStack_3e4 = (uint *)0x54a7e7;
            FUN_00401ac0();
            local_8 = 0xffffffff;
            puStack_3e4 = (uint *)0x54a7f9;
            FUN_00401ac0();
          }
        }
      }
    }
  }
LAB_0054a7fa:
  if ((local_194[0x80] == 100) && ((char)local_194[0x24c] != '\0')) {
    puStack_3e4 = (uint *)local_194[0x79];
    puStack_3e8 = (undefined1 *)0x54a834;
    puStack_3e8 = (undefined1 *)game_get_player_or_session_blob();
    pfStack_3ec = (function<void___cdecl(void)> *)0x54a83a;
    FUN_0060de50();
    puStack_3e4 = (uint *)(local_194[0x7f] + -1);
    puStack_3e8 = (undefined1 *)0x54a852;
    game_loop_helper_e9240();
    puStack_3e8 = (undefined1 *)0x54a85e;
    piVar3 = (int *)game_get_flag_object_01a70();
    local_2e8 = (float)*piVar3;
    puStack_3e4 = (uint *)0x54a86f;
    piVar3 = (int *)game_get_state_ptr_d1520();
    puStack_3e4 = *(uint **)(*piVar3 + 0x170);
    puStack_3e8 = (undefined1 *)0xd;
    pfStack_3ec = (function<void___cdecl(void)> *)0x54a87f;
    game_loop_helper_e9240();
    pfStack_3ec = (function<void___cdecl(void)> *)0x54a886;
    pfVar10 = (float *)FUN_005dbe50();
    local_2ec = (int)(local_2e8 * *pfVar10);
    local_1b4 = 1.0;
    if (local_194[0x26a] == 0) {
      local_1b4 = 1.0;
    }
    else if (local_194[0x26a] == 1) {
      local_1b4 = 1.5;
    }
    else if (local_194[0x26a] == 2) {
      local_1b4 = 2.0;
    }
    else if (local_194[0x26a] == 3) {
      local_1b4 = 4.0;
    }
    if ((49999 < local_194[0x79]) && (local_194[0x79] < 0xc3ae)) {
      local_1b4 = 2.5;
    }
    local_1ec = 0;
    puStack_3e4 = (uint *)0x54a971;
    puVar4 = (undefined4 *)game_get_state_ptr_d1520();
    if (*(int *)*puVar4 != 0) {
      local_2f0 = (float)local_2ec * local_1b4;
      puStack_3e4 = (uint *)0x54a995;
      puVar4 = (undefined4 *)game_get_state_ptr_d1520();
      local_1ec = (int)(local_2f0 * *(float *)(*(int *)*puVar4 + 0x90));
    }
    puStack_3e4 = (uint *)0x54a9b8;
    iVar2 = game_get_player_or_session_blob();
    if (*(char *)(iVar2 + 0xdb8) == '\0') {
      puStack_3e4 = (uint *)local_1ec;
      puStack_3e8 = (undefined1 *)0x54a9cf;
      game_get_player_or_session_blob();
      puStack_3e8 = (undefined1 *)0x54a9d6;
      FUN_00457a40();
    }
    else {
      puStack_3e4 = (uint *)0x54a9de;
      local_250 = FUN_004d1a70();
      puStack_3e4 = (uint *)0x54a9ef;
      local_1e8 = (int *)game_loop_helper_018d0();
      puStack_3e4 = (uint *)0x54aa00;
      local_2f4 = (int *)game_loop_helper_018b0();
      for (; local_1e8 != local_2f4; local_1e8 = local_1e8 + 1) {
        local_254 = local_1e8;
        if (*local_1e8 != 0) {
          puStack_3e4 = (uint *)local_1ec;
          puStack_3e8 = (undefined1 *)0x54aa50;
          FUN_00457a40();
        }
      }
    }
    puStack_3e4 = (uint *)0x54aa58;
    piVar3 = (int *)game_get_state_ptr_d1520();
    local_258 = (int *)(*piVar3 + 0x104);
    *local_258 = *local_258 + local_1ec;
    puStack_3e4 = (uint *)local_194;
    puStack_3e8 = (undefined *)0x54aa88;
    FUN_00544af0();
  }
  if (local_194[0x79] == 0x41d) {
    puStack_3e4 = (uint *)0x54aaa6;
    game_get_state_ptr_d1520();
    puStack_3e4 = (uint *)0x54aaad;
    piVar3 = (int *)FUN_004d58e0();
    local_25c = *piVar3 + 0x170;
    puStack_3e4 = (uint *)local_208;
    puStack_3e8 = (undefined1 *)0x54aacd;
    FUN_0042a9e0();
    puStack_3e4 = (uint *)&local_2f8;
    puStack_3e8 = (undefined1 *)0x54aadf;
    FUN_0042a9c0();
    while( true ) {
      puStack_3e4 = (uint *)&local_2f8;
      puStack_3e8 = (undefined *)0x54ab00;
      cVar1 = FUN_0040d2d0();
      if (cVar1 == '\0') break;
      puStack_3e4 = (uint *)0x54ab16;
      local_1a4 = (undefined4 *)FUN_0042a580();
      local_378 = auStack_3f8;
      piStack_3fc = (int *)0x759720;
      piStack_400 = (int *)0x54ab31;
      FUN_004054a0();
      piStack_3fc = (int *)0x54ab3e;
      local_2fc = FUN_00630790();
      local_1ac = local_2fc;
      if (local_2fc != 0) {
        puStack_3e8 = (undefined *)0x54ab7a;
        puStack_3e4 = (uint *)local_2fc;
        (**(code **)(*(int *)*local_1a4 + 0xd8))();
      }
      local_37c = auStack_3f8;
      piStack_3fc = (int *)0x759768;
      piStack_400 = (int *)0x54ab90;
      FUN_004054a0();
      piStack_3fc = (int *)0x54ab9d;
      local_300 = FUN_00630790();
      local_1ac = local_300;
      if (local_300 != 0) {
        puStack_3e8 = (undefined *)0x54abd9;
        puStack_3e4 = (uint *)local_300;
        (**(code **)(*(int *)*local_1a4 + 0xd8))();
      }
      local_380 = auStack_3f8;
      piStack_3fc = (int *)0x7596a0;
      piStack_400 = (int *)0x54abef;
      FUN_004054a0();
      piStack_3fc = (int *)0x54abfc;
      puStack_3e4 = (uint *)FUN_00630790();
      local_304 = (int)puStack_3e4;
      local_1ac = (int)puStack_3e4;
      if (puStack_3e4 != (uint *)0x0) {
        puStack_3e8 = (undefined *)0x54ac38;
        (**(code **)(*(int *)*local_1a4 + 0xd8))();
      }
      puStack_3e4 = (uint *)0x54aaed;
      FUN_0042a560();
    }
  }
  local_138[0] = 1;
  local_138[1] = 2;
  local_138[2] = 3;
  local_138[3] = 4;
  local_138[4] = 5;
  local_138[5] = 6;
  local_138[6] = 7;
  local_138[7] = 8;
  local_138[8] = 9;
  local_260 = local_138;
  local_308 = local_138 + 9;
  local_1f0 = local_260;
  while( true ) {
    if (local_1f0 == local_308) goto LAB_0054ae7b;
    local_30c = *local_1f0;
    if (local_194[0x79] == local_30c) break;
    local_1f0 = local_1f0 + 1;
  }
  puStack_3e4 = (uint *)0x54ad0d;
  game_get_state_ptr_d1520();
  puStack_3e4 = (uint *)0x54ad14;
  piVar3 = (int *)FUN_004d58e0();
  local_264 = *piVar3 + 0x170;
  puStack_3e4 = (uint *)local_20c;
  puStack_3e8 = (undefined1 *)0x54ad34;
  FUN_0042a9e0();
  puStack_3e4 = (uint *)&local_310;
  puStack_3e8 = (undefined1 *)0x54ad46;
  FUN_0042a9c0();
  while( true ) {
    puStack_3e4 = (uint *)&local_310;
    puStack_3e8 = (undefined *)0x54ad67;
    cVar1 = FUN_0040d2d0();
    if (cVar1 == '\0') break;
    puStack_3e4 = (uint *)0x54ad7d;
    local_268 = (int *)FUN_0042a580();
    if ((*(int *)(*local_268 + 0x204) == 100) && (*(int *)(*local_268 + 0x1e4) == 10)) {
      local_384 = auStack_3f8;
      piStack_3fc = (int *)0x7596ec;
      piStack_400 = (int *)0x54adc2;
      FUN_004054a0();
      piStack_3fc = (int *)local_194[0x8b];
      piStack_400 = (int *)local_194[0x8a];
      iStack_404 = local_194[0x89];
      uStack_408 = 0;
      local_314 = FUN_004aa990();
      *(int **)(local_314 + 0x60) = local_194;
      local_388 = auStack_3f8;
      piStack_3fc = (int *)0x7597f8;
      piStack_400 = (int *)0x54ae1d;
      FUN_004054a0();
      piStack_3fc = (int *)0x54ae22;
      FUN_004c3570();
      puStack_3e4 = (uint *)0x54ae36;
      puStack_3e4 = (uint *)npk_get_relative_res_path();
      puStack_3e8 = &DAT_00759804;
      pfStack_3ec = (function<void___cdecl(void)> *)(local_138 + 9);
      puStack_3f0 = (undefined4 *)0x54ae48;
      FUN_00414e80();
      puStack_3e4 = (uint *)0xffff6100;
      piStack_400 = local_138 + 9;
      iStack_404 = 0x54ae67;
      FUN_004054a0();
      piStack_400 = (int *)0x54ae6c;
      FUN_0049d850();
    }
    puStack_3e4 = (uint *)0x54ad54;
    FUN_0042a560();
  }
LAB_0054ae7b:
  if (((local_194[0x261] != 0) && (*(int *)(local_194[0x261] + 0x204) == 0)) &&
     (*(char *)(local_194[0x261] + 0xa8c) != '\0')) {
    local_390 = auStack_3f8;
    piStack_3fc = (int *)&DAT_007597b4;
    piStack_400 = (int *)0x54aed7;
    FUN_004054a0();
    piStack_3fc = (int *)0x54aee2;
    local_318 = FUN_006356a0();
    if (local_318 != 0) {
      puStack_3e4 = (uint *)0x54af08;
      local_1c4 = (**(code **)(*local_194 + 0x68))();
      puStack_3e4 = (uint *)0x3;
      puStack_3e8 = (undefined1 *)(float)(local_194[0x8b] + local_1c4 / 2);
      pfStack_3ec = (function<void___cdecl(void)> *)(float)local_194[0x8a];
      puStack_3f0 = (undefined4 *)(float)local_194[0x89];
      local_394 = (undefined1 *)&uStack_408;
      local_398 = FUN_004054a0("character/swordman/effect/animation/frenzy/createball.ani");
      local_8 = 6;
      uVar5 = FUN_00516d20();
      local_8 = 0xffffffff;
      local_31c = FUN_00516a90(uVar5);
      *(int *)(local_31c + 0x130) = local_194[0x261];
      puStack_3e4 = (uint *)0x3;
      puStack_3e8 = (undefined1 *)(float)(local_194[0x8b] + local_1c4 / 2);
      pfStack_3ec = (function<void___cdecl(void)> *)(float)local_194[0x8a];
      puStack_3f0 = (undefined4 *)(float)local_194[0x89];
      local_39c = (undefined1 *)&uStack_408;
      local_284 = local_31c;
      local_3a0 = FUN_004054a0("character/swordman/effect/animation/frenzy/ball.ani");
      local_8 = 7;
      uVar5 = FUN_00516d20();
      local_8 = 0xffffffff;
      local_320 = FUN_00516a90(uVar5);
      *(int *)(local_320 + 0x130) = local_284;
      puStack_3e4 = (uint *)0x2;
      puStack_3e8 = (undefined1 *)0x4c;
      pfStack_3ec = (function<void___cdecl(void)> *)0x54b079;
      local_1b8 = local_320;
      FUN_0047bd30();
      puStack_3e4 = (uint *)0x54b07e;
      uVar5 = thunk_FUN_006e5750();
      *(undefined4 *)(local_1b8 + 0xd0) = uVar5;
      *(undefined4 *)(local_1b8 + 0x108) = 0;
      *(undefined4 *)(local_1b8 + 0x10c) = 0x5dc;
      puStack_3e4 = (uint *)0x3;
      puStack_3e8 = (undefined1 *)(float)(local_194[0x8b] + local_1c4 / 2);
      pfStack_3ec = (function<void___cdecl(void)> *)(float)local_194[0x8a];
      puStack_3f0 = (undefined4 *)(float)local_194[0x89];
      local_3a4 = (undefined1 *)&uStack_408;
      local_3a8 = FUN_004054a0("character/swordman/effect/animation/frenzy/balllayer.ani");
      local_8 = 8;
      uVar5 = FUN_00516d20();
      local_8 = 0xffffffff;
      local_324 = FUN_00516a90(uVar5);
      *(int *)(local_324 + 0x130) = local_1b8;
      local_3ac = auStack_3f8;
      piStack_3fc = (int *)0x759814;
      piStack_400 = (int *)0x54b15b;
      FUN_004054a0();
      piStack_3fc = (int *)(local_1c4 / 2 + local_194[0x8b]);
      piStack_400 = (int *)local_194[0x8a];
      iStack_404 = local_194[0x89];
      uStack_408 = 0;
      iVar2 = FUN_004aa990();
      *(int *)(iVar2 + 0x60) = local_1b8;
    }
  }
  ExceptionList = local_10;
  return;
LAB_0054a5e1:
  puStack_3e4 = (uint *)0x54a5ec;
  FUN_00518450();
  goto LAB_0054a5ed;
}


/* ==== 0054f4f0  FUN_0054f4f0  size=5272 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_0054f4f0(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int *in_ECX;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uStack_194;
  char *pcStack_190;
  undefined4 uStack_18c;
  int iStack_188;
  char *pcStack_184;
  int *piStack_180;
  int iStack_17c;
  int iStack_178;
  float fStack_174;
  int *piStack_170;
  function<void___cdecl(void)> *pfStack_16c;
  int *piStack_168;
  int *piStack_164;
  uint uStack_160;
  undefined1 local_158 [8];
  undefined4 local_150;
  undefined4 local_14c;
  undefined1 *local_148;
  undefined4 local_144;
  undefined1 *local_140;
  undefined1 *local_13c;
  undefined1 *local_138;
  undefined1 *local_134;
  undefined1 *local_130;
  undefined4 local_12c;
  undefined1 *local_128;
  undefined1 *local_124;
  undefined4 local_120;
  undefined1 *local_11c;
  undefined1 *local_118;
  undefined1 *local_114;
  undefined1 *local_110;
  undefined1 *local_10c;
  undefined1 *local_108;
  undefined1 *local_104;
  undefined4 local_100;
  undefined1 *local_fc;
  undefined4 local_f8;
  undefined1 *local_f4;
  undefined1 local_f0 [4];
  undefined1 local_ec [4];
  undefined4 local_e8;
  undefined1 *local_e4;
  undefined4 local_e0;
  undefined1 *local_dc;
  undefined4 local_d8;
  undefined1 *local_d4;
  float local_d0;
  int local_cc;
  int local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  int *local_bc;
  int local_b8;
  int *local_b4;
  int *local_b0;
  int *local_ac;
  int *local_a8;
  int *local_a4;
  float local_a0;
  float local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  float local_88;
  float local_84;
  undefined4 local_80;
  int local_7c;
  int local_78;
  uint local_74;
  undefined4 local_70;
  int local_6c;
  char local_65;
  char local_64;
  char local_63;
  byte local_62;
  char local_61;
  int *local_60;
  function<void___cdecl(void)> local_5c [24];
  function<void___cdecl(void)> local_44 [24];
  function<void___cdecl(void)> local_2c [24];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071af8b;
  local_10 = ExceptionList;
  uStack_160 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  in_ECX[0x84] = (int)((float)*(int *)(*param_1 + 0x878) * *(float *)(*param_1 + 0x87c));
  *(int *)(*param_1 + 0x210) = in_ECX[0x84];
  piStack_164 = param_1;
  piStack_168 = (int *)0x54f56e;
  local_60 = in_ECX;
  local_14 = uStack_160;
  (**(code **)(*in_ECX + 200))();
  if (1 < local_60[0x85]) {
    ExceptionList = local_10;
    return 0;
  }
  piStack_168 = param_1;
  pfStack_16c = (function<void___cdecl(void)> *)0x54f594;
  FUN_0044de80();
  piStack_168 = (int *)0x54f5a0;
  cVar1 = game_frame_should_continue();
  if ((cVar1 == '\0') || (*(char *)((int)local_60 + 0x2b) != '\0')) {
    ExceptionList = local_10;
    return 0;
  }
  piStack_168 = (int *)0x54f5c1;
  std::_Yarn<char>::_Yarn<char>((_Yarn<char> *)&local_78);
  if (*(char *)(*param_1 + 0x118) != '\0') {
    local_61 = '\0';
    iVar4 = *param_1;
    piStack_168 = (int *)0x54f5e4;
    iVar2 = game_get_player_or_session_blob();
    if (*(int *)(iVar4 + 0x1e8) == *(int *)(iVar2 + 0x1e8)) {
      local_61 = '\x01';
    }
    else if (*(int *)(*param_1 + 0x204) == 200) {
      iVar4 = *param_1;
      piStack_168 = (int *)0x54f613;
      iVar2 = game_get_player_or_session_blob();
      if (*(int *)(iVar4 + 0x95c) == *(int *)(iVar2 + 0x1e8)) {
        local_61 = '\x01';
      }
    }
    piStack_168 = (int *)(*param_1 + 0x778);
    pfStack_16c = (function<void___cdecl(void)> *)*param_1;
    piStack_170 = (int *)local_158;
    fStack_174 = 7.802539e-39;
    piVar3 = (int *)(**(code **)(*local_60 + 0xe8))();
    local_78 = *piVar3;
    local_74 = piVar3[1];
    if (0 < local_60[0x247]) {
      local_78 = ((100 - local_60[0x247]) * local_78) / 100;
    }
    piStack_168 = (int *)*param_1;
    pfStack_16c = (function<void___cdecl(void)> *)0x54f68f;
    iVar4 = FUN_004550d0();
    if (iVar4 != 0) {
      piStack_168 = (int *)*param_1;
      pfStack_16c = (function<void___cdecl(void)> *)0x54f6a1;
      iVar4 = FUN_004550d0();
      local_bc = (int *)(iVar4 + 0xddc);
      *local_bc = *local_bc + local_78;
    }
    if (local_61 != '\0') {
      piStack_168 = local_60;
      pfStack_16c = (function<void___cdecl(void)> *)0x54f6d3;
      FUN_0053c7e0();
      pfStack_16c = (function<void___cdecl(void)> *)0x54f6da;
      FUN_004a1430();
    }
    if (*(int *)(*param_1 + 0x204) == 0) {
      if (*(int *)(*param_1 + 0x1a4) == 0x140) {
        piStack_168 = (int *)*param_1;
        pfStack_16c = (function<void___cdecl(void)> *)0x54f709;
        cVar1 = FUN_004679f0();
        if (cVar1 == '\0') goto LAB_0054f713;
      }
      else {
LAB_0054f713:
        if ((*(int *)(*param_1 + 0x1a4) != 400) || (*(char *)(*param_1 + 0xa8c) == '\0'))
        goto LAB_0054fa21;
      }
      piStack_168 = (int *)0x54f741;
      iVar4 = FUN_00641430();
      local_8c = local_78 + -5 + iVar4 % 10;
      piStack_168 = (int *)0x54f75b;
      iVar4 = FUN_00641430();
      local_90 = local_78 + -5 + iVar4 % 10;
      piStack_168 = (int *)0x0;
      pfStack_16c = (function<void___cdecl(void)> *)0x1f4;
      piStack_170 = (int *)0x32;
      fStack_174 = 1.4013e-42;
      iStack_178 = 1;
      iStack_17c = 0x8f;
      local_114 = (undefined1 *)&uStack_194;
      local_144 = FUN_004054a0("sprite/common/etc/combo.img");
      local_8 = 0;
      iVar10 = local_8c;
      iVar4 = FUN_00641430(local_8c);
      iVar4 = iVar4 % 0x1e + -0xf + param_1[4];
      iVar6 = param_1[3];
      iVar2 = FUN_00641430(iVar6,iVar4);
      iVar2 = iVar2 % 0x1e + -0xf + param_1[2];
      game_get_state_ptr_d1520(iVar2);
      FUN_004d58e0();
      local_8 = 0xffffffff;
      FUN_0042e1d0(iVar2,iVar6,iVar4,iVar10);
      piStack_168 = (int *)0x0;
      pfStack_16c = (function<void___cdecl(void)> *)0x1f4;
      piStack_170 = (int *)0x32;
      fStack_174 = 1.4013e-42;
      iStack_178 = 1;
      iStack_17c = 0x8f;
      local_148 = (undefined1 *)&uStack_194;
      local_14c = FUN_004054a0("sprite/common/etc/combo.img");
      local_8 = 1;
      iVar10 = local_90;
      iVar4 = FUN_00641430(local_90);
      iVar4 = iVar4 % 0x1e + -0xf + param_1[4];
      iVar6 = param_1[3];
      iVar2 = FUN_00641430(iVar6,iVar4);
      iVar2 = iVar2 % 0x1e + -0xf + param_1[2];
      game_get_state_ptr_d1520(iVar2);
      FUN_004d58e0();
      local_8 = 0xffffffff;
      FUN_0042e1d0(iVar2,iVar6,iVar4,iVar10);
      if (local_60[0x89] < *(int *)(*param_1 + 0x224)) {
        local_c0 = 0xffffffff;
      }
      else {
        local_c0 = 1;
      }
      piStack_168 = (int *)(local_74 & 0xff);
      pfStack_16c = (function<void___cdecl(void)> *)local_c0;
      piStack_170 = param_1;
      fStack_174 = 7.80344e-39;
      iVar4 = FUN_00641430();
      fStack_174 = (float)(iVar4 % 0x1e + -0xf + param_1[4]);
      iStack_178 = param_1[3];
      iStack_17c = 0x54f8f0;
      iVar4 = FUN_00641430();
      iStack_17c = iVar4 % 0x1e + -0xf + param_1[2];
      piStack_180 = (int *)0x54f908;
      game_get_state_ptr_d1520();
      piStack_180 = (int *)0x54f90f;
      FUN_004d58e0();
      piStack_180 = (int *)0x54f916;
      FUN_0042eed0();
      if (local_60[0x89] < *(int *)(*param_1 + 0x224)) {
        local_9c = -NAN;
      }
      else {
        local_9c = 1.4013e-45;
      }
      piStack_168 = (int *)(local_74 & 0xff);
      pfStack_16c = (function<void___cdecl(void)> *)local_9c;
      piStack_170 = param_1;
      fStack_174 = 7.803628e-39;
      iVar4 = FUN_00641430();
      fStack_174 = (float)(iVar4 % 0x1e + -0xf + param_1[4]);
      iStack_178 = param_1[3];
      iStack_17c = 0x54f976;
      iVar4 = FUN_00641430();
      iStack_17c = iVar4 % 0x1e + -0xf + param_1[2];
      piStack_180 = (int *)0x54f98e;
      game_get_state_ptr_d1520();
      piStack_180 = (int *)0x54f995;
      FUN_004d58e0();
      piStack_180 = (int *)0x54f99c;
      FUN_0042eed0();
      if ((char)param_1[7] == '\0') {
        local_60[0x1ba] = local_60[0x1ba] - (local_8c + local_90);
        if (local_60[0x1ba] < 1) {
          local_60[0x1ba] = 0;
        }
      }
      else {
        local_60[0x1bb] = local_60[0x1bb] - (local_8c + local_90);
        if (local_60[0x1bb] < 1) {
          local_60[0x1bb] = 0;
        }
      }
    }
    else {
LAB_0054fa21:
      piStack_168 = (int *)0x0;
      pfStack_16c = (function<void___cdecl(void)> *)0x1f4;
      piStack_170 = (int *)0x32;
      fStack_174 = 1.4013e-42;
      iStack_178 = 1;
      iStack_17c = 0x8f;
      local_d4 = (undefined1 *)&uStack_194;
      local_d8 = FUN_004054a0("sprite/common/etc/combo.img");
      local_8 = 2;
      iVar4 = param_1[4];
      iVar2 = param_1[3];
      iVar6 = param_1[2];
      iVar10 = local_78;
      game_get_state_ptr_d1520(iVar6,iVar2,iVar4,local_78);
      FUN_004d58e0();
      local_8 = 0xffffffff;
      FUN_0042e1d0(iVar6,iVar2,iVar4,iVar10);
      if (local_60[0x89] < *(int *)(*param_1 + 0x224)) {
        local_a0 = -NAN;
      }
      else {
        local_a0 = 1.4013e-45;
      }
      piStack_168 = (int *)(local_74 & 0xff);
      pfStack_16c = (function<void___cdecl(void)> *)local_a0;
      piStack_170 = param_1;
      fStack_174 = (float)param_1[4];
      iStack_178 = param_1[3];
      iStack_17c = param_1[2];
      piStack_180 = (int *)0x54fae2;
      game_get_state_ptr_d1520();
      piStack_180 = (int *)0x54fae9;
      FUN_004d58e0();
      piStack_180 = (int *)0x54faf0;
      FUN_0042eed0();
      if ((char)param_1[7] == '\0') {
        local_60[0x1ba] = local_60[0x1ba] - local_78;
        if (local_60[0x1ba] < 1) {
          local_60[0x1ba] = 0;
        }
      }
      else {
        local_60[0x1bb] = local_60[0x1bb] - local_78;
        if (local_60[0x1bb] < 1) {
          local_60[0x1bb] = 0;
        }
      }
    }
    if (local_61 != '\0') {
      piStack_168 = local_60;
      pfStack_16c = (function<void___cdecl(void)> *)0x54fb6b;
      FUN_0053c7e0();
      pfStack_16c = (function<void___cdecl(void)> *)0x54fb72;
      FUN_004a1430();
    }
  }
  piStack_168 = (int *)0x54fb78;
  iVar4 = game_get_player_or_session_blob();
  if (iVar4 == 0) goto LAB_00550249;
  piStack_168 = (int *)*param_1;
  pfStack_16c = (function<void___cdecl(void)> *)0x54fb8b;
  local_7c = FUN_004550d0();
  piStack_168 = (int *)0x54fb96;
  iVar4 = game_get_player_or_session_blob();
  if (local_7c != iVar4) goto LAB_00550249;
  local_62 = 0;
  local_94 = 0;
  local_63 = '\0';
  local_64 = '\0';
  local_65 = '\0';
  if (local_60[0x69] == 5) {
    local_62 = 1;
    piStack_168 = (int *)0x54fbce;
    piVar3 = (int *)game_get_state_ptr_d1520();
    local_a4 = (int *)(*piVar3 + 0xd8);
    *local_a4 = *local_a4 + 1;
    piStack_168 = (int *)0x54fbf3;
    piVar3 = (int *)game_get_state_ptr_d1520();
    if (0x13 < *(int *)(*piVar3 + 0xd8)) {
      piStack_168 = (int *)0x54fc03;
      piVar3 = (int *)game_get_state_ptr_d1520();
      *(undefined4 *)(*piVar3 + 0xd8) = 0x14;
    }
  }
  piStack_168 = (int *)0x54fc1d;
  iVar4 = FUN_00401c40();
  if (iVar4 == 2) {
LAB_0054fc48:
    piStack_168 = (int *)0x54fc56;
    local_94 = FUN_00401c40();
    piStack_168 = (int *)0x54fc61;
    piVar3 = (int *)game_get_state_ptr_d1520();
    local_a8 = (int *)(*piVar3 + 0xdc);
    *local_a8 = *local_a8 + 1;
    piStack_168 = (int *)0x54fc86;
    piVar3 = (int *)game_get_state_ptr_d1520();
    if (0x13 < *(int *)(*piVar3 + 0xdc)) {
      piStack_168 = (int *)0x54fc96;
      piVar3 = (int *)game_get_state_ptr_d1520();
      *(undefined4 *)(*piVar3 + 0xdc) = 0x14;
    }
  }
  else {
    piStack_168 = (int *)0x54fc30;
    iVar4 = FUN_00401c40();
    if (iVar4 == 3) goto LAB_0054fc48;
    piStack_168 = (int *)0x54fc43;
    iVar4 = FUN_00401c40();
    if (iVar4 == 4) goto LAB_0054fc48;
  }
  if (local_60[0x69] == 10) {
    piStack_168 = (int *)0x54fcb9;
    cVar1 = game_frame_should_continue();
    if ((cVar1 != '\0') && ((char)local_60[0xb] == '\0')) {
      local_63 = '\x01';
      piStack_168 = (int *)0x54fcd4;
      piVar3 = (int *)game_get_state_ptr_d1520();
      local_ac = (int *)(*piVar3 + 0xe8);
      *local_ac = *local_ac + 1;
      piStack_168 = (int *)0x54fcfa;
      piVar3 = (int *)game_get_state_ptr_d1520();
      if (0x13 < *(int *)(*piVar3 + 0xe8)) {
        piStack_168 = (int *)0x54fd0a;
        piVar3 = (int *)game_get_state_ptr_d1520();
        *(undefined4 *)(*piVar3 + 0xe8) = 0x14;
      }
    }
  }
  if (((local_60[0x7d] == 1) && (*(int *)(*param_1 + 0x224) < local_60[0x89])) ||
     ((local_60[0x7d] == -1 && (local_60[0x89] < *(int *)(*param_1 + 0x224))))) {
    local_64 = '\x01';
    piStack_168 = (int *)0x54fd63;
    piVar3 = (int *)game_get_state_ptr_d1520();
    local_b0 = (int *)(*piVar3 + 0xec);
    *local_b0 = *local_b0 + 1;
    piStack_168 = (int *)0x54fd89;
    piVar3 = (int *)game_get_state_ptr_d1520();
    if (0x13 < *(int *)(*piVar3 + 0xec)) {
      piStack_168 = (int *)0x54fd99;
      piVar3 = (int *)game_get_state_ptr_d1520();
      *(undefined4 *)(*piVar3 + 0xec) = 0x14;
    }
  }
  if ((local_60[0x261] == 0) && (local_60[0x1b8] / 3 <= local_78)) {
    piStack_168 = (int *)0x54fdcc;
    piVar3 = (int *)game_get_state_ptr_d1520();
    local_b4 = (int *)(*piVar3 + 0xf0);
    *local_b4 = *local_b4 + 1;
    piStack_168 = (int *)0x54fdf2;
    piVar3 = (int *)game_get_state_ptr_d1520();
    if (0x1d < *(int *)(*piVar3 + 0xf0)) {
      piStack_168 = (int *)0x54fe02;
      piVar3 = (int *)game_get_state_ptr_d1520();
      *(undefined4 *)(*piVar3 + 0xf0) = 0x1e;
    }
    local_65 = '\x01';
  }
  if ((local_62 != 0) || (local_94 != 0)) {
    piStack_168 = (int *)0x0;
    pfStack_16c = (function<void___cdecl(void)> *)0xfa;
    piStack_170 = (int *)0x2d;
    fStack_174 = 2.10195e-42;
    iStack_178 = 6;
    iStack_17c = 0x21;
    local_dc = (undefined1 *)&uStack_194;
    local_e0 = FUN_004054a0("sprite/common/etc/combo.img");
    local_8 = 3;
    uVar11 = 0x30;
    uVar9 = 0;
    uVar8 = 0x11b;
    uVar7 = 0x280;
    game_get_state_ptr_d1520(0x280,0x11b,0,0x30);
    FUN_004d58e0();
    local_8 = 0xffffffff;
    FUN_0042e1d0(uVar7,uVar8,uVar9,uVar11);
    piStack_168 = (int *)local_94;
    pfStack_16c = (function<void___cdecl(void)> *)(uint)local_62;
    piStack_170 = (int *)0x54fe9e;
    game_get_state_ptr_d1520();
    piStack_170 = (int *)0x54fea5;
    FUN_004d58e0();
    piStack_170 = (int *)0x54feac;
    img_path_loader_11();
  }
  if (((local_63 != '\0') || (local_64 != '\0')) || (local_65 != '\0')) {
    piStack_168 = (int *)0x0;
    pfStack_16c = (function<void___cdecl(void)> *)0xfa;
    piStack_170 = (int *)0x2d;
    fStack_174 = 2.10195e-42;
    iStack_178 = 5;
    iStack_17c = 0x21;
    local_e4 = (undefined1 *)&uStack_194;
    local_e8 = FUN_004054a0("sprite/common/etc/combo.img");
    local_8 = 4;
    uVar11 = 0x30;
    uVar9 = 0;
    uVar8 = 0x104;
    uVar7 = 0x280;
    game_get_state_ptr_d1520(0x280,0x104,0,0x30);
    FUN_004d58e0();
    local_8 = 0xffffffff;
    FUN_0042e1d0(uVar7,uVar8,uVar9,uVar11);
    piStack_168 = &local_70;
    pfStack_16c = (function<void___cdecl(void)> *)0x54ff38;
    FUN_0044e0f0();
    while( true ) {
      piStack_168 = (int *)local_ec;
      pfStack_16c = (function<void___cdecl(void)> *)0x54ff4e;
      piStack_168 = (int *)FUN_0040d9a0();
      pfStack_16c = (function<void___cdecl(void)> *)0x54ff57;
      cVar1 = FUN_0040d2d0();
      if (cVar1 == '\0') break;
      piStack_168 = (int *)&DAT_0075a158;
      pfStack_16c = (function<void___cdecl(void)> *)0x54ff6f;
      piVar3 = (int *)FUN_0042a580();
      pfStack_16c = (function<void___cdecl(void)> *)(*piVar3 + 0xa4);
      piStack_170 = (int *)0x54ff7c;
      cVar1 = FUN_00427c60();
      if (cVar1 == '\0') {
        piStack_168 = (int *)&DAT_0075a124;
        pfStack_16c = (function<void___cdecl(void)> *)0x54ff93;
        piVar3 = (int *)FUN_0042a580();
        pfStack_16c = (function<void___cdecl(void)> *)(*piVar3 + 0xa4);
        piStack_170 = (int *)0x54ffa1;
        cVar1 = FUN_00427c60();
        if (cVar1 != '\0') goto LAB_0054ffd0;
        piStack_168 = (int *)&DAT_0075a130;
        pfStack_16c = (function<void___cdecl(void)> *)0x54ffb8;
        piVar3 = (int *)FUN_0042a580();
        pfStack_16c = (function<void___cdecl(void)> *)(*piVar3 + 0xa4);
        piStack_170 = (int *)0x54ffc6;
        cVar1 = FUN_00427c60();
        if (cVar1 != '\0') goto LAB_0054ffd0;
        piStack_168 = (int *)0x55001a;
        FUN_0042a560();
      }
      else {
LAB_0054ffd0:
        piStack_168 = (int *)0x54ffd8;
        piStack_168 = (int *)FUN_0042a580();
        pfStack_16c = (function<void___cdecl(void)> *)0x54ffde;
        FUN_004d1b30();
        pfStack_16c = (function<void___cdecl(void)> *)0x54ffe5;
        FUN_00517ee0();
        local_c4 = local_70;
        piStack_168 = (int *)local_70;
        pfStack_16c = (function<void___cdecl(void)> *)local_f0;
        piStack_170 = (int *)0x55000b;
        puVar5 = (undefined4 *)FUN_0044e0a0();
        local_70 = *puVar5;
      }
    }
    local_6c = 0;
    local_80 = 0xffffffff;
    if (local_63 == '\0') {
      if (local_64 == '\0') {
        if (local_65 != '\0') {
          local_80 = 0x57;
          piStack_168 = (int *)0x75a1e4;
          pfStack_16c = (function<void___cdecl(void)> *)0x550109;
          FUN_004054a0();
          local_8 = 7;
          piStack_168 = (int *)0x57;
          pfStack_16c = local_5c;
          piStack_170 = (int *)0x55011b;
          game_loop_helper_e9240();
          piStack_170 = (int *)0x550122;
          local_6c = FUN_005b6ee0();
          local_8 = 0xffffffff;
          piStack_168 = (int *)0x550134;
          std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_5c);
          piStack_168 = (int *)&DAT_0075a200;
          pfStack_16c = (function<void___cdecl(void)> *)0x550148;
          FUN_004053a0();
        }
      }
      else {
        local_80 = 0x56;
        piStack_168 = (int *)0x75a160;
        pfStack_16c = (function<void___cdecl(void)> *)0x5500ab;
        FUN_004054a0();
        local_8 = 6;
        piStack_168 = (int *)0x56;
        pfStack_16c = local_2c;
        piStack_170 = (int *)0x5500bd;
        game_loop_helper_e9240();
        piStack_170 = (int *)0x5500c4;
        local_6c = FUN_005b6ee0();
        local_8 = 0xffffffff;
        piStack_168 = (int *)0x5500d6;
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_2c);
        piStack_168 = (int *)&DAT_0075a17c;
        pfStack_16c = (function<void___cdecl(void)> *)0x5500ea;
        FUN_004053a0();
      }
    }
    else {
      local_80 = 0x55;
      piStack_168 = (int *)0x75a188;
      pfStack_16c = (function<void___cdecl(void)> *)0x55004a;
      FUN_004054a0();
      local_8 = 5;
      piStack_168 = (int *)0x55;
      pfStack_16c = local_44;
      piStack_170 = (int *)0x55005c;
      game_loop_helper_e9240();
      piStack_170 = (int *)0x550063;
      local_6c = FUN_005b6ee0();
      local_8 = 0xffffffff;
      piStack_168 = (int *)0x550075;
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_44);
      piStack_168 = (int *)&DAT_0075a1a4;
      pfStack_16c = (function<void___cdecl(void)> *)0x550089;
      FUN_004053a0();
    }
    *(undefined4 *)(local_6c + 0x84) = 0;
    *(undefined4 *)(local_6c + 0x98) = 1000;
    piStack_168 = (int *)local_80;
    local_f4 = (undefined1 *)&piStack_180;
    pcStack_184 = "sprite/common/etc/combo.img";
    iStack_188 = 0x55017c;
    local_f8 = FUN_004054a0();
    local_8 = 8;
    pcStack_184 = (char *)0x55018e;
    FUN_004bcf00();
    local_8 = 0xffffffff;
    pcStack_184 = (char *)0x55019c;
    local_c8 = FUN_004b8ca0();
    *(int *)(local_6c + 0x40) = -*(int *)(local_c8 + 0xc) / 2;
    piStack_168 = (int *)local_80;
    pcStack_184 = "sprite/common/etc/combo.img";
    iStack_188 = 0x5501d1;
    local_fc = (undefined1 *)&piStack_180;
    local_100 = FUN_004054a0();
    local_8 = 9;
    pcStack_184 = (char *)0x5501e3;
    FUN_004bcf00();
    local_8 = 0xffffffff;
    pcStack_184 = (char *)0x5501f1;
    local_cc = FUN_004b8ca0();
    *(int *)(local_6c + 0x48) = (10 - *(int *)(local_7c + 0xc8c)) + *(int *)(local_cc + 0x10);
    *(undefined4 *)(local_6c + 0x110) = 3;
    *(undefined1 *)(local_6c + 0xe9) = 1;
    *(undefined1 *)(local_6c + 0xe8) = 0;
    piStack_168 = &local_6c;
    pfStack_16c = (function<void___cdecl(void)> *)0x550248;
    FUN_0044de80();
  }
LAB_00550249:
  local_b8 = *param_1 + 0xb4;
  piStack_168 = (int *)0x550264;
  local_84 = (float)game_loop_helper_018d0();
  piStack_168 = (int *)0x550272;
  local_d0 = (float)game_loop_helper_018b0();
  for (; local_84 != local_d0; local_84 = (float)((int)local_84 + 0x1c)) {
    local_88 = local_84;
    piStack_168 = (int *)0x75a24c;
    pfStack_16c = (function<void___cdecl(void)> *)local_84;
    piStack_170 = (int *)0x5502ac;
    cVar1 = FUN_00427c60();
    if (cVar1 != '\0') {
      local_104 = (undefined1 *)&iStack_17c;
      piStack_180 = (int *)0x75a25c;
      pcStack_184 = (char *)0x5502cb;
      FUN_004054a0();
      piStack_180 = (int *)0x5502d0;
      FUN_004c3500();
      local_108 = (undefined1 *)&iStack_17c;
      piStack_180 = (int *)0x75a20c;
      pcStack_184 = (char *)0x5502e8;
      FUN_004054a0();
      piStack_180 = (int *)param_1[4];
      pcStack_184 = (char *)param_1[3];
      iStack_188 = param_1[2];
      uStack_18c = 0;
      pcStack_190 = (char *)0x550304;
      FUN_004aa990();
    }
    piStack_168 = (int *)0x75a23c;
    pfStack_16c = (function<void___cdecl(void)> *)local_88;
    piStack_170 = (int *)0x550318;
    cVar1 = FUN_00427c60();
    if (cVar1 != '\0') {
      local_10c = (undefined1 *)&iStack_17c;
      piStack_180 = (int *)0x75a2bc;
      pcStack_184 = (char *)0x55033b;
      FUN_004054a0();
      piStack_180 = (int *)0x550340;
      FUN_004c3500();
      local_110 = (undefined1 *)&iStack_17c;
      piStack_180 = (int *)0x75a2d8;
      pcStack_184 = (char *)0x550358;
      FUN_004054a0();
      piStack_180 = (int *)param_1[4];
      pcStack_184 = (char *)param_1[3];
      iStack_188 = param_1[2];
      uStack_18c = 0;
      pcStack_190 = (char *)0x550374;
      FUN_004aa990();
      local_134 = (undefined1 *)&iStack_17c;
      piStack_180 = (int *)0x75a278;
      pcStack_184 = (char *)0x55038c;
      FUN_004054a0();
      piStack_180 = (int *)param_1[4];
      pcStack_184 = (char *)param_1[3];
      iStack_188 = param_1[2];
      uStack_18c = 0;
      pcStack_190 = (char *)0x5503a8;
      FUN_004aa990();
    }
    piStack_168 = (int *)0x75a2ac;
    pfStack_16c = (function<void___cdecl(void)> *)local_88;
    piStack_170 = (int *)0x5503bc;
    cVar1 = FUN_00427c60();
    if (cVar1 != '\0') {
      local_118 = (undefined1 *)&iStack_17c;
      piStack_180 = (int *)0x75a33c;
      pcStack_184 = (char *)0x5503df;
      FUN_004054a0();
      piStack_180 = (int *)0x5503e4;
      FUN_004c3500();
      piStack_168 = (int *)0x3;
      pfStack_16c = (function<void___cdecl(void)> *)(float)param_1[4];
      piStack_170 = (int *)(float)param_1[3];
      fStack_174 = (float)param_1[2];
      local_11c = (undefined1 *)&uStack_18c;
      pcStack_190 = "common/hiteffect/animation/lighthit.ani";
      uStack_194 = 0x550428;
      local_120 = FUN_004054a0();
      local_8 = 10;
      pcStack_190 = (char *)0x55043a;
      pcStack_190 = (char *)FUN_00516d20();
      local_8 = 0xffffffff;
      uStack_194 = 0x550447;
      FUN_00516a90();
    }
    piStack_168 = (int *)0x75a308;
    pfStack_16c = (function<void___cdecl(void)> *)local_88;
    piStack_170 = (int *)0x55045b;
    cVar1 = FUN_00427c60();
    if (cVar1 != '\0') {
      local_124 = (undefined1 *)&iStack_17c;
      piStack_180 = (int *)0x75a318;
      pcStack_184 = (char *)0x55047e;
      FUN_004054a0();
      piStack_180 = (int *)0x550483;
      FUN_004c3500();
      piStack_168 = (int *)0x3;
      pfStack_16c = (function<void___cdecl(void)> *)(float)param_1[4];
      piStack_170 = (int *)(float)param_1[3];
      fStack_174 = (float)param_1[2];
      local_128 = (undefined1 *)&uStack_18c;
      pcStack_190 = "common/hiteffect/animation/darkhit1.ani";
      uStack_194 = 0x5504c7;
      local_12c = FUN_004054a0();
      local_8 = 0xb;
      pcStack_190 = (char *)0x5504d9;
      pcStack_190 = (char *)FUN_00516d20();
      local_8 = 0xffffffff;
      uStack_194 = 0x5504e6;
      FUN_00516a90();
      piStack_168 = (int *)0x3;
      pfStack_16c = (function<void___cdecl(void)> *)(float)param_1[4];
      piStack_170 = (int *)(float)param_1[3];
      fStack_174 = (float)param_1[2];
      pcStack_190 = "common/hiteffect/animation/darkhit2.ani";
      uStack_194 = 0x55052a;
      local_130 = (undefined1 *)&uStack_18c;
      local_150 = FUN_004054a0();
      local_8 = 0xc;
      pcStack_190 = (char *)0x55053c;
      pcStack_190 = (char *)FUN_00516d20();
      local_8 = 0xffffffff;
      uStack_194 = 0x550549;
      FUN_00516a90();
    }
  }
  local_138 = (undefined1 *)&iStack_17c;
  piStack_180 = (int *)(*param_1 + 0x818);
  pcStack_184 = (char *)0x55056d;
  FUN_00405520();
  piStack_180 = (int *)0x550572;
  FUN_004c3570();
  piStack_168 = (int *)0x55057d;
  cVar1 = FUN_006357d0();
  if (cVar1 != '\0') {
    piStack_168 = (int *)0x550594;
    (**(code **)(*local_60 + 0x114))();
  }
  if (local_60[0x1ba] < 1) {
    local_60[0x1ba] = 0;
    piStack_168 = (int *)0x5505c2;
    (**(code **)(*local_60 + 0xb0))();
    if (local_60[0x1ba] == 0) {
      if (local_60[0x261] == 0) {
        piStack_168 = (int *)0x5505e9;
        iVar4 = FUN_0063cf70();
        local_60[0x261] = iVar4;
      }
      if ((local_60[0x8b] < 1) || (*(int *)(local_60[0x288] + 0x278) != 0)) {
        local_60[599] = *(int *)(*param_1 + 0x7e4);
        piStack_168 = (int *)(*param_1 + 0x7c4);
        pfStack_16c = (function<void___cdecl(void)> *)0x5507be;
        FUN_0040d840();
        local_60[0x25e] = param_1[6];
        if (local_60[0x85] == 1) {
          piStack_168 = (int *)0x2;
          pfStack_16c = (function<void___cdecl(void)> *)0x5507eb;
          (**(code **)(*local_60 + 0x84))();
        }
        local_140 = (undefined1 *)&iStack_17c;
        piStack_180 = local_60 + 0x53;
        pcStack_184 = (char *)0x550805;
        FUN_00405520();
        piStack_180 = (int *)0x55080a;
        FUN_004c3570();
      }
      else {
        piStack_168 = (int *)0x75a384;
        pfStack_16c = (function<void___cdecl(void)> *)(*param_1 + 0x7c4);
        piStack_170 = (int *)0x55062d;
        cVar1 = FUN_00427c60();
        if (cVar1 == '\0') {
          piStack_168 = (int *)0x75a38c;
          pfStack_16c = (function<void___cdecl(void)> *)(*param_1 + 0x7c4);
          piStack_170 = (int *)0x550690;
          cVar1 = FUN_00427c60();
          if (cVar1 == '\0') {
            if ((char)local_60[0x248] == '\0') {
              piStack_168 = param_1;
              pfStack_16c = (function<void___cdecl(void)> *)0x55078e;
              (**(code **)(*local_60 + 0x124))();
            }
          }
          else {
            local_60[599] = *(int *)(*param_1 + 0x7e4);
            piStack_168 = (int *)(*param_1 + 0x7c4);
            pfStack_16c = (function<void___cdecl(void)> *)0x5506cb;
            FUN_0040d840();
            local_60[0x25e] = param_1[6];
            if (*(int *)(*param_1 + 0x204) == 200) {
              piStack_168 = (int *)*param_1;
              pfStack_16c = (function<void___cdecl(void)> *)0x5506f6;
              local_98 = FUN_004550d0();
              if ((local_98 != 0) && (*(int *)(local_98 + 0x1a4) == 0xa0)) {
                *(undefined4 *)(local_98 + 0x18c) = 0;
              }
            }
            if (local_60[0x85] == 1) {
              piStack_168 = (int *)0x2;
              pfStack_16c = (function<void___cdecl(void)> *)0x550748;
              (**(code **)(*local_60 + 0x84))();
            }
            local_13c = (undefined1 *)&iStack_17c;
            piStack_180 = local_60 + 0x53;
            pcStack_184 = (char *)0x550762;
            FUN_00405520();
            piStack_180 = (int *)0x550767;
            FUN_004c3570();
          }
        }
        else if (local_60[0x69] != 100) {
          piStack_168 = (int *)0x55064b;
          cVar1 = FUN_006357d0();
          if ((cVar1 != '\0') && ((char)local_60[0x248] == '\0')) {
            piStack_168 = param_1;
            pfStack_16c = (function<void___cdecl(void)> *)0x550674;
            (**(code **)(*local_60 + 0x11c))();
          }
        }
      }
    }
  }
  else {
    piStack_168 = (int *)0x75a420;
    pfStack_16c = (function<void___cdecl(void)> *)(*param_1 + 0x7c4);
    piStack_170 = (int *)0x550828;
    cVar1 = FUN_00427c60();
    if (cVar1 == '\0') {
      piStack_168 = (int *)0x75a428;
      pfStack_16c = (function<void___cdecl(void)> *)(*param_1 + 0x7c4);
      piStack_170 = (int *)0x55088b;
      cVar1 = FUN_00427c60();
      if (cVar1 == '\0') {
        if ((char)local_60[0x248] == '\0') {
          piStack_168 = param_1;
          pfStack_16c = (function<void___cdecl(void)> *)0x550954;
          (**(code **)(*local_60 + 0x124))();
        }
      }
      else if (local_60[0x69] != 100) {
        piStack_168 = (int *)0x5508b1;
        cVar1 = FUN_006357d0();
        if (cVar1 != '\0') {
          if (local_60[0x8b] < 1) {
            if ((char)local_60[0x248] == '\0') {
              piStack_168 = param_1;
              pfStack_16c = (function<void___cdecl(void)> *)0x55092f;
              (**(code **)(*local_60 + 0x120))();
            }
          }
          else if ((((local_60[0x69] == 3) || (9 < local_60[0x69])) || (local_60[0x69] == -1)) &&
                  ((char)local_60[0x248] == '\0')) {
            piStack_168 = param_1;
            pfStack_16c = (function<void___cdecl(void)> *)0x55090a;
            (**(code **)(*local_60 + 0x11c))();
          }
        }
      }
    }
    else if (local_60[0x69] != 100) {
      piStack_168 = (int *)0x550846;
      cVar1 = FUN_006357d0();
      if ((cVar1 != '\0') && ((char)local_60[0x248] == '\0')) {
        piStack_168 = param_1;
        pfStack_16c = (function<void___cdecl(void)> *)0x55086f;
        (**(code **)(*local_60 + 0x11c))();
      }
    }
  }
  piStack_168 = param_1;
  pfStack_16c = (function<void___cdecl(void)> *)0x550969;
  (**(code **)(*local_60 + 0xd0))();
  ExceptionList = local_10;
  return local_78;
}


/* ==== 005517e0  FUN_005517e0  size=2497 ==== */

void FUN_005517e0(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  int *in_ECX;
  undefined1 auStack_6c [8];
  undefined4 uStack_64;
  undefined1 *puStack_60;
  undefined1 *puStack_5c;
  int iStack_58;
  undefined1 *puStack_54;
  int iStack_50;
  int iStack_4c;
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  undefined1 *local_40;
  undefined1 *local_3c;
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  undefined1 local_30 [4];
  undefined4 local_2c;
  int local_28;
  int *local_24;
  int *local_20;
  undefined1 local_1c [4];
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  int local_10;
  int local_c;
  int *local_8;
  
  if (in_ECX[0x85] < 2) {
    iStack_4c = param_1;
    iStack_50 = 0x55181d;
    local_8 = in_ECX;
    (**(code **)(*in_ECX + 0x48))();
    iStack_50 = param_1;
    puStack_54 = (undefined1 *)0x551829;
    FUN_00630e20();
    iStack_50 = param_1;
    puStack_54 = (undefined1 *)0x551835;
    FUN_006310e0();
    iStack_50 = param_1;
    puStack_54 = (undefined1 *)0x551849;
    (**(code **)(*local_8 + 0xfc))();
    puStack_54 = (undefined1 *)param_1;
    iStack_58 = 0x551855;
    FUN_00637170();
    if (local_8[0x84] < 1) {
      *(undefined1 *)(local_8 + 0xb) = 0;
      *(undefined1 *)((int)local_8 + 0x2b) = 0;
      *(undefined1 *)((int)local_8 + 0x2d) = 0;
      local_10 = -1;
      puStack_54 = local_14;
      iStack_58 = 0x5518c3;
      FUN_004021b0();
      while( true ) {
        puStack_54 = local_34;
        iStack_58 = 0x5518e1;
        puStack_54 = (undefined1 *)FUN_00402170();
        iStack_58 = 0x5518ea;
        cVar1 = FUN_00426ed0();
        if (cVar1 == '\0') break;
        puStack_54 = (undefined1 *)local_8[0x245];
        iStack_58 = local_8[0x244];
        puStack_5c = (undefined1 *)0x551911;
        FUN_0044ddc0();
        puStack_5c = (undefined1 *)0x551918;
        local_c = FUN_005e9570();
        if (local_c != 0) {
          puStack_54 = local_38;
          iStack_58 = 0x551937;
          puStack_54 = (undefined1 *)FUN_004021b0();
          iStack_58 = 0x551940;
          cVar1 = FUN_00427830();
          if (cVar1 == '\0') {
            puStack_54 = (undefined1 *)local_8[0x245];
            iStack_58 = local_8[0x244];
            puStack_5c = (undefined1 *)0x0;
            puStack_60 = (undefined1 *)0x55197c;
            game_get_flag_object_01a70();
            puStack_5c = (undefined1 *)0x551983;
            iVar2 = FUN_005e9570();
            *(undefined4 *)(local_c + 0x90) = *(undefined4 *)(iVar2 + 0x90);
            puStack_54 = (undefined1 *)local_8[0x245];
            iStack_58 = local_8[0x244];
            puStack_5c = (undefined1 *)0x0;
            puStack_60 = (undefined1 *)0x5519b6;
            game_get_flag_object_01a70();
            puStack_5c = (undefined1 *)0x5519bd;
            iVar2 = FUN_005e9570();
            *(undefined4 *)(local_c + 0x98) = *(undefined4 *)(iVar2 + 0x98);
          }
          else {
            puStack_54 = (undefined1 *)param_1;
            iStack_58 = 0x551953;
            local_10 = FUN_0062fe30();
          }
          puStack_54 = (undefined1 *)0x5519d4;
          iVar2 = FUN_0062fc30();
          if (*(char *)(iVar2 + 0x42) == '\x01') {
            *(undefined1 *)(local_8 + 0xb) = 1;
          }
          else {
            puStack_54 = (undefined1 *)0x5519ee;
            iVar2 = FUN_0062fc30();
            if (*(char *)(iVar2 + 0x42) == '\x02') {
              *(undefined1 *)(local_8 + 0xb) = 1;
            }
            else {
              puStack_54 = (undefined1 *)0x551a08;
              iVar2 = FUN_0062fc30();
              if (*(char *)(iVar2 + 0x42) == '\x03') {
                *(undefined1 *)((int)local_8 + 0x2d) = 1;
              }
            }
          }
          *(int *)(local_c + 0x4c) = local_8[0x7d];
        }
        puStack_54 = (undefined1 *)0x5518ce;
        FUN_0044dda0();
      }
      if (local_10 == 0) {
        *(undefined1 *)(local_8 + 0x68) = 0;
      }
      else if ((local_10 == 1) || (local_10 == 2)) {
        *(undefined1 *)(local_8 + 0x68) = 1;
      }
      if (local_10 == 3) {
        local_20 = local_8 + 0x22e;
        puStack_54 = local_1c;
        iStack_58 = 0x551a72;
        FUN_0042a9e0();
        puStack_54 = local_30;
        iStack_58 = 0x551a7e;
        FUN_0042a9c0();
        while( true ) {
          puStack_54 = local_30;
          iStack_58 = 0x551a96;
          cVar1 = FUN_0040d2d0();
          if (cVar1 == '\0') break;
          puStack_54 = (undefined1 *)0x551aa5;
          local_24 = (int *)FUN_0042a580();
          if (*(char *)(*local_24 + 0x26) != '\0') {
            *(undefined1 *)(*local_24 + 0x9c) = 1;
          }
          puStack_54 = (undefined1 *)0x551a89;
          FUN_0042a560();
        }
        puStack_54 = (undefined1 *)0x551ad3;
        (**(code **)(*local_8 + 0xdc))();
      }
      puStack_54 = (undefined1 *)param_1;
      iStack_58 = 0x551ae8;
      (**(code **)(*local_8 + 0x184))();
      local_28 = local_8[0x69];
      switch(local_28) {
      case 0:
        iStack_58 = param_1;
        puStack_5c = (undefined1 *)0x551f41;
        (**(code **)(*local_8 + 0x194))();
        break;
      case 1:
        iStack_58 = param_1;
        puStack_5c = (undefined1 *)0x551f55;
        (**(code **)(*local_8 + 0x28))();
        break;
      case 3:
      case 0xc:
        iStack_58 = param_1;
        puStack_5c = (undefined1 *)0x551f9c;
        (**(code **)(*local_8 + 0x16c))();
        break;
      case 5:
        iStack_58 = param_1;
        puStack_5c = (undefined1 *)0x551f83;
        (**(code **)(*local_8 + 300))();
        break;
      case 7:
        iStack_58 = param_1;
        puStack_5c = (undefined1 *)0x551f6c;
        (**(code **)(*local_8 + 0x128))();
        break;
      case 100:
        if (local_8[0x67] == 1) {
          if (local_8[0x6a] < 3) {
            if ((0 < local_8[0x6e]) && (local_8[0x6e] = local_8[0x6e] - param_1, local_8[0x6e] < 1))
            {
              local_8[0x6a] = 3;
            }
            local_8[0x86] = local_8[0x8c] * param_1 + local_8[0x86];
            local_8[0x87] = local_8[0x8d] * param_1 + local_8[0x87];
            local_8[0x88] = local_8[0x8e] * param_1 + local_8[0x88];
            local_8[0x8e] = local_8[0x91] * param_1 + local_8[0x8e];
          }
          if (local_8[0x6a] == 3) {
            local_8[0x6a] = 4;
            local_8[0x8c] = 0;
            local_8[0x86] = 0;
            local_8[0x8d] = 0;
            local_8[0x87] = 0;
            local_8[0x8e] = 0;
            local_8[0x91] = 0;
            local_8[0x88] = 0;
            local_8[0x89] = local_8[0x6b];
            local_8[0x8a] = local_8[0x6c];
            local_8[0x8b] = local_8[0x6d];
            local_8[0x6b] = 0;
            local_8[0x6c] = 0;
            local_8[0x6d] = 0;
            local_8[0x6e] = 0;
          }
        }
        else if ((local_8[0x67] == 3) && (local_8[0x6a] == 0)) {
          local_8[0x62] = local_8[0x62] - param_1;
          if (local_8[0x62] < 1) {
            local_3c = auStack_6c;
            FUN_00405520(local_8 + 0x4d);
            FUN_004c3570();
            local_40 = auStack_6c;
            FUN_004054a0("character/swordman/effect/animation/bloodyrave/hit.ani");
            (**(code **)(*local_8 + 0x78))();
            iStack_58 = 5;
            puStack_5c = (undefined1 *)0x4f;
            puStack_60 = (undefined1 *)0x551d5f;
            iVar2 = FUN_0047bcc0();
            local_8[0x62] = iVar2;
          }
          if (local_8[0x89] != local_8[0x6b]) {
            local_8[0x86] = local_8[0x8c] * param_1 + local_8[0x86];
            if ((0 < local_8[0x86]) && (local_8[0x6b] < local_8[0x86] / 1000000 + local_8[0x89])) {
              local_8[0x86] = 0;
              local_8[0x89] = local_8[0x6b];
            }
            if ((local_8[0x86] < 0) && (local_8[0x86] / 1000000 + local_8[0x89] < local_8[0x6b])) {
              local_8[0x86] = 0;
              local_8[0x89] = local_8[0x6b];
            }
          }
          if (local_8[0x8a] != local_8[0x6c]) {
            local_8[0x87] = local_8[0x8d] * param_1 + local_8[0x87];
            if ((0 < local_8[0x87]) && (local_8[0x6c] < local_8[0x87] / 1000000 + local_8[0x8a])) {
              local_8[0x87] = 0;
              local_8[0x8a] = local_8[0x6c];
            }
            if ((local_8[0x87] < 0) && (local_8[0x87] / 1000000 + local_8[0x8a] < local_8[0x6c])) {
              local_8[0x87] = 0;
              local_8[0x8a] = local_8[0x6c];
            }
          }
        }
        iStack_58 = param_1;
        puStack_5c = (undefined1 *)0x551f2a;
        (**(code **)(*local_8 + 0x158))();
      }
      if ((local_8[0x69] == 10) && (*(int *)(local_8[0x288] + 0x3f8) != 0)) {
        *(undefined1 *)(local_8 + 0xb) = 1;
      }
      iStack_58 = param_1;
      puStack_5c = (undefined1 *)0x551fd6;
      (**(code **)(*local_8 + 0x188))();
      if ((char)local_8[0x68] != '\0') {
        puStack_5c = (undefined1 *)0x551ff5;
        puVar3 = (undefined4 *)(**(code **)(*local_8 + 0x9c))();
        puStack_5c = (undefined1 *)*puVar3;
        puStack_60 = (undefined1 *)0x552008;
        (**(code **)(*local_8 + 0xc0))();
      }
      if (local_8[0x69] == 10) {
        if ((local_8[0x255] != -1) &&
           (local_8[0x255] = local_8[0x255] - param_1, local_8[0x255] < 1)) {
          local_8[0x255] = -1;
          puStack_5c = (undefined1 *)local_8[0x79];
          puStack_60 = (undefined1 *)0x55206a;
          game_loop_helper_e9240();
          puStack_60 = (undefined1 *)0x552071;
          local_2c = FUN_005d1b00();
          puStack_5c = local_18;
          puStack_60 = (undefined1 *)0x552086;
          FUN_004021b0();
          while( true ) {
            puStack_5c = local_48;
            puStack_60 = (undefined1 *)0x5520aa;
            puStack_5c = (undefined1 *)FUN_00402170();
            puStack_60 = (undefined1 *)0x5520b3;
            cVar1 = FUN_00426ed0();
            if (cVar1 == '\0') break;
            puStack_5c = (undefined1 *)0x5520c2;
            iVar2 = FUN_00401b20();
            if (local_8[0x256] == *(int *)(iVar2 + 4)) {
              puStack_5c = (undefined1 *)0x5520d8;
              puStack_5c = (undefined1 *)FUN_0044ddc0();
              puStack_60 = (undefined1 *)0x5520e9;
              (**(code **)(*local_8 + 0x170))();
              break;
            }
            puStack_5c = (undefined1 *)0x0;
            puStack_60 = local_44;
            uStack_64 = 0x552097;
            FUN_00581570();
          }
        }
        if (local_8[0x254] != -1) {
          puStack_5c = (undefined1 *)param_1;
          puStack_60 = (undefined1 *)0x55210e;
          (**(code **)(*local_8 + 0x174))();
          if (local_8[0x254] < 1) {
            local_8[0x254] = -1;
            puStack_5c = (undefined1 *)0x552138;
            (**(code **)(*local_8 + 0x178))();
          }
        }
      }
      puStack_5c = (undefined1 *)0x552149;
      (**(code **)(*local_8 + 0xf0))();
      if ((((local_8[0x244] == 3) || (local_8[0x244] == 4)) || (local_8[0x244] == 6)) ||
         (local_8[0x244] == 5)) {
        *(undefined1 *)((int)local_8 + 0x2b) = 0;
        *(undefined1 *)(local_8 + 0xb) = 0;
      }
      puStack_5c = (undefined1 *)param_1;
      puStack_60 = (undefined1 *)0x55219c;
      (**(code **)(*local_8 + 0x10c))();
    }
    else {
      local_8[0x84] = local_8[0x84] - param_1;
      if (local_8[0x84] < 1) {
        local_8[0x84] = 0;
      }
    }
  }
  else {
    iStack_4c = param_1;
    iStack_50 = 0x551806;
    (**(code **)(*in_ECX + 4))();
  }
  return;
}


/* ==== 00553cb0  FUN_00553cb0  size=478 ==== */

undefined4 FUN_00553cb0(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_64 [8];
  undefined4 uStack_5c;
  char *pcStack_58;
  undefined1 auStack_54 [8];
  float local_4c;
  float local_48;
  float local_44;
  int *piStack_40;
  uint uStack_3c;
  undefined1 *local_38;
  undefined1 *local_34;
  undefined1 *local_30;
  undefined1 *local_2c;
  undefined4 local_28;
  undefined1 *local_24;
  int local_20;
  undefined4 local_1c;
  int local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071affd;
  local_10 = ExceptionList;
  uStack_3c = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  piStack_40 = (int *)0x553ce3;
  cVar1 = game_frame_should_continue();
  if (cVar1 == '\0') {
    local_14[0x84] = (int)((float)*(int *)(*param_1 + 0x878) * *(float *)(*param_1 + 0x87c));
    *(int *)(*param_1 + 0x210) = local_14[0x84];
    piStack_40 = (int *)0x3;
    local_44 = (float)param_1[4];
    local_48 = (float)local_14[0x8a];
    local_4c = (float)param_1[2];
    local_24 = auStack_64;
    local_28 = FUN_004054a0("character/swordman/effect/animation/guard/spark.ani");
    local_8 = 0;
    uVar2 = FUN_00516d20();
    local_8 = 0xffffffff;
    local_18 = FUN_00516a90(uVar2);
    *(int *)(local_18 + 0x4c) = param_1[5];
    local_2c = auStack_54;
    pcStack_58 = "SWD_GUARDED";
    uStack_5c = 0x553daa;
    FUN_004054a0();
    pcStack_58 = (char *)0x553daf;
    FUN_004c3570();
    uVar2 = 0;
  }
  else {
    if ((local_14[0x69] == 0) || (local_14[0x69] == 1)) {
      piStack_40 = (int *)0x553de0;
      cVar1 = game_frame_should_continue();
      if (cVar1 != '\0') {
        piStack_40 = (int *)0x553df0;
        iVar3 = FUN_00641430();
        if (iVar3 % 100 < 10) {
          local_30 = auStack_54;
          pcStack_58 = "SWD_GUARDED";
          uStack_5c = 0x553e0f;
          FUN_004054a0();
          pcStack_58 = (char *)0x553e14;
          FUN_004c3570();
          local_1c = 5000;
          piStack_40 = &local_1c;
          local_44 = 7.828322e-39;
          FUN_0040d490();
          local_34 = auStack_54;
          pcStack_58 = "common/commoneffect/animation/monsterguardeffect.ani";
          uStack_5c = 0x553e40;
          FUN_004054a0();
          pcStack_58 = (char *)0x553e48;
          local_20 = FUN_00630790();
          if (local_20 == 0) {
            local_38 = auStack_54;
            pcStack_58 = "common/commoneffect/animation/monsterguardeffect.ani";
            uStack_5c = 0x553e63;
            FUN_004054a0();
            pcStack_58 = (char *)0x553e70;
            (**(code **)(*local_14 + 0x78))();
          }
        }
      }
    }
    piStack_40 = param_1;
    local_44 = 7.828434e-39;
    uVar2 = FUN_0054f4f0();
  }
  ExceptionList = local_10;
  return uVar2;
}


/* ==== 00556cf0  FUN_00556cf0  size=352 ==== */

void FUN_00556cf0(void)

{
  int *piVar1;
  int *in_ECX;
  int *piStack_38;
  float fStack_34;
  float fStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  int iStack_20;
  undefined1 *local_1c;
  undefined1 *local_18;
  undefined1 *local_14;
  undefined1 *local_10;
  int local_c;
  int *local_8;
  
  if ((in_ECX[0x244] == 0x15) && (in_ECX[0x245] == 0)) {
    iStack_20 = 0x556d29;
    local_8 = in_ECX;
    piVar1 = (int *)(**(code **)(*in_ECX + 0x9c))();
    if (*piVar1 == 5) {
      local_10 = (undefined1 *)&fStack_34;
      piStack_38 = (int *)0x78402c;
      FUN_004054a0();
      piStack_38 = (int *)0x556d49;
      FUN_004c3570();
      iStack_20 = local_8[0x251];
      iStack_24 = 0x556d63;
      local_c = (**(code **)(*local_8 + 0x30))();
      if (local_c != 0) {
        iStack_24 = local_8[0x7d];
        uStack_28 = 0x7549;
        uStack_2c = 0;
        fStack_30 = (float)*(int *)(local_c + 0x228);
        fStack_34 = (float)*(int *)(local_c + 0x224);
        piStack_38 = local_8;
        FUN_0042f250();
        local_14 = (undefined1 *)&piStack_38;
        FUN_004054a0("passiveobject/character/swordman/particle/icewaveparticlesmoke.ptl");
        FUN_004aa990(0,*(undefined4 *)(local_c + 0x224),*(undefined4 *)(local_c + 0x228),0);
        local_18 = (undefined1 *)&piStack_38;
        FUN_004054a0("passiveobject/character/swordman/particle/icewaveparticle.ptl");
        FUN_004aa990(0,*(undefined4 *)(local_c + 0x224),*(undefined4 *)(local_c + 0x228),0);
        local_1c = (undefined1 *)&piStack_38;
        FUN_004054a0("passiveobject/character/swordman/particle/icewaveparticlestar.ptl");
        FUN_004aa990(0,*(undefined4 *)(local_c + 0x224),*(undefined4 *)(local_c + 0x228),0);
      }
    }
  }
  return;
}


/* ==== 005572f0  FUN_005572f0  size=194 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_005572f0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int in_ECX;
  char *pcVar3;
  function<void___cdecl(void)> local_20 [24];
  uint local_8;
  
  local_8 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  if (param_1 != 0) {
    uVar2 = FUN_00552fb0(local_20,4);
    cVar1 = destroy<>(param_1 + 100,uVar2);
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_20);
    if (cVar1 != '\0') {
      pcVar3 = "passiveobject/monster/flydragon/particle/bouncer.ptl";
      FUN_0042f340(in_ECX,0x41f00000,0,0x41f00000,0xc676,*(undefined4 *)(in_ECX + 500),
                   "passiveobject/monster/flydragon/particle/bouncer.ptl");
      FUN_004053a0(pcVar3);
    }
    FUN_0063c3f0(param_1);
  }
  return;
}


/* ==== 00557a00  FUN_00557a00  size=513 ==== */

undefined4 FUN_00557a00(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_70 [8];
  undefined4 uStack_68;
  char *pcStack_64;
  undefined4 uStack_60;
  char *pcStack_5c;
  undefined4 uStack_58;
  char *pcStack_54;
  undefined1 auStack_50 [8];
  float local_48;
  float local_44;
  float local_40;
  int *piStack_3c;
  uint uStack_38;
  undefined1 *local_34;
  undefined1 *local_30;
  undefined1 *local_2c;
  undefined1 *local_28;
  undefined4 local_24;
  undefined1 *local_20;
  undefined4 local_1c;
  int local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071b12d;
  local_10 = ExceptionList;
  uStack_38 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  piStack_3c = (int *)0x557a33;
  cVar1 = game_frame_should_continue();
  if (cVar1 == '\0') {
    local_14[0x84] = (int)((float)*(int *)(*param_1 + 0x878) * *(float *)(*param_1 + 0x87c));
    *(int *)(*param_1 + 0x210) = local_14[0x84];
    piStack_3c = (int *)0x3;
    local_40 = (float)param_1[4];
    local_44 = (float)local_14[0x8a];
    local_48 = (float)param_1[2];
    local_20 = (undefined1 *)&uStack_60;
    pcStack_64 = "character/swordman/effect/animation/guard/spark.ani";
    uStack_68 = 0x557aba;
    local_24 = FUN_004054a0();
    local_8 = 0;
    pcStack_64 = (char *)0x557ac9;
    pcStack_64 = (char *)FUN_00516d20();
    local_8 = 0xffffffff;
    uStack_68 = 0x557ad6;
    local_18 = FUN_00516a90();
    *(int *)(local_18 + 0x4c) = param_1[5];
    local_28 = auStack_50;
    pcStack_54 = "SWD_GUARDED";
    uStack_58 = 0x557afa;
    FUN_004054a0();
    pcStack_54 = (char *)0x557aff;
    FUN_004c3570();
    uVar2 = 0;
  }
  else {
    if ((local_14[0x69] == 0) || (local_14[0x69] == 1)) {
      piStack_3c = (int *)0x557b30;
      cVar1 = game_frame_should_continue();
      if (cVar1 != '\0') {
        piStack_3c = (int *)0x557b40;
        iVar3 = FUN_00641430();
        if (iVar3 % 100 < 10) {
          local_1c = 2000;
          piStack_3c = &local_1c;
          local_40 = 7.850286e-39;
          FUN_0040d490();
          local_14[0x69] = 10;
          piStack_3c = (int *)0x1;
          local_40 = 2.94273e-44;
          local_44 = 7.850333e-39;
          (**(code **)(*local_14 + 0x138))();
          local_2c = (undefined1 *)&uStack_58;
          pcStack_5c = "monster/draconian/passiveobject/guardeffect.ani";
          uStack_60 = 0x557b9c;
          FUN_004054a0();
          pcStack_5c = (char *)0x557ba9;
          (**(code **)(*local_14 + 0x78))();
          local_30 = auStack_70;
          FUN_004054a0("monster/draconian/passiveobject/shield.ani");
          (**(code **)(*local_14 + 0x78))();
          local_34 = auStack_50;
          pcStack_54 = "SWD_GUARDED";
          uStack_58 = 0x557bdc;
          FUN_004054a0();
          pcStack_54 = (char *)0x557be1;
          FUN_004c3570();
        }
      }
    }
    piStack_3c = param_1;
    local_40 = 7.850478e-39;
    uVar2 = FUN_0054f4f0();
  }
  ExceptionList = local_10;
  return uVar2;
}


/* ==== 00557c10  FUN_00557c10  size=90 ==== */

void FUN_00557c10(void)

{
  undefined1 auStack_2c [16];
  undefined4 uStack_1c;
  int *piStack_18;
  undefined1 *local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  local_14 = auStack_2c;
  FUN_004054a0("monster/draconian/passiveobject/shield.ani");
  local_10 = FUN_00630790();
  local_c = local_10;
  if (local_10 != 0) {
    piStack_18 = &local_c;
    uStack_1c = 0x557c54;
    FUN_0044de80();
  }
  piStack_18 = (int *)0x557c65;
  (**(code **)(*local_8 + 0x134))();
  return;
}


/* ==== 00557cb0  FUN_00557cb0  size=375 ==== */

void FUN_00557cb0(int param_1)

{
  int *in_ECX;
  undefined4 uStack_48;
  char *pcStack_44;
  undefined4 uStack_40;
  int *piStack_3c;
  float fStack_38;
  char *pcStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  undefined1 *local_18;
  undefined1 *local_14;
  undefined1 *local_10;
  int local_c;
  int *local_8;
  
  local_8 = in_ECX;
  if (param_1 == 1) {
    iStack_1c = param_1;
    uStack_20 = 0x557ccb;
    FUN_0054bdf0();
    local_10 = (undefined1 *)&uStack_30;
    pcStack_34 = "monster/draconian/dlani/ef_attackheart1.ani";
    fStack_38 = 7.850811e-39;
    FUN_004054a0();
    pcStack_34 = (char *)0x557ceb;
    (**(code **)(*local_8 + 0x78))();
    local_14 = (undefined1 *)&uStack_48;
    FUN_004054a0("monster/draconian/dlani/ef_attackheart2.ani");
    (**(code **)(*local_8 + 0x78))();
  }
  else if (param_1 == 3) {
    in_ECX[0x69] = 10;
    iStack_1c = 3;
    uStack_20 = 0x14;
    uStack_24 = 0x557d38;
    (**(code **)(*in_ECX + 0x138))();
    uStack_24 = 3;
    iStack_28 = 2;
    uStack_2c = 0x557d4c;
    (**(code **)(*local_8 + 0x13c))();
    local_18 = (undefined1 *)&uStack_40;
    pcStack_44 = "monster/draconian/passiveobject/spark.ani";
    uStack_48 = 0x557d5f;
    FUN_004054a0();
    pcStack_44 = (char *)0x557d6c;
    (**(code **)(*local_8 + 0x78))();
  }
  else if (param_1 == 4) {
    iStack_1c = in_ECX[0x3e];
    uStack_20 = 0x557d8b;
    game_get_state_ptr_d1520();
    uStack_20 = 0x557d92;
    FUN_004d58e0();
    uStack_20 = 0x557d99;
    local_c = FUN_0042e150();
    if ((local_c != 0) && (*(char *)(local_c + 0x170) != '\0')) {
      local_8[0x69] = 10;
      iStack_1c = 4;
      uStack_20 = 0x14;
      uStack_24 = 0x557dd1;
      (**(code **)(*local_8 + 0x138))();
      uStack_24 = 100;
      iStack_28 = local_8[0x7d];
      uStack_2c = 1;
      uStack_30 = 0x10b;
      pcStack_34 = (char *)(float)*(int *)(local_c + 0x228);
      fStack_38 = (float)*(int *)(local_c + 0x224);
      piStack_3c = local_8;
      uStack_40 = 0x557e0f;
      FUN_0042f450();
    }
  }
  else {
    iStack_1c = param_1;
    uStack_20 = 0x557e20;
    FUN_0054bdf0();
  }
  return;
}


/* ==== 0055a1e0  FUN_0055a1e0  size=243 ==== */

void FUN_0055a1e0(void)

{
  int *piVar1;
  int *in_ECX;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  char *pcStack_10;
  undefined1 *local_c;
  int *local_8;
  
  local_8 = in_ECX;
  if ((in_ECX[0x244] == 0x14) && (in_ECX[0x245] == 0)) {
    pcStack_10 = (char *)0x55a211;
    piVar1 = (int *)(**(code **)(*in_ECX + 0x9c))();
    if (*piVar1 == 2) {
      local_c = (undefined1 *)&uStack_24;
      FUN_004054a0("passiveobject/common/particle/poisongas.ptl");
      FUN_004aa990(0,local_8[0x89],local_8[0x8a],local_8[0x8b]);
    }
  }
  else if ((in_ECX[0x244] == 0x14) && (in_ECX[0x245] == 1)) {
    pcStack_10 = (char *)0x55a27a;
    piVar1 = (int *)(**(code **)(*in_ECX + 0x9c))();
    if (*piVar1 == 2) {
      pcStack_10 = "monster/spider/particle/poisonweb.ptl";
      iStack_14 = local_8[0x7d];
      uStack_18 = 0x7541;
      uStack_1c = 0x41500000;
      uStack_20 = 0;
      uStack_24 = 0x42700000;
      FUN_0042f340(local_8);
      iStack_14 = 0x55a2ce;
      FUN_004053a0();
    }
  }
  return;
}


/* ==== 0055a5b0  FUN_0055a5b0  size=230 ==== */

void FUN_0055a5b0(int param_1)

{
  char cVar1;
  int iVar2;
  int *in_ECX;
  
  if (param_1 != 0) {
    cVar1 = FUN_00427c60(param_1 + 100,
                         "passiveobject/common/animation/magictargetwarningterrible.ani");
    if (cVar1 == '\0') {
      cVar1 = FUN_00427c60(param_1 + 100,"passiveobject/common/animation/magictargetwarning.ani");
      if (cVar1 != '\0') {
        game_loop_helper_e9240(0x1a4,*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44),500,100,0
                     ,*(undefined4 *)(param_1 + 0x4c));
        iVar2 = FUN_005d1b00();
        iVar2 = FUN_0053c660(0x1a4,*(undefined4 *)(iVar2 + 0x2b0));
        *(undefined4 *)(iVar2 + 0x20) = 0;
        *(undefined1 *)(iVar2 + 0x30) = 0;
      }
    }
    else {
      (**(code **)(*in_ECX + 0x138))(0x15,5);
      (**(code **)(*in_ECX + 0x54))(0);
      in_ECX[0x8e] = -1000000;
    }
    FUN_0063c3f0(param_1);
  }
  return;
}


/* ==== 0055a6a0  FUN_0055a6a0  size=516 ==== */

void FUN_0055a6a0(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *in_ECX;
  uint uVar4;
  uint uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071b1bd;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (in_ECX[0x69] == 3) {
    piVar1 = (int *)(**(code **)(*in_ECX + 0x9c))();
    if (*piVar1 == in_ECX[0x270]) {
      in_ECX[0x269] = 1;
      in_ECX[0x8c] = in_ECX[0x1d5] * 0x8e;
      in_ECX[0x8e] = 750000;
      in_ECX[0x91] = -0x5dc;
    }
  }
  else if ((in_ECX[0x69] == 0xc) &&
          ((piVar1 = (int *)(**(code **)(*in_ECX + 0x9c))(), *piVar1 == in_ECX[0x270] ||
           (0 < in_ECX[0x289])))) {
    in_ECX[0x269] = 1;
    in_ECX[0x8e] = 0x352;
    in_ECX[0x91] = -0x5dc;
    uVar4 = in_ECX[0x8e] >> 0x1f;
    uVar5 = in_ECX[0x91] >> 0x1f;
    iVar2 = (int)(((in_ECX[0x8e] ^ uVar4) - uVar4) * 2) / (int)((in_ECX[0x91] ^ uVar5) - uVar5);
    in_ECX[0x8e] = in_ECX[0x8e] * 1000;
    uVar4 = in_ECX[0x89] - in_ECX[0x44] >> 0x1f;
    uVar5 = in_ECX[0x8a] - in_ECX[0x45] >> 0x1f;
    in_ECX[0x8c] = (int)(((in_ECX[0x89] - in_ECX[0x44] ^ uVar4) - uVar4) * 1000) / iVar2;
    in_ECX[0x8d] = (int)(((in_ECX[0x8a] - in_ECX[0x45] ^ uVar5) - uVar5) * 1000) / iVar2;
    FUN_004054a0("passiveobject/common/animation/magictargetwarning.ani");
    local_8 = 0;
    uVar3 = FUN_00516d20();
    local_8 = 0xffffffff;
    FUN_00516a90(uVar3);
  }
  ExceptionList = local_10;
  return;
}


/* ==== 0055aa10  FUN_0055aa10  size=2534 ==== */

void FUN_0055aa10(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  float10 fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uStack_80;
  char *apcStack_7c [4];
  undefined4 uStack_6c;
  int iStack_68;
  undefined4 uStack_64;
  int *piStack_60;
  
  if (in_ECX[0x6a] == 3) {
    if ((in_ECX[0x244] == 0x14) && (in_ECX[0x245] == 5)) {
      piStack_60 = (int *)0x55aa5a;
      piVar1 = (int *)(**(code **)(*in_ECX + 0x9c))();
      if (*piVar1 == 1) {
        if (in_ECX[0x8b] < 500) {
          in_ECX[0x88] = in_ECX[0x8e] * param_1 + in_ECX[0x88];
          piStack_60 = (int *)(((float)param_1 * -0.3488889) / 1000.0);
          uStack_64 = 3;
          iStack_68 = 1;
          uStack_6c = 0x55ad0a;
          fVar4 = (float10)FUN_00641370();
          in_ECX[0x292] = (int)((float)fVar4 + (float)in_ECX[0x292]);
          piStack_60 = (int *)(((float)param_1 * -0.17444445) / 1000.0);
          uStack_64 = 3;
          iStack_68 = 1;
          uStack_6c = 0x55ad61;
          fVar4 = (float10)FUN_00641370();
          in_ECX[0x293] = (int)((float)fVar4 + (float)in_ECX[0x293]);
          piStack_60 = (int *)(((float)param_1 * 0.3488889) / 1000.0);
          uStack_64 = 3;
          iStack_68 = 1;
          uStack_6c = 0x55adb7;
          fVar4 = (float10)FUN_00641370();
          in_ECX[0x294] = (int)((float)fVar4 + (float)in_ECX[0x294]);
          piStack_60 = (int *)((float)in_ECX[0x28f] + (float)in_ECX[0x292]);
          uStack_64 = 3;
          iStack_68 = 1;
          uStack_6c = 0x55ae18;
          fVar4 = (float10)FUN_00641370();
          piStack_60 = (int *)(float)fVar4;
          uStack_64 = 0x55ae35;
          FUN_0062fdc0();
          piStack_60 = (int *)((float)in_ECX[0x290] + (float)in_ECX[0x293]);
          uStack_64 = 3;
          iStack_68 = 1;
          uStack_6c = 0x55ae6c;
          fVar4 = (float10)FUN_00641370();
          piStack_60 = (int *)(float)fVar4;
          uStack_64 = 0x55ae89;
          FUN_0062fdc0();
          piStack_60 = (int *)((float)in_ECX[0x291] + (float)in_ECX[0x294]);
          uStack_64 = 3;
          iStack_68 = 1;
          uStack_6c = 0x55aebe;
          fVar4 = (float10)FUN_00641370();
          piStack_60 = (int *)(float)fVar4;
          uStack_64 = 0x55aeda;
          FUN_0062fdc0();
        }
        else {
          in_ECX[0x8e] = 0;
          in_ECX[0x88] = 0;
          in_ECX[0x296] = in_ECX[0x296] - param_1;
          if (in_ECX[0x296] < 1) {
            in_ECX[0x296] = in_ECX[0x295];
            in_ECX[0x297] = in_ECX[0x297] + 1;
            if (in_ECX[0x297] == 3) {
              in_ECX[0x297] = 0;
              in_ECX[0x6a] = 4;
              in_ECX[0x269] = 3;
              in_ECX[0x28a] = 3000;
              piStack_60 = in_ECX + 0x28c;
              uStack_64 = 0x55ab41;
              FUN_0044de80();
              piStack_60 = in_ECX + 0x28d;
              uStack_64 = 0x55ab62;
              FUN_0044de80();
              piStack_60 = in_ECX + 0x28e;
              uStack_64 = 0x55ab82;
              FUN_0044de80();
              in_ECX[0x292] = 0;
              in_ECX[0x293] = 0;
              in_ECX[0x294] = 0;
            }
            else {
              piStack_60 = (int *)0x7fffffff;
              uStack_64 = 0x55abdd;
              iVar2 = (**(code **)(*in_ECX + 0x30))();
              if (iVar2 == 0) {
                apcStack_7c[0] = "passiveobject/common/animation/magictargetwarning.ani";
                uStack_80 = 0x55ac63;
                FUN_004054a0();
                apcStack_7c[0] = (char *)0x55ac70;
                iVar2 = (**(code **)(*in_ECX + 0x78))();
                *(undefined1 *)(iVar2 + 0xe9) = 0;
                *(undefined1 *)(iVar2 + 0xe8) = 0;
                *(int *)(iVar2 + 0x4c) = in_ECX[0x7d];
                *(int *)(iVar2 + 0x40) = in_ECX[0x89];
                *(int *)(iVar2 + 0x44) = in_ECX[0x8a];
              }
              else {
                apcStack_7c[0] = "passiveobject/common/animation/magictargetwarning.ani";
                uStack_80 = 0x55abf8;
                FUN_004054a0();
                apcStack_7c[0] = (char *)0x55ac05;
                iVar3 = (**(code **)(*in_ECX + 0x78))();
                *(undefined1 *)(iVar3 + 0xe9) = 0;
                *(undefined1 *)(iVar3 + 0xe8) = 0;
                *(undefined4 *)(iVar3 + 0x4c) = *(undefined4 *)(iVar2 + 500);
                *(undefined4 *)(iVar3 + 0x40) = *(undefined4 *)(iVar2 + 0x224);
                *(undefined4 *)(iVar3 + 0x44) = *(undefined4 *)(iVar2 + 0x228);
              }
            }
          }
        }
      }
    }
  }
  else if (in_ECX[0x6a] == 4) {
    if (in_ECX[0x269] == 1) {
      in_ECX[0x28a] = in_ECX[0x28a] + param_1;
      if (2999 < in_ECX[0x28a]) {
        in_ECX[0x28a] = 0;
        piStack_60 = (int *)0x6;
        uStack_64 = 0x15;
        iStack_68 = 0x55af49;
        (**(code **)(*in_ECX + 0x138))();
        uStack_80 = 4;
        FUN_00552fb0(apcStack_7c);
        uStack_80 = 0x55af6a;
        iVar2 = (**(code **)(*in_ECX + 0x78))();
        *(undefined1 *)(iVar2 + 0xe9) = 0;
        *(undefined1 *)(iVar2 + 0xe8) = 0;
        *(int *)(iVar2 + 0x40) = in_ECX[0x89];
        *(int *)(iVar2 + 0x44) = in_ECX[0x8a];
        *(undefined4 *)(iVar2 + 0x48) = 0;
        in_ECX[0x8e] = 1000000;
        in_ECX[0x269] = 2;
      }
    }
    else if (in_ECX[0x269] == 2) {
      in_ECX[0x88] = in_ECX[0x8e] * param_1 + in_ECX[0x88];
      piStack_60 = (int *)0x55b006;
      iVar2 = (**(code **)(*in_ECX + 0x68))();
      if (iVar2 + in_ECX[0x8a] <= in_ECX[0x8b]) {
        in_ECX[0x8e] = 0;
        in_ECX[0x269] = 3;
      }
    }
    else if (in_ECX[0x269] == 3) {
      in_ECX[0x28a] = in_ECX[0x28a] + param_1;
      if (2999 < in_ECX[0x28a]) {
        in_ECX[0x28a] = 0;
        piStack_60 = (int *)in_ECX[0x251];
        uStack_64 = 0x55b095;
        iVar2 = (**(code **)(*in_ECX + 0x30))();
        if (iVar2 != 0) {
          if (*(int *)(iVar2 + 0x224) < in_ECX[0x89]) {
            in_ECX[0x7d] = -1;
          }
          else if (in_ECX[0x89] < *(int *)(iVar2 + 0x224)) {
            in_ECX[0x7d] = 1;
          }
          if (*(int *)(iVar2 + 0x228) < in_ECX[0x8a]) {
            in_ECX[0x7e] = -1;
          }
          else if (in_ECX[0x8a] < *(int *)(iVar2 + 0x228)) {
            in_ECX[0x7e] = 1;
          }
        }
        in_ECX[0x89] = in_ECX[0x44];
        in_ECX[0x8a] = in_ECX[0x45];
        apcStack_7c[0] = "passiveobject/common/animation/magictargetwarningterrible.ani";
        uStack_80 = 0x55b160;
        FUN_004054a0();
        apcStack_7c[0] = (char *)0x55b16d;
        iVar2 = (**(code **)(*in_ECX + 0x78))();
        *(undefined1 *)(iVar2 + 0xe9) = 0;
        *(undefined1 *)(iVar2 + 0xe8) = 0;
        *(int *)(iVar2 + 0x40) = in_ECX[0x44];
        *(int *)(iVar2 + 0x44) = in_ECX[0x45];
        *(undefined4 *)(iVar2 + 0x48) = 0;
        in_ECX[0x269] = 4;
      }
    }
    else if (in_ECX[0x269] == 4) {
      in_ECX[0x88] = in_ECX[0x8e] * param_1 + in_ECX[0x88];
      if (in_ECX[0x8b] < 1) {
        in_ECX[0x8e] = -in_ECX[0x8e] / 2;
        in_ECX[0x91] = -0x5dc;
        in_ECX[0x88] = 0;
        in_ECX[0x8b] = 1;
        in_ECX[0x269] = 5;
        piStack_60 = (int *)0x55b25d;
        (**(code **)(*in_ECX + 0x50))();
        piStack_60 = (int *)0x1;
        uStack_64 = 0x55b26f;
        (**(code **)(*in_ECX + 0x8c))();
        uStack_64 = 0x55b27c;
        (**(code **)(*in_ECX + 0x58))();
        uStack_64 = 0x55b283;
        iVar2 = FUN_0062fc30();
        uStack_64 = *(undefined4 *)(iVar2 + 0x44);
        iStack_68 = 0x55b297;
        (**(code **)(*in_ECX + 0x90))();
        iStack_68 = 0x55b2a7;
        piVar1 = (int *)(**(code **)(*in_ECX + 0x94))();
        iStack_68 = *piVar1 + -1;
        uStack_6c = 0x55b2ba;
        (**(code **)(*in_ECX + 0x54))();
        FUN_00552fb0(&uStack_80,4);
        iVar2 = (**(code **)(*in_ECX + 0x78))();
        *(undefined1 *)(iVar2 + 0xe9) = 0;
        *(undefined1 *)(iVar2 + 0xe8) = 0;
        *(int *)(iVar2 + 0x40) = in_ECX[0x89];
        *(int *)(iVar2 + 0x44) = in_ECX[0x8a];
        *(undefined4 *)(iVar2 + 0x48) = 0;
        FUN_0042f340(in_ECX,0,0,0,0x75f9,in_ECX[0x7d]);
        uVar6 = 500;
        uVar5 = 3;
        game_get_state_ptr_d1520(3,500);
        FUN_004edfb0(uVar5,uVar6);
      }
    }
    else if (in_ECX[0x269] == 5) {
      in_ECX[0x8e] = in_ECX[0x91] * param_1 + in_ECX[0x8e];
      in_ECX[0x88] = in_ECX[0x8e] * param_1 + in_ECX[0x88];
      if ((in_ECX[0x8b] < 1) && (in_ECX[0x88] < 0)) {
        in_ECX[0x8b] = 0;
        piStack_60 = (int *)0x55b3ee;
        (**(code **)(*in_ECX + 0x134))();
      }
    }
  }
  return;
}


/* ==== 0055b400  FUN_0055b400  size=931 ==== */

void FUN_0055b400(void)

{
  int *piVar1;
  int *in_ECX;
  undefined1 auStack_6c [8];
  undefined4 uStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  char *pcStack_58;
  undefined1 auStack_54 [8];
  undefined4 uStack_4c;
  int iStack_48;
  undefined4 uStack_44;
  int *piStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  char *pcStack_28;
  undefined1 *local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  undefined1 *local_18;
  int local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  local_8 = in_ECX;
  if ((in_ECX[0x244] == 0x14) && (in_ECX[0x245] == 0)) {
    pcStack_28 = (char *)0x55b439;
    piVar1 = (int *)(**(code **)(*in_ECX + 0x9c))();
    if (*piVar1 == 2) {
      pcStack_28 = "passiveobject/monster/evileye/particle/missilegerocenter.ptl";
      iStack_2c = local_8[0x7d];
      uStack_30 = 0x7594;
      uStack_34 = 0x41500000;
      uStack_38 = 0;
      uStack_3c = 0x42700000;
      piStack_40 = local_8;
      uStack_44 = 0x55b484;
      FUN_0042f340();
      iStack_2c = 0x55b491;
      FUN_004053a0();
      pcStack_28 = "passiveobject/monster/evileye/particle/missilegeroleft.ptl";
      iStack_2c = local_8[0x7d];
      uStack_30 = 0x7594;
      uStack_34 = 0x41500000;
      uStack_38 = 0;
      uStack_3c = 0x42700000;
      piStack_40 = local_8;
      uStack_44 = 0x55b4d3;
      FUN_0042f340();
      iStack_2c = 0x55b4e0;
      FUN_004053a0();
      pcStack_28 = "passiveobject/monster/evileye/particle/missilegeroright.ptl";
      iStack_2c = local_8[0x7d];
      uStack_30 = 0x7594;
      uStack_34 = 0x41500000;
      uStack_38 = 0;
      uStack_3c = 0x42700000;
      piStack_40 = local_8;
      uStack_44 = 0x55b522;
      FUN_0042f340();
      iStack_2c = 0x55b52f;
      FUN_004053a0();
    }
  }
  if ((local_8[0x244] == 0x14) && (local_8[0x245] == 3)) {
    pcStack_28 = (char *)0x55b560;
    piVar1 = (int *)(**(code **)(*local_8 + 0x9c))();
    if (*piVar1 == 0) {
      local_18 = (undefined1 *)&uStack_3c;
      piStack_40 = (int *)0x78468c;
      uStack_44 = 0x55b577;
      FUN_004054a0();
      piStack_40 = (int *)0x55b584;
      (**(code **)(*local_8 + 0x78))();
    }
    pcStack_28 = (char *)0x55b595;
    piVar1 = (int *)(**(code **)(*local_8 + 0x9c))();
    if (*piVar1 == 2) {
      local_1c = (undefined1 *)&uStack_3c;
      piStack_40 = (int *)0x784664;
      uStack_44 = 0x55b5b0;
      FUN_004054a0();
      piStack_40 = (int *)0x55b5bd;
      local_c = (**(code **)(*local_8 + 0x78))();
      local_8[0x28c] = local_c;
      *(undefined4 *)(local_8[0x28c] + 0x84) = 1;
      piStack_40 = (int *)local_8[0x28f];
      uStack_44 = 0x55b622;
      FUN_0062fdc0();
      piStack_40 = (int *)0x21;
      uStack_44 = 0;
      iStack_48 = local_8[0x7d] * -2;
      uStack_4c = 0x55b64b;
      FUN_0062fd90();
      local_20 = auStack_54;
      pcStack_58 = "monster/spider/spiderbossani/thread.ani";
      uStack_5c = 0x55b65e;
      FUN_004054a0();
      pcStack_58 = (char *)0x55b66b;
      local_10 = (**(code **)(*local_8 + 0x78))();
      local_8[0x28d] = local_10;
      *(undefined4 *)(local_8[0x28d] + 0x84) = 1;
      pcStack_58 = (char *)0x35;
      uStack_5c = 0;
      iStack_60 = local_8[0x7d] << 5;
      uStack_64 = 0x55b6c7;
      FUN_0062fd90();
      pcStack_58 = (char *)local_8[0x290];
      uStack_5c = 0x55b6f8;
      FUN_0062fdc0();
      local_24 = auStack_6c;
      FUN_004054a0("monster/spider/spiderbossani/thread.ani");
      local_14 = (**(code **)(*local_8 + 0x78))();
      local_8[0x28e] = local_14;
      *(undefined4 *)(local_8[0x28e] + 0x84) = 1;
      FUN_0062fd90(local_8[0x7d] * 0x26,0,0x23);
      FUN_0062fdc0(local_8[0x291]);
    }
  }
  return;
}


/* ==== 0055cdc0  FUN_0055cdc0  size=389 ==== */

void FUN_0055cdc0(int param_1)

{
  char cVar1;
  int *piVar2;
  undefined1 auStack_34 [12];
  undefined4 uStack_28;
  undefined1 *puStack_24;
  int *piStack_20;
  int *piStack_1c;
  undefined1 *local_18;
  undefined1 local_14 [4];
  undefined1 local_10 [4];
  int local_c;
  int *local_8;
  
  piStack_1c = (int *)param_1;
  piStack_20 = (int *)0x55cdd5;
  FUN_00401720();
  if ((char)local_8[0x289] != '\0') {
    local_8[0x28a] = local_8[0x28a] + param_1;
    if (999 < local_8[0x28a]) {
      local_8[0x28a] = 0;
      local_8[0x28b] = local_8[0x28b] + 1;
      piStack_1c = (int *)local_10;
      piStack_20 = (int *)0x55ce3b;
      FUN_0053c7e0();
      piStack_20 = (int *)0x55ce42;
      piStack_1c = (int *)FUN_00489e00();
      piStack_20 = local_8 + 0x7a;
      puStack_24 = local_14;
      uStack_28 = 0x55ce55;
      FUN_0053c7e0();
      uStack_28 = 0x55ce5c;
      FUN_00489da0();
      piStack_20 = (int *)0x55ce63;
      cVar1 = FUN_0040d2d0();
      if (cVar1 != '\0') {
        piStack_1c = local_8 + 0x7a;
        piStack_20 = (int *)0x55ce78;
        FUN_0053c7e0();
        piStack_20 = (int *)0x55ce7f;
        piVar2 = (int *)FUN_0048ada0();
        *(int *)(*piVar2 + 0xe4) = local_8[0x1ba];
      }
    }
    if (4 < local_8[0x28b]) {
      local_8[0x28a] = 0;
      local_8[0x28b] = 0;
      *(undefined1 *)(local_8 + 0x289) = 0;
      piStack_1c = (int *)local_8[0x251];
      piStack_20 = (int *)0x55cedb;
      (**(code **)(*local_8 + 0x30))();
      local_8[0x89] = local_8[0x44];
      local_8[0x8a] = local_8[0x45];
      local_18 = auStack_34;
      FUN_004054a0("passiveobject/common/animation/magictargetwarning.ani");
      local_c = (**(code **)(*local_8 + 0x78))();
      *(undefined4 *)(local_c + 0x110) = 4;
      (**(code **)(*local_8 + 0x134))();
    }
  }
  return;
}


/* ==== 0055dfc0  FUN_0055dfc0  size=280 ==== */

void FUN_0055dfc0(int param_1)

{
  char cVar1;
  int iStack_30;
  float local_2c;
  float local_28;
  undefined4 local_24;
  int iStack_20;
  char *pcStack_1c;
  undefined1 *local_18;
  undefined4 local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if (param_1 != 0) {
    pcStack_1c = "passiveobject/common/animation/magictargetwarningterrible.ani";
    iStack_20 = param_1 + 100;
    local_24 = 0x55dfe5;
    cVar1 = FUN_00427c60();
    if (cVar1 != '\0') {
      *(undefined4 *)(local_8 + 0xa28) = 0;
      *(int *)(local_8 + 0xa2c) = *(int *)(local_8 + 0xa2c) + 1;
      pcStack_1c = *(char **)(local_8 + 500);
      iStack_20 = 0xbbb1;
      local_24 = 0;
      local_28 = (float)*(int *)(local_8 + 0x114);
      local_2c = (float)*(int *)(local_8 + 0x110);
      iStack_30 = local_8;
      local_14 = FUN_0042f250();
      local_18 = (undefined1 *)&iStack_30;
      FUN_004054a0("passiveobject/monster/coldboy/particle/ef-coldboy-blliazard_small.ptl");
      local_10 = FUN_004aa990(0,*(undefined4 *)(local_8 + 0x110),*(undefined4 *)(local_8 + 0x114),
                              400);
      *(undefined4 *)(local_10 + 0x2c) = *(undefined4 *)(local_8 + 500);
      *(undefined1 *)(local_10 + 0x35) = 1;
      *(undefined4 *)(local_10 + 0x60) = local_14;
      *(undefined4 *)(local_10 + 100) = 0xffffffff;
      local_c = local_10;
    }
    pcStack_1c = (char *)param_1;
    iStack_20 = 0x55e0d1;
    FUN_0063c3f0();
  }
  return;
}


/* ==== 0055e0e0  FUN_0055e0e0  size=285 ==== */

void FUN_0055e0e0(void)

{
  int *piVar1;
  int iVar2;
  int *in_ECX;
  int *piStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  int iStack_18;
  undefined1 *local_14;
  int *local_8;
  
  local_8 = in_ECX;
  if ((in_ECX[0x244] == 0x14) && (in_ECX[0x245] == 0)) {
    iStack_18 = 0x55e111;
    piVar1 = (int *)(**(code **)(*in_ECX + 0x9c))();
    if (*piVar1 == 6) {
      iStack_18 = local_8[0x7d];
      uStack_1c = 0x7546;
      uStack_20 = 0;
      uStack_24 = 0;
      uStack_28 = 0x42c80000;
      piStack_2c = local_8;
      FUN_0042f340();
    }
  }
  else if ((in_ECX[0x244] == 0x14) && (in_ECX[0x245] == 5)) {
    iStack_18 = 0x55e186;
    piVar1 = (int *)(**(code **)(*in_ECX + 0x9c))();
    if (*piVar1 == 2) {
      local_14 = (undefined1 *)&piStack_2c;
      FUN_004054a0("passiveobject/common/animation/magictargetwarningterrible.ani");
      iVar2 = (**(code **)(*local_8 + 0x78))();
      *(undefined4 *)(iVar2 + 0x4c) = 1;
      *(undefined1 *)(iVar2 + 0xe9) = 0;
      *(undefined1 *)(iVar2 + 0xe8) = 0;
      *(int *)(iVar2 + 0x40) = local_8[0x44];
      *(int *)(iVar2 + 0x44) = local_8[0x45];
      *(undefined4 *)(iVar2 + 0x48) = 0;
    }
  }
  return;
}


/* ==== 00566810  FUN_00566810  size=287 ==== */

void FUN_00566810(int param_1)

{
  undefined1 auStack_48 [16];
  undefined4 uStack_38;
  char *pcStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  char *pcStack_1c;
  undefined1 *local_18;
  undefined1 *local_14;
  undefined1 *local_10;
  undefined1 *local_c;
  int *local_8;
  
  if (param_1 == 3) {
    pcStack_1c = (char *)param_1;
    uStack_20 = 0x56682b;
    FUN_0054bdf0();
    pcStack_1c = "character/mage/particle/void.ptl";
    uStack_20 = *(undefined4 *)((int)local_8 + 500);
    uStack_24 = 0x59e4;
    local_28 = 0x42480000;
    local_2c = 0;
    local_30 = 0;
    pcStack_34 = (char *)local_8;
    uStack_38 = 0x566868;
    FUN_0042f340();
    uStack_20 = 0x566875;
    FUN_004053a0();
  }
  else if (param_1 == 4) {
    pcStack_1c = (char *)param_1;
    uStack_20 = 0x56688d;
    FUN_0054bdf0();
    local_c = (undefined1 *)&local_30;
    pcStack_34 = "monster/wraith/wraithlilithani/ef_roarstun1.ani";
    uStack_38 = 0x5668a0;
    FUN_004054a0();
    pcStack_34 = (char *)0x5668ad;
    (**(code **)(*local_8 + 0x78))();
    local_10 = auStack_48;
    FUN_004054a0("monster/wraith/wraithlilithani/ef_roarstun2.ani");
    (**(code **)(*local_8 + 0x78))();
  }
  else {
    pcStack_1c = (char *)param_1;
    uStack_20 = 0x5668dc;
    FUN_0054bdf0();
    if ((param_1 == 1) || (param_1 == 2)) {
      local_14 = (undefined1 *)&local_30;
      pcStack_34 = "monster/wraith/wraithlilithani/ef_drain.ani";
      uStack_38 = 0x5668fb;
      FUN_004054a0();
      pcStack_34 = (char *)0x566908;
      (**(code **)(*local_8 + 0x78))();
      local_18 = auStack_48;
      FUN_004054a0("monster/wraith/wraithlilithani/ef_drainflower.ani");
      (**(code **)(*local_8 + 0x78))();
    }
  }
  return;
}


/* ==== 00568ff0  FUN_00568ff0  size=783 ==== */

void FUN_00568ff0(int param_1)

{
  char cVar1;
  int iVar2;
  int *in_ECX;
  char *pcVar3;
  
  if (param_1 != 0) {
    cVar1 = FUN_00427c60(param_1 + 100,"monster/evileye/evileyeani/eyeflash_quake.ani");
    if (cVar1 != '\0') {
      FUN_0063c3f0(param_1);
      FUN_0042f340(in_ECX,0,0,0,0x7661,in_ECX[0x7d]);
    }
    cVar1 = FUN_00427c60(param_1 + 100,"monster/evileye/evileyeani/eyeflash.ani");
    if (cVar1 != '\0') {
      if (in_ECX[0x244] == 0x14) {
        if (in_ECX[0x245] == 1) {
          FUN_0042f340(in_ECX,0x42820000,0,0x42ce0000,0x765d,in_ECX[0x7d]);
        }
        else if (in_ECX[0x245] == 2) {
          pcVar3 = "passiveobject/monster/evileye/particle/missilegerocenter.ptl";
          FUN_0042f340(in_ECX,0x42820000,0,0x42ce0000,0x765e,in_ECX[0x7d],
                       "passiveobject/monster/evileye/particle/missilegerocenter.ptl");
          FUN_004053a0(pcVar3);
          pcVar3 = "passiveobject/monster/evileye/particle/missilegerocenterleft.ptl";
          FUN_0042f340(in_ECX,0x42820000,0,0x42ce0000,0x765e,in_ECX[0x7d],
                       "passiveobject/monster/evileye/particle/missilegerocenterleft.ptl");
          FUN_004053a0(pcVar3);
          pcVar3 = "passiveobject/monster/evileye/particle/missilegerocenterright.ptl";
          FUN_0042f340(in_ECX,0x42820000,0,0x42ce0000,0x765e,in_ECX[0x7d],
                       "passiveobject/monster/evileye/particle/missilegerocenterright.ptl");
          FUN_004053a0(pcVar3);
          pcVar3 = "passiveobject/monster/evileye/particle/missilegeroleft.ptl";
          FUN_0042f340(in_ECX,0x42820000,0,0x42ce0000,0x765e,in_ECX[0x7d],
                       "passiveobject/monster/evileye/particle/missilegeroleft.ptl");
          FUN_004053a0(pcVar3);
          pcVar3 = "passiveobject/monster/evileye/particle/missilegeroright.ptl";
          FUN_0042f340(in_ECX,0x42820000,0,0x42ce0000,0x765e,in_ECX[0x7d],
                       "passiveobject/monster/evileye/particle/missilegeroright.ptl");
          FUN_004053a0(pcVar3);
        }
        else if ((in_ECX[0x245] == 3) &&
                (iVar2 = (**(code **)(*in_ECX + 0x30))(in_ECX[0x251]), iVar2 != 0)) {
          FUN_0042f450(in_ECX,(float)*(int *)(iVar2 + 0x224),(float)*(int *)(iVar2 + 0x228),0x765f,1
                       ,in_ECX[0x7d],100);
        }
      }
      FUN_0063c3f0(param_1);
    }
  }
  return;
}


/* ==== 0056bdd0  FUN_0056bdd0  size=845 ==== */

void FUN_0056bdd0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_6c [8];
  undefined4 uStack_64;
  char *pcStack_60;
  undefined1 auStack_5c [8];
  float local_54;
  float local_50;
  undefined4 *local_4c;
  undefined1 *puStack_48;
  uint uStack_44;
  undefined1 *local_40;
  undefined1 local_3c [4];
  undefined1 local_38 [4];
  undefined4 local_34;
  undefined1 *local_30;
  undefined4 local_2c;
  undefined1 *local_28;
  int local_24;
  int local_20;
  undefined4 local_1c;
  int *local_18;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071b855;
  local_10 = ExceptionList;
  uStack_44 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  puStack_48 = (undefined1 *)0x56be06;
  cVar1 = game_frame_should_continue();
  if (cVar1 != '\0') {
    local_11 = '\0';
    if ((((*(int *)(*(int *)(param_1 + 4) + 0x204) == 100) &&
         (*(int *)(*(int *)(param_1 + 4) + 0x1e4) == 0x43b)) &&
        (0 < *(int *)(*(int *)(param_1 + 4) + 0x6e8))) &&
       ((*(int *)(*(int *)(param_1 + 4) + 0x22c) == 0 &&
        (((*(int *)(*(int *)(param_1 + 4) + 0x910) == 0 ||
          (*(int *)(*(int *)(param_1 + 4) + 0x910) == 1)) ||
         (*(int *)(*(int *)(param_1 + 4) + 0x910) == 0x14)))))) {
      local_11 = '\x01';
      puStack_48 = (undefined1 *)(param_1 + 4);
      local_4c = (undefined4 *)0x56beaf;
      FUN_0040d490();
      puStack_48 = (undefined1 *)0x0;
      local_4c = *(undefined4 **)(*(int *)(param_1 + 4) + 0x6e8);
      local_50 = 7.966289e-39;
      FUN_006315c0();
      puStack_48 = (undefined1 *)0x3;
      local_4c = (undefined4 *)(float)*(int *)(*(int *)(param_1 + 4) + 0x22c);
      local_50 = (float)*(int *)(*(int *)(param_1 + 4) + 0x228);
      local_54 = (float)*(int *)(*(int *)(param_1 + 4) + 0x224);
      local_28 = auStack_6c;
      local_2c = FUN_004054a0(
                             "passiveobject/character/swordman/animation/outragebreak/bloodexp1_none.ani"
                             );
      local_8 = 0;
      uVar2 = FUN_00516d20();
      local_8 = 0xffffffff;
      local_20 = FUN_00516a90(uVar2);
      *(undefined4 *)(local_20 + 0x4c) = *(undefined4 *)(*(int *)(param_1 + 4) + 500);
      puStack_48 = (undefined1 *)0x3;
      local_4c = (undefined4 *)(float)*(int *)(*(int *)(param_1 + 4) + 0x22c);
      local_50 = (float)*(int *)(*(int *)(param_1 + 4) + 0x228);
      local_54 = (float)*(int *)(*(int *)(param_1 + 4) + 0x224);
      local_30 = auStack_6c;
      local_34 = FUN_004054a0(
                             "passiveobject/character/swordman/animation/outragebreak/bloodexp1_ldodge.ani"
                             );
      local_8 = 1;
      uVar2 = FUN_00516d20();
      local_8 = 0xffffffff;
      local_24 = FUN_00516a90(uVar2);
      *(int *)(local_24 + 0x4c) = local_18[0x7d];
      puStack_48 = (undefined1 *)0x4;
      local_4c = (undefined4 *)0x56bff1;
      (**(code **)(**(int **)(param_1 + 4) + 0x84))();
      puStack_48 = (undefined1 *)(*(int *)(param_1 + 4) + 0x1e8);
      local_4c = &local_1c;
      local_50 = 7.966739e-39;
      FUN_0053c7e0();
      local_50 = 7.966749e-39;
      FUN_00489da0();
      puStack_48 = local_38;
      local_4c = (undefined4 *)0x56c018;
      FUN_0053c7e0();
      local_4c = (undefined4 *)0x56c01f;
      puStack_48 = (undefined1 *)FUN_00489e00();
      local_4c = (undefined4 *)0x56c028;
      cVar1 = FUN_0040d2d0();
      if (cVar1 != '\0') {
        puStack_48 = (undefined1 *)0x56c037;
        iVar3 = FUN_00489a10();
        puStack_48 = (undefined1 *)(iVar3 + 4);
        local_4c = (undefined4 *)0x56c040;
        FUN_004d1b30();
        local_4c = (undefined4 *)0x56c047;
        FUN_00517ad0();
        puStack_48 = (undefined1 *)local_1c;
        local_4c = (undefined4 *)local_3c;
        local_50 = 7.966848e-39;
        FUN_0053c7e0();
        local_50 = 7.966858e-39;
        FUN_0048d0b0();
      }
      puStack_48 = *(undefined1 **)(param_1 + 4);
      local_4c = (undefined4 *)0x56c069;
      game_get_state_ptr_d1520();
      local_4c = (undefined4 *)0x56c070;
      FUN_004d58e0();
      local_4c = (undefined4 *)0x56c077;
      FUN_0043a7a0();
      if (*(int *)(*(int *)(param_1 + 4) + 0xa24) == 0) {
        local_18[0x289] = local_18[0x289] + 1;
      }
      else {
        local_18[0x289] = local_18[0x289] + *(int *)(*(int *)(param_1 + 4) + 0xa24);
      }
      if (2 < local_18[0x289]) {
        puStack_48 = (undefined1 *)0x0;
        local_4c = (undefined4 *)0x15;
        local_50 = 7.967038e-39;
        (**(code **)(*local_18 + 0x138))();
      }
      local_40 = auStack_5c;
      pcStack_60 = "sounds/mon/actx/larva_eat.wav";
      uStack_64 = 0x56c0ef;
      FUN_004054a0();
      pcStack_60 = (char *)0x56c0f4;
      FUN_004c3500();
    }
    if (local_11 == '\0') {
      puStack_48 = (undefined1 *)param_1;
      local_4c = (undefined4 *)0x56c10b;
      FUN_0054f460();
    }
  }
  ExceptionList = local_10;
  return;
}


/* ==== 0057ad00  FUN_0057ad00  size=291 ==== */

undefined4 FUN_0057ad00(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 auStack_50 [8];
  undefined4 uStack_48;
  char *pcStack_44;
  undefined1 auStack_40 [8];
  float local_38;
  float local_34;
  float local_30;
  int *piStack_2c;
  uint uStack_28;
  undefined1 *local_24;
  undefined4 local_20;
  undefined1 *local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070e42d;
  local_10 = ExceptionList;
  uStack_28 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  piStack_2c = (int *)0x57ad33;
  cVar1 = game_frame_should_continue();
  if (cVar1 == '\0') {
    *(int *)(local_14 + 0x210) =
         (int)((float)*(int *)(*param_1 + 0x878) * *(float *)(*param_1 + 0x87c));
    *(undefined4 *)(*param_1 + 0x210) = *(undefined4 *)(local_14 + 0x210);
    piStack_2c = (int *)0x3;
    local_30 = (float)param_1[4];
    local_34 = (float)*(int *)(local_14 + 0x228);
    local_38 = (float)param_1[2];
    local_1c = auStack_50;
    local_20 = FUN_004054a0("character/swordman/effect/animation/guard/spark.ani");
    local_8 = 0;
    uVar2 = FUN_00516d20();
    local_8 = 0xffffffff;
    local_18 = FUN_00516a90(uVar2);
    *(int *)(local_18 + 0x4c) = param_1[5];
    local_24 = auStack_40;
    pcStack_44 = "SWD_GUARDED";
    uStack_48 = 0x57adfa;
    FUN_004054a0();
    pcStack_44 = (char *)0x57adff;
    FUN_004c3570();
    uVar2 = 0;
  }
  else {
    piStack_2c = param_1;
    local_30 = 8.052133e-39;
    uVar2 = FUN_0054f4f0();
  }
  ExceptionList = local_10;
  return uVar2;
}


/* ==== 0058af40  FUN_0058af40  size=1455 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_0058af40(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
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
  puStack_c = &LAB_0071d69c;
  local_10 = ExceptionList;
  local_14 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*(int *)(param_1 + 0xdd8) < 4) {
    FUN_004054a0();
    local_8 = 0;
    FUN_004c7c00();
    local_8._0_1_ = 1;
    FUN_00405cf0();
    local_8._0_1_ = 2;
    game_timing_or_delay_helper();
    local_8._0_1_ = 1;
    iVar1 = ui_find_widget_by_key();
    local_8 = (uint)local_8._1_3_ << 8;
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_44);
    local_8 = 0xffffffff;
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_5c);
    if (iVar1 != 0) {
      game_get_flag_object_01a70();
      FUN_005e9570();
      FUN_0040d680();
      game_get_flag_object_01a70();
      FUN_005e9570();
      FUN_0040d680();
      FUN_00405520();
      iVar1 = FUN_004b8ca0();
      iVar1 = *(int *)(iVar1 + 0x10);
      FUN_004054a0();
      iVar2 = FUN_004b8ca0();
      iVar2 = *(int *)(iVar2 + 0xc);
      FUN_004054a0();
      iVar3 = FUN_004b8ca0();
      iVar3 = *(int *)(iVar3 + 0x10);
      FUN_004054a0();
      local_8 = 3;
      FUN_004c7c00();
      local_8._0_1_ = 4;
      FUN_00405cf0();
      local_8._0_1_ = 5;
      game_timing_or_delay_helper();
      local_8._0_1_ = 4;
      iVar4 = ui_find_widget_by_key();
      *(int *)(iVar4 + 0x54) = (*(int *)(param_1 + 0x224) - DAT_007ca764) - iVar2 / 2;
      local_8 = CONCAT31(local_8._1_3_,3);
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_74);
      local_8 = 0xffffffff;
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_8c);
      FUN_004054a0();
      local_8 = 6;
      FUN_004c7c00();
      local_8._0_1_ = 7;
      FUN_00405cf0();
      local_8._0_1_ = 8;
      game_timing_or_delay_helper();
      local_8._0_1_ = 7;
      iVar2 = ui_find_widget_by_key();
      *(int *)(iVar2 + 0x58) =
           ((((*(int *)(param_1 + 0x228) - DAT_007ca768) - *(int *)(param_1 + 0x22c)) - iVar1) +
           -0x14) - iVar3;
      local_8 = CONCAT31(local_8._1_3_,6);
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_a4);
      local_8 = 0xffffffff;
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_2c);
      FUN_004054a0("sprite/character/common/privatestore/donkey/store.img");
      FUN_004baec0();
      FUN_004054a0("sprite/character/common/privatestore/donkey/store.img");
      FUN_004baec0();
    }
  }
  ExceptionList = local_10;
  return;
}


/* ==== 0059b0b0  game_subsystem_init_59b0b0  size=6402 ==== */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int game_subsystem_init_59b0b0(void)

{
  char cVar1;
  FILE *pFVar2;
  uint uVar3;
  uint *puVar4;
  undefined4 uVar5;
  int iVar6;
  uint *puVar7;
  uint local_1e84;
  uint *local_1e80;
  char *local_1e7c;
  undefined4 local_1e78;
  undefined4 local_1e74;
  char *local_1e70;
  char *local_1e6c;
  char *local_1e68;
  char *local_1e64;
  undefined4 local_1e60;
  char *local_1e5c;
  char *local_1e58;
  char *local_1e54;
  char *local_1e50;
  undefined4 local_1e4c;
  undefined4 local_1e48;
  undefined4 local_1e44;
  undefined4 local_1e40;
  char *local_1e3c;
  char *local_1e38;
  char *local_1e34;
  char *local_1e30;
  char *local_1e2c;
  undefined4 local_1e28;
  undefined4 local_1e24;
  undefined4 local_1e20;
  undefined4 local_1e1c;
  undefined4 local_1e18;
  char *local_1e14;
  char *local_1e10;
  undefined4 local_1e0c;
  undefined4 local_1e08;
  char *local_1e04;
  char *local_1e00;
  int local_1dfc;
  int local_1df8;
  char *local_1df4;
  char *local_1df0;
  undefined4 local_1dec;
  size_t local_1de8;
  int local_1de4;
  uint local_1de0 [4];
  uint local_1dd0;
  int local_1dcc;
  undefined4 local_1dc8;
  int local_1dc4;
  undefined4 local_1dc0;
  int local_1dbc;
  uint *local_1db8;
  size_t local_1dac;
  int local_1da8;
  uint local_1da4;
  uint local_1da0;
  uint local_1d9c;
  uint *local_1d94;
  uint local_1d90;
  uint *local_1d8c;
  uint local_1d88;
  char *local_1d84;
  char *local_1d80;
  char *local_1d7c;
  char *local_1d78;
  void *local_1d74;
  undefined4 local_1d70;
  FILE *local_1d6c;
  void *local_1d68;
  char *local_1d64;
  char local_1d5f;
  char local_1d5e;
  char local_1d5c;
  undefined1 local_1d5a;
  undefined1 local_1d59;
  uint *local_1d58;
  int local_1d54;
  function<void___cdecl(void)> local_1d50 [24];
  function<void___cdecl(void)> local_1d38 [24];
  function<void___cdecl(void)> local_1d20 [24];
  function<void___cdecl(void)> local_1d08 [24];
  undefined4 local_1cf0;
  undefined4 local_1cec;
  undefined4 local_1ce8;
  undefined4 local_1ce4;
  undefined4 local_1ce0;
  undefined4 local_1cdc;
  undefined4 local_1cd8;
  undefined4 local_1cd4;
  undefined4 local_1cd0;
  undefined4 local_1ccc;
  undefined4 local_1cc8;
  undefined4 local_1cc4;
  undefined4 local_1cc0;
  undefined4 local_1cbc;
  undefined4 local_1cb8;
  undefined4 local_1cb4;
  undefined4 local_1cb0;
  undefined4 local_1cac;
  undefined4 local_1ca8;
  undefined4 local_1ca4;
  undefined4 local_1ca0;
  undefined4 local_1c9c;
  undefined4 local_1c98;
  undefined4 local_1c94;
  undefined4 local_1c90;
  undefined4 local_1c8c;
  undefined4 local_1c88;
  undefined4 local_1c84;
  undefined4 local_1c80;
  undefined4 local_1c7c;
  undefined4 local_1c78;
  undefined4 local_1c74;
  undefined4 local_1c70;
  undefined4 local_1c6c;
  undefined4 local_1c68;
  undefined4 local_1c64;
  undefined4 local_1c60;
  undefined4 local_1c5c;
  undefined4 local_1c58;
  undefined4 local_1c54;
  undefined4 local_1c50;
  undefined4 local_1c4c;
  undefined4 local_1c48;
  undefined4 local_1c44;
  undefined4 local_1c40;
  undefined4 local_1c3c;
  undefined4 local_1c38;
  undefined4 local_1c34;
  undefined4 local_1c30;
  undefined4 local_1c2c;
  undefined4 local_1c28;
  undefined4 local_1c24;
  undefined4 local_1c20;
  undefined4 local_1c1c;
  undefined4 local_1c18;
  undefined4 local_1c14;
  undefined4 local_1c10;
  undefined4 local_1c0c;
  undefined4 local_1c08;
  undefined4 local_1c04;
  undefined4 local_1c00;
  undefined4 local_1bfc;
  undefined4 local_1bf8;
  undefined4 local_1bf4;
  undefined4 local_1bf0;
  undefined4 local_1bec;
  undefined4 local_1be8;
  undefined4 local_1be4;
  undefined4 local_1be0;
  undefined4 local_1bdc;
  undefined4 local_1bd8;
  undefined4 local_1bd4;
  undefined4 local_1bd0;
  undefined4 local_1bcc;
  undefined4 local_1bc8;
  undefined4 local_1bc4;
  undefined4 local_1bc0;
  undefined4 local_1bbc;
  undefined4 local_1bb8;
  undefined4 local_1bb4;
  undefined4 local_1bb0;
  undefined4 local_1bac;
  undefined4 local_1ba8;
  undefined4 local_1ba4;
  undefined4 local_1ba0;
  undefined4 local_1b9c;
  undefined4 local_1b98;
  undefined4 local_1b94;
  undefined4 local_1b90;
  undefined4 local_1b8c;
  undefined4 local_1b88;
  undefined4 local_1b84;
  undefined4 local_1b80;
  undefined4 local_1b7c;
  undefined4 local_1b78;
  undefined4 local_1b74;
  undefined4 local_1b70;
  undefined4 local_1b6c;
  undefined4 local_1b68;
  undefined4 local_1b64;
  undefined4 local_1b5c;
  undefined4 local_1b58;
  undefined4 local_1b54;
  undefined4 local_1b50;
  undefined4 local_1b4c;
  undefined4 local_1b48;
  undefined4 local_1b44;
  undefined4 local_1b40;
  undefined4 local_1b3c;
  undefined4 local_1b38;
  undefined4 local_1b34;
  undefined4 local_1b30;
  undefined4 local_1b2c;
  undefined4 local_1b28;
  undefined4 local_1b24;
  undefined4 local_1b20;
  undefined4 local_1b1c;
  undefined4 local_1b18;
  undefined4 local_1b14;
  undefined4 local_1b10;
  undefined4 local_1b0c;
  undefined4 local_1b08;
  undefined4 local_1b04;
  undefined4 local_1b00;
  undefined4 local_1afc;
  undefined4 local_1af8;
  undefined4 local_1af4;
  undefined4 local_1af0;
  undefined4 local_1aec;
  undefined4 local_1ae8;
  undefined4 local_1ae4;
  undefined4 local_1ae0;
  undefined4 local_1adc;
  undefined4 local_1ad8;
  undefined4 local_1ad4;
  undefined4 local_1ad0;
  undefined4 local_1acc;
  undefined4 local_1ac8;
  undefined4 local_1ac4;
  undefined4 local_1ac0;
  undefined4 local_1abc;
  undefined4 local_1ab8;
  undefined4 local_1ab4;
  undefined4 local_1ab0;
  undefined4 local_1aac;
  undefined4 local_1aa8;
  undefined4 local_1aa4;
  undefined4 local_1aa0;
  undefined4 local_1a9c;
  undefined4 local_1a98;
  undefined4 local_1a94;
  undefined4 local_1a90;
  undefined4 local_1a8c;
  undefined4 local_1a88;
  undefined4 local_1a84;
  undefined4 local_1a80;
  undefined4 local_1a7c;
  undefined4 local_1a78;
  undefined4 local_1a74;
  undefined4 local_1a70;
  undefined4 local_1a6c;
  undefined4 local_1a68;
  undefined4 local_1a64;
  undefined4 local_1a60;
  undefined4 local_1a5c;
  undefined4 local_1a58;
  undefined4 local_1a54;
  undefined4 local_1a50;
  undefined4 local_1a4c;
  undefined4 local_1a48;
  undefined4 local_1a44;
  undefined4 local_1a40;
  undefined4 local_1a3c;
  undefined4 local_1a38;
  undefined4 local_1a34;
  undefined4 local_1a30;
  undefined4 local_1a2c;
  undefined4 local_1a28;
  undefined4 local_1a24;
  undefined4 local_1a20;
  undefined4 local_1a1c;
  char local_1a14 [3072];
  char local_e14 [3072];
  char local_214 [256];
  char local_114 [256];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071f369;
  local_10 = ExceptionList;
  local_14 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_005ea9f0();
  local_8 = 0;
  FUN_005e9db0();
  local_8._0_1_ = 1;
  FUN_0052c050();
  local_8._0_1_ = 2;
  FUN_0052c050();
  local_8._0_1_ = 3;
  FUN_0052c050();
  local_8._0_1_ = 4;
  FUN_0052c050();
  local_8._0_1_ = 5;
  FUN_0052c050();
  local_8._0_1_ = 6;
  FUN_0052c050();
  local_8._0_1_ = 7;
  FUN_0052c050();
  local_8._0_1_ = 8;
  FUN_0052c050();
  local_8._0_1_ = 9;
  FUN_0052c050();
  local_8._0_1_ = 10;
  FUN_0052c050();
  local_8._0_1_ = 0xb;
  FUN_0052c050();
  local_8._0_1_ = 0xc;
  FUN_0052c050();
  local_8._0_1_ = 0xd;
  FUN_0052c050();
  local_8._0_1_ = 0xe;
  FUN_0052c050();
  local_8._0_1_ = 0xf;
  FUN_0052c050();
  local_8._0_1_ = 0x10;
  FUN_005ea860();
  local_8._0_1_ = 0x11;
  FUN_0052c050();
  local_8._0_1_ = 0x12;
  FUN_005e9db0();
  local_8._0_1_ = 0x13;
  FUN_005e9db0();
  local_8._0_1_ = 0x14;
  local_1b5c = 0;
  local_1b58 = 0x19;
  local_1b54 = 0x19;
  local_1b50 = 0x19;
  local_1b4c = 0x19;
  local_1b48 = 0x19;
  local_1b44 = 0x19;
  local_1b40 = 0x19;
  local_1b3c = 0x19;
  local_1b38 = 0x19;
  local_1b34 = 0x1e;
  local_1b30 = 0x1e;
  local_1b2c = 0x1e;
  local_1b28 = 0x1e;
  local_1b24 = 0x1e;
  local_1b20 = 0x1e;
  local_1b1c = 0x1e;
  local_1b18 = 0x1e;
  local_1b14 = 0x1e;
  local_1b10 = 0x1e;
  local_1b0c = 0x28;
  local_1b08 = 0x28;
  local_1b04 = 0x28;
  local_1b00 = 0x28;
  local_1afc = 0x28;
  local_1af8 = 0x28;
  local_1af4 = 0x28;
  local_1af0 = 0x28;
  local_1aec = 0x28;
  local_1ae8 = 0x28;
  local_1ae4 = 0x28;
  local_1ae0 = 0x28;
  local_1adc = 0x28;
  local_1ad8 = 0x28;
  local_1ad4 = 0x28;
  local_1ad0 = 0x2d;
  local_1acc = 0x2d;
  local_1ac8 = 0x2d;
  local_1ac4 = 0x2d;
  local_1ac0 = 0x2d;
  local_1abc = 0x2d;
  local_1ab8 = 0x2d;
  local_1ab4 = 0x2d;
  local_1ab0 = 0x2d;
  local_1aac = 0x2d;
  local_1aa8 = 0x2d;
  local_1aa4 = 0x2d;
  local_1aa0 = 0x2d;
  local_1a9c = 0x2d;
  local_1a98 = 0x2d;
  local_1a94 = 0x37;
  local_1a90 = 0x37;
  local_1a8c = 0x37;
  local_1a88 = 0x37;
  local_1a84 = 0x37;
  local_1a80 = 0x37;
  local_1a7c = 0x37;
  local_1a78 = 0x37;
  local_1a74 = 0x37;
  local_1a70 = 0x37;
  local_1a6c = 0x37;
  local_1a68 = 0x37;
  local_1a64 = 0x37;
  local_1a60 = 0x37;
  local_1a5c = 0x37;
  local_1a58 = 0x46;
  local_1a54 = 0x46;
  local_1a50 = 0x46;
  local_1a4c = 0x46;
  local_1a48 = 0x46;
  local_1a44 = 0x46;
  local_1a40 = 0x46;
  local_1a3c = 0x46;
  local_1a38 = 0x46;
  local_1a34 = 0x46;
  local_1a30 = 0x46;
  local_1a2c = 0x46;
  local_1a28 = 0x46;
  local_1a24 = 0x46;
  local_1a20 = 0x46;
  local_1a1c = 200;
  allocator<>();
  FUN_00401880();
  FUN_0051a0b0();
  local_8._0_1_ = 0x15;
  local_1cf0 = 0x1e;
  local_1cec = 0x28;
  local_1ce8 = 0x32;
  local_1ce4 = 0x3c;
  local_1ce0 = 0x46;
  local_1cdc = 0x50;
  local_1cd8 = 0x5a;
  local_1cd4 = 100;
  local_1cd0 = 0x6e;
  local_1ccc = 0x78;
  local_1cc8 = 0x82;
  local_1cc4 = 0x8c;
  local_1cc0 = 0x96;
  local_1cbc = 0xa0;
  local_1cb8 = 0xaa;
  local_1cb4 = 0xb9;
  local_1cb0 = 0xc9;
  local_1cac = 0xda;
  local_1ca8 = 0xeb;
  local_1ca4 = 0xfd;
  local_1ca0 = 0x10f;
  local_1c9c = 0x122;
  local_1c98 = 0x136;
  local_1c94 = 0x14a;
  local_1c90 = 0x15f;
  local_1c8c = 0x174;
  local_1c88 = 0x18a;
  local_1c84 = 0x1a1;
  local_1c80 = 0x1b8;
  local_1c7c = 0x1d0;
  local_1c78 = 0x1e8;
  local_1c74 = 0x201;
  local_1c70 = 0x21b;
  local_1c6c = 0x235;
  local_1c68 = 0x250;
  local_1c64 = 0x26b;
  local_1c60 = 0x287;
  local_1c5c = 0x2a4;
  local_1c58 = 0x2c1;
  local_1c54 = 0x2df;
  local_1c50 = 0x2fd;
  local_1c4c = 0x31c;
  local_1c48 = 0x33c;
  local_1c44 = 0x35c;
  local_1c40 = 0x37d;
  local_1c3c = 0x39e;
  local_1c38 = 0x3c0;
  local_1c34 = 0x3e3;
  local_1c30 = 0x406;
  local_1c2c = 0x42a;
  local_1c28 = 0x44e;
  local_1c24 = 0x473;
  local_1c20 = 0x499;
  local_1c1c = 0x4bf;
  local_1c18 = 0x4e6;
  local_1c14 = 0x50d;
  local_1c10 = 0x535;
  local_1c0c = 0x55e;
  local_1c08 = 0x587;
  local_1c04 = 0x5b1;
  local_1c00 = 0x5db;
  local_1bfc = 0x606;
  local_1bf8 = 0x632;
  local_1bf4 = 0x65e;
  local_1bf0 = 0x68b;
  local_1bec = 0x6b8;
  local_1be8 = 0x6e6;
  local_1be4 = 0x715;
  local_1be0 = 0x744;
  local_1bdc = 0x774;
  local_1bd8 = 0x7a4;
  local_1bd4 = 0x7d5;
  local_1bd0 = 0x807;
  local_1bcc = 0x839;
  local_1bc8 = 0x86c;
  local_1bc4 = 0x89f;
  local_1bc0 = 0x8d3;
  local_1bbc = 0x908;
  local_1bb8 = 0x93d;
  local_1bb4 = 0x973;
  local_1bb0 = 0x9a9;
  local_1bac = 0x9e0;
  local_1ba8 = 0xa18;
  local_1ba4 = 0xa50;
  local_1ba0 = 0xa89;
  local_1b9c = 0xac2;
  local_1b98 = 0xafc;
  local_1b94 = 0xb37;
  local_1b90 = 0xb72;
  local_1b8c = 0xbae;
  local_1b88 = 0xbea;
  local_1b84 = 0xc27;
  local_1b80 = 0xc65;
  local_1b7c = 0xca3;
  local_1b78 = 0xce2;
  local_1b74 = 0xd21;
  local_1b70 = 0xd61;
  local_1b6c = 0xda2;
  local_1b68 = 0xde3;
  local_1b64 = 0xdf7;
  allocator<>();
  FUN_00401880();
  FUN_0051a0b0();
  local_8._0_1_ = 0x16;
  FUN_005ea7e0();
  local_8._0_1_ = 0x17;
  FUN_005ea7e0();
  local_8 = CONCAT31(local_8._1_3_,0x18);
  pFVar2 = _fopen(PTR_s_Script_etc_ZJX_ZJX_007c6434,"rb");
  *(FILE **)(local_1d54 + 0x20) = pFVar2;
  if (*(int *)(local_1d54 + 0x20) == 0) {
    MessageBoxA((HWND)0x0,&DAT_0075ca74,(LPCSTR)0x0,0);
  }
  else {
    local_1e60 = FUN_004054a0();
    local_1d5f = FUN_00427c60();
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_1d50);
    if (local_1d5f != '\0') {
      FUN_006e9723();
      _fread((void *)(local_1d54 + 0x30),4,1,*(FILE **)(local_1d54 + 0x20));
      _fread((void *)(local_1d54 + 0x34),4,1,*(FILE **)(local_1d54 + 0x20));
      _fread((void *)(local_1d54 + 0x38),4,1,*(FILE **)(local_1d54 + 0x20));
      local_1d8c = (uint *)FUN_006f191d();
      _fread(local_1d8c,1,*(size_t *)(local_1d54 + 0x30),*(FILE **)(local_1d54 + 0x20));
      local_1d58 = local_1d8c;
      for (local_1d9c = 0; local_1d9c < *(uint *)(local_1d54 + 0x30) >> 2;
          local_1d9c = local_1d9c + 1) {
        uVar3 = *local_1d58 ^ *(uint *)(local_1d54 + 0x34);
        local_1d90 = uVar3 >> 6 ^ uVar3 << 0x1a;
        *local_1d58 = local_1d90;
        local_1d58 = local_1d58 + 1;
      }
      local_1d58 = local_1d8c;
      for (local_1da0 = 0; local_1da0 < *(uint *)(local_1d54 + 0x38); local_1da0 = local_1da0 + 1) {
        local_1dcc = 0;
        local_1dc8 = 0;
        local_1de0[0] = *local_1d58;
        local_1de0[1] = local_1d58[1];
        local_1de0[2] = local_1d58[2];
        local_1de0[3] = local_1d58[3];
        local_1dd0 = local_1d58[4];
        local_1d58 = local_1d58 + 5;
        local_1dcc = FUN_006f191d();
        FUN_006e6bd0();
        *(undefined1 *)(local_1dcc + local_1dd0) = 0;
        local_1d58 = (uint *)((int)local_1d58 + local_1dd0);
        local_1e78 = FUN_004054a0();
        local_8._0_1_ = 0x19;
        local_1e74 = local_1e78;
        puVar4 = (uint *)FUN_005ea9c0();
        puVar7 = local_1de0;
        for (iVar6 = 7; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar4 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar4 = puVar4 + 1;
        }
        local_8 = CONCAT31(local_8._1_3_,0x18);
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_1d38);
      }
      FUN_006f1902();
    }
    local_1e00 = "quest/quest.lst";
    local_1e04 = "creature/creature.lst";
    local_1e10 = "skill/skilllist.lst";
    local_1e7c = "string.lst";
    local_1e14 = "equipment/equipment.lst";
    local_1e2c = "map/map.lst";
    local_1e30 = "character/character.lst";
    local_1e34 = "town/town.lst";
    local_1e38 = "npc/npc.lst";
    local_1e3c = "stackable/stackable.lst";
    local_1e50 = "itemshop/itemshop.lst";
    local_1e54 = "worldmap/worldmap.lst";
    local_1e58 = "dungeon/dungeon.lst";
    local_1e5c = "passiveobject/passiveobject.lst";
    local_1e70 = "monster/monster.lst";
    FUN_0059cb00();
    local_1da4 = FUN_00518330();
    local_1d94 = (uint *)FUN_006e5209();
    local_8._0_1_ = 0x1a;
    if (local_1d94 == (uint *)0x0) {
      local_1db8 = (uint *)0x0;
    }
    else {
      *local_1d94 = local_1da4;
      _eh_vector_constructor_iterator_(local_1d94 + 1,8,local_1da4,FUN_005e9d00,FUN_0059cab0);
      local_1db8 = local_1d94 + 1;
    }
    local_1e80 = local_1db8;
    local_8 = CONCAT31(local_8._1_3_,0x18);
    *(uint **)(local_1d54 + 0x3c) = local_1db8;
    local_1d88 = 0;
    while (uVar3 = FUN_00518330(), local_1d88 < uVar3) {
      local_1e84 = local_1d88;
      FUN_005ea8b0(&local_1e84);
      uVar5 = npk_get_relative_res_path();
      FUN_004054a0(uVar5);
      local_1da8 = etc_file_get_size_or_data();
      local_1d64 = *(char **)(local_1da8 + 0x18);
      while (local_1d64 = (char *)config_section_span_helper(), local_1d64 != (char *)0x0) {
        FUN_004a1ba0();
        FUN_004054a0();
        local_8._0_1_ = 0x1b;
        FUN_005ea750();
        FUN_004053a0();
        local_8 = CONCAT31(local_8._1_3_,0x18);
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_1d08);
        local_1d84 = local_114;
        do {
          cVar1 = *local_1d84;
          local_1d84 = local_1d84 + 1;
        } while (cVar1 != '\0');
        local_1d80 = local_1a14;
        do {
          cVar1 = *local_1d80;
          local_1d80 = local_1d80 + 1;
        } while (cVar1 != '\0');
        local_1de4 = (int)local_1d80 - (int)(local_1a14 + 1);
        local_1d64 = local_1d84 + local_1de4 + ((int)local_1d64 - (int)(local_114 + 1)) + 3;
        local_1d59 = 0;
        local_1d5a = 0;
      }
      local_1d88 = local_1d88 + 1;
      local_1d64 = (char *)0x0;
    }
    local_1d6c = _fopen("Script\\etc\\creaturechn.zjx","rb");
    FUN_006e9723();
    local_1dac = FUN_006e92b5();
    FUN_006e9723();
    local_1d68 = (void *)FUN_006f191d();
    local_1de8 = _fread(local_1d68,1,local_1dac,local_1d6c);
    *(undefined1 *)((int)local_1d68 + local_1de8) = 0;
    FUN_006e940a();
    local_1d74 = local_1d68;
    local_1dbc = *(int *)(local_1d54 + 0x3c) + 0x80;
    FUN_0044dff0();
    FUN_0044dfd0();
    while (cVar1 = FUN_0044dd70(), cVar1 != '\0') {
      local_1dc0 = FUN_0044dd50();
      npk_get_relative_res_path();
      local_1d74 = (void *)config_find_section_marker();
      if (local_1d74 == (void *)0x0) {
        FUN_005a78f0();
      }
      FUN_004a1ba0();
      local_1dec = FUN_004054a0();
      FUN_004053e0();
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_1d20);
      local_1d7c = local_214;
      local_1df0 = local_214 + 1;
      do {
        local_1d5c = *local_1d7c;
        local_1d7c = local_1d7c + 1;
      } while (local_1d5c != '\0');
      local_1df8 = (int)local_1d7c - (int)local_1df0;
      local_1d78 = local_e14;
      local_1df4 = local_e14 + 1;
      do {
        local_1d5e = *local_1d78;
        local_1d78 = local_1d78 + 1;
      } while (local_1d5e != '\0');
      local_1dfc = (int)local_1d78 - (int)local_1df4;
      local_1d74 = (void *)((int)local_1d74 + local_1df8 + local_1dfc + 3);
      FUN_0044dd30();
    }
    FUN_006f1902();
    FUN_006e940a();
    FUN_0059cb00();
    FUN_0059cb00();
    local_1e08 = 0x2a;
    FUN_005ea8b0();
    FUN_004053a0();
    local_1e0c = 0x2b;
    FUN_005ea8b0();
    FUN_004053a0();
    FUN_0059cb00();
    local_1dc4 = local_1d54 + 0xbc;
    FUN_0044dff0();
    FUN_0044dfd0();
    while (cVar1 = FUN_0044dd70(), cVar1 != '\0') {
      local_1d70 = FUN_0044dd50();
      FUN_004cc400();
      FUN_004cc1a0();
      FUN_004cc400();
      FUN_005ee350();
      FUN_005191a0();
      npk_get_relative_res_path();
      FUN_0059cb00();
      FUN_0044dd30();
    }
    FUN_0059cb00();
    local_1e18 = 0xf4241;
    FUN_005ea8b0();
    FUN_004053a0();
    local_1e1c = 0x1e8481;
    FUN_005ea8b0();
    FUN_004053a0();
    local_1e20 = 0x1e8482;
    FUN_005ea8b0();
    FUN_004053a0();
    local_1e24 = 0x1e8483;
    FUN_005ea8b0();
    FUN_004053a0();
    local_1e28 = 0x1e8484;
    FUN_005ea8b0();
    FUN_004053a0();
    FUN_0059cb00();
    FUN_0059cb00();
    FUN_0059cb00();
    FUN_0059cb00();
    FUN_0059cb00();
    local_1e40 = 0x1c69;
    FUN_005ea8b0();
    FUN_004053a0();
    local_1e44 = 0x1c6a;
    FUN_005ea8b0();
    FUN_004053a0();
    local_1e48 = 0x1c6b;
    FUN_005ea8b0();
    FUN_004053a0();
    local_1e4c = 0x2e2;
    FUN_005ea8b0();
    FUN_004053a0();
    FUN_0059cb00();
    FUN_0059cb00();
    FUN_0059cb00();
    FUN_0059cb00();
    FUN_0059cb00();
    local_1e64 = "character/exptable.tbl";
    FUN_005a7910();
    local_1e68 = "creature/exptable.tbl";
    FUN_005a7910();
    local_1e6c = "etc/compoundavatar.etc";
    FUN_0059cb00();
    parse_server_config_section();
    FUN_005dc8e0();
    FUN_005dd0d0();
    FUN_005dd270();
    FUN_005dde70();
    FUN_005de360();
    FUN_005ded70();
  }
  ExceptionList = local_10;
  return local_1d54;
}


/* ==== 006659c0  FUN_006659c0  size=2504 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_006659c0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 auStack_308 [6];
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  int iStack_2e8;
  char *pcStack_2e4;
  uint uStack_2e0;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined4 local_1e8;
  int local_1e4;
  undefined4 local_1e0;
  int local_1dc;
  undefined4 local_1d8;
  int local_1d4;
  undefined4 local_1d0;
  int local_1cc;
  undefined4 local_1c8;
  int local_1c4;
  undefined4 local_1c0;
  int local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  int local_1b0;
  int local_1ac;
  undefined1 local_1a8 [308];
  undefined1 local_74 [32];
  undefined1 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00726f7a;
  local_10 = ExceptionList;
  uStack_2e0 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_1b4 = 0x1644;
  pcStack_2e4 = (char *)&local_1b4;
  iStack_2e8 = 0x665a08;
  local_14 = uStack_2e0;
  pcStack_2e4 = (char *)game_timing_or_delay_helper();
  iStack_2e8 = 0x665a0e;
  ui_close_matching_widgets();
  local_1ac = 0;
  local_1b8 = 0x1644;
  pcStack_2e4 = (char *)&local_1b8;
  iStack_2e8 = 0x665a36;
  pcStack_2e4 = (char *)game_timing_or_delay_helper();
  iStack_2e8 = local_1ac * 0x15 + DAT_007ca720;
  uStack_2ec = DAT_007ca71c;
  uStack_2f0 = 0x67;
  FUN_004054a0();
  local_8 = 0;
  FUN_004054a0();
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_004054a0(&DAT_0076fa50);
  local_8 = 0xffffffff;
  local_1bc = FUN_00661cc0(0,0);
  pcStack_2e4 = (char *)0x665ad5;
  local_1b0 = local_1bc;
  FUN_0040ac90();
  local_8 = 2;
  pcStack_2e4 = (char *)0x665ae4;
  FUN_0040aa90();
  local_8._0_1_ = 3;
  pcStack_2e4 = "sprite/character/defaultfaces.img";
  iStack_2e8 = 0x665af5;
  FUN_004053a0();
  local_54 = *(undefined1 *)(param_1 + 0xab8);
  local_50 = 2;
  local_4c = 2;
  local_48 = 0x3f4ccccd;
  local_44 = 0x3f4ccccd;
  pcStack_2e4 = local_74;
  iStack_2e8 = 0x665b39;
  FUN_00427660();
  pcStack_2e4 = local_1a8;
  iStack_2e8 = 0x665b51;
  FUN_00405250();
  pcStack_2e4 = (char *)(param_1 + 0xa98);
  iStack_2e8 = 0x665b6b;
  FUN_004053a0();
  *(undefined4 *)(local_1b0 + 0xa40) = 0x3c;
  *(undefined4 *)(local_1b0 + 0xa44) = 5;
  *(undefined4 *)(local_1b0 + 0xa48) = 0xffe6c89c;
  *(undefined4 *)(local_1b0 + 0xa64) = 1;
  local_1ac = local_1ac + 1;
  local_1c0 = 0x1644;
  pcStack_2e4 = (char *)&local_1c0;
  iStack_2e8 = 0x665bd5;
  pcStack_2e4 = (char *)game_timing_or_delay_helper();
  iStack_2e8 = local_1ac * 0x15 + DAT_007ca720;
  uStack_2ec = DAT_007ca71c;
  uStack_2f0 = 0x7d;
  FUN_004054a0();
  local_8._0_1_ = 4;
  FUN_004054a0();
  local_8._0_1_ = 5;
  FUN_004054a0(&DAT_0076fa8c);
  local_8._0_1_ = 3;
  local_1c4 = FUN_00661cc0(0,2);
  *(undefined4 *)(local_1c4 + 0x984) = 0x184ac;
  *(undefined4 *)(local_1c4 + 0x9a0) = *(undefined4 *)(param_1 + 0x1e8);
  local_1ac = local_1ac + 1;
  local_1c8 = 0x1644;
  pcStack_2e4 = (char *)&local_1c8;
  iStack_2e8 = 0x665cb3;
  local_1b0 = local_1c4;
  pcStack_2e4 = (char *)game_timing_or_delay_helper();
  iStack_2e8 = local_1ac * 0x15 + DAT_007ca720;
  uStack_2ec = DAT_007ca71c;
  uStack_2f0 = 0x1b;
  FUN_004054a0();
  local_8._0_1_ = 6;
  FUN_004054a0();
  local_8._0_1_ = 7;
  FUN_004054a0(&DAT_0076fafc);
  local_8._0_1_ = 3;
  local_1cc = FUN_00661cc0(0,2);
  *(undefined4 *)(local_1cc + 0x984) = 4000;
  *(undefined4 *)(local_1cc + 0x9a0) = *(undefined4 *)(param_1 + 0x1e8);
  local_1ac = local_1ac + 1;
  local_1d0 = 0x1644;
  pcStack_2e4 = (char *)&local_1d0;
  iStack_2e8 = 0x665d91;
  local_1b0 = local_1cc;
  pcStack_2e4 = (char *)game_timing_or_delay_helper();
  iStack_2e8 = local_1ac * 0x15 + DAT_007ca720;
  uStack_2ec = DAT_007ca71c;
  uStack_2f0 = 0x21;
  FUN_004054a0();
  local_8._0_1_ = 8;
  FUN_004054a0();
  local_8._0_1_ = 9;
  FUN_004054a0(&DAT_0076fb50);
  local_8._0_1_ = 3;
  local_1d4 = FUN_00661cc0(0,2);
  *(undefined4 *)(local_1d4 + 0x984) = 0x456;
  local_1ac = local_1ac + 1;
  local_1d8 = 0x1644;
  pcStack_2e4 = (char *)&local_1d8;
  iStack_2e8 = 0x665e5a;
  local_1b0 = local_1d4;
  pcStack_2e4 = (char *)game_timing_or_delay_helper();
  iStack_2e8 = local_1ac * 0x15 + DAT_007ca720;
  uStack_2ec = DAT_007ca71c;
  uStack_2f0 = 0x1e;
  FUN_004054a0();
  local_8._0_1_ = 10;
  FUN_004054a0();
  local_8._0_1_ = 0xb;
  FUN_004054a0(&DAT_0076fb9c);
  local_8._0_1_ = 3;
  local_1dc = FUN_00661cc0(0,2);
  *(undefined4 *)(local_1dc + 0x984) = 0x474;
  local_1ac = local_1ac + 1;
  local_1e0 = 0x1644;
  pcStack_2e4 = (char *)&local_1e0;
  iStack_2e8 = 0x665f23;
  local_1b0 = local_1dc;
  pcStack_2e4 = (char *)game_timing_or_delay_helper();
  iStack_2e8 = local_1ac * 0x15 + DAT_007ca720;
  uStack_2ec = DAT_007ca71c;
  uStack_2f0 = 0;
  FUN_004054a0();
  local_8._0_1_ = 0xc;
  FUN_004054a0();
  local_8._0_1_ = 0xd;
  FUN_004054a0(&DAT_0076fb64);
  local_8._0_1_ = 3;
  local_1e4 = FUN_00661cc0(0,2);
  *(undefined4 *)(local_1e4 + 0x984) = 0x1ae;
  *(undefined4 *)(local_1e4 + 0x9a0) = *(undefined4 *)(param_1 + 0x1e8);
  local_1ac = local_1ac + 1;
  local_1e8 = 0x1644;
  pcStack_2e4 = (char *)&local_1e8;
  iStack_2e8 = 0x666001;
  local_1b0 = local_1e4;
  pcStack_2e4 = (char *)game_timing_or_delay_helper();
  iStack_2e8 = local_1ac * 0x15 + DAT_007ca720;
  uStack_2ec = DAT_007ca71c;
  uStack_2f0 = 0x83;
  FUN_004054a0();
  local_8._0_1_ = 0xe;
  FUN_004054a0();
  local_8._0_1_ = 0xf;
  FUN_004054a0(&DAT_0076fbc0);
  local_8._0_1_ = 3;
  FUN_00661cc0(0,2);
  local_1ac = local_1ac + 1;
  local_1ec = 0x1644;
  pcStack_2e4 = (char *)&local_1ec;
  iStack_2e8 = 0x6660ab;
  pcStack_2e4 = (char *)game_timing_or_delay_helper();
  iStack_2e8 = local_1ac * 0x15 + DAT_007ca720;
  uStack_2ec = DAT_007ca71c;
  uStack_2f0 = 0xa2;
  FUN_004054a0();
  local_8._0_1_ = 0x10;
  FUN_004054a0();
  local_8._0_1_ = 0x11;
  FUN_004054a0(&DAT_0076fc14);
  local_8._0_1_ = 3;
  FUN_00661cc0(0,2);
  local_1ac = local_1ac + 1;
  local_1f0 = 0x1644;
  pcStack_2e4 = (char *)&local_1f0;
  iStack_2e8 = 0x666154;
  pcStack_2e4 = (char *)game_timing_or_delay_helper();
  iStack_2e8 = local_1ac * 0x15 + DAT_007ca720;
  uStack_2ec = DAT_007ca71c;
  uStack_2f0 = 0xa5;
  FUN_004054a0();
  local_8._0_1_ = 0x12;
  FUN_004054a0();
  local_8._0_1_ = 0x13;
  FUN_004054a0(&DAT_0076fc5c);
  local_8._0_1_ = 3;
  FUN_00661cc0(0,2);
  local_1ac = local_1ac + 1;
  local_1f4 = 0x1644;
  pcStack_2e4 = (char *)&local_1f4;
  iStack_2e8 = 0x6661fe;
  pcStack_2e4 = (char *)game_timing_or_delay_helper();
  iStack_2e8 = local_1ac * 0x15 + DAT_007ca720;
  uStack_2ec = DAT_007ca71c;
  uStack_2f0 = 0xb8;
  FUN_004054a0();
  local_8._0_1_ = 0x14;
  FUN_004054a0();
  local_8._0_1_ = 0x15;
  FUN_004054a0(&DAT_0076fc28);
  local_8._0_1_ = 3;
  FUN_00661cc0(0,2);
  local_1ac = local_1ac + 1;
  local_1f8 = 0x1644;
  pcStack_2e4 = (char *)&local_1f8;
  iStack_2e8 = 0x6662a8;
  pcStack_2e4 = (char *)game_timing_or_delay_helper();
  iStack_2e8 = local_1ac * 0x15 + DAT_007ca720;
  uStack_2ec = DAT_007ca71c;
  uStack_2f0 = 200;
  FUN_004054a0();
  local_8._0_1_ = 0x16;
  FUN_004054a0();
  local_8._0_1_ = 0x17;
  FUN_004054a0(&DAT_0076fc88);
  local_8 = CONCAT31(local_8._1_3_,3);
  FUN_00661cc0(0,2);
  pcStack_2e4 = (char *)DAT_007ca768;
  iStack_2e8 = DAT_007ca764;
  puVar2 = &DAT_007ca70c;
  puVar3 = auStack_308;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_0065e180();
  local_8 = CONCAT31(local_8._1_3_,2);
  pcStack_2e4 = (char *)0x66635a;
  FUN_00407a80();
  local_8 = 0xffffffff;
  pcStack_2e4 = (char *)0x66636c;
  FUN_00403a10();
  ExceptionList = local_10;
  return;
}


