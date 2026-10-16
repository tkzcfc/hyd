/* Auto-decompiled pseudo-code from game.exe / unclassified_0x00600000_0x006fffff part 3/3 */
/* NOT original source. Bucketed by evidence (strings/imports/call-graph), not raw address. */

/* ==== 006eaeed  FUN_006eaeed  size=707 ==== */

undefined4 FUN_006eaeed(void)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  int in_ECX;
  char *pcVar6;
  bool bVar7;
  undefined4 uStack_8;
  
  cVar3 = FUN_006ec30e(*(undefined4 *)(in_ECX + 8));
  if (cVar3 != '\0') {
    pcVar6 = *(char **)(in_ECX + 0xc);
    if (pcVar6 != (char *)0x0) {
      iVar5 = *(int *)(in_ECX + 0x450) + 1;
      *(int *)(in_ECX + 0x450) = iVar5;
      iVar2 = in_ECX;
      do {
        if (iVar5 == 2) {
          return *(undefined4 *)(in_ECX + 0x14);
        }
        *(undefined4 *)(in_ECX + 0x34) = 0;
        *(undefined1 *)(in_ECX + 0x18) = 0;
        cVar3 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        uStack_8._0_3_ = (undefined3)iVar2;
        uStack_8 = CONCAT13(cVar3,(undefined3)uStack_8);
        *(char **)(in_ECX + 0xc) = pcVar6;
        *(char *)(in_ECX + 0x2d) = cVar3;
        iVar2 = uStack_8;
        while ((cVar3 != '\0' && (-1 < *(int *)(in_ECX + 0x14)))) {
          uStack_8._0_3_ = (undefined3)iVar2;
          bVar4 = FUN_006eab2c(CONCAT31((undefined3)uStack_8,cVar3),*(undefined1 *)(in_ECX + 0x18));
          *(byte *)(in_ECX + 0x18) = bVar4;
          if (7 < bVar4) {
            iVar5 = *(int *)(in_ECX + 8);
            *(undefined1 *)(iVar5 + 0x1c) = 1;
            *(undefined4 *)(iVar5 + 0x18) = 0x16;
            goto LAB_006eaf22;
          }
          uStack_8._3_1_ = (char)((uint)iVar2 >> 0x18);
          uStack_8 = iVar2;
          switch(bVar4) {
          case 0:
            iVar5 = *(int *)(in_ECX + 8);
            *(undefined1 *)(in_ECX + 0x38) = 0;
            if (*(char *)(iVar5 + 0x14) == '\0') {
              FUN_006ec260();
            }
            cVar3 = *(char *)(in_ECX + 0x2d);
            uStack_8 = CONCAT13(cVar3,(undefined3)uStack_8);
            iVar5 = ___acrt_locale_get_ctype_array_value
                              (**(undefined4 **)(iVar5 + 0xc),(int)cVar3,0x8000);
            piVar1 = (int *)(in_ECX + 0x448);
            if (iVar5 != 0) {
              iVar5 = *piVar1;
              if (*(int *)(iVar5 + 8) == *(int *)(iVar5 + 4)) {
                if (*(char *)(iVar5 + 0xc) == '\0') {
                  *(undefined4 *)(in_ECX + 0x14) = 0xffffffff;
                }
                else {
                  *(int *)(in_ECX + 0x14) = *(int *)(in_ECX + 0x14) + 1;
                }
              }
              else {
                *(int *)(in_ECX + 0x14) = *(int *)(in_ECX + 0x14) + 1;
                *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
                **(char **)*piVar1 = cVar3;
                *(int *)*piVar1 = *(int *)*piVar1 + 1;
              }
              cVar3 = **(char **)(in_ECX + 0xc);
              *(char **)(in_ECX + 0xc) = *(char **)(in_ECX + 0xc) + 1;
              *(char *)(in_ECX + 0x2d) = cVar3;
              if (cVar3 == '\0') {
                iVar5 = *(int *)(in_ECX + 8);
                *(undefined1 *)(iVar5 + 0x1c) = 1;
                *(undefined4 *)(iVar5 + 0x18) = 0x16;
                FUN_006e8bb2(0,0,0,0,0,*(undefined4 *)(in_ECX + 8));
                iVar5 = *(int *)(in_ECX + 8);
                *(undefined1 *)(iVar5 + 0x1c) = 1;
                *(undefined4 *)(iVar5 + 0x18) = 0x16;
                FUN_006e8bb2(0,0,0,0,0,*(undefined4 *)(in_ECX + 8));
                return 0xffffffff;
              }
            }
            iVar5 = *piVar1;
            if (*(int *)(iVar5 + 8) == *(int *)(iVar5 + 4)) {
              if (*(char *)(iVar5 + 0xc) == '\0') {
                *(undefined4 *)(in_ECX + 0x14) = 0xffffffff;
              }
              else {
                *(int *)(in_ECX + 0x14) = *(int *)(in_ECX + 0x14) + 1;
              }
            }
            else {
              *(int *)(in_ECX + 0x14) = *(int *)(in_ECX + 0x14) + 1;
              *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
              **(char **)*piVar1 = cVar3;
              *(int *)*piVar1 = *(int *)*piVar1 + 1;
            }
            break;
          case 1:
            *(undefined4 *)(in_ECX + 0x24) = 0xffffffff;
            *(undefined4 *)(in_ECX + 0x20) = 0;
            *(undefined1 *)(in_ECX + 0x2c) = 0;
            *(undefined4 *)(in_ECX + 0x1c) = 0;
            *(undefined4 *)(in_ECX + 0x28) = 0;
            *(undefined1 *)(in_ECX + 0x38) = 0;
            break;
          case 2:
            if (uStack_8._3_1_ == ' ') {
              *(uint *)(in_ECX + 0x1c) = *(uint *)(in_ECX + 0x1c) | 2;
            }
            else if (uStack_8._3_1_ == '#') {
              *(uint *)(in_ECX + 0x1c) = *(uint *)(in_ECX + 0x1c) | 0x20;
            }
            else if (uStack_8._3_1_ == '+') {
              *(uint *)(in_ECX + 0x1c) = *(uint *)(in_ECX + 0x1c) | 1;
            }
            else if (uStack_8._3_1_ == '-') {
              *(uint *)(in_ECX + 0x1c) = *(uint *)(in_ECX + 0x1c) | 4;
            }
            else {
              bVar7 = uStack_8._3_1_ == '0';
              if (bVar7) {
                *(uint *)(in_ECX + 0x1c) = *(uint *)(in_ECX + 0x1c) | 8;
              }
            }
            break;
          case 3:
            if (uStack_8._3_1_ != '*') {
              iVar5 = in_ECX + 0x20;
              goto LAB_006eb0ee;
            }
            piVar1 = *(int **)(in_ECX + 0x10);
            *(int **)(in_ECX + 0x10) = piVar1 + 1;
            iVar5 = *piVar1;
            *(int *)(in_ECX + 0x20) = iVar5;
            if (iVar5 < 0) {
              *(uint *)(in_ECX + 0x1c) = *(uint *)(in_ECX + 0x1c) | 4;
              *(int *)(in_ECX + 0x20) = -iVar5;
            }
LAB_006eb113:
            cVar3 = '\x01';
            goto LAB_006eb14f;
          case 4:
            *(undefined4 *)(in_ECX + 0x24) = 0;
            break;
          case 5:
            if (uStack_8._3_1_ == '*') {
              piVar1 = *(int **)(in_ECX + 0x10);
              *(int **)(in_ECX + 0x10) = piVar1 + 1;
              iVar5 = *piVar1;
              *(int *)(in_ECX + 0x24) = iVar5;
              if (iVar5 < 0) {
                *(undefined4 *)(in_ECX + 0x24) = 0xffffffff;
              }
              goto LAB_006eb113;
            }
            iVar5 = in_ECX + 0x24;
LAB_006eb0ee:
            cVar3 = FUN_006eabc5(iVar5);
            goto LAB_006eb14f;
          case 6:
            cVar3 = FUN_006eb5fe();
            goto LAB_006eb14f;
          case 7:
            cVar3 = FUN_006eba99();
LAB_006eb14f:
            if (cVar3 == '\0') {
              return 0xffffffff;
            }
            break;
          default:
            goto LAB_006eaf35;
          }
          cVar3 = **(char **)(in_ECX + 0xc);
          pcVar6 = *(char **)(in_ECX + 0xc) + 1;
          *(char **)(in_ECX + 0xc) = pcVar6;
          uStack_8 = CONCAT13(cVar3,(undefined3)uStack_8);
          *(char *)(in_ECX + 0x2d) = cVar3;
          iVar2 = uStack_8;
        }
        if ((*(char *)(in_ECX + 0x18) != '\0') && (*(char *)(in_ECX + 0x18) != '\a')) break;
        *(int *)(in_ECX + 0x450) = *(int *)(in_ECX + 0x450) + 1;
        iVar5 = *(int *)(in_ECX + 0x450);
      } while( true );
    }
    iVar5 = *(int *)(in_ECX + 8);
    *(undefined4 *)(iVar5 + 0x18) = 0x16;
    *(undefined1 *)(iVar5 + 0x1c) = 1;
LAB_006eaf22:
    FUN_006e8bb2(0,0,0,0,0,*(undefined4 *)(in_ECX + 8));
  }
LAB_006eaf35:
  return 0xffffffff;
}


/* ==== 006eb1d1  FUN_006eb1d1  size=692 ==== */

undefined4 FUN_006eb1d1(void)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  int in_ECX;
  char *pcVar6;
  bool bVar7;
  undefined4 uStack_8;
  
  cVar3 = FUN_006ec30e(*(undefined4 *)(in_ECX + 8));
  if (cVar3 != '\0') {
    pcVar6 = *(char **)(in_ECX + 0xc);
    if (pcVar6 != (char *)0x0) {
      iVar5 = *(int *)(in_ECX + 0x450) + 1;
      *(int *)(in_ECX + 0x450) = iVar5;
      iVar2 = in_ECX;
      do {
        if (iVar5 == 2) {
          return *(undefined4 *)(in_ECX + 0x14);
        }
        *(undefined4 *)(in_ECX + 0x34) = 0;
        *(undefined1 *)(in_ECX + 0x18) = 0;
        cVar3 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        uStack_8._0_3_ = (undefined3)iVar2;
        uStack_8 = CONCAT13(cVar3,(undefined3)uStack_8);
        *(char **)(in_ECX + 0xc) = pcVar6;
        *(char *)(in_ECX + 0x2d) = cVar3;
        iVar2 = uStack_8;
        while ((cVar3 != '\0' && (-1 < *(int *)(in_ECX + 0x14)))) {
          uStack_8._0_3_ = (undefined3)iVar2;
          bVar4 = FUN_006eaaf1(CONCAT31((undefined3)uStack_8,cVar3),*(undefined1 *)(in_ECX + 0x18));
          *(byte *)(in_ECX + 0x18) = bVar4;
          if (7 < bVar4) {
            iVar5 = *(int *)(in_ECX + 8);
            *(undefined1 *)(iVar5 + 0x1c) = 1;
            *(undefined4 *)(iVar5 + 0x18) = 0x16;
            goto LAB_006eb206;
          }
          uStack_8._3_1_ = (char)((uint)iVar2 >> 0x18);
          uStack_8 = iVar2;
          switch(bVar4) {
          case 0:
            iVar5 = *(int *)(in_ECX + 8);
            *(undefined1 *)(in_ECX + 0x38) = 0;
            if (*(char *)(iVar5 + 0x14) == '\0') {
              FUN_006ec260();
            }
            cVar3 = *(char *)(in_ECX + 0x2d);
            uStack_8 = CONCAT13(cVar3,(undefined3)uStack_8);
            iVar5 = ___acrt_locale_get_ctype_array_value
                              (**(undefined4 **)(iVar5 + 0xc),(int)cVar3,0x8000);
            piVar1 = (int *)(in_ECX + 0x448);
            if (iVar5 != 0) {
              iVar5 = *piVar1;
              if (*(int *)(iVar5 + 8) == *(int *)(iVar5 + 4)) {
                if (*(char *)(iVar5 + 0xc) == '\0') {
                  *(undefined4 *)(in_ECX + 0x14) = 0xffffffff;
                }
                else {
                  *(int *)(in_ECX + 0x14) = *(int *)(in_ECX + 0x14) + 1;
                }
              }
              else {
                *(int *)(in_ECX + 0x14) = *(int *)(in_ECX + 0x14) + 1;
                *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
                **(char **)*piVar1 = cVar3;
                *(int *)*piVar1 = *(int *)*piVar1 + 1;
              }
              cVar3 = **(char **)(in_ECX + 0xc);
              *(char **)(in_ECX + 0xc) = *(char **)(in_ECX + 0xc) + 1;
              *(char *)(in_ECX + 0x2d) = cVar3;
              if (cVar3 == '\0') {
                iVar5 = *(int *)(in_ECX + 8);
                *(undefined1 *)(iVar5 + 0x1c) = 1;
                *(undefined4 *)(iVar5 + 0x18) = 0x16;
                FUN_006e8bb2(0,0,0,0,0,*(undefined4 *)(in_ECX + 8));
                iVar5 = *(int *)(in_ECX + 8);
                *(undefined1 *)(iVar5 + 0x1c) = 1;
                *(undefined4 *)(iVar5 + 0x18) = 0x16;
                FUN_006e8bb2(0,0,0,0,0,*(undefined4 *)(in_ECX + 8));
                return 0xffffffff;
              }
            }
            iVar5 = *piVar1;
            if (*(int *)(iVar5 + 8) == *(int *)(iVar5 + 4)) {
              if (*(char *)(iVar5 + 0xc) == '\0') {
                *(undefined4 *)(in_ECX + 0x14) = 0xffffffff;
              }
              else {
                *(int *)(in_ECX + 0x14) = *(int *)(in_ECX + 0x14) + 1;
              }
            }
            else {
              *(int *)(in_ECX + 0x14) = *(int *)(in_ECX + 0x14) + 1;
              *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
              **(char **)*piVar1 = cVar3;
              *(int *)*piVar1 = *(int *)*piVar1 + 1;
            }
            break;
          case 1:
            *(undefined4 *)(in_ECX + 0x24) = 0xffffffff;
            *(undefined4 *)(in_ECX + 0x20) = 0;
            *(undefined1 *)(in_ECX + 0x2c) = 0;
            *(undefined4 *)(in_ECX + 0x1c) = 0;
            *(undefined4 *)(in_ECX + 0x28) = 0;
            *(undefined1 *)(in_ECX + 0x38) = 0;
            break;
          case 2:
            if (uStack_8._3_1_ == ' ') {
              *(uint *)(in_ECX + 0x1c) = *(uint *)(in_ECX + 0x1c) | 2;
            }
            else if (uStack_8._3_1_ == '#') {
              *(uint *)(in_ECX + 0x1c) = *(uint *)(in_ECX + 0x1c) | 0x20;
            }
            else if (uStack_8._3_1_ == '+') {
              *(uint *)(in_ECX + 0x1c) = *(uint *)(in_ECX + 0x1c) | 1;
            }
            else if (uStack_8._3_1_ == '-') {
              *(uint *)(in_ECX + 0x1c) = *(uint *)(in_ECX + 0x1c) | 4;
            }
            else {
              bVar7 = uStack_8._3_1_ == '0';
              if (bVar7) {
                *(uint *)(in_ECX + 0x1c) = *(uint *)(in_ECX + 0x1c) | 8;
              }
            }
            break;
          case 3:
            if (uStack_8._3_1_ != '*') {
              iVar5 = in_ECX + 0x20;
              goto LAB_006eb3d2;
            }
            piVar1 = *(int **)(in_ECX + 0x10);
            *(int **)(in_ECX + 0x10) = piVar1 + 1;
            iVar5 = *piVar1;
            *(int *)(in_ECX + 0x20) = iVar5;
            if (iVar5 < 0) {
              *(uint *)(in_ECX + 0x1c) = *(uint *)(in_ECX + 0x1c) | 4;
              *(int *)(in_ECX + 0x20) = -iVar5;
            }
LAB_006eb3f7:
            cVar3 = '\x01';
            goto LAB_006eb433;
          case 4:
            *(undefined4 *)(in_ECX + 0x24) = 0;
            break;
          case 5:
            if (uStack_8._3_1_ == '*') {
              piVar1 = *(int **)(in_ECX + 0x10);
              *(int **)(in_ECX + 0x10) = piVar1 + 1;
              iVar5 = *piVar1;
              *(int *)(in_ECX + 0x24) = iVar5;
              if (iVar5 < 0) {
                *(undefined4 *)(in_ECX + 0x24) = 0xffffffff;
              }
              goto LAB_006eb3f7;
            }
            iVar5 = in_ECX + 0x24;
LAB_006eb3d2:
            cVar3 = FUN_006eabc5(iVar5);
            goto LAB_006eb433;
          case 6:
            cVar3 = FUN_006eb5fe();
            goto LAB_006eb433;
          case 7:
            cVar3 = FUN_006eba99();
LAB_006eb433:
            if (cVar3 == '\0') {
              return 0xffffffff;
            }
            break;
          default:
            goto LAB_006eb219;
          }
          cVar3 = **(char **)(in_ECX + 0xc);
          pcVar6 = *(char **)(in_ECX + 0xc) + 1;
          *(char **)(in_ECX + 0xc) = pcVar6;
          uStack_8 = CONCAT13(cVar3,(undefined3)uStack_8);
          *(char *)(in_ECX + 0x2d) = cVar3;
          iVar2 = uStack_8;
        }
        *(int *)(in_ECX + 0x450) = *(int *)(in_ECX + 0x450) + 1;
        iVar5 = *(int *)(in_ECX + 0x450);
      } while( true );
    }
    iVar5 = *(int *)(in_ECX + 8);
    *(undefined1 *)(iVar5 + 0x1c) = 1;
    *(undefined4 *)(iVar5 + 0x18) = 0x16;
LAB_006eb206:
    FUN_006e8bb2(0,0,0,0,0,*(undefined4 *)(in_ECX + 8));
  }
LAB_006eb219:
  return 0xffffffff;
}


/* ==== 006eb4a5  FUN_006eb4a5  size=345 ==== */

uint FUN_006eb4a5(void)

{
  char cVar1;
  char *pcVar2;
  undefined4 in_EAX;
  undefined3 uVar5;
  char *pcVar3;
  uint uVar4;
  uint *in_ECX;
  
  cVar1 = *(char *)((int)in_ECX + 0x2d);
  uVar5 = (undefined3)((uint)in_EAX >> 8);
  pcVar3 = (char *)CONCAT31(uVar5,cVar1);
  if (cVar1 == 'F') {
    pcVar3 = (char *)(*in_ECX & 8);
    if (pcVar3 == (char *)0x0) {
      *(undefined1 *)(in_ECX + 6) = 7;
      uVar4 = FUN_006eb757();
      return uVar4;
    }
  }
  else if (cVar1 == 'N') {
    pcVar3 = (char *)(*in_ECX & 8);
    if (pcVar3 == (char *)0x0) {
      *(undefined1 *)(in_ECX + 6) = 8;
      goto LAB_006eb4da;
    }
  }
  else {
    if (in_ECX[10] != 0) {
LAB_006eb4da:
      uVar4 = in_ECX[2];
      *(undefined1 *)(uVar4 + 0x1c) = 1;
      *(undefined4 *)(uVar4 + 0x18) = 0x16;
      uVar4 = FUN_006e8bb2(0,0,0,0,0,in_ECX[2]);
      return uVar4 & 0xffffff00;
    }
    if (cVar1 < 'k') {
      if (cVar1 == 'j') {
        in_ECX[10] = 5;
        goto LAB_006eb5fb;
      }
      if (cVar1 == 'I') {
        pcVar2 = (char *)in_ECX[3];
        cVar1 = *pcVar2;
        pcVar3 = (char *)CONCAT31(uVar5,cVar1);
        if ((cVar1 == '3') && (pcVar2[1] == '2')) {
          pcVar3 = pcVar2 + 2;
          in_ECX[10] = 10;
          in_ECX[3] = (uint)pcVar3;
        }
        else if (cVar1 == '6') {
          if (pcVar2[1] == '4') {
            pcVar3 = pcVar2 + 2;
            in_ECX[10] = 0xb;
            in_ECX[3] = (uint)pcVar3;
          }
        }
        else if ((((cVar1 == 'd') || (cVar1 == 'i')) || (cVar1 == 'o')) ||
                (((cVar1 == 'u' || (cVar1 == 'x')) || (cVar1 == 'X')))) {
          in_ECX[10] = 9;
        }
        goto LAB_006eb5fb;
      }
      if (cVar1 == 'L') {
        in_ECX[10] = 8;
        goto LAB_006eb5fb;
      }
      if (cVar1 == 'T') {
        in_ECX[10] = 0xd;
        goto LAB_006eb5fb;
      }
      if (cVar1 != 'h') goto LAB_006eb5fb;
      if (*(char *)in_ECX[3] == 'h') {
        in_ECX[3] = (uint)((char *)in_ECX[3] + 1);
        pcVar3 = (char *)0x1;
      }
      else {
        pcVar3 = (char *)0x2;
      }
    }
    else {
      if (cVar1 != 'l') {
        if (cVar1 == 't') {
          in_ECX[10] = 7;
        }
        else if (cVar1 == 'w') {
          in_ECX[10] = 0xc;
        }
        else if (cVar1 == 'z') {
          in_ECX[10] = 6;
        }
        goto LAB_006eb5fb;
      }
      if (*(char *)in_ECX[3] == 'l') {
        in_ECX[3] = (uint)((char *)in_ECX[3] + 1);
        pcVar3 = (char *)0x4;
      }
      else {
        pcVar3 = (char *)0x3;
      }
    }
    in_ECX[10] = (uint)pcVar3;
  }
LAB_006eb5fb:
  return CONCAT31((int3)((uint)pcVar3 >> 8),1);
}


/* ==== 006eb5fe  FUN_006eb5fe  size=345 ==== */

uint FUN_006eb5fe(void)

{
  char cVar1;
  char *pcVar2;
  undefined4 in_EAX;
  undefined3 uVar5;
  char *pcVar3;
  uint uVar4;
  uint *in_ECX;
  
  cVar1 = *(char *)((int)in_ECX + 0x2d);
  uVar5 = (undefined3)((uint)in_EAX >> 8);
  pcVar3 = (char *)CONCAT31(uVar5,cVar1);
  if (cVar1 == 'F') {
    pcVar3 = (char *)(*in_ECX & 8);
    if (pcVar3 == (char *)0x0) {
      *(undefined1 *)(in_ECX + 6) = 7;
      uVar4 = FUN_006eba99();
      return uVar4;
    }
  }
  else if (cVar1 == 'N') {
    pcVar3 = (char *)(*in_ECX & 8);
    if (pcVar3 == (char *)0x0) {
      *(undefined1 *)(in_ECX + 6) = 8;
      goto LAB_006eb633;
    }
  }
  else {
    if (in_ECX[10] != 0) {
LAB_006eb633:
      uVar4 = in_ECX[2];
      *(undefined1 *)(uVar4 + 0x1c) = 1;
      *(undefined4 *)(uVar4 + 0x18) = 0x16;
      uVar4 = FUN_006e8bb2(0,0,0,0,0,in_ECX[2]);
      return uVar4 & 0xffffff00;
    }
    if (cVar1 < 'k') {
      if (cVar1 == 'j') {
        in_ECX[10] = 5;
        goto LAB_006eb754;
      }
      if (cVar1 == 'I') {
        pcVar2 = (char *)in_ECX[3];
        cVar1 = *pcVar2;
        pcVar3 = (char *)CONCAT31(uVar5,cVar1);
        if ((cVar1 == '3') && (pcVar2[1] == '2')) {
          pcVar3 = pcVar2 + 2;
          in_ECX[10] = 10;
          in_ECX[3] = (uint)pcVar3;
        }
        else if (cVar1 == '6') {
          if (pcVar2[1] == '4') {
            pcVar3 = pcVar2 + 2;
            in_ECX[10] = 0xb;
            in_ECX[3] = (uint)pcVar3;
          }
        }
        else if ((((cVar1 == 'd') || (cVar1 == 'i')) || (cVar1 == 'o')) ||
                (((cVar1 == 'u' || (cVar1 == 'x')) || (cVar1 == 'X')))) {
          in_ECX[10] = 9;
        }
        goto LAB_006eb754;
      }
      if (cVar1 == 'L') {
        in_ECX[10] = 8;
        goto LAB_006eb754;
      }
      if (cVar1 == 'T') {
        in_ECX[10] = 0xd;
        goto LAB_006eb754;
      }
      if (cVar1 != 'h') goto LAB_006eb754;
      if (*(char *)in_ECX[3] == 'h') {
        in_ECX[3] = (uint)((char *)in_ECX[3] + 1);
        pcVar3 = (char *)0x1;
      }
      else {
        pcVar3 = (char *)0x2;
      }
    }
    else {
      if (cVar1 != 'l') {
        if (cVar1 == 't') {
          in_ECX[10] = 7;
        }
        else if (cVar1 == 'w') {
          in_ECX[10] = 0xc;
        }
        else if (cVar1 == 'z') {
          in_ECX[10] = 6;
        }
        goto LAB_006eb754;
      }
      if (*(char *)in_ECX[3] == 'l') {
        in_ECX[3] = (uint)((char *)in_ECX[3] + 1);
        pcVar3 = (char *)0x4;
      }
      else {
        pcVar3 = (char *)0x3;
      }
    }
    in_ECX[10] = (uint)pcVar3;
  }
LAB_006eb754:
  return CONCAT31((int3)((uint)pcVar3 >> 8),1);
}


/* ==== 006eb757  FUN_006eb757  size=834 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_006eb757(void)

{
  int *piVar1;
  undefined2 uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  undefined1 uVar7;
  int iVar8;
  int in_ECX;
  undefined2 *puVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  int local_18;
  int local_14;
  undefined2 local_10;
  undefined1 local_e;
  uint local_8;
  
  local_8 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  iVar10 = 0;
  cVar6 = *(char *)(in_ECX + 0x2d);
  if (cVar6 < 'e') {
    if (cVar6 == 'd') {
LAB_006eb80f:
      *(uint *)(in_ECX + 0x1c) = *(uint *)(in_ECX + 0x1c) | 0x10;
LAB_006eb813:
      cVar6 = FUN_006ea326(0);
    }
    else if (cVar6 < 'T') {
      if (cVar6 == 'S') {
LAB_006eb83c:
        cVar6 = FUN_006ec18d();
      }
      else {
        if (cVar6 != 'A') {
          if (cVar6 == 'C') {
LAB_006eb7c9:
            cVar6 = FUN_006ec040(0);
            goto LAB_006eb84c;
          }
          if (((cVar6 != 'E') && (cVar6 != 'F')) && (cVar6 != 'G')) {
            return 0;
          }
        }
LAB_006eb7a7:
        cVar6 = FUN_006ebeaf();
      }
    }
    else if (cVar6 == 'X') {
      uVar12 = 1;
LAB_006eb7de:
      cVar6 = FUN_006ea4b3(uVar12);
    }
    else {
      if (cVar6 != 'Z') {
        if (cVar6 != 'a') {
          if (cVar6 != 'c') {
            return 0;
          }
          goto LAB_006eb7c9;
        }
        goto LAB_006eb7a7;
      }
      cVar6 = FUN_006ebe4c();
    }
  }
  else if (cVar6 < 'p') {
    if (cVar6 == 'o') {
      cVar6 = FUN_006ec15a();
    }
    else {
      if (((cVar6 == 'e') || (cVar6 == 'f')) || (cVar6 == 'g')) goto LAB_006eb7a7;
      if (cVar6 == 'i') goto LAB_006eb80f;
      if (cVar6 != 'n') {
        return 0;
      }
      cVar6 = FUN_006ec0d5();
    }
  }
  else {
    if (cVar6 != 'p') {
      if (cVar6 == 's') goto LAB_006eb83c;
      if (cVar6 != 'u') {
        if (cVar6 != 'x') {
          return 0;
        }
        uVar12 = 0;
        goto LAB_006eb7de;
      }
      goto LAB_006eb813;
    }
    cVar6 = FUN_006ec177();
  }
LAB_006eb84c:
  if (cVar6 == '\0') {
    return 0;
  }
  if (*(char *)(in_ECX + 0x2c) != '\0') {
    return 1;
  }
  uVar3 = *(uint *)(in_ECX + 0x1c);
  local_10 = 0;
  local_e = 0;
  iVar11 = 0;
  local_14 = 0;
  if ((uVar3 >> 4 & 1) != 0) {
    if ((uVar3 >> 6 & 1) == 0) {
      if ((uVar3 & 1) == 0) {
        if ((uVar3 >> 1 & 1) != 0) {
          local_10 = 0x20;
          iVar11 = 1;
          local_14 = 1;
        }
        goto LAB_006eb8ab;
      }
      local_10 = 0x2b;
    }
    else {
      local_10 = 0x2d;
    }
    local_14 = 1;
    iVar11 = 1;
  }
LAB_006eb8ab:
  cVar6 = *(char *)(in_ECX + 0x2d);
  if (((cVar6 != 'x') && (cVar6 != 'X')) || (bVar4 = true, (uVar3 >> 5 & 1) == 0)) {
    bVar4 = false;
  }
  if ((cVar6 == 'a') || (bVar5 = false, cVar6 == 'A')) {
    bVar5 = true;
  }
  if ((bVar4) || (bVar5)) {
    *(undefined1 *)((int)&local_10 + iVar11) = 0x30;
    if ((cVar6 == 'X') || (cVar6 == 'A')) {
      uVar7 = 0x58;
    }
    else {
      uVar7 = 0x78;
    }
    *(undefined1 *)((int)&local_10 + iVar11 + 1) = uVar7;
    iVar11 = iVar11 + 2;
    local_14 = iVar11;
  }
  iVar11 = (*(int *)(in_ECX + 0x20) - iVar11) - *(int *)(in_ECX + 0x34);
  if ((uVar3 & 0xc) == 0) {
    uVar12 = *(undefined4 *)(in_ECX + 8);
    local_18 = 0;
    if (0 < iVar11) {
      while (cVar6 = FUN_006ec3e8(0x20,uVar12), cVar6 != '\0') {
        iVar8 = *(int *)(in_ECX + 0x14);
        *(int *)(in_ECX + 0x14) = iVar8 + 1;
        if ((iVar8 == -2) || (local_18 = local_18 + 1, iVar11 <= local_18)) goto LAB_006eb957;
      }
      *(undefined4 *)(in_ECX + 0x14) = 0xffffffff;
    }
  }
LAB_006eb957:
  piVar1 = (int *)(in_ECX + 0x14);
  write_string(&local_10,local_14,piVar1,*(undefined4 *)(in_ECX + 8));
  if (((*(uint *)(in_ECX + 0x1c) >> 3 & 1) != 0) && ((*(uint *)(in_ECX + 0x1c) >> 2 & 1) == 0)) {
    uVar12 = *(undefined4 *)(in_ECX + 8);
    local_18 = 0;
    if (0 < iVar11) {
      while (cVar6 = FUN_006ec3e8(0x30,uVar12), cVar6 != '\0') {
        iVar8 = *piVar1;
        *piVar1 = iVar8 + 1;
        if ((iVar8 == -2) || (local_18 = local_18 + 1, iVar11 <= local_18)) goto LAB_006eb9c9;
      }
      *piVar1 = -1;
    }
  }
LAB_006eb9c9:
  if ((*(char *)(in_ECX + 0x38) == '\0') || (*(int *)(in_ECX + 0x34) < 1)) {
    write_string(*(undefined4 *)(in_ECX + 0x30),*(undefined4 *)(in_ECX + 0x34),piVar1,
                 *(undefined4 *)(in_ECX + 8));
  }
  else {
    puVar9 = *(undefined2 **)(in_ECX + 0x30);
    local_18 = 0;
    do {
      uVar2 = *puVar9;
      puVar9 = puVar9 + 1;
      local_14 = 0;
      iVar8 = FUN_006fb1b0(&local_14,&local_10,6,uVar2,*(undefined4 *)(in_ECX + 8));
      if ((iVar8 != 0) || (local_14 == 0)) {
        *piVar1 = -1;
        break;
      }
      write_string(&local_10,local_14,piVar1,*(undefined4 *)(in_ECX + 8));
      local_18 = local_18 + 1;
    } while (local_18 != *(int *)(in_ECX + 0x34));
  }
  if (((-1 < *piVar1) && ((*(uint *)(in_ECX + 0x1c) >> 2 & 1) != 0)) &&
     (uVar12 = *(undefined4 *)(in_ECX + 8), 0 < iVar11)) {
    while (cVar6 = FUN_006ec3e8(0x20,uVar12), cVar6 != '\0') {
      iVar8 = *piVar1;
      *piVar1 = iVar8 + 1;
      if (iVar8 == -2) {
        return 1;
      }
      iVar10 = iVar10 + 1;
      if (iVar11 <= iVar10) {
        return 1;
      }
    }
    *piVar1 = -1;
  }
  return 1;
}


/* ==== 006eba99  FUN_006eba99  size=863 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_006eba99(void)

{
  int *piVar1;
  string_output_adapter<char> *this;
  string_output_adapter<char> *this_00;
  undefined2 uVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  int in_ECX;
  int iVar6;
  int iVar7;
  undefined2 *puVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  int local_18;
  undefined4 local_14;
  char local_10 [8];
  uint local_8;
  
  local_8 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  cVar5 = *(char *)(in_ECX + 0x2d);
  if (cVar5 < 'e') {
    if (cVar5 == 'd') {
LAB_006ebb44:
      *(uint *)(in_ECX + 0x1c) = *(uint *)(in_ECX + 0x1c) | 0x10;
LAB_006ebb48:
      cVar5 = FUN_006ea326(0);
    }
    else if (cVar5 < 'T') {
      if (cVar5 == 'S') {
LAB_006ebb6d:
        cVar5 = FUN_006ec18d();
      }
      else {
        if (cVar5 != 'A') {
          if (cVar5 == 'C') {
LAB_006ebb06:
            cVar5 = FUN_006ec040(0);
            goto LAB_006ebb79;
          }
          if (((cVar5 != 'E') && (cVar5 != 'F')) && (cVar5 != 'G')) {
            return 0;
          }
        }
LAB_006ebaea:
        cVar5 = FUN_006ebeaf();
      }
    }
    else if (cVar5 == 'X') {
      uVar11 = 1;
LAB_006ebb17:
      cVar5 = FUN_006ea4b3(uVar11);
    }
    else {
      if (cVar5 != 'Z') {
        if (cVar5 != 'a') {
          if (cVar5 != 'c') {
            return 0;
          }
          goto LAB_006ebb06;
        }
        goto LAB_006ebaea;
      }
      cVar5 = FUN_006ebe4c();
    }
  }
  else if (cVar5 < 'p') {
    if (cVar5 == 'o') {
      cVar5 = FUN_006ec15a();
    }
    else {
      if (((cVar5 == 'e') || (cVar5 == 'f')) || (cVar5 == 'g')) goto LAB_006ebaea;
      if (cVar5 == 'i') goto LAB_006ebb44;
      if (cVar5 != 'n') {
        return 0;
      }
      cVar5 = FUN_006ec0d5();
    }
  }
  else {
    if (cVar5 != 'p') {
      if (cVar5 == 's') goto LAB_006ebb6d;
      if (cVar5 != 'u') {
        if (cVar5 != 'x') {
          return 0;
        }
        uVar11 = 0;
        goto LAB_006ebb17;
      }
      goto LAB_006ebb48;
    }
    cVar5 = FUN_006ec177();
  }
LAB_006ebb79:
  if (cVar5 == '\0') {
    return 0;
  }
  if (*(char *)(in_ECX + 0x2c) != '\0') {
    return 1;
  }
  iVar6 = 0;
  local_14 = (uint)local_14._3_1_ << 0x18;
  local_18 = 0;
  if ((*(uint *)(in_ECX + 0x1c) >> 4 & 1) != 0) {
    if ((*(uint *)(in_ECX + 0x1c) >> 6 & 1) == 0) {
      if ((*(byte *)(in_ECX + 0x1c) & 1) == 0) {
        if ((*(uint *)(in_ECX + 0x1c) >> 1 & 1) != 0) {
          local_14 = CONCAT31(local_14._1_3_,0x20);
          iVar6 = 1;
          local_18 = 1;
        }
        goto LAB_006ebbd8;
      }
      local_14 = CONCAT31(local_14._1_3_,0x2b);
    }
    else {
      local_14 = CONCAT31(local_14._1_3_,0x2d);
    }
    local_18 = 1;
    iVar6 = 1;
  }
LAB_006ebbd8:
  cVar5 = *(char *)(in_ECX + 0x2d);
  if (((cVar5 != 'x') && (cVar5 != 'X')) || (bVar3 = true, (*(uint *)(in_ECX + 0x1c) >> 5 & 1) == 0)
     ) {
    bVar3 = false;
  }
  if ((cVar5 == 'a') || (bVar4 = false, cVar5 == 'A')) {
    bVar4 = true;
  }
  if ((bVar3) || (bVar4)) {
    local_10[iVar6 + -4] = '0';
    if ((cVar5 == 'X') || (cVar5 == 'A')) {
      cVar5 = 'X';
    }
    else {
      cVar5 = 'x';
    }
    local_10[iVar6 + -3] = cVar5;
    iVar6 = iVar6 + 2;
    local_18 = iVar6;
  }
  iVar9 = (*(int *)(in_ECX + 0x20) - iVar6) - *(int *)(in_ECX + 0x34);
  if (((*(byte *)(in_ECX + 0x1c) & 0xc) == 0) && (0 < iVar9)) {
    iVar10 = *(int *)(in_ECX + 0x14);
    iVar7 = 0;
    do {
      iVar6 = *(int *)(in_ECX + 0x448);
      if (*(int *)(iVar6 + 8) == *(int *)(iVar6 + 4)) {
        if (*(char *)(iVar6 + 0xc) == '\0') {
          iVar10 = -1;
        }
        else {
          iVar10 = iVar10 + 1;
        }
        *(int *)(in_ECX + 0x14) = iVar10;
      }
      else {
        *(int *)(in_ECX + 0x14) = iVar10 + 1;
        *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
        *(undefined1 *)**(undefined4 **)(in_ECX + 0x448) = 0x20;
        **(int **)(in_ECX + 0x448) = **(int **)(in_ECX + 0x448) + 1;
      }
      iVar10 = *(int *)(in_ECX + 0x14);
      iVar6 = local_18;
    } while ((iVar10 != -1) && (iVar7 = iVar7 + 1, iVar7 < iVar9));
  }
  piVar1 = (int *)(in_ECX + 0x14);
  this = (string_output_adapter<char> *)(in_ECX + 0x448);
  __crt_stdio_output::string_output_adapter<char>::write_string
            (this,(char *)&local_14,iVar6,piVar1,*(__crt_deferred_errno_cache **)(in_ECX + 8));
  this_00 = (string_output_adapter<char> *)(in_ECX + 0x448);
  if (((*(uint *)(in_ECX + 0x1c) >> 3 & 1) != 0) &&
     (((*(uint *)(in_ECX + 0x1c) >> 2 & 1) == 0 && (local_14 = 0, 0 < iVar9)))) {
    do {
      local_18 = *(int *)this_00;
      if (*(int *)(local_18 + 8) == *(int *)(local_18 + 4)) {
        if (*(char *)(local_18 + 0xc) == '\0') {
          iVar6 = -1;
        }
        else {
          iVar6 = *piVar1 + 1;
        }
        *piVar1 = iVar6;
      }
      else {
        *piVar1 = *piVar1 + 1;
        *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
        *(undefined1 *)**(undefined4 **)this_00 = 0x30;
        **(int **)this_00 = **(int **)this_00 + 1;
      }
    } while ((*piVar1 != -1) && (local_14 = local_14 + 1, local_14 < iVar9));
  }
  iVar6 = 0;
  if ((*(char *)(in_ECX + 0x38) == '\0') || (*(int *)(in_ECX + 0x34) < 1)) {
    __crt_stdio_output::string_output_adapter<char>::write_string
              (this_00,*(char **)(in_ECX + 0x30),*(int *)(in_ECX + 0x34),piVar1,
               *(__crt_deferred_errno_cache **)(in_ECX + 8));
  }
  else {
    puVar8 = *(undefined2 **)(in_ECX + 0x30);
    local_14 = 0;
    do {
      uVar2 = *puVar8;
      puVar8 = puVar8 + 1;
      local_18 = 0;
      iVar10 = FUN_006fb1b0(&local_18,local_10,6,uVar2,*(undefined4 *)(in_ECX + 8));
      if ((iVar10 != 0) || (local_18 == 0)) {
        *piVar1 = -1;
        break;
      }
      __crt_stdio_output::string_output_adapter<char>::write_string
                ((string_output_adapter<char> *)(in_ECX + 0x448),local_10,local_18,piVar1,
                 *(__crt_deferred_errno_cache **)(in_ECX + 8));
      local_14 = local_14 + 1;
    } while (local_14 != *(int *)(in_ECX + 0x34));
  }
  iVar10 = *piVar1;
  if (((-1 < iVar10) && ((*(uint *)(in_ECX + 0x1c) >> 2 & 1) != 0)) && (0 < iVar9)) {
    do {
      iVar7 = *(int *)this;
      if (*(int *)(iVar7 + 8) == *(int *)(iVar7 + 4)) {
        if (*(char *)(iVar7 + 0xc) == '\0') {
          iVar10 = -1;
        }
        else {
          iVar10 = iVar10 + 1;
        }
        *piVar1 = iVar10;
      }
      else {
        *piVar1 = iVar10 + 1;
        *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
        *(undefined1 *)**(undefined4 **)this = 0x20;
        **(int **)this = **(int **)this + 1;
      }
      iVar10 = *piVar1;
    } while ((iVar10 != -1) && (iVar6 = iVar6 + 1, iVar6 < iVar9));
  }
  return 1;
}


/* ==== 006ebdf8  to_integer_size  size=49 ==== */

/* Library Function - Single Match
    unsigned int __cdecl __crt_stdio_output::to_integer_size(enum
   __crt_stdio_output::length_modifier)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

uint __cdecl __crt_stdio_output::to_integer_size(length_modifier param_1)

{
  uint uStack_8;
  
  switch(param_1) {
  case 0:
  case 3:
  case 6:
  case 7:
  case 9:
  case 10:
    uStack_8 = 4;
    break;
  case 1:
    return 1;
  case 2:
    uStack_8 = 2;
    break;
  case 4:
  case 5:
  case 0xb:
    uStack_8 = 8;
    break;
  default:
    return 0;
  }
  return uStack_8;
}


/* ==== 006ebe4c  FUN_006ebe4c  size=99 ==== */

undefined4 FUN_006ebe4c(void)

{
  ushort uVar1;
  undefined4 *puVar2;
  ushort *puVar3;
  int iVar4;
  bool bVar5;
  __uint64 *in_ECX;
  uint uVar6;
  
  puVar2 = *(undefined4 **)(in_ECX + 2);
  *(undefined4 **)(in_ECX + 2) = puVar2 + 1;
  puVar3 = (ushort *)*puVar2;
  if ((puVar3 == (ushort *)0x0) || (iVar4 = *(int *)(puVar3 + 2), iVar4 == 0)) {
    uVar6 = 6;
    *(char **)(in_ECX + 6) = "(null)";
  }
  else {
    bVar5 = __crt_stdio_output::is_wide_character_specifier<char>
                      (*in_ECX,*(char *)((int)in_ECX + 0x2d),*(length_modifier *)(in_ECX + 5));
    *(int *)(in_ECX + 6) = iVar4;
    uVar1 = *puVar3;
    uVar6 = (uint)uVar1;
    if (bVar5) {
      *(undefined1 *)(in_ECX + 7) = 1;
      uVar6 = (uint)(uVar1 >> 1);
      goto LAB_006ebea6;
    }
  }
  *(undefined1 *)(in_ECX + 7) = 0;
LAB_006ebea6:
  *(uint *)((int)in_ECX + 0x34) = uVar6;
  return CONCAT31((int3)(uVar6 >> 8),1);
}


/* ==== 006ebeaf  FUN_006ebeaf  size=401 ==== */

undefined4 FUN_006ebeaf(void)

{
  char *pcVar1;
  undefined4 *puVar2;
  char cVar3;
  uint uVar4;
  formatting_buffer *pfVar5;
  undefined4 *in_ECX;
  char *pcVar6;
  formatting_buffer *this;
  int iVar7;
  undefined4 local_18;
  undefined4 local_14;
  char *local_10;
  uint local_c;
  int local_8;
  
  in_ECX[7] = in_ECX[7] | 0x10;
  iVar7 = in_ECX[9];
  if (iVar7 < 0) {
    if ((*(char *)((int)in_ECX + 0x2d) == 'a') || (*(char *)((int)in_ECX + 0x2d) == 'A')) {
      iVar7 = 0xd;
    }
    else {
      iVar7 = 6;
    }
    in_ECX[9] = iVar7;
  }
  else if ((iVar7 == 0) &&
          ((*(char *)((int)in_ECX + 0x2d) == 'g' || (*(char *)((int)in_ECX + 0x2d) == 'G')))) {
    in_ECX[9] = 1;
    iVar7 = 1;
  }
  this = (formatting_buffer *)(in_ECX + 0xf);
  cVar3 = FUN_006e9e6b(iVar7 + 0x15d,in_ECX[2]);
  if (cVar3 == '\0') {
    uVar4 = __crt_stdio_output::formatting_buffer::count<char>(this);
    iVar7 = uVar4 - 0x15d;
    in_ECX[9] = iVar7;
  }
  else {
    iVar7 = in_ECX[9];
  }
  pfVar5 = (formatting_buffer *)in_ECX[0x110];
  if ((formatting_buffer *)in_ECX[0x110] == (formatting_buffer *)0x0) {
    pfVar5 = this;
  }
  in_ECX[0xc] = pfVar5;
  puVar2 = (undefined4 *)in_ECX[4];
  in_ECX[4] = puVar2 + 2;
  local_18 = *puVar2;
  local_14 = puVar2[1];
  local_8 = (int)*(char *)((int)in_ECX + 0x2d);
  local_c = __crt_stdio_output::formatting_buffer::count<char>(this);
  local_10 = __crt_stdio_output::formatting_buffer::scratch_data<char>(this);
  uVar4 = __crt_stdio_output::formatting_buffer::count<char>(this);
  if ((formatting_buffer *)in_ECX[0x110] != (formatting_buffer *)0x0) {
    this = (formatting_buffer *)in_ECX[0x110];
  }
  FUN_006fb02f(&local_18,this,uVar4,local_10,local_c,local_8,iVar7,*in_ECX,in_ECX[1],1,in_ECX[2]);
  if ((((uint)in_ECX[7] >> 5 & 1) != 0) && (in_ECX[9] == 0)) {
    iVar7 = in_ECX[2];
    if (*(char *)(iVar7 + 0x14) == '\0') {
      FUN_006ec260();
    }
    __crt_stdio_output::force_decimal_point
              ((char *)in_ECX[0xc],(__crt_locale_pointers *)(iVar7 + 0xc));
  }
  if (((*(char *)((int)in_ECX + 0x2d) == 'g') || (*(char *)((int)in_ECX + 0x2d) == 'G')) &&
     (((uint)in_ECX[7] >> 5 & 1) == 0)) {
    iVar7 = in_ECX[2];
    if (*(char *)(iVar7 + 0x14) == '\0') {
      FUN_006ec260();
    }
    FUN_006eaa91(in_ECX[0xc],iVar7 + 0xc);
  }
  pcVar6 = (char *)in_ECX[0xc];
  cVar3 = *pcVar6;
  if (cVar3 == '-') {
    in_ECX[7] = in_ECX[7] | 0x40;
    pcVar6 = pcVar6 + 1;
    in_ECX[0xc] = pcVar6;
    cVar3 = *pcVar6;
  }
  if (((cVar3 == 'i') || (cVar3 == 'I')) || ((cVar3 == 'n' || (cVar3 == 'N')))) {
    in_ECX[7] = in_ECX[7] & 0xfffffff7;
    *(undefined1 *)((int)in_ECX + 0x2d) = 0x73;
  }
  pcVar1 = pcVar6 + 1;
  do {
    cVar3 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar3 != '\0');
  in_ECX[0xd] = (int)pcVar6 - (int)pcVar1;
  return 1;
}


/* ==== 006ec040  FUN_006ec040  size=149 ==== */

undefined4 FUN_006ec040(void)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  formatting_buffer *pfVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  __uint64 *in_ECX;
  formatting_buffer *pfVar7;
  formatting_buffer *this;
  
  this = (formatting_buffer *)((int)in_ECX + 0x3c);
  bVar4 = __crt_stdio_output::is_wide_character_specifier<char>
                    (*in_ECX,*(char *)((int)in_ECX + 0x2d),*(length_modifier *)(in_ECX + 5));
  if (bVar4) {
    puVar2 = *(undefined2 **)(in_ECX + 2);
    *(undefined2 **)(in_ECX + 2) = puVar2 + 2;
    uVar1 = *puVar2;
    uVar5 = __crt_stdio_output::formatting_buffer::count<char>(this);
    pfVar7 = *(formatting_buffer **)(in_ECX + 0x88);
    if (*(formatting_buffer **)(in_ECX + 0x88) == (formatting_buffer *)0x0) {
      pfVar7 = this;
    }
    iVar6 = FUN_006fb1b0((int)in_ECX + 0x34,pfVar7,uVar5,uVar1,(int)in_ECX[1]);
    if (iVar6 != 0) {
      *(undefined1 *)((int)in_ECX + 0x2c) = 1;
    }
  }
  else {
    pfVar7 = *(formatting_buffer **)(in_ECX + 0x88);
    if (*(formatting_buffer **)(in_ECX + 0x88) == (formatting_buffer *)0x0) {
      pfVar7 = this;
    }
    pfVar3 = *(formatting_buffer **)(in_ECX + 2);
    *(formatting_buffer **)(in_ECX + 2) = pfVar3 + 4;
    *pfVar7 = *pfVar3;
    *(undefined4 *)((int)in_ECX + 0x34) = 1;
  }
  pfVar7 = *(formatting_buffer **)(in_ECX + 0x88);
  if (pfVar7 != (formatting_buffer *)0x0) {
    this = pfVar7;
  }
  *(formatting_buffer **)(in_ECX + 6) = this;
  return CONCAT31((int3)((uint)pfVar7 >> 8),1);
}


/* ==== 006ec0d5  FUN_006ec0d5  size=133 ==== */

uint FUN_006ec0d5(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  int in_ECX;
  
  puVar1 = *(undefined4 **)(in_ECX + 0x10);
  *(undefined4 **)(in_ECX + 0x10) = puVar1 + 1;
  puVar2 = (uint *)*puVar1;
  iVar3 = FUN_006fb485();
  if (iVar3 == 0) {
LAB_006ec0ef:
    iVar3 = *(int *)(in_ECX + 8);
    *(undefined1 *)(iVar3 + 0x1c) = 1;
    *(undefined4 *)(iVar3 + 0x18) = 0x16;
    uVar4 = FUN_006e8bb2(0,0,0,0,0,*(undefined4 *)(in_ECX + 8));
    uVar4 = uVar4 & 0xffffff00;
  }
  else {
    uVar4 = __crt_stdio_output::to_integer_size(*(length_modifier *)(in_ECX + 0x28));
    if (uVar4 == 1) {
      uVar4 = 0;
      *(undefined1 *)puVar2 = *(undefined1 *)(in_ECX + 0x14);
    }
    else if (uVar4 == 2) {
      uVar4 = (uint)*(ushort *)(in_ECX + 0x14);
      *(ushort *)puVar2 = *(ushort *)(in_ECX + 0x14);
    }
    else if (uVar4 == 4) {
      uVar4 = *(uint *)(in_ECX + 0x14);
      *puVar2 = uVar4;
    }
    else {
      if (uVar4 != 8) goto LAB_006ec0ef;
      uVar4 = *(uint *)(in_ECX + 0x14);
      *puVar2 = uVar4;
      puVar2[1] = (int)uVar4 >> 0x1f;
    }
    *(undefined1 *)(in_ECX + 0x2c) = 1;
    uVar4 = CONCAT31((int3)(uVar4 >> 8),1);
  }
  return uVar4;
}


/* ==== 006ec15a  FUN_006ec15a  size=29 ==== */

void FUN_006ec15a(void)

{
  int in_ECX;
  
  if ((*(uint *)(in_ECX + 0x1c) >> 5 & 1) != 0) {
    *(uint *)(in_ECX + 0x1c) = *(uint *)(in_ECX + 0x1c) | 0x80;
  }
  FUN_006ea199(0);
  return;
}


/* ==== 006ec177  FUN_006ec177  size=22 ==== */

void FUN_006ec177(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x24) = 8;
  *(undefined4 *)(in_ECX + 0x28) = 10;
  FUN_006ea4b3(1);
  return;
}


/* ==== 006ec18d  FUN_006ec18d  size=114 ==== */

undefined4 FUN_006ec18d(void)

{
  int *piVar1;
  bool bVar2;
  undefined4 uVar3;
  __uint64 *in_ECX;
  int iVar4;
  char *pcVar5;
  
  piVar1 = *(int **)(in_ECX + 2);
  *(int **)(in_ECX + 2) = piVar1 + 1;
  iVar4 = *(int *)((int)in_ECX + 0x24);
  pcVar5 = (char *)*piVar1;
  *(char **)(in_ECX + 6) = pcVar5;
  if (iVar4 == -1) {
    iVar4 = 0x7fffffff;
  }
  bVar2 = __crt_stdio_output::is_wide_character_specifier<char>
                    (*in_ECX,*(char *)((int)in_ECX + 0x2d),*(length_modifier *)(in_ECX + 5));
  if (bVar2) {
    if ((wchar_t *)pcVar5 == (wchar_t *)0x0) {
      *(wchar_t **)(in_ECX + 6) = L"(null)";
      pcVar5 = (char *)L"(null)";
    }
    *(undefined1 *)(in_ECX + 7) = 1;
    uVar3 = FUN_006fa3eb(pcVar5,iVar4);
  }
  else {
    if ((wchar_t *)pcVar5 == (wchar_t *)0x0) {
      pcVar5 = "(null)";
      *(char **)(in_ECX + 6) = "(null)";
    }
    uVar3 = FUN_006fa2c9(pcVar5,iVar4);
  }
  *(undefined4 *)((int)in_ECX + 0x34) = uVar3;
  return 1;
}


/* ==== 006ec1ff  unget  size=41 ==== */

/* Library Function - Single Match
    public: void __thiscall __crt_strtox::c_string_character_source<char>::unget(char)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __thiscall
__crt_strtox::c_string_character_source<char>::unget
          (c_string_character_source<char> *this,char param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)this;
  *(char **)this = (char *)(iVar1 + -1);
  if ((param_1 != '\0') && (*(char *)(iVar1 + -1) != param_1)) {
    puVar2 = (undefined4 *)FUN_006f390a();
    *puVar2 = 0x16;
    FUN_006e8c2f();
  }
  return;
}


/* ==== 006ec228  unget  size=46 ==== */

/* Library Function - Single Match
    public: void __thiscall __crt_strtox::c_string_character_source<wchar_t>::unget(wchar_t)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __thiscall
__crt_strtox::c_string_character_source<wchar_t>::unget
          (c_string_character_source<wchar_t> *this,wchar_t param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)this;
  *(wchar_t **)this = (wchar_t *)(iVar1 + -2);
  if ((param_1 != L'\0') && (*(wchar_t *)(iVar1 + -2) != param_1)) {
    puVar2 = (undefined4 *)FUN_006f390a();
    *puVar2 = 0x16;
    FUN_006e8c2f();
  }
  return;
}


/* ==== 006ec260  FUN_006ec260  size=91 ==== */

void FUN_006ec260(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = FUN_006e8a16();
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(iVar1 + 0x4c);
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(iVar1 + 0x48);
  FUN_006fa5c8(iVar1,(undefined4 *)(in_ECX + 0xc),*(undefined4 *)(in_ECX + 4));
  FUN_006fa626(iVar1,(undefined4 *)(in_ECX + 0x10),*(undefined4 *)(in_ECX + 4));
  if ((*(uint *)(iVar1 + 0x350) & 2) == 0) {
    *(uint *)(iVar1 + 0x350) = *(uint *)(iVar1 + 0x350) | 2;
    *(undefined1 *)(in_ECX + 0x14) = 2;
  }
  return;
}


/* ==== 006ec2bb  FUN_006ec2bb  size=27 ==== */

undefined4 FUN_006ec2bb(void)

{
  undefined4 *puVar1;
  int *in_ECX;
  
  if (*in_ECX == 0) {
    puVar1 = (undefined4 *)FUN_006f390a();
    *puVar1 = 0x16;
    FUN_006e8c2f();
    return 0;
  }
  return 1;
}


/* ==== 006ec2d6  FUN_006ec2d6  size=56 ==== */

bool FUN_006ec2d6(int param_1)

{
  bool bVar1;
  undefined4 *in_ECX;
  
  if ((_iobuf *)*in_ECX == (_iobuf *)0x0) {
    *(undefined1 *)(param_1 + 0x1c) = 1;
    *(undefined4 *)(param_1 + 0x18) = 0x16;
    FUN_006e8bb2(0,0,0,0,0,param_1);
    bVar1 = false;
  }
  else {
    bVar1 = __acrt_stdio_char_traits<char>::validate_stream_is_ansi_if_required((_iobuf *)*in_ECX);
  }
  return bVar1;
}


/* ==== 006ec30e  FUN_006ec30e  size=49 ==== */

bool FUN_006ec30e(int param_1)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = *in_ECX;
  if (iVar1 == 0) {
    *(undefined1 *)(param_1 + 0x1c) = 1;
    *(undefined4 *)(param_1 + 0x18) = 0x16;
    FUN_006e8bb2(0,0,0,0,0,param_1);
  }
  return iVar1 != 0;
}


/* ==== 006ec33f  validate_stream_is_ansi_if_required  size=135 ==== */

/* Library Function - Single Match
    public: static bool __cdecl
   __acrt_stdio_char_traits<char>::validate_stream_is_ansi_if_required(struct _iobuf * const)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

bool __cdecl __acrt_stdio_char_traits<char>::validate_stream_is_ansi_if_required(_iobuf *param_1)

{
  bool bVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  if (((uint)param_1->_flag >> 0xc & 1) == 0) {
    uVar2 = __fileno(param_1);
    puVar4 = &DAT_007c5c50;
    if ((uVar2 == 0xffffffff) || (uVar2 == 0xfffffffe)) {
      puVar5 = &DAT_007c5c50;
    }
    else {
      puVar5 = (undefined *)((uVar2 & 0x3f) * 0x38 + (&DAT_007c8dc0)[(int)uVar2 >> 6]);
    }
    if (puVar5[0x29] == '\0') {
      if ((uVar2 != 0xffffffff) && (uVar2 != 0xfffffffe)) {
        puVar4 = (undefined *)((uVar2 & 0x3f) * 0x38 + (&DAT_007c8dc0)[(int)uVar2 >> 6]);
      }
      if ((puVar4[0x2d] & 1) == 0) goto LAB_006ec3c1;
    }
    puVar3 = (undefined4 *)FUN_006f390a();
    *puVar3 = 0x16;
    FUN_006e8c2f();
    bVar1 = false;
  }
  else {
LAB_006ec3c1:
    bVar1 = true;
  }
  return bVar1;
}


/* ==== 006ec3c6  FUN_006ec3c6  size=34 ==== */

void FUN_006ec3c6(undefined4 param_1,int *param_2,undefined4 param_3)

{
  char cVar1;
  
  cVar1 = FUN_006ec3e8(param_1,param_3);
  if (cVar1 == '\0') {
    *param_2 = -1;
  }
  else {
    *param_2 = *param_2 + 1;
  }
  return;
}


/* ==== 006ec3e8  FUN_006ec3e8  size=58 ==== */

bool FUN_006ec3e8(char param_1,undefined4 param_2)

{
  int iVar1;
  int *in_ECX;
  bool bVar2;
  
  if (((*(uint *)(*in_ECX + 0xc) >> 0xc & 1) == 0) || (*(int *)(*in_ECX + 4) != 0)) {
    iVar1 = FUN_006f6a94((int)param_1,*in_ECX,param_2);
    bVar2 = iVar1 != -1;
  }
  else {
    bVar2 = true;
  }
  return bVar2;
}


/* ==== 006ec422  write_string  size=44 ==== */

/* Library Function - Multiple Matches With Same Base Name
    public: void __thiscall __crt_stdio_output::stream_output_adapter<char>::write_string(char const
   * const,int,int * const,class __crt_deferred_errno_cache &)const 
    public: void __thiscall __crt_stdio_output::stream_output_adapter<wchar_t>::write_string(wchar_t
   const * const,int,int * const,class __crt_deferred_errno_cache &)const 
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void write_string(undefined4 param_1,int param_2,int *param_3)

{
  int *in_ECX;
  
  if (((*(uint *)(*in_ECX + 0xc) >> 0xc & 1) != 0) && (*(int *)(*in_ECX + 4) == 0)) {
    *param_3 = *param_3 + param_2;
    return;
  }
  FUN_006ec4b5();
  return;
}


/* ==== 006ec44e  write_string  size=103 ==== */

/* Library Function - Single Match
    public: void __thiscall __crt_stdio_output::string_output_adapter<char>::write_string(char const
   * const,int,int * const,class __crt_deferred_errno_cache &)const 
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __thiscall
__crt_stdio_output::string_output_adapter<char>::write_string
          (string_output_adapter<char> *this,char *param_1,int param_2,int *param_3,
          __crt_deferred_errno_cache *param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  
  if (param_2 == 0) {
    return;
  }
  puVar1 = *(undefined4 **)this;
  if (puVar1[2] == puVar1[1]) {
    if (*(char *)(puVar1 + 3) == '\0') {
LAB_006ec4a7:
      *param_3 = -1;
      return;
    }
  }
  else {
    uVar2 = puVar1[1] - puVar1[2];
    if ((uint)param_2 <= uVar2) {
      uVar2 = param_2;
    }
    FUN_006e6bd0(*puVar1,param_1,uVar2);
    **(int **)this = **(int **)this + uVar2;
    *(int *)(*(int *)this + 8) = *(int *)(*(int *)this + 8) + uVar2;
    if (*(char *)(*(int *)this + 0xc) == '\0') {
      if (uVar2 == param_2) {
        *param_3 = *param_3 + uVar2;
        return;
      }
      goto LAB_006ec4a7;
    }
  }
  *param_3 = *param_3 + param_2;
  return;
}


/* ==== 006ec4b5  FUN_006ec4b5  size=127 ==== */

void FUN_006ec4b5(undefined1 *param_1,int param_2,int *param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  undefined1 *puVar4;
  
  uVar1 = *(undefined4 *)(param_4 + 0x18);
  uVar2 = *(undefined4 *)(param_4 + 0x1c);
  puVar4 = param_1 + param_2;
  do {
    if (param_1 == puVar4) {
LAB_006ec522:
      *(undefined4 *)(param_4 + 0x18) = uVar1;
      *(undefined4 *)(param_4 + 0x1c) = uVar2;
      return;
    }
    cVar3 = FUN_006ec3e8(*param_1,param_4);
    if (cVar3 == '\0') {
      if ((*(char *)(param_4 + 0x1c) == '\0') || (*(int *)(param_4 + 0x18) != 0x2a)) {
        *param_3 = -1;
        goto LAB_006ec522;
      }
      cVar3 = FUN_006ec3e8(0x3f,param_4);
      if (cVar3 != '\0') goto LAB_006ec50c;
      *param_3 = -1;
    }
    else {
LAB_006ec50c:
      *param_3 = *param_3 + 1;
    }
    param_1 = param_1 + 1;
  } while( true );
}


/* ==== 006ec556  FUN_006ec556  size=164 ==== */

undefined4
FUN_006ec556(undefined4 param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,
            undefined4 param_6)

{
  undefined4 uVar1;
  undefined1 local_60 [24];
  undefined4 local_48;
  undefined1 local_44;
  int *local_38;
  undefined1 *local_34;
  undefined4 *local_30;
  int *local_2c;
  undefined4 *local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  undefined4 local_14;
  int local_10;
  int local_c [2];
  
  FUN_006e8923(param_5);
  local_14 = param_6;
  local_10 = param_4;
  local_c[0] = param_3;
  local_24 = param_1;
  local_20 = param_2;
  if ((param_3 == 0) || (param_4 == 0)) {
    local_44 = 1;
    local_48 = 0x16;
    FUN_006e8bb2(0,0,0,0,0,local_60);
    uVar1 = 0xffffffff;
  }
  else {
    local_38 = local_c;
    local_18 = param_3;
    local_34 = local_60;
    local_1c = param_3;
    local_30 = &local_24;
    local_2c = &local_10;
    local_28 = &local_14;
    uVar1 = operator()<>(&local_1c,&local_38,&local_18);
  }
  FUN_006e896b();
  return uVar1;
}


/* ==== 006ec5fa  FUN_006ec5fa  size=65 ==== */

undefined4
FUN_006ec5fa(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  undefined1 local_2c [40];
  
  FUN_006e8923(param_6);
  uVar1 = FUN_006e9c40(param_1,param_2,param_3,param_4,param_5,local_2c,param_7);
  FUN_006e896b();
  return uVar1;
}


/* ==== 006ec63b  FUN_006ec63b  size=65 ==== */

undefined4
FUN_006ec63b(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  undefined1 local_2c [40];
  
  FUN_006e8923(param_6);
  uVar1 = FUN_006e9db4(param_1,param_2,param_3,param_4,param_5,local_2c,param_7);
  FUN_006e896b();
  return uVar1;
}


/* ==== 006ec775  FUN_006ec775  size=1051 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_006ec775(uint *param_1,char param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  bool bVar8;
  __int64 _Var9;
  longlong lVar10;
  undefined8 uVar11;
  longlong lVar12;
  uint local_3c;
  int local_38;
  undefined8 local_34;
  uint local_2c [8];
  int local_c;
  uint local_8;
  
  local_8 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  if (param_1 == (uint *)0x0) {
    puVar1 = (undefined4 *)FUN_006f390a();
    *puVar1 = 0x16;
    FUN_006e8c2f();
    local_3c = 0xffffffff;
    local_38 = -1;
    goto LAB_006ec859;
  }
  local_3c = param_1[5];
  local_38 = (int)local_3c >> 0x1f;
  if ((-1 < local_38) &&
     (((((int)local_3c < 0 || (0x44 < local_3c)) && (-1 < (int)local_3c)) && (local_3c < 0x44f)))) {
    uVar3 = param_1[4];
    if (((int)uVar3 < 0) || (0xb < (int)uVar3)) {
      local_34._4_4_ = 0xc;
      uVar2 = (int)uVar3 / 0xc;
      bVar8 = CARRY4(local_3c,uVar2);
      local_3c = local_3c + uVar2;
      local_38 = local_38 + ((int)uVar2 >> 0x1f) + (uint)bVar8;
      uVar3 = (int)uVar3 % 0xc;
      param_1[4] = uVar3;
      if ((int)uVar3 < 0) {
        uVar3 = uVar3 + 0xc;
        bVar8 = local_3c == 0;
        local_3c = local_3c - 1;
        param_1[4] = uVar3;
        local_38 = local_38 - (uint)bVar8;
      }
      if ((((local_38 < 0) || ((local_38 < 1 && (local_3c < 0x45)))) || (local_38 != 0)) ||
         (0x44e < local_3c)) goto LAB_006ec847;
    }
    iVar4 = local_38;
    uVar2 = local_3c;
    local_34._0_4_ = (&DAT_00733890)[uVar3];
    local_34._4_4_ = (int)(uint)local_34 >> 0x1f;
    bVar8 = __crt_time_is_leap_year<__int64>(CONCAT44(local_38,local_3c));
    if ((bVar8) && (1 < (int)uVar3)) {
      bVar8 = 0xfffffffe < (uint)local_34;
      local_34._0_4_ = (uint)local_34 + 1;
      local_34._4_4_ = local_34._4_4_ + bVar8;
    }
    _Var9 = __crt_time_elapsed_leap_years<__int64>(CONCAT44(iVar4,uVar2));
    lVar12 = __allmul(uVar2 - 0x46,iVar4 - (uint)(uVar2 < 0x46),0x16d,0);
    lVar12 = _Var9 + lVar12 + CONCAT44(local_34._4_4_,(uint)local_34);
    local_34._4_4_ = param_1[3];
    iVar4 = (int)local_34._4_4_ >> 0x1f;
    lVar10 = lVar12 + (int)local_34._4_4_;
    if (lVar12 < 0) {
      if ((((int)local_34._4_4_ < 0 && -1 < iVar4) || (-1 < iVar4)) || (lVar10 < 0))
      goto LAB_006ec91f;
    }
    else if ((iVar4 < 0) || (-1 < lVar10)) {
LAB_006ec91f:
      local_34 = __allmul(lVar10,0x18,0);
      lVar12 = local_34;
      if (lVar10 != 0) {
        lVar10 = __alldiv(local_34,lVar10);
        lVar12 = local_34;
        if (lVar10 != 0x18) goto LAB_006ec847;
      }
      local_34._4_4_ = (uint)((ulonglong)lVar12 >> 0x20);
      local_34._0_4_ = (uint)lVar12;
      uVar3 = param_1[2];
      iVar4 = (int)uVar3 >> 0x1f;
      lVar10 = lVar12 + (int)uVar3;
      if (lVar12 < 0) {
        if ((((int)uVar3 < 0 && -1 < iVar4) || (-1 < iVar4)) || (lVar10 < 0)) goto LAB_006ec9b2;
      }
      else if ((iVar4 < 0) || (-1 < lVar10)) {
LAB_006ec9b2:
        local_34 = lVar12;
        uVar11 = __allmul(lVar10,0x3c,0);
        local_34._0_4_ = (uint)((ulonglong)uVar11 >> 0x20);
        if ((lVar10 == 0) || (lVar12 = __alldiv(uVar11,lVar10), lVar12 == 0x3c)) {
          local_34._4_4_ = param_1[1];
          iVar4 = (int)local_34._4_4_ >> 0x1f;
          iVar6 = local_34._4_4_ + (uint)uVar11;
          iVar5 = iVar4 + (uint)local_34 + (uint)CARRY4(local_34._4_4_,(uint)uVar11);
          if ((int)(uint)local_34 < 0) {
            if ((((int)local_34._4_4_ < 0 && -1 < iVar4) || (-1 < iVar4)) || (iVar5 < 0))
            goto LAB_006eca47;
          }
          else if ((iVar4 < 0) || (-1 < iVar5)) {
LAB_006eca47:
            uVar11 = __allmul(iVar6,iVar5,0x3c,0);
            local_34._4_4_ = (uint)((ulonglong)uVar11 >> 0x20);
            if ((iVar6 == 0 && iVar5 == 0) ||
               (lVar12 = __alldiv(uVar11,iVar6,iVar5), lVar12 == 0x3c)) {
              uVar3 = *param_1;
              iVar4 = (int)uVar3 >> 0x1f;
              local_3c = uVar3 + (uint)uVar11;
              local_38 = iVar4 + local_34._4_4_ + (uint)CARRY4(uVar3,(uint)uVar11);
              if ((int)local_34._4_4_ < 0) {
                if ((((int)uVar3 < 0 && -1 < iVar4) || (-1 < iVar4)) || (local_38 < 0))
                goto LAB_006ecade;
              }
              else if ((iVar4 < 0) || (-1 < local_38)) {
LAB_006ecade:
                if (param_2 == '\0') {
                  iVar4 = FUN_006fb918(local_2c,&local_3c);
LAB_006ecb5a:
                  if (iVar4 != 0) goto LAB_006ec847;
                }
                else {
                  ___tzset();
                  local_34._0_4_ = 0;
                  local_34._4_4_ = 0;
                  iVar4 = FUN_006fb640(&local_34);
                  if ((iVar4 != 0) || (iVar4 = FUN_006fb66c((int)&local_34 + 4), iVar4 != 0)) {
                    /* WARNING: Subroutine does not return */
                    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
                  }
                  bVar8 = CARRY4(local_3c,local_34._4_4_);
                  local_3c = local_3c + local_34._4_4_;
                  local_38 = local_38 + ((int)local_34._4_4_ >> 0x1f) + (uint)bVar8;
                  iVar4 = FUN_006fbbb4(local_2c,&local_3c);
                  if (iVar4 != 0) goto LAB_006ec847;
                  if ((0 < (int)param_1[8]) || (((int)param_1[8] < 0 && (0 < local_c)))) {
                    bVar8 = CARRY4(local_3c,(uint)local_34);
                    local_3c = local_3c + (uint)local_34;
                    local_38 = local_38 + ((int)(uint)local_34 >> 0x1f) + (uint)bVar8;
                    iVar4 = FUN_006fbbb4(local_2c,&local_3c);
                    goto LAB_006ecb5a;
                  }
                }
                puVar7 = local_2c;
                for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
                  *param_1 = *puVar7;
                  puVar7 = puVar7 + 1;
                  param_1 = param_1 + 1;
                }
                goto LAB_006ec859;
              }
            }
          }
        }
      }
    }
  }
LAB_006ec847:
  puVar1 = (undefined4 *)FUN_006f390a();
  *puVar1 = 0x16;
  local_3c = 0xffffffff;
  local_38 = -1;
LAB_006ec859:
  return CONCAT44(local_38,local_3c);
}


/* ==== 006ecb91  FUN_006ecb91  size=19 ==== */

void FUN_006ecb91(undefined4 param_1)

{
  FUN_006ec775(param_1,1);
  return;
}


/* ==== 006ecba4  assemble_floating_point_snan<double>  size=33 ==== */

/* Library Function - Single Match
    void __cdecl __crt_strtox::assemble_floating_point_snan<double>(bool,double &)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl __crt_strtox::assemble_floating_point_snan<double>(bool param_1,double *param_2)

{
  *(undefined4 *)param_2 = 1;
  *(uint *)((int)param_2 + 4) = (uint)param_1 << 0x1f | 0x7ff00000;
  return;
}


/* ==== 006ecbc5  assemble_floating_point_value_t<float>  size=48 ==== */

/* Library Function - Single Match
    enum SLD_STATUS __cdecl __crt_strtox::assemble_floating_point_value_t<float>(bool,int,unsigned
   __int64,float &)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

SLD_STATUS __cdecl
__crt_strtox::assemble_floating_point_value_t<float>
          (bool param_1,int param_2,__uint64 param_3,float *param_4)

{
  *param_4 = (float)((param_2 + 0x7fU & 0xff) << 0x17 | (uint)param_1 << 0x1f |
                    (uint)param_3 & 0x7fffff);
  return 0;
}


/* ==== 006ecbf5  assemble_floating_point_value_t<double>  size=66 ==== */

/* Library Function - Single Match
    enum SLD_STATUS __cdecl __crt_strtox::assemble_floating_point_value_t<double>(bool,int,unsigned
   __int64,double &)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

SLD_STATUS __cdecl
__crt_strtox::assemble_floating_point_value_t<double>
          (bool param_1,int param_2,__uint64 param_3,double *param_4)

{
  *(uint *)((int)param_4 + 4) =
       (param_2 + 0x3ffU & 0x7ff | (uint)param_1 << 0xb) << 0x14 | param_3._4_4_ & 0xfffff;
  *(undefined4 *)param_4 = (undefined4)param_3;
  return 0;
}


/* ==== 006ecc37  common_vsscanf<char>  size=180 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    int __cdecl common_vsscanf<char>(unsigned __int64,char const * const,unsigned int,char const *
   const,struct __crt_locale_pointers * const,char * const)
   
   Library: Visual Studio 2019 Release */

int __cdecl
common_vsscanf<char>
          (__uint64 param_1,char *param_2,uint param_3,char *param_4,__crt_locale_pointers *param_5,
          char *param_6)

{
  undefined4 *puVar1;
  int iVar2;
  char *unaff_ESI;
  int local_9c;
  char local_98 [8];
  char local_90;
  char *local_8c;
  char *local_88;
  char *local_84;
  input_processor<char,__crt_stdio_input::string_input_adapter<char>_> local_80 [120];
  uint local_8;
  
  local_8 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  if ((param_2 == (char *)0x0) || (param_4 == (char *)0x0)) {
    puVar1 = (undefined4 *)FUN_006f390a();
    *puVar1 = 0x16;
    FUN_006e8c2f();
    iVar2 = -1;
  }
  else {
    iVar2 = FUN_006fa2c9(param_2,param_3);
    FUN_006ee0ac(param_5);
    local_88 = param_2 + iVar2;
    local_8c = param_2;
    local_84 = param_2;
    __crt_stdio_input::input_processor<char,__crt_stdio_input::string_input_adapter<char>_>::
    input_processor<char,__crt_stdio_input::string_input_adapter<char>_>
              (local_80,(string_input_adapter<char> *)&local_8c,CONCAT44(param_4,param_1._4_4_),
               local_98,(__crt_locale_pointers *)param_6,unaff_ESI);
    iVar2 = __crt_stdio_input::input_processor<char,__crt_stdio_input::string_input_adapter<char>_>
            ::process(local_80);
    if (local_90 != '\0') {
      *(uint *)(local_9c + 0x350) = *(uint *)(local_9c + 0x350) & 0xfffffffd;
    }
  }
  return iVar2;
}


/* ==== 006ecceb  FID_conflict:convert_hexadecimal_string_to_floating_type<float>  size=33 ==== */

/* Library Function - Multiple Matches With Different Base Names
    enum SLD_STATUS __cdecl __crt_strtox::convert_decimal_string_to_floating_type<float>(struct
   __crt_strtox::floating_point_string const &,float &)
    enum SLD_STATUS __cdecl __crt_strtox::convert_hexadecimal_string_to_floating_type<float>(struct
   __crt_strtox::floating_point_string const &,float &)
   
   Library: Visual Studio 2019 Release */

void FID_conflict_convert_hexadecimal_string_to_floating_type<float>
               (undefined4 param_1,undefined4 param_2)

{
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = param_2;
  local_8 = 0;
  FUN_006ee81a(param_1,&local_c);
  return;
}


/* ==== 006ecd0c  FID_conflict:convert_hexadecimal_string_to_floating_type<double>  size=33 ==== */

/* Library Function - Multiple Matches With Different Base Names
    enum SLD_STATUS __cdecl __crt_strtox::convert_decimal_string_to_floating_type<double>(struct
   __crt_strtox::floating_point_string const &,double &)
    enum SLD_STATUS __cdecl __crt_strtox::convert_hexadecimal_string_to_floating_type<double>(struct
   __crt_strtox::floating_point_string const &,double &)
   
   Library: Visual Studio 2019 Release */

void FID_conflict_convert_hexadecimal_string_to_floating_type<double>
               (undefined4 param_1,undefined4 param_2)

{
  undefined4 in_ECX;
  undefined4 local_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  local_c = param_2;
  _local_8 = CONCAT31((int3)((uint)in_ECX >> 8),1);
  FUN_006ee81a(param_1,&local_c);
  return;
}


/* ==== 006ecd2d  FID_conflict:convert_hexadecimal_string_to_floating_type<float>  size=33 ==== */

/* Library Function - Multiple Matches With Different Base Names
    enum SLD_STATUS __cdecl __crt_strtox::convert_decimal_string_to_floating_type<float>(struct
   __crt_strtox::floating_point_string const &,float &)
    enum SLD_STATUS __cdecl __crt_strtox::convert_hexadecimal_string_to_floating_type<float>(struct
   __crt_strtox::floating_point_string const &,float &)
   
   Library: Visual Studio 2019 Release */

void FID_conflict_convert_hexadecimal_string_to_floating_type<float>
               (undefined4 param_1,undefined4 param_2)

{
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = param_2;
  local_8 = 0;
  FUN_006f05c0(param_1,&local_c);
  return;
}


/* ==== 006ecd4e  FID_conflict:convert_hexadecimal_string_to_floating_type<double>  size=33 ==== */

/* Library Function - Multiple Matches With Different Base Names
    enum SLD_STATUS __cdecl __crt_strtox::convert_decimal_string_to_floating_type<double>(struct
   __crt_strtox::floating_point_string const &,double &)
    enum SLD_STATUS __cdecl __crt_strtox::convert_hexadecimal_string_to_floating_type<double>(struct
   __crt_strtox::floating_point_string const &,double &)
   
   Library: Visual Studio 2019 Release */

void FID_conflict_convert_hexadecimal_string_to_floating_type<double>
               (undefined4 param_1,undefined4 param_2)

{
  undefined4 in_ECX;
  undefined4 local_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  local_c = param_2;
  _local_8 = CONCAT31((int3)((uint)in_ECX >> 8),1);
  FUN_006f05c0(param_1,&local_c);
  return;
}


/* ==== 006ecd6f  FUN_006ecd6f  size=65 ==== */

undefined1 FUN_006ecd6f(byte param_1,int param_2,uint param_3)

{
  bool bVar1;
  bool bVar2;
  
  if ((param_1 & 4) != 0) {
    return 1;
  }
  if ((param_1 & 1) != 0) {
    if ((param_1 & 2) == 0) {
      if (0x7fffffff < param_3) {
        return 1;
      }
      if (param_3 < 0x7fffffff) {
        return 0;
      }
      bVar1 = param_2 != -1;
      bVar2 = param_2 == -1;
    }
    else {
      if (0x80000000 < param_3) {
        return 1;
      }
      if (param_3 < 0x80000000) {
        return 0;
      }
      bVar1 = false;
      bVar2 = param_2 == 0;
    }
    if (!bVar1 && !bVar2) {
      return 1;
    }
  }
  return 0;
}


/* ==== 006ecdb0  FUN_006ecdb0  size=30 ==== */

undefined4
FUN_006ecdb0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  FUN_006ee037(param_2,param_3,param_4,param_5);
  return param_1;
}


/* ==== 006ecdce  FUN_006ecdce  size=138 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

SLD_STATUS FUN_006ecdce(int param_1)

{
  float *pfVar1;
  undefined4 *puVar2;
  SLD_STATUS SVar3;
  floating_point_parse_result fVar4;
  int in_stack_00000018;
  int in_stack_0000001c;
  undefined1 *in_stack_00000020;
  float *in_stack_00000028;
  floating_point_string local_314 [780];
  uint local_8;
  
  pfVar1 = in_stack_00000028;
  local_8 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  if ((in_stack_00000028 == (float *)0x0) || (param_1 == 0)) {
    puVar2 = (undefined4 *)FUN_006f390a();
    *puVar2 = 0x16;
    FUN_006e8c2f();
    if ((in_stack_00000020 != (undefined1 *)0x0) &&
       (in_stack_00000018 == 0 && in_stack_0000001c == 0)) {
      *in_stack_00000020 = 0;
    }
    SVar3 = 1;
  }
  else {
    fVar4 = FUN_006ecee2(param_1,&stack0x00000008,local_314);
    SVar3 = __crt_strtox::parse_floating_point_write_result<float>(fVar4,local_314,pfVar1);
    if ((in_stack_00000020 != (undefined1 *)0x0) &&
       (in_stack_00000018 == 0 && in_stack_0000001c == 0)) {
      *in_stack_00000020 = 0;
    }
  }
  return SVar3;
}


/* ==== 006ece58  FUN_006ece58  size=138 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

SLD_STATUS FUN_006ece58(int param_1)

{
  double *pdVar1;
  undefined4 *puVar2;
  SLD_STATUS SVar3;
  floating_point_parse_result fVar4;
  int in_stack_00000018;
  int in_stack_0000001c;
  undefined1 *in_stack_00000020;
  double *in_stack_00000028;
  floating_point_string local_314 [780];
  uint local_8;
  
  pdVar1 = in_stack_00000028;
  local_8 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  if ((in_stack_00000028 == (double *)0x0) || (param_1 == 0)) {
    puVar2 = (undefined4 *)FUN_006f390a();
    *puVar2 = 0x16;
    FUN_006e8c2f();
    if ((in_stack_00000020 != (undefined1 *)0x0) &&
       (in_stack_00000018 == 0 && in_stack_0000001c == 0)) {
      *in_stack_00000020 = 0;
    }
    SVar3 = 1;
  }
  else {
    fVar4 = FUN_006ecee2(param_1,&stack0x00000008,local_314);
    SVar3 = __crt_strtox::parse_floating_point_write_result<double>(fVar4,local_314,pdVar1);
    if ((in_stack_00000020 != (undefined1 *)0x0) &&
       (in_stack_00000018 == 0 && in_stack_0000001c == 0)) {
      *in_stack_00000020 = 0;
    }
  }
  return SVar3;
}


/* ==== 006ecee2  FUN_006ecee2  size=1122 ==== */

uint FUN_006ecee2(int *param_1,
                 input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>
                 *param_2,int *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  int *piVar7;
  uint uVar8;
  int local_14;
  int *local_10;
  char local_b [4];
  char local_7;
  char local_6;
  byte local_5;
  
  cVar3 = FUN_006f153f();
  if (cVar3 == '\0') {
    return 7;
  }
  uVar1 = *(undefined4 *)(param_2 + 0x14);
  uVar2 = *(undefined4 *)(param_2 + 0x10);
  cVar3 = __crt_strtox::
          input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::get
                    (param_2);
  while( true ) {
    local_b[0] = cVar3;
    iVar4 = FUN_006f1682(cVar3,8,param_1);
    if (iVar4 == 0) break;
    cVar3 = __crt_strtox::
            input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::get
                      (param_2);
  }
  *(bool *)(param_3 + 0xc2) = local_b[0] == '-';
  if ((local_b[0] == '-') || (cVar3 = local_b[0], local_b[0] == '+')) {
    cVar3 = __crt_strtox::
            input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::get
                      (param_2);
    local_b[0] = cVar3;
  }
  if ((cVar3 == 'I') || (cVar3 == 'i')) {
    uVar8 = FUN_006ed344(local_b,param_2,uVar2,uVar1);
    return uVar8;
  }
  if ((cVar3 == 'N') || (cVar3 == 'n')) {
    uVar8 = FUN_006ed403(local_b,param_2,uVar2,uVar1);
    return uVar8;
  }
  local_5 = 0;
  if (cVar3 == '0') {
    cVar3 = __crt_strtox::
            input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::get
                      (param_2);
    if ((cVar3 == 'x') || (cVar3 == 'X')) {
      local_5 = 1;
      cVar3 = __crt_strtox::
              input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::get
                        (param_2);
      local_b[0] = cVar3;
    }
    else {
      __crt_strtox::input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::
      unget(param_2,cVar3);
      cVar3 = local_b[0];
    }
  }
  local_14 = 0;
  local_6 = '\0';
  local_10 = param_3 + 2;
  if (cVar3 == '0') {
    local_6 = '\x01';
    do {
      cVar3 = __crt_strtox::
              input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::get
                        (param_2);
      local_b[0] = cVar3;
    } while (cVar3 == '0');
  }
  uVar8 = ((local_5 == 0) - 1 & 6) + 9;
  while( true ) {
    if ((byte)(cVar3 - 0x30U) < 10) {
      uVar5 = (int)cVar3 - 0x30;
    }
    else if ((byte)(cVar3 + 0x9fU) < 0x1a) {
      uVar5 = (int)cVar3 - 0x57;
    }
    else if ((byte)(cVar3 + 0xbfU) < 0x1a) {
      uVar5 = (int)cVar3 - 0x37;
    }
    else {
      uVar5 = 0xffffffff;
    }
    if (uVar8 < uVar5) break;
    local_6 = '\x01';
    if (local_10 != param_3 + 0xc2) {
      *(char *)local_10 = (char)uVar5;
      local_10 = (int *)((int)local_10 + 1);
    }
    local_14 = local_14 + 1;
    cVar3 = __crt_strtox::
            input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::get
                      (param_2);
    local_b[0] = cVar3;
  }
  if (cVar3 == *(char *)**(undefined4 **)(*param_1 + 0x88)) {
    cVar3 = __crt_strtox::
            input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::get
                      (param_2);
    local_b[0] = cVar3;
    if ((local_10 == param_3 + 2) && (cVar3 == '0')) {
      local_6 = '\x01';
      do {
        local_14 = local_14 + -1;
        cVar3 = __crt_strtox::
                input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::get
                          (param_2);
        local_b[0] = cVar3;
      } while (cVar3 == '0');
    }
    while( true ) {
      if ((byte)(cVar3 - 0x30U) < 10) {
        uVar5 = (int)cVar3 - 0x30;
      }
      else if ((byte)(cVar3 + 0x9fU) < 0x1a) {
        uVar5 = (int)cVar3 - 0x57;
      }
      else if ((byte)(cVar3 + 0xbfU) < 0x1a) {
        uVar5 = (int)cVar3 - 0x37;
      }
      else {
        uVar5 = 0xffffffff;
      }
      if (uVar8 < uVar5) break;
      local_6 = '\x01';
      if (local_10 != param_3 + 0xc2) {
        *(char *)local_10 = (char)uVar5;
        local_10 = (int *)((int)local_10 + 1);
      }
      cVar3 = __crt_strtox::
              input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::get
                        (param_2);
      local_b[0] = cVar3;
    }
  }
  iVar4 = 0;
  if (local_6 == '\0') {
    cVar3 = FID_conflict_operator__();
    if (cVar3 == '\0') {
      return 7;
    }
    if (local_5 == 0) {
      return 7;
    }
    return 2;
  }
  __crt_strtox::input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::
  unget(param_2,local_b[0]);
  cVar3 = __crt_strtox::
          input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::get
                    (param_2);
  if (cVar3 == 'E') {
LAB_006ed188:
    bVar6 = local_5 ^ 1;
  }
  else if (cVar3 == 'P') {
LAB_006ed183:
    bVar6 = local_5;
  }
  else {
    if (cVar3 == 'e') goto LAB_006ed188;
    bVar6 = 0;
    if (cVar3 == 'p') goto LAB_006ed183;
  }
  local_b[0] = cVar3;
  if (bVar6 != 0) {
    local_b[0] = __crt_strtox::
                 input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::get
                           (param_2);
    local_7 = local_b[0] == '-';
    if ((local_b[0] == '+') || (local_b[0] == '-')) {
      local_b[0] = __crt_strtox::
                   input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::
                   get(param_2);
    }
    local_6 = '\0';
    if (local_b[0] == '0') {
      local_6 = '\x01';
      local_b[0] = '0';
      do {
        local_b[0] = __crt_strtox::
                     input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>
                     ::get(param_2);
      } while (local_b[0] == '0');
    }
    while( true ) {
      if ((byte)(local_b[0] - 0x30U) < 10) {
        uVar8 = (int)local_b[0] - 0x30;
      }
      else if ((byte)(local_b[0] + 0x9fU) < 0x1a) {
        uVar8 = (int)local_b[0] - 0x57;
      }
      else {
        if (0x19 < (byte)(local_b[0] + 0xbfU)) goto LAB_006ed233;
        uVar8 = (int)local_b[0] - 0x37;
      }
      if (9 < uVar8) goto LAB_006ed233;
      local_6 = '\x01';
      iVar4 = iVar4 * 10 + uVar8;
      if (0x1450 < iVar4) break;
      local_b[0] = __crt_strtox::
                   input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::
                   get(param_2);
    }
    iVar4 = 0x1451;
LAB_006ed233:
    do {
      if ((byte)(local_b[0] - 0x30U) < 10) {
        uVar8 = (int)local_b[0] - 0x30;
      }
      else if ((byte)(local_b[0] + 0x9fU) < 0x1a) {
        uVar8 = (int)local_b[0] - 0x57;
      }
      else {
        if (0x19 < (byte)(local_b[0] + 0xbfU)) goto LAB_006ed274;
        uVar8 = (int)local_b[0] - 0x37;
      }
      if (9 < uVar8) goto LAB_006ed274;
      local_b[0] = __crt_strtox::
                   input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::
                   get(param_2);
    } while( true );
  }
LAB_006ed29c:
  __crt_strtox::input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::
  unget(param_2,local_b[0]);
  do {
    piVar7 = local_10;
    if (piVar7 == param_3 + 2) {
      return 2;
    }
    local_10 = (int *)((int)piVar7 + -1);
  } while (*(char *)((int)piVar7 + -1) == '\0');
  if (iVar4 < 0x1451) {
    if (-0x1451 < iVar4) {
      iVar4 = iVar4 + (((local_5 == 0) - 1 & 3) + 1) * local_14;
      if (0x1450 < iVar4) goto LAB_006ed313;
      if (-0x1451 < iVar4) {
        *param_3 = iVar4;
        param_3[1] = (int)piVar7 - (int)(param_3 + 2);
        return (uint)local_5;
      }
    }
    uVar8 = 8;
  }
  else {
LAB_006ed313:
    uVar8 = 9;
  }
  return uVar8;
LAB_006ed274:
  if (local_7 != '\0') {
    iVar4 = -iVar4;
  }
  if (local_6 == '\0') {
    cVar3 = FID_conflict_operator__();
    if (cVar3 == '\0') {
      return 7;
    }
    local_b[0] = __crt_strtox::
                 input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::get
                           (param_2);
  }
  goto LAB_006ed29c;
}


/* ==== 006ed344  FUN_006ed344  size=191 ==== */

char FUN_006ed344(char *param_1,
                 input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>
                 *param_2)

{
  char cVar1;
  int iVar2;
  int local_8;
  
  iVar2 = 0;
  local_8 = 0;
  while ((*param_1 == (&DAT_00732730)[local_8] || (*param_1 == (&DAT_00732734)[local_8]))) {
    cVar1 = __crt_strtox::
            input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::get
                      (param_2);
    local_8 = local_8 + 1;
    *param_1 = cVar1;
    if (local_8 == 3) {
      __crt_strtox::input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::
      unget(param_2,cVar1);
      cVar1 = __crt_strtox::
              input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::get
                        (param_2);
      *param_1 = cVar1;
      while ((*param_1 == "INITY"[iVar2] || (*param_1 == "inity"[iVar2]))) {
        cVar1 = __crt_strtox::
                input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::get
                          (param_2);
        iVar2 = iVar2 + 1;
        *param_1 = cVar1;
        if (iVar2 == 5) {
          __crt_strtox::
          input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::unget
                    (param_2,cVar1);
          return '\x03';
        }
      }
      cVar1 = FID_conflict_operator__();
      return (cVar1 == '\0') * '\x04' + '\x03';
    }
  }
  FID_conflict_operator__();
  return '\a';
}


/* ==== 006ed403  FUN_006ed403  size=264 ==== */

int FUN_006ed403(char *param_1,
                input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>
                *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    if ((*param_1 != (&DAT_00732748)[iVar3]) && (*param_1 != (&DAT_0073274c)[iVar3])) {
      FID_conflict_operator__();
      return 7;
    }
    cVar1 = __crt_strtox::
            input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::get
                      (param_2);
    iVar3 = iVar3 + 1;
    *param_1 = cVar1;
  } while (iVar3 != 3);
  __crt_strtox::input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::
  unget(param_2,cVar1);
  cVar1 = __crt_strtox::
          input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::get
                    (param_2);
  *param_1 = cVar1;
  if (cVar1 == '(') {
    cVar1 = __crt_strtox::
            input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::get
                      (param_2);
    *param_1 = cVar1;
    bVar2 = __crt_strtox::
            parse_floating_point_possible_nan_is_snan<char,__crt_strtox::input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>_>
                      (param_1,param_2);
    if (bVar2) {
      __crt_strtox::input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::
      unget(param_2,*param_1);
      iVar3 = 5;
    }
    else {
      bVar2 = __crt_strtox::
              parse_floating_point_possible_nan_is_ind<char,__crt_strtox::input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>_>
                        (param_1,param_2);
      cVar1 = *param_1;
      if (bVar2) {
        __crt_strtox::input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>
        ::unget(param_2,cVar1);
        iVar3 = 6;
      }
      else {
        while (cVar1 != ')') {
          if ((cVar1 == '\0') ||
             ((((9 < (byte)(cVar1 - 0x30U) && (0x19 < (byte)(cVar1 + 0x9fU))) &&
               (0x19 < (byte)(cVar1 + 0xbfU))) && (cVar1 != '_')))) goto LAB_006ed464;
          cVar1 = __crt_strtox::
                  input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::
                  get(param_2);
          *param_1 = cVar1;
        }
        iVar3 = 4;
      }
    }
  }
  else {
LAB_006ed464:
    cVar1 = FID_conflict_operator__();
    iVar3 = (-(uint)(cVar1 != '\0') & 0xfffffffd) + 7;
  }
  return iVar3;
}


/* ==== 006ed50b  parse_floating_point_possible_nan_is_ind<char,__crt_strtox::input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>_>  size=58 ==== */

/* Library Function - Single Match
    bool __cdecl __crt_strtox::parse_floating_point_possible_nan_is_ind<char,class
   __crt_strtox::input_adapter_character_source<class __crt_stdio_input::string_input_adapter<char>
   > >(char &,class __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::string_input_adapter<char> > &)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

bool __cdecl
__crt_strtox::
parse_floating_point_possible_nan_is_ind<char,__crt_strtox::input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>_>
          (char *param_1,
          input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_> *param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = 0;
  while ((*param_1 == (&DAT_00732760)[iVar2] || (*param_1 == (&DAT_00732764)[iVar2]))) {
    cVar1 = input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::get
                      (param_2);
    iVar2 = iVar2 + 1;
    *param_1 = cVar1;
    if (iVar2 == 4) {
      return true;
    }
  }
  return false;
}


/* ==== 006ed545  parse_floating_point_possible_nan_is_snan<char,__crt_strtox::input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>_>  size=58 ==== */

/* Library Function - Single Match
    bool __cdecl __crt_strtox::parse_floating_point_possible_nan_is_snan<char,class
   __crt_strtox::input_adapter_character_source<class __crt_stdio_input::string_input_adapter<char>
   > >(char &,class __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::string_input_adapter<char> > &)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

bool __cdecl
__crt_strtox::
parse_floating_point_possible_nan_is_snan<char,__crt_strtox::input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>_>
          (char *param_1,
          input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_> *param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = 0;
  while ((*param_1 == (&DAT_00732750)[iVar2] || (*param_1 == (&DAT_00732758)[iVar2]))) {
    cVar1 = input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::get
                      (param_2);
    iVar2 = iVar2 + 1;
    *param_1 = cVar1;
    if (iVar2 == 5) {
      return true;
    }
  }
  return false;
}


/* ==== 006ed57f  parse_floating_point_write_result<float>  size=323 ==== */

/* Library Function - Single Match
    enum SLD_STATUS __cdecl __crt_strtox::parse_floating_point_write_result<float>(enum
   __crt_strtox::floating_point_parse_result,struct __crt_strtox::floating_point_string const
   &,float * const)
   
   Library: Visual Studio 2019 Release */

SLD_STATUS __cdecl
__crt_strtox::parse_floating_point_write_result<float>
          (floating_point_parse_result param_1,floating_point_string *param_2,float *param_3)

{
  SLD_STATUS SVar1;
  float fVar2;
  
  switch(param_1) {
  case 0:
    SVar1 = FID_conflict_convert_hexadecimal_string_to_floating_type<float>(param_2,param_3);
    break;
  case 1:
    SVar1 = FID_conflict_convert_hexadecimal_string_to_floating_type<float>(param_2,param_3);
    break;
  case 2:
    fVar2 = (float)(-(uint)(param_2[0x308] != (floating_point_string)0x0) & 0x80000000);
    goto LAB_006ed5ce;
  case 3:
    fVar2 = (float)(((param_2[0x308] == (floating_point_string)0x0) - 1 & 0x80000000) + 0x7f800000 |
                   (uint)*param_3 & 0x7f800000);
    goto LAB_006ed605;
  case 4:
    fVar2 = (float)(((param_2[0x308] == (floating_point_string)0x0) - 1 & 0x80000000) + 0x7fffffff);
LAB_006ed5ce:
    *param_3 = fVar2;
LAB_006ed5d3:
    SVar1 = 0;
    break;
  case 5:
    fVar2 = (float)(((param_2[0x308] == (floating_point_string)0x0) - 1 & 0x80000000) + 0x7f800000 |
                    (uint)*param_3 & 0x7f800000 | 1);
LAB_006ed605:
    *param_3 = fVar2;
    goto LAB_006ed5d3;
  case 6:
    *param_3 = -NAN;
    goto LAB_006ed5d3;
  case 7:
    *param_3 = 0.0;
  default:
    SVar1 = 1;
    break;
  case 8:
    SVar1 = 2;
    *param_3 = (float)(-(uint)(param_2[0x308] != (floating_point_string)0x0) & 0x80000000);
    break;
  case 9:
    SVar1 = 3;
    *param_3 = (float)(((param_2[0x308] == (floating_point_string)0x0) - 1 & 0x80000000) +
                       0x7f800000 | (uint)*param_3 & 0x7f800000);
  }
  return SVar1;
}


/* ==== 006ed6eb  parse_floating_point_write_result<double>  size=249 ==== */

/* Library Function - Single Match
    enum SLD_STATUS __cdecl __crt_strtox::parse_floating_point_write_result<double>(enum
   __crt_strtox::floating_point_parse_result,struct __crt_strtox::floating_point_string const
   &,double * const)
   
   Library: Visual Studio 2019 Release */

SLD_STATUS __cdecl
__crt_strtox::parse_floating_point_write_result<double>
          (floating_point_parse_result param_1,floating_point_string *param_2,double *param_3)

{
  uint uVar1;
  SLD_STATUS SVar2;
  
  switch(param_1) {
  case 0:
    SVar2 = FID_conflict_convert_hexadecimal_string_to_floating_type<double>(param_2,param_3);
    return SVar2;
  case 1:
    SVar2 = FID_conflict_convert_hexadecimal_string_to_floating_type<double>(param_2,param_3);
    return SVar2;
  case 2:
    uVar1 = (uint)(param_2[0x308] != (floating_point_string)0x0) << 0x1f;
    break;
  case 3:
    uVar1 = (uint)(param_2[0x308] != (floating_point_string)0x0) << 0x1f | 0x7ff00000;
    break;
  case 4:
    uVar1 = (uint)(param_2[0x308] != (floating_point_string)0x0) << 0x1f | 0x7fffffff;
    *(undefined4 *)param_3 = 0xffffffff;
    goto LAB_006ed736;
  case 5:
    assemble_floating_point_snan<double>((bool)param_2[0x308],param_3);
    return 0;
  case 6:
    *(undefined4 *)param_3 = 0;
    *(undefined4 *)((int)param_3 + 4) = 0xfff80000;
    return 0;
  case 7:
    *(undefined4 *)param_3 = 0;
    *(undefined4 *)((int)param_3 + 4) = 0;
    return 1;
  case 8:
    SVar2 = 2;
    uVar1 = (uint)(param_2[0x308] != (floating_point_string)0x0) << 0x1f;
    goto LAB_006ed7bd;
  case 9:
    SVar2 = 3;
    uVar1 = (uint)(param_2[0x308] != (floating_point_string)0x0) << 0x1f | 0x7ff00000;
LAB_006ed7bd:
    *(undefined4 *)param_3 = 0;
    *(uint *)((int)param_3 + 4) = uVar1;
    return SVar2;
  default:
    return 1;
  }
  *(undefined4 *)param_3 = 0;
LAB_006ed736:
  *(uint *)((int)param_3 + 4) = uVar1;
  return 0;
}


/* ==== 006ed80f  FUN_006ed80f  size=772 ==== */

/* WARNING: Removing unreachable block (ram,0x006eda0c) */
/* WARNING: Removing unreachable block (ram,0x006eda21) */
/* WARNING: Type propagation algorithm not settling */

ulonglong FUN_006ed80f(int param_1)

{
  byte bVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int in_stack_00000018;
  int in_stack_0000001c;
  undefined1 *in_stack_00000020;
  uint in_stack_00000028;
  byte in_stack_0000002c;
  int local_14;
  char local_c;
  
  cVar5 = FUN_006f153f();
  uVar8 = in_stack_00000028;
  iVar4 = in_stack_0000001c;
  iVar3 = in_stack_00000018;
  if (cVar5 == '\0') goto LAB_006eda6d;
  if ((in_stack_00000028 != 0) && (((int)in_stack_00000028 < 2 || (0x24 < (int)in_stack_00000028))))
  {
    *(undefined1 *)(param_1 + 0x1c) = 1;
    *(undefined4 *)(param_1 + 0x18) = 0x16;
    FUN_006e8bb2(0,0,0,0,0,param_1);
    if (in_stack_00000020 == (undefined1 *)0x0) {
      return 0;
    }
    if (in_stack_00000018 != 0 || in_stack_0000001c != 0) {
      return 0;
    }
    *in_stack_00000020 = 0;
    return 0;
  }
  local_c = __crt_strtox::
            input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::get
                      ((input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>
                        *)&stack0x00000008);
  if (*(char *)(param_1 + 0x14) == '\0') {
    FUN_006ec260();
  }
  iVar6 = FUN_006f1682(local_c,8,param_1 + 0xc);
  while (iVar6 != 0) {
    local_c = __crt_strtox::
              input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::get
                        ((input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>
                          *)&stack0x00000008);
    iVar6 = FUN_006f1682(local_c,8,param_1 + 0xc);
    uVar8 = in_stack_00000028;
  }
  if (local_c == '-') {
    bVar1 = in_stack_0000002c | 2;
LAB_006ed901:
    local_c = __crt_strtox::
              input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::get
                        ((input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>
                          *)&stack0x00000008);
  }
  else {
    bVar1 = in_stack_0000002c;
    if (local_c == '+') goto LAB_006ed901;
  }
  if ((uVar8 == 0) || (uVar8 == 0x10)) {
    if ((byte)(local_c - 0x30U) < 10) {
      iVar6 = local_c + -0x30;
LAB_006ed945:
      if (iVar6 == 0) {
        cVar5 = __crt_strtox::
                input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::get
                          ((input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>
                            *)&stack0x00000008);
        if ((cVar5 == 'x') || (cVar5 == 'X')) {
          if (uVar8 == 0) {
            uVar8 = 0x10;
          }
          local_c = __crt_strtox::
                    input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::
                    get((input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>
                         *)&stack0x00000008);
        }
        else {
          if (uVar8 == 0) {
            uVar8 = 8;
          }
          __crt_strtox::
          input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::unget
                    ((input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>
                      *)&stack0x00000008,cVar5);
        }
        goto LAB_006ed98d;
      }
    }
    else {
      if ((byte)(local_c + 0x9fU) < 0x1a) {
        iVar6 = local_c + -0x57;
        goto LAB_006ed945;
      }
      if ((byte)(local_c + 0xbfU) < 0x1a) {
        iVar6 = local_c + -0x37;
        goto LAB_006ed945;
      }
    }
    if (uVar8 == 0) {
      uVar8 = 10;
    }
  }
LAB_006ed98d:
  uVar9 = __aulldiv(0xffffffff,0xffffffff,uVar8,(int)uVar8 >> 0x1f);
  uVar2 = 0;
  while( true ) {
    local_14 = (int)uVar2;
    if ((byte)(local_c - 0x30U) < 10) {
      uVar7 = (int)local_c - 0x30;
    }
    else if ((byte)(local_c + 0x9fU) < 0x1a) {
      uVar7 = (int)local_c - 0x57;
    }
    else if ((byte)(local_c + 0xbfU) < 0x1a) {
      uVar7 = (int)local_c - 0x37;
    }
    else {
      uVar7 = 0xffffffff;
    }
    if (uVar8 <= uVar7) break;
    uVar10 = __allmul(uVar8,(int)uVar8 >> 0x1f,uVar2);
    bVar1 = bVar1 | (uVar10 + uVar7 < uVar10 || uVar9 < uVar2) << 2 | 8U;
    local_c = __crt_strtox::
              input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::get
                        ((input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>
                          *)&stack0x00000008);
    uVar2 = uVar10 + uVar7;
  }
  __crt_strtox::input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::
  unget((input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_> *)
        &stack0x00000008,local_c);
  if ((bVar1 & 8) != 0) {
    cVar5 = FUN_006ecd6f(bVar1,uVar2);
    if (cVar5 == '\0') {
      if ((bVar1 & 2) != 0) {
        uVar2 = CONCAT44(-((int)(uVar2 >> 0x20) + (uint)(local_14 != 0)),-local_14);
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x1c) = 1;
      *(undefined4 *)(param_1 + 0x18) = 0x22;
      if ((bVar1 & 1) != 0) {
        if ((bVar1 & 2) == 0) {
          if ((in_stack_00000020 != (undefined1 *)0x0) &&
             (in_stack_00000018 == 0 && in_stack_0000001c == 0)) {
            *in_stack_00000020 = 0;
          }
          return 0x7fffffffffffffff;
        }
        if ((in_stack_00000020 != (undefined1 *)0x0) &&
           (in_stack_00000018 == 0 && in_stack_0000001c == 0)) {
          *in_stack_00000020 = 0;
        }
        return 0x8000000000000000;
      }
      uVar2 = 0xffffffffffffffff;
    }
    if (in_stack_00000020 != (undefined1 *)0x0) {
      if (in_stack_00000018 == 0 && in_stack_0000001c == 0) {
        *in_stack_00000020 = 0;
        return uVar2;
      }
      return uVar2;
    }
    return uVar2;
  }
  restore_state(iVar3,iVar4);
LAB_006eda6d:
  if ((in_stack_00000020 != (undefined1 *)0x0) && (in_stack_00000018 == 0 && in_stack_0000001c == 0)
     ) {
    *in_stack_00000020 = 0;
  }
  return 0;
}


/* ==== 006edb13  FUN_006edb13  size=92 ==== */

undefined8 FUN_006edb13(undefined4 param_1)

{
  undefined8 uVar1;
  int in_stack_00000018;
  int in_stack_0000001c;
  undefined1 *in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 in_stack_0000002c;
  undefined1 local_30 [44];
  
  FUN_006e8923(param_1);
  FUN_006edffa(&stack0x00000008);
  uVar1 = FUN_006ed80f(local_30);
  FUN_006e896b();
  if ((in_stack_00000020 != (undefined1 *)0x0) && (in_stack_00000018 == 0 && in_stack_0000001c == 0)
     ) {
    *in_stack_00000020 = 0;
  }
  return uVar1;
}


/* ==== 006edb6f  FUN_006edb6f  size=105 ==== */

undefined4 FUN_006edb6f(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined1 auStack_3c [28];
  undefined4 uStack_20;
  undefined4 *puStack_1c;
  undefined4 local_c;
  char local_5;
  
  puStack_1c = &local_c;
  local_5 = '\0';
  local_c = 0;
  uVar2 = *(undefined4 *)(in_ECX + 0x68);
  FUN_006ecdb0(auStack_3c,in_ECX + 8,*(undefined4 *)(in_ECX + 0x30),*(undefined4 *)(in_ECX + 0x34),
               &local_5);
  iVar1 = FUN_006ecdce(uVar2);
  if ((local_5 == '\0') || (iVar1 == 1)) {
    uVar2 = 0;
  }
  else if (*(char *)(in_ECX + 0x2e) == '\0') {
    puStack_1c = &local_c;
    uStack_20 = 0x6edbd0;
    uVar2 = FUN_006edf40();
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


/* ==== 006edbd8  FUN_006edbd8  size=105 ==== */

undefined4 FUN_006edbd8(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined1 auStack_40 [28];
  undefined4 uStack_24;
  undefined8 *puStack_20;
  undefined8 local_14;
  char local_5;
  
  puStack_20 = &local_14;
  local_5 = '\0';
  local_14 = 0;
  uVar2 = *(undefined4 *)(in_ECX + 0x68);
  FUN_006ecdb0(auStack_40,in_ECX + 8,*(undefined4 *)(in_ECX + 0x30),*(undefined4 *)(in_ECX + 0x34),
               &local_5);
  iVar1 = FUN_006ece58(uVar2);
  if ((local_5 == '\0') || (iVar1 == 1)) {
    uVar2 = 0;
  }
  else if (*(char *)(in_ECX + 0x2e) == '\0') {
    puStack_20 = &local_14;
    uStack_24 = 0x6edc39;
    uVar2 = FUN_006edf75();
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


/* ==== 006edc41  FUN_006edc41  size=354 ==== */

uint FUN_006edc41(int param_1)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  undefined4 *puVar4;
  int iVar5;
  uint *in_ECX;
  uint uVar6;
  uint uVar7;
  undefined1 *puVar8;
  int iVar9;
  bool bVar10;
  undefined1 *local_1c;
  int local_8;
  
  puVar8 = (undefined1 *)0x0;
  if (*(char *)((int)in_ECX + 0x2e) == '\0') {
    puVar4 = (undefined4 *)in_ECX[0x1b];
    in_ECX[0x1b] = (uint)(puVar4 + 1);
    puVar8 = (undefined1 *)*puVar4;
    if (puVar8 == (undefined1 *)0x0) {
      puVar4 = (undefined4 *)FUN_006f390a();
      *puVar4 = 0x16;
      puVar4 = (undefined4 *)FUN_006e8c2f();
      goto LAB_006edc76;
    }
    if ((*in_ECX & 1) == 0) goto LAB_006edcb8;
    in_ECX[0x1b] = (uint)(puVar4 + 2);
    iVar9 = puVar4[1];
    if (iVar9 == 0) {
      if ((*in_ECX & 4) != 0) {
        __crt_stdio_input::string_input_adapter<char>::get
                  ((string_input_adapter<char> *)(in_ECX + 2));
        *puVar8 = 0;
      }
LAB_006edcab:
      puVar4 = (undefined4 *)FUN_006f390a();
      *puVar4 = 0xc;
      goto LAB_006edc76;
    }
  }
  else {
LAB_006edcb8:
    iVar9 = -1;
  }
  uVar1 = in_ECX[0xc];
  uVar2 = in_ECX[0xd];
  local_8 = iVar9;
  if ((param_1 != 0) && (iVar9 != -1)) {
    local_8 = iVar9 + -1;
  }
  uVar7 = 0;
  uVar6 = 0;
  local_1c = puVar8;
  while( true ) {
    if (((uVar1 != 0 || uVar2 != 0) && (uVar7 == uVar1)) && (uVar6 == uVar2)) goto LAB_006edd62;
    iVar5 = __crt_stdio_input::string_input_adapter<char>::get
                      ((string_input_adapter<char> *)(in_ECX + 2));
    cVar3 = FUN_006f0b78(param_1,iVar5);
    if (cVar3 == '\0') break;
    if (*(char *)((int)in_ECX + 0x2e) == '\0') {
      if (local_8 == 0) {
        if (iVar9 != -1) {
          *puVar8 = 0;
        }
        goto LAB_006edcab;
      }
      *local_1c = (char)iVar5;
      local_1c = local_1c + 1;
      local_8 = local_8 + -1;
    }
    bVar10 = 0xfffffffe < uVar7;
    uVar7 = uVar7 + 1;
    uVar6 = uVar6 + bVar10;
  }
  __crt_stdio_input::string_input_adapter<char>::unget
            ((string_input_adapter<char> *)(in_ECX + 2),iVar5);
LAB_006edd62:
  puVar8 = (undefined1 *)(uVar7 | uVar6);
  puVar4 = (undefined4 *)0x0;
  if (puVar8 == (undefined1 *)0x0) {
LAB_006edc76:
    return (uint)puVar4 & 0xffffff00;
  }
  if ((param_1 == 0) && ((uVar7 != uVar1 || (uVar6 != uVar2)))) {
    puVar8 = (undefined1 *)(*in_ECX & 4);
    puVar4 = (undefined4 *)0x0;
    if (puVar8 == (undefined1 *)0x0) goto LAB_006edc76;
  }
  if ((*(char *)((int)in_ECX + 0x2e) == '\0') && (param_1 != 0)) {
    *local_1c = 0;
    puVar8 = local_1c;
  }
  return CONCAT31((int3)((uint)puVar8 >> 8),1);
}


/* ==== 006edda3  FUN_006edda3  size=366 ==== */

uint FUN_006edda3(int param_1)

{
  char cVar1;
  bool bVar2;
  undefined4 *puVar3;
  uint uVar4;
  input_processor<char,__crt_stdio_input::string_input_adapter<char>_> *in_ECX;
  wchar_t *pwVar5;
  wchar_t *local_20;
  int local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  pwVar5 = (wchar_t *)0x0;
  if (in_ECX[0x2e] == (input_processor<char,__crt_stdio_input::string_input_adapter<char>_>)0x0) {
    puVar3 = *(undefined4 **)(in_ECX + 0x6c);
    *(undefined4 **)(in_ECX + 0x6c) = puVar3 + 1;
    pwVar5 = (wchar_t *)*puVar3;
    if (pwVar5 == (wchar_t *)0x0) {
      puVar3 = (undefined4 *)FUN_006f390a();
      *puVar3 = 0x16;
      puVar3 = (undefined4 *)FUN_006e8c2f();
      goto LAB_006eddd8;
    }
    if ((*(uint *)in_ECX & 1) == 0) goto LAB_006ede1c;
    *(undefined4 **)(in_ECX + 0x6c) = puVar3 + 2;
    uVar4 = puVar3[1];
    if (uVar4 == 0) {
      if ((*(uint *)in_ECX & 4) != 0) {
        __crt_stdio_input::string_input_adapter<char>::get
                  ((string_input_adapter<char> *)(in_ECX + 8));
        *pwVar5 = L'\0';
      }
LAB_006ede0f:
      puVar3 = (undefined4 *)FUN_006f390a();
      *puVar3 = 0xc;
      goto LAB_006eddd8;
    }
  }
  else {
LAB_006ede1c:
    uVar4 = 0xffffffff;
  }
  local_14 = *(uint *)(in_ECX + 0x30);
  local_18 = *(uint *)(in_ECX + 0x34);
  local_10 = uVar4;
  if ((param_1 != 0) && (uVar4 != 0xffffffff)) {
    local_10 = uVar4 - 1;
  }
  local_c = 0;
  local_8 = 0;
  local_20 = pwVar5;
  while( true ) {
    if (((local_14 != 0 || local_18 != 0) && (local_c == local_14)) && (local_8 == local_18))
    goto LAB_006edece;
    local_1c = __crt_stdio_input::string_input_adapter<char>::get
                         ((string_input_adapter<char> *)(in_ECX + 8));
    cVar1 = FUN_006f0b78(param_1,local_1c);
    if (cVar1 == '\0') break;
    if (in_ECX[0x2e] == (input_processor<char,__crt_stdio_input::string_input_adapter<char>_>)0x0) {
      if (local_10 == 0) {
        if (uVar4 != 0xffffffff) {
          *pwVar5 = L'\0';
        }
        goto LAB_006ede0f;
      }
      bVar2 = __crt_stdio_input::
              input_processor<char,__crt_stdio_input::string_input_adapter<char>_>::write_character
                        (in_ECX,pwVar5,uVar4,&local_20,&local_10,(char)local_1c);
      if (!bVar2) goto LAB_006edece;
    }
    bVar2 = 0xfffffffe < local_c;
    local_c = local_c + 1;
    local_8 = local_8 + bVar2;
  }
  __crt_stdio_input::string_input_adapter<char>::unget
            ((string_input_adapter<char> *)(in_ECX + 8),local_1c);
LAB_006edece:
  uVar4 = local_c | local_8;
  puVar3 = (undefined4 *)0x0;
  if (uVar4 == 0) {
LAB_006eddd8:
    return (uint)puVar3 & 0xffffff00;
  }
  if ((param_1 == 0) && ((local_c != local_14 || (local_8 != local_18)))) {
    uVar4 = *(uint *)in_ECX & 4;
    puVar3 = (undefined4 *)0x0;
    if (uVar4 == 0) goto LAB_006eddd8;
  }
  if ((in_ECX[0x2e] == (input_processor<char,__crt_stdio_input::string_input_adapter<char>_>)0x0) &&
     (param_1 != 0)) {
    *local_20 = L'\0';
  }
  return CONCAT31((int3)(uVar4 >> 8),1);
}


/* ==== 006edf11  skip_whitespace<__crt_stdio_input::string_input_adapter,char>  size=47 ==== */

/* Library Function - Single Match
    int __cdecl __crt_stdio_input::skip_whitespace<class
   __crt_stdio_input::string_input_adapter,char>(class __crt_stdio_input::string_input_adapter<char>
   &,struct __crt_locale_pointers * const)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl
__crt_stdio_input::skip_whitespace<__crt_stdio_input::string_input_adapter,char>
          (string_input_adapter<char> *param_1,__crt_locale_pointers *param_2)

{
  uint uVar1;
  int iVar2;
  
  do {
    uVar1 = string_input_adapter<char>::get(param_1);
    if (uVar1 == 0xffffffff) {
      return -1;
    }
    iVar2 = FUN_006f1682(uVar1 & 0xff,8,param_2);
  } while (iVar2 != 0);
  return uVar1;
}


/* ==== 006edf40  FUN_006edf40  size=53 ==== */

uint FUN_006edf40(undefined4 *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int in_ECX;
  
  piVar1 = *(int **)(in_ECX + 0x6c);
  *(int **)(in_ECX + 0x6c) = piVar1 + 1;
  puVar3 = (undefined4 *)*piVar1;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)FUN_006f390a();
    *puVar3 = 0x16;
    uVar4 = FUN_006e8c2f();
    uVar4 = uVar4 & 0xffffff00;
  }
  else {
    uVar2 = *param_1;
    *puVar3 = uVar2;
    uVar4 = CONCAT31((int3)((uint)uVar2 >> 8),1);
  }
  return uVar4;
}


/* ==== 006edf75  FUN_006edf75  size=59 ==== */

uint FUN_006edf75(undefined4 *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  int in_ECX;
  
  piVar1 = *(int **)(in_ECX + 0x6c);
  *(int **)(in_ECX + 0x6c) = piVar1 + 1;
  puVar4 = (undefined4 *)*piVar1;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)FUN_006f390a();
    *puVar4 = 0x16;
    uVar5 = FUN_006e8c2f();
    uVar5 = uVar5 & 0xffffff00;
  }
  else {
    uVar2 = *param_1;
    uVar3 = param_1[1];
    puVar4[1] = uVar3;
    uVar5 = CONCAT31((int3)((uint)uVar3 >> 8),1);
    *puVar4 = uVar2;
  }
  return uVar5;
}


/* ==== 006edffa  FUN_006edffa  size=61 ==== */

void FUN_006edffa(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  uVar1 = param_1[3];
  in_ECX[2] = param_1[2];
  in_ECX[3] = uVar1;
  uVar1 = param_1[5];
  in_ECX[4] = param_1[4];
  in_ECX[5] = uVar1;
  in_ECX[6] = param_1[6];
  *param_1 = 0;
  param_1[6] = 0;
  return;
}


/* ==== 006ee037  FUN_006ee037  size=49 ==== */

void FUN_006ee037(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 *param_4)

{
  undefined4 *in_ECX;
  
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  *in_ECX = param_1;
  in_ECX[2] = param_2;
  in_ECX[3] = param_3;
  in_ECX[6] = param_4;
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = 1;
  }
  return;
}


/* ==== 006ee0ac  FUN_006ee0ac  size=130 ==== */

void FUN_006ee0ac(int *param_1)

{
  int *piVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  int *in_ECX;
  undefined *puVar5;
  
  *(undefined1 *)(in_ECX + 3) = 0;
  piVar1 = in_ECX + 1;
  if (param_1 == (int *)0x0) {
    puVar3 = PTR_PTR_007c5b40;
    puVar5 = PTR_DAT_007c5b44;
    if (DAT_007c8dac != 0) {
      iVar4 = FUN_006f8965();
      *in_ECX = iVar4;
      *piVar1 = *(int *)(iVar4 + 0x4c);
      in_ECX[2] = *(int *)(iVar4 + 0x48);
      ___acrt_update_locale_info(iVar4,piVar1);
      FUN_006fa5f9(*in_ECX,in_ECX + 2);
      uVar2 = *(uint *)(*in_ECX + 0x350);
      if ((uVar2 & 2) != 0) {
        return;
      }
      *(uint *)(*in_ECX + 0x350) = uVar2 | 2;
      *(undefined1 *)(in_ECX + 3) = 1;
      return;
    }
  }
  else {
    puVar3 = (undefined *)*param_1;
    puVar5 = (undefined *)param_1[1];
  }
  *piVar1 = (int)puVar3;
  in_ECX[2] = (int)puVar5;
  return;
}


/* ==== 006ee12e  FID_conflict:operator()  size=42 ==== */

/* Library Function - Multiple Matches With Different Base Names
    public: bool __thiscall <lambda_0b87716a0b73cdfba1cd37fcaaa20711>::operator()(void)const 
    public: bool __thiscall <lambda_644f8ab42ed3fd1d660977a2364b3a7d>::operator()(void)const 
    public: bool __thiscall <lambda_c7c3f778895f47e7f4eff38a8fef279a>::operator()(void)const 
    public: bool __thiscall <lambda_e41f1170c8800e4a6fed1afad60fab6f>::operator()(void)const 
     6 names - too many to list
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void FID_conflict_operator__(void)

{
  undefined4 *in_ECX;
  
  __crt_strtox::input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::
  unget((input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_> *)*in_ECX,
        *(char *)in_ECX[1]);
  *(undefined1 *)in_ECX[1] = 0;
  restore_state(*(undefined4 *)in_ECX[2],((undefined4 *)in_ECX[2])[1]);
  return;
}


/* ==== 006ee158  advance  size=280 ==== */

/* Library Function - Single Match
    public: bool __thiscall __crt_stdio_input::format_string_parser<char>::advance(void)
   
   Library: Visual Studio 2019 Release */

bool __thiscall
__crt_stdio_input::format_string_parser<char>::advance(format_string_parser<char> *this)

{
  format_string_parser<char> *pfVar1;
  format_string_parser<char> fVar2;
  format_string_parser<char> *pfVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  
  if (*(int *)(this + 0xc) == 0) {
    *(undefined4 *)(this + 0x10) = 0;
    *(undefined2 *)(this + 0x14) = 0;
    this[0x16] = (format_string_parser<char>)0x0;
    *(undefined4 *)(this + 0x18) = 0;
    *(undefined4 *)(this + 0x1c) = 0;
    *(undefined4 *)(this + 0x20) = 0;
    this[0x24] = (format_string_parser<char>)0x0;
    *(undefined4 *)(this + 0x28) = 0;
    if (**(byte **)(this + 8) == 0) {
      *(undefined4 *)(this + 0x10) = 1;
    }
    else {
      iVar6 = _isspace((uint)**(byte **)(this + 8));
      pfVar3 = *(format_string_parser<char> **)(this + 8);
      if (iVar6 != 0) {
        *(undefined4 *)(this + 0x10) = 2;
        fVar2 = *pfVar3;
        while (iVar6 = _isspace((uint)(byte)fVar2), iVar6 != 0) {
          *(int *)(this + 8) = *(int *)(this + 8) + 1;
          fVar2 = **(format_string_parser<char> **)(this + 8);
        }
        return true;
      }
      if ((*pfVar3 != (format_string_parser<char>)0x25) ||
         (pfVar1 = pfVar3 + 1, *pfVar1 == (format_string_parser<char>)0x25)) {
        *(undefined4 *)(this + 0x10) = 3;
        this[0x14] = *pfVar3;
        *(format_string_parser<char> **)(this + 8) =
             pfVar3 + (*pfVar3 == (format_string_parser<char>)0x25) + 1;
        bVar5 = scan_optional_literal_character_trail_bytes_tchar(this,'\0');
        return bVar5;
      }
      *(undefined4 *)(this + 0x10) = 4;
      *(format_string_parser<char> **)(this + 8) = pfVar1;
      if (*pfVar1 == (format_string_parser<char>)0x2a) {
        this[0x16] = (format_string_parser<char>)0x1;
        *(format_string_parser<char> **)(this + 8) = pfVar3 + 2;
      }
      cVar4 = FUN_006f109e();
      if (cVar4 != '\0') {
        FUN_006f1132();
        scan_optional_wide_modifier(this);
        cVar4 = FUN_006f0f22();
        if (cVar4 != '\0') {
          if ((&DAT_007326b8)[*(int *)(this + 0x20) + *(int *)(this + 0x28) * 0xc] != '\0') {
            return true;
          }
          *(undefined4 *)(this + 0x10) = 0;
          *(undefined2 *)(this + 0x14) = 0;
          this[0x16] = (format_string_parser<char>)0x0;
          *(undefined4 *)(this + 0x18) = 0;
          *(undefined4 *)(this + 0x1c) = 0;
          *(undefined4 *)(this + 0x20) = 0;
          this[0x24] = (format_string_parser<char>)0x0;
          *(undefined4 *)(this + 0x28) = 0;
          *(undefined4 *)(this + 0xc) = 0x16;
        }
      }
    }
  }
  return false;
}


/* ==== 006ee270  FUN_006ee270  size=36 ==== */

undefined4 FUN_006ee270(void)

{
  undefined4 *in_ECX;
  
  if (*(char *)(in_ECX + 1) != '\0') {
    return *in_ECX;
  }
                    /* WARNING: Subroutine does not return */
  __invoke_watson(L"_is_double",L"__crt_strtox::floating_point_value::as_double",
                  L"minkernel\\crts\\ucrt\\inc\\corecrt_internal_strtox.h",0x1db,0);
}


/* ==== 006ee295  FUN_006ee295  size=36 ==== */

undefined4 FUN_006ee295(void)

{
  undefined4 *in_ECX;
  
  if (*(char *)(in_ECX + 1) == '\0') {
    return *in_ECX;
  }
                    /* WARNING: Subroutine does not return */
  __invoke_watson(L"!_is_double",L"__crt_strtox::floating_point_value::as_float",
                  L"minkernel\\crts\\ucrt\\inc\\corecrt_internal_strtox.h",0x1e1,0);
}


/* ==== 006ee2ba  assemble_floating_point_infinity  size=64 ==== */

/* Library Function - Single Match
    void __cdecl __crt_strtox::assemble_floating_point_infinity(bool,class
   __crt_strtox::floating_point_value const &)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void __cdecl
__crt_strtox::assemble_floating_point_infinity(bool param_1,floating_point_value *param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  
  if (param_2[4] != (floating_point_value)0x0) {
    puVar1 = (undefined4 *)FUN_006ee270();
    *puVar1 = 0;
    puVar1[1] = (uint)param_1 << 0x1f | 0x7ff00000;
    return;
  }
  puVar2 = (uint *)FUN_006ee295();
  *puVar2 = (uint)param_1 << 0x1f | 0x7f800000;
  return;
}


/* ==== 006ee2fa  FUN_006ee2fa  size=857 ==== */

/* WARNING: Removing unreachable block (ram,0x006ee49e) */
/* WARNING: Removing unreachable block (ram,0x006ee5c3) */

SLD_STATUS
FUN_006ee2fa(uint param_1,uint param_2,int param_3,bool param_4,char param_5,
            floating_point_value *param_6)

{
  floating_point_value fVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  double *pdVar8;
  SLD_STATUS SVar9;
  float *pfVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  int local_c;
  
  uVar16 = CONCAT44(param_2,param_1);
  uVar12 = 0;
  if (param_2 == 0) {
    iVar11 = 0x1f;
    if (param_1 != 0) {
      for (; param_1 >> iVar11 == 0; iVar11 = iVar11 + -1) {
      }
    }
    if (param_1 == 0) {
      iVar11 = 0;
    }
    else {
      iVar11 = iVar11 + 1;
    }
  }
  else {
    iVar11 = 0x1f;
    if (param_2 != 0) {
      for (; param_2 >> iVar11 == 0; iVar11 = iVar11 + -1) {
      }
    }
    if (param_2 == 0) {
      iVar11 = 0;
    }
    else {
      iVar11 = iVar11 + 1;
    }
    iVar11 = iVar11 + 0x20;
  }
  fVar1 = param_6[4];
  iVar11 = (((fVar1 == (floating_point_value)0x0) - 1 & 0x1d) + 0x18) - iVar11;
  local_c = param_3 - iVar11;
  iVar6 = ((fVar1 == (floating_point_value)0x0) - 1 & 0x380) + 0x7f;
  if (iVar6 < local_c) {
LAB_006ee5eb:
    __crt_strtox::assemble_floating_point_infinity(param_4,param_6);
    return 3;
  }
  if (local_c < (int)(((fVar1 == (floating_point_value)0x0) - 1 & 0xfffffc80) - 0x7e)) {
    local_c = -iVar6;
    iVar6 = param_3 + -1 + iVar6;
    if (iVar6 < 0) {
      if ((uint)-iVar6 < 0x40) {
        lVar13 = __allshl();
        uVar14 = __allshl();
        bVar2 = ((uint)lVar13 & param_1) != 0;
        bVar3 = ((uint)((ulonglong)lVar13 >> 0x20) & param_2) != 0;
        if ((param_5 == '\0') ||
           (((uint)(lVar13 + -1) & param_1) != 0 ||
            ((uint)((ulonglong)(lVar13 + -1) >> 0x20) & param_2) != 0)) {
          bVar4 = true;
          bVar5 = true;
        }
        else {
          bVar4 = false;
          bVar5 = false;
        }
        if ((bVar2 || bVar3) || (bVar4)) {
          iVar7 = fegetround();
          if (iVar7 == 0) {
            if ((bVar2 || bVar3) &&
               ((bVar5 || (((uint)uVar14 & param_1) != 0 ||
                           ((uint)((ulonglong)uVar14 >> 0x20) & param_2) != 0)))) {
              uVar12 = 1;
            }
          }
          else if (iVar7 == 0x100) {
            uVar12 = (uint)param_4;
          }
          else if (iVar7 == 0x200) {
            uVar12 = (uint)(param_4 ^ 1);
          }
        }
        lVar13 = __aullshr();
        uVar16 = lVar13 + (ulonglong)uVar12;
        if (uVar16 != 0) {
          uVar15 = FUN_006f0666();
          if (uVar15 < uVar16) {
            local_c = ((param_3 - iVar6) - iVar11) + -1;
          }
          goto LAB_006ee613;
        }
      }
      __crt_strtox::assemble_floating_point_zero(param_4,param_6);
      return 2;
    }
  }
  else {
    if (iVar11 < 0) {
      if ((uint)-iVar11 < 0x40) {
        lVar13 = __allshl();
        uVar14 = __allshl();
        bVar2 = ((uint)lVar13 & param_1) != 0;
        bVar3 = ((uint)((ulonglong)lVar13 >> 0x20) & param_2) != 0;
        if ((param_5 == '\0') ||
           (((uint)(lVar13 + -1) & param_1) != 0 ||
            ((uint)((ulonglong)(lVar13 + -1) >> 0x20) & param_2) != 0)) {
          bVar4 = true;
          bVar5 = true;
        }
        else {
          bVar4 = false;
          bVar5 = false;
        }
        if ((bVar2 || bVar3) || (bVar4)) {
          iVar11 = fegetround();
          if (iVar11 == 0) {
            if ((bVar2 || bVar3) &&
               ((bVar5 || (((uint)uVar14 & param_1) != 0 ||
                           ((uint)((ulonglong)uVar14 >> 0x20) & param_2) != 0)))) {
              uVar12 = 1;
            }
          }
          else if (iVar11 == 0x100) {
            uVar12 = (uint)param_4;
          }
          else if (iVar11 == 0x200) {
            uVar12 = (uint)(param_4 ^ 1);
          }
        }
        lVar13 = __aullshr();
        uVar16 = lVar13 + (ulonglong)uVar12;
      }
      else {
        uVar16 = 0;
      }
      uVar15 = FUN_006f0c16();
      if (uVar15 < uVar16) {
        uVar16 = uVar16 >> 1;
        local_c = local_c + 1;
        if ((int)(((param_6[4] == (floating_point_value)0x0) - 1 & 0x380) + 0x7f) < local_c)
        goto LAB_006ee5eb;
      }
      goto LAB_006ee613;
    }
    if (iVar11 < 1) goto LAB_006ee613;
  }
  uVar16 = __allshl();
LAB_006ee613:
  uVar15 = FUN_006f0666();
  if (param_6[4] == (floating_point_value)0x0) {
    pfVar10 = (float *)FUN_006ee295();
    SVar9 = __crt_strtox::assemble_floating_point_value_t<float>
                      (param_4,local_c,uVar16 & uVar15,pfVar10);
  }
  else {
    pdVar8 = (double *)FUN_006ee270();
    SVar9 = __crt_strtox::assemble_floating_point_value_t<double>
                      (param_4,local_c,uVar16 & uVar15,pdVar8);
  }
  return SVar9;
}


/* ==== 006ee653  FUN_006ee653  size=402 ==== */

void FUN_006ee653(uint *param_1,uint param_2,undefined4 param_3,byte param_4,int param_5)

{
  uint *puVar1;
  uint *puVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  
  iVar5 = ((*(char *)(param_5 + 4) == '\0') - 1 & 0x1d) + 0x17;
  if (0x40 < param_2) {
    uVar6 = param_2 >> 5;
    param_2 = param_2 & 0x1f;
    iVar7 = uVar6 - 2;
    uVar4 = param_1[uVar6 - 1];
    puVar1 = param_1 + uVar6;
    if (param_2 == 0) {
      iVar5 = iVar5 + iVar7 * 0x20;
      puVar2 = param_1 + (uVar6 - 1);
      bVar3 = param_4 ^ 1;
      for (; lVar10 = CONCAT44(*puVar1,*puVar2), iVar7 != 0; iVar7 = iVar7 + -1) {
        param_1 = param_1 + 1;
        bVar3 = bVar3 & (*param_1 != 0) - 1U;
      }
    }
    else {
      bVar3 = 1;
      iVar5 = param_2 + iVar7 * 0x20 + iVar5;
      lVar8 = __allshl();
      lVar9 = __aullshr();
      lVar10 = __allshl();
      lVar10 = lVar8 + lVar9 + lVar10;
      if ((param_4 != 0) || ((uVar4 & (1 << (sbyte)param_2) - 1U) != 0)) {
        bVar3 = 0;
      }
      for (; iVar7 != 0; iVar7 = iVar7 + -1) {
        param_1 = param_1 + 1;
        bVar3 = bVar3 & (*param_1 != 0) - 1U;
      }
    }
    goto LAB_006ee7d8;
  }
  if (*param_1 == 0) {
    uVar4 = 0;
LAB_006ee68f:
    uVar6 = 0;
  }
  else {
    uVar4 = param_1[1];
    if (*param_1 < 2) goto LAB_006ee68f;
    uVar6 = param_1[2];
  }
  lVar10 = CONCAT44(uVar6,uVar4);
  bVar3 = param_4 ^ 1;
LAB_006ee7d8:
  FUN_006ee2fa(lVar10,iVar5,param_3,bVar3,param_5);
  return;
}


/* ==== 006ee7e5  assemble_floating_point_zero  size=53 ==== */

/* Library Function - Single Match
    void __cdecl __crt_strtox::assemble_floating_point_zero(bool,class
   __crt_strtox::floating_point_value const &)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void __cdecl __crt_strtox::assemble_floating_point_zero(bool param_1,floating_point_value *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  
  if (param_2[4] != (floating_point_value)0x0) {
    puVar1 = (undefined4 *)FUN_006ee270();
    *puVar1 = 0;
    puVar1[1] = (uint)param_1 << 0x1f;
    return;
  }
  piVar2 = (int *)FUN_006ee295();
  *piVar2 = (uint)param_1 << 0x1f;
  return;
}


/* ==== 006ee81a  FUN_006ee81a  size=7590 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_006ee81a(uint *param_1,floating_point_value *param_2)

{
  byte bVar1;
  undefined1 uVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  uint *puVar8;
  uint uVar9;
  uint *puVar10;
  byte *pbVar11;
  uint *puVar12;
  uint uVar13;
  uint *puVar14;
  uint *puVar15;
  uint uVar16;
  bool bVar17;
  ulonglong uVar18;
  longlong lVar19;
  rsize_t _MaxCount;
  uint local_b2c [115];
  uint *local_960;
  uint *local_95c;
  floating_point_value *local_958;
  uint *local_954;
  uint *local_950;
  uint local_94c;
  uint *local_948;
  uint *local_944;
  uint *local_940;
  uint *local_93c;
  uint *local_938;
  uint *local_934;
  uint *local_930;
  uint *local_92c;
  uint *local_928;
  uint *local_924;
  uint *local_920;
  uint *local_91c;
  uint *local_918;
  uint local_914 [115];
  uint *local_748;
  uint local_744 [115];
  uint *local_578;
  uint local_574 [115];
  uint *local_3a8;
  uint local_3a4 [115];
  uint *local_1d8;
  uint local_1d4 [115];
  uint local_8;
  
  local_8 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  uVar13 = *param_1;
  local_950 = param_1;
  local_958 = param_2;
  local_954 = (uint *)(((param_2[4] == (floating_point_value)0x0) - 1 & 0x1d) + 0x19);
  if ((int)uVar13 < 0) {
    uVar13 = 0;
  }
  uVar9 = param_1[1];
  uVar16 = uVar13;
  if (uVar9 <= uVar13) {
    uVar16 = uVar9;
  }
  local_934 = (uint *)(uVar13 - uVar16);
  puVar15 = param_1 + 2;
  local_95c = (uint *)(uVar16 + 8 + (int)param_1);
  local_960 = (uint *)(uVar9 + 8 + (int)param_1);
  puVar14 = (uint *)0x0;
  local_944 = (uint *)((int)local_960 - (int)local_95c);
  local_91c = (uint *)0x0;
  puVar8 = (uint *)0x0;
  local_1d8 = (uint *)0x0;
  local_924 = (uint *)0x0;
  if (puVar15 != local_95c) {
    do {
      if (puVar8 == (uint *)0x9) {
        local_940 = puVar15;
        if (puVar14 != (uint *)0x0) {
          uVar13 = 0;
          puVar8 = (uint *)0x0;
          do {
            lVar19 = (ulonglong)local_1d4[(int)puVar8] * 1000000000 + (ulonglong)uVar13;
            local_1d4[(int)puVar8] = (uint)lVar19;
            uVar13 = (uint)((ulonglong)lVar19 >> 0x20);
            puVar8 = (uint *)((int)puVar8 + 1);
          } while (puVar8 != puVar14);
          puVar14 = local_1d8;
          if (uVar13 != 0) {
            if (local_1d8 < (uint *)0x73) {
              local_1d4[(int)local_1d8] = uVar13;
              local_1d8 = (uint *)((int)local_1d8 + 1);
              puVar14 = local_1d8;
            }
            else {
              local_918 = (uint *)0x0;
              local_1d8 = (uint *)0x0;
              _memcpy_s(local_1d4,0x1cc,local_914,0);
              puVar14 = local_1d8;
            }
          }
        }
        if (local_924 != (uint *)0x0) {
          puVar12 = (uint *)0x0;
          puVar10 = (uint *)0x0;
          puVar8 = local_924;
          if (puVar14 != (uint *)0x0) {
            do {
              puVar14 = local_1d4 + (int)puVar12;
              uVar13 = *puVar14;
              *puVar14 = (uint)(*puVar14 + (int)puVar8);
              puVar8 = (uint *)(uint)CARRY4(uVar13,(uint)puVar8);
              puVar12 = (uint *)((int)puVar12 + 1);
            } while (puVar12 != local_1d8);
            puVar14 = local_1d8;
            puVar10 = local_1d8;
            if (puVar8 == (uint *)0x0) goto LAB_006ee9c8;
          }
          if (puVar10 < (uint *)0x73) {
            local_1d4[(int)puVar10] = (uint)puVar8;
            local_1d8 = (uint *)((int)local_1d8 + 1);
            puVar14 = local_1d8;
          }
          else {
            local_918 = (uint *)0x0;
            local_1d8 = (uint *)0x0;
            _memcpy_s(local_1d4,0x1cc,local_914,0);
            puVar14 = local_1d8;
          }
        }
LAB_006ee9c8:
        local_924 = (uint *)0x0;
        puVar8 = (uint *)0x0;
      }
      local_924 = (uint *)((int)local_924 * 10 + (uint)(byte)*puVar15);
      puVar8 = (uint *)((int)puVar8 + 1);
      puVar15 = (uint *)((int)puVar15 + 1);
    } while (puVar15 != local_95c);
    local_948 = puVar8;
    local_91c = puVar14;
    if (puVar8 != (uint *)0x0) {
      local_940 = puVar15;
      for (local_930 = (uint *)((uint)puVar8 / 10); local_91c = puVar14, local_930 != (uint *)0x0;
          local_930 = (uint *)((int)local_930 - (int)local_928)) {
        local_928 = local_930;
        if ((uint *)0x26 < local_930) {
          local_928 = (uint *)0x26;
        }
        uVar13 = (uint)(byte)(&DAT_0073249e)[(int)local_928 * 4];
        bVar1 = (&DAT_0073249f)[(int)local_928 * 4];
        local_918 = (uint *)(uVar13 + bVar1);
        _memset(local_914,0,uVar13 * 4);
        FUN_006e6bd0(local_914 + uVar13,
                     &DAT_00731b98 + (uint)*(ushort *)(&DAT_0073249c + (int)local_928 * 4) * 4,
                     (uint)bVar1 << 2);
        uVar13 = local_1d4[0];
        if (local_918 < (uint *)0x2) {
          if (local_914[0] == 0) {
            local_748 = (uint *)0x0;
            puVar15 = local_744;
LAB_006eeab7:
            local_1d8 = (uint *)0x0;
            _memcpy_s(local_1d4,0x1cc,puVar15,0);
          }
          else {
            if ((local_914[0] == 1) || (puVar14 == (uint *)0x0)) {
              bVar17 = true;
              goto LAB_006eedd5;
            }
            uVar13 = 0;
            puVar15 = (uint *)0x0;
            do {
              lVar19 = (ulonglong)local_914[0] * (ulonglong)local_1d4[(int)puVar15] +
                       (ulonglong)uVar13;
              local_1d4[(int)puVar15] = (uint)lVar19;
              uVar13 = (uint)((ulonglong)lVar19 >> 0x20);
              puVar15 = (uint *)((int)puVar15 + 1);
            } while (puVar15 != puVar14);
            if (uVar13 != 0) {
              if ((uint *)0x72 < local_1d8) {
LAB_006eeb36:
                local_918 = (uint *)0x0;
                local_1d8 = (uint *)0x0;
                _memcpy_s(local_1d4,0x1cc,local_914,0);
                local_91c = local_1d8;
                bVar17 = false;
                goto LAB_006eedd5;
              }
              local_1d4[(int)local_1d8] = uVar13;
LAB_006eeb21:
              local_1d8 = (uint *)((int)local_1d8 + 1);
            }
          }
LAB_006eead2:
          bVar17 = true;
          local_91c = local_1d8;
        }
        else if (puVar14 < (uint *)0x2) {
          local_1d8 = local_918;
          _memcpy_s(local_1d4,0x1cc,local_914,(int)local_918 << 2);
          if (uVar13 == 0) {
            local_918 = (uint *)0x0;
            puVar15 = local_914;
            goto LAB_006eeab7;
          }
          bVar17 = true;
          local_91c = local_1d8;
          if ((uVar13 != 1) && (local_1d8 != (uint *)0x0)) {
            uVar9 = 0;
            puVar15 = (uint *)0x0;
            do {
              lVar19 = (ulonglong)uVar13 * (ulonglong)local_1d4[(int)puVar15] + (ulonglong)uVar9;
              local_1d4[(int)puVar15] = (uint)lVar19;
              uVar9 = (uint)((ulonglong)lVar19 >> 0x20);
              puVar15 = (uint *)((int)puVar15 + 1);
            } while (puVar15 != local_1d8);
            if (uVar9 != 0) {
              if ((uint *)0x72 < local_1d8) goto LAB_006eeb36;
              local_1d4[(int)local_1d8] = uVar9;
              goto LAB_006eeb21;
            }
            goto LAB_006eead2;
          }
        }
        else {
          local_93c = local_914;
          if (local_918 < puVar14) {
            local_940 = local_1d4;
            local_938 = local_918;
          }
          else {
            local_93c = local_1d4;
            local_940 = local_914;
            local_938 = puVar14;
            puVar14 = local_918;
          }
          local_1d8 = (uint *)0x0;
          puVar15 = (uint *)0x0;
          local_748 = (uint *)0x0;
          if (local_938 != (uint *)0x0) {
            do {
              if (local_93c[(int)puVar15] == 0) {
                if (puVar15 == local_1d8) {
                  local_744[(int)puVar15] = 0;
                  local_1d8 = (uint *)((int)puVar15 + 1);
                  local_748 = local_1d8;
                }
              }
              else {
                local_920 = (uint *)0x0;
                local_92c = (uint *)0x0;
                puVar8 = puVar15;
                if (puVar14 != (uint *)0x0) {
                  do {
                    if (puVar8 == (uint *)0x73) break;
                    if (puVar8 == local_1d8) {
                      local_744[(int)puVar8] = 0;
                      local_748 = (uint *)((byte *)((int)puVar15 + 1) + (int)local_92c);
                    }
                    uVar13 = local_940[(int)local_92c];
                    uVar9 = local_93c[(int)puVar15];
                    uVar6 = (uint)((ulonglong)uVar13 * (ulonglong)uVar9);
                    uVar16 = local_744[(int)puVar8];
                    uVar4 = uVar6 + local_744[(int)puVar8];
                    local_744[(int)puVar8] = (uint)(uVar4 + (int)local_920);
                    local_920 = (uint *)((int)((ulonglong)uVar13 * (ulonglong)uVar9 >> 0x20) +
                                         (uint)CARRY4(uVar6,uVar16) +
                                        (uint)CARRY4(uVar4,(uint)local_920));
                    local_92c = (uint *)((int)local_92c + 1);
                    puVar8 = (uint *)((int)puVar8 + 1);
                    local_1d8 = local_748;
                  } while (local_92c != puVar14);
                  if (local_920 != (uint *)0x0) {
                    puVar10 = puVar8;
                    local_91c = local_744 + (int)puVar8;
                    do {
                      if (puVar10 == (uint *)0x73) goto LAB_006eee4f;
                      puVar8 = (uint *)((int)puVar10 + 1);
                      if (puVar10 == local_1d8) {
                        *local_91c = 0;
                        local_748 = puVar8;
                      }
                      uVar13 = *local_91c;
                      puVar12 = local_91c + 1;
                      *local_91c = (uint)(uVar13 + (int)local_920);
                      local_920 = (uint *)(uint)CARRY4(uVar13,(uint)local_920);
                      local_1d8 = local_748;
                      puVar10 = puVar8;
                      local_91c = puVar12;
                    } while (local_920 != (uint *)0x0);
                  }
                }
                if (puVar8 == (uint *)0x73) {
LAB_006eee4f:
                  local_1d8 = (uint *)0x0;
                  _memcpy_s(local_1d4,0x1cc,local_b2c,0);
                  bVar17 = false;
                  goto LAB_006eedc6;
                }
              }
              puVar15 = (uint *)((int)puVar15 + 1);
            } while (puVar15 != local_938);
          }
          _memcpy_s(local_1d4,0x1cc,local_744,(int)local_1d8 << 2);
          bVar17 = true;
LAB_006eedc6:
          local_91c = local_1d8;
        }
LAB_006eedd5:
        if (!bVar17) goto LAB_006eee13;
        puVar14 = local_91c;
      }
      if ((uint)local_948 % 10 != 0) {
        uVar13 = *(uint *)(&DAT_00732534 + ((uint)local_948 % 10) * 2);
        if (uVar13 == 0) {
LAB_006eee13:
          local_1d8 = (uint *)0x0;
          _memcpy_s(local_1d4,0x1cc,local_b2c,0);
LAB_006eee44:
          local_91c = local_1d8;
        }
        else if ((uVar13 != 1) && (puVar14 != (uint *)0x0)) {
          uVar9 = 0;
          puVar15 = (uint *)0x0;
          do {
            lVar19 = (ulonglong)uVar13 * (ulonglong)local_1d4[(int)puVar15] + (ulonglong)uVar9;
            local_1d4[(int)puVar15] = (uint)lVar19;
            uVar9 = (uint)((ulonglong)lVar19 >> 0x20);
            puVar15 = (uint *)((int)puVar15 + 1);
          } while (puVar15 != puVar14);
          if (uVar9 == 0) goto LAB_006eee44;
          if ((uint *)0x72 < local_1d8) goto LAB_006eee13;
          local_1d4[(int)local_1d8] = uVar9;
          local_1d8 = (uint *)((int)local_1d8 + 1);
          local_91c = local_1d8;
        }
      }
      if (local_924 != (uint *)0x0) {
        puVar14 = (uint *)0x0;
        puVar15 = local_924;
        if (local_91c != (uint *)0x0) {
          do {
            puVar8 = local_1d4 + (int)puVar14;
            uVar13 = *puVar8;
            *puVar8 = (uint)(*puVar8 + (int)puVar15);
            puVar15 = (uint *)(uint)CARRY4(uVar13,(uint)puVar15);
            puVar14 = (uint *)((int)puVar14 + 1);
            local_91c = local_1d8;
          } while (puVar14 != local_1d8);
          if (puVar15 == (uint *)0x0) goto LAB_006eef7b;
        }
        if (local_91c < (uint *)0x73) {
          local_1d4[(int)local_91c] = (uint)puVar15;
          local_1d8 = (uint *)((int)local_1d8 + 1);
          local_91c = local_1d8;
        }
        else {
          local_1d8 = (uint *)0x0;
          _memcpy_s(local_1d4,0x1cc,local_b2c,0);
          local_91c = local_1d8;
        }
      }
    }
  }
LAB_006eef7b:
  if (local_934 != (uint *)0x0) {
    puVar15 = local_91c;
    for (local_940 = (uint *)((uint)local_934 / 10); local_91c = puVar15, local_940 != (uint *)0x0;
        local_940 = (uint *)((int)local_940 - (int)local_93c)) {
      local_93c = local_940;
      if ((uint *)0x26 < local_940) {
        local_93c = (uint *)0x26;
      }
      uVar13 = (uint)(byte)(&DAT_0073249e)[(int)local_93c * 4];
      bVar1 = (&DAT_0073249f)[(int)local_93c * 4];
      local_918 = (uint *)(uVar13 + bVar1);
      _memset(local_914,0,uVar13 * 4);
      FUN_006e6bd0(local_914 + uVar13,
                   &DAT_00731b98 + (uint)*(ushort *)(&DAT_0073249c + (int)local_93c * 4) * 4,
                   (uint)bVar1 << 2);
      uVar13 = local_1d4[0];
      if (local_918 < (uint *)0x2) {
        if (local_914[0] == 0) {
LAB_006ef03c:
          local_1d8 = (uint *)0x0;
          _memcpy_s(local_1d4,0x1cc,local_b2c,0);
        }
        else {
          if ((local_914[0] == 1) || (puVar15 == (uint *)0x0)) {
            bVar17 = true;
            goto LAB_006ef343;
          }
          uVar13 = 0;
          puVar14 = (uint *)0x0;
          do {
            lVar19 = (ulonglong)local_914[0] * (ulonglong)local_1d4[(int)puVar14] +
                     (ulonglong)uVar13;
            local_1d4[(int)puVar14] = (uint)lVar19;
            uVar13 = (uint)((ulonglong)lVar19 >> 0x20);
            puVar14 = (uint *)((int)puVar14 + 1);
          } while (puVar14 != puVar15);
          if (uVar13 != 0) {
            if ((uint *)0x72 < local_1d8) {
LAB_006ef0bb:
              local_1d8 = (uint *)0x0;
              _memcpy_s(local_1d4,0x1cc,local_b2c,0);
              local_91c = local_1d8;
              bVar17 = false;
              goto LAB_006ef343;
            }
            local_1d4[(int)local_1d8] = uVar13;
LAB_006ef0a6:
            local_1d8 = (uint *)((int)local_1d8 + 1);
          }
        }
LAB_006ef057:
        bVar17 = true;
        local_91c = local_1d8;
      }
      else if (puVar15 < (uint *)0x2) {
        local_1d8 = local_918;
        _memcpy_s(local_1d4,0x1cc,local_914,(int)local_918 << 2);
        if (uVar13 == 0) goto LAB_006ef03c;
        bVar17 = true;
        local_91c = local_1d8;
        if ((uVar13 != 1) && (local_1d8 != (uint *)0x0)) {
          uVar9 = 0;
          puVar15 = (uint *)0x0;
          do {
            lVar19 = (ulonglong)uVar13 * (ulonglong)local_1d4[(int)puVar15] + (ulonglong)uVar9;
            local_1d4[(int)puVar15] = (uint)lVar19;
            uVar9 = (uint)((ulonglong)lVar19 >> 0x20);
            puVar15 = (uint *)((int)puVar15 + 1);
          } while (puVar15 != local_1d8);
          if (uVar9 != 0) {
            if ((uint *)0x72 < local_1d8) goto LAB_006ef0bb;
            local_1d4[(int)local_1d8] = uVar9;
            goto LAB_006ef0a6;
          }
          goto LAB_006ef057;
        }
      }
      else {
        local_928 = local_914;
        if (local_918 < puVar15) {
          local_930 = local_1d4;
          local_938 = local_918;
        }
        else {
          local_928 = local_1d4;
          local_930 = local_914;
          local_938 = puVar15;
          puVar15 = local_918;
        }
        local_1d8 = (uint *)0x0;
        puVar14 = (uint *)0x0;
        local_748 = (uint *)0x0;
        if (local_938 != (uint *)0x0) {
          do {
            if (local_928[(int)puVar14] == 0) {
              if (puVar14 == local_1d8) {
                local_744[(int)puVar14] = 0;
                local_1d8 = (uint *)((int)puVar14 + 1);
                local_748 = local_1d8;
              }
            }
            else {
              local_924 = (uint *)0x0;
              local_920 = (uint *)0x0;
              puVar8 = puVar14;
              if (puVar15 != (uint *)0x0) {
                do {
                  if (puVar8 == (uint *)0x73) break;
                  if (puVar8 == local_1d8) {
                    local_744[(int)puVar8] = 0;
                    local_748 = (uint *)((byte *)((int)local_924 + 1) + (int)puVar14);
                  }
                  uVar9 = local_930[(int)local_924];
                  uVar16 = local_928[(int)puVar14];
                  uVar6 = (uint)((ulonglong)uVar9 * (ulonglong)uVar16);
                  pbVar11 = (byte *)(uVar6 + (int)local_920);
                  puVar10 = local_744 + (int)puVar8;
                  uVar13 = *puVar10;
                  *puVar10 = (uint)(pbVar11 + *puVar10);
                  local_920 = (uint *)((int)((ulonglong)uVar9 * (ulonglong)uVar16 >> 0x20) +
                                       (uint)CARRY4(uVar6,(uint)local_920) +
                                      (uint)CARRY4(uVar13,(uint)pbVar11));
                  local_924 = (uint *)((int)local_924 + 1);
                  puVar8 = (uint *)((int)puVar8 + 1);
                  local_1d8 = local_748;
                } while (local_924 != puVar15);
                if (local_920 != (uint *)0x0) {
                  puVar10 = local_744 + (int)puVar8;
                  puVar12 = puVar8;
                  do {
                    if (puVar12 == (uint *)0x73) goto LAB_006ef3bc;
                    puVar8 = (uint *)((int)puVar12 + 1);
                    if (puVar12 == local_1d8) {
                      *puVar10 = 0;
                      local_748 = puVar8;
                    }
                    uVar13 = *puVar10;
                    *puVar10 = (uint)(*puVar10 + (int)local_920);
                    local_920 = (uint *)(uint)CARRY4(uVar13,(uint)local_920);
                    local_1d8 = local_748;
                    puVar10 = puVar10 + 1;
                    puVar12 = puVar8;
                  } while (local_920 != (uint *)0x0);
                }
              }
              if (puVar8 == (uint *)0x73) {
LAB_006ef3bc:
                local_1d8 = (uint *)0x0;
                _memcpy_s(local_1d4,0x1cc,local_b2c,0);
                bVar17 = false;
                goto LAB_006ef337;
              }
            }
            puVar14 = (uint *)((int)puVar14 + 1);
          } while (puVar14 != local_938);
        }
        _memcpy_s(local_1d4,0x1cc,local_744,(int)local_1d8 << 2);
        bVar17 = true;
LAB_006ef337:
        local_91c = local_1d8;
      }
LAB_006ef343:
      if (!bVar17) goto LAB_006ef46e;
      puVar15 = local_91c;
    }
    if ((uint)local_934 % 10 != 0) {
      uVar13 = *(uint *)(&DAT_00732534 + ((uint)local_934 % 10) * 2);
      if (uVar13 == 0) {
        local_1d8 = (uint *)0x0;
        _memcpy_s(local_1d4,0x1cc,local_b2c,0);
LAB_006ef3ab:
        local_91c = local_1d8;
      }
      else if ((uVar13 != 1) && (puVar15 != (uint *)0x0)) {
        uVar9 = 0;
        puVar14 = (uint *)0x0;
        do {
          lVar19 = (ulonglong)uVar13 * (ulonglong)local_1d4[(int)puVar14] + (ulonglong)uVar9;
          local_1d4[(int)puVar14] = (uint)lVar19;
          uVar9 = (uint)((ulonglong)lVar19 >> 0x20);
          puVar14 = (uint *)((int)puVar14 + 1);
        } while (puVar14 != puVar15);
        if (uVar9 == 0) goto LAB_006ef3ab;
        if ((uint *)0x72 < local_1d8) {
LAB_006ef46e:
          local_1d8 = (uint *)0x0;
          _memcpy_s(local_1d4,0x1cc,local_b2c,0);
          __crt_strtox::assemble_floating_point_infinity(SUB41(local_950[0xc2],0),local_958);
          return 3;
        }
        local_1d4[(int)local_1d8] = uVar9;
        local_1d8 = (uint *)((int)local_1d8 + 1);
        local_91c = local_1d8;
      }
    }
  }
  local_940 = (uint *)0x0;
  if (local_91c != (uint *)0x0) {
    uVar13 = local_1d4[(int)((int)local_91c + -1)];
    local_94c = 0;
    iVar5 = 0x1f;
    if (uVar13 != 0) {
      for (; uVar13 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uVar13 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = iVar5 + 1;
    }
    local_940 = (uint *)((int)((int)local_91c + -1) * 0x20 + iVar5);
  }
  if ((local_954 <= local_940) || (local_944 == (uint *)0x0)) {
    bVar17 = local_960 != local_95c;
    uVar2 = (undefined1)local_950[0xc2];
    goto LAB_006f05a2;
  }
  puVar15 = (uint *)0x0;
  local_3a8 = (uint *)0x0;
  puVar8 = (uint *)0x0;
  local_92c = (uint *)0x0;
  local_924 = local_95c;
  puVar14 = local_95c;
  if (local_95c != local_960) {
    do {
      puVar10 = local_92c;
      if (puVar8 == (uint *)0x9) {
        local_924 = puVar14;
        if (puVar15 != (uint *)0x0) {
          uVar13 = 0;
          puVar14 = (uint *)0x0;
          do {
            lVar19 = (ulonglong)local_3a4[(int)puVar14] * 1000000000 + (ulonglong)uVar13;
            local_3a4[(int)puVar14] = (uint)lVar19;
            uVar13 = (uint)((ulonglong)lVar19 >> 0x20);
            puVar14 = (uint *)((int)puVar14 + 1);
          } while (puVar14 != puVar15);
          puVar15 = local_3a8;
          if (uVar13 != 0) {
            if (local_3a8 < (uint *)0x73) {
              local_3a4[(int)local_3a8] = uVar13;
              local_3a8 = (uint *)((int)local_3a8 + 1);
              puVar15 = local_3a8;
            }
            else {
              local_3a8 = (uint *)0x0;
              _memcpy_s(local_3a4,0x1cc,local_b2c,0);
              puVar15 = local_3a8;
            }
          }
        }
        puVar14 = local_924;
        if (puVar10 != (uint *)0x0) {
          puVar12 = (uint *)0x0;
          puVar8 = (uint *)0x0;
          if (puVar15 != (uint *)0x0) {
            do {
              puVar15 = local_3a4 + (int)puVar12;
              uVar13 = *puVar15;
              *puVar15 = (uint)(*puVar15 + (int)puVar10);
              puVar10 = (uint *)(uint)CARRY4(uVar13,(uint)puVar10);
              puVar12 = (uint *)((int)puVar12 + 1);
            } while (puVar12 != local_3a8);
            puVar15 = local_3a8;
            puVar8 = local_3a8;
            if (puVar10 == (uint *)0x0) goto LAB_006ef62b;
          }
          if (puVar8 < (uint *)0x73) {
            local_3a4[(int)puVar8] = (uint)puVar10;
            local_3a8 = (uint *)((int)local_3a8 + 1);
            puVar15 = local_3a8;
          }
          else {
            local_3a8 = (uint *)0x0;
            _memcpy_s(local_3a4,0x1cc,local_b2c,0);
            puVar15 = local_3a8;
          }
        }
LAB_006ef62b:
        local_92c = (uint *)0x0;
        puVar8 = (uint *)0x0;
      }
      local_92c = (uint *)((int)local_92c * 10 + (uint)(byte)*puVar14);
      puVar8 = (uint *)((int)puVar8 + 1);
      puVar14 = (uint *)((int)puVar14 + 1);
    } while (puVar14 != local_960);
    local_948 = puVar8;
    local_924 = puVar14;
    if (puVar8 != (uint *)0x0) {
      for (local_924 = (uint *)((uint)puVar8 / 10); local_924 != (uint *)0x0;
          local_924 = (uint *)((int)local_924 - (int)local_93c)) {
        local_93c = local_924;
        if ((uint *)0x26 < local_924) {
          local_93c = (uint *)0x26;
        }
        uVar13 = (uint)(byte)(&DAT_0073249e)[(int)local_93c * 4];
        bVar1 = (&DAT_0073249f)[(int)local_93c * 4];
        local_918 = (uint *)(uVar13 + bVar1);
        _memset(local_914,0,uVar13 * 4);
        FUN_006e6bd0(local_914 + uVar13,
                     &DAT_00731b98 + (uint)*(ushort *)(&DAT_0073249c + (int)local_93c * 4) * 4,
                     (uint)bVar1 << 2);
        uVar13 = local_3a4[0];
        if (local_918 < (uint *)0x2) {
          if (local_914[0] == 0) {
            local_3a8 = (uint *)0x0;
            _MaxCount = 0;
            puVar15 = local_b2c;
            goto LAB_006ef9ac;
          }
          if ((local_914[0] == 1) || (puVar15 == (uint *)0x0)) {
            bVar17 = true;
          }
          else {
            uVar9 = 0;
            puVar14 = (uint *)0x0;
            do {
              lVar19 = (ulonglong)local_914[0] * (ulonglong)local_3a4[(int)puVar14] +
                       (ulonglong)uVar9;
              local_3a4[(int)puVar14] = (uint)lVar19;
              uVar9 = (uint)((ulonglong)lVar19 >> 0x20);
              puVar14 = (uint *)((int)puVar14 + 1);
            } while (puVar14 != puVar15);
LAB_006ef742:
            if (uVar9 != 0) {
              if ((uint *)0x72 < local_3a8) {
                local_3a8 = (uint *)0x0;
                _memcpy_s(local_3a4,0x1cc,local_b2c,0);
                bVar17 = false;
                puVar15 = local_3a8;
                goto LAB_006ef9c3;
              }
              local_3a4[(int)local_3a8] = uVar9;
              local_3a8 = (uint *)((int)local_3a8 + 1);
            }
            bVar17 = true;
            puVar15 = local_3a8;
          }
        }
        else {
          if (puVar15 < (uint *)0x2) {
            local_3a8 = local_918;
            _memcpy_s(local_3a4,0x1cc,local_914,(int)local_918 << 2);
            if (uVar13 != 0) {
              bVar17 = true;
              puVar15 = local_3a8;
              if ((uVar13 != 1) && (local_3a8 != (uint *)0x0)) {
                uVar9 = 0;
                puVar15 = (uint *)0x0;
                do {
                  lVar19 = (ulonglong)uVar13 * (ulonglong)local_3a4[(int)puVar15] + (ulonglong)uVar9
                  ;
                  local_3a4[(int)puVar15] = (uint)lVar19;
                  uVar9 = (uint)((ulonglong)lVar19 >> 0x20);
                  puVar15 = (uint *)((int)puVar15 + 1);
                } while (puVar15 != local_3a8);
                goto LAB_006ef742;
              }
              goto LAB_006ef9c3;
            }
            _MaxCount = 0;
            local_3a8 = (uint *)0x0;
            puVar15 = local_b2c;
          }
          else {
            local_928 = local_914;
            if (local_918 < puVar15) {
              local_934 = local_3a4;
              local_938 = local_918;
            }
            else {
              local_928 = local_3a4;
              local_934 = local_914;
              local_938 = puVar15;
              puVar15 = local_918;
            }
            local_3a8 = (uint *)0x0;
            puVar14 = (uint *)0x0;
            local_748 = (uint *)0x0;
            if (local_938 != (uint *)0x0) {
              do {
                if (local_928[(int)puVar14] == 0) {
                  if (puVar14 == local_3a8) {
                    local_744[(int)puVar14] = 0;
                    local_3a8 = (uint *)((int)puVar14 + 1);
                    local_748 = local_3a8;
                  }
                }
                else {
                  local_920 = (uint *)0x0;
                  local_930 = (uint *)0x0;
                  puVar8 = puVar14;
                  if (puVar15 != (uint *)0x0) {
                    do {
                      if (puVar8 == (uint *)0x73) break;
                      if (puVar8 == local_3a8) {
                        local_744[(int)puVar8] = 0;
                        local_748 = (uint *)((byte *)((int)puVar14 + 1) + (int)local_930);
                      }
                      uVar9 = local_934[(int)local_930];
                      uVar16 = local_928[(int)puVar14];
                      uVar6 = (uint)((ulonglong)uVar9 * (ulonglong)uVar16);
                      pbVar11 = (byte *)(uVar6 + (int)local_920);
                      puVar10 = local_744 + (int)puVar8;
                      uVar13 = *puVar10;
                      *puVar10 = (uint)(pbVar11 + *puVar10);
                      local_920 = (uint *)((int)((ulonglong)uVar9 * (ulonglong)uVar16 >> 0x20) +
                                           (uint)CARRY4(uVar6,(uint)local_920) +
                                          (uint)CARRY4(uVar13,(uint)pbVar11));
                      local_930 = (uint *)((int)local_930 + 1);
                      puVar8 = (uint *)((int)puVar8 + 1);
                      local_3a8 = local_748;
                    } while (local_930 != puVar15);
                    if (local_920 != (uint *)0x0) {
                      puVar10 = local_744 + (int)puVar8;
                      puVar12 = puVar8;
                      do {
                        if (puVar12 == (uint *)0x73) goto LAB_006efa63;
                        puVar8 = (uint *)((int)puVar12 + 1);
                        if (puVar12 == local_3a8) {
                          *puVar10 = 0;
                          local_748 = puVar8;
                        }
                        uVar13 = *puVar10;
                        *puVar10 = (uint)(*puVar10 + (int)local_920);
                        local_920 = (uint *)(uint)CARRY4(uVar13,(uint)local_920);
                        local_3a8 = local_748;
                        puVar10 = puVar10 + 1;
                        puVar12 = puVar8;
                      } while (local_920 != (uint *)0x0);
                    }
                  }
                  if (puVar8 == (uint *)0x73) {
LAB_006efa63:
                    local_3a8 = (uint *)0x0;
                    _memcpy_s(local_3a4,0x1cc,local_b2c,0);
                    bVar17 = false;
                    puVar15 = local_3a8;
                    goto LAB_006ef9c3;
                  }
                }
                puVar14 = (uint *)((int)puVar14 + 1);
              } while (puVar14 != local_938);
            }
            _MaxCount = (int)local_3a8 << 2;
            puVar15 = local_744;
          }
LAB_006ef9ac:
          _memcpy_s(local_3a4,0x1cc,puVar15,_MaxCount);
          bVar17 = true;
          puVar15 = local_3a8;
        }
LAB_006ef9c3:
        if (!bVar17) goto LAB_006efab5;
      }
      if ((uint)local_948 % 10 != 0) {
        uVar13 = *(uint *)(&DAT_00732534 + ((uint)local_948 % 10) * 2);
        if (uVar13 == 0) {
LAB_006efab5:
          local_3a8 = (uint *)0x0;
          _memcpy_s(local_3a4,0x1cc,local_b2c,0);
          puVar15 = local_3a8;
        }
        else if ((uVar13 != 1) && (puVar15 != (uint *)0x0)) {
          uVar9 = 0;
          puVar14 = (uint *)0x0;
          do {
            lVar19 = (ulonglong)uVar13 * (ulonglong)local_3a4[(int)puVar14] + (ulonglong)uVar9;
            local_3a4[(int)puVar14] = (uint)lVar19;
            uVar9 = (uint)((ulonglong)lVar19 >> 0x20);
            puVar14 = (uint *)((int)puVar14 + 1);
          } while (puVar14 != puVar15);
          puVar15 = local_3a8;
          if (uVar9 != 0) {
            if ((uint *)0x72 < local_3a8) goto LAB_006efab5;
            local_3a4[(int)local_3a8] = uVar9;
            local_3a8 = (uint *)((int)local_3a8 + 1);
            puVar15 = local_3a8;
          }
        }
      }
      if (local_92c != (uint *)0x0) {
        puVar10 = (uint *)0x0;
        puVar14 = local_92c;
        puVar8 = (uint *)0x0;
        if (puVar15 != (uint *)0x0) {
          do {
            puVar15 = local_3a4 + (int)puVar10;
            uVar13 = *puVar15;
            *puVar15 = (uint)(*puVar15 + (int)puVar14);
            puVar14 = (uint *)(uint)CARRY4(uVar13,(uint)puVar14);
            puVar10 = (uint *)((int)puVar10 + 1);
          } while (puVar10 != local_3a8);
          puVar8 = local_3a8;
          puVar15 = local_3a8;
          if (puVar14 == (uint *)0x0) goto LAB_006efb56;
        }
        if (puVar8 < (uint *)0x73) {
          local_3a4[(int)puVar8] = (uint)puVar14;
          local_3a8 = (uint *)((int)local_3a8 + 1);
          puVar15 = local_3a8;
        }
        else {
          local_3a8 = (uint *)0x0;
          _memcpy_s(local_3a4,0x1cc,local_b2c,0);
          puVar15 = local_3a8;
        }
      }
    }
  }
LAB_006efb56:
  if ((int)*local_950 < 0) {
    local_944 = (uint *)((int)local_944 - *local_950);
  }
  local_574[1] = 0;
  local_574[0] = 1;
  local_920 = (uint *)0x1;
  local_578 = (uint *)0x1;
  for (local_928 = (uint *)((uint)local_944 / 10); local_928 != (uint *)0x0;
      local_928 = (uint *)((int)local_928 - (int)local_938)) {
    local_938 = local_928;
    if ((uint *)0x26 < local_928) {
      local_938 = (uint *)0x26;
    }
    puVar15 = local_938;
    uVar13 = (uint)(byte)(&DAT_0073249e)[(int)local_938 * 4];
    bVar1 = (&DAT_0073249f)[(int)local_938 * 4];
    local_918 = (uint *)(uVar13 + bVar1);
    _memset(local_914,0,uVar13 * 4);
    FUN_006e6bd0(local_914 + uVar13,
                 &DAT_00731b98 + (uint)*(ushort *)(&DAT_0073249c + (int)puVar15 * 4) * 4,
                 (uint)bVar1 << 2);
    uVar13 = local_574[0];
    if (local_918 < (uint *)0x2) {
      if (local_914[0] == 0) {
LAB_006efc3c:
        local_578 = (uint *)0x0;
        _memcpy_s(local_574,0x1cc,local_b2c,0);
      }
      else {
        if ((local_914[0] == 1) || (local_920 == (uint *)0x0)) {
          bVar17 = true;
          goto LAB_006eff3a;
        }
        uVar9 = 0;
        puVar15 = (uint *)0x0;
        do {
          lVar19 = (ulonglong)local_914[0] * (ulonglong)local_574[(int)puVar15] + (ulonglong)uVar9;
          local_574[(int)puVar15] = (uint)lVar19;
          uVar9 = (uint)((ulonglong)lVar19 >> 0x20);
          puVar15 = (uint *)((int)puVar15 + 1);
        } while (puVar15 != local_920);
LAB_006efd87:
        if (uVar9 != 0) {
          if ((uint *)0x72 < local_578) {
            local_578 = (uint *)0x0;
            _memcpy_s(local_574,0x1cc,local_b2c,0);
            bVar3 = false;
            goto LAB_006efce3;
          }
          local_574[(int)local_578] = uVar9;
          local_578 = (uint *)((int)local_578 + 1);
        }
      }
      bVar17 = true;
      local_920 = local_578;
    }
    else if (local_920 < (uint *)0x2) {
      local_578 = local_918;
      _memcpy_s(local_574,0x1cc,local_914,(int)local_918 << 2);
      if (uVar13 == 0) goto LAB_006efc3c;
      bVar17 = true;
      bVar3 = true;
      if (uVar13 == 1) {
LAB_006efce3:
        bVar17 = bVar3;
        local_920 = local_578;
      }
      else {
        local_920 = local_578;
        if (local_578 != (uint *)0x0) {
          uVar9 = 0;
          puVar15 = (uint *)0x0;
          do {
            lVar19 = (ulonglong)uVar13 * (ulonglong)local_574[(int)puVar15] + (ulonglong)uVar9;
            local_574[(int)puVar15] = (uint)lVar19;
            uVar9 = (uint)((ulonglong)lVar19 >> 0x20);
            puVar15 = (uint *)((int)puVar15 + 1);
          } while (puVar15 != local_578);
          goto LAB_006efd87;
        }
      }
    }
    else {
      local_92c = local_914;
      if (local_918 < local_920) {
        local_934 = local_574;
        local_930 = local_918;
        puVar15 = local_920;
      }
      else {
        local_92c = local_574;
        local_934 = local_914;
        local_930 = local_920;
        puVar15 = local_918;
      }
      local_578 = (uint *)0x0;
      puVar14 = (uint *)0x0;
      local_748 = (uint *)0x0;
      if (local_930 != (uint *)0x0) {
        do {
          if (local_92c[(int)puVar14] == 0) {
            if (puVar14 == local_578) {
              local_744[(int)puVar14] = 0;
              local_578 = (uint *)((int)puVar14 + 1);
              local_748 = local_578;
            }
          }
          else {
            local_924 = (uint *)0x0;
            local_920 = (uint *)0x0;
            puVar8 = puVar14;
            if (puVar15 != (uint *)0x0) {
              do {
                if (puVar8 == (uint *)0x73) break;
                if (puVar8 == local_578) {
                  local_744[(int)puVar8] = 0;
                  local_748 = (uint *)((byte *)((int)local_924 + 1) + (int)puVar14);
                }
                uVar9 = local_934[(int)local_924];
                uVar16 = local_92c[(int)puVar14];
                uVar6 = (uint)((ulonglong)uVar9 * (ulonglong)uVar16);
                pbVar11 = (byte *)(uVar6 + (int)local_920);
                puVar10 = local_744 + (int)puVar8;
                uVar13 = *puVar10;
                *puVar10 = (uint)(pbVar11 + *puVar10);
                local_920 = (uint *)((int)((ulonglong)uVar9 * (ulonglong)uVar16 >> 0x20) +
                                     (uint)CARRY4(uVar6,(uint)local_920) +
                                    (uint)CARRY4(uVar13,(uint)pbVar11));
                local_924 = (uint *)((int)local_924 + 1);
                puVar8 = (uint *)((int)puVar8 + 1);
                local_578 = local_748;
              } while (local_924 != puVar15);
              if (local_920 != (uint *)0x0) {
                puVar10 = local_744 + (int)puVar8;
                puVar12 = puVar8;
                do {
                  if (puVar12 == (uint *)0x73) goto LAB_006effc9;
                  puVar8 = (uint *)((int)puVar12 + 1);
                  if (puVar12 == local_578) {
                    *puVar10 = 0;
                    local_748 = puVar8;
                  }
                  uVar13 = *puVar10;
                  *puVar10 = (uint)(*puVar10 + (int)local_920);
                  local_920 = (uint *)(uint)CARRY4(uVar13,(uint)local_920);
                  local_578 = local_748;
                  puVar10 = puVar10 + 1;
                  puVar12 = puVar8;
                } while (local_920 != (uint *)0x0);
              }
            }
            if (puVar8 == (uint *)0x73) {
LAB_006effc9:
              local_578 = (uint *)0x0;
              _memcpy_s(local_574,0x1cc,local_b2c,0);
              bVar17 = false;
              goto LAB_006eff2e;
            }
          }
          puVar14 = (uint *)((int)puVar14 + 1);
        } while (puVar14 != local_930);
      }
      _memcpy_s(local_574,0x1cc,local_744,(int)local_578 << 2);
      bVar17 = true;
LAB_006eff2e:
      local_920 = local_578;
    }
LAB_006eff3a:
    if (!bVar17) goto LAB_006f0080;
    puVar15 = local_3a8;
  }
  if ((uint)local_944 % 10 != 0) {
    local_948 = *(uint **)(&DAT_00732534 + ((uint)local_944 % 10) * 2);
    if (local_948 == (uint *)0x0) {
      local_578 = local_948;
      _memcpy_s(local_574,0x1cc,local_b2c,0);
      puVar15 = local_3a8;
LAB_006effb8:
      local_920 = local_578;
    }
    else if ((local_948 != (uint *)0x1) && (local_920 != (uint *)0x0)) {
      uVar13 = 0;
      puVar14 = (uint *)0x0;
      do {
        lVar19 = ZEXT48(local_948) * (ulonglong)local_574[(int)puVar14] + (ulonglong)uVar13;
        local_574[(int)puVar14] = (uint)lVar19;
        uVar13 = (uint)((ulonglong)lVar19 >> 0x20);
        puVar14 = (uint *)((int)puVar14 + 1);
      } while (puVar14 != local_920);
      if (uVar13 == 0) goto LAB_006effb8;
      if ((uint *)0x72 < local_578) {
LAB_006f0080:
        local_578 = (uint *)0x0;
        _memcpy_s(local_574,0x1cc,local_b2c,0);
        __crt_strtox::assemble_floating_point_zero(SUB41(local_950[0xc2],0),local_958);
        return 2;
      }
      local_574[(int)local_578] = uVar13;
      local_920 = (uint *)((int)local_578 + 1);
      local_578 = local_920;
    }
  }
  if (puVar15 == (uint *)0x0) {
    uVar13 = 0;
  }
  else {
    uVar13 = local_3a4[(int)((int)puVar15 + -1)];
    local_94c = 0;
    iVar5 = 0x1f;
    if (uVar13 != 0) {
      for (; uVar13 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uVar13 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = iVar5 + 1;
    }
    uVar13 = (int)((int)puVar15 + -1) * 0x20 + iVar5;
  }
  if (local_920 == (uint *)0x0) {
    uVar9 = 0;
  }
  else {
    uVar9 = local_574[(int)((int)local_920 + -1)];
    local_94c = 0;
    iVar5 = 0x1f;
    if (uVar9 != 0) {
      for (; uVar9 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uVar9 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = iVar5 + 1;
    }
    uVar9 = (int)((int)local_920 + -1) * 0x20 + iVar5;
  }
  local_924 = (uint *)(-(uint)(uVar13 < uVar9) & uVar9 - uVar13);
  puVar14 = local_920;
  if (local_924 != (uint *)0x0) {
    puVar14 = (uint *)((uint)local_924 & 0x1f);
    uVar9 = (uint)local_924 >> 5;
    local_92c = (uint *)(0x20 - (int)puVar14);
    local_94c = uVar9;
    local_948 = puVar14;
    iVar5 = __allshl();
    uVar13 = local_3a4[(int)((int)puVar15 + -1)];
    local_928 = (uint *)(iVar5 + -1);
    iVar5 = 0x1f;
    if (uVar13 != 0) {
      for (; uVar13 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    local_938 = (uint *)~(uint)local_928;
    local_934 = (uint *)0x0;
    if (uVar13 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = iVar5 + 1;
    }
    if (((byte *)(uVar9 + (int)puVar15) < (byte *)0x74) &&
       (local_944 = (uint *)(((uint *)(0x20 - iVar5) < puVar14) + uVar9 + (int)puVar15),
       local_944 < (uint *)0x74)) {
      local_93c = (uint *)(uVar9 - 1);
      local_930 = (uint *)((int)local_944 + -1);
      if (local_930 != local_93c) {
        puVar8 = (uint *)((int)local_930 - uVar9);
        puVar14 = local_3a4 + (int)((int)puVar8 + -1);
        do {
          if (puVar8 < puVar15) {
            local_934 = (uint *)puVar14[1];
          }
          else {
            local_934 = (uint *)0x0;
          }
          if ((uint *)((int)puVar8 + -1) < puVar15) {
            uVar13 = *puVar14;
          }
          else {
            uVar13 = 0;
          }
          puVar14 = puVar14 + -1;
          local_3a4[(int)local_930] =
               (uVar13 & (uint)local_938) >> ((byte)local_92c & 0x1f) |
               ((uint)local_934 & (uint)local_928) << ((byte)local_948 & 0x1f);
          local_930 = (uint *)((int)local_930 + -1);
          puVar8 = (uint *)((int)puVar8 + -1);
          puVar15 = local_3a8;
          uVar9 = local_94c;
        } while (local_930 != local_93c);
      }
      if (uVar9 != 0) {
        puVar15 = local_3a4;
        for (; uVar9 != 0; uVar9 = uVar9 - 1) {
          *puVar15 = 0;
          puVar15 = puVar15 + 1;
        }
      }
      local_3a8 = local_944;
      puVar14 = local_920;
      puVar15 = local_3a8;
    }
    else {
      local_3a8 = (uint *)0x0;
      _memcpy_s(local_3a4,0x1cc,local_b2c,0);
      puVar14 = local_578;
      puVar15 = local_3a8;
    }
  }
  local_954 = (uint *)((int)local_954 - (int)local_940);
  puVar8 = local_954;
  if (local_940 != (uint *)0x0) {
    if (local_954 < local_924) {
      bVar17 = local_960 != local_95c;
      uVar2 = (undefined1)local_950[0xc2];
LAB_006f05a2:
      uVar7 = FUN_006ee653(&local_1d8,local_940,uVar2,bVar17,local_958);
      return uVar7;
    }
    puVar8 = (uint *)((int)local_954 - (int)local_924);
  }
  if (puVar15 <= puVar14) {
    puVar10 = puVar15;
    if (puVar14 <= puVar15) {
      do {
        puVar10 = (uint *)((int)puVar10 + -1);
        if (puVar10 == (uint *)0xffffffff) goto LAB_006f0326;
      } while (local_3a4[(int)puVar10] == local_574[(int)puVar10]);
      if (local_574[(int)puVar10] < local_3a4[(int)puVar10]) goto LAB_006f0326;
    }
    local_924 = (uint *)((int)local_924 + 1);
  }
LAB_006f0326:
  uVar16 = (uint)puVar8 & 0x1f;
  uVar9 = (uint)puVar8 >> 5;
  local_948 = (uint *)(0x20 - uVar16);
  local_92c = (uint *)uVar16;
  iVar5 = __allshl();
  uVar13 = local_3a4[(int)((int)puVar15 + -1)];
  local_938 = (uint *)(iVar5 - 1);
  iVar5 = 0x1f;
  if (uVar13 != 0) {
    for (; uVar13 >> iVar5 == 0; iVar5 = iVar5 + -1) {
    }
  }
  local_94c = ~(uint)local_938;
  local_934 = (uint *)0x0;
  if (uVar13 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = iVar5 + 1;
  }
  if (((byte *)(uVar9 + (int)puVar15) < (byte *)0x74) &&
     (local_928 = (uint *)((0x20U - iVar5 < uVar16) + uVar9 + (int)puVar15),
     local_928 < (uint *)0x74)) {
    local_930 = (uint *)((int)local_928 + -1);
    if (local_930 != (uint *)(uVar9 - 1)) {
      puVar8 = (uint *)((int)local_930 - uVar9);
      puVar14 = local_3a4 + (int)((int)puVar8 + -1);
      do {
        if (puVar8 < puVar15) {
          local_934 = (uint *)puVar14[1];
        }
        else {
          local_934 = (uint *)0x0;
        }
        if ((uint *)((int)puVar8 + -1) < puVar15) {
          uVar13 = *puVar14;
        }
        else {
          uVar13 = 0;
        }
        puVar14 = puVar14 + -1;
        local_3a4[(int)local_930] =
             (uVar13 & local_94c) >> ((byte)local_948 & 0x1f) |
             ((uint)local_934 & (uint)local_938) << ((byte)local_92c & 0x1f);
        local_930 = (uint *)((int)local_930 + -1);
        puVar8 = (uint *)((int)puVar8 + -1);
        puVar15 = local_3a8;
      } while (local_930 != (uint *)(uVar9 - 1));
    }
    local_3a8 = local_928;
    if (uVar9 != 0) {
      puVar15 = local_3a4;
      for (; uVar9 != 0; uVar9 = uVar9 - 1) {
        *puVar15 = 0;
        puVar15 = puVar15 + 1;
      }
    }
  }
  else {
    local_3a8 = (uint *)0x0;
    _memcpy_s(local_3a4,0x1cc,local_b2c,0);
  }
  uVar18 = FUN_006f0680(&local_3a8,&local_578);
  uVar9 = (uint)(uVar18 >> 0x20);
  uVar13 = (uint)uVar18;
  local_92c = (uint *)CONCAT31(local_92c._1_3_,local_3a8 == (uint *)0x0);
  if (uVar9 == 0) {
    iVar5 = 0x1f;
    if (uVar13 != 0) {
      for (; uVar13 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uVar13 == 0) {
      puVar15 = (uint *)0x0;
    }
    else {
      puVar15 = (uint *)(iVar5 + 1);
    }
  }
  else {
    iVar5 = 0x1f;
    if (uVar9 != 0) {
      for (; uVar9 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uVar9 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = iVar5 + 1;
    }
    puVar15 = (uint *)(iVar5 + 0x20);
  }
  if (puVar15 <= local_954) goto LAB_006f0505;
  if (local_3a8 == (uint *)0x0) {
    lVar19 = __allshl();
    local_92c = (uint *)CONCAT31(local_92c._1_3_,1);
    if ((lVar19 - 1U & uVar18) != 0) goto LAB_006f04ef;
  }
  else {
LAB_006f04ef:
    local_92c = (uint *)((uint)local_92c & 0xffffff00);
  }
  uVar18 = __aullshr();
LAB_006f0505:
  lVar19 = __allshl();
  if (local_940 == (uint *)0x0) {
    pbVar11 = (byte *)~(uint)local_924;
  }
  else {
    pbVar11 = (byte *)((int)local_940 + -2);
  }
  uVar7 = FUN_006ee2fa(uVar18 + lVar19,pbVar11,(char)local_950[0xc2],local_92c,local_958);
  return uVar7;
}


/* ==== 006f05c0  FUN_006f05c0  size=166 ==== */

/* WARNING: Removing unreachable block (ram,0x006f060b) */

void FUN_006f05c0(int *param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  ulonglong uVar10;
  int local_8;
  
  uVar7 = 0;
  pbVar6 = (byte *)(param_1 + 2);
  local_8 = 0;
  pbVar3 = (byte *)(param_1[1] + 8 + (int)param_1);
  iVar5 = ((*(char *)(param_2 + 4) == '\0') - 1 & 0x1d) + 0x17 + *param_1;
  for (iVar4 = local_8;
      (pbVar6 != pbVar3 && (uVar10 = FUN_006f0c16(), CONCAT44(iVar4,uVar7) <= uVar10));
      iVar4 = (iVar4 << 4 | uVar2) + (uint)CARRY4(uVar8,(uint)bVar1)) {
    bVar1 = *pbVar6;
    pbVar6 = pbVar6 + 1;
    uVar2 = uVar7 >> 0x1c;
    uVar8 = uVar7 * 0x10;
    uVar7 = uVar8 + bVar1;
    iVar5 = iVar5 + -4;
  }
  bVar9 = true;
  local_8 = iVar4;
  while( true ) {
    local_8 = CONCAT31(local_8._1_3_,bVar9);
    if ((pbVar6 == pbVar3) || (!bVar9)) break;
    bVar1 = *pbVar6;
    pbVar6 = pbVar6 + 1;
    bVar9 = bVar1 == 0;
  }
  FUN_006ee2fa(uVar7,iVar4,iVar5,(char)param_1[0xc2],local_8,param_2);
  return;
}


/* ==== 006f0666  FUN_006f0666  size=23 ==== */

undefined8 FUN_006f0666(void)

{
  int in_ECX;
  
  if (*(char *)(in_ECX + 4) != '\0') {
    return 0xfffffffffffff;
  }
  return 0x7fffff;
}


/* ==== 006f0680  FUN_006f0680  size=1195 ==== */

/* WARNING: Removing unreachable block (ram,0x006f09e8) */
/* WARNING: Removing unreachable block (ram,0x006f09c3) */

ulonglong FUN_006f0680(uint *param_1,uint *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  undefined4 uVar3;
  byte bVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined1 local_220 [460];
  int local_54;
  uint local_50;
  uint local_4c;
  undefined8 local_48;
  uint *local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  int local_30;
  uint local_28;
  uint local_24;
  int local_20;
  uint *local_1c;
  uint local_18;
  int local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  uVar14 = CONCAT44(local_48._4_4_,(undefined4)local_48);
  local_c = *param_1;
  if ((local_c != 0) && (local_18 = *param_2, local_18 != 0)) {
    uVar2 = local_c - 1;
    uVar10 = local_18 - 1;
    local_10 = uVar2;
    if (uVar10 == 0) {
      uVar10 = param_2[1];
      if (uVar10 == 1) {
        uVar2 = param_1[1];
        *param_1 = 0;
        _memcpy_s(param_1 + 1,0x1cc,local_220,0);
        return (ulonglong)uVar2;
      }
      if (uVar2 == 0) {
        uVar2 = param_1[1];
        *param_1 = 0;
        _memcpy_s(param_1 + 1,0x1cc,local_220,0);
        uVar7 = uVar2 % uVar10;
        param_1[1] = uVar7;
        *param_1 = (uint)(uVar7 != 0);
        return (ulonglong)uVar2 / (ulonglong)uVar10;
      }
      local_10 = 0;
      local_8 = 0;
      uVar13 = 0;
      uVar1 = 0;
      if (uVar2 != 0xffffffff) {
        local_1c = param_1 + local_c;
        do {
          local_18 = (uint)((ulonglong)uVar13 >> 0x20);
          uVar2 = *local_1c;
          uVar3 = __aulldiv(uVar2,(int)uVar13,uVar10,0);
          local_8 = local_10;
          local_10 = uVar3;
          uVar13 = __aullrem(uVar2,(int)uVar13,uVar10,0);
          local_1c = local_1c + -1;
          local_c = local_c - 1;
        } while (local_c != 0);
        local_c = 0;
        uVar1 = uVar13;
      }
      local_18 = (uint)((ulonglong)uVar1 >> 0x20);
      *param_1 = 0;
      _memcpy_s(param_1 + 1,0x1cc,local_220,0);
      param_1[1] = (uint)uVar1;
      param_1[2] = local_18;
      *param_1 = (local_18 != 0) + 1;
      return CONCAT44(local_8,local_10);
    }
    if (uVar10 <= uVar2) {
      iVar8 = uVar2 - uVar10;
      if (iVar8 <= (int)uVar2) {
        puVar5 = param_1 + local_c;
        puVar9 = param_2 + local_18;
        do {
          if (*puVar9 != *puVar5) {
            if (*puVar5 <= *puVar9) goto LAB_006f082b;
            break;
          }
          uVar2 = uVar2 - 1;
          puVar9 = puVar9 + -1;
          puVar5 = puVar5 + -1;
        } while (iVar8 <= (int)uVar2);
      }
      iVar8 = iVar8 + 1;
LAB_006f082b:
      if (iVar8 != 0) {
        local_24 = param_2[local_18 - 1];
        local_34 = param_2[local_18];
        local_20 = 0x1f;
        if (local_34 != 0) {
          for (; local_34 >> local_20 == 0; local_20 = local_20 + -1) {
          }
        }
        if (local_34 == 0) {
          local_20 = 0x20;
        }
        else {
          local_20 = 0x1f - local_20;
        }
        local_30 = 0x20 - local_20;
        if (local_20 != 0) {
          local_34 = local_34 << ((byte)local_20 & 0x1f) | local_24 >> ((byte)local_30 & 0x1f);
          local_24 = local_24 << ((byte)local_20 & 0x1f);
          if (2 < local_18) {
            local_24 = local_24 | param_2[local_18 - 2] >> ((byte)local_30 & 0x1f);
          }
        }
        local_54 = iVar8 + -1;
        local_50 = 0;
        if (local_54 < 0) {
          uVar2 = 0;
          local_50 = 0;
        }
        else {
          local_3c = local_54 + local_18;
          local_40 = param_1 + iVar8;
          local_1c = param_1 + (local_3c - 1);
          uVar2 = local_50;
          do {
            local_50 = uVar2;
            if (local_10 < local_3c) {
              local_4c = 0;
            }
            else {
              local_4c = local_1c[2];
            }
            local_8 = local_1c[1];
            uVar2 = *local_1c;
            local_28 = local_4c;
            local_c = uVar2;
            local_48 = uVar14;
            if (local_20 != 0) {
              bVar4 = (byte)local_30;
              uVar13 = __allshl();
              local_28 = (uint)((ulonglong)uVar13 >> 0x20);
              local_8 = (uint)uVar13 | uVar2 >> (bVar4 & 0x1f);
              local_c = uVar2 << ((byte)local_20 & 0x1f);
              if (2 < local_3c) {
                local_c = local_c | local_1c[-1] >> ((byte)local_30 & 0x1f);
              }
            }
            uVar10 = local_34;
            uVar14 = __aulldiv(local_8,local_28,local_34,0);
            local_14 = (int)(uVar14 >> 0x20);
            uVar2 = (uint)uVar14;
            local_38 = uVar2;
            local_48 = uVar14;
            uVar10 = __aullrem(local_8,local_28,uVar10,0);
            local_8 = 0;
            uVar16 = (ulonglong)uVar10;
            if (local_14 != 0) {
              lVar15 = __allmul(uVar2 + 1,local_14 + -1 + (uint)(0xfffffffe < uVar2),local_34,0);
              uVar16 = lVar15 + (ulonglong)uVar10;
              uVar2 = 0xffffffff;
              local_38 = 0xffffffff;
              local_14 = 0;
              local_48 = 0xffffffff;
            }
            local_8 = (uint)(uVar16 >> 0x20);
            uVar10 = local_38;
            uVar14 = local_48;
            if (local_8 == 0) {
              while( true ) {
                local_8 = (uint)(uVar16 >> 0x20);
                uVar7 = (uint)uVar16;
                local_28 = local_c;
                uVar16 = __allmul(local_24,0,uVar2,local_14);
                uVar10 = uVar2;
                uVar14 = local_48;
                if (uVar16 <= CONCAT44(uVar7,local_28)) break;
                bVar12 = uVar2 != 0;
                uVar2 = uVar2 - 1;
                local_14 = local_14 + -1 + (uint)bVar12;
                local_48 = CONCAT44(local_14,uVar2);
                uVar10 = uVar2;
                uVar14 = local_48;
                if (local_8 + CARRY4(uVar7,local_34) != 0) break;
                uVar16 = (ulonglong)(uVar7 + local_34);
              }
            }
            local_38 = uVar10;
            local_48._4_4_ = (int)(uVar14 >> 0x20);
            if ((local_14 != 0) || (uVar2 != 0)) {
              uVar7 = 0;
              uVar10 = 0;
              if (local_18 != 0) {
                local_8 = local_18;
                puVar5 = local_40;
                puVar9 = param_2;
                do {
                  puVar9 = puVar9 + 1;
                  lVar15 = (uVar14 & 0xffffffff) * (ulonglong)*puVar9;
                  uVar2 = (uint)lVar15;
                  uVar11 = uVar7 + uVar2;
                  uVar7 = uVar10 + (int)((ulonglong)lVar15 >> 0x20) + local_48._4_4_ * *puVar9 +
                          (uint)CARRY4(uVar7,uVar2);
                  uVar10 = 0;
                  if (*puVar5 < uVar11) {
                    bVar12 = 0xfffffffe < uVar7;
                    uVar7 = uVar7 + 1;
                    uVar10 = (uint)bVar12;
                  }
                  *puVar5 = *puVar5 - uVar11;
                  puVar5 = puVar5 + 1;
                  local_8 = local_8 - 1;
                  uVar2 = local_38;
                } while (local_8 != 0);
              }
              if ((uVar10 != 0) || (local_4c < uVar7)) {
                if (local_18 != 0) {
                  uVar7 = 0;
                  puVar5 = local_40;
                  uVar10 = local_18;
                  puVar9 = param_2;
                  do {
                    puVar9 = puVar9 + 1;
                    uVar2 = *puVar5;
                    uVar11 = *puVar9;
                    uVar6 = uVar2 + *puVar9;
                    *puVar5 = uVar6 + uVar7;
                    uVar7 = (uint)CARRY4(uVar2,uVar11) + (uint)CARRY4(uVar6,uVar7);
                    uVar10 = uVar10 - 1;
                    puVar5 = puVar5 + 1;
                    uVar2 = local_38;
                  } while (uVar10 != 0);
                }
                uVar2 = uVar2 - 1;
              }
              local_10 = local_3c - 1;
            }
            local_40 = local_40 + -1;
            local_54 = local_54 + -1;
            local_3c = local_3c - 1;
            local_1c = local_1c + -1;
          } while (-1 < local_54);
        }
        uVar10 = local_10 + 1;
        if (uVar10 < *param_1) {
          puVar9 = param_1 + local_10 + 2;
          uVar7 = uVar10;
          do {
            *puVar9 = 0;
            puVar9 = puVar9 + 1;
            uVar7 = uVar7 + 1;
          } while (uVar7 < *param_1);
        }
        *param_1 = uVar10;
        while ((uVar10 != 0 && (param_1[uVar10] == 0))) {
          uVar10 = uVar10 - 1;
          *param_1 = uVar10;
        }
        return CONCAT44(local_50,uVar2);
      }
    }
  }
  return 0;
}


/* ==== 006f0b2b  get  size=55 ==== */

/* Library Function - Single Match
    public: char __thiscall __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::string_input_adapter<char> >::get(void)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

char __thiscall
__crt_strtox::input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::get
          (input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_> *this)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(uint *)(this + 0x10) + 1;
  uVar3 = *(int *)(this + 0x14) + (uint)(0xfffffffe < *(uint *)(this + 0x10));
  *(uint *)(this + 0x10) = uVar2;
  *(uint *)(this + 0x14) = uVar3;
  if ((*(int *)(this + 8) == 0 && *(int *)(this + 0xc) == 0) ||
     ((uVar3 <= *(uint *)(this + 0xc) &&
      ((uVar3 < *(uint *)(this + 0xc) || (uVar2 <= *(uint *)(this + 8))))))) {
    iVar1 = __crt_stdio_input::string_input_adapter<char>::get(*(string_input_adapter<char> **)this)
    ;
    if (iVar1 != -1) goto LAB_006f0b60;
  }
  iVar1 = 0;
LAB_006f0b60:
  return (char)iVar1;
}


/* ==== 006f0b62  get  size=22 ==== */

/* Library Function - Single Match
    public: int __thiscall __crt_stdio_input::string_input_adapter<char>::get(void)
   
   Library: Visual Studio 2019 Release */

int __thiscall __crt_stdio_input::string_input_adapter<char>::get(string_input_adapter<char> *this)

{
  byte bVar1;
  byte *pbVar2;
  
  pbVar2 = *(byte **)(this + 8);
  if (pbVar2 == *(byte **)(this + 4)) {
    return -1;
  }
  bVar1 = *pbVar2;
  *(byte **)(this + 8) = pbVar2 + 1;
  return (uint)bVar1;
}


/* ==== 006f0b78  FUN_006f0b78  size=80 ==== */

undefined4 FUN_006f0b78(int param_1,uint param_2)

{
  undefined4 uVar1;
  int in_ECX;
  bool bVar2;
  
  if (param_2 == 0xffffffff) goto LAB_006f0bc1;
  if (param_1 == 0) {
LAB_006f0bbd:
    uVar1 = 1;
  }
  else {
    if (param_1 == 1) {
      if (((int)param_2 < 9) || (0xd < (int)param_2)) {
        bVar2 = param_2 == 0x20;
        goto LAB_006f0bbb;
      }
    }
    else if (param_1 == 8) {
      bVar2 = (*(byte *)(((param_2 & 0xff) >> 3) + 0x44 + in_ECX) & (byte)(1 << ((byte)param_2 & 7))
              ) == 0;
LAB_006f0bbb:
      if (!bVar2) goto LAB_006f0bbd;
    }
LAB_006f0bc1:
    uVar1 = 0;
  }
  return uVar1;
}


/* ==== 006f0bc8  FUN_006f0bc8  size=55 ==== */

uint FUN_006f0bc8(void)

{
  uint uVar1;
  int in_ECX;
  
  switch(*(undefined4 *)(in_ECX + 0x28)) {
  case 0:
  case 1:
  case 8:
    return (*(char *)(in_ECX + 0x24) != '\0') + 1;
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 9:
    uVar1 = __crt_stdio_input::to_integer_length(*(length_modifier *)(in_ECX + 0x20));
    return uVar1;
  case 7:
    uVar1 = __crt_stdio_input::to_floating_point_length(*(length_modifier *)(in_ECX + 0x20));
    return uVar1;
  default:
    return 0;
  }
}


/* ==== 006f0c16  FUN_006f0c16  size=23 ==== */

undefined8 FUN_006f0c16(void)

{
  int in_ECX;
  
  if (*(char *)(in_ECX + 4) != '\0') {
    return 0x1fffffffffffff;
  }
  return 0xffffff;
}


/* ==== 006f0c2d  process  size=132 ==== */

/* Library Function - Single Match
    public: int __thiscall __crt_stdio_input::input_processor<char,class
   __crt_stdio_input::string_input_adapter<char> >::process(void)
   
   Library: Visual Studio 2019 Release */

int __thiscall
__crt_stdio_input::input_processor<char,__crt_stdio_input::string_input_adapter<char>_>::process
          (input_processor<char,__crt_stdio_input::string_input_adapter<char>_> *this)

{
  string_input_adapter<char> *this_00;
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  this_00 = (string_input_adapter<char> *)(this + 8);
  bVar1 = string_input_adapter<char>::validate(this_00);
  if (bVar1) {
    bVar1 = format_string_parser<char>::validate((format_string_parser<char> *)(this + 0x18));
    if (bVar1) {
      do {
        bVar1 = format_string_parser<char>::advance((format_string_parser<char> *)(this + 0x18));
        if (!bVar1) break;
        bVar1 = process_state(this);
      } while (bVar1);
      iVar4 = *(int *)(this + 0x70);
      if ((iVar4 == 0) && (*(int *)(this + 0x28) != 1)) {
        iVar2 = string_input_adapter<char>::get(this_00);
        if (iVar2 == -1) {
          iVar4 = -1;
        }
        string_input_adapter<char>::unget(this_00,iVar2);
      }
      if ((*(uint *)this & 1) == 0) {
        return iVar4;
      }
      iVar2 = *(int *)(this + 0x24);
      if (iVar2 == 0) {
        return iVar4;
      }
      piVar3 = (int *)FUN_006f390a();
      *piVar3 = iVar2;
      FUN_006e8c2f();
      return iVar4;
    }
  }
  return -1;
}


/* ==== 006f0cc9  FUN_006f0cc9  size=124 ==== */

bool FUN_006f0cc9(void)

{
  undefined1 uVar1;
  bool bVar2;
  int iVar3;
  input_processor<char,__crt_stdio_input::string_input_adapter<char>_> *in_ECX;
  undefined4 uVar4;
  conversion_mode cVar5;
  undefined4 uVar6;
  
  switch(*(undefined4 *)(in_ECX + 0x40)) {
  case 0:
    cVar5 = 0;
    goto LAB_006f0cda;
  case 1:
    cVar5 = 1;
    goto LAB_006f0cda;
  case 2:
    uVar6 = 1;
    uVar4 = 0;
    break;
  case 3:
    uVar6 = 1;
    goto LAB_006f0cf4;
  case 4:
    uVar6 = 0;
    uVar4 = 8;
    break;
  case 5:
    uVar6 = 0;
LAB_006f0cf4:
    uVar4 = 10;
    break;
  case 6:
    uVar6 = 0;
    uVar4 = 0x10;
    break;
  case 7:
    __crt_stdio_input::input_processor<char,__crt_stdio_input::string_input_adapter<char>_>::
    process_whitespace(in_ECX);
    iVar3 = FUN_006f0bc8();
    if (iVar3 == 4) {
      uVar1 = FUN_006edb6f();
      return (bool)uVar1;
    }
    if (iVar3 == 8) {
      uVar1 = FUN_006edbd8();
      return (bool)uVar1;
    }
    return false;
  case 8:
    cVar5 = 8;
LAB_006f0cda:
    bVar2 = __crt_stdio_input::input_processor<char,__crt_stdio_input::string_input_adapter<char>_>
            ::process_string_specifier(in_ECX,cVar5);
    return bVar2;
  case 9:
    if (in_ECX[0x2e] == (input_processor<char,__crt_stdio_input::string_input_adapter<char>_>)0x0) {
      uVar1 = FUN_006f15ef(*(int *)(in_ECX + 0x10) - *(int *)(in_ECX + 8),0);
      return (bool)uVar1;
    }
    return true;
  default:
    return false;
  }
  uVar1 = FUN_006f0d6d(uVar4,uVar6);
  return (bool)uVar1;
}


/* ==== 006f0d6d  FUN_006f0d6d  size=101 ==== */

undefined4 FUN_006f0d6d(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  input_processor<char,__crt_stdio_input::string_input_adapter<char>_> *in_ECX;
  undefined1 auStack_3c [28];
  undefined4 uStack_20;
  undefined8 uStack_1c;
  undefined4 uStack_8;
  
  uStack_1c._4_4_ = 0x6f0d7d;
  uStack_8 = in_ECX;
  __crt_stdio_input::input_processor<char,__crt_stdio_input::string_input_adapter<char>_>::
  process_whitespace(in_ECX);
  uStack_1c._4_4_ = param_2;
  uVar1 = *(undefined4 *)(in_ECX + 0x68);
  uStack_1c._0_4_ = param_1;
  uStack_8 = (input_processor<char,__crt_stdio_input::string_input_adapter<char>_> *)
             ((uint)uStack_8 & 0xffffff);
  FUN_006ecdb0(auStack_3c,in_ECX + 8,*(undefined4 *)(in_ECX + 0x30),*(undefined4 *)(in_ECX + 0x34),
               (int)&uStack_8 + 3);
  uStack_1c = FUN_006edb13(uVar1);
  if (uStack_8._3_1_ == '\0') {
    uVar1 = 0;
  }
  else if (in_ECX[0x2e] == (input_processor<char,__crt_stdio_input::string_input_adapter<char>_>)0x0
          ) {
    uStack_20 = 0x6f0dcc;
    uVar1 = FUN_006f15ef();
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}


/* ==== 006f0dd2  process_literal_character  size=54 ==== */

/* Library Function - Single Match
    private: bool __thiscall __crt_stdio_input::input_processor<char,class
   __crt_stdio_input::string_input_adapter<char> >::process_literal_character(void)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

bool __thiscall
__crt_stdio_input::input_processor<char,__crt_stdio_input::string_input_adapter<char>_>::
process_literal_character
          (input_processor<char,__crt_stdio_input::string_input_adapter<char>_> *this)

{
  bool bVar1;
  uint uVar2;
  
  uVar2 = string_input_adapter<char>::get((string_input_adapter<char> *)(this + 8));
  if (uVar2 != 0xffffffff) {
    if (uVar2 == (byte)this[0x2c]) {
      bVar1 = process_literal_character_tchar(this,(char)uVar2);
      return bVar1;
    }
    string_input_adapter<char>::unget((string_input_adapter<char> *)(this + 8),uVar2);
  }
  return false;
}


/* ==== 006f0e08  process_literal_character_tchar  size=78 ==== */

/* Library Function - Single Match
    private: bool __thiscall __crt_stdio_input::input_processor<char,class
   __crt_stdio_input::string_input_adapter<char> >::process_literal_character_tchar(char)
   
   Library: Visual Studio 2019 Release */

bool __thiscall
__crt_stdio_input::input_processor<char,__crt_stdio_input::string_input_adapter<char>_>::
process_literal_character_tchar
          (input_processor<char,__crt_stdio_input::string_input_adapter<char>_> *this,char param_1)

{
  string_input_adapter<char> *this_00;
  ushort *puVar1;
  uint uVar2;
  
  puVar1 = ___pctype_func();
  if ((short)puVar1[(byte)param_1] < 0) {
    this_00 = (string_input_adapter<char> *)(this + 8);
    uVar2 = string_input_adapter<char>::get(this_00);
    if (uVar2 != (byte)this[0x2d]) {
      string_input_adapter<char>::unget(this_00,uVar2);
      string_input_adapter<char>::unget(this_00,(int)param_1);
      return false;
    }
  }
  return true;
}


/* ==== 006f0e56  process_state  size=66 ==== */

/* Library Function - Single Match
    private: bool __thiscall __crt_stdio_input::input_processor<char,class
   __crt_stdio_input::string_input_adapter<char> >::process_state(void)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

bool __thiscall
__crt_stdio_input::input_processor<char,__crt_stdio_input::string_input_adapter<char>_>::
process_state(input_processor<char,__crt_stdio_input::string_input_adapter<char>_> *this)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  
  iVar1 = *(int *)(this + 0x28);
  if (iVar1 == 2) {
    bVar3 = process_whitespace(this);
    return bVar3;
  }
  if (iVar1 != 3) {
    if (iVar1 == 4) {
      cVar2 = FUN_006f0cc9();
      if (((cVar2 != '\0') && (*(int *)(this + 0x40) != 9)) &&
         (this[0x2e] == (input_processor<char,__crt_stdio_input::string_input_adapter<char>_>)0x0))
      {
        *(int *)(this + 0x70) = *(int *)(this + 0x70) + 1;
        return (bool)cVar2;
      }
    }
    else {
      cVar2 = '\0';
    }
    return (bool)cVar2;
  }
  bVar3 = process_literal_character(this);
  return bVar3;
}


/* ==== 006f0e98  process_string_specifier  size=72 ==== */

/* Library Function - Single Match
    private: bool __thiscall __crt_stdio_input::input_processor<char,class
   __crt_stdio_input::string_input_adapter<char> >::process_string_specifier(enum
   __crt_stdio_input::conversion_mode)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

bool __thiscall
__crt_stdio_input::input_processor<char,__crt_stdio_input::string_input_adapter<char>_>::
process_string_specifier
          (input_processor<char,__crt_stdio_input::string_input_adapter<char>_> *this,
          conversion_mode param_1)

{
  undefined1 uVar1;
  int iVar2;
  
  if (param_1 == 1) {
    process_whitespace(this);
  }
  iVar2 = FUN_006f0bc8();
  if (iVar2 == 1) {
    uVar1 = FUN_006edc41(param_1,0);
  }
  else if (iVar2 == 2) {
    uVar1 = FUN_006edda3(param_1,0);
  }
  else {
    uVar1 = 0;
  }
  return (bool)uVar1;
}


/* ==== 006f0ee0  process_whitespace  size=29 ==== */

/* Library Function - Single Match
    private: bool __thiscall __crt_stdio_input::input_processor<char,class
   __crt_stdio_input::string_input_adapter<char> >::process_whitespace(void)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

bool __thiscall
__crt_stdio_input::input_processor<char,__crt_stdio_input::string_input_adapter<char>_>::
process_whitespace(input_processor<char,__crt_stdio_input::string_input_adapter<char>_> *this)

{
  int iVar1;
  
  iVar1 = skip_whitespace<__crt_stdio_input::string_input_adapter,char>
                    ((string_input_adapter<char> *)(this + 8),
                     *(__crt_locale_pointers **)(this + 0x68));
  string_input_adapter<char>::unget((string_input_adapter<char> *)(this + 8),iVar1);
  return true;
}


/* ==== 006f0efd  restore_state  size=37 ==== */

/* Library Function - Multiple Matches With Same Base Name
    public: bool __thiscall __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::console_input_adapter<char> >::restore_state(unsigned __int64)
    public: bool __thiscall __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::stream_input_adapter<char> >::restore_state(unsigned __int64)
    public: bool __thiscall __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::string_input_adapter<char> >::restore_state(unsigned __int64)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

undefined4 restore_state(int param_1,int param_2)

{
  undefined4 uVar1;
  int in_ECX;
  
  if ((param_1 == *(int *)(in_ECX + 0x10)) && (param_2 == *(int *)(in_ECX + 0x14))) {
    uVar1 = 1;
  }
  else {
    **(undefined1 **)(in_ECX + 0x18) = 0;
    uVar1 = 0;
  }
  return uVar1;
}


/* ==== 006f0f22  FUN_006f0f22  size=380 ==== */

undefined4 FUN_006f0f22(void)

{
  byte bVar1;
  undefined4 uVar2;
  int in_ECX;
  
  bVar1 = **(byte **)(in_ECX + 8);
  if (bVar1 < 0x65) {
    if (bVar1 == 100) {
      *(undefined4 *)(in_ECX + 0x28) = 3;
      goto LAB_006f1093;
    }
    if (bVar1 < 0x4a) {
      if (bVar1 == 0x49) goto LAB_006f101c;
      if (bVar1 != 0x41) {
        if (bVar1 == 0x43) {
LAB_006f0f99:
          if (*(int *)(in_ECX + 0x18) == 0 && *(int *)(in_ECX + 0x1c) == 0) {
            *(undefined4 *)(in_ECX + 0x18) = 1;
            *(undefined4 *)(in_ECX + 0x1c) = 0;
          }
          FUN_006f1426();
          *(undefined4 *)(in_ECX + 0x28) = 0;
          goto LAB_006f0fb8;
        }
        if (((bVar1 != 0x45) && (bVar1 != 0x46)) && (bVar1 != 0x47)) goto LAB_006f1043;
      }
    }
    else {
      if (bVar1 == 0x53) {
LAB_006f1072:
        FUN_006f1426();
        *(undefined4 *)(in_ECX + 0x28) = 1;
LAB_006f0fb8:
        *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) + 1;
        return 1;
      }
      if (bVar1 == 0x58) goto LAB_006f108c;
      if (bVar1 == 0x5b) {
        FUN_006f1426();
        *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) + 1;
        *(undefined4 *)(in_ECX + 0x28) = 8;
        uVar2 = FUN_006f12c2();
        return uVar2;
      }
      if (bVar1 != 0x61) {
        if (bVar1 != 99) goto LAB_006f1043;
        goto LAB_006f0f99;
      }
    }
LAB_006f0f67:
    *(undefined4 *)(in_ECX + 0x28) = 7;
  }
  else {
    if (0x6f < bVar1) {
      if (bVar1 == 0x70) {
        *(undefined4 *)(in_ECX + 0x20) = 9;
      }
      else {
        if (bVar1 == 0x73) goto LAB_006f1072;
        if (bVar1 == 0x75) {
          *(undefined4 *)(in_ECX + 0x28) = 5;
          goto LAB_006f1093;
        }
        if (bVar1 != 0x78) goto LAB_006f1043;
      }
LAB_006f108c:
      *(undefined4 *)(in_ECX + 0x28) = 6;
      goto LAB_006f1093;
    }
    if (bVar1 == 0x6f) {
      *(undefined4 *)(in_ECX + 0x28) = 4;
      goto LAB_006f1093;
    }
    if (((bVar1 == 0x65) || (bVar1 == 0x66)) || (bVar1 == 0x67)) goto LAB_006f0f67;
    if (bVar1 != 0x69) {
      if (bVar1 != 0x6e) {
LAB_006f1043:
        *(undefined4 *)(in_ECX + 0xc) = 0x16;
        *(undefined4 *)(in_ECX + 0x10) = 0;
        *(undefined2 *)(in_ECX + 0x14) = 0;
        *(undefined1 *)(in_ECX + 0x16) = 0;
        *(undefined4 *)(in_ECX + 0x18) = 0;
        *(undefined4 *)(in_ECX + 0x1c) = 0;
        *(undefined4 *)(in_ECX + 0x20) = 0;
        *(undefined1 *)(in_ECX + 0x24) = 0;
        *(undefined4 *)(in_ECX + 0x28) = 0;
        return 0;
      }
      *(undefined4 *)(in_ECX + 0x28) = 9;
      goto LAB_006f1093;
    }
LAB_006f101c:
    *(undefined4 *)(in_ECX + 0x28) = 2;
  }
LAB_006f1093:
  *(byte **)(in_ECX + 8) = *(byte **)(in_ECX + 8) + 1;
  return 1;
}


/* ==== 006f109e  FUN_006f109e  size=148 ==== */

uint FUN_006f109e(void)

{
  char cVar1;
  uint uVar2;
  int in_ECX;
  longlong lVar3;
  int local_8;
  
  cVar1 = **(char **)(in_ECX + 8);
  if ((byte)(cVar1 - 0x30U) < 10) {
    uVar2 = (int)cVar1 - 0x30;
  }
  else if ((byte)(cVar1 + 0x9fU) < 0x1a) {
    uVar2 = (int)cVar1 - 0x57;
  }
  else {
    uVar2 = CONCAT31((int3)((uint)in_ECX >> 8),cVar1) - 0x41;
    if (0x19 < (byte)uVar2) goto LAB_006f1108;
    uVar2 = (int)cVar1 - 0x37;
  }
  if (uVar2 < 10) {
    local_8 = 0;
    lVar3 = FUN_006f3963(*(char **)(in_ECX + 8),&local_8,10);
    uVar2 = (uint)lVar3;
    if ((lVar3 == 0) || (local_8 == *(int *)(in_ECX + 8))) {
      *(undefined4 *)(in_ECX + 0x10) = 0;
      *(undefined2 *)(in_ECX + 0x14) = 0;
      *(undefined1 *)(in_ECX + 0x16) = 0;
      *(undefined4 *)(in_ECX + 0x18) = 0;
      *(undefined4 *)(in_ECX + 0x1c) = 0;
      *(undefined4 *)(in_ECX + 0x20) = 0;
      *(undefined1 *)(in_ECX + 0x24) = 0;
      *(undefined4 *)(in_ECX + 0x28) = 0;
      *(undefined4 *)(in_ECX + 0xc) = 0x16;
      return uVar2 & 0xffffff00;
    }
    *(longlong *)(in_ECX + 0x18) = lVar3;
    *(int *)(in_ECX + 8) = local_8;
  }
LAB_006f1108:
  return CONCAT31((int3)(uVar2 >> 8),1);
}


/* ==== 006f1132  FUN_006f1132  size=288 ==== */

void FUN_006f1132(void)

{
  byte bVar1;
  byte *pbVar2;
  int in_ECX;
  byte *pbVar3;
  
  pbVar2 = *(byte **)(in_ECX + 8);
  bVar1 = *pbVar2;
  if (bVar1 < 0x6b) {
    if (bVar1 == 0x6a) {
      *(undefined4 *)(in_ECX + 0x20) = 5;
      *(byte **)(in_ECX + 8) = pbVar2 + 1;
      return;
    }
    if (bVar1 == 0x49) {
      bVar1 = pbVar2[1];
      if ((bVar1 == 0x33) && (pbVar2[2] == 0x32)) {
        *(byte **)(in_ECX + 8) = pbVar2 + 3;
LAB_006f11af:
        *(undefined4 *)(in_ECX + 0x20) = 9;
        return;
      }
      if (bVar1 == 0x36) {
        if (pbVar2[2] == 0x34) {
          *(undefined4 *)(in_ECX + 0x20) = 10;
          *(byte **)(in_ECX + 8) = pbVar2 + 3;
          return;
        }
      }
      else if ((((bVar1 == 100) || (bVar1 == 0x69)) || (bVar1 == 0x6f)) ||
              (((bVar1 == 0x75 || (bVar1 == 0x78)) || (bVar1 == 0x58)))) {
        *(byte **)(in_ECX + 8) = pbVar2 + 1;
        goto LAB_006f11af;
      }
    }
    else {
      if (bVar1 == 0x4c) {
        *(undefined4 *)(in_ECX + 0x20) = 8;
        *(byte **)(in_ECX + 8) = pbVar2 + 1;
        return;
      }
      if (bVar1 == 0x54) {
        *(undefined4 *)(in_ECX + 0x20) = 0xb;
        *(byte **)(in_ECX + 8) = pbVar2 + 1;
        return;
      }
      if (bVar1 == 0x68) {
        pbVar3 = pbVar2 + 1;
        bVar1 = *pbVar3;
        if (bVar1 == 0x68) {
          pbVar3 = pbVar2 + 2;
        }
        *(byte **)(in_ECX + 8) = pbVar3;
        *(uint *)(in_ECX + 0x20) = (bVar1 != 0x68) + 1;
        return;
      }
    }
  }
  else if (bVar1 == 0x6c) {
    if (pbVar2[1] == 0x6c) {
      *(undefined4 *)(in_ECX + 0x20) = 4;
      *(byte **)(in_ECX + 8) = pbVar2 + 2;
      return;
    }
    *(byte **)(in_ECX + 8) = pbVar2 + 1;
    *(undefined4 *)(in_ECX + 0x20) = 3;
  }
  else {
    if (bVar1 == 0x74) {
      *(undefined4 *)(in_ECX + 0x20) = 7;
      *(byte **)(in_ECX + 8) = pbVar2 + 1;
      return;
    }
    if (bVar1 == 0x7a) {
      *(undefined4 *)(in_ECX + 0x20) = 6;
      *(byte **)(in_ECX + 8) = pbVar2 + 1;
      return;
    }
  }
  return;
}


/* ==== 006f1252  scan_optional_literal_character_trail_bytes_tchar  size=82 ==== */

/* Library Function - Single Match
    private: bool __thiscall
   __crt_stdio_input::format_string_parser<char>::scan_optional_literal_character_trail_bytes_tchar(char)
   
   Library: Visual Studio 2019 Release */

bool __thiscall
__crt_stdio_input::format_string_parser<char>::scan_optional_literal_character_trail_bytes_tchar
          (format_string_parser<char> *this,char param_1)

{
  format_string_parser<char> fVar1;
  ushort *puVar2;
  
  puVar2 = ___pctype_func();
  if ((short)puVar2[(byte)this[0x14]] < 0) {
    fVar1 = **(format_string_parser<char> **)(this + 8);
    if (fVar1 == (format_string_parser<char>)0x0) {
      *(undefined4 *)(this + 0x10) = 0;
      *(undefined2 *)(this + 0x14) = 0;
      this[0x16] = (format_string_parser<char>)0x0;
      *(undefined4 *)(this + 0x18) = 0;
      *(undefined4 *)(this + 0x1c) = 0;
      *(undefined4 *)(this + 0x20) = 0;
      this[0x24] = (format_string_parser<char>)0x0;
      *(undefined4 *)(this + 0x28) = 0;
      *(undefined4 *)(this + 0xc) = 0x2a;
      return false;
    }
    this[0x15] = fVar1;
    *(format_string_parser<char> **)(this + 8) = *(format_string_parser<char> **)(this + 8) + 1;
  }
  return true;
}


/* ==== 006f12a4  scan_optional_wide_modifier  size=30 ==== */

/* Library Function - Single Match
    private: void __thiscall
   __crt_stdio_input::format_string_parser<char>::scan_optional_wide_modifier(void)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void __thiscall
__crt_stdio_input::format_string_parser<char>::scan_optional_wide_modifier
          (format_string_parser<char> *this)

{
  char cVar1;
  
  cVar1 = **(char **)(this + 8);
  if (cVar1 == 'w') {
    *(char **)(this + 8) = *(char **)(this + 8) + 1;
  }
  else if ((cVar1 != 'C') && (cVar1 != 'S')) {
    return;
  }
  this[0x24] = (format_string_parser<char>)0x1;
  return;
}


/* ==== 006f12c2  FUN_006f12c2  size=313 ==== */

uint FUN_006f12c2(void)

{
  byte bVar1;
  byte bVar2;
  byte *in_EAX;
  byte *pbVar3;
  int in_ECX;
  int iVar4;
  byte bVar5;
  byte bVar6;
  undefined4 *puVar7;
  byte *local_c;
  
  if ((undefined4 *)(in_ECX + 0x2c) == (undefined4 *)0x0) {
    *(undefined4 *)(in_ECX + 0xc) = 0xc;
    *(undefined2 *)(in_ECX + 0x14) = 0;
  }
  else {
    puVar7 = (undefined4 *)(in_ECX + 0x2c);
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    pbVar3 = *(byte **)(in_ECX + 8);
    bVar1 = *pbVar3;
    bVar5 = bVar1;
    if (bVar1 == 0x5e) {
      pbVar3 = pbVar3 + 1;
      *(byte **)(in_ECX + 8) = pbVar3;
      bVar5 = *pbVar3;
    }
    if (bVar5 == 0x5d) {
      pbVar3 = pbVar3 + 1;
      *(byte **)(in_ECX + 8) = pbVar3;
      *(byte *)(in_ECX + 0x37) = *(byte *)(in_ECX + 0x37) | 0x20;
    }
    local_c = (byte *)0x0;
    in_EAX = pbVar3;
    if (*pbVar3 != 0x5d) {
      bVar5 = *pbVar3;
      do {
        if (bVar5 == 0) break;
        if (((bVar5 == 0x2d) && (in_EAX + -1 != local_c)) && (in_EAX != pbVar3)) {
          bVar6 = in_EAX[1];
          if (bVar6 == 0x5d) goto LAB_006f13a8;
          bVar5 = in_EAX[-1];
          bVar2 = bVar5;
          if (bVar6 < bVar5) {
            bVar2 = bVar6;
            bVar6 = bVar5;
          }
          for (; local_c = in_EAX + 1, bVar2 != (byte)(bVar6 + 1); bVar2 = bVar2 + 1) {
            __crt_stdio_input::scanset_buffer<unsigned_char>::set
                      ((scanset_buffer<unsigned_char> *)(in_ECX + 0x2c),bVar2);
          }
        }
        else {
LAB_006f13a8:
          __crt_stdio_input::scanset_buffer<unsigned_char>::set
                    ((scanset_buffer<unsigned_char> *)(in_ECX + 0x2c),bVar5);
        }
        in_EAX = (byte *)(*(int *)(in_ECX + 8) + 1);
        *(byte **)(in_ECX + 8) = in_EAX;
        bVar5 = *in_EAX;
      } while (bVar5 != 0x5d);
    }
    pbVar3 = (byte *)(in_ECX + 0x2c);
    if (*in_EAX != 0) {
      if (bVar1 == 0x5e) {
        in_EAX = (byte *)(in_ECX + 0x4c);
        for (; pbVar3 != in_EAX; pbVar3 = pbVar3 + 1) {
          *pbVar3 = ~*pbVar3;
        }
      }
      *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) + 1;
      return CONCAT31((int3)((uint)in_EAX >> 8),1);
    }
    *(undefined2 *)(in_ECX + 0x14) = 0;
    *(undefined4 *)(in_ECX + 0xc) = 0x16;
  }
  *(undefined4 *)(in_ECX + 0x28) = 0;
  *(undefined1 *)(in_ECX + 0x24) = 0;
  *(undefined4 *)(in_ECX + 0x20) = 0;
  *(undefined4 *)(in_ECX + 0x1c) = 0;
  *(undefined4 *)(in_ECX + 0x18) = 0;
  *(undefined1 *)(in_ECX + 0x16) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  return (uint)in_EAX & 0xffffff00;
}


/* ==== 006f13fb  set  size=43 ==== */

/* WARNING: Removing unreachable block (ram,0x006f1416) */
/* Library Function - Single Match
    public: void __thiscall __crt_stdio_input::scanset_buffer<unsigned char>::set(unsigned char)
   
   Libraries: Visual Studio 2015 Debug, Visual Studio 2015 Release */

void __thiscall
__crt_stdio_input::scanset_buffer<unsigned_char>::set
          (scanset_buffer<unsigned_char> *this,uchar param_1)

{
  this[param_1 >> 3] =
       (scanset_buffer<unsigned_char>)((byte)this[param_1 >> 3] | (byte)(1 << (param_1 & 7)));
  return;
}


/* ==== 006f1426  FUN_006f1426  size=33 ==== */

void FUN_006f1426(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x20);
  if (iVar1 == 2) {
    *(undefined1 *)(in_ECX + 0x24) = 0;
    return;
  }
  if (((iVar1 == 3) || (iVar1 == 4)) || (iVar1 == 8)) {
    *(undefined1 *)(in_ECX + 0x24) = 1;
  }
  return;
}


/* ==== 006f1447  to_floating_point_length  size=35 ==== */

/* Library Function - Single Match
    unsigned int __cdecl __crt_stdio_input::to_floating_point_length(enum
   __crt_stdio_input::length_modifier)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

uint __cdecl __crt_stdio_input::to_floating_point_length(length_modifier param_1)

{
  undefined4 uStack_8;
  
  if (param_1 == 0) {
    uStack_8 = 4;
  }
  else {
    if ((param_1 != 3) && (param_1 != 8)) {
      return 0;
    }
    uStack_8 = 8;
  }
  return uStack_8;
}


/* ==== 006f146a  to_integer_length  size=49 ==== */

/* Library Function - Single Match
    unsigned int __cdecl __crt_stdio_input::to_integer_length(enum
   __crt_stdio_input::length_modifier)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

uint __cdecl __crt_stdio_input::to_integer_length(length_modifier param_1)

{
  uint uStack_8;
  
  switch(param_1) {
  case 0:
  case 3:
  case 6:
  case 7:
  case 9:
    uStack_8 = 4;
    break;
  case 1:
    return 1;
  case 2:
    uStack_8 = 2;
    break;
  case 4:
  case 5:
  case 10:
    uStack_8 = 8;
    break;
  default:
    return 0;
  }
  return uStack_8;
}


/* ==== 006f14bd  unget  size=71 ==== */

/* Library Function - Single Match
    public: void __thiscall __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::string_input_adapter<char> >::unget(char)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __thiscall
__crt_strtox::input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::unget
          (input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_> *this,
          char param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(int *)(this + 0x10) - 1;
  uVar2 = *(int *)(this + 0x14) + -1 + (uint)(*(int *)(this + 0x10) != 0);
  *(uint *)(this + 0x10) = uVar1;
  *(uint *)(this + 0x14) = uVar2;
  if ((((*(int *)(this + 8) == 0 && *(int *)(this + 0xc) == 0) ||
       ((uVar2 <= *(uint *)(this + 0xc) &&
        ((uVar2 < *(uint *)(this + 0xc) || (uVar1 <= *(uint *)(this + 8))))))) && (param_1 != '\0'))
     && (param_1 != -1)) {
    __crt_stdio_input::string_input_adapter<char>::unget
              (*(string_input_adapter<char> **)this,(int)param_1);
  }
  return;
}


/* ==== 006f1504  unget  size=31 ==== */

/* Library Function - Single Match
    public: void __thiscall __crt_stdio_input::string_input_adapter<char>::unget(int)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __thiscall
__crt_stdio_input::string_input_adapter<char>::unget(string_input_adapter<char> *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 8);
  if ((iVar1 != *(int *)this) && ((iVar1 != *(int *)(this + 4) || (param_1 != -1)))) {
    *(int *)(this + 8) = iVar1 + -1;
  }
  return;
}


/* ==== 006f1523  validate  size=28 ==== */

/* Library Function - Single Match
    public: bool __thiscall __crt_stdio_input::format_string_parser<char>::validate(void)const 
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

bool __thiscall
__crt_stdio_input::format_string_parser<char>::validate(format_string_parser<char> *this)

{
  undefined4 *puVar1;
  
  if (*(int *)(this + 8) == 0) {
    puVar1 = (undefined4 *)FUN_006f390a();
    *puVar1 = 0x16;
    FUN_006e8c2f();
    return false;
  }
  return true;
}


/* ==== 006f153f  FUN_006f153f  size=33 ==== */

undefined4 FUN_006f153f(void)

{
  undefined4 *puVar1;
  int *in_ECX;
  
  if ((*in_ECX != 0) && (in_ECX[6] != 0)) {
    return 1;
  }
  puVar1 = (undefined4 *)FUN_006f390a();
  *puVar1 = 0x16;
  FUN_006e8c2f();
  return 0;
}


/* ==== 006f1560  validate  size=34 ==== */

/* Library Function - Single Match
    public: bool __thiscall __crt_stdio_input::string_input_adapter<char>::validate(void)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

bool __thiscall
__crt_stdio_input::string_input_adapter<char>::validate(string_input_adapter<char> *this)

{
  undefined4 *puVar1;
  
  if ((*(uint *)(this + 8) != 0) && (*(uint *)(this + 8) <= *(uint *)(this + 4))) {
    return true;
  }
  puVar1 = (undefined4 *)FUN_006f390a();
  *puVar1 = 0x16;
  FUN_006e8c2f();
  return false;
}


/* ==== 006f1582  write_character  size=109 ==== */

/* Library Function - Single Match
    private: bool __thiscall __crt_stdio_input::input_processor<char,class
   __crt_stdio_input::string_input_adapter<char> >::write_character(wchar_t * const,unsigned
   int,wchar_t * &,unsigned int &,char)
   
   Library: Visual Studio 2019 Release */

bool __thiscall
__crt_stdio_input::input_processor<char,__crt_stdio_input::string_input_adapter<char>_>::
write_character(input_processor<char,__crt_stdio_input::string_input_adapter<char>_> *this,
               wchar_t *param_1,uint param_2,wchar_t **param_3,uint *param_4,char param_5)

{
  ushort *puVar1;
  int iVar2;
  input_processor<char,__crt_stdio_input::string_input_adapter<char>_> *local_c;
  undefined2 local_8;
  undefined2 uStack_6;
  
  uStack_6 = (undefined2)((uint)this >> 0x10);
  local_8 = (ushort)(byte)param_5;
  local_c = this;
  puVar1 = ___pctype_func();
  if ((short)puVar1[(byte)param_5] < 0) {
    iVar2 = string_input_adapter<char>::get((string_input_adapter<char> *)(this + 8));
    local_8 = CONCAT11((char)iVar2,(undefined1)local_8);
  }
  local_c = (input_processor<char,__crt_stdio_input::string_input_adapter<char>_> *)
            CONCAT22(local_c._2_2_,0x3f);
  FUN_006fb44d(&local_c,&local_8,*(undefined4 *)(**(int **)(this + 0x68) + 4),*(int **)(this + 0x68)
              );
  **param_3 = (short)param_5;
  *param_3 = *param_3 + 1;
  *param_4 = *param_4 - 1;
  return true;
}


/* ==== 006f15ef  FUN_006f15ef  size=111 ==== */

undefined4 FUN_006f15ef(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int in_ECX;
  
  piVar1 = *(int **)(in_ECX + 0x6c);
  *(int **)(in_ECX + 0x6c) = piVar1 + 1;
  puVar2 = (undefined4 *)*piVar1;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)FUN_006f390a();
    *puVar2 = 0x16;
    FUN_006e8c2f();
LAB_006f1614:
    uVar3 = 0;
  }
  else {
    iVar4 = FUN_006f0bc8();
    if (iVar4 == 1) {
      *(undefined1 *)puVar2 = (undefined1)param_1;
    }
    else if (iVar4 == 2) {
      *(undefined2 *)puVar2 = (undefined2)param_1;
    }
    else if (iVar4 == 4) {
      *puVar2 = param_1;
    }
    else {
      if (iVar4 != 8) goto LAB_006f1614;
      *puVar2 = param_1;
      puVar2[1] = param_2;
    }
    uVar3 = 1;
  }
  return uVar3;
}


/* ==== 006f1682  FUN_006f1682  size=87 ==== */

uint FUN_006f1682(int param_1,uint param_2,_locale_t param_3)

{
  ushort *puVar1;
  uint uVar2;
  
  if (param_3 == (_locale_t)0x0) {
    puVar1 = ___pctype_func();
    uVar2 = ___acrt_locale_get_ctype_array_value(puVar1,param_1,param_2);
    return uVar2;
  }
  if (param_1 + 1U < 0x101) {
    param_2 = *(ushort *)(param_3->locinfo->refcount + param_1 * 2) & param_2;
  }
  else if ((int)param_3->locinfo->lc_codepage < 2) {
    param_2 = 0;
  }
  else {
    param_2 = __isctype_l(param_1,param_2,param_3);
  }
  return param_2;
}


/* ==== 006f16d9  FUN_006f16d9  size=374 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

undefined4 FUN_006f16d9(char *param_1,uint param_2,int *param_3)

{
  char cVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  
  if (param_1 != (char *)0x0) {
    uVar3 = FUN_006fa2c9(param_1,param_2);
    if (uVar3 < param_2) {
      iVar5 = *(int *)(*param_3 + 0xa8);
      if (iVar5 == 0) {
        for (; cVar1 = *param_1, cVar1 != '\0'; param_1 = param_1 + 1) {
          if ((byte)(cVar1 + 0xbfU) < 0x1a) {
            *param_1 = cVar1 + ' ';
          }
        }
        return 0;
      }
      uVar3 = ___acrt_LCMapStringA
                        (param_3,iVar5,0x100,param_1,0xffffffff,0,0,*(undefined4 *)(*param_3 + 8),1)
      ;
      if (uVar3 == 0) {
        puVar2 = (undefined4 *)FUN_006f390a();
        *puVar2 = 0x2a;
        puVar2 = (undefined4 *)FUN_006f390a();
        return *puVar2;
      }
      if (param_2 < uVar3) {
        *param_1 = '\0';
        puVar2 = (undefined4 *)FUN_006f390a();
        uVar7 = 0x22;
        goto LAB_006f16fa;
      }
      uVar4 = -(uint)(uVar3 < uVar3 + 8) & uVar3 + 8;
      if (uVar4 != 0) {
        if (uVar4 < 0x401) {
          puVar2 = (undefined4 *)&stack0xffffffec;
          if (&stack0x00000000 != (undefined1 *)0x14) {
LAB_006f17ce:
            puVar2 = puVar2 + 2;
            if (puVar2 != (undefined4 *)0x0) {
              iVar5 = ___acrt_LCMapStringA
                                (param_3,*(undefined4 *)(*param_3 + 0xa8),0x100,param_1,0xffffffff,
                                 puVar2,uVar3,*(undefined4 *)(*param_3 + 8),1);
              if (iVar5 != 0) {
                uVar7 = FUN_006f8593(param_1,param_2,puVar2);
                FUN_006f184f(puVar2);
                return uVar7;
              }
              puVar6 = (undefined4 *)FUN_006f390a();
              uVar7 = 0x2a;
              *puVar6 = 0x2a;
              goto LAB_006f1836;
            }
          }
        }
        else {
          puVar2 = (undefined4 *)__malloc_base(uVar4);
          if (puVar2 != (undefined4 *)0x0) {
            *puVar2 = 0xdddd;
            goto LAB_006f17ce;
          }
        }
      }
      puVar2 = (undefined4 *)FUN_006f390a();
      *puVar2 = 0xc;
      puVar6 = (undefined4 *)FUN_006f390a();
      puVar2 = (undefined4 *)0x0;
      uVar7 = *puVar6;
LAB_006f1836:
      FUN_006f184f(puVar2);
      return uVar7;
    }
    *param_1 = '\0';
  }
  puVar2 = (undefined4 *)FUN_006f390a();
  uVar7 = 0x16;
LAB_006f16fa:
  *puVar2 = uVar7;
  FUN_006e8c2f();
  return uVar7;
}


/* ==== 006f184f  FUN_006f184f  size=32 ==== */

void FUN_006f184f(int param_1)

{
  if ((param_1 != 0) && (*(int *)(param_1 + -8) == 0xdddd)) {
    FUN_006f9a4d((int *)(param_1 + -8));
  }
  return;
}


/* ==== 006f1902  FUN_006f1902  size=27 ==== */

void FUN_006f1902(undefined4 param_1)

{
  FUN_006f9a4d(param_1,0);
  return;
}


/* ==== 006f191d  FUN_006f191d  size=11 ==== */

void FUN_006f191d(void)

{
  __malloc_base();
  return;
}


/* ==== 006f1928  common_fsopen<char>  size=157 ==== */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    struct _iobuf * __cdecl common_fsopen<char>(char const * const,char const * const,int)
   
   Library: Visual Studio 2019 Release */

_iobuf * __cdecl common_fsopen<char>(char *param_1,char *param_2,int param_3)

{
  undefined4 *puVar1;
  _iobuf *p_Var2;
  int local_20;
  void *local_14;
  
  if (((param_1 == (char *)0x0) || (param_2 == (char *)0x0)) || (*param_2 == '\0')) {
    puVar1 = (undefined4 *)FUN_006f390a();
    *puVar1 = 0x16;
    FUN_006e8c2f();
  }
  else if (*param_1 == '\0') {
    puVar1 = (undefined4 *)FUN_006f390a();
    *puVar1 = 0x16;
  }
  else {
    __acrt_stdio_allocate_stream();
    if (local_20 != 0) {
      p_Var2 = (_iobuf *)FUN_006fcd31(param_1,param_2,param_3,local_20);
      FUN_006f19c8();
      ExceptionList = local_14;
      return p_Var2;
    }
    puVar1 = (undefined4 *)FUN_006f390a();
    *puVar1 = 0x18;
  }
  ExceptionList = local_14;
  return (_iobuf *)0x0;
}


/* ==== 006f19c8  FUN_006f19c8  size=23 ==== */

void FUN_006f19c8(void)

{
  int unaff_EBP;
  int unaff_ESI;
  
  if (unaff_ESI == 0) {
    __acrt_stdio_free_stream(*(undefined4 *)(unaff_EBP + -0x1c));
  }
  __unlock_file(*(FILE **)(unaff_EBP + -0x1c));
  return;
}


/* ==== 006f1a78  FUN_006f1a78  size=583 ==== */

uint FUN_006f1a78(int param_1,char *param_2,undefined4 *param_3,uint param_4,byte param_5)

{
  byte bVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint local_10;
  char local_8;
  
  cVar3 = FUN_006ec2bb();
  uVar6 = param_4;
  pcVar2 = param_2;
  if (cVar3 == '\0') {
LAB_006f1abd:
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = param_2;
    }
    return 0;
  }
  if ((param_4 != 0) && (((int)param_4 < 2 || (0x24 < (int)param_4)))) {
    *(undefined1 *)(param_1 + 0x1c) = 1;
    *(undefined4 *)(param_1 + 0x18) = 0x16;
    FUN_006e8bb2(0,0,0,0,0,param_1);
    goto LAB_006f1abd;
  }
  local_10 = 0;
  local_8 = *param_2;
  param_2 = param_2 + 1;
  if (*(char *)(param_1 + 0x14) == '\0') {
    FUN_006ec260();
  }
  while (iVar4 = FUN_006f1682(local_8,8,param_1 + 0xc), iVar4 != 0) {
    local_8 = *param_2;
    param_2 = param_2 + 1;
  }
  if (local_8 == '-') {
    bVar1 = param_5 | 2;
LAB_006f1b33:
    local_8 = *param_2;
    param_2 = param_2 + 1;
  }
  else {
    bVar1 = param_5;
    if (local_8 == '+') goto LAB_006f1b33;
  }
  if ((uVar6 != 0) && (uVar6 != 0x10)) goto LAB_006f1bc0;
  if ((byte)(local_8 - 0x30U) < 10) {
    iVar4 = local_8 + -0x30;
LAB_006f1b7b:
    if (iVar4 == 0) {
      cVar3 = *param_2;
      if ((cVar3 == 'x') || (cVar3 == 'X')) {
        if (uVar6 == 0) {
          uVar6 = 0x10;
        }
        local_8 = param_2[1];
        param_2 = param_2 + 2;
      }
      else {
        if (uVar6 == 0) {
          uVar6 = 8;
        }
        param_2 = param_2 + 1;
        __crt_strtox::c_string_character_source<char>::unget
                  ((c_string_character_source<char> *)&param_2,cVar3);
      }
      goto LAB_006f1bc0;
    }
  }
  else {
    if ((byte)(local_8 + 0x9fU) < 0x1a) {
      iVar4 = local_8 + -0x57;
      goto LAB_006f1b7b;
    }
    if ((byte)(local_8 + 0xbfU) < 0x1a) {
      iVar4 = local_8 + -0x37;
      goto LAB_006f1b7b;
    }
  }
  if (uVar6 == 0) {
    uVar6 = 10;
  }
LAB_006f1bc0:
  while( true ) {
    if ((byte)(local_8 - 0x30U) < 10) {
      uVar5 = (int)local_8 - 0x30;
    }
    else if ((byte)(local_8 + 0x9fU) < 0x1a) {
      uVar5 = (int)local_8 - 0x57;
    }
    else if ((byte)(local_8 + 0xbfU) < 0x1a) {
      uVar5 = (int)local_8 - 0x37;
    }
    else {
      uVar5 = 0xffffffff;
    }
    if (uVar6 <= uVar5) break;
    uVar5 = local_10 * uVar6 + uVar5;
    local_8 = *param_2;
    bVar1 = bVar1 | (uVar5 < local_10 * uVar6 || (uint)(0xffffffff / (ulonglong)uVar6) < local_10)
                    << 2 | 8U;
    param_2 = param_2 + 1;
    local_10 = uVar5;
  }
  __crt_strtox::c_string_character_source<char>::unget
            ((c_string_character_source<char> *)&param_2,local_8);
  if ((bVar1 & 8) == 0) {
    if (param_3 == (undefined4 *)0x0) {
      return 0;
    }
    *param_3 = pcVar2;
    return 0;
  }
  cVar3 = FUN_006e9eec(bVar1,local_10);
  if (cVar3 == '\0') {
    if ((bVar1 & 2) != 0) {
      local_10 = -local_10;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x1c) = 1;
    *(undefined4 *)(param_1 + 0x18) = 0x22;
    if ((bVar1 & 1) != 0) {
      if ((bVar1 & 2) == 0) {
        if (param_3 != (undefined4 *)0x0) {
          *param_3 = param_2;
        }
        return 0x7fffffff;
      }
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = param_2;
      }
      return 0x80000000;
    }
    local_10 = 0xffffffff;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = param_2;
    return local_10;
  }
  return local_10;
}


/* ==== 006f1cbf  FUN_006f1cbf  size=1550 ==== */

uint FUN_006f1cbf(int param_1,wchar_t *param_2,undefined4 *param_3,uint param_4,byte param_5)

{
  ushort *puVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  ushort uVar6;
  wchar_t wVar7;
  uint uVar8;
  uint uVar9;
  wint_t _C;
  wchar_t local_8c;
  wchar_t local_88;
  int local_c;
  uint local_8;
  
  cVar2 = FUN_006ec2bb();
  uVar9 = param_4;
  puVar1 = (ushort *)param_2;
  if (cVar2 == '\0') {
LAB_006f1d08:
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = param_2;
    }
    return 0;
  }
  if ((param_4 != 0) && (((int)param_4 < 2 || (0x24 < (int)param_4)))) {
    *(undefined1 *)(param_1 + 0x1c) = 1;
    *(undefined4 *)(param_1 + 0x18) = 0x16;
    FUN_006e8bb2(0,0,0,0,0,param_1);
    goto LAB_006f1d08;
  }
  local_8 = 0;
  uVar8 = (uint)(ushort)*param_2;
  param_2 = param_2 + 1;
  if (*(char *)(param_1 + 0x14) == '\0') {
    FUN_006ec260();
  }
  while( true ) {
    _C = (wint_t)uVar8;
    iVar3 = _iswctype(_C,8);
    if (iVar3 == 0) break;
    uVar8 = (uint)(ushort)*param_2;
    param_2 = param_2 + 1;
  }
  if (_C == 0x2d) {
    bVar5 = param_5 | 2;
LAB_006f1d72:
    uVar8 = (uint)(ushort)*param_2;
    param_2 = param_2 + 1;
  }
  else {
    bVar5 = param_5;
    if (_C == 0x2b) goto LAB_006f1d72;
  }
  local_c = 0x660;
  if ((uVar9 != 0) && (uVar9 != 0x10)) goto LAB_006f2071;
  uVar6 = (ushort)uVar8;
  if (uVar6 < 0x30) goto LAB_006f1ffe;
  iVar3 = 0x30;
  if (uVar6 < 0x3a) {
LAB_006f1ea1:
    iVar3 = -iVar3;
LAB_006f1ff9:
    iVar3 = uVar8 + iVar3;
    if (iVar3 == -1) goto LAB_006f1ffe;
LAB_006f2023:
    if (iVar3 == 0) {
      wVar7 = *param_2;
      if ((wVar7 == L'x') || (wVar7 == L'X')) {
        if (uVar9 == 0) {
          uVar9 = 0x10;
          param_4 = 0x10;
        }
        uVar8 = (uint)(ushort)param_2[1];
        param_2 = param_2 + 2;
      }
      else {
        if (uVar9 == 0) {
          uVar9 = 8;
          param_4 = 8;
        }
        param_2 = param_2 + 1;
        __crt_strtox::c_string_character_source<wchar_t>::unget
                  ((c_string_character_source<wchar_t> *)&param_2,wVar7);
      }
      goto LAB_006f2071;
    }
  }
  else {
    if (uVar6 < 0xff10) {
      if ((0x65f < uVar6) &&
         ((iVar3 = local_c, uVar6 < 0x66a ||
          ((iVar3 = 0x6f0, 0x6ef < uVar6 &&
           ((uVar6 < 0x6fa ||
            ((iVar3 = 0x966, 0x965 < uVar6 &&
             ((uVar6 < 0x970 ||
              ((iVar3 = 0x9e6, 0x9e5 < uVar6 &&
               ((uVar6 < 0x9f0 ||
                ((iVar3 = 0xa66, 0xa65 < uVar6 &&
                 ((uVar6 < 0xa70 ||
                  ((iVar3 = 0xae6, 0xae5 < uVar6 &&
                   ((uVar6 < 0xaf0 ||
                    ((iVar3 = 0xb66, 0xb65 < uVar6 &&
                     ((uVar6 < 0xb70 ||
                      ((iVar3 = 0xc66, 0xc65 < uVar6 &&
                       ((uVar6 < 0xc70 ||
                        ((iVar3 = 0xce6, 0xce5 < uVar6 &&
                         ((uVar6 < 0xcf0 ||
                          ((iVar3 = 0xd66, 0xd65 < uVar6 &&
                           ((uVar6 < 0xd70 ||
                            ((iVar3 = 0xe50, 0xe4f < uVar6 &&
                             ((uVar6 < 0xe5a ||
                              ((iVar3 = 0xed0, 0xecf < uVar6 &&
                               ((uVar6 < 0xeda ||
                                ((iVar3 = 0xf20, 0xf1f < uVar6 &&
                                 ((uVar6 < 0xf2a ||
                                  ((iVar3 = 0x1040, 0x103f < uVar6 &&
                                   ((uVar6 < 0x104a ||
                                    ((iVar3 = 0x17e0, 0x17df < uVar6 &&
                                     ((uVar6 < 0x17ea ||
                                      ((iVar3 = 0x1810, 0x180f < uVar6 && (uVar6 < 0x181a)))))))))))
                                  )))))))))))))))))))))))))))))))))))))))))))))))))))
      goto LAB_006f1ea1;
    }
    else if (uVar6 < 0xff1a) {
      iVar3 = -0xff10;
      goto LAB_006f1ff9;
    }
LAB_006f1ffe:
    if (((0x40 < uVar8) && (uVar8 < 0x5b)) || (uVar8 - 0x61 < 0x1a)) {
      uVar4 = uVar8;
      if (uVar8 - 0x61 < 0x1a) {
        uVar4 = uVar8 - 0x20;
      }
      iVar3 = uVar4 - 0x37;
      goto LAB_006f2023;
    }
  }
  if (uVar9 == 0) {
    uVar9 = 10;
    param_4 = 10;
  }
LAB_006f2071:
  do {
    wVar7 = (wchar_t)uVar8;
    if ((ushort)wVar7 < 0x30) {
LAB_006f21d6:
      if (((uVar8 < 0x41) || (0x5a < uVar8)) && ((uVar8 < 0x61 || (0x7a < (ushort)wVar7)))) {
        uVar4 = 0xffffffff;
      }
      else {
        if ((ushort)(wVar7 + L'ﾟ') < 0x1a) {
          uVar8 = uVar8 - 0x20;
        }
        uVar4 = uVar8 - 0x37;
      }
    }
    else {
      if (0x39 < (ushort)wVar7) {
        iVar3 = 0xff10;
        if ((ushort)wVar7 < 0xff10) {
          iVar3 = 0x660;
          if (0x65f < (ushort)wVar7) {
            if ((ushort)wVar7 < 0x66a) {
LAB_006f21cc:
              iVar3 = -iVar3;
              goto LAB_006f21d1;
            }
            iVar3 = 0x6f0;
            if (0x6ef < (ushort)wVar7) {
              if ((ushort)wVar7 < 0x6fa) goto LAB_006f21cc;
              iVar3 = 0x966;
              if (0x965 < (ushort)wVar7) {
                if ((ushort)wVar7 < 0x970) goto LAB_006f21cc;
                iVar3 = 0x9e6;
                if (0x9e5 < (ushort)wVar7) {
                  if ((ushort)wVar7 < 0x9f0) goto LAB_006f21cc;
                  iVar3 = 0xa66;
                  if (0xa65 < (ushort)wVar7) {
                    if ((ushort)wVar7 < 0xa70) goto LAB_006f21cc;
                    iVar3 = 0xae6;
                    if (0xae5 < (ushort)wVar7) {
                      if ((ushort)wVar7 < 0xaf0) goto LAB_006f21cc;
                      iVar3 = 0xb66;
                      if (0xb65 < (ushort)wVar7) {
                        if ((ushort)wVar7 < 0xb70) goto LAB_006f21cc;
                        iVar3 = 0xc66;
                        if (0xc65 < (ushort)wVar7) {
                          if ((ushort)wVar7 < 0xc70) goto LAB_006f21cc;
                          iVar3 = 0xce6;
                          if (0xce5 < (ushort)wVar7) {
                            if ((ushort)wVar7 < 0xcf0) goto LAB_006f21cc;
                            iVar3 = 0xd66;
                            if (0xd65 < (ushort)wVar7) {
                              if ((ushort)wVar7 < 0xd70) goto LAB_006f21cc;
                              iVar3 = 0xe50;
                              if (0xe4f < (ushort)wVar7) {
                                if ((ushort)wVar7 < 0xe5a) goto LAB_006f21cc;
                                iVar3 = 0xed0;
                                if (0xecf < (ushort)wVar7) {
                                  if ((ushort)wVar7 < 0xeda) goto LAB_006f21cc;
                                  iVar3 = 0xf20;
                                  if (0xf1f < (ushort)wVar7) {
                                    if ((ushort)wVar7 < 0xf2a) goto LAB_006f21cc;
                                    iVar3 = 0x1040;
                                    if (0x103f < (ushort)wVar7) {
                                      if ((ushort)wVar7 < 0x104a) goto LAB_006f21cc;
                                      iVar3 = 0x17e0;
                                      if (0x17df < (ushort)wVar7) {
                                        if ((ushort)wVar7 < 0x17ea) goto LAB_006f21cc;
                                        iVar3 = 0x1810;
                                        if (0x180f < (ushort)wVar7) {
                                          local_88 = L'᠚';
                                          goto LAB_006f21ca;
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
        }
        else {
          local_8c = L'：';
          local_88 = local_8c;
LAB_006f21ca:
          if ((ushort)wVar7 < (ushort)local_88) goto LAB_006f21cc;
        }
        goto LAB_006f21d6;
      }
      iVar3 = -0x30;
LAB_006f21d1:
      uVar4 = uVar8 + iVar3;
      if (uVar4 == 0xffffffff) goto LAB_006f21d6;
    }
    if (param_4 <= uVar4) {
      __crt_strtox::c_string_character_source<wchar_t>::unget
                ((c_string_character_source<wchar_t> *)&param_2,wVar7);
      if ((bVar5 & 8) == 0) {
        if (param_3 == (undefined4 *)0x0) {
          return 0;
        }
        *param_3 = puVar1;
        return 0;
      }
      cVar2 = FUN_006e9eec(bVar5,local_8);
      if (cVar2 == '\0') {
        if ((bVar5 & 2) != 0) {
          local_8 = -local_8;
        }
      }
      else {
        *(undefined1 *)(param_1 + 0x1c) = 1;
        *(undefined4 *)(param_1 + 0x18) = 0x22;
        if ((bVar5 & 1) != 0) {
          if ((bVar5 & 2) == 0) {
            if (param_3 != (undefined4 *)0x0) {
              *param_3 = param_2;
            }
            return 0x7fffffff;
          }
          if (param_3 != (undefined4 *)0x0) {
            *param_3 = param_2;
          }
          return 0x80000000;
        }
        local_8 = 0xffffffff;
      }
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = param_2;
        return local_8;
      }
      return local_8;
    }
    uVar4 = local_8 * param_4 + uVar4;
    bVar5 = bVar5 | (uVar4 < local_8 * param_4 || (uint)(0xffffffff / (ulonglong)uVar9) < local_8)
                    << 2 | 8U;
    uVar8 = (uint)(ushort)*param_2;
    param_2 = param_2 + 1;
    local_8 = uVar4;
  } while( true );
}


/* ==== 006f22cd  FUN_006f22cd  size=712 ==== */

/* WARNING: Removing unreachable block (ram,0x006f24b3) */
/* WARNING: Removing unreachable block (ram,0x006f24c6) */
/* WARNING: Type propagation algorithm not settling */

ulonglong FUN_006f22cd(int param_1,char *param_2,int *param_3,uint param_4,byte param_5)

{
  byte bVar1;
  ulonglong uVar2;
  char *pcVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int local_14;
  char local_c;
  
  cVar4 = FUN_006ec2bb();
  uVar7 = param_4;
  pcVar3 = param_2;
  if (cVar4 == '\0') {
LAB_006f2313:
    if (param_3 != (int *)0x0) {
      *param_3 = (int)param_2;
    }
    return 0;
  }
  if ((param_4 != 0) && (((int)param_4 < 2 || (0x24 < (int)param_4)))) {
    *(undefined1 *)(param_1 + 0x1c) = 1;
    *(undefined4 *)(param_1 + 0x18) = 0x16;
    FUN_006e8bb2(0,0,0,0,0,param_1);
    goto LAB_006f2313;
  }
  local_c = *param_2;
  param_2 = param_2 + 1;
  if (*(char *)(param_1 + 0x14) == '\0') {
    FUN_006ec260();
  }
  iVar5 = FUN_006f1682(local_c,8,param_1 + 0xc);
  while (iVar5 != 0) {
    local_c = *param_2;
    param_2 = param_2 + 1;
    iVar5 = FUN_006f1682(local_c,8,param_1 + 0xc);
    uVar7 = param_4;
  }
  if (local_c == '-') {
    bVar1 = param_5 | 2;
LAB_006f23a7:
    local_c = *param_2;
    param_2 = param_2 + 1;
  }
  else {
    bVar1 = param_5;
    if (local_c == '+') goto LAB_006f23a7;
  }
  if ((uVar7 != 0) && (uVar7 != 0x10)) goto LAB_006f2433;
  if ((byte)(local_c - 0x30U) < 10) {
    iVar5 = local_c + -0x30;
LAB_006f23ef:
    if (iVar5 == 0) {
      cVar4 = *param_2;
      if ((cVar4 == 'x') || (cVar4 == 'X')) {
        if (uVar7 == 0) {
          uVar7 = 0x10;
        }
        local_c = param_2[1];
        param_2 = param_2 + 2;
      }
      else {
        if (uVar7 == 0) {
          uVar7 = 8;
        }
        param_2 = param_2 + 1;
        __crt_strtox::c_string_character_source<char>::unget
                  ((c_string_character_source<char> *)&param_2,cVar4);
      }
      goto LAB_006f2433;
    }
  }
  else {
    if ((byte)(local_c + 0x9fU) < 0x1a) {
      iVar5 = local_c + -0x57;
      goto LAB_006f23ef;
    }
    if ((byte)(local_c + 0xbfU) < 0x1a) {
      iVar5 = local_c + -0x37;
      goto LAB_006f23ef;
    }
  }
  if (uVar7 == 0) {
    uVar7 = 10;
  }
LAB_006f2433:
  uVar8 = __aulldiv(0xffffffff,0xffffffff,uVar7,(int)uVar7 >> 0x1f);
  uVar2 = 0;
  while( true ) {
    local_14 = (int)uVar2;
    if ((byte)(local_c - 0x30U) < 10) {
      uVar6 = (int)local_c - 0x30;
    }
    else if ((byte)(local_c + 0x9fU) < 0x1a) {
      uVar6 = (int)local_c - 0x57;
    }
    else if ((byte)(local_c + 0xbfU) < 0x1a) {
      uVar6 = (int)local_c - 0x37;
    }
    else {
      uVar6 = 0xffffffff;
    }
    if (uVar7 <= uVar6) break;
    uVar9 = __allmul(uVar7,(int)uVar7 >> 0x1f,uVar2);
    bVar1 = bVar1 | (uVar9 + uVar6 < uVar9 || uVar8 < uVar2) << 2 | 8U;
    local_c = *param_2;
    param_2 = param_2 + 1;
    uVar2 = uVar9 + uVar6;
  }
  __crt_strtox::c_string_character_source<char>::unget
            ((c_string_character_source<char> *)&param_2,local_c);
  if ((bVar1 & 8) == 0) {
    if (param_3 == (int *)0x0) {
      return 0;
    }
    *param_3 = (int)pcVar3;
    return 0;
  }
  cVar4 = FUN_006ecd6f(bVar1,uVar2);
  if (cVar4 == '\0') {
    if ((bVar1 & 2) != 0) {
      uVar2 = CONCAT44(-((int)(uVar2 >> 0x20) + (uint)(local_14 != 0)),-local_14);
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x1c) = 1;
    *(undefined4 *)(param_1 + 0x18) = 0x22;
    if ((bVar1 & 1) != 0) {
      if ((bVar1 & 2) == 0) {
        if (param_3 != (int *)0x0) {
          *param_3 = (int)param_2;
        }
        return 0x7fffffffffffffff;
      }
      if (param_3 != (int *)0x0) {
        *param_3 = (int)param_2;
      }
      return 0x8000000000000000;
    }
    uVar2 = 0xffffffffffffffff;
  }
  if (param_3 != (int *)0x0) {
    *param_3 = (int)param_2;
    return uVar2;
  }
  return uVar2;
}


/* ==== 006f25d4  common_atof_l<>  size=100 ==== */

/* Library Function - Multiple Matches With Same Base Name
    double __cdecl common_atof_l<char>(char const * const,struct __crt_locale_pointers * const)
    double __cdecl common_atof_l<wchar_t>(wchar_t const * const,struct __crt_locale_pointers *
   const)
   
   Library: Visual Studio 2019 Release */

float10 common_atof_l<>(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  float10 fVar2;
  int local_20;
  undefined1 local_1c [8];
  char local_14;
  double local_10;
  
  if (param_1 == 0) {
    puVar1 = (undefined4 *)FUN_006f390a();
    *puVar1 = 0x16;
    FUN_006e8c2f();
    fVar2 = (float10)0;
  }
  else {
    FUN_006ee0ac(param_2);
    local_10 = 0.0;
    FUN_006f26b8(local_1c,param_1,0,&local_10);
    fVar2 = (float10)local_10;
    if (local_14 != '\0') {
      *(uint *)(local_20 + 0x350) = *(uint *)(local_20 + 0x350) & 0xfffffffd;
    }
  }
  return fVar2;
}


/* ==== 006f2638  FUN_006f2638  size=128 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

SLD_STATUS FUN_006f2638(int param_1,undefined4 param_2,undefined4 *param_3,float *param_4)

{
  float *pfVar1;
  undefined4 *puVar2;
  SLD_STATUS SVar3;
  floating_point_parse_result fVar4;
  floating_point_string local_314 [780];
  uint local_8;
  
  pfVar1 = param_4;
  local_8 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  if ((param_4 == (float *)0x0) || (param_1 == 0)) {
    puVar2 = (undefined4 *)FUN_006f390a();
    *puVar2 = 0x16;
    FUN_006e8c2f();
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = param_2;
    }
    SVar3 = 1;
  }
  else {
    fVar4 = FUN_006f2738(param_1,&param_2,local_314);
    SVar3 = __crt_strtox::parse_floating_point_write_result<float>(fVar4,local_314,pfVar1);
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = param_2;
    }
  }
  return SVar3;
}


/* ==== 006f26b8  FUN_006f26b8  size=128 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

SLD_STATUS FUN_006f26b8(int param_1,undefined4 param_2,undefined4 *param_3,double *param_4)

{
  double *pdVar1;
  undefined4 *puVar2;
  SLD_STATUS SVar3;
  floating_point_parse_result fVar4;
  floating_point_string local_314 [780];
  uint local_8;
  
  pdVar1 = param_4;
  local_8 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  if ((param_4 == (double *)0x0) || (param_1 == 0)) {
    puVar2 = (undefined4 *)FUN_006f390a();
    *puVar2 = 0x16;
    FUN_006e8c2f();
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = param_2;
    }
    SVar3 = 1;
  }
  else {
    fVar4 = FUN_006f2738(param_1,&param_2,local_314);
    SVar3 = __crt_strtox::parse_floating_point_write_result<double>(fVar4,local_314,pdVar1);
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = param_2;
    }
  }
  return SVar3;
}


/* ==== 006f2738  FUN_006f2738  size=1048 ==== */

uint FUN_006f2738(int *param_1,c_string_character_source<char> *param_2,int *param_3)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  char cVar7;
  char *pcVar8;
  byte *pbVar9;
  int *piVar10;
  uint uVar11;
  c_string_character_source<char> *local_2c;
  byte *local_28;
  byte **local_24;
  uint local_20;
  int *local_1c;
  byte *local_18;
  int local_14;
  int *local_10;
  byte local_a [4];
  char local_6;
  byte local_5;
  
  cVar1 = FUN_006ec2bb();
  if (cVar1 == '\0') {
    return 7;
  }
  local_18 = *(byte **)param_2;
  local_2c = param_2;
  bVar6 = *local_18;
  *(byte **)param_2 = local_18 + 1;
  local_28 = local_a;
  local_24 = &local_18;
  while( true ) {
    local_a[0] = bVar6;
    iVar4 = FUN_006f1682(bVar6,8,param_1);
    if (iVar4 == 0) break;
    bVar6 = **(byte **)param_2;
    *(byte **)param_2 = *(byte **)param_2 + 1;
  }
  local_1c = param_3 + 0xc2;
  *(bool *)local_1c = local_a[0] == 0x2d;
  if ((local_a[0] == 0x2d) || (bVar6 = local_a[0], local_a[0] == 0x2b)) {
    bVar6 = **(byte **)param_2;
    *(byte **)param_2 = *(byte **)param_2 + 1;
    local_a[0] = bVar6;
  }
  if ((bVar6 == 0x49) || (bVar6 == 0x69)) {
    uVar11 = FUN_006f2b50(local_a,param_2,local_18);
    return uVar11;
  }
  if ((bVar6 == 0x4e) || (bVar6 == 0x6e)) {
    uVar11 = FUN_006f2c03(local_a,param_2,local_18);
    return uVar11;
  }
  iVar4 = 0;
  local_5 = 0;
  if (bVar6 == 0x30) {
    pbVar9 = *(byte **)param_2;
    bVar6 = *pbVar9;
    local_14 = CONCAT31(local_14._1_3_,bVar6);
    *(byte **)param_2 = pbVar9 + 1;
    if ((bVar6 == 0x78) || (bVar6 == 0x58)) {
      bVar6 = pbVar9[1];
      local_5 = 1;
      *(byte **)param_2 = pbVar9 + 2;
      local_a[0] = bVar6;
      local_18 = pbVar9;
    }
    else {
      __crt_strtox::c_string_character_source<char>::unget(param_2,bVar6);
      bVar6 = local_a[0];
    }
  }
  uVar11 = (uint)bVar6;
  local_10 = param_3 + 2;
  if (bVar6 == 0x30) {
    uVar11 = 0x100;
    do {
      cVar1 = **(char **)param_2;
      uVar11 = CONCAT31((int3)(uVar11 >> 8),cVar1);
      *(char **)param_2 = *(char **)param_2 + 1;
      local_a[0] = cVar1;
    } while (cVar1 == '0');
  }
  local_20 = ((local_5 == 0) - 1 & 6) + 9;
  while( true ) {
    cVar1 = (char)uVar11;
    if ((byte)(cVar1 - 0x30U) < 10) {
      uVar5 = (int)cVar1 - 0x30;
    }
    else if ((byte)(cVar1 + 0x9fU) < 0x1a) {
      uVar5 = (int)cVar1 - 0x57;
    }
    else if ((byte)(cVar1 + 0xbfU) < 0x1a) {
      uVar5 = (int)cVar1 - 0x37;
    }
    else {
      uVar5 = 0xffffffff;
    }
    if (local_20 < uVar5) break;
    if (local_10 != local_1c) {
      *(char *)local_10 = (char)uVar5;
      local_10 = (int *)((int)local_10 + 1);
    }
    iVar4 = iVar4 + 1;
    local_a[0] = **(undefined1 **)param_2;
    uVar11 = (uint)CONCAT11(1,local_a[0]);
    *(undefined1 **)param_2 = *(undefined1 **)param_2 + 1;
  }
  local_14 = iVar4;
  if (cVar1 == *(char *)**(undefined4 **)(*param_1 + 0x88)) {
    pcVar8 = *(char **)param_2 + 1;
    cVar1 = **(char **)param_2;
    uVar11 = CONCAT31((int3)(uVar11 >> 8),cVar1);
    *(char **)param_2 = pcVar8;
    local_a[0] = cVar1;
    if ((local_10 == param_3 + 2) && (cVar1 == '0')) {
      uVar11 = 0x100;
      do {
        cVar1 = *pcVar8;
        uVar11 = CONCAT31((int3)(uVar11 >> 8),cVar1);
        iVar4 = iVar4 + -1;
        pcVar8 = pcVar8 + 1;
        local_a[0] = cVar1;
        *(char **)param_2 = pcVar8;
        local_14 = iVar4;
      } while (cVar1 == '0');
    }
    while( true ) {
      cVar7 = (char)uVar11;
      if ((cVar1 < '0') || ('9' < cVar1)) {
        if ((byte)(cVar7 + 0x9fU) < 0x1a) {
          uVar5 = (int)cVar7 - 0x57;
        }
        else if ((byte)(cVar7 + 0xbfU) < 0x1a) {
          uVar5 = (int)cVar7 - 0x37;
        }
        else {
          uVar5 = 0xffffffff;
        }
      }
      else {
        uVar5 = (int)cVar7 - 0x30;
      }
      if (local_20 < uVar5) break;
      if (local_10 != local_1c) {
        *(char *)local_10 = (char)uVar5;
        local_10 = (int *)((int)local_10 + 1);
      }
      cVar1 = **(char **)param_2;
      uVar11 = (uint)CONCAT11(1,cVar1);
      *(char **)param_2 = *(char **)param_2 + 1;
      local_a[0] = cVar1;
    }
  }
  iVar4 = 0;
  if ((char)(uVar11 >> 8) == '\0') {
    bVar2 = <lambda_32aa245da1b5b882fa96db788295c8b2>::operator()
                      ((<lambda_32aa245da1b5b882fa96db788295c8b2> *)&local_2c);
    if (!bVar2) {
      return 7;
    }
    if (local_5 == 0) {
      return 7;
    }
    return 2;
  }
  __crt_strtox::c_string_character_source<char>::unget(param_2,local_a[0]);
  local_18 = *(byte **)param_2;
  bVar6 = *local_18;
  *(byte **)param_2 = local_18 + 1;
  if (bVar6 == 0x45) {
LAB_006f29a7:
    bVar3 = local_5 ^ 1;
  }
  else if (bVar6 == 0x50) {
LAB_006f29a2:
    bVar3 = local_5;
  }
  else {
    if (bVar6 == 0x65) goto LAB_006f29a7;
    bVar3 = 0;
    if (bVar6 == 0x70) goto LAB_006f29a2;
  }
  local_a[0] = bVar6;
  if (bVar3 != 0) {
    bVar6 = local_18[1];
    pbVar9 = local_18 + 2;
    *(byte **)param_2 = pbVar9;
    if ((bVar6 == 0x2b) || (bVar3 = bVar6, bVar6 == 0x2d)) {
      bVar3 = *pbVar9;
      pbVar9 = local_18 + 3;
      *(byte **)param_2 = pbVar9;
    }
    uVar11 = (uint)CONCAT11(bVar6,bVar3);
    local_6 = '\0';
    local_a[0] = bVar3;
    if (bVar3 != 0x30) goto LAB_006f29f6;
    do {
      local_a[0] = *pbVar9;
      uVar11 = CONCAT31((int3)(uVar11 >> 8),local_a[0]);
      pbVar9 = pbVar9 + 1;
      *(byte **)param_2 = pbVar9;
    } while (local_a[0] == 0x30);
    while( true ) {
      local_6 = '\x01';
      bVar3 = (byte)uVar11;
LAB_006f29f6:
      cVar1 = (char)uVar11;
      if (((char)bVar3 < '0') || ('9' < (char)local_a[0])) {
        if ((byte)(cVar1 + 0x9fU) < 0x1a) {
          uVar5 = (int)cVar1 - 0x57;
        }
        else {
          if (0x19 < (byte)(cVar1 + 0xbfU)) goto LAB_006f2a4a;
          uVar5 = (int)cVar1 - 0x37;
        }
      }
      else {
        uVar5 = (int)cVar1 - 0x30;
      }
      if (9 < uVar5) goto LAB_006f2a4a;
      local_6 = '\x01';
      iVar4 = iVar4 * 10 + uVar5;
      if (0x1450 < iVar4) break;
      local_a[0] = *pbVar9;
      uVar11 = CONCAT31((int3)(uVar11 >> 8),local_a[0]);
      pbVar9 = pbVar9 + 1;
      *(byte **)param_2 = pbVar9;
    }
    iVar4 = 0x1451;
LAB_006f2a4a:
    do {
      cVar1 = (char)uVar11;
      if ((byte)(cVar1 - 0x30U) < 10) {
        uVar5 = (int)cVar1 - 0x30;
      }
      else if ((byte)(cVar1 + 0x9fU) < 0x1a) {
        uVar5 = (int)cVar1 - 0x57;
      }
      else {
        if (0x19 < (byte)(cVar1 + 0xbfU)) goto LAB_006f2a87;
        uVar5 = (int)cVar1 - 0x37;
      }
      if (9 < uVar5) goto LAB_006f2a87;
      local_a[0] = *pbVar9;
      uVar11 = CONCAT31((int3)(uVar11 >> 8),local_a[0]);
      pbVar9 = pbVar9 + 1;
      *(byte **)param_2 = pbVar9;
    } while( true );
  }
LAB_006f2aae:
  __crt_strtox::c_string_character_source<char>::unget(param_2,local_a[0]);
  do {
    piVar10 = local_10;
    if (piVar10 == param_3 + 2) {
      return 2;
    }
    local_10 = (int *)((int)piVar10 + -1);
  } while (*(char *)((int)piVar10 + -1) == '\0');
  if (iVar4 < 0x1451) {
    if (-0x1451 < iVar4) {
      iVar4 = iVar4 + (((local_5 == 0) - 1 & 3) + 1) * local_14;
      if (0x1450 < iVar4) goto LAB_006f2b25;
      if (-0x1451 < iVar4) {
        *param_3 = iVar4;
        param_3[1] = (int)piVar10 - (int)(param_3 + 2);
        return (uint)local_5;
      }
    }
    uVar11 = 8;
  }
  else {
LAB_006f2b25:
    uVar11 = 9;
  }
  return uVar11;
LAB_006f2a87:
  if ((char)(uVar11 >> 8) == '-') {
    iVar4 = -iVar4;
  }
  if (local_6 == '\0') {
    bVar2 = <lambda_32aa245da1b5b882fa96db788295c8b2>::operator()
                      ((<lambda_32aa245da1b5b882fa96db788295c8b2> *)&local_2c);
    if (!bVar2) {
      return 7;
    }
    local_a[0] = **(byte **)param_2;
    *(byte **)param_2 = *(byte **)param_2 + 1;
  }
  goto LAB_006f2aae;
}


/* ==== 006f2b50  FUN_006f2b50  size=179 ==== */

char FUN_006f2b50(char *param_1,c_string_character_source<char> *param_2,char *param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  c_string_character_source<char> *local_14;
  char *local_10;
  undefined4 *local_c;
  char local_8;
  undefined3 uStack_7;
  
  local_c = &param_3;
  iVar4 = 0;
  local_14 = param_2;
  local_10 = param_1;
  iVar3 = 0;
  while ((*param_1 == (&DAT_00732768)[iVar3] || (*param_1 == (&DAT_0073276c)[iVar3]))) {
    cVar2 = **(char **)param_2;
    iVar3 = iVar3 + 1;
    *(char **)param_2 = *(char **)param_2 + 1;
    _local_8 = CONCAT31(uStack_7,cVar2);
    *param_1 = cVar2;
    if (iVar3 == 3) {
      __crt_strtox::c_string_character_source<char>::unget(param_2,cVar2);
      param_3 = *(char **)param_2;
      cVar2 = *param_3;
      *(char **)param_2 = param_3 + 1;
      *param_1 = cVar2;
      while ((cVar2 == "INITY"[iVar4] || (cVar2 == "inity"[iVar4]))) {
        cVar2 = **(char **)param_2;
        iVar4 = iVar4 + 1;
        *(char **)param_2 = *(char **)param_2 + 1;
        _local_8 = CONCAT31(uStack_7,cVar2);
        *param_1 = cVar2;
        if (iVar4 == 5) {
          __crt_strtox::c_string_character_source<char>::unget(param_2,cVar2);
          return '\x03';
        }
      }
      bVar1 = <lambda_32aa245da1b5b882fa96db788295c8b2>::operator()
                        ((<lambda_32aa245da1b5b882fa96db788295c8b2> *)&local_14);
      return !bVar1 * '\x04' + '\x03';
    }
  }
  <lambda_32aa245da1b5b882fa96db788295c8b2>::operator()
            ((<lambda_32aa245da1b5b882fa96db788295c8b2> *)&local_14);
  return '\a';
}


/* ==== 006f2c03  FUN_006f2c03  size=260 ==== */

int FUN_006f2c03(char *param_1,c_string_character_source<char> *param_2,char *param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  c_string_character_source<char> *local_14;
  char *local_10;
  undefined4 *local_c;
  char local_8;
  undefined3 uStack_7;
  
  local_c = &param_3;
  iVar3 = 0;
  local_14 = param_2;
  local_10 = param_1;
  do {
    if ((*param_1 != (&DAT_00732780)[iVar3]) && (*param_1 != (&DAT_00732784)[iVar3])) {
      <lambda_32aa245da1b5b882fa96db788295c8b2>::operator()
                ((<lambda_32aa245da1b5b882fa96db788295c8b2> *)&local_14);
      return 7;
    }
    cVar1 = **(char **)param_2;
    iVar3 = iVar3 + 1;
    *(char **)param_2 = *(char **)param_2 + 1;
    _local_8 = CONCAT31(uStack_7,cVar1);
    *param_1 = cVar1;
  } while (iVar3 != 3);
  __crt_strtox::c_string_character_source<char>::unget(param_2,cVar1);
  param_3 = *(char **)param_2;
  cVar1 = *param_3;
  *(char **)param_2 = param_3 + 1;
  *param_1 = cVar1;
  if (cVar1 == '(') {
    cVar1 = **(char **)param_2;
    *(char **)param_2 = *(char **)param_2 + 1;
    *param_1 = cVar1;
    bVar2 = __crt_strtox::
            parse_floating_point_possible_nan_is_snan<char,__crt_strtox::c_string_character_source<char>_>
                      (param_1,param_2);
    if (bVar2) {
      __crt_strtox::c_string_character_source<char>::unget(param_2,*param_1);
      iVar3 = 5;
    }
    else {
      bVar2 = __crt_strtox::
              parse_floating_point_possible_nan_is_ind<char,__crt_strtox::c_string_character_source<char>_>
                        (param_1,param_2);
      cVar1 = *param_1;
      if (bVar2) {
        __crt_strtox::c_string_character_source<char>::unget(param_2,cVar1);
        iVar3 = 6;
      }
      else {
        while (cVar1 != ')') {
          if ((cVar1 == '\0') ||
             ((((9 < (byte)(cVar1 - 0x30U) && (0x19 < (byte)(cVar1 + 0x9fU))) &&
               (0x19 < (byte)(cVar1 + 0xbfU))) && (cVar1 != '_')))) goto LAB_006f2c60;
          cVar1 = **(char **)param_2;
          *(char **)param_2 = *(char **)param_2 + 1;
          *param_1 = cVar1;
        }
        iVar3 = 4;
      }
    }
  }
  else {
LAB_006f2c60:
    bVar2 = <lambda_32aa245da1b5b882fa96db788295c8b2>::operator()
                      ((<lambda_32aa245da1b5b882fa96db788295c8b2> *)&local_14);
    iVar3 = (-(uint)bVar2 & 0xfffffffd) + 7;
  }
  return iVar3;
}


/* ==== 006f2d07  parse_floating_point_possible_nan_is_ind<char,__crt_strtox::c_string_character_source<char>_>  size=60 ==== */

/* Library Function - Single Match
    bool __cdecl __crt_strtox::parse_floating_point_possible_nan_is_ind<char,class
   __crt_strtox::c_string_character_source<char> >(char &,class
   __crt_strtox::c_string_character_source<char> &)
   
   Library: Visual Studio 2015 Release */

bool __cdecl
__crt_strtox::
parse_floating_point_possible_nan_is_ind<char,__crt_strtox::c_string_character_source<char>_>
          (char *param_1,c_string_character_source<char> *param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = 0;
  while ((*param_1 == "IND)ind)COMSPEC"[iVar2] || (*param_1 == "IND)ind)COMSPEC"[iVar2 + 4]))) {
    cVar1 = **(char **)param_2;
    iVar2 = iVar2 + 1;
    *(char **)param_2 = *(char **)param_2 + 1;
    *param_1 = cVar1;
    if (iVar2 == 4) {
      return true;
    }
  }
  return false;
}


/* ==== 006f2d43  parse_floating_point_possible_nan_is_snan<char,__crt_strtox::c_string_character_source<char>_>  size=60 ==== */

/* Library Function - Single Match
    bool __cdecl __crt_strtox::parse_floating_point_possible_nan_is_snan<char,class
   __crt_strtox::c_string_character_source<char> >(char &,class
   __crt_strtox::c_string_character_source<char> &)
   
   Library: Visual Studio 2015 Release */

bool __cdecl
__crt_strtox::
parse_floating_point_possible_nan_is_snan<char,__crt_strtox::c_string_character_source<char>_>
          (char *param_1,c_string_character_source<char> *param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = 0;
  while ((*param_1 == (&DAT_00732788)[iVar2] || (*param_1 == (&DAT_00732790)[iVar2]))) {
    cVar1 = **(char **)param_2;
    iVar2 = iVar2 + 1;
    *(char **)param_2 = *(char **)param_2 + 1;
    *param_1 = cVar1;
    if (iVar2 == 5) {
      return true;
    }
  }
  return false;
}


/* ==== 006f2d7f  operator()  size=38 ==== */

/* Library Function - Single Match
    public: bool __thiscall <lambda_32aa245da1b5b882fa96db788295c8b2>::operator()(void)const 
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

bool __thiscall
<lambda_32aa245da1b5b882fa96db788295c8b2>::operator()
          (<lambda_32aa245da1b5b882fa96db788295c8b2> *this)

{
  __crt_strtox::c_string_character_source<char>::unget
            (*(c_string_character_source<char> **)this,**(char **)(this + 4));
  **(undefined1 **)(this + 4) = 0;
  **(undefined4 **)this = **(undefined4 **)(this + 8);
  return true;
}


/* ==== 006f2da5  FID_conflict:_atof  size=19 ==== */

/* Library Function - Multiple Matches With Different Base Names
    __wtof
    _atof
   
   Library: Visual Studio 2019 Release */

double __cdecl FID_conflict__atof(wchar_t *_Str)

{
  float10 fVar1;
  
  fVar1 = (float10)common_atof_l<>(_Str,0);
  return (double)fVar1;
}


/* ==== 006f2db8  FUN_006f2db8  size=83 ==== */

int FUN_006f2db8(char *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  
  if (param_1 != (char *)0x0) {
    pcVar4 = param_1;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    iVar2 = FUN_006f191d(pcVar4 + (1 - (int)(param_1 + 1)));
    if (iVar2 != 0) {
      iVar3 = FUN_006f8593(iVar2,pcVar4 + (1 - (int)(param_1 + 1)),param_1);
      if (iVar3 == 0) {
        return iVar2;
      }
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
  }
  return 0;
}


/* ==== 006f2f34  operator()<>  size=76 ==== */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Multiple Matches With Same Base Name
    public: int __thiscall __crt_seh_guarded_call<int>::operator()<class
   <lambda_274ecf0a8038e561263518ab346655e8>,class <lambda_21448eb78dd3c4a522ed7c65a98d88e6> &,class
   <lambda_0ca1de2171e49cefb1e8dc85c06db622> >(class <lambda_274ecf0a8038e561263518ab346655e8>
   &&,class <lambda_21448eb78dd3c4a522ed7c65a98d88e6> &,class
   <lambda_0ca1de2171e49cefb1e8dc85c06db622> &&)
    public: int __thiscall __crt_seh_guarded_call<int>::operator()<class
   <lambda_36ac44d44c28c1398f5e169dd4192dec>,class <lambda_3a6df4a947a8aa82799204b10582e979> &,class
   <lambda_252de749fd308ba532c6dc89db3d4ff4> >(class <lambda_36ac44d44c28c1398f5e169dd4192dec>
   &&,class <lambda_3a6df4a947a8aa82799204b10582e979> &,class
   <lambda_252de749fd308ba532c6dc89db3d4ff4> &&)
    public: int __thiscall __crt_seh_guarded_call<int>::operator()<class
   <lambda_3cfd252a7c5e244e8f20fc56fe35ebe9>,class <lambda_d7427dbf72509eba5fa970998bac2a27> &,class
   <lambda_8f55a0afecd2292d47fde3ce68e72492> >(class <lambda_3cfd252a7c5e244e8f20fc56fe35ebe9>
   &&,class <lambda_d7427dbf72509eba5fa970998bac2a27> &,class
   <lambda_8f55a0afecd2292d47fde3ce68e72492> &&)
    public: unsigned int __thiscall __crt_seh_guarded_call<unsigned int>::operator()<class
   <lambda_4ac01c32aa5b53846f05d0620572872e>,class <lambda_5856287d7ecd2be6c9197bb4007c3f6e> &,class
   <lambda_e7a9868ed898c75c0f0637692d94351a> >(class <lambda_4ac01c32aa5b53846f05d0620572872e>
   &&,class <lambda_5856287d7ecd2be6c9197bb4007c3f6e> &,class
   <lambda_e7a9868ed898c75c0f0637692d94351a> &&)
     15 names - too many to list
   
   Library: Visual Studio 2019 Release */

undefined4 operator()<>(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 local_14;
  
  __lock_file((FILE *)*param_1);
  uVar1 = FUN_006f2f8f();
  FUN_006f2f83();
  ExceptionList = local_14;
  return uVar1;
}


/* ==== 006f2f83  FUN_006f2f83  size=12 ==== */

void FUN_006f2f83(void)

{
  int unaff_EBP;
  
  __unlock_file((FILE *)**(undefined4 **)(unaff_EBP + 0x10));
  return;
}


/* ==== 006f2f8f  FUN_006f2f8f  size=76 ==== */

undefined4 FUN_006f2f8f(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined4 *in_ECX;
  
  uVar1 = in_ECX[1];
  uVar2 = *(undefined4 *)*in_ECX;
  uVar3 = FUN_006fb4d8(uVar2);
  uVar4 = FUN_006f3052(*(undefined4 *)in_ECX[2],*(undefined4 *)in_ECX[3],*(undefined4 *)in_ECX[4],
                       *(undefined4 *)*in_ECX,in_ECX[1]);
  FUN_006fb583(uVar3,uVar2,uVar1);
  return uVar4;
}


/* ==== 006f2fdb  FUN_006f2fdb  size=119 ==== */

undefined4 FUN_006f2fdb(undefined4 param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  undefined4 *local_24;
  int local_20;
  undefined1 *local_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  int local_10;
  int local_c [2];
  
  if ((param_2 != 0) && (param_3 != 0)) {
    if (param_4 != 0) {
      local_24 = &param_4;
      local_c[0] = param_4;
      local_20 = param_5;
      local_1c = (undefined1 *)&param_1;
      local_18 = &param_2;
      local_14 = &param_3;
      local_10 = param_4;
      uVar1 = operator()<>(&local_10,&local_24,local_c);
      return uVar1;
    }
    *(undefined1 *)(param_5 + 0x1c) = 1;
    *(undefined4 *)(param_5 + 0x18) = 0x16;
    FUN_006e8bb2(0,0,0,0,0,param_5);
  }
  return 0;
}


/* ==== 006f3052  FUN_006f3052  size=423 ==== */

uint FUN_006f3052(char *param_1,uint param_2,uint param_3,FILE *param_4,int param_5)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *local_c;
  char *local_8;
  
  if ((param_2 != 0) && (param_3 != 0)) {
    if ((param_4 != (FILE *)0x0) &&
       ((param_1 != (char *)0x0 && (param_3 <= (uint)(0xffffffff / (ulonglong)param_2))))) {
      piVar1 = &param_4->_flag;
      if ((*piVar1 & 0x4c0U) == 0) {
        local_8 = (char *)0x1000;
      }
      else {
        local_8 = (char *)param_4->_bufsiz;
      }
      pcVar6 = (char *)(param_2 * param_3);
      do {
        if (pcVar6 == (char *)0x0) {
          return param_3;
        }
        piVar2 = &param_4->_flag;
        if (((*piVar2 & 0xc0U) == 0) || (param_4->_base == (char *)0x0)) {
          if (pcVar6 < local_8) {
            iVar3 = FUN_006fda8f((int)*param_1,param_4,param_5);
            if (iVar3 == -1) goto LAB_006f31e0;
            pcVar6 = pcVar6 + -1;
            local_8 = (char *)param_4->_bufsiz;
            if ((int)local_8 < 1) {
              local_8 = (char *)0x1;
            }
            pcVar5 = (char *)0x1;
          }
          else {
            if (((*piVar2 & 0xc0U) != 0) && (iVar3 = FUN_006fa00a(param_4,param_5), iVar3 != 0))
            goto LAB_006f31e0;
            local_c = pcVar6;
            if (local_8 != (char *)0x0) {
              local_c = pcVar6 + -((uint)pcVar6 % (uint)local_8);
            }
            if ((char *)0xfffffffd < local_c) {
              local_c = (char *)0xfffffffe;
            }
            pcVar5 = param_1;
            pcVar7 = local_c;
            iVar3 = param_5;
            iVar4 = __fileno(param_4);
            pcVar5 = (char *)FUN_006fd515(iVar4,pcVar5,pcVar7,iVar3);
            if (pcVar5 == (char *)0xffffffff) {
LAB_006f31ee:
              LOCK();
              *piVar1 = *piVar1 | 0x10;
              UNLOCK();
LAB_006f31e0:
              return (uint)((int)(param_2 * param_3) - (int)pcVar6) / param_2;
            }
            if (local_c < pcVar5) {
              pcVar6 = pcVar6 + -(int)local_c;
              pcVar5 = local_c;
            }
            else {
              pcVar6 = pcVar6 + -(int)pcVar5;
              if (pcVar5 < local_c) goto LAB_006f31ee;
            }
          }
        }
        else {
          if ((int)param_4->_base < 0) {
            LOCK();
            *piVar2 = *piVar2 | 0x10;
            UNLOCK();
            goto LAB_006f31e0;
          }
          if ((*piVar2 & 1U) != 0) goto LAB_006f31e0;
          pcVar5 = param_4->_base;
          if (pcVar6 < param_4->_base) {
            pcVar5 = pcVar6;
          }
          FUN_006e6bd0(param_4->_ptr,param_1,pcVar5);
          pcVar6 = pcVar6 + -(int)pcVar5;
          param_4->_base = param_4->_base + -(int)pcVar5;
          param_4->_ptr = pcVar5 + (int)param_4->_ptr;
        }
        param_1 = param_1 + (int)pcVar5;
      } while( true );
    }
    *(undefined1 *)(param_5 + 0x1c) = 1;
    *(undefined4 *)(param_5 + 0x18) = 0x16;
    FUN_006e8bb2(0,0,0,0,0,param_5);
  }
  return 0;
}


/* ==== 006f31f9  FUN_006f31f9  size=58 ==== */

undefined4 FUN_006f31f9(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined1 local_2c [40];
  
  FUN_006e8923(0);
  uVar1 = FUN_006f2fdb(param_1,param_2,param_3,param_4,local_2c);
  FUN_006e896b();
  return uVar1;
}


/* ==== 006f3524  FUN_006f3524  size=33 ==== */

uint FUN_006f3524(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_006f8965();
  uVar2 = *(int *)(iVar1 + 0x18) * 0x343fd + 0x269ec3;
  *(uint *)(iVar1 + 0x18) = uVar2;
  return uVar2 >> 0x10 & 0x7fff;
}


/* ==== 006f3545  FUN_006f3545  size=18 ==== */

void FUN_006f3545(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_006f8965();
  *(undefined4 *)(iVar1 + 0x18) = param_1;
  return;
}


/* ==== 006f367f  allocate  size=63 ==== */

/* Library Function - Single Match
    public: int __thiscall __crt_win32_buffer<wchar_t,struct
   __crt_win32_buffer_internal_dynamic_resizing>::allocate(unsigned int)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __thiscall
__crt_win32_buffer<wchar_t,__crt_win32_buffer_internal_dynamic_resizing>::allocate
          (__crt_win32_buffer<wchar_t,__crt_win32_buffer_internal_dynamic_resizing> *this,
          uint param_1)

{
  int iVar1;
  
  _deallocate(this);
  iVar1 = __crt_win32_buffer_internal_dynamic_resizing::allocate
                    ((void **)(this + 8),param_1 * 2,(__crt_win32_buffer_empty_debug_info *)this);
  if (iVar1 == 0) {
    this[0x14] = (__crt_win32_buffer<wchar_t,__crt_win32_buffer_internal_dynamic_resizing>)0x1;
    iVar1 = 0;
    *(uint *)(this + 0xc) = param_1;
  }
  else {
    *(undefined4 *)(this + 0xc) = 0;
    this[0x14] = (__crt_win32_buffer<wchar_t,__crt_win32_buffer_internal_dynamic_resizing>)0x0;
  }
  return iVar1;
}


/* ==== 006f36be  allocate  size=31 ==== */

/* Library Function - Single Match
    public: static int __cdecl __crt_win32_buffer_internal_dynamic_resizing::allocate(void * *
   const,unsigned int,class __crt_win32_buffer_empty_debug_info const &)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl
__crt_win32_buffer_internal_dynamic_resizing::allocate
          (void **param_1,uint param_2,__crt_win32_buffer_empty_debug_info *param_3)

{
  void *pvVar1;
  
  pvVar1 = (void *)__malloc_base(param_2);
  *param_1 = pvVar1;
  return (-(uint)(pvVar1 != (void *)0x0) & 0xfffffff4) + 0xc;
}


/* ==== 006f36dd  FID_conflict:__rmdir  size=106 ==== */

/* Library Function - Multiple Matches With Different Base Names
    __rmdir
    _remove
   
   Library: Visual Studio 2019 Release */

int __cdecl FID_conflict___rmdir(char *_Filename)

{
  int iVar1;
  uint uVar2;
  undefined4 local_1c;
  undefined4 local_18;
  wchar_t *local_14;
  undefined4 local_10;
  undefined4 local_c;
  char local_8;
  
  if (_Filename == (char *)0x0) {
    iVar1 = FID_conflict___wrmdir((wchar_t *)0x0);
    return iVar1;
  }
  local_1c = 0;
  local_18 = 0;
  local_14 = (wchar_t *)0x0;
  local_10 = 0;
  local_c = 0;
  local_8 = '\0';
  uVar2 = __acrt_get_utf8_acp_compatibility_codepage();
  iVar1 = __acrt_mbs_to_wcs_cp<__crt_win32_buffer_internal_dynamic_resizing>
                    (_Filename,
                     (__crt_win32_buffer<wchar_t,__crt_win32_buffer_internal_dynamic_resizing> *)
                     &local_1c,uVar2);
  if (iVar1 == 0) {
    iVar1 = FID_conflict___wrmdir(local_14);
  }
  else {
    iVar1 = -1;
  }
  if (local_8 != '\0') {
    FUN_006f9a4d(local_14);
  }
  return iVar1;
}


/* ==== 006f3747  FUN_006f3747  size=282 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint FUN_006f3747(int param_1)

{
  int iVar1;
  errno_t eVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  wchar_t *local_1c;
  wchar_t *local_18;
  undefined *local_14;
  int local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  local_1c = (wchar_t *)0x0;
  eVar2 = FID_conflict___dupenv_s(&local_1c,(size_t *)0x0,L"COMSPEC");
  if ((eVar2 != 0) && (eVar2 == 0x16)) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  if (param_1 == 0) {
    if (local_1c == (wchar_t *)0x0) {
      FUN_006f9a4d();
      return 0;
    }
    eVar2 = __access_s((char *)local_1c,0);
    FUN_006f9a4d(local_1c);
    return (uint)(eVar2 == 0);
  }
  local_18 = local_1c;
  local_14 = &DAT_007327b0;
  local_10 = param_1;
  local_c = 0;
  if (local_1c == (wchar_t *)0x0) {
LAB_006f3825:
    local_18 = L"cmd.exe";
    uVar5 = FUN_006fec13(0,"cmd.exe",&local_18,0);
    FUN_006f9a4d(local_1c);
  }
  else {
    piVar3 = (int *)FUN_006f390a();
    iVar1 = *piVar3;
    puVar4 = (undefined4 *)FUN_006f390a();
    *puVar4 = 0;
    uVar5 = FUN_006fe912(0,local_18,&local_18,0);
    piVar3 = (int *)FUN_006f390a();
    if (uVar5 == 0xffffffff) {
      if ((*piVar3 == 2) || (piVar3 = (int *)FUN_006f390a(), *piVar3 == 0xd)) {
        piVar3 = (int *)FUN_006f390a();
        *piVar3 = iVar1;
        goto LAB_006f3825;
      }
      uVar5 = 0xffffffff;
    }
    else {
      *piVar3 = iVar1;
    }
    FUN_006f9a4d(local_1c);
  }
  return uVar5;
}


/* ==== 006f3862  FUN_006f3862  size=11 ==== */

void FUN_006f3862(void)

{
  FUN_006f3747();
  return;
}


/* ==== 006f386d  FID_conflict:___acrt_errno_from_os_error  size=67 ==== */

/* Library Function - Multiple Matches With Different Base Names
    ___acrt_errno_from_os_error
    __get_errno_from_oserr
   
   Libraries: Visual Studio 2012 Release, Visual Studio 2015 Release, Visual Studio 2017 Release,
   Visual Studio 2019 Release */

int __cdecl FID_conflict____acrt_errno_from_os_error(ulong param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (param_1 == (&DAT_007327b8)[uVar1 * 2]) {
      return *(int *)(&UNK_007327bc + uVar1 * 8);
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x2d);
  if (param_1 - 0x13 < 0x12) {
    return 0xd;
  }
  return (-(uint)(0xe < param_1 - 0xbc) & 0xe) + 8;
}


/* ==== 006f38d3  FUN_006f38d3  size=36 ==== */

void FUN_006f38d3(ulong param_1,int param_2)

{
  int iVar1;
  
  *(undefined1 *)(param_2 + 0x24) = 1;
  *(ulong *)(param_2 + 0x20) = param_1;
  iVar1 = FID_conflict____acrt_errno_from_os_error(param_1);
  *(undefined1 *)(param_2 + 0x1c) = 1;
  *(int *)(param_2 + 0x18) = iVar1;
  return;
}


/* ==== 006f38f7  FUN_006f38f7  size=19 ==== */

undefined * FUN_006f38f7(void)

{
  int iVar1;
  
  iVar1 = FUN_006f8ab6();
  if (iVar1 == 0) {
    return &DAT_007c59d4;
  }
  return (undefined *)(iVar1 + 0x14);
}


/* ==== 006f390a  FUN_006f390a  size=19 ==== */

undefined * FUN_006f390a(void)

{
  int iVar1;
  
  iVar1 = FUN_006f8ab6();
  if (iVar1 == 0) {
    return &DAT_007c59d0;
  }
  return (undefined *)(iVar1 + 0x10);
}


/* ==== 006f391d  FUN_006f391d  size=70 ==== */

undefined4 FUN_006f391d(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined1 auStack_44 [8];
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 local_30 [44];
  
  uStack_38 = 0;
  uStack_3c = 0x6f3930;
  FUN_006e8923();
  uStack_38 = 1;
  uStack_3c = param_3;
  make_c_string_character_source<>(auStack_44,param_1,param_2);
  uVar1 = FUN_006f1a78(local_30);
  uStack_38 = 0x6f395e;
  FUN_006e896b();
  return uVar1;
}


/* ==== 006f3963  FUN_006f3963  size=76 ==== */

undefined8 FUN_006f3963(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_30 [44];
  
  uStack_3c = 0;
  uStack_40 = 0x6f3977;
  FUN_006e8923();
  uStack_3c = 0;
  uStack_40 = param_3;
  make_c_string_character_source<>(auStack_48,param_1,param_2);
  uVar1 = FUN_006f22cd(local_30);
  uStack_3c = 0x6f39a7;
  FUN_006e896b();
  return uVar1;
}


/* ==== 006f39af  FUN_006f39af  size=70 ==== */

undefined4 FUN_006f39af(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined1 auStack_44 [8];
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 local_30 [44];
  
  uStack_38 = 0;
  uStack_3c = 0x6f39c2;
  FUN_006e8923();
  uStack_38 = 1;
  uStack_3c = param_3;
  make_c_string_character_source<>(auStack_44,param_1,param_2);
  uVar1 = FUN_006f1cbf(local_30);
  uStack_38 = 0x6f39f0;
  FUN_006e896b();
  return uVar1;
}


/* ==== 006f39f5  common_strtod_l<>  size=143 ==== */

/* Library Function - Multiple Matches With Same Base Name
    float __cdecl common_strtod_l<float,char>(char const * const,char * * const,struct
   __crt_locale_pointers * const)
    float __cdecl common_strtod_l<float,wchar_t>(wchar_t const * const,wchar_t * * const,struct
   __crt_locale_pointers * const)
   
   Library: Visual Studio 2019 Release */

float10 common_strtod_l<>(int param_1,int *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  float10 fVar3;
  undefined1 auStack_30 [4];
  undefined4 uStack_2c;
  float *pfStack_28;
  int local_1c;
  undefined1 local_18 [8];
  char local_10;
  float local_8;
  
  if (param_2 != (int *)0x0) {
    *param_2 = param_1;
  }
  if (param_1 == 0) {
    pfStack_28 = (float *)0x6f3a14;
    puVar1 = (undefined4 *)FUN_006f390a();
    *puVar1 = 0x16;
    pfStack_28 = (float *)0x6f3a1f;
    FUN_006e8c2f();
    fVar3 = (float10)0;
  }
  else {
    pfStack_28 = (float *)param_3;
    uStack_2c = 0x6f3a2e;
    FUN_006ee0ac();
    pfStack_28 = &local_8;
    local_8 = 0.0;
    make_c_string_character_source<>(auStack_30,param_1,param_2);
    iVar2 = FUN_006f2638(local_18);
    if ((iVar2 == 3) || (iVar2 == 2)) {
      pfStack_28 = (float *)0x6f3a61;
      puVar1 = (undefined4 *)FUN_006f390a();
      *puVar1 = 0x22;
    }
    if (local_10 != '\0') {
      *(uint *)(local_1c + 0x350) = *(uint *)(local_1c + 0x350) & 0xfffffffd;
    }
    fVar3 = (float10)local_8;
  }
  return fVar3;
}


/* ==== 006f3a84  FID_conflict:_wcstof  size=23 ==== */

/* Library Function - Multiple Matches With Different Base Names
    _strtof
    _wcstof
   
   Library: Visual Studio 2019 Release */

void FID_conflict__wcstof(undefined4 param_1,undefined4 param_2)

{
  common_strtod_l<>(param_1,param_2,0);
  return;
}


/* ==== 006f3a9b  FUN_006f3a9b  size=254 ==== */

uint FUN_006f3a9b(uint param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int local_1c;
  int *local_18 [2];
  char local_10;
  undefined4 local_c;
  undefined1 local_8;
  undefined1 local_7;
  undefined1 local_6;
  
  uVar4 = 0xffffffff;
  if (param_1 != 0xffffffff) {
    FUN_006ee0ac(param_2);
    if (param_1 < 0x100) {
      uVar4 = (uint)*(byte *)(local_18[0][0x25] + (param_1 & 0xff));
      if (local_10 != '\0') {
        *(uint *)(local_1c + 0x350) = *(uint *)(local_1c + 0x350) & 0xfffffffd;
      }
    }
    else {
      local_6 = 0;
      if ((local_18[0][1] < 2) ||
         (local_c = (int)param_1 >> 8, -1 < *(short *)(*local_18[0] + (local_c & 0xff) * 2))) {
        puVar1 = (undefined4 *)FUN_006f390a();
        *puVar1 = 0x2a;
        uVar2 = 1;
        local_7 = 0;
        local_8 = (char)param_1;
      }
      else {
        uVar2 = 2;
        local_8 = (char)(param_1 >> 8);
        local_7 = (char)param_1;
      }
      local_c = local_c & 0xff000000;
      iVar3 = ___acrt_LCMapStringA
                        (local_18,local_18[0][0x2a],0x100,&local_8,uVar2,&local_c,3,local_18[0][2],1
                        );
      if (iVar3 != 0) {
        param_1 = local_c & 0xff;
        if (iVar3 != 1) {
          param_1 = (uint)CONCAT11((undefined1)local_c,local_c._1_1_);
        }
      }
      uVar4 = param_1;
      if (local_10 != '\0') {
        *(uint *)(local_1c + 0x350) = *(uint *)(local_1c + 0x350) & 0xfffffffd;
      }
    }
  }
  return uVar4;
}


/* ==== 006f3b99  FUN_006f3b99  size=254 ==== */

uint FUN_006f3b99(uint param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int local_1c;
  int *local_18 [2];
  char local_10;
  undefined4 local_c;
  undefined1 local_8;
  undefined1 local_7;
  undefined1 local_6;
  
  uVar4 = 0xffffffff;
  if (param_1 != 0xffffffff) {
    FUN_006ee0ac(param_2);
    if (param_1 < 0x100) {
      uVar4 = (uint)*(byte *)(local_18[0][0x26] + (param_1 & 0xff));
      if (local_10 != '\0') {
        *(uint *)(local_1c + 0x350) = *(uint *)(local_1c + 0x350) & 0xfffffffd;
      }
    }
    else {
      local_6 = 0;
      if ((local_18[0][1] < 2) ||
         (local_c = (int)param_1 >> 8, -1 < *(short *)(*local_18[0] + (local_c & 0xff) * 2))) {
        puVar1 = (undefined4 *)FUN_006f390a();
        *puVar1 = 0x2a;
        uVar2 = 1;
        local_7 = 0;
        local_8 = (char)param_1;
      }
      else {
        uVar2 = 2;
        local_8 = (char)(param_1 >> 8);
        local_7 = (char)param_1;
      }
      local_c = local_c & 0xff000000;
      iVar3 = ___acrt_LCMapStringA
                        (local_18,local_18[0][0x2a],0x200,&local_8,uVar2,&local_c,3,local_18[0][2],1
                        );
      if (iVar3 != 0) {
        param_1 = local_c & 0xff;
        if (iVar3 != 1) {
          param_1 = (uint)CONCAT11((undefined1)local_c,local_c._1_1_);
        }
      }
      uVar4 = param_1;
      if (local_10 != '\0') {
        *(uint *)(local_1c + 0x350) = *(uint *)(local_1c + 0x350) & 0xfffffffd;
      }
    }
  }
  return uVar4;
}


/* ==== 006f3dbf  FUN_006f3dbf  size=16 ==== */

undefined * FUN_006f3dbf(int param_1)

{
  return &DAT_007c59d8 + param_1 * 0x38;
}


/* ==== 006f3e96  FUN_006f3e96  size=197 ==== */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

char * FUN_006f3e96(char *param_1,int param_2,FILE *param_3)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  void *local_14;
  
  if ((param_1 == (char *)0x0) && (param_2 != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  iVar5 = 1;
  if (((bVar1) && (-1 < param_2)) && (param_3 != (FILE *)0x0)) {
    if (param_2 != 0) {
      __lock_file(param_3);
      bVar1 = __acrt_stdio_char_traits<char>::validate_stream_is_ansi_if_required(param_3);
      pcVar4 = (char *)0x0;
      pcVar6 = param_1;
      if (bVar1) {
        for (; iVar5 != param_2; iVar5 = iVar5 + 1) {
          iVar3 = FUN_006fc720(param_3);
          if (iVar3 == -1) {
            if (pcVar6 == param_1) goto LAB_006f3f30;
            break;
          }
          *pcVar6 = (char)iVar3;
          pcVar6 = pcVar6 + 1;
          if ((char)iVar3 == '\n') break;
        }
        *pcVar6 = '\0';
        pcVar4 = param_1;
      }
LAB_006f3f30:
      FUN_006f3f5e();
      ExceptionList = local_14;
      return pcVar4;
    }
  }
  else {
    puVar2 = (undefined4 *)FUN_006f390a();
    *puVar2 = 0x16;
    FUN_006e8c2f();
  }
  ExceptionList = local_14;
  return (char *)0x0;
}


/* ==== 006f3f5e  FUN_006f3f5e  size=10 ==== */

void FUN_006f3f5e(void)

{
  int unaff_EBP;
  
  __unlock_file(*(FILE **)(unaff_EBP + 0x10));
  return;
}


/* ==== 006f3f68  FUN_006f3f68  size=11 ==== */

void FUN_006f3f68(void)

{
  FUN_006f3e96();
  return;
}


/* ==== 006f3f73  FUN_006f3f73  size=11 ==== */

void FUN_006f3f73(void)

{
  __calloc_base();
  return;
}


/* ==== 006f3f7e  FUN_006f3f7e  size=11 ==== */

void FUN_006f3f7e(void)

{
  __realloc_base();
  return;
}


/* ==== 006f3f90  FUN_006f3f90  size=253 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_006f3f90(double param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ushort in_FPUControlWord;
  float10 fVar4;
  double dVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  
  uVar1 = (uint)((ulonglong)param_1 >> 0x20);
  if ((DAT_007cde5c != 0) && ((MXCSR & 0x7f80) == 0x1f80 && (in_FPUControlWord & 0x7f) == 0x7f)) {
    uVar2 = uVar1 >> 0x14;
    uVar6 = (ulonglong)(0x433 - (uVar1 >> 0x14 & 0x7ff));
    if ((uVar2 & 0x800) == 0) {
      if (uVar2 < 0x3ff) {
        return (float10)0;
      }
      if (uVar2 < 0x433) {
        return (float10)(double)(((ulonglong)param_1 >> uVar6) << uVar6);
      }
    }
    else {
      dVar5 = (double)(((ulonglong)param_1 >> uVar6) << uVar6);
      if (!NAN(param_1)) {
        if (uVar2 < 0xbff) {
          return (float10)(double)((-(ulonglong)(param_1 < -0.0) | (ulonglong)DAT_00732950) &
                                  0xbff0000000000000);
        }
        if (uVar2 < 0xc33) {
          return (float10)(dVar5 - (double)(-(ulonglong)(param_1 < dVar5) & 0x3ff0000000000000));
        }
      }
    }
    return (float10)param_1;
  }
  uVar2 = __ctrlfp(0x173f,0xffff);
  if ((param_1._6_2_ & 0x7ff0) == 0x7ff0) {
    iVar3 = FUN_006ff800();
    if (((iVar3 == 1) || (iVar3 == 2)) || (iVar3 == 3)) {
      __ctrlfp(uVar2,0xffff);
      dVar5 = param_1;
LAB_006ff11e:
      return (float10)dVar5;
    }
    dVar5 = param_1 + 1.0;
    uVar7 = 8;
  }
  else {
    fVar4 = (float10)__frnd(SUB84(param_1,0),uVar1);
    dVar5 = (double)fVar4;
    if (((float10)param_1 == fVar4) || ((uVar2 & 0x20) != 0)) {
      __ctrlfp(uVar2,0xffff);
      goto LAB_006ff11e;
    }
    dVar5 = (double)fVar4;
    uVar7 = 0x10;
  }
  fVar4 = (float10)__except1(uVar7,0xb,param_1,dVar5,uVar2);
                    /* WARNING: Read-only address (ram,0x00732950) is written */
  return fVar4;
}


/* ==== 006f4090  FUN_006f4090  size=747 ==== */

void FUN_006f4090(void)

{
  ushort in_FPUControlWord;
  double in_XMM0_Qa;
  double dVar1;
  
  if (((MXCSR & 0x7f80) != 0x1f80) || ((in_FPUControlWord & 0x7f) != 0x7f)) {
    FUN_006ff5af();
    return;
  }
  dVar1 = ABS(in_XMM0_Qa);
  if (!NAN(dVar1)) {
    if (dVar1 < 1.633123935319537e+16) {
      if (0.03125 <= dVar1) {
        if (dVar1 < 0.375) {
          return;
        }
        return;
      }
      if (7.450580596923828e-09 <= dVar1) {
        return;
      }
      if (dVar1 == 0.0) {
        return;
      }
      if (dVar1 < 2.2250738585072014e-308) {
        return;
      }
      return;
    }
    if (!NAN((double)((ulonglong)dVar1 & 0x7ff0000000000000))) {
      return;
    }
  }
  return;
}


/* ==== 006f486e  FUN_006f486e  size=499 ==== */

float10 FUN_006f486e(double param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  float10 fVar3;
  double dVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  double local_10;
  int local_8;
  
  uVar1 = __ctrlfp(0x133f,0xffff);
  uVar6 = (undefined4)((ulonglong)param_1 >> 0x20);
  uVar5 = SUB84(param_1,0);
  if ((param_1._6_2_ & 0x7ff0) == 0x7ff0) {
    iVar2 = FUN_006ff800(uVar5,uVar6);
    if ((iVar2 == 1) || (iVar2 == 2)) {
LAB_006f4923:
      __ctrlfp(uVar1,0xffff);
      return (float10)param_1;
    }
    if (iVar2 == 3) {
      fVar3 = (float10)FUN_006f8142(uVar5,uVar6,(double)param_2);
      __ctrlfp();
      goto LAB_006f490e;
    }
    dVar4 = param_1 + 1.0;
    uVar5 = 8;
    goto LAB_006f4a55;
  }
  if (param_1 == 0.0) goto LAB_006f4923;
  fVar3 = (float10)FUN_006ff701(uVar5,uVar6,&local_8);
  if (param_2 < 0) {
    if (local_8 < -0x80000000 - param_2) {
LAB_006f49b4:
      fVar3 = (float10)0 * fVar3;
LAB_006f49c9:
      dVar4 = (double)fVar3;
      uVar5 = 0x12;
      goto LAB_006f4a55;
    }
LAB_006f496b:
    local_8 = local_8 + param_2;
    if (0xa00 < local_8) goto LAB_006f4a23;
    if (local_8 < 0x401) {
      if (local_8 < -0x9fd) goto LAB_006f49b4;
      if (-0x3fe < local_8) {
        fVar3 = (float10)__set_exp((double)fVar3,local_8);
        __ctrlfp(uVar1,0xffff);
LAB_006f490e:
        local_10 = (double)fVar3;
        return (float10)local_10;
      }
      fVar3 = (float10)__set_exp((double)fVar3,local_8 + 0x600);
      goto LAB_006f49c9;
    }
    fVar3 = (float10)__set_exp((double)fVar3,local_8 + -0x600);
    dVar4 = (double)fVar3;
  }
  else {
    if (local_8 <= 0x7fffffff - param_2) goto LAB_006f496b;
LAB_006f4a23:
    dVar4 = __copysign(INFINITY,(double)fVar3);
  }
  uVar5 = 0x11;
LAB_006f4a55:
  fVar3 = (float10)FUN_006f7de0(uVar5,0x19,param_1,(double)param_2,dVar4,uVar1);
  return fVar3;
}


/* ==== 006f4a70  FUN_006f4a70  size=651 ==== */

void FUN_006f4a70(void)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  ushort in_FPUControlWord;
  ulonglong uVar4;
  undefined1 in_XMM0 [16];
  undefined1 auVar5 [16];
  double dVar6;
  undefined8 local_10;
  double local_8;
  
  local_8 = in_XMM0._0_8_;
  if (((MXCSR & 0x7f80) != 0x1f80) || (auVar5 = in_XMM0, (in_FPUControlWord & 0x7f) != 0x7f)) {
    local_10 = CONCAT44(0x6f4cef,(undefined4)local_10);
    FUN_006ff9df();
    return;
  }
  while( true ) {
    uVar4 = auVar5._0_8_;
    uVar1 = (uint)(ushort)(auVar5._6_2_ >> 4);
    dVar6 = (double)(uVar4 & 0xfffffffe00000 | 0x3ff0000000000000);
    auVar5._8_8_ = ((double)(uVar4 & 0xfffffffffffff | 0x3ff0000000000000) - dVar6) *
                   *(double *)
                    (&UNK_00735f58 +
                    (SUB82((double)(uVar4 & 0xfffffffffffff | 0x3ff0000000000000) +
                           4398046511103.0073,0) & 0x7f0)) +
                   (dVar6 * *(double *)
                             (&UNK_00735f58 +
                             (SUB82((double)(uVar4 & 0xfffffffffffff | 0x3ff0000000000000) +
                                    4398046511103.0073,0) & 0x7f0)) - 1.0);
    uVar2 = uVar1 - 1;
    if (uVar2 < 0x7fe) {
      return;
    }
    local_10 = -(ulonglong)(local_8 == 0.0);
    if ((short)local_10 != 0) break;
    if (uVar2 != 0xffffffff) {
      if (uVar2 < 0x7ff) {
        local_10 = 0xfffffffffffff;
        if ((double)((ulonglong)local_8 & 0xfffffffffffff | 0x3ff0000000000000) == 1.0) {
          return;
        }
        uVar3 = 1000;
      }
      else if (((uVar1 & 0x7ff) < 0x7ff) ||
              (in_XMM0._0_4_ == 0 && ((ulonglong)local_8 & 0xfffff00000000) == 0)) {
        local_10 = -0x8000000000000;
        uVar3 = 3;
      }
      else {
        uVar3 = 1000;
      }
      goto LAB_006f4c8c;
    }
    auVar5._0_8_ = local_8 * 4503599627370496.0;
  }
  local_10 = -0x10000000000000;
  uVar3 = 2;
LAB_006f4c8c:
  ___libm_error_support(&local_8,&local_8,&local_10,uVar3);
  return;
}


/* ==== 006f4d00  FUN_006f4d00  size=2887 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f4d00(void)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  ushort uVar10;
  bool bVar11;
  ushort in_FPUControlWord;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 in_XMM0 [16];
  undefined2 in_XMM1_Wa;
  undefined2 in_XMM1_Wb;
  undefined2 in_XMM1_Wc;
  ushort in_XMM1_Wd;
  double dVar15;
  double dVar16;
  ushort uVar20;
  ushort in_XMM1_Wh;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  longlong lVar21;
  ulonglong in_XMM2_Qb;
  undefined1 auVar22 [16];
  longlong lVar25;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  ulonglong uVar26;
  double dVar27;
  undefined1 in_XMM3 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  ulonglong uVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double local_10;
  undefined1 local_8 [8];
  
  local_10 = in_XMM0._0_8_;
  if (((MXCSR & 0x7f80) != 0x1f80) || ((in_FPUControlWord & 0x7f) != 0x7f)) {
    FUN_006ffaf4();
    return;
  }
  dVar12 = (double)((ulonglong)local_10 >> 0x2c);
  uVar10 = in_XMM0._6_2_;
  uVar2 = (SUB82(dVar12,0) & 0xff) + 1 & 0x1fe;
  dVar35 = (double)((ulonglong)local_10 & 0xfffffffffffff | 0x3ff0000000000000) *
           *(double *)((int)&DAT_00736780 + uVar2 * 4);
  dVar14 = *(double *)((int)&DAT_00736780 + uVar2 * 4);
  dVar13 = *(double *)(&DAT_00736b90 + uVar2 * 8);
  dVar16 = *(double *)(&UNK_00736b98 + uVar2 * 8);
  uVar6 = 0x7fef - uVar10;
  uVar2 = in_XMM0._0_4_;
  uVar8 = in_XMM0._4_4_;
  dVar34 = local_10;
  if ((uVar10 - 0x10 | uVar6) < 0x80000000) {
    uVar6 = 0;
    uVar7 = 0x3fe7f;
LAB_006f4db3:
    uVar3 = ((ushort)((ulonglong)dVar35 >> 0x26) & 0xff) + 1 & 0x1fe;
    dVar31 = (double)((ulonglong)dVar34 & 0xfffffffffffff | DAT_00732bd0);
    dVar15 = (double)((ulonglong)dVar31 & 0xfffffffff8000000);
    auVar29._8_8_ = in_XMM3._8_8_ >> 0x1f;
    dVar31 = dVar31 - dVar15;
    uVar4 = ((ushort)((ulonglong)(dVar35 * *(double *)(&DAT_007373a0 + uVar3 * 4)) >> 0x1f) & 0x1ff)
            + 1 & 0x3fe;
    dVar33 = dVar14 * *(double *)(&DAT_007373a0 + uVar3 * 4) *
             *(double *)(&DAT_00737fc0 + uVar4 * 4);
    dVar35 = dVar35 * *(double *)(&DAT_007373a0 + uVar3 * 4) *
             *(double *)(&DAT_00737fc0 + uVar4 * 4);
    dVar34 = dVar13 + *(double *)(&DAT_007377b0 + uVar3 * 8) +
             (double)(int)((longlong)dVar12 - (ulonglong)uVar7 >> 8) +
             *(double *)(&DAT_007387d0 + uVar4 * 8);
    dVar13 = (double)((ulonglong)dVar33 & 0xfffffffff8000000);
    dVar33 = dVar33 - dVar13;
    dVar36 = dVar35 + -1.442694902420044;
    dVar12 = dVar34 + dVar36;
    dVar14 = (double)CONCAT26(in_XMM1_Wd,CONCAT24(in_XMM1_Wc,CONCAT22(in_XMM1_Wb,in_XMM1_Wa)));
    dVar34 = dVar34 - dVar12;
    auVar29._0_8_ = 0xfffffffff8000000;
    uVar7 = (uint)(ushort)((ulonglong)dVar12 >> 0x30);
    dVar13 = (((dVar35 - dVar13 * dVar15) - dVar15 * dVar33) - dVar13 * dVar31) - dVar31 * dVar33;
    dVar15 = dVar36 - dVar13;
    dVar35 = dVar12 - dVar13;
    if ((in_XMM1_Wd & 0x7ff0) < 0x7ff0) {
      iVar5 = ((in_XMM1_Wd & 0x7ff0) - 0x3ff0) + (uVar7 & 0x7ff0);
      if ((0x40a0U - iVar5 | iVar5 - 0x3c70U) < 0x80000000) {
LAB_006f4f05:
        dVar31 = (double)((ulonglong)dVar14 & 0xfffffffff8000000);
        dVar32 = (double)((ulonglong)dVar35 & 0xfffffffff8000000);
        dVar33 = dVar31 * dVar32 * 128.0;
        uVar2 = (uint)ROUND(dVar33);
        if (0 < (int)(0x1ff7f - uVar2 | uVar2 + 0x1e1ff)) {
          return;
        }
        if ((int)uVar2 < 1) {
          if ((int)uVar2 < -0x3fdff) {
LAB_006f5761:
            uVar9 = 0x19;
            goto LAB_006f5520;
          }
          uVar6 = uVar6 + 0x80;
          uVar8 = (uVar2 & 0xffffff80) + 0x3fe80;
          uVar10 = 0;
        }
        else {
          if (0x3ffff < uVar2) goto LAB_006f5784;
          uVar6 = uVar6 + 0x3ff00;
          uVar8 = uVar2 - 0x80 & 0xffffff80;
          uVar10 = 0x3ff0;
        }
        iVar5 = (uVar2 & 0x7f) * 0x10;
        uVar2 = ((int)-(uVar8 - 0x1ff80) >> 7) + 2;
        auVar19._0_8_ = (double)((ulonglong)uVar8 << 0x2d);
        auVar19._8_4_ = 0;
        auVar19._12_4_ = (int)((ulonglong)auVar19._0_8_ >> 0x20);
        dVar27 = *(double *)(&DAT_00739800 + iVar5) * auVar19._0_8_;
        dVar14 = (dVar33 - ((dVar33 + 6755399441055744.0) - 6755399441055744.0)) * 0.0078125 +
                 dVar31 * (dVar35 - dVar32) + dVar32 * (dVar14 - dVar31) +
                 (dVar35 - dVar32) * (dVar14 - dVar31) +
                 ((dVar15 * 0.16015105075297303 + dVar15 * dVar15 * -0.08325619496072671) *
                  dVar15 * dVar15 +
                  dVar15 * 9.597935033233511e-08 + dVar15 * dVar15 * -0.3465736568077919 +
                 dVar16 + *(double *)(&DAT_007377b8 + uVar3 * 8) +
                 *(double *)(&DAT_007387d8 + uVar4 * 8) +
                 ((dVar34 + dVar36) - (dVar13 - (dVar12 - dVar35)))) *
                 (double)CONCAT26(in_XMM1_Wd,CONCAT24(in_XMM1_Wc,CONCAT22(in_XMM1_Wb,in_XMM1_Wa)));
        dVar13 = (double)((ulonglong)uVar6 << 0x2d);
        uVar26 = (ulonglong)(uVar2 + (uVar2 & 0x20));
        dVar16 = (double)(-1L << uVar26 & (ulonglong)dVar27);
        dVar14 = dVar14 * dVar14 * dVar27 *
                 (dVar14 * 0.0013333558146428443 + 0.009618129107628477) * dVar14 * dVar14 +
                 *(double *)(&UNK_00739808 + iVar5) * auVar19._8_8_ +
                 (dVar14 * 0.055504108664821576 + 0.2402265069591007) * dVar14 * dVar14 * dVar27 +
                 dVar14 * 0.6931471805599453 * dVar27;
        dVar34 = (double)((ulonglong)(dVar16 + dVar14) & -1L << uVar26);
        dVar14 = dVar14 + (dVar16 - dVar34) + (dVar27 - dVar16);
        if ((int)(uVar8 - 0x1ff80) < 1) {
          dVar14 = dVar14 * dVar13 + dVar34 * dVar13;
          dVar14 = dVar14 + (double)((ulonglong)uVar10 << 0x30) * dVar14;
          uVar9 = 0x18;
          if ((((ushort)((ulonglong)dVar14 >> 0x30) & 0x7ff0) != 0x7ff0) &&
             (uVar9 = 0x19, ((ulonglong)dVar14 & 0x7ff0000000000000) != 0)) {
            return;
          }
        }
        else {
          dVar13 = (dVar14 + dVar34) * dVar13;
          dVar13 = dVar13 + (double)((ulonglong)uVar10 << 0x30) * dVar13;
          uVar9 = 0x18;
          if ((((ushort)((ulonglong)dVar13 >> 0x30) & 0x7ff0) != 0x7ff0) &&
             (uVar9 = 0x19, ((ulonglong)dVar13 & 0x7ff0000000000000) != 0)) {
            return;
          }
        }
      }
      else {
        dVar12 = dVar14 * dVar35;
        uVar2 = (ushort)((ulonglong)dVar12 >> 0x30) & 0x7ff0;
        uVar8 = uVar2 - 0x3c70;
        if ((0x40a0 - uVar2 | uVar8) < 0x80000000) goto LAB_006f4f05;
        if (0x7fffffff < uVar8) {
          return;
        }
        if (((in_XMM1_Wd ^ (uVar10 & 0x7ff0) + 0xc010) & 0x8000) != 0) goto LAB_006f5761;
LAB_006f5784:
        uVar9 = 0x18;
      }
      goto LAB_006f5520;
    }
    auVar22._2_2_ = in_XMM1_Wb;
    auVar22._0_2_ = in_XMM1_Wa;
    auVar22._4_2_ = in_XMM1_Wc;
    auVar22._6_2_ = in_XMM1_Wd;
    auVar22._8_8_ = in_XMM2_Qb;
    bVar11 = uVar2 == 0;
    uVar2 = uVar7;
    if (bVar11) {
      if (uVar8 == 0x3ff00000) {
        return;
      }
      uVar2 = uVar8;
      if (uVar8 == 0xbff00000) {
        return;
      }
    }
  }
  else {
    uVar26 = CONCAT26(in_XMM1_Wd,CONCAT24(in_XMM1_Wc,CONCAT22(in_XMM1_Wb,in_XMM1_Wa)));
    auVar29._8_8_ = in_XMM3._8_8_;
    auVar29._0_8_ = 0x7fffffffffffffff;
    auVar22._8_8_ = in_XMM2_Qb;
    auVar22._0_8_ = uVar26;
    uVar7 = (uint)(uVar26 >> 0x20) & 0x7fffffff;
    if (uVar7 < 0x7ff00000) {
      if (CONCAT22(in_XMM1_Wb,in_XMM1_Wa) == 0 && (uVar26 & 0x7fffffff00000000) == 0) {
        uVar9 = 0x1a;
        if (uVar2 != 0 || (uVar8 & 0x7fffffff) != 0) {
          uVar9 = 0x1d;
          if (((uVar8 & 0x7fffffff) < 0x7ff00001) &&
             (((uVar8 & 0x7fffffff) < 0x7ff00000 || (uVar2 == 0)))) {
            return;
          }
        }
        goto LAB_006f5520;
      }
      if ((int)uVar6 < 0) {
        auVar28._8_8_ = auVar29._8_8_ << 0x34;
        auVar28._0_8_ = 0xfff0000000000000;
        iVar5 = (uVar7 >> 0x14) - 0x3f3;
        auVar29 = (undefined1  [16])0x0;
        uVar26 = (ulonglong)
                 CONCAT22((ushort)(-1 < iVar5) * (short)((uint)iVar5 >> 0x10),
                          (ushort)(-1 < (short)iVar5) * (short)iVar5);
        uVar20 = (in_XMM1_Wh & in_XMM3._14_2_) >> 4;
        lVar21 = SUB168(auVar22 | auVar28,0) << uVar26;
        lVar25 = SUB168(auVar22 | auVar28,8) << uVar26;
        auVar23._0_4_ = -(uint)((int)lVar21 == 0);
        auVar23._4_4_ = -(uint)((int)((ulonglong)lVar21 >> 0x20) == 0);
        auVar23._8_4_ = -(uint)((int)lVar25 == 0);
        auVar23._12_4_ = -(uint)((int)((ulonglong)lVar25 >> 0x20) == 0);
        bVar1 = SUB161(auVar23 >> 7,0) & 1 | (SUB161(auVar23 >> 0xf,0) & 1) << 1 |
                (SUB161(auVar23 >> 0x17,0) & 1) << 2 | (SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
                (SUB161(auVar23 >> 0x27,0) & 1) << 4 | (SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
                (SUB161(auVar23 >> 0x37,0) & 1) << 6 | SUB161(auVar23 >> 0x3f,0) << 7;
        uVar7 = 0x7fef - uVar6 & 0x7fff;
        if (0x7fef < uVar7) {
          auVar17._0_4_ = -(uint)((int)((ulonglong)local_10 & 0xfffffffffffff) == 0);
          auVar17._4_4_ = -(uint)((int)(((ulonglong)local_10 & 0xfffffffffffff) >> 0x20) == 0);
          auVar17._8_4_ = 0xffffffff;
          auVar17._12_4_ = 0xffffffff;
          if ((byte)(SUB161(auVar17 >> 7,0) & 1 | (SUB161(auVar17 >> 0xf,0) & 1) << 1 |
                     (SUB161(auVar17 >> 0x17,0) & 1) << 2 | (SUB161(auVar17 >> 0x1f,0) & 1) << 3 |
                     (SUB161(auVar17 >> 0x27,0) & 1) << 4 | (SUB161(auVar17 >> 0x2f,0) & 1) << 5 |
                     (SUB161(auVar17 >> 0x37,0) & 1) << 6 | SUB161(auVar17 >> 0x3f,0) << 7) == 0xff)
          {
            if ((uVar10 & 0x8000) == 0) {
              if ((in_XMM1_Wd & 0x8000) == 0) {
                return;
              }
              return;
            }
            if ((bVar1 == 0xff) &&
               (lVar21 = CONCAT26(in_XMM1_Wd,CONCAT24(in_XMM1_Wc,CONCAT22(in_XMM1_Wb,in_XMM1_Wa))),
               uVar26 = (ulonglong)
                        ((((uint)((ulonglong)lVar21 >> 0x20) & 0x7fffffff) >> 0x14) - 0x3f4),
               lVar21 = lVar21 << uVar26, lVar25 = auVar17._8_8_ << uVar26,
               auVar24._0_4_ = -(uint)((int)lVar21 == 0),
               auVar24._4_4_ = -(uint)((int)((ulonglong)lVar21 >> 0x20) == 0),
               auVar24._8_4_ = -(uint)((int)lVar25 == 0),
               auVar24._12_4_ = -(uint)((int)((ulonglong)lVar25 >> 0x20) == 0),
               (byte)(SUB161(auVar24 >> 7,0) & 1 | (SUB161(auVar24 >> 0xf,0) & 1) << 1 |
                      (SUB161(auVar24 >> 0x17,0) & 1) << 2 | (SUB161(auVar24 >> 0x1f,0) & 1) << 3 |
                      (SUB161(auVar24 >> 0x27,0) & 1) << 4 | (SUB161(auVar24 >> 0x2f,0) & 1) << 5 |
                      (SUB161(auVar24 >> 0x37,0) & 1) << 6 | SUB161(auVar24 >> 0x3f,0) << 7) != 0xff
               )) {
              if ((in_XMM1_Wd & 0x8000) != 0) {
                return;
              }
              return;
            }
            if ((in_XMM1_Wd & 0x8000) == 0) {
              return;
            }
            return;
          }
          goto LAB_006f53a0;
        }
        if (bVar1 == 0xff) {
          lVar21 = CONCAT26(in_XMM1_Wd,CONCAT24(in_XMM1_Wc,CONCAT22(in_XMM1_Wb,in_XMM1_Wa)));
          uVar26 = (ulonglong)((((uint)((ulonglong)lVar21 >> 0x20) & 0x7fffffff) >> 0x14) - 0x3f4);
          auVar29 = ZEXT816(0x8000000000000000);
          lVar21 = lVar21 << uVar26;
          lVar25 = (ulonglong)(ushort)((-1 < (short)uVar20) * uVar20) << uVar26;
          auVar22._0_4_ = -(uint)((int)lVar21 == 0);
          auVar22._4_4_ = -(uint)((int)((ulonglong)lVar21 >> 0x20) == auVar29._4_4_);
          auVar22._8_4_ = -(uint)((int)lVar25 == 0);
          auVar22._12_4_ = -(uint)((int)((ulonglong)lVar25 >> 0x20) == 0);
          uVar6 = (ushort)((ushort)(SUB161(auVar22 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
                          (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7) + 0x3ff01 & 0x40000;
          if (0xf < uVar7) {
            uVar7 = 0xbfe7f;
            in_XMM3 = ZEXT816(0xfffffffffffff);
            in_XMM2_Qb = auVar22._8_8_;
            goto LAB_006f4db3;
          }
          goto LAB_006f51bf;
        }
        uVar26 = (ulonglong)local_10 >> 0x20;
        in_XMM2_Qb = auVar23._8_8_ >> 0x20;
        uVar6 = 0;
        uVar7 = 0;
        if (uVar2 != 0 || (uVar8 & 0x7fffffff) != 0) {
          uVar9 = 0x1c;
          goto LAB_006f5520;
        }
LAB_006f5245:
        in_XMM3 = auVar29;
        dVar34 = dVar12;
        if ((uVar7 & 0x7fffffff) == 0) {
          if ((in_XMM1_Wd & 0x8000) == 0) {
            if ((uVar7 & uVar6 << 0xd) != 0) {
              return;
            }
            return;
          }
          uVar9 = 0x1b;
          goto LAB_006f5520;
        }
      }
      else {
        uVar6 = 0;
LAB_006f51bf:
        dVar35 = 2.225073858507201e-308;
        in_XMM2_Qb = auVar22._8_8_;
        uVar26 = 0x3ff0000000000000;
        dVar12 = local_10 * 1.8446744073709552e+19;
        uVar7 = uVar8;
        in_XMM3 = auVar29;
        dVar34 = dVar12;
        if (uVar2 == 0) goto LAB_006f5245;
      }
      dVar12 = (double)((ulonglong)ABS(dVar34) >> 0x2c);
      uVar7 = (SUB82(dVar12,0) & 0xff) + 1 & 0x1fe;
      dVar35 = (double)((ulonglong)dVar35 & (ulonglong)dVar34 | uVar26) *
               *(double *)((int)&DAT_00736780 + uVar7 * 4);
      dVar14 = *(double *)((int)&DAT_00736780 + uVar7 * 4);
      dVar13 = *(double *)(&DAT_00736b90 + uVar7 * 8);
      dVar16 = *(double *)(&UNK_00736b98 + uVar7 * 8);
      uVar7 = 0x43e7f;
      goto LAB_006f4db3;
    }
    uVar6 = uVar8;
    if ((0x7fefffff < (uVar8 & 0x7fffffff)) && ((0x7ff00000 < (uVar8 & 0x7fffffff) || (uVar2 != 0)))
       ) {
LAB_006f53a0:
      uVar9 = 0x3ee;
      goto LAB_006f5520;
    }
  }
  uVar26 = auVar22._0_8_ & 0xfffffffffffff;
  uVar30 = auVar29._8_8_ & auVar22._8_8_;
  auVar18._0_4_ = -(uint)((int)uVar26 == 0);
  auVar18._4_4_ = -(uint)((int)(uVar26 >> 0x20) == 0);
  auVar18._8_4_ = -(uint)((int)uVar30 == 0);
  auVar18._12_4_ = -(uint)((int)(uVar30 >> 0x20) == 0);
  if ((byte)(SUB161(auVar18 >> 7,0) & 1 | (SUB161(auVar18 >> 0xf,0) & 1) << 1 |
             (SUB161(auVar18 >> 0x17,0) & 1) << 2 | (SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
             (SUB161(auVar18 >> 0x27,0) & 1) << 4 | (SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
             (SUB161(auVar18 >> 0x37,0) & 1) << 6 | SUB161(auVar18 >> 0x3f,0) << 7) == 0xff) {
    if (uVar2 == 0 && uVar6 == 0xbff00000) {
      return;
    }
    if ((auVar22._6_2_ & 0x8000) == 0) {
      if ((uVar10 & 0x7ff0) < 0x3ff0) {
        return;
      }
    }
    else if (0x3fef < (uVar10 & 0x7ff0)) {
      return;
    }
    return;
  }
  uVar9 = 0x3ee;
LAB_006f5520:
  ___libm_error_support(&local_10,local_8,&stack0xffffffe8,uVar9);
  return;
}


/* ==== 006f5850  FUN_006f5850  size=693 ==== */

void FUN_006f5850(void)

{
  uint uVar1;
  int iVar2;
  undefined2 uVar3;
  ushort in_FPUControlWord;
  double in_XMM0_Qa;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined4 uStack_10;
  ushort uStack_c;
  undefined2 local_a;
  int local_8;
  uint uStack_4;
  
  if (((MXCSR & 0x7f80) != 0x1f80) || ((in_FPUControlWord & 0x7f) != 0x7f)) {
    uStack_c = 0x5b1a;
    local_a = 0x6f;
    FUN_006ffd2b();
    return;
  }
  uVar1 = (ushort)((ulonglong)in_XMM0_Qa >> 0x30) & 0x7fff;
  if ((0x408f - uVar1 | uVar1 - 0x3c90) < 0x80000000) {
    dVar4 = in_XMM0_Qa * 92.33248261689366 + 6755399441055744.0;
    dVar5 = dVar4 - 6755399441055744.0;
    dVar6 = (in_XMM0_Qa * 92.33248261689366 + 6755399441055744.0) - 6755399441055744.0;
    uVar1 = SUB84(dVar4,0);
    iVar2 = (uVar1 & 0x3f) * 0x10;
    dVar4 = (in_XMM0_Qa - dVar5 * 0.010830424696223417) - dVar5 * 2.572804622327669e-14;
    dVar5 = (in_XMM0_Qa - dVar6 * 0.010830424696223417) - dVar6 * 2.572804622327669e-14;
    if (((int)uVar1 >> 6) + 0x37eU < 0x77d) {
      return;
    }
    uStack_c = (ushort)((*(ulonglong *)(&UNK_0073a008 + iVar2) & 0xfffffffffffff) >> 0x30) |
               (ushort)(((ulonglong)(((int)uVar1 >> 7) + 0x3ff) << 0x34) >> 0x30);
    dVar6 = (double)CONCAT26(uStack_c,(int6)(*(ulonglong *)(&UNK_0073a008 + iVar2) & 0xfffffffffffff
                                            ));
    dVar4 = (double)((ulonglong)((((int)uVar1 >> 6) - ((int)uVar1 >> 7)) + 0x3ff) << 0x34) *
            (dVar6 + (dVar5 * dVar5 * (dVar5 * 0.16666666669815094 + 0.4999999999995663) +
                     dVar4 + *(double *)(&DAT_0073a000 + iVar2) +
                     dVar4 * dVar4 * dVar4 * dVar4 *
                     (dVar4 * 0.008332168270616733 + 0.04166672086872847)) * dVar6);
    if (((ushort)((ulonglong)dVar4 >> 0x30) & 0x7ff0) < 0x7ff0) {
      if (((ulonglong)dVar4 & 0x7ff0000000000000) != 0) {
        return;
      }
      uVar3 = 0xf;
    }
    else {
      uVar3 = 0xe;
    }
  }
  else {
    uStack_4 = (uint)((ulonglong)in_XMM0_Qa >> 0x20);
    uVar1 = uStack_4 & 0x7fffffff;
    if (uVar1 < 0x40900000) {
      return;
    }
    if (0x7fefffff < uVar1) {
      local_8 = SUB84(in_XMM0_Qa,0);
      if ((uVar1 < 0x7ff00001) && (local_8 == 0)) {
        if (uStack_4 == 0x7ff00000) {
          return;
        }
        return;
      }
      return;
    }
    if (uStack_4 < 0x80000000) {
      dVar4 = INFINITY;
      uVar3 = 0xe;
    }
    else {
      dVar4 = 0.0;
      uVar3 = 0xf;
    }
  }
  uStack_10 = SUB84(dVar4,0);
  uStack_c = (ushort)((ulonglong)dVar4 >> 0x20);
  local_a = (undefined2)((ulonglong)dVar4 >> 0x30);
  ___libm_error_support(&local_8,(short)&local_8,&uStack_10,uVar3);
  return;
}


/* ==== 006f5c30  FUN_006f5c30  size=475 ==== */

float10 FUN_006f5c30(double param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ushort in_FPUControlWord;
  float10 fVar4;
  double dVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  
  if ((DAT_007cde5c != 0) && ((MXCSR & 0x7f80) == 0x1f80 && (in_FPUControlWord & 0x7f) == 0x7f)) {
    uVar2 = (uint)((ulonglong)param_1 >> 0x20);
    uVar1 = uVar2 >> 0x14;
    uVar6 = (ulonglong)(0x433 - (uVar2 >> 0x14 & 0x7ff));
    if ((uVar1 & 0x800) == 0) {
      dVar5 = (double)(((ulonglong)param_1 >> uVar6) << uVar6);
      if (uVar1 < 0x3ff) {
        return (float10)(double)(-(ulonglong)(0.0 < param_1) & 0x3ff0000000000000);
      }
      if (uVar1 < 0x433) {
        return (float10)(dVar5 + (double)(-(ulonglong)(dVar5 < param_1) & 0x3ff0000000000000));
      }
    }
    else {
      if (uVar1 < 0xbff) {
        return (float10)-0.0;
      }
      if (uVar1 < 0xc33) {
        return (float10)(double)(((ulonglong)param_1 >> uVar6) << uVar6);
      }
    }
    if (NAN(param_1)) {
      ___libm_error_support(&param_1,&param_1,&param_1,0x3ec);
    }
    return (float10)param_1;
  }
  uVar2 = __ctrlfp(0x1b3f,0xffff);
  if ((param_1._6_2_ & 0x7ff0) == 0x7ff0) {
    iVar3 = FUN_006ff800();
    if (((iVar3 == 1) || (iVar3 == 2)) || (iVar3 == 3)) {
      __ctrlfp(uVar2,0xffff);
LAB_006ffe06:
      return (float10)param_1;
    }
    dVar5 = param_1 + 1.0;
    uVar7 = 8;
  }
  else {
    fVar4 = (float10)__frnd(SUB84(param_1,0),(int)((ulonglong)param_1 >> 0x20));
    if (((float10)param_1 == fVar4) || ((uVar2 & 0x20) != 0)) {
      dVar5 = (double)fVar4;
      __ctrlfp(uVar2,0xffff);
      param_1 = dVar5;
      goto LAB_006ffe06;
    }
    dVar5 = (double)fVar4;
    uVar7 = 0x10;
  }
  fVar4 = (float10)__except1(uVar7,0xc,param_1,dVar5,uVar2);
  return fVar4;
}


/* ==== 006f5d50  FUN_006f5d50  size=440 ==== */

undefined * FUN_006f5d50(void)

{
  ushort uVar1;
  undefined *puVar2;
  ushort in_FPUControlWord;
  undefined1 in_XMM0 [16];
  
  if ((MXCSR & 0x7f80) == 0x1f80 && (in_FPUControlWord & 0x7f) == 0x7f) {
    uVar1 = (in_XMM0._6_2_ & 0x7fff) + 0xcfd0;
    if (uVar1 < 0x10c6) {
      return &DAT_0073a410 +
             ((int)ROUND(in_XMM0._0_8_ * 10.185916357881302) + 0x1c7610U & 0x3f) * 0x20;
    }
    if ((short)uVar1 < 0x10c6) {
      return (undefined *)(uint)(in_XMM0._6_2_ & 0x7fff);
    }
  }
  puVar2 = (undefined *)FUN_006ffe5f();
  return puVar2;
}


/* ==== 006f5f10  FUN_006f5f10  size=453 ==== */

void FUN_006f5f10(void)

{
  ushort uVar1;
  ushort in_FPUControlWord;
  ushort in_XMM0_Wd;
  
  if ((MXCSR & 0x7f80) == 0x1f80 && (in_FPUControlWord & 0x7f) == 0x7f) {
    uVar1 = (in_XMM0_Wd & 0x7fff) + 0xcfd0;
    if (uVar1 < 0x10c6) {
      return;
    }
    if ((short)uVar1 < 0x10c6) {
      if (uVar1 >> 4 == 0xcfd) {
        return;
      }
      return;
    }
  }
  FUN_006fff4f();
  return;
}


/* ==== 006f60d8  operator()<>  size=65 ==== */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Multiple Matches With Same Base Name
    public: void __thiscall __crt_seh_guarded_call<void>::operator()<class
   <lambda_03b1d95aef87969028cfba75ccab2455>,class <lambda_6e4b09c48022b2350581041d5f6b0c4c> &,class
   <lambda_22bdf7517842c4b3e53723af5aa32b9e> >(class <lambda_03b1d95aef87969028cfba75ccab2455>
   &&,class <lambda_6e4b09c48022b2350581041d5f6b0c4c> &,class
   <lambda_22bdf7517842c4b3e53723af5aa32b9e> &&)
    public: void __thiscall __crt_seh_guarded_call<void>::operator()<class
   <lambda_4fdada1b837b2abbf20876fac97688ad>,class <lambda_b57350f2640456a0859d250846f69caf> &,class
   <lambda_eed5e4f92b5b7d55fa22c48c484aaa54> >(class <lambda_4fdada1b837b2abbf20876fac97688ad>
   &&,class <lambda_b57350f2640456a0859d250846f69caf> &,class
   <lambda_eed5e4f92b5b7d55fa22c48c484aaa54> &&)
    public: void __thiscall __crt_seh_guarded_call<void>::operator()<class
   <lambda_ceb1ee4838e85a9d631eb091e2fbe199>,class <lambda_ae742caa10f662c28703da3d2ea5e57e> &,class
   <lambda_cd08b5d6af4937fe54fc07d0c9bf6b37> >(class <lambda_ceb1ee4838e85a9d631eb091e2fbe199>
   &&,class <lambda_ae742caa10f662c28703da3d2ea5e57e> &,class
   <lambda_cd08b5d6af4937fe54fc07d0c9bf6b37> &&)
   
   Library: Visual Studio 2019 Release */

void operator()<>(undefined4 *param_1)

{
  undefined4 local_14;
  
  ___acrt_lock(*param_1);
  FUN_006f615f();
  FUN_006f6119();
  ExceptionList = local_14;
  return;
}


/* ==== 006f6119  FUN_006f6119  size=12 ==== */

void FUN_006f6119(void)

{
  int unaff_EBP;
  
  ___acrt_unlock(**(undefined4 **)(unaff_EBP + 0x10));
  return;
}


/* ==== 006f6125  FUN_006f6125  size=27 ==== */

uint FUN_006f6125(uint param_1)

{
  byte bVar1;
  
  bVar1 = (byte)DAT_007c5940 & 0x1f;
  return (param_1 ^ DAT_007c5940) >> bVar1 | (param_1 ^ DAT_007c5940) << 0x20 - bVar1;
}


/* ==== 006f615f  FUN_006f615f  size=196 ==== */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

void FUN_006f615f(void)

{
  code *pcVar1;
  undefined4 *in_ECX;
  undefined *puVar2;
  void *local_14;
  
  if (DAT_007c8c68 != '\0') {
    ExceptionList = local_14;
    return;
  }
  LOCK();
  DAT_007c8c60 = 1;
  UNLOCK();
  if (*(int *)*in_ECX == 0) {
    if (DAT_007c8c64 != DAT_007c5940) {
      pcVar1 = (code *)FUN_006f6125(DAT_007c8c64);
      guard_check_icall(0,0,0);
      (*pcVar1)();
    }
    puVar2 = &DAT_007c8d88;
  }
  else {
    if (*(int *)*in_ECX != 1) goto LAB_006f61d0;
    puVar2 = &DAT_007c8d94;
  }
  FUN_006f7758(puVar2);
LAB_006f61d0:
  if (*(int *)*in_ECX == 0) {
    FUN_006f7a0e(&DAT_0072b330,&DAT_0072b340);
  }
  FUN_006f7a0e(&DAT_0072b344,&DAT_0072b348);
  if (*(int *)in_ECX[1] == 0) {
    DAT_007c8c68 = '\x01';
    *(undefined1 *)in_ECX[2] = 1;
  }
  ExceptionList = local_14;
  return;
}


/* ==== 006f6247  FUN_006f6247  size=146 ==== */

void FUN_006f6247(undefined4 param_1,undefined4 param_2,int param_3)

{
  code *pcVar1;
  char cVar2;
  undefined1 *local_28;
  undefined4 *local_24;
  undefined1 *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0072a8d8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_3 == 0) {
    cVar2 = FUN_006e5e8f(DAT_007c5940 ^ (uint)&stack0xfffffffc);
    if (cVar2 != '\0') {
      FUN_006f6328(param_1);
    }
  }
  local_28 = (undefined1 *)&param_2;
  local_11 = 0;
  local_24 = &param_3;
  local_20 = &local_11;
  local_8 = 0;
  local_18 = 2;
  local_1c = 2;
  operator()<>(&local_1c,&local_28,&local_18);
  if (param_3 != 0) {
    ExceptionList = local_10;
    return;
  }
  FUN_006f62de(param_1);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* ==== 006f62de  FUN_006f62de  size=48 ==== */

void FUN_006f62de(UINT param_1)

{
  char cVar1;
  HANDLE hProcess;
  UINT uExitCode;
  
  cVar1 = FUN_006f630f();
  if (cVar1 != '\0') {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  FUN_006f6328(param_1);
                    /* WARNING: Subroutine does not return */
  ExitProcess(param_1);
}


/* ==== 006f630f  FUN_006f630f  size=25 ==== */

char FUN_006f630f(void)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_007000a7();
  if (iVar2 != 1) {
    cVar1 = FUN_00700082();
    return '\x01' - (cVar1 != '\0');
  }
  return '\0';
}


/* ==== 006f6328  FUN_006f6328  size=125 ==== */

void FUN_006f6328(undefined4 param_1)

{
  uint uVar1;
  BOOL BVar2;
  FARPROC pFVar3;
  HMODULE local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0070c280;
  local_10 = ExceptionList;
  uVar1 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = (HMODULE)0x0;
  BVar2 = GetModuleHandleExW(0,L"mscoree.dll",&local_14);
  if (BVar2 != 0) {
    pFVar3 = GetProcAddress(local_14,"CorExitProcess");
    if (pFVar3 != (FARPROC)0x0) {
      guard_check_icall(param_1,uVar1);
      (*pFVar3)();
    }
  }
  if (local_14 != (HMODULE)0x0) {
    FreeLibrary(local_14);
  }
  ExceptionList = local_10;
  return;
}


/* ==== 006f63aa  FUN_006f63aa  size=15 ==== */

void FUN_006f63aa(undefined4 param_1)

{
  DAT_007c8c64 = param_1;
  return;
}


/* ==== 006f63c8  FUN_006f63c8  size=15 ==== */

void FUN_006f63c8(void)

{
  FUN_006f6247(0,0,1);
  return;
}


/* ==== 006f63d7  FUN_006f63d7  size=22 ==== */

void FUN_006f63d7(undefined4 param_1)

{
  FUN_006f6247(param_1,2,0);
  return;
}


/* ==== 006f6413  FUN_006f6413  size=22 ==== */

void FUN_006f6413(undefined4 param_1)

{
  FUN_006f6247(param_1,0,0);
  return;
}


/* ==== 006f6429  FUN_006f6429  size=250 ==== */

float10 FUN_006f6429(double param_1,undefined4 *param_2)

{
  double dVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  float10 fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)FUN_006f390a();
    *puVar2 = 0x16;
    FUN_006e8c2f();
    fVar5 = (float10)0;
  }
  else {
    uVar3 = __ctrlfp(0x133f,0xffff);
    uVar6 = SUB84(param_1,0);
    uVar7 = (undefined4)((ulonglong)param_1 >> 0x20);
    if ((param_1._6_2_ & 0x7ff0) == 0x7ff0) {
      *param_2 = 0xffffffff;
      iVar4 = FUN_006ff800(uVar6,uVar7);
      if (((iVar4 == 1) || (iVar4 == 2)) || (iVar4 == 3)) {
        __ctrlfp(uVar3,0xffff);
        return (float10)param_1;
      }
      dVar1 = param_1 + 1.0;
      uVar6 = 8;
    }
    else {
      if ((param_1 != 0.0) || (iVar4 = FUN_007000ce(uVar6,uVar7), iVar4 == 0)) {
        fVar5 = (float10)FUN_006ff701(uVar6,uVar7,param_2);
        __ctrlfp(uVar3,0xffff);
        return (float10)(double)fVar5;
      }
      *param_2 = 0;
      dVar1 = -0.0;
      uVar6 = 0;
    }
    fVar5 = (float10)__except1(uVar6,0x17,param_1,dVar1,uVar3);
  }
  return fVar5;
}


/* ==== 006f6530  FUN_006f6530  size=1311 ==== */

uint FUN_006f6530(void)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  ushort in_FPUControlWord;
  undefined1 in_XMM0 [16];
  undefined1 auVar4 [16];
  undefined8 local_10;
  double local_8;
  
  auVar4._0_8_ = in_XMM0._0_8_;
  local_8 = auVar4._0_8_;
  if (((MXCSR & 0x7f80) != 0x1f80) || ((in_FPUControlWord & 0x7f) != 0x7f)) {
    local_10 = (double)CONCAT44(0x6f6a43,(undefined4)local_10);
    uVar2 = FUN_0070012f();
    return uVar2;
  }
  auVar4._8_8_ = in_XMM0._8_8_ >> 0x2c;
  uVar2 = in_XMM0._4_4_;
  uVar1 = uVar2 >> 0xc & 0x7ffff;
  if (uVar1 - 0x3fb00 < 0x3bb) {
    return uVar1 - 0x3fb00;
  }
  if (uVar1 - 0x3febb < 0x41) {
    return -(uint)(SUB161(auVar4 >> 0x3f,0) & 1) & 0x8000;
  }
  if (uVar1 - 0x3c300 < 0x3800) {
    return uVar1 - 0x3c300;
  }
  if (uVar1 - 0x3fefc < 4) {
    return in_XMM0._6_2_ & 0x8000;
  }
  if (uVar1 < 0x3ff00) {
    return uVar1;
  }
  if ((uVar2 & 0x7fffffff) != 0x3ff00000 || in_XMM0._0_4_ != 0) {
    if ((int)(((uVar2 & 0x7fffffff) + 0x80100000) - (uint)(in_XMM0._0_4_ == 0)) < 0) {
      local_10 = -NAN;
      uVar3 = 0x3a;
    }
    else {
      local_10 = auVar4._0_8_ + 0.0;
      uVar3 = 0x3f0;
    }
    uVar2 = ___libm_error_support(&local_8,&local_8,&local_10,uVar3);
    return uVar2;
  }
  return 0;
}


/* ==== 006f6a50  FUN_006f6a50  size=67 ==== */

void FUN_006f6a50(void)

{
  code *pcVar1;
  int iVar2;
  BOOL BVar3;
  
  iVar2 = ___acrt_get_sigabrt_handler();
  if (iVar2 != 0) {
    FUN_007002fd(0x16);
  }
  if ((DAT_007c5a80 & 2) != 0) {
    BVar3 = IsProcessorFeaturePresent(0x17);
    if (BVar3 != 0) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)();
    }
    ___acrt_call_reportfault(3,0x40000015,1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_006f63d7(3);
}


/* ==== 006f6a94  FUN_006f6a94  size=45 ==== */

uint FUN_006f6a94(uint param_1,int *param_2,undefined4 param_3)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = param_2 + 2;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 < 0) {
    uVar2 = FUN_006fda8f(param_1,param_2,param_3);
    return uVar2;
  }
  *(undefined1 *)*param_2 = (undefined1)param_1;
  *param_2 = *param_2 + 1;
  return param_1 & 0xff;
}


/* ==== 006f6ac1  FUN_006f6ac1  size=15 ==== */

void FUN_006f6ac1(undefined4 param_1)

{
  DAT_007c8c6c = param_1;
  return;
}


/* ==== 006f6ad0  FUN_006f6ad0  size=44 ==== */

bool FUN_006f6ad0(undefined4 param_1)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  
  pcVar1 = (code *)FUN_006f6afc();
  if (pcVar1 == (code *)0x0) {
    bVar3 = false;
  }
  else {
    guard_check_icall(param_1);
    iVar2 = (*pcVar1)();
    bVar3 = iVar2 != 0;
  }
  return bVar3;
}


/* ==== 006f6afc  FUN_006f6afc  size=75 ==== */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

undefined4 FUN_006f6afc(void)

{
  undefined4 uVar1;
  undefined4 local_14;
  
  ___acrt_lock(0);
  uVar1 = FUN_006f6125(DAT_007c8c6c);
  FUN_006f6b4a();
  ExceptionList = local_14;
  return uVar1;
}


/* ==== 006f6b4a  FUN_006f6b4a  size=9 ==== */

void FUN_006f6b4a(void)

{
  ___acrt_unlock(0);
  return;
}


/* ==== 006f6b53  FUN_006f6b53  size=52 ==== */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

void FUN_006f6b53(void)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = FUN_006f8965();
  pcVar1 = *(code **)(iVar2 + 0xc);
  if (pcVar1 != (code *)0x0) {
    guard_check_icall();
    (*pcVar1)();
  }
                    /* WARNING: Subroutine does not return */
  FUN_006f6a50();
}


/* ==== 006f6b8f  FUN_006f6b8f  size=326 ==== */

undefined4 FUN_006f6b8f(uint param_1,int param_2)

{
  uint *puVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  
  piVar5 = (int *)FUN_006f8ab6();
  if (piVar5 != (int *)0x0) {
    puVar1 = (uint *)*piVar5;
    for (puVar7 = puVar1; puVar7 != puVar1 + 0x24; puVar7 = puVar7 + 3) {
      if (*puVar7 == param_1) {
        if (puVar7 == (uint *)0x0) {
          return 0;
        }
        pcVar2 = (code *)puVar7[2];
        if (pcVar2 == (code *)0x0) {
          return 0;
        }
        if (pcVar2 == (code *)0x5) {
          puVar7[2] = 0;
          return 1;
        }
        if (pcVar2 != (code *)0x1) {
          iVar3 = piVar5[1];
          piVar5[1] = param_2;
          if (puVar7[1] == 8) {
            for (puVar8 = puVar1 + 9; puVar8 != puVar1 + 0x24; puVar8 = puVar8 + 3) {
              puVar8[2] = 0;
            }
            iVar4 = piVar5[2];
            iVar6 = iVar4;
            if (*puVar7 < 0xc0000092) {
              if (*puVar7 == 0xc0000091) {
                iVar6 = 0x84;
              }
              else if (*puVar7 == 0xc000008d) {
                iVar6 = 0x82;
              }
              else if (*puVar7 == 0xc000008e) {
                iVar6 = 0x83;
              }
              else if (*puVar7 == 0xc000008f) {
                iVar6 = 0x86;
              }
              else {
                if (*puVar7 != 0xc0000090) goto LAB_006f6ca3;
                iVar6 = 0x81;
              }
LAB_006f6ca0:
              piVar5[2] = iVar6;
            }
            else {
              if (*puVar7 == 0xc0000092) {
                iVar6 = 0x8a;
                goto LAB_006f6ca0;
              }
              if (*puVar7 == 0xc0000093) {
                iVar6 = 0x85;
                goto LAB_006f6ca0;
              }
              if (*puVar7 == 0xc00002b4) {
                iVar6 = 0x8e;
                goto LAB_006f6ca0;
              }
              if (*puVar7 == 0xc00002b5) {
                iVar6 = 0x8d;
                goto LAB_006f6ca0;
              }
            }
LAB_006f6ca3:
            guard_check_icall(8,iVar6);
            (*pcVar2)();
            piVar5[2] = iVar4;
          }
          else {
            puVar7[2] = 0;
            guard_check_icall(puVar7[1]);
            (*pcVar2)();
          }
          piVar5[1] = iVar3;
        }
        return 0xffffffff;
      }
    }
  }
  return 0;
}


/* ==== 006f6cd5  FUN_006f6cd5  size=317 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_006f6cd5(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  char *pcVar5;
  undefined4 local_10;
  int *local_c;
  int local_8;
  
  if (param_1 == 0) {
    iVar2 = 0;
  }
  else if ((param_1 == 2) || (param_1 == 1)) {
    ___acrt_initialize_multibyte();
    ___acrt_GetModuleFileNameA(0,&DAT_007c8c70,0x104);
    _DAT_007c9308 = &DAT_007c8c70;
    if ((DAT_007c9318 == (char *)0x0) || (pcVar5 = DAT_007c9318, *DAT_007c9318 == '\0')) {
      pcVar5 = &DAT_007c8c70;
    }
    local_8 = 0;
    local_10 = 0;
    FUN_006f6e12(pcVar5,0,0,&local_8,&local_10);
    piVar4 = (int *)___acrt_allocate_buffer_for_argv(local_8,local_10,1);
    if (piVar4 == (int *)0x0) {
      puVar3 = (undefined4 *)FUN_006f390a();
      iVar2 = 0xc;
      *puVar3 = 0xc;
    }
    else {
      FUN_006f6e12(pcVar5,piVar4,piVar4 + local_8,&local_8,&local_10);
      if (param_1 != 1) {
        local_c = (int *)0x0;
        iVar2 = FUN_00700b8c(piVar4,&local_c);
        piVar1 = local_c;
        if (iVar2 == 0) {
          _DAT_007c930c = 0;
          iVar2 = *local_c;
          while (iVar2 != 0) {
            local_c = local_c + 1;
            _DAT_007c930c = _DAT_007c930c + 1;
            iVar2 = *local_c;
          }
          local_c = (int *)0x0;
          _DAT_007c9310 = piVar1;
          FUN_006f9a4d(0);
          iVar2 = 0;
        }
        else {
          FUN_006f9a4d(local_c);
        }
        local_c = (int *)0x0;
        FUN_006f9a4d(piVar4);
        return iVar2;
      }
      _DAT_007c930c = local_8 + -1;
      iVar2 = 0;
      _DAT_007c9310 = piVar4;
    }
    FUN_006f9a4d(0);
  }
  else {
    puVar3 = (undefined4 *)FUN_006f390a();
    iVar2 = 0x16;
    *puVar3 = 0x16;
    FUN_006e8c2f();
  }
  return iVar2;
}


/* ==== 006f6e12  FUN_006f6e12  size=372 ==== */

void FUN_006f6e12(char *param_1,undefined4 *param_2,char *param_3,int *param_4,int *param_5)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  
  *param_5 = 0;
  *param_4 = 1;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = param_3;
    param_2 = param_2 + 1;
  }
  bVar1 = false;
  bVar2 = false;
  do {
    if (*param_1 == '\"') {
      bVar1 = !bVar1;
      cVar3 = '\"';
      pcVar6 = param_1 + 1;
      bVar2 = bVar1;
    }
    else {
      *param_5 = *param_5 + 1;
      if (param_3 != (char *)0x0) {
        *param_3 = *param_1;
        param_3 = param_3 + 1;
      }
      cVar3 = *param_1;
      pcVar6 = param_1 + 1;
      iVar5 = __ismbblead((int)cVar3);
      if (iVar5 != 0) {
        *param_5 = *param_5 + 1;
        if (param_3 != (char *)0x0) {
          *param_3 = *pcVar6;
          param_3 = param_3 + 1;
        }
        pcVar6 = param_1 + 2;
      }
      if (cVar3 == '\0') {
        pcVar6 = pcVar6 + -1;
        goto LAB_006f6ea1;
      }
    }
    param_1 = pcVar6;
  } while ((bVar2) || ((cVar3 != ' ' && (cVar3 != '\t'))));
  if (param_3 != (char *)0x0) {
    param_3[-1] = '\0';
  }
LAB_006f6ea1:
  bVar1 = false;
  while (cVar3 = *pcVar6, cVar3 != '\0') {
    while ((cVar3 == ' ' || (cVar3 == '\t'))) {
      pcVar6 = pcVar6 + 1;
      cVar3 = *pcVar6;
    }
    if (cVar3 == '\0') break;
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = param_3;
      param_2 = param_2 + 1;
    }
    *param_4 = *param_4 + 1;
    while( true ) {
      bVar2 = true;
      uVar4 = 0;
      for (; *pcVar6 == '\\'; pcVar6 = pcVar6 + 1) {
        uVar4 = uVar4 + 1;
      }
      if (*pcVar6 == '\"') {
        if ((uVar4 & 1) == 0) {
          if ((bVar1) && (pcVar6[1] == '\"')) {
            pcVar6 = pcVar6 + 1;
          }
          else {
            bVar2 = false;
            bVar1 = !bVar1;
          }
        }
        uVar4 = uVar4 >> 1;
      }
      while (uVar4 != 0) {
        uVar4 = uVar4 - 1;
        if (param_3 != (char *)0x0) {
          *param_3 = '\\';
          param_3 = param_3 + 1;
        }
        *param_5 = *param_5 + 1;
      }
      cVar3 = *pcVar6;
      if ((cVar3 == '\0') || ((!bVar1 && ((cVar3 == ' ' || (cVar3 == '\t')))))) break;
      if (bVar2) {
        if (param_3 != (char *)0x0) {
          *param_3 = cVar3;
          param_3 = param_3 + 1;
        }
        iVar5 = __ismbblead((int)*pcVar6);
        if (iVar5 != 0) {
          pcVar6 = pcVar6 + 1;
          *param_5 = *param_5 + 1;
          if (param_3 != (char *)0x0) {
            *param_3 = *pcVar6;
            param_3 = param_3 + 1;
          }
        }
        *param_5 = *param_5 + 1;
      }
      pcVar6 = pcVar6 + 1;
    }
    if (param_3 != (char *)0x0) {
      *param_3 = '\0';
      param_3 = param_3 + 1;
    }
    *param_5 = *param_5 + 1;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  *param_4 = *param_4 + 1;
  return;
}


/* ==== 006f6fd5  FUN_006f6fd5  size=11 ==== */

void FUN_006f6fd5(void)

{
  FUN_006f6cd5();
  return;
}


/* ==== 006f6fe0  FUN_006f6fe0  size=44 ==== */

int FUN_006f6fe0(void)

{
  int iVar1;
  
  iVar1 = DAT_007c8d78;
  if (DAT_007c8d78 == 0) {
    if (DAT_007c8d7c != 0) {
      iVar1 = FUN_006f7038();
      if (iVar1 == 0) {
        return DAT_007c8d78;
      }
      iVar1 = FUN_006f7316();
      if (iVar1 == 0) {
        return DAT_007c8d78;
      }
    }
    iVar1 = 0;
  }
  return iVar1;
}


/* ==== 006f700c  FUN_006f700c  size=44 ==== */

int FUN_006f700c(void)

{
  int iVar1;
  
  iVar1 = DAT_007c8d7c;
  if (DAT_007c8d7c == 0) {
    if (DAT_007c8d78 != 0) {
      iVar1 = FUN_006f7092();
      if (iVar1 == 0) {
        return DAT_007c8d7c;
      }
      iVar1 = FUN_006f7399();
      if (iVar1 == 0) {
        return DAT_007c8d7c;
      }
    }
    iVar1 = 0;
  }
  return iVar1;
}


/* ==== 006f7038  FUN_006f7038  size=90 ==== */

undefined4 FUN_006f7038(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (DAT_007c8d78 != 0) {
    return 0;
  }
  ___acrt_initialize_multibyte();
  iVar1 = FUN_00701729();
  if (iVar1 == 0) {
    FUN_006f9a4d(0);
    return 0xffffffff;
  }
  iVar2 = FUN_006f70e7(iVar1);
  if (iVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = 0;
    DAT_007c8d78 = iVar2;
    DAT_007c8d84 = iVar2;
  }
  FUN_006f9a4d(0);
  FUN_006f9a4d(iVar1);
  return uVar3;
}


/* ==== 006f7092  FUN_006f7092  size=85 ==== */

undefined4 FUN_006f7092(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (DAT_007c8d7c != 0) {
    return 0;
  }
  iVar1 = FUN_007017c9();
  if (iVar1 == 0) {
    FUN_006f9a4d(0);
    return 0xffffffff;
  }
  iVar2 = FUN_006f71c9(iVar1);
  if (iVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = 0;
    DAT_007c8d7c = iVar2;
    DAT_007c8d80 = iVar2;
  }
  FUN_006f9a4d(0);
  FUN_006f9a4d(iVar1);
  return uVar3;
}


/* ==== 006f70e7  FUN_006f70e7  size=225 ==== */

int * FUN_006f70e7(char *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int *local_8;
  
  iVar5 = 0;
  cVar1 = *param_1;
  pcVar4 = param_1;
  while (cVar1 != '\0') {
    if (cVar1 != '=') {
      iVar5 = iVar5 + 1;
    }
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    cVar1 = *pcVar4;
  }
  piVar2 = (int *)__calloc_base(iVar5 + 1,4);
  local_8 = piVar2;
  if (piVar2 == (int *)0x0) {
    FUN_006f9a4d(0);
    piVar2 = (int *)0x0;
  }
  else {
    for (; *param_1 != '\0'; param_1 = param_1 + (int)pcVar4) {
      pcVar4 = param_1;
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      pcVar4 = pcVar4 + (1 - (int)(param_1 + 1));
      if (*param_1 != '=') {
        iVar5 = __calloc_base(pcVar4,1);
        if (iVar5 == 0) {
          free_environment<>(piVar2);
          FUN_006f9a4d(0);
          FUN_006f9a4d(0);
          return (int *)0x0;
        }
        iVar3 = FUN_006f8593(iVar5,pcVar4,param_1);
        if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
          __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        *local_8 = iVar5;
        local_8 = local_8 + 1;
        FUN_006f9a4d(0);
      }
    }
    FUN_006f9a4d(0);
  }
  return piVar2;
}


/* ==== 006f71c9  FUN_006f71c9  size=285 ==== */

int * FUN_006f71c9(short *param_1)

{
  short sVar1;
  short sVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  short *psVar6;
  short *psVar7;
  int iVar8;
  int *local_c;
  
  iVar8 = 0;
  sVar1 = *param_1;
  psVar7 = param_1;
  while (sVar1 != 0) {
    if (sVar1 != 0x3d) {
      iVar8 = iVar8 + 1;
    }
    psVar6 = psVar7;
    do {
      sVar1 = *psVar6;
      psVar6 = psVar6 + 1;
    } while (sVar1 != 0);
    psVar7 = psVar7 + ((int)psVar6 - (int)(psVar7 + 1) >> 1) + 1;
    sVar1 = *psVar7;
  }
  piVar3 = (int *)__calloc_base(iVar8 + 1,4);
  if (piVar3 == (int *)0x0) {
    FUN_006f9a4d(0);
    piVar3 = (int *)0x0;
  }
  else {
    sVar1 = *param_1;
    local_c = piVar3;
    while (sVar1 != 0) {
      psVar7 = param_1;
      do {
        sVar2 = *psVar7;
        psVar7 = psVar7 + 1;
      } while (sVar2 != 0);
      iVar8 = ((int)psVar7 - (int)(param_1 + 1) >> 1) + 1;
      if (sVar1 != 0x3d) {
        iVar4 = __calloc_base(iVar8,2);
        if (iVar4 == 0) {
          free_environment<>(piVar3);
          FUN_006f9a4d(0);
          FUN_006f9a4d(0);
          return (int *)0x0;
        }
        iVar5 = FUN_00701592(iVar4,iVar8,param_1);
        if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
          __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        *local_c = iVar4;
        local_c = local_c + 1;
        FUN_006f9a4d(0);
      }
      param_1 = param_1 + iVar8;
      sVar1 = *param_1;
    }
    FUN_006f9a4d(0);
  }
  return piVar3;
}


/* ==== 006f72e7  free_environment<>  size=47 ==== */

/* Library Function - Multiple Matches With Same Base Name
    void __cdecl free_environment<char>(char * * const)
    void __cdecl free_environment<wchar_t>(wchar_t * * const)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void free_environment<>(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    piVar2 = param_1;
    while (iVar1 != 0) {
      FUN_006f9a4d(iVar1);
      piVar2 = piVar2 + 1;
      iVar1 = *piVar2;
    }
    FUN_006f9a4d(param_1);
  }
  return;
}


/* ==== 006f7316  FUN_006f7316  size=131 ==== */

undefined4 FUN_006f7316(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  
  if (DAT_007c8d7c == (int *)0x0) {
LAB_006f7392:
    uVar3 = 0xffffffff;
  }
  else {
    iVar1 = *DAT_007c8d7c;
    piVar4 = DAT_007c8d7c;
    while (iVar1 != 0) {
      iVar1 = FUN_00701686(0,0,iVar1,0xffffffff,0,0,0,0);
      if (iVar1 == 0) goto LAB_006f7392;
      iVar2 = __calloc_base(iVar1,1);
      iVar5 = 0;
      if ((iVar2 == 0) ||
         (iVar1 = FUN_00701686(0,0,*piVar4,0xffffffff,iVar2,iVar1,0,0), iVar5 = iVar2, iVar1 == 0))
      {
        FUN_006f9a4d(iVar5);
        goto LAB_006f7392;
      }
      FUN_00701f51(iVar2,0);
      FUN_006f9a4d(0);
      piVar4 = piVar4 + 1;
      iVar1 = *piVar4;
    }
    uVar3 = 0;
  }
  return uVar3;
}


/* ==== 006f7399  FUN_006f7399  size=129 ==== */

undefined4 FUN_006f7399(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  
  if (DAT_007c8d78 == (int *)0x0) {
LAB_006f740f:
    uVar3 = 0xffffffff;
  }
  else {
    iVar1 = *DAT_007c8d78;
    piVar4 = DAT_007c8d78;
    while (iVar1 != 0) {
      iVar1 = FUN_006fdb32(0,0,iVar1,0xffffffff,0,0);
      if (iVar1 == 0) goto LAB_006f740f;
      iVar2 = __calloc_base(iVar1,2);
      if (iVar2 == 0) {
        iVar2 = 0;
LAB_006f7409:
        FUN_006f9a4d(iVar2);
        goto LAB_006f740f;
      }
      iVar1 = FUN_006fdb32(0,0,*piVar4,0xffffffff,iVar2,iVar1);
      if (iVar1 == 0) goto LAB_006f7409;
      FUN_00701f5c(iVar2,0);
      FUN_006f9a4d(0);
      piVar4 = piVar4 + 1;
      iVar1 = *piVar4;
    }
    uVar3 = 0;
  }
  return uVar3;
}


/* ==== 006f741a  uninitialize_environment_internal<>  size=27 ==== */

/* Library Function - Multiple Matches With Same Base Name
    void __cdecl uninitialize_environment_internal<char>(char * * &)
    void __cdecl uninitialize_environment_internal<wchar_t>(wchar_t * * &)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void uninitialize_environment_internal<>(int *param_1)

{
  if (*param_1 != DAT_007c8d84) {
    free_environment<>(*param_1);
  }
  return;
}


/* ==== 006f7435  uninitialize_environment_internal<>  size=27 ==== */

/* Library Function - Multiple Matches With Same Base Name
    void __cdecl uninitialize_environment_internal<char>(char * * &)
    void __cdecl uninitialize_environment_internal<wchar_t>(wchar_t * * &)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void uninitialize_environment_internal<>(int *param_1)

{
  if (*param_1 != DAT_007c8d80) {
    free_environment<>(*param_1);
  }
  return;
}


/* ==== 006f7450  thunk_FUN_006f6fe0  size=5 ==== */

int thunk_FUN_006f6fe0(void)

{
  int iVar1;
  
  iVar1 = DAT_007c8d78;
  if (DAT_007c8d78 == 0) {
    if (DAT_007c8d7c != 0) {
      iVar1 = FUN_006f7038();
      if (iVar1 == 0) {
        return DAT_007c8d78;
      }
      iVar1 = FUN_006f7316();
      if (iVar1 == 0) {
        return DAT_007c8d78;
      }
    }
    iVar1 = 0;
  }
  return iVar1;
}


/* ==== 006f7455  thunk_FUN_006f700c  size=5 ==== */

int thunk_FUN_006f700c(void)

{
  int iVar1;
  
  iVar1 = DAT_007c8d7c;
  if (DAT_007c8d7c == 0) {
    if (DAT_007c8d78 != 0) {
      iVar1 = FUN_006f7092();
      if (iVar1 == 0) {
        return DAT_007c8d7c;
      }
      iVar1 = FUN_006f7399();
      if (iVar1 == 0) {
        return DAT_007c8d7c;
      }
    }
    iVar1 = 0;
  }
  return iVar1;
}


/* ==== 006f745a  FUN_006f745a  size=76 ==== */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_006f745a(void)

{
  uninitialize_environment_internal<>(&DAT_007c8d78);
  uninitialize_environment_internal<>(&DAT_007c8d7c);
  free_environment<>(DAT_007c8d84);
  free_environment<>(DAT_007c8d80);
  return;
}


/* ==== 006f74ab  thunk_FUN_006f7038  size=5 ==== */

undefined4 thunk_FUN_006f7038(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (DAT_007c8d78 != 0) {
    return 0;
  }
  ___acrt_initialize_multibyte();
  iVar1 = FUN_00701729();
  if (iVar1 == 0) {
    FUN_006f9a4d(0);
    return 0xffffffff;
  }
  iVar2 = FUN_006f70e7(iVar1);
  if (iVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = 0;
    DAT_007c8d78 = iVar2;
    DAT_007c8d84 = iVar2;
  }
  FUN_006f9a4d(0);
  FUN_006f9a4d(iVar1);
  return uVar3;
}


/* ==== 006f74b0  operator()<<lambda_69a2805e680e0e292e8ba93315fe43a8>,<lambda_f03950bc5685219e0bcd2087efbe011e>&,<lambda_03fcd07e894ec930e3f35da366ca99d6>_>  size=76 ==== */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    public: int __thiscall __crt_seh_guarded_call<int>::operator()<class
   <lambda_69a2805e680e0e292e8ba93315fe43a8>,class <lambda_f03950bc5685219e0bcd2087efbe011e> &,class
   <lambda_03fcd07e894ec930e3f35da366ca99d6> >(class <lambda_69a2805e680e0e292e8ba93315fe43a8>
   &&,class <lambda_f03950bc5685219e0bcd2087efbe011e> &,class
   <lambda_03fcd07e894ec930e3f35da366ca99d6> &&)
   
   Library: Visual Studio 2019 Release */

int __thiscall
__crt_seh_guarded_call<int>::
operator()<<lambda_69a2805e680e0e292e8ba93315fe43a8>,<lambda_f03950bc5685219e0bcd2087efbe011e>&,<lambda_03fcd07e894ec930e3f35da366ca99d6>_>
          (__crt_seh_guarded_call<int> *this,<lambda_69a2805e680e0e292e8ba93315fe43a8> *param_1,
          <lambda_f03950bc5685219e0bcd2087efbe011e> *param_2,
          <lambda_03fcd07e894ec930e3f35da366ca99d6> *param_3)

{
  int iVar1;
  undefined4 local_14;
  
  ___acrt_lock(*(undefined4 *)param_1);
  iVar1 = <lambda_f03950bc5685219e0bcd2087efbe011e>::operator()(param_2);
  FUN_006f74ff();
  ExceptionList = local_14;
  return iVar1;
}


/* ==== 006f74ff  FUN_006f74ff  size=12 ==== */

void FUN_006f74ff(void)

{
  int unaff_EBP;
  
  ___acrt_unlock(**(undefined4 **)(unaff_EBP + 0x10));
  return;
}


/* ==== 006f750b  operator()<<lambda_8e746cf0007f6ed984d6f78af1fec997>,<lambda_22ebabd17bc4fa466a2aca6d8deb888d>&,<lambda_18ed0c0b38a6dc0daf1e7ac6d6adf05e>_>  size=76 ==== */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    public: int __thiscall __crt_seh_guarded_call<int>::operator()<class
   <lambda_8e746cf0007f6ed984d6f78af1fec997>,class <lambda_22ebabd17bc4fa466a2aca6d8deb888d> &,class
   <lambda_18ed0c0b38a6dc0daf1e7ac6d6adf05e> >(class <lambda_8e746cf0007f6ed984d6f78af1fec997>
   &&,class <lambda_22ebabd17bc4fa466a2aca6d8deb888d> &,class
   <lambda_18ed0c0b38a6dc0daf1e7ac6d6adf05e> &&)
   
   Library: Visual Studio 2019 Release */

int __thiscall
__crt_seh_guarded_call<int>::
operator()<<lambda_8e746cf0007f6ed984d6f78af1fec997>,<lambda_22ebabd17bc4fa466a2aca6d8deb888d>&,<lambda_18ed0c0b38a6dc0daf1e7ac6d6adf05e>_>
          (__crt_seh_guarded_call<int> *this,<lambda_8e746cf0007f6ed984d6f78af1fec997> *param_1,
          <lambda_22ebabd17bc4fa466a2aca6d8deb888d> *param_2,
          <lambda_18ed0c0b38a6dc0daf1e7ac6d6adf05e> *param_3)

{
  int iVar1;
  undefined4 local_14;
  
  ___acrt_lock(*(undefined4 *)param_1);
  iVar1 = FUN_006f7566();
  FUN_006f755a();
  ExceptionList = local_14;
  return iVar1;
}


/* ==== 006f755a  FUN_006f755a  size=12 ==== */

void FUN_006f755a(void)

{
  int unaff_EBP;
  
  ___acrt_unlock(**(undefined4 **)(unaff_EBP + 0x10));
  return;
}


/* ==== 006f7566  FUN_006f7566  size=258 ==== */

undefined4 FUN_006f7566(void)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  _func_void_void_ptr_ulong_void_ptr *p_Var4;
  undefined4 uVar5;
  byte bVar6;
  undefined4 *in_ECX;
  _func_void_void_ptr_ulong_void_ptr *p_Var7;
  _func_void_void_ptr_ulong_void_ptr *p_Var8;
  uint uVar9;
  _func_void_void_ptr_ulong_void_ptr *p_Var10;
  
  puVar1 = *(uint **)*in_ECX;
  if (puVar1 == (uint *)0x0) {
LAB_006f7660:
    uVar5 = 0xffffffff;
  }
  else {
    bVar6 = (byte)DAT_007c5940 & 0x1f;
    p_Var10 = (_func_void_void_ptr_ulong_void_ptr *)
              ((puVar1[1] ^ DAT_007c5940) >> bVar6 | (puVar1[1] ^ DAT_007c5940) << 0x20 - bVar6);
    p_Var8 = (_func_void_void_ptr_ulong_void_ptr *)
             ((puVar1[2] ^ DAT_007c5940) >> bVar6 | (puVar1[2] ^ DAT_007c5940) << 0x20 - bVar6);
    p_Var7 = (_func_void_void_ptr_ulong_void_ptr *)
             ((*puVar1 ^ DAT_007c5940) >> bVar6 | (*puVar1 ^ DAT_007c5940) << 0x20 - bVar6);
    p_Var4 = p_Var7;
    if (p_Var10 == p_Var8) {
      uVar9 = (int)p_Var8 - (int)p_Var7 >> 2;
      uVar3 = 0x200;
      if (uVar9 < 0x201) {
        uVar3 = uVar9;
      }
      uVar3 = uVar3 + uVar9;
      if (uVar3 == 0) {
        uVar3 = 0x20;
      }
      if (uVar3 < uVar9) {
LAB_006f75de:
        uVar3 = uVar9 + 4;
        p_Var4 = (_func_void_void_ptr_ulong_void_ptr *)__recalloc_base(p_Var7,uVar3,4);
        FUN_006f9a4d(0);
        if (p_Var4 == (_func_void_void_ptr_ulong_void_ptr *)0x0) goto LAB_006f7660;
      }
      else {
        p_Var4 = (_func_void_void_ptr_ulong_void_ptr *)__recalloc_base(p_Var7,uVar3,4);
        FUN_006f9a4d(0);
        if (p_Var4 == (_func_void_void_ptr_ulong_void_ptr *)0x0) goto LAB_006f75de;
      }
      uVar2 = DAT_007c5940;
      p_Var8 = p_Var4 + uVar3 * 4;
      p_Var10 = p_Var4 + uVar9 * 4;
      for (p_Var7 = p_Var10; p_Var7 != p_Var8; p_Var7 = p_Var7 + 4) {
        *(uint *)p_Var7 = uVar2;
      }
    }
    p_Var7 = __crt_fast_encode_pointer<void_(__stdcall*)(void*,unsigned_long,void*)>
                       (*(_func_void_void_ptr_ulong_void_ptr **)in_ECX[1]);
    *(_func_void_void_ptr_ulong_void_ptr **)p_Var10 = p_Var7;
    p_Var4 = __crt_fast_encode_pointer<void_(__stdcall*)(void*,unsigned_long,void*)>(p_Var4);
    **(undefined4 **)*in_ECX = p_Var4;
    p_Var10 = __crt_fast_encode_pointer<void_(__stdcall*)(void*,unsigned_long,void*)>(p_Var10 + 4);
    *(_func_void_void_ptr_ulong_void_ptr **)(*(int *)*in_ECX + 4) = p_Var10;
    p_Var10 = __crt_fast_encode_pointer<void_(__stdcall*)(void*,unsigned_long,void*)>(p_Var8);
    *(_func_void_void_ptr_ulong_void_ptr **)(*(int *)*in_ECX + 8) = p_Var10;
    uVar5 = 0;
  }
  return uVar5;
}


/* ==== 006f7668  operator()  size=218 ==== */

/* Library Function - Single Match
    public: int __thiscall <lambda_f03950bc5685219e0bcd2087efbe011e>::operator()(void)const 
   
   Library: Visual Studio 2019 Release */

int __thiscall
<lambda_f03950bc5685219e0bcd2087efbe011e>::operator()
          (<lambda_f03950bc5685219e0bcd2087efbe011e> *this)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  sbyte sVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  
  uVar1 = DAT_007c5940;
  puVar9 = (uint *)**(int **)this;
  if (puVar9 == (uint *)0x0) {
    iVar2 = -1;
  }
  else {
    uVar6 = DAT_007c5940 & 0x1f;
    sVar5 = (sbyte)uVar6;
    puVar8 = (uint *)((*puVar9 ^ DAT_007c5940) >> sVar5 | (*puVar9 ^ DAT_007c5940) << 0x20 - sVar5);
    puVar9 = (uint *)((puVar9[1] ^ DAT_007c5940) >> sVar5 |
                     (puVar9[1] ^ DAT_007c5940) << 0x20 - sVar5);
    if ((puVar8 != (uint *)0x0) &&
       (uVar3 = DAT_007c5940, puVar10 = puVar9, puVar8 != (uint *)0xffffffff)) {
      while (puVar9 = puVar9 + -1, puVar8 <= puVar9) {
        if (*puVar9 != uVar1) {
          uVar3 = *puVar9 ^ uVar3;
          *puVar9 = uVar1;
          guard_check_icall();
          (*(code *)(uVar3 >> (sbyte)uVar6 | uVar3 << 0x20 - (sbyte)uVar6))();
          uVar6 = DAT_007c5940 & 0x1f;
          uVar3 = *(uint *)**(int **)this ^ DAT_007c5940;
          sVar5 = (sbyte)uVar6;
          puVar7 = (uint *)(uVar3 >> sVar5 | uVar3 << 0x20 - sVar5);
          uVar3 = ((uint *)**(int **)this)[1] ^ DAT_007c5940;
          puVar4 = (uint *)(uVar3 >> sVar5 | uVar3 << 0x20 - sVar5);
          uVar3 = DAT_007c5940;
          if ((puVar7 != puVar8) || (puVar4 != puVar10)) {
            puVar9 = puVar4;
            puVar10 = puVar4;
            puVar8 = puVar7;
          }
        }
      }
      if (puVar8 != (uint *)0xffffffff) {
        FUN_006f9a4d(puVar8);
        uVar3 = DAT_007c5940;
      }
      *(uint *)**(undefined4 **)this = uVar3;
      *(uint *)(**(int **)this + 4) = uVar3;
      *(uint *)(**(int **)this + 8) = uVar3;
    }
    iVar2 = 0;
  }
  return iVar2;
}


/* ==== 006f7742  FUN_006f7742  size=22 ==== */

void FUN_006f7742(undefined4 param_1)

{
  __register_onexit_function(&DAT_007c8d88,param_1);
  return;
}


/* ==== 006f7758  FUN_006f7758  size=57 ==== */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_006f7758(void)

{
  undefined4 local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  __crt_seh_guarded_call<int> local_11 [9];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x10;
  local_1c = &stack0x00000004;
  local_8 = 0;
  local_18 = 2;
  local_20 = 2;
  __crt_seh_guarded_call<int>::
  operator()<<lambda_69a2805e680e0e292e8ba93315fe43a8>,<lambda_f03950bc5685219e0bcd2087efbe011e>&,<lambda_03fcd07e894ec930e3f35da366ca99d6>_>
            (local_11,(<lambda_69a2805e680e0e292e8ba93315fe43a8> *)&local_20,
             (<lambda_f03950bc5685219e0bcd2087efbe011e> *)&local_1c,
             (<lambda_03fcd07e894ec930e3f35da366ca99d6> *)&local_18);
  return;
}


/* ==== 006f7858  uninitialize_allocated_memory  size=23 ==== */

/* Library Function - Single Match
    _uninitialize_allocated_memory
   
   Library: Visual Studio 2019 Release */

undefined1 __cdecl uninitialize_allocated_memory(void)

{
  <lambda_af42a3ee9806e9a7305d451646e05244> local_5;
  
  <lambda_af42a3ee9806e9a7305d451646e05244>::operator()
            (&local_5,(__crt_multibyte_data **)&DAT_007c92fc);
  return 1;
}


/* ==== 006f78bf  operator()  size=46 ==== */

/* Library Function - Single Match
    public: void __thiscall <lambda_af42a3ee9806e9a7305d451646e05244>::operator()(struct
   __crt_multibyte_data * &)const 
   
   Library: Visual Studio 2019 Release */

void __thiscall
<lambda_af42a3ee9806e9a7305d451646e05244>::operator()
          (<lambda_af42a3ee9806e9a7305d451646e05244> *this,__crt_multibyte_data **param_1)

{
  int iVar1;
  
  LOCK();
  iVar1 = *(int *)*param_1 + -1;
  *(int *)*param_1 = iVar1;
  UNLOCK();
  if ((iVar1 == 0) && (*param_1 != (__crt_multibyte_data *)&DAT_007c5e50)) {
    FUN_006f9a4d(*param_1);
    *param_1 = (__crt_multibyte_data *)&DAT_007c5e50;
  }
  return;
}


/* ==== 006f792f  FUN_006f792f  size=6 ==== */

undefined4 FUN_006f792f(void)

{
  return DAT_007c8da0;
}


/* ==== 006f7935  FUN_006f7935  size=15 ==== */

void FUN_006f7935(undefined4 param_1)

{
  DAT_007c8da0 = param_1;
  return;
}


/* ==== 006f7944  FUN_006f7944  size=29 ==== */

bool FUN_006f7944(void)

{
  byte bVar1;
  
  bVar1 = (byte)DAT_007c5940 & 0x1f;
  return (DAT_007c8da4 ^ DAT_007c5940) >> bVar1 != 0 ||
         (DAT_007c8da4 ^ DAT_007c5940) << 0x20 - bVar1 != 0;
}


/* ==== 006f7961  FUN_006f7961  size=15 ==== */

void FUN_006f7961(undefined4 param_1)

{
  DAT_007c8da4 = param_1;
  return;
}


/* ==== 006f7970  FUN_006f7970  size=54 ==== */

undefined4 FUN_006f7970(undefined4 param_1)

{
  undefined4 uVar1;
  byte bVar2;
  code *pcVar3;
  
  bVar2 = (byte)DAT_007c5940 & 0x1f;
  pcVar3 = (code *)((DAT_007c8da4 ^ DAT_007c5940) >> bVar2 |
                   (DAT_007c8da4 ^ DAT_007c5940) << 0x20 - bVar2);
  if (pcVar3 == (code *)0x0) {
    uVar1 = 0;
  }
  else {
    guard_check_icall(param_1);
    uVar1 = (*pcVar3)();
  }
  return uVar1;
}


/* ==== 006f7a0e  FUN_006f7a0e  size=43 ==== */

void FUN_006f7a0e(undefined4 *param_1,undefined4 *param_2)

{
  code *pcVar1;
  
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    pcVar1 = (code *)*param_1;
    if (pcVar1 != (code *)0x0) {
      guard_check_icall();
      (*pcVar1)();
    }
  }
  return;
}


/* ==== 006f7a67  FUN_006f7a67  size=45 ==== */

undefined4 FUN_006f7a67(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_006f390a();
    *puVar1 = 0x16;
    FUN_006e8c2f();
    return 0x16;
  }
  *param_1 = DAT_007c9324;
  return 0;
}


/* ==== 006f7ba0  operator()<<lambda_e5124f882df8998aaf41531e079ba474>,<lambda_3e16ef9562a7dcce91392c22ab16ea36>&,<lambda_e25ca0880e6ef98be67edffd8c599615>_>  size=98 ==== */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    public: void __thiscall __crt_seh_guarded_call<void>::operator()<class
   <lambda_e5124f882df8998aaf41531e079ba474>,class <lambda_3e16ef9562a7dcce91392c22ab16ea36> &,class
   <lambda_e25ca0880e6ef98be67edffd8c599615> >(class <lambda_e5124f882df8998aaf41531e079ba474>
   &&,class <lambda_3e16ef9562a7dcce91392c22ab16ea36> &,class
   <lambda_e25ca0880e6ef98be67edffd8c599615> &&)
   
   Library: Visual Studio 2019 Release */

void __thiscall
__crt_seh_guarded_call<void>::
operator()<<lambda_e5124f882df8998aaf41531e079ba474>,<lambda_3e16ef9562a7dcce91392c22ab16ea36>&,<lambda_e25ca0880e6ef98be67edffd8c599615>_>
          (__crt_seh_guarded_call<void> *this,<lambda_e5124f882df8998aaf41531e079ba474> *param_1,
          <lambda_3e16ef9562a7dcce91392c22ab16ea36> *param_2,
          <lambda_e25ca0880e6ef98be67edffd8c599615> *param_3)

{
  int iVar1;
  int *piVar2;
  void *local_14;
  
  ___acrt_lock(*(undefined4 *)param_1);
  for (piVar2 = &DAT_007c8db8; piVar2 != &DAT_007c8dbc; piVar2 = piVar2 + 1) {
    if ((undefined **)*piVar2 != &PTR_DAT_007c5a88) {
      iVar1 = __updatetlocinfoEx_nolock(piVar2,&PTR_DAT_007c5a88);
      *piVar2 = iVar1;
    }
  }
  FUN_006f7c02();
  ExceptionList = local_14;
  return;
}


/* ==== 006f7c02  FUN_006f7c02  size=12 ==== */

void FUN_006f7c02(void)

{
  int unaff_EBP;
  
  ___acrt_unlock(**(undefined4 **)(unaff_EBP + 0x10));
  return;
}


/* ==== 006f7c0e  FUN_006f7c0e  size=11 ==== */

undefined4 FUN_006f7c0e(void)

{
  undefined4 uVar1;
  
  uVar1 = DAT_007c8dac;
  LOCK();
  DAT_007c8dac = 1;
  UNLOCK();
  return uVar1;
}


/* ==== 006f7ca2  FUN_006f7ca2  size=7 ==== */

undefined4 FUN_006f7ca2(void)

{
  return DAT_007c8db0;
}


/* ==== 006f7cd8  FUN_006f7cd8  size=6 ==== */

undefined4 * FUN_006f7cd8(void)

{
  return &DAT_007c8db4;
}


/* ==== 006f7de0  FUN_006f7de0  size=226 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float10 FUN_006f7de0(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                    double param_5,undefined4 param_6)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  float10 fVar4;
  undefined1 local_90 [48];
  undefined8 local_60;
  uint local_50;
  uint local_14;
  
  uVar3 = param_6;
  local_14 = DAT_007c5940 ^ (uint)&stack0xfffffff0;
  iVar2 = FUN_006f7ec2(param_1,&param_5,param_6);
  if (iVar2 == 0) {
    local_50 = local_50 & 0xffffffe3 | 3;
    local_60 = param_4;
    __raise_exc_ex(local_90,&param_6,param_1,param_2,&param_3,&param_5,0);
    uVar3 = param_6;
  }
  iVar2 = __errcode(param_1);
  cVar1 = FUN_006f7944();
  if ((cVar1 == '\0') || (iVar2 == 0)) {
    FUN_006f8463(iVar2);
    __ctrlfp();
    fVar4 = (float10)param_5;
  }
  else {
    fVar4 = (float10)FUN_006f8494(iVar2,param_2,param_3,param_4,param_5,uVar3);
  }
  return fVar4;
}


/* ==== 006f7ec2  FUN_006f7ec2  size=640 ==== */

bool FUN_006f7ec2(uint param_1,double *param_2,uint param_3)

{
  double dVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  float10 fVar7;
  uint local_24;
  byte bStack_20;
  undefined1 uStack_1f;
  ushort uStack_1e;
  int local_18;
  double local_14;
  uint local_c;
  bool local_7;
  char local_6;
  byte local_5;
  
  uVar6 = param_1 & 0x1f;
  if (((param_1 & 8) != 0) && ((param_3 & 1) != 0)) {
    FUN_006ff91e(1);
    uVar6 = param_1 & 0x17;
    goto LAB_006f8121;
  }
  if ((param_1 & param_3 & 4) != 0) {
    FUN_006ff91e(4);
    uVar6 = param_1 & 0x1b;
    goto LAB_006f8121;
  }
  if (((param_1 & 1) == 0) || ((param_3 & 8) == 0)) {
    if (((param_1 & 2) == 0) || ((param_3 & 0x10) == 0)) goto LAB_006f8121;
    uVar6 = param_1 >> 4 & 1;
    local_c = uVar6;
    if (*param_2 == 0.0) {
LAB_006f8115:
      FUN_006ff91e(0x10);
    }
    else {
      fVar7 = (float10)FUN_006ff701(*param_2,&local_18);
      local_18 = local_18 + -0x600;
      dVar1 = (double)fVar7;
      local_24 = SUB84(dVar1,0);
      bStack_20 = (byte)((ulonglong)dVar1 >> 0x20);
      uStack_1f = (undefined1)((ulonglong)dVar1 >> 0x28);
      uStack_1e = (ushort)((ulonglong)dVar1 >> 0x30);
      if (local_18 < -0x432) {
        fVar7 = (float10)0 * fVar7;
        uVar6 = 1;
      }
      else {
        local_5 = fVar7 < (float10)0;
        uStack_1e = uStack_1e & 0xf | 0x10;
        bVar3 = false;
        local_7 = false;
        local_6 = '\0';
        if (local_18 < -0x3fd) {
          local_18 = -0x3fd - local_18;
          local_6 = '\0';
          do {
            uVar5 = local_24 & 1;
            if ((uVar5 != 0) && (uVar6 == 0)) {
              uVar6 = 1;
            }
            if (local_6 != '\0') {
              bVar3 = true;
            }
            local_24 = local_24 >> 1;
            local_6 = (char)uVar5;
            if ((bStack_20 & 1) != 0) {
              local_24 = local_24 | 0x80000000;
            }
            uVar5 = CONCAT22(uStack_1e,CONCAT11(uStack_1f,bStack_20)) >> 1;
            bStack_20 = (byte)uVar5;
            uStack_1f = (undefined1)(uVar5 >> 8);
            uStack_1e = uStack_1e >> 1;
            local_18 = local_18 + -1;
            local_c = uVar6;
            local_7 = bVar3;
          } while (local_18 != 0);
        }
        local_14 = (double)CONCAT26(uStack_1e,CONCAT15(uStack_1f,CONCAT14(bStack_20,local_24)));
        fVar7 = (float10)local_14;
        if ((bool)local_5) {
          fVar7 = -fVar7;
          local_14 = (double)fVar7;
          dVar1 = (double)fVar7;
          local_24 = SUB84(dVar1,0);
          bStack_20 = (byte)((ulonglong)dVar1 >> 0x20);
          uStack_1f = (undefined1)((ulonglong)dVar1 >> 0x28);
          uStack_1e = (ushort)((ulonglong)dVar1 >> 0x30);
        }
        if ((local_6 != '\0') || (uVar6 = local_c, local_7)) {
          iVar4 = fegetround();
          uVar6 = local_c;
          if (iVar4 == 0) {
            if (local_6 == '\0') goto LAB_006f8102;
            if (local_7 == false) {
              bVar2 = (byte)local_24 & 1;
              goto LAB_006f80f1;
            }
          }
          else {
            bVar2 = local_5;
            if (iVar4 != 0x100) {
              if (iVar4 != 0x200) goto LAB_006f8102;
              bVar2 = local_5 ^ 1;
            }
LAB_006f80f1:
            if (bVar2 == 0) {
LAB_006f8102:
              fVar7 = (float10)local_14;
              goto LAB_006f8108;
            }
          }
          iVar4 = CONCAT22(uStack_1e,CONCAT11(uStack_1f,bStack_20)) + (uint)(0xfffffffe < local_24);
          bStack_20 = (byte)iVar4;
          uStack_1f = (undefined1)((uint)iVar4 >> 8);
          uStack_1e = (ushort)((uint)iVar4 >> 0x10);
          fVar7 = (float10)(double)CONCAT26(uStack_1e,
                                            CONCAT15(uStack_1f,CONCAT14(bStack_20,local_24 + 1)));
        }
      }
LAB_006f8108:
      *param_2 = (double)fVar7;
      if (uVar6 != 0) goto LAB_006f8115;
    }
    uVar6 = param_1 & 0x1d;
    goto LAB_006f8121;
  }
  FUN_006ff91e(8);
  uVar6 = param_3 & 0xc00;
  if (uVar6 == 0) {
    if (*param_2 <= 0.0) {
LAB_006f7f99:
      dVar1 = INFINITY;
      goto LAB_006f7f9f;
    }
LAB_006f7f91:
    dVar1 = INFINITY;
LAB_006f7fa1:
    *param_2 = dVar1;
  }
  else {
    if (uVar6 == 0x400) {
      if (*param_2 <= 0.0) goto LAB_006f7f99;
      dVar1 = 1.79769313486232e+308;
      goto LAB_006f7fa1;
    }
    if (uVar6 == 0x800) {
      if (0.0 < *param_2) goto LAB_006f7f91;
      dVar1 = 1.79769313486232e+308;
LAB_006f7f9f:
      dVar1 = -dVar1;
      goto LAB_006f7fa1;
    }
    if (uVar6 == 0xc00) {
      dVar1 = 1.79769313486232e+308;
      if (0.0 < *param_2) goto LAB_006f7fa1;
      goto LAB_006f7f9f;
    }
  }
  uVar6 = param_1 & 0x1e;
LAB_006f8121:
  if (((param_1 & 0x10) != 0) && ((param_3 & 0x20) != 0)) {
    FUN_006ff91e(0x20);
    uVar6 = uVar6 & 0xffffffef;
  }
  return uVar6 == 0;
}


/* ==== 006f8142  FUN_006f8142  size=13 ==== */

float10 FUN_006f8142(double param_1,double param_2)

{
  return (float10)param_1 + (float10)param_2;
}


/* ==== 006f8463  FUN_006f8463  size=49 ==== */

void FUN_006f8463(int param_1)

{
  undefined4 *puVar1;
  
  if (param_1 == 1) {
    puVar1 = (undefined4 *)FUN_006f390a();
    *puVar1 = 0x21;
  }
  else if ((param_1 == 2) || (param_1 == 3)) {
    puVar1 = (undefined4 *)FUN_006f390a();
    *puVar1 = 0x22;
    return;
  }
  return;
}


/* ==== 006f8494  FUN_006f8494  size=160 ==== */

float10 FUN_006f8494(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                    undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                    undefined4 param_9)

{
  int iVar1;
  undefined4 local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 uStack_8;
  
  iVar1 = 0;
  do {
    if ((&DAT_00733190)[iVar1 * 2] == param_2) {
      local_20 = *(int *)(&UNK_00733194 + iVar1 * 8);
      if (local_20 != 0) {
        local_1c = param_3;
        local_18 = param_4;
        local_14 = param_5;
        local_10 = param_6;
        local_c = param_7;
        local_24 = param_1;
        uStack_8 = param_8;
        __ctrlfp(param_9,0xffff);
        iVar1 = FUN_006f7970(&local_24);
        if (iVar1 == 0) {
          FUN_006f8463(param_1);
        }
        return (float10)(double)CONCAT44(uStack_8,local_c);
      }
      goto LAB_006f84b4;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x1d);
  local_20 = 0;
LAB_006f84b4:
  __ctrlfp(param_9,0xffff);
  FUN_006f8463(param_1);
  return (float10)(double)CONCAT44(param_8,param_7);
}


/* ==== 006f8593  FUN_006f8593  size=90 ==== */

undefined4 FUN_006f8593(char *param_1,int param_2,int param_3)

{
  char cVar1;
  undefined4 *puVar2;
  char *pcVar3;
  undefined4 uStack_10;
  
  if ((param_1 != (char *)0x0) && (param_2 != 0)) {
    if (param_3 != 0) {
      pcVar3 = param_1;
      do {
        cVar1 = pcVar3[param_3 - (int)param_1];
        *pcVar3 = cVar1;
        pcVar3 = pcVar3 + 1;
        if (cVar1 == '\0') {
          return 0;
        }
        param_2 = param_2 + -1;
      } while (param_2 != 0);
      *param_1 = '\0';
      puVar2 = (undefined4 *)FUN_006f390a();
      uStack_10 = 0x22;
      goto LAB_006f85b9;
    }
    *param_1 = '\0';
  }
  puVar2 = (undefined4 *)FUN_006f390a();
  uStack_10 = 0x16;
LAB_006f85b9:
  *puVar2 = uStack_10;
  FUN_006e8c2f();
  return uStack_10;
}


/* ==== 006f8627  operator()<<lambda_15ade71b0218206bbe3333a0c9b79046>,<lambda_da44e0f8b0f19ba52fefafb335991732>&,<lambda_207f2d024fc103971653565357d6cd41>_>  size=70 ==== */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    public: void __thiscall __crt_seh_guarded_call<void>::operator()<class
   <lambda_15ade71b0218206bbe3333a0c9b79046>,class <lambda_da44e0f8b0f19ba52fefafb335991732> &,class
   <lambda_207f2d024fc103971653565357d6cd41> >(class <lambda_15ade71b0218206bbe3333a0c9b79046>
   &&,class <lambda_da44e0f8b0f19ba52fefafb335991732> &,class
   <lambda_207f2d024fc103971653565357d6cd41> &&)
   
   Library: Visual Studio 2019 Release */

void __thiscall
__crt_seh_guarded_call<void>::
operator()<<lambda_15ade71b0218206bbe3333a0c9b79046>,<lambda_da44e0f8b0f19ba52fefafb335991732>&,<lambda_207f2d024fc103971653565357d6cd41>_>
          (__crt_seh_guarded_call<void> *this,<lambda_15ade71b0218206bbe3333a0c9b79046> *param_1,
          <lambda_da44e0f8b0f19ba52fefafb335991732> *param_2,
          <lambda_207f2d024fc103971653565357d6cd41> *param_3)

{
  undefined4 local_14;
  
  ___acrt_lock(*(undefined4 *)param_1);
  LOCK();
  **(int **)(**(int **)param_2 + 0x48) = **(int **)(**(int **)param_2 + 0x48) + 1;
  UNLOCK();
  FUN_006f866d();
  ExceptionList = local_14;
  return;
}


/* ==== 006f866d  FUN_006f866d  size=12 ==== */

void FUN_006f866d(void)

{
  int unaff_EBP;
  
  ___acrt_unlock(**(undefined4 **)(unaff_EBP + 0x10));
  return;
}


/* ==== 006f8679  operator()<<lambda_38edbb1296d33220d7e4dd0ed76b244a>,<lambda_5ce1d447e08cb34b2473517608e21441>&,<lambda_fb385d3da700c9147fc39e65dd577a8c>_>  size=95 ==== */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    public: void __thiscall __crt_seh_guarded_call<void>::operator()<class
   <lambda_38edbb1296d33220d7e4dd0ed76b244a>,class <lambda_5ce1d447e08cb34b2473517608e21441> &,class
   <lambda_fb385d3da700c9147fc39e65dd577a8c> >(class <lambda_38edbb1296d33220d7e4dd0ed76b244a>
   &&,class <lambda_5ce1d447e08cb34b2473517608e21441> &,class
   <lambda_fb385d3da700c9147fc39e65dd577a8c> &&)
   
   Library: Visual Studio 2019 Release */

void __thiscall
__crt_seh_guarded_call<void>::
operator()<<lambda_38edbb1296d33220d7e4dd0ed76b244a>,<lambda_5ce1d447e08cb34b2473517608e21441>&,<lambda_fb385d3da700c9147fc39e65dd577a8c>_>
          (__crt_seh_guarded_call<void> *this,<lambda_38edbb1296d33220d7e4dd0ed76b244a> *param_1,
          <lambda_5ce1d447e08cb34b2473517608e21441> *param_2,
          <lambda_fb385d3da700c9147fc39e65dd577a8c> *param_3)

{
  int iVar1;
  int *piVar2;
  void *local_14;
  
  ___acrt_lock(*(undefined4 *)param_1);
  piVar2 = *(int **)(**(int **)param_2 + 0x48);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = iVar1 + -1;
    UNLOCK();
    if ((iVar1 + -1 == 0) && (piVar2 != (int *)&DAT_007c5e50)) {
      FUN_006f9a4d(piVar2);
    }
  }
  FUN_006f86d8();
  ExceptionList = local_14;
  return;
}


/* ==== 006f86d8  FUN_006f86d8  size=12 ==== */

void FUN_006f86d8(void)

{
  int unaff_EBP;
  
  ___acrt_unlock(**(undefined4 **)(unaff_EBP + 0x10));
  return;
}


/* ==== 006f86e4  operator()<<lambda_6affb1475c98b40b75cdec977db92e3c>,<lambda_b8d4b9c228a6ecc3f80208dbb4b4a104>&,<lambda_608742c3c92a14382c1684fc64f96c88>_>  size=73 ==== */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    public: void __thiscall __crt_seh_guarded_call<void>::operator()<class
   <lambda_6affb1475c98b40b75cdec977db92e3c>,class <lambda_b8d4b9c228a6ecc3f80208dbb4b4a104> &,class
   <lambda_608742c3c92a14382c1684fc64f96c88> >(class <lambda_6affb1475c98b40b75cdec977db92e3c>
   &&,class <lambda_b8d4b9c228a6ecc3f80208dbb4b4a104> &,class
   <lambda_608742c3c92a14382c1684fc64f96c88> &&)
   
   Library: Visual Studio 2019 Release */

void __thiscall
__crt_seh_guarded_call<void>::
operator()<<lambda_6affb1475c98b40b75cdec977db92e3c>,<lambda_b8d4b9c228a6ecc3f80208dbb4b4a104>&,<lambda_608742c3c92a14382c1684fc64f96c88>_>
          (__crt_seh_guarded_call<void> *this,<lambda_6affb1475c98b40b75cdec977db92e3c> *param_1,
          <lambda_b8d4b9c228a6ecc3f80208dbb4b4a104> *param_2,
          <lambda_608742c3c92a14382c1684fc64f96c88> *param_3)

{
  undefined4 local_14;
  
  ___acrt_lock(*(undefined4 *)param_1);
  replace_current_thread_locale_nolock
            ((__acrt_ptd *)**(undefined4 **)param_2,(__crt_locale_data *)0x0);
  FUN_006f872d();
  ExceptionList = local_14;
  return;
}


/* ==== 006f872d  FUN_006f872d  size=12 ==== */

void FUN_006f872d(void)

{
  int unaff_EBP;
  
  ___acrt_unlock(**(undefined4 **)(unaff_EBP + 0x10));
  return;
}


/* ==== 006f8739  operator()<<lambda_a7e850c220f1c8d1e6efeecdedd162c6>,<lambda_46720907175c18b6c9d2717bc0d2d362>&,<lambda_9048902d66e8d99359bc9897bbb930a8>_>  size=78 ==== */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    public: void __thiscall __crt_seh_guarded_call<void>::operator()<class
   <lambda_a7e850c220f1c8d1e6efeecdedd162c6>,class <lambda_46720907175c18b6c9d2717bc0d2d362> &,class
   <lambda_9048902d66e8d99359bc9897bbb930a8> >(class <lambda_a7e850c220f1c8d1e6efeecdedd162c6>
   &&,class <lambda_46720907175c18b6c9d2717bc0d2d362> &,class
   <lambda_9048902d66e8d99359bc9897bbb930a8> &&)
   
   Library: Visual Studio 2019 Release */

void __thiscall
__crt_seh_guarded_call<void>::
operator()<<lambda_a7e850c220f1c8d1e6efeecdedd162c6>,<lambda_46720907175c18b6c9d2717bc0d2d362>&,<lambda_9048902d66e8d99359bc9897bbb930a8>_>
          (__crt_seh_guarded_call<void> *this,<lambda_a7e850c220f1c8d1e6efeecdedd162c6> *param_1,
          <lambda_46720907175c18b6c9d2717bc0d2d362> *param_2,
          <lambda_9048902d66e8d99359bc9897bbb930a8> *param_3)

{
  void *local_14;
  
  ___acrt_lock(*(undefined4 *)param_1);
  replace_current_thread_locale_nolock
            ((__acrt_ptd *)**(undefined4 **)param_2,
             *(__crt_locale_data **)**(undefined4 **)(param_2 + 4));
  FUN_006f8787();
  ExceptionList = local_14;
  return;
}


/* ==== 006f8787  FUN_006f8787  size=12 ==== */

void FUN_006f8787(void)

{
  int unaff_EBP;
  
  ___acrt_unlock(**(undefined4 **)(unaff_EBP + 0x10));
  return;
}


/* ==== 006f8793  construct_ptd  size=153 ==== */

/* Library Function - Single Match
    void __cdecl construct_ptd(struct __acrt_ptd * const,struct __crt_locale_data * * const)
   
   Library: Visual Studio 2019 Release */

void __cdecl construct_ptd(__acrt_ptd *param_1,__crt_locale_data **param_2)

{
  undefined4 local_18;
  __acrt_ptd **local_14;
  __acrt_ptd **local_10;
  __crt_locale_data ***local_c;
  __crt_seh_guarded_call<void> local_5;
  
  *(undefined4 *)(param_1 + 0x18) = 1;
  *(undefined **)param_1 = &DAT_00733070;
  *(undefined4 *)(param_1 + 0x350) = 1;
  *(undefined **)(param_1 + 0x48) = &DAT_007c5e50;
  *(undefined2 *)(param_1 + 0x6c) = 0x43;
  *(undefined2 *)(param_1 + 0x172) = 0x43;
  *(undefined4 *)(param_1 + 0x34c) = 0;
  local_14 = &param_1;
  local_c = (__crt_locale_data ***)0x5;
  local_18 = 5;
  __crt_seh_guarded_call<void>::
  operator()<<lambda_15ade71b0218206bbe3333a0c9b79046>,<lambda_da44e0f8b0f19ba52fefafb335991732>&,<lambda_207f2d024fc103971653565357d6cd41>_>
            (&local_5,(<lambda_15ade71b0218206bbe3333a0c9b79046> *)&local_18,
             (<lambda_da44e0f8b0f19ba52fefafb335991732> *)&local_14,
             (<lambda_207f2d024fc103971653565357d6cd41> *)&local_c);
  local_10 = &param_1;
  local_c = &param_2;
  local_18 = 4;
  local_14 = (__acrt_ptd **)0x4;
  __crt_seh_guarded_call<void>::
  operator()<<lambda_a7e850c220f1c8d1e6efeecdedd162c6>,<lambda_46720907175c18b6c9d2717bc0d2d362>&,<lambda_9048902d66e8d99359bc9897bbb930a8>_>
            (&local_5,(<lambda_a7e850c220f1c8d1e6efeecdedd162c6> *)&local_14,
             (<lambda_46720907175c18b6c9d2717bc0d2d362> *)&local_10,
             (<lambda_9048902d66e8d99359bc9897bbb930a8> *)&local_18);
  return;
}


/* ==== 006f882c  destroy_fls  size=33 ==== */

/* Library Function - Single Match
    void __stdcall destroy_fls(void *)
   
   Library: Visual Studio 2019 Release */

void destroy_fls(void *param_1)

{
  if (param_1 != (void *)0x0) {
    destroy_ptd(param_1);
    FUN_006f9a4d(param_1);
  }
  return;
}


/* ==== 006f884d  destroy_ptd  size=205 ==== */

/* Library Function - Single Match
    void __cdecl destroy_ptd(struct __acrt_ptd * const)
   
   Library: Visual Studio 2019 Release */

void __cdecl destroy_ptd(__acrt_ptd *param_1)

{
  undefined4 local_14;
  __acrt_ptd **local_10;
  undefined4 local_c;
  __crt_seh_guarded_call<void> local_5;
  
  if (*(undefined **)param_1 != &DAT_00733070) {
    FUN_006f9a4d(*(undefined **)param_1);
  }
  FUN_006f9a4d(*(undefined4 *)(param_1 + 0x3c));
  FUN_006f9a4d(*(undefined4 *)(param_1 + 0x30));
  FUN_006f9a4d(*(undefined4 *)(param_1 + 0x34));
  FUN_006f9a4d(*(undefined4 *)(param_1 + 0x38));
  FUN_006f9a4d(*(undefined4 *)(param_1 + 0x28));
  FUN_006f9a4d(*(undefined4 *)(param_1 + 0x2c));
  FUN_006f9a4d(*(undefined4 *)(param_1 + 0x40));
  FUN_006f9a4d(*(undefined4 *)(param_1 + 0x44));
  FUN_006f9a4d(*(undefined4 *)(param_1 + 0x360));
  local_10 = &param_1;
  local_c = 5;
  local_14 = 5;
  __crt_seh_guarded_call<void>::
  operator()<<lambda_38edbb1296d33220d7e4dd0ed76b244a>,<lambda_5ce1d447e08cb34b2473517608e21441>&,<lambda_fb385d3da700c9147fc39e65dd577a8c>_>
            (&local_5,(<lambda_38edbb1296d33220d7e4dd0ed76b244a> *)&local_14,
             (<lambda_5ce1d447e08cb34b2473517608e21441> *)&local_10,
             (<lambda_fb385d3da700c9147fc39e65dd577a8c> *)&local_c);
  local_10 = &param_1;
  local_14 = 4;
  local_c = 4;
  __crt_seh_guarded_call<void>::
  operator()<<lambda_6affb1475c98b40b75cdec977db92e3c>,<lambda_b8d4b9c228a6ecc3f80208dbb4b4a104>&,<lambda_608742c3c92a14382c1684fc64f96c88>_>
            (&local_5,(<lambda_6affb1475c98b40b75cdec977db92e3c> *)&local_c,
             (<lambda_b8d4b9c228a6ecc3f80208dbb4b4a104> *)&local_10,
             (<lambda_608742c3c92a14382c1684fc64f96c88> *)&local_14);
  return;
}


/* ==== 006f891a  replace_current_thread_locale_nolock  size=75 ==== */

/* Library Function - Single Match
    void __cdecl replace_current_thread_locale_nolock(struct __acrt_ptd * const,struct
   __crt_locale_data * const)
   
   Library: Visual Studio 2019 Release */

void __cdecl replace_current_thread_locale_nolock(__acrt_ptd *param_1,__crt_locale_data *param_2)

{
  undefined **ppuVar1;
  
  if (*(int *)(param_1 + 0x4c) != 0) {
    ___acrt_release_locale_ref(*(undefined4 *)(param_1 + 0x4c));
    ppuVar1 = *(undefined ***)(param_1 + 0x4c);
    if (((ppuVar1 != DAT_007c8db8) && (ppuVar1 != &PTR_DAT_007c5a88)) &&
       (ppuVar1[3] == (undefined *)0x0)) {
      ___acrt_free_locale(ppuVar1);
    }
  }
  *(__crt_locale_data **)(param_1 + 0x4c) = param_2;
  if (param_2 != (__crt_locale_data *)0x0) {
    ___acrt_add_locale_ref(param_2);
  }
  return;
}


/* ==== 006f8965  FUN_006f8965  size=186 ==== */

__acrt_ptd * FUN_006f8965(void)

{
  DWORD dwErrCode;
  uint uVar1;
  int iVar2;
  __acrt_ptd *p_Var3;
  __acrt_ptd *p_Var4;
  
  dwErrCode = GetLastError();
  if ((DAT_007c5a84 == -1) || (uVar1 = FUN_006fde4e(DAT_007c5a84), uVar1 == 0)) {
    iVar2 = ___acrt_FlsSetValue_8(DAT_007c5a84,0xffffffff);
    if (iVar2 == 0) {
      p_Var3 = (__acrt_ptd *)0x0;
    }
    else {
      p_Var3 = (__acrt_ptd *)__calloc_base(1,0x364);
      if (p_Var3 == (__acrt_ptd *)0x0) {
        ___acrt_FlsSetValue_8(DAT_007c5a84,0);
        p_Var4 = (__acrt_ptd *)0x0;
      }
      else {
        iVar2 = ___acrt_FlsSetValue_8(DAT_007c5a84,p_Var3);
        if (iVar2 != 0) {
          construct_ptd(p_Var3,(__crt_locale_data **)&DAT_007c8db8);
          FUN_006f9a4d(0);
          goto LAB_006f8a0a;
        }
        ___acrt_FlsSetValue_8(DAT_007c5a84,0);
        p_Var4 = p_Var3;
      }
      p_Var3 = (__acrt_ptd *)0x0;
      FUN_006f9a4d(p_Var4);
    }
  }
  else {
    p_Var3 = (__acrt_ptd *)(-(uint)(uVar1 != 0xffffffff) & uVar1);
  }
LAB_006f8a0a:
  SetLastError(dwErrCode);
  if (p_Var3 == (__acrt_ptd *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_006f6a50();
  }
  return p_Var3;
}


/* ==== 006f8a20  FUN_006f8a20  size=149 ==== */

__acrt_ptd * FUN_006f8a20(void)

{
  __acrt_ptd *p_Var1;
  int iVar2;
  
  if ((DAT_007c5a84 == -1) ||
     (p_Var1 = (__acrt_ptd *)FUN_006fde4e(DAT_007c5a84), p_Var1 == (__acrt_ptd *)0x0)) {
    iVar2 = ___acrt_FlsSetValue_8(DAT_007c5a84,0xffffffff);
    if (iVar2 != 0) {
      p_Var1 = (__acrt_ptd *)__calloc_base(1,0x364);
      if (p_Var1 == (__acrt_ptd *)0x0) {
        ___acrt_FlsSetValue_8(DAT_007c5a84,0);
      }
      else {
        iVar2 = ___acrt_FlsSetValue_8(DAT_007c5a84,p_Var1);
        if (iVar2 != 0) {
          construct_ptd(p_Var1,(__crt_locale_data **)&DAT_007c8db8);
          FUN_006f9a4d(0);
          return p_Var1;
        }
        ___acrt_FlsSetValue_8(DAT_007c5a84,0);
      }
      FUN_006f9a4d(p_Var1);
    }
  }
  else if (p_Var1 != (__acrt_ptd *)0xffffffff) {
    return p_Var1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_006f6a50();
}


/* ==== 006f8ab6  FUN_006f8ab6  size=177 ==== */

__acrt_ptd * FUN_006f8ab6(void)

{
  DWORD dwErrCode;
  uint uVar1;
  int iVar2;
  __acrt_ptd *p_Var3;
  __acrt_ptd *p_Var4;
  
  dwErrCode = GetLastError();
  if ((DAT_007c5a84 == -1) || (uVar1 = FUN_006fde4e(DAT_007c5a84), uVar1 == 0)) {
    iVar2 = ___acrt_FlsSetValue_8(DAT_007c5a84,0xffffffff);
    if (iVar2 == 0) {
      p_Var3 = (__acrt_ptd *)0x0;
    }
    else {
      p_Var3 = (__acrt_ptd *)__calloc_base(1,0x364);
      if (p_Var3 == (__acrt_ptd *)0x0) {
        ___acrt_FlsSetValue_8(DAT_007c5a84,0);
        p_Var4 = (__acrt_ptd *)0x0;
      }
      else {
        iVar2 = ___acrt_FlsSetValue_8(DAT_007c5a84,p_Var3);
        if (iVar2 != 0) {
          construct_ptd(p_Var3,(__crt_locale_data **)&DAT_007c8db8);
          FUN_006f9a4d(0);
          goto LAB_006f8b5b;
        }
        ___acrt_FlsSetValue_8(DAT_007c5a84,0);
        p_Var4 = p_Var3;
      }
      p_Var3 = (__acrt_ptd *)0x0;
      FUN_006f9a4d(p_Var4);
    }
  }
  else {
    p_Var3 = (__acrt_ptd *)(-(uint)(uVar1 != 0xffffffff) & uVar1);
  }
LAB_006f8b5b:
  SetLastError(dwErrCode);
  return p_Var3;
}


/* ==== 006f8b67  FUN_006f8b67  size=163 ==== */

__acrt_ptd * FUN_006f8b67(undefined4 param_1,int param_2)

{
  __acrt_ptd *p_Var1;
  int iVar2;
  __acrt_ptd *p_Var3;
  
  p_Var3 = (__acrt_ptd *)0x0;
  if ((DAT_007c5a84 == -1) ||
     (p_Var1 = (__acrt_ptd *)FUN_006fde4e(DAT_007c5a84), p_Var1 == (__acrt_ptd *)0x0)) {
    iVar2 = ___acrt_FlsSetValue_8(DAT_007c5a84,0xffffffff);
    if (iVar2 == 0) {
      return (__acrt_ptd *)0x0;
    }
    p_Var1 = (__acrt_ptd *)__calloc_base(1,0x364);
    if (p_Var1 == (__acrt_ptd *)0x0) {
      ___acrt_FlsSetValue_8(DAT_007c5a84,0);
      p_Var1 = (__acrt_ptd *)0x0;
    }
    else {
      iVar2 = ___acrt_FlsSetValue_8(DAT_007c5a84,p_Var1);
      if (iVar2 != 0) {
        construct_ptd(p_Var1,(__crt_locale_data **)&DAT_007c8db8);
        FUN_006f9a4d(0);
        goto LAB_006f8bfb;
      }
      ___acrt_FlsSetValue_8(DAT_007c5a84,0);
    }
    FUN_006f9a4d(p_Var1);
  }
  else {
    if (p_Var1 == (__acrt_ptd *)0xffffffff) {
      return (__acrt_ptd *)0x0;
    }
LAB_006f8bfb:
    p_Var3 = p_Var1 + param_2 * 0x364;
  }
  return p_Var3;
}


/* ==== 006f8c36  FUN_006f8c36  size=26 ==== */

undefined4 FUN_006f8c36(void)

{
  if (DAT_007c5a84 != -1) {
    FUN_006fde0f(DAT_007c5a84);
    DAT_007c5a84 = -1;
  }
  return 1;
}


/* ==== 006f8c77  FUN_006f8c77  size=276 ==== */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

undefined8
FUN_006f8c77(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  void *local_14;
  
  if (param_1 == 0xfffffffe) {
    *(undefined1 *)(param_5 + 0x24) = 1;
    *(undefined4 *)(param_5 + 0x20) = 0;
    *(undefined1 *)(param_5 + 0x1c) = 1;
    *(undefined4 *)(param_5 + 0x18) = 9;
  }
  else {
    if (((int)param_1 < 0) || (DAT_007c8fc0 <= param_1)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      iVar2 = (param_1 & 0x3f) * 0x38;
      if ((*(byte *)((&DAT_007c8dc0)[(int)param_1 >> 6] + 0x28 + iVar2) & 1) != 0) {
        ___acrt_lowio_lock_fh(param_1);
        if ((*(byte *)(iVar2 + 0x28 + (&DAT_007c8dc0)[(int)param_1 >> 6]) & 1) == 0) {
          *(undefined1 *)(param_5 + 0x1c) = 1;
          *(undefined4 *)(param_5 + 0x18) = 9;
          *(undefined1 *)(param_5 + 0x24) = 1;
          *(undefined4 *)(param_5 + 0x20) = 0;
          uVar3 = 0xffffffffffffffff;
        }
        else {
          uVar3 = FUN_006f8d9c(param_1,param_2,param_3,param_4,param_5);
        }
        FUN_006f8d94();
        ExceptionList = local_14;
        return uVar3;
      }
    }
    *(undefined1 *)(param_5 + 0x24) = 1;
    *(undefined4 *)(param_5 + 0x20) = 0;
    *(undefined1 *)(param_5 + 0x1c) = 1;
    *(undefined4 *)(param_5 + 0x18) = 9;
    FUN_006e8bb2(0,0,0,0,0,param_5);
  }
  ExceptionList = local_14;
  return 0xffffffffffffffff;
}


/* ==== 006f8d94  FUN_006f8d94  size=8 ==== */

void FUN_006f8d94(void)

{
  ___acrt_lowio_unlock_fh();
  return;
}


/* ==== 006f8d9c  FUN_006f8d9c  size=131 ==== */

undefined8
FUN_006f8d9c(uint param_1,undefined4 param_2,undefined4 param_3,PLARGE_INTEGER param_4,int param_5)

{
  byte *pbVar1;
  LARGE_INTEGER liDistanceToMove;
  HANDLE hFile;
  BOOL BVar2;
  DWORD DVar3;
  DWORD unaff_EDI;
  uint local_c;
  uint local_8;
  
  hFile = (HANDLE)FUN_006ff4ee(param_1);
  if (hFile == (HANDLE)0xffffffff) {
    *(undefined1 *)(param_5 + 0x1c) = 1;
    *(undefined4 *)(param_5 + 0x18) = 9;
  }
  else {
    liDistanceToMove.s.HighPart = (LONG)&local_c;
    liDistanceToMove.s.LowPart = param_3;
    BVar2 = SetFilePointerEx(hFile,liDistanceToMove,param_4,unaff_EDI);
    if (BVar2 == 0) {
      DVar3 = GetLastError();
      FUN_006f38d3(DVar3,param_5);
    }
    else if ((local_c & local_8) != 0xffffffff) {
      pbVar1 = (byte *)((&DAT_007c8dc0)[(int)param_1 >> 6] + 0x28 + (param_1 & 0x3f) * 0x38);
      *pbVar1 = *pbVar1 & 0xfd;
      goto LAB_006f8e1b;
    }
  }
  local_c = 0xffffffff;
  local_8 = 0xffffffff;
LAB_006f8e1b:
  return CONCAT44(local_8,local_c);
}


/* ==== 006f8e1f  FUN_006f8e1f  size=64 ==== */

undefined8 FUN_006f8e1f(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined1 local_2c [40];
  
  FUN_006e8923(0);
  uVar1 = FUN_006f8c77(param_1,param_2,param_3,param_4,local_2c);
  FUN_006e896b();
  return uVar1;
}


/* ==== 006f8e5f  FUN_006f8e5f  size=30 ==== */

void FUN_006f8e5f(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  FUN_006f8c77(param_1,param_2,param_3,param_4,param_5);
  return;
}


/* ==== 006f8e7d  FUN_006f8e7d  size=64 ==== */

undefined8 FUN_006f8e7d(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined1 local_2c [40];
  
  FUN_006e8923(0);
  uVar1 = FUN_006f8d9c(param_1,param_2,param_3,param_4,local_2c);
  FUN_006e896b();
  return uVar1;
}


/* ==== 006f8ebd  FUN_006f8ebd  size=30 ==== */

void FUN_006f8ebd(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  FUN_006f8d9c(param_1,param_2,param_3,param_4,param_5);
  return;
}


/* ==== 006f8edb  FUN_006f8edb  size=333 ==== */

int FUN_006f8edb(uint param_1,char *param_2,int param_3)

{
  byte *pbVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  HANDLE hFile;
  char *pcVar5;
  BOOL BVar6;
  char *pcVar7;
  char *pcVar8;
  int iVar9;
  char *local_14;
  int local_10;
  char *local_c;
  char local_5;
  
  local_10 = (int)param_1 >> 6;
  iVar9 = (param_1 & 0x3f) * 0x38;
  iVar4 = (&DAT_007c8dc0)[local_10];
  hFile = *(HANDLE *)(iVar9 + 0x18 + iVar4);
  if ((param_3 == 0) || (*param_2 != '\n')) {
    pbVar1 = (byte *)(iVar9 + 0x28 + iVar4);
    *pbVar1 = *pbVar1 & 0xfb;
  }
  else {
    pbVar1 = (byte *)(iVar9 + 0x28 + iVar4);
    *pbVar1 = *pbVar1 | 4;
  }
  local_14 = param_2 + param_3;
  pcVar7 = param_2;
  local_c = param_2;
  do {
    pcVar8 = pcVar7;
    if (local_14 <= local_c) {
LAB_006f901f:
      return (int)pcVar8 - (int)param_2;
    }
    cVar2 = *local_c;
    if (cVar2 == '\x1a') {
      bVar3 = *(byte *)((&DAT_007c8dc0)[local_10] + 0x28 + iVar9);
      if ((bVar3 & 0x40) == 0) {
        *(byte *)((&DAT_007c8dc0)[local_10] + 0x28 + iVar9) = bVar3 | 2;
      }
      else {
        *pcVar7 = '\x1a';
LAB_006f901e:
        pcVar8 = pcVar7 + 1;
      }
      goto LAB_006f901f;
    }
    pcVar5 = local_c + 1;
    if (cVar2 == '\r') {
      if (local_14 <= pcVar5) {
        BVar6 = ReadFile(hFile,&local_5,1,(LPDWORD)&local_14,(LPOVERLAPPED)0x0);
        if ((BVar6 != 0) && (local_14 != (char *)0x0)) {
          if ((*(byte *)((&DAT_007c8dc0)[local_10] + 0x28 + iVar9) & 0x48) != 0) {
            pcVar8 = pcVar7 + 1;
            if (local_5 == '\n') {
              *pcVar7 = '\n';
            }
            else {
              *pcVar7 = '\r';
              *(char *)((&DAT_007c8dc0)[local_10] + 0x2a + iVar9) = local_5;
            }
            goto LAB_006f901f;
          }
          if ((local_5 == '\n') && (pcVar7 == param_2)) {
            *pcVar7 = '\n';
            goto LAB_006f901e;
          }
          FUN_006f8e7d(param_1,0xffffffff,0xffffffff,1);
          if (local_5 == '\n') goto LAB_006f901f;
        }
        *pcVar7 = '\r';
        goto LAB_006f901e;
      }
      cVar2 = *pcVar5;
      pcVar5 = local_c + (cVar2 == '\n') + 1;
      *pcVar7 = ((cVar2 == '\n') - 1U & 3) + 10;
    }
    else {
      *pcVar7 = cVar2;
    }
    pcVar7 = pcVar7 + 1;
    local_c = pcVar5;
  } while( true );
}


/* ==== 006f9028  FUN_006f9028  size=442 ==== */

uint FUN_006f9028(uint param_1,ushort *param_2,int param_3)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  HANDLE hFile;
  ushort uVar4;
  ushort *puVar5;
  BOOL BVar6;
  ushort *puVar7;
  ushort *puVar8;
  int iVar9;
  DWORD local_1c;
  uint local_18;
  undefined4 local_14;
  ushort *local_10;
  int local_c;
  ushort *local_8;
  
  local_c = (int)param_1 >> 6;
  iVar9 = (param_1 & 0x3f) * 0x38;
  iVar3 = (&DAT_007c8dc0)[local_c];
  local_1c = 10;
  hFile = *(HANDLE *)(iVar3 + 0x18 + iVar9);
  if ((param_3 == 0) || (*param_2 != 10)) {
    pbVar1 = (byte *)(iVar3 + 0x28 + iVar9);
    *pbVar1 = *pbVar1 & 0xfb;
  }
  else {
    pbVar1 = (byte *)(iVar3 + 0x28 + iVar9);
    *pbVar1 = *pbVar1 | 4;
  }
  local_10 = param_2 + param_3;
  local_8 = param_2;
  puVar8 = param_2;
  if (param_2 < local_10) {
    local_14 = 0xd;
    puVar7 = param_2;
    do {
      uVar4 = *local_8;
      local_18 = (uint)uVar4;
      puVar8 = puVar7;
      if (local_18 == 0x1a) {
        bVar2 = *(byte *)((&DAT_007c8dc0)[local_c] + 0x28 + iVar9);
        if ((bVar2 & 0x40) == 0) {
          *(byte *)((&DAT_007c8dc0)[local_c] + 0x28 + iVar9) = bVar2 | 2;
        }
        else {
          *puVar7 = uVar4;
LAB_006f91d3:
          puVar8 = puVar7 + 1;
        }
        break;
      }
      puVar5 = local_8 + 1;
      if (uVar4 == 0xd) {
        if (local_10 <= puVar5) {
          BVar6 = ReadFile(hFile,&local_8,2,&local_1c,(LPOVERLAPPED)0x0);
          if ((BVar6 == 0) || (local_1c == 0)) {
LAB_006f91b1:
            uVar4 = 0xd;
          }
          else {
            if ((*(byte *)((&DAT_007c8dc0)[local_c] + 0x28 + iVar9) & 0x48) != 0) {
              puVar8 = puVar7 + 1;
              if ((short)local_8 == 10) {
                *puVar7 = 10;
              }
              else {
                *puVar7 = 0xd;
                *(char *)((&DAT_007c8dc0)[local_c] + 0x2a + iVar9) = (char)local_8;
                *(char *)((&DAT_007c8dc0)[local_c] + 0x2b + iVar9) = (char)((uint)local_8 >> 8);
                *(undefined1 *)((&DAT_007c8dc0)[local_c] + 0x2c + iVar9) = 10;
              }
              break;
            }
            uVar4 = 10;
            if (((short)local_8 != 10) || (puVar7 != param_2)) {
              FUN_006f8e7d(param_1,0xfffffffe,0xffffffff,1);
              if ((short)local_8 != 10) goto LAB_006f91b1;
              break;
            }
          }
          *puVar7 = uVar4;
          goto LAB_006f91d3;
        }
        uVar4 = *puVar5;
        puVar5 = local_8 + (uVar4 == 10) + 1;
        *puVar7 = ((uVar4 == 10) - 1 & 3) + 10;
      }
      else {
        *puVar7 = uVar4;
      }
      puVar8 = puVar7 + 1;
      puVar7 = puVar8;
      local_8 = puVar5;
    } while (puVar5 < local_10);
  }
  return (int)puVar8 - (int)param_2 & 0xfffffffe;
}


/* ==== 006f91e2  FUN_006f91e2  size=343 ==== */

int FUN_006f91e2(uint param_1,byte *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
                )

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  DWORD DVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  byte *pbVar9;
  int iVar10;
  
  iVar3 = FUN_006f8edb(param_1,param_2,param_3);
  if (iVar3 == 0) {
    return 0;
  }
  iVar6 = (int)param_1 >> 6;
  iVar10 = (param_1 & 0x3f) * 0x38;
  iVar2 = (&DAT_007c8dc0)[iVar6];
  if (*(char *)(iVar2 + 0x29 + iVar10) != '\0') {
    pbVar8 = param_2 + iVar3;
    bVar1 = pbVar8[-1];
    if ((char)bVar1 < '\0') {
      uVar7 = 1;
      pbVar8 = pbVar8 + -1;
      while ((((&DAT_007c5b50)[bVar1] == '\0' && (uVar7 < 5)) && (param_2 <= pbVar8))) {
        pbVar8 = pbVar8 + -1;
        uVar7 = uVar7 + 1;
        bVar1 = *pbVar8;
      }
      if ((char)(&DAT_007c5b50)[*pbVar8] == 0) {
        puVar4 = (undefined4 *)FUN_006f390a();
        *puVar4 = 0x2a;
        return -1;
      }
      if ((int)(char)(&DAT_007c5b50)[*pbVar8] + 1U == uVar7) {
        pbVar8 = pbVar8 + uVar7;
      }
      else if ((*(byte *)(iVar2 + 0x28 + iVar10) & 0x48) == 0) {
        FUN_006f8e7d(param_1,-uVar7,(int)-uVar7 >> 0x1f,1);
      }
      else {
        pbVar9 = pbVar8 + 1;
        *(byte *)(iVar2 + 0x2a + iVar10) = *pbVar8;
        if (1 < uVar7) {
          bVar1 = *pbVar9;
          pbVar9 = pbVar8 + 2;
          *(byte *)(iVar10 + 0x2b + (&DAT_007c8dc0)[iVar6]) = bVar1;
        }
        if (uVar7 == 3) {
          bVar1 = *pbVar9;
          pbVar9 = pbVar9 + 1;
          *(byte *)(iVar10 + 0x2c + (&DAT_007c8dc0)[iVar6]) = bVar1;
        }
        pbVar8 = pbVar9 + -uVar7;
      }
    }
    iVar3 = FUN_006fdb32(0xfde9,0,param_2,(int)pbVar8 - (int)param_2,param_4,param_5);
    if (iVar3 == 0) {
      DVar5 = GetLastError();
      ___acrt_errno_map_os_error(DVar5);
      return -1;
    }
    *(byte *)(iVar10 + 0x2d + (&DAT_007c8dc0)[iVar6]) =
         (iVar3 == (int)pbVar8 - (int)param_2) - 1U & 2 |
         *(byte *)(iVar10 + 0x2d + (&DAT_007c8dc0)[iVar6]) & 0xfd;
    return iVar3 * 2;
  }
  return iVar3;
}


/* ==== 006f9339  FUN_006f9339  size=126 ==== */

uint FUN_006f9339(uint param_1,short *param_2,int param_3)

{
  byte *pbVar1;
  short *psVar2;
  short sVar3;
  short *psVar4;
  int iStack_18;
  
  psVar2 = param_2;
  psVar4 = param_2;
  do {
    if (param_2 + param_3 <= psVar4) {
LAB_006f93ac:
      return (int)psVar2 - (int)param_2 & 0xfffffffe;
    }
    sVar3 = *psVar4;
    if (sVar3 == 0x1a) {
      pbVar1 = (byte *)((&DAT_007c8dc0)[(int)param_1 >> 6] + 0x28 + (param_1 & 0x3f) * 0x38);
      *pbVar1 = *pbVar1 | 2;
      goto LAB_006f93ac;
    }
    if (((sVar3 == 0xd) && (psVar4 + 1 < param_2 + param_3)) && (psVar4[1] == 10)) {
      iStack_18 = 4;
      sVar3 = 10;
    }
    else {
      iStack_18 = 2;
    }
    *psVar2 = sVar3;
    psVar4 = (short *)((int)psVar4 + iStack_18);
    psVar2 = psVar2 + 1;
  } while( true );
}


/* ==== 006f93b7  FUN_006f93b7  size=267 ==== */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

undefined4 FUN_006f93b7(uint param_1,undefined4 param_2,uint param_3)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  void *local_14;
  
  if (param_1 == 0xfffffffe) {
    puVar2 = (undefined4 *)FUN_006f38f7();
    *puVar2 = 0;
    puVar2 = (undefined4 *)FUN_006f390a();
    *puVar2 = 9;
    ExceptionList = local_14;
    return 0xffffffff;
  }
  if (((int)param_1 < 0) || (DAT_007c8fc0 <= param_1)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    iVar3 = (param_1 & 0x3f) * 0x38;
    if ((*(byte *)((&DAT_007c8dc0)[(int)param_1 >> 6] + 0x28 + iVar3) & 1) != 0) {
      if (param_3 < 0x80000000) {
        ___acrt_lowio_lock_fh(param_1);
        uVar4 = 0xffffffff;
        if ((*(byte *)((&DAT_007c8dc0)[(int)param_1 >> 6] + 0x28 + iVar3) & 1) == 0) {
          puVar2 = (undefined4 *)FUN_006f390a();
          *puVar2 = 9;
          puVar2 = (undefined4 *)FUN_006f38f7();
          *puVar2 = 0;
        }
        else {
          uVar4 = FUN_006f94d0(param_1,param_2,param_3);
        }
        FUN_006f94c8();
        ExceptionList = local_14;
        return uVar4;
      }
      puVar2 = (undefined4 *)FUN_006f38f7();
      *puVar2 = 0;
      puVar2 = (undefined4 *)FUN_006f390a();
      *puVar2 = 0x16;
      goto LAB_006f9410;
    }
  }
  puVar2 = (undefined4 *)FUN_006f38f7();
  *puVar2 = 0;
  puVar2 = (undefined4 *)FUN_006f390a();
  *puVar2 = 9;
LAB_006f9410:
  FUN_006e8c2f();
  ExceptionList = local_14;
  return 0xffffffff;
}


/* ==== 006f94c8  FUN_006f94c8  size=8 ==== */

void FUN_006f94c8(void)

{
  ___acrt_lowio_unlock_fh();
  return;
}


/* ==== 006f94d0  FUN_006f94d0  size=907 ==== */

uint FUN_006f94d0(uint param_1,char *param_2,uint param_3)

{
  char cVar1;
  undefined4 *puVar2;
  char *pcVar3;
  BOOL BVar4;
  DWORD DVar5;
  char *pcVar6;
  uint nNumberOfBytesToRead;
  char *pcVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined8 uVar11;
  DWORD local_28;
  char *local_24;
  uint local_20;
  uint local_1c;
  HANDLE local_18;
  int local_14;
  char *local_10;
  uint local_c;
  byte local_5;
  
  if (param_1 == 0xfffffffe) {
    puVar2 = (undefined4 *)FUN_006f38f7();
    *puVar2 = 0;
    puVar2 = (undefined4 *)FUN_006f390a();
    *puVar2 = 9;
    return 0xffffffff;
  }
  if ((-1 < (int)param_1) && (param_1 < DAT_007c8fc0)) {
    local_c = param_1 >> 6;
    iVar8 = (param_1 & 0x3f) * 0x38;
    local_20 = 1;
    iVar9 = (&DAT_007c8dc0)[local_c];
    local_5 = *(byte *)(iVar8 + 0x28 + iVar9);
    local_14 = iVar8;
    if ((local_5 & 1) != 0) {
      if (param_3 < 0x80000000) {
        if ((param_3 == 0) || ((local_5 & 2) != 0)) {
          return 0;
        }
        if (param_2 != (char *)0x0) {
          local_18 = *(HANDLE *)(iVar8 + 0x18 + iVar9);
          local_5 = *(char *)(iVar8 + 0x29 + iVar9);
          if (local_5 == '\x01') {
            if ((~(byte)param_3 & 1) == 0) goto LAB_006f959e;
            uVar10 = 4;
            if (3 < param_3 >> 1) {
              uVar10 = param_3 >> 1;
            }
            pcVar3 = (char *)__malloc_base(uVar10);
            FUN_006f9a4d(0);
            FUN_006f9a4d(0);
            local_10 = pcVar3;
            if (pcVar3 != (char *)0x0) {
              uVar11 = FUN_006f8e7d(param_1,0,0,1);
              iVar9 = (&DAT_007c8dc0)[local_c];
              *(int *)(iVar8 + 0x20 + iVar9) = (int)uVar11;
              *(int *)(iVar8 + 0x24 + iVar9) = (int)((ulonglong)uVar11 >> 0x20);
              pcVar7 = pcVar3;
              goto LAB_006f9637;
            }
            puVar2 = (undefined4 *)FUN_006f390a();
            *puVar2 = 0xc;
            puVar2 = (undefined4 *)FUN_006f38f7();
            *puVar2 = 8;
          }
          else if ((local_5 == '\x02') && ((~(byte)param_3 & 1) == 0)) {
LAB_006f959e:
            puVar2 = (undefined4 *)FUN_006f38f7();
            *puVar2 = 0;
            puVar2 = (undefined4 *)FUN_006f390a();
            *puVar2 = 0x16;
            FUN_006e8c2f();
            pcVar3 = (char *)0x0;
          }
          else {
            local_10 = param_2;
            pcVar3 = param_2;
            uVar10 = param_3;
            pcVar7 = (char *)0x0;
LAB_006f9637:
            iVar9 = 0;
            local_1c = (&DAT_007c8dc0)[local_c];
            nNumberOfBytesToRead = uVar10;
            pcVar6 = local_10;
            if ((((*(byte *)(local_14 + 0x28 + local_1c) & 0x48) != 0) &&
                (cVar1 = *(char *)(local_14 + 0x2a + local_1c), cVar1 != '\n')) && (uVar10 != 0)) {
              iVar9 = 1;
              *local_10 = cVar1;
              pcVar6 = local_10 + 1;
              nNumberOfBytesToRead = uVar10 - 1;
              *(undefined1 *)(local_14 + 0x2a + (&DAT_007c8dc0)[local_c]) = 10;
              if (((local_5 != '\0') &&
                  (cVar1 = *(char *)(local_14 + 0x2b + (&DAT_007c8dc0)[local_c]), cVar1 != '\n')) &&
                 (nNumberOfBytesToRead != 0)) {
                *pcVar6 = cVar1;
                pcVar6 = local_10 + 2;
                nNumberOfBytesToRead = uVar10 - 2;
                iVar9 = 2;
                *(undefined1 *)(local_14 + 0x2b + (&DAT_007c8dc0)[local_c]) = 10;
                if (((local_5 == '\x01') &&
                    (cVar1 = *(char *)(local_14 + 0x2c + (&DAT_007c8dc0)[local_c]), cVar1 != '\n'))
                   && (nNumberOfBytesToRead != 0)) {
                  *pcVar6 = cVar1;
                  nNumberOfBytesToRead = uVar10 - 3;
                  iVar9 = 3;
                  *(undefined1 *)(local_14 + 0x2c + (&DAT_007c8dc0)[local_c]) = 10;
                  pcVar6 = local_10 + 3;
                }
              }
            }
            local_10 = pcVar6;
            local_24 = pcVar3;
            iVar8 = FUN_00702dcb(param_1);
            pcVar3 = pcVar7;
            if (((iVar8 == 0) || (-1 < *(char *)(local_14 + 0x28 + (&DAT_007c8dc0)[local_c]))) ||
               (BVar4 = GetConsoleMode(local_18,&local_28), pcVar6 = local_10, BVar4 == 0)) {
              local_20 = local_20 & 0xffffff00;
LAB_006f9790:
              pcVar6 = local_10;
              BVar4 = ReadFile(local_18,local_10,nNumberOfBytesToRead,&local_1c,(LPOVERLAPPED)0x0);
              if ((BVar4 != 0) && (uVar10 = local_1c, local_1c <= param_3)) {
LAB_006f97b3:
                uVar10 = iVar9 + uVar10;
                if (*(char *)(local_14 + 0x28 + (&DAT_007c8dc0)[local_c]) < '\0') {
                  if (local_5 == '\x02') {
                    if ((char)local_20 == '\0') {
                      uVar10 = FUN_006f9028(param_1,local_24,uVar10 >> 1);
                    }
                    else {
                      uVar10 = FUN_006f9339();
                    }
                  }
                  else {
                    uVar10 = FUN_006f91e2(param_1,pcVar6,uVar10,param_2,param_3 >> 1);
                  }
                }
                goto LAB_006f9772;
              }
              DVar5 = GetLastError();
              if (DVar5 != 5) {
                if (DVar5 == 0x6d) {
                  uVar10 = 0;
                  goto LAB_006f9772;
                }
                goto LAB_006f9768;
              }
              puVar2 = (undefined4 *)FUN_006f390a();
              *puVar2 = 9;
              puVar2 = (undefined4 *)FUN_006f38f7();
              *puVar2 = 5;
            }
            else {
              if (local_5 != '\x02') goto LAB_006f9790;
              BVar4 = ReadConsoleW(local_18,local_10,nNumberOfBytesToRead >> 1,&local_1c,
                                   (PCONSOLE_READCONSOLE_CONTROL)0x0);
              if (BVar4 != 0) {
                uVar10 = local_1c * 2;
                goto LAB_006f97b3;
              }
              DVar5 = GetLastError();
LAB_006f9768:
              ___acrt_errno_map_os_error(DVar5);
            }
          }
          uVar10 = 0xffffffff;
          pcVar7 = pcVar3;
LAB_006f9772:
          FUN_006f9a4d(pcVar7);
          return uVar10;
        }
      }
      puVar2 = (undefined4 *)FUN_006f38f7();
      *puVar2 = 0;
      puVar2 = (undefined4 *)FUN_006f390a();
      *puVar2 = 0x16;
      goto LAB_006f984f;
    }
  }
  puVar2 = (undefined4 *)FUN_006f38f7();
  *puVar2 = 0;
  puVar2 = (undefined4 *)FUN_006f390a();
  *puVar2 = 9;
LAB_006f984f:
  FUN_006e8c2f();
  return 0xffffffff;
}


/* ==== 006f985b  initialize_inherited_file_handles_nolock  size=182 ==== */

/* Library Function - Single Match
    void __cdecl initialize_inherited_file_handles_nolock(void)
   
   Library: Visual Studio 2019 Release */

void __cdecl initialize_inherited_file_handles_nolock(void)

{
  byte bVar1;
  HANDLE hFile;
  DWORD DVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  _STARTUPINFOW local_4c;
  undefined4 *local_8;
  
  GetStartupInfoW(&local_4c);
  if ((local_4c.cbReserved2 != 0) && ((uint *)local_4c.lpReserved2 != (uint *)0x0)) {
    uVar4 = *(uint *)local_4c.lpReserved2;
    local_8 = (undefined4 *)((int)local_4c.lpReserved2 + uVar4 + 4);
    if (0x1fff < (int)uVar4) {
      uVar4 = 0x2000;
    }
    ___acrt_lowio_ensure_fh_exists(uVar4);
    if ((int)DAT_007c8fc0 < (int)uVar4) {
      uVar4 = DAT_007c8fc0;
    }
    uVar5 = 0;
    if (uVar4 != 0) {
      do {
        hFile = (HANDLE)*local_8;
        if ((((hFile != (HANDLE)0xffffffff) && (hFile != (HANDLE)0xfffffffe)) &&
            (bVar1 = *(byte *)(uVar5 + 4 + (int)local_4c.lpReserved2), (bVar1 & 1) != 0)) &&
           (((bVar1 & 8) != 0 || (DVar2 = GetFileType(hFile), DVar2 != 0)))) {
          iVar3 = (uVar5 & 0x3f) * 0x38 + (&DAT_007c8dc0)[(int)uVar5 >> 6];
          *(undefined4 *)(iVar3 + 0x18) = *local_8;
          *(undefined1 *)(iVar3 + 0x28) = *(undefined1 *)(uVar5 + 4 + (int)local_4c.lpReserved2);
        }
        uVar5 = uVar5 + 1;
        local_8 = local_8 + 1;
      } while (uVar5 != uVar4);
    }
  }
  return;
}


/* ==== 006f9911  FUN_006f9911  size=176 ==== */

void FUN_006f9911(void)

{
  HANDLE hFile;
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  
  uVar2 = 0;
  do {
    iVar1 = (uVar2 & 0x3f) * 0x38 + (&DAT_007c8dc0)[(int)uVar2 >> 6];
    if ((*(int *)(iVar1 + 0x18) == -1) || (*(int *)(iVar1 + 0x18) == -2)) {
      *(undefined1 *)(iVar1 + 0x28) = 0x81;
      if (uVar2 == 0) {
        DVar3 = 0xfffffff6;
      }
      else if (uVar2 == 1) {
        DVar3 = 0xfffffff5;
      }
      else {
        DVar3 = 0xfffffff4;
      }
      hFile = GetStdHandle(DVar3);
      if ((hFile != (HANDLE)0xffffffff) && (hFile != (HANDLE)0x0)) {
        DVar3 = GetFileType(hFile);
        if (DVar3 != 0) {
          *(HANDLE *)(iVar1 + 0x18) = hFile;
          if ((DVar3 & 0xff) == 2) {
            *(byte *)(iVar1 + 0x28) = *(byte *)(iVar1 + 0x28) | 0x40;
          }
          else if ((DVar3 & 0xff) == 3) {
            *(byte *)(iVar1 + 0x28) = *(byte *)(iVar1 + 0x28) | 8;
          }
          goto LAB_006f99b3;
        }
      }
      *(byte *)(iVar1 + 0x28) = *(byte *)(iVar1 + 0x28) | 0x40;
      *(undefined4 *)(iVar1 + 0x18) = 0xfffffffe;
      if (DAT_007c8c58 != 0) {
        *(undefined4 *)(*(int *)(DAT_007c8c58 + uVar2 * 4) + 0x10) = 0xfffffffe;
      }
    }
    else {
      *(byte *)(iVar1 + 0x28) = *(byte *)(iVar1 + 0x28) | 0x80;
    }
LAB_006f99b3:
    uVar2 = uVar2 + 1;
    if (uVar2 == 3) {
      return;
    }
  } while( true );
}


/* ==== 006f9a18  FUN_006f9a18  size=9 ==== */

void FUN_006f9a18(void)

{
  ___acrt_unlock(7);
  return;
}


/* ==== 006f9a4d  FUN_006f9a4d  size=58 ==== */

void FUN_006f9a4d(LPVOID param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  int iVar3;
  int *piVar4;
  
  if (param_1 != (LPVOID)0x0) {
    BVar1 = HeapFree(DAT_007c9320,0,param_1);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
      iVar3 = FID_conflict____acrt_errno_from_os_error(DVar2);
      piVar4 = (int *)FUN_006f390a();
      *piVar4 = iVar3;
    }
  }
  return;
}


/* ==== 006f9a87  FUN_006f9a87  size=130 ==== */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

undefined4 FUN_006f9a87(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *local_14;
  
  ___acrt_lowio_lock_fh(*param_1);
  uVar1 = *(uint *)*param_2;
  iVar2 = param_2[1];
  if ((*(byte *)((&DAT_007c8dc0)[(int)uVar1 >> 6] + 0x28 + (uVar1 & 0x3f) * 0x38) & 1) == 0) {
    *(undefined1 *)(iVar2 + 0x1c) = 1;
    *(undefined4 *)(iVar2 + 0x18) = 9;
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = FUN_006f9beb(uVar1,iVar2);
  }
  FUN_006f9b0c();
  ExceptionList = local_14;
  return uVar3;
}


/* ==== 006f9b0c  FUN_006f9b0c  size=12 ==== */

void FUN_006f9b0c(void)

{
  int unaff_EBP;
  
  ___acrt_lowio_unlock_fh(**(undefined4 **)(unaff_EBP + 0x10));
  return;
}


/* ==== 006f9b18  FUN_006f9b18  size=163 ==== */

undefined4 FUN_006f9b18(uint param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *local_18;
  int local_14;
  uint local_10;
  uint local_c [2];
  
  if (param_1 == 0xfffffffe) {
    *(undefined4 *)(param_2 + 0x20) = 0;
    *(undefined1 *)(param_2 + 0x24) = 1;
    *(undefined1 *)(param_2 + 0x1c) = 1;
    *(undefined4 *)(param_2 + 0x18) = 9;
  }
  else {
    if (((-1 < (int)param_1) && (param_1 < DAT_007c8fc0)) &&
       ((*(byte *)((&DAT_007c8dc0)[(int)param_1 >> 6] + 0x28 + (param_1 & 0x3f) * 0x38) & 1) != 0))
    {
      local_18 = &param_1;
      local_c[0] = param_1;
      local_14 = param_2;
      local_10 = param_1;
      uVar1 = FUN_006f9a87(&local_10,&local_18,local_c);
      return uVar1;
    }
    *(undefined1 *)(param_2 + 0x24) = 1;
    *(undefined4 *)(param_2 + 0x20) = 0;
    *(undefined1 *)(param_2 + 0x1c) = 1;
    *(undefined4 *)(param_2 + 0x18) = 9;
    FUN_006e8bb2(0,0,0,0,0,param_2);
  }
  return 0xffffffff;
}


/* ==== 006f9bbb  FUN_006f9bbb  size=48 ==== */

undefined4 FUN_006f9bbb(undefined4 param_1)

{
  undefined4 uVar1;
  undefined1 local_2c [40];
  
  FUN_006e8923(0);
  uVar1 = FUN_006f9beb(param_1,local_2c);
  FUN_006e896b();
  return uVar1;
}


/* ==== 006f9beb  FUN_006f9beb  size=160 ==== */

undefined4 FUN_006f9beb(uint param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  HANDLE hObject;
  BOOL BVar3;
  undefined4 uVar4;
  DWORD DVar5;
  
  iVar1 = FUN_006ff4ee(param_1);
  if (iVar1 != -1) {
    if (((param_1 == 1) && ((*(byte *)(DAT_007c8dc0 + 0x98) & 1) != 0)) ||
       ((param_1 == 2 && ((*(byte *)(DAT_007c8dc0 + 0x60) & 1) != 0)))) {
      iVar1 = FUN_006ff4ee(2);
      iVar2 = FUN_006ff4ee(1);
      if (iVar2 == iVar1) goto LAB_006f9c01;
    }
    hObject = (HANDLE)FUN_006ff4ee(param_1);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      DVar5 = GetLastError();
      goto LAB_006f9c53;
    }
  }
LAB_006f9c01:
  DVar5 = 0;
LAB_006f9c53:
  FUN_006ff45d(param_1);
  *(undefined1 *)((&DAT_007c8dc0)[(int)param_1 >> 6] + 0x28 + (param_1 & 0x3f) * 0x38) = 0;
  if (DVar5 == 0) {
    uVar4 = 0;
  }
  else {
    FUN_006f38d3(DVar5,param_2);
    uVar4 = 0xffffffff;
  }
  return uVar4;
}


/* ==== 006f9ceb  FUN_006f9ceb  size=9 ==== */

void FUN_006f9ceb(void)

{
  ___acrt_unlock(8);
  return;
}


/* ==== 006f9d2f  find_or_allocate_unused_stream_nolock  size=194 ==== */

/* Library Function - Single Match
    class __crt_stdio_stream __cdecl find_or_allocate_unused_stream_nolock(void)
   
   Library: Visual Studio 2019 Release */

void __cdecl find_or_allocate_unused_stream_nolock(void)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  FILE *_File;
  int *piVar6;
  bool bVar7;
  undefined4 *in_stack_00000004;
  
  piVar6 = (int *)(DAT_007c8c58 + 0xc);
  piVar2 = piVar6 + DAT_007c8c54 + -3;
  do {
    if (piVar6 == piVar2) {
LAB_006f9d98:
      *in_stack_00000004 = 0;
      return;
    }
    _File = (FILE *)*piVar6;
    if (_File == (FILE *)0x0) {
      iVar5 = __calloc_base(1,0x38);
      *piVar6 = iVar5;
      FUN_006f9a4d(0);
      if (*piVar6 != 0) {
        *(undefined4 *)(*piVar6 + 0x10) = 0xffffffff;
        ___acrt_InitializeCriticalSectionEx_12(*piVar6 + 0x20,4000,0);
        _File = (FILE *)*piVar6;
        LOCK();
        _File->_flag = _File->_flag | 0x2000;
        UNLOCK();
        __lock_file(_File);
LAB_006f9da3:
        *in_stack_00000004 = _File;
        return;
      }
      goto LAB_006f9d98;
    }
    if (((uint)_File->_flag >> 0xd & 1) == 0) {
      __lock_file(_File);
      piVar1 = &_File->_flag;
      uVar3 = *piVar1;
      do {
        LOCK();
        uVar4 = *piVar1;
        bVar7 = uVar3 == uVar4;
        if (bVar7) {
          *piVar1 = uVar3 | 0x2000;
          uVar4 = uVar3;
        }
        UNLOCK();
        uVar3 = uVar4;
      } while (!bVar7);
      if ((~(byte)(uVar4 >> 0xd) & 1) != 0) goto LAB_006f9da3;
      __unlock_file(_File);
    }
    piVar6 = piVar6 + 1;
  } while( true );
}


/* ==== 006f9e31  operator()<<lambda_2866be3712abc81a800a822484c830d8>,<lambda_39ca0ed439415581b5b15c265174cece>&,<lambda_2b24c74d71094a6cd0cb82e44167d71b>_>  size=128 ==== */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    public: void __thiscall __crt_seh_guarded_call<void>::operator()<class
   <lambda_2866be3712abc81a800a822484c830d8>,class <lambda_39ca0ed439415581b5b15c265174cece> &,class
   <lambda_2b24c74d71094a6cd0cb82e44167d71b> >(class <lambda_2866be3712abc81a800a822484c830d8>
   &&,class <lambda_39ca0ed439415581b5b15c265174cece> &,class
   <lambda_2b24c74d71094a6cd0cb82e44167d71b> &&)
   
   Library: Visual Studio 2019 Release */

void __thiscall
__crt_seh_guarded_call<void>::
operator()<<lambda_2866be3712abc81a800a822484c830d8>,<lambda_39ca0ed439415581b5b15c265174cece>&,<lambda_2b24c74d71094a6cd0cb82e44167d71b>_>
          (__crt_seh_guarded_call<void> *this,<lambda_2866be3712abc81a800a822484c830d8> *param_1,
          <lambda_39ca0ed439415581b5b15c265174cece> *param_2,
          <lambda_2b24c74d71094a6cd0cb82e44167d71b> *param_3)

{
  char cVar1;
  int iVar2;
  void *local_14;
  
  __lock_file(*(FILE **)param_1);
  cVar1 = FUN_006f9fb6(**(undefined4 **)param_2,*(undefined4 *)(param_2 + 4));
  if ((cVar1 != '\0') &&
     ((**(char **)(param_2 + 8) != '\0' || ((*(uint *)(**(int **)param_2 + 0xc) >> 1 & 1) != 0)))) {
    iVar2 = FUN_006fa073(**(undefined4 **)param_2);
    if (iVar2 == -1) {
      **(undefined4 **)(param_2 + 0xc) = 0xffffffff;
    }
    else {
      **(int **)(param_2 + 4) = **(int **)(param_2 + 4) + 1;
    }
  }
  FUN_006f9eb1();
  ExceptionList = local_14;
  return;
}


/* ==== 006f9eb1  FUN_006f9eb1  size=12 ==== */

void FUN_006f9eb1(void)

{
  int unaff_EBP;
  
  __unlock_file((FILE *)**(undefined4 **)(unaff_EBP + 0x10));
  return;
}


/* ==== 006f9ebd  operator()<<lambda_2cc53f568c5a2bb6f192f930a45d44ea>,<lambda_ab61a845afdef5b7c387490eaf3616ee>&,<lambda_c2ffc0b7726aa6be21d5f0026187e748>_>  size=160 ==== */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    public: void __thiscall __crt_seh_guarded_call<void>::operator()<class
   <lambda_2cc53f568c5a2bb6f192f930a45d44ea>,class <lambda_ab61a845afdef5b7c387490eaf3616ee> &,class
   <lambda_c2ffc0b7726aa6be21d5f0026187e748> >(class <lambda_2cc53f568c5a2bb6f192f930a45d44ea>
   &&,class <lambda_ab61a845afdef5b7c387490eaf3616ee> &,class
   <lambda_c2ffc0b7726aa6be21d5f0026187e748> &&)
   
   Library: Visual Studio 2019 Release */

void __thiscall
__crt_seh_guarded_call<void>::
operator()<<lambda_2cc53f568c5a2bb6f192f930a45d44ea>,<lambda_ab61a845afdef5b7c387490eaf3616ee>&,<lambda_c2ffc0b7726aa6be21d5f0026187e748>_>
          (__crt_seh_guarded_call<void> *this,<lambda_2cc53f568c5a2bb6f192f930a45d44ea> *param_1,
          <lambda_ab61a845afdef5b7c387490eaf3616ee> *param_2,
          <lambda_c2ffc0b7726aa6be21d5f0026187e748> *param_3)

{
  undefined4 *puVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 *local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  __crt_seh_guarded_call<void> local_1d [9];
  void *local_14;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_007b5328;
  uStack_c = 0x6f9ec9;
  ___acrt_lock(*(undefined4 *)param_1);
  local_8 = (undefined *)0x0;
  puVar1 = DAT_007c8c58 + DAT_007c8c54;
  for (puVar3 = DAT_007c8c58; local_30 = puVar3, puVar3 != puVar1; puVar3 = puVar3 + 1) {
    local_24 = *puVar3;
    cVar2 = FUN_006f9fb6(local_24,*(undefined4 *)param_2);
    if (cVar2 != '\0') {
      local_34 = *(undefined4 *)(param_2 + 8);
      local_38 = *(undefined4 *)(param_2 + 4);
      local_3c = *(undefined4 *)param_2;
      local_40 = &local_24;
      local_28 = local_24;
      local_2c = local_24;
      operator()<<lambda_2866be3712abc81a800a822484c830d8>,<lambda_39ca0ed439415581b5b15c265174cece>&,<lambda_2b24c74d71094a6cd0cb82e44167d71b>_>
                (local_1d,(<lambda_2866be3712abc81a800a822484c830d8> *)&local_2c,
                 (<lambda_39ca0ed439415581b5b15c265174cece> *)&local_40,
                 (<lambda_2b24c74d71094a6cd0cb82e44167d71b> *)&local_28);
    }
  }
  local_8 = (undefined *)0xfffffffe;
  FUN_006f9f5d();
  ExceptionList = local_14;
  return;
}


/* ==== 006f9f5d  FUN_006f9f5d  size=12 ==== */

void FUN_006f9f5d(void)

{
  int unaff_EBP;
  
  ___acrt_unlock(**(undefined4 **)(unaff_EBP + 0x10));
  return;
}


/* ==== 006f9f69  common_flush_all  size=77 ==== */

/* Library Function - Single Match
    int __cdecl common_flush_all(bool)
   
   Library: Visual Studio 2019 Release */

int __cdecl common_flush_all(bool param_1)

{
  int *local_24;
  bool *local_20;
  int *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  int local_c;
  __crt_seh_guarded_call<void> local_5;
  
  local_c = 0;
  local_24 = &local_c;
  local_10 = 0;
  local_20 = &param_1;
  local_1c = &local_10;
  local_14 = 8;
  local_18 = 8;
  __crt_seh_guarded_call<void>::
  operator()<<lambda_2cc53f568c5a2bb6f192f930a45d44ea>,<lambda_ab61a845afdef5b7c387490eaf3616ee>&,<lambda_c2ffc0b7726aa6be21d5f0026187e748>_>
            (&local_5,(<lambda_2cc53f568c5a2bb6f192f930a45d44ea> *)&local_18,
             (<lambda_ab61a845afdef5b7c387490eaf3616ee> *)&local_24,
             (<lambda_c2ffc0b7726aa6be21d5f0026187e748> *)&local_14);
  if (param_1 == false) {
    local_c = local_10;
  }
  return local_c;
}


/* ==== 006f9fb6  FUN_006f9fb6  size=49 ==== */

undefined4 FUN_006f9fb6(int param_1,int *param_2)

{
  char cVar1;
  
  if (param_1 != 0) {
    if ((*(uint *)(param_1 + 0xc) >> 0xd & 1) != 0) {
      cVar1 = FUN_006f9fe7(*(uint *)(param_1 + 0xc));
      if (cVar1 != '\0') {
        return 1;
      }
      *param_2 = *param_2 + 1;
    }
  }
  return 0;
}


/* ==== 006f9fe7  FUN_006f9fe7  size=35 ==== */

uint FUN_006f9fe7(uint param_1)

{
  undefined3 uVar1;
  
  uVar1 = (undefined3)((param_1 & 0xffffff03) >> 8);
  if (((char)(param_1 & 0xffffff03) == '\x02') && ((param_1 & 0xc0) != 0)) {
    return CONCAT31(uVar1,1);
  }
  return CONCAT31(uVar1,(char)(param_1 >> 0xb)) & 0xffffff01;
}


/* ==== 006fa00a  FUN_006fa00a  size=105 ==== */

undefined4 FUN_006fa00a(FILE *param_1,undefined4 param_2)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = &param_1->_flag;
  if ((((byte)*piVar1 & 3) == 2) && ((*piVar1 & 0xc0U) != 0)) {
    pcVar2 = (char *)param_1->_cnt;
    iVar4 = (int)param_1->_ptr - (int)pcVar2;
    param_1->_ptr = pcVar2;
    param_1->_base = (char *)0x0;
    if (0 < iVar4) {
      iVar3 = __fileno(param_1);
      iVar3 = FUN_006fd515(iVar3,pcVar2,iVar4,param_2);
      if (iVar4 != iVar3) {
        LOCK();
        *piVar1 = *piVar1 | 0x10;
        UNLOCK();
        return 0xffffffff;
      }
      if (((uint)*piVar1 >> 2 & 1) != 0) {
        LOCK();
        *piVar1 = *piVar1 & 0xfffffffd;
        UNLOCK();
      }
    }
  }
  return 0;
}


/* ==== 006fa073  FUN_006fa073  size=101 ==== */

int FUN_006fa073(FILE *param_1)

{
  int iVar1;
  int iVar2;
  undefined1 local_2c [40];
  
  iVar2 = 0;
  FUN_006e8923(0);
  if (param_1 == (FILE *)0x0) {
    iVar2 = common_flush_all(false);
    goto LAB_006fa0ca;
  }
  iVar1 = FUN_006fa00a(param_1,local_2c);
  if (iVar1 == 0) {
    if (((uint)param_1->_flag >> 0xb & 1) == 0) goto LAB_006fa0ca;
    iVar1 = __fileno(param_1);
    iVar1 = __commit(iVar1);
    if (iVar1 == 0) goto LAB_006fa0ca;
  }
  iVar2 = -1;
LAB_006fa0ca:
  FUN_006e896b();
  return iVar2;
}


/* ==== 006fa270  FUN_006fa270  size=410 ==== */

uint FUN_006fa270(FILE *param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  undefined *puVar8;
  
  if (param_1 == (FILE *)0x0) {
    puVar3 = (undefined4 *)FUN_006f390a();
    *puVar3 = 0x16;
    FUN_006e8c2f();
  }
  else if ((((uint)param_1->_flag >> 0xd & 1) != 0) && (((uint)param_1->_flag >> 0xc & 1) == 0)) {
    if (((uint)param_1->_flag >> 1 & 1) == 0) {
      LOCK();
      param_1->_flag = param_1->_flag | 1;
      UNLOCK();
      if ((param_1->_flag & 0x4c0U) == 0) {
        ___acrt_stdio_allocate_buffer_nolock(param_1);
      }
      param_1->_ptr = (char *)param_1->_cnt;
      iVar6 = param_1->_bufsiz;
      iVar2 = param_1->_cnt;
      iVar4 = __fileno(param_1);
      pcVar5 = (char *)FUN_006f93b7(iVar4,iVar2,iVar6);
      param_1->_base = pcVar5;
      pcVar5 = param_1->_base;
      if ((pcVar5 != (char *)0x0) && (pcVar5 != (char *)0xffffffff)) {
        if ((param_1->_flag & 6U) == 0) {
          iVar6 = __fileno(param_1);
          if ((iVar6 == -1) || (iVar6 = __fileno(param_1), iVar6 == -2)) {
            puVar8 = &DAT_007c5c50;
          }
          else {
            iVar6 = __fileno(param_1);
            uVar7 = __fileno(param_1);
            puVar8 = (undefined *)((&DAT_007c8dc0)[iVar6 >> 6] + (uVar7 & 0x3f) * 0x38);
          }
          if ((puVar8[0x28] & 0x82) == 0x82) {
            LOCK();
            param_1->_flag = param_1->_flag | 0x20;
            UNLOCK();
          }
        }
        if (((param_1->_bufsiz == 0x200) && (((uint)param_1->_flag >> 6 & 1) != 0)) &&
           ((param_1->_flag & 0x100U) == 0)) {
          param_1->_bufsiz = 0x1000;
        }
        param_1->_base = param_1->_base + -1;
        bVar1 = *param_1->_ptr;
        param_1->_ptr = param_1->_ptr + 1;
        return (uint)bVar1;
      }
      LOCK();
      param_1->_flag = param_1->_flag | (uint)(pcVar5 != (char *)0x0) * 8 + 8;
      UNLOCK();
      param_1->_base = (char *)0x0;
    }
    else {
      LOCK();
      param_1->_flag = param_1->_flag | 0x10;
      UNLOCK();
    }
  }
  return 0xffffffff;
}


/* ==== 006fa2c9  FUN_006fa2c9  size=290 ==== */

uint FUN_006fa2c9(undefined1 (*param_1) [32],uint param_2)

{
  undefined1 auVar1 [32];
  undefined1 *puVar2;
  uint uVar3;
  undefined1 (*pauVar4) [32];
  uint uVar5;
  undefined1 auVar6 [16];
  
  if (DAT_007c8b90 < 5) {
    if (DAT_007c8b90 < 1) {
      for (pauVar4 = param_1;
          (pauVar4 != (undefined1 (*) [32])(*param_1 + param_2) && ((*pauVar4)[0] != '\0'));
          pauVar4 = (undefined1 (*) [32])(*pauVar4 + 1)) {
      }
      uVar3 = (int)pauVar4 - (int)param_1;
    }
    else {
      uVar5 = -(uint)(((uint)param_1 & 0xf) != 0) & 0x10 - ((uint)param_1 & 0xf);
      if (param_2 < uVar5) {
        uVar5 = param_2;
      }
      for (pauVar4 = param_1;
          (pauVar4 != (undefined1 (*) [32])(*param_1 + uVar5) && ((*pauVar4)[0] != '\0'));
          pauVar4 = (undefined1 (*) [32])(*pauVar4 + 1)) {
      }
      uVar3 = (int)pauVar4 - (int)param_1;
      if (uVar3 == uVar5) {
        puVar2 = *pauVar4;
        while ((pauVar4 != (undefined1 (*) [32])(puVar2 + (param_2 - uVar5 & 0xfffffff0)) &&
               (auVar6[0] = -((*pauVar4)[0] == '\0'), auVar6[1] = -((*pauVar4)[1] == '\0'),
               auVar6[2] = -((*pauVar4)[2] == '\0'), auVar6[3] = -((*pauVar4)[3] == '\0'),
               auVar6[4] = -((*pauVar4)[4] == '\0'), auVar6[5] = -((*pauVar4)[5] == '\0'),
               auVar6[6] = -((*pauVar4)[6] == '\0'), auVar6[7] = -((*pauVar4)[7] == '\0'),
               auVar6[8] = -((*pauVar4)[8] == '\0'), auVar6[9] = -((*pauVar4)[9] == '\0'),
               auVar6[10] = -((*pauVar4)[10] == '\0'), auVar6[0xb] = -((*pauVar4)[0xb] == '\0'),
               auVar6[0xc] = -((*pauVar4)[0xc] == '\0'), auVar6[0xd] = -((*pauVar4)[0xd] == '\0'),
               auVar6[0xe] = -((*pauVar4)[0xe] == '\0'), auVar6[0xf] = -((*pauVar4)[0xf] == '\0'),
               (((((((((((((((SUB161(auVar6 >> 7,0) & 1) == 0 && (SUB161(auVar6 >> 0xf,0) & 1) == 0)
                           && (SUB161(auVar6 >> 0x17,0) & 1) == 0) &&
                          (SUB161(auVar6 >> 0x1f,0) & 1) == 0) &&
                         (SUB161(auVar6 >> 0x27,0) & 1) == 0) && (SUB161(auVar6 >> 0x2f,0) & 1) == 0
                        ) && (SUB161(auVar6 >> 0x37,0) & 1) == 0) &&
                      (SUB161(auVar6 >> 0x3f,0) & 1) == 0) && (SUB161(auVar6 >> 0x47,0) & 1) == 0)
                    && (SUB161(auVar6 >> 0x4f,0) & 1) == 0) && (SUB161(auVar6 >> 0x57,0) & 1) == 0)
                  && (SUB161(auVar6 >> 0x5f,0) & 1) == 0) && (SUB161(auVar6 >> 0x67,0) & 1) == 0) &&
                (SUB161(auVar6 >> 0x6f,0) & 1) == 0) && (SUB161(auVar6 >> 0x77,0) & 1) == 0) &&
               -1 < auVar6[0xf]))) {
          pauVar4 = (undefined1 (*) [32])(*pauVar4 + 0x10);
        }
        for (; (pauVar4 != (undefined1 (*) [32])(*param_1 + param_2) && ((*pauVar4)[0] != '\0'));
            pauVar4 = (undefined1 (*) [32])(*pauVar4 + 1)) {
        }
        uVar3 = (int)pauVar4 - (int)param_1;
      }
    }
  }
  else {
    uVar5 = -(uint)(((uint)param_1 & 0x1f) != 0) & 0x20 - ((uint)param_1 & 0x1f);
    if (param_2 < uVar5) {
      uVar5 = param_2;
    }
    for (pauVar4 = param_1;
        (pauVar4 != (undefined1 (*) [32])(*param_1 + uVar5) && ((*pauVar4)[0] != '\0'));
        pauVar4 = (undefined1 (*) [32])(*pauVar4 + 1)) {
    }
    uVar3 = (int)pauVar4 - (int)param_1;
    if (uVar3 == uVar5) {
      puVar2 = *pauVar4;
      while ((pauVar4 != (undefined1 (*) [32])(puVar2 + (param_2 - uVar5 & 0xffffffe0)) &&
             (auVar1 = vpcmpeqb_avx2(SUB6432(ZEXT1664((undefined1  [16])0x0),0),*pauVar4),
             (((((((((((((((((((((((((((((((SUB321(auVar1 >> 7,0) & 1) == 0 &&
                                          (SUB321(auVar1 >> 0xf,0) & 1) == 0) &&
                                         (SUB321(auVar1 >> 0x17,0) & 1) == 0) &&
                                        (SUB321(auVar1 >> 0x1f,0) & 1) == 0) &&
                                       (SUB321(auVar1 >> 0x27,0) & 1) == 0) &&
                                      (SUB321(auVar1 >> 0x2f,0) & 1) == 0) &&
                                     (SUB321(auVar1 >> 0x37,0) & 1) == 0) &&
                                    (SUB321(auVar1 >> 0x3f,0) & 1) == 0) &&
                                   (SUB321(auVar1 >> 0x47,0) & 1) == 0) &&
                                  (SUB321(auVar1 >> 0x4f,0) & 1) == 0) &&
                                 (SUB321(auVar1 >> 0x57,0) & 1) == 0) &&
                                (SUB321(auVar1 >> 0x5f,0) & 1) == 0) &&
                               (SUB321(auVar1 >> 0x67,0) & 1) == 0) &&
                              (SUB321(auVar1 >> 0x6f,0) & 1) == 0) &&
                             (SUB321(auVar1 >> 0x77,0) & 1) == 0) &&
                            SUB321(auVar1 >> 0x7f,0) == '\0') && (SUB321(auVar1 >> 0x87,0) & 1) == 0
                           ) && (SUB321(auVar1 >> 0x8f,0) & 1) == 0) &&
                         (SUB321(auVar1 >> 0x97,0) & 1) == 0) && (SUB321(auVar1 >> 0x9f,0) & 1) == 0
                        ) && (SUB321(auVar1 >> 0xa7,0) & 1) == 0) &&
                      (SUB321(auVar1 >> 0xaf,0) & 1) == 0) && (SUB321(auVar1 >> 0xb7,0) & 1) == 0)
                    && SUB321(auVar1 >> 0xbf,0) == '\0') && (SUB321(auVar1 >> 199,0) & 1) == 0) &&
                  (SUB321(auVar1 >> 0xcf,0) & 1) == 0) && (SUB321(auVar1 >> 0xd7,0) & 1) == 0) &&
                (SUB321(auVar1 >> 0xdf,0) & 1) == 0) && (SUB321(auVar1 >> 0xe7,0) & 1) == 0) &&
              (SUB321(auVar1 >> 0xef,0) & 1) == 0) && (SUB321(auVar1 >> 0xf7,0) & 1) == 0) &&
             -1 < auVar1[0x1f]))) {
        pauVar4 = pauVar4 + 1;
      }
      for (; (pauVar4 != (undefined1 (*) [32])(*param_1 + param_2) && ((*pauVar4)[0] != '\0'));
          pauVar4 = (undefined1 (*) [32])(*pauVar4 + 1)) {
      }
      uVar3 = (int)pauVar4 - (int)param_1;
    }
  }
  return uVar3;
}


/* ==== 006fa3eb  FUN_006fa3eb  size=432 ==== */

uint FUN_006fa3eb(short *param_1,uint param_2)

{
  undefined1 auVar1 [32];
  int iVar2;
  uint uVar4;
  uint uVar5;
  undefined1 (*pauVar6) [32];
  undefined1 auVar7 [16];
  short *psVar3;
  
  psVar3 = param_1;
  if (DAT_007c8b90 < 5) {
    if (DAT_007c8b90 < 1) {
      for (; (psVar3 != param_1 + param_2 && (*psVar3 != 0)); psVar3 = psVar3 + 1) {
      }
      iVar2 = (int)psVar3 - (int)param_1;
      goto LAB_006fa593;
    }
    if (((uint)param_1 & 1) == 0) {
      uVar5 = (-(uint)(((uint)param_1 & 0xf) != 0) & 0x10 - ((uint)param_1 & 0xf)) >> 1;
      if (param_2 < uVar5) {
        uVar5 = param_2;
      }
      for (; (psVar3 != param_1 + uVar5 && (*psVar3 != 0)); psVar3 = psVar3 + 1) {
      }
      uVar4 = (int)psVar3 - (int)param_1 >> 1;
      if (uVar4 != uVar5) {
        return uVar4;
      }
      for (psVar3 = param_1 + uVar4; psVar3 != param_1 + (param_2 - uVar5 & 0xfffffff0) + uVar4;
          psVar3 = psVar3 + 8) {
        auVar7._0_2_ = -(ushort)(*psVar3 == 0);
        auVar7._2_2_ = -(ushort)(psVar3[1] == 0);
        auVar7._4_2_ = -(ushort)(psVar3[2] == 0);
        auVar7._6_2_ = -(ushort)(psVar3[3] == 0);
        auVar7._8_2_ = -(ushort)(psVar3[4] == 0);
        auVar7._10_2_ = -(ushort)(psVar3[5] == 0);
        auVar7._12_2_ = -(ushort)(psVar3[6] == 0);
        auVar7._14_2_ = -(ushort)(psVar3[7] == 0);
        if ((((((((((((((((SUB161(auVar7 >> 7,0) & 1) != 0 || (SUB161(auVar7 >> 0xf,0) & 1) != 0) ||
                        (SUB161(auVar7 >> 0x17,0) & 1) != 0) || (SUB161(auVar7 >> 0x1f,0) & 1) != 0)
                      || (SUB161(auVar7 >> 0x27,0) & 1) != 0) || (SUB161(auVar7 >> 0x2f,0) & 1) != 0
                     ) || (SUB161(auVar7 >> 0x37,0) & 1) != 0) ||
                   (SUB161(auVar7 >> 0x3f,0) & 1) != 0) || (SUB161(auVar7 >> 0x47,0) & 1) != 0) ||
                 (SUB161(auVar7 >> 0x4f,0) & 1) != 0) || (SUB161(auVar7 >> 0x57,0) & 1) != 0) ||
               (SUB161(auVar7 >> 0x5f,0) & 1) != 0) || (SUB161(auVar7 >> 0x67,0) & 1) != 0) ||
             (SUB161(auVar7 >> 0x6f,0) & 1) != 0) || (auVar7._14_2_ >> 7 & 1) != 0) ||
            (auVar7._14_2_ & 0x8000) != 0) break;
      }
      for (; (psVar3 != param_1 + param_2 && (*psVar3 != 0)); psVar3 = psVar3 + 1) {
      }
    }
    else {
      for (; (psVar3 != param_1 + param_2 && (*psVar3 != 0)); psVar3 = psVar3 + 1) {
      }
    }
  }
  else {
    if (((uint)param_1 & 1) == 0) {
      uVar5 = (-(uint)(((uint)param_1 & 0x1f) != 0) & 0x20 - ((uint)param_1 & 0x1f)) >> 1;
      if (param_2 < uVar5) {
        uVar5 = param_2;
      }
      for (; (psVar3 != param_1 + uVar5 && (*psVar3 != 0)); psVar3 = psVar3 + 1) {
      }
      uVar4 = (int)psVar3 - (int)param_1 >> 1;
      if (uVar4 != uVar5) {
        return uVar4;
      }
      pauVar6 = (undefined1 (*) [32])(param_1 + uVar4);
      while ((pauVar6 != (undefined1 (*) [32])(param_1 + (param_2 - uVar5 & 0xffffffe0) + uVar4) &&
             (auVar1 = vpcmpeqw_avx2(SUB6432(ZEXT1664((undefined1  [16])0x0),0),*pauVar6),
             (((((((((((((((((((((((((((((((SUB321(auVar1 >> 7,0) & 1) == 0 &&
                                          (SUB321(auVar1 >> 0xf,0) & 1) == 0) &&
                                         (SUB321(auVar1 >> 0x17,0) & 1) == 0) &&
                                        (SUB321(auVar1 >> 0x1f,0) & 1) == 0) &&
                                       (SUB321(auVar1 >> 0x27,0) & 1) == 0) &&
                                      (SUB321(auVar1 >> 0x2f,0) & 1) == 0) &&
                                     (SUB321(auVar1 >> 0x37,0) & 1) == 0) &&
                                    (SUB321(auVar1 >> 0x3f,0) & 1) == 0) &&
                                   (SUB321(auVar1 >> 0x47,0) & 1) == 0) &&
                                  (SUB321(auVar1 >> 0x4f,0) & 1) == 0) &&
                                 (SUB321(auVar1 >> 0x57,0) & 1) == 0) &&
                                (SUB321(auVar1 >> 0x5f,0) & 1) == 0) &&
                               (SUB321(auVar1 >> 0x67,0) & 1) == 0) &&
                              (SUB321(auVar1 >> 0x6f,0) & 1) == 0) &&
                             (SUB321(auVar1 >> 0x77,0) & 1) == 0) &&
                            SUB321(auVar1 >> 0x7f,0) == '\0') && (SUB321(auVar1 >> 0x87,0) & 1) == 0
                           ) && (SUB321(auVar1 >> 0x8f,0) & 1) == 0) &&
                         (SUB321(auVar1 >> 0x97,0) & 1) == 0) && (SUB321(auVar1 >> 0x9f,0) & 1) == 0
                        ) && (SUB321(auVar1 >> 0xa7,0) & 1) == 0) &&
                      (SUB321(auVar1 >> 0xaf,0) & 1) == 0) && (SUB321(auVar1 >> 0xb7,0) & 1) == 0)
                    && SUB321(auVar1 >> 0xbf,0) == '\0') && (SUB321(auVar1 >> 199,0) & 1) == 0) &&
                  (SUB321(auVar1 >> 0xcf,0) & 1) == 0) && (SUB321(auVar1 >> 0xd7,0) & 1) == 0) &&
                (SUB321(auVar1 >> 0xdf,0) & 1) == 0) && (SUB321(auVar1 >> 0xe7,0) & 1) == 0) &&
              (SUB321(auVar1 >> 0xef,0) & 1) == 0) && (SUB321(auVar1 >> 0xf7,0) & 1) == 0) &&
             -1 < auVar1[0x1f]))) {
        pauVar6 = pauVar6 + 1;
      }
      for (; (pauVar6 != (undefined1 (*) [32])(param_1 + param_2) && (*(short *)*pauVar6 != 0));
          pauVar6 = (undefined1 (*) [32])(*pauVar6 + 2)) {
      }
      return (int)pauVar6 - (int)param_1 >> 1;
    }
    for (; (psVar3 != param_1 + param_2 && (*psVar3 != 0)); psVar3 = psVar3 + 1) {
    }
  }
  iVar2 = (int)psVar3 - (int)param_1;
LAB_006fa593:
  return iVar2 >> 1;
}


/* ==== 006fa5c8  FUN_006fa5c8  size=49 ==== */

void FUN_006fa5c8(int param_1,int *param_2,int param_3)

{
  int iVar1;
  
  if ((*param_2 != (&DAT_007c8db8)[param_3]) && ((*(uint *)(param_1 + 0x350) & DAT_007c63c8) == 0))
  {
    iVar1 = FUN_007027d6();
    *param_2 = iVar1;
  }
  return;
}


/* ==== 006fa5f9  FUN_006fa5f9  size=45 ==== */

void FUN_006fa5f9(int param_1,int *param_2)

{
  int iVar1;
  
  if ((*param_2 != DAT_007c92fc) && ((*(uint *)(param_1 + 0x350) & DAT_007c63c8) == 0)) {
    iVar1 = FUN_007012f9();
    *param_2 = iVar1;
  }
  return;
}


/* ==== 006fa626  FUN_006fa626  size=49 ==== */

void FUN_006fa626(int param_1,int *param_2,int param_3)

{
  int iVar1;
  
  if ((*param_2 != (&DAT_007c92fc)[param_3]) && ((*(uint *)(param_1 + 0x350) & DAT_007c63c8) == 0))
  {
    iVar1 = FUN_007012f9();
    *param_2 = iVar1;
  }
  return;
}


/* ==== 006fa6b9  fe_to_nearest  size=163 ==== */

/* Library Function - Single Match
    bool __cdecl fe_to_nearest(double const * const,unsigned __int64,short)
   
   Library: Visual Studio 2019 Release */

bool __cdecl fe_to_nearest(double *param_1,__uint64 param_2,short param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  ushort uVar4;
  longlong lVar5;
  
  uVar1 = *(uint *)((int)param_1 + 4);
  uVar2 = *(uint *)param_1;
  uVar4 = __aullshr();
  if (uVar4 < 9) {
    if (uVar4 < 8) {
      return false;
    }
    lVar5 = __allshl();
    if (((uint)(lVar5 + -1) & uVar2) == 0 &&
        ((uint)((ulonglong)(lVar5 + -1) >> 0x20) & uVar1 & 0xfffff) == 0) {
      if (param_2._4_2_ == 0x30) {
        bVar3 = 0;
        if ((uVar1 & 0x7ff00000) != 0) {
          bVar3 = 1;
        }
      }
      else {
        bVar3 = __aullshr();
      }
      return (bool)(bVar3 & 1);
    }
  }
  return true;
}


/* ==== 006fa75c  FUN_006fa75c  size=813 ==== */

/* WARNING: Removing unreachable block (ram,0x006faa52) */

int FUN_006fa75c(int *param_1,undefined1 *param_2,uint param_3,undefined4 param_4,undefined4 param_5
                ,size_t param_6,byte param_7,undefined4 param_8,undefined4 param_9,int param_10)

{
  char cVar1;
  short sVar2;
  short sVar3;
  ushort uVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  uint uVar8;
  short sVar9;
  uint uVar10;
  char *_Dst;
  char *pcVar11;
  bool bVar12;
  longlong lVar13;
  char local_2c;
  uint local_1c;
  uint local_18;
  uint local_14;
  
  if ((int)param_6 < 0) {
    param_6 = 0;
  }
  *param_2 = 0;
  if (param_3 <= param_6 + 0xb) {
    *(undefined1 *)(param_10 + 0x1c) = 1;
    *(undefined4 *)(param_10 + 0x18) = 0x22;
    FUN_006e8bb2(0,0,0,0,0,param_10);
    return 0x22;
  }
  if (((uint)param_1[1] >> 0x14 & 0x7ff) == 0x7ff) {
    iVar5 = FUN_006faa89(param_1,param_2,param_3,param_4,param_5,param_6,0,param_8,param_9,param_10)
    ;
    if (iVar5 != 0) {
      *param_2 = 0;
      return iVar5;
    }
    pcVar6 = (char *)FUN_006e6a90(param_2,0x65);
    if (pcVar6 == (char *)0x0) {
      return 0;
    }
    *pcVar6 = (param_7 ^ 1) * ' ' + 'P';
    pcVar6[3] = '\0';
    return 0;
  }
  if ((param_1[1] < 1) && (param_1[1] < 0)) {
    *param_2 = 0x2d;
    param_2 = param_2 + 1;
  }
  pcVar6 = param_2 + 1;
  sVar2 = (ushort)(param_7 ^ 1) * 0x20 + 7;
  local_14 = 0x3ff;
  if ((param_1[1] & 0x7ff00000U) == 0) {
    *param_2 = 0x30;
    if (*param_1 == 0 && (param_1[1] & 0xfffffU) == 0) {
      local_14 = 0;
    }
    else {
      local_14 = 0x3fe;
    }
  }
  else {
    *param_2 = 0x31;
  }
  _Dst = param_2 + 2;
  if (param_6 == 0) {
    cVar1 = '\0';
  }
  else {
    if (*(char *)(param_10 + 0x14) == '\0') {
      FUN_006ec260();
    }
    cVar1 = *(char *)**(undefined4 **)(*(int *)(param_10 + 0xc) + 0x88);
  }
  *pcVar6 = cVar1;
  if (((param_1[1] & 0xfffffU) != 0) || (*param_1 != 0)) {
    sVar9 = 0x30;
    local_1c = 0xf0000;
    local_18 = 0;
    while (0 < (int)param_6) {
      sVar3 = __aullshr();
      uVar4 = sVar3 + 0x30;
      if (0x39 < uVar4) {
        uVar4 = uVar4 + sVar2;
      }
      *_Dst = (char)uVar4;
      sVar9 = sVar9 + -4;
      _Dst = _Dst + 1;
      local_18 = local_18 >> 4 | local_1c << 0x1c;
      local_1c = local_1c >> 4;
      param_6 = param_6 - 1;
      if (sVar9 < 0) goto LAB_006fa970;
    }
    cVar1 = FUN_006faf9c(param_1,local_18,local_1c,sVar9,param_9);
    pcVar11 = _Dst;
    if (cVar1 == '\0') goto LAB_006fa984;
    while( true ) {
      pcVar7 = pcVar11 + -1;
      local_2c = *pcVar7;
      if ((local_2c != 'f') && (local_2c != 'F')) break;
      *pcVar7 = '0';
      pcVar11 = pcVar7;
    }
    if (pcVar7 == pcVar6) {
      pcVar11[-2] = pcVar11[-2] + '\x01';
    }
    else {
      if (local_2c == '9') {
        local_2c = (char)sVar2;
        local_2c = local_2c + '9';
      }
      *pcVar7 = local_2c + '\x01';
    }
  }
LAB_006fa970:
  if (0 < (int)param_6) {
    _memset(_Dst,0x30,param_6);
    _Dst = _Dst + param_6;
  }
LAB_006fa984:
  if (*pcVar6 == '\0') {
    _Dst = pcVar6;
  }
  *_Dst = (param_7 ^ 1) * ' ' + 'P';
  uVar8 = __aullshr();
  pcVar6 = _Dst + 2;
  uVar10 = (uVar8 & 0x7ff) - local_14;
  iVar5 = -(uint)((uVar8 & 0x7ff) < local_14);
  if (iVar5 < 0) {
    bVar12 = uVar10 != 0;
    uVar10 = -uVar10;
    iVar5 = -(iVar5 + (uint)bVar12);
    cVar1 = '-';
  }
  else {
    cVar1 = '+';
  }
  lVar13 = CONCAT44(iVar5,uVar10);
  _Dst[1] = cVar1;
  *pcVar6 = '0';
  pcVar11 = pcVar6;
  if (iVar5 < 0) goto LAB_006faa77;
  if ((iVar5 < 1) && (uVar10 < 1000)) {
LAB_006faa1a:
    uVar10 = (uint)lVar13;
    if (lVar13 < 0) goto LAB_006faa77;
    if ((0xffffffff < lVar13) || (99 < uVar10)) goto LAB_006faa25;
LAB_006faa4c:
    uVar10 = (uint)lVar13;
    if (lVar13 < 10) goto LAB_006faa77;
  }
  else {
    cVar1 = __alldiv(uVar10,iVar5,1000,0);
    *pcVar6 = cVar1 + '0';
    pcVar11 = _Dst + 3;
    lVar13 = __allrem(uVar10,iVar5,1000,0);
    if (pcVar11 == pcVar6) goto LAB_006faa1a;
LAB_006faa25:
    cVar1 = __alldiv(lVar13,100,0);
    *pcVar11 = cVar1 + '0';
    pcVar11 = pcVar11 + 1;
    lVar13 = __allrem(lVar13,100,0);
    if (pcVar11 == pcVar6) goto LAB_006faa4c;
  }
  cVar1 = __alldiv(lVar13,10,0);
  *pcVar11 = cVar1 + '0';
  pcVar11 = pcVar11 + 1;
  uVar10 = __allrem(lVar13,10,0);
LAB_006faa77:
  *pcVar11 = (char)uVar10 + '0';
  pcVar11[1] = '\0';
  return 0;
}


/* ==== 006faa89  FUN_006faa89  size=164 ==== */

void FUN_006faa89(undefined4 *param_1,undefined1 *param_2,int param_3,undefined4 param_4,
                 undefined4 param_5,int param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10)

{
  undefined4 uVar1;
  int iVar2;
  int local_10 [3];
  
  uVar1 = FUN_00703147(*param_1,param_1[1],param_6 + 1,1,local_10,param_4,param_5);
  iVar2 = -1;
  if (param_3 != -1) {
    iVar2 = (param_3 - (uint)(local_10[0] == 0x2d)) - (uint)(0 < param_6);
  }
  iVar2 = FUN_0070304d(param_2 + (uint)(0 < param_6) + (uint)(local_10[0] == 0x2d),iVar2,param_6 + 1
                       ,local_10,uVar1,param_9,param_10);
  if (iVar2 == 0) {
    FUN_006fab2d(param_2,param_3,param_6,param_7,param_8,local_10,0,param_10);
  }
  else {
    *param_2 = 0;
  }
  return;
}


/* ==== 006fab2d  FUN_006fab2d  size=338 ==== */

undefined4
FUN_006fab2d(char *param_1,uint param_2,int param_3,char param_4,int param_5,int *param_6,
            byte param_7,int param_8)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  char *pcVar4;
  
  iVar1 = param_3;
  if (param_3 < 1) {
    iVar1 = 0;
  }
  if (iVar1 + 9U < param_2) {
    if (param_7 != 0) {
      shift_bytes(param_1,param_2,param_1 + (*param_6 == 0x2d),(uint)(0 < param_3));
    }
    pcVar4 = param_1;
    if (*param_6 == 0x2d) {
      *param_1 = '-';
      pcVar4 = param_1 + 1;
    }
    if (0 < param_3) {
      *pcVar4 = pcVar4[1];
      pcVar4 = pcVar4 + 1;
      if (*(char *)(param_8 + 0x14) == '\0') {
        FUN_006ec260();
      }
      *pcVar4 = *(char *)**(undefined4 **)(*(int *)(param_8 + 0xc) + 0x88);
    }
    pcVar4 = pcVar4 + (param_7 ^ 1) + param_3;
    pcVar2 = (char *)0xffffffff;
    if (param_2 != 0xffffffff) {
      pcVar2 = param_1 + (param_2 - (int)pcVar4);
    }
    iVar1 = FUN_006f8593(pcVar4,pcVar2,"e+000");
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    if (param_4 != '\0') {
      *pcVar4 = 'E';
    }
    if (*(char *)param_6[2] != '0') {
      iVar1 = param_6[1] + -1;
      if (iVar1 < 0) {
        iVar1 = -iVar1;
        pcVar4[1] = '-';
      }
      if (99 < iVar1) {
        pcVar4[2] = pcVar4[2] + (char)(iVar1 / 100);
        iVar1 = iVar1 % 100;
      }
      if (9 < iVar1) {
        pcVar4[3] = pcVar4[3] + (char)(iVar1 / 10);
        iVar1 = iVar1 % 10;
      }
      pcVar4[4] = pcVar4[4] + (char)iVar1;
    }
    if ((param_5 == 2) && (pcVar4[2] == '0')) {
      FUN_006e6bd0(pcVar4 + 2,pcVar4 + 3,3);
    }
    uVar3 = 0;
  }
  else {
    uVar3 = 0x22;
    *(undefined1 *)(param_8 + 0x1c) = 1;
    *(undefined4 *)(param_8 + 0x18) = 0x22;
    FUN_006e8bb2(0,0,0,0,0,param_8);
  }
  return uVar3;
}


/* ==== 006fac80  FUN_006fac80  size=150 ==== */

void FUN_006fac80(undefined4 *param_1,undefined1 *param_2,int param_3,undefined4 param_4,
                 undefined4 param_5,int param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  int iVar2;
  int local_10;
  int local_c;
  undefined4 uStack_8;
  
  local_10 = 0;
  local_c = 0;
  uStack_8 = 0;
  uVar1 = FUN_00703147(*param_1,param_1[1],param_6,0,&local_10,param_4,param_5);
  iVar2 = -1;
  if (param_3 != -1) {
    iVar2 = param_3 - (uint)(local_10 == 0x2d);
  }
  iVar2 = FUN_0070304d(param_2 + (local_10 == 0x2d),iVar2,local_c + param_6,&local_10,uVar1,param_7,
                       param_8);
  if (iVar2 == 0) {
    FUN_006fad16(param_2,param_3,param_6,&local_10,0,param_8);
  }
  else {
    *param_2 = 0;
  }
  return;
}


/* ==== 006fad16  FUN_006fad16  size=238 ==== */

undefined4
FUN_006fad16(char *param_1,uint param_2,size_t param_3,int *param_4,char param_5,int param_6)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  size_t sVar5;
  
  bVar2 = false;
  iVar3 = param_4[1];
  if ((param_5 != '\0') && (iVar3 - 1U == param_3)) {
    iVar1 = *param_4;
    (param_1 + (uint)(iVar1 == 0x2d) + (iVar3 - 1U))[0] = '0';
    (param_1 + (uint)(iVar1 == 0x2d) + (iVar3 - 1U))[1] = '\0';
  }
  pcVar4 = param_1;
  if (*param_4 == 0x2d) {
    pcVar4 = param_1 + 1;
    *param_1 = '-';
  }
  iVar3 = param_4[1];
  if (iVar3 < 1) {
    if ((iVar3 == 0) && (*(char *)param_4[2] == '0')) {
      bVar2 = true;
    }
    if ((param_5 == '\0') || (!bVar2)) {
      shift_bytes(param_1,param_2,pcVar4,1);
    }
    *pcVar4 = '0';
    iVar3 = 1;
  }
  pcVar4 = pcVar4 + iVar3;
  if (0 < (int)param_3) {
    shift_bytes(param_1,param_2,pcVar4,1);
    if (*(char *)(param_6 + 0x14) == '\0') {
      FUN_006ec260();
    }
    *pcVar4 = *(char *)**(undefined4 **)(*(int *)(param_6 + 0xc) + 0x88);
    if (param_4[1] < 0) {
      sVar5 = -param_4[1];
      if ((param_5 != '\0') || ((int)sVar5 < (int)param_3)) {
        param_3 = sVar5;
      }
      shift_bytes(param_1,param_2,pcVar4 + 1,param_3);
      _memset(pcVar4 + 1,0x30,param_3);
    }
  }
  return 0;
}


/* ==== 006fae04  FUN_006fae04  size=207 ==== */

void FUN_006fae04(undefined4 *param_1,undefined1 *param_2,int param_3,undefined4 param_4,
                 undefined4 param_5,int param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  bool bVar4;
  int local_18;
  int local_14;
  undefined4 uStack_10;
  int local_c;
  undefined4 local_8;
  
  local_18 = 0;
  local_14 = 0;
  uStack_10 = 0;
  local_8 = FUN_00703147(*param_1,param_1[1],param_6,0,&local_18,param_4,param_5);
  bVar4 = local_18 == 0x2d;
  local_c = local_14 + -1;
  iVar2 = -1;
  if (param_3 != -1) {
    iVar2 = param_3 - (uint)bVar4;
  }
  iVar2 = FUN_0070304d(param_2 + bVar4,iVar2,param_6,&local_18,local_8,param_9,param_10);
  if (iVar2 == 0) {
    iVar2 = local_14 + -1;
    if ((iVar2 < -4) || (param_6 <= iVar2)) {
      FUN_006fab2d(param_2,param_3,param_6,param_7,param_8,&local_18,1,param_10);
    }
    else {
      pcVar1 = param_2 + bVar4;
      if (local_c < iVar2) {
        do {
          pcVar3 = pcVar1;
          pcVar1 = pcVar3 + 1;
        } while (*pcVar3 != '\0');
        pcVar3[-1] = '\0';
      }
      FUN_006fad16(param_2,param_3,param_6,&local_18,1,param_10);
    }
  }
  else {
    *param_2 = 0;
  }
  return;
}


/* ==== 006faed3  FUN_006faed3  size=148 ==== */

undefined4 FUN_006faed3(int param_1,byte param_2,undefined1 *param_3,uint param_4,byte param_5)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  
  if (param_4 < param_2 + 4) {
    *param_3 = 0;
    return 0xc;
  }
  if (param_2 != 0) {
    *param_3 = 0x2d;
    param_3 = param_3 + 1;
    *param_3 = 0;
    if (param_4 != 0xffffffff) {
      param_4 = param_4 - 1;
    }
  }
  iVar3 = (param_5 ^ 1) * 2;
  pcVar4 = (&PTR_DAT_00733800)[param_1 * 4 + -4 + iVar3];
  pcVar1 = pcVar4 + 1;
  do {
    cVar2 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar2 != '\0');
  iVar3 = FUN_006f8593(param_3,param_4,
                       (&PTR_DAT_00733800)
                       [((param_1 * 4 + -3) - (uint)((uint)((int)pcVar4 - (int)pcVar1) < param_4)) +
                        iVar3]);
  if (iVar3 == 0) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}


/* ==== 006faf68  shift_bytes  size=52 ==== */

/* Library Function - Single Match
    void __cdecl shift_bytes(char * const,unsigned int,char * const,int)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl shift_bytes(char *param_1,uint param_2,char *param_3,int param_4)

{
  char cVar1;
  char *pcVar2;
  
  if (param_4 != 0) {
    pcVar2 = param_3;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    FUN_006e6bd0(param_3 + param_4,param_3,pcVar2 + (1 - (int)(param_3 + 1)));
  }
  return;
}


/* ==== 006faf9c  FUN_006faf9c  size=147 ==== */

/* WARNING: Removing unreachable block (ram,0x006fb026) */

char FUN_006faf9c(double *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  short unaff_DI;
  
  uVar2 = __aullshr();
  if (param_5 == 0) {
    cVar1 = '\x01' - (uVar2 < 8);
  }
  else {
    iVar3 = fegetround();
    if (iVar3 == 0) {
      cVar1 = fe_to_nearest(param_1,CONCAT44(param_4,param_3),unaff_DI);
    }
    else {
      if (iVar3 == 0x200) {
        if (uVar2 == 0) {
          return '\0';
        }
        if (*(int *)((int)param_1 + 4) < 0) {
          return '\0';
        }
      }
      else {
        if (iVar3 != 0x100) {
          return '\0';
        }
        if (uVar2 == 0) {
          return '\0';
        }
        if (0 < *(int *)((int)param_1 + 4)) {
          return '\0';
        }
        if (-1 < *(int *)((int)param_1 + 4)) {
          return '\0';
        }
      }
      cVar1 = '\x01';
    }
  }
  return cVar1;
}


/* ==== 006fb02f  FUN_006fb02f  size=385 ==== */

undefined4
FUN_006fb02f(double *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
            undefined4 param_7,uint param_8,undefined4 param_9,undefined4 param_10,int param_11)

{
  __acrt_fp_class _Var1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_c;
  undefined4 local_8;
  
  if (param_2 == 0) {
    *(undefined1 *)(param_11 + 0x1c) = 1;
    *(undefined4 *)(param_11 + 0x18) = 0x16;
  }
  else if ((param_3 == 0) || (param_4 == 0)) {
    *(undefined1 *)(param_11 + 0x1c) = 1;
    *(undefined4 *)(param_11 + 0x18) = 0x16;
  }
  else {
    if (param_5 != 0) {
      if ((((param_6 == 0x41) || (param_6 == 0x45)) || (param_6 == 0x46)) ||
         (local_8 = 0, param_6 == 0x47)) {
        local_8 = 1;
      }
      if (((param_8 & 8) == 0) && (_Var1 = __acrt_fp_classify(param_1), _Var1 != 0)) {
        if ((*(int *)((int)param_1 + 4) < 1) && (*(int *)((int)param_1 + 4) < 0)) {
          local_c = 1;
        }
        else {
          local_c = 0;
        }
        uVar2 = FUN_006faed3(_Var1,local_c,param_2,param_3,local_8);
        return uVar2;
      }
      if ((param_8 & 0x10) == 0) {
        uVar2 = 2;
      }
      else {
        uVar2 = 3;
      }
      uVar3 = 0;
      if ((param_8 & 0x20) != 0) {
        uVar3 = param_10;
      }
      if (param_6 < 0x62) {
        if ((param_6 == 0x61) || (param_6 == 0x41)) {
          uVar2 = FUN_006fa75c(param_1,param_2,param_3,param_4,param_5,param_7,local_8,uVar2,uVar3,
                               param_11);
          return uVar2;
        }
        param_6 = param_6 + -0x45;
      }
      else {
        param_6 = param_6 + -0x65;
      }
      if (param_6 == 0) {
        uVar2 = FUN_006faa89(param_1,param_2,param_3,param_4,param_5,param_7,local_8,uVar2,uVar3,
                             param_11);
        return uVar2;
      }
      if (param_6 != 1) {
        uVar2 = FUN_006fae04(param_1,param_2,param_3,param_4,param_5,param_7,local_8,uVar2);
        return uVar2;
      }
      uVar2 = FUN_006fac80(param_1,param_2,param_3,param_4,param_5,param_7);
      return uVar2;
    }
    *(undefined1 *)(param_11 + 0x1c) = 1;
    *(undefined4 *)(param_11 + 0x18) = 0x16;
  }
  FUN_006e8bb2(0,0,0,0,0,param_11);
  return 0x16;
}


/* ==== 006fb1b0  FUN_006fb1b0  size=362 ==== */

undefined4 FUN_006fb1b0(int *param_1,undefined1 *param_2,uint param_3,ushort param_4,int param_5)

{
  int iVar1;
  int iVar2;
  DWORD DVar3;
  undefined4 uVar4;
  undefined4 local_10;
  int local_c;
  int local_8;
  
  iVar1 = param_5;
  if ((param_2 == (undefined1 *)0x0) && (param_3 != 0)) {
    if (param_1 == (int *)0x0) {
      return 0;
    }
    *param_1 = 0;
    return 0;
  }
  if (param_1 != (int *)0x0) {
    *param_1 = -1;
  }
  if (param_3 < 0x80000000) {
    if (*(char *)(param_5 + 0x14) == '\0') {
      FUN_006ec260();
    }
    local_c = *(int *)(*(int *)(iVar1 + 0xc) + 8);
    if (local_c == 0xfde9) {
      local_10 = 0;
      local_c = 0;
      iVar2 = FUN_0070472f(param_2,param_4,&local_10,iVar1);
      if (param_1 != (int *)0x0) {
        *param_1 = iVar2;
      }
      if (iVar2 < 5) {
        return 0;
      }
      if (*(char *)(iVar1 + 0x1c) != '\0') {
        return *(undefined4 *)(iVar1 + 0x18);
      }
      return 0;
    }
    if (*(int *)(*(int *)(iVar1 + 0xc) + 0xa8) == 0) {
      local_8 = 0xff;
      if (0xff < param_4) {
        if ((param_2 != (undefined1 *)0x0) && (param_3 != 0)) {
          _memset(param_2,0,param_3);
        }
        goto LAB_006fb283;
      }
      if (param_2 == (undefined1 *)0x0) {
LAB_006fb29c:
        if (param_1 != (int *)0x0) {
          *param_1 = 1;
        }
        return 0;
      }
      if (param_3 != 0) {
        *param_2 = (char)param_4;
        goto LAB_006fb29c;
      }
    }
    else {
      local_8 = 0;
      iVar2 = FUN_00701686(local_c,0,&param_4,1,param_2,param_3,0,&local_8);
      if (iVar2 != 0) {
        if (local_8 == 0) {
          if (param_1 == (int *)0x0) {
            return 0;
          }
          *param_1 = iVar2;
          return 0;
        }
LAB_006fb283:
        *(undefined4 *)(iVar1 + 0x18) = 0x2a;
        *(undefined1 *)(iVar1 + 0x1c) = 1;
        return 0x2a;
      }
      DVar3 = GetLastError();
      if (DVar3 != 0x7a) goto LAB_006fb283;
      if ((param_2 != (undefined1 *)0x0) && (param_3 != 0)) {
        _memset(param_2,0,param_3);
      }
    }
    uVar4 = 0x22;
  }
  else {
    uVar4 = 0x16;
  }
  *(undefined4 *)(iVar1 + 0x18) = uVar4;
  *(undefined1 *)(iVar1 + 0x1c) = 1;
  FUN_006e8bb2(0,0,0,0,0,iVar1);
  return uVar4;
}


/* ==== 006fb31a  FUN_006fb31a  size=307 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_006fb31a(ushort *param_1,byte *param_2,uint param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if ((param_2 == (byte *)0x0) || (param_3 == 0)) {
    _DAT_007c8fc4 = 0;
    _DAT_007c8fc8 = 0;
  }
  else {
    if (*param_2 != 0) {
      if (*(char *)(param_4 + 0x14) == '\0') {
        FUN_006ec260();
      }
      piVar1 = *(int **)(param_4 + 0xc);
      iVar3 = piVar1[2];
      if (iVar3 == 0xfde9) {
        iVar3 = FUN_0070480b(param_1,param_2,param_3,&DAT_007c8fc4,param_4);
        if (-1 < iVar3) {
          return iVar3;
        }
      }
      else {
        if (piVar1[0x2a] == 0) {
          if (param_1 != (ushort *)0x0) {
            *param_1 = (ushort)*param_2;
          }
          return 1;
        }
        if (*(short *)(*piVar1 + (uint)*param_2 * 2) < 0) {
          iVar2 = *(int *)(*(int *)(param_4 + 0xc) + 4);
          if ((((1 < iVar2) && (iVar2 <= (int)param_3)) &&
              (iVar3 = FUN_006fdb32(iVar3,9,param_2,iVar2,param_1,param_1 != (ushort *)0x0),
              iVar3 != 0)) ||
             ((*(uint *)(*(int *)(param_4 + 0xc) + 4) <= param_3 && (param_2[1] != 0)))) {
            return *(int *)(*(int *)(param_4 + 0xc) + 4);
          }
        }
        else {
          iVar3 = FUN_006fdb32(iVar3,9,param_2,1,param_1,param_1 != (ushort *)0x0);
          if (iVar3 != 0) {
            return 1;
          }
        }
        *(undefined1 *)(param_4 + 0x1c) = 1;
        *(undefined4 *)(param_4 + 0x18) = 0x2a;
      }
      return -1;
    }
    if (param_1 != (ushort *)0x0) {
      *param_1 = 0;
    }
  }
  return 0;
}


/* ==== 006fb44d  FUN_006fb44d  size=56 ==== */

undefined4 FUN_006fb44d(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined1 local_2c [40];
  
  FUN_006e8923(param_4);
  uVar1 = FUN_006fb31a(param_1,param_2,param_3,local_2c);
  FUN_006e896b();
  return uVar1;
}


/* ==== 006fb485  FUN_006fb485  size=21 ==== */

bool FUN_006fb485(void)

{
  return DAT_007c8fcc == (DAT_007c5940 | 1);
}


/* ==== 006fb49a  FUN_006fb49a  size=62 ==== */

bool FUN_006fb49a(FILE *param_1)

{
  FILE *pFVar1;
  int iVar2;
  
  pFVar1 = (FILE *)FUN_006f3dbf(2);
  if (param_1 == pFVar1) {
    return true;
  }
  pFVar1 = (FILE *)FUN_006f3dbf(1);
  if (param_1 == pFVar1) {
    iVar2 = __fileno(param_1);
    iVar2 = FUN_00702dcb(iVar2);
    return iVar2 != 0;
  }
  return false;
}


/* ==== 006fb4d8  FUN_006fb4d8  size=171 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_006fb4d8(int *param_1)

{
  uint *puVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  
  cVar2 = FUN_006fb49a(param_1);
  if (cVar2 != '\0') {
    piVar3 = (int *)FUN_006f3dbf(1);
    if (param_1 == piVar3) {
      piVar3 = &DAT_007c8fd0;
    }
    else {
      piVar3 = (int *)FUN_006f3dbf(2);
      if (param_1 != piVar3) {
        return 0;
      }
      piVar3 = &DAT_007c8fd4;
    }
    _DAT_007c8c5c = _DAT_007c8c5c + 1;
    puVar1 = (uint *)(param_1 + 3);
    if ((*puVar1 & 0x4c0) == 0) {
      LOCK();
      *puVar1 = *puVar1 | 0x282;
      UNLOCK();
      if (*piVar3 == 0) {
        iVar4 = __malloc_base(0x1000);
        *piVar3 = iVar4;
        FUN_006f9a4d(0);
      }
      if (*piVar3 == 0) {
        param_1[2] = 2;
        param_1[1] = (int)(param_1 + 5);
        *param_1 = (int)(param_1 + 5);
        param_1[6] = 2;
      }
      else {
        param_1[1] = *piVar3;
        *param_1 = *piVar3;
        param_1[2] = 0x1000;
        param_1[6] = 0x1000;
      }
      return 1;
    }
  }
  return 0;
}


/* ==== 006fb583  FUN_006fb583  size=62 ==== */

void FUN_006fb583(char param_1,undefined4 *param_2,undefined4 param_3)

{
  uint *puVar1;
  
  if ((param_1 != '\0') && (puVar1 = param_2 + 3, (*puVar1 >> 9 & 1) != 0)) {
    FUN_006fa00a(param_2,param_3);
    LOCK();
    *puVar1 = *puVar1 & 0xfffffd7f;
    UNLOCK();
    param_2[6] = 0;
    param_2[1] = 0;
    *param_2 = 0;
  }
  return;
}


/* ==== 006fb5f6  FUN_006fb5f6  size=6 ==== */

undefined4 * FUN_006fb5f6(void)

{
  return &DAT_007c8fdc;
}


/* ==== 006fb5fc  FUN_006fb5fc  size=6 ==== */

undefined4 * FUN_006fb5fc(void)

{
  return &DAT_007c8fe0;
}


/* ==== 006fb602  FUN_006fb602  size=6 ==== */

undefined4 * FUN_006fb602(void)

{
  return &DAT_007c8fd8;
}


/* ==== 006fb608  FUN_006fb608  size=6 ==== */

undefined4 FUN_006fb608(void)

{
  return DAT_007c8fe4;
}


/* ==== 006fb60e  FUN_006fb60e  size=6 ==== */

undefined4 FUN_006fb60e(void)

{
  return DAT_007c8fe8;
}


/* ==== 006fb614  FUN_006fb614  size=44 ==== */

undefined4 FUN_006fb614(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_006f390a();
    *puVar1 = 0x16;
    FUN_006e8c2f();
    return 0x16;
  }
  *param_1 = DAT_007c8fdc;
  return 0;
}


/* ==== 006fb640  FUN_006fb640  size=44 ==== */

undefined4 FUN_006fb640(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_006f390a();
    *puVar1 = 0x16;
    FUN_006e8c2f();
    return 0x16;
  }
  *param_1 = DAT_007c8fe0;
  return 0;
}


/* ==== 006fb66c  FUN_006fb66c  size=44 ==== */

undefined4 FUN_006fb66c(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_006f390a();
    *puVar1 = 0x16;
    FUN_006e8c2f();
    return 0x16;
  }
  *param_1 = DAT_007c8fd8;
  return 0;
}


/* ==== 006fb6d2  FUN_006fb6d2  size=67 ==== */

int FUN_006fb6d2(uint param_1)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  
  uVar1 = param_1 & 0x80000003;
  bVar3 = uVar1 == 0;
  if ((int)uVar1 < 0) {
    bVar3 = (uVar1 - 1 | 0xfffffffc) == 0xffffffff;
  }
  if (bVar3) {
    if ((int)param_1 % 100 != 0) {
      return CONCAT31((int3)((uint)((int)param_1 / 100) >> 8),1);
    }
  }
  iVar2 = (int)(param_1 + 0x76c) % 400;
  return CONCAT31((int3)((uint)-iVar2 >> 8),-(iVar2 != 0)) + 1;
}


/* ==== 006fb715  common_gmtime_s<__int64>  size=330 ==== */

/* Library Function - Single Match
    int __cdecl common_gmtime_s<__int64>(struct tm * const,__int64 const * const)
   
   Library: Visual Studio 2019 Release */

int __cdecl common_gmtime_s<__int64>(tm *param_1,__int64 *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  tm *ptVar8;
  uint local_10;
  uint local_c;
  char local_5;
  
  if (param_1 == (tm *)0x0) {
    puVar2 = (undefined4 *)FUN_006f390a();
    *puVar2 = 0x16;
    FUN_006e8c2f();
  }
  else {
    ptVar8 = param_1;
    for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
      ptVar8->tm_sec = -1;
      ptVar8 = (tm *)&ptVar8->tm_min;
    }
    if (param_2 == (__int64 *)0x0) {
      puVar2 = (undefined4 *)FUN_006f390a();
      *puVar2 = 0x16;
      FUN_006e8c2f();
    }
    else {
      local_c = *(uint *)((int)param_2 + 4);
      local_10 = (uint)*param_2;
      if (((local_c < 0x80000000) || ((-2 < (int)local_c && (0xffff573f < local_10)))) &&
         (((int)local_c < 7 || (((int)local_c < 8 && (local_10 < 0x9358efe0)))))) {
        local_5 = '\0';
        iVar5 = FUN_006fb85f(&local_10,&local_5);
        uVar1 = local_10;
        param_1->tm_year = iVar5;
        iVar5 = __alldiv(local_10,local_c,0x15180,0);
        uVar3 = (uint)((longlong)iVar5 * 0x15180);
        param_1->tm_yday = iVar5;
        uVar6 = uVar1 - uVar3;
        local_c = (local_c - (int)((ulonglong)((longlong)iVar5 * 0x15180) >> 0x20)) -
                  (uint)(uVar1 < uVar3);
        puVar2 = (undefined4 *)&DAT_007338c4;
        if (local_5 == '\0') {
          puVar2 = &DAT_00733890;
        }
        iVar4 = 1;
        iVar7 = puVar2[1];
        while (iVar7 < iVar5) {
          iVar4 = iVar4 + 1;
          iVar7 = puVar2[iVar4];
        }
        param_1->tm_mon = iVar4 + -1;
        param_1->tm_mday = iVar5 - puVar2[iVar4 + -1];
        iVar5 = __alldiv((int)*param_2,*(undefined4 *)((int)param_2 + 4),0x15180,0);
        uVar1 = local_c;
        param_1->tm_wday = (iVar5 + 4) % 7;
        iVar5 = __alldiv(uVar6,local_c,0xe10,0);
        param_1->tm_hour = iVar5;
        uVar3 = (uint)((longlong)iVar5 * 0xe10);
        iVar7 = uVar6 - uVar3;
        iVar5 = __alldiv(iVar7,(uVar1 - (int)((ulonglong)((longlong)iVar5 * 0xe10) >> 0x20)) -
                               (uint)(uVar6 < uVar3),0x3c,0);
        param_1->tm_isdst = 0;
        param_1->tm_min = iVar5;
        param_1->tm_sec = iVar7 + iVar5 * -0x3c;
        return 0;
      }
      puVar2 = (undefined4 *)FUN_006f390a();
      *puVar2 = 0x16;
    }
  }
  return 0x16;
}


/* ==== 006fb85f  FUN_006fb85f  size=185 ==== */

int FUN_006fb85f(uint *param_1,undefined1 *param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  uVar10 = *param_1;
  uVar1 = param_1[1];
  iVar3 = __alldiv(uVar10,uVar1,0x1e13380,0);
  iVar7 = iVar3 + 0x46;
  iVar4 = __crt_time_elapsed_leap_years<>(iVar7);
  uVar5 = (uint)((longlong)iVar4 * 0x15180);
  uVar6 = (uint)((longlong)iVar3 * 0x1e13380);
  uVar8 = uVar10 - uVar6;
  uVar9 = uVar8 - uVar5;
  uVar10 = (((uVar1 - (int)((ulonglong)((longlong)iVar3 * 0x1e13380) >> 0x20)) -
            (uint)(uVar10 < uVar6)) - (int)((ulonglong)((longlong)iVar4 * 0x15180) >> 0x20)) -
           (uint)(uVar8 < uVar5);
  *param_1 = uVar9;
  param_1[1] = uVar10;
  if (((int)uVar10 < 1) && ((int)uVar10 < 0)) {
    *param_1 = uVar9 + 0x1e13380;
    uVar10 = uVar10 + (0xfe1ecc7f < uVar9);
    iVar7 = iVar3 + 0x45;
    param_1[1] = uVar10;
    cVar2 = FUN_006fb6d2(iVar7);
    if (cVar2 != '\0') {
      *param_1 = uVar9 + 0x1e28500;
      param_1[1] = uVar10 + (0xfffeae7f < uVar9 + 0x1e13380);
      *param_2 = 1;
    }
  }
  else {
    cVar2 = FUN_006fb6d2(iVar7);
    if (cVar2 != '\0') {
      *param_2 = 1;
    }
  }
  return iVar7;
}


/* ==== 006fb918  FUN_006fb918  size=11 ==== */

void FUN_006fb918(tm *param_1,__int64 *param_2)

{
  common_gmtime_s<__int64>(param_1,param_2);
  return;
}


/* ==== 006fb923  FUN_006fb923  size=656 ==== */

int FUN_006fb923(tm *param_1,uint *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  tm *ptVar6;
  uint uVar7;
  bool bVar8;
  longlong lVar9;
  uint local_18;
  int local_14;
  uint local_10;
  int local_c;
  uint local_8;
  
  if (param_1 == (tm *)0x0) {
    puVar2 = (undefined4 *)FUN_006f390a();
    *puVar2 = 0x16;
    FUN_006e8c2f();
    return 0x16;
  }
  ptVar6 = param_1;
  for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
    ptVar6->tm_sec = -1;
    ptVar6 = (tm *)&ptVar6->tm_min;
  }
  if (param_2 == (uint *)0x0) {
    puVar2 = (undefined4 *)FUN_006f390a();
    *puVar2 = 0x16;
    FUN_006e8c2f();
    return 0x16;
  }
  if ((((int)param_2[1] < 1) && ((int)param_2[1] < 0)) ||
     ((6 < (int)param_2[1] && ((7 < (int)param_2[1] || (0x93582aff < *param_2)))))) {
    puVar2 = (undefined4 *)FUN_006f390a();
    *puVar2 = 0x16;
    return 0x16;
  }
  ___tzset();
  local_c = 0;
  local_10 = 0;
  local_8 = 0;
  iVar4 = FUN_006fb614(&local_c);
  if (((iVar4 != 0) || (iVar4 = FUN_006fb640(&local_10), iVar4 != 0)) ||
     (iVar4 = FUN_006fb66c(&local_8), iVar4 != 0)) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  uVar1 = *param_2;
  uVar3 = (param_2[1] - 1) + (uint)(0x3f480 < uVar1);
  if ((7 < uVar3) || ((6 < uVar3 && (0x935041fd < uVar1 - 0x3f481)))) {
    iVar4 = FUN_006fb918(param_1,param_2);
    if (iVar4 != 0) {
      return iVar4;
    }
    uVar1 = param_1->tm_sec;
    uVar3 = local_8;
    if ((local_c != 0) && (iVar4 = __isindst(param_1), uVar3 = local_8, iVar4 != 0)) {
      param_1->tm_isdst = 1;
      uVar3 = local_8 + local_10;
    }
    uVar7 = uVar1 - uVar3;
    iVar5 = (((int)uVar1 >> 0x1f) - ((int)uVar3 >> 0x1f)) - (uint)(uVar1 < uVar3);
    iVar4 = __allrem(uVar7,iVar5,0x3c,0);
    param_1->tm_sec = iVar4;
    if (iVar4 < 0) {
      bVar8 = 0x3b < uVar7;
      uVar7 = uVar7 - 0x3c;
      param_1->tm_sec = iVar4 + 0x3c;
      iVar5 = iVar5 + -1 + (uint)bVar8;
    }
    lVar9 = __alldiv(uVar7,iVar5,0x3c,0);
    lVar9 = lVar9 + param_1->tm_min;
    iVar4 = __allrem(lVar9,0x3c,0);
    param_1->tm_min = iVar4;
    if (iVar4 < 0) {
      param_1->tm_min = iVar4 + 0x3c;
      lVar9 = lVar9 + -0x3c;
    }
    lVar9 = __alldiv(lVar9,0x3c,0);
    lVar9 = lVar9 + param_1->tm_hour;
    iVar4 = __allrem(lVar9,0x18,0);
    param_1->tm_hour = iVar4;
    if (iVar4 < 0) {
      param_1->tm_hour = iVar4 + 0x18;
      lVar9 = lVar9 + -0x18;
    }
    lVar9 = __alldiv(lVar9,0x18,0);
    iVar4 = (int)lVar9;
    if (-1 < lVar9) {
      if ((0xffffffff < lVar9) || (iVar4 != 0)) {
        param_1->tm_mday = param_1->tm_mday + iVar4;
        param_1->tm_yday = param_1->tm_yday + iVar4;
        param_1->tm_wday = (param_1->tm_wday + iVar4) % 7;
        return 0;
      }
      if (0xffffffff < lVar9) {
        return 0;
      }
      if (-1 < lVar9) {
        return 0;
      }
    }
    param_1->tm_wday = (param_1->tm_wday + 7 + iVar4) % 7;
    iVar5 = param_1->tm_mday + iVar4;
    iVar4 = param_1->tm_yday + iVar4;
    param_1->tm_mday = iVar5;
    if (iVar5 < 1) {
      param_1->tm_mon = 0xb;
      param_1->tm_year = param_1->tm_year + -1;
      param_1->tm_mday = iVar5 + 0x1f;
      param_1->tm_yday = iVar4 + 0x16d;
    }
    else {
      param_1->tm_yday = iVar4;
    }
    return 0;
  }
  local_18 = uVar1 - local_8;
  local_14 = (param_2[1] - ((int)local_8 >> 0x1f)) - (uint)(uVar1 < local_8);
  iVar4 = FUN_006fb918(param_1,&local_18);
  if (iVar4 != 0) {
    return iVar4;
  }
  if (local_c == 0) {
    return 0;
  }
  iVar4 = __isindst(param_1);
  if (iVar4 == 0) {
    return 0;
  }
  bVar8 = local_18 < local_10;
  local_18 = local_18 - local_10;
  local_14 = (local_14 - ((int)local_10 >> 0x1f)) - (uint)bVar8;
  iVar4 = FUN_006fb918(param_1,&local_18);
  if (iVar4 == 0) {
    param_1->tm_isdst = 1;
    return 0;
  }
  return iVar4;
}


/* ==== 006fbbb4  FUN_006fbbb4  size=11 ==== */

void FUN_006fbbb4(void)

{
  FUN_006fb923();
  return;
}


/* ==== 006fbbbf  FUN_006fbbbf  size=537 ==== */

bool FUN_006fbbbf(int *param_1)

{
  bool bVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  int iVar6;
  undefined2 uVar7;
  int local_8;
  
  uVar5 = 0;
  local_8 = 0;
  iVar2 = FUN_006fb614(&local_8);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  if (local_8 == 0) {
LAB_006fbdca:
    bVar1 = false;
  }
  else {
    iVar2 = param_1[5];
    if ((iVar2 != DAT_007c5e18) || (iVar2 != DAT_007c5e24)) {
      if (DAT_007c8ff0 == 0) {
        FUN_006fbdd9(0,1,iVar2,(iVar2 < 0x6b) + '\x03',(0x6a < iVar2) + '\x01',0,0,2,0,0,0);
        FUN_006fbdd9(1,1,param_1[5],(0x6a < iVar2) + '\n',(iVar2 < 0x6b) * '\x04' + '\x01',0,0,2,0,0
                     ,0);
      }
      else {
        if (DAT_007c9090 != 0) {
          uVar3 = 0;
          uVar4 = 0;
          uVar7 = DAT_007c9096;
        }
        else {
          uVar4 = DAT_007c9094;
          uVar3 = DAT_007c9096;
          uVar7 = 0;
        }
        FUN_006fbdd9(0,DAT_007c9090 == 0,iVar2,DAT_007c9092,uVar3,uVar4,uVar7,DAT_007c9098,
                     DAT_007c909a,DAT_007c909c,DAT_007c909e);
        uVar4 = DAT_007c9042;
        uVar7 = DAT_007c9040;
        if (DAT_007c903c != 0) {
          uVar4 = 0;
          uVar7 = 0;
          uVar5 = DAT_007c9042;
        }
        FUN_006fbdd9(1,DAT_007c903c == 0,param_1[5],DAT_007c903e,uVar4,uVar7,uVar5,DAT_007c9044,
                     DAT_007c9046,DAT_007c9048,DAT_007c904a);
      }
    }
    iVar2 = param_1[7];
    if (DAT_007c5e1c < DAT_007c5e28) {
      if ((iVar2 < DAT_007c5e1c) || (DAT_007c5e28 < iVar2)) goto LAB_006fbdca;
      if ((iVar2 <= DAT_007c5e1c) || (DAT_007c5e28 <= iVar2)) {
LAB_006fbd9c:
        iVar6 = ((param_1[2] * 0x3c + param_1[1]) * 0x3c + *param_1) * 1000;
        if (iVar2 == DAT_007c5e1c) {
          return DAT_007c5e20 <= iVar6;
        }
        return iVar6 < DAT_007c5e2c;
      }
    }
    else if ((DAT_007c5e28 <= iVar2) && (iVar2 <= DAT_007c5e1c)) {
      if ((iVar2 <= DAT_007c5e28) || (DAT_007c5e1c <= iVar2)) goto LAB_006fbd9c;
      goto LAB_006fbdca;
    }
    bVar1 = true;
  }
  return bVar1;
}


/* ==== 006fbdd9  FUN_006fbdd9  size=322 ==== */

void FUN_006fbdd9(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8,int param_9,int param_10,int param_11)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int local_c;
  undefined4 uStack_8;
  
  local_c = 0;
  cVar1 = FUN_006fb6d2(param_3);
  uStack_8._3_1_ = cVar1;
  if (param_2 == 1) {
    if (cVar1 == '\0') {
      iVar3 = *(int *)(&DAT_0073388c + param_4 * 4);
    }
    else {
      iVar3 = *(int *)(&DAT_007338c0 + param_4 * 4);
    }
    iVar2 = __crt_time_elapsed_leap_years<>(param_3);
    iVar2 = (iVar2 + iVar3 + 1 + param_3 * 0x16d + -0x63ca) % 7;
    iVar3 = iVar3 + 1 + (param_5 * 7 - iVar2) + param_6;
    if (iVar2 <= param_6) {
      iVar3 = iVar3 + -7;
    }
    piVar4 = (int *)(&DAT_007338c4 + param_4 * 4);
    if (uStack_8._3_1_ == '\0') {
      piVar4 = &DAT_00733890 + param_4;
    }
    if ((param_5 == 5) && (*piVar4 < iVar3)) {
      iVar3 = iVar3 + -7;
    }
  }
  else {
    if (cVar1 == '\0') {
      iVar3 = *(int *)(&DAT_0073388c + param_4 * 4);
    }
    else {
      iVar3 = *(int *)(&DAT_007338c0 + param_4 * 4);
    }
    iVar3 = iVar3 + param_7;
  }
  param_11 = param_11 + ((param_8 * 0x3c + param_9) * 0x3c + param_10) * 1000;
  if (param_1 == 0) {
    DAT_007c5e18 = param_3;
    DAT_007c5e1c = iVar3;
    DAT_007c5e20 = param_11;
  }
  else {
    DAT_007c5e28 = iVar3;
    DAT_007c5e2c = param_11;
    iVar3 = FUN_006fb640(&local_c);
    if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    DAT_007c5e2c = DAT_007c5e2c + local_c * 1000;
    DAT_007c5e24 = param_3;
    if (DAT_007c5e2c < 0) {
      DAT_007c5e2c = DAT_007c5e2c + 86400000;
      DAT_007c5e28 = DAT_007c5e28 + -1;
    }
    else if (86399999 < DAT_007c5e2c) {
      DAT_007c5e2c = DAT_007c5e2c + -86400000;
      DAT_007c5e28 = DAT_007c5e28 + 1;
    }
  }
  return;
}


/* ==== 006fbf1c  FUN_006fbf1c  size=119 ==== */

int FUN_006fbf1c(int param_1)

{
  int iVar1;
  undefined1 local_c [4];
  int local_8;
  
  iVar1 = FUN_006fe33e(&local_8,param_1,0x100,&DAT_00733888);
  if (iVar1 != 0) {
    if (iVar1 == 0x22) {
      param_1 = __malloc_base(local_8 * 2);
      if ((param_1 == 0) ||
         (iVar1 = FUN_006fe33e(local_c,param_1,local_8,&DAT_00733888), iVar1 != 0)) {
        FUN_006f9a4d(param_1);
        param_1 = 0;
      }
      else {
        FUN_006f9a4d(0);
      }
    }
    else {
      param_1 = 0;
    }
  }
  return param_1;
}


/* ==== 006fbf93  FUN_006fbf93  size=70 ==== */

void FUN_006fbf93(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = FUN_00702156(param_2,0x40,param_1,param_4);
  if (iVar1 == 0) {
    uVar3 = 0x3f;
    iVar4 = iVar1;
    iVar5 = iVar1;
    uVar2 = __acrt_get_utf8_acp_compatibility_codepage();
    FUN_00701686(uVar2,iVar1,param_2,param_4,param_3,uVar3,iVar4,iVar5);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}


/* ==== 006fbfda  FUN_006fbfda  size=657 ==== */

void FUN_006fbfda(ushort *param_1)

{
  ushort uVar1;
  ushort uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  ushort *puVar7;
  int *piVar8;
  uint *puVar9;
  ushort *puVar10;
  bool bVar11;
  undefined1 local_10 [4];
  uint local_c;
  int local_8;
  
  puVar3 = (undefined4 *)FUN_006fb608();
  puVar4 = (undefined4 *)FUN_006fb60e();
  local_8 = 0;
  local_c = 0;
  iVar5 = FUN_006fb66c(&local_8);
  if ((iVar5 == 0) && (iVar5 = FUN_006fb614(&local_c), iVar5 == 0)) {
    puVar7 = DAT_007c8fec;
    puVar10 = param_1;
    if (DAT_007c8fec != (ushort *)0x0) {
      do {
        uVar1 = *puVar10;
        bVar11 = uVar1 < *puVar7;
        if (uVar1 != *puVar7) {
LAB_006fc05a:
          uVar6 = -(uint)bVar11 | 1;
          goto LAB_006fc05f;
        }
        if (uVar1 == 0) break;
        uVar1 = puVar10[1];
        bVar11 = uVar1 < puVar7[1];
        if (uVar1 != puVar7[1]) goto LAB_006fc05a;
        puVar7 = puVar7 + 2;
        puVar10 = puVar10 + 2;
      } while (uVar1 != 0);
      uVar6 = 0;
LAB_006fc05f:
      if (uVar6 == 0) {
        return;
      }
    }
    puVar7 = param_1;
    do {
      uVar1 = *puVar7;
      puVar7 = puVar7 + 1;
    } while (uVar1 != 0);
    puVar7 = (ushort *)__malloc_base(((int)puVar7 - (int)(param_1 + 1) >> 1) * 2 + 2);
    if (puVar7 != (ushort *)0x0) {
      FUN_006f9a4d(DAT_007c8fec);
      puVar10 = param_1;
      do {
        uVar1 = *puVar10;
        puVar10 = puVar10 + 1;
      } while (uVar1 != 0);
      DAT_007c8fec = puVar7;
      iVar5 = FUN_00701592(puVar7,((int)puVar10 - (int)(param_1 + 1) >> 1) + 1,param_1);
      if (iVar5 != 0) goto LAB_006fc261;
      _memset((void *)*puVar4,0,0x80);
      _memset((void *)puVar4[1],0,0x80);
      _memset((void *)*puVar3,0,0x40);
      _memset((void *)puVar3[1],0,0x40);
      FUN_006fbf93(param_1,*puVar4,*puVar3,3);
      iVar5 = 3;
      do {
        if (*param_1 != 0) {
          param_1 = param_1 + 1;
        }
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      uVar1 = *param_1;
      if (uVar1 == 0x2d) {
        param_1 = param_1 + 1;
      }
      local_8 = FUN_006f39af(param_1,local_10,10);
      local_8 = local_8 * 0xe10;
      for (; (uVar2 = *param_1, uVar2 == 0x2b || ((ushort)(uVar2 - 0x30) < 10));
          param_1 = param_1 + 1) {
      }
      if (uVar2 == 0x3a) {
        param_1 = param_1 + 1;
        iVar5 = FUN_006f39af(param_1,local_10,10);
        local_8 = local_8 + iVar5 * 0x3c;
        uVar2 = *param_1;
        while ((0x2f < uVar2 && (uVar2 < 0x3a))) {
          param_1 = param_1 + 1;
          uVar2 = *param_1;
        }
        if (uVar2 == 0x3a) {
          param_1 = param_1 + 1;
          iVar5 = FUN_006f39af(param_1,local_10,10);
          local_8 = local_8 + iVar5;
          uVar2 = *param_1;
          while ((0x2f < uVar2 && (uVar2 < 0x3a))) {
            param_1 = param_1 + 1;
            uVar2 = *param_1;
          }
        }
      }
      if (uVar1 == 0x2d) {
        local_8 = -local_8;
      }
      local_c = (uint)(*param_1 != 0);
      if (*param_1 != 0) {
        FUN_006fbf93(param_1,puVar4[1],puVar3[1],3);
      }
      iVar5 = local_8;
      piVar8 = (int *)FUN_006fb602();
      uVar6 = local_c;
      *piVar8 = iVar5;
      puVar9 = (uint *)FUN_006fb5f6();
      *puVar9 = uVar6;
    }
    FUN_006f9a4d(0);
    return;
  }
LAB_006fc261:
                    /* WARNING: Subroutine does not return */
  __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}


/* ==== 006fc26c  FUN_006fc26c  size=345 ==== */

void FUN_006fc26c(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  DWORD DVar5;
  UINT UVar6;
  int *piVar7;
  int local_10;
  undefined4 local_c;
  int local_8;
  
  puVar2 = (undefined4 *)FUN_006fb608();
  puVar3 = (undefined4 *)FUN_006fb60e();
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  iVar4 = FUN_006fb66c(&local_8);
  if (iVar4 == 0) {
    iVar4 = FUN_006fb614(&local_c);
    if (iVar4 == 0) {
      iVar4 = FUN_006fb640(&local_10);
      if (iVar4 == 0) {
        FUN_006f9a4d(DAT_007c8fec);
        DAT_007c8fec = 0;
        DVar5 = GetTimeZoneInformation((LPTIME_ZONE_INFORMATION)&DAT_007c8ff8);
        if (DVar5 != 0xffffffff) {
          local_8 = DAT_007c8ff8 * 0x3c;
          local_c = 1;
          DAT_007c8ff0 = 1;
          if (DAT_007c903e != 0) {
            local_8 = DAT_007c904c * 0x3c + local_8;
          }
          if ((DAT_007c9092 == 0) || (DAT_007c90a0 == 0)) {
            local_10 = 0;
            local_c = 0;
          }
          else {
            local_10 = (DAT_007c90a0 - DAT_007c904c) * 0x3c;
          }
          _memset((void *)*puVar3,0,0x80);
          _memset((void *)puVar3[1],0,0x80);
          _memset((void *)*puVar2,0,0x40);
          _memset((void *)puVar2[1],0,0x40);
          UVar6 = ____lc_codepage_func();
          FUN_006fc43c(&DAT_007c8ffc,*puVar3,*puVar2,UVar6);
          FUN_006fc43c(&DAT_007c9050,puVar3[1],puVar2[1],UVar6);
        }
        iVar4 = local_8;
        piVar7 = (int *)FUN_006fb602();
        uVar1 = local_c;
        *piVar7 = iVar4;
        puVar2 = (undefined4 *)FUN_006fb5f6();
        iVar4 = local_10;
        *puVar2 = uVar1;
        piVar7 = (int *)FUN_006fb5fc();
        *piVar7 = iVar4;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}


/* ==== 006fc3c6  FUN_006fc3c6  size=118 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_006fc3c6(void)

{
  short *psVar1;
  short local_208 [256];
  uint local_8;
  
  local_8 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  DAT_007c5e24 = 0xffffffff;
  DAT_007c5e18 = 0xffffffff;
  DAT_007c8ff0 = 0;
  psVar1 = (short *)FUN_006fbf1c(local_208);
  if ((psVar1 == (short *)0x0) || (*psVar1 == 0)) {
    FUN_006fc26c();
  }
  else {
    FUN_006fbfda(psVar1);
  }
  FUN_006f9a4d(-(uint)(psVar1 != local_208) & (uint)psVar1);
  return;
}


/* ==== 006fc43c  FUN_006fc43c  size=65 ==== */

void FUN_006fc43c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_00702156(param_2,0x40,param_1,0x20);
  if (iVar1 == 0) {
    FUN_00701686(param_4,0,param_1,0xffffffff,param_3,0x40,0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}


/* ==== 006fc4d2  FUN_006fc4d2  size=9 ==== */

void FUN_006fc4d2(void)

{
  ___acrt_unlock(6);
  return;
}


/* ==== 006fc526  FUN_006fc526  size=9 ==== */

void FUN_006fc526(void)

{
  ___acrt_unlock(6);
  return;
}


/* ==== 006fc720  FUN_006fc720  size=11 ==== */

void FUN_006fc720(void)

{
  __fgetc_nolock();
  return;
}


/* ==== 006fc72b  fegetround  size=13 ==== */

/* Library Function - Single Match
    _fegetround
   
   Library: Visual Studio 2019 Release */

void __cdecl fegetround(void)

{
  undefined4 uVar1;
  
  uVar1 = ___acrt_fenv_get_control();
  ___acrt_fenv_get_common_round_control(uVar1);
  return;
}


/* ==== 006fc738  FUN_006fc738  size=495 ==== */

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_006fc738(int *param_1,undefined4 param_2,uint param_3,undefined4 param_4,int param_5,
                undefined4 param_6,int param_7,int param_8,int param_9)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  iVar3 = param_5;
  if (0 < param_5) {
    iVar1 = ___strncnt(param_4,param_5);
    iVar3 = iVar1 + 1;
    if (param_5 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_8 == 0) {
    param_8 = *(int *)(*param_1 + 8);
  }
  iVar1 = FUN_006fdb32(param_8,(param_9 != 0) * '\b' + '\x01',param_4,iVar3,0,0);
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = iVar1 * 2 + 8;
  uVar2 = -(uint)((uint)(iVar1 * 2) < uVar2) & uVar2;
  if (uVar2 == 0) {
    puVar5 = (undefined4 *)0x0;
  }
  else if (uVar2 < 0x401) {
    puVar6 = (undefined4 *)&stack0xffffffe8;
    puVar5 = (undefined4 *)&stack0xffffffe8;
    if (&stack0x00000000 != (undefined1 *)0x18) {
LAB_006fc7eb:
      puVar5 = puVar6 + 2;
      if (((puVar5 != (undefined4 *)0x0) &&
          (iVar3 = FUN_006fdb32(param_8,1,param_4,iVar3,puVar5,iVar1), iVar3 != 0)) &&
         (iVar3 = ___acrt_LCMapStringEx_36(param_2,param_3,puVar5,iVar1,0,0,0,0,0), iVar3 != 0)) {
        if ((param_3 & 0x400) == 0) {
          uVar2 = iVar3 * 2 + 8;
          uVar2 = -(uint)((uint)(iVar3 * 2) < uVar2) & uVar2;
          if (uVar2 == 0) {
            puVar6 = (undefined4 *)0x0;
          }
          else if (uVar2 < 0x401) {
            puVar4 = (undefined4 *)&stack0xffffffe8;
            puVar6 = (undefined4 *)&stack0xffffffe8;
            if (&stack0x00000000 != (undefined1 *)0x18) {
LAB_006fc8ac:
              puVar6 = puVar4 + 2;
              if ((puVar6 != (undefined4 *)0x0) &&
                 (iVar1 = ___acrt_LCMapStringEx_36(param_2,param_3,puVar5,iVar1,puVar6,iVar3,0,0,0),
                 iVar1 != 0)) {
                if (param_7 == 0) {
                  param_7 = 0;
                  param_6 = 0;
                }
                iVar3 = FUN_00701686(param_8,0,puVar6,iVar3,param_6,param_7,0,0);
                if (iVar3 != 0) {
                  FUN_006f184f(puVar6);
                  goto LAB_006fc90c;
                }
              }
            }
          }
          else {
            puVar4 = (undefined4 *)__malloc_base(uVar2);
            puVar6 = (undefined4 *)0x0;
            if (puVar4 != (undefined4 *)0x0) {
              *puVar4 = 0xdddd;
              goto LAB_006fc8ac;
            }
          }
          FUN_006f184f(puVar6);
        }
        else if ((param_7 == 0) ||
                ((iVar3 <= param_7 &&
                 (iVar3 = ___acrt_LCMapStringEx_36
                                    (param_2,param_3,puVar5,iVar1,param_6,param_7,0,0,0), iVar3 != 0
                 )))) goto LAB_006fc90c;
      }
    }
  }
  else {
    puVar6 = (undefined4 *)__malloc_base(uVar2);
    puVar5 = (undefined4 *)0x0;
    if (puVar6 != (undefined4 *)0x0) {
      *puVar6 = 0xdddd;
      goto LAB_006fc7eb;
    }
  }
  iVar3 = 0;
LAB_006fc90c:
  FUN_006f184f(puVar5);
  return iVar3;
}


/* ==== 006fcb9a  common_openfile<char>  size=131 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    struct _iobuf * __cdecl common_openfile<char>(char const * const,char const * const,int,class
   __crt_stdio_stream)
   
   Library: Visual Studio 2019 Release */

_iobuf * __cdecl common_openfile<char>(char *param_1,undefined4 param_2,int param_3,_iobuf *param_4)

{
  int *piVar1;
  errno_t eVar2;
  char local_20 [12];
  int local_14;
  uint local_10;
  int local_c;
  int local_8;
  
  piVar1 = (int *)__acrt_stdio_parse_mode<char>(local_20);
  local_14 = *piVar1;
  local_10 = piVar1[1];
  local_c = piVar1[2];
  if ((char)local_c != '\0') {
    eVar2 = FID_conflict___sopen_s(&local_8,param_1,local_14,param_3,0x180);
    if (eVar2 == 0) {
      _DAT_007c8c5c = _DAT_007c8c5c + 1;
      LOCK();
      param_4->_flag = param_4->_flag | local_10;
      UNLOCK();
      param_4->_base = (char *)0x0;
      param_4->_tmpfname = (char *)0x0;
      param_4->_cnt = 0;
      param_4->_ptr = (char *)0x0;
      param_4->_file = local_8;
      return param_4;
    }
  }
  return (_iobuf *)0x0;
}


/* ==== 006fcc57  FID_conflict:__acrt_stdio_parse_mode_b  size=32 ==== */

/* Library Function - Multiple Matches With Different Base Names
    bool __cdecl __acrt_stdio_parse_mode_b(struct __acrt_stdio_stream_mode &)
    bool __cdecl __acrt_stdio_parse_mode_t(struct __acrt_stdio_stream_mode &)
   
   Library: Visual Studio 2019 Release */

uint FID_conflict___acrt_stdio_parse_mode_b(uint *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1;
  if ((uVar1 & 0xc000) != 0) {
    return uVar1 & 0xffffff00;
  }
  *param_1 = uVar1 | 0x8000;
  return CONCAT31((int3)((uVar1 | 0x8000) >> 8),1);
}


/* ==== 006fccf1  FID_conflict:__acrt_stdio_parse_mode_b  size=32 ==== */

/* Library Function - Multiple Matches With Different Base Names
    bool __cdecl __acrt_stdio_parse_mode_b(struct __acrt_stdio_stream_mode &)
    bool __cdecl __acrt_stdio_parse_mode_t(struct __acrt_stdio_stream_mode &)
   
   Library: Visual Studio 2019 Release */

uint FID_conflict___acrt_stdio_parse_mode_b(uint *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1;
  if ((uVar1 & 0xc000) != 0) {
    return uVar1 & 0xffffff00;
  }
  *param_1 = uVar1 | 0x4000;
  return CONCAT31((int3)((uVar1 | 0x4000) >> 8),1);
}


/* ==== 006fcd31  FUN_006fcd31  size=11 ==== */

void FUN_006fcd31(void)

{
  common_openfile<char>();
  return;
}


/* ==== 006fcd3c  FUN_006fcd3c  size=962 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

DWORD * FUN_006fcd3c(DWORD *param_1,uint param_2,byte *param_3,int param_4,int param_5)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  byte *pbVar4;
  BOOL BVar5;
  DWORD DVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  int local_74;
  UINT local_70;
  byte *local_6c;
  HANDLE local_68;
  byte *local_64;
  byte *local_60;
  undefined2 local_5c [2];
  byte *local_58;
  int local_54;
  int local_50;
  byte *local_4c;
  int local_48;
  undefined4 local_44;
  int local_40;
  byte *local_3c;
  int local_38;
  byte local_31;
  byte *local_30;
  undefined1 local_2c [8];
  byte local_24;
  byte local_23;
  byte local_1c [8];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0072a92f;
  local_10 = ExceptionList;
  uVar3 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_54 = (param_2 & 0x3f) * 0x38;
  local_48 = (int)param_2 >> 6;
  local_64 = param_3;
  local_40 = param_5;
  local_68 = *(HANDLE *)(local_54 + 0x18 + (&DAT_007c8dc0)[local_48]);
  local_58 = param_3 + param_4;
  local_14 = uVar3;
  local_70 = GetConsoleOutputCP();
  if (*(char *)(param_5 + 0x14) == '\0') {
    FUN_006ec260(uVar3);
  }
  local_74 = *(int *)(*(int *)(param_5 + 0xc) + 8);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_30 = local_64;
  if (local_58 <= local_64) {
    ExceptionList = local_10;
    return param_1;
  }
  local_4c = (byte *)0x0;
  iVar8 = local_54;
  do {
    iVar9 = 0;
    local_31 = *local_30;
    local_44 = 0;
    local_38 = 1;
    if (local_74 == 0xfde9) {
      local_4c = (byte *)((&DAT_007c8dc0)[local_48] + 0x2e + iVar8);
      pbVar4 = local_4c;
      local_38 = iVar9;
      do {
        if (*pbVar4 == 0) break;
        local_38 = local_38 + 1;
        pbVar4 = pbVar4 + 1;
      } while (local_38 < 5);
      iVar8 = (int)local_58 - (int)local_30;
      if (local_38 < 1) {
        local_50 = (char)(&DAT_007c5b50)[*local_30] + 1;
        if (iVar8 < local_50) {
          if (0 < iVar8) {
            do {
              *(byte *)((&DAT_007c8dc0)[local_48] + local_54 + 0x2e + iVar9) = local_30[iVar9];
              iVar9 = iVar9 + 1;
            } while (iVar9 < iVar8);
          }
          goto LAB_006fd093;
        }
        local_84 = 0;
        local_80 = 0;
        local_38 = (local_50 == 4) + 1;
        local_3c = local_30;
        iVar9 = FUN_0070484e(&local_44,&local_3c,local_38,&local_84,local_40);
        iVar8 = local_54;
      }
      else {
        local_3c = (byte *)((int)(char)(&DAT_007c5b50)[*local_4c] + 1);
        local_50 = (int)local_3c - local_38;
        pbVar4 = local_4c;
        if (iVar8 < local_50) {
          if (0 < iVar8) {
            do {
              pbVar4 = local_30 + iVar9;
              iVar7 = (&DAT_007c8dc0)[local_48] + local_54 + iVar9;
              iVar9 = iVar9 + 1;
              *(byte *)(iVar7 + 0x2e + local_38) = *pbVar4;
            } while (iVar9 < iVar8);
          }
LAB_006fd093:
          param_1[1] = param_1[1] + iVar8;
          ExceptionList = local_10;
          return param_1;
        }
        do {
          local_1c[iVar9] = *pbVar4;
          iVar9 = iVar9 + 1;
          pbVar4 = pbVar4 + 1;
        } while (iVar9 < local_38);
        if (0 < local_50) {
          FUN_006e6bd0(local_1c + local_38,local_30,local_50);
        }
        iVar8 = local_54;
        iVar9 = 0;
        do {
          *(undefined1 *)((&DAT_007c8dc0)[local_48] + local_54 + 0x2e + iVar9) = 0;
          iVar9 = iVar9 + 1;
        } while (iVar9 < local_38);
        local_6c = local_1c;
        local_7c = 0;
        local_78 = 0;
        local_38 = (local_3c == (byte *)0x4) + 1;
        iVar9 = FUN_0070484e(&local_44,&local_6c,local_38,&local_7c,local_40);
      }
      if (iVar9 == -1) {
        ExceptionList = local_10;
        return param_1;
      }
      local_30 = local_30 + local_50 + -1;
    }
    else {
      local_50 = (&DAT_007c8dc0)[local_48];
      bVar1 = *(byte *)(local_50 + 0x2d + iVar8);
      if ((bVar1 & 4) == 0) {
        if (*(short *)(**(int **)(local_40 + 0xc) + (uint)*local_30 * 2) < 0) {
          local_3c = local_30 + 1;
          if (local_58 <= local_3c) {
            *(byte *)(local_50 + 0x2e + iVar8) = *local_30;
            pbVar4 = (byte *)((&DAT_007c8dc0)[local_48] + 0x2d + iVar8);
            *pbVar4 = *pbVar4 | 4;
            param_1[1] = (DWORD)(local_4c + 1);
            ExceptionList = local_10;
            return param_1;
          }
          iVar9 = FUN_006fb31a(&local_44,local_30,2,local_40);
          local_30 = local_3c;
          if (iVar9 == -1) {
            ExceptionList = local_10;
            return param_1;
          }
          goto LAB_006fcfba;
        }
        uVar10 = 1;
        pbVar4 = local_30;
      }
      else {
        uVar2 = CONCAT11(bVar1,*(undefined1 *)(local_50 + 0x2e + iVar8)) & 0xfbff;
        local_24 = (byte)uVar2;
        local_23 = *local_30;
        *(char *)(local_50 + 0x2d + iVar8) = (char)(uVar2 >> 8);
        uVar10 = 2;
        pbVar4 = &local_24;
      }
      iVar9 = FUN_006fb31a(&local_44,pbVar4,uVar10,local_40);
      if (iVar9 == -1) {
        ExceptionList = local_10;
        return param_1;
      }
    }
LAB_006fcfba:
    local_30 = local_30 + 1;
    local_3c = (byte *)FUN_00701686(local_70,0,&local_44,local_38,local_2c,5,0,0);
    if (local_3c == (byte *)0x0) {
      ExceptionList = local_10;
      return param_1;
    }
    BVar5 = WriteFile(local_68,local_2c,(DWORD)local_3c,(LPDWORD)&local_60,(LPOVERLAPPED)0x0);
    if (BVar5 == 0) {
LAB_006fd0da:
      DVar6 = GetLastError();
      *param_1 = DVar6;
      ExceptionList = local_10;
      return param_1;
    }
    local_4c = local_30 + (param_1[2] - (int)local_64);
    param_1[1] = (DWORD)local_4c;
    if (local_60 < local_3c) {
      ExceptionList = local_10;
      return param_1;
    }
    if (local_31 == 10) {
      local_5c[0] = 0xd;
      BVar5 = WriteFile(local_68,local_5c,1,(LPDWORD)&local_60,(LPOVERLAPPED)0x0);
      if (BVar5 == 0) goto LAB_006fd0da;
      if (local_60 == (byte *)0x0) {
        ExceptionList = local_10;
        return param_1;
      }
      param_1[2] = param_1[2] + 1;
      param_1[1] = param_1[1] + 1;
      local_4c = (byte *)param_1[1];
    }
    if (local_58 <= local_30) {
      ExceptionList = local_10;
      return param_1;
    }
  } while( true );
}


/* ==== 006fd103  write_double_translated_unicode_nolock  size=104 ==== */

/* Library Function - Single Match
    struct `anonymous namespace'::write_result __cdecl write_double_translated_unicode_nolock(char
   const * const,unsigned int)
   
   Library: Visual Studio 2019 Release */

char * __cdecl write_double_translated_unicode_nolock(char *param_1,uint param_2)

{
  wchar_t _WCh;
  wchar_t wVar1;
  wint_t wVar2;
  wchar_t *pwVar3;
  DWORD DVar4;
  int in_stack_0000000c;
  
  param_1[0] = '\0';
  param_1[1] = '\0';
  param_1[2] = '\0';
  param_1[3] = '\0';
  param_1[4] = '\0';
  param_1[5] = '\0';
  param_1[6] = '\0';
  param_1[7] = '\0';
  param_1[8] = '\0';
  param_1[9] = '\0';
  param_1[10] = '\0';
  param_1[0xb] = '\0';
  pwVar3 = (wchar_t *)(in_stack_0000000c + param_2);
  while( true ) {
    if (pwVar3 <= param_2) {
      return param_1;
    }
    _WCh = *(wchar_t *)param_2;
    wVar1 = __putwch_nolock(_WCh);
    if (wVar1 != _WCh) break;
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 2;
    if (_WCh == L'\n') {
      wVar2 = __putwch_nolock(L'\r');
      if (wVar2 != 0xd) break;
      *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    }
    param_2 = param_2 + 2;
  }
  DVar4 = GetLastError();
  *(DWORD *)param_1 = DVar4;
  return param_1;
}


/* ==== 006fd16b  FUN_006fd16b  size=125 ==== */

bool FUN_006fd16b(uint param_1,int param_2)

{
  int iVar1;
  BOOL BVar2;
  int iVar3;
  DWORD local_8;
  
  iVar1 = FUN_00702dcb(param_1);
  if (iVar1 != 0) {
    iVar3 = (int)param_1 >> 6;
    iVar1 = (param_1 & 0x3f) * 0x38;
    if (*(char *)((&DAT_007c8dc0)[iVar3] + 0x28 + iVar1) < '\0') {
      if (*(char *)(param_2 + 0x14) == '\0') {
        FUN_006ec260();
      }
      if ((*(int *)(*(int *)(param_2 + 0xc) + 0xa8) != 0) ||
         (*(char *)((&DAT_007c8dc0)[iVar3] + 0x29 + iVar1) != '\0')) {
        BVar2 = GetConsoleMode(*(HANDLE *)((&DAT_007c8dc0)[iVar3] + 0x18 + iVar1),&local_8);
        return BVar2 != 0;
      }
    }
  }
  return false;
}


/* ==== 006fd1e8  write_text_ansi_nolock  size=219 ==== */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    struct `anonymous namespace'::write_result __cdecl write_text_ansi_nolock(int,char const *
   const,unsigned int)
   
   Library: Visual Studio 2019 Release */

int __cdecl write_text_ansi_nolock(int param_1,char *param_2,uint param_3)

{
  char cVar1;
  char *hFile;
  BOOL BVar2;
  DWORD DVar3;
  char *pcVar4;
  char *pcVar5;
  int in_stack_00000010;
  char *local_140c;
  char local_1408 [5120];
  uint local_8;
  
  local_8 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  hFile = *(char **)((&DAT_007c8dc0)[(int)param_2 >> 6] + 0x18 + ((uint)param_2 & 0x3f) * 0x38);
  pcVar4 = (char *)(in_stack_00000010 + param_3);
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  local_140c = hFile;
  do {
    if (pcVar4 <= param_3) {
      return param_1;
    }
    pcVar5 = local_1408;
    do {
      if (pcVar4 <= param_3) break;
      cVar1 = *(char *)param_3;
      param_3 = param_3 + 1;
      if (cVar1 == '\n') {
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
        *pcVar5 = '\r';
        pcVar5 = pcVar5 + 1;
      }
      *pcVar5 = cVar1;
      pcVar5 = pcVar5 + 1;
    } while (pcVar5 < local_1408 + 0x13ff);
    BVar2 = WriteFile(hFile,local_1408,(DWORD)(pcVar5 + -(int)local_1408),(LPDWORD)&local_140c,
                      (LPOVERLAPPED)0x0);
    if (BVar2 == 0) {
      DVar3 = GetLastError();
      *(DWORD *)param_1 = DVar3;
      return param_1;
    }
    *(int *)(param_1 + 4) = (int)(local_140c + *(int *)(param_1 + 4));
    if (local_140c < pcVar5 + -(int)local_1408) {
      return param_1;
    }
  } while( true );
}


/* ==== 006fd2c3  write_text_utf16le_nolock  size=233 ==== */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    struct `anonymous namespace'::write_result __cdecl write_text_utf16le_nolock(int,char const *
   const,unsigned int)
   
   Library: Visual Studio 2019 Release */

int __cdecl write_text_utf16le_nolock(int param_1,char *param_2,uint param_3)

{
  short sVar1;
  BOOL BVar2;
  DWORD DVar3;
  short *psVar4;
  short *psVar5;
  int in_stack_00000010;
  uint local_1410;
  HANDLE local_140c;
  short local_1408 [2560];
  uint local_8;
  
  local_8 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  local_140c = *(HANDLE *)
                ((&DAT_007c8dc0)[(int)param_2 >> 6] + 0x18 + ((uint)param_2 & 0x3f) * 0x38);
  psVar4 = (short *)(in_stack_00000010 + param_3);
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  do {
    if (psVar4 <= param_3) {
      return param_1;
    }
    psVar5 = local_1408;
    do {
      if (psVar4 <= param_3) break;
      sVar1 = *(short *)param_3;
      param_3 = param_3 + 2;
      if (sVar1 == 10) {
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 2;
        *psVar5 = 0xd;
        psVar5 = psVar5 + 1;
      }
      *psVar5 = sVar1;
      psVar5 = psVar5 + 1;
    } while (psVar5 < local_1408 + 0x9ff);
    BVar2 = WriteFile(local_140c,local_1408,(int)psVar5 - (int)local_1408,&local_1410,
                      (LPOVERLAPPED)0x0);
    if (BVar2 == 0) {
      DVar3 = GetLastError();
      *(DWORD *)param_1 = DVar3;
      return param_1;
    }
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + local_1410;
    if (local_1410 < (uint)((int)psVar5 - (int)local_1408)) {
      return param_1;
    }
  } while( true );
}


/* ==== 006fd3ac  write_text_utf8_nolock  size=306 ==== */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    struct `anonymous namespace'::write_result __cdecl write_text_utf8_nolock(int,char const *
   const,unsigned int)
   
   Library: Visual Studio 2019 Release */

int __cdecl write_text_utf8_nolock(int param_1,char *param_2,uint param_3)

{
  short sVar1;
  short *psVar2;
  uint uVar3;
  BOOL BVar4;
  DWORD DVar5;
  uint uVar6;
  short *psVar7;
  int in_stack_00000010;
  DWORD local_1418;
  HANDLE local_1414;
  short *local_1410;
  undefined1 local_140c [3416];
  short local_6b4 [854];
  uint local_8;
  
  local_8 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  local_1414 = *(HANDLE *)
                ((&DAT_007c8dc0)[(int)param_2 >> 6] + 0x18 + ((uint)param_2 & 0x3f) * 0x38);
  local_1410 = (short *)(in_stack_00000010 + param_3);
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  psVar7 = (short *)param_3;
  if (param_3 < local_1410) {
    do {
      psVar2 = local_6b4;
      do {
        if (local_1410 <= psVar7) break;
        sVar1 = *psVar7;
        psVar7 = psVar7 + 1;
        if (sVar1 == 10) {
          *psVar2 = 0xd;
          psVar2 = psVar2 + 1;
        }
        *psVar2 = sVar1;
        psVar2 = psVar2 + 1;
      } while (psVar2 < local_6b4 + 0x354);
      uVar3 = FUN_00701686(0xfde9,0,local_6b4,(int)psVar2 - (int)local_6b4 >> 1,local_140c,0xd55,0,0
                          );
      if (uVar3 == 0) {
LAB_006fd4c5:
        DVar5 = GetLastError();
        *(DWORD *)param_1 = DVar5;
        return param_1;
      }
      uVar6 = 0;
      if (uVar3 != 0) {
        do {
          BVar4 = WriteFile(local_1414,local_140c + uVar6,uVar3 - uVar6,&local_1418,
                            (LPOVERLAPPED)0x0);
          if (BVar4 == 0) goto LAB_006fd4c5;
          uVar6 = uVar6 + local_1418;
        } while (uVar6 < uVar3);
      }
      *(uint *)(param_1 + 4) = (int)psVar7 - param_3;
    } while (psVar7 < local_1410);
  }
  return param_1;
}


/* ==== 006fd4de  FUN_006fd4de  size=55 ==== */

undefined4 FUN_006fd4de(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined1 local_2c [40];
  
  FUN_006e8923(0);
  uVar1 = FUN_006fd515(param_1,param_2,param_3,local_2c);
  FUN_006e896b();
  return uVar1;
}


/* ==== 006fd515  FUN_006fd515  size=259 ==== */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

undefined4 FUN_006fd515(uint param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  void *local_14;
  
  if (param_1 == 0xfffffffe) {
    *(undefined1 *)(param_4 + 0x24) = 1;
    *(undefined4 *)(param_4 + 0x20) = 0;
    *(undefined1 *)(param_4 + 0x1c) = 1;
    *(undefined4 *)(param_4 + 0x18) = 9;
  }
  else {
    if (((int)param_1 < 0) || (DAT_007c8fc0 <= param_1)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      iVar2 = (param_1 & 0x3f) * 0x38;
      if ((*(byte *)((&DAT_007c8dc0)[(int)param_1 >> 6] + 0x28 + iVar2) & 1) != 0) {
        ___acrt_lowio_lock_fh(param_1);
        uVar3 = 0xffffffff;
        if ((*(byte *)(iVar2 + 0x28 + (&DAT_007c8dc0)[(int)param_1 >> 6]) & 1) == 0) {
          *(undefined1 *)(param_4 + 0x1c) = 1;
          *(undefined4 *)(param_4 + 0x18) = 9;
          *(undefined1 *)(param_4 + 0x24) = 1;
          *(undefined4 *)(param_4 + 0x20) = 0;
        }
        else {
          uVar3 = FUN_006fd626(param_1,param_2,param_3,param_4);
        }
        FUN_006fd61e();
        ExceptionList = local_14;
        return uVar3;
      }
    }
    *(undefined1 *)(param_4 + 0x24) = 1;
    *(undefined4 *)(param_4 + 0x20) = 0;
    *(undefined1 *)(param_4 + 0x1c) = 1;
    *(undefined4 *)(param_4 + 0x18) = 9;
    FUN_006e8bb2(0,0,0,0,0,param_4);
  }
  ExceptionList = local_14;
  return 0xffffffff;
}


/* ==== 006fd61e  FUN_006fd61e  size=8 ==== */

void FUN_006fd61e(void)

{
  ___acrt_lowio_unlock_fh();
  return;
}


/* ==== 006fd626  FUN_006fd626  size=540 ==== */

int FUN_006fd626(char *param_1,char *param_2,uint param_3,int param_4)

{
  char cVar1;
  DWORD *pDVar2;
  BOOL BVar3;
  DWORD DVar4;
  DWORD local_34 [5];
  DWORD local_20;
  int local_1c;
  int local_18;
  char *local_14;
  uint local_10;
  char *local_c;
  char local_5;
  
  local_14 = param_1;
  local_c = param_2;
  local_10 = param_3;
  if (param_3 == 0) {
    return 0;
  }
  if (param_2 == (char *)0x0) {
LAB_006fd652:
    *(undefined1 *)(param_4 + 0x24) = 1;
    *(undefined4 *)(param_4 + 0x20) = 0;
    *(undefined1 *)(param_4 + 0x1c) = 1;
    *(undefined4 *)(param_4 + 0x18) = 0x16;
    FUN_006e8bb2(0,0,0,0,0,param_4);
    return -1;
  }
  local_18 = (int)param_1 >> 6;
  local_1c = ((uint)param_1 & 0x3f) * 0x38;
  local_5 = *(char *)(local_1c + 0x29 + (&DAT_007c8dc0)[local_18]);
  if (((local_5 == '\x02') || (local_5 == '\x01')) && ((~param_3 & 1) == 0)) goto LAB_006fd652;
  if ((*(byte *)(local_1c + 0x28 + (&DAT_007c8dc0)[local_18]) & 0x20) != 0) {
    FUN_006f8ebd(param_1,0,0,2,param_4);
  }
  DVar4 = 0;
  local_34[3] = 0;
  cVar1 = FUN_006fd16b(local_14,param_4);
  if (cVar1 == '\0') {
    if (*(char *)((&DAT_007c8dc0)[local_18] + 0x28 + local_1c) < '\0') {
      if (local_5 == '\0') {
        pDVar2 = (DWORD *)write_text_ansi_nolock((int)local_34,local_14,(uint)local_c);
      }
      else if (local_5 == '\x01') {
        pDVar2 = (DWORD *)write_text_utf8_nolock((int)local_34,local_14,(uint)local_c);
      }
      else {
        if (local_5 != '\x02') goto LAB_006fd7d9;
        pDVar2 = (DWORD *)write_text_utf16le_nolock((int)local_34,local_14,(uint)local_c);
      }
    }
    else {
      local_34[0] = 0;
      local_34[1] = 0;
      local_34[2] = 0;
      BVar3 = WriteFile(*(HANDLE *)((&DAT_007c8dc0)[local_18] + 0x18 + local_1c),local_c,local_10,
                        local_34 + 1,(LPOVERLAPPED)0x0);
      if (BVar3 == 0) {
        local_34[0] = GetLastError();
      }
      pDVar2 = local_34;
    }
  }
  else if (local_5 == '\0') {
    pDVar2 = (DWORD *)FUN_006fcd3c(local_34,local_14,local_c,local_10,param_4);
  }
  else {
    if ((local_5 != '\x01') && (local_5 != '\x02')) goto LAB_006fd7d9;
    pDVar2 = (DWORD *)write_double_translated_unicode_nolock((char *)local_34,(uint)local_c);
  }
  DVar4 = *pDVar2;
  local_34[3] = DVar4;
  local_34[4] = pDVar2[1];
  local_20 = pDVar2[2];
  if (local_34[4] != 0) {
    return local_34[4] - local_20;
  }
LAB_006fd7d9:
  if (DVar4 != 0) {
    if (DVar4 == 5) {
      *(undefined1 *)(param_4 + 0x1c) = 1;
      *(undefined4 *)(param_4 + 0x18) = 9;
      *(undefined1 *)(param_4 + 0x24) = 1;
      *(undefined4 *)(param_4 + 0x20) = 5;
      return -1;
    }
    FUN_006f38d3(DVar4,param_4);
    return -1;
  }
  if (((*(byte *)((&DAT_007c8dc0)[local_18] + 0x28 + local_1c) & 0x40) != 0) && (*local_c == '\x1a')
     ) {
    return 0;
  }
  *(undefined1 *)(param_4 + 0x1c) = 1;
  *(undefined4 *)(param_4 + 0x18) = 0x1c;
  *(undefined1 *)(param_4 + 0x24) = 1;
  *(undefined4 *)(param_4 + 0x20) = 0;
  return -1;
}


/* ==== 006fd842  FUN_006fd842  size=246 ==== */

uint FUN_006fd842(uint param_1,FILE *param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  
  __fileno(param_2);
  if ((param_2->_flag & 6U) == 0) {
    *(undefined4 *)(param_3 + 0x18) = 9;
  }
  else {
    if (((uint)param_2->_flag >> 0xc & 1) == 0) {
      if ((param_2->_flag & 1U) == 0) {
LAB_006fd8c7:
        LOCK();
        param_2->_flag = param_2->_flag | 2;
        UNLOCK();
        LOCK();
        param_2->_flag = param_2->_flag & 0xfffffff7;
        UNLOCK();
        param_2->_base = (char *)0x0;
        if ((param_2->_flag & 0x4c0U) == 0) {
          cVar2 = FUN_006fb49a(param_2);
          if (cVar2 == '\0') {
            ___acrt_stdio_allocate_buffer_nolock(param_2);
          }
        }
        cVar2 = FUN_006fd938(param_1,param_2,param_3);
        if (cVar2 == '\0') {
          LOCK();
          param_2->_flag = param_2->_flag | 0x10;
          UNLOCK();
          param_1 = 0xffffffff;
        }
        else {
          param_1 = param_1 & 0xff;
        }
        return param_1;
      }
      bVar1 = stream_is_at_end_of_file_nolock(param_2);
      param_2->_base = (char *)0x0;
      if (bVar1) {
        param_2->_ptr = (char *)param_2->_cnt;
        LOCK();
        param_2->_flag = param_2->_flag & 0xfffffffe;
        UNLOCK();
        goto LAB_006fd8c7;
      }
      goto LAB_006fd86c;
    }
    *(undefined4 *)(param_3 + 0x18) = 0x22;
  }
  *(undefined1 *)(param_3 + 0x1c) = 1;
LAB_006fd86c:
  LOCK();
  param_2->_flag = param_2->_flag | 0x10;
  UNLOCK();
  return 0xffffffff;
}


/* ==== 006fd938  FUN_006fd938  size=210 ==== */

char FUN_006fd938(undefined1 param_1,FILE *param_2,undefined4 param_3)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  longlong lVar6;
  
  uVar1 = __fileno(param_2);
  if ((param_2->_flag & 0xc0U) == 0) {
    iVar4 = FUN_006fd515(uVar1,&param_1,1,param_3);
    cVar5 = '\x01' - (iVar4 != 1);
  }
  else {
    iVar4 = 0;
    iVar3 = (int)param_2->_ptr - param_2->_cnt;
    param_2->_ptr = (char *)(param_2->_cnt + 1);
    param_2->_base = (char *)(param_2->_bufsiz + -1);
    if (iVar3 < 1) {
      if ((uVar1 == 0xffffffff) || (uVar1 == 0xfffffffe)) {
        puVar2 = &DAT_007c5c50;
      }
      else {
        puVar2 = (undefined *)((uVar1 & 0x3f) * 0x38 + (&DAT_007c8dc0)[(int)uVar1 >> 6]);
      }
      if ((puVar2[0x28] & 0x20) != 0) {
        lVar6 = FUN_006f8e1f(uVar1,0,0,2);
        if (lVar6 == -1) {
          LOCK();
          param_2->_flag = param_2->_flag | 0x10;
          UNLOCK();
          return '\x01';
        }
      }
    }
    else {
      iVar4 = FUN_006fd515(uVar1,param_2->_cnt,iVar3,param_3);
    }
    cVar5 = iVar4 == iVar3;
    *(undefined1 *)param_2->_cnt = param_1;
  }
  return cVar5;
}


/* ==== 006fda0a  stream_is_at_end_of_file_nolock  size=133 ==== */

/* Library Function - Single Match
    bool __cdecl stream_is_at_end_of_file_nolock(class __crt_stdio_stream)
   
   Library: Visual Studio 2019 Release */

bool __cdecl stream_is_at_end_of_file_nolock(int *param_1)

{
  HANDLE hFile;
  BOOL BVar1;
  DWORD unaff_ESI;
  LARGE_INTEGER local_14;
  DWORD local_c;
  int local_8;
  
  if (((uint)param_1[3] >> 3 & 1) != 0) {
    return true;
  }
  if (((((param_1[3] & 0xc0U) == 0) || (*param_1 != param_1[1])) &&
      (hFile = (HANDLE)FUN_006ff4ee(param_1[4]), hFile != (HANDLE)0xffffffff)) &&
     ((BVar1 = SetFilePointerEx(hFile,(LARGE_INTEGER)(ZEXT48(&local_c) << 0x20),(PLARGE_INTEGER)0x1,
                                unaff_ESI), BVar1 != 0 &&
      (BVar1 = GetFileSizeEx(hFile,&local_14), BVar1 != 0)))) {
    if ((local_c == local_14.s.LowPart) && (local_8 == local_14.s.HighPart)) {
      return true;
    }
    return false;
  }
  return false;
}


/* ==== 006fda8f  FUN_006fda8f  size=11 ==== */

void FUN_006fda8f(void)

{
  FUN_006fd842();
  return;
}


/* ==== 006fda9a  FUN_006fda9a  size=152 ==== */

uint FUN_006fda9a(uint param_1,uint param_2)

{
  int iVar1;
  
  if (param_1 < 0xdead) {
    if (param_1 == 0xdeac) {
      return 0;
    }
    if (param_1 < 0xc434) {
      if (param_1 == 0xc433) {
        return 0;
      }
      if (param_1 == 0x2a) {
        return 0;
      }
      if (param_1 == 0xc42c) {
        return 0;
      }
      if (param_1 == 0xc42d) {
        return 0;
      }
      if (param_1 == 0xc42e) {
        return 0;
      }
      iVar1 = param_1 - 0xc431;
      goto LAB_006fdad1;
    }
    if (param_1 == 0xc435) {
      return 0;
    }
    if (param_1 == 0xd698) goto LAB_006fdb2a;
    iVar1 = param_1 - 0xdeaa;
  }
  else {
    if (0xdeb1 < param_1) {
      if (param_1 == 0xdeb2) {
        return 0;
      }
      if (param_1 == 0xdeb3) {
        return 0;
      }
      if (param_1 == 65000) {
        return 0;
      }
      if (param_1 != 0xfde9) {
        return param_2;
      }
LAB_006fdb2a:
      return param_2 & 8;
    }
    if (param_1 == 0xdeb1) {
      return 0;
    }
    if (param_1 == 0xdead) {
      return 0;
    }
    if (param_1 == 0xdeae) {
      return 0;
    }
    iVar1 = param_1 - 0xdeaf;
  }
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = iVar1 + -1;
LAB_006fdad1:
  if (iVar1 == 0) {
    return 0;
  }
  return param_2;
}


/* ==== 006fdb32  FUN_006fdb32  size=42 ==== */

void FUN_006fdb32(UINT param_1,undefined4 param_2,LPCSTR param_3,int param_4,LPWSTR param_5,
                 int param_6)

{
  DWORD dwFlags;
  
  dwFlags = FUN_006fda9a(param_1,param_2);
  MultiByteToWideChar(param_1,dwFlags,param_3,param_4,param_5,param_6);
  return;
}


/* ==== 006fdb5c  try_get_AreFileApisANSI  size=26 ==== */

/* Library Function - Single Match
    int (__stdcall*__cdecl try_get_AreFileApisANSI(void))(void)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

_func_int * __cdecl try_get_AreFileApisANSI(void)

{
  _func_int *p_Var1;
  
  p_Var1 = (_func_int *)FUN_006fdc8f(0,"AreFileApisANSI",&DAT_00734624,"AreFileApisANSI");
  return p_Var1;
}


/* ==== 006fdb76  try_get_CompareStringEx  size=26 ==== */

/* Library Function - Single Match
    int (__stdcall*__cdecl try_get_CompareStringEx(void))(wchar_t const *,unsigned long,wchar_t
   const *,int,wchar_t const *,int,struct _nlsversioninfo *,void *,long)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

_func_int_wchar_t_ptr_ulong_wchar_t_ptr_int_wchar_t_ptr_int__nlsversioninfo_ptr_void_ptr_long *
__cdecl try_get_CompareStringEx(void)

{
  _func_int_wchar_t_ptr_ulong_wchar_t_ptr_int_wchar_t_ptr_int__nlsversioninfo_ptr_void_ptr_long
  *p_Var1;
  
  p_Var1 = (_func_int_wchar_t_ptr_ulong_wchar_t_ptr_int_wchar_t_ptr_int__nlsversioninfo_ptr_void_ptr_long
            *)FUN_006fdc8f(1,"CompareStringEx",&DAT_00734638,"CompareStringEx");
  return p_Var1;
}


/* ==== 006fdb90  try_get_LCMapStringEx  size=26 ==== */

/* Library Function - Multiple Matches With Different Base Names
    int (__stdcall*__cdecl try_get_CompareStringEx(void))(wchar_t const *,unsigned long,wchar_t
   const *,int,wchar_t const *,int,struct _nlsversioninfo *,void *,long)
    int (__stdcall*__cdecl try_get_LCMapStringEx(void))(wchar_t const *,unsigned long,wchar_t const
   *,int,wchar_t *,int,struct _nlsversioninfo *,void *,long)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

_func_int_wchar_t_ptr_ulong_wchar_t_ptr_int_wchar_t_ptr_int__nlsversioninfo_ptr_void_ptr_long *
__cdecl try_get_LCMapStringEx(void)

{
  _func_int_wchar_t_ptr_ulong_wchar_t_ptr_int_wchar_t_ptr_int__nlsversioninfo_ptr_void_ptr_long
  *p_Var1;
  
  p_Var1 = (_func_int_wchar_t_ptr_ulong_wchar_t_ptr_int_wchar_t_ptr_int__nlsversioninfo_ptr_void_ptr_long
            *)FUN_006fdc8f(0x11,"LCMapStringEx",&DAT_00734658,"LCMapStringEx");
  return p_Var1;
}


/* ==== 006fdbaa  try_get_LocaleNameToLCID  size=26 ==== */

/* Library Function - Single Match
    unsigned long (__stdcall*__cdecl try_get_LocaleNameToLCID(void))(wchar_t const *,unsigned long)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

_func_ulong_wchar_t_ptr_ulong * __cdecl try_get_LocaleNameToLCID(void)

{
  _func_ulong_wchar_t_ptr_ulong *p_Var1;
  
  p_Var1 = (_func_ulong_wchar_t_ptr_ulong *)
           FUN_006fdc8f(0x13,"LocaleNameToLCID",&DAT_00734670,"LocaleNameToLCID");
  return p_Var1;
}


/* ==== 006fdbc4  FUN_006fdbc4  size=203 ==== */

HMODULE FUN_006fdbc4(int *param_1,int *param_2)

{
  int iVar1;
  LPCWSTR lpLibFileName;
  HMODULE pHVar2;
  DWORD DVar3;
  int iVar4;
  
  do {
    if (param_1 == param_2) {
      return (HMODULE)0x0;
    }
    iVar1 = *param_1;
    pHVar2 = (HMODULE)(&DAT_007c90a8)[iVar1];
    if (pHVar2 == (HMODULE)0x0) {
      lpLibFileName = (LPCWSTR)(&PTR_u_api_ms_win_core_datetime_l1_1_1_00734118)[iVar1];
      pHVar2 = LoadLibraryExW(lpLibFileName,(HANDLE)0x0,0x800);
      if ((pHVar2 != (HMODULE)0x0) ||
         ((((DVar3 = GetLastError(), DVar3 == 0x57 &&
            (iVar4 = _wcsncmp(lpLibFileName,L"api-ms-",7), iVar4 != 0)) &&
           (iVar4 = _wcsncmp(lpLibFileName,L"ext-ms-",7), iVar4 != 0)) &&
          (pHVar2 = LoadLibraryExW(lpLibFileName,(HANDLE)0x0,0), pHVar2 != (HMODULE)0x0)))) {
        LOCK();
        iVar4 = (&DAT_007c90a8)[iVar1];
        (&DAT_007c90a8)[iVar1] = pHVar2;
        UNLOCK();
        if (iVar4 == 0) {
          return pHVar2;
        }
        FreeLibrary(pHVar2);
        return pHVar2;
      }
      LOCK();
      (&DAT_007c90a8)[iVar1] = 0xffffffff;
      UNLOCK();
    }
    else if (pHVar2 != (HMODULE)0xffffffff) {
      return pHVar2;
    }
    param_1 = param_1 + 1;
  } while( true );
}


/* ==== 006fdc8f  FUN_006fdc8f  size=133 ==== */

_func_void_void_ptr_ulong_void_ptr *
FUN_006fdc8f(int param_1,LPCSTR param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  HMODULE hModule;
  _func_void_void_ptr_ulong_void_ptr *p_Var2;
  byte bVar3;
  _func_void_void_ptr_ulong_void_ptr *p_Var4;
  
  puVar1 = &DAT_007c9100 + param_1;
  bVar3 = (byte)DAT_007c5940 & 0x1f;
  p_Var4 = (_func_void_void_ptr_ulong_void_ptr *)
           ((*puVar1 ^ DAT_007c5940) >> bVar3 | (*puVar1 ^ DAT_007c5940) << 0x20 - bVar3);
  if (p_Var4 == (_func_void_void_ptr_ulong_void_ptr *)0xffffffff) {
    p_Var4 = (_func_void_void_ptr_ulong_void_ptr *)0x0;
  }
  else if (p_Var4 == (_func_void_void_ptr_ulong_void_ptr *)0x0) {
    hModule = (HMODULE)FUN_006fdbc4(param_3,param_4);
    if ((hModule == (HMODULE)0x0) ||
       (p_Var4 = (_func_void_void_ptr_ulong_void_ptr *)GetProcAddress(hModule,param_2),
       p_Var4 == (_func_void_void_ptr_ulong_void_ptr *)0x0)) {
      bVar3 = 0x20 - ((byte)DAT_007c5940 & 0x1f) & 0x1f;
      LOCK();
      *puVar1 = (0xffffffffU >> bVar3 | -1 << 0x20 - bVar3) ^ DAT_007c5940;
      UNLOCK();
      p_Var4 = (_func_void_void_ptr_ulong_void_ptr *)0x0;
    }
    else {
      p_Var2 = __crt_fast_encode_pointer<void_(__stdcall*)(void*,unsigned_long,void*)>(p_Var4);
      LOCK();
      *puVar1 = (uint)p_Var2;
      UNLOCK();
    }
  }
  return p_Var4;
}


/* ==== 006fdd14  FUN_006fdd14  size=64 ==== */

undefined4 FUN_006fdd14(undefined4 param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  
  pcVar1 = (code *)FUN_006fdc8f(0x19,"AppPolicyGetProcessTerminationMethod",&DAT_0073468c,
                                "AppPolicyGetProcessTerminationMethod");
  if (pcVar1 == (code *)0x0) {
    uVar2 = 0xc0000225;
  }
  else {
    guard_check_icall(0xfffffffa,param_1);
    uVar2 = (*pcVar1)();
  }
  return uVar2;
}


/* ==== 006fde0f  FUN_006fde0f  size=63 ==== */

void FUN_006fde0f(DWORD param_1)

{
  code *pcVar1;
  
  pcVar1 = (code *)FUN_006fdc8f(0x20,"FlsFree",&DAT_007346c0,&DAT_007346c8);
  if (pcVar1 != (code *)0x0) {
    guard_check_icall(param_1);
    (*pcVar1)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x006fde48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TlsFree(param_1);
  return;
}


/* ==== 006fde4e  FUN_006fde4e  size=63 ==== */

void FUN_006fde4e(DWORD param_1)

{
  code *pcVar1;
  
  pcVar1 = (code *)FUN_006fdc8f(0x21,"FlsGetValue",&DAT_007346c8,&DAT_007346d0);
  if (pcVar1 != (code *)0x0) {
    guard_check_icall(param_1);
    (*pcVar1)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x006fde87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TlsGetValue(param_1);
  return;
}


/* ==== 006fdff2  FID_conflict:__wrmdir  size=40 ==== */

/* Library Function - Multiple Matches With Different Base Names
    __wremove
    __wrmdir
   
   Library: Visual Studio 2019 Release */

int __cdecl FID_conflict___wrmdir(wchar_t *_Filename)

{
  BOOL BVar1;
  DWORD DVar2;
  
  BVar1 = DeleteFileW(_Filename);
  if (BVar1 == 0) {
    DVar2 = GetLastError();
    ___acrt_errno_map_os_error(DVar2);
    return -1;
  }
  return 0;
}


/* ==== 006fe01a  common_dupenv_s<>  size=89 ==== */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Multiple Matches With Same Base Name
    int __cdecl common_dupenv_s<char>(char * * const,unsigned int * const,char const *
   const,int,char const * const,int)
    int __cdecl common_dupenv_s<wchar_t>(wchar_t * * const,unsigned int * const,wchar_t const *
   const,int,char const * const,int)
   
   Libraries: Visual Studio 2019 Debug, Visual Studio 2019 Release */

undefined4
common_dupenv_s<>(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 local_14;
  
  ___acrt_lock(0xb);
  uVar1 = FUN_006fe07f(param_1,param_2,param_3,param_4,param_5,param_6);
  FUN_006fe076();
  ExceptionList = local_14;
  return uVar1;
}


/* ==== 006fe076  FUN_006fe076  size=9 ==== */

void FUN_006fe076(void)

{
  ___acrt_unlock(0xb);
  return;
}


/* ==== 006fe07f  FUN_006fe07f  size=162 ==== */

undefined4 FUN_006fe07f(int *param_1,int *param_2,char *param_3)

{
  char cVar1;
  undefined4 *puVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  
  if (param_1 != (int *)0x0) {
    *param_1 = 0;
    if (param_2 != (int *)0x0) {
      *param_2 = 0;
    }
    if (param_3 != (char *)0x0) {
      pcVar3 = common_getenv_nolock<char>(param_3);
      if (pcVar3 != (char *)0x0) {
        pcVar5 = pcVar3;
        do {
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        pcVar5 = pcVar5 + (1 - (int)(pcVar3 + 1));
        iVar4 = FUN_006f3f73(pcVar5,1);
        *param_1 = iVar4;
        if (iVar4 == 0) {
          puVar2 = (undefined4 *)FUN_006f390a();
          *puVar2 = 0xc;
          return 0xc;
        }
        iVar4 = FUN_006f8593(iVar4,pcVar5,pcVar3);
        if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
          __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        if (param_2 != (int *)0x0) {
          *param_2 = (int)pcVar5;
        }
      }
      return 0;
    }
  }
  puVar2 = (undefined4 *)FUN_006f390a();
  *puVar2 = 0x16;
  FUN_006e8c2f();
  return 0x16;
}


/* ==== 006fe122  common_getenv_nolock<char>  size=109 ==== */

/* Library Function - Single Match
    char * __cdecl common_getenv_nolock<char>(char const * const)
   
   Library: Visual Studio 2019 Release */

char * __cdecl common_getenv_nolock<char>(char *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  uint _MaxCount;
  
  piVar2 = (int *)thunk_FUN_006f6fe0();
  if ((piVar2 != (int *)0x0) && (param_1 != (char *)0x0)) {
    pcVar5 = param_1;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    _MaxCount = (int)pcVar5 - (int)(param_1 + 1);
    for (; pcVar5 = (char *)*piVar2, pcVar5 != (char *)0x0; piVar2 = piVar2 + 1) {
      pcVar4 = pcVar5;
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      if (((_MaxCount < (uint)((int)pcVar4 - (int)(pcVar5 + 1))) && (pcVar5[_MaxCount] == '=')) &&
         (iVar3 = __strnicoll(pcVar5,param_1,_MaxCount), iVar3 == 0)) {
        return (char *)(*piVar2 + 1 + _MaxCount);
      }
    }
  }
  return (char *)0x0;
}


/* ==== 006fe18f  common_getenv_nolock<wchar_t>  size=132 ==== */

/* Library Function - Single Match
    wchar_t * __cdecl common_getenv_nolock<wchar_t>(wchar_t const * const)
   
   Library: Visual Studio 2019 Release */

wchar_t * __cdecl common_getenv_nolock<wchar_t>(wchar_t *param_1)

{
  wchar_t wVar1;
  int *piVar2;
  int iVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  uint _MaxCount;
  
  piVar2 = (int *)thunk_FUN_006f700c();
  if ((piVar2 != (int *)0x0) && (param_1 != (wchar_t *)0x0)) {
    pwVar5 = param_1;
    do {
      wVar1 = *pwVar5;
      pwVar5 = pwVar5 + 1;
    } while (wVar1 != L'\0');
    _MaxCount = (int)pwVar5 - (int)(param_1 + 1) >> 1;
    for (; pwVar5 = (wchar_t *)*piVar2, pwVar5 != (wchar_t *)0x0; piVar2 = piVar2 + 1) {
      pwVar4 = pwVar5;
      do {
        wVar1 = *pwVar4;
        pwVar4 = pwVar4 + 1;
      } while (wVar1 != L'\0');
      if (((_MaxCount < (uint)((int)pwVar4 - (int)(pwVar5 + 1) >> 1)) && (pwVar5[_MaxCount] == L'=')
          ) && (iVar3 = __wcsnicoll(pwVar5,param_1,_MaxCount), iVar3 == 0)) {
        return (wchar_t *)(*piVar2 + _MaxCount * 2 + 2);
      }
    }
  }
  return (wchar_t *)0x0;
}


/* ==== 006fe213  common_getenv_s<>  size=83 ==== */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Multiple Matches With Same Base Name
    int __cdecl common_getenv_s<char>(unsigned int * const,char * const,unsigned int,char const *
   const)
    int __cdecl common_getenv_s<wchar_t>(unsigned int * const,wchar_t * const,unsigned int,wchar_t
   const * const)
   
   Libraries: Visual Studio 2019 Debug, Visual Studio 2019 Release */

undefined4
common_getenv_s<>(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 local_14;
  
  ___acrt_lock(0xb);
  uVar1 = FUN_006fe272(param_1,param_2,param_3,param_4);
  FUN_006fe269();
  ExceptionList = local_14;
  return uVar1;
}


/* ==== 006fe269  FUN_006fe269  size=9 ==== */

void FUN_006fe269(void)

{
  ___acrt_unlock(0xb);
  return;
}


/* ==== 006fe272  FUN_006fe272  size=173 ==== */

undefined4 FUN_006fe272(uint *param_1,undefined2 *param_2,uint param_3,wchar_t *param_4)

{
  wchar_t wVar1;
  undefined4 *puVar2;
  wchar_t *pwVar3;
  int iVar4;
  wchar_t *pwVar5;
  uint uVar6;
  
  if (param_1 == (uint *)0x0) {
    puVar2 = (undefined4 *)FUN_006f390a();
    *puVar2 = 0x16;
    FUN_006e8c2f();
    return 0x16;
  }
  *param_1 = 0;
  if (param_2 == (undefined2 *)0x0) {
    if (param_3 == 0) goto LAB_006fe2ae;
  }
  else if (param_3 != 0) {
    *param_2 = 0;
LAB_006fe2ae:
    pwVar3 = common_getenv_nolock<wchar_t>(param_4);
    if (pwVar3 != (wchar_t *)0x0) {
      pwVar5 = pwVar3;
      do {
        wVar1 = *pwVar5;
        pwVar5 = pwVar5 + 1;
      } while (wVar1 != L'\0');
      uVar6 = ((int)pwVar5 - (int)(pwVar3 + 1) >> 1) + 1;
      *param_1 = uVar6;
      if (param_3 != 0) {
        if (param_3 < uVar6) {
          return 0x22;
        }
        iVar4 = FUN_00701592(param_2,param_3,pwVar3);
        if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
          __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
    }
    return 0;
  }
  puVar2 = (undefined4 *)FUN_006f390a();
  *puVar2 = 0x16;
  FUN_006e8c2f();
  return 0x16;
}


/* ==== 006fe320  FID_conflict:__dupenv_s  size=30 ==== */

/* Library Function - Multiple Matches With Different Base Names
    __dupenv_s
    __wdupenv_s
   
   Libraries: Visual Studio 2019 Debug, Visual Studio 2019 Release */

errno_t __cdecl
FID_conflict___dupenv_s(wchar_t **_Buffer,size_t *_BufferSizeInWords,wchar_t *_VarName)

{
  errno_t eVar1;
  
  eVar1 = common_dupenv_s<>(_Buffer,_BufferSizeInWords,_VarName,1,0,0);
  return eVar1;
}


/* ==== 006fe33e  FUN_006fe33e  size=11 ==== */

void FUN_006fe33e(void)

{
  common_getenv_s<>();
  return;
}


/* ==== 006fe349  operator()<>  size=76 ==== */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Multiple Matches With Same Base Name
    public: bool __thiscall __crt_seh_guarded_call<bool>::operator()<class
   <lambda_1f7e3ac85ca3635646511ad93ac0febe>,class <lambda_555255fdfb9471e5fa7bfca50021c162> &,class
   <lambda_24f51f8b0c33fe186c624e6675644b7a> >(class <lambda_1f7e3ac85ca3635646511ad93ac0febe>
   &&,class <lambda_555255fdfb9471e5fa7bfca50021c162> &,class
   <lambda_24f51f8b0c33fe186c624e6675644b7a> &&)
    public: bool __thiscall __crt_seh_guarded_call<bool>::operator()<class
   <lambda_7c2f2fda812d734ae099d3f4ed455c3b>,class <lambda_82ba946ffbe3ee0aa3b627dec756a6af> &,class
   <lambda_a4380b3ede4825a309b82fda1395b002> >(class <lambda_7c2f2fda812d734ae099d3f4ed455c3b>
   &&,class <lambda_82ba946ffbe3ee0aa3b627dec756a6af> &,class
   <lambda_a4380b3ede4825a309b82fda1395b002> &&)
   
   Libraries: Visual Studio 2019 Debug, Visual Studio 2019 Release */

undefined1 operator()<>(undefined4 *param_1)

{
  undefined1 uVar1;
  void *local_14;
  
  ___acrt_lock(*param_1);
  uVar1 = FUN_006fe7a3();
  FUN_006fe398();
  ExceptionList = local_14;
  return uVar1;
}


/* ==== 006fe398  FUN_006fe398  size=12 ==== */

void FUN_006fe398(void)

{
  int unaff_EBP;
  
  ___acrt_unlock(**(undefined4 **)(unaff_EBP + 0x10));
  return;
}


/* ==== 006fe3a4  FUN_006fe3a4  size=498 ==== */

undefined4 FUN_006fe3a4(undefined4 param_1,char *param_2,undefined4 *param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 *puVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  errno_t eVar7;
  undefined4 uVar8;
  undefined *puVar9;
  uint uVar10;
  
  if ((((param_2 == (char *)0x0) || (*param_2 == '\0')) || (param_3 == (undefined4 *)0x0)) ||
     (((char *)*param_3 == (char *)0x0 || (*(char *)*param_3 == '\0')))) {
    puVar2 = (undefined4 *)FUN_006f390a();
    *puVar2 = 0x16;
    FUN_006e8c2f();
    return 0xffffffff;
  }
  pcVar3 = (char *)FUN_006e6a90(param_2,0x5c);
  pcVar4 = (char *)FUN_006e6a90(param_2,0x2f);
  pcVar5 = param_2;
  if (pcVar4 == (char *)0x0) {
    if ((pcVar3 == (char *)0x0) &&
       (pcVar3 = (char *)FUN_006e6a90(param_2,0x3a), pcVar3 == (char *)0x0)) {
      pcVar3 = param_2;
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      pcVar3 = pcVar3 + (3 - (int)(param_2 + 1));
      pcVar5 = (char *)__calloc_base(pcVar3,1);
      if (pcVar5 == (char *)0x0) {
        uVar10 = 0;
        goto LAB_006fe54d;
      }
      iVar6 = FUN_006f8593(pcVar5,pcVar3,&DAT_007346d8);
      if ((iVar6 != 0) || (iVar6 = FUN_00705d0c(pcVar5,pcVar3,param_2), iVar6 != 0))
      goto LAB_006fe58a;
      FUN_006f9a4d(0);
      pcVar3 = pcVar5 + 2;
    }
  }
  else if ((pcVar3 == (char *)0x0) || (pcVar3 < pcVar4)) {
    pcVar3 = pcVar4;
  }
  uVar10 = -(uint)(param_2 != pcVar5) & (uint)pcVar5;
  iVar6 = FUN_006e6a90(pcVar3,0x2e);
  if (iVar6 == 0) {
    pcVar3 = pcVar5;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    iVar6 = ((int)pcVar3 - (int)(pcVar5 + 1)) + 5;
    pcVar4 = (char *)__calloc_base(iVar6,1);
    if (pcVar4 == (char *)0x0) {
      FUN_006f9a4d(0);
      uVar8 = 0xffffffff;
      goto LAB_006fe57f;
    }
    iVar6 = FUN_006f8593(pcVar4,iVar6,pcVar5);
    if (iVar6 != 0) {
LAB_006fe58a:
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    puVar2 = (undefined4 *)FUN_006f390a();
    puVar9 = &DAT_007346dc;
    uVar8 = *puVar2;
    do {
      iVar6 = FUN_006f8593(pcVar4 + ((int)pcVar3 - (int)(pcVar5 + 1)),5,puVar9);
      if (iVar6 != 0) goto LAB_006fe58a;
      eVar7 = __access_s(pcVar4,0);
      if (eVar7 == 0) {
        puVar2 = (undefined4 *)FUN_006f390a();
        *puVar2 = uVar8;
        uVar8 = FUN_006fe597(param_1,pcVar4,param_3,param_4);
        FUN_006f9a4d(pcVar4);
        goto LAB_006fe57f;
      }
      puVar9 = puVar9 + 5;
    } while (puVar9 != &DAT_007346f0);
    FUN_006f9a4d(pcVar4);
  }
  else {
    eVar7 = __access_s(pcVar5,0);
    if (eVar7 == 0) {
      uVar8 = FUN_006fe597(param_1,pcVar5,param_3,param_4);
LAB_006fe57f:
      FUN_006f9a4d(uVar10);
      return uVar8;
    }
  }
LAB_006fe54d:
  FUN_006f9a4d(uVar10);
  return 0xffffffff;
}


/* ==== 006fe597  FUN_006fe597  size=523 ==== */

HANDLE FUN_006fe597(uint param_1,int param_2,int param_3,undefined4 param_4)

{
  HANDLE hObject;
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  BOOL BVar4;
  DWORD DVar5;
  HANDLE pvVar6;
  undefined4 uVar7;
  undefined4 local_70 [12];
  undefined2 local_3e;
  uchar *local_3c;
  HANDLE local_2c;
  HANDLE local_28;
  HANDLE local_1c;
  HANDLE local_18;
  undefined2 local_14 [2];
  undefined4 local_10;
  uchar *local_c;
  undefined4 local_8;
  
  if ((param_2 == 0) || (param_3 == 0)) {
LAB_006fe5a5:
    puVar2 = (undefined4 *)FUN_006f390a();
    *puVar2 = 0x16;
    FUN_006e8c2f();
    return (HANDLE)0xffffffff;
  }
  if (4 < param_1) {
    puVar2 = (undefined4 *)FUN_006f38f7();
    *puVar2 = 0;
    goto LAB_006fe5a5;
  }
  local_10 = 0;
  local_8 = 0;
  iVar3 = FUN_00706189(param_3,param_4,&local_10,&local_8);
  if (iVar3 == -1) {
    FUN_006f9a4d(local_8);
    local_8 = 0;
    FUN_006f9a4d(local_10);
    return (HANDLE)0xffffffff;
  }
  local_c = (uchar *)0x0;
  bVar1 = accumulate_inheritable_handles(&local_c,(uint *)local_14,param_1 != 4);
  if (!bVar1) {
    FUN_006f9a4d(local_c);
    local_c = (uchar *)0x0;
    FUN_006f9a4d(local_8);
    local_8 = 0;
    FUN_006f9a4d(local_10);
    return (HANDLE)0xffffffff;
  }
  uVar7 = 0;
  if (param_1 == 4) {
    uVar7 = 8;
  }
  puVar2 = (undefined4 *)FUN_006f38f7();
  *puVar2 = 0;
  _memset(local_70,0,0x44);
  local_3e = local_14[0];
  local_3c = local_c;
  local_70[0] = 0x44;
  iVar3 = ___acrt_CreateProcessA(param_2,local_10,0,0,1,uVar7,local_8,0,local_70,&local_2c);
  hObject = local_2c;
  if (iVar3 != 0) {
    if (param_1 == 2) {
                    /* WARNING: Subroutine does not return */
      FUN_006f63d7(0);
    }
    if (param_1 != 0) {
      if (param_1 != 4) {
        if (local_28 != (HANDLE)0xffffffff) {
          CloseHandle(local_28);
        }
        FUN_006f9a4d(local_c);
        local_c = (uchar *)0x0;
        FUN_006f9a4d(local_8);
        local_8 = 0;
        FUN_006f9a4d(local_10);
        return local_2c;
      }
      if (local_28 != (HANDLE)0xffffffff) {
        CloseHandle(local_28);
      }
      if (local_2c != (HANDLE)0xffffffff) {
        CloseHandle(local_2c);
      }
      pvVar6 = (HANDLE)0x0;
      goto LAB_006fe742;
    }
    WaitForSingleObject(local_2c,0xffffffff);
    BVar4 = GetExitCodeProcess(local_2c,(LPDWORD)&local_18);
    if (BVar4 != 0) {
      local_1c = local_18;
      if (local_28 != (HANDLE)0xffffffff) {
        CloseHandle(local_28);
      }
      pvVar6 = local_1c;
      if (hObject != (HANDLE)0xffffffff) {
        CloseHandle(hObject);
        pvVar6 = local_1c;
      }
      goto LAB_006fe742;
    }
  }
  DVar5 = GetLastError();
  ___acrt_errno_map_os_error(DVar5);
  if (local_28 != (HANDLE)0xffffffff) {
    CloseHandle(local_28);
  }
  pvVar6 = (HANDLE)0xffffffff;
  if (hObject != (HANDLE)0xffffffff) {
    CloseHandle(hObject);
  }
LAB_006fe742:
  FUN_006f9a4d(local_c);
  local_c = (uchar *)0x0;
  FUN_006f9a4d(local_8);
  local_8 = 0;
  FUN_006f9a4d(local_10);
  return pvVar6;
}


/* ==== 006fe7a3  FUN_006fe7a3  size=310 ==== */

undefined1 FUN_006fe7a3(void)

{
  byte bVar1;
  undefined4 *puVar2;
  uint *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *in_ECX;
  uint uVar6;
  uint uVar7;
  undefined1 uVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  undefined4 *local_8;
  
  **(undefined4 **)*in_ECX = 0;
  **(undefined4 **)in_ECX[1] = 0;
  uVar9 = DAT_007c8fc0;
  uVar10 = DAT_007c8fc0;
  while ((uVar9 != 0 &&
         (uVar10 = uVar10 - 1,
         *(char *)((&DAT_007c8dc0)[uVar10 >> 6] + 0x28 + (uVar10 & 0x3f) * 0x38) != '\0'))) {
    uVar9 = uVar9 - 1;
  }
  if (uVar9 < 0x3332) {
    uVar10 = uVar9 * 5 + 4 & 0xffff;
    puVar3 = (uint *)__calloc_base(uVar10,1);
    if (puVar3 == (uint *)0x0) {
      puVar2 = (undefined4 *)FUN_006f390a();
      uVar8 = 0;
      *puVar2 = 0xc;
    }
    else {
      puVar11 = puVar3 + 1;
      *puVar3 = uVar9;
      local_8 = (undefined4 *)((int)puVar11 + uVar9);
      uVar7 = 0;
      puVar2 = local_8;
      if (uVar9 != 0) {
        do {
          iVar4 = (uVar7 & 0x3f) * 0x38 + (&DAT_007c8dc0)[uVar7 >> 6];
          bVar1 = *(byte *)(iVar4 + 0x28);
          if ((bVar1 & 0x10) == 0) {
            *(byte *)((int)puVar11 + uVar7) = bVar1;
            uVar5 = *(undefined4 *)(iVar4 + 0x18);
          }
          else {
            *(undefined1 *)((int)puVar11 + uVar7) = 0;
            uVar5 = 0xffffffff;
          }
          *puVar2 = uVar5;
          uVar7 = uVar7 + 1;
          puVar2 = puVar2 + 1;
        } while (uVar7 != uVar9);
      }
      if (*(char *)in_ECX[2] == '\0') {
        uVar7 = 0;
        while( true ) {
          uVar6 = uVar9;
          if (2 < uVar9) {
            uVar6 = 3;
          }
          if (uVar7 == uVar6) break;
          *(undefined1 *)puVar11 = 0;
          *local_8 = 0xffffffff;
          uVar7 = uVar7 + 1;
          puVar11 = (uint *)((int)puVar11 + 1);
          local_8 = local_8 + 1;
        }
      }
      **(undefined4 **)*in_ECX = puVar3;
      uVar8 = 1;
      **(uint **)in_ECX[1] = uVar10;
    }
    FUN_006f9a4d(0);
  }
  else {
    puVar2 = (undefined4 *)FUN_006f390a();
    *puVar2 = 0xc;
    uVar8 = 0;
  }
  return uVar8;
}


/* ==== 006fe8d9  accumulate_inheritable_handles  size=57 ==== */

/* Library Function - Single Match
    bool __cdecl accumulate_inheritable_handles(unsigned char * * const,unsigned int * const,bool)
   
   Libraries: Visual Studio 2019 Debug, Visual Studio 2019 Release */

bool __cdecl accumulate_inheritable_handles(uchar **param_1,uint *param_2,bool param_3)

{
  undefined1 uVar1;
  uchar ***local_1c;
  uint **local_18;
  bool *local_14;
  undefined4 local_10;
  undefined4 local_c [2];
  
  local_1c = &param_1;
  local_18 = &param_2;
  local_14 = &param_3;
  local_c[0] = 7;
  local_10 = 7;
  uVar1 = operator()<>(&local_10,&local_1c,local_c);
  return (bool)uVar1;
}


/* ==== 006fe912  FUN_006fe912  size=11 ==== */

void FUN_006fe912(void)

{
  FUN_006fe3a4();
  return;
}


/* ==== 006fe91d  FUN_006fe91d  size=757 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_006fe91d(undefined4 param_1,char *param_2,undefined4 *param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  errno_t eVar8;
  char *pcVar9;
  char *pcVar10;
  wchar_t *pwVar11;
  char *pcVar12;
  undefined2 local_1c [3];
  char local_15;
  wchar_t *local_14;
  wchar_t local_10 [2];
  undefined1 local_c;
  uint local_8;
  
  local_8 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  if ((((param_2 == (char *)0x0) || (*param_2 == '\0')) || (param_3 == (undefined4 *)0x0)) ||
     (((char *)*param_3 == (char *)0x0 || (*(char *)*param_3 == '\0')))) {
    puVar4 = (undefined4 *)FUN_006f390a();
    *puVar4 = 0x16;
    FUN_006e8c2f();
    return -1;
  }
  piVar5 = (int *)FUN_006f390a();
  iVar2 = *piVar5;
  *piVar5 = 0;
  iVar6 = FUN_006fe912(param_1,param_2,param_3,param_4);
  if (iVar6 != -1) {
    if (*piVar5 != 0) {
      return iVar6;
    }
    if (iVar2 == 0) {
      return iVar6;
    }
    *piVar5 = iVar2;
    return iVar6;
  }
  piVar7 = (int *)FUN_006f390a();
  if (((*piVar7 == 2) && (iVar6 = FUN_006e6960(param_2,0x5c), iVar6 == 0)) &&
     ((iVar6 = FUN_006e6960(param_2,0x2f), iVar6 == 0 && (param_2[1] != ':')))) {
    local_10[0] = L'䅐';
    local_10[1] = L'䡔';
    local_c = 0;
    local_14 = (wchar_t *)0x0;
    eVar8 = FID_conflict___dupenv_s(&local_14,(size_t *)0x0,local_10);
    if (eVar8 == 0) {
      if (local_14 != (wchar_t *)0x0) {
        pcVar9 = (char *)__calloc_base(0x104,1);
        pwVar11 = local_14;
        if (pcVar9 != (char *)0x0) {
          do {
            do {
              pwVar11 = (wchar_t *)FUN_0070632a(pwVar11,pcVar9,0x103);
              if ((pwVar11 == (wchar_t *)0x0) || (pcVar10 = pcVar9, *pcVar9 == '\0'))
              goto LAB_006febb2;
              do {
                pcVar12 = pcVar10;
                pcVar10 = pcVar12 + 1;
              } while (*pcVar12 != '\0');
              pcVar10 = (char *)FUN_006e6a90(pcVar9,0x5c);
              if ((pcVar12 + -1 != pcVar10) &&
                 (pcVar10 = (char *)FUN_006e6a90(pcVar9,0x2f), pcVar12 + -1 != pcVar10)) {
                local_1c[0] = 0x5c;
                iVar6 = FUN_00705d0c(pcVar9,0x104,local_1c);
                if (iVar6 != 0) goto LAB_006fec06;
              }
              pcVar10 = pcVar9;
              do {
                cVar1 = *pcVar10;
                pcVar10 = pcVar10 + 1;
              } while (cVar1 != '\0');
              pcVar12 = param_2;
              do {
                cVar1 = *pcVar12;
                pcVar12 = pcVar12 + 1;
              } while (cVar1 != '\0');
              if ((char *)0x103 <
                  pcVar10 + (int)(pcVar12 + (-(int)(param_2 + 1) - (int)(pcVar9 + 1))))
              goto LAB_006febb2;
              iVar6 = FUN_00705d0c(pcVar9,0x104,param_2);
              if (iVar6 != 0) goto LAB_006fec06;
              puVar4 = (undefined4 *)FUN_006f390a();
              *puVar4 = 0;
              iVar6 = FUN_006fe912(param_1,pcVar9,param_3,param_4);
              if (iVar6 != -1) {
                FUN_006f9a4d(pcVar9);
                FUN_006f9a4d(local_14);
                if (*piVar5 != 0) {
                  return iVar6;
                }
                if (iVar2 == 0) {
                  return iVar6;
                }
                *piVar5 = iVar2;
                return iVar6;
              }
              piVar7 = (int *)FUN_006f390a();
            } while ((*piVar7 == 2) || (piVar7 = (int *)FUN_006f38f7(), *piVar7 == 0x15));
            pcVar10 = (char *)FUN_006e6960(pcVar9,0x2f);
            if (pcVar10 == pcVar9) {
              pcVar10 = (char *)FUN_006e6960(pcVar9 + 1,0x2f);
              local_15 = '\x01';
              if (pcVar10 != pcVar9 + 1) goto LAB_006feb5f;
            }
            else {
LAB_006feb5f:
              local_15 = '\0';
            }
            pcVar10 = (char *)FUN_006e6960(pcVar9,0x5c);
            if ((pcVar10 == pcVar9) &&
               (pcVar10 = (char *)FUN_006e6960(pcVar9 + 1,0x5c), pcVar10 == pcVar9 + 1)) {
              bVar3 = true;
            }
            else {
              bVar3 = false;
            }
          } while ((local_15 != '\0') || (bVar3));
        }
LAB_006febb2:
        FUN_006f9a4d(pcVar9);
        FUN_006f9a4d(local_14);
        goto LAB_006febc5;
      }
      pwVar11 = (wchar_t *)0x0;
    }
    else {
      pwVar11 = local_14;
      if (eVar8 == 0x16) {
LAB_006fec06:
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    FUN_006f9a4d(pwVar11);
  }
LAB_006febc5:
  if ((*piVar5 == 0) && (iVar2 != 0)) {
    *piVar5 = iVar2;
  }
  return -1;
}


/* ==== 006fec13  FUN_006fec13  size=11 ==== */

void FUN_006fec13(void)

{
  FUN_006fe91d();
  return;
}


/* ==== 006fed4e  FUN_006fed4e  size=162 ==== */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

int FUN_006fed4e(void)

{
  int iVar1;
  int iVar2;
  undefined4 local_20;
  undefined4 local_14;
  
  local_20 = 0;
  ___acrt_lock(8);
  for (iVar2 = 3; iVar2 != DAT_007c8c54; iVar2 = iVar2 + 1) {
    iVar1 = *(int *)(DAT_007c8c58 + iVar2 * 4);
    if (iVar1 != 0) {
      if ((*(uint *)(iVar1 + 0xc) >> 0xd & 1) != 0) {
        iVar1 = FUN_006e940a(*(undefined4 *)(DAT_007c8c58 + iVar2 * 4));
        if (iVar1 != -1) {
          local_20 = local_20 + 1;
        }
      }
      DeleteCriticalSection((LPCRITICAL_SECTION)(*(int *)(DAT_007c8c58 + iVar2 * 4) + 0x20));
      FUN_006f9a4d(*(undefined4 *)(DAT_007c8c58 + iVar2 * 4));
      *(undefined4 *)(DAT_007c8c58 + iVar2 * 4) = 0;
    }
  }
  FUN_006fedf0();
  ExceptionList = local_14;
  return local_20;
}


/* ==== 006fedf0  FUN_006fedf0  size=9 ==== */

void FUN_006fedf0(void)

{
  ___acrt_unlock(8);
  return;
}


/* ==== 006ff066  FUN_006ff066  size=190 ==== */

float10 FUN_006ff066(double param_1)

{
  double dVar1;
  uint uVar2;
  int iVar3;
  float10 fVar4;
  undefined4 uVar5;
  
  uVar2 = __ctrlfp(0x173f,0xffff);
  if ((param_1._6_2_ & 0x7ff0) == 0x7ff0) {
    iVar3 = FUN_006ff800();
    if (((iVar3 == 1) || (iVar3 == 2)) || (iVar3 == 3)) {
      __ctrlfp(uVar2,0xffff);
      dVar1 = param_1;
LAB_006ff11e:
      return (float10)dVar1;
    }
    dVar1 = param_1 + 1.0;
    uVar5 = 8;
  }
  else {
    fVar4 = (float10)__frnd(SUB84(param_1,0),(int)((ulonglong)param_1 >> 0x20));
    dVar1 = (double)fVar4;
    if (((float10)param_1 == fVar4) || ((uVar2 & 0x20) != 0)) {
      __ctrlfp(uVar2,0xffff);
      goto LAB_006ff11e;
    }
    dVar1 = (double)fVar4;
    uVar5 = 0x10;
  }
  fVar4 = (float10)__except1(uVar5,0xb,param_1,dVar1,uVar2);
  return fVar4;
}


/* ==== 006ff269  FUN_006ff269  size=9 ==== */

void FUN_006ff269(void)

{
  ___acrt_unlock(7);
  return;
}


/* ==== 006ff295  FUN_006ff295  size=146 ==== */

undefined4 FUN_006ff295(uint param_1,HANDLE param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  DWORD nStdHandle;
  
  if ((-1 < (int)param_1) && (param_1 < DAT_007c8fc0)) {
    iVar3 = (param_1 & 0x3f) * 0x38;
    if (*(int *)(iVar3 + 0x18 + (&DAT_007c8dc0)[param_1 >> 6]) == -1) {
      iVar1 = FUN_006f792f();
      if (iVar1 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_006ff2fa;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,param_2);
      }
LAB_006ff2fa:
      *(HANDLE *)((&DAT_007c8dc0)[param_1 >> 6] + 0x18 + iVar3) = param_2;
      return 0;
    }
  }
  puVar2 = (undefined4 *)FUN_006f390a();
  *puVar2 = 9;
  puVar2 = (undefined4 *)FUN_006f38f7();
  *puVar2 = 0;
  return 0xffffffff;
}


/* ==== 006ff454  FUN_006ff454  size=9 ==== */

void FUN_006ff454(void)

{
  ___acrt_unlock(7);
  return;
}


/* ==== 006ff45d  FUN_006ff45d  size=145 ==== */

undefined4 FUN_006ff45d(uint param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  DWORD nStdHandle;
  
  if ((-1 < (int)param_1) && (param_1 < DAT_007c8fc0)) {
    iVar3 = (param_1 & 0x3f) * 0x38;
    if (((*(byte *)(iVar3 + 0x28 + (&DAT_007c8dc0)[param_1 >> 6]) & 1) != 0) &&
       (*(int *)(iVar3 + 0x18 + (&DAT_007c8dc0)[param_1 >> 6]) != -1)) {
      iVar1 = FUN_006f792f();
      if (iVar1 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_006ff4c3;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_006ff4c3:
      *(undefined4 *)((&DAT_007c8dc0)[param_1 >> 6] + 0x18 + iVar3) = 0xffffffff;
      return 0;
    }
  }
  puVar2 = (undefined4 *)FUN_006f390a();
  *puVar2 = 9;
  puVar2 = (undefined4 *)FUN_006f38f7();
  *puVar2 = 0;
  return 0xffffffff;
}


/* ==== 006ff4ee  FUN_006ff4ee  size=106 ==== */

undefined4 FUN_006ff4ee(uint param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (param_1 == 0xfffffffe) {
    puVar1 = (undefined4 *)FUN_006f38f7();
    *puVar1 = 0;
    puVar1 = (undefined4 *)FUN_006f390a();
    *puVar1 = 9;
  }
  else {
    if ((-1 < (int)param_1) && (param_1 < DAT_007c8fc0)) {
      iVar2 = (param_1 & 0x3f) * 0x38;
      if ((*(byte *)((&DAT_007c8dc0)[param_1 >> 6] + 0x28 + iVar2) & 1) != 0) {
        return *(undefined4 *)((&DAT_007c8dc0)[param_1 >> 6] + 0x18 + iVar2);
      }
    }
    puVar1 = (undefined4 *)FUN_006f38f7();
    *puVar1 = 0;
    puVar1 = (undefined4 *)FUN_006f390a();
    *puVar1 = 9;
    FUN_006e8c2f();
  }
  return 0xffffffff;
}


/* ==== 006ff5af  FUN_006ff5af  size=134 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_006ff5af(int param_1)

{
  uint uVar1;
  undefined1 in_ZF;
  unkbyte10 extraout_ST0;
  float10 fVar2;
  
  uVar1 = __fload_withFB();
  if ((bool)in_ZF) {
    if (((uVar1 & 0xfffff) != 0) || (param_1 != 0)) {
      fVar2 = (float10)FUN_007068ac();
      if (DAT_007c9330 != 0) {
        return fVar2;
      }
      fVar2 = (float10)__startOneArgErrorHandling();
      return fVar2;
    }
    fVar2 = _DAT_0073e57a;
    if ((uVar1 & 0x80000000) != 0) {
      fVar2 = -_DAT_0073e57a;
    }
  }
  else {
    fVar2 = (float10)fpatan(extraout_ST0,(float10)1);
  }
  if (DAT_007c9330 != 0) {
                    /* WARNING: Read-only address (ram,0x0073e57a) is written */
    return fVar2;
  }
  fVar2 = (float10)__math_exit();
  return fVar2;
}


/* ==== 006ff701  FUN_006ff701  size=210 ==== */

void FUN_006ff701(int param_1,uint param_2,int *param_3)

{
  uint uVar1;
  double dVar2;
  uint uVar3;
  int iVar4;
  ushort uVar5;
  
  dVar2 = (double)CONCAT17(param_2._3_1_,
                           CONCAT16(param_2._2_1_,CONCAT24((undefined2)param_2,param_1)));
  if (dVar2 == 0.0) {
    iVar4 = 0;
  }
  else {
    uVar5 = (ushort)(param_2 >> 0x10);
    if (((param_2 & 0x7ff00000) == 0) && (((param_2 & 0xfffff) != 0 || (param_1 != 0)))) {
      iVar4 = -0x3fd;
      uVar3 = param_2;
      if ((param_2 & 0x100000) == 0) {
        do {
          uVar1 = uVar3 * 2;
          param_2._0_2_ = (undefined2)uVar1;
          uVar3 = uVar1;
          if (param_1 < 0) {
            uVar3 = uVar1 | 1;
            param_2._0_2_ = (undefined2)uVar3;
          }
          param_1 = param_1 * 2;
          iVar4 = iVar4 + -1;
        } while ((uVar1 & 0x100000) == 0);
        uVar5 = (ushort)(uVar1 >> 0x10);
      }
      param_2._2_1_ = (undefined1)(uVar5 & 0xffef);
      param_2._3_1_ = (byte)((uVar5 & 0xffef) >> 8);
      if (dVar2 < 0.0) {
        param_2._3_1_ = param_2._3_1_ | 0x80;
      }
      __set_exp(CONCAT17(param_2._3_1_,CONCAT16(param_2._2_1_,CONCAT24((undefined2)param_2,param_1))
                        ),0);
    }
    else {
      __set_exp(dVar2,0);
      iVar4 = (uVar5 >> 4 & 0x7ff) - 0x3fe;
    }
  }
  *param_3 = iVar4;
  return;
}


/* ==== 006ff800  FUN_006ff800  size=99 ==== */

byte FUN_006ff800(int param_1,uint param_2)

{
  byte bVar1;
  
  if (param_2 == 0x7ff00000) {
    if (param_1 == 0) {
      return 1;
    }
  }
  else if ((param_2 == 0xfff00000) && (param_1 == 0)) {
    return 2;
  }
  if ((param_2._2_2_ & 0x7ff8) == 0x7ff8) {
    bVar1 = 3;
  }
  else {
    if ((param_2._2_2_ & 0x7ff8) != 0x7ff0) {
      return 0;
    }
    if ((param_2 & 0x7ffff) == 0) {
      return -(param_1 != 0) & 4;
    }
    bVar1 = 4;
  }
  return bVar1;
}


/* ==== 006ff8e3  FUN_006ff8e3  size=17 ==== */

int FUN_006ff8e3(void)

{
  short in_FPUStatusWord;
  
  return (int)in_FPUStatusWord;
}


/* ==== 006ff91e  FUN_006ff91e  size=89 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006ff91e(void)

{
  return;
}


/* ==== 006ff977  FUN_006ff977  size=16 ==== */

int FUN_006ff977(void)

{
  short in_FPUStatusWord;
  
  return (int)in_FPUStatusWord;
}


/* ==== 006ff9df  FUN_006ff9df  size=193 ==== */

uint FUN_006ff9df(int param_1,uint param_2)

{
  uint uVar1;
  undefined1 in_ZF;
  unkbyte10 extraout_ST0;
  
  uVar1 = __fload_withFB();
  if ((bool)in_ZF) {
    if (((uVar1 & 0xfffff) != 0) || (param_1 != 0)) {
      uVar1 = FUN_007068ac();
      goto LAB_006ffa81;
    }
    param_2 = 0;
    if ((uVar1 & 0x80000000) == 0) goto LAB_006ffa15;
  }
  else {
    if ((((param_2 & 0x7ff00000) == 0) && ((param_2 & 0xfffff) == 0)) && (param_1 == 0)) {
      uVar1 = 2;
      goto LAB_006ffa81;
    }
    if ((param_2 & 0x80000000) == 0) {
      log2(extraout_ST0);
LAB_006ffa15:
      if (DAT_007c9330 != 0) {
        return param_2;
      }
      uVar1 = __math_exit();
      return uVar1;
    }
  }
  uVar1 = 1;
LAB_006ffa81:
  if (DAT_007c9330 != 0) {
    return uVar1;
  }
  uVar1 = __startOneArgErrorHandling();
  return uVar1;
}


/* ==== 006ffaf4  FUN_006ffaf4  size=461 ==== */

ushort FUN_006ffaf4(int param_1,uint param_2,int param_3,uint param_4)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  byte extraout_CL;
  char extraout_CL_00;
  uint extraout_ECX;
  int extraout_ECX_00;
  int iVar4;
  int extraout_ECX_01;
  bool bVar5;
  short in_FPUControlWord;
  ushort in_FPUStatusWord;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 fVar6;
  float10 extraout_ST1;
  float10 extraout_ST1_00;
  float10 extraout_ST1_01;
  float10 fVar7;
  unkbyte10 in_ST6;
  unkbyte10 in_ST7;
  undefined1 local_78 [12];
  ushort uStack_6c;
  undefined4 uStack_64;
  undefined1 auStack_e [10];
  undefined4 local_4;
  
  local_4 = 0x6ffafd;
  uVar2 = __fload_withFB();
  local_4 = CONCAT22((short)(uVar2 >> 0x10),in_FPUControlWord);
  uVar3 = uVar2;
  if (in_FPUControlWord != 0x27f) {
    auStack_e._6_4_ = 0x6ffb11;
    uVar2 = FUN_00706895();
    uVar3 = extraout_ECX;
  }
  bVar5 = (uVar3 & 0x7ff00000) == 0x7ff00000;
  if (bVar5) {
    if ((uVar2 & 0xfffff) == 0 && param_3 == 0) {
      auStack_e._6_4_ = 0x6ffbd9;
      fVar6 = (float10)__fload_withFB();
      iVar4 = extraout_ECX_01;
      fVar7 = extraout_ST1_01;
      in_ST6 = in_ST7;
    }
    else {
      auStack_e._6_4_ = 0x6ffb9d;
      uVar1 = __fload_withFB();
      in_FPUStatusWord = in_FPUStatusWord & 0xfdff;
      fVar7 = extraout_ST1_00;
      if (NAN((float10)1) || NAN(extraout_ST0_00)) goto LAB_006ffba8;
      if ((float10)1 == extraout_ST0_00) {
        return uVar1;
      }
      iVar4 = extraout_ECX_00 + 1;
      fVar6 = extraout_ST0_00;
    }
  }
  else {
    auStack_e._6_4_ = 0x6ffb2c;
    uVar3 = __fload_withFB();
    if (!bVar5) {
      if (((uVar3 & 0x7ff00000) != 0) || ((param_2 & 0xfffff) != 0 || param_1 != 0)) {
        fVar6 = extraout_ST0;
        if ((param_2 & 0x80000000) != 0) {
          auStack_e._6_4_ = 0x6ffca3;
          fVar6 = (float10)FUN_006ffcc1();
          fVar6 = -fVar6;
          if (extraout_CL_00 == '\0') {
            uVar1 = 1;
            goto LAB_006ffb75;
          }
        }
        log2(fVar6);
        auStack_e._6_4_ = 0x6ffb51;
        uVar1 = FUN_00706880();
        if (DAT_007c9330 != 0) {
          return uVar1;
        }
        uVar1 = FUN_00706969();
        return uVar1;
      }
      if ((param_4 & 0x7fffffff) == 0 && param_3 == 0) {
        uVar1 = FUN_0070691e();
        return uVar1;
      }
      auStack_e._6_4_ = 0x6ffc5b;
      uVar1 = FUN_006ffcc1();
      if ((param_4 & 0x80000000) == 0) {
        if ((param_2._3_1_ >> 7 & extraout_CL) == 0) {
          return uVar1;
        }
        uVar1 = FUN_0070691e();
        return uVar1;
      }
      uVar1 = 2;
      goto LAB_006ffb75;
    }
    iVar4 = 0;
    fVar6 = extraout_ST0;
    fVar7 = extraout_ST1;
    in_ST6 = in_ST7;
  }
  if (((param_2 & 0x7ff00000) == 0x7ff00000) && ((param_2 & 0xfffff) != 0 || param_1 != 0)) {
LAB_006ffba8:
    fVar6 = (float10)0;
    uVar1 = (ushort)NAN(fVar7) << 8 | (ushort)(fVar7 < fVar6) << 9 | (ushort)(fVar7 != fVar6) << 10
            | (ushort)(fVar7 == fVar6) << 0xe;
    if ((fVar7 == fVar6) == 0) {
      return uVar1;
    }
    return uVar1;
  }
  if (iVar4 != 0) {
    return 0;
  }
  uStack_64 = 0x6ffc07;
  uStack_6c = in_FPUStatusWord;
  auStack_e = (undefined1  [10])in_ST6;
  iVar4 = FUN_00707a78((double)fVar6,(double)fVar7,local_78);
  if (iVar4 == 0) {
    return 0;
  }
  uVar1 = 1;
LAB_006ffb75:
  if (DAT_007c9330 != 0) {
    return uVar1;
  }
  auStack_e._6_4_ = 0x6ffb92;
  uVar1 = FUN_00706a10();
  return uVar1;
}


/* ==== 006ffcc1  FUN_006ffcc1  size=40 ==== */

void FUN_006ffcc1(void)

{
  float10 in_ST0;
  
  if (ROUND(in_ST0) == in_ST0) {
    return;
  }
  return;
}


/* ==== 006ffd2b  FUN_006ffd2b  size=10 ==== */

void FUN_006ffd2b(void)

{
  __ctrandisp1();
  return;
}


/* ==== 006ffd40  FUN_006ffd40  size=14 ==== */

void FUN_006ffd40(void)

{
  __fload_withFB();
  FUN_00708124();
  return;
}


/* ==== 006ffe5f  FUN_006ffe5f  size=147 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_006ffe5f(int param_1)

{
  uint uVar1;
  undefined1 in_ZF;
  ushort in_FPUStatusWord;
  unkbyte10 extraout_ST0;
  float10 fVar2;
  
  uVar1 = __fload_withFB();
  if ((bool)in_ZF) {
    if (((uVar1 & 0xfffff) == 0) && (param_1 == 0)) {
      if (DAT_007c9330 != 0) {
        return 1;
      }
      uVar1 = __startOneArgErrorHandling();
    }
    return uVar1;
  }
  fVar2 = (float10)fcos(extraout_ST0);
  if ((in_FPUStatusWord & 0x400) != 0) {
    do {
      fVar2 = fVar2 - ROUND(fVar2 / _DAT_0073e5ba) * _DAT_0073e5ba;
    } while ((in_FPUStatusWord & 0x400) != 0);
    fcos(fVar2);
  }
  if (DAT_007c9330 != 0) {
    return (uint)in_FPUStatusWord;
  }
  uVar1 = __math_exit();
  return uVar1;
}


/* ==== 006fff4f  FUN_006fff4f  size=147 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_006fff4f(int param_1)

{
  uint uVar1;
  undefined1 in_ZF;
  ushort in_FPUStatusWord;
  unkbyte10 extraout_ST0;
  float10 fVar2;
  
  uVar1 = __fload_withFB();
  if ((bool)in_ZF) {
    if (((uVar1 & 0xfffff) == 0) && (param_1 == 0)) {
      if (DAT_007c9330 != 0) {
        return 1;
      }
      uVar1 = __startOneArgErrorHandling();
    }
    return uVar1;
  }
  fVar2 = (float10)fsin(extraout_ST0);
  if ((in_FPUStatusWord & 0x400) != 0) {
    do {
      fVar2 = fVar2 - ROUND(fVar2 / _DAT_0073e5ba) * _DAT_0073e5ba;
    } while ((in_FPUStatusWord & 0x400) != 0);
    fsin(fVar2);
  }
  if (DAT_007c9330 != 0) {
    return (uint)in_FPUStatusWord;
  }
  uVar1 = __math_exit();
  return uVar1;
}


