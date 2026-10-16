/* Auto-decompiled pseudo-code from game.exe / winmain_entry */
/* NOT original source. Bucketed by evidence (strings/imports/call-graph), not raw address. */

/* ==== 006e4b5e  crt_or_heap_alloc_helper  size=76 ==== */

void crt_or_heap_alloc_helper(int param_1)

{
  int iVar1;
  bad_array_new_length abStack_14 [8];
  undefined4 uStack_c;
  undefined1 *puStack_8;
  
  do {
    puStack_8 = (undefined1 *)param_1;
    uStack_c = 0x6e4b78;
    iVar1 = FUN_006f191d();
    if (iVar1 != 0) {
      return;
    }
    puStack_8 = (undefined1 *)param_1;
    uStack_c = 0x6e4b6b;
    iVar1 = FUN_006f6ad0();
  } while (iVar1 != 0);
  if (param_1 != -1) {
    FUN_006e5ca5();
    return;
  }
  puStack_8 = &stack0xfffffffc;
  std::bad_array_new_length::bad_array_new_length(abStack_14);
                    /* WARNING: Subroutine does not return */
  FUN_006e735d(abStack_14,&DAT_007b55cc);
}


/* ==== 006e5359  crt_scrt_common_main  size=326 ==== */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

undefined4 crt_scrt_common_main(void)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 local_24;
  void *local_14;
  
  cVar3 = ___scrt_initialize_crt(1);
  if (cVar3 != '\0') {
    bVar2 = false;
    uVar4 = ___scrt_acquire_startup_lock();
    if (DAT_007c884c != 1) {
      if (DAT_007c884c == 0) {
        DAT_007c884c = 1;
        iVar6 = __initterm_e(&DAT_0072b300,&DAT_0072b324);
        if (iVar6 != 0) {
          ExceptionList = local_14;
          return 0xff;
        }
        FUN_006f7a0e(&DAT_0072b290,&DAT_0072b2fc);
        DAT_007c884c = 2;
      }
      else {
        bVar2 = true;
      }
      ___scrt_release_startup_lock(uVar4);
      piVar7 = (int *)FUN_006e6032();
      if ((*piVar7 != 0) && (cVar3 = ___scrt_is_nonwritable_in_current_image(piVar7), cVar3 != '\0')
         ) {
        pcVar1 = (code *)*piVar7;
        guard_check_icall(0,2,0);
        (*pcVar1)();
      }
      piVar7 = (int *)FUN_006e6038();
      if ((*piVar7 != 0) && (cVar3 = ___scrt_is_nonwritable_in_current_image(piVar7), cVar3 != '\0')
         ) {
        __register_thread_local_exe_atexit_callback(*piVar7);
      }
      uVar5 = FUN_006e5e5a();
      uVar8 = __get_narrow_winmain_command_line();
      uVar8 = WinMain(0x400000,0,uVar8,uVar5);
      cVar3 = FUN_006e5e8f();
      if (cVar3 != '\0') {
        if (!bVar2) {
          FUN_006f63c8();
        }
        ___scrt_uninitialize_crt(1,0);
        ExceptionList = local_14;
        return uVar8;
      }
      FUN_006f6413(uVar8);
                    /* WARNING: Subroutine does not return */
      FUN_006f63d7(local_24);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_006e5d45(7);
}


/* ==== 006e54d5  entry  size=10 ==== */

void entry(void)

{
  ___security_init_cookie();
  crt_scrt_common_main();
  return;
}


/* ==== 006f79bb  __get_narrow_winmain_command_line  size=83 ==== */

/* Library Function - Single Match
    __get_narrow_winmain_command_line
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

byte * __get_narrow_winmain_command_line(void)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  
  ___acrt_initialize_multibyte();
  pbVar4 = DAT_007c9318;
  if (DAT_007c9318 == (byte *)0x0) {
    pbVar4 = &DAT_007c8da8;
  }
  bVar1 = false;
  do {
    bVar2 = *pbVar4;
    if (bVar2 < 0x21) {
      if (bVar2 == 0) {
        return pbVar4;
      }
      if (!bVar1) {
        do {
          if (0x20 < bVar2) {
            return pbVar4;
          }
          pbVar4 = pbVar4 + 1;
          bVar2 = *pbVar4;
        } while (bVar2 != 0);
        return pbVar4;
      }
    }
    if (bVar2 == 0x22) {
      bVar1 = !bVar1;
    }
    iVar3 = __ismbblead((uint)bVar2);
    if (iVar3 != 0) {
      pbVar4 = pbVar4 + 1;
    }
    pbVar4 = pbVar4 + 1;
  } while( true );
}

