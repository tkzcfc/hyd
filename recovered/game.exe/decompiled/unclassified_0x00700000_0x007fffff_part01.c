/* Auto-decompiled pseudo-code from game.exe / unclassified_0x00700000_0x007fffff part 1/3 */
/* NOT original source. Bucketed by evidence (strings/imports/call-graph), not raw address. */

/* ==== 0070003a  FUN_0070003a  size=49 ==== */

undefined4 FUN_0070003a(void)

{
  int iVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  if (DAT_007c92e0 != 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)(&DAT_007c9178 + DAT_007c92e0 * 0x18);
    iVar1 = DAT_007c92e0;
    do {
      DeleteCriticalSection(lpCriticalSection);
      DAT_007c92e0 = DAT_007c92e0 + -1;
      lpCriticalSection = lpCriticalSection + -1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return 1;
}


/* ==== 00700082  FUN_00700082  size=18 ==== */

uint FUN_00700082(void)

{
  return *(uint *)((int)ProcessEnvironmentBlock + 0x68) >> 8 & 0xffffff01;
}


/* ==== 00700094  FUN_00700094  size=19 ==== */

uint FUN_00700094(void)

{
  return *(uint *)(*(int *)((int)ProcessEnvironmentBlock + 0x10) + 8) >> 0x1f;
}


/* ==== 007000a7  FUN_007000a7  size=39 ==== */

bool FUN_007000a7(void)

{
  char cVar1;
  int local_8;
  
  local_8 = 0;
  cVar1 = FUN_00700094();
  if (cVar1 == '\0') {
    FUN_006fdd14(&local_8);
  }
  return local_8 != 1;
}


/* ==== 007000ce  FUN_007000ce  size=16 ==== */

ushort FUN_007000ce(undefined4 param_1,undefined4 param_2)

{
  return param_2._2_2_ & 0x8000;
}


/* ==== 0070012f  FUN_0070012f  size=183 ==== */

uint FUN_0070012f(int param_1,uint param_2)

{
  uint uVar1;
  undefined1 in_ZF;
  short in_FPUControlWord;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 fVar2;
  
  uVar1 = __fload_withFB();
  if ((bool)in_ZF) {
    if (((uVar1 & 0xfffff) == 0) && (param_1 == 0)) {
LAB_007001ba:
      uVar1 = 1;
    }
    else {
      uVar1 = FUN_007068ac();
    }
    if (DAT_007c9330 == 0) {
      uVar1 = __startOneArgErrorHandling();
      return uVar1;
    }
  }
  else {
    fVar2 = extraout_ST0;
    if (in_FPUControlWord != 0x27f) {
      uVar1 = FUN_00706895();
      fVar2 = extraout_ST0_00;
    }
    if (uVar1 < 0x3ff00000) {
      fpatan(SQRT(((float10)1 - fVar2) * ((float10)1 + fVar2)),fVar2);
    }
    else {
      if ((0x3ff00000 < uVar1) || ((param_2 & 0xfffff) != 0 || param_1 != 0)) goto LAB_007001ba;
      uVar1 = 0;
    }
    if (DAT_007c9330 == 0) {
      uVar1 = __math_exit();
      return uVar1;
    }
  }
  return uVar1;
}


/* ==== 007001e6  FUN_007001e6  size=89 ==== */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

uint FUN_007001e6(undefined4 *param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 local_14;
  
  ___acrt_lock(*param_1);
  bVar1 = (byte)DAT_007c5940 & 0x1f;
  uVar2 = DAT_007c92ec ^ DAT_007c5940;
  FUN_00700242();
  ExceptionList = local_14;
  return uVar2 >> bVar1 | uVar2 << 0x20 - bVar1;
}


/* ==== 00700242  FUN_00700242  size=12 ==== */

void FUN_00700242(void)

{
  int unaff_EBP;
  
  ___acrt_unlock(**(undefined4 **)(unaff_EBP + 0x10));
  return;
}


/* ==== 0070024e  get_global_action_nolock  size=66 ==== */

/* Library Function - Single Match
    void (__cdecl** __cdecl get_global_action_nolock(int))(int)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

_func_void_int ** __cdecl get_global_action_nolock(int param_1)

{
  if (param_1 == 2) {
    return (_func_void_int **)&DAT_007c92e4;
  }
  if (param_1 != 6) {
    if (param_1 == 0xf) {
      return (_func_void_int **)&DAT_007c92f0;
    }
    if (param_1 == 0x15) {
      return (_func_void_int **)&DAT_007c92e8;
    }
    if (param_1 != 0x16) {
      return (_func_void_int **)0x0;
    }
  }
  return (_func_void_int **)&DAT_007c92ec;
}


/* ==== 00700290  siglookup  size=40 ==== */

/* Library Function - Single Match
    struct __crt_signal_action_t * __cdecl siglookup(int,struct __crt_signal_action_t * const)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

__crt_signal_action_t * __cdecl siglookup(int param_1,__crt_signal_action_t *param_2)

{
  __crt_signal_action_t *p_Var1;
  
  p_Var1 = param_2 + 0x90;
  while( true ) {
    if (param_2 == p_Var1) {
      return (__crt_signal_action_t *)0x0;
    }
    if (*(int *)(param_2 + 4) == param_1) break;
    param_2 = param_2 + 0xc;
  }
  return param_2;
}


/* ==== 007002df  FUN_007002df  size=30 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007002df(undefined4 param_1)

{
  _DAT_007c92e4 = param_1;
  _DAT_007c92e8 = param_1;
  DAT_007c92ec = param_1;
  _DAT_007c92f0 = param_1;
  return;
}


/* ==== 007002fd  FUN_007002fd  size=463 ==== */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

undefined4 FUN_007002fd(int param_1)

{
  bool bVar1;
  __crt_signal_action_t *p_Var2;
  undefined4 *puVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 local_38;
  int local_34;
  void *local_14;
  
  piVar7 = (int *)0x0;
  local_38 = 0;
  bVar1 = true;
  if (param_1 < 0xc) {
    if (param_1 != 0xb) {
      if (param_1 == 2) goto LAB_00700386;
      if (param_1 != 4) {
        if (param_1 == 6) goto LAB_00700386;
        if (param_1 != 8) goto LAB_00700359;
      }
    }
    piVar7 = (int *)FUN_006f8ab6();
    if (piVar7 == (int *)0x0) {
      ExceptionList = local_14;
      return 0xffffffff;
    }
    p_Var2 = siglookup(param_1,(__crt_signal_action_t *)*piVar7);
    if (p_Var2 == (__crt_signal_action_t *)0x0) {
LAB_00700359:
      puVar3 = (undefined4 *)FUN_006f390a();
      *puVar3 = 0x16;
      FUN_006e8c2f();
      ExceptionList = local_14;
      return 0xffffffff;
    }
    p_Var2 = p_Var2 + 8;
    bVar1 = false;
  }
  else {
    if (((param_1 != 0xf) && (param_1 != 0x15)) && (param_1 != 0x16)) goto LAB_00700359;
LAB_00700386:
    p_Var2 = (__crt_signal_action_t *)get_global_action_nolock(param_1);
  }
  local_34 = 0;
  if (bVar1) {
    ___acrt_lock(3);
  }
  pcVar4 = *(code **)p_Var2;
  if (bVar1) {
    pcVar4 = (code *)FUN_006f6125(pcVar4);
  }
  if (pcVar4 == (code *)0x1) goto LAB_00700447;
  if (pcVar4 == (code *)0x0) {
    if (bVar1) {
      ___acrt_unlock(3);
    }
                    /* WARNING: Subroutine does not return */
    FUN_006f63d7(3);
  }
  if (((param_1 == 8) || (param_1 == 0xb)) || (param_1 == 4)) {
    local_34 = piVar7[1];
    piVar7[1] = 0;
    if (param_1 == 8) {
      iVar5 = FUN_006f8965();
      local_38 = *(undefined4 *)(iVar5 + 8);
      iVar5 = FUN_006f8965();
      *(undefined4 *)(iVar5 + 8) = 0x8c;
      goto LAB_00700416;
    }
  }
  else {
LAB_00700416:
    if (param_1 == 8) {
      iVar5 = *piVar7;
      for (iVar6 = iVar5 + 0x24; iVar6 != iVar5 + 0x90; iVar6 = iVar6 + 0xc) {
        *(undefined4 *)(iVar6 + 8) = 0;
      }
      goto LAB_00700447;
    }
  }
  *(undefined4 *)p_Var2 = DAT_007c5940;
LAB_00700447:
  FUN_00700487();
  if (pcVar4 != (code *)0x1) {
    if (param_1 == 8) {
      iVar5 = FUN_006f8965();
      guard_check_icall(8,*(undefined4 *)(iVar5 + 8));
      (*pcVar4)();
    }
    else {
      guard_check_icall(param_1);
      (*pcVar4)();
      if ((param_1 != 0xb) && (param_1 != 4)) {
        ExceptionList = local_14;
        return 0;
      }
    }
    piVar7[1] = local_34;
    if (param_1 == 8) {
      iVar5 = FUN_006f8965();
      *(undefined4 *)(iVar5 + 8) = local_38;
    }
  }
  ExceptionList = local_14;
  return 0;
}


/* ==== 00700487  FUN_00700487  size=16 ==== */

void FUN_00700487(void)

{
  char unaff_BL;
  
  if (unaff_BL != '\0') {
    ___acrt_unlock(3);
  }
  return;
}


/* ==== 007004ef  FUN_007004ef  size=24 ==== */

uint FUN_007004ef(uint param_1,uint param_2)

{
  if (param_1 < param_2) {
    return 0xffffffff;
  }
  return (uint)(param_2 < param_1);
}


/* ==== 00700507  FUN_00700507  size=198 ==== */

int FUN_00700507(short *param_1,
                __crt_win32_buffer<wchar_t,__crt_win32_buffer_internal_dynamic_resizing> *param_2,
                undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  int *piVar4;
  
  if (param_1 == (short *)0x0) {
    __crt_win32_buffer<wchar_t,__crt_win32_buffer_internal_dynamic_resizing>::_deallocate(param_2);
    *(undefined4 *)(param_2 + 8) = 0;
    *(undefined4 *)(param_2 + 0xc) = 0;
  }
  else {
    if (*param_1 != 0) {
      uVar2 = FUN_00701686(param_4,0,param_1,0xffffffff,0,0,0,0);
      if (uVar2 == 0) {
        DVar3 = GetLastError();
        ___acrt_errno_map_os_error(DVar3);
        piVar4 = (int *)FUN_006f390a();
        return *piVar4;
      }
      if ((*(uint *)(param_2 + 0xc) < uVar2) && (iVar1 = allocate(uVar2), iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = FUN_00700aa5(param_4,param_1,*(undefined4 *)(param_2 + 8),
                           *(undefined4 *)(param_2 + 0xc));
      if (iVar1 == 0) {
        DVar3 = GetLastError();
        ___acrt_errno_map_os_error(DVar3);
        piVar4 = (int *)FUN_006f390a();
        return *piVar4;
      }
      *(int *)(param_2 + 0x10) = iVar1 + -1;
      return 0;
    }
    if ((*(int *)(param_2 + 0xc) == 0) && (iVar1 = allocate(1), iVar1 != 0)) {
      return iVar1;
    }
    **(undefined1 **)(param_2 + 8) = 0;
  }
  *(undefined4 *)(param_2 + 0x10) = 0;
  return 0;
}


/* ==== 007005cd  FUN_007005cd  size=380 ==== */

/* WARNING: Type propagation algorithm not settling */

int FUN_007005cd(undefined4 *param_1,int *param_2)

{
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *local_24;
  undefined4 *local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  char *local_10;
  char *local_c;
  undefined4 local_8;
  
  if (param_2 == (int *)0x0) {
    puVar3 = (undefined4 *)FUN_006f390a();
    iVar5 = 0x16;
    *puVar3 = 0x16;
    FUN_006e8c2f();
  }
  else {
    *param_2 = 0;
    local_1c = 0;
    local_20 = (undefined4 *)0x0;
    local_24 = (undefined4 *)0x0;
    pcVar4 = (char *)*param_1;
    puVar3 = local_24;
    while (local_24 = puVar3, pcVar4 != (char *)0x0) {
      uVar2 = (uint)local_8 >> 0x18;
      local_8 = CONCAT13((char)uVar2,0x3f2a);
      pcVar4 = _strpbrk(pcVar4,(char *)&local_8);
      if (pcVar4 == (char *)0x0) {
        iVar5 = FUN_0070074a(*param_1,0,0,&local_24);
      }
      else {
        iVar5 = FUN_007007fb(*param_1,pcVar4,&local_24);
      }
      if (iVar5 != 0) goto LAB_007006b4;
      param_1 = param_1 + 1;
      puVar3 = local_24;
      pcVar4 = (char *)*param_1;
    }
    iVar5 = ((int)local_20 - (int)puVar3 >> 2) + 1;
    local_c = (char *)0x0;
    for (puVar7 = puVar3; puVar7 != local_20; puVar7 = puVar7 + 1) {
      pcVar4 = (char *)*puVar7;
      local_10 = pcVar4 + 1;
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      local_c = pcVar4 + (int)(local_c + (1 - (int)local_10));
    }
    iVar6 = ___acrt_allocate_buffer_for_argv(iVar5,local_c,1);
    puVar7 = local_20;
    if (iVar6 == 0) {
      FUN_006f9a4d(0);
      iVar5 = -1;
LAB_007006b4:
      ~argument_list<>();
    }
    else {
      local_8 = iVar6 + iVar5 * 4;
      local_14 = local_8;
      if (puVar3 != local_20) {
        local_18 = iVar6 - (int)puVar3;
        do {
          local_10 = (char *)*puVar3;
          pcVar4 = local_10 + 1;
          do {
            cVar1 = *local_10;
            local_10 = local_10 + 1;
          } while (cVar1 != '\0');
          local_10 = local_10 + (1 - (int)pcVar4);
          iVar5 = FUN_00708b5b(local_8,local_c + (local_14 - local_8),*puVar3,local_10);
          if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
            __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          *(int *)(local_18 + (int)puVar3) = local_8;
          puVar3 = puVar3 + 1;
          local_8 = local_8 + (int)local_10;
        } while (puVar3 != puVar7);
      }
      *param_2 = iVar6;
      FUN_006f9a4d(0);
      ~argument_list<>();
      iVar5 = 0;
    }
  }
  return iVar5;
}


/* ==== 0070074a  FUN_0070074a  size=176 ==== */

int FUN_0070074a(char *param_1,undefined4 param_2,uint param_3,int param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  
  pcVar4 = param_1;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  pcVar4 = pcVar4 + (1 - (int)(param_1 + 1));
  if ((char *)~param_3 < pcVar4) {
    iVar3 = 0xc;
  }
  else {
    pcVar5 = pcVar4 + param_3 + 1;
    iVar2 = __calloc_base(pcVar5,1);
    if (param_3 != 0) {
      iVar3 = FUN_00708b5b(iVar2,pcVar5,param_2,param_3);
      if (iVar3 != 0) goto LAB_007007ee;
    }
    iVar3 = FUN_00708b5b(iVar2 + param_3,(int)pcVar5 - param_3,param_1,pcVar4);
    if (iVar3 != 0) {
LAB_007007ee:
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    iVar3 = expand_if_necessary();
    if (iVar3 == 0) {
      **(int **)(param_4 + 4) = iVar2;
      iVar3 = 0;
      *(int *)(param_4 + 4) = *(int *)(param_4 + 4) + 4;
    }
    else {
      FUN_006f9a4d(iVar2);
    }
    FUN_006f9a4d(0);
  }
  return iVar3;
}


/* ==== 007007fb  FUN_007007fb  size=645 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_007007fb(uchar *param_1,uchar *param_2,int *param_3)

{
  uchar uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  HANDLE hFindFile;
  int iVar5;
  char *pcVar6;
  BOOL BVar7;
  undefined4 local_290;
  undefined4 local_28c;
  uint local_288;
  undefined4 local_284;
  undefined4 local_280;
  char local_27c;
  undefined4 local_278;
  undefined4 local_274;
  uint local_270;
  undefined4 local_26c;
  undefined4 local_268;
  char local_264;
  int *local_260;
  uchar local_259;
  _WIN32_FIND_DATAW local_258;
  uint local_8;
  
  local_8 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  local_260 = param_3;
  for (; (((param_2 != param_1 && (uVar1 = *param_2, uVar1 != '/')) && (uVar1 != '\\')) &&
         (uVar1 != ':')); param_2 = __mbsdec(param_1,param_2)) {
  }
  local_259 = *param_2;
  if ((local_259 == ':') && (param_2 != param_1 + 1)) {
    iVar3 = FUN_0070074a(param_1,0,0,local_260);
  }
  else {
    if ((local_259 == '/') || ((local_259 == '\\' || (bVar2 = 0, local_259 == ':')))) {
      bVar2 = 1;
    }
    local_290 = 0;
    local_28c = 0;
    local_288 = 0;
    local_284 = 0;
    local_280 = 0;
    local_27c = '\0';
    uVar4 = __acrt_get_utf8_acp_compatibility_codepage();
    iVar3 = __acrt_mbs_to_wcs_cp<__crt_win32_buffer_internal_dynamic_resizing>
                      ((char *)param_1,
                       (__crt_win32_buffer<wchar_t,__crt_win32_buffer_internal_dynamic_resizing> *)
                       &local_290,uVar4);
    hFindFile = FindFirstFileExW((LPCWSTR)(~-(uint)(iVar3 != 0) & local_288),FindExInfoStandard,
                                 &local_258,FindExSearchNameMatch,(LPVOID)0x0,0);
    if (hFindFile == (HANDLE)0xffffffff) {
      iVar3 = FUN_0070074a(param_1,0,0,local_260);
      if (local_27c != '\0') {
        FUN_006f9a4d(local_288);
      }
    }
    else {
      iVar3 = local_260[1] - *local_260 >> 2;
      do {
        local_278 = 0;
        local_274 = 0;
        local_270 = 0;
        local_26c = 0;
        local_268 = 0;
        local_264 = '\0';
        uVar4 = __acrt_get_utf8_acp_compatibility_codepage();
        iVar5 = FUN_00700507(local_258.cFileName,&local_278,&local_259,uVar4);
        pcVar6 = (char *)(~-(uint)(iVar5 != 0) & local_270);
        if (((*pcVar6 != '.') ||
            ((pcVar6[1] != '\0' && ((pcVar6[1] != '.' || (pcVar6[2] != '\0')))))) &&
           (iVar5 = FUN_0070074a(pcVar6,param_1,-(uint)bVar2 & (uint)(param_2 + (1 - (int)param_1)),
                                 local_260), iVar5 != 0)) {
          if (local_264 != '\0') {
            FUN_006f9a4d(local_270);
          }
          FindClose(hFindFile);
          if (local_27c == '\0') {
            return iVar5;
          }
          FUN_006f9a4d(local_288);
          return iVar5;
        }
        if (local_264 != '\0') {
          FUN_006f9a4d(local_270);
        }
        BVar7 = FindNextFileW(hFindFile,&local_258);
      } while (BVar7 != 0);
      iVar5 = local_260[1] - *local_260 >> 2;
      if (iVar3 != iVar5) {
        _qsort((void *)(*local_260 + iVar3 * 4),iVar5 - iVar3,4,FUN_007004ef);
      }
      FindClose(hFindFile);
      if (local_27c != '\0') {
        FUN_006f9a4d(local_288);
      }
      iVar3 = 0;
    }
  }
  return iVar3;
}


/* ==== 00700a80  ~argument_list<>  size=37 ==== */

/* Library Function - Multiple Matches With Same Base Name
    public: __thiscall `anonymous namespace'::argument_list<char>::~argument_list<char>(void)
    public: __thiscall `anonymous namespace'::argument_list<char>::~argument_list<char>(void)
    public: __thiscall `anonymous namespace'::argument_list<wchar_t>::~argument_list<wchar_t>(void)
    public: __thiscall `anonymous namespace'::argument_list<wchar_t>::~argument_list<wchar_t>(void)
   
   Library: Visual Studio 2015 Release */

void ~argument_list<>(void)

{
  undefined4 *in_ECX;
  undefined4 *puVar1;
  
  for (puVar1 = (undefined4 *)*in_ECX; puVar1 != (undefined4 *)in_ECX[1]; puVar1 = puVar1 + 1) {
    FUN_006f9a4d(*puVar1);
  }
  FUN_006f9a4d(*in_ECX);
  return;
}


/* ==== 00700aa5  FUN_00700aa5  size=36 ==== */

void FUN_00700aa5(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00701686(param_1,0,param_2,0xffffffff,param_3,param_4,0,0);
  return;
}


/* ==== 00700ac9  allocate  size=60 ==== */

/* Library Function - Multiple Matches With Same Base Name
    public: int __thiscall __crt_win32_buffer<char,struct
   __crt_win32_buffer_internal_dynamic_resizing>::allocate(unsigned int)
    public: int __thiscall __crt_win32_buffer<char,struct
   __crt_win32_buffer_public_dynamic_resizing>::allocate(unsigned int)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int allocate(uint param_1)

{
  int iVar1;
  __crt_win32_buffer<wchar_t,__crt_win32_buffer_internal_dynamic_resizing> *in_ECX;
  
  __crt_win32_buffer<wchar_t,__crt_win32_buffer_internal_dynamic_resizing>::_deallocate(in_ECX);
  iVar1 = __crt_win32_buffer_internal_dynamic_resizing::allocate
                    ((void **)(in_ECX + 8),param_1,(__crt_win32_buffer_empty_debug_info *)in_ECX);
  if (iVar1 == 0) {
    in_ECX[0x14] = (__crt_win32_buffer<wchar_t,__crt_win32_buffer_internal_dynamic_resizing>)0x1;
    iVar1 = 0;
    *(uint *)(in_ECX + 0xc) = param_1;
  }
  else {
    *(undefined4 *)(in_ECX + 0xc) = 0;
    in_ECX[0x14] = (__crt_win32_buffer<wchar_t,__crt_win32_buffer_internal_dynamic_resizing>)0x0;
  }
  return iVar1;
}


/* ==== 00700b05  expand_if_necessary  size=135 ==== */

/* Library Function - Multiple Matches With Same Base Name
    private: int __thiscall `anonymous namespace'::argument_list<char>::expand_if_necessary(void)
    private: int __thiscall `anonymous namespace'::argument_list<wchar_t>::expand_if_necessary(void)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined4 expand_if_necessary(void)

{
  undefined4 uVar1;
  int iVar2;
  int *in_ECX;
  uint uVar3;
  
  if (in_ECX[1] == in_ECX[2]) {
    if (*in_ECX == 0) {
      iVar2 = __calloc_base(4,4);
      *in_ECX = iVar2;
      FUN_006f9a4d(0);
      iVar2 = *in_ECX;
      if (iVar2 != 0) {
        in_ECX[1] = iVar2;
        in_ECX[2] = iVar2 + 0x10;
        goto LAB_00700b13;
      }
    }
    else {
      uVar3 = in_ECX[2] - *in_ECX >> 2;
      if (uVar3 < 0x80000000) {
        iVar2 = __recalloc_base(*in_ECX,uVar3 * 2,4);
        if (iVar2 == 0) {
          uVar1 = 0xc;
        }
        else {
          *in_ECX = iVar2;
          in_ECX[1] = iVar2 + uVar3 * 4;
          in_ECX[2] = iVar2 + uVar3 * 8;
          uVar1 = 0;
        }
        FUN_006f9a4d(0);
        return uVar1;
      }
    }
    uVar1 = 0xc;
  }
  else {
LAB_00700b13:
    uVar1 = 0;
  }
  return uVar1;
}


/* ==== 00700b8c  FUN_00700b8c  size=11 ==== */

void FUN_00700b8c(void)

{
  FUN_007005cd();
  return;
}


/* ==== 00700b97  FUN_00700b97  size=194 ==== */

int FUN_00700b97(short *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  int *piVar4;
  
  if (param_1 == (short *)0x0) {
    FUN_00700c80();
    iVar1 = 0;
  }
  else if (*param_1 == 0) {
    if ((*(int *)(param_2 + 0xc) != 0) || (iVar1 = allocate(1), iVar1 == 0)) {
      **(undefined1 **)(param_2 + 8) = 0;
      iVar1 = 0;
      *(undefined4 *)(param_2 + 0x10) = 0;
    }
  }
  else {
    uVar2 = FUN_00701686(param_4,0,param_1,0xffffffff,0,0,0,0);
    if (uVar2 == 0) {
      DVar3 = GetLastError();
      ___acrt_errno_map_os_error(DVar3);
      piVar4 = (int *)FUN_006f390a();
      iVar1 = *piVar4;
    }
    else if ((uVar2 <= *(uint *)(param_2 + 0xc)) || (iVar1 = allocate(uVar2), iVar1 == 0)) {
      iVar1 = FUN_00700aa5(param_4,param_1,*(undefined4 *)(param_2 + 8),
                           *(undefined4 *)(param_2 + 0xc));
      if (iVar1 == 0) {
        DVar3 = GetLastError();
        ___acrt_errno_map_os_error(DVar3);
        piVar4 = (int *)FUN_006f390a();
        iVar1 = *piVar4;
      }
      else {
        *(int *)(param_2 + 0x10) = iVar1 + -1;
        iVar1 = 0;
      }
    }
  }
  return iVar1;
}


/* ==== 00700c59  allocate  size=39 ==== */

/* Library Function - Multiple Matches With Same Base Name
    public: int __thiscall __crt_win32_buffer<char,struct
   __crt_win32_buffer_no_resizing>::allocate(unsigned int)
    public: int __thiscall __crt_win32_buffer<wchar_t,struct
   __crt_win32_buffer_no_resizing>::allocate(unsigned int)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

undefined4 allocate(void)

{
  undefined4 *puVar1;
  int in_ECX;
  
  if (*(char *)(in_ECX + 0x14) != '\0') {
    *(undefined1 *)(in_ECX + 0x14) = 0;
  }
  puVar1 = (undefined4 *)FUN_006f390a();
  *puVar1 = 0x22;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined1 *)(in_ECX + 0x14) = 0;
  return 0x22;
}


/* ==== 00700c80  FUN_00700c80  size=20 ==== */

void FUN_00700c80(void)

{
  int in_ECX;
  
  if (*(char *)(in_ECX + 0x14) != '\0') {
    *(undefined1 *)(in_ECX + 0x14) = 0;
  }
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  return;
}


/* ==== 00700d35  operator()<<lambda_ceb1ee4838e85a9d631eb091e2fbe199>,<lambda_ae742caa10f662c28703da3d2ea5e57e>&,<lambda_cd08b5d6af4937fe54fc07d0c9bf6b37>_>  size=65 ==== */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    public: void __thiscall __crt_seh_guarded_call<void>::operator()<class
   <lambda_ceb1ee4838e85a9d631eb091e2fbe199>,class <lambda_ae742caa10f662c28703da3d2ea5e57e> &,class
   <lambda_cd08b5d6af4937fe54fc07d0c9bf6b37> >(class <lambda_ceb1ee4838e85a9d631eb091e2fbe199>
   &&,class <lambda_ae742caa10f662c28703da3d2ea5e57e> &,class
   <lambda_cd08b5d6af4937fe54fc07d0c9bf6b37> &&)
   
   Library: Visual Studio 2019 Release */

void __thiscall
__crt_seh_guarded_call<void>::
operator()<<lambda_ceb1ee4838e85a9d631eb091e2fbe199>,<lambda_ae742caa10f662c28703da3d2ea5e57e>&,<lambda_cd08b5d6af4937fe54fc07d0c9bf6b37>_>
          (__crt_seh_guarded_call<void> *this,<lambda_ceb1ee4838e85a9d631eb091e2fbe199> *param_1,
          <lambda_ae742caa10f662c28703da3d2ea5e57e> *param_2,
          <lambda_cd08b5d6af4937fe54fc07d0c9bf6b37> *param_3)

{
  undefined4 local_14;
  
  ___acrt_lock(*(undefined4 *)param_1);
  <lambda_ae742caa10f662c28703da3d2ea5e57e>::operator()(param_2);
  FUN_00700d76();
  ExceptionList = local_14;
  return;
}


/* ==== 00700d76  FUN_00700d76  size=12 ==== */

void FUN_00700d76(void)

{
  int unaff_EBP;
  
  ___acrt_unlock(**(undefined4 **)(unaff_EBP + 0x10));
  return;
}


/* ==== 00700d82  operator()  size=131 ==== */

/* Library Function - Single Match
    public: void __thiscall <lambda_ae742caa10f662c28703da3d2ea5e57e>::operator()(void)const 
   
   Library: Visual Studio 2019 Release */

void __thiscall
<lambda_ae742caa10f662c28703da3d2ea5e57e>::operator()
          (<lambda_ae742caa10f662c28703da3d2ea5e57e> *this)

{
  int iVar1;
  
  _memcpy_s(DAT_007c92f4,0x101,(void *)(*(int *)(**(int **)this + 0x48) + 0x18),0x101);
  _memcpy_s(DAT_007c92f8,0x100,(void *)(*(int *)(**(int **)this + 0x48) + 0x119),0x100);
  LOCK();
  iVar1 = **(int **)**(undefined4 **)(this + 4) + -1;
  **(int **)**(undefined4 **)(this + 4) = iVar1;
  UNLOCK();
  if ((iVar1 == 0) && (*(undefined **)**(undefined4 **)(this + 4) != &DAT_007c5e50)) {
    FUN_006f9a4d(*(undefined4 *)**(undefined4 **)(this + 4));
  }
  *(undefined4 *)**(undefined4 **)(this + 4) = *(undefined4 *)(**(int **)this + 0x48);
  LOCK();
  **(int **)(**(int **)this + 0x48) = **(int **)(**(int **)this + 0x48) + 1;
  UNLOCK();
  return;
}


/* ==== 00700e05  CPtoLocaleName  size=62 ==== */

/* Library Function - Single Match
    wchar_t const * __cdecl CPtoLocaleName(int)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

wchar_t * __cdecl CPtoLocaleName(int param_1)

{
  if (param_1 == 0x3a4) {
    return L"ja-JP";
  }
  if (param_1 == 0x3a8) {
    return L"zh-CN";
  }
  if (param_1 == 0x3b5) {
    return L"ko-KR";
  }
  if (param_1 != 0x3b6) {
    return (wchar_t *)0x0;
  }
  return L"zh-TW";
}


/* ==== 00700e43  getSystemCP  size=113 ==== */

/* Library Function - Single Match
    int __cdecl getSystemCP(int)
   
   Library: Visual Studio 2019 Release */

int __cdecl getSystemCP(int param_1)

{
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_8;
  
  FUN_006ee0ac(0);
  DAT_007c9300 = 0;
  if (param_1 == -2) {
    DAT_007c9300 = 1;
    param_1 = GetOEMCP();
  }
  else if (param_1 == -3) {
    DAT_007c9300 = 1;
    param_1 = GetACP();
  }
  else if (param_1 == -4) {
    DAT_007c9300 = 1;
    param_1 = *(UINT *)(local_10 + 8);
  }
  if (local_8 != '\0') {
    *(uint *)(local_14 + 0x350) = *(uint *)(local_14 + 0x350) & 0xfffffffd;
  }
  return param_1;
}


/* ==== 00700eb4  FUN_00700eb4  size=99 ==== */

void FUN_00700eb4(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  _memset((void *)(param_1 + 0x18),0,0x101);
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x21c) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  iVar1 = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  do {
    *(undefined1 *)(param_1 + 0x18 + iVar1) = (&DAT_007c5e68)[iVar1];
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x101);
  do {
    *(undefined1 *)(param_1 + 0x119 + iVar2) = (&DAT_007c5f69)[iVar2];
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x100);
  return;
}


/* ==== 00700f17  FUN_00700f17  size=421 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00700f17(int param_1)

{
  char cVar1;
  byte bVar2;
  BOOL BVar3;
  uint uVar4;
  byte *pbVar5;
  BYTE *pBVar6;
  int iVar7;
  int iVar8;
  _cpinfo local_71c;
  ushort local_708 [512];
  byte local_308 [256];
  byte local_208 [256];
  undefined1 local_108 [256];
  uint local_8;
  
  local_8 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  if ((*(int *)(param_1 + 4) == 0xfde9) ||
     (BVar3 = GetCPInfo(*(UINT *)(param_1 + 4),&local_71c), BVar3 == 0)) {
    pbVar5 = (byte *)(param_1 + 0x19);
    do {
      if (pbVar5 + (-0x5a - param_1) < (byte *)0x1a) {
        *pbVar5 = *pbVar5 | 0x10;
        cVar1 = (char)pbVar5 + ' ';
LAB_00701093:
        bVar2 = cVar1 + (char)(-0x19 - param_1);
      }
      else {
        if (pbVar5 + (-0x7a - param_1) < (byte *)0x1a) {
          *pbVar5 = *pbVar5 | 0x20;
          cVar1 = (char)pbVar5 + -0x20;
          goto LAB_00701093;
        }
        bVar2 = 0;
      }
      pbVar5[0x100] = bVar2;
      pbVar5 = pbVar5 + 1;
    } while (pbVar5 + (-0x19 - param_1) < (byte *)0x100);
  }
  else {
    iVar8 = 0x100;
    uVar4 = 0;
    do {
      local_108[uVar4] = (char)uVar4;
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x100);
    pBVar6 = local_71c.LeadByte;
    local_108[0] = 0x20;
    while (local_71c.LeadByte[0] != 0) {
      bVar2 = pBVar6[1];
      for (uVar4 = (uint)local_71c.LeadByte[0]; (uVar4 <= bVar2 && (uVar4 < 0x100));
          uVar4 = uVar4 + 1) {
        local_108[uVar4] = 0x20;
      }
      pBVar6 = pBVar6 + 2;
      local_71c.LeadByte[0] = *pBVar6;
    }
    FUN_0070240c(0,1,local_108,0x100,local_708,*(undefined4 *)(param_1 + 4),0);
    ___acrt_LCMapStringA
              (0,*(undefined4 *)(param_1 + 0x21c),0x100,local_108,0x100,local_208,0x100,
               *(undefined4 *)(param_1 + 4),0);
    ___acrt_LCMapStringA
              (0,*(undefined4 *)(param_1 + 0x21c),0x200,local_108,0x100,local_308,0x100,
               *(undefined4 *)(param_1 + 4),0);
    pbVar5 = (byte *)(param_1 + 0x19);
    iVar7 = 0;
    do {
      if ((local_708[iVar7] & 1) == 0) {
        if ((local_708[iVar7] & 2) == 0) {
          bVar2 = 0;
        }
        else {
          *pbVar5 = *pbVar5 | 0x20;
          bVar2 = local_308[iVar7];
        }
      }
      else {
        *pbVar5 = *pbVar5 | 0x10;
        bVar2 = local_208[iVar7];
      }
      iVar7 = iVar7 + 1;
      pbVar5[0x100] = bVar2;
      pbVar5 = pbVar5 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  return;
}


/* ==== 007010bc  FUN_007010bc  size=341 ==== */

int FUN_007010bc(int param_1,char param_2,int param_3,undefined4 *param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 local_248 [137];
  undefined4 *local_24;
  undefined4 *local_20;
  int local_1c;
  __crt_seh_guarded_call<void> local_15;
  undefined4 *local_14;
  
  FUN_00701211(param_3,param_4);
  local_1c = getSystemCP(param_1);
  if (local_1c == *(int *)(*(int *)(param_3 + 0x48) + 4)) {
    iVar2 = 0;
  }
  else {
    puVar3 = (undefined4 *)__malloc_base(0x220);
    iVar2 = local_1c;
    local_14 = puVar3;
    if (puVar3 == (undefined4 *)0x0) {
      FUN_006f9a4d(0);
      iVar2 = -1;
    }
    else {
      puVar5 = *(undefined4 **)(param_3 + 0x48);
      puVar6 = local_248;
      for (iVar4 = 0x88; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      puVar5 = local_248;
      puVar6 = puVar3;
      for (iVar4 = 0x88; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      *puVar3 = 0;
      iVar2 = FUN_0070130c(iVar2,puVar3);
      if (iVar2 == -1) {
        puVar3 = (undefined4 *)FUN_006f390a();
        *puVar3 = 0x16;
        FUN_006f9a4d(local_14);
        iVar2 = -1;
      }
      else {
        if (param_2 == '\0') {
          FUN_006f7c0e();
        }
        piVar1 = *(int **)(param_3 + 0x48);
        LOCK();
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((iVar4 == 1) && (*(undefined **)(param_3 + 0x48) != &DAT_007c5e50)) {
          FUN_006f9a4d(*(undefined4 *)(param_3 + 0x48));
        }
        *local_14 = 1;
        *(undefined4 **)(param_3 + 0x48) = local_14;
        if ((*(uint *)(param_3 + 0x350) & DAT_007c63c8) == 0) {
          local_24 = &param_3;
          local_20 = &param_4;
          local_1c = 5;
          local_14 = (undefined4 *)0x5;
          __crt_seh_guarded_call<void>::
          operator()<<lambda_ceb1ee4838e85a9d631eb091e2fbe199>,<lambda_ae742caa10f662c28703da3d2ea5e57e>&,<lambda_cd08b5d6af4937fe54fc07d0c9bf6b37>_>
                    (&local_15,(<lambda_ceb1ee4838e85a9d631eb091e2fbe199> *)&local_14,
                     (<lambda_ae742caa10f662c28703da3d2ea5e57e> *)&local_24,
                     (<lambda_cd08b5d6af4937fe54fc07d0c9bf6b37> *)&local_1c);
          if (param_2 != '\0') {
            PTR_DAT_007c5b44 = (undefined *)*param_4;
          }
        }
        FUN_006f9a4d(0);
      }
    }
  }
  return iVar2;
}


/* ==== 00701211  FUN_00701211  size=129 ==== */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

void FUN_00701211(int param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  
  if (((*(uint *)(param_1 + 0x350) & DAT_007c63c8) == 0) || (*(int *)(param_1 + 0x4c) == 0)) {
    ___acrt_lock(5);
    piVar2 = *(int **)(param_1 + 0x48);
    if (piVar2 != (int *)*param_2) {
      if (piVar2 != (int *)0x0) {
        LOCK();
        iVar1 = *piVar2;
        *piVar2 = iVar1 + -1;
        UNLOCK();
        if ((iVar1 + -1 == 0) && (piVar2 != (int *)&DAT_007c5e50)) {
          FUN_006f9a4d(piVar2);
        }
      }
      piVar2 = (int *)*param_2;
      *(int **)(param_1 + 0x48) = piVar2;
      LOCK();
      *piVar2 = *piVar2 + 1;
      UNLOCK();
    }
    FUN_00701290();
  }
  else {
    piVar2 = *(int **)(param_1 + 0x48);
  }
  if (piVar2 != (int *)0x0) {
    FUN_00701299();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_006f6a50();
}


/* ==== 00701290  FUN_00701290  size=9 ==== */

void FUN_00701290(void)

{
  ___acrt_unlock(5);
  return;
}


/* ==== 00701299  FUN_00701299  size=18 ==== */

void FUN_00701299(void)

{
  int unaff_EBP;
  
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return;
}


/* ==== 007012f9  FUN_007012f9  size=19 ==== */

void FUN_007012f9(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_006f8965();
  FUN_00701211(uVar1,&DAT_007c92fc);
  return;
}


/* ==== 0070130c  FUN_0070130c  size=517 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_0070130c(int param_1,int param_2)

{
  byte bVar1;
  undefined2 uVar2;
  uint uVar3;
  uint uVar4;
  BOOL BVar5;
  BYTE *pBVar6;
  wchar_t *pwVar7;
  int iVar8;
  byte *pbVar9;
  undefined2 *puVar10;
  byte *pbVar11;
  undefined2 *puVar12;
  byte *pbVar13;
  uint uVar14;
  int local_20;
  _cpinfo local_1c;
  uint local_8;
  
  local_8 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  uVar3 = getSystemCP(param_1);
  if (uVar3 == 0) {
LAB_007014f9:
    FUN_00700eb4(param_2);
    return 0;
  }
  uVar14 = 0;
  uVar4 = 0;
  local_20 = 0;
  do {
    if (*(uint *)((int)&DAT_007c6280 + uVar4) == uVar3) {
      _memset((void *)(param_2 + 0x18),0,0x101);
      pbVar11 = (byte *)(local_20 * 0x30 + 0x7c6290);
      do {
        bVar1 = *pbVar11;
        pbVar9 = pbVar11;
        while ((bVar1 != 0 && (pbVar9[1] != 0))) {
          uVar4 = (uint)*pbVar9;
          if (uVar4 <= pbVar9[1]) {
            pbVar13 = (byte *)(param_2 + 0x19 + uVar4);
            do {
              if (0xff < uVar4) break;
              *pbVar13 = *pbVar13 | (&DAT_007c6278)[uVar14];
              uVar4 = uVar4 + 1;
              pbVar13 = pbVar13 + 1;
            } while (uVar4 <= pbVar9[1]);
          }
          pbVar9 = pbVar9 + 2;
          bVar1 = *pbVar9;
        }
        uVar14 = uVar14 + 1;
        pbVar11 = pbVar11 + 8;
      } while (uVar14 < 4);
      *(uint *)(param_2 + 4) = uVar3;
      *(undefined4 *)(param_2 + 8) = 1;
      pwVar7 = CPtoLocaleName(uVar3);
      *(wchar_t **)(param_2 + 0x21c) = pwVar7;
      puVar10 = (undefined2 *)(param_2 + 0xc);
      puVar12 = (undefined2 *)(local_20 * 0x30 + 0x7c6284);
      iVar8 = 6;
      do {
        uVar2 = *puVar12;
        puVar12 = puVar12 + 1;
        *puVar10 = uVar2;
        puVar10 = puVar10 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
      goto LAB_007014f1;
    }
    local_20 = local_20 + 1;
    uVar4 = uVar4 + 0x30;
  } while (uVar4 < 0xf0);
  if ((uVar3 == 65000) || (BVar5 = IsValidCodePage(uVar3 & 0xffff), BVar5 == 0)) {
    return 0xffffffff;
  }
  if (uVar3 == 0xfde9) {
    *(undefined4 *)(param_2 + 4) = 0xfde9;
    *(undefined4 *)(param_2 + 0x21c) = 0;
    *(undefined4 *)(param_2 + 0x18) = 0;
    *(undefined2 *)(param_2 + 0x1c) = 0;
  }
  else {
    BVar5 = GetCPInfo(uVar3,&local_1c);
    if (BVar5 == 0) {
      if (DAT_007c9300 == 0) {
        return 0xffffffff;
      }
      goto LAB_007014f9;
    }
    _memset((void *)(param_2 + 0x18),0,0x101);
    *(uint *)(param_2 + 4) = uVar3;
    *(undefined4 *)(param_2 + 0x21c) = 0;
    if (local_1c.MaxCharSize == 2) {
      pBVar6 = local_1c.LeadByte;
      while ((local_1c.LeadByte[0] != 0 && (bVar1 = pBVar6[1], bVar1 != 0))) {
        uVar3 = (uint)*pBVar6;
        if (uVar3 <= bVar1) {
          pbVar11 = (byte *)(param_2 + 0x19 + uVar3);
          iVar8 = (bVar1 - uVar3) + 1;
          do {
            *pbVar11 = *pbVar11 | 4;
            pbVar11 = pbVar11 + 1;
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
        }
        pBVar6 = pBVar6 + 2;
        local_1c.LeadByte[0] = *pBVar6;
      }
      pbVar11 = (byte *)(param_2 + 0x1a);
      iVar8 = 0xfe;
      do {
        *pbVar11 = *pbVar11 | 8;
        pbVar11 = pbVar11 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
      pwVar7 = CPtoLocaleName(*(int *)(param_2 + 4));
      *(wchar_t **)(param_2 + 0x21c) = pwVar7;
      uVar14 = 1;
    }
  }
  *(uint *)(param_2 + 8) = uVar14;
  *(undefined4 *)(param_2 + 0xc) = 0;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *(undefined4 *)(param_2 + 0x14) = 0;
LAB_007014f1:
  FUN_00700f17(param_2);
  return 0;
}


/* ==== 00701511  FUN_00701511  size=80 ==== */

undefined4 FUN_00701511(undefined4 param_1,byte param_2,uint param_3,byte param_4)

{
  undefined4 uVar1;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined1 local_8;
  
  FUN_006ee0ac(param_1);
  if (((*(byte *)(local_c + 0x19 + (uint)param_2) & param_4) == 0) &&
     ((param_3 == 0 || ((param_3 & *(ushort *)(*local_10 + (uint)param_2 * 2)) == 0)))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  if (local_8 != '\0') {
    *(uint *)(local_14 + 0x350) = *(uint *)(local_14 + 0x350) & 0xfffffffd;
  }
  return uVar1;
}


/* ==== 00701592  FUN_00701592  size=100 ==== */

undefined4 FUN_00701592(short *param_1,int param_2,int param_3)

{
  short sVar1;
  undefined4 *puVar2;
  short *psVar3;
  undefined4 uStack_10;
  
  if ((param_1 != (short *)0x0) && (param_2 != 0)) {
    if (param_3 != 0) {
      psVar3 = param_1;
      do {
        sVar1 = *(short *)((param_3 - (int)param_1) + (int)psVar3);
        *psVar3 = sVar1;
        psVar3 = psVar3 + 1;
        if (sVar1 == 0) {
          return 0;
        }
        param_2 = param_2 + -1;
      } while (param_2 != 0);
      *param_1 = 0;
      puVar2 = (undefined4 *)FUN_006f390a();
      uStack_10 = 0x22;
      goto LAB_007015ba;
    }
    *param_1 = 0;
  }
  puVar2 = (undefined4 *)FUN_006f390a();
  uStack_10 = 0x16;
LAB_007015ba:
  *puVar2 = uStack_10;
  FUN_006e8c2f();
  return uStack_10;
}


/* ==== 007015f6  FUN_007015f6  size=144 ==== */

uint FUN_007015f6(uint param_1,uint param_2)

{
  int iVar1;
  bool bVar2;
  
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
      goto LAB_00701676;
    }
    if (param_1 == 0xc435) {
      return 0;
    }
    if (param_1 == 0xd698) {
      return 0;
    }
    iVar1 = param_1 - 0xdeaa;
    bVar2 = iVar1 == 0;
  }
  else if (param_1 < 0xdeb2) {
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
    bVar2 = iVar1 == 0;
  }
  else {
    if (param_1 == 0xdeb2) {
      return 0;
    }
    if (param_1 == 0xdeb3) {
      return 0;
    }
    iVar1 = param_1 - 65000;
    bVar2 = iVar1 == 0;
  }
  if (bVar2) {
    return 0;
  }
  iVar1 = iVar1 + -1;
LAB_00701676:
  if (iVar1 == 0) {
    return 0;
  }
  return param_2 & 0xffffff7f;
}


/* ==== 00701686  FUN_00701686  size=108 ==== */

void FUN_00701686(int param_1,undefined4 param_2,LPCWSTR param_3,int param_4,LPSTR param_5,
                 int param_6,uint param_7,undefined4 *param_8)

{
  bool bVar1;
  undefined8 uVar2;
  
  if ((param_1 == 65000) || (param_1 == 0xfde9)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  uVar2 = FUN_007015f6(param_1,param_2);
  if ((bVar1) && (param_8 != (undefined4 *)0x0)) {
    *param_8 = 0;
  }
  WideCharToMultiByte((UINT)((ulonglong)uVar2 >> 0x20),(DWORD)uVar2,param_3,param_4,param_5,param_6,
                      (LPCSTR)(~-(uint)bVar1 & param_7),(LPBOOL)(~-(uint)bVar1 & (uint)param_8));
  return;
}


/* ==== 007016f2  find_end_of_double_null_terminated_sequence  size=55 ==== */

/* Library Function - Single Match
    wchar_t const * __cdecl find_end_of_double_null_terminated_sequence(wchar_t const * const)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

wchar_t * __cdecl find_end_of_double_null_terminated_sequence(wchar_t *param_1)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  
  wVar1 = *param_1;
  while (wVar1 != L'\0') {
    pwVar2 = param_1;
    do {
      wVar1 = *pwVar2;
      pwVar2 = pwVar2 + 1;
    } while (wVar1 != L'\0');
    param_1 = param_1 + ((int)pwVar2 - (int)(param_1 + 1) >> 1) + 1;
    wVar1 = *param_1;
  }
  return param_1 + 1;
}


/* ==== 00701729  FUN_00701729  size=160 ==== */

int FUN_00701729(void)

{
  LPWCH pWVar1;
  wchar_t *pwVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  pWVar1 = GetEnvironmentStringsW();
  iVar5 = 0;
  if (pWVar1 != (LPWCH)0x0) {
    pwVar2 = find_end_of_double_null_terminated_sequence(pWVar1);
    iVar3 = (int)pwVar2 - (int)pWVar1 >> 1;
    iVar4 = FUN_00701686(0,0,pWVar1,iVar3,0,0,0,0);
    if (iVar4 == 0) {
      FreeEnvironmentStringsW(pWVar1);
      iVar5 = 0;
    }
    else {
      iVar5 = __malloc_base(iVar4);
      if (iVar5 == 0) {
        FUN_006f9a4d();
        FreeEnvironmentStringsW(pWVar1);
        iVar5 = 0;
      }
      else {
        iVar3 = FUN_00701686(0,0,pWVar1,iVar3,iVar5,iVar4,0,0);
        if (iVar3 == 0) {
          FUN_006f9a4d(iVar5);
          iVar5 = 0;
        }
        else {
          FUN_006f9a4d(0);
        }
        FreeEnvironmentStringsW(pWVar1);
      }
    }
  }
  return iVar5;
}


/* ==== 007017c9  FUN_007017c9  size=78 ==== */

int FUN_007017c9(void)

{
  LPWCH pWVar1;
  wchar_t *pwVar2;
  int iVar3;
  uint uVar4;
  
  pWVar1 = GetEnvironmentStringsW();
  if (pWVar1 == (LPWCH)0x0) {
    return 0;
  }
  pwVar2 = find_end_of_double_null_terminated_sequence(pWVar1);
  uVar4 = (int)pwVar2 - (int)pWVar1 & 0xfffffffe;
  iVar3 = __malloc_base(uVar4);
  if (iVar3 != 0) {
    FUN_006e6bd0(iVar3,pWVar1,uVar4);
  }
  FUN_006f9a4d(0);
  FreeEnvironmentStringsW(pWVar1);
  return iVar3;
}


/* ==== 00701817  FUN_00701817  size=607 ==== */

undefined4 FUN_00701817(char *param_1,int param_2)

{
  uint uVar1;
  char cVar2;
  char cVar3;
  undefined4 *puVar4;
  char *pcVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
  char *pcVar10;
  char *pcVar11;
  
  if (param_1 == (char *)0x0) {
    puVar4 = (undefined4 *)FUN_006f390a();
    *puVar4 = 0x16;
    return 0xffffffff;
  }
  pcVar5 = (char *)FUN_006e6960(param_1,0x3d);
  if ((pcVar5 == (char *)0x0) || (pcVar5 == param_1)) {
    puVar4 = (undefined4 *)FUN_006f390a();
    *puVar4 = 0x16;
    FUN_006f9a4d(param_1);
    return 0xffffffff;
  }
  cVar2 = pcVar5[1];
  FUN_00701e70();
  uVar9 = 0;
  if (DAT_007c8d78 == (int *)0x0) {
    if ((param_2 != 0) && (DAT_007c8d7c != 0)) {
      iVar6 = thunk_FUN_006f6fe0();
      if (iVar6 == 0) {
        puVar4 = (undefined4 *)FUN_006f390a();
        *puVar4 = 0x16;
        goto LAB_00701891;
      }
      FUN_00701e70();
      goto LAB_007018ec;
    }
    if (cVar2 == '\0') goto LAB_00701a38;
    DAT_007c8d78 = (int *)__calloc_base(1,4);
    FUN_006f9a4d(0);
    if (DAT_007c8d78 != (int *)0x0) {
      if (DAT_007c8d7c == 0) {
        DAT_007c8d7c = __calloc_base(1,4);
        FUN_006f9a4d(0);
        if (DAT_007c8d7c == 0) goto LAB_00701891;
      }
      goto LAB_007018ec;
    }
  }
  else {
LAB_007018ec:
    piVar7 = DAT_007c8d78;
    if (DAT_007c8d78 != (int *)0x0) {
      iVar6 = find_in_environment_nolock<char>(param_1,(int)pcVar5 - (int)param_1);
      if ((-1 < iVar6) && (*piVar7 != 0)) {
        FUN_006f9a4d(piVar7[iVar6]);
        if (cVar2 == '\0') {
          for (; piVar7[iVar6] != 0; iVar6 = iVar6 + 1) {
            piVar7[iVar6] = piVar7[iVar6 + 1];
          }
          piVar7 = (int *)__recalloc_base(piVar7,iVar6,4);
          FUN_006f9a4d(0);
          pcVar11 = param_1;
          if (piVar7 != (int *)0x0) {
LAB_007019b0:
            DAT_007c8d78 = piVar7;
          }
        }
        else {
          pcVar11 = (char *)0x0;
          piVar7[iVar6] = (int)param_1;
        }
        if (param_2 == 0) {
LAB_00701a48:
          FUN_006f9a4d(pcVar11);
          return 0;
        }
        pcVar10 = param_1;
        do {
          cVar3 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar3 != '\0');
        iVar6 = __calloc_base(pcVar10 + (2 - (int)(param_1 + 1)),1);
        if (iVar6 == 0) {
          FUN_006f9a4d(0);
          param_1 = pcVar11;
        }
        else {
          iVar8 = FUN_006f8593(iVar6,pcVar10 + (2 - (int)(param_1 + 1)),param_1);
          if (iVar8 != 0) {
                    /* WARNING: Subroutine does not return */
            __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          pcVar5[iVar6 - (int)param_1] = '\0';
          iVar8 = ___acrt_SetEnvironmentVariableA
                            (iVar6,-(uint)(cVar2 != '\0') &
                                   (uint)(pcVar5 + (iVar6 - (int)param_1) + 1));
          if (iVar8 != 0) {
            FUN_006f9a4d(iVar6);
            goto LAB_00701a48;
          }
          puVar4 = (undefined4 *)FUN_006f390a();
          *puVar4 = 0x2a;
          FUN_006f9a4d(iVar6);
          uVar9 = 0xffffffff;
          param_1 = pcVar11;
        }
        goto LAB_00701a38;
      }
      if (cVar2 == '\0') goto LAB_00701a38;
      uVar1 = -iVar6 + 2;
      if (((uint)-iVar6 <= uVar1) && (uVar1 < 0x3fffffff)) {
        piVar7 = (int *)__recalloc_base(piVar7,uVar1,4);
        FUN_006f9a4d(0);
        if (piVar7 != (int *)0x0) {
          piVar7[-iVar6] = (int)param_1;
          piVar7[1 - iVar6] = 0;
          pcVar11 = (char *)0x0;
          goto LAB_007019b0;
        }
      }
    }
  }
LAB_00701891:
  uVar9 = 0xffffffff;
LAB_00701a38:
  FUN_006f9a4d(param_1);
  return uVar9;
}


/* ==== 00701a77  FUN_00701a77  size=650 ==== */

undefined4 FUN_00701a77(wchar_t *param_1,int param_2)

{
  uint uVar1;
  wchar_t wVar2;
  wchar_t wVar3;
  undefined4 *puVar4;
  wchar_t *pwVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  LPCWSTR lpName;
  BOOL BVar9;
  undefined4 uVar10;
  wchar_t *pwVar11;
  int *local_8;
  
  if (param_1 == (wchar_t *)0x0) {
    puVar4 = (undefined4 *)FUN_006f390a();
    *puVar4 = 0x16;
    return 0xffffffff;
  }
  pwVar5 = (wchar_t *)FUN_0070b123(param_1,0x3d);
  if ((pwVar5 == (wchar_t *)0x0) || (pwVar5 == param_1)) {
    puVar4 = (undefined4 *)FUN_006f390a();
    *puVar4 = 0x16;
    FUN_006f9a4d(param_1);
    return 0xffffffff;
  }
  wVar2 = pwVar5[1];
  FUN_00701e8a();
  uVar10 = 0;
  local_8 = DAT_007c8d7c;
  if (DAT_007c8d7c == (int *)0x0) {
    if ((param_2 == 0) || (DAT_007c8d78 == 0)) {
      if (wVar2 == L'\0') goto LAB_00701cc3;
      if (DAT_007c8d78 == 0) {
        DAT_007c8d78 = __calloc_base(1,4);
        FUN_006f9a4d(0);
        if (DAT_007c8d78 == 0) goto LAB_00701b00;
        local_8 = DAT_007c8d7c;
        if (DAT_007c8d7c != (int *)0x0) goto LAB_00701b74;
      }
      DAT_007c8d7c = (int *)__calloc_base(1,4);
      FUN_006f9a4d(0);
      if (DAT_007c8d7c != (int *)0x0) goto LAB_00701b70;
    }
    else {
      iVar6 = thunk_FUN_006f700c();
      if (iVar6 == 0) {
        puVar4 = (undefined4 *)FUN_006f390a();
        *puVar4 = 0x16;
      }
      else {
        FUN_00701e8a();
LAB_00701b70:
        local_8 = DAT_007c8d7c;
        if (DAT_007c8d7c != (int *)0x0) goto LAB_00701b74;
      }
    }
  }
  else {
LAB_00701b74:
    uVar7 = (int)pwVar5 - (int)param_1 >> 1;
    DAT_007c8d7c = local_8;
    iVar6 = find_in_environment_nolock<wchar_t>(param_1,uVar7);
    if ((-1 < iVar6) && (*local_8 != 0)) {
      FUN_006f9a4d(local_8[iVar6]);
      if (wVar2 == L'\0') {
        for (; local_8[iVar6] != 0; iVar6 = iVar6 + 1) {
          local_8[iVar6] = local_8[iVar6 + 1];
        }
        piVar8 = (int *)__recalloc_base(local_8,iVar6,4);
        FUN_006f9a4d(0);
        pwVar5 = param_1;
        if (piVar8 != (int *)0x0) {
LAB_00701c35:
          DAT_007c8d7c = piVar8;
        }
      }
      else {
        pwVar5 = (wchar_t *)0x0;
        local_8[iVar6] = (int)param_1;
      }
      if (param_2 == 0) {
LAB_00701cd3:
        FUN_006f9a4d(pwVar5);
        return 0;
      }
      pwVar11 = param_1;
      do {
        wVar3 = *pwVar11;
        pwVar11 = pwVar11 + 1;
      } while (wVar3 != L'\0');
      iVar6 = ((int)pwVar11 - (int)(param_1 + 1) >> 1) + 2;
      lpName = (LPCWSTR)__calloc_base(iVar6,2);
      if (lpName == (LPCWSTR)0x0) {
        FUN_006f9a4d(0);
        param_1 = pwVar5;
      }
      else {
        iVar6 = FUN_00701592(lpName,iVar6,param_1);
        if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
          __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        lpName[uVar7] = L'\0';
        BVar9 = SetEnvironmentVariableW
                          (lpName,(LPCWSTR)(-(uint)(wVar2 != L'\0') & (uint)(lpName + uVar7 + 1)));
        if (BVar9 != 0) {
          FUN_006f9a4d(lpName);
          goto LAB_00701cd3;
        }
        puVar4 = (undefined4 *)FUN_006f390a();
        *puVar4 = 0x2a;
        FUN_006f9a4d(lpName);
        uVar10 = 0xffffffff;
        param_1 = pwVar5;
      }
      goto LAB_00701cc3;
    }
    if (wVar2 == L'\0') goto LAB_00701cc3;
    uVar1 = -iVar6 + 2;
    if (((uint)-iVar6 <= uVar1) && (uVar1 < 0x3fffffff)) {
      piVar8 = (int *)__recalloc_base(local_8,uVar1,4);
      FUN_006f9a4d(0);
      if (piVar8 != (int *)0x0) {
        piVar8[-iVar6] = (int)param_1;
        piVar8[1 - iVar6] = 0;
        pwVar5 = (wchar_t *)0x0;
        goto LAB_00701c35;
      }
    }
  }
LAB_00701b00:
  uVar10 = 0xffffffff;
LAB_00701cc3:
  FUN_006f9a4d(param_1);
  return uVar10;
}


/* ==== 00701d02  FUN_00701d02  size=175 ==== */

int FUN_00701d02(int *param_1)

{
  char *pcVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  
  if (param_1 == (int *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar7 = 0;
    iVar4 = *param_1;
    piVar3 = param_1;
    while (iVar4 != 0) {
      piVar3 = piVar3 + 1;
      iVar7 = iVar7 + 1;
      iVar4 = *piVar3;
    }
    iVar4 = __calloc_base(iVar7 + 1,4);
    if (iVar4 == 0) {
LAB_00701da0:
                    /* WARNING: Subroutine does not return */
      FUN_006f6a50();
    }
    pcVar8 = (char *)*param_1;
    if (pcVar8 != (char *)0x0) {
      iVar7 = iVar4 - (int)param_1;
      do {
        pcVar1 = pcVar8 + 1;
        do {
          cVar2 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar2 != '\0');
        uVar5 = __calloc_base(pcVar8 + (1 - (int)pcVar1),1);
        *(undefined4 *)(iVar7 + (int)param_1) = uVar5;
        FUN_006f9a4d(0);
        if (*(int *)(iVar7 + (int)param_1) == 0) goto LAB_00701da0;
        iVar6 = FUN_006f8593(*(undefined4 *)(iVar7 + (int)param_1),pcVar8 + (1 - (int)pcVar1),
                             *param_1);
        if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
          __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        param_1 = param_1 + 1;
        pcVar8 = (char *)*param_1;
      } while (pcVar8 != (char *)0x0);
    }
    FUN_006f9a4d(0);
  }
  return iVar4;
}


/* ==== 00701db2  FUN_00701db2  size=189 ==== */

int FUN_00701db2(int *param_1)

{
  short *psVar1;
  short sVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  short *psVar8;
  
  if (param_1 == (int *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar7 = 0;
    iVar4 = *param_1;
    piVar3 = param_1;
    while (iVar4 != 0) {
      piVar3 = piVar3 + 1;
      iVar7 = iVar7 + 1;
      iVar4 = *piVar3;
    }
    iVar4 = __calloc_base(iVar7 + 1,4);
    if (iVar4 == 0) {
LAB_00701e5e:
                    /* WARNING: Subroutine does not return */
      FUN_006f6a50();
    }
    psVar8 = (short *)*param_1;
    if (psVar8 != (short *)0x0) {
      iVar7 = iVar4 - (int)param_1;
      do {
        psVar1 = psVar8 + 1;
        do {
          sVar2 = *psVar8;
          psVar8 = psVar8 + 1;
        } while (sVar2 != 0);
        iVar6 = ((int)psVar8 - (int)psVar1 >> 1) + 1;
        uVar5 = __calloc_base(iVar6,2);
        *(undefined4 *)(iVar7 + (int)param_1) = uVar5;
        FUN_006f9a4d(0);
        if (*(int *)(iVar7 + (int)param_1) == 0) goto LAB_00701e5e;
        iVar6 = FUN_00701592(*(undefined4 *)(iVar7 + (int)param_1),iVar6,*param_1);
        if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
          __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        param_1 = param_1 + 1;
        psVar8 = (short *)*param_1;
      } while (psVar8 != (short *)0x0);
    }
    FUN_006f9a4d(0);
  }
  return iVar4;
}


/* ==== 00701e70  FUN_00701e70  size=26 ==== */

void FUN_00701e70(void)

{
  if (DAT_007c8d78 == DAT_007c8d84) {
    DAT_007c8d78 = FUN_00701d02(DAT_007c8d78);
  }
  return;
}


/* ==== 00701e8a  FUN_00701e8a  size=26 ==== */

void FUN_00701e8a(void)

{
  if (DAT_007c8d7c == DAT_007c8d80) {
    DAT_007c8d7c = FUN_00701db2(DAT_007c8d7c);
  }
  return;
}


/* ==== 00701ea4  find_in_environment_nolock<char>  size=85 ==== */

/* Library Function - Single Match
    int __cdecl find_in_environment_nolock<char>(char const * const,unsigned int)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl find_in_environment_nolock<char>(char *param_1,uint param_2)

{
  char *_Str2;
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar1 = DAT_007c8d78;
  _Str2 = (char *)*DAT_007c8d78;
  piVar3 = DAT_007c8d78;
  while( true ) {
    if (_Str2 == (char *)0x0) {
      return -((int)piVar3 - (int)piVar1 >> 2);
    }
    iVar2 = __strnicoll(param_1,_Str2,param_2);
    if ((iVar2 == 0) &&
       ((*(char *)(param_2 + *piVar3) == '=' || (*(char *)(param_2 + *piVar3) == '\0')))) break;
    piVar3 = piVar3 + 1;
    _Str2 = (char *)*piVar3;
  }
  return (int)piVar3 - (int)piVar1 >> 2;
}


/* ==== 00701ef9  find_in_environment_nolock<wchar_t>  size=88 ==== */

/* Library Function - Single Match
    int __cdecl find_in_environment_nolock<wchar_t>(wchar_t const * const,unsigned int)
   
   Library: Visual Studio 2019 Release */

int __cdecl find_in_environment_nolock<wchar_t>(wchar_t *param_1,uint param_2)

{
  short sVar1;
  wchar_t *_Str2;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  piVar2 = DAT_007c8d7c;
  _Str2 = (wchar_t *)*DAT_007c8d7c;
  piVar4 = DAT_007c8d7c;
  while( true ) {
    if (_Str2 == (wchar_t *)0x0) {
      return -((int)piVar4 - (int)piVar2 >> 2);
    }
    iVar3 = __wcsnicoll(param_1,_Str2,param_2);
    if ((iVar3 == 0) && ((sVar1 = *(short *)(*piVar4 + param_2 * 2), sVar1 == 0x3d || (sVar1 == 0)))
       ) break;
    piVar4 = piVar4 + 1;
    _Str2 = (wchar_t *)*piVar4;
  }
  return (int)piVar4 - (int)piVar2 >> 2;
}


/* ==== 00701f51  FUN_00701f51  size=11 ==== */

void FUN_00701f51(void)

{
  FUN_00701817();
  return;
}


/* ==== 00701f5c  FUN_00701f5c  size=11 ==== */

void FUN_00701f5c(void)

{
  FUN_00701a77();
  return;
}


/* ==== 00702088  FUN_00702088  size=206 ==== */

undefined4 FUN_00702088(short *param_1,int param_2,int param_3,int param_4)

{
  short sVar1;
  undefined4 *puVar2;
  short *psVar3;
  int iVar4;
  undefined4 uStack_18;
  int local_8;
  
  if (param_4 == 0) {
    if (param_1 == (short *)0x0) {
      if (param_2 == 0) {
        return 0;
      }
    }
    else {
LAB_007020c1:
      if (param_2 != 0) {
        if (param_4 == 0) {
          *param_1 = 0;
          return 0;
        }
        if (param_3 != 0) {
          local_8 = param_4;
          psVar3 = param_1;
          iVar4 = param_2;
          if (param_4 == -1) {
            do {
              sVar1 = *(short *)((param_3 - (int)param_1) + (int)psVar3);
              *psVar3 = sVar1;
              psVar3 = psVar3 + 1;
              if (sVar1 == 0) {
                return 0;
              }
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
            iVar4 = 0;
          }
          else {
            do {
              sVar1 = *(short *)((param_3 - (int)param_1) + (int)psVar3);
              *psVar3 = sVar1;
              psVar3 = psVar3 + 1;
              if (sVar1 == 0) {
                return 0;
              }
              iVar4 = iVar4 + -1;
            } while ((iVar4 != 0) && (local_8 = local_8 + -1, local_8 != 0));
            if (local_8 == 0) {
              *psVar3 = 0;
            }
          }
          if (iVar4 != 0) {
            return 0;
          }
          if (param_4 == -1) {
            param_1[param_2 + -1] = 0;
            return 0x50;
          }
          *param_1 = 0;
          puVar2 = (undefined4 *)FUN_006f390a();
          uStack_18 = 0x22;
          goto LAB_007020ae;
        }
        *param_1 = 0;
      }
    }
  }
  else if (param_1 != (short *)0x0) goto LAB_007020c1;
  puVar2 = (undefined4 *)FUN_006f390a();
  uStack_18 = 0x16;
LAB_007020ae:
  *puVar2 = uStack_18;
  FUN_006e8c2f();
  return uStack_18;
}


/* ==== 00702156  FUN_00702156  size=11 ==== */

void FUN_00702156(void)

{
  FUN_00702088();
  return;
}


/* ==== 00702303  FUN_00702303  size=37 ==== */

void FUN_00702303(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = param_1 + param_2;
  for (; param_1 != puVar1; param_1 = param_1 + 1) {
    FUN_006f9a4d(*param_1);
  }
  return;
}


/* ==== 0070240c  FUN_0070240c  size=257 ==== */

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

BOOL FUN_0070240c(undefined4 param_1,DWORD param_2,undefined4 param_3,undefined4 param_4,
                 LPWORD param_5,int param_6,int param_7)

{
  uint _Size;
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  LPCWSTR lpSrcStr;
  BOOL BVar4;
  int local_20;
  int local_1c;
  char local_14;
  
  FUN_006ee0ac(param_1);
  if (param_6 == 0) {
    param_6 = *(int *)(local_1c + 8);
  }
  BVar4 = 0;
  iVar1 = FUN_006fdb32(param_6,(param_7 != 0) * '\b' + '\x01',param_3,param_4,0,0);
  if (iVar1 == 0) goto LAB_007024e9;
  _Size = iVar1 * 2;
  uVar2 = -(uint)(_Size < _Size + 8) & _Size + 8;
  if (uVar2 == 0) {
    lpSrcStr = (LPCWSTR)0x0;
  }
  else if (uVar2 < 0x401) {
    puVar3 = (undefined4 *)&stack0xffffffd4;
    lpSrcStr = (LPCWSTR)&stack0xffffffd4;
    if (&stack0x00000000 != (undefined1 *)0x2c) {
LAB_007024a4:
      lpSrcStr = (LPCWSTR)(puVar3 + 2);
      if (lpSrcStr != (LPCWSTR)0x0) {
        _memset(lpSrcStr,0,_Size);
        iVar1 = FUN_006fdb32(param_6,1,param_3,param_4,lpSrcStr,iVar1);
        if (iVar1 != 0) {
          BVar4 = GetStringTypeW(param_2,lpSrcStr,iVar1,param_5);
        }
      }
    }
  }
  else {
    puVar3 = (undefined4 *)__malloc_base(uVar2);
    lpSrcStr = (LPCWSTR)0x0;
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = 0xdddd;
      goto LAB_007024a4;
    }
  }
  FUN_006f184f(lpSrcStr);
LAB_007024e9:
  if (local_14 != '\0') {
    *(uint *)(local_20 + 0x350) = *(uint *)(local_20 + 0x350) & 0xfffffffd;
  }
  return BVar4;
}


/* ==== 007027d6  FUN_007027d6  size=98 ==== */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

int FUN_007027d6(void)

{
  int iVar1;
  int iVar2;
  undefined4 uStack_14;
  
  iVar2 = FUN_006f8965();
  if (((*(uint *)(iVar2 + 0x350) & DAT_007c63c8) != 0) &&
     (iVar1 = *(int *)(iVar2 + 0x4c), iVar1 != 0)) {
    ExceptionList = uStack_14;
    return iVar1;
  }
  ___acrt_lock(4);
  iVar2 = __updatetlocinfoEx_nolock((int *)(iVar2 + 0x4c),DAT_007c8db8);
  FUN_00702836();
  if (iVar2 != 0) {
    iVar2 = FUN_0070283f();
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_006f6a50();
}


/* ==== 00702836  FUN_00702836  size=9 ==== */

void FUN_00702836(void)

{
  ___acrt_unlock(4);
  return;
}


/* ==== 0070283f  FUN_0070283f  size=18 ==== */

void FUN_0070283f(void)

{
  int unaff_EBP;
  
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return;
}


/* ==== 00702dcb  FUN_00702dcb  size=86 ==== */

byte FUN_00702dcb(uint param_1)

{
  undefined4 *puVar1;
  
  if (param_1 == 0xfffffffe) {
    puVar1 = (undefined4 *)FUN_006f390a();
    *puVar1 = 9;
  }
  else {
    if ((-1 < (int)param_1) && (param_1 < DAT_007c8fc0)) {
      return *(byte *)((&DAT_007c8dc0)[param_1 >> 6] + 0x28 + (param_1 & 0x3f) * 0x38) & 0x40;
    }
    puVar1 = (undefined4 *)FUN_006f390a();
    *puVar1 = 9;
    FUN_006e8c2f();
  }
  return 0;
}


/* ==== 00702e21  FUN_00702e21  size=147 ==== */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

undefined4 FUN_00702e21(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  HANDLE hFile;
  BOOL BVar2;
  DWORD DVar3;
  DWORD *pDVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  void *local_14;
  
  uVar6 = 0;
  ___acrt_lowio_lock_fh(*param_1);
  uVar1 = *(uint *)*param_2;
  if ((*(byte *)((&DAT_007c8dc0)[(int)uVar1 >> 6] + 0x28 + (uVar1 & 0x3f) * 0x38) & 1) != 0) {
    hFile = (HANDLE)FUN_006ff4ee(uVar1);
    BVar2 = FlushFileBuffers(hFile);
    if (BVar2 != 0) goto LAB_00702e91;
    DVar3 = GetLastError();
    pDVar4 = (DWORD *)FUN_006f38f7();
    *pDVar4 = DVar3;
  }
  puVar5 = (undefined4 *)FUN_006f390a();
  *puVar5 = 9;
  uVar6 = 0xffffffff;
LAB_00702e91:
  FUN_00702eb7();
  ExceptionList = local_14;
  return uVar6;
}


/* ==== 00702eb7  FUN_00702eb7  size=12 ==== */

void FUN_00702eb7(void)

{
  int unaff_EBP;
  
  ___acrt_lowio_unlock_fh(**(undefined4 **)(unaff_EBP + 0x10));
  return;
}


/* ==== 00702f9c  FUN_00702f9c  size=35 ==== */

bool FUN_00702f9c(char *param_1,int param_2)

{
  if (param_2 == 0) {
    return true;
  }
  for (; *param_1 == '0'; param_1 = param_1 + 1) {
  }
  return *param_1 != '\0';
}


/* ==== 00702fbf  FUN_00702fbf  size=142 ==== */

bool FUN_00702fbf(int param_1,char *param_2,int param_3,undefined4 param_4,int param_5)

{
  char cVar1;
  int iVar2;
  int extraout_EDX;
  
  if (param_5 == 0) {
    return '4' < *param_2;
  }
  iVar2 = fegetround();
  if (iVar2 == 0) {
    if ('5' < *param_2) {
      return true;
    }
    if ('4' < *param_2) {
      cVar1 = FUN_00702f9c(param_2 + 1,param_4);
      if (cVar1 != '\0') {
        return true;
      }
      if (extraout_EDX != param_1) {
        return (bool)(*(byte *)(extraout_EDX + -1) & 1);
      }
    }
  }
  else if (iVar2 == 0x200) {
    cVar1 = FUN_00702f9c(param_2,param_4);
    if ((cVar1 != '\0') && (param_3 != 0x2d)) {
      return true;
    }
  }
  else if (((iVar2 == 0x100) && (cVar1 = FUN_00702f9c(param_2,param_4), cVar1 != '\0')) &&
          (param_3 == 0x2d)) {
    return true;
  }
  return false;
}


/* ==== 0070304d  FUN_0070304d  size=250 ==== */

undefined4
FUN_0070304d(char *param_1,uint param_2,int param_3,undefined4 *param_4,undefined4 param_5,
            undefined4 param_6,int param_7)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  undefined4 uVar6;
  
  if (param_1 == (char *)0x0) {
    *(undefined1 *)(param_7 + 0x1c) = 1;
    *(undefined4 *)(param_7 + 0x18) = 0x16;
    FUN_006e8bb2(0,0,0,0,0,param_7);
    return 0x16;
  }
  if (param_2 != 0) {
    *param_1 = '\0';
    iVar2 = param_3;
    if (param_3 < 1) {
      iVar2 = 0;
    }
    if (param_2 <= iVar2 + 1U) {
      uVar6 = 0x22;
      goto LAB_007030a6;
    }
    if (param_4 != (undefined4 *)0x0) {
      pcVar4 = (char *)param_4[2];
      *param_1 = '0';
      pcVar3 = pcVar4;
      pcVar5 = param_1;
      for (; pcVar5 = pcVar5 + 1, 0 < param_3; param_3 = param_3 + -1) {
        cVar1 = *pcVar3;
        if (cVar1 == '\0') {
          cVar1 = '0';
        }
        else {
          pcVar3 = pcVar3 + 1;
        }
        *pcVar5 = cVar1;
      }
      *pcVar5 = '\0';
      if ((-1 < param_3) &&
         (cVar1 = FUN_00702fbf(pcVar4,pcVar3,*param_4,param_5,param_6), cVar1 != '\0')) {
        while( true ) {
          pcVar5 = pcVar5 + -1;
          if (*pcVar5 != '9') break;
          *pcVar5 = '0';
        }
        *pcVar5 = *pcVar5 + '\x01';
      }
      if (*param_1 == '1') {
        param_4[1] = param_4[1] + 1;
      }
      else {
        pcVar4 = param_1 + 1;
        do {
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        FUN_006e6bd0(param_1,param_1 + 1,pcVar4 + (1 - (int)(param_1 + 2)));
      }
      return 0;
    }
  }
  uVar6 = 0x16;
LAB_007030a6:
  *(undefined4 *)(param_7 + 0x18) = uVar6;
  *(undefined1 *)(param_7 + 0x1c) = 1;
  FUN_006e8bb2(0,0,0,0,0,param_7);
  return uVar6;
}


/* ==== 00703147  FUN_00703147  size=5607 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

undefined4
FUN_00703147(uint *******param_1,uint param_2,int param_3,int param_4,undefined4 *param_5,
            uint *******param_6,int param_7)

{
  uint *****pppppuVar1;
  byte bVar2;
  longlong lVar3;
  ulonglong uVar4;
  char cVar5;
  undefined4 uVar6;
  __acrt_fp_class _Var7;
  int iVar8;
  uint ******ppppppuVar9;
  undefined1 *puVar10;
  uint *******pppppppuVar11;
  rsize_t rVar12;
  uint ******ppppppuVar13;
  uint uVar14;
  uint *******pppppppuVar15;
  uint ******ppppppuVar16;
  undefined4 uVar17;
  uint *******pppppppuVar18;
  uint ********ppppppppuVar19;
  uint uVar20;
  uint *******pppppppuVar21;
  uint ******ppppppuVar22;
  bool bVar23;
  uint *****local_974 [115];
  uint local_7a8;
  byte local_7a4 [8];
  char local_79c;
  uint local_798;
  uint local_794;
  undefined4 *local_790;
  uint local_78c;
  uint local_788;
  uint *******local_784;
  undefined8 local_780;
  uint *******local_774;
  uint *******local_770;
  uint *******local_76c;
  uint *******local_768;
  uint *******local_764;
  char local_75d;
  uint *******local_75c;
  uint *******local_758;
  uint ******local_754;
  uint *******local_750;
  uint *******local_74c;
  uint *******local_748;
  uint ******local_744 [115];
  uint *******local_578;
  uint ******local_574 [115];
  uint *******local_3a8;
  uint *******local_3a4;
  uint ******local_3a0 [114];
  uint *******local_1d8 [2];
  uint local_1d0 [114];
  uint local_8;
  
  local_8 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  local_790 = param_5;
  local_764 = param_6;
  fegetenv(local_7a4);
  uVar17 = 1;
  local_79c = (local_7a4[0] & 0x1f) != 0x1f;
  if ((bool)local_79c) {
    FUN_00708d94(local_7a4);
  }
  uVar14 = param_2;
  uVar6 = 0x20;
  if (((int)param_2 < 1) && ((int)param_2 < 0)) {
    uVar6 = 0x2d;
  }
  *local_790 = uVar6;
  local_790[2] = local_764;
  __controlfp_s(&local_7a8,0,0);
  if (((uVar14 & 0x7ff00000) == 0) &&
     ((param_1 == (uint *******)0x0 && (uVar14 & 0xfffff) == 0 || ((local_7a8 & 0x1000000) != 0))))
  {
    local_790[1] = 0;
LAB_0070325f:
    iVar8 = FUN_006f8593(local_764,param_7);
    if (iVar8 != 0) {
LAB_00704722:
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    goto LAB_007046fb;
  }
  _Var7 = __acrt_fp_classify((double *)&param_1);
  if (_Var7 != 0) {
    local_790[1] = 1;
    if (_Var7 == 1) {
      iVar8 = FUN_006f8593(local_764,param_7);
      if (iVar8 != 0) goto LAB_00704722;
      uVar17 = 0;
      goto LAB_007046fb;
    }
    if (((_Var7 == 2) || (_Var7 == 3)) || (_Var7 == 4)) goto LAB_0070325f;
  }
  param_2 = uVar14 & 0x7fffffff;
  local_794 = 0x8001f;
  __controlfp_s(&local_798,0,0);
  __controlfp_s((uint *)((int)&local_780 + 4),0x8001f,local_794);
  local_780 = CONCAT44(param_2,param_1);
  local_78c = param_3 + 1;
  bVar23 = (param_2 >> 0x14 & 0x7ff) != 0;
  if (bVar23) {
    iVar8 = 0x100000;
  }
  else {
    iVar8 = 0;
  }
  local_754 = (uint ******)(uint)!bVar23;
  local_774 = param_1;
  uVar14 = (param_2 & 0xfffff) + iVar8;
  local_750 = (uint *******)((int)local_754 + (param_2 >> 0x14 & 0x7ff));
  FUN_00708df0();
  FUN_006f5c30();
  local_788 = thunk_FUN_006e5750();
  if ((local_788 == 0x7fffffff) || (local_788 == 0x80000000)) {
    local_788 = 0;
  }
  local_1d8[1] = local_774;
  local_1d0[0] = uVar14;
  local_754 = (uint ******)((uVar14 != 0) + 1);
  local_1d8[0] = (uint *******)local_754;
  if (local_750 < (uint *******)0x433) {
    if (local_750 == (uint *******)0x35) {
LAB_00703878:
      local_780 = local_780 & 0xffffffff;
      uVar14 = local_1d0[(uVar14 != 0) - 1];
      iVar8 = 0x1f;
      if (uVar14 != 0) {
        for (; uVar14 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (uVar14 == 0) {
        iVar8 = 0;
      }
      else {
        iVar8 = iVar8 + 1;
      }
      pppppppuVar15 = (uint *******)((int)local_754 + (uint)(iVar8 == 0x20));
      if (pppppppuVar15 < (uint *******)0x74) {
        if ((uint ******)((int)pppppppuVar15 + -1) != (uint ******)0xffffffff) {
          ppppppuVar22 = (uint ******)((int)pppppppuVar15 + -2);
          pppppppuVar21 = (uint *******)local_754;
          ppppppuVar9 = (uint ******)((int)pppppppuVar15 + -1);
          do {
            if (ppppppuVar9 < pppppppuVar21) {
              uVar14 = local_1d0[(int)((int)ppppppuVar9 + -1)];
            }
            else {
              uVar14 = 0;
            }
            if (ppppppuVar22 < pppppppuVar21) {
              ppppppuVar13 = (uint ******)local_1d8[(int)ppppppuVar9];
            }
            else {
              ppppppuVar13 = (uint ******)0x0;
            }
            ppppppuVar16 = (uint ******)((int)ppppppuVar9 + -1);
            ppppppuVar22 = (uint ******)((int)ppppppuVar22 + -1);
            local_1d0[(int)((int)ppppppuVar9 + -1)] = (uint)ppppppuVar13 >> 0x1f | uVar14 * 2;
            pppppppuVar21 = local_1d8[0];
            ppppppuVar9 = ppppppuVar16;
          } while (ppppppuVar16 != (uint ******)0xffffffff);
        }
      }
      else {
        local_578 = (uint *******)0x0;
        local_1d8[0] = (uint *******)0x0;
        _memcpy_s(local_1d8 + 1,0x1cc,local_574,0);
        pppppppuVar15 = local_1d8[0];
      }
      local_1d8[0] = pppppppuVar15;
      uVar14 = 0x434 - (int)local_750;
      uVar20 = uVar14 >> 5;
      _memset(local_574,0,uVar20 * 4);
      local_574[uVar20] = (uint ******)(1 << ((byte)uVar14 & 0x1f));
    }
    else {
      local_574[0] = (uint ******)0x0;
      local_574[1] = (uint ******)0x100000;
      local_578 = (uint *******)0x2;
      if (uVar14 == 0) goto LAB_00703878;
      iVar8 = 0;
      do {
        if (*(int *)((int)local_574 + iVar8) != *(int *)((int)local_1d0 + iVar8 + -4))
        goto LAB_00703878;
        iVar8 = iVar8 + 4;
      } while (iVar8 != 8);
      iVar8 = 0x1f;
      if (uVar14 != 0) {
        for (; uVar14 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      local_780 = local_780 & 0xffffffff;
      if (uVar14 == 0) {
        iVar8 = 0;
      }
      else {
        iVar8 = iVar8 + 1;
      }
      pppppppuVar15 = (uint *******)((int)local_754 + (uint)(0x20U - iVar8 < 2));
      if (pppppppuVar15 < (uint *******)0x74) {
        if ((uint ******)((int)pppppppuVar15 + -1) != (uint ******)0xffffffff) {
          ppppppuVar22 = (uint ******)((int)pppppppuVar15 + -2);
          pppppppuVar21 = (uint *******)local_754;
          ppppppuVar9 = (uint ******)((int)pppppppuVar15 + -1);
          do {
            if (ppppppuVar9 < pppppppuVar21) {
              uVar14 = local_1d0[(int)((int)ppppppuVar9 + -1)];
            }
            else {
              uVar14 = 0;
            }
            if (ppppppuVar22 < pppppppuVar21) {
              ppppppuVar13 = (uint ******)local_1d8[(int)ppppppuVar9];
            }
            else {
              ppppppuVar13 = (uint ******)0x0;
            }
            ppppppuVar16 = (uint ******)((int)ppppppuVar9 + -1);
            ppppppuVar22 = (uint ******)((int)ppppppuVar22 + -1);
            local_1d0[(int)((int)ppppppuVar9 + -1)] = (uint)ppppppuVar13 >> 0x1e | uVar14 << 2;
            pppppppuVar21 = local_1d8[0];
            ppppppuVar9 = ppppppuVar16;
          } while (ppppppuVar16 != (uint ******)0xffffffff);
        }
      }
      else {
        local_578 = (uint *******)0x0;
        local_1d8[0] = (uint *******)0x0;
        _memcpy_s(local_1d8 + 1,0x1cc,local_574,0);
        pppppppuVar15 = local_1d8[0];
      }
      local_1d8[0] = pppppppuVar15;
      uVar14 = 0x435 - (int)local_750;
      uVar20 = uVar14 >> 5;
      _memset(local_574,0,uVar20 * 4);
      local_574[uVar20] = (uint ******)(1 << ((byte)uVar14 & 0x1f));
    }
    local_578 = (uint *******)(uVar20 + 1);
    local_3a8 = local_578;
    _memcpy_s(&local_3a4,0x1cc,local_574,(int)local_578 * 4);
  }
  else {
    local_574[0] = (uint ******)0x0;
    local_574[1] = (uint ******)0x100000;
    local_578 = (uint *******)0x2;
    if (uVar14 == 0) {
LAB_007035c1:
      local_75c = (uint *******)((uint)((int)local_750 + -0x432) & 0x1f);
      local_768 = (uint *******)((uint)((int)local_750 + -0x432) >> 5);
      local_758 = (uint *******)(0x20 - (int)local_75c);
      iVar8 = __allshl();
      pppppppuVar15 = (uint *******)local_754;
      local_770 = (uint *******)(iVar8 + -1);
      local_780 = local_780 & 0xffffffff;
      local_774 = (uint *******)~(uint)local_770;
      ppppppuVar22 = (uint ******)local_1d8[(int)local_754];
      iVar8 = 0x1f;
      if (ppppppuVar22 != (uint ******)0x0) {
        for (; (uint)ppppppuVar22 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (ppppppuVar22 == (uint ******)0x0) {
        local_754 = (uint ******)0x0;
      }
      else {
        local_754 = (uint ******)(iVar8 + 1);
      }
      if (((undefined1 *)((int)pppppppuVar15 + (int)local_768) < (undefined1 *)0x74) &&
         (local_74c = (uint *******)
                      ((undefined1 *)
                       ((int)pppppppuVar15 +
                       (uint)((uint *******)(0x20 - (int)local_754) < local_75c)) + (int)local_768),
         local_74c < (uint *******)0x74)) {
        local_784 = (uint *******)((int)local_768 - 1);
        local_750 = (uint *******)((int)local_74c + -1);
        if (local_750 != local_784) {
          ppppppuVar22 = (uint ******)((int)local_750 - (int)local_768);
          local_76c = (uint *******)(local_1d8 + (int)ppppppuVar22);
          do {
            if (ppppppuVar22 < pppppppuVar15) {
              local_754 = local_76c[1];
            }
            else {
              local_754 = (uint ******)0x0;
            }
            if ((uint ******)((int)ppppppuVar22 + -1) < pppppppuVar15) {
              ppppppuVar9 = *local_76c;
            }
            else {
              ppppppuVar9 = (uint ******)0x0;
            }
            local_1d0[(int)((int)local_750 + -1)] =
                 ((uint)ppppppuVar9 & (uint)local_774) >> ((byte)local_758 & 0x1f) |
                 ((uint)local_754 & (uint)local_770) << ((byte)local_75c & 0x1f);
            local_750 = (uint *******)((int)local_750 + -1);
            local_76c = local_76c + -1;
            ppppppuVar22 = (uint ******)((int)ppppppuVar22 + -1);
            pppppppuVar15 = local_1d8[0];
          } while (local_750 != local_784);
        }
        local_1d8[0] = local_74c;
        if (local_768 != (uint *******)0x0) {
          ppppppppuVar19 = local_1d8;
          for (pppppppuVar15 = local_768; ppppppppuVar19 = (uint ********)((int)ppppppppuVar19 + 4),
              pppppppuVar15 != (uint *******)0x0;
              pppppppuVar15 = (uint *******)((int)pppppppuVar15 - 1)) {
            *ppppppppuVar19 = (uint *******)0x0;
          }
        }
      }
      else {
        local_578 = (uint *******)0x0;
        local_1d8[0] = (uint *******)0x0;
        _memcpy_s(local_1d8 + 1,0x1cc,local_574,0);
      }
      local_574[0] = (uint ******)0x2;
    }
    else {
      iVar8 = 0;
      do {
        if (*(int *)((int)local_574 + iVar8) != *(int *)((int)local_1d0 + iVar8 + -4))
        goto LAB_007035c1;
        iVar8 = iVar8 + 4;
      } while (iVar8 != 8);
      local_75c = (uint *******)((uint)((int)local_750 + -0x431) & 0x1f);
      local_768 = (uint *******)((uint)((int)local_750 + -0x431) >> 5);
      local_758 = (uint *******)(0x20 - (int)local_75c);
      iVar8 = __allshl();
      pppppppuVar15 = (uint *******)local_754;
      local_770 = (uint *******)(iVar8 + -1);
      local_780 = local_780 & 0xffffffff;
      local_774 = (uint *******)~(uint)local_770;
      ppppppuVar22 = (uint ******)local_1d8[(int)local_754];
      iVar8 = 0x1f;
      if (ppppppuVar22 != (uint ******)0x0) {
        for (; (uint)ppppppuVar22 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (ppppppuVar22 == (uint ******)0x0) {
        local_754 = (uint ******)0x0;
      }
      else {
        local_754 = (uint ******)(iVar8 + 1);
      }
      if (((undefined1 *)((int)pppppppuVar15 + (int)local_768) < (undefined1 *)0x74) &&
         (local_74c = (uint *******)
                      ((undefined1 *)
                       ((int)pppppppuVar15 +
                       (uint)((uint *******)(0x20 - (int)local_754) < local_75c)) + (int)local_768),
         local_74c < (uint *******)0x74)) {
        local_784 = (uint *******)((int)local_768 - 1);
        local_750 = (uint *******)((int)local_74c + -1);
        if (local_750 != local_784) {
          ppppppuVar22 = (uint ******)((int)local_750 - (int)local_768);
          local_76c = (uint *******)(local_1d8 + (int)ppppppuVar22);
          do {
            if (ppppppuVar22 < pppppppuVar15) {
              local_754 = local_76c[1];
            }
            else {
              local_754 = (uint ******)0x0;
            }
            if ((uint ******)((int)ppppppuVar22 + -1) < pppppppuVar15) {
              ppppppuVar9 = *local_76c;
            }
            else {
              ppppppuVar9 = (uint ******)0x0;
            }
            local_1d0[(int)((int)local_750 + -1)] =
                 ((uint)ppppppuVar9 & (uint)local_774) >> ((byte)local_758 & 0x1f) |
                 ((uint)local_754 & (uint)local_770) << ((byte)local_75c & 0x1f);
            local_750 = (uint *******)((int)local_750 + -1);
            local_76c = local_76c + -1;
            ppppppuVar22 = (uint ******)((int)ppppppuVar22 + -1);
            pppppppuVar15 = local_1d8[0];
          } while (local_750 != local_784);
        }
        local_1d8[0] = local_74c;
        if (local_768 != (uint *******)0x0) {
          ppppppppuVar19 = local_1d8;
          for (pppppppuVar15 = local_768; ppppppppuVar19 = (uint ********)((int)ppppppppuVar19 + 4),
              pppppppuVar15 != (uint *******)0x0;
              pppppppuVar15 = (uint *******)((int)pppppppuVar15 - 1)) {
            *ppppppppuVar19 = (uint *******)0x0;
          }
        }
      }
      else {
        local_578 = (uint *******)0x0;
        local_1d8[0] = (uint *******)0x0;
        _memcpy_s(local_1d8 + 1,0x1cc,local_574,0);
      }
      local_574[0] = (uint ******)0x4;
    }
    local_574[1] = (uint ******)0x0;
    local_3a8 = (uint *******)0x1;
    local_578 = (uint *******)0x1;
    _memcpy_s(&local_3a4,0x1cc,local_574,4);
  }
  uVar17 = 1;
  local_754 = (uint ******)0xa;
  if ((int)local_788 < 0) {
    local_780 = CONCAT44(-local_788,(undefined4)local_780);
    uVar4 = local_780;
    for (local_774 = (uint *******)(-local_788 / 10); local_780 = uVar4,
        local_774 != (uint *******)0x0; local_774 = (uint *******)((int)local_774 - (int)local_75c))
    {
      local_75c = local_774;
      if ((uint *******)0x26 < local_774) {
        local_75c = (uint *******)0x26;
      }
      uVar14 = (uint)(byte)(&DAT_0073249e)[(int)local_75c * 4];
      bVar2 = (&DAT_0073249f)[(int)local_75c * 4];
      local_578 = (uint *******)(uVar14 + bVar2);
      _memset(local_574,0,uVar14 * 4);
      FUN_006e6bd0(local_574 + uVar14,
                   &DAT_00731b98 + (uint)*(ushort *)(&DAT_0073249c + (int)local_75c * 4) * 4,
                   (uint)bVar2 << 2);
      pppppppuVar15 = local_1d8[1];
      local_770 = local_578;
      if (local_578 < (uint *******)0x2) {
        if (local_574[0] == (uint ******)0x0) {
          local_1d8[0] = (uint *******)0x0;
          _memcpy_s(local_1d8 + 1,0x1cc,local_974,0);
        }
        else if ((local_574[0] != (uint ******)0x1) && (local_1d8[0] != (uint *******)0x0)) {
          uVar14 = 0;
          local_758 = local_1d8[0];
          pppppppuVar15 = (uint *******)0x0;
          do {
            lVar3 = ZEXT48(local_574[0]) * (ulonglong)local_1d0[(int)((int)pppppppuVar15 + -1)] +
                    (ulonglong)uVar14;
            local_1d0[(int)((int)pppppppuVar15 + -1)] = (uint)lVar3;
            uVar14 = (uint)((ulonglong)lVar3 >> 0x20);
            pppppppuVar15 = (uint *******)((int)pppppppuVar15 + 1);
          } while (pppppppuVar15 != local_1d8[0]);
          if (uVar14 == 0) goto LAB_00703f84;
          if (local_1d8[0] < (uint *******)0x73) {
            local_1d0[(int)((int)local_1d8[0] + -1)] = uVar14;
            local_1d8[0] = (uint *******)((int)local_1d8[0] + 1);
            goto LAB_00703f84;
          }
          local_1d8[0] = (uint *******)0x0;
          _memcpy_s(local_1d8 + 1,0x1cc,local_974,0);
          bVar23 = false;
          goto LAB_007042a7;
        }
LAB_00703f84:
        bVar23 = true;
      }
      else {
        if (local_1d8[0] < (uint *******)0x2) {
          local_758 = local_1d8[1];
          local_1d8[0] = local_578;
          _memcpy_s(local_1d8 + 1,0x1cc,local_574,(int)local_578 << 2);
          if (pppppppuVar15 == (uint *******)0x0) {
            local_1d8[0] = (uint *******)0x0;
            rVar12 = 0;
            ppppppuVar22 = local_974;
            goto LAB_00704294;
          }
          if ((pppppppuVar15 != (uint *******)0x1) && (local_1d8[0] != (uint *******)0x0)) {
            uVar14 = 0;
            local_770 = local_1d8[0];
            pppppppuVar15 = (uint *******)0x0;
            do {
              lVar3 = ZEXT48(local_758) * (ulonglong)local_1d0[(int)((int)pppppppuVar15 + -1)] +
                      (ulonglong)uVar14;
              local_1d0[(int)((int)pppppppuVar15 + -1)] = (uint)lVar3;
              uVar14 = (uint)((ulonglong)lVar3 >> 0x20);
              pppppppuVar15 = (uint *******)((int)pppppppuVar15 + 1);
            } while (pppppppuVar15 != local_1d8[0]);
            if (uVar14 != 0) {
              if ((uint *******)0x72 < local_1d8[0]) {
LAB_0070435f:
                local_1d8[0] = (uint *******)0x0;
                _memcpy_s(local_1d8 + 1,0x1cc,local_974,0);
                bVar23 = false;
                goto LAB_007042a7;
              }
              local_1d0[(int)((int)local_1d8[0] + -1)] = uVar14;
              local_1d8[0] = (uint *******)((int)local_1d8[0] + 1);
            }
          }
        }
        else {
          local_768 = local_574;
          if (local_578 < local_1d8[0]) {
            local_758 = (uint *******)(local_1d8 + 1);
            local_784 = local_578;
            local_770 = local_1d8[0];
          }
          else {
            local_768 = (uint *******)(local_1d8 + 1);
            local_758 = local_574;
            local_784 = local_1d8[0];
          }
          pppppppuVar15 = (uint *******)0x0;
          local_1d8[0] = (uint *******)0x0;
          local_748 = (uint *******)0x0;
          if (local_784 != (uint *******)0x0) {
            do {
              if (local_768[(int)pppppppuVar15] == (uint ******)0x0) {
                if (pppppppuVar15 == local_1d8[0]) {
                  local_744[(int)pppppppuVar15] = (uint ******)0x0;
                  local_1d8[0] = (uint *******)((int)pppppppuVar15 + 1);
                  local_748 = local_1d8[0];
                }
              }
              else {
                local_74c = (uint *******)0x0;
                local_750 = (uint *******)0x0;
                pppppppuVar21 = pppppppuVar15;
                if (local_770 != (uint *******)0x0) {
                  do {
                    if (pppppppuVar21 == (uint *******)0x73) break;
                    if (pppppppuVar21 == local_1d8[0]) {
                      local_744[(int)pppppppuVar21] = (uint ******)0x0;
                      local_748 = (uint *******)
                                  ((undefined1 *)((int)local_750 + 1) + (int)pppppppuVar15);
                    }
                    ppppppuVar9 = local_758[(int)local_750];
                    ppppppuVar13 = local_768[(int)pppppppuVar15];
                    uVar14 = (uint)(ZEXT48(ppppppuVar9) * ZEXT48(ppppppuVar13));
                    puVar10 = (undefined1 *)(uVar14 + (int)local_74c);
                    ppppppuVar22 = (uint ******)(local_744 + (int)pppppppuVar21);
                    pppppuVar1 = *ppppppuVar22;
                    *ppppppuVar22 = (uint *****)(puVar10 + (int)*ppppppuVar22);
                    local_74c = (uint *******)
                                ((int)(ZEXT48(ppppppuVar9) * ZEXT48(ppppppuVar13) >> 0x20) +
                                 (uint)CARRY4(uVar14,(uint)local_74c) +
                                (uint)CARRY4((uint)pppppuVar1,(uint)puVar10));
                    local_750 = (uint *******)((int)local_750 + 1);
                    pppppppuVar21 = (uint *******)((int)pppppppuVar21 + 1);
                    local_1d8[0] = local_748;
                  } while (local_750 != local_770);
                  if (local_74c != (uint *******)0x0) {
                    pppppppuVar18 = pppppppuVar21;
                    local_76c = local_744 + (int)pppppppuVar21;
                    do {
                      if (pppppppuVar18 == (uint *******)0x73) goto LAB_0070435f;
                      pppppppuVar21 = (uint *******)((int)pppppppuVar18 + 1);
                      if (pppppppuVar18 == local_1d8[0]) {
                        *local_76c = (uint ******)0x0;
                        local_748 = pppppppuVar21;
                      }
                      pppppppuVar11 = local_76c + 1;
                      ppppppuVar22 = *local_76c;
                      *local_76c = (uint ******)((int)*local_76c + (int)local_74c);
                      local_74c = (uint *******)(uint)CARRY4((uint)ppppppuVar22,(uint)local_74c);
                      local_1d8[0] = local_748;
                      pppppppuVar18 = pppppppuVar21;
                      local_76c = pppppppuVar11;
                    } while (local_74c != (uint *******)0x0);
                  }
                }
                if (pppppppuVar21 == (uint *******)0x73) goto LAB_0070435f;
              }
              pppppppuVar15 = (uint *******)((int)pppppppuVar15 + 1);
            } while (pppppppuVar15 != local_784);
          }
          rVar12 = (int)local_1d8[0] << 2;
          ppppppuVar22 = (uint ******)local_744;
LAB_00704294:
          _memcpy_s(local_1d8 + 1,0x1cc,ppppppuVar22,rVar12);
        }
        bVar23 = true;
      }
LAB_007042a7:
      if (!bVar23) goto LAB_007043ad;
      uVar4 = local_780;
    }
    local_780._4_4_ = (uint)(uVar4 >> 0x20);
    uVar14 = local_780._4_4_ % 10;
    if (uVar14 != 0) {
      uVar14 = *(uint *)(&DAT_00732534 + uVar14 * 2);
      local_780._0_4_ = (undefined4)uVar4;
      local_780 = CONCAT44(uVar14,(undefined4)local_780);
      if (uVar14 == 0) {
LAB_007043ad:
        local_1d8[0] = (uint *******)0x0;
        pppppppuVar15 = (uint *******)(local_1d8 + 1);
        goto LAB_007043ba;
      }
      if ((uVar14 != 1) && (local_1d8[0] != (uint *******)0x0)) {
        local_774 = (uint *******)0x0;
        pppppppuVar15 = (uint *******)0x0;
        do {
          lVar3 = (ulonglong)uVar14 * (ulonglong)local_1d0[(int)((int)pppppppuVar15 + -1)] +
                  ZEXT48(local_774);
          local_1d0[(int)((int)pppppppuVar15 + -1)] = (uint)lVar3;
          local_774 = (uint *******)((ulonglong)lVar3 >> 0x20);
          pppppppuVar15 = (uint *******)((int)pppppppuVar15 + 1);
        } while (pppppppuVar15 != local_1d8[0]);
        if (local_774 != (uint *******)0x0) {
          if ((uint *******)0x72 < local_1d8[0]) goto LAB_007043ad;
          local_1d0[(int)local_1d8[0] + -1] = (uint)local_774;
          local_1d8[0] = (uint *******)((int)local_1d8[0] + 1);
        }
      }
    }
  }
  else {
    for (local_758 = (uint *******)(local_788 / 10); local_758 != (uint *******)0x0;
        local_758 = (uint *******)((int)local_758 - (int)local_76c)) {
      local_76c = local_758;
      if ((uint *******)0x26 < local_758) {
        local_76c = (uint *******)0x26;
      }
      uVar14 = (uint)(byte)(&DAT_0073249e)[(int)local_76c * 4];
      bVar2 = (&DAT_0073249f)[(int)local_76c * 4];
      local_578 = (uint *******)(uVar14 + bVar2);
      _memset(local_574,0,uVar14 * 4);
      FUN_006e6bd0(local_574 + uVar14,
                   &DAT_00731b98 + (uint)*(ushort *)(&DAT_0073249c + (int)local_76c * 4) * 4,
                   (uint)bVar2 << 2);
      pppppppuVar15 = local_3a4;
      local_784 = local_578;
      if (local_578 < (uint *******)0x2) {
        if (local_574[0] == (uint ******)0x0) {
          local_748 = (uint *******)0x0;
          local_3a8 = (uint *******)0x0;
          _memcpy_s(&local_3a4,0x1cc,local_744,0);
        }
        else if ((local_574[0] != (uint ******)0x1) && (local_3a8 != (uint *******)0x0)) {
          ppppppuVar22 = (uint ******)0x0;
          local_774 = local_3a8;
          pppppppuVar15 = (uint *******)0x0;
          do {
            lVar3 = ZEXT48(local_574[0]) * ZEXT48((&local_3a4)[(int)pppppppuVar15]) +
                    ZEXT48(ppppppuVar22);
            (&local_3a4)[(int)pppppppuVar15] = (uint *******)(uint ******)lVar3;
            ppppppuVar22 = (uint ******)((ulonglong)lVar3 >> 0x20);
            pppppppuVar15 = (uint *******)((int)pppppppuVar15 + 1);
          } while (pppppppuVar15 != local_3a8);
          if (ppppppuVar22 == (uint ******)0x0) goto LAB_00703a68;
          if (local_3a8 < (uint *******)0x73) {
            (&local_3a4)[(int)local_3a8] = (uint *******)ppppppuVar22;
            local_3a8 = (uint *******)((int)local_3a8 + 1);
            goto LAB_00703a68;
          }
          local_578 = (uint *******)0x0;
          local_3a8 = (uint *******)0x0;
          _memcpy_s(&local_3a4,0x1cc,local_574,0);
          bVar23 = false;
          goto LAB_00703da1;
        }
LAB_00703a68:
        bVar23 = true;
      }
      else {
        if (local_3a8 < (uint *******)0x2) {
          local_774 = local_3a4;
          local_3a8 = local_578;
          _memcpy_s(&local_3a4,0x1cc,local_574,(int)local_578 << 2);
          if (pppppppuVar15 == (uint *******)0x0) {
            local_578 = (uint *******)0x0;
            local_3a8 = (uint *******)0x0;
            rVar12 = 0;
            ppppppuVar22 = (uint ******)local_574;
            goto LAB_00703d8e;
          }
          if ((pppppppuVar15 != (uint *******)0x1) && (local_3a8 != (uint *******)0x0)) {
            ppppppuVar22 = (uint ******)0x0;
            local_770 = local_3a8;
            pppppppuVar15 = (uint *******)0x0;
            do {
              lVar3 = ZEXT48(local_774) * ZEXT48((&local_3a4)[(int)pppppppuVar15]) +
                      ZEXT48(ppppppuVar22);
              (&local_3a4)[(int)pppppppuVar15] = (uint *******)(uint ******)lVar3;
              ppppppuVar22 = (uint ******)((ulonglong)lVar3 >> 0x20);
              pppppppuVar15 = (uint *******)((int)pppppppuVar15 + 1);
            } while (pppppppuVar15 != local_3a8);
            if (ppppppuVar22 != (uint ******)0x0) {
              if ((uint *******)0x72 < local_3a8) {
                local_578 = (uint *******)0x0;
                ppppppuVar22 = (uint ******)local_574;
LAB_00703e12:
                local_3a8 = (uint *******)0x0;
                _memcpy_s(&local_3a4,0x1cc,ppppppuVar22,0);
                bVar23 = false;
                goto LAB_00703da1;
              }
              (&local_3a4)[(int)local_3a8] = (uint *******)ppppppuVar22;
              local_3a8 = (uint *******)((int)local_3a8 + 1);
            }
          }
        }
        else {
          local_768 = local_574;
          if (local_578 < local_3a8) {
            local_75c = (uint *******)&local_3a4;
            local_770 = local_578;
            local_784 = local_3a8;
          }
          else {
            local_768 = (uint *******)&local_3a4;
            local_75c = local_574;
            local_770 = local_3a8;
          }
          pppppppuVar15 = (uint *******)0x0;
          local_3a8 = (uint *******)0x0;
          local_748 = (uint *******)0x0;
          if (local_770 != (uint *******)0x0) {
            do {
              if (local_768[(int)pppppppuVar15] == (uint ******)0x0) {
                if (pppppppuVar15 == local_3a8) {
                  local_744[(int)pppppppuVar15] = (uint ******)0x0;
                  local_3a8 = (uint *******)((int)pppppppuVar15 + 1);
                  local_748 = local_3a8;
                }
              }
              else {
                local_74c = (uint *******)0x0;
                local_750 = (uint *******)0x0;
                pppppppuVar21 = pppppppuVar15;
                if (local_784 != (uint *******)0x0) {
                  do {
                    if (pppppppuVar21 == (uint *******)0x73) break;
                    if (pppppppuVar21 == local_3a8) {
                      local_744[(int)pppppppuVar21] = (uint ******)0x0;
                      local_748 = (uint *******)
                                  ((undefined1 *)((int)local_750 + 1) + (int)pppppppuVar15);
                    }
                    ppppppuVar9 = local_75c[(int)local_750];
                    ppppppuVar13 = local_768[(int)pppppppuVar15];
                    uVar14 = (uint)(ZEXT48(ppppppuVar9) * ZEXT48(ppppppuVar13));
                    puVar10 = (undefined1 *)(uVar14 + (int)local_74c);
                    ppppppuVar22 = (uint ******)(local_744 + (int)pppppppuVar21);
                    pppppuVar1 = *ppppppuVar22;
                    *ppppppuVar22 = (uint *****)(puVar10 + (int)*ppppppuVar22);
                    local_74c = (uint *******)
                                ((int)(ZEXT48(ppppppuVar9) * ZEXT48(ppppppuVar13) >> 0x20) +
                                 (uint)CARRY4(uVar14,(uint)local_74c) +
                                (uint)CARRY4((uint)pppppuVar1,(uint)puVar10));
                    local_750 = (uint *******)((int)local_750 + 1);
                    pppppppuVar21 = (uint *******)((int)pppppppuVar21 + 1);
                    local_3a8 = local_748;
                  } while (local_750 != local_784);
                  if (local_74c != (uint *******)0x0) {
                    pppppppuVar18 = pppppppuVar21;
                    local_750 = local_744 + (int)pppppppuVar21;
                    do {
                      if (pppppppuVar18 == (uint *******)0x73) goto LAB_00703df8;
                      pppppppuVar21 = (uint *******)((int)pppppppuVar18 + 1);
                      if (pppppppuVar18 == local_3a8) {
                        *local_750 = (uint ******)0x0;
                        local_748 = pppppppuVar21;
                      }
                      pppppppuVar11 = local_750 + 1;
                      ppppppuVar22 = *local_750;
                      *local_750 = (uint ******)((int)*local_750 + (int)local_74c);
                      local_74c = (uint *******)(uint)CARRY4((uint)ppppppuVar22,(uint)local_74c);
                      local_3a8 = local_748;
                      pppppppuVar18 = pppppppuVar21;
                      local_750 = pppppppuVar11;
                    } while (local_74c != (uint *******)0x0);
                  }
                }
                if (pppppppuVar21 == (uint *******)0x73) {
LAB_00703df8:
                  ppppppuVar22 = local_974;
                  goto LAB_00703e12;
                }
              }
              pppppppuVar15 = (uint *******)((int)pppppppuVar15 + 1);
            } while (pppppppuVar15 != local_770);
          }
          rVar12 = (int)local_3a8 << 2;
          ppppppuVar22 = (uint ******)local_744;
LAB_00703d8e:
          _memcpy_s(&local_3a4,0x1cc,ppppppuVar22,rVar12);
        }
        bVar23 = true;
      }
LAB_00703da1:
      if (!bVar23) goto LAB_00703e3a;
    }
    if (local_788 % 10 != 0) {
      local_774 = *(uint ********)(&DAT_00732534 + (local_788 % 10) * 2);
      if (local_774 == (uint *******)0x0) {
LAB_00703e3a:
        local_3a8 = (uint *******)0x0;
        pppppppuVar15 = (uint *******)&local_3a4;
LAB_007043ba:
        _memcpy_s(pppppppuVar15,0x1cc,local_974,0);
      }
      else if ((local_774 != (uint *******)0x1) && (local_3a8 != (uint *******)0x0)) {
        local_758 = (uint *******)0x0;
        pppppppuVar15 = (uint *******)0x0;
        do {
          lVar3 = ZEXT48(local_774) * ZEXT48((&local_3a4)[(int)pppppppuVar15]) + ZEXT48(local_758);
          (&local_3a4)[(int)pppppppuVar15] = (uint *******)(uint ******)lVar3;
          local_758 = (uint *******)((ulonglong)lVar3 >> 0x20);
          pppppppuVar15 = (uint *******)((int)pppppppuVar15 + 1);
        } while (pppppppuVar15 != local_3a8);
        if (local_758 != (uint *******)0x0) {
          if ((uint *******)0x72 < local_3a8) goto LAB_00703e3a;
          (&local_3a4)[(int)local_3a8] = local_758;
          local_3a8 = (uint *******)((int)local_3a8 + 1);
        }
      }
    }
  }
  pppppppuVar15 = local_764;
  local_74c = local_764;
  if (local_1d8[0] != (uint *******)0x0) {
    local_774 = (uint *******)0x0;
    pppppppuVar21 = (uint *******)0x0;
    do {
      lVar3 = (ulonglong)local_1d0[(int)((int)pppppppuVar21 + -1)] * 10 + ZEXT48(local_774);
      local_1d0[(int)((int)pppppppuVar21 + -1)] = (uint)lVar3;
      local_774 = (uint *******)((ulonglong)lVar3 >> 0x20);
      pppppppuVar21 = (uint *******)((int)pppppppuVar21 + 1);
    } while (pppppppuVar21 != local_1d8[0]);
    if (local_774 != (uint *******)0x0) {
      if (local_1d8[0] < (uint *******)0x73) {
        local_1d0[(int)((int)local_1d8[0] + -1)] = (uint)local_774;
        local_1d8[0] = (uint *******)((int)local_1d8[0] + 1);
      }
      else {
        local_1d8[0] = (uint *******)0x0;
        _memcpy_s(local_1d8 + 1,0x1cc,local_974,0);
      }
    }
  }
  iVar8 = FUN_006f0680();
  if (iVar8 == 10) {
    pppppppuVar15 = (uint *******)((int)local_764 + 1);
    local_788 = local_788 + 1;
    *(undefined1 *)local_764 = 0x31;
    local_780 = CONCAT44(local_3a8,(undefined4)local_780);
    local_74c = pppppppuVar15;
    if (local_3a8 != (uint *******)0x0) {
      ppppppuVar22 = (uint ******)0x0;
      pppppppuVar21 = (uint *******)0x0;
      do {
        lVar3 = ZEXT48((&local_3a4)[(int)pppppppuVar21]) * 10 + ZEXT48(ppppppuVar22);
        (&local_3a4)[(int)pppppppuVar21] = (uint *******)(uint ******)lVar3;
        ppppppuVar22 = (uint ******)((ulonglong)lVar3 >> 0x20);
        pppppppuVar21 = (uint *******)((int)pppppppuVar21 + 1);
      } while (pppppppuVar21 != local_3a8);
      local_780 = CONCAT44(ppppppuVar22,(undefined4)local_780);
      if (ppppppuVar22 != (uint ******)0x0) {
        if (local_3a8 < (uint *******)0x73) {
          (&local_3a4)[(int)local_3a8] = (uint *******)ppppppuVar22;
          local_3a8 = (uint *******)((int)local_3a8 + 1);
        }
        else {
          local_3a8 = (uint *******)0x0;
          _memcpy_s(&local_3a4,0x1cc,local_974,0);
        }
      }
    }
  }
  else if (iVar8 == 0) {
    local_788 = local_788 - 1;
  }
  else {
    pppppppuVar15 = (uint *******)((int)local_764 + 1);
    *(char *)local_764 = (char)iVar8 + '0';
    local_74c = pppppppuVar15;
  }
  local_790[1] = local_788;
  uVar14 = local_78c;
  if (((-1 < (int)local_788) && (local_78c < 0x80000000)) && (param_4 == 0)) {
    uVar14 = local_78c + local_788;
  }
  uVar20 = param_7 - 1U;
  if (uVar14 <= param_7 - 1U) {
    uVar20 = uVar14;
  }
  local_758 = (uint *******)(uVar20 + (int)local_764);
  local_75d = '\0';
  if (pppppppuVar15 != local_758) {
    do {
      pppppppuVar21 = local_74c;
      local_780 = CONCAT44(local_1d8[0],(undefined4)local_780);
      if (local_1d8[0] == (uint *******)0x0) break;
      uVar14 = 0;
      pppppppuVar15 = (uint *******)0x0;
      do {
        lVar3 = (ulonglong)local_1d0[(int)((int)pppppppuVar15 + -1)] * 1000000000 +
                (ulonglong)uVar14;
        local_1d0[(int)((int)pppppppuVar15 + -1)] = (uint)lVar3;
        uVar14 = (uint)((ulonglong)lVar3 >> 0x20);
        pppppppuVar15 = (uint *******)((int)pppppppuVar15 + 1);
      } while (pppppppuVar15 != local_1d8[0]);
      local_780 = CONCAT44(uVar14,(undefined4)local_780);
      if (uVar14 != 0) {
        if (local_1d8[0] < (uint *******)0x73) {
          local_1d0[(int)((int)local_1d8[0] + -1)] = uVar14;
          local_1d8[0] = (uint *******)((int)local_1d8[0] + 1);
        }
        else {
          local_1d8[0] = (uint *******)0x0;
          _memcpy_s(local_1d8 + 1,0x1cc,local_974,0);
        }
      }
      local_75c = (uint *******)FUN_006f0680();
      uVar14 = (int)local_758 - (int)pppppppuVar21;
      local_774 = (uint *******)0x8;
      do {
        cVar5 = (char)(ZEXT48(local_75c) % ZEXT48(local_754)) + '0';
        local_78c = CONCAT31((int3)(ZEXT48(local_75c) % ZEXT48(local_754) >> 8),cVar5);
        local_75c = (uint *******)((uint)local_75c / (uint)local_754);
        if (local_774 < uVar14) {
          *(char *)((int)local_774 + (int)pppppppuVar21) = cVar5;
        }
        else if (cVar5 != '0') {
          local_75d = '\x01';
        }
        local_774 = (uint *******)((int)local_774 - 1);
      } while (local_774 != (uint *******)0xffffffff);
      if (9 < uVar14) {
        uVar14 = 9;
      }
      pppppppuVar15 = (uint *******)((int)pppppppuVar21 + uVar14);
      local_774 = (uint *******)0xffffffff;
      local_74c = pppppppuVar15;
    } while (pppppppuVar15 != local_758);
  }
  *(undefined1 *)pppppppuVar15 = 0;
  if ((local_1d8[0] != (uint *******)0x0) || (local_75d != '\0')) {
    uVar17 = 0;
  }
  __controlfp_s((uint *)((int)&local_780 + 4),local_798,local_794);
LAB_007046fb:
  if (local_79c != '\0') {
    FUN_00708d48(local_7a4);
  }
  return uVar17;
}


/* ==== 0070472f  FUN_0070472f  size=176 ==== */

undefined4 FUN_0070472f(byte *param_1,uint param_2,undefined4 *param_3,undefined4 param_4)

{
  byte bVar1;
  undefined4 uVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  
  if (param_1 != (byte *)0x0) {
    if (param_2 != 0) {
      if ((param_2 & 0xffffff80) == 0) {
        *param_1 = (byte)param_2;
        return 1;
      }
      if ((param_2 & 0xfffff800) == 0) {
        bVar3 = 0xc0;
        iVar4 = 1;
        iVar5 = iVar4;
      }
      else if ((param_2 & 0xffff0000) == 0) {
        if ((0xd7ff < param_2) && (param_2 < 0xe000)) {
LAB_007047ce:
          uVar2 = FUN_00708f14(param_3,param_4);
          return uVar2;
        }
        iVar4 = 2;
        bVar3 = 0xe0;
        iVar5 = iVar4;
      }
      else {
        if (((param_2 & 0xffe00000) != 0) || (0x10ffff < param_2)) goto LAB_007047ce;
        iVar4 = 3;
        bVar3 = 0xf0;
        iVar5 = iVar4;
      }
      do {
        bVar1 = (byte)param_2;
        param_2 = param_2 >> 6;
        param_1[iVar4] = bVar1 & 0x3f | 0x80;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      *param_1 = (byte)param_2 | bVar3;
      uVar2 = FUN_00708f00(iVar5 + 1,param_3);
      return uVar2;
    }
    *param_1 = 0;
  }
  *param_3 = 0;
  param_3[1] = 0;
  return 1;
}


/* ==== 007047df  FUN_007047df  size=44 ==== */

char FUN_007047df(char *param_1)

{
  char cVar1;
  
  if (*param_1 == '\0') {
    cVar1 = '\x01';
  }
  else if (param_1[1] == '\0') {
    cVar1 = '\x02';
  }
  else {
    cVar1 = (param_1[2] != '\0') + '\x03';
  }
  return cVar1;
}


/* ==== 0070480b  FUN_0070480b  size=67 ==== */

uint FUN_0070480b(undefined2 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  uint uVar1;
  uint local_8;
  
  uVar1 = FUN_00708f36(&local_8,param_2,param_3,param_4,param_5);
  if (uVar1 < 5) {
    if (0xffff < local_8) {
      local_8 = 0xfffd;
    }
    if (param_1 != (undefined2 *)0x0) {
      *param_1 = (short)local_8;
    }
  }
  return uVar1;
}


/* ==== 0070484e  FUN_0070484e  size=264 ==== */

int FUN_0070484e(ushort *param_1,int *param_2,uint param_3,undefined4 param_4,int param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint in_ECX;
  uint uVar4;
  ushort *puVar5;
  int iVar6;
  uint local_c [2];
  
  iVar6 = *param_2;
  local_c[0] = in_ECX;
  puVar5 = param_1;
  if (param_1 == (ushort *)0x0) {
    iVar2 = 0;
    uVar1 = FUN_007047df(iVar6);
    while (iVar3 = FUN_00708f36(0,iVar6,uVar1,param_4,param_5), iVar3 != -1) {
      if (iVar3 == 0) {
        return iVar2;
      }
      if (iVar3 == 4) {
        iVar2 = iVar2 + 1;
      }
      iVar6 = iVar6 + iVar3;
      iVar2 = iVar2 + 1;
      uVar1 = FUN_007047df(iVar6);
    }
    *(undefined1 *)(param_5 + 0x1c) = 1;
    *(undefined4 *)(param_5 + 0x18) = 0x2a;
    iVar2 = -1;
  }
  else {
    for (; param_3 != 0; param_3 = param_3 - 1) {
      uVar1 = FUN_007047df(iVar6);
      iVar2 = FUN_00708f36(local_c,iVar6,uVar1,param_4,param_5);
      if (iVar2 == -1) {
        *param_2 = iVar6;
        *(undefined1 *)(param_5 + 0x1c) = 1;
        *(undefined4 *)(param_5 + 0x18) = 0x2a;
        return -1;
      }
      if (iVar2 == 0) {
        iVar6 = 0;
        *puVar5 = 0;
        break;
      }
      uVar4 = local_c[0];
      if (0xffff < local_c[0]) {
        if (param_3 < 2) break;
        local_c[0] = local_c[0] - 0x10000;
        param_3 = param_3 - 1;
        *puVar5 = (ushort)(local_c[0] >> 10) | 0xd800;
        puVar5 = puVar5 + 1;
        uVar4 = local_c[0] & 0x3ff | 0xdc00;
      }
      *puVar5 = (ushort)uVar4;
      iVar6 = iVar6 + iVar2;
      puVar5 = puVar5 + 1;
    }
    iVar2 = (int)puVar5 - (int)param_1 >> 1;
    *param_2 = iVar6;
  }
  return iVar2;
}


/* ==== 0070496f  FUN_0070496f  size=176 ==== */

uint FUN_0070496f(uint param_1)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0;
  uVar1 = (ushort)param_1 & 0x8040;
  if (uVar1 == 0x8000) {
    uVar3 = 0xc00;
  }
  else if (uVar1 == 0x40) {
    uVar3 = 0x800;
  }
  else {
    uVar3 = 0x400;
    if (uVar1 != 0x8040) {
      uVar3 = 0;
    }
  }
  uVar2 = param_1 & 0x6000;
  if (uVar2 != 0) {
    if (uVar2 == 0x2000) {
      uVar4 = 0x100;
    }
    else if (uVar2 == 0x4000) {
      uVar4 = 0x200;
    }
    else if (uVar2 == 0x6000) {
      uVar4 = 0x300;
    }
  }
  return (((param_1 & 0x400 | (param_1 >> 2 & 0x400 | param_1 & 0x800) >> 2) >> 2 | param_1 & 0x200)
          >> 3 | param_1 & 0x180) >> 3 | uVar3 | uVar4;
}


/* ==== 00704a1f  FUN_00704a1f  size=173 ==== */

uint FUN_00704a1f(uint param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 local_8;
  
  local_8 = 0x1000;
  uVar2 = 0;
  if ((param_1 & 0x300) == 0) {
    local_8 = 0x2000;
  }
  else if ((param_1 & 0x300) != 0x200) {
    local_8 = 0;
  }
  uVar1 = param_1 & 0xc00;
  if (uVar1 != 0) {
    if (uVar1 == 0x400) {
      uVar2 = 0x100;
    }
    else if (uVar1 == 0x800) {
      uVar2 = 0x200;
    }
    else if (uVar1 == 0xc00) {
      uVar2 = 0x300;
    }
  }
  return (param_1 & 4 | (param_1 & 2) << 3) * 2 |
         ((param_1 >> 2 & 8 | param_1 & 0x10) >> 2 | param_1 & 8) >> 1 | (param_1 & 1) << 4 |
         (param_1 & 0x1000) << 2 | local_8 | uVar2;
}


/* ==== 00704acc  FUN_00704acc  size=182 ==== */

uint FUN_00704acc(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = param_1 >> 2;
  uVar2 = param_1 & 0xc00;
  uVar3 = (param_1 & 0xc03fffff) >> 0x16;
  uVar4 = 0;
  if (uVar2 == 0x400) {
    uVar2 = 0x8040;
  }
  else if (uVar2 == 0x800) {
    uVar2 = 0x40;
  }
  else if (uVar2 == 0xc00) {
    uVar2 = 0x8000;
  }
  else {
    uVar2 = 0;
  }
  if (uVar3 != 0) {
    if (uVar3 == 0x100) {
      uVar4 = 0x2000;
    }
    else if (uVar3 == 0x200) {
      uVar4 = 0x4000;
    }
    else if (uVar3 == 0x300) {
      uVar4 = 0x6000;
    }
  }
  return ((((uVar1 & 0x1000000) >> 0x16 |
           (((uVar1 & 0x400000) >> 0x16) << 2 | (uVar1 & 0x800000) >> 0x16) << 2) << 2 |
          (uVar1 & 0x2000000) >> 0x16) << 3 | (uVar1 & 0xc000000) >> 0x16) << 3 | uVar2 | uVar4;
}


/* ==== 00704b82  FUN_00704b82  size=182 ==== */

uint FUN_00704b82(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = param_1 >> 2;
  uVar4 = 0;
  if ((param_1 & 0x3000) == 0) {
    uVar2 = 0x300;
  }
  else {
    uVar2 = uVar4;
    if ((param_1 & 0x3000) == 0x1000) {
      uVar2 = 0x200;
    }
  }
  uVar1 = (param_1 & 0xc00000) >> 0xe;
  if (uVar1 != 0) {
    if (uVar1 == 0x100) {
      uVar4 = 0x400;
    }
    else if (uVar1 == 0x200) {
      uVar4 = 0x800;
    }
    else if (uVar1 == 0x300) {
      uVar4 = 0xc00;
    }
  }
  return ((uVar3 & 0x10000) >> 0xe | (((uVar3 & 0x4000) >> 0xe) << 2 | (uVar3 & 0x8000) >> 0xe) << 2
         ) * 2 | (uVar3 & 0xc0000) >> 0x12 | (uVar3 & 0x20000) >> 0xf | param_1 >> 2 & 0x1000 |
         uVar2 | uVar4;
}


/* ==== 00704cda  FUN_00704cda  size=170 ==== */

uint FUN_00704cda(void)

{
  uint uVar1;
  uint uVar2;
  ushort in_FPUStatusWord;
  
  uVar1 = (uint)in_FPUStatusWord;
  uVar1 = ((in_FPUStatusWord >> 2 & 8 | uVar1 & 0x10) >> 2 | uVar1 & 8) >> 1 |
          ((uVar1 & 2) << 3 | uVar1 & 4) * 2 | (uVar1 & 1) << 4;
  if (DAT_007c8b90 < 1) {
    uVar2 = 0;
  }
  else {
    uVar2 = MXCSR & 0x3f;
  }
  uVar2 = ((uVar2 >> 2 & 8 | uVar2 & 0x10) >> 2 | uVar2 & 8) >> 1 |
          ((uVar2 & 2) << 3 | uVar2 & 4) * 2 | (uVar2 & 1) << 4;
  return (uVar2 << 8 | uVar1) << 0x10 | uVar2 | uVar1;
}


/* ==== 00704d84  FUN_00704d84  size=123 ==== */

void FUN_00704d84(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  undefined2 in_FPUControlWord;
  uint local_24 [7];
  uint local_8;
  
  uVar1 = FUN_00704b82(param_1);
  puVar3 = local_24;
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  local_24[0] = CONCAT22(local_24[0]._2_2_,in_FPUControlWord);
  local_8 = uVar1 & 7999;
  local_24[0] = local_24[0] & 0xffffe0c0 | local_8;
  uVar1 = FUN_00704acc(param_1);
  if (0 < DAT_007c8b90) {
    MXCSR = MXCSR & 0xffff003f | uVar1 & 0xffc0;
  }
  return;
}


/* ==== 00704dff  FUN_00704dff  size=252 ==== */

void FUN_00704dff(uint param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_24 [8];
  
  puVar2 = local_24;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1 = param_1 >> 0x18;
  if (0 < DAT_007c8b90) {
    MXCSR = MXCSR & 0xffffffc0 |
            -(uint)((param_1 & 1) != 0) & 0x20 | -(uint)((param_1 & 2) != 0) & 0x10 |
            -(uint)((param_1 & 4) != 0) & 8 | -(uint)((param_1 & 8) != 0) & 4 |
            (uint)((param_1 & 0x10) != 0) | -(uint)((param_1 & 0x20) != 0) & 2;
  }
  return;
}


/* ==== 00704f17  FUN_00704f17  size=79 ==== */

int FUN_00704f17(ushort *param_1,ushort *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (param_3 != 0) {
    do {
      uVar1 = (uint)*param_1;
      param_1 = param_1 + 1;
      if (uVar1 - 0x41 < 0x1a) {
        uVar1 = uVar1 + 0x20;
      }
      uVar2 = (uint)*param_2;
      param_2 = param_2 + 1;
      if (uVar2 - 0x41 < 0x1a) {
        uVar2 = uVar2 + 0x20;
      }
    } while (((uVar1 - uVar2 == 0) && (uVar1 != 0)) && (param_3 = param_3 + -1, param_3 != 0));
    return uVar1 - uVar2;
  }
  return 0;
}


/* ==== 00704fd3  FUN_00704fd3  size=203 ==== */

int FUN_00704fd3(byte *param_1,byte *param_2,uint param_3,undefined4 param_4)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int local_18;
  int local_14;
  char local_c;
  
  if (param_1 == (byte *)0x0) {
    puVar2 = (undefined4 *)FUN_006f390a();
    *puVar2 = 0x16;
    FUN_006e8c2f();
    iVar3 = 0x7fffffff;
  }
  else if (param_2 == (byte *)0x0) {
    puVar2 = (undefined4 *)FUN_006f390a();
    *puVar2 = 0x16;
    FUN_006e8c2f();
    iVar3 = 0x7fffffff;
  }
  else if (param_3 < 0x80000000) {
    if (param_3 == 0) {
      iVar3 = 0;
    }
    else {
      FUN_006ee0ac(param_4);
      do {
        bVar1 = *param_1;
        param_1 = param_1 + 1;
        uVar4 = (uint)*(byte *)((uint)bVar1 + *(int *)(local_14 + 0x94));
        bVar1 = *param_2;
        param_2 = param_2 + 1;
        iVar3 = uVar4 - *(byte *)((uint)bVar1 + *(int *)(local_14 + 0x94));
        if ((iVar3 != 0) || (uVar4 == 0)) break;
        param_3 = param_3 - 1;
      } while (param_3 != 0);
      if (local_c != '\0') {
        *(uint *)(local_18 + 0x350) = *(uint *)(local_18 + 0x350) & 0xfffffffd;
      }
    }
  }
  else {
    puVar2 = (undefined4 *)FUN_006f390a();
    *puVar2 = 0x16;
    FUN_006e8c2f();
    iVar3 = 0x7fffffff;
  }
  return iVar3;
}


/* ==== 0070509e  common_sopen_dispatch<char>  size=143 ==== */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    int __cdecl common_sopen_dispatch<char>(char const * const,int,int,int,int * const,int)
   
   Library: Visual Studio 2019 Release */

int __cdecl
common_sopen_dispatch<char>
          (char *param_1,int param_2,int param_3,int param_4,int *param_5,int param_6)

{
  undefined4 *puVar1;
  int iVar2;
  int local_24;
  errno_t local_20;
  void *local_14;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_007b5548;
  uStack_c = 0x7050aa;
  if (((param_5 == (int *)0x0) || (*param_5 = -1, param_1 == (char *)0x0)) ||
     ((param_6 != 0 && ((param_4 & 0xfffffe7fU) != 0)))) {
    puVar1 = (undefined4 *)FUN_006f390a();
    iVar2 = 0x16;
    *puVar1 = 0x16;
    FUN_006e8c2f();
  }
  else {
    local_24 = 0;
    local_20 = 0;
    local_8 = (undefined *)0x0;
    iVar2 = __sopen_nolock(&local_24,param_5,param_1,param_2,param_3,param_4,param_6);
    local_8 = (undefined *)0xfffffffe;
    local_20 = iVar2;
    FUN_00705133();
    if (iVar2 != 0) {
      *param_5 = -1;
    }
  }
  ExceptionList = local_14;
  return iVar2;
}


/* ==== 00705133  FUN_00705133  size=70 ==== */

void FUN_00705133(void)

{
  int unaff_EBP;
  uint *unaff_ESI;
  int unaff_EDI;
  
  if (*(int *)(unaff_EBP + -0x20) != 0) {
    if (unaff_EDI != 0) {
      *(byte *)((&DAT_007c8dc0)[(int)*unaff_ESI >> 6] + 0x28 + (*unaff_ESI & 0x3f) * 0x38) =
           *(byte *)((&DAT_007c8dc0)[(int)*unaff_ESI >> 6] + 0x28 + (*unaff_ESI & 0x3f) * 0x38) &
           0xfe;
    }
    ___acrt_lowio_unlock_fh(*unaff_ESI);
  }
  return;
}


/* ==== 00705179  FUN_00705179  size=597 ==== */

undefined4 FUN_00705179(uint param_1,byte param_2,uint param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint in_ECX;
  int iVar4;
  longlong lVar5;
  uint in_stack_00000020;
  char *in_stack_00000024;
  int local_c;
  uint local_8;
  
  iVar4 = 0;
  *in_stack_00000024 = '\0';
  if (-1 < *(char *)((&DAT_007c8dc0)[(int)param_1 >> 6] + 0x28 + (param_1 & 0x3f) * 0x38)) {
    return 0;
  }
  local_8 = in_ECX;
  if ((in_stack_00000020 & 0x74000) == 0) {
    local_8 = 0;
    iVar1 = FUN_006f7a67(&local_8);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    if ((local_8 & 0x74000) == 0) {
      in_stack_00000020 = in_stack_00000020 | 0x4000;
    }
    else {
      in_stack_00000020 = in_stack_00000020 | local_8 & 0x74000;
    }
  }
  uVar2 = in_stack_00000020 & 0x74000;
  local_c = 2;
  if (uVar2 == 0x4000) {
    *in_stack_00000024 = '\0';
  }
  else if ((uVar2 == 0x10000) || (uVar2 == 0x14000)) {
    if ((in_stack_00000020 & 0x301) == 0x301) goto LAB_0070522e;
  }
  else if ((uVar2 == 0x20000) || (uVar2 == 0x24000)) {
LAB_0070522e:
    *in_stack_00000024 = '\x02';
  }
  else if ((uVar2 == 0x40000) || (uVar2 == 0x44000)) {
    *in_stack_00000024 = '\x01';
  }
  if ((in_stack_00000020 & 0x70000) == 0) {
    return 0;
  }
  if ((param_2 & 0x40) != 0) {
    return 0;
  }
  uVar2 = param_3 & 0xc0000000;
  if (uVar2 == 0x40000000) {
LAB_0070526c:
    if ((param_4 != 1) && (param_4 != 2)) {
      if ((param_4 == 3) || (param_4 == 4)) {
        lVar5 = FUN_006f8e7d(param_1,0,0,2);
        if (lVar5 != 0) {
          lVar5 = FUN_006f8e7d(param_1,0,0,0);
          if (lVar5 == -1) goto LAB_007052c4;
          if ((param_3 & 0x80000000) == 0) {
            return 0;
          }
          goto LAB_007052d9;
        }
      }
      else if (param_4 != 5) {
        return 0;
      }
    }
    if (*in_stack_00000024 == '\x01') {
      local_c = 3;
      local_8 = 0xbfbbef;
    }
    else {
      if (*in_stack_00000024 != '\x02') {
        return 0;
      }
      local_8 = 0xfeff;
    }
    while (iVar1 = FUN_006fd4de(param_1,(int)&local_8 + iVar4,local_c - iVar4), iVar1 != -1) {
      iVar4 = iVar4 + iVar1;
      if (local_c <= iVar4) {
        return 0;
      }
    }
    goto LAB_007052c4;
  }
  if (uVar2 != 0x80000000) {
    if (uVar2 != 0xc0000000) {
      return 0;
    }
    goto LAB_0070526c;
  }
LAB_007052d9:
  local_8 = 0;
  iVar4 = FUN_006f94d0(param_1,&local_8,3);
  if ((iVar4 < 1) && (iVar4 == -1)) goto LAB_007052c4;
  if (iVar4 == 2) {
LAB_00705317:
    if ((local_8 & 0xffff) == 0xfffe) {
      puVar3 = (undefined4 *)FUN_006f390a();
      *puVar3 = 0x16;
      goto LAB_007052c4;
    }
    if ((local_8 & 0xffff) == 0xfeff) {
      lVar5 = FUN_006f8e7d(param_1,2,0,0);
      if (lVar5 != -1) {
        *in_stack_00000024 = '\x02';
        return 0;
      }
      goto LAB_007052c4;
    }
  }
  else if (iVar4 == 3) {
    if (local_8 == 0xbfbbef) {
      *in_stack_00000024 = '\x01';
      return 0;
    }
    goto LAB_00705317;
  }
  lVar5 = FUN_006f8e7d(param_1,0,0,0);
  if (lVar5 != -1) {
    return 0;
  }
LAB_007052c4:
  puVar3 = (undefined4 *)FUN_006f390a();
  return *puVar3;
}


/* ==== 007053cf  create_file  size=37 ==== */

/* Library Function - Single Match
    void * __cdecl create_file(wchar_t const * const,struct _SECURITY_ATTRIBUTES * const,struct
   `anonymous namespace'::file_options)
   
   Library: Visual Studio 2019 Release */

void * __cdecl
create_file(LPCWSTR param_1,LPSECURITY_ATTRIBUTES param_2,undefined4 param_3,DWORD param_4,
           DWORD param_5,DWORD param_6,uint param_7,uint param_8)

{
  HANDLE pvVar1;
  
  pvVar1 = CreateFileW(param_1,param_4,param_6,param_2,param_5,param_7 | param_8,(HANDLE)0x0);
  return pvVar1;
}


/* ==== 007053f4  decode_open_create_flags  size=112 ==== */

/* Library Function - Single Match
    unsigned long __cdecl decode_open_create_flags(int)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

ulong __cdecl decode_open_create_flags(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  
  uVar1 = param_1 & 0x700;
  if (uVar1 < 0x401) {
    if ((uVar1 == 0x400) || (uVar1 == 0)) {
      return 3;
    }
    if (uVar1 == 0x100) {
      return 4;
    }
    if (uVar1 != 0x200) {
      if (uVar1 == 0x300) {
        return 2;
      }
LAB_00705446:
      puVar2 = (undefined4 *)FUN_006f390a();
      *puVar2 = 0x16;
      FUN_006e8c2f();
      return 0xffffffff;
    }
  }
  else {
    if (uVar1 == 0x500) {
      return 1;
    }
    if (uVar1 != 0x600) {
      if (uVar1 == 0x700) {
        return 1;
      }
      goto LAB_00705446;
    }
  }
  return 5;
}


/* ==== 00705464  FUN_00705464  size=377 ==== */

byte * FUN_00705464(byte *param_1,uint param_2,int param_3,byte param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  ulong uVar4;
  int local_8;
  
  uVar1 = param_2 & 3;
  *param_1 = 0;
  if (uVar1 == 0) {
    iVar3 = -0x80000000;
  }
  else if (uVar1 == 1) {
    iVar3 = (-(uint)((param_2 & 0x70000) != 0 && (param_2 & 8) != 0) & 0x80000000) + 0x40000000;
  }
  else if (uVar1 == 2) {
    iVar3 = -0x40000000;
  }
  else {
    puVar2 = (undefined4 *)FUN_006f390a();
    *puVar2 = 0x16;
    FUN_006e8c2f();
    iVar3 = -1;
  }
  *(int *)(param_1 + 4) = iVar3;
  uVar4 = decode_open_create_flags(param_2);
  *(ulong *)(param_1 + 8) = uVar4;
  if (param_3 == 0x10) {
    uVar1 = 0;
  }
  else if (param_3 == 0x20) {
    uVar1 = 1;
  }
  else if (param_3 == 0x30) {
    uVar1 = 2;
  }
  else if (param_3 == 0x40) {
    uVar1 = 3;
  }
  else if (param_3 == 0x80) {
    uVar1 = (uint)(*(int *)(param_1 + 4) == -0x80000000);
  }
  else {
    puVar2 = (undefined4 *)FUN_006f390a();
    *puVar2 = 0x16;
    FUN_006e8c2f();
    uVar1 = 0xffffffff;
  }
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(uint *)(param_1 + 0xc) = uVar1;
  param_1[0x10] = 0x80;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  if ((char)param_2 < '\0') {
    *param_1 = *param_1 | 0x10;
  }
  if ((param_2 & 0x8000) == 0) {
    if ((param_2 & 0x74000) == 0) {
      iVar3 = FUN_006f7a67(&local_8);
      if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      if (local_8 == 0x8000) goto LAB_00705561;
    }
    *param_1 = *param_1 | 0x80;
  }
LAB_00705561:
  if (((param_2 & 0x100) != 0) && (-1 < (char)(~(byte)DAT_007c933c & param_4))) {
    param_1[0x10] = 1;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
  }
  if ((param_2 & 0x40) != 0) {
    *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 0x4000000;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x10000;
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 4;
  }
  if ((param_2 & 0x1000) != 0) {
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x100;
  }
  if ((param_2 & 0x2000) != 0) {
    *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 0x2000000;
  }
  if ((param_2 & 0x20) == 0) {
    if ((param_2 & 0x10) != 0) {
      *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 0x10000000;
    }
  }
  else {
    *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 0x8000000;
  }
  return param_1;
}


/* ==== 007055de  truncate_ctrl_z_if_present  size=170 ==== */

/* Library Function - Single Match
    int __cdecl truncate_ctrl_z_if_present(int)
   
   Library: Visual Studio 2019 Release */

int __cdecl truncate_ctrl_z_if_present(int param_1)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  uint local_8;
  
  bVar1 = *(byte *)((&DAT_007c8dc0)[param_1 >> 6] + 0x28 + (param_1 & 0x3fU) * 0x38);
  if (((bVar1 & 0x48) == 0) && ((char)bVar1 < '\0')) {
    lVar4 = FUN_006f8e7d(param_1,0xffffffff,0xffffffff,2);
    if (lVar4 == -1) {
      piVar2 = (int *)FUN_006f38f7();
      if (*piVar2 == 0x83) goto LAB_00705681;
    }
    else {
      local_8 = local_8 & 0xffff0000;
      iVar3 = FUN_006f94d0(param_1,&local_8,1);
      if ((iVar3 == 0) && ((short)local_8 == 0x1a)) {
        iVar3 = FUN_0070919e(param_1,lVar4);
        if (iVar3 == -1) goto LAB_00705633;
      }
      lVar4 = FUN_006f8e7d(param_1,0,0,0);
      if (lVar4 != -1) goto LAB_00705681;
    }
LAB_00705633:
    piVar2 = (int *)FUN_006f390a();
    iVar3 = *piVar2;
  }
  else {
LAB_00705681:
    iVar3 = 0;
  }
  return iVar3;
}


/* ==== 007056f6  FID_conflict:__sopen_s  size=32 ==== */

/* Library Function - Multiple Matches With Different Base Names
    __sopen_s
    __wsopen_s
   
   Library: Visual Studio 2019 Release */

errno_t __cdecl
FID_conflict___sopen_s
          (int *_FileHandle,char *_Filename,int _OpenFlag,int _ShareFlag,int _PermissionMode)

{
  int iVar1;
  
  iVar1 = common_sopen_dispatch<char>(_Filename,_OpenFlag,_ShareFlag,_PermissionMode,_FileHandle,1);
  return iVar1;
}


/* ==== 00705a72  FID_conflict:GetTableIndexFromLocaleName  size=80 ==== */

/* Library Function - Multiple Matches With Different Base Names
    int __cdecl GetTableIndexFromLocaleName(wchar_t const *)
    int __cdecl ATL::_AtlGetTableIndexFromLocaleName(wchar_t const *)
    _GetTableIndexFromLocaleName
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined4 FID_conflict_GetTableIndexFromLocaleName(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar2 = 0xe3;
  do {
    iVar3 = (iVar2 + iVar4) / 2;
    iVar1 = FUN_00704f17(param_1,*(undefined4 *)(&UNK_0073d4c0 + iVar3 * 8),0x55);
    if (iVar1 == 0) {
      return *(undefined4 *)(&UNK_0073d4c4 + iVar3 * 8);
    }
    if (iVar1 < 0) {
      iVar2 = iVar3 + -1;
    }
    else {
      iVar4 = iVar3 + 1;
    }
  } while (iVar4 <= iVar2);
  return 0xffffffff;
}


/* ==== 00705d0c  FUN_00705d0c  size=99 ==== */

undefined4 FUN_00705d0c(char *param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  char *pcVar4;
  undefined4 uStack_10;
  
  if ((param_1 != (char *)0x0) && (pcVar4 = param_1, iVar2 = param_3, param_2 != 0)) {
    while (iVar2 != 0) {
      if (*pcVar4 == '\0') {
        param_3 = param_3 - (int)pcVar4;
        do {
          cVar1 = pcVar4[param_3];
          *pcVar4 = cVar1;
          pcVar4 = pcVar4 + 1;
          if (cVar1 == '\0') {
            return 0;
          }
          param_2 = param_2 + -1;
        } while (param_2 != 0);
        *param_1 = '\0';
        puVar3 = (undefined4 *)FUN_006f390a();
        uStack_10 = 0x22;
        goto LAB_00705d32;
      }
      param_2 = param_2 + -1;
      pcVar4 = pcVar4 + 1;
      iVar2 = param_2;
    }
    *param_1 = '\0';
  }
  puVar3 = (undefined4 *)FUN_006f390a();
  uStack_10 = 0x16;
LAB_00705d32:
  *puVar3 = uStack_10;
  FUN_006e8c2f();
  return uStack_10;
}


/* ==== 00705d6f  FUN_00705d6f  size=121 ==== */

undefined4
FUN_00705d6f(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_c;
  undefined4 local_8;
  
  local_8 = 0;
  iVar1 = FUN_00705de8(param_1,&local_8);
  if (iVar1 == 0) {
    local_c = 0;
    iVar1 = FUN_00705ec2(param_2,&local_c);
    if (iVar1 == 0) {
      *param_3 = local_8;
      *param_4 = local_c;
      FUN_006f9a4d(0);
      FUN_006f9a4d(0);
      uVar2 = 0;
    }
    else {
      FUN_006f9a4d(local_c);
      FUN_006f9a4d(local_8);
      uVar2 = 0xffffffff;
    }
  }
  else {
    FUN_006f9a4d(local_8);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


/* ==== 00705de8  FUN_00705de8  size=217 ==== */

undefined4 FUN_00705de8(int *param_1,undefined4 *param_2)

{
  char *pcVar1;
  char cVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  char *pcVar6;
  int *piVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined4 uVar10;
  char *pcVar11;
  
  *param_2 = 0;
  pcVar11 = (char *)0x0;
  piVar7 = param_1;
  if (*param_1 != 0) {
    do {
      pcVar6 = (char *)*piVar7;
      piVar7 = piVar7 + 1;
      pcVar1 = pcVar6 + 1;
      do {
        cVar2 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar2 != '\0');
      pcVar11 = pcVar6 + (int)(pcVar11 + (1 - (int)pcVar1));
    } while (*piVar7 != 0);
    if ((char *)0x1 < pcVar11) goto LAB_00705e23;
  }
  pcVar11 = (char *)0x1;
LAB_00705e23:
  puVar3 = (undefined1 *)__calloc_base(pcVar11,1);
  if (puVar3 == (undefined1 *)0x0) {
    ___acrt_errno_map_os_error(8);
    puVar4 = (undefined4 *)FUN_006f390a();
    uVar10 = 0xc;
    *puVar4 = 0xc;
  }
  else {
    iVar5 = *param_1;
    puVar9 = puVar3;
    if (iVar5 != 0) {
      do {
        iVar5 = FUN_006f8593(puVar9,puVar3 + ((int)pcVar11 - (int)puVar9),iVar5);
        if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
          __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        pcVar6 = (char *)*param_1;
        pcVar1 = pcVar6 + 1;
        do {
          cVar2 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar2 != '\0');
        param_1 = param_1 + 1;
        puVar8 = puVar9 + ((int)pcVar6 - (int)pcVar1);
        *puVar8 = 0x20;
        puVar9 = puVar8 + 1;
        iVar5 = *param_1;
      } while (iVar5 != 0);
      *puVar8 = 0;
      *param_2 = puVar3;
      FUN_006f9a4d(0);
      return 0;
    }
    *param_2 = puVar3;
    uVar10 = 0;
  }
  FUN_006f9a4d(0);
  return uVar10;
}


/* ==== 00705ec2  FUN_00705ec2  size=710 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_00705ec2(int *param_1,undefined4 *param_2)

{
  char cVar1;
  wchar_t wVar2;
  undefined4 uVar3;
  errno_t eVar4;
  undefined4 *puVar5;
  char *pcVar6;
  int iVar7;
  int *piVar8;
  undefined1 *puVar9;
  wchar_t *pwVar10;
  char *pcVar11;
  char *pcVar12;
  int iVar13;
  undefined1 *puVar14;
  int *local_28;
  wchar_t *local_24;
  char *local_20;
  char *local_1c;
  char local_15;
  undefined2 local_14;
  undefined4 local_10;
  undefined2 local_c;
  undefined1 local_a;
  uint local_8;
  
  local_8 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  local_28 = param_1;
  *param_2 = 0;
  if (param_1 == (int *)0x0) {
    uVar3 = 0;
  }
  else {
    _local_14 = 0x74737953;
    local_10 = 0x6f526d65;
    local_c = 0x746f;
    local_a = 0;
    local_24 = (wchar_t *)0x0;
    eVar4 = FID_conflict___dupenv_s(&local_24,(size_t *)0x0,&local_14);
    if (eVar4 == 0) {
      if (local_24 == (wchar_t *)0x0) {
        local_20 = (char *)0xb;
      }
      else {
        pwVar10 = local_24;
        do {
          wVar2 = *pwVar10;
          pwVar10 = (wchar_t *)((int)pwVar10 + 1);
        } while ((char)wVar2 != '\0');
        local_20 = (char *)((int)pwVar10 + (0xc - (int)((int)local_24 + 1)));
      }
      local_1c = (char *)0x2;
      iVar13 = *param_1;
      piVar8 = param_1;
      while (iVar13 != 0) {
        pcVar11 = (char *)*piVar8;
        piVar8 = piVar8 + 1;
        pcVar6 = pcVar11 + 1;
        do {
          cVar1 = *pcVar11;
          pcVar11 = pcVar11 + 1;
        } while (cVar1 != '\0');
        local_1c = pcVar11 + (int)(local_1c + (1 - (int)pcVar6));
        iVar13 = *piVar8;
      }
      pcVar6 = (char *)FUN_00701729();
      if (pcVar6 == (char *)0x0) {
        FUN_006f9a4d(0);
        uVar3 = 0x16;
      }
      else {
        cVar1 = *pcVar6;
        pcVar11 = pcVar6;
        while (pcVar12 = pcVar11, cVar1 != '=') {
          do {
            cVar1 = *pcVar11;
            pcVar11 = pcVar11 + 1;
          } while (cVar1 != '\0');
          cVar1 = *pcVar11;
        }
        do {
          if (((pcVar12[1] == '\0') || (pcVar12[2] != ':')) || (pcVar12[3] != '=')) break;
          pcVar12 = pcVar12 + 4;
          do {
            cVar1 = *pcVar12;
            pcVar12 = pcVar12 + 1;
          } while (cVar1 != '\0');
        } while (*pcVar12 == '=');
        iVar13 = (int)pcVar12 - (int)pcVar11;
        for (piVar8 = param_1; (char *)*piVar8 != (char *)0x0; piVar8 = piVar8 + 1) {
          pcVar12 = (char *)&local_14;
          do {
            cVar1 = *pcVar12;
            pcVar12 = pcVar12 + 1;
          } while (cVar1 != '\0');
          iVar7 = __strnicmp((char *)*piVar8,(char *)&local_14,(int)pcVar12 - ((int)&local_14 + 1));
          if (iVar7 == 0) {
            local_15 = '\x01';
            local_1c = local_1c + iVar13;
            goto LAB_00706037;
          }
        }
        local_15 = '\0';
        local_1c = local_1c + iVar13 + (int)local_20;
LAB_00706037:
        puVar9 = (undefined1 *)__calloc_base(local_1c,1);
        if (puVar9 != (undefined1 *)0x0) {
          puVar14 = puVar9;
          if (iVar13 != 0) {
            FUN_006e6bd0(puVar9,pcVar11,iVar13);
            local_1c = local_1c + -iVar13;
            puVar14 = puVar9 + iVar13;
          }
          iVar13 = *param_1;
          while (iVar13 != 0) {
            iVar13 = FUN_006f8593(puVar14,local_1c,iVar13);
            if (iVar13 != 0) goto LAB_0070617c;
            pcVar12 = (char *)*local_28;
            pcVar11 = pcVar12 + 1;
            do {
              cVar1 = *pcVar12;
              pcVar12 = pcVar12 + 1;
            } while (cVar1 != '\0');
            local_1c = local_1c + -(int)(pcVar12 + (1 - (int)pcVar11));
            puVar14 = puVar14 + (int)(pcVar12 + (1 - (int)pcVar11));
            local_28 = local_28 + 1;
            iVar13 = *local_28;
          }
          if (local_15 == '\0') {
            iVar13 = FUN_006f8593(puVar14,local_20,&local_14);
            if (((iVar13 != 0) ||
                (iVar13 = FUN_00705d0c(puVar14,local_20,&DAT_0073e410), iVar13 != 0)) ||
               ((local_24 != (wchar_t *)0x0 &&
                (iVar13 = FUN_00705d0c(puVar14,local_20,local_24), iVar13 != 0))))
            goto LAB_0070617c;
            puVar14 = puVar14 + (int)local_20;
          }
          if (puVar14 == puVar9) {
            *puVar14 = 0;
            puVar14 = puVar14 + 1;
          }
          *puVar14 = 0;
          *param_2 = puVar9;
          FUN_006f9a4d(0);
          FUN_006f9a4d(pcVar6);
          FUN_006f9a4d(local_24);
          return 0;
        }
        ___acrt_errno_map_os_error(0xe);
        puVar5 = (undefined4 *)FUN_006f390a();
        uVar3 = 0xc;
        *puVar5 = 0xc;
        FUN_006f9a4d(0);
        FUN_006f9a4d(pcVar6);
      }
    }
    else {
      if (eVar4 == 0x16) {
LAB_0070617c:
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      puVar5 = (undefined4 *)FUN_006f390a();
      uVar3 = *puVar5;
    }
    FUN_006f9a4d(local_24);
  }
  return uVar3;
}


/* ==== 00706189  FUN_00706189  size=11 ==== */

void FUN_00706189(void)

{
  FUN_00705d6f();
  return;
}


/* ==== 00706282  FUN_00706282  size=168 ==== */

uint FUN_00706282(char *param_1,char *param_2,uint param_3)

{
  undefined4 *puVar1;
  char *pcVar2;
  char cVar3;
  char *pcVar4;
  
  if (param_2 == (char *)0x0) {
    puVar1 = (undefined4 *)FUN_006f390a();
    *puVar1 = 0x16;
    return 0;
  }
  if (param_3 != 0) {
    *param_2 = '\0';
  }
  if (param_3 < 2) {
    puVar1 = (undefined4 *)FUN_006f390a();
    *puVar1 = 0x16;
    return 0;
  }
  for (; cVar3 = *param_1, cVar3 == ';'; param_1 = param_1 + 1) {
  }
  pcVar4 = param_2 + (param_3 - 1);
  pcVar2 = param_1;
  while (cVar3 != '\0') {
    if (cVar3 == ';') goto LAB_00706313;
    pcVar2 = pcVar2 + 1;
    if (cVar3 == '\"') {
      while ((cVar3 = *pcVar2, cVar3 != '\0' && (pcVar2 = pcVar2 + 1, cVar3 != '\"'))) {
        *param_2 = cVar3;
        param_2 = param_2 + 1;
        if (param_2 == pcVar4) goto LAB_00706302;
      }
    }
    else {
      *param_2 = cVar3;
      param_2 = param_2 + 1;
      if (param_2 == pcVar4) {
LAB_00706302:
        *param_2 = '\0';
        puVar1 = (undefined4 *)FUN_006f390a();
        *puVar1 = 0x22;
        return 0;
      }
    }
    cVar3 = *pcVar2;
  }
LAB_00706319:
  *param_2 = '\0';
  return -(uint)(pcVar2 != param_1) & (uint)pcVar2;
LAB_00706313:
  do {
    pcVar2 = pcVar2 + 1;
  } while (*pcVar2 == ';');
  goto LAB_00706319;
}


/* ==== 0070632a  FUN_0070632a  size=11 ==== */

void FUN_0070632a(void)

{
  FUN_00706282();
  return;
}


/* ==== 00706350  FUN_00706350  size=24 ==== */

void FUN_00706350(void)

{
  float10 in_ST0;
  
  FUN_0070636e((double)in_ST0);
  return;
}


/* ==== 0070636e  FUN_0070636e  size=681 ==== */

float10 FUN_0070636e(double param_1)

{
  int iVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double in_XMM7_Qa;
  
  dVar2 = ABS(in_XMM7_Qa);
  dVar3 = ABS(in_XMM7_Qa);
  if (!NAN(dVar2)) {
    if (dVar2 < 1.633123935319537e+16) {
      if (0.03125 <= dVar2) {
        if (dVar2 < 0.375) {
          dVar2 = dVar2 * dVar2;
          dVar5 = dVar2 * dVar2;
          dVar3 = dVar3 * dVar3 * dVar3 * dVar3;
          return (float10)(in_XMM7_Qa -
                          ((((((((dVar5 * 0.0026934075931626827 + 0.022732276941641268) * dVar5 +
                                0.04125694610825324) * dVar5 + 0.05252293309770195) * dVar5 +
                              0.06666504934349429) * dVar5 + 0.09090908458517269) * dVar5 +
                            0.14285714285263723) * dVar5 + 0.33333333333333315) * dVar2 +
                          ((((((dVar3 * -0.010952639006211013 + -0.033483926618350056) * dVar3 +
                              -0.047051350333818964) * dVar3 + -0.0588080589751801) * dVar3 +
                            -0.07692295551132346) * dVar3 + -0.11111111089426066) * dVar3 +
                          -0.19999999999995077) * dVar3 + 0.0) * in_XMM7_Qa);
        }
        if (8.0 <= dVar2) {
          iVar1 = 0x300;
          dVar3 = -1.0 / dVar2;
        }
        else {
          iVar4 = (uint)((ulonglong)(dVar2 + 8.0) >> 0x2c) - 0x40201;
          iVar1 = iVar4 * 3;
          dVar3 = (dVar2 - *(double *)(&DAT_00734708 + iVar4 * 0x18)) /
                  (dVar2 * *(double *)(&DAT_00734708 + iVar4 * 0x18) + 1.0);
        }
        dVar5 = dVar3 * dVar3;
        dVar6 = dVar5 * dVar5;
        dVar7 = dVar3 * dVar3 * dVar3 * dVar3;
        return (float10)(double)((ulonglong)
                                 (*(double *)(&DAT_007346f8 + iVar1 * 8) -
                                 ((((((dVar6 * 0.0597832644196164 + 0.09090016113103182) * dVar6 +
                                     0.14285714182967618) * dVar6 + 0.33333333333332743) * dVar5 +
                                   ((dVar7 * -0.07658138963640501 + -0.11111098126247418) * dVar7 +
                                   -0.19999999999600315) * dVar7 + 0.0) * dVar3 -
                                  *(double *)(&DAT_00734700 + iVar1 * 8)) - dVar3)) |
                                (ulonglong)in_XMM7_Qa ^ (ulonglong)dVar2);
      }
      if (7.450580596923828e-09 <= dVar2) {
        dVar2 = dVar2 * dVar2;
        dVar5 = dVar2 * dVar2;
        dVar3 = dVar3 * dVar3 * dVar3 * dVar3;
        return (float10)(in_XMM7_Qa -
                        ((((dVar5 * 0.0597832644196164 + 0.09090016113103182) * dVar5 +
                          0.14285714182967618) * dVar5 + 0.33333333333332743) * dVar2 +
                        ((dVar3 * -0.07658138963640501 + -0.11111098126247418) * dVar3 +
                        -0.19999999999600315) * dVar3 + 0.0) * in_XMM7_Qa);
      }
      if (dVar2 == 0.0) {
        return (float10)param_1;
      }
      if (dVar2 < 2.2250738585072014e-308) {
        return (float10)0.0 + (float10)param_1;
      }
      return (float10)4.778309726736481e-299 * (float10)4.778309726736481e-299 + (float10)param_1;
    }
    if (!NAN((double)((ulonglong)dVar2 & 0x7ff0000000000000))) {
      return (float10)4.778309726736481e-299 +
             (float10)*(double *)(&DAT_0073e440 + (param_1._4_4_ >> 0x1f) * -8);
    }
  }
  return (float10)param_1;
}


/* ==== 00706880  FUN_00706880  size=21 ==== */

unkbyte10 FUN_00706880(void)

{
  float10 in_ST0;
  float10 fVar1;
  unkbyte10 Var2;
  
  fVar1 = (float10)f2xm1(-(ROUND(in_ST0) - in_ST0));
  Var2 = fscale((float10)1 + fVar1,ROUND(in_ST0));
  return Var2;
}


/* ==== 00706895  FUN_00706895  size=23 ==== */

void FUN_00706895(void)

{
  return;
}


/* ==== 007068ac  FUN_007068ac  size=25 ==== */

undefined4 FUN_007068ac(void)

{
  uint in_EAX;
  
  if ((in_EAX & 0x80000) != 0) {
    return 0;
  }
  return 0;
}


/* ==== 00706908  FUN_00706908  size=22 ==== */

uint FUN_00706908(undefined4 param_1,uint param_2)

{
  if ((param_2 & 0x7ff00000) != 0x7ff00000) {
    return param_2 & 0x7ff00000;
  }
  return param_2;
}


/* ==== 0070691e  FUN_0070691e  size=13 ==== */

void FUN_0070691e(void)

{
  return;
}


/* ==== 00706969  FUN_00706969  size=163 ==== */

void FUN_00706969(void)

{
  int in_EDX;
  ushort in_FPUStatusWord;
  float10 in_ST0;
  ushort unaff_retaddr;
  uint uStack_4;
  
  uStack_4 = (uint)((ulonglong)(double)in_ST0 >> 0x20);
  if (((ulonglong)(double)in_ST0 & 0x7ff0000000000000) == 0) {
    fscale(in_ST0,(float10)1536.0);
  }
  else if ((uStack_4 & 0x7ff00000) == 0x7ff00000) {
    fscale(in_ST0,(float10)-1536.0);
  }
  else if (((unaff_retaddr == 0x27f) || ((unaff_retaddr & 0x20) != 0)) ||
          ((in_FPUStatusWord & 0x20) == 0)) {
    return;
  }
  if (in_EDX == 0x1d) {
    FUN_00706a10();
    return;
  }
  __startOneArgErrorHandling();
  return;
}


/* ==== 00706a10  FUN_00706a10  size=23 ==== */

float10 FUN_00706a10(void)

{
  float10 in_ST0;
  
  FUN_00709760();
  return (float10)(double)in_ST0;
}


/* ==== 00706a70  FUN_00706a70  size=24 ==== */

void FUN_00706a70(void)

{
  float10 in_ST0;
  
  FUN_00706a8e((double)in_ST0);
  return;
}


/* ==== 00706a8e  FUN_00706a8e  size=590 ==== */

float10 FUN_00706a8e(double param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  double dVar8;
  undefined1 in_XMM0 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double local_c;
  
  iVar4 = 0;
  while( true ) {
    uVar7 = in_XMM0._0_8_;
    uVar2 = (uint)(ushort)(in_XMM0._6_2_ >> 4);
    dVar8 = (double)(uVar7 & 0xfffffffffffff | 0x3ff0000000000000);
    uVar1 = SUB82(dVar8 + 4398046511103.0073,0) & 0x7f0;
    dVar10 = (double)(uVar7 & 0xfffffffe00000 | 0x3ff0000000000000);
    dVar12 = (double)(uVar7 & 0xfffffffe00000 | 0x3ff0000000000000);
    dVar11 = dVar10 * *(double *)(&DAT_00735f50 + uVar1) - 1.0;
    dVar8 = (dVar8 - dVar10) * *(double *)(&DAT_00735f50 + uVar1);
    dVar9 = ((double)(uVar7 & 0xfffffffffffff | 0x3ff0000000000000) - dVar12) *
            *(double *)(&UNK_00735f58 + uVar1);
    dVar10 = dVar8 + dVar11;
    in_XMM0._8_8_ = dVar9 + (dVar12 * *(double *)(&UNK_00735f58 + uVar1) - 1.0);
    uVar3 = uVar2 - 1;
    if (uVar3 < 0x7fe) {
      iVar4 = (uVar2 - 0x3ff) + iVar4;
      dVar12 = (double)iVar4;
      iVar5 = 0;
      if (uVar1 + iVar4 * 0x400 == 0) {
        iVar5 = 0x10;
      }
      return (float10)(((dVar10 * 0.1428709072311373 + -0.1666800146149218) * dVar10 +
                       0.1999999994995557) * dVar10 * dVar10 * dVar10 * dVar10 * dVar10 +
                       ((in_XMM0._8_8_ * -0.24999999959276006 + 0.33333333333333787) * in_XMM0._8_8_
                       + -0.5000000000000031) * in_XMM0._8_8_ * in_XMM0._8_8_ +
                       *(double *)(&UNK_00736368 + uVar1) + dVar12 * 5.497923018708371e-14 +
                       (double)((ulonglong)dVar9 & *(ulonglong *)(&UNK_0073e648 + iVar5)) +
                      *(double *)(&DAT_00736360 + uVar1) + dVar11 + dVar12 * 0.6931471805598903 +
                      (double)((ulonglong)dVar8 & *(ulonglong *)(&DAT_0073e640 + iVar5)));
    }
    local_c = (double)-(ulonglong)(param_1 == 0.0);
    if (SUB82(local_c,0) != 0) break;
    if (uVar3 != 0xffffffff) {
      if (uVar3 < 0x7ff) {
        local_c = 2.225073858507201e-308;
        if ((double)((ulonglong)param_1 & 0xfffffffffffff | 0x3ff0000000000000) == 1.0) {
          return (float10)INFINITY;
        }
        uVar6 = 1000;
      }
      else if (((uVar2 & 0x7ff) < 0x7ff) ||
              (SUB84(param_1,0) == 0 && ((ulonglong)param_1 & 0xfffff00000000) == 0)) {
        local_c = -NAN;
        uVar6 = 3;
      }
      else {
        uVar6 = 1000;
      }
      goto LAB_00706c82;
    }
    in_XMM0._0_8_ = param_1 * 4503599627370496.0;
    iVar4 = -0x34;
  }
  local_c = -INFINITY;
  uVar6 = 2;
LAB_00706c82:
  ___libm_error_support(&param_1,&param_1,&local_c,uVar6);
  return (float10)local_c;
}


/* ==== 00706ef0  FUN_00706ef0  size=25 ==== */

void FUN_00706ef0(void)

{
  float10 in_ST0;
  float10 in_ST1;
  
  FUN_00706f09((double)in_ST1,(double)in_ST0);
  return;
}


/* ==== 00706f09  FUN_00706f09  size=2822 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00706f09(double param_1,int param_2,uint param_3)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  ushort uVar11;
  bool bVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  longlong lVar20;
  ulonglong uVar21;
  ulonglong in_XMM2_Qb;
  undefined1 auVar22 [16];
  longlong lVar25;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar26 [16];
  ulonglong uVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  undefined1 local_c [4];
  
  dVar13 = (double)((ulonglong)param_1 >> 0x2c);
  uVar11 = (ushort)((ulonglong)param_1 >> 0x30);
  uVar3 = (SUB82(dVar13,0) & 0xff) + 1 & 0x1fe;
  dVar34 = (double)((ulonglong)param_1 & 0xfffffffffffff | 0x3ff0000000000000) *
           *(double *)((int)&DAT_00736780 + uVar3 * 4);
  dVar30 = *(double *)((int)&DAT_00736780 + uVar3 * 4);
  dVar14 = *(double *)(&DAT_00736b90 + uVar3 * 8);
  dVar32 = *(double *)(&UNK_00736b98 + uVar3 * 8);
  uVar7 = 0x7fef - uVar11;
  uVar3 = SUB84(param_1,0);
  uVar9 = (uint)((ulonglong)param_1 >> 0x20);
  dVar31 = param_1;
  if ((uVar11 - 0x10 | uVar7) < 0x80000000) {
    uVar7 = 0;
    uVar8 = 0x3fe7f;
LAB_00706f86:
    uVar4 = ((ushort)((ulonglong)dVar34 >> 0x26) & 0xff) + 1 & 0x1fe;
    dVar28 = (double)((ulonglong)dVar31 & 0xfffffffffffff | DAT_0073e760);
    dVar15 = (double)((ulonglong)dVar28 & 0xfffffffff8000000);
    in_XMM3._8_8_ = in_XMM3._8_8_ >> 0x1f;
    dVar28 = dVar28 - dVar15;
    uVar5 = ((ushort)((ulonglong)(dVar34 * *(double *)(&DAT_007373a0 + uVar4 * 4)) >> 0x1f) & 0x1ff)
            + 1 & 0x3fe;
    dVar29 = dVar30 * *(double *)(&DAT_007373a0 + uVar4 * 4) *
             *(double *)(&DAT_00737fc0 + uVar5 * 4);
    dVar34 = dVar34 * *(double *)(&DAT_007373a0 + uVar4 * 4) *
             *(double *)(&DAT_00737fc0 + uVar5 * 4);
    dVar31 = dVar14 + *(double *)(&DAT_007377b0 + uVar4 * 8) +
             (double)(int)((longlong)dVar13 - (ulonglong)uVar8 >> 8) +
             *(double *)(&DAT_007387d0 + uVar5 * 8);
    dVar33 = dVar32 + *(double *)(&DAT_007377b8 + uVar4 * 8) +
             *(double *)(&DAT_007387d8 + uVar5 * 8);
    dVar14 = (double)((ulonglong)dVar29 & 0xfffffffff8000000);
    dVar29 = dVar29 - dVar14;
    dVar35 = dVar34 + -1.442694902420044;
    dVar32 = dVar31 + dVar35;
    dVar30 = (double)CONCAT44(param_3,param_2);
    uVar2 = (ushort)(param_3 >> 0x10);
    dVar31 = dVar31 - dVar32;
    in_XMM3._0_8_ = 0xfffffffff8000000;
    uVar4 = (uint)(ushort)((ulonglong)dVar32 >> 0x30);
    dVar14 = (((dVar34 - dVar14 * dVar15) - dVar15 * dVar29) - dVar14 * dVar28) - dVar28 * dVar29;
    dVar34 = dVar35 - dVar14;
    dVar13 = dVar32 - dVar14;
    uVar8 = uVar2 & 0x7ff0;
    if (uVar8 < 0x7ff0) {
      iVar6 = (uVar8 - 0x3ff0) + (uVar4 & 0x7ff0);
      if ((0x40a0U - iVar6 | iVar6 - 0x3c70U) < 0x80000000) {
LAB_007070d8:
        dVar15 = (double)((ulonglong)dVar30 & 0xfffffffff8000000);
        dVar28 = (double)((ulonglong)dVar13 & 0xfffffffff8000000);
        dVar14 = (dVar31 + dVar35) - (dVar14 - (dVar32 - dVar13));
        dVar32 = dVar15 * dVar28 * 128.0;
        uVar3 = (uint)ROUND(dVar32);
        dVar30 = dVar15 * (dVar13 - dVar28) + dVar28 * (dVar30 - dVar15) +
                 (dVar13 - dVar28) * (dVar30 - dVar15);
        if (0 < (int)(0x1ff7f - uVar3 | uVar3 + 0x1e1ff)) {
          iVar6 = (uVar3 & 0x7f) * 0x10;
          auVar16._0_8_ = (double)((ulonglong)((uVar7 + uVar3 & 0xffffff80) + 0x1ff80) << 0x2d);
          auVar16._8_4_ = 0;
          auVar16._12_4_ = (int)((ulonglong)auVar16._0_8_ >> 0x20);
          dVar31 = *(double *)(&DAT_00739800 + iVar6) * auVar16._0_8_;
          dVar30 = (dVar32 - ((dVar32 + 6755399441055744.0) - 6755399441055744.0)) * 0.0078125 +
                   dVar30 + ((dVar34 * 0.16015105075297303 + dVar34 * dVar34 * -0.08325619496072671)
                             * dVar34 * dVar34 +
                             dVar34 * 9.597935033233511e-08 + dVar34 * dVar34 * -0.3465736568077919
                            + dVar33 + dVar14) * (double)CONCAT44(param_3,param_2);
          return (float10)(dVar30 * dVar30 * dVar31 *
                           (dVar30 * 0.0013333558146428443 + 0.009618129107628477) * dVar30 * dVar30
                           + *(double *)(&UNK_00739808 + iVar6) * auVar16._8_8_ +
                           (dVar30 * 0.055504108664821576 + 0.2402265069591007) * dVar30 * dVar30 *
                           dVar31 + dVar30 * 0.6931471805599453 * dVar31 + dVar31);
        }
        if ((int)uVar3 < 1) {
          if ((int)uVar3 < -0x3fdff) {
LAB_00707937:
            _local_c = (double)((ulonglong)uVar7 << 0x2d);
            uVar10 = 0x19;
            goto LAB_007076de;
          }
          uVar7 = uVar7 + 0x80;
          uVar9 = (uVar3 & 0xffffff80) + 0x3fe80;
          uVar11 = 0;
        }
        else {
          if (0x3ffff < uVar3) goto LAB_0070795a;
          uVar7 = uVar7 + 0x3ff00;
          uVar9 = uVar3 - 0x80 & 0xffffff80;
          uVar11 = 0x3ff0;
        }
        iVar6 = (uVar3 & 0x7f) * 0x10;
        uVar3 = ((int)-(uVar9 - 0x1ff80) >> 7) + 2;
        auVar19._0_8_ = (double)((ulonglong)uVar9 << 0x2d);
        auVar19._8_4_ = 0;
        auVar19._12_4_ = (int)((ulonglong)auVar19._0_8_ >> 0x20);
        dVar31 = *(double *)(&DAT_00739800 + iVar6) * auVar19._0_8_;
        dVar30 = (dVar32 - ((dVar32 + 6755399441055744.0) - 6755399441055744.0)) * 0.0078125 +
                 dVar30 + ((dVar34 * 0.16015105075297303 + dVar34 * dVar34 * -0.08325619496072671) *
                           dVar34 * dVar34 +
                           dVar34 * 9.597935033233511e-08 + dVar34 * dVar34 * -0.3465736568077919 +
                          dVar33 + dVar14) * (double)CONCAT44(param_3,param_2);
        _local_c = (double)((ulonglong)uVar7 << 0x2d);
        uVar27 = (ulonglong)(uVar3 + (uVar3 & 0x20));
        dVar14 = (double)(-1L << uVar27 & (ulonglong)dVar31);
        dVar30 = dVar30 * dVar30 * dVar31 *
                 (dVar30 * 0.0013333558146428443 + 0.009618129107628477) * dVar30 * dVar30 +
                 *(double *)(&UNK_00739808 + iVar6) * auVar19._8_8_ +
                 (dVar30 * 0.055504108664821576 + 0.2402265069591007) * dVar30 * dVar30 * dVar31 +
                 dVar30 * 0.6931471805599453 * dVar31;
        dVar32 = (double)((ulonglong)(dVar14 + dVar30) & -1L << uVar27);
        dVar30 = dVar30 + (dVar14 - dVar32) + (dVar31 - dVar14);
        if ((int)(uVar9 - 0x1ff80) < 1) {
          _local_c = dVar30 * _local_c + dVar32 * _local_c;
          _local_c = _local_c + (double)((ulonglong)uVar11 << 0x30) * _local_c;
          uVar10 = 0x18;
          if ((((ushort)((ulonglong)_local_c >> 0x30) & 0x7ff0) != 0x7ff0) &&
             (uVar10 = 0x19, ((ulonglong)_local_c & 0x7ff0000000000000) != 0)) {
            return (float10)_local_c;
          }
        }
        else {
          _local_c = (dVar30 + dVar32) * _local_c;
          _local_c = _local_c + (double)((ulonglong)uVar11 << 0x30) * _local_c;
          uVar10 = 0x18;
          if ((((ushort)((ulonglong)_local_c >> 0x30) & 0x7ff0) != 0x7ff0) &&
             (uVar10 = 0x19, ((ulonglong)_local_c & 0x7ff0000000000000) != 0)) {
            return (float10)_local_c;
          }
        }
      }
      else {
        dVar32 = dVar30 * dVar13;
        uVar3 = (ushort)((ulonglong)dVar32 >> 0x30) & 0x7ff0;
        uVar9 = uVar3 - 0x3c70;
        if ((0x40a0 - uVar3 | uVar9) < 0x80000000) goto LAB_007070d8;
        if (0x7fffffff < uVar9) {
          return (float10)(double)((ulonglong)(uVar7 | 0x1ff80) << 0x2d);
        }
        if (((uVar2 ^ (uVar11 & 0x7ff0) + 0xc010) & 0x8000) != 0) goto LAB_00707937;
LAB_0070795a:
        uVar10 = 0x18;
        if (uVar7 == 0) {
          _local_c = INFINITY;
        }
        else {
          _local_c = -INFINITY;
        }
      }
      goto LAB_007076de;
    }
    auVar22._4_4_ = param_3;
    auVar22._0_4_ = param_2;
    auVar22._8_8_ = in_XMM2_Qb;
    bVar12 = uVar3 == 0;
    uVar3 = uVar4;
    if (bVar12) {
      if (uVar9 == 0x3ff00000) goto LAB_007076db;
      uVar3 = uVar9;
      if (uVar9 == 0xbff00000) {
        return (float10)1;
      }
    }
  }
  else {
    auVar22._4_4_ = param_3;
    auVar22._0_4_ = param_2;
    in_XMM3._0_8_ = 0x7fffffffffffffff;
    auVar22._8_8_ = in_XMM2_Qb;
    uVar8 = param_3 & 0x7fffffff;
    if (uVar8 < 0x7ff00000) {
      if (param_2 == 0 && uVar8 == 0) {
        _local_c = 1.0;
        uVar10 = 0x1a;
        if (uVar3 != 0 || ((ulonglong)param_1 & 0x7fffffff00000000) != 0) {
          uVar10 = 0x1d;
          if (((uVar9 & 0x7fffffff) < 0x7ff00001) &&
             (((uVar9 & 0x7fffffff) < 0x7ff00000 || (uVar3 == 0)))) {
            return (float10)1.0;
          }
        }
        goto LAB_007076de;
      }
      if ((int)uVar7 < 0) {
        auVar26._8_8_ = in_XMM3._8_8_ << 0x34;
        auVar26._0_8_ = 0xfff0000000000000;
        iVar6 = (uVar8 >> 0x14) - 0x3f3;
        in_XMM3 = (undefined1  [16])0x0;
        uVar27 = (ulonglong)
                 CONCAT22((ushort)(-1 < iVar6) * (short)((uint)iVar6 >> 0x10),
                          (ushort)(-1 < (short)iVar6) * (short)iVar6);
        lVar20 = SUB168(auVar22 | auVar26,0) << uVar27;
        lVar25 = SUB168(auVar22 | auVar26,8) << uVar27;
        auVar23._0_4_ = -(uint)((int)lVar20 == 0);
        auVar23._4_4_ = -(uint)((int)((ulonglong)lVar20 >> 0x20) == 0);
        auVar23._8_4_ = -(uint)((int)lVar25 == 0);
        auVar23._12_4_ = -(uint)((int)((ulonglong)lVar25 >> 0x20) == 0);
        bVar1 = SUB161(auVar23 >> 7,0) & 1 | (SUB161(auVar23 >> 0xf,0) & 1) << 1 |
                (SUB161(auVar23 >> 0x17,0) & 1) << 2 | (SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
                (SUB161(auVar23 >> 0x27,0) & 1) << 4 | (SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
                (SUB161(auVar23 >> 0x37,0) & 1) << 6 | SUB161(auVar23 >> 0x3f,0) << 7;
        uVar8 = 0x7fef - uVar7 & 0x7fff;
        uVar27 = auVar23._8_8_;
        if (0x7fef < uVar8) {
          auVar17._0_4_ = -(uint)((int)((ulonglong)param_1 & 0xfffffffffffff) == 0);
          auVar17._4_4_ = -(uint)((int)(((ulonglong)param_1 & 0xfffffffffffff) >> 0x20) == 0);
          auVar17._8_4_ = 0xffffffff;
          auVar17._12_4_ = 0xffffffff;
          if ((byte)(SUB161(auVar17 >> 7,0) & 1 | (SUB161(auVar17 >> 0xf,0) & 1) << 1 |
                     (SUB161(auVar17 >> 0x17,0) & 1) << 2 | (SUB161(auVar17 >> 0x1f,0) & 1) << 3 |
                     (SUB161(auVar17 >> 0x27,0) & 1) << 4 | (SUB161(auVar17 >> 0x2f,0) & 1) << 5 |
                     (SUB161(auVar17 >> 0x37,0) & 1) << 6 | SUB161(auVar17 >> 0x3f,0) << 7) == 0xff)
          {
            if (((ulonglong)param_1 & 0x8000000000000000) != 0) {
              if ((bVar1 != 0xff) ||
                 (uVar21 = (ulonglong)(((param_3 & 0x7fffffff) >> 0x14) - 0x3f4),
                 lVar20 = CONCAT44(param_3,param_2) << uVar21, lVar25 = uVar27 << uVar21,
                 auVar24._0_4_ = -(uint)((int)lVar20 == 0),
                 auVar24._4_4_ = -(uint)((int)((ulonglong)lVar20 >> 0x20) == 0),
                 auVar24._8_4_ = -(uint)((int)lVar25 == 0),
                 auVar24._12_4_ = -(uint)((int)((ulonglong)lVar25 >> 0x20) == 0),
                 (byte)(SUB161(auVar24 >> 7,0) & 1 | (SUB161(auVar24 >> 0xf,0) & 1) << 1 |
                        (SUB161(auVar24 >> 0x17,0) & 1) << 2 | (SUB161(auVar24 >> 0x1f,0) & 1) << 3
                        | (SUB161(auVar24 >> 0x27,0) & 1) << 4 |
                        (SUB161(auVar24 >> 0x2f,0) & 1) << 5 | (SUB161(auVar24 >> 0x37,0) & 1) << 6
                       | SUB161(auVar24 >> 0x3f,0) << 7) == 0xff)) {
                if ((param_3 & 0x80000000) != 0) {
                  return (float10)0;
                }
                goto LAB_0070766f;
              }
              if ((param_3 & 0x80000000) == 0) {
                return (float10)-INFINITY;
              }
              goto LAB_00707529;
            }
            if ((param_3 & 0x80000000) != 0) {
              return (float10)0;
            }
            goto LAB_0070766f;
          }
          goto LAB_0070756f;
        }
        if (bVar1 == 0xff) {
          uVar21 = (ulonglong)(((param_3 & 0x7fffffff) >> 0x14) - 0x3f4);
          in_XMM3 = ZEXT816(0x8000000000000000);
          lVar20 = CONCAT44(param_3,param_2) << uVar21;
          lVar25 = uVar27 << uVar21;
          auVar22._0_4_ = -(uint)((int)lVar20 == 0);
          auVar22._4_4_ = -(uint)((int)((ulonglong)lVar20 >> 0x20) == in_XMM3._4_4_);
          auVar22._8_4_ = -(uint)((int)lVar25 == 0);
          auVar22._12_4_ = -(uint)((int)((ulonglong)lVar25 >> 0x20) == 0);
          uVar7 = (ushort)((ushort)(SUB161(auVar22 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
                          (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7) + 0x3ff01 & 0x40000;
          if (0xf < uVar8) {
            uVar8 = 0xbfe7f;
            in_XMM3 = ZEXT816(0xfffffffffffff);
            in_XMM2_Qb = auVar22._8_8_;
            goto LAB_00706f86;
          }
          goto LAB_007073a4;
        }
        uVar21 = (ulonglong)param_1 >> 0x20;
        in_XMM2_Qb = uVar27 >> 0x20;
        uVar7 = 0;
        uVar8 = 0;
        if (uVar3 != 0 || ((ulonglong)param_1 & 0x7fffffff00000000) != 0) {
          _local_c = -NAN;
          uVar10 = 0x1c;
          goto LAB_007076de;
        }
LAB_0070742a:
        dVar31 = dVar13;
        if ((uVar8 & 0x7fffffff) == 0) {
          if ((param_3 & 0x80000000) == 0) {
            if ((uVar8 & uVar7 << 0xd) == 0) {
              return (float10)0;
            }
LAB_00707529:
            return (float10)-0.0;
          }
          _local_c = (double)((ulonglong)(uVar8 & uVar7 << 0xd | 0x7ff00000) << 0x20);
          uVar10 = 0x1b;
          goto LAB_007076de;
        }
      }
      else {
        uVar7 = 0;
LAB_007073a4:
        dVar34 = 2.225073858507201e-308;
        in_XMM2_Qb = auVar22._8_8_;
        uVar21 = 0x3ff0000000000000;
        dVar13 = param_1 * 1.8446744073709552e+19;
        uVar8 = uVar9;
        dVar31 = dVar13;
        if (uVar3 == 0) goto LAB_0070742a;
      }
      dVar13 = (double)((ulonglong)ABS(dVar31) >> 0x2c);
      uVar8 = (SUB82(dVar13,0) & 0xff) + 1 & 0x1fe;
      dVar34 = (double)((ulonglong)dVar34 & (ulonglong)dVar31 | uVar21) *
               *(double *)((int)&DAT_00736780 + uVar8 * 4);
      dVar30 = *(double *)((int)&DAT_00736780 + uVar8 * 4);
      dVar14 = *(double *)(&DAT_00736b90 + uVar8 * 8);
      dVar32 = *(double *)(&UNK_00736b98 + uVar8 * 8);
      uVar8 = 0x43e7f;
      goto LAB_00706f86;
    }
    uVar7 = uVar9;
    if ((0x7fefffff < (uVar9 & 0x7fffffff)) && ((0x7ff00000 < (uVar9 & 0x7fffffff) || (uVar3 != 0)))
       ) {
LAB_0070756f:
      _local_c = param_1 + param_1;
      uVar10 = 0x3ee;
      goto LAB_007076de;
    }
  }
  _local_c = auVar22._0_8_;
  uVar27 = in_XMM3._8_8_ & auVar22._8_8_;
  auVar18._0_4_ = -(uint)((int)((ulonglong)_local_c & 0xfffffffffffff) == 0);
  auVar18._4_4_ = -(uint)((int)(((ulonglong)_local_c & 0xfffffffffffff) >> 0x20) == 0);
  auVar18._8_4_ = -(uint)((int)uVar27 == 0);
  auVar18._12_4_ = -(uint)((int)(uVar27 >> 0x20) == 0);
  if ((byte)(SUB161(auVar18 >> 7,0) & 1 | (SUB161(auVar18 >> 0xf,0) & 1) << 1 |
             (SUB161(auVar18 >> 0x17,0) & 1) << 2 | (SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
             (SUB161(auVar18 >> 0x27,0) & 1) << 4 | (SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
             (SUB161(auVar18 >> 0x37,0) & 1) << 6 | SUB161(auVar18 >> 0x3f,0) << 7) == 0xff) {
    if (uVar3 != 0 || uVar7 != 0xbff00000) {
      if ((auVar22._6_2_ & 0x8000) == 0) {
        if ((uVar11 & 0x7ff0) < 0x3ff0) {
          return (float10)0;
        }
      }
      else if (0x3fef < (uVar11 & 0x7ff0)) {
        return (float10)0;
      }
LAB_0070766f:
      return (float10)INFINITY;
    }
LAB_007076db:
    return (float10)1;
  }
  _local_c = _local_c + _local_c;
  uVar10 = 0x3ee;
LAB_007076de:
  ___libm_error_support(&param_1,&param_2,local_c,uVar10);
  return (float10)_local_c;
}


/* ==== 00707a10  FUN_00707a10  size=104 ==== */

undefined4 FUN_00707a10(double param_1)

{
  uint uVar1;
  float10 fVar2;
  undefined8 extraout_var;
  double dVar3;
  
  uVar1 = __fpclass(param_1);
  if ((uVar1 & 0x90) == 0) {
    fVar2 = (float10)__frnd(param_1,extraout_var);
    if ((float10)param_1 == fVar2) {
      dVar3 = (double)((float10)param_1 * (float10)0.5);
      fVar2 = (float10)__frnd();
      if ((float10)dVar3 != fVar2) {
        return 1;
      }
      return 2;
    }
  }
  return 0;
}


/* ==== 00707a78  FUN_00707a78  size=299 ==== */

undefined4 FUN_00707a78(int param_1,int param_2,int param_3,int param_4,undefined8 *param_5)

{
  double dVar1;
  undefined8 uVar2;
  int iVar3;
  
  dVar1 = ABS((double)CONCAT44(param_2,param_1));
  if (param_4 == 0x7ff00000) {
    if (param_3 != 0) goto LAB_00707b0c;
    uVar2 = 0x3ff0000000000000;
    if (dVar1 <= 1.0) {
      if (dVar1 < 1.0) {
        uVar2 = 0;
      }
      goto LAB_00707b9d;
    }
  }
  else {
    if ((param_4 == -0x100000) && (param_3 == 0)) {
      if (dVar1 <= 1.0) {
        uVar2 = 0x3ff0000000000000;
        if (dVar1 < 1.0) {
          uVar2 = 0x7ff0000000000000;
        }
      }
      else {
        uVar2 = 0;
      }
      goto LAB_00707b9d;
    }
LAB_00707b0c:
    if (param_2 != 0x7ff00000) {
      if (param_2 != -0x100000) {
        return 0;
      }
      if (param_1 != 0) {
        return 0;
      }
      iVar3 = FUN_00707a10(CONCAT44(param_4,param_3));
      uVar2 = 0;
      if ((double)CONCAT44(param_4,param_3) <= 0.0) {
        if (0.0 <= (double)CONCAT44(param_4,param_3)) {
          uVar2 = 0x3ff0000000000000;
        }
        else if (iVar3 == 1) {
          uVar2 = 0x8000000000000000;
        }
      }
      else {
        uVar2 = 0x7ff0000000000000;
        if (iVar3 == 1) {
          uVar2 = 0xfff0000000000000;
        }
      }
      goto LAB_00707b9d;
    }
    if (param_1 != 0) {
      return 0;
    }
    if ((double)CONCAT44(param_4,param_3) <= 0.0) {
      uVar2 = 0;
      if (0.0 <= (double)CONCAT44(param_4,param_3)) {
        uVar2 = 0x3ff0000000000000;
      }
      goto LAB_00707b9d;
    }
  }
  uVar2 = 0x7ff0000000000000;
LAB_00707b9d:
  *param_5 = uVar2;
  return 0;
}


/* ==== 00707bb0  FUN_00707bb0  size=24 ==== */

void FUN_00707bb0(void)

{
  float10 in_ST0;
  
  FUN_00707bce((double)in_ST0);
  return;
}


/* ==== 00707bce  FUN_00707bce  size=639 ==== */

float10 FUN_00707bce(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  double in_XMM0_Qa;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined2 uStack_c;
  undefined6 uStack_a;
  undefined2 uStack_4;
  
  uVar1 = (ushort)((ulonglong)in_XMM0_Qa >> 0x30) & 0x7fff;
  if ((0x408f - uVar1 | uVar1 - 0x3c90) < 0x80000000) {
    dVar5 = in_XMM0_Qa * 92.33248261689366 + 6755399441055744.0;
    dVar6 = (in_XMM0_Qa * 92.33248261689366 + 6755399441055744.0) - 6755399441055744.0;
    uVar1 = SUB84(dVar5,0);
    iVar2 = (uVar1 & 0x3f) * 0x10;
    dVar4 = (in_XMM0_Qa - (dVar5 - 6755399441055744.0) * 0.010830424696223417) -
            (dVar5 - 6755399441055744.0) * 2.572804622327669e-14;
    dVar6 = (in_XMM0_Qa - dVar6 * 0.010830424696223417) - dVar6 * 2.572804622327669e-14;
    dVar5 = (double)(*(ulonglong *)(&UNK_0073a008 + iVar2) |
                    ((ulonglong)dVar5 & 0xffffffc0) + 0xffc0 << 0x2e);
    dVar4 = dVar6 * dVar6 * (dVar6 * 0.16666666669815094 + 0.4999999999995663) +
            dVar4 + *(double *)(&DAT_0073a000 + iVar2) +
            dVar4 * dVar4 * dVar4 * dVar4 * (dVar4 * 0.008332168270616733 + 0.04166672086872847);
    if (((int)uVar1 >> 6) + 0x37eU < 0x77d) {
      return (float10)(dVar4 * dVar5 + dVar5);
    }
    dVar6 = (double)(*(ulonglong *)(&UNK_0073a008 + iVar2) & 0xfffffffffffff |
                    (ulonglong)(((int)uVar1 >> 7) + 0x3ff) << 0x34);
    uStack_4 = (undefined2)((ulonglong)dVar6 >> 0x30);
    in_XMM0_Qa = (double)((ulonglong)((((int)uVar1 >> 6) - ((int)uVar1 >> 7)) + 0x3ff) << 0x34) *
                 (dVar6 + dVar4 * dVar6);
    if (((ushort)((ulonglong)in_XMM0_Qa >> 0x30) & 0x7ff0) < 0x7ff0) {
      if (((ulonglong)in_XMM0_Qa & 0x7ff0000000000000) != 0) goto LAB_00707dc2;
      uVar3 = 0xf;
    }
    else {
      uVar3 = 0xe;
    }
  }
  else {
    uVar1 = param_2 & 0x7fffffff;
    if (uVar1 < 0x40900000) {
      return (float10)((double)CONCAT44(param_2,param_1) + 1.0);
    }
    if (uVar1 < 0x7ff00000) {
      if (param_2 < 0x80000000) {
        in_XMM0_Qa = INFINITY;
        uVar3 = 0xe;
      }
      else {
        in_XMM0_Qa = 0.0;
        uVar3 = 0xf;
      }
    }
    else {
      if ((uVar1 < 0x7ff00001) && (param_1 == 0)) {
        if (param_2 != 0x7ff00000) {
          return (float10)0.0;
        }
        return (float10)INFINITY;
      }
      uVar3 = 0x3ea;
    }
  }
  uStack_c = SUB82(in_XMM0_Qa,0);
  uStack_a = (undefined6)((ulonglong)in_XMM0_Qa >> 0x10);
  ___libm_error_support(&param_1,&param_1,(short)&uStack_c,uVar3);
  in_XMM0_Qa = (double)CONCAT62(uStack_a,uStack_c);
LAB_00707dc2:
  return (float10)in_XMM0_Qa;
}


/* ==== 00707f4a  FUN_00707f4a  size=7 ==== */

void FUN_00707f4a(void)

{
  char cVar1;
  ushort uVar2;
  int unaff_EBP;
  ushort in_FPUStatusWord;
  float10 in_ST0;
  
  *(byte *)(unaff_EBP + -0x2c8) = *(byte *)(unaff_EBP + -0x2c8) & 0xfe;
  if (DAT_007c9330 != 0) {
    return;
  }
  *(double *)(unaff_EBP + -0x2d0) = (double)in_ST0;
  cVar1 = *(char *)(unaff_EBP + -0x90);
  if (cVar1 != '\0') {
    if (cVar1 == -1) {
      uVar2 = *(ushort *)(unaff_EBP + -0x2ca) & 0x7ff0;
    }
    else {
      if (cVar1 != -2) {
        if (cVar1 == '\0') {
          return;
        }
        *(int *)(unaff_EBP + -0x8e) = (int)cVar1;
        goto LAB_00708036;
      }
      uVar2 = *(ushort *)(unaff_EBP + -0x2ca) & 0x7ff0;
      if (uVar2 == 0) {
        *(undefined4 *)(unaff_EBP + -0x8e) = 4;
        in_ST0 = (float10)fscale(in_ST0,(float10)1536.0);
        if (ABS(in_ST0) < (float10)2.2250738585072014e-308) {
          in_ST0 = in_ST0 * (float10)0.0;
        }
        goto LAB_00708036;
      }
    }
    if (uVar2 == 0x7ff0) {
      *(undefined4 *)(unaff_EBP + -0x8e) = 3;
      in_ST0 = (float10)fscale(in_ST0,(float10)-1536.0);
      if ((float10)1.79769313486232e+308 < ABS(in_ST0)) {
        in_ST0 = in_ST0 * (float10)INFINITY;
      }
      goto LAB_00708036;
    }
  }
  if ((*(ushort *)(unaff_EBP + -0xa4) & 0x20) != 0) {
    return;
  }
  if ((in_FPUStatusWord & 0x20) == 0) {
    return;
  }
  *(undefined4 *)(unaff_EBP + -0x8e) = 8;
LAB_00708036:
  *(int *)(unaff_EBP + -0x8a) = *(int *)(unaff_EBP + -0x94) + 1;
  if ((*(byte *)(unaff_EBP + -0x2c8) & 1) == 0) {
    *(undefined4 *)(unaff_EBP + -0x86) = *(undefined4 *)(unaff_EBP + 8);
    *(undefined4 *)(unaff_EBP + -0x82) = *(undefined4 *)(unaff_EBP + 0xc);
    if (*(char *)(*(int *)(unaff_EBP + -0x94) + 0xd) != '\x01') {
      *(undefined4 *)(unaff_EBP + -0x7e) = *(undefined4 *)(unaff_EBP + 0x10);
      *(undefined4 *)(unaff_EBP + -0x7a) = *(undefined4 *)(unaff_EBP + 0x14);
    }
  }
  *(double *)(unaff_EBP + -0x76) = (double)in_ST0;
  FUN_00709760((int)*(char *)(*(int *)(unaff_EBP + -0x94) + 0xe),unaff_EBP + -0x8e,unaff_EBP + -0xa4
              );
  return;
}


/* ==== 00707f51  FUN_00707f51  size=327 ==== */

void FUN_00707f51(void)

{
  char cVar1;
  ushort uVar2;
  int unaff_EBP;
  ushort in_FPUStatusWord;
  float10 in_ST0;
  
  if (DAT_007c9330 != 0) {
    return;
  }
  *(double *)(unaff_EBP + -0x2d0) = (double)in_ST0;
  cVar1 = *(char *)(unaff_EBP + -0x90);
  if (cVar1 != '\0') {
    if (cVar1 == -1) {
      uVar2 = *(ushort *)(unaff_EBP + -0x2ca) & 0x7ff0;
    }
    else {
      if (cVar1 != -2) {
        if (cVar1 == '\0') {
          return;
        }
        *(int *)(unaff_EBP + -0x8e) = (int)cVar1;
        goto LAB_00708036;
      }
      uVar2 = *(ushort *)(unaff_EBP + -0x2ca) & 0x7ff0;
      if (uVar2 == 0) {
        *(undefined4 *)(unaff_EBP + -0x8e) = 4;
        in_ST0 = (float10)fscale(in_ST0,(float10)1536.0);
        if (ABS(in_ST0) < (float10)2.2250738585072014e-308) {
          in_ST0 = in_ST0 * (float10)0.0;
        }
        goto LAB_00708036;
      }
    }
    if (uVar2 == 0x7ff0) {
      *(undefined4 *)(unaff_EBP + -0x8e) = 3;
      in_ST0 = (float10)fscale(in_ST0,(float10)-1536.0);
      if ((float10)1.79769313486232e+308 < ABS(in_ST0)) {
        in_ST0 = in_ST0 * (float10)INFINITY;
      }
      goto LAB_00708036;
    }
  }
  if ((*(ushort *)(unaff_EBP + -0xa4) & 0x20) != 0) {
    return;
  }
  if ((in_FPUStatusWord & 0x20) == 0) {
    return;
  }
  *(undefined4 *)(unaff_EBP + -0x8e) = 8;
LAB_00708036:
  *(int *)(unaff_EBP + -0x8a) = *(int *)(unaff_EBP + -0x94) + 1;
  if ((*(byte *)(unaff_EBP + -0x2c8) & 1) == 0) {
    *(undefined4 *)(unaff_EBP + -0x86) = *(undefined4 *)(unaff_EBP + 8);
    *(undefined4 *)(unaff_EBP + -0x82) = *(undefined4 *)(unaff_EBP + 0xc);
    if (*(char *)(*(int *)(unaff_EBP + -0x94) + 0xd) != '\x01') {
      *(undefined4 *)(unaff_EBP + -0x7e) = *(undefined4 *)(unaff_EBP + 0x10);
      *(undefined4 *)(unaff_EBP + -0x7a) = *(undefined4 *)(unaff_EBP + 0x14);
    }
  }
  *(double *)(unaff_EBP + -0x76) = (double)in_ST0;
  FUN_00709760((int)*(char *)(*(int *)(unaff_EBP + -0x94) + 0xe),unaff_EBP + -0x8e,unaff_EBP + -0xa4
              );
  return;
}


/* ==== 00708110  FUN_00708110  size=20 ==== */

void FUN_00708110(void)

{
  float10 in_ST0;
  
  FUN_00706908((double)in_ST0);
  FUN_00708124();
  return;
}


/* ==== 00708124  FUN_00708124  size=157 ==== */

uint FUN_00708124(uint param_1,uint param_2)

{
  uint uVar1;
  bool in_ZF;
  short in_FPUControlWord;
  
  if (in_ZF) {
    if (((param_2 & 0xfffff) != 0) || (param_1 != 0)) {
      uVar1 = FUN_007068ac();
      goto LAB_007081a2;
    }
    param_1 = param_2 & 0x80000000;
    param_2 = 0;
joined_r0x00708193:
    if (param_1 == 0) {
LAB_00708145:
      if (DAT_007c9330 != 0) {
        return param_2;
      }
      uVar1 = __math_exit();
      return uVar1;
    }
  }
  else {
    if (in_FPUControlWord != 0x27f) {
      param_2 = FUN_00706895();
    }
    if ((param_2 & 0x80000000) == 0) goto LAB_00708145;
    if (((param_2 & 0x7ff00000) == 0) && ((param_2 & 0xfffff) == 0)) goto joined_r0x00708193;
  }
  uVar1 = 1;
LAB_007081a2:
  if (DAT_007c9330 != 0) {
    return uVar1;
  }
  uVar1 = __startOneArgErrorHandling();
  return uVar1;
}


/* ==== 007081d0  FUN_007081d0  size=24 ==== */

void FUN_007081d0(void)

{
  float10 in_ST0;
  
  FUN_007081ee((double)in_ST0);
  return;
}


/* ==== 007081ee  FUN_007081ee  size=395 ==== */

float10 FUN_007081ee(void)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  float10 fVar4;
  double in_XMM0_Qa;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  
  uVar1 = (ushort)((ulonglong)in_XMM0_Qa >> 0x30);
  uVar2 = (uVar1 & 0x7fff) + 0xcfd0;
  if (uVar2 < 0x10c6) {
    dVar10 = (in_XMM0_Qa * 10.185916357881302 + 6755399441055744.0) - 6755399441055744.0;
    iVar3 = ((int)ROUND(in_XMM0_Qa * 10.185916357881302) + 0x1c7610U & 0x3f) * 0x20;
    dVar11 = dVar10 * 3.798187816439979e-12;
    dVar5 = in_XMM0_Qa - dVar10 * 0.09817477042088285;
    dVar15 = in_XMM0_Qa - dVar10 * 0.09817477042088285;
    dVar16 = dVar15 - dVar11;
    dVar6 = dVar5 - dVar11;
    dVar8 = dVar5 - dVar10 * 3.798187816439979e-12;
    dVar7 = dVar6 * dVar6;
    dVar9 = dVar8 * dVar8;
    dVar12 = *(double *)(&DAT_0073a410 + iVar3) + *(double *)(&DAT_0073a428 + iVar3);
    dVar13 = *(double *)(&DAT_0073a428 + iVar3) * dVar16;
    dVar17 = dVar16 * *(double *)(&DAT_0073a410 + iVar3);
    dVar14 = dVar13 + *(double *)(&DAT_0073a418 + iVar3);
    dVar18 = dVar17 + dVar14;
    return (float10)(dVar18 + (dVar10 * 1.2639164054974691e-22 - ((dVar15 - dVar16) - dVar11)) *
                              (*(double *)(&DAT_0073a418 + iVar3) * dVar16 - dVar12) +
                              *(double *)(&DAT_0073a420 + iVar3) +
                              (*(double *)(&DAT_0073a418 + iVar3) - dVar14) + dVar13 +
                              (dVar14 - dVar18) + dVar17 +
                              (dVar7 * 0.008333333333333333 + -0.16666666666666666 +
                              (dVar5 * 2.7557319223985893e-06 * dVar6 + -0.0001984126984126984) *
                              dVar7 * dVar7) * dVar12 * dVar16 * dVar7 +
                              (dVar9 * 0.041666666666666664 + -0.5 +
                              (dVar5 * 2.48015873015873e-05 * dVar8 + -0.001388888888888889) *
                              dVar9 * dVar9) * *(double *)(&DAT_0073a418 + iVar3) * dVar9);
  }
  if ((short)uVar2 < 0x10c6) {
    return (float10)(1.0 - (double)((ulonglong)in_XMM0_Qa & 0xffffffffffff |
                                   (ulonglong)(uVar1 & 0x7fff) << 0x30));
  }
  fVar4 = (float10)FUN_006ffe5f();
  return fVar4;
}


/* ==== 00708380  FUN_00708380  size=24 ==== */

void FUN_00708380(void)

{
  float10 in_ST0;
  
  FUN_0070839e((double)in_ST0);
  return;
}


/* ==== 0070839e  FUN_0070839e  size=425 ==== */

float10 FUN_0070839e(void)

{
  ushort uVar1;
  int iVar2;
  float10 fVar3;
  double in_XMM0_Qa;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  
  uVar1 = ((ushort)((ulonglong)in_XMM0_Qa >> 0x30) & 0x7fff) + 0xcfd0;
  if (uVar1 < 0x10c6) {
    dVar9 = (in_XMM0_Qa * 10.185916357881302 + 6755399441055744.0) - 6755399441055744.0;
    iVar2 = ((int)ROUND(in_XMM0_Qa * 10.185916357881302) + 0x1c7600U & 0x3f) * 0x20;
    dVar10 = dVar9 * 3.798187816439979e-12;
    dVar4 = in_XMM0_Qa - dVar9 * 0.09817477042088285;
    dVar14 = in_XMM0_Qa - dVar9 * 0.09817477042088285;
    dVar15 = dVar14 - dVar10;
    dVar5 = dVar4 - dVar10;
    dVar7 = dVar4 - dVar9 * 3.798187816439979e-12;
    dVar6 = dVar5 * dVar5;
    dVar8 = dVar7 * dVar7;
    dVar11 = *(double *)(&DAT_0073a410 + iVar2) + *(double *)(&DAT_0073a428 + iVar2);
    dVar12 = *(double *)(&DAT_0073a428 + iVar2) * dVar15;
    dVar16 = dVar15 * *(double *)(&DAT_0073a410 + iVar2);
    dVar13 = dVar12 + *(double *)(&DAT_0073a418 + iVar2);
    dVar17 = dVar16 + dVar13;
    return (float10)(dVar17 + (dVar9 * 1.2639164054974691e-22 - ((dVar14 - dVar15) - dVar10)) *
                              (*(double *)(&DAT_0073a418 + iVar2) * dVar15 - dVar11) +
                              *(double *)(&DAT_0073a420 + iVar2) +
                              (*(double *)(&DAT_0073a418 + iVar2) - dVar13) + dVar12 +
                              (dVar13 - dVar17) + dVar16 +
                              (dVar6 * 0.008333333333333333 + -0.16666666666666666 +
                              (dVar4 * 2.7557319223985893e-06 * dVar5 + -0.0001984126984126984) *
                              dVar6 * dVar6) * dVar11 * dVar15 * dVar6 +
                              (dVar8 * 0.041666666666666664 + -0.5 +
                              (dVar4 * 2.48015873015873e-05 * dVar7 + -0.001388888888888889) *
                              dVar8 * dVar8) * *(double *)(&DAT_0073a418 + iVar2) * dVar8);
  }
  if ((short)uVar1 < 0x10c6) {
    if (uVar1 >> 4 == 0xcfd) {
      return (float10)(in_XMM0_Qa * 0.9999999999999999);
    }
    return (float10)in_XMM0_Qa;
  }
  fVar3 = (float10)FUN_006fff4f();
  return fVar3;
}


/* ==== 00708550  FUN_00708550  size=24 ==== */

void FUN_00708550(void)

{
  float10 in_ST0;
  
  FUN_0070856e((double)in_ST0);
  return;
}


/* ==== 0070856e  FUN_0070856e  size=1334 ==== */

float10 FUN_0070856e(undefined8 param_1)

{
  undefined1 auVar1 [12];
  double dVar2;
  undefined1 auVar3 [12];
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  int in_XMM0_Da;
  uint in_XMM0_Db;
  uint in_XMM0_Dd;
  double dVar9;
  double dVar10;
  ulonglong in_XMM2_Qb;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  double dVar18;
  ulonglong in_XMM7_Qb;
  undefined1 auVar19 [16];
  double local_c;
  
  dVar2 = (double)CONCAT44(in_XMM0_Db,in_XMM0_Da);
  uVar4 = in_XMM0_Db >> 0xc & 0x7ffff;
  if (uVar4 - 0x3fb00 < 0x3bb) {
    auVar11._0_8_ = ((ulonglong)in_XMM0_Db & 0xffffc000) << 0x20;
    auVar11._8_8_ = in_XMM2_Qb & in_XMM7_Qb;
    iVar5 = (in_XMM0_Db >> 0xc & 0xfffc) - 0xfb00;
    iVar6 = iVar5 * 4;
    dVar14 = SUB168(auVar11 | ZEXT816(0x200000000000),0);
    dVar13 = SQRT(1.0 - dVar2 * dVar2) * dVar14;
    dVar9 = dVar2 * *(double *)(&DAT_0073bb30 + iVar5 * 2) - dVar13;
    uVar4 = SUB164(auVar11 | ZEXT816(0x200000000000),4) & 0x80000000;
    dVar10 = dVar9 * dVar9;
    auVar3._4_8_ = 0;
    auVar3._0_4_ = uVar4;
    auVar12._0_12_ = auVar3 << 0x20;
    auVar12._12_4_ = uVar4;
    return (float10)((((dVar10 * -0.044642857142857144 + -0.075) * dVar9 * dVar10 * dVar10 +
                      (dVar9 * dVar10 * -0.16666666666666666 -
                      ((double)(*(ulonglong *)(&DAT_0073ac30 + iVar6) ^ (ulonglong)uVar4 << 0x20) -
                      6.123233995736766e-17))) -
                     ((dVar2 + dVar14) * ((double)CONCAT44(in_XMM0_Db,in_XMM0_Da) - dVar14)) /
                     (dVar2 * *(double *)(&DAT_0073bb30 + iVar5 * 2) + dVar13)) -
                    ((double)(*(ulonglong *)(&DAT_0073ac38 + iVar6) ^ auVar12._8_8_) -
                    1.5707963267948966));
  }
  if (uVar4 - 0x3febb < 0x41) {
    dVar18 = (double)((ulonglong)(in_XMM0_Db >> 6) << 0x26);
    auVar1._4_4_ = in_XMM0_Db;
    auVar1._0_4_ = in_XMM0_Da;
    auVar1._8_4_ = in_XMM0_Dd >> 0xc;
    dVar14 = 1.0 - dVar18 * dVar18;
    dVar9 = ((double)CONCAT44(in_XMM0_Db,in_XMM0_Da) + dVar18) * (dVar2 - dVar18);
    dVar13 = SQRT(dVar14 - dVar9);
    iVar5 = -(uint)(SUB121(auVar1 >> 0x3f,0) & 1);
    dVar10 = (double)((ulonglong)dVar13 & 0xffffc00000000000 |
                     ((ulonglong)in_XMM0_Db & 0x80000000) << 0x20 | 0x200000000000);
    auVar15._0_8_ = CONCAT44(iVar5,iVar5);
    auVar15._8_4_ = iVar5;
    auVar15._12_4_ = iVar5;
    iVar6 = (ushort)((ulonglong)((longlong)dVar13 << 2) >> 0x30) - 0xfec0;
    dVar13 = dVar13 * *(double *)(&DAT_0073bb30 + iVar6 * 8);
    dVar18 = (dVar18 * dVar10 - dVar13) + (dVar2 - dVar18) * dVar10;
    dVar2 = ((dVar14 - dVar10 * dVar10) - dVar9) / (dVar13 + dVar13 + dVar18);
    iVar6 = iVar6 * 0x10;
    dVar10 = (double)(auVar15._8_8_ & 0xc00921fb54442d18) + *(double *)(&DAT_0073ac38 + iVar6);
    dVar14 = dVar18 * dVar18;
    dVar9 = dVar2 + dVar10;
    return (float10)(double)((ulonglong)
                             ((dVar14 * -0.044642857142857144 + -0.075) * dVar18 * dVar14 * dVar14 +
                              dVar18 * dVar14 * -0.16666666666666666 +
                              (double)(auVar15._0_8_ & 0xbca1a62633145c07) +
                              *(double *)(&DAT_0073ac30 + iVar6) + dVar2 + (dVar10 - dVar9) + dVar9)
                            ^ (ulonglong)((ushort)iVar5 & 0x8000) << 0x30);
  }
  if (uVar4 - 0x3c300 < 0x3800) {
    dVar9 = (double)CONCAT44(in_XMM0_Db,in_XMM0_Da) * (double)CONCAT44(in_XMM0_Db,in_XMM0_Da);
    dVar10 = (double)CONCAT44(in_XMM0_Db,in_XMM0_Da) * (double)CONCAT44(in_XMM0_Db,in_XMM0_Da);
    dVar14 = dVar2 * dVar9;
    return (float10)((1.5707963267948966 - dVar2) +
                    (((6.123233995736766e-17 -
                      dVar14 * dVar14 * dVar14 *
                      (dVar9 * 0.022372159090909092 + 0.030381944444444444 +
                      dVar9 * dVar9 * 0.017352764423076924)) -
                     (double)CONCAT44(in_XMM0_Db,in_XMM0_Da) * dVar10 *
                     (dVar10 * 0.075 + 0.16666666666666666 + dVar10 * dVar10 * 0.044642857142857144)
                     ) - (dVar2 - (1.5707963267948966 - (1.5707963267948966 - dVar2)))));
  }
  if (uVar4 - 0x3fefc < 4) {
    dVar2 = 0.5 - ABS(dVar2) * 0.5;
    uVar7 = (undefined4)((ulonglong)dVar2 >> 0x20);
    auVar19._8_4_ = SUB84(dVar2,0);
    auVar19._0_8_ = dVar2;
    auVar19._12_4_ = uVar7;
    dVar9 = SQRT(dVar2);
    dVar14 = auVar19._8_8_;
    auVar17._8_4_ = SUB84(dVar2,0);
    auVar17._0_8_ = dVar2;
    auVar17._12_4_ = uVar7;
    uVar8 = -(ulonglong)((double)CONCAT44(in_XMM0_Db,in_XMM0_Da) < 0.0);
    dVar10 = (double)((ulonglong)dVar9 & 0xfffffffff8000000);
    auVar16._8_4_ = SUB84(dVar9,0);
    auVar16._0_8_ = dVar9;
    auVar16._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
    return (float10)(double)((ulonglong)
                             ((double)(uVar8 & 0xc00921fb54442d18) +
                             (dVar2 * 0.022372159090909092 + 0.030381944444444444 +
                             dVar2 * dVar2 * 0.017352764423076924) * dVar2 * dVar2 * dVar2 * dVar2 *
                             (dVar9 + dVar9) + (double)(uVar8 & 0xbca1a62633145c07) +
                             (dVar14 * 0.075 + 0.16666666666666666 +
                             dVar14 * dVar14 * 0.044642857142857144) * auVar17._8_8_ *
                             (auVar16._8_8_ + auVar16._8_8_) +
                             ((dVar2 - dVar10 * dVar10) -
                             (dVar9 - dVar10) * ((dVar9 + dVar9) - (dVar9 - dVar10))) / dVar9 +
                             dVar9 + dVar9) ^
                            (ulonglong)((ushort)(in_XMM0_Db >> 0x10) & 0x8000) << 0x30);
  }
  if (uVar4 < 0x3ff00) {
    return (float10)1.5707963267948966;
  }
  if ((in_XMM0_Db & 0x7fffffff) != 0x3ff00000 || in_XMM0_Da != 0) {
    if ((int)((((uint)((ulonglong)param_1 >> 0x20) & 0x7fffffff) + 0x80100000) -
             (uint)((int)param_1 == 0)) < 0) {
      local_c = -NAN;
      uVar7 = 0x3a;
    }
    else {
      local_c = (double)CONCAT44(in_XMM0_Db,in_XMM0_Da) + 0.0;
      uVar7 = 0x3f0;
    }
    ___libm_error_support(&param_1,&param_1,&local_c,uVar7);
    return (float10)local_c;
  }
  uVar8 = CONCAT44((int)in_XMM0_Db >> 0x1f,(int)in_XMM0_Db >> 0x1f);
  return (float10)((double)(uVar8 & 0x400921fb54442d18) + (double)(uVar8 & 0x3ca1a62633145c07));
}


/* ==== 00708aa4  FUN_00708aa4  size=183 ==== */

undefined4 FUN_00708aa4(char *param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  undefined4 *puVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uStack_18;
  int local_8;
  
  if (param_4 == 0) {
    if (param_1 == (char *)0x0) {
      if (param_2 == 0) {
        return 0;
      }
    }
    else {
LAB_00708add:
      if (param_2 != 0) {
        if (param_4 == 0) {
          *param_1 = '\0';
          return 0;
        }
        if (param_3 != 0) {
          local_8 = param_4;
          pcVar3 = param_1;
          iVar4 = param_2;
          if (param_4 == -1) {
            do {
              cVar1 = pcVar3[param_3 - (int)param_1];
              *pcVar3 = cVar1;
              pcVar3 = pcVar3 + 1;
              if (cVar1 == '\0') {
                return 0;
              }
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
            iVar4 = 0;
          }
          else {
            do {
              cVar1 = pcVar3[param_3 - (int)param_1];
              *pcVar3 = cVar1;
              pcVar3 = pcVar3 + 1;
              if (cVar1 == '\0') {
                return 0;
              }
              iVar4 = iVar4 + -1;
            } while ((iVar4 != 0) && (local_8 = local_8 + -1, local_8 != 0));
            if (local_8 == 0) {
              *pcVar3 = '\0';
            }
          }
          if (iVar4 != 0) {
            return 0;
          }
          if (param_4 == -1) {
            param_1[param_2 + -1] = '\0';
            return 0x50;
          }
          *param_1 = '\0';
          puVar2 = (undefined4 *)FUN_006f390a();
          uStack_18 = 0x22;
          goto LAB_00708aca;
        }
        *param_1 = '\0';
      }
    }
  }
  else if (param_1 != (char *)0x0) goto LAB_00708add;
  puVar2 = (undefined4 *)FUN_006f390a();
  uStack_18 = 0x16;
LAB_00708aca:
  *puVar2 = uStack_18;
  FUN_006e8c2f();
  return uStack_18;
}


/* ==== 00708b5b  FUN_00708b5b  size=11 ==== */

void FUN_00708b5b(void)

{
  FUN_00708aa4();
  return;
}


/* ==== 00708cf8  FID_conflict:__msize_base  size=51 ==== */

/* Library Function - Multiple Matches With Different Base Names
    __msize
    __msize_base
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

size_t __cdecl FID_conflict___msize_base(void *_Memory)

{
  undefined4 *puVar1;
  SIZE_T SVar2;
  
  if (_Memory == (void *)0x0) {
    puVar1 = (undefined4 *)FUN_006f390a();
    *puVar1 = 0x16;
    FUN_006e8c2f();
    return 0xffffffff;
  }
  SVar2 = HeapSize(DAT_007c9320,0,_Memory);
  return SVar2;
}


/* ==== 00708d2b  fegetenv  size=29 ==== */

/* Library Function - Single Match
    _fegetenv
   
   Library: Visual Studio 2019 Release */

undefined4 __cdecl fegetenv(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = ___acrt_fenv_get_control();
  *param_1 = uVar1;
  uVar1 = FUN_00704cda();
  param_1[1] = uVar1;
  return 0;
}


/* ==== 00708d48  FUN_00708d48  size=76 ==== */

bool FUN_00708d48(int *param_1)

{
  int iVar1;
  bool bVar2;
  int local_c;
  int local_8;
  
  FUN_00704d84(*param_1);
  FUN_00704dff(param_1[1]);
  local_c = 0;
  local_8 = 0;
  iVar1 = fegetenv(&local_c);
  if ((iVar1 == 0) && (*param_1 == local_c)) {
    bVar2 = param_1[1] != local_8;
  }
  else {
    bVar2 = true;
  }
  return bVar2;
}


/* ==== 00708d94  FUN_00708d94  size=77 ==== */

undefined4 FUN_00708d94(uint *param_1)

{
  int iVar1;
  uint local_c;
  uint local_8;
  
  local_c = 0;
  local_8 = 0;
  iVar1 = fegetenv(&local_c);
  if (iVar1 == 0) {
    *param_1 = local_c;
    local_c = local_c | 0x1f;
    param_1[1] = local_8;
    iVar1 = FUN_00708d48(&local_c);
    if (iVar1 == 0) {
      __clearfp();
      return 0;
    }
  }
  return 1;
}


/* ==== 00708df0  FUN_00708df0  size=79 ==== */

void FUN_00708df0(void)

{
  ushort in_FPUControlWord;
  float10 in_ST0;
  
  if ((DAT_007cde5c != 0) && ((MXCSR & 0x7f80) == 0x1f80 && (in_FPUControlWord & 0x7f) == 0x7f)) {
    FUN_00709870();
    return;
  }
  FUN_00706908((double)in_ST0);
  FUN_00708e48();
  return;
}


/* ==== 00708e48  FUN_00708e48  size=184 ==== */

uint FUN_00708e48(int param_1,uint param_2)

{
  uint in_EAX;
  uint uVar1;
  bool in_ZF;
  unkbyte10 in_ST0;
  
  if (in_ZF) {
    if (((in_EAX & 0xfffff) != 0) || (param_1 != 0)) {
      uVar1 = FUN_007068ac();
      goto LAB_00708ee1;
    }
    param_2 = 0;
    if ((in_EAX & 0x80000000) == 0) goto LAB_00708e75;
  }
  else {
    if ((((param_2 & 0x7ff00000) == 0) && ((param_2 & 0xfffff) == 0)) && (param_1 == 0)) {
      uVar1 = 2;
      goto LAB_00708ee1;
    }
    if ((param_2 & 0x80000000) == 0) {
      log2(in_ST0);
LAB_00708e75:
      if (DAT_007c9330 != 0) {
        return param_2;
      }
      uVar1 = __math_exit();
      return uVar1;
    }
  }
  uVar1 = 1;
LAB_00708ee1:
  if (DAT_007c9330 != 0) {
    return uVar1;
  }
  uVar1 = __startOneArgErrorHandling();
  return uVar1;
}


/* ==== 00708f00  FUN_00708f00  size=20 ==== */

undefined4 FUN_00708f00(undefined4 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  return param_1;
}


/* ==== 00708f14  FUN_00708f14  size=34 ==== */

undefined4 FUN_00708f14(undefined4 *param_1,int param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_2 + 0x1c) = 1;
  *(undefined4 *)(param_2 + 0x18) = 0x2a;
  return 0xffffffff;
}


/* ==== 00708f36  FUN_00708f36  size=433 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint FUN_00708f36(uint *param_1,byte *param_2,uint param_3,uint *param_4,undefined4 param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  byte bVar5;
  byte *pbVar6;
  uint *local_1c;
  byte local_16;
  byte local_15;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  local_1c = param_1;
  if (param_4 == (uint *)0x0) {
    param_4 = &DAT_007c9334;
  }
  if (param_2 == (byte *)0x0) {
    param_3 = 1;
    local_1c = (uint *)0x0;
    pbVar6 = &DAT_007793b1;
LAB_00708f95:
    if (*(short *)((int)param_4 + 6) == 0) {
      bVar5 = *pbVar6;
      pbVar6 = pbVar6 + 1;
      if (-1 < (char)bVar5) {
        if (local_1c != (uint *)0x0) {
          *local_1c = (uint)bVar5;
        }
        return (uint)(bVar5 != 0);
      }
      if ((bVar5 & 0xe0) == 0xc0) {
        uVar3 = (uint)CONCAT11(2,bVar5);
      }
      else if ((bVar5 & 0xf0) == 0xe0) {
        uVar3 = (uint)CONCAT11(3,bVar5);
      }
      else {
        if ((bVar5 & 0xf8) != 0xf0) goto LAB_007090d0;
        uVar3 = (uint)CONCAT11(4,bVar5);
      }
      local_15 = (byte)(uVar3 >> 8);
      puVar4 = (uint *)((1 << (7 - local_15 & 0x1f)) - 1U & uVar3 & 0xff);
      uVar3 = CONCAT31((int3)(uVar3 >> 8),local_15);
LAB_0070901f:
      uVar1 = uVar3 & 0xff;
      if (uVar1 < param_3) {
        param_3 = uVar1;
      }
      uVar2 = (int)pbVar6 - (int)param_2;
      while (uVar2 < param_3) {
        local_16 = *pbVar6;
        pbVar6 = pbVar6 + 1;
        uVar2 = uVar2 + 1;
        uVar3 = CONCAT31((int3)(uVar3 >> 8),local_15);
        if ((local_16 & 0xc0) != 0x80) goto LAB_007090d0;
        puVar4 = (uint *)((int)puVar4 << 6 | local_16 & 0x3f);
      }
      bVar5 = (byte)(uVar3 >> 8);
      if (param_3 < uVar1) {
        *(ushort *)(param_4 + 1) = (ushort)bVar5;
        *param_4 = (uint)puVar4;
        *(ushort *)((int)param_4 + 6) = (ushort)(byte)((char)uVar3 - (char)param_3);
        goto LAB_00708f8a;
      }
      if (((puVar4 < (uint *)0xd800) || ((uint *)0xdfff < puVar4)) && (puVar4 < (uint *)0x110000)) {
        local_14 = 0x80;
        local_10 = 0x800;
        local_c = 0x10000;
        if ((&local_1c)[bVar5] <= puVar4) {
          if (local_1c != (uint *)0x0) {
            *local_1c = (uint)puVar4;
          }
          uVar3 = FUN_00708f00(-(uint)(puVar4 != (uint *)0x0) & uVar1,param_4);
          return uVar3;
        }
      }
    }
    else {
      bVar5 = (byte)param_4[1];
      local_15 = *(byte *)((int)param_4 + 6);
      uVar3 = (uint)CONCAT11(bVar5,local_15);
      puVar4 = (uint *)*param_4;
      if ((((byte)(bVar5 - 2) < 3) && (local_15 != 0)) && (local_15 < bVar5)) goto LAB_0070901f;
    }
LAB_007090d0:
    uVar3 = FUN_00708f14(param_4,param_5);
  }
  else {
    pbVar6 = param_2;
    if (param_3 != 0) goto LAB_00708f95;
LAB_00708f8a:
    uVar3 = 0xfffffffe;
  }
  return uVar3;
}


/* ==== 0070919e  FUN_0070919e  size=55 ==== */

undefined4 FUN_0070919e(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined1 local_2c [40];
  
  FUN_006e8923(0);
  uVar1 = FUN_007091d5(param_1,param_2,param_3,local_2c);
  FUN_006e896b();
  return uVar1;
}


/* ==== 007091d5  FUN_007091d5  size=407 ==== */

undefined4 FUN_007091d5(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  HANDLE hFile;
  BOOL BVar3;
  DWORD DVar4;
  undefined4 uVar5;
  undefined4 unaff_EDI;
  longlong lVar6;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  int local_1c;
  undefined4 local_18;
  int local_10;
  int local_c;
  uint local_8;
  
  __crt_seek_guard::__crt_seek_guard
            ((__crt_seek_guard *)&local_30,param_1,CONCAT44(unaff_EDI,param_3));
  if (((local_30 & local_2c) == 0xffffffff) || ((local_28 & local_24) == 0xffffffff)) {
    if (*(char *)(param_4 + 0x1c) == '\0') {
      uVar5 = 0x16;
      goto LAB_00709352;
    }
LAB_0070934a:
    uVar5 = *(undefined4 *)(param_4 + 0x18);
  }
  else {
    local_c = local_1c;
    local_8 = local_20;
    if (local_1c < 0) {
LAB_007092f9:
      lVar6 = FUN_006f8e7d(param_1,param_2,param_3,0);
      if (lVar6 == -1) {
        if (*(char *)(param_4 + 0x1c) != '\0') goto LAB_0070934a;
      }
      else {
        hFile = (HANDLE)FUN_006ff4ee(param_1);
        BVar3 = SetEndOfFile(hFile);
        if (BVar3 == 0) {
          DVar4 = GetLastError();
          *(undefined1 *)(param_4 + 0x24) = 1;
          *(DWORD *)(param_4 + 0x20) = DVar4;
          uVar5 = 0xd;
          *(undefined1 *)(param_4 + 0x1c) = 1;
          *(undefined4 *)(param_4 + 0x18) = 0xd;
          goto LAB_00709352;
        }
      }
    }
    else if ((local_1c < 1) && (local_20 == 0)) {
      if ((local_1c < 1) && (local_1c < 0)) goto LAB_007092f9;
    }
    else {
      iVar1 = __calloc_base(0x1000,1);
      if (iVar1 == 0) {
        uVar5 = 0xc;
        *(undefined1 *)(param_4 + 0x1c) = 1;
        *(undefined4 *)(param_4 + 0x18) = 0xc;
LAB_007092e6:
        FUN_006f9a4d(iVar1);
        goto LAB_00709352;
      }
      local_10 = __setmode_nolock(param_1,0x8000);
      do {
        if (local_1c < 0) goto LAB_0070927d;
        if ((local_1c < 1) && (local_20 < 0x1000)) goto LAB_0070927d;
        do {
          local_20 = 0x1000;
LAB_0070927d:
          uVar2 = FUN_006fd626(param_1,iVar1,local_20,param_4);
          if (uVar2 == 0xffffffff) {
            if ((*(char *)(param_4 + 0x24) != '\0') && (*(int *)(param_4 + 0x20) == 5)) {
              *(undefined1 *)(param_4 + 0x1c) = 1;
              *(undefined4 *)(param_4 + 0x18) = 0xd;
            }
            if (*(char *)(param_4 + 0x1c) == '\0') {
              uVar5 = 0;
            }
            else {
              uVar5 = *(undefined4 *)(param_4 + 0x18);
            }
            goto LAB_007092e6;
          }
          local_20 = local_8 - uVar2;
          local_1c = (local_c - ((int)uVar2 >> 0x1f)) - (uint)(local_8 < uVar2);
          local_c = local_1c;
          local_8 = local_20;
        } while (0 < local_1c);
      } while ((-1 < local_1c) && (local_20 != 0));
      __setmode_nolock(param_1,local_10);
      FUN_006f9a4d(iVar1);
    }
    uVar5 = 0;
  }
LAB_00709352:
  FUN_006f8e7d(local_18,local_30,local_2c,0);
  return uVar5;
}


/* ==== 007093aa  FID_conflict:___dcrt_terminate_console_output  size=23 ==== */

/* Library Function - Multiple Matches With Different Base Names
    ___dcrt_terminate_console_input
    ___dcrt_terminate_console_output
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void FID_conflict____dcrt_terminate_console_output(void)

{
  if ((DAT_007c63d0 != (HANDLE)0xffffffff) && (DAT_007c63d0 != (HANDLE)0xfffffffe)) {
    CloseHandle(DAT_007c63d0);
  }
  return;
}


/* ==== 0070947b  FUN_0070947b  size=671 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

undefined4
FUN_0070947b(int *param_1,undefined4 param_2,undefined4 param_3,byte *param_4,int param_5,
            byte *param_6,int param_7,UINT param_8)

{
  BOOL BVar1;
  BYTE *pBVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  _cpinfo local_1c;
  uint local_8;
  
  local_8 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  if (param_5 < 1) {
    if (param_5 < -1) {
      return 0;
    }
  }
  else {
    param_5 = ___strncnt(param_4,param_5);
  }
  if (param_7 < 1) {
    if (param_7 < -1) {
      return 0;
    }
  }
  else {
    param_7 = ___strncnt(param_6,param_7);
  }
  if (param_8 == 0) {
    param_8 = *(UINT *)(*param_1 + 8);
  }
  if ((param_5 == 0) || (param_7 == 0)) {
    if (param_5 == param_7) {
      return 2;
    }
    if (1 < param_7) {
      return 1;
    }
    if (1 < param_5) {
      return 3;
    }
    BVar1 = GetCPInfo(param_8,&local_1c);
    if (BVar1 == 0) {
      return 0;
    }
    if (0 < param_5) {
      if (local_1c.MaxCharSize < 2) {
        return 3;
      }
      pBVar2 = local_1c.LeadByte;
      while( true ) {
        if (local_1c.LeadByte[0] == 0) {
          return 3;
        }
        if (pBVar2[1] == 0) break;
        if ((*pBVar2 <= *param_4) && (*param_4 <= pBVar2[1])) {
          return 2;
        }
        pBVar2 = pBVar2 + 2;
        local_1c.LeadByte[0] = *pBVar2;
      }
      return 3;
    }
    if (0 < param_7) {
      if (local_1c.MaxCharSize < 2) {
        return 1;
      }
      pBVar2 = local_1c.LeadByte;
      while( true ) {
        if (local_1c.LeadByte[0] == 0) {
          return 1;
        }
        if (pBVar2[1] == 0) break;
        if ((*pBVar2 <= *param_6) && (*param_6 <= pBVar2[1])) {
          return 2;
        }
        pBVar2 = pBVar2 + 2;
        local_1c.LeadByte[0] = *pBVar2;
      }
      return 1;
    }
  }
  iVar3 = FUN_006fdb32(param_8,9,param_4,param_5,0,0);
  if (iVar3 == 0) {
    return 0;
  }
  uVar4 = iVar3 * 2 + 8;
  uVar4 = -(uint)((uint)(iVar3 * 2) < uVar4) & uVar4;
  if (uVar4 != 0) {
    if (uVar4 < 0x401) {
      puVar9 = (undefined4 *)&stack0xffffffc8;
      if (&stack0x00000000 != (undefined1 *)0x38) {
LAB_0070960a:
        puVar9 = puVar9 + 2;
        if (puVar9 != (undefined4 *)0x0) {
          iVar5 = FUN_006fdb32(param_8,1,param_4,param_5,puVar9,iVar3);
          if ((iVar5 == 0) || (iVar5 = FUN_006fdb32(param_8,9,param_6,param_7,0,0), iVar5 == 0))
          goto LAB_00709708;
          uVar4 = iVar5 * 2 + 8;
          uVar4 = -(uint)((uint)(iVar5 * 2) < uVar4) & uVar4;
          if (uVar4 != 0) {
            if (uVar4 < 0x401) {
              puVar8 = (undefined4 *)&stack0xffffffc8;
              if (&stack0x00000000 != (undefined1 *)0x38) {
LAB_00709695:
                puVar8 = puVar8 + 2;
                if (puVar8 != (undefined4 *)0x0) {
                  iVar6 = FUN_006fdb32(param_8,1,param_6,param_7,puVar8,iVar5);
                  if (iVar6 != 0) {
                    uVar7 = ___acrt_CompareStringEx_36
                                      (param_2,param_3,puVar9,iVar3,puVar8,iVar5,0,0,0);
                    FUN_006f184f(puVar8);
                    FUN_006f184f(puVar9);
                    return uVar7;
                  }
                  goto LAB_007096b6;
                }
              }
            }
            else {
              puVar8 = (undefined4 *)__malloc_base(uVar4);
              if (puVar8 != (undefined4 *)0x0) {
                *puVar8 = 0xdddd;
                goto LAB_00709695;
              }
            }
          }
          puVar8 = (undefined4 *)0x0;
LAB_007096b6:
          FUN_006f184f(puVar8);
          FUN_006f184f(puVar9);
          return 0;
        }
      }
    }
    else {
      puVar9 = (undefined4 *)__malloc_base(uVar4);
      if (puVar9 != (undefined4 *)0x0) {
        *puVar9 = 0xdddd;
        goto LAB_0070960a;
      }
    }
  }
  puVar9 = (undefined4 *)0x0;
LAB_00709708:
  FUN_006f184f(puVar9);
  return 0;
}


/* ==== 00709760  FUN_00709760  size=272 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00709760(int param_1,int *param_2,ushort *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint local_94;
  undefined1 local_90 [48];
  undefined8 local_60;
  uint local_50;
  uint local_14;
  
  local_14 = DAT_007c5940 ^ (uint)&stack0xfffffff0;
  local_94 = (uint)*param_3;
  iVar2 = *param_2;
  if (iVar2 == 1) {
LAB_007097ce:
    uVar3 = 8;
  }
  else if (iVar2 == 2) {
    uVar3 = 4;
  }
  else if (iVar2 == 3) {
    uVar3 = 0x11;
  }
  else if (iVar2 == 4) {
    uVar3 = 0x12;
  }
  else {
    if (iVar2 == 5) goto LAB_007097ce;
    if ((iVar2 == 7) || (iVar2 != 8)) goto LAB_0070982a;
    uVar3 = 0x10;
  }
  iVar2 = FUN_006f7ec2(uVar3,param_2 + 6,local_94);
  if (iVar2 == 0) {
    if (((param_1 == 0x10) || (param_1 == 0x16)) || (param_1 == 0x1d)) {
      local_60 = *(undefined8 *)(param_2 + 4);
      local_50 = local_50 & 0xffffffe3 | 3;
    }
    else {
      local_50 = local_50 & 0xfffffffe;
    }
    __raise_exc(local_90,&local_94,uVar3,param_1,param_2 + 2,param_2 + 6);
  }
LAB_0070982a:
  __ctrlfp(local_94,0xffff);
  if (((*param_2 != 8) && (cVar1 = FUN_006f7944(), cVar1 != '\0')) &&
     (iVar2 = FUN_006f7970(param_2), iVar2 != 0)) {
    return;
  }
  FUN_006f8463(*param_2);
  return;
}


/* ==== 00709870  FUN_00709870  size=24 ==== */

void FUN_00709870(void)

{
  float10 in_ST0;
  
  FUN_0070988e((double)in_ST0);
  return;
}


/* ==== 0070988e  FUN_0070988e  size=614 ==== */

float10 FUN_0070988e(double param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  double dVar8;
  undefined1 in_XMM0 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double local_c;
  
  iVar4 = 0;
  while( true ) {
    uVar7 = in_XMM0._0_8_;
    uVar2 = (uint)(ushort)(in_XMM0._6_2_ >> 4);
    dVar8 = (double)(uVar7 & 0xfffffffffffff | 0x3ff0000000000000);
    uVar1 = SUB82(dVar8 + 4398046511103.008,0) & 0x7f0;
    dVar10 = (double)(uVar7 & 0xfffff80000000 | 0x3ff0000000000000);
    dVar12 = (double)(uVar7 & 0xfffff80000000 | 0x3ff0000000000000);
    dVar11 = dVar10 * *(double *)(&DAT_0073f0e0 + uVar1) - 0.43359375;
    dVar8 = (dVar8 - dVar10) * *(double *)(&DAT_0073f0e0 + uVar1);
    dVar9 = ((double)(uVar7 & 0xfffffffffffff | 0x3ff0000000000000) - dVar12) *
            *(double *)(&UNK_0073f0e8 + uVar1);
    dVar10 = dVar8 + dVar11;
    in_XMM0._8_8_ = dVar9 + (dVar12 * *(double *)(&UNK_0073f0e8 + uVar1) - 0.43359375);
    uVar3 = uVar2 - 1;
    if (uVar3 < 0x7fe) {
      iVar4 = (uVar2 - 0x3ff) + iVar4;
      dVar12 = (double)iVar4;
      iVar5 = 0;
      if (uVar1 + iVar4 * 0x400 == 0) {
        iVar5 = 0x10;
      }
      return (float10)(((in_XMM0._8_8_ * -3.0717952561537047 + 1.775881635348345) * in_XMM0._8_8_ +
                       -1.155016766740187) * in_XMM0._8_8_ * in_XMM0._8_8_ +
                       ((dVar10 * 21.535473262846583 + -10.893557852776363) * dVar10 +
                       5.667600603343536) * dVar10 * dVar10 * dVar10 * dVar10 * dVar10 +
                       dVar10 * 0.0016161024074997105 +
                       *(double *)(&UNK_0073ecd8 + uVar1) + dVar12 * 2.8363394551044964e-14 +
                       (double)((ulonglong)dVar9 & *(ulonglong *)(&UNK_0073ec28 + iVar5)) +
                      *(double *)(&DAT_0073ecd0 + uVar1) + dVar11 + dVar12 * 0.30102999566395283 +
                      (double)((ulonglong)dVar8 & *(ulonglong *)(&DAT_0073ec20 + iVar5)));
    }
    local_c = (double)-(ulonglong)(param_1 == 0.0);
    if (SUB82(local_c,0) != 0) break;
    if (uVar3 != 0xffffffff) {
      if (uVar3 < 0x7ff) {
        local_c = 2.225073858507201e-308;
        if ((double)((ulonglong)param_1 & 0xfffffffffffff | 0x3ff0000000000000) == 1.0) {
          return (float10)INFINITY;
        }
        uVar6 = 0x3e9;
      }
      else if (((uVar2 & 0x7ff) < 0x7ff) ||
              (SUB84(param_1,0) == 0 && ((ulonglong)param_1 & 0xfffff00000000) == 0)) {
        local_c = -NAN;
        uVar6 = 9;
      }
      else {
        uVar6 = 0x3e9;
      }
      goto LAB_00709a9a;
    }
    in_XMM0._0_8_ = param_1 * 4503599627370496.0;
    iVar4 = -0x34;
  }
  local_c = -INFINITY;
  uVar6 = 8;
LAB_00709a9a:
  ___libm_error_support(&param_1,&param_1,&local_c,uVar6);
  return (float10)local_c;
}


/* ==== 00709b00  guard_check_icall  size=7 ==== */

void __cdecl guard_check_icall(void)

{
  guard_check_icall();
  return;
}


/* ==== 00709c20  FUN_00709c20  size=49 ==== */

bool FUN_00709c20(short *param_1)

{
  if ((*param_1 == 0x5a4d) && (*(int *)(*(int *)(param_1 + 0x1e) + (int)param_1) == 0x4550)) {
    return (short)((int *)(*(int *)(param_1 + 0x1e) + (int)param_1))[6] == 0x10b;
  }
  return false;
}


/* ==== 00709d5f  util_memcmp_n  size=4929 ==== */

int util_memcmp_n(uint *param_1,uint *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  if (param_3 == 0) {
    return 0;
  }
  if (param_3 == 1) {
    if ((uint)(byte)*param_1 == (uint)(byte)*param_2) {
      return 0;
    }
    if ((int)((uint)(byte)*param_1 - (uint)(byte)*param_2) < 1) {
      return -1;
    }
    return 1;
  }
  if (param_3 == 2) {
    iVar5 = 0;
    if (((uint)(byte)*param_1 != (uint)(byte)*param_2) &&
       (iVar5 = -1, 0 < (int)((uint)(byte)*param_1 - (uint)(byte)*param_2))) {
      iVar5 = 1;
    }
    if (iVar5 != 0) {
      return iVar5;
    }
    uVar4 = (uint)*(byte *)((int)param_1 + 1);
    uVar1 = (uint)*(byte *)((int)param_2 + 1);
  }
  else if (param_3 == 3) {
    iVar5 = 0;
    if (((uint)(byte)*param_1 != (uint)(byte)*param_2) &&
       (iVar5 = -1, 0 < (int)((uint)(byte)*param_1 - (uint)(byte)*param_2))) {
      iVar5 = 1;
    }
    if (iVar5 != 0) {
      return iVar5;
    }
    iVar5 = 0;
    if (((uint)*(byte *)((int)param_1 + 1) != (uint)*(byte *)((int)param_2 + 1)) &&
       (iVar5 = -1, 0 < (int)((uint)*(byte *)((int)param_1 + 1) - (uint)*(byte *)((int)param_2 + 1))
       )) {
      iVar5 = 1;
    }
    if (iVar5 != 0) {
      return iVar5;
    }
    uVar4 = (uint)*(byte *)((int)param_1 + 2);
    uVar1 = (uint)*(byte *)((int)param_2 + 2);
  }
  else {
    if (param_3 != 4) {
      iVar5 = 1;
code_r0x00709da6:
      switch(param_3) {
      case 0:
        break;
      case 1:
        goto switchD_0070a1a0_caseD_1;
      case 2:
        goto switchD_0070a1a0_caseD_2;
      case 3:
        goto switchD_0070a1a0_caseD_3;
      case 4:
        goto switchD_0070a1a0_caseD_4;
      case 5:
        goto switchD_0070a1a0_caseD_5;
      case 6:
        goto switchD_0070a1a0_caseD_6;
      case 7:
        goto switchD_0070a1a0_caseD_7;
      case 8:
        goto switchD_0070a1a0_caseD_8;
      case 9:
        goto switchD_0070a1a0_caseD_9;
      case 10:
        goto switchD_0070a1a0_caseD_a;
      case 0xb:
        goto switchD_0070a1a0_caseD_b;
      case 0xc:
        goto switchD_0070a1a0_caseD_c;
      case 0xd:
        goto switchD_0070a1a0_caseD_d;
      case 0xe:
        goto switchD_0070a1a0_caseD_e;
      case 0xf:
        goto switchD_0070a1a0_caseD_f;
      case 0x10:
        goto switchD_0070a1a0_caseD_10;
      case 0x11:
        goto switchD_0070a1a0_caseD_11;
      case 0x12:
        goto switchD_0070a1a0_caseD_12;
      case 0x13:
        goto switchD_0070a1a0_caseD_13;
      case 0x14:
        goto switchD_0070a1a0_caseD_14;
      case 0x15:
        goto switchD_0070a1a0_caseD_15;
      case 0x16:
        goto switchD_0070a1a0_caseD_16;
      case 0x17:
        goto switchD_0070a1a0_caseD_17;
      case 0x19:
        goto switchD_0070a1a0_caseD_19;
      case 0x1a:
        goto switchD_0070a1a0_caseD_1a;
      case 0x1b:
        goto switchD_0070a1a0_caseD_1b;
      case 0x1c:
        if (*(int *)((int)param_1 + param_3 + -0x1c) != *(int *)((int)param_2 + param_3 + -0x1c)) {
          uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -0x1c);
          uVar4 = (uint)*(byte *)((int)param_1 + param_3 + -0x1c);
          iVar2 = 0;
          if ((uVar4 != uVar1) && (iVar2 = -1, 0 < (int)(uVar4 - uVar1))) {
            iVar2 = iVar5;
          }
          if (iVar2 != 0) {
            return iVar2;
          }
          uVar4 = (uint)*(byte *)((int)param_1 + param_3 + -0x1b);
          uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -0x1b);
          iVar2 = 0;
          if ((uVar4 != uVar1) && (iVar2 = -1, 0 < (int)(uVar4 - uVar1))) {
            iVar2 = iVar5;
          }
          if (iVar2 != 0) {
            return iVar2;
          }
          uVar4 = (uint)*(byte *)((int)param_1 + param_3 + -0x1a);
          uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -0x1a);
          iVar2 = 0;
          if ((uVar4 != uVar1) && (iVar2 = -1, 0 < (int)(uVar4 - uVar1))) {
            iVar2 = iVar5;
          }
          if (iVar2 != 0) {
            return iVar2;
          }
          uVar4 = (uint)*(byte *)((int)param_1 + param_3 + -0x19);
          uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -0x19);
          iVar2 = 0;
          if ((uVar4 != uVar1) && (iVar2 = -1, 0 < (int)(uVar4 - uVar1))) {
            iVar2 = iVar5;
          }
          if (iVar2 != 0) {
            return iVar2;
          }
        }
      case 0x18:
        if (*(int *)((int)param_1 + param_3 + -0x18) != *(int *)((int)param_2 + param_3 + -0x18)) {
          uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -0x18);
          uVar4 = (uint)*(byte *)((int)param_1 + param_3 + -0x18);
          iVar2 = 0;
          if ((uVar4 != uVar1) && (iVar2 = -1, 0 < (int)(uVar4 - uVar1))) {
            iVar2 = iVar5;
          }
          if (iVar2 != 0) {
            return iVar2;
          }
          uVar4 = (uint)*(byte *)((int)param_1 + param_3 + -0x17);
          uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -0x17);
          iVar2 = 0;
          if ((uVar4 != uVar1) && (iVar2 = -1, 0 < (int)(uVar4 - uVar1))) {
            iVar2 = iVar5;
          }
          if (iVar2 != 0) {
            return iVar2;
          }
          uVar4 = (uint)*(byte *)((int)param_1 + param_3 + -0x16);
          uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -0x16);
          iVar2 = 0;
          if ((uVar4 != uVar1) && (iVar2 = -1, 0 < (int)(uVar4 - uVar1))) {
            iVar2 = iVar5;
          }
          if (iVar2 != 0) {
            return iVar2;
          }
          uVar4 = (uint)*(byte *)((int)param_1 + param_3 + -0x15);
          uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -0x15);
          iVar2 = 0;
          if ((uVar4 != uVar1) && (iVar2 = -1, 0 < (int)(uVar4 - uVar1))) {
            iVar2 = iVar5;
          }
          if (iVar2 != 0) {
            return iVar2;
          }
        }
switchD_0070a1a0_caseD_14:
        if (*(int *)((int)param_1 + param_3 + -0x14) != *(int *)((int)param_2 + param_3 + -0x14)) {
          uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -0x14);
          uVar4 = (uint)*(byte *)((int)param_1 + param_3 + -0x14);
          iVar2 = 0;
          if ((uVar4 != uVar1) && (iVar2 = -1, 0 < (int)(uVar4 - uVar1))) {
            iVar2 = iVar5;
          }
          if (iVar2 != 0) {
            return iVar2;
          }
          uVar4 = (uint)*(byte *)((int)param_1 + param_3 + -0x13);
          uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -0x13);
          iVar2 = 0;
          if ((uVar4 != uVar1) && (iVar2 = -1, 0 < (int)(uVar4 - uVar1))) {
            iVar2 = iVar5;
          }
          if (iVar2 != 0) {
            return iVar2;
          }
          uVar4 = (uint)*(byte *)((int)param_1 + param_3 + -0x12);
          uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -0x12);
          iVar2 = 0;
          if ((uVar4 != uVar1) && (iVar2 = -1, 0 < (int)(uVar4 - uVar1))) {
            iVar2 = iVar5;
          }
          if (iVar2 != 0) {
            return iVar2;
          }
          uVar4 = (uint)*(byte *)((int)param_1 + param_3 + -0x11);
          uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -0x11);
          iVar2 = 0;
          if ((uVar4 != uVar1) && (iVar2 = -1, 0 < (int)(uVar4 - uVar1))) {
            iVar2 = iVar5;
          }
          if (iVar2 != 0) {
            return iVar2;
          }
        }
switchD_0070a1a0_caseD_10:
        if (*(int *)((int)param_1 + param_3 + -0x10) != *(int *)((int)param_2 + param_3 + -0x10)) {
          uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -0x10);
          uVar4 = (uint)*(byte *)((int)param_1 + param_3 + -0x10);
          iVar2 = 0;
          if ((uVar4 != uVar1) && (iVar2 = -1, 0 < (int)(uVar4 - uVar1))) {
            iVar2 = iVar5;
          }
          if (iVar2 != 0) {
            return iVar2;
          }
          uVar4 = (uint)*(byte *)((int)param_1 + param_3 + -0xf);
          uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -0xf);
          iVar2 = 0;
          if ((uVar4 != uVar1) && (iVar2 = -1, 0 < (int)(uVar4 - uVar1))) {
            iVar2 = iVar5;
          }
          if (iVar2 != 0) {
            return iVar2;
          }
          uVar4 = (uint)*(byte *)((int)param_1 + param_3 + -0xe);
          uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -0xe);
          iVar2 = 0;
          if ((uVar4 != uVar1) && (iVar2 = -1, 0 < (int)(uVar4 - uVar1))) {
            iVar2 = iVar5;
          }
          if (iVar2 != 0) {
            return iVar2;
          }
          uVar4 = (uint)*(byte *)((int)param_1 + param_3 + -0xd);
          uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -0xd);
          iVar2 = 0;
          if ((uVar4 != uVar1) && (iVar2 = -1, 0 < (int)(uVar4 - uVar1))) {
            iVar2 = iVar5;
          }
          if (iVar2 != 0) {
            return iVar2;
          }
        }
switchD_0070a1a0_caseD_c:
        if (*(int *)((int)param_1 + param_3 + -0xc) != *(int *)((int)param_2 + param_3 + -0xc)) {
          uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -0xc);
          uVar4 = (uint)*(byte *)((int)param_1 + param_3 + -0xc);
          iVar2 = 0;
          if ((uVar4 != uVar1) && (iVar2 = -1, 0 < (int)(uVar4 - uVar1))) {
            iVar2 = iVar5;
          }
          if (iVar2 != 0) {
            return iVar2;
          }
          uVar4 = (uint)*(byte *)((int)param_1 + param_3 + -0xb);
          uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -0xb);
          iVar2 = 0;
          if ((uVar4 != uVar1) && (iVar2 = -1, 0 < (int)(uVar4 - uVar1))) {
            iVar2 = iVar5;
          }
          if (iVar2 != 0) {
            return iVar2;
          }
          uVar4 = (uint)*(byte *)((int)param_1 + param_3 + -10);
          uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -10);
          iVar2 = 0;
          if ((uVar4 != uVar1) && (iVar2 = -1, 0 < (int)(uVar4 - uVar1))) {
            iVar2 = iVar5;
          }
          if (iVar2 != 0) {
            return iVar2;
          }
          uVar4 = (uint)*(byte *)((int)param_1 + param_3 + -9);
          uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -9);
          iVar2 = 0;
          if ((uVar4 != uVar1) && (iVar2 = -1, 0 < (int)(uVar4 - uVar1))) {
            iVar2 = iVar5;
          }
          if (iVar2 != 0) {
            return iVar2;
          }
        }
switchD_0070a1a0_caseD_8:
        if (*(int *)((int)param_1 + param_3 + -8) != *(int *)((int)param_2 + param_3 + -8)) {
          uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -8);
          uVar4 = (uint)*(byte *)((int)param_1 + param_3 + -8);
          iVar2 = 0;
          if ((uVar4 != uVar1) && (iVar2 = -1, 0 < (int)(uVar4 - uVar1))) {
            iVar2 = iVar5;
          }
          if (iVar2 != 0) {
            return iVar2;
          }
          uVar4 = (uint)*(byte *)((int)param_1 + param_3 + -7);
          uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -7);
          iVar2 = 0;
          if ((uVar4 != uVar1) && (iVar2 = -1, 0 < (int)(uVar4 - uVar1))) {
            iVar2 = iVar5;
          }
          if (iVar2 != 0) {
            return iVar2;
          }
          uVar4 = (uint)*(byte *)((int)param_1 + param_3 + -6);
          uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -6);
          iVar2 = 0;
          if ((uVar4 != uVar1) && (iVar2 = -1, 0 < (int)(uVar4 - uVar1))) {
            iVar2 = iVar5;
          }
          if (iVar2 != 0) {
            return iVar2;
          }
          uVar4 = (uint)*(byte *)((int)param_1 + param_3 + -5);
          uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -5);
          iVar2 = 0;
          if ((uVar4 != uVar1) && (iVar2 = -1, 0 < (int)(uVar4 - uVar1))) {
            iVar2 = iVar5;
          }
          if (iVar2 != 0) {
            return iVar2;
          }
        }
switchD_0070a1a0_caseD_4:
        uVar1 = *(uint *)((int)param_1 + param_3 + -4);
        if (uVar1 != *(uint *)((int)param_2 + param_3 + -4)) {
          uVar1 = uVar1 & 0xff;
          uVar4 = (uint)*(byte *)((int)param_2 + param_3 + -4);
          iVar2 = 0;
          if ((uVar1 != uVar4) && (iVar2 = -1, 0 < (int)(uVar1 - uVar4))) {
            iVar2 = iVar5;
          }
          if (iVar2 != 0) {
            return iVar2;
          }
          uVar4 = (uint)*(byte *)((int)param_1 + param_3 + -3);
          uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -3);
          iVar2 = 0;
          if ((uVar4 != uVar1) && (iVar2 = -1, 0 < (int)(uVar4 - uVar1))) {
            iVar2 = iVar5;
          }
          if (iVar2 != 0) {
            return iVar2;
          }
          uVar4 = (uint)*(byte *)((int)param_1 + param_3 + -2);
          uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -2);
          iVar2 = 0;
          if ((uVar4 != uVar1) && (iVar2 = -1, 0 < (int)(uVar4 - uVar1))) {
            iVar2 = iVar5;
          }
          if (iVar2 != 0) {
            return iVar2;
          }
          uVar4 = (uint)*(byte *)((int)param_1 + param_3 + -1);
          uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -1);
          iVar2 = 0;
          if ((uVar4 != uVar1) && (iVar2 = -1, 0 < (int)(uVar4 - uVar1))) {
            iVar2 = iVar5;
          }
          if (iVar2 != 0) {
            return iVar2;
          }
        }
        break;
      case 0x1d:
        uVar1 = *(uint *)((int)param_1 + param_3 + -0x1d);
        if (uVar1 != *(uint *)((int)param_2 + param_3 + -0x1d)) {
          uVar1 = uVar1 & 0xff;
          uVar4 = (uint)*(byte *)((int)param_2 + param_3 + -0x1d);
          iVar2 = 0;
          if ((uVar1 != uVar4) && (iVar2 = -1, 0 < (int)(uVar1 - uVar4))) {
            iVar2 = iVar5;
          }
          if (iVar2 != 0) {
            return iVar2;
          }
          uVar4 = (uint)*(byte *)((int)param_1 + param_3 + -0x1c);
          uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -0x1c);
          iVar2 = 0;
          if ((uVar4 != uVar1) && (iVar2 = -1, 0 < (int)(uVar4 - uVar1))) {
            iVar2 = iVar5;
          }
          if (iVar2 != 0) {
            return iVar2;
          }
          uVar4 = (uint)*(byte *)((int)param_1 + param_3 + -0x1b);
          uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -0x1b);
          iVar2 = 0;
          if ((uVar4 != uVar1) && (iVar2 = -1, 0 < (int)(uVar4 - uVar1))) {
            iVar2 = iVar5;
          }
          if (iVar2 != 0) {
            return iVar2;
          }
          uVar4 = (uint)*(byte *)((int)param_1 + param_3 + -0x1a);
          uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -0x1a);
          iVar2 = 0;
          if ((uVar4 != uVar1) && (iVar2 = -1, 0 < (int)(uVar4 - uVar1))) {
            iVar2 = iVar5;
          }
          if (iVar2 != 0) {
            return iVar2;
          }
        }
switchD_0070a1a0_caseD_19:
        if (*(int *)((int)param_1 + param_3 + -0x19) != *(int *)((int)param_2 + param_3 + -0x19)) {
          uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -0x19);
          uVar4 = (uint)*(byte *)((int)param_1 + param_3 + -0x19);
          iVar2 = 0;
          if ((uVar4 != uVar1) && (iVar2 = -1, 0 < (int)(uVar4 - uVar1))) {
            iVar2 = iVar5;
          }
          if (iVar2 != 0) {
            return iVar2;
          }
          uVar4 = (uint)*(byte *)((int)param_1 + param_3 + -0x18);
          uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -0x18);
          iVar2 = 0;
          if ((uVar4 != uVar1) && (iVar2 = -1, 0 < (int)(uVar4 - uVar1))) {
            iVar2 = iVar5;
          }
          if (iVar2 != 0) {
            return iVar2;
          }
          uVar4 = (uint)*(byte *)((int)param_1 + param_3 + -0x17);
          uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -0x17);
          iVar2 = 0;
          if ((uVar4 != uVar1) && (iVar2 = -1, 0 < (int)(uVar4 - uVar1))) {
            iVar2 = iVar5;
          }
          if (iVar2 != 0) {
            return iVar2;
          }
          uVar4 = (uint)*(byte *)((int)param_1 + param_3 + -0x16);
          uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -0x16);
          iVar2 = 0;
          if ((uVar4 != uVar1) && (iVar2 = -1, 0 < (int)(uVar4 - uVar1))) {
            iVar2 = iVar5;
          }
          if (iVar2 != 0) {
            return iVar2;
          }
        }
switchD_0070a1a0_caseD_15:
        if (*(int *)((int)param_1 + param_3 + -0x15) != *(int *)((int)param_2 + param_3 + -0x15)) {
          uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -0x15);
          uVar4 = (uint)*(byte *)((int)param_1 + param_3 + -0x15);
          iVar2 = 0;
          if ((uVar4 != uVar1) && (iVar2 = -1, 0 < (int)(uVar4 - uVar1))) {
            iVar2 = iVar5;
          }
          if (iVar2 != 0) {
            return iVar2;
          }
          uVar4 = (uint)*(byte *)((int)param_1 + param_3 + -0x14);
          uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -0x14);
          iVar2 = 0;
          if ((uVar4 != uVar1) && (iVar2 = -1, 0 < (int)(uVar4 - uVar1))) {
            iVar2 = iVar5;
          }
          if (iVar2 != 0) {
            return iVar2;
          }
          uVar4 = (uint)*(byte *)((int)param_1 + param_3 + -0x13);
          uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -0x13);
          iVar2 = 0;
          if ((uVar4 != uVar1) && (iVar2 = -1, 0 < (int)(uVar4 - uVar1))) {
            iVar2 = iVar5;
          }
          if (iVar2 != 0) {
            return iVar2;
          }
          uVar4 = (uint)*(byte *)((int)param_1 + param_3 + -0x12);
          uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -0x12);
          iVar2 = 0;
          if ((uVar4 != uVar1) && (iVar2 = -1, 0 < (int)(uVar4 - uVar1))) {
            iVar2 = iVar5;
          }
          if (iVar2 != 0) {
            return iVar2;
          }
        }
switchD_0070a1a0_caseD_11:
        uVar1 = *(uint *)((int)param_1 + param_3 + -0x11);
        if (uVar1 != *(uint *)((int)param_2 + param_3 + -0x11)) {
          uVar1 = uVar1 & 0xff;
          uVar4 = (uint)*(byte *)((int)param_2 + param_3 + -0x11);
          iVar2 = 0;
          if ((uVar1 != uVar4) && (iVar2 = -1, 0 < (int)(uVar1 - uVar4))) {
            iVar2 = iVar5;
          }
          if (iVar2 != 0) {
            return iVar2;
          }
          uVar4 = (uint)*(byte *)((int)param_1 + param_3 + -0x10);
          uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -0x10);
          iVar2 = 0;
          if ((uVar4 != uVar1) && (iVar2 = -1, 0 < (int)(uVar4 - uVar1))) {
            iVar2 = iVar5;
          }
          if (iVar2 != 0) {
            return iVar2;
          }
          uVar4 = (uint)*(byte *)((int)param_1 + param_3 + -0xf);
          uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -0xf);
          iVar2 = 0;
          if ((uVar4 != uVar1) && (iVar2 = -1, 0 < (int)(uVar4 - uVar1))) {
            iVar2 = iVar5;
          }
          if (iVar2 != 0) {
            return iVar2;
          }
          uVar4 = (uint)*(byte *)((int)param_1 + param_3 + -0xe);
          uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -0xe);
          iVar2 = 0;
          if ((uVar4 != uVar1) && (iVar2 = -1, 0 < (int)(uVar4 - uVar1))) {
            iVar2 = iVar5;
          }
          if (iVar2 != 0) {
            return iVar2;
          }
        }
switchD_0070a1a0_caseD_d:
        if (*(int *)((int)param_1 + param_3 + -0xd) != *(int *)((int)param_2 + param_3 + -0xd)) {
          uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -0xd);
          uVar4 = (uint)*(byte *)((int)param_1 + param_3 + -0xd);
          iVar2 = 0;
          if ((uVar4 != uVar1) && (iVar2 = -1, 0 < (int)(uVar4 - uVar1))) {
            iVar2 = iVar5;
          }
          if (iVar2 != 0) {
            return iVar2;
          }
          uVar4 = (uint)*(byte *)((int)param_1 + param_3 + -0xc);
          uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -0xc);
          iVar2 = 0;
          if ((uVar4 != uVar1) && (iVar2 = -1, 0 < (int)(uVar4 - uVar1))) {
            iVar2 = iVar5;
          }
          if (iVar2 != 0) {
            return iVar2;
          }
          uVar4 = (uint)*(byte *)((int)param_1 + param_3 + -0xb);
          uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -0xb);
          iVar2 = 0;
          if ((uVar4 != uVar1) && (iVar2 = -1, 0 < (int)(uVar4 - uVar1))) {
            iVar2 = iVar5;
          }
          if (iVar2 != 0) {
            return iVar2;
          }
          uVar4 = (uint)*(byte *)((int)param_1 + param_3 + -10);
          uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -10);
          iVar2 = 0;
          if ((uVar4 != uVar1) && (iVar2 = -1, 0 < (int)(uVar4 - uVar1))) {
            iVar2 = iVar5;
          }
          if (iVar2 != 0) {
            return iVar2;
          }
        }
switchD_0070a1a0_caseD_9:
        uVar1 = *(uint *)((int)param_1 + param_3 + -9);
        if (uVar1 != *(uint *)((int)param_2 + param_3 + -9)) {
          uVar1 = uVar1 & 0xff;
          uVar4 = (uint)*(byte *)((int)param_2 + param_3 + -9);
          iVar2 = 0;
          if ((uVar1 != uVar4) && (iVar2 = -1, 0 < (int)(uVar1 - uVar4))) {
            iVar2 = iVar5;
          }
          if (iVar2 != 0) {
            return iVar2;
          }
          uVar4 = (uint)*(byte *)((int)param_1 + param_3 + -8);
          uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -8);
          iVar2 = 0;
          if ((uVar4 != uVar1) && (iVar2 = -1, 0 < (int)(uVar4 - uVar1))) {
            iVar2 = iVar5;
          }
          if (iVar2 != 0) {
            return iVar2;
          }
          uVar4 = (uint)*(byte *)((int)param_1 + param_3 + -7);
          uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -7);
          iVar2 = 0;
          if ((uVar4 != uVar1) && (iVar2 = -1, 0 < (int)(uVar4 - uVar1))) {
            iVar2 = iVar5;
          }
          if (iVar2 != 0) {
            return iVar2;
          }
          uVar4 = (uint)*(byte *)((int)param_1 + param_3 + -6);
          uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -6);
          iVar2 = 0;
          if ((uVar4 != uVar1) && (iVar2 = -1, 0 < (int)(uVar4 - uVar1))) {
            iVar2 = iVar5;
          }
          if (iVar2 != 0) {
            return iVar2;
          }
        }
switchD_0070a1a0_caseD_5:
        if (*(int *)((int)param_1 + param_3 + -5) != *(int *)((int)param_2 + param_3 + -5)) {
          uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -5);
          uVar4 = (uint)*(byte *)((int)param_1 + param_3 + -5);
          iVar2 = 0;
          if ((uVar4 != uVar1) && (iVar2 = -1, 0 < (int)(uVar4 - uVar1))) {
            iVar2 = iVar5;
          }
          if (iVar2 != 0) {
            return iVar2;
          }
          uVar4 = (uint)*(byte *)((int)param_1 + param_3 + -4);
          uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -4);
          iVar2 = 0;
          if ((uVar4 != uVar1) && (iVar2 = -1, 0 < (int)(uVar4 - uVar1))) {
            iVar2 = iVar5;
          }
          if (iVar2 != 0) {
            return iVar2;
          }
          uVar4 = (uint)*(byte *)((int)param_1 + param_3 + -3);
          uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -3);
          iVar2 = 0;
          if ((uVar4 != uVar1) && (iVar2 = -1, 0 < (int)(uVar4 - uVar1))) {
            iVar2 = iVar5;
          }
          if (iVar2 != 0) {
            return iVar2;
          }
          uVar4 = (uint)*(byte *)((int)param_1 + param_3 + -2);
          uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -2);
          iVar2 = 0;
          if ((uVar4 != uVar1) && (iVar2 = -1, 0 < (int)(uVar4 - uVar1))) {
            iVar2 = iVar5;
          }
          if (iVar2 != 0) {
            return iVar2;
          }
        }
switchD_0070a1a0_caseD_1:
        uVar4 = (uint)*(byte *)((int)param_1 + param_3 + -1);
        uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -1);
        goto LAB_0070afeb;
      case 0x1e:
        uVar1 = *(uint *)((int)param_1 + param_3 + -0x1e);
        if (uVar1 != *(uint *)((int)param_2 + param_3 + -0x1e)) {
          uVar1 = uVar1 & 0xff;
          uVar4 = (uint)*(byte *)((int)param_2 + param_3 + -0x1e);
          iVar2 = 0;
          if ((uVar1 != uVar4) && (iVar2 = -1, 0 < (int)(uVar1 - uVar4))) {
            iVar2 = iVar5;
          }
          if (iVar2 != 0) {
            return iVar2;
          }
          uVar4 = (uint)*(byte *)((int)param_1 + param_3 + -0x1d);
          uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -0x1d);
          iVar2 = 0;
          if ((uVar4 != uVar1) && (iVar2 = -1, 0 < (int)(uVar4 - uVar1))) {
            iVar2 = iVar5;
          }
          if (iVar2 != 0) {
            return iVar2;
          }
          uVar4 = (uint)*(byte *)((int)param_1 + param_3 + -0x1c);
          uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -0x1c);
          iVar2 = 0;
          if ((uVar4 != uVar1) && (iVar2 = -1, 0 < (int)(uVar4 - uVar1))) {
            iVar2 = iVar5;
          }
          if (iVar2 != 0) {
            return iVar2;
          }
          uVar4 = (uint)*(byte *)((int)param_1 + param_3 + -0x1b);
          uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -0x1b);
          iVar2 = 0;
          if ((uVar4 != uVar1) && (iVar2 = -1, 0 < (int)(uVar4 - uVar1))) {
            iVar2 = iVar5;
          }
          if (iVar2 != 0) {
            return iVar2;
          }
        }
switchD_0070a1a0_caseD_1a:
        uVar1 = *(uint *)((int)param_1 + param_3 + -0x1a);
        if (uVar1 != *(uint *)((int)param_2 + param_3 + -0x1a)) {
          uVar1 = uVar1 & 0xff;
          uVar4 = (uint)*(byte *)((int)param_2 + param_3 + -0x1a);
          iVar2 = 0;
          if ((uVar1 != uVar4) && (iVar2 = -1, 0 < (int)(uVar1 - uVar4))) {
            iVar2 = iVar5;
          }
          if (iVar2 != 0) {
            return iVar2;
          }
          uVar4 = (uint)*(byte *)((int)param_1 + param_3 + -0x19);
          uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -0x19);
          iVar2 = 0;
          if ((uVar4 != uVar1) && (iVar2 = -1, 0 < (int)(uVar4 - uVar1))) {
            iVar2 = iVar5;
          }
          if (iVar2 != 0) {
            return iVar2;
          }
          uVar4 = (uint)*(byte *)((int)param_1 + param_3 + -0x18);
          uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -0x18);
          iVar2 = 0;
          if ((uVar4 != uVar1) && (iVar2 = -1, 0 < (int)(uVar4 - uVar1))) {
            iVar2 = iVar5;
          }
          if (iVar2 != 0) {
            return iVar2;
          }
          uVar4 = (uint)*(byte *)((int)param_1 + param_3 + -0x17);
          uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -0x17);
          iVar2 = 0;
          if ((uVar4 != uVar1) && (iVar2 = -1, 0 < (int)(uVar4 - uVar1))) {
            iVar2 = iVar5;
          }
          if (iVar2 != 0) {
            return iVar2;
          }
        }
switchD_0070a1a0_caseD_16:
        uVar1 = *(uint *)((int)param_1 + param_3 + -0x16);
        if (uVar1 != *(uint *)((int)param_2 + param_3 + -0x16)) {
          uVar1 = uVar1 & 0xff;
          uVar4 = (uint)*(byte *)((int)param_2 + param_3 + -0x16);
          iVar2 = 0;
          if ((uVar1 != uVar4) && (iVar2 = -1, 0 < (int)(uVar1 - uVar4))) {
            iVar2 = iVar5;
          }
          if (iVar2 != 0) {
            return iVar2;
          }
          uVar4 = (uint)*(byte *)((int)param_1 + param_3 + -0x15);
          uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -0x15);
          iVar2 = 0;
          if ((uVar4 != uVar1) && (iVar2 = -1, 0 < (int)(uVar4 - uVar1))) {
            iVar2 = iVar5;
          }
          if (iVar2 != 0) {
            return iVar2;
          }
          uVar4 = (uint)*(byte *)((int)param_1 + param_3 + -0x14);
          uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -0x14);
          iVar2 = 0;
          if ((uVar4 != uVar1) && (iVar2 = -1, 0 < (int)(uVar4 - uVar1))) {
            iVar2 = iVar5;
          }
          if (iVar2 != 0) {
            return iVar2;
          }
          uVar4 = (uint)*(byte *)((int)param_1 + param_3 + -0x13);
          uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -0x13);
          iVar2 = 0;
          if ((uVar4 != uVar1) && (iVar2 = -1, 0 < (int)(uVar4 - uVar1))) {
            iVar2 = iVar5;
          }
          if (iVar2 != 0) {
            return iVar2;
          }
        }
switchD_0070a1a0_caseD_12:
        uVar1 = *(uint *)((int)param_1 + param_3 + -0x12);
        if (uVar1 != *(uint *)((int)param_2 + param_3 + -0x12)) {
          uVar1 = uVar1 & 0xff;
          uVar4 = (uint)*(byte *)((int)param_2 + param_3 + -0x12);
          iVar2 = 0;
          if ((uVar1 != uVar4) && (iVar2 = -1, 0 < (int)(uVar1 - uVar4))) {
            iVar2 = iVar5;
          }
          if (iVar2 != 0) {
            return iVar2;
          }
          uVar4 = (uint)*(byte *)((int)param_1 + param_3 + -0x11);
          uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -0x11);
          iVar2 = 0;
          if ((uVar4 != uVar1) && (iVar2 = -1, 0 < (int)(uVar4 - uVar1))) {
            iVar2 = iVar5;
          }
          if (iVar2 != 0) {
            return iVar2;
          }
          uVar4 = (uint)*(byte *)((int)param_1 + param_3 + -0x10);
          uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -0x10);
          iVar2 = 0;
          if ((uVar4 != uVar1) && (iVar2 = -1, 0 < (int)(uVar4 - uVar1))) {
            iVar2 = iVar5;
          }
          if (iVar2 != 0) {
            return iVar2;
          }
          uVar4 = (uint)*(byte *)((int)param_1 + param_3 + -0xf);
          uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -0xf);
          iVar2 = 0;
          if ((uVar4 != uVar1) && (iVar2 = -1, 0 < (int)(uVar4 - uVar1))) {
            iVar2 = iVar5;
          }
          if (iVar2 != 0) {
            return iVar2;
          }
        }
switchD_0070a1a0_caseD_e:
        uVar1 = *(uint *)((int)param_1 + param_3 + -0xe);
        if (uVar1 != *(uint *)((int)param_2 + param_3 + -0xe)) {
          uVar1 = uVar1 & 0xff;
          uVar4 = (uint)*(byte *)((int)param_2 + param_3 + -0xe);
          iVar2 = 0;
          if ((uVar1 != uVar4) && (iVar2 = -1, 0 < (int)(uVar1 - uVar4))) {
            iVar2 = iVar5;
          }
          if (iVar2 != 0) {
            return iVar2;
          }
          uVar4 = (uint)*(byte *)((int)param_1 + param_3 + -0xd);
          uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -0xd);
          iVar2 = 0;
          if ((uVar4 != uVar1) && (iVar2 = -1, 0 < (int)(uVar4 - uVar1))) {
            iVar2 = iVar5;
          }
          if (iVar2 != 0) {
            return iVar2;
          }
          uVar4 = (uint)*(byte *)((int)param_1 + param_3 + -0xc);
          uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -0xc);
          iVar2 = 0;
          if ((uVar4 != uVar1) && (iVar2 = -1, 0 < (int)(uVar4 - uVar1))) {
            iVar2 = iVar5;
          }
          if (iVar2 != 0) {
            return iVar2;
          }
          uVar4 = (uint)*(byte *)((int)param_1 + param_3 + -0xb);
          uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -0xb);
          iVar2 = 0;
          if ((uVar4 != uVar1) && (iVar2 = -1, 0 < (int)(uVar4 - uVar1))) {
            iVar2 = iVar5;
          }
          if (iVar2 != 0) {
            return iVar2;
          }
        }
switchD_0070a1a0_caseD_a:
        if (*(int *)((int)param_1 + param_3 + -10) != *(int *)((int)param_2 + param_3 + -10)) {
          uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -10);
          uVar4 = (uint)*(byte *)((int)param_1 + param_3 + -10);
          iVar2 = 0;
          if ((uVar4 != uVar1) && (iVar2 = -1, 0 < (int)(uVar4 - uVar1))) {
            iVar2 = iVar5;
          }
          if (iVar2 != 0) {
            return iVar2;
          }
          uVar4 = (uint)*(byte *)((int)param_1 + param_3 + -9);
          uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -9);
          iVar2 = 0;
          if ((uVar4 != uVar1) && (iVar2 = -1, 0 < (int)(uVar4 - uVar1))) {
            iVar2 = iVar5;
          }
          if (iVar2 != 0) {
            return iVar2;
          }
          uVar4 = (uint)*(byte *)((int)param_1 + param_3 + -8);
          uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -8);
          iVar2 = 0;
          if ((uVar4 != uVar1) && (iVar2 = -1, 0 < (int)(uVar4 - uVar1))) {
            iVar2 = iVar5;
          }
          if (iVar2 != 0) {
            return iVar2;
          }
          uVar4 = (uint)*(byte *)((int)param_1 + param_3 + -7);
          uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -7);
          iVar2 = 0;
          if ((uVar4 != uVar1) && (iVar2 = -1, 0 < (int)(uVar4 - uVar1))) {
            iVar2 = iVar5;
          }
          if (iVar2 != 0) {
            return iVar2;
          }
        }
switchD_0070a1a0_caseD_6:
        uVar1 = *(uint *)((int)param_1 + param_3 + -6);
        if (uVar1 != *(uint *)((int)param_2 + param_3 + -6)) {
          uVar1 = uVar1 & 0xff;
          uVar4 = (uint)*(byte *)((int)param_2 + param_3 + -6);
          iVar2 = 0;
          if ((uVar1 != uVar4) && (iVar2 = -1, 0 < (int)(uVar1 - uVar4))) {
            iVar2 = iVar5;
          }
          if (iVar2 != 0) {
            return iVar2;
          }
          uVar4 = (uint)*(byte *)((int)param_1 + param_3 + -5);
          uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -5);
          iVar2 = 0;
          if ((uVar4 != uVar1) && (iVar2 = -1, 0 < (int)(uVar4 - uVar1))) {
            iVar2 = iVar5;
          }
          if (iVar2 != 0) {
            return iVar2;
          }
          uVar4 = (uint)*(byte *)((int)param_1 + param_3 + -4);
          uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -4);
          iVar2 = 0;
          if ((uVar4 != uVar1) && (iVar2 = -1, 0 < (int)(uVar4 - uVar1))) {
            iVar2 = iVar5;
          }
          if (iVar2 != 0) {
            return iVar2;
          }
          uVar4 = (uint)*(byte *)((int)param_1 + param_3 + -3);
          uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -3);
          iVar2 = 0;
          if ((uVar4 != uVar1) && (iVar2 = -1, 0 < (int)(uVar4 - uVar1))) {
            iVar2 = iVar5;
          }
          if (iVar2 != 0) {
            return iVar2;
          }
        }
switchD_0070a1a0_caseD_2:
        if (*(short *)((int)param_1 + param_3 + -2) != *(short *)((int)param_2 + param_3 + -2)) {
LAB_0070af6b:
          uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -2);
          uVar4 = (uint)*(byte *)((int)param_1 + param_3 + -2);
          iVar2 = 0;
          if ((uVar4 != uVar1) && (iVar2 = -1, 0 < (int)(uVar4 - uVar1))) {
            iVar2 = iVar5;
          }
          if (iVar2 != 0) {
            return iVar2;
          }
          uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -1);
          uVar4 = (uint)*(byte *)((int)param_1 + param_3 + -1);
          goto LAB_0070afeb;
        }
        break;
      case 0x1f:
        if (*(int *)((int)param_1 + param_3 + -0x1f) != *(int *)((int)param_2 + param_3 + -0x1f)) {
          uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -0x1f);
          uVar4 = (uint)*(byte *)((int)param_1 + param_3 + -0x1f);
          iVar2 = 0;
          if ((uVar4 != uVar1) && (iVar2 = -1, 0 < (int)(uVar4 - uVar1))) {
            iVar2 = iVar5;
          }
          if (iVar2 != 0) {
            return iVar2;
          }
          uVar4 = (uint)*(byte *)((int)param_1 + param_3 + -0x1e);
          uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -0x1e);
          iVar2 = 0;
          if ((uVar4 != uVar1) && (iVar2 = -1, 0 < (int)(uVar4 - uVar1))) {
            iVar2 = iVar5;
          }
          if (iVar2 != 0) {
            return iVar2;
          }
          uVar4 = (uint)*(byte *)((int)param_1 + param_3 + -0x1d);
          uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -0x1d);
          iVar2 = 0;
          if ((uVar4 != uVar1) && (iVar2 = -1, 0 < (int)(uVar4 - uVar1))) {
            iVar2 = iVar5;
          }
          if (iVar2 != 0) {
            return iVar2;
          }
          uVar4 = (uint)*(byte *)((int)param_1 + param_3 + -0x1c);
          uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -0x1c);
          iVar2 = 0;
          if ((uVar4 != uVar1) && (iVar2 = -1, 0 < (int)(uVar4 - uVar1))) {
            iVar2 = iVar5;
          }
          if (iVar2 != 0) {
            return iVar2;
          }
        }
switchD_0070a1a0_caseD_1b:
        uVar1 = *(uint *)((int)param_1 + param_3 + -0x1b);
        if (uVar1 != *(uint *)((int)param_2 + param_3 + -0x1b)) {
          uVar1 = uVar1 & 0xff;
          uVar4 = (uint)*(byte *)((int)param_2 + param_3 + -0x1b);
          iVar2 = 0;
          if ((uVar1 != uVar4) && (iVar2 = -1, 0 < (int)(uVar1 - uVar4))) {
            iVar2 = iVar5;
          }
          if (iVar2 != 0) {
            return iVar2;
          }
          uVar4 = (uint)*(byte *)((int)param_1 + param_3 + -0x1a);
          uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -0x1a);
          iVar2 = 0;
          if ((uVar4 != uVar1) && (iVar2 = -1, 0 < (int)(uVar4 - uVar1))) {
            iVar2 = iVar5;
          }
          if (iVar2 != 0) {
            return iVar2;
          }
          uVar4 = (uint)*(byte *)((int)param_1 + param_3 + -0x19);
          uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -0x19);
          iVar2 = 0;
          if ((uVar4 != uVar1) && (iVar2 = -1, 0 < (int)(uVar4 - uVar1))) {
            iVar2 = iVar5;
          }
          if (iVar2 != 0) {
            return iVar2;
          }
          uVar4 = (uint)*(byte *)((int)param_1 + param_3 + -0x18);
          uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -0x18);
          iVar2 = 0;
          if ((uVar4 != uVar1) && (iVar2 = -1, 0 < (int)(uVar4 - uVar1))) {
            iVar2 = iVar5;
          }
          if (iVar2 != 0) {
            return iVar2;
          }
        }
switchD_0070a1a0_caseD_17:
        uVar1 = *(uint *)((int)param_1 + param_3 + -0x17);
        if (uVar1 != *(uint *)((int)param_2 + param_3 + -0x17)) {
          uVar1 = uVar1 & 0xff;
          uVar4 = (uint)*(byte *)((int)param_2 + param_3 + -0x17);
          iVar2 = 0;
          if ((uVar1 != uVar4) && (iVar2 = -1, 0 < (int)(uVar1 - uVar4))) {
            iVar2 = iVar5;
          }
          if (iVar2 != 0) {
            return iVar2;
          }
          uVar4 = (uint)*(byte *)((int)param_1 + param_3 + -0x16);
          uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -0x16);
          iVar2 = 0;
          if ((uVar4 != uVar1) && (iVar2 = -1, 0 < (int)(uVar4 - uVar1))) {
            iVar2 = iVar5;
          }
          if (iVar2 != 0) {
            return iVar2;
          }
          uVar4 = (uint)*(byte *)((int)param_1 + param_3 + -0x15);
          uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -0x15);
          iVar2 = 0;
          if ((uVar4 != uVar1) && (iVar2 = -1, 0 < (int)(uVar4 - uVar1))) {
            iVar2 = iVar5;
          }
          if (iVar2 != 0) {
            return iVar2;
          }
          uVar4 = (uint)*(byte *)((int)param_1 + param_3 + -0x14);
          uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -0x14);
          iVar2 = 0;
          if ((uVar4 != uVar1) && (iVar2 = -1, 0 < (int)(uVar4 - uVar1))) {
            iVar2 = iVar5;
          }
          if (iVar2 != 0) {
            return iVar2;
          }
        }
switchD_0070a1a0_caseD_13:
        if (*(int *)((int)param_1 + param_3 + -0x13) != *(int *)((int)param_2 + param_3 + -0x13)) {
          uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -0x13);
          uVar4 = (uint)*(byte *)((int)param_1 + param_3 + -0x13);
          iVar2 = 0;
          if ((uVar4 != uVar1) && (iVar2 = -1, 0 < (int)(uVar4 - uVar1))) {
            iVar2 = iVar5;
          }
          if (iVar2 != 0) {
            return iVar2;
          }
          uVar4 = (uint)*(byte *)((int)param_1 + param_3 + -0x12);
          uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -0x12);
          iVar2 = 0;
          if ((uVar4 != uVar1) && (iVar2 = -1, 0 < (int)(uVar4 - uVar1))) {
            iVar2 = iVar5;
          }
          if (iVar2 != 0) {
            return iVar2;
          }
          uVar4 = (uint)*(byte *)((int)param_1 + param_3 + -0x11);
          uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -0x11);
          iVar2 = 0;
          if ((uVar4 != uVar1) && (iVar2 = -1, 0 < (int)(uVar4 - uVar1))) {
            iVar2 = iVar5;
          }
          if (iVar2 != 0) {
            return iVar2;
          }
          uVar4 = (uint)*(byte *)((int)param_1 + param_3 + -0x10);
          uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -0x10);
          iVar2 = 0;
          if ((uVar4 != uVar1) && (iVar2 = -1, 0 < (int)(uVar4 - uVar1))) {
            iVar2 = iVar5;
          }
          if (iVar2 != 0) {
            return iVar2;
          }
        }
switchD_0070a1a0_caseD_f:
        uVar1 = *(uint *)((int)param_1 + param_3 + -0xf);
        if (uVar1 != *(uint *)((int)param_2 + param_3 + -0xf)) {
          uVar1 = uVar1 & 0xff;
          uVar4 = (uint)*(byte *)((int)param_2 + param_3 + -0xf);
          iVar2 = 0;
          if ((uVar1 != uVar4) && (iVar2 = -1, 0 < (int)(uVar1 - uVar4))) {
            iVar2 = iVar5;
          }
          if (iVar2 != 0) {
            return iVar2;
          }
          uVar4 = (uint)*(byte *)((int)param_1 + param_3 + -0xe);
          uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -0xe);
          iVar2 = 0;
          if ((uVar4 != uVar1) && (iVar2 = -1, 0 < (int)(uVar4 - uVar1))) {
            iVar2 = iVar5;
          }
          if (iVar2 != 0) {
            return iVar2;
          }
          uVar4 = (uint)*(byte *)((int)param_1 + param_3 + -0xd);
          uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -0xd);
          iVar2 = 0;
          if ((uVar4 != uVar1) && (iVar2 = -1, 0 < (int)(uVar4 - uVar1))) {
            iVar2 = iVar5;
          }
          if (iVar2 != 0) {
            return iVar2;
          }
          uVar4 = (uint)*(byte *)((int)param_1 + param_3 + -0xc);
          uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -0xc);
          iVar2 = 0;
          if ((uVar4 != uVar1) && (iVar2 = -1, 0 < (int)(uVar4 - uVar1))) {
            iVar2 = iVar5;
          }
          if (iVar2 != 0) {
            return iVar2;
          }
        }
switchD_0070a1a0_caseD_b:
        uVar1 = *(uint *)((int)param_1 + param_3 + -0xb);
        if (uVar1 != *(uint *)((int)param_2 + param_3 + -0xb)) {
          uVar1 = uVar1 & 0xff;
          uVar4 = (uint)*(byte *)((int)param_2 + param_3 + -0xb);
          iVar2 = 0;
          if ((uVar1 != uVar4) && (iVar2 = -1, 0 < (int)(uVar1 - uVar4))) {
            iVar2 = iVar5;
          }
          if (iVar2 != 0) {
            return iVar2;
          }
          uVar4 = (uint)*(byte *)((int)param_1 + param_3 + -10);
          uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -10);
          iVar2 = 0;
          if ((uVar4 != uVar1) && (iVar2 = -1, 0 < (int)(uVar4 - uVar1))) {
            iVar2 = iVar5;
          }
          if (iVar2 != 0) {
            return iVar2;
          }
          uVar4 = (uint)*(byte *)((int)param_1 + param_3 + -9);
          uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -9);
          iVar2 = 0;
          if ((uVar4 != uVar1) && (iVar2 = -1, 0 < (int)(uVar4 - uVar1))) {
            iVar2 = iVar5;
          }
          if (iVar2 != 0) {
            return iVar2;
          }
          uVar4 = (uint)*(byte *)((int)param_1 + param_3 + -8);
          uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -8);
          iVar2 = 0;
          if ((uVar4 != uVar1) && (iVar2 = -1, 0 < (int)(uVar4 - uVar1))) {
            iVar2 = iVar5;
          }
          if (iVar2 != 0) {
            return iVar2;
          }
        }
switchD_0070a1a0_caseD_7:
        if (*(int *)((int)param_1 + param_3 + -7) != *(int *)((int)param_2 + param_3 + -7)) {
          uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -7);
          uVar4 = (uint)*(byte *)((int)param_1 + param_3 + -7);
          iVar2 = 0;
          if ((uVar4 != uVar1) && (iVar2 = -1, 0 < (int)(uVar4 - uVar1))) {
            iVar2 = iVar5;
          }
          if (iVar2 != 0) {
            return iVar2;
          }
          uVar4 = (uint)*(byte *)((int)param_1 + param_3 + -6);
          uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -6);
          iVar2 = 0;
          if ((uVar4 != uVar1) && (iVar2 = -1, 0 < (int)(uVar4 - uVar1))) {
            iVar2 = iVar5;
          }
          if (iVar2 != 0) {
            return iVar2;
          }
          uVar4 = (uint)*(byte *)((int)param_1 + param_3 + -5);
          uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -5);
          iVar2 = 0;
          if ((uVar4 != uVar1) && (iVar2 = -1, 0 < (int)(uVar4 - uVar1))) {
            iVar2 = iVar5;
          }
          if (iVar2 != 0) {
            return iVar2;
          }
          uVar4 = (uint)*(byte *)((int)param_1 + param_3 + -4);
          uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -4);
          iVar2 = 0;
          if ((uVar4 != uVar1) && (iVar2 = -1, 0 < (int)(uVar4 - uVar1))) {
            iVar2 = iVar5;
          }
          if (iVar2 != 0) {
            return iVar2;
          }
        }
switchD_0070a1a0_caseD_3:
        uVar4 = (uint)*(byte *)((int)param_1 + param_3 + -3);
        uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -3);
        iVar2 = 0;
        if ((uVar4 != uVar1) && (iVar2 = -1, 0 < (int)(uVar4 - uVar1))) {
          iVar2 = iVar5;
        }
        if (iVar2 != 0) {
          return iVar2;
        }
        goto LAB_0070af6b;
      default:
        goto switchD_0070a1a0_default;
      }
      return 0;
    }
    iVar5 = -1;
    iVar2 = 1;
    iVar3 = 0;
    if (((uint)(byte)*param_1 != (uint)(byte)*param_2) &&
       (iVar3 = iVar5, 0 < (int)((uint)(byte)*param_1 - (uint)(byte)*param_2))) {
      iVar3 = iVar2;
    }
    if (iVar3 != 0) {
      return iVar3;
    }
    iVar3 = 0;
    if (((uint)*(byte *)((int)param_1 + 1) != (uint)*(byte *)((int)param_2 + 1)) &&
       (iVar3 = iVar5,
       0 < (int)((uint)*(byte *)((int)param_1 + 1) - (uint)*(byte *)((int)param_2 + 1)))) {
      iVar3 = iVar2;
    }
    if (iVar3 != 0) {
      return iVar3;
    }
    iVar3 = 0;
    if (((uint)*(byte *)((int)param_1 + 2) != (uint)*(byte *)((int)param_2 + 2)) &&
       (iVar3 = iVar5,
       0 < (int)((uint)*(byte *)((int)param_1 + 2) - (uint)*(byte *)((int)param_2 + 2)))) {
      iVar3 = iVar2;
    }
    if (iVar3 != 0) {
      return iVar3;
    }
    uVar4 = (uint)*(byte *)((int)param_1 + 3);
    uVar1 = (uint)*(byte *)((int)param_2 + 3);
  }
LAB_0070afeb:
  if (uVar4 == uVar1) {
    return 0;
  }
  if ((int)(uVar4 - uVar1) < 1) {
    return -1;
  }
  return 1;
switchD_0070a1a0_default:
  if (*param_1 != *param_2) {
    uVar1 = *param_1 & 0xff;
    iVar2 = 0;
    if ((uVar1 != (byte)*param_2) && (iVar2 = -1, 0 < (int)(uVar1 - (byte)*param_2))) {
      iVar2 = iVar5;
    }
    if (iVar2 != 0) {
      return iVar2;
    }
    iVar2 = 0;
    if (((uint)*(byte *)((int)param_1 + 1) != (uint)*(byte *)((int)param_2 + 1)) &&
       (iVar2 = -1, 0 < (int)((uint)*(byte *)((int)param_1 + 1) - (uint)*(byte *)((int)param_2 + 1))
       )) {
      iVar2 = iVar5;
    }
    if (iVar2 != 0) {
      return iVar2;
    }
    iVar2 = 0;
    if (((uint)*(byte *)((int)param_1 + 2) != (uint)*(byte *)((int)param_2 + 2)) &&
       (iVar2 = -1, 0 < (int)((uint)*(byte *)((int)param_1 + 2) - (uint)*(byte *)((int)param_2 + 2))
       )) {
      iVar2 = iVar5;
    }
    if (iVar2 != 0) {
      return iVar2;
    }
    iVar2 = 0;
    if (((uint)*(byte *)((int)param_1 + 3) != (uint)*(byte *)((int)param_2 + 3)) &&
       (iVar2 = -1, 0 < (int)((uint)*(byte *)((int)param_1 + 3) - (uint)*(byte *)((int)param_2 + 3))
       )) {
      iVar2 = iVar5;
    }
    if (iVar2 != 0) {
      return iVar2;
    }
  }
  if (param_1[1] != param_2[1]) {
    iVar2 = 0;
    if (((uint)(byte)param_1[1] != (uint)(byte)param_2[1]) &&
       (iVar2 = -1, 0 < (int)((uint)(byte)param_1[1] - (uint)(byte)param_2[1]))) {
      iVar2 = iVar5;
    }
    if (iVar2 != 0) {
      return iVar2;
    }
    iVar2 = 0;
    if (((uint)*(byte *)((int)param_1 + 5) != (uint)*(byte *)((int)param_2 + 5)) &&
       (iVar2 = -1, 0 < (int)((uint)*(byte *)((int)param_1 + 5) - (uint)*(byte *)((int)param_2 + 5))
       )) {
      iVar2 = iVar5;
    }
    if (iVar2 != 0) {
      return iVar2;
    }
    iVar2 = 0;
    if (((uint)*(byte *)((int)param_1 + 6) != (uint)*(byte *)((int)param_2 + 6)) &&
       (iVar2 = -1, 0 < (int)((uint)*(byte *)((int)param_1 + 6) - (uint)*(byte *)((int)param_2 + 6))
       )) {
      iVar2 = iVar5;
    }
    if (iVar2 != 0) {
      return iVar2;
    }
    iVar2 = 0;
    if (((uint)*(byte *)((int)param_1 + 7) != (uint)*(byte *)((int)param_2 + 7)) &&
       (iVar2 = -1, 0 < (int)((uint)*(byte *)((int)param_1 + 7) - (uint)*(byte *)((int)param_2 + 7))
       )) {
      iVar2 = iVar5;
    }
    if (iVar2 != 0) {
      return iVar2;
    }
  }
  if (param_1[2] != param_2[2]) {
    uVar1 = param_1[2] & 0xff;
    iVar2 = 0;
    if ((uVar1 != (byte)param_2[2]) && (iVar2 = -1, 0 < (int)(uVar1 - (byte)param_2[2]))) {
      iVar2 = iVar5;
    }
    if (iVar2 != 0) {
      return iVar2;
    }
    iVar2 = 0;
    if (((uint)*(byte *)((int)param_1 + 9) != (uint)*(byte *)((int)param_2 + 9)) &&
       (iVar2 = -1, 0 < (int)((uint)*(byte *)((int)param_1 + 9) - (uint)*(byte *)((int)param_2 + 9))
       )) {
      iVar2 = iVar5;
    }
    if (iVar2 != 0) {
      return iVar2;
    }
    iVar2 = 0;
    if (((uint)*(byte *)((int)param_1 + 10) != (uint)*(byte *)((int)param_2 + 10)) &&
       (iVar2 = -1,
       0 < (int)((uint)*(byte *)((int)param_1 + 10) - (uint)*(byte *)((int)param_2 + 10)))) {
      iVar2 = iVar5;
    }
    if (iVar2 != 0) {
      return iVar2;
    }
    iVar2 = 0;
    if (((uint)*(byte *)((int)param_1 + 0xb) != (uint)*(byte *)((int)param_2 + 0xb)) &&
       (iVar2 = -1,
       0 < (int)((uint)*(byte *)((int)param_1 + 0xb) - (uint)*(byte *)((int)param_2 + 0xb)))) {
      iVar2 = iVar5;
    }
    if (iVar2 != 0) {
      return iVar2;
    }
  }
  if (param_1[3] != param_2[3]) {
    iVar2 = 0;
    if (((uint)(byte)param_1[3] != (uint)(byte)param_2[3]) &&
       (iVar2 = -1, 0 < (int)((uint)(byte)param_1[3] - (uint)(byte)param_2[3]))) {
      iVar2 = iVar5;
    }
    if (iVar2 != 0) {
      return iVar2;
    }
    iVar2 = 0;
    if (((uint)*(byte *)((int)param_1 + 0xd) != (uint)*(byte *)((int)param_2 + 0xd)) &&
       (iVar2 = -1,
       0 < (int)((uint)*(byte *)((int)param_1 + 0xd) - (uint)*(byte *)((int)param_2 + 0xd)))) {
      iVar2 = iVar5;
    }
    if (iVar2 != 0) {
      return iVar2;
    }
    iVar2 = 0;
    if (((uint)*(byte *)((int)param_1 + 0xe) != (uint)*(byte *)((int)param_2 + 0xe)) &&
       (iVar2 = -1,
       0 < (int)((uint)*(byte *)((int)param_1 + 0xe) - (uint)*(byte *)((int)param_2 + 0xe)))) {
      iVar2 = iVar5;
    }
    if (iVar2 != 0) {
      return iVar2;
    }
    iVar2 = 0;
    if (((uint)*(byte *)((int)param_1 + 0xf) != (uint)*(byte *)((int)param_2 + 0xf)) &&
       (iVar2 = -1,
       0 < (int)((uint)*(byte *)((int)param_1 + 0xf) - (uint)*(byte *)((int)param_2 + 0xf)))) {
      iVar2 = iVar5;
    }
    if (iVar2 != 0) {
      return iVar2;
    }
  }
  if (param_1[4] != param_2[4]) {
    uVar1 = param_1[4] & 0xff;
    iVar2 = 0;
    if ((uVar1 != (byte)param_2[4]) && (iVar2 = -1, 0 < (int)(uVar1 - (byte)param_2[4]))) {
      iVar2 = iVar5;
    }
    if (iVar2 != 0) {
      return iVar2;
    }
    iVar2 = 0;
    if (((uint)*(byte *)((int)param_1 + 0x11) != (uint)*(byte *)((int)param_2 + 0x11)) &&
       (iVar2 = -1,
       0 < (int)((uint)*(byte *)((int)param_1 + 0x11) - (uint)*(byte *)((int)param_2 + 0x11)))) {
      iVar2 = iVar5;
    }
    if (iVar2 != 0) {
      return iVar2;
    }
    iVar2 = 0;
    if (((uint)*(byte *)((int)param_1 + 0x12) != (uint)*(byte *)((int)param_2 + 0x12)) &&
       (iVar2 = -1,
       0 < (int)((uint)*(byte *)((int)param_1 + 0x12) - (uint)*(byte *)((int)param_2 + 0x12)))) {
      iVar2 = iVar5;
    }
    if (iVar2 != 0) {
      return iVar2;
    }
    iVar2 = 0;
    if (((uint)*(byte *)((int)param_1 + 0x13) != (uint)*(byte *)((int)param_2 + 0x13)) &&
       (iVar2 = -1,
       0 < (int)((uint)*(byte *)((int)param_1 + 0x13) - (uint)*(byte *)((int)param_2 + 0x13)))) {
      iVar2 = iVar5;
    }
    if (iVar2 != 0) {
      return iVar2;
    }
  }
  if (param_1[5] != param_2[5]) {
    iVar2 = 0;
    if (((uint)(byte)param_1[5] != (uint)(byte)param_2[5]) &&
       (iVar2 = -1, 0 < (int)((uint)(byte)param_1[5] - (uint)(byte)param_2[5]))) {
      iVar2 = iVar5;
    }
    if (iVar2 != 0) {
      return iVar2;
    }
    iVar2 = 0;
    if (((uint)*(byte *)((int)param_1 + 0x15) != (uint)*(byte *)((int)param_2 + 0x15)) &&
       (iVar2 = -1,
       0 < (int)((uint)*(byte *)((int)param_1 + 0x15) - (uint)*(byte *)((int)param_2 + 0x15)))) {
      iVar2 = iVar5;
    }
    if (iVar2 != 0) {
      return iVar2;
    }
    iVar2 = 0;
    if (((uint)*(byte *)((int)param_1 + 0x16) != (uint)*(byte *)((int)param_2 + 0x16)) &&
       (iVar2 = -1,
       0 < (int)((uint)*(byte *)((int)param_1 + 0x16) - (uint)*(byte *)((int)param_2 + 0x16)))) {
      iVar2 = iVar5;
    }
    if (iVar2 != 0) {
      return iVar2;
    }
    iVar2 = 0;
    if (((uint)*(byte *)((int)param_1 + 0x17) != (uint)*(byte *)((int)param_2 + 0x17)) &&
       (iVar2 = -1,
       0 < (int)((uint)*(byte *)((int)param_1 + 0x17) - (uint)*(byte *)((int)param_2 + 0x17)))) {
      iVar2 = iVar5;
    }
    if (iVar2 != 0) {
      return iVar2;
    }
  }
  if (param_1[6] != param_2[6]) {
    uVar1 = param_1[6] & 0xff;
    iVar2 = 0;
    if ((uVar1 != (byte)param_2[6]) && (iVar2 = -1, 0 < (int)(uVar1 - (byte)param_2[6]))) {
      iVar2 = iVar5;
    }
    if (iVar2 != 0) {
      return iVar2;
    }
    iVar2 = 0;
    if (((uint)*(byte *)((int)param_1 + 0x19) != (uint)*(byte *)((int)param_2 + 0x19)) &&
       (iVar2 = -1,
       0 < (int)((uint)*(byte *)((int)param_1 + 0x19) - (uint)*(byte *)((int)param_2 + 0x19)))) {
      iVar2 = iVar5;
    }
    if (iVar2 != 0) {
      return iVar2;
    }
    iVar2 = 0;
    if (((uint)*(byte *)((int)param_1 + 0x1a) != (uint)*(byte *)((int)param_2 + 0x1a)) &&
       (iVar2 = -1,
       0 < (int)((uint)*(byte *)((int)param_1 + 0x1a) - (uint)*(byte *)((int)param_2 + 0x1a)))) {
      iVar2 = iVar5;
    }
    if (iVar2 != 0) {
      return iVar2;
    }
    iVar2 = 0;
    if (((uint)*(byte *)((int)param_1 + 0x1b) != (uint)*(byte *)((int)param_2 + 0x1b)) &&
       (iVar2 = -1,
       0 < (int)((uint)*(byte *)((int)param_1 + 0x1b) - (uint)*(byte *)((int)param_2 + 0x1b)))) {
      iVar2 = iVar5;
    }
    if (iVar2 != 0) {
      return iVar2;
    }
  }
  if (param_1[7] != param_2[7]) {
    iVar2 = 0;
    if (((uint)(byte)param_1[7] != (uint)(byte)param_2[7]) &&
       (iVar2 = -1, 0 < (int)((uint)(byte)param_1[7] - (uint)(byte)param_2[7]))) {
      iVar2 = iVar5;
    }
    if (iVar2 != 0) {
      return iVar2;
    }
    iVar2 = 0;
    if (((uint)*(byte *)((int)param_1 + 0x1d) != (uint)*(byte *)((int)param_2 + 0x1d)) &&
       (iVar2 = -1,
       0 < (int)((uint)*(byte *)((int)param_1 + 0x1d) - (uint)*(byte *)((int)param_2 + 0x1d)))) {
      iVar2 = iVar5;
    }
    if (iVar2 != 0) {
      return iVar2;
    }
    iVar2 = 0;
    if (((uint)*(byte *)((int)param_1 + 0x1e) != (uint)*(byte *)((int)param_2 + 0x1e)) &&
       (iVar2 = -1,
       0 < (int)((uint)*(byte *)((int)param_1 + 0x1e) - (uint)*(byte *)((int)param_2 + 0x1e)))) {
      iVar2 = iVar5;
    }
    if (iVar2 != 0) {
      return iVar2;
    }
    iVar2 = 0;
    if (((uint)*(byte *)((int)param_1 + 0x1f) != (uint)*(byte *)((int)param_2 + 0x1f)) &&
       (iVar2 = -1,
       0 < (int)((uint)*(byte *)((int)param_1 + 0x1f) - (uint)*(byte *)((int)param_2 + 0x1f)))) {
      iVar2 = iVar5;
    }
    if (iVar2 != 0) {
      return iVar2;
    }
  }
  param_3 = param_3 + -0x20;
  param_1 = param_1 + 8;
  param_2 = param_2 + 8;
  goto code_r0x00709da6;
}


/* ==== 0070b123  FUN_0070b123  size=154 ==== */

ushort * FUN_0070b123(ushort *param_1,ushort param_2)

{
  undefined1 auVar1 [16];
  ushort *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  ushort uVar5;
  ushort uVar6;
  int iVar7;
  
  if (0 < DAT_007c8b90) {
    auVar3 = pshuflw(ZEXT216(param_2),ZEXT216(param_2),0);
    do {
      if (((uint)param_1 & 0xfff) < 0xff1) {
        auVar4._0_2_ = -(ushort)(*param_1 == 0);
        auVar4._2_2_ = -(ushort)(param_1[1] == 0);
        auVar4._4_2_ = -(ushort)(param_1[2] == 0);
        auVar4._6_2_ = -(ushort)(param_1[3] == 0);
        auVar4._8_2_ = -(ushort)(param_1[4] == 0);
        auVar4._10_2_ = -(ushort)(param_1[5] == 0);
        auVar4._12_2_ = -(ushort)(param_1[6] == 0);
        auVar4._14_2_ = -(ushort)(param_1[7] == 0);
        uVar5 = auVar3._0_2_;
        uVar6 = auVar3._2_2_;
        auVar1._2_2_ = -(ushort)(param_1[1] == uVar6);
        auVar1._0_2_ = -(ushort)(*param_1 == uVar5);
        auVar1._4_2_ = -(ushort)(param_1[2] == uVar5);
        auVar1._6_2_ = -(ushort)(param_1[3] == uVar6);
        auVar1._8_2_ = -(ushort)(param_1[4] == uVar5);
        auVar1._10_2_ = -(ushort)(param_1[5] == uVar6);
        auVar1._12_2_ = -(ushort)(param_1[6] == uVar5);
        auVar1._14_2_ = -(ushort)(param_1[7] == uVar6);
        auVar4 = auVar4 | auVar1;
        uVar5 = (ushort)(SUB161(auVar4 >> 7,0) & 1) | (ushort)(SUB161(auVar4 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar4 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar4 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar4 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar4 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar4 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar4 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar4 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar4 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar4 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar4 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar4 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar4 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar4 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar4[0xf] >> 7) << 0xf;
        if (uVar5 != 0) goto LAB_0070b1ae;
        iVar7 = 0x10;
      }
      else {
        if (*param_1 == param_2) {
          return param_1;
        }
        if (*param_1 == 0) {
          return (ushort *)0x0;
        }
        iVar7 = 2;
      }
      param_1 = (ushort *)((int)param_1 + iVar7);
    } while( true );
  }
  uVar5 = *param_1;
  while ((uVar5 != 0 && (uVar5 != param_2))) {
    param_1 = param_1 + 1;
    uVar5 = *param_1;
  }
LAB_0070b154:
  puVar2 = (ushort *)0x0;
  if (*param_1 == param_2) {
    puVar2 = param_1;
  }
  return puVar2;
LAB_0070b1ae:
  iVar7 = 0;
  if (uVar5 != 0) {
    for (; (uVar5 >> iVar7 & 1) == 0; iVar7 = iVar7 + 1) {
    }
  }
  param_1 = (ushort *)((int)param_1 + iVar7);
  goto LAB_0070b154;
}


/* ==== 0070b1bd  FUN_0070b1bd  size=119 ==== */

int FUN_0070b1bd(int param_1)

{
  uint uVar1;
  
  if ((DAT_007c8b90 < 1) || ((param_1 != -0x3ffffd4c && (param_1 != -0x3ffffd4b)))) {
    return param_1;
  }
  uVar1 = MXCSR ^ 0x3f;
  if ((uVar1 & 0x81) != 0) {
    if ((uVar1 & 0x204) == 0) {
      return -0x3fffff72;
    }
    if ((uVar1 & 0x102) != 0) {
      if ((uVar1 & 0x408) == 0) {
        return -0x3fffff6f;
      }
      if ((uVar1 & 0x810) != 0) {
        if ((uVar1 & 0x1020) != 0) {
          return param_1;
        }
        return -0x3fffff71;
      }
      return -0x3fffff6d;
    }
  }
  return -0x3fffff70;
}


/* ==== 0070b234  FUN_0070b234  size=27 ==== */

void FUN_0070b234(exception *param_1)

{
  exception *in_ECX;
  
  std::exception::exception(in_ECX,param_1);
  *(undefined ***)in_ECX = std::__non_rtti_object::vftable;
  return;
}


/* ==== 0070b24f  FUN_0070b24f  size=27 ==== */

void FUN_0070b24f(exception *param_1)

{
  exception *in_ECX;
  
  std::exception::exception(in_ECX,param_1);
  *(undefined ***)in_ECX = std::bad_cast::vftable;
  return;
}


/* ==== 0070b26a  FUN_0070b26a  size=27 ==== */

void FUN_0070b26a(exception *param_1)

{
  exception *in_ECX;
  
  std::exception::exception(in_ECX,param_1);
  *(undefined ***)in_ECX = std::bad_typeid::vftable;
  return;
}


/* ==== 0070b285  FUN_0070b285  size=233 ==== */

undefined4 *
FUN_0070b285(void *param_1,int param_2,TypeDescriptor *param_3,int param_4,TypeDescriptor *param_5)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  bool bVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 *local_10;
  uint local_c;
  uint local_8;
  
  puVar7 = (undefined4 *)0x0;
  local_8 = 0xffffffff;
  local_10 = (undefined4 *)0x0;
  uVar8 = 0;
  local_c = 0;
  iVar2 = *(int *)(*(int *)(param_2 + 0x10) + 0xc);
  uVar3 = *(uint *)(*(int *)(param_2 + 0x10) + 8);
  if (uVar3 != 0) {
    do {
      puVar4 = *(undefined4 **)(iVar2 + uVar8 * 4);
      if ((local_c < uVar8 - local_8) &&
         (bVar5 = TypeidsEqual((TypeDescriptor *)*puVar4,param_5), bVar5)) {
        puVar7 = puVar4;
        if (local_10 != (undefined4 *)0x0) {
          if ((*(byte *)(puVar4 + 5) & 3) != 0) {
            return (undefined4 *)0x0;
          }
          bVar1 = *(byte *)(local_10 + 5);
          goto joined_r0x0070b32c;
        }
        local_c = puVar4[1];
        local_8 = uVar8;
      }
      bVar5 = TypeidsEqual((TypeDescriptor *)*puVar4,param_3);
      if (((bVar5) && (iVar6 = PMDtoOffset(param_1,(PMD *)(puVar4 + 2)), iVar6 == param_4)) &&
         (local_10 = puVar4, puVar7 != (undefined4 *)0x0)) {
        if (local_c < uVar8 - local_8) {
          if ((*(byte *)(puVar7 + 5) & 3) != 0) {
            return (undefined4 *)0x0;
          }
        }
        else {
          if ((*(byte *)(puVar7 + 5) & 0x40) != 0) {
            bVar1 = *(byte *)(*(int *)(*(int *)(puVar7[6] + 0xc) + (uVar8 - local_8) * 4) + 0x14);
            goto joined_r0x0070b32c;
          }
          if (local_8 != 0) {
            return puVar7;
          }
        }
        bVar1 = *(byte *)(puVar4 + 5);
joined_r0x0070b32c:
        if ((bVar1 & 1) != 0) {
          return (undefined4 *)0x0;
        }
        return puVar7;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar3);
  }
  return (undefined4 *)0x0;
}


/* ==== 0070b36e  FUN_0070b36e  size=233 ==== */

int * FUN_0070b36e(int param_1,int param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  byte *pbVar9;
  bool bVar10;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x10) + 0xc);
  uVar3 = *(uint *)(*(int *)(param_1 + 0x10) + 8);
  uVar6 = 0;
  if (uVar3 != 0) {
    do {
      piVar4 = *(int **)(iVar2 + uVar6 * 4);
      uVar6 = uVar6 + 1;
      if (*piVar4 == param_3) {
        while( true ) {
          if (uVar3 <= uVar6) {
            return (int *)0x0;
          }
          piVar5 = *(int **)(iVar2 + uVar6 * 4);
          if ((*(byte *)(piVar5 + 5) & 4) != 0) break;
          if (*piVar5 == param_2) {
            return piVar4;
          }
          uVar6 = uVar6 + 1;
        }
        return (int *)0x0;
      }
    } while (uVar6 < uVar3);
    uVar6 = 0;
    do {
      piVar4 = *(int **)(iVar2 + uVar6 * 4);
      pbVar7 = (byte *)(*piVar4 + 8);
      pbVar9 = (byte *)(param_3 + 8);
      do {
        bVar1 = *pbVar7;
        bVar10 = bVar1 < *pbVar9;
        if (bVar1 != *pbVar9) {
LAB_0070b3d0:
          uVar8 = -(uint)bVar10 | 1;
          goto LAB_0070b3d5;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar7[1];
        bVar10 = bVar1 < pbVar9[1];
        if (bVar1 != pbVar9[1]) goto LAB_0070b3d0;
        pbVar7 = pbVar7 + 2;
        pbVar9 = pbVar9 + 2;
      } while (bVar1 != 0);
      uVar8 = 0;
LAB_0070b3d5:
      uVar6 = uVar6 + 1;
      if (uVar8 == 0) {
        do {
          if (uVar3 <= uVar6) {
            return (int *)0x0;
          }
          piVar5 = *(int **)(iVar2 + uVar6 * 4);
          if ((*(byte *)(piVar5 + 5) & 4) != 0) {
            return (int *)0x0;
          }
          pbVar7 = (byte *)(param_2 + 8);
          pbVar9 = (byte *)(*piVar5 + 8);
          do {
            bVar1 = *pbVar9;
            bVar10 = bVar1 < *pbVar7;
            if (bVar1 != *pbVar7) {
LAB_0070b423:
              uVar8 = -(uint)bVar10 | 1;
              goto LAB_0070b428;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar9[1];
            bVar10 = bVar1 < pbVar7[1];
            if (bVar1 != pbVar7[1]) goto LAB_0070b423;
            pbVar9 = pbVar9 + 2;
            pbVar7 = pbVar7 + 2;
          } while (bVar1 != 0);
          uVar8 = 0;
LAB_0070b428:
          if (uVar8 == 0) {
            return piVar4;
          }
          uVar6 = uVar6 + 1;
        } while( true );
      }
    } while (uVar6 < uVar3);
  }
  return (int *)0x0;
}


/* ==== 0070b457  FUN_0070b457  size=351 ==== */

undefined4 *
FUN_0070b457(void *param_1,int param_2,TypeDescriptor *param_3,int param_4,TypeDescriptor *param_5)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  byte bVar8;
  undefined4 *puVar9;
  bool bVar10;
  int local_20;
  undefined4 *local_1c;
  uint local_18;
  uint local_14;
  undefined4 *local_10;
  uint local_c;
  undefined4 *local_8;
  
  puVar9 = (undefined4 *)0x0;
  local_c = 0xffffffff;
  local_8 = (undefined4 *)0x0;
  local_1c = (undefined4 *)0x0;
  uVar1 = *(uint *)(*(int *)(param_2 + 0x10) + 8);
  iVar2 = *(int *)(*(int *)(param_2 + 0x10) + 0xc);
  local_10 = (undefined4 *)0x0;
  local_18 = 0;
  local_20 = -1;
  local_14 = 0;
  bVar10 = true;
  if (uVar1 != 0) {
    do {
      puVar3 = *(undefined4 **)(iVar2 + local_14 * 4);
      if ((local_18 < local_14 - local_c) &&
         (bVar4 = TypeidsEqual((TypeDescriptor *)*puVar3,param_5), bVar4)) {
        if ((*(byte *)(puVar3 + 5) & 3) == 0) {
          local_1c = puVar3;
        }
        local_c = local_14;
        local_18 = puVar3[1];
        local_10 = puVar3;
      }
      bVar5 = TypeidsEqual((TypeDescriptor *)*puVar3,param_3);
      iVar7 = local_20;
      bVar4 = bVar10;
      if ((bVar5) && (iVar6 = PMDtoOffset(param_1,(PMD *)(puVar3 + 2)), iVar6 == param_4)) {
        if (local_18 < local_14 - local_c) {
          if ((*(byte *)(puVar3 + 5) & 5) == 0) {
            local_8 = puVar3;
          }
        }
        else if (bVar10) {
          if ((*(byte *)(local_10 + 5) & 0x40) == 0) {
            if ((local_c == 0) && ((*(byte *)(puVar3 + 5) & 1) != 0)) {
              bVar10 = false;
            }
            bVar8 = 1;
            bVar4 = bVar10;
          }
          else {
            iVar6 = *(int *)(*(int *)(local_10[6] + 0xc) + (local_14 - local_c) * 4);
            bVar8 = ~(byte)(*(uint *)(iVar6 + 0x14) >> 2) & 1;
            bVar4 = false;
            if ((*(byte *)(iVar6 + 0x14) & 1) == 0) {
              bVar4 = bVar10;
            }
          }
          if ((((bVar4) && (bVar8 != 0)) &&
              (iVar7 = PMDtoOffset(param_1,(PMD *)(local_10 + 2)),
              bVar10 = puVar9 != (undefined4 *)0x0, puVar9 = local_10, bVar10)) &&
             (local_20 != iVar7)) {
            return (undefined4 *)0x0;
          }
        }
      }
      local_20 = iVar7;
      local_14 = local_14 + 1;
      bVar10 = bVar4;
    } while (local_14 < uVar1);
    if ((bVar4) && (puVar9 != (undefined4 *)0x0)) {
      return puVar9;
    }
    if (local_8 != (undefined4 *)0x0) {
      return local_1c;
    }
  }
  return (undefined4 *)0x0;
}


/* ==== 0070b5b6  PMDtoOffset  size=36 ==== */

/* Library Function - Single Match
    int __cdecl PMDtoOffset(void *,struct PMD const &)
   
   Libraries: Visual Studio 2012 Release, Visual Studio 2015 Release, Visual Studio 2017 Release,
   Visual Studio 2019 Release */

int __cdecl PMDtoOffset(void *param_1,PMD *param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (-1 < param_2->pdisp) {
    iVar1 = param_2->pdisp + *(int *)(*(int *)(param_2->pdisp + (int)param_1) + param_2->vdisp);
  }
  return param_2->mdisp + iVar1;
}


/* ==== 0070b5da  TypeidsEqual  size=70 ==== */

/* Library Function - Single Match
    bool __cdecl TypeidsEqual(struct TypeDescriptor const * const,struct TypeDescriptor const *
   const)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

bool __cdecl TypeidsEqual(TypeDescriptor *param_1,TypeDescriptor *param_2)

{
  byte bVar1;
  byte bVar2;
  TypeDescriptor *pTVar3;
  uint uVar4;
  TypeDescriptor *pTVar5;
  bool bVar6;
  
  if (param_1 != param_2) {
    pTVar5 = param_2 + 1;
    pTVar3 = param_1 + 1;
    do {
      bVar1 = *(byte *)&pTVar3->pVFTable;
      bVar6 = bVar1 < *(byte *)&pTVar5->pVFTable;
      if (bVar1 != *(byte *)&pTVar5->pVFTable) {
LAB_0070b610:
        uVar4 = -(uint)bVar6 | 1;
        goto LAB_0070b615;
      }
      if (bVar1 == 0) break;
      bVar1 = *(byte *)((int)&pTVar3->pVFTable + 1);
      bVar2 = *(byte *)((int)&pTVar5->pVFTable + 1);
      bVar6 = bVar1 < bVar2;
      if (bVar1 != bVar2) goto LAB_0070b610;
      pTVar3 = (TypeDescriptor *)((int)&pTVar3->pVFTable + 2);
      pTVar5 = (TypeDescriptor *)((int)&pTVar5->pVFTable + 2);
    } while (bVar1 != 0);
    uVar4 = 0;
LAB_0070b615:
    if (uVar4 != 0) {
      return false;
    }
  }
  return true;
}


/* ==== 0070b620  construct_from_string_literal  size=28 ==== */

/* Library Function - Multiple Matches With Same Base Name
    public: static class std::__non_rtti_object __cdecl
   std::__non_rtti_object::__construct_from_string_literal(char const * const)
    public: static class std::bad_cast __cdecl std::bad_cast::__construct_from_string_literal(char
   const * const)
    public: static class std::bad_typeid __cdecl
   std::bad_typeid::__construct_from_string_literal(char const * const)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void construct_from_string_literal(undefined4 *param_1,undefined4 param_2)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[1] = param_2;
  *param_1 = std::__non_rtti_object::vftable;
  return;
}


/* ==== 0070b63c  construct_from_string_literal  size=28 ==== */

/* Library Function - Multiple Matches With Same Base Name
    public: static class std::__non_rtti_object __cdecl
   std::__non_rtti_object::__construct_from_string_literal(char const * const)
    public: static class std::bad_cast __cdecl std::bad_cast::__construct_from_string_literal(char
   const * const)
    public: static class std::bad_typeid __cdecl
   std::bad_typeid::__construct_from_string_literal(char const * const)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void construct_from_string_literal(undefined4 *param_1,undefined4 param_2)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[1] = param_2;
  *param_1 = std::bad_cast::vftable;
  return;
}


/* ==== 0070b658  FUN_0070b658  size=197 ==== */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

int FUN_0070b658(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  undefined1 local_28 [20];
  void *local_14;
  undefined4 uStack_c;
  undefined4 local_8;
  
  uStack_c = 0x70b664;
  if (param_1 != (int *)0x0) {
    local_8 = 0;
    iVar2 = *(int *)(*param_1 + -4);
    pvVar3 = (void *)((int)param_1 +
                     (-(-(uint)(*(int *)(iVar2 + 8) != 0) &
                       *(uint *)((int)param_1 - *(int *)(iVar2 + 8))) - *(int *)(iVar2 + 4)));
    uVar1 = *(uint *)(*(int *)(iVar2 + 0x10) + 4);
    if ((uVar1 & 1) == 0) {
      iVar2 = FUN_0070b36e(iVar2,param_3);
    }
    else if ((uVar1 & 2) == 0) {
      iVar2 = FUN_0070b285();
    }
    else {
      iVar2 = FUN_0070b457(pvVar3,iVar2,param_3,(int)param_1 + (-(int)pvVar3 - param_2),param_4);
    }
    if (iVar2 != 0) {
      iVar2 = PMDtoOffset(pvVar3,(PMD *)(iVar2 + 8));
      ExceptionList = local_14;
      return iVar2 + (int)pvVar3;
    }
    if (param_5 != 0) {
      construct_from_string_literal(local_28,"Bad dynamic_cast!");
                    /* WARNING: Subroutine does not return */
      FUN_006e735d(local_28,&DAT_007b566c);
    }
  }
  ExceptionList = local_14;
  return 0;
}


/* ==== 0070b750  FUN_0070b750  size=605 ==== */

void FUN_0070b750(void)

{
  ushort uVar1;
  ushort in_FPUControlWord;
  ushort in_XMM0_Wd;
  
  if ((MXCSR & 0x7f80) == 0x1f80 && (in_FPUControlWord & 0x7f) == 0x7f) {
    uVar1 = (in_XMM0_Wd & 0x7fff) + 0xc7e0;
    if (uVar1 < 0x8a9) {
      return;
    }
    if ((short)uVar1 < 0x8a9) {
      return;
    }
  }
  FUN_0070ba0f();
  return;
}


/* ==== 0070ba0f  FUN_0070ba0f  size=151 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0070ba0f(int param_1)

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
  fptan(extraout_ST0);
  fVar2 = (float10)1;
  if ((in_FPUStatusWord & 0x400) != 0) {
    do {
      fVar2 = fVar2 - ROUND(fVar2 / _DAT_0073e5ba) * _DAT_0073e5ba;
    } while ((in_FPUStatusWord & 0x400) != 0);
    fptan(fVar2);
  }
  if (DAT_007c9330 != 0) {
    return (uint)in_FPUStatusWord;
  }
  uVar1 = __math_exit();
  return uVar1;
}


/* ==== 0070bab0  FUN_0070bab0  size=24 ==== */

void FUN_0070bab0(void)

{
  float10 in_ST0;
  
  FUN_0070bace((double)in_ST0);
  return;
}


/* ==== 0070bace  FUN_0070bace  size=564 ==== */

float10 FUN_0070bace(void)

{
  int iVar1;
  ushort uVar2;
  float10 fVar3;
  double in_XMM0_Qa;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  
  uVar2 = ((ushort)((ulonglong)in_XMM0_Qa >> 0x30) & 0x7fff) + 0xc7e0;
  if (uVar2 < 0x8a9) {
    dVar11 = (in_XMM0_Qa * 10.185916357881302 + 1.080863910568919e+17) - 1.080863910568919e+17;
    dVar12 = (in_XMM0_Qa * 10.185916357881302 + 6755399441055744.0) - 6755399441055744.0;
    dVar4 = in_XMM0_Qa - dVar11 * 0.0981747704247482;
    dVar8 = in_XMM0_Qa - dVar12 * 0.09817477042452083;
    dVar5 = dVar4 - dVar11 * -6.716466596861444e-14;
    dVar9 = dVar8 - dVar12 * 1.6020900947399724e-13;
    iVar1 = ((int)ROUND(in_XMM0_Qa * 10.185916357881302) + 0x72900U & 0x1f) * 0xb0;
    dVar16 = (double)((ulonglong)(dVar11 * 6.716466596857464e-14 + dVar4) & 0xfffffffffffc0000);
    dVar17 = 1.0 / dVar16;
    dVar6 = dVar9 * dVar9;
    dVar10 = dVar9 * dVar9;
    dVar7 = dVar6 * dVar6;
    dVar14 = dVar9 * *(double *)(&DAT_00795f40 + iVar1) + dVar9 * *(double *)(&DAT_00795f48 + iVar1)
    ;
    dVar13 = (double)(*(ulonglong *)(&DAT_00795f58 + iVar1) & (ulonglong)dVar17) -
             *(double *)(&DAT_00795f30 + iVar1);
    dVar15 = dVar14 - dVar13;
    return (float10)(((dVar7 * dVar7 *
                       (*(double *)(&DAT_00795ec0 + iVar1) * dVar9 +
                        *(double *)(&DAT_00795eb0 + iVar1) +
                        (*(double *)(&DAT_00795ee0 + iVar1) * dVar9 +
                        *(double *)(&DAT_00795ed0 + iVar1)) * dVar6 +
                        *(double *)(&DAT_00795ef0 + iVar1) * dVar7 +
                       (*(double *)(&DAT_00795f10 + iVar1) * dVar9 +
                        *(double *)(&DAT_00795f00 + iVar1) +
                       *(double *)(&DAT_00795f20 + iVar1) * dVar6) * dVar9 * dVar7) +
                       *(double *)(&UNK_00795ec8 + iVar1) * dVar9 +
                       *(double *)(&DAT_00795eb8 + iVar1) +
                       (*(double *)(&UNK_00795ee8 + iVar1) * dVar9 +
                       *(double *)(&DAT_00795ed8 + iVar1)) * dVar10 +
                       *(double *)(&UNK_00795ef8 + iVar1) * dVar10 * dVar10 +
                       (*(double *)(&UNK_00795f18 + iVar1) * dVar9 +
                        *(double *)(&DAT_00795f08 + iVar1) +
                       *(double *)(&UNK_00795f28 + iVar1) * dVar10) * dVar9 * dVar10 * dVar10 +
                       (*(double *)(&DAT_00795f40 + iVar1) + *(double *)(&DAT_00795f48 + iVar1)) *
                       (((dVar8 - dVar9) - dVar12 * 1.6020900947399724e-13) -
                       dVar12 * 6.601874416867142e-25) + *(double *)(&DAT_00795f38 + iVar1) +
                       dVar9 * *(double *)(&DAT_00795f48 + iVar1) +
                       (dVar9 * *(double *)(&DAT_00795f40 + iVar1) - dVar14) +
                      (dVar14 - (dVar13 + dVar15))) -
                     ((1.0 - dVar16 * (double)(*(ulonglong *)(&DAT_00795f58 + iVar1) &
                                              (ulonglong)dVar17)) -
                     ((((dVar4 - dVar5) - dVar11 * -6.716466596861444e-14) -
                      dVar11 * 3.9801982271943437e-26) + (dVar5 - dVar16)) * dVar17) *
                     dVar17 * *(double *)(&DAT_00795f50 + iVar1)) + dVar15);
  }
  if ((short)uVar2 < 0x8a9) {
    return (float10)((in_XMM0_Qa * 3.602879701896397e+16 + in_XMM0_Qa) * 2.7755575615628914e-17);
  }
  fVar3 = (float10)FUN_0070ba0f();
  return fVar3;
}


/* ==== 0070bd10  Unwind@0070bd10  size=8 ==== */

void Unwind_0070bd10(void)

{
  FUN_00401ea0();
  return;
}


/* ==== 0070bd60  Unwind@0070bd60  size=8 ==== */

void Unwind_0070bd60(void)

{
  FUN_00402940();
  return;
}


/* ==== 0070bd90  Unwind@0070bd90  size=8 ==== */

void Unwind_0070bd90(void)

{
  FUN_00402920();
  return;
}


/* ==== 0070bde0  Unwind@0070bde0  size=8 ==== */

void Unwind_0070bde0(void)

{
  FUN_00402900();
  return;
}


/* ==== 0070be10  Unwind@0070be10  size=8 ==== */

void Unwind_0070be10(void)

{
  FUN_004031b0();
  return;
}


/* ==== 0070be40  Unwind@0070be40  size=8 ==== */

void Unwind_0070be40(void)

{
  FUN_00403150();
  return;
}


/* ==== 0070be70  Unwind@0070be70  size=8 ==== */

void Unwind_0070be70(void)

{
  FUN_00403150();
  return;
}


/* ==== 0070bea0  Unwind@0070bea0  size=8 ==== */

void Unwind_0070bea0(void)

{
  FUN_00403150();
  return;
}


/* ==== 0070bed0  Unwind@0070bed0  size=8 ==== */

void Unwind_0070bed0(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x30));
  return;
}


/* ==== 0070bf00  Unwind@0070bf00  size=8 ==== */

void Unwind_0070bf00(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x48));
  return;
}


/* ==== 0070bf08  Unwind@0070bf08  size=8 ==== */

void Unwind_0070bf08(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x50));
  return;
}


/* ==== 0070bf10  Unwind@0070bf10  size=8 ==== */

void Unwind_0070bf10(void)

{
  FUN_004052a0();
  return;
}


/* ==== 0070bf18  Unwind@0070bf18  size=8 ==== */

void Unwind_0070bf18(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -100));
  return;
}


/* ==== 0070bf20  Unwind@0070bf20  size=8 ==== */

void Unwind_0070bf20(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x6c));
  return;
}


/* ==== 0070bf50  Unwind@0070bf50  size=11 ==== */

void Unwind_0070bf50(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x1f8));
  return;
}


/* ==== 0070bf5b  Unwind@0070bf5b  size=11 ==== */

void Unwind_0070bf5b(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x27c));
  return;
}


/* ==== 0070bf66  Unwind@0070bf66  size=8 ==== */

void Unwind_0070bf66(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x40));
  return;
}


/* ==== 0070bf6e  Unwind@0070bf6e  size=8 ==== */

void Unwind_0070bf6e(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x28));
  return;
}


/* ==== 0070bf76  Unwind@0070bf76  size=11 ==== */

void Unwind_0070bf76(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x130));
  return;
}


/* ==== 0070bf81  Unwind@0070bf81  size=11 ==== */

void Unwind_0070bf81(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x138));
  return;
}


/* ==== 0070bf8c  Unwind@0070bf8c  size=11 ==== */

void Unwind_0070bf8c(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x144));
  return;
}


/* ==== 0070bf97  Unwind@0070bf97  size=11 ==== */

void Unwind_0070bf97(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x14c));
  return;
}


/* ==== 0070bfa2  Unwind@0070bfa2  size=11 ==== */

void Unwind_0070bfa2(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x158));
  return;
}


/* ==== 0070bfad  Unwind@0070bfad  size=11 ==== */

void Unwind_0070bfad(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x160));
  return;
}


/* ==== 0070bfb8  Unwind@0070bfb8  size=11 ==== */

void Unwind_0070bfb8(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x16c));
  return;
}


/* ==== 0070bfc3  Unwind@0070bfc3  size=11 ==== */

void Unwind_0070bfc3(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x174));
  return;
}


/* ==== 0070bfce  Unwind@0070bfce  size=11 ==== */

void Unwind_0070bfce(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x180));
  return;
}


/* ==== 0070bfd9  Unwind@0070bfd9  size=11 ==== */

void Unwind_0070bfd9(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x188));
  return;
}


/* ==== 0070bfe4  Unwind@0070bfe4  size=11 ==== */

void Unwind_0070bfe4(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x194));
  return;
}


/* ==== 0070bfef  Unwind@0070bfef  size=11 ==== */

void Unwind_0070bfef(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x19c));
  return;
}


/* ==== 0070bffa  Unwind@0070bffa  size=11 ==== */

void Unwind_0070bffa(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x1a8));
  return;
}


/* ==== 0070c005  Unwind@0070c005  size=11 ==== */

void Unwind_0070c005(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x1b0));
  return;
}


/* ==== 0070c010  Unwind@0070c010  size=11 ==== */

void Unwind_0070c010(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x1bc));
  return;
}


/* ==== 0070c01b  Unwind@0070c01b  size=11 ==== */

void Unwind_0070c01b(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x1c4));
  return;
}


/* ==== 0070c026  Unwind@0070c026  size=11 ==== */

void Unwind_0070c026(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x1d0));
  return;
}


/* ==== 0070c031  Unwind@0070c031  size=11 ==== */

void Unwind_0070c031(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x1d8));
  return;
}


/* ==== 0070c03c  Unwind@0070c03c  size=11 ==== */

void Unwind_0070c03c(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x1e4));
  return;
}


/* ==== 0070c047  Unwind@0070c047  size=11 ==== */

void Unwind_0070c047(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x1ec));
  return;
}


/* ==== 0070c052  Unwind@0070c052  size=11 ==== */

void Unwind_0070c052(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x23c));
  return;
}


/* ==== 0070c05d  Unwind@0070c05d  size=11 ==== */

void Unwind_0070c05d(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x200));
  return;
}


/* ==== 0070c068  Unwind@0070c068  size=11 ==== */

void Unwind_0070c068(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x20c));
  return;
}


/* ==== 0070c073  Unwind@0070c073  size=11 ==== */

void Unwind_0070c073(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x214));
  return;
}


/* ==== 0070c07e  Unwind@0070c07e  size=11 ==== */

void Unwind_0070c07e(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x220));
  return;
}


/* ==== 0070c089  Unwind@0070c089  size=11 ==== */

void Unwind_0070c089(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x228));
  return;
}


/* ==== 0070c094  Unwind@0070c094  size=11 ==== */

void Unwind_0070c094(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x234));
  return;
}


/* ==== 0070c09f  Unwind@0070c09f  size=11 ==== */

void Unwind_0070c09f(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x280));
  return;
}


/* ==== 0070c0aa  Unwind@0070c0aa  size=11 ==== */

void Unwind_0070c0aa(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x248));
  return;
}


/* ==== 0070c0b5  Unwind@0070c0b5  size=11 ==== */

void Unwind_0070c0b5(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x250));
  return;
}


/* ==== 0070c0c0  Unwind@0070c0c0  size=11 ==== */

void Unwind_0070c0c0(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x25c));
  return;
}


/* ==== 0070c0cb  Unwind@0070c0cb  size=11 ==== */

void Unwind_0070c0cb(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x264));
  return;
}


/* ==== 0070c110  Unwind@0070c110  size=8 ==== */

void Unwind_0070c110(void)

{
  FUN_004055b0();
  return;
}


/* ==== 0070c140  Unwind@0070c140  size=8 ==== */

void Unwind_0070c140(void)

{
  FUN_004065d0();
  return;
}


/* ==== 0070c190  Unwind@0070c190  size=8 ==== */

void Unwind_0070c190(void)

{
  FUN_004055b0();
  return;
}


/* ==== 0070c1c0  Unwind@0070c1c0  size=8 ==== */

void Unwind_0070c1c0(void)

{
  FUN_00406da0();
  return;
}


/* ==== 0070c1f0  Unwind@0070c1f0  size=8 ==== */

void Unwind_0070c1f0(void)

{
  FUN_00407b00();
  return;
}


/* ==== 0070c220  Unwind@0070c220  size=8 ==== */

void Unwind_0070c220(void)

{
  FUN_00407ad0();
  return;
}


/* ==== 0070c250  Unwind@0070c250  size=8 ==== */

void Unwind_0070c250(void)

{
  FUN_00406dc0();
  return;
}


/* ==== 0070c2a0  Unwind@0070c2a0  size=8 ==== */

void Unwind_0070c2a0(void)

{
  FUN_004089d0();
  return;
}


/* ==== 0070c2d0  Unwind@0070c2d0  size=11 ==== */

void Unwind_0070c2d0(void)

{
  FUN_00405330();
  return;
}


/* ==== 0070c2db  Unwind@0070c2db  size=11 ==== */

void Unwind_0070c2db(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(*(int *)(unaff_EBP + -0x10) + 100));
  return;
}


/* ==== 0070c2e6  Unwind@0070c2e6  size=14 ==== */

void Unwind_0070c2e6(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(*(int *)(unaff_EBP + -0x10) + 0xa4));
  return;
}


/* ==== 0070c2f4  Unwind@0070c2f4  size=14 ==== */

void Unwind_0070c2f4(void)

{
  FUN_00401ac0();
  return;
}


/* ==== 0070c302  Unwind@0070c302  size=14 ==== */

void Unwind_0070c302(void)

{
  FUN_00401ac0();
  return;
}


/* ==== 0070c340  Unwind@0070c340  size=8 ==== */

void Unwind_0070c340(void)

{
  FUN_00409120();
  return;
}


/* ==== 0070c370  Unwind@0070c370  size=11 ==== */

void Unwind_0070c370(void)

{
  FUN_00403980();
  return;
}


/* ==== 0070c37b  Unwind@0070c37b  size=14 ==== */

void Unwind_0070c37b(void)

{
  FUN_00403980();
  return;
}


/* ==== 0070c3b0  Unwind@0070c3b0  size=8 ==== */

void Unwind_0070c3b0(void)

{
  FUN_00409ac0();
  return;
}


/* ==== 0070c3e0  Unwind@0070c3e0  size=8 ==== */

void Unwind_0070c3e0(void)

{
  FUN_00409a30();
  return;
}


/* ==== 0070c410  Unwind@0070c410  size=8 ==== */

void Unwind_0070c410(void)

{
  FUN_0040a0e0();
  return;
}


/* ==== 0070c440  Unwind@0070c440  size=11 ==== */

void Unwind_0070c440(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(*(int *)(unaff_EBP + -0x10) + 8));
  return;
}


/* ==== 0070c44b  Unwind@0070c44b  size=11 ==== */

void Unwind_0070c44b(void)

{
  FUN_00405350();
  return;
}


/* ==== 0070c480  Unwind@0070c480  size=8 ==== */

void Unwind_0070c480(void)

{
  FUN_0040a2d0();
  return;
}


/* ==== 0070c4b0  Unwind@0070c4b0  size=8 ==== */

void Unwind_0070c4b0(void)

{
  FUN_0040a6e0();
  return;
}


/* ==== 0070c4e0  Unwind@0070c4e0  size=11 ==== */

void Unwind_0070c4e0(void)

{
  FUN_00403980();
  return;
}


/* ==== 0070c4eb  Unwind@0070c4eb  size=14 ==== */

void Unwind_0070c4eb(void)

{
  FUN_00403980();
  return;
}


/* ==== 0070c4f9  Unwind@0070c4f9  size=14 ==== */

void Unwind_0070c4f9(void)

{
  FUN_00403980();
  return;
}


/* ==== 0070c530  Unwind@0070c530  size=11 ==== */

void Unwind_0070c530(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(*(int *)(unaff_EBP + -0x10) + 8));
  return;
}


/* ==== 0070c53b  Unwind@0070c53b  size=11 ==== */

void Unwind_0070c53b(void)

{
  FUN_00405350();
  return;
}


/* ==== 0070c546  Unwind@0070c546  size=11 ==== */

void Unwind_0070c546(void)

{
  FUN_00405350();
  return;
}


/* ==== 0070c580  Unwind@0070c580  size=11 ==== */

void Unwind_0070c580(void)

{
  FUN_00405330();
  return;
}


/* ==== 0070c58b  Unwind@0070c58b  size=11 ==== */

void Unwind_0070c58b(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(*(int *)(unaff_EBP + -0x10) + 100));
  return;
}


/* ==== 0070c596  Unwind@0070c596  size=14 ==== */

void Unwind_0070c596(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(*(int *)(unaff_EBP + -0x10) + 0xa4));
  return;
}


/* ==== 0070c5a4  Unwind@0070c5a4  size=14 ==== */

void Unwind_0070c5a4(void)

{
  FUN_00401ac0();
  return;
}


/* ==== 0070c5b2  Unwind@0070c5b2  size=14 ==== */

void Unwind_0070c5b2(void)

{
  FUN_00401ac0();
  return;
}


/* ==== 0070c5c0  Unwind@0070c5c0  size=14 ==== */

void Unwind_0070c5c0(void)

{
  FUN_00401ac0();
  return;
}


/* ==== 0070c5f0  Unwind@0070c5f0  size=11 ==== */

void Unwind_0070c5f0(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(*(int *)(unaff_EBP + -0x10) + 0x10));
  return;
}


/* ==== 0070c5fb  Unwind@0070c5fb  size=11 ==== */

void Unwind_0070c5fb(void)

{
  FUN_0040d7d0();
  return;
}


/* ==== 0070c606  Unwind@0070c606  size=11 ==== */

void Unwind_0070c606(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(*(int *)(unaff_EBP + -0x10) + 0x74));
  return;
}


/* ==== 0070c640  Unwind@0070c640  size=8 ==== */

void Unwind_0070c640(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x50));
  return;
}


/* ==== 0070c670  Unwind@0070c670  size=11 ==== */

void Unwind_0070c670(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0xb8));
  return;
}


/* ==== 0070c67b  Unwind@0070c67b  size=11 ==== */

void Unwind_0070c67b(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x35c));
  return;
}


/* ==== 0070c686  Unwind@0070c686  size=11 ==== */

void Unwind_0070c686(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x368));
  return;
}


/* ==== 0070c691  Unwind@0070c691  size=11 ==== */

void Unwind_0070c691(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x374));
  return;
}


/* ==== 0070c69c  Unwind@0070c69c  size=11 ==== */

void Unwind_0070c69c(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x37c));
  return;
}


/* ==== 0070c6a7  Unwind@0070c6a7  size=11 ==== */

void Unwind_0070c6a7(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -900));
  return;
}


/* ==== 0070c6b2  Unwind@0070c6b2  size=11 ==== */

void Unwind_0070c6b2(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x38c));
  return;
}


/* ==== 0070c6bd  Unwind@0070c6bd  size=11 ==== */

void Unwind_0070c6bd(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x394));
  return;
}


/* ==== 0070c6c8  Unwind@0070c6c8  size=11 ==== */

void Unwind_0070c6c8(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x300));
  return;
}


/* ==== 0070c6d3  Unwind@0070c6d3  size=11 ==== */

void Unwind_0070c6d3(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x308));
  return;
}


/* ==== 0070c6de  Unwind@0070c6de  size=11 ==== */

void Unwind_0070c6de(void)

{
  FUN_0040c940();
  return;
}


/* ==== 0070c6e9  Unwind@0070c6e9  size=11 ==== */

void Unwind_0070c6e9(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x160));
  return;
}


/* ==== 0070c6f4  Unwind@0070c6f4  size=11 ==== */

void Unwind_0070c6f4(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x148));
  return;
}


/* ==== 0070c6ff  Unwind@0070c6ff  size=11 ==== */

void Unwind_0070c6ff(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x130));
  return;
}


/* ==== 0070c70a  Unwind@0070c70a  size=11 ==== */

void Unwind_0070c70a(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x118));
  return;
}


/* ==== 0070c715  Unwind@0070c715  size=11 ==== */

void Unwind_0070c715(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0xe8));
  return;
}


/* ==== 0070c720  Unwind@0070c720  size=11 ==== */

void Unwind_0070c720(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x310));
  return;
}


/* ==== 0070c72b  Unwind@0070c72b  size=11 ==== */

void Unwind_0070c72b(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x318));
  return;
}


/* ==== 0070c736  Unwind@0070c736  size=11 ==== */

void Unwind_0070c736(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x220));
  return;
}


/* ==== 0070c741  Unwind@0070c741  size=11 ==== */

void Unwind_0070c741(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x208));
  return;
}


/* ==== 0070c74c  Unwind@0070c74c  size=11 ==== */

void Unwind_0070c74c(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x1f0));
  return;
}


/* ==== 0070c757  Unwind@0070c757  size=11 ==== */

void Unwind_0070c757(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x1d8));
  return;
}


/* ==== 0070c762  Unwind@0070c762  size=11 ==== */

void Unwind_0070c762(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x1c0));
  return;
}


/* ==== 0070c76d  Unwind@0070c76d  size=11 ==== */

void Unwind_0070c76d(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x1a8));
  return;
}


/* ==== 0070c778  Unwind@0070c778  size=11 ==== */

void Unwind_0070c778(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -400));
  return;
}


/* ==== 0070c783  Unwind@0070c783  size=11 ==== */

void Unwind_0070c783(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -800));
  return;
}


/* ==== 0070c78e  Unwind@0070c78e  size=11 ==== */

void Unwind_0070c78e(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x328));
  return;
}


/* ==== 0070c799  Unwind@0070c799  size=11 ==== */

void Unwind_0070c799(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x398));
  return;
}


/* ==== 0070c7a4  Unwind@0070c7a4  size=11 ==== */

void Unwind_0070c7a4(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x33c));
  return;
}


/* ==== 0070c7af  Unwind@0070c7af  size=11 ==== */

void Unwind_0070c7af(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x344));
  return;
}


/* ==== 0070c7f0  Unwind@0070c7f0  size=11 ==== */

void Unwind_0070c7f0(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x108));
  return;
}


/* ==== 0070c7fb  Unwind@0070c7fb  size=11 ==== */

void Unwind_0070c7fb(void)

{
  FUN_004039a0();
  return;
}


/* ==== 0070c806  Unwind@0070c806  size=11 ==== */

void Unwind_0070c806(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x110));
  return;
}


/* ==== 0070c811  Unwind@0070c811  size=11 ==== */

void Unwind_0070c811(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x118));
  return;
}


/* ==== 0070c81c  Unwind@0070c81c  size=11 ==== */

void Unwind_0070c81c(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x120));
  return;
}


/* ==== 0070c860  Unwind@0070c860  size=8 ==== */

void Unwind_0070c860(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x50));
  return;
}


/* ==== 0070c868  Unwind@0070c868  size=8 ==== */

void Unwind_0070c868(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x58));
  return;
}


/* ==== 0070c870  Unwind@0070c870  size=8 ==== */

void Unwind_0070c870(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -100));
  return;
}


/* ==== 0070c878  Unwind@0070c878  size=8 ==== */

void Unwind_0070c878(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x6c));
  return;
}


/* ==== 0070c880  Unwind@0070c880  size=8 ==== */

void Unwind_0070c880(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x78));
  return;
}


/* ==== 0070c888  Unwind@0070c888  size=8 ==== */

void Unwind_0070c888(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x80));
  return;
}


/* ==== 0070c890  Unwind@0070c890  size=11 ==== */

void Unwind_0070c890(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x8c));
  return;
}


/* ==== 0070c89b  Unwind@0070c89b  size=11 ==== */

void Unwind_0070c89b(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x94));
  return;
}


/* ==== 0070c910  Unwind@0070c910  size=8 ==== */

void Unwind_0070c910(void)

{
  FUN_004055b0();
  return;
}


/* ==== 0070c940  Unwind@0070c940  size=8 ==== */

void Unwind_0070c940(void)

{
  FUN_00410470();
  return;
}


/* ==== 0070c970  Unwind@0070c970  size=8 ==== */

void Unwind_0070c970(void)

{
  FUN_00410350();
  return;
}


/* ==== 0070c9a0  Unwind@0070c9a0  size=8 ==== */

void Unwind_0070c9a0(void)

{
  FUN_00407b00();
  return;
}


/* ==== 0070c9d0  Unwind@0070c9d0  size=8 ==== */

void Unwind_0070c9d0(void)

{
  FUN_004089d0();
  return;
}


/* ==== 0070ca00  Unwind@0070ca00  size=8 ==== */

void Unwind_0070ca00(void)

{
  FUN_00410420();
  return;
}


/* ==== 0070ca30  Unwind@0070ca30  size=8 ==== */

void Unwind_0070ca30(void)

{
  FUN_00407ad0();
  return;
}


/* ==== 0070ca60  Unwind@0070ca60  size=8 ==== */

void Unwind_0070ca60(void)

{
  FUN_004103d0();
  return;
}


/* ==== 0070ca90  Unwind@0070ca90  size=8 ==== */

void Unwind_0070ca90(void)

{
  FUN_00409ac0();
  return;
}


/* ==== 0070cac0  Unwind@0070cac0  size=8 ==== */

void Unwind_0070cac0(void)

{
  FUN_00410350();
  return;
}


/* ==== 0070caf0  Unwind@0070caf0  size=8 ==== */

void Unwind_0070caf0(void)

{
  FUN_00411a70();
  return;
}


/* ==== 0070cb20  Unwind@0070cb20  size=8 ==== */

void Unwind_0070cb20(void)

{
  FUN_00409ac0();
  return;
}


/* ==== 0070cb50  Unwind@0070cb50  size=11 ==== */

void Unwind_0070cb50(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(*(int *)(unaff_EBP + -0x10) + 0x10));
  return;
}


/* ==== 0070cb5b  Unwind@0070cb5b  size=11 ==== */

void Unwind_0070cb5b(void)

{
  FUN_0040d7d0();
  return;
}


/* ==== 0070cb90  Unwind@0070cb90  size=8 ==== */

void Unwind_0070cb90(void)

{
  FUN_00412350();
  return;
}


/* ==== 0070cbc0  Unwind@0070cbc0  size=8 ==== */

void Unwind_0070cbc0(void)

{
  FUN_004103a0();
  return;
}


/* ==== 0070cbf0  Unwind@0070cbf0  size=8 ==== */

void Unwind_0070cbf0(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x6c));
  return;
}


/* ==== 0070cc20  Unwind@0070cc20  size=11 ==== */

void Unwind_0070cc20(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0xb8));
  return;
}


/* ==== 0070cc2b  Unwind@0070cc2b  size=11 ==== */

void Unwind_0070cc2b(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x364));
  return;
}


/* ==== 0070cc36  Unwind@0070cc36  size=11 ==== */

void Unwind_0070cc36(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x370));
  return;
}


/* ==== 0070cc41  Unwind@0070cc41  size=11 ==== */

void Unwind_0070cc41(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x37c));
  return;
}


/* ==== 0070cc4c  Unwind@0070cc4c  size=11 ==== */

void Unwind_0070cc4c(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -900));
  return;
}


/* ==== 0070cc57  Unwind@0070cc57  size=11 ==== */

void Unwind_0070cc57(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x38c));
  return;
}


/* ==== 0070cc62  Unwind@0070cc62  size=11 ==== */

void Unwind_0070cc62(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x394));
  return;
}


/* ==== 0070cc6d  Unwind@0070cc6d  size=11 ==== */

void Unwind_0070cc6d(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x39c));
  return;
}


/* ==== 0070cc78  Unwind@0070cc78  size=11 ==== */

void Unwind_0070cc78(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x308));
  return;
}


/* ==== 0070cc83  Unwind@0070cc83  size=11 ==== */

void Unwind_0070cc83(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x310));
  return;
}


/* ==== 0070cc8e  Unwind@0070cc8e  size=11 ==== */

void Unwind_0070cc8e(void)

{
  FUN_0040c940();
  return;
}


/* ==== 0070cc99  Unwind@0070cc99  size=11 ==== */

void Unwind_0070cc99(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x160));
  return;
}


/* ==== 0070cca4  Unwind@0070cca4  size=11 ==== */

void Unwind_0070cca4(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x148));
  return;
}


/* ==== 0070ccaf  Unwind@0070ccaf  size=11 ==== */

void Unwind_0070ccaf(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x130));
  return;
}


/* ==== 0070ccba  Unwind@0070ccba  size=11 ==== */

void Unwind_0070ccba(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x118));
  return;
}


/* ==== 0070ccc5  Unwind@0070ccc5  size=11 ==== */

void Unwind_0070ccc5(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x100));
  return;
}


/* ==== 0070ccd0  Unwind@0070ccd0  size=11 ==== */

void Unwind_0070ccd0(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x318));
  return;
}


/* ==== 0070ccdb  Unwind@0070ccdb  size=11 ==== */

void Unwind_0070ccdb(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -800));
  return;
}


/* ==== 0070cce6  Unwind@0070cce6  size=11 ==== */

void Unwind_0070cce6(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x220));
  return;
}


/* ==== 0070ccf1  Unwind@0070ccf1  size=11 ==== */

void Unwind_0070ccf1(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x208));
  return;
}


/* ==== 0070ccfc  Unwind@0070ccfc  size=11 ==== */

void Unwind_0070ccfc(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x1f0));
  return;
}


/* ==== 0070cd07  Unwind@0070cd07  size=11 ==== */

void Unwind_0070cd07(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x1d8));
  return;
}


/* ==== 0070cd12  Unwind@0070cd12  size=11 ==== */

void Unwind_0070cd12(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x1c0));
  return;
}


/* ==== 0070cd1d  Unwind@0070cd1d  size=11 ==== */

void Unwind_0070cd1d(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x1a8));
  return;
}


/* ==== 0070cd28  Unwind@0070cd28  size=11 ==== */

void Unwind_0070cd28(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -400));
  return;
}


/* ==== 0070cd33  Unwind@0070cd33  size=11 ==== */

void Unwind_0070cd33(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x328));
  return;
}


/* ==== 0070cd3e  Unwind@0070cd3e  size=11 ==== */

void Unwind_0070cd3e(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x3a0));
  return;
}


/* ==== 0070cd49  Unwind@0070cd49  size=11 ==== */

void Unwind_0070cd49(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x338));
  return;
}


/* ==== 0070cd54  Unwind@0070cd54  size=11 ==== */

void Unwind_0070cd54(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x344));
  return;
}


/* ==== 0070cd5f  Unwind@0070cd5f  size=11 ==== */

void Unwind_0070cd5f(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x34c));
  return;
}


/* ==== 0070cda0  Unwind@0070cda0  size=11 ==== */

void Unwind_0070cda0(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x114));
  return;
}


/* ==== 0070cdab  Unwind@0070cdab  size=11 ==== */

void Unwind_0070cdab(void)

{
  FUN_004039a0();
  return;
}


/* ==== 0070cdb6  Unwind@0070cdb6  size=11 ==== */

void Unwind_0070cdb6(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x11c));
  return;
}


/* ==== 0070cdc1  Unwind@0070cdc1  size=11 ==== */

void Unwind_0070cdc1(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x124));
  return;
}


/* ==== 0070ce00  Unwind@0070ce00  size=8 ==== */

void Unwind_0070ce00(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x10));
  return;
}


/* ==== 0070ce30  Unwind@0070ce30  size=11 ==== */

void Unwind_0070ce30(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x224));
  return;
}


/* ==== 0070ce3b  Unwind@0070ce3b  size=11 ==== */

void Unwind_0070ce3b(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x1e0));
  return;
}


/* ==== 0070ce46  Unwind@0070ce46  size=11 ==== */

void Unwind_0070ce46(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x1ec));
  return;
}


/* ==== 0070ce51  Unwind@0070ce51  size=11 ==== */

void Unwind_0070ce51(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -500));
  return;
}


/* ==== 0070ce5c  Unwind@0070ce5c  size=11 ==== */

void Unwind_0070ce5c(void)

{
  FUN_00407a80();
  return;
}


/* ==== 0070ce67  Unwind@0070ce67  size=11 ==== */

void Unwind_0070ce67(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x208));
  return;
}


/* ==== 0070ce72  Unwind@0070ce72  size=11 ==== */

void Unwind_0070ce72(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x210));
  return;
}


/* ==== 0070ceb0  Unwind@0070ceb0  size=8 ==== */

void Unwind_0070ceb0(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + 0x20));
  return;
}


/* ==== 0070ceb8  Unwind@0070ceb8  size=11 ==== */

void Unwind_0070ceb8(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x4a4));
  return;
}


/* ==== 0070cec3  Unwind@0070cec3  size=11 ==== */

void Unwind_0070cec3(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x49c));
  return;
}


/* ==== 0070cece  Unwind@0070cece  size=11 ==== */

void Unwind_0070cece(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x4b8));
  return;
}


/* ==== 0070ced9  Unwind@0070ced9  size=11 ==== */

void Unwind_0070ced9(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x100));
  return;
}


/* ==== 0070cee4  Unwind@0070cee4  size=11 ==== */

void Unwind_0070cee4(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x118));
  return;
}


/* ==== 0070ceef  Unwind@0070ceef  size=11 ==== */

void Unwind_0070ceef(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0xd0));
  return;
}


/* ==== 0070cefa  Unwind@0070cefa  size=11 ==== */

void Unwind_0070cefa(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x4ac));
  return;
}


/* ==== 0070cf05  Unwind@0070cf05  size=11 ==== */

void Unwind_0070cf05(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x4cc));
  return;
}


/* ==== 0070cf10  Unwind@0070cf10  size=11 ==== */

void Unwind_0070cf10(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x148));
  return;
}


/* ==== 0070cf1b  Unwind@0070cf1b  size=11 ==== */

void Unwind_0070cf1b(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x130));
  return;
}


/* ==== 0070cf26  Unwind@0070cf26  size=11 ==== */

void Unwind_0070cf26(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0xe8));
  return;
}


/* ==== 0070cf31  Unwind@0070cf31  size=11 ==== */

void Unwind_0070cf31(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x4d4));
  return;
}


/* ==== 0070cf3c  Unwind@0070cf3c  size=11 ==== */

void Unwind_0070cf3c(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x4e0));
  return;
}


/* ==== 0070cf47  Unwind@0070cf47  size=11 ==== */

void Unwind_0070cf47(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x160));
  return;
}


/* ==== 0070cf52  Unwind@0070cf52  size=11 ==== */

void Unwind_0070cf52(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x4e8));
  return;
}


/* ==== 0070cf5d  Unwind@0070cf5d  size=11 ==== */

void Unwind_0070cf5d(void)

{
  FUN_0040c940();
  return;
}


/* ==== 0070cf68  Unwind@0070cf68  size=11 ==== */

void Unwind_0070cf68(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -400));
  return;
}


/* ==== 0070cf73  Unwind@0070cf73  size=11 ==== */

void Unwind_0070cf73(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0xb8));
  return;
}


/* ==== 0070cf7e  Unwind@0070cf7e  size=11 ==== */

void Unwind_0070cf7e(void)

{
  FUN_00407a80();
  return;
}


/* ==== 0070cf89  Unwind@0070cf89  size=11 ==== */

void Unwind_0070cf89(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x4f4));
  return;
}


/* ==== 0070cf94  Unwind@0070cf94  size=11 ==== */

void Unwind_0070cf94(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x1d8));
  return;
}


/* ==== 0070cf9f  Unwind@0070cf9f  size=11 ==== */

void Unwind_0070cf9f(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x1c0));
  return;
}


/* ==== 0070cfaa  Unwind@0070cfaa  size=11 ==== */

void Unwind_0070cfaa(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x1a8));
  return;
}


/* ==== 0070cfb5  Unwind@0070cfb5  size=11 ==== */

void Unwind_0070cfb5(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x43c));
  return;
}


/* ==== 0070cfc0  Unwind@0070cfc0  size=11 ==== */

void Unwind_0070cfc0(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x448));
  return;
}


/* ==== 0070cfcb  Unwind@0070cfcb  size=11 ==== */

void Unwind_0070cfcb(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x220));
  return;
}


/* ==== 0070cfd6  Unwind@0070cfd6  size=11 ==== */

void Unwind_0070cfd6(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x208));
  return;
}


/* ==== 0070cfe1  Unwind@0070cfe1  size=11 ==== */

void Unwind_0070cfe1(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x1f0));
  return;
}


/* ==== 0070cfec  Unwind@0070cfec  size=11 ==== */

void Unwind_0070cfec(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x450));
  return;
}


/* ==== 0070cff7  Unwind@0070cff7  size=11 ==== */

void Unwind_0070cff7(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x45c));
  return;
}


/* ==== 0070d002  Unwind@0070d002  size=11 ==== */

void Unwind_0070d002(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x238));
  return;
}


/* ==== 0070d00d  Unwind@0070d00d  size=11 ==== */

void Unwind_0070d00d(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x464));
  return;
}


/* ==== 0070d018  Unwind@0070d018  size=11 ==== */

void Unwind_0070d018(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x470));
  return;
}


/* ==== 0070d023  Unwind@0070d023  size=11 ==== */

void Unwind_0070d023(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x250));
  return;
}


/* ==== 0070d02e  Unwind@0070d02e  size=11 ==== */

void Unwind_0070d02e(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x478));
  return;
}


/* ==== 0070d039  Unwind@0070d039  size=11 ==== */

void Unwind_0070d039(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x484));
  return;
}


/* ==== 0070d044  Unwind@0070d044  size=11 ==== */

void Unwind_0070d044(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x268));
  return;
}


/* ==== 0070d04f  Unwind@0070d04f  size=11 ==== */

void Unwind_0070d04f(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x48c));
  return;
}


/* ==== 0070d05a  Unwind@0070d05a  size=11 ==== */

void Unwind_0070d05a(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x2e0));
  return;
}


/* ==== 0070d065  Unwind@0070d065  size=11 ==== */

void Unwind_0070d065(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x2c8));
  return;
}


/* ==== 0070d070  Unwind@0070d070  size=11 ==== */

void Unwind_0070d070(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x2b0));
  return;
}


/* ==== 0070d07b  Unwind@0070d07b  size=11 ==== */

void Unwind_0070d07b(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x298));
  return;
}


/* ==== 0070d0c0  Unwind@0070d0c0  size=8 ==== */

void Unwind_0070d0c0(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + 0xc));
  return;
}


/* ==== 0070d0c8  Unwind@0070d0c8  size=11 ==== */

void Unwind_0070d0c8(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x178));
  return;
}


/* ==== 0070d0d3  Unwind@0070d0d3  size=11 ==== */

void Unwind_0070d0d3(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -400));
  return;
}


/* ==== 0070d0de  Unwind@0070d0de  size=11 ==== */

void Unwind_0070d0de(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x1a8));
  return;
}


/* ==== 0070d0e9  Unwind@0070d0e9  size=11 ==== */

void Unwind_0070d0e9(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x100));
  return;
}


/* ==== 0070d0f4  Unwind@0070d0f4  size=11 ==== */

void Unwind_0070d0f4(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x118));
  return;
}


/* ==== 0070d0ff  Unwind@0070d0ff  size=11 ==== */

void Unwind_0070d0ff(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x148));
  return;
}


/* ==== 0070d10a  Unwind@0070d10a  size=11 ==== */

void Unwind_0070d10a(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0xd0));
  return;
}


/* ==== 0070d115  Unwind@0070d115  size=11 ==== */

void Unwind_0070d115(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0xa0));
  return;
}


/* ==== 0070d120  Unwind@0070d120  size=8 ==== */

void Unwind_0070d120(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x70));
  return;
}


/* ==== 0070d128  Unwind@0070d128  size=8 ==== */

void Unwind_0070d128(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x28));
  return;
}


/* ==== 0070d130  Unwind@0070d130  size=8 ==== */

void Unwind_0070d130(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x40));
  return;
}


/* ==== 0070d138  Unwind@0070d138  size=8 ==== */

void Unwind_0070d138(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x58));
  return;
}


/* ==== 0070d140  Unwind@0070d140  size=11 ==== */

void Unwind_0070d140(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x238));
  return;
}


/* ==== 0070d14b  Unwind@0070d14b  size=11 ==== */

void Unwind_0070d14b(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x250));
  return;
}


/* ==== 0070d156  Unwind@0070d156  size=11 ==== */

void Unwind_0070d156(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x268));
  return;
}


/* ==== 0070d161  Unwind@0070d161  size=11 ==== */

void Unwind_0070d161(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x1d8));
  return;
}


/* ==== 0070d1a0  Unwind@0070d1a0  size=8 ==== */

void Unwind_0070d1a0(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + 0x20));
  return;
}


/* ==== 0070d1a8  Unwind@0070d1a8  size=11 ==== */

void Unwind_0070d1a8(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x3c8));
  return;
}


/* ==== 0070d1b3  Unwind@0070d1b3  size=11 ==== */

void Unwind_0070d1b3(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x3c0));
  return;
}


/* ==== 0070d1be  Unwind@0070d1be  size=11 ==== */

void Unwind_0070d1be(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x3d4));
  return;
}


/* ==== 0070d1c9  Unwind@0070d1c9  size=11 ==== */

void Unwind_0070d1c9(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x100));
  return;
}


/* ==== 0070d1d4  Unwind@0070d1d4  size=11 ==== */

void Unwind_0070d1d4(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x118));
  return;
}


/* ==== 0070d1df  Unwind@0070d1df  size=11 ==== */

void Unwind_0070d1df(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0xb8));
  return;
}


/* ==== 0070d1ea  Unwind@0070d1ea  size=11 ==== */

void Unwind_0070d1ea(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x3d0));
  return;
}


/* ==== 0070d1f5  Unwind@0070d1f5  size=11 ==== */

void Unwind_0070d1f5(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x3f0));
  return;
}


/* ==== 0070d200  Unwind@0070d200  size=11 ==== */

void Unwind_0070d200(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x148));
  return;
}


/* ==== 0070d20b  Unwind@0070d20b  size=11 ==== */

void Unwind_0070d20b(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x130));
  return;
}


/* ==== 0070d216  Unwind@0070d216  size=11 ==== */

void Unwind_0070d216(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0xe8));
  return;
}


/* ==== 0070d221  Unwind@0070d221  size=11 ==== */

void Unwind_0070d221(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x3f8));
  return;
}


/* ==== 0070d22c  Unwind@0070d22c  size=11 ==== */

void Unwind_0070d22c(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x404));
  return;
}


/* ==== 0070d237  Unwind@0070d237  size=11 ==== */

void Unwind_0070d237(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0xd0));
  return;
}


/* ==== 0070d242  Unwind@0070d242  size=11 ==== */

void Unwind_0070d242(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x370));
  return;
}


/* ==== 0070d24d  Unwind@0070d24d  size=11 ==== */

void Unwind_0070d24d(void)

{
  FUN_0040c940();
  return;
}


/* ==== 0070d258  Unwind@0070d258  size=11 ==== */

void Unwind_0070d258(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -400));
  return;
}


/* ==== 0070d263  Unwind@0070d263  size=11 ==== */

void Unwind_0070d263(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x178));
  return;
}


/* ==== 0070d26e  Unwind@0070d26e  size=11 ==== */

void Unwind_0070d26e(void)

{
  FUN_00407a80();
  return;
}


/* ==== 0070d279  Unwind@0070d279  size=11 ==== */

void Unwind_0070d279(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x380));
  return;
}


/* ==== 0070d284  Unwind@0070d284  size=11 ==== */

void Unwind_0070d284(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x1a8));
  return;
}


/* ==== 0070d28f  Unwind@0070d28f  size=11 ==== */

void Unwind_0070d28f(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x388));
  return;
}


/* ==== 0070d29a  Unwind@0070d29a  size=11 ==== */

void Unwind_0070d29a(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x394));
  return;
}


/* ==== 0070d2a5  Unwind@0070d2a5  size=11 ==== */

void Unwind_0070d2a5(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x1c0));
  return;
}


/* ==== 0070d2b0  Unwind@0070d2b0  size=11 ==== */

void Unwind_0070d2b0(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x39c));
  return;
}


/* ==== 0070d2bb  Unwind@0070d2bb  size=11 ==== */

void Unwind_0070d2bb(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x3a8));
  return;
}


/* ==== 0070d2c6  Unwind@0070d2c6  size=11 ==== */

void Unwind_0070d2c6(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x1d8));
  return;
}


/* ==== 0070d2d1  Unwind@0070d2d1  size=11 ==== */

void Unwind_0070d2d1(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x3b0));
  return;
}


/* ==== 0070d2dc  Unwind@0070d2dc  size=11 ==== */

void Unwind_0070d2dc(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x250));
  return;
}


/* ==== 0070d2e7  Unwind@0070d2e7  size=11 ==== */

void Unwind_0070d2e7(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x238));
  return;
}


/* ==== 0070d2f2  Unwind@0070d2f2  size=11 ==== */

void Unwind_0070d2f2(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x220));
  return;
}


/* ==== 0070d2fd  Unwind@0070d2fd  size=11 ==== */

void Unwind_0070d2fd(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x208));
  return;
}


/* ==== 0070d340  Unwind@0070d340  size=12 ==== */

void Unwind_0070d340(void)

{
  FUN_006e4bbf(&DAT_007ca8ac);
  return;
}


/* ==== 0070d34c  Unwind@0070d34c  size=11 ==== */

void Unwind_0070d34c(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x32c));
  return;
}


/* ==== 0070d357  Unwind@0070d357  size=11 ==== */

void Unwind_0070d357(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x314));
  return;
}


/* ==== 0070d362  Unwind@0070d362  size=11 ==== */

void Unwind_0070d362(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x2fc));
  return;
}


/* ==== 0070d36d  Unwind@0070d36d  size=11 ==== */

void Unwind_0070d36d(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x2e4));
  return;
}


/* ==== 0070d378  Unwind@0070d378  size=11 ==== */

void Unwind_0070d378(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x2cc));
  return;
}


/* ==== 0070d383  Unwind@0070d383  size=11 ==== */

void Unwind_0070d383(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x2b4));
  return;
}


/* ==== 0070d38e  Unwind@0070d38e  size=11 ==== */

void Unwind_0070d38e(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x29c));
  return;
}


/* ==== 0070d399  Unwind@0070d399  size=11 ==== */

void Unwind_0070d399(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x284));
  return;
}


/* ==== 0070d3a4  Unwind@0070d3a4  size=22 ==== */

void Unwind_0070d3a4(void)

{
  int unaff_EBP;
  
  _eh_vector_destructor_iterator_
            ((void *)(unaff_EBP + -0x32c),0x18,9,
             std::function<void___cdecl(void)>::~function<void___cdecl(void)>);
  return;
}


/* ==== 0070d3ba  Unwind@0070d3ba  size=12 ==== */

void Unwind_0070d3ba(void)

{
  FUN_006e4bbf(&DAT_007ca8a8);
  return;
}


/* ==== 0070d3c6  Unwind@0070d3c6  size=11 ==== */

void Unwind_0070d3c6(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0xd0));
  return;
}


/* ==== 0070d3d1  Unwind@0070d3d1  size=11 ==== */

void Unwind_0070d3d1(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0xe8));
  return;
}


/* ==== 0070d3dc  Unwind@0070d3dc  size=11 ==== */

void Unwind_0070d3dc(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x100));
  return;
}


/* ==== 0070d3e7  Unwind@0070d3e7  size=8 ==== */

void Unwind_0070d3e7(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x58));
  return;
}


/* ==== 0070d3ef  Unwind@0070d3ef  size=8 ==== */

void Unwind_0070d3ef(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x70));
  return;
}


/* ==== 0070d3f7  Unwind@0070d3f7  size=11 ==== */

void Unwind_0070d3f7(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x88));
  return;
}


/* ==== 0070d402  Unwind@0070d402  size=11 ==== */

void Unwind_0070d402(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x47c));
  return;
}


/* ==== 0070d40d  Unwind@0070d40d  size=11 ==== */

void Unwind_0070d40d(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x238));
  return;
}


/* ==== 0070d418  Unwind@0070d418  size=11 ==== */

void Unwind_0070d418(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x130));
  return;
}


/* ==== 0070d423  Unwind@0070d423  size=11 ==== */

void Unwind_0070d423(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x250));
  return;
}


/* ==== 0070d42e  Unwind@0070d42e  size=8 ==== */

void Unwind_0070d42e(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x28));
  return;
}


/* ==== 0070d436  Unwind@0070d436  size=11 ==== */

void Unwind_0070d436(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x1f0));
  return;
}


/* ==== 0070d441  Unwind@0070d441  size=11 ==== */

void Unwind_0070d441(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x208));
  return;
}


/* ==== 0070d44c  Unwind@0070d44c  size=11 ==== */

void Unwind_0070d44c(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x160));
  return;
}


/* ==== 0070d457  Unwind@0070d457  size=11 ==== */

void Unwind_0070d457(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -400));
  return;
}


/* ==== 0070d462  Unwind@0070d462  size=11 ==== */

void Unwind_0070d462(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x1a8));
  return;
}


/* ==== 0070d46d  Unwind@0070d46d  size=11 ==== */

void Unwind_0070d46d(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x178));
  return;
}


/* ==== 0070d478  Unwind@0070d478  size=11 ==== */

void Unwind_0070d478(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x1d8));
  return;
}


/* ==== 0070d483  Unwind@0070d483  size=11 ==== */

void Unwind_0070d483(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0xb8));
  return;
}


/* ==== 0070d4c0  Unwind@0070d4c0  size=11 ==== */

void Unwind_0070d4c0(void)

{
  FUN_00427120();
  return;
}


/* ==== 0070d4cb  Unwind@0070d4cb  size=11 ==== */

void Unwind_0070d4cb(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x8b4));
  return;
}


/* ==== 0070d4d6  Unwind@0070d4d6  size=11 ==== */

void Unwind_0070d4d6(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x8bc));
  return;
}


/* ==== 0070d4e1  Unwind@0070d4e1  size=8 ==== */

void Unwind_0070d4e1(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x40));
  return;
}


/* ==== 0070d4e9  Unwind@0070d4e9  size=11 ==== */

void Unwind_0070d4e9(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x8c8));
  return;
}


/* ==== 0070d4f4  Unwind@0070d4f4  size=11 ==== */

void Unwind_0070d4f4(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x678));
  return;
}


/* ==== 0070d4ff  Unwind@0070d4ff  size=11 ==== */

void Unwind_0070d4ff(void)

{
  FUN_00407a80();
  return;
}


/* ==== 0070d50a  Unwind@0070d50a  size=11 ==== */

void Unwind_0070d50a(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x684));
  return;
}


/* ==== 0070d515  Unwind@0070d515  size=11 ==== */

void Unwind_0070d515(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x68c));
  return;
}


/* ==== 0070d520  Unwind@0070d520  size=11 ==== */

void Unwind_0070d520(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x698));
  return;
}


/* ==== 0070d52b  Unwind@0070d52b  size=11 ==== */

void Unwind_0070d52b(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x6a0));
  return;
}


/* ==== 0070d536  Unwind@0070d536  size=11 ==== */

void Unwind_0070d536(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x6ac));
  return;
}


/* ==== 0070d541  Unwind@0070d541  size=11 ==== */

void Unwind_0070d541(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x6b4));
  return;
}


/* ==== 0070d54c  Unwind@0070d54c  size=11 ==== */

void Unwind_0070d54c(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x6c0));
  return;
}


/* ==== 0070d557  Unwind@0070d557  size=11 ==== */

void Unwind_0070d557(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x6c8));
  return;
}


/* ==== 0070d562  Unwind@0070d562  size=11 ==== */

void Unwind_0070d562(void)

{
  FUN_00405350();
  return;
}


/* ==== 0070d56d  Unwind@0070d56d  size=11 ==== */

void Unwind_0070d56d(void)

{
  FUN_00405350();
  return;
}


/* ==== 0070d578  Unwind@0070d578  size=11 ==== */

void Unwind_0070d578(void)

{
  FUN_00405350();
  return;
}


/* ==== 0070d583  Unwind@0070d583  size=11 ==== */

void Unwind_0070d583(void)

{
  FUN_00405350();
  return;
}


/* ==== 0070d58e  Unwind@0070d58e  size=11 ==== */

void Unwind_0070d58e(void)

{
  FUN_00405350();
  return;
}


/* ==== 0070d599  Unwind@0070d599  size=11 ==== */

void Unwind_0070d599(void)

{
  FUN_00405350();
  return;
}


/* ==== 0070d5a4  Unwind@0070d5a4  size=11 ==== */

void Unwind_0070d5a4(void)

{
  FUN_00405350();
  return;
}


/* ==== 0070d5af  Unwind@0070d5af  size=11 ==== */

void Unwind_0070d5af(void)

{
  FUN_00405350();
  return;
}


/* ==== 0070d5ba  Unwind@0070d5ba  size=11 ==== */

void Unwind_0070d5ba(void)

{
  FUN_00405350();
  return;
}


/* ==== 0070d5c5  Unwind@0070d5c5  size=11 ==== */

void Unwind_0070d5c5(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x6d4));
  return;
}


/* ==== 0070d5d0  Unwind@0070d5d0  size=11 ==== */

void Unwind_0070d5d0(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x6e8));
  return;
}


/* ==== 0070d5db  Unwind@0070d5db  size=11 ==== */

void Unwind_0070d5db(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x6f0));
  return;
}


/* ==== 0070d5e6  Unwind@0070d5e6  size=11 ==== */

void Unwind_0070d5e6(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x704));
  return;
}


/* ==== 0070d5f1  Unwind@0070d5f1  size=11 ==== */

void Unwind_0070d5f1(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x70c));
  return;
}


/* ==== 0070d5fc  Unwind@0070d5fc  size=11 ==== */

void Unwind_0070d5fc(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x720));
  return;
}


/* ==== 0070d607  Unwind@0070d607  size=11 ==== */

void Unwind_0070d607(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x72c));
  return;
}


/* ==== 0070d612  Unwind@0070d612  size=11 ==== */

void Unwind_0070d612(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x748));
  return;
}


/* ==== 0070d61d  Unwind@0070d61d  size=11 ==== */

void Unwind_0070d61d(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x764));
  return;
}


/* ==== 0070d628  Unwind@0070d628  size=11 ==== */

void Unwind_0070d628(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x780));
  return;
}


/* ==== 0070d633  Unwind@0070d633  size=11 ==== */

void Unwind_0070d633(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x79c));
  return;
}


/* ==== 0070d63e  Unwind@0070d63e  size=11 ==== */

void Unwind_0070d63e(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x7b8));
  return;
}


/* ==== 0070d649  Unwind@0070d649  size=11 ==== */

void Unwind_0070d649(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x7d4));
  return;
}


/* ==== 0070d654  Unwind@0070d654  size=11 ==== */

void Unwind_0070d654(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x7f0));
  return;
}


/* ==== 0070d65f  Unwind@0070d65f  size=11 ==== */

void Unwind_0070d65f(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x80c));
  return;
}


/* ==== 0070d66a  Unwind@0070d66a  size=11 ==== */

void Unwind_0070d66a(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x824));
  return;
}


/* ==== 0070d675  Unwind@0070d675  size=11 ==== */

void Unwind_0070d675(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x8cc));
  return;
}


/* ==== 0070d680  Unwind@0070d680  size=11 ==== */

void Unwind_0070d680(void)

{
  FUN_0040c940();
  return;
}


/* ==== 0070d68b  Unwind@0070d68b  size=11 ==== */

void Unwind_0070d68b(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x118));
  return;
}


/* ==== 0070d696  Unwind@0070d696  size=11 ==== */

void Unwind_0070d696(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x100));
  return;
}


/* ==== 0070d6a1  Unwind@0070d6a1  size=11 ==== */

void Unwind_0070d6a1(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x160));
  return;
}


/* ==== 0070d6ac  Unwind@0070d6ac  size=11 ==== */

void Unwind_0070d6ac(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x148));
  return;
}


/* ==== 0070d6b7  Unwind@0070d6b7  size=11 ==== */

void Unwind_0070d6b7(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x1a8));
  return;
}


/* ==== 0070d6c2  Unwind@0070d6c2  size=11 ==== */

void Unwind_0070d6c2(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -400));
  return;
}


/* ==== 0070d6cd  Unwind@0070d6cd  size=8 ==== */

void Unwind_0070d6cd(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x28));
  return;
}


/* ==== 0070d6d5  Unwind@0070d6d5  size=11 ==== */

void Unwind_0070d6d5(void)

{
  FUN_00403a10();
  return;
}


/* ==== 0070d6e0  Unwind@0070d6e0  size=11 ==== */

void Unwind_0070d6e0(void)

{
  FUN_00407a80();
  return;
}


/* ==== 0070d6eb  Unwind@0070d6eb  size=11 ==== */

void Unwind_0070d6eb(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x838));
  return;
}


/* ==== 0070d6f6  Unwind@0070d6f6  size=11 ==== */

void Unwind_0070d6f6(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x840));
  return;
}


/* ==== 0070d701  Unwind@0070d701  size=11 ==== */

void Unwind_0070d701(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x84c));
  return;
}


/* ==== 0070d70c  Unwind@0070d70c  size=11 ==== */

void Unwind_0070d70c(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x854));
  return;
}


/* ==== 0070d750  Unwind@0070d750  size=8 ==== */

void Unwind_0070d750(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x28));
  return;
}


/* ==== 0070d758  Unwind@0070d758  size=11 ==== */

void Unwind_0070d758(void)

{
  FUN_00403a10();
  return;
}


/* ==== 0070d763  Unwind@0070d763  size=11 ==== */

void Unwind_0070d763(void)

{
  FUN_00407a80();
  return;
}


/* ==== 0070d76e  Unwind@0070d76e  size=11 ==== */

void Unwind_0070d76e(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x528));
  return;
}


/* ==== 0070d779  Unwind@0070d779  size=11 ==== */

void Unwind_0070d779(void)

{
  FUN_00403a10();
  return;
}


/* ==== 0070d784  Unwind@0070d784  size=11 ==== */

void Unwind_0070d784(void)

{
  FUN_00407a80();
  return;
}


/* ==== 0070d78f  Unwind@0070d78f  size=11 ==== */

void Unwind_0070d78f(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x530));
  return;
}


/* ==== 0070d79a  Unwind@0070d79a  size=11 ==== */

void Unwind_0070d79a(void)

{
  FUN_00403a10();
  return;
}


/* ==== 0070d7a5  Unwind@0070d7a5  size=11 ==== */

void Unwind_0070d7a5(void)

{
  FUN_00407a80();
  return;
}


/* ==== 0070d7b0  Unwind@0070d7b0  size=11 ==== */

void Unwind_0070d7b0(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x538));
  return;
}


/* ==== 0070d7f0  Unwind@0070d7f0  size=11 ==== */

void Unwind_0070d7f0(void)

{
  FUN_00415410();
  return;
}


/* ==== 0070d7fb  Unwind@0070d7fb  size=11 ==== */

void Unwind_0070d7fb(void)

{
  FUN_0040c940();
  return;
}


/* ==== 0070d806  Unwind@0070d806  size=11 ==== */

void Unwind_0070d806(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x2058));
  return;
}


/* ==== 0070d811  Unwind@0070d811  size=11 ==== */

void Unwind_0070d811(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x9cc));
  return;
}


/* ==== 0070d81c  Unwind@0070d81c  size=11 ==== */

void Unwind_0070d81c(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x81c));
  return;
}


/* ==== 0070d827  Unwind@0070d827  size=11 ==== */

void Unwind_0070d827(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x2060));
  return;
}


/* ==== 0070d832  Unwind@0070d832  size=11 ==== */

void Unwind_0070d832(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x2068));
  return;
}


/* ==== 0070d83d  Unwind@0070d83d  size=11 ==== */

void Unwind_0070d83d(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x2074));
  return;
}


/* ==== 0070d848  Unwind@0070d848  size=11 ==== */

void Unwind_0070d848(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x207c));
  return;
}


/* ==== 0070d853  Unwind@0070d853  size=11 ==== */

void Unwind_0070d853(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x7ec));
  return;
}


/* ==== 0070d85e  Unwind@0070d85e  size=11 ==== */

void Unwind_0070d85e(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x804));
  return;
}


/* ==== 0070d869  Unwind@0070d869  size=11 ==== */

void Unwind_0070d869(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x10a4));
  return;
}


/* ==== 0070d874  Unwind@0070d874  size=11 ==== */

void Unwind_0070d874(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x10bc));
  return;
}


/* ==== 0070d87f  Unwind@0070d87f  size=11 ==== */

void Unwind_0070d87f(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x2088));
  return;
}


/* ==== 0070d88a  Unwind@0070d88a  size=11 ==== */

void Unwind_0070d88a(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x2090));
  return;
}


/* ==== 0070d895  Unwind@0070d895  size=11 ==== */

void Unwind_0070d895(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x1074));
  return;
}


/* ==== 0070d8a0  Unwind@0070d8a0  size=11 ==== */

void Unwind_0070d8a0(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x108c));
  return;
}


/* ==== 0070d8ab  Unwind@0070d8ab  size=11 ==== */

void Unwind_0070d8ab(void)

{
  FUN_00411b80();
  return;
}


/* ==== 0070d8b6  Unwind@0070d8b6  size=11 ==== */

void Unwind_0070d8b6(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0xa44));
  return;
}


/* ==== 0070d8c1  Unwind@0070d8c1  size=11 ==== */

void Unwind_0070d8c1(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x105c));
  return;
}


/* ==== 0070d8cc  Unwind@0070d8cc  size=11 ==== */

void Unwind_0070d8cc(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x102c));
  return;
}


/* ==== 0070d8d7  Unwind@0070d8d7  size=11 ==== */

void Unwind_0070d8d7(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x20a4));
  return;
}


/* ==== 0070d8e2  Unwind@0070d8e2  size=11 ==== */

void Unwind_0070d8e2(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x1044));
  return;
}


/* ==== 0070d8ed  Unwind@0070d8ed  size=11 ==== */

void Unwind_0070d8ed(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x20ac));
  return;
}


/* ==== 0070d8f8  Unwind@0070d8f8  size=11 ==== */

void Unwind_0070d8f8(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x20ec));
  return;
}


/* ==== 0070d903  Unwind@0070d903  size=11 ==== */

void Unwind_0070d903(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x20f4));
  return;
}


/* ==== 0070d90e  Unwind@0070d90e  size=11 ==== */

void Unwind_0070d90e(void)

{
  FUN_00407a80();
  return;
}


/* ==== 0070d919  Unwind@0070d919  size=11 ==== */

void Unwind_0070d919(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x2100));
  return;
}


/* ==== 0070d924  Unwind@0070d924  size=11 ==== */

void Unwind_0070d924(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x2108));
  return;
}


/* ==== 0070d92f  Unwind@0070d92f  size=11 ==== */

void Unwind_0070d92f(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x2114));
  return;
}


/* ==== 0070d93a  Unwind@0070d93a  size=11 ==== */

void Unwind_0070d93a(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x211c));
  return;
}


/* ==== 0070d945  Unwind@0070d945  size=11 ==== */

void Unwind_0070d945(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x2128));
  return;
}


/* ==== 0070d950  Unwind@0070d950  size=11 ==== */

void Unwind_0070d950(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x2130));
  return;
}


/* ==== 0070d95b  Unwind@0070d95b  size=11 ==== */

void Unwind_0070d95b(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x213c));
  return;
}


/* ==== 0070d966  Unwind@0070d966  size=11 ==== */

void Unwind_0070d966(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x2144));
  return;
}


/* ==== 0070d971  Unwind@0070d971  size=11 ==== */

void Unwind_0070d971(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x2150));
  return;
}


/* ==== 0070d97c  Unwind@0070d97c  size=11 ==== */

void Unwind_0070d97c(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x2158));
  return;
}


/* ==== 0070d987  Unwind@0070d987  size=11 ==== */

void Unwind_0070d987(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x674));
  return;
}


/* ==== 0070d992  Unwind@0070d992  size=11 ==== */

void Unwind_0070d992(void)

{
  FUN_00411b80();
  return;
}


/* ==== 0070d99d  Unwind@0070d99d  size=11 ==== */

void Unwind_0070d99d(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x68c));
  return;
}


/* ==== 0070d9a8  Unwind@0070d9a8  size=11 ==== */

void Unwind_0070d9a8(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x216c));
  return;
}


/* ==== 0070d9b3  Unwind@0070d9b3  size=11 ==== */

void Unwind_0070d9b3(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x2174));
  return;
}


/* ==== 0070d9be  Unwind@0070d9be  size=11 ==== */

void Unwind_0070d9be(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x2180));
  return;
}


/* ==== 0070d9c9  Unwind@0070d9c9  size=11 ==== */

void Unwind_0070d9c9(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0xf54));
  return;
}


/* ==== 0070d9d4  Unwind@0070d9d4  size=11 ==== */

void Unwind_0070d9d4(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0xf6c));
  return;
}


/* ==== 0070d9df  Unwind@0070d9df  size=11 ==== */

void Unwind_0070d9df(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0xf84));
  return;
}


/* ==== 0070d9ea  Unwind@0070d9ea  size=11 ==== */

void Unwind_0070d9ea(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0xfb4));
  return;
}


/* ==== 0070d9f5  Unwind@0070d9f5  size=11 ==== */

void Unwind_0070d9f5(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x2188));
  return;
}


/* ==== 0070da00  Unwind@0070da00  size=11 ==== */

void Unwind_0070da00(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x2194));
  return;
}


/* ==== 0070da0b  Unwind@0070da0b  size=11 ==== */

void Unwind_0070da0b(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0xc6c));
  return;
}


/* ==== 0070da16  Unwind@0070da16  size=11 ==== */

void Unwind_0070da16(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0xf0c));
  return;
}


/* ==== 0070da21  Unwind@0070da21  size=11 ==== */

void Unwind_0070da21(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0xf24));
  return;
}


/* ==== 0070da2c  Unwind@0070da2c  size=11 ==== */

void Unwind_0070da2c(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0xf3c));
  return;
}


/* ==== 0070da37  Unwind@0070da37  size=11 ==== */

void Unwind_0070da37(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x219c));
  return;
}


/* ==== 0070da42  Unwind@0070da42  size=11 ==== */

void Unwind_0070da42(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x21a8));
  return;
}


/* ==== 0070da4d  Unwind@0070da4d  size=11 ==== */

void Unwind_0070da4d(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0xeac));
  return;
}


/* ==== 0070da58  Unwind@0070da58  size=11 ==== */

void Unwind_0070da58(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0xec4));
  return;
}


/* ==== 0070da63  Unwind@0070da63  size=11 ==== */

void Unwind_0070da63(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0xedc));
  return;
}


/* ==== 0070da6e  Unwind@0070da6e  size=11 ==== */

void Unwind_0070da6e(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0xef4));
  return;
}


/* ==== 0070da79  Unwind@0070da79  size=11 ==== */

void Unwind_0070da79(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x21b0));
  return;
}


/* ==== 0070da84  Unwind@0070da84  size=11 ==== */

void Unwind_0070da84(void)

{
  FUN_00407a80();
  return;
}


/* ==== 0070da8f  Unwind@0070da8f  size=11 ==== */

void Unwind_0070da8f(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x21bc));
  return;
}


/* ==== 0070da9a  Unwind@0070da9a  size=11 ==== */

void Unwind_0070da9a(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x21c4));
  return;
}


/* ==== 0070daa5  Unwind@0070daa5  size=11 ==== */

void Unwind_0070daa5(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x21d8));
  return;
}


/* ==== 0070dab0  Unwind@0070dab0  size=11 ==== */

void Unwind_0070dab0(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x21e0));
  return;
}


/* ==== 0070dabb  Unwind@0070dabb  size=11 ==== */

void Unwind_0070dabb(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x21ec));
  return;
}


/* ==== 0070dac6  Unwind@0070dac6  size=11 ==== */

void Unwind_0070dac6(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x21f4));
  return;
}


/* ==== 0070dad1  Unwind@0070dad1  size=11 ==== */

void Unwind_0070dad1(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x202c));
  return;
}


/* ==== 0070dadc  Unwind@0070dadc  size=11 ==== */

void Unwind_0070dadc(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x2034));
  return;
}


/* ==== 0070dae7  Unwind@0070dae7  size=11 ==== */

void Unwind_0070dae7(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x540));
  return;
}


/* ==== 0070daf2  Unwind@0070daf2  size=11 ==== */

void Unwind_0070daf2(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x65c));
  return;
}


/* ==== 0070dafd  Unwind@0070dafd  size=11 ==== */

void Unwind_0070dafd(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0xe7c));
  return;
}


/* ==== 0070db08  Unwind@0070db08  size=11 ==== */

void Unwind_0070db08(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0xa14));
  return;
}


/* ==== 0070db13  Unwind@0070db13  size=11 ==== */

void Unwind_0070db13(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0xe1c));
  return;
}


/* ==== 0070db1e  Unwind@0070db1e  size=11 ==== */

void Unwind_0070db1e(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0xe34));
  return;
}


/* ==== 0070db29  Unwind@0070db29  size=11 ==== */

void Unwind_0070db29(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0xe4c));
  return;
}


/* ==== 0070db34  Unwind@0070db34  size=11 ==== */

void Unwind_0070db34(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x1cf0));
  return;
}


/* ==== 0070db3f  Unwind@0070db3f  size=11 ==== */

void Unwind_0070db3f(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x528));
  return;
}


/* ==== 0070db4a  Unwind@0070db4a  size=11 ==== */

void Unwind_0070db4a(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x644));
  return;
}


/* ==== 0070db55  Unwind@0070db55  size=11 ==== */

void Unwind_0070db55(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0xdec));
  return;
}


/* ==== 0070db60  Unwind@0070db60  size=11 ==== */

void Unwind_0070db60(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0xd74));
  return;
}


/* ==== 0070db6b  Unwind@0070db6b  size=11 ==== */

void Unwind_0070db6b(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0xd8c));
  return;
}


/* ==== 0070db76  Unwind@0070db76  size=11 ==== */

void Unwind_0070db76(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0xda4));
  return;
}


/* ==== 0070db81  Unwind@0070db81  size=11 ==== */

void Unwind_0070db81(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0xdbc));
  return;
}


/* ==== 0070db8c  Unwind@0070db8c  size=11 ==== */

void Unwind_0070db8c(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x1d04));
  return;
}


/* ==== 0070db97  Unwind@0070db97  size=11 ==== */

void Unwind_0070db97(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x1d0c));
  return;
}


/* ==== 0070dba2  Unwind@0070dba2  size=11 ==== */

void Unwind_0070dba2(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x1d14));
  return;
}


/* ==== 0070dbad  Unwind@0070dbad  size=11 ==== */

void Unwind_0070dbad(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x1d1c));
  return;
}


/* ==== 0070dbb8  Unwind@0070dbb8  size=11 ==== */

void Unwind_0070dbb8(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x1d24));
  return;
}


/* ==== 0070dbc3  Unwind@0070dbc3  size=11 ==== */

void Unwind_0070dbc3(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x1d30));
  return;
}


/* ==== 0070dbce  Unwind@0070dbce  size=11 ==== */

void Unwind_0070dbce(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x1d38));
  return;
}


/* ==== 0070dbd9  Unwind@0070dbd9  size=11 ==== */

void Unwind_0070dbd9(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x1d40));
  return;
}


/* ==== 0070dbe4  Unwind@0070dbe4  size=11 ==== */

void Unwind_0070dbe4(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x1d48));
  return;
}


/* ==== 0070dbef  Unwind@0070dbef  size=11 ==== */

void Unwind_0070dbef(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x1d50));
  return;
}


/* ==== 0070dbfa  Unwind@0070dbfa  size=11 ==== */

void Unwind_0070dbfa(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x1d5c));
  return;
}


/* ==== 0070dc05  Unwind@0070dc05  size=11 ==== */

void Unwind_0070dc05(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x1d64));
  return;
}


/* ==== 0070dc10  Unwind@0070dc10  size=11 ==== */

void Unwind_0070dc10(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x1d6c));
  return;
}


/* ==== 0070dc1b  Unwind@0070dc1b  size=11 ==== */

void Unwind_0070dc1b(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x1d74));
  return;
}


/* ==== 0070dc26  Unwind@0070dc26  size=11 ==== */

void Unwind_0070dc26(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x1d7c));
  return;
}


/* ==== 0070dc31  Unwind@0070dc31  size=11 ==== */

void Unwind_0070dc31(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x1d88));
  return;
}


/* ==== 0070dc3c  Unwind@0070dc3c  size=11 ==== */

void Unwind_0070dc3c(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x1d90));
  return;
}


/* ==== 0070dc47  Unwind@0070dc47  size=11 ==== */

void Unwind_0070dc47(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x1dc4));
  return;
}


/* ==== 0070dc52  Unwind@0070dc52  size=11 ==== */

void Unwind_0070dc52(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x1df8));
  return;
}


/* ==== 0070dc5d  Unwind@0070dc5d  size=11 ==== */

void Unwind_0070dc5d(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x1e2c));
  return;
}


/* ==== 0070dc68  Unwind@0070dc68  size=11 ==== */

void Unwind_0070dc68(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x1e60));
  return;
}


/* ==== 0070dc73  Unwind@0070dc73  size=11 ==== */

void Unwind_0070dc73(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x1e94));
  return;
}


/* ==== 0070dc7e  Unwind@0070dc7e  size=11 ==== */

void Unwind_0070dc7e(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x1ec8));
  return;
}


/* ==== 0070dc89  Unwind@0070dc89  size=11 ==== */

void Unwind_0070dc89(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x1efc));
  return;
}


/* ==== 0070dc94  Unwind@0070dc94  size=11 ==== */

void Unwind_0070dc94(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x1f30));
  return;
}


/* ==== 0070dc9f  Unwind@0070dc9f  size=11 ==== */

void Unwind_0070dc9f(void)

{
  FUN_004039a0();
  return;
}


/* ==== 0070dcaa  Unwind@0070dcaa  size=11 ==== */

void Unwind_0070dcaa(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -8000));
  return;
}


/* ==== 0070dcb5  Unwind@0070dcb5  size=11 ==== */

void Unwind_0070dcb5(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x1f48));
  return;
}


/* ==== 0070dcc0  Unwind@0070dcc0  size=11 ==== */

void Unwind_0070dcc0(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x1f54));
  return;
}


/* ==== 0070dccb  Unwind@0070dccb  size=11 ==== */

void Unwind_0070dccb(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x1f5c));
  return;
}


/* ==== 0070dcd6  Unwind@0070dcd6  size=11 ==== */

void Unwind_0070dcd6(void)

{
  FUN_004052a0();
  return;
}


/* ==== 0070dce1  Unwind@0070dce1  size=11 ==== */

void Unwind_0070dce1(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x1f64));
  return;
}


/* ==== 0070dcec  Unwind@0070dcec  size=11 ==== */

void Unwind_0070dcec(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x1f6c));
  return;
}


/* ==== 0070dcf7  Unwind@0070dcf7  size=11 ==== */

void Unwind_0070dcf7(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x1f78));
  return;
}


/* ==== 0070dd02  Unwind@0070dd02  size=11 ==== */

void Unwind_0070dd02(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0xd5c));
  return;
}


/* ==== 0070dd0d  Unwind@0070dd0d  size=11 ==== */

void Unwind_0070dd0d(void)

{
  FUN_004039a0();
  return;
}


/* ==== 0070dd18  Unwind@0070dd18  size=11 ==== */

void Unwind_0070dd18(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x1f88));
  return;
}


/* ==== 0070dd23  Unwind@0070dd23  size=11 ==== */

void Unwind_0070dd23(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x1f90));
  return;
}


/* ==== 0070dd2e  Unwind@0070dd2e  size=11 ==== */

void Unwind_0070dd2e(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x1f98));
  return;
}


/* ==== 0070dd39  Unwind@0070dd39  size=11 ==== */

void Unwind_0070dd39(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x1fa0));
  return;
}


/* ==== 0070dd44  Unwind@0070dd44  size=11 ==== */

void Unwind_0070dd44(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x1fa8));
  return;
}


/* ==== 0070dd4f  Unwind@0070dd4f  size=11 ==== */

void Unwind_0070dd4f(void)

{
  FUN_004089b0();
  return;
}


/* ==== 0070dd5a  Unwind@0070dd5a  size=11 ==== */

void Unwind_0070dd5a(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x1fb4));
  return;
}


/* ==== 0070dd65  Unwind@0070dd65  size=11 ==== */

void Unwind_0070dd65(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x1fbc));
  return;
}


/* ==== 0070dd70  Unwind@0070dd70  size=11 ==== */

void Unwind_0070dd70(void)

{
  FUN_004089b0();
  return;
}


/* ==== 0070dd7b  Unwind@0070dd7b  size=11 ==== */

void Unwind_0070dd7b(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x1fcc));
  return;
}


/* ==== 0070dd86  Unwind@0070dd86  size=11 ==== */

void Unwind_0070dd86(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0xccc));
  return;
}


/* ==== 0070dd91  Unwind@0070dd91  size=11 ==== */

void Unwind_0070dd91(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0xce4));
  return;
}


/* ==== 0070dd9c  Unwind@0070dd9c  size=11 ==== */

void Unwind_0070dd9c(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x1fd4));
  return;
}


/* ==== 0070dda7  Unwind@0070dda7  size=11 ==== */

void Unwind_0070dda7(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x5ec));
  return;
}


/* ==== 0070ddb2  Unwind@0070ddb2  size=11 ==== */

void Unwind_0070ddb2(void)

{
  FUN_00403a10();
  return;
}


/* ==== 0070ddbd  Unwind@0070ddbd  size=11 ==== */

void Unwind_0070ddbd(void)

{
  FUN_00407a80();
  return;
}


/* ==== 0070ddc8  Unwind@0070ddc8  size=11 ==== */

void Unwind_0070ddc8(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x8f4));
  return;
}


/* ==== 0070ddd3  Unwind@0070ddd3  size=11 ==== */

void Unwind_0070ddd3(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0xc84));
  return;
}


/* ==== 0070ddde  Unwind@0070ddde  size=11 ==== */

void Unwind_0070ddde(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0xc24));
  return;
}


/* ==== 0070dde9  Unwind@0070dde9  size=11 ==== */

void Unwind_0070dde9(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0xc3c));
  return;
}


/* ==== 0070ddf4  Unwind@0070ddf4  size=11 ==== */

void Unwind_0070ddf4(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x1fdc));
  return;
}


/* ==== 0070ddff  Unwind@0070ddff  size=11 ==== */

void Unwind_0070ddff(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0xbdc));
  return;
}


/* ==== 0070de0a  Unwind@0070de0a  size=11 ==== */

void Unwind_0070de0a(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0xbf4));
  return;
}


/* ==== 0070de15  Unwind@0070de15  size=11 ==== */

void Unwind_0070de15(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x1fec));
  return;
}


/* ==== 0070de20  Unwind@0070de20  size=11 ==== */

void Unwind_0070de20(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0xb94));
  return;
}


/* ==== 0070de2b  Unwind@0070de2b  size=11 ==== */

void Unwind_0070de2b(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0xbac));
  return;
}


/* ==== 0070de36  Unwind@0070de36  size=11 ==== */

void Unwind_0070de36(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x1ff4));
  return;
}


/* ==== 0070de41  Unwind@0070de41  size=11 ==== */

void Unwind_0070de41(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0xb4c));
  return;
}


/* ==== 0070de4c  Unwind@0070de4c  size=11 ==== */

void Unwind_0070de4c(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0xb64));
  return;
}


/* ==== 0070de57  Unwind@0070de57  size=11 ==== */

void Unwind_0070de57(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0xb1c));
  return;
}


/* ==== 0070de62  Unwind@0070de62  size=11 ==== */

void Unwind_0070de62(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0xb34));
  return;
}


/* ==== 0070de6d  Unwind@0070de6d  size=11 ==== */

void Unwind_0070de6d(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x1ffc));
  return;
}


/* ==== 0070de78  Unwind@0070de78  size=11 ==== */

void Unwind_0070de78(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0xad4));
  return;
}


/* ==== 0070de83  Unwind@0070de83  size=11 ==== */

void Unwind_0070de83(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0xaec));
  return;
}


/* ==== 0070de8e  Unwind@0070de8e  size=11 ==== */

void Unwind_0070de8e(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x2010));
  return;
}


/* ==== 0070de99  Unwind@0070de99  size=11 ==== */

void Unwind_0070de99(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0xa8c));
  return;
}


/* ==== 0070dea4  Unwind@0070dea4  size=11 ==== */

void Unwind_0070dea4(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0xaa4));
  return;
}


/* ==== 0070deaf  Unwind@0070deaf  size=11 ==== */

void Unwind_0070deaf(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x2018));
  return;
}


/* ==== 0070deba  Unwind@0070deba  size=11 ==== */

void Unwind_0070deba(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x99c));
  return;
}


/* ==== 0070dec5  Unwind@0070dec5  size=11 ==== */

void Unwind_0070dec5(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0xa5c));
  return;
}


/* ==== 0070ded0  Unwind@0070ded0  size=11 ==== */

void Unwind_0070ded0(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x954));
  return;
}


/* ==== 0070dedb  Unwind@0070dedb  size=11 ==== */

void Unwind_0070dedb(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x96c));
  return;
}


/* ==== 0070dee6  Unwind@0070dee6  size=11 ==== */

void Unwind_0070dee6(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x2020));
  return;
}


/* ==== 0070def1  Unwind@0070def1  size=11 ==== */

void Unwind_0070def1(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x90c));
  return;
}


/* ==== 0070defc  Unwind@0070defc  size=11 ==== */

void Unwind_0070defc(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x924));
  return;
}


/* ==== 0070df60  Unwind@0070df60  size=8 ==== */

void Unwind_0070df60(void)

{
  FUN_00429350();
  return;
}


/* ==== 0070df90  Unwind@0070df90  size=8 ==== */

void Unwind_0070df90(void)

{
  FUN_004292e0();
  return;
}


/* ==== 0070dfc0  Unwind@0070dfc0  size=8 ==== */

void Unwind_0070dfc0(void)

{
  FUN_004055b0();
  return;
}


/* ==== 0070dff0  Unwind@0070dff0  size=8 ==== */

void Unwind_0070dff0(void)

{
  FUN_0042c720();
  return;
}


/* ==== 0070e020  Unwind@0070e020  size=8 ==== */

void Unwind_0070e020(void)

{
  FUN_0042c6f0();
  return;
}


/* ==== 0070e050  Unwind@0070e050  size=8 ==== */

void Unwind_0070e050(void)

{
  FUN_00410470();
  return;
}


/* ==== 0070e080  Unwind@0070e080  size=8 ==== */

void Unwind_0070e080(void)

{
  FUN_00411a70();
  return;
}


/* ==== 0070e0b0  Unwind@0070e0b0  size=8 ==== */

void Unwind_0070e0b0(void)

{
  FUN_0042c6a0();
  return;
}


/* ==== 0070e0e0  Unwind@0070e0e0  size=8 ==== */

void Unwind_0070e0e0(void)

{
  FUN_0040a6e0();
  return;
}


/* ==== 0070e110  Unwind@0070e110  size=8 ==== */

void Unwind_0070e110(void)

{
  FUN_0042c650();
  return;
}


/* ==== 0070e140  Unwind@0070e140  size=8 ==== */

void Unwind_0070e140(void)

{
  FUN_004103d0();
  return;
}


/* ==== 0070e170  Unwind@0070e170  size=8 ==== */

void Unwind_0070e170(void)

{
  FUN_0042c600();
  return;
}


/* ==== 0070e1a0  Unwind@0070e1a0  size=8 ==== */

void Unwind_0070e1a0(void)

{
  FUN_0042d440();
  return;
}


/* ==== 0070e1d0  Unwind@0070e1d0  size=8 ==== */

void Unwind_0070e1d0(void)

{
  FUN_004103a0();
  return;
}


/* ==== 0070e200  Unwind@0070e200  size=8 ==== */

void Unwind_0070e200(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x10));
  return;
}


/* ==== 0070e208  Unwind@0070e208  size=11 ==== */

void Unwind_0070e208(void)

{
  FUN_00401ac0();
  return;
}


/* ==== 0070e240  Unwind@0070e240  size=11 ==== */

void Unwind_0070e240(void)

{
  FUN_00401ac0();
  return;
}


/* ==== 0070e24b  Unwind@0070e24b  size=11 ==== */

void Unwind_0070e24b(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(*(int *)(unaff_EBP + -0x10) + 0x44));
  return;
}


/* ==== 0070e256  Unwind@0070e256  size=11 ==== */

void Unwind_0070e256(void)

{
  FUN_00401ac0();
  return;
}


/* ==== 0070e290  Unwind@0070e290  size=8 ==== */

void Unwind_0070e290(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + 0x18));
  return;
}


/* ==== 0070e298  Unwind@0070e298  size=8 ==== */

void Unwind_0070e298(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x28));
  return;
}


/* ==== 0070e2a0  Unwind@0070e2a0  size=11 ==== */

void Unwind_0070e2a0(void)

{
  FUN_00401ac0();
  return;
}


/* ==== 0070e2ab  Unwind@0070e2ab  size=11 ==== */

void Unwind_0070e2ab(void)

{
  FUN_00407a80();
  return;
}


/* ==== 0070e2b6  Unwind@0070e2b6  size=11 ==== */

void Unwind_0070e2b6(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0xe4));
  return;
}


/* ==== 0070e2c1  Unwind@0070e2c1  size=11 ==== */

void Unwind_0070e2c1(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0xec));
  return;
}


/* ==== 0070e2cc  Unwind@0070e2cc  size=11 ==== */

void Unwind_0070e2cc(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0xf4));
  return;
}


/* ==== 0070e310  Unwind@0070e310  size=8 ==== */

void Unwind_0070e310(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x28));
  return;
}


/* ==== 0070e318  Unwind@0070e318  size=11 ==== */

void Unwind_0070e318(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x84));
  return;
}


/* ==== 0070e323  Unwind@0070e323  size=11 ==== */

void Unwind_0070e323(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x8c));
  return;
}


/* ==== 0070e32e  Unwind@0070e32e  size=8 ==== */

void Unwind_0070e32e(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x40));
  return;
}


/* ==== 0070e336  Unwind@0070e336  size=11 ==== */

void Unwind_0070e336(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x9c));
  return;
}


/* ==== 0070e341  Unwind@0070e341  size=11 ==== */

void Unwind_0070e341(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0xa4));
  return;
}


/* ==== 0070e380  Unwind@0070e380  size=8 ==== */

void Unwind_0070e380(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x28));
  return;
}


/* ==== 0070e388  Unwind@0070e388  size=8 ==== */

void Unwind_0070e388(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x40));
  return;
}


/* ==== 0070e390  Unwind@0070e390  size=8 ==== */

void Unwind_0070e390(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x48));
  return;
}


/* ==== 0070e398  Unwind@0070e398  size=8 ==== */

void Unwind_0070e398(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x50));
  return;
}


/* ==== 0070e3a0  Unwind@0070e3a0  size=8 ==== */

void Unwind_0070e3a0(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x58));
  return;
}


/* ==== 0070e3e0  Unwind@0070e3e0  size=15 ==== */

void Unwind_0070e3e0(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x14),0x78);
  return;
}


/* ==== 0070e420  Unwind@0070e420  size=8 ==== */

void Unwind_0070e420(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x18));
  return;
}


/* ==== 0070e450  Unwind@0070e450  size=8 ==== */

void Unwind_0070e450(void)

{
  FUN_0042f960();
  return;
}


/* ==== 0070e458  Unwind@0070e458  size=14 ==== */

void Unwind_0070e458(void)

{
  FUN_00401ac0();
  return;
}


/* ==== 0070e466  Unwind@0070e466  size=14 ==== */

void Unwind_0070e466(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(*(int *)(unaff_EBP + -0x10) + 0x8f8));
  return;
}


/* ==== 0070e474  Unwind@0070e474  size=14 ==== */

void Unwind_0070e474(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(*(int *)(unaff_EBP + -0x10) + 0x910));
  return;
}


/* ==== 0070e482  Unwind@0070e482  size=14 ==== */

void Unwind_0070e482(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(*(int *)(unaff_EBP + -0x10) + 0x928));
  return;
}


/* ==== 0070e490  Unwind@0070e490  size=14 ==== */

void Unwind_0070e490(void)

{
  FUN_0040d7d0();
  return;
}


/* ==== 0070e49e  Unwind@0070e49e  size=14 ==== */

void Unwind_0070e49e(void)

{
  FUN_00401ac0();
  return;
}


/* ==== 0070e4ac  Unwind@0070e4ac  size=14 ==== */

void Unwind_0070e4ac(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(*(int *)(unaff_EBP + -0x10) + 0x97c));
  return;
}


/* ==== 0070e4e0  Unwind@0070e4e0  size=8 ==== */

void Unwind_0070e4e0(void)

{
  FUN_0042f960();
  return;
}


/* ==== 0070e4e8  Unwind@0070e4e8  size=14 ==== */

void Unwind_0070e4e8(void)

{
  FUN_00401ac0();
  return;
}


/* ==== 0070e4f6  Unwind@0070e4f6  size=14 ==== */

void Unwind_0070e4f6(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(*(int *)(unaff_EBP + -0x48) + 0x8f8));
  return;
}


/* ==== 0070e504  Unwind@0070e504  size=14 ==== */

void Unwind_0070e504(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(*(int *)(unaff_EBP + -0x48) + 0x910));
  return;
}


/* ==== 0070e512  Unwind@0070e512  size=14 ==== */

void Unwind_0070e512(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(*(int *)(unaff_EBP + -0x48) + 0x928));
  return;
}


/* ==== 0070e520  Unwind@0070e520  size=14 ==== */

void Unwind_0070e520(void)

{
  FUN_0040d7d0();
  return;
}


/* ==== 0070e52e  Unwind@0070e52e  size=14 ==== */

void Unwind_0070e52e(void)

{
  FUN_00401ac0();
  return;
}


/* ==== 0070e53c  Unwind@0070e53c  size=14 ==== */

void Unwind_0070e53c(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(*(int *)(unaff_EBP + -0x48) + 0x97c));
  return;
}


/* ==== 0070e54a  Unwind@0070e54a  size=8 ==== */

void Unwind_0070e54a(void)

{
  FUN_004089b0();
  return;
}


/* ==== 0070e552  Unwind@0070e552  size=11 ==== */

void Unwind_0070e552(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x144));
  return;
}


/* ==== 0070e55d  Unwind@0070e55d  size=8 ==== */

void Unwind_0070e55d(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x44));
  return;
}


/* ==== 0070e5a0  Unwind@0070e5a0  size=8 ==== */

void Unwind_0070e5a0(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x38));
  return;
}


/* ==== 0070e5a8  Unwind@0070e5a8  size=8 ==== */

void Unwind_0070e5a8(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x40));
  return;
}


/* ==== 0070e5b0  Unwind@0070e5b0  size=8 ==== */

void Unwind_0070e5b0(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x48));
  return;
}


/* ==== 0070e5e0  Unwind@0070e5e0  size=11 ==== */

void Unwind_0070e5e0(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(*(int *)(unaff_EBP + -0x10) + 0x14));
  return;
}


/* ==== 0070e5eb  Unwind@0070e5eb  size=11 ==== */

void Unwind_0070e5eb(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(*(int *)(unaff_EBP + -0x10) + 0x34));
  return;
}


/* ==== 0070e5f6  Unwind@0070e5f6  size=11 ==== */

void Unwind_0070e5f6(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(*(int *)(unaff_EBP + -0x10) + 0x4c));
  return;
}


/* ==== 0070e601  Unwind@0070e601  size=14 ==== */

void Unwind_0070e601(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(*(int *)(unaff_EBP + -0x10) + 0xa0));
  return;
}


/* ==== 0070e60f  Unwind@0070e60f  size=14 ==== */

void Unwind_0070e60f(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(*(int *)(unaff_EBP + -0x10) + 0xb8));
  return;
}


/* ==== 0070e61d  Unwind@0070e61d  size=14 ==== */

void Unwind_0070e61d(void)

{
  int unaff_EBP;
  
  Concurrency::details::WorkQueue::~WorkQueue((WorkQueue *)(*(int *)(unaff_EBP + -0x10) + 0xd0));
  return;
}


/* ==== 0070e62b  Unwind@0070e62b  size=14 ==== */

void Unwind_0070e62b(void)

{
  FUN_0044e370();
  return;
}


/* ==== 0070e660  Unwind@0070e660  size=8 ==== */

void Unwind_0070e660(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + 8));
  return;
}


/* ==== 0070e690  Unwind@0070e690  size=8 ==== */

void Unwind_0070e690(void)

{
  FUN_00433520();
  return;
}


/* ==== 0070e6c0  Unwind@0070e6c0  size=8 ==== */

void Unwind_0070e6c0(void)

{
  FUN_00433520();
  return;
}


/* ==== 0070e6c8  Unwind@0070e6c8  size=8 ==== */

void Unwind_0070e6c8(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x50));
  return;
}


/* ==== 0070e700  Unwind@0070e700  size=8 ==== */

void Unwind_0070e700(void)

{
  FUN_00433520();
  return;
}


/* ==== 0070e730  Unwind@0070e730  size=8 ==== */

void Unwind_0070e730(void)

{
  FUN_00433520();
  return;
}


/* ==== 0070e760  Unwind@0070e760  size=8 ==== */

void Unwind_0070e760(void)

{
  FUN_00433520();
  return;
}


/* ==== 0070e790  Unwind@0070e790  size=8 ==== */

void Unwind_0070e790(void)

{
  FUN_00433520();
  return;
}


/* ==== 0070e7c0  Unwind@0070e7c0  size=11 ==== */

void Unwind_0070e7c0(void)

{
  FUN_00433520();
  return;
}


/* ==== 0070e7cb  Unwind@0070e7cb  size=11 ==== */

void Unwind_0070e7cb(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0xa0));
  return;
}


/* ==== 0070e7d6  Unwind@0070e7d6  size=11 ==== */

void Unwind_0070e7d6(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x88));
  return;
}


/* ==== 0070e7e1  Unwind@0070e7e1  size=8 ==== */

void Unwind_0070e7e1(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x70));
  return;
}


/* ==== 0070e7e9  Unwind@0070e7e9  size=8 ==== */

void Unwind_0070e7e9(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x58));
  return;
}


/* ==== 0070e7f1  Unwind@0070e7f1  size=8 ==== */

void Unwind_0070e7f1(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x40));
  return;
}


/* ==== 0070e7f9  Unwind@0070e7f9  size=22 ==== */

void Unwind_0070e7f9(void)

{
  int unaff_EBP;
  
  _eh_vector_destructor_iterator_
            ((void *)(unaff_EBP + -0xa0),0x18,6,
             std::function<void___cdecl(void)>::~function<void___cdecl(void)>);
  return;
}


/* ==== 0070e840  Unwind@0070e840  size=8 ==== */

void Unwind_0070e840(void)

{
  int unaff_EBP;
  
  Concurrency::details::WorkQueue::~WorkQueue((WorkQueue *)(unaff_EBP + -0x38));
  return;
}


/* ==== 0070e880  Unwind@0070e880  size=8 ==== */

void Unwind_0070e880(void)

{
  FUN_00433520();
  return;
}


/* ==== 0070e888  Unwind@0070e888  size=8 ==== */

void Unwind_0070e888(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x48));
  return;
}


/* ==== 0070e890  Unwind@0070e890  size=8 ==== */

void Unwind_0070e890(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x58));
  return;
}


/* ==== 0070e898  Unwind@0070e898  size=8 ==== */

void Unwind_0070e898(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x68));
  return;
}


/* ==== 0070e8a0  Unwind@0070e8a0  size=8 ==== */

void Unwind_0070e8a0(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x78));
  return;
}


/* ==== 0070e8d0  Unwind@0070e8d0  size=8 ==== */

void Unwind_0070e8d0(void)

{
  int unaff_EBP;
  
  Concurrency::details::WorkQueue::~WorkQueue((WorkQueue *)(unaff_EBP + -0x38));
  return;
}


/* ==== 0070e8d8  Unwind@0070e8d8  size=8 ==== */

void Unwind_0070e8d8(void)

{
  int unaff_EBP;
  
  Concurrency::details::WorkQueue::~WorkQueue((WorkQueue *)(unaff_EBP + -0x60));
  return;
}


/* ==== 0070e910  Unwind@0070e910  size=8 ==== */

void Unwind_0070e910(void)

{
  FUN_00433520();
  return;
}


/* ==== 0070e918  Unwind@0070e918  size=14 ==== */

void Unwind_0070e918(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(*(int *)(unaff_EBP + -0x10) + 0x9b8));
  return;
}


/* ==== 0070e950  Unwind@0070e950  size=8 ==== */

void Unwind_0070e950(void)

{
  FUN_00433520();
  return;
}


/* ==== 0070e958  Unwind@0070e958  size=14 ==== */

void Unwind_0070e958(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(*(int *)(unaff_EBP + -0x10) + 0x9b4));
  return;
}


/* ==== 0070e990  Unwind@0070e990  size=8 ==== */

void Unwind_0070e990(void)

{
  FUN_00433520();
  return;
}


/* ==== 0070e9c0  Unwind@0070e9c0  size=8 ==== */

void Unwind_0070e9c0(void)

{
  FUN_00433520();
  return;
}


/* ==== 0070e9f0  Unwind@0070e9f0  size=8 ==== */

void Unwind_0070e9f0(void)

{
  FUN_00433520();
  return;
}


/* ==== 0070ea20  Unwind@0070ea20  size=8 ==== */

void Unwind_0070ea20(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x1c));
  return;
}


/* ==== 0070ea50  Unwind@0070ea50  size=8 ==== */

void Unwind_0070ea50(void)

{
  int unaff_EBP;
  
  Concurrency::details::WorkQueue::~WorkQueue((WorkQueue *)(unaff_EBP + -0x38));
  return;
}


/* ==== 0070ea90  Unwind@0070ea90  size=8 ==== */

void Unwind_0070ea90(void)

{
  FUN_00433520();
  return;
}


/* ==== 0070eac0  Unwind@0070eac0  size=8 ==== */

void Unwind_0070eac0(void)

{
  FUN_00433520();
  return;
}


/* ==== 0070eaf0  Unwind@0070eaf0  size=11 ==== */

void Unwind_0070eaf0(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0xa8));
  return;
}


/* ==== 0070eafb  Unwind@0070eafb  size=11 ==== */

void Unwind_0070eafb(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0xb0));
  return;
}


/* ==== 0070eb06  Unwind@0070eb06  size=11 ==== */

void Unwind_0070eb06(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0xb8));
  return;
}


/* ==== 0070eb11  Unwind@0070eb11  size=11 ==== */

void Unwind_0070eb11(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0xc0));
  return;
}


/* ==== 0070eb1c  Unwind@0070eb1c  size=11 ==== */

void Unwind_0070eb1c(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -200));
  return;
}


/* ==== 0070eb60  Unwind@0070eb60  size=8 ==== */

void Unwind_0070eb60(void)

{
  FUN_00433520();
  return;
}


/* ==== 0070eb90  Unwind@0070eb90  size=8 ==== */

void Unwind_0070eb90(void)

{
  FUN_00433520();
  return;
}


/* ==== 0070eb98  Unwind@0070eb98  size=14 ==== */

void Unwind_0070eb98(void)

{
  FUN_00401ac0();
  return;
}


/* ==== 0070ebd0  Unwind@0070ebd0  size=8 ==== */

void Unwind_0070ebd0(void)

{
  FUN_00433520();
  return;
}


/* ==== 0070ebd8  Unwind@0070ebd8  size=8 ==== */

void Unwind_0070ebd8(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x40));
  return;
}


/* ==== 0070ec10  Unwind@0070ec10  size=8 ==== */

void Unwind_0070ec10(void)

{
  FUN_00433520();
  return;
}


/* ==== 0070ec18  Unwind@0070ec18  size=14 ==== */

void Unwind_0070ec18(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(*(int *)(unaff_EBP + -0x5c) + 0x9a0));
  return;
}


/* ==== 0070ec26  Unwind@0070ec26  size=8 ==== */

void Unwind_0070ec26(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x28));
  return;
}


/* ==== 0070ec2e  Unwind@0070ec2e  size=8 ==== */

void Unwind_0070ec2e(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x40));
  return;
}


/* ==== 0070ec36  Unwind@0070ec36  size=8 ==== */

void Unwind_0070ec36(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x78));
  return;
}


/* ==== 0070ec70  Unwind@0070ec70  size=8 ==== */

void Unwind_0070ec70(void)

{
  FUN_0040d7d0();
  return;
}


/* ==== 0070eca0  Unwind@0070eca0  size=8 ==== */

void Unwind_0070eca0(void)

{
  FUN_0040d7d0();
  return;
}


/* ==== 0070eca8  Unwind@0070eca8  size=8 ==== */

void Unwind_0070eca8(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x28));
  return;
}


/* ==== 0070ece0  Unwind@0070ece0  size=8 ==== */

void Unwind_0070ece0(void)

{
  FUN_00433520();
  return;
}


/* ==== 0070ece8  Unwind@0070ece8  size=8 ==== */

void Unwind_0070ece8(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x28));
  return;
}


/* ==== 0070ecf0  Unwind@0070ecf0  size=8 ==== */

void Unwind_0070ecf0(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x40));
  return;
}


/* ==== 0070ed30  Unwind@0070ed30  size=8 ==== */

void Unwind_0070ed30(void)

{
  FUN_00433520();
  return;
}


/* ==== 0070ed38  Unwind@0070ed38  size=8 ==== */

void Unwind_0070ed38(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x3c));
  return;
}


/* ==== 0070ed70  Unwind@0070ed70  size=8 ==== */

void Unwind_0070ed70(void)

{
  FUN_00433520();
  return;
}


/* ==== 0070eda0  Unwind@0070eda0  size=8 ==== */

void Unwind_0070eda0(void)

{
  FUN_00433520();
  return;
}


/* ==== 0070edd0  Unwind@0070edd0  size=8 ==== */

void Unwind_0070edd0(void)

{
  FUN_00433520();
  return;
}


/* ==== 0070edd8  Unwind@0070edd8  size=8 ==== */

void Unwind_0070edd8(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x28));
  return;
}


/* ==== 0070ede0  Unwind@0070ede0  size=8 ==== */

void Unwind_0070ede0(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x58));
  return;
}


/* ==== 0070ee20  Unwind@0070ee20  size=8 ==== */

void Unwind_0070ee20(void)

{
  FUN_00433520();
  return;
}


/* ==== 0070ee28  Unwind@0070ee28  size=8 ==== */

void Unwind_0070ee28(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x28));
  return;
}


/* ==== 0070ee30  Unwind@0070ee30  size=8 ==== */

void Unwind_0070ee30(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x58));
  return;
}


/* ==== 0070ee70  Unwind@0070ee70  size=8 ==== */

void Unwind_0070ee70(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x14));
  return;
}


/* ==== 0070ee78  Unwind@0070ee78  size=8 ==== */

void Unwind_0070ee78(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x1c));
  return;
}


/* ==== 0070eeb0  Unwind@0070eeb0  size=8 ==== */

void Unwind_0070eeb0(void)

{
  FUN_00433520();
  return;
}


/* ==== 0070eee0  Unwind@0070eee0  size=8 ==== */

void Unwind_0070eee0(void)

{
  FUN_00433520();
  return;
}


/* ==== 0070ef10  Unwind@0070ef10  size=8 ==== */

void Unwind_0070ef10(void)

{
  FUN_00433520();
  return;
}


/* ==== 0070ef40  Unwind@0070ef40  size=8 ==== */

void Unwind_0070ef40(void)

{
  int unaff_EBP;
  
  Concurrency::details::WorkQueue::~WorkQueue((WorkQueue *)(unaff_EBP + -0x38));
  return;
}


/* ==== 0070ef80  Unwind@0070ef80  size=8 ==== */

void Unwind_0070ef80(void)

{
  FUN_00433520();
  return;
}


/* ==== 0070ef88  Unwind@0070ef88  size=8 ==== */

void Unwind_0070ef88(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x2c));
  return;
}


/* ==== 0070efc0  Unwind@0070efc0  size=11 ==== */

void Unwind_0070efc0(void)

{
  FUN_00433520();
  return;
}


/* ==== 0070f000  Unwind@0070f000  size=8 ==== */

void Unwind_0070f000(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x20));
  return;
}


/* ==== 0070f030  Unwind@0070f030  size=8 ==== */

void Unwind_0070f030(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x28));
  return;
}


/* ==== 0070f038  Unwind@0070f038  size=8 ==== */

void Unwind_0070f038(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x40));
  return;
}


/* ==== 0070f040  Unwind@0070f040  size=8 ==== */

void Unwind_0070f040(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x58));
  return;
}


/* ==== 0070f080  Unwind@0070f080  size=8 ==== */

void Unwind_0070f080(void)

{
  FUN_00433520();
  return;
}


/* ==== 0070f088  Unwind@0070f088  size=8 ==== */

void Unwind_0070f088(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x28));
  return;
}


/* ==== 0070f090  Unwind@0070f090  size=8 ==== */

void Unwind_0070f090(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x44));
  return;
}


/* ==== 0070f098  Unwind@0070f098  size=8 ==== */

void Unwind_0070f098(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x4c));
  return;
}


/* ==== 0070f0d0  Unwind@0070f0d0  size=8 ==== */

void Unwind_0070f0d0(void)

{
  FUN_00433520();
  return;
}


/* ==== 0070f0d8  Unwind@0070f0d8  size=8 ==== */

void Unwind_0070f0d8(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x20));
  return;
}


/* ==== 0070f0e0  Unwind@0070f0e0  size=8 ==== */

void Unwind_0070f0e0(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x2c));
  return;
}


/* ==== 0070f110  Unwind@0070f110  size=8 ==== */

void Unwind_0070f110(void)

{
  FUN_00433520();
  return;
}


/* ==== 0070f118  Unwind@0070f118  size=8 ==== */

void Unwind_0070f118(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x34));
  return;
}


/* ==== 0070f120  Unwind@0070f120  size=8 ==== */

void Unwind_0070f120(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x28));
  return;
}


/* ==== 0070f160  Unwind@0070f160  size=8 ==== */

void Unwind_0070f160(void)

{
  FUN_00433520();
  return;
}


/* ==== 0070f168  Unwind@0070f168  size=8 ==== */

void Unwind_0070f168(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x70));
  return;
}


/* ==== 0070f170  Unwind@0070f170  size=8 ==== */

void Unwind_0070f170(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x78));
  return;
}


/* ==== 0070f1a0  Unwind@0070f1a0  size=8 ==== */

void Unwind_0070f1a0(void)

{
  FUN_00433520();
  return;
}


/* ==== 0070f1a8  Unwind@0070f1a8  size=8 ==== */

void Unwind_0070f1a8(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x28));
  return;
}


/* ==== 0070f1e0  Unwind@0070f1e0  size=8 ==== */

void Unwind_0070f1e0(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x14));
  return;
}


/* ==== 0070f210  Unwind@0070f210  size=8 ==== */

void Unwind_0070f210(void)

{
  FUN_00433520();
  return;
}


/* ==== 0070f240  Unwind@0070f240  size=8 ==== */

void Unwind_0070f240(void)

{
  FUN_00401ac0();
  return;
}


/* ==== 0070f270  Unwind@0070f270  size=8 ==== */

void Unwind_0070f270(void)

{
  FUN_00433520();
  return;
}


/* ==== 0070f2a0  Unwind@0070f2a0  size=8 ==== */

void Unwind_0070f2a0(void)

{
  FUN_00433520();
  return;
}


/* ==== 0070f2a8  Unwind@0070f2a8  size=8 ==== */

void Unwind_0070f2a8(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x50));
  return;
}


/* ==== 0070f2b0  Unwind@0070f2b0  size=8 ==== */

void Unwind_0070f2b0(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x3c));
  return;
}


/* ==== 0070f2f0  Unwind@0070f2f0  size=8 ==== */

void Unwind_0070f2f0(void)

{
  FUN_00433520();
  return;
}


/* ==== 0070f2f8  Unwind@0070f2f8  size=8 ==== */

void Unwind_0070f2f8(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x28));
  return;
}


/* ==== 0070f300  Unwind@0070f300  size=8 ==== */

void Unwind_0070f300(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x30));
  return;
}


/* ==== 0070f308  Unwind@0070f308  size=8 ==== */

void Unwind_0070f308(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x38));
  return;
}


/* ==== 0070f340  Unwind@0070f340  size=8 ==== */

void Unwind_0070f340(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x20));
  return;
}


/* ==== 0070f370  Unwind@0070f370  size=8 ==== */

void Unwind_0070f370(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x2c));
  return;
}


/* ==== 0070f3a0  Unwind@0070f3a0  size=8 ==== */

void Unwind_0070f3a0(void)

{
  FUN_00405330();
  return;
}


/* ==== 0070f3d0  Unwind@0070f3d0  size=8 ==== */

void Unwind_0070f3d0(void)

{
  FUN_00444c70();
  return;
}


/* ==== 0070f400  Unwind@0070f400  size=8 ==== */

void Unwind_0070f400(void)

{
  FUN_00433520();
  return;
}


/* ==== 0070f408  Unwind@0070f408  size=8 ==== */

void Unwind_0070f408(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x20));
  return;
}


/* ==== 0070f440  Unwind@0070f440  size=8 ==== */

void Unwind_0070f440(void)

{
  FUN_00433520();
  return;
}


/* ==== 0070f448  Unwind@0070f448  size=14 ==== */

void Unwind_0070f448(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(*(int *)(unaff_EBP + -0x10) + 0x9b0));
  return;
}


/* ==== 0070f456  Unwind@0070f456  size=14 ==== */

void Unwind_0070f456(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(*(int *)(unaff_EBP + -0x10) + 0x9c8));
  return;
}


/* ==== 0070f490  Unwind@0070f490  size=11 ==== */

void Unwind_0070f490(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + 0xb4));
  return;
}


/* ==== 0070f49b  Unwind@0070f49b  size=11 ==== */

void Unwind_0070f49b(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + 0x9c));
  return;
}


/* ==== 0070f4a6  Unwind@0070f4a6  size=11 ==== */

void Unwind_0070f4a6(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + 0x84));
  return;
}


/* ==== 0070f4b1  Unwind@0070f4b1  size=8 ==== */

void Unwind_0070f4b1(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + 0x6c));
  return;
}


/* ==== 0070f4b9  Unwind@0070f4b9  size=8 ==== */

void Unwind_0070f4b9(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + 0x54));
  return;
}


/* ==== 0070f4c1  Unwind@0070f4c1  size=8 ==== */

void Unwind_0070f4c1(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + 0x3c));
  return;
}


/* ==== 0070f4c9  Unwind@0070f4c9  size=8 ==== */

void Unwind_0070f4c9(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + 0x24));
  return;
}


/* ==== 0070f4d1  Unwind@0070f4d1  size=11 ==== */

void Unwind_0070f4d1(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x88));
  return;
}


/* ==== 0070f4dc  Unwind@0070f4dc  size=11 ==== */

void Unwind_0070f4dc(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x98));
  return;
}


/* ==== 0070f4e7  Unwind@0070f4e7  size=11 ==== */

void Unwind_0070f4e7(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0xa8));
  return;
}


/* ==== 0070f530  Unwind@0070f530  size=8 ==== */

void Unwind_0070f530(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x18));
  return;
}


/* ==== 0070f560  Unwind@0070f560  size=8 ==== */

void Unwind_0070f560(void)

{
  FUN_00446260();
  return;
}


/* ==== 0070f568  Unwind@0070f568  size=8 ==== */

void Unwind_0070f568(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x1c));
  return;
}


/* ==== 0070f570  Unwind@0070f570  size=8 ==== */

void Unwind_0070f570(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x24));
  return;
}


/* ==== 0070f578  Unwind@0070f578  size=8 ==== */

void Unwind_0070f578(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x2c));
  return;
}


/* ==== 0070f580  Unwind@0070f580  size=8 ==== */

void Unwind_0070f580(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x34));
  return;
}


/* ==== 0070f588  Unwind@0070f588  size=8 ==== */

void Unwind_0070f588(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x3c));
  return;
}


/* ==== 0070f590  Unwind@0070f590  size=8 ==== */

void Unwind_0070f590(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x44));
  return;
}


/* ==== 0070f5c0  Unwind@0070f5c0  size=8 ==== */

void Unwind_0070f5c0(void)

{
  FUN_00446260();
  return;
}


/* ==== 0070f5c8  Unwind@0070f5c8  size=8 ==== */

void Unwind_0070f5c8(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x28));
  return;
}


/* ==== 0070f5d0  Unwind@0070f5d0  size=8 ==== */

void Unwind_0070f5d0(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x30));
  return;
}


/* ==== 0070f5d8  Unwind@0070f5d8  size=8 ==== */

void Unwind_0070f5d8(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x38));
  return;
}


/* ==== 0070f5e0  Unwind@0070f5e0  size=8 ==== */

void Unwind_0070f5e0(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x40));
  return;
}


/* ==== 0070f5e8  Unwind@0070f5e8  size=8 ==== */

void Unwind_0070f5e8(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x48));
  return;
}


/* ==== 0070f5f0  Unwind@0070f5f0  size=8 ==== */

void Unwind_0070f5f0(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x50));
  return;
}


/* ==== 0070f620  Unwind@0070f620  size=8 ==== */

void Unwind_0070f620(void)

{
  FUN_00446260();
  return;
}


/* ==== 0070f628  Unwind@0070f628  size=14 ==== */

void Unwind_0070f628(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(*(int *)(unaff_EBP + -0x74) + 0x9e0));
  return;
}


/* ==== 0070f636  Unwind@0070f636  size=14 ==== */

void Unwind_0070f636(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(*(int *)(unaff_EBP + -0x74) + 0x9f8));
  return;
}


/* ==== 0070f644  Unwind@0070f644  size=8 ==== */

void Unwind_0070f644(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x40));
  return;
}


/* ==== 0070f64c  Unwind@0070f64c  size=8 ==== */

void Unwind_0070f64c(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x28));
  return;
}


/* ==== 0070f654  Unwind@0070f654  size=11 ==== */

void Unwind_0070f654(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0xb8));
  return;
}


/* ==== 0070f65f  Unwind@0070f65f  size=11 ==== */

void Unwind_0070f65f(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -200));
  return;
}


/* ==== 0070f6a0  Unwind@0070f6a0  size=8 ==== */

void Unwind_0070f6a0(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x20));
  return;
}


/* ==== 0070f6a8  Unwind@0070f6a8  size=8 ==== */

void Unwind_0070f6a8(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x28));
  return;
}


/* ==== 0070f6e0  Unwind@0070f6e0  size=8 ==== */

void Unwind_0070f6e0(void)

{
  int unaff_EBP;
  
  Concurrency::details::WorkQueue::~WorkQueue((WorkQueue *)(unaff_EBP + -0x38));
  return;
}


/* ==== 0070f6e8  Unwind@0070f6e8  size=8 ==== */

void Unwind_0070f6e8(void)

{
  int unaff_EBP;
  
  Concurrency::details::WorkQueue::~WorkQueue((WorkQueue *)(unaff_EBP + -0x60));
  return;
}


/* ==== 0070f720  Unwind@0070f720  size=8 ==== */

void Unwind_0070f720(void)

{
  FUN_00446260();
  return;
}


/* ==== 0070f750  Unwind@0070f750  size=8 ==== */

void Unwind_0070f750(void)

{
  FUN_004479d0();
  return;
}


/* ==== 0070f780  Unwind@0070f780  size=8 ==== */

void Unwind_0070f780(void)

{
  FUN_004479d0();
  return;
}


/* ==== 0070f7b0  Unwind@0070f7b0  size=8 ==== */

void Unwind_0070f7b0(void)

{
  int unaff_EBP;
  
  Concurrency::details::WorkQueue::~WorkQueue((WorkQueue *)(unaff_EBP + -0x38));
  return;
}


/* ==== 0070f7f0  Unwind@0070f7f0  size=8 ==== */

void Unwind_0070f7f0(void)

{
  FUN_00433520();
  return;
}


/* ==== 0070f7f8  Unwind@0070f7f8  size=14 ==== */

void Unwind_0070f7f8(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(*(int *)(unaff_EBP + -0x2c) + 0x9ac));
  return;
}


/* ==== 0070f806  Unwind@0070f806  size=8 ==== */

void Unwind_0070f806(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x4c));
  return;
}


/* ==== 0070f840  Unwind@0070f840  size=8 ==== */

void Unwind_0070f840(void)

{
  FUN_00433520();
  return;
}


/* ==== 0070f848  Unwind@0070f848  size=14 ==== */

void Unwind_0070f848(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(*(int *)(unaff_EBP + -0x2c) + 0x9a4));
  return;
}


/* ==== 0070f856  Unwind@0070f856  size=8 ==== */

void Unwind_0070f856(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x44));
  return;
}


/* ==== 0070f890  Unwind@0070f890  size=18 ==== */

void Unwind_0070f890(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x14),0x9ec);
  return;
}


/* ==== 0070f8a2  Unwind@0070f8a2  size=18 ==== */

void Unwind_0070f8a2(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x1c),0x9e8);
  return;
}


/* ==== 0070f8b4  Unwind@0070f8b4  size=18 ==== */

void Unwind_0070f8b4(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x24),0x9e8);
  return;
}


/* ==== 0070f8c6  Unwind@0070f8c6  size=18 ==== */

void Unwind_0070f8c6(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x2c),0x9e8);
  return;
}


/* ==== 0070f8d8  Unwind@0070f8d8  size=18 ==== */

void Unwind_0070f8d8(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x34),0x9e8);
  return;
}


/* ==== 0070f8ea  Unwind@0070f8ea  size=18 ==== */

void Unwind_0070f8ea(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x3c),0x9e8);
  return;
}


/* ==== 0070f8fc  Unwind@0070f8fc  size=18 ==== */

void Unwind_0070f8fc(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x44),0x9e4);
  return;
}


/* ==== 0070f90e  Unwind@0070f90e  size=18 ==== */

void Unwind_0070f90e(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x4c),0x9a0);
  return;
}


/* ==== 0070f920  Unwind@0070f920  size=18 ==== */

void Unwind_0070f920(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x54),0x9a0);
  return;
}


/* ==== 0070f932  Unwind@0070f932  size=18 ==== */

void Unwind_0070f932(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x5c),0x9a4);
  return;
}


/* ==== 0070f944  Unwind@0070f944  size=18 ==== */

void Unwind_0070f944(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -100),0x9a4);
  return;
}


/* ==== 0070f956  Unwind@0070f956  size=18 ==== */

void Unwind_0070f956(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x6c),0x9a8);
  return;
}


/* ==== 0070f968  Unwind@0070f968  size=18 ==== */

void Unwind_0070f968(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x74),0x9a0);
  return;
}


/* ==== 0070f97a  Unwind@0070f97a  size=18 ==== */

void Unwind_0070f97a(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x7c),0x9a0);
  return;
}


/* ==== 0070f98c  Unwind@0070f98c  size=21 ==== */

void Unwind_0070f98c(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x84),0x9e0);
  return;
}


/* ==== 0070f9a1  Unwind@0070f9a1  size=21 ==== */

void Unwind_0070f9a1(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x8c),0x9e0);
  return;
}


/* ==== 0070f9b6  Unwind@0070f9b6  size=21 ==== */

void Unwind_0070f9b6(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x94),0x9a0);
  return;
}


/* ==== 0070f9cb  Unwind@0070f9cb  size=21 ==== */

void Unwind_0070f9cb(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x9c),0x9a4);
  return;
}


/* ==== 0070f9e0  Unwind@0070f9e0  size=21 ==== */

void Unwind_0070f9e0(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0xa4),0x9a0);
  return;
}


/* ==== 0070f9f5  Unwind@0070f9f5  size=21 ==== */

void Unwind_0070f9f5(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0xac),0x9a0);
  return;
}


/* ==== 0070fa0a  Unwind@0070fa0a  size=21 ==== */

void Unwind_0070fa0a(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0xb4),0x9a4);
  return;
}


/* ==== 0070fa1f  Unwind@0070fa1f  size=21 ==== */

void Unwind_0070fa1f(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0xbc),0x9a4);
  return;
}


/* ==== 0070fa34  Unwind@0070fa34  size=21 ==== */

void Unwind_0070fa34(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0xc4),0x9a8);
  return;
}


/* ==== 0070fa49  Unwind@0070fa49  size=21 ==== */

void Unwind_0070fa49(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0xcc),0x9a0);
  return;
}


/* ==== 0070fa5e  Unwind@0070fa5e  size=21 ==== */

void Unwind_0070fa5e(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0xd4),0x9a0);
  return;
}


/* ==== 0070fa73  Unwind@0070fa73  size=21 ==== */

void Unwind_0070fa73(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0xdc),0x9a0);
  return;
}


/* ==== 0070fa88  Unwind@0070fa88  size=21 ==== */

void Unwind_0070fa88(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0xe4),0x9a0);
  return;
}


/* ==== 0070fa9d  Unwind@0070fa9d  size=21 ==== */

void Unwind_0070fa9d(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0xec),0x9a0);
  return;
}


/* ==== 0070fab2  Unwind@0070fab2  size=21 ==== */

void Unwind_0070fab2(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0xf4),0x9a4);
  return;
}


/* ==== 0070fac7  Unwind@0070fac7  size=21 ==== */

void Unwind_0070fac7(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0xfc),0x9a8);
  return;
}


/* ==== 0070fadc  Unwind@0070fadc  size=21 ==== */

void Unwind_0070fadc(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x104),0x9a0);
  return;
}


/* ==== 0070faf1  Unwind@0070faf1  size=21 ==== */

void Unwind_0070faf1(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x10c),0x9a0);
  return;
}


/* ==== 0070fb06  Unwind@0070fb06  size=21 ==== */

void Unwind_0070fb06(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x114),0x9a0);
  return;
}


/* ==== 0070fb1b  Unwind@0070fb1b  size=21 ==== */

void Unwind_0070fb1b(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x11c),0x9a0);
  return;
}


/* ==== 0070fb30  Unwind@0070fb30  size=21 ==== */

void Unwind_0070fb30(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x124),0x9a0);
  return;
}


/* ==== 0070fb45  Unwind@0070fb45  size=21 ==== */

void Unwind_0070fb45(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -300),0x9a0);
  return;
}


/* ==== 0070fb5a  Unwind@0070fb5a  size=21 ==== */

void Unwind_0070fb5a(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x134),0x9a0);
  return;
}


/* ==== 0070fb6f  Unwind@0070fb6f  size=21 ==== */

void Unwind_0070fb6f(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x13c),0x9a0);
  return;
}


/* ==== 0070fb84  Unwind@0070fb84  size=21 ==== */

void Unwind_0070fb84(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x144),0x9a0);
  return;
}


/* ==== 0070fb99  Unwind@0070fb99  size=21 ==== */

void Unwind_0070fb99(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x14c),0x9a0);
  return;
}


/* ==== 0070fbae  Unwind@0070fbae  size=21 ==== */

void Unwind_0070fbae(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x154),0x9a0);
  return;
}


/* ==== 0070fbc3  Unwind@0070fbc3  size=21 ==== */

void Unwind_0070fbc3(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x15c),0x9a0);
  return;
}


/* ==== 0070fbd8  Unwind@0070fbd8  size=21 ==== */

void Unwind_0070fbd8(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x164),0x9a0);
  return;
}


/* ==== 0070fbed  Unwind@0070fbed  size=21 ==== */

void Unwind_0070fbed(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x16c),0x9a0);
  return;
}


/* ==== 0070fc02  Unwind@0070fc02  size=21 ==== */

void Unwind_0070fc02(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x174),0x9a0);
  return;
}


/* ==== 0070fc17  Unwind@0070fc17  size=21 ==== */

void Unwind_0070fc17(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x17c),0x9a0);
  return;
}


/* ==== 0070fc2c  Unwind@0070fc2c  size=21 ==== */

void Unwind_0070fc2c(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x184),0x9a0);
  return;
}


/* ==== 0070fc41  Unwind@0070fc41  size=21 ==== */

void Unwind_0070fc41(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x18c),0x9a0);
  return;
}


/* ==== 0070fc56  Unwind@0070fc56  size=21 ==== */

void Unwind_0070fc56(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x194),0x9a0);
  return;
}


/* ==== 0070fc6b  Unwind@0070fc6b  size=21 ==== */

void Unwind_0070fc6b(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x19c),0x9a0);
  return;
}


/* ==== 0070fc80  Unwind@0070fc80  size=21 ==== */

void Unwind_0070fc80(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x1a4),0x9a0);
  return;
}


/* ==== 0070fc95  Unwind@0070fc95  size=21 ==== */

void Unwind_0070fc95(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x1ac),0x9a0);
  return;
}


/* ==== 0070fcaa  Unwind@0070fcaa  size=21 ==== */

void Unwind_0070fcaa(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x1b4),0x9a4);
  return;
}


/* ==== 0070fcbf  Unwind@0070fcbf  size=21 ==== */

void Unwind_0070fcbf(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x1bc),0x9ac);
  return;
}


/* ==== 0070fcd4  Unwind@0070fcd4  size=21 ==== */

void Unwind_0070fcd4(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x1c4),0x9a0);
  return;
}


/* ==== 0070fce9  Unwind@0070fce9  size=21 ==== */

void Unwind_0070fce9(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x1cc),0x9a4);
  return;
}


/* ==== 0070fcfe  Unwind@0070fcfe  size=21 ==== */

void Unwind_0070fcfe(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x1d4),0x9a0);
  return;
}


/* ==== 0070fd13  Unwind@0070fd13  size=21 ==== */

void Unwind_0070fd13(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x1dc),0x9a0);
  return;
}


/* ==== 0070fd28  Unwind@0070fd28  size=21 ==== */

void Unwind_0070fd28(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x1e4),0x9a0);
  return;
}


/* ==== 0070fd3d  Unwind@0070fd3d  size=21 ==== */

void Unwind_0070fd3d(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x1ec),0x9a0);
  return;
}


/* ==== 0070fd52  Unwind@0070fd52  size=21 ==== */

void Unwind_0070fd52(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -500),0x9a0);
  return;
}


/* ==== 0070fd67  Unwind@0070fd67  size=21 ==== */

void Unwind_0070fd67(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x1fc),0x9a0);
  return;
}


/* ==== 0070fd7c  Unwind@0070fd7c  size=21 ==== */

void Unwind_0070fd7c(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x204),0x9a8);
  return;
}


/* ==== 0070fd91  Unwind@0070fd91  size=21 ==== */

void Unwind_0070fd91(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x20c),0x9a4);
  return;
}


/* ==== 0070fda6  Unwind@0070fda6  size=21 ==== */

void Unwind_0070fda6(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x214),0x9a0);
  return;
}


/* ==== 0070fdbb  Unwind@0070fdbb  size=21 ==== */

void Unwind_0070fdbb(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x21c),0x9a0);
  return;
}


/* ==== 0070fdd0  Unwind@0070fdd0  size=21 ==== */

void Unwind_0070fdd0(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x224),0x9a0);
  return;
}


/* ==== 0070fde5  Unwind@0070fde5  size=21 ==== */

void Unwind_0070fde5(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x22c),0x9a0);
  return;
}


/* ==== 0070fdfa  Unwind@0070fdfa  size=21 ==== */

void Unwind_0070fdfa(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x234),0x9a0);
  return;
}


/* ==== 0070fe0f  Unwind@0070fe0f  size=21 ==== */

void Unwind_0070fe0f(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x23c),0x9a0);
  return;
}


/* ==== 0070fe24  Unwind@0070fe24  size=21 ==== */

void Unwind_0070fe24(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x244),0x9a0);
  return;
}


/* ==== 0070fe39  Unwind@0070fe39  size=21 ==== */

void Unwind_0070fe39(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x24c),0x9a0);
  return;
}


/* ==== 0070fe4e  Unwind@0070fe4e  size=21 ==== */

void Unwind_0070fe4e(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x254),0x9a4);
  return;
}


/* ==== 0070fe63  Unwind@0070fe63  size=21 ==== */

void Unwind_0070fe63(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x25c),0x9a0);
  return;
}


/* ==== 0070fe78  Unwind@0070fe78  size=21 ==== */

void Unwind_0070fe78(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x264),0x9a0);
  return;
}


/* ==== 0070fe8d  Unwind@0070fe8d  size=21 ==== */

void Unwind_0070fe8d(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x26c),0x9a0);
  return;
}


/* ==== 0070fea2  Unwind@0070fea2  size=21 ==== */

void Unwind_0070fea2(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x274),0x9a0);
  return;
}


/* ==== 0070feb7  Unwind@0070feb7  size=21 ==== */

void Unwind_0070feb7(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x27c),0x9a4);
  return;
}


/* ==== 0070fecc  Unwind@0070fecc  size=21 ==== */

void Unwind_0070fecc(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x284),0x9a8);
  return;
}


/* ==== 0070fee1  Unwind@0070fee1  size=21 ==== */

void Unwind_0070fee1(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x28c),0x9a0);
  return;
}


/* ==== 0070fef6  Unwind@0070fef6  size=21 ==== */

void Unwind_0070fef6(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x294),0x9b4);
  return;
}


/* ==== 0070ff0b  Unwind@0070ff0b  size=21 ==== */

void Unwind_0070ff0b(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x29c),0x9b4);
  return;
}


/* ==== 0070ff20  Unwind@0070ff20  size=21 ==== */

void Unwind_0070ff20(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x2a4),0x9b0);
  return;
}


/* ==== 0070ff35  Unwind@0070ff35  size=21 ==== */

void Unwind_0070ff35(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x2ac),0x9a0);
  return;
}


/* ==== 0070ff4a  Unwind@0070ff4a  size=21 ==== */

void Unwind_0070ff4a(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x2b4),0x9dc);
  return;
}


/* ==== 0070ff5f  Unwind@0070ff5f  size=21 ==== */

void Unwind_0070ff5f(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -700),0x9c0);
  return;
}


/* ==== 0070ff74  Unwind@0070ff74  size=21 ==== */

void Unwind_0070ff74(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x2c4),0x9d8);
  return;
}


/* ==== 0070ff89  Unwind@0070ff89  size=21 ==== */

void Unwind_0070ff89(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x2cc),0x9ac);
  return;
}


/* ==== 0070ff9e  Unwind@0070ff9e  size=21 ==== */

void Unwind_0070ff9e(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x2d4),0x9b4);
  return;
}


/* ==== 0070ffb3  Unwind@0070ffb3  size=21 ==== */

void Unwind_0070ffb3(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x2dc),0x9a0);
  return;
}


/* ==== 0070ffc8  Unwind@0070ffc8  size=21 ==== */

void Unwind_0070ffc8(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x2e4),0x9a0);
  return;
}


/* ==== 0070ffdd  Unwind@0070ffdd  size=21 ==== */

void Unwind_0070ffdd(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x2ec),0x9a0);
  return;
}


/* ==== 0070fff2  Unwind@0070fff2  size=21 ==== */

void Unwind_0070fff2(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x2f4),0x9a0);
  return;
}


/* ==== 00710007  Unwind@00710007  size=21 ==== */

void Unwind_00710007(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x2fc),0x9a0);
  return;
}


/* ==== 0071001c  Unwind@0071001c  size=21 ==== */

void Unwind_0071001c(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x304),0x9a0);
  return;
}


/* ==== 00710031  Unwind@00710031  size=21 ==== */

void Unwind_00710031(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x30c),0x9a0);
  return;
}


/* ==== 00710046  Unwind@00710046  size=21 ==== */

void Unwind_00710046(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x314),0x9a0);
  return;
}


/* ==== 0071005b  Unwind@0071005b  size=21 ==== */

void Unwind_0071005b(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x31c),0x9a0);
  return;
}


/* ==== 00710070  Unwind@00710070  size=21 ==== */

void Unwind_00710070(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x324),0x9a0);
  return;
}


/* ==== 00710085  Unwind@00710085  size=21 ==== */

void Unwind_00710085(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x32c),0x9a0);
  return;
}


/* ==== 0071009a  Unwind@0071009a  size=21 ==== */

void Unwind_0071009a(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x334),0x9a0);
  return;
}


/* ==== 007100af  Unwind@007100af  size=21 ==== */

void Unwind_007100af(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x33c),0x9b0);
  return;
}


/* ==== 007100c4  Unwind@007100c4  size=21 ==== */

void Unwind_007100c4(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x344),0x9a0);
  return;
}


/* ==== 007100d9  Unwind@007100d9  size=21 ==== */

void Unwind_007100d9(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x34c),0x9a8);
  return;
}


/* ==== 007100ee  Unwind@007100ee  size=21 ==== */

void Unwind_007100ee(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x354),0x9a0);
  return;
}


/* ==== 00710103  Unwind@00710103  size=21 ==== */

void Unwind_00710103(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x35c),0x9a0);
  return;
}


/* ==== 00710118  Unwind@00710118  size=21 ==== */

void Unwind_00710118(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x364),0x9a4);
  return;
}


/* ==== 0071012d  Unwind@0071012d  size=21 ==== */

void Unwind_0071012d(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x36c),0x9a0);
  return;
}


/* ==== 00710142  Unwind@00710142  size=21 ==== */

void Unwind_00710142(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x374),0x9a0);
  return;
}


/* ==== 00710157  Unwind@00710157  size=21 ==== */

void Unwind_00710157(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x37c),0x9a0);
  return;
}


/* ==== 0071016c  Unwind@0071016c  size=21 ==== */

void Unwind_0071016c(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -900),0xa14);
  return;
}


/* ==== 00710181  Unwind@00710181  size=21 ==== */

void Unwind_00710181(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x38c),0x9ac);
  return;
}


/* ==== 00710196  Unwind@00710196  size=21 ==== */

void Unwind_00710196(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x394),0x9a0);
  return;
}


/* ==== 007101ab  Unwind@007101ab  size=21 ==== */

void Unwind_007101ab(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x39c),0x9a4);
  return;
}


/* ==== 007101c0  Unwind@007101c0  size=21 ==== */

void Unwind_007101c0(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x3a4),0x9a0);
  return;
}


/* ==== 00710200  Unwind@00710200  size=18 ==== */

void Unwind_00710200(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x14),0x9a4);
  return;
}


/* ==== 00710212  Unwind@00710212  size=18 ==== */

void Unwind_00710212(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x1c),0x9a4);
  return;
}


/* ==== 00710224  Unwind@00710224  size=18 ==== */

void Unwind_00710224(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x24),0x9ac);
  return;
}


/* ==== 00710236  Unwind@00710236  size=18 ==== */

void Unwind_00710236(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x2c),0x9a0);
  return;
}


/* ==== 00710248  Unwind@00710248  size=18 ==== */

void Unwind_00710248(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x34),0x9a0);
  return;
}


/* ==== 0071025a  Unwind@0071025a  size=18 ==== */

void Unwind_0071025a(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x3c),0x9ec);
  return;
}


/* ==== 0071026c  Unwind@0071026c  size=18 ==== */

void Unwind_0071026c(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x44),0x9ec);
  return;
}


/* ==== 0071027e  Unwind@0071027e  size=18 ==== */

void Unwind_0071027e(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x4c),0x9ec);
  return;
}


/* ==== 00710290  Unwind@00710290  size=18 ==== */

void Unwind_00710290(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x54),0x9ec);
  return;
}


/* ==== 007102a2  Unwind@007102a2  size=18 ==== */

void Unwind_007102a2(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x5c),0x9a4);
  return;
}


/* ==== 007102b4  Unwind@007102b4  size=18 ==== */

void Unwind_007102b4(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -100),0x9a0);
  return;
}


/* ==== 007102c6  Unwind@007102c6  size=18 ==== */

void Unwind_007102c6(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x6c),0x9a0);
  return;
}


/* ==== 007102d8  Unwind@007102d8  size=18 ==== */

void Unwind_007102d8(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x74),0x9bc);
  return;
}


/* ==== 007102ea  Unwind@007102ea  size=18 ==== */

void Unwind_007102ea(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x7c),0x9bc);
  return;
}


/* ==== 007102fc  Unwind@007102fc  size=21 ==== */

void Unwind_007102fc(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x84),0x9bc);
  return;
}


/* ==== 00710311  Unwind@00710311  size=21 ==== */

void Unwind_00710311(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x8c),0x9bc);
  return;
}


/* ==== 00710326  Unwind@00710326  size=21 ==== */

void Unwind_00710326(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x94),0x9bc);
  return;
}


/* ==== 0071033b  Unwind@0071033b  size=21 ==== */

void Unwind_0071033b(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x9c),0x9bc);
  return;
}


/* ==== 00710350  Unwind@00710350  size=21 ==== */

void Unwind_00710350(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0xa4),0x9bc);
  return;
}


/* ==== 00710365  Unwind@00710365  size=21 ==== */

void Unwind_00710365(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0xac),0x9bc);
  return;
}


/* ==== 0071037a  Unwind@0071037a  size=21 ==== */

void Unwind_0071037a(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0xb4),0x9bc);
  return;
}


/* ==== 0071038f  Unwind@0071038f  size=21 ==== */

void Unwind_0071038f(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0xbc),0x9bc);
  return;
}


/* ==== 007103a4  Unwind@007103a4  size=21 ==== */

void Unwind_007103a4(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0xc4),0x9bc);
  return;
}


/* ==== 007103b9  Unwind@007103b9  size=21 ==== */

void Unwind_007103b9(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0xcc),0x9c4);
  return;
}


/* ==== 007103ce  Unwind@007103ce  size=21 ==== */

void Unwind_007103ce(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0xd4),0x9c4);
  return;
}


/* ==== 007103e3  Unwind@007103e3  size=21 ==== */

void Unwind_007103e3(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0xdc),0x9c4);
  return;
}


/* ==== 007103f8  Unwind@007103f8  size=21 ==== */

void Unwind_007103f8(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0xe4),0x9c4);
  return;
}


/* ==== 0071040d  Unwind@0071040d  size=21 ==== */

void Unwind_0071040d(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0xec),0x9c4);
  return;
}


/* ==== 00710422  Unwind@00710422  size=21 ==== */

void Unwind_00710422(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0xf4),0x9c4);
  return;
}


/* ==== 00710437  Unwind@00710437  size=21 ==== */

void Unwind_00710437(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0xfc),0x9c4);
  return;
}


/* ==== 0071044c  Unwind@0071044c  size=21 ==== */

void Unwind_0071044c(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x104),0x9e0);
  return;
}


/* ==== 00710461  Unwind@00710461  size=21 ==== */

void Unwind_00710461(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x10c),0x9a4);
  return;
}


/* ==== 00710476  Unwind@00710476  size=21 ==== */

void Unwind_00710476(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x114),0x9a0);
  return;
}


/* ==== 0071048b  Unwind@0071048b  size=21 ==== */

void Unwind_0071048b(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x11c),0x9a4);
  return;
}


/* ==== 007104a0  Unwind@007104a0  size=21 ==== */

void Unwind_007104a0(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x124),0x9a0);
  return;
}


/* ==== 007104b5  Unwind@007104b5  size=21 ==== */

void Unwind_007104b5(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -300),0x9e0);
  return;
}


/* ==== 007104ca  Unwind@007104ca  size=21 ==== */

void Unwind_007104ca(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x134),0x9e0);
  return;
}


/* ==== 007104df  Unwind@007104df  size=21 ==== */

void Unwind_007104df(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x13c),0x9e4);
  return;
}


/* ==== 007104f4  Unwind@007104f4  size=21 ==== */

void Unwind_007104f4(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x144),0x9e0);
  return;
}


/* ==== 00710509  Unwind@00710509  size=21 ==== */

void Unwind_00710509(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x14c),0x9bc);
  return;
}


/* ==== 0071051e  Unwind@0071051e  size=21 ==== */

void Unwind_0071051e(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x154),0x9a0);
  return;
}


/* ==== 00710533  Unwind@00710533  size=21 ==== */

void Unwind_00710533(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x15c),0x9a4);
  return;
}


/* ==== 00710548  Unwind@00710548  size=21 ==== */

void Unwind_00710548(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x164),0x9a4);
  return;
}


/* ==== 0071055d  Unwind@0071055d  size=21 ==== */

void Unwind_0071055d(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x16c),0x9b4);
  return;
}


/* ==== 00710572  Unwind@00710572  size=21 ==== */

void Unwind_00710572(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x174),0x9b0);
  return;
}


/* ==== 007105b0  Unwind@007105b0  size=8 ==== */

void Unwind_007105b0(void)

{
  FUN_0044f860();
  return;
}


/* ==== 007105e0  Unwind@007105e0  size=8 ==== */

void Unwind_007105e0(void)

{
  FUN_0044f6f0();
  return;
}


/* ==== 00710610  Unwind@00710610  size=8 ==== */

void Unwind_00710610(void)

{
  FUN_0044fab0();
  return;
}


/* ==== 00710640  Unwind@00710640  size=8 ==== */

void Unwind_00710640(void)

{
  FUN_00450dc0();
  return;
}


/* ==== 00710670  Unwind@00710670  size=8 ==== */

void Unwind_00710670(void)

{
  FUN_0042c650();
  return;
}


/* ==== 007106a0  Unwind@007106a0  size=8 ==== */

void Unwind_007106a0(void)

{
  FUN_00450d90();
  return;
}


/* ==== 007106d0  Unwind@007106d0  size=8 ==== */

void Unwind_007106d0(void)

{
  FUN_00450d90();
  return;
}


/* ==== 00710700  Unwind@00710700  size=8 ==== */

void Unwind_00710700(void)

{
  FUN_00450d40();
  return;
}


/* ==== 00710730  Unwind@00710730  size=8 ==== */

void Unwind_00710730(void)

{
  FUN_00403150();
  return;
}


/* ==== 00710760  Unwind@00710760  size=8 ==== */

void Unwind_00710760(void)

{
  FUN_004517e0();
  return;
}


/* ==== 00710790  Unwind@00710790  size=11 ==== */

void Unwind_00710790(void)

{
  FUN_004039a0();
  return;
}


/* ==== 007107c0  Unwind@007107c0  size=8 ==== */

void Unwind_007107c0(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + 0x24));
  return;
}


/* ==== 007107c8  Unwind@007107c8  size=8 ==== */

void Unwind_007107c8(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + 8));
  return;
}


/* ==== 00710800  Unwind@00710800  size=8 ==== */

void Unwind_00710800(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + 0x2c));
  return;
}


/* ==== 00710808  Unwind@00710808  size=8 ==== */

void Unwind_00710808(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + 8));
  return;
}


/* ==== 00710840  Unwind@00710840  size=11 ==== */

void Unwind_00710840(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(*(int *)(unaff_EBP + -0x10) + 0xc));
  return;
}


/* ==== 00710870  Unwind@00710870  size=11 ==== */

void Unwind_00710870(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(*(int *)(unaff_EBP + -0x10) + 4));
  return;
}


/* ==== 007108a0  Unwind@007108a0  size=11 ==== */

void Unwind_007108a0(void)

{
  FUN_004039a0();
  return;
}


/* ==== 007108d0  Unwind@007108d0  size=8 ==== */

void Unwind_007108d0(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x28));
  return;
}


/* ==== 00710910  Unwind@00710910  size=11 ==== */

void Unwind_00710910(void)

{
  FUN_00454480();
  return;
}


/* ==== 0071091b  Unwind@0071091b  size=17 ==== */

void Unwind_0071091b(void)

{
  FUN_004018f0();
  return;
}


/* ==== 0071092c  Unwind@0071092c  size=17 ==== */

void Unwind_0071092c(void)

{
  FUN_004544b0();
  return;
}


/* ==== 0071093d  Unwind@0071093d  size=17 ==== */

void Unwind_0071093d(void)

{
  FUN_004544d0();
  return;
}


/* ==== 0071094e  Unwind@0071094e  size=17 ==== */

void Unwind_0071094e(void)

{
  FUN_004544d0();
  return;
}


/* ==== 0071095f  Unwind@0071095f  size=17 ==== */

void Unwind_0071095f(void)

{
  FUN_004544f0();
  return;
}


/* ==== 00710970  Unwind@00710970  size=17 ==== */

void Unwind_00710970(void)

{
  FUN_0048a7b0();
  return;
}


/* ==== 00710981  Unwind@00710981  size=17 ==== */

void Unwind_00710981(void)

{
  FUN_0048a7b0();
  return;
}


/* ==== 00710992  Unwind@00710992  size=17 ==== */

void Unwind_00710992(void)

{
  FUN_00454510();
  return;
}


/* ==== 007109a3  Unwind@007109a3  size=17 ==== */

void Unwind_007109a3(void)

{
  FUN_00454510();
  return;
}


/* ==== 007109b4  Unwind@007109b4  size=17 ==== */

void Unwind_007109b4(void)

{
  FUN_00454530();
  return;
}


/* ==== 007109c5  Unwind@007109c5  size=17 ==== */

void Unwind_007109c5(void)

{
  FUN_0044e120();
  return;
}


/* ==== 007109d6  Unwind@007109d6  size=17 ==== */

void Unwind_007109d6(void)

{
  FUN_0048a4f0();
  return;
}


/* ==== 007109e7  Unwind@007109e7  size=17 ==== */

void Unwind_007109e7(void)

{
  FUN_00454550();
  return;
}


/* ==== 007109f8  Unwind@007109f8  size=17 ==== */

void Unwind_007109f8(void)

{
  FUN_00489ce0();
  return;
}


/* ==== 00710a09  Unwind@00710a09  size=17 ==== */

void Unwind_00710a09(void)

{
  FUN_00489ce0();
  return;
}


/* ==== 00710a1a  Unwind@00710a1a  size=17 ==== */

void Unwind_00710a1a(void)

{
  FUN_00489ce0();
  return;
}


/* ==== 00710a2b  Unwind@00710a2b  size=17 ==== */

void Unwind_00710a2b(void)

{
  FUN_0044e120();
  return;
}


/* ==== 00710a3c  Unwind@00710a3c  size=17 ==== */

void Unwind_00710a3c(void)

{
  FUN_004052a0();
  return;
}


/* ==== 00710a4d  Unwind@00710a4d  size=17 ==== */

void Unwind_00710a4d(void)

{
  FUN_004052a0();
  return;
}


/* ==== 00710a5e  Unwind@00710a5e  size=17 ==== */

void Unwind_00710a5e(void)

{
  FUN_004052a0();
  return;
}


/* ==== 00710a6f  Unwind@00710a6f  size=17 ==== */

void Unwind_00710a6f(void)

{
  FUN_004052a0();
  return;
}


/* ==== 00710a80  Unwind@00710a80  size=17 ==== */

void Unwind_00710a80(void)

{
  FUN_004052a0();
  return;
}


/* ==== 00710a91  Unwind@00710a91  size=17 ==== */

void Unwind_00710a91(void)

{
  FUN_004052a0();
  return;
}


/* ==== 00710aa2  Unwind@00710aa2  size=17 ==== */

void Unwind_00710aa2(void)

{
  FUN_004052a0();
  return;
}


/* ==== 00710ab3  Unwind@00710ab3  size=17 ==== */

void Unwind_00710ab3(void)

{
  FUN_004052a0();
  return;
}


/* ==== 00710ac4  Unwind@00710ac4  size=17 ==== */

void Unwind_00710ac4(void)

{
  FUN_004052a0();
  return;
}


/* ==== 00710ad5  Unwind@00710ad5  size=17 ==== */

void Unwind_00710ad5(void)

{
  FUN_004052a0();
  return;
}


/* ==== 00710ae6  Unwind@00710ae6  size=17 ==== */

void Unwind_00710ae6(void)

{
  FUN_004052a0();
  return;
}


/* ==== 00710af7  Unwind@00710af7  size=17 ==== */

void Unwind_00710af7(void)

{
  FUN_004052a0();
  return;
}


/* ==== 00710b08  Unwind@00710b08  size=17 ==== */

void Unwind_00710b08(void)

{
  FUN_004052a0();
  return;
}


/* ==== 00710b19  Unwind@00710b19  size=17 ==== */

void Unwind_00710b19(void)

{
  FUN_004052a0();
  return;
}


/* ==== 00710b2a  Unwind@00710b2a  size=17 ==== */

void Unwind_00710b2a(void)

{
  FUN_0048a140();
  return;
}


/* ==== 00710b3b  Unwind@00710b3b  size=17 ==== */

void Unwind_00710b3b(void)

{
  FUN_0048a140();
  return;
}


/* ==== 00710b4c  Unwind@00710b4c  size=17 ==== */

void Unwind_00710b4c(void)

{
  FUN_0040d7d0();
  return;
}


/* ==== 00710b5d  Unwind@00710b5d  size=17 ==== */

void Unwind_00710b5d(void)

{
  FUN_0048a140();
  return;
}


/* ==== 00710b6e  Unwind@00710b6e  size=17 ==== */

void Unwind_00710b6e(void)

{
  FUN_00454570();
  return;
}


/* ==== 00710b7f  Unwind@00710b7f  size=17 ==== */

void Unwind_00710b7f(void)

{
  FUN_004052a0();
  return;
}


/* ==== 00710b90  Unwind@00710b90  size=17 ==== */

void Unwind_00710b90(void)

{
  FUN_004052a0();
  return;
}


/* ==== 00710ba1  Unwind@00710ba1  size=17 ==== */

void Unwind_00710ba1(void)

{
  FUN_004052a0();
  return;
}


/* ==== 00710bb2  Unwind@00710bb2  size=17 ==== */

void Unwind_00710bb2(void)

{
  FUN_004052a0();
  return;
}


/* ==== 00710bc3  Unwind@00710bc3  size=17 ==== */

void Unwind_00710bc3(void)

{
  FUN_004052a0();
  return;
}


/* ==== 00710bd4  Unwind@00710bd4  size=17 ==== */

void Unwind_00710bd4(void)

{
  FUN_004052a0();
  return;
}


/* ==== 00710be5  Unwind@00710be5  size=17 ==== */

void Unwind_00710be5(void)

{
  FUN_0040c940();
  return;
}


/* ==== 00710bf6  Unwind@00710bf6  size=17 ==== */

void Unwind_00710bf6(void)

{
  FUN_004018f0();
  return;
}


/* ==== 00710c07  Unwind@00710c07  size=17 ==== */

void Unwind_00710c07(void)

{
  FUN_00401ac0();
  return;
}


/* ==== 00710c18  Unwind@00710c18  size=17 ==== */

void Unwind_00710c18(void)

{
  FUN_00489fe0();
  return;
}


/* ==== 00710c29  Unwind@00710c29  size=17 ==== */

void Unwind_00710c29(void)

{
  FUN_004052a0();
  return;
}


/* ==== 00710c3a  Unwind@00710c3a  size=17 ==== */

void Unwind_00710c3a(void)

{
  FUN_0048ab20();
  return;
}


/* ==== 00710c4b  Unwind@00710c4b  size=17 ==== */

void Unwind_00710c4b(void)

{
  FUN_0044e120();
  return;
}


/* ==== 00710c5c  Unwind@00710c5c  size=17 ==== */

void Unwind_00710c5c(void)

{
  FUN_0044e120();
  return;
}


/* ==== 00710ca0  Unwind@00710ca0  size=11 ==== */

void Unwind_00710ca0(void)

{
  FUN_00489ba0();
  return;
}


/* ==== 00710cab  Unwind@00710cab  size=11 ==== */

void Unwind_00710cab(void)

{
  FUN_00456cf0();
  return;
}


/* ==== 00710cb6  Unwind@00710cb6  size=11 ==== */

void Unwind_00710cb6(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x19c));
  return;
}


/* ==== 00710cc1  Unwind@00710cc1  size=11 ==== */

void Unwind_00710cc1(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x1e8));
  return;
}


/* ==== 00710ccc  Unwind@00710ccc  size=11 ==== */

void Unwind_00710ccc(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x174));
  return;
}


/* ==== 00710cd7  Unwind@00710cd7  size=11 ==== */

void Unwind_00710cd7(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x17c));
  return;
}


/* ==== 00710ce2  Unwind@00710ce2  size=11 ==== */

void Unwind_00710ce2(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x184));
  return;
}


/* ==== 00710ced  Unwind@00710ced  size=11 ==== */

void Unwind_00710ced(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x1a4));
  return;
}


/* ==== 00710cf8  Unwind@00710cf8  size=11 ==== */

void Unwind_00710cf8(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x1b0));
  return;
}


/* ==== 00710d03  Unwind@00710d03  size=11 ==== */

void Unwind_00710d03(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x1b8));
  return;
}


/* ==== 00710d0e  Unwind@00710d0e  size=11 ==== */

void Unwind_00710d0e(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x1cc));
  return;
}


/* ==== 00710d19  Unwind@00710d19  size=11 ==== */

void Unwind_00710d19(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x1dc));
  return;
}


/* ==== 00710d60  Unwind@00710d60  size=11 ==== */

void Unwind_00710d60(void)

{
  FUN_00489ba0();
  return;
}


/* ==== 00710d6b  Unwind@00710d6b  size=11 ==== */

void Unwind_00710d6b(void)

{
  FUN_00456cf0();
  return;
}


/* ==== 00710d76  Unwind@00710d76  size=11 ==== */

void Unwind_00710d76(void)

{
  int unaff_EBP;
  
  Concurrency::details::WorkQueue::~WorkQueue((WorkQueue *)(unaff_EBP + -0xb0));
  return;
}


/* ==== 00710d81  Unwind@00710d81  size=11 ==== */

void Unwind_00710d81(void)

{
  int unaff_EBP;
  
  Concurrency::details::WorkQueue::~WorkQueue((WorkQueue *)(unaff_EBP + -0x88));
  return;
}


/* ==== 00710d8c  Unwind@00710d8c  size=8 ==== */

void Unwind_00710d8c(void)

{
  int unaff_EBP;
  
  Concurrency::details::WorkQueue::~WorkQueue((WorkQueue *)(unaff_EBP + -0x60));
  return;
}


/* ==== 00710d94  Unwind@00710d94  size=8 ==== */

void Unwind_00710d94(void)

{
  int unaff_EBP;
  
  Concurrency::details::WorkQueue::~WorkQueue((WorkQueue *)(unaff_EBP + -0x38));
  return;
}


/* ==== 00710d9c  Unwind@00710d9c  size=11 ==== */

void Unwind_00710d9c(void)

{
  int unaff_EBP;
  
  Concurrency::details::WorkQueue::~WorkQueue((WorkQueue *)(unaff_EBP + -0x100));
  return;
}


/* ==== 00710da7  Unwind@00710da7  size=11 ==== */

void Unwind_00710da7(void)

{
  int unaff_EBP;
  
  Concurrency::details::WorkQueue::~WorkQueue((WorkQueue *)(unaff_EBP + -0xd8));
  return;
}


/* ==== 00710df0  Unwind@00710df0  size=11 ==== */

void Unwind_00710df0(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x208));
  return;
}


/* ==== 00710dfb  Unwind@00710dfb  size=11 ==== */

void Unwind_00710dfb(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x21c));
  return;
}


/* ==== 00710e06  Unwind@00710e06  size=11 ==== */

void Unwind_00710e06(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x1fc));
  return;
}


/* ==== 00710e11  Unwind@00710e11  size=11 ==== */

void Unwind_00710e11(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x204));
  return;
}


/* ==== 00710e1c  Unwind@00710e1c  size=11 ==== */

void Unwind_00710e1c(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x20c));
  return;
}


/* ==== 00710e27  Unwind@00710e27  size=11 ==== */

void Unwind_00710e27(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x188));
  return;
}


/* ==== 00710e32  Unwind@00710e32  size=11 ==== */

void Unwind_00710e32(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x170));
  return;
}


/* ==== 00710e3d  Unwind@00710e3d  size=11 ==== */

void Unwind_00710e3d(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x158));
  return;
}


/* ==== 00710e48  Unwind@00710e48  size=11 ==== */

void Unwind_00710e48(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x140));
  return;
}


/* ==== 00710e90  Unwind@00710e90  size=8 ==== */

void Unwind_00710e90(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x70));
  return;
}


/* ==== 00710e98  Unwind@00710e98  size=8 ==== */

void Unwind_00710e98(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x58));
  return;
}


/* ==== 00710ea0  Unwind@00710ea0  size=8 ==== */

void Unwind_00710ea0(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x40));
  return;
}


/* ==== 00710ea8  Unwind@00710ea8  size=8 ==== */

void Unwind_00710ea8(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x28));
  return;
}


/* ==== 00710eb0  Unwind@00710eb0  size=11 ==== */

void Unwind_00710eb0(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0xa4));
  return;
}


/* ==== 00710ef0  Unwind@00710ef0  size=11 ==== */

void Unwind_00710ef0(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0xe0));
  return;
}


/* ==== 00710efb  Unwind@00710efb  size=8 ==== */

void Unwind_00710efb(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x28));
  return;
}


/* ==== 00710f03  Unwind@00710f03  size=11 ==== */

void Unwind_00710f03(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0xf4));
  return;
}


/* ==== 00710f40  Unwind@00710f40  size=8 ==== */

void Unwind_00710f40(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x60));
  return;
}


/* ==== 00710f70  Unwind@00710f70  size=11 ==== */

void Unwind_00710f70(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x9d8));
  return;
}


/* ==== 00710f7b  Unwind@00710f7b  size=11 ==== */

void Unwind_00710f7b(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0xb68));
  return;
}


/* ==== 00710f86  Unwind@00710f86  size=11 ==== */

void Unwind_00710f86(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0xb98));
  return;
}


/* ==== 00710f91  Unwind@00710f91  size=11 ==== */

void Unwind_00710f91(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0xbc8));
  return;
}


/* ==== 00710f9c  Unwind@00710f9c  size=11 ==== */

void Unwind_00710f9c(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x3b8));
  return;
}


/* ==== 00710fa7  Unwind@00710fa7  size=11 ==== */

void Unwind_00710fa7(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x3a0));
  return;
}


/* ==== 00710fb2  Unwind@00710fb2  size=11 ==== */

void Unwind_00710fb2(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x388));
  return;
}


/* ==== 00710fbd  Unwind@00710fbd  size=11 ==== */

void Unwind_00710fbd(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x370));
  return;
}


/* ==== 00710fc8  Unwind@00710fc8  size=11 ==== */

void Unwind_00710fc8(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x358));
  return;
}


/* ==== 00710fd3  Unwind@00710fd3  size=11 ==== */

void Unwind_00710fd3(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x340));
  return;
}


/* ==== 00710fde  Unwind@00710fde  size=11 ==== */

void Unwind_00710fde(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x328));
  return;
}


/* ==== 00710fe9  Unwind@00710fe9  size=11 ==== */

void Unwind_00710fe9(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x298));
  return;
}


/* ==== 00710ff4  Unwind@00710ff4  size=11 ==== */

void Unwind_00710ff4(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x310));
  return;
}


/* ==== 00710fff  Unwind@00710fff  size=11 ==== */

void Unwind_00710fff(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x2f8));
  return;
}


/* ==== 0071100a  Unwind@0071100a  size=11 ==== */

void Unwind_0071100a(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x2e0));
  return;
}


/* ==== 00711015  Unwind@00711015  size=11 ==== */

void Unwind_00711015(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x2c8));
  return;
}


/* ==== 00711020  Unwind@00711020  size=11 ==== */

void Unwind_00711020(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x2b0));
  return;
}


/* ==== 0071102b  Unwind@0071102b  size=11 ==== */

void Unwind_0071102b(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x208));
  return;
}


/* ==== 00711036  Unwind@00711036  size=11 ==== */

void Unwind_00711036(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x280));
  return;
}


/* ==== 00711041  Unwind@00711041  size=11 ==== */

void Unwind_00711041(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x268));
  return;
}


/* ==== 0071104c  Unwind@0071104c  size=11 ==== */

void Unwind_0071104c(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x250));
  return;
}


/* ==== 00711057  Unwind@00711057  size=11 ==== */

void Unwind_00711057(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x1a8));
  return;
}


/* ==== 00711062  Unwind@00711062  size=11 ==== */

void Unwind_00711062(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -400));
  return;
}


/* ==== 0071106d  Unwind@0071106d  size=11 ==== */

void Unwind_0071106d(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x178));
  return;
}


/* ==== 00711078  Unwind@00711078  size=11 ==== */

void Unwind_00711078(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x160));
  return;
}


/* ==== 00711083  Unwind@00711083  size=11 ==== */

void Unwind_00711083(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0xb8));
  return;
}


/* ==== 0071108e  Unwind@0071108e  size=11 ==== */

void Unwind_0071108e(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x130));
  return;
}


/* ==== 00711099  Unwind@00711099  size=11 ==== */

void Unwind_00711099(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x220));
  return;
}


/* ==== 007110a4  Unwind@007110a4  size=11 ==== */

void Unwind_007110a4(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x118));
  return;
}


/* ==== 007110af  Unwind@007110af  size=11 ==== */

void Unwind_007110af(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x100));
  return;
}


/* ==== 007110ba  Unwind@007110ba  size=11 ==== */

void Unwind_007110ba(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0xe8));
  return;
}


/* ==== 007110c5  Unwind@007110c5  size=11 ==== */

void Unwind_007110c5(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0xd0));
  return;
}


/* ==== 007110d0  Unwind@007110d0  size=8 ==== */

void Unwind_007110d0(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x28));
  return;
}


/* ==== 007110d8  Unwind@007110d8  size=11 ==== */

void Unwind_007110d8(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0xa0));
  return;
}


/* ==== 007110e3  Unwind@007110e3  size=11 ==== */

void Unwind_007110e3(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x88));
  return;
}


/* ==== 007110ee  Unwind@007110ee  size=8 ==== */

void Unwind_007110ee(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x70));
  return;
}


/* ==== 007110f6  Unwind@007110f6  size=8 ==== */

void Unwind_007110f6(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x58));
  return;
}


/* ==== 007110fe  Unwind@007110fe  size=8 ==== */

void Unwind_007110fe(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x40));
  return;
}


/* ==== 00711106  Unwind@00711106  size=11 ==== */

void Unwind_00711106(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x238));
  return;
}


/* ==== 00711111  Unwind@00711111  size=11 ==== */

void Unwind_00711111(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x1f0));
  return;
}


/* ==== 0071111c  Unwind@0071111c  size=11 ==== */

void Unwind_0071111c(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x1d8));
  return;
}


/* ==== 00711127  Unwind@00711127  size=11 ==== */

void Unwind_00711127(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x1c0));
  return;
}


/* ==== 00711132  Unwind@00711132  size=11 ==== */

void Unwind_00711132(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x148));
  return;
}


/* ==== 0071113d  Unwind@0071113d  size=11 ==== */

void Unwind_0071113d(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x460));
  return;
}


/* ==== 00711148  Unwind@00711148  size=11 ==== */

void Unwind_00711148(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x448));
  return;
}


/* ==== 00711153  Unwind@00711153  size=11 ==== */

void Unwind_00711153(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x430));
  return;
}


/* ==== 0071115e  Unwind@0071115e  size=11 ==== */

void Unwind_0071115e(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0xafc));
  return;
}


/* ==== 00711169  Unwind@00711169  size=11 ==== */

void Unwind_00711169(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x418));
  return;
}


/* ==== 00711174  Unwind@00711174  size=11 ==== */

void Unwind_00711174(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x400));
  return;
}


/* ==== 0071117f  Unwind@0071117f  size=11 ==== */

void Unwind_0071117f(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -1000));
  return;
}


/* ==== 0071118a  Unwind@0071118a  size=11 ==== */

void Unwind_0071118a(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x3d0));
  return;
}


/* ==== 007111d0  Unwind@007111d0  size=8 ==== */

void Unwind_007111d0(void)

{
  FUN_00401ac0();
  return;
}


/* ==== 007111d8  Unwind@007111d8  size=8 ==== */

void Unwind_007111d8(void)

{
  ~<>();
  return;
}


/* ==== 00711210  Unwind@00711210  size=8 ==== */

void Unwind_00711210(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x7c));
  return;
}


/* ==== 00711218  Unwind@00711218  size=11 ==== */

void Unwind_00711218(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x88));
  return;
}


/* ==== 00711223  Unwind@00711223  size=11 ==== */

void Unwind_00711223(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x9c));
  return;
}


/* ==== 0071122e  Unwind@0071122e  size=11 ==== */

void Unwind_0071122e(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0xa4));
  return;
}


/* ==== 00711239  Unwind@00711239  size=11 ==== */

void Unwind_00711239(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0xb4));
  return;
}


/* ==== 00711244  Unwind@00711244  size=11 ==== */

void Unwind_00711244(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0xbc));
  return;
}


/* ==== 00711280  Unwind@00711280  size=12 ==== */

void Unwind_00711280(void)

{
  FUN_006e4bbf(&DAT_007ca8d4);
  return;
}


/* ==== 007112c0  Unwind@007112c0  size=11 ==== */

void Unwind_007112c0(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x5c4));
  return;
}


/* ==== 007112cb  Unwind@007112cb  size=11 ==== */

void Unwind_007112cb(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x5cc));
  return;
}


/* ==== 007112d6  Unwind@007112d6  size=11 ==== */

void Unwind_007112d6(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x624));
  return;
}


/* ==== 007112e1  Unwind@007112e1  size=11 ==== */

void Unwind_007112e1(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x630));
  return;
}


/* ==== 00711320  Unwind@00711320  size=8 ==== */

void Unwind_00711320(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x28));
  return;
}


/* ==== 00711328  Unwind@00711328  size=8 ==== */

void Unwind_00711328(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x40));
  return;
}


/* ==== 00711360  Unwind@00711360  size=11 ==== */

void Unwind_00711360(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x178));
  return;
}


/* ==== 0071136b  Unwind@0071136b  size=8 ==== */

void Unwind_0071136b(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x28));
  return;
}


/* ==== 00711373  Unwind@00711373  size=11 ==== */

void Unwind_00711373(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x160));
  return;
}


/* ==== 0071137e  Unwind@0071137e  size=11 ==== */

void Unwind_0071137e(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x148));
  return;
}


/* ==== 00711389  Unwind@00711389  size=11 ==== */

void Unwind_00711389(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x130));
  return;
}


/* ==== 00711394  Unwind@00711394  size=11 ==== */

void Unwind_00711394(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x118));
  return;
}


/* ==== 0071139f  Unwind@0071139f  size=11 ==== */

void Unwind_0071139f(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x100));
  return;
}


/* ==== 007113aa  Unwind@007113aa  size=11 ==== */

void Unwind_007113aa(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0xe8));
  return;
}


/* ==== 007113b5  Unwind@007113b5  size=11 ==== */

void Unwind_007113b5(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0xd0));
  return;
}


/* ==== 007113c0  Unwind@007113c0  size=11 ==== */

void Unwind_007113c0(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0xb8));
  return;
}


/* ==== 007113cb  Unwind@007113cb  size=11 ==== */

void Unwind_007113cb(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0xa0));
  return;
}


/* ==== 007113d6  Unwind@007113d6  size=11 ==== */

void Unwind_007113d6(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x88));
  return;
}


/* ==== 007113e1  Unwind@007113e1  size=8 ==== */

void Unwind_007113e1(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x70));
  return;
}


/* ==== 007113e9  Unwind@007113e9  size=8 ==== */

void Unwind_007113e9(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x40));
  return;
}


/* ==== 007113f1  Unwind@007113f1  size=8 ==== */

void Unwind_007113f1(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x58));
  return;
}


/* ==== 00711430  Unwind@00711430  size=11 ==== */

void Unwind_00711430(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x118));
  return;
}


/* ==== 0071143b  Unwind@0071143b  size=11 ==== */

void Unwind_0071143b(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x100));
  return;
}


/* ==== 00711446  Unwind@00711446  size=11 ==== */

void Unwind_00711446(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0xe8));
  return;
}


/* ==== 00711451  Unwind@00711451  size=11 ==== */

void Unwind_00711451(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0xd0));
  return;
}


/* ==== 0071145c  Unwind@0071145c  size=11 ==== */

void Unwind_0071145c(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0xa0));
  return;
}


/* ==== 00711467  Unwind@00711467  size=11 ==== */

void Unwind_00711467(void)

{
  FUN_004039a0();
  return;
}


/* ==== 00711472  Unwind@00711472  size=11 ==== */

void Unwind_00711472(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x88));
  return;
}


/* ==== 0071147d  Unwind@0071147d  size=8 ==== */

void Unwind_0071147d(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x70));
  return;
}


/* ==== 00711485  Unwind@00711485  size=11 ==== */

void Unwind_00711485(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x130));
  return;
}


/* ==== 00711490  Unwind@00711490  size=8 ==== */

void Unwind_00711490(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x58));
  return;
}


/* ==== 00711498  Unwind@00711498  size=11 ==== */

void Unwind_00711498(void)

{
  FUN_004039a0();
  return;
}


/* ==== 007114a3  Unwind@007114a3  size=8 ==== */

void Unwind_007114a3(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x40));
  return;
}


/* ==== 007114ab  Unwind@007114ab  size=8 ==== */

void Unwind_007114ab(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x28));
  return;
}


/* ==== 007114b3  Unwind@007114b3  size=11 ==== */

void Unwind_007114b3(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x358));
  return;
}


/* ==== 007114be  Unwind@007114be  size=11 ==== */

void Unwind_007114be(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x340));
  return;
}


/* ==== 007114c9  Unwind@007114c9  size=11 ==== */

void Unwind_007114c9(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x328));
  return;
}


/* ==== 007114d4  Unwind@007114d4  size=11 ==== */

void Unwind_007114d4(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x310));
  return;
}


/* ==== 007114df  Unwind@007114df  size=11 ==== */

void Unwind_007114df(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x2f8));
  return;
}


/* ==== 007114ea  Unwind@007114ea  size=11 ==== */

void Unwind_007114ea(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x2e0));
  return;
}


/* ==== 007114f5  Unwind@007114f5  size=11 ==== */

void Unwind_007114f5(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x2c8));
  return;
}


/* ==== 00711500  Unwind@00711500  size=11 ==== */

void Unwind_00711500(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0xb8));
  return;
}


/* ==== 0071150b  Unwind@0071150b  size=11 ==== */

void Unwind_0071150b(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x298));
  return;
}


/* ==== 00711516  Unwind@00711516  size=11 ==== */

void Unwind_00711516(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x280));
  return;
}


/* ==== 00711521  Unwind@00711521  size=11 ==== */

void Unwind_00711521(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x268));
  return;
}


/* ==== 0071152c  Unwind@0071152c  size=11 ==== */

void Unwind_0071152c(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x250));
  return;
}


/* ==== 00711537  Unwind@00711537  size=11 ==== */

void Unwind_00711537(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x238));
  return;
}


/* ==== 00711542  Unwind@00711542  size=11 ==== */

void Unwind_00711542(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x220));
  return;
}


/* ==== 0071154d  Unwind@0071154d  size=11 ==== */

void Unwind_0071154d(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x208));
  return;
}


/* ==== 00711558  Unwind@00711558  size=11 ==== */

void Unwind_00711558(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x1f0));
  return;
}


/* ==== 00711563  Unwind@00711563  size=11 ==== */

void Unwind_00711563(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x1d8));
  return;
}


/* ==== 0071156e  Unwind@0071156e  size=11 ==== */

void Unwind_0071156e(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x1c0));
  return;
}


/* ==== 00711579  Unwind@00711579  size=11 ==== */

void Unwind_00711579(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x2b0));
  return;
}


/* ==== 00711584  Unwind@00711584  size=11 ==== */

void Unwind_00711584(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x1a8));
  return;
}


/* ==== 0071158f  Unwind@0071158f  size=11 ==== */

void Unwind_0071158f(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -400));
  return;
}


/* ==== 0071159a  Unwind@0071159a  size=11 ==== */

void Unwind_0071159a(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x178));
  return;
}


/* ==== 007115a5  Unwind@007115a5  size=11 ==== */

void Unwind_007115a5(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x160));
  return;
}


/* ==== 007115b0  Unwind@007115b0  size=11 ==== */

void Unwind_007115b0(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x148));
  return;
}


/* ==== 007115f0  Unwind@007115f0  size=11 ==== */

void Unwind_007115f0(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x88));
  return;
}


/* ==== 007115fb  Unwind@007115fb  size=8 ==== */

void Unwind_007115fb(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x70));
  return;
}


/* ==== 00711603  Unwind@00711603  size=8 ==== */

void Unwind_00711603(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x58));
  return;
}


/* ==== 0071160b  Unwind@0071160b  size=11 ==== */

void Unwind_0071160b(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0xa0));
  return;
}


/* ==== 00711616  Unwind@00711616  size=8 ==== */

void Unwind_00711616(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x40));
  return;
}


/* ==== 0071161e  Unwind@0071161e  size=8 ==== */

void Unwind_0071161e(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x28));
  return;
}


/* ==== 00711626  Unwind@00711626  size=11 ==== */

void Unwind_00711626(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x100));
  return;
}


/* ==== 00711631  Unwind@00711631  size=11 ==== */

void Unwind_00711631(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0xe8));
  return;
}


/* ==== 0071163c  Unwind@0071163c  size=11 ==== */

void Unwind_0071163c(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0xd0));
  return;
}


/* ==== 00711647  Unwind@00711647  size=11 ==== */

void Unwind_00711647(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0xb8));
  return;
}


/* ==== 00711690  Unwind@00711690  size=11 ==== */

void Unwind_00711690(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x100));
  return;
}


/* ==== 0071169b  Unwind@0071169b  size=11 ==== */

void Unwind_0071169b(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0xe8));
  return;
}


/* ==== 007116a6  Unwind@007116a6  size=11 ==== */

void Unwind_007116a6(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0xd0));
  return;
}


/* ==== 007116b1  Unwind@007116b1  size=11 ==== */

void Unwind_007116b1(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x244));
  return;
}


/* ==== 007116bc  Unwind@007116bc  size=11 ==== */

void Unwind_007116bc(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0xb8));
  return;
}


/* ==== 007116c7  Unwind@007116c7  size=11 ==== */

void Unwind_007116c7(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0xa0));
  return;
}


/* ==== 007116d2  Unwind@007116d2  size=11 ==== */

void Unwind_007116d2(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x88));
  return;
}


/* ==== 007116dd  Unwind@007116dd  size=8 ==== */

void Unwind_007116dd(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x70));
  return;
}


/* ==== 007116e5  Unwind@007116e5  size=8 ==== */

void Unwind_007116e5(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x58));
  return;
}


/* ==== 007116ed  Unwind@007116ed  size=8 ==== */

void Unwind_007116ed(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x40));
  return;
}


/* ==== 007116f5  Unwind@007116f5  size=11 ==== */

void Unwind_007116f5(void)

{
  FUN_004039a0();
  return;
}


/* ==== 00711700  Unwind@00711700  size=11 ==== */

void Unwind_00711700(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x24c));
  return;
}


/* ==== 0071170b  Unwind@0071170b  size=8 ==== */

void Unwind_0071170b(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x28));
  return;
}


/* ==== 00711713  Unwind@00711713  size=11 ==== */

void Unwind_00711713(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x130));
  return;
}


/* ==== 0071171e  Unwind@0071171e  size=11 ==== */

void Unwind_0071171e(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x118));
  return;
}


/* ==== 00711760  Unwind@00711760  size=8 ==== */

void Unwind_00711760(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x6c));
  return;
}


/* ==== 00711790  Unwind@00711790  size=11 ==== */

void Unwind_00711790(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x158));
  return;
}


/* ==== 007117d0  Unwind@007117d0  size=8 ==== */

void Unwind_007117d0(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x2c));
  return;
}


/* ==== 007117d8  Unwind@007117d8  size=8 ==== */

void Unwind_007117d8(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x34));
  return;
}


/* ==== 007117e0  Unwind@007117e0  size=8 ==== */

void Unwind_007117e0(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x3c));
  return;
}


/* ==== 007117e8  Unwind@007117e8  size=8 ==== */

void Unwind_007117e8(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x44));
  return;
}


/* ==== 00711820  Unwind@00711820  size=11 ==== */

void Unwind_00711820(void)

{
  FUN_00401ac0();
  return;
}


/* ==== 0071182b  Unwind@0071182b  size=11 ==== */

void Unwind_0071182b(void)

{
  FUN_00401ac0();
  return;
}


/* ==== 00711836  Unwind@00711836  size=11 ==== */

void Unwind_00711836(void)

{
  FUN_00401ac0();
  return;
}


/* ==== 00711841  Unwind@00711841  size=11 ==== */

void Unwind_00711841(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0xf0));
  return;
}


/* ==== 0071184c  Unwind@0071184c  size=11 ==== */

void Unwind_0071184c(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x1b4));
  return;
}


/* ==== 00711890  Unwind@00711890  size=11 ==== */

void Unwind_00711890(void)

{
  FUN_00401ac0();
  return;
}


/* ==== 0071189b  Unwind@0071189b  size=11 ==== */

void Unwind_0071189b(void)

{
  FUN_00401ac0();
  return;
}


/* ==== 007118a6  Unwind@007118a6  size=11 ==== */

void Unwind_007118a6(void)

{
  FUN_00401ac0();
  return;
}


/* ==== 007118b1  Unwind@007118b1  size=11 ==== */

void Unwind_007118b1(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x138));
  return;
}


/* ==== 007118bc  Unwind@007118bc  size=11 ==== */

void Unwind_007118bc(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x278));
  return;
}


/* ==== 007118c7  Unwind@007118c7  size=11 ==== */

void Unwind_007118c7(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x108));
  return;
}


/* ==== 007118d2  Unwind@007118d2  size=11 ==== */

void Unwind_007118d2(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x26c));
  return;
}


/* ==== 007118dd  Unwind@007118dd  size=11 ==== */

void Unwind_007118dd(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x264));
  return;
}


/* ==== 007118e8  Unwind@007118e8  size=11 ==== */

void Unwind_007118e8(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0xf0));
  return;
}


/* ==== 007118f3  Unwind@007118f3  size=11 ==== */

void Unwind_007118f3(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x254));
  return;
}


/* ==== 007118fe  Unwind@007118fe  size=11 ==== */

void Unwind_007118fe(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x268));
  return;
}


/* ==== 00711909  Unwind@00711909  size=11 ==== */

void Unwind_00711909(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x120));
  return;
}


/* ==== 00711914  Unwind@00711914  size=11 ==== */

void Unwind_00711914(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x224));
  return;
}


/* ==== 0071191f  Unwind@0071191f  size=11 ==== */

void Unwind_0071191f(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x250));
  return;
}


/* ==== 00711960  Unwind@00711960  size=11 ==== */

void Unwind_00711960(void)

{
  FUN_0047fed0();
  return;
}


/* ==== 0071196b  Unwind@0071196b  size=11 ==== */

void Unwind_0071196b(void)

{
  FUN_0047fed0();
  return;
}


/* ==== 00711976  Unwind@00711976  size=11 ==== */

void Unwind_00711976(void)

{
  FUN_0047fed0();
  return;
}


/* ==== 00711981  Unwind@00711981  size=11 ==== */

void Unwind_00711981(void)

{
  FUN_0047fed0();
  return;
}


/* ==== 0071198c  Unwind@0071198c  size=11 ==== */

void Unwind_0071198c(void)

{
  FUN_0047fed0();
  return;
}


/* ==== 007119d0  Unwind@007119d0  size=11 ==== */

void Unwind_007119d0(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x1e0));
  return;
}


/* ==== 007119db  Unwind@007119db  size=11 ==== */

void Unwind_007119db(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x1c8));
  return;
}


/* ==== 007119e6  Unwind@007119e6  size=11 ==== */

void Unwind_007119e6(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x1b0));
  return;
}


/* ==== 007119f1  Unwind@007119f1  size=22 ==== */

void Unwind_007119f1(void)

{
  int unaff_EBP;
  
  _eh_vector_destructor_iterator_
            ((void *)(unaff_EBP + -0x1e0),0x18,4,
             std::function<void___cdecl(void)>::~function<void___cdecl(void)>);
  return;
}


/* ==== 00711a07  Unwind@00711a07  size=11 ==== */

void Unwind_00711a07(void)

{
  FUN_0040d7d0();
  return;
}


/* ==== 00711a12  Unwind@00711a12  size=11 ==== */

void Unwind_00711a12(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x2ec));
  return;
}


/* ==== 00711a1d  Unwind@00711a1d  size=11 ==== */

void Unwind_00711a1d(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x2d4));
  return;
}


/* ==== 00711a28  Unwind@00711a28  size=11 ==== */

void Unwind_00711a28(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -700));
  return;
}


/* ==== 00711a33  Unwind@00711a33  size=11 ==== */

void Unwind_00711a33(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x2a4));
  return;
}


/* ==== 00711a3e  Unwind@00711a3e  size=11 ==== */

void Unwind_00711a3e(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x28c));
  return;
}


/* ==== 00711a49  Unwind@00711a49  size=11 ==== */

void Unwind_00711a49(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x274));
  return;
}


/* ==== 00711a54  Unwind@00711a54  size=11 ==== */

void Unwind_00711a54(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x25c));
  return;
}


/* ==== 00711a5f  Unwind@00711a5f  size=11 ==== */

void Unwind_00711a5f(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x244));
  return;
}


/* ==== 00711a6a  Unwind@00711a6a  size=11 ==== */

void Unwind_00711a6a(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x22c));
  return;
}


/* ==== 00711a75  Unwind@00711a75  size=11 ==== */

void Unwind_00711a75(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x214));
  return;
}


/* ==== 00711a80  Unwind@00711a80  size=22 ==== */

void Unwind_00711a80(void)

{
  int unaff_EBP;
  
  _eh_vector_destructor_iterator_
            ((void *)(unaff_EBP + -0x2ec),0x18,0xb,
             std::function<void___cdecl(void)>::~function<void___cdecl(void)>);
  return;
}


/* ==== 00711a96  Unwind@00711a96  size=11 ==== */

void Unwind_00711a96(void)

{
  FUN_0040d7d0();
  return;
}


/* ==== 00711aa1  Unwind@00711aa1  size=11 ==== */

void Unwind_00711aa1(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x17c));
  return;
}


/* ==== 00711aac  Unwind@00711aac  size=11 ==== */

void Unwind_00711aac(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x164));
  return;
}


/* ==== 00711ab7  Unwind@00711ab7  size=11 ==== */

void Unwind_00711ab7(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x14c));
  return;
}


/* ==== 00711ac2  Unwind@00711ac2  size=22 ==== */

void Unwind_00711ac2(void)

{
  int unaff_EBP;
  
  _eh_vector_destructor_iterator_
            ((void *)(unaff_EBP + -0x17c),0x18,4,
             std::function<void___cdecl(void)>::~function<void___cdecl(void)>);
  return;
}


/* ==== 00711ad8  Unwind@00711ad8  size=11 ==== */

void Unwind_00711ad8(void)

{
  FUN_0040d7d0();
  return;
}


/* ==== 00711ae3  Unwind@00711ae3  size=8 ==== */

void Unwind_00711ae3(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x28));
  return;
}


/* ==== 00711aeb  Unwind@00711aeb  size=11 ==== */

void Unwind_00711aeb(void)

{
  FUN_0040d7d0();
  return;
}


/* ==== 00711af6  Unwind@00711af6  size=11 ==== */

void Unwind_00711af6(void)

{
  int unaff_EBP;
  
  Concurrency::details::WorkQueue::~WorkQueue((WorkQueue *)(unaff_EBP + -0xa0));
  return;
}


/* ==== 00711b01  Unwind@00711b01  size=8 ==== */

void Unwind_00711b01(void)

{
  int unaff_EBP;
  
  Concurrency::details::WorkQueue::~WorkQueue((WorkQueue *)(unaff_EBP + -0x50));
  return;
}


/* ==== 00711b09  Unwind@00711b09  size=8 ==== */

void Unwind_00711b09(void)

{
  int unaff_EBP;
  
  Concurrency::details::WorkQueue::~WorkQueue((WorkQueue *)(unaff_EBP + -0x78));
  return;
}


/* ==== 00711b11  Unwind@00711b11  size=11 ==== */

void Unwind_00711b11(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0xe8));
  return;
}


/* ==== 00711b1c  Unwind@00711b1c  size=11 ==== */

void Unwind_00711b1c(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x100));
  return;
}


/* ==== 00711b27  Unwind@00711b27  size=11 ==== */

void Unwind_00711b27(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x118));
  return;
}


/* ==== 00711b32  Unwind@00711b32  size=11 ==== */

void Unwind_00711b32(void)

{
  FUN_004039a0();
  return;
}


/* ==== 00711b70  Unwind@00711b70  size=11 ==== */

void Unwind_00711b70(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0xd0));
  return;
}


/* ==== 00711b7b  Unwind@00711b7b  size=11 ==== */

void Unwind_00711b7b(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0xb8));
  return;
}


/* ==== 00711b86  Unwind@00711b86  size=11 ==== */

void Unwind_00711b86(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0xa0));
  return;
}


/* ==== 00711b91  Unwind@00711b91  size=11 ==== */

void Unwind_00711b91(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x88));
  return;
}


/* ==== 00711b9c  Unwind@00711b9c  size=8 ==== */

void Unwind_00711b9c(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x70));
  return;
}


/* ==== 00711ba4  Unwind@00711ba4  size=8 ==== */

void Unwind_00711ba4(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x58));
  return;
}


/* ==== 00711bac  Unwind@00711bac  size=8 ==== */

void Unwind_00711bac(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x40));
  return;
}


/* ==== 00711bb4  Unwind@00711bb4  size=11 ==== */

void Unwind_00711bb4(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x160));
  return;
}


/* ==== 00711bbf  Unwind@00711bbf  size=11 ==== */

void Unwind_00711bbf(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x148));
  return;
}


/* ==== 00711bca  Unwind@00711bca  size=11 ==== */

void Unwind_00711bca(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x130));
  return;
}


/* ==== 00711bd5  Unwind@00711bd5  size=11 ==== */

void Unwind_00711bd5(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x118));
  return;
}


/* ==== 00711be0  Unwind@00711be0  size=11 ==== */

void Unwind_00711be0(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x100));
  return;
}


/* ==== 00711beb  Unwind@00711beb  size=8 ==== */

void Unwind_00711beb(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x28));
  return;
}


/* ==== 00711bf3  Unwind@00711bf3  size=11 ==== */

void Unwind_00711bf3(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0xe8));
  return;
}


/* ==== 00711bfe  Unwind@00711bfe  size=11 ==== */

void Unwind_00711bfe(void)

{
  FUN_004039a0();
  return;
}


/* ==== 00711c09  Unwind@00711c09  size=11 ==== */

void Unwind_00711c09(void)

{
  FUN_004039a0();
  return;
}


/* ==== 00711c14  Unwind@00711c14  size=11 ==== */

void Unwind_00711c14(void)

{
  FUN_004039a0();
  return;
}


/* ==== 00711c50  Unwind@00711c50  size=25 ==== */

void Unwind_00711c50(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x34) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x34) = *(uint *)(unaff_EBP + -0x34) & 0xfffffffe;
    FUN_00451ea0();
    return;
  }
  return;
}


/* ==== 00711c90  Unwind@00711c90  size=25 ==== */

void Unwind_00711c90(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x24) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x24) = *(uint *)(unaff_EBP + -0x24) & 0xfffffffe;
    FUN_00451ea0();
    return;
  }
  return;
}


/* ==== 00711cd0  Unwind@00711cd0  size=8 ==== */

void Unwind_00711cd0(void)

{
  FUN_00451ea0();
  return;
}


/* ==== 00711cd8  Unwind@00711cd8  size=8 ==== */

void Unwind_00711cd8(void)

{
  FUN_00451ea0();
  return;
}


/* ==== 00711d10  Unwind@00711d10  size=11 ==== */

void Unwind_00711d10(void)

{
  FUN_0044e270();
  return;
}


/* ==== 00711d1b  Unwind@00711d1b  size=11 ==== */

void Unwind_00711d1b(void)

{
  FUN_0044e290();
  return;
}


/* ==== 00711d26  Unwind@00711d26  size=11 ==== */

void Unwind_00711d26(void)

{
  FUN_0044e250();
  return;
}


/* ==== 00711d31  Unwind@00711d31  size=11 ==== */

void Unwind_00711d31(void)

{
  FUN_004039a0();
  return;
}


/* ==== 00711d3c  Unwind@00711d3c  size=11 ==== */

void Unwind_00711d3c(void)

{
  FUN_00450d00();
  return;
}


/* ==== 00711d47  Unwind@00711d47  size=8 ==== */

void Unwind_00711d47(void)

{
  FUN_00450d20();
  return;
}


/* ==== 00711d4f  Unwind@00711d4f  size=8 ==== */

void Unwind_00711d4f(void)

{
  int unaff_EBP;
  
  Concurrency::details::WorkQueue::~WorkQueue((WorkQueue *)(unaff_EBP + -0x38));
  return;
}


/* ==== 00711d57  Unwind@00711d57  size=11 ==== */

void Unwind_00711d57(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x25c));
  return;
}


/* ==== 00711d62  Unwind@00711d62  size=11 ==== */

void Unwind_00711d62(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x244));
  return;
}


/* ==== 00711d6d  Unwind@00711d6d  size=11 ==== */

void Unwind_00711d6d(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x22c));
  return;
}


/* ==== 00711d78  Unwind@00711d78  size=11 ==== */

void Unwind_00711d78(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x214));
  return;
}


/* ==== 00711d83  Unwind@00711d83  size=11 ==== */

void Unwind_00711d83(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x1fc));
  return;
}


/* ==== 00711d8e  Unwind@00711d8e  size=11 ==== */

void Unwind_00711d8e(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x1e4));
  return;
}


/* ==== 00711d99  Unwind@00711d99  size=11 ==== */

void Unwind_00711d99(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x1cc));
  return;
}


/* ==== 00711da4  Unwind@00711da4  size=11 ==== */

void Unwind_00711da4(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x1b4));
  return;
}


/* ==== 00711daf  Unwind@00711daf  size=11 ==== */

void Unwind_00711daf(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x19c));
  return;
}


/* ==== 00711dba  Unwind@00711dba  size=11 ==== */

void Unwind_00711dba(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x184));
  return;
}


/* ==== 00711dc5  Unwind@00711dc5  size=22 ==== */

void Unwind_00711dc5(void)

{
  int unaff_EBP;
  
  _eh_vector_destructor_iterator_
            ((void *)(unaff_EBP + -0x25c),0x18,0xb,
             std::function<void___cdecl(void)>::~function<void___cdecl(void)>);
  return;
}


/* ==== 00711ddb  Unwind@00711ddb  size=11 ==== */

void Unwind_00711ddb(void)

{
  FUN_0040d7d0();
  return;
}


/* ==== 00711de6  Unwind@00711de6  size=11 ==== */

void Unwind_00711de6(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x150));
  return;
}


/* ==== 00711df1  Unwind@00711df1  size=11 ==== */

void Unwind_00711df1(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x138));
  return;
}


/* ==== 00711dfc  Unwind@00711dfc  size=11 ==== */

void Unwind_00711dfc(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x120));
  return;
}


/* ==== 00711e07  Unwind@00711e07  size=22 ==== */

void Unwind_00711e07(void)

{
  int unaff_EBP;
  
  _eh_vector_destructor_iterator_
            ((void *)(unaff_EBP + -0x150),0x18,4,
             std::function<void___cdecl(void)>::~function<void___cdecl(void)>);
  return;
}


/* ==== 00711e1d  Unwind@00711e1d  size=11 ==== */

void Unwind_00711e1d(void)

{
  FUN_0040d7d0();
  return;
}


/* ==== 00711e28  Unwind@00711e28  size=11 ==== */

void Unwind_00711e28(void)

{
  FUN_0040d7d0();
  return;
}


/* ==== 00711e33  Unwind@00711e33  size=11 ==== */

void Unwind_00711e33(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0xbc));
  return;
}


/* ==== 00711e3e  Unwind@00711e3e  size=11 ==== */

void Unwind_00711e3e(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0xd4));
  return;
}


/* ==== 00711e80  Unwind@00711e80  size=8 ==== */

void Unwind_00711e80(void)

{
  FUN_00489e70();
  return;
}


/* ==== 00711eb0  Unwind@00711eb0  size=11 ==== */

void Unwind_00711eb0(void)

{
  FUN_00489ce0();
  return;
}


/* ==== 00711ebb  Unwind@00711ebb  size=11 ==== */

void Unwind_00711ebb(void)

{
  FUN_00489ca0();
  return;
}


/* ==== 00711ef0  Unwind@00711ef0  size=11 ==== */

void Unwind_00711ef0(void)

{
  FUN_0048a380();
  return;
}


/* ==== 00711efb  Unwind@00711efb  size=11 ==== */

void Unwind_00711efb(void)

{
  FUN_00489ca0();
  return;
}


/* ==== 00711f50  Unwind@00711f50  size=8 ==== */

void Unwind_00711f50(void)

{
  FUN_0048f440();
  return;
}


/* ==== 00711f80  Unwind@00711f80  size=8 ==== */

void Unwind_00711f80(void)

{
  FUN_0048f290();
  return;
}


/* ==== 00711fb0  Unwind@00711fb0  size=11 ==== */

void Unwind_00711fb0(void)

{
  FUN_00450d40();
  return;
}


/* ==== 00711fbb  Unwind@00711fbb  size=8 ==== */

void Unwind_00711fbb(void)

{
  FUN_004944e0();
  return;
}


/* ==== 00711fc3  Unwind@00711fc3  size=8 ==== */

void Unwind_00711fc3(void)

{
  FUN_004944e0();
  return;
}


/* ==== 00711ff0  Unwind@00711ff0  size=11 ==== */

void Unwind_00711ff0(void)

{
  FUN_00494490();
  return;
}


/* ==== 00711ffb  Unwind@00711ffb  size=8 ==== */

void Unwind_00711ffb(void)

{
  FUN_004943f0();
  return;
}


/* ==== 00712003  Unwind@00712003  size=8 ==== */

void Unwind_00712003(void)

{
  FUN_004943f0();
  return;
}


/* ==== 00712030  Unwind@00712030  size=11 ==== */

void Unwind_00712030(void)

{
  FUN_004943a0();
  return;
}


/* ==== 0071203b  Unwind@0071203b  size=8 ==== */

void Unwind_0071203b(void)

{
  FUN_00494300();
  return;
}


/* ==== 00712043  Unwind@00712043  size=8 ==== */

void Unwind_00712043(void)

{
  FUN_00494300();
  return;
}


/* ==== 00712070  Unwind@00712070  size=8 ==== */

void Unwind_00712070(void)

{
  FUN_004942b0();
  return;
}


/* ==== 007120a0  Unwind@007120a0  size=8 ==== */

void Unwind_007120a0(void)

{
  FUN_0048fb20();
  return;
}


/* ==== 007120d0  Unwind@007120d0  size=8 ==== */

void Unwind_007120d0(void)

{
  FUN_00494260();
  return;
}


/* ==== 00712100  Unwind@00712100  size=8 ==== */

void Unwind_00712100(void)

{
  FUN_0048fd00();
  return;
}


/* ==== 00712130  Unwind@00712130  size=8 ==== */

void Unwind_00712130(void)

{
  FUN_0048fbc0();
  return;
}


/* ==== 00712160  Unwind@00712160  size=8 ==== */

void Unwind_00712160(void)

{
  FUN_00494210();
  return;
}


/* ==== 00712190  Unwind@00712190  size=8 ==== */

void Unwind_00712190(void)

{
  FUN_004941e0();
  return;
}


/* ==== 007121c0  Unwind@007121c0  size=8 ==== */

void Unwind_007121c0(void)

{
  FUN_0048fcd0();
  return;
}


/* ==== 007121f0  Unwind@007121f0  size=8 ==== */

void Unwind_007121f0(void)

{
  FUN_00494190();
  return;
}


/* ==== 00712220  Unwind@00712220  size=8 ==== */

void Unwind_00712220(void)

{
  FUN_0048fba0();
  return;
}


/* ==== 00712250  Unwind@00712250  size=8 ==== */

void Unwind_00712250(void)

{
  FUN_00494140();
  return;
}


/* ==== 00712280  Unwind@00712280  size=8 ==== */

void Unwind_00712280(void)

{
  FUN_0048fb80();
  return;
}


/* ==== 007122b0  Unwind@007122b0  size=8 ==== */

void Unwind_007122b0(void)

{
  FUN_0048fb60();
  return;
}


/* ==== 007122e0  Unwind@007122e0  size=8 ==== */

void Unwind_007122e0(void)

{
  FUN_0048fb40();
  return;
}


/* ==== 00712310  Unwind@00712310  size=8 ==== */

void Unwind_00712310(void)

{
  FUN_004940f0();
  return;
}


/* ==== 00712340  Unwind@00712340  size=8 ==== */

void Unwind_00712340(void)

{
  FUN_0048fbe0();
  return;
}


/* ==== 00712370  Unwind@00712370  size=8 ==== */

void Unwind_00712370(void)

{
  FUN_00494490();
  return;
}


/* ==== 007123a0  Unwind@007123a0  size=8 ==== */

void Unwind_007123a0(void)

{
  FUN_004943a0();
  return;
}


/* ==== 007123d0  Unwind@007123d0  size=8 ==== */

void Unwind_007123d0(void)

{
  FUN_004940a0();
  return;
}


/* ==== 00712420  Unwind@00712420  size=8 ==== */

void Unwind_00712420(void)

{
  FUN_0048fc10();
  return;
}


/* ==== 00712450  Unwind@00712450  size=8 ==== */

void Unwind_00712450(void)

{
  FUN_0048fc40();
  return;
}


/* ==== 00712480  Unwind@00712480  size=8 ==== */

void Unwind_00712480(void)

{
  FUN_0048fc70();
  return;
}


/* ==== 007124b0  Unwind@007124b0  size=8 ==== */

void Unwind_007124b0(void)

{
  FUN_0048fca0();
  return;
}


/* ==== 007124e0  Unwind@007124e0  size=8 ==== */

void Unwind_007124e0(void)

{
  ~<>();
  return;
}


/* ==== 00712510  Unwind@00712510  size=8 ==== */

void Unwind_00712510(void)

{
  ~<>();
  return;
}


/* ==== 00712540  Unwind@00712540  size=8 ==== */

void Unwind_00712540(void)

{
  FUN_00497730();
  return;
}


/* ==== 00712570  Unwind@00712570  size=8 ==== */

void Unwind_00712570(void)

{
  FUN_00497700();
  return;
}


/* ==== 007125a0  Unwind@007125a0  size=8 ==== */

void Unwind_007125a0(void)

{
  FUN_004976d0();
  return;
}


/* ==== 007125d0  Unwind@007125d0  size=8 ==== */

void Unwind_007125d0(void)

{
  FUN_004976d0();
  return;
}


/* ==== 00712600  Unwind@00712600  size=8 ==== */

void Unwind_00712600(void)

{
  FUN_004976a0();
  return;
}


/* ==== 00712630  Unwind@00712630  size=8 ==== */

void Unwind_00712630(void)

{
  FUN_004976a0();
  return;
}


/* ==== 00712660  Unwind@00712660  size=8 ==== */

void Unwind_00712660(void)

{
  FUN_004941e0();
  return;
}


/* ==== 00712690  Unwind@00712690  size=8 ==== */

void Unwind_00712690(void)

{
  FUN_00497670();
  return;
}


/* ==== 007126c0  Unwind@007126c0  size=8 ==== */

void Unwind_007126c0(void)

{
  ~<>();
  return;
}


/* ==== 007126f0  Unwind@007126f0  size=8 ==== */

void Unwind_007126f0(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x80));
  return;
}


/* ==== 007126f8  Unwind@007126f8  size=11 ==== */

void Unwind_007126f8(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x88));
  return;
}


/* ==== 00712703  Unwind@00712703  size=11 ==== */

void Unwind_00712703(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x90));
  return;
}


/* ==== 0071270e  Unwind@0071270e  size=11 ==== */

void Unwind_0071270e(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x98));
  return;
}


/* ==== 00712740  Unwind@00712740  size=11 ==== */

void Unwind_00712740(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x240));
  return;
}


/* ==== 0071274b  Unwind@0071274b  size=11 ==== */

void Unwind_0071274b(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x248));
  return;
}


/* ==== 00712756  Unwind@00712756  size=11 ==== */

void Unwind_00712756(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x250));
  return;
}


/* ==== 00712761  Unwind@00712761  size=11 ==== */

void Unwind_00712761(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -600));
  return;
}


/* ==== 0071276c  Unwind@0071276c  size=11 ==== */

void Unwind_0071276c(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x260));
  return;
}


/* ==== 00712777  Unwind@00712777  size=11 ==== */

void Unwind_00712777(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x268));
  return;
}


/* ==== 00712782  Unwind@00712782  size=11 ==== */

void Unwind_00712782(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x270));
  return;
}


/* ==== 0071278d  Unwind@0071278d  size=11 ==== */

void Unwind_0071278d(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x278));
  return;
}


/* ==== 00712798  Unwind@00712798  size=11 ==== */

void Unwind_00712798(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x280));
  return;
}


/* ==== 007127a3  Unwind@007127a3  size=11 ==== */

void Unwind_007127a3(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x288));
  return;
}


/* ==== 007127ae  Unwind@007127ae  size=11 ==== */

void Unwind_007127ae(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x290));
  return;
}


/* ==== 007127b9  Unwind@007127b9  size=11 ==== */

void Unwind_007127b9(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x298));
  return;
}


/* ==== 007127c4  Unwind@007127c4  size=11 ==== */

void Unwind_007127c4(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x2a0));
  return;
}


/* ==== 007127cf  Unwind@007127cf  size=11 ==== */

void Unwind_007127cf(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x2a8));
  return;
}


/* ==== 007127da  Unwind@007127da  size=11 ==== */

void Unwind_007127da(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x2b0));
  return;
}


/* ==== 007127e5  Unwind@007127e5  size=11 ==== */

void Unwind_007127e5(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x2b8));
  return;
}


/* ==== 007127f0  Unwind@007127f0  size=11 ==== */

void Unwind_007127f0(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x2c0));
  return;
}


/* ==== 007127fb  Unwind@007127fb  size=11 ==== */

void Unwind_007127fb(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x2c8));
  return;
}


/* ==== 00712806  Unwind@00712806  size=11 ==== */

void Unwind_00712806(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x2d0));
  return;
}


/* ==== 00712811  Unwind@00712811  size=11 ==== */

void Unwind_00712811(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x2d8));
  return;
}


/* ==== 0071281c  Unwind@0071281c  size=11 ==== */

void Unwind_0071281c(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x2e0));
  return;
}


/* ==== 00712827  Unwind@00712827  size=11 ==== */

void Unwind_00712827(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x2e8));
  return;
}


/* ==== 00712832  Unwind@00712832  size=11 ==== */

void Unwind_00712832(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x2f0));
  return;
}


/* ==== 0071283d  Unwind@0071283d  size=11 ==== */

void Unwind_0071283d(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x2f8));
  return;
}


/* ==== 00712848  Unwind@00712848  size=11 ==== */

void Unwind_00712848(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x300));
  return;
}


/* ==== 00712853  Unwind@00712853  size=11 ==== */

void Unwind_00712853(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x308));
  return;
}


/* ==== 0071285e  Unwind@0071285e  size=11 ==== */

void Unwind_0071285e(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x310));
  return;
}


/* ==== 00712869  Unwind@00712869  size=11 ==== */

void Unwind_00712869(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x318));
  return;
}


/* ==== 00712874  Unwind@00712874  size=11 ==== */

void Unwind_00712874(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -800));
  return;
}


/* ==== 0071287f  Unwind@0071287f  size=11 ==== */

void Unwind_0071287f(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x328));
  return;
}


/* ==== 0071288a  Unwind@0071288a  size=11 ==== */

void Unwind_0071288a(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x330));
  return;
}


/* ==== 00712895  Unwind@00712895  size=11 ==== */

void Unwind_00712895(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x338));
  return;
}


/* ==== 007128a0  Unwind@007128a0  size=11 ==== */

void Unwind_007128a0(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x340));
  return;
}


/* ==== 007128ab  Unwind@007128ab  size=11 ==== */

void Unwind_007128ab(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x348));
  return;
}


/* ==== 007128b6  Unwind@007128b6  size=11 ==== */

void Unwind_007128b6(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x350));
  return;
}


/* ==== 007128c1  Unwind@007128c1  size=11 ==== */

void Unwind_007128c1(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x358));
  return;
}


/* ==== 007128cc  Unwind@007128cc  size=11 ==== */

void Unwind_007128cc(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x360));
  return;
}


/* ==== 007128d7  Unwind@007128d7  size=11 ==== */

void Unwind_007128d7(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x368));
  return;
}


/* ==== 007128e2  Unwind@007128e2  size=11 ==== */

void Unwind_007128e2(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x370));
  return;
}


/* ==== 007128ed  Unwind@007128ed  size=11 ==== */

void Unwind_007128ed(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x378));
  return;
}


/* ==== 007128f8  Unwind@007128f8  size=11 ==== */

void Unwind_007128f8(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x380));
  return;
}


/* ==== 00712903  Unwind@00712903  size=11 ==== */

void Unwind_00712903(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x388));
  return;
}


/* ==== 0071290e  Unwind@0071290e  size=11 ==== */

void Unwind_0071290e(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x390));
  return;
}


/* ==== 00712919  Unwind@00712919  size=11 ==== */

void Unwind_00712919(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x398));
  return;
}


/* ==== 00712924  Unwind@00712924  size=11 ==== */

void Unwind_00712924(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x3a0));
  return;
}


/* ==== 0071292f  Unwind@0071292f  size=11 ==== */

void Unwind_0071292f(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x3a8));
  return;
}


/* ==== 0071293a  Unwind@0071293a  size=11 ==== */

void Unwind_0071293a(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x3b0));
  return;
}


/* ==== 00712945  Unwind@00712945  size=11 ==== */

void Unwind_00712945(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x3b8));
  return;
}


/* ==== 00712950  Unwind@00712950  size=11 ==== */

void Unwind_00712950(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x3c0));
  return;
}


/* ==== 00712980  Unwind@00712980  size=8 ==== */

void Unwind_00712980(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x68));
  return;
}


/* ==== 00712988  Unwind@00712988  size=8 ==== */

void Unwind_00712988(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x70));
  return;
}


/* ==== 00712990  Unwind@00712990  size=8 ==== */

void Unwind_00712990(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x7c));
  return;
}


/* ==== 00712998  Unwind@00712998  size=11 ==== */

void Unwind_00712998(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x84));
  return;
}


/* ==== 007129a3  Unwind@007129a3  size=11 ==== */

void Unwind_007129a3(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x90));
  return;
}


/* ==== 007129ae  Unwind@007129ae  size=11 ==== */

void Unwind_007129ae(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x98));
  return;
}


/* ==== 007129b9  Unwind@007129b9  size=11 ==== */

void Unwind_007129b9(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0xa4));
  return;
}


/* ==== 007129c4  Unwind@007129c4  size=11 ==== */

void Unwind_007129c4(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0xac));
  return;
}


/* ==== 007129cf  Unwind@007129cf  size=11 ==== */

void Unwind_007129cf(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0xb8));
  return;
}


/* ==== 007129da  Unwind@007129da  size=11 ==== */

void Unwind_007129da(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0xc0));
  return;
}


/* ==== 007129e5  Unwind@007129e5  size=11 ==== */

void Unwind_007129e5(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0xcc));
  return;
}


/* ==== 007129f0  Unwind@007129f0  size=11 ==== */

void Unwind_007129f0(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0xd4));
  return;
}


/* ==== 007129fb  Unwind@007129fb  size=11 ==== */

void Unwind_007129fb(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0xe0));
  return;
}


/* ==== 00712a06  Unwind@00712a06  size=11 ==== */

void Unwind_00712a06(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0xe8));
  return;
}


/* ==== 00712a11  Unwind@00712a11  size=11 ==== */

void Unwind_00712a11(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0xf4));
  return;
}


/* ==== 00712a1c  Unwind@00712a1c  size=11 ==== */

void Unwind_00712a1c(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0xfc));
  return;
}


/* ==== 00712a27  Unwind@00712a27  size=11 ==== */

void Unwind_00712a27(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x108));
  return;
}


/* ==== 00712a32  Unwind@00712a32  size=11 ==== */

void Unwind_00712a32(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x110));
  return;
}


/* ==== 00712a70  Unwind@00712a70  size=11 ==== */

void Unwind_00712a70(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x140));
  return;
}


/* ==== 00712a7b  Unwind@00712a7b  size=11 ==== */

void Unwind_00712a7b(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x134));
  return;
}


/* ==== 00712a86  Unwind@00712a86  size=11 ==== */

void Unwind_00712a86(void)

{
  FUN_0040c940();
  return;
}


/* ==== 00712a91  Unwind@00712a91  size=11 ==== */

void Unwind_00712a91(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x14c));
  return;
}


/* ==== 00712a9c  Unwind@00712a9c  size=11 ==== */

void Unwind_00712a9c(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x154));
  return;
}


/* ==== 00712aa7  Unwind@00712aa7  size=11 ==== */

void Unwind_00712aa7(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x160));
  return;
}


/* ==== 00712af0  Unwind@00712af0  size=8 ==== */

void Unwind_00712af0(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x60));
  return;
}


/* ==== 00712af8  Unwind@00712af8  size=8 ==== */

void Unwind_00712af8(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x68));
  return;
}


/* ==== 00712b00  Unwind@00712b00  size=8 ==== */

void Unwind_00712b00(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x74));
  return;
}


/* ==== 00712b08  Unwind@00712b08  size=8 ==== */

void Unwind_00712b08(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x7c));
  return;
}


/* ==== 00712b10  Unwind@00712b10  size=11 ==== */

void Unwind_00712b10(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x88));
  return;
}


/* ==== 00712b1b  Unwind@00712b1b  size=11 ==== */

void Unwind_00712b1b(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x90));
  return;
}


/* ==== 00712b26  Unwind@00712b26  size=11 ==== */

void Unwind_00712b26(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x9c));
  return;
}


/* ==== 00712b31  Unwind@00712b31  size=11 ==== */

void Unwind_00712b31(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0xa4));
  return;
}


/* ==== 00712b3c  Unwind@00712b3c  size=11 ==== */

void Unwind_00712b3c(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0xb0));
  return;
}


/* ==== 00712b47  Unwind@00712b47  size=11 ==== */

void Unwind_00712b47(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0xb8));
  return;
}


/* ==== 00712b52  Unwind@00712b52  size=11 ==== */

void Unwind_00712b52(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0xc4));
  return;
}


/* ==== 00712b5d  Unwind@00712b5d  size=11 ==== */

void Unwind_00712b5d(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0xcc));
  return;
}


/* ==== 00712b68  Unwind@00712b68  size=11 ==== */

void Unwind_00712b68(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0xd8));
  return;
}


/* ==== 00712b73  Unwind@00712b73  size=11 ==== */

void Unwind_00712b73(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0xe0));
  return;
}


/* ==== 00712b7e  Unwind@00712b7e  size=11 ==== */

void Unwind_00712b7e(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0xec));
  return;
}


/* ==== 00712b89  Unwind@00712b89  size=11 ==== */

void Unwind_00712b89(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0xf4));
  return;
}


/* ==== 00712bc0  Unwind@00712bc0  size=8 ==== */

void Unwind_00712bc0(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + 8));
  return;
}


/* ==== 00712bc8  Unwind@00712bc8  size=8 ==== */

void Unwind_00712bc8(void)

{
  FUN_004089b0();
  return;
}


/* ==== 00712c00  Unwind@00712c00  size=8 ==== */

void Unwind_00712c00(void)

{
  FUN_0049e5a0();
  return;
}


/* ==== 00712c30  Unwind@00712c30  size=8 ==== */

void Unwind_00712c30(void)

{
  FUN_0049e8a0();
  return;
}


/* ==== 00712c60  Unwind@00712c60  size=8 ==== */

void Unwind_00712c60(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + 0x28));
  return;
}


/* ==== 00712c68  Unwind@00712c68  size=8 ==== */

void Unwind_00712c68(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + 8));
  return;
}


/* ==== 00712ca0  Unwind@00712ca0  size=8 ==== */

void Unwind_00712ca0(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + 8));
  return;
}


/* ==== 00712cd0  Unwind@00712cd0  size=8 ==== */

void Unwind_00712cd0(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x48));
  return;
}


/* ==== 00712cd8  Unwind@00712cd8  size=8 ==== */

void Unwind_00712cd8(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x50));
  return;
}


/* ==== 00712ce0  Unwind@00712ce0  size=8 ==== */

void Unwind_00712ce0(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x58));
  return;
}


/* ==== 00712ce8  Unwind@00712ce8  size=8 ==== */

void Unwind_00712ce8(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x60));
  return;
}


/* ==== 00712cf0  Unwind@00712cf0  size=8 ==== */

void Unwind_00712cf0(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x68));
  return;
}


/* ==== 00712cf8  Unwind@00712cf8  size=8 ==== */

void Unwind_00712cf8(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x70));
  return;
}


/* ==== 00712d00  Unwind@00712d00  size=8 ==== */

void Unwind_00712d00(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x78));
  return;
}


/* ==== 00712d08  Unwind@00712d08  size=8 ==== */

void Unwind_00712d08(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x80));
  return;
}


/* ==== 00712d40  Unwind@00712d40  size=8 ==== */

void Unwind_00712d40(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + 0x28));
  return;
}


/* ==== 00712d48  Unwind@00712d48  size=8 ==== */

void Unwind_00712d48(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + 8));
  return;
}


/* ==== 00712d50  Unwind@00712d50  size=8 ==== */

void Unwind_00712d50(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x18));
  return;
}


/* ==== 00712d80  Unwind@00712d80  size=8 ==== */

void Unwind_00712d80(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + 0xc));
  return;
}


/* ==== 00712d88  Unwind@00712d88  size=25 ==== */

void Unwind_00712d88(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
    FUN_0040c940();
    return;
  }
  return;
}


/* ==== 00712dd0  Unwind@00712dd0  size=14 ==== */

void Unwind_00712dd0(void)

{
  FUN_0040c940();
  return;
}


/* ==== 00712dde  Unwind@00712dde  size=17 ==== */

void Unwind_00712dde(void)

{
  FUN_00401ac0();
  return;
}


/* ==== 00712def  Unwind@00712def  size=17 ==== */

void Unwind_00712def(void)

{
  FUN_0044e120();
  return;
}


/* ==== 00712e00  Unwind@00712e00  size=17 ==== */

void Unwind_00712e00(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(*(int *)(unaff_EBP + -0xa4) + 0xc4));
  return;
}


/* ==== 00712e40  Unwind@00712e40  size=11 ==== */

void Unwind_00712e40(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x26c));
  return;
}


/* ==== 00712e4b  Unwind@00712e4b  size=11 ==== */

void Unwind_00712e4b(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x218));
  return;
}


/* ==== 00712e56  Unwind@00712e56  size=11 ==== */

void Unwind_00712e56(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x22c));
  return;
}


/* ==== 00712e61  Unwind@00712e61  size=11 ==== */

void Unwind_00712e61(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x238));
  return;
}


/* ==== 00712e6c  Unwind@00712e6c  size=11 ==== */

void Unwind_00712e6c(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x244));
  return;
}


/* ==== 00712e77  Unwind@00712e77  size=11 ==== */

void Unwind_00712e77(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x250));
  return;
}


/* ==== 00712e82  Unwind@00712e82  size=11 ==== */

void Unwind_00712e82(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x25c));
  return;
}


/* ==== 00712e8d  Unwind@00712e8d  size=11 ==== */

void Unwind_00712e8d(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x268));
  return;
}


/* ==== 00712e98  Unwind@00712e98  size=11 ==== */

void Unwind_00712e98(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x274));
  return;
}


/* ==== 00712ea3  Unwind@00712ea3  size=11 ==== */

void Unwind_00712ea3(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x280));
  return;
}


/* ==== 00712eae  Unwind@00712eae  size=11 ==== */

void Unwind_00712eae(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x2ac));
  return;
}


/* ==== 00712eb9  Unwind@00712eb9  size=11 ==== */

void Unwind_00712eb9(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x298));
  return;
}


/* ==== 00712f00  Unwind@00712f00  size=8 ==== */

void Unwind_00712f00(void)

{
  FUN_004676e0();
  return;
}


/* ==== 00712f30  Unwind@00712f30  size=8 ==== */

void Unwind_00712f30(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + 0x10));
  return;
}


/* ==== 00712f38  Unwind@00712f38  size=11 ==== */

void Unwind_00712f38(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x28c));
  return;
}


/* ==== 00712f43  Unwind@00712f43  size=11 ==== */

void Unwind_00712f43(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x294));
  return;
}


/* ==== 00712f4e  Unwind@00712f4e  size=11 ==== */

void Unwind_00712f4e(void)

{
  FUN_0040c940();
  return;
}


/* ==== 00712f59  Unwind@00712f59  size=11 ==== */

void Unwind_00712f59(void)

{
  FUN_00407a80();
  return;
}


/* ==== 00712f64  Unwind@00712f64  size=11 ==== */

void Unwind_00712f64(void)

{
  FUN_00403a10();
  return;
}


/* ==== 00712f6f  Unwind@00712f6f  size=11 ==== */

void Unwind_00712f6f(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x2a0));
  return;
}


/* ==== 00712f7a  Unwind@00712f7a  size=11 ==== */

void Unwind_00712f7a(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x2a8));
  return;
}


/* ==== 00712fc0  Unwind@00712fc0  size=8 ==== */

void Unwind_00712fc0(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x7c));
  return;
}


/* ==== 00712fc8  Unwind@00712fc8  size=11 ==== */

void Unwind_00712fc8(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x84));
  return;
}


/* ==== 00712fd3  Unwind@00712fd3  size=11 ==== */

void Unwind_00712fd3(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x90));
  return;
}


/* ==== 00712fde  Unwind@00712fde  size=11 ==== */

void Unwind_00712fde(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x98));
  return;
}


/* ==== 00712fe9  Unwind@00712fe9  size=11 ==== */

void Unwind_00712fe9(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0xa4));
  return;
}


/* ==== 00712ff4  Unwind@00712ff4  size=11 ==== */

void Unwind_00712ff4(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0xac));
  return;
}


/* ==== 00712fff  Unwind@00712fff  size=11 ==== */

void Unwind_00712fff(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0xb8));
  return;
}


/* ==== 0071300a  Unwind@0071300a  size=11 ==== */

void Unwind_0071300a(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0xc0));
  return;
}


/* ==== 00713015  Unwind@00713015  size=11 ==== */

void Unwind_00713015(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0xcc));
  return;
}


/* ==== 00713020  Unwind@00713020  size=11 ==== */

void Unwind_00713020(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0xd4));
  return;
}


/* ==== 0071302b  Unwind@0071302b  size=11 ==== */

void Unwind_0071302b(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0xe0));
  return;
}


/* ==== 00713036  Unwind@00713036  size=11 ==== */

void Unwind_00713036(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0xe8));
  return;
}


/* ==== 00713041  Unwind@00713041  size=11 ==== */

void Unwind_00713041(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0xf4));
  return;
}


/* ==== 0071304c  Unwind@0071304c  size=11 ==== */

void Unwind_0071304c(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0xfc));
  return;
}


/* ==== 00713080  Unwind@00713080  size=8 ==== */

void Unwind_00713080(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x40));
  return;
}


/* ==== 00713088  Unwind@00713088  size=8 ==== */

void Unwind_00713088(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x48));
  return;
}


/* ==== 00713090  Unwind@00713090  size=8 ==== */

void Unwind_00713090(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x50));
  return;
}


/* ==== 00713098  Unwind@00713098  size=8 ==== */

void Unwind_00713098(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x58));
  return;
}


/* ==== 007130a0  Unwind@007130a0  size=8 ==== */

void Unwind_007130a0(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -100));
  return;
}


/* ==== 007130a8  Unwind@007130a8  size=8 ==== */

void Unwind_007130a8(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x6c));
  return;
}


/* ==== 007130e0  Unwind@007130e0  size=11 ==== */

void Unwind_007130e0(void)

{
  FUN_00489ba0();
  return;
}


/* ==== 007130eb  Unwind@007130eb  size=11 ==== */

void Unwind_007130eb(void)

{
  FUN_00456cf0();
  return;
}


/* ==== 007130f6  Unwind@007130f6  size=11 ==== */

void Unwind_007130f6(void)

{
  FUN_004018f0();
  return;
}


/* ==== 00713101  Unwind@00713101  size=11 ==== */

void Unwind_00713101(void)

{
  FUN_004039a0();
  return;
}


/* ==== 0071310c  Unwind@0071310c  size=11 ==== */

void Unwind_0071310c(void)

{
  FUN_004018f0();
  return;
}


/* ==== 00713117  Unwind@00713117  size=11 ==== */

void Unwind_00713117(void)

{
  FUN_004039a0();
  return;
}


/* ==== 00713122  Unwind@00713122  size=11 ==== */

void Unwind_00713122(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x368));
  return;
}


/* ==== 0071312d  Unwind@0071312d  size=11 ==== */

void Unwind_0071312d(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0xab0));
  return;
}


/* ==== 00713138  Unwind@00713138  size=11 ==== */

void Unwind_00713138(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0xab8));
  return;
}


/* ==== 00713143  Unwind@00713143  size=11 ==== */

void Unwind_00713143(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0xac0));
  return;
}


/* ==== 0071314e  Unwind@0071314e  size=11 ==== */

void Unwind_0071314e(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0xac8));
  return;
}


/* ==== 00713159  Unwind@00713159  size=11 ==== */

void Unwind_00713159(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0xad4));
  return;
}


/* ==== 00713164  Unwind@00713164  size=11 ==== */

void Unwind_00713164(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0xadc));
  return;
}


/* ==== 0071316f  Unwind@0071316f  size=11 ==== */

void Unwind_0071316f(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x338));
  return;
}


/* ==== 0071317a  Unwind@0071317a  size=11 ==== */

void Unwind_0071317a(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x308));
  return;
}


/* ==== 00713185  Unwind@00713185  size=11 ==== */

void Unwind_00713185(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x2d8));
  return;
}


/* ==== 00713190  Unwind@00713190  size=11 ==== */

void Unwind_00713190(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x2a8));
  return;
}


/* ==== 0071319b  Unwind@0071319b  size=11 ==== */

void Unwind_0071319b(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x3c8));
  return;
}


/* ==== 007131a6  Unwind@007131a6  size=11 ==== */

void Unwind_007131a6(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x290));
  return;
}


/* ==== 007131b1  Unwind@007131b1  size=11 ==== */

void Unwind_007131b1(void)

{
  FUN_00411b80();
  return;
}


/* ==== 007131bc  Unwind@007131bc  size=11 ==== */

void Unwind_007131bc(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x248));
  return;
}


/* ==== 007131c7  Unwind@007131c7  size=11 ==== */

void Unwind_007131c7(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x278));
  return;
}


/* ==== 007131d2  Unwind@007131d2  size=11 ==== */

void Unwind_007131d2(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x4a0));
  return;
}


/* ==== 007131dd  Unwind@007131dd  size=11 ==== */

void Unwind_007131dd(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0xb04));
  return;
}


/* ==== 007131e8  Unwind@007131e8  size=11 ==== */

void Unwind_007131e8(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x4b8));
  return;
}


/* ==== 007131f3  Unwind@007131f3  size=11 ==== */

void Unwind_007131f3(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0xb0c));
  return;
}


/* ==== 007131fe  Unwind@007131fe  size=11 ==== */

void Unwind_007131fe(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0xa04));
  return;
}


/* ==== 00713209  Unwind@00713209  size=11 ==== */

void Unwind_00713209(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0xa14));
  return;
}


/* ==== 00713214  Unwind@00713214  size=11 ==== */

void Unwind_00713214(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0xa1c));
  return;
}


/* ==== 0071321f  Unwind@0071321f  size=11 ==== */

void Unwind_0071321f(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0xa24));
  return;
}


/* ==== 0071322a  Unwind@0071322a  size=11 ==== */

void Unwind_0071322a(void)

{
  FUN_00407a80();
  return;
}


/* ==== 00713235  Unwind@00713235  size=11 ==== */

void Unwind_00713235(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0xa2c));
  return;
}


/* ==== 00713240  Unwind@00713240  size=11 ==== */

void Unwind_00713240(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0xa34));
  return;
}


/* ==== 0071324b  Unwind@0071324b  size=11 ==== */

void Unwind_0071324b(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0xa3c));
  return;
}


/* ==== 00713256  Unwind@00713256  size=11 ==== */

void Unwind_00713256(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0xa44));
  return;
}


/* ==== 00713261  Unwind@00713261  size=11 ==== */

void Unwind_00713261(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0xa4c));
  return;
}


/* ==== 0071326c  Unwind@0071326c  size=11 ==== */

void Unwind_0071326c(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0xa54));
  return;
}


/* ==== 00713277  Unwind@00713277  size=11 ==== */

void Unwind_00713277(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0xa5c));
  return;
}


/* ==== 00713282  Unwind@00713282  size=11 ==== */

void Unwind_00713282(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0xa64));
  return;
}


/* ==== 0071328d  Unwind@0071328d  size=11 ==== */

void Unwind_0071328d(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0xa6c));
  return;
}


/* ==== 00713298  Unwind@00713298  size=11 ==== */

void Unwind_00713298(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x440));
  return;
}


/* ==== 007132e0  Unwind@007132e0  size=11 ==== */

void Unwind_007132e0(void)

{
  FUN_00403580();
  return;
}


/* ==== 007132eb  Unwind@007132eb  size=8 ==== */

void Unwind_007132eb(void)

{
  FUN_004a6e30();
  return;
}


/* ==== 007132f3  Unwind@007132f3  size=8 ==== */

void Unwind_007132f3(void)

{
  FUN_004a6e30();
  return;
}


/* ==== 00713320  Unwind@00713320  size=11 ==== */

void Unwind_00713320(void)

{
  FUN_00450d00();
  return;
}


/* ==== 0071332b  Unwind@0071332b  size=14 ==== */

void Unwind_0071332b(void)

{
  FUN_00450d00();
  return;
}


/* ==== 00713339  Unwind@00713339  size=14 ==== */

void Unwind_00713339(void)

{
  FUN_00450d00();
  return;
}


/* ==== 00713347  Unwind@00713347  size=14 ==== */

void Unwind_00713347(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(*(int *)(unaff_EBP + -0x10) + 0xf4));
  return;
}


/* ==== 00713355  Unwind@00713355  size=14 ==== */

void Unwind_00713355(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(*(int *)(unaff_EBP + -0x10) + 0x110));
  return;
}


/* ==== 00713390  Unwind@00713390  size=8 ==== */

void Unwind_00713390(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + 0x24));
  return;
}


/* ==== 00713398  Unwind@00713398  size=8 ==== */

void Unwind_00713398(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x20));
  return;
}


/* ==== 007133d0  Unwind@007133d0  size=8 ==== */

void Unwind_007133d0(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + 0x24));
  return;
}


/* ==== 007133d8  Unwind@007133d8  size=11 ==== */

void Unwind_007133d8(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x16c));
  return;
}


/* ==== 007133e3  Unwind@007133e3  size=11 ==== */

void Unwind_007133e3(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x88));
  return;
}


/* ==== 007133ee  Unwind@007133ee  size=11 ==== */

void Unwind_007133ee(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0xa0));
  return;
}


/* ==== 007133f9  Unwind@007133f9  size=11 ==== */

void Unwind_007133f9(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0xdc));
  return;
}


/* ==== 00713404  Unwind@00713404  size=11 ==== */

void Unwind_00713404(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0xf4));
  return;
}


/* ==== 0071340f  Unwind@0071340f  size=8 ==== */

void Unwind_0071340f(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x58));
  return;
}


/* ==== 00713417  Unwind@00713417  size=8 ==== */

void Unwind_00713417(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x40));
  return;
}


/* ==== 0071341f  Unwind@0071341f  size=19 ==== */

void Unwind_0071341f(void)

{
  int unaff_EBP;
  
  _eh_vector_destructor_iterator_
            ((void *)(unaff_EBP + -0x58),0x18,3,
             std::function<void___cdecl(void)>::~function<void___cdecl(void)>);
  return;
}


/* ==== 00713470  Unwind@00713470  size=8 ==== */

void Unwind_00713470(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x40));
  return;
}


/* ==== 007134a0  Unwind@007134a0  size=8 ==== */

void Unwind_007134a0(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + 0x38));
  return;
}


/* ==== 007134a8  Unwind@007134a8  size=8 ==== */

void Unwind_007134a8(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + 0x18));
  return;
}


/* ==== 007134b0  Unwind@007134b0  size=11 ==== */

void Unwind_007134b0(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x150));
  return;
}


/* ==== 007134f0  Unwind@007134f0  size=8 ==== */

void Unwind_007134f0(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x28));
  return;
}


/* ==== 007134f8  Unwind@007134f8  size=8 ==== */

void Unwind_007134f8(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x30));
  return;
}


/* ==== 00713530  Unwind@00713530  size=8 ==== */

void Unwind_00713530(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + 0xc));
  return;
}


/* ==== 00713538  Unwind@00713538  size=8 ==== */

void Unwind_00713538(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x1c));
  return;
}


/* ==== 00713570  Unwind@00713570  size=8 ==== */

void Unwind_00713570(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + 0x3c));
  return;
}


/* ==== 00713578  Unwind@00713578  size=8 ==== */

void Unwind_00713578(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + 0x10));
  return;
}


/* ==== 00713580  Unwind@00713580  size=8 ==== */

void Unwind_00713580(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x1c));
  return;
}


/* ==== 007135b0  Unwind@007135b0  size=8 ==== */

void Unwind_007135b0(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + 0x18));
  return;
}


/* ==== 007135e0  Unwind@007135e0  size=8 ==== */

void Unwind_007135e0(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + 0x3c));
  return;
}


/* ==== 007135e8  Unwind@007135e8  size=8 ==== */

void Unwind_007135e8(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + 0x10));
  return;
}


/* ==== 007135f0  Unwind@007135f0  size=8 ==== */

void Unwind_007135f0(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x14));
  return;
}


/* ==== 00713620  Unwind@00713620  size=8 ==== */

void Unwind_00713620(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + 8));
  return;
}


/* ==== 00713650  Unwind@00713650  size=8 ==== */

void Unwind_00713650(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + 0xc));
  return;
}


/* ==== 00713680  Unwind@00713680  size=11 ==== */

void Unwind_00713680(void)

{
  FUN_0044e120();
  return;
}


/* ==== 0071368b  Unwind@0071368b  size=11 ==== */

void Unwind_0071368b(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(*(int *)(unaff_EBP + -0x10) + 0x3c));
  return;
}


/* ==== 00713696  Unwind@00713696  size=14 ==== */

void Unwind_00713696(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(*(int *)(unaff_EBP + -0x10) + 0x88));
  return;
}


/* ==== 007136d0  Unwind@007136d0  size=8 ==== */

void Unwind_007136d0(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x5c));
  return;
}


/* ==== 007136d8  Unwind@007136d8  size=8 ==== */

void Unwind_007136d8(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -100));
  return;
}


/* ==== 007136e0  Unwind@007136e0  size=8 ==== */

void Unwind_007136e0(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x70));
  return;
}


/* ==== 007136e8  Unwind@007136e8  size=8 ==== */

void Unwind_007136e8(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x78));
  return;
}


/* ==== 007136f0  Unwind@007136f0  size=8 ==== */

void Unwind_007136f0(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x80));
  return;
}


/* ==== 007136f8  Unwind@007136f8  size=11 ==== */

void Unwind_007136f8(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x88));
  return;
}


/* ==== 00713703  Unwind@00713703  size=11 ==== */

void Unwind_00713703(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x94));
  return;
}


/* ==== 0071370e  Unwind@0071370e  size=11 ==== */

void Unwind_0071370e(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x9c));
  return;
}


/* ==== 00713740  Unwind@00713740  size=8 ==== */

void Unwind_00713740(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x48));
  return;
}


/* ==== 00713748  Unwind@00713748  size=8 ==== */

void Unwind_00713748(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x50));
  return;
}


/* ==== 00713750  Unwind@00713750  size=8 ==== */

void Unwind_00713750(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x58));
  return;
}


/* ==== 00713758  Unwind@00713758  size=8 ==== */

void Unwind_00713758(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x60));
  return;
}


/* ==== 00713760  Unwind@00713760  size=8 ==== */

void Unwind_00713760(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x68));
  return;
}


/* ==== 00713768  Unwind@00713768  size=8 ==== */

void Unwind_00713768(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x70));
  return;
}


/* ==== 007137a0  Unwind@007137a0  size=11 ==== */

void Unwind_007137a0(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0xb0));
  return;
}


/* ==== 007137ab  Unwind@007137ab  size=8 ==== */

void Unwind_007137ab(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x58));
  return;
}


/* ==== 007137b3  Unwind@007137b3  size=8 ==== */

void Unwind_007137b3(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x40));
  return;
}


/* ==== 007137bb  Unwind@007137bb  size=11 ==== */

void Unwind_007137bb(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0xc4));
  return;
}


/* ==== 00713800  Unwind@00713800  size=11 ==== */

void Unwind_00713800(void)

{
  FUN_0042f960();
  return;
}


/* ==== 0071380b  Unwind@0071380b  size=17 ==== */

void Unwind_0071380b(void)

{
  FUN_004676e0();
  return;
}


/* ==== 0071381c  Unwind@0071381c  size=17 ==== */

void Unwind_0071381c(void)

{
  FUN_0040c940();
  return;
}


/* ==== 00713860  Unwind@00713860  size=11 ==== */

void Unwind_00713860(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x140));
  return;
}


/* ==== 0071386b  Unwind@0071386b  size=11 ==== */

void Unwind_0071386b(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x128));
  return;
}


/* ==== 00713876  Unwind@00713876  size=11 ==== */

void Unwind_00713876(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x158));
  return;
}


/* ==== 007138b0  Unwind@007138b0  size=8 ==== */

void Unwind_007138b0(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -100));
  return;
}


/* ==== 007138f0  Unwind@007138f0  size=11 ==== */

void Unwind_007138f0(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0xb4));
  return;
}


/* ==== 007138fb  Unwind@007138fb  size=11 ==== */

void Unwind_007138fb(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0xbc));
  return;
}


/* ==== 00713906  Unwind@00713906  size=11 ==== */

void Unwind_00713906(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0xcc));
  return;
}


/* ==== 00713911  Unwind@00713911  size=8 ==== */

void Unwind_00713911(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x28));
  return;
}


/* ==== 00713919  Unwind@00713919  size=8 ==== */

void Unwind_00713919(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x40));
  return;
}


/* ==== 00713921  Unwind@00713921  size=11 ==== */

void Unwind_00713921(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0xd4));
  return;
}


/* ==== 00713960  Unwind@00713960  size=11 ==== */

void Unwind_00713960(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x2b4));
  return;
}


/* ==== 0071396b  Unwind@0071396b  size=11 ==== */

void Unwind_0071396b(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x34c));
  return;
}


/* ==== 00713976  Unwind@00713976  size=11 ==== */

void Unwind_00713976(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x284));
  return;
}


/* ==== 00713981  Unwind@00713981  size=11 ==== */

void Unwind_00713981(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x28c));
  return;
}


/* ==== 0071398c  Unwind@0071398c  size=11 ==== */

void Unwind_0071398c(void)

{
  FUN_004052a0();
  return;
}


/* ==== 00713997  Unwind@00713997  size=11 ==== */

void Unwind_00713997(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x2a0));
  return;
}


/* ==== 007139a2  Unwind@007139a2  size=11 ==== */

void Unwind_007139a2(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x2a8));
  return;
}


/* ==== 007139ad  Unwind@007139ad  size=11 ==== */

void Unwind_007139ad(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x2b0));
  return;
}


/* ==== 007139b8  Unwind@007139b8  size=11 ==== */

void Unwind_007139b8(void)

{
  FUN_004052a0();
  return;
}


/* ==== 007139c3  Unwind@007139c3  size=11 ==== */

void Unwind_007139c3(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x2c4));
  return;
}


/* ==== 007139ce  Unwind@007139ce  size=11 ==== */

void Unwind_007139ce(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x2cc));
  return;
}


/* ==== 007139d9  Unwind@007139d9  size=11 ==== */

void Unwind_007139d9(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x2d4));
  return;
}


/* ==== 007139e4  Unwind@007139e4  size=11 ==== */

void Unwind_007139e4(void)

{
  FUN_004052a0();
  return;
}


/* ==== 007139ef  Unwind@007139ef  size=8 ==== */

void Unwind_007139ef(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x40));
  return;
}


/* ==== 007139f7  Unwind@007139f7  size=8 ==== */

void Unwind_007139f7(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x28));
  return;
}


/* ==== 007139ff  Unwind@007139ff  size=11 ==== */

void Unwind_007139ff(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x2f4));
  return;
}


/* ==== 00713a0a  Unwind@00713a0a  size=11 ==== */

void Unwind_00713a0a(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x2fc));
  return;
}


/* ==== 00713a15  Unwind@00713a15  size=8 ==== */

void Unwind_00713a15(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x58));
  return;
}


/* ==== 00713a1d  Unwind@00713a1d  size=11 ==== */

void Unwind_00713a1d(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x354));
  return;
}


/* ==== 00713a28  Unwind@00713a28  size=11 ==== */

void Unwind_00713a28(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x30c));
  return;
}


/* ==== 00713a33  Unwind@00713a33  size=11 ==== */

void Unwind_00713a33(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x314));
  return;
}


/* ==== 00713a3e  Unwind@00713a3e  size=11 ==== */

void Unwind_00713a3e(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x324));
  return;
}


/* ==== 00713a49  Unwind@00713a49  size=11 ==== */

void Unwind_00713a49(void)

{
  FUN_004039a0();
  return;
}


/* ==== 00713a54  Unwind@00713a54  size=11 ==== */

void Unwind_00713a54(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x334));
  return;
}


/* ==== 00713a5f  Unwind@00713a5f  size=11 ==== */

void Unwind_00713a5f(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x33c));
  return;
}


/* ==== 00713aa0  Unwind@00713aa0  size=11 ==== */

void Unwind_00713aa0(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x2a0));
  return;
}


/* ==== 00713aab  Unwind@00713aab  size=11 ==== */

void Unwind_00713aab(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x35c));
  return;
}


/* ==== 00713ab6  Unwind@00713ab6  size=11 ==== */

void Unwind_00713ab6(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x184));
  return;
}


/* ==== 00713ac1  Unwind@00713ac1  size=11 ==== */

void Unwind_00713ac1(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x18c));
  return;
}


/* ==== 00713acc  Unwind@00713acc  size=11 ==== */

void Unwind_00713acc(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x198));
  return;
}


/* ==== 00713ad7  Unwind@00713ad7  size=11 ==== */

void Unwind_00713ad7(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x1a0));
  return;
}


/* ==== 00713ae2  Unwind@00713ae2  size=11 ==== */

void Unwind_00713ae2(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x1ac));
  return;
}


/* ==== 00713aed  Unwind@00713aed  size=11 ==== */

void Unwind_00713aed(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x1b4));
  return;
}


/* ==== 00713af8  Unwind@00713af8  size=11 ==== */

void Unwind_00713af8(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x1c0));
  return;
}


/* ==== 00713b03  Unwind@00713b03  size=11 ==== */

void Unwind_00713b03(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x1c8));
  return;
}


/* ==== 00713b0e  Unwind@00713b0e  size=11 ==== */

void Unwind_00713b0e(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x1d4));
  return;
}


/* ==== 00713b19  Unwind@00713b19  size=11 ==== */

void Unwind_00713b19(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x1dc));
  return;
}


/* ==== 00713b24  Unwind@00713b24  size=11 ==== */

void Unwind_00713b24(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x1e8));
  return;
}


/* ==== 00713b2f  Unwind@00713b2f  size=11 ==== */

void Unwind_00713b2f(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x1f0));
  return;
}


/* ==== 00713b3a  Unwind@00713b3a  size=8 ==== */

void Unwind_00713b3a(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x40));
  return;
}


/* ==== 00713b42  Unwind@00713b42  size=8 ==== */

void Unwind_00713b42(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x28));
  return;
}


/* ==== 00713b4a  Unwind@00713b4a  size=11 ==== */

void Unwind_00713b4a(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x1fc));
  return;
}


/* ==== 00713b55  Unwind@00713b55  size=11 ==== */

void Unwind_00713b55(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x204));
  return;
}


/* ==== 00713b60  Unwind@00713b60  size=11 ==== */

void Unwind_00713b60(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x210));
  return;
}


/* ==== 00713b6b  Unwind@00713b6b  size=11 ==== */

void Unwind_00713b6b(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x218));
  return;
}


/* ==== 00713b76  Unwind@00713b76  size=11 ==== */

void Unwind_00713b76(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x224));
  return;
}


/* ==== 00713b81  Unwind@00713b81  size=11 ==== */

void Unwind_00713b81(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x22c));
  return;
}


/* ==== 00713b8c  Unwind@00713b8c  size=11 ==== */

void Unwind_00713b8c(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x238));
  return;
}


/* ==== 00713b97  Unwind@00713b97  size=11 ==== */

void Unwind_00713b97(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x240));
  return;
}


/* ==== 00713ba2  Unwind@00713ba2  size=11 ==== */

void Unwind_00713ba2(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x24c));
  return;
}


/* ==== 00713bad  Unwind@00713bad  size=11 ==== */

void Unwind_00713bad(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x254));
  return;
}


/* ==== 00713bb8  Unwind@00713bb8  size=11 ==== */

void Unwind_00713bb8(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x260));
  return;
}


/* ==== 00713bc3  Unwind@00713bc3  size=11 ==== */

void Unwind_00713bc3(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x268));
  return;
}


/* ==== 00713bce  Unwind@00713bce  size=11 ==== */

void Unwind_00713bce(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x274));
  return;
}


/* ==== 00713bd9  Unwind@00713bd9  size=11 ==== */

void Unwind_00713bd9(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x27c));
  return;
}


/* ==== 00713be4  Unwind@00713be4  size=11 ==== */

void Unwind_00713be4(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x288));
  return;
}


/* ==== 00713bef  Unwind@00713bef  size=11 ==== */

void Unwind_00713bef(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x290));
  return;
}


/* ==== 00713bfa  Unwind@00713bfa  size=11 ==== */

void Unwind_00713bfa(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x29c));
  return;
}


/* ==== 00713c05  Unwind@00713c05  size=11 ==== */

void Unwind_00713c05(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x2a4));
  return;
}


/* ==== 00713c10  Unwind@00713c10  size=11 ==== */

void Unwind_00713c10(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x2b0));
  return;
}


/* ==== 00713c1b  Unwind@00713c1b  size=11 ==== */

void Unwind_00713c1b(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x2b8));
  return;
}


/* ==== 00713c26  Unwind@00713c26  size=11 ==== */

void Unwind_00713c26(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x2c4));
  return;
}


/* ==== 00713c31  Unwind@00713c31  size=11 ==== */

void Unwind_00713c31(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x2cc));
  return;
}


/* ==== 00713c3c  Unwind@00713c3c  size=11 ==== */

void Unwind_00713c3c(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x2d8));
  return;
}


/* ==== 00713c47  Unwind@00713c47  size=11 ==== */

void Unwind_00713c47(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x2e0));
  return;
}


/* ==== 00713c52  Unwind@00713c52  size=11 ==== */

void Unwind_00713c52(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x2ec));
  return;
}


/* ==== 00713c5d  Unwind@00713c5d  size=11 ==== */

void Unwind_00713c5d(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x2f4));
  return;
}


/* ==== 00713c68  Unwind@00713c68  size=11 ==== */

void Unwind_00713c68(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x360));
  return;
}


/* ==== 00713c73  Unwind@00713c73  size=11 ==== */

void Unwind_00713c73(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x308));
  return;
}


/* ==== 00713c7e  Unwind@00713c7e  size=11 ==== */

void Unwind_00713c7e(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x314));
  return;
}


/* ==== 00713c89  Unwind@00713c89  size=11 ==== */

void Unwind_00713c89(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x31c));
  return;
}


/* ==== 00713c94  Unwind@00713c94  size=11 ==== */

void Unwind_00713c94(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x328));
  return;
}


/* ==== 00713c9f  Unwind@00713c9f  size=11 ==== */

void Unwind_00713c9f(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x330));
  return;
}


/* ==== 00713caa  Unwind@00713caa  size=11 ==== */

void Unwind_00713caa(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x33c));
  return;
}


/* ==== 00713cb5  Unwind@00713cb5  size=11 ==== */

void Unwind_00713cb5(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x344));
  return;
}


/* ==== 00713cf0  Unwind@00713cf0  size=11 ==== */

void Unwind_00713cf0(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0xe4));
  return;
}


/* ==== 00713cfb  Unwind@00713cfb  size=11 ==== */

void Unwind_00713cfb(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0xf4));
  return;
}


/* ==== 00713d06  Unwind@00713d06  size=11 ==== */

void Unwind_00713d06(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0xfc));
  return;
}


/* ==== 00713d11  Unwind@00713d11  size=8 ==== */

void Unwind_00713d11(void)

{
  FUN_00407a80();
  return;
}


/* ==== 00713d19  Unwind@00713d19  size=11 ==== */

void Unwind_00713d19(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x11c));
  return;
}


/* ==== 00713d24  Unwind@00713d24  size=11 ==== */

void Unwind_00713d24(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x10c));
  return;
}


/* ==== 00713d2f  Unwind@00713d2f  size=11 ==== */

void Unwind_00713d2f(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x118));
  return;
}


/* ==== 00713d3a  Unwind@00713d3a  size=11 ==== */

void Unwind_00713d3a(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x120));
  return;
}


/* ==== 00713d80  Unwind@00713d80  size=8 ==== */

void Unwind_00713d80(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + 0x10));
  return;
}


/* ==== 00713d88  Unwind@00713d88  size=11 ==== */

void Unwind_00713d88(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x9d0));
  return;
}


/* ==== 00713d93  Unwind@00713d93  size=11 ==== */

void Unwind_00713d93(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x9d8));
  return;
}


/* ==== 00713d9e  Unwind@00713d9e  size=11 ==== */

void Unwind_00713d9e(void)

{
  FUN_0040c940();
  return;
}


/* ==== 00713da9  Unwind@00713da9  size=11 ==== */

void Unwind_00713da9(void)

{
  FUN_004039a0();
  return;
}


/* ==== 00713db4  Unwind@00713db4  size=11 ==== */

void Unwind_00713db4(void)

{
  FUN_004039a0();
  return;
}


/* ==== 00713dbf  Unwind@00713dbf  size=11 ==== */

void Unwind_00713dbf(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x374));
  return;
}


/* ==== 00713dca  Unwind@00713dca  size=11 ==== */

void Unwind_00713dca(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x434));
  return;
}


/* ==== 00713dd5  Unwind@00713dd5  size=11 ==== */

void Unwind_00713dd5(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x38c));
  return;
}


/* ==== 00713de0  Unwind@00713de0  size=11 ==== */

void Unwind_00713de0(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x3a4));
  return;
}


/* ==== 00713deb  Unwind@00713deb  size=11 ==== */

void Unwind_00713deb(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x3bc));
  return;
}


/* ==== 00713df6  Unwind@00713df6  size=11 ==== */

void Unwind_00713df6(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x3d4));
  return;
}


/* ==== 00713e01  Unwind@00713e01  size=11 ==== */

void Unwind_00713e01(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x404));
  return;
}


/* ==== 00713e0c  Unwind@00713e0c  size=11 ==== */

void Unwind_00713e0c(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x2e4));
  return;
}


/* ==== 00713e17  Unwind@00713e17  size=11 ==== */

void Unwind_00713e17(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x44c));
  return;
}


/* ==== 00713e22  Unwind@00713e22  size=11 ==== */

void Unwind_00713e22(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x2fc));
  return;
}


/* ==== 00713e2d  Unwind@00713e2d  size=11 ==== */

void Unwind_00713e2d(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x3ec));
  return;
}


/* ==== 00713e38  Unwind@00713e38  size=11 ==== */

void Unwind_00713e38(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x314));
  return;
}


/* ==== 00713e43  Unwind@00713e43  size=11 ==== */

void Unwind_00713e43(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x32c));
  return;
}


/* ==== 00713e4e  Unwind@00713e4e  size=11 ==== */

void Unwind_00713e4e(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x344));
  return;
}


/* ==== 00713e59  Unwind@00713e59  size=11 ==== */

void Unwind_00713e59(void)

{
  FUN_00407a80();
  return;
}


/* ==== 00713e64  Unwind@00713e64  size=11 ==== */

void Unwind_00713e64(void)

{
  FUN_00403a10();
  return;
}


/* ==== 00713e6f  Unwind@00713e6f  size=11 ==== */

void Unwind_00713e6f(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x9e4));
  return;
}


/* ==== 00713e7a  Unwind@00713e7a  size=11 ==== */

void Unwind_00713e7a(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x2cc));
  return;
}


/* ==== 00713e85  Unwind@00713e85  size=11 ==== */

void Unwind_00713e85(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x9ec));
  return;
}


/* ==== 00713e90  Unwind@00713e90  size=11 ==== */

void Unwind_00713e90(void)

{
  FUN_00489ba0();
  return;
}


/* ==== 00713e9b  Unwind@00713e9b  size=11 ==== */

void Unwind_00713e9b(void)

{
  FUN_00456cf0();
  return;
}


/* ==== 00713ea6  Unwind@00713ea6  size=11 ==== */

void Unwind_00713ea6(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0xa2c));
  return;
}


/* ==== 00713eb1  Unwind@00713eb1  size=11 ==== */

void Unwind_00713eb1(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0xa24));
  return;
}


/* ==== 00713ebc  Unwind@00713ebc  size=11 ==== */

void Unwind_00713ebc(void)

{
  FUN_0040c940();
  return;
}


/* ==== 00713ec7  Unwind@00713ec7  size=11 ==== */

void Unwind_00713ec7(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x20c));
  return;
}


/* ==== 00713ed2  Unwind@00713ed2  size=11 ==== */

void Unwind_00713ed2(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x224));
  return;
}


/* ==== 00713edd  Unwind@00713edd  size=11 ==== */

void Unwind_00713edd(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x23c));
  return;
}


/* ==== 00713ee8  Unwind@00713ee8  size=11 ==== */

void Unwind_00713ee8(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x29c));
  return;
}


/* ==== 00713ef3  Unwind@00713ef3  size=11 ==== */

void Unwind_00713ef3(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x254));
  return;
}


/* ==== 00713efe  Unwind@00713efe  size=11 ==== */

void Unwind_00713efe(void)

{
  FUN_00407a80();
  return;
}


/* ==== 00713f09  Unwind@00713f09  size=11 ==== */

void Unwind_00713f09(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0xa38));
  return;
}


/* ==== 00713f14  Unwind@00713f14  size=11 ==== */

void Unwind_00713f14(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -500));
  return;
}


/* ==== 00713f1f  Unwind@00713f1f  size=11 ==== */

void Unwind_00713f1f(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0xa20));
  return;
}


/* ==== 00713f2a  Unwind@00713f2a  size=11 ==== */

void Unwind_00713f2a(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0xa48));
  return;
}


/* ==== 00713f35  Unwind@00713f35  size=11 ==== */

void Unwind_00713f35(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x464));
  return;
}


/* ==== 00713f40  Unwind@00713f40  size=11 ==== */

void Unwind_00713f40(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0xa0c));
  return;
}


/* ==== 00713f80  Unwind@00713f80  size=8 ==== */

void Unwind_00713f80(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x48));
  return;
}


/* ==== 00713f88  Unwind@00713f88  size=8 ==== */

void Unwind_00713f88(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x50));
  return;
}


/* ==== 00713fc0  Unwind@00713fc0  size=11 ==== */

void Unwind_00713fc0(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x158));
  return;
}


/* ==== 00713fcb  Unwind@00713fcb  size=11 ==== */

void Unwind_00713fcb(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0xe0));
  return;
}


/* ==== 00713fd6  Unwind@00713fd6  size=11 ==== */

void Unwind_00713fd6(void)

{
  FUN_00407a80();
  return;
}


/* ==== 00713fe1  Unwind@00713fe1  size=11 ==== */

void Unwind_00713fe1(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0xec));
  return;
}


/* ==== 00713fec  Unwind@00713fec  size=11 ==== */

void Unwind_00713fec(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0xf4));
  return;
}


/* ==== 00713ff7  Unwind@00713ff7  size=11 ==== */

void Unwind_00713ff7(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x100));
  return;
}


/* ==== 00714002  Unwind@00714002  size=11 ==== */

void Unwind_00714002(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x108));
  return;
}


/* ==== 0071400d  Unwind@0071400d  size=11 ==== */

void Unwind_0071400d(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x114));
  return;
}


/* ==== 00714018  Unwind@00714018  size=11 ==== */

void Unwind_00714018(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x11c));
  return;
}


/* ==== 00714023  Unwind@00714023  size=11 ==== */

void Unwind_00714023(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x128));
  return;
}


/* ==== 0071402e  Unwind@0071402e  size=11 ==== */

void Unwind_0071402e(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x130));
  return;
}


/* ==== 00714039  Unwind@00714039  size=11 ==== */

void Unwind_00714039(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x13c));
  return;
}


/* ==== 00714044  Unwind@00714044  size=11 ==== */

void Unwind_00714044(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x144));
  return;
}


/* ==== 0071404f  Unwind@0071404f  size=11 ==== */

void Unwind_0071404f(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x150));
  return;
}


/* ==== 0071405a  Unwind@0071405a  size=11 ==== */

void Unwind_0071405a(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x178));
  return;
}


/* ==== 00714065  Unwind@00714065  size=11 ==== */

void Unwind_00714065(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x164));
  return;
}


/* ==== 00714070  Unwind@00714070  size=11 ==== */

void Unwind_00714070(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x16c));
  return;
}


/* ==== 0071407b  Unwind@0071407b  size=8 ==== */

void Unwind_0071407b(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x28));
  return;
}


/* ==== 00714083  Unwind@00714083  size=11 ==== */

void Unwind_00714083(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x198));
  return;
}


/* ==== 0071408e  Unwind@0071408e  size=11 ==== */

void Unwind_0071408e(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x180));
  return;
}


/* ==== 007140d0  Unwind@007140d0  size=11 ==== */

void Unwind_007140d0(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x128));
  return;
}


/* ==== 00714110  Unwind@00714110  size=8 ==== */

void Unwind_00714110(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + 8));
  return;
}


/* ==== 00714118  Unwind@00714118  size=8 ==== */

void Unwind_00714118(void)

{
  FUN_00411b80();
  return;
}


/* ==== 00714150  Unwind@00714150  size=8 ==== */

void Unwind_00714150(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + 8));
  return;
}


/* ==== 00714158  Unwind@00714158  size=11 ==== */

void Unwind_00714158(void)

{
  FUN_00411b80();
  return;
}


/* ==== 00714163  Unwind@00714163  size=8 ==== */

void Unwind_00714163(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x28));
  return;
}


/* ==== 007141a0  Unwind@007141a0  size=8 ==== */

void Unwind_007141a0(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + 0xc));
  return;
}


/* ==== 007141a8  Unwind@007141a8  size=8 ==== */

void Unwind_007141a8(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x28));
  return;
}


/* ==== 007141e0  Unwind@007141e0  size=8 ==== */

void Unwind_007141e0(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + 8));
  return;
}


/* ==== 007141e8  Unwind@007141e8  size=8 ==== */

void Unwind_007141e8(void)

{
  FUN_00411b80();
  return;
}


/* ==== 00714220  Unwind@00714220  size=8 ==== */

void Unwind_00714220(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + 8));
  return;
}


/* ==== 00714250  Unwind@00714250  size=8 ==== */

void Unwind_00714250(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + 8));
  return;
}


/* ==== 00714290  Unwind@00714290  size=8 ==== */

void Unwind_00714290(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + 8));
  return;
}


/* ==== 007142d0  Unwind@007142d0  size=8 ==== */

void Unwind_007142d0(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + 0x10));
  return;
}


/* ==== 00714310  Unwind@00714310  size=8 ==== */

void Unwind_00714310(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + 8));
  return;
}


/* ==== 00714350  Unwind@00714350  size=8 ==== */

void Unwind_00714350(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + 8));
  return;
}


/* ==== 00714390  Unwind@00714390  size=8 ==== */

void Unwind_00714390(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x34));
  return;
}


/* ==== 007143d0  Unwind@007143d0  size=8 ==== */

void Unwind_007143d0(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x34));
  return;
}


/* ==== 00714410  Unwind@00714410  size=8 ==== */

void Unwind_00714410(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x28));
  return;
}


/* ==== 00714450  Unwind@00714450  size=8 ==== */

void Unwind_00714450(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x28));
  return;
}


/* ==== 007144b0  Unwind@007144b0  size=8 ==== */

void Unwind_007144b0(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x10));
  return;
}


/* ==== 007144b8  Unwind@007144b8  size=11 ==== */

void Unwind_007144b8(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(*(int *)(unaff_EBP + -0x10) + 0x18));
  return;
}


/* ==== 007144f0  Unwind@007144f0  size=8 ==== */

void Unwind_007144f0(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x10));
  return;
}


/* ==== 007144f8  Unwind@007144f8  size=11 ==== */

void Unwind_007144f8(void)

{
  FUN_0044e210();
  return;
}


/* ==== 00714530  Unwind@00714530  size=11 ==== */

void Unwind_00714530(void)

{
  int unaff_EBP;
  
  Concurrency::details::WorkQueue::~WorkQueue((WorkQueue *)(unaff_EBP + -0x14c));
  return;
}


/* ==== 0071453b  Unwind@0071453b  size=11 ==== */

void Unwind_0071453b(void)

{
  int unaff_EBP;
  
  Concurrency::details::WorkQueue::~WorkQueue((WorkQueue *)(unaff_EBP + -0x1a0));
  return;
}


/* ==== 00714580  Unwind@00714580  size=8 ==== */

void Unwind_00714580(void)

{
  FUN_004be160();
  return;
}


/* ==== 00714588  Unwind@00714588  size=11 ==== */

void Unwind_00714588(void)

{
  FUN_004be180();
  return;
}


/* ==== 00714593  Unwind@00714593  size=11 ==== */

void Unwind_00714593(void)

{
  FUN_004be1a0();
  return;
}


/* ==== 007145f0  Unwind@007145f0  size=18 ==== */

void Unwind_007145f0(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x79c),0x48);
  return;
}


/* ==== 00714602  Unwind@00714602  size=11 ==== */

void Unwind_00714602(void)

{
  FUN_004089b0();
  return;
}


/* ==== 0071460d  Unwind@0071460d  size=18 ==== */

void Unwind_0071460d(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x7a8),0x34);
  return;
}


/* ==== 0071461f  Unwind@0071461f  size=11 ==== */

void Unwind_0071461f(void)

{
  FUN_004089b0();
  return;
}


/* ==== 0071462a  Unwind@0071462a  size=11 ==== */

void Unwind_0071462a(void)

{
  FUN_004089b0();
  return;
}


/* ==== 00714635  Unwind@00714635  size=11 ==== */

void Unwind_00714635(void)

{
  FUN_004089b0();
  return;
}


/* ==== 00714640  Unwind@00714640  size=11 ==== */

void Unwind_00714640(void)

{
  FUN_004089b0();
  return;
}


/* ==== 0071464b  Unwind@0071464b  size=18 ==== */

void Unwind_0071464b(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x780),0x68);
  return;
}


/* ==== 0071465d  Unwind@0071465d  size=11 ==== */

void Unwind_0071465d(void)

{
  FUN_004089b0();
  return;
}


/* ==== 00714668  Unwind@00714668  size=18 ==== */

void Unwind_00714668(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x78c),0x38);
  return;
}


/* ==== 0071467a  Unwind@0071467a  size=11 ==== */

void Unwind_0071467a(void)

{
  FUN_004089b0();
  return;
}


/* ==== 007146c0  Unwind@007146c0  size=8 ==== */

void Unwind_007146c0(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + 8));
  return;
}


/* ==== 007146c8  Unwind@007146c8  size=11 ==== */

void Unwind_007146c8(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x228));
  return;
}


/* ==== 00714710  Unwind@00714710  size=8 ==== */

void Unwind_00714710(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + 8));
  return;
}


/* ==== 00714718  Unwind@00714718  size=11 ==== */

void Unwind_00714718(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x228));
  return;
}


/* ==== 00714760  Unwind@00714760  size=8 ==== */

void Unwind_00714760(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + 8));
  return;
}


/* ==== 00714768  Unwind@00714768  size=11 ==== */

void Unwind_00714768(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x128));
  return;
}


/* ==== 007147b0  Unwind@007147b0  size=11 ==== */

void Unwind_007147b0(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x128));
  return;
}


/* ==== 007147bb  Unwind@007147bb  size=11 ==== */

void Unwind_007147bb(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x140));
  return;
}


/* ==== 00714800  Unwind@00714800  size=8 ==== */

void Unwind_00714800(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + 0xc));
  return;
}


/* ==== 00714808  Unwind@00714808  size=11 ==== */

void Unwind_00714808(void)

{
  FUN_0042c5e0();
  return;
}


/* ==== 00714813  Unwind@00714813  size=11 ==== */

void Unwind_00714813(void)

{
  FUN_0042c5e0();
  return;
}


/* ==== 0071481e  Unwind@0071481e  size=11 ==== */

void Unwind_0071481e(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x128));
  return;
}


/* ==== 00714829  Unwind@00714829  size=11 ==== */

void Unwind_00714829(void)

{
  FUN_0042c5e0();
  return;
}


/* ==== 00714870  Unwind@00714870  size=8 ==== */

void Unwind_00714870(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + 0xc));
  return;
}


/* ==== 00714878  Unwind@00714878  size=11 ==== */

void Unwind_00714878(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x128));
  return;
}


/* ==== 007148c0  Unwind@007148c0  size=8 ==== */

void Unwind_007148c0(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + 8));
  return;
}


/* ==== 007148c8  Unwind@007148c8  size=12 ==== */

void Unwind_007148c8(void)

{
  FUN_006e4bbf(&DAT_007ca9f0);
  return;
}


/* ==== 00714900  Unwind@00714900  size=8 ==== */

void Unwind_00714900(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + 8));
  return;
}


/* ==== 00714930  Unwind@00714930  size=8 ==== */

void Unwind_00714930(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + 8));
  return;
}


/* ==== 00714960  Unwind@00714960  size=11 ==== */

void Unwind_00714960(void)

{
  FUN_004c3790();
  return;
}


/* ==== 0071496b  Unwind@0071496b  size=11 ==== */

void Unwind_0071496b(void)

{
  FUN_00489ca0();
  return;
}


/* ==== 007149a0  Unwind@007149a0  size=11 ==== */

void Unwind_007149a0(void)

{
  FUN_004c37e0();
  return;
}


/* ==== 007149ab  Unwind@007149ab  size=11 ==== */

void Unwind_007149ab(void)

{
  FUN_00489ca0();
  return;
}


/* ==== 007149e0  Unwind@007149e0  size=11 ==== */

void Unwind_007149e0(void)

{
  FUN_004c3830();
  return;
}


/* ==== 007149eb  Unwind@007149eb  size=11 ==== */

void Unwind_007149eb(void)

{
  FUN_00489ca0();
  return;
}


/* ==== 00714a20  Unwind@00714a20  size=8 ==== */

void Unwind_00714a20(void)

{
  FUN_004c4870();
  return;
}


/* ==== 00714a50  Unwind@00714a50  size=8 ==== */

void Unwind_00714a50(void)

{
  FUN_004c5a50();
  return;
}


/* ==== 00714a80  Unwind@00714a80  size=8 ==== */

void Unwind_00714a80(void)

{
  FUN_004c59e0();
  return;
}


/* ==== 00714ab0  Unwind@00714ab0  size=8 ==== */

void Unwind_00714ab0(void)

{
  FUN_004c5990();
  return;
}


/* ==== 00714ae0  Unwind@00714ae0  size=8 ==== */

void Unwind_00714ae0(void)

{
  FUN_004c49c0();
  return;
}


/* ==== 00714b10  Unwind@00714b10  size=8 ==== */

void Unwind_00714b10(void)

{
  FUN_00403580();
  return;
}


/* ==== 00714b40  Unwind@00714b40  size=8 ==== */

void Unwind_00714b40(void)

{
  FUN_004c5940();
  return;
}


/* ==== 00714b70  Unwind@00714b70  size=8 ==== */

void Unwind_00714b70(void)

{
  FUN_004c5d80();
  return;
}


/* ==== 00714ba0  Unwind@00714ba0  size=8 ==== */

void Unwind_00714ba0(void)

{
  FUN_004c5d50();
  return;
}


/* ==== 00714bd0  Unwind@00714bd0  size=8 ==== */

void Unwind_00714bd0(void)

{
  FUN_004c6ef0();
  return;
}


/* ==== 00714c00  Unwind@00714c00  size=8 ==== */

void Unwind_00714c00(void)

{
  FUN_004c6ec0();
  return;
}


/* ==== 00714c30  Unwind@00714c30  size=8 ==== */

void Unwind_00714c30(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + 0x24));
  return;
}


/* ==== 00714c38  Unwind@00714c38  size=8 ==== */

void Unwind_00714c38(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + 0xc));
  return;
}


/* ==== 00714c40  Unwind@00714c40  size=31 ==== */

void Unwind_00714c40(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x114) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x114) = *(uint *)(unaff_EBP + -0x114) & 0xfffffffe;
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>
              (*(function<void___cdecl(void)> **)(unaff_EBP + 8));
    return;
  }
  return;
}


/* ==== 00714c90  Unwind@00714c90  size=8 ==== */

void Unwind_00714c90(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x28));
  return;
}


/* ==== 00714c98  Unwind@00714c98  size=25 ==== */

void Unwind_00714c98(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x30) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x30) = *(uint *)(unaff_EBP + -0x30) & 0xfffffffe;
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>
              (*(function<void___cdecl(void)> **)(unaff_EBP + 8));
    return;
  }
  return;
}


/* ==== 00714ce0  Unwind@00714ce0  size=8 ==== */

void Unwind_00714ce0(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + 0xc));
  return;
}


/* ==== 00714d20  Unwind@00714d20  size=8 ==== */

void Unwind_00714d20(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + 0xc));
  return;
}


/* ==== 00714d50  Unwind@00714d50  size=25 ==== */

void Unwind_00714d50(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x14) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) & 0xfffffffe;
    FUN_00401ac0();
    return;
  }
  return;
}


/* ==== 00714d90  Unwind@00714d90  size=8 ==== */

void Unwind_00714d90(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x28));
  return;
}


/* ==== 00714d98  Unwind@00714d98  size=8 ==== */

void Unwind_00714d98(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x40));
  return;
}


/* ==== 00714dd0  Unwind@00714dd0  size=11 ==== */

void Unwind_00714dd0(void)

{
  FUN_0040c940();
  return;
}


/* ==== 00714ddb  Unwind@00714ddb  size=11 ==== */

void Unwind_00714ddb(void)

{
  FUN_0040c940();
  return;
}


/* ==== 00714de6  Unwind@00714de6  size=11 ==== */

void Unwind_00714de6(void)

{
  FUN_0040c940();
  return;
}


/* ==== 00714df1  Unwind@00714df1  size=11 ==== */

void Unwind_00714df1(void)

{
  FUN_0040c940();
  return;
}


/* ==== 00714e30  Unwind@00714e30  size=8 ==== */

void Unwind_00714e30(void)

{
  FUN_0040d7d0();
  return;
}


/* ==== 00714e38  Unwind@00714e38  size=11 ==== */

void Unwind_00714e38(void)

{
  FUN_0040c940();
  return;
}


/* ==== 00714e80  Unwind@00714e80  size=8 ==== */

void Unwind_00714e80(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + 0xc));
  return;
}


/* ==== 00714e88  Unwind@00714e88  size=8 ==== */

void Unwind_00714e88(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x58));
  return;
}


/* ==== 00714e90  Unwind@00714e90  size=8 ==== */

void Unwind_00714e90(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x40));
  return;
}


/* ==== 00714e98  Unwind@00714e98  size=8 ==== */

void Unwind_00714e98(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x28));
  return;
}


/* ==== 00714ed0  Unwind@00714ed0  size=11 ==== */

void Unwind_00714ed0(void)

{
  FUN_004039a0();
  return;
}


/* ==== 00714edb  Unwind@00714edb  size=14 ==== */

void Unwind_00714edb(void)

{
  FUN_0040c940();
  return;
}


/* ==== 00714ee9  Unwind@00714ee9  size=14 ==== */

void Unwind_00714ee9(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(*(int *)(unaff_EBP + -0x10) + 0x154));
  return;
}


/* ==== 00714ef7  Unwind@00714ef7  size=14 ==== */

void Unwind_00714ef7(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(*(int *)(unaff_EBP + -0x10) + 0x170));
  return;
}


/* ==== 00714f05  Unwind@00714f05  size=14 ==== */

void Unwind_00714f05(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(*(int *)(unaff_EBP + -0x10) + 0x188));
  return;
}


/* ==== 00714f40  Unwind@00714f40  size=11 ==== */

void Unwind_00714f40(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x88));
  return;
}


/* ==== 00714f4b  Unwind@00714f4b  size=8 ==== */

void Unwind_00714f4b(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x70));
  return;
}


/* ==== 00714f53  Unwind@00714f53  size=11 ==== */

void Unwind_00714f53(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x2ac));
  return;
}


/* ==== 00714f5e  Unwind@00714f5e  size=11 ==== */

void Unwind_00714f5e(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x274));
  return;
}


/* ==== 00714f69  Unwind@00714f69  size=11 ==== */

void Unwind_00714f69(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x27c));
  return;
}


/* ==== 00714f74  Unwind@00714f74  size=11 ==== */

void Unwind_00714f74(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x284));
  return;
}


/* ==== 00714f7f  Unwind@00714f7f  size=11 ==== */

void Unwind_00714f7f(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x28c));
  return;
}


/* ==== 00714f8a  Unwind@00714f8a  size=11 ==== */

void Unwind_00714f8a(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x294));
  return;
}


/* ==== 00714f95  Unwind@00714f95  size=11 ==== */

void Unwind_00714f95(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x100));
  return;
}


/* ==== 00714fa0  Unwind@00714fa0  size=11 ==== */

void Unwind_00714fa0(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0xe8));
  return;
}


/* ==== 00714fab  Unwind@00714fab  size=8 ==== */

void Unwind_00714fab(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x40));
  return;
}


/* ==== 00714fb3  Unwind@00714fb3  size=11 ==== */

void Unwind_00714fb3(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0xd0));
  return;
}


/* ==== 00714fbe  Unwind@00714fbe  size=11 ==== */

void Unwind_00714fbe(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0xb8));
  return;
}


/* ==== 00714fc9  Unwind@00714fc9  size=11 ==== */

void Unwind_00714fc9(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x160));
  return;
}


/* ==== 00714fd4  Unwind@00714fd4  size=11 ==== */

void Unwind_00714fd4(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x148));
  return;
}


/* ==== 00714fdf  Unwind@00714fdf  size=11 ==== */

void Unwind_00714fdf(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x130));
  return;
}


/* ==== 00714fea  Unwind@00714fea  size=8 ==== */

void Unwind_00714fea(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x28));
  return;
}


/* ==== 00714ff2  Unwind@00714ff2  size=11 ==== */

void Unwind_00714ff2(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x1a8));
  return;
}


/* ==== 00714ffd  Unwind@00714ffd  size=11 ==== */

void Unwind_00714ffd(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -400));
  return;
}


/* ==== 00715008  Unwind@00715008  size=11 ==== */

void Unwind_00715008(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x2a4));
  return;
}


/* ==== 00715013  Unwind@00715013  size=11 ==== */

void Unwind_00715013(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x2b0));
  return;
}


/* ==== 0071501e  Unwind@0071501e  size=11 ==== */

void Unwind_0071501e(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x268));
  return;
}


/* ==== 00715060  Unwind@00715060  size=8 ==== */

void Unwind_00715060(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x10));
  return;
}


/* ==== 00715068  Unwind@00715068  size=11 ==== */

void Unwind_00715068(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(*(int *)(unaff_EBP + -0x10) + 0x18));
  return;
}


/* ==== 00715073  Unwind@00715073  size=11 ==== */

void Unwind_00715073(void)

{
  FUN_00401ac0();
  return;
}


/* ==== 007150a0  Unwind@007150a0  size=8 ==== */

void Unwind_007150a0(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + 0x14));
  return;
}


/* ==== 007150a8  Unwind@007150a8  size=11 ==== */

void Unwind_007150a8(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(*(int *)(unaff_EBP + -0x10) + 0x10));
  return;
}


/* ==== 007150b3  Unwind@007150b3  size=11 ==== */

void Unwind_007150b3(void)

{
  FUN_0040d7d0();
  return;
}


/* ==== 007150e0  Unwind@007150e0  size=11 ==== */

void Unwind_007150e0(void)

{
  FUN_004089b0();
  return;
}


/* ==== 007150eb  Unwind@007150eb  size=14 ==== */

void Unwind_007150eb(void)

{
  int unaff_EBP;
  
  Concurrency::details::_RunAllParam<unsigned_char>::~_RunAllParam<unsigned_char>
            ((_RunAllParam<unsigned_char> *)(*(int *)(unaff_EBP + -0xa8) + 0x1c));
  return;
}


/* ==== 007150f9  Unwind@007150f9  size=14 ==== */

void Unwind_007150f9(void)

{
  int unaff_EBP;
  
  Concurrency::details::_RunAllParam<unsigned_char>::~_RunAllParam<unsigned_char>
            ((_RunAllParam<unsigned_char> *)(*(int *)(unaff_EBP + -0xa8) + 0x58));
  return;
}


/* ==== 00715140  Unwind@00715140  size=8 ==== */

void Unwind_00715140(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x28));
  return;
}


/* ==== 00715180  Unwind@00715180  size=11 ==== */

void Unwind_00715180(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(*(int *)(unaff_EBP + -0x10) + 0xc));
  return;
}


/* ==== 0071518b  Unwind@0071518b  size=11 ==== */

void Unwind_0071518b(void)

{
  FUN_004cea80();
  return;
}


/* ==== 00715196  Unwind@00715196  size=14 ==== */

void Unwind_00715196(void)

{
  FUN_00427480();
  return;
}


/* ==== 007151d0  Unwind@007151d0  size=8 ==== */

void Unwind_007151d0(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x10));
  return;
}


/* ==== 007151d8  Unwind@007151d8  size=11 ==== */

void Unwind_007151d8(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(*(int *)(unaff_EBP + -0x10) + 0x18));
  return;
}


/* ==== 007151e3  Unwind@007151e3  size=11 ==== */

void Unwind_007151e3(void)

{
  FUN_0040d7d0();
  return;
}


/* ==== 007151ee  Unwind@007151ee  size=11 ==== */

void Unwind_007151ee(void)

{
  FUN_00401ac0();
  return;
}


/* ==== 007151f9  Unwind@007151f9  size=11 ==== */

void Unwind_007151f9(void)

{
  FUN_0048ad80();
  return;
}


/* ==== 00715204  Unwind@00715204  size=11 ==== */

void Unwind_00715204(void)

{
  int unaff_EBP;
  
  Concurrency::details::_RunAllParam<unsigned_char>::~_RunAllParam<unsigned_char>
            ((_RunAllParam<unsigned_char> *)(*(int *)(unaff_EBP + -0x10) + 0x54));
  return;
}


/* ==== 0071520f  Unwind@0071520f  size=14 ==== */

void Unwind_0071520f(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(*(int *)(unaff_EBP + -0x10) + 0xe8));
  return;
}


/* ==== 00715240  Unwind@00715240  size=11 ==== */

void Unwind_00715240(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(*(int *)(unaff_EBP + -0x10) + 0x14));
  return;
}


/* ==== 0071524b  Unwind@0071524b  size=11 ==== */

void Unwind_0071524b(void)

{
  FUN_004039a0();
  return;
}


/* ==== 00715280  Unwind@00715280  size=8 ==== */

void Unwind_00715280(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x10));
  return;
}


/* ==== 00715288  Unwind@00715288  size=11 ==== */

void Unwind_00715288(void)

{
  FUN_00519b50();
  return;
}


/* ==== 00715293  Unwind@00715293  size=11 ==== */

void Unwind_00715293(void)

{
  FUN_00519990();
  return;
}


/* ==== 0071529e  Unwind@0071529e  size=11 ==== */

void Unwind_0071529e(void)

{
  FUN_005197d0();
  return;
}


/* ==== 007152a9  Unwind@007152a9  size=11 ==== */

void Unwind_007152a9(void)

{
  FUN_005195f0();
  return;
}


/* ==== 007152b4  Unwind@007152b4  size=11 ==== */

void Unwind_007152b4(void)

{
  FUN_005195f0();
  return;
}


/* ==== 007152bf  Unwind@007152bf  size=11 ==== */

void Unwind_007152bf(void)

{
  FUN_0040d7d0();
  return;
}


/* ==== 007152ca  Unwind@007152ca  size=11 ==== */

void Unwind_007152ca(void)

{
  FUN_0048a7b0();
  return;
}


/* ==== 007152d5  Unwind@007152d5  size=11 ==== */

void Unwind_007152d5(void)

{
  FUN_00405350();
  return;
}


/* ==== 007152e0  Unwind@007152e0  size=11 ==== */

void Unwind_007152e0(void)

{
  FUN_0040d7d0();
  return;
}


/* ==== 007152eb  Unwind@007152eb  size=14 ==== */

void Unwind_007152eb(void)

{
  FUN_0040d7d0();
  return;
}


/* ==== 007152f9  Unwind@007152f9  size=14 ==== */

void Unwind_007152f9(void)

{
  FUN_00401ac0();
  return;
}


/* ==== 00715307  Unwind@00715307  size=14 ==== */

void Unwind_00715307(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(*(int *)(unaff_EBP + -0x10) + 0xb8));
  return;
}


/* ==== 00715315  Unwind@00715315  size=14 ==== */

void Unwind_00715315(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(*(int *)(unaff_EBP + -0x10) + 0xd0));
  return;
}


/* ==== 00715323  Unwind@00715323  size=14 ==== */

void Unwind_00715323(void)

{
  FUN_0048a7b0();
  return;
}


/* ==== 00715331  Unwind@00715331  size=14 ==== */

void Unwind_00715331(void)

{
  FUN_004cf250();
  return;
}


/* ==== 00715370  Unwind@00715370  size=8 ==== */

void Unwind_00715370(void)

{
  int unaff_EBP;
  
  Concurrency::details::WorkQueue::~WorkQueue(*(WorkQueue **)(unaff_EBP + -0x10));
  return;
}


/* ==== 007153a0  Unwind@007153a0  size=8 ==== */

void Unwind_007153a0(void)

{
  FUN_00450d20();
  return;
}


/* ==== 007153a8  Unwind@007153a8  size=11 ==== */

void Unwind_007153a8(void)

{
  FUN_00403a10();
  return;
}


/* ==== 007153b3  Unwind@007153b3  size=14 ==== */

void Unwind_007153b3(void)

{
  FUN_00403a10();
  return;
}


/* ==== 007153c1  Unwind@007153c1  size=14 ==== */

void Unwind_007153c1(void)

{
  FUN_00519180();
  return;
}


/* ==== 00715400  Unwind@00715400  size=8 ==== */

void Unwind_00715400(void)

{
  FUN_004cf990();
  return;
}


/* ==== 00715408  Unwind@00715408  size=14 ==== */

void Unwind_00715408(void)

{
  FUN_00519110();
  return;
}


/* ==== 00715416  Unwind@00715416  size=14 ==== */

void Unwind_00715416(void)

{
  FUN_00519010();
  return;
}


/* ==== 00715424  Unwind@00715424  size=14 ==== */

void Unwind_00715424(void)

{
  FUN_00518f10();
  return;
}


/* ==== 00715432  Unwind@00715432  size=14 ==== */

void Unwind_00715432(void)

{
  FUN_00519180();
  return;
}


/* ==== 00715440  Unwind@00715440  size=14 ==== */

void Unwind_00715440(void)

{
  FUN_00518e70();
  return;
}


/* ==== 0071544e  Unwind@0071544e  size=14 ==== */

void Unwind_0071544e(void)

{
  FUN_00518e70();
  return;
}


/* ==== 0071545c  Unwind@0071545c  size=14 ==== */

void Unwind_0071545c(void)

{
  FUN_00518dd0();
  return;
}


/* ==== 0071546a  Unwind@0071546a  size=14 ==== */

void Unwind_0071546a(void)

{
  FUN_0044e120();
  return;
}


/* ==== 00715478  Unwind@00715478  size=14 ==== */

void Unwind_00715478(void)

{
  FUN_0044e120();
  return;
}


/* ==== 00715486  Unwind@00715486  size=14 ==== */

void Unwind_00715486(void)

{
  FUN_0044e120();
  return;
}


/* ==== 00715494  Unwind@00715494  size=14 ==== */

void Unwind_00715494(void)

{
  FUN_0044e120();
  return;
}


/* ==== 007154a2  Unwind@007154a2  size=14 ==== */

void Unwind_007154a2(void)

{
  FUN_00518b20();
  return;
}


/* ==== 007154e0  Unwind@007154e0  size=14 ==== */

void Unwind_007154e0(void)

{
  FUN_004019e0();
  return;
}


/* ==== 007154ee  Unwind@007154ee  size=14 ==== */

void Unwind_007154ee(void)

{
  FUN_004019e0();
  return;
}


/* ==== 007154fc  Unwind@007154fc  size=14 ==== */

void Unwind_007154fc(void)

{
  FUN_004019e0();
  return;
}


/* ==== 0071550a  Unwind@0071550a  size=14 ==== */

void Unwind_0071550a(void)

{
  FUN_00518d40();
  return;
}


/* ==== 00715518  Unwind@00715518  size=14 ==== */

void Unwind_00715518(void)

{
  FUN_0051a010();
  return;
}


/* ==== 00715526  Unwind@00715526  size=14 ==== */

void Unwind_00715526(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(*(int *)(unaff_EBP + -0x42c) + 0x74));
  return;
}


/* ==== 00715534  Unwind@00715534  size=17 ==== */

void Unwind_00715534(void)

{
  FUN_004018f0();
  return;
}


/* ==== 00715545  Unwind@00715545  size=17 ==== */

void Unwind_00715545(void)

{
  FUN_004d11b0();
  return;
}


/* ==== 00715556  Unwind@00715556  size=17 ==== */

void Unwind_00715556(void)

{
  FUN_00401ac0();
  return;
}


/* ==== 00715567  Unwind@00715567  size=17 ==== */

void Unwind_00715567(void)

{
  FUN_0044e120();
  return;
}


/* ==== 00715578  Unwind@00715578  size=17 ==== */

void Unwind_00715578(void)

{
  FUN_00401ac0();
  return;
}


/* ==== 00715589  Unwind@00715589  size=17 ==== */

void Unwind_00715589(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(*(int *)(unaff_EBP + -0x42c) + 0x188));
  return;
}


/* ==== 0071559a  Unwind@0071559a  size=17 ==== */

void Unwind_0071559a(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(*(int *)(unaff_EBP + -0x42c) + 0x1a0));
  return;
}


/* ==== 007155ab  Unwind@007155ab  size=17 ==== */

void Unwind_007155ab(void)

{
  FUN_0040d7d0();
  return;
}


/* ==== 007155bc  Unwind@007155bc  size=17 ==== */

void Unwind_007155bc(void)

{
  FUN_00401810();
  return;
}


/* ==== 007155cd  Unwind@007155cd  size=17 ==== */

void Unwind_007155cd(void)

{
  FUN_0048ab20();
  return;
}


/* ==== 007155de  Unwind@007155de  size=17 ==== */

void Unwind_007155de(void)

{
  FUN_00518b20();
  return;
}


/* ==== 007155ef  Unwind@007155ef  size=11 ==== */

void Unwind_007155ef(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x1b4));
  return;
}


/* ==== 007155fa  Unwind@007155fa  size=11 ==== */

void Unwind_007155fa(void)

{
  FUN_00401ac0();
  return;
}


/* ==== 00715605  Unwind@00715605  size=11 ==== */

void Unwind_00715605(void)

{
  int unaff_EBP;
  
  Concurrency::details::WorkQueue::~WorkQueue((WorkQueue *)(unaff_EBP + -0x428));
  return;
}


/* ==== 00715610  Unwind@00715610  size=11 ==== */

void Unwind_00715610(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x1cc));
  return;
}


/* ==== 0071561b  Unwind@0071561b  size=11 ==== */

void Unwind_0071561b(void)

{
  FUN_00401ac0();
  return;
}


/* ==== 00715626  Unwind@00715626  size=11 ==== */

void Unwind_00715626(void)

{
  int unaff_EBP;
  
  Concurrency::details::WorkQueue::~WorkQueue((WorkQueue *)(unaff_EBP + -0x404));
  return;
}


/* ==== 00715631  Unwind@00715631  size=11 ==== */

void Unwind_00715631(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x1e4));
  return;
}


/* ==== 0071563c  Unwind@0071563c  size=11 ==== */

void Unwind_0071563c(void)

{
  FUN_00401ac0();
  return;
}


/* ==== 00715647  Unwind@00715647  size=11 ==== */

void Unwind_00715647(void)

{
  int unaff_EBP;
  
  Concurrency::details::WorkQueue::~WorkQueue((WorkQueue *)(unaff_EBP + -0x3e0));
  return;
}


/* ==== 00715652  Unwind@00715652  size=8 ==== */

void Unwind_00715652(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x7c));
  return;
}


/* ==== 0071565a  Unwind@0071565a  size=11 ==== */

void Unwind_0071565a(void)

{
  FUN_00401ac0();
  return;
}


/* ==== 00715665  Unwind@00715665  size=11 ==== */

void Unwind_00715665(void)

{
  int unaff_EBP;
  
  Concurrency::details::WorkQueue::~WorkQueue((WorkQueue *)(unaff_EBP + -0x3bc));
  return;
}


/* ==== 00715670  Unwind@00715670  size=11 ==== */

void Unwind_00715670(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x94));
  return;
}


/* ==== 0071567b  Unwind@0071567b  size=11 ==== */

void Unwind_0071567b(void)

{
  FUN_00401ac0();
  return;
}


/* ==== 00715686  Unwind@00715686  size=11 ==== */

void Unwind_00715686(void)

{
  int unaff_EBP;
  
  Concurrency::details::WorkQueue::~WorkQueue((WorkQueue *)(unaff_EBP + -0x398));
  return;
}


/* ==== 00715691  Unwind@00715691  size=11 ==== */

void Unwind_00715691(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0xac));
  return;
}


/* ==== 0071569c  Unwind@0071569c  size=11 ==== */

void Unwind_0071569c(void)

{
  FUN_00401ac0();
  return;
}


/* ==== 007156a7  Unwind@007156a7  size=11 ==== */

void Unwind_007156a7(void)

{
  int unaff_EBP;
  
  Concurrency::details::WorkQueue::~WorkQueue((WorkQueue *)(unaff_EBP + -0x374));
  return;
}


/* ==== 007156b2  Unwind@007156b2  size=11 ==== */

void Unwind_007156b2(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0xc4));
  return;
}


/* ==== 007156bd  Unwind@007156bd  size=11 ==== */

void Unwind_007156bd(void)

{
  FUN_00401ac0();
  return;
}


/* ==== 007156c8  Unwind@007156c8  size=11 ==== */

void Unwind_007156c8(void)

{
  int unaff_EBP;
  
  Concurrency::details::WorkQueue::~WorkQueue((WorkQueue *)(unaff_EBP + -0x350));
  return;
}


/* ==== 007156d3  Unwind@007156d3  size=11 ==== */

void Unwind_007156d3(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0xdc));
  return;
}


/* ==== 007156de  Unwind@007156de  size=11 ==== */

void Unwind_007156de(void)

{
  FUN_00401ac0();
  return;
}


/* ==== 007156e9  Unwind@007156e9  size=11 ==== */

void Unwind_007156e9(void)

{
  int unaff_EBP;
  
  Concurrency::details::WorkQueue::~WorkQueue((WorkQueue *)(unaff_EBP + -0x32c));
  return;
}


/* ==== 007156f4  Unwind@007156f4  size=11 ==== */

void Unwind_007156f4(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x16c));
  return;
}


/* ==== 007156ff  Unwind@007156ff  size=11 ==== */

void Unwind_007156ff(void)

{
  FUN_00401ac0();
  return;
}


/* ==== 0071570a  Unwind@0071570a  size=11 ==== */

void Unwind_0071570a(void)

{
  int unaff_EBP;
  
  Concurrency::details::WorkQueue::~WorkQueue((WorkQueue *)(unaff_EBP + -0x308));
  return;
}


/* ==== 00715715  Unwind@00715715  size=11 ==== */

void Unwind_00715715(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0xf4));
  return;
}


/* ==== 00715720  Unwind@00715720  size=11 ==== */

void Unwind_00715720(void)

{
  FUN_00401ac0();
  return;
}


/* ==== 0071572b  Unwind@0071572b  size=11 ==== */

void Unwind_0071572b(void)

{
  int unaff_EBP;
  
  Concurrency::details::WorkQueue::~WorkQueue((WorkQueue *)(unaff_EBP + -0x2e4));
  return;
}


/* ==== 00715736  Unwind@00715736  size=11 ==== */

void Unwind_00715736(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x10c));
  return;
}


/* ==== 00715741  Unwind@00715741  size=11 ==== */

void Unwind_00715741(void)

{
  FUN_00401ac0();
  return;
}


/* ==== 0071574c  Unwind@0071574c  size=11 ==== */

void Unwind_0071574c(void)

{
  int unaff_EBP;
  
  Concurrency::details::WorkQueue::~WorkQueue((WorkQueue *)(unaff_EBP + -0x2c0));
  return;
}


/* ==== 00715757  Unwind@00715757  size=11 ==== */

void Unwind_00715757(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x124));
  return;
}


/* ==== 00715762  Unwind@00715762  size=11 ==== */

void Unwind_00715762(void)

{
  FUN_00401ac0();
  return;
}


/* ==== 0071576d  Unwind@0071576d  size=11 ==== */

void Unwind_0071576d(void)

{
  int unaff_EBP;
  
  Concurrency::details::WorkQueue::~WorkQueue((WorkQueue *)(unaff_EBP + -0x29c));
  return;
}


/* ==== 00715778  Unwind@00715778  size=11 ==== */

void Unwind_00715778(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x13c));
  return;
}


/* ==== 00715783  Unwind@00715783  size=11 ==== */

void Unwind_00715783(void)

{
  FUN_00401ac0();
  return;
}


/* ==== 0071578e  Unwind@0071578e  size=11 ==== */

void Unwind_0071578e(void)

{
  int unaff_EBP;
  
  Concurrency::details::WorkQueue::~WorkQueue((WorkQueue *)(unaff_EBP + -0x278));
  return;
}


/* ==== 00715799  Unwind@00715799  size=11 ==== */

void Unwind_00715799(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x154));
  return;
}


/* ==== 007157a4  Unwind@007157a4  size=11 ==== */

void Unwind_007157a4(void)

{
  FUN_00401ac0();
  return;
}


/* ==== 007157af  Unwind@007157af  size=11 ==== */

void Unwind_007157af(void)

{
  int unaff_EBP;
  
  Concurrency::details::WorkQueue::~WorkQueue((WorkQueue *)(unaff_EBP + -0x254));
  return;
}


/* ==== 007157ba  Unwind@007157ba  size=11 ==== */

void Unwind_007157ba(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x184));
  return;
}


/* ==== 007157c5  Unwind@007157c5  size=11 ==== */

void Unwind_007157c5(void)

{
  FUN_00401ac0();
  return;
}


/* ==== 007157d0  Unwind@007157d0  size=11 ==== */

void Unwind_007157d0(void)

{
  int unaff_EBP;
  
  Concurrency::details::WorkQueue::~WorkQueue((WorkQueue *)(unaff_EBP + -0x230));
  return;
}


/* ==== 007157db  Unwind@007157db  size=11 ==== */

void Unwind_007157db(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x19c));
  return;
}


/* ==== 007157e6  Unwind@007157e6  size=11 ==== */

void Unwind_007157e6(void)

{
  FUN_00401ac0();
  return;
}


/* ==== 007157f1  Unwind@007157f1  size=22 ==== */

void Unwind_007157f1(void)

{
  int unaff_EBP;
  
  _eh_vector_destructor_iterator_
            ((void *)(unaff_EBP + -0x428),0x24,0x10,Concurrency::details::WorkQueue::~WorkQueue);
  return;
}


/* ==== 00715807  Unwind@00715807  size=17 ==== */

void Unwind_00715807(void)

{
  FUN_004d11e0();
  return;
}


/* ==== 00715818  Unwind@00715818  size=30 ==== */

void Unwind_00715818(void)

{
  int unaff_EBP;
  
  _eh_vector_destructor_iterator_
            ((void *)(*(int *)(unaff_EBP + -0x42c) + 0x20c),0x1f0,4,FUN_004d1200);
  return;
}


/* ==== 00715836  Unwind@00715836  size=17 ==== */

void Unwind_00715836(void)

{
  FUN_004676e0();
  return;
}


/* ==== 007158a0  Unwind@007158a0  size=15 ==== */

void Unwind_007158a0(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x10),0x24);
  return;
}


/* ==== 007158e0  Unwind@007158e0  size=15 ==== */

void Unwind_007158e0(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x10),0x1c);
  return;
}


/* ==== 00715920  Unwind@00715920  size=8 ==== */

void Unwind_00715920(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x6c));
  return;
}


/* ==== 00715928  Unwind@00715928  size=8 ==== */

void Unwind_00715928(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x28));
  return;
}


/* ==== 00715930  Unwind@00715930  size=8 ==== */

void Unwind_00715930(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x74));
  return;
}


/* ==== 00715938  Unwind@00715938  size=8 ==== */

void Unwind_00715938(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x7c));
  return;
}


/* ==== 00715940  Unwind@00715940  size=11 ==== */

void Unwind_00715940(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x84));
  return;
}


/* ==== 0071594b  Unwind@0071594b  size=11 ==== */

void Unwind_0071594b(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x8c));
  return;
}


/* ==== 00715956  Unwind@00715956  size=11 ==== */

void Unwind_00715956(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x94));
  return;
}


/* ==== 00715990  Unwind@00715990  size=8 ==== */

void Unwind_00715990(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x4c));
  return;
}


/* ==== 00715998  Unwind@00715998  size=8 ==== */

void Unwind_00715998(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x54));
  return;
}


/* ==== 007159a0  Unwind@007159a0  size=8 ==== */

void Unwind_007159a0(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x5c));
  return;
}


/* ==== 007159a8  Unwind@007159a8  size=8 ==== */

void Unwind_007159a8(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -100));
  return;
}


/* ==== 007159b0  Unwind@007159b0  size=8 ==== */

void Unwind_007159b0(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x6c));
  return;
}


/* ==== 007159b8  Unwind@007159b8  size=8 ==== */

void Unwind_007159b8(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x74));
  return;
}


/* ==== 007159f0  Unwind@007159f0  size=8 ==== */

void Unwind_007159f0(void)

{
  FUN_00401ac0();
  return;
}


/* ==== 007159f8  Unwind@007159f8  size=11 ==== */

void Unwind_007159f8(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0xfc));
  return;
}


/* ==== 00715a03  Unwind@00715a03  size=11 ==== */

void Unwind_00715a03(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x104));
  return;
}


/* ==== 00715a0e  Unwind@00715a0e  size=11 ==== */

void Unwind_00715a0e(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x110));
  return;
}


/* ==== 00715a19  Unwind@00715a19  size=11 ==== */

void Unwind_00715a19(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x118));
  return;
}


/* ==== 00715a24  Unwind@00715a24  size=11 ==== */

void Unwind_00715a24(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x124));
  return;
}


/* ==== 00715a2f  Unwind@00715a2f  size=11 ==== */

void Unwind_00715a2f(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -300));
  return;
}


/* ==== 00715a3a  Unwind@00715a3a  size=11 ==== */

void Unwind_00715a3a(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x138));
  return;
}


/* ==== 00715a45  Unwind@00715a45  size=11 ==== */

void Unwind_00715a45(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x140));
  return;
}


/* ==== 00715a50  Unwind@00715a50  size=11 ==== */

void Unwind_00715a50(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x14c));
  return;
}


/* ==== 00715a5b  Unwind@00715a5b  size=11 ==== */

void Unwind_00715a5b(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x154));
  return;
}


/* ==== 00715a66  Unwind@00715a66  size=8 ==== */

void Unwind_00715a66(void)

{
  FUN_00407a80();
  return;
}


/* ==== 00715a6e  Unwind@00715a6e  size=11 ==== */

void Unwind_00715a6e(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x160));
  return;
}


/* ==== 00715a79  Unwind@00715a79  size=11 ==== */

void Unwind_00715a79(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x168));
  return;
}


/* ==== 00715a84  Unwind@00715a84  size=11 ==== */

void Unwind_00715a84(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x174));
  return;
}


/* ==== 00715a8f  Unwind@00715a8f  size=11 ==== */

void Unwind_00715a8f(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x17c));
  return;
}


/* ==== 00715a9a  Unwind@00715a9a  size=11 ==== */

void Unwind_00715a9a(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x1b4));
  return;
}


/* ==== 00715aa5  Unwind@00715aa5  size=11 ==== */

void Unwind_00715aa5(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -400));
  return;
}


/* ==== 00715ab0  Unwind@00715ab0  size=11 ==== */

void Unwind_00715ab0(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x19c));
  return;
}


/* ==== 00715abb  Unwind@00715abb  size=11 ==== */

void Unwind_00715abb(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x1a4));
  return;
}


/* ==== 00715ac6  Unwind@00715ac6  size=11 ==== */

void Unwind_00715ac6(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x1b0));
  return;
}


/* ==== 00715ad1  Unwind@00715ad1  size=11 ==== */

void Unwind_00715ad1(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x1b8));
  return;
}


/* ==== 00715adc  Unwind@00715adc  size=11 ==== */

void Unwind_00715adc(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x1c4));
  return;
}


/* ==== 00715ae7  Unwind@00715ae7  size=11 ==== */

void Unwind_00715ae7(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x1cc));
  return;
}


/* ==== 00715b30  Unwind@00715b30  size=11 ==== */

void Unwind_00715b30(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x120));
  return;
}


/* ==== 00715b3b  Unwind@00715b3b  size=11 ==== */

void Unwind_00715b3b(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x134));
  return;
}


/* ==== 00715b46  Unwind@00715b46  size=11 ==== */

void Unwind_00715b46(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x13c));
  return;
}


/* ==== 00715b51  Unwind@00715b51  size=11 ==== */

void Unwind_00715b51(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x158));
  return;
}


/* ==== 00715b5c  Unwind@00715b5c  size=11 ==== */

void Unwind_00715b5c(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x160));
  return;
}


/* ==== 00715b67  Unwind@00715b67  size=11 ==== */

void Unwind_00715b67(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x17c));
  return;
}


/* ==== 00715b72  Unwind@00715b72  size=11 ==== */

void Unwind_00715b72(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x184));
  return;
}


/* ==== 00715b7d  Unwind@00715b7d  size=11 ==== */

void Unwind_00715b7d(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x1b0));
  return;
}


/* ==== 00715b88  Unwind@00715b88  size=11 ==== */

void Unwind_00715b88(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x1b8));
  return;
}


/* ==== 00715b93  Unwind@00715b93  size=11 ==== */

void Unwind_00715b93(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x1c4));
  return;
}


/* ==== 00715b9e  Unwind@00715b9e  size=11 ==== */

void Unwind_00715b9e(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x1cc));
  return;
}


/* ==== 00715ba9  Unwind@00715ba9  size=11 ==== */

void Unwind_00715ba9(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x1d8));
  return;
}


/* ==== 00715bb4  Unwind@00715bb4  size=11 ==== */

void Unwind_00715bb4(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x1e0));
  return;
}


/* ==== 00715bbf  Unwind@00715bbf  size=11 ==== */

void Unwind_00715bbf(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x1ec));
  return;
}


/* ==== 00715bca  Unwind@00715bca  size=11 ==== */

void Unwind_00715bca(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -500));
  return;
}


/* ==== 00715bd5  Unwind@00715bd5  size=11 ==== */

void Unwind_00715bd5(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x200));
  return;
}


/* ==== 00715be0  Unwind@00715be0  size=11 ==== */

void Unwind_00715be0(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x208));
  return;
}


/* ==== 00715beb  Unwind@00715beb  size=11 ==== */

void Unwind_00715beb(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x214));
  return;
}


/* ==== 00715bf6  Unwind@00715bf6  size=11 ==== */

void Unwind_00715bf6(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x21c));
  return;
}


/* ==== 00715c01  Unwind@00715c01  size=11 ==== */

void Unwind_00715c01(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x228));
  return;
}


/* ==== 00715c0c  Unwind@00715c0c  size=11 ==== */

void Unwind_00715c0c(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x230));
  return;
}


/* ==== 00715c17  Unwind@00715c17  size=11 ==== */

void Unwind_00715c17(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x23c));
  return;
}


/* ==== 00715c22  Unwind@00715c22  size=11 ==== */

void Unwind_00715c22(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x244));
  return;
}


/* ==== 00715c2d  Unwind@00715c2d  size=11 ==== */

void Unwind_00715c2d(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x250));
  return;
}


/* ==== 00715c38  Unwind@00715c38  size=11 ==== */

void Unwind_00715c38(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -600));
  return;
}


/* ==== 00715c43  Unwind@00715c43  size=11 ==== */

void Unwind_00715c43(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x264));
  return;
}


/* ==== 00715c4e  Unwind@00715c4e  size=11 ==== */

void Unwind_00715c4e(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x26c));
  return;
}


/* ==== 00715c80  Unwind@00715c80  size=11 ==== */

void Unwind_00715c80(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x164));
  return;
}


/* ==== 00715c8b  Unwind@00715c8b  size=11 ==== */

void Unwind_00715c8b(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x16c));
  return;
}


/* ==== 00715cd0  Unwind@00715cd0  size=11 ==== */

void Unwind_00715cd0(void)

{
  FUN_004019e0();
  return;
}


/* ==== 00715cdb  Unwind@00715cdb  size=11 ==== */

void Unwind_00715cdb(void)

{
  FUN_00401810();
  return;
}


/* ==== 00715ce6  Unwind@00715ce6  size=11 ==== */

void Unwind_00715ce6(void)

{
  FUN_00401ac0();
  return;
}


/* ==== 00715cf1  Unwind@00715cf1  size=11 ==== */

void Unwind_00715cf1(void)

{
  FUN_004daf40();
  return;
}


/* ==== 00715cfc  Unwind@00715cfc  size=11 ==== */

void Unwind_00715cfc(void)

{
  FUN_00401ac0();
  return;
}


/* ==== 00715d07  Unwind@00715d07  size=8 ==== */

void Unwind_00715d07(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x70));
  return;
}


/* ==== 00715d0f  Unwind@00715d0f  size=11 ==== */

void Unwind_00715d0f(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x130));
  return;
}


/* ==== 00715d1a  Unwind@00715d1a  size=11 ==== */

void Unwind_00715d1a(void)

{
  FUN_00401ac0();
  return;
}


/* ==== 00715d25  Unwind@00715d25  size=8 ==== */

void Unwind_00715d25(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x58));
  return;
}


/* ==== 00715d2d  Unwind@00715d2d  size=11 ==== */

void Unwind_00715d2d(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x118));
  return;
}


/* ==== 00715d38  Unwind@00715d38  size=11 ==== */

void Unwind_00715d38(void)

{
  FUN_00401ac0();
  return;
}


/* ==== 00715d43  Unwind@00715d43  size=11 ==== */

void Unwind_00715d43(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0xe8));
  return;
}


/* ==== 00715d4e  Unwind@00715d4e  size=8 ==== */

void Unwind_00715d4e(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x40));
  return;
}


/* ==== 00715d56  Unwind@00715d56  size=11 ==== */

void Unwind_00715d56(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0xd0));
  return;
}


/* ==== 00715d61  Unwind@00715d61  size=8 ==== */

void Unwind_00715d61(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x28));
  return;
}


/* ==== 00715d69  Unwind@00715d69  size=11 ==== */

void Unwind_00715d69(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0xb8));
  return;
}


/* ==== 00715d74  Unwind@00715d74  size=11 ==== */

void Unwind_00715d74(void)

{
  FUN_0048ab20();
  return;
}


/* ==== 00715d7f  Unwind@00715d7f  size=11 ==== */

void Unwind_00715d7f(void)

{
  FUN_00401ac0();
  return;
}


/* ==== 00715d8a  Unwind@00715d8a  size=11 ==== */

void Unwind_00715d8a(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0xa0));
  return;
}


/* ==== 00715d95  Unwind@00715d95  size=11 ==== */

void Unwind_00715d95(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x388));
  return;
}


/* ==== 00715da0  Unwind@00715da0  size=11 ==== */

void Unwind_00715da0(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x390));
  return;
}


/* ==== 00715dab  Unwind@00715dab  size=11 ==== */

void Unwind_00715dab(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x88));
  return;
}


/* ==== 00715df0  Unwind@00715df0  size=8 ==== */

void Unwind_00715df0(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + 8));
  return;
}


/* ==== 00715df8  Unwind@00715df8  size=11 ==== */

void Unwind_00715df8(void)

{
  FUN_00403a10();
  return;
}


/* ==== 00715e03  Unwind@00715e03  size=11 ==== */

void Unwind_00715e03(void)

{
  FUN_00403a10();
  return;
}


/* ==== 00715e0e  Unwind@00715e0e  size=11 ==== */

void Unwind_00715e0e(void)

{
  FUN_00403a10();
  return;
}


/* ==== 00715e19  Unwind@00715e19  size=11 ==== */

void Unwind_00715e19(void)

{
  FUN_00403a10();
  return;
}


/* ==== 00715e60  Unwind@00715e60  size=8 ==== */

void Unwind_00715e60(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + 8));
  return;
}


/* ==== 00715e68  Unwind@00715e68  size=21 ==== */

void Unwind_00715e68(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x94),0x9a0);
  return;
}


/* ==== 00715e7d  Unwind@00715e7d  size=18 ==== */

void Unwind_00715e7d(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x9c),0x78);
  return;
}


/* ==== 00715e8f  Unwind@00715e8f  size=11 ==== */

void Unwind_00715e8f(void)

{
  FUN_00401ac0();
  return;
}


/* ==== 00715e9a  Unwind@00715e9a  size=8 ==== */

void Unwind_00715e9a(void)

{
  FUN_005195f0();
  return;
}


/* ==== 00715ea2  Unwind@00715ea2  size=18 ==== */

void Unwind_00715ea2(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0xd8),0x34);
  return;
}


/* ==== 00715eb4  Unwind@00715eb4  size=11 ==== */

void Unwind_00715eb4(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x168));
  return;
}


/* ==== 00715ef0  Unwind@00715ef0  size=8 ==== */

void Unwind_00715ef0(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x1c));
  return;
}


/* ==== 00715ef8  Unwind@00715ef8  size=8 ==== */

void Unwind_00715ef8(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x24));
  return;
}


/* ==== 00715f30  Unwind@00715f30  size=18 ==== */

void Unwind_00715f30(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -600),0x34);
  return;
}


/* ==== 00715f80  Unwind@00715f80  size=8 ==== */

void Unwind_00715f80(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x28));
  return;
}


/* ==== 00715f88  Unwind@00715f88  size=8 ==== */

void Unwind_00715f88(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x40));
  return;
}


/* ==== 00715fc0  Unwind@00715fc0  size=8 ==== */

void Unwind_00715fc0(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x28));
  return;
}


/* ==== 00716000  Unwind@00716000  size=8 ==== */

void Unwind_00716000(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x28));
  return;
}


/* ==== 00716008  Unwind@00716008  size=8 ==== */

void Unwind_00716008(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -100));
  return;
}


/* ==== 00716040  Unwind@00716040  size=8 ==== */

void Unwind_00716040(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x28));
  return;
}


/* ==== 00716048  Unwind@00716048  size=11 ==== */

void Unwind_00716048(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x148));
  return;
}


/* ==== 00716053  Unwind@00716053  size=11 ==== */

void Unwind_00716053(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0xf8));
  return;
}


/* ==== 0071605e  Unwind@0071605e  size=11 ==== */

void Unwind_0071605e(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x104));
  return;
}


/* ==== 00716069  Unwind@00716069  size=8 ==== */

void Unwind_00716069(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x40));
  return;
}


/* ==== 00716071  Unwind@00716071  size=11 ==== */

void Unwind_00716071(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -300));
  return;
}


/* ==== 0071607c  Unwind@0071607c  size=11 ==== */

void Unwind_0071607c(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x154));
  return;
}


/* ==== 00716087  Unwind@00716087  size=11 ==== */

void Unwind_00716087(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x13c));
  return;
}


/* ==== 007160d0  Unwind@007160d0  size=11 ==== */

void Unwind_007160d0(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0xb8));
  return;
}


/* ==== 007160db  Unwind@007160db  size=11 ==== */

void Unwind_007160db(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0xc0));
  return;
}


/* ==== 007160e6  Unwind@007160e6  size=11 ==== */

void Unwind_007160e6(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -200));
  return;
}


/* ==== 007160f1  Unwind@007160f1  size=11 ==== */

void Unwind_007160f1(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0xd4));
  return;
}


/* ==== 007160fc  Unwind@007160fc  size=11 ==== */

void Unwind_007160fc(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0xdc));
  return;
}


/* ==== 00716107  Unwind@00716107  size=11 ==== */

void Unwind_00716107(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0xf0));
  return;
}


/* ==== 00716112  Unwind@00716112  size=11 ==== */

void Unwind_00716112(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0xf8));
  return;
}


/* ==== 00716150  Unwind@00716150  size=11 ==== */

void Unwind_00716150(void)

{
  FUN_004052a0();
  return;
}


/* ==== 0071615b  Unwind@0071615b  size=11 ==== */

void Unwind_0071615b(void)

{
  FUN_004039a0();
  return;
}


/* ==== 00716166  Unwind@00716166  size=11 ==== */

void Unwind_00716166(void)

{
  FUN_00489ba0();
  return;
}


/* ==== 00716171  Unwind@00716171  size=11 ==== */

void Unwind_00716171(void)

{
  FUN_00456cf0();
  return;
}


/* ==== 007161b0  Unwind@007161b0  size=8 ==== */

void Unwind_007161b0(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x48));
  return;
}


/* ==== 007161b8  Unwind@007161b8  size=8 ==== */

void Unwind_007161b8(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x54));
  return;
}


/* ==== 007161f0  Unwind@007161f0  size=12 ==== */

void Unwind_007161f0(void)

{
  FUN_006e4bbf(&DAT_007cab5c);
  return;
}


/* ==== 007161fc  Unwind@007161fc  size=11 ==== */

void Unwind_007161fc(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x4d8));
  return;
}


/* ==== 00716240  Unwind@00716240  size=8 ==== */

void Unwind_00716240(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x28));
  return;
}


/* ==== 00716280  Unwind@00716280  size=25 ==== */

void Unwind_00716280(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x1c) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x1c) = *(uint *)(unaff_EBP + -0x1c) & 0xfffffffe;
    FUN_00518640();
    return;
  }
  return;
}


/* ==== 00716299  Unwind@00716299  size=8 ==== */

void Unwind_00716299(void)

{
  FUN_00518640();
  return;
}


/* ==== 007162a1  Unwind@007162a1  size=8 ==== */

void Unwind_007162a1(void)

{
  FUN_0048ad80();
  return;
}


/* ==== 007162a9  Unwind@007162a9  size=8 ==== */

void Unwind_007162a9(void)

{
  FUN_0048ad80();
  return;
}


/* ==== 007162b1  Unwind@007162b1  size=8 ==== */

void Unwind_007162b1(void)

{
  FUN_0048ad80();
  return;
}


/* ==== 007162e0  Unwind@007162e0  size=8 ==== */

void Unwind_007162e0(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + 0xc));
  return;
}


/* ==== 007162e8  Unwind@007162e8  size=11 ==== */

void Unwind_007162e8(void)

{
  int unaff_EBP;
  
  Concurrency::details::_AsyncTaskCollection::~_AsyncTaskCollection
            ((_AsyncTaskCollection *)(unaff_EBP + -0x3d4));
  return;
}


/* ==== 007162f3  Unwind@007162f3  size=11 ==== */

void Unwind_007162f3(void)

{
  int unaff_EBP;
  
  Concurrency::details::_AsyncTaskCollection::~_AsyncTaskCollection
            ((_AsyncTaskCollection *)(unaff_EBP + -0x550));
  return;
}


/* ==== 007162fe  Unwind@007162fe  size=11 ==== */

void Unwind_007162fe(void)

{
  FUN_00518640();
  return;
}


/* ==== 00716309  Unwind@00716309  size=11 ==== */

void Unwind_00716309(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0xe8));
  return;
}


/* ==== 00716314  Unwind@00716314  size=11 ==== */

void Unwind_00716314(void)

{
  FUN_0048ad80();
  return;
}


/* ==== 0071631f  Unwind@0071631f  size=11 ==== */

void Unwind_0071631f(void)

{
  FUN_00518640();
  return;
}


/* ==== 0071632a  Unwind@0071632a  size=11 ==== */

void Unwind_0071632a(void)

{
  FUN_00518640();
  return;
}


/* ==== 00716335  Unwind@00716335  size=11 ==== */

void Unwind_00716335(void)

{
  FUN_004ec720();
  return;
}


/* ==== 00716340  Unwind@00716340  size=11 ==== */

void Unwind_00716340(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0xaf4));
  return;
}


/* ==== 0071634b  Unwind@0071634b  size=11 ==== */

void Unwind_0071634b(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0xd0));
  return;
}


/* ==== 00716356  Unwind@00716356  size=11 ==== */

void Unwind_00716356(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0xb04));
  return;
}


/* ==== 00716361  Unwind@00716361  size=11 ==== */

void Unwind_00716361(void)

{
  FUN_00415410();
  return;
}


/* ==== 0071636c  Unwind@0071636c  size=11 ==== */

void Unwind_0071636c(void)

{
  FUN_0040c940();
  return;
}


/* ==== 007163b0  Unwind@007163b0  size=8 ==== */

void Unwind_007163b0(void)

{
  int unaff_EBP;
  
  Concurrency::details::_RunAllParam<unsigned_char>::~_RunAllParam<unsigned_char>
            (*(_RunAllParam<unsigned_char> **)(unaff_EBP + -0x10));
  return;
}


/* ==== 007163e0  Unwind@007163e0  size=18 ==== */

void Unwind_007163e0(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x38),0x9d8);
  return;
}


/* ==== 007163f2  Unwind@007163f2  size=18 ==== */

void Unwind_007163f2(void)

{
  int unaff_EBP;
  
  FUN_006e4b8e(*(undefined4 *)(unaff_EBP + -0x40),0x19c);
  return;
}


/* ==== 00716404  Unwind@00716404  size=8 ==== */

void Unwind_00716404(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x28));
  return;
}


/* ==== 00716440  Unwind@00716440  size=8 ==== */

void Unwind_00716440(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x28));
  return;
}


/* ==== 00716448  Unwind@00716448  size=11 ==== */

void Unwind_00716448(void)

{
  FUN_00403a10();
  return;
}


/* ==== 00716453  Unwind@00716453  size=11 ==== */

void Unwind_00716453(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x1f8));
  return;
}


/* ==== 0071645e  Unwind@0071645e  size=11 ==== */

void Unwind_0071645e(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x200));
  return;
}


/* ==== 00716469  Unwind@00716469  size=11 ==== */

void Unwind_00716469(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x20c));
  return;
}


/* ==== 00716474  Unwind@00716474  size=11 ==== */

void Unwind_00716474(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x214));
  return;
}


/* ==== 0071647f  Unwind@0071647f  size=11 ==== */

void Unwind_0071647f(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x220));
  return;
}


/* ==== 0071648a  Unwind@0071648a  size=11 ==== */

void Unwind_0071648a(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x228));
  return;
}


/* ==== 007164d0  Unwind@007164d0  size=11 ==== */

void Unwind_007164d0(void)

{
  int unaff_EBP;
  
  CTraceSnapshot::~CTraceSnapshot((CTraceSnapshot *)(unaff_EBP + -0xf0));
  return;
}


/* ==== 007164db  Unwind@007164db  size=11 ==== */

void Unwind_007164db(void)

{
  FUN_004edf90();
  return;
}


/* ==== 00716510  Unwind@00716510  size=8 ==== */

void Unwind_00716510(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x40));
  return;
}


/* ==== 00716518  Unwind@00716518  size=11 ==== */

void Unwind_00716518(void)

{
  FUN_00401ac0();
  return;
}


/* ==== 00716523  Unwind@00716523  size=8 ==== */

void Unwind_00716523(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x28));
  return;
}


/* ==== 00716560  Unwind@00716560  size=8 ==== */

void Unwind_00716560(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x28));
  return;
}


/* ==== 007165a0  Unwind@007165a0  size=11 ==== */

void Unwind_007165a0(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0xd04));
  return;
}


/* ==== 007165ab  Unwind@007165ab  size=11 ==== */

void Unwind_007165ab(void)

{
  FUN_0048a7b0();
  return;
}


/* ==== 007165b6  Unwind@007165b6  size=11 ==== */

void Unwind_007165b6(void)

{
  FUN_004089b0();
  return;
}


/* ==== 007165c1  Unwind@007165c1  size=11 ==== */

void Unwind_007165c1(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x1334));
  return;
}


/* ==== 007165cc  Unwind@007165cc  size=11 ==== */

void Unwind_007165cc(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x134c));
  return;
}


/* ==== 007165d7  Unwind@007165d7  size=11 ==== */

void Unwind_007165d7(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x1364));
  return;
}


/* ==== 007165e2  Unwind@007165e2  size=11 ==== */

void Unwind_007165e2(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x137c));
  return;
}


/* ==== 007165ed  Unwind@007165ed  size=11 ==== */

void Unwind_007165ed(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x3a28));
  return;
}


/* ==== 007165f8  Unwind@007165f8  size=11 ==== */

void Unwind_007165f8(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x12ec));
  return;
}


/* ==== 00716603  Unwind@00716603  size=11 ==== */

void Unwind_00716603(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x1304));
  return;
}


/* ==== 0071660e  Unwind@0071660e  size=11 ==== */

void Unwind_0071660e(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x3a30));
  return;
}


/* ==== 00716619  Unwind@00716619  size=11 ==== */

void Unwind_00716619(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x12a4));
  return;
}


/* ==== 00716624  Unwind@00716624  size=11 ==== */

void Unwind_00716624(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x12bc));
  return;
}


/* ==== 0071662f  Unwind@0071662f  size=11 ==== */

void Unwind_0071662f(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x3a38));
  return;
}


/* ==== 0071663a  Unwind@0071663a  size=11 ==== */

void Unwind_0071663a(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x3a4c));
  return;
}


/* ==== 00716645  Unwind@00716645  size=11 ==== */

void Unwind_00716645(void)

{
  FUN_004089b0();
  return;
}


/* ==== 00716650  Unwind@00716650  size=11 ==== */

void Unwind_00716650(void)

{
  FUN_004039a0();
  return;
}


/* ==== 0071665b  Unwind@0071665b  size=11 ==== */

void Unwind_0071665b(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0xad8));
  return;
}


/* ==== 00716666  Unwind@00716666  size=11 ==== */

void Unwind_00716666(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0xd7c));
  return;
}


/* ==== 00716671  Unwind@00716671  size=11 ==== */

void Unwind_00716671(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0xd94));
  return;
}


/* ==== 0071667c  Unwind@0071667c  size=11 ==== */

void Unwind_0071667c(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0xdac));
  return;
}


/* ==== 00716687  Unwind@00716687  size=11 ==== */

void Unwind_00716687(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0xf8c));
  return;
}


/* ==== 00716692  Unwind@00716692  size=11 ==== */

void Unwind_00716692(void)

{
  FUN_00401ac0();
  return;
}


/* ==== 0071669d  Unwind@0071669d  size=11 ==== */

void Unwind_0071669d(void)

{
  FUN_00401ac0();
  return;
}


/* ==== 007166a8  Unwind@007166a8  size=11 ==== */

void Unwind_007166a8(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x3ab0));
  return;
}


/* ==== 007166b3  Unwind@007166b3  size=11 ==== */

void Unwind_007166b3(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x3ab8));
  return;
}


/* ==== 007166be  Unwind@007166be  size=11 ==== */

void Unwind_007166be(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x3ac4));
  return;
}


/* ==== 007166c9  Unwind@007166c9  size=11 ==== */

void Unwind_007166c9(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x3acc));
  return;
}


/* ==== 007166d4  Unwind@007166d4  size=11 ==== */

void Unwind_007166d4(void)

{
  FUN_00510310();
  return;
}


/* ==== 007166df  Unwind@007166df  size=11 ==== */

void Unwind_007166df(void)

{
  FUN_00510330();
  return;
}


/* ==== 007166ea  Unwind@007166ea  size=11 ==== */

void Unwind_007166ea(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x3b08));
  return;
}


/* ==== 007166f5  Unwind@007166f5  size=11 ==== */

void Unwind_007166f5(void)

{
  FUN_00510310();
  return;
}


/* ==== 00716700  Unwind@00716700  size=11 ==== */

void Unwind_00716700(void)

{
  FUN_00510330();
  return;
}


/* ==== 0071670b  Unwind@0071670b  size=11 ==== */

void Unwind_0071670b(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x3b20));
  return;
}


/* ==== 00716716  Unwind@00716716  size=11 ==== */

void Unwind_00716716(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0xcbc));
  return;
}


/* ==== 00716721  Unwind@00716721  size=11 ==== */

void Unwind_00716721(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0xcd4));
  return;
}


/* ==== 0071672c  Unwind@0071672c  size=11 ==== */

void Unwind_0071672c(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0xcec));
  return;
}


/* ==== 00716737  Unwind@00716737  size=11 ==== */

void Unwind_00716737(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0xd34));
  return;
}


/* ==== 00716742  Unwind@00716742  size=11 ==== */

void Unwind_00716742(void)

{
  FUN_00489ba0();
  return;
}


/* ==== 0071674d  Unwind@0071674d  size=11 ==== */

void Unwind_0071674d(void)

{
  FUN_00456cf0();
  return;
}


/* ==== 00716758  Unwind@00716758  size=11 ==== */

void Unwind_00716758(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x1c04));
  return;
}


/* ==== 00716763  Unwind@00716763  size=11 ==== */

void Unwind_00716763(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x1c1c));
  return;
}


/* ==== 0071676e  Unwind@0071676e  size=11 ==== */

void Unwind_0071676e(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x1c34));
  return;
}


/* ==== 00716779  Unwind@00716779  size=11 ==== */

void Unwind_00716779(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x1c4c));
  return;
}


/* ==== 00716784  Unwind@00716784  size=11 ==== */

void Unwind_00716784(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x1c64));
  return;
}


/* ==== 0071678f  Unwind@0071678f  size=11 ==== */

void Unwind_0071678f(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x1c7c));
  return;
}


/* ==== 0071679a  Unwind@0071679a  size=11 ==== */

void Unwind_0071679a(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0xca4));
  return;
}


/* ==== 007167a5  Unwind@007167a5  size=11 ==== */

void Unwind_007167a5(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x14cc));
  return;
}


/* ==== 007167b0  Unwind@007167b0  size=11 ==== */

void Unwind_007167b0(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x1b44));
  return;
}


/* ==== 007167bb  Unwind@007167bb  size=11 ==== */

void Unwind_007167bb(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x1b5c));
  return;
}


/* ==== 007167c6  Unwind@007167c6  size=11 ==== */

void Unwind_007167c6(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x1b74));
  return;
}


/* ==== 007167d1  Unwind@007167d1  size=11 ==== */

void Unwind_007167d1(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x1b8c));
  return;
}


/* ==== 007167dc  Unwind@007167dc  size=11 ==== */

void Unwind_007167dc(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x1ba4));
  return;
}


/* ==== 007167e7  Unwind@007167e7  size=11 ==== */

void Unwind_007167e7(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x1bbc));
  return;
}


/* ==== 007167f2  Unwind@007167f2  size=11 ==== */

void Unwind_007167f2(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x1bd4));
  return;
}


/* ==== 007167fd  Unwind@007167fd  size=11 ==== */

void Unwind_007167fd(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x1bec));
  return;
}


/* ==== 00716808  Unwind@00716808  size=11 ==== */

void Unwind_00716808(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0xb10));
  return;
}


/* ==== 00716813  Unwind@00716813  size=11 ==== */

void Unwind_00716813(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x3b9c));
  return;
}


/* ==== 0071681e  Unwind@0071681e  size=11 ==== */

void Unwind_0071681e(void)

{
  FUN_00510310();
  return;
}


/* ==== 00716829  Unwind@00716829  size=11 ==== */

void Unwind_00716829(void)

{
  FUN_00510330();
  return;
}


/* ==== 00716834  Unwind@00716834  size=11 ==== */

void Unwind_00716834(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x3ba4));
  return;
}


/* ==== 0071683f  Unwind@0071683f  size=11 ==== */

void Unwind_0071683f(void)

{
  FUN_00510310();
  return;
}


/* ==== 0071684a  Unwind@0071684a  size=11 ==== */

void Unwind_0071684a(void)

{
  FUN_00510330();
  return;
}


/* ==== 00716855  Unwind@00716855  size=11 ==== */

void Unwind_00716855(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x3bbc));
  return;
}


/* ==== 00716860  Unwind@00716860  size=11 ==== */

void Unwind_00716860(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x1acc));
  return;
}


/* ==== 0071686b  Unwind@0071686b  size=11 ==== */

void Unwind_0071686b(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x1ae4));
  return;
}


/* ==== 00716876  Unwind@00716876  size=11 ==== */

void Unwind_00716876(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x1afc));
  return;
}


/* ==== 00716881  Unwind@00716881  size=11 ==== */

void Unwind_00716881(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x1b14));
  return;
}


/* ==== 0071688c  Unwind@0071688c  size=11 ==== */

void Unwind_0071688c(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x1a6c));
  return;
}


/* ==== 00716897  Unwind@00716897  size=11 ==== */

void Unwind_00716897(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x1a84));
  return;
}


/* ==== 007168a2  Unwind@007168a2  size=11 ==== */

void Unwind_007168a2(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x1a9c));
  return;
}


/* ==== 007168ad  Unwind@007168ad  size=11 ==== */

void Unwind_007168ad(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x1ab4));
  return;
}


/* ==== 007168b8  Unwind@007168b8  size=11 ==== */

void Unwind_007168b8(void)

{
  FUN_004039a0();
  return;
}


/* ==== 007168c3  Unwind@007168c3  size=11 ==== */

void Unwind_007168c3(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x3c30));
  return;
}


/* ==== 007168ce  Unwind@007168ce  size=11 ==== */

void Unwind_007168ce(void)

{
  FUN_00489ba0();
  return;
}


/* ==== 007168d9  Unwind@007168d9  size=11 ==== */

void Unwind_007168d9(void)

{
  FUN_00456cf0();
  return;
}


/* ==== 007168e4  Unwind@007168e4  size=11 ==== */

void Unwind_007168e4(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x3c60));
  return;
}


/* ==== 007168ef  Unwind@007168ef  size=11 ==== */

void Unwind_007168ef(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x3c6c));
  return;
}


/* ==== 007168fa  Unwind@007168fa  size=11 ==== */

void Unwind_007168fa(void)

{
  FUN_00489ba0();
  return;
}


/* ==== 00716905  Unwind@00716905  size=11 ==== */

void Unwind_00716905(void)

{
  FUN_00456cf0();
  return;
}


/* ==== 00716910  Unwind@00716910  size=11 ==== */

void Unwind_00716910(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x3c94));
  return;
}


/* ==== 0071691b  Unwind@0071691b  size=11 ==== */

void Unwind_0071691b(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0xac0));
  return;
}


/* ==== 00716926  Unwind@00716926  size=11 ==== */

void Unwind_00716926(void)

{
  FUN_004039a0();
  return;
}


/* ==== 00716931  Unwind@00716931  size=11 ==== */

void Unwind_00716931(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x1a24));
  return;
}


/* ==== 0071693c  Unwind@0071693c  size=11 ==== */

void Unwind_0071693c(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x1a3c));
  return;
}


/* ==== 00716947  Unwind@00716947  size=11 ==== */

void Unwind_00716947(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x3cd4));
  return;
}


/* ==== 00716952  Unwind@00716952  size=11 ==== */

void Unwind_00716952(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x3cdc));
  return;
}


/* ==== 0071695d  Unwind@0071695d  size=11 ==== */

void Unwind_0071695d(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x3ce8));
  return;
}


/* ==== 00716968  Unwind@00716968  size=11 ==== */

void Unwind_00716968(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x19f4));
  return;
}


/* ==== 00716973  Unwind@00716973  size=11 ==== */

void Unwind_00716973(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x1a0c));
  return;
}


/* ==== 0071697e  Unwind@0071697e  size=11 ==== */

void Unwind_0071697e(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x3cf8));
  return;
}


/* ==== 00716989  Unwind@00716989  size=11 ==== */

void Unwind_00716989(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x3d00));
  return;
}


/* ==== 00716994  Unwind@00716994  size=11 ==== */

void Unwind_00716994(void)

{
  FUN_00493fe0();
  return;
}


/* ==== 0071699f  Unwind@0071699f  size=11 ==== */

void Unwind_0071699f(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x3d24));
  return;
}


/* ==== 007169aa  Unwind@007169aa  size=11 ==== */

void Unwind_007169aa(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x3d2c));
  return;
}


/* ==== 007169b5  Unwind@007169b5  size=11 ==== */

void Unwind_007169b5(void)

{
  FUN_00493fe0();
  return;
}


/* ==== 007169c0  Unwind@007169c0  size=11 ==== */

void Unwind_007169c0(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0xaa8));
  return;
}


/* ==== 007169cb  Unwind@007169cb  size=11 ==== */

void Unwind_007169cb(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x37f8));
  return;
}


/* ==== 007169d6  Unwind@007169d6  size=11 ==== */

void Unwind_007169d6(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x3800));
  return;
}


/* ==== 007169e1  Unwind@007169e1  size=11 ==== */

void Unwind_007169e1(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x380c));
  return;
}


/* ==== 007169ec  Unwind@007169ec  size=11 ==== */

void Unwind_007169ec(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x3814));
  return;
}


/* ==== 007169f7  Unwind@007169f7  size=11 ==== */

void Unwind_007169f7(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x381c));
  return;
}


/* ==== 00716a02  Unwind@00716a02  size=11 ==== */

void Unwind_00716a02(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            (*(function<void___cdecl(void)> **)(unaff_EBP + -0x3824));
  return;
}


/* ==== 00716a0d  Unwind@00716a0d  size=11 ==== */

void Unwind_00716a0d(void)

{
  FUN_004089b0();
  return;
}


/* ==== 00716a18  Unwind@00716a18  size=11 ==== */

void Unwind_00716a18(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x18bc));
  return;
}


/* ==== 00716a23  Unwind@00716a23  size=11 ==== */

void Unwind_00716a23(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x18d4));
  return;
}


/* ==== 00716a2e  Unwind@00716a2e  size=11 ==== */

void Unwind_00716a2e(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x18ec));
  return;
}


/* ==== 00716a39  Unwind@00716a39  size=11 ==== */

void Unwind_00716a39(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x1904));
  return;
}


/* ==== 00716a44  Unwind@00716a44  size=11 ==== */

void Unwind_00716a44(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x191c));
  return;
}


/* ==== 00716a4f  Unwind@00716a4f  size=11 ==== */

void Unwind_00716a4f(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x1934));
  return;
}


/* ==== 00716a5a  Unwind@00716a5a  size=11 ==== */

void Unwind_00716a5a(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x194c));
  return;
}


/* ==== 00716a65  Unwind@00716a65  size=11 ==== */

void Unwind_00716a65(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x1964));
  return;
}


/* ==== 00716a70  Unwind@00716a70  size=11 ==== */

void Unwind_00716a70(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x197c));
  return;
}


/* ==== 00716a7b  Unwind@00716a7b  size=11 ==== */

void Unwind_00716a7b(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x1994));
  return;
}


/* ==== 00716a86  Unwind@00716a86  size=11 ==== */

void Unwind_00716a86(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x19ac));
  return;
}


/* ==== 00716a91  Unwind@00716a91  size=11 ==== */

void Unwind_00716a91(void)

{
  int unaff_EBP;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(unaff_EBP + -0x19c4));
  return;
}


