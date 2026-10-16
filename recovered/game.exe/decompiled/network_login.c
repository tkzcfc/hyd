/* Auto-decompiled pseudo-code from game.exe / network_login */
/* NOT original source. Bucketed by evidence (strings/imports/call-graph), not raw address. */

/* ==== 004cee80  FUN_004cee80  size=63 ==== */

void FUN_004cee80(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = allocator<>();
  iVar3 = FUN_006e48e1(uVar2);
  if (iVar3 != 0) {
    FUN_006e47f3(5);
  }
  cVar1 = FUN_004ceee0();
  if (cVar1 == '\0') {
    FUN_006e47f3(6);
  }
  return;
}


/* ==== 004ceec0  FUN_004ceec0  size=28 ==== */

void FUN_004ceec0(void)

{
  undefined4 uVar1;
  
  uVar1 = allocator<>();
  FUN_006e48f2(uVar1);
  return;
}


/* ==== 004f2490  net_socket_recv_thread_proc  size=641 ==== */

undefined4 net_socket_recv_thread_proc(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  size_t local_30;
  int local_28;
  size_t local_20;
  undefined4 local_1c;
  undefined4 local_18;
  size_t local_14;
  size_t local_10;
  void *local_c;
  size_t local_8;
  
  local_18 = param_1;
  do {
    while( true ) {
      local_1c = 0;
      local_30 = Ordinal_16(local_18,&local_1c,4,0);
      local_8 = local_30;
      if (0 < (int)local_30) break;
      if ((int)local_30 < 1) {
        FUN_004cee80();
        Ordinal_3(local_18);
        Ordinal_116();
        piVar2 = (int *)game_get_global_ptr_f2480();
        if (*piVar2 == 0) {
          puVar3 = (undefined4 *)game_get_global_ptr_f2480();
          *puVar3 = 1;
        }
        FUN_004ceec0();
        return 0;
      }
    }
    if ((int)local_30 < 4) {
      for (local_28 = 4 - local_30; 0 < local_28; local_28 = local_28 - iVar1) {
        iVar1 = Ordinal_16(local_18,(int)&local_1c + local_30,local_28,0);
        if (iVar1 == -1) {
          Ordinal_3(local_18);
          return 0xffffffff;
        }
        if (iVar1 == 0) {
          Ordinal_3(local_18);
          return 0xffffffff;
        }
        local_30 = local_30 + iVar1;
      }
    }
    iVar4 = 0;
    local_10 = 0;
    iVar1 = FUN_006a34f0(&local_10,&local_1c,0);
    iVar1 = iVar1 + iVar4;
    if ((int)local_10 < 1) {
      MessageBoxA((HWND)0x0,&DAT_00751bf4,(LPCSTR)0x0,0);
    }
    local_c = (void *)FUN_006f191d(local_10,iVar1);
    _memset(local_c,0,local_10);
    if (local_c == (void *)0x0) {
      MessageBoxA((HWND)0x0,&DAT_00751bcc,(LPCSTR)0x0,0);
    }
    local_14 = local_10;
    if (local_8 == local_10) {
      FUN_006e6bd0(local_c,&local_1c,local_8);
    }
    else if ((int)local_8 < (int)local_10) {
      FUN_006e6bd0(local_c,&local_1c,local_8);
      local_20 = local_8;
      for (local_14 = local_14 - local_8; 0 < (int)local_14; local_14 = local_14 - iVar1) {
        iVar1 = Ordinal_16(local_18,(int)local_c + local_20,local_14,0);
        if (iVar1 == -1) {
          FUN_006f1902(local_c);
          MessageBoxA((HWND)0x0,&DAT_00751bdc,(LPCSTR)0x0,0);
        }
        else if (iVar1 == 0) {
          FUN_006f1902(local_c);
          MessageBoxA((HWND)0x0,&DAT_00751c00,(LPCSTR)0x0,0);
        }
        local_20 = local_20 + iVar1;
      }
    }
    FUN_004cee80();
    FUN_0040d490(&local_c);
    FUN_004ceec0();
  } while( true );
}


/* ==== 0059ae60  etc_file_open_helper  size=155 ==== */

undefined4 * etc_file_open_helper(void)

{
  undefined4 *in_ECX;
  
  FUN_0040d8b0();
  FUN_0040d8b0();
  *in_ECX = 0;
  in_ECX[7] = 0;
  in_ECX[0xf] = 0;
  in_ECX[0x10] = 0;
  in_ECX[0x11] = 0;
  in_ECX[0x12] = 0;
  in_ECX[0x13] = 0;
  in_ECX[0x14] = 0;
  in_ECX[0x15] = 0;
  in_ECX[0x16] = 0;
  in_ECX[0x17] = 0;
  in_ECX[0x18] = 0;
  return in_ECX;
}


/* ==== 005e7940  parse_server_config_section  size=761 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void parse_server_config_section(void)

{
  undefined1 auStack_1cc [4];
  undefined4 uStack_1c8;
  undefined *puStack_1c4;
  int iStack_1c0;
  int iStack_1bc;
  char *pcStack_1b8;
  uint uStack_1b4;
  undefined1 *local_1b0;
  undefined4 local_1ac;
  int local_1a8;
  int local_1a4;
  int local_1a0;
  undefined4 local_19c;
  int local_194;
  undefined1 local_190 [28];
  undefined1 local_174 [28];
  undefined1 local_158 [44];
  undefined1 local_12c [256];
  char local_2c [24];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00720da0;
  local_10 = ExceptionList;
  uStack_1b4 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  builtin_strncpy(local_2c,"etc/channel_info.etc",0x15);
  pcStack_1b8 = (char *)0x5e79b0;
  local_14 = uStack_1b4;
  etc_file_open_helper();
  local_8 = 0;
  local_1b0 = auStack_1cc;
  FUN_004054a0(local_2c);
  local_1a8 = etc_file_get_size_or_data();
  pcStack_1b8 = (char *)(local_1a8 + 8);
  iStack_1bc = *(undefined4 *)(local_1a8 + 0x18);
  iStack_1c0 = 0x5e7a07;
  local_1a4 = local_1a8;
  iStack_1bc = parse_channel_info_load_buffer();
  pcStack_1b8 = "[server]";
  iStack_1c0 = 0x5e7a1e;
  local_194 = iStack_1bc;
  iStack_1bc = config_find_section_marker();
  iStack_1bc = iStack_1bc + 8;
  pcStack_1b8 = "[/server]";
  iStack_1c0 = 0x5e7a4c;
  local_194 = iStack_1bc;
  pcStack_1b8 = (char *)config_find_section_marker();
  iStack_1bc = local_194;
  iStack_1c0 = 0x5e7a68;
  local_19c = pcStack_1b8;
  iStack_1c0 = config_section_span_helper();
  local_1ac = 0;
  pcStack_1b8 = (char *)&local_1ac;
  iStack_1bc = local_19c;
  puStack_1c4 = &DAT_0076540c;
  uStack_1c8 = 0x5e7aa0;
  local_194 = iStack_1c0;
  local_194 = parse_server_config_getline();
  while( true ) {
    pcStack_1b8 = local_190;
    iStack_1bc = local_19c;
    iStack_1c0 = local_194;
    puStack_1c4 = &DAT_00765408;
    uStack_1c8 = 0x5e7ad8;
    local_194 = parse_server_config_getline();
    if (local_194 == 0) break;
    pcStack_1b8 = local_12c;
    iStack_1bc = local_19c;
    puStack_1c4 = &DAT_00765438;
    uStack_1c8 = 0x5e7b11;
    iStack_1c0 = local_194;
    local_194 = parse_server_config_getline();
    pcStack_1b8 = local_12c;
    iStack_1bc = 0x5e7b29;
    FUN_004053a0();
    pcStack_1b8 = local_174;
    iStack_1bc = local_19c;
    iStack_1c0 = local_194;
    puStack_1c4 = &DAT_00765434;
    uStack_1c8 = 0x5e7b4e;
    iStack_1c0 = parse_server_config_getline();
    pcStack_1b8 = local_12c;
    iStack_1bc = local_19c;
    puStack_1c4 = &DAT_0076542c;
    uStack_1c8 = 0x5e7b79;
    local_194 = iStack_1c0;
    local_194 = parse_server_config_getline();
    pcStack_1b8 = local_12c;
    iStack_1bc = 0x5e7b91;
    FUN_004053a0();
    for (local_1a0 = 0; local_1a0 < 0xb; local_1a0 = local_1a0 + 1) {
      pcStack_1b8 = local_158;
      iStack_1bc = local_19c;
      iStack_1c0 = local_194;
      puStack_1c4 = &DAT_00765428;
      uStack_1c8 = 0x5e7bdb;
      local_194 = parse_server_config_getline();
    }
    pcStack_1b8 = local_190;
    iStack_1bc = 0x5e7bf8;
    parse_server_entry_finalize();
  }
  iStack_1bc = 0x5e7c0a;
  pcStack_1b8 = (char *)local_194;
  FUN_006f1902();
  local_8 = 0xffffffff;
  pcStack_1b8 = (char *)0x5e7c1f;
  parse_server_config_cleanup();
  ExceptionList = local_10;
  return;
}


/* ==== 005e7c40  parse_server_config_cleanup  size=34 ==== */

void parse_server_config_cleanup(void)

{
  int in_ECX;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(in_ECX + 0x20));
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(in_ECX + 4));
  return;
}


/* ==== 005e7c70  parse_server_config_getline  size=2029 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 parse_server_config_getline(byte *param_1,undefined4 param_2,undefined4 param_3,char *param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  bool bVar6;
  undefined1 local_1f0 [4];
  int local_1ec;
  int local_1e8;
  char *local_1e4;
  undefined1 local_1e0 [8];
  uint local_1d8;
  char *local_1d4;
  uint local_1d0;
  int local_1cc;
  char *local_1c8;
  uint local_1c4;
  int local_1c0;
  char *local_1bc;
  int local_1b8;
  char *local_1b4;
  uint local_1b0;
  int local_1ac;
  char *local_1a8;
  uint local_1a4;
  uint local_1a0;
  undefined4 local_19c;
  uint local_198;
  uint local_194;
  uint local_190;
  uint local_18c;
  char *local_188;
  byte *local_184;
  byte *local_180;
  char *local_17c;
  byte *local_178;
  byte *local_174;
  byte *local_170;
  byte *local_16c;
  byte *local_168;
  byte *local_164;
  byte *local_160;
  byte *local_15c;
  char *local_158;
  char *local_154;
  char *local_150;
  char *local_14c;
  char *local_148;
  char *local_144;
  char local_13d;
  char local_13c;
  byte local_13b;
  byte local_13a;
  char local_139;
  byte local_138;
  byte local_137;
  char local_136;
  byte local_135;
  byte local_134;
  char local_133;
  byte local_132;
  byte local_131;
  char local_130;
  byte local_12f;
  byte local_12e;
  char local_12d;
  function<void___cdecl(void)> local_12c [24];
  char local_114 [256];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00720de0;
  local_10 = ExceptionList;
  uVar1 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar1;
  iVar2 = config_section_span_helper(param_2,param_3,uVar1);
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    iVar4 = FUN_004a1ba0(iVar2,&DAT_00765444,local_114);
    if (iVar4 == 0) {
      uVar3 = 0;
    }
    else {
      local_184 = &DAT_00765440;
      local_180 = param_1;
      do {
        local_12e = *local_180;
        bVar6 = local_12e < *local_184;
        if (local_12e != *local_184) {
LAB_005e7d55:
          local_1a0 = -(uint)bVar6 | 1;
          goto LAB_005e7d60;
        }
        if (local_12e == 0) break;
        local_12f = local_180[1];
        bVar6 = local_12f < local_184[1];
        if (local_12f != local_184[1]) goto LAB_005e7d55;
        local_180 = local_180 + 2;
        local_184 = local_184 + 2;
      } while (local_12f != 0);
      local_1a0 = 0;
LAB_005e7d60:
      local_1a4 = local_1a0;
      if (local_1a0 == 0) {
        FUN_004a1ba0(local_114,&DAT_00765470,param_4);
        local_144 = local_114;
        local_1a8 = local_114 + 1;
        do {
          local_130 = *local_144;
          local_144 = local_144 + 1;
        } while (local_130 != '\0');
        local_1ac = (int)local_144 - (int)local_1a8;
        uVar3 = config_section_span_helper(iVar2 + local_1ac,param_3,uVar1);
      }
      else {
        local_160 = &DAT_0076546c;
        local_15c = param_1;
        do {
          local_131 = *local_15c;
          bVar6 = local_131 < *local_160;
          if (local_131 != *local_160) {
LAB_005e7e79:
            local_18c = -(uint)bVar6 | 1;
            goto LAB_005e7e84;
          }
          if (local_131 == 0) break;
          local_132 = local_15c[1];
          bVar6 = local_132 < local_160[1];
          if (local_132 != local_160[1]) goto LAB_005e7e79;
          local_15c = local_15c + 2;
          local_160 = local_160 + 2;
        } while (local_132 != 0);
        local_18c = 0;
LAB_005e7e84:
        local_1b0 = local_18c;
        if (local_18c == 0) {
          FUN_004a1ba0(local_114,&DAT_00765468,param_4);
          local_148 = local_114;
          local_1b4 = local_114 + 1;
          do {
            local_133 = *local_148;
            local_148 = local_148 + 1;
          } while (local_133 != '\0');
          local_1b8 = (int)local_148 - (int)local_1b4;
          uVar3 = config_section_span_helper(iVar2 + local_1b8,param_3,uVar1);
        }
        else {
          local_168 = &DAT_00765460;
          local_164 = param_1;
          do {
            local_134 = *local_164;
            bVar6 = local_134 < *local_168;
            if (local_134 != *local_168) {
LAB_005e7f9d:
              local_190 = -(uint)bVar6 | 1;
              goto LAB_005e7fa8;
            }
            if (local_134 == 0) break;
            local_135 = local_164[1];
            bVar6 = local_135 < local_168[1];
            if (local_135 != local_168[1]) goto LAB_005e7f9d;
            local_164 = local_164 + 2;
            local_168 = local_168 + 2;
          } while (local_135 != 0);
          local_190 = 0;
LAB_005e7fa8:
          local_1d8 = local_190;
          if (local_190 == 0) {
            iVar4 = FUN_004a1ba0(iVar2,"`%[^`]",param_4);
            if (iVar4 == 0) {
              uVar3 = 0;
            }
            else {
              local_14c = param_4;
              local_1bc = param_4 + 1;
              do {
                local_136 = *local_14c;
                local_14c = local_14c + 1;
              } while (local_136 != '\0');
              local_1c0 = (int)local_14c - (int)local_1bc;
              uVar3 = config_section_span_helper(iVar2 + local_1c0 + 2,param_3,uVar1);
            }
          }
          else {
            local_170 = &DAT_00765484;
            local_16c = param_1;
            do {
              local_137 = *local_16c;
              bVar6 = local_137 < *local_170;
              if (local_137 != *local_170) {
LAB_005e80cf:
                local_194 = -(uint)bVar6 | 1;
                goto LAB_005e80da;
              }
              if (local_137 == 0) break;
              local_138 = local_16c[1];
              bVar6 = local_138 < local_170[1];
              if (local_138 != local_170[1]) goto LAB_005e80cf;
              local_16c = local_16c + 2;
              local_170 = local_170 + 2;
            } while (local_138 != 0);
            local_194 = 0;
LAB_005e80da:
            local_1c4 = local_194;
            if (local_194 == 0) {
              FUN_004a1ba0(iVar2,"%[^>]",param_4);
              local_150 = param_4;
              local_1c8 = param_4 + 1;
              do {
                local_139 = *local_150;
                local_150 = local_150 + 1;
              } while (local_139 != '\0');
              local_1cc = (int)local_150 - (int)local_1c8;
              uVar3 = config_section_span_helper(iVar2 + 1 + local_1cc,param_3,uVar1);
            }
            else {
              local_178 = &DAT_00765474;
              local_174 = param_1;
              do {
                local_13a = *local_174;
                bVar6 = local_13a < *local_178;
                if (local_13a != *local_178) {
LAB_005e81f1:
                  local_198 = -(uint)bVar6 | 1;
                  goto LAB_005e81fc;
                }
                if (local_13a == 0) break;
                local_13b = local_174[1];
                bVar6 = local_13b < local_178[1];
                if (local_13b != local_178[1]) goto LAB_005e81f1;
                local_174 = local_174 + 2;
                local_178 = local_178 + 2;
              } while (local_13b != 0);
              local_198 = 0;
LAB_005e81fc:
              local_1d0 = local_198;
              if (local_198 == 0) {
                iVar4 = FUN_004a1ba0(iVar2,"<%[^>]",param_4);
                if (iVar4 == 0) {
                  iVar4 = FUN_004a1ba0(iVar2,"`%[^`]",param_4);
                  if (iVar4 == 0) {
                    MessageBoxA((HWND)0x0,&DAT_00765490,(LPCSTR)0x0,0);
                    uVar3 = 0;
                  }
                  else {
                    local_158 = param_4;
                    local_1e4 = param_4 + 1;
                    do {
                      local_13d = *local_158;
                      local_158 = local_158 + 1;
                    } while (local_13d != '\0');
                    local_1e8 = (int)local_158 - (int)local_1e4;
                    uVar3 = config_section_span_helper(iVar2 + local_1e8 + 2,param_3,uVar1);
                  }
                }
                else {
                  local_154 = param_4;
                  local_1d4 = param_4 + 1;
                  do {
                    local_13c = *local_154;
                    local_154 = local_154 + 1;
                  } while (local_13c != '\0');
                  local_1ec = (int)local_154 - (int)local_1d4;
                  uVar3 = config_section_span_helper(iVar2 + local_1ec + 2,param_3,uVar1);
                  FUN_004a1ba0(param_4,"%d::%s",local_1e0,local_114);
                  npk_path_normalize_helper();
                  FUN_004054a0(local_114);
                  local_8 = 0;
                  puVar5 = (undefined4 *)FUN_0048aa30(local_1f0,local_12c);
                  local_19c = *puVar5;
                  FUN_00489a10();
                  local_188 = (char *)npk_get_relative_res_path();
                  local_17c = param_4;
                  do {
                    local_12d = *local_188;
                    *local_17c = local_12d;
                    local_188 = local_188 + 1;
                    local_17c = local_17c + 1;
                  } while (local_12d != '\0');
                  local_8 = 0xffffffff;
                  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_12c);
                }
              }
              else {
                MessageBoxA((HWND)0x0,&DAT_007654e8,(LPCSTR)0x0,0);
                uVar3 = 0;
              }
            }
          }
        }
      }
    }
  }
  ExceptionList = local_10;
  return uVar3;
}


/* ==== 005e8480  parse_channel_info_load_buffer  size=731 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char * parse_channel_info_load_buffer(char *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  char *local_438;
  char *local_434;
  char *local_42c;
  char *local_428;
  char *local_424;
  char *local_420;
  char *local_41c;
  char *local_418;
  char *local_414;
  char local_408 [1024];
  uint local_8;
  
  local_8 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  pcVar3 = (char *)FUN_006f191d(*param_2);
  local_414 = param_1;
  iVar2 = *param_2;
  local_418 = pcVar3;
  while( true ) {
    iVar4 = config_section_span_helper(local_414,param_1 + iVar2);
    if (iVar4 == 0) break;
    FUN_004a1ba0(iVar4,&DAT_007654e4,local_408);
    local_41c = local_408;
    do {
      cVar1 = *local_41c;
      local_41c = local_41c + 1;
    } while (cVar1 != '\0');
    local_414 = local_41c + (iVar4 - (int)(local_408 + 1));
    local_434 = local_408;
    local_428 = local_418;
    do {
      cVar1 = *local_434;
      *local_428 = cVar1;
      local_434 = local_434 + 1;
      local_428 = local_428 + 1;
    } while (cVar1 != '\0');
    local_420 = local_408;
    do {
      cVar1 = *local_420;
      local_420 = local_420 + 1;
    } while (cVar1 != '\0');
    local_418[(int)local_420 - (int)(local_408 + 1)] = ' ';
    local_424 = local_408;
    do {
      cVar1 = *local_424;
      local_424 = local_424 + 1;
    } while (cVar1 != '\0');
    local_418 = local_418 + (int)(local_424 + (1 - (int)(local_408 + 1)));
  }
  *local_418 = '\0';
  *param_2 = (int)local_418 - (int)pcVar3;
  pcVar5 = (char *)FUN_006f191d(*param_2);
  local_438 = pcVar3;
  local_42c = pcVar5;
  do {
    cVar1 = *local_438;
    *local_42c = cVar1;
    local_438 = local_438 + 1;
    local_42c = local_42c + 1;
  } while (cVar1 != '\0');
  FUN_006f1902(pcVar3,pcVar5);
  return pcVar5;
}


/* ==== 005ea950  parse_server_entry_finalize  size=26 ==== */

void parse_server_entry_finalize(undefined4 param_1)

{
  FUN_005f0a20(param_1);
  return;
}


/* ==== 005f0a20  FUN_005f0a20  size=75 ==== */

void FUN_005f0a20(undefined4 param_1)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) == *(int *)(in_ECX + 8)) {
    FUN_005fb2a0(*(int *)(in_ECX + 4),param_1);
  }
  else {
    FUN_005fb230(param_1);
  }
  return;
}


/* ==== 005fb230  FUN_005fb230  size=110 ==== */

int FUN_005fb230(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  int *piVar3;
  
  piVar3 = (int *)(in_ECX + 4);
  uVar2 = _Unfancy<>(*piVar3,param_1);
  uVar2 = FUN_00401c60(uVar2);
  FUN_00606c90(uVar2);
  FUN_004023d0(*piVar3,*piVar3);
  iVar1 = *piVar3;
  *piVar3 = *piVar3 + 100;
  return iVar1;
}


/* ==== 005fb2a0  FUN_005fb2a0  size=461 ==== */

int FUN_005fb2a0(int param_1,undefined4 param_2)

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
  puStack_c = &LAB_0072144d;
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
  FUN_00606c90(local_18,uVar3);
  *local_3c = local_20 * 100 + local_14;
  if (param_1 == *local_28) {
    FUN_00606cc0(*local_24,*local_28,local_14,local_18);
  }
  else {
    FUN_00606cc0(*local_24,param_1,local_14,local_18);
    *local_3c = local_14;
    FUN_00606cc0(param_1,*local_28,local_14 + 100 + local_20 * 100,local_18);
  }
  uVar3 = 0;
  FUN_006039d0(local_14,local_40,local_2c);
  local_44 = local_20 * 100 + local_14;
  local_8 = 0xffffffff;
  FUN_00602c30(uVar1,uVar4,uVar3);
  ExceptionList = local_10;
  return local_44;
}


/* ==== 006039d0  FUN_006039d0  size=163 ==== */

void FUN_006039d0(int param_1,int param_2,int param_3)

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
    FUN_005f3170(*in_ECX,*piVar3,uVar1);
    FUN_00582130(*in_ECX,(*piVar2 - *in_ECX) / 100);
  }
  *in_ECX = param_1;
  *piVar3 = param_2 * 100 + param_1;
  *piVar2 = param_3 * 100 + param_1;
  return;
}


/* ==== 00606c90  FUN_00606c90  size=38 ==== */

void FUN_00606c90(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_004013e0(100,param_2);
  FUN_00608cf0(param_3);
  return;
}


/* ==== 00606cc0  FUN_00606cc0  size=168 ==== */

undefined4 FUN_00606cc0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0072222d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = FUN_00402d20(&param_1,DAT_007c5940 ^ (uint)&stack0xfffffffc);
  iVar1 = FUN_00402d20(&param_2);
  FUN_00403180(param_3,param_4);
  local_8 = 0;
  for (; local_14 != iVar1; local_14 = local_14 + 100) {
    FUN_0060a670(local_14);
  }
  uVar2 = FUN_00403130();
  local_8 = 0xffffffff;
  FUN_006099f0();
  ExceptionList = local_10;
  return uVar2;
}


/* ==== 0068de00  read_dnf_login_txt  size=434 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 read_dnf_login_txt(void)

{
  FILE *pFVar1;
  undefined4 uVar2;
  int iVar3;
  size_t sVar4;
  char local_208 [256];
  char local_108 [256];
  uint local_8;
  
  local_8 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  pFVar1 = _fopen("DnfLogin.txt","r");
  if (pFVar1 == (FILE *)0x0) {
    uVar2 = 0;
  }
  else {
    _memset(local_108,0,0xff);
    _memset(local_208,0,0xff);
    iVar3 = FUN_006f3f68(local_108,0xff,pFVar1);
    if (iVar3 == 0) {
      FUN_006e940a(pFVar1);
      uVar2 = 0;
    }
    else {
      iVar3 = FUN_006f3f68(local_208,0xff,pFVar1);
      if (iVar3 == 0) {
        FUN_006e940a(pFVar1);
        uVar2 = 0;
      }
      else {
        sVar4 = _strcspn(local_108,"\r\n");
        if (0xfe < sVar4) {
          FUN_006e5127();
        }
        local_108[sVar4] = '\0';
        sVar4 = _strcspn(local_208,"\r\n");
        if (0xfe < sVar4) {
          FUN_006e5127();
        }
        local_208[sVar4] = '\0';
        _strncpy(&DAT_007ca204,local_108,0xb);
        DAT_007ca20f = 0;
        _strncpy(&DAT_007ca210,local_208,0x10);
        DAT_007ca220 = 0;
        FUN_006e940a(pFVar1);
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}


/* ==== 0068dfc0  net_login_connect_and_spawn_thread  size=365 ==== */

undefined4 net_login_connect_and_spawn_thread(void)

{
  char cVar1;
  void *_Dst;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  size_t _Size;
  int iVar5;
  
  net_wsa_startup();
  cVar1 = net_create_socket_or_fail(&DAT_007ca228,0x7ea);
  if (cVar1 == '\0') {
    Ordinal_3(DAT_007ca228);
    net_wsa_cleanup_wrapper();
    uVar3 = 0;
  }
  else {
    CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,net_socket_recv_thread_proc,DAT_007ca228,0,(LPDWORD)0x0);
    _Size = 0x25;
    _Dst = (void *)FUN_006f191d(0x25);
    if (_Dst == (void *)0x0) {
      uVar3 = 0;
    }
    else {
      _memset(_Dst,0,_Size);
      iVar5 = 0;
      iVar2 = net_packet_write_field(_Dst,_Size);
      iVar2 = iVar2 + iVar5;
      iVar5 = net_packet_write_field((int)_Dst + iVar2,0x14);
      iVar5 = iVar5 + iVar2;
      iVar2 = net_packet_write_bytes((int)_Dst + iVar5,&DAT_007ca204,0xc);
      iVar2 = iVar2 + iVar5;
      iVar5 = net_packet_write_bytes((int)_Dst + iVar2,&DAT_007ca210,0x11);
      iVar5 = iVar5 + iVar2;
      uVar3 = FUN_006a31b0(_Dst,_Size);
      FUN_006f1902(_Dst,uVar3,_Size,_Dst,iVar5);
      game_missing_asset_fallback_2(0x14);
      piVar4 = (int *)game_loop_get_context_642740();
      if (*piVar4 == 0) {
        MessageBoxA((HWND)0x0,&DAT_0077412c,&DAT_007740d4,0);
        uVar3 = 0;
      }
      else {
        piVar4 = (int *)game_loop_get_context_642740();
        if (*piVar4 == -1) {
          MessageBoxA((HWND)0x0,&DAT_00774108,&DAT_00774124,0);
          uVar3 = 0;
        }
        else {
          uVar3 = 1;
        }
      }
    }
  }
  return uVar3;
}


/* ==== 0068e170  net_get_adapters_info  size=793 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void net_get_adapters_info(void)

{
  int iVar1;
  undefined4 local_34;
  int local_30;
  int local_2c;
  undefined4 *local_28;
  char local_23;
  char local_22;
  char local_21;
  undefined4 *local_20;
  wchar_t local_1c [2];
  char local_18 [16];
  uint local_8;
  
  local_8 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  local_1c = (wchar_t  [2])0x302d3030;
  builtin_strncpy(local_18,"0-00-00-00-00",0xe);
  local_34 = 0;
  iVar1 = GetAdaptersInfo(0,&local_34);
  if (iVar1 == 0x6f) {
    local_28 = (undefined4 *)FUN_006f191d(local_34);
    if (local_28 == (undefined4 *)0x0) {
      FUN_006a3fe0(0x183ee,local_1c,0x12);
    }
    else {
      iVar1 = GetAdaptersInfo(local_28,&local_34);
      if (iVar1 == 0) {
        local_20 = local_28;
        local_21 = '\0';
        while ((local_20 != (undefined4 *)0x0 && (local_21 == '\0'))) {
          if (((local_20[0x68] == 6) || (local_20[0x68] == 0x47)) && (local_20[100] == 6)) {
            local_22 = '\x01';
            for (local_2c = 0; local_2c < 6; local_2c = local_2c + 1) {
              if (*(char *)((int)local_20 + local_2c + 0x194) != '\0') {
                local_22 = '\0';
                break;
              }
            }
            if (local_22 == '\0') {
              FID_conflict__swprintf
                        (local_1c,(wchar_t *)0x12,"%02X-%02X-%02X-%02X-%02X-%02X",
                         (uint)*(byte *)(local_20 + 0x65),(uint)*(byte *)((int)local_20 + 0x195),
                         (uint)*(byte *)((int)local_20 + 0x196),
                         (uint)*(byte *)((int)local_20 + 0x197),(uint)*(byte *)(local_20 + 0x66),
                         (uint)*(byte *)((int)local_20 + 0x199));
              local_21 = '\x01';
            }
          }
          local_20 = (undefined4 *)*local_20;
        }
        if (local_21 == '\0') {
          local_20 = local_28;
          while ((local_20 != (undefined4 *)0x0 && (local_21 == '\0'))) {
            if (local_20[100] == 6) {
              local_23 = '\x01';
              for (local_30 = 0; local_30 < 6; local_30 = local_30 + 1) {
                if (*(char *)((int)local_20 + local_30 + 0x194) != '\0') {
                  local_23 = '\0';
                  break;
                }
              }
              if (local_23 == '\0') {
                FID_conflict__swprintf
                          (local_1c,(wchar_t *)0x12,"%02X-%02X-%02X-%02X-%02X-%02X",
                           (uint)*(byte *)(local_20 + 0x65),(uint)*(byte *)((int)local_20 + 0x195),
                           (uint)*(byte *)((int)local_20 + 0x196),
                           (uint)*(byte *)((int)local_20 + 0x197),(uint)*(byte *)(local_20 + 0x66),
                           (uint)*(byte *)((int)local_20 + 0x199));
                local_21 = '\x01';
              }
            }
            local_20 = (undefined4 *)*local_20;
          }
        }
      }
      FUN_006f1902(local_28);
      FUN_006a3fe0(0x183ee,local_1c,0x12);
    }
  }
  else {
    FUN_006a3fe0(0x183ee,local_1c,0x12);
  }
  return;
}


/* ==== 006a3140  net_wsa_startup  size=86 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool net_wsa_startup(void)

{
  int iVar1;
  undefined1 local_198 [400];
  uint local_8;
  
  local_8 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  _memset(local_198,0,400);
  iVar1 = Ordinal_115(0x202,local_198);
  return iVar1 == 0;
}


/* ==== 006a31a0  net_wsa_cleanup_wrapper  size=12 ==== */

void net_wsa_cleanup_wrapper(void)

{
  Ordinal_116();
  return;
}


/* ==== 006a34a0  net_packet_write_field  size=34 ==== */

undefined4 net_packet_write_field(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = Ordinal_8(param_2);
  *param_1 = uVar1;
  return 4;
}


/* ==== 006a34d0  net_packet_write_bytes  size=28 ==== */

undefined4 net_packet_write_bytes(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_006e6bd0(param_1,param_2,param_3);
  return param_3;
}


/* ==== 006a34f0  FUN_006a34f0  size=43 ==== */

undefined4 FUN_006a34f0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = Ordinal_14(*param_2);
  *param_1 = uVar1;
  return 4;
}


/* ==== 006a3fe0  FUN_006a3fe0  size=203 ==== */

undefined4 FUN_006a3fe0(undefined4 param_1,undefined4 param_2,int param_3)

{
  size_t _Size;
  void *_Dst;
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  _Size = param_3 + 0x14;
  _Dst = (void *)FUN_006f191d(_Size);
  if (_Dst != (void *)0x0) {
    _memset(_Dst,0,_Size);
  }
  iVar1 = net_packet_write_field(_Dst,_Size);
  iVar2 = net_packet_write_field((int)_Dst + iVar1,param_1);
  iVar3 = net_packet_write_bytes((int)_Dst + iVar2 + iVar1,&DAT_007ca204,0xc);
  net_packet_write_bytes((int)_Dst + iVar3 + iVar2 + iVar1,param_2,param_3);
  uVar4 = FUN_006a31b0(_Dst,_Size);
  FUN_006f1902(_Dst);
  return uVar4;
}


/* ==== 006a55d0  net_create_socket_or_fail  size=199 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 net_create_socket_or_fail(int *param_1,undefined2 param_2)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  iVar2 = Ordinal_23(2,1,0);
  *param_1 = iVar2;
  if (*param_1 == -1) {
    MessageBoxA((HWND)0x0,"Failed to create socket\n",(LPCSTR)0x0,0);
    uVar3 = 0;
  }
  else {
    local_14 = 0;
    local_10 = 0;
    local_c = 0;
    local_18 = 2;
    uVar1 = Ordinal_9(param_2);
    local_18 = CONCAT22(uVar1,(undefined2)local_18);
    inet_pton(2,"47.99.69.51",&local_14);
    iVar2 = Ordinal_4(*param_1,&local_18,0x10);
    if (iVar2 == -1) {
      Ordinal_111();
      MessageBoxA((HWND)0x0,"Failed to connect to server\n",(LPCSTR)0x0,0);
      Ordinal_3(*param_1);
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
  }
  return uVar3;
}

