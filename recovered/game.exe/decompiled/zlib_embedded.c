/* Auto-decompiled pseudo-code from game.exe / zlib_embedded */
/* NOT original source. Bucketed by evidence (strings/imports/call-graph), not raw address. */

/* ==== 006ce780  FUN_006ce780  size=36 ==== */

void FUN_006ce780(int param_1)

{
  *(undefined **)(param_1 + 0x50) = &DAT_0072b388;
  *(undefined4 *)(param_1 + 0x58) = 9;
  *(undefined **)(param_1 + 0x54) = &DAT_0072bb88;
  *(undefined4 *)(param_1 + 0x5c) = 5;
  return;
}


/* ==== 006ce7b0  zlib_inflate  size=5955 ==== */

int zlib_inflate(undefined4 *param_1,int param_2)

{
  int *piVar1;
  uint *puVar2;
  byte bVar3;
  undefined2 uVar4;
  uint uVar5;
  int iVar6;
  ushort uVar7;
  char cVar8;
  short sVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  byte bVar13;
  int extraout_ECX;
  undefined4 *puVar14;
  uint extraout_EDX;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  byte *pbVar24;
  byte *pbVar25;
  undefined8 uVar26;
  uint local_38;
  int local_34;
  uint local_30;
  uint local_2c;
  undefined1 *local_28;
  undefined2 local_24;
  undefined1 local_22;
  undefined1 local_21;
  uint local_20;
  uint local_1c;
  byte *local_18;
  uint local_14;
  int local_10;
  uint local_c;
  byte local_5;
  
  uVar26 = inflateStateCheck(param_1);
  puVar14 = (undefined4 *)((ulonglong)uVar26 >> 0x20);
  if ((((int)uVar26 == 0) && (local_28 = (undefined1 *)puVar14[3], local_28 != (undefined1 *)0x0))
     && ((local_18 = (byte *)*puVar14, local_18 != (byte *)0x0 || (puVar14[1] == 0)))) {
    iVar17 = puVar14[7];
    local_30 = *(int *)(iVar17 + 4);
    if (local_30 == 0x3f3f) {
      *(undefined4 *)(iVar17 + 4) = 0x3f40;
      local_28 = (undefined1 *)puVar14[3];
      local_18 = (byte *)*puVar14;
      local_30 = 0x3f40;
    }
    local_2c = puVar14[4];
    uVar5 = puVar14[1];
    uVar16 = *(uint *)(iVar17 + 0x3c);
    uVar19 = *(uint *)(iVar17 + 0x40);
    local_34 = 0;
    local_10 = iVar17;
    local_20 = local_2c;
    uVar18 = uVar5;
    local_14 = uVar5;
    local_c = uVar16;
    local_1c = uVar19;
    pbVar25 = local_18;
    do {
      switch(local_30) {
      case 0x3f34:
        puVar2 = (uint *)(iVar17 + 0xc);
        if (*puVar2 == 0) {
          *(undefined4 *)(iVar17 + 4) = 0x3f40;
        }
        else {
          while (uVar19 < 0x10) {
            if (uVar18 == 0) goto LAB_006cedaf;
            uVar18 = uVar18 - 1;
            uVar16 = uVar16 + ((uint)*pbVar25 << ((byte)uVar19 & 0x1f));
            pbVar25 = pbVar25 + 1;
            uVar19 = uVar19 + 8;
            iVar17 = local_10;
            local_14 = uVar18;
            local_c = uVar16;
            local_1c = uVar19;
            local_18 = pbVar25;
          }
          if (((*puVar2 & 2) == 0) || (uVar16 != 0x8b1f)) {
            if (*(int *)(iVar17 + 0x24) != 0) {
              *(undefined4 *)(*(int *)(iVar17 + 0x24) + 0x30) = 0xffffffff;
            }
            if (((*(uint *)(iVar17 + 0xc) & 1) == 0) ||
               (uVar15 = uVar16 & 0xff, uVar23 = uVar16 >> 8, iVar17 = local_10, uVar16 = local_c,
               (uVar23 + uVar15 * 0x100) % 0x1f != 0)) {
              param_1[6] = "incorrect header check";
              *(undefined4 *)(iVar17 + 4) = 0x3f51;
            }
            else {
              if (((byte)local_c & 0xf) != 8) goto LAB_006ce93e;
              uVar19 = uVar19 - 4;
              uVar16 = local_c >> 4;
              uVar23 = (uVar16 & 0xf) + 8;
              local_38 = *(uint *)(local_10 + 0x28);
              if (*(uint *)(local_10 + 0x28) == 0) {
                *(uint *)(local_10 + 0x28) = uVar23;
                local_38 = uVar23;
              }
              pbVar25 = local_18;
              local_1c = uVar19;
              local_c = uVar16;
              if ((uVar23 < 0x10) && (uVar23 <= local_38)) {
                *(int *)(local_10 + 0x18) = 1 << (sbyte)uVar23;
                *(undefined4 *)(local_10 + 0x14) = 0;
                uVar11 = FUN_006d0390(0,0,0);
                *(undefined4 *)(local_10 + 0x1c) = uVar11;
                param_1[0xc] = uVar11;
                *(uint *)(local_10 + 4) = ~(local_c >> 8) & 2 | 0x3f3d;
                uVar16 = 0;
                uVar19 = 0;
                local_c = 0;
                local_1c = 0;
                iVar17 = local_10;
              }
              else {
                param_1[6] = "invalid window size";
                *(undefined4 *)(local_10 + 4) = 0x3f51;
              }
            }
          }
          else {
            if (*(int *)(iVar17 + 0x28) == 0) {
              *(undefined4 *)(iVar17 + 0x28) = 0xf;
            }
            uVar11 = FUN_006d0620(0,0,0);
            *(undefined4 *)(local_10 + 0x1c) = uVar11;
            local_24 = 0x8b1f;
            uVar11 = FUN_006d0620(*(undefined4 *)(local_10 + 0x1c),&local_24,2);
            uVar16 = 0;
            uVar19 = 0;
            local_c = 0;
            local_1c = 0;
            *(undefined4 *)(local_10 + 0x1c) = uVar11;
            *(undefined4 *)(local_10 + 4) = 0x3f35;
            iVar17 = local_10;
          }
        }
        break;
      case 0x3f35:
        while (uVar19 < 0x10) {
          if (uVar18 == 0) goto LAB_006cedaf;
          uVar18 = uVar18 - 1;
          uVar16 = uVar16 + ((uint)*pbVar25 << ((byte)uVar19 & 0x1f));
          pbVar25 = pbVar25 + 1;
          uVar19 = uVar19 + 8;
          iVar17 = local_10;
          local_14 = uVar18;
          local_c = uVar16;
          local_1c = uVar19;
          local_18 = pbVar25;
        }
        *(uint *)(iVar17 + 0x14) = uVar16;
        if ((char)uVar16 == '\b') {
          if ((uVar16 & 0xe000) == 0) {
            local_38 = uVar16;
            if (*(uint **)(iVar17 + 0x24) != (uint *)0x0) {
              **(uint **)(iVar17 + 0x24) = uVar16 >> 8 & 1;
              local_38 = *(uint *)(iVar17 + 0x14);
            }
            if (((local_38 & 0x200) != 0) && ((*(byte *)(iVar17 + 0xc) & 4) != 0)) {
              local_24 = (undefined2)uVar16;
              uVar11 = FUN_006d0620(*(undefined4 *)(iVar17 + 0x1c),&local_24,2);
              *(undefined4 *)(local_10 + 0x1c) = uVar11;
              iVar17 = local_10;
            }
            uVar16 = 0;
            *(undefined4 *)(iVar17 + 4) = 0x3f36;
            local_c = 0;
            uVar19 = 0;
            do {
              if (uVar18 == 0) goto LAB_006cedaf;
              uVar18 = uVar18 - 1;
              uVar16 = uVar16 + ((uint)*pbVar25 << ((byte)uVar19 & 0x1f));
              pbVar25 = pbVar25 + 1;
              uVar19 = uVar19 + 8;
              iVar17 = local_10;
              local_14 = uVar18;
              local_c = uVar16;
              local_18 = pbVar25;
joined_r0x006ceac0:
            } while (uVar19 < 0x20);
            if (*(int *)(iVar17 + 0x24) != 0) {
              *(uint *)(*(int *)(iVar17 + 0x24) + 4) = uVar16;
            }
            if (((*(uint *)(iVar17 + 0x14) & 0x200) != 0) && ((*(byte *)(iVar17 + 0xc) & 4) != 0)) {
              local_24 = (undefined2)uVar16;
              local_22 = (undefined1)(uVar16 >> 0x10);
              local_21 = (undefined1)(uVar16 >> 0x18);
              uVar11 = FUN_006d0620(*(undefined4 *)(iVar17 + 0x1c),&local_24,4);
              *(undefined4 *)(local_10 + 0x1c) = uVar11;
              iVar17 = local_10;
            }
            uVar16 = 0;
            *(undefined4 *)(iVar17 + 4) = 0x3f37;
            local_c = 0;
            uVar19 = 0;
            do {
              if (uVar18 == 0) goto LAB_006cedaf;
              uVar18 = uVar18 - 1;
              uVar16 = uVar16 + ((uint)*pbVar25 << ((byte)uVar19 & 0x1f));
              pbVar25 = pbVar25 + 1;
              uVar19 = uVar19 + 8;
              iVar17 = local_10;
              local_14 = uVar18;
              local_c = uVar16;
              local_18 = pbVar25;
joined_r0x006ceb42:
            } while (uVar19 < 0x10);
            if (*(int *)(iVar17 + 0x24) != 0) {
              *(uint *)(*(int *)(iVar17 + 0x24) + 8) = uVar16 & 0xff;
              *(uint *)(*(int *)(iVar17 + 0x24) + 0xc) = uVar16 >> 8;
            }
            if (((*(uint *)(iVar17 + 0x14) & 0x200) != 0) && ((*(byte *)(iVar17 + 0xc) & 4) != 0)) {
              local_24 = (undefined2)uVar16;
              uVar11 = FUN_006d0620(*(undefined4 *)(iVar17 + 0x1c),&local_24,2);
              *(undefined4 *)(local_10 + 0x1c) = uVar11;
              iVar17 = local_10;
            }
            uVar16 = 0;
            *(undefined4 *)(iVar17 + 4) = 0x3f38;
            uVar19 = 0;
            local_c = 0;
            local_1c = 0;
            goto switchD_006ce850_caseD_3f38;
          }
          param_1[6] = "unknown header flags set";
          *(undefined4 *)(iVar17 + 4) = 0x3f51;
        }
        else {
LAB_006ce93e:
          param_1[6] = "unknown compression method";
          *(undefined4 *)(iVar17 + 4) = 0x3f51;
        }
        break;
      case 0x3f36:
        goto joined_r0x006ceac0;
      case 0x3f37:
        goto joined_r0x006ceb42;
      case 0x3f38:
switchD_006ce850_caseD_3f38:
        if ((*(uint *)(iVar17 + 0x14) & 0x400) == 0) {
          if (*(int *)(iVar17 + 0x24) != 0) {
            *(undefined4 *)(*(int *)(iVar17 + 0x24) + 0x10) = 0;
          }
        }
        else {
          for (; uVar19 < 0x10; uVar19 = uVar19 + 8) {
            if (uVar18 == 0) goto LAB_006cedaf;
            uVar18 = uVar18 - 1;
            uVar16 = uVar16 + ((uint)*pbVar25 << ((byte)uVar19 & 0x1f));
            pbVar25 = pbVar25 + 1;
            iVar17 = local_10;
            local_18 = pbVar25;
            local_14 = uVar18;
            local_c = uVar16;
          }
          *(uint *)(iVar17 + 0x44) = uVar16;
          if (*(int *)(iVar17 + 0x24) != 0) {
            *(uint *)(*(int *)(iVar17 + 0x24) + 0x14) = uVar16;
          }
          if (((*(uint *)(iVar17 + 0x14) & 0x200) != 0) && ((*(byte *)(iVar17 + 0xc) & 4) != 0)) {
            local_24 = (undefined2)uVar16;
            uVar11 = FUN_006d0620(*(undefined4 *)(iVar17 + 0x1c),&local_24,2);
            *(undefined4 *)(local_10 + 0x1c) = uVar11;
            iVar17 = local_10;
          }
          uVar19 = 0;
          local_c = 0;
          local_1c = 0;
        }
        *(undefined4 *)(iVar17 + 4) = 0x3f39;
      case 0x3f39:
        pbVar24 = local_18;
        if ((*(uint *)(iVar17 + 0x14) & 0x400) == 0) {
LAB_006ced0f:
          *(undefined4 *)(iVar17 + 0x44) = 0;
          *(undefined4 *)(iVar17 + 4) = 0x3f3a;
switchD_006ce850_caseD_3f3a:
          uVar16 = local_1c;
          if ((*(uint *)(iVar17 + 0x14) & 0x800) == 0) {
            if (*(int *)(iVar17 + 0x24) != 0) {
              *(undefined4 *)(*(int *)(iVar17 + 0x24) + 0x1c) = 0;
            }
LAB_006cee3f:
            *(undefined4 *)(iVar17 + 0x44) = 0;
            *(undefined4 *)(iVar17 + 4) = 0x3f3b;
switchD_006ce850_caseD_3f3b:
            uVar23 = local_1c;
            if ((*(uint *)(iVar17 + 0x14) & 0x1000) == 0) {
              uVar23 = uVar19;
              if (*(int *)(iVar17 + 0x24) != 0) {
                *(undefined4 *)(*(int *)(iVar17 + 0x24) + 0x24) = 0;
              }
LAB_006ceeed:
              *(undefined4 *)(iVar17 + 4) = 0x3f3c;
              uVar16 = local_c;
              uVar19 = uVar23;
switchD_006ce850_caseD_3f3c:
              puVar2 = (uint *)(iVar17 + 0x14);
              if ((*puVar2 & 0x200) != 0) {
                while (uVar19 < 0x10) {
                  if (uVar18 == 0) goto LAB_006cedaf;
                  uVar18 = uVar18 - 1;
                  uVar16 = uVar16 + ((uint)*pbVar25 << ((byte)uVar19 & 0x1f));
                  pbVar25 = pbVar25 + 1;
                  uVar19 = uVar19 + 8;
                  iVar17 = local_10;
                  local_1c = uVar19;
                  local_18 = pbVar25;
                  local_14 = uVar18;
                  local_c = uVar16;
                }
                if (((*(byte *)(iVar17 + 0xc) & 4) != 0) && (uVar16 != *(ushort *)(iVar17 + 0x1c)))
                {
                  param_1[6] = "header crc mismatch";
                  *(undefined4 *)(iVar17 + 4) = 0x3f51;
                  break;
                }
                uVar19 = 0;
                local_c = 0;
                local_1c = 0;
              }
              if (*(int *)(iVar17 + 0x24) != 0) {
                *(uint *)(*(int *)(iVar17 + 0x24) + 0x2c) = (int)*puVar2 >> 9 & 1;
                *(undefined4 *)(*(int *)(iVar17 + 0x24) + 0x30) = 1;
              }
              uVar11 = FUN_006d0620(0,0,0);
              *(undefined4 *)(local_10 + 0x1c) = uVar11;
              param_1[0xc] = uVar11;
              *(undefined4 *)(local_10 + 4) = 0x3f3f;
              iVar17 = local_10;
              uVar16 = local_c;
              break;
            }
            if (uVar18 != 0) {
              uVar16 = 0;
              do {
                local_5 = pbVar25[uVar16];
                uVar16 = uVar16 + 1;
                iVar10 = *(int *)(iVar17 + 0x24);
                if (((iVar10 != 0) && (*(int *)(iVar10 + 0x24) != 0)) &&
                   (*(uint *)(iVar17 + 0x44) < *(uint *)(iVar10 + 0x28))) {
                  *(byte *)(*(uint *)(iVar17 + 0x44) + *(int *)(iVar10 + 0x24)) = local_5;
                  *(int *)(iVar17 + 0x44) = *(int *)(iVar17 + 0x44) + 1;
                  uVar18 = local_14;
                }
              } while ((local_5 != 0) && (uVar16 < uVar18));
              if (((*(uint *)(iVar17 + 0x14) & 0x200) != 0) && ((*(byte *)(iVar17 + 0xc) & 4) != 0))
              {
                uVar11 = FUN_006d0620(*(undefined4 *)(iVar17 + 0x1c),pbVar25,uVar16);
                *(undefined4 *)(local_10 + 0x1c) = uVar11;
                iVar17 = local_10;
              }
              uVar18 = uVar18 - uVar16;
              pbVar25 = pbVar25 + uVar16;
              uVar19 = uVar23;
              local_18 = pbVar25;
              local_14 = uVar18;
              if (local_5 == 0) goto LAB_006ceeed;
            }
          }
          else if (uVar18 != 0) {
            uVar19 = 0;
            do {
              local_5 = pbVar25[uVar19];
              uVar19 = uVar19 + 1;
              iVar10 = *(int *)(iVar17 + 0x24);
              if (((iVar10 != 0) && (*(int *)(iVar10 + 0x1c) != 0)) &&
                 (*(uint *)(iVar17 + 0x44) < *(uint *)(iVar10 + 0x20))) {
                *(byte *)(*(uint *)(iVar17 + 0x44) + *(int *)(iVar10 + 0x1c)) = local_5;
                *(int *)(iVar17 + 0x44) = *(int *)(iVar17 + 0x44) + 1;
                uVar18 = local_14;
              }
            } while ((local_5 != 0) && (uVar19 < uVar18));
            if (((*(uint *)(iVar17 + 0x14) & 0x200) != 0) && ((*(byte *)(iVar17 + 0xc) & 4) != 0)) {
              uVar11 = FUN_006d0620(*(undefined4 *)(iVar17 + 0x1c),pbVar25,uVar19);
              *(undefined4 *)(local_10 + 0x1c) = uVar11;
              iVar17 = local_10;
            }
            uVar18 = uVar18 - uVar19;
            pbVar25 = pbVar25 + uVar19;
            uVar19 = uVar16;
            local_18 = pbVar25;
            local_14 = uVar18;
            if (local_5 == 0) goto LAB_006cee3f;
          }
        }
        else {
          uVar16 = *(uint *)(iVar17 + 0x44);
          uVar23 = uVar18;
          if (uVar16 <= uVar18) {
            uVar23 = uVar16;
          }
          if (uVar23 != 0) {
            if ((*(int *)(iVar17 + 0x24) != 0) &&
               (iVar10 = *(int *)(*(int *)(iVar17 + 0x24) + 0x10), uVar18 = local_14, iVar10 != 0))
            {
              pbVar25 = (byte *)(*(int *)(*(int *)(iVar17 + 0x24) + 0x14) - uVar16);
              local_18 = *(byte **)(*(int *)(iVar17 + 0x24) + 0x18);
              if (pbVar25 < local_18) {
                uVar16 = uVar23;
                if (local_18 < pbVar25 + uVar23) {
                  uVar16 = (int)local_18 - (int)pbVar25;
                }
                FUN_006e6bd0(pbVar25 + iVar10,pbVar24,uVar16);
                iVar17 = local_10;
              }
            }
            if (((*(uint *)(iVar17 + 0x14) & 0x200) != 0) && ((*(byte *)(iVar17 + 0xc) & 4) != 0)) {
              uVar11 = FUN_006d0620(*(undefined4 *)(iVar17 + 0x1c),pbVar24,uVar23);
              *(undefined4 *)(local_10 + 0x1c) = uVar11;
              iVar17 = local_10;
            }
            uVar18 = uVar18 - uVar23;
            pbVar25 = pbVar24 + uVar23;
            *(int *)(iVar17 + 0x44) = *(int *)(iVar17 + 0x44) - uVar23;
            uVar16 = *(uint *)(iVar17 + 0x44);
            local_18 = pbVar25;
            local_14 = uVar18;
          }
          if (uVar16 == 0) goto LAB_006ced0f;
        }
LAB_006cedaf:
        iVar17 = local_10;
        param_1[3] = local_28;
        param_1[4] = local_20;
        param_1[1] = local_14;
        *param_1 = local_18;
        *(uint *)(local_10 + 0x40) = uVar19;
        *(uint *)(local_10 + 0x3c) = local_c;
        if (((*(int *)(local_10 + 0x2c) == 0) &&
            (((local_2c == param_1[4] || (0x3f50 < *(int *)(local_10 + 4))) ||
             ((0x3f4d < *(int *)(local_10 + 4) && (param_2 == 4)))))) ||
           (iVar10 = FUN_006d02a0(param_1,param_1[3],local_2c - param_1[4]), iVar10 == 0)) {
          iVar10 = param_1[1];
          iVar20 = local_2c - param_1[4];
          param_1[2] = param_1[2] + (uVar5 - iVar10);
          param_1[5] = param_1[5] + iVar20;
          *(int *)(iVar17 + 0x20) = *(int *)(iVar17 + 0x20) + iVar20;
          if (((*(byte *)(iVar17 + 0xc) & 4) != 0) && (iVar20 != 0)) {
            if (*(int *)(iVar17 + 0x14) == 0) {
              uVar11 = FUN_006d0390(*(undefined4 *)(iVar17 + 0x1c),param_1[3] - iVar20,iVar20);
            }
            else {
              uVar11 = FUN_006d0620(*(undefined4 *)(iVar17 + 0x1c),param_1[3] - iVar20,iVar20);
            }
            *(undefined4 *)(iVar17 + 0x1c) = uVar11;
            param_1[0xc] = uVar11;
          }
          iVar6 = *(int *)(iVar17 + 4);
          if ((iVar6 == 0x3f47) || (iVar6 == 0x3f42)) {
            iVar21 = 0x100;
          }
          else {
            iVar21 = 0;
          }
          iVar12 = 0;
          if (iVar6 == 0x3f3f) {
            iVar12 = 0x80;
          }
          param_1[0xb] = iVar12 + (-(uint)(*(int *)(iVar17 + 8) != 0) & 0x40) + iVar21 +
                         *(int *)(iVar17 + 0x40);
          if (((uVar5 - iVar10 != 0) || (iVar20 != 0)) && (param_2 != 4)) {
            return local_34;
          }
          if (local_34 == 0) {
            local_34 = -5;
          }
          return local_34;
        }
        *(undefined4 *)(iVar17 + 4) = 0x3f52;
switchD_006ce850_caseD_3f52:
        return -4;
      case 0x3f3a:
        goto switchD_006ce850_caseD_3f3a;
      case 0x3f3b:
        goto switchD_006ce850_caseD_3f3b;
      case 0x3f3c:
        goto switchD_006ce850_caseD_3f3c;
      case 0x3f3d:
        for (; uVar19 < 0x20; uVar19 = uVar19 + 8) {
          if (uVar18 == 0) goto LAB_006cedaf;
          uVar18 = uVar18 - 1;
          uVar16 = uVar16 + ((uint)*pbVar25 << ((byte)uVar19 & 0x1f));
          pbVar25 = pbVar25 + 1;
          local_18 = pbVar25;
          local_14 = uVar18;
          local_c = uVar16;
        }
        iVar17 = (uVar16 >> 8 & 0xff00) + ((uVar16 & 0xff00) + uVar16 * 0x10000) * 0x100 +
                 (uVar16 >> 0x18);
        *(int *)(local_10 + 0x1c) = iVar17;
        param_1[0xc] = iVar17;
        uVar16 = 0;
        local_c = 0;
        uVar19 = 0;
        *(undefined4 *)(local_10 + 4) = 0x3f3e;
        iVar17 = local_10;
      case 0x3f3e:
        if (*(int *)(iVar17 + 0x10) == 0) {
          param_1[3] = local_28;
          param_1[4] = local_20;
          *param_1 = pbVar25;
          param_1[1] = uVar18;
          *(uint *)(local_10 + 0x40) = uVar19;
          *(uint *)(local_10 + 0x3c) = uVar16;
          return 2;
        }
        uVar11 = FUN_006d0390(0,0,0);
        *(undefined4 *)(local_10 + 0x1c) = uVar11;
        param_1[0xc] = uVar11;
        *(undefined4 *)(local_10 + 4) = 0x3f3f;
        iVar17 = local_10;
        uVar16 = local_c;
switchD_006ce850_caseD_3f3f:
        if ((param_2 == 5) || (param_2 == 6)) goto LAB_006cedaf;
switchD_006ce850_caseD_3f40:
        if (*(int *)(iVar17 + 8) != 0) {
          uVar16 = uVar16 >> (sbyte)(uVar19 & 7);
          uVar19 = uVar19 - (uVar19 & 7);
          *(undefined4 *)(local_10 + 4) = 0x3f4e;
          iVar17 = local_10;
          local_1c = uVar19;
          local_c = uVar16;
          break;
        }
        for (; uVar19 < 3; uVar19 = uVar19 + 8) {
          if (uVar18 == 0) goto LAB_006cedaf;
          uVar18 = uVar18 - 1;
          uVar16 = uVar16 + ((uint)*pbVar25 << ((byte)uVar19 & 0x1f));
          pbVar25 = pbVar25 + 1;
          iVar17 = local_10;
          local_18 = pbVar25;
          local_14 = uVar18;
          local_c = uVar16;
        }
        uVar23 = uVar16 >> 1;
        *(uint *)(iVar17 + 8) = uVar16 & 1;
        switch(uVar23 & 3) {
        case 0:
          uVar16 = uVar16 >> 3;
          uVar19 = uVar19 - 3;
          *(undefined4 *)(iVar17 + 4) = 0x3f41;
          local_1c = uVar19;
          local_c = uVar16;
          break;
        case 1:
          FUN_006ce780(iVar17);
          *(undefined4 *)(extraout_ECX + 4) = 0x3f47;
          iVar17 = extraout_ECX;
          uVar23 = extraout_EDX;
          if (param_2 == 6) {
            local_c = extraout_EDX >> 2;
            uVar19 = uVar19 - 3;
            goto LAB_006cedaf;
          }
          goto LAB_006cf122;
        case 2:
          uVar16 = uVar16 >> 3;
          uVar19 = uVar19 - 3;
          *(undefined4 *)(iVar17 + 4) = 0x3f44;
          local_1c = uVar19;
          local_c = uVar16;
          break;
        case 3:
          param_1[6] = "invalid block type";
          *(undefined4 *)(iVar17 + 4) = 0x3f51;
LAB_006cf122:
          uVar16 = uVar23 >> 2;
          uVar19 = uVar19 - 3;
          local_1c = uVar19;
          local_c = uVar16;
        }
        break;
      case 0x3f3f:
        goto switchD_006ce850_caseD_3f3f;
      case 0x3f40:
        goto switchD_006ce850_caseD_3f40;
      case 0x3f41:
        local_c = uVar16 >> (sbyte)(uVar19 & 7);
        for (uVar19 = uVar19 - (uVar19 & 7); local_1c = uVar19, uVar19 < 0x20; uVar19 = uVar19 + 8)
        {
          if (uVar18 == 0) goto LAB_006cedaf;
          uVar18 = uVar18 - 1;
          local_c = local_c + ((uint)*pbVar25 << ((byte)uVar19 & 0x1f));
          pbVar25 = pbVar25 + 1;
          local_18 = pbVar25;
          local_14 = uVar18;
        }
        if ((local_c & 0xffff) == ~local_c >> 0x10) {
          uVar16 = 0;
          uVar19 = 0;
          *(uint *)(local_10 + 0x44) = local_c & 0xffff;
          local_c = 0;
          local_1c = 0;
          *(undefined4 *)(local_10 + 4) = 0x3f42;
          iVar17 = local_10;
          if (param_2 != 6) goto switchD_006ce850_caseD_3f42;
          goto LAB_006cedaf;
        }
        param_1[6] = "invalid stored block lengths";
        *(undefined4 *)(local_10 + 4) = 0x3f51;
        iVar17 = local_10;
        uVar16 = local_c;
        break;
      case 0x3f42:
switchD_006ce850_caseD_3f42:
        *(undefined4 *)(iVar17 + 4) = 0x3f43;
      case 0x3f43:
        uVar23 = *(uint *)(iVar17 + 0x44);
        if (uVar23 == 0) {
          *(undefined4 *)(iVar17 + 4) = 0x3f3f;
          break;
        }
        uVar16 = uVar18;
        if (uVar23 <= uVar18) {
          uVar16 = uVar23;
        }
        uVar23 = local_20;
        if (uVar16 <= local_20) {
          uVar23 = uVar16;
        }
        if (uVar23 != 0) {
          FUN_006e6bd0(local_28,pbVar25,uVar23);
          local_14 = uVar18 - uVar23;
          local_20 = local_20 - uVar23;
          pbVar25 = pbVar25 + uVar23;
          local_28 = local_28 + uVar23;
          *(int *)(local_10 + 0x44) = *(int *)(local_10 + 0x44) - uVar23;
          iVar17 = local_10;
          uVar16 = local_c;
          uVar18 = local_14;
          local_18 = pbVar25;
          break;
        }
        goto LAB_006cedaf;
      case 0x3f44:
        pbVar24 = pbVar25;
        pbVar25 = local_18;
        for (; local_18 = pbVar25, uVar19 < 0xe; uVar19 = uVar19 + 8) {
          if (uVar18 == 0) goto LAB_006cedaf;
          uVar18 = uVar18 - 1;
          uVar16 = uVar16 + ((uint)*pbVar24 << ((byte)uVar19 & 0x1f));
          pbVar24 = pbVar24 + 1;
          pbVar25 = pbVar24;
          local_14 = uVar18;
          local_c = uVar16;
        }
        uVar23 = (uVar16 & 0x1f) + 0x101;
        uVar15 = uVar16 >> 10;
        uVar22 = (uVar16 >> 5 & 0x1f) + 1;
        *(uint *)(local_10 + 100) = uVar23;
        *(uint *)(local_10 + 0x68) = uVar22;
        uVar19 = uVar19 - 0xe;
        uVar16 = uVar16 >> 0xe;
        *(uint *)(local_10 + 0x60) = (uVar15 & 0xf) + 4;
        local_1c = uVar19;
        local_c = uVar16;
        if ((uVar23 < 0x11f) && (uVar22 < 0x1f)) {
          *(undefined4 *)(local_10 + 0x6c) = 0;
          *(undefined4 *)(local_10 + 4) = 0x3f45;
          iVar17 = local_10;
          goto switchD_006ce850_caseD_3f45;
        }
        param_1[6] = "too many length or distance symbols";
        *(undefined4 *)(local_10 + 4) = 0x3f51;
        iVar17 = local_10;
        break;
      case 0x3f45:
switchD_006ce850_caseD_3f45:
        uVar23 = *(uint *)(iVar17 + 0x6c);
        if (uVar23 < *(uint *)(iVar17 + 0x60)) {
          do {
            for (; uVar19 < 3; uVar19 = uVar19 + 8) {
              if (uVar18 == 0) goto LAB_006cedaf;
              uVar18 = uVar18 - 1;
              uVar16 = uVar16 + ((uint)*pbVar25 << ((byte)uVar19 & 0x1f));
              local_18 = pbVar25 + 1;
              pbVar25 = local_18;
              local_14 = uVar18;
              local_c = uVar16;
            }
            uVar7 = (ushort)uVar16;
            uVar16 = uVar16 >> 3;
            uVar19 = uVar19 - 3;
            *(ushort *)
             (local_10 + 0x74 + (uint)*(ushort *)(&DAT_0072bc08 + *(int *)(local_10 + 0x6c) * 2) * 2
             ) = uVar7 & 7;
            *(int *)(local_10 + 0x6c) = *(int *)(local_10 + 0x6c) + 1;
            uVar23 = *(uint *)(local_10 + 0x6c);
            pbVar25 = local_18;
            local_c = uVar16;
            local_1c = uVar19;
            iVar17 = local_10;
          } while (uVar23 < *(uint *)(local_10 + 0x60));
        }
        while (uVar23 < 0x13) {
          *(undefined2 *)
           (iVar17 + 0x74 + (uint)*(ushort *)(&DAT_0072bc08 + *(int *)(iVar17 + 0x6c) * 2) * 2) = 0;
          *(int *)(iVar17 + 0x6c) = *(int *)(iVar17 + 0x6c) + 1;
          uVar23 = *(uint *)(iVar17 + 0x6c);
        }
        *(undefined4 *)(iVar17 + 0x58) = 7;
        *(int *)(iVar17 + 0x50) = iVar17 + 0x534;
        *(int *)(iVar17 + 0x70) = iVar17 + 0x534;
        local_34 = FUN_006d09c0(0,local_10 + 0x74,0x13,(int *)(iVar17 + 0x70),iVar17 + 0x58,
                                local_10 + 0x2f4);
        iVar17 = local_10;
        uVar16 = local_c;
        if (local_34 == 0) {
          *(undefined4 *)(local_10 + 0x6c) = 0;
          *(undefined4 *)(local_10 + 4) = 0x3f46;
          local_30 = 0x3f46;
          goto switchD_006ce850_caseD_3f46;
        }
        param_1[6] = "invalid code lengths set";
        *(undefined4 *)(local_10 + 4) = 0x3f51;
        break;
      case 0x3f46:
switchD_006ce850_caseD_3f46:
        if (*(uint *)(iVar17 + 0x6c) < (uint)(*(int *)(iVar17 + 0x68) + *(int *)(iVar17 + 100))) {
          do {
            uVar23 = (1 << ((byte)*(undefined4 *)(iVar17 + 0x58) & 0x1f)) - 1;
            uVar15 = *(uint *)(*(int *)(local_10 + 0x50) + (uVar23 & uVar16) * 4);
            local_1c = uVar15 >> 8;
            if (uVar19 < (local_1c & 0xff)) {
              do {
                if (uVar18 == 0) goto LAB_006cedaf;
                uVar18 = uVar18 - 1;
                uVar16 = uVar16 + ((uint)*pbVar25 << ((byte)uVar19 & 0x1f));
                pbVar25 = pbVar25 + 1;
                uVar19 = uVar19 + 8;
                uVar15 = *(uint *)(*(int *)(local_10 + 0x50) + (uVar23 & uVar16) * 4);
                local_1c = uVar15 >> 8;
                local_18 = pbVar25;
                local_14 = uVar18;
                local_c = uVar16;
              } while (uVar19 < (local_1c & 0xff));
            }
            local_30 = uVar15 >> 0x10;
            uVar23 = local_1c & 0xff;
            sVar9 = (short)(uVar15 >> 0x10);
            iVar17 = local_10;
            if (0xf < local_30) {
              bVar13 = (byte)(uVar15 >> 8);
              if (local_30 == 0x10) {
                for (; uVar19 < uVar23 + 2; uVar19 = uVar19 + 8) {
                  if (uVar18 == 0) goto LAB_006cedaf;
                  uVar18 = uVar18 - 1;
                  uVar16 = local_c + ((uint)*pbVar25 << ((byte)uVar19 & 0x1f));
                  pbVar25 = pbVar25 + 1;
                  local_18 = pbVar25;
                  local_14 = uVar18;
                  local_c = uVar16;
                }
                uVar16 = uVar16 >> (bVar13 & 0x1f);
                uVar19 = uVar19 - (uVar15 >> 8 & 0xff);
                if (*(int *)(local_10 + 0x6c) != 0) {
                  local_30 = uVar16 & 3;
                  uVar16 = uVar16 >> 2;
                  local_30 = local_30 + 3;
                  uVar19 = uVar19 - 2;
                  uVar4 = *(undefined2 *)(local_10 + 0x72 + *(int *)(local_10 + 0x6c) * 2);
                  goto LAB_006cf5ae;
                }
              }
              else {
                if (sVar9 == 0x11) {
                  for (; uVar19 < uVar23 + 3; uVar19 = uVar19 + 8) {
                    if (uVar18 == 0) goto LAB_006cedaf;
                    uVar18 = uVar18 - 1;
                    uVar16 = local_c + ((uint)*pbVar25 << ((byte)uVar19 & 0x1f));
                    pbVar25 = pbVar25 + 1;
                    local_18 = pbVar25;
                    local_14 = uVar18;
                    local_c = uVar16;
                  }
                  uVar16 = uVar16 >> (bVar13 & 0x1f);
                  local_30 = (uVar16 & 7) + 3;
                  uVar16 = uVar16 >> 3;
                  iVar10 = -3;
                }
                else {
                  for (; uVar19 < uVar23 + 7; uVar19 = uVar19 + 8) {
                    if (uVar18 == 0) goto LAB_006cedaf;
                    uVar18 = uVar18 - 1;
                    uVar16 = local_c + ((uint)*pbVar25 << ((byte)uVar19 & 0x1f));
                    pbVar25 = pbVar25 + 1;
                    local_18 = pbVar25;
                    local_14 = uVar18;
                    local_c = uVar16;
                  }
                  uVar16 = uVar16 >> (bVar13 & 0x1f);
                  local_30 = (uVar16 & 0x7f) + 0xb;
                  uVar16 = uVar16 >> 7;
                  iVar10 = -7;
                }
                uVar4 = 0;
                uVar19 = uVar19 + (iVar10 - (uVar15 >> 8 & 0xff));
LAB_006cf5ae:
                pbVar25 = local_18;
                if (*(int *)(local_10 + 0x6c) + local_30 <=
                    (uint)(*(int *)(local_10 + 0x68) + *(int *)(local_10 + 100))) {
                  do {
                    *(undefined2 *)(local_10 + 0x74 + *(int *)(local_10 + 0x6c) * 2) = uVar4;
                    uVar23 = *(int *)(local_10 + 0x6c) + 1;
                    *(uint *)(local_10 + 0x6c) = uVar23;
                    local_30 = local_30 + -1;
                    uVar18 = local_14;
                  } while (local_30 != 0);
                  goto LAB_006cf5f4;
                }
              }
              param_1[6] = "invalid bit length repeat";
              *(undefined4 *)(local_10 + 4) = 0x3f51;
              local_1c = uVar19;
              local_c = uVar16;
              goto LAB_006cf92e;
            }
            uVar19 = uVar19 - uVar23;
            uVar16 = uVar16 >> ((byte)local_1c & 0x1f);
            *(short *)(local_10 + 0x74 + *(int *)(local_10 + 0x6c) * 2) = sVar9;
            *(int *)(local_10 + 0x6c) = *(int *)(local_10 + 0x6c) + 1;
            uVar23 = *(uint *)(local_10 + 0x6c);
LAB_006cf5f4:
            local_30 = uVar23;
            pbVar25 = local_18;
            local_c = uVar16;
          } while (local_30 < (uint)(*(int *)(local_10 + 0x68) + *(int *)(local_10 + 100)));
          local_30 = *(int *)(local_10 + 4);
          local_1c = uVar19;
        }
        if (local_30 != 0x3f51) {
          if (*(short *)(iVar17 + 0x274) == 0) {
            param_1[6] = "invalid code -- missing end-of-block";
            *(undefined4 *)(iVar17 + 4) = 0x3f51;
          }
          else {
            *(undefined4 *)(iVar17 + 0x58) = 9;
            piVar1 = (int *)(iVar17 + 0x70);
            *(int *)(iVar17 + 0x50) = iVar17 + 0x534;
            *piVar1 = iVar17 + 0x534;
            local_34 = FUN_006d09c0(1,iVar17 + 0x74,*(undefined4 *)(iVar17 + 100),piVar1,
                                    iVar17 + 0x58,iVar17 + 0x2f4);
            pbVar25 = local_18;
            if (local_34 == 0) {
              *(undefined4 *)(local_10 + 0x5c) = 6;
              *(int *)(local_10 + 0x54) = *piVar1;
              local_34 = FUN_006d09c0(2,local_10 + 0x74 + *(int *)(local_10 + 100) * 2,
                                      *(undefined4 *)(local_10 + 0x68),piVar1,local_10 + 0x5c,
                                      iVar17 + 0x2f4);
              iVar17 = local_10;
              uVar16 = local_c;
              if (local_34 == 0) {
                *(undefined4 *)(local_10 + 4) = 0x3f47;
                if (param_2 != 6) goto switchD_006ce850_caseD_3f47;
                goto LAB_006cedaf;
              }
              param_1[6] = "invalid distances set";
              *(undefined4 *)(local_10 + 4) = 0x3f51;
            }
            else {
              param_1[6] = "invalid literal/lengths set";
              *(undefined4 *)(local_10 + 4) = 0x3f51;
              iVar17 = local_10;
              uVar16 = local_c;
            }
          }
        }
        break;
      case 0x3f47:
switchD_006ce850_caseD_3f47:
        *(undefined4 *)(iVar17 + 4) = 0x3f48;
      case 0x3f48:
        if ((5 < uVar18) && (0x101 < local_20)) {
          param_1[3] = local_28;
          param_1[4] = local_20;
          *param_1 = local_18;
          param_1[1] = uVar18;
          *(uint *)(iVar17 + 0x3c) = uVar16;
          *(uint *)(iVar17 + 0x40) = uVar19;
          zlib_inflate_fast_or_codes(param_1,local_2c);
          local_28 = (undefined1 *)param_1[3];
          pbVar25 = (byte *)*param_1;
          local_14 = param_1[1];
          local_20 = param_1[4];
          uVar16 = *(uint *)(local_10 + 0x3c);
          uVar19 = *(uint *)(local_10 + 0x40);
          iVar17 = local_10;
          uVar18 = local_14;
          local_1c = uVar19;
          local_18 = pbVar25;
          local_c = uVar16;
          if (*(int *)(local_10 + 4) == 0x3f3f) {
            *(undefined4 *)(local_10 + 0x1bc8) = 0xffffffff;
          }
          break;
        }
        *(undefined4 *)(iVar17 + 0x1bc8) = 0;
        uVar23 = (1 << ((byte)*(undefined4 *)(iVar17 + 0x58) & 0x1f)) - 1;
        iVar17 = *(int *)(local_10 + 0x50);
        uVar15 = *(uint *)(iVar17 + (uVar23 & uVar16) * 4);
        if (uVar19 < (uVar15 >> 8 & 0xff)) {
          do {
            if (uVar18 == 0) goto LAB_006cedaf;
            uVar18 = uVar18 - 1;
            uVar16 = uVar16 + ((uint)*pbVar25 << ((byte)uVar19 & 0x1f));
            pbVar25 = pbVar25 + 1;
            uVar19 = uVar19 + 8;
            uVar15 = *(uint *)(iVar17 + (uVar23 & uVar16) * 4);
            local_18 = pbVar25;
            local_14 = uVar18;
            local_c = uVar16;
          } while (uVar19 < (uVar15 >> 8 & 0xff));
        }
        cVar8 = (char)uVar15;
        if ((cVar8 != '\0') && ((uVar15 & 0xf0) == 0)) {
          bVar13 = (byte)(uVar15 >> 8);
          uVar18 = *(uint *)(iVar17 + ((((1 << (cVar8 + bVar13 & 0x1f)) - 1U & local_c) >>
                                       (bVar13 & 0x1f)) + (uVar15 >> 0x10)) * 4);
          uVar16 = uVar19;
          if (uVar19 < (uVar18 >> 8 & 0xff) + (uVar15 >> 8 & 0xff)) {
            do {
              uVar19 = uVar16;
              if (local_14 == 0) goto LAB_006cedaf;
              local_14 = local_14 - 1;
              uVar19 = uVar16 + 8;
              bVar3 = *local_18;
              local_18 = local_18 + 1;
              local_c = local_c + ((uint)bVar3 << ((byte)uVar16 & 0x1f));
              uVar18 = *(uint *)(iVar17 + ((((1 << (cVar8 + bVar13 & 0x1f)) - 1U & local_c) >>
                                           (bVar13 & 0x1f)) + (uVar15 >> 0x10)) * 4);
              uVar16 = uVar19;
            } while (uVar19 < (uVar18 >> 8 & 0xff) + (uVar15 >> 8 & 0xff));
          }
          uVar23 = uVar15 >> 8 & 0xff;
          uVar16 = local_c >> (bVar13 & 0x1f);
          uVar19 = uVar19 - uVar23;
          *(uint *)(local_10 + 0x1bc8) = uVar23;
          uVar15 = uVar18;
          uVar18 = local_14;
        }
        uVar23 = uVar15 >> 8 & 0xff;
        *(int *)(local_10 + 0x1bc8) = *(int *)(local_10 + 0x1bc8) + uVar23;
        uVar19 = uVar19 - uVar23;
        uVar16 = uVar16 >> ((byte)(uVar15 >> 8) & 0x1f);
        *(uint *)(local_10 + 0x44) = uVar15 >> 0x10;
        pbVar25 = local_18;
        iVar17 = local_10;
        local_1c = uVar19;
        local_c = uVar16;
        if ((char)uVar15 == '\0') {
          *(undefined4 *)(local_10 + 4) = 0x3f4d;
          break;
        }
        if ((uVar15 & 0x20) != 0) {
          *(undefined4 *)(local_10 + 0x1bc8) = 0xffffffff;
          *(undefined4 *)(local_10 + 4) = 0x3f3f;
          break;
        }
        if ((uVar15 & 0x40) != 0) {
          param_1[6] = "invalid literal/length code";
LAB_006cf924:
          *(undefined4 *)(iVar17 + 4) = 0x3f51;
          pbVar25 = local_18;
          break;
        }
        *(undefined4 *)(local_10 + 4) = 0x3f49;
        *(uint *)(local_10 + 0x4c) = uVar15 & 0xf;
switchD_006ce850_caseD_3f49:
        uVar23 = *(uint *)(iVar17 + 0x4c);
        if (uVar23 != 0) {
          for (; uVar19 < uVar23; uVar19 = uVar19 + 8) {
            if (uVar18 == 0) goto LAB_006cedaf;
            uVar18 = uVar18 - 1;
            uVar16 = local_c + ((uint)*local_18 << ((byte)uVar19 & 0x1f));
            local_18 = local_18 + 1;
            local_14 = uVar18;
            local_c = uVar16;
          }
          uVar19 = uVar19 - uVar23;
          *(int *)(local_10 + 0x44) =
               *(int *)(local_10 + 0x44) + ((1 << ((byte)uVar23 & 0x1f)) - 1U & uVar16);
          uVar16 = uVar16 >> ((byte)uVar23 & 0x1f);
          *(int *)(local_10 + 0x1bc8) = *(int *)(local_10 + 0x1bc8) + uVar23;
          iVar17 = local_10;
          local_c = uVar16;
        }
        *(undefined4 *)(iVar17 + 0x1bcc) = *(undefined4 *)(iVar17 + 0x44);
        *(undefined4 *)(iVar17 + 4) = 0x3f4a;
switchD_006ce850_caseD_3f4a:
        uVar23 = (1 << ((byte)*(undefined4 *)(iVar17 + 0x5c) & 0x1f)) - 1;
        iVar17 = *(int *)(local_10 + 0x54);
        uVar15 = *(uint *)(iVar17 + (uVar23 & uVar16) * 4);
        if (uVar19 < (uVar15 >> 8 & 0xff)) {
          do {
            if (uVar18 == 0) goto LAB_006cedaf;
            bVar13 = *local_18;
            uVar18 = uVar18 - 1;
            local_18 = local_18 + 1;
            uVar16 = local_c + ((uint)bVar13 << ((byte)uVar19 & 0x1f));
            uVar19 = uVar19 + 8;
            uVar15 = *(uint *)(iVar17 + (uVar23 & uVar16) * 4);
            local_14 = uVar18;
            local_c = uVar16;
          } while (uVar19 < (uVar15 >> 8 & 0xff));
        }
        if ((uVar15 & 0xf0) == 0) {
          bVar13 = (byte)(uVar15 >> 8);
          uVar18 = *(uint *)(iVar17 + ((((1 << ((char)uVar15 + bVar13 & 0x1f)) - 1U & local_c) >>
                                       (bVar13 & 0x1f)) + (uVar15 >> 0x10)) * 4);
          uVar16 = uVar19;
          if (uVar19 < (uVar18 >> 8 & 0xff) + (uVar15 >> 8 & 0xff)) {
            do {
              uVar19 = uVar16;
              if (local_14 == 0) goto LAB_006cedaf;
              local_14 = local_14 - 1;
              uVar19 = uVar16 + 8;
              bVar3 = *local_18;
              local_18 = local_18 + 1;
              local_c = local_c + ((uint)bVar3 << ((byte)uVar16 & 0x1f));
              uVar18 = *(uint *)(iVar17 + ((((1 << ((char)uVar15 + bVar13 & 0x1f)) - 1U & local_c)
                                           >> (bVar13 & 0x1f)) + (uVar15 >> 0x10)) * 4);
              uVar16 = uVar19;
            } while (uVar19 < (uVar18 >> 8 & 0xff) + (uVar15 >> 8 & 0xff));
          }
          uVar23 = uVar15 >> 8 & 0xff;
          uVar19 = uVar19 - uVar23;
          uVar16 = local_c >> (bVar13 & 0x1f);
          *(int *)(local_10 + 0x1bc8) = *(int *)(local_10 + 0x1bc8) + uVar23;
          uVar15 = uVar18;
        }
        uVar18 = uVar15 >> 8 & 0xff;
        *(int *)(local_10 + 0x1bc8) = *(int *)(local_10 + 0x1bc8) + uVar18;
        uVar19 = uVar19 - uVar18;
        uVar16 = uVar16 >> ((byte)(uVar15 >> 8) & 0x1f);
        iVar17 = local_10;
        uVar18 = local_14;
        local_1c = uVar19;
        local_c = uVar16;
        if ((uVar15 & 0x40) != 0) {
          param_1[6] = "invalid distance code";
          goto LAB_006cf924;
        }
        *(uint *)(local_10 + 0x48) = uVar15 >> 0x10;
        *(uint *)(local_10 + 0x4c) = uVar15 & 0xf;
        *(undefined4 *)(local_10 + 4) = 0x3f4b;
switchD_006ce850_caseD_3f4b:
        uVar23 = *(uint *)(iVar17 + 0x4c);
        if (uVar23 != 0) {
          for (; uVar19 < uVar23; uVar19 = uVar19 + 8) {
            if (uVar18 == 0) goto LAB_006cedaf;
            uVar18 = uVar18 - 1;
            uVar16 = local_c + ((uint)*local_18 << ((byte)uVar19 & 0x1f));
            local_18 = local_18 + 1;
            local_14 = uVar18;
            local_c = uVar16;
          }
          uVar19 = uVar19 - uVar23;
          *(int *)(local_10 + 0x48) =
               *(int *)(local_10 + 0x48) + ((1 << ((byte)uVar23 & 0x1f)) - 1U & uVar16);
          uVar16 = uVar16 >> ((byte)uVar23 & 0x1f);
          *(int *)(local_10 + 0x1bc8) = *(int *)(local_10 + 0x1bc8) + uVar23;
          iVar17 = local_10;
          local_1c = uVar19;
          local_c = uVar16;
        }
        *(undefined4 *)(iVar17 + 4) = 0x3f4c;
switchD_006ce850_caseD_3f4c:
        if (local_20 != 0) {
          uVar23 = *(uint *)(iVar17 + 0x48);
          if (local_2c - local_20 < uVar23) {
            uVar23 = uVar23 - (local_2c - local_20);
            if ((*(uint *)(iVar17 + 0x30) < uVar23) && (*(int *)(iVar17 + 0x1bc4) != 0)) {
              param_1[6] = "invalid distance too far back";
              goto LAB_006cf924;
            }
            local_38 = *(uint *)(iVar17 + 0x34);
            if (local_38 < uVar23) {
              uVar23 = uVar23 - local_38;
              local_38 = (*(int *)(iVar17 + 0x2c) - uVar23) + *(int *)(iVar17 + 0x38);
            }
            else {
              local_38 = (*(int *)(iVar17 + 0x38) - uVar23) + local_38;
            }
            uVar18 = *(uint *)(iVar17 + 0x44);
            local_30 = uVar18;
            if (uVar23 <= uVar18) {
              local_30 = uVar23;
            }
          }
          else {
            local_38 = (int)local_28 - uVar23;
            uVar18 = *(uint *)(iVar17 + 0x44);
            local_30 = uVar18;
          }
          uVar23 = local_20;
          if (local_30 <= local_20) {
            uVar23 = local_30;
          }
          local_20 = local_20 - uVar23;
          *(uint *)(local_10 + 0x44) = uVar18 - uVar23;
          iVar17 = local_38 - (int)local_28;
          do {
            *local_28 = local_28[iVar17];
            local_28 = local_28 + 1;
            uVar23 = uVar23 - 1;
          } while (uVar23 != 0);
          iVar17 = local_10;
          uVar18 = local_14;
          pbVar25 = local_18;
          if (*(int *)(local_10 + 0x44) == 0) {
            *(undefined4 *)(local_10 + 4) = 0x3f48;
          }
          break;
        }
        goto LAB_006cedaf;
      case 0x3f49:
        goto switchD_006ce850_caseD_3f49;
      case 0x3f4a:
        goto switchD_006ce850_caseD_3f4a;
      case 0x3f4b:
        goto switchD_006ce850_caseD_3f4b;
      case 0x3f4c:
        goto switchD_006ce850_caseD_3f4c;
      case 0x3f4d:
        if (local_20 == 0) goto LAB_006cedaf;
        local_20 = local_20 - 1;
        *local_28 = *(undefined1 *)(iVar17 + 0x44);
        *(undefined4 *)(iVar17 + 4) = 0x3f48;
        uVar18 = local_14;
        local_28 = local_28 + 1;
        break;
      case 0x3f4e:
        pbVar24 = pbVar25;
        if (*(int *)(iVar17 + 0xc) != 0) {
          while (pbVar25 = local_18, local_18 = pbVar25, uVar19 < 0x20) {
            if (uVar18 == 0) goto LAB_006cedaf;
            uVar18 = uVar18 - 1;
            uVar16 = uVar16 + ((uint)*pbVar24 << ((byte)uVar19 & 0x1f));
            pbVar24 = pbVar24 + 1;
            uVar19 = uVar19 + 8;
            iVar17 = local_10;
            local_14 = uVar18;
            local_c = uVar16;
            local_1c = uVar19;
            local_18 = pbVar24;
          }
          iVar10 = local_2c - local_20;
          param_1[5] = param_1[5] + iVar10;
          *(int *)(iVar17 + 0x20) = *(int *)(iVar17 + 0x20) + iVar10;
          uVar23 = *(uint *)(iVar17 + 0xc);
          if (((uVar23 & 4) != 0) && (iVar10 != 0)) {
            if (*(int *)(iVar17 + 0x14) == 0) {
              uVar11 = FUN_006d0390(*(undefined4 *)(iVar17 + 0x1c),(int)local_28 - iVar10,iVar10);
            }
            else {
              uVar11 = FUN_006d0620(*(undefined4 *)(iVar17 + 0x1c),(int)local_28 - iVar10,iVar10);
            }
            *(undefined4 *)(local_10 + 0x1c) = uVar11;
            param_1[0xc] = uVar11;
            uVar23 = *(uint *)(local_10 + 0xc);
            iVar17 = local_10;
            uVar16 = local_c;
          }
          local_2c = local_20;
          uVar18 = local_14;
          if ((uVar23 & 4) != 0) {
            uVar23 = uVar16;
            if (*(int *)(iVar17 + 0x14) == 0) {
              uVar23 = ((uVar16 & 0xff00) + uVar16 * 0x10000) * 0x100 + (uVar16 >> 8 & 0xff00) +
                       (uVar16 >> 0x18);
            }
            if (uVar23 != *(uint *)(iVar17 + 0x1c)) {
              param_1[6] = "incorrect data check";
              *(undefined4 *)(iVar17 + 4) = 0x3f51;
              break;
            }
          }
          uVar16 = 0;
          uVar19 = 0;
          local_c = 0;
          local_1c = 0;
        }
        *(undefined4 *)(iVar17 + 4) = 0x3f4f;
      case 0x3f4f:
        puVar2 = (uint *)(iVar17 + 0xc);
        if ((*puVar2 != 0) && (*(int *)(iVar17 + 0x14) != 0)) {
          while (uVar19 < 0x20) {
            if (uVar18 == 0) goto LAB_006cedaf;
            uVar18 = uVar18 - 1;
            uVar16 = uVar16 + ((uint)*pbVar25 << ((byte)uVar19 & 0x1f));
            pbVar25 = pbVar25 + 1;
            uVar19 = uVar19 + 8;
            iVar17 = local_10;
            local_1c = uVar19;
            local_18 = pbVar25;
            local_14 = uVar18;
            local_c = uVar16;
          }
          if (((*puVar2 & 4) != 0) && (uVar16 != *(uint *)(iVar17 + 0x20))) {
            param_1[6] = "incorrect length check";
            *(undefined4 *)(iVar17 + 4) = 0x3f51;
            break;
          }
          local_c = 0;
          uVar19 = 0;
        }
        *(undefined4 *)(iVar17 + 4) = 0x3f50;
switchD_006ce850_caseD_3f50:
        local_34 = 1;
        goto LAB_006cedaf;
      case 0x3f50:
        goto switchD_006ce850_caseD_3f50;
      case 0x3f51:
        local_34 = -3;
        goto LAB_006cedaf;
      case 0x3f52:
        goto switchD_006ce850_caseD_3f52;
      default:
        goto switchD_006ce850_caseD_3f53;
      }
LAB_006cf92e:
      local_30 = *(int *)(iVar17 + 4);
    } while( true );
  }
switchD_006ce850_caseD_3f53:
  return -2;
}


/* ==== 006d0260  inflateStateCheck  size=57 ==== */

/* Library Function - Single Match
    _inflateStateCheck
   
   Library: Visual Studio 2019 Release */

undefined4 __cdecl inflateStateCheck(int param_1)

{
  int *piVar1;
  
  if ((((param_1 != 0) && (*(int *)(param_1 + 0x20) != 0)) && (*(int *)(param_1 + 0x24) != 0)) &&
     (((piVar1 = *(int **)(param_1 + 0x1c), piVar1 != (int *)0x0 && (*piVar1 == param_1)) &&
      (piVar1[1] - 0x3f34U < 0x20)))) {
    return 0;
  }
  return 1;
}

/* ==== 006d02a0  FUN_006d02a0  size=237 ==== */

undefined4 FUN_006d02a0(int param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  iVar2 = *(int *)(iVar1 + 0x38);
  if (iVar2 == 0) {
    iVar2 = (**(code **)(param_1 + 0x20))
                      (*(undefined4 *)(param_1 + 0x28),
                       1 << ((byte)*(undefined4 *)(iVar1 + 0x28) & 0x1f),1);
    *(int *)(iVar1 + 0x38) = iVar2;
    if (iVar2 == 0) {
      return 1;
    }
  }
  uVar3 = *(uint *)(iVar1 + 0x2c);
  if (uVar3 == 0) {
    uVar3 = 1 << ((byte)*(undefined4 *)(iVar1 + 0x28) & 0x1f);
    *(uint *)(iVar1 + 0x2c) = uVar3;
    *(undefined4 *)(iVar1 + 0x34) = 0;
    *(undefined4 *)(iVar1 + 0x30) = 0;
  }
  if (uVar3 <= param_3) {
    FUN_006e6bd0(iVar2,param_2 - uVar3,uVar3);
    *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(iVar1 + 0x2c);
    *(undefined4 *)(iVar1 + 0x34) = 0;
    return 0;
  }
  uVar3 = uVar3 - *(int *)(iVar1 + 0x34);
  if (param_3 < uVar3) {
    uVar3 = param_3;
  }
  FUN_006e6bd0(*(int *)(iVar1 + 0x34) + iVar2,param_2 - param_3,uVar3);
  iVar2 = param_3 - uVar3;
  if (iVar2 != 0) {
    FUN_006e6bd0(*(undefined4 *)(iVar1 + 0x38),param_2 - iVar2,iVar2);
    *(int *)(iVar1 + 0x34) = iVar2;
    *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(iVar1 + 0x2c);
    return 0;
  }
  *(int *)(iVar1 + 0x34) = *(int *)(iVar1 + 0x34) + uVar3;
  iVar2 = *(int *)(iVar1 + 0x34);
  if (iVar2 == *(int *)(iVar1 + 0x2c)) {
    iVar2 = 0;
  }
  *(int *)(iVar1 + 0x34) = iVar2;
  if (*(uint *)(iVar1 + 0x30) < *(uint *)(iVar1 + 0x2c)) {
    *(uint *)(iVar1 + 0x30) = *(uint *)(iVar1 + 0x30) + uVar3;
  }
  return 0;
}


/* ==== 006d0390  FUN_006d0390  size=636 ==== */

uint FUN_006d0390(uint param_1,byte *param_2,uint param_3)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  byte *pbVar21;
  
  uVar3 = param_1 & 0xffff;
  param_1 = param_1 >> 0x10;
  if (param_3 == 1) {
    uVar3 = *param_2 + uVar3;
    uVar20 = uVar3 - 0xfff1;
    if (uVar3 < 0xfff1) {
      uVar20 = uVar3;
    }
    param_1 = uVar20 + param_1;
    uVar3 = param_1 - 0xfff1;
    if (param_1 < 0xfff1) {
      uVar3 = param_1;
    }
    return uVar3 << 0x10 | uVar20;
  }
  if (param_2 == (byte *)0x0) {
    return 1;
  }
  if (param_3 < 0x10) {
    for (; param_3 != 0; param_3 = param_3 - 1) {
      bVar2 = *param_2;
      param_2 = param_2 + 1;
      uVar3 = uVar3 + bVar2;
      param_1 = param_1 + uVar3;
    }
    uVar20 = uVar3 - 0xfff1;
    if (uVar3 < 0xfff1) {
      uVar20 = uVar3;
    }
    return ((param_1 / 0xfff1) * 0xf + param_1) * 0x10000 | uVar20;
  }
  pbVar21 = param_2;
  if (0x15af < param_3) {
    param_2 = (byte *)(param_3 / 0x15b0);
    do {
      param_3 = param_3 - 0x15b0;
      iVar19 = 0x15b;
      do {
        iVar4 = uVar3 + *pbVar21;
        iVar5 = iVar4 + (uint)pbVar21[1];
        iVar6 = iVar5 + (uint)pbVar21[2];
        iVar7 = iVar6 + (uint)pbVar21[3];
        iVar8 = iVar7 + (uint)pbVar21[4];
        iVar9 = iVar8 + (uint)pbVar21[5];
        iVar10 = iVar9 + (uint)pbVar21[6];
        iVar11 = iVar10 + (uint)pbVar21[7];
        iVar12 = iVar11 + (uint)pbVar21[8];
        iVar13 = iVar12 + (uint)pbVar21[9];
        iVar14 = iVar13 + (uint)pbVar21[10];
        iVar15 = iVar14 + (uint)pbVar21[0xb];
        iVar16 = iVar15 + (uint)pbVar21[0xc];
        iVar17 = iVar16 + (uint)pbVar21[0xd];
        iVar18 = iVar17 + (uint)pbVar21[0xe];
        pbVar1 = pbVar21 + 0xf;
        pbVar21 = pbVar21 + 0x10;
        uVar3 = iVar18 + (uint)*pbVar1;
        param_1 = param_1 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 + iVar11 + iVar12
                  + iVar13 + iVar14 + iVar15 + iVar16 + iVar17 + iVar18 + uVar3;
        iVar19 = iVar19 + -1;
      } while (iVar19 != 0);
      uVar3 = uVar3 % 0xfff1;
      param_1 = param_1 % 0xfff1;
      param_2 = (byte *)((int)param_2 - 1);
    } while (param_2 != (byte *)0x0);
    if (param_3 == 0) goto LAB_006d0605;
    if (param_3 < 0x10) goto LAB_006d05d2;
  }
  uVar20 = param_3 >> 4;
  do {
    param_3 = param_3 - 0x10;
    iVar19 = uVar3 + *pbVar21;
    iVar4 = iVar19 + (uint)pbVar21[1];
    iVar5 = iVar4 + (uint)pbVar21[2];
    iVar6 = iVar5 + (uint)pbVar21[3];
    iVar7 = iVar6 + (uint)pbVar21[4];
    iVar8 = iVar7 + (uint)pbVar21[5];
    iVar9 = iVar8 + (uint)pbVar21[6];
    iVar10 = iVar9 + (uint)pbVar21[7];
    iVar11 = iVar10 + (uint)pbVar21[8];
    iVar12 = iVar11 + (uint)pbVar21[9];
    iVar13 = iVar12 + (uint)pbVar21[10];
    iVar14 = iVar13 + (uint)pbVar21[0xb];
    iVar15 = iVar14 + (uint)pbVar21[0xc];
    iVar16 = iVar15 + (uint)pbVar21[0xd];
    iVar17 = iVar16 + (uint)pbVar21[0xe];
    pbVar1 = pbVar21 + 0xf;
    pbVar21 = pbVar21 + 0x10;
    uVar3 = iVar17 + (uint)*pbVar1;
    param_1 = param_1 + iVar19 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 + iVar11 +
              iVar12 + iVar13 + iVar14 + iVar15 + iVar16 + iVar17 + uVar3;
    uVar20 = uVar20 - 1;
  } while (uVar20 != 0);
  for (; param_3 != 0; param_3 = param_3 - 1) {
LAB_006d05d2:
    bVar2 = *pbVar21;
    pbVar21 = pbVar21 + 1;
    uVar3 = uVar3 + bVar2;
    param_1 = param_1 + uVar3;
  }
  uVar3 = uVar3 % 0xfff1;
  param_1 = param_1 % 0xfff1;
LAB_006d0605:
  return param_1 << 0x10 | uVar3;
}


/* ==== 006d0620  FUN_006d0620  size=799 ==== */

uint FUN_006d0620(uint param_1,uint *param_2,uint param_3)

{
  uint *puVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint local_c;
  uint local_8;
  
  if (param_2 == (uint *)0x0) {
    return 0;
  }
  uVar3 = ~param_1;
  if (0x16 < param_3) {
    do {
      if (((uint)param_2 & 3) == 0) break;
      uVar5 = *param_2;
      param_2 = (uint *)((int)param_2 + 1);
      uVar3 = uVar3 >> 8 ^ *(uint *)(&DAT_0072be18 + (((byte)uVar5 ^ uVar3) & 0xff) * 4);
      param_3 = param_3 - 1;
    } while (param_3 != 0);
    uVar4 = param_3 / 0x14;
    uVar5 = 0;
    param_1 = 0;
    local_8 = 0;
    local_c = 0;
    param_3 = param_3 % 0x14;
    while (uVar4 = uVar4 - 1, uVar4 != 0) {
      uVar3 = *param_2 ^ uVar3;
      param_1 = param_2[1] ^ param_1;
      uVar5 = param_2[2] ^ uVar5;
      local_8 = param_2[3] ^ local_8;
      puVar1 = param_2 + 4;
      param_2 = param_2 + 5;
      local_c = *puVar1 ^ local_c;
      uVar3 = *(uint *)(&DAT_0072c218 + (uVar3 & 0xff) * 4) ^
              *(uint *)(&DAT_0072ca18 + (uVar3 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_0072c618 + (uVar3 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_0072ce18 + (uVar3 >> 0x18) * 4);
      param_1 = *(uint *)(&DAT_0072c218 + (param_1 & 0xff) * 4) ^
                *(uint *)(&DAT_0072ca18 + (param_1 >> 0x10 & 0xff) * 4) ^
                *(uint *)(&DAT_0072c618 + (param_1 >> 8 & 0xff) * 4) ^
                *(uint *)(&DAT_0072ce18 + (param_1 >> 0x18) * 4);
      uVar5 = *(uint *)(&DAT_0072c218 + (uVar5 & 0xff) * 4) ^
              *(uint *)(&DAT_0072ca18 + (uVar5 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_0072c618 + (uVar5 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_0072ce18 + (uVar5 >> 0x18) * 4);
      local_8 = *(uint *)(&DAT_0072c218 + (local_8 & 0xff) * 4) ^
                *(uint *)(&DAT_0072ca18 + (local_8 >> 0x10 & 0xff) * 4) ^
                *(uint *)(&DAT_0072c618 + (local_8 >> 8 & 0xff) * 4) ^
                *(uint *)(&DAT_0072ce18 + (local_8 >> 0x18) * 4);
      local_c = *(uint *)(&DAT_0072c218 + (local_c & 0xff) * 4) ^
                *(uint *)(&DAT_0072ca18 + (local_c >> 0x10 & 0xff) * 4) ^
                *(uint *)(&DAT_0072c618 + (local_c >> 8 & 0xff) * 4) ^
                *(uint *)(&DAT_0072ce18 + (local_c >> 0x18) * 4);
    }
    uVar3 = FUN_006d0950(*param_2 ^ uVar3);
    uVar3 = FUN_006d0950(uVar3 ^ param_2[1] ^ param_1);
    uVar3 = FUN_006d0950(uVar3 ^ param_2[2] ^ uVar5);
    uVar3 = FUN_006d0950(uVar3 ^ param_2[3] ^ local_8);
    uVar3 = FUN_006d0950(uVar3 ^ param_2[4] ^ local_c);
    param_2 = param_2 + 5;
  }
  if (7 < param_3) {
    uVar5 = param_3 >> 3;
    do {
      param_3 = param_3 - 8;
      uVar3 = uVar3 >> 8 ^ *(uint *)(&DAT_0072be18 + (((byte)*param_2 ^ uVar3) & 0xff) * 4);
      uVar3 = uVar3 >> 8 ^
              *(uint *)(&DAT_0072be18 + ((*(byte *)((int)param_2 + 1) ^ uVar3) & 0xff) * 4);
      uVar3 = uVar3 >> 8 ^
              *(uint *)(&DAT_0072be18 + ((*(byte *)((int)param_2 + 2) ^ uVar3) & 0xff) * 4);
      uVar3 = uVar3 >> 8 ^
              *(uint *)(&DAT_0072be18 + ((*(byte *)((int)param_2 + 3) ^ uVar3) & 0xff) * 4);
      uVar3 = uVar3 >> 8 ^ *(uint *)(&DAT_0072be18 + (((byte)param_2[1] ^ uVar3) & 0xff) * 4);
      uVar3 = uVar3 >> 8 ^
              *(uint *)(&DAT_0072be18 + ((*(byte *)((int)param_2 + 5) ^ uVar3) & 0xff) * 4);
      uVar3 = uVar3 >> 8 ^
              *(uint *)(&DAT_0072be18 + ((*(byte *)((int)param_2 + 6) ^ uVar3) & 0xff) * 4);
      pbVar2 = (byte *)((int)param_2 + 7);
      param_2 = param_2 + 2;
      uVar3 = uVar3 >> 8 ^ *(uint *)(&DAT_0072be18 + ((*pbVar2 ^ uVar3) & 0xff) * 4);
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  for (; param_3 != 0; param_3 = param_3 - 1) {
    uVar5 = *param_2;
    param_2 = (uint *)((int)param_2 + 1);
    uVar3 = uVar3 >> 8 ^ *(uint *)(&DAT_0072be18 + (((byte)uVar5 ^ uVar3) & 0xff) * 4);
  }
  return ~uVar3;
}


/* ==== 006d0950  FUN_006d0950  size=62 ==== */

uint FUN_006d0950(uint param_1)

{
  uint uVar1;
  
  uVar1 = param_1 >> 8 ^ *(uint *)(&DAT_0072be18 + (param_1 & 0xff) * 4);
  uVar1 = uVar1 >> 8 ^ *(uint *)(&DAT_0072be18 + (uVar1 & 0xff) * 4);
  uVar1 = uVar1 >> 8 ^ *(uint *)(&DAT_0072be18 + (uVar1 & 0xff) * 4);
  return uVar1 >> 8 ^ *(uint *)(&DAT_0072be18 + (uVar1 & 0xff) * 4);
}


/* ==== 006d09c0  FUN_006d09c0  size=1183 ==== */

undefined4
FUN_006d09c0(int param_1,int param_2,uint param_3,int *param_4,uint *param_5,ushort *param_6)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  ushort *puVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  byte bVar9;
  int iVar10;
  uint uVar11;
  bool bVar12;
  bool bVar13;
  ushort auStack_7c [16];
  ushort local_5c [16];
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  ushort *local_28;
  ushort *local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  int local_c;
  uint local_8;
  
  uVar5 = 0;
  local_5c[0] = 0;
  local_5c[1] = 0;
  local_5c[2] = 0;
  local_5c[3] = 0;
  local_5c[4] = 0;
  local_5c[5] = 0;
  local_5c[6] = 0;
  local_5c[7] = 0;
  local_5c[8] = 0;
  local_5c[9] = 0;
  local_5c[10] = 0;
  local_5c[0xb] = 0;
  local_5c[0xc] = 0;
  local_5c[0xd] = 0;
  local_5c[0xe] = 0;
  local_5c[0xf] = 0;
  if (param_3 != 0) {
    do {
      iVar10 = uVar5 * 2;
      uVar5 = uVar5 + 1;
      local_5c[*(ushort *)(param_2 + iVar10)] = local_5c[*(ushort *)(param_2 + iVar10)] + 1;
    } while (uVar5 < param_3);
  }
  puVar4 = local_5c + 0xd;
  uVar5 = 0xf;
  do {
    if (puVar4[2] != 0) break;
    if (puVar4[1] != 0) {
      uVar5 = uVar5 - 1;
      break;
    }
    if (*puVar4 != 0) {
      uVar5 = uVar5 - 2;
      break;
    }
    if (puVar4[-1] != 0) {
      uVar5 = uVar5 - 3;
      break;
    }
    if (puVar4[-2] != 0) {
      uVar5 = uVar5 - 4;
      break;
    }
    uVar5 = uVar5 - 5;
    puVar4 = puVar4 + -5;
  } while (uVar5 != 0);
  uVar6 = uVar5;
  if (*param_5 <= uVar5) {
    uVar6 = *param_5;
  }
  if (uVar5 == 0) {
    *(undefined4 *)*param_4 = 0x140;
    *param_4 = *param_4 + 4;
    *(undefined4 *)*param_4 = 0x140;
    *param_4 = *param_4 + 4;
    *param_5 = 1;
    return 0;
  }
  uVar11 = 1;
  local_8 = 1;
  if (1 < uVar5) {
    do {
      if (local_5c[uVar11] != 0) break;
      uVar11 = uVar11 + 1;
    } while (uVar11 < uVar5);
    local_8 = uVar11;
  }
  iVar10 = 1;
  local_1c = local_8;
  if (local_8 <= uVar6) {
    local_1c = uVar6;
  }
  uVar6 = 1;
  do {
    iVar10 = iVar10 * 2 - (uint)local_5c[uVar6];
    if (iVar10 < 0) {
      return 0xffffffff;
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 < 0x10);
  if ((0 < iVar10) && ((param_1 == 0 || (uVar5 != 1)))) {
    return 0xffffffff;
  }
  uVar6 = 2;
  auStack_7c[1] = 0;
  do {
    *(short *)((int)auStack_7c + uVar6 + 2) =
         *(short *)((int)local_5c + uVar6) + *(short *)((int)auStack_7c + uVar6);
    uVar6 = uVar6 + 2;
  } while (uVar6 < 0x1e);
  uVar6 = 0;
  if (param_3 != 0) {
    do {
      uVar3 = *(ushort *)(param_2 + uVar6 * 2);
      if (uVar3 != 0) {
        param_6[auStack_7c[uVar3]] = (ushort)uVar6;
        auStack_7c[*(ushort *)(param_2 + uVar6 * 2)] =
             auStack_7c[*(ushort *)(param_2 + uVar6 * 2)] + 1;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < param_3);
  }
  bVar2 = (byte)local_1c;
  if (param_1 == 0) {
    local_18 = 1 << (bVar2 & 0x1f);
    local_10 = local_18;
    local_24 = param_6;
    local_28 = param_6;
    local_20 = 0x14;
    local_c = *param_4;
    local_2c = local_18 - 1;
  }
  else {
    if (param_1 == 1) {
      local_10 = 1 << (bVar2 & 0x1f);
      local_28 = (ushort *)&DAT_0072d370;
      local_24 = (ushort *)&DAT_0072d3b0;
      local_20 = 0x101;
      local_c = *param_4;
      local_18 = local_10;
      local_2c = local_10 - 1;
    }
    else {
      local_c = *param_4;
      local_10 = 1 << (bVar2 & 0x1f);
      local_18 = local_10;
      local_2c = local_10 - 1;
      local_28 = (ushort *)&DAT_0072d3f0;
      local_24 = (ushort *)&DAT_0072d430;
      local_20 = 0;
      if (param_1 != 1) {
        local_28 = (ushort *)&DAT_0072d3f0;
        local_24 = (ushort *)&DAT_0072d430;
        local_20 = 0;
        if (param_1 == 2) {
          local_28 = (ushort *)&DAT_0072d3f0;
          local_24 = (ushort *)&DAT_0072d430;
          local_20 = 0;
          local_8 = local_8;
          if (0x250 < local_10) {
            return 1;
          }
        }
        goto LAB_006d0c2f;
      }
    }
    if (0x354 < local_10) {
      return 1;
    }
  }
LAB_006d0c2f:
  local_30 = 0;
  local_14 = 0;
  local_34 = 0xffffffff;
  uVar6 = local_8;
  local_18 = local_10;
  do {
    do {
      do {
        cVar1 = (char)uVar6;
        bVar9 = (byte)local_14;
        bVar2 = cVar1 - bVar9;
        uVar11 = (uint)*param_6;
        if (uVar11 + 1 < local_20) {
          param_3 = (uint)CONCAT21(*param_6,bVar2) << 8;
        }
        else {
          param_3._1_3_ = (uint3)bVar2;
          if (uVar11 < local_20) {
            param_3 = CONCAT31(param_3._1_3_,0x60);
            uVar3 = 0;
          }
          else {
            param_3._0_2_ = CONCAT11(bVar2,(char)local_24[uVar11 - local_20]);
            uVar3 = local_28[uVar11 - local_20];
          }
          param_3 = CONCAT22(uVar3,(undefined2)param_3);
        }
        iVar10 = 1 << (cVar1 - bVar9 & 0x1f);
        local_3c = local_18;
        local_38 = iVar10 * 4;
        piVar7 = (int *)(local_c + ((local_30 >> (bVar9 & 0x1f)) + local_18) * 4);
        uVar11 = local_18;
        do {
          piVar7 = piVar7 + -iVar10;
          *piVar7 = param_3;
          uVar11 = uVar11 - iVar10;
        } while (uVar11 != 0);
        for (uVar11 = 1 << (cVar1 - 1U & 0x1f); (local_30 & uVar11) != 0; uVar11 = uVar11 >> 1) {
        }
        if (uVar11 == 0) {
          uVar11 = 0;
        }
        else {
          uVar11 = uVar11 + (uVar11 - 1 & local_30);
        }
        param_6 = param_6 + 1;
        local_30 = uVar11;
        puVar4 = local_5c + uVar6;
        *puVar4 = *puVar4 - 1;
        if (*puVar4 == 0) {
          if (uVar6 == uVar5) {
            if (uVar11 != 0) {
              param_3 = CONCAT31(param_3._1_3_,0x40);
              param_3 = param_3 & 0xffff;
              *(uint *)(local_c + uVar11 * 4) = param_3;
            }
            *param_4 = *param_4 + local_10 * 4;
            *param_5 = local_1c;
            return 0;
          }
          uVar6 = (uint)*(ushort *)(param_2 + (uint)*param_6 * 2);
          local_8 = uVar6;
        }
      } while (uVar6 <= local_1c);
      local_38 = local_2c & uVar11;
    } while (local_38 == local_34);
    if (local_14 == 0) {
      local_14 = local_1c;
    }
    local_c = local_c + local_3c * 4;
    iVar8 = uVar6 - local_14;
    iVar10 = 1 << ((byte)iVar8 & 0x1f);
    local_18 = iVar8;
    if (uVar6 < uVar5) {
      puVar4 = local_5c + uVar6;
      do {
        uVar3 = *puVar4;
        if ((int)(iVar10 - (uint)uVar3) < 1) break;
        uVar6 = uVar6 + 1;
        iVar8 = iVar8 + 1;
        puVar4 = puVar4 + 1;
        iVar10 = (iVar10 - (uint)uVar3) * 2;
      } while (uVar6 < uVar5);
    }
    local_18 = 1 << ((byte)iVar8 & 0x1f);
    local_10 = local_10 + local_18;
    if (param_1 == 1) {
      bVar12 = local_10 < 0x354;
      bVar13 = local_10 == 0x354;
LAB_006d0de8:
      if (!bVar12 && !bVar13) {
        return 1;
      }
    }
    else if (param_1 == 2) {
      bVar12 = local_10 < 0x250;
      bVar13 = local_10 == 0x250;
      goto LAB_006d0de8;
    }
    local_34 = local_38;
    *(byte *)(*param_4 + local_38 * 4) = (byte)iVar8;
    *(char *)(*param_4 + 1 + local_38 * 4) = (char)local_1c;
    *(short *)(*param_4 + 2 + local_38 * 4) = (short)(local_c - *param_4 >> 2);
    uVar6 = local_8;
  } while( true );
}


/* ==== 006d0e60  zlib_inflate_fast_or_codes  size=1057 ==== */

void zlib_inflate_fast_or_codes(int *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  byte *pbVar11;
  uint uVar12;
  uint uVar13;
  byte *pbVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  byte *pbVar18;
  uint uVar19;
  byte *pbVar20;
  byte *pbVar21;
  byte *pbVar22;
  uint uVar23;
  byte *pbVar24;
  int iVar25;
  byte *local_8;
  
  iVar2 = param_1[7];
  pbVar18 = (byte *)*param_1;
  pbVar3 = (byte *)param_1[3];
  pbVar11 = pbVar18 + param_1[1] + -5;
  iVar4 = param_1[4];
  uVar23 = *(uint *)(iVar2 + 0x40);
  iVar15 = *(int *)(iVar2 + 0x2c);
  uVar5 = *(uint *)(iVar2 + 0x30);
  uVar6 = *(uint *)(iVar2 + 0x34);
  pbVar7 = *(byte **)(iVar2 + 0x38);
  iVar25 = *(int *)(iVar2 + 0x50);
  iVar8 = *(int *)(iVar2 + 0x54);
  uVar16 = *(uint *)(iVar2 + 0x3c);
  uVar9 = *(undefined4 *)(iVar2 + 0x58);
  uVar10 = *(undefined4 *)(iVar2 + 0x5c);
  pbVar20 = pbVar3;
  local_8 = pbVar18;
LAB_006d0ef0:
  if (uVar23 < 0xf) {
    bVar1 = *pbVar18;
    pbVar18 = local_8 + 2;
    uVar16 = uVar16 + ((uint)bVar1 << ((byte)uVar23 & 0x1f)) +
             ((uint)local_8[1] << ((byte)uVar23 + 8 & 0x1f));
    uVar23 = uVar23 + 0x10;
    local_8 = pbVar18;
  }
  pbVar24 = (byte *)(iVar25 + ((1 << ((byte)uVar9 & 0x1f)) - 1U & uVar16) * 4);
  uVar16 = uVar16 >> (pbVar24[1] & 0x1f);
  uVar23 = uVar23 - pbVar24[1];
  bVar1 = *pbVar24;
  while (bVar1 != 0) {
    pbVar22 = pbVar20;
    if ((bVar1 & 0x10) != 0) {
      uVar19 = (uint)*(ushort *)(pbVar24 + 2);
      uVar13 = bVar1 & 0xf;
      if ((bVar1 & 0xf) != 0) {
        if (uVar23 < uVar13) {
          uVar16 = uVar16 + ((uint)*local_8 << ((byte)uVar23 & 0x1f));
          uVar23 = uVar23 + 8;
          local_8 = local_8 + 1;
        }
        uVar12 = (1 << (sbyte)uVar13) - 1U & uVar16;
        uVar16 = uVar16 >> (sbyte)uVar13;
        uVar19 = uVar19 + uVar12;
        uVar23 = uVar23 - uVar13;
      }
      if (uVar23 < 0xf) {
        bVar1 = *local_8;
        pbVar18 = local_8 + 1;
        local_8 = local_8 + 2;
        uVar16 = uVar16 + ((uint)bVar1 << ((byte)uVar23 & 0x1f)) +
                 ((uint)*pbVar18 << ((byte)uVar23 + 8 & 0x1f));
        uVar23 = uVar23 + 0x10;
      }
      pbVar18 = (byte *)(iVar8 + ((1 << ((byte)uVar10 & 0x1f)) - 1U & uVar16) * 4);
      uVar16 = uVar16 >> (pbVar18[1] & 0x1f);
      uVar23 = uVar23 - pbVar18[1];
      bVar1 = *pbVar18;
      goto joined_r0x006d0ff5;
    }
    if ((bVar1 & 0x40) != 0) {
      if ((bVar1 & 0x20) == 0) {
        param_1[6] = (int)"invalid literal/length code";
        *(undefined4 *)(iVar2 + 4) = 0x3f51;
      }
      else {
        *(undefined4 *)(iVar2 + 4) = 0x3f3f;
      }
      goto LAB_006d11e6;
    }
    iVar17 = ((1 << (bVar1 & 0x1f)) - 1U & uVar16) + (uint)*(ushort *)(pbVar24 + 2);
    bVar1 = *(byte *)(iVar25 + 1 + iVar17 * 4);
    pbVar24 = (byte *)(iVar25 + iVar17 * 4);
    uVar23 = uVar23 - bVar1;
    uVar16 = uVar16 >> (bVar1 & 0x1f);
    bVar1 = *pbVar24;
  }
  *pbVar20 = pbVar24[2];
  pbVar22 = pbVar20 + 1;
  goto LAB_006d11d5;
joined_r0x006d0ff5:
  if ((bVar1 & 0x10) != 0) goto LAB_006d102e;
  if ((bVar1 & 0x40) != 0) {
    param_1[6] = (int)"invalid distance code";
    *(undefined4 *)(iVar2 + 4) = 0x3f51;
    goto LAB_006d11e6;
  }
  iVar17 = ((1 << (bVar1 & 0x1f)) - 1U & uVar16) + (uint)*(ushort *)(pbVar18 + 2);
  bVar1 = *(byte *)(iVar8 + 1 + iVar17 * 4);
  pbVar18 = (byte *)(iVar8 + iVar17 * 4);
  uVar23 = uVar23 - bVar1;
  uVar16 = uVar16 >> (bVar1 & 0x1f);
  bVar1 = *pbVar18;
  goto joined_r0x006d0ff5;
LAB_006d102e:
  uVar12 = bVar1 & 0xf;
  uVar13 = uVar23;
  pbVar24 = local_8;
  if (uVar23 < uVar12) {
    uVar13 = uVar23 + 8;
    uVar16 = uVar16 + ((uint)*local_8 << ((byte)uVar23 & 0x1f));
    pbVar24 = local_8 + 1;
    if (uVar13 < uVar12) {
      uVar16 = uVar16 + ((uint)local_8[1] << ((byte)uVar13 & 0x1f));
      uVar13 = uVar23 + 0x10;
      pbVar24 = local_8 + 2;
    }
  }
  local_8 = pbVar24;
  uVar23 = uVar13 - uVar12;
  uVar13 = (1 << (sbyte)uVar12) - 1U & uVar16;
  uVar16 = uVar16 >> (sbyte)uVar12;
  uVar13 = *(ushort *)(pbVar18 + 2) + uVar13;
  pbVar18 = local_8;
  if (uVar13 <= (uint)((int)pbVar20 - (int)(pbVar3 + (iVar4 - param_2)))) {
    pbVar24 = pbVar20 + -uVar13;
    do {
      pbVar21 = pbVar20;
      pbVar14 = pbVar24;
      *pbVar21 = *pbVar14;
      uVar19 = uVar19 - 3;
      pbVar21[1] = pbVar14[1];
      pbVar21[2] = pbVar14[2];
      pbVar20 = pbVar21 + 3;
      pbVar24 = pbVar14 + 3;
    } while (2 < uVar19);
    pbVar22 = pbVar20;
    if (uVar19 != 0) {
      *pbVar20 = pbVar14[3];
      pbVar22 = pbVar21 + 4;
      if (1 < uVar19) {
        pbVar21[4] = pbVar14[4];
        pbVar22 = pbVar21 + 5;
      }
    }
    goto LAB_006d11d5;
  }
  uVar12 = uVar13 - ((int)pbVar20 - (int)(pbVar3 + (iVar4 - param_2)));
  if ((uVar5 < uVar12) && (*(int *)(iVar2 + 0x1bc4) != 0)) {
    param_1[6] = (int)"invalid distance too far back";
    *(undefined4 *)(iVar2 + 4) = 0x3f51;
LAB_006d11e6:
    iVar15 = (int)local_8 - (uVar23 >> 3);
    param_1[3] = (int)pbVar22;
    iVar25 = uVar23 + (uVar23 >> 3) * -8;
    *param_1 = iVar15;
    param_1[1] = (int)(pbVar11 + (5 - iVar15));
    param_1[4] = (int)(pbVar3 + iVar4 + -0x101 + (0x101 - (int)pbVar22));
    *(int *)(iVar2 + 0x40) = iVar25;
    *(uint *)(iVar2 + 0x3c) = (1 << ((byte)iVar25 & 0x1f)) - 1U & uVar16;
    return;
  }
  if (uVar6 == 0) {
    pbVar24 = pbVar7 + (iVar15 - uVar12);
    if (uVar12 < uVar19) {
      uVar19 = uVar19 - uVar12;
      do {
        bVar1 = *pbVar24;
        pbVar24 = pbVar24 + 1;
        *pbVar20 = bVar1;
        pbVar20 = pbVar20 + 1;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
LAB_006d1132:
      pbVar24 = pbVar20 + -uVar13;
    }
  }
  else {
    pbVar24 = pbVar7 + (uVar6 - uVar12);
    if (uVar6 < uVar12) {
      pbVar24 = pbVar24 + iVar15;
      uVar12 = uVar12 - uVar6;
      if (uVar12 < uVar19) {
        uVar19 = uVar19 - uVar12;
        iVar17 = (int)pbVar24 - (int)pbVar20;
        do {
          *pbVar20 = pbVar20[iVar17];
          pbVar20 = pbVar20 + 1;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
        pbVar24 = pbVar7;
        if (uVar6 < uVar19) {
          uVar19 = uVar19 - uVar6;
          uVar12 = uVar6;
          do {
            bVar1 = *pbVar24;
            pbVar24 = pbVar24 + 1;
            *pbVar20 = bVar1;
            pbVar20 = pbVar20 + 1;
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
          goto LAB_006d1132;
        }
      }
    }
    else if (uVar12 < uVar19) {
      uVar19 = uVar19 - uVar12;
      do {
        bVar1 = *pbVar24;
        pbVar24 = pbVar24 + 1;
        *pbVar20 = bVar1;
        pbVar20 = pbVar20 + 1;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
      goto LAB_006d1132;
    }
  }
  if (2 < uVar19) {
    iVar17 = (uVar19 - 3) / 3 + 1;
    do {
      uVar19 = uVar19 - 3;
      *pbVar20 = *pbVar24;
      pbVar20[1] = pbVar24[1];
      pbVar22 = pbVar24 + 2;
      pbVar24 = pbVar24 + 3;
      pbVar20[2] = *pbVar22;
      pbVar20 = pbVar20 + 3;
      iVar17 = iVar17 + -1;
    } while (iVar17 != 0);
  }
  pbVar22 = pbVar20;
  if (uVar19 != 0) {
    *pbVar20 = *pbVar24;
    pbVar22 = pbVar20 + 1;
    if (1 < uVar19) {
      pbVar20[1] = pbVar24[1];
      pbVar22 = pbVar20 + 2;
    }
  }
LAB_006d11d5:
  if ((pbVar11 <= pbVar18) || (pbVar20 = pbVar22, pbVar3 + iVar4 + -0x101 <= pbVar22))
  goto LAB_006d11e6;
  goto LAB_006d0ef0;
}


