/* Auto-decompiled pseudo-code from game.exe / unclassified_0x00400000_0x004fffff part 1/3 */
/* NOT original source. Bucketed by evidence (strings/imports/call-graph), not raw address. */

/* ==== 00401000  FUN_00401000  size=28 ==== */

void FUN_00401000(void)

{
  FUN_00489c70();
  FUN_006e4fef(FUN_0072a980);
  return;
}


/* ==== 00401020  FUN_00401020  size=28 ==== */

void FUN_00401020(void)

{
  FUN_00489bc0();
  FUN_006e4fef(FUN_0072a990);
  return;
}


/* ==== 00401040  FUN_00401040  size=28 ==== */

void FUN_00401040(void)

{
  FUN_004ab1c0();
  FUN_006e4fef(FUN_0072a9b0);
  return;
}


/* ==== 00401060  FUN_00401060  size=16 ==== */

void FUN_00401060(void)

{
  allocator<>();
  return;
}


/* ==== 00401070  FUN_00401070  size=28 ==== */

void FUN_00401070(void)

{
  FUN_00489f50();
  FUN_006e4fef(FUN_0072a9e0);
  return;
}


/* ==== 00401090  FUN_00401090  size=28 ==== */

void FUN_00401090(void)

{
  FUN_00489f50();
  FUN_006e4fef(FUN_0072a9f0);
  return;
}


/* ==== 004010b0  FUN_004010b0  size=28 ==== */

void FUN_004010b0(void)

{
  FUN_00489f50();
  FUN_006e4fef(FUN_0072aa00);
  return;
}


/* ==== 004010d0  FUN_004010d0  size=28 ==== */

void FUN_004010d0(void)

{
  FUN_005187f0();
  FUN_006e4fef(FUN_0072aa10);
  return;
}


/* ==== 004010f0  FUN_004010f0  size=28 ==== */

void FUN_004010f0(void)

{
  FUN_00518110();
  FUN_006e4fef(FUN_0072aa20);
  return;
}


/* ==== 00401110  FUN_00401110  size=28 ==== */

void FUN_00401110(void)

{
  FUN_0048a000();
  FUN_006e4fef(FUN_0072aa30);
  return;
}


/* ==== 00401130  FUN_00401130  size=56 ==== */

void FUN_00401130(void)

{
  undefined4 uVar1;
  undefined4 local_c [2];
  
  local_c[0] = 0;
  uVar1 = allocator<>();
  FUN_00518780(4,local_c,uVar1);
  FUN_006e4fef(FUN_0072aa40);
  return;
}


/* ==== 00401170  FUN_00401170  size=16 ==== */

void FUN_00401170(void)

{
  CMFCToolBarInfo::CMFCToolBarInfo((CMFCToolBarInfo *)&DAT_007ca70c);
  return;
}


/* ==== 00401180  FUN_00401180  size=16 ==== */

void FUN_00401180(void)

{
  FUN_004ce350();
  return;
}


/* ==== 00401190  FUN_00401190  size=120 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00401190(void)

{
  int iVar1;
  undefined4 local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007158b4;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = crt_or_heap_alloc_helper(0x24,DAT_007c5940 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  if (iVar1 == 0) {
    local_18 = 0;
  }
  else {
    local_18 = FUN_004d14b0();
  }
  _DAT_007ca738 = local_18;
  ExceptionList = local_10;
  return;
}


/* ==== 00401210  FUN_00401210  size=144 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00401210(void)

{
  undefined4 *puVar1;
  undefined4 local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007158f4;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = (undefined4 *)crt_or_heap_alloc_helper(0x1c,DAT_007c5940 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    local_18 = 0;
  }
  else {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    local_18 = FUN_004d1b00();
  }
  _DAT_007ca72c = local_18;
  ExceptionList = local_10;
  return;
}


/* ==== 004012a0  FUN_004012a0  size=28 ==== */

void FUN_004012a0(void)

{
  FUN_00518310();
  FUN_006e4fef(FUN_0072aa70);
  return;
}


/* ==== 004012c0  FUN_004012c0  size=28 ==== */

void FUN_004012c0(void)

{
  FUN_005182b0();
  FUN_006e4fef(FUN_0072aa80);
  return;
}


/* ==== 004012e0  FUN_004012e0  size=28 ==== */

void FUN_004012e0(void)

{
  FUN_005182b0();
  FUN_006e4fef(FUN_0072aa90);
  return;
}


/* ==== 00401300  FUN_00401300  size=28 ==== */

void FUN_00401300(void)

{
  FUN_0048a000();
  FUN_006e4fef(FUN_0072aab0);
  return;
}


/* ==== 00401320  FUN_00401320  size=28 ==== */

void FUN_00401320(void)

{
  FUN_00498b80();
  FUN_006e4fef(FUN_0072aac0);
  return;
}


/* ==== 00401340  FUN_00401340  size=28 ==== */

void FUN_00401340(void)

{
  FUN_005182b0();
  FUN_006e4fef(FUN_0072ae20);
  return;
}


/* ==== 00401360  FUN_00401360  size=28 ==== */

void FUN_00401360(void)

{
  FUN_0048a000();
  FUN_006e4fef(FUN_0072ae40);
  return;
}


/* ==== 00401380  FUN_00401380  size=28 ==== */

void FUN_00401380(void)

{
  FUN_0069f240();
  FUN_006e4fef(FUN_0072ae50);
  return;
}


/* ==== 004013a0  FUN_004013a0  size=28 ==== */

void FUN_004013a0(void)

{
  FUN_0040d650();
  FUN_006e4fef(FUN_0072ae60);
  return;
}


/* ==== 004013c0  FUN_004013c0  size=28 ==== */

void FUN_004013c0(void)

{
  FUN_0069eef0();
  FUN_006e4fef(FUN_0072af40);
  return;
}


/* ==== 004013e0  FUN_004013e0  size=8 ==== */

undefined4 FUN_004013e0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


/* ==== 004013f0  exception  size=47 ==== */

/* Library Function - Single Match
    public: __thiscall std::exception::exception(char const * const,int)
   
   Libraries: Visual Studio 2015 Debug, Visual Studio 2017 Debug, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

exception * __thiscall std::exception::exception(exception *this,char *param_1,int param_2)

{
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(char **)(this + 4) = param_1;
  return this;
}


/* ==== 00401420  exception  size=60 ==== */

/* Library Function - Single Match
    public: __thiscall std::exception::exception(class std::exception const &)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

exception * __thiscall std::exception::exception(exception *this,exception *param_1)

{
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  ___std_exception_copy(param_1 + 4,this + 4);
  return this;
}


/* ==== 00401460  ~exception  size=35 ==== */

/* Library Function - Single Match
    public: virtual __thiscall std::exception::~exception(void)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void __thiscall std::exception::~exception(exception *this)

{
  *(undefined ***)this = vftable;
  ___std_exception_destroy(this + 4);
  return;
}


/* ==== 00401490  what  size=43 ==== */

/* Library Function - Single Match
    public: virtual char const * __thiscall std::exception::what(void)const 
   
   Library: Visual Studio */

char * __thiscall std::exception::what(exception *this)

{
  char *local_c;
  
  if (*(int *)(this + 4) == 0) {
    local_c = "Unknown exception";
  }
  else {
    local_c = *(char **)(this + 4);
  }
  return local_c;
}


/* ==== 004014c0  FUN_004014c0  size=46 ==== */

exception * FUN_004014c0(uint param_1)

{
  exception *in_ECX;
  
  std::exception::~exception(in_ECX);
  if ((param_1 & 1) != 0) {
    FUN_006e4b8e(in_ECX,0xc);
  }
  return in_ECX;
}


/* ==== 004014f0  bad_alloc  size=39 ==== */

/* Library Function - Single Match
    private: __thiscall std::bad_alloc::bad_alloc(char const * const)
   
   Libraries: Visual Studio 2015 Debug, Visual Studio 2017 Debug, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

bad_alloc * __thiscall std::bad_alloc::bad_alloc(bad_alloc *this,char *param_1)

{
  exception::exception((exception *)this,param_1,1);
  *(undefined ***)this = vftable;
  return this;
}


/* ==== 00401520  FID_conflict:`scalar_deleting_destructor'  size=46 ==== */

/* Library Function - Multiple Matches With Different Base Names
    public: virtual void * __thiscall Concurrency::details::_Interruption_exception::`scalar
   deleting destructor'(unsigned int)
    public: virtual void * __thiscall std::__non_rtti_object::`scalar deleting destructor'(unsigned
   int)
    public: virtual void * __thiscall std::bad_alloc::`scalar deleting destructor'(unsigned int)
    public: virtual void * __thiscall std::bad_array_new_length::`scalar deleting
   destructor'(unsigned int)
     39 names - too many to list
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

undefined4 FID_conflict__scalar_deleting_destructor_(uint param_1)

{
  undefined4 in_ECX;
  
  FUN_00401550();
  if ((param_1 & 1) != 0) {
    FUN_006e4b8e(in_ECX,0xc);
  }
  return in_ECX;
}


/* ==== 00401550  FUN_00401550  size=20 ==== */

void FUN_00401550(void)

{
  exception *in_ECX;
  
  std::exception::~exception(in_ECX);
  return;
}


/* ==== 00401570  bad_array_new_length  size=36 ==== */

/* Library Function - Single Match
    public: __thiscall std::bad_array_new_length::bad_array_new_length(void)
   
   Libraries: Visual Studio 2015 Debug, Visual Studio 2017 Debug, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

bad_array_new_length * __thiscall
std::bad_array_new_length::bad_array_new_length(bad_array_new_length *this)

{
  bad_alloc::bad_alloc((bad_alloc *)this,"bad array new length");
  *(undefined ***)this = vftable;
  return this;
}


/* ==== 004015a0  FID_conflict:`scalar_deleting_destructor'  size=46 ==== */

/* Library Function - Multiple Matches With Different Base Names
    public: virtual void * __thiscall Concurrency::details::_Interruption_exception::`scalar
   deleting destructor'(unsigned int)
    public: virtual void * __thiscall std::__non_rtti_object::`scalar deleting destructor'(unsigned
   int)
    public: virtual void * __thiscall std::bad_alloc::`scalar deleting destructor'(unsigned int)
    public: virtual void * __thiscall std::bad_array_new_length::`scalar deleting
   destructor'(unsigned int)
     39 names - too many to list
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

undefined4 FID_conflict__scalar_deleting_destructor_(uint param_1)

{
  undefined4 in_ECX;
  
  FUN_004015d0();
  if ((param_1 & 1) != 0) {
    FUN_006e4b8e(in_ECX,0xc);
  }
  return in_ECX;
}


/* ==== 004015d0  FUN_004015d0  size=20 ==== */

void FUN_004015d0(void)

{
  FUN_00401550();
  return;
}


/* ==== 004015f0  FUN_004015f0  size=28 ==== */

void FUN_004015f0(void)

{
  bad_array_new_length local_10 [12];
  
  std::bad_array_new_length::bad_array_new_length(local_10);
                    /* WARNING: Subroutine does not return */
  FUN_006e735d(local_10,&DAT_007b55cc);
}


/* ==== 00401620  FID_conflict:evaluation_error  size=37 ==== */

/* Library Function - Multiple Matches With Different Base Names
    public: __thiscall CTypedPtrList<class CList<void *,void *>,struct COleControlSiteOrWnd
   *>::CTypedPtrList<class CList<void *,void *>,struct COleControlSiteOrWnd *>(int)
    public: __thiscall CTypedPtrList<class CPtrList,struct COleControlSiteOrWnd
   *>::CTypedPtrList<class CPtrList,struct COleControlSiteOrWnd *>(int)
    public: __thiscall __non_rtti_object::__non_rtti_object(class __non_rtti_object const &)
    public: __thiscall std::__non_rtti_object::__non_rtti_object(class std::__non_rtti_object const
   &)
     21 names - too many to list
   
   Library: Visual Studio */

undefined4 * FID_conflict_evaluation_error(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  FUN_00401650(param_1);
  *in_ECX = std::bad_array_new_length::vftable;
  return in_ECX;
}


/* ==== 00401650  FUN_00401650  size=37 ==== */

exception * FUN_00401650(exception *param_1)

{
  exception *in_ECX;
  
  std::exception::exception(in_ECX,param_1);
  *(undefined ***)in_ECX = std::bad_alloc::vftable;
  return in_ECX;
}


/* ==== 00401680  FUN_00401680  size=17 ==== */

void FUN_00401680(undefined4 param_1)

{
  crt_or_heap_alloc_helper(param_1);
  return;
}


/* ==== 004016a0  FUN_004016a0  size=102 ==== */

void FUN_004016a0(int *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  
  *param_2 = *param_2 + 0x23;
  iVar1 = *(int *)(*param_1 + -4);
  uVar2 = *param_1 - iVar1;
  if ((uVar2 < 4) || (0x23 < uVar2)) {
    FUN_006e8c3f(4);
  }
  *param_1 = iVar1;
  return;
}


/* ==== 00401710  FUN_00401710  size=11 ==== */

void FUN_00401710(void)

{
  return;
}


/* ==== 00401720  FUN_00401720  size=13 ==== */

void FUN_00401720(void)

{
  return;
}


/* ==== 00401730  FUN_00401730  size=13 ==== */

undefined4 FUN_00401730(void)

{
  return 0;
}


/* ==== 00401740  FUN_00401740  size=16 ==== */

undefined4 FUN_00401740(void)

{
  undefined4 in_ECX;
  
  return in_ECX;
}


/* ==== 00401750  FUN_00401750  size=57 ==== */

bool FUN_00401750(void)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = (uint *)FUN_00401b20();
  uVar2 = FUN_00401b00();
  return (uVar2 & *puVar1) != 0;
}


/* ==== 00401790  FUN_00401790  size=88 ==== */

undefined4 FUN_00401790(char param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined4 in_ECX;
  
  if (param_1 == '\0') {
    puVar1 = (uint *)FUN_00401b20();
    uVar2 = FUN_00401b00();
    *puVar1 = ~uVar2 & *puVar1;
  }
  else {
    puVar1 = (uint *)FUN_00401b20();
    uVar2 = FUN_00401b00();
    *puVar1 = uVar2 | *puVar1;
  }
  return in_ECX;
}


/* ==== 004017f0  FUN_004017f0  size=32 ==== */

int FUN_004017f0(int param_1)

{
  int *in_ECX;
  
  return param_1 * 0x10 + *in_ECX;
}


/* ==== 00401810  FUN_00401810  size=20 ==== */

void FUN_00401810(void)

{
  FUN_00401b80();
  return;
}


/* ==== 00401830  FUN_00401830  size=53 ==== */

undefined4 FUN_00401830(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 in_ECX;
  undefined1 local_5;
  
  _Vector_alloc<>(local_5,param_3);
  FUN_00402510(param_1,param_2);
  return in_ECX;
}


/* ==== 00401870  allocator<>  size=14 ==== */

/* Library Function - Multiple Matches With Same Base Name
    public: __thiscall std::allocator<class std::shared_ptr<struct
   Concurrency::details::_Task_impl<unsigned char> > >::allocator<class std::shared_ptr<struct
   Concurrency::details::_Task_impl<unsigned char> > >(void)
    public: __thiscall std::allocator<class std::shared_ptr<struct
   Concurrency::details::_Task_impl<struct std::pair<unsigned char,class
   Concurrency::details::_CancellationTokenState *> > > >::allocator<class std::shared_ptr<struct
   Concurrency::details::_Task_impl<struct std::pair<unsigned char,class
   Concurrency::details::_CancellationTokenState *> > > >(void)
   
   Libraries: Visual Studio 2012 Debug, Visual Studio 2012 Release */

undefined4 allocator<>(void)

{
  undefined4 in_ECX;
  
  return in_ECX;
}


/* ==== 00401880  FUN_00401880  size=33 ==== */

undefined4 * FUN_00401880(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  
  *in_ECX = param_1;
  in_ECX[1] = param_2;
  return in_ECX;
}


/* ==== 004018f0  FUN_004018f0  size=20 ==== */

void FUN_004018f0(void)

{
  FUN_00401c90();
  return;
}


/* ==== 00401910  FUN_00401910  size=93 ==== */

undefined4 FUN_00401910(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined1 local_5;
  
  _Vector_alloc<>(local_5,param_3);
  local_10 = FUN_00401c40();
  local_14 = FUN_00401b20();
  puVar3 = &local_10;
  puVar2 = &local_14;
  uVar1 = FUN_00401c20(puVar2,puVar3);
  uVar1 = _Unfancy<>(uVar1);
  FUN_00402600(uVar1,puVar2,puVar3);
  return local_c;
}


/* ==== 00401970  FUN_00401970  size=44 ==== */

undefined4 FUN_00401970(void)

{
  undefined4 in_ECX;
  undefined1 local_5;
  
  _Compressed_pair<><>(local_5);
  FUN_00401720(&DAT_0073f531);
  return in_ECX;
}


/* ==== 004019a0  FUN_004019a0  size=54 ==== */

undefined4 FUN_004019a0(undefined4 param_1,undefined4 param_2)

{
  undefined1 local_10 [12];
  
  FID_conflict_begin(local_10);
  FUN_00401b30(param_2);
  FUN_00401ae0(param_1);
  return param_1;
}


/* ==== 004019e0  FUN_004019e0  size=20 ==== */

void FUN_004019e0(void)

{
  FUN_00401ea0();
  return;
}


/* ==== 00401a00  FUN_00401a00  size=105 ==== */

undefined4 FUN_00401a00(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070bd1d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00401ec0(param_1,param_2,param_3);
  local_8 = 0;
  FUN_00401da0(param_1);
  ExceptionList = local_10;
  return in_ECX;
}


/* ==== 00401a90  FUN_00401a90  size=33 ==== */

int FUN_00401a90(void)

{
  int *in_ECX;
  
  return in_ECX[1] - *in_ECX >> 2;
}


/* ==== 00401ac0  FUN_00401ac0  size=20 ==== */

void FUN_00401ac0(void)

{
  FUN_00401f40();
  return;
}


/* ==== 00401ae0  FUN_00401ae0  size=28 ==== */

undefined4 FUN_00401ae0(undefined4 param_1)

{
  undefined4 in_ECX;
  
  FUN_00402070(in_ECX);
  return param_1;
}


/* ==== 00401b00  FUN_00401b00  size=26 ==== */

int FUN_00401b00(void)

{
  int in_ECX;
  
  return 1 << ((byte)*(undefined4 *)(in_ECX + 4) & 0x1f);
}


/* ==== 00401b20  FUN_00401b20  size=16 ==== */

undefined4 FUN_00401b20(void)

{
  undefined4 *in_ECX;
  
  return *in_ECX;
}


/* ==== 00401b30  FUN_00401b30  size=71 ==== */

void FUN_00401b30(int param_1)

{
  int *in_ECX;
  
  in_ECX[1] = in_ECX[1] + param_1;
  *in_ECX = *in_ECX + ((uint)in_ECX[1] >> 5) * 4;
  in_ECX[1] = (uint)in_ECX[1] % 0x20;
  return;
}


/* ==== 00401b80  FUN_00401b80  size=150 ==== */

void FUN_00401b80(void)

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
    FUN_00402700(*in_ECX,*piVar3,uVar1);
    FUN_004020a0(*in_ECX,*piVar2 - *in_ECX >> 4);
    *in_ECX = 0;
    *piVar3 = 0;
    *piVar2 = 0;
  }
  return;
}


/* ==== 00401c20  FUN_00401c20  size=25 ==== */

int FUN_00401c20(void)

{
  int *in_ECX;
  
  return in_ECX[1] - *in_ECX >> 3;
}


/* ==== 00401c40  FUN_00401c40  size=17 ==== */

undefined4 FUN_00401c40(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 4);
}


/* ==== 00401c60  FUN_00401c60  size=19 ==== */

void FUN_00401c60(void)

{
  allocator<>();
  return;
}


/* ==== 00401c80  FUN_00401c80  size=16 ==== */

void FUN_00401c80(void)

{
  FUN_006e38d3("vector too long");
  return;
}


/* ==== 00401c90  FUN_00401c90  size=150 ==== */

void FUN_00401c90(void)

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
    FUN_004025f0(*in_ECX,*piVar3,uVar1);
    FUN_004020d0(*in_ECX,*piVar2 - *in_ECX >> 3);
    *in_ECX = 0;
    *piVar3 = 0;
    *piVar2 = 0;
  }
  return;
}


/* ==== 00401d30  FUN_00401d30  size=33 ==== */

int FUN_00401d30(void)

{
  int *in_ECX;
  
  return in_ECX[2] - *in_ECX >> 3;
}


/* ==== 00401d60  FUN_00401d60  size=59 ==== */

uint FUN_00401d60(void)

{
  undefined4 uVar1;
  uint *puVar2;
  uint local_10;
  uint local_c [2];
  
  uVar1 = FUN_00401c60();
  local_c[0] = FUN_004020c0(uVar1);
  local_10 = FUN_00402140();
  puVar2 = std::_Max_value<unsigned_int>(&local_10,local_c);
  return *puVar2;
}


/* ==== 00401da0  FUN_00401da0  size=203 ==== */

uint FUN_00401da0(uint param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  uint *puVar3;
  undefined1 *puVar4;
  undefined1 local_28 [4];
  undefined1 local_24 [4];
  undefined1 local_20 [4];
  undefined1 local_1c [4];
  undefined4 local_18;
  undefined4 local_14;
  uint local_c;
  int local_8;
  
  uVar1 = FUN_00402100();
  if (uVar1 < param_1) {
    FUN_004020f0();
  }
  local_c = FUN_00402160(param_1);
  uVar1 = FUN_00401a90();
  if (local_c < uVar1) {
    puVar2 = (undefined4 *)FUN_00402170(local_1c);
    local_14 = *puVar2;
    puVar4 = local_20;
    uVar1 = local_c;
    FUN_004021b0(local_24);
    puVar2 = (undefined4 *)FUN_00402010(puVar4,uVar1);
    local_18 = *puVar2;
    FUN_004021f0(local_28,local_18,local_14);
  }
  *(uint *)(local_8 + 0xc) = param_1;
  uVar1 = param_1 / 0x20;
  if (param_1 % 0x20 != 0) {
    puVar3 = (uint *)game_get_flag_object_01a70(local_c - 1);
    uVar1 = (1 << (sbyte)(param_1 % 0x20)) - 1U & *puVar3;
    *puVar3 = uVar1;
  }
  return uVar1;
}


/* ==== 00401e70  FID_conflict:begin  size=37 ==== */

/* Library Function - Multiple Matches With Different Base Names
    public: class std::_String_iterator<char,struct std::char_traits<char>,class
   std::allocator<char> > __thiscall std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> >::begin(void)
    public: class std::_String_iterator<class std::_String_val<struct std::_Simple_types<char> > >
   __thiscall std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
   >::begin(void)
    public: class std::_String_iterator<unsigned short,struct std::char_traits<unsigned short>,class
   std::allocator<unsigned short> > __thiscall std::basic_string<unsigned short,struct
   std::char_traits<unsigned short>,class std::allocator<unsigned short> >::begin(void)
    public: class std::_String_iterator<class std::_String_val<struct std::_Simple_types<unsigned
   short> > > __thiscall std::basic_string<unsigned short,struct std::char_traits<unsigned
   short>,class std::allocator<unsigned short> >::begin(void)
     6 names - too many to list
   
   Libraries: Visual Studio 2010 Release, Visual Studio 2012 Debug, Visual Studio 2012 Release */

undefined4 FID_conflict_begin(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_var;
  
  uVar1 = game_loop_helper_018d0();
  _String_iterator<>(uVar1,extraout_var);
  return param_1;
}


/* ==== 00401ea0  FUN_00401ea0  size=20 ==== */

void FUN_00401ea0(void)

{
  FUN_00401ac0();
  return;
}


/* ==== 00401ec0  FUN_00401ec0  size=113 ==== */

int FUN_00401ec0(undefined4 param_1,char *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  
  if (*param_2 == '\0') {
    local_10 = 0;
  }
  else {
    local_10 = 0xffffffff;
  }
  local_14 = local_10;
  uVar1 = FUN_00402770(param_3);
  puVar3 = &local_14;
  uVar2 = FUN_00402160(param_1,puVar3,uVar1);
  FUN_004022c0(uVar2,puVar3,uVar1);
  *(undefined4 *)(local_c + 0xc) = 0;
  FUN_00401720(&DAT_0073f531);
  return local_c;
}


/* ==== 00401f40  FUN_00401f40  size=150 ==== */

void FUN_00401f40(void)

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
    FUN_004025f0(*in_ECX,*piVar3,uVar1);
    FUN_00402300(*in_ECX,*piVar2 - *in_ECX >> 2);
    *in_ECX = 0;
    *piVar3 = 0;
    *piVar2 = 0;
  }
  return;
}


/* ==== 00402010  FUN_00402010  size=38 ==== */

undefined4 * FUN_00402010(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  
  *param_1 = *in_ECX;
  FUN_00402350(param_2);
  return param_1;
}


/* ==== 00402040  FUN_00402040  size=35 ==== */

undefined4 FUN_00402040(undefined4 param_1,undefined4 param_2)

{
  undefined4 in_ECX;
  
  FUN_004023a0(param_1,0,param_2);
  return in_ECX;
}


/* ==== 00402070  FUN_00402070  size=47 ==== */

undefined4 FUN_00402070(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 in_ECX;
  
  uVar1 = FUN_00401730();
  FUN_004023a0(*param_1,param_1[1],uVar1);
  return in_ECX;
}


/* ==== 004020a0  FUN_004020a0  size=32 ==== */

void FUN_004020a0(undefined4 param_1,int param_2)

{
  _Deallocate<>(param_1,param_2 << 4);
  return;
}


/* ==== 004020c0  FUN_004020c0  size=10 ==== */

undefined4 FUN_004020c0(void)

{
  return 0x1fffffff;
}


/* ==== 004020d0  FUN_004020d0  size=32 ==== */

void FUN_004020d0(undefined4 param_1,int param_2)

{
  _Deallocate<>(param_1,param_2 << 3);
  return;
}


/* ==== 004020f0  FUN_004020f0  size=16 ==== */

void FUN_004020f0(void)

{
  FUN_006e38d3("vector<bool> too long");
  return;
}


/* ==== 00402100  FUN_00402100  size=53 ==== */

int FUN_00402100(void)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_004023e0(0x7fffffff);
  if (uVar1 < 0x4000000) {
    iVar2 = uVar1 << 5;
  }
  else {
    iVar2 = 0x7fffffff;
  }
  return iVar2;
}


/* ==== 00402140  FUN_00402140  size=20 ==== */

undefined4 FUN_00402140(void)

{
  return 0x7fffffff;
}


/* ==== 00402160  FUN_00402160  size=14 ==== */

uint FUN_00402160(int param_1)

{
  return param_1 + 0x1fU >> 5;
}


/* ==== 00402170  FUN_00402170  size=52 ==== */

undefined4 FUN_00402170(undefined4 param_1)

{
  undefined4 uVar1;
  int in_ECX;
  
  uVar1 = _Unfancy<>();
  _Vector_iterator<>(*(undefined4 *)(in_ECX + 4),uVar1);
  return param_1;
}


/* ==== 004021b0  FUN_004021b0  size=51 ==== */

undefined4 FUN_004021b0(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  
  uVar1 = _Unfancy<>();
  _Vector_iterator<>(*in_ECX,uVar1);
  return param_1;
}


/* ==== 004021f0  FUN_004021f0  size=198 ==== */

undefined4 FUN_004021f0(undefined4 param_1,int param_2,int param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0070bd40;
  local_10 = ExceptionList;
  uVar1 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  puVar2 = (undefined4 *)(in_ECX + 4);
  if (param_2 != param_3) {
    FUN_004023d0(param_2,*puVar2);
    uVar3 = FUN_004027e0(param_3,*puVar2,param_2);
    uVar4 = FUN_00401c60();
    FUN_004025f0(uVar3,*puVar2,uVar4);
    *puVar2 = uVar3;
  }
  uVar3 = _Unfancy<>(in_ECX,uVar1);
  _Vector_iterator<>(param_2,uVar3);
  ExceptionList = local_10;
  return param_1;
}


/* ==== 004022c0  FUN_004022c0  size=53 ==== */

undefined4 FUN_004022c0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 in_ECX;
  undefined1 local_5;
  
  _Vector_alloc<>(local_5,param_3);
  FUN_00402830(param_1,param_2);
  return in_ECX;
}


/* ==== 00402300  FUN_00402300  size=32 ==== */

void FUN_00402300(undefined4 param_1,int param_2)

{
  _Deallocate<>(param_1,param_2 << 2);
  return;
}


/* ==== 00402350  FUN_00402350  size=28 ==== */

undefined4 FUN_00402350(undefined4 param_1)

{
  undefined4 in_ECX;
  
  FUN_00402420(param_1);
  return in_ECX;
}


/* ==== 00402370  FID_conflict:_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::shared_ptr<Concurrency::details::_Task_impl<std::pair<unsigned_char,Concurrency::details::_CancellationTokenState*>_>_>_>_>_>  size=37 ==== */

/* Library Function - Multiple Matches With Different Base Names
    public: __thiscall std::_String_const_iterator<class std::_String_val<struct
   std::_Simple_types<char> > >::_String_const_iterator<class std::_String_val<struct
   std::_Simple_types<char> > >(char const *,struct std::_Container_base0 const *)
    public: __thiscall std::_String_const_iterator<class std::_String_val<struct
   std::_Simple_types<unsigned short> > >::_String_const_iterator<class std::_String_val<struct
   std::_Simple_types<unsigned short> > >(unsigned short const *,struct std::_Container_base0 const
   *)
    public: __thiscall std::_String_const_iterator<class std::_String_val<struct
   std::_Simple_types<wchar_t> > >::_String_const_iterator<class std::_String_val<struct
   std::_Simple_types<wchar_t> > >(wchar_t const *,struct std::_Container_base0 const *)
    public: __thiscall std::_Vector_const_iterator<class std::_Vector_val<struct
   std::_Simple_types<class std::shared_ptr<struct Concurrency::details::_Task_impl<unsigned char> >
   > > >::_Vector_const_iterator<class std::_Vector_val<struct std::_Simple_types<class
   std::shared_ptr<struct Concurrency::details::_Task_impl<unsigned char> > > > >(class
   std::shared_ptr<struct Concurrency::details::_Task_impl<unsigned char> > *,struct
   std::_Container_base0 const *)
     5 names - too many to list
   
   Libraries: Visual Studio 2012 Release, Visual Studio 2015 Release, Visual Studio 2017 Release,
   Visual Studio 2019 Release */

undefined4 *
FID_conflict__Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::shared_ptr<Concurrency::details::_Task_impl<std::pair<unsigned_char,Concurrency::details::_CancellationTokenState*>_>_>_>_>_>
          (undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  
  *in_ECX = param_1;
  FUN_00401720(param_2);
  return in_ECX;
}


/* ==== 004023a0  FUN_004023a0  size=46 ==== */

undefined4 * FUN_004023a0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *in_ECX;
  
  *in_ECX = param_1;
  in_ECX[1] = param_2;
  FUN_00401720(param_3);
  return in_ECX;
}


/* ==== 004023d0  FUN_004023d0  size=13 ==== */

void FUN_004023d0(void)

{
  return;
}


/* ==== 004023e0  FUN_004023e0  size=59 ==== */

uint FUN_004023e0(void)

{
  undefined4 uVar1;
  uint *puVar2;
  uint local_10;
  uint local_c [2];
  
  uVar1 = FUN_00401c60();
  local_c[0] = FUN_00402450(uVar1);
  local_10 = FUN_00402140();
  puVar2 = std::_Max_value<unsigned_int>(&local_10,local_c);
  return *puVar2;
}


/* ==== 00402420  FUN_00402420  size=44 ==== */

int * FUN_00402420(int param_1)

{
  int *in_ECX;
  
  FUN_00401720(param_1);
  *in_ECX = *in_ECX + param_1 * 4;
  return in_ECX;
}


/* ==== 00402450  FUN_00402450  size=10 ==== */

undefined4 FUN_00402450(void)

{
  return 0x3fffffff;
}


/* ==== 00402490  FUN_00402490  size=34 ==== */

void FUN_00402490(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}


/* ==== 004024c0  FUN_004024c0  size=37 ==== */

undefined4 * FUN_004024c0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = *param_2;
  return in_ECX;
}


/* ==== 00402510  FUN_00402510  size=193 ==== */

void FUN_00402510(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070bd6d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar1 = FUN_00401c60(DAT_007c5940 ^ (uint)&stack0xfffffffc);
  FUN_00401740(&DAT_0073f531,in_ECX);
  if (param_1 != 0) {
    FUN_00402990(param_1);
    local_8 = 0;
    uVar1 = FUN_00402c70(*in_ECX,param_1,param_2,uVar1);
    in_ECX[1] = uVar1;
    local_8 = 0xffffffff;
    FUN_00402940();
  }
  FUN_00401710();
  ExceptionList = local_10;
  return;
}


/* ==== 004025f0  FUN_004025f0  size=5 ==== */

void FUN_004025f0(void)

{
  return;
}


/* ==== 00402600  FUN_00402600  size=197 ==== */

void FUN_00402600(int param_1,undefined4 *param_2,undefined4 *param_3)

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
  FUN_00401740(&DAT_0073f531,in_ECX);
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


/* ==== 00402700  FUN_00402700  size=95 ==== */

void FUN_00402700(int param_1,int param_2,void *param_3)

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
  for (; param_1 != param_2; param_1 = param_1 + 0x10) {
    _Unfancy<>(param_1,uVar1);
    __ExceptionPtrDestroy(param_3);
  }
  ExceptionList = local_10;
  return;
}


/* ==== 00402770  FUN_00402770  size=16 ==== */

undefined4 FUN_00402770(void)

{
  undefined4 in_ECX;
  
  return in_ECX;
}


/* ==== 004027e0  FUN_004027e0  size=27 ==== */

void FUN_004027e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00402f20(param_1,param_2,param_3);
  return;
}


/* ==== 00402830  FUN_00402830  size=193 ==== */

void FUN_00402830(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070bded;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar1 = FUN_00401c60(DAT_007c5940 ^ (uint)&stack0xfffffffc);
  FUN_00401740(&DAT_0073f531,in_ECX);
  if (param_1 != 0) {
    FUN_00402aa0(param_1);
    local_8 = 0;
    uVar1 = FUN_00402f90(*in_ECX,param_1,param_2,uVar1);
    in_ECX[1] = uVar1;
    local_8 = 0xffffffff;
    FUN_00402900();
  }
  FUN_00401710();
  ExceptionList = local_10;
  return;
}


/* ==== 00402900  FUN_00402900  size=30 ==== */

void FUN_00402900(void)

{
  int *in_ECX;
  
  if (*in_ECX != 0) {
    FUN_00401f40();
  }
  return;
}


/* ==== 00402920  FUN_00402920  size=30 ==== */

void FUN_00402920(void)

{
  int *in_ECX;
  
  if (*in_ECX != 0) {
    FUN_00401c90();
  }
  return;
}


/* ==== 00402940  FUN_00402940  size=30 ==== */

void FUN_00402940(void)

{
  int *in_ECX;
  
  if (*in_ECX != 0) {
    FUN_00401b80();
  }
  return;
}


/* ==== 00402990  FUN_00402990  size=45 ==== */

void FUN_00402990(uint param_1)

{
  uint uVar1;
  
  uVar1 = FUN_00402b40();
  if (uVar1 < param_1) {
    FUN_00401c80();
  }
  FUN_00402ad0(param_1);
  return;
}


/* ==== 004029c0  FUN_004029c0  size=162 ==== */

void FUN_004029c0(int param_1,int param_2,int param_3)

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
    FUN_004025f0(*in_ECX,*piVar3,uVar1);
    FUN_004020d0(*in_ECX,*piVar2 - *in_ECX >> 3);
  }
  *in_ECX = param_1;
  *piVar3 = param_1 + param_2 * 8;
  *piVar2 = param_1 + param_3 * 8;
  return;
}


/* ==== 00402a70  FUN_00402a70  size=45 ==== */

void FUN_00402a70(uint param_1)

{
  uint uVar1;
  
  uVar1 = FUN_00401d60();
  if (uVar1 < param_1) {
    FUN_00401c80();
  }
  FUN_00402b80(param_1);
  return;
}


/* ==== 00402aa0  FUN_00402aa0  size=45 ==== */

void FUN_00402aa0(uint param_1)

{
  uint uVar1;
  
  uVar1 = FUN_004023e0();
  if (uVar1 < param_1) {
    FUN_00401c80();
  }
  FUN_00402bf0(param_1);
  return;
}


/* ==== 00402ad0  FUN_00402ad0  size=99 ==== */

void FUN_00402ad0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *in_ECX;
  
  uVar1 = FUN_00401c60(&param_1);
  iVar2 = FUN_004030c0(uVar1);
  *in_ECX = iVar2;
  in_ECX[1] = iVar2;
  in_ECX[2] = param_1 * 0x10 + iVar2;
  return;
}


/* ==== 00402b40  FUN_00402b40  size=59 ==== */

uint FUN_00402b40(void)

{
  undefined4 uVar1;
  uint *puVar2;
  uint local_10;
  uint local_c [2];
  
  uVar1 = FUN_00401c60();
  local_c[0] = FUN_00402c60(uVar1);
  local_10 = FUN_00402140();
  puVar2 = std::_Max_value<unsigned_int>(&local_10,local_c);
  return *puVar2;
}


/* ==== 00402b80  FUN_00402b80  size=99 ==== */

void FUN_00402b80(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *in_ECX;
  
  uVar1 = FUN_00401c60(&param_1);
  iVar2 = FUN_00402d00(uVar1);
  *in_ECX = iVar2;
  in_ECX[1] = iVar2;
  in_ECX[2] = iVar2 + param_1 * 8;
  return;
}


/* ==== 00402bf0  FUN_00402bf0  size=99 ==== */

void FUN_00402bf0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *in_ECX;
  
  uVar1 = FUN_00401c60(&param_1);
  iVar2 = FUN_004030e0(uVar1);
  *in_ECX = iVar2;
  in_ECX[1] = iVar2;
  in_ECX[2] = iVar2 + param_1 * 4;
  return;
}


/* ==== 00402c60  FUN_00402c60  size=10 ==== */

undefined4 FUN_00402c60(void)

{
  return 0xfffffff;
}


/* ==== 00402c70  FUN_00402c70  size=136 ==== */

undefined4 FUN_00402c70(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070be1d;
  local_10 = ExceptionList;
  uVar1 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_00403180(param_1,param_4);
  local_8 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_00403270(param_3);
  }
  uVar2 = FUN_00403130(uVar1);
  local_8 = 0xffffffff;
  FUN_004031b0();
  ExceptionList = local_10;
  return uVar2;
}


/* ==== 00402d00  FUN_00402d00  size=19 ==== */

void FUN_00402d00(allocator<std::_Container_proxy> *param_1,uint *param_2)

{
  std::allocator<std::_Container_proxy>::allocate(param_1,*param_2);
  return;
}


/* ==== 00402d20  FUN_00402d20  size=10 ==== */

undefined4 FUN_00402d20(undefined4 *param_1)

{
  return *param_1;
}


/* ==== 00402d30  FUN_00402d30  size=128 ==== */

int FUN_00402d30(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0070be4d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = FUN_00402d20(&param_1,DAT_007c5940 ^ (uint)&stack0xfffffffc);
  iVar2 = FUN_00402d20(&param_2);
  uVar3 = _Unfancy<>(param_3);
  FUN_004032b0(iVar1,iVar2,uVar3);
  ExceptionList = local_10;
  return param_3 + (iVar2 - iVar1 >> 3) * 8;
}


/* ==== 00402e10  FUN_00402e10  size=156 ==== */

int FUN_00402e10(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int local_1c;
  int local_18;
  undefined1 local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0070be7d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_18 = FUN_00402d20(&param_1,DAT_007c5940 ^ (uint)&stack0xfffffffc);
  local_1c = FUN_00402d20(&param_2);
  local_11 = 1;
  uVar1 = _Unfancy<>(param_3);
  uVar1 = FUN_00402d20(&local_1c,uVar1);
  uVar1 = FUN_00402d20(&local_18,uVar1);
  FUN_004032b0(uVar1);
  ExceptionList = local_10;
  return param_3 + (local_1c - local_18 >> 3) * 8;
}


/* ==== 00402f20  FUN_00402f20  size=97 ==== */

void FUN_00402f20(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00402d20(&param_1);
  iVar2 = FUN_00402d20(&param_2);
  FUN_00403360(iVar1,param_3,iVar2 - iVar1,iVar2 - iVar1 >> 2);
  return;
}


/* ==== 00402f90  FUN_00402f90  size=191 ==== */

int FUN_00402f90(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070bead;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  cVar1 = FUN_004033a0(param_3,DAT_007c5940 ^ (uint)&stack0xfffffffc);
  if (cVar1 == '\0') {
    FUN_00403180(param_1,param_4);
    local_8 = 0;
    for (; param_2 != 0; param_2 = param_2 + -1) {
      FUN_00403410(param_3);
    }
    param_1 = FUN_00403130();
    local_8 = 0xffffffff;
    FUN_00403150();
  }
  else {
    uVar2 = _Unfancy<>(param_1,param_2);
    FUN_004033e0(uVar2);
    param_1 = param_1 + param_2 * 4;
  }
  ExceptionList = local_10;
  return param_1;
}


/* ==== 00403050  FUN_00403050  size=40 ==== */

int FUN_00403050(uint param_1)

{
  if (0xaaaaaaa < param_1) {
    FUN_004015f0(0xaaaaaaa);
  }
  return param_1 * 0x18;
}


/* ==== 00403080  FUN_00403080  size=50 ==== */

undefined4 FUN_00403080(uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else if (param_1 < 0x1000) {
    uVar1 = FUN_00401680(param_1);
  }
  else {
    uVar1 = FUN_00403450(param_1);
  }
  return uVar1;
}


/* ==== 004030c0  FUN_004030c0  size=19 ==== */

void FUN_004030c0(allocator<std::_Container_proxy> *param_1,uint *param_2)

{
  std::allocator<std::_Container_proxy>::allocate(param_1,*param_2);
  return;
}


/* ==== 004030e0  FUN_004030e0  size=19 ==== */

void FUN_004030e0(allocator<std::_Container_proxy> *param_1,uint *param_2)

{
  std::allocator<std::_Container_proxy>::allocate(param_1,*param_2);
  return;
}


/* ==== 00403100  FID_conflict:`scalar_deleting_destructor'  size=46 ==== */

/* Library Function - Multiple Matches With Different Base Names
    public: virtual void * __thiscall Concurrency::details::RealizedChore::`scalar deleting
   destructor'(unsigned int)
    public: virtual void * __thiscall std::regex_error::`scalar deleting destructor'(unsigned int)
    public: virtual void * __thiscall Concurrency::scheduler_resource_allocation_error::`scalar
   deleting destructor'(unsigned int)
    public: virtual void * __thiscall Concurrency::scheduler_worker_creation_error::`scalar deleting
   destructor'(unsigned int)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

undefined4 FID_conflict__scalar_deleting_destructor_(uint param_1)

{
  undefined4 in_ECX;
  
  FUN_004019e0();
  if ((param_1 & 1) != 0) {
    FUN_006e4b8e(in_ECX,0x10);
  }
  return in_ECX;
}


/* ==== 00403130  FUN_00403130  size=28 ==== */

undefined4 FUN_00403130(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = in_ECX[1];
  return in_ECX[1];
}


/* ==== 00403150  FUN_00403150  size=39 ==== */

void FUN_00403150(void)

{
  undefined4 *in_ECX;
  
  FUN_004025f0(*in_ECX,in_ECX[1],in_ECX[2]);
  return;
}


/* ==== 00403180  FUN_00403180  size=42 ==== */

undefined4 * FUN_00403180(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  
  *in_ECX = param_1;
  in_ECX[1] = param_1;
  in_ECX[2] = param_2;
  return in_ECX;
}


/* ==== 004031b0  FUN_004031b0  size=39 ==== */

void FUN_004031b0(void)

{
  undefined4 *in_ECX;
  
  FUN_00402700(*in_ECX,in_ECX[1],in_ECX[2]);
  return;
}


/* ==== 004031e0  allocate  size=34 ==== */

/* Library Function - Single Match
    public: struct std::_Container_proxy * __thiscall std::allocator<struct
   std::_Container_proxy>::allocate(unsigned int)
   
   Libraries: Visual Studio 2019 Debug, Visual Studio 2019 Release */

_Container_proxy * __thiscall
std::allocator<std::_Container_proxy>::allocate(allocator<std::_Container_proxy> *this,uint param_1)

{
  uint uVar1;
  _Container_proxy *p_Var2;
  
  uVar1 = _Get_size_of_n<8>(param_1);
  p_Var2 = (_Container_proxy *)FUN_00403080(uVar1,this);
  return p_Var2;
}


/* ==== 00403210  allocate  size=34 ==== */

/* Library Function - Single Match
    public: struct std::_Container_proxy * __thiscall std::allocator<struct
   std::_Container_proxy>::allocate(unsigned int)
   
   Libraries: Visual Studio 2019 Debug, Visual Studio 2019 Release */

_Container_proxy * __thiscall
std::allocator<std::_Container_proxy>::allocate(allocator<std::_Container_proxy> *this,uint param_1)

{
  uint uVar1;
  _Container_proxy *p_Var2;
  
  uVar1 = _Get_size_of_n<8>(param_1);
  p_Var2 = (_Container_proxy *)FUN_00403080(uVar1,this);
  return p_Var2;
}


/* ==== 00403240  allocate  size=34 ==== */

/* Library Function - Single Match
    public: struct std::_Container_proxy * __thiscall std::allocator<struct
   std::_Container_proxy>::allocate(unsigned int)
   
   Libraries: Visual Studio 2019 Debug, Visual Studio 2019 Release */

_Container_proxy * __thiscall
std::allocator<std::_Container_proxy>::allocate(allocator<std::_Container_proxy> *this,uint param_1)

{
  uint uVar1;
  _Container_proxy *p_Var2;
  
  uVar1 = _Get_size_of_n<8>(param_1);
  p_Var2 = (_Container_proxy *)FUN_00403080(uVar1,this);
  return p_Var2;
}


/* ==== 00403270  FUN_00403270  size=63 ==== */

void FUN_00403270(undefined4 param_1)

{
  undefined4 uVar1;
  int in_ECX;
  
  uVar1 = _Unfancy<>(*(undefined4 *)(in_ECX + 4),param_1);
  FUN_00403630(*(undefined4 *)(in_ECX + 8),uVar1);
  *(int *)(in_ECX + 4) = *(int *)(in_ECX + 4) + 0x10;
  return;
}


/* ==== 004032b0  FUN_004032b0  size=97 ==== */

void FUN_004032b0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00402d20(&param_1);
  iVar2 = FUN_00402d20(&param_2);
  FUN_00403360(iVar1,param_3,iVar2 - iVar1,iVar2 - iVar1 >> 3);
  return;
}


/* ==== 00403320  FUN_00403320  size=63 ==== */

void FUN_00403320(undefined4 param_1)

{
  undefined4 uVar1;
  int in_ECX;
  
  uVar1 = _Unfancy<>(*(undefined4 *)(in_ECX + 4),param_1);
  FUN_00403660(*(undefined4 *)(in_ECX + 8),uVar1);
  *(int *)(in_ECX + 4) = *(int *)(in_ECX + 4) + 8;
  return;
}


/* ==== 00403360  FUN_00403360  size=57 ==== */

int FUN_00403360(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_00402d20(&param_2);
  FUN_006e6bd0(iVar1,param_1,param_3);
  return iVar1 + param_3;
}


/* ==== 004033a0  FUN_004033a0  size=64 ==== */

bool FUN_004033a0(undefined4 param_1)

{
  int iVar1;
  undefined4 local_c [2];
  
  local_c[0] = 0;
  iVar1 = util_memcmp_n(param_1,local_c,4);
  return iVar1 == 0;
}


/* ==== 004033e0  FUN_004033e0  size=35 ==== */

void FUN_004033e0(undefined4 param_1,int param_2)

{
  size_t _Size;
  void *_Dst;
  int _Val;
  
  _Size = param_2 << 2;
  _Val = 0;
  _Dst = (void *)FUN_00402d20(&param_1);
  _memset(_Dst,_Val,_Size);
  return;
}


/* ==== 00403410  FUN_00403410  size=63 ==== */

void FUN_00403410(undefined4 param_1)

{
  undefined4 uVar1;
  int in_ECX;
  
  uVar1 = _Unfancy<>(*(undefined4 *)(in_ECX + 4),param_1);
  FUN_00403690(*(undefined4 *)(in_ECX + 8),uVar1);
  *(int *)(in_ECX + 4) = *(int *)(in_ECX + 4) + 4;
  return;
}


/* ==== 00403450  FUN_00403450  size=102 ==== */

uint FUN_00403450(uint param_1)

{
  int iVar1;
  uint uVar2;
  
  if (param_1 + 0x23 <= param_1) {
    FUN_004015f0();
  }
  iVar1 = FUN_00401680(param_1 + 0x23);
  if (iVar1 == 0) {
    FUN_006e8c3f();
  }
  uVar2 = iVar1 + 0x23U & 0xffffffe0;
  *(int *)(uVar2 - 4) = iVar1;
  return uVar2;
}


/* ==== 004034f0  FUN_004034f0  size=40 ==== */

int FUN_004034f0(uint param_1)

{
  if (0x15555555 < param_1) {
    FUN_004015f0(0x15555555);
  }
  return param_1 * 0xc;
}


/* ==== 00403580  FUN_00403580  size=73 ==== */

void FUN_00403580(void)

{
  undefined4 *in_ECX;
  
  if (in_ECX[1] != 0) {
    FUN_004025f0(in_ECX[3],in_ECX[4],*in_ECX);
    FUN_004020d0(in_ECX[1],in_ECX[2]);
  }
  return;
}


/* ==== 004035d0  FUN_004035d0  size=84 ==== */

uint FUN_004035d0(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_00401d30();
  uVar2 = FUN_00401d60();
  if ((uVar1 <= uVar2 - (uVar1 >> 1)) && (uVar2 = (uVar1 >> 1) + uVar1, uVar2 < param_1)) {
    uVar2 = param_1;
  }
  return uVar2;
}


/* ==== 00403630  FUN_00403630  size=38 ==== */

void FUN_00403630(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_004013e0(0x10,param_2);
  FUN_004036c0(param_3);
  return;
}


/* ==== 00403660  FUN_00403660  size=41 ==== */

void FUN_00403660(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_004013e0(8,param_2);
  uVar1 = param_3[1];
  *puVar2 = *param_3;
  puVar2[1] = uVar1;
  return;
}


/* ==== 00403690  FUN_00403690  size=35 ==== */

void FUN_00403690(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_004013e0(4,param_2);
  *puVar1 = *param_3;
  return;
}


/* ==== 004036c0  FUN_004036c0  size=29 ==== */

undefined4 FUN_004036c0(undefined4 param_1)

{
  undefined4 in_ECX;
  
  FUN_004036e0(param_1);
  return in_ECX;
}


/* ==== 004036e0  FUN_004036e0  size=54 ==== */

int FUN_004036e0(int param_1)

{
  int in_ECX;
  
  FUN_00403720(param_1);
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
  FUN_00401720(&DAT_0073f531);
  return in_ECX;
}


/* ==== 00403720  FUN_00403720  size=101 ==== */

undefined4 FUN_00403720(int *param_1)

{
  undefined4 uVar1;
  undefined4 in_ECX;
  undefined1 local_6;
  undefined1 local_5;
  
  uVar1 = FUN_00401c60();
  uVar1 = _Unfancy<>(&local_5,uVar1);
  _Vector_alloc<>(local_6,uVar1);
  FUN_00403790(param_1[1] - *param_1 >> 2,param_1,param_1 + 1);
  return in_ECX;
}


/* ==== 00403790  FUN_00403790  size=197 ==== */

void FUN_00403790(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070bded;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar1 = FUN_00401c60(DAT_007c5940 ^ (uint)&stack0xfffffffc);
  FUN_00401740(&DAT_0073f531,in_ECX);
  if (param_1 != 0) {
    FUN_00402aa0(param_1);
    local_8 = 0;
    uVar1 = FUN_00403860(*param_2,*param_3,*in_ECX,uVar1);
    in_ECX[1] = uVar1;
    local_8 = 0xffffffff;
    FUN_00402900();
  }
  FUN_00401710();
  ExceptionList = local_10;
  return;
}


/* ==== 00403860  FUN_00403860  size=156 ==== */

int FUN_00403860(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int local_1c;
  int local_18;
  undefined1 local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0070be7d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_18 = FUN_00402d20(&param_1,DAT_007c5940 ^ (uint)&stack0xfffffffc);
  local_1c = FUN_00402d20(&param_2);
  local_11 = 1;
  uVar1 = _Unfancy<>(param_3);
  uVar1 = FUN_00402d20(&local_1c,uVar1);
  uVar1 = FUN_00402d20(&local_18,uVar1);
  FUN_00402f20(uVar1);
  ExceptionList = local_10;
  return param_3 + (local_1c - local_18 >> 2) * 4;
}


/* ==== 00403960  FUN_00403960  size=16 ==== */

void FUN_00403960(void)

{
  FUN_006e38d3("string too long");
  return;
}


/* ==== 00403970  FUN_00403970  size=16 ==== */

void FUN_00403970(void)

{
  FUN_006e38d3("map/set too long");
  return;
}


/* ==== 00403980  FUN_00403980  size=20 ==== */

void FUN_00403980(void)

{
  FUN_00405370();
  return;
}


/* ==== 004039a0  FUN_004039a0  size=51 ==== */

void FUN_004039a0(void)

{
  FUN_00403980();
  FUN_00403980();
  FUN_00403980();
  return;
}


/* ==== 004039e0  FUN_004039e0  size=48 ==== */

void FUN_004039e0(undefined4 param_1,undefined4 param_2,int param_3,code *param_4)

{
  while( true ) {
    if (param_3 == 0) break;
    (*param_4)();
    param_3 = param_3 + -1;
  }
  return;
}


/* ==== 00403a10  FUN_00403a10  size=90 ==== */

void FUN_00403a10(void)

{
  int in_ECX;
  
  FUN_00401ac0();
  FUN_00401ac0();
  FUN_00401ac0();
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(in_ECX + 0xa4));
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(in_ECX + 100));
  FUN_00405330();
  return;
}


/* ==== 00403a70  FUN_00403a70  size=358 ==== */

void FUN_00403a70(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined1 auStack_54 [12];
  undefined4 uStack_48;
  undefined4 uStack_44;
  int iStack_40;
  uint uStack_3c;
  undefined4 local_38;
  undefined1 *local_34;
  int local_30;
  int local_2c;
  int local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070bedd;
  local_10 = ExceptionList;
  uStack_3c = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iStack_40 = 0x403a9a;
  iVar1 = game_get_player_or_session_blob();
  if (*(int *)(param_1 + 0x1e8) == *(int *)(iVar1 + 0x1e8)) {
    local_24 = 4000;
    local_34 = auStack_54;
    local_38 = FUN_004054a0(&DAT_0073f534);
    local_8 = 0;
    puVar3 = &local_24;
    FUN_004d1bb0(puVar3);
    uVar2 = game_timing_or_delay_helper(puVar3);
    local_8 = 0xffffffff;
    local_28 = ui_find_widget_by_key(uVar2);
    if (*(char *)(local_28 + 0x51) != '\0') {
      *(undefined4 *)(local_28 + 0x30c) = 0;
      iStack_40 = 0x403b26;
      local_18 = local_28;
      FUN_004051f0();
      local_20 = param_1 + 0x8e8;
      iStack_40 = 0x403b3b;
      local_1c = game_loop_helper_018d0();
      iStack_40 = 0x403b46;
      local_2c = game_loop_helper_018b0();
      for (; local_1c != local_2c; local_1c = local_1c + 4) {
        local_30 = local_1c;
        iStack_40 = 0;
        uStack_44 = 9;
        uStack_48 = 0x403b70;
        iStack_40 = FUN_005e9570();
        local_14 = iStack_40;
        if (iStack_40 != 0) {
          *(undefined1 *)(iStack_40 + 0x60) = 1;
          *(undefined4 *)(iStack_40 + 0x4c) = 1;
          *(undefined4 *)(iStack_40 + 0x40) = 0x50;
          *(undefined4 *)(iStack_40 + 0x44) = 0xb4;
          uStack_44 = 0x403bb0;
          FUN_00405250();
          *(int *)(local_18 + 0x30c) = *(int *)(local_18 + 0x30c) + 1;
        }
      }
    }
  }
  ExceptionList = local_10;
  return;
}


/* ==== 004051f0  FUN_004051f0  size=95 ==== */

void FUN_004051f0(void)

{
  undefined4 uVar1;
  int *in_ECX;
  int *piVar2;
  
  piVar2 = in_ECX + 1;
  if (*in_ECX != *piVar2) {
    FUN_00401710();
    uVar1 = FUN_00401c60();
    FUN_00405eb0(*in_ECX,*piVar2,uVar1);
    *piVar2 = *in_ECX;
  }
  return;
}


/* ==== 00405250  FUN_00405250  size=26 ==== */

void FUN_00405250(undefined4 param_1)

{
  FUN_00405f20(param_1);
  return;
}


/* ==== 00405270  FUN_00405270  size=33 ==== */

int FUN_00405270(int param_1)

{
  int *in_ECX;
  
  return param_1 * 0x94 + *in_ECX;
}


/* ==== 004052a0  FUN_004052a0  size=20 ==== */

void FUN_004052a0(void)

{
  FUN_004055f0();
  return;
}


/* ==== 004052c0  FUN_004052c0  size=106 ==== */

undefined4 FUN_004052c0(int *param_1)

{
  undefined4 uVar1;
  undefined4 in_ECX;
  undefined1 local_6;
  undefined1 local_5;
  
  uVar1 = FUN_00401c60();
  uVar1 = _Unfancy<>(&local_5,uVar1);
  _Vector_alloc<>(local_6,uVar1);
  FUN_00405f70((param_1[1] - *param_1) / 0x94,param_1,param_1 + 1);
  return in_ECX;
}


/* ==== 00405330  FUN_00405330  size=20 ==== */

void FUN_00405330(void)

{
  FUN_00405690();
  return;
}


/* ==== 00405350  FUN_00405350  size=20 ==== */

void FUN_00405350(void)

{
  FUN_00405730();
  return;
}


/* ==== 00405370  FUN_00405370  size=42 ==== */

void FUN_00405370(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_004057d0();
  uVar1 = FUN_00401c60(uVar1);
  FUN_004060b0(uVar1);
  return;
}


/* ==== 004053a0  FUN_004053a0  size=25 ==== */

void FUN_004053a0(undefined4 param_1)

{
  FID_conflict_append(param_1);
  return;
}


/* ==== 004053c0  ~function<void___cdecl(void)>  size=29 ==== */

/* Library Function - Single Match
    public: __thiscall std::function<void __cdecl(void)>::~function<void __cdecl(void)>(void)
   
   Libraries: Visual Studio 2012 Debug, Visual Studio 2012 Release */

void __thiscall
std::function<void___cdecl(void)>::~function<void___cdecl(void)>(function<void___cdecl(void)> *this)

{
  FUN_004057f0(this);
  FUN_004055b0();
  return;
}


/* ==== 004053e0  FUN_004053e0  size=105 ==== */

int FUN_004053e0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int in_ECX;
  
  iVar1 = _Unfancy<>(param_1);
  if (in_ECX != iVar1) {
    uVar2 = FUN_00401c60();
    uVar3 = FUN_00401c60();
    FUN_004057f0(0,uVar2,uVar3);
    FUN_004025f0(uVar2,uVar3);
    FUN_00405970(param_1);
  }
  return in_ECX;
}


/* ==== 00405450  FUN_00405450  size=67 ==== */

undefined4 FUN_00405450(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 in_ECX;
  undefined1 local_5;
  
  uVar1 = FUN_00401c60();
  FUN_004060f0(local_5,uVar1);
  FUN_00401720(&DAT_0073f532);
  FUN_00405970(param_1);
  return in_ECX;
}


/* ==== 004054a0  FUN_004054a0  size=122 ==== */

undefined4 FUN_004054a0(undefined4 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 in_ECX;
  undefined1 local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070c11d;
  local_10 = ExceptionList;
  uVar1 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  _Compressed_pair<><>(local_11);
  local_8 = 0;
  uVar2 = FUN_00405b00(param_1,uVar1);
  uVar2 = _Unfancy<>(uVar2);
  FUN_00406140(param_1,uVar2);
  ExceptionList = local_10;
  return in_ECX;
}


/* ==== 00405520  FUN_00405520  size=134 ==== */

undefined4 FUN_00405520(_String_val<std::_Simple_types<char>_> *param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined4 in_ECX;
  undefined1 local_12;
  undefined1 local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070c11d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar1 = FUN_00401c60(DAT_007c5940 ^ (uint)&stack0xfffffffc);
  uVar1 = _Unfancy<>(&local_11,uVar1);
  FUN_004060f0(local_12,uVar1);
  local_8 = 0;
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  pcVar2 = std::_String_val<std::_Simple_types<char>_>::_Myptr(param_1);
  FUN_00406280(pcVar2,uVar1);
  ExceptionList = local_10;
  return in_ECX;
}


/* ==== 004055b0  FUN_004055b0  size=20 ==== */

void FUN_004055b0(void)

{
  FUN_004055d0();
  return;
}


/* ==== 004055d0  FUN_004055d0  size=20 ==== */

void FUN_004055d0(void)

{
  FUN_00401710();
  return;
}


/* ==== 004055f0  FUN_004055f0  size=155 ==== */

void FUN_004055f0(void)

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
    FUN_00406380(*in_ECX,*piVar3,uVar1);
    FUN_00405ba0(*in_ECX,(*piVar2 - *in_ECX) / 0x94);
    *in_ECX = 0;
    *piVar3 = 0;
    *piVar2 = 0;
  }
  return;
}


/* ==== 00405690  FUN_00405690  size=155 ==== */

void FUN_00405690(void)

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
    FUN_00406040(*in_ECX,*piVar3,uVar1);
    FUN_00405bd0(*in_ECX,(*piVar2 - *in_ECX) / 0x60);
    *in_ECX = 0;
    *piVar3 = 0;
    *piVar2 = 0;
  }
  return;
}


/* ==== 00405730  FUN_00405730  size=155 ==== */

void FUN_00405730(void)

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
    FUN_004025f0(*in_ECX,*piVar3,uVar1);
    FUN_00405bf0(*in_ECX,(*piVar2 - *in_ECX) / 0x18);
    *in_ECX = 0;
    *piVar3 = 0;
    *piVar2 = 0;
  }
  return;
}


/* ==== 004057d0  FUN_004057d0  size=23 ==== */

void FUN_004057d0(void)

{
  _Unfancy<>();
  return;
}


/* ==== 004057f0  FUN_004057f0  size=136 ==== */

void FUN_004057f0(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *in_ECX;
  undefined1 local_5;
  
  FUN_00401710();
  cVar1 = FUN_00405c70();
  if (cVar1 != '\0') {
    uVar2 = FUN_00401c60();
    FUN_00405c30(uVar2,*in_ECX,in_ECX[5]);
    FUN_00405c50();
  }
  in_ECX[4] = 0;
  in_ECX[5] = 0xf;
  local_5 = 0;
  FUN_00405cc0(in_ECX,&local_5);
  return;
}


/* ==== 00405880  FID_conflict:append  size=47 ==== */

/* Library Function - Multiple Matches With Different Base Names
    public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   & __thiscall std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
   >::append(char const * const)
    public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   & __thiscall std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
   >::assign(char const * const)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void FID_conflict_append(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00405b00(param_1);
  uVar1 = _Unfancy<>(uVar1);
  FUN_004058b0(param_1,uVar1);
  return;
}


/* ==== 004058b0  FUN_004058b0  size=120 ==== */

_String_val<std::_Simple_types<char>_> * FUN_004058b0(undefined4 param_1,uint param_2)

{
  char *pcVar1;
  _String_val<std::_Simple_types<char>_> *in_ECX;
  undefined1 local_5;
  
  if (*(uint *)(in_ECX + 0x14) < param_2) {
    in_ECX = (_String_val<std::_Simple_types<char>_> *)FUN_004063f0(param_2,0,param_1);
  }
  else {
    pcVar1 = std::_String_val<std::_Simple_types<char>_>::_Myptr(in_ECX);
    *(uint *)(in_ECX + 0x10) = param_2;
    _Unchecked_idl0<>(pcVar1,param_1,param_2);
    local_5 = 0;
    FUN_00405cc0(pcVar1 + param_2,&local_5);
  }
  return in_ECX;
}


/* ==== 00405930  FUN_00405930  size=58 ==== */

void FUN_00405930(int param_1,int param_2,undefined4 param_3)

{
  undefined1 local_5;
  
  _Unchecked_idl0<>(param_1,param_3,param_2);
  local_5 = 0;
  FUN_00405cc0(param_1 + param_2,&local_5);
  return;
}


/* ==== 00405970  FUN_00405970  size=159 ==== */

void FUN_00405970(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined1 local_5;
  
  puVar1 = (undefined4 *)_Unfancy<>();
  puVar2 = (undefined4 *)_Unfancy<>(param_1);
  *puVar1 = *puVar2;
  puVar1[1] = puVar2[1];
  puVar1[2] = puVar2[2];
  puVar1[3] = puVar2[3];
  puVar1[4] = puVar2[4];
  puVar1[5] = puVar2[5];
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  FUN_00401710();
  local_5 = 0;
  FUN_00405cc0(param_1,&local_5);
  return;
}


/* ==== 00405b00  FUN_00405b00  size=56 ==== */

int FUN_00405b00(char *param_1)

{
  char cVar1;
  char *local_c;
  
  local_c = param_1;
  do {
    cVar1 = *local_c;
    local_c = local_c + 1;
  } while (cVar1 != '\0');
  return (int)local_c - (int)(param_1 + 1);
}


/* ==== 00405b70  FUN_00405b70  size=33 ==== */

void FUN_00405b70(undefined4 param_1,int param_2)

{
  _Deallocate<>(param_1,param_2 * 0x134);
  return;
}


/* ==== 00405ba0  FUN_00405ba0  size=33 ==== */

void FUN_00405ba0(undefined4 param_1,int param_2)

{
  _Deallocate<>(param_1,param_2 * 0x94);
  return;
}


/* ==== 00405bd0  FUN_00405bd0  size=30 ==== */

void FUN_00405bd0(undefined4 param_1,int param_2)

{
  _Deallocate<>(param_1,param_2 * 0x60);
  return;
}


/* ==== 00405bf0  FUN_00405bf0  size=30 ==== */

void FUN_00405bf0(undefined4 param_1,int param_2)

{
  _Deallocate<>(param_1,param_2 * 0x18);
  return;
}


/* ==== 00405c10  DoDataExchange  size=26 ==== */

/* Library Function - Single Match
    protected: virtual void __thiscall CFindReplaceDialog::DoDataExchange(class CDataExchange *)
   
   Library: Visual Studio 2008 Debug */

void __thiscall CFindReplaceDialog::DoDataExchange(CFindReplaceDialog *this,CDataExchange *param_1)

{
  FUN_00401720(param_1);
  return;
}


/* ==== 00405c30  FUN_00405c30  size=25 ==== */

void FUN_00405c30(undefined4 param_1,undefined4 param_2,int param_3)

{
  FUN_00405ca0(param_2,param_3 + 1);
  return;
}


/* ==== 00405c50  FUN_00405c50  size=23 ==== */

void FUN_00405c50(void)

{
  FUN_004025f0();
  return;
}


/* ==== 00405c70  FUN_00405c70  size=42 ==== */

bool FUN_00405c70(void)

{
  int in_ECX;
  
  return 0xf < *(uint *)(in_ECX + 0x14);
}


/* ==== 00405ca0  FUN_00405ca0  size=29 ==== */

void FUN_00405ca0(undefined4 param_1,undefined4 param_2)

{
  _Deallocate<>(param_1,param_2);
  return;
}


/* ==== 00405cc0  FUN_00405cc0  size=15 ==== */

void FUN_00405cc0(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  return;
}


/* ==== 00405cf0  FUN_00405cf0  size=50 ==== */

undefined4 FUN_00405cf0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 local_5;
  
  FUN_00406ac0(local_5,param_2,param_3);
  return param_1;
}


/* ==== 00405d30  FUN_00405d30  size=95 ==== */

void FUN_00405d30(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  FUN_004025f0(&stack0x00000004,&stack0x00000008);
  iVar1 = FUN_00405d90(&stack0x00000004);
  iVar2 = FUN_00405d90(&stack0x00000008,iVar1);
  uVar3 = FUN_00405da0(&stack0x0000000c,iVar1,iVar2);
  FUN_00407090(iVar1,iVar2,iVar2 - iVar1 >> 2,uVar3);
  return;
}


/* ==== 00405d90  FUN_00405d90  size=13 ==== */

void FUN_00405d90(void)

{
  game_loop_helper_018d0();
  return;
}


/* ==== 00405da0  FUN_00405da0  size=17 ==== */

undefined4 FUN_00405da0(undefined4 *param_1)

{
  return *param_1;
}


/* ==== 00405dc0  FUN_00405dc0  size=231 ==== */

undefined4 FUN_00405dc0(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c [3];
  undefined1 local_20 [4];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 *local_10;
  undefined1 local_7;
  undefined1 local_6;
  undefined1 local_5;
  
  FUN_00407180(&local_34,param_2);
  cVar1 = FUN_00407240(local_2c[0],param_2);
  if (cVar1 == '\0') {
    FUN_004068d0();
    local_10 = (undefined4 *)FUN_004057d0();
    uVar2 = _Unfancy<>(&local_7);
    uVar3 = FUN_004072d0(local_20,param_2,uVar2);
    puVar6 = &DAT_0073f533;
    uVar5 = *local_10;
    uVar4 = FUN_00401c60(uVar5,&DAT_0073f533,uVar3);
    local_14 = FUN_004072f0(uVar4,uVar5,puVar6,uVar3,uVar2);
    local_18 = FUN_00406690();
    FUN_004065f0();
    local_1c = FUN_004066c0(local_34,local_30,local_18);
    local_6 = 1;
    FUN_004072a0(&local_1c,&local_6);
  }
  else {
    local_5 = 0;
    FUN_004072a0(local_2c,&local_5);
  }
  return param_1;
}


/* ==== 00405eb0  FUN_00405eb0  size=97 ==== */

void FUN_00405eb0(int param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0070bdc0;
  local_10 = ExceptionList;
  uVar1 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  for (; param_1 != param_2; param_1 = param_1 + 0x134) {
    uVar2 = _Unfancy<>(param_1,uVar1);
    FUN_004073d0(param_3,uVar2);
  }
  ExceptionList = local_10;
  return;
}


/* ==== 00405f20  FUN_00405f20  size=75 ==== */

void FUN_00405f20(undefined4 param_1)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) == *(int *)(in_ECX + 8)) {
    FUN_00407450(*(int *)(in_ECX + 4),param_1);
  }
  else {
    FUN_004073e0(param_1);
  }
  return;
}


/* ==== 00405f70  FUN_00405f70  size=197 ==== */

void FUN_00405f70(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070c14d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar1 = FUN_00401c60(DAT_007c5940 ^ (uint)&stack0xfffffffc);
  FUN_00401740(&DAT_0073f532,in_ECX);
  if (param_1 != 0) {
    FUN_00406900(param_1);
    local_8 = 0;
    uVar1 = FUN_00407640(*param_2,*param_3,*in_ECX,uVar1);
    in_ECX[1] = uVar1;
    local_8 = 0xffffffff;
    FUN_004065d0();
  }
  FUN_00401710();
  ExceptionList = local_10;
  return;
}


/* ==== 00406040  FUN_00406040  size=95 ==== */

void FUN_00406040(int param_1,int param_2,void *param_3)

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
  for (; param_1 != param_2; param_1 = param_1 + 0x60) {
    _Unfancy<>(param_1,uVar1);
    __ExceptionPtrDestroy(param_3);
  }
  ExceptionList = local_10;
  return;
}


/* ==== 004060b0  FUN_004060b0  size=60 ==== */

void FUN_004060b0(undefined4 param_1)

{
  int *in_ECX;
  
  FUN_00401710();
  FUN_00406550(param_1,*(undefined4 *)(*in_ECX + 4));
  FUN_00407700(param_1,*in_ECX);
  return;
}


/* ==== 004060f0  FUN_004060f0  size=25 ==== */

undefined4 FUN_004060f0(void)

{
  undefined4 in_ECX;
  
  _String_val<>();
  return in_ECX;
}


/* ==== 00406140  FUN_00406140  size=306 ==== */

void FUN_00406140(undefined4 param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *in_ECX;
  uint local_18;
  undefined4 local_14;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_10;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_c;
  undefined1 local_7;
  undefined1 local_6 [2];
  
  local_10 = in_ECX;
  local_c = in_ECX;
  uVar1 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::max_size(in_ECX);
  if (uVar1 < param_2) {
    FUN_00403960();
  }
  uVar2 = FUN_00401c60();
  FUN_00401740(&DAT_0073f532,local_c);
  if (param_2 < 0x10) {
    *(uint *)(local_c + 0x10) = param_2;
    *(undefined4 *)(local_c + 0x14) = 0xf;
    _Unchecked_idl0<>(local_c,param_1,param_2);
    local_6[0] = 0;
    FUN_00405cc0(local_c + param_2,local_6);
    FUN_00401710();
  }
  else {
    uVar1 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::max_size(local_10)
    ;
    local_18 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
               _Calculate_growth(param_2,0xf,uVar1);
    local_14 = FUN_00407750(uVar2,&local_18);
    FUN_004064c0(local_c,&local_14);
    *(uint *)(local_c + 0x10) = param_2;
    *(uint *)(local_c + 0x14) = local_18;
    uVar2 = _Unfancy<>(local_14,param_1,param_2);
    _Unchecked_idl0<>(uVar2);
    local_7 = 0;
    iVar3 = _Unfancy<>(local_14,&local_7);
    FUN_00405cc0(iVar3 + param_2);
    FUN_00401710();
  }
  return;
}


/* ==== 00406280  FUN_00406280  size=249 ==== */

void FUN_00406280(undefined4 param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *in_ECX;
  undefined4 local_18;
  uint local_14;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_10;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_c;
  
  local_10 = in_ECX;
  local_c = in_ECX;
  uVar1 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::max_size(in_ECX);
  if (uVar1 < param_2) {
    FUN_00403960();
  }
  uVar2 = FUN_00401c60();
  FUN_00401740(&DAT_0073f532,local_c);
  if (param_2 < 0x10) {
    *(uint *)(local_c + 0x10) = param_2;
    *(undefined4 *)(local_c + 0x14) = 0xf;
    _Unchecked_idl0<>(local_c,param_1,0x10);
    FUN_00401710();
  }
  else {
    uVar1 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::max_size(local_10)
    ;
    local_14 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
               _Calculate_growth(param_2,0xf,uVar1);
    local_18 = FUN_00407750(uVar2,&local_14);
    FUN_004064c0(local_c,&local_18);
    *(uint *)(local_c + 0x10) = param_2;
    *(uint *)(local_c + 0x14) = local_14;
    uVar2 = _Unfancy<>(local_18,param_1,param_2 + 1);
    _Unchecked_idl0<>(uVar2);
    FUN_00401710();
  }
  return;
}


/* ==== 00406380  FUN_00406380  size=97 ==== */

void FUN_00406380(int param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0070bdc0;
  local_10 = ExceptionList;
  uVar1 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  for (; param_1 != param_2; param_1 = param_1 + 0x94) {
    uVar2 = _Unfancy<>(param_1,uVar1);
    FUN_00407790(param_3,uVar2);
  }
  ExceptionList = local_10;
  return;
}


/* ==== 004063f0  FUN_004063f0  size=201 ==== */

basic_string<char,std::char_traits<char>,std::allocator<char>_> *
FUN_004063f0(uint param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *in_ECX;
  undefined4 local_10;
  undefined4 local_c;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_8;
  
  local_8 = in_ECX;
  uVar1 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::max_size(in_ECX);
  if (uVar1 < param_1) {
    FUN_00403960();
  }
  uVar1 = *(uint *)(local_8 + 0x14);
  local_10 = FUN_004069d0(param_1);
  uVar2 = FUN_00401c60();
  local_c = FUN_00407750(uVar2,&local_10);
  FUN_00401710();
  *(uint *)(local_8 + 0x10) = param_1;
  *(undefined4 *)(local_8 + 0x14) = local_10;
  uVar3 = _Unfancy<>(local_c,param_1,param_3);
  FUN_00405930(uVar3,param_1,param_3);
  if (uVar1 < 0x10) {
    FUN_004064c0(local_8,&local_c);
  }
  else {
    FUN_00405c30(uVar2,*(undefined4 *)local_8,uVar1);
    *(undefined4 *)local_8 = local_c;
  }
  return local_8;
}


/* ==== 004064c0  FUN_004064c0  size=44 ==== */

void FUN_004064c0(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  uVar1 = _Unfancy<>(param_1);
  puVar2 = (undefined4 *)FUN_004013e0(4,uVar1);
  *puVar2 = *param_2;
  return;
}


/* ==== 004064f0  FUN_004064f0  size=92 ==== */

int FUN_004064f0(void)

{
  int local_8;
  
  local_8 = allocate(1);
  FUN_004064c0(local_8,&local_8);
  FUN_004064c0(local_8 + 4,&local_8);
  FUN_004064c0(local_8 + 8,&local_8);
  *(undefined1 *)(local_8 + 0xc) = 1;
  *(undefined1 *)(local_8 + 0xd) = 1;
  return local_8;
}


/* ==== 00406550  FUN_00406550  size=74 ==== */

void FUN_00406550(undefined4 param_1,_Facet_base *param_2)

{
  _Facet_base *p_Var1;
  
  while (param_2[0xd] == (_Facet_base)0x0) {
    FUN_00406550(param_1,*(_Facet_base **)(param_2 + 8));
    p_Var1 = std::exchange<std::_Facet_base*,std::_Facet_base*>(&param_2,(_Facet_base **)param_2);
    FUN_004077c0(param_1,p_Var1);
  }
  return;
}


/* ==== 004065a0  FUN_004065a0  size=40 ==== */

int FUN_004065a0(uint param_1)

{
  if (0x5d1745d < param_1) {
    FUN_004015f0(0x5d1745d);
  }
  return param_1 * 0x2c;
}


/* ==== 004065d0  FUN_004065d0  size=30 ==== */

void FUN_004065d0(void)

{
  int *in_ECX;
  
  if (*in_ECX != 0) {
    FUN_004055f0();
  }
  return;
}


/* ==== 004065f0  FUN_004065f0  size=155 ==== */

void FUN_004065f0(void)

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
    FUN_004025f0(in_ECX[1],DAT_007c5940 ^ (uint)&stack0xfffffffc);
    FUN_004025f0(in_ECX[1] + 4);
    FUN_004025f0(in_ECX[1] + 8);
    _Unfancy<>(in_ECX[1] + 0x10);
    __ExceptionPtrDestroy((void *)*in_ECX);
  }
  FUN_00406da0();
  ExceptionList = local_10;
  return;
}


/* ==== 00406690  FUN_00406690  size=39 ==== */

void FUN_00406690(void)

{
  int in_ECX;
  _Facet_base *local_8;
  
  local_8 = (_Facet_base *)0x0;
  std::exchange<std::_Facet_base*,std::_Facet_base*>((_Facet_base **)(in_ECX + 4),&local_8);
  return;
}


/* ==== 004066c0  FUN_004066c0  size=523 ==== */

int FUN_004066c0(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_ECX;
  int local_8;
  
  in_ECX[1] = in_ECX[1] + 1;
  piVar1 = (int *)*in_ECX;
  *(int **)(param_3 + 4) = param_1;
  if (param_1 == piVar1) {
    *piVar1 = param_3;
    piVar1[1] = param_3;
    piVar1[2] = param_3;
    *(undefined1 *)(param_3 + 0xc) = 1;
  }
  else {
    if (param_2 == 0) {
      param_1[2] = param_3;
      if (param_1 == (int *)piVar1[2]) {
        piVar1[2] = param_3;
      }
    }
    else {
      *param_1 = param_3;
      if (param_1 == (int *)*piVar1) {
        *piVar1 = param_3;
      }
    }
    local_8 = param_3;
    while (*(char *)(*(int *)(local_8 + 4) + 0xc) == '\0') {
      if (*(int *)(local_8 + 4) == **(int **)(*(int *)(local_8 + 4) + 4)) {
        iVar2 = *(int *)(*(int *)(*(int *)(local_8 + 4) + 4) + 8);
        if (*(char *)(iVar2 + 0xc) == '\0') {
          *(undefined1 *)(*(int *)(local_8 + 4) + 0xc) = 1;
          *(undefined1 *)(iVar2 + 0xc) = 1;
          *(undefined1 *)(*(int *)(*(int *)(local_8 + 4) + 4) + 0xc) = 0;
          local_8 = *(int *)(*(int *)(local_8 + 4) + 4);
        }
        else {
          if (local_8 == *(int *)(*(int *)(local_8 + 4) + 8)) {
            local_8 = *(int *)(local_8 + 4);
            FUN_00406e90(local_8);
          }
          *(undefined1 *)(*(int *)(local_8 + 4) + 0xc) = 1;
          *(undefined1 *)(*(int *)(*(int *)(local_8 + 4) + 4) + 0xc) = 0;
          FUN_00406df0(*(undefined4 *)(*(int *)(local_8 + 4) + 4));
        }
      }
      else {
        iVar2 = **(int **)(*(int *)(local_8 + 4) + 4);
        if (*(char *)(iVar2 + 0xc) == '\0') {
          *(undefined1 *)(*(int *)(local_8 + 4) + 0xc) = 1;
          *(undefined1 *)(iVar2 + 0xc) = 1;
          *(undefined1 *)(*(int *)(*(int *)(local_8 + 4) + 4) + 0xc) = 0;
          local_8 = *(int *)(*(int *)(local_8 + 4) + 4);
        }
        else {
          if (local_8 == **(int **)(local_8 + 4)) {
            local_8 = *(int *)(local_8 + 4);
            FUN_00406df0(local_8);
          }
          *(undefined1 *)(*(int *)(local_8 + 4) + 0xc) = 1;
          *(undefined1 *)(*(int *)(*(int *)(local_8 + 4) + 4) + 0xc) = 0;
          FUN_00406e90(*(undefined4 *)(*(int *)(local_8 + 4) + 4));
        }
      }
    }
    *(undefined1 *)(piVar1[1] + 0xc) = 1;
  }
  return param_3;
}


/* ==== 004068d0  FUN_004068d0  size=42 ==== */

void FUN_004068d0(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00406f30();
  iVar2 = FUN_004057d0();
  if (iVar1 == *(int *)(iVar2 + 4)) {
    FUN_00403970();
  }
  return;
}


/* ==== 00406900  FUN_00406900  size=45 ==== */

void FUN_00406900(uint param_1)

{
  uint uVar1;
  
  uVar1 = FUN_00406fe0();
  if (uVar1 < param_1) {
    FUN_00401c80();
  }
  FUN_00406f70(param_1);
  return;
}


/* ==== 00406930  allocate  size=34 ==== */

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
  
  uVar1 = FUN_004065a0(param_1);
  FUN_00403080(uVar1);
  return;
}


/* ==== 00406960  FUN_00406960  size=101 ==== */

undefined4 FUN_00406960(int *param_1)

{
  undefined4 uVar1;
  undefined4 in_ECX;
  undefined1 local_6;
  undefined1 local_5;
  
  uVar1 = FUN_00401c60();
  uVar1 = _Unfancy<>(&local_5,uVar1);
  _Vector_alloc<>(local_6,uVar1);
  FUN_00407870(param_1[1] - *param_1 >> 2,param_1,param_1 + 1);
  return in_ECX;
}


/* ==== 004069d0  FUN_004069d0  size=41 ==== */

void FUN_004069d0(uint param_1)

{
  uint uVar1;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *in_ECX;
  
  uVar1 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::max_size(in_ECX);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Calculate_growth
            (param_1,*(uint *)(in_ECX + 0x14),uVar1);
  return;
}


/* ==== 00406a60  max_size  size=96 ==== */

/* Library Function - Single Match
    public: unsigned int __thiscall std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> >::max_size(void)const 
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

uint __thiscall
std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::max_size
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *this)

{
  allocator<char> *paVar1;
  uint *puVar2;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10 [2];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_8;
  
  local_8 = this;
  paVar1 = (allocator<char> *)FUN_00401c60();
  local_10[0] = _Default_allocator_traits<std::allocator<char>_>::max_size(paVar1);
  local_10[1] = 0x10;
  puVar2 = _Max_value<unsigned_int>(local_10,local_10 + 1);
  local_14 = *puVar2;
  local_18 = local_14 - 1;
  local_1c = FUN_00402140();
  puVar2 = _Max_value<unsigned_int>(&local_1c,&local_18);
  return *puVar2;
}


/* ==== 00406ac0  FUN_00406ac0  size=684 ==== */

basic_string<char,std::char_traits<char>,std::allocator<char>_> *
FUN_00406ac0(undefined4 param_1,_String_val<std::_Simple_types<char>_> *param_2,
            _String_val<std::_Simple_types<char>_> *param_3)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  undefined4 local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  int local_38;
  uint local_34;
  _String_val<std::_Simple_types<char>_> *local_30;
  _String_val<std::_Simple_types<char>_> *local_2c;
  uint local_28;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_24;
  uint local_20;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_1c;
  undefined1 local_16;
  char local_14;
  undefined1 local_13;
  undefined1 local_12;
  undefined1 local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070c19d;
  local_10 = ExceptionList;
  uVar2 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar3 = FUN_00401c60(uVar2);
  FUN_004060f0(local_16,uVar3);
  local_8 = 0;
  local_1c = local_24;
  local_2c = param_2;
  local_30 = param_3;
  FUN_00401710();
  FUN_00401710();
  local_20 = *(uint *)(local_2c + 0x10);
  local_28 = *(uint *)(local_30 + 0x10);
  local_3c = *(uint *)(local_2c + 0x14);
  local_40 = *(uint *)(local_30 + 0x14);
  local_34 = local_20 + local_28;
  local_13 = local_28 <= local_3c - local_20;
  local_11 = local_13;
  if (((bool)local_13) && (local_40 <= local_3c)) {
    FUN_00401720(&DAT_0073f532);
    FUN_00405970(param_2);
    pcVar4 = std::_String_val<std::_Simple_types<char>_>::_Myptr
                       ((_String_val<std::_Simple_types<char>_> *)local_1c);
    iVar5 = local_28 + 1;
    pcVar6 = std::_String_val<std::_Simple_types<char>_>::_Myptr(local_30);
    _Unchecked_idl0<>(pcVar4 + local_20,pcVar6,iVar5);
    *(uint *)(local_1c + 0x10) = local_34;
  }
  else {
    local_14 = local_20 <= local_40 - local_28;
    local_12 = local_14;
    uVar3 = FUN_00401c60(uVar2);
    uVar3 = FUN_00401c60(uVar3);
    cVar1 = FUN_00407940(uVar3);
    if ((cVar1 == '\0') || (local_14 == '\0')) {
      local_44 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::max_size
                           (local_24);
      if (local_44 - local_20 < local_28) {
        FUN_00403960();
      }
      local_48 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                 _Calculate_growth(local_34,0xf,local_44);
      FUN_00401740(&DAT_0073f532,local_1c);
      uVar3 = FUN_00401c60(&local_48);
      local_4c = FUN_00407750(uVar3);
      FUN_004064c0(local_1c,&local_4c);
      *(uint *)(local_1c + 0x10) = local_34;
      *(uint *)(local_1c + 0x14) = local_48;
      iVar5 = _Unfancy<>(local_4c);
      uVar2 = local_20;
      pcVar4 = std::_String_val<std::_Simple_types<char>_>::_Myptr(local_2c);
      _Unchecked_idl0<>(iVar5,pcVar4,uVar2);
      iVar7 = local_28 + 1;
      pcVar4 = std::_String_val<std::_Simple_types<char>_>::_Myptr(local_30);
      _Unchecked_idl0<>(iVar5 + local_20,pcVar4,iVar7);
      FUN_00401710();
    }
    else {
      FUN_00401720(&DAT_0073f532);
      FUN_00405970(param_3);
      local_38 = _Unfancy<>(*(undefined4 *)local_1c);
      _Unchecked_idl0<>(local_38 + local_20,local_38,local_28 + 1);
      uVar2 = local_20;
      pcVar4 = std::_String_val<std::_Simple_types<char>_>::_Myptr(local_2c);
      _Unchecked_idl0<>(local_38,pcVar4,uVar2);
      *(uint *)(local_1c + 0x10) = local_34;
    }
  }
  ExceptionList = local_10;
  return local_24;
}


/* ==== 00406da0  FUN_00406da0  size=20 ==== */

void FUN_00406da0(void)

{
  FUN_00406dc0();
  return;
}


/* ==== 00406dc0  FUN_00406dc0  size=40 ==== */

void FUN_00406dc0(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) != 0) {
    FUN_00407060(*(undefined4 *)(in_ECX + 4),1);
  }
  return;
}


/* ==== 00406df0  FUN_00406df0  size=155 ==== */

void FUN_00406df0(int *param_1)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = *param_1;
  *param_1 = *(int *)(iVar1 + 8);
  if (*(char *)(*(int *)(iVar1 + 8) + 0xd) == '\0') {
    *(int **)(*(int *)(iVar1 + 8) + 4) = param_1;
  }
  *(int *)(iVar1 + 4) = param_1[1];
  if (param_1 == *(int **)(*in_ECX + 4)) {
    *(int *)(*in_ECX + 4) = iVar1;
  }
  else if (param_1 == *(int **)(param_1[1] + 8)) {
    *(int *)(param_1[1] + 8) = iVar1;
  }
  else {
    *(int *)param_1[1] = iVar1;
  }
  *(int **)(iVar1 + 8) = param_1;
  param_1[1] = iVar1;
  return;
}


/* ==== 00406e90  FUN_00406e90  size=152 ==== */

void FUN_00406e90(int param_1)

{
  int *piVar1;
  int *in_ECX;
  
  piVar1 = *(int **)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0xd) == '\0') {
    *(int *)(*piVar1 + 4) = param_1;
  }
  piVar1[1] = *(int *)(param_1 + 4);
  if (param_1 == *(int *)(*in_ECX + 4)) {
    *(int **)(*in_ECX + 4) = piVar1;
  }
  else if (param_1 == **(int **)(param_1 + 4)) {
    **(int **)(param_1 + 4) = (int)piVar1;
  }
  else {
    *(int **)(*(int *)(param_1 + 4) + 8) = piVar1;
  }
  *piVar1 = param_1;
  *(int **)(param_1 + 4) = piVar1;
  return;
}


/* ==== 00406f30  FUN_00406f30  size=59 ==== */

uint FUN_00406f30(void)

{
  undefined4 uVar1;
  uint *puVar2;
  uint local_10;
  uint local_c [2];
  
  uVar1 = FUN_00401c60();
  local_c[0] = FUN_00407050(uVar1);
  local_10 = FUN_00402140();
  puVar2 = std::_Max_value<unsigned_int>(&local_10,local_c);
  return *puVar2;
}


/* ==== 00406f70  FUN_00406f70  size=100 ==== */

void FUN_00406f70(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *in_ECX;
  
  uVar1 = FUN_00401c60(&param_1);
  iVar2 = FUN_00407950(uVar1);
  *in_ECX = iVar2;
  in_ECX[1] = iVar2;
  in_ECX[2] = param_1 * 0x94 + iVar2;
  return;
}


/* ==== 00406fe0  FUN_00406fe0  size=59 ==== */

uint FUN_00406fe0(void)

{
  undefined4 uVar1;
  uint *puVar2;
  uint local_10;
  uint local_c [2];
  
  uVar1 = FUN_00401c60();
  local_c[0] = FUN_00407080(uVar1);
  local_10 = FUN_00402140();
  puVar2 = std::_Max_value<unsigned_int>(&local_10,local_c);
  return *puVar2;
}


/* ==== 00407020  FUN_00407020  size=30 ==== */

undefined4 * FUN_00407020(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  return in_ECX;
}


/* ==== 00407040  max_size  size=8 ==== */

/* Library Function - Single Match
    public: static unsigned int __cdecl std::_Default_allocator_traits<class std::allocator<char>
   >::max_size(class std::allocator<char> const &)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

uint __cdecl
std::_Default_allocator_traits<std::allocator<char>_>::max_size(allocator<char> *param_1)

{
  return 0xffffffff;
}


/* ==== 00407050  FUN_00407050  size=10 ==== */

undefined4 FUN_00407050(void)

{
  return 0x7ffffff;
}


/* ==== 00407060  FUN_00407060  size=32 ==== */

void FUN_00407060(undefined4 param_1,int param_2)

{
  _Deallocate<>(param_1,param_2 << 5);
  return;
}


/* ==== 00407080  FUN_00407080  size=10 ==== */

undefined4 FUN_00407080(void)

{
  return 0x1bacf91;
}


/* ==== 00407090  FUN_00407090  size=229 ==== */

void FUN_00407090(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int local_c;
  int local_8;
  
  while( true ) {
    if (param_2 - param_1 >> 2 < 0x21) {
      FUN_00407e80(param_1,param_2,param_4);
      return;
    }
    if (param_3 < 1) break;
    FUN_00407ff0(&local_c,param_1,param_2,param_4);
    param_3 = (param_3 >> 1) + (param_3 >> 2);
    if (local_c - param_1 >> 2 < param_2 - local_8 >> 2) {
      FUN_00407090(param_1,local_c,param_3,param_4);
      param_1 = local_8;
    }
    else {
      FUN_00407090(local_8,param_2,param_3,param_4);
      param_2 = local_c;
    }
  }
  FUN_00407f50(param_1,param_2,param_4);
  FUN_00407fb0(param_1,param_2,param_4);
  return;
}


/* ==== 00407180  FUN_00407180  size=182 ==== */

undefined4 * FUN_00407180(undefined4 *param_1,undefined4 param_2)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *local_8;
  
  piVar2 = (int *)FUN_004057d0();
  *param_1 = *(undefined4 *)(*piVar2 + 4);
  param_1[1] = 0;
  param_1[2] = *piVar2;
  local_8 = (undefined4 *)*param_1;
  while (*(char *)((int)local_8 + 0xd) == '\0') {
    *param_1 = local_8;
    uVar4 = param_2;
    uVar3 = _Unfancy<>(local_8 + 4,param_2);
    FUN_00401c60(uVar3);
    cVar1 = FUN_00407d30(uVar3,uVar4);
    if (cVar1 == '\0') {
      param_1[1] = 1;
      param_1[2] = local_8;
      local_8 = (undefined4 *)*local_8;
    }
    else {
      param_1[1] = 0;
      local_8 = (undefined4 *)local_8[2];
    }
  }
  return param_1;
}


/* ==== 00407240  FUN_00407240  size=88 ==== */

undefined1 FUN_00407240(int param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    uVar2 = _Unfancy<>(param_1 + 0x10);
    FUN_00401c60(param_2,uVar2);
    cVar1 = FUN_00407d30(param_2,uVar2);
    if (cVar1 == '\0') {
      return 1;
    }
  }
  return 0;
}


/* ==== 004072a0  FUN_004072a0  size=37 ==== */

undefined4 * FUN_004072a0(undefined4 *param_1,undefined1 *param_2)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  *(undefined1 *)(in_ECX + 1) = *param_2;
  return in_ECX;
}


/* ==== 004072d0  FUN_004072d0  size=20 ==== */

undefined4 FUN_004072d0(undefined4 param_1,undefined4 param_2)

{
  FUN_004082d0(param_2);
  return param_1;
}


/* ==== 004072f0  FUN_004072f0  size=212 ==== */

undefined4 *
FUN_004072f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070c1cd;
  local_10 = ExceptionList;
  uVar1 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_00407b50(param_1);
  local_8 = 0;
  uVar2 = _Unfancy<>(in_ECX[1] + 0x10,param_3,param_4,param_5,uVar1);
  FUN_00408330(*in_ECX,uVar2);
  FUN_004064c0(in_ECX[1],&param_2);
  FUN_004064c0(in_ECX[1] + 4,&param_2);
  FUN_004064c0(in_ECX[1] + 8,&param_2);
  *(undefined1 *)(in_ECX[1] + 0xc) = 0;
  *(undefined1 *)(in_ECX[1] + 0xd) = 0;
  ExceptionList = local_10;
  return in_ECX;
}


/* ==== 004073d0  FUN_004073d0  size=16 ==== */

void FUN_004073d0(void)

{
  FUN_004079a0(0);
  return;
}


/* ==== 004073e0  FUN_004073e0  size=112 ==== */

int FUN_004073e0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  int *piVar3;
  
  piVar3 = (int *)(in_ECX + 4);
  uVar2 = _Unfancy<>(*piVar3,param_1);
  uVar2 = FUN_00401c60(uVar2);
  FUN_00408380(uVar2);
  FUN_004023d0(*piVar3,*piVar3);
  iVar1 = *piVar3;
  *piVar3 = *piVar3 + 0x134;
  return iVar1;
}


/* ==== 00407450  FUN_00407450  size=482 ==== */

int FUN_00407450(int param_1,undefined4 param_2)

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
  puStack_c = &LAB_0070c1fd;
  local_10 = ExceptionList;
  uVar1 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_18 = FUN_00401c60(uVar1);
  local_30 = local_1c;
  local_24 = local_1c;
  local_28 = local_1c + 1;
  local_20 = (param_1 - *local_1c) / 0x134;
  local_34 = (*local_28 - *local_1c) / 0x134;
  iVar2 = FUN_00407cc0();
  if (local_34 == iVar2) {
    FUN_00401c80();
  }
  local_40 = local_34 + 1;
  local_2c = FUN_00407c60(local_40);
  local_14 = FUN_004083b0(local_18,&local_2c);
  local_4c = local_14 + 0x134 + local_20 * 0x134;
  local_8 = 0;
  local_3c = &local_4c;
  uVar4 = local_18;
  local_48 = local_4c;
  local_38 = local_4c;
  uVar3 = _Unfancy<>(local_20 * 0x134 + local_14,param_2,uVar1,local_18,local_14,local_2c);
  FUN_00408380(local_18,uVar3);
  *local_3c = local_20 * 0x134 + local_14;
  if (param_1 == *local_28) {
    FUN_004083d0(*local_24,*local_28,local_14,local_18);
  }
  else {
    FUN_004083d0(*local_24,param_1,local_14,local_18);
    *local_3c = local_14;
    FUN_004083d0(param_1,*local_28,local_14 + 0x134 + local_20 * 0x134,local_18);
  }
  uVar3 = 0;
  FUN_00407bb0(local_14,local_40,local_2c);
  local_44 = local_20 * 0x134 + local_14;
  local_8 = 0xffffffff;
  FUN_00407b00(uVar1,uVar4,uVar3);
  ExceptionList = local_10;
  return local_44;
}


/* ==== 00407640  FUN_00407640  size=175 ==== */

undefined4 FUN_00407640(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070c22d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_18 = FUN_00402d20(&param_1,DAT_007c5940 ^ (uint)&stack0xfffffffc);
  iVar1 = FUN_00402d20(&param_2);
  FUN_00403180(param_3,param_4);
  local_8 = 0;
  for (; local_18 != iVar1; local_18 = local_18 + 0x94) {
    FUN_00408480(local_18);
  }
  uVar2 = FUN_00403130();
  local_8 = 0xffffffff;
  FUN_00407ad0();
  ExceptionList = local_10;
  return uVar2;
}


/* ==== 00407700  FUN_00407700  size=65 ==== */

void FUN_00407700(undefined4 param_1,int param_2)

{
  FUN_004025f0(param_2);
  FUN_004025f0(param_2 + 4);
  FUN_004025f0(param_2 + 8);
  FUN_00407d90(param_1,param_2,1);
  return;
}


/* ==== 00407750  FUN_00407750  size=63 ==== */

undefined4 FUN_00407750(undefined4 param_1,int *param_2)

{
  undefined4 uVar1;
  
  *param_2 = *param_2 + 1;
  uVar1 = FUN_004084d0(param_1,param_2,0);
  *param_2 = *param_2 + -1;
  return uVar1;
}


/* ==== 00407790  FUN_00407790  size=16 ==== */

void FUN_00407790(void)

{
  FUN_00407a10(0);
  return;
}


/* ==== 004077a0  exchange<std::_Facet_base*,std::_Facet_base*>  size=29 ==== */

/* Library Function - Single Match
    class std::_Facet_base * __cdecl std::exchange<class std::_Facet_base *,class std::_Facet_base
   *>(class std::_Facet_base * &,class std::_Facet_base * &&)
   
   Libraries: Visual Studio 2019 Debug, Visual Studio 2019 Release */

_Facet_base * __cdecl
std::exchange<std::_Facet_base*,std::_Facet_base*>(_Facet_base **param_1,_Facet_base **param_2)

{
  _Facet_base *p_Var1;
  
  p_Var1 = *param_1;
  *param_1 = *param_2;
  return p_Var1;
}


/* ==== 004077c0  FUN_004077c0  size=93 ==== */

void FUN_004077c0(void *param_1,int param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0070bdc0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  _Unfancy<>(param_2 + 0x10,DAT_007c5940 ^ (uint)&stack0xfffffffc);
  __ExceptionPtrDestroy(param_1);
  FUN_00407700(param_1,param_2);
  ExceptionList = local_10;
  return;
}


/* ==== 00407870  FUN_00407870  size=197 ==== */

void FUN_00407870(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070bded;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar1 = FUN_00401c60(DAT_007c5940 ^ (uint)&stack0xfffffffc);
  FUN_00401740(&DAT_0073f532,in_ECX);
  if (param_1 != 0) {
    FUN_00402aa0(param_1);
    local_8 = 0;
    uVar1 = FUN_00403860(*param_2,*param_3,*in_ECX,uVar1);
    in_ECX[1] = uVar1;
    local_8 = 0xffffffff;
    FUN_00402900();
  }
  FUN_00401710();
  ExceptionList = local_10;
  return;
}


/* ==== 00407940  FUN_00407940  size=7 ==== */

undefined1 FUN_00407940(void)

{
  return 1;
}


/* ==== 00407950  FUN_00407950  size=19 ==== */

void FUN_00407950(undefined4 param_1,undefined4 *param_2)

{
  allocate(*param_2);
  return;
}


/* ==== 00407970  FUN_00407970  size=38 ==== */

undefined4 * FUN_00407970(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  FUN_00402770(param_1);
  *in_ECX = *param_1;
  return in_ECX;
}


/* ==== 004079a0  FUN_004079a0  size=49 ==== */

undefined4 FUN_004079a0(uint param_1)

{
  undefined4 in_ECX;
  
  FUN_00403a10();
  if ((param_1 & 1) != 0) {
    FUN_006e4b8e(in_ECX,0x134);
  }
  return in_ECX;
}


/* ==== 004079e0  FUN_004079e0  size=46 ==== */

undefined4 FUN_004079e0(uint param_1)

{
  undefined4 in_ECX;
  
  FUN_00407a80();
  if ((param_1 & 1) != 0) {
    FUN_006e4b8e(in_ECX,0x60);
  }
  return in_ECX;
}


/* ==== 00407a10  FUN_00407a10  size=49 ==== */

undefined4 FUN_00407a10(uint param_1)

{
  undefined4 in_ECX;
  
  FUN_004039a0();
  if ((param_1 & 1) != 0) {
    FUN_006e4b8e(in_ECX,0x94);
  }
  return in_ECX;
}


/* ==== 00407a50  FUN_00407a50  size=46 ==== */

undefined4 FUN_00407a50(uint param_1)

{
  undefined4 in_ECX;
  
  ~<>();
  if ((param_1 & 1) != 0) {
    FUN_006e4b8e(in_ECX,0x10);
  }
  return in_ECX;
}


/* ==== 00407a80  FUN_00407a80  size=45 ==== */

void FUN_00407a80(void)

{
  int in_ECX;
  
  FUN_00405350();
  FUN_00405350();
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(in_ECX + 8));
  return;
}


/* ==== 00407ab0  ~<>  size=23 ==== */

/* Library Function - Multiple Matches With Same Base Name
    public: __thiscall
   <lambda_399686a4a5619bf4b18c998976ba8b81>::~<lambda_399686a4a5619bf4b18c998976ba8b81>(void)
    public: __thiscall
   <lambda_9ab38a79c03e1e04423ad6818173354b>::~<lambda_9ab38a79c03e1e04423ad6818173354b>(void)
   
   Libraries: Visual Studio 2012 Debug, Visual Studio 2012 Release */

void ~<>(void)

{
  FUN_00401ac0();
  return;
}


/* ==== 00407ad0  FUN_00407ad0  size=39 ==== */

void FUN_00407ad0(void)

{
  undefined4 *in_ECX;
  
  FUN_00406380(*in_ECX,in_ECX[1],in_ECX[2]);
  return;
}


/* ==== 00407b00  FUN_00407b00  size=73 ==== */

void FUN_00407b00(void)

{
  undefined4 *in_ECX;
  
  if (in_ECX[1] != 0) {
    FUN_00405eb0(in_ECX[3],in_ECX[4],*in_ECX);
    FUN_00405b70(in_ECX[1],in_ECX[2]);
  }
  return;
}


/* ==== 00407b50  FUN_00407b50  size=93 ==== */

undefined4 FUN_00407b50(undefined4 param_1)

{
  uint uVar1;
  undefined4 in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070c25d;
  local_10 = ExceptionList;
  uVar1 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_00407de0(param_1);
  local_8 = 0;
  FUN_00407db0(uVar1);
  ExceptionList = local_10;
  return in_ECX;
}


/* ==== 00407bb0  FUN_00407bb0  size=169 ==== */

void FUN_00407bb0(int param_1,int param_2,int param_3)

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
    FUN_00405eb0(*in_ECX,*piVar3,uVar1);
    FUN_00405b70(*in_ECX,(*piVar2 - *in_ECX) / 0x134);
  }
  *in_ECX = param_1;
  *piVar3 = param_2 * 0x134 + param_1;
  *piVar2 = param_3 * 0x134 + param_1;
  return;
}


/* ==== 00407c60  FUN_00407c60  size=84 ==== */

uint FUN_00407c60(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_00407e10();
  uVar2 = FUN_00407cc0();
  if ((uVar1 <= uVar2 - (uVar1 >> 1)) && (uVar2 = (uVar1 >> 1) + uVar1, uVar2 < param_1)) {
    uVar2 = param_1;
  }
  return uVar2;
}


/* ==== 00407cc0  FUN_00407cc0  size=59 ==== */

uint FUN_00407cc0(void)

{
  undefined4 uVar1;
  uint *puVar2;
  uint local_10;
  uint local_c [2];
  
  uVar1 = FUN_00401c60();
  local_c[0] = FUN_00407e40(uVar1);
  local_10 = FUN_00402140();
  puVar2 = std::_Max_value<unsigned_int>(&local_10,local_c);
  return *puVar2;
}


/* ==== 00407d00  allocate  size=34 ==== */

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
  
  uVar1 = FUN_00408500(param_1);
  FUN_00403080(uVar1);
  return;
}


/* ==== 00407d30  FUN_00407d30  size=47 ==== */

bool FUN_00407d30(int *param_1,int *param_2)

{
  return *param_1 < *param_2;
}


/* ==== 00407d60  QuickBitSet  size=33 ==== */

/* Library Function - Single Match
    public: __thiscall Concurrency::details::QuickBitSet::QuickBitSet(void)
   
   Libraries: Visual Studio 2012, Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

QuickBitSet * __thiscall Concurrency::details::QuickBitSet::QuickBitSet(QuickBitSet *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  return this;
}


/* ==== 00407d90  FUN_00407d90  size=22 ==== */

void FUN_00407d90(undefined4 param_1,undefined4 param_2,int param_3)

{
  _Deallocate<>(param_2,param_3 * 0x2c);
  return;
}


/* ==== 00407db0  FUN_00407db0  size=39 ==== */

void FUN_00407db0(void)

{
  _Container_proxy *p_Var1;
  undefined4 *in_ECX;
  
  in_ECX[1] = 0;
  p_Var1 = std::allocator<std::_Container_proxy>::allocate
                     ((allocator<std::_Container_proxy> *)*in_ECX,1);
  in_ECX[1] = p_Var1;
  return;
}


/* ==== 00407de0  FUN_00407de0  size=34 ==== */

undefined4 * FUN_00407de0(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = param_1;
  in_ECX[1] = 0;
  return in_ECX;
}


/* ==== 00407e10  FUN_00407e10  size=38 ==== */

int FUN_00407e10(void)

{
  int *in_ECX;
  
  return (in_ECX[2] - *in_ECX) / 0x134;
}


/* ==== 00407e40  FUN_00407e40  size=10 ==== */

undefined4 FUN_00407e40(void)

{
  return 0xd4c77b;
}


/* ==== 00407e50  allocate  size=34 ==== */

/* Library Function - Single Match
    public: struct std::_Container_proxy * __thiscall std::allocator<struct
   std::_Container_proxy>::allocate(unsigned int)
   
   Libraries: Visual Studio 2019 Debug, Visual Studio 2019 Release */

_Container_proxy * __thiscall
std::allocator<std::_Container_proxy>::allocate(allocator<std::_Container_proxy> *this,uint param_1)

{
  uint uVar1;
  _Container_proxy *p_Var2;
  
  uVar1 = _Get_size_of_n<8>(param_1);
  p_Var2 = (_Container_proxy *)FUN_00403080(uVar1,this);
  return p_Var2;
}


/* ==== 00407e80  FUN_00407e80  size=199 ==== */

undefined4 * FUN_00407e80(undefined4 *param_1,undefined4 *param_2,code *param_3)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *local_10;
  undefined4 *local_c;
  
  if (param_1 != param_2) {
    local_c = param_1;
    while (puVar4 = local_c + 1, puVar4 != param_2) {
      uVar1 = *puVar4;
      cVar2 = (*param_3)(uVar1,*param_1);
      local_10 = puVar4;
      if (cVar2 == '\0') {
        while( true ) {
          puVar3 = local_10 + -1;
          cVar2 = (*param_3)(uVar1,*puVar3);
          if (cVar2 == '\0') break;
          *local_10 = *puVar3;
          local_10 = puVar3;
        }
        *local_10 = uVar1;
        local_c = puVar4;
      }
      else {
        FUN_00408ad0(param_1,puVar4,local_c + 2);
        *param_1 = uVar1;
        local_c = puVar4;
      }
    }
  }
  return param_2;
}


/* ==== 00407f50  FUN_00407f50  size=87 ==== */

void FUN_00407f50(int param_1,int param_2,undefined4 param_3)

{
  undefined4 local_10;
  int local_c;
  int local_8;
  
  local_c = param_2 - param_1 >> 2;
  local_8 = param_2 - param_1 >> 3;
  while (0 < local_8) {
    local_8 = local_8 + -1;
    local_10 = *(undefined4 *)(param_1 + local_8 * 4);
    FUN_00408b20(param_1,local_8,local_c,&local_10,param_3);
  }
  return;
}


/* ==== 00407fb0  FUN_00407fb0  size=52 ==== */

void FUN_00407fb0(int param_1,int param_2,undefined4 param_3)

{
  for (; 1 < param_2 - param_1 >> 2; param_2 = param_2 + -4) {
    FUN_00408bf0(param_1,param_2,param_3);
  }
  return;
}


/* ==== 00407ff0  FUN_00407ff0  size=727 ==== */

undefined4 FUN_00407ff0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,code *param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *local_14;
  undefined4 *local_10;
  undefined4 *local_c;
  undefined4 *local_8;
  
  puVar3 = param_2 + ((int)param_3 - (int)param_2 >> 3);
  uVar2 = FUN_00408c40(param_3,param_4);
  FUN_00408c60(param_2,puVar3,uVar2);
  local_8 = puVar3;
  local_c = (undefined4 *)FUN_00408d50(puVar3);
  for (; param_2 < local_8; local_8 = local_8 + -1) {
    puVar3 = (undefined4 *)FUN_00408c40(local_8,*local_8);
    cVar1 = (*param_4)(*puVar3);
    if (cVar1 != '\0') break;
    puVar3 = (undefined4 *)FUN_00408c40(local_8);
    cVar1 = (*param_4)(*local_8,*puVar3);
    if (cVar1 != '\0') break;
  }
  while (((local_c < param_3 && (cVar1 = (*param_4)(*local_c,*local_8), cVar1 == '\0')) &&
         (cVar1 = (*param_4)(*local_8,*local_c), cVar1 == '\0'))) {
    local_c = local_c + 1;
  }
  local_10 = local_c;
  local_14 = local_8;
  do {
    while (param_3 <= local_10) {
LAB_0040816e:
      for (; param_2 < local_14; local_14 = local_14 + -1) {
        puVar3 = (undefined4 *)FUN_00408c40(local_14);
        cVar1 = (*param_4)(*puVar3,*local_8);
        if (cVar1 == '\0') {
          cVar1 = (*param_4)(*local_8,*puVar3);
          if (cVar1 != '\0') break;
          local_8 = local_8 + -1;
          if (local_8 != puVar3) {
            FUN_00402490(local_8,puVar3);
          }
        }
      }
      if ((local_14 == param_2) && (local_10 == param_3)) {
        FUN_004024c0(&local_8,&local_c);
        return param_1;
      }
      if (local_14 == param_2) {
        if (local_c != local_10) {
          FUN_00402490(local_8,local_c);
        }
        local_c = local_c + 1;
        FUN_00402490(local_8,local_10);
        local_8 = local_8 + 1;
        local_10 = local_10 + 1;
      }
      else if (local_10 == param_3) {
        local_14 = local_14 + -1;
        local_8 = local_8 + -1;
        if (local_14 != local_8) {
          FUN_00402490(local_14,local_8);
        }
        local_c = local_c + -1;
        FUN_00402490(local_8,local_c);
      }
      else {
        local_14 = local_14 + -1;
        FUN_00402490(local_10,local_14);
        local_10 = local_10 + 1;
      }
    }
    cVar1 = (*param_4)(*local_8,*local_10);
    if (cVar1 == '\0') {
      cVar1 = (*param_4)(*local_10,*local_8);
      if (cVar1 != '\0') goto LAB_0040816e;
      if (local_c != local_10) {
        FUN_00402490(local_c,local_10);
      }
      local_c = local_c + 1;
    }
    local_10 = local_10 + 1;
  } while( true );
}


/* ==== 004082d0  FUN_004082d0  size=78 ==== */

undefined4 FUN_004082d0(undefined4 param_1)

{
  undefined4 in_ECX;
  undefined1 local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0070c280;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00408d70(local_11,param_1);
  ExceptionList = local_10;
  return in_ECX;
}


/* ==== 00408330  FUN_00408330  size=65 ==== */

void FUN_00408330(undefined4 param_1,undefined4 param_2,undefined1 *param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar1;
  undefined4 uVar2;
  
  FUN_004013e0(0x10,param_2);
  uVar2 = extraout_ECX;
  FUN_00402770(param_5);
  uVar1 = extraout_ECX_00;
  FUN_00407970(param_4);
  FUN_00408da0(*param_3,uVar1,uVar2);
  return;
}


/* ==== 00408380  FUN_00408380  size=41 ==== */

void FUN_00408380(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_004013e0(0x134,param_2);
  FUN_00408530(param_3);
  return;
}


/* ==== 004083b0  FUN_004083b0  size=19 ==== */

void FUN_004083b0(undefined4 param_1,undefined4 *param_2)

{
  allocate(*param_2);
  return;
}


/* ==== 004083d0  FUN_004083d0  size=171 ==== */

undefined4 FUN_004083d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070c2ad;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = FUN_00402d20(&param_1,DAT_007c5940 ^ (uint)&stack0xfffffffc);
  iVar1 = FUN_00402d20(&param_2);
  FUN_00403180(param_3,param_4);
  local_8 = 0;
  for (; local_14 != iVar1; local_14 = local_14 + 0x134) {
    FUN_00408de0(local_14);
  }
  uVar2 = FUN_00403130();
  local_8 = 0xffffffff;
  FUN_004089d0();
  ExceptionList = local_10;
  return uVar2;
}


/* ==== 00408480  FUN_00408480  size=65 ==== */

void FUN_00408480(undefined4 param_1)

{
  undefined4 uVar1;
  int in_ECX;
  
  uVar1 = _Unfancy<>(*(undefined4 *)(in_ECX + 4),param_1);
  FUN_00408e30(*(undefined4 *)(in_ECX + 8),uVar1);
  *(int *)(in_ECX + 4) = *(int *)(in_ECX + 4) + 0x94;
  return;
}


/* ==== 004084d0  FUN_004084d0  size=19 ==== */

void FUN_004084d0(allocator<char> *param_1,uint *param_2)

{
  std::allocator<char>::allocate(param_1,*param_2);
  return;
}


/* ==== 00408500  FUN_00408500  size=43 ==== */

int FUN_00408500(uint param_1)

{
  if (0x1bacf91 < param_1) {
    FUN_004015f0(0x1bacf91);
  }
  return param_1 * 0x94;
}


/* ==== 00408530  FUN_00408530  size=1103 ==== */

undefined1 * FUN_00408530(undefined1 *param_1)

{
  undefined1 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070c315;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = *param_1;
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(in_ECX + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(in_ECX + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(in_ECX + 0x20) = *(undefined4 *)(param_1 + 0x20);
  in_ECX[0x24] = param_1[0x24];
  in_ECX[0x25] = param_1[0x25];
  in_ECX[0x26] = param_1[0x26];
  in_ECX[0x27] = param_1[0x27];
  in_ECX[0x28] = param_1[0x28];
  in_ECX[0x29] = param_1[0x29];
  *(undefined4 *)(in_ECX + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(in_ECX + 0x30) = *(undefined4 *)(param_1 + 0x30);
  FUN_00408a30(param_1 + 0x34);
  local_8 = 0;
  *(undefined4 *)(in_ECX + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(in_ECX + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(in_ECX + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(in_ECX + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(in_ECX + 0x50) = *(undefined4 *)(param_1 + 0x50);
  in_ECX[0x54] = param_1[0x54];
  in_ECX[0x55] = param_1[0x55];
  *(undefined4 *)(in_ECX + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(in_ECX + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  in_ECX[0x60] = param_1[0x60];
  FUN_00405520(param_1 + 100);
  local_8._0_1_ = 1;
  *(undefined4 *)(in_ECX + 0x7c) = *(undefined4 *)(param_1 + 0x7c);
  in_ECX[0x80] = param_1[0x80];
  *(undefined4 *)(in_ECX + 0x84) = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)(in_ECX + 0x88) = *(undefined4 *)(param_1 + 0x88);
  *(undefined4 *)(in_ECX + 0x8c) = *(undefined4 *)(param_1 + 0x8c);
  *(undefined4 *)(in_ECX + 0x90) = *(undefined4 *)(param_1 + 0x90);
  *(undefined4 *)(in_ECX + 0x94) = *(undefined4 *)(param_1 + 0x94);
  *(undefined4 *)(in_ECX + 0x98) = *(undefined4 *)(param_1 + 0x98);
  in_ECX[0x9c] = param_1[0x9c];
  *(undefined4 *)(in_ECX + 0xa0) = *(undefined4 *)(param_1 + 0xa0);
  FUN_00405520(param_1 + 0xa4);
  local_8._0_1_ = 2;
  in_ECX[0xbc] = param_1[0xbc];
  *(undefined4 *)(in_ECX + 0xc0) = *(undefined4 *)(param_1 + 0xc0);
  FUN_00406960(param_1 + 0xc4);
  local_8._0_1_ = 3;
  *(undefined4 *)(in_ECX + 0xd0) = *(undefined4 *)(param_1 + 0xd0);
  FUN_00406960(param_1 + 0xd4);
  local_8 = CONCAT31(local_8._1_3_,4);
  in_ECX[0xe0] = param_1[0xe0];
  *(undefined4 *)(in_ECX + 0xe4) = *(undefined4 *)(param_1 + 0xe4);
  in_ECX[0xe8] = param_1[0xe8];
  in_ECX[0xe9] = param_1[0xe9];
  in_ECX[0xea] = param_1[0xea];
  *(undefined4 *)(in_ECX + 0xec) = *(undefined4 *)(param_1 + 0xec);
  *(undefined4 *)(in_ECX + 0xf0) = *(undefined4 *)(param_1 + 0xf0);
  *(undefined4 *)(in_ECX + 0xf4) = *(undefined4 *)(param_1 + 0xf4);
  *(undefined4 *)(in_ECX + 0xf8) = *(undefined4 *)(param_1 + 0xf8);
  *(undefined4 *)(in_ECX + 0xfc) = *(undefined4 *)(param_1 + 0xfc);
  *(undefined4 *)(in_ECX + 0x100) = *(undefined4 *)(param_1 + 0x100);
  *(undefined4 *)(in_ECX + 0x104) = *(undefined4 *)(param_1 + 0x104);
  *(undefined4 *)(in_ECX + 0x108) = *(undefined4 *)(param_1 + 0x108);
  *(undefined4 *)(in_ECX + 0x10c) = *(undefined4 *)(param_1 + 0x10c);
  *(undefined4 *)(in_ECX + 0x110) = *(undefined4 *)(param_1 + 0x110);
  *(undefined4 *)(in_ECX + 0x114) = *(undefined4 *)(param_1 + 0x114);
  *(undefined4 *)(in_ECX + 0x118) = *(undefined4 *)(param_1 + 0x118);
  *(undefined4 *)(in_ECX + 0x11c) = *(undefined4 *)(param_1 + 0x11c);
  *(undefined4 *)(in_ECX + 0x120) = *(undefined4 *)(param_1 + 0x120);
  FUN_00406960(param_1 + 0x124);
  *(undefined4 *)(in_ECX + 0x130) = *(undefined4 *)(param_1 + 0x130);
  ExceptionList = local_10;
  return in_ECX;
}


/* ==== 004089b0  FUN_004089b0  size=20 ==== */

void FUN_004089b0(void)

{
  function<void___cdecl(void)> *in_ECX;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(in_ECX);
  return;
}


/* ==== 004089d0  FUN_004089d0  size=39 ==== */

void FUN_004089d0(void)

{
  undefined4 *in_ECX;
  
  FUN_00405eb0(*in_ECX,in_ECX[1],in_ECX[2]);
  return;
}


/* ==== 00408a00  allocate  size=34 ==== */

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
  
  uVar1 = FUN_00408e60(param_1);
  FUN_00403080(uVar1);
  return;
}


/* ==== 00408a30  FUN_00408a30  size=106 ==== */

undefined4 FUN_00408a30(int *param_1)

{
  undefined4 uVar1;
  undefined4 in_ECX;
  undefined1 local_6;
  undefined1 local_5;
  
  uVar1 = FUN_00401c60();
  uVar1 = _Unfancy<>(&local_5,uVar1);
  _Vector_alloc<>(local_6,uVar1);
  FUN_00408e90((param_1[1] - *param_1) / 0x60,param_1,param_1 + 1);
  return in_ECX;
}


/* ==== 00408aa0  allocate  size=34 ==== */

/* Library Function - Single Match
    public: char * __thiscall std::allocator<char>::allocate(unsigned int)
   
   Libraries: Visual Studio 2019 Debug, Visual Studio 2019 Release */

char * __thiscall std::allocator<char>::allocate(allocator<char> *this,uint param_1)

{
  uint uVar1;
  char *pcVar2;
  
  uVar1 = _Get_size_of_n<1>(param_1);
  pcVar2 = (char *)FUN_00403080(uVar1,this);
  return pcVar2;
}


/* ==== 00408ad0  FUN_00408ad0  size=27 ==== */

void FUN_00408ad0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00409270(param_1,param_2,param_3);
  return;
}


/* ==== 00408b20  FUN_00408b20  size=206 ==== */

void FUN_00408b20(int param_1,int param_2,uint param_3,undefined4 param_4,code *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int local_8;
  
  iVar2 = param_2;
  local_8 = param_2;
  iVar6 = (int)(param_3 - 1) >> 1;
  while (iVar3 = local_8, local_8 < iVar6) {
    iVar1 = local_8 * 2;
    local_8 = iVar1 + 2;
    cVar4 = (*param_5)(*(undefined4 *)(param_1 + local_8 * 4),
                       *(undefined4 *)(param_1 + -4 + local_8 * 4));
    if (cVar4 != '\0') {
      local_8 = iVar1 + 1;
    }
    *(undefined4 *)(param_1 + iVar3 * 4) = *(undefined4 *)(param_1 + local_8 * 4);
  }
  param_2 = local_8;
  if (local_8 == iVar6) {
    uVar5 = param_3 & 0x80000001;
    if ((int)uVar5 < 0) {
      uVar5 = (uVar5 - 1 | 0xfffffffe) + 1;
    }
    if (uVar5 == 0) {
      *(undefined4 *)(param_1 + local_8 * 4) = *(undefined4 *)(param_1 + -4 + param_3 * 4);
      param_2 = param_3 - 1;
    }
  }
  FUN_004092e0(param_1,param_2,iVar2,param_4,param_5);
  return;
}


/* ==== 00408bf0  FUN_00408bf0  size=67 ==== */

void FUN_00408bf0(int param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 local_8;
  
  if (1 < param_2 - param_1 >> 2) {
    puVar1 = (undefined4 *)(param_2 + -4);
    local_8 = *puVar1;
    FUN_00409350(param_1,puVar1,puVar1,&local_8,param_3);
  }
  return;
}


/* ==== 00408c40  FUN_00408c40  size=17 ==== */

int FUN_00408c40(int param_1)

{
  return param_1 + -4;
}


/* ==== 00408c60  FUN_00408c60  size=230 ==== */

void FUN_00408c60(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = param_3 - param_1 >> 2;
  if (iVar1 < 0x29) {
    FUN_00409380(param_1,param_2,param_3,param_4);
  }
  else {
    iVar1 = iVar1 + 1 >> 3;
    FUN_00409380(param_1,param_1 + iVar1 * 4,param_1 + iVar1 * 8,param_4);
    FUN_00409380(param_2 + iVar1 * -4,param_2,param_2 + iVar1 * 4,param_4);
    FUN_00409380(param_3 + iVar1 * -8,param_3 + iVar1 * -4,param_3,param_4);
    FUN_00409380(param_1 + iVar1 * 4,param_2,param_3 + iVar1 * -4,param_4);
  }
  return;
}


/* ==== 00408d50  FUN_00408d50  size=17 ==== */

int FUN_00408d50(int param_1)

{
  return param_1 + 4;
}


/* ==== 00408d70  FUN_00408d70  size=45 ==== */

undefined4 FUN_00408d70(undefined4 param_1,undefined4 param_2)

{
  undefined4 in_ECX;
  undefined1 local_5;
  
  FUN_00402770(local_5);
  FUN_00409400(param_2);
  return in_ECX;
}


/* ==== 00408da0  FUN_00408da0  size=55 ==== */

undefined4 FUN_00408da0(void)

{
  undefined4 in_ECX;
  
  FUN_00409420(&stack0x00000008,&stack0x0000000c,0,0);
  return in_ECX;
}


/* ==== 00408de0  FUN_00408de0  size=65 ==== */

void FUN_00408de0(undefined4 param_1)

{
  undefined4 uVar1;
  int in_ECX;
  
  uVar1 = _Unfancy<>(*(undefined4 *)(in_ECX + 4),param_1);
  FUN_00409450(*(undefined4 *)(in_ECX + 8),uVar1);
  *(int *)(in_ECX + 4) = *(int *)(in_ECX + 4) + 0x134;
  return;
}


/* ==== 00408e30  FUN_00408e30  size=41 ==== */

void FUN_00408e30(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_004013e0(0x94,param_2);
  FUN_00408f70(param_3);
  return;
}


/* ==== 00408e60  FUN_00408e60  size=43 ==== */

int FUN_00408e60(uint param_1)

{
  if (0xd4c77b < param_1) {
    FUN_004015f0(0xd4c77b);
  }
  return param_1 * 0x134;
}


/* ==== 00408e90  FUN_00408e90  size=197 ==== */

void FUN_00408e90(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070c34d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar1 = FUN_00401c60(DAT_007c5940 ^ (uint)&stack0xfffffffc);
  FUN_00401740(&DAT_0073f532,in_ECX);
  if (param_1 != 0) {
    FUN_00409140(param_1);
    local_8 = 0;
    uVar1 = FUN_00409480(*param_2,*param_3,*in_ECX,uVar1);
    in_ECX[1] = uVar1;
    local_8 = 0xffffffff;
    FUN_00409120();
  }
  FUN_00401710();
  ExceptionList = local_10;
  return;
}


/* ==== 00408f70  FUN_00408f70  size=420 ==== */

undefined4 * FUN_00408f70(undefined4 *param_1)

{
  undefined4 *in_ECX;
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070c38e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  in_ECX[3] = param_1[3];
  in_ECX[4] = param_1[4];
  in_ECX[5] = param_1[5];
  in_ECX[6] = param_1[6];
  in_ECX[7] = param_1[7];
  in_ECX[8] = param_1[8];
  in_ECX[9] = param_1[9];
  in_ECX[10] = param_1[10];
  puVar2 = param_1 + 0xb;
  puVar3 = in_ECX + 0xb;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  in_ECX[0x13] = param_1[0x13];
  in_ECX[0x14] = param_1[0x14];
  in_ECX[0x15] = param_1[0x15];
  in_ECX[0x16] = param_1[0x16];
  in_ECX[0x17] = param_1[0x17];
  *(undefined1 *)(in_ECX + 0x18) = *(undefined1 *)(param_1 + 0x18);
  in_ECX[0x19] = param_1[0x19];
  in_ECX[0x1a] = param_1[0x1a];
  in_ECX[0x1b] = param_1[0x1b];
  in_ECX[0x1c] = param_1[0x1c];
  in_ECX[0x1d] = param_1[0x1d];
  in_ECX[0x1e] = param_1[0x1e];
  FUN_00409170(param_1 + 0x1f);
  local_8 = 0;
  FUN_00409170(param_1 + 0x21);
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_00409170(param_1 + 0x23);
  ExceptionList = local_10;
  return in_ECX;
}


/* ==== 00409120  FUN_00409120  size=30 ==== */

void FUN_00409120(void)

{
  int *in_ECX;
  
  if (*in_ECX != 0) {
    FUN_00405690();
  }
  return;
}


/* ==== 00409140  FUN_00409140  size=45 ==== */

void FUN_00409140(uint param_1)

{
  uint uVar1;
  
  uVar1 = FUN_00409220();
  if (uVar1 < param_1) {
    FUN_00401c80();
  }
  FUN_004091b0(param_1);
  return;
}


/* ==== 00409170  FUN_00409170  size=53 ==== */

undefined4 FUN_00409170(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 in_ECX;
  undefined1 local_5;
  
  uVar1 = FUN_00401c60();
  uVar1 = _Unfancy<>(&local_5,uVar1);
  FUN_00409530(param_1,uVar1);
  return in_ECX;
}


/* ==== 004091b0  FUN_004091b0  size=97 ==== */

void FUN_004091b0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *in_ECX;
  
  uVar1 = FUN_00401c60(&param_1);
  iVar2 = FUN_00409600(uVar1);
  *in_ECX = iVar2;
  in_ECX[1] = iVar2;
  in_ECX[2] = param_1 * 0x60 + iVar2;
  return;
}


/* ==== 00409220  FUN_00409220  size=59 ==== */

uint FUN_00409220(void)

{
  undefined4 uVar1;
  uint *puVar2;
  uint local_10;
  uint local_c [2];
  
  uVar1 = FUN_00401c60();
  local_c[0] = FUN_00409260(uVar1);
  local_10 = FUN_00402140();
  puVar2 = std::_Max_value<unsigned_int>(&local_10,local_c);
  return *puVar2;
}


/* ==== 00409260  FUN_00409260  size=10 ==== */

undefined4 FUN_00409260(void)

{
  return 0x2aaaaaa;
}


/* ==== 00409270  FUN_00409270  size=111 ==== */

undefined4 FUN_00409270(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar1 = FUN_00402d20(&stack0x00000004);
  iVar2 = FUN_00402d20(&stack0x00000008);
  iVar3 = FUN_00402d20(&stack0x0000000c);
  uVar4 = FUN_006e6bd0(iVar3 - (iVar2 - iVar1),iVar1,iVar2 - iVar1);
  return uVar4;
}


/* ==== 004092e0  FUN_004092e0  size=111 ==== */

void FUN_004092e0(int param_1,int param_2,int param_3,undefined4 *param_4,code *param_5)

{
  char cVar1;
  int local_8;
  
  while (local_8 = param_2 + -1 >> 1, param_3 < param_2) {
    cVar1 = (*param_5)(*(undefined4 *)(param_1 + local_8 * 4),*param_4);
    if (cVar1 == '\0') break;
    *(undefined4 *)(param_1 + param_2 * 4) = *(undefined4 *)(param_1 + local_8 * 4);
    param_2 = local_8;
  }
  *(undefined4 *)(param_1 + param_2 * 4) = *param_4;
  return;
}


/* ==== 00409350  FUN_00409350  size=47 ==== */

void FUN_00409350(undefined4 *param_1,int param_2,undefined4 *param_3,undefined4 param_4,
                 undefined4 param_5)

{
  *param_3 = *param_1;
  FUN_00408b20(param_1,0,param_2 - (int)param_1 >> 2,param_4,param_5);
  return;
}


/* ==== 00409380  FUN_00409380  size=128 ==== */

void FUN_00409380(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,code *param_4)

{
  char cVar1;
  
  cVar1 = (*param_4)(*param_2,*param_1);
  if (cVar1 != '\0') {
    FUN_00402490(param_2,param_1);
  }
  cVar1 = (*param_4)(*param_3,*param_2);
  if (cVar1 != '\0') {
    FUN_00402490(param_3,param_2);
    cVar1 = (*param_4)(*param_2,*param_1);
    if (cVar1 != '\0') {
      FUN_00402490(param_2,param_1);
    }
  }
  return;
}


/* ==== 00409400  FUN_00409400  size=24 ==== */

undefined4 * FUN_00409400(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = param_1;
  return in_ECX;
}


/* ==== 00409420  FUN_00409420  size=47 ==== */

undefined4 * FUN_00409420(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  
  puVar1 = (undefined4 *)FUN_00402d20(param_1);
  *in_ECX = *puVar1;
  FUN_00409af0();
  return in_ECX;
}


/* ==== 00409450  FUN_00409450  size=41 ==== */

void FUN_00409450(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_004013e0(0x134,param_2);
  FUN_00409620(param_3);
  return;
}


/* ==== 00409480  FUN_00409480  size=172 ==== */

undefined4 FUN_00409480(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070c3bd;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_18 = FUN_00402d20(&param_1,DAT_007c5940 ^ (uint)&stack0xfffffffc);
  iVar1 = FUN_00402d20(&param_2);
  FUN_00403180(param_3,param_4);
  local_8 = 0;
  for (; local_18 != iVar1; local_18 = local_18 + 0x60) {
    FUN_00409c20(local_18);
  }
  uVar2 = FUN_00403130();
  local_8 = 0xffffffff;
  FUN_00409ac0();
  ExceptionList = local_10;
  return uVar2;
}


/* ==== 00409530  FUN_00409530  size=201 ==== */

undefined4 FUN_00409530(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 in_ECX;
  undefined1 *puVar4;
  undefined1 local_14;
  undefined1 local_13;
  undefined1 local_12 [2];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070c3ed;
  local_10 = ExceptionList;
  uVar1 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  puVar4 = local_12;
  uVar2 = FUN_00409c00(&local_13);
  FUN_00409c60(local_14,uVar2,puVar4,param_2);
  uVar2 = FUN_004057d0(uVar1);
  FUN_00401740(&DAT_0073f532,uVar2);
  uVar3 = FUN_00401c60(uVar2);
  FUN_00409a80(uVar3,uVar2);
  local_8 = 0;
  FUN_00409c90(param_1);
  FUN_00409a60();
  FUN_00401710();
  local_8 = 0xffffffff;
  FUN_00409a30();
  ExceptionList = local_10;
  return in_ECX;
}


/* ==== 00409600  FUN_00409600  size=19 ==== */

void FUN_00409600(undefined4 param_1,undefined4 *param_2)

{
  allocate(*param_2);
  return;
}


/* ==== 00409620  FUN_00409620  size=1031 ==== */

undefined1 * FUN_00409620(undefined1 *param_1)

{
  undefined1 *in_ECX;
  
  *in_ECX = *param_1;
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(in_ECX + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(in_ECX + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(in_ECX + 0x20) = *(undefined4 *)(param_1 + 0x20);
  in_ECX[0x24] = param_1[0x24];
  in_ECX[0x25] = param_1[0x25];
  in_ECX[0x26] = param_1[0x26];
  in_ECX[0x27] = param_1[0x27];
  in_ECX[0x28] = param_1[0x28];
  in_ECX[0x29] = param_1[0x29];
  *(undefined4 *)(in_ECX + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(in_ECX + 0x30) = *(undefined4 *)(param_1 + 0x30);
  FUN_00409b20(param_1 + 0x34);
  *(undefined4 *)(in_ECX + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(in_ECX + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(in_ECX + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(in_ECX + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(in_ECX + 0x50) = *(undefined4 *)(param_1 + 0x50);
  in_ECX[0x54] = param_1[0x54];
  in_ECX[0x55] = param_1[0x55];
  *(undefined4 *)(in_ECX + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(in_ECX + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  in_ECX[0x60] = param_1[0x60];
  FUN_00405450(param_1 + 100);
  *(undefined4 *)(in_ECX + 0x7c) = *(undefined4 *)(param_1 + 0x7c);
  in_ECX[0x80] = param_1[0x80];
  *(undefined4 *)(in_ECX + 0x84) = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)(in_ECX + 0x88) = *(undefined4 *)(param_1 + 0x88);
  *(undefined4 *)(in_ECX + 0x8c) = *(undefined4 *)(param_1 + 0x8c);
  *(undefined4 *)(in_ECX + 0x90) = *(undefined4 *)(param_1 + 0x90);
  *(undefined4 *)(in_ECX + 0x94) = *(undefined4 *)(param_1 + 0x94);
  *(undefined4 *)(in_ECX + 0x98) = *(undefined4 *)(param_1 + 0x98);
  in_ECX[0x9c] = param_1[0x9c];
  *(undefined4 *)(in_ECX + 0xa0) = *(undefined4 *)(param_1 + 0xa0);
  FUN_00405450(param_1 + 0xa4);
  in_ECX[0xbc] = param_1[0xbc];
  *(undefined4 *)(in_ECX + 0xc0) = *(undefined4 *)(param_1 + 0xc0);
  FUN_00409b20(param_1 + 0xc4);
  *(undefined4 *)(in_ECX + 0xd0) = *(undefined4 *)(param_1 + 0xd0);
  FUN_00409b20(param_1 + 0xd4);
  in_ECX[0xe0] = param_1[0xe0];
  *(undefined4 *)(in_ECX + 0xe4) = *(undefined4 *)(param_1 + 0xe4);
  in_ECX[0xe8] = param_1[0xe8];
  in_ECX[0xe9] = param_1[0xe9];
  in_ECX[0xea] = param_1[0xea];
  *(undefined4 *)(in_ECX + 0xec) = *(undefined4 *)(param_1 + 0xec);
  *(undefined4 *)(in_ECX + 0xf0) = *(undefined4 *)(param_1 + 0xf0);
  *(undefined4 *)(in_ECX + 0xf4) = *(undefined4 *)(param_1 + 0xf4);
  *(undefined4 *)(in_ECX + 0xf8) = *(undefined4 *)(param_1 + 0xf8);
  *(undefined4 *)(in_ECX + 0xfc) = *(undefined4 *)(param_1 + 0xfc);
  *(undefined4 *)(in_ECX + 0x100) = *(undefined4 *)(param_1 + 0x100);
  *(undefined4 *)(in_ECX + 0x104) = *(undefined4 *)(param_1 + 0x104);
  *(undefined4 *)(in_ECX + 0x108) = *(undefined4 *)(param_1 + 0x108);
  *(undefined4 *)(in_ECX + 0x10c) = *(undefined4 *)(param_1 + 0x10c);
  *(undefined4 *)(in_ECX + 0x110) = *(undefined4 *)(param_1 + 0x110);
  *(undefined4 *)(in_ECX + 0x114) = *(undefined4 *)(param_1 + 0x114);
  *(undefined4 *)(in_ECX + 0x118) = *(undefined4 *)(param_1 + 0x118);
  *(undefined4 *)(in_ECX + 0x11c) = *(undefined4 *)(param_1 + 0x11c);
  *(undefined4 *)(in_ECX + 0x120) = *(undefined4 *)(param_1 + 0x120);
  FUN_00409b20(param_1 + 0x124);
  *(undefined4 *)(in_ECX + 0x130) = *(undefined4 *)(param_1 + 0x130);
  return in_ECX;
}


/* ==== 00409a30  FUN_00409a30  size=38 ==== */

void FUN_00409a30(void)

{
  undefined4 *in_ECX;
  
  if (in_ECX[1] != 0) {
    FUN_004060b0(*in_ECX);
  }
  return;
}


/* ==== 00409a60  FUN_00409a60  size=21 ==== */

void FUN_00409a60(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = 0;
  return;
}


/* ==== 00409a80  FUN_00409a80  size=64 ==== */

undefined4 * FUN_00409a80(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  
  *in_ECX = param_1;
  uVar1 = _Unfancy<>(param_2);
  in_ECX[1] = uVar1;
  uVar1 = FUN_004064f0(*in_ECX);
  *(undefined4 *)in_ECX[1] = uVar1;
  return in_ECX;
}


/* ==== 00409ac0  FUN_00409ac0  size=39 ==== */

void FUN_00409ac0(void)

{
  undefined4 *in_ECX;
  
  FUN_00406040(*in_ECX,in_ECX[1],in_ECX[2]);
  return;
}


/* ==== 00409af0  FUN_00409af0  size=44 ==== */

undefined4 FUN_00409af0(void)

{
  undefined4 in_ECX;
  undefined1 local_5;
  
  _Compressed_pair<><>(local_5);
  FUN_00401720(&DAT_0073f532);
  return in_ECX;
}


/* ==== 00409b20  FUN_00409b20  size=163 ==== */

undefined4 FUN_00409b20(_Facet_base **param_1)

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
  FUN_00401720(&DAT_0073f532);
  FUN_00401720(param_1);
  return local_c;
}


/* ==== 00409bd0  allocate  size=34 ==== */

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
  
  uVar1 = FUN_00409d70(param_1);
  FUN_00403080(uVar1);
  return;
}


/* ==== 00409c00  FUN_00409c00  size=24 ==== */

undefined4 FUN_00409c00(undefined4 param_1)

{
  FUN_00401c60();
  return param_1;
}


/* ==== 00409c20  FUN_00409c20  size=63 ==== */

void FUN_00409c20(undefined4 param_1)

{
  undefined4 uVar1;
  int in_ECX;
  
  uVar1 = _Unfancy<>(*(undefined4 *)(in_ECX + 4),param_1);
  FUN_00409e40(*(undefined4 *)(in_ECX + 8),uVar1);
  *(int *)(in_ECX + 4) = *(int *)(in_ECX + 4) + 0x60;
  return;
}


/* ==== 00409c60  FUN_00409c60  size=36 ==== */

FairScheduleGroup *
FUN_00409c60(undefined4 param_1,undefined4 param_2,byte *param_3,location *param_4)

{
  FairScheduleGroup *in_ECX;
  
  Concurrency::details::FairScheduleGroup::MailChore
            (in_ECX,(_UnrealizedChore *)(uint)*param_3,param_4,(ScheduleGroupSegmentBase **)in_ECX);
  return in_ECX;
}


/* ==== 00409c90  FUN_00409c90  size=172 ==== */

void FUN_00409c90(void)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  
  piVar1 = (int *)FUN_004057d0();
  piVar2 = (int *)FUN_004057d0();
  uVar3 = FUN_00409e70(*(undefined4 *)(*piVar2 + 4),*piVar1);
  *(undefined4 *)(*piVar1 + 4) = uVar3;
  piVar1[1] = piVar2[1];
  if (*(char *)(*(int *)(*piVar1 + 4) + 0xd) == '\0') {
    uVar3 = FUN_00409dd0(*(undefined4 *)(*piVar1 + 4));
    *(undefined4 *)*piVar1 = uVar3;
    uVar3 = FUN_00409df0(*(undefined4 *)(*piVar1 + 4));
    *(undefined4 *)(*piVar1 + 8) = uVar3;
  }
  else {
    *(int *)*piVar1 = *piVar1;
    *(int *)(*piVar1 + 8) = *piVar1;
  }
  return;
}


/* ==== 00409d40  FUN_00409d40  size=43 ==== */

undefined4
FUN_00409d40(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5)

{
  undefined4 in_ECX;
  
  FUN_00409da0(*param_3,*param_4,*param_5);
  return in_ECX;
}


/* ==== 00409d70  FUN_00409d70  size=40 ==== */

int FUN_00409d70(uint param_1)

{
  if (0x2aaaaaa < param_1) {
    FUN_004015f0(0x2aaaaaa);
  }
  return param_1 * 0x60;
}


/* ==== 00409da0  FUN_00409da0  size=42 ==== */

undefined4 * FUN_00409da0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *in_ECX;
  
  *in_ECX = param_1;
  in_ECX[1] = param_2;
  in_ECX[2] = param_3;
  return in_ECX;
}


/* ==== 00409dd0  FUN_00409dd0  size=31 ==== */

int * FUN_00409dd0(int *param_1)

{
  for (; *(char *)(*param_1 + 0xd) == '\0'; param_1 = (int *)*param_1) {
  }
  return param_1;
}


/* ==== 00409df0  FUN_00409df0  size=33 ==== */

int FUN_00409df0(int param_1)

{
  while (*(char *)(*(int *)(param_1 + 8) + 0xd) == '\0') {
    param_1 = *(int *)(param_1 + 8);
  }
  return param_1;
}


/* ==== 00409e20  MailChore  size=25 ==== */

/* Library Function - Single Match
    public: virtual class Concurrency::details::Mailbox<class
   Concurrency::details::_UnrealizedChore>::Slot __thiscall
   Concurrency::details::FairScheduleGroup::MailChore(class Concurrency::details::_UnrealizedChore
   *,class Concurrency::location *,class Concurrency::details::ScheduleGroupSegmentBase * *)
   
   Libraries: Visual Studio 2012, Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

FairScheduleGroup * __thiscall
Concurrency::details::FairScheduleGroup::MailChore
          (FairScheduleGroup *this,_UnrealizedChore *param_1,location *param_2,
          ScheduleGroupSegmentBase **param_3)

{
  QuickBitSet::QuickBitSet((QuickBitSet *)this);
  return this;
}


/* ==== 00409e40  FUN_00409e40  size=38 ==== */

void FUN_00409e40(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_004013e0(0x60,param_2);
  FUN_00409f60(param_3);
  return;
}


/* ==== 00409e70  FUN_00409e70  size=234 ==== */

undefined4 * FUN_00409e70(undefined4 *param_1,undefined4 param_2)

{
  uint uVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070c41d;
  local_10 = ExceptionList;
  uVar1 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  piVar2 = (int *)FUN_004057d0(uVar1);
  local_14 = (undefined4 *)*piVar2;
  if (*(char *)((int)param_1 + 0xd) == '\0') {
    local_14 = (undefined4 *)FUN_0040a180(param_1 + 4);
    local_14[1] = param_2;
    *(undefined1 *)(local_14 + 3) = *(undefined1 *)(param_1 + 3);
    uVar3 = FUN_00401c60(uVar1,piVar2);
    local_8 = 0;
    puVar5 = local_14;
    uVar4 = FUN_00409e70(*param_1,local_14);
    *local_14 = uVar4;
    uVar4 = FUN_00409e70(param_1[2],local_14);
    local_14[2] = uVar4;
    local_8 = 0xffffffff;
    FUN_0040a0e0(uVar1,0,uVar3,puVar5);
  }
  ExceptionList = local_10;
  return local_14;
}


/* ==== 00409f60  FUN_00409f60  size=370 ==== */

undefined4 * FUN_00409f60(undefined4 *param_1)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070c45b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = *param_1;
  *(undefined1 *)(in_ECX + 1) = *(undefined1 *)(param_1 + 1);
  FUN_00405520(param_1 + 2);
  local_8 = 0;
  *(undefined1 *)(in_ECX + 8) = *(undefined1 *)(param_1 + 8);
  in_ECX[9] = param_1[9];
  in_ECX[10] = param_1[10];
  in_ECX[0xb] = param_1[0xb];
  in_ECX[0xc] = param_1[0xc];
  in_ECX[0xd] = param_1[0xd];
  *(undefined1 *)(in_ECX + 0xe) = *(undefined1 *)(param_1 + 0xe);
  *(undefined1 *)((int)in_ECX + 0x39) = *(undefined1 *)((int)param_1 + 0x39);
  *(undefined1 *)((int)in_ECX + 0x3a) = *(undefined1 *)((int)param_1 + 0x3a);
  *(undefined1 *)((int)in_ECX + 0x3b) = *(undefined1 *)((int)param_1 + 0x3b);
  *(undefined1 *)(in_ECX + 0xf) = *(undefined1 *)(param_1 + 0xf);
  *(undefined1 *)((int)in_ECX + 0x3d) = *(undefined1 *)((int)param_1 + 0x3d);
  *(undefined1 *)((int)in_ECX + 0x3e) = *(undefined1 *)((int)param_1 + 0x3e);
  *(undefined1 *)((int)in_ECX + 0x3f) = *(undefined1 *)((int)param_1 + 0x3f);
  *(undefined1 *)(in_ECX + 0x10) = *(undefined1 *)(param_1 + 0x10);
  *(undefined1 *)((int)in_ECX + 0x41) = *(undefined1 *)((int)param_1 + 0x41);
  *(undefined1 *)((int)in_ECX + 0x42) = *(undefined1 *)((int)param_1 + 0x42);
  in_ECX[0x11] = param_1[0x11];
  FUN_0040a110(param_1 + 0x12);
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_0040a110(param_1 + 0x15);
  ExceptionList = local_10;
  return in_ECX;
}


/* ==== 0040a0e0  FUN_0040a0e0  size=44 ==== */

void FUN_0040a0e0(void)

{
  int *in_ECX;
  
  if (*in_ECX != 0) {
    FUN_0040a1a0(in_ECX[1],in_ECX[2]);
  }
  return;
}


/* ==== 0040a110  FUN_0040a110  size=106 ==== */

undefined4 FUN_0040a110(int *param_1)

{
  undefined4 uVar1;
  undefined4 in_ECX;
  undefined1 local_6;
  undefined1 local_5;
  
  uVar1 = FUN_00401c60();
  uVar1 = _Unfancy<>(&local_5,uVar1);
  _Vector_alloc<>(local_6,uVar1);
  FUN_0040a200((param_1[1] - *param_1) / 0x18,param_1,param_1 + 1);
  return in_ECX;
}


/* ==== 0040a180  FUN_0040a180  size=25 ==== */

void FUN_0040a180(undefined4 param_1)

{
  FUN_0040a3e0(param_1);
  return;
}


/* ==== 0040a1a0  FUN_0040a1a0  size=94 ==== */

void FUN_0040a1a0(undefined4 param_1,_Facet_base *param_2)

{
  _Facet_base *p_Var1;
  
  while (param_2[0xd] == (_Facet_base)0x0) {
    FUN_0040a1a0(param_1,*(_Facet_base **)(param_2 + 8));
    p_Var1 = std::exchange<std::_Facet_base*,std::_Facet_base*>(&param_2,(_Facet_base **)param_2);
    FUN_00401720(p_Var1);
    FUN_004077c0(param_1,p_Var1);
  }
  return;
}


/* ==== 0040a200  FUN_0040a200  size=197 ==== */

void FUN_0040a200(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070c48d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar1 = FUN_00401c60(DAT_007c5940 ^ (uint)&stack0xfffffffc);
  FUN_00401740(&DAT_0073f532,in_ECX);
  if (param_1 != 0) {
    FUN_0040a2f0(param_1);
    local_8 = 0;
    uVar1 = FUN_0040a410(*param_2,*param_3,*in_ECX,uVar1);
    in_ECX[1] = uVar1;
    local_8 = 0xffffffff;
    FUN_0040a2d0();
  }
  FUN_00401710();
  ExceptionList = local_10;
  return;
}


/* ==== 0040a2d0  FUN_0040a2d0  size=30 ==== */

void FUN_0040a2d0(void)

{
  int *in_ECX;
  
  if (*in_ECX != 0) {
    FUN_00405730();
  }
  return;
}


/* ==== 0040a2f0  FUN_0040a2f0  size=45 ==== */

void FUN_0040a2f0(uint param_1)

{
  uint uVar1;
  
  uVar1 = FUN_0040a390();
  if (uVar1 < param_1) {
    FUN_00401c80();
  }
  FUN_0040a320(param_1);
  return;
}


/* ==== 0040a320  FUN_0040a320  size=97 ==== */

void FUN_0040a320(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *in_ECX;
  
  uVar1 = FUN_00401c60(&param_1);
  iVar2 = FUN_0040a510(uVar1);
  *in_ECX = iVar2;
  in_ECX[1] = iVar2;
  in_ECX[2] = param_1 * 0x18 + iVar2;
  return;
}


/* ==== 0040a390  FUN_0040a390  size=59 ==== */

uint FUN_0040a390(void)

{
  undefined4 uVar1;
  uint *puVar2;
  uint local_10;
  uint local_c [2];
  
  uVar1 = FUN_00401c60();
  local_c[0] = FUN_0040a3d0(uVar1);
  local_10 = FUN_00402140();
  puVar2 = std::_Max_value<unsigned_int>(&local_10,local_c);
  return *puVar2;
}


/* ==== 0040a3d0  FUN_0040a3d0  size=10 ==== */

undefined4 FUN_0040a3d0(void)

{
  return 0xaaaaaaa;
}


/* ==== 0040a3e0  FUN_0040a3e0  size=45 ==== */

void FUN_0040a3e0(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)FUN_004057d0(param_1);
  uVar2 = FUN_00401c60(*puVar1);
  FUN_0040a560(uVar2);
  return;
}


/* ==== 0040a410  FUN_0040a410  size=161 ==== */

int FUN_0040a410(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int local_1c;
  int local_18;
  undefined1 local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0070be7d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_18 = FUN_00402d20(&param_1,DAT_007c5940 ^ (uint)&stack0xfffffffc);
  local_1c = FUN_00402d20(&param_2);
  local_11 = 1;
  uVar1 = _Unfancy<>(param_3);
  uVar1 = FUN_00402d20(&local_1c,uVar1);
  uVar1 = FUN_00402d20(&local_18,uVar1);
  FUN_0040a630(uVar1);
  ExceptionList = local_10;
  return ((local_1c - local_18) / 0x18) * 0x18 + param_3;
}


/* ==== 0040a510  FUN_0040a510  size=19 ==== */

void FUN_0040a510(undefined4 param_1,undefined4 *param_2)

{
  allocate(*param_2);
  return;
}


/* ==== 0040a530  allocate  size=34 ==== */

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
  
  uVar1 = FUN_00403050(param_1);
  FUN_00403080(uVar1);
  return;
}


/* ==== 0040a560  FUN_0040a560  size=208 ==== */

undefined4 FUN_0040a560(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070c4bd;
  local_10 = ExceptionList;
  uVar1 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_00407de0(param_1);
  local_8 = 0;
  FUN_0040a710(uVar1);
  uVar2 = _Unfancy<>(local_18 + 0x10,param_3);
  FUN_0040a760(param_1,uVar2);
  FUN_004064c0(local_18,&param_2);
  FUN_004064c0(local_18 + 4,&param_2);
  FUN_004064c0(local_18 + 8,&param_2);
  *(undefined1 *)(local_18 + 0xc) = 0;
  *(undefined1 *)(local_18 + 0xd) = 0;
  uVar2 = FUN_00406690();
  local_8 = 0xffffffff;
  FUN_0040a6e0();
  ExceptionList = local_10;
  return uVar2;
}


/* ==== 0040a630  FUN_0040a630  size=102 ==== */

void FUN_0040a630(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00402d20(&param_1);
  iVar2 = FUN_00402d20(&param_2);
  FUN_00403360(iVar1,param_3,iVar2 - iVar1,(iVar2 - iVar1) / 0x18);
  return;
}


/* ==== 0040a6a0  FUN_0040a6a0  size=63 ==== */

void FUN_0040a6a0(undefined4 param_1)

{
  undefined4 uVar1;
  int in_ECX;
  
  uVar1 = _Unfancy<>(*(undefined4 *)(in_ECX + 4),param_1);
  FUN_0040a790(*(undefined4 *)(in_ECX + 8),uVar1);
  *(int *)(in_ECX + 4) = *(int *)(in_ECX + 4) + 0x18;
  return;
}


/* ==== 0040a6e0  FUN_0040a6e0  size=40 ==== */

void FUN_0040a6e0(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) != 0) {
    FUN_0040a740(*(undefined4 *)(in_ECX + 4),1);
  }
  return;
}


/* ==== 0040a710  FUN_0040a710  size=39 ==== */

void FUN_0040a710(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = 0;
  uVar1 = allocate(1);
  *(undefined4 *)(in_ECX + 4) = uVar1;
  return;
}


/* ==== 0040a740  FUN_0040a740  size=30 ==== */

void FUN_0040a740(undefined4 param_1,int param_2)

{
  _Deallocate<>(param_1,param_2 * 0x2c);
  return;
}


/* ==== 0040a760  FUN_0040a760  size=38 ==== */

void FUN_0040a760(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_004013e0(0x1c,param_2);
  FUN_0040a7e0(param_3);
  return;
}


/* ==== 0040a790  FUN_0040a790  size=65 ==== */

void FUN_0040a790(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_004013e0(0x18,param_2);
  *puVar1 = *param_3;
  puVar1[1] = param_3[1];
  puVar1[2] = param_3[2];
  puVar1[3] = param_3[3];
  puVar1[4] = param_3[4];
  puVar1[5] = param_3[5];
  return;
}


/* ==== 0040a7e0  FUN_0040a7e0  size=40 ==== */

int FUN_0040a7e0(int param_1)

{
  int in_ECX;
  
  FUN_00405520(param_1);
  *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(param_1 + 0x18);
  return in_ECX;
}


/* ==== 0040a850  FUN_0040a850  size=43 ==== */

undefined4 FUN_0040a850(undefined4 param_1,undefined4 param_2)

{
  FUN_0040e210(param_1,param_2,0);
  return param_1;
}


/* ==== 0040a880  FUN_0040a880  size=126 ==== */

undefined4 FUN_0040a880(void)

{
  undefined4 in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070c50c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0040d750(DAT_007c5940 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  FUN_0040d750();
  local_8._0_1_ = 1;
  FUN_0040d750();
  local_8 = CONCAT31(local_8._1_3_,2);
  FUN_0040a900();
  ExceptionList = local_10;
  return in_ECX;
}


/* ==== 0040a900  FUN_0040a900  size=240 ==== */

void FUN_0040a900(void)

{
  undefined4 *in_ECX;
  
  in_ECX[1] = 0;
  in_ECX[2] = 1;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[0x1a] = 0;
  in_ECX[8] = 0;
  *in_ECX = 0;
  in_ECX[0x1b] = 0;
  in_ECX[0x19] = 0;
  *(undefined1 *)(in_ECX + 0x18) = 0;
  in_ECX[9] = 0;
  in_ECX[0x1c] = 0;
  in_ECX[0x1d] = 0;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  in_ECX[0xe] = 0;
  in_ECX[0xf] = 0;
  in_ECX[0x10] = 0;
  in_ECX[0x11] = 0;
  in_ECX[0x12] = 0;
  in_ECX[10] = 0;
  in_ECX[7] = 0;
  in_ECX[0x13] = 0;
  in_ECX[0x14] = 0;
  in_ECX[0x15] = 0;
  in_ECX[0x16] = 0;
  in_ECX[0x17] = 0;
  in_ECX[0x1e] = 0;
  return;
}


/* ==== 0040a9f0  FUN_0040a9f0  size=145 ==== */

int FUN_0040a9f0(undefined4 param_1,undefined4 param_2)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070c50c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0040d750(DAT_007c5940 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  FUN_0040d750();
  local_8._0_1_ = 1;
  FUN_0040d750();
  local_8 = CONCAT31(local_8._1_3_,2);
  FUN_0040a900();
  *(undefined4 *)(in_ECX + 4) = param_1;
  *(undefined4 *)(in_ECX + 8) = param_2;
  ExceptionList = local_10;
  return in_ECX;
}


/* ==== 0040aa90  FUN_0040aa90  size=120 ==== */

undefined4 FUN_0040aa90(void)

{
  undefined4 in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070c556;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0040d8b0(DAT_007c5940 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  FUN_0040d650();
  local_8._0_1_ = 1;
  FUN_0040d650();
  local_8 = CONCAT31(local_8._1_3_,2);
  FUN_0040ab10();
  ExceptionList = local_10;
  return in_ECX;
}


/* ==== 0040ab10  FUN_0040ab10  size=262 ==== */

/* WARNING: Removing unreachable block (ram,0x0040abc3) */

void FUN_0040ab10(void)

{
  undefined4 *in_ECX;
  
  *(undefined1 *)(in_ECX + 1) = 1;
  FUN_004053a0(&DAT_007793b1);
  *(undefined1 *)(in_ECX + 8) = 0;
  in_ECX[10] = 0;
  in_ECX[9] = 0;
  in_ECX[0xd] = 0;
  in_ECX[0xc] = 0x3f800000;
  in_ECX[0xb] = 0x3f800000;
  *(undefined1 *)((int)in_ECX + 0x3b) = 0xff;
  *(undefined1 *)((int)in_ECX + 0x3a) = 0xff;
  *(undefined1 *)((int)in_ECX + 0x39) = 0xff;
  *(undefined1 *)(in_ECX + 0xe) = 0xff;
  *(undefined1 *)((int)in_ECX + 0x3f) = 0xff;
  *(undefined1 *)(in_ECX + 0x10) = 0xff;
  *(undefined1 *)((int)in_ECX + 0x41) = 0xff;
  *(undefined1 *)((int)in_ECX + 0x42) = 0;
  in_ECX[0x11] = 0;
  *(undefined1 *)((int)in_ECX + 0x3d) = 0;
  *(undefined1 *)(in_ECX + 0xf) = 0;
  *in_ECX = 0;
  *(undefined1 *)((int)in_ECX + 0x3e) = 0;
  *(undefined1 *)((int)in_ECX + 0x3f) = 0xff;
  *(undefined1 *)(in_ECX + 0x10) = 0xff;
  *(undefined1 *)((int)in_ECX + 0x41) = 0xff;
  FUN_0040d5f0();
  FUN_0040d5f0();
  return;
}


/* ==== 0040ac20  FUN_0040ac20  size=67 ==== */

void FUN_0040ac20(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  *(undefined1 *)(in_ECX + 5) = 0;
  return;
}


/* ==== 0040ac70  FUN_0040ac70  size=23 ==== */

undefined4 FUN_0040ac70(void)

{
  undefined4 in_ECX;
  
  FUN_0040ac20();
  return in_ECX;
}


/* ==== 0040ac90  FUN_0040ac90  size=188 ==== */

undefined4 FUN_0040ac90(void)

{
  undefined4 in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070c5d3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0040ac70(DAT_007c5940 ^ (uint)&stack0xfffffffc);
  FUN_0040d650();
  local_8 = 0;
  FUN_0040d8b0();
  local_8._0_1_ = 1;
  FUN_0040d8b0();
  local_8._0_1_ = 2;
  FUN_0040d650();
  local_8._0_1_ = 3;
  FUN_0040d650();
  local_8._0_1_ = 4;
  FUN_0040d650();
  local_8 = CONCAT31(local_8._1_3_,5);
  FUN_0040ad50();
  ExceptionList = local_10;
  return in_ECX;
}


/* ==== 0040ad50  FUN_0040ad50  size=684 ==== */

void FUN_0040ad50(void)

{
  undefined1 *in_ECX;
  
  *in_ECX = 1;
  FUN_0040d5f0();
  FUN_0040d5f0();
  FUN_0040d5f0();
  *(undefined4 *)(in_ECX + 0xc0) = 0;
  *(undefined4 *)(in_ECX + 0x1c) = 0xffffffff;
  in_ECX[0x28] = 0;
  *(undefined4 *)(in_ECX + 0x20) = 0xffffffff;
  in_ECX[0x24] = 1;
  in_ECX[0x25] = 1;
  in_ECX[0x26] = 0;
  in_ECX[0x27] = 0;
  *(undefined4 *)(in_ECX + 0x114) = 0;
  *(undefined4 *)(in_ECX + 0x118) = 0;
  in_ECX[0x29] = 0;
  *(undefined4 *)(in_ECX + 0x50) = 1;
  *(undefined4 *)(in_ECX + 0x4c) = 1;
  in_ECX[0x54] = 0;
  in_ECX[0x60] = 0;
  *(undefined4 *)(in_ECX + 0x7c) = 0;
  *(undefined4 *)(in_ECX + 0x58) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x5c) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x30) = 0xff;
  *(undefined4 *)(in_ECX + 0x98) = 0;
  *(undefined4 *)(in_ECX + 0x90) = 0;
  *(undefined4 *)(in_ECX + 0x94) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x84) = 1;
  *(undefined4 *)(in_ECX + 0x8c) = 1;
  *(undefined4 *)(in_ECX + 0x88) = 0;
  *(undefined4 *)(in_ECX + 0x48) = 0;
  *(undefined4 *)(in_ECX + 0x44) = 0;
  *(undefined4 *)(in_ECX + 0x40) = 0;
  FUN_004053a0(&DAT_007793b1);
  FUN_0040d6d0();
  *(undefined4 *)(in_ECX + 0xa0) = 0;
  *(undefined4 *)(in_ECX + 0xd0) = 0;
  in_ECX[0xbc] = 0;
  *(undefined4 *)(in_ECX + 0xf4) = 0;
  *(undefined4 *)(in_ECX + 0xf0) = 0;
  *(undefined4 *)(in_ECX + 0xec) = 0;
  *(undefined4 *)(in_ECX + 0x130) = 0;
  in_ECX[0xe0] = 0;
  *(undefined4 *)(in_ECX + 0xe4) = 0xffffffff;
  in_ECX[0xe9] = 0;
  *(undefined4 *)(in_ECX + 0x11c) = 0;
  *(undefined4 *)(in_ECX + 0x120) = 0;
  *(undefined4 *)(in_ECX + 0xfc) = 0;
  *(undefined4 *)(in_ECX + 0xf8) = 0;
  *(undefined4 *)(in_ECX + 0x104) = 0;
  *(undefined4 *)(in_ECX + 0x100) = 0;
  *(undefined4 *)(in_ECX + 0x10c) = 0;
  *(undefined4 *)(in_ECX + 0x108) = 0;
  in_ECX[0xe8] = 0;
  *(undefined4 *)(in_ECX + 0x110) = 3;
  in_ECX[0x80] = 0;
  in_ECX[0x55] = 0;
  in_ECX[0x9c] = 0;
  FUN_004053a0(&DAT_007793b1);
  *(undefined4 *)(in_ECX + 0x2c) = 0;
  in_ECX[0xea] = 0;
  return;
}


/* ==== 0040b000  FUN_0040b000  size=266 ==== */

void FUN_0040b000(void)

{
  CDocObjectServer *in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0xffffffff;
  FUN_004053a0(&DAT_007793b1);
  *(undefined4 *)(in_ECX + 0x28) = 0;
  *(undefined4 *)(in_ECX + 0x40) = 0;
  *(undefined4 *)(in_ECX + 0x34) = 0;
  *(undefined4 *)(in_ECX + 0x38) = 0;
  *(undefined4 *)(in_ECX + 0x44) = 0;
  *(undefined4 *)(in_ECX + 0x48) = 0;
  *(undefined4 *)(in_ECX + 0x54) = 0x78;
  *(undefined4 *)(in_ECX + 0x58) = 0;
  *(undefined4 *)(in_ECX + 0x5c) = 0;
  *(undefined4 *)(in_ECX + 0x6c) = 0;
  in_ECX[0x70] = (CDocObjectServer)0x0;
  *(undefined4 *)(in_ECX + 0x2c) = 6;
  *(undefined4 *)(in_ECX + 0x30) = 0xc;
  in_ECX[0x3c] = (CDocObjectServer)0x0;
  *(undefined4 *)(in_ECX + 0x4c) = 1;
  *(undefined4 *)(in_ECX + 0x50) = 2;
  *in_ECX = (CDocObjectServer)0x1;
  FUN_004053a0(&DAT_007793b1);
  FUN_0040d770();
  *(undefined4 *)(in_ECX + 0x8c) = 0xff;
  CDocObjectServer::ReleaseDocSite(in_ECX);
  return;
}


/* ==== 0040b110  FUN_0040b110  size=120 ==== */

undefined4 FUN_0040b110(void)

{
  undefined4 in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070c616;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0040d8b0(DAT_007c5940 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  FUN_0040d650();
  local_8._0_1_ = 1;
  FUN_0040d8b0();
  local_8 = CONCAT31(local_8._1_3_,2);
  FUN_0040b000();
  ExceptionList = local_10;
  return in_ECX;
}


/* ==== 0040b190  ReleaseDocSite  size=50 ==== */

/* Library Function - Single Match
    public: void __thiscall CDocObjectServer::ReleaseDocSite(void)
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2008 Debug, Visual Studio 2010 Debug */

void __thiscall CDocObjectServer::ReleaseDocSite(CDocObjectServer *this)

{
  if (*(int *)(this + 0x40) != 0) {
    (**(code **)(**(int **)(this + 0x40) + 8))(*(undefined4 *)(this + 0x40));
    *(undefined4 *)(this + 0x40) = 0;
  }
  return;
}


/* ==== 0040c940  FUN_0040c940  size=45 ==== */

void FUN_0040c940(void)

{
  int in_ECX;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(in_ECX + 0x74));
  FUN_0040d7d0();
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(in_ECX + 0x10));
  return;
}


/* ==== 0040c970  FUN_0040c970  size=1290 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_0040c970(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  int iStack_148;
  undefined4 *puStack_144;
  undefined4 *puStack_140;
  undefined4 *puStack_13c;
  uint uStack_138;
  undefined1 *local_12c;
  undefined4 local_128;
  undefined1 *local_124;
  undefined4 local_120;
  undefined1 *local_11c;
  undefined4 local_118;
  undefined1 *local_114;
  undefined4 local_110;
  undefined1 *local_10c;
  undefined4 local_108;
  undefined4 local_104;
  int local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  int local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  int local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  int local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  undefined1 local_a8 [148];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070c82c;
  local_10 = ExceptionList;
  uStack_138 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_c0 = 0x22;
  puStack_13c = &local_c0;
  puStack_140 = (undefined4 *)0x40c9b6;
  local_14 = uStack_138;
  FUN_0040d330();
  puStack_13c = (undefined4 *)0x40c9bd;
  cVar1 = game_frame_should_continue();
  if (cVar1 == '\0') {
    local_c4 = 0x22;
    local_c8 = 0x35c;
    puStack_13c = (undefined4 *)0x0;
    puStack_140 = &local_c4;
    puStack_144 = (undefined4 *)0x40c9ef;
    FUN_0040d330();
    puStack_140 = (undefined4 *)0x40c9f6;
    puStack_13c = (undefined4 *)FUN_00405270();
    puStack_140 = &local_c8;
    puStack_144 = (undefined4 *)0x40ca08;
    puStack_140 = (undefined4 *)game_timing_or_delay_helper();
    puStack_144 = (undefined4 *)0x40ca0e;
    local_ac = FUN_006cdfa0();
    if ((local_ac != 0) && (*(char *)(local_ac + 0x31c) == '\0')) {
      puStack_13c = (undefined4 *)0x40ca4a;
      cVar1 = game_frame_should_continue();
      if (cVar1 == '\0') {
        puStack_13c = (undefined4 *)0x40ca66;
        FUN_0040d6d0();
        puStack_13c = (undefined4 *)0xf;
        puStack_140 = (undefined4 *)param_1;
        puStack_144 = (undefined4 *)0x40ca72;
        iVar2 = FUN_006c79e0();
        if (iVar2 == 0) {
          local_cc = 0x22;
          puStack_13c = &local_cc;
          puStack_140 = (undefined4 *)0x40ca94;
          FUN_0040d330();
          puStack_13c = (undefined4 *)0x40ca9b;
          FUN_0040d540();
          local_d0 = 0x35c;
          puStack_13c = &local_d0;
          puStack_140 = (undefined4 *)0x40cab7;
          puStack_13c = (undefined4 *)game_timing_or_delay_helper();
          puStack_140 = (undefined4 *)0x40cabd;
          ui_close_matching_widgets();
        }
        else {
          local_d4 = 0x35c;
          local_10c = (undefined1 *)&uStack_150;
          puStack_154 = (undefined4 *)&DAT_0073fd30;
          local_110 = FUN_004054a0();
          local_8 = 0;
          puStack_154 = &local_d4;
          puStack_154 = (undefined4 *)game_timing_or_delay_helper();
          local_8 = 0xffffffff;
          local_d8 = ui_find_widget_by_key();
          local_b4 = *(int *)(local_d8 + 0x9d0);
          puStack_13c = *(undefined4 **)(local_b4 + 0xa10);
          puStack_140 = (undefined4 *)(local_b4 + 0x98c);
          puStack_144 = (undefined4 *)0x40cb56;
          FUN_00642750();
          puStack_144 = (undefined4 *)0x40cb5d;
          FUN_0040d5c0();
          puStack_140 = (undefined4 *)0x40cb64;
          piVar3 = (int *)game_get_flag_object_01a70();
          if (*(int *)(local_b4 + 0x10) == *piVar3) {
            puStack_13c = (undefined4 *)0x1;
            puStack_140 = (undefined4 *)0xf;
            puStack_144 = (undefined4 *)0x40cbcc;
            FUN_0040a9f0();
            local_8 = 1;
            puStack_13c = (undefined4 *)0x0;
            puStack_140 = (undefined4 *)local_a8;
            puStack_144 = (undefined4 *)0x40cbe1;
            puStack_144 = (undefined4 *)game_get_player_or_session_blob();
            iStack_148 = 1;
            uStack_14c = 0x40cbe9;
            FUN_0067f8c0();
            puStack_13c = (undefined4 *)0x40cbf1;
            puStack_13c = (undefined4 *)FUN_00641460();
            puStack_140 = (undefined4 *)0x64;
            puStack_144 = (undefined4 *)0x0;
            iStack_148 = 0x40cc01;
            FUN_0040d2a0();
            puStack_140 = (undefined4 *)0x40cc08;
            local_bc = FUN_0040e400();
            local_e4 = 0x35c;
            local_114 = (undefined1 *)&uStack_150;
            puStack_154 = (undefined4 *)&DAT_0073fd40;
            local_118 = FUN_004054a0();
            local_8._0_1_ = 2;
            puStack_154 = &local_e4;
            puStack_154 = (undefined4 *)game_timing_or_delay_helper();
            local_8._0_1_ = 1;
            local_e8 = ui_find_widget_by_key();
            local_b0 = *(int *)(*(int *)(local_e8 + 0x9d0) + 0x9d0);
            *(undefined4 *)(local_b0 + 0x10) = local_bc;
            puStack_13c = (undefined4 *)0x40cc87;
            puStack_13c = (undefined4 *)game_get_player_or_session_blob();
            puStack_140 = (undefined4 *)local_b0;
            puStack_144 = &local_108;
            iStack_148 = 0x40cc9b;
            FUN_006c9280();
            puStack_13c = (undefined4 *)local_104;
            puStack_140 = (undefined4 *)local_108;
            puStack_144 = (undefined4 *)param_1;
            iStack_148 = local_b0;
            uStack_14c = 0x3f3;
            uStack_150 = 0x40ccc1;
            net_packet_send_helper_64af0();
            local_ec = 0x35c;
            puStack_13c = (undefined4 *)local_b0;
            local_11c = (undefined1 *)&puStack_154;
            local_120 = FUN_004054a0(&DAT_0073fd50);
            local_8._0_1_ = 3;
            uVar4 = game_timing_or_delay_helper(&local_ec);
            local_8._0_1_ = 1;
            local_100 = ui_find_widget_by_key(uVar4);
            puStack_140 = *(undefined4 **)(local_100 + 0x9d0);
            puStack_144 = (undefined4 *)0x40cd2a;
            puStack_144 = (undefined4 *)game_get_player_or_session_blob();
            iStack_148 = 0x40cd30;
            FUN_006cdee0();
            local_f0 = 0x35c;
            local_124 = (undefined1 *)&uStack_150;
            puStack_154 = (undefined4 *)&DAT_0073fd60;
            local_128 = FUN_004054a0();
            local_8._0_1_ = 4;
            puStack_154 = &local_f0;
            puStack_154 = (undefined4 *)game_timing_or_delay_helper();
            local_8 = CONCAT31(local_8._1_3_,1);
            local_f4 = ui_find_widget_by_key();
            local_b8 = *(int *)(local_f4 + 0x9d0);
            puStack_13c = *(undefined4 **)(local_b8 + 0xa10);
            puStack_140 = (undefined4 *)(local_b8 + 0x98c);
            puStack_144 = (undefined4 *)0x40cdb1;
            FUN_00642750();
            puStack_144 = (undefined4 *)0x40cdb8;
            FUN_0040d5c0();
            puStack_140 = (undefined4 *)0x40cdbf;
            puVar5 = (undefined4 *)game_get_flag_object_01a70();
            *(undefined4 *)(local_b8 + 0x10) = *puVar5;
            local_f8 = 0x22;
            puStack_13c = (undefined4 *)0x0;
            puStack_140 = &local_f8;
            puStack_144 = (undefined4 *)0x40cde7;
            FUN_0040d330();
            puStack_140 = (undefined4 *)0x40cdee;
            iVar2 = FUN_00405270();
            *(undefined4 *)(iVar2 + 0x10) = local_bc;
            local_fc = 0x22;
            puStack_13c = (undefined4 *)0x0;
            puStack_140 = &local_fc;
            puStack_144 = (undefined4 *)0x40ce14;
            FUN_0040d330();
            puStack_140 = (undefined4 *)0x40ce1b;
            puStack_13c = (undefined4 *)FUN_00405270();
            puStack_140 = (undefined4 *)local_ac;
            puStack_144 = (undefined4 *)0x40ce28;
            puStack_144 = (undefined4 *)game_get_player_or_session_blob();
            iStack_148 = 0x40ce2e;
            FUN_006cdee0();
            local_12c = (undefined1 *)&uStack_150;
            puStack_154 = (undefined4 *)&DAT_0073fd70;
            FUN_004054a0();
            puStack_154 = (undefined4 *)0x40ce4b;
            FUN_0049d780();
            local_8 = 0xffffffff;
            puStack_13c = (undefined4 *)0x40ce60;
            FUN_004039a0();
          }
          else {
            local_dc = 0x22;
            puStack_13c = &local_dc;
            puStack_140 = (undefined4 *)0x40cb8c;
            FUN_0040d330();
            puStack_13c = (undefined4 *)0x40cb93;
            FUN_0040d540();
            local_e0 = 0x35c;
            puStack_13c = &local_e0;
            puStack_140 = (undefined4 *)0x40cbaf;
            puStack_13c = (undefined4 *)game_timing_or_delay_helper();
            puStack_140 = (undefined4 *)0x40cbb5;
            ui_close_matching_widgets();
          }
        }
      }
    }
  }
  ExceptionList = local_10;
  return;
}


/* ==== 0040d2a0  FUN_0040d2a0  size=33 ==== */

undefined4 FUN_0040d2a0(undefined4 param_1,undefined4 param_2)

{
  undefined4 in_ECX;
  
  _Vector_iterator<>(param_1,param_2);
  return in_ECX;
}


/* ==== 0040d2d0  FUN_0040d2d0  size=54 ==== */

bool FUN_0040d2d0(undefined4 param_1)

{
  char cVar1;
  
  cVar1 = FUN_0040d970(param_1);
  return cVar1 == '\0';
}


/* ==== 0040d310  FUN_0040d310  size=26 ==== */

void FUN_0040d310(undefined4 param_1)

{
  FUN_0040e490(param_1);
  return;
}


/* ==== 0040d330  FUN_0040d330  size=36 ==== */

int FUN_0040d330(undefined4 param_1)

{
  int *piVar1;
  undefined1 local_10 [12];
  
  piVar1 = (int *)FUN_0040e4e0(local_10,param_1);
  return *piVar1 + 0x14;
}


/* ==== 0040d360  FUN_0040d360  size=25 ==== */

void FUN_0040d360(undefined4 param_1)

{
  FUN_0040e330(param_1);
  return;
}


/* ==== 0040d380  FUN_0040d380  size=31 ==== */

undefined4 FUN_0040d380(undefined4 param_1)

{
  FUN_0040d9a0(param_1);
  return param_1;
}


/* ==== 0040d3a0  FUN_0040d3a0  size=17 ==== */

undefined4 FUN_0040d3a0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0xc);
}


/* ==== 0040d3c0  FUN_0040d3c0  size=195 ==== */

void FUN_0040d3c0(uint param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 local_50 [8];
  undefined1 local_48 [8];
  undefined1 local_40 [8];
  undefined1 local_38 [8];
  undefined1 local_30 [8];
  undefined1 local_28 [8];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  uVar1 = FUN_0040d3a0();
  if (uVar1 < param_1) {
    puVar2 = (undefined4 *)FUN_0040db40(local_28);
    local_10 = *puVar2;
    local_c = puVar2[1];
    puVar4 = &stack0x00000008;
    iVar3 = FUN_0040d3a0(puVar4);
    FUN_0040d9d0(local_30,local_10,local_c,param_1 - iVar3,puVar4);
  }
  else {
    uVar1 = FUN_0040d3a0();
    if (param_1 < uVar1) {
      puVar2 = (undefined4 *)FUN_0040db40(local_38);
      local_18 = *puVar2;
      local_14 = puVar2[1];
      puVar4 = local_40;
      FID_conflict_begin(local_48);
      puVar2 = (undefined4 *)FUN_0040d910(puVar4,param_1);
      local_20 = *puVar2;
      local_1c = puVar2[1];
      FUN_0040da40(local_50,local_20,local_1c,local_18,local_14);
    }
  }
  return;
}


/* ==== 0040d490  FUN_0040d490  size=26 ==== */

void FUN_0040d490(undefined4 param_1)

{
  FUN_0040e5d0(param_1);
  return;
}


/* ==== 0040d4b0  FUN_0040d4b0  size=33 ==== */

int FUN_0040d4b0(int param_1)

{
  int *in_ECX;
  
  return param_1 * 0x134 + *in_ECX;
}


/* ==== 0040d4e0  FUN_0040d4e0  size=32 ==== */

void FUN_0040d4e0(undefined4 param_1)

{
  undefined1 local_5;
  
  FUN_0040e620(param_1,&local_5);
  return;
}


/* ==== 0040d540  FUN_0040d540  size=95 ==== */

void FUN_0040d540(void)

{
  undefined4 uVar1;
  int *in_ECX;
  int *piVar2;
  
  piVar2 = in_ECX + 1;
  if (*in_ECX != *piVar2) {
    FUN_00401710();
    uVar1 = FUN_00401c60();
    FUN_00406380(*in_ECX,*piVar2,uVar1);
    *piVar2 = *in_ECX;
  }
  return;
}


/* ==== 0040d5a0  FUN_0040d5a0  size=32 ==== */

void FUN_0040d5a0(undefined4 param_1)

{
  undefined1 local_5;
  
  FUN_0040e720(param_1,&local_5);
  return;
}


/* ==== 0040d5c0  FUN_0040d5c0  size=36 ==== */

int FUN_0040d5c0(undefined4 param_1)

{
  int *piVar1;
  undefined1 local_10 [12];
  
  piVar1 = (int *)FUN_0040e820(local_10,param_1);
  return *piVar1 + 0x14;
}


/* ==== 0040d5f0  FUN_0040d5f0  size=95 ==== */

void FUN_0040d5f0(void)

{
  undefined4 uVar1;
  int *in_ECX;
  int *piVar2;
  
  piVar2 = in_ECX + 1;
  if (*in_ECX != *piVar2) {
    FUN_00401710();
    uVar1 = FUN_00401c60();
    FUN_004025f0(*in_ECX,*piVar2,uVar1);
    *piVar2 = *in_ECX;
  }
  return;
}


/* ==== 0040d650  FUN_0040d650  size=44 ==== */

undefined4 FUN_0040d650(void)

{
  undefined4 in_ECX;
  undefined1 local_5;
  
  _Compressed_pair<><>(local_5);
  FUN_00401720(&DAT_0073f53f);
  return in_ECX;
}


/* ==== 0040d680  FUN_0040d680  size=30 ==== */

int FUN_0040d680(int param_1)

{
  int *in_ECX;
  
  return param_1 * 0x60 + *in_ECX;
}


/* ==== 0040d6a0  FUN_0040d6a0  size=38 ==== */

int FUN_0040d6a0(void)

{
  int *in_ECX;
  
  return (in_ECX[1] - *in_ECX) / 0x60;
}


/* ==== 0040d6d0  FUN_0040d6d0  size=95 ==== */

void FUN_0040d6d0(void)

{
  undefined4 uVar1;
  int *in_ECX;
  int *piVar2;
  
  piVar2 = in_ECX + 1;
  if (*in_ECX != *piVar2) {
    FUN_00401710();
    uVar1 = FUN_00401c60();
    FUN_00406040(*in_ECX,*piVar2,uVar1);
    *piVar2 = *in_ECX;
  }
  return;
}


/* ==== 0040d730  FUN_0040d730  size=32 ==== */

void FUN_0040d730(undefined4 param_1)

{
  undefined1 local_5;
  
  FUN_0040e910(param_1,&local_5);
  return;
}


/* ==== 0040d750  FUN_0040d750  size=29 ==== */

undefined4 FUN_0040d750(void)

{
  undefined4 in_ECX;
  undefined1 local_5;
  
  FUN_0040db80(&local_5);
  return in_ECX;
}


/* ==== 0040d770  FUN_0040d770  size=95 ==== */

void FUN_0040d770(void)

{
  undefined4 uVar1;
  int *in_ECX;
  int *piVar2;
  
  piVar2 = in_ECX + 1;
  if (*in_ECX != *piVar2) {
    FUN_00401710();
    uVar1 = FUN_00401c60();
    FUN_0040ea10(*in_ECX,*piVar2,uVar1);
    *piVar2 = *in_ECX;
  }
  return;
}


/* ==== 0040d7d0  FUN_0040d7d0  size=20 ==== */

void FUN_0040d7d0(void)

{
  FUN_0040dbc0();
  return;
}


/* ==== 0040d810  FUN_0040d810  size=37 ==== */

void FUN_0040d810(_String_val<std::_Simple_types<char>_> *param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  pcVar1 = std::_String_val<std::_Simple_types<char>_>::_Myptr(param_1);
  FUN_0040dc60(pcVar1,uVar2);
  return;
}


/* ==== 0040d840  FUN_0040d840  size=102 ==== */

int FUN_0040d840(_String_val<std::_Simple_types<char>_> *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int in_ECX;
  
  iVar1 = _Unfancy<>(param_1);
  if (in_ECX != iVar1) {
    uVar2 = FUN_00401c60();
    uVar3 = FUN_00401c60(uVar2);
    FUN_004025f0(uVar2,uVar3);
    uVar2 = *(undefined4 *)(param_1 + 0x10);
    pcVar4 = std::_String_val<std::_Simple_types<char>_>::_Myptr(param_1);
    FUN_004058b0(pcVar4,uVar2);
  }
  return in_ECX;
}


/* ==== 0040d8b0  FUN_0040d8b0  size=81 ==== */

undefined4 FUN_0040d8b0(void)

{
  uint uVar1;
  undefined4 in_ECX;
  undefined1 local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0070c280;
  local_10 = ExceptionList;
  uVar1 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  _Compressed_pair<><>(local_11);
  FUN_0040dd60(uVar1);
  ExceptionList = local_10;
  return in_ECX;
}


/* ==== 0040d910  FUN_0040d910  size=44 ==== */

undefined4 * FUN_0040d910(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  
  uVar1 = in_ECX[1];
  *param_1 = *in_ECX;
  param_1[1] = uVar1;
  FUN_0040ddf0(param_2);
  return param_1;
}


/* ==== 0040d970  FUN_0040d970  size=47 ==== */

bool FUN_0040d970(int *param_1)

{
  int *in_ECX;
  
  return *in_ECX == *param_1;
}


/* ==== 0040d9a0  FUN_0040d9a0  size=43 ==== */

undefined4 FUN_0040d9a0(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  
  uVar1 = _Unfancy<>();
  FUN_0040ddc0(*in_ECX,uVar1);
  return param_1;
}


/* ==== 0040d9d0  FUN_0040d9d0  size=99 ==== */

undefined4 *
FUN_0040d9d0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined1 local_1c [8];
  undefined1 local_14 [8];
  undefined4 local_c;
  
  uVar1 = FUN_0040def0(param_2,param_3,param_4);
  puVar2 = param_1;
  local_c = uVar1;
  FID_conflict_begin(local_14);
  FUN_0040d910(puVar2,uVar1);
  FUN_0040ea80(local_1c,*param_1,param_1[1],param_4,param_5);
  return param_1;
}


/* ==== 0040da40  FUN_0040da40  size=250 ==== */

undefined4
FUN_0040da40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined1 local_50 [8];
  undefined1 local_48 [8];
  undefined1 local_40 [8];
  undefined1 local_38 [8];
  undefined1 local_30 [8];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0070c8d0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0040e000(&local_20,param_2,param_3);
  FUN_0040e000(&local_28,param_4,param_5);
  uVar2 = FID_conflict_begin(local_38);
  local_18 = FUN_0040de50(uVar2);
  cVar1 = FUN_0040de10(&local_28);
  if (cVar1 != '\0') {
    puVar3 = (undefined4 *)FUN_0040db40(local_40);
    FUN_0040eaf0(local_30,local_28,local_24,*puVar3,puVar3[1],local_20,local_1c);
    uVar2 = FID_conflict_begin(local_48);
    uVar2 = FUN_0040de50(uVar2);
    FUN_00401da0(uVar2);
  }
  uVar2 = param_1;
  uVar4 = local_18;
  FID_conflict_begin(local_50);
  FUN_0040d910(uVar2,uVar4);
  ExceptionList = local_10;
  return param_1;
}


/* ==== 0040db40  FUN_0040db40  size=49 ==== */

undefined4 FUN_0040db40(undefined4 param_1)

{
  int in_ECX;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 local_10 [12];
  
  uVar2 = *(undefined4 *)(in_ECX + 0xc);
  uVar1 = param_1;
  FID_conflict_begin(local_10);
  FUN_0040d910(uVar1,uVar2);
  return param_1;
}


/* ==== 0040db80  FUN_0040db80  size=49 ==== */

undefined4 FUN_0040db80(undefined4 param_1)

{
  undefined4 in_ECX;
  undefined1 local_6;
  undefined1 local_5;
  
  FUN_0040ebd0(local_6,param_1,&local_5);
  FUN_0040e050();
  return in_ECX;
}


/* ==== 0040dbc0  FUN_0040dbc0  size=155 ==== */

void FUN_0040dbc0(void)

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
    FUN_0040ea10(*in_ECX,*piVar3,uVar1);
    FUN_00405bf0(*in_ECX,(*piVar2 - *in_ECX) / 0x18);
    *in_ECX = 0;
    *piVar3 = 0;
    *piVar2 = 0;
  }
  return;
}


/* ==== 0040dc60  FUN_0040dc60  size=145 ==== */

_String_val<std::_Simple_types<char>_> * FUN_0040dc60(undefined4 param_1,uint param_2)

{
  int iVar1;
  char *pcVar2;
  _String_val<std::_Simple_types<char>_> *in_ECX;
  undefined1 local_5;
  
  iVar1 = *(int *)(in_ECX + 0x10);
  if ((uint)(*(int *)(in_ECX + 0x14) - iVar1) < param_2) {
    in_ECX = (_String_val<std::_Simple_types<char>_> *)FUN_0040ebf0(param_2,0,param_1,param_2);
  }
  else {
    *(uint *)(in_ECX + 0x10) = iVar1 + param_2;
    pcVar2 = std::_String_val<std::_Simple_types<char>_>::_Myptr(in_ECX);
    _Unchecked_idl0<>(pcVar2 + iVar1,param_1,param_2);
    local_5 = 0;
    FUN_00405cc0(pcVar2 + iVar1 + param_2,&local_5);
  }
  return in_ECX;
}


/* ==== 0040dd00  FID_conflict:operator()  size=84 ==== */

/* Library Function - Multiple Matches With Different Base Names
    public: void __thiscall `public: class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > & __thiscall std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> >::append(char const * const,unsigned
   int)'::`2'::<lambda_1>::operator()(char * const,char const * const,unsigned int,char const *
   const,unsigned int)const 
    public: void __thiscall <lambda_ab246b20b9526e2ef7792587e4298a77>::operator()(char * const,char
   const * const,unsigned int,char const * const,unsigned int)const 
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void FID_conflict_operator__
               (int param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5)

{
  undefined1 local_5;
  
  _Unchecked_idl0<>(param_1,param_2,param_3);
  _Unchecked_idl0<>(param_1 + param_3,param_4,param_5);
  local_5 = 0;
  FUN_00405cc0(param_3 + param_5 + param_1,&local_5);
  return;
}


/* ==== 0040dd60  FUN_0040dd60  size=89 ==== */

void FUN_0040dd60(void)

{
  int in_ECX;
  undefined1 local_5;
  
  FUN_00401720(&DAT_0073f53f);
  *(undefined4 *)(in_ECX + 0x10) = 0;
  *(undefined4 *)(in_ECX + 0x14) = 0xf;
  FUN_00401710();
  local_5 = 0;
  FUN_00405cc0(in_ECX,&local_5);
  return;
}


/* ==== 0040ddc0  FUN_0040ddc0  size=33 ==== */

undefined4 FUN_0040ddc0(undefined4 param_1,undefined4 param_2)

{
  undefined4 in_ECX;
  
  _Vector_iterator<>(param_1,param_2);
  return in_ECX;
}


/* ==== 0040ddf0  FUN_0040ddf0  size=28 ==== */

undefined4 FUN_0040ddf0(undefined4 param_1)

{
  undefined4 in_ECX;
  
  FUN_0040e0f0(param_1);
  return in_ECX;
}


/* ==== 0040de10  FUN_0040de10  size=54 ==== */

bool FUN_0040de10(undefined4 param_1)

{
  char cVar1;
  
  cVar1 = FUN_0040e0a0(param_1);
  return cVar1 == '\0';
}


/* ==== 0040de50  FUN_0040de50  size=53 ==== */

int FUN_0040de50(int *param_1)

{
  int *in_ECX;
  
  FUN_00401720(param_1);
  return ((*in_ECX - *param_1 >> 2) * 0x20 + in_ECX[1]) - param_1[1];
}


/* ==== 0040dec0  FUN_0040dec0  size=33 ==== */

void FUN_0040dec0(undefined4 param_1,int param_2)

{
  _Deallocate<>(param_1,param_2 * 0x90);
  return;
}


/* ==== 0040def0  FUN_0040def0  size=258 ==== */

undefined4 FUN_0040def0(undefined4 param_1,undefined4 param_2,uint param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 local_40 [8];
  undefined1 local_38 [8];
  undefined1 local_30 [8];
  undefined1 local_28 [8];
  undefined1 local_20 [8];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  uVar2 = FID_conflict_begin(local_20);
  local_c = FUN_0040de50(uVar2);
  if (param_3 != 0) {
    iVar3 = FUN_00402100();
    iVar4 = FUN_0040d3a0();
    if ((uint)(iVar3 - iVar4) < param_3) {
      FUN_004020f0();
    }
    local_10 = 0;
    puVar5 = &local_10;
    iVar3 = FUN_0040d3a0(puVar5);
    uVar2 = FUN_00402160(iVar3 + param_3);
    game_loop_helper_0e1f0(uVar2,puVar5);
    cVar1 = FUN_0040e1c0();
    if (cVar1 == '\0') {
      FUN_0040db40(&local_18);
      *(uint *)(local_8 + 0xc) = *(int *)(local_8 + 0xc) + param_3;
      puVar5 = (undefined4 *)FUN_0040db40(local_28);
      uVar2 = puVar5[1];
      uVar8 = *puVar5;
      puVar6 = local_30;
      uVar7 = local_c;
      FID_conflict_begin(local_38);
      puVar5 = (undefined4 *)FUN_0040d910(puVar6,uVar7);
      FUN_0040ed10(local_40,*puVar5,puVar5[1],local_18,local_14,uVar8,uVar2);
    }
    else {
      *(uint *)(local_8 + 0xc) = *(int *)(local_8 + 0xc) + param_3;
    }
  }
  return local_c;
}


/* ==== 0040e000  FUN_0040e000  size=71 ==== */

undefined4 FUN_0040e000(undefined4 param_1)

{
  undefined4 uVar1;
  undefined1 local_10 [8];
  int local_8;
  
  FID_conflict_begin(param_1);
  if (*(int *)(local_8 + 0xc) != 0) {
    uVar1 = FID_conflict_begin(local_10);
    uVar1 = FUN_0040de50(uVar1);
    FUN_0040ddf0(uVar1);
  }
  return param_1;
}


/* ==== 0040e050  FUN_0040e050  size=78 ==== */

void FUN_0040e050(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)FUN_004057d0();
  FUN_00401740(&DAT_0073f53f,puVar1);
  uVar2 = FUN_00401c60();
  uVar2 = FUN_004064f0(uVar2);
  *puVar1 = uVar2;
  FUN_00401710();
  return;
}


/* ==== 0040e0a0  FUN_0040e0a0  size=73 ==== */

undefined1 FUN_0040e0a0(int *param_1)

{
  undefined1 uVar1;
  int *in_ECX;
  
  FUN_00401720(param_1);
  if ((*in_ECX == *param_1) && (in_ECX[1] == param_1[1])) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


/* ==== 0040e0f0  FUN_0040e0f0  size=162 ==== */

int * FUN_0040e0f0(int param_1)

{
  int *in_ECX;
  
  if ((param_1 < 0) && ((uint)in_ECX[1] < (uint)-param_1)) {
    in_ECX[1] = in_ECX[1] + param_1;
    *in_ECX = *in_ECX - ((-in_ECX[1] - 1U >> 5) * 4 + 4);
    in_ECX[1] = (uint)in_ECX[1] % 0x20;
  }
  else {
    in_ECX[1] = in_ECX[1] + param_1;
    *in_ECX = *in_ECX + ((uint)in_ECX[1] >> 5) * 4;
    in_ECX[1] = (uint)in_ECX[1] % 0x20;
  }
  return in_ECX;
}


/* ==== 0040e1a0  FUN_0040e1a0  size=30 ==== */

void FUN_0040e1a0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  
  *in_ECX = param_1;
  in_ECX[1] = param_2;
  return;
}


/* ==== 0040e1c0  FUN_0040e1c0  size=42 ==== */

bool FUN_0040e1c0(void)

{
  int in_ECX;
  
  return *(int *)(in_ECX + 0xc) == 0;
}


/* ==== 0040e210  FUN_0040e210  size=164 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_0040e210(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *local_24;
  undefined1 local_20 [24];
  uint local_8;
  
  local_8 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  uVar1 = FUN_0040e2c0(local_20,0);
  if (param_2 < 0) {
    iVar2 = FUN_0040f130(uVar1,-param_2);
    local_24 = (undefined1 *)(iVar2 + -1);
    *local_24 = 0x2d;
  }
  else {
    local_24 = (undefined1 *)FUN_0040f130(uVar1,param_2);
  }
  uVar3 = allocator<>();
  FUN_0040f180(local_24,uVar1,uVar3);
  return param_1;
}


/* ==== 0040e2c0  FUN_0040e2c0  size=11 ==== */

int FUN_0040e2c0(int param_1)

{
  return param_1 + 0x15;
}


/* ==== 0040e2d0  destroy<>  size=17 ==== */

/* Library Function - Multiple Matches With Same Base Name
    public: static void __cdecl std::allocator_traits<class std::allocator<char> >::destroy<char
   *>(class std::allocator<char> &,char * *)
    public: static void __cdecl std::allocator_traits<class std::allocator<unsigned short>
   >::destroy<unsigned short *>(class std::allocator<unsigned short> &,unsigned short * *)
    public: static void __cdecl std::allocator_traits<class std::allocator<wchar_t>
   >::destroy<wchar_t *>(class std::allocator<wchar_t> &,wchar_t * *)
    public: static void __cdecl std::allocator_traits<class std::allocator<struct
   std::_Container_proxy> >::destroy<struct std::_Container_proxy>(class std::allocator<struct
   std::_Container_proxy> &,struct std::_Container_proxy *)
     14 names - too many to list
   
   Libraries: Visual Studio 2012 Debug, Visual Studio 2012 Release, Visual Studio 2015 Debug, Visual
   Studio 2015 Release */

void destroy<>(undefined4 param_1,undefined4 param_2)

{
  FUN_0040f0a0(param_2);
  return;
}


/* ==== 0040e2f0  FUN_0040e2f0  size=57 ==== */

undefined4 FUN_0040e2f0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0040f0e0(param_2);
  uVar1 = FUN_0040f240(param_2,uVar1);
  FUN_0040f070(param_1,uVar1);
  return param_1;
}


/* ==== 0040e330  FUN_0040e330  size=150 ==== */

bool FUN_0040e330(undefined4 param_1)

{
  int iVar1;
  bool bVar2;
  undefined1 local_24 [8];
  uint local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0070c8f0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_1c = FUN_0040f0e0(param_1);
  iVar1 = FUN_0040f280(local_24,param_1,local_1c);
  local_18 = *(int *)(iVar1 + 4);
  bVar2 = local_18 != 0;
  if (bVar2) {
    FUN_0040ef70(local_18,local_1c & *(uint *)(local_14 + 0x18));
    FUN_0040f000(local_18);
  }
  ExceptionList = local_10;
  return bVar2;
}


/* ==== 0040e3d0  FUN_0040e3d0  size=48 ==== */

undefined4 FUN_0040e3d0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0040d810(param_3);
  FUN_00405450(uVar1);
  return param_1;
}


/* ==== 0040e400  FUN_0040e400  size=25 ==== */

void FUN_0040e400(undefined4 param_1)

{
  FUN_0040f350(param_1);
  return;
}


/* ==== 0040e420  FUN_0040e420  size=97 ==== */

void FUN_0040e420(int param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0070bdc0;
  local_10 = ExceptionList;
  uVar1 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  for (; param_1 != param_2; param_1 = param_1 + 0x90) {
    uVar2 = _Unfancy<>(param_1,uVar1);
    FUN_0040f380(param_3,uVar2);
  }
  ExceptionList = local_10;
  return;
}


/* ==== 0040e490  FUN_0040e490  size=75 ==== */

void FUN_0040e490(undefined4 param_1)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) == *(int *)(in_ECX + 8)) {
    FUN_0040f400(*(int *)(in_ECX + 4),param_1);
  }
  else {
    FUN_0040f390(param_1);
  }
  return;
}


/* ==== 0040e4e0  FUN_0040e4e0  size=231 ==== */

undefined4 FUN_0040e4e0(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c [3];
  undefined1 local_20 [4];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 *local_10;
  undefined1 local_7;
  undefined1 local_6;
  undefined1 local_5;
  
  FUN_00407180(&local_34,param_2);
  cVar1 = FUN_00407240(local_2c[0],param_2);
  if (cVar1 == '\0') {
    FUN_004068d0();
    local_10 = (undefined4 *)FUN_004057d0();
    uVar2 = _Unfancy<>(&local_7);
    uVar3 = FUN_004072d0(local_20,param_2,uVar2);
    puVar6 = &DAT_0073f54f;
    uVar5 = *local_10;
    uVar4 = FUN_00401c60(uVar5,&DAT_0073f54f,uVar3);
    local_14 = FUN_0040f5f0(uVar4,uVar5,puVar6,uVar3,uVar2);
    local_18 = FUN_00406690();
    FUN_0040eed0();
    local_1c = FUN_004066c0(local_34,local_30,local_18);
    local_6 = 1;
    FUN_004072a0(&local_1c,&local_6);
  }
  else {
    local_5 = 0;
    FUN_004072a0(local_2c,&local_5);
  }
  return param_1;
}


/* ==== 0040e5d0  FUN_0040e5d0  size=75 ==== */

void FUN_0040e5d0(undefined4 param_1)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) == *(int *)(in_ECX + 8)) {
    FUN_0040f730(*(int *)(in_ECX + 4),param_1);
  }
  else {
    FUN_0040f6d0(param_1);
  }
  return;
}


/* ==== 0040e620  FUN_0040e620  size=251 ==== */

void FUN_0040e620(uint param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *in_ECX;
  int *piVar5;
  
  uVar1 = FUN_00401c60();
  piVar5 = in_ECX + 1;
  uVar2 = (*piVar5 - *in_ECX) / 0x134;
  if (param_1 < uVar2) {
    iVar3 = param_1 * 0x134 + *in_ECX;
    FUN_004023d0(iVar3,*piVar5);
    FUN_00405eb0(iVar3,*piVar5,uVar1);
    *piVar5 = iVar3;
  }
  else if (uVar2 < param_1) {
    if ((uint)((in_ECX[2] - *in_ECX) / 0x134) < param_1) {
      FUN_0040f900(param_1,param_2);
    }
    else {
      iVar3 = *piVar5;
      iVar4 = FUN_0040fa40(iVar3,param_1 - uVar2,uVar1);
      *piVar5 = iVar4;
      FUN_004023d0(iVar3,iVar3);
    }
  }
  return;
}


/* ==== 0040e720  FUN_0040e720  size=251 ==== */

void FUN_0040e720(uint param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *in_ECX;
  int *piVar5;
  
  uVar1 = FUN_00401c60();
  piVar5 = in_ECX + 1;
  uVar2 = (*piVar5 - *in_ECX) / 0x94;
  if (param_1 < uVar2) {
    iVar3 = param_1 * 0x94 + *in_ECX;
    FUN_004023d0(iVar3,*piVar5);
    FUN_00406380(iVar3,*piVar5,uVar1);
    *piVar5 = iVar3;
  }
  else if (uVar2 < param_1) {
    if ((uint)((in_ECX[2] - *in_ECX) / 0x94) < param_1) {
      FUN_0040fad0(param_1,param_2);
    }
    else {
      iVar3 = *piVar5;
      iVar4 = FUN_0040fc10(iVar3,param_1 - uVar2,uVar1);
      *piVar5 = iVar4;
      FUN_004023d0(iVar3,iVar3);
    }
  }
  return;
}


/* ==== 0040e820  FUN_0040e820  size=231 ==== */

undefined4 FUN_0040e820(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c [3];
  undefined1 local_20 [4];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 *local_10;
  undefined1 local_7;
  undefined1 local_6;
  undefined1 local_5;
  
  FUN_00407180(&local_34,param_2);
  cVar1 = FUN_00407240(local_2c[0],param_2);
  if (cVar1 == '\0') {
    FUN_004068d0();
    local_10 = (undefined4 *)FUN_004057d0();
    uVar2 = _Unfancy<>(&local_7);
    uVar3 = FUN_004072d0(local_20,param_2,uVar2);
    puVar6 = &DAT_0073f54f;
    uVar5 = *local_10;
    uVar4 = FUN_00401c60(uVar5,&DAT_0073f54f,uVar3);
    local_14 = FUN_0040f5f0(uVar4,uVar5,puVar6,uVar3,uVar2);
    local_18 = FUN_00406690();
    FUN_004065f0();
    local_1c = FUN_004066c0(local_34,local_30,local_18);
    local_6 = 1;
    FUN_004072a0(&local_1c,&local_6);
  }
  else {
    local_5 = 0;
    FUN_004072a0(local_2c,&local_5);
  }
  return param_1;
}


/* ==== 0040e910  FUN_0040e910  size=248 ==== */

void FUN_0040e910(uint param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *in_ECX;
  int *piVar5;
  
  uVar1 = FUN_00401c60();
  piVar5 = in_ECX + 1;
  uVar2 = (*piVar5 - *in_ECX) / 0x60;
  if (param_1 < uVar2) {
    iVar3 = param_1 * 0x60 + *in_ECX;
    FUN_004023d0(iVar3,*piVar5);
    FUN_00406040(iVar3,*piVar5,uVar1);
    *piVar5 = iVar3;
  }
  else if (uVar2 < param_1) {
    if ((uint)((in_ECX[2] - *in_ECX) / 0x60) < param_1) {
      FUN_0040fca0(param_1,param_2);
    }
    else {
      iVar3 = *piVar5;
      iVar4 = FUN_0040fde0(iVar3,param_1 - uVar2,uVar1);
      *piVar5 = iVar4;
      FUN_004023d0(iVar3,iVar3);
    }
  }
  return;
}


/* ==== 0040ea10  FUN_0040ea10  size=95 ==== */

void FUN_0040ea10(int param_1,int param_2,void *param_3)

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
  for (; param_1 != param_2; param_1 = param_1 + 0x18) {
    _Unfancy<>(param_1,uVar1);
    __ExceptionPtrDestroy(param_3);
  }
  ExceptionList = local_10;
  return;
}


/* ==== 0040ea80  FUN_0040ea80  size=105 ==== */

undefined4 *
FUN_0040ea80(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,
            undefined1 *param_5)

{
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  local_8 = param_4;
  if (param_4 == 0) {
    *param_1 = param_2;
    param_1[1] = param_3;
  }
  else {
    FUN_0040d910(&local_10,param_4);
    FUN_0040fe80(param_2,param_3,local_10,local_c,*param_5);
    *param_1 = local_10;
    param_1[1] = local_c;
  }
  return param_1;
}


/* ==== 0040eaf0  FUN_0040eaf0  size=178 ==== */

undefined4 * FUN_0040eaf0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined1 local_24 [8];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_004025f0(&stack0x00000008,&stack0x00000010);
  puVar1 = (undefined4 *)_Unfancy<>(&stack0x00000008);
  local_14 = *puVar1;
  local_10 = puVar1[1];
  puVar1 = (undefined4 *)_Unfancy<>(&stack0x00000010);
  local_c = *puVar1;
  local_8 = puVar1[1];
  uVar2 = FUN_0040ebb0(&local_14,&local_c);
  puVar1 = (undefined4 *)_Unfancy<>(&stack0x00000018,uVar2);
  local_1c = *puVar1;
  local_18 = puVar1[1];
  uVar2 = FUN_0040ffd0(local_24,local_14,local_10,local_c,local_8,local_1c,local_18);
  FUN_00410000(&stack0x00000018,uVar2);
  *param_1 = in_stack_00000018;
  param_1[1] = in_stack_0000001c;
  return param_1;
}


/* ==== 0040ebb0  FUN_0040ebb0  size=17 ==== */

void FUN_0040ebb0(undefined4 param_1)

{
  FUN_0040de50(param_1);
  return;
}


/* ==== 0040ebd0  FUN_0040ebd0  size=32 ==== */

undefined4 FUN_0040ebd0(undefined4 param_1,undefined4 param_2,undefined1 *param_3)

{
  undefined4 in_ECX;
  
  _Compressed_pair<><>(*param_3);
  return in_ECX;
}


/* ==== 0040ebf0  FUN_0040ebf0  size=284 ==== */

basic_string<char,std::char_traits<char>,std::allocator<char>_> *
FUN_0040ebf0(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *in_ECX;
  int iVar6;
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
    FID_conflict_operator__(uVar4,local_8,local_10,param_3,param_4);
    FUN_004064c0(local_8,&local_14);
  }
  else {
    uVar1 = *(undefined4 *)local_8;
    iVar6 = local_10;
    uVar5 = _Unfancy<>(uVar1,local_10,param_3,param_4);
    FID_conflict_operator__(uVar4,uVar5,iVar6,param_3,param_4);
    FUN_00405c30(uVar3,uVar1,uVar2);
    *(undefined4 *)local_8 = local_14;
  }
  return local_c;
}


/* ==== 0040ed10  FUN_0040ed10  size=180 ==== */

undefined4 * FUN_0040ed10(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined1 local_24 [8];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_004025f0(&stack0x00000008,&stack0x00000010);
  puVar1 = (undefined4 *)_Unfancy<>(&stack0x00000008);
  local_14 = *puVar1;
  local_10 = puVar1[1];
  puVar1 = (undefined4 *)_Unfancy<>(&stack0x00000010);
  local_c = *puVar1;
  local_8 = puVar1[1];
  iVar2 = FUN_0040ebb0(&local_14,&local_c);
  puVar1 = (undefined4 *)_Unfancy<>(&stack0x00000018,-iVar2);
  local_1c = *puVar1;
  local_18 = puVar1[1];
  uVar3 = FUN_00410020(local_24,local_14,local_10,local_c,local_8,local_1c,local_18);
  FUN_00410000(&stack0x00000018,uVar3);
  *param_1 = in_stack_00000018;
  param_1[1] = in_stack_0000001c;
  return param_1;
}


/* ==== 0040edd0  FUN_0040edd0  size=244 ==== */

void FUN_0040edd0(uint param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *in_ECX;
  int *piVar4;
  uint uVar5;
  
  uVar2 = FUN_00401c60();
  piVar4 = in_ECX + 1;
  uVar5 = *piVar4 - *in_ECX >> 2;
  if (param_1 < uVar5) {
    iVar1 = *in_ECX + param_1 * 4;
    FUN_004023d0(iVar1,*piVar4);
    FUN_004025f0(iVar1,*piVar4,uVar2);
    *piVar4 = iVar1;
  }
  else if (uVar5 < param_1) {
    if ((uint)(in_ECX[2] - *in_ECX >> 2) < param_1) {
      FUN_00410080(param_1,param_2);
    }
    else {
      iVar1 = *piVar4;
      iVar3 = FUN_00402f90(iVar1,param_1 - uVar5,param_2,uVar2);
      *piVar4 = iVar3;
      FUN_004023d0(iVar1,iVar1);
    }
  }
  return;
}


/* ==== 0040eed0  FUN_0040eed0  size=155 ==== */

void FUN_0040eed0(void)

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
    FUN_004025f0(in_ECX[1],DAT_007c5940 ^ (uint)&stack0xfffffffc);
    FUN_004025f0(in_ECX[1] + 4);
    FUN_004025f0(in_ECX[1] + 8);
    _Unfancy<>(in_ECX[1] + 0x10);
    __ExceptionPtrDestroy((void *)*in_ECX);
  }
  FUN_00406da0();
  ExceptionList = local_10;
  return;
}


/* ==== 0040ef70  FUN_0040ef70  size=130 ==== */

void FUN_0040ef70(int *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int in_ECX;
  
  piVar1 = (int *)(*(int *)(in_ECX + 0xc) + param_2 * 8);
  piVar2 = (int *)(*(int *)(in_ECX + 0xc) + 4 + param_2 * 8);
  if ((int *)*piVar2 == param_1) {
    if ((int *)*piVar1 == param_1) {
      iVar3 = *(int *)(in_ECX + 4);
      *piVar1 = iVar3;
      *piVar2 = iVar3;
    }
    else {
      *piVar2 = param_1[1];
    }
  }
  else if ((int *)*piVar1 == param_1) {
    *piVar1 = *param_1;
  }
  return;
}


/* ==== 0040f000  FUN_0040f000  size=97 ==== */

int FUN_0040f000(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  
  iVar1 = *param_1;
  FUN_00401720(param_1);
  *(int *)(in_ECX + 4) = *(int *)(in_ECX + 4) + -1;
  *(int *)param_1[1] = iVar1;
  *(int *)(iVar1 + 4) = param_1[1];
  uVar2 = FUN_00401c60(param_1);
  FUN_004101d0(uVar2);
  return iVar1;
}


/* ==== 0040f070  FUN_0040f070  size=41 ==== */

undefined4 FUN_0040f070(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = _Unfancy<>();
  FUN_0040ddc0(param_2,uVar1);
  return param_1;
}


/* ==== 0040f0a0  FUN_0040f0a0  size=53 ==== */

void FUN_0040f0a0(_String_val<std::_Simple_types<char>_> *param_1)

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
  FUN_00410240(pcVar2,uVar3,pcVar1,uVar4);
  return;
}


/* ==== 0040f0e0  FUN_0040f0e0  size=32 ==== */

void FUN_0040f0e0(undefined4 param_1)

{
  allocator<>(param_1);
  FUN_00410660(param_1);
  return;
}


/* ==== 0040f130  FUN_0040f130  size=73 ==== */

char * FUN_0040f130(char *param_1,uint param_2)

{
  uint local_c;
  
  local_c = param_2;
  do {
    param_1 = param_1 + -1;
    *param_1 = (char)((ulonglong)local_c % 10) + '0';
    local_c = local_c / 10;
  } while (local_c != 0);
  return param_1;
}


/* ==== 0040f180  FUN_0040f180  size=185 ==== */

undefined4 FUN_0040f180(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 in_ECX;
  undefined1 local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070c91d;
  local_10 = ExceptionList;
  uVar1 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_004060f0(local_11,param_3);
  local_8 = 0;
  FUN_004025f0(&param_1,&param_2,uVar1);
  iVar2 = FUN_00402d20(&param_1);
  iVar3 = FUN_00402d20(&param_2);
  if (iVar2 == iVar3) {
    FUN_0040dd60();
  }
  else {
    uVar4 = _Unfancy<>(iVar3 - iVar2);
    FUN_00410ba0(iVar2,uVar4);
  }
  ExceptionList = local_10;
  return in_ECX;
}


/* ==== 0040f240  FUN_0040f240  size=58 ==== */

int FUN_0040f240(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 local_14 [8];
  int local_c;
  
  iVar1 = FUN_0040f280(local_14,param_1,param_2);
  iVar1 = *(int *)(iVar1 + 4);
  if (iVar1 == 0) {
    iVar1 = *(int *)(local_c + 4);
  }
  return iVar1;
}


/* ==== 0040f280  FUN_0040f280  size=203 ==== */

int * FUN_0040f280(int *param_1,undefined4 param_2,uint param_3)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  int in_ECX;
  int *local_8;
  
  param_3 = param_3 & *(uint *)(in_ECX + 0x18);
  local_8 = *(int **)(*(int *)(in_ECX + 0xc) + 4 + param_3 * 8);
  if (local_8 == *(int **)(in_ECX + 4)) {
    *param_1 = (int)*(int **)(in_ECX + 4);
    param_1[1] = 0;
  }
  else {
    piVar1 = *(int **)(*(int *)(in_ECX + 0xc) + param_3 * 8);
    while( true ) {
      uVar3 = _Unfancy<>(local_8 + 2);
      cVar2 = FUN_00410b50(param_2,uVar3);
      if (cVar2 == '\0') break;
      if (local_8 == piVar1) {
        *param_1 = (int)local_8;
        param_1[1] = 0;
        return param_1;
      }
      local_8 = (int *)local_8[1];
    }
    *param_1 = *local_8;
    param_1[1] = (int)local_8;
  }
  return param_1;
}


/* ==== 0040f350  FUN_0040f350  size=38 ==== */

void FUN_0040f350(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  FUN_00410ce0(param_1,*in_ECX,in_ECX[1]);
  return;
}


/* ==== 0040f380  FUN_0040f380  size=16 ==== */

void FUN_0040f380(void)

{
  FUN_00410290(0);
  return;
}


/* ==== 0040f390  FUN_0040f390  size=112 ==== */

int FUN_0040f390(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  int *piVar3;
  
  piVar3 = (int *)(in_ECX + 4);
  uVar2 = _Unfancy<>(*piVar3,param_1);
  uVar2 = FUN_00401c60(uVar2);
  FUN_00410d60(uVar2);
  FUN_004023d0(*piVar3,*piVar3);
  iVar1 = *piVar3;
  *piVar3 = *piVar3 + 0x90;
  return iVar1;
}


/* ==== 0040f400  FUN_0040f400  size=482 ==== */

int FUN_0040f400(int param_1,undefined4 param_2)

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
  puStack_c = &LAB_0070c94d;
  local_10 = ExceptionList;
  uVar1 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_18 = FUN_00401c60(uVar1);
  local_30 = local_1c;
  local_24 = local_1c;
  local_28 = local_1c + 1;
  local_20 = (param_1 - *local_1c) / 0x90;
  local_34 = (*local_28 - *local_1c) / 0x90;
  iVar2 = FUN_00410620();
  if (local_34 == iVar2) {
    FUN_00401c80();
  }
  local_40 = local_34 + 1;
  local_2c = FUN_004105c0(local_40);
  local_14 = FUN_00410d90(local_18,&local_2c);
  local_4c = local_14 + 0x90 + local_20 * 0x90;
  local_8 = 0;
  local_3c = &local_4c;
  uVar4 = local_18;
  local_48 = local_4c;
  local_38 = local_4c;
  uVar3 = _Unfancy<>(local_20 * 0x90 + local_14,param_2,uVar1,local_18,local_14,local_2c);
  FUN_00410d60(local_18,uVar3);
  *local_3c = local_20 * 0x90 + local_14;
  if (param_1 == *local_28) {
    FUN_00410db0(*local_24,*local_28,local_14,local_18);
  }
  else {
    FUN_00410db0(*local_24,param_1,local_14,local_18);
    *local_3c = local_14;
    FUN_00410db0(param_1,*local_28,local_14 + 0x90 + local_20 * 0x90,local_18);
  }
  uVar3 = 0;
  FUN_00410510(local_14,local_40,local_2c);
  local_44 = local_20 * 0x90 + local_14;
  local_8 = 0xffffffff;
  FUN_00410470(uVar1,uVar4,uVar3);
  ExceptionList = local_10;
  return local_44;
}


/* ==== 0040f5f0  FUN_0040f5f0  size=212 ==== */

undefined4 *
FUN_0040f5f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070c1cd;
  local_10 = ExceptionList;
  uVar1 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_00407b50(param_1);
  local_8 = 0;
  uVar2 = _Unfancy<>(in_ECX[1] + 0x10,param_3,param_4,param_5,uVar1);
  FUN_00410e60(*in_ECX,uVar2);
  FUN_004064c0(in_ECX[1],&param_2);
  FUN_004064c0(in_ECX[1] + 4,&param_2);
  FUN_004064c0(in_ECX[1] + 8,&param_2);
  *(undefined1 *)(in_ECX[1] + 0xc) = 0;
  *(undefined1 *)(in_ECX[1] + 0xd) = 0;
  ExceptionList = local_10;
  return in_ECX;
}


/* ==== 0040f6d0  FUN_0040f6d0  size=92 ==== */

int FUN_0040f6d0(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  int *piVar2;
  
  piVar2 = (int *)(in_ECX + 4);
  FUN_004064c0(*piVar2,param_1);
  FUN_004023d0(*piVar2,*piVar2);
  iVar1 = *piVar2;
  *piVar2 = *piVar2 + 4;
  return iVar1;
}


/* ==== 0040f730  FUN_0040f730  size=451 ==== */

int FUN_0040f730(int param_1,undefined4 param_2)

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
  puStack_c = &LAB_0070c97d;
  local_10 = ExceptionList;
  uVar1 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_18 = FUN_00401c60(uVar1);
  local_30 = local_1c;
  local_24 = local_1c;
  local_28 = local_1c + 1;
  local_20 = param_1 - *local_1c >> 2;
  local_34 = *local_28 - *local_1c >> 2;
  iVar2 = FUN_004023e0();
  if (local_34 == iVar2) {
    FUN_00401c80();
  }
  local_40 = local_34 + 1;
  local_2c = FUN_00410730(local_40);
  local_14 = FUN_004030e0(local_18,&local_2c);
  local_4c = local_14 + 4 + local_20 * 4;
  local_8 = 0;
  local_3c = &local_4c;
  uVar4 = local_18;
  local_48 = local_4c;
  local_38 = local_4c;
  uVar3 = _Unfancy<>(local_14 + local_20 * 4,param_2,uVar1,local_18,local_14,local_2c);
  FUN_00403690(local_18,uVar3);
  *local_3c = local_14 + local_20 * 4;
  if (param_1 == *local_28) {
    FUN_00410eb0(*local_24,*local_28,local_14,local_18);
  }
  else {
    FUN_00410eb0(*local_24,param_1,local_14,local_18);
    *local_3c = local_14;
    FUN_00410eb0(param_1,*local_28,local_14 + 4 + local_20 * 4,local_18);
  }
  uVar3 = 0;
  FUN_00410680(local_14,local_40,local_2c);
  local_44 = local_14 + local_20 * 4;
  local_8 = 0xffffffff;
  FUN_00410350(uVar1,uVar4,uVar3);
  ExceptionList = local_10;
  return local_44;
}


/* ==== 0040f900  FUN_0040f900  size=318 ==== */

void FUN_0040f900(uint param_1)

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
  puStack_c = &LAB_0070c9ad;
  local_10 = ExceptionList;
  uVar1 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar2 = FUN_00407cc0(uVar1);
  if (uVar2 < param_1) {
    FUN_00401c80();
  }
  local_18 = FUN_00401c60();
  local_28 = local_14;
  local_34 = local_14;
  local_30 = local_14 + 1;
  local_2c = (*local_30 - *local_14) / 0x134;
  local_24 = FUN_00407c60(param_1);
  local_1c = FUN_004083b0(local_18,&local_24);
  local_3c = local_2c * 0x134 + local_1c;
  local_8 = 0;
  local_38 = &local_3c;
  uVar4 = local_18;
  local_20 = local_3c;
  iVar3 = FUN_0040fa40(local_3c,param_1 - local_2c,local_18,uVar1,local_18,local_1c,local_24,
                       local_3c);
  *local_38 = iVar3;
  FUN_004083d0(*local_34,*local_30,local_1c,local_18);
  uVar5 = 0;
  FUN_00407bb0(local_1c,param_1,local_24);
  local_8 = 0xffffffff;
  FUN_00407b00(uVar1,uVar4,uVar5);
  ExceptionList = local_10;
  return;
}


/* ==== 0040fa40  FUN_0040fa40  size=132 ==== */

undefined4 FUN_0040fa40(undefined4 param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070c9dd;
  local_10 = ExceptionList;
  uVar1 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_00403180(param_1,param_3);
  local_8 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_00410f90();
  }
  uVar2 = FUN_00403130(uVar1);
  local_8 = 0xffffffff;
  FUN_004089d0();
  ExceptionList = local_10;
  return uVar2;
}


/* ==== 0040fad0  FUN_0040fad0  size=318 ==== */

void FUN_0040fad0(uint param_1)

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
  puStack_c = &LAB_0070ca0d;
  local_10 = ExceptionList;
  uVar1 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar2 = FUN_00406fe0(uVar1);
  if (uVar2 < param_1) {
    FUN_00401c80();
  }
  local_18 = FUN_00401c60();
  local_28 = local_14;
  local_34 = local_14;
  local_30 = local_14 + 1;
  local_2c = (*local_30 - *local_14) / 0x94;
  local_24 = FUN_00410840(param_1);
  local_1c = FUN_00407950(local_18,&local_24);
  local_3c = local_2c * 0x94 + local_1c;
  local_8 = 0;
  local_38 = &local_3c;
  uVar4 = local_18;
  local_20 = local_3c;
  iVar3 = FUN_0040fc10(local_3c,param_1 - local_2c,local_18,uVar1,local_18,local_1c,local_24,
                       local_3c);
  *local_38 = iVar3;
  FUN_00407640(*local_34,*local_30,local_1c,local_18);
  uVar5 = 0;
  FUN_00410790(local_1c,param_1,local_24);
  local_8 = 0xffffffff;
  FUN_00410420(uVar1,uVar4,uVar5);
  ExceptionList = local_10;
  return;
}


/* ==== 0040fc10  FUN_0040fc10  size=132 ==== */

undefined4 FUN_0040fc10(undefined4 param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070ca3d;
  local_10 = ExceptionList;
  uVar1 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_00403180(param_1,param_3);
  local_8 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_00410fd0();
  }
  uVar2 = FUN_00403130(uVar1);
  local_8 = 0xffffffff;
  FUN_00407ad0();
  ExceptionList = local_10;
  return uVar2;
}


/* ==== 0040fca0  FUN_0040fca0  size=315 ==== */

void FUN_0040fca0(uint param_1)

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
  puStack_c = &LAB_0070ca6d;
  local_10 = ExceptionList;
  uVar1 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar2 = FUN_00409220(uVar1);
  if (uVar2 < param_1) {
    FUN_00401c80();
  }
  local_18 = FUN_00401c60();
  local_28 = local_14;
  local_34 = local_14;
  local_30 = local_14 + 1;
  local_2c = (*local_30 - *local_14) / 0x60;
  local_24 = FUN_00410950(param_1);
  local_1c = FUN_00409600(local_18,&local_24);
  local_3c = local_2c * 0x60 + local_1c;
  local_8 = 0;
  local_38 = &local_3c;
  uVar4 = local_18;
  local_20 = local_3c;
  iVar3 = FUN_0040fde0(local_3c,param_1 - local_2c,local_18,uVar1,local_18,local_1c,local_24,
                       local_3c);
  *local_38 = iVar3;
  FUN_00411010(*local_34,*local_30,local_1c,local_18);
  uVar5 = 0;
  FUN_004108a0(local_1c,param_1,local_24);
  local_8 = 0xffffffff;
  FUN_004103d0(uVar1,uVar4,uVar5);
  ExceptionList = local_10;
  return;
}


/* ==== 0040fde0  FUN_0040fde0  size=132 ==== */

undefined4 FUN_0040fde0(undefined4 param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070ca9d;
  local_10 = ExceptionList;
  uVar1 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_00403180(param_1,param_3);
  local_8 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_004110c0();
  }
  uVar2 = FUN_00403130(uVar1);
  local_8 = 0xffffffff;
  FUN_00409ac0();
  ExceptionList = local_10;
  return uVar2;
}


/* ==== 0040fe80  FUN_0040fe80  size=330 ==== */

void FUN_0040fe80(uint *param_1,byte param_2,uint *param_3,int param_4,char param_5)

{
  uint *puVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint local_28;
  uint local_1c;
  
  cVar2 = FUN_0040e0a0(&param_3);
  puVar1 = param_3;
  if (cVar2 == '\0') {
    uVar3 = -1 << (param_2 & 0x1f);
    if (param_5 == '\0') {
      local_1c = 0;
    }
    else {
      local_1c = 0xffffffff;
    }
    if (param_1 == param_3) {
      uVar4 = 0xffffffff >> (0x20U - (char)param_4 & 0x1f);
      *param_1 = *param_1 & (~uVar3 | ~uVar4) | local_1c & uVar3 & uVar4;
    }
    else {
      *param_1 = *param_1 & ~uVar3 | local_1c & uVar3;
      if (param_5 == '\0') {
        local_28 = 0;
      }
      else {
        local_28 = 0xffffffff;
      }
      _memset(param_1 + 1,local_28 & 0xff,(int)param_3 - (int)(param_1 + 1));
      if (param_4 != 0) {
        uVar3 = 0xffffffff >> (0x20U - (char)param_4 & 0x1f);
        *puVar1 = *puVar1 & ~uVar3 | local_1c & uVar3;
      }
    }
  }
  return;
}


/* ==== 0040ffd0  FUN_0040ffd0  size=44 ==== */

undefined4
FUN_0040ffd0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  FUN_00411100(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return param_1;
}


/* ==== 00410000  FUN_00410000  size=21 ==== */

void FUN_00410000(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  return;
}


/* ==== 00410020  FUN_00410020  size=95 ==== */

undefined4 * FUN_00410020(undefined4 *param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined1 *puVar3;
  undefined1 local_14 [8];
  undefined1 local_c [8];
  
  while( true ) {
    cVar1 = FUN_0040de10(&stack0x00000010);
    if (cVar1 == '\0') break;
    puVar3 = local_c;
    FUN_004104c0(puVar3);
    uVar2 = FUN_00401ae0(puVar3);
    puVar3 = local_14;
    FUN_004104c0(puVar3,uVar2);
    FUN_00401ae0(puVar3);
    FUN_004104e0(uVar2);
  }
  *param_1 = in_stack_00000018;
  param_1[1] = in_stack_0000001c;
  return param_1;
}


/* ==== 00410080  FUN_00410080  size=316 ==== */

void FUN_00410080(uint param_1,undefined4 param_2)

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
  puStack_c = &LAB_0070cacd;
  local_10 = ExceptionList;
  uVar1 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar2 = FUN_004023e0(uVar1);
  if (uVar2 < param_1) {
    FUN_00401c80();
  }
  local_18 = FUN_00401c60();
  local_28 = local_14;
  local_34 = local_14;
  local_30 = local_14 + 1;
  local_2c = *local_30 - *local_14 >> 2;
  local_24 = FUN_00410730(param_1);
  local_1c = FUN_004030e0(local_18,&local_24);
  local_3c = local_1c + local_2c * 4;
  local_8 = 0;
  local_38 = &local_3c;
  uVar4 = local_18;
  local_20 = local_3c;
  iVar3 = FUN_00402f90(local_3c,param_1 - local_2c,param_2,local_18,uVar1,local_18,local_1c,local_24
                       ,local_3c);
  *local_38 = iVar3;
  FUN_00410eb0(*local_34,*local_30,local_1c,local_18);
  uVar5 = 0;
  FUN_00410680(local_1c,param_1,local_24);
  local_8 = 0xffffffff;
  FUN_00410350(uVar1,uVar4,uVar5);
  ExceptionList = local_10;
  return;
}


/* ==== 004101d0  FUN_004101d0  size=93 ==== */

void FUN_004101d0(void *param_1,int param_2)

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
  FUN_00411830(param_1,param_2);
  ExceptionList = local_10;
  return;
}


/* ==== 00410240  FUN_00410240  size=73 ==== */

bool FUN_00410240(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  bool bVar2;
  
  if (param_2 == param_4) {
    if (param_2 == 0) {
      bVar2 = true;
    }
    else {
      iVar1 = compare(param_1,param_3,param_2);
      bVar2 = iVar1 == 0;
    }
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}


/* ==== 00410290  FUN_00410290  size=49 ==== */

undefined4 FUN_00410290(uint param_1)

{
  undefined4 in_ECX;
  
  FUN_0040c940();
  if ((param_1 & 1) != 0) {
    FUN_006e4b8e(in_ECX,0x90);
  }
  return in_ECX;
}


/* ==== 004102d0  FUN_004102d0  size=46 ==== */

function<void___cdecl(void)> * FUN_004102d0(uint param_1)

{
  function<void___cdecl(void)> *in_ECX;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(in_ECX);
  if ((param_1 & 1) != 0) {
    FUN_006e4b8e(in_ECX,0x18);
  }
  return in_ECX;
}


/* ==== 00410300  FUN_00410300  size=46 ==== */

undefined4 FUN_00410300(uint param_1)

{
  undefined4 in_ECX;
  
  ~<>();
  if ((param_1 & 1) != 0) {
    FUN_006e4b8e(in_ECX,0x10);
  }
  return in_ECX;
}


/* ==== 00410330  ~<>  size=23 ==== */

/* Library Function - Multiple Matches With Same Base Name
    public: __thiscall
   <lambda_399686a4a5619bf4b18c998976ba8b81>::~<lambda_399686a4a5619bf4b18c998976ba8b81>(void)
    public: __thiscall
   <lambda_9ab38a79c03e1e04423ad6818173354b>::~<lambda_9ab38a79c03e1e04423ad6818173354b>(void)
   
   Libraries: Visual Studio 2012 Debug, Visual Studio 2012 Release */

void ~<>(void)

{
  FUN_004052a0();
  return;
}


/* ==== 00410350  FUN_00410350  size=73 ==== */

void FUN_00410350(void)

{
  undefined4 *in_ECX;
  
  if (in_ECX[1] != 0) {
    FUN_004025f0(in_ECX[3],in_ECX[4],*in_ECX);
    FUN_00402300(in_ECX[1],in_ECX[2]);
  }
  return;
}


/* ==== 004103a0  FUN_004103a0  size=39 ==== */

void FUN_004103a0(void)

{
  undefined4 *in_ECX;
  
  FUN_0040ea10(*in_ECX,in_ECX[1],in_ECX[2]);
  return;
}


/* ==== 004103d0  FUN_004103d0  size=73 ==== */

void FUN_004103d0(void)

{
  undefined4 *in_ECX;
  
  if (in_ECX[1] != 0) {
    FUN_00406040(in_ECX[3],in_ECX[4],*in_ECX);
    FUN_00405bd0(in_ECX[1],in_ECX[2]);
  }
  return;
}


/* ==== 00410420  FUN_00410420  size=73 ==== */

void FUN_00410420(void)

{
  undefined4 *in_ECX;
  
  if (in_ECX[1] != 0) {
    FUN_00406380(in_ECX[3],in_ECX[4],*in_ECX);
    FUN_00405ba0(in_ECX[1],in_ECX[2]);
  }
  return;
}


/* ==== 00410470  FUN_00410470  size=73 ==== */

void FUN_00410470(void)

{
  undefined4 *in_ECX;
  
  if (in_ECX[1] != 0) {
    FUN_0040e420(in_ECX[3],in_ECX[4],*in_ECX);
    FUN_0040dec0(in_ECX[1],in_ECX[2]);
  }
  return;
}


/* ==== 004104c0  FUN_004104c0  size=22 ==== */

undefined4 FUN_004104c0(void)

{
  undefined4 in_ECX;
  
  FUN_004109e0();
  return in_ECX;
}


/* ==== 004104e0  FUN_004104e0  size=33 ==== */

void FUN_004104e0(void)

{
  undefined1 uVar1;
  
  uVar1 = FUN_00401750();
  FUN_00401790(uVar1);
  return;
}


/* ==== 00410510  FUN_00410510  size=169 ==== */

void FUN_00410510(int param_1,int param_2,int param_3)

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
    FUN_0040e420(*in_ECX,*piVar3,uVar1);
    FUN_0040dec0(*in_ECX,(*piVar2 - *in_ECX) / 0x90);
  }
  *in_ECX = param_1;
  *piVar3 = param_2 * 0x90 + param_1;
  *piVar2 = param_3 * 0x90 + param_1;
  return;
}


/* ==== 004105c0  FUN_004105c0  size=84 ==== */

uint FUN_004105c0(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_00410a00();
  uVar2 = FUN_00410620();
  if ((uVar1 <= uVar2 - (uVar1 >> 1)) && (uVar2 = (uVar1 >> 1) + uVar1, uVar2 < param_1)) {
    uVar2 = param_1;
  }
  return uVar2;
}


/* ==== 00410620  FUN_00410620  size=59 ==== */

uint FUN_00410620(void)

{
  undefined4 uVar1;
  uint *puVar2;
  uint local_10;
  uint local_c [2];
  
  uVar1 = FUN_00401c60();
  local_c[0] = FUN_00410a30(uVar1);
  local_10 = FUN_00402140();
  puVar2 = std::_Max_value<unsigned_int>(&local_10,local_c);
  return *puVar2;
}


/* ==== 00410660  FUN_00410660  size=25 ==== */

void FUN_00410660(undefined4 param_1)

{
  FUN_00410a40(param_1);
  return;
}


/* ==== 00410680  FUN_00410680  size=162 ==== */

void FUN_00410680(int param_1,int param_2,int param_3)

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
    FUN_004025f0(*in_ECX,*piVar3,uVar1);
    FUN_00402300(*in_ECX,*piVar2 - *in_ECX >> 2);
  }
  *in_ECX = param_1;
  *piVar3 = param_1 + param_2 * 4;
  *piVar2 = param_1 + param_3 * 4;
  return;
}


/* ==== 00410730  FUN_00410730  size=84 ==== */

uint FUN_00410730(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_00410a60();
  uVar2 = FUN_004023e0();
  if ((uVar1 <= uVar2 - (uVar1 >> 1)) && (uVar2 = (uVar1 >> 1) + uVar1, uVar2 < param_1)) {
    uVar2 = param_1;
  }
  return uVar2;
}


/* ==== 00410790  FUN_00410790  size=169 ==== */

void FUN_00410790(int param_1,int param_2,int param_3)

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
    FUN_00406380(*in_ECX,*piVar3,uVar1);
    FUN_00405ba0(*in_ECX,(*piVar2 - *in_ECX) / 0x94);
  }
  *in_ECX = param_1;
  *piVar3 = param_2 * 0x94 + param_1;
  *piVar2 = param_3 * 0x94 + param_1;
  return;
}


/* ==== 00410840  FUN_00410840  size=84 ==== */

uint FUN_00410840(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_00410a90();
  uVar2 = FUN_00406fe0();
  if ((uVar1 <= uVar2 - (uVar1 >> 1)) && (uVar2 = (uVar1 >> 1) + uVar1, uVar2 < param_1)) {
    uVar2 = param_1;
  }
  return uVar2;
}


/* ==== 004108a0  FUN_004108a0  size=163 ==== */

void FUN_004108a0(int param_1,int param_2,int param_3)

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
    FUN_00406040(*in_ECX,*piVar3,uVar1);
    FUN_00405bd0(*in_ECX,(*piVar2 - *in_ECX) / 0x60);
  }
  *in_ECX = param_1;
  *piVar3 = param_2 * 0x60 + param_1;
  *piVar2 = param_3 * 0x60 + param_1;
  return;
}


/* ==== 00410950  FUN_00410950  size=84 ==== */

uint FUN_00410950(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_00410ac0();
  uVar2 = FUN_00409220();
  if ((uVar1 <= uVar2 - (uVar1 >> 1)) && (uVar2 = (uVar1 >> 1) + uVar1, uVar2 < param_1)) {
    uVar2 = param_1;
  }
  return uVar2;
}


/* ==== 004109b0  compare  size=34 ==== */

/* Library Function - Multiple Matches With Same Base Name
    public: static int __cdecl std::_Narrow_char_traits<char,int>::compare(char const * const,char
   const * const,unsigned int)
    public: static int __cdecl std::char_traits<char>::compare(char const * const,char const *
   const,unsigned int)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

undefined4 compare(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = util_memcmp_n(param_1,param_2,param_3);
  return uVar1;
}


/* ==== 004109e0  FUN_004109e0  size=22 ==== */

undefined4 FUN_004109e0(void)

{
  undefined4 in_ECX;
  
  FUN_00410af0();
  return in_ECX;
}


/* ==== 00410a00  FUN_00410a00  size=38 ==== */

int FUN_00410a00(void)

{
  int *in_ECX;
  
  return (in_ECX[2] - *in_ECX) / 0x90;
}


/* ==== 00410a30  FUN_00410a30  size=10 ==== */

undefined4 FUN_00410a30(void)

{
  return 0x1c71c71;
}


/* ==== 00410a40  FUN_00410a40  size=31 ==== */

void FUN_00410a40(void)

{
  uint uVar1;
  char *pcVar2;
  
  uVar1 = FUN_00410b30();
  pcVar2 = (char *)npk_get_relative_res_path();
  std::_Hash_array_representation<char>(pcVar2,uVar1);
  return;
}


/* ==== 00410a60  FUN_00410a60  size=33 ==== */

int FUN_00410a60(void)

{
  int *in_ECX;
  
  return in_ECX[2] - *in_ECX >> 2;
}


/* ==== 00410a90  FUN_00410a90  size=38 ==== */

int FUN_00410a90(void)

{
  int *in_ECX;
  
  return (in_ECX[2] - *in_ECX) / 0x94;
}


/* ==== 00410ac0  FUN_00410ac0  size=38 ==== */

int FUN_00410ac0(void)

{
  int *in_ECX;
  
  return (in_ECX[2] - *in_ECX) / 0x60;
}


/* ==== 00410af0  FUN_00410af0  size=60 ==== */

void FUN_00410af0(void)

{
  int *in_ECX;
  
  if (in_ECX[1] == 0) {
    in_ECX[1] = 0x1f;
    *in_ECX = *in_ECX + -4;
  }
  else {
    in_ECX[1] = in_ECX[1] + -1;
  }
  return;
}


/* ==== 00410b30  FUN_00410b30  size=17 ==== */

undefined4 FUN_00410b30(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x10);
}


/* ==== 00410b50  FUN_00410b50  size=65 ==== */

bool FUN_00410b50(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  
  allocator<>(param_1,param_2);
  cVar1 = destroy<>(param_1,param_2);
  return cVar1 == '\0';
}


/* ==== 00410ba0  FUN_00410ba0  size=306 ==== */

void FUN_00410ba0(undefined4 param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *in_ECX;
  uint local_18;
  undefined4 local_14;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_10;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_c;
  undefined1 local_7;
  undefined1 local_6 [2];
  
  local_10 = in_ECX;
  local_c = in_ECX;
  uVar1 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::max_size(in_ECX);
  if (uVar1 < param_2) {
    FUN_00403960();
  }
  uVar2 = FUN_00401c60();
  FUN_00401740(&DAT_0073f53f,local_c);
  if (param_2 < 0x10) {
    *(uint *)(local_c + 0x10) = param_2;
    *(undefined4 *)(local_c + 0x14) = 0xf;
    _Unchecked_idl0<>(local_c,param_1,param_2);
    local_6[0] = 0;
    FUN_00405cc0(local_c + param_2,local_6);
    FUN_00401710();
  }
  else {
    uVar1 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::max_size(local_10)
    ;
    local_18 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
               _Calculate_growth(param_2,0xf,uVar1);
    local_14 = FUN_00407750(uVar2,&local_18);
    FUN_004064c0(local_c,&local_14);
    *(uint *)(local_c + 0x10) = param_2;
    *(uint *)(local_c + 0x14) = local_18;
    uVar2 = _Unfancy<>(local_14,param_1,param_2);
    _Unchecked_idl0<>(uVar2);
    local_7 = 0;
    iVar3 = _Unfancy<>(local_14,&local_7);
    FUN_00405cc0(iVar3 + param_2);
    FUN_00401710();
  }
  return;
}


/* ==== 00410ce0  FUN_00410ce0  size=117 ==== */

void FUN_00410ce0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 local_14;
  
  FUN_00409400(param_1);
  iVar1 = FUN_00411b60(param_2);
  iVar2 = FUN_00411b60(param_3);
  if (iVar2 - iVar1 == -1) {
    local_14 = FUN_00411aa0();
  }
  else {
    local_14 = FUN_00411ac0((iVar2 - iVar1) + 1);
  }
  FUN_00411b60(local_14 + iVar1);
  return;
}


/* ==== 00410d60  FUN_00410d60  size=41 ==== */

void FUN_00410d60(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_004013e0(0x90,param_2);
  FUN_00411890(param_3);
  return;
}


/* ==== 00410d90  FUN_00410d90  size=19 ==== */

void FUN_00410d90(undefined4 param_1,undefined4 *param_2)

{
  allocate(*param_2);
  return;
}


/* ==== 00410db0  FUN_00410db0  size=171 ==== */

undefined4 FUN_00410db0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070cafd;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = FUN_00402d20(&param_1,DAT_007c5940 ^ (uint)&stack0xfffffffc);
  iVar1 = FUN_00402d20(&param_2);
  FUN_00403180(param_3,param_4);
  local_8 = 0;
  for (; local_14 != iVar1; local_14 = local_14 + 0x90) {
    FUN_00412060(local_14);
  }
  uVar2 = FUN_00403130();
  local_8 = 0xffffffff;
  FUN_00411a70();
  ExceptionList = local_10;
  return uVar2;
}


/* ==== 00410e60  FUN_00410e60  size=65 ==== */

void FUN_00410e60(undefined4 param_1,undefined4 param_2,undefined1 *param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar1;
  undefined4 uVar2;
  
  FUN_004013e0(0x10,param_2);
  uVar2 = extraout_ECX;
  FUN_00402770(param_5);
  uVar1 = extraout_ECX_00;
  FUN_00407970(param_4);
  FUN_004120b0(*param_3,uVar1,uVar2);
  return;
}


/* ==== 00410eb0  FUN_00410eb0  size=128 ==== */

int FUN_00410eb0(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0070be4d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = FUN_00402d20(&param_1,DAT_007c5940 ^ (uint)&stack0xfffffffc);
  iVar2 = FUN_00402d20(&param_2);
  uVar3 = _Unfancy<>(param_3);
  FUN_00402f20(iVar1,iVar2,uVar3);
  ExceptionList = local_10;
  return param_3 + (iVar2 - iVar1 >> 2) * 4;
}


/* ==== 00410f90  FUN_00410f90  size=60 ==== */

void FUN_00410f90(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  uVar1 = _Unfancy<>(*(undefined4 *)(in_ECX + 4));
  FUN_004120f0(*(undefined4 *)(in_ECX + 8),uVar1);
  *(int *)(in_ECX + 4) = *(int *)(in_ECX + 4) + 0x134;
  return;
}


/* ==== 00410fd0  FUN_00410fd0  size=60 ==== */

void FUN_00410fd0(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  uVar1 = _Unfancy<>(*(undefined4 *)(in_ECX + 4));
  FUN_00412120(*(undefined4 *)(in_ECX + 8),uVar1);
  *(int *)(in_ECX + 4) = *(int *)(in_ECX + 4) + 0x94;
  return;
}


/* ==== 00411010  FUN_00411010  size=168 ==== */

undefined4 FUN_00411010(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070cb2d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = FUN_00402d20(&param_1,DAT_007c5940 ^ (uint)&stack0xfffffffc);
  iVar1 = FUN_00402d20(&param_2);
  FUN_00403180(param_3,param_4);
  local_8 = 0;
  for (; local_14 != iVar1; local_14 = local_14 + 0x60) {
    FUN_00412150(local_14);
  }
  uVar2 = FUN_00403130();
  local_8 = 0xffffffff;
  FUN_00409ac0();
  ExceptionList = local_10;
  return uVar2;
}


/* ==== 004110c0  FUN_004110c0  size=57 ==== */

void FUN_004110c0(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  uVar1 = _Unfancy<>(*(undefined4 *)(in_ECX + 4));
  FUN_00412190(*(undefined4 *)(in_ECX + 8),uVar1);
  *(int *)(in_ECX + 4) = *(int *)(in_ECX + 4) + 0x60;
  return;
}


/* ==== 00411100  FUN_00411100  size=1816 ==== */

int * FUN_00411100(int *param_1,uint *param_2,uint param_3,uint *param_4,uint param_5,uint *param_6,
                  uint param_7)

{
  char cVar1;
  uint *puVar2;
  uint *puVar3;
  char cVar4;
  undefined4 uVar5;
  uint uVar6;
  byte *pbVar7;
  byte bVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  byte *pbVar12;
  uint local_a4;
  uint local_88;
  uint local_84;
  uint local_74;
  uint local_70;
  uint local_64;
  byte *local_54;
  int local_34;
  int local_30;
  uint local_2c;
  byte local_1f;
  byte local_1e;
  undefined1 local_1d;
  byte *local_1c;
  uint local_18;
  undefined1 local_11;
  undefined1 local_10;
  undefined1 local_f;
  undefined1 local_e;
  undefined1 local_d;
  uint *local_c;
  uint *local_8;
  
  cVar4 = FUN_0040e0a0(&param_4);
  puVar3 = param_4;
  if (cVar4 == '\0') {
    local_c = param_2;
    local_8 = param_6;
    uVar5 = FUN_0040de50(&param_2);
    FUN_0040d910(&local_34,uVar5);
    bVar8 = (byte)param_3;
    uVar10 = -1 << (bVar8 & 0x1f);
    cVar4 = (char)param_7;
    if (param_7 == 0) {
      local_a4 = 0;
    }
    else {
      local_a4 = 0xffffffff >> (0x20U - cVar4 & 0x1f);
    }
    cVar1 = (char)param_5;
    uVar11 = 0xffffffff >> (0x20U - cVar1 & 0x1f);
    bVar9 = (byte)local_30;
    local_88 = -1 << (bVar9 & 0x1f);
    local_1d = local_c == puVar3;
    local_64 = (uint)(local_30 == 0);
    local_11 = local_8 == (uint *)(local_34 + local_64 * -4);
    local_10 = param_7 < param_3;
    if ((bool)local_1d) {
      uVar10 = uVar10 & uVar11;
      if ((bool)local_10) {
        local_70 = (*local_c & uVar10) >> (bVar8 - cVar4 & 0x1f);
      }
      else {
        local_70 = (*local_c & uVar10) << (cVar4 - bVar8 & 0x1f);
      }
      if ((bool)local_11) {
        local_74 = local_88;
        if (local_30 == 0) {
          local_74 = 0;
        }
        *local_8 = *local_8 & (local_a4 | local_74) | local_70;
      }
      else {
        *local_8 = *local_8 & local_a4 | local_70;
        local_8[1] = local_8[1] & local_88 | (*local_c & uVar10) >> (cVar1 - bVar9 & 0x1f);
      }
      *param_1 = local_34;
      param_1[1] = local_30;
    }
    else if ((bool)local_11) {
      if ((bool)local_10) {
        local_84 = (*local_c & uVar10) >> (bVar8 - cVar4 & 0x1f);
      }
      else {
        local_84 = (*local_c & uVar10) << (cVar4 - bVar8 & 0x1f);
      }
      if (local_30 == 0) {
        local_88 = 0;
      }
      if (param_5 == 0) {
        *local_8 = *local_8 & (local_a4 | local_88) | local_84;
      }
      else {
        *local_8 = *local_8 & (local_a4 | local_88) | local_84 |
                   (*puVar3 & uVar11) << (bVar9 - cVar1 & 0x1f);
      }
      *param_1 = local_34;
      param_1[1] = local_30;
    }
    else {
      uVar6 = param_3 & 7;
      if (uVar6 == (param_7 & 7)) {
        uVar10 = param_5 & 7;
        local_54 = (byte *)((param_3 - uVar6 >> 3) + (int)local_c);
        pbVar12 = (byte *)((param_5 - uVar10 >> 3) + (int)puVar3);
        local_1c = (byte *)((param_7 - (param_7 & 7) >> 3) + (int)local_8);
        if (uVar6 != 0) {
          local_1f = (byte)(0xff << (sbyte)uVar6);
          local_1e = (byte)(0xff >> (8U - (sbyte)uVar6 & 0x1f));
          *local_1c = *local_1c & local_1e | *local_54 & local_1f;
          local_54 = local_54 + 1;
          local_1c = local_1c + 1;
        }
        local_18 = local_88;
        local_f = local_11;
        local_e = local_1d;
        local_d = local_10;
        pbVar7 = (byte *)FUN_004121c0(local_54,pbVar12,local_1c);
        if (uVar10 != 0) {
          *pbVar7 = *pbVar7 & (byte)(0xff << (sbyte)uVar10) |
                    *pbVar12 & (byte)(0xff >> (8U - (sbyte)uVar10 & 0x1f));
        }
        *param_1 = local_34;
        param_1[1] = local_30;
      }
      else {
        if ((bool)local_10) {
          param_3 = param_3 - param_7;
          bVar8 = (byte)param_3;
          uVar6 = 0xffffffff >> (bVar8 & 0x1f);
          *local_8 = *local_8 & local_a4 | (*local_c & uVar10) >> (bVar8 & 0x1f);
          while (local_c = local_c + 1, local_c != puVar3) {
            *local_8 = *local_8 & uVar6 | *local_c << (0x20 - bVar8 & 0x1f);
            local_8 = local_8 + 1;
            *local_8 = *local_8 & ~uVar6 | *local_c >> (bVar8 & 0x1f);
          }
          if (param_5 != 0) {
            uVar10 = (*local_c & uVar11) << (0x20 - bVar8 & 0x1f);
            if (param_5 < param_3) {
              *local_8 = *local_8 & (uVar6 | local_88) | uVar10;
            }
            else {
              *local_8 = *local_8 & uVar6 | uVar10;
              if (param_5 != param_3) {
                local_8[1] = local_8[1] & local_88 | (*local_c & uVar11) >> (bVar8 & 0x1f);
              }
            }
          }
        }
        else {
          uVar6 = 0x20 - (param_7 - param_3);
          bVar8 = (byte)(param_7 - param_3);
          *local_8 = *local_8 & local_a4 | (*local_c & uVar10) << (bVar8 & 0x1f);
          bVar9 = (byte)uVar6;
          local_2c = *local_c >> (bVar9 & 0x1f);
          puVar2 = local_8;
          while( true ) {
            local_8 = puVar2 + 1;
            local_c = local_c + 1;
            if (local_c == puVar3) break;
            *local_8 = local_2c | *local_c << (bVar8 & 0x1f);
            local_2c = *local_c >> (bVar9 & 0x1f);
            puVar2 = local_8;
          }
          if (param_5 < uVar6) {
            if (param_5 == 0) {
              *local_8 = *local_8 & local_88 | local_2c;
            }
            else {
              *local_8 = *local_8 & local_88 | local_2c | (*local_c & uVar11) << (bVar8 & 0x1f);
            }
          }
          else {
            *local_8 = local_2c | *local_c << (bVar8 & 0x1f);
            if (param_5 != uVar6) {
              puVar2[2] = puVar2[2] & local_88 | *local_c >> (bVar9 & 0x1f) & ~local_88;
            }
          }
        }
        *param_1 = local_34;
        param_1[1] = local_30;
      }
    }
  }
  else {
    *param_1 = (int)param_6;
    param_1[1] = param_7;
  }
  return param_1;
}


/* ==== 00411830  FUN_00411830  size=50 ==== */

void FUN_00411830(undefined4 param_1,int param_2)

{
  FUN_004025f0(param_2);
  FUN_004025f0(param_2 + 4);
  FUN_00407d90(param_1,param_2,1);
  return;
}


/* ==== 00411890  FUN_00411890  size=387 ==== */

undefined1 * FUN_00411890(undefined1 *param_1)

{
  undefined1 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070cb6b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = *param_1;
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
  FUN_00405520(param_1 + 0x10);
  local_8 = 0;
  *(undefined4 *)(in_ECX + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(in_ECX + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(in_ECX + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(in_ECX + 0x38) = *(undefined4 *)(param_1 + 0x38);
  in_ECX[0x3c] = param_1[0x3c];
  *(undefined4 *)(in_ECX + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(in_ECX + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(in_ECX + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(in_ECX + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(in_ECX + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(in_ECX + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(in_ECX + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(in_ECX + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  FUN_00411bf0(param_1 + 0x60);
  local_8 = CONCAT31(local_8._1_3_,1);
  *(undefined4 *)(in_ECX + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  in_ECX[0x70] = param_1[0x70];
  FUN_00405520(param_1 + 0x74);
  *(undefined4 *)(in_ECX + 0x8c) = *(undefined4 *)(param_1 + 0x8c);
  ExceptionList = local_10;
  return in_ECX;
}


/* ==== 00411a50  ~WorkQueue  size=31 ==== */

/* Library Function - Single Match
    public: __thiscall Concurrency::details::WorkQueue::~WorkQueue(void)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void __thiscall Concurrency::details::WorkQueue::~WorkQueue(WorkQueue *this)

{
  FUN_00411b80();
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)this);
  return;
}


/* ==== 00411a70  FUN_00411a70  size=39 ==== */

void FUN_00411a70(void)

{
  undefined4 *in_ECX;
  
  FUN_0040e420(*in_ECX,in_ECX[1],in_ECX[2]);
  return;
}


/* ==== 00411aa0  FUN_00411aa0  size=27 ==== */

undefined4 FUN_00411aa0(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00411c80();
  return uVar1;
}


/* ==== 00411ac0  FUN_00411ac0  size=147 ==== */

void FUN_00411ac0(uint param_1)

{
  undefined8 uVar1;
  uint local_c;
  
  uVar1 = FUN_00411c60(param_1,1);
  if ((uint)uVar1 < param_1) {
    while (local_c = (uint)uVar1, local_c < -param_1 % param_1) {
      uVar1 = FUN_00411c60(param_1,1);
    }
  }
  __aullshr(uVar1,0x20);
  return;
}


/* ==== 00411b60  FUN_00411b60  size=23 ==== */

uint FUN_00411b60(uint param_1)

{
  return param_1 ^ 0x80000000;
}


/* ==== 00411b80  FUN_00411b80  size=20 ==== */

void FUN_00411b80(void)

{
  FUN_00411cb0();
  return;
}


/* ==== 00411ba0  allocate  size=34 ==== */

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
  
  uVar1 = FUN_00412250(param_1);
  FUN_00403080(uVar1);
  return;
}


/* ==== 00411bd0  destroy<>  size=29 ==== */

/* Library Function - Multiple Matches With Same Base Name
    public: void __thiscall std::_Wrap_alloc<class std::allocator<char> >::destroy<char *>(char * *)
    public: void __thiscall std::_Wrap_alloc<class std::allocator<unsigned short>
   >::destroy<unsigned short *>(unsigned short * *)
    public: void __thiscall std::_Wrap_alloc<class std::allocator<wchar_t> >::destroy<wchar_t
   *>(wchar_t * *)
    public: void __thiscall std::_Wrap_alloc<class std::allocator<struct std::_Container_proxy>
   >::destroy<struct std::_Container_proxy>(struct std::_Container_proxy *)
     14 names - too many to list
   
   Libraries: Visual Studio 2012 Debug, Visual Studio 2012 Release, Visual Studio 2015 Debug, Visual
   Studio 2015 Release */

void destroy<>(undefined4 param_1,undefined4 param_2)

{
  destroy<>(param_1,param_2);
  return;
}


/* ==== 00411bf0  FUN_00411bf0  size=106 ==== */

undefined4 FUN_00411bf0(int *param_1)

{
  undefined4 uVar1;
  undefined4 in_ECX;
  undefined1 local_6;
  undefined1 local_5;
  
  uVar1 = FUN_00401c60();
  uVar1 = _Unfancy<>(&local_5,uVar1);
  _Vector_alloc<>(local_6,uVar1);
  FUN_00412280((param_1[1] - *param_1) / 0x18,param_1,param_1 + 1);
  return in_ECX;
}


/* ==== 00411c60  FUN_00411c60  size=32 ==== */

longlong FUN_00411c60(uint param_1)

{
  uint uVar1;
  
  uVar1 = FUN_00411c80();
  return (ulonglong)uVar1 * (ulonglong)param_1;
}


/* ==== 00411c80  FUN_00411c80  size=39 ==== */

/* WARNING: Removing unreachable block (ram,0x00411ca1) */

undefined4 FUN_00411c80(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00411d50();
  return uVar1;
}


/* ==== 00411cb0  FUN_00411cb0  size=155 ==== */

void FUN_00411cb0(void)

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
    FUN_004025f0(*in_ECX,*piVar3,uVar1);
    FUN_00411d70(*in_ECX,(*piVar2 - *in_ECX) / 0x28);
    *in_ECX = 0;
    *piVar3 = 0;
    *piVar2 = 0;
  }
  return;
}


/* ==== 00411d50  FUN_00411d50  size=19 ==== */

void FUN_00411d50(void)

{
  FUN_00411d90();
  return;
}


/* ==== 00411d70  FUN_00411d70  size=30 ==== */

void FUN_00411d70(undefined4 param_1,int param_2)

{
  _Deallocate<>(param_1,param_2 * 0x28);
  return;
}


/* ==== 00411d90  FUN_00411d90  size=154 ==== */

uint FUN_00411d90(void)

{
  uint uVar1;
  uint *in_ECX;
  
  if (*in_ECX == 0x270) {
    FUN_00411e30();
  }
  else if (0x4df < *in_ECX) {
    FUN_00411ec0();
  }
  uVar1 = in_ECX[*in_ECX + 1];
  *in_ECX = *in_ECX + 1;
  uVar1 = uVar1 >> 0xb & in_ECX[0x4e1] ^ uVar1;
  uVar1 = (uVar1 & 0x13a58ad) << 7 ^ uVar1;
  uVar1 = (uVar1 & 0x1df8c) << 0xf ^ uVar1;
  return uVar1 >> 0x12 ^ uVar1;
}


/* ==== 00411e30  FUN_00411e30  size=139 ==== */

void FUN_00411e30(void)

{
  uint uVar1;
  int in_ECX;
  undefined4 local_14;
  undefined4 local_8;
  
  for (local_8 = 0x270; local_8 < 0x4e0; local_8 = local_8 + 1) {
    uVar1 = *(uint *)(in_ECX + -0x9b8 + local_8 * 4);
    if ((uVar1 & 1) == 0) {
      local_14 = 0;
    }
    else {
      local_14 = 0x9908b0df;
    }
    *(uint *)(in_ECX + 4 + local_8 * 4) =
         (*(uint *)(in_ECX + -0x9bc + local_8 * 4) & 0x80000000 | uVar1 & 0x7fffffff) >> 1 ^
         local_14 ^ *(uint *)(in_ECX + -0x388 + local_8 * 4);
  }
  return;
}


/* ==== 00411ec0  FUN_00411ec0  size=412 ==== */

void FUN_00411ec0(void)

{
  undefined4 *in_ECX;
  uint local_28;
  uint local_20;
  uint local_18;
  uint local_10;
  uint local_c;
  
  for (local_c = 0; local_c < 0xe3; local_c = local_c + 1) {
    if ((in_ECX[local_c + 0x272] & 1) == 0) {
      local_18 = 0;
    }
    else {
      local_18 = 0x9908b0df;
    }
    in_ECX[local_c + 1] =
         (in_ECX[local_c + 0x271] & 0x80000000 | in_ECX[local_c + 0x272] & 0x7fffffff) >> 1 ^
         local_18 ^ in_ECX[local_c + 0x3fe];
  }
  for (local_10 = 0xe3; local_10 < 0x26f; local_10 = local_10 + 1) {
    if ((in_ECX[local_10 + 0x272] & 1) == 0) {
      local_20 = 0;
    }
    else {
      local_20 = 0x9908b0df;
    }
    in_ECX[local_10 + 1] =
         (in_ECX[local_10 + 0x271] & 0x80000000 | in_ECX[local_10 + 0x272] & 0x7fffffff) >> 1 ^
         local_20 ^ in_ECX[local_10 - 0xe2];
  }
  if ((in_ECX[1] & 1) == 0) {
    local_28 = 0;
  }
  else {
    local_28 = 0x9908b0df;
  }
  in_ECX[0x270] =
       (in_ECX[0x4e0] & 0x80000000 | in_ECX[1] & 0x7fffffff) >> 1 ^ local_28 ^ in_ECX[0x18d];
  *in_ECX = 0;
  return;
}


/* ==== 00412060  FUN_00412060  size=65 ==== */

void FUN_00412060(undefined4 param_1)

{
  undefined4 uVar1;
  int in_ECX;
  
  uVar1 = _Unfancy<>(*(undefined4 *)(in_ECX + 4),param_1);
  FUN_00412370(*(undefined4 *)(in_ECX + 8),uVar1);
  *(int *)(in_ECX + 4) = *(int *)(in_ECX + 4) + 0x90;
  return;
}


/* ==== 004120b0  FUN_004120b0  size=55 ==== */

undefined4 FUN_004120b0(void)

{
  undefined4 in_ECX;
  
  FUN_004123a0(&stack0x00000008,&stack0x0000000c,0,0);
  return in_ECX;
}


/* ==== 004120f0  FUN_004120f0  size=37 ==== */

void FUN_004120f0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_004013e0(0x134,param_2);
  FUN_0040ac90(uVar1);
  return;
}


/* ==== 00412120  FUN_00412120  size=37 ==== */

void FUN_00412120(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_004013e0(0x94,param_2);
  FUN_0040a880(uVar1);
  return;
}


/* ==== 00412150  FUN_00412150  size=63 ==== */

void FUN_00412150(undefined4 param_1)

{
  undefined4 uVar1;
  int in_ECX;
  
  uVar1 = _Unfancy<>(*(undefined4 *)(in_ECX + 4),param_1);
  FUN_004123d0(*(undefined4 *)(in_ECX + 8),uVar1);
  *(int *)(in_ECX + 4) = *(int *)(in_ECX + 4) + 0x60;
  return;
}


/* ==== 00412190  FUN_00412190  size=34 ==== */

void FUN_00412190(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_004013e0(0x60,param_2);
  FUN_0040aa90(uVar1);
  return;
}


/* ==== 004121c0  FUN_004121c0  size=27 ==== */

void FUN_004121c0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00412400(param_1,param_2,param_3);
  return;
}


/* ==== 00412210  FUN_00412210  size=63 ==== */

void FUN_00412210(undefined4 param_1)

{
  undefined4 uVar1;
  int in_ECX;
  
  uVar1 = _Unfancy<>(*(undefined4 *)(in_ECX + 4),param_1);
  FUN_00412460(*(undefined4 *)(in_ECX + 8),uVar1);
  *(int *)(in_ECX + 4) = *(int *)(in_ECX + 4) + 0x18;
  return;
}


/* ==== 00412250  FUN_00412250  size=43 ==== */

int FUN_00412250(uint param_1)

{
  if (0x1c71c71 < param_1) {
    FUN_004015f0(0x1c71c71);
  }
  return param_1 * 0x90;
}


/* ==== 00412280  FUN_00412280  size=197 ==== */

void FUN_00412280(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070cb9d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar1 = FUN_00401c60(DAT_007c5940 ^ (uint)&stack0xfffffffc);
  FUN_00401740(&DAT_0073f53f,in_ECX);
  if (param_1 != 0) {
    FUN_0040a2f0(param_1);
    local_8 = 0;
    uVar1 = FUN_00412490(*param_2,*param_3,*in_ECX,uVar1);
    in_ECX[1] = uVar1;
    local_8 = 0xffffffff;
    FUN_00412350();
  }
  FUN_00401710();
  ExceptionList = local_10;
  return;
}


/* ==== 00412350  FUN_00412350  size=30 ==== */

void FUN_00412350(void)

{
  int *in_ECX;
  
  if (*in_ECX != 0) {
    FUN_0040dbc0();
  }
  return;
}


/* ==== 00412370  FUN_00412370  size=41 ==== */

void FUN_00412370(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_004013e0(0x90,param_2);
  FUN_00412540(param_3);
  return;
}


/* ==== 004123a0  FUN_004123a0  size=47 ==== */

undefined4 * FUN_004123a0(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  
  puVar1 = (undefined4 *)FUN_00402d20(param_1);
  *in_ECX = *puVar1;
  FUN_0040d650();
  return in_ECX;
}


/* ==== 004123d0  FUN_004123d0  size=38 ==== */

void FUN_004123d0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_004013e0(0x60,param_2);
  FUN_00412690(param_3);
  return;
}


/* ==== 00412400  FUN_00412400  size=94 ==== */

void FUN_00412400(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00402d20(&param_1);
  iVar2 = FUN_00402d20(&param_2);
  FUN_00403360(iVar1,param_3,iVar2 - iVar1,iVar2 - iVar1);
  return;
}


/* ==== 00412460  FUN_00412460  size=38 ==== */

void FUN_00412460(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_004013e0(0x18,param_2);
  FUN_00405520(param_3);
  return;
}


/* ==== 00412490  FUN_00412490  size=172 ==== */

undefined4 FUN_00412490(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070cbcd;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_18 = FUN_00402d20(&param_1,DAT_007c5940 ^ (uint)&stack0xfffffffc);
  iVar1 = FUN_00402d20(&param_2);
  FUN_00403180(param_3,param_4);
  local_8 = 0;
  for (; local_18 != iVar1; local_18 = local_18 + 0x18) {
    FUN_00412210(local_18);
  }
  uVar2 = FUN_00403130();
  local_8 = 0xffffffff;
  FUN_004103a0();
  ExceptionList = local_10;
  return uVar2;
}


/* ==== 00412540  FUN_00412540  size=327 ==== */

undefined1 * FUN_00412540(undefined1 *param_1)

{
  undefined1 *in_ECX;
  
  *in_ECX = *param_1;
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
  FUN_00405450(param_1 + 0x10);
  *(undefined4 *)(in_ECX + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(in_ECX + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(in_ECX + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(in_ECX + 0x38) = *(undefined4 *)(param_1 + 0x38);
  in_ECX[0x3c] = param_1[0x3c];
  *(undefined4 *)(in_ECX + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(in_ECX + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(in_ECX + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(in_ECX + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(in_ECX + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(in_ECX + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(in_ECX + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(in_ECX + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  FUN_004127d0(param_1 + 0x60);
  *(undefined4 *)(in_ECX + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  in_ECX[0x70] = param_1[0x70];
  FUN_00405450(param_1 + 0x74);
  *(undefined4 *)(in_ECX + 0x8c) = *(undefined4 *)(param_1 + 0x8c);
  return in_ECX;
}


/* ==== 00412690  FUN_00412690  size=310 ==== */

undefined4 * FUN_00412690(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  *(undefined1 *)(in_ECX + 1) = *(undefined1 *)(param_1 + 1);
  FUN_00405450(param_1 + 2);
  *(undefined1 *)(in_ECX + 8) = *(undefined1 *)(param_1 + 8);
  in_ECX[9] = param_1[9];
  in_ECX[10] = param_1[10];
  in_ECX[0xb] = param_1[0xb];
  in_ECX[0xc] = param_1[0xc];
  in_ECX[0xd] = param_1[0xd];
  *(undefined1 *)(in_ECX + 0xe) = *(undefined1 *)(param_1 + 0xe);
  *(undefined1 *)((int)in_ECX + 0x39) = *(undefined1 *)((int)param_1 + 0x39);
  *(undefined1 *)((int)in_ECX + 0x3a) = *(undefined1 *)((int)param_1 + 0x3a);
  *(undefined1 *)((int)in_ECX + 0x3b) = *(undefined1 *)((int)param_1 + 0x3b);
  *(undefined1 *)(in_ECX + 0xf) = *(undefined1 *)(param_1 + 0xf);
  *(undefined1 *)((int)in_ECX + 0x3d) = *(undefined1 *)((int)param_1 + 0x3d);
  *(undefined1 *)((int)in_ECX + 0x3e) = *(undefined1 *)((int)param_1 + 0x3e);
  *(undefined1 *)((int)in_ECX + 0x3f) = *(undefined1 *)((int)param_1 + 0x3f);
  *(undefined1 *)(in_ECX + 0x10) = *(undefined1 *)(param_1 + 0x10);
  *(undefined1 *)((int)in_ECX + 0x41) = *(undefined1 *)((int)param_1 + 0x41);
  *(undefined1 *)((int)in_ECX + 0x42) = *(undefined1 *)((int)param_1 + 0x42);
  in_ECX[0x11] = param_1[0x11];
  FUN_004127d0(param_1 + 0x12);
  FUN_004127d0(param_1 + 0x15);
  return in_ECX;
}


/* ==== 004127d0  FUN_004127d0  size=163 ==== */

undefined4 FUN_004127d0(_Facet_base **param_1)

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
  FUN_00401720(&DAT_0073f53f);
  FUN_00401720(param_1);
  return local_c;
}


/* ==== 00412880  FUN_00412880  size=1452 ==== */

void FUN_00412880(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070cbfd;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_1 == 0x286) {
    FUN_0040d330();
    iVar3 = FUN_00405270();
    if (*(int *)(iVar3 + 4) != 0) {
      FUN_0040d330();
      FUN_00405270();
      img_path_loader_06();
    }
  }
  else if (param_1 == 0x287) {
    game_timing_or_delay_helper();
    ui_register_or_show_widget();
    game_timing_or_delay_helper();
    ui_activate_widget_pair();
    FUN_0040d330();
    iVar3 = FUN_00405270();
    if (*(int *)(iVar3 + 4) != 0) {
      FUN_004054a0();
      local_8 = 0;
      game_timing_or_delay_helper();
      local_8 = 0xffffffff;
      iVar3 = ui_find_widget_by_key();
      iVar3 = *(int *)(iVar3 + 0x9d0);
      FUN_00642750();
      FUN_0040d5c0();
      piVar4 = (int *)game_get_flag_object_01a70();
      if (*(int *)(iVar3 + 0x10) == *piVar4) {
        FUN_0040d330();
        FUN_00405270();
        iVar3 = game_loop_helper_cc840();
        if ((*(int *)(iVar3 + 0x9c) + -1) / 10 < 5) {
          FUN_0040d330();
          FUN_00405270();
          game_loop_helper_cc840();
        }
        FUN_005dcf50();
        piVar4 = (int *)game_get_flag_object_01a70();
        FUN_0040d330();
        FUN_00405270();
        game_loop_helper_cc840();
        FUN_005dcf50();
        piVar5 = (int *)game_get_flag_object_01a70();
        iVar3 = *piVar4;
        iVar1 = *piVar5;
        FUN_0040d330();
        FUN_00405270();
        game_loop_helper_cc840();
        FUN_005dcf50();
        piVar4 = (int *)game_get_flag_object_01a70();
        FUN_0040d330();
        iVar6 = FUN_00405270();
        iVar2 = *piVar4;
        iVar6 = *(int *)(iVar6 + 0x28);
        iVar7 = FUN_006c79e0();
        if ((iVar7 == 0) || (*(int *)(iVar7 + 8) < iVar3 * iVar1 + iVar2 * iVar6)) {
          FUN_004054a0(&DAT_0073fee0);
          FUN_00663db0(1);
        }
        else {
          FUN_0040d330();
          FUN_00405270();
          game_timing_or_delay_helper();
          iVar3 = FUN_006cdfa0();
          *(undefined4 *)(iVar3 + 0x9a4) = 0;
          *(undefined4 *)(iVar3 + 0x30c) = 2;
          FUN_0040d4e0();
          FUN_0040d4b0();
          FUN_0040d730();
          FUN_0040d4b0();
          FUN_0040d730();
          FUN_0040d4b0();
          FUN_0040d680();
          FUN_004053a0();
          FUN_0040d4b0();
          iVar3 = FUN_0040d680();
          *(undefined1 *)(iVar3 + 0x20) = 1;
          FUN_0040d4b0();
          iVar3 = FUN_0040d680();
          *(undefined1 *)(iVar3 + 0x3b) = 0;
          FUN_0040d4b0();
          FUN_0040d680();
          FUN_004053a0();
          FUN_0040d4b0();
          iVar3 = FUN_0040d680();
          *(undefined1 *)(iVar3 + 0x20) = 0x76;
          FUN_0040d4b0();
          iVar3 = FUN_0040d680();
          *(undefined1 *)(iVar3 + 0x3d) = 3;
          FUN_0040d4b0();
          iVar3 = FUN_0040d680();
          *(undefined4 *)(iVar3 + 0x24) = 2;
          FUN_0040d4b0();
          iVar3 = FUN_0040d680();
          *(undefined4 *)(iVar3 + 0x28) = 2;
          FUN_0040d4b0();
          iVar3 = FUN_0040d680();
          *(undefined1 *)(iVar3 + 0x3b) = 0;
        }
      }
    }
  }
  else if (param_1 == 0x288) {
    game_timing_or_delay_helper();
    ui_close_matching_widgets();
    game_timing_or_delay_helper();
    ui_close_matching_widgets();
    FUN_0040d330();
    FUN_0040d540();
  }
  ExceptionList = local_10;
  return;
}


/* ==== 00414340  FUN_00414340  size=1688 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00414340(undefined4 param_1,float param_2)

{
  float fVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 local_fc;
  int local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  int local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070cdd1;
  local_10 = ExceptionList;
  local_14 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_c0 = 0x23;
  FUN_0040d330();
  cVar3 = game_frame_should_continue();
  if (cVar3 == '\0') {
    local_c4 = 0x23;
    local_c8 = 0x366;
    FUN_0040d330();
    FUN_00405270();
    game_timing_or_delay_helper();
    local_ac = FUN_006cdfa0();
    if ((local_ac != 0) && (0 < *(int *)(local_ac + 0x30c))) {
      *(float *)(local_ac + 0x9a4) = (param_2 * 255.0) / 1000.0 + *(float *)(local_ac + 0x9a4);
      fVar1 = *(float *)(local_ac + 0x9a4);
      FUN_0040d4b0();
      iVar4 = FUN_0040d680();
      *(char *)(iVar4 + 0x3b) = (char)(int)fVar1;
      fVar1 = *(float *)(local_ac + 0x9a4);
      FUN_0040d4b0();
      iVar4 = FUN_0040d680();
      *(char *)(iVar4 + 0x3b) = (char)(int)fVar1;
      if (255.0 <= *(float *)(local_ac + 0x9a4)) {
        *(undefined4 *)(local_ac + 0x9a4) = 0;
        *(undefined4 *)(local_ac + 0x30c) = 0;
        FUN_004051f0();
        local_cc = 0x23;
        FUN_0040d330();
        FUN_00405270();
        iVar4 = game_loop_helper_cc840();
        if ((*(int *)(iVar4 + 0x9c) + -1) / 10 < 5) {
          local_d0 = 0x23;
          FUN_0040d330();
          FUN_00405270();
          iVar4 = game_loop_helper_cc840();
          local_b8 = (*(int *)(iVar4 + 0x9c) + -1) / 10;
        }
        else {
          local_b8 = 4;
        }
        local_d4 = 0x23;
        local_d8 = 0x23;
        local_dc = 0x23;
        FUN_005dcf50();
        piVar5 = (int *)game_get_flag_object_01a70();
        FUN_0040d330();
        FUN_00405270();
        game_loop_helper_cc840();
        FUN_005dcf50();
        piVar6 = (int *)game_get_flag_object_01a70();
        iVar4 = *piVar5;
        iVar2 = *piVar6;
        FUN_0040d330();
        FUN_00405270();
        game_loop_helper_cc840();
        FUN_005dcf50();
        piVar5 = (int *)game_get_flag_object_01a70();
        FUN_0040d330();
        iVar7 = FUN_00405270();
        local_bc = iVar4 * iVar2 + *piVar5 * *(int *)(iVar7 + 0x28);
        local_b0 = FUN_006c79e0();
        if ((local_b0 == 0) || (*(int *)(local_b0 + 8) < local_bc)) {
          local_e0 = 0x23;
          FUN_0040d330();
          FUN_0040d540();
          local_e4 = 0x366;
          game_timing_or_delay_helper();
          ui_close_matching_widgets();
        }
        else {
          local_e8 = 0x366;
          FUN_004054a0();
          local_8 = 0;
          game_timing_or_delay_helper();
          local_8 = 0xffffffff;
          local_ec = ui_find_widget_by_key();
          local_b4 = *(int *)(local_ec + 0x9d0);
          FUN_00642750();
          FUN_0040d5c0();
          piVar5 = (int *)game_get_flag_object_01a70();
          if (*(int *)(local_b4 + 0x10) != *piVar5) {
            FUN_0040d330();
            FUN_0040d540();
            local_f0 = 0x366;
            game_timing_or_delay_helper();
            ui_close_matching_widgets();
          }
          FUN_0040a9f0();
          local_8 = 1;
          game_get_player_or_session_blob();
          FUN_0067f8c0();
          local_f4 = 0x366;
          FUN_004054a0();
          local_8._0_1_ = 2;
          game_timing_or_delay_helper();
          local_8._0_1_ = 1;
          local_f8 = ui_find_widget_by_key();
          local_b0 = *(int *)(*(int *)(local_f8 + 0x9d0) + 0x9d0);
          *(undefined4 *)(local_b0 + 0x14) = 0;
          *(int *)(local_b0 + 0x28) = *(int *)(local_b0 + 0x28) + 1;
          game_get_player_or_session_blob();
          FUN_006c9280();
          net_packet_send_helper_64af0();
          local_fc = 0x366;
          FUN_004054a0(&DAT_00740194);
          local_8._0_1_ = 3;
          uVar8 = game_timing_or_delay_helper(&local_fc);
          local_8 = CONCAT31(local_8._1_3_,1);
          ui_find_widget_by_key(uVar8);
          game_get_player_or_session_blob();
          FUN_006cdee0();
          FUN_0040d330();
          FUN_0040d540();
          game_timing_or_delay_helper();
          ui_close_matching_widgets();
          FUN_004054a0();
          FUN_0049d780();
          local_8 = 0xffffffff;
          FUN_004039a0();
        }
      }
    }
  }
  ExceptionList = local_10;
  return;
}


/* ==== 00414e00  FUN_00414e00  size=10 ==== */

undefined * FUN_00414e00(void)

{
  return &DAT_007c9340;
}


/* ==== 00414e10  FUN_00414e10  size=80 ==== */

int FUN_00414e10(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  uint *puVar1;
  int local_c;
  
  puVar1 = (uint *)FUN_00414e00(param_1,param_2,param_3,param_4,param_5);
  local_c = FUN_006ec5fa(*puVar1 | 1,puVar1[1]);
  if (local_c < 0) {
    local_c = -1;
  }
  return local_c;
}


/* ==== 00414e60  FUN_00414e60  size=31 ==== */

void FUN_00414e60(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00414e10(param_1,0xffffffff,param_2,param_3,param_4);
  return;
}


/* ==== 00414e80  FUN_00414e80  size=51 ==== */

undefined4 FUN_00414e80(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00414e60(param_1,param_2,0,&stack0x0000000c);
  return uVar1;
}


/* ==== 00414ec0  FUN_00414ec0  size=7 ==== */

undefined1 FUN_00414ec0(void)

{
  return 0;
}


/* ==== 00414ed0  FUN_00414ed0  size=57 ==== */

float10 FUN_00414ed0(float param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_006f5c30((double)param_1);
  return (float10)(float)fVar1;
}


/* ==== 00414f10  FUN_00414f10  size=27 ==== */

int FUN_00414f10(uint param_1)

{
  int iVar1;
  
  iVar1 = 0x1f;
  if ((param_1 | 1) != 0) {
    for (; (param_1 | 1) >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  return iVar1;
}


/* ==== 00414f30  FUN_00414f30  size=23 ==== */

int FUN_00414f30(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00414f10(param_1 + -1);
  return iVar1 + 1;
}


/* ==== 00414f50  FUN_00414f50  size=111 ==== */

int FUN_00414f50(void)

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
  *(undefined4 *)(in_ECX + 0x18) = 0;
  *(undefined4 *)(in_ECX + 0x1c) = 0;
  ExceptionList = local_10;
  return in_ECX;
}


/* ==== 00414fc0  FUN_00414fc0  size=218 ==== */

/* WARNING: Removing unreachable block (ram,0x00415073) */

void FUN_00414fc0(void)

{
  undefined4 *in_ECX;
  
  *(undefined1 *)(in_ECX + 1) = 1;
  FUN_004053a0(&DAT_007793b1);
  *(undefined1 *)(in_ECX + 8) = 0;
  in_ECX[10] = 0;
  in_ECX[9] = 0;
  in_ECX[0xd] = 0;
  in_ECX[0xc] = 0x3f800000;
  in_ECX[0xb] = 0x3f800000;
  *(undefined1 *)((int)in_ECX + 0x3b) = 0xff;
  *(undefined1 *)((int)in_ECX + 0x3a) = 0xff;
  *(undefined1 *)((int)in_ECX + 0x39) = 0xff;
  *(undefined1 *)(in_ECX + 0xe) = 0xff;
  *(undefined1 *)((int)in_ECX + 0x3f) = 0xff;
  *(undefined1 *)(in_ECX + 0x10) = 0xff;
  *(undefined1 *)((int)in_ECX + 0x41) = 0xff;
  *(undefined1 *)((int)in_ECX + 0x42) = 0;
  in_ECX[0x11] = 0;
  *(undefined1 *)((int)in_ECX + 0x3d) = 0;
  *(undefined1 *)(in_ECX + 0xf) = 0;
  *in_ECX = 0;
  *(undefined1 *)((int)in_ECX + 0x3e) = 0;
  return;
}


/* ==== 004150a0  FUN_004150a0  size=642 ==== */

void FUN_004150a0(void)

{
  undefined1 *in_ECX;
  
  *in_ECX = 1;
  *(undefined4 *)(in_ECX + 0xc0) = 0;
  *(undefined4 *)(in_ECX + 0x1c) = 0xffffffff;
  in_ECX[0x28] = 0;
  *(undefined4 *)(in_ECX + 0x20) = 0xffffffff;
  in_ECX[0x24] = 1;
  in_ECX[0x25] = 1;
  in_ECX[0x26] = 0;
  in_ECX[0x27] = 0;
  *(undefined4 *)(in_ECX + 0x114) = 0;
  *(undefined4 *)(in_ECX + 0x118) = 0;
  in_ECX[0x29] = 0;
  *(undefined4 *)(in_ECX + 0x50) = 1;
  *(undefined4 *)(in_ECX + 0x4c) = 1;
  in_ECX[0x54] = 0;
  in_ECX[0x60] = 0;
  *(undefined4 *)(in_ECX + 0x7c) = 0;
  *(undefined4 *)(in_ECX + 0x58) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x5c) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x30) = 0xff;
  *(undefined4 *)(in_ECX + 0x98) = 0;
  *(undefined4 *)(in_ECX + 0x90) = 0;
  *(undefined4 *)(in_ECX + 0x94) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x84) = 1;
  *(undefined4 *)(in_ECX + 0x8c) = 1;
  *(undefined4 *)(in_ECX + 0x88) = 0;
  *(undefined4 *)(in_ECX + 0x48) = 0;
  *(undefined4 *)(in_ECX + 0x44) = 0;
  *(undefined4 *)(in_ECX + 0x40) = 0;
  FUN_004053a0(&DAT_007793b1);
  FUN_0040d6d0();
  *(undefined4 *)(in_ECX + 0xa0) = 0;
  *(undefined4 *)(in_ECX + 0xd0) = 0;
  in_ECX[0xbc] = 0;
  *(undefined4 *)(in_ECX + 0xf4) = 0;
  *(undefined4 *)(in_ECX + 0xf0) = 0;
  *(undefined4 *)(in_ECX + 0xec) = 0;
  *(undefined4 *)(in_ECX + 0x130) = 0;
  in_ECX[0xe0] = 0;
  *(undefined4 *)(in_ECX + 0xe4) = 0xffffffff;
  in_ECX[0xe9] = 0;
  *(undefined4 *)(in_ECX + 0x11c) = 0;
  *(undefined4 *)(in_ECX + 0x120) = 0;
  *(undefined4 *)(in_ECX + 0xfc) = 0;
  *(undefined4 *)(in_ECX + 0xf8) = 0;
  *(undefined4 *)(in_ECX + 0x104) = 0;
  *(undefined4 *)(in_ECX + 0x100) = 0;
  *(undefined4 *)(in_ECX + 0x10c) = 0;
  *(undefined4 *)(in_ECX + 0x108) = 0;
  in_ECX[0xe8] = 0;
  *(undefined4 *)(in_ECX + 0x110) = 3;
  in_ECX[0x80] = 0;
  in_ECX[0x55] = 0;
  in_ECX[0x9c] = 0;
  FUN_004053a0(&DAT_007793b1);
  *(undefined4 *)(in_ECX + 0x2c) = 0;
  in_ECX[0xea] = 0;
  return;
}


/* ==== 00415330  CCmdUI  size=113 ==== */

/* Library Function - Single Match
    public: __thiscall CCmdUI::CCmdUI(void)
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2005 Debug, Visual Studio 2008 Debug, Visual
   Studio 2010 Debug */

CCmdUI * __thiscall CCmdUI::CCmdUI(CCmdUI *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  return this;
}


/* ==== 004153b0  FUN_004153b0  size=92 ==== */

undefined4 * FUN_004153b0(void)

{
  undefined4 *in_ECX;
  
  FUN_0040ac90();
  FUN_00426e80();
  FUN_00426e80();
  in_ECX[3] = 0;
  in_ECX[2] = 0;
  in_ECX[1] = 0;
  *in_ECX = 0;
  return in_ECX;
}


/* ==== 00415410  FUN_00415410  size=51 ==== */

void FUN_00415410(void)

{
  FUN_00427480();
  FUN_00427360();
  FUN_00403a10();
  return;
}


/* ==== 00415450  FUN_00415450  size=570 ==== */

void FUN_00415450(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  CDocObjectServer *pCVar4;
  CDocObjectServer *local_24;
  int *local_20;
  int local_1c;
  int local_18;
  int *local_14;
  int local_10;
  
  local_10 = game_loop_helper_018d0();
  iVar1 = game_loop_helper_018b0();
  for (; local_10 != iVar1; local_10 = local_10 + 0x20) {
    local_14 = (int *)game_loop_helper_018d0();
    piVar2 = (int *)game_loop_helper_018b0();
    for (; local_14 != piVar2; local_14 = local_14 + 2) {
      if (*local_14 != 0) {
        (**(code **)(*(int *)*local_14 + 0x48))(*local_14);
        (**(code **)(*(int *)*local_14 + 8))(*local_14);
        *local_14 = 0;
      }
    }
    FUN_0040d5f0();
  }
  FUN_00426fa0();
  local_18 = game_loop_helper_018d0();
  iVar1 = game_loop_helper_018b0();
  for (; local_18 != iVar1; local_18 = local_18 + 0x408) {
    local_1c = game_loop_helper_018d0();
    iVar3 = game_loop_helper_018b0();
    for (; local_1c != iVar3; local_1c = local_1c + 0x20) {
      local_20 = (int *)game_loop_helper_018d0();
      piVar2 = (int *)game_loop_helper_018b0();
      for (; local_20 != piVar2; local_20 = local_20 + 2) {
        if (*local_20 != 0) {
          (**(code **)(*(int *)*local_20 + 0x48))(*local_20);
          (**(code **)(*(int *)*local_20 + 8))(*local_20);
          *local_20 = 0;
        }
      }
      FUN_0040d5f0();
    }
    FUN_00426fa0();
    local_24 = (CDocObjectServer *)game_loop_helper_018d0();
    pCVar4 = (CDocObjectServer *)game_loop_helper_018b0();
    for (; local_24 != pCVar4; local_24 = local_24 + 0x90) {
      CDocObjectServer::ReleaseDocSite(local_24);
    }
    FUN_00427260();
  }
  return;
}


/* ==== 00415690  FUN_00415690  size=2537 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00415690(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined **ppuVar4;
  undefined *apuStack_264 [2];
  int iStack_25c;
  undefined4 uStack_250;
  undefined4 *puStack_24c;
  undefined4 local_1e0;
  undefined4 local_1dc;
  int local_1d8;
  int local_1d4;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  int local_1c4;
  int local_1c0;
  undefined4 local_1bc;
  int local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  int local_1a8;
  int local_1a4;
  int local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  int local_194;
  int local_190;
  function<void___cdecl(void)> local_12c [24];
  undefined1 local_114 [256];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070ce82;
  local_10 = ExceptionList;
  local_14 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_1b0 = 0x45;
  game_timing_or_delay_helper();
  ui_close_matching_widgets();
  local_1a4 = 0x14;
  local_1ac = 0x12;
  apuStack_264[0] = &DAT_007402fc;
  FUN_004054a0();
  apuStack_264[0] = (undefined *)0x415725;
  d3d9_create_texture_004b7450();
  local_1b4 = 0x45;
  game_timing_or_delay_helper();
  puStack_24c = (undefined4 *)0x0;
  FUN_004054a0();
  local_8 = 0;
  FUN_004054a0();
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_004054a0(&DAT_00740314);
  local_8 = 0xffffffff;
  local_1b8 = FUN_00661cc0(0,0);
  local_1a8 = *(int *)(local_1b8 + 0x5c);
  *(undefined4 *)(local_1b8 + 0x98c) = 0x45;
  *(undefined1 *)(local_1b8 + 0x50) = 1;
  local_194 = local_1b8;
  FUN_004053a0();
  *(int *)(local_194 + 0xa40) = local_1a8 / 2;
  *(undefined4 *)(local_194 + 0xa44) = 0x18;
  *(undefined4 *)(local_194 + 0xa64) = 1;
  local_1bc = 0x45;
  game_timing_or_delay_helper();
  puStack_24c = (undefined4 *)0x5a;
  FUN_004054a0();
  local_8 = 2;
  FUN_004054a0();
  local_8 = CONCAT31(local_8._1_3_,3);
  FUN_004054a0(&DAT_00740350);
  local_8 = 0xffffffff;
  local_1c4 = FUN_00661cc0(0,0);
  *(undefined4 *)(local_1c4 + 0x98c) = 0x45;
  *(int *)(local_1c4 + 0xc) = local_194;
  local_1c0 = local_1c4;
  local_190 = local_1c4;
  FUN_0040d490();
  iVar1 = game_loop_helper_caba0();
  if (iVar1 == 0x71) {
    game_loop_helper_cc840();
    FUN_0040d680();
    FUN_0040d840();
    iVar1 = game_loop_helper_cc840();
    iVar2 = FUN_0040d680();
    *(undefined1 *)(iVar2 + 0x20) = *(undefined1 *)(iVar1 + 0xe8);
    game_loop_helper_cc840();
    FUN_0040d840();
    *(int *)(local_190 + 0xa40) =
         ((0x140 - *(int *)(local_190 + 0x54)) - (local_1a4 * 0xc + 0xc) / 2) + local_1a8 / 2;
    *(undefined4 *)(local_190 + 0xa44) = 9;
    *(undefined4 *)(local_190 + 0xa64) = 1;
    local_198 = 0xffffffff;
    iVar1 = game_loop_helper_cc840();
    if (*(int *)(iVar1 + 0xb8) == 1) {
      local_198 = 0xff68d5ed;
    }
    else {
      iVar1 = game_loop_helper_cc840();
      if (*(int *)(iVar1 + 0xb8) == 2) {
        local_198 = 0xffb36bff;
      }
      else {
        iVar1 = game_loop_helper_cc840();
        if (*(int *)(iVar1 + 0xb8) == 3) {
          local_198 = 0xffff00f0;
        }
        else {
          iVar1 = game_loop_helper_cc840();
          if (*(int *)(iVar1 + 0xb8) == 4) {
            local_198 = 0xffffb100;
          }
        }
      }
    }
    *(undefined4 *)(local_190 + 0xa48) = local_198;
  }
  else {
    iVar1 = game_loop_helper_caba0();
    if (iVar1 == 0x8e) {
      game_loop_helper_cd6d0();
      FUN_0040d680();
      FUN_0040d840();
      iVar1 = game_loop_helper_cd6d0();
      iVar2 = FUN_0040d680();
      *(undefined1 *)(iVar2 + 0x20) = *(undefined1 *)(iVar1 + 200);
      puStack_24c = (undefined4 *)0x415b8e;
      _memset(local_114,0,0x100);
      if (*(int *)(param_1 + 8) < 2) {
        game_loop_helper_cd6d0();
        npk_get_relative_res_path();
        puStack_24c = (undefined4 *)0x415bfc;
        FUN_00414e80();
      }
      else {
        game_loop_helper_cd6d0();
        npk_get_relative_res_path();
        puStack_24c = (undefined4 *)local_114;
        uStack_250 = 0x415bcc;
        FUN_00414e80();
      }
      local_1c8 = FUN_004054a0();
      FUN_004053e0();
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_12c);
      *(int *)(local_190 + 0xa40) =
           ((0x140 - *(int *)(local_190 + 0x54)) - (local_1a4 * 0xc + 0xc) / 2) + local_1a8 / 2;
      *(undefined4 *)(local_190 + 0xa44) = 9;
      *(undefined4 *)(local_190 + 0xa64) = 1;
      local_19c = 0xffffffff;
      iVar1 = game_loop_helper_cd6d0();
      if (*(int *)(iVar1 + 0x94) == 1) {
        local_19c = 0xff68d5ed;
      }
      else {
        iVar1 = game_loop_helper_cd6d0();
        if (*(int *)(iVar1 + 0x94) == 2) {
          local_19c = 0xffb36bff;
        }
        else {
          iVar1 = game_loop_helper_cd6d0();
          if (*(int *)(iVar1 + 0x94) == 3) {
            local_19c = 0xffff00f0;
          }
          else {
            iVar1 = game_loop_helper_cd6d0();
            if (*(int *)(iVar1 + 0x94) == 4) {
              local_19c = 0xffffb100;
            }
          }
        }
      }
      *(undefined4 *)(local_190 + 0xa48) = local_19c;
    }
  }
  FUN_0040d680();
  iStack_25c = 0;
  apuStack_264[1] = (undefined *)0x415d82;
  iStack_25c = FUN_0040d680();
  iStack_25c = iStack_25c + 8;
  apuStack_264[1] = (undefined *)0x415d8d;
  FUN_00405520();
  iStack_25c = 0x415d98;
  local_1cc = FUN_004b8ca0();
  FUN_0040aa90();
  local_8 = 4;
  *(undefined1 *)(local_190 + 0x5a8) = 1;
  FUN_00427660();
  FUN_0040d680();
  FUN_004053a0();
  iVar1 = FUN_0040d680();
  *(undefined1 *)(iVar1 + 0x20) = 0x5a;
  iVar1 = FUN_0040d680();
  *(undefined4 *)(iVar1 + 0x24) = 0x1c;
  iVar1 = FUN_0040d680();
  *(undefined4 *)(iVar1 + 0x28) = 0xffffffff;
  iVar1 = FUN_0040d680();
  *(undefined1 *)(iVar1 + 0x3d) = 0;
  iVar1 = FUN_0040d680();
  *(undefined1 *)(iVar1 + 0x3c) = 1;
  iVar1 = FUN_0040d680();
  *(undefined1 *)(iVar1 + 0x3b) = 0x57;
  *(undefined4 *)(local_190 + 0x638) = 1;
  *(undefined4 *)(local_190 + 0x630) = 0;
  local_1d0 = 0x45;
  game_timing_or_delay_helper();
  puStack_24c = (undefined4 *)0x9;
  FUN_004054a0();
  local_8._0_1_ = 5;
  FUN_004054a0();
  local_8._0_1_ = 6;
  FUN_004054a0(&DAT_007403a8);
  local_8 = CONCAT31(local_8._1_3_,4);
  local_1d4 = FUN_00661cc0(0,2);
  *(undefined4 *)(local_1d4 + 0x98c) = 0x45;
  *(undefined4 *)(local_1d4 + 0x984) = 10;
  local_1a0 = local_1d4;
  FUN_004053a0();
  *(int *)(local_1a0 + 0xc) = local_194;
  local_1d8 = local_1a0;
  FUN_0040d490();
  local_1dc = 0x45;
  local_1e0 = 0x45;
  puStack_24c = (undefined4 *)0x415ff1;
  game_timing_or_delay_helper();
  FUN_00402170();
  puStack_24c = &local_1e0;
  uStack_250 = 0x416013;
  game_timing_or_delay_helper();
  puStack_24c = (undefined4 *)0x41601a;
  FUN_004021b0();
  puStack_24c = (undefined4 *)0x416022;
  FUN_00405d30();
  puVar3 = &DAT_007ca70c;
  ppuVar4 = apuStack_264;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *ppuVar4 = (undefined *)*puVar3;
    puVar3 = puVar3 + 1;
    ppuVar4 = ppuVar4 + 1;
  }
  FUN_0065e180();
  local_8 = 0xffffffff;
  FUN_00407a80();
  ExceptionList = local_10;
  return;
}


/* ==== 00416080  FUN_00416080  size=585 ==== */

undefined4 FUN_00416080(void)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_00427c60(&stack0x00000004,&DAT_007403c0);
  if (cVar1 == '\0') {
    cVar1 = FUN_00427c60(&stack0x00000004,&DAT_007403d0);
    if (cVar1 == '\0') {
      cVar1 = FUN_00427c60(&stack0x00000004,&DAT_007403e0);
      if (cVar1 == '\0') {
        cVar1 = FUN_00427c60(&stack0x00000004,&DAT_007403f0);
        if (cVar1 == '\0') {
          cVar1 = FUN_00427c60(&stack0x00000004,&DAT_00740400);
          if (cVar1 == '\0') {
            cVar1 = FUN_00427c60(&stack0x00000004,&DAT_00740410);
            if (cVar1 == '\0') {
              cVar1 = FUN_00427c60(&stack0x00000004,&DAT_00740420);
              if (cVar1 == '\0') {
                cVar1 = FUN_00427c60(&stack0x00000004,&DAT_00740430);
                if (cVar1 == '\0') {
                  cVar1 = FUN_00427c60(&stack0x00000004,&DAT_0074043c);
                  if (cVar1 == '\0') {
                    cVar1 = FUN_00427c60(&stack0x00000004,&DAT_0074044c);
                    if (cVar1 == '\0') {
                      cVar1 = FUN_00427c60(&stack0x00000004,&DAT_00740458);
                      if (cVar1 == '\0') {
                        cVar1 = FUN_00427c60(&stack0x00000004,&DAT_00740464);
                        if (cVar1 == '\0') {
                          std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                                    ((function<void___cdecl(void)> *)&stack0x00000004);
                          uVar2 = 0xffffffff;
                        }
                        else {
                          std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                                    ((function<void___cdecl(void)> *)&stack0x00000004);
                          uVar2 = 0x2334;
                        }
                      }
                      else {
                        std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                                  ((function<void___cdecl(void)> *)&stack0x00000004);
                        uVar2 = 0x2333;
                      }
                    }
                    else {
                      std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                                ((function<void___cdecl(void)> *)&stack0x00000004);
                      uVar2 = 0x2332;
                    }
                  }
                  else {
                    std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                              ((function<void___cdecl(void)> *)&stack0x00000004);
                    uVar2 = 0x2330;
                  }
                }
                else {
                  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                            ((function<void___cdecl(void)> *)&stack0x00000004);
                  uVar2 = 0x232f;
                }
              }
              else {
                std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                          ((function<void___cdecl(void)> *)&stack0x00000004);
                uVar2 = 0x232e;
              }
            }
            else {
              std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                        ((function<void___cdecl(void)> *)&stack0x00000004);
              uVar2 = 0x232d;
            }
          }
          else {
            std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                      ((function<void___cdecl(void)> *)&stack0x00000004);
            uVar2 = 0x232c;
          }
        }
        else {
          std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                    ((function<void___cdecl(void)> *)&stack0x00000004);
          uVar2 = 0x232b;
        }
      }
      else {
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                  ((function<void___cdecl(void)> *)&stack0x00000004);
        uVar2 = 0x232a;
      }
    }
    else {
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                ((function<void___cdecl(void)> *)&stack0x00000004);
      uVar2 = 0x2329;
    }
  }
  else {
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>
              ((function<void___cdecl(void)> *)&stack0x00000004);
    uVar2 = 9000;
  }
  return uVar2;
}


/* ==== 00416310  FUN_00416310  size=585 ==== */

undefined4 FUN_00416310(void)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_00427c60(&stack0x00000004,&DAT_00740470);
  if (cVar1 == '\0') {
    cVar1 = FUN_00427c60(&stack0x00000004,&DAT_00740480);
    if (cVar1 == '\0') {
      cVar1 = FUN_00427c60(&stack0x00000004,&DAT_00740490);
      if (cVar1 == '\0') {
        cVar1 = FUN_00427c60(&stack0x00000004,&DAT_007404a0);
        if (cVar1 == '\0') {
          cVar1 = FUN_00427c60(&stack0x00000004,&DAT_007404b0);
          if (cVar1 == '\0') {
            cVar1 = FUN_00427c60(&stack0x00000004,&DAT_007404c0);
            if (cVar1 == '\0') {
              cVar1 = FUN_00427c60(&stack0x00000004,&DAT_007404d0);
              if (cVar1 == '\0') {
                cVar1 = FUN_00427c60(&stack0x00000004,&DAT_007404e0);
                if (cVar1 == '\0') {
                  cVar1 = FUN_00427c60(&stack0x00000004,&DAT_007404ec);
                  if (cVar1 == '\0') {
                    cVar1 = FUN_00427c60(&stack0x00000004,&DAT_007404fc);
                    if (cVar1 == '\0') {
                      cVar1 = FUN_00427c60(&stack0x00000004,&DAT_00740508);
                      if (cVar1 == '\0') {
                        cVar1 = FUN_00427c60(&stack0x00000004,&DAT_00740514);
                        if (cVar1 == '\0') {
                          std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                                    ((function<void___cdecl(void)> *)&stack0x00000004);
                          uVar2 = 0xffffffff;
                        }
                        else {
                          std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                                    ((function<void___cdecl(void)> *)&stack0x00000004);
                          uVar2 = 0x271d;
                        }
                      }
                      else {
                        std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                                  ((function<void___cdecl(void)> *)&stack0x00000004);
                        uVar2 = 0x271c;
                      }
                    }
                    else {
                      std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                                ((function<void___cdecl(void)> *)&stack0x00000004);
                      uVar2 = 0x271b;
                    }
                  }
                  else {
                    std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                              ((function<void___cdecl(void)> *)&stack0x00000004);
                    uVar2 = 0x277c;
                  }
                }
                else {
                  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                            ((function<void___cdecl(void)> *)&stack0x00000004);
                  uVar2 = 0x277b;
                }
              }
              else {
                std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                          ((function<void___cdecl(void)> *)&stack0x00000004);
                uVar2 = 0x277a;
              }
            }
            else {
              std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                        ((function<void___cdecl(void)> *)&stack0x00000004);
              uVar2 = 0x2779;
            }
          }
          else {
            std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                      ((function<void___cdecl(void)> *)&stack0x00000004);
            uVar2 = 0x2778;
          }
        }
        else {
          std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                    ((function<void___cdecl(void)> *)&stack0x00000004);
          uVar2 = 0x2777;
        }
      }
      else {
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                  ((function<void___cdecl(void)> *)&stack0x00000004);
        uVar2 = 0x2776;
      }
    }
    else {
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                ((function<void___cdecl(void)> *)&stack0x00000004);
      uVar2 = 0x2775;
    }
  }
  else {
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>
              ((function<void___cdecl(void)> *)&stack0x00000004);
    uVar2 = 0x2774;
  }
  return uVar2;
}


/* ==== 00417730  FUN_00417730  size=2996 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00417730(char param_1)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int in_stack_00000024;
  undefined4 local_370;
  undefined4 local_36c;
  undefined4 local_368;
  undefined4 local_364;
  undefined4 local_360;
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
  undefined4 local_304;
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
  uint local_2b8;
  uint local_2b4;
  char local_2ad;
  int local_2ac;
  uint local_2a8;
  char local_2a1;
  char local_2a0;
  char local_29f;
  char local_29e;
  undefined1 local_29d;
  undefined1 local_29c;
  undefined1 local_29b;
  undefined1 local_29a;
  char local_299;
  char local_298;
  char local_297;
  char local_296;
  char local_295;
  int local_294;
  int local_290;
  int local_28c;
  uint local_288;
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
  
  puStack_c = &LAB_0070d171;
  local_10 = ExceptionList;
  uVar1 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8._0_1_ = 0;
  local_8._1_3_ = 0;
  local_14 = uVar1;
  if (param_1 == '\0') {
    local_2b8 = 0;
    while( true ) {
      local_344 = 0x5e;
      game_timing_or_delay_helper(&local_344);
      uVar1 = FUN_00401a90();
      if (uVar1 <= local_2b8) break;
      local_2bc = 0x5e;
      uVar1 = local_2b8;
      game_timing_or_delay_helper(&local_2bc);
      piVar3 = (int *)game_get_flag_object_01a70(uVar1);
      local_294 = *piVar3;
      local_2d0 = FUN_004054a0(&DAT_00740838);
      local_8._0_1_ = 10;
      local_2c0 = local_2d0;
      local_2c8 = FUN_004054a0(&DAT_00740844);
      local_8._0_1_ = 0xb;
      local_2c4 = local_2c8;
      local_2d4 = FUN_0040e3d0(local_5c,local_2c8,&stack0x00000008);
      local_8._0_1_ = 0xc;
      local_2cc = local_2d4;
      local_2d8 = FUN_00405cf0(local_134,local_2d4,local_2d0);
      local_29e = destroy<>(local_294 + 0x1c,local_2d8);
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_134);
      local_8._0_1_ = 0xb;
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_5c);
      local_8._0_1_ = 10;
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_44);
      local_8._0_1_ = 0;
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_2c);
      if (local_29e == '\0') {
        local_2ec = FUN_004054a0(&DAT_0074084c);
        local_8._0_1_ = 0xd;
        local_2dc = local_2ec;
        local_2e4 = FUN_004054a0(&DAT_00740854);
        local_8._0_1_ = 0xe;
        local_2e0 = local_2e4;
        local_2f0 = FUN_0040e3d0(local_26c,local_2e4,&stack0x00000008);
        local_8._0_1_ = 0xf;
        local_2e8 = local_2f0;
        local_2f4 = FUN_00405cf0(local_284,local_2f0,local_2ec);
        local_29f = destroy<>(local_294 + 0x1c,local_2f4);
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_284);
        local_8._0_1_ = 0xe;
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_26c);
        local_8._0_1_ = 0xd;
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_254);
        local_8._0_1_ = 0;
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_23c);
        if (local_29f == '\0') {
          local_2f8 = FUN_00427d20(local_224,&stack0x00000008,&DAT_0074085c);
          local_2ad = destroy<>(local_294 + 0x1c,local_2f8);
          std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_224);
          if (local_2ad == '\0') {
            local_2fc = FUN_00427d20(local_20c,&stack0x00000008,&DAT_00740868);
            local_2a0 = destroy<>(local_294 + 0x1c,local_2fc);
            std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_20c);
            if (local_2a0 == '\0') {
              local_304 = FUN_004054a0(&DAT_00740874);
              local_8._0_1_ = 0x10;
              local_300 = local_304;
              local_308 = FUN_00427c80(local_1f4,&stack0x00000008,local_304);
              local_2a1 = destroy<>(local_294 + 0x1c,local_308);
              std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_1f4);
              local_8._0_1_ = 0;
              std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_1dc);
              if (local_2a1 != '\0') {
                *(undefined1 *)(local_294 + 0x51) = 0;
              }
            }
            else {
              *(undefined1 *)(local_294 + 0x51) = 0;
            }
          }
          else {
            *(undefined1 *)(local_294 + 0x51) = 0;
          }
        }
        else {
          *(undefined1 *)(local_294 + 0x51) = 1;
        }
      }
      else {
        *(undefined1 *)(local_294 + 0x51) = 0;
      }
      local_2b8 = local_2b8 + 1;
    }
    local_2a8 = 0;
    while( true ) {
      FUN_00426f10(&stack0x00000020);
      uVar1 = FUN_00401a90();
      if (uVar1 >> 2 <= local_2a8) break;
      iVar4 = local_2a8 << 2;
      FUN_00426f10(&stack0x00000020);
      piVar3 = (int *)game_get_flag_object_01a70(iVar4);
      local_2ac = *piVar3;
      *(undefined1 *)(local_2ac + 0x51) = 0;
      iVar4 = local_2a8 * 4 + 1;
      FUN_00426f10(&stack0x00000020);
      piVar3 = (int *)game_get_flag_object_01a70(iVar4);
      local_2ac = *piVar3;
      *(undefined1 *)(local_2ac + 0x51) = 0;
      iVar4 = local_2a8 * 4 + 2;
      FUN_00426f10(&stack0x00000020);
      piVar3 = (int *)game_get_flag_object_01a70(iVar4);
      local_2ac = *piVar3;
      *(undefined1 *)(local_2ac + 0x51) = 0;
      iVar4 = local_2a8 * 4 + 3;
      FUN_00426f10(&stack0x00000020);
      piVar3 = (int *)game_get_flag_object_01a70(iVar4);
      local_2ac = *piVar3;
      *(undefined1 *)(local_2ac + 0x51) = 0;
      local_2a8 = local_2a8 + 1;
    }
  }
  else {
    local_2b4 = 0;
    while( true ) {
      local_370 = 0x5e;
      game_timing_or_delay_helper(&local_370);
      uVar2 = FUN_00401a90(uVar1);
      if (uVar2 <= local_2b4) break;
      local_36c = 0x5e;
      uVar2 = local_2b4;
      game_timing_or_delay_helper(&local_36c);
      piVar3 = (int *)game_get_flag_object_01a70(uVar2);
      local_290 = *piVar3;
      local_368 = FUN_004054a0(&DAT_007407f0);
      local_8._0_1_ = 1;
      local_358 = local_368;
      local_364 = FUN_004054a0(&DAT_007407fc);
      local_8._0_1_ = 2;
      local_360 = local_364;
      local_35c = FUN_0040e3d0(local_1ac,local_364,&stack0x00000008);
      local_8._0_1_ = 3;
      local_354 = local_35c;
      local_350 = FUN_00405cf0(local_1c4,local_35c,local_358);
      local_295 = destroy<>(local_290 + 0x1c,local_350);
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_1c4);
      local_8._0_1_ = 2;
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_1ac);
      local_8._0_1_ = 1;
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_194);
      local_8._0_1_ = 0;
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_17c);
      if (local_295 == '\0') {
        local_34c = FUN_004054a0(&DAT_00740804);
        local_8._0_1_ = 4;
        local_338 = local_34c;
        local_348 = FUN_004054a0(&DAT_0074080c);
        local_8._0_1_ = 5;
        local_340 = local_348;
        local_33c = FUN_0040e3d0(local_14c,local_348,&stack0x00000008);
        local_8._0_1_ = 6;
        local_334 = local_33c;
        local_330 = FUN_00405cf0(local_164,local_33c,local_338);
        local_296 = destroy<>(local_290 + 0x1c,local_330);
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_164);
        local_8._0_1_ = 5;
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_14c);
        local_8._0_1_ = 4;
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_11c);
        local_8._0_1_ = 0;
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_104);
        if (local_296 == '\0') {
          local_32c = FUN_004054a0(&DAT_00740814);
          local_8._0_1_ = 7;
          local_328 = local_32c;
          local_324 = FUN_00427c80(local_ec,&stack0x00000008,local_32c);
          local_297 = destroy<>(local_290 + 0x1c,local_324);
          std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_ec);
          local_8._0_1_ = 0;
          std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_d4);
          if (local_297 == '\0') {
            local_320 = FUN_004054a0(&DAT_00740820);
            local_8._0_1_ = 8;
            local_31c = local_320;
            local_318 = FUN_00427c80(local_bc,&stack0x00000008,local_320);
            local_298 = destroy<>(local_290 + 0x1c,local_318);
            std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_bc);
            local_8._0_1_ = 0;
            std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_a4);
            if (local_298 == '\0') {
              local_314 = FUN_004054a0(&DAT_0074082c);
              local_8._0_1_ = 9;
              local_310 = local_314;
              local_30c = FUN_00427c80(local_8c,&stack0x00000008,local_314);
              local_299 = destroy<>(local_290 + 0x1c,local_30c);
              std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_8c);
              local_8._0_1_ = 0;
              std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_74);
              if (local_299 != '\0') {
                *(undefined1 *)(local_290 + 0x51) = 1;
              }
            }
            else {
              *(undefined1 *)(local_290 + 0x51) = 1;
            }
          }
          else {
            *(undefined1 *)(local_290 + 0x51) = 1;
          }
        }
        else {
          *(undefined1 *)(local_290 + 0x51) = 0;
        }
      }
      else {
        *(undefined1 *)(local_290 + 0x51) = 1;
      }
      local_2b4 = local_2b4 + 1;
    }
    local_288 = 0;
    while( true ) {
      FUN_00426f10(&stack0x00000020);
      uVar1 = FUN_00401a90();
      if (uVar1 >> 2 <= local_288) break;
      iVar4 = local_288 << 2;
      FUN_00426f10(&stack0x00000020);
      piVar3 = (int *)game_get_flag_object_01a70(iVar4);
      local_28c = *piVar3;
      if ((local_288 < (uint)((in_stack_00000024 + -1) * 6)) ||
         ((uint)(in_stack_00000024 * 6) <= local_288)) {
        *(undefined1 *)(local_28c + 0x51) = 0;
        local_29a = 0;
      }
      else {
        *(undefined1 *)(local_28c + 0x51) = 1;
        local_29a = 1;
      }
      iVar4 = local_288 * 4 + 1;
      FUN_00426f10(&stack0x00000020);
      piVar3 = (int *)game_get_flag_object_01a70(iVar4);
      local_28c = *piVar3;
      if ((local_288 < (uint)((in_stack_00000024 + -1) * 6)) ||
         ((uint)(in_stack_00000024 * 6) <= local_288)) {
        *(undefined1 *)(local_28c + 0x51) = 0;
        local_29b = 0;
      }
      else {
        *(undefined1 *)(local_28c + 0x51) = 1;
        local_29b = 1;
      }
      iVar4 = local_288 * 4 + 2;
      FUN_00426f10(&stack0x00000020);
      piVar3 = (int *)game_get_flag_object_01a70(iVar4);
      local_28c = *piVar3;
      if ((local_288 < (uint)((in_stack_00000024 + -1) * 6)) ||
         ((uint)(in_stack_00000024 * 6) <= local_288)) {
        *(undefined1 *)(local_28c + 0x51) = 0;
        local_29c = 0;
      }
      else {
        *(undefined1 *)(local_28c + 0x51) = 1;
        local_29c = 1;
      }
      iVar4 = local_288 * 4 + 3;
      FUN_00426f10(&stack0x00000020);
      piVar3 = (int *)game_get_flag_object_01a70(iVar4);
      local_28c = *piVar3;
      if ((local_288 < (uint)((in_stack_00000024 + -1) * 6)) ||
         ((uint)(in_stack_00000024 * 6) <= local_288)) {
        *(undefined1 *)(local_28c + 0x51) = 0;
        local_29d = 0;
      }
      else {
        *(undefined1 *)(local_28c + 0x51) = 1;
        local_29d = 1;
      }
      local_288 = local_288 + 1;
    }
  }
  local_8 = 0xffffffff;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)&stack0x00000008);
  ExceptionList = local_10;
  return;
}


/* ==== 004192b0  FUN_004192b0  size=3531 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_004192b0(char param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint local_36c;
  uint local_368;
  int local_364;
  uint local_360;
  uint local_35c;
  int local_358;
  int local_354;
  int local_34c;
  int local_344;
  undefined1 local_330 [220];
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
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070d493;
  local_10 = ExceptionList;
  local_14 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if ((*(int *)(*(int *)ThreadLocalStoragePointer + 4) < DAT_007ca8ac) &&
     (FUN_006e4c3b(), DAT_007ca8ac == -1)) {
    local_8 = 0;
    FUN_004054a0();
    local_8._0_1_ = 1;
    FUN_004054a0();
    local_8._0_1_ = 2;
    FUN_004054a0();
    local_8._0_1_ = 3;
    FUN_004054a0();
    local_8._0_1_ = 4;
    FUN_004054a0();
    local_8._0_1_ = 5;
    FUN_004054a0();
    local_8._0_1_ = 6;
    FUN_004054a0();
    local_8._0_1_ = 7;
    FUN_004054a0();
    local_8._0_1_ = 8;
    FUN_004054a0();
    local_8._0_1_ = 9;
    allocator<>();
    FUN_00401880();
    FUN_004276c0();
    local_8 = (uint)local_8._1_3_ << 8;
    _eh_vector_destructor_iterator_
              (local_330,0x18,9,std::function<void___cdecl(void)>::~function<void___cdecl(void)>);
    FUN_006e4fef();
    local_8 = 0xffffffff;
    FUN_006e4bea();
  }
  if ((*(int *)(*(int *)ThreadLocalStoragePointer + 4) < DAT_007ca8a8) &&
     (FUN_006e4c3b(), DAT_007ca8a8 == -1)) {
    local_8 = 10;
    FUN_004054a0();
    FUN_006e4fef();
    local_8 = 0xffffffff;
    FUN_006e4bea();
  }
  game_timing_or_delay_helper();
  iVar3 = FUN_00401a90();
  if (iVar3 == 0) {
    FUN_004053a0();
  }
  else {
    if (param_1 != '\0') {
      local_358 = game_loop_helper_018d0();
      iVar3 = game_loop_helper_018b0();
      for (; local_358 != iVar3; local_358 = local_358 + 0x18) {
        local_35c = 0;
        while( true ) {
          game_timing_or_delay_helper();
          uVar4 = FUN_00401a90();
          if (uVar4 <= local_35c) break;
          game_timing_or_delay_helper();
          piVar5 = (int *)game_get_flag_object_01a70();
          iVar1 = *piVar5;
          FUN_004054a0();
          local_8 = 0xb;
          FUN_004054a0();
          local_8._0_1_ = 0xc;
          FUN_0040e3d0();
          local_8._0_1_ = 0xd;
          FUN_00405cf0();
          cVar2 = destroy<>();
          std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_11c);
          local_8._0_1_ = 0xc;
          std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_104);
          local_8 = CONCAT31(local_8._1_3_,0xb);
          std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_ec);
          local_8 = 0xffffffff;
          std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_d4);
          if ((cVar2 != '\0') && (*(char *)(iVar1 + 0x51) != '\0')) {
            ExceptionList = local_10;
            return;
          }
          local_35c = local_35c + 1;
        }
      }
    }
    if (param_1 == '\0') {
      local_364 = game_loop_helper_018d0();
      iVar3 = game_loop_helper_018b0();
      for (; local_364 != iVar3; local_364 = local_364 + 0x18) {
        local_368 = 0;
        while( true ) {
          game_timing_or_delay_helper();
          uVar4 = FUN_00401a90();
          if (uVar4 <= local_368) break;
          game_timing_or_delay_helper();
          piVar5 = (int *)game_get_flag_object_01a70();
          iVar1 = *piVar5;
          FUN_004054a0();
          local_8 = 0x15;
          FUN_004054a0();
          local_8._0_1_ = 0x16;
          FUN_0040e3d0();
          local_8._0_1_ = 0x17;
          FUN_00405cf0();
          cVar2 = destroy<>();
          std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_224);
          local_8._0_1_ = 0x16;
          std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_20c);
          local_8 = CONCAT31(local_8._1_3_,0x15);
          std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_1f4);
          local_8 = 0xffffffff;
          std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_2c);
          if ((cVar2 != '\0') && (*(char *)(iVar1 + 0x51) != '\0')) {
            FUN_0040d840();
            break;
          }
          local_368 = local_368 + 1;
        }
        FUN_00405520();
        FUN_006ce090();
        FUN_00405520(local_364);
        FUN_00417730(0);
        local_34c = 0;
        local_36c = 0;
        while( true ) {
          game_timing_or_delay_helper();
          uVar4 = FUN_00401a90();
          if (uVar4 <= local_36c) break;
          game_timing_or_delay_helper();
          piVar5 = (int *)game_get_flag_object_01a70();
          iVar1 = *piVar5;
          FUN_004054a0();
          local_8 = 0x18;
          FUN_004054a0();
          local_8._0_1_ = 0x19;
          FUN_0040e3d0();
          local_8._0_1_ = 0x1a;
          FUN_00405cf0();
          cVar2 = destroy<>();
          std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_1c4);
          local_8._0_1_ = 0x19;
          std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_1ac);
          local_8 = CONCAT31(local_8._1_3_,0x18);
          std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_194);
          local_8 = 0xffffffff;
          std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_164);
          if (cVar2 == '\0') {
            FUN_004054a0();
            local_8 = 0x1b;
            FUN_004054a0();
            local_8._0_1_ = 0x1c;
            FUN_0040e3d0();
            local_8._0_1_ = 0x1d;
            FUN_00405cf0();
            cVar2 = destroy<>();
            std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_14c);
            local_8._0_1_ = 0x1c;
            std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_bc);
            local_8 = CONCAT31(local_8._1_3_,0x1b);
            std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_1dc);
            local_8 = 0xffffffff;
            std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_17c);
            if (cVar2 != '\0') {
              *(undefined1 *)(iVar1 + 0x51) = 0;
              goto joined_r0x0041a059;
            }
          }
          else {
            *(undefined1 *)(iVar1 + 0x51) = 0;
joined_r0x0041a059:
            local_34c = local_34c + 1;
            if (local_34c == 2) break;
          }
          local_36c = local_36c + 1;
        }
      }
    }
    else {
      local_354 = game_loop_helper_018d0();
      iVar3 = game_loop_helper_018b0();
      for (; local_354 != iVar3; local_354 = local_354 + 0x18) {
        local_344 = 0;
        local_360 = 0;
        while( true ) {
          game_timing_or_delay_helper();
          uVar4 = FUN_00401a90();
          if (uVar4 <= local_360) break;
          game_timing_or_delay_helper();
          piVar5 = (int *)game_get_flag_object_01a70();
          iVar1 = *piVar5;
          FUN_004054a0();
          local_8 = 0xe;
          FUN_004054a0();
          local_8._0_1_ = 0xf;
          FUN_0040e3d0();
          local_8._0_1_ = 0x10;
          FUN_00405cf0();
          cVar2 = destroy<>();
          std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_a4);
          local_8._0_1_ = 0xf;
          std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_8c);
          local_8 = CONCAT31(local_8._1_3_,0xe);
          std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_74);
          local_8 = 0xffffffff;
          std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_5c);
          if (cVar2 == '\0') {
            FUN_004054a0();
            local_8 = 0x12;
            FUN_004054a0();
            local_8._0_1_ = 0x13;
            FUN_0040e3d0();
            local_8._0_1_ = 0x14;
            FUN_00405cf0();
            cVar2 = destroy<>();
            std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_44);
            local_8._0_1_ = 0x13;
            std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_254);
            local_8 = CONCAT31(local_8._1_3_,0x12);
            std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_134);
            local_8 = 0xffffffff;
            std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_23c);
            if (cVar2 != '\0') {
              *(undefined1 *)(iVar1 + 0x51) = 1;
              cVar2 = destroy<>();
              if (cVar2 != '\0') {
                *(undefined1 *)(iVar1 + 0x51) = 0;
              }
              goto joined_r0x00419b13;
            }
          }
          else {
            cVar2 = destroy<>();
            if (cVar2 == '\0') {
              *(undefined1 *)(iVar1 + 0x51) = 0;
            }
            else {
              FUN_00405520();
              local_8 = 0x11;
              game_timing_or_delay_helper();
              local_8 = 0xffffffff;
              FUN_00622340();
              FUN_00405520();
              FUN_006ce090();
              FUN_00405520(local_354);
              FUN_00417730(1);
            }
joined_r0x00419b13:
            local_344 = local_344 + 1;
            if (local_344 == 2) break;
          }
          local_360 = local_360 + 1;
        }
      }
    }
  }
  ExceptionList = local_10;
  return;
}


/* ==== 0041cfa0  FUN_0041cfa0  size=1174 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_0041cfa0(int param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  uint local_510;
  uint local_50c;
  int local_504;
  undefined1 local_4f8 [24];
  undefined1 local_4e0;
  undefined1 local_498 [24];
  char local_480;
  undefined1 local_438 [24];
  char local_420;
  int local_3a0;
  undefined4 local_39c;
  int local_26c;
  undefined4 local_268;
  int local_138;
  undefined4 local_134;
  function<void___cdecl(void)> local_44 [24];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_2c [24];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070d7c0;
  local_10 = ExceptionList;
  local_14 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_004051f0();
  FUN_0040a850();
  local_8 = 0;
  local_504 = 0;
  local_50c = 0;
  while( true ) {
    uVar2 = FUN_00410b30();
    if (uVar2 <= local_50c) break;
    FUN_0040ac90();
    local_8._0_1_ = 1;
    FUN_0040aa90();
    local_8._0_1_ = 2;
    iVar3 = FUN_00410b30();
    pcVar4 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator[]
                       (local_2c,(iVar3 + -1) - local_50c);
    cVar1 = *pcVar4;
    FUN_004053a0();
    local_420 = cVar1 + -0x25;
    FUN_00427660();
    FUN_00405520(local_438);
    local_8._0_1_ = 3;
    FUN_004bcf00();
    local_8._0_1_ = 2;
    iVar3 = FUN_004b8ca0();
    local_504 = local_504 + -1 + *(int *)(iVar3 + 0xc);
    local_138 = 0xfa - local_504;
    local_134 = 0x94;
    FUN_00405250();
    local_8._0_1_ = 1;
    FUN_00407a80();
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_00403a10();
    local_50c = local_50c + 1;
  }
  FUN_0040a850();
  FUN_004053e0();
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_44);
  local_504 = 0;
  local_510 = 0;
  while( true ) {
    uVar2 = FUN_00410b30();
    if (uVar2 <= local_510) break;
    FUN_0040ac90();
    local_8._0_1_ = 4;
    FUN_0040aa90();
    local_8._0_1_ = 5;
    iVar3 = FUN_00410b30();
    pcVar4 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator[]
                       (local_2c,(iVar3 + -1) - local_510);
    cVar1 = *pcVar4;
    FUN_004053a0();
    local_480 = cVar1 + -0x19;
    FUN_00427660();
    FUN_00405520(local_498);
    local_8._0_1_ = 6;
    FUN_004bcf00();
    local_8._0_1_ = 5;
    iVar3 = FUN_004b8ca0();
    local_504 = local_504 + -1 + *(int *)(iVar3 + 0xc);
    local_26c = 0xfa - local_504;
    local_268 = 0xe1;
    FUN_00405250();
    local_8._0_1_ = 4;
    FUN_00407a80();
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_00403a10();
    local_510 = local_510 + 1;
  }
  if (*(int *)(param_1 + 0xacc) - *(int *)(param_2 + 0x9a0) < 0) {
    FUN_0040ac90();
    local_8._0_1_ = 7;
    FUN_0040aa90();
    local_8._0_1_ = 8;
    FUN_004053a0();
    local_4e0 = 0x16;
    FUN_00427660();
    FUN_00405520(local_4f8);
    local_8._0_1_ = 9;
    FUN_004bcf00();
    local_8._0_1_ = 8;
    iVar3 = FUN_004b8ca0();
    local_3a0 = 0xfa - (local_504 + -1 + *(int *)(iVar3 + 0xc));
    local_39c = 0xe1;
    FUN_00405250();
    local_8._0_1_ = 7;
    FUN_00407a80();
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_00403a10();
  }
  local_8 = 0xffffffff;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)local_2c);
  ExceptionList = local_10;
  return;
}


/* ==== 004267c0  FUN_004267c0  size=128 ==== */

undefined4 * FUN_004267c0(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  in_ECX[3] = param_1[3];
  FUN_00426840(param_1 + 4);
  FUN_004272e0(param_1 + 0x51);
  FUN_00427400(param_1 + 0x54);
  return in_ECX;
}


/* ==== 00426840  FUN_00426840  size=1031 ==== */

undefined1 * FUN_00426840(undefined1 *param_1)

{
  undefined1 *in_ECX;
  
  *in_ECX = *param_1;
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(in_ECX + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(in_ECX + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(in_ECX + 0x20) = *(undefined4 *)(param_1 + 0x20);
  in_ECX[0x24] = param_1[0x24];
  in_ECX[0x25] = param_1[0x25];
  in_ECX[0x26] = param_1[0x26];
  in_ECX[0x27] = param_1[0x27];
  in_ECX[0x28] = param_1[0x28];
  in_ECX[0x29] = param_1[0x29];
  *(undefined4 *)(in_ECX + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(in_ECX + 0x30) = *(undefined4 *)(param_1 + 0x30);
  FUN_004275e0(param_1 + 0x34);
  *(undefined4 *)(in_ECX + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(in_ECX + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(in_ECX + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(in_ECX + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(in_ECX + 0x50) = *(undefined4 *)(param_1 + 0x50);
  in_ECX[0x54] = param_1[0x54];
  in_ECX[0x55] = param_1[0x55];
  *(undefined4 *)(in_ECX + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(in_ECX + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  in_ECX[0x60] = param_1[0x60];
  FUN_0040d840(param_1 + 100);
  *(undefined4 *)(in_ECX + 0x7c) = *(undefined4 *)(param_1 + 0x7c);
  in_ECX[0x80] = param_1[0x80];
  *(undefined4 *)(in_ECX + 0x84) = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)(in_ECX + 0x88) = *(undefined4 *)(param_1 + 0x88);
  *(undefined4 *)(in_ECX + 0x8c) = *(undefined4 *)(param_1 + 0x8c);
  *(undefined4 *)(in_ECX + 0x90) = *(undefined4 *)(param_1 + 0x90);
  *(undefined4 *)(in_ECX + 0x94) = *(undefined4 *)(param_1 + 0x94);
  *(undefined4 *)(in_ECX + 0x98) = *(undefined4 *)(param_1 + 0x98);
  in_ECX[0x9c] = param_1[0x9c];
  *(undefined4 *)(in_ECX + 0xa0) = *(undefined4 *)(param_1 + 0xa0);
  FUN_0040d840(param_1 + 0xa4);
  in_ECX[0xbc] = param_1[0xbc];
  *(undefined4 *)(in_ECX + 0xc0) = *(undefined4 *)(param_1 + 0xc0);
  FUN_00427560(param_1 + 0xc4);
  *(undefined4 *)(in_ECX + 0xd0) = *(undefined4 *)(param_1 + 0xd0);
  FUN_00427560(param_1 + 0xd4);
  in_ECX[0xe0] = param_1[0xe0];
  *(undefined4 *)(in_ECX + 0xe4) = *(undefined4 *)(param_1 + 0xe4);
  in_ECX[0xe8] = param_1[0xe8];
  in_ECX[0xe9] = param_1[0xe9];
  in_ECX[0xea] = param_1[0xea];
  *(undefined4 *)(in_ECX + 0xec) = *(undefined4 *)(param_1 + 0xec);
  *(undefined4 *)(in_ECX + 0xf0) = *(undefined4 *)(param_1 + 0xf0);
  *(undefined4 *)(in_ECX + 0xf4) = *(undefined4 *)(param_1 + 0xf4);
  *(undefined4 *)(in_ECX + 0xf8) = *(undefined4 *)(param_1 + 0xf8);
  *(undefined4 *)(in_ECX + 0xfc) = *(undefined4 *)(param_1 + 0xfc);
  *(undefined4 *)(in_ECX + 0x100) = *(undefined4 *)(param_1 + 0x100);
  *(undefined4 *)(in_ECX + 0x104) = *(undefined4 *)(param_1 + 0x104);
  *(undefined4 *)(in_ECX + 0x108) = *(undefined4 *)(param_1 + 0x108);
  *(undefined4 *)(in_ECX + 0x10c) = *(undefined4 *)(param_1 + 0x10c);
  *(undefined4 *)(in_ECX + 0x110) = *(undefined4 *)(param_1 + 0x110);
  *(undefined4 *)(in_ECX + 0x114) = *(undefined4 *)(param_1 + 0x114);
  *(undefined4 *)(in_ECX + 0x118) = *(undefined4 *)(param_1 + 0x118);
  *(undefined4 *)(in_ECX + 0x11c) = *(undefined4 *)(param_1 + 0x11c);
  *(undefined4 *)(in_ECX + 0x120) = *(undefined4 *)(param_1 + 0x120);
  FUN_00427560(param_1 + 0x124);
  *(undefined4 *)(in_ECX + 0x130) = *(undefined4 *)(param_1 + 0x130);
  return in_ECX;
}


/* ==== 00426c50  FUN_00426c50  size=385 ==== */

undefined4 * FUN_00426c50(undefined4 *param_1)

{
  undefined4 *in_ECX;
  uint local_10;
  uint local_c;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  in_ECX[3] = param_1[3];
  in_ECX[4] = param_1[4];
  in_ECX[5] = param_1[5];
  in_ECX[6] = param_1[6];
  in_ECX[7] = param_1[7];
  in_ECX[8] = param_1[8];
  in_ECX[9] = param_1[9];
  in_ECX[10] = param_1[10];
  for (local_c = 0; local_c < 0x20; local_c = local_c + 1) {
    *(undefined1 *)((int)in_ECX + local_c + 0x2c) = *(undefined1 *)((int)param_1 + local_c + 0x2c);
  }
  for (local_10 = 0; local_10 < 0x14; local_10 = local_10 + 1) {
    *(undefined1 *)((int)in_ECX + local_10 + 0x4c) = *(undefined1 *)((int)param_1 + local_10 + 0x4c)
    ;
  }
  *(undefined1 *)(in_ECX + 0x18) = *(undefined1 *)(param_1 + 0x18);
  in_ECX[0x19] = param_1[0x19];
  in_ECX[0x1a] = param_1[0x1a];
  in_ECX[0x1b] = param_1[0x1b];
  in_ECX[0x1c] = param_1[0x1c];
  in_ECX[0x1d] = param_1[0x1d];
  in_ECX[0x1e] = param_1[0x1e];
  FUN_00427680(param_1 + 0x1f);
  FUN_00427680(param_1 + 0x21);
  FUN_00427680(param_1 + 0x23);
  return in_ECX;
}


/* ==== 00426de0  FUN_00426de0  size=118 ==== */

int FUN_00426de0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int in_ECX;
  
  iVar1 = _Unfancy<>(param_1);
  if (in_ECX != iVar1) {
    uVar2 = FUN_00401c60();
    uVar3 = FUN_00401c60(uVar2);
    FUN_004025f0(uVar2,uVar3);
    FUN_00427eb0(*param_1,(param_1[1] - *param_1) / 0x28);
  }
  return in_ECX;
}


/* 00426e60 npk_img_texture_slot_store size=26 → moved to npk_img_resource.c (NPK/IMG pass; single copy) */

/* ==== 00426e80  FUN_00426e80  size=44 ==== */

undefined4 FUN_00426e80(void)

{
  undefined4 in_ECX;
  undefined1 local_5;
  
  _Compressed_pair<><>(local_5);
  FUN_00401720(&DAT_0073f5f3);
  return in_ECX;
}


/* ==== 00426eb0  FUN_00426eb0  size=22 ==== */

undefined4 FUN_00426eb0(void)

{
  undefined4 in_ECX;
  
  FUN_00427870();
  return in_ECX;
}


/* ==== 00426ed0  FUN_00426ed0  size=54 ==== */

bool FUN_00426ed0(undefined4 param_1)

{
  char cVar1;
  
  cVar1 = FUN_00427830(param_1);
  return cVar1 == '\0';
}


/* ==== 00426f10  FUN_00426f10  size=36 ==== */

int FUN_00426f10(undefined4 param_1)

{
  int *piVar1;
  undefined1 local_10 [12];
  
  piVar1 = (int *)FUN_00428090(local_10,param_1);
  return *piVar1 + 0x14;
}


/* ==== 00426f40  FUN_00426f40  size=33 ==== */

int FUN_00426f40(int param_1)

{
  int *in_ECX;
  
  return param_1 * 0x408 + *in_ECX;
}


/* ==== 00426f70  FUN_00426f70  size=38 ==== */

int FUN_00426f70(void)

{
  int *in_ECX;
  
  return (in_ECX[1] - *in_ECX) / 0x408;
}


/* ==== 00426fa0  FUN_00426fa0  size=95 ==== */

void FUN_00426fa0(void)

{
  undefined4 uVar1;
  int *in_ECX;
  int *piVar2;
  
  piVar2 = in_ECX + 1;
  if (*in_ECX != *piVar2) {
    FUN_00401710();
    uVar1 = FUN_00401c60();
    FUN_00428180(*in_ECX,*piVar2,uVar1);
    *piVar2 = *in_ECX;
  }
  return;
}


/* ==== 00427000  FUN_00427000  size=30 ==== */

int FUN_00427000(int param_1)

{
  int *in_ECX;
  
  return param_1 * 0x30 + *in_ECX;
}


/* ==== 00427020  FUN_00427020  size=38 ==== */

int FUN_00427020(void)

{
  int *in_ECX;
  
  return (in_ECX[1] - *in_ECX) / 0x30;
}


/* ==== 00427050  FUN_00427050  size=197 ==== */

undefined4 FUN_00427050(undefined4 param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  void *pvVar3;
  int in_ECX;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0070df40;
  local_10 = ExceptionList;
  uVar1 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  piVar4 = (int *)(in_ECX + 4);
  FUN_004023d0(param_2,*piVar4);
  FUN_004281f0(param_2 + 0x30,*piVar4,param_2,uVar1);
  uVar2 = _Unfancy<>(*piVar4 + -0x30);
  pvVar3 = (void *)FUN_00401c60(uVar2);
  __ExceptionPtrDestroy(pvVar3);
  *piVar4 = *piVar4 + -0x30;
  uVar2 = _Unfancy<>(in_ECX);
  _Vector_iterator<>(param_2,uVar2);
  ExceptionList = local_10;
  return param_1;
}


/* ==== 00427120  FUN_00427120  size=20 ==== */

void FUN_00427120(void)

{
  FUN_00427890();
  return;
}


/* ==== 00427140  FUN_00427140  size=106 ==== */

undefined4 FUN_00427140(int *param_1)

{
  undefined4 uVar1;
  undefined4 in_ECX;
  undefined1 local_6;
  undefined1 local_5;
  
  uVar1 = FUN_00401c60();
  uVar1 = _Unfancy<>(&local_5,uVar1);
  _Vector_alloc<>(local_6,uVar1);
  FUN_00428240((param_1[1] - *param_1) / 0x30,param_1,param_1 + 1);
  return in_ECX;
}


/* ==== 004271b0  FUN_004271b0  size=30 ==== */

int FUN_004271b0(int param_1)

{
  int *in_ECX;
  
  return param_1 * 0x54 + *in_ECX;
}


/* ==== 004271d0  FUN_004271d0  size=38 ==== */

int FUN_004271d0(void)

{
  int *in_ECX;
  
  return (in_ECX[1] - *in_ECX) / 0x54;
}


/* ==== 00427200  FUN_00427200  size=33 ==== */

int FUN_00427200(int param_1)

{
  int *in_ECX;
  
  return param_1 * 0x90 + *in_ECX;
}


/* ==== 00427230  FUN_00427230  size=38 ==== */

int FUN_00427230(void)

{
  int *in_ECX;
  
  return (in_ECX[1] - *in_ECX) / 0x90;
}


/* ==== 00427260  FUN_00427260  size=95 ==== */

void FUN_00427260(void)

{
  undefined4 uVar1;
  int *in_ECX;
  int *piVar2;
  
  piVar2 = in_ECX + 1;
  if (*in_ECX != *piVar2) {
    FUN_00401710();
    uVar1 = FUN_00401c60();
    FUN_0040e420(*in_ECX,*piVar2,uVar1);
    *piVar2 = *in_ECX;
  }
  return;
}


/* ==== 004272c0  FUN_004272c0  size=32 ==== */

void FUN_004272c0(undefined4 param_1)

{
  undefined1 local_5;
  
  FUN_00428310(param_1,&local_5);
  return;
}


/* ==== 004272e0  FUN_004272e0  size=118 ==== */

int FUN_004272e0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int in_ECX;
  
  iVar1 = _Unfancy<>(param_1);
  if (in_ECX != iVar1) {
    uVar2 = FUN_00401c60();
    uVar3 = FUN_00401c60(uVar2);
    FUN_004025f0(uVar2,uVar3);
    FUN_00428410(*param_1,(param_1[1] - *param_1) / 0x90);
  }
  return in_ECX;
}


/* ==== 00427360  FUN_00427360  size=20 ==== */

void FUN_00427360(void)

{
  FUN_00427930();
  return;
}


/* ==== 00427380  FUN_00427380  size=26 ==== */

void FUN_00427380(undefined4 param_1)

{
  FUN_00428570(param_1);
  return;
}


/* ==== 004273a0  FUN_004273a0  size=36 ==== */

int FUN_004273a0(undefined4 param_1)

{
  int *piVar1;
  undefined1 local_10 [12];
  
  piVar1 = (int *)FUN_004285c0(local_10,param_1);
  return *piVar1 + 0x14;
}


/* ==== 004273d0  FUN_004273d0  size=36 ==== */

int FUN_004273d0(undefined4 param_1)

{
  int *piVar1;
  undefined1 local_10 [12];
  
  piVar1 = (int *)FUN_004286b0(local_10,param_1);
  return *piVar1 + 0x20;
}


/* ==== 00427400  FUN_00427400  size=118 ==== */

int FUN_00427400(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int in_ECX;
  
  iVar1 = _Unfancy<>(param_1);
  if (in_ECX != iVar1) {
    uVar2 = FUN_00401c60();
    uVar3 = FUN_00401c60(uVar2);
    FUN_004025f0(uVar2,uVar3);
    FUN_00428810(*param_1,(param_1[1] - *param_1) / 0x134);
  }
  return in_ECX;
}


/* ==== 00427480  FUN_00427480  size=20 ==== */

void FUN_00427480(void)

{
  FUN_004279d0();
  return;
}


/* ==== 004274a0  FUN_004274a0  size=38 ==== */

int FUN_004274a0(void)

{
  int *in_ECX;
  
  return (in_ECX[1] - *in_ECX) / 0x94;
}


/* ==== 004274d0  FUN_004274d0  size=30 ==== */

int FUN_004274d0(int param_1)

{
  int *in_ECX;
  
  return param_1 * 0x18 + *in_ECX;
}


/* ==== 004274f0  FUN_004274f0  size=38 ==== */

int FUN_004274f0(void)

{
  int *in_ECX;
  
  return (in_ECX[1] - *in_ECX) / 0x18;
}


/* ==== 00427520  FUN_00427520  size=26 ==== */

void FUN_00427520(undefined4 param_1)

{
  FUN_00428970(param_1);
  return;
}


/* ==== 00427540  FUN_00427540  size=32 ==== */

int FUN_00427540(int param_1)

{
  int *in_ECX;
  
  return *in_ECX + param_1 * 8;
}


/* ==== 00427560  FUN_00427560  size=113 ==== */

int FUN_00427560(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int in_ECX;
  
  iVar1 = _Unfancy<>(param_1);
  if (in_ECX != iVar1) {
    uVar2 = FUN_00401c60();
    uVar3 = FUN_00401c60(uVar2);
    FUN_004025f0(uVar2,uVar3);
    FUN_004289c0(*param_1,param_1[1] - *param_1 >> 2);
  }
  return in_ECX;
}


/* ==== 004275e0  FUN_004275e0  size=118 ==== */

int FUN_004275e0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int in_ECX;
  
  iVar1 = _Unfancy<>(param_1);
  if (in_ECX != iVar1) {
    uVar2 = FUN_00401c60();
    uVar3 = FUN_00401c60(uVar2);
    FUN_004025f0(uVar2,uVar3);
    FUN_00428b40(*param_1,(param_1[1] - *param_1) / 0x60);
  }
  return in_ECX;
}


/* ==== 00427660  FUN_00427660  size=26 ==== */

void FUN_00427660(undefined4 param_1)

{
  FUN_00428ca0(param_1);
  return;
}


/* ==== 00427680  FUN_00427680  size=28 ==== */

undefined4 FUN_00427680(undefined4 param_1)

{
  undefined4 in_ECX;
  
  FUN_00427a70(param_1);
  return in_ECX;
}


/* ==== 004276a0  FUN_004276a0  size=30 ==== */

int FUN_004276a0(void)

{
  int *in_ECX;
  
  return (in_ECX[1] - *in_ECX) / 0x18;
}


/* ==== 004276c0  FUN_004276c0  size=93 ==== */

undefined4 FUN_004276c0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined1 local_5;
  
  _Vector_alloc<>(local_5,param_3);
  local_10 = FUN_00401c40();
  local_14 = FUN_00401b20();
  puVar3 = &local_10;
  puVar2 = &local_14;
  uVar1 = FUN_004276a0(puVar2,puVar3);
  uVar1 = _Unfancy<>(uVar1);
  FUN_00428cf0(uVar1,puVar2,puVar3);
  return local_c;
}


/* ==== 00427720  FUN_00427720  size=52 ==== */

undefined4 FUN_00427720(undefined4 param_1)

{
  undefined4 uVar1;
  int in_ECX;
  
  uVar1 = _Unfancy<>();
  FID_conflict__Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::shared_ptr<Concurrency::details::_Task_impl<std::pair<unsigned_char,Concurrency::details::_CancellationTokenState*>_>_>_>_>_>
            (*(undefined4 *)(in_ECX + 4),uVar1);
  return param_1;
}


/* ==== 00427760  FUN_00427760  size=51 ==== */

undefined4 FUN_00427760(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  
  uVar1 = _Unfancy<>();
  FID_conflict__Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::shared_ptr<Concurrency::details::_Task_impl<std::pair<unsigned_char,Concurrency::details::_CancellationTokenState*>_>_>_>_>_>
            (*in_ECX,uVar1);
  return param_1;
}


/* ==== 004277a0  FUN_004277a0  size=58 ==== */

void FUN_004277a0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  _String_val<std::_Simple_types<char>_> *in_ECX;
  undefined4 uVar3;
  
  uVar1 = FUN_00405b00(param_1);
  uVar3 = *(undefined4 *)(in_ECX + 0x10);
  pcVar2 = std::_String_val<std::_Simple_types<char>_>::_Myptr(in_ECX);
  FUN_00428dc0(pcVar2,uVar3,param_2,param_1,uVar1);
  return;
}


/* ==== 004277e0  operator[]  size=24 ==== */

/* Library Function - Single Match
    public: char const & __thiscall std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> >::operator[](unsigned int)const 
   
   Library: Visual Studio 2019 Release */

char * __thiscall
std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator[]
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *this,uint param_1)

{
  char *pcVar1;
  
  pcVar1 = _String_val<std::_Simple_types<char>_>::_Myptr
                     ((_String_val<std::_Simple_types<char>_> *)this);
  return pcVar1 + param_1;
}


/* ==== 00427800  FUN_00427800  size=41 ==== */

void FUN_00427800(undefined4 param_1,undefined4 param_2)

{
  Check_offset(param_1);
  FUN_00427af0(param_1,param_2);
  return;
}


/* ==== 00427830  FUN_00427830  size=59 ==== */

bool FUN_00427830(int *param_1)

{
  int *in_ECX;
  
  FUN_00401720(param_1);
  return *in_ECX == *param_1;
}


/* ==== 00427870  FUN_00427870  size=27 ==== */

int * FUN_00427870(void)

{
  int *in_ECX;
  
  *in_ECX = *in_ECX + 0x30;
  return in_ECX;
}


/* ==== 00427890  FUN_00427890  size=155 ==== */

void FUN_00427890(void)

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
    FUN_00428eb0(*in_ECX,*piVar3,uVar1);
    FUN_00427b90(*in_ECX,(*piVar2 - *in_ECX) / 0x30);
    *in_ECX = 0;
    *piVar3 = 0;
    *piVar2 = 0;
  }
  return;
}


/* ==== 00427930  FUN_00427930  size=155 ==== */

void FUN_00427930(void)

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
    FUN_0040e420(*in_ECX,*piVar3,uVar1);
    FUN_0040dec0(*in_ECX,(*piVar2 - *in_ECX) / 0x90);
    *in_ECX = 0;
    *piVar3 = 0;
    *piVar2 = 0;
  }
  return;
}


/* ==== 004279d0  FUN_004279d0  size=155 ==== */

void FUN_004279d0(void)

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
    FUN_00405eb0(*in_ECX,*piVar3,uVar1);
    FUN_00405b70(*in_ECX,(*piVar2 - *in_ECX) / 0x134);
    *in_ECX = 0;
    *piVar3 = 0;
    *piVar2 = 0;
  }
  return;
}


/* ==== 00427a70  FUN_00427a70  size=114 ==== */

int FUN_00427a70(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int in_ECX;
  
  iVar1 = _Unfancy<>(param_1);
  if (in_ECX != iVar1) {
    uVar2 = FUN_00401c60();
    uVar3 = FUN_00401c60(uVar2);
    FUN_00427bb0(uVar2,uVar3);
    FUN_00401c60();
    FUN_00401c60();
    FUN_004025f0(uVar2,uVar3);
    FUN_00409c90(param_1);
  }
  return in_ECX;
}


/* ==== 00427af0  FUN_00427af0  size=113 ==== */

_String_val<std::_Simple_types<char>_> * FUN_00427af0(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  _String_val<std::_Simple_types<char>_> *in_ECX;
  
  uVar2 = std::_String_val<std::_Simple_types<char>_>::_Clamp_suffix_size(in_ECX,param_1,param_2);
  iVar1 = *(int *)(in_ECX + 0x10);
  pcVar3 = std::_String_val<std::_Simple_types<char>_>::_Myptr(in_ECX);
  _Unchecked_idl0<>(pcVar3 + param_1,pcVar3 + param_1 + uVar2,((iVar1 - uVar2) - param_1) + 1);
  *(uint *)(in_ECX + 0x10) = iVar1 - uVar2;
  return in_ECX;
}


/* ==== 00427b70  Check_offset  size=30 ==== */

/* Library Function - Multiple Matches With Same Base Name
    public: void __thiscall std::_String_val<struct std::_Simple_types<char>
   >::_Check_offset(unsigned int)const 
    public: void __thiscall std::_String_val<struct std::_Simple_types<unsigned short>
   >::_Check_offset(unsigned int)const 
    public: void __thiscall std::_String_val<struct std::_Simple_types<wchar_t>
   >::_Check_offset(unsigned int)const 
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void Check_offset(uint param_1)

{
  int in_ECX;
  
  if (*(uint *)(in_ECX + 0x10) < param_1) {
    Xran();
  }
  return;
}


/* ==== 00427b90  FUN_00427b90  size=30 ==== */

void FUN_00427b90(undefined4 param_1,int param_2)

{
  _Deallocate<>(param_1,param_2 * 0x30);
  return;
}


/* ==== 00427bb0  FUN_00427bb0  size=102 ==== */

void FUN_00427bb0(void)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  piVar2 = (int *)FUN_004057d0();
  FUN_00401720(0);
  iVar1 = *piVar2;
  uVar4 = *(undefined4 *)(iVar1 + 4);
  uVar3 = FUN_00401c60(uVar4);
  FUN_00406550(uVar3,uVar4);
  *(int *)(iVar1 + 4) = iVar1;
  *(int *)iVar1 = iVar1;
  *(int *)(iVar1 + 8) = iVar1;
  piVar2[1] = 0;
  return;
}


/* ==== 00427c50  Xran  size=16 ==== */

/* Library Function - Multiple Matches With Same Base Name
    public: static void __cdecl std::_String_val<struct std::_Simple_types<char> >::_Xran(void)
    public: static void __cdecl std::_String_val<struct std::_Simple_types<unsigned short>
   >::_Xran(void)
    public: static void __cdecl std::_String_val<struct std::_Simple_types<wchar_t> >::_Xran(void)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void Xran(void)

{
  FUN_006e38f3("invalid string position");
  return;
}


/* ==== 00427c60  FUN_00427c60  size=17 ==== */

void FUN_00427c60(undefined4 param_1,undefined4 param_2)

{
  FUN_00429b80(param_2);
  return;
}


/* ==== 00427c80  FUN_00427c80  size=50 ==== */

undefined4 FUN_00427c80(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00429bc0(0,param_2);
  FUN_00405450(uVar1);
  return param_1;
}


/* ==== 00427cc0  FUN_00427cc0  size=92 ==== */

undefined4 *
FUN_00427cc0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 local_8;
  
  FUN_004025f0(&param_2,&param_3);
  uVar1 = FUN_00405d90(&param_3,param_4);
  uVar1 = FUN_00405d90(&param_2,uVar1);
  local_8 = FUN_0042ad10(uVar1);
  FUN_0042ad90(&param_2,&local_8);
  *param_1 = param_2;
  return param_1;
}


/* ==== 00427d20  FUN_00427d20  size=136 ==== */

undefined4
FUN_00427d20(undefined4 param_1,
            basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2,
            undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 local_6;
  
  iVar1 = FUN_00410b30();
  uVar2 = FUN_00405b00(param_3);
  uVar3 = _Unfancy<>(uVar2);
  uVar4 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::max_size(param_2);
  if (uVar4 - iVar1 < uVar3) {
    FUN_00403960();
  }
  uVar2 = npk_get_relative_res_path();
  FUN_00429bf0(local_6,param_2,uVar2,iVar1,param_3,uVar3);
  return param_1;
}


/* ==== 00427db0  FUN_00427db0  size=128 ==== */

undefined4
FUN_00427db0(undefined4 param_1,undefined4 param_2,
            basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 local_7;
  
  uVar1 = FUN_00410b30();
  uVar2 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::max_size(param_3);
  if (uVar1 == uVar2) {
    FUN_00403960();
  }
  uVar3 = _Unfancy<>(&param_2);
  uVar4 = npk_get_relative_res_path(uVar3);
  FUN_00429bf0(local_7,param_3,uVar3,1,uVar4,uVar1);
  return param_1;
}


/* ==== 00427e30  FUN_00427e30  size=51 ==== */

bool FUN_00427e30(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = FUN_00427c60(param_1,param_2);
  return cVar1 == '\0';
}


/* ==== 00427e70  FUN_00427e70  size=51 ==== */

bool FUN_00427e70(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = FUN_0042adb0(param_1,param_2);
  return cVar1 == '\0';
}


/* ==== 00427eb0  FUN_00427eb0  size=386 ==== */

/* WARNING: Removing unreachable block (ram,0x00427f91) */
/* WARNING: Removing unreachable block (ram,0x00427fad) */
/* WARNING: Removing unreachable block (ram,0x00427fb7) */
/* WARNING: Removing unreachable block (ram,0x00427fc2) */
/* WARNING: Removing unreachable block (ram,0x00427f9b) */

void FUN_00427eb0(int param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int *in_ECX;
  int *piVar4;
  
  uVar1 = FUN_00401c60();
  piVar4 = in_ECX + 1;
  FUN_00401710();
  if ((uint)((in_ECX[2] - *in_ECX) / 0x28) < param_2) {
    FUN_00429370(param_2);
    iVar2 = FUN_0042add0(param_1,param_2,*in_ECX,uVar1);
    *piVar4 = iVar2;
  }
  else {
    uVar3 = (*piVar4 - *in_ECX) / 0x28;
    if (uVar3 < param_2) {
      FUN_0042aea0(param_1,uVar3,*in_ECX);
      iVar2 = FUN_0042add0(uVar3 * 0x28 + param_1,param_2 - uVar3,*piVar4,uVar1);
      *piVar4 = iVar2;
    }
    else {
      iVar2 = param_2 * 0x28 + *in_ECX;
      FUN_0042aee0(param_1,param_2,*in_ECX);
      FUN_004025f0(iVar2,*piVar4,uVar1);
      *piVar4 = iVar2;
    }
  }
  return;
}


/* ==== 00428040  FUN_00428040  size=75 ==== */

void FUN_00428040(undefined4 param_1)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) == *(int *)(in_ECX + 8)) {
    FUN_0042afa0(*(int *)(in_ECX + 4),param_1);
  }
  else {
    FUN_0042af40(param_1);
  }
  return;
}


/* ==== 00428090  FUN_00428090  size=231 ==== */

undefined4 FUN_00428090(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c [3];
  undefined1 local_20 [4];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 *local_10;
  undefined1 local_7;
  undefined1 local_6;
  undefined1 local_5;
  
  FUN_00407180(&local_34,param_2);
  cVar1 = FUN_00407240(local_2c[0],param_2);
  if (cVar1 == '\0') {
    FUN_004068d0();
    local_10 = (undefined4 *)FUN_004057d0();
    uVar2 = _Unfancy<>(&local_7);
    uVar3 = FUN_004072d0(local_20,param_2,uVar2);
    puVar6 = &DAT_0073f5ff;
    uVar5 = *local_10;
    uVar4 = FUN_00401c60(uVar5,&DAT_0073f5ff,uVar3);
    local_14 = FUN_004072f0(uVar4,uVar5,puVar6,uVar3,uVar2);
    local_18 = FUN_00406690();
    FUN_004065f0();
    local_1c = FUN_004066c0(local_34,local_30,local_18);
    local_6 = 1;
    FUN_004072a0(&local_1c,&local_6);
  }
  else {
    local_5 = 0;
    FUN_004072a0(local_2c,&local_5);
  }
  return param_1;
}


/* ==== 00428180  FUN_00428180  size=95 ==== */

void FUN_00428180(int param_1,int param_2,void *param_3)

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
  for (; param_1 != param_2; param_1 = param_1 + 0x20) {
    _Unfancy<>(param_1,uVar1);
    __ExceptionPtrDestroy(param_3);
  }
  ExceptionList = local_10;
  return;
}


/* ==== 004281f0  FUN_004281f0  size=51 ==== */

int FUN_004281f0(int param_1,int param_2,int param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x30) {
    FUN_00428f90(param_1);
    param_3 = param_3 + 0x30;
  }
  return param_3;
}


/* ==== 00428240  FUN_00428240  size=197 ==== */

void FUN_00428240(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070df6d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar1 = FUN_00401c60(DAT_007c5940 ^ (uint)&stack0xfffffffc);
  FUN_00401740(&DAT_0073f5f3,in_ECX);
  if (param_1 != 0) {
    FUN_00429440(param_1);
    local_8 = 0;
    uVar1 = FUN_0042b180(*param_2,*param_3,*in_ECX,uVar1);
    in_ECX[1] = uVar1;
    local_8 = 0xffffffff;
    FUN_00429350();
  }
  FUN_00401710();
  ExceptionList = local_10;
  return;
}


/* ==== 00428310  FUN_00428310  size=251 ==== */

void FUN_00428310(uint param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *in_ECX;
  int *piVar5;
  
  uVar1 = FUN_00401c60();
  piVar5 = in_ECX + 1;
  uVar2 = (*piVar5 - *in_ECX) / 0x90;
  if (param_1 < uVar2) {
    iVar3 = param_1 * 0x90 + *in_ECX;
    FUN_004023d0(iVar3,*piVar5);
    FUN_0040e420(iVar3,*piVar5,uVar1);
    *piVar5 = iVar3;
  }
  else if (uVar2 < param_1) {
    if ((uint)((in_ECX[2] - *in_ECX) / 0x90) < param_1) {
      FUN_0042b230(param_1,param_2);
    }
    else {
      iVar3 = *piVar5;
      iVar4 = FUN_0042b370(iVar3,param_1 - uVar2,uVar1);
      *piVar5 = iVar4;
      FUN_004023d0(iVar3,iVar3);
    }
  }
  return;
}


/* ==== 00428410  FUN_00428410  size=350 ==== */

void FUN_00428410(int param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int *in_ECX;
  int *piVar4;
  int local_18;
  
  uVar1 = FUN_00401c60();
  piVar4 = in_ECX + 1;
  FUN_00401710();
  if ((uint)((in_ECX[2] - *in_ECX) / 0x90) < param_2) {
    FUN_00429470(param_2);
    iVar2 = FUN_0042b400(param_1,param_2,*in_ECX,uVar1);
    *piVar4 = iVar2;
  }
  else {
    uVar3 = (*piVar4 - *in_ECX) / 0x90;
    if (uVar3 < param_2) {
      for (local_18 = *in_ECX; local_18 != *piVar4; local_18 = local_18 + 0x90) {
        FUN_00429030(param_1);
        param_1 = param_1 + 0x90;
      }
      iVar2 = FUN_0042b400(param_1,param_2 - uVar3,*piVar4,uVar1);
      *piVar4 = iVar2;
    }
    else {
      iVar2 = param_2 * 0x90 + *in_ECX;
      FUN_0042b4b0(param_1,param_2,*in_ECX);
      FUN_0040e420(iVar2,*piVar4,uVar1);
      *piVar4 = iVar2;
    }
  }
  return;
}


/* ==== 00428570  FUN_00428570  size=75 ==== */

void FUN_00428570(undefined4 param_1)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) == *(int *)(in_ECX + 8)) {
    FUN_0042b560(*(int *)(in_ECX + 4),param_1);
  }
  else {
    FUN_0042b4f0(param_1);
  }
  return;
}


/* ==== 004285c0  FUN_004285c0  size=231 ==== */

undefined4 FUN_004285c0(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c [3];
  undefined1 local_20 [4];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 *local_10;
  undefined1 local_7;
  undefined1 local_6;
  undefined1 local_5;
  
  FUN_00407180(&local_34,param_2);
  cVar1 = FUN_00407240(local_2c[0],param_2);
  if (cVar1 == '\0') {
    FUN_004068d0();
    local_10 = (undefined4 *)FUN_004057d0();
    uVar2 = _Unfancy<>(&local_7);
    uVar3 = FUN_004072d0(local_20,param_2,uVar2);
    puVar6 = &DAT_0073f5ff;
    uVar5 = *local_10;
    uVar4 = FUN_00401c60(uVar5,&DAT_0073f5ff,uVar3);
    local_14 = FUN_0040f5f0(uVar4,uVar5,puVar6,uVar3,uVar2);
    local_18 = FUN_00406690();
    FUN_0040eed0();
    local_1c = FUN_004066c0(local_34,local_30,local_18);
    local_6 = 1;
    FUN_004072a0(&local_1c,&local_6);
  }
  else {
    local_5 = 0;
    FUN_004072a0(local_2c,&local_5);
  }
  return param_1;
}


/* ==== 004286b0  FUN_004286b0  size=339 ==== */

undefined4 FUN_004286b0(undefined4 param_1,undefined4 param_2)

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
  puStack_c = &LAB_0070df9d;
  local_10 = ExceptionList;
  uVar2 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_20 = param_2;
  local_1c = FUN_0040f0e0(param_2);
  FUN_0040f280(&local_30,local_20,local_1c);
  if (local_2c == 0) {
    FUN_00429630(uVar2);
    uVar3 = _Unfancy<>(&local_13);
    uVar4 = FUN_004072d0(local_28,param_2,uVar3);
    puVar7 = &DAT_0073f5ff;
    uVar5 = FUN_00401c60(&DAT_0073f5ff,uVar4);
    FUN_0042b730(uVar5,puVar7,uVar4,uVar3);
    local_8 = 0;
    cVar1 = FUN_00429580();
    if (cVar1 != '\0') {
      FUN_00429540();
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
    FUN_004292e0();
  }
  else {
    local_11 = 0;
    FUN_004072a0(&local_2c,&local_11);
  }
  ExceptionList = local_10;
  return param_1;
}


/* ==== 00428810  FUN_00428810  size=350 ==== */

void FUN_00428810(int param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int *in_ECX;
  int *piVar4;
  int local_18;
  
  uVar1 = FUN_00401c60();
  piVar4 = in_ECX + 1;
  FUN_00401710();
  if ((uint)((in_ECX[2] - *in_ECX) / 0x134) < param_2) {
    FUN_00429750(param_2);
    iVar2 = FUN_0042b7c0(param_1,param_2,*in_ECX,uVar1);
    *piVar4 = iVar2;
  }
  else {
    uVar3 = (*piVar4 - *in_ECX) / 0x134;
    if (uVar3 < param_2) {
      for (local_18 = *in_ECX; local_18 != *piVar4; local_18 = local_18 + 0x134) {
        FUN_00426840(param_1);
        param_1 = param_1 + 0x134;
      }
      iVar2 = FUN_0042b7c0(param_1,param_2 - uVar3,*piVar4,uVar1);
      *piVar4 = iVar2;
    }
    else {
      iVar2 = param_2 * 0x134 + *in_ECX;
      FUN_0042b870(param_1,param_2,*in_ECX);
      FUN_00405eb0(iVar2,*piVar4,uVar1);
      *piVar4 = iVar2;
    }
  }
  return;
}


/* ==== 00428970  FUN_00428970  size=75 ==== */

void FUN_00428970(undefined4 param_1)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) == *(int *)(in_ECX + 8)) {
    FUN_0042b910(*(int *)(in_ECX + 4),param_1);
  }
  else {
    FUN_0042b8b0(param_1);
  }
  return;
}


/* ==== 004289c0  FUN_004289c0  size=371 ==== */

/* WARNING: Removing unreachable block (ram,0x00428a95) */
/* WARNING: Removing unreachable block (ram,0x00428ab1) */
/* WARNING: Removing unreachable block (ram,0x00428a9f) */

void FUN_004289c0(int param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *in_ECX;
  int *piVar3;
  uint uVar4;
  
  uVar1 = FUN_00401c60();
  piVar3 = in_ECX + 1;
  FUN_00401710();
  if ((uint)(in_ECX[2] - *in_ECX >> 2) < param_2) {
    FUN_00429820(param_2);
    iVar2 = FUN_0042bae0(param_1,param_2,*in_ECX,uVar1);
    *piVar3 = iVar2;
  }
  else {
    uVar4 = *piVar3 - *in_ECX >> 2;
    if (uVar4 < param_2) {
      FUN_0042bbc0(param_1,uVar4,*in_ECX);
      iVar2 = FUN_0042bae0(param_1 + uVar4 * 4,param_2 - uVar4,*piVar3,uVar1);
      *piVar3 = iVar2;
    }
    else {
      iVar2 = *in_ECX + param_2 * 4;
      FUN_0042bc00(param_1,param_2,*in_ECX);
      FUN_004025f0(iVar2,*piVar3,uVar1);
      *piVar3 = iVar2;
    }
  }
  return;
}


/* ==== 00428b40  FUN_00428b40  size=342 ==== */

void FUN_00428b40(int param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int *in_ECX;
  int *piVar4;
  int local_18;
  
  uVar1 = FUN_00401c60();
  piVar4 = in_ECX + 1;
  FUN_00401710();
  if ((uint)((in_ECX[2] - *in_ECX) / 0x60) < param_2) {
    FUN_004298e0(param_2);
    iVar2 = FUN_0042bc50(param_1,param_2,*in_ECX,uVar1);
    *piVar4 = iVar2;
  }
  else {
    uVar3 = (*piVar4 - *in_ECX) / 0x60;
    if (uVar3 < param_2) {
      for (local_18 = *in_ECX; local_18 != *piVar4; local_18 = local_18 + 0x60) {
        FUN_00429180(param_1);
        param_1 = param_1 + 0x60;
      }
      iVar2 = FUN_0042bc50(param_1,param_2 - uVar3,*piVar4,uVar1);
      *piVar4 = iVar2;
    }
    else {
      iVar2 = param_2 * 0x60 + *in_ECX;
      FUN_0042bd00(param_1,param_2,*in_ECX);
      FUN_00406040(iVar2,*piVar4,uVar1);
      *piVar4 = iVar2;
    }
  }
  return;
}


/* ==== 00428ca0  FUN_00428ca0  size=75 ==== */

void FUN_00428ca0(undefined4 param_1)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) == *(int *)(in_ECX + 8)) {
    FUN_0042bdb0(*(int *)(in_ECX + 4),param_1);
  }
  else {
    FUN_0042bd40(param_1);
  }
  return;
}


/* ==== 00428cf0  FUN_00428cf0  size=197 ==== */

void FUN_00428cf0(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070cb9d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar1 = FUN_00401c60(DAT_007c5940 ^ (uint)&stack0xfffffffc);
  FUN_00401740(&DAT_0073f5f3,in_ECX);
  if (param_1 != 0) {
    FUN_0040a2f0(param_1);
    local_8 = 0;
    uVar1 = FUN_00412490(*param_2,*param_3,*in_ECX,uVar1);
    in_ECX[1] = uVar1;
    local_8 = 0xffffffff;
    FUN_00412350();
  }
  FUN_00401710();
  ExceptionList = local_10;
  return;
}


/* ==== 00428dc0  FUN_00428dc0  size=230 ==== */

uint FUN_00428dc0(int param_1,uint param_2,uint param_3,undefined4 param_4,uint param_5)

{
  char cVar1;
  int iVar2;
  int local_8;
  
  if ((param_2 < param_5) || (param_2 - param_5 < param_3)) {
    param_3 = 0xffffffff;
  }
  else if (param_5 != 0) {
    cVar1 = FUN_00414ec0();
    if (cVar1 == '\0') {
      iVar2 = FUN_0042bf80(param_1 + param_3,param_1 + param_2,param_4,param_5);
      if (iVar2 == param_1 + param_2) {
        param_3 = 0xffffffff;
      }
      else {
        param_3 = iVar2 - param_1;
      }
    }
    else {
      local_8 = param_1 + param_3;
      while (local_8 = find(local_8,(param_1 + 1 + (param_2 - param_5)) - local_8,param_4),
            local_8 != 0) {
        iVar2 = compare(local_8,param_4,param_5);
        if (iVar2 == 0) {
          return local_8 - param_1;
        }
        local_8 = local_8 + 1;
      }
      param_3 = 0xffffffff;
    }
  }
  return param_3;
}


/* ==== 00428eb0  FUN_00428eb0  size=95 ==== */

void FUN_00428eb0(int param_1,int param_2,void *param_3)

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
  for (; param_1 != param_2; param_1 = param_1 + 0x30) {
    _Unfancy<>(param_1,uVar1);
    __ExceptionPtrDestroy(param_3);
  }
  ExceptionList = local_10;
  return;
}


/* ==== 00428f20  FUN_00428f20  size=95 ==== */

void FUN_00428f20(int param_1,int param_2,void *param_3)

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
  for (; param_1 != param_2; param_1 = param_1 + 0x20) {
    _Unfancy<>(param_1,uVar1);
    __ExceptionPtrDestroy(param_3);
  }
  ExceptionList = local_10;
  return;
}


/* ==== 00428f90  FUN_00428f90  size=104 ==== */

undefined4 * FUN_00428f90(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  in_ECX[3] = param_1[3];
  in_ECX[4] = param_1[4];
  in_ECX[5] = param_1[5];
  FUN_004053e0(param_1 + 6);
  return in_ECX;
}


/* ==== 00429000  FUN_00429000  size=46 ==== */

undefined4 FUN_00429000(uint param_1)

{
  undefined4 in_ECX;
  
  FUN_004292c0();
  if ((param_1 & 1) != 0) {
    FUN_006e4b8e(in_ECX,0x30);
  }
  return in_ECX;
}


/* ==== 00429030  FUN_00429030  size=327 ==== */

undefined1 * FUN_00429030(undefined1 *param_1)

{
  undefined1 *in_ECX;
  
  *in_ECX = *param_1;
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
  FUN_0040d840(param_1 + 0x10);
  *(undefined4 *)(in_ECX + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(in_ECX + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(in_ECX + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(in_ECX + 0x38) = *(undefined4 *)(param_1 + 0x38);
  in_ECX[0x3c] = param_1[0x3c];
  *(undefined4 *)(in_ECX + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(in_ECX + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(in_ECX + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(in_ECX + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(in_ECX + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(in_ECX + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(in_ECX + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(in_ECX + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  FUN_00429b00(param_1 + 0x60);
  *(undefined4 *)(in_ECX + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  in_ECX[0x70] = param_1[0x70];
  FUN_0040d840(param_1 + 0x74);
  *(undefined4 *)(in_ECX + 0x8c) = *(undefined4 *)(param_1 + 0x8c);
  return in_ECX;
}


/* ==== 00429180  FUN_00429180  size=309 ==== */

undefined4 * FUN_00429180(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  *(undefined1 *)(in_ECX + 1) = *(undefined1 *)(param_1 + 1);
  FUN_0040d840(param_1 + 2);
  *(undefined1 *)(in_ECX + 8) = *(undefined1 *)(param_1 + 8);
  in_ECX[9] = param_1[9];
  in_ECX[10] = param_1[10];
  in_ECX[0xb] = param_1[0xb];
  in_ECX[0xc] = param_1[0xc];
  in_ECX[0xd] = param_1[0xd];
  *(undefined1 *)(in_ECX + 0xe) = *(undefined1 *)(param_1 + 0xe);
  *(undefined1 *)((int)in_ECX + 0x39) = *(undefined1 *)((int)param_1 + 0x39);
  *(undefined1 *)((int)in_ECX + 0x3a) = *(undefined1 *)((int)param_1 + 0x3a);
  *(undefined1 *)((int)in_ECX + 0x3b) = *(undefined1 *)((int)param_1 + 0x3b);
  *(undefined1 *)(in_ECX + 0xf) = *(undefined1 *)(param_1 + 0xf);
  *(undefined1 *)((int)in_ECX + 0x3d) = *(undefined1 *)((int)param_1 + 0x3d);
  *(undefined1 *)((int)in_ECX + 0x3e) = *(undefined1 *)((int)param_1 + 0x3e);
  *(undefined1 *)((int)in_ECX + 0x3f) = *(undefined1 *)((int)param_1 + 0x3f);
  *(undefined1 *)(in_ECX + 0x10) = *(undefined1 *)(param_1 + 0x10);
  *(undefined1 *)((int)in_ECX + 0x41) = *(undefined1 *)((int)param_1 + 0x41);
  *(undefined1 *)((int)in_ECX + 0x42) = *(undefined1 *)((int)param_1 + 0x42);
  in_ECX[0x11] = param_1[0x11];
  FUN_004299b0(param_1 + 0x12);
  FUN_004299b0(param_1 + 0x15);
  return in_ECX;
}


/* ==== 004292c0  FUN_004292c0  size=23 ==== */

void FUN_004292c0(void)

{
  int in_ECX;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(in_ECX + 0x18));
  return;
}


/* ==== 004292e0  FUN_004292e0  size=104 ==== */

void FUN_004292e0(void)

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
  FUN_0040a6e0();
  ExceptionList = local_10;
  return;
}


/* ==== 00429350  FUN_00429350  size=30 ==== */

void FUN_00429350(void)

{
  int *in_ECX;
  
  if (*in_ECX != 0) {
    FUN_00427890();
  }
  return;
}


/* ==== 00429370  FUN_00429370  size=197 ==== */

void FUN_00429370(uint param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  int *in_ECX;
  
  uVar1 = FUN_00401c60();
  uVar2 = FUN_00429e50();
  if (uVar2 < param_1) {
    FUN_00401c80();
  }
  uVar3 = FUN_00429df0(param_1);
  if (*in_ECX != 0) {
    FUN_004025f0(*in_ECX,in_ECX[1],uVar1);
    FUN_00411d70(*in_ECX,(in_ECX[2] - *in_ECX) / 0x28);
    *in_ECX = 0;
    in_ECX[1] = 0;
    in_ECX[2] = 0;
  }
  FUN_00429d80(uVar3);
  return;
}


/* ==== 00429440  FUN_00429440  size=45 ==== */

void FUN_00429440(uint param_1)

{
  uint uVar1;
  
  uVar1 = FUN_00429f00();
  if (uVar1 < param_1) {
    FUN_00401c80();
  }
  FUN_00429e90(param_1);
  return;
}


/* ==== 00429470  FUN_00429470  size=197 ==== */

void FUN_00429470(uint param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  int *in_ECX;
  
  uVar1 = FUN_00401c60();
  uVar2 = FUN_00410620();
  if (uVar2 < param_1) {
    FUN_00401c80();
  }
  uVar3 = FUN_004105c0(param_1);
  if (*in_ECX != 0) {
    FUN_0040e420(*in_ECX,in_ECX[1],uVar1);
    FUN_0040dec0(*in_ECX,(in_ECX[2] - *in_ECX) / 0x90);
    *in_ECX = 0;
    in_ECX[1] = 0;
    in_ECX[2] = 0;
  }
  FUN_00429f40(uVar3);
  return;
}


/* ==== 00429540  FUN_00429540  size=53 ==== */

void FUN_00429540(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  uVar1 = FUN_0042a200(*(int *)(in_ECX + 8) + 1);
  FUN_00429fb0(uVar1);
  return;
}


/* ==== 00429580  FUN_00429580  size=173 ==== */

bool FUN_00429580(void)

{
  double dVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  float10 fVar4;
  
  iVar3 = *(int *)(in_ECX + 8) + 1;
  fVar4 = (float10)FUN_0042a270();
  dVar1 = *(double *)(&DAT_00795d70 + (iVar3 >> 0x1f) * -8);
  iVar2 = FUN_0042a290();
  return (float)fVar4 <
         (float)((double)iVar3 + dVar1) /
         (float)((double)iVar2 + *(double *)(&DAT_00795d70 + (iVar2 >> 0x1f) * -8));
}


/* ==== 00429630  FUN_00429630  size=49 ==== */

void FUN_00429630(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 8);
  iVar2 = FUN_0042a2b0();
  if (iVar1 == iVar2) {
    FUN_006e38d3("unordered_map/set too long");
  }
  return;
}


/* ==== 00429670  FUN_00429670  size=219 ==== */

int FUN_00429670(uint param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int in_ECX;
  int *local_10 [2];
  int local_8;
  
  local_10[0] = *(int **)(param_2 + 4);
  *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) + 1;
  local_8 = in_ECX;
  FUN_004064c0(param_3,&param_2);
  FUN_004064c0(param_3 + 4,local_10);
  *local_10[0] = param_3;
  *(int *)(param_2 + 4) = param_3;
  param_1 = param_1 & *(uint *)(local_8 + 0x18);
  piVar1 = (int *)(*(int *)(local_8 + 0xc) + param_1 * 8);
  piVar2 = (int *)(*(int *)(local_8 + 0xc) + 4 + param_1 * 8);
  if (*piVar1 == *(int *)(local_8 + 4)) {
    *piVar1 = param_3;
    *piVar2 = param_3;
  }
  else if (*piVar1 == param_2) {
    *piVar1 = param_3;
  }
  else if ((int *)*piVar2 == local_10[0]) {
    *piVar2 = param_3;
  }
  return param_3;
}


/* ==== 00429750  FUN_00429750  size=197 ==== */

void FUN_00429750(uint param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  int *in_ECX;
  
  uVar1 = FUN_00401c60();
  uVar2 = FUN_00407cc0();
  if (uVar2 < param_1) {
    FUN_00401c80();
  }
  uVar3 = FUN_00407c60(param_1);
  if (*in_ECX != 0) {
    FUN_00405eb0(*in_ECX,in_ECX[1],uVar1);
    FUN_00405b70(*in_ECX,(in_ECX[2] - *in_ECX) / 0x134);
    *in_ECX = 0;
    in_ECX[1] = 0;
    in_ECX[2] = 0;
  }
  FUN_0042a2f0(uVar3);
  return;
}


/* ==== 00429820  FUN_00429820  size=190 ==== */

void FUN_00429820(uint param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  int *in_ECX;
  
  uVar1 = FUN_00401c60();
  uVar2 = FUN_004023e0();
  if (uVar2 < param_1) {
    FUN_00401c80();
  }
  uVar3 = FUN_00410730(param_1);
  if (*in_ECX != 0) {
    FUN_004025f0(*in_ECX,in_ECX[1],uVar1);
    FUN_00402300(*in_ECX,in_ECX[2] - *in_ECX >> 2);
    *in_ECX = 0;
    in_ECX[1] = 0;
    in_ECX[2] = 0;
  }
  FUN_00402bf0(uVar3);
  return;
}


/* ==== 004298e0  FUN_004298e0  size=197 ==== */

void FUN_004298e0(uint param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  int *in_ECX;
  
  uVar1 = FUN_00401c60();
  uVar2 = FUN_00409220();
  if (uVar2 < param_1) {
    FUN_00401c80();
  }
  uVar3 = FUN_00410950(param_1);
  if (*in_ECX != 0) {
    FUN_00406040(*in_ECX,in_ECX[1],uVar1);
    FUN_00405bd0(*in_ECX,(in_ECX[2] - *in_ECX) / 0x60);
    *in_ECX = 0;
    in_ECX[1] = 0;
    in_ECX[2] = 0;
  }
  FUN_004091b0(uVar3);
  return;
}


/* ==== 004299b0  FUN_004299b0  size=118 ==== */

int FUN_004299b0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int in_ECX;
  
  iVar1 = _Unfancy<>(param_1);
  if (in_ECX != iVar1) {
    uVar2 = FUN_00401c60();
    uVar3 = FUN_00401c60(uVar2);
    FUN_004025f0(uVar2,uVar3);
    FUN_0042bfb0(*param_1,(param_1[1] - *param_1) / 0x18);
  }
  return in_ECX;
}


/* ==== 00429a30  FUN_00429a30  size=197 ==== */

void FUN_00429a30(uint param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  int *in_ECX;
  
  uVar1 = FUN_00401c60();
  uVar2 = FUN_0040a390();
  if (uVar2 < param_1) {
    FUN_00401c80();
  }
  uVar3 = FUN_0042a360(param_1);
  if (*in_ECX != 0) {
    FUN_0040ea10(*in_ECX,in_ECX[1],uVar1);
    FUN_00405bf0(*in_ECX,(in_ECX[2] - *in_ECX) / 0x18);
    *in_ECX = 0;
    in_ECX[1] = 0;
    in_ECX[2] = 0;
  }
  FUN_0040a320(uVar3);
  return;
}


/* ==== 00429b00  FUN_00429b00  size=118 ==== */

int FUN_00429b00(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int in_ECX;
  
  iVar1 = _Unfancy<>(param_1);
  if (in_ECX != iVar1) {
    uVar2 = FUN_00401c60();
    uVar3 = FUN_00401c60(uVar2);
    FUN_004025f0(uVar2,uVar3);
    FUN_0042c150(*param_1,(param_1[1] - *param_1) / 0x18);
  }
  return in_ECX;
}


/* ==== 00429b80  FUN_00429b80  size=54 ==== */

void FUN_00429b80(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  _String_val<std::_Simple_types<char>_> *in_ECX;
  undefined4 uVar3;
  
  uVar1 = FUN_00405b00(param_1);
  uVar3 = *(undefined4 *)(in_ECX + 0x10);
  pcVar2 = std::_String_val<std::_Simple_types<char>_>::_Myptr(in_ECX);
  FUN_00410240(pcVar2,uVar3,param_1,uVar1);
  return;
}


/* ==== 00429bc0  FUN_00429bc0  size=41 ==== */

void FUN_00429bc0(undefined4 param_1,_String_val<std::_Simple_types<char>_> *param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_2 + 0x10);
  pcVar1 = std::_String_val<std::_Simple_types<char>_>::_Myptr(param_2);
  FUN_0042a3c0(param_1,pcVar1,uVar2);
  return;
}


/* ==== 00429bf0  FUN_00429bf0  size=343 ==== */

basic_string<char,std::char_traits<char>,std::allocator<char>_> *
FUN_00429bf0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5
            ,int param_6)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 local_2c;
  uint local_28;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_24;
  uint local_20;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_1c;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_18;
  undefined1 local_14;
  undefined1 local_13 [2];
  undefined1 local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070dfcd;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar1 = FUN_00401c60(DAT_007c5940 ^ (uint)&stack0xfffffffc);
  uVar1 = _Unfancy<>(local_13,uVar1);
  FUN_004060f0(local_14,uVar1);
  local_8 = 0;
  local_28 = param_4 + param_6;
  local_20 = 0xf;
  local_18 = local_1c;
  local_24 = local_1c;
  FUN_00401740(&DAT_0073f5f3,local_1c);
  if (local_20 < local_28) {
    uVar2 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::max_size(local_1c)
    ;
    local_20 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
               _Calculate_growth(local_28,0xf,uVar2);
    uVar1 = FUN_00401c60(&local_20);
    local_2c = FUN_00407750(uVar1);
    local_24 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               _Unfancy<>(local_2c);
    FUN_004064c0(local_18,&local_2c);
  }
  *(uint *)(local_18 + 0x10) = local_28;
  *(uint *)(local_18 + 0x14) = local_20;
  _Unchecked_idl0<>(local_24,param_3,param_4);
  _Unchecked_idl0<>(local_24 + param_4,param_5,param_6);
  local_11 = 0;
  FUN_00405cc0(local_24 + local_28,&local_11);
  FUN_00401710();
  ExceptionList = local_10;
  return local_1c;
}


/* ==== 00429d50  find  size=37 ==== */

/* Library Function - Multiple Matches With Same Base Name
    public: static char const * __cdecl std::_Narrow_char_traits<char,int>::find(char const *
   const,unsigned int,char const &)
    public: static char const * __cdecl std::char_traits<char>::find(char const * const,unsigned
   int,char const &)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void * find(void *param_1,size_t param_2,char *param_3)

{
  void *pvVar1;
  
  pvVar1 = _memchr(param_1,(int)*param_3,param_2);
  return pvVar1;
}


/* ==== 00429d80  FUN_00429d80  size=97 ==== */

void FUN_00429d80(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *in_ECX;
  
  uVar1 = FUN_00401c60(&param_1);
  iVar2 = FUN_0042c2b0(uVar1);
  *in_ECX = iVar2;
  in_ECX[1] = iVar2;
  in_ECX[2] = param_1 * 0x28 + iVar2;
  return;
}


/* ==== 00429df0  FUN_00429df0  size=84 ==== */

uint FUN_00429df0(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_0042a5a0();
  uVar2 = FUN_00429e50();
  if ((uVar1 <= uVar2 - (uVar1 >> 1)) && (uVar2 = (uVar1 >> 1) + uVar1, uVar2 < param_1)) {
    uVar2 = param_1;
  }
  return uVar2;
}


/* ==== 00429e50  FUN_00429e50  size=59 ==== */

uint FUN_00429e50(void)

{
  undefined4 uVar1;
  uint *puVar2;
  uint local_10;
  uint local_c [2];
  
  uVar1 = FUN_00401c60();
  local_c[0] = FUN_0042a5d0(uVar1);
  local_10 = FUN_00402140();
  puVar2 = std::_Max_value<unsigned_int>(&local_10,local_c);
  return *puVar2;
}


/* ==== 00429e90  FUN_00429e90  size=97 ==== */

void FUN_00429e90(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *in_ECX;
  
  uVar1 = FUN_00401c60(&param_1);
  iVar2 = FUN_0042c2d0(uVar1);
  *in_ECX = iVar2;
  in_ECX[1] = iVar2;
  in_ECX[2] = param_1 * 0x30 + iVar2;
  return;
}


/* ==== 00429f00  FUN_00429f00  size=59 ==== */

uint FUN_00429f00(void)

{
  undefined4 uVar1;
  uint *puVar2;
  uint local_10;
  uint local_c [2];
  
  uVar1 = FUN_00401c60();
  local_c[0] = FUN_0042a640(uVar1);
  local_10 = FUN_00402140();
  puVar2 = std::_Max_value<unsigned_int>(&local_10,local_c);
  return *puVar2;
}


/* ==== 00429f40  FUN_00429f40  size=100 ==== */

void FUN_00429f40(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *in_ECX;
  
  uVar1 = FUN_00401c60(&param_1);
  iVar2 = FUN_00410d90(uVar1);
  *in_ECX = iVar2;
  in_ECX[1] = iVar2;
  in_ECX[2] = param_1 * 0x90 + iVar2;
  return;
}


/* ==== 00429fb0  FUN_00429fb0  size=582 ==== */

void FUN_00429fb0(uint param_1)

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
      FUN_0042a540(uVar4,uVar5,0);
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
            goto LAB_0042a061;
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
LAB_0042a061:
    local_c = local_14;
  } while( true );
}


/* ==== 0042a200  FUN_0042a200  size=107 ==== */

uint FUN_0042a200(undefined4 param_1)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint local_14 [3];
  uint local_8;
  
  local_8 = FUN_0042a290();
  local_14[0] = FUN_0042a760(param_1);
  puVar2 = std::_Max_value<unsigned_int>((uint *)&DAT_00779404,local_14);
  uVar1 = *puVar2;
  uVar3 = local_8;
  if (((local_8 < uVar1) && (uVar3 = uVar1, local_8 < 0x200)) && (uVar1 <= local_8 << 3)) {
    uVar3 = local_8 << 3;
  }
  return uVar3;
}


/* ==== 0042a270  FUN_0042a270  size=21 ==== */

float10 FUN_0042a270(void)

{
  float *pfVar1;
  
  pfVar1 = (float *)FUN_00401c60();
  return (float10)*pfVar1;
}


/* ==== 0042a290  FUN_0042a290  size=17 ==== */

undefined4 FUN_0042a290(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x1c);
}


/* ==== 0042a2b0  FUN_0042a2b0  size=59 ==== */

uint FUN_0042a2b0(void)

{
  undefined4 uVar1;
  uint *puVar2;
  uint local_10;
  uint local_c [2];
  
  uVar1 = FUN_00401c60();
  local_c[0] = FUN_0042a890(uVar1);
  local_10 = FUN_00402140();
  puVar2 = std::_Max_value<unsigned_int>(&local_10,local_c);
  return *puVar2;
}


/* ==== 0042a2f0  FUN_0042a2f0  size=100 ==== */

void FUN_0042a2f0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *in_ECX;
  
  uVar1 = FUN_00401c60(&param_1);
  iVar2 = FUN_004083b0(uVar1);
  *in_ECX = iVar2;
  in_ECX[1] = iVar2;
  in_ECX[2] = param_1 * 0x134 + iVar2;
  return;
}


/* ==== 0042a360  FUN_0042a360  size=84 ==== */

uint FUN_0042a360(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_0042a8a0();
  uVar2 = FUN_0040a390();
  if ((uVar1 <= uVar2 - (uVar1 >> 1)) && (uVar2 = (uVar1 >> 1) + uVar1, uVar2 < param_1)) {
    uVar2 = param_1;
  }
  return uVar2;
}


/* ==== 0042a3c0  FUN_0042a3c0  size=286 ==== */

_String_val<std::_Simple_types<char>_> * FUN_0042a3c0(int param_1,char *param_2,uint param_3)

{
  char *pcVar1;
  char *pcVar2;
  _String_val<std::_Simple_types<char>_> *in_ECX;
  int iVar3;
  uint uVar4;
  
  Check_offset(param_1);
  iVar3 = *(int *)(in_ECX + 0x10);
  if ((uint)(*(int *)(in_ECX + 0x14) - iVar3) < param_3) {
    in_ECX = (_String_val<std::_Simple_types<char>_> *)
             FUN_0042c2f0(param_3,0,param_1,param_2,param_3);
  }
  else {
    *(uint *)(in_ECX + 0x10) = iVar3 + param_3;
    pcVar1 = std::_String_val<std::_Simple_types<char>_>::_Myptr(in_ECX);
    pcVar2 = pcVar1 + param_1;
    uVar4 = param_3;
    if ((pcVar2 < param_2 + param_3) && (param_2 <= pcVar1 + iVar3)) {
      if (param_2 < pcVar2) {
        uVar4 = (int)pcVar2 - (int)param_2;
      }
      else {
        uVar4 = 0;
      }
    }
    _Unchecked_idl0<>(pcVar2 + param_3,pcVar2,(iVar3 - param_1) + 1,pcVar1,iVar3,uVar4);
    _Unchecked_idl0<>(pcVar2,param_2,uVar4);
    _Unchecked_idl0<>(pcVar2 + uVar4,param_2 + uVar4 + param_3,param_3 - uVar4);
  }
  return in_ECX;
}


/* ==== 0042a4e0  FUN_0042a4e0  size=91 ==== */

void FUN_0042a4e0(int param_1,int param_2,int param_3,int param_4,undefined4 param_5,int param_6)

{
  _Unchecked_idl0<>(param_1,param_2,param_4);
  _Unchecked_idl0<>(param_1 + param_4,param_5,param_6);
  _Unchecked_idl0<>(param_1 + param_4 + param_6,param_2 + param_4,(param_3 - param_4) + 1);
  return;
}


/* ==== 0042a540  FUN_0042a540  size=30 ==== */

void FUN_0042a540(void)

{
  int *in_ECX;
  
  if (*in_ECX != 0) {
    FUN_0042a910();
  }
  return;
}


/* ==== 0042a560  FUN_0042a560  size=22 ==== */

undefined4 FUN_0042a560(void)

{
  undefined4 in_ECX;
  
  FUN_0042a600();
  return in_ECX;
}


/* ==== 0042a580  FUN_0042a580  size=19 ==== */

void FUN_0042a580(void)

{
  FUN_0042a620();
  return;
}


/* ==== 0042a5a0  FUN_0042a5a0  size=38 ==== */

int FUN_0042a5a0(void)

{
  int *in_ECX;
  
  return (in_ECX[2] - *in_ECX) / 0x28;
}


/* ==== 0042a5d0  FUN_0042a5d0  size=10 ==== */

undefined4 FUN_0042a5d0(void)

{
  return 0x6666666;
}


/* ==== 0042a5e0  FUN_0042a5e0  size=27 ==== */

int * FUN_0042a5e0(void)

{
  int *in_ECX;
  
  *in_ECX = *(int *)(*in_ECX + 4);
  return in_ECX;
}


/* ==== 0042a600  FUN_0042a600  size=26 ==== */

undefined4 * FUN_0042a600(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = *(undefined4 *)*in_ECX;
  return in_ECX;
}


/* ==== 0042a620  FUN_0042a620  size=19 ==== */

int FUN_0042a620(void)

{
  int *in_ECX;
  
  return *in_ECX + 8;
}


/* ==== 0042a640  FUN_0042a640  size=10 ==== */

undefined4 FUN_0042a640(void)

{
  return 0x5555555;
}


/* ==== 0042a650  FUN_0042a650  size=206 ==== */

void FUN_0042a650(uint param_1)

{
  _Container_proxy *p_Var1;
  uint uVar2;
  allocator<std::_Container_proxy> *this;
  _Container_proxy *p_Var3;
  int iVar4;
  undefined4 *in_ECX;
  
  uVar2 = size();
  this = (allocator<std::_Container_proxy> *)allocator<>();
  if (uVar2 < param_1) {
    p_Var3 = std::allocator<std::_Container_proxy>::allocate(this,param_1);
    iVar4 = FUN_0042a8d0();
    if (iVar4 != 0) {
      FUN_004025f0(*in_ECX,in_ECX[1]);
      FUN_00402300(*in_ECX,iVar4);
    }
    *in_ECX = p_Var3;
    p_Var1 = p_Var3 + param_1 * 4;
    in_ECX[1] = p_Var1;
    in_ECX[2] = p_Var1;
    FUN_0042c420(p_Var3,p_Var1,&stack0x00000008);
  }
  else {
    FUN_0042c4d0(*in_ECX,in_ECX[1],&stack0x00000008);
  }
  return;
}


/* ==== 0042a720  FUN_0042a720  size=59 ==== */

uint FUN_0042a720(void)

{
  undefined4 uVar1;
  uint *puVar2;
  uint local_10;
  uint local_c [2];
  
  uVar1 = allocator<>();
  local_c[0] = FUN_00402450(uVar1);
  local_10 = FUN_00402140();
  puVar2 = std::_Max_value<unsigned_int>(&local_10,local_c);
  return *puVar2;
}


/* ==== 0042a760  FUN_0042a760  size=104 ==== */

void FUN_0042a760(int param_1)

{
  float10 fVar1;
  float fVar2;
  double dVar3;
  
  dVar3 = (double)param_1 + *(double *)(&DAT_00795d70 + (param_1 >> 0x1f) * -8);
  fVar2 = (float)dVar3;
  fVar1 = (float10)FUN_0042a270();
  fVar1 = (float10)FUN_00414ed0(fVar2 / (float)fVar1);
  FUN_006e5600(dVar3,(float)fVar1);
  return;
}


/* ==== 0042a7d0  FUN_0042a7d0  size=31 ==== */

uint FUN_0042a7d0(undefined4 param_1)

{
  uint uVar1;
  int in_ECX;
  
  uVar1 = FUN_0040f0e0(param_1);
  return uVar1 & *(uint *)(in_ECX + 0x18);
}


/* ==== 0042a7f0  FUN_0042a7f0  size=31 ==== */

undefined4 FUN_0042a7f0(undefined4 param_1)

{
  FUN_0042a9c0(param_1);
  return param_1;
}


/* ==== 0042a810  FUN_0042a810  size=31 ==== */

undefined4 FUN_0042a810(undefined4 param_1)

{
  FUN_0042a9e0(param_1);
  return param_1;
}


/* ==== 0042a830  FUN_0042a830  size=91 ==== */

int FUN_0042a830(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar1 = *(int **)(param_2 + 4);
  *piVar1 = param_3;
  piVar2 = *(int **)(param_3 + 4);
  *piVar2 = param_1;
  piVar3 = *(int **)(param_1 + 4);
  *piVar3 = param_2;
  *(int **)(param_1 + 4) = piVar2;
  *(int **)(param_3 + 4) = piVar1;
  *(int **)(param_2 + 4) = piVar3;
  return param_3;
}


/* ==== 0042a890  FUN_0042a890  size=10 ==== */

undefined4 FUN_0042a890(void)

{
  return 0x5d1745d;
}


/* ==== 0042a8a0  FUN_0042a8a0  size=38 ==== */

int FUN_0042a8a0(void)

{
  int *in_ECX;
  
  return (in_ECX[2] - *in_ECX) / 0x18;
}


/* ==== 0042a8d0  FUN_0042a8d0  size=25 ==== */

int FUN_0042a8d0(void)

{
  int *in_ECX;
  
  return in_ECX[2] - *in_ECX >> 2;
}


/* ==== 0042a8f0  size  size=25 ==== */

/* Library Function - Multiple Matches With Same Base Name
    public: unsigned int __thiscall `anonymous namespace'::argument_list<char>::size(void)const 
    public: unsigned int __thiscall `anonymous namespace'::argument_list<char>::size(void)const 
    public: unsigned int __thiscall `anonymous namespace'::argument_list<char>::size(void)const 
    public: unsigned int __thiscall `anonymous namespace'::argument_list<wchar_t>::size(void)const 
     6 names - too many to list
   
   Libraries: Visual Studio 2015 Debug, Visual Studio 2017 Debug, Visual Studio 2019 Debug */

int size(void)

{
  int *in_ECX;
  
  return in_ECX[1] - *in_ECX >> 2;
}


/* ==== 0042a910  FUN_0042a910  size=165 ==== */

void FUN_0042a910(void)

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
      FUN_0042aa10(*local_1c,local_1c);
    }
    else {
      FUN_0042ac00();
      uVar2 = FUN_0042a7f0(local_20);
      FUN_0042c4d0(*(undefined4 *)(local_14 + 0xc),*(undefined4 *)(local_14 + 0x10),uVar2);
    }
  }
  ExceptionList = local_10;
  return;
}


/* ==== 0042a9c0  FUN_0042a9c0  size=32 ==== */

undefined4 FUN_0042a9c0(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  _Vector_iterator<>(*in_ECX,0);
  return param_1;
}


/* ==== 0042a9e0  FUN_0042a9e0  size=34 ==== */

undefined4 FUN_0042a9e0(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  _Vector_iterator<>(*(undefined4 *)*in_ECX,0);
  return param_1;
}


/* ==== 0042aa10  FUN_0042aa10  size=487 ==== */

int FUN_0042aa10(int param_1,int param_2)

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
      FUN_0042ac90();
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
          while (FUN_0042ac90(), local_4c != iVar8) {
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


/* ==== 0042ac00  FUN_0042ac00  size=85 ==== */

void FUN_0042ac00(void)

{
  undefined4 uVar1;
  int *in_ECX;
  
  FUN_00401710();
  uVar1 = FUN_00401c60(*in_ECX);
  FUN_0042c530(uVar1);
  *(int *)*in_ECX = *in_ECX;
  *(int *)(*in_ECX + 4) = *in_ECX;
  in_ECX[1] = 0;
  return;
}


/* ==== 0042ac60  FUN_0042ac60  size=40 ==== */

void FUN_0042ac60(void)

{
  int in_ECX;
  
  **(undefined4 **)(in_ECX + 4) = *(undefined4 *)(in_ECX + 8);
  *(undefined4 *)(*(int *)(in_ECX + 8) + 4) = *(undefined4 *)(in_ECX + 4);
  return;
}


/* ==== 0042ac90  FUN_0042ac90  size=75 ==== */

void FUN_0042ac90(void)

{
  int *piVar1;
  undefined4 uVar2;
  int *in_ECX;
  
  piVar1 = (int *)in_ECX[2];
  in_ECX[2] = *piVar1;
  uVar2 = FUN_00401c60(piVar1);
  FUN_004101d0(uVar2);
  *(int *)(*in_ECX + 4) = *(int *)(*in_ECX + 4) + -1;
  return;
}


/* ==== 0042ace0  FUN_0042ace0  size=45 ==== */

undefined4 * FUN_0042ace0(undefined4 param_1,int param_2)

{
  undefined4 *in_ECX;
  
  *in_ECX = param_1;
  in_ECX[1] = *(undefined4 *)(param_2 + 4);
  in_ECX[2] = param_2;
  return in_ECX;
}


/* ==== 0042ad10  FUN_0042ad10  size=88 ==== */

undefined4 FUN_0042ad10(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  cVar1 = FUN_0042cb60(param_3);
  if (cVar1 != '\0') {
    uVar2 = FUN_00402d20(&param_1);
    uVar3 = FUN_00402d20(&param_2,*param_3);
    param_2 = FUN_0042cbb0(uVar2,uVar3);
  }
  return param_2;
}


/* ==== 0042ad90  FUN_0042ad90  size=20 ==== */

void FUN_0042ad90(undefined4 param_1,undefined4 *param_2)

{
  FUN_0042c850(*param_2);
  return;
}


/* ==== 0042adb0  FUN_0042adb0  size=17 ==== */

void FUN_0042adb0(undefined4 param_1)

{
  FUN_00429b80(param_1);
  return;
}


/* ==== 0042add0  FUN_0042add0  size=115 ==== */

int FUN_0042add0(undefined4 param_1,int param_2,int param_3)

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
  FUN_0042aea0(uVar1,param_2,uVar2);
  ExceptionList = local_10;
  return param_2 * 0x28 + param_3;
}


/* ==== 0042aea0  FUN_0042aea0  size=62 ==== */

void FUN_0042aea0(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00402d20(&param_1);
  FUN_00403360(uVar1,param_3,param_2 * 0x28,param_2);
  return;
}


/* ==== 0042aee0  FUN_0042aee0  size=31 ==== */

void FUN_0042aee0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0042aea0(param_1,param_2,param_3);
  return;
}


/* ==== 0042af40  FUN_0042af40  size=92 ==== */

int FUN_0042af40(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  int *piVar2;
  
  piVar2 = (int *)(in_ECX + 4);
  FUN_0042cc10(*piVar2,param_1);
  FUN_004023d0(*piVar2,*piVar2);
  iVar1 = *piVar2;
  *piVar2 = *piVar2 + 0x28;
  return iVar1;
}


/* ==== 0042afa0  FUN_0042afa0  size=461 ==== */

int FUN_0042afa0(int param_1,undefined4 param_2)

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
  puStack_c = &LAB_0070dffd;
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
  FUN_0042cc50(local_18,uVar3);
  *local_3c = local_20 * 0x28 + local_14;
  if (param_1 == *local_28) {
    FUN_0042cc80(*local_24,*local_28,local_14,local_18);
  }
  else {
    FUN_0042cc80(*local_24,param_1,local_14,local_18);
    *local_3c = local_14;
    FUN_0042cc80(param_1,*local_28,local_14 + 0x28 + local_20 * 0x28,local_18);
  }
  uVar3 = 0;
  FUN_0042c770(local_14,local_40,local_2c);
  local_44 = local_20 * 0x28 + local_14;
  local_8 = 0xffffffff;
  FUN_0042c720(uVar1,uVar4,uVar3);
  ExceptionList = local_10;
  return local_44;
}


/* ==== 0042b180  FUN_0042b180  size=172 ==== */

undefined4 FUN_0042b180(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070e02d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_18 = FUN_00402d20(&param_1,DAT_007c5940 ^ (uint)&stack0xfffffffc);
  iVar1 = FUN_00402d20(&param_2);
  FUN_00403180(param_3,param_4);
  local_8 = 0;
  for (; local_18 != iVar1; local_18 = local_18 + 0x30) {
    FUN_0042cd60(local_18);
  }
  uVar2 = FUN_00403130();
  local_8 = 0xffffffff;
  FUN_0042c6f0();
  ExceptionList = local_10;
  return uVar2;
}


/* ==== 0042b230  FUN_0042b230  size=318 ==== */

void FUN_0042b230(uint param_1)

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
  puStack_c = &LAB_0070e05d;
  local_10 = ExceptionList;
  uVar1 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar2 = FUN_00410620(uVar1);
  if (uVar2 < param_1) {
    FUN_00401c80();
  }
  local_18 = FUN_00401c60();
  local_28 = local_14;
  local_34 = local_14;
  local_30 = local_14 + 1;
  local_2c = (*local_30 - *local_14) / 0x90;
  local_24 = FUN_004105c0(param_1);
  local_1c = FUN_00410d90(local_18,&local_24);
  local_3c = local_2c * 0x90 + local_1c;
  local_8 = 0;
  local_38 = &local_3c;
  uVar4 = local_18;
  local_20 = local_3c;
  iVar3 = FUN_0042b370(local_3c,param_1 - local_2c,local_18,uVar1,local_18,local_1c,local_24,
                       local_3c);
  *local_38 = iVar3;
  FUN_00410db0(*local_34,*local_30,local_1c,local_18);
  uVar5 = 0;
  FUN_00410510(local_1c,param_1,local_24);
  local_8 = 0xffffffff;
  FUN_00410470(uVar1,uVar4,uVar5);
  ExceptionList = local_10;
  return;
}


/* ==== 0042b370  FUN_0042b370  size=132 ==== */

undefined4 FUN_0042b370(undefined4 param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070e08d;
  local_10 = ExceptionList;
  uVar1 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_00403180(param_1,param_3);
  local_8 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_0042cda0();
  }
  uVar2 = FUN_00403130(uVar1);
  local_8 = 0xffffffff;
  FUN_00411a70();
  ExceptionList = local_10;
  return uVar2;
}


/* ==== 0042b400  FUN_0042b400  size=166 ==== */

undefined4 FUN_0042b400(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070cafd;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_18 = FUN_00402d20(&param_1,DAT_007c5940 ^ (uint)&stack0xfffffffc);
  FUN_00403180(param_3,param_4);
  local_8 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_0042cde0(local_18);
    local_18 = local_18 + 0x90;
  }
  uVar1 = FUN_00403130();
  local_8 = 0xffffffff;
  FUN_00411a70();
  ExceptionList = local_10;
  return uVar1;
}


/* ==== 0042b4b0  FUN_0042b4b0  size=63 ==== */

int FUN_0042b4b0(int param_1,int param_2,int param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_00429030(param_1);
    param_3 = param_3 + 0x90;
    param_1 = param_1 + 0x90;
  }
  return param_3;
}


/* ==== 0042b4f0  FUN_0042b4f0  size=110 ==== */

int FUN_0042b4f0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  int *piVar3;
  
  piVar3 = (int *)(in_ECX + 4);
  uVar2 = _Unfancy<>(*piVar3,param_1);
  uVar2 = FUN_00401c60(uVar2);
  FUN_0042ce30(uVar2);
  FUN_004023d0(*piVar3,*piVar3);
  iVar1 = *piVar3;
  *piVar3 = *piVar3 + 0x20;
  return iVar1;
}


/* ==== 0042b560  FUN_0042b560  size=457 ==== */

int FUN_0042b560(int param_1,undefined4 param_2)

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
  puStack_c = &LAB_0070e0bd;
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
  FUN_0042ce30(local_18,uVar3);
  *local_3c = local_20 * 0x20 + local_14;
  if (param_1 == *local_28) {
    FUN_0042ce80(*local_24,*local_28,local_14,local_18);
  }
  else {
    FUN_0042ce80(*local_24,param_1,local_14,local_18);
    *local_3c = local_14;
    FUN_0042ce80(param_1,*local_28,local_14 + 0x20 + local_20 * 0x20,local_18);
  }
  uVar3 = 0;
  FUN_0042c8a0(local_14,local_40,local_2c);
  local_44 = local_20 * 0x20 + local_14;
  local_8 = 0xffffffff;
  FUN_0042c6a0(uVar1,uVar4,uVar3);
  ExceptionList = local_10;
  return local_44;
}


/* ==== 0042b730  FUN_0042b730  size=137 ==== */

undefined4 *
FUN_0042b730(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070e0ed;
  local_10 = ExceptionList;
  uVar1 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_00407de0(param_1);
  local_8 = 0;
  FUN_0040a710(uVar1);
  uVar2 = _Unfancy<>(in_ECX[1] + 8,param_2,param_3,param_4);
  FUN_0042cf30(*in_ECX,uVar2);
  ExceptionList = local_10;
  return in_ECX;
}


/* ==== 0042b7c0  FUN_0042b7c0  size=166 ==== */

undefined4 FUN_0042b7c0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070c2ad;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_18 = FUN_00402d20(&param_1,DAT_007c5940 ^ (uint)&stack0xfffffffc);
  FUN_00403180(param_3,param_4);
  local_8 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_0042cf80(local_18);
    local_18 = local_18 + 0x134;
  }
  uVar1 = FUN_00403130();
  local_8 = 0xffffffff;
  FUN_004089d0();
  ExceptionList = local_10;
  return uVar1;
}


/* ==== 0042b870  FUN_0042b870  size=63 ==== */

int FUN_0042b870(int param_1,int param_2,int param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_00426840(param_1);
    param_3 = param_3 + 0x134;
    param_1 = param_1 + 0x134;
  }
  return param_3;
}


/* ==== 0042b8b0  FUN_0042b8b0  size=92 ==== */

int FUN_0042b8b0(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  int *piVar2;
  
  piVar2 = (int *)(in_ECX + 4);
  FUN_0042cfd0(*piVar2,param_1);
  FUN_004023d0(*piVar2,*piVar2);
  iVar1 = *piVar2;
  *piVar2 = *piVar2 + 0x18;
  return iVar1;
}


/* ==== 0042b910  FUN_0042b910  size=461 ==== */

int FUN_0042b910(int param_1,undefined4 param_2)

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
  puStack_c = &LAB_0070e11d;
  local_10 = ExceptionList;
  uVar1 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_18 = FUN_00401c60(uVar1);
  local_30 = local_1c;
  local_24 = local_1c;
  local_28 = local_1c + 1;
  local_20 = (param_1 - *local_1c) / 0x18;
  local_34 = (*local_28 - *local_1c) / 0x18;
  iVar2 = FUN_0040a390();
  if (local_34 == iVar2) {
    FUN_00401c80();
  }
  local_40 = local_34 + 1;
  local_2c = FUN_0042a360(local_40);
  local_14 = FUN_0040a510(local_18,&local_2c);
  local_4c = local_14 + 0x18 + local_20 * 0x18;
  local_8 = 0;
  local_3c = &local_4c;
  uVar4 = local_18;
  local_48 = local_4c;
  local_38 = local_4c;
  uVar3 = _Unfancy<>(local_20 * 0x18 + local_14,param_2,uVar1,local_18,local_14,local_2c);
  FUN_0040a790(local_18,uVar3);
  *local_3c = local_20 * 0x18 + local_14;
  if (param_1 == *local_28) {
    FUN_0042d020(*local_24,*local_28,local_14,local_18);
  }
  else {
    FUN_0042d020(*local_24,param_1,local_14,local_18);
    *local_3c = local_14;
    FUN_0042d020(param_1,*local_28,local_14 + 0x18 + local_20 * 0x18,local_18);
  }
  uVar3 = 0;
  FUN_0042c9b0(local_14,local_40,local_2c);
  local_44 = local_20 * 0x18 + local_14;
  local_8 = 0xffffffff;
  FUN_0042c650(uVar1,uVar4,uVar3);
  ExceptionList = local_10;
  return local_44;
}


/* ==== 0042bae0  FUN_0042bae0  size=117 ==== */

int FUN_0042bae0(undefined4 param_1,int param_2,int param_3)

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
  FUN_0042bbc0(uVar1,param_2,uVar2);
  ExceptionList = local_10;
  return param_3 + param_2 * 4;
}


/* ==== 0042bbc0  FUN_0042bbc0  size=64 ==== */

void FUN_0042bbc0(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00402d20(&param_1);
  FUN_00403360(uVar1,param_3,param_2 << 2,param_2);
  return;
}


/* ==== 0042bc00  FUN_0042bc00  size=27 ==== */

void FUN_0042bc00(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0042bbc0(param_1,param_2,param_3);
  return;
}


/* ==== 0042bc50  FUN_0042bc50  size=164 ==== */

undefined4 FUN_0042bc50(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070cb2d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_18 = FUN_00402d20(&param_1,DAT_007c5940 ^ (uint)&stack0xfffffffc);
  FUN_00403180(param_3,param_4);
  local_8 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_00409c20(local_18);
    local_18 = local_18 + 0x60;
  }
  uVar1 = FUN_00403130();
  local_8 = 0xffffffff;
  FUN_00409ac0();
  ExceptionList = local_10;
  return uVar1;
}


/* ==== 0042bd00  FUN_0042bd00  size=58 ==== */

int FUN_0042bd00(int param_1,int param_2,int param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_00429180(param_1);
    param_3 = param_3 + 0x60;
    param_1 = param_1 + 0x60;
  }
  return param_3;
}


/* ==== 0042bd40  FUN_0042bd40  size=110 ==== */

int FUN_0042bd40(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  int *piVar3;
  
  piVar3 = (int *)(in_ECX + 4);
  uVar2 = _Unfancy<>(*piVar3,param_1);
  uVar2 = FUN_00401c60(uVar2);
  FUN_00409e40(uVar2);
  FUN_004023d0(*piVar3,*piVar3);
  iVar1 = *piVar3;
  *piVar3 = *piVar3 + 0x60;
  return iVar1;
}


/* ==== 0042bdb0  FUN_0042bdb0  size=461 ==== */

int FUN_0042bdb0(int param_1,undefined4 param_2)

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
  puStack_c = &LAB_0070e14d;
  local_10 = ExceptionList;
  uVar1 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_18 = FUN_00401c60(uVar1);
  local_30 = local_1c;
  local_24 = local_1c;
  local_28 = local_1c + 1;
  local_20 = (param_1 - *local_1c) / 0x60;
  local_34 = (*local_28 - *local_1c) / 0x60;
  iVar2 = FUN_00409220();
  if (local_34 == iVar2) {
    FUN_00401c80();
  }
  local_40 = local_34 + 1;
  local_2c = FUN_00410950(local_40);
  local_14 = FUN_00409600(local_18,&local_2c);
  local_4c = local_14 + 0x60 + local_20 * 0x60;
  local_8 = 0;
  local_3c = &local_4c;
  uVar4 = local_18;
  local_48 = local_4c;
  local_38 = local_4c;
  uVar3 = _Unfancy<>(local_20 * 0x60 + local_14,param_2,uVar1,local_18,local_14,local_2c);
  FUN_00409e40(local_18,uVar3);
  *local_3c = local_20 * 0x60 + local_14;
  if (param_1 == *local_28) {
    FUN_00411010(*local_24,*local_28,local_14,local_18);
  }
  else {
    FUN_00411010(*local_24,param_1,local_14,local_18);
    *local_3c = local_14;
    FUN_00411010(param_1,*local_28,local_14 + 0x60 + local_20 * 0x60,local_18);
  }
  uVar3 = 0;
  FUN_004108a0(local_14,local_40,local_2c);
  local_44 = local_20 * 0x60 + local_14;
  local_8 = 0xffffffff;
  FUN_004103d0(uVar1,uVar4,uVar3);
  ExceptionList = local_10;
  return local_44;
}


/* ==== 0042bf80  FUN_0042bf80  size=26 ==== */

void FUN_0042bf80(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_006e45e0(param_1,param_2,param_3,param_4);
  return;
}


/* ==== 0042bfb0  FUN_0042bfb0  size=409 ==== */

/* WARNING: Removing unreachable block (ram,0x0042c08f) */
/* WARNING: Removing unreachable block (ram,0x0042c0ab) */
/* WARNING: Removing unreachable block (ram,0x0042c099) */

void FUN_0042bfb0(int param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int *in_ECX;
  int *piVar4;
  
  uVar1 = FUN_00401c60();
  piVar4 = in_ECX + 1;
  FUN_00401710();
  if ((uint)((in_ECX[2] - *in_ECX) / 0x18) < param_2) {
    FUN_0042ca60(param_2);
    iVar2 = FUN_0042d100(param_1,param_2,*in_ECX,uVar1);
    *piVar4 = iVar2;
  }
  else {
    uVar3 = (*piVar4 - *in_ECX) / 0x18;
    if (uVar3 < param_2) {
      FUN_0042d1d0(param_1,uVar3,*in_ECX);
      iVar2 = FUN_0042d100(uVar3 * 0x18 + param_1,param_2 - uVar3,*piVar4,uVar1);
      *piVar4 = iVar2;
    }
    else {
      iVar2 = param_2 * 0x18 + *in_ECX;
      FUN_0042d210(param_1,param_2,*in_ECX);
      FUN_004025f0(iVar2,*piVar4,uVar1);
      *piVar4 = iVar2;
    }
  }
  return;
}


/* ==== 0042c150  FUN_0042c150  size=342 ==== */

void FUN_0042c150(int param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int *in_ECX;
  int *piVar4;
  int local_18;
  
  uVar1 = FUN_00401c60();
  piVar4 = in_ECX + 1;
  FUN_00401710();
  if ((uint)((in_ECX[2] - *in_ECX) / 0x18) < param_2) {
    FUN_00429a30(param_2);
    iVar2 = FUN_0042d280(param_1,param_2,*in_ECX,uVar1);
    *piVar4 = iVar2;
  }
  else {
    uVar3 = (*piVar4 - *in_ECX) / 0x18;
    if (uVar3 < param_2) {
      for (local_18 = *in_ECX; local_18 != *piVar4; local_18 = local_18 + 0x18) {
        FUN_0040d840(param_1);
        param_1 = param_1 + 0x18;
      }
      iVar2 = FUN_0042d280(param_1,param_2 - uVar3,*piVar4,uVar1);
      *piVar4 = iVar2;
    }
    else {
      iVar2 = param_2 * 0x18 + *in_ECX;
      FUN_0042d330(param_1,param_2,*in_ECX);
      FUN_0040ea10(iVar2,*piVar4,uVar1);
      *piVar4 = iVar2;
    }
  }
  return;
}


/* ==== 0042c2b0  FUN_0042c2b0  size=19 ==== */

void FUN_0042c2b0(undefined4 param_1,undefined4 *param_2)

{
  allocate(*param_2);
  return;
}


/* ==== 0042c2d0  FUN_0042c2d0  size=19 ==== */

void FUN_0042c2d0(undefined4 param_1,undefined4 *param_2)

{
  allocate(*param_2);
  return;
}


/* ==== 0042c2f0  FUN_0042c2f0  size=292 ==== */

basic_string<char,std::char_traits<char>,std::allocator<char>_> *
FUN_0042c2f0(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *in_ECX;
  int iVar6;
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
    FUN_0042a4e0(uVar4,local_8,local_10,param_3,param_4,param_5);
    FUN_004064c0(local_8,&local_14);
  }
  else {
    uVar1 = *(undefined4 *)local_8;
    iVar6 = local_10;
    uVar5 = _Unfancy<>(uVar1,local_10,param_3,param_4,param_5);
    FUN_0042a4e0(uVar4,uVar5,iVar6,param_3,param_4,param_5);
    FUN_00405c30(uVar3,uVar1,uVar2);
    *(undefined4 *)local_8 = local_14;
  }
  return local_c;
}


/* ==== 0042c420  FUN_0042c420  size=164 ==== */

void FUN_0042c420(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070e17d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_004025f0(&param_1,&param_2,DAT_007c5940 ^ (uint)&stack0xfffffffc);
  uVar1 = FUN_00402d20(&param_1);
  iVar2 = FUN_00402d20(&param_2);
  FUN_0042c620(uVar1);
  local_8 = 0;
  while (local_1c != iVar2) {
    FUN_0042d370(param_3);
  }
  FUN_00403130();
  local_8 = 0xffffffff;
  FUN_0042c600();
  ExceptionList = local_10;
  return;
}


/* ==== 0042c4d0  FUN_0042c4d0  size=87 ==== */

void FUN_0042c4d0(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *local_8;
  
  FUN_004025f0(&param_1,&param_2);
  local_8 = (undefined4 *)FUN_00402d20(&param_1);
  puVar1 = (undefined4 *)FUN_00402d20(&param_2);
  for (; local_8 != puVar1; local_8 = local_8 + 1) {
    *local_8 = *param_3;
  }
  return;
}


/* ==== 0042c530  FUN_0042c530  size=70 ==== */

void FUN_0042c530(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *local_8;
  
  *(undefined4 *)param_2[1] = 0;
  local_8 = (undefined4 *)*param_2;
  while (local_8 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*local_8;
    FUN_004101d0(param_1,local_8);
    local_8 = puVar1;
  }
  return;
}


/* ==== 0042c5e0  FUN_0042c5e0  size=20 ==== */

void FUN_0042c5e0(void)

{
  FUN_004018f0();
  return;
}


/* ==== 0042c600  FUN_0042c600  size=32 ==== */

void FUN_0042c600(void)

{
  undefined4 *in_ECX;
  
  FUN_004025f0(*in_ECX,in_ECX[1]);
  return;
}


/* ==== 0042c620  FUN_0042c620  size=33 ==== */

undefined4 * FUN_0042c620(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = param_1;
  in_ECX[1] = param_1;
  return in_ECX;
}


/* ==== 0042c650  FUN_0042c650  size=73 ==== */

void FUN_0042c650(void)

{
  undefined4 *in_ECX;
  
  if (in_ECX[1] != 0) {
    FUN_004025f0(in_ECX[3],in_ECX[4],*in_ECX);
    FUN_00405bf0(in_ECX[1],in_ECX[2]);
  }
  return;
}


/* ==== 0042c6a0  FUN_0042c6a0  size=73 ==== */

void FUN_0042c6a0(void)

{
  undefined4 *in_ECX;
  
  if (in_ECX[1] != 0) {
    FUN_00428f20(in_ECX[3],in_ECX[4],*in_ECX);
    FUN_00407060(in_ECX[1],in_ECX[2]);
  }
  return;
}


/* ==== 0042c6f0  FUN_0042c6f0  size=39 ==== */

void FUN_0042c6f0(void)

{
  undefined4 *in_ECX;
  
  FUN_00428eb0(*in_ECX,in_ECX[1],in_ECX[2]);
  return;
}


/* ==== 0042c720  FUN_0042c720  size=73 ==== */

void FUN_0042c720(void)

{
  undefined4 *in_ECX;
  
  if (in_ECX[1] != 0) {
    FUN_004025f0(in_ECX[3],in_ECX[4],*in_ECX);
    FUN_00411d70(in_ECX[1],in_ECX[2]);
  }
  return;
}


/* ==== 0042c770  FUN_0042c770  size=163 ==== */

void FUN_0042c770(int param_1,int param_2,int param_3)

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
    FUN_004025f0(*in_ECX,*piVar3,uVar1);
    FUN_00411d70(*in_ECX,(*piVar2 - *in_ECX) / 0x28);
  }
  *in_ECX = param_1;
  *piVar3 = param_2 * 0x28 + param_1;
  *piVar2 = param_3 * 0x28 + param_1;
  return;
}


/* ==== 0042c820  allocate  size=34 ==== */

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
  
  uVar1 = FUN_0042d3a0(param_1);
  FUN_00403080(uVar1);
  return;
}


/* ==== 0042c850  FUN_0042c850  size=30 ==== */

void FUN_0042c850(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  
  uVar1 = _Unfancy<>(param_1);
  *in_ECX = uVar1;
  return;
}


/* ==== 0042c870  allocate  size=34 ==== */

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
  
  uVar1 = FUN_0042d3d0(param_1);
  FUN_00403080(uVar1);
  return;
}


/* ==== 0042c8a0  FUN_0042c8a0  size=162 ==== */

void FUN_0042c8a0(int param_1,int param_2,int param_3)

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
    FUN_00428f20(*in_ECX,*piVar3,uVar1);
    FUN_00407060(*in_ECX,*piVar2 - *in_ECX >> 5);
  }
  *in_ECX = param_1;
  *piVar3 = param_2 * 0x20 + param_1;
  *piVar2 = param_3 * 0x20 + param_1;
  return;
}


/* ==== 0042c950  FUN_0042c950  size=84 ==== */

uint FUN_0042c950(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_0042cb30();
  uVar2 = FUN_00406f30();
  if ((uVar1 <= uVar2 - (uVar1 >> 1)) && (uVar2 = (uVar1 >> 1) + uVar1, uVar2 < param_1)) {
    uVar2 = param_1;
  }
  return uVar2;
}


/* ==== 0042c9b0  FUN_0042c9b0  size=163 ==== */

void FUN_0042c9b0(int param_1,int param_2,int param_3)

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
    FUN_004025f0(*in_ECX,*piVar3,uVar1);
    FUN_00405bf0(*in_ECX,(*piVar2 - *in_ECX) / 0x18);
  }
  *in_ECX = param_1;
  *piVar3 = param_2 * 0x18 + param_1;
  *piVar2 = param_3 * 0x18 + param_1;
  return;
}


/* ==== 0042ca60  FUN_0042ca60  size=197 ==== */

void FUN_0042ca60(uint param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  int *in_ECX;
  
  uVar1 = FUN_00401c60();
  uVar2 = FUN_0040a390();
  if (uVar2 < param_1) {
    FUN_00401c80();
  }
  uVar3 = FUN_0042a360(param_1);
  if (*in_ECX != 0) {
    FUN_004025f0(*in_ECX,in_ECX[1],uVar1);
    FUN_00405bf0(*in_ECX,(in_ECX[2] - *in_ECX) / 0x18);
    *in_ECX = 0;
    in_ECX[1] = 0;
    in_ECX[2] = 0;
  }
  FUN_0040a320(uVar3);
  return;
}


/* ==== 0042cb30  FUN_0042cb30  size=33 ==== */

int FUN_0042cb30(void)

{
  int *in_ECX;
  
  return in_ECX[2] - *in_ECX >> 5;
}


/* ==== 0042cb60  FUN_0042cb60  size=66 ==== */

bool FUN_0042cb60(int *param_1)

{
  return -0x80000000 <= *param_1;
}


/* ==== 0042cbb0  FUN_0042cbb0  size=22 ==== */

void FUN_0042cbb0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_006e4470(param_1,param_2,param_3);
  return;
}


/* ==== 0042cbd0  FUN_0042cbd0  size=63 ==== */

void FUN_0042cbd0(undefined4 param_1)

{
  undefined4 uVar1;
  int in_ECX;
  
  uVar1 = _Unfancy<>(*(undefined4 *)(in_ECX + 4),param_1);
  FUN_0042cc50(*(undefined4 *)(in_ECX + 8),uVar1);
  *(int *)(in_ECX + 4) = *(int *)(in_ECX + 4) + 0x28;
  return;
}


/* ==== 0042cc10  FUN_0042cc10  size=51 ==== */

void FUN_0042cc10(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  uVar1 = _Unfancy<>(param_1);
  puVar2 = (undefined4 *)FUN_004013e0(0x28,uVar1);
  for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  return;
}


/* ==== 0042cc50  FUN_0042cc50  size=42 ==== */

void FUN_0042cc50(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_004013e0(0x28,param_2);
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = *param_3;
    param_3 = param_3 + 1;
    puVar1 = puVar1 + 1;
  }
  return;
}


/* ==== 0042cc80  FUN_0042cc80  size=133 ==== */

int FUN_0042cc80(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0070be4d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = FUN_00402d20(&param_1,DAT_007c5940 ^ (uint)&stack0xfffffffc);
  iVar2 = FUN_00402d20(&param_2);
  uVar3 = _Unfancy<>(param_3);
  FUN_0042d470(iVar1,iVar2,uVar3);
  ExceptionList = local_10;
  return ((iVar2 - iVar1) / 0x28) * 0x28 + param_3;
}


/* ==== 0042cd60  FUN_0042cd60  size=63 ==== */

void FUN_0042cd60(undefined4 param_1)

{
  undefined4 uVar1;
  int in_ECX;
  
  uVar1 = _Unfancy<>(*(undefined4 *)(in_ECX + 4),param_1);
  FUN_0042d4e0(*(undefined4 *)(in_ECX + 8),uVar1);
  *(int *)(in_ECX + 4) = *(int *)(in_ECX + 4) + 0x30;
  return;
}


/* ==== 0042cda0  FUN_0042cda0  size=60 ==== */

void FUN_0042cda0(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  uVar1 = _Unfancy<>(*(undefined4 *)(in_ECX + 4));
  FUN_0042d510(*(undefined4 *)(in_ECX + 8),uVar1);
  *(int *)(in_ECX + 4) = *(int *)(in_ECX + 4) + 0x90;
  return;
}


/* ==== 0042cde0  FUN_0042cde0  size=65 ==== */

void FUN_0042cde0(undefined4 param_1)

{
  undefined4 uVar1;
  int in_ECX;
  
  uVar1 = _Unfancy<>(*(undefined4 *)(in_ECX + 4),param_1);
  FUN_00410d60(*(undefined4 *)(in_ECX + 8),uVar1);
  *(int *)(in_ECX + 4) = *(int *)(in_ECX + 4) + 0x90;
  return;
}


/* ==== 0042ce30  FUN_0042ce30  size=38 ==== */

void FUN_0042ce30(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_004013e0(0x20,param_2);
  FUN_0042d400(param_3);
  return;
}


/* ==== 0042ce60  FUN_0042ce60  size=19 ==== */

void FUN_0042ce60(allocator<std::_Container_proxy> *param_1,uint *param_2)

{
  std::allocator<std::_Container_proxy>::allocate(param_1,*param_2);
  return;
}


/* ==== 0042ce80  FUN_0042ce80  size=168 ==== */

undefined4 FUN_0042ce80(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070e1ad;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = FUN_00402d20(&param_1,DAT_007c5940 ^ (uint)&stack0xfffffffc);
  iVar1 = FUN_00402d20(&param_2);
  FUN_00403180(param_3,param_4);
  local_8 = 0;
  for (; local_14 != iVar1; local_14 = local_14 + 0x20) {
    FUN_0042d540(local_14);
  }
  uVar2 = FUN_00403130();
  local_8 = 0xffffffff;
  FUN_0042d440();
  ExceptionList = local_10;
  return uVar2;
}


/* ==== 0042cf30  FUN_0042cf30  size=65 ==== */

void FUN_0042cf30(undefined4 param_1,undefined4 param_2,undefined1 *param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar1;
  undefined4 uVar2;
  
  FUN_004013e0(0x24,param_2);
  uVar2 = extraout_ECX;
  FUN_00402770(param_5);
  uVar1 = extraout_ECX_00;
  FUN_00407970(param_4);
  FUN_0042d580(*param_3,uVar1,uVar2);
  return;
}


/* ==== 0042cf80  FUN_0042cf80  size=65 ==== */

void FUN_0042cf80(undefined4 param_1)

{
  undefined4 uVar1;
  int in_ECX;
  
  uVar1 = _Unfancy<>(*(undefined4 *)(in_ECX + 4),param_1);
  FUN_00408380(*(undefined4 *)(in_ECX + 8),uVar1);
  *(int *)(in_ECX + 4) = *(int *)(in_ECX + 4) + 0x134;
  return;
}


/* ==== 0042cfd0  FUN_0042cfd0  size=74 ==== */

void FUN_0042cfd0(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  uVar1 = _Unfancy<>(param_1);
  puVar2 = (undefined4 *)FUN_004013e0(0x18,uVar1);
  *puVar2 = *param_2;
  puVar2[1] = param_2[1];
  puVar2[2] = param_2[2];
  puVar2[3] = param_2[3];
  puVar2[4] = param_2[4];
  puVar2[5] = param_2[5];
  return;
}


/* ==== 0042d020  FUN_0042d020  size=133 ==== */

int FUN_0042d020(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0070be4d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = FUN_00402d20(&param_1,DAT_007c5940 ^ (uint)&stack0xfffffffc);
  iVar2 = FUN_00402d20(&param_2);
  uVar3 = _Unfancy<>(param_3);
  FUN_0040a630(iVar1,iVar2,uVar3);
  ExceptionList = local_10;
  return ((iVar2 - iVar1) / 0x18) * 0x18 + param_3;
}


/* ==== 0042d100  FUN_0042d100  size=115 ==== */

int FUN_0042d100(undefined4 param_1,int param_2,int param_3)

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
  FUN_0042d1d0(uVar1,param_2,uVar2);
  ExceptionList = local_10;
  return param_2 * 0x18 + param_3;
}


/* ==== 0042d1d0  FUN_0042d1d0  size=62 ==== */

void FUN_0042d1d0(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00402d20(&param_1);
  FUN_00403360(uVar1,param_3,param_2 * 0x18,param_2);
  return;
}


/* ==== 0042d210  FUN_0042d210  size=27 ==== */

void FUN_0042d210(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0042d1d0(param_1,param_2,param_3);
  return;
}


/* ==== 0042d280  FUN_0042d280  size=164 ==== */

undefined4 FUN_0042d280(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070e1dd;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_18 = FUN_00402d20(&param_1,DAT_007c5940 ^ (uint)&stack0xfffffffc);
  FUN_00403180(param_3,param_4);
  local_8 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_00412210(local_18);
    local_18 = local_18 + 0x18;
  }
  uVar1 = FUN_00403130();
  local_8 = 0xffffffff;
  FUN_004103a0();
  ExceptionList = local_10;
  return uVar1;
}


/* ==== 0042d330  FUN_0042d330  size=58 ==== */

int FUN_0042d330(int param_1,int param_2,int param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_0040d840(param_1);
    param_3 = param_3 + 0x18;
    param_1 = param_1 + 0x18;
  }
  return param_3;
}


/* ==== 0042d370  FUN_0042d370  size=47 ==== */

void FUN_0042d370(undefined4 param_1)

{
  int in_ECX;
  
  FUN_0042d5c0(*(undefined4 *)(in_ECX + 4),param_1);
  *(int *)(in_ECX + 4) = *(int *)(in_ECX + 4) + 4;
  return;
}


/* ==== 0042d3a0  FUN_0042d3a0  size=40 ==== */

int FUN_0042d3a0(uint param_1)

{
  if (0x6666666 < param_1) {
    FUN_004015f0(0x6666666);
  }
  return param_1 * 0x28;
}


/* ==== 0042d3d0  FUN_0042d3d0  size=40 ==== */

int FUN_0042d3d0(uint param_1)

{
  if (0x5555555 < param_1) {
    FUN_004015f0(0x5555555);
  }
  return param_1 * 0x30;
}


/* ==== 0042d400  FUN_0042d400  size=52 ==== */

int FUN_0042d400(int param_1)

{
  int in_ECX;
  
  FUN_00405520(param_1);
  *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(in_ECX + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  return in_ECX;
}


/* ==== 0042d440  FUN_0042d440  size=39 ==== */

void FUN_0042d440(void)

{
  undefined4 *in_ECX;
  
  FUN_00428f20(*in_ECX,in_ECX[1],in_ECX[2]);
  return;
}


/* ==== 0042d470  FUN_0042d470  size=102 ==== */

void FUN_0042d470(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00402d20(&param_1);
  iVar2 = FUN_00402d20(&param_2);
  FUN_00403360(iVar1,param_3,iVar2 - iVar1,(iVar2 - iVar1) / 0x28);
  return;
}


/* ==== 0042d4e0  FUN_0042d4e0  size=38 ==== */

void FUN_0042d4e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_004013e0(0x30,param_2);
  FUN_0042d5f0(param_3);
  return;
}


/* ==== 0042d510  FUN_0042d510  size=37 ==== */

void FUN_0042d510(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_004013e0(0x90,param_2);
  FUN_0040b110(uVar1);
  return;
}


/* ==== 0042d540  FUN_0042d540  size=63 ==== */

void FUN_0042d540(undefined4 param_1)

{
  undefined4 uVar1;
  int in_ECX;
  
  uVar1 = _Unfancy<>(*(undefined4 *)(in_ECX + 4),param_1);
  FUN_0042d660(*(undefined4 *)(in_ECX + 8),uVar1);
  *(int *)(in_ECX + 4) = *(int *)(in_ECX + 4) + 0x20;
  return;
}


/* ==== 0042d580  FUN_0042d580  size=55 ==== */

undefined4 FUN_0042d580(void)

{
  undefined4 in_ECX;
  
  FUN_0042d690(&stack0x00000008,&stack0x0000000c,0,0);
  return in_ECX;
}


/* ==== 0042d5c0  FUN_0042d5c0  size=44 ==== */

void FUN_0042d5c0(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  uVar1 = _Unfancy<>(param_1);
  puVar2 = (undefined4 *)FUN_004013e0(4,uVar1);
  *puVar2 = *param_2;
  return;
}


/* ==== 0042d5f0  FUN_0042d5f0  size=105 ==== */

undefined4 * FUN_0042d5f0(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  in_ECX[3] = param_1[3];
  in_ECX[4] = param_1[4];
  in_ECX[5] = param_1[5];
  FUN_00405520(param_1 + 6);
  return in_ECX;
}


/* ==== 0042d660  FUN_0042d660  size=38 ==== */

void FUN_0042d660(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_004013e0(0x20,param_2);
  FUN_0042d6d0(param_3);
  return;
}


/* ==== 0042d690  FUN_0042d690  size=49 ==== */

undefined4 FUN_0042d690(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 in_ECX;
  
  uVar1 = FUN_00402d20(param_1);
  FUN_00405450(uVar1);
  FUN_00426e80();
  return in_ECX;
}


/* ==== 0042d6d0  FUN_0042d6d0  size=52 ==== */

int FUN_0042d6d0(int param_1)

{
  int in_ECX;
  
  FUN_00405450(param_1);
  *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(in_ECX + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  return in_ECX;
}


/* ==== 0042d710  FUN_0042d710  size=30 ==== */

float10 FUN_0042d710(float param_1)

{
  double dVar1;
  
  dVar1 = (double)param_1;
  FUN_006f5f10();
  return (float10)(float)dVar1;
}


/* ==== 0042d730  FUN_0042d730  size=24 ==== */

void FUN_0042d730(undefined4 param_1)

{
  FUN_0042d710(param_1);
  return;
}


/* ==== 0042d750  ~WorkQueue  size=31 ==== */

/* Library Function - Single Match
    public: __thiscall Concurrency::details::WorkQueue::~WorkQueue(void)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void __thiscall Concurrency::details::WorkQueue::~WorkQueue(WorkQueue *this)

{
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(this + 0x18));
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)this);
  return;
}


/* ==== 0042d770  FUN_0042d770  size=333 ==== */

undefined4 * FUN_0042d770(void)

{
  undefined4 *in_ECX;
  
  in_ECX[0x15] = 0;
  in_ECX[0x16] = 0;
  in_ECX[0x17] = 0;
  in_ECX[0x18] = 0;
  in_ECX[0x19] = 0;
  in_ECX[0x1a] = 0;
  in_ECX[0x1b] = 0;
  in_ECX[0x1c] = 0;
  in_ECX[0x1d] = 0;
  in_ECX[0x1e] = 0;
  in_ECX[0x1f] = 0;
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
  in_ECX[0x11] = 0;
  in_ECX[0x12] = 0;
  in_ECX[0x13] = 0;
  in_ECX[0x14] = 0;
  return in_ECX;
}


/* ==== 0042d8c0  FUN_0042d8c0  size=333 ==== */

undefined4 * FUN_0042d8c0(void)

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
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  in_ECX[0xe] = 0;
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
  in_ECX[0x19] = 0;
  in_ECX[0x1b] = 0;
  in_ECX[0x1a] = 0;
  in_ECX[0x1c] = 0;
  in_ECX[0x1d] = 0;
  in_ECX[0x1e] = 0;
  in_ECX[0x1f] = 0;
  return in_ECX;
}


/* ==== 0042da10  FUN_0042da10  size=411 ==== */

undefined4 * FUN_0042da10(void)

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
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  in_ECX[0xe] = 0;
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
  in_ECX[0x19] = 0;
  in_ECX[0x1a] = 0;
  in_ECX[0x1b] = 0;
  in_ECX[0x1c] = 0;
  in_ECX[0x1d] = 0;
  in_ECX[0x1e] = 0;
  in_ECX[0x1f] = 0;
  in_ECX[0x20] = 0;
  in_ECX[0x21] = 0;
  in_ECX[0x22] = 0;
  in_ECX[0x23] = 0;
  in_ECX[0x24] = 0;
  in_ECX[0x25] = 0;
  return in_ECX;
}


/* ==== 0042dbb0  FUN_0042dbb0  size=769 ==== */

void FUN_0042dbb0(void)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  int iVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)FUN_0042da10();
  puVar3 = in_ECX;
  for (iVar2 = 0x26; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  in_ECX[0x13e] = 0;
  puVar1 = (undefined4 *)FUN_0042d770();
  puVar3 = in_ECX + 0x26;
  for (iVar2 = 0x20; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar1 = (undefined4 *)FUN_0042d770();
  puVar3 = in_ECX + 0x46;
  for (iVar2 = 0x20; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar1 = (undefined4 *)FUN_0042d770();
  puVar3 = in_ECX + 0x66;
  for (iVar2 = 0x20; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar1 = (undefined4 *)FUN_0042d770();
  puVar3 = in_ECX + 0x86;
  for (iVar2 = 0x20; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar1 = (undefined4 *)FUN_0042d8c0();
  puVar3 = in_ECX + 0xa6;
  for (iVar2 = 0x20; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar1 = (undefined4 *)FUN_0042d8c0();
  puVar3 = in_ECX + 0xc6;
  for (iVar2 = 0x20; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar1 = (undefined4 *)FUN_0042d8c0();
  puVar3 = in_ECX + 0xe6;
  for (iVar2 = 0x20; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar1 = (undefined4 *)FUN_0042d8c0();
  puVar3 = in_ECX + 0x106;
  for (iVar2 = 0x20; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  in_ECX[0x148] = 0;
  in_ECX[0x149] = 0;
  in_ECX[0x14a] = 0;
  in_ECX[0x14b] = 0;
  in_ECX[0x126] = 0;
  in_ECX[0x127] = 0;
  in_ECX[0x128] = 0;
  in_ECX[0x129] = 0;
  in_ECX[0x12a] = 0;
  in_ECX[299] = 0;
  in_ECX[300] = 0;
  in_ECX[0x12d] = 0;
  in_ECX[0x12e] = 0;
  in_ECX[0x12f] = 0;
  in_ECX[0x130] = 0;
  in_ECX[0x131] = 0;
  in_ECX[0x132] = 0;
  in_ECX[0x133] = 0;
  in_ECX[0x134] = 0;
  in_ECX[0x135] = 0;
  in_ECX[0x136] = 0;
  in_ECX[0x137] = 0;
  in_ECX[0x138] = 0;
  in_ECX[0x139] = 0;
  in_ECX[0x13c] = 0;
  in_ECX[0x13f] = 0;
  in_ECX[0x140] = 0;
  in_ECX[0x141] = 0;
  in_ECX[0x142] = 0;
  in_ECX[0x143] = 0;
  in_ECX[0x145] = 0;
  in_ECX[0x144] = 0;
  in_ECX[0x13b] = 0;
  in_ECX[0x13a] = 0;
  in_ECX[0x13d] = 0;
  in_ECX[0x146] = 0;
  in_ECX[0x147] = 0;
  return;
}


/* ==== 0042dec0  FUN_0042dec0  size=85 ==== */

int FUN_0042dec0(void)

{
  undefined4 *puVar1;
  int in_ECX;
  
  _Vector_val<>();
  puVar1 = (undefined4 *)_Vector_val<>();
  *(undefined4 *)(in_ECX + 8) = *puVar1;
  *(undefined4 *)(in_ECX + 0xc) = puVar1[1];
  *(undefined4 *)(in_ECX + 0x10) = puVar1[2];
  *(undefined4 *)(in_ECX + 0x14) = 1;
  *(undefined4 *)(in_ECX + 0x18) = 1;
  *(undefined1 *)(in_ECX + 0x1c) = 0;
  return in_ECX;
}


/* ==== 0042df20  FUN_0042df20  size=116 ==== */

int FUN_0042df20(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070e218;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0040d8b0(DAT_007c5940 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  FUN_0040d650();
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_004053a0(&DAT_007793b1);
  *(undefined4 *)(in_ECX + 0x18) = 0;
  ExceptionList = local_10;
  return in_ECX;
}


/* ==== 0042dfa0  FUN_0042dfa0  size=13 ==== */

undefined1 FUN_0042dfa0(void)

{
  return 1;
}


/* ==== 0042dfb0  FUN_0042dfb0  size=13 ==== */

undefined1 FUN_0042dfb0(void)

{
  return 0;
}


/* ==== 0042dfc0  FUN_0042dfc0  size=313 ==== */

undefined4 *
FUN_0042dfc0(int param_1,undefined4 param_2,float param_3,float param_4,float param_5,
            undefined4 param_6)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070e266;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0040d650(DAT_007c5940 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  FUN_0040d8b0();
  local_8._0_1_ = 1;
  FUN_0044dfa0();
  local_8 = CONCAT31(local_8._1_3_,2);
  in_ECX[4] = (int)param_3;
  in_ECX[5] = (int)param_4;
  in_ECX[6] = (int)param_5;
  in_ECX[3] = param_2;
  in_ECX[7] = param_6;
  if (param_1 != 0) {
    in_ECX[1] = param_1;
    in_ECX[9] = *(undefined4 *)(param_1 + 0x200);
    in_ECX[10] = *(undefined4 *)(param_1 + 0x1ec);
    in_ECX[0xb] = *(undefined4 *)(param_1 + 0x1f0);
  }
  FUN_004053a0(&DAT_007793b1);
  in_ECX[2] = 1;
  in_ECX[0xd] = 0xffffffff;
  in_ECX[0x17] = 0;
  in_ECX[0x18] = 0xffffffff;
  *(undefined1 *)(in_ECX + 0x19) = 0;
  *in_ECX = 0xffffffff;
  in_ECX[0x1a] = 0;
  *(undefined1 *)(in_ECX + 0xc) = 0;
  ExceptionList = local_10;
  return in_ECX;
}


/* ==== 0042e100  ~WorkQueue  size=31 ==== */

/* Library Function - Single Match
    public: __thiscall Concurrency::details::WorkQueue::~WorkQueue(void)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void __thiscall Concurrency::details::WorkQueue::~WorkQueue(WorkQueue *this)

{
  FUN_00401ac0();
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)this);
  return;
}


/* ==== 0042e120  FUN_0042e120  size=13 ==== */

void FUN_0042e120(void)

{
  return;
}


/* ==== 0042e130  FUN_0042e130  size=25 ==== */

void FUN_0042e130(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x978) = param_1;
  return;
}


/* ==== 0042e150  FUN_0042e150  size=123 ==== */

int FUN_0042e150(int param_1)

{
  char cVar1;
  int *piVar2;
  int in_ECX;
  undefined1 local_18 [8];
  int local_10;
  int local_c;
  undefined1 local_8 [4];
  
  if (-1 < param_1) {
    local_c = in_ECX + 0x170;
    FUN_0042a9e0(local_8);
    FUN_0042a9c0(local_18);
    while (cVar1 = FUN_0040d2d0(local_18), cVar1 != '\0') {
      piVar2 = (int *)FUN_0042a580();
      local_10 = *piVar2;
      if (*(int *)(local_10 + 0x1e8) == param_1) {
        return local_10;
      }
      FUN_0042a560();
    }
  }
  return 0;
}


/* ==== 0042e1d0  FUN_0042e1d0  size=2190 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_0042e1d0(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 in_stack_0000002c;
  int in_stack_00000030;
  undefined4 in_stack_00000034;
  undefined4 in_stack_00000038;
  undefined4 in_stack_0000003c;
  int in_stack_00000040;
  undefined1 local_d8 [12];
  int *local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  undefined4 local_b8;
  int *local_b4;
  undefined1 *local_b0;
  int *local_a4;
  uint local_a0;
  undefined4 local_9c;
  int local_98;
  char local_91;
  int local_90;
  undefined1 local_84 [24];
  char local_6c;
  undefined4 local_48;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_2c [24];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_0070e2dc;
  local_10 = ExceptionList;
  local_14 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  if (((in_stack_00000030 == 6) || (in_stack_00000030 == 5)) || (in_stack_00000030 == 7)) {
    FUN_00516d20();
    FUN_0044e0f0();
    while( true ) {
      FUN_00516d20();
      FUN_0040d9a0();
      cVar1 = FUN_0040d2d0();
      if (cVar1 == '\0') break;
      piVar2 = (int *)FUN_0042a580();
      if (*(int *)(*piVar2 + 0xa0) == in_stack_00000030) {
        FUN_0042a580();
        FUN_004d1b30();
        FUN_00517ee0();
        local_b8 = local_9c;
        FUN_00516d20();
        puVar3 = (undefined4 *)FUN_0044e0a0();
        local_9c = *puVar3;
      }
      else {
        FUN_0042a560();
      }
    }
  }
  FUN_0040a850();
  local_8._0_1_ = 1;
  local_98 = 0;
  FUN_0044dfa0();
  local_8._0_1_ = 2;
  local_a0 = 0;
  do {
    uVar4 = FUN_00410b30();
    if (uVar4 <= local_a0) {
LAB_0042e991:
      local_b0 = local_d8;
      local_a4 = (int *)game_loop_helper_018d0();
      local_cc = (int *)game_loop_helper_018b0();
      for (; local_a4 != local_cc; local_a4 = local_a4 + 1) {
        local_b4 = local_a4;
        *(int *)(*local_a4 + 0x40) = local_98 / 2 + *(int *)(*local_a4 + 0x40);
      }
      FUN_0040d5f0();
      local_8._0_1_ = 1;
      FUN_00401ac0();
      local_8 = (uint)local_8._1_3_ << 8;
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                ((function<void___cdecl(void)> *)local_2c);
      local_8 = 0xffffffff;
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                ((function<void___cdecl(void)> *)&stack0x00000014);
      ExceptionList = local_10;
      return;
    }
    FUN_004d1b30();
    local_90 = FUN_005174d0();
    FUN_0040d840();
    *(undefined4 *)(local_90 + 0x84) = 0;
    FUN_0040aa90();
    local_8 = CONCAT31(local_8._1_3_,3);
    if (((in_stack_00000030 == 1) || (in_stack_00000030 == 2)) ||
       ((in_stack_00000030 == 3 || (in_stack_00000030 == 4)))) {
      iVar5 = FUN_00410b30();
      pcVar6 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator[]
                         (local_2c,(iVar5 + -1) - local_a0);
      local_91 = *pcVar6;
    }
    else if (((in_stack_00000030 == 6) || (in_stack_00000030 == 5)) ||
            ((in_stack_00000030 == 7 || ((in_stack_00000030 == 8 || (in_stack_00000030 == 9)))))) {
      pcVar6 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator[]
                         (local_2c,local_a0);
      local_91 = *pcVar6;
      *(undefined1 *)(local_90 + 0x55) = 1;
      *(undefined4 *)(local_90 + 0x110) = 1;
    }
    local_bc = local_91 + -0x30;
    FUN_0040d840();
    local_6c = (char)in_stack_0000002c + (char)local_bc;
    local_48 = in_stack_00000034;
    *(undefined4 *)(local_90 + 0x98) = in_stack_00000034;
    FUN_00427660();
    *(int *)(local_90 + 0xa0) = in_stack_00000030;
    if (in_stack_00000030 == 1) {
      FUN_0040d490();
    }
    if (((in_stack_00000030 == 1) || (in_stack_00000030 == 2)) || (in_stack_00000030 == 3)) {
      FUN_00405520(local_84);
      local_8._0_1_ = 4;
      FUN_004bcf00();
      local_8 = CONCAT31(local_8._1_3_,3);
      local_c0 = FUN_004b8ca0();
      local_98 = local_98 + -1 + *(int *)(local_c0 + 0xc);
      *(int *)(local_90 + 0x40) = param_1 - local_98;
    }
    else if (((in_stack_00000030 == 6) || (in_stack_00000030 == 5)) ||
            ((in_stack_00000030 == 7 || ((in_stack_00000030 == 8 || (in_stack_00000030 == 9)))))) {
      *(int *)(local_90 + 0x40) = param_1 + local_98;
      FUN_00405520(local_84);
      local_8._0_1_ = 5;
      FUN_004bcf00();
      local_8 = CONCAT31(local_8._1_3_,3);
      local_c4 = FUN_004b8ca0();
      local_98 = local_98 + -2 + *(int *)(local_c4 + 0xc);
    }
    else if (in_stack_00000030 == 4) {
      FUN_00405520(local_84);
      local_8._0_1_ = 6;
      FUN_004bcf00();
      local_8 = CONCAT31(local_8._1_3_,3);
      local_c8 = FUN_004b8ca0();
      *(int *)(local_90 + 0x40) = param_1 - *(int *)(local_c8 + 0xc) / 2;
    }
    *(undefined4 *)(local_90 + 0x44) = param_2;
    *(undefined4 *)(local_90 + 0x48) = param_3;
    *(undefined4 *)(local_90 + 0x110) = 3;
    *(int *)(local_90 + 0x114) = *(int *)(local_90 + 0x44) + 1;
    FUN_0062f9b0();
    if ((((in_stack_00000030 == 1) || (in_stack_00000030 == 2)) || (in_stack_00000030 == 3)) ||
       (in_stack_00000030 == 4)) {
      FUN_0062fac0();
    }
    else if (((in_stack_00000030 == 6) || (in_stack_00000030 == 5)) ||
            ((in_stack_00000030 == 7 || ((in_stack_00000030 == 8 || (in_stack_00000030 == 9)))))) {
      FUN_0062fa00();
    }
    if ((((in_stack_00000030 == 6) || (in_stack_00000030 == 5)) || (in_stack_00000030 == 7)) ||
       ((in_stack_00000030 == 8 || (in_stack_00000030 == 9)))) {
      *(undefined4 *)(local_90 + 0x110) = 1;
    }
    if (in_stack_00000030 == 8) {
      *(undefined4 *)(local_90 + 0x4c) = 0xffffffff;
    }
    else if (in_stack_00000030 == 9) {
      *(undefined4 *)(local_90 + 0x4c) = 1;
    }
    if (in_stack_00000040 == 0) {
      FUN_00516d20();
      FUN_0044de80();
    }
    else {
      *(int *)(local_90 + 0x114) = *(int *)(in_stack_00000040 + 0x228) + 1;
      *(undefined1 *)(local_90 + 0xe9) = 1;
      *(undefined1 *)(local_90 + 0xe8) = 0;
      FUN_0044de80();
    }
    iVar5 = FUN_00410b30();
    if (local_a0 == iVar5 - 1U) {
      if (((in_stack_00000030 == 6) || (in_stack_00000030 == 5)) || (in_stack_00000030 == 7)) {
        FUN_004d1b30();
        local_90 = FUN_005174d0();
        *(undefined4 *)(local_90 + 0x84) = 0;
        if (in_stack_00000030 == 6) {
          local_6c = '+';
        }
        else if (in_stack_00000030 == 5) {
          local_6c = 'c';
        }
        else if (in_stack_00000030 == 7) {
          local_6c = 'b';
        }
        *(undefined4 *)(local_90 + 0x98) = local_48;
        FUN_00427660();
        *(int *)(local_90 + 0xa0) = in_stack_00000030;
        *(undefined1 *)(local_90 + 0xbc) = 1;
        *(undefined1 *)(local_90 + 0x55) = 1;
        *(undefined4 *)(local_90 + 0x40) = 0x1e8;
        *(undefined4 *)(local_90 + 0x44) = param_2;
        *(undefined4 *)(local_90 + 0x48) = param_3;
        *(undefined4 *)(local_90 + 0x110) = 3;
        *(undefined4 *)(local_90 + 0x114) = 10000;
        FUN_00516d20();
        FUN_0044de80();
      }
      else if ((in_stack_00000030 == 2) || (in_stack_00000030 == 3)) {
        FUN_004d1b30();
        local_90 = FUN_005174d0();
        *(undefined4 *)(local_90 + 0x84) = 0;
        local_6c = '\n';
        *(undefined4 *)(local_90 + 0x98) = local_48;
        FUN_00427660();
        *(int *)(local_90 + 0xa0) = in_stack_00000030;
        *(int *)(local_90 + 0x40) = param_1 + 1;
        *(undefined4 *)(local_90 + 0x44) = param_2;
        *(undefined4 *)(local_90 + 0x48) = param_3;
        *(undefined4 *)(local_90 + 0x110) = 3;
        *(undefined4 *)(local_90 + 0x114) = param_2;
        FUN_0062fac0();
        *(undefined4 *)(local_90 + 0x114) = *(undefined4 *)(in_stack_00000040 + 0x228);
        *(undefined1 *)(local_90 + 0xe9) = 1;
        *(undefined1 *)(local_90 + 0xe8) = 0;
        FUN_0044de80();
        local_8._0_1_ = 2;
        FUN_00407a80();
        goto LAB_0042e991;
      }
    }
    local_8._0_1_ = 2;
    FUN_00407a80();
    local_a0 = local_a0 + 1;
  } while( true );
}


/* ==== 0042f230  FUN_0042f230  size=32 ==== */

void FUN_0042f230(void)

{
  FUN_0044de80(&stack0x00000004);
  return;
}


/* ==== 0042f250  FUN_0042f250  size=231 ==== */

int FUN_0042f250(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
                undefined4 param_6)

{
  int iVar1;
  int local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070e3f4;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_5 == 0) {
    local_1c = 0;
  }
  else {
    iVar1 = crt_or_heap_alloc_helper(0x78,DAT_007c5940 ^ (uint)&stack0xfffffffc);
    local_8 = 0;
    if (iVar1 == 0) {
      local_1c = 0;
    }
    else {
      local_1c = FUN_0042dfc0(param_1,param_5,param_2,param_3,param_4,param_6);
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(local_1c + 0x20) = *(undefined4 *)(param_1 + 0x1fc);
    *(undefined4 *)(local_1c + 0x24) = *(undefined4 *)(param_1 + 0x200);
    iVar1 = local_1c;
    game_get_state_ptr_d1520(local_1c);
    FUN_004d58e0();
    FUN_0042f230(iVar1);
  }
  ExceptionList = local_10;
  return local_1c;
}


/* ==== 0042f340  FUN_0042f340  size=163 ==== */

void FUN_0042f340(int param_1,float param_2,float param_3,float param_4,undefined4 param_5,
                 int param_6)

{
  undefined4 local_8;
  
  if (param_6 == 1) {
    param_2 = (float)*(int *)(param_1 + 0x224) + param_2;
  }
  else {
    param_2 = (float)*(int *)(param_1 + 0x224) - param_2;
  }
  local_8 = (int)param_2;
  FUN_0042f250(param_1,(float)local_8,(float)(int)((float)*(int *)(param_1 + 0x228) + param_3),
               (float)(int)((float)*(int *)(param_1 + 0x22c) + param_4),param_5,param_6);
  return;
}


/* ==== 0042f3f0  FUN_0042f3f0  size=96 ==== */

undefined4
FUN_0042f3f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0042f250(param_1,param_2,param_3,0,0xbb8c,param_6);
  FUN_0040d490(&param_4);
  FUN_0040d490(&param_5);
  return uVar1;
}


/* ==== 0042f450  FUN_0042f450  size=105 ==== */

int FUN_0042f450(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  
  iVar1 = FUN_0042f250(param_1,param_2,param_3,0,0xbb8c,param_6);
  *(undefined4 *)(iVar1 + 0x24) = param_7;
  FUN_0040d490(&param_4);
  FUN_0040d490(&param_5);
  return iVar1;
}


/* ==== 0042f4c0  FUN_0042f4c0  size=165 ==== */

undefined4 FUN_0042f4c0(void)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070e42d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  game_get_flag_object_01a70();
  FUN_0062fc30();
  game_get_flag_object_01a70(0);
  iVar1 = FUN_0062fc30();
  FUN_00405520(iVar1 + 8);
  local_8 = 0;
  FUN_004bcf00();
  local_8 = 0xffffffff;
  iVar1 = FUN_004b8ca0();
  ExceptionList = local_10;
  return *(undefined4 *)(iVar1 + 0xc);
}


/* ==== 0042f570  FUN_0042f570  size=165 ==== */

undefined4 FUN_0042f570(void)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070e42d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  game_get_flag_object_01a70();
  FUN_0062fc30();
  game_get_flag_object_01a70(0);
  iVar1 = FUN_0062fc30();
  FUN_00405520(iVar1 + 8);
  local_8 = 0;
  FUN_004bcf00();
  local_8 = 0xffffffff;
  iVar1 = FUN_004b8ca0();
  ExceptionList = local_10;
  return *(undefined4 *)(iVar1 + 0x10);
}


/* ==== 0042f620  FUN_0042f620  size=29 ==== */

undefined4 FUN_0042f620(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)game_get_flag_object_01a70(0);
  return *puVar1;
}


/* ==== 0042f640  FUN_0042f640  size=80 ==== */

void FUN_0042f640(void)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  
  uVar5 = *(undefined4 *)(in_ECX + 0x95c);
  game_get_state_ptr_d1520(uVar5);
  FUN_004d58e0();
  iVar1 = FUN_0042e150(uVar5);
  if (iVar1 != 0) {
    puVar3 = (undefined4 *)(iVar1 + 0x248);
    puVar4 = (undefined4 *)(in_ECX + 0x248);
    for (iVar2 = 0x14c; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  return;
}


/* ==== 0042f690  FUN_0042f690  size=473 ==== */

void FUN_0042f690(void)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  int local_c;
  
  FUN_0062ed50();
  iVar1 = in_ECX + 0x99c;
  FUN_004d1b30(iVar1);
  FUN_00517f40(iVar1);
  iVar2 = in_ECX + 0x8e4;
  local_c = game_loop_helper_018d0();
  iVar1 = game_loop_helper_018b0();
  for (; local_c != iVar1; local_c = local_c + 4) {
    iVar3 = local_c;
    FUN_004d1b30(local_c,local_c,iVar1,iVar2);
    FUN_00517ee0(iVar3);
  }
  FUN_0040d5f0();
  *(undefined1 *)(in_ECX + 0x8e0) = 0;
  *(undefined4 *)(in_ECX + 0x998) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x204) = 200;
  *(undefined4 *)(in_ECX + 0x200) = 200;
  *(undefined4 *)(in_ECX + 0x95c) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x958) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x960) = 0x3f800000;
  *(undefined4 *)(in_ECX + 0x964) = 0;
  *(undefined4 *)(in_ECX + 0x974) = 0;
  *(undefined4 *)(in_ECX + 0x978) = 3;
  FUN_004053a0(&DAT_0073f605);
  *(undefined1 *)(in_ECX + 0x994) = 0;
  FUN_004053a0(&DAT_0073f606);
  FUN_004053a0(&DAT_0073f607);
  FUN_004053a0(&DAT_0073f60d);
  *(undefined4 *)(in_ECX + 0x94c) = 0;
  *(undefined4 *)(in_ECX + 0x950) = 0;
  *(undefined4 *)(in_ECX + 0x954) = 0;
  *(undefined1 *)(in_ECX + 0x8f1) = 0;
  *(undefined1 *)(in_ECX + 0x8f2) = 1;
  *(undefined1 *)(in_ECX + 0x8f3) = 0;
  *(undefined1 *)(in_ECX + 0x8f4) = 1;
  *(undefined1 *)(in_ECX + 0x8f0) = 1;
  FUN_0040d770();
  FUN_0040d5f0();
  return;
}


/* ==== 0042f870  FUN_0042f870  size=235 ==== */

undefined4 * FUN_0042f870(void)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070e4bf;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0062f3e0(DAT_007c5940 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  *in_ECX = CPassiveObj::vftable;
  FUN_0044dfa0();
  local_8._0_1_ = 1;
  FUN_0040d8b0();
  local_8._0_1_ = 2;
  FUN_0040d8b0();
  local_8._0_1_ = 3;
  FUN_0040d8b0();
  local_8._0_1_ = 4;
  FUN_0040d650();
  local_8._0_1_ = 5;
  FUN_0040d650();
  local_8._0_1_ = 6;
  FUN_0040d8b0();
  local_8 = CONCAT31(local_8._1_3_,7);
  in_ECX[0x267] = 0;
  FUN_0042f690();
  ExceptionList = local_10;
  return in_ECX;
}


/* ==== 0042f960  FUN_0042f960  size=372 ==== */

void FUN_0042f960(void)

{
  int in_ECX;
  
  FUN_0044e020();
  FUN_0044e020();
  FUN_0044e120();
  FUN_0044e120();
  FUN_0044e120();
  FUN_0042fae0();
  FUN_00401ac0();
  FUN_00401ac0();
  FUN_00401ac0();
  FUN_0044e1f0();
  FUN_0044e1f0();
  FUN_00401ac0();
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(in_ECX + 0x14c));
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(in_ECX + 0x134));
  FUN_0040d7d0();
  FUN_00401ac0();
  FUN_004019e0();
  FUN_00401ac0();
  FUN_0044e210();
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(in_ECX + 0x9c));
  FUN_0044e250();
  FUN_0044e270();
  FUN_00401ac0();
  FUN_0044e290();
  FUN_00401ac0();
  FUN_00401ac0();
  FUN_00401ac0();
  return;
}


/* ==== 0042fae0  FUN_0042fae0  size=115 ==== */

void FUN_0042fae0(void)

{
  int in_ECX;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(in_ECX + 0x128));
  FUN_0044e370();
  Concurrency::details::WorkQueue::~WorkQueue((WorkQueue *)(in_ECX + 0xd0));
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(in_ECX + 0xb8));
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(in_ECX + 0xa0));
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(in_ECX + 0x4c));
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(in_ECX + 0x34));
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(in_ECX + 0x14));
  return;
}


/* ==== 0042fb60  FUN_0042fb60  size=4432 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 * FUN_0042fb60(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 *in_ECX;
  float10 fVar7;
  int local_6c;
  int *local_64;
  int local_60;
  int local_58;
  int local_54;
  function<void___cdecl(void)> local_48 [52];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070e56a;
  local_10 = ExceptionList;
  local_14 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_0062f3e0();
  local_8 = 0;
  *in_ECX = CPassiveObj::vftable;
  FUN_0044dfa0();
  local_8._0_1_ = 1;
  FUN_0040d8b0();
  local_8._0_1_ = 2;
  FUN_0040d8b0();
  local_8._0_1_ = 3;
  FUN_0040d8b0();
  local_8._0_1_ = 4;
  FUN_0040d650();
  local_8._0_1_ = 5;
  FUN_0040d650();
  local_8._0_1_ = 6;
  FUN_0040d8b0();
  local_8 = CONCAT31(local_8._1_3_,7);
  in_ECX[0x267] = 0;
  FUN_0042f690();
  *(char *)(in_ECX + 0x48) = (char)param_1[0xc];
  in_ECX[0x47] = param_1[0xd];
  in_ECX[600] = (float)param_1[2];
  in_ECX[0x49] = param_1[0x17];
  in_ECX[0x4a] = param_1[0x18];
  FUN_00427560();
  in_ECX[0x7f] = param_1[8];
  in_ECX[0x89] = param_1[4];
  in_ECX[0x8a] = param_1[5];
  in_ECX[0x8b] = param_1[6];
  in_ECX[0x7d] = param_1[7];
  in_ECX[0x79] = param_1[3];
  in_ECX[0x80] = param_1[9];
  if (param_1[1] != 0) {
    in_ECX[599] = *(undefined4 *)(param_1[1] + 0x1e8);
  }
  FUN_0042f640();
  FUN_00657c10();
  in_ECX[0x7b] = param_1[10];
  in_ECX[0x7c] = param_1[0xb];
  game_loop_helper_e9240();
  uVar2 = FUN_005e53f0();
  in_ECX[0x25d] = uVar2;
  FUN_0040d840();
  uVar2 = *(undefined4 *)(in_ECX[0x25d] + 0x104);
  in_ECX[0x82] = *(undefined4 *)(in_ECX[0x25d] + 0x100);
  in_ECX[0x83] = uVar2;
  in_ECX[0x259] = (float)*(int *)(in_ECX[0x25d] + 0x108);
  uVar2 = FUN_0063cff0();
  in_ECX[0x25e] = uVar2;
  cVar1 = FUN_00427e30();
  if (cVar1 != '\0') {
    FUN_00433010();
  }
  FUN_0040d840();
  FUN_00429b00();
  local_54 = game_loop_helper_018d0();
  iVar3 = game_loop_helper_018b0();
  for (; local_54 != iVar3; local_54 = local_54 + 0x1c) {
    FUN_0040a7e0();
    local_8 = CONCAT31(local_8._1_3_,8);
    cVar1 = FUN_00427c60();
    if (cVar1 != '\0') {
      FUN_004053a0();
    }
    FUN_00405520();
    FUN_00630a40();
    local_8 = CONCAT31(local_8._1_3_,7);
    FUN_004089b0();
  }
  cVar1 = FUN_00427e30();
  if (cVar1 != '\0') {
    FUN_00405520();
    local_8._0_1_ = 9;
    game_loop_helper_e9240();
    local_8 = CONCAT31(local_8._1_3_,7);
    FUN_005be5d0();
    FUN_00430eb0();
  }
  cVar1 = FUN_00427e30();
  if (cVar1 != '\0') {
    FUN_00405520(in_ECX + 0x1eb);
    FUN_006353a0();
  }
  *(char *)(in_ECX + 0x265) = (char)param_1[0x19];
  cVar1 = FUN_00427c60();
  if (cVar1 == '\0') {
    cVar1 = FUN_00427c60();
    if (cVar1 != '\0') {
      in_ECX[0x266] = *(undefined4 *)(in_ECX[0x25d] + 0x6c);
    }
  }
  else {
    *(undefined1 *)(in_ECX + 0x265) = 1;
  }
  if (*param_1 != -1) {
    in_ECX[0x266] = *param_1;
  }
  cVar1 = FUN_00427e30();
  if (cVar1 != '\0') {
    FUN_00405520();
    FUN_00433290();
  }
  cVar1 = game_frame_should_continue();
  if (cVar1 == '\0') {
    local_58 = game_loop_helper_018d0();
    iVar3 = game_loop_helper_018b0();
    for (; local_58 != iVar3; local_58 = local_58 + 0x34) {
      cVar1 = FUN_00427c60();
      if (cVar1 != '\0') {
        FUN_00405520();
        FUN_004c3570();
        break;
      }
    }
  }
  cVar1 = FUN_00427c60();
  if ((((cVar1 == '\0') && (cVar1 = game_frame_should_continue(), cVar1 != '\0')) &&
      (cVar1 = FUN_00427e30(), cVar1 == '\0')) &&
     ((cVar1 = FUN_00427e30(), cVar1 == '\0' && (cVar1 = FUN_00427e30(), cVar1 == '\0')))) {
    FUN_00431db0();
    cVar1 = FUN_0044e1c0();
    if (cVar1 == '\0') goto LAB_004301c2;
  }
  else {
LAB_004301c2:
    *(undefined1 *)(in_ECX + 0x238) = 1;
  }
  iVar3 = in_ECX[0x79];
  if (iVar3 < 0x4e22) {
    if (iVar3 != 0x4e21) {
      switch(iVar3) {
      case 0x403:
      case 0x404:
      case 0x408:
      case 0x40a:
        FUN_00432d30();
        ExceptionList = local_10;
        return in_ECX;
      default:
        ExceptionList = local_10;
        return in_ECX;
      }
    }
    iVar3 = FUN_00432b40();
    if (iVar3 != 0) {
      FUN_00432b40();
      iVar3 = FUN_0070b658();
      if (iVar3 != 0) {
        FUN_0047bd30();
        thunk_FUN_006e5750();
        FUN_0047bd30();
        thunk_FUN_006e5750();
        FUN_00631910();
        FUN_0047bd30();
        fVar7 = (float10)FUN_00641370();
        in_ECX[600] = (float)fVar7;
      }
    }
    *(undefined1 *)(in_ECX + 0x265) = 1;
    ExceptionList = local_10;
    return in_ECX;
  }
  if (iVar3 < 0x7536) {
    if (iVar3 != 0x7535) {
      switch(iVar3) {
      case 0x4e32:
        goto switchD_00430250_caseD_4e32;
      default:
        ExceptionList = local_10;
        return in_ECX;
      case 0x4e39:
        *(undefined1 *)(in_ECX + 0x265) = 1;
        FUN_004274d0();
        FUN_00405520();
        FUN_00630a40();
        ExceptionList = local_10;
        return in_ECX;
      case 0x4e3e:
        *(undefined1 *)(in_ECX + 0x265) = 1;
        FUN_004274d0();
        FUN_00405520();
        FUN_00630a40();
        ExceptionList = local_10;
        return in_ECX;
      case 0x4e50:
        *(undefined1 *)(in_ECX + 0x265) = 1;
        FUN_004054a0();
        FUN_004aa990(0,in_ECX[0x89],in_ECX[0x8a]);
        FUN_004054a0();
        FUN_004aa990(0,in_ECX[0x89],in_ECX[0x8a]);
        FUN_004054a0();
        FUN_004aa990(0,in_ECX[0x89],in_ECX[0x8a]);
        FUN_004054a0();
        FUN_004aa990(0,in_ECX[0x89],in_ECX[0x8a]);
        ExceptionList = local_10;
        return in_ECX;
      }
    }
    *(undefined1 *)(in_ECX + 0x265) = 1;
    FUN_004274d0();
    FUN_00405520();
    FUN_00630a40();
    ExceptionList = local_10;
    return in_ECX;
  }
  if (0x7668 < iVar3) {
    if (iVar3 < 0x7748) {
      if (iVar3 != 0x7747) {
        switch(iVar3) {
        case 0x768d:
        case 0x768e:
          FUN_004054a0();
          iVar3 = FUN_004aa990(0,0,0);
          *(undefined1 *)(iVar3 + 0x35) = 1;
          *(undefined4 **)(iVar3 + 0x60) = in_ECX;
          ExceptionList = local_10;
          return in_ECX;
        case 0x768f:
        case 0x7742:
          break;
        default:
          ExceptionList = local_10;
          return in_ECX;
        case 0x76a3:
          FUN_004274d0();
          FUN_005e9250();
          FUN_0040d490();
          FUN_004274d0();
          FUN_00405520();
          FUN_00630a40();
          FUN_004274d0();
          FUN_00405520();
          FUN_00630a40();
          *(undefined1 *)(in_ECX + 0x265) = 1;
          FUN_004274d0();
          FUN_00405520();
          iVar3 = FUN_004aa990(0,in_ECX[0x89],in_ECX[0x8a]);
          *(undefined4 *)(iVar3 + 0x1c) = 100;
          FUN_004274d0();
          FUN_00405520();
          iVar3 = FUN_004aa990(0,in_ECX[0x89],in_ECX[0x8a]);
          *(undefined4 *)(iVar3 + 0x1c) = 200;
          ExceptionList = local_10;
          return in_ECX;
        case 0x7722:
          *(undefined1 *)(in_ECX + 0x265) = 1;
          FUN_004274d0();
          FUN_00405520();
          iVar3 = FUN_00630a40();
          *(undefined4 *)(iVar3 + 0x114) = 100;
          FUN_004274d0();
          FUN_00405520();
          iVar3 = FUN_00630a40();
          *(undefined4 *)(iVar3 + 0x114) = 0xffffff9c;
          ExceptionList = local_10;
          return in_ECX;
        }
      }
    }
    else {
      if (0x9c48 < iVar3) {
        if (iVar3 == 0xbb9a) {
          for (local_6c = 0; local_6c < 4; local_6c = local_6c + 1) {
            FUN_004274d0();
            FUN_00405520();
            FUN_00630a40();
          }
          FUN_004054a0();
          FUN_004c3570();
          ExceptionList = local_10;
          return in_ECX;
        }
        if (iVar3 != 0xc59e) {
          ExceptionList = local_10;
          return in_ECX;
        }
        goto switchD_00430290_caseD_7546;
      }
      if (iVar3 != 0x9c48) {
        if (iVar3 == 0x774f) {
          *(undefined1 *)((int)in_ECX + 0xc1) = 0;
          *(undefined1 *)(in_ECX + 0x30) = 0;
          ExceptionList = local_10;
          return in_ECX;
        }
        if (iVar3 != 0x9c42) {
          ExceptionList = local_10;
          return in_ECX;
        }
        FUN_004054a0();
        FUN_004c3570();
        *(undefined1 *)(in_ECX + 0x265) = 1;
        ExceptionList = local_10;
        return in_ECX;
      }
    }
switchD_00430290_caseD_7556:
    *(undefined1 *)(in_ECX + 0x265) = 1;
    ExceptionList = local_10;
    return in_ECX;
  }
  if (iVar3 == 0x7668) {
    FUN_004054a0();
    local_8._0_1_ = 10;
    FUN_005e9250();
    FUN_0040d490();
    local_8 = CONCAT31(local_8._1_3_,7);
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_48);
    FUN_00634ac0();
    FUN_0044de30();
    iVar3 = FUN_0044e2b0();
    FUN_00634ac0();
    iVar4 = FUN_0044de50();
    game_get_flag_object_01a70();
    local_60 = game_loop_helper_018d0();
    iVar5 = game_loop_helper_018b0();
    for (; local_60 != iVar5; local_60 = local_60 + 0x60) {
      local_64 = (int *)game_loop_helper_018d0();
      piVar6 = (int *)game_loop_helper_018b0();
      for (; local_64 != piVar6; local_64 = local_64 + 6) {
        *local_64 = iVar3 * -0x10;
        local_64[3] = iVar3 << 5;
        local_64[1] = iVar4 * -0xc;
        local_64[4] = iVar4 * 0x18;
      }
    }
    FUN_004054a0();
    FUN_00630a40();
    *(undefined1 *)(in_ECX + 0x265) = 1;
    ExceptionList = local_10;
    return in_ECX;
  }
  switch(iVar3) {
  case 0x7539:
    FUN_004274d0();
    FUN_00405520();
    FUN_00630a40();
    ExceptionList = local_10;
    return in_ECX;
  default:
    ExceptionList = local_10;
    return in_ECX;
  case 0x7546:
  case 0x7553:
switchD_00430290_caseD_7546:
    FUN_0042dbb0();
    FUN_004054a0();
    FUN_004c3570();
    FUN_004274d0();
    FUN_005e9250();
    FUN_0040d490();
    FUN_004274d0();
    FUN_00405520();
    FUN_00630a40();
    FUN_004274d0();
    FUN_00405520();
    FUN_00630a40();
    *(undefined1 *)(in_ECX + 0x265) = 1;
    ExceptionList = local_10;
    return in_ECX;
  case 0x7556:
  case 0x7557:
  case 0x7558:
  case 0x7577:
  case 0x7578:
  case 0x7579:
  case 0x757a:
  case 0x75f9:
    goto switchD_00430290_caseD_7556;
  case 0x756b:
    FUN_004054a0();
    FUN_00630a40();
    FUN_004054a0();
    FUN_004c3570();
    FUN_00631910();
    in_ECX[0x1ba] = 100;
    *(undefined1 *)(in_ECX + 0x265) = 1;
    *(undefined1 *)((int)in_ECX + 0x8f1) = 1;
    *(undefined1 *)((int)in_ECX + 0x8f2) = 1;
    *(undefined1 *)((int)in_ECX + 0x8f3) = 1;
    ExceptionList = local_10;
    return in_ECX;
  case 0x7574:
    *(undefined1 *)(in_ECX + 0x265) = 1;
    FUN_004274d0();
    FUN_00405520();
    iVar3 = FUN_00630a40();
    *(undefined4 *)(iVar3 + 0x114) = 0xffffff9c;
    ExceptionList = local_10;
    return in_ECX;
  }
switchD_00430250_caseD_4e32:
  iVar3 = FUN_00432b40();
  if (iVar3 != 0) {
    FUN_00432b40();
    iVar3 = FUN_0070b658();
    if (iVar3 != 0) {
      FUN_0047bd30();
      thunk_FUN_006e5750();
      FUN_00631910();
    }
  }
  *(undefined1 *)(in_ECX + 0x265) = 1;
  ExceptionList = local_10;
  return in_ECX;
}


/* ==== 00430eb0  FUN_00430eb0  size=583 ==== */

undefined4 * FUN_00430eb0(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  in_ECX[3] = param_1[3];
  in_ECX[4] = param_1[4];
  FUN_0040d840(param_1 + 5);
  in_ECX[0xb] = param_1[0xb];
  in_ECX[0xc] = param_1[0xc];
  FUN_0040d840(param_1 + 0xd);
  FUN_0040d840(param_1 + 0x13);
  in_ECX[0x19] = param_1[0x19];
  in_ECX[0x1a] = param_1[0x1a];
  in_ECX[0x1b] = param_1[0x1b];
  uVar1 = param_1[0x1d];
  in_ECX[0x1c] = param_1[0x1c];
  in_ECX[0x1d] = uVar1;
  in_ECX[0x1e] = param_1[0x1e];
  in_ECX[0x1f] = param_1[0x1f];
  in_ECX[0x20] = param_1[0x20];
  in_ECX[0x21] = param_1[0x21];
  in_ECX[0x22] = param_1[0x22];
  in_ECX[0x23] = param_1[0x23];
  in_ECX[0x24] = param_1[0x24];
  in_ECX[0x25] = param_1[0x25];
  in_ECX[0x26] = param_1[0x26];
  in_ECX[0x27] = param_1[0x27];
  FUN_0040d840(param_1 + 0x28);
  FUN_0040d840(param_1 + 0x2e);
  FUN_00431100(param_1 + 0x34);
  FUN_0044e2f0(param_1 + 0x42);
  in_ECX[0x45] = param_1[0x45];
  in_ECX[0x46] = param_1[0x46];
  in_ECX[0x47] = param_1[0x47];
  in_ECX[0x48] = param_1[0x48];
  in_ECX[0x49] = param_1[0x49];
  FUN_0040d840(param_1 + 0x4a);
  return in_ECX;
}


/* ==== 00431100  FUN_00431100  size=70 ==== */

int FUN_00431100(int param_1)

{
  int in_ECX;
  
  FUN_0040d840(param_1);
  FUN_0040d840(param_1 + 0x18);
  *(undefined4 *)(in_ECX + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(param_1 + 0x34);
  return in_ECX;
}


/* ==== 00431150  FUN_00431150  size=719 ==== */

/* WARNING: Removing unreachable block (ram,0x00431171) */
/* WARNING: Removing unreachable block (ram,0x004311dd) */
/* WARNING: Removing unreachable block (ram,0x004311d4) */

void FUN_00431150(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  int *in_ECX;
  int *piVar3;
  
  if (in_ECX[0x267] == 0) {
    return;
  }
  *(undefined1 *)((int)in_ECX + 0xc1) = 0;
  FUN_004a78e0(param_1);
  if ((char)in_ECX[0x30] != '\0') {
    cVar1 = FUN_00634bb0(*(undefined4 *)(in_ECX[0x267] + 0x40),in_ECX[0x8a]);
    if (cVar1 == '\0') {
      uVar2 = FUN_00634ac0(*(undefined4 *)(in_ECX[0x267] + 0x40),in_ECX[0x8a],0);
      cVar1 = FUN_00634570(uVar2);
      if (cVar1 == '\0') goto LAB_00431291;
    }
    *(undefined1 *)((int)in_ECX + 0xc1) = 1;
    goto LAB_00431371;
  }
LAB_00431291:
  if ((char)in_ECX[0x30] == '\0') {
LAB_004312ff:
    if ((char)in_ECX[0x30] != '\0') {
      cVar1 = FUN_00634bb0(*(undefined4 *)(in_ECX[0x267] + 0x40),
                           *(undefined4 *)(in_ECX[0x267] + 0x44));
      if (cVar1 == '\0') {
        uVar2 = FUN_00634ac0(*(undefined4 *)(in_ECX[0x267] + 0x40),
                             *(undefined4 *)(in_ECX[0x267] + 0x44),0);
        cVar1 = FUN_00634570(uVar2);
        if (cVar1 == '\0') goto LAB_00431371;
      }
      *(undefined1 *)((int)in_ECX + 0xc1) = 1;
    }
  }
  else {
    cVar1 = FUN_00634bb0(in_ECX[0x89],*(undefined4 *)(in_ECX[0x267] + 0x44));
    if (cVar1 == '\0') {
      uVar2 = FUN_00634ac0(in_ECX[0x89],*(undefined4 *)(in_ECX[0x267] + 0x44),0);
      cVar1 = FUN_00634570(uVar2);
      if (cVar1 == '\0') goto LAB_004312ff;
    }
    *(undefined1 *)((int)in_ECX + 0xc1) = 1;
  }
LAB_00431371:
  if (*(char *)((int)in_ECX + 0xc1) == '\0') {
    in_ECX[0x89] = *(int *)(in_ECX[0x267] + 0x40);
    in_ECX[0x8a] = *(int *)(in_ECX[0x267] + 0x44);
  }
  in_ECX[0x8b] = *(int *)(in_ECX[0x267] + 0x48);
  if (((*(char *)((int)in_ECX + 0xc1) != '\0') || (*(char *)(in_ECX[0x267] + 0x18) != '\0')) ||
     (cVar1 = FUN_004a8a00(), cVar1 != '\0')) {
    piVar3 = in_ECX + 0x267;
    FUN_004d1b30(piVar3);
    FUN_00517f40(piVar3);
    (**(code **)(*in_ECX + 0xb0))();
  }
  return;
}


/* ==== 00431420  FUN_00431420  size=209 ==== */

void FUN_00431420(int param_1)

{
  int *piVar1;
  int *in_ECX;
  int *local_c;
  
  if (in_ECX[0x4c] != -1) {
    in_ECX[0x4b] = in_ECX[0x4b] + param_1;
    if (in_ECX[0x4b] < in_ECX[0x4a]) {
      local_c = (int *)game_loop_helper_018d0();
      piVar1 = (int *)game_loop_helper_018b0();
      for (; local_c != piVar1; local_c = local_c + 1) {
        *(int *)(*local_c + 0x30) = (in_ECX[0x4b] * 0xff) / in_ECX[0x4c];
      }
    }
    else {
      in_ECX[0x4b] = 0;
      in_ECX[0x4c] = -1;
      (**(code **)(*in_ECX + 0xb0))();
    }
  }
  return;
}


/* ==== 00431500  FUN_00431500  size=189 ==== */

void FUN_00431500(int param_1)

{
  int *piVar1;
  int in_ECX;
  int *local_c;
  
  if (*(int *)(in_ECX + 0x128) != -1) {
    *(int *)(in_ECX + 0x124) = *(int *)(in_ECX + 0x124) + param_1;
    if (*(int *)(in_ECX + 0x128) <= *(int *)(in_ECX + 0x124)) {
      *(undefined4 *)(in_ECX + 0x124) = 0xffffffff;
      *(undefined4 *)(in_ECX + 0x128) = 0xffffffff;
    }
    local_c = (int *)game_loop_helper_018d0();
    piVar1 = (int *)game_loop_helper_018b0();
    for (; local_c != piVar1; local_c = local_c + 1) {
      *(int *)(*local_c + 0x30) = (*(int *)(in_ECX + 0x124) * 0xff) / *(int *)(in_ECX + 0x128);
    }
  }
  return;
}


/* ==== 004315c0  FUN_004315c0  size=533 ==== */

void FUN_004315c0(int param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *in_ECX;
  int *local_14;
  int local_10;
  
  FUN_00637170(param_1);
  (**(code **)(*in_ECX + 0x48))(param_1);
  (**(code **)(*in_ECX + 0x4c))(param_1);
  if ((in_ECX[0x266] == -1) || (in_ECX[0x266] = in_ECX[0x266] - param_1, 0 < in_ECX[0x266])) {
    FUN_00630e20(param_1);
    FUN_006310e0(param_1);
    local_10 = -1;
    local_14 = (int *)game_loop_helper_018d0();
    piVar2 = (int *)game_loop_helper_018b0();
    for (; local_14 != piVar2; local_14 = local_14 + 1) {
      if ((*local_14 == 0) || (cVar1 = game_frame_should_continue(), cVar1 != '\0')) {
        (**(code **)(*in_ECX + 0xb0))();
        return;
      }
      *(int *)(*local_14 + 0x4c) = in_ECX[0x7d];
      piVar3 = (int *)game_get_flag_object_01a70(0);
      if (*piVar3 == *local_14) {
        local_10 = FUN_0062fe30(param_1);
      }
      else {
        FUN_0062fe30(param_1);
      }
    }
    if (local_10 == 0) {
      *(undefined1 *)(in_ECX + 0x68) = 0;
    }
    else if ((local_10 == 1) || (local_10 == 2)) {
      *(undefined1 *)(in_ECX + 0x68) = 1;
      piVar2 = (int *)game_get_flag_object_01a70(0);
      if (*piVar2 != 0) {
        piVar2 = (int *)game_get_flag_object_01a70(0);
        (**(code **)(*in_ECX + 0xc0))(*(undefined4 *)(*piVar2 + 0x90));
      }
    }
    if (local_10 == 3) {
      (**(code **)(*in_ECX + 0xdc))();
    }
    (**(code **)(*in_ECX + 0xfc))(param_1);
    (**(code **)(*in_ECX + 0x100))(param_1);
  }
  else {
    in_ECX[0x266] = -1;
    (**(code **)(*in_ECX + 0xb0))();
  }
  return;
}


/* ==== 004317e0  FUN_004317e0  size=20 ==== */

undefined4 FUN_004317e0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x228);
}


/* ==== 00431800  FUN_00431800  size=34 ==== */

int FUN_00431800(void)

{
  int *piVar1;
  
  piVar1 = (int *)game_get_flag_object_01a70(0);
  return *piVar1 + 0x8c;
}


/* ==== 00431830  FUN_00431830  size=34 ==== */

int FUN_00431830(void)

{
  int *piVar1;
  
  piVar1 = (int *)game_get_flag_object_01a70(0);
  return *piVar1 + 0x94;
}


/* ==== 00431860  FUN_00431860  size=34 ==== */

int FUN_00431860(void)

{
  int *piVar1;
  
  piVar1 = (int *)game_get_flag_object_01a70(0);
  return *piVar1 + 0x90;
}


/* ==== 00431890  FUN_00431890  size=34 ==== */

int FUN_00431890(void)

{
  int *piVar1;
  
  piVar1 = (int *)game_get_flag_object_01a70(0);
  return *piVar1 + 0x98;
}


/* ==== 004318c0  FUN_004318c0  size=96 ==== */

undefined4 FUN_004318c0(undefined4 param_1)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x974) == 0) {
    FUN_004054a0(&DAT_0073f64b);
  }
  else {
    FUN_00405520(*(int *)(in_ECX + 0x974) + 0x10c);
  }
  return param_1;
}


/* ==== 00431920  FUN_00431920  size=140 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00431920(void)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  int *in_ECX;
  function<void___cdecl(void)> local_20 [24];
  uint local_8;
  
  local_8 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  uVar2 = (**(code **)(*in_ECX + 0xe4))(local_20);
  cVar1 = FUN_00427c60(uVar2,"[do not pass]");
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_20);
  if (cVar1 != '\0') {
    cVar1 = game_frame_should_continue();
    if (cVar1 == '\0') {
      piVar3 = (int *)game_get_flag_object_01a70(0);
      *(undefined4 *)(*piVar3 + 0x30) = 0x7f;
    }
  }
  return;
}


/* ==== 004319b0  FUN_004319b0  size=140 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_004319b0(void)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  int *in_ECX;
  function<void___cdecl(void)> local_20 [24];
  uint local_8;
  
  local_8 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  uVar2 = (**(code **)(*in_ECX + 0xe4))(local_20);
  cVar1 = FUN_00427c60(uVar2,"[do not pass]");
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_20);
  if (cVar1 != '\0') {
    cVar1 = game_frame_should_continue();
    if (cVar1 == '\0') {
      piVar3 = (int *)game_get_flag_object_01a70(0);
      *(undefined4 *)(*piVar3 + 0x30) = 0xff;
    }
  }
  return;
}


/* ==== 00431a40  FUN_00431a40  size=368 ==== */

void FUN_00431a40(void)

{
  undefined4 uVar1;
  int *in_ECX;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  
  if ((char)in_ECX[6] == '\0') {
    uVar8 = 1;
    iVar2 = (in_ECX[0x8a] - DAT_007ca768) - in_ECX[0x8b];
    iVar3 = in_ECX[0x89] - DAT_007ca764;
    uVar1 = (**(code **)(*in_ECX + 0x60))(iVar3,iVar2,1);
    iVar7 = in_ECX[0x25e];
    uVar6 = 9;
    FUN_004e50c0(in_ECX,9,iVar7,uVar1);
    FUN_004e5240(in_ECX,uVar6,iVar7,uVar1,iVar3,iVar2,uVar8);
  }
  else {
    fVar4 = (float)in_ECX[1] / (float)in_ECX[2];
    fVar5 = ((float)in_ECX[2] - (float)in_ECX[1]) / (float)in_ECX[2];
    uVar8 = 1;
    iVar2 = ((int)((float)in_ECX[4] * fVar4 + (float)in_ECX[0x8a] * fVar5) - DAT_007ca768) -
            (int)((float)in_ECX[5] * fVar4 + (float)in_ECX[0x8b] * fVar5);
    iVar3 = (int)((float)in_ECX[3] * fVar4 + (float)in_ECX[0x89] * fVar5) - DAT_007ca764;
    uVar1 = (**(code **)(*in_ECX + 0x60))(iVar3,iVar2,1);
    iVar7 = in_ECX[0x25e];
    uVar6 = 9;
    FUN_004e50c0(in_ECX,9,iVar7,uVar1);
    FUN_004e5240(in_ECX,uVar6,iVar7,uVar1,iVar3,iVar2,uVar8);
  }
  return;
}


/* ==== 00431bb0  FUN_00431bb0  size=507 ==== */

int FUN_00431bb0(void)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined1 local_3c [4];
  undefined1 local_38 [4];
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  undefined1 local_8 [4];
  
  FUN_0044e140();
  local_1c = local_c + 0x8e4;
  local_14 = game_loop_helper_018d0();
  local_24 = game_loop_helper_018b0();
  for (; local_14 != local_24; local_14 = local_14 + 4) {
    local_28 = local_14;
    local_2c = FUN_0062fc30();
    local_2c = local_2c + 0x54;
    local_20 = local_2c;
    local_18 = game_loop_helper_018d0();
    local_30 = game_loop_helper_018b0();
    for (; local_18 != local_30; local_18 = local_18 + 0x18) {
      local_34 = local_18;
      FUN_0044e1a0(local_18);
    }
  }
  local_10 = (int)(*(float *)(local_c + 0x960) * 1000.0);
  FUN_0044e0f0(local_8);
  while( true ) {
    uVar2 = FUN_0040d9a0(local_3c);
    cVar1 = FUN_0040d2d0(uVar2);
    if (cVar1 == '\0') break;
    piVar3 = (int *)FUN_0044de10();
    iVar4 = *piVar3 * local_10;
    piVar3 = (int *)FUN_0044de10();
    *piVar3 = iVar4 / 1000;
    iVar4 = FUN_0044de10();
    iVar4 = *(int *)(iVar4 + 0xc) * local_10;
    iVar5 = FUN_0044de10();
    *(int *)(iVar5 + 0xc) = iVar4 / 1000;
    iVar4 = FUN_0044de10();
    iVar4 = *(int *)(iVar4 + 4) * local_10;
    iVar5 = FUN_0044de10();
    *(int *)(iVar5 + 4) = iVar4 / 1000;
    iVar4 = FUN_0044de10();
    iVar4 = *(int *)(iVar4 + 0x10) * local_10;
    iVar5 = FUN_0044de10();
    *(int *)(iVar5 + 0x10) = iVar4 / 1000;
    iVar4 = FUN_0044de10();
    iVar4 = *(int *)(iVar4 + 8) * local_10;
    iVar5 = FUN_0044de10();
    *(int *)(iVar5 + 8) = iVar4 / 1000;
    iVar4 = FUN_0044de10();
    iVar4 = *(int *)(iVar4 + 0x14) * local_10;
    iVar5 = FUN_0044de10();
    *(int *)(iVar5 + 0x14) = iVar4 / 1000;
    FUN_0044dde0(local_38,0);
  }
  return local_c + 0x174;
}


/* ==== 00431db0  FUN_00431db0  size=507 ==== */

int FUN_00431db0(void)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined1 local_3c [4];
  undefined1 local_38 [4];
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  undefined1 local_8 [4];
  
  FUN_0044e140();
  local_1c = local_c + 0x8e4;
  local_14 = game_loop_helper_018d0();
  local_24 = game_loop_helper_018b0();
  for (; local_14 != local_24; local_14 = local_14 + 4) {
    local_28 = local_14;
    local_2c = FUN_0062fc30();
    local_2c = local_2c + 0x48;
    local_20 = local_2c;
    local_18 = game_loop_helper_018d0();
    local_30 = game_loop_helper_018b0();
    for (; local_18 != local_30; local_18 = local_18 + 0x18) {
      local_34 = local_18;
      FUN_0044e1a0(local_18);
    }
  }
  local_10 = (int)(*(float *)(local_c + 0x960) * 1000.0);
  FUN_0044e0f0(local_8);
  while( true ) {
    uVar2 = FUN_0040d9a0(local_3c);
    cVar1 = FUN_0040d2d0(uVar2);
    if (cVar1 == '\0') break;
    piVar3 = (int *)FUN_0044de10();
    iVar4 = *piVar3 * local_10;
    piVar3 = (int *)FUN_0044de10();
    *piVar3 = iVar4 / 1000;
    iVar4 = FUN_0044de10();
    iVar4 = *(int *)(iVar4 + 0xc) * local_10;
    iVar5 = FUN_0044de10();
    *(int *)(iVar5 + 0xc) = iVar4 / 1000;
    iVar4 = FUN_0044de10();
    iVar4 = *(int *)(iVar4 + 4) * local_10;
    iVar5 = FUN_0044de10();
    *(int *)(iVar5 + 4) = iVar4 / 1000;
    iVar4 = FUN_0044de10();
    iVar4 = *(int *)(iVar4 + 0x10) * local_10;
    iVar5 = FUN_0044de10();
    *(int *)(iVar5 + 0x10) = iVar4 / 1000;
    iVar4 = FUN_0044de10();
    iVar4 = *(int *)(iVar4 + 8) * local_10;
    iVar5 = FUN_0044de10();
    *(int *)(iVar5 + 8) = iVar4 / 1000;
    iVar4 = FUN_0044de10();
    iVar4 = *(int *)(iVar4 + 0x14) * local_10;
    iVar5 = FUN_0044de10();
    *(int *)(iVar5 + 0x14) = iVar4 / 1000;
    FUN_0044dde0(local_38,0);
  }
  return local_c + 0x17c;
}


/* ==== 00431fb0  FUN_00431fb0  size=159 ==== */

void FUN_00431fb0(int param_1)

{
  int iVar1;
  int *piVar2;
  int in_ECX;
  undefined4 uVar3;
  
  FUN_0063cfb0(param_1);
  iVar1 = game_get_player_or_session_blob();
  if (*(int *)(in_ECX + 0x95c) == *(int *)(iVar1 + 0x1e8)) {
    piVar2 = (int *)game_get_state_ptr_d1520();
    *(int *)(*piVar2 + 0x158) = *(int *)(*piVar2 + 0x158) + 1;
  }
  iVar1 = FUN_00432b40();
  if (iVar1 != 0) {
    iVar1 = FUN_00432b40();
    if (*(int *)(iVar1 + 0x204) == 0) {
      iVar1 = FUN_00432b40();
      *(undefined1 *)(iVar1 + 0x94) = 1;
      uVar3 = *(undefined4 *)(param_1 + 4);
      FUN_00432b40(uVar3);
      FUN_00486660(uVar3);
      iVar1 = FUN_00432b40();
      *(undefined1 *)(iVar1 + 0x94) = 0;
    }
  }
  return;
}


/* ==== 004327c0  FUN_004327c0  size=86 ==== */

undefined4 FUN_004327c0(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x778) = *(undefined4 *)(in_ECX + 0x1f0);
  FUN_00432820(in_ECX + 0x778);
  return param_1;
}


/* ==== 00432820  FUN_00432820  size=664 ==== */

undefined4 * FUN_00432820(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070e63e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  in_ECX[3] = param_1[3];
  in_ECX[4] = param_1[4];
  FUN_00405520(param_1 + 5);
  local_8 = 0;
  in_ECX[0xb] = param_1[0xb];
  in_ECX[0xc] = param_1[0xc];
  FUN_00405520(param_1 + 0xd);
  local_8._0_1_ = 1;
  FUN_00405520(param_1 + 0x13);
  local_8._0_1_ = 2;
  in_ECX[0x19] = param_1[0x19];
  in_ECX[0x1a] = param_1[0x1a];
  in_ECX[0x1b] = param_1[0x1b];
  uVar1 = param_1[0x1d];
  in_ECX[0x1c] = param_1[0x1c];
  in_ECX[0x1d] = uVar1;
  in_ECX[0x1e] = param_1[0x1e];
  in_ECX[0x1f] = param_1[0x1f];
  in_ECX[0x20] = param_1[0x20];
  in_ECX[0x21] = param_1[0x21];
  in_ECX[0x22] = param_1[0x22];
  in_ECX[0x23] = param_1[0x23];
  in_ECX[0x24] = param_1[0x24];
  in_ECX[0x25] = param_1[0x25];
  in_ECX[0x26] = param_1[0x26];
  in_ECX[0x27] = param_1[0x27];
  FUN_00405520(param_1 + 0x28);
  local_8._0_1_ = 3;
  FUN_00405520(param_1 + 0x2e);
  local_8._0_1_ = 4;
  FUN_00432ac0(param_1 + 0x34);
  local_8._0_1_ = 5;
  FUN_0044e390(param_1 + 0x42);
  local_8 = CONCAT31(local_8._1_3_,6);
  in_ECX[0x45] = param_1[0x45];
  in_ECX[0x46] = param_1[0x46];
  in_ECX[0x47] = param_1[0x47];
  in_ECX[0x48] = param_1[0x48];
  in_ECX[0x49] = param_1[0x49];
  FUN_00405520(param_1 + 0x4a);
  ExceptionList = local_10;
  return in_ECX;
}


/* ==== 00432ac0  FUN_00432ac0  size=126 ==== */

int FUN_00432ac0(int param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070ce0d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00405520(param_1);
  local_8 = 0;
  FUN_00405520(param_1 + 0x18);
  *(undefined4 *)(in_ECX + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(param_1 + 0x34);
  ExceptionList = local_10;
  return in_ECX;
}


/* ==== 00432b40  FUN_00432b40  size=40 ==== */

void FUN_00432b40(void)

{
  int in_ECX;
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(in_ECX + 0x95c);
  game_get_state_ptr_d1520(uVar1);
  FUN_004d58e0();
  FUN_0042e150(uVar1);
  return;
}


/* ==== 00432d30  FUN_00432d30  size=661 ==== */

void FUN_00432d30(void)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  int aiStack_44 [5];
  char *pcStack_30;
  undefined1 *local_2c;
  undefined1 *local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  int local_1c;
  int local_18;
  int local_14;
  uint local_10;
  int local_c;
  int local_8;
  
  pcStack_30 = (char *)0x432d41;
  FUN_00631980();
  pcStack_30 = (char *)0x432d50;
  cVar1 = FUN_0044e480();
  if (cVar1 == '\0') {
    local_20 = (undefined1 *)aiStack_44;
    FUN_00405520(local_8 + 0x14c);
    FUN_004c3570();
  }
  pcStack_30 = "";
  aiStack_44[4] = local_8 + 0x910;
  aiStack_44[3] = 0x432d89;
  cVar1 = FUN_00427e30();
  if (cVar1 != '\0') {
    local_24 = (undefined1 *)aiStack_44;
    FUN_00405520(local_8 + 0x910);
    FUN_004aa990(0,*(int *)(local_8 + 0x224) + *(int *)(local_8 + 0x94c),
                 *(int *)(local_8 + 0x228) + *(int *)(local_8 + 0x950),
                 *(int *)(local_8 + 0x22c) + *(int *)(local_8 + 0x954));
  }
  pcStack_30 = "";
  aiStack_44[4] = local_8 + 0x928;
  aiStack_44[3] = 0x432e00;
  cVar1 = FUN_00427e30();
  if (cVar1 != '\0') {
    local_28 = (undefined1 *)aiStack_44;
    FUN_00405520(local_8 + 0x928);
    FUN_004aa990(0,*(int *)(local_8 + 0x224) + *(int *)(local_8 + 0x94c),
                 *(int *)(local_8 + 0x228) + *(int *)(local_8 + 0x950),
                 *(int *)(local_8 + 0x22c) + *(int *)(local_8 + 0x954));
  }
  local_14 = local_8 + 0x940;
  pcStack_30 = (char *)0x432e77;
  local_c = game_loop_helper_018d0();
  pcStack_30 = (char *)0x432e82;
  local_1c = game_loop_helper_018b0();
  for (; local_c != local_1c; local_c = local_c + 0x18) {
    local_18 = local_c;
    pcStack_30 = "";
    aiStack_44[4] = local_c;
    aiStack_44[3] = 0x432eac;
    cVar1 = FUN_00427e30();
    if (cVar1 != '\0') {
      local_2c = (undefined1 *)aiStack_44;
      FUN_00405520(local_18);
      FUN_004aa990(0,*(int *)(local_8 + 0x224) + *(int *)(local_8 + 0x94c),
                   *(int *)(local_8 + 0x228) + *(int *)(local_8 + 0x950),
                   *(int *)(local_8 + 0x22c) + *(int *)(local_8 + 0x954));
    }
  }
  pcStack_30 = "[object create after destroy]";
  aiStack_44[4] = *(int *)(local_8 + 0x974) + 0x70;
  aiStack_44[3] = 0x432f26;
  cVar1 = FUN_00427c60();
  if (cVar1 != '\0') {
    local_10 = 1;
    while( true ) {
      pcStack_30 = (char *)0x432f56;
      uVar2 = FUN_00401a90();
      if (uVar2 <= local_10) break;
      pcStack_30 = *(char **)(local_8 + 500);
      aiStack_44[4] = local_10;
      aiStack_44[3] = 0x432f7d;
      piVar3 = (int *)game_get_flag_object_01a70();
      aiStack_44[4] = *piVar3;
      aiStack_44[3] = 0;
      aiStack_44[2] = 0;
      aiStack_44[1] = 0;
      aiStack_44[0] = local_8;
      FUN_0042f340();
      local_10 = local_10 + 1;
    }
  }
  pcStack_30 = (char *)local_8;
  aiStack_44[4] = 0x432fb2;
  game_get_state_ptr_d1520();
  aiStack_44[4] = 0x432fb9;
  FUN_004d58e0();
  aiStack_44[4] = 0x432fc0;
  FUN_0043a7a0();
  return;
}


/* ==== 00432fd0  FUN_00432fd0  size=55 ==== */

void FUN_00432fd0(void)

{
  int *in_ECX;
  
  if (((char)in_ECX[0x15] == '\0') && ((char)in_ECX[0x265] != '\0')) {
    (**(code **)(*in_ECX + 0xb0))();
  }
  return;
}


/* ==== 00433010  FUN_00433010  size=295 ==== */

void FUN_00433010(void)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  undefined4 uVar3;
  undefined4 local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  *(undefined4 *)(in_ECX + 0x958) = 0xffffffff;
  local_10 = in_ECX + 0x8e4;
  local_8 = in_ECX;
  local_c = game_loop_helper_018d0();
  local_14 = game_loop_helper_018b0();
  for (; local_c != local_14; local_c = local_c + 4) {
    local_18 = local_c;
    iVar2 = local_c;
    FUN_004d1b30(local_c);
    FUN_00517ee0(iVar2);
  }
  FUN_0040d5f0();
  local_1c = FUN_005e9250(*(int *)(local_8 + 0x974) + 0x128);
  FUN_0040d490(&local_1c);
  piVar1 = (int *)game_get_flag_object_01a70(0);
  *(undefined4 *)(*piVar1 + 0x90) = 0;
  uVar3 = 0;
  game_get_flag_object_01a70(0);
  iVar2 = FUN_0040d680(uVar3);
  piVar1 = (int *)game_get_flag_object_01a70(0);
  *(undefined4 *)(*piVar1 + 0x98) = *(undefined4 *)(iVar2 + 0x44);
  piVar1 = (int *)game_get_flag_object_01a70(0);
  *(undefined4 *)(*piVar1 + 0x88) = 0;
  FUN_0040d5f0();
  return;
}


/* ==== 00433140  FUN_00433140  size=333 ==== */

void FUN_00433140(uint param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  uVar1 = FUN_004274f0();
  if (param_1 < uVar1) {
    *(uint *)(local_8 + 0x958) = param_1;
    local_10 = local_8 + 0x8e4;
    local_c = game_loop_helper_018d0();
    local_14 = game_loop_helper_018b0();
    for (; local_c != local_14; local_c = local_c + 4) {
      local_18 = local_c;
      iVar4 = local_c;
      FUN_004d1b30(local_c);
      FUN_00517ee0(iVar4);
    }
    FUN_0040d5f0();
    uVar2 = FUN_004274d0(param_1);
    local_1c = FUN_005e9250(uVar2);
    FUN_0040d490(&local_1c);
    piVar3 = (int *)game_get_flag_object_01a70(0);
    *(undefined4 *)(*piVar3 + 0x90) = 0;
    uVar2 = 0;
    game_get_flag_object_01a70(0);
    iVar4 = FUN_0040d680(uVar2);
    piVar3 = (int *)game_get_flag_object_01a70(0);
    *(undefined4 *)(*piVar3 + 0x98) = *(undefined4 *)(iVar4 + 0x44);
    piVar3 = (int *)game_get_flag_object_01a70(0);
    *(undefined4 *)(*piVar3 + 0x88) = 0;
    FUN_0040d5f0();
  }
  return;
}


/* ==== 00433290  FUN_00433290  size=213 ==== */

void FUN_00433290(void)

{
  undefined1 auStack_38 [20];
  undefined4 uStack_24;
  uint uStack_20;
  undefined1 *local_1c;
  undefined4 local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0070e66d;
  local_10 = ExceptionList;
  uStack_20 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  local_1c = auStack_38;
  FUN_00405520(&stack0x00000004);
  local_18 = FUN_004a7c10(1,0,0,0,1,*(undefined4 *)(local_14 + 500),
                          *(undefined4 *)(local_14 + 0x1f8));
  *(undefined4 *)(local_14 + 0x99c) = local_18;
  *(undefined4 *)(*(int *)(local_14 + 0x99c) + 0x40) = *(undefined4 *)(local_14 + 0x224);
  *(undefined4 *)(*(int *)(local_14 + 0x99c) + 0x44) = *(undefined4 *)(local_14 + 0x228);
  *(undefined4 *)(*(int *)(local_14 + 0x99c) + 0x48) = *(undefined4 *)(local_14 + 0x22c);
  local_8 = 0xffffffff;
  uStack_24 = 0x433353;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)&stack0x00000004);
  ExceptionList = local_10;
  return;
}


/* ==== 00433370  FUN_00433370  size=259 ==== */

undefined4 * FUN_00433370(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070e69d;
  local_10 = ExceptionList;
  uVar1 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_0042fb60(param_1);
  local_8 = 0;
  *local_14 = CMagicTargetWarning::vftable;
  local_14[0x25e] = 5;
  puVar2 = (undefined4 *)game_get_flag_object_01a70(0);
  local_14[0x269] = *puVar2;
  puVar2 = (undefined4 *)game_get_flag_object_01a70(1);
  local_14[0x268] = *puVar2;
  local_14[0x26a] = *(undefined4 *)(*(int *)(param_1 + 4) + 0x1e8);
  uVar3 = FUN_004274d0(local_14[0x268]);
  local_18 = FUN_005e9250(uVar3,uVar1);
  FUN_0040d490(&local_18);
  FUN_0040d5f0();
  ExceptionList = local_10;
  return local_14;
}


/* ==== 00433480  FUN_00433480  size=152 ==== */

void FUN_00433480(void)

{
  int iVar1;
  undefined4 uVar2;
  int *in_ECX;
  
  if (in_ECX[0x269] != -1) {
    iVar1 = FUN_00432b40();
    if (iVar1 != 0) {
      uVar2 = FUN_00432b40((float)in_ECX[0x89],(float)in_ECX[0x8a],(float)in_ECX[0x8b],in_ECX[0x269]
                           ,in_ECX[0x7d]);
      iVar1 = FUN_0042f250(uVar2);
      *(int *)(iVar1 + 0x34) = in_ECX[0x47];
    }
  }
  (**(code **)(*in_ECX + 0xb0))();
  return;
}


/* ==== 00433520  FUN_00433520  size=118 ==== */

void FUN_00433520(void)

{
  int in_ECX;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(in_ECX + 0x97c));
  FUN_00401ac0();
  FUN_0040d7d0();
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(in_ECX + 0x928));
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(in_ECX + 0x910));
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(in_ECX + 0x8f8));
  FUN_00401ac0();
  FUN_0042f960();
  return;
}


/* ==== 004335a0  FUN_004335a0  size=869 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 * FUN_004335a0(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined1 auStack_80 [16];
  undefined4 uStack_70;
  undefined4 *puStack_6c;
  uint uStack_68;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 *local_30;
  function<void___cdecl(void)> local_2c [24];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070e6d5;
  local_10 = ExceptionList;
  uStack_68 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  puStack_6c = (undefined4 *)param_1;
  uStack_70 = 0x4335d8;
  local_14 = uStack_68;
  FUN_0042fb60();
  local_8 = 0;
  *local_30 = CObjGoblinBunker::vftable;
  *(undefined1 *)(local_30 + 0x238) = 1;
  local_30[0x1b8] = 300;
  local_30[0x1ba] = 300;
  puStack_6c = (undefined4 *)0x2;
  uStack_70 = 0x433622;
  puStack_6c = (undefined4 *)FUN_004274d0();
  uStack_70 = 0x433628;
  local_34 = FUN_005e9250();
  puStack_6c = &local_34;
  uStack_70 = 0x433640;
  FUN_0040d490();
  puStack_6c = (undefined4 *)0x6;
  uStack_70 = 0x433657;
  puStack_6c = (undefined4 *)FUN_004274d0();
  uStack_70 = 0x43365d;
  local_38 = FUN_005e9250();
  puStack_6c = &local_38;
  uStack_70 = 0x433675;
  FUN_0040d490();
  puStack_6c = (undefined4 *)0xc;
  uStack_70 = 0x43368c;
  puStack_6c = (undefined4 *)FUN_004274d0();
  uStack_70 = 0x433692;
  local_3c = FUN_005e9250();
  puStack_6c = &local_3c;
  uStack_70 = 0x4336aa;
  FUN_0040d490();
  puStack_6c = (undefined4 *)0x10;
  uStack_70 = 0x4336c1;
  puStack_6c = (undefined4 *)FUN_004274d0();
  uStack_70 = 0x4336c7;
  local_40 = FUN_005e9250();
  puStack_6c = &local_40;
  uStack_70 = 0x4336df;
  FUN_0040d490();
  puStack_6c = (undefined4 *)0x12;
  uStack_70 = 0x4336f6;
  puStack_6c = (undefined4 *)FUN_004274d0();
  uStack_70 = 0x4336fc;
  local_44 = FUN_005e9250();
  puStack_6c = &local_44;
  uStack_70 = 0x433714;
  FUN_0040d490();
  local_30[0x26a] = 0;
  puStack_6c = (undefined4 *)0x0;
  uStack_70 = 0x433735;
  game_get_flag_object_01a70();
  puStack_6c = (undefined4 *)0x1;
  uStack_70 = 0x433748;
  puVar1 = (undefined4 *)game_get_flag_object_01a70();
  local_30[0x268] = *puVar1;
  puStack_6c = (undefined4 *)0x2;
  uStack_70 = 0x433766;
  puVar1 = (undefined4 *)game_get_flag_object_01a70();
  local_30[0x269] = *puVar1;
  puStack_6c = (undefined4 *)0x3;
  uStack_70 = 0x433784;
  puVar1 = (undefined4 *)game_get_flag_object_01a70();
  local_30[0x253] = *puVar1;
  puStack_6c = (undefined4 *)0x4;
  uStack_70 = 0x4337a2;
  puVar1 = (undefined4 *)game_get_flag_object_01a70();
  local_30[0x254] = *puVar1;
  puStack_6c = (undefined4 *)0x5;
  uStack_70 = 0x4337c0;
  puVar1 = (undefined4 *)game_get_flag_object_01a70();
  local_30[0x255] = *puVar1;
  puStack_6c = (undefined4 *)0x6;
  uStack_70 = 0x4337de;
  game_get_flag_object_01a70();
  puStack_6c = (undefined4 *)0x7;
  uStack_70 = 0x4337f1;
  game_get_flag_object_01a70();
  puStack_6c = (undefined4 *)0x8;
  uStack_70 = 0x433804;
  game_get_flag_object_01a70();
  puStack_6c = (undefined4 *)0x9;
  uStack_70 = 0x433817;
  game_get_flag_object_01a70();
  puStack_6c = (undefined4 *)0xa;
  uStack_70 = 0x43382a;
  game_get_flag_object_01a70();
  uVar2 = FUN_004274d0(6);
  FUN_00405520(uVar2);
  FUN_004c7590(auStack_80);
  local_8._0_1_ = 1;
  FUN_00405520(local_30[0x25d]);
  local_8 = (uint)local_8._1_3_ << 8;
  puStack_6c = (undefined4 *)FUN_004c7af0(local_2c);
  uStack_70 = 0x4338ae;
  FUN_004053e0();
  puStack_6c = (undefined4 *)0x4338b6;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_2c);
  *(undefined1 *)((int)local_30 + 0x8f1) = 1;
  *(undefined1 *)((int)local_30 + 0x8f2) = 1;
  *(undefined1 *)(local_30 + 0x26b) = 0;
  *(undefined1 *)((int)local_30 + 0x8f3) = 1;
  ExceptionList = local_10;
  return local_30;
}


/* ==== 00433910  FUN_00433910  size=331 ==== */

undefined4 FUN_00433910(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int in_ECX;
  
  img_path_loader_12(param_1);
  if ((*(char *)(in_ECX + 0x9ac) == '\0') &&
     (*(int *)(in_ECX + 0x6e8) <= *(int *)(in_ECX + 0x6e0) / 2)) {
    *(undefined1 *)(in_ECX + 0x9ac) = 1;
    uVar1 = game_get_flag_object_01a70(0);
    FUN_004d1b30(uVar1);
    FUN_00517ee0(uVar1);
    uVar1 = game_get_flag_object_01a70(1);
    FUN_004d1b30(uVar1);
    FUN_00517ee0(uVar1);
    uVar1 = game_get_flag_object_01a70(2);
    FUN_004d1b30(uVar1);
    FUN_00517ee0(uVar1);
    uVar1 = FUN_004274d0(4);
    uVar1 = FUN_005e9250(uVar1);
    puVar2 = (undefined4 *)game_get_flag_object_01a70(0);
    *puVar2 = uVar1;
    uVar1 = FUN_004274d0(9);
    uVar1 = FUN_005e9250(uVar1);
    puVar2 = (undefined4 *)game_get_flag_object_01a70(1);
    *puVar2 = uVar1;
    uVar1 = FUN_004274d0(0xe);
    uVar1 = FUN_005e9250(uVar1);
    puVar2 = (undefined4 *)game_get_flag_object_01a70(2);
    *puVar2 = uVar1;
  }
  return 0;
}


/* ==== 00433d40  FUN_00433d40  size=62 ==== */

undefined4 * FUN_00433d40(int param_1)

{
  undefined4 *in_ECX;
  
  FUN_0042fb60(param_1);
  *in_ECX = CThunderlightning::vftable;
  in_ECX[99] = *(undefined4 *)(param_1 + 0x68);
  *(undefined1 *)(in_ECX + 0x265) = 1;
  return in_ECX;
}


/* ==== 00433d80  FUN_00433d80  size=55 ==== */

void FUN_00433d80(int param_1)

{
  int in_ECX;
  
  if ((*(int *)(in_ECX + 0x18c) == 0) || (*(int *)(param_1 + 4) == *(int *)(in_ECX + 0x18c))) {
    FUN_00431fb0(param_1);
  }
  return;
}


/* ==== 00433dc0  FUN_00433dc0  size=162 ==== */

undefined4 * FUN_00433dc0(undefined4 param_1)

{
  undefined1 auStack_38 [16];
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
  uStack_28 = 0x433df4;
  FUN_0042fb60();
  local_8 = 0;
  *local_14 = CBlast::vftable;
  local_14[0x268] = 0;
  local_18 = auStack_38;
  FUN_004054a0("common/commoneffect/animation/blast1.ani");
  FUN_00630a40();
  local_1c = auStack_38;
  FUN_004054a0("common/commoneffect/animation/blast2.ani");
  FUN_00630a40();
  ExceptionList = local_10;
  return local_14;
}


/* ==== 00433e70  FUN_00433e70  size=23 ==== */

int FUN_00433e70(void)

{
  int in_ECX;
  
  return *(int *)(in_ECX + 0x228) + 1;
}


/* ==== 00433e90  FUN_00433e90  size=137 ==== */

void FUN_00433e90(int param_1)

{
  int iVar1;
  int *in_ECX;
  
  in_ECX[0x268] = in_ECX[0x268] + param_1;
  iVar1 = FUN_00432b40();
  if (iVar1 != 0) {
    iVar1 = FUN_00432b40();
    in_ECX[0x89] = *(int *)(iVar1 + 0x224);
    iVar1 = FUN_00432b40();
    in_ECX[0x8a] = *(int *)(iVar1 + 0x228);
    in_ECX[0x8b] = 0;
  }
  if (0x4af < in_ECX[0x268]) {
    (**(code **)(*in_ECX + 0xb0))();
  }
  return;
}


/* ==== 00434000  FUN_00434000  size=84 ==== */

void FUN_00434000(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = FUN_00432b40();
  if (iVar1 != 0) {
    iVar1 = FUN_00432b40();
    *(undefined4 *)(in_ECX + 0x224) = *(undefined4 *)(iVar1 + 0x224);
    iVar1 = FUN_00432b40();
    *(undefined4 *)(in_ECX + 0x228) = *(undefined4 *)(iVar1 + 0x228);
    *(undefined4 *)(in_ECX + 0x22c) = 0;
  }
  return;
}


/* ==== 00434060  FUN_00434060  size=47 ==== */

void FUN_00434060(undefined4 param_1,int param_2)

{
  undefined1 auStack_24 [24];
  undefined1 *local_c;
  
  if (param_2 == 7) {
    local_c = auStack_24;
    FUN_004054a0("FORCE_FIELD_FIRE");
    FUN_004c3570();
  }
  return;
}


/* ==== 00434090  FUN_00434090  size=295 ==== */

undefined4 * FUN_00434090(void)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070e79d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0042fb60();
  local_8 = 0;
  *in_ECX = CMonsterFlowerSummoner::vftable;
  *(undefined1 *)(in_ECX + 0x265) = 1;
  uVar1 = FUN_004274d0(0);
  FUN_00405520(uVar1);
  FUN_00630a40();
  uVar1 = FUN_004274d0(1);
  FUN_00405520(uVar1);
  FUN_00630a40();
  uVar1 = FUN_004274d0(2);
  FUN_00405520(uVar1);
  FUN_00630a40();
  uVar1 = FUN_004274d0(3);
  FUN_00405520(uVar1);
  FUN_00630a40();
  ExceptionList = local_10;
  return in_ECX;
}


/* ==== 004341c0  FUN_004341c0  size=83 ==== */

void FUN_004341c0(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = FUN_0053c660(0x387,0x28,*(undefined4 *)(in_ECX + 0x224),*(undefined4 *)(in_ECX + 0x228),0,
                       *(undefined4 *)(in_ECX + 0x200),0,*(undefined4 *)(in_ECX + 500));
  *(undefined1 *)(iVar1 + 0x30) = 0;
  FUN_00432fd0();
  return;
}


/* ==== 004345e0  FUN_004345e0  size=270 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_004345e0(int param_1)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_64 [16];
  undefined4 uStack_54;
  WorkQueue *pWStack_50;
  uint uStack_4c;
  undefined1 *local_48;
  int local_44;
  int local_40;
  WorkQueue local_3c [24];
  undefined4 local_24;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070e84d;
  local_10 = ExceptionList;
  uStack_4c = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  pWStack_50 = (WorkQueue *)param_1;
  uStack_54 = 0x434617;
  local_14 = uStack_4c;
  FUN_00431fb0();
  pWStack_50 = (WorkQueue *)0x434623;
  cVar1 = FUN_006352e0();
  if (cVar1 == '\0') {
    local_48 = auStack_64;
    FUN_004054a0(&DAT_007798b8);
    local_44 = FUN_006356a0();
    if ((local_44 == 0) && (*(int *)(*(int *)(param_1 + 4) + 0x22c) == 0)) {
      pWStack_50 = (WorkQueue *)0x434668;
      iVar2 = FUN_00641430();
      if (iVar2 % 100 < *(int *)(local_40 + 0x9a0)) {
        pWStack_50 = (WorkQueue *)0x434683;
        FUN_0042df20();
        local_8 = 0;
        pWStack_50 = (WorkQueue *)&DAT_007798b8;
        uStack_54 = 0x434697;
        FUN_004053a0();
        local_24 = *(undefined4 *)(local_40 + 0x9a4);
        pWStack_50 = local_3c;
        uStack_54 = 0x4346b8;
        FUN_0044e230();
        pWStack_50 = (WorkQueue *)0x4346c3;
        FUN_00635d80();
        local_8 = 0xffffffff;
        pWStack_50 = (WorkQueue *)0x4346d2;
        Concurrency::details::WorkQueue::~WorkQueue(local_3c);
      }
    }
  }
  ExceptionList = local_10;
  return;
}


/* ==== 004346f0  FUN_004346f0  size=37 ==== */

void FUN_004346f0(void)

{
  int in_ECX;
  
  if (*(char *)(in_ECX + 0x120) == '\0') {
    *(undefined1 *)(in_ECX + 0x120) = 1;
  }
  return;
}


/* ==== 00434720  FUN_00434720  size=340 ==== */

void FUN_00434720(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *in_ECX;
  
  if (((1 < in_ECX[0x47]) && (0 < in_ECX[0x26c])) &&
     (in_ECX[0x26b] = in_ECX[0x26b] + param_1, in_ECX[0x26c] <= in_ECX[0x26b])) {
    in_ECX[0x26b] = 0;
    iVar2 = FUN_00432b40();
    if (iVar2 != 0) {
      uVar3 = FUN_00432b40(&CObj::RTTI_Type_Descriptor,&CHARACTER::RTTI_Type_Descriptor,0);
      iVar2 = FUN_0070b658(uVar3,0);
      if (iVar2 != 0) {
        iVar1 = in_ECX[0x47];
        iVar2 = FUN_0042f340(iVar2,0,0,0,0x4e22,in_ECX[0x7d]);
        *(int *)(iVar2 + 0x34) = iVar1 + -1;
      }
    }
    in_ECX[0x47] = 0;
  }
  if ((((char)in_ECX[0x48] != '\0') && (0 < in_ECX[0x26a])) &&
     (in_ECX[0x26a] = in_ECX[0x26a] - param_1, in_ECX[0x26a] < 1)) {
    in_ECX[0x26a] = 2000;
    *(undefined1 *)(in_ECX + 0x48) = 0;
    (**(code **)(*in_ECX + 0xb0))();
  }
  return;
}


/* ==== 004348f0  ~WorkQueue  size=31 ==== */

/* Library Function - Single Match
    public: __thiscall Concurrency::details::WorkQueue::~WorkQueue(void)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void __thiscall Concurrency::details::WorkQueue::~WorkQueue(WorkQueue *this)

{
  FUN_00401ac0();
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)this);
  return;
}


/* ==== 00434910  FUN_00434910  size=1593 ==== */

undefined4 * FUN_00434910(void)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 *in_ECX;
  float10 fVar7;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070e8ad;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0042fb60();
  local_8 = 0;
  *in_ECX = hardattackchargeafter::vftable;
  *(undefined1 *)(in_ECX + 0x30) = 0;
  *(undefined1 *)((int)in_ECX + 0xc1) = 0;
  in_ECX[0x268] = 0;
  in_ECX[0x269] = 0;
  in_ECX[0x26a] = 0;
  iVar3 = FUN_00432b40();
  if (iVar3 != 0) {
    FUN_00432b40();
    iVar3 = FUN_0070b658();
    if (iVar3 != 0) {
      iVar4 = FUN_0047bcc0();
      in_ECX[0x8c] = iVar4 * 1000;
      uVar5 = FUN_0047bcc0();
      in_ECX[0x8f] = uVar5;
      bVar1 = false;
      game_get_state_ptr_d1520();
      FUN_004d58e0();
      FUN_0042a9e0();
      FUN_0042a9c0();
      while (cVar2 = FUN_0040d2d0(), cVar2 != '\0') {
        piVar6 = (int *)FUN_0042a580();
        if ((((*(int *)(*piVar6 + 0x1e4) == 0x4e2b) || (*(int *)(*piVar6 + 0x1e4) == 0x4e2c)) ||
            (*(int *)(*piVar6 + 0x1e4) == 0x4e2d)) && (*(int *)(*piVar6 + 0x18c) == iVar3)) {
          bVar1 = true;
          if (*(int *)(*piVar6 + 0x1e4) == 0x4e2b) {
            FUN_00433140();
            FUN_004274d0();
            FUN_00405520();
            FUN_00630a40();
            FUN_004274d0();
            FUN_00405520();
            local_8._0_1_ = 1;
            game_loop_helper_e9240();
            local_8 = (uint)local_8._1_3_ << 8;
            FUN_005be5d0();
            FUN_00430eb0();
            cVar2 = FUN_00427e30();
            if (cVar2 != '\0') {
              FUN_00405520(in_ECX + 0x1eb);
              FUN_006353a0();
            }
            in_ECX[0x268] = 1;
          }
          else if (*(int *)(*piVar6 + 0x1e4) == 0x4e2c) {
            FUN_00433140();
            FUN_004274d0();
            FUN_00405520();
            FUN_00630a40();
            FUN_004274d0();
            FUN_00405520();
            local_8._0_1_ = 2;
            game_loop_helper_e9240();
            local_8 = (uint)local_8._1_3_ << 8;
            FUN_005be5d0();
            FUN_00430eb0();
            cVar2 = FUN_00427e30();
            if (cVar2 != '\0') {
              FUN_00405520(in_ECX + 0x1eb);
              FUN_006353a0();
            }
            in_ECX[0x268] = 2;
            FUN_0047bd30();
            uVar5 = thunk_FUN_006e5750();
            in_ECX[0x269] = uVar5;
            fVar7 = (float10)FUN_0047bd30();
            in_ECX[0x26a] = (int)((float)fVar7 * 1000.0);
            FUN_0047bd30();
            thunk_FUN_006e5750();
            FUN_00631910();
          }
          else if (*(int *)(*piVar6 + 0x1e4) == 0x4e2d) {
            FUN_00433140();
            FUN_004274d0();
            FUN_00405520();
            FUN_00630a40();
            FUN_004274d0();
            FUN_00405520();
            local_8._0_1_ = 3;
            game_loop_helper_e9240();
            local_8 = (uint)local_8._1_3_ << 8;
            FUN_005be5d0();
            FUN_00430eb0();
            cVar2 = FUN_00427e30();
            if (cVar2 != '\0') {
              FUN_00405520(in_ECX + 0x1eb);
              FUN_006353a0();
            }
            in_ECX[0x268] = 3;
            FUN_0047bd30();
            uVar5 = thunk_FUN_006e5750();
            in_ECX[0x269] = uVar5;
            fVar7 = (float10)FUN_0047bd30();
            in_ECX[0x26a] = (int)((float)fVar7 * 1000.0);
            FUN_0047bd30();
            thunk_FUN_006e5750();
            FUN_00631910();
          }
          break;
        }
        FUN_0042a560();
      }
      if (!bVar1) {
        FUN_00433140();
        FUN_004274d0();
        FUN_00405520();
        FUN_00630a40();
        FUN_004274d0();
        FUN_00405520();
        local_8._0_1_ = 4;
        game_loop_helper_e9240();
        local_8 = (uint)local_8._1_3_ << 8;
        FUN_005be5d0();
        FUN_00430eb0();
        cVar2 = FUN_00427e30();
        if (cVar2 != '\0') {
          FUN_00405520(in_ECX + 0x1eb);
          FUN_006353a0();
        }
        in_ECX[0x268] = 1;
      }
    }
  }
  ExceptionList = local_10;
  return in_ECX;
}


/* ==== 00434f50  FUN_00434f50  size=494 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00434f50(int param_1)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_94 [16];
  undefined4 uStack_84;
  WorkQueue *pWStack_80;
  uint uStack_7c;
  undefined1 *local_78;
  undefined1 *local_74;
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
  puStack_c = &LAB_0070e8e5;
  local_10 = ExceptionList;
  uStack_7c = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  pWStack_80 = (WorkQueue *)param_1;
  uStack_84 = 0x434f87;
  local_14 = uStack_7c;
  FUN_00431fb0();
  if (*(int *)(local_68 + 0x9a0) == 2) {
    pWStack_80 = (WorkQueue *)0x434fa3;
    cVar1 = FUN_006352e0();
    if (cVar1 == '\0') {
      local_74 = auStack_94;
      FUN_004054a0(&DAT_007798b8);
      local_6c = FUN_006356a0();
      if ((local_6c == 0) && (*(int *)(*(int *)(param_1 + 4) + 0x22c) == 0)) {
        pWStack_80 = (WorkQueue *)0x434fe8;
        iVar2 = FUN_00641430();
        if (iVar2 % 100 < *(int *)(local_68 + 0x9a4)) {
          pWStack_80 = (WorkQueue *)0x435003;
          FUN_0042df20();
          local_8 = 0;
          pWStack_80 = (WorkQueue *)&DAT_007798b8;
          uStack_84 = 0x435017;
          FUN_004053a0();
          local_24 = *(undefined4 *)(local_68 + 0x9a8);
          pWStack_80 = local_3c;
          uStack_84 = 0x435038;
          FUN_0044e230();
          pWStack_80 = (WorkQueue *)0x435043;
          FUN_00635d80();
          local_8 = 0xffffffff;
          pWStack_80 = (WorkQueue *)0x435052;
          Concurrency::details::WorkQueue::~WorkQueue(local_3c);
        }
      }
    }
  }
  else if (*(int *)(local_68 + 0x9a0) == 3) {
    pWStack_80 = (WorkQueue *)0x435073;
    cVar1 = FUN_006352e0();
    if (cVar1 == '\0') {
      local_78 = auStack_94;
      FUN_004054a0(&DAT_0077998c);
      local_70 = FUN_006356a0();
      if ((local_70 == 0) && (*(int *)(*(int *)(param_1 + 4) + 0x22c) == 0)) {
        pWStack_80 = (WorkQueue *)0x4350b8;
        iVar2 = FUN_00641430();
        if (iVar2 % 100 < *(int *)(local_68 + 0x9a4)) {
          pWStack_80 = (WorkQueue *)0x4350d3;
          FUN_0042df20();
          local_8 = 1;
          pWStack_80 = (WorkQueue *)&DAT_0077998c;
          uStack_84 = 0x4350e7;
          FUN_004053a0();
          local_4c = *(undefined4 *)(local_68 + 0x9a8);
          pWStack_80 = local_64;
          uStack_84 = 0x435108;
          FUN_0044e230();
          pWStack_80 = (WorkQueue *)0x435113;
          FUN_00635d80();
          local_8 = 0xffffffff;
          pWStack_80 = (WorkQueue *)0x435122;
          Concurrency::details::WorkQueue::~WorkQueue(local_64);
        }
      }
    }
  }
  ExceptionList = local_10;
  return;
}


/* ==== 00435140  FUN_00435140  size=71 ==== */

void FUN_00435140(undefined4 param_1)

{
  int *in_ECX;
  
  (**(code **)(*in_ECX + 0xec))(param_1);
  (**(code **)(*in_ECX + 0xf0))();
  if (in_ECX[0x8c] < 1) {
    FUN_00432d30();
  }
  return;
}


/* ==== 00435190  FUN_00435190  size=1406 ==== */

undefined4 * FUN_00435190(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *in_ECX;
  float10 fVar5;
  int local_28;
  int local_20;
  int local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070e92b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0042fb60();
  local_8 = 0;
  *in_ECX = CObjKhazan::vftable;
  FUN_0040d8b0();
  local_8 = CONCAT31(local_8._1_3_,1);
  in_ECX[0x25e] = 4;
  *(undefined1 *)(in_ECX + 0x30) = 0;
  *(undefined1 *)((int)in_ECX + 0xc1) = 0;
  FUN_004054a0("GHOST_KAJAN");
  FUN_004c3570();
  uVar2 = FUN_004274d0(2);
  FUN_00405520(uVar2);
  FUN_00630a40();
  uVar2 = FUN_004274d0(3);
  FUN_00405520(uVar2);
  FUN_00630a40();
  in_ECX[0x4a] = 0;
  local_1c = game_loop_helper_018d0();
  iVar3 = game_loop_helper_018b0();
  for (; local_1c != iVar3; local_1c = local_1c + 0x60) {
    in_ECX[0x4a] = in_ECX[0x4a] + *(int *)(local_1c + 0x44);
  }
  uVar2 = FUN_004274d0(0);
  FUN_00405520(uVar2);
  iVar3 = FUN_00630a40();
  *(undefined4 *)(iVar3 + 0x30) = 0;
  local_20 = game_loop_helper_018d0();
  iVar3 = game_loop_helper_018b0();
  for (; local_20 != iVar3; local_20 = local_20 + 0x60) {
    *(undefined1 *)(local_20 + 0x3b) = 0xff;
    *(undefined1 *)(local_20 + 0x38) = 0xff;
    *(undefined1 *)(local_20 + 0x39) = 0xff;
    *(undefined1 *)(local_20 + 0x3a) = 0xff;
  }
  uVar2 = FUN_004274d0(1);
  FUN_00405520(uVar2);
  iVar3 = FUN_00630a40();
  *(undefined4 *)(iVar3 + 0x30) = 0;
  local_28 = game_loop_helper_018d0();
  iVar3 = game_loop_helper_018b0();
  for (; local_28 != iVar3; local_28 = local_28 + 0x60) {
    *(undefined1 *)(local_28 + 0x3b) = 0xff;
    *(undefined1 *)(local_28 + 0x38) = 0xff;
    *(undefined1 *)(local_28 + 0x39) = 0xff;
    *(undefined1 *)(local_28 + 0x3a) = 0xff;
  }
  in_ECX[0x269] = 0;
  in_ECX[0x26a] = 0;
  in_ECX[0x268] = 0;
  iVar3 = FUN_00432b40();
  if (iVar3 != 0) {
    FUN_00432b40();
    uVar2 = FUN_0070b658();
    in_ECX[0x268] = uVar2;
    if (in_ECX[0x268] != 0) {
      game_get_state_ptr_d1520();
      FUN_004d58e0();
      FUN_0042a9e0();
      FUN_0042a9c0();
      while( true ) {
        cVar1 = FUN_0040d2d0();
        if (cVar1 == '\0') break;
        piVar4 = (int *)FUN_0042a580();
        if ((*(int *)(*piVar4 + 0x1e4) == 0x4e2b) && (*(int *)(*piVar4 + 0x18c) == in_ECX[0x268])) {
          (**(code **)(*(int *)*piVar4 + 0xb0))();
          break;
        }
        FUN_0042a560();
      }
      if (in_ECX[0x47] == -1) {
        fVar5 = (float10)FUN_0047bd30();
        in_ECX[0x26a] = (int)((float)fVar5 * 1000.0);
        FUN_0047bd30();
        uVar2 = thunk_FUN_006e5750();
        in_ECX[0x275] = uVar2;
        FUN_0047bd30();
        uVar2 = thunk_FUN_006e5750();
        in_ECX[0x276] = uVar2;
      }
      else {
        in_ECX[0x8b] = 0;
        fVar5 = (float10)FUN_0047c150();
        in_ECX[0x26a] = (int)((float)fVar5 * 1000.0);
        FUN_0047c150();
        uVar2 = thunk_FUN_006e5750();
        in_ECX[0x275] = uVar2;
        FUN_0047c150();
        uVar2 = thunk_FUN_006e5750();
        in_ECX[0x276] = uVar2;
      }
      *(undefined4 **)(in_ECX[0x268] + 0x9b4) = in_ECX;
      in_ECX[99] = in_ECX[0x268];
    }
  }
  in_ECX[0x26b] = 0;
  in_ECX[0x26c] = 0;
  *(undefined1 *)(in_ECX + 0x26d) = 0;
  game_loop_helper_e9240();
  FUN_005d9da0();
  FUN_0044e440();
  FUN_0040d840();
  game_loop_helper_e9240();
  FUN_005d9da0();
  iVar3 = FUN_0044e440();
  in_ECX[0x274] = *(undefined4 *)(iVar3 + 0x18);
  ExceptionList = local_10;
  return in_ECX;
}


/* ==== 00435710  FUN_00435710  size=96 ==== */

void FUN_00435710(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int *in_ECX;
  
  if (param_1 != 0) {
    uVar2 = FUN_004274d0(5);
    cVar1 = destroy<>(param_1 + 100,uVar2);
    if (cVar1 != '\0') {
      (**(code **)(*in_ECX + 0xb0))();
    }
    FUN_0063c3f0(param_1);
  }
  return;
}


/* ==== 00435770  FUN_00435770  size=313 ==== */

void FUN_00435770(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *in_ECX;
  int local_10;
  
  if (in_ECX[0x4a] != -1) {
    in_ECX[0x49] = in_ECX[0x49] + param_1;
    local_10 = (in_ECX[0x49] * 0xff) / in_ECX[0x4a];
    if (in_ECX[0x4a] <= in_ECX[0x49]) {
      in_ECX[0x49] = 0;
      in_ECX[0x4a] = -1;
      local_10 = 0xff;
      uVar1 = FUN_004274d0(4);
      FUN_00405520(uVar1);
      (**(code **)(*in_ECX + 0x78))();
    }
    uVar1 = FUN_004274d0(0);
    FUN_00405520(uVar1);
    iVar2 = FUN_00630790();
    *(int *)(iVar2 + 0x30) = local_10;
    uVar1 = FUN_004274d0(1);
    FUN_00405520(uVar1);
    iVar2 = FUN_00630790();
    *(int *)(iVar2 + 0x30) = local_10;
  }
  return;
}


/* ==== 004358b0  FUN_004358b0  size=1299 ==== */

void FUN_004358b0(int param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int *in_ECX;
  uint uVar4;
  int local_14;
  int local_c;
  
  if (in_ECX[0x268] != 0) {
    if (*(int *)(in_ECX[0x268] + 0x9b4) == 0) {
      if ((char)in_ECX[0x26d] != '\0') {
        FUN_004054a0();
        piVar2 = (int *)FUN_0063bda0();
        *piVar2 = *piVar2 - in_ECX[0x275];
        FUN_004054a0();
        piVar2 = (int *)FUN_0063bda0();
        *piVar2 = *piVar2 - in_ECX[0x276];
        *(undefined1 *)(in_ECX + 0x26d) = 0;
        FUN_00657c10();
        iVar3 = game_get_player_or_session_blob();
        if (in_ECX[0x268] == iVar3) {
          FUN_00405520(in_ECX + 0x26e);
          FUN_0067aea0();
        }
      }
    }
    else {
      uVar1 = *(int *)(in_ECX[0x268] + 0x224) - in_ECX[0x89];
      uVar4 = (int)uVar1 >> 0x1f;
      if (((int)((uVar1 ^ uVar4) - uVar4) < 0xe6) &&
         (uVar1 = *(int *)(in_ECX[0x268] + 0x228) - in_ECX[0x8a], uVar4 = (int)uVar1 >> 0x1f,
         (int)((uVar1 ^ uVar4) - uVar4) < 0x2e)) {
        if ((char)in_ECX[0x26d] == '\0') {
          FUN_004054a0();
          piVar2 = (int *)FUN_0063bda0();
          *piVar2 = *piVar2 + in_ECX[0x275];
          FUN_004054a0();
          piVar2 = (int *)FUN_0063bda0();
          *piVar2 = *piVar2 + in_ECX[0x276];
          *(undefined1 *)(in_ECX + 0x26d) = 1;
          FUN_00657c10();
          iVar3 = game_get_player_or_session_blob();
          if (in_ECX[0x268] == iVar3) {
            FUN_00405520(in_ECX + 0x26e);
            FUN_0067aa80();
          }
        }
      }
      else if ((char)in_ECX[0x26d] != '\0') {
        FUN_004054a0();
        piVar2 = (int *)FUN_0063bda0();
        *piVar2 = *piVar2 - in_ECX[0x275];
        FUN_004054a0();
        piVar2 = (int *)FUN_0063bda0();
        *piVar2 = *piVar2 - in_ECX[0x276];
        *(undefined1 *)(in_ECX + 0x26d) = 0;
        FUN_00657c10();
        iVar3 = game_get_player_or_session_blob();
        if (in_ECX[0x268] == iVar3) {
          FUN_00405520(in_ECX + 0x26e);
          FUN_0067aea0();
        }
      }
    }
  }
  if (0 < in_ECX[0x26c]) {
    in_ECX[0x26b] = in_ECX[0x26b] + param_1;
    local_14 = ((in_ECX[0x26c] - in_ECX[0x26b]) * 0xff) / in_ECX[0x26c];
    if (in_ECX[0x26c] <= in_ECX[0x26b]) {
      in_ECX[0x26b] = 0;
      in_ECX[0x26c] = 0;
      local_14 = 0;
    }
    FUN_004274d0();
    FUN_00405520();
    iVar3 = FUN_00630790();
    *(int *)(iVar3 + 0x30) = local_14;
    FUN_004274d0();
    FUN_00405520();
    iVar3 = FUN_00630790();
    *(int *)(iVar3 + 0x30) = local_14;
  }
  if ((0 < in_ECX[0x26a]) &&
     (in_ECX[0x269] = in_ECX[0x269] + param_1, in_ECX[0x26a] <= in_ECX[0x269])) {
    in_ECX[0x269] = 0;
    in_ECX[0x26a] = 0;
    FUN_004274d0();
    FUN_00405520();
    (**(code **)(*in_ECX + 0x78))();
    local_c = game_loop_helper_018d0();
    iVar3 = game_loop_helper_018b0();
    for (; local_c != iVar3; local_c = local_c + 0x60) {
      in_ECX[0x26c] = in_ECX[0x26c] + *(int *)(local_c + 0x44);
    }
  }
  return;
}


/* ==== 00435dd0  FUN_00435dd0  size=276 ==== */

void FUN_00435dd0(void)

{
  int iVar1;
  int in_ECX;
  undefined *puStack_40;
  undefined1 auStack_3c [20];
  undefined4 uStack_28;
  undefined1 *local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  int *local_18;
  int *local_14;
  int *local_10;
  int *local_c;
  int local_8;
  
  if ((*(int *)(in_ECX + 0x9a0) != 0) &&
     (*(undefined4 *)(*(int *)(in_ECX + 0x9a0) + 0x9b4) = 0, *(char *)(in_ECX + 0x9b4) != '\0')) {
    local_1c = auStack_3c;
    puStack_40 = &DAT_007799a0;
    local_8 = in_ECX;
    FUN_004054a0();
    puStack_40 = (undefined *)0x435e2e;
    local_14 = (int *)FUN_0063bda0();
    *local_14 = *local_14 - *(int *)(local_8 + 0x9d4);
    local_20 = auStack_3c;
    puStack_40 = &DAT_007799a8;
    local_c = local_14;
    FUN_004054a0();
    puStack_40 = (undefined *)0x435e6a;
    local_18 = (int *)FUN_0063bda0();
    *local_18 = *local_18 - *(int *)(local_8 + 0x9d8);
    uStack_28 = 0x435e94;
    local_10 = local_18;
    FUN_00657c10();
    *(undefined1 *)(local_8 + 0x9b4) = 0;
    uStack_28 = 0x435ea3;
    iVar1 = game_get_player_or_session_blob();
    if (*(int *)(local_8 + 0x9a0) == iVar1) {
      uStack_28 = *(undefined4 *)(local_8 + 0x9d0);
      local_24 = (undefined1 *)&puStack_40;
      FUN_00405520(local_8 + 0x9b8);
      FUN_0067aea0();
    }
  }
  uStack_28 = 0x435edf;
  FUN_00432d30();
  return;
}


/* ==== 00435ef0  FUN_00435ef0  size=1264 ==== */

undefined4 * FUN_00435ef0(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *in_ECX;
  float10 fVar5;
  int local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070e96b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0042fb60();
  local_8 = 0;
  *in_ECX = CObjBremen::vftable;
  FUN_0040d8b0();
  local_8 = CONCAT31(local_8._1_3_,1);
  in_ECX[0x25e] = 4;
  *(undefined1 *)(in_ECX + 0x30) = 0;
  *(undefined1 *)((int)in_ECX + 0xc1) = 0;
  FUN_004054a0("GHOST_KAJAN");
  FUN_004c3570();
  uVar2 = FUN_004274d0(2);
  FUN_00405520(uVar2);
  FUN_00630a40();
  uVar2 = FUN_004274d0(3);
  FUN_00405520(uVar2);
  FUN_00630a40();
  in_ECX[0x4a] = 0;
  local_1c = game_loop_helper_018d0();
  iVar3 = game_loop_helper_018b0();
  for (; local_1c != iVar3; local_1c = local_1c + 0x60) {
    in_ECX[0x4a] = in_ECX[0x4a] + *(int *)(local_1c + 0x44);
  }
  uVar2 = FUN_004274d0(0);
  FUN_00405520(uVar2);
  iVar3 = FUN_00630a40();
  *(undefined4 *)(iVar3 + 0x30) = 0;
  uVar2 = FUN_004274d0(1);
  FUN_00405520(uVar2);
  iVar3 = FUN_00630a40();
  *(undefined4 *)(iVar3 + 0x30) = 0;
  in_ECX[0x268] = 0;
  in_ECX[0x269] = 0;
  in_ECX[0x26a] = 0;
  in_ECX[0x26b] = 0;
  in_ECX[0x26c] = 0;
  FUN_004053a0();
  in_ECX[0x273] = 0;
  in_ECX[0x274] = 0;
  in_ECX[0x275] = 0;
  iVar3 = FUN_00432b40();
  if (iVar3 != 0) {
    FUN_00432b40();
    uVar2 = FUN_0070b658();
    in_ECX[0x268] = uVar2;
    if (in_ECX[0x268] != 0) {
      game_get_state_ptr_d1520();
      FUN_004d58e0();
      FUN_0042a9e0();
      FUN_0042a9c0();
      while( true ) {
        cVar1 = FUN_0040d2d0();
        if (cVar1 == '\0') break;
        piVar4 = (int *)FUN_0042a580();
        if ((*(int *)(*piVar4 + 0x1e4) == 0x4e2d) && (*(int *)(*piVar4 + 0x18c) == in_ECX[0x268])) {
          (**(code **)(*(int *)*piVar4 + 0xb0))();
          break;
        }
        FUN_0042a560();
      }
      in_ECX[99] = in_ECX[0x268];
      if (in_ECX[0x47] == -1) {
        fVar5 = (float10)FUN_0047bd30();
        in_ECX[0x26a] = (int)((float)fVar5 * 1000.0);
        FUN_0047bd30();
        uVar2 = thunk_FUN_006e5750();
        in_ECX[0x274] = uVar2;
        FUN_0047bd30();
        uVar2 = thunk_FUN_006e5750();
        in_ECX[0x275] = uVar2;
      }
      else {
        in_ECX[0x8b] = 0;
        fVar5 = (float10)FUN_0047c150();
        in_ECX[0x26a] = (int)((float)fVar5 * 1000.0);
        FUN_0047c150();
        uVar2 = thunk_FUN_006e5750();
        in_ECX[0x274] = uVar2;
        FUN_0047c150();
        uVar2 = thunk_FUN_006e5750();
        in_ECX[0x275] = uVar2;
      }
      game_loop_helper_e9240();
      FUN_005d9da0();
      FUN_0044e440();
      FUN_0040d840();
      game_loop_helper_e9240();
      FUN_005d9da0();
      iVar3 = FUN_0044e440();
      in_ECX[0x273] = *(undefined4 *)(iVar3 + 0x18);
    }
  }
  ExceptionList = local_10;
  return in_ECX;
}


/* ==== 004363e0  FUN_004363e0  size=1177 ==== */

void FUN_004363e0(int param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *in_ECX;
  uint uVar5;
  uint uVar6;
  int local_1c;
  int local_10;
  
  game_get_state_ptr_d1520();
  FUN_004d58e0();
  FUN_0042a9e0();
  FUN_0042a9c0();
  while (cVar1 = FUN_0040d2d0(), cVar1 != '\0') {
    piVar2 = (int *)FUN_0042a580();
    if ((((*piVar2 == 0) || (cVar1 = FUN_006352e0(), cVar1 != '\0')) ||
        (*(int *)(*piVar2 + 0x22c) != 0)) ||
       (((uVar5 = *(int *)(*piVar2 + 0x224) - in_ECX[0x89], uVar6 = (int)uVar5 >> 0x1f,
         0xe5 < (int)((uVar5 ^ uVar6) - uVar6) ||
         (uVar5 = *(int *)(*piVar2 + 0x228) - in_ECX[0x8a], uVar6 = (int)uVar5 >> 0x1f,
         0x2d < (int)((uVar5 ^ uVar6) - uVar6))) ||
        ((in_ECX[0x268] == 0 ||
         (cVar1 = (**(code **)(*(int *)in_ECX[0x268] + 0x88))(), cVar1 == '\0')))))) {
      if (*(char *)(*piVar2 + 0x28) != '\0') {
        *(undefined1 *)(*piVar2 + 0x28) = 0;
        FUN_004054a0();
        piVar3 = (int *)FUN_0063bda0();
        *piVar3 = *piVar3 + in_ECX[0x274];
        FUN_004054a0();
        piVar3 = (int *)FUN_0063bda0();
        *piVar3 = *piVar3 + in_ECX[0x275];
        FUN_00657c10();
        iVar4 = game_get_player_or_session_blob();
        if (*piVar2 == iVar4) {
          FUN_00405520(in_ECX + 0x26d);
          FUN_0067aea0();
        }
      }
    }
    else {
      *(undefined1 *)(*piVar2 + 0x28) = 1;
      FUN_004054a0();
      piVar3 = (int *)FUN_0063bda0();
      *piVar3 = *piVar3 - in_ECX[0x274];
      FUN_004054a0();
      piVar3 = (int *)FUN_0063bda0();
      *piVar3 = *piVar3 - in_ECX[0x275];
      FUN_00657c10();
      iVar4 = game_get_player_or_session_blob();
      if (*piVar2 == iVar4) {
        FUN_00405520(in_ECX + 0x26d);
        FUN_0067aa80();
      }
    }
    FUN_0042a560();
  }
  if (0 < in_ECX[0x26c]) {
    in_ECX[0x26b] = in_ECX[0x26b] + param_1;
    local_1c = ((in_ECX[0x26c] - in_ECX[0x26b]) * 0xff) / in_ECX[0x26c];
    if (in_ECX[0x26c] <= in_ECX[0x26b]) {
      in_ECX[0x26b] = 0;
      in_ECX[0x26c] = 0;
      local_1c = 0;
    }
    FUN_004274d0();
    FUN_00405520();
    iVar4 = FUN_00630790();
    *(int *)(iVar4 + 0x30) = local_1c;
    FUN_004274d0();
    FUN_00405520();
    iVar4 = FUN_00630790();
    *(int *)(iVar4 + 0x30) = local_1c;
  }
  if ((0 < in_ECX[0x26a]) &&
     (in_ECX[0x269] = in_ECX[0x269] + param_1, in_ECX[0x26a] <= in_ECX[0x269])) {
    in_ECX[0x269] = 0;
    in_ECX[0x26a] = 0;
    FUN_004274d0();
    FUN_00405520();
    (**(code **)(*in_ECX + 0x78))();
    local_10 = game_loop_helper_018d0();
    iVar4 = game_loop_helper_018b0();
    for (; local_10 != iVar4; local_10 = local_10 + 0x60) {
      in_ECX[0x26c] = in_ECX[0x26c] + *(int *)(local_10 + 0x44);
    }
  }
  return;
}


/* ==== 00436880  FUN_00436880  size=333 ==== */

void FUN_00436880(void)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined *puStack_50;
  undefined1 auStack_4c [16];
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *local_34;
  undefined1 *local_30;
  undefined1 *local_2c;
  int *local_28;
  int *local_24;
  undefined1 local_20 [4];
  int *local_1c;
  int *local_18;
  int local_14;
  undefined1 local_10 [4];
  int local_c;
  int *local_8;
  
  puStack_38 = (undefined1 *)0x43688e;
  game_get_state_ptr_d1520();
  puStack_38 = (undefined1 *)0x436895;
  piVar2 = (int *)FUN_004d58e0();
  local_14 = *piVar2 + 0x170;
  puStack_38 = local_10;
  uStack_3c = 0x4368ab;
  FUN_0042a9e0();
  puStack_38 = local_20;
  uStack_3c = 0x4368b7;
  FUN_0042a9c0();
  while( true ) {
    puStack_38 = local_20;
    uStack_3c = 0x4368cf;
    cVar1 = FUN_0040d2d0();
    if (cVar1 == '\0') break;
    puStack_38 = (undefined1 *)0x4368e2;
    local_8 = (int *)FUN_0042a580();
    if ((*local_8 != 0) && (*(char *)(*local_8 + 0x28) != '\0')) {
      *(undefined1 *)(*local_8 + 0x28) = 0;
      local_2c = auStack_4c;
      puStack_50 = &DAT_007799b0;
      FUN_004054a0();
      puStack_50 = (undefined *)0x436927;
      local_24 = (int *)FUN_0063bda0();
      *local_24 = *local_24 + *(int *)(local_c + 0x9d0);
      local_30 = auStack_4c;
      puStack_50 = &DAT_007799c4;
      local_18 = local_24;
      FUN_004054a0();
      puStack_50 = (undefined *)0x43695f;
      local_28 = (int *)FUN_0063bda0();
      *local_28 = *local_28 + *(int *)(local_c + 0x9d4);
      puStack_38 = (undefined1 *)0x436985;
      local_1c = local_28;
      FUN_00657c10();
      puStack_38 = (undefined1 *)0x43698b;
      iVar3 = game_get_player_or_session_blob();
      if (*local_8 == iVar3) {
        puStack_38 = *(undefined1 **)(local_c + 0x9cc);
        local_34 = (undefined1 *)&puStack_50;
        FUN_00405520(local_c + 0x9b4);
        FUN_0067aea0();
      }
    }
    puStack_38 = (undefined1 *)0x4368c2;
    FUN_0042a560();
  }
  puStack_38 = (undefined1 *)0x4369c8;
  FUN_00432d30();
  return;
}


/* ==== 004369d0  FUN_004369d0  size=1042 ==== */

undefined4 * FUN_004369d0(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *in_ECX;
  float10 fVar5;
  int local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070e99d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0042fb60();
  local_8 = 0;
  *in_ECX = CObjSaya::vftable;
  in_ECX[0x25e] = 4;
  *(undefined1 *)(in_ECX + 0x30) = 0;
  *(undefined1 *)((int)in_ECX + 0xc1) = 0;
  FUN_004054a0("GHOST_KAJAN");
  FUN_004c3570();
  uVar2 = FUN_004274d0(2);
  FUN_00405520(uVar2);
  FUN_00630a40();
  uVar2 = FUN_004274d0(3);
  FUN_00405520(uVar2);
  FUN_00630a40();
  in_ECX[0x4a] = 0;
  local_20 = game_loop_helper_018d0();
  iVar3 = game_loop_helper_018b0();
  for (; local_20 != iVar3; local_20 = local_20 + 0x60) {
    in_ECX[0x4a] = in_ECX[0x4a] + *(int *)(local_20 + 0x44);
  }
  uVar2 = FUN_004274d0(0);
  FUN_00405520(uVar2);
  iVar3 = FUN_00630a40();
  *(undefined4 *)(iVar3 + 0x30) = 0;
  uVar2 = FUN_004274d0(1);
  FUN_00405520(uVar2);
  iVar3 = FUN_00630a40();
  *(undefined4 *)(iVar3 + 0x30) = 0;
  in_ECX[0x268] = 0;
  in_ECX[0x269] = 0;
  in_ECX[0x26a] = 0;
  in_ECX[0x26b] = 0;
  in_ECX[0x26c] = 0;
  in_ECX[0x26d] = 0;
  in_ECX[0x26e] = 0;
  in_ECX[0x26f] = 0;
  iVar3 = FUN_00432b40();
  if (iVar3 != 0) {
    FUN_00432b40();
    iVar3 = FUN_0070b658();
    if (iVar3 != 0) {
      game_get_state_ptr_d1520();
      FUN_004d58e0();
      FUN_0042a9e0();
      FUN_0042a9c0();
      while( true ) {
        cVar1 = FUN_0040d2d0();
        if (cVar1 == '\0') break;
        piVar4 = (int *)FUN_0042a580();
        if ((*(int *)(*piVar4 + 0x1e4) == 0x4e2c) && (*(int *)(*piVar4 + 0x18c) == iVar3)) {
          (**(code **)(*(int *)*piVar4 + 0xb0))();
          break;
        }
        FUN_0042a560();
      }
      in_ECX[99] = iVar3;
      FUN_0047bd30();
      thunk_FUN_006e5750();
      FUN_00631910();
      if (in_ECX[0x47] == -1) {
        fVar5 = (float10)FUN_0047bd30();
        in_ECX[0x269] = (int)((float)fVar5 * 1000.0);
      }
      else {
        in_ECX[0x8b] = 0;
        fVar5 = (float10)FUN_0047c150();
        in_ECX[0x269] = (int)((float)fVar5 * 1000.0);
      }
      uVar2 = FUN_0047bcc0();
      in_ECX[0x26d] = uVar2;
      FUN_0047bd30();
      uVar2 = thunk_FUN_006e5750();
      in_ECX[0x26e] = uVar2;
      fVar5 = (float10)FUN_0047bd30();
      in_ECX[0x26f] = (int)((float)fVar5 * 1000.0);
    }
  }
  ExceptionList = local_10;
  return in_ECX;
}


/* ==== 00436df0  FUN_00436df0  size=270 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00436df0(int param_1)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_64 [16];
  undefined4 uStack_54;
  WorkQueue *pWStack_50;
  uint uStack_4c;
  undefined1 *local_48;
  int local_44;
  int local_40;
  WorkQueue local_3c [24];
  undefined4 local_24;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070e84d;
  local_10 = ExceptionList;
  uStack_4c = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  pWStack_50 = (WorkQueue *)param_1;
  uStack_54 = 0x436e27;
  local_14 = uStack_4c;
  FUN_00431fb0();
  pWStack_50 = (WorkQueue *)0x436e33;
  cVar1 = FUN_006352e0();
  if (cVar1 == '\0') {
    local_48 = auStack_64;
    FUN_004054a0(&DAT_007798b8);
    local_44 = FUN_006356a0();
    if ((local_44 == 0) && (*(int *)(*(int *)(param_1 + 4) + 0x22c) == 0)) {
      pWStack_50 = (WorkQueue *)0x436e78;
      iVar2 = FUN_00641430();
      if (iVar2 % 100 < *(int *)(local_40 + 0x9b8)) {
        pWStack_50 = (WorkQueue *)0x436e93;
        FUN_0042df20();
        local_8 = 0;
        pWStack_50 = (WorkQueue *)&DAT_007798b8;
        uStack_54 = 0x436ea7;
        FUN_004053a0();
        local_24 = *(undefined4 *)(local_40 + 0x9bc);
        pWStack_50 = local_3c;
        uStack_54 = 0x436ec8;
        FUN_0044e230();
        pWStack_50 = (WorkQueue *)0x436ed3;
        FUN_00635d80();
        local_8 = 0xffffffff;
        pWStack_50 = (WorkQueue *)0x436ee2;
        Concurrency::details::WorkQueue::~WorkQueue(local_3c);
      }
    }
  }
  ExceptionList = local_10;
  return;
}


/* ==== 00436f00  FUN_00436f00  size=926 ==== */

void FUN_00436f00(int param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int *in_ECX;
  uint uVar5;
  uint uVar6;
  int local_1c;
  int local_10;
  
  in_ECX[0x26c] = in_ECX[0x26c] + param_1;
  if (in_ECX[0x26d] <= in_ECX[0x26c]) {
    in_ECX[0x26c] = 0;
    FUN_0040d5f0();
    game_get_state_ptr_d1520();
    FUN_004d58e0();
    FUN_0042a9e0();
    FUN_0042a9c0();
    while( true ) {
      cVar1 = FUN_0040d2d0();
      if (cVar1 == '\0') break;
      piVar2 = (int *)FUN_0042a580();
      if (*piVar2 != 0) {
        cVar1 = FUN_006352e0();
        if (cVar1 == '\0') {
          cVar1 = (**(code **)(*in_ECX + 0x88))();
          if ((((cVar1 != '\0') &&
               (uVar5 = *(int *)(*piVar2 + 0x224) - in_ECX[0x89], uVar6 = (int)uVar5 >> 0x1f,
               (int)((uVar5 ^ uVar6) - uVar6) < 0xe6)) &&
              (uVar5 = *(int *)(*piVar2 + 0x228) - in_ECX[0x8a], uVar6 = (int)uVar5 >> 0x1f,
              (int)((uVar5 ^ uVar6) - uVar6) < 0x2e)) && (*(int *)(*piVar2 + 0x22c) == 0)) {
            (**(code **)(*(int *)*piVar2 + 0x68))();
            FUN_00409da0();
            FUN_004ddbf0();
          }
        }
      }
      FUN_0042a560();
    }
  }
  if (0 < in_ECX[0x26b]) {
    in_ECX[0x26a] = in_ECX[0x26a] + param_1;
    local_1c = ((in_ECX[0x26b] - in_ECX[0x26a]) * 0xff) / in_ECX[0x26b];
    if (in_ECX[0x26b] <= in_ECX[0x26a]) {
      in_ECX[0x26a] = 0;
      in_ECX[0x26b] = 0;
      local_1c = 0;
    }
    uVar3 = FUN_004274d0(0);
    FUN_00405520(uVar3);
    iVar4 = FUN_00630790();
    *(int *)(iVar4 + 0x30) = local_1c;
    uVar3 = FUN_004274d0(1);
    FUN_00405520(uVar3);
    iVar4 = FUN_00630790();
    *(int *)(iVar4 + 0x30) = local_1c;
  }
  if ((0 < in_ECX[0x269]) &&
     (in_ECX[0x268] = in_ECX[0x268] + param_1, in_ECX[0x269] <= in_ECX[0x268])) {
    in_ECX[0x268] = 0;
    in_ECX[0x269] = 0;
    uVar3 = FUN_004274d0(5);
    FUN_00405520(uVar3);
    (**(code **)(*in_ECX + 0x78))();
    local_10 = game_loop_helper_018d0();
    iVar4 = game_loop_helper_018b0();
    for (; local_10 != iVar4; local_10 = local_10 + 0x60) {
      in_ECX[0x26b] = in_ECX[0x26b] + *(int *)(local_10 + 0x44);
    }
  }
  return;
}


/* ==== 004372a0  FUN_004372a0  size=413 ==== */

undefined4 * FUN_004372a0(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *in_ECX;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  float10 fVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070e9cd;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0042fb60();
  local_8 = 0;
  *in_ECX = CAshenForkSub::vftable;
  *(undefined1 *)(in_ECX + 0x30) = 0;
  *(undefined1 *)((int)in_ECX + 0xc1) = 0;
  *(undefined1 *)(in_ECX + 0x265) = 1;
  uVar1 = FUN_004274d0(0);
  FUN_00405520(uVar1);
  FUN_00630a40();
  uVar1 = FUN_004274d0(1);
  FUN_00405520(uVar1);
  FUN_00630a40();
  iVar2 = FUN_00432b40();
  if (iVar2 != 0) {
    FUN_00432b40();
    iVar2 = FUN_0070b658();
    if (iVar2 != 0) {
      puVar4 = (undefined4 *)(iVar2 + 0x248);
      puVar5 = in_ECX + 0x92;
      for (iVar3 = 0x14c; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      FUN_0047bd30();
      thunk_FUN_006e5750();
      FUN_00631910();
      FUN_0047bd30();
      fVar6 = (float10)FUN_00641370();
      in_ECX[600] = (float)fVar6;
    }
  }
  FUN_004054a0("SAJAHU_SPREAD");
  FUN_004c3570();
  ExceptionList = local_10;
  return in_ECX;
}


/* ==== 00437440  FUN_00437440  size=151 ==== */

undefined4 * FUN_00437440(undefined4 param_1)

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
  uStack_24 = 0x437474;
  FUN_0042fb60();
  local_8 = 0;
  *local_14 = CObjDashAttackMultiHitSub::vftable;
  *(undefined1 *)(local_14 + 0x30) = 0;
  *(undefined1 *)((int)local_14 + 0xc1) = 0;
  *(undefined1 *)(local_14 + 0x265) = 1;
  local_18 = auStack_34;
  FUN_004054a0("THRUST_BEAMS");
  FUN_004c3570();
  ExceptionList = local_10;
  return local_14;
}


/* ==== 004374e0  FUN_004374e0  size=362 ==== */

undefined4 * FUN_004374e0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *in_ECX;
  undefined4 *puVar3;
  undefined4 *puVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070e9fd;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0042fb60();
  local_8 = 0;
  *in_ECX = CObjVaneSlash::vftable;
  *(undefined1 *)(in_ECX + 0x269) = 0;
  *(undefined1 *)(in_ECX + 0x30) = 0;
  *(undefined1 *)((int)in_ECX + 0xc1) = 0;
  in_ECX[99] = *(undefined4 *)(param_1 + 0x68);
  in_ECX[0x268] = 0;
  *(undefined1 *)(in_ECX + 0x265) = 1;
  FUN_0063c390();
  iVar1 = FUN_00432b40();
  if (iVar1 != 0) {
    FUN_00432b40();
    uVar2 = FUN_0070b658();
    in_ECX[0x268] = uVar2;
    if (in_ECX[0x268] != 0) {
      puVar3 = (undefined4 *)(in_ECX[0x268] + 0x248);
      puVar4 = in_ECX + 0x92;
      for (iVar1 = 0x14c; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      FUN_0047bd30();
      thunk_FUN_006e5750();
      FUN_00631910();
    }
  }
  uVar2 = FUN_004274d0(0);
  FUN_00405520(uVar2);
  FUN_00630a40();
  ExceptionList = local_10;
  return in_ECX;
}


/* ==== 00437650  FUN_00437650  size=327 ==== */

void FUN_00437650(void)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070ea2d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar1 = FUN_004274d0(0);
  FUN_00405520(uVar1);
  local_8 = 0;
  game_loop_helper_e9240();
  local_8 = 0xffffffff;
  FUN_005be5d0();
  FUN_00430eb0();
  *(int *)(in_ECX + 0x7dc) = *(int *)(in_ECX + 0x7dc) / 10;
  if (*(int *)(in_ECX + 0x9a0) != 0) {
    FUN_00635750();
    FUN_0047bcc0();
    FUN_0040d490();
  }
  piVar2 = (int *)game_get_flag_object_01a70();
  *(undefined4 *)(*piVar2 + 0x90) = 0xd;
  game_get_flag_object_01a70();
  iVar3 = FUN_0040d680();
  piVar2 = (int *)game_get_flag_object_01a70();
  *(undefined4 *)(*piVar2 + 0x98) = *(undefined4 *)(iVar3 + 0x44);
  ExceptionList = local_10;
  return;
}


/* ==== 004377a0  FUN_004377a0  size=533 ==== */

void FUN_004377a0(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x1bc) == 0) {
    FUN_00437650();
    if (*(int *)(in_ECX + 0x18c) != 0) {
      *(undefined4 *)(*(int *)(in_ECX + 0x18c) + 0x1a4) = 0xffffffff;
      *(undefined4 *)(*(int *)(in_ECX + 0x18c) + 0x19c) = 0;
      FUN_004054a0();
      iVar1 = FUN_006356a0();
      if (iVar1 == 0) {
        iVar1 = FUN_004550d0();
        if (iVar1 != 0) {
          FUN_006313a0();
        }
      }
      else {
        FUN_004054a0(&DAT_007799f0);
        FUN_006356a0();
        puVar2 = (undefined4 *)game_get_flag_object_01a70();
        *(undefined4 *)(*(int *)(in_ECX + 0x18c) + 0x224) = *puVar2;
        FUN_004054a0(&DAT_007799f0);
        FUN_006356a0();
        puVar2 = (undefined4 *)game_get_flag_object_01a70();
        *(undefined4 *)(*(int *)(in_ECX + 0x18c) + 0x228) = *puVar2;
      }
      *(undefined4 *)(in_ECX + 0x18c) = 0;
    }
  }
  FUN_00431fb0();
  FUN_004054a0();
  FUN_004c3500();
  if (*(char *)(in_ECX + 0x9a4) == '\0') {
    *(undefined1 *)(in_ECX + 0x9a4) = 1;
    iVar1 = FUN_00432b40();
    if (iVar1 != 0) {
      FUN_00432b40();
      iVar1 = FUN_0070b658();
      if ((iVar1 != 0) && (*(char *)(iVar1 + 0xa8d) != '\0')) {
        iVar1 = FUN_00465360();
        iVar3 = FUN_0047bcc0();
        if (iVar1 < iVar3) {
          FUN_004653c0();
        }
      }
    }
  }
  return;
}


/* ==== 004379c0  FUN_004379c0  size=394 ==== */

void FUN_004379c0(void)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  
  piVar1 = (int *)game_get_flag_object_01a70();
  if (*(int *)(*piVar1 + 0x90) == 5) {
    iVar2 = FUN_00432b40();
    if ((iVar2 != 0) && (*(int *)(*(int *)(in_ECX + 0x9a0) + 0x1a8) == 1)) {
      *(undefined4 *)(*(int *)(in_ECX + 0x9a0) + 0x1a8) = 3;
    }
  }
  piVar1 = (int *)game_get_flag_object_01a70();
  if (*(int *)(*piVar1 + 0x90) == 0xc) {
    if ((*(int *)(in_ECX + 0x18c) == 0) || (*(int *)(in_ECX + 0x1bc) == 0)) {
      FUN_00437650();
      piVar1 = (int *)game_get_flag_object_01a70();
      *(undefined4 *)(*piVar1 + 0x90) = 0xd;
      game_get_flag_object_01a70();
      iVar2 = FUN_0040d680();
      piVar1 = (int *)game_get_flag_object_01a70();
      *(undefined4 *)(*piVar1 + 0x98) = *(undefined4 *)(iVar2 + 0x44);
    }
    else {
      piVar1 = (int *)game_get_flag_object_01a70();
      *(undefined4 *)(*piVar1 + 0x90) = 9;
      game_get_flag_object_01a70();
      iVar2 = FUN_0040d680();
      piVar1 = (int *)game_get_flag_object_01a70();
      *(undefined4 *)(*piVar1 + 0x98) = *(undefined4 *)(iVar2 + 0x44);
    }
  }
  piVar1 = (int *)game_get_flag_object_01a70();
  if (*(int *)(*piVar1 + 0x90) == 9) {
    FUN_004054a0("YEOLPA_WIND");
    FUN_004c3570();
  }
  FUN_00432b70();
  return;
}


/* ==== 00437be0  FUN_00437be0  size=315 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00437be0(void)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  WorkQueue local_3c [24];
  undefined4 local_24;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070ea5d;
  local_10 = ExceptionList;
  local_14 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_00431fb0();
  piVar3 = (int *)game_get_flag_object_01a70();
  iVar1 = *piVar3;
  cVar2 = FUN_006352e0();
  if (cVar2 == '\0') {
    iVar4 = FUN_00641430();
    if (iVar4 % 100 < iVar1) {
      FUN_004054a0(&DAT_00779a64);
      FUN_00635830();
      FUN_0042df20();
      local_8 = 0;
      FUN_004053a0();
      puVar5 = (undefined4 *)game_get_flag_object_01a70();
      local_24 = *puVar5;
      FUN_0044e460();
      puVar5 = (undefined4 *)game_get_flag_object_01a70();
      puVar6 = (undefined4 *)game_get_flag_object_01a70();
      *puVar6 = *puVar5;
      FUN_0044e230();
      FUN_00635d80();
      local_8 = 0xffffffff;
      Concurrency::details::WorkQueue::~WorkQueue(local_3c);
    }
  }
  ExceptionList = local_10;
  return;
}


/* ==== 00437d20  FUN_00437d20  size=885 ==== */

undefined4 * FUN_00437d20(void)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *in_ECX;
  float10 fVar5;
  int *local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070ea9d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0042fb60();
  local_8 = 0;
  *in_ECX = grandwave::vftable;
  *(undefined1 *)(in_ECX + 0x26c) = 0;
  *(undefined1 *)(in_ECX + 0x30) = 0;
  *(undefined1 *)((int)in_ECX + 0xc1) = 0;
  piVar2 = (int *)game_get_flag_object_01a70();
  *(undefined4 *)(*piVar2 + 0x84) = 1;
  uVar3 = FUN_004274d0(0);
  FUN_00405520(uVar3);
  iVar4 = FUN_00630a40();
  *(undefined4 *)(iVar4 + 0x84) = 1;
  in_ECX[0x26b] = 0;
  in_ECX[0x268] = 0;
  in_ECX[0x269] = 0;
  in_ECX[0x26a] = 0;
  iVar4 = FUN_00432b40();
  if (iVar4 != 0) {
    FUN_00432b40();
    iVar4 = FUN_0070b658();
    if (iVar4 != 0) {
      if (in_ECX[0x79] == 0x4e28) {
        uVar3 = FUN_0047bcc0();
        in_ECX[0x269] = uVar3;
        FUN_0047bd30();
        thunk_FUN_006e5750();
        FUN_0047bf30();
        thunk_FUN_006e5750();
        FUN_00631910();
        fVar5 = (float10)FUN_0047bf30();
        iVar4 = FUN_0047bcc0();
        in_ECX[0x26a] = (int)((float)fVar5 * 10000.0 * (float)iVar4);
        iVar4 = FUN_0047bcc0();
        in_ECX[0x8c] = iVar4 * 2000;
        FUN_0047bcc0();
        fVar5 = (float10)FUN_00641370();
        in_ECX[600] = (float)fVar5;
        local_1c = (int *)game_loop_helper_018d0();
        piVar2 = (int *)game_loop_helper_018b0();
        for (; local_1c != piVar2; local_1c = local_1c + 1) {
          if (*local_1c != 0) {
            FUN_0062fd10();
          }
        }
        FUN_0042a9e0();
        FUN_0042a9c0();
        while (cVar1 = FUN_0040d2d0(), cVar1 != '\0') {
          piVar2 = (int *)FUN_0042a580();
          if (*piVar2 != 0) {
            FUN_0062fd10();
          }
          FUN_0042a560();
        }
      }
      else {
        uVar3 = FUN_0047bcc0();
        in_ECX[0x269] = uVar3;
        FUN_0047bd30();
        thunk_FUN_006e5750();
        FUN_00631910();
        fVar5 = (float10)FUN_0047bf30();
        in_ECX[0x26a] = (int)((float)fVar5 * 1e+06);
        in_ECX[0x8c] = 200000;
      }
    }
  }
  ExceptionList = local_10;
  return in_ECX;
}


/* ==== 004380a0  FUN_004380a0  size=319 ==== */

void FUN_004380a0(int param_1)

{
  int *in_ECX;
  undefined1 auStack_28 [16];
  undefined4 uStack_18;
  int iStack_14;
  undefined1 *local_10;
  int local_c;
  int *local_8;
  
  local_8 = in_ECX;
  if (0 < in_ECX[0x26a]) {
    in_ECX[0x26a] = in_ECX[0x26a] - in_ECX[0x8c] * param_1;
    if (in_ECX[0x26a] < 1) {
      iStack_14 = 0x4380ee;
      FUN_00432d30();
    }
    else if ((0 < in_ECX[0x269]) &&
            (in_ECX[0x268] = in_ECX[0x268] + param_1, in_ECX[0x269] <= in_ECX[0x268])) {
      in_ECX[0x268] = 0;
      iStack_14 = 0x438141;
      FUN_0040d5f0();
    }
  }
  local_8[0x26b] = local_8[0x26b] - param_1;
  if (local_8[0x26b] < 1) {
    local_8[0x26b] = 100;
    local_10 = auStack_28;
    FUN_004054a0("common/commoneffect/particle/dustmove.ptl");
    local_c = FUN_004aa990(0,local_8[0x89],local_8[0x8a],local_8[0x8b]);
    *(undefined1 *)(local_c + 0x35) = 1;
  }
  iStack_14 = param_1;
  uStack_18 = 0x4381c8;
  (**(code **)(*local_8 + 0xec))();
  uStack_18 = 0x4381d8;
  (**(code **)(*local_8 + 0xf0))();
  return;
}


/* ==== 004381e0  FUN_004381e0  size=170 ==== */

void FUN_004381e0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int in_ECX;
  
  FUN_00431fb0(param_1);
  if ((*(int *)(in_ECX + 0x1e4) == 0x4e28) && (*(char *)(in_ECX + 0x9b0) == '\0')) {
    *(undefined1 *)(in_ECX + 0x9b0) = 1;
    iVar1 = FUN_00432b40();
    if (iVar1 != 0) {
      uVar2 = FUN_00432b40(&CObj::RTTI_Type_Descriptor,&CHARACTER::RTTI_Type_Descriptor,0);
      iVar1 = FUN_0070b658(uVar2,0);
      if ((iVar1 != 0) && (*(char *)(iVar1 + 0xa8d) != '\0')) {
        iVar1 = FUN_00465360();
        iVar3 = FUN_0047bcc0(0x2f,2);
        if (iVar1 < iVar3) {
          FUN_004653c0();
        }
      }
    }
  }
  return;
}


/* ==== 00438290  FUN_00438290  size=808 ==== */

undefined4 * FUN_00438290(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *in_ECX;
  float10 fVar5;
  float10 fVar6;
  int *local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070e99d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0042fb60();
  local_8 = 0;
  *in_ECX = reflectguardbead::vftable;
  *(undefined1 *)(in_ECX + 0x30) = 0;
  *(undefined1 *)((int)in_ECX + 0xc1) = 0;
  *(undefined1 *)(in_ECX + 0x265) = 1;
  uVar1 = FUN_004274d0(0);
  FUN_00405520(uVar1);
  FUN_00630a40();
  in_ECX[0x268] = 0;
  in_ECX[0x269] = 0;
  in_ECX[0x26a] = 0;
  in_ECX[0x26b] = 0;
  iVar2 = FUN_00432b40();
  if (iVar2 != 0) {
    FUN_00432b40();
    iVar2 = FUN_0070b658();
    if (iVar2 != 0) {
      uVar1 = FUN_0047bcc0();
      in_ECX[0x269] = uVar1;
      fVar5 = (float10)FUN_0047bd30();
      iVar2 = FUN_00465360();
      fVar6 = (float10)FUN_0047bd30();
      in_ECX[0x26b] = (int)((float)fVar5 * 1000.0 + (float)(iVar2 * 1000) * (float)fVar6);
      FUN_0047bf30();
      FUN_00465360();
      FUN_0047bd30();
      FUN_00631910();
      iVar2 = FUN_0047bcc0();
      iVar3 = FUN_00465360();
      fVar5 = (float10)FUN_0047bd30();
      in_ECX[0x26a] = (int)((float)iVar2 + (float)iVar3 * (float)fVar5);
      FUN_0047bd30();
      FUN_00465360();
      FUN_0047bd30();
      fVar5 = (float10)FUN_00641370();
      in_ECX[600] = (float)fVar5;
      local_1c = (int *)game_loop_helper_018d0();
      piVar4 = (int *)game_loop_helper_018b0();
      for (; local_1c != piVar4; local_1c = local_1c + 1) {
        if (*local_1c != 0) {
          FUN_0062fd10();
        }
      }
    }
  }
  in_ECX[0x8c] = 100000;
  ExceptionList = local_10;
  return in_ECX;
}


/* ==== 004385c0  FUN_004385c0  size=248 ==== */

void FUN_004385c0(int param_1)

{
  int *in_ECX;
  
  if (in_ECX[0x26a] < 1) {
    (**(code **)(*in_ECX + 0xb0))();
  }
  else {
    if (0 < in_ECX[0x26b]) {
      in_ECX[0x26b] = in_ECX[0x26b] - param_1;
      if (in_ECX[0x26b] < 1) {
        (**(code **)(*in_ECX + 0xb0))();
        return;
      }
      if (((0 < in_ECX[0x26a]) && (0 < in_ECX[0x269])) &&
         (in_ECX[0x268] = in_ECX[0x268] + param_1, in_ECX[0x269] <= in_ECX[0x268])) {
        in_ECX[0x268] = 0;
        FUN_0040d5f0();
      }
    }
    (**(code **)(*in_ECX + 0xec))(param_1);
    (**(code **)(*in_ECX + 0xf0))();
  }
  return;
}


/* ==== 004386c0  FUN_004386c0  size=224 ==== */

void FUN_004386c0(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  float10 fVar3;
  float fVar4;
  
  iVar1 = FUN_00432b40();
  if (iVar1 != 0) {
    uVar2 = FUN_00432b40(&CObj::RTTI_Type_Descriptor,&CHARACTER::RTTI_Type_Descriptor,0);
    iVar1 = FUN_0070b658(uVar2,0);
    if (iVar1 != 0) {
      uVar2 = 0;
      fVar3 = (float10)FUN_0047bd30(2,7);
      fVar4 = (float)fVar3;
      iVar1 = FUN_00465360(uVar2,fVar4);
      fVar3 = (float10)FUN_0047bd30(2,8);
      FUN_00631910((int)(fVar4 + (float)iVar1 * (float)fVar3),uVar2);
    }
  }
  FUN_0042f340(in_ECX,0,0,0,0x4e50,*(undefined4 *)(in_ECX + 500));
  FUN_00432d30();
  return;
}


/* ==== 004387a0  FUN_004387a0  size=46 ==== */

void FUN_004387a0(undefined4 param_1)

{
  int in_ECX;
  
  FUN_00431fb0(param_1);
  *(int *)(in_ECX + 0x9a8) = *(int *)(in_ECX + 0x9a8) + -1;
  return;
}


/* ==== 004387d0  FUN_004387d0  size=235 ==== */

undefined4 * FUN_004387d0(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070e9fd;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0042fb60();
  local_8 = 0;
  *in_ECX = firewavebig::vftable;
  *(undefined1 *)(in_ECX + 0x265) = 1;
  uVar1 = FUN_004274d0(0);
  FUN_00405520(uVar1);
  FUN_00630a40();
  iVar2 = FUN_00432b40();
  if (iVar2 != 0) {
    FUN_00432b40();
    iVar2 = FUN_0070b658();
    if (iVar2 != 0) {
      FUN_0047bd30();
      thunk_FUN_006e5750();
      FUN_00631910();
    }
  }
  ExceptionList = local_10;
  return in_ECX;
}


/* ==== 004388c0  FUN_004388c0  size=161 ==== */

void FUN_004388c0(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  
  iVar1 = FUN_00432b40();
  if (iVar1 != 0) {
    uVar2 = FUN_00432b40(&CObj::RTTI_Type_Descriptor,&CHARACTER::RTTI_Type_Descriptor,0);
    iVar1 = FUN_0070b658(uVar2,0);
    if (iVar1 != 0) {
      FUN_0047bd30(0x16,1);
      uVar2 = thunk_FUN_006e5750();
      FUN_00631910(0,uVar2);
      FUN_0042f340(in_ECX,0x43c80000,0,0,0x4e39,*(undefined4 *)(in_ECX + 500));
    }
  }
  FUN_00432d30();
  return;
}


/* ==== 00438970  FUN_00438970  size=37 ==== */

undefined4 * FUN_00438970(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  FUN_0042fb60(param_1);
  *in_ECX = CObjIllusionSlashMelee::vftable;
  return in_ECX;
}


/* ==== 00438d10  FUN_00438d10  size=341 ==== */

undefined4 * FUN_00438d10(void)

{
  undefined4 uVar1;
  int iVar2;
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
  *in_ECX = COutrageFloor::vftable;
  *(undefined1 *)(in_ECX + 0x30) = 0;
  *(undefined1 *)((int)in_ECX + 0xc1) = 0;
  FUN_004054a0();
  FUN_004c3500();
  *(undefined1 *)(in_ECX + 0x265) = 1;
  game_loop_helper_e9240();
  FUN_005e53f0();
  uVar1 = FUN_004274d0(0);
  FUN_00405520(uVar1);
  FUN_00630a40();
  uVar1 = FUN_004274d0(1);
  FUN_00405520(uVar1);
  FUN_00630a40();
  iVar2 = FUN_00432b40();
  if (iVar2 != 0) {
    FUN_00432b40();
    iVar2 = FUN_0070b658();
    if (iVar2 != 0) {
      FUN_0047bd30();
      thunk_FUN_006e5750();
      FUN_00631910();
    }
  }
  ExceptionList = local_10;
  return in_ECX;
}


/* ==== 00439570  FUN_00439570  size=672 ==== */

undefined4 * FUN_00439570(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070eb6d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0042fb60();
  local_8 = 0;
  *in_ECX = CBlastBloodMain::vftable;
  *(undefined1 *)(in_ECX + 0x30) = 0;
  *(undefined1 *)((int)in_ECX + 0xc1) = 0;
  *(undefined1 *)(in_ECX + 0x265) = 1;
  iVar1 = FUN_00432b40();
  if (iVar1 != 0) {
    FUN_00432b40();
    iVar1 = FUN_0070b658();
    if (iVar1 != 0) {
      if (*(char *)(iVar1 + 0xa8c) == '\0') {
        FUN_0047bd30();
        thunk_FUN_006e5750();
        FUN_00631910();
      }
      else {
        FUN_0047bd30();
        FUN_0047bd30();
        FUN_00631910();
      }
      FUN_0042e130();
      FUN_0047bcc0();
      FUN_0063c390();
      uVar2 = FUN_0047bcc0();
      in_ECX[0x1f8] = uVar2;
    }
  }
  uVar2 = FUN_004274d0(0);
  FUN_00405520(uVar2);
  FUN_00630a40();
  uVar2 = FUN_004274d0(1);
  FUN_00405520(uVar2);
  FUN_00630a40();
  uVar2 = FUN_004274d0(2);
  FUN_00405520(uVar2);
  iVar1 = FUN_00630a40();
  *(undefined4 *)(iVar1 + 0x110) = 5;
  uVar2 = FUN_004274d0(3);
  FUN_00405520(uVar2);
  iVar1 = FUN_00630a40();
  *(undefined4 *)(iVar1 + 0x110) = 5;
  uVar2 = FUN_004274d0(4);
  FUN_00405520(uVar2);
  iVar1 = FUN_00630a40();
  *(undefined4 *)(iVar1 + 0x110) = 5;
  ExceptionList = local_10;
  return in_ECX;
}


/* ==== 00439810  FUN_00439810  size=364 ==== */

undefined4 * FUN_00439810(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *in_ECX;
  float10 fVar4;
  float10 fVar5;
  undefined4 uVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070e70d;
  local_10 = ExceptionList;
  uVar1 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_0042fb60(param_1);
  local_8 = 0;
  *in_ECX = CBlastBloodSub::vftable;
  *(undefined1 *)(in_ECX + 0x30) = 0;
  *(undefined1 *)((int)in_ECX + 0xc1) = 0;
  *(undefined1 *)(in_ECX + 0x265) = 1;
  iVar2 = FUN_00432b40(uVar1);
  if (iVar2 != 0) {
    uVar3 = FUN_00432b40(&CObj::RTTI_Type_Descriptor,&CHARACTER::RTTI_Type_Descriptor,0);
    iVar2 = FUN_0070b658(uVar3,0);
    if (iVar2 != 0) {
      if (*(char *)(iVar2 + 0xa8c) == '\0') {
        FUN_0047bd30(0x18,0);
        uVar3 = thunk_FUN_006e5750();
        FUN_00631910(0,uVar3);
      }
      else {
        fVar4 = (float10)FUN_0047bd30(0x18,0);
        fVar5 = (float10)FUN_0047bd30(0x4c,0xb);
        FUN_00631910(0,(int)((float)fVar4 * ((float)fVar5 / 100.0 + 1.0)));
      }
      uVar6 = 1;
      uVar3 = 0x3c;
      iVar2 = FUN_0047bcc0(0x18,0);
      FUN_0063c390(iVar2 << 1,uVar3,uVar6);
      uVar3 = FUN_0047bcc0(0x18,1);
      in_ECX[0x1f8] = uVar3;
    }
  }
  ExceptionList = local_10;
  return in_ECX;
}


/* ==== 00439980  FUN_00439980  size=376 ==== */

undefined4 * FUN_00439980(void)

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
  *in_ECX = CBlastBloodMainFront::vftable;
  *(undefined1 *)(in_ECX + 0x30) = 0;
  *(undefined1 *)((int)in_ECX + 0xc1) = 0;
  *(undefined1 *)(in_ECX + 0x265) = 1;
  iVar1 = FUN_00432b40();
  if (iVar1 != 0) {
    FUN_00432b40();
    iVar1 = FUN_0070b658();
    if (iVar1 != 0) {
      if (*(char *)(iVar1 + 0xa8c) == '\0') {
        FUN_0047bd30();
        thunk_FUN_006e5750();
        FUN_00631910();
      }
      else {
        FUN_0047bd30();
        FUN_0047bd30();
        FUN_00631910();
      }
      FUN_0042e130();
    }
  }
  uVar2 = FUN_004274d0(0);
  FUN_00405520(uVar2);
  FUN_00630a40();
  ExceptionList = local_10;
  return in_ECX;
}


/* ==== 00439b00  FUN_00439b00  size=278 ==== */

undefined4 * FUN_00439b00(int param_1)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070e70d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0042fb60();
  local_8 = 0;
  *in_ECX = CGrabBlastBloodSmall::vftable;
  in_ECX[99] = *(undefined4 *)(param_1 + 0x68);
  game_get_state_ptr_d1520();
  FUN_004edfb0();
  *(undefined1 *)(in_ECX + 0x30) = 0;
  *(undefined1 *)((int)in_ECX + 0xc1) = 0;
  *(undefined1 *)(in_ECX + 0x265) = 1;
  in_ECX[0x1f7] = (int)in_ECX[0x1f7] / 2;
  game_loop_helper_e9240();
  FUN_005e53f0();
  for (local_18 = 0; local_18 < 3; local_18 = local_18 + 1) {
    uVar1 = FUN_004274d0(local_18);
    FUN_00405520(uVar1);
    FUN_00630a40();
  }
  ExceptionList = local_10;
  return in_ECX;
}


/* ==== 00439c20  FUN_00439c20  size=376 ==== */

void FUN_00439c20(undefined4 *param_1)

{
  int in_ECX;
  undefined *puStack_48;
  undefined1 auStack_44 [12];
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 *puStack_30;
  undefined1 *local_2c;
  undefined1 *local_28;
  undefined1 *local_24;
  undefined4 *local_20;
  undefined4 local_1c;
  undefined4 *local_18;
  undefined4 local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if ((*(int *)(in_ECX + 0x18c) != 0) && (param_1[1] == *(int *)(in_ECX + 0x18c))) {
    *(undefined4 *)(*(int *)(in_ECX + 0x18c) + 0x1a4) = 0xffffffff;
    *(undefined4 *)(*(int *)(in_ECX + 0x18c) + 0x19c) = 0;
    local_24 = auStack_44;
    puStack_48 = &DAT_007799f0;
    local_8 = in_ECX;
    FUN_004054a0();
    puStack_48 = (undefined *)0x439ca1;
    local_10 = FUN_006356a0();
    if (local_10 == 0) {
      puStack_30 = (undefined4 *)*param_1;
      uStack_34 = 0x439d49;
      local_c = FUN_004550d0();
      if (local_c != 0) {
        puStack_30 = *(undefined4 **)(local_c + 0x228);
        uStack_34 = *(undefined4 *)(local_c + 0x224);
        uStack_38 = 0x439d77;
        FUN_006313a0();
      }
    }
    else {
      puStack_30 = (undefined4 *)0x0;
      local_28 = (undefined1 *)&puStack_48;
      FUN_004054a0(&DAT_007799f0);
      local_14 = FUN_006356a0();
      uStack_34 = 0x439cde;
      local_18 = (undefined4 *)game_get_flag_object_01a70();
      *(undefined4 *)(*(int *)(local_8 + 0x18c) + 0x224) = *local_18;
      puStack_30 = (undefined4 *)0x1;
      local_2c = (undefined1 *)&puStack_48;
      FUN_004054a0(&DAT_007799f0);
      local_1c = FUN_006356a0();
      uStack_34 = 0x439d25;
      local_20 = (undefined4 *)game_get_flag_object_01a70();
      *(undefined4 *)(*(int *)(local_8 + 0x18c) + 0x228) = *local_20;
    }
    *(undefined4 *)(local_8 + 0x18c) = 0;
  }
  puStack_30 = param_1;
  uStack_34 = 0x439d91;
  FUN_00431fb0();
  return;
}


/* ==== 00439da0  FUN_00439da0  size=278 ==== */

undefined4 * FUN_00439da0(int param_1)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070e70d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0042fb60();
  local_8 = 0;
  *in_ECX = CGrabBlastBloodBig::vftable;
  in_ECX[99] = *(undefined4 *)(param_1 + 0x68);
  game_get_state_ptr_d1520();
  FUN_004edfb0();
  *(undefined1 *)(in_ECX + 0x30) = 0;
  *(undefined1 *)((int)in_ECX + 0xc1) = 0;
  *(undefined1 *)(in_ECX + 0x265) = 1;
  in_ECX[0x1f7] = (int)in_ECX[0x1f7] / 2;
  game_loop_helper_e9240();
  FUN_005e53f0();
  for (local_18 = 0; local_18 < 5; local_18 = local_18 + 1) {
    uVar1 = FUN_004274d0(local_18);
    FUN_00405520(uVar1);
    FUN_00630a40();
  }
  ExceptionList = local_10;
  return in_ECX;
}


/* ==== 00439ec0  FUN_00439ec0  size=438 ==== */

undefined4 * FUN_00439ec0(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *in_ECX;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070ebab;
  local_10 = ExceptionList;
  uVar1 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_0042fb60(param_1);
  local_8 = 0;
  *in_ECX = CBloodyRave::vftable;
  FUN_0040d650(uVar1);
  local_8 = CONCAT31(local_8._1_3_,1);
  *(undefined1 *)(in_ECX + 0x30) = 0;
  *(undefined1 *)((int)in_ECX + 0xc1) = 0;
  FUN_00427560(param_1 + 0x6c);
  *(undefined1 *)(in_ECX + 0x265) = 1;
  uVar2 = in_ECX[599];
  game_get_state_ptr_d1520(uVar2);
  FUN_004d58e0();
  uVar2 = FUN_0042e150(uVar2);
  in_ECX[0x268] = uVar2;
  puVar4 = (undefined4 *)(in_ECX[0x268] + 0x248);
  puVar5 = in_ECX + 0x92;
  for (iVar3 = 0x14c; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  if ((int)in_ECX[0x47] < 1) {
    in_ECX[0x47] = 1;
  }
  if (8 < (int)in_ECX[0x47]) {
    in_ECX[0x47] = 8;
  }
  uVar2 = 0;
  fVar6 = (float10)FUN_0047bd30(0x4f,0);
  iVar3 = in_ECX[0x47];
  fVar7 = (float10)FUN_0047bd30(0x4f,1);
  fVar8 = (float10)FUN_0047bd30(0x4f,0);
  FUN_00631910((int)((float)fVar6 + ((float)iVar3 * ((float)fVar7 - (float)fVar8)) / 8.0),uVar2);
  ExceptionList = local_10;
  return in_ECX;
}


/* ==== 0043a080  FUN_0043a080  size=47 ==== */

void FUN_0043a080(int param_1)

{
  FUN_00431fb0(param_1);
  FUN_0040d490(param_1 + 4);
  return;
}


/* ==== 0043a0b0  FUN_0043a0b0  size=20 ==== */

void FUN_0043a0b0(void)

{
  return;
}


/* ==== 0043a200  FUN_0043a200  size=362 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 * FUN_0043a200(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *in_ECX;
  undefined1 auStack_74 [16];
  undefined4 uStack_64;
  undefined4 uStack_60;
  char *pcStack_5c;
  uint uStack_58;
  function<void___cdecl(void)> local_2c [24];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070ebe5;
  local_10 = ExceptionList;
  uStack_58 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  pcStack_5c = (char *)param_1;
  uStack_60 = 0x43a238;
  local_14 = uStack_58;
  FUN_0042fb60();
  local_8 = 0;
  *in_ECX = CCryPlant::vftable;
  pcStack_5c = "G_TRAP_GRASS_UP";
  uStack_60 = 0x43a25b;
  FUN_004053a0();
  pcStack_5c = "TRAP_GRASS_DIE";
  uStack_60 = 0x43a26e;
  FUN_004053a0();
  pcStack_5c = (char *)in_ECX[0x79];
  uStack_60 = 0x43a27d;
  game_loop_helper_e9240();
  uStack_60 = 0x43a284;
  uVar1 = FUN_005e53f0();
  uVar2 = FUN_004274d0(2);
  FUN_00405520(uVar2);
  FUN_004c7590(auStack_74);
  local_8._0_1_ = 1;
  FUN_00405520(uVar1);
  local_8 = (uint)local_8._1_3_ << 8;
  uStack_60 = FUN_004c7af0(local_2c);
  uStack_64 = 0x43a2fe;
  FUN_004053e0();
  uStack_60 = 0x43a306;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_2c);
  in_ECX[0x268] = 0;
  *(undefined1 *)((int)in_ECX + 0x8f2) = 1;
  *(undefined1 *)(in_ECX + 0x238) = 1;
  uStack_60 = 0;
  uStack_64 = 0x43a338;
  piVar3 = (int *)game_get_flag_object_01a70();
  *(undefined4 *)(*piVar3 + 0x84) = 1;
  ExceptionList = local_10;
  return in_ECX;
}


/* ==== 0043a370  FUN_0043a370  size=44 ==== */

void FUN_0043a370(void)

{
  int *in_ECX;
  
  if (in_ECX[0x256] == -1) {
    (**(code **)(*in_ECX + 0x108))(0);
  }
  return;
}


/* ==== 0043a3a0  FUN_0043a3a0  size=326 ==== */

undefined4 FUN_0043a3a0(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int *in_ECX;
  
  uVar2 = img_path_loader_12(param_1);
  if (0 < in_ECX[0x1ba]) {
    if (*(int *)(*param_1 + 0x204) == 200) {
      iVar3 = FUN_00432b40();
      if (iVar3 != 0) {
        if (in_ECX[0x89] < *(int *)(iVar3 + 0x224)) {
          (**(code **)(*in_ECX + 0x108))(1);
        }
        else if (*(int *)(iVar3 + 0x224) < in_ECX[0x89]) {
          (**(code **)(*in_ECX + 0x108))(2);
        }
        else {
          cVar1 = FUN_006412c0();
          if (cVar1 == '\0') {
            (**(code **)(*in_ECX + 0x108))(2);
          }
          else {
            (**(code **)(*in_ECX + 0x108))(1);
          }
        }
      }
    }
    in_ECX[0x268] = in_ECX[0x268] + 1;
    if (3 < in_ECX[0x268]) {
      (**(code **)(*in_ECX + 0xb0))();
    }
    cVar1 = FUN_00427c60(*param_1 + 0x848,"[cut]");
    if (cVar1 != '\0') {
      (**(code **)(*in_ECX + 0xb0))();
    }
  }
  return uVar2;
}


/* ==== 0043a4f0  FUN_0043a4f0  size=28 ==== */

void FUN_0043a4f0(void)

{
  int *in_ECX;
  
  (**(code **)(*in_ECX + 0x104))();
  return;
}


/* ==== 0043a510  FUN_0043a510  size=411 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 * FUN_0043a510(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *in_ECX;
  undefined1 auStack_74 [16];
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  uint uStack_58;
  function<void___cdecl(void)> local_2c [24];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070ebe5;
  local_10 = ExceptionList;
  uStack_58 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uStack_5c = param_1;
  uStack_60 = 0x43a548;
  local_14 = uStack_58;
  FUN_0042fb60();
  local_8 = 0;
  *in_ECX = CRollingStone::vftable;
  in_ECX[0x268] = 0;
  uStack_5c = in_ECX[0x79];
  uStack_60 = 0x43a574;
  game_loop_helper_e9240();
  uStack_60 = 0x43a57b;
  uVar1 = FUN_005e53f0();
  uVar2 = FUN_004274d0(0);
  FUN_00405520(uVar2);
  FUN_004c7590(auStack_74);
  local_8._0_1_ = 1;
  FUN_00405520(uVar1);
  local_8 = (uint)local_8._1_3_ << 8;
  uStack_60 = FUN_004c7af0(local_2c);
  uStack_64 = 0x43a5f5;
  FUN_004053e0();
  uStack_60 = 0x43a5fd;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_2c);
  uStack_60 = 1;
  uStack_64 = 0x43a60b;
  uStack_60 = FUN_004274d0();
  uStack_64 = 0x43a61a;
  FUN_0040d840();
  uStack_60 = 2;
  uStack_64 = 0x43a627;
  uStack_60 = FUN_004274d0();
  uStack_64 = 0x43a636;
  FUN_0040d840();
  in_ECX[0x1ba] = 100;
  if (in_ECX[0x79] == 0x106) {
    uStack_60 = 2;
    uStack_64 = 0x43a65c;
    FUN_0043a6b0();
  }
  *(undefined1 *)((int)in_ECX + 0x8f1) = 1;
  *(undefined1 *)((int)in_ECX + 0x8f2) = 1;
  *(undefined1 *)((int)in_ECX + 0x8f3) = 1;
  *(undefined1 *)(in_ECX + 0x238) = 1;
  ExceptionList = local_10;
  return in_ECX;
}


/* ==== 0043a6b0  FUN_0043a6b0  size=99 ==== */

void FUN_0043a6b0(int param_1)

{
  int *in_ECX;
  
  in_ECX[0x268] = param_1;
  if (param_1 == 1) {
    (**(code **)(*in_ECX + 0x104))();
    FUN_00631910(100,100);
  }
  else if (param_1 == 2) {
    (**(code **)(*in_ECX + 0x108))(0);
    FUN_00631910(100,100);
  }
  return;
}


/* ==== 0043a720  FUN_0043a720  size=41 ==== */

void FUN_0043a720(void)

{
  int *piVar1;
  
  piVar1 = (int *)game_get_flag_object_01a70(0);
  *(undefined4 *)(*piVar1 + 0x90) = 0;
  return;
}


/* ==== 0043a750  FUN_0043a750  size=68 ==== */

void FUN_0043a750(undefined4 param_1)

{
  int *piVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x9a0) == 0) {
    piVar1 = (int *)game_get_flag_object_01a70(0);
    *(undefined4 *)(*piVar1 + 0x90) = 0;
  }
  else {
    FUN_00431fb0(param_1);
  }
  return;
}


/* ==== 0043a7a0  FUN_0043a7a0  size=40 ==== */

void FUN_0043a7a0(int param_1)

{
  if (param_1 != 0) {
    FUN_0044de80(&param_1);
  }
  return;
}


/* ==== 0043a7d0  FUN_0043a7d0  size=628 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 * FUN_0043a7d0(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined1 auStack_ac [16];
  undefined4 uStack_9c;
  undefined4 uStack_98;
  function<void___cdecl(void)> *pfStack_94;
  uint uStack_90;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 *local_60;
  function<void___cdecl(void)> local_5c [24];
  function<void___cdecl(void)> local_44 [24];
  function<void___cdecl(void)> local_2c [24];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070ec43;
  local_10 = ExceptionList;
  uStack_90 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  pfStack_94 = (function<void___cdecl(void)> *)param_1;
  uStack_98 = 0x43a808;
  local_14 = uStack_90;
  FUN_0042fb60();
  local_8 = 0;
  *local_60 = CEpicQuestRescueSeriaQuestCage::vftable;
  pfStack_94 = (function<void___cdecl(void)> *)0x43a826;
  FUN_0040d8b0();
  local_8._0_1_ = 1;
  *(undefined1 *)(local_60 + 0x26e) = 0;
  pfStack_94 = (function<void___cdecl(void)> *)0x0;
  uStack_98 = 0x43a844;
  pfStack_94 = (function<void___cdecl(void)> *)game_get_flag_object_01a70();
  uStack_98 = 0x43a84a;
  FUN_004d1b30();
  uStack_98 = 0x43a851;
  FUN_00517ee0();
  pfStack_94 = (function<void___cdecl(void)> *)0x43a85f;
  FUN_0040d5f0();
  pfStack_94 = (function<void___cdecl(void)> *)0x779de0;
  uStack_98 = 0x43a86d;
  FUN_004054a0();
  local_8._0_1_ = 2;
  pfStack_94 = local_2c;
  uStack_98 = 0x43a87a;
  local_68 = FUN_005e9250();
  pfStack_94 = (function<void___cdecl(void)> *)&local_68;
  uStack_98 = 0x43a892;
  FUN_0040d490();
  local_8._0_1_ = 1;
  pfStack_94 = (function<void___cdecl(void)> *)0x43a89e;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_2c);
  pfStack_94 = (function<void___cdecl(void)> *)0x779e28;
  uStack_98 = 0x43a8ac;
  FUN_004054a0();
  local_8._0_1_ = 3;
  pfStack_94 = local_44;
  uStack_98 = 0x43a8b9;
  local_6c = FUN_005e9250();
  pfStack_94 = (function<void___cdecl(void)> *)&local_6c;
  uStack_98 = 0x43a8d1;
  FUN_0040d490();
  local_8._0_1_ = 1;
  pfStack_94 = (function<void___cdecl(void)> *)0x43a8dd;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_44);
  pfStack_94 = (function<void___cdecl(void)> *)local_60[0x79];
  uStack_98 = 0x43a8ed;
  game_loop_helper_e9240();
  uStack_98 = 0x43a8f4;
  local_64 = FUN_005e53f0();
  uStack_98 = 3;
  uStack_9c = 0x43a904;
  puVar1 = (undefined4 *)game_get_flag_object_01a70();
  local_60[0x253] = *puVar1;
  uStack_98 = 4;
  uStack_9c = 0x43a91c;
  puVar1 = (undefined4 *)game_get_flag_object_01a70();
  local_60[0x254] = *puVar1;
  uStack_98 = 5;
  uStack_9c = 0x43a934;
  puVar1 = (undefined4 *)game_get_flag_object_01a70();
  local_60[0x255] = *puVar1;
  uStack_98 = 6;
  uStack_9c = 0x43a94c;
  puVar1 = (undefined4 *)game_get_flag_object_01a70();
  local_60[0x1ba] = *puVar1;
  uVar2 = FUN_004274d0(2);
  FUN_00405520(uVar2);
  FUN_004c7590(auStack_ac);
  local_8._0_1_ = 4;
  FUN_00405520(local_64);
  local_8 = CONCAT31(local_8._1_3_,1);
  uStack_98 = FUN_004c7af0(local_5c);
  uStack_9c = 0x43a9d1;
  FUN_004053e0();
  uStack_98 = 0x43a9d9;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_5c);
  uStack_98 = 6;
  uStack_9c = 0x43a9e7;
  uStack_98 = FUN_004274d0();
  uStack_9c = 0x43a9f6;
  FUN_0040d840();
  *(undefined1 *)((int)local_60 + 0x8f1) = 1;
  *(undefined1 *)((int)local_60 + 0x8f2) = 1;
  *(undefined1 *)((int)local_60 + 0x8f3) = 1;
  *(undefined1 *)(local_60 + 0x238) = 1;
  ExceptionList = local_10;
  return local_60;
}


/* ==== 0043aa50  FUN_0043aa50  size=208 ==== */

undefined4 FUN_0043aa50(undefined4 param_1)

{
  int *piVar1;
  int in_ECX;
  undefined1 auStack_3c [4];
  undefined4 uStack_38;
  int iStack_34;
  uint uStack_30;
  undefined1 local_2c [12];
  undefined1 *local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070ec7d;
  local_10 = ExceptionList;
  uStack_30 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*(char *)(in_ECX + 0x9b8) == '\0') {
    local_1c = 0;
  }
  else {
    iStack_34 = param_1;
    uStack_38 = 0x43aa99;
    local_14 = in_ECX;
    local_1c = img_path_loader_12();
    if (*(int *)(local_14 + 0x6e8) < 1) {
      iStack_34 = 0x43aaad;
      game_get_state_ptr_d1520();
      iStack_34 = 0x43aab4;
      piVar1 = (int *)FUN_004d58e0();
      local_18 = *piVar1;
      if (local_18 != 0) {
        iStack_34 = 0x43aac7;
        FUN_0040d650();
        local_8 = 0;
        iStack_34 = local_14 + 0x9a0;
        uStack_38 = 0x43aae0;
        FUN_0044e420();
        local_20 = auStack_3c;
        FUN_00411bf0(local_2c);
        FUN_00666390(2);
        local_8 = 0xffffffff;
        iStack_34 = 0x43ab0b;
        FUN_0040d7d0();
      }
    }
  }
  ExceptionList = local_10;
  return local_1c;
}


/* ==== 0043ab20  FUN_0043ab20  size=227 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_0043ab20(char param_1)

{
  int *piVar1;
  int in_ECX;
  undefined1 auStack_54 [4];
  undefined4 uStack_50;
  function<void___cdecl(void)> *pfStack_4c;
  uint uStack_48;
  undefined1 *local_44;
  undefined1 local_40 [12];
  int local_34;
  int local_30;
  function<void___cdecl(void)> local_2c [24];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070ecb5;
  local_10 = ExceptionList;
  uStack_48 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (param_1 == '\0') {
    *(undefined1 *)(in_ECX + 0x9b8) = 0;
  }
  else {
    pfStack_4c = (function<void___cdecl(void)> *)0x43ab5c;
    local_30 = in_ECX;
    local_14 = uStack_48;
    game_get_state_ptr_d1520();
    pfStack_4c = (function<void___cdecl(void)> *)0x43ab63;
    piVar1 = (int *)FUN_004d58e0();
    local_34 = *piVar1;
    if (local_34 != 0) {
      pfStack_4c = (function<void___cdecl(void)> *)0x43ab76;
      FUN_0040d650();
      local_8 = 0;
      pfStack_4c = (function<void___cdecl(void)> *)&DAT_00779e6c;
      uStack_50 = 0x43ab8a;
      FUN_004054a0();
      local_8._0_1_ = 1;
      pfStack_4c = local_2c;
      uStack_50 = 0x43ab9a;
      FUN_0044e400();
      local_8 = (uint)local_8._1_3_ << 8;
      pfStack_4c = (function<void___cdecl(void)> *)0x43aba6;
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_2c);
      local_44 = auStack_54;
      FUN_00411bf0(local_40);
      FUN_00666390(2);
      local_8 = 0xffffffff;
      pfStack_4c = (function<void___cdecl(void)> *)0x43abd1;
      FUN_0040d7d0();
    }
    *(undefined1 *)(local_30 + 0x9b8) = 1;
  }
  ExceptionList = local_10;
  return;
}


/* ==== 0043ac10  FUN_0043ac10  size=489 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 * FUN_0043ac10(undefined4 param_1)

{
  int iVar1;
  undefined1 auStack_78 [12];
  undefined4 uStack_6c;
  undefined4 uStack_68;
  function<void___cdecl(void)> *pfStack_64;
  uint uStack_60;
  undefined4 local_5c;
  undefined1 *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 *local_48;
  function<void___cdecl(void)> local_44 [24];
  function<void___cdecl(void)> local_2c [24];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070ecfd;
  local_10 = ExceptionList;
  uStack_60 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  pfStack_64 = (function<void___cdecl(void)> *)param_1;
  uStack_68 = 0x43ac47;
  local_14 = uStack_60;
  FUN_0042fb60();
  local_8 = 0;
  *local_48 = CCage::vftable;
  local_48[0x8b] = local_48[0x8a];
  local_58 = auStack_78;
  FUN_004054a0("monster/common/particle/monsterdiepiece.ptl");
  FUN_00433290();
  *(undefined4 *)local_48[0x267] = 0;
  *(undefined4 *)(local_48[0x267] + 4) = 0;
  *(undefined4 *)(local_48[0x267] + 8) = 0;
  pfStack_64 = (function<void___cdecl(void)> *)0x0;
  uStack_68 = 0x43acc3;
  pfStack_64 = (function<void___cdecl(void)> *)game_get_flag_object_01a70();
  uStack_68 = 0x43acc9;
  FUN_004d1b30();
  uStack_68 = 0x43acd0;
  FUN_00517ee0();
  pfStack_64 = (function<void___cdecl(void)> *)0x43acde;
  FUN_0040d5f0();
  pfStack_64 = (function<void___cdecl(void)> *)0x779de0;
  uStack_68 = 0x43acec;
  FUN_004054a0();
  local_8._0_1_ = 1;
  pfStack_64 = local_2c;
  uStack_68 = 0x43acf9;
  local_4c = FUN_005e9250();
  pfStack_64 = (function<void___cdecl(void)> *)&local_4c;
  uStack_68 = 0x43ad11;
  FUN_0040d490();
  local_8._0_1_ = 0;
  pfStack_64 = (function<void___cdecl(void)> *)0x43ad1d;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_2c);
  pfStack_64 = (function<void___cdecl(void)> *)0x779e28;
  uStack_68 = 0x43ad2b;
  FUN_004054a0();
  local_8._0_1_ = 2;
  pfStack_64 = local_44;
  uStack_68 = 0x43ad38;
  local_50 = FUN_005e9250();
  pfStack_64 = (function<void___cdecl(void)> *)&local_50;
  uStack_68 = 0x43ad50;
  FUN_0040d490();
  local_8 = (uint)local_8._1_3_ << 8;
  pfStack_64 = (function<void___cdecl(void)> *)0x43ad5c;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_44);
  pfStack_64 = (function<void___cdecl(void)> *)local_48[0x79];
  uStack_68 = 0x43ad6c;
  game_loop_helper_e9240();
  uStack_68 = 0x43ad73;
  local_5c = FUN_005e53f0();
  uStack_68 = local_48[599];
  uStack_6c = 0x43ad85;
  game_get_state_ptr_d1520();
  uStack_6c = 0x43ad8c;
  FUN_004d58e0();
  uStack_6c = 0x43ad93;
  iVar1 = FUN_0042e150();
  local_48[0x1ba] = *(int *)(iVar1 + 0x1fc) * 0xfa;
  *(undefined1 *)((int)local_48 + 0x8f1) = 1;
  *(undefined1 *)((int)local_48 + 0x8f2) = 1;
  *(undefined1 *)((int)local_48 + 0x8f3) = 1;
  *(undefined1 *)(local_48 + 0x238) = 1;
  ExceptionList = local_10;
  return local_48;
}


/* ==== 0043ae00  FUN_0043ae00  size=165 ==== */

void FUN_0043ae00(undefined4 param_1)

{
  int *piVar1;
  int in_ECX;
  int *local_c;
  
  FUN_00431fb0(param_1);
  FUN_00427560(in_ECX + 0x1d8);
  local_c = (int *)game_loop_helper_018d0();
  piVar1 = (int *)game_loop_helper_018b0();
  for (; local_c != piVar1; local_c = local_c + 1) {
    *(undefined4 *)(*local_c + 0x224) = *(undefined4 *)(in_ECX + 0x224);
    *(undefined4 *)(*local_c + 0x228) = *(undefined4 *)(in_ECX + 0x228);
    *(undefined1 *)(*local_c + 0x170) = 0;
  }
  return;
}


/* ==== 0043aeb0  FUN_0043aeb0  size=375 ==== */

/* WARNING: Removing unreachable block (ram,0x0043aed1) */
/* WARNING: Removing unreachable block (ram,0x0043af3d) */
/* WARNING: Removing unreachable block (ram,0x0043af34) */

void FUN_0043aeb0(undefined4 param_1)

{
  char cVar1;
  int *in_ECX;
  int *piVar2;
  
  if (in_ECX[0x267] != 0) {
    FUN_004a78e0(param_1);
    in_ECX[0x89] = *(int *)(in_ECX[0x267] + 0x40);
    in_ECX[0x8a] = *(int *)(in_ECX[0x267] + 0x44);
    in_ECX[0x8b] = *(int *)(in_ECX[0x267] + 0x48);
    if ((in_ECX[0x8b] < 1) || (cVar1 = FUN_004a8a00(), cVar1 != '\0')) {
      in_ECX[0x8b] = 0;
      cVar1 = game_frame_should_continue();
      if (cVar1 == '\0') {
        piVar2 = in_ECX + 0x267;
        FUN_004d1b30(piVar2);
        FUN_00517f40(piVar2);
      }
      else {
        (**(code **)(*in_ECX + 0xb0))();
      }
    }
  }
  return;
}


/* ==== 0043b030  FUN_0043b030  size=94 ==== */

void FUN_0043b030(void)

{
  int *piVar1;
  int *local_8;
  
  FUN_00432d30();
  local_8 = (int *)game_loop_helper_018d0();
  piVar1 = (int *)game_loop_helper_018b0();
  for (; local_8 != piVar1; local_8 = local_8 + 1) {
    *(undefined1 *)(*local_8 + 0x170) = 1;
  }
  return;
}


/* ==== 0043b090  FUN_0043b090  size=323 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 * FUN_0043b090(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *in_ECX;
  undefined1 auStack_6c [16];
  undefined4 uStack_5c;
  undefined4 uStack_58;
  uint uStack_54;
  function<void___cdecl(void)> local_2c [24];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070ed45;
  local_10 = ExceptionList;
  uStack_54 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uStack_58 = param_1;
  uStack_5c = 0x43b0c8;
  local_14 = uStack_54;
  FUN_0042fb60();
  local_8 = 0;
  *in_ECX = CObjectGrass::vftable;
  in_ECX[0x268] = 0;
  uStack_58 = 0;
  uStack_5c = 0x43b0f8;
  puVar1 = (undefined4 *)game_get_flag_object_01a70();
  in_ECX[0x255] = *puVar1;
  uVar2 = FUN_004274d0(0);
  FUN_00405520(uVar2);
  FUN_004c7590(auStack_6c);
  local_8._0_1_ = 1;
  FUN_00405520(in_ECX[0x25d]);
  local_8 = (uint)local_8._1_3_ << 8;
  uStack_58 = FUN_004c7af0(local_2c);
  uStack_5c = 0x43b186;
  FUN_004053e0();
  uStack_58 = 0x43b18e;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_2c);
  *(undefined1 *)((int)in_ECX + 0x8f2) = 1;
  *(undefined1 *)(in_ECX + 0x23c) = 0;
  *(undefined1 *)(in_ECX + 0x238) = 1;
  ExceptionList = local_10;
  return in_ECX;
}


/* ==== 0043b1e0  FUN_0043b1e0  size=87 ==== */

void FUN_0043b1e0(int param_1)

{
  int *in_ECX;
  
  if (in_ECX[0x268] == 0) {
    if (0 < *(int *)(param_1 + 0x218)) {
      (**(code **)(*in_ECX + 0x108))(2);
    }
    if (*(int *)(param_1 + 0x218) < 0) {
      (**(code **)(*in_ECX + 0x108))(1);
    }
  }
  return;
}


/* ==== 0043b240  FUN_0043b240  size=75 ==== */

void FUN_0043b240(void)

{
  int *in_ECX;
  
  if (in_ECX[0x268] == 0) {
    (**(code **)(*in_ECX + 0x104))();
  }
  else if (in_ECX[0x268] == 1) {
    (**(code **)(*in_ECX + 0x108))(0);
  }
  return;
}


/* ==== 0043b290  FUN_0043b290  size=182 ==== */

undefined4 FUN_0043b290(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int *in_ECX;
  
  cVar1 = FUN_00427c60(*param_1 + 0x848,"[cut]");
  if (cVar1 != '\0') {
    uVar2 = img_path_loader_12(param_1);
    in_ECX[0x84] = 0;
    *(undefined4 *)(*param_1 + 0x210) = 0;
    if (in_ECX[0x268] == 0) {
      (**(code **)(*in_ECX + 0x108))(0);
      in_ECX[0x268] = 1;
    }
    else if (in_ECX[0x268] == 1) {
      (**(code **)(*in_ECX + 0xb0))(uVar2);
      in_ECX[0x268] = 2;
    }
  }
  return 0;
}


/* ==== 0043b350  FUN_0043b350  size=323 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 * FUN_0043b350(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *in_ECX;
  undefined1 auStack_6c [16];
  undefined4 uStack_5c;
  undefined4 uStack_58;
  uint uStack_54;
  function<void___cdecl(void)> local_2c [24];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070ed45;
  local_10 = ExceptionList;
  uStack_54 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uStack_58 = param_1;
  uStack_5c = 0x43b388;
  local_14 = uStack_54;
  FUN_0042fb60();
  local_8 = 0;
  *in_ECX = seagrass::vftable;
  in_ECX[0x268] = 0;
  uStack_58 = 0;
  uStack_5c = 0x43b3b8;
  puVar1 = (undefined4 *)game_get_flag_object_01a70();
  in_ECX[0x255] = *puVar1;
  uVar2 = FUN_004274d0(0);
  FUN_00405520(uVar2);
  FUN_004c7590(auStack_6c);
  local_8._0_1_ = 1;
  FUN_00405520(in_ECX[0x25d]);
  local_8 = (uint)local_8._1_3_ << 8;
  uStack_58 = FUN_004c7af0(local_2c);
  uStack_5c = 0x43b446;
  FUN_004053e0();
  uStack_58 = 0x43b44e;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_2c);
  *(undefined1 *)((int)in_ECX + 0x8f2) = 1;
  *(undefined1 *)(in_ECX + 0x23c) = 0;
  *(undefined1 *)(in_ECX + 0x238) = 1;
  ExceptionList = local_10;
  return in_ECX;
}


/* ==== 0043b4a0  FUN_0043b4a0  size=524 ==== */

undefined4 * FUN_0043b4a0(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070ed7d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0042fb60();
  local_8 = 0;
  *in_ECX = CChandelier::vftable;
  in_ECX[0x268] = 0;
  in_ECX[0x269] = 0;
  in_ECX[0x26a] = 1000;
  uVar1 = FUN_004274d0(0);
  FUN_00405520(uVar1);
  iVar2 = FUN_00630a40();
  *(undefined4 *)(iVar2 + 0x84) = 1;
  uVar1 = FUN_004274d0(1);
  FUN_00405520(uVar1);
  iVar2 = FUN_00630a40();
  *(undefined4 *)(iVar2 + 0x84) = 1;
  uVar1 = FUN_004274d0(5);
  FUN_00405520(uVar1);
  iVar2 = FUN_00630a40();
  *(undefined4 *)(iVar2 + 0x84) = 1;
  uVar1 = FUN_004274d0(6);
  FUN_00405520(uVar1);
  iVar2 = FUN_00630a40();
  *(undefined4 *)(iVar2 + 0x84) = 1;
  uVar1 = FUN_004274d0(7);
  FUN_00405520(uVar1);
  iVar2 = FUN_00630a40();
  *(undefined4 *)(iVar2 + 0x84) = 1;
  FUN_004053a0();
  FUN_004053a0();
  *(undefined1 *)(in_ECX + 0x23c) = 0;
  *(undefined1 *)((int)in_ECX + 0x8f2) = 0;
  *(undefined1 *)((int)in_ECX + 0x8f1) = 0;
  *(undefined1 *)(in_ECX + 0x238) = 1;
  ExceptionList = local_10;
  return in_ECX;
}


/* ==== 0043b6b0  FUN_0043b6b0  size=38 ==== */

void FUN_0043b6b0(undefined4 param_1)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x9a4) == 2) {
    FUN_00431fb0(param_1);
  }
  return;
}


/* ==== 0043b6e0  FUN_0043b6e0  size=419 ==== */

undefined4 FUN_0043b6e0(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *in_ECX;
  
  if (in_ECX[0x269] == 0) {
    in_ECX[0x269] = 1;
    FUN_004021b0();
    while( true ) {
      FUN_00402170();
      cVar1 = FUN_00426ed0();
      if (cVar1 == '\0') break;
      FUN_004021b0();
      cVar1 = FUN_00426ed0();
      if (cVar1 == '\0') {
        FUN_0044dda0();
      }
      else {
        FUN_0044ddc0();
        FUN_004d1b30();
        FUN_00517ee0();
        FUN_0044dea0();
      }
    }
    FUN_004274d0();
    FUN_00405520();
    iVar2 = (**(code **)(*in_ECX + 0x78))();
    *(undefined4 *)(iVar2 + 0x84) = 1;
    FUN_004274d0();
    iVar2 = FUN_005e9250();
    *(undefined4 *)(iVar2 + 0x84) = 1;
    FUN_0040d490();
    uVar3 = FUN_004274d0(4);
    FUN_00405520(uVar3);
    iVar2 = (**(code **)(*in_ECX + 0x78))();
    *(undefined4 *)(iVar2 + 0x84) = 1;
    img_path_loader_12(param_1);
  }
  return 0;
}


/* ==== 0043ba30  FUN_0043ba30  size=47 ==== */

undefined4 FUN_0043ba30(undefined4 param_1)

{
  FUN_004054a0("[pass all]");
  return param_1;
}


/* ==== 0043ba60  FUN_0043ba60  size=187 ==== */

undefined4 * FUN_0043ba60(void)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070e76d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0042fb60();
  local_8 = 0;
  *in_ECX = CHallucination::vftable;
  in_ECX[0x268] = 0;
  *(undefined1 *)(in_ECX + 0x238) = 1;
  uVar1 = FUN_004274d0(0);
  FUN_00405520(uVar1);
  FUN_00630a40();
  *(undefined1 *)((int)in_ECX + 0x8f2) = 1;
  *(undefined1 *)(in_ECX + 0x23c) = 0;
  ExceptionList = local_10;
  return in_ECX;
}


/* ==== 0043bb20  FUN_0043bb20  size=83 ==== */

undefined4 FUN_0043bb20(undefined4 param_1)

{
  undefined4 uVar1;
  int *in_ECX;
  
  uVar1 = img_path_loader_12(param_1);
  in_ECX[0x268] = in_ECX[0x268] + 1;
  if (3 < in_ECX[0x268]) {
    (**(code **)(*in_ECX + 0xb0))();
  }
  return uVar1;
}


/* ==== 0043bb80  FUN_0043bb80  size=50 ==== */

undefined4 * FUN_0043bb80(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  FUN_0042fb60(param_1);
  *in_ECX = starfisheggrequid::vftable;
  in_ECX[0x268] = 0;
  return in_ECX;
}


/* ==== 0043bbc0  FUN_0043bbc0  size=224 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_0043bbc0(void)

{
  undefined4 *puVar1;
  undefined1 auStack_64 [16];
  undefined4 uStack_54;
  WorkQueue *pWStack_50;
  uint uStack_4c;
  undefined1 *local_48;
  int local_40;
  WorkQueue local_3c [24];
  undefined4 local_24;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070e84d;
  local_10 = ExceptionList;
  uStack_4c = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_48 = auStack_64;
  local_14 = uStack_4c;
  FUN_004054a0(&DAT_00779f14);
  local_40 = FUN_006356a0();
  if (local_40 == 0) {
    pWStack_50 = (WorkQueue *)0x43bc16;
    FUN_0042df20();
    local_8 = 0;
    pWStack_50 = (WorkQueue *)&DAT_00779f14;
    uStack_54 = 0x43bc2a;
    FUN_004053a0();
    local_24 = 10000;
    pWStack_50 = (WorkQueue *)0x2;
    uStack_54 = 0x43bc3b;
    FUN_0044e460();
    pWStack_50 = (WorkQueue *)0x0;
    uStack_54 = 0x43bc45;
    puVar1 = (undefined4 *)game_get_flag_object_01a70();
    *puVar1 = 100;
    pWStack_50 = (WorkQueue *)0x1;
    uStack_54 = 0x43bc55;
    puVar1 = (undefined4 *)game_get_flag_object_01a70();
    *puVar1 = 100;
    pWStack_50 = local_3c;
    uStack_54 = 0x43bc6d;
    FUN_0044e230();
    pWStack_50 = (WorkQueue *)0x43bc75;
    FUN_00635d80();
    local_8 = 0xffffffff;
    pWStack_50 = (WorkQueue *)0x43bc84;
    Concurrency::details::WorkQueue::~WorkQueue(local_3c);
  }
  ExceptionList = local_10;
  return;
}


/* ==== 0043bca0  FUN_0043bca0  size=102 ==== */

void FUN_0043bca0(int param_1)

{
  int *in_ECX;
  
  if ((in_ECX[0x268] != -1) && (in_ECX[0x268] = in_ECX[0x268] + param_1, 9999 < in_ECX[0x268])) {
    in_ECX[0x268] = -1;
    (**(code **)(*in_ECX + 0x108))(2);
    *(undefined1 *)(in_ECX + 0x265) = 1;
  }
  return;
}


/* ==== 0043bd10  FUN_0043bd10  size=47 ==== */

undefined4 * FUN_0043bd10(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  FUN_0042fb60(param_1);
  *in_ECX = CStarfishEgg::vftable;
  *(undefined1 *)(in_ECX + 0x238) = 1;
  return in_ECX;
}


/* ==== 0043bd40  FUN_0043bd40  size=121 ==== */

undefined4 FUN_0043bd40(undefined4 param_1)

{
  undefined4 uVar1;
  int *in_ECX;
  
  uVar1 = img_path_loader_12(param_1);
  (**(code **)(*in_ECX + 0x108))(1);
  FUN_0042f340(in_ECX,0,0,0,0x407,in_ECX[0x7d]);
  (**(code **)(*in_ECX + 0xb0))();
  return uVar1;
}


/* ==== 0043bdc0  FUN_0043bdc0  size=411 ==== */

undefined4 * FUN_0043bdc0(void)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *in_ECX;
  undefined4 local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070edad;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0042fb60();
  local_8 = 0;
  *in_ECX = CMotorfan::vftable;
  piVar1 = (int *)game_get_flag_object_01a70();
  if (*piVar1 == 0) {
    local_18 = 0xffffffff;
  }
  else {
    local_18 = 1;
  }
  in_ECX[0x7d] = local_18;
  uVar2 = FUN_004274d0(0);
  FUN_00405520(uVar2);
  FUN_00630a40();
  uVar2 = FUN_004274d0(1);
  FUN_00405520(uVar2);
  FUN_00630a40();
  FUN_004274d0();
  FUN_005e9250();
  FUN_0040d490();
  FUN_004274d0();
  FUN_005e9250();
  FUN_0040d490();
  FUN_004054a0("FAN_ROTATE_LOOP");
  FUN_004c3570();
  FUN_004054a0("FAN_WIND_BLOW_LOOP");
  FUN_004c3570();
  *(undefined1 *)(in_ECX + 0x238) = 1;
  ExceptionList = local_10;
  return in_ECX;
}


/* ==== 0043bf60  FUN_0043bf60  size=439 ==== */

void FUN_0043bf60(int param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined1 local_28 [4];
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  undefined1 local_c [4];
  int local_8;
  
  game_get_state_ptr_d1520();
  piVar2 = (int *)FUN_004d58e0();
  local_14 = *piVar2;
  if (local_14 != 0) {
    local_18 = local_14 + 0x170;
    FUN_0042a9e0(local_c);
    FUN_0042a9c0(local_28);
    while (cVar1 = FUN_0040d2d0(local_28), cVar1 != '\0') {
      puVar3 = (undefined4 *)FUN_0042a580();
      local_10 = FUN_0070b658(*puVar3,0,&CObj::RTTI_Type_Descriptor,&CHARACTER::RTTI_Type_Descriptor
                              ,0);
      if (local_10 != 0) {
        local_20 = param_1 * 100;
        if (*(int *)(local_8 + 500) == 1) {
          if (*(int *)(local_8 + 0x208) / 2 + *(int *)(local_8 + 0x224) < *(int *)(local_10 + 0x224)
             ) {
            *(int *)(local_8 + 0x218) = *(int *)(local_8 + 0x218) + local_20;
            local_1c = *(int *)(local_8 + 0x218) / 1000;
            *(int *)(local_8 + 0x218) = *(int *)(local_8 + 0x218) + local_1c * -1000;
            *(int *)(local_8 + 0x224) = *(int *)(local_8 + 0x224) + local_1c;
          }
        }
        else if (*(int *)(local_10 + 0x224) <
                 *(int *)(local_8 + 0x224) - *(int *)(local_8 + 0x208) / 2) {
          *(int *)(local_8 + 0x218) = *(int *)(local_8 + 0x218) + param_1 * -100;
          local_24 = *(int *)(local_8 + 0x218) / 1000;
          *(int *)(local_8 + 0x218) = *(int *)(local_8 + 0x218) + local_24 * -1000;
          *(int *)(local_8 + 0x224) = *(int *)(local_8 + 0x224) + local_24;
        }
      }
      FUN_0042a560();
    }
  }
  return;
}


/* ==== 0043c120  FUN_0043c120  size=566 ==== */

undefined4 * FUN_0043c120(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 local_20;
  int local_1c;
  int local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070e70d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0042fb60(param_1);
  local_8 = 0;
  *local_14 = CSceneObject::vftable;
  puVar1 = (undefined4 *)game_get_flag_object_01a70(0);
  local_14[0x268] = *puVar1;
  puVar1 = (undefined4 *)game_get_flag_object_01a70(1);
  local_14[0x269] = *puVar1;
  local_14[0x26a] = 0;
  local_14[0x26b] = 0;
  local_18 = local_14[0x79];
  if (local_18 < 0x2bf) {
    if (local_18 != 0x2be) {
      local_18 = local_18 + -0x13f;
      switch(local_18) {
      case 0:
      case 7:
      case 0xe:
        break;
      case 1:
      case 8:
      case 0xf:
        goto switchD_0043c1ee_caseD_1;
      case 2:
      case 9:
      case 0x10:
        goto switchD_0043c1ee_caseD_2;
      case 3:
      case 10:
      case 0x11:
        goto switchD_0043c1ee_caseD_3;
      default:
        goto switchD_0043c1ee_caseD_4;
      }
    }
switchD_0043c1ee_caseD_0:
    local_14[0x26c] = 10;
LAB_0043c259:
    local_14[0x25e] = 10;
    uVar2 = game_get_flag_object_01a70(0);
    FUN_004d1b30(uVar2);
    FUN_00517ee0(uVar2);
    FUN_0040d5f0();
    for (local_1c = 0; local_1c < 10; local_1c = local_1c + 1) {
      local_20 = FUN_005e9250(local_14[0x25d] + 0x128);
      FUN_0040d490(&local_20);
      piVar3 = (int *)game_get_flag_object_01a70(local_1c);
      *(undefined4 *)(*piVar3 + 0x90) = 0;
      uVar2 = 0;
      game_get_flag_object_01a70(0);
      iVar4 = FUN_0040d680(uVar2);
      piVar3 = (int *)game_get_flag_object_01a70(local_1c);
      *(undefined4 *)(*piVar3 + 0x98) = *(undefined4 *)(iVar4 + 0x44);
    }
    ExceptionList = local_10;
    return local_14;
  }
  local_18 = local_18 + -0x2bf;
  switch(local_18) {
  case 0:
  case 7:
  case 0xe:
switchD_0043c1ee_caseD_1:
    local_14[0x26c] = 0;
    goto LAB_0043c259;
  case 1:
  case 8:
  case 0xf:
switchD_0043c1ee_caseD_2:
    local_14[0x26c] = 0x32;
    goto LAB_0043c259;
  case 2:
  case 9:
  case 0x10:
switchD_0043c1ee_caseD_3:
    local_14[0x26c] = 0x96;
    goto LAB_0043c259;
  default:
switchD_0043c1ee_caseD_4:
    local_14[0x26c] = 0;
    goto LAB_0043c259;
  case 6:
  case 0xd:
    goto switchD_0043c1ee_caseD_0;
  }
}


/* ==== 0043c3f0  FUN_0043c3f0  size=283 ==== */

void FUN_0043c3f0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int in_ECX;
  float10 fVar4;
  undefined4 local_c;
  
  *(int *)(in_ECX + 0x9ac) = *(int *)(in_ECX + 0x9ac) + param_1;
  iVar1 = *(int *)(in_ECX + 0x9b0);
  fVar4 = (float10)FUN_0042d730(((float)(*(int *)(in_ECX + 0x9ac) % 5000) / 5000.0) * 2.0 * 3.14);
  *(int *)(in_ECX + 0x9a8) = (int)((float)iVar1 + (float)fVar4 * (float)*(int *)(in_ECX + 0x9b0));
  for (local_c = 0; local_c < 10; local_c = local_c + 1) {
    iVar1 = *(int *)(in_ECX + 0x9a0);
    piVar3 = (int *)game_get_flag_object_01a70(local_c);
    *(int *)(*piVar3 + 0x40) = local_c * iVar1;
    iVar1 = *(int *)(in_ECX + 0x9a8);
    iVar2 = *(int *)(in_ECX + 0x9a4);
    piVar3 = (int *)game_get_flag_object_01a70(local_c);
    *(int *)(*piVar3 + 0x44) = iVar1 - iVar2;
  }
  return;
}


/* ==== 0043c510  FUN_0043c510  size=417 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 * FUN_0043c510(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *in_ECX;
  undefined1 auStack_8c [12];
  undefined4 uStack_80;
  int iStack_7c;
  undefined1 *puStack_78;
  uint uStack_74;
  int local_4c;
  function<void___cdecl(void)> local_44 [24];
  function<void___cdecl(void)> local_2c [24];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070eded;
  local_10 = ExceptionList;
  uStack_74 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  puStack_78 = (undefined1 *)param_1;
  iStack_7c = 0x43c548;
  local_14 = uStack_74;
  FUN_0042fb60();
  local_8 = 0;
  *in_ECX = CFireExplosion::vftable;
  *(undefined1 *)(in_ECX + 0x265) = 1;
  for (local_4c = 0; local_4c < 4; local_4c = local_4c + 1) {
    puStack_78 = (undefined1 *)0x43c586;
    FUN_0040d8b0();
    local_8._0_1_ = 1;
    puStack_78 = &DAT_007793b1;
    iStack_7c = local_4c;
    uStack_80 = 0x43c5a4;
    iStack_7c = FUN_004274d0();
    uStack_80 = 0x43c5aa;
    cVar1 = FUN_00427e30();
    if (cVar1 != '\0') {
      uVar2 = FUN_004274d0(local_4c);
      FUN_00405520(uVar2);
      FUN_004c7590(auStack_8c);
      local_8._0_1_ = 2;
      FUN_00405520(in_ECX[0x25d]);
      local_8._0_1_ = 1;
      puStack_78 = (undefined1 *)FUN_004c7af0(local_44);
      iStack_7c = 0x43c637;
      FUN_004053e0();
      puStack_78 = (undefined1 *)0x43c63f;
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_44);
    }
    FUN_00405520();
    FUN_004aa990();
    local_8 = (uint)local_8._1_3_ << 8;
    puStack_78 = (undefined1 *)0x43c685;
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_2c);
  }
  ExceptionList = local_10;
  return in_ECX;
}


/* ==== 0043c6c0  FUN_0043c6c0  size=443 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 * FUN_0043c6c0(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *in_ECX;
  undefined1 auStack_90 [12];
  undefined4 uStack_84;
  int iStack_80;
  undefined1 *puStack_7c;
  uint uStack_78;
  int local_4c;
  function<void___cdecl(void)> local_44 [24];
  function<void___cdecl(void)> local_2c [24];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070ee3d;
  local_10 = ExceptionList;
  uStack_78 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  puStack_7c = (undefined1 *)param_1;
  iStack_80 = 0x43c6f8;
  local_14 = uStack_78;
  FUN_0042fb60();
  local_8 = 0;
  *in_ECX = CTrapgas::vftable;
  for (local_4c = 0; local_4c < 1; local_4c = local_4c + 1) {
    puStack_7c = (undefined1 *)0x43c72c;
    FUN_0040d8b0();
    local_8._0_1_ = 1;
    puStack_7c = &DAT_007793b1;
    iStack_80 = local_4c;
    uStack_84 = 0x43c74a;
    iStack_80 = FUN_004274d0();
    uStack_84 = 0x43c750;
    cVar1 = FUN_00427e30();
    if (cVar1 != '\0') {
      uVar2 = FUN_004274d0(local_4c);
      FUN_00405520(uVar2);
      FUN_004c7590(auStack_90);
      local_8._0_1_ = 2;
      FUN_00405520(in_ECX[0x25d]);
      local_8._0_1_ = 1;
      puStack_7c = (undefined1 *)FUN_004c7af0(local_44);
      iStack_80 = 0x43c7dd;
      FUN_004053e0();
      puStack_7c = (undefined1 *)0x43c7e5;
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_44);
    }
    FUN_00405520();
    FUN_004aa990();
    local_8 = (uint)local_8._1_3_ << 8;
    puStack_7c = (undefined1 *)0x43c82b;
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_2c);
  }
  *(undefined1 *)(in_ECX + 0x265) = 1;
  FUN_004054a0();
  FUN_004c3570();
  ExceptionList = local_10;
  return in_ECX;
}


/* ==== 0043c880  FUN_0043c880  size=37 ==== */

undefined4 * FUN_0043c880(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  FUN_0042fb60(param_1);
  *in_ECX = magamalarge::vftable;
  return in_ECX;
}


/* ==== 0043c8b0  FUN_0043c8b0  size=708 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_0043c8b0(int param_1)

{
  undefined4 *puVar1;
  int in_ECX;
  undefined1 auStack_64 [16];
  undefined4 uStack_54;
  WorkQueue *pWStack_50;
  uint uStack_4c;
  undefined1 *local_48;
  int local_44;
  WorkQueue local_3c [24];
  undefined4 local_24;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070e84d;
  local_10 = ExceptionList;
  uStack_4c = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if ((*(int *)(param_1 + 0x204) == 0) &&
     (((((*(int *)(param_1 + 0x224) - *(int *)(param_1 + 0x208) / 2 <=
          *(int *)(in_ECX + 0x208) / 2 + *(int *)(in_ECX + 0x224) &&
         (*(int *)(in_ECX + 0x224) - *(int *)(in_ECX + 0x208) / 2 <=
          *(int *)(param_1 + 0x208) / 2 + *(int *)(param_1 + 0x224))) &&
        (*(int *)(param_1 + 0x228) - *(int *)(param_1 + 0x20c) / 2 <=
         *(int *)(in_ECX + 0x20c) / 2 + *(int *)(in_ECX + 0x228))) &&
       (*(int *)(in_ECX + 0x228) - *(int *)(in_ECX + 0x20c) / 2 <=
        *(int *)(param_1 + 0x20c) / 2 + *(int *)(param_1 + 0x228))) ||
      (((*(int *)(in_ECX + 0x224) - *(int *)(in_ECX + 0x208) / 2 <=
         *(int *)(param_1 + 0x208) / 2 + *(int *)(param_1 + 0x224) &&
        (*(int *)(param_1 + 0x224) - *(int *)(param_1 + 0x208) / 2 <=
         *(int *)(in_ECX + 0x208) / 2 + *(int *)(in_ECX + 0x224))) &&
       ((*(int *)(in_ECX + 0x228) - *(int *)(in_ECX + 0x20c) / 2 <=
         *(int *)(param_1 + 0x20c) / 2 + *(int *)(param_1 + 0x228) &&
        (*(int *)(param_1 + 0x228) - *(int *)(param_1 + 0x20c) / 2 <=
         *(int *)(in_ECX + 0x20c) / 2 + *(int *)(in_ECX + 0x228))))))))) {
    local_48 = auStack_64;
    local_14 = uStack_4c;
    FUN_004054a0(&DAT_00779f50);
    local_44 = FUN_006356a0();
    if (local_44 == 0) {
      pWStack_50 = (WorkQueue *)0x43cada;
      FUN_0042df20();
      local_8 = 0;
      pWStack_50 = (WorkQueue *)&DAT_00779f50;
      uStack_54 = 0x43caee;
      FUN_004053a0();
      local_24 = 10000;
      pWStack_50 = (WorkQueue *)0x3;
      uStack_54 = 0x43caff;
      FUN_0044e460();
      pWStack_50 = (WorkQueue *)0x0;
      uStack_54 = 0x43cb09;
      puVar1 = (undefined4 *)game_get_flag_object_01a70();
      *puVar1 = 0x96;
      pWStack_50 = (WorkQueue *)0x1;
      uStack_54 = 0x43cb19;
      puVar1 = (undefined4 *)game_get_flag_object_01a70();
      *puVar1 = 0x4b;
      pWStack_50 = (WorkQueue *)0x2;
      uStack_54 = 0x43cb29;
      puVar1 = (undefined4 *)game_get_flag_object_01a70();
      *puVar1 = 3000;
      pWStack_50 = local_3c;
      uStack_54 = 0x43cb41;
      FUN_0044e230();
      pWStack_50 = (WorkQueue *)0x43cb49;
      FUN_00635d80();
      local_8 = 0xffffffff;
      pWStack_50 = (WorkQueue *)0x43cb58;
      Concurrency::details::WorkQueue::~WorkQueue(local_3c);
    }
  }
  ExceptionList = local_10;
  return;
}


/* ==== 0043cb80  FUN_0043cb80  size=47 ==== */

undefined4 * FUN_0043cb80(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  FUN_0042fb60(param_1);
  *in_ECX = CZepplinBullet::vftable;
  *(undefined1 *)(in_ECX + 0x265) = 1;
  return in_ECX;
}


/* ==== 0043cbb0  FUN_0043cbb0  size=25 ==== */

int FUN_0043cbb0(void)

{
  int in_ECX;
  
  return *(int *)(in_ECX + 0x228) + -1000;
}


/* ==== 0043cce0  FUN_0043cce0  size=47 ==== */

undefined4 * FUN_0043cce0(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  FUN_0042fb60(param_1);
  *in_ECX = CZepplinBomb::vftable;
  *(undefined1 *)(in_ECX + 0x265) = 1;
  return in_ECX;
}


/* ==== 0043cd10  FUN_0043cd10  size=74 ==== */

void FUN_0043cd10(void)

{
  FUN_0042f340();
  FUN_00432d30();
  return;
}


/* ==== 0043cd60  FUN_0043cd60  size=30 ==== */

void FUN_0043cd60(void)

{
  int *in_ECX;
  
  (**(code **)(*in_ECX + 0x108))(0);
  return;
}


/* ==== 0043cf10  FUN_0043cf10  size=389 ==== */

undefined4 * FUN_0043cf10(undefined4 param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined1 auStack_54 [8];
  undefined4 uStack_4c;
  undefined1 *puStack_48;
  undefined1 *puStack_44;
  int *piStack_40;
  uint uStack_3c;
  undefined1 local_34 [4];
  undefined1 local_30 [4];
  undefined1 *local_2c;
  undefined1 *local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined4 *local_18;
  undefined1 local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070eebd;
  local_10 = ExceptionList;
  uStack_3c = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  piStack_40 = (int *)param_1;
  puStack_44 = (undefined1 *)0x43cf45;
  FUN_0042fb60();
  local_8 = 0;
  *local_18 = CEvileyemissile::vftable;
  piStack_40 = (int *)0x0;
  puStack_44 = (undefined1 *)0x43cf65;
  piVar1 = (int *)game_get_flag_object_01a70();
  *(undefined4 *)(*piVar1 + 0x114) = local_18[0x8a];
  *(undefined1 *)(local_18 + 0x265) = 1;
  local_28 = auStack_54;
  uVar2 = FUN_004274d0(0);
  FUN_00405520(uVar2);
  local_20 = FUN_00630a40();
  *(undefined4 *)(local_20 + 0x114) = 0xffffff9c;
  piStack_40 = &local_1c;
  puStack_44 = (undefined1 *)0x43cfd6;
  local_1c = local_20;
  FUN_0040d490();
  local_2c = auStack_54;
  uVar2 = FUN_004274d0(1);
  FUN_00405520(uVar2);
  local_24 = FUN_00630a40();
  *(undefined4 *)(local_24 + 0x114) = 0xffffff38;
  piStack_40 = &local_1c;
  puStack_44 = (undefined1 *)0x43d02d;
  local_1c = local_24;
  FUN_0040d490();
  local_11 = 0;
  piStack_40 = (int *)0x0;
  puStack_44 = local_30;
  puStack_48 = (undefined1 *)0x43d04a;
  puVar3 = (undefined4 *)FUN_00402170();
  puStack_44 = (undefined1 *)*puVar3;
  puStack_48 = local_34;
  uStack_4c = 0x43d05f;
  puVar3 = (undefined4 *)FUN_004021b0();
  puStack_48 = (undefined1 *)*puVar3;
  uStack_4c = 0x43d067;
  FUN_0044eab0();
  piStack_40 = (int *)0x43d078;
  FUN_0044e040();
  ExceptionList = local_10;
  return local_18;
}


/* ==== 0043d0a0  FUN_0043d0a0  size=55 ==== */

bool FUN_0043d0a0(int param_1,int param_2)

{
  return *(int *)(param_1 + 0x114) < *(int *)(param_2 + 0x114);
}


/* ==== 0043d0e0  FUN_0043d0e0  size=154 ==== */

undefined4 * FUN_0043d0e0(void)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070e76d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0042fb60();
  local_8 = 0;
  *in_ECX = CEvileyesmalllaser::vftable;
  *(undefined1 *)(in_ECX + 0x265) = 1;
  uVar1 = FUN_004274d0(1);
  FUN_00405520(uVar1);
  FUN_00630a40();
  ExceptionList = local_10;
  return in_ECX;
}


/* ==== 0043d180  FUN_0043d180  size=53 ==== */

void FUN_0043d180(void)

{
  int *in_ECX;
  
  if (in_ECX[0x256] == -1) {
    (**(code **)(*in_ECX + 0x108))(0);
  }
  else {
    FUN_00432fd0();
  }
  return;
}


/* ==== 0043d240  FUN_0043d240  size=440 ==== */

undefined4 * FUN_0043d240(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *in_ECX;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070eeed;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0042fb60();
  local_8 = 0;
  *in_ECX = CEvileyesmallchargedlaser::vftable;
  *(undefined1 *)(in_ECX + 0x265) = 1;
  FUN_004274d0();
  FUN_005e9250();
  FUN_0040d490();
  game_get_flag_object_01a70();
  game_loop_helper_0e1f0();
  FUN_00634ac0();
  iVar1 = FUN_0044de50();
  for (local_18 = 0; local_18 < (iVar1 * 0xc) / 0x1e; local_18 = local_18 + 1) {
    uVar2 = FUN_004274d0(1);
    FUN_00405520(uVar2);
    iVar3 = FUN_00630a40();
    *(int *)(iVar3 + 0x48) = local_18 * 0x1e;
    FUN_0040d490();
    uVar2 = FUN_004274d0(2);
    FUN_00405520(uVar2);
    iVar3 = FUN_00630a40();
    *(int *)(iVar3 + 0x48) = local_18 * 0x1e;
    FUN_0040d490();
  }
  FUN_0044e040();
  ExceptionList = local_10;
  return in_ECX;
}


/* ==== 0043d400  FUN_0043d400  size=126 ==== */

void FUN_0043d400(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  piVar1 = (int *)game_get_flag_object_01a70(0);
  *piVar1 = *piVar1 - param_1;
  piVar1 = (int *)game_get_flag_object_01a70(0);
  if (*piVar1 < 1) {
    puVar2 = (undefined4 *)game_get_flag_object_01a70(0);
    puVar3 = (undefined4 *)game_get_flag_object_01a70(0);
    *puVar3 = *puVar2;
    FUN_0040d5f0();
  }
  return;
}


/* ==== 0043d480  FUN_0043d480  size=47 ==== */

undefined4 * FUN_0043d480(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  FUN_0042fb60(param_1);
  *in_ECX = CEvileyequake::vftable;
  *(undefined1 *)(in_ECX + 0x265) = 1;
  return in_ECX;
}


/* ==== 0043d4b0  FUN_0043d4b0  size=37 ==== */

undefined4 * FUN_0043d4b0(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  FUN_0042fb60(param_1);
  *in_ECX = CRocketpunch::vftable;
  return in_ECX;
}


/* ==== 0043d4e0  FUN_0043d4e0  size=42 ==== */

void FUN_0043d4e0(undefined4 param_1)

{
  int *in_ECX;
  
  FUN_00431fb0(param_1);
  (**(code **)(*in_ECX + 0xb0))();
  return;
}


/* ==== 0043da80  FUN_0043da80  size=263 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_0043da80(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 auStack_60 [16];
  undefined4 uStack_50;
  WorkQueue *pWStack_4c;
  uint uStack_48;
  undefined1 *local_44;
  WorkQueue local_3c [24];
  undefined4 local_24;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070ef4d;
  local_10 = ExceptionList;
  uStack_48 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  pWStack_4c = (WorkQueue *)param_1;
  uStack_50 = 0x43dab7;
  local_14 = uStack_48;
  FUN_00431fb0();
  pWStack_4c = (WorkQueue *)0x43dac3;
  cVar1 = FUN_006352e0();
  if (cVar1 == '\0') {
    pWStack_4c = (WorkQueue *)0x43dad3;
    iVar2 = FUN_00641430();
    if (iVar2 % 100 < 100) {
      local_44 = auStack_60;
      FUN_004054a0(&DAT_0077a188);
      FUN_00635830();
      pWStack_4c = (WorkQueue *)0x43db07;
      FUN_0042df20();
      local_8 = 0;
      pWStack_4c = (WorkQueue *)&DAT_0077a188;
      uStack_50 = 0x43db1b;
      FUN_004053a0();
      local_24 = 3000;
      pWStack_4c = (WorkQueue *)0x1;
      uStack_50 = 0x43db2c;
      FUN_0044e460();
      pWStack_4c = (WorkQueue *)0x0;
      uStack_50 = 0x43db36;
      puVar3 = (undefined4 *)game_get_flag_object_01a70();
      *puVar3 = 0x96;
      pWStack_4c = local_3c;
      uStack_50 = 0x43db51;
      FUN_0044e230();
      pWStack_4c = (WorkQueue *)0x43db5c;
      FUN_00635d80();
      local_8 = 0xffffffff;
      pWStack_4c = (WorkQueue *)0x43db6b;
      Concurrency::details::WorkQueue::~WorkQueue(local_3c);
    }
  }
  ExceptionList = local_10;
  return;
}


/* ==== 0043db90  FUN_0043db90  size=656 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_0043db90(int param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 uStack_58;
  undefined1 *puStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  int iStack_48;
  undefined1 *puStack_44;
  undefined1 *local_40;
  undefined1 local_3c [4];
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int *local_28;
  undefined1 local_24 [4];
  int *local_20;
  int *local_1c;
  int *local_18;
  undefined1 local_14 [12];
  uint local_8;
  
  local_8 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  puStack_44 = (undefined1 *)0x0;
  iStack_48 = 0x43dbb3;
  local_28 = (int *)game_get_flag_object_01a70();
  *local_28 = *local_28 - param_1;
  puStack_44 = (undefined1 *)0x0;
  iStack_48 = 0x43dbd3;
  piVar2 = (int *)game_get_flag_object_01a70();
  if (*piVar2 < 1) {
    puStack_44 = (undefined1 *)0x0;
    iStack_48 = 0x43dbe8;
    puVar3 = (undefined4 *)game_get_flag_object_01a70();
    *puVar3 = 0xfa;
    puStack_44 = (undefined1 *)0x43dbfc;
    FUN_0040d5f0();
  }
  puStack_44 = (undefined1 *)0x43dc05;
  local_1c = (int *)FUN_00432b40();
  if (local_1c != (int *)0x0) {
    local_40 = (undefined1 *)&uStack_58;
    FUN_004054a0("monster/drake/particle/breath.ptl");
    local_38 = FUN_004aab70();
    if (local_38 != 0) {
      local_18[0x86] = local_18[0x86] - (param_1 * 200) / 3;
      local_2c = local_18[0x86] / 1000;
      local_18[0x86] = local_18[0x86] + local_2c * -1000;
      local_18[0x89] = local_18[0x89] + local_2c;
      local_18[0x268] = local_18[0x268] - (param_1 * 0x2d) / 3;
      local_30 = local_38;
      if (local_18[0x268] < -44999) {
        local_18[0x268] = -45000;
        puStack_44 = (undefined1 *)0x43dcf2;
        (**(code **)(*local_18 + 0xb0))();
        puStack_44 = (undefined1 *)0x43dd02;
        (**(code **)(*local_1c + 0x134))();
      }
      else {
        local_34 = local_38 + 0x20;
        puStack_44 = local_24;
        iStack_48 = 0x43dd1d;
        FUN_0042a9e0();
        puStack_44 = local_3c;
        iStack_48 = 0x43dd29;
        FUN_0042a9c0();
        while( true ) {
          puStack_44 = local_3c;
          iStack_48 = 0x43dd41;
          cVar1 = FUN_0040d2d0();
          if (cVar1 == '\0') break;
          puStack_44 = (undefined1 *)0x43dd50;
          local_20 = (int *)FUN_0042a580();
          *(undefined4 *)(*local_20 + 0x4c) = 0;
          *(undefined4 *)(*local_20 + 0x50) = 0;
          *(undefined4 *)(*local_20 + 0x54) = 0xc3fa0000;
          puStack_44 = (undefined1 *)0x0;
          iStack_48 = local_18[0x268] / 1000 + -0xf;
          uStack_4c = 0;
          iStack_50 = *local_20 + 0x4c;
          puStack_54 = local_14;
          uStack_58 = 0x43ddaf;
          FUN_004a70c0();
          puStack_44 = (undefined1 *)0x43dd34;
          FUN_0042a560();
        }
        uVar5 = local_18[0x268] / 1000 >> 0x1f;
        puStack_44 = (undefined1 *)((int)((local_18[0x268] / 1000 ^ uVar5) - uVar5) / 3 + 0xb);
        iStack_48 = 0x43dde7;
        (**(code **)(*local_1c + 0x8c))();
        iStack_48 = 0x43ddf4;
        (**(code **)(*local_1c + 0x58))();
        iStack_48 = 0x43ddfb;
        iVar4 = FUN_0062fc30();
        iStack_48 = *(undefined4 *)(iVar4 + 0x44);
        uStack_4c = 0x43de0f;
        (**(code **)(*local_1c + 0x90))();
      }
    }
  }
  return;
}


/* ==== 0043de20  FUN_0043de20  size=377 ==== */

void FUN_0043de20(void)

{
  int iVar1;
  undefined1 auStack_70 [20];
  undefined4 uStack_5c;
  undefined1 *local_58;
  undefined1 *local_54;
  undefined1 *local_50;
  undefined1 *local_4c;
  undefined1 *local_48;
  undefined1 *local_44;
  undefined1 *local_40;
  undefined1 *local_3c;
  undefined1 *local_38;
  undefined1 *local_34;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  uStack_5c = 0x43de31;
  FUN_00432d30();
  local_34 = auStack_70;
  FUN_004054a0("monster/drake/particle/dragonfirebreathkemuri.ptl");
  local_c = FUN_004aab70();
  if (local_c != 0) {
    local_38 = auStack_70;
    FUN_004054a0("monster/drake/particle/dragonfirebreathkemuri.ptl");
    local_10 = FUN_004aab70();
    *(undefined1 *)(local_10 + 0x34) = 0;
  }
  local_3c = auStack_70;
  FUN_004054a0("monster/drake/particle/dragonfirebreathfloor.ptl");
  local_14 = FUN_004aab70();
  if (local_14 != 0) {
    local_40 = auStack_70;
    FUN_004054a0("monster/drake/particle/dragonfirebreathfloor.ptl");
    local_18 = FUN_004aab70();
    *(undefined1 *)(local_18 + 0x34) = 0;
  }
  local_44 = auStack_70;
  FUN_004054a0("monster/drake/particle/firebreathfloor.ptl");
  local_1c = FUN_004aab70();
  if (local_1c != 0) {
    local_48 = auStack_70;
    FUN_004054a0("monster/drake/particle/firebreathfloor.ptl");
    local_20 = FUN_004aab70();
    *(undefined1 *)(local_20 + 0x34) = 0;
  }
  local_4c = auStack_70;
  FUN_004054a0("monster/drake/particle/breath.ptl");
  local_24 = FUN_004aab70();
  if (local_24 != 0) {
    local_50 = auStack_70;
    FUN_004054a0("monster/drake/particle/breath.ptl");
    local_28 = FUN_004aab70();
    *(undefined1 *)(local_28 + 0x34) = 0;
  }
  local_54 = auStack_70;
  FUN_004054a0("monster/drake/particle/mouthsmog.ptl");
  local_2c = FUN_004aab70();
  if (local_2c != 0) {
    local_58 = auStack_70;
    FUN_004054a0("monster/drake/particle/mouthsmog.ptl");
    iVar1 = FUN_004aab70();
    *(undefined1 *)(iVar1 + 0x34) = 0;
  }
  return;
}


/* ==== 0043e160  FUN_0043e160  size=133 ==== */

void FUN_0043e160(void)

{
  undefined4 uVar1;
  int *in_ECX;
  
  if ((char)in_ECX[0x265] == '\0') {
    FUN_004aae50();
    (**(code **)(*in_ECX + 0x108))();
    uVar1 = FUN_004274d0(2);
    FUN_00405520(uVar1);
    (**(code **)(*in_ECX + 0x78))();
    *(undefined1 *)(in_ECX + 0x265) = 1;
  }
  else {
    FUN_00432d30();
  }
  return;
}


/* ==== 0043e1f0  FUN_0043e1f0  size=546 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 * FUN_0043e1f0(int param_1)

{
  undefined4 *in_ECX;
  undefined1 local_114 [256];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070efd0;
  local_10 = ExceptionList;
  local_14 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_0042fb60();
  local_8 = 0;
  *in_ECX = CNugolNeedle::vftable;
  if (*(int *)(param_1 + 0x34) != -1) {
    if (*(int *)(param_1 + 0x34) == 1) {
      game_get_flag_object_01a70();
      FUN_0062fdc0();
    }
    else if (*(int *)(param_1 + 0x34) == 2) {
      FUN_00433140();
    }
    else if (*(int *)(param_1 + 0x34) == 3) {
      game_get_flag_object_01a70();
      FUN_0062fdc0();
    }
    else if (*(int *)(param_1 + 0x34) == 4) {
      game_get_flag_object_01a70();
      FUN_0062fdc0();
    }
    else if (*(int *)(param_1 + 0x34) != 6) {
      if (*(int *)(param_1 + 0x34) == 7) {
        game_get_flag_object_01a70();
        FUN_0062fdc0();
      }
      else if (*(int *)(param_1 + 0x34) == 8) {
        FUN_00433140();
      }
      else if (*(int *)(param_1 + 0x34) == 9) {
        game_get_flag_object_01a70();
        FUN_0062fdc0();
      }
    }
    _memset(local_114,0,0x100);
    FUN_00414e80();
    FUN_004054a0(local_114);
    FUN_00433290();
  }
  ExceptionList = local_10;
  return in_ECX;
}


/* ==== 0043e420  FUN_0043e420  size=241 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_0043e420(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 auStack_60 [16];
  undefined4 uStack_50;
  WorkQueue *pWStack_4c;
  uint uStack_48;
  undefined1 *local_44;
  WorkQueue local_3c [24];
  undefined4 local_24;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070ef4d;
  local_10 = ExceptionList;
  uStack_48 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  pWStack_4c = (WorkQueue *)param_1;
  uStack_50 = 0x43e457;
  local_14 = uStack_48;
  FUN_00431fb0();
  pWStack_4c = (WorkQueue *)0x43e45d;
  iVar1 = FUN_00641430();
  if (iVar1 % 100 < 100) {
    local_44 = auStack_60;
    FUN_004054a0(&DAT_00779a64);
    FUN_00635830();
    pWStack_4c = (WorkQueue *)0x43e491;
    FUN_0042df20();
    local_8 = 0;
    pWStack_4c = (WorkQueue *)&DAT_00779a64;
    uStack_50 = 0x43e4a5;
    FUN_004053a0();
    local_24 = 10000;
    pWStack_4c = (WorkQueue *)0x1;
    uStack_50 = 0x43e4b6;
    FUN_0044e460();
    pWStack_4c = (WorkQueue *)0x0;
    uStack_50 = 0x43e4c0;
    puVar2 = (undefined4 *)game_get_flag_object_01a70();
    *puVar2 = 300;
    pWStack_4c = local_3c;
    uStack_50 = 0x43e4db;
    FUN_0044e230();
    pWStack_4c = (WorkQueue *)0x43e4e6;
    FUN_00635d80();
    local_8 = 0xffffffff;
    pWStack_4c = (WorkQueue *)0x43e4f5;
    Concurrency::details::WorkQueue::~WorkQueue(local_3c);
  }
  ExceptionList = local_10;
  return;
}


/* ==== 0043e520  FUN_0043e520  size=515 ==== */

undefined4 * FUN_0043e520(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *in_ECX;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070eeed;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0042fb60();
  local_8 = 0;
  *in_ECX = CNugolBallchargedlaser::vftable;
  *(undefined1 *)(in_ECX + 0x265) = 1;
  FUN_004274d0();
  FUN_005e9250();
  FUN_0040d490();
  game_get_flag_object_01a70();
  game_loop_helper_0e1f0();
  *(undefined1 *)(in_ECX + 0x265) = 1;
  game_get_flag_object_01a70();
  game_loop_helper_0e1f0();
  FUN_00634ac0();
  FUN_0044de30();
  iVar1 = FUN_0044e2b0();
  for (local_18 = 0; local_18 < (iVar1 << 4) / 100; local_18 = local_18 + 1) {
    uVar2 = FUN_004274d0(1);
    FUN_00405520(uVar2);
    iVar3 = FUN_00630a40();
    *(int *)(iVar3 + 0x40) = in_ECX[0x7d] * 100 * local_18;
    FUN_0040d490();
    uVar2 = FUN_004274d0(2);
    FUN_00405520(uVar2);
    iVar3 = FUN_00630a40();
    *(int *)(iVar3 + 0x40) = in_ECX[0x7d] * 100 * local_18;
    FUN_0040d490();
  }
  FUN_0044e040();
  ExceptionList = local_10;
  return in_ECX;
}


/* ==== 0043e730  FUN_0043e730  size=96 ==== */

undefined4 * FUN_0043e730(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  FUN_0042fb60(param_1);
  *in_ECX = CLotusGrab::vftable;
  in_ECX[0x8b] = in_ECX[0x8b] + 0x14e;
  *(undefined1 *)(in_ECX + 0x268) = 0;
  in_ECX[0x269] = 0;
  in_ECX[0x26a] = 0;
  return in_ECX;
}


/* ==== 0043e790  FUN_0043e790  size=940 ==== */

void FUN_0043e790(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *in_ECX;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  int **ppiStack_54;
  uint uStack_50;
  int *local_48;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  undefined4 local_34;
  undefined4 local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  undefined4 local_1c;
  CMFCColorMenuButton *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070f00d;
  local_10 = ExceptionList;
  uStack_50 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  local_14 = in_ECX;
  if ((char)in_ECX[0x268] != '\0') {
    ppiStack_54 = (int **)0x43ea3c;
    ExceptionList = &local_10;
    FUN_0042dec0();
    if ((*(int *)(local_14[99] + 500) == 1) && (local_14[0x89] < *(int *)(local_14[99] + 0x224))) {
      local_34 = 0xffffffff;
    }
    else if ((*(int *)(local_14[99] + 500) == -1) &&
            (*(int *)(local_14[99] + 0x224) < local_14[0x89])) {
      local_34 = 0xffffffff;
    }
    local_48 = local_14;
    local_44 = local_14[99];
    local_40 = *(undefined4 *)(local_14[99] + 0x224);
    local_3c = *(undefined4 *)(local_14[99] + 0x228);
    iVar2 = local_14[99];
    ppiStack_54 = (int **)0x43eafd;
    iVar4 = (**(code **)(*(int *)local_14[99] + 0x68))();
    local_38 = iVar4 / 2 + *(int *)(iVar2 + 0x22c);
    ppiStack_54 = &local_48;
    uStack_58 = 0x43eb17;
    FUN_00431fb0();
    *(undefined4 *)(local_14[99] + 500) = 1;
    ExceptionList = local_10;
    return;
  }
  if ((*(int *)(*(int *)(param_1 + 4) + 0x204) != 0) &&
     (*(int *)(*(int *)(param_1 + 4) + 0x204) != 100)) {
    return;
  }
  local_18 = *(CMFCColorMenuButton **)(param_1 + 4);
  ppiStack_54 = (int **)0x43e7fe;
  ExceptionList = &local_10;
  cVar1 = FUN_006357d0();
  if (cVar1 == '\0') goto LAB_0043e9d6;
  *(undefined1 *)(local_14 + 0x268) = 1;
  local_14[99] = (int)local_18;
  *(int *)(local_18 + 500) = 1;
  ppiStack_54 = (int **)0x43e83c;
  (**(code **)(*(int *)local_18 + 0x130))();
  ppiStack_54 = (int **)0x43e844;
  CMFCColorMenuButton::Initialize(local_18);
  *(int *)(local_18 + 0x224) = local_14[0x89];
  *(int *)(local_18 + 0x228) = local_14[0x8a];
  ppiStack_54 = (int **)0x43e875;
  iVar2 = (**(code **)(*(int *)local_18 + 0x68))();
  *(int *)(local_18 + 0x22c) = local_14[0x8b] - iVar2 / 2;
  if (*(int *)(local_18 + 0x22c) < 1) {
    *(int *)(local_18 + 0x22c) = 1;
  }
  *(int *)(local_18 + 0x1a4) = 100;
  ppiStack_54 = (int **)0x0;
  uStack_58 = 3;
  uStack_5c = 0x43e8d5;
  (**(code **)(*(int *)local_18 + 0x140))();
  uStack_5c = 0x43e8dc;
  iVar2 = FUN_005e9570();
  if (iVar2 == 0) {
    ppiStack_54 = (int **)0x0;
    uStack_58 = 4;
    uStack_5c = 0x43e8f4;
    (**(code **)(*(int *)local_18 + 0x140))();
    uStack_5c = 0x43e8fb;
    iVar2 = FUN_005e9570();
    if (iVar2 != 0) goto LAB_0043e903;
  }
  else {
LAB_0043e903:
    ppiStack_54 = (int **)0x0;
    uStack_58 = 3;
    uStack_5c = 0x43e917;
    (**(code **)(*(int *)local_18 + 0x140))();
    uStack_5c = 0x43e91e;
    iVar2 = FUN_005e9570();
    if (iVar2 == 0) {
      ppiStack_54 = (int **)0x0;
      uStack_58 = 4;
      uStack_5c = 0x43e94d;
      (**(code **)(*(int *)local_18 + 0x140))();
      uStack_64 = 0x43e954;
      iVar2 = FUN_005e9570();
      if (iVar2 != 0) {
        uStack_5c = 0;
        uStack_60 = 4;
        uStack_64 = 0x43e96c;
        (**(code **)(*(int *)local_18 + 0x138))();
      }
    }
    else {
      ppiStack_54 = (int **)0x0;
      uStack_58 = 3;
      uStack_5c = 0x43e936;
      (**(code **)(*(int *)local_18 + 0x138))();
    }
    uStack_5c = 0;
    uStack_60 = 0x43e97f;
    (**(code **)(*local_14 + 0x8c))();
    uStack_60 = 0x43e98c;
    (**(code **)(*local_14 + 0x58))();
    uStack_60 = 0x43e993;
    iVar2 = FUN_0062fc30();
    uStack_60 = *(undefined4 *)(iVar2 + 0x44);
    uStack_64 = 0x43e9a7;
    (**(code **)(*local_14 + 0x90))();
    uStack_64 = 0;
    uStack_68 = 0x43e9b6;
    (**(code **)(*(int *)local_18 + 0x54))();
  }
  local_20 = (undefined1 *)&uStack_68;
  FUN_00405520(local_18 + 0x134);
  FUN_004c3570();
LAB_0043e9d6:
  local_24 = (undefined1 *)&uStack_68;
  uVar3 = FUN_004274d0(0);
  local_28 = FUN_00405520(uVar3);
  local_8 = 0;
  game_loop_helper_e9240();
  local_8 = 0xffffffff;
  ppiStack_54 = (int **)FUN_005be5d0();
  uStack_58 = 0x43ea2e;
  local_1c = ppiStack_54;
  FUN_00430eb0();
  ExceptionList = local_10;
  return;
}


/* ==== 0043f1d0  FUN_0043f1d0  size=97 ==== */

void FUN_0043f1d0(void)

{
  int iVar1;
  int *in_ECX;
  undefined1 auStack_28 [20];
  undefined4 uStack_14;
  undefined1 *local_10;
  int *local_c;
  
  if (in_ECX[0x6a] == 2) {
    uStack_14 = 0x43f1f5;
    (**(code **)(*in_ECX + 0xb0))();
    uStack_14 = 0x43f1fe;
    iVar1 = FUN_00432b40();
    if (iVar1 != 0) {
      uStack_14 = 0x43f20a;
      local_c = (int *)FUN_00432b40();
      local_10 = auStack_28;
      FUN_004054a0("monster/lotus/lotusani/returntolair.ani");
      (**(code **)(*local_c + 0x78))();
    }
  }
  return;
}


/* ==== 0043f240  FUN_0043f240  size=60 ==== */

undefined4 * FUN_0043f240(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  FUN_0042fb60(param_1);
  *in_ECX = CLotusPierceHead::vftable;
  in_ECX[0x8b] = in_ECX[0x8b] + 0x1fd;
  return in_ECX;
}


/* ==== 0043f280  FUN_0043f280  size=365 ==== */

void FUN_0043f280(int param_1)

{
  int iVar1;
  int *in_ECX;
  undefined1 auStack_30 [20];
  undefined4 uStack_1c;
  undefined1 *local_18;
  int *local_14;
  int local_10;
  
  if (in_ECX[0x6a] == 0) {
    in_ECX[0x88] = in_ECX[0x88] + param_1 * -0x1fd;
    iVar1 = in_ECX[0x88];
    in_ECX[0x88] = in_ECX[0x88] + (iVar1 / 1000) * -1000;
    in_ECX[0x8b] = in_ECX[0x8b] + iVar1 / 1000;
    if (in_ECX[0x8b] < 1) {
      in_ECX[0x8b] = 0;
      in_ECX[0x6a] = 1;
    }
  }
  else if (in_ECX[0x6a] == 1) {
    in_ECX[0x88] = param_1 * 0x1fd + in_ECX[0x88];
    local_10 = in_ECX[0x88] / 1000;
    in_ECX[0x88] = in_ECX[0x88] + local_10 * -1000;
    in_ECX[0x8b] = in_ECX[0x8b] + local_10;
    if (0x1fc < in_ECX[0x8b]) {
      uStack_1c = 0x43f3af;
      (**(code **)(*in_ECX + 0xb0))();
      uStack_1c = 0x43f3b8;
      iVar1 = FUN_00432b40();
      if (iVar1 != 0) {
        uStack_1c = 0x43f3c4;
        local_14 = (int *)FUN_00432b40();
        local_18 = auStack_30;
        FUN_004054a0("monster/lotus/lotusani/returntolair.ani");
        (**(code **)(*local_14 + 0x78))();
      }
    }
  }
  return;
}


/* ==== 0043f4c0  FUN_0043f4c0  size=202 ==== */

void FUN_0043f4c0(int param_1)

{
  int iVar1;
  int *in_ECX;
  undefined1 auStack_2c [20];
  undefined4 uStack_18;
  undefined1 *local_14;
  int *local_10;
  int local_c;
  
  in_ECX[0x86] = in_ECX[0x7d] * 400 * param_1 + in_ECX[0x86];
  local_c = in_ECX[0x86] / 1000;
  in_ECX[0x86] = in_ECX[0x86] + local_c * -1000;
  in_ECX[0x89] = in_ECX[0x89] + local_c;
  if (in_ECX[0x89] < 1) {
    uStack_18 = 0x43f54c;
    (**(code **)(*in_ECX + 0xb0))();
    uStack_18 = 0x43f555;
    iVar1 = FUN_00432b40();
    if (iVar1 != 0) {
      uStack_18 = 0x43f561;
      local_10 = (int *)FUN_00432b40();
      local_14 = auStack_2c;
      FUN_004054a0("monster/lotus/lotusani/returntolair.ani");
      (**(code **)(*local_10 + 0x78))();
    }
  }
  return;
}


/* ==== 0043f7d0  FUN_0043f7d0  size=60 ==== */

undefined4 * FUN_0043f7d0(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  FUN_0042fb60(param_1);
  *in_ECX = CSpiderPoisonObj::vftable;
  *(undefined1 *)(in_ECX + 0x268) = 0;
  in_ECX[0x1f7] = 200;
  return in_ECX;
}


/* ==== 0043f810  FUN_0043f810  size=114 ==== */

void FUN_0043f810(undefined4 param_1)

{
  int *in_ECX;
  int *piVar1;
  
  if ((char)in_ECX[0x268] == '\0') {
    *(undefined1 *)(in_ECX + 0x268) = 1;
    FUN_00431fb0(param_1);
    piVar1 = in_ECX + 0x267;
    FUN_004d1b30(piVar1);
    FUN_00517f40(piVar1);
    (**(code **)(*in_ECX + 0x108))(0);
    *(undefined1 *)(in_ECX + 0x265) = 1;
  }
  else {
    FUN_00431fb0(param_1);
  }
  return;
}


/* ==== 0043f890  FUN_0043f890  size=326 ==== */

undefined4 * FUN_0043f890(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070f0ed;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0042fb60();
  local_8 = 0;
  *in_ECX = CHunterspittle::vftable;
  FUN_004054a0("monster/hunter/particle/hunterspittle.ptl");
  local_8._0_1_ = 1;
  game_loop_helper_e9240();
  local_8._0_1_ = 0;
  iVar1 = FUN_005b0aa0();
  *(undefined4 *)(iVar1 + 0x108) = *(undefined4 *)(param_1 + 0x34);
  FUN_004054a0("monster/hunter/particle/hunterspittle.ptl");
  FUN_00433290();
  *(undefined4 *)(iVar1 + 0x108) = 0;
  *(undefined1 *)(in_ECX + 0x268) = 0;
  if (*(int *)(*(int *)(param_1 + 4) + 0x1e4) == 0xc9) {
    uVar2 = FUN_004274d0(0);
    FUN_00405520(uVar2);
    local_8._0_1_ = 2;
    game_loop_helper_e9240();
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_005be5d0();
    FUN_00430eb0();
  }
  in_ECX[0x1f7] = 200;
  ExceptionList = local_10;
  return in_ECX;
}


/* ==== 0043fd50  FUN_0043fd50  size=47 ==== */

undefined4 * FUN_0043fd50(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  FUN_0042fb60(param_1);
  *in_ECX = CSkeletonHead::vftable;
  *(undefined1 *)(in_ECX + 0x238) = 1;
  return in_ECX;
}


/* ==== 0043fd80  FUN_0043fd80  size=38 ==== */

void FUN_0043fd80(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x22c) < 1) {
    *(undefined4 *)(in_ECX + 0x22c) = 0;
  }
  return;
}


/* ==== 0043fdb0  FUN_0043fdb0  size=50 ==== */

undefined4 * FUN_0043fdb0(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  FUN_0042fb60(param_1);
  *in_ECX = CSkeletonMagicMirror::vftable;
  in_ECX[0x268] = 0;
  return in_ECX;
}


/* ==== 0043fdf0  FUN_0043fdf0  size=83 ==== */

void FUN_0043fdf0(int param_1)

{
  int *piVar1;
  int *in_ECX;
  
  in_ECX[0x268] = in_ECX[0x268] + param_1;
  piVar1 = (int *)game_get_flag_object_01a70(0);
  if (*piVar1 <= in_ECX[0x268]) {
    (**(code **)(*in_ECX + 0xb0))();
  }
  return;
}


/* ==== 0043fe50  FUN_0043fe50  size=47 ==== */

undefined4 * FUN_0043fe50(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  FUN_0042fb60(param_1);
  *in_ECX = CSkeletonSummonbone::vftable;
  *(undefined1 *)(in_ECX + 0x238) = 1;
  return in_ECX;
}


/* ==== 0043fe80  FUN_0043fe80  size=675 ==== */

/* WARNING: Removing unreachable block (ram,0x0043fea1) */
/* WARNING: Removing unreachable block (ram,0x0043ff0d) */
/* WARNING: Removing unreachable block (ram,0x0043ff04) */

void FUN_0043fe80(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  int *in_ECX;
  
  if (in_ECX[0x267] == 0) {
    return;
  }
  *(undefined1 *)((int)in_ECX + 0xc1) = 0;
  FUN_004a78e0(param_1);
  cVar1 = FUN_00634bb0(*(undefined4 *)(in_ECX[0x267] + 0x40),in_ECX[0x8a]);
  if (cVar1 == '\0') {
    uVar2 = FUN_00634ac0(*(undefined4 *)(in_ECX[0x267] + 0x40),in_ECX[0x8a],0);
    cVar1 = FUN_00634570(uVar2);
    if (cVar1 == '\0') {
      cVar1 = FUN_00634bb0(in_ECX[0x89],*(undefined4 *)(in_ECX[0x267] + 0x44));
      if (cVar1 == '\0') {
        uVar2 = FUN_00634ac0(in_ECX[0x89],*(undefined4 *)(in_ECX[0x267] + 0x44),0);
        cVar1 = FUN_00634570(uVar2);
        if (cVar1 == '\0') {
          cVar1 = FUN_00634bb0(*(undefined4 *)(in_ECX[0x267] + 0x40),
                               *(undefined4 *)(in_ECX[0x267] + 0x44));
          if (cVar1 == '\0') {
            uVar2 = FUN_00634ac0(*(undefined4 *)(in_ECX[0x267] + 0x40),
                                 *(undefined4 *)(in_ECX[0x267] + 0x44),0);
            cVar1 = FUN_00634570(uVar2);
            if (cVar1 == '\0') goto LAB_00440077;
          }
          *(undefined1 *)((int)in_ECX + 0xc1) = 1;
          goto LAB_00440077;
        }
      }
      *(undefined1 *)((int)in_ECX + 0xc1) = 1;
      goto LAB_00440077;
    }
  }
  *(undefined1 *)((int)in_ECX + 0xc1) = 1;
LAB_00440077:
  in_ECX[0x8b] = *(int *)(in_ECX[0x267] + 0x48);
  if (*(char *)((int)in_ECX + 0xc1) == '\0') {
    in_ECX[0x89] = *(int *)(in_ECX[0x267] + 0x40);
    in_ECX[0x8a] = *(int *)(in_ECX[0x267] + 0x44);
    if ((*(char *)(in_ECX[0x267] + 0x18) != '\0') || (cVar1 = FUN_004a8a00(), cVar1 != '\0')) {
      in_ECX[0x8b] = 0;
      (**(code **)(*in_ECX + 0xb0))();
    }
  }
  else {
    (**(code **)(*in_ECX + 0xb0))();
  }
  return;
}


/* ==== 00440130  FUN_00440130  size=49 ==== */

undefined4 FUN_00440130(undefined4 param_1)

{
  undefined4 uVar1;
  int *in_ECX;
  
  uVar1 = img_path_loader_12(param_1);
  (**(code **)(*in_ECX + 0xb0))();
  return uVar1;
}


/* ==== 00440170  FUN_00440170  size=260 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 * FUN_00440170(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  undefined1 auStack_6c [16];
  undefined4 uStack_5c;
  undefined4 uStack_58;
  uint uStack_54;
  function<void___cdecl(void)> local_2c [24];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070f12d;
  local_10 = ExceptionList;
  uStack_54 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uStack_58 = param_1;
  uStack_5c = 0x4401a8;
  local_14 = uStack_54;
  FUN_0042fb60();
  local_8 = 0;
  *in_ECX = CSkeletonToothsFish::vftable;
  uVar1 = FUN_004274d0(0);
  FUN_00405520(uVar1);
  FUN_004c7590(auStack_6c);
  local_8._0_1_ = 1;
  FUN_00405520(in_ECX[0x25d]);
  local_8._0_1_ = 0;
  FUN_004c7af0(local_2c);
  local_8._0_1_ = 2;
  FUN_00405520();
  FUN_00433290();
  local_8 = (uint)local_8._1_3_ << 8;
  uStack_58 = 0x44024d;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_2c);
  ExceptionList = local_10;
  return in_ECX;
}


/* ==== 00440280  FUN_00440280  size=37 ==== */

undefined4 * FUN_00440280(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  FUN_0042fb60(param_1);
  *in_ECX = CSkeletonBoomerange1::vftable;
  return in_ECX;
}


/* ==== 004402b0  FUN_004402b0  size=60 ==== */

void FUN_004402b0(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  FUN_00431fb0(param_1);
  uVar2 = 0xffffffff;
  puVar1 = (undefined4 *)game_get_flag_object_01a70(0);
  FUN_0063c390(1,*puVar1,uVar2);
  return;
}


/* ==== 004402f0  FUN_004402f0  size=938 ==== */

undefined4 * FUN_004402f0(int param_1)

{
  int iVar1;
  float10 fVar2;
  undefined1 auStack_9c [16];
  undefined4 uStack_8c;
  int iStack_88;
  uint uStack_84;
  undefined4 local_80;
  undefined1 *local_7c;
  undefined4 local_78;
  undefined1 *local_74;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  int local_1c;
  int local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070f17d;
  local_10 = ExceptionList;
  uStack_84 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iStack_88 = param_1;
  uStack_8c = 0x440324;
  FUN_0042fb60();
  local_8 = 0;
  *local_14 = CSkeletonBouncer1::vftable;
  *(undefined1 *)(local_14 + 0x268) = 0;
  if (*(int *)(param_1 + 0x34) != -1) {
    *(undefined1 *)(local_14 + 0x268) = 1;
    local_74 = auStack_9c;
    local_78 = FUN_004054a0("monster/skeleton/particle/bouncer.ptl");
    local_8._0_1_ = 1;
    game_loop_helper_e9240();
    local_8 = (uint)local_8._1_3_ << 8;
    local_1c = FUN_005b0aa0();
    local_18 = *(int *)(local_1c + 0x14);
    if (*(int *)(param_1 + 0x34) == 0) {
      local_20 = (float)(*(int *)(param_1 + 0x1c) * -1000 * local_18);
      iStack_88 = 0x3c;
      uStack_8c = 0x4403b5;
      fVar2 = (float10)FUN_004a1ec0();
      local_24 = (float)fVar2;
      local_14[0x8c] = (int)(local_20 * local_24);
      local_28 = (float)(*(int *)(param_1 + 0x1c) * 1000 * local_18);
      iStack_88 = 0x3c;
      uStack_8c = 0x4403f0;
      fVar2 = (float10)FUN_004a1e90();
      local_2c = (float)fVar2;
      local_14[0x8d] = (int)(local_28 * local_2c);
    }
    else if (*(int *)(param_1 + 0x34) == 1) {
      local_30 = (float)(*(int *)(param_1 + 0x1c) * -1000 * local_18);
      iStack_88 = 0x1e;
      uStack_8c = 0x44043d;
      fVar2 = (float10)FUN_004a1ec0();
      local_34 = (float)fVar2;
      local_14[0x8c] = (int)(local_30 * local_34);
      local_38 = (float)(*(int *)(param_1 + 0x1c) * 1000 * local_18);
      iStack_88 = 0x1e;
      uStack_8c = 0x440478;
      fVar2 = (float10)FUN_004a1e90();
      local_3c = (float)fVar2;
      local_14[0x8d] = (int)(local_38 * local_3c);
    }
    else if (*(int *)(param_1 + 0x34) == 2) {
      local_40 = (float)(*(int *)(param_1 + 0x1c) * -1000 * local_18);
      iStack_88 = 0;
      uStack_8c = 0x4404c5;
      fVar2 = (float10)FUN_004a1ec0();
      local_44 = (float)fVar2;
      local_14[0x8c] = (int)(local_40 * local_44);
      local_48 = (float)(*(int *)(param_1 + 0x1c) * 1000 * local_18);
      iStack_88 = 0;
      uStack_8c = 0x440500;
      fVar2 = (float10)FUN_004a1e90();
      local_4c = (float)fVar2;
      local_14[0x8d] = (int)(local_48 * local_4c);
    }
    else if (*(int *)(param_1 + 0x34) == 3) {
      local_50 = (float)(*(int *)(param_1 + 0x1c) * -1000 * local_18);
      iStack_88 = 0x14a;
      uStack_8c = 0x440554;
      fVar2 = (float10)FUN_004a1ec0();
      local_54 = (float)fVar2;
      local_14[0x8c] = (int)(local_50 * local_54);
      local_58 = (float)(*(int *)(param_1 + 0x1c) * 1000 * local_18);
      iStack_88 = 0x14a;
      uStack_8c = 0x440592;
      fVar2 = (float10)FUN_004a1e90();
      local_5c = (float)fVar2;
      local_14[0x8d] = (int)(local_58 * local_5c);
    }
    else if (*(int *)(param_1 + 0x34) == 4) {
      local_60 = (float)(*(int *)(param_1 + 0x1c) * -1000 * local_18);
      iStack_88 = 300;
      uStack_8c = 0x4405e6;
      fVar2 = (float10)FUN_004a1ec0();
      local_64 = (float)fVar2;
      local_14[0x8c] = (int)(local_60 * local_64);
      local_68 = (float)(*(int *)(param_1 + 0x1c) * 1000 * local_18);
      iStack_88 = 300;
      uStack_8c = 0x440624;
      fVar2 = (float10)FUN_004a1e90();
      local_6c = (float)fVar2;
      local_14[0x8d] = (int)(local_68 * local_6c);
    }
  }
  local_7c = auStack_9c;
  local_80 = FUN_004054a0("monster/skeleton/particle/bouncer.ptl");
  local_8._0_1_ = 2;
  game_loop_helper_e9240();
  local_8 = (uint)local_8._1_3_ << 8;
  iVar1 = FUN_005b0aa0();
  local_14[0x266] = *(undefined4 *)(iVar1 + 0xb4);
  ExceptionList = local_10;
  return local_14;
}


/* ==== 004406a0  FUN_004406a0  size=137 ==== */

void FUN_004406a0(int param_1)

{
  int in_ECX;
  
  *(int *)(in_ECX + 0x218) = *(int *)(in_ECX + 0x230) * param_1 + *(int *)(in_ECX + 0x218);
  *(int *)(in_ECX + 0x230) = *(int *)(in_ECX + 0x23c) * param_1 + *(int *)(in_ECX + 0x230);
  *(int *)(in_ECX + 0x21c) = *(int *)(in_ECX + 0x234) * param_1 + *(int *)(in_ECX + 0x21c);
  *(int *)(in_ECX + 0x234) = *(int *)(in_ECX + 0x240) * param_1 + *(int *)(in_ECX + 0x234);
  return;
}


/* ==== 00440730  FUN_00440730  size=1403 ==== */

void FUN_00440730(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *in_ECX;
  int local_10;
  int local_c;
  
  iVar2 = in_ECX[0x86] / 1000000;
  iVar3 = in_ECX[0x87] / 1000000;
  if ((iVar2 == 0) && (iVar3 == 0)) {
    return;
  }
  local_c = in_ECX[0x89] + iVar2;
  local_10 = in_ECX[0x8a] + iVar3;
  in_ECX[0x86] = in_ECX[0x86] + iVar2 * -1000000;
  in_ECX[0x87] = in_ECX[0x87] + iVar3 * -1000000;
  cVar1 = FUN_00634bb0();
  if (cVar1 == '\0') {
    FUN_00634ac0();
    cVar1 = FUN_00634570();
    if (cVar1 != '\0') goto LAB_0044080d;
  }
  else {
LAB_0044080d:
    local_c = in_ECX[0x89];
    in_ECX[0x86] = 0;
    if ((in_ECX[0x8c] < 1) && (-1 < in_ECX[0x8d])) {
      in_ECX[0x8c] = -in_ECX[0x8c];
    }
    else if ((in_ECX[0x8c] < 0) || (in_ECX[0x8d] < 0)) {
      if ((in_ECX[0x8c] < 0) || (0 < in_ECX[0x8d])) {
        if ((in_ECX[0x8c] < 1) && (in_ECX[0x8d] < 1)) {
          in_ECX[0x8c] = -in_ECX[0x8c];
        }
      }
      else {
        in_ECX[0x8c] = -in_ECX[0x8c];
      }
    }
    else {
      in_ECX[0x8c] = -in_ECX[0x8c];
    }
    FUN_0040d5f0();
    uVar4 = FUN_004274d0(0);
    FUN_00405520(uVar4);
    (**(code **)(*in_ECX + 0x78))();
  }
  cVar1 = FUN_00634bb0();
  if (cVar1 == '\0') {
    FUN_00634ac0();
    cVar1 = FUN_00634570();
    if (cVar1 != '\0') goto LAB_00440964;
  }
  else {
LAB_00440964:
    local_10 = in_ECX[0x8a];
    in_ECX[0x87] = 0;
    if ((in_ECX[0x8c] < 1) && (-1 < in_ECX[0x8d])) {
      in_ECX[0x8d] = -in_ECX[0x8d];
    }
    else if ((in_ECX[0x8c] < 0) || (in_ECX[0x8d] < 0)) {
      if ((in_ECX[0x8c] < 0) || (0 < in_ECX[0x8d])) {
        if ((in_ECX[0x8c] < 1) && (in_ECX[0x8d] < 1)) {
          in_ECX[0x8d] = -in_ECX[0x8d];
        }
      }
      else {
        in_ECX[0x8d] = -in_ECX[0x8d];
      }
    }
    else {
      in_ECX[0x8d] = -in_ECX[0x8d];
    }
    FUN_0040d5f0();
    uVar4 = FUN_004274d0(0);
    FUN_00405520(uVar4);
    (**(code **)(*in_ECX + 0x78))();
  }
  cVar1 = FUN_00634bb0();
  if (cVar1 == '\0') {
    FUN_00634ac0();
    cVar1 = FUN_00634570();
    if (cVar1 == '\0') goto LAB_00440c8e;
  }
  local_c = in_ECX[0x89];
  in_ECX[0x86] = 0;
  local_10 = in_ECX[0x8a];
  in_ECX[0x87] = 0;
  if ((in_ECX[0x8c] < 1) && (-1 < in_ECX[0x8d])) {
    in_ECX[0x8c] = -in_ECX[0x8c];
  }
  else if ((in_ECX[0x8c] < 0) || (in_ECX[0x8d] < 0)) {
    if ((in_ECX[0x8c] < 0) || (0 < in_ECX[0x8d])) {
      if ((in_ECX[0x8c] < 1) && (in_ECX[0x8d] < 1)) {
        in_ECX[0x8c] = -in_ECX[0x8c];
      }
    }
    else {
      in_ECX[0x8c] = -in_ECX[0x8c];
    }
  }
  else {
    in_ECX[0x8c] = -in_ECX[0x8c];
  }
  if ((in_ECX[0x8c] < 1) && (-1 < in_ECX[0x8d])) {
    in_ECX[0x8d] = -in_ECX[0x8d];
  }
  else if ((in_ECX[0x8c] < 0) || (in_ECX[0x8d] < 0)) {
    if ((in_ECX[0x8c] < 0) || (0 < in_ECX[0x8d])) {
      if ((in_ECX[0x8c] < 1) && (in_ECX[0x8d] < 1)) {
        in_ECX[0x8d] = -in_ECX[0x8d];
      }
    }
    else {
      in_ECX[0x8d] = -in_ECX[0x8d];
    }
  }
  else {
    in_ECX[0x8d] = -in_ECX[0x8d];
  }
  FUN_0040d5f0();
  uVar4 = FUN_004274d0(0);
  FUN_00405520(uVar4);
  (**(code **)(*in_ECX + 0x78))();
LAB_00440c8e:
  in_ECX[0x89] = local_c;
  in_ECX[0x8a] = local_10;
  return;
}


/* ==== 00440cb0  FUN_00440cb0  size=74 ==== */

void FUN_00440cb0(undefined4 param_1)

{
  int *in_ECX;
  
  if ((in_ECX[0x8c] != 0) || (in_ECX[0x8d] != 0)) {
    (**(code **)(*in_ECX + 0xec))(param_1);
    (**(code **)(*in_ECX + 0xf0))();
  }
  return;
}


/* ==== 00440d00  FUN_00440d00  size=119 ==== */

void FUN_00440d00(void)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  int local_c;
  
  *(undefined1 *)(in_ECX + 0x9a0) = 1;
  *(int *)(in_ECX + 0x230) = -**(int **)(in_ECX + 0x99c);
  cVar1 = FUN_006412c0();
  if (cVar1 == '\0') {
    local_c = -*(int *)(in_ECX + 0x230);
  }
  else {
    local_c = *(int *)(in_ECX + 0x230);
  }
  *(int *)(in_ECX + 0x234) = local_c;
  iVar2 = in_ECX + 0x99c;
  FUN_004d1b30(iVar2);
  FUN_00517f40(iVar2);
  return;
}


/* ==== 00440d80  FUN_00440d80  size=469 ==== */

/* WARNING: Removing unreachable block (ram,0x00440da1) */
/* WARNING: Removing unreachable block (ram,0x00440e0d) */
/* WARNING: Removing unreachable block (ram,0x00440e04) */

void FUN_00440d80(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  int *in_ECX;
  
  if (in_ECX[0x267] == 0) {
    return;
  }
  FUN_004a78e0(param_1);
  iVar1 = in_ECX[0x89];
  iVar2 = in_ECX[0x8a];
  in_ECX[0x89] = *(int *)(in_ECX[0x267] + 0x40);
  in_ECX[0x8a] = *(int *)(in_ECX[0x267] + 0x44);
  cVar3 = FUN_00634bb0(in_ECX[0x89],iVar2);
  if (cVar3 == '\0') {
    uVar4 = FUN_00634ac0(in_ECX[0x89],iVar2,0);
    cVar3 = FUN_00634570(uVar4);
    if (cVar3 == '\0') goto LAB_00440ef6;
  }
  in_ECX[0x89] = iVar1;
  if ((char)in_ECX[0x268] == '\0') {
    (**(code **)(*in_ECX + 0x110))();
    return;
  }
LAB_00440ef6:
  in_ECX[0x8b] = *(int *)(in_ECX[0x267] + 0x48);
  if ((*(char *)(in_ECX[0x267] + 0x18) != '\0') || (cVar3 = FUN_004a8a00(), cVar3 != '\0')) {
    in_ECX[0x8b] = 0;
    (**(code **)(*in_ECX + 0xb0))();
  }
  return;
}


/* ==== 00440f60  FUN_00440f60  size=243 ==== */

void FUN_00440f60(undefined4 param_1)

{
  int *in_ECX;
  
  FUN_00431fb0(param_1);
  if ((char)in_ECX[0x268] == '\0') {
    (**(code **)(*in_ECX + 0x110))();
  }
  else if ((in_ECX[0x8c] < 1) && (-1 < in_ECX[0x8d])) {
    in_ECX[0x8c] = -in_ECX[0x8c];
  }
  else if ((in_ECX[0x8c] < 0) || (in_ECX[0x8d] < 0)) {
    if ((in_ECX[0x8c] < 0) || (0 < in_ECX[0x8d])) {
      if ((in_ECX[0x8c] < 1) && (in_ECX[0x8d] < 1)) {
        in_ECX[0x8d] = -in_ECX[0x8d];
      }
    }
    else {
      in_ECX[0x8c] = -in_ECX[0x8c];
    }
  }
  else {
    in_ECX[0x8d] = -in_ECX[0x8d];
  }
  return;
}


/* ==== 00441060  FUN_00441060  size=37 ==== */

undefined4 * FUN_00441060(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  FUN_004402f0(param_1);
  *in_ECX = CSkeletonBouncer2::vftable;
  return in_ECX;
}


/* ==== 00441090  FUN_00441090  size=332 ==== */

void FUN_00441090(void)

{
  int iVar1;
  int *in_ECX;
  
  (**(code **)(*in_ECX + 0xb0))();
  iVar1 = FUN_0042f340(in_ECX,0,0,0,0x76cc,in_ECX[0x7d]);
  *(undefined4 *)(iVar1 + 0x34) = 0;
  iVar1 = FUN_0042f340(in_ECX,0,0,0,0x76cc,in_ECX[0x7d]);
  *(undefined4 *)(iVar1 + 0x34) = 1;
  iVar1 = FUN_0042f340(in_ECX,0,0,0,0x76cc,in_ECX[0x7d]);
  *(undefined4 *)(iVar1 + 0x34) = 2;
  iVar1 = FUN_0042f340(in_ECX,0,0,0,0x76cc,in_ECX[0x7d]);
  *(undefined4 *)(iVar1 + 0x34) = 3;
  iVar1 = FUN_0042f340(in_ECX,0,0,0,0x76cc,in_ECX[0x7d]);
  *(undefined4 *)(iVar1 + 0x34) = 4;
  return;
}


/* ==== 004411e0  FUN_004411e0  size=373 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 * FUN_004411e0(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 *local_30;
  function<void___cdecl(void)> local_2c [24];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070f1b5;
  local_10 = ExceptionList;
  uVar1 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar1;
  FUN_0042fb60(param_1);
  local_8 = 0;
  *local_30 = CBantuRiseBone::vftable;
  local_30[0x268] = 0xffffffff;
  local_30[0x269] = 0xffffffff;
  iVar2 = FUN_00432b40(uVar1);
  if (iVar2 != 0) {
    iVar2 = FUN_00432b40(uVar1);
    local_30[0x268] = *(undefined4 *)(iVar2 + 0x224);
    iVar2 = FUN_00432b40();
    local_30[0x269] = *(undefined4 *)(iVar2 + 0x228);
  }
  FUN_004054a0("monster/bantu/bmlanimation/bonethrow/skel-at.ani");
  local_8._0_1_ = 1;
  local_34 = FUN_005e9250(local_2c);
  puVar3 = (undefined4 *)FUN_004021b0(local_3c);
  local_38 = *puVar3;
  CStringT<>(local_40,local_38,&local_34);
  local_8 = (uint)local_8._1_3_ << 8;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_2c);
  piVar4 = (int *)game_get_flag_object_01a70(1);
  *(undefined4 *)(*piVar4 + 0x90) = 0;
  uVar5 = 0;
  game_get_flag_object_01a70(1);
  iVar2 = FUN_0040d680(uVar5);
  piVar4 = (int *)game_get_flag_object_01a70(1);
  *(undefined4 *)(*piVar4 + 0x98) = *(undefined4 *)(iVar2 + 0x44);
  ExceptionList = local_10;
  return local_30;
}


/* ==== 00441360  FUN_00441360  size=1974 ==== */

void FUN_00441360(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *in_ECX;
  
  in_ECX[0x88] = param_1 * 1000 + in_ECX[0x88];
  iVar1 = in_ECX[0x88];
  in_ECX[0x88] = in_ECX[0x88] + (iVar1 / 1000) * -1000;
  in_ECX[0x8b] = in_ECX[0x8b] + iVar1 / 1000;
  if (499 < in_ECX[0x8b]) {
    (**(code **)(*in_ECX + 0xb0))();
    if ((in_ECX[0x268] != -1) && (in_ECX[0x269] != -1)) {
      uVar2 = FUN_00432b40((float)(in_ECX[0x268] + in_ECX[0x7d] * -0x46),
                           (float)(in_ECX[0x269] + 0xd),0x76d2,1,in_ECX[0x7d],100);
      FUN_0042f450(uVar2);
      uVar2 = FUN_00432b40((float)(in_ECX[0x268] + in_ECX[0x7d] * -0x1d),(float)(in_ECX[0x269] + -3)
                           ,0x76d2,1,in_ECX[0x7d],100);
      FUN_0042f450(uVar2);
      uVar2 = FUN_00432b40((float)(in_ECX[0x268] + in_ECX[0x7d] * -10),
                           (float)(in_ECX[0x269] + -0x14),0x76d2,1,in_ECX[0x7d],100);
      FUN_0042f450(uVar2);
      uVar2 = FUN_00432b40((float)(in_ECX[0x268] + in_ECX[0x7d] * 0x11),
                           (float)(in_ECX[0x269] + -0x2f),0x76d2,1,in_ECX[0x7d],100);
      FUN_0042f450(uVar2);
      uVar2 = FUN_00432b40((float)(in_ECX[0x268] + in_ECX[0x7d] * 9),(float)(in_ECX[0x269] + 0x43),
                           0x76d2,1,in_ECX[0x7d],100);
      FUN_0042f450(uVar2);
      uVar2 = FUN_00432b40((float)(in_ECX[0x268] + in_ECX[0x7d] * 0x1c),
                           (float)(in_ECX[0x269] + 0x31),0x76d2,1,in_ECX[0x7d],100);
      FUN_0042f450(uVar2);
      uVar2 = FUN_00432b40((float)(in_ECX[0x268] + in_ECX[0x7d] * 0x26),(float)(in_ECX[0x269] + 0xc)
                           ,0x76d2,1,in_ECX[0x7d],100);
      FUN_0042f450(uVar2);
      uVar2 = FUN_00432b40((float)(in_ECX[0x268] + in_ECX[0x7d] * 0x24),(float)(in_ECX[0x269] + 3),
                           0x76d2,1,in_ECX[0x7d],100);
      FUN_0042f450(uVar2);
      uVar2 = FUN_00432b40((float)(in_ECX[0x268] + in_ECX[0x7d] * 0x47),(float)(in_ECX[0x269] + 0xf)
                           ,0x76d2,1,in_ECX[0x7d],100);
      FUN_0042f450(uVar2);
      uVar2 = FUN_00432b40((float)(in_ECX[0x268] + in_ECX[0x7d] * 0x4b),(float)(in_ECX[0x269] + 0xc)
                           ,0x76d2,1,in_ECX[0x7d],100);
      FUN_0042f450(uVar2);
      uVar2 = FUN_00432b40((float)(in_ECX[0x268] + in_ECX[0x7d] * 0x51),
                           (float)(in_ECX[0x269] + 0x46),0x76d2,1,in_ECX[0x7d],100);
      FUN_0042f450(uVar2);
      uVar2 = FUN_00432b40((float)(in_ECX[0x268] + in_ECX[0x7d] * 0x45),
                           (float)(in_ECX[0x269] + -0x1d),0x76d2,1,in_ECX[0x7d],100);
      FUN_0042f450(uVar2);
      uVar2 = FUN_00432b40((float)(in_ECX[0x268] + in_ECX[0x7d] * 100),
                           (float)(in_ECX[0x269] + -0x18),0x76d2,1,in_ECX[0x7d],100);
      FUN_0042f450(uVar2);
      uVar2 = FUN_00432b40((float)(in_ECX[0x268] + in_ECX[0x7d] * 0x78),
                           (float)(in_ECX[0x269] + -0x1b),0x76d2,1,in_ECX[0x7d],100);
      FUN_0042f450(uVar2);
      uVar2 = FUN_00432b40((float)(in_ECX[0x268] + in_ECX[0x7d] * 0x89),
                           (float)(in_ECX[0x269] + -0x31),0x76d2,1,in_ECX[0x7d],100);
      FUN_0042f450(uVar2);
      uVar2 = FUN_00432b40((float)(in_ECX[0x268] + in_ECX[0x7d] * 0x87),(float)(in_ECX[0x269] + 0xd)
                           ,0x76d2,1,in_ECX[0x7d],100);
      FUN_0042f450(uVar2);
      uVar2 = FUN_00432b40((float)(in_ECX[0x268] + in_ECX[0x7d] * 0xc0),
                           (float)(in_ECX[0x269] + 0x41),0x76d2,1,in_ECX[0x7d],100);
      FUN_0042f450(uVar2);
      uVar2 = FUN_00432b40((float)(in_ECX[0x268] + in_ECX[0x7d] * 0xbc),
                           (float)(in_ECX[0x269] + -0x23),0x76d2,1,in_ECX[0x7d],100);
      FUN_0042f450(uVar2);
      uVar2 = FUN_00432b40((float)(in_ECX[0x268] + in_ECX[0x7d] * 0xd7),
                           (float)(in_ECX[0x269] + -0x1d),0x76d2,1,in_ECX[0x7d],100);
      FUN_0042f450(uVar2);
      uVar2 = FUN_00432b40((float)(in_ECX[0x268] + in_ECX[0x7d] * 0xf8),
                           (float)(in_ECX[0x269] + 0x2c),0x76d2,1,in_ECX[0x7d],100);
      FUN_0042f450(uVar2);
    }
  }
  return;
}


/* ==== 00441b20  FUN_00441b20  size=50 ==== */

undefined4 * FUN_00441b20(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  FUN_0042fb60(param_1);
  *in_ECX = CBantuFallBone::vftable;
  in_ECX[0x8b] = 500;
  return in_ECX;
}


/* ==== 00441b60  FUN_00441b60  size=139 ==== */

void FUN_00441b60(int param_1)

{
  int iVar1;
  int *in_ECX;
  
  in_ECX[0x88] = in_ECX[0x88] + param_1 * -1000;
  iVar1 = in_ECX[0x88];
  in_ECX[0x88] = in_ECX[0x88] + (iVar1 / 1000) * -1000;
  in_ECX[0x8b] = in_ECX[0x8b] + iVar1 / 1000;
  if (in_ECX[0x8b] < 1) {
    (**(code **)(*in_ECX + 0xb0))();
  }
  return;
}


/* ==== 00441bf0  FUN_00441bf0  size=72 ==== */

undefined4 * FUN_00441bf0(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  FUN_0042fb60(param_1);
  *in_ECX = CLabinasnowfall::vftable;
  in_ECX[0x268] = param_1;
  *(undefined1 *)(in_ECX + 0x265) = 1;
  in_ECX[0x8b] = 500;
  return in_ECX;
}


/* ==== 00441c40  FUN_00441c40  size=37 ==== */

void FUN_00441c40(void)

{
  int in_ECX;
  
  FUN_00432d30();
  FUN_004aae50(*(undefined4 *)(in_ECX + 0x9a0));
  return;
}


/* ==== 00441c70  FUN_00441c70  size=256 ==== */

void FUN_00441c70(int param_1)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  undefined4 uVar3;
  
  if (0 < *(int *)(in_ECX + 0x22c)) {
    piVar1 = (int *)game_get_flag_object_01a70(0);
    *(int *)(in_ECX + 0x220) = *(int *)(in_ECX + 0x220) - *piVar1 * param_1;
    iVar2 = *(int *)(in_ECX + 0x220) / 1000;
    *(int *)(in_ECX + 0x220) = *(int *)(in_ECX + 0x220) + iVar2 * -1000;
    *(int *)(in_ECX + 0x22c) = *(int *)(in_ECX + 0x22c) + iVar2;
    if (*(int *)(in_ECX + 0x22c) < 1) {
      *(undefined4 *)(in_ECX + 0x22c) = 0;
      piVar1 = (int *)game_get_flag_object_01a70(0);
      *(undefined4 *)(*piVar1 + 0x90) = 1;
      uVar3 = 1;
      game_get_flag_object_01a70(0);
      iVar2 = FUN_0040d680(uVar3);
      piVar1 = (int *)game_get_flag_object_01a70(0);
      *(undefined4 *)(*piVar1 + 0x98) = *(undefined4 *)(iVar2 + 0x44);
    }
  }
  return;
}


/* ==== 00441d70  FUN_00441d70  size=37 ==== */

undefined4 * FUN_00441d70(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  FUN_0042fb60(param_1);
  *in_ECX = RatThrow::vftable;
  return in_ECX;
}


/* ==== 00441da0  FUN_00441da0  size=99 ==== */

void FUN_00441da0(void)

{
  int iVar1;
  int in_ECX;
  
  game_loop_helper_e9240(0x437,*(undefined4 *)(in_ECX + 0x224),*(undefined4 *)(in_ECX + 0x228),0,100,0,1,0x5dc
               ,3000);
  iVar1 = FUN_005d1b00();
  iVar1 = FUN_0053c720(0x437,*(undefined4 *)(iVar1 + 0x2b0));
  *(undefined1 *)(iVar1 + 0x30) = 0;
  FUN_00432d30();
  return;
}


/* ==== 00441e10  FUN_00441e10  size=135 ==== */

undefined4 * FUN_00441e10(undefined4 param_1)

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
  uStack_24 = 0x441e44;
  FUN_0042fb60();
  local_8 = 0;
  *local_14 = RatDrop::vftable;
  local_14[0x8b] = 500;
  local_18 = auStack_34;
  FUN_004054a0("monster/thief/particle/ratdrop.ptl");
  FUN_00433290();
  ExceptionList = local_10;
  return local_14;
}


/* ==== 00441ea0  FUN_00441ea0  size=37 ==== */

undefined4 * FUN_00441ea0(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  FUN_0042fb60(param_1);
  *in_ECX = Poisonmissile::vftable;
  return in_ECX;
}


/* ==== 00441ed0  FUN_00441ed0  size=20 ==== */

void FUN_00441ed0(void)

{
  FUN_00432d30();
  return;
}


/* ==== 00442090  FUN_00442090  size=703 ==== */

/* WARNING: Removing unreachable block (ram,0x004420b1) */
/* WARNING: Removing unreachable block (ram,0x0044211d) */
/* WARNING: Removing unreachable block (ram,0x00442114) */

void FUN_00442090(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  int *in_ECX;
  
  if (in_ECX[0x267] == 0) {
    return;
  }
  FUN_004a78e0(param_1);
  *(undefined1 *)((int)in_ECX + 0xc1) = 0;
  if ((char)in_ECX[0x30] != '\0') {
    cVar1 = FUN_00634bb0(*(undefined4 *)(in_ECX[0x267] + 0x40),in_ECX[0x8a]);
    if (cVar1 == '\0') {
      uVar2 = FUN_00634ac0(*(undefined4 *)(in_ECX[0x267] + 0x40),in_ECX[0x8a],0);
      cVar1 = FUN_00634570(uVar2);
      if (cVar1 == '\0') goto LAB_004421d0;
    }
    *(undefined1 *)((int)in_ECX + 0xc1) = 1;
    goto LAB_004422b0;
  }
LAB_004421d0:
  if ((char)in_ECX[0x30] == '\0') {
LAB_0044223e:
    if ((char)in_ECX[0x30] != '\0') {
      cVar1 = FUN_00634bb0(*(undefined4 *)(in_ECX[0x267] + 0x40),
                           *(undefined4 *)(in_ECX[0x267] + 0x44));
      if (cVar1 == '\0') {
        uVar2 = FUN_00634ac0(*(undefined4 *)(in_ECX[0x267] + 0x40),
                             *(undefined4 *)(in_ECX[0x267] + 0x44),0);
        cVar1 = FUN_00634570(uVar2);
        if (cVar1 == '\0') goto LAB_004422b0;
      }
      *(undefined1 *)((int)in_ECX + 0xc1) = 1;
    }
  }
  else {
    cVar1 = FUN_00634bb0(in_ECX[0x89],*(undefined4 *)(in_ECX[0x267] + 0x44));
    if (cVar1 == '\0') {
      uVar2 = FUN_00634ac0(in_ECX[0x89],*(undefined4 *)(in_ECX[0x267] + 0x44),0);
      cVar1 = FUN_00634570(uVar2);
      if (cVar1 == '\0') goto LAB_0044223e;
    }
    *(undefined1 *)((int)in_ECX + 0xc1) = 1;
  }
LAB_004422b0:
  in_ECX[0x8b] = *(int *)(in_ECX[0x267] + 0x48);
  if (*(char *)((int)in_ECX + 0xc1) == '\0') {
    in_ECX[0x89] = *(int *)(in_ECX[0x267] + 0x40);
    in_ECX[0x8a] = *(int *)(in_ECX[0x267] + 0x44);
    if ((*(char *)(in_ECX[0x267] + 0x18) != '\0') || (cVar1 = FUN_004a8a00(), cVar1 != '\0')) {
      (**(code **)(*in_ECX + 0xb0))();
    }
  }
  else {
    (**(code **)(*in_ECX + 0xb0))();
  }
  return;
}


/* ==== 00442350  FUN_00442350  size=31 ==== */

undefined4 FUN_00442350(void)

{
  int *in_ECX;
  
  (**(code **)(*in_ECX + 0xb0))();
  return 0;
}


/* ==== 00442420  FUN_00442420  size=50 ==== */

undefined4 * FUN_00442420(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  FUN_0042fb60(param_1);
  *in_ECX = Rattower::vftable;
  in_ECX[0x268] = 0xffffffff;
  return in_ECX;
}


/* ==== 00442460  FUN_00442460  size=165 ==== */

void FUN_00442460(int param_1)

{
  int iVar1;
  int in_ECX;
  
  if ((*(int *)(in_ECX + 0x9a0) != -1) &&
     (*(int *)(in_ECX + 0x9a0) = *(int *)(in_ECX + 0x9a0) - param_1, *(int *)(in_ECX + 0x9a0) < 1))
  {
    *(undefined4 *)(in_ECX + 0x9a0) = 0x5dc;
    iVar1 = FUN_00432b40();
    if (iVar1 != 0) {
      iVar1 = FUN_00432b40(0,100,0,*(undefined4 *)(in_ECX + 500));
      iVar1 = FUN_00432b40(*(undefined4 *)(iVar1 + 0x228));
      iVar1 = FUN_00432b40(*(undefined4 *)(iVar1 + 0x224));
      iVar1 = FUN_0053c660(0x438,*(undefined4 *)(iVar1 + 0x1fc));
      *(undefined1 *)(iVar1 + 0x30) = 0;
    }
  }
  return;
}


/* ==== 00442510  FUN_00442510  size=70 ==== */

void FUN_00442510(int param_1)

{
  int iVar1;
  int in_ECX;
  
  if (param_1 == 4) {
    iVar1 = FUN_00432b40();
    if (iVar1 != 0) {
      iVar1 = FUN_00432b40();
      *(undefined4 *)(iVar1 + 0x22c) = 0xb9;
    }
  }
  else if (param_1 == 10) {
    *(undefined4 *)(in_ECX + 0x9a0) = 0x5dc;
  }
  return;
}


/* ==== 00442560  FUN_00442560  size=50 ==== */

void FUN_00442560(void)

{
  int iVar1;
  
  iVar1 = FUN_00432b40();
  if (iVar1 != 0) {
    iVar1 = FUN_00432b40();
    *(undefined4 *)(iVar1 + 0x1a8) = 1;
  }
  FUN_00432d30();
  return;
}


/* ==== 00442740  FUN_00442740  size=241 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00442740(int param_1)

{
  char cVar1;
  undefined1 auStack_64 [16];
  undefined4 uStack_54;
  WorkQueue *pWStack_50;
  uint uStack_4c;
  undefined1 *local_48;
  int local_44;
  WorkQueue local_3c [24];
  undefined4 local_24;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070e84d;
  local_10 = ExceptionList;
  uStack_4c = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  pWStack_50 = (WorkQueue *)param_1;
  uStack_54 = 0x442777;
  local_14 = uStack_4c;
  FUN_00431fb0();
  pWStack_50 = (WorkQueue *)0x442783;
  cVar1 = FUN_006352e0();
  if (cVar1 == '\0') {
    local_48 = auStack_64;
    FUN_004054a0(&DAT_007798b8);
    local_44 = FUN_006356a0();
    if ((local_44 == 0) && (*(int *)(*(int *)(param_1 + 4) + 0x22c) == 0)) {
      pWStack_50 = (WorkQueue *)0x4427cb;
      FUN_0042df20();
      local_8 = 0;
      pWStack_50 = (WorkQueue *)&DAT_007798b8;
      uStack_54 = 0x4427df;
      FUN_004053a0();
      local_24 = 3000;
      pWStack_50 = local_3c;
      uStack_54 = 0x4427fb;
      FUN_0044e230();
      pWStack_50 = (WorkQueue *)0x442806;
      FUN_00635d80();
      local_8 = 0xffffffff;
      pWStack_50 = (WorkQueue *)0x442815;
      Concurrency::details::WorkQueue::~WorkQueue(local_3c);
    }
  }
  ExceptionList = local_10;
  return;
}


/* ==== 00442840  FUN_00442840  size=127 ==== */

void FUN_00442840(undefined4 param_1)

{
  uint uVar1;
  int in_ECX;
  undefined1 local_20 [16];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070f24d;
  local_10 = ExceptionList;
  uVar1 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_00406960(in_ECX + 0x1d8);
  local_8 = 0;
  FUN_00433140(param_1);
  FUN_00427560(local_20);
  local_8 = 0xffffffff;
  FUN_00401ac0(uVar1);
  ExceptionList = local_10;
  return;
}


/* ==== 004428c0  FUN_004428c0  size=66 ==== */

void FUN_004428c0(void)

{
  uint uVar1;
  uint uVar2;
  int *in_ECX;
  
  uVar1 = FUN_00641430();
  uVar2 = FUN_004274f0();
  (**(code **)(*in_ECX + 0x108))(uVar1 % uVar2);
  return;
}


/* ==== 00442910  FUN_00442910  size=339 ==== */

void FUN_00442910(int param_1)

{
  char cVar1;
  int *piVar2;
  int *in_ECX;
  undefined1 local_1c [4];
  int *local_18;
  int local_14;
  undefined1 local_10 [4];
  int *local_c;
  char local_5;
  
  local_c = in_ECX;
  (**(code **)(*in_ECX + 0x34))(param_1,0x7fffffff);
  local_c[0x40] = 0;
  (**(code **)(*local_c + 0x2c))(param_1);
  (**(code **)(*local_c + 0x24))();
  (**(code **)(*local_c + 0x28))(param_1);
  (**(code **)(*local_c + 0xf0))();
  local_c[0x268] = local_c[0x268] + param_1;
  if (local_c[0x269] <= local_c[0x268]) {
    local_c[0x268] = 0;
    FUN_0040d5f0();
  }
  local_5 = '\0';
  game_get_state_ptr_d1520();
  piVar2 = (int *)FUN_004d58e0();
  local_14 = *piVar2 + 0x170;
  FUN_0042a9e0(local_10);
  FUN_0042a9c0(local_1c);
  do {
    cVar1 = FUN_0040d2d0(local_1c);
    if (cVar1 == '\0') {
LAB_00442a44:
      if (local_5 == '\0') {
        (**(code **)(*local_c + 0xb0))();
      }
      return;
    }
    local_18 = (int *)FUN_0042a580();
    if ((*(int *)(*local_18 + 0x204) == 100) && (*(int *)(*local_18 + 0x1e4) == 0xc393)) {
      local_5 = '\x01';
      goto LAB_00442a44;
    }
    FUN_0042a560();
  } while( true );
}


/* ==== 00442a70  FUN_00442a70  size=122 ==== */

undefined4 * FUN_00442a70(undefined4 param_1)

{
  uint uVar1;
  undefined4 *in_ECX;
  undefined4 uVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070f27d;
  local_10 = ExceptionList;
  uVar1 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_0042fb60(param_1);
  local_8 = 0;
  *in_ECX = SoldierThunderbolt::vftable;
  uVar3 = 500;
  uVar2 = 3;
  game_get_state_ptr_d1520(3,500,uVar1);
  FUN_004edfb0(uVar2,uVar3);
  *(undefined1 *)(in_ECX + 0x265) = 1;
  ExceptionList = local_10;
  return in_ECX;
}


/* ==== 00442af0  FUN_00442af0  size=241 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00442af0(int param_1)

{
  char cVar1;
  undefined1 auStack_64 [16];
  undefined4 uStack_54;
  WorkQueue *pWStack_50;
  uint uStack_4c;
  undefined1 *local_48;
  int local_44;
  WorkQueue local_3c [24];
  undefined4 local_24;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070e84d;
  local_10 = ExceptionList;
  uStack_4c = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  pWStack_50 = (WorkQueue *)param_1;
  uStack_54 = 0x442b27;
  local_14 = uStack_4c;
  FUN_00431fb0();
  pWStack_50 = (WorkQueue *)0x442b33;
  cVar1 = FUN_006352e0();
  if (cVar1 == '\0') {
    local_48 = auStack_64;
    FUN_004054a0(&DAT_0077a620);
    local_44 = FUN_006356a0();
    if ((local_44 == 0) && (*(int *)(*(int *)(param_1 + 4) + 0x22c) == 0)) {
      pWStack_50 = (WorkQueue *)0x442b7b;
      FUN_0042df20();
      local_8 = 0;
      pWStack_50 = (WorkQueue *)&DAT_0077a620;
      uStack_54 = 0x442b8f;
      FUN_004053a0();
      local_24 = 5000;
      pWStack_50 = local_3c;
      uStack_54 = 0x442bab;
      FUN_0044e230();
      pWStack_50 = (WorkQueue *)0x442bb6;
      FUN_00635d80();
      local_8 = 0xffffffff;
      pWStack_50 = (WorkQueue *)0x442bc5;
      Concurrency::details::WorkQueue::~WorkQueue(local_3c);
    }
  }
  ExceptionList = local_10;
  return;
}


/* ==== 00442bf0  FUN_00442bf0  size=383 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 * FUN_00442bf0(undefined4 param_1)

{
  undefined1 auStack_7c [16];
  undefined4 uStack_6c;
  function<void___cdecl(void)> *pfStack_68;
  uint uStack_64;
  undefined1 *local_60;
  undefined1 *local_5c;
  undefined4 local_58;
  undefined1 *local_54;
  undefined4 local_50;
  int local_4c;
  int local_48;
  undefined4 *local_44;
  function<void___cdecl(void)> local_40 [24];
  uint local_28 [6];
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070f2bd;
  local_10 = ExceptionList;
  uStack_64 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  pfStack_68 = (function<void___cdecl(void)> *)param_1;
  uStack_6c = 0x442c27;
  local_28[5] = uStack_64;
  FUN_0042fb60();
  local_8 = 0;
  *local_44 = stgolembullet::vftable;
  if (local_44[0x47] == -1) {
    local_60 = auStack_7c;
    FUN_004054a0("monster/golem/particle/stgolembullet.ptl");
    FUN_00433290();
  }
  else {
    local_28[0] = 0xfffffff6;
    local_28[1] = 0xfffffffb;
    local_28[2] = 0;
    local_28[3] = 5;
    local_28[4] = 10;
    local_54 = auStack_7c;
    local_58 = FUN_004054a0("monster/golem/particle/stgolembullet.ptl");
    local_8._0_1_ = 1;
    game_loop_helper_e9240();
    local_8._0_1_ = 0;
    local_4c = FUN_005b0aa0();
    pfStack_68 = (function<void___cdecl(void)> *)(local_4c + 0xf0);
    uStack_6c = 0x442cae;
    local_48 = local_4c;
    FUN_00405520();
    local_8._0_1_ = 2;
    local_50 = *(undefined4 *)(local_48 + 0x108);
    pfStack_68 = (function<void___cdecl(void)> *)0x779418;
    uStack_6c = 0x442cd1;
    FUN_004053a0();
    *(uint *)(local_48 + 0x108) = local_28[local_44[0x47]];
    local_5c = auStack_7c;
    FUN_004054a0("monster/golem/particle/stgolembullet.ptl");
    FUN_00433290();
    pfStack_68 = local_40;
    uStack_6c = 0x442d14;
    FUN_0040d840();
    *(undefined4 *)(local_48 + 0x108) = local_50;
    local_8 = (uint)local_8._1_3_ << 8;
    pfStack_68 = (function<void___cdecl(void)> *)0x442d2c;
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_40);
  }
  ExceptionList = local_10;
  return local_44;
}


/* ==== 00442d70  FUN_00442d70  size=37 ==== */

undefined4 * FUN_00442d70(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  FUN_0042fb60(param_1);
  *in_ECX = dagger::vftable;
  return in_ECX;
}


/* ==== 00442da0  FUN_00442da0  size=438 ==== */

undefined4 * FUN_00442da0(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *in_ECX;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070ed7d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0042fb60();
  local_8 = 0;
  *in_ECX = nenguard::vftable;
  FUN_0040d3c0();
  local_18 = game_loop_helper_018d0();
  iVar1 = game_loop_helper_018b0();
  for (; local_18 != iVar1; local_18 = local_18 + 4) {
    FUN_0062fd10();
  }
  puVar2 = (undefined4 *)game_get_flag_object_01a70();
  in_ECX[0x266] = *puVar2;
  puVar2 = (undefined4 *)game_get_flag_object_01a70();
  in_ECX[0x1ba] = *puVar2;
  FUN_004274d0();
  FUN_00405520();
  iVar1 = FUN_00630a40();
  *(undefined4 *)(iVar1 + 0x110) = 4;
  FUN_0062fd10();
  uVar3 = FUN_004274d0(1);
  FUN_00405520(uVar3);
  FUN_00630a40();
  FUN_0062fd10();
  *(undefined1 *)(in_ECX + 0x238) = 1;
  ExceptionList = local_10;
  return in_ECX;
}


/* ==== 00442f60  FUN_00442f60  size=140 ==== */

void FUN_00442f60(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  piVar1 = (int *)game_get_flag_object_01a70(0);
  if (*(int *)(*piVar1 + 0x90) == 9) {
    piVar1 = (int *)game_get_flag_object_01a70(0);
    *(undefined4 *)(*piVar1 + 0x90) = 4;
    uVar3 = 4;
    game_get_flag_object_01a70(0);
    iVar2 = FUN_0040d680(uVar3);
    piVar1 = (int *)game_get_flag_object_01a70(0);
    *(undefined4 *)(*piVar1 + 0x98) = *(undefined4 *)(iVar2 + 0x44);
  }
  FUN_00432b70(param_1);
  return;
}


/* ==== 00442ff0  FUN_00442ff0  size=164 ==== */

void FUN_00442ff0(void)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 local_18 [8];
  undefined1 local_10 [12];
  
  FUN_004019a0(local_10,0);
  cVar1 = FUN_00401750();
  if (cVar1 == '\0') {
    uVar4 = 1;
    FUN_004019a0(local_18,0);
    FUN_00401790(uVar4);
    piVar2 = (int *)game_get_flag_object_01a70(0);
    *(undefined4 *)(*piVar2 + 0x90) = 10;
    uVar4 = 10;
    game_get_flag_object_01a70(0);
    iVar3 = FUN_0040d680(uVar4);
    piVar2 = (int *)game_get_flag_object_01a70(0);
    *(undefined4 *)(*piVar2 + 0x98) = *(undefined4 *)(iVar3 + 0x44);
  }
  return;
}


/* ==== 004430a0  FUN_004430a0  size=175 ==== */

undefined4 * FUN_004430a0(undefined4 param_1)

{
  undefined1 auStack_38 [16];
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
  uStack_28 = 0x4430d4;
  FUN_0042fb60();
  local_8 = 0;
  *local_14 = cannonball::vftable;
  if (local_14[0x47] == 0) {
    local_18 = auStack_38;
    FUN_004054a0("monster/vehicle/particle/cannonballangle.ptl");
    FUN_00433290();
  }
  else if (local_14[0x47] == 1) {
    local_1c = auStack_38;
    FUN_004054a0("monster/vehicle/particle/cannonballdirect.ptl");
    FUN_00433290();
  }
  ExceptionList = local_10;
  return local_14;
}


/* ==== 00443150  FUN_00443150  size=86 ==== */

void FUN_00443150(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x11c) == 0) {
    FUN_0042f340();
  }
  FUN_00432d30();
  return;
}


/* ==== 004431b0  FUN_004431b0  size=212 ==== */

undefined4 * FUN_004431b0(undefined4 param_1)

{
  int iVar1;
  undefined1 auStack_3c [12];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 *puStack_28;
  uint uStack_24;
  undefined1 *local_20;
  undefined4 local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070e9fd;
  local_10 = ExceptionList;
  uStack_24 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  puStack_28 = (undefined4 *)param_1;
  uStack_2c = 0x4431e4;
  FUN_0042fb60();
  local_8 = 0;
  *local_14 = earthfire::vftable;
  local_18 = 500;
  puStack_28 = &local_18;
  uStack_2c = 1;
  uStack_30 = 0x44320f;
  game_loop_helper_0e1f0();
  local_14[0x266] = 3000;
  local_20 = auStack_3c;
  FUN_004054a0("monster/vehicle/particle/flamethrower.ptl");
  iVar1 = FUN_004aa990(0,local_14[0x89],local_14[0x8a],local_14[0x8b]);
  *(undefined4 *)(iVar1 + 0x2c) = local_14[0x7d];
  ExceptionList = local_10;
  return local_14;
}


/* ==== 00443290  FUN_00443290  size=105 ==== */

void FUN_00443290(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  piVar1 = (int *)game_get_flag_object_01a70(0);
  *piVar1 = *piVar1 - param_1;
  piVar1 = (int *)game_get_flag_object_01a70(0);
  if (*piVar1 < 1) {
    puVar2 = (undefined4 *)game_get_flag_object_01a70(0);
    *puVar2 = 500;
    FUN_0040d5f0();
  }
  return;
}


/* ==== 00443300  FUN_00443300  size=48 ==== */

void FUN_00443300(void)

{
  undefined1 auStack_24 [20];
  undefined4 uStack_10;
  undefined1 *local_c;
  
  local_c = auStack_24;
  FUN_004054a0("monster/vehicle/particle/flamethrower.ptl");
  FUN_004aac80();
  uStack_10 = 0x44332b;
  FUN_00432d30();
  return;
}


/* ==== 00443330  FUN_00443330  size=277 ==== */

undefined4 * FUN_00443330(undefined4 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int local_1c;
  int local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070e9fd;
  local_10 = ExceptionList;
  uVar1 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_0042fb60(param_1);
  local_8 = 0;
  *local_14 = laser::vftable;
  *(undefined1 *)(local_14 + 0x265) = 1;
  uVar2 = game_get_flag_object_01a70(0);
  game_loop_helper_0e1f0(1,uVar2);
  uVar2 = 0;
  FUN_00634ac0(0,uVar1);
  FUN_0044de30(uVar2);
  iVar3 = FUN_0044e2b0();
  for (local_18 = 0; local_18 < (iVar3 << 4) / 100; local_18 = local_18 + 1) {
    uVar2 = FUN_004274d0(0);
    local_1c = FUN_005e9250(uVar2);
    *(int *)(local_1c + 0x40) = local_14[0x7d] * 100 * local_18;
    FUN_0040d490(&local_1c);
  }
  ExceptionList = local_10;
  return local_14;
}


/* ==== 00443450  FUN_00443450  size=37 ==== */

undefined4 * FUN_00443450(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  FUN_0042fb60(param_1);
  *in_ECX = waterdagger::vftable;
  return in_ECX;
}


/* ==== 00443480  FUN_00443480  size=37 ==== */

undefined4 * FUN_00443480(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  FUN_0042fb60(param_1);
  *in_ECX = darkdagger::vftable;
  return in_ECX;
}


/* ==== 004434b0  FUN_004434b0  size=37 ==== */

undefined4 * FUN_004434b0(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  FUN_0042fb60(param_1);
  *in_ECX = spacefishbug::vftable;
  return in_ECX;
}


/* ==== 004434e0  FUN_004434e0  size=37 ==== */

undefined4 * FUN_004434e0(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  FUN_0042fb60(param_1);
  *in_ECX = slowweb::vftable;
  return in_ECX;
}


/* ==== 00443510  FUN_00443510  size=357 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00443510(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  int *in_ECX;
  WorkQueue local_3c [24];
  undefined4 local_24;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070ea5d;
  local_10 = ExceptionList;
  local_14 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_00431fb0();
  cVar1 = FUN_006352e0();
  if (cVar1 == '\0') {
    FUN_004054a0(&DAT_007799f0);
    iVar2 = FUN_006356a0();
    if ((iVar2 == 0) && (*(int *)(*(int *)(param_1 + 4) + 0x22c) == 0)) {
      iVar2 = FUN_00641430();
      if (*(int *)(*(int *)(param_1 + 4) + 0x728) <= iVar2 % 100) {
        FUN_0042df20();
        local_8 = 0;
        FUN_004053a0();
        FUN_0044e460();
        iVar2 = *(int *)(param_1 + 4);
        puVar3 = (undefined4 *)game_get_flag_object_01a70();
        *puVar3 = *(undefined4 *)(iVar2 + 0x224);
        iVar2 = *(int *)(param_1 + 4);
        puVar3 = (undefined4 *)game_get_flag_object_01a70();
        *puVar3 = *(undefined4 *)(iVar2 + 0x228);
        local_24 = 7000;
        FUN_0044e230();
        FUN_00635d80();
        local_8 = 0xffffffff;
        Concurrency::details::WorkQueue::~WorkQueue(local_3c);
      }
    }
  }
  (**(code **)(*in_ECX + 0xb0))();
  ExceptionList = local_10;
  return;
}


/* ==== 00443680  FUN_00443680  size=503 ==== */

undefined4 * FUN_00443680(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070f315;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0042fb60();
  local_8 = 0;
  *in_ECX = zombieeye::vftable;
  uVar1 = FUN_004274d0(0);
  FUN_00405520(uVar1);
  FUN_00630a40();
  game_get_state_ptr_d1520();
  FUN_004d58e0();
  iVar2 = FUN_0042e150();
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0x204) == 100)) {
    if (*(int *)(iVar2 + 0x1e4) == 0xd3) {
      uVar1 = FUN_004274d0(0);
      FUN_00405520(uVar1);
      local_8._0_1_ = 1;
      game_loop_helper_e9240();
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_005be5d0();
      FUN_00430eb0();
    }
    else if (*(int *)(iVar2 + 0x1e4) == 0xd4) {
      uVar1 = FUN_004274d0(1);
      FUN_00405520(uVar1);
      local_8._0_1_ = 2;
      game_loop_helper_e9240();
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_005be5d0();
      FUN_00430eb0();
    }
    else if (*(int *)(iVar2 + 0x1e4) == 0xc351) {
      uVar1 = FUN_004274d0(2);
      FUN_00405520(uVar1);
      local_8._0_1_ = 3;
      game_loop_helper_e9240();
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_005be5d0();
      FUN_00430eb0();
    }
  }
  ExceptionList = local_10;
  return in_ECX;
}


/* ==== 00443880  FUN_00443880  size=96 ==== */

void FUN_00443880(undefined4 param_1)

{
  int *in_ECX;
  
  FUN_00431fb0(param_1);
  FUN_0042f340(in_ECX,0,0,0,0x7535,in_ECX[0x7d]);
  (**(code **)(*in_ECX + 0xb0))();
  return;
}


/* ==== 004439e0  FUN_004439e0  size=205 ==== */

undefined4 * FUN_004439e0(undefined4 param_1)

{
  undefined4 *puVar1;
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
  uStack_24 = 0x443a14;
  FUN_0042fb60();
  local_8 = 0;
  *local_14 = darksteelsteel::vftable;
  *(undefined1 *)(local_14 + 0x238) = 1;
  local_18 = auStack_34;
  FUN_004054a0("monster/cosmofiend/particle/fallingsteel.ptl");
  FUN_00433290();
  local_14[0x8b] = 500;
  uStack_20 = 0;
  uStack_24 = 0x443a69;
  puVar1 = (undefined4 *)game_get_flag_object_01a70();
  local_14[0x1ba] = *puVar1;
  uStack_20 = 0;
  uStack_24 = 0x443a87;
  puVar1 = (undefined4 *)game_get_flag_object_01a70();
  local_14[0x1b8] = *puVar1;
  ExceptionList = local_10;
  return local_14;
}


/* ==== 00443c40  FUN_00443c40  size=54 ==== */

undefined4 FUN_00443c40(undefined4 param_1)

{
  undefined4 uVar1;
  int in_ECX;
  
  uVar1 = img_path_loader_12(param_1);
  if (*(int *)(in_ECX + 0x6e8) < 1) {
    FUN_00432d30();
  }
  return uVar1;
}


/* ==== 00443c80  FUN_00443c80  size=204 ==== */

undefined4 * FUN_00443c80(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070e76d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0042fb60();
  local_8 = 0;
  *in_ECX = darksteelcloud::vftable;
  puVar1 = (undefined4 *)game_get_flag_object_01a70();
  in_ECX[0x266] = *puVar1;
  uVar2 = FUN_004274d0(1);
  FUN_00405520(uVar2);
  FUN_00630a40();
  puVar1 = (undefined4 *)game_get_flag_object_01a70();
  in_ECX[0x268] = *puVar1;
  ExceptionList = local_10;
  return in_ECX;
}


/* ==== 00443d50  FUN_00443d50  size=801 ==== */

void FUN_00443d50(int param_1)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  undefined4 uVar7;
  int *in_ECX;
  uint uVar8;
  
  cVar2 = game_frame_should_continue();
  if ((cVar2 == '\0') && (in_ECX[0x268] = in_ECX[0x268] - param_1, in_ECX[0x268] < 1)) {
    piVar3 = (int *)game_get_flag_object_01a70();
    in_ECX[0x268] = *piVar3;
    FUN_0040d5f0();
  }
  FUN_004274d0();
  FUN_00405520();
  iVar4 = FUN_00630790();
  if (iVar4 == 0) {
    FUN_004274d0();
    FUN_00405520();
    iVar4 = FUN_00630790();
    if (iVar4 == 0) {
      game_get_state_ptr_d1520();
      FUN_004d58e0();
      FUN_0042a9e0();
      FUN_0042a9c0();
      while (cVar2 = FUN_0040d2d0(), cVar2 != '\0') {
        piVar3 = (int *)FUN_0042a580();
        cVar2 = (**(code **)(*in_ECX + 0x88))();
        if (cVar2 != '\0') {
          bVar1 = false;
          game_get_state_ptr_d1520();
          FUN_004d58e0();
          FUN_0042a9e0();
          FUN_0042a9c0();
          while (cVar2 = FUN_0040d2d0(), cVar2 != '\0') {
            piVar5 = (int *)FUN_0042a580();
            if (*piVar5 == *piVar3) {
              bVar1 = true;
              break;
            }
            FUN_0042a560();
          }
          if (((!bVar1) &&
              (uVar6 = *(int *)(*piVar3 + 0x224) - in_ECX[0x89], uVar8 = (int)uVar6 >> 0x1f,
              piVar5 = (int *)game_get_flag_object_01a70(), (int)((uVar6 ^ uVar8) - uVar8) <= *piVar5 / 2)) &&
             (uVar6 = *(int *)(*piVar3 + 0x228) - in_ECX[0x8a], uVar8 = (int)uVar6 >> 0x1f,
             piVar5 = (int *)game_get_flag_object_01a70(), (int)((uVar6 ^ uVar8) - uVar8) <= *piVar5 / 2)) {
            game_get_flag_object_01a70();
            FUN_0042f3f0();
            FUN_004274d0();
            FUN_00405520();
            (**(code **)(*in_ECX + 0x78))();
            uVar7 = FUN_004274d0(5);
            FUN_00405520(uVar7);
            (**(code **)(*in_ECX + 0x78))();
            FUN_0040d490(piVar3);
            return;
          }
        }
        FUN_0042a560();
      }
    }
  }
  return;
}


/* ==== 00444080  FUN_00444080  size=121 ==== */

void FUN_00444080(void)

{
  undefined4 uVar1;
  int *in_ECX;
  
  if (in_ECX[0x256] == -1) {
    (**(code **)(*in_ECX + 0x108))();
    uVar1 = FUN_004274d0(3);
    FUN_00405520(uVar1);
    (**(code **)(*in_ECX + 0x78))();
  }
  else if (in_ECX[0x256] == 6) {
    FUN_00432d30();
  }
  return;
}


/* ==== 00444100  FUN_00444100  size=98 ==== */

void FUN_00444100(void)

{
  undefined4 uVar1;
  int *in_ECX;
  
  if (in_ECX[0x256] == 2) {
    (**(code **)(*in_ECX + 0x108))();
    uVar1 = FUN_004274d0(7);
    FUN_00405520(uVar1);
    (**(code **)(*in_ECX + 0x78))();
  }
  return;
}


/* ==== 00444170  FUN_00444170  size=277 ==== */

undefined4 * FUN_00444170(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070e70d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0042fb60();
  local_8 = 0;
  *in_ECX = CVoid::vftable;
  *(undefined1 *)(in_ECX + 0x265) = 1;
  game_get_flag_object_01a70();
  iVar1 = FUN_0040d680();
  *(undefined1 *)(iVar1 + 0x20) = 5;
  game_get_flag_object_01a70();
  FUN_0062fd10();
  uVar2 = FUN_004274d0(0);
  FUN_00405520(uVar2);
  iVar1 = FUN_00630a40();
  FUN_0062fd10();
  *(undefined1 *)(iVar1 + 0xbc) = 1;
  in_ECX[0x268] = 0;
  ExceptionList = local_10;
  return in_ECX;
}


/* ==== 00444290  FUN_00444290  size=77 ==== */

void FUN_00444290(int param_1)

{
  int in_ECX;
  
  *(int *)(in_ECX + 0x9a0) = *(int *)(in_ECX + 0x9a0) + param_1;
  if (199 < *(int *)(in_ECX + 0x9a0)) {
    *(undefined4 *)(in_ECX + 0x9a0) = 0;
    FUN_0040d5f0();
  }
  return;
}


/* ==== 004442e0  FUN_004442e0  size=97 ==== */

void FUN_004442e0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int *in_ECX;
  
  if ((param_1 != 0) && (*(char *)(param_1 + 0xbc) != '\0')) {
    uVar2 = FUN_004274d0(0);
    cVar1 = destroy<>(param_1 + 100,uVar2);
    if (cVar1 != '\0') {
      (**(code **)(*in_ECX + 0xb0))();
    }
  }
  return;
}


/* ==== 00444350  FUN_00444350  size=380 ==== */

void FUN_00444350(void)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070f37d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(char *)(in_ECX + 0x994) != '\0') {
    *(undefined1 *)(in_ECX + 0x994) = 0;
    FUN_0042a9e0();
    FUN_0042a9c0();
    while( true ) {
      cVar1 = FUN_0040d2d0();
      if (cVar1 == '\0') break;
      piVar2 = (int *)FUN_0042a580();
      if (*(char *)(*piVar2 + 0xbc) == '\0') {
        FUN_0044de80();
      }
      else {
        uVar3 = FUN_004274d0(0);
        FUN_00405520(uVar3);
        local_8 = 0;
        game_loop_helper_e9240();
        local_8 = 0xffffffff;
        iVar4 = FUN_005ad090();
        FUN_004275e0();
        *(undefined4 *)(*piVar2 + 0x90) = 8;
        iVar5 = FUN_0040d680();
        *(undefined4 *)(*piVar2 + 0x98) = *(undefined4 *)(iVar5 + 0x44);
        *(undefined4 *)(*piVar2 + 0x8c) = *(undefined4 *)(iVar4 + 0x14);
        *(undefined4 *)(*piVar2 + 0x84) = 0;
      }
      FUN_0042a560();
    }
  }
  ExceptionList = local_10;
  return;
}


/* ==== 00444740  FUN_00444740  size=217 ==== */

undefined4 * FUN_00444740(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *in_ECX;
  int local_1c;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070e76d;
  local_10 = ExceptionList;
  uVar1 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_0042fb60(param_1);
  local_8 = 0;
  *in_ECX = CBlindSeed::vftable;
  iVar2 = FUN_00641430(uVar1);
  if (iVar2 % 100 < 0x1e) {
    local_18 = -in_ECX[0x7d];
  }
  else {
    local_18 = in_ECX[0x7d];
  }
  *(int *)(in_ECX[0x267] + 0x1c) = local_18;
  iVar2 = FUN_00641430(uVar1);
  if (iVar2 % 100 < 0x1e) {
    local_1c = -in_ECX[0x7e];
  }
  else {
    local_1c = in_ECX[0x7e];
  }
  *(int *)(in_ECX[0x267] + 0x20) = local_1c;
  ExceptionList = local_10;
  return in_ECX;
}


/* ==== 00444820  FUN_00444820  size=34 ==== */

void FUN_00444820(undefined4 param_1)

{
  FUN_00431fb0(param_1);
  FUN_00432d30();
  return;
}


/* ==== 00444850  FUN_00444850  size=217 ==== */

undefined4 * FUN_00444850(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *in_ECX;
  int local_1c;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070e76d;
  local_10 = ExceptionList;
  uVar1 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_0042fb60(param_1);
  local_8 = 0;
  *in_ECX = CBlastingSeed::vftable;
  iVar2 = FUN_00641430(uVar1);
  if (iVar2 % 100 < 0x1e) {
    local_18 = -in_ECX[0x7d];
  }
  else {
    local_18 = in_ECX[0x7d];
  }
  *(int *)(in_ECX[0x267] + 0x1c) = local_18;
  iVar2 = FUN_00641430(uVar1);
  if (iVar2 % 100 < 0x1e) {
    local_1c = -in_ECX[0x7e];
  }
  else {
    local_1c = in_ECX[0x7e];
  }
  *(int *)(in_ECX[0x267] + 0x20) = local_1c;
  ExceptionList = local_10;
  return in_ECX;
}


/* ==== 00444930  FUN_00444930  size=74 ==== */

void FUN_00444930(void)

{
  FUN_0042f340();
  FUN_00432d30();
  return;
}


/* ==== 00444b20  FUN_00444b20  size=91 ==== */

void FUN_00444b20(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  
  iVar1 = FUN_00432b40();
  if (iVar1 != 0) {
    uVar2 = FUN_00432b40(0,0,0,0x7573,*(undefined4 *)(in_ECX + 500));
    FUN_0042f340(uVar2);
  }
  FUN_00432d30();
  return;
}


/* ==== 00444b80  FUN_00444b80  size=144 ==== */

undefined4 * FUN_00444b80(void)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070f3dd;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00444980();
  local_8 = 0;
  *in_ECX = CShootingStarBraze::vftable;
  uVar1 = FUN_004274d0(0);
  FUN_00405520(uVar1);
  FUN_00630a40();
  ExceptionList = local_10;
  return in_ECX;
}


/* ==== 00444c10  FUN_00444c10  size=86 ==== */

void FUN_00444c10(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = FUN_00432b40();
  if (iVar1 != 0) {
    FUN_0042f340(in_ECX,0,0,0,0x7727,*(undefined4 *)(in_ECX + 500));
  }
  FUN_00432d30();
  return;
}


/* ==== 00444c70  FUN_00444c70  size=20 ==== */

void FUN_00444c70(void)

{
  FUN_00433520();
  return;
}


/* ==== 00444ef0  FUN_00444ef0  size=208 ==== */

undefined4 * FUN_00444ef0(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070e70d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0042fb60();
  local_8 = 0;
  *in_ECX = CSunkenRock::vftable;
  *(undefined1 *)(in_ECX + 0x265) = 1;
  game_loop_helper_e9240();
  FUN_005e53f0();
  uVar1 = FUN_004274d0(0);
  FUN_00405520(uVar1);
  iVar2 = FUN_00630a40();
  *(undefined4 *)(iVar2 + 0x110) = 4;
  FUN_004053a0();
  ExceptionList = local_10;
  return in_ECX;
}


/* ==== 00444fc0  FUN_00444fc0  size=37 ==== */

undefined4 * FUN_00444fc0(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  FUN_0042fb60(param_1);
  *in_ECX = CGateKeeper::vftable;
  return in_ECX;
}


/* ==== 00444ff0  FUN_00444ff0  size=96 ==== */

undefined4 FUN_00444ff0(undefined4 param_1)

{
  char cVar1;
  
  game_get_state_ptr_d1520();
  cVar1 = game_frame_should_continue();
  if (cVar1 == '\0') {
    FUN_004054a0("[do not pass]");
  }
  else {
    FUN_004054a0("[pass all]");
  }
  return param_1;
}


/* ==== 00445180  FUN_00445180  size=1245 ==== */

void FUN_00445180(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  int local_10;
  int local_c;
  
  iVar2 = *(int *)(in_ECX + 0x218) / 1000000;
  iVar3 = *(int *)(in_ECX + 0x21c) / 1000000;
  if ((iVar2 == 0) && (iVar3 == 0)) {
    return;
  }
  local_c = *(int *)(in_ECX + 0x224) + iVar2;
  local_10 = *(int *)(in_ECX + 0x228) + iVar3;
  *(int *)(in_ECX + 0x218) = *(int *)(in_ECX + 0x218) + iVar2 * -1000000;
  *(int *)(in_ECX + 0x21c) = *(int *)(in_ECX + 0x21c) + iVar3 * -1000000;
  cVar1 = FUN_00634bb0(local_c,*(undefined4 *)(in_ECX + 0x228));
  if (cVar1 == '\0') {
    uVar4 = FUN_00634ac0(local_c,*(undefined4 *)(in_ECX + 0x228),0);
    cVar1 = FUN_00634570(uVar4);
    if (cVar1 != '\0') goto LAB_0044525c;
  }
  else {
LAB_0044525c:
    local_c = *(int *)(in_ECX + 0x224);
    *(undefined4 *)(in_ECX + 0x218) = 0;
    if ((*(int *)(in_ECX + 0x230) < 1) && (-1 < *(int *)(in_ECX + 0x234))) {
      *(int *)(in_ECX + 0x230) = -*(int *)(in_ECX + 0x230);
    }
    else if ((*(int *)(in_ECX + 0x230) < 0) || (*(int *)(in_ECX + 0x234) < 0)) {
      if ((*(int *)(in_ECX + 0x230) < 0) || (0 < *(int *)(in_ECX + 0x234))) {
        if ((*(int *)(in_ECX + 0x230) < 1) && (*(int *)(in_ECX + 0x234) < 1)) {
          *(int *)(in_ECX + 0x230) = -*(int *)(in_ECX + 0x230);
        }
      }
      else {
        *(int *)(in_ECX + 0x230) = -*(int *)(in_ECX + 0x230);
      }
    }
    else {
      *(int *)(in_ECX + 0x230) = -*(int *)(in_ECX + 0x230);
    }
    FUN_0040d5f0();
  }
  cVar1 = FUN_00634bb0(*(undefined4 *)(in_ECX + 0x224),local_10);
  if (cVar1 == '\0') {
    uVar4 = FUN_00634ac0(*(undefined4 *)(in_ECX + 0x224),local_10,0);
    cVar1 = FUN_00634570(uVar4);
    if (cVar1 != '\0') goto LAB_0044537f;
  }
  else {
LAB_0044537f:
    local_10 = *(int *)(in_ECX + 0x228);
    *(undefined4 *)(in_ECX + 0x21c) = 0;
    if ((*(int *)(in_ECX + 0x230) < 1) && (-1 < *(int *)(in_ECX + 0x234))) {
      *(int *)(in_ECX + 0x234) = -*(int *)(in_ECX + 0x234);
    }
    else if ((*(int *)(in_ECX + 0x230) < 0) || (*(int *)(in_ECX + 0x234) < 0)) {
      if ((*(int *)(in_ECX + 0x230) < 0) || (0 < *(int *)(in_ECX + 0x234))) {
        if ((*(int *)(in_ECX + 0x230) < 1) && (*(int *)(in_ECX + 0x234) < 1)) {
          *(int *)(in_ECX + 0x234) = -*(int *)(in_ECX + 0x234);
        }
      }
      else {
        *(int *)(in_ECX + 0x234) = -*(int *)(in_ECX + 0x234);
      }
    }
    else {
      *(int *)(in_ECX + 0x234) = -*(int *)(in_ECX + 0x234);
    }
    FUN_0040d5f0();
  }
  cVar1 = FUN_00634bb0(local_c,local_10);
  if (cVar1 == '\0') {
    uVar4 = FUN_00634ac0(local_c,local_10,0);
    cVar1 = FUN_00634570(uVar4);
    if (cVar1 == '\0') goto LAB_00445641;
  }
  local_c = *(int *)(in_ECX + 0x224);
  *(undefined4 *)(in_ECX + 0x218) = 0;
  local_10 = *(int *)(in_ECX + 0x228);
  *(undefined4 *)(in_ECX + 0x21c) = 0;
  if ((*(int *)(in_ECX + 0x230) < 1) && (-1 < *(int *)(in_ECX + 0x234))) {
    *(int *)(in_ECX + 0x230) = -*(int *)(in_ECX + 0x230);
  }
  else if ((*(int *)(in_ECX + 0x230) < 0) || (*(int *)(in_ECX + 0x234) < 0)) {
    if ((*(int *)(in_ECX + 0x230) < 0) || (0 < *(int *)(in_ECX + 0x234))) {
      if ((*(int *)(in_ECX + 0x230) < 1) && (*(int *)(in_ECX + 0x234) < 1)) {
        *(int *)(in_ECX + 0x230) = -*(int *)(in_ECX + 0x230);
      }
    }
    else {
      *(int *)(in_ECX + 0x230) = -*(int *)(in_ECX + 0x230);
    }
  }
  else {
    *(int *)(in_ECX + 0x230) = -*(int *)(in_ECX + 0x230);
  }
  if ((*(int *)(in_ECX + 0x230) < 1) && (-1 < *(int *)(in_ECX + 0x234))) {
    *(int *)(in_ECX + 0x234) = -*(int *)(in_ECX + 0x234);
  }
  else if ((*(int *)(in_ECX + 0x230) < 0) || (*(int *)(in_ECX + 0x234) < 0)) {
    if ((*(int *)(in_ECX + 0x230) < 0) || (0 < *(int *)(in_ECX + 0x234))) {
      if ((*(int *)(in_ECX + 0x230) < 1) && (*(int *)(in_ECX + 0x234) < 1)) {
        *(int *)(in_ECX + 0x234) = -*(int *)(in_ECX + 0x234);
      }
    }
    else {
      *(int *)(in_ECX + 0x234) = -*(int *)(in_ECX + 0x234);
    }
  }
  else {
    *(int *)(in_ECX + 0x234) = -*(int *)(in_ECX + 0x234);
  }
  FUN_0040d5f0();
LAB_00445641:
  *(int *)(in_ECX + 0x224) = local_c;
  *(int *)(in_ECX + 0x228) = local_10;
  return;
}


/* ==== 00445660  FUN_00445660  size=250 ==== */

undefined4 * FUN_00445660(undefined4 param_1)

{
  uint uVar1;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070f469;
  local_10 = ExceptionList;
  uVar1 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_0042fb60(param_1);
  local_8 = 0;
  *in_ECX = CBreakableObject::vftable;
  FUN_0040d8b0(uVar1);
  local_8._0_1_ = 1;
  FUN_0040d8b0();
  local_8 = CONCAT31(local_8._1_3_,2);
  in_ECX[0x268] = 0;
  in_ECX[0x269] = 0;
  in_ECX[0x26a] = 0;
  in_ECX[0x26b] = 0;
  FUN_004053a0(&DAT_007793b1);
  *(undefined1 *)((int)in_ECX + 0x8f1) = 1;
  *(undefined1 *)((int)in_ECX + 0x8f2) = 1;
  *(undefined1 *)(in_ECX + 0x23c) = 0;
  *(undefined1 *)((int)in_ECX + 0x8f3) = 1;
  *(undefined1 *)(in_ECX + 0x238) = 1;
  ExceptionList = local_10;
  return in_ECX;
}


/* ==== 00445760  FUN_00445760  size=821 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00445760(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  char cVar1;
  int in_ECX;
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [12];
  undefined4 uStack_cc;
  undefined1 *puStack_c8;
  undefined1 *puStack_c4;
  undefined4 uStack_c0;
  uint uStack_bc;
  undefined1 *local_b8;
  undefined4 local_b4;
  undefined1 *local_b0;
  undefined1 *local_ac;
  undefined1 *local_a8;
  undefined4 local_a4;
  undefined1 *local_a0;
  undefined1 *local_9c;
  undefined1 *local_98;
  undefined4 local_94;
  undefined1 *local_90;
  undefined1 *local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined1 *local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined1 *local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined1 *local_68;
  undefined4 local_64;
  int local_60;
  function<void___cdecl(void)> local_5c [24];
  function<void___cdecl(void)> local_44 [24];
  function<void___cdecl(void)> local_2c [24];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_0070f4f7;
  local_10 = ExceptionList;
  uStack_bc = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 6;
  uStack_c0 = *(undefined4 *)(in_ECX + 0x1e4);
  puStack_c4 = (undefined1 *)0x4457a4;
  local_60 = in_ECX;
  local_14 = uStack_bc;
  game_loop_helper_e9240();
  puStack_c4 = (undefined1 *)0x4457ab;
  local_64 = FUN_005e53f0();
  *(undefined4 *)(local_60 + 0x9a4) = param_1;
  *(undefined4 *)(local_60 + 0x9a8) = param_2;
  *(undefined4 *)(local_60 + 0x9ac) = param_3;
  *(undefined4 *)(local_60 + 0x94c) = param_4;
  *(undefined4 *)(local_60 + 0x950) = param_5;
  *(undefined4 *)(local_60 + 0x954) = param_6;
  *(undefined4 *)(local_60 + 0x6e8) = param_7;
  *(undefined4 *)(local_60 + 0x6e0) = param_7;
  puStack_c4 = &DAT_007793b1;
  puStack_c8 = &stack0x00000038;
  uStack_cc = 0x44581c;
  cVar1 = FUN_00427e30();
  if (cVar1 != '\0') {
    local_8c = auStack_d8;
    local_68 = auStack_d8;
    local_90 = auStack_f0;
    FUN_00405520(&stack0x00000038);
    local_94 = FUN_004c7590(local_68);
    local_8._0_1_ = 7;
    local_98 = auStack_f0;
    FUN_00405520(local_64);
    local_8 = CONCAT31(local_8._1_3_,6);
    puStack_c4 = (undefined1 *)FUN_004c7af0(local_2c);
    puStack_c8 = (undefined1 *)0x4458a1;
    local_70 = puStack_c4;
    local_6c = puStack_c4;
    FUN_004053e0();
    puStack_c4 = (undefined1 *)0x4458a9;
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_2c);
  }
  puStack_c4 = &DAT_007793b1;
  puStack_c8 = &stack0x00000050;
  uStack_cc = 0x4458b8;
  cVar1 = FUN_00427e30();
  if (cVar1 != '\0') {
    local_9c = auStack_d8;
    local_74 = auStack_d8;
    local_a0 = auStack_f0;
    FUN_00405520(&stack0x00000050);
    local_a4 = FUN_004c7590(local_74);
    local_8._0_1_ = 8;
    local_a8 = auStack_f0;
    FUN_00405520(local_64);
    local_8 = CONCAT31(local_8._1_3_,6);
    puStack_c4 = (undefined1 *)FUN_004c7af0(local_44);
    puStack_c8 = (undefined1 *)0x44593d;
    local_7c = puStack_c4;
    local_78 = puStack_c4;
    FUN_004053e0();
    puStack_c4 = (undefined1 *)0x445945;
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_44);
  }
  puStack_c4 = &stack0x00000080;
  puStack_c8 = (undefined1 *)0x44595b;
  FUN_0040d840();
  puStack_c4 = &stack0x00000098;
  puStack_c8 = (undefined1 *)0x445970;
  FUN_0040d840();
  puStack_c4 = &DAT_007793b1;
  puStack_c8 = &stack0x000000b0;
  uStack_cc = 0x445982;
  cVar1 = FUN_00427e30();
  if (cVar1 != '\0') {
    local_ac = auStack_d8;
    local_80 = auStack_d8;
    local_b0 = auStack_f0;
    FUN_00405520(&stack0x000000b0);
    local_b4 = FUN_004c7590(local_80);
    local_8._0_1_ = 9;
    local_b8 = auStack_f0;
    FUN_00405520(local_64);
    local_8 = CONCAT31(local_8._1_3_,6);
    puStack_c4 = (undefined1 *)FUN_004c7af0(local_5c);
    puStack_c8 = (undefined1 *)0x445a10;
    local_88 = puStack_c4;
    local_84 = puStack_c4;
    FUN_004053e0();
    puStack_c4 = (undefined1 *)0x445a18;
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_5c);
  }
  local_8._0_1_ = 5;
  puStack_c4 = (undefined1 *)0x445a25;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)&stack0x00000020);
  local_8._0_1_ = 4;
  puStack_c4 = (undefined1 *)0x445a31;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)&stack0x00000038);
  local_8._0_1_ = 3;
  puStack_c4 = (undefined1 *)0x445a3d;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)&stack0x00000050);
  local_8._0_1_ = 2;
  puStack_c4 = (undefined1 *)0x445a49;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)&stack0x00000068);
  local_8._0_1_ = 1;
  puStack_c4 = (undefined1 *)0x445a58;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)&stack0x00000080);
  local_8 = (uint)local_8._1_3_ << 8;
  puStack_c4 = (undefined1 *)0x445a67;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)&stack0x00000098);
  local_8 = 0xffffffff;
  puStack_c4 = (undefined1 *)0x445a79;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)&stack0x000000b0);
  ExceptionList = local_10;
  return;
}


/* ==== 00445aa0  FUN_00445aa0  size=1271 ==== */

undefined4 FUN_00445aa0(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 local_20 [4];
  undefined4 *local_1c;
  int local_18;
  undefined4 *local_14;
  int local_10;
  int *local_c;
  undefined1 local_5;
  
  uVar2 = img_path_loader_12(param_1);
  if (local_c[0x1ba] < 1) {
    local_c[0x1ba] = 0;
    local_c[0x268] = local_c[0x268] + 1;
    if ((((local_c[0x269] == local_c[0x268]) && (local_c[0x79] != 0x772b)) &&
        (local_c[0x79] != 0x7736)) && ((local_c[0x79] != 0x7737 && (local_c[0x79] != 0x7740)))) {
      piVar3 = (int *)game_get_state_ptr_d1520();
      uVar8 = *(undefined4 *)(*piVar3 + 0x17c);
      game_loop_helper_e9240(uVar8);
      FUN_005bcf10(uVar8);
      FUN_0044dff0(local_20);
      FUN_0044dfd0(&local_5);
      while (cVar1 = FUN_0044dd70(local_5), cVar1 != '\0') {
        piVar3 = (int *)FUN_0044dd50();
        if (local_c[0x79] == *piVar3) {
          local_18 = game_loop_helper_018d0();
          iVar4 = game_loop_helper_018b0();
          for (; local_18 != iVar4; local_18 = local_18 + 0x2c) {
            local_10 = local_18;
            cVar1 = FUN_00427c60(local_18,"[monster]");
            if (cVar1 == '\0') {
              cVar1 = FUN_00427c60(local_10,"[trap]");
              if (cVar1 == '\0') {
                cVar1 = FUN_00427c60(local_10,"[item]");
                if (cVar1 != '\0') {
                  piVar3 = (int *)game_get_state_ptr_d1520();
                  uVar8 = *(undefined4 *)(*piVar3 + 0x16c);
                  game_loop_helper_e9240(uVar8);
                  FUN_005e4170(uVar8);
                  uVar6 = FUN_0044de50();
                  if (*(uint *)(local_10 + 0x18) < uVar6) {
                    uVar8 = *(undefined4 *)(local_10 + 0x18);
                    piVar3 = (int *)game_get_state_ptr_d1520(uVar8);
                    uVar9 = *(undefined4 *)(*piVar3 + 0x16c);
                    game_loop_helper_e9240(uVar9);
                    FUN_005e4170(uVar9);
                    FUN_0044de30(uVar8);
                    local_1c = (undefined4 *)game_loop_helper_018d0();
                    puVar7 = (undefined4 *)game_loop_helper_018b0();
                    for (; local_1c != puVar7; local_1c = local_1c + 2) {
                      local_14 = local_1c;
                      iVar5 = FUN_00641430();
                      if (iVar5 % 10000 < (int)local_14[1]) {
                        piVar3 = (int *)game_get_state_ptr_d1520(*local_14,1,local_c[0x89],local_c[0x8a],0);
                        FUN_004cca70(*piVar3 + 0x160);
                        iVar5 = game_loop_helper_caba0(*local_14);
                        if (iVar5 == 0x71) {
                          uVar8 = *local_14;
                          game_loop_helper_e9240(uVar8);
                          iVar5 = game_loop_helper_cc840(uVar8);
                          if ((((*(int *)(iVar5 + 0xb8) == 3) || (*(int *)(iVar5 + 0xb8) == 4)) &&
                              (iVar5 = FUN_0063cf70(), iVar5 != 0)) &&
                             (iVar5 = FUN_0063cf70(), *(int *)(iVar5 + 0x204) == 0)) {
                            uVar8 = FUN_0063cf70();
                            piVar3 = (int *)game_get_state_ptr_d1520(*local_14,uVar8);
                            net_packet_send_fixed_0x24(41000,1,*(undefined4 *)(*piVar3 + 0x16c));
                          }
                        }
                        else {
                          iVar5 = game_loop_helper_caba0(*local_14);
                          if (iVar5 == 0x8e) {
                            uVar8 = *local_14;
                            game_loop_helper_e9240(uVar8);
                            iVar5 = game_loop_helper_cd6d0(uVar8);
                            if (((*(int *)(iVar5 + 0x94) == 3) || (*(int *)(iVar5 + 0x94) == 4)) &&
                               ((iVar5 = FUN_0063cf70(), iVar5 != 0 &&
                                (iVar5 = FUN_0063cf70(), *(int *)(iVar5 + 0x204) == 0)))) {
                              uVar8 = FUN_0063cf70();
                              piVar3 = (int *)game_get_state_ptr_d1520(*local_14,uVar8);
                              net_packet_send_fixed_0x24(41000,1,*(undefined4 *)(*piVar3 + 0x16c));
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
                iVar5 = FUN_00641430();
                if (iVar5 % 100 < (*(int *)(local_10 + 0x20) * 100) / *(int *)(local_10 + 0x24)) {
                  FUN_0042f340(local_c,0,0,0,*(undefined4 *)(local_10 + 0x18),local_c[0x7d]);
                }
              }
            }
            else if ((*(int *)(local_10 + 0x28) == -1) &&
                    (iVar5 = FUN_00641430(),
                    iVar5 % 100 < (*(int *)(local_10 + 0x20) * 100) / *(int *)(local_10 + 0x24))) {
              iVar5 = FUN_0053c660(*(undefined4 *)(local_10 + 0x18),*(undefined4 *)(local_10 + 0x1c)
                                   ,local_c[0x89],local_c[0x8a],0,100,0,local_c[0x7d]);
              *(undefined1 *)(iVar5 + 0x30) = 0;
            }
          }
        }
        FUN_0044dd30();
      }
    }
    if ((local_c[0x26b] == 0) || (local_c[0x268] != local_c[0x26a])) {
      (**(code **)(*local_c + 0x110))(local_c[0x268]);
    }
    else {
      (**(code **)(*local_c + 0xb0))();
    }
  }
  return uVar2;
}


/* ==== 00445fa0  FUN_00445fa0  size=32 ==== */

void FUN_00445fa0(void)

{
  int *in_ECX;
  
  (**(code **)(*in_ECX + 0x108))(0);
  return;
}


/* ==== 00445fc0  FUN_00445fc0  size=218 ==== */

void FUN_00445fc0(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_4c [24];
  float local_34;
  float local_30;
  float local_2c;
  undefined1 *puStack_28;
  uint uStack_24;
  undefined4 local_20;
  undefined1 *local_1c;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070f53d;
  local_10 = ExceptionList;
  uStack_24 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  puStack_28 = (undefined1 *)0x445ff0;
  FUN_00432d30();
  puStack_28 = &DAT_007793b1;
  local_2c = (float)(local_14 + 0x9c8);
  local_30 = 6.279258e-39;
  cVar1 = FUN_00427e30();
  if (cVar1 != '\0') {
    puStack_28 = (undefined1 *)0x4;
    local_2c = (float)*(int *)(local_14 + 0x22c);
    local_30 = (float)*(int *)(local_14 + 0x228);
    local_34 = (float)*(int *)(local_14 + 0x224);
    local_1c = auStack_4c;
    local_20 = FUN_00405520(local_14 + 0x9c8);
    local_8 = 0;
    uVar2 = FUN_00516d20();
    local_8 = 0xffffffff;
    iVar3 = FUN_00516a90(uVar2);
    *(undefined4 *)(iVar3 + 0x4c) = *(undefined4 *)(local_14 + 500);
  }
  ExceptionList = local_10;
  return;
}


/* ==== 004460a0  FUN_004460a0  size=447 ==== */

undefined4 * FUN_004460a0(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *in_ECX;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070f59d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00445660();
  local_8 = 0;
  *in_ECX = CBreakableObject6::vftable;
  FUN_004054a0();
  local_8._0_1_ = 1;
  FUN_004274d0();
  FUN_00405520();
  local_8._0_1_ = 2;
  FUN_004274d0();
  FUN_00405520();
  local_8._0_1_ = 3;
  FUN_004274d0();
  FUN_00405520();
  local_8._0_1_ = 4;
  FUN_004274d0();
  FUN_00405520();
  local_8._0_1_ = 5;
  FUN_004274d0();
  FUN_00405520();
  local_8._0_1_ = 6;
  uVar1 = FUN_004274d0(0);
  FUN_00405520(uVar1);
  puVar2 = (undefined4 *)game_get_flag_object_01a70(6);
  uVar1 = *puVar2;
  puVar2 = (undefined4 *)game_get_flag_object_01a70(5);
  uVar7 = *puVar2;
  puVar2 = (undefined4 *)game_get_flag_object_01a70(4);
  uVar6 = *puVar2;
  puVar2 = (undefined4 *)game_get_flag_object_01a70(3);
  uVar5 = *puVar2;
  puVar2 = (undefined4 *)game_get_flag_object_01a70(2);
  uVar4 = *puVar2;
  puVar2 = (undefined4 *)game_get_flag_object_01a70(1);
  uVar3 = *puVar2;
  puVar2 = (undefined4 *)game_get_flag_object_01a70(0);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_00445760(*puVar2,uVar3,uVar4,uVar5,uVar6,uVar7,uVar1);
  ExceptionList = local_10;
  return in_ECX;
}


/* ==== 00446260  FUN_00446260  size=48 ==== */

void FUN_00446260(void)

{
  int in_ECX;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(in_ECX + 0x9c8));
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(in_ECX + 0x9b0));
  FUN_00433520();
  return;
}


/* ==== 00446290  FUN_00446290  size=455 ==== */

undefined4 * FUN_00446290(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *in_ECX;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070f59d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00445660();
  local_8 = 0;
  *in_ECX = CBreakableObject7::vftable;
  FUN_004274d0();
  FUN_00405520();
  local_8._0_1_ = 1;
  FUN_004274d0();
  FUN_00405520();
  local_8._0_1_ = 2;
  FUN_004274d0();
  FUN_00405520();
  local_8._0_1_ = 3;
  FUN_004274d0();
  FUN_00405520();
  local_8._0_1_ = 4;
  FUN_004274d0();
  FUN_00405520();
  local_8._0_1_ = 5;
  FUN_004274d0();
  FUN_00405520();
  local_8._0_1_ = 6;
  uVar1 = FUN_004274d0(0);
  FUN_00405520(uVar1);
  puVar2 = (undefined4 *)game_get_flag_object_01a70(6);
  uVar1 = *puVar2;
  puVar2 = (undefined4 *)game_get_flag_object_01a70(5);
  uVar7 = *puVar2;
  puVar2 = (undefined4 *)game_get_flag_object_01a70(4);
  uVar6 = *puVar2;
  puVar2 = (undefined4 *)game_get_flag_object_01a70(3);
  uVar5 = *puVar2;
  puVar2 = (undefined4 *)game_get_flag_object_01a70(2);
  uVar4 = *puVar2;
  puVar2 = (undefined4 *)game_get_flag_object_01a70(1);
  uVar3 = *puVar2;
  puVar2 = (undefined4 *)game_get_flag_object_01a70(0);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_00445760(*puVar2,uVar3,uVar4,uVar5,uVar6,uVar7,uVar1);
  ExceptionList = local_10;
  return in_ECX;
}


/* ==== 00446460  FUN_00446460  size=449 ==== */

undefined4 * FUN_00446460(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *in_ECX;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070f5fd;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00445660();
  local_8 = 0;
  *in_ECX = CBO_DragonHead::vftable;
  puVar1 = (undefined4 *)game_get_flag_object_01a70();
  uVar7 = *puVar1;
  FUN_004054a0();
  local_8._0_1_ = 1;
  FUN_004274d0();
  FUN_00405520();
  local_8._0_1_ = 2;
  FUN_004274d0();
  FUN_00405520();
  local_8._0_1_ = 3;
  FUN_004274d0();
  FUN_00405520();
  local_8._0_1_ = 4;
  FUN_004274d0();
  FUN_00405520();
  local_8._0_1_ = 5;
  FUN_004274d0();
  FUN_00405520();
  local_8._0_1_ = 6;
  uVar2 = FUN_004274d0(0);
  FUN_00405520(uVar2);
  puVar1 = (undefined4 *)game_get_flag_object_01a70(5);
  uVar2 = *puVar1;
  puVar1 = (undefined4 *)game_get_flag_object_01a70(4);
  uVar6 = *puVar1;
  puVar1 = (undefined4 *)game_get_flag_object_01a70(3);
  uVar5 = *puVar1;
  uVar4 = 2;
  uVar3 = 2;
  puVar1 = (undefined4 *)game_get_flag_object_01a70(0);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_00445760(*puVar1,uVar3,uVar4,uVar5,uVar6,uVar2,uVar7);
  ExceptionList = local_10;
  return in_ECX;
}


/* ==== 00446630  FUN_00446630  size=1223 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 * FUN_00446630(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *in_ECX;
  int iVar4;
  undefined1 auStack_f8 [12];
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined1 *puStack_e4;
  uint uStack_e0;
  int local_88;
  undefined4 local_84;
  function<void___cdecl(void)> local_74 [24];
  function<void___cdecl(void)> local_5c [24];
  function<void___cdecl(void)> local_44 [24];
  function<void___cdecl(void)> local_2c [24];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070f66f;
  local_10 = ExceptionList;
  uStack_e0 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  puStack_e4 = (undefined1 *)param_1;
  uStack_e8 = 0x44666b;
  local_14 = uStack_e0;
  FUN_00445660();
  local_8 = 0;
  *in_ECX = CFairy::vftable;
  puStack_e4 = (undefined1 *)0x446689;
  FUN_0040d8b0();
  local_8._0_1_ = 1;
  puStack_e4 = (undefined1 *)0x44669b;
  FUN_0040d8b0();
  local_8._0_1_ = 2;
  iVar4 = (int)in_ECX[0x79] % 10;
  local_84 = 0x3f800000;
  if (iVar4 == 0) {
    local_84 = 0x3f333333;
  }
  else if (iVar4 == 1) {
    local_84 = 0x3f800000;
  }
  else if (iVar4 == 2) {
    local_84 = 0x3fa66666;
  }
  *(bool *)(in_ECX + 0x284) = ((int)in_ECX[0x79] / 10) % 10 != 0;
  puStack_e4 = (undefined1 *)0x0;
  uStack_e8 = 0x446746;
  puStack_e4 = (undefined1 *)FUN_004274d0();
  uStack_e8 = 0x44674f;
  FUN_00405520();
  local_8._0_1_ = 3;
  puStack_e4 = (undefined1 *)0x1;
  uStack_e8 = 0x446769;
  puStack_e4 = (undefined1 *)FUN_004274d0();
  uStack_e8 = 0x446772;
  FUN_00405520();
  local_8 = CONCAT31(local_8._1_3_,4);
  puStack_e4 = (undefined1 *)0x0;
  uStack_e8 = 0x446786;
  game_get_flag_object_01a70();
  puStack_e4 = (undefined1 *)0x44679c;
  local_88 = game_loop_helper_018d0();
  puStack_e4 = (undefined1 *)0x4467ad;
  iVar2 = game_loop_helper_018b0();
  for (; local_88 != iVar2; local_88 = local_88 + 0x60) {
    *(undefined1 *)(local_88 + 0x3d) = 3;
    *(undefined4 *)(local_88 + 0x30) = local_84;
    *(undefined4 *)(local_88 + 0x2c) = local_84;
  }
  FUN_00405520();
  FUN_00630a40();
  if (*(char *)(in_ECX + 0x284) != '\0') {
    FUN_00405520();
    FUN_00630a40();
  }
  FUN_004054a0();
  FUN_004c3570();
  puStack_e4 = &DAT_007793b1;
  uStack_e8 = 6;
  uStack_ec = 0x446887;
  uStack_e8 = FUN_004274d0();
  uStack_ec = 0x44688d;
  cVar1 = FUN_00427e30();
  if (cVar1 != '\0') {
    uVar3 = FUN_004274d0(6);
    FUN_00405520(uVar3);
    FUN_004c7590(auStack_f8);
    local_8._0_1_ = 5;
    FUN_00405520(in_ECX[0x25d]);
    local_8 = CONCAT31(local_8._1_3_,4);
    puStack_e4 = (undefined1 *)FUN_004c7af0(local_5c);
    uStack_e8 = 0x44693c;
    FUN_004053e0();
    puStack_e4 = (undefined1 *)0x446944;
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_5c);
  }
  puStack_e4 = &DAT_007793b1;
  uStack_e8 = 7;
  uStack_ec = 0x44695d;
  uStack_e8 = FUN_004274d0();
  uStack_ec = 0x446963;
  cVar1 = FUN_00427e30();
  if (cVar1 != '\0') {
    uVar3 = FUN_004274d0(7);
    FUN_00405520(uVar3);
    FUN_004c7590(auStack_f8);
    local_8._0_1_ = 6;
    FUN_00405520(in_ECX[0x25d]);
    local_8 = CONCAT31(local_8._1_3_,4);
    puStack_e4 = (undefined1 *)FUN_004c7af0(local_74);
    uStack_e8 = 0x446a12;
    FUN_004053e0();
    puStack_e4 = (undefined1 *)0x446a1a;
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_74);
  }
  in_ECX[0x8b] = (int)(float)in_ECX[0x259];
  if (iVar4 == 0) {
    puStack_e4 = (undefined1 *)0x30d40;
    uStack_e8 = 8;
    uStack_ec = 0x446a4d;
    uStack_e8 = FUN_004274d0();
    uStack_ec = 0x446a56;
    FUN_004023d0();
  }
  else if (iVar4 == 1) {
    puStack_e4 = (undefined1 *)0x30d40;
    uStack_e8 = 9;
    uStack_ec = 0x446a77;
    uStack_e8 = FUN_004274d0();
    uStack_ec = 0x446a80;
    FUN_004023d0();
  }
  else if (iVar4 == 2) {
    puStack_e4 = (undefined1 *)0x30d40;
    uStack_e8 = 10;
    uStack_ec = 0x446aa1;
    uStack_e8 = FUN_004274d0();
    uStack_ec = 0x446aaa;
    FUN_004023d0();
  }
  in_ECX[0x1ba] = 1;
  local_8._0_1_ = 3;
  puStack_e4 = (undefined1 *)0x446ac4;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_2c);
  local_8 = CONCAT31(local_8._1_3_,2);
  puStack_e4 = (undefined1 *)0x446ad0;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_44);
  ExceptionList = local_10;
  return in_ECX;
}


/* ==== 004471a0  FUN_004471a0  size=323 ==== */

undefined4 * FUN_004471a0(undefined4 param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 *in_ECX;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070f72d;
  local_10 = ExceptionList;
  uVar1 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_00445660(param_1);
  local_8 = 0;
  *in_ECX = CHellSealedGate::vftable;
  in_ECX[0x278] = 0;
  in_ECX[0x279] = 0;
  in_ECX[0x27a] = 1;
  puVar2 = (undefined4 *)game_get_state_ptr_d1520(uVar1);
  in_ECX[0x7f] = *(undefined4 *)(*(int *)*puVar2 + 0x8c);
  uVar5 = in_ECX[0x7f];
  game_loop_helper_e9240(uVar5);
  iVar3 = FUN_005dc0b0(uVar5);
  piVar4 = (int *)game_get_flag_object_01a70(0xb);
  in_ECX[0x1b8] = (*piVar4 * *(int *)(iVar3 + 0x14)) / 100;
  in_ECX[0x1ba] = in_ECX[0x1b8];
  puVar2 = (undefined4 *)game_get_flag_object_01a70(0xf);
  in_ECX[0x279] = *puVar2;
  in_ECX[0x27a] = in_ECX[0x7f];
  FUN_004053a0("HELLGATE_OPEN_01");
  *(undefined1 *)(in_ECX + 0x23c) = 0;
  ExceptionList = local_10;
  return in_ECX;
}


/* ==== 004472f0  FUN_004472f0  size=1215 ==== */

undefined4 FUN_004472f0(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int *in_ECX;
  
  uVar1 = FUN_00445aa0();
  if (in_ECX[0x278] == 0) {
    if (in_ECX[0x1ba] <= (in_ECX[0x1b8] << 3) / 10) {
      iVar2 = FUN_0053c660();
      *(undefined1 *)(iVar2 + 0x30) = 0;
      FUN_004274d0();
      FUN_00405520();
      iVar2 = (**(code **)(*in_ECX + 0x78))();
      *(undefined4 *)(iVar2 + 0x84) = 1;
      uVar3 = FUN_004274d0(6);
      FUN_00405520(uVar3);
      (**(code **)(*in_ECX + 0x78))();
      in_ECX[0x278] = 1;
    }
  }
  else if (in_ECX[0x278] == 1) {
    if (in_ECX[0x1ba] <= (in_ECX[0x1b8] * 6) / 10) {
      iVar2 = FUN_0053c660();
      *(undefined1 *)(iVar2 + 0x30) = 0;
      FUN_00630c00();
      FUN_004274d0();
      FUN_00405520();
      iVar2 = (**(code **)(*in_ECX + 0x78))();
      *(undefined4 *)(iVar2 + 0x84) = 1;
      uVar3 = FUN_004274d0(7);
      FUN_00405520(uVar3);
      (**(code **)(*in_ECX + 0x78))();
      in_ECX[0x278] = 2;
    }
  }
  else if (in_ECX[0x278] == 2) {
    if (in_ECX[0x1ba] <= (in_ECX[0x1b8] << 2) / 10) {
      iVar2 = FUN_0053c660();
      *(undefined1 *)(iVar2 + 0x30) = 0;
      FUN_00630c00();
      FUN_004274d0();
      FUN_00405520();
      iVar2 = (**(code **)(*in_ECX + 0x78))();
      *(undefined4 *)(iVar2 + 0x84) = 1;
      uVar3 = FUN_004274d0(8);
      FUN_00405520(uVar3);
      (**(code **)(*in_ECX + 0x78))();
      in_ECX[0x278] = 3;
    }
  }
  else if (in_ECX[0x278] == 3) {
    if (in_ECX[0x1ba] <= (in_ECX[0x1b8] << 1) / 10) {
      iVar2 = FUN_0053c660();
      *(undefined1 *)(iVar2 + 0x30) = 0;
      FUN_00630c00();
      FUN_004274d0();
      FUN_00405520();
      iVar2 = (**(code **)(*in_ECX + 0x78))();
      *(undefined4 *)(iVar2 + 0x84) = 1;
      uVar3 = FUN_004274d0(9);
      FUN_00405520(uVar3);
      (**(code **)(*in_ECX + 0x78))();
      in_ECX[0x278] = 4;
    }
  }
  else if ((in_ECX[0x278] == 4) && (in_ECX[0x1ba] < 1)) {
    iVar2 = FUN_0053c660();
    *(undefined1 *)(iVar2 + 0x30) = 0;
    FUN_00630c00();
    (**(code **)(*in_ECX + 0x108))();
    FUN_004274d0();
    FUN_00405520();
    (**(code **)(*in_ECX + 0x78))();
    in_ECX[0x278] = 5;
  }
  return uVar1;
}


/* ==== 004477b0  FUN_004477b0  size=119 ==== */

void FUN_004477b0(void)

{
  undefined4 uVar1;
  int *in_ECX;
  
  if (in_ECX[0x278] == 5) {
    FUN_00630c00();
    (**(code **)(*in_ECX + 0x108))();
    uVar1 = FUN_004274d0(0xd);
    FUN_00405520(uVar1);
    (**(code **)(*in_ECX + 0x78))();
    in_ECX[0x278] = 6;
  }
  return;
}


/* ==== 00447830  FUN_00447830  size=230 ==== */

undefined4 * FUN_00447830(void)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070f75d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_004460a0();
  local_8 = 0;
  *in_ECX = CBreakableObjectActionFountain::vftable;
  uVar1 = FUN_004274d0(2);
  FUN_00405520(uVar1);
  FUN_00630a40();
  uVar1 = FUN_004274d0(3);
  FUN_00405520(uVar1);
  FUN_00630a40();
  in_ECX[0x1ba] = 400;
  FUN_004054a0("FOUNTAIN_FLOW_LOOP");
  FUN_004c3570();
  ExceptionList = local_10;
  return in_ECX;
}


/* ==== 00447920  FUN_00447920  size=173 ==== */

void FUN_00447920(void)

{
  undefined4 uVar1;
  int *in_ECX;
  
  if (in_ECX[0x268] != 0) {
    FUN_004274d0();
    FUN_00405520();
    FUN_00630790();
    (**(code **)(*in_ECX + 0xd8))();
    uVar1 = FUN_004274d0(3);
    FUN_00405520(uVar1);
    FUN_00630790();
    (**(code **)(*in_ECX + 0xd8))();
  }
  return;
}


/* ==== 004479d0  FUN_004479d0  size=20 ==== */

void FUN_004479d0(void)

{
  FUN_00446260();
  return;
}


/* ==== 004479f0  FUN_004479f0  size=50 ==== */

undefined4 * FUN_004479f0(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  FUN_004460a0(param_1);
  *in_ECX = CShallowKeepSkeletonPile::vftable;
  in_ECX[0x278] = 0;
  return in_ECX;
}


/* ==== 00447a30  FUN_00447a30  size=83 ==== */

undefined4 FUN_00447a30(undefined4 param_1)

{
  undefined4 uVar1;
  int *in_ECX;
  
  in_ECX[0x278] = in_ECX[0x278] + 1;
  if (4 < in_ECX[0x278]) {
    (**(code **)(*in_ECX + 0xb0))();
  }
  uVar1 = img_path_loader_12(param_1);
  return uVar1;
}


/* ==== 00447a90  FUN_00447a90  size=37 ==== */

undefined4 * FUN_00447a90(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  FUN_004460a0(param_1);
  *in_ECX = CSkeletonMagicstick::vftable;
  return in_ECX;
}


/* ==== 00447ac0  FUN_00447ac0  size=32 ==== */

void FUN_00447ac0(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x6e8) < 1) {
    FUN_00445fc0();
  }
  return;
}


/* ==== 00447ae0  FUN_00447ae0  size=518 ==== */

undefined4 * FUN_00447ae0(int param_1)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070f78d;
  local_10 = ExceptionList;
  uVar2 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_004460a0(param_1);
  local_8 = 0;
  *in_ECX = Ratrush::vftable;
  in_ECX[0x41] = 1;
  FUN_004053a0(&DAT_007793b1);
  if (in_ECX[0x267] != 0) {
    cVar1 = FUN_00427c60(param_1 + 0x44,"monster/peterthepiper/particle/ratrushback.ptl",uVar2);
    if (cVar1 == '\0') {
      cVar1 = FUN_00427c60(param_1 + 0x44,"monster/peterthepiper/particle/ratrushbackup.ptl",uVar2);
      if (cVar1 == '\0') {
        cVar1 = FUN_00427c60(param_1 + 0x44,"monster/peterthepiper/particle/ratrushbackdown.ptl",
                             uVar2);
        if (cVar1 == '\0') {
          cVar1 = FUN_00427c60(param_1 + 0x44,"monster/peterthepiper/particle/ratrushcenter.ptl");
          if (cVar1 == '\0') {
            cVar1 = FUN_00427c60(param_1 + 0x44,"monster/peterthepiper/particle/ratrushcenterup.ptl"
                                );
            if (cVar1 == '\0') {
              cVar1 = FUN_00427c60(param_1 + 0x44,
                                   "monster/peterthepiper/particle/ratrushcenterdown.ptl");
              if (cVar1 == '\0') {
                cVar1 = FUN_00427c60(param_1 + 0x44,"monster/peterthepiper/particle/ratrushup.ptl");
                if (cVar1 == '\0') {
                  cVar1 = FUN_00427c60(param_1 + 0x44,
                                       "monster/peterthepiper/particle/ratrushdown.ptl");
                  if (cVar1 != '\0') {
                    in_ECX[0x7d] = 1;
                  }
                }
                else {
                  in_ECX[0x7d] = 0xffffffff;
                }
              }
              else {
                in_ECX[0x7d] = 1;
              }
            }
            else {
              in_ECX[0x7d] = 1;
            }
          }
          else {
            in_ECX[0x7d] = 1;
          }
        }
        else {
          in_ECX[0x7d] = 0xffffffff;
        }
      }
      else {
        in_ECX[0x7d] = 0xffffffff;
      }
    }
    else {
      in_ECX[0x7d] = 0xffffffff;
    }
    piVar3 = (int *)game_get_flag_object_01a70(0);
    *(undefined4 *)(*piVar3 + 0x4c) = in_ECX[0x7d];
  }
  ExceptionList = local_10;
  return in_ECX;
}


/* ==== 00447cf0  FUN_00447cf0  size=46 ==== */

void FUN_00447cf0(int param_1)

{
  int in_ECX;
  
  if ((param_1 == 0) && (*(int *)(in_ECX + 0x958) == 0)) {
    FUN_0040d5f0();
  }
  return;
}


/* ==== 00447d20  FUN_00447d20  size=85 ==== */

void FUN_00447d20(undefined4 param_1)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x99c) == 0) {
    FUN_0063cef0(param_1,600);
    FUN_0063ccb0(param_1);
    FUN_0063c710();
    FUN_0063c8c0(param_1);
    FUN_00634f40();
  }
  return;
}


/* ==== 00447d80  FUN_00447d80  size=88 ==== */

void FUN_00447d80(void)

{
  int *piVar1;
  int *in_ECX;
  
  (**(code **)(*in_ECX + 0x108))(0);
  if (in_ECX[0x267] == 0) {
    (**(code **)(*in_ECX + 0x24))();
  }
  else {
    piVar1 = (int *)game_get_flag_object_01a70(0);
    *(int *)(*piVar1 + 0x4c) = in_ECX[0x7d];
  }
  return;
}


/* ==== 00447de0  FUN_00447de0  size=246 ==== */

undefined4 * FUN_00447de0(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070f75d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_004460a0();
  local_8 = 0;
  *in_ECX = mobgen_1::vftable;
  in_ECX[0x279] = 0;
  puVar1 = (undefined4 *)game_get_flag_object_01a70();
  in_ECX[0x278] = *puVar1;
  uVar2 = FUN_004274d0(0);
  FUN_00405520(uVar2);
  iVar3 = FUN_00630a40();
  *(undefined4 *)(iVar3 + 0x84) = 1;
  FUN_0062fd90();
  *(undefined4 *)(iVar3 + 0x110) = 4;
  ExceptionList = local_10;
  return in_ECX;
}


/* ==== 00447ee0  FUN_00447ee0  size=382 ==== */

void FUN_00447ee0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int *in_ECX;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int local_c;
  
  in_ECX[0x278] = in_ECX[0x278] - param_1;
  if (in_ECX[0x278] < 1) {
    in_ECX[0x279] = in_ECX[0x279] + 3;
    piVar1 = (int *)game_get_flag_object_01a70(in_ECX[0x279] + 0xb);
    in_ECX[0x278] = *piVar1;
    piVar1 = (int *)game_get_flag_object_01a70(in_ECX[0x279] + 0xb);
    if (*piVar1 == 0) {
      (**(code **)(*in_ECX + 0xb0))();
    }
    else {
      local_c = 0;
      while( true ) {
        piVar1 = (int *)game_get_flag_object_01a70(in_ECX[0x279] + 0xc);
        if (*piVar1 <= local_c) break;
        uVar13 = 0;
        uVar12 = 3000;
        uVar11 = 0x5dc;
        uVar10 = 0xffffffff;
        uVar9 = 0xffffffff;
        uVar8 = 0;
        uVar7 = 100;
        uVar6 = 0;
        piVar1 = (int *)game_get_flag_object_01a70(10);
        iVar3 = in_ECX[0x8a] + *piVar1;
        piVar1 = (int *)game_get_flag_object_01a70(9);
        iVar4 = in_ECX[0x89] + *piVar1;
        puVar2 = (undefined4 *)game_get_flag_object_01a70(in_ECX[0x279] + 0xd);
        uVar5 = *puVar2;
        puVar2 = (undefined4 *)game_get_flag_object_01a70(8);
        FUN_00515550(*puVar2,uVar5,iVar4,iVar3,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11,uVar12,uVar13);
        local_c = local_c + 1;
      }
    }
  }
  return;
}


/* ==== 00448060  FUN_00448060  size=222 ==== */

undefined4 * FUN_00448060(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070f75d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_004460a0();
  local_8 = 0;
  *in_ECX = mobgen_2::vftable;
  puVar1 = (undefined4 *)game_get_flag_object_01a70();
  in_ECX[0x278] = *puVar1;
  uVar2 = FUN_004274d0(0);
  FUN_00405520(uVar2);
  iVar3 = FUN_00630a40();
  *(undefined4 *)(iVar3 + 0x84) = 1;
  FUN_0062fd90();
  *(undefined4 *)(iVar3 + 0x110) = 4;
  ExceptionList = local_10;
  return in_ECX;
}


/* ==== 00448140  FUN_00448140  size=230 ==== */

void FUN_00448140(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int in_ECX;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  *(int *)(in_ECX + 0x9e0) = *(int *)(in_ECX + 0x9e0) - param_1;
  if (*(int *)(in_ECX + 0x9e0) < 1) {
    puVar1 = (undefined4 *)game_get_flag_object_01a70(0xb);
    *(undefined4 *)(in_ECX + 0x9e0) = *puVar1;
    uVar13 = 0;
    uVar12 = 3000;
    uVar11 = 0x5dc;
    uVar10 = 0xffffffff;
    uVar9 = 0xffffffff;
    uVar8 = 0;
    uVar7 = 100;
    uVar6 = 0;
    piVar2 = (int *)game_get_flag_object_01a70(10);
    iVar3 = *(int *)(in_ECX + 0x228) + *piVar2;
    piVar2 = (int *)game_get_flag_object_01a70(9);
    iVar4 = *(int *)(in_ECX + 0x224) + *piVar2;
    puVar1 = (undefined4 *)game_get_flag_object_01a70(0xd);
    uVar5 = *puVar1;
    puVar1 = (undefined4 *)game_get_flag_object_01a70(8);
    FUN_00515550(*puVar1,uVar5,iVar4,iVar3,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11,uVar12,uVar13);
  }
  piVar2 = (int *)game_get_state_ptr_d1520();
  *(undefined1 *)(*piVar2 + 0xb3) = 1;
  return;
}


/* ==== 00448230  FUN_00448230  size=80 ==== */

undefined4 * FUN_00448230(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  
  FUN_004460a0(param_1);
  *in_ECX = eventbarrier_1::vftable;
  in_ECX[0x279] = 0;
  puVar1 = (undefined4 *)game_get_flag_object_01a70(8);
  in_ECX[0x278] = *puVar1;
  return in_ECX;
}


/* ==== 00448280  FUN_00448280  size=249 ==== */

void FUN_00448280(int param_1)

{
  int *piVar1;
  int *in_ECX;
  
  if ((in_ECX[0x278] != 0) && (in_ECX[0x278] = in_ECX[0x278] - param_1, in_ECX[0x278] < 1)) {
    in_ECX[0x278] = 0;
    piVar1 = (int *)game_get_flag_object_01a70(7);
    in_ECX[0x279] = *piVar1;
    (**(code **)(*in_ECX + 0x108))(0);
  }
  if ((in_ECX[0x279] != 0) && (in_ECX[0x279] = in_ECX[0x279] - param_1, in_ECX[0x279] < 1)) {
    in_ECX[0x279] = 0;
    FUN_0042f340(in_ECX,0,0,0,0x7573,in_ECX[0x7d]);
    (**(code **)(*in_ECX + 0xb0))();
  }
  return;
}


/* ==== 00448380  FUN_00448380  size=80 ==== */

undefined4 * FUN_00448380(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  
  FUN_004460a0(param_1);
  *in_ECX = eventbarrier_2::vftable;
  in_ECX[0x279] = 0;
  puVar1 = (undefined4 *)game_get_flag_object_01a70(10);
  in_ECX[0x278] = *puVar1;
  return in_ECX;
}


/* ==== 004483d0  FUN_004483d0  size=446 ==== */

void FUN_004483d0(int param_1)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  int *in_ECX;
  undefined1 local_1c [4];
  int *local_18;
  int local_14;
  undefined1 local_10 [4];
  int *local_c;
  char local_5;
  
  local_c = in_ECX;
  if (in_ECX[0x278] != 0) {
    local_5 = '\0';
    game_get_state_ptr_d1520();
    piVar3 = (int *)FUN_004d58e0();
    local_14 = *piVar3 + 0x170;
    FUN_0042a9e0(local_10);
    FUN_0042a9c0(local_1c);
    while (cVar2 = FUN_0040d2d0(local_1c), cVar2 != '\0') {
      local_18 = (int *)FUN_0042a580();
      if ((*(int *)(*local_18 + 0x204) == 100) &&
         (iVar1 = *local_18, piVar3 = (int *)game_get_flag_object_01a70(8), *(int *)(iVar1 + 0x1e4) == *piVar3)) {
        local_5 = '\x01';
        break;
      }
      FUN_0042a560();
    }
    if (local_5 == '\0') {
      local_c[0x278] = local_c[0x278] - param_1;
      if (local_c[0x278] < 1) {
        local_c[0x278] = 0;
        piVar3 = (int *)game_get_flag_object_01a70(7);
        local_c[0x279] = *piVar3;
        (**(code **)(*local_c + 0x108))(0);
      }
    }
    else {
      piVar3 = (int *)game_get_flag_object_01a70(10);
      local_c[0x278] = *piVar3;
    }
  }
  if ((local_c[0x279] != 0) && (local_c[0x279] = local_c[0x279] - param_1, local_c[0x279] < 1)) {
    local_c[0x279] = 0;
    FUN_0042f340(local_c,0,0,0,0x7573,local_c[0x7d]);
    (**(code **)(*local_c + 0xb0))();
  }
  return;
}


/* ==== 00448590  FUN_00448590  size=305 ==== */

undefined4 * FUN_00448590(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070f75d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_004460a0();
  local_8 = 0;
  *in_ECX = blackrune::vftable;
  in_ECX[0x26b] = 1;
  in_ECX[0x26a] = 1;
  uVar1 = FUN_004274d0(0);
  FUN_00405520(uVar1);
  FUN_00630a40();
  uVar1 = FUN_004274d0(1);
  FUN_00405520(uVar1);
  iVar2 = FUN_00630a40();
  *(undefined4 *)(iVar2 + 0x110) = 4;
  puVar3 = (undefined4 *)game_get_flag_object_01a70();
  in_ECX[0x27a] = *puVar3;
  in_ECX[0x279] = 2;
  puVar3 = (undefined4 *)game_get_flag_object_01a70();
  in_ECX[0x278] = *puVar3;
  ExceptionList = local_10;
  return in_ECX;
}


/* ==== 004486d0  FUN_004486d0  size=490 ==== */

void FUN_004486d0(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int in_ECX;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 local_20 [4];
  undefined4 local_1c;
  int *local_18;
  int local_14;
  int local_10;
  undefined1 local_c [4];
  int local_8;
  
  if (*(int *)(in_ECX + 0x9e8) != 0) {
    *(int *)(in_ECX + 0x9e8) = *(int *)(in_ECX + 0x9e8) - param_1;
    local_8 = in_ECX;
    if (*(int *)(in_ECX + 0x9e8) < 1) {
      *(undefined4 *)(in_ECX + 0x9e8) = 0;
      local_1c = 0xffffffff;
      FUN_0040d490(&local_1c);
      *(undefined4 *)(local_8 + 0x130) = 0x5dc;
    }
    *(int *)(local_8 + 0x9e0) = *(int *)(local_8 + 0x9e0) - param_1;
    if (*(int *)(local_8 + 0x9e0) < 1) {
      *(int *)(local_8 + 0x9e4) = *(int *)(local_8 + 0x9e4) + -1;
      puVar2 = (undefined4 *)game_get_flag_object_01a70(9);
      *(undefined4 *)(local_8 + 0x9e0) = *puVar2;
      local_10 = 0;
      game_get_state_ptr_d1520();
      piVar3 = (int *)FUN_004d58e0();
      local_14 = *piVar3 + 0x170;
      FUN_0042a9e0(local_c);
      FUN_0042a9c0(local_20);
      while (cVar1 = FUN_0040d2d0(local_20), cVar1 != '\0') {
        local_18 = (int *)FUN_0042a580();
        if ((*(int *)(*local_18 + 0x204) == 100) && (*(int *)(*local_18 + 0x1e4) == 1000)) {
          local_10 = local_10 + 1;
        }
        FUN_0042a560();
      }
      if ((*(int *)(local_8 + 0x9e4) < 1) ||
         (piVar3 = (int *)game_get_flag_object_01a70(0xb), local_10 <= *piVar3)) {
        *(undefined4 *)(local_8 + 0x9e0) = 0;
        *(undefined4 *)(local_8 + 0x9e4) = 0;
      }
      else {
        uVar12 = 3000;
        uVar11 = 0x5dc;
        uVar10 = *(undefined4 *)(local_8 + 500);
        uVar9 = 0;
        uVar8 = 100;
        uVar7 = 0;
        uVar6 = *(undefined4 *)(local_8 + 0x228);
        uVar5 = *(undefined4 *)(local_8 + 0x224);
        puVar2 = (undefined4 *)game_get_flag_object_01a70(10);
        iVar4 = FUN_0053c720(1000,*puVar2,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11,uVar12);
        *(undefined1 *)(iVar4 + 0x30) = 0;
      }
    }
  }
  return;
}


/* ==== 004488c0  FUN_004488c0  size=292 ==== */

undefined4 * FUN_004488c0(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070f75d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_004460a0();
  local_8 = 0;
  *in_ECX = bluekrune::vftable;
  in_ECX[0x26b] = 1;
  in_ECX[0x26a] = 1;
  puVar1 = (undefined4 *)game_get_flag_object_01a70();
  in_ECX[0x278] = *puVar1;
  puVar1 = (undefined4 *)game_get_flag_object_01a70();
  in_ECX[0x279] = *puVar1;
  uVar2 = FUN_004274d0(0);
  FUN_00405520(uVar2);
  FUN_00630a40();
  uVar2 = FUN_004274d0(1);
  FUN_00405520(uVar2);
  iVar3 = FUN_00630a40();
  *(undefined4 *)(iVar3 + 0x110) = 4;
  ExceptionList = local_10;
  return in_ECX;
}


/* ==== 004489f0  FUN_004489f0  size=638 ==== */

void FUN_004489f0(int param_1)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  int *in_ECX;
  uint uVar4;
  int *local_3c;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_1c [4];
  undefined4 local_18;
  int local_14;
  undefined1 local_10 [4];
  int *local_c;
  int *local_8;
  
  if (in_ECX[0x278] != 0) {
    in_ECX[0x278] = in_ECX[0x278] - param_1;
    local_8 = in_ECX;
    if (in_ECX[0x278] < 1) {
      in_ECX[0x278] = 0;
      local_18 = 0xffffffff;
      FUN_0040d490(&local_18);
      local_8[0x4c] = 0x5dc;
    }
    local_8[0x279] = local_8[0x279] - param_1;
    if (local_8[0x279] < 1) {
      piVar2 = (int *)game_get_flag_object_01a70(10);
      local_8[0x279] = *piVar2;
      game_get_state_ptr_d1520();
      piVar2 = (int *)FUN_004d58e0();
      local_14 = *piVar2 + 0x170;
      FUN_0042a9e0(local_10);
      FUN_0042a9c0(local_1c);
      while (cVar1 = FUN_0040d2d0(local_1c), cVar1 != '\0') {
        local_c = (int *)FUN_0042a580();
        cVar1 = FUN_006352e0();
        if ((((cVar1 == '\0') && (cVar1 = (**(code **)(*local_8 + 0x88))(*local_c), cVar1 != '\0'))
            && (uVar3 = *(int *)(*local_c + 0x224) - local_8[0x89], uVar4 = (int)uVar3 >> 0x1f,
               piVar2 = (int *)game_get_flag_object_01a70(9), (int)((uVar3 ^ uVar4) - uVar4) <= *piVar2)) &&
           ((uVar3 = *(int *)(*local_c + 0x228) - local_8[0x8a], uVar4 = (int)uVar3 >> 0x1f,
            piVar2 = (int *)game_get_flag_object_01a70(9), (int)((uVar3 ^ uVar4) - uVar4) <= *piVar2 &&
            (*(int *)(*local_c + 0x22c) == 0)))) {
          FUN_0042dec0();
          if ((*(int *)(*local_c + 500) == 1) && (local_8[0x89] < *(int *)(*local_c + 0x224))) {
            local_28 = 0xffffffff;
          }
          else if ((*(int *)(*local_c + 500) == -1) && (*(int *)(*local_c + 0x224) < local_8[0x89]))
          {
            local_28 = 0xffffffff;
          }
          local_3c = local_8;
          local_38 = *local_c;
          local_34 = *(undefined4 *)(*local_c + 0x224);
          local_30 = *(undefined4 *)(*local_c + 0x228);
          local_2c = *(undefined4 *)(*local_c + 0x22c);
          (**(code **)(*(int *)*local_c + 0xcc))(&local_3c);
        }
        FUN_0042a560();
      }
    }
  }
  return;
}


/* ==== 00448c70  FUN_00448c70  size=292 ==== */

undefined4 * FUN_00448c70(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070f75d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_004460a0();
  local_8 = 0;
  *in_ECX = goldrune::vftable;
  in_ECX[0x26b] = 1;
  in_ECX[0x26a] = 1;
  puVar1 = (undefined4 *)game_get_flag_object_01a70();
  in_ECX[0x278] = *puVar1;
  puVar1 = (undefined4 *)game_get_flag_object_01a70();
  in_ECX[0x279] = *puVar1;
  uVar2 = FUN_004274d0(0);
  FUN_00405520(uVar2);
  FUN_00630a40();
  uVar2 = FUN_004274d0(1);
  FUN_00405520(uVar2);
  iVar3 = FUN_00630a40();
  *(undefined4 *)(iVar3 + 0x110) = 4;
  ExceptionList = local_10;
  return in_ECX;
}


/* ==== 00448da0  FUN_00448da0  size=700 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00448da0(int param_1)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  int *in_ECX;
  uint uVar6;
  WorkQueue local_3c [24];
  undefined4 local_24;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070f7bd;
  local_10 = ExceptionList;
  local_14 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (in_ECX[0x278] != 0) {
    in_ECX[0x278] = in_ECX[0x278] - param_1;
    if (in_ECX[0x278] < 1) {
      in_ECX[0x278] = 0;
      FUN_0040d490();
      in_ECX[0x4c] = 0x5dc;
    }
    in_ECX[0x279] = in_ECX[0x279] - param_1;
    if (in_ECX[0x279] < 1) {
      piVar2 = (int *)game_get_flag_object_01a70();
      in_ECX[0x279] = *piVar2;
      game_get_state_ptr_d1520();
      FUN_004d58e0();
      FUN_0042a9e0();
      FUN_0042a9c0();
      while (cVar1 = FUN_0040d2d0(), cVar1 != '\0') {
        piVar2 = (int *)FUN_0042a580();
        cVar1 = FUN_006352e0();
        if ((((cVar1 == '\0') && (cVar1 = (**(code **)(*in_ECX + 0x88))(), cVar1 != '\0')) &&
            (uVar3 = *(int *)(*piVar2 + 0x224) - in_ECX[0x89], uVar6 = (int)uVar3 >> 0x1f,
            (int)((uVar3 ^ uVar6) - uVar6) < 0x5b)) &&
           ((uVar3 = *(int *)(*piVar2 + 0x228) - in_ECX[0x8a], uVar6 = (int)uVar3 >> 0x1f,
            (int)((uVar3 ^ uVar6) - uVar6) < 0x5b && (*(int *)(*piVar2 + 0x22c) == 0)))) {
          FUN_004054a0(&DAT_007799f0);
          iVar4 = FUN_006356a0();
          if ((iVar4 == 0) && (iVar4 = FUN_00641430(), *(int *)(*piVar2 + 0x728) <= iVar4 % 100)) {
            FUN_0042df20();
            local_8 = 0;
            FUN_004053a0();
            FUN_0044e460();
            iVar4 = *piVar2;
            puVar5 = (undefined4 *)game_get_flag_object_01a70();
            *puVar5 = *(undefined4 *)(iVar4 + 0x224);
            iVar4 = *piVar2;
            puVar5 = (undefined4 *)game_get_flag_object_01a70();
            *puVar5 = *(undefined4 *)(iVar4 + 0x228);
            puVar5 = (undefined4 *)game_get_flag_object_01a70();
            local_24 = *puVar5;
            FUN_0044e230();
            FUN_00635d80();
            local_8 = 0xffffffff;
            Concurrency::details::WorkQueue::~WorkQueue(local_3c);
          }
        }
        FUN_0042a560();
      }
    }
  }
  ExceptionList = local_10;
  return;
}


/* ==== 00449060  FUN_00449060  size=554 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 * FUN_00449060(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *in_ECX;
  undefined1 auStack_84 [16];
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint uStack_68;
  int local_38;
  function<void___cdecl(void)> local_2c [24];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070f813;
  local_10 = ExceptionList;
  uStack_68 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uStack_6c = param_1;
  uStack_70 = 0x449098;
  local_14 = uStack_68;
  FUN_0042fb60();
  local_8 = 0;
  *in_ECX = CMapParticleFactoryA::vftable;
  uStack_6c = 0x4490b6;
  FUN_0040d8b0();
  local_8 = CONCAT31(local_8._1_3_,1);
  uStack_6c = in_ECX[0x79];
  uStack_70 = 0x4490c9;
  game_loop_helper_e9240();
  uStack_70 = 0x4490d0;
  uVar1 = FUN_005e53f0();
  uStack_70 = 0;
  uStack_74 = 0x4490e0;
  puVar2 = (undefined4 *)game_get_flag_object_01a70();
  in_ECX[0x268] = *puVar2;
  uStack_70 = 0x4490f6;
  uVar3 = FUN_00401a90();
  if (uVar3 < 2) {
    in_ECX[0x269] = 0;
  }
  else {
    uStack_70 = 1;
    uStack_74 = 0x449108;
    puVar2 = (undefined4 *)game_get_flag_object_01a70();
    in_ECX[0x269] = *puVar2;
  }
  uStack_70 = 0x44912d;
  uVar3 = FUN_00401a90();
  if (uVar3 < 3) {
    in_ECX[0x26a] = 0;
  }
  else {
    uStack_70 = 2;
    uStack_74 = 0x44913f;
    puVar2 = (undefined4 *)game_get_flag_object_01a70();
    in_ECX[0x26a] = *puVar2;
  }
  uVar4 = FUN_004274d0(0);
  FUN_00405520(uVar4);
  FUN_004c7590(auStack_84);
  local_8._0_1_ = 2;
  FUN_00405520(uVar1);
  local_8 = CONCAT31(local_8._1_3_,1);
  uStack_70 = FUN_004c7af0(local_2c);
  uStack_74 = 0x4491d0;
  FUN_004053e0();
  uStack_70 = 0x4491d8;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_2c);
  uStack_70 = 0;
  uStack_74 = 0x4491e0;
  FUN_00634ac0();
  uStack_74 = 0x4491e7;
  FUN_0044de30();
  uStack_70 = 0x4491ee;
  iVar5 = FUN_0044e2b0();
  for (local_38 = 0; local_38 < (iVar5 * 0x10 + 0x27f) / 0x280; local_38 = local_38 + 1) {
    FUN_00405520();
    iVar6 = FUN_004aa990();
    *(undefined1 *)(iVar6 + 0x35) = 1;
  }
  ExceptionList = local_10;
  return in_ECX;
}


/* ==== 00449290  FUN_00449290  size=368 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 * FUN_00449290(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *in_ECX;
  undefined1 auStack_7c [16];
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  uint uStack_60;
  function<void___cdecl(void)> local_2c [24];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070f863;
  local_10 = ExceptionList;
  uStack_60 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uStack_64 = param_1;
  uStack_68 = 0x4492c8;
  local_14 = uStack_60;
  FUN_0042fb60();
  local_8 = 0;
  *in_ECX = CMapParticleFactoryB::vftable;
  uStack_64 = 0x4492e6;
  FUN_0040d8b0();
  local_8._0_1_ = 1;
  uStack_64 = in_ECX[0x79];
  uStack_68 = 0x4492f9;
  game_loop_helper_e9240();
  uStack_68 = 0x449300;
  uVar1 = FUN_005e53f0();
  uStack_68 = 0;
  uStack_6c = 0x449310;
  puVar2 = (undefined4 *)game_get_flag_object_01a70();
  in_ECX[0x268] = *puVar2;
  uVar3 = FUN_004274d0(0);
  FUN_00405520(uVar3);
  FUN_004c7590(auStack_7c);
  local_8._0_1_ = 2;
  FUN_00405520(uVar1);
  local_8 = CONCAT31(local_8._1_3_,1);
  uStack_68 = FUN_004c7af0(local_2c);
  uStack_6c = 0x449392;
  FUN_004053e0();
  uStack_68 = 0x44939a;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_2c);
  FUN_00405520();
  iVar4 = FUN_004aa990();
  *(undefined1 *)(iVar4 + 0x35) = 1;
  ExceptionList = local_10;
  return in_ECX;
}


/* ==== 00449400  FUN_00449400  size=11981 ==== */

undefined4 FUN_00449400(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_374;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007101da;
  local_10 = ExceptionList;
  uVar1 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar2 < 0x402) {
    if (iVar2 == 0x401) {
      iVar2 = crt_or_heap_alloc_helper(0x9a4,uVar1);
      local_8 = 0x37;
      if (iVar2 != 0) {
        uVar3 = FUN_0043f3f0(param_1);
        ExceptionList = local_10;
        return uVar3;
      }
      ExceptionList = local_10;
      return 0;
    }
    switch(iVar2) {
    case 0x340:
      iVar2 = crt_or_heap_alloc_helper(0x9e8,uVar1);
      local_8 = 3;
      if (iVar2 != 0) {
        uVar3 = FUN_00448230(param_1);
        ExceptionList = local_10;
        return uVar3;
      }
      ExceptionList = local_10;
      return 0;
    case 0x341:
      iVar2 = crt_or_heap_alloc_helper(0x9e8,uVar1);
      local_8 = 4;
      if (iVar2 != 0) {
        uVar3 = FUN_00448380(param_1);
        ExceptionList = local_10;
        return uVar3;
      }
      ExceptionList = local_10;
      return 0;
    case 0x345:
      iVar2 = crt_or_heap_alloc_helper(0x9e8,uVar1);
      local_8 = 5;
      if (iVar2 != 0) {
        uVar3 = FUN_00447de0(param_1);
        ExceptionList = local_10;
        return uVar3;
      }
      ExceptionList = local_10;
      return 0;
    case 0x346:
      iVar2 = crt_or_heap_alloc_helper(0x9e4,uVar1);
      local_8 = 6;
      if (iVar2 != 0) {
        uVar3 = FUN_00448060(param_1);
        ExceptionList = local_10;
        return uVar3;
      }
      ExceptionList = local_10;
      return 0;
    }
    goto switchD_00449460_caseD_342;
  }
  if (iVar2 < 0x7533) {
    if (iVar2 == 0x7532) {
      iVar2 = crt_or_heap_alloc_helper(0x9a0,uVar1);
      local_8 = 0x1f;
      if (iVar2 != 0) {
        uVar3 = FUN_00442bf0(param_1);
        ExceptionList = local_10;
        return uVar3;
      }
      ExceptionList = local_10;
      return 0;
    }
    if (iVar2 < 0xa33) {
      if (iVar2 != 0xa32) {
        if (iVar2 < 0x7d1) {
          if (iVar2 != 2000) {
            switch(iVar2) {
            case 0x420:
              iVar2 = crt_or_heap_alloc_helper(0x9a0,uVar1);
              local_8 = 0x6d;
              if (iVar2 != 0) {
                uVar3 = FUN_0043c880(param_1);
                ExceptionList = local_10;
                return uVar3;
              }
              ExceptionList = local_10;
              return 0;
            case 0x42a:
            case 0x42b:
            case 0x42c:
              goto switchD_004494d1_caseD_42a;
            }
            goto switchD_00449460_caseD_342;
          }
        }
        else if (iVar2 < 0x8fd) {
          if (iVar2 != 0x8fc) {
            switch(iVar2) {
            case 0x7d1:
            case 0x7d2:
            case 0x7da:
            case 0x7db:
            case 0x7dc:
            case 0x834:
            case 0x835:
            case 0x836:
            case 0x83e:
            case 0x83f:
            case 0x840:
            case 0x898:
            case 0x899:
            case 0x89a:
            case 0x8a2:
            case 0x8a3:
            case 0x8a4:
              break;
            default:
              goto switchD_00449460_caseD_342;
            }
          }
        }
        else if (iVar2 < 0xa29) {
          if (iVar2 != 0xa28) {
            switch(iVar2) {
            case 0x8fd:
            case 0x8fe:
            case 0x906:
            case 0x907:
            case 0x908:
            case 0x960:
            case 0x961:
            case 0x962:
            case 0x96a:
            case 0x96b:
            case 0x96c:
            case 0x9c4:
            case 0x9c5:
            case 0x9c6:
            case 0x9ce:
            case 0x9cf:
            case 0x9d0:
              break;
            default:
              goto switchD_00449460_caseD_342;
            }
          }
        }
        else if ((iVar2 != 0xa29) && (iVar2 != 0xa2a)) goto switchD_00449460_caseD_342;
      }
    }
    else {
      if (0x4e22 < iVar2) {
        if (iVar2 < 0x5217) {
          if (iVar2 != 0x5216) {
            switch(iVar2) {
            case 0x4e28:
              iVar2 = crt_or_heap_alloc_helper(0x9b4,uVar1);
              local_8 = 0x50;
              if (iVar2 != 0) {
                uVar3 = FUN_00437d20(param_1);
                ExceptionList = local_10;
                return uVar3;
              }
              ExceptionList = local_10;
              return 0;
            case 0x4e29:
              iVar2 = crt_or_heap_alloc_helper(0x9a0,uVar1);
              local_8 = 0x60;
              if (iVar2 != 0) {
                uVar3 = FUN_00439570(param_1);
                ExceptionList = local_10;
                return uVar3;
              }
              ExceptionList = local_10;
              return 0;
            case 0x4e2a:
              iVar2 = crt_or_heap_alloc_helper(0x9a0,uVar1);
              local_8 = 0x61;
              if (iVar2 != 0) {
                uVar3 = FUN_00439810(param_1);
                ExceptionList = local_10;
                return uVar3;
              }
              ExceptionList = local_10;
              return 0;
            case 0x4e2b:
              iVar2 = crt_or_heap_alloc_helper(0x9dc,uVar1);
              local_8 = 0x54;
              if (iVar2 != 0) {
                uVar3 = FUN_00435190(param_1);
                ExceptionList = local_10;
                return uVar3;
              }
              ExceptionList = local_10;
              return 0;
            case 0x4e2c:
              iVar2 = crt_or_heap_alloc_helper(0x9c0,uVar1);
              local_8 = 0x55;
              if (iVar2 != 0) {
                uVar3 = FUN_004369d0(param_1);
                ExceptionList = local_10;
                return uVar3;
              }
              ExceptionList = local_10;
              return 0;
            case 0x4e2d:
              iVar2 = crt_or_heap_alloc_helper(0x9d8,uVar1);
              local_8 = 0x56;
              if (iVar2 != 0) {
                uVar3 = FUN_00435ef0(param_1);
                ExceptionList = local_10;
                return uVar3;
              }
              ExceptionList = local_10;
              return 0;
            default:
              goto switchD_00449460_caseD_342;
            case 0x4e30:
              iVar2 = crt_or_heap_alloc_helper(0x9a0,uVar1);
              local_8 = 0x62;
              if (iVar2 != 0) {
                uVar3 = FUN_004372a0(param_1);
                ExceptionList = local_10;
                return uVar3;
              }
              ExceptionList = local_10;
              return 0;
            case 0x4e31:
              iVar2 = crt_or_heap_alloc_helper(0x9a0,uVar1);
              local_8 = 99;
              if (iVar2 != 0) {
                uVar3 = FUN_00439b00(param_1);
                ExceptionList = local_10;
                return uVar3;
              }
              ExceptionList = local_10;
              return 0;
            case 0x4e33:
              iVar2 = crt_or_heap_alloc_helper(0x9b4,uVar1);
              local_8 = 0x51;
              if (iVar2 != 0) {
                uVar3 = FUN_00437d20(param_1);
                ExceptionList = local_10;
                return uVar3;
              }
              ExceptionList = local_10;
              return 0;
            case 0x4e34:
              iVar2 = crt_or_heap_alloc_helper(0x9a0,uVar1);
              local_8 = 0x5e;
              if (iVar2 != 0) {
                uVar3 = FUN_00437440(param_1);
                ExceptionList = local_10;
                return uVar3;
              }
              ExceptionList = local_10;
              return 0;
            case 0x4e36:
              iVar2 = crt_or_heap_alloc_helper(0x9a8,uVar1);
              local_8 = 0x4e;
              if (iVar2 != 0) {
                uVar3 = FUN_004374e0(param_1);
                ExceptionList = local_10;
                return uVar3;
              }
              ExceptionList = local_10;
              return 0;
            case 0x4e37:
              iVar2 = crt_or_heap_alloc_helper(0x9ac,uVar1);
              local_8 = 0x57;
              if (iVar2 != 0) {
                uVar3 = FUN_00434910(param_1);
                ExceptionList = local_10;
                return uVar3;
              }
              ExceptionList = local_10;
              return 0;
            case 0x4e38:
              iVar2 = crt_or_heap_alloc_helper(0x9a0,uVar1);
              local_8 = 0x53;
              if (iVar2 != 0) {
                uVar3 = FUN_004387d0(param_1);
                ExceptionList = local_10;
                return uVar3;
              }
              ExceptionList = local_10;
              return 0;
            case 0x4e3c:
              iVar2 = crt_or_heap_alloc_helper(0x9a0,uVar1);
              local_8 = 0x4f;
              if (iVar2 != 0) {
                uVar3 = FUN_00437b50(param_1);
                ExceptionList = local_10;
                return uVar3;
              }
              ExceptionList = local_10;
              return 0;
            case 0x4e3f:
              iVar2 = crt_or_heap_alloc_helper(0x9a0,uVar1);
              local_8 = 100;
              if (iVar2 != 0) {
                uVar3 = FUN_00439980(param_1);
                ExceptionList = local_10;
                return uVar3;
              }
              ExceptionList = local_10;
              return 0;
            case 0x4e40:
              iVar2 = crt_or_heap_alloc_helper(0x9b0,uVar1);
              local_8 = 0x52;
              if (iVar2 != 0) {
                uVar3 = FUN_00438290(param_1);
                ExceptionList = local_10;
                return uVar3;
              }
              ExceptionList = local_10;
              return 0;
            case 0x4e41:
              iVar2 = crt_or_heap_alloc_helper(0x9a0,uVar1);
              local_8 = 0x59;
              if (iVar2 != 0) {
                uVar3 = FUN_00438970(param_1);
                ExceptionList = local_10;
                return uVar3;
              }
              ExceptionList = local_10;
              return 0;
            case 0x4e42:
              iVar2 = crt_or_heap_alloc_helper(0x9a0,uVar1);
              local_8 = 0x5a;
              if (iVar2 != 0) {
                uVar3 = FUN_00438970(param_1);
                ExceptionList = local_10;
                return uVar3;
              }
              ExceptionList = local_10;
              return 0;
            case 0x4e43:
              iVar2 = crt_or_heap_alloc_helper(0x9a0,uVar1);
              local_8 = 0x5b;
              if (iVar2 != 0) {
                uVar3 = FUN_00438970(param_1);
                ExceptionList = local_10;
                return uVar3;
              }
              ExceptionList = local_10;
              return 0;
            case 0x4e44:
              iVar2 = crt_or_heap_alloc_helper(0x9a0,uVar1);
              local_8 = 0x5c;
              if (iVar2 != 0) {
                uVar3 = FUN_00438970(param_1);
                ExceptionList = local_10;
                return uVar3;
              }
              ExceptionList = local_10;
              return 0;
            case 0x4e45:
              iVar2 = crt_or_heap_alloc_helper(0x9a0,uVar1);
              local_8 = 0x5d;
              if (iVar2 != 0) {
                uVar3 = FUN_004389a0(param_1);
                ExceptionList = local_10;
                return uVar3;
              }
              ExceptionList = local_10;
              return 0;
            case 0x4e49:
              iVar2 = crt_or_heap_alloc_helper(0x9b0,uVar1);
              local_8 = 0x65;
              if (iVar2 != 0) {
                uVar3 = FUN_00439ec0(param_1);
                ExceptionList = local_10;
                return uVar3;
              }
              ExceptionList = local_10;
              return 0;
            case 0x4e4b:
              iVar2 = crt_or_heap_alloc_helper(0x9a0,uVar1);
              local_8 = 0x66;
              if (iVar2 != 0) {
                uVar3 = FUN_00438d10(param_1);
                ExceptionList = local_10;
                return uVar3;
              }
              ExceptionList = local_10;
              return 0;
            case 0x4e4c:
              iVar2 = crt_or_heap_alloc_helper(0x9a8,uVar1);
              local_8 = 0x67;
              if (iVar2 != 0) {
                uVar3 = FUN_00438e70(param_1);
                ExceptionList = local_10;
                return uVar3;
              }
              ExceptionList = local_10;
              return 0;
            case 0x4e50:
              break;
            case 0x4e51:
              iVar2 = crt_or_heap_alloc_helper(0x9a0,uVar1);
              local_8 = 0x68;
              if (iVar2 != 0) {
                uVar3 = FUN_00439da0(param_1);
                ExceptionList = local_10;
                return uVar3;
              }
              ExceptionList = local_10;
              return 0;
            case 0x4e52:
              iVar2 = crt_or_heap_alloc_helper(0x9a0,uVar1);
              local_8 = 0x69;
              if (iVar2 != 0) {
                uVar3 = FUN_00439460(param_1);
                ExceptionList = local_10;
                return uVar3;
              }
              ExceptionList = local_10;
              return 0;
            }
          }
        }
        else if (iVar2 < 0x56cf) {
          if (iVar2 != 0x56ce) {
            switch(iVar2) {
            case 0x56c0:
            case 0x56c5:
            case 0x56c6:
            case 0x56c7:
            case 0x56c8:
            case 0x56ca:
              break;
            default:
              goto switchD_00449460_caseD_342;
            }
          }
        }
        else if (iVar2 < 0x59e5) {
          if (iVar2 == 0x59e4) {
            iVar2 = crt_or_heap_alloc_helper(0x9a4,uVar1);
            local_8 = 0x34;
            if (iVar2 != 0) {
              uVar3 = FUN_00444170(param_1);
              ExceptionList = local_10;
              return uVar3;
            }
            ExceptionList = local_10;
            return 0;
          }
          if ((iVar2 != 0x56d2) && (iVar2 != 0x56d3)) goto switchD_00449460_caseD_342;
        }
        else if ((iVar2 != 0x59e8) && (iVar2 != 0x59f2)) goto switchD_00449460_caseD_342;
        goto switchD_004495e2_caseD_4e50;
      }
      if (iVar2 == 0x4e22) {
        iVar2 = crt_or_heap_alloc_helper(0x9b4,uVar1);
        local_8 = 0x58;
        if (iVar2 != 0) {
          uVar3 = FUN_00434220(param_1);
          ExceptionList = local_10;
          return uVar3;
        }
        ExceptionList = local_10;
        return 0;
      }
      if ((iVar2 != 0xa33) && (iVar2 != 0xa34)) goto switchD_00449460_caseD_342;
    }
    iVar2 = crt_or_heap_alloc_helper(0xa14,uVar1);
    local_8 = 0x6e;
    if (iVar2 != 0) {
      uVar3 = FUN_00446630(param_1);
      ExceptionList = local_10;
      return uVar3;
    }
    ExceptionList = local_10;
    return 0;
  }
  if (iVar2 < 0x765d) {
    if (iVar2 == 0x765c) {
      iVar2 = crt_or_heap_alloc_helper(0x9a0,uVar1);
      local_8 = 8;
      if (iVar2 != 0) {
        uVar3 = img_path_loader_14(param_1);
        ExceptionList = local_10;
        return uVar3;
      }
      ExceptionList = local_10;
      return 0;
    }
    switch(iVar2) {
    case 0x7533:
      iVar2 = crt_or_heap_alloc_helper(0x9a4,uVar1);
      local_8 = 10;
      if (iVar2 != 0) {
        uVar3 = FUN_0043f890(param_1);
        ExceptionList = local_10;
        return uVar3;
      }
      ExceptionList = local_10;
      return 0;
    case 0x7534:
      iVar2 = crt_or_heap_alloc_helper(0x9a0,uVar1);
      local_8 = 0x31;
      if (iVar2 != 0) {
        uVar3 = FUN_00443680(param_1);
        ExceptionList = local_10;
        return uVar3;
      }
      ExceptionList = local_10;
      return 0;
    default:
      goto switchD_00449460_caseD_342;
    case 0x753d:
      iVar2 = crt_or_heap_alloc_helper(0x9a0,uVar1);
      local_8 = 7;
      if (iVar2 != 0) {
        uVar3 = FUN_004434b0(param_1);
        ExceptionList = local_10;
        return uVar3;
      }
      ExceptionList = local_10;
      return 0;
    case 0x753e:
      iVar2 = crt_or_heap_alloc_helper(0x9a0,uVar1);
      local_8 = 0x20;
      if (iVar2 != 0) {
        uVar3 = FUN_00442d70(param_1);
        ExceptionList = local_10;
        return uVar3;
      }
      ExceptionList = local_10;
      return 0;
    case 0x753f:
      iVar2 = crt_or_heap_alloc_helper(0x9a0,uVar1);
      local_8 = 0x26;
      if (iVar2 != 0) {
        uVar3 = FUN_00443330(param_1);
        ExceptionList = local_10;
        return uVar3;
      }
      ExceptionList = local_10;
      return 0;
    case 0x7540:
      iVar2 = crt_or_heap_alloc_helper(0x9a0,uVar1);
      local_8 = 0x32;
      if (iVar2 != 0) {
        uVar3 = FUN_004434e0(param_1);
        ExceptionList = local_10;
        return uVar3;
      }
      ExceptionList = local_10;
      return 0;
    case 0x7541:
      iVar2 = crt_or_heap_alloc_helper(0x9a4,uVar1);
      local_8 = 9;
      if (iVar2 != 0) {
        uVar3 = FUN_0043f7d0(param_1);
        ExceptionList = local_10;
        return uVar3;
      }
      ExceptionList = local_10;
      return 0;
    case 0x7542:
      iVar2 = crt_or_heap_alloc_helper(0x9a0,uVar1);
      local_8 = 0x2e;
      if (iVar2 != 0) {
        uVar3 = FUN_0043cb80(param_1);
        ExceptionList = local_10;
        return uVar3;
      }
      ExceptionList = local_10;
      return 0;
    case 0x7543:
      iVar2 = crt_or_heap_alloc_helper(0x9a0,uVar1);
      local_8 = 0x2f;
      if (iVar2 != 0) {
        uVar3 = FUN_0043cce0(param_1);
        ExceptionList = local_10;
        return uVar3;
      }
      ExceptionList = local_10;
      return 0;
    case 0x7544:
      iVar2 = crt_or_heap_alloc_helper(0x9a0,uVar1);
      local_8 = 0x30;
      if (iVar2 != 0) {
        uVar3 = FUN_0043cd80(param_1);
        ExceptionList = local_10;
        return uVar3;
      }
      ExceptionList = local_10;
      return 0;
    case 0x754c:
      iVar2 = crt_or_heap_alloc_helper(0x9ac,uVar1);
      local_8 = 0x35;
      if (iVar2 != 0) {
        uVar3 = FUN_0043e730(param_1);
        ExceptionList = local_10;
        return uVar3;
      }
      ExceptionList = local_10;
      return 0;
    case 0x754d:
      iVar2 = crt_or_heap_alloc_helper(0x9a0,uVar1);
      local_8 = 0x36;
      if (iVar2 != 0) {
        uVar3 = FUN_0043f240(param_1);
        ExceptionList = local_10;
        return uVar3;
      }
      ExceptionList = local_10;
      return 0;
    case 0x754e:
      iVar2 = crt_or_heap_alloc_helper(0x9a0,uVar1);
      local_8 = 0x29;
      if (iVar2 != 0) {
        uVar3 = FUN_00444740(param_1);
        ExceptionList = local_10;
        return uVar3;
      }
      ExceptionList = local_10;
      return 0;
    case 0x754f:
      iVar2 = crt_or_heap_alloc_helper(0x9a0,uVar1);
      local_8 = 0x2a;
      if (iVar2 != 0) {
        uVar3 = FUN_00444850(param_1);
        ExceptionList = local_10;
        return uVar3;
      }
      ExceptionList = local_10;
      return 0;
    case 0x7552:
      iVar2 = crt_or_heap_alloc_helper(0x9a0,uVar1);
      local_8 = 0x24;
      if (iVar2 != 0) {
        uVar3 = FUN_004430a0(param_1);
        ExceptionList = local_10;
        return uVar3;
      }
      ExceptionList = local_10;
      return 0;
    case 0x7554:
      iVar2 = crt_or_heap_alloc_helper(0x9a0,uVar1);
      local_8 = 0x28;
      if (iVar2 != 0) {
        uVar3 = FUN_00443330(param_1);
        ExceptionList = local_10;
        return uVar3;
      }
      ExceptionList = local_10;
      return 0;
    case 0x7559:
      iVar2 = crt_or_heap_alloc_helper(0x9a0,uVar1);
      local_8 = 0x22;
      if (iVar2 != 0) {
        uVar3 = FUN_00443450(param_1);
        ExceptionList = local_10;
        return uVar3;
      }
      ExceptionList = local_10;
      return 0;
    case 0x755a:
      iVar2 = crt_or_heap_alloc_helper(0x9a0,uVar1);
      local_8 = 0x23;
      if (iVar2 != 0) {
        uVar3 = FUN_00443480(param_1);
        ExceptionList = local_10;
        return uVar3;
      }
      ExceptionList = local_10;
      return 0;
    case 0x755c:
    case 0x755d:
    case 0x7567:
    case 0x7568:
      goto switchD_004495e2_caseD_4e50;
    case 0x755e:
      iVar2 = crt_or_heap_alloc_helper(0x9a0,uVar1);
      local_8 = 0x25;
      if (iVar2 != 0) {
        uVar3 = FUN_004431b0(param_1);
        ExceptionList = local_10;
        return uVar3;
      }
      ExceptionList = local_10;
      return 0;
    case 0x755f:
      iVar2 = crt_or_heap_alloc_helper(0x9a0,uVar1);
      local_8 = 0x2b;
      if (iVar2 != 0) {
        uVar3 = FUN_00433a60(param_1);
        ExceptionList = local_10;
        return uVar3;
      }
      ExceptionList = local_10;
      return 0;
    case 0x7561:
      iVar2 = crt_or_heap_alloc_helper(0x9a0,uVar1);
      local_8 = 0x2c;
      if (iVar2 != 0) {
        uVar3 = FUN_00433a60(param_1);
        ExceptionList = local_10;
        return uVar3;
      }
      ExceptionList = local_10;
      return 0;
    case 0x7569:
      iVar2 = crt_or_heap_alloc_helper(0x9a0,uVar1);
      local_8 = 0x2d;
      if (iVar2 != 0) {
        uVar3 = FUN_00433c20(param_1);
        ExceptionList = local_10;
        return uVar3;
      }
      ExceptionList = local_10;
      return 0;
    case 0x7572:
      iVar2 = crt_or_heap_alloc_helper(0x9a0,uVar1);
      local_8 = 0x44;
      if (iVar2 != 0) {
        uVar3 = FUN_00444980(param_1);
        ExceptionList = local_10;
        return uVar3;
      }
      ExceptionList = local_10;
      return 0;
    case 0x7573:
      iVar2 = crt_or_heap_alloc_helper(0x9a0,uVar1);
      local_8 = 0x4b;
      if (iVar2 != 0) {
        uVar3 = FUN_00444c90(param_1);
        ExceptionList = local_10;
        return uVar3;
      }
      ExceptionList = local_10;
      return 0;
    case 0x7575:
      iVar2 = crt_or_heap_alloc_helper(0x9a0,uVar1);
      local_8 = 0x4c;
      if (iVar2 != 0) {
        uVar3 = FUN_00444ef0(param_1);
        ExceptionList = local_10;
        return uVar3;
      }
      ExceptionList = local_10;
      return 0;
    case 0x7594:
      iVar2 = crt_or_heap_alloc_helper(0x9a0,uVar1);
      local_8 = 0x33;
      if (iVar2 != 0) {
        uVar3 = FUN_004434e0(param_1);
        ExceptionList = local_10;
        return uVar3;
      }
      ExceptionList = local_10;
      return 0;
    }
  }
  if (iVar2 < 0x9c43) {
    if (iVar2 != 0x9c42) {
      switch(iVar2) {
      case 0x765d:
        iVar2 = crt_or_heap_alloc_helper(0x9a0,uVar1);
        local_8 = 0x38;
        if (iVar2 != 0) {
          uVar3 = FUN_0043e520(param_1);
          ExceptionList = local_10;
          return uVar3;
        }
        ExceptionList = local_10;
        return 0;
      case 0x765e:
        iVar2 = crt_or_heap_alloc_helper(0x9a0,uVar1);
        local_8 = 0x39;
        if (iVar2 != 0) {
          uVar3 = FUN_0043cf10(param_1);
          ExceptionList = local_10;
          return uVar3;
        }
        ExceptionList = local_10;
        return 0;
      case 0x765f:
        iVar2 = crt_or_heap_alloc_helper(0x9a0,uVar1);
        local_8 = 0x3a;
        if (iVar2 != 0) {
          uVar3 = FUN_0043d0e0(param_1);
          ExceptionList = local_10;
          return uVar3;
        }
        ExceptionList = local_10;
        return 0;
      case 0x7660:
        iVar2 = crt_or_heap_alloc_helper(0x9a0,uVar1);
        local_8 = 0x3b;
        if (iVar2 != 0) {
          uVar3 = FUN_0043d240(param_1);
          ExceptionList = local_10;
          return uVar3;
        }
        ExceptionList = local_10;
        return 0;
      case 0x7661:
        iVar2 = crt_or_heap_alloc_helper(0x9a0,uVar1);
        local_8 = 0x3c;
        if (iVar2 != 0) {
          uVar3 = FUN_0043d480(param_1);
          ExceptionList = local_10;
          return uVar3;
        }
        ExceptionList = local_10;
        return 0;
      default:
        goto switchD_00449460_caseD_342;
      case 0x7666:
        iVar2 = crt_or_heap_alloc_helper(0x9a8,uVar1);
        local_8 = 0x1d;
        if (iVar2 != 0) {
          uVar3 = FUN_004425a0(param_1);
          ExceptionList = local_10;
          return uVar3;
        }
        ExceptionList = local_10;
        return 0;
      case 0x7667:
        iVar2 = crt_or_heap_alloc_helper(0x9a0,uVar1);
        local_8 = 0x1e;
        if (iVar2 != 0) {
          uVar3 = FUN_00442a70(param_1);
          ExceptionList = local_10;
          return uVar3;
        }
        ExceptionList = local_10;
        return 0;
      case 0x7670:
      case 0x7699:
      case 0x76ad:
      case 0x76d8:
      case 0x7730:
      case 0x773b:
        break;
      case 0x76b5:
        iVar2 = crt_or_heap_alloc_helper(0x9a0,uVar1);
        local_8 = 0xc;
        if (iVar2 != 0) {
          uVar3 = FUN_0043fc40(param_1);
          ExceptionList = local_10;
          return uVar3;
        }
        ExceptionList = local_10;
        return 0;
      case 0x76b6:
        iVar2 = crt_or_heap_alloc_helper(0x9a8,uVar1);
        local_8 = 0xb;
        if (iVar2 != 0) {
          uVar3 = FUN_0043f9e0(param_1);
          ExceptionList = local_10;
          return uVar3;
        }
        ExceptionList = local_10;
        return 0;
      case 0x76bb:
        iVar2 = crt_or_heap_alloc_helper(0x9a4,uVar1);
        local_8 = 0x3f;
        if (iVar2 != 0) {
          uVar3 = img_path_loader_13(param_1);
          ExceptionList = local_10;
          return uVar3;
        }
        ExceptionList = local_10;
        return 0;
      case 0x76c1:
        iVar2 = crt_or_heap_alloc_helper(0x9a4,uVar1);
        local_8 = 0x11;
        if (iVar2 != 0) {
          uVar3 = FUN_0043fdb0(param_1);
          ExceptionList = local_10;
          return uVar3;
        }
        ExceptionList = local_10;
        return 0;
      case 0x76c2:
        iVar2 = crt_or_heap_alloc_helper(0x9a0,uVar1);
        local_8 = 0x10;
        if (iVar2 != 0) {
          uVar3 = FUN_0043fe50(param_1);
          ExceptionList = local_10;
          return uVar3;
        }
        ExceptionList = local_10;
        return 0;
      case 0x76ca:
        iVar2 = crt_or_heap_alloc_helper(0x9a0,uVar1);
        local_8 = 0x12;
        if (iVar2 != 0) {
          uVar3 = FUN_00440170(param_1);
          ExceptionList = local_10;
          return uVar3;
        }
        ExceptionList = local_10;
        return 0;
      case 0x76cb:
        iVar2 = crt_or_heap_alloc_helper(0x9a0,uVar1);
        local_8 = 0x13;
        if (iVar2 != 0) {
          uVar3 = FUN_00440280(param_1);
          ExceptionList = local_10;
          return uVar3;
        }
        ExceptionList = local_10;
        return 0;
      case 0x76cc:
        iVar2 = crt_or_heap_alloc_helper(0x9a4,uVar1);
        local_8 = 0x14;
        if (iVar2 != 0) {
          uVar3 = FUN_004402f0(param_1);
          ExceptionList = local_10;
          return uVar3;
        }
        ExceptionList = local_10;
        return 0;
      case 0x76d1:
        iVar2 = crt_or_heap_alloc_helper(0x9a8,uVar1);
        local_8 = 0x16;
        if (iVar2 != 0) {
          uVar3 = FUN_004411e0(param_1);
          ExceptionList = local_10;
          return uVar3;
        }
        ExceptionList = local_10;
        return 0;
      case 0x76d2:
        iVar2 = crt_or_heap_alloc_helper(0x9a0,uVar1);
        local_8 = 0x17;
        if (iVar2 != 0) {
          uVar3 = FUN_00441b20(param_1);
          ExceptionList = local_10;
          return uVar3;
        }
        ExceptionList = local_10;
        return 0;
      case 0x76d9:
        iVar2 = crt_or_heap_alloc_helper(0x9a4,uVar1);
        local_8 = 0x15;
        if (iVar2 != 0) {
          uVar3 = FUN_00441060(param_1);
          ExceptionList = local_10;
          return uVar3;
        }
        ExceptionList = local_10;
        return 0;
      case 0x771f:
        iVar2 = crt_or_heap_alloc_helper(0x9a0,uVar1);
        local_8 = 0x47;
        if (iVar2 != 0) {
          uVar3 = FUN_004438e0(param_1);
          ExceptionList = local_10;
          return uVar3;
        }
        ExceptionList = local_10;
        return 0;
      case 0x7720:
        iVar2 = crt_or_heap_alloc_helper(0x9a0,uVar1);
        local_8 = 0x46;
        if (iVar2 != 0) {
          uVar3 = FUN_004439e0(param_1);
          ExceptionList = local_10;
          return uVar3;
        }
        ExceptionList = local_10;
        return 0;
      case 0x7721:
        iVar2 = crt_or_heap_alloc_helper(0x9a4,uVar1);
        local_8 = 0x48;
        if (iVar2 != 0) {
          uVar3 = FUN_00443c80(param_1);
          ExceptionList = local_10;
          return uVar3;
        }
        ExceptionList = local_10;
        return 0;
      case 0x7724:
        iVar2 = crt_or_heap_alloc_helper(0x9a0,uVar1);
        local_8 = 0x49;
        if (iVar2 != 0) {
          uVar3 = FUN_00444b80(param_1);
          ExceptionList = local_10;
          return uVar3;
        }
        ExceptionList = local_10;
        return 0;
      case 0x7727:
        iVar2 = crt_or_heap_alloc_helper(0x9a0,uVar1);
        local_8 = 0x4a;
        if (iVar2 != 0) {
          uVar3 = FUN_00444c90(param_1);
          ExceptionList = local_10;
          return uVar3;
        }
        ExceptionList = local_10;
        return 0;
      case 0x7728:
        iVar2 = crt_or_heap_alloc_helper(0x9e0,uVar1);
        local_8 = 0xf;
        if (iVar2 != 0) {
          uVar3 = FUN_00447a90(param_1);
          ExceptionList = local_10;
          return uVar3;
        }
        ExceptionList = local_10;
        return 0;
      case 0x772c:
        iVar2 = crt_or_heap_alloc_helper(0x9a0,uVar1);
        local_8 = 0x3d;
        if (iVar2 != 0) {
          uVar3 = FUN_0043d4b0(param_1);
          ExceptionList = local_10;
          return uVar3;
        }
        ExceptionList = local_10;
        return 0;
      case 0x772f:
        iVar2 = crt_or_heap_alloc_helper(0x9a8,uVar1);
        local_8 = 0x3e;
        if (iVar2 != 0) {
          uVar3 = FUN_0043d510(param_1);
          ExceptionList = local_10;
          return uVar3;
        }
        ExceptionList = local_10;
        return 0;
      case 0x7735:
        iVar2 = crt_or_heap_alloc_helper(0x9a0,uVar1);
        local_8 = 0x21;
        if (iVar2 != 0) {
          uVar3 = FUN_00442da0(param_1);
          ExceptionList = local_10;
          return uVar3;
        }
        ExceptionList = local_10;
        return 0;
      case 0x7738:
        iVar2 = crt_or_heap_alloc_helper(0x9a0,uVar1);
        local_8 = 0x45;
        if (iVar2 != 0) {
          uVar3 = FUN_00434090(param_1);
          ExceptionList = local_10;
          return uVar3;
        }
        ExceptionList = local_10;
        return 0;
      case 0x7741:
        iVar2 = crt_or_heap_alloc_helper(0x9e0,uVar1);
        local_8 = 0xe;
        if (iVar2 != 0) {
          uVar3 = FUN_00447ae0(param_1);
          ExceptionList = local_10;
          return uVar3;
        }
        ExceptionList = local_10;
        return 0;
      case 0x7746:
        iVar2 = crt_or_heap_alloc_helper(0x9a4,uVar1);
        local_8 = 0x1c;
        if (iVar2 != 0) {
          uVar3 = FUN_00442420(param_1);
          ExceptionList = local_10;
          return uVar3;
        }
        ExceptionList = local_10;
        return 0;
      case 0x7749:
        iVar2 = crt_or_heap_alloc_helper(0x9a0,uVar1);
        local_8 = 0x1b;
        if (iVar2 != 0) {
          uVar3 = img_path_loader_15(param_1);
          ExceptionList = local_10;
          return uVar3;
        }
        ExceptionList = local_10;
        return 0;
      case 0x774c:
        iVar2 = crt_or_heap_alloc_helper(0x9a0,uVar1);
        local_8 = 0xd;
        if (iVar2 != 0) {
          uVar3 = FUN_0043fd50(param_1);
          ExceptionList = local_10;
          return uVar3;
        }
        ExceptionList = local_10;
        return 0;
      case 0x774d:
        iVar2 = crt_or_heap_alloc_helper(0x9a0,uVar1);
        local_8 = 0x18;
        if (iVar2 != 0) {
          uVar3 = FUN_00441d70(param_1);
          ExceptionList = local_10;
          return uVar3;
        }
        ExceptionList = local_10;
        return 0;
      case 0x774e:
        iVar2 = crt_or_heap_alloc_helper(0x9a0,uVar1);
        local_8 = 0x19;
        if (iVar2 != 0) {
          uVar3 = FUN_00441e10(param_1);
          ExceptionList = local_10;
          return uVar3;
        }
        ExceptionList = local_10;
        return 0;
      case 0x7750:
        iVar2 = crt_or_heap_alloc_helper(0x9a0,uVar1);
        local_8 = 0x40;
        if (iVar2 != 0) {
          uVar3 = FUN_0043dfa0(param_1);
          ExceptionList = local_10;
          return uVar3;
        }
        ExceptionList = local_10;
        return 0;
      case 0x7751:
        iVar2 = crt_or_heap_alloc_helper(0x9a0,uVar1);
        local_8 = 0x41;
        if (iVar2 != 0) {
          uVar3 = FUN_0043e1f0(param_1);
          ExceptionList = local_10;
          return uVar3;
        }
        ExceptionList = local_10;
        return 0;
      case 0x7752:
        iVar2 = crt_or_heap_alloc_helper(0x9a0,uVar1);
        local_8 = 0x42;
        if (iVar2 != 0) {
          uVar3 = FUN_0043e520(param_1);
          ExceptionList = local_10;
          return uVar3;
        }
        ExceptionList = local_10;
        return 0;
      }
    }
  }
  else {
    if (0xbb81 < iVar2) {
      if (iVar2 < 0xc677) {
        if (iVar2 == 0xc676) {
          iVar2 = crt_or_heap_alloc_helper(0x9a4,uVar1);
          local_8 = 0x4d;
          if (iVar2 != 0) {
            uVar3 = FUN_00445060(param_1);
            ExceptionList = local_10;
            return uVar3;
          }
          ExceptionList = local_10;
          return 0;
        }
        switch(iVar2) {
        case 0xbb83:
        case 0xbb93:
        case 0xbb94:
        case 0xbb95:
        case 0xbb96:
        case 0xbb97:
        case 0xbb99:
          iVar2 = crt_or_heap_alloc_helper(0x9a0,uVar1);
          local_8 = 0x6c;
          if (iVar2 != 0) {
            uVar3 = FUN_0043c6c0(param_1);
            ExceptionList = local_10;
            return uVar3;
          }
          ExceptionList = local_10;
          return 0;
        case 0xbb8c:
          iVar2 = crt_or_heap_alloc_helper(0x9ac,uVar1);
          local_8 = 0x6f;
          if (iVar2 != 0) {
            uVar3 = FUN_00433370(param_1);
            ExceptionList = local_10;
            return uVar3;
          }
          ExceptionList = local_10;
          return 0;
        case 0xbb8d:
          iVar2 = crt_or_heap_alloc_helper(0x9a0,uVar1);
          local_8 = 0x5f;
          if (iVar2 != 0) {
            uVar3 = FUN_00433f20(param_1);
            ExceptionList = local_10;
            return uVar3;
          }
          ExceptionList = local_10;
          return 0;
        case 0xbb9e:
          iVar2 = crt_or_heap_alloc_helper(0x9a0,uVar1);
          local_8 = 0x43;
          if (iVar2 != 0) {
            uVar3 = FUN_00444980(param_1);
            ExceptionList = local_10;
            return uVar3;
          }
          ExceptionList = local_10;
          return 0;
        case 0xbbac:
        case 0xbbb4:
        case 0xbbb6:
          goto switchD_004495e2_caseD_4e50;
        case 0xbbad:
        case 0xbbae:
        case 0xbbaf:
        case 0xbbb0:
switchD_004494d1_caseD_42a:
          iVar2 = crt_or_heap_alloc_helper(0x9a0,uVar1);
          local_8 = 0x70;
          if (iVar2 != 0) {
            uVar3 = FUN_0042fb60(param_1);
            ExceptionList = local_10;
            return uVar3;
          }
          ExceptionList = local_10;
          return 0;
        case 0xbbb1:
          iVar2 = crt_or_heap_alloc_helper(0x9a4,uVar1);
          local_8 = 0x71;
          if (iVar2 != 0) {
            uVar3 = FUN_00441bf0(param_1);
            ExceptionList = local_10;
            return uVar3;
          }
          ExceptionList = local_10;
          return 0;
        }
      }
      else if (iVar2 < 0xc87e) {
        if (iVar2 == 0xc87d) {
          iVar2 = crt_or_heap_alloc_helper(0x9e8,uVar1);
          local_8 = 1;
          if (iVar2 != 0) {
            uVar3 = FUN_004488c0(param_1);
            ExceptionList = local_10;
            return uVar3;
          }
          ExceptionList = local_10;
          return 0;
        }
        if (iVar2 == 0xc879) {
          iVar2 = crt_or_heap_alloc_helper(0x9a0,uVar1);
          local_8 = 0x1a;
          if (iVar2 != 0) {
            uVar3 = FUN_00441ea0(param_1);
            ExceptionList = local_10;
            return uVar3;
          }
          ExceptionList = local_10;
          return 0;
        }
        if (iVar2 == 0xc87c) {
          iVar2 = crt_or_heap_alloc_helper(0x9ec,uVar1);
          local_8 = 0;
          if (iVar2 != 0) {
            uVar3 = FUN_00448590(param_1);
            ExceptionList = local_10;
            return uVar3;
          }
          ExceptionList = local_10;
          return 0;
        }
      }
      else {
        if (iVar2 == 0xc87e) {
          iVar2 = crt_or_heap_alloc_helper(0x9e8,uVar1);
          local_8 = 2;
          if (iVar2 != 0) {
            uVar3 = FUN_00448c70(param_1);
            ExceptionList = local_10;
            return uVar3;
          }
          ExceptionList = local_10;
          return 0;
        }
        if (iVar2 == 0xea68) goto switchD_004495e2_caseD_4e50;
      }
switchD_00449460_caseD_342:
      iVar2 = crt_or_heap_alloc_helper(0x9a0,uVar1);
      local_8 = 0x72;
      if (iVar2 != 0) {
        uVar3 = FUN_0042fb60(param_1);
        ExceptionList = local_10;
        return uVar3;
      }
      ExceptionList = local_10;
      return 0;
    }
    if (iVar2 == 0xbb81) {
      iVar2 = crt_or_heap_alloc_helper(0x9a4,uVar1);
      local_8 = 0x6a;
      if (iVar2 != 0) {
        uVar3 = FUN_00433dc0(param_1);
        ExceptionList = local_10;
        return uVar3;
      }
      ExceptionList = local_10;
      return 0;
    }
    if (iVar2 != 0xabe1) {
      if (iVar2 == 0xb3b3) {
        iVar2 = crt_or_heap_alloc_helper(0x9a0,uVar1);
        local_8 = 0x27;
        if (iVar2 != 0) {
          uVar3 = FUN_00443330(param_1);
          ExceptionList = local_10;
          return uVar3;
        }
        ExceptionList = local_10;
        return 0;
      }
      if (iVar2 != 0xb3b4) goto switchD_00449460_caseD_342;
    }
  }
switchD_004495e2_caseD_4e50:
  iVar2 = crt_or_heap_alloc_helper(0x9a0,uVar1);
  local_8 = 0x6b;
  if (iVar2 == 0) {
    local_374 = 0;
  }
  else {
    local_374 = FUN_0043c510(param_1);
  }
  ExceptionList = local_10;
  return local_374;
}


/* ==== 0044c850  FUN_0044c850  size=4568 ==== */

undefined4 FUN_0044c850(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_174;
  undefined4 local_16c;
  undefined4 local_164;
  undefined4 local_15c;
  undefined4 local_154;
  undefined4 local_13c;
  undefined4 local_114;
  undefined4 local_10c;
  undefined4 local_3c;
  undefined4 local_2c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071058c;
  local_10 = ExceptionList;
  uVar1 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar2 < 0xde) {
    if (iVar2 == 0xdd) {
switchD_0044c8f1_caseD_df:
      iVar2 = crt_or_heap_alloc_helper(0x9e0,uVar1);
      local_8 = 0x23;
      if (iVar2 == 0) {
        ExceptionList = local_10;
        return 0;
      }
      uVar3 = FUN_004460a0(param_1);
      ExceptionList = local_10;
      return uVar3;
    }
    switch(iVar2) {
    case 1:
      iVar2 = crt_or_heap_alloc_helper(0x9bc,uVar1);
      local_8 = 0x14;
      if (iVar2 == 0) {
        ExceptionList = local_10;
        return 0;
      }
      uVar3 = FUN_00449290(param_1);
      ExceptionList = local_10;
      return uVar3;
    case 3:
      iVar2 = crt_or_heap_alloc_helper(0x9c4,uVar1);
      local_8 = 0x17;
      if (iVar2 == 0) {
        ExceptionList = local_10;
        return 0;
      }
      uVar3 = FUN_00449060(param_1);
      ExceptionList = local_10;
      return uVar3;
    case 4:
      iVar2 = crt_or_heap_alloc_helper(0x9c4,uVar1);
      local_8 = 0x18;
      if (iVar2 == 0) {
        ExceptionList = local_10;
        return 0;
      }
      uVar3 = FUN_00449060(param_1);
      ExceptionList = local_10;
      return uVar3;
    case 5:
      iVar2 = crt_or_heap_alloc_helper(0x9bc,uVar1);
      local_8 = 0x15;
      if (iVar2 == 0) {
        ExceptionList = local_10;
        return 0;
      }
      uVar3 = FUN_00449290(param_1);
      ExceptionList = local_10;
      return uVar3;
    case 6:
      iVar2 = crt_or_heap_alloc_helper(0x9bc,uVar1);
      local_8 = 0x16;
      if (iVar2 == 0) {
        ExceptionList = local_10;
        return 0;
      }
      uVar3 = FUN_00449290(param_1);
      ExceptionList = local_10;
      return uVar3;
    case 7:
      iVar2 = crt_or_heap_alloc_helper(0x9c4,uVar1);
      local_8 = 0x19;
      if (iVar2 == 0) {
        ExceptionList = local_10;
        return 0;
      }
      uVar3 = FUN_00449060(param_1);
      ExceptionList = local_10;
      return uVar3;
    case 8:
      iVar2 = crt_or_heap_alloc_helper(0x9c4,uVar1);
      local_8 = 0x1a;
      if (iVar2 == 0) {
        ExceptionList = local_10;
        return 0;
      }
      uVar3 = FUN_00449060(param_1);
      ExceptionList = local_10;
      return uVar3;
    case 9:
      iVar2 = crt_or_heap_alloc_helper(0x9c4,uVar1);
      local_8 = 0x1b;
      if (iVar2 == 0) {
        ExceptionList = local_10;
        return 0;
      }
      uVar3 = FUN_00449060(param_1);
      ExceptionList = local_10;
      return uVar3;
    case 0xd:
      iVar2 = crt_or_heap_alloc_helper(0x9bc,uVar1);
      local_8 = 0xe;
      if (iVar2 == 0) {
        ExceptionList = local_10;
        return 0;
      }
      uVar3 = FUN_00449290(param_1);
      ExceptionList = local_10;
      return uVar3;
    case 0xe:
      iVar2 = crt_or_heap_alloc_helper(0x9bc,uVar1);
      local_8 = 0xf;
      if (iVar2 == 0) {
        ExceptionList = local_10;
        return 0;
      }
      uVar3 = FUN_00449290(param_1);
      ExceptionList = local_10;
      return uVar3;
    case 0xf:
      iVar2 = crt_or_heap_alloc_helper(0x9bc,uVar1);
      local_8 = 0x10;
      if (iVar2 == 0) {
        ExceptionList = local_10;
        return 0;
      }
      uVar3 = FUN_00449290(param_1);
      ExceptionList = local_10;
      return uVar3;
    case 0x10:
      iVar2 = crt_or_heap_alloc_helper(0x9bc,uVar1);
      local_8 = 0x11;
      if (iVar2 == 0) {
        ExceptionList = local_10;
        return 0;
      }
      uVar3 = FUN_00449290(param_1);
      ExceptionList = local_10;
      return uVar3;
    case 0x11:
      iVar2 = crt_or_heap_alloc_helper(0x9bc,uVar1);
      local_8 = 0x12;
      if (iVar2 == 0) {
        ExceptionList = local_10;
        return 0;
      }
      uVar3 = FUN_00449290(param_1);
      ExceptionList = local_10;
      return uVar3;
    case 0x12:
      iVar2 = crt_or_heap_alloc_helper(0x9bc,uVar1);
      local_8 = 0x13;
      if (iVar2 == 0) {
        ExceptionList = local_10;
        return 0;
      }
      uVar3 = FUN_00449290(param_1);
      ExceptionList = local_10;
      return uVar3;
    case 0x13:
      iVar2 = crt_or_heap_alloc_helper(0x9bc,uVar1);
      local_8 = 0xc;
      if (iVar2 == 0) {
        ExceptionList = local_10;
        return 0;
      }
      uVar3 = FUN_00449290(param_1);
      ExceptionList = local_10;
      return uVar3;
    case 0x14:
      iVar2 = crt_or_heap_alloc_helper(0x9bc,uVar1);
      local_8 = 0xd;
      if (iVar2 == 0) {
        ExceptionList = local_10;
        return 0;
      }
      uVar3 = FUN_00449290(param_1);
      ExceptionList = local_10;
      return uVar3;
    case 0x33:
      iVar2 = crt_or_heap_alloc_helper(0x9c4,uVar1);
      local_8 = 0x1c;
      if (iVar2 == 0) {
        ExceptionList = local_10;
        return 0;
      }
      uVar3 = FUN_00449060(param_1);
      ExceptionList = local_10;
      return uVar3;
    case 0x34:
      iVar2 = crt_or_heap_alloc_helper(0x9c4,uVar1);
      local_8 = 0x1d;
      if (iVar2 == 0) {
        ExceptionList = local_10;
        return 0;
      }
      uVar3 = FUN_00449060(param_1);
      ExceptionList = local_10;
      return uVar3;
    }
    goto switchD_0044c8b4_caseD_2;
  }
  if (0x2be < iVar2) {
    if (0x3ee < iVar2) {
      if (iVar2 < 0xbb9) {
        if (iVar2 == 3000) {
switchD_0044c8f1_caseD_fb:
          iVar2 = crt_or_heap_alloc_helper(0x9a0,uVar1);
          local_8 = 0x22;
          if (iVar2 == 0) {
            ExceptionList = local_10;
            return 0;
          }
          uVar3 = FUN_0042fb60(param_1);
          ExceptionList = local_10;
          return uVar3;
        }
        switch(iVar2) {
        case 0x3ef:
          iVar2 = crt_or_heap_alloc_helper(0x9a4,uVar1);
          local_8 = 0;
          if (iVar2 == 0) {
            ExceptionList = local_10;
            return 0;
          }
          uVar3 = FUN_0043ba60(param_1);
          ExceptionList = local_10;
          return uVar3;
        case 0x3f7:
          iVar2 = crt_or_heap_alloc_helper(0x9b0,uVar1);
          local_8 = 0x2c;
          if (iVar2 == 0) {
            ExceptionList = local_10;
            return 0;
          }
          uVar3 = FUN_004335a0(param_1);
          ExceptionList = local_10;
          return uVar3;
        case 0x3f9:
        case 0x3fa:
        case 0x3fb:
          goto switchD_0044c8f1_caseD_106;
        case 0x3fc:
          iVar2 = crt_or_heap_alloc_helper(0x9a0,uVar1);
          local_8 = 3;
          if (iVar2 == 0) {
            ExceptionList = local_10;
            return 0;
          }
          uVar3 = FUN_0043bdc0(param_1);
          ExceptionList = local_10;
          return uVar3;
        case 0x3fd:
        case 0x40b:
          goto switchD_0044c8f1_caseD_df;
        case 0x400:
          iVar2 = crt_or_heap_alloc_helper(0x9a0,uVar1);
          local_8 = 10;
          if (iVar2 == 0) {
            ExceptionList = local_10;
            return 0;
          }
          uVar3 = FUN_0043bd10(param_1);
          ExceptionList = local_10;
          return uVar3;
        case 0x407:
          iVar2 = crt_or_heap_alloc_helper(0x9a4,uVar1);
          local_8 = 9;
          if (iVar2 == 0) {
            ExceptionList = local_10;
            return 0;
          }
          uVar3 = FUN_0043bb80(param_1);
          ExceptionList = local_10;
          return uVar3;
        case 0x40c:
        case 0x40d:
        case 0x40e:
        case 0x40f:
        case 0x410:
        case 0x411:
        case 0x412:
        case 0x413:
        case 0x414:
        case 0x415:
        case 0x416:
        case 0x417:
          iVar2 = crt_or_heap_alloc_helper(0x9e0,uVar1);
          local_8 = 0x26;
          if (iVar2 == 0) {
            ExceptionList = local_10;
            return 0;
          }
          uVar3 = FUN_00446460(param_1);
          ExceptionList = local_10;
          return uVar3;
        }
      }
      else if (iVar2 < 0x7577) {
        if (iVar2 == 0x7576) {
          iVar2 = crt_or_heap_alloc_helper(0x9a0,uVar1);
          local_8 = 0x20;
          if (iVar2 == 0) {
            ExceptionList = local_10;
            return 0;
          }
          uVar3 = FUN_00433d40(param_1);
          ExceptionList = local_10;
          return uVar3;
        }
        switch(iVar2) {
        case 0xbb9:
        case 0xbba:
        case 0xbbb:
        case 0xbbc:
        case 0xbbd:
        case 0xbbe:
          goto switchD_0044c8f1_caseD_fb;
        }
      }
      else {
        switch(iVar2) {
        case 0x76bd:
          iVar2 = crt_or_heap_alloc_helper(0x9a0,uVar1);
          local_8 = 0xb;
          if (iVar2 == 0) {
            ExceptionList = local_10;
            return 0;
          }
          uVar3 = FUN_00444fc0(param_1);
          ExceptionList = local_10;
          return uVar3;
        case 0x772b:
          iVar2 = crt_or_heap_alloc_helper(0x9ec,uVar1);
          local_8 = 5;
          if (iVar2 == 0) {
            ExceptionList = local_10;
            return 0;
          }
          uVar3 = FUN_004471a0(param_1);
          ExceptionList = local_10;
          return uVar3;
        case 0x7736:
          iVar2 = crt_or_heap_alloc_helper(0x9ec,uVar1);
          local_8 = 6;
          if (iVar2 == 0) {
            ExceptionList = local_10;
            return 0;
          }
          uVar3 = FUN_004471a0(param_1);
          ExceptionList = local_10;
          return uVar3;
        case 0x7737:
          iVar2 = crt_or_heap_alloc_helper(0x9ec,uVar1);
          local_8 = 7;
          if (iVar2 == 0) {
            ExceptionList = local_10;
            return 0;
          }
          uVar3 = FUN_004471a0(param_1);
          ExceptionList = local_10;
          return uVar3;
        case 0x7740:
          iVar2 = crt_or_heap_alloc_helper(0x9ec,uVar1);
          local_8 = 8;
          if (iVar2 == 0) {
            ExceptionList = local_10;
            return 0;
          }
          uVar3 = FUN_004471a0(param_1);
          ExceptionList = local_10;
          return uVar3;
        }
      }
switchD_0044c8b4_caseD_2:
      uVar3 = FUN_00449400(param_1);
      ExceptionList = local_10;
      return uVar3;
    }
    if (iVar2 == 0x3ee) {
      iVar2 = crt_or_heap_alloc_helper(0x9a4,uVar1);
      local_8 = 1;
      if (iVar2 == 0) {
        ExceptionList = local_10;
        return 0;
      }
      uVar3 = FUN_0043ba60(param_1);
      ExceptionList = local_10;
      return uVar3;
    }
    switch(iVar2) {
    case 0x2bf:
    case 0x2c0:
    case 0x2c1:
    case 0x2c2:
    case 0x2c5:
    case 0x2c6:
    case 0x2c7:
    case 0x2c8:
    case 0x2c9:
    case 0x2cc:
    case 0x2cd:
    case 0x2ce:
    case 0x2cf:
    case 0x2d0:
      goto switchD_0044c8f1_caseD_13f;
    default:
      goto switchD_0044c8b4_caseD_2;
    case 0x302:
    case 0x303:
    case 0x304:
    case 0x305:
    case 0x306:
    case 0x307:
    case 0x308:
    case 0x309:
    case 0x30a:
    case 0x30b:
    case 0x30c:
    case 0x30d:
    case 800:
    case 0x322:
    case 0x323:
    case 0x329:
    case 0x331:
    case 0x333:
    case 0x33a:
    case 0x342:
    case 0x343:
    case 0x344:
    case 0x34d:
    case 0x34e:
    case 0x354:
    case 0x355:
    case 0x356:
    case 0x357:
    case 0x358:
    case 0x35c:
    case 0x35d:
    case 0x35e:
    case 0x35f:
    case 0x360:
      goto switchD_0044c8f1_caseD_df;
    case 0x32f:
    case 0x330:
    case 0x33e:
    case 0x33f:
    case 0x351:
      goto switchD_0044c8f1_caseD_de;
    case 0x332:
      iVar2 = crt_or_heap_alloc_helper(0x9e4,uVar1);
      local_8 = 0x25;
      if (iVar2 == 0) {
        ExceptionList = local_10;
        return 0;
      }
      uVar3 = FUN_004479f0(param_1);
      ExceptionList = local_10;
      return uVar3;
    case 0x33d:
    case 0x35b:
      goto switchD_0044c8f1_caseD_ec;
    }
  }
  if (iVar2 == 0x2be) {
switchD_0044c8f1_caseD_13f:
    iVar2 = crt_or_heap_alloc_helper(0x9b4,uVar1);
    local_8 = 0x2b;
    if (iVar2 == 0) {
      local_174 = 0;
    }
    else {
      local_174 = FUN_0043c120(param_1);
    }
  }
  else {
    switch(iVar2) {
    case 0xde:
switchD_0044c8f1_caseD_de:
      iVar2 = crt_or_heap_alloc_helper(0x9e0,uVar1);
      local_8 = 0x24;
      if (iVar2 == 0) {
        local_13c = 0;
        local_174 = local_13c;
      }
      else {
        local_174 = FUN_00446290(param_1);
      }
      break;
    case 0xdf:
    case 0xe0:
    case 0xe1:
    case 0xe2:
    case 0xe3:
    case 0xe4:
    case 0xe5:
    case 0xe6:
    case 0xe7:
    case 0xeb:
    case 0xee:
    case 0xef:
    case 300:
      goto switchD_0044c8f1_caseD_df;
    default:
      goto switchD_0044c8b4_caseD_2;
    case 0xec:
    case 0xed:
switchD_0044c8f1_caseD_ec:
      iVar2 = crt_or_heap_alloc_helper(0x9bc,uVar1);
      local_8 = 0x27;
      if (iVar2 == 0) {
        local_154 = 0;
        local_174 = local_154;
      }
      else {
        local_174 = FUN_0043a7d0(param_1);
      }
      break;
    case 0xf0:
      iVar2 = crt_or_heap_alloc_helper(0x9e0,uVar1);
      local_8 = 0x1e;
      if (iVar2 == 0) {
        local_10c = 0;
        local_174 = local_10c;
      }
      else {
        local_174 = FUN_00447830(param_1);
      }
      break;
    case 0xf3:
    case 0xf4:
    case 0xf5:
    case 0xf6:
    case 0xf7:
    case 0xf8:
    case 0xf9:
    case 0xfa:
      iVar2 = crt_or_heap_alloc_helper(0x9a4,uVar1);
      local_8 = 0x29;
      if (iVar2 == 0) {
        local_164 = 0;
        local_174 = local_164;
      }
      else {
        local_174 = FUN_0043b090(param_1);
      }
      break;
    case 0xfb:
    case 0xfc:
    case 0xfd:
    case 0xfe:
    case 0xff:
    case 0x100:
    case 0x101:
      goto switchD_0044c8f1_caseD_fb;
    case 0x102:
      iVar2 = crt_or_heap_alloc_helper(0x9a4,uVar1);
      local_8 = 0x2a;
      if (iVar2 == 0) {
        local_16c = 0;
        local_174 = local_16c;
      }
      else {
        local_174 = FUN_0043b350(param_1);
      }
      break;
    case 0x105:
      iVar2 = crt_or_heap_alloc_helper(0x9a4,uVar1);
      local_8 = 0x1f;
      if (iVar2 == 0) {
        local_114 = 0;
        local_174 = local_114;
      }
      else {
        local_174 = FUN_0043a200(param_1);
      }
      break;
    case 0x106:
    case 0x107:
    case 0x108:
switchD_0044c8f1_caseD_106:
      iVar2 = crt_or_heap_alloc_helper(0x9a4,uVar1);
      local_8 = 0x21;
      if (iVar2 != 0) {
        uVar3 = FUN_0043a510(param_1);
        ExceptionList = local_10;
        return uVar3;
      }
      ExceptionList = local_10;
      return 0;
    case 0x10b:
      iVar2 = crt_or_heap_alloc_helper(0x9a0,uVar1);
      local_8 = 0x28;
      if (iVar2 == 0) {
        local_15c = 0;
        local_174 = local_15c;
      }
      else {
        local_174 = FUN_0043ac10(param_1);
      }
      break;
    case 0x10c:
      iVar2 = crt_or_heap_alloc_helper(0x9ac,uVar1);
      local_8 = 2;
      if (iVar2 == 0) {
        local_2c = 0;
        local_174 = local_2c;
      }
      else {
        local_174 = FUN_0043b4a0(param_1);
      }
      break;
    case 0x10d:
      iVar2 = crt_or_heap_alloc_helper(0x9a0,uVar1);
      local_8 = 4;
      if (iVar2 == 0) {
        local_3c = 0;
        local_174 = local_3c;
      }
      else {
        local_174 = FUN_0043bdc0(param_1);
      }
      break;
    case 0x13f:
    case 0x140:
    case 0x141:
    case 0x142:
    case 0x143:
    case 0x146:
    case 0x147:
    case 0x148:
    case 0x149:
    case 0x14a:
    case 0x14d:
    case 0x14e:
    case 0x14f:
    case 0x150:
    case 0x151:
      goto switchD_0044c8f1_caseD_13f;
    }
  }
  ExceptionList = local_10;
  return local_174;
}


/* ==== 0044dd30  FUN_0044dd30  size=22 ==== */

undefined4 FUN_0044dd30(void)

{
  undefined4 in_ECX;
  
  FUN_0044e4d0();
  return in_ECX;
}


/* ==== 0044dd50  FUN_0044dd50  size=19 ==== */

void FUN_0044dd50(void)

{
  FUN_0044e540();
  return;
}


/* ==== 0044dd70  FUN_0044dd70  size=48 ==== */

bool FUN_0044dd70(void)

{
  int *in_ECX;
  
  return *(char *)(*in_ECX + 0xd) == '\0';
}


/* ==== 0044dda0  FUN_0044dda0  size=22 ==== */

undefined4 FUN_0044dda0(void)

{
  undefined4 in_ECX;
  
  FUN_0044e560();
  return in_ECX;
}


/* ==== 0044ddc0  FUN_0044ddc0  size=19 ==== */

void FUN_0044ddc0(void)

{
  FUN_00401b20();
  return;
}


/* ==== 0044dde0  FUN_0044dde0  size=34 ==== */

undefined4 * FUN_0044dde0(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *param_1 = *in_ECX;
  FUN_0042a600();
  return param_1;
}


/* ==== 0044de10  FUN_0044de10  size=28 ==== */

void FUN_0044de10(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0042a580();
  FUN_0044e4b0(uVar1);
  return;
}


/* ==== 0044de30  FUN_0044de30  size=30 ==== */

int FUN_0044de30(int param_1)

{
  int *in_ECX;
  
  return param_1 * 0xc + *in_ECX;
}


/* ==== 0044de50  FUN_0044de50  size=38 ==== */

int FUN_0044de50(void)

{
  int *in_ECX;
  
  return (in_ECX[1] - *in_ECX) / 0xc;
}


/* ==== 0044de80  FUN_0044de80  size=32 ==== */

void FUN_0044de80(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  FUN_0044eb30(*in_ECX,param_1);
  return;
}


/* ==== 0044dea0  FUN_0044dea0  size=197 ==== */

undefined4 FUN_0044dea0(undefined4 param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int in_ECX;
  int *piVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0070df40;
  local_10 = ExceptionList;
  uVar1 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  piVar3 = (int *)(in_ECX + 4);
  FUN_004023d0(param_2,*piVar3);
  FUN_004027e0(param_2 + 4,*piVar3,param_2,uVar1);
  uVar2 = _Unfancy<>(*piVar3 + -4);
  uVar2 = FUN_00401c60(uVar2);
  FUN_004025f0(uVar2);
  *piVar3 = *piVar3 + -4;
  uVar2 = _Unfancy<>(in_ECX);
  _Vector_iterator<>(param_2,uVar2);
  ExceptionList = local_10;
  return param_1;
}


/* ==== 0044df70  CStringT<>  size=36 ==== */

/* Library Function - Multiple Matches With Same Base Name
    public: __thiscall ATL::CStringT<char,class StrTraitMFC<char,class ATL::ChTraitsCRT<char> >
   >::CStringT<char,class StrTraitMFC<char,class ATL::ChTraitsCRT<char> > >(char const *,int,struct
   ATL::IAtlStringMgr *)
    public: __thiscall ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class
   ATL::ChTraitsCRT<wchar_t> > >::CStringT<wchar_t,class StrTraitMFC<wchar_t,class
   ATL::ChTraitsCRT<wchar_t> > >(wchar_t const *,int,struct ATL::IAtlStringMgr *)
    public: __thiscall ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class
   ATL::ChTraitsOS<wchar_t> > >::CStringT<wchar_t,class StrTraitMFC<wchar_t,class
   ATL::ChTraitsOS<wchar_t> > >(wchar_t const *,int,struct ATL::IAtlStringMgr *)
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2005 Debug, Visual Studio 2008 Debug, Visual
   Studio 2010 Debug */

undefined4 CStringT<>(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0044eba0(param_1,param_2,param_3);
  return param_1;
}


/* ==== 0044dfa0  FUN_0044dfa0  size=44 ==== */

undefined4 FUN_0044dfa0(void)

{
  undefined4 in_ECX;
  undefined1 local_5;
  
  _Compressed_pair<><>(local_5);
  FUN_00401720(&DAT_0073f69b);
  return in_ECX;
}


/* ==== 0044dfd0  FUN_0044dfd0  size=23 ==== */

undefined1 * FUN_0044dfd0(undefined1 *param_1)

{
  *param_1 = 0;
  return param_1;
}


/* ==== 0044dff0  FUN_0044dff0  size=39 ==== */

undefined4 FUN_0044dff0(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  puVar1 = (undefined4 *)FUN_004057d0(0);
  _Vector_iterator<>(*(undefined4 *)*puVar1,uVar2);
  return param_1;
}


/* ==== 0044e020  FUN_0044e020  size=20 ==== */

void FUN_0044e020(void)

{
  FUN_0044e580();
  return;
}


/* ==== 0044e040  FUN_0044e040  size=85 ==== */

void FUN_0044e040(void)

{
  undefined4 uVar1;
  int *in_ECX;
  
  FUN_00401710();
  uVar1 = FUN_00401c60(*in_ECX);
  FUN_0044ecf0(uVar1);
  *(int *)*in_ECX = *in_ECX;
  *(int *)(*in_ECX + 4) = *in_ECX;
  in_ECX[1] = 0;
  return;
}


/* ==== 0044e0a0  FUN_0044e0a0  size=72 ==== */

undefined4 FUN_0044e0a0(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *param_2;
  uVar2 = FUN_0044e5d0(param_2);
  uVar2 = FUN_00401c60(uVar2);
  FUN_0044ed40(uVar2);
  FUN_0040f070(param_1,uVar1);
  return param_1;
}


/* ==== 0044e0f0  FUN_0044e0f0  size=45 ==== */

undefined4 FUN_0044e0f0(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  
  uVar1 = _Unfancy<>();
  FUN_0040ddc0(*(undefined4 *)*in_ECX,uVar1);
  return param_1;
}


/* ==== 0044e120  FUN_0044e120  size=20 ==== */

void FUN_0044e120(void)

{
  FUN_0044e620();
  return;
}


/* ==== 0044e140  FUN_0044e140  size=85 ==== */

void FUN_0044e140(void)

{
  undefined4 uVar1;
  int *in_ECX;
  
  FUN_00401710();
  uVar1 = FUN_00401c60(*in_ECX);
  FUN_0044edb0(uVar1);
  *(int *)*in_ECX = *in_ECX;
  *(int *)(*in_ECX + 4) = *in_ECX;
  in_ECX[1] = 0;
  return;
}


/* ==== 0044e1a0  FUN_0044e1a0  size=32 ==== */

void FUN_0044e1a0(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  FUN_0044ee00(*in_ECX,param_1);
  return;
}


/* ==== 0044e1c0  FUN_0044e1c0  size=42 ==== */

bool FUN_0044e1c0(void)

{
  int in_ECX;
  
  return *(int *)(in_ECX + 4) == 0;
}


/* ==== 0044e1f0  FUN_0044e1f0  size=20 ==== */

void FUN_0044e1f0(void)

{
  FUN_0044e670();
  return;
}


/* ==== 0044e210  FUN_0044e210  size=20 ==== */

void FUN_0044e210(void)

{
  FUN_0044e6c0();
  return;
}


/* ==== 0044e230  FUN_0044e230  size=26 ==== */

void FUN_0044e230(undefined4 param_1)

{
  FUN_0044ee70(param_1);
  return;
}


/* ==== 0044e250  FUN_0044e250  size=20 ==== */

void FUN_0044e250(void)

{
  FUN_0044e760();
  return;
}


/* ==== 0044e270  FUN_0044e270  size=20 ==== */

void FUN_0044e270(void)

{
  FUN_0044e800();
  return;
}


/* ==== 0044e290  FUN_0044e290  size=20 ==== */

void FUN_0044e290(void)

{
  FUN_0044e8a0();
  return;
}


/* ==== 0044e2b0  FUN_0044e2b0  size=30 ==== */

int FUN_0044e2b0(void)

{
  int *in_ECX;
  
  return in_ECX[1] - *in_ECX;
}


/* ==== 0044e2d0  FUN_0044e2d0  size=32 ==== */

void FUN_0044e2d0(undefined4 param_1)

{
  undefined1 local_5;
  
  FUN_0044eec0(param_1,&local_5);
  return;
}


/* ==== 0044e2f0  FUN_0044e2f0  size=118 ==== */

int FUN_0044e2f0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int in_ECX;
  
  iVar1 = _Unfancy<>(param_1);
  if (in_ECX != iVar1) {
    uVar2 = FUN_00401c60();
    uVar3 = FUN_00401c60(uVar2);
    FUN_004025f0(uVar2,uVar3);
    FUN_0044f030(*param_1,(param_1[1] - *param_1) / 0x24);
  }
  return in_ECX;
}


/* ==== 0044e370  FUN_0044e370  size=20 ==== */

void FUN_0044e370(void)

{
  FUN_0044e940();
  return;
}


/* ==== 0044e390  FUN_0044e390  size=106 ==== */

undefined4 FUN_0044e390(int *param_1)

{
  undefined4 uVar1;
  undefined4 in_ECX;
  undefined1 local_6;
  undefined1 local_5;
  
  uVar1 = FUN_00401c60();
  uVar1 = _Unfancy<>(&local_5,uVar1);
  _Vector_alloc<>(local_6,uVar1);
  FUN_0044f190((param_1[1] - *param_1) / 0x24,param_1,param_1 + 1);
  return in_ECX;
}


/* ==== 0044e400  FUN_0044e400  size=26 ==== */

void FUN_0044e400(undefined4 param_1)

{
  FUN_0044f260(param_1);
  return;
}


/* ==== 0044e420  FUN_0044e420  size=26 ==== */

void FUN_0044e420(undefined4 param_1)

{
  FUN_0044f2b0(param_1);
  return;
}


/* ==== 0044e440  FUN_0044e440  size=30 ==== */

int FUN_0044e440(int param_1)

{
  int *in_ECX;
  
  return param_1 * 0x1c + *in_ECX;
}


/* ==== 0044e460  FUN_0044e460  size=32 ==== */

void FUN_0044e460(undefined4 param_1)

{
  undefined1 local_5;
  
  FUN_0044f300(param_1,&local_5);
  return;
}


/* ==== 0044e480  FUN_0044e480  size=42 ==== */

bool FUN_0044e480(void)

{
  int in_ECX;
  
  return *(int *)(in_ECX + 0x10) == 0;
}


/* ==== 0044e4b0  FUN_0044e4b0  size=17 ==== */

void FUN_0044e4b0(undefined4 param_1)

{
  _Unfancy<>(param_1);
  return;
}


/* ==== 0044e4d0  FUN_0044e4d0  size=109 ==== */

int * FUN_0044e4d0(void)

{
  int iVar1;
  int *in_ECX;
  
  if (*(char *)(*(int *)(*in_ECX + 8) + 0xd) == '\0') {
    iVar1 = FUN_00409dd0(*(undefined4 *)(*in_ECX + 8));
    *in_ECX = iVar1;
  }
  else {
    while ((iVar1 = *(int *)(*in_ECX + 4), *(char *)(iVar1 + 0xd) == '\0' &&
           (*in_ECX == *(int *)(iVar1 + 8)))) {
      *in_ECX = iVar1;
    }
    *in_ECX = iVar1;
  }
  return in_ECX;
}


/* ==== 0044e540  FUN_0044e540  size=19 ==== */

int FUN_0044e540(void)

{
  int *in_ECX;
  
  return *in_ECX + 0x10;
}


/* ==== 0044e560  FUN_0044e560  size=27 ==== */

int * FUN_0044e560(void)

{
  int *in_ECX;
  
  *in_ECX = *in_ECX + 4;
  return in_ECX;
}


/* ==== 0044e580  FUN_0044e580  size=74 ==== */

void FUN_0044e580(void)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  
  uVar1 = FUN_00401c60();
  FUN_00401710(uVar1);
  FUN_0044f3f0(uVar1,*in_ECX);
  FUN_0044f440(uVar1,*in_ECX);
  return;
}


/* ==== 0044e5d0  FUN_0044e5d0  size=70 ==== */

int * FUN_0044e5d0(int *param_1)

{
  int in_ECX;
  
  FUN_00401720(param_1);
  *(int *)param_1[1] = *param_1;
  *(int *)(*param_1 + 4) = param_1[1];
  *(int *)(in_ECX + 4) = *(int *)(in_ECX + 4) + -1;
  return param_1;
}


/* ==== 0044e620  FUN_0044e620  size=74 ==== */

void FUN_0044e620(void)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  
  uVar1 = FUN_00401c60();
  FUN_00401710(uVar1);
  FUN_0044ecf0(uVar1,*in_ECX);
  FUN_0044f480(uVar1,*in_ECX);
  return;
}


/* ==== 0044e670  FUN_0044e670  size=74 ==== */

void FUN_0044e670(void)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  
  uVar1 = FUN_00401c60();
  FUN_00401710(uVar1);
  FUN_0044edb0(uVar1,*in_ECX);
  FUN_0044f4c0(uVar1,*in_ECX);
  return;
}


/* ==== 0044e6c0  FUN_0044e6c0  size=155 ==== */

void FUN_0044e6c0(void)

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
    *in_ECX = 0;
    *piVar3 = 0;
    *piVar2 = 0;
  }
  return;
}


/* ==== 0044e760  FUN_0044e760  size=155 ==== */

void FUN_0044e760(void)

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
    FUN_0044f570(*in_ECX,*piVar3,uVar1);
    FUN_00411d70(*in_ECX,(*piVar2 - *in_ECX) / 0x28);
    *in_ECX = 0;
    *piVar3 = 0;
    *piVar2 = 0;
  }
  return;
}


/* ==== 0044e800  FUN_0044e800  size=155 ==== */

void FUN_0044e800(void)

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
    FUN_0044f5e0(*in_ECX,*piVar3,uVar1);
    FUN_0040a740(*in_ECX,(*piVar2 - *in_ECX) / 0x2c);
    *in_ECX = 0;
    *piVar3 = 0;
    *piVar2 = 0;
  }
  return;
}


/* ==== 0044e8a0  FUN_0044e8a0  size=155 ==== */

void FUN_0044e8a0(void)

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
    FUN_0044f650(*in_ECX,*piVar3,uVar1);
    FUN_0044ea30(*in_ECX,(*piVar2 - *in_ECX) / 0x24);
    *in_ECX = 0;
    *piVar3 = 0;
    *piVar2 = 0;
  }
  return;
}


/* ==== 0044e940  FUN_0044e940  size=155 ==== */

void FUN_0044e940(void)

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
    FUN_0044efc0(*in_ECX,*piVar3,uVar1);
    FUN_0044ea30(*in_ECX,(*piVar2 - *in_ECX) / 0x24);
    *in_ECX = 0;
    *piVar3 = 0;
    *piVar2 = 0;
  }
  return;
}


/* ==== 0044e9e0  allocate  size=34 ==== */

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
  
  uVar1 = FUN_004034f0(param_1);
  FUN_00403080(uVar1);
  return;
}


/* ==== 0044ea10  FUN_0044ea10  size=30 ==== */

void FUN_0044ea10(undefined4 param_1,int param_2)

{
  _Deallocate<>(param_1,param_2 * 0x1c);
  return;
}


/* ==== 0044ea30  FUN_0044ea30  size=30 ==== */

void FUN_0044ea30(undefined4 param_1,int param_2)

{
  _Deallocate<>(param_1,param_2 * 0x24);
  return;
}


/* ==== 0044ea50  FUN_0044ea50  size=92 ==== */

undefined4 *
FUN_0044ea50(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 local_8;
  
  FUN_004025f0(&param_2,&param_3);
  uVar1 = FUN_00405d90(&param_3,param_4);
  uVar1 = FUN_00405d90(&param_2,uVar1);
  local_8 = FUN_0044fc60(uVar1);
  FUN_0042ad90(&param_2,&local_8);
  *param_1 = param_2;
  return param_1;
}


/* ==== 0044eab0  FUN_0044eab0  size=105 ==== */

void FUN_0044eab0(void)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 local_5;
  
  FUN_004025f0(&stack0x00000004,&stack0x00000008);
  iVar1 = FUN_00405d90(&stack0x00000004);
  iVar2 = FUN_00405d90(&stack0x00000008,iVar1);
  puVar3 = (undefined1 *)FUN_0044eb20(&local_5,&stack0x0000000c,iVar1,iVar2);
  FUN_0044fc90(iVar1,iVar2,iVar2 - iVar1 >> 2,*puVar3);
  return;
}


/* ==== 0044eb20  FUN_0044eb20  size=15 ==== */

undefined4 FUN_0044eb20(undefined4 param_1)

{
  return param_1;
}


/* ==== 0044eb30  FUN_0044eb30  size=110 ==== */

undefined4 FUN_0044eb30(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  
  piVar1 = (int *)(in_ECX + 4);
  iVar2 = FUN_0044f8e0();
  if (*piVar1 == iVar2) {
    FUN_006e38d3("list too long");
  }
  uVar3 = FUN_00401c60();
  FUN_0044fd80(uVar3,param_2);
  *piVar1 = *piVar1 + 1;
  uVar3 = FUN_0044f710(param_1);
  FUN_0044f7f0();
  return uVar3;
}


/* ==== 0044eba0  FUN_0044eba0  size=328 ==== */

undefined4 FUN_0044eba0(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007105bd;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar3 = *(undefined4 **)(in_ECX + 4);
  if (puVar3 == *(undefined4 **)(in_ECX + 8)) {
    uVar1 = FUN_0040f730(param_2,param_3);
    FUN_0044f920(param_1,uVar1);
  }
  else {
    if (param_2 == puVar3) {
      FUN_0040f6d0(param_3);
    }
    else {
      uVar1 = FUN_00401c60(DAT_007c5940 ^ (uint)&stack0xfffffffc);
      FUN_0044fe10(uVar1,param_3);
      local_8 = 0;
      FUN_004023d0(param_2,puVar3);
      uVar2 = _Unfancy<>(puVar3,puVar3 + -1);
      FUN_00403690(uVar1,uVar2);
      *(int *)(in_ECX + 4) = *(int *)(in_ECX + 4) + 4;
      FUN_00408ad0(param_2,puVar3 + -1,puVar3);
      puVar3 = (undefined4 *)FUN_0044f8c0();
      *param_2 = *puVar3;
      local_8 = 0xffffffff;
      FUN_0044f860();
    }
    FUN_0044f920(param_1,param_2);
  }
  ExceptionList = local_10;
  return param_1;
}


/* ==== 0044ecf0  FUN_0044ecf0  size=70 ==== */

void FUN_0044ecf0(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *local_8;
  
  *(undefined4 *)param_2[1] = 0;
  local_8 = (undefined4 *)*param_2;
  while (local_8 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*local_8;
    FUN_0044ed40(param_1,local_8);
    local_8 = puVar1;
  }
  return;
}


/* ==== 0044ed40  FUN_0044ed40  size=93 ==== */

void FUN_0044ed40(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0070bdc0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar1 = _Unfancy<>(param_2 + 8,DAT_007c5940 ^ (uint)&stack0xfffffffc);
  FUN_004025f0(param_1,uVar1);
  FUN_0044f480(param_1,param_2);
  ExceptionList = local_10;
  return;
}


/* ==== 0044edb0  FUN_0044edb0  size=70 ==== */

void FUN_0044edb0(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *local_8;
  
  *(undefined4 *)param_2[1] = 0;
  local_8 = (undefined4 *)*param_2;
  while (local_8 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*local_8;
    FUN_0044fe50(param_1,local_8);
    local_8 = puVar1;
  }
  return;
}


/* ==== 0044ee00  FUN_0044ee00  size=110 ==== */

undefined4 FUN_0044ee00(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  
  piVar1 = (int *)(in_ECX + 4);
  iVar2 = FUN_00406f30();
  if (*piVar1 == iVar2) {
    FUN_006e38d3("list too long");
  }
  uVar3 = FUN_00401c60();
  FUN_0044fec0(uVar3,param_2);
  *piVar1 = *piVar1 + 1;
  uVar3 = FUN_0044f710(param_1);
  FUN_0044f780();
  return uVar3;
}


/* ==== 0044ee70  FUN_0044ee70  size=75 ==== */

void FUN_0044ee70(undefined4 param_1)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) == *(int *)(in_ECX + 8)) {
    FUN_0044ffc0(*(int *)(in_ECX + 4),param_1);
  }
  else {
    FUN_0044ff50(param_1);
  }
  return;
}


/* ==== 0044eec0  FUN_0044eec0  size=248 ==== */

void FUN_0044eec0(uint param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *in_ECX;
  int *piVar5;
  
  uVar1 = FUN_00401c60();
  piVar5 = in_ECX + 1;
  uVar2 = (*piVar5 - *in_ECX) / 0x18;
  if (param_1 < uVar2) {
    iVar3 = param_1 * 0x18 + *in_ECX;
    FUN_004023d0(iVar3,*piVar5);
    FUN_004025f0(iVar3,*piVar5,uVar1);
    *piVar5 = iVar3;
  }
  else if (uVar2 < param_1) {
    if ((uint)((in_ECX[2] - *in_ECX) / 0x18) < param_1) {
      FUN_00450190(param_1,param_2);
    }
    else {
      iVar3 = *piVar5;
      iVar4 = FUN_004502d0(iVar3,param_1 - uVar2,uVar1);
      *piVar5 = iVar4;
      FUN_004023d0(iVar3,iVar3);
    }
  }
  return;
}


/* ==== 0044efc0  FUN_0044efc0  size=95 ==== */

void FUN_0044efc0(int param_1,int param_2,void *param_3)

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
  for (; param_1 != param_2; param_1 = param_1 + 0x24) {
    _Unfancy<>(param_1,uVar1);
    __ExceptionPtrDestroy(param_3);
  }
  ExceptionList = local_10;
  return;
}


/* ==== 0044f030  FUN_0044f030  size=342 ==== */

void FUN_0044f030(int param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int *in_ECX;
  int *piVar4;
  int local_18;
  
  uVar1 = FUN_00401c60();
  piVar4 = in_ECX + 1;
  FUN_00401710();
  if ((uint)((in_ECX[2] - *in_ECX) / 0x24) < param_2) {
    FUN_0044f9e0(param_2);
    iVar2 = FUN_00450370(param_1,param_2,*in_ECX,uVar1);
    *piVar4 = iVar2;
  }
  else {
    uVar3 = (*piVar4 - *in_ECX) / 0x24;
    if (uVar3 < param_2) {
      for (local_18 = *in_ECX; local_18 != *piVar4; local_18 = local_18 + 0x24) {
        FUN_0044f6c0(param_1);
        param_1 = param_1 + 0x24;
      }
      iVar2 = FUN_00450370(param_1,param_2 - uVar3,*piVar4,uVar1);
      *piVar4 = iVar2;
    }
    else {
      iVar2 = param_2 * 0x24 + *in_ECX;
      FUN_00450420(param_1,param_2,*in_ECX);
      FUN_0044efc0(iVar2,*piVar4,uVar1);
      *piVar4 = iVar2;
    }
  }
  return;
}


/* ==== 0044f190  FUN_0044f190  size=197 ==== */

void FUN_0044f190(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007105ed;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar1 = FUN_00401c60(DAT_007c5940 ^ (uint)&stack0xfffffffc);
  FUN_00401740(&DAT_0073f69b,in_ECX);
  if (param_1 != 0) {
    FUN_0044f9b0(param_1);
    local_8 = 0;
    uVar1 = FUN_00450460(*param_2,*param_3,*in_ECX,uVar1);
    in_ECX[1] = uVar1;
    local_8 = 0xffffffff;
    FUN_0044f6f0();
  }
  FUN_00401710();
  ExceptionList = local_10;
  return;
}


/* ==== 0044f260  FUN_0044f260  size=75 ==== */

void FUN_0044f260(undefined4 param_1)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) == *(int *)(in_ECX + 8)) {
    FUN_00450570(*(int *)(in_ECX + 4),param_1);
  }
  else {
    FUN_00450510(param_1);
  }
  return;
}


/* ==== 0044f2b0  FUN_0044f2b0  size=75 ==== */

void FUN_0044f2b0(undefined4 param_1)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) == *(int *)(in_ECX + 8)) {
    FUN_004507b0(*(int *)(in_ECX + 4),param_1);
  }
  else {
    FUN_00450740(param_1);
  }
  return;
}


/* ==== 0044f300  FUN_0044f300  size=240 ==== */

void FUN_0044f300(uint param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *in_ECX;
  int *piVar4;
  uint uVar5;
  
  uVar2 = FUN_00401c60();
  piVar4 = in_ECX + 1;
  uVar5 = *piVar4 - *in_ECX >> 2;
  if (param_1 < uVar5) {
    iVar1 = *in_ECX + param_1 * 4;
    FUN_004023d0(iVar1,*piVar4);
    FUN_004025f0(iVar1,*piVar4,uVar2);
    *piVar4 = iVar1;
  }
  else if (uVar5 < param_1) {
    if ((uint)(in_ECX[2] - *in_ECX >> 2) < param_1) {
      FUN_00450980(param_1,param_2);
    }
    else {
      iVar1 = *piVar4;
      iVar3 = FUN_00450ac0(iVar1,param_1 - uVar5,uVar2);
      *piVar4 = iVar3;
      FUN_004023d0(iVar1,iVar1);
    }
  }
  return;
}


/* ==== 0044f3f0  FUN_0044f3f0  size=70 ==== */

void FUN_0044f3f0(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *local_8;
  
  *(undefined4 *)param_2[1] = 0;
  local_8 = (undefined4 *)*param_2;
  while (local_8 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*local_8;
    FUN_00450b80(param_1,local_8);
    local_8 = puVar1;
  }
  return;
}


/* ==== 0044f440  FUN_0044f440  size=50 ==== */

void FUN_0044f440(undefined4 param_1,int param_2)

{
  FUN_004025f0(param_2);
  FUN_004025f0(param_2 + 4);
  FUN_0044f950(param_1,param_2,1);
  return;
}


/* ==== 0044f480  FUN_0044f480  size=50 ==== */

void FUN_0044f480(undefined4 param_1,int param_2)

{
  FUN_004025f0(param_2);
  FUN_004025f0(param_2 + 4);
  FUN_0044f970(param_1,param_2,1);
  return;
}


/* ==== 0044f4c0  FUN_0044f4c0  size=50 ==== */

void FUN_0044f4c0(undefined4 param_1,int param_2)

{
  FUN_004025f0(param_2);
  FUN_004025f0(param_2 + 4);
  FUN_0044f990(param_1,param_2,1);
  return;
}


/* ==== 0044f500  FUN_0044f500  size=95 ==== */

void FUN_0044f500(int param_1,int param_2,void *param_3)

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
  for (; param_1 != param_2; param_1 = param_1 + 0x1c) {
    _Unfancy<>(param_1,uVar1);
    __ExceptionPtrDestroy(param_3);
  }
  ExceptionList = local_10;
  return;
}


/* ==== 0044f570  FUN_0044f570  size=95 ==== */

void FUN_0044f570(int param_1,int param_2,void *param_3)

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


/* ==== 0044f5e0  FUN_0044f5e0  size=95 ==== */

void FUN_0044f5e0(int param_1,int param_2,void *param_3)

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
  for (; param_1 != param_2; param_1 = param_1 + 0x2c) {
    _Unfancy<>(param_1,uVar1);
    __ExceptionPtrDestroy(param_3);
  }
  ExceptionList = local_10;
  return;
}


/* ==== 0044f650  FUN_0044f650  size=95 ==== */

void FUN_0044f650(int param_1,int param_2,void *param_3)

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
  for (; param_1 != param_2; param_1 = param_1 + 0x24) {
    _Unfancy<>(param_1,uVar1);
    __ExceptionPtrDestroy(param_3);
  }
  ExceptionList = local_10;
  return;
}


/* ==== 0044f6c0  FUN_0044f6c0  size=46 ==== */

undefined4 FUN_0044f6c0(int param_1)

{
  undefined4 in_ECX;
  
  FUN_0040d840(param_1);
  FUN_00427560(param_1 + 0x18);
  return in_ECX;
}


/* ==== 0044f6f0  FUN_0044f6f0  size=30 ==== */

void FUN_0044f6f0(void)

{
  int *in_ECX;
  
  if (*in_ECX != 0) {
    FUN_0044e940();
  }
  return;
}


/* ==== 0044f710  FUN_0044f710  size=104 ==== */

undefined4 FUN_0044f710(int param_1)

{
  undefined4 uVar1;
  int in_ECX;
  undefined4 *local_10 [2];
  int local_8;
  
  local_10[0] = *(undefined4 **)(param_1 + 4);
  local_8 = in_ECX;
  FUN_004064c0(*(undefined4 *)(in_ECX + 4),&param_1);
  FUN_004064c0(*(int *)(local_8 + 4) + 4,local_10);
  uVar1 = *(undefined4 *)(local_8 + 4);
  *(undefined4 *)(local_8 + 4) = 0;
  *(undefined4 *)(param_1 + 4) = uVar1;
  *local_10[0] = uVar1;
  return uVar1;
}


/* ==== 0044f780  FUN_0044f780  size=104 ==== */

void FUN_0044f780(void)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0070c170;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (in_ECX[1] != 0) {
    uVar1 = _Unfancy<>(in_ECX[1] + 8,DAT_007c5940 ^ (uint)&stack0xfffffffc);
    FUN_004025f0(*in_ECX,uVar1);
  }
  FUN_00406dc0();
  ExceptionList = local_10;
  return;
}


/* ==== 0044f7f0  FUN_0044f7f0  size=104 ==== */

void FUN_0044f7f0(void)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0070c170;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (in_ECX[1] != 0) {
    uVar1 = _Unfancy<>(in_ECX[1] + 8,DAT_007c5940 ^ (uint)&stack0xfffffffc);
    FUN_004025f0(*in_ECX,uVar1);
  }
  FUN_0044fab0();
  ExceptionList = local_10;
  return;
}


/* ==== 0044f860  FUN_0044f860  size=85 ==== */

void FUN_0044f860(void)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0070c170;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar1 = FUN_0044f8c0(DAT_007c5940 ^ (uint)&stack0xfffffffc);
  uVar1 = _Unfancy<>(uVar1);
  FUN_004025f0(*in_ECX,uVar1);
  ExceptionList = local_10;
  return;
}


/* ==== 0044f8c0  FUN_0044f8c0  size=17 ==== */

int FUN_0044f8c0(void)

{
  int in_ECX;
  
  return in_ECX + 4;
}


/* ==== 0044f8e0  FUN_0044f8e0  size=59 ==== */

uint FUN_0044f8e0(void)

{
  undefined4 uVar1;
  uint *puVar2;
  uint local_10;
  uint local_c [2];
  
  uVar1 = FUN_00401c60();
  local_c[0] = FUN_0044fae0(uVar1);
  local_10 = FUN_00402140();
  puVar2 = std::_Max_value<unsigned_int>(&local_10,local_c);
  return *puVar2;
}


/* ==== 0044f920  FUN_0044f920  size=41 ==== */

undefined4 FUN_0044f920(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = _Unfancy<>();
  _Vector_iterator<>(param_2,uVar1);
  return param_1;
}


/* ==== 0044f950  FUN_0044f950  size=22 ==== */

void FUN_0044f950(undefined4 param_1,undefined4 param_2,int param_3)

{
  _Deallocate<>(param_2,param_3 * 0x14);
  return;
}


/* ==== 0044f970  FUN_0044f970  size=22 ==== */

void FUN_0044f970(undefined4 param_1,undefined4 param_2,int param_3)

{
  _Deallocate<>(param_2,param_3 * 0xc);
  return;
}


/* ==== 0044f990  FUN_0044f990  size=24 ==== */

void FUN_0044f990(undefined4 param_1,undefined4 param_2,int param_3)

{
  _Deallocate<>(param_2,param_3 << 5);
  return;
}


/* ==== 0044f9b0  FUN_0044f9b0  size=45 ==== */

void FUN_0044f9b0(uint param_1)

{
  uint uVar1;
  
  uVar1 = FUN_0044fbc0();
  if (uVar1 < param_1) {
    FUN_00401c80();
  }
  FUN_0044faf0(param_1);
  return;
}


/* ==== 0044f9e0  FUN_0044f9e0  size=197 ==== */

void FUN_0044f9e0(uint param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  int *in_ECX;
  
  uVar1 = FUN_00401c60();
  uVar2 = FUN_0044fbc0();
  if (uVar2 < param_1) {
    FUN_00401c80();
  }
  uVar3 = FUN_0044fb60(param_1);
  if (*in_ECX != 0) {
    FUN_0044efc0(*in_ECX,in_ECX[1],uVar1);
    FUN_0044ea30(*in_ECX,(in_ECX[2] - *in_ECX) / 0x24);
    *in_ECX = 0;
    in_ECX[1] = 0;
    in_ECX[2] = 0;
  }
  FUN_0044faf0(uVar3);
  return;
}


/* ==== 0044fab0  FUN_0044fab0  size=40 ==== */

void FUN_0044fab0(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) != 0) {
    FUN_0044fc00(*(undefined4 *)(in_ECX + 4),1);
  }
  return;
}


/* ==== 0044fae0  FUN_0044fae0  size=10 ==== */

undefined4 FUN_0044fae0(void)

{
  return 0x15555555;
}


/* ==== 0044faf0  FUN_0044faf0  size=97 ==== */

void FUN_0044faf0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *in_ECX;
  
  uVar1 = FUN_00401c60(&param_1);
  iVar2 = FUN_00450c20(uVar1);
  *in_ECX = iVar2;
  in_ECX[1] = iVar2;
  in_ECX[2] = param_1 * 0x24 + iVar2;
  return;
}


/* ==== 0044fb60  FUN_0044fb60  size=84 ==== */

uint FUN_0044fb60(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_0044fc20();
  uVar2 = FUN_0044fbc0();
  if ((uVar1 <= uVar2 - (uVar1 >> 1)) && (uVar2 = (uVar1 >> 1) + uVar1, uVar2 < param_1)) {
    uVar2 = param_1;
  }
  return uVar2;
}


/* ==== 0044fbc0  FUN_0044fbc0  size=59 ==== */

uint FUN_0044fbc0(void)

{
  undefined4 uVar1;
  uint *puVar2;
  uint local_10;
  uint local_c [2];
  
  uVar1 = FUN_00401c60();
  local_c[0] = FUN_0044fc50(uVar1);
  local_10 = FUN_00402140();
  puVar2 = std::_Max_value<unsigned_int>(&local_10,local_c);
  return *puVar2;
}


/* ==== 0044fc00  FUN_0044fc00  size=30 ==== */

void FUN_0044fc00(undefined4 param_1,int param_2)

{
  _Deallocate<>(param_1,param_2 * 0xc);
  return;
}


/* ==== 0044fc20  FUN_0044fc20  size=38 ==== */

int FUN_0044fc20(void)

{
  int *in_ECX;
  
  return (in_ECX[2] - *in_ECX) / 0x24;
}


/* ==== 0044fc50  FUN_0044fc50  size=10 ==== */

undefined4 FUN_0044fc50(void)

{
  return 0x71c71c7;
}


/* ==== 0044fc60  FUN_0044fc60  size=43 ==== */

int * FUN_0044fc60(int *param_1,int *param_2,int *param_3)

{
  for (; (param_1 != param_2 && (*param_1 != *param_3)); param_1 = param_1 + 1) {
  }
  return param_1;
}


/* ==== 0044fc90  FUN_0044fc90  size=235 ==== */

void FUN_0044fc90(int param_1,int param_2,int param_3,undefined1 param_4)

{
  int local_c;
  int local_8;
  
  while( true ) {
    if (param_2 - param_1 >> 2 < 0x21) {
      FUN_00450fd0(param_1,param_2,param_4);
      return;
    }
    if (param_3 < 1) break;
    FUN_00451140(&local_c,param_1,param_2,param_4);
    param_3 = (param_3 >> 1) + (param_3 >> 2);
    if (local_c - param_1 >> 2 < param_2 - local_8 >> 2) {
      FUN_0044fc90(param_1,local_c,param_3,param_4);
      param_1 = local_8;
    }
    else {
      FUN_0044fc90(local_8,param_2,param_3,param_4);
      param_2 = local_c;
    }
  }
  FUN_004510a0(param_1,param_2,param_4);
  FUN_00451100(param_1,param_2,param_4);
  return;
}


/* ==== 0044fd80  FUN_0044fd80  size=129 ==== */

undefined4 * FUN_0044fd80(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071061d;
  local_10 = ExceptionList;
  uVar1 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_00407de0(param_1);
  local_8 = 0;
  FUN_00450e10(uVar1);
  uVar2 = _Unfancy<>(in_ECX[1] + 8,param_2);
  FUN_00403690(*in_ECX,uVar2);
  ExceptionList = local_10;
  return in_ECX;
}


/* ==== 0044fe10  FUN_0044fe10  size=60 ==== */

undefined4 * FUN_0044fe10(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  
  *in_ECX = param_1;
  uVar1 = FUN_0044f8c0(param_2);
  uVar1 = _Unfancy<>(uVar1);
  FUN_00403690(*in_ECX,uVar1);
  return in_ECX;
}


/* ==== 0044fe50  FUN_0044fe50  size=93 ==== */

void FUN_0044fe50(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0070bdc0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar1 = _Unfancy<>(param_2 + 8,DAT_007c5940 ^ (uint)&stack0xfffffffc);
  FUN_004025f0(param_1,uVar1);
  FUN_0044f4c0(param_1,param_2);
  ExceptionList = local_10;
  return;
}


/* ==== 0044fec0  FUN_0044fec0  size=129 ==== */

undefined4 * FUN_0044fec0(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070c25d;
  local_10 = ExceptionList;
  uVar1 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_00407de0(param_1);
  local_8 = 0;
  FUN_00407db0(uVar1);
  uVar2 = _Unfancy<>(in_ECX[1] + 8,param_2);
  FUN_0040a790(*in_ECX,uVar2);
  ExceptionList = local_10;
  return in_ECX;
}


/* ==== 0044ff50  FUN_0044ff50  size=110 ==== */

int FUN_0044ff50(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  int *piVar3;
  
  piVar3 = (int *)(in_ECX + 4);
  uVar2 = _Unfancy<>(*piVar3,param_1);
  uVar2 = FUN_00401c60(uVar2);
  FUN_00451440(uVar2);
  FUN_004023d0(*piVar3,*piVar3);
  iVar1 = *piVar3;
  *piVar3 = *piVar3 + 0x28;
  return iVar1;
}


/* ==== 0044ffc0  FUN_0044ffc0  size=461 ==== */

int FUN_0044ffc0(int param_1,undefined4 param_2)

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
  puStack_c = &LAB_0071064d;
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
  FUN_00451440(local_18,uVar3);
  *local_3c = local_20 * 0x28 + local_14;
  if (param_1 == *local_28) {
    FUN_00451470(*local_24,*local_28,local_14,local_18);
  }
  else {
    FUN_00451470(*local_24,param_1,local_14,local_18);
    *local_3c = local_14;
    FUN_00451470(param_1,*local_28,local_14 + 0x28 + local_20 * 0x28,local_18);
  }
  uVar3 = 0;
  FUN_00450e40(local_14,local_40,local_2c);
  local_44 = local_20 * 0x28 + local_14;
  local_8 = 0xffffffff;
  FUN_00450dc0(uVar1,uVar4,uVar3);
  ExceptionList = local_10;
  return local_44;
}


/* ==== 00450190  FUN_00450190  size=315 ==== */

void FUN_00450190(uint param_1)

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
  puStack_c = &LAB_0071067d;
  local_10 = ExceptionList;
  uVar1 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar2 = FUN_0040a390(uVar1);
  if (uVar2 < param_1) {
    FUN_00401c80();
  }
  local_18 = FUN_00401c60();
  local_28 = local_14;
  local_34 = local_14;
  local_30 = local_14 + 1;
  local_2c = (*local_30 - *local_14) / 0x18;
  local_24 = FUN_0042a360(param_1);
  local_1c = FUN_0040a510(local_18,&local_24);
  local_3c = local_2c * 0x18 + local_1c;
  local_8 = 0;
  local_38 = &local_3c;
  uVar4 = local_18;
  local_20 = local_3c;
  iVar3 = FUN_004502d0(local_3c,param_1 - local_2c,local_18,uVar1,local_18,local_1c,local_24,
                       local_3c);
  *local_38 = iVar3;
  FUN_0042d020(*local_34,*local_30,local_1c,local_18);
  uVar5 = 0;
  FUN_0042c9b0(local_1c,param_1,local_24);
  local_8 = 0xffffffff;
  FUN_0042c650(uVar1,uVar4,uVar5);
  ExceptionList = local_10;
  return;
}


/* ==== 004502d0  FUN_004502d0  size=132 ==== */

undefined4 FUN_004502d0(undefined4 param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070bead;
  local_10 = ExceptionList;
  uVar1 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_00403180(param_1,param_3);
  local_8 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_00451520();
  }
  uVar2 = FUN_00403130(uVar1);
  local_8 = 0xffffffff;
  FUN_00403150();
  ExceptionList = local_10;
  return uVar2;
}


/* ==== 00450370  FUN_00450370  size=164 ==== */

undefined4 FUN_00450370(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007106ad;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_18 = FUN_00402d20(&param_1,DAT_007c5940 ^ (uint)&stack0xfffffffc);
  FUN_00403180(param_3,param_4);
  local_8 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_00451560(local_18);
    local_18 = local_18 + 0x24;
  }
  uVar1 = FUN_00403130();
  local_8 = 0xffffffff;
  FUN_00450d90();
  ExceptionList = local_10;
  return uVar1;
}


/* ==== 00450420  FUN_00450420  size=58 ==== */

int FUN_00450420(int param_1,int param_2,int param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_0044f6c0(param_1);
    param_3 = param_3 + 0x24;
    param_1 = param_1 + 0x24;
  }
  return param_3;
}


/* ==== 00450460  FUN_00450460  size=172 ==== */

undefined4 FUN_00450460(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007106dd;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_18 = FUN_00402d20(&param_1,DAT_007c5940 ^ (uint)&stack0xfffffffc);
  iVar1 = FUN_00402d20(&param_2);
  FUN_00403180(param_3,param_4);
  local_8 = 0;
  for (; local_18 != iVar1; local_18 = local_18 + 0x24) {
    FUN_00451560(local_18);
  }
  uVar2 = FUN_00403130();
  local_8 = 0xffffffff;
  FUN_00450d90();
  ExceptionList = local_10;
  return uVar2;
}


/* ==== 00450510  FUN_00450510  size=92 ==== */

int FUN_00450510(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  int *piVar2;
  
  piVar2 = (int *)(in_ECX + 4);
  FUN_004515a0(*piVar2,param_1);
  FUN_004023d0(*piVar2,*piVar2);
  iVar1 = *piVar2;
  *piVar2 = *piVar2 + 0x18;
  return iVar1;
}


/* ==== 00450570  FUN_00450570  size=461 ==== */

int FUN_00450570(int param_1,undefined4 param_2)

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
  puStack_c = &LAB_0071070d;
  local_10 = ExceptionList;
  uVar1 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_18 = FUN_00401c60(uVar1);
  local_30 = local_1c;
  local_24 = local_1c;
  local_28 = local_1c + 1;
  local_20 = (param_1 - *local_1c) / 0x18;
  local_34 = (*local_28 - *local_1c) / 0x18;
  iVar2 = FUN_0040a390();
  if (local_34 == iVar2) {
    FUN_00401c80();
  }
  local_40 = local_34 + 1;
  local_2c = FUN_0042a360(local_40);
  local_14 = FUN_0040a510(local_18,&local_2c);
  local_4c = local_14 + 0x18 + local_20 * 0x18;
  local_8 = 0;
  local_3c = &local_4c;
  uVar4 = local_18;
  local_48 = local_4c;
  local_38 = local_4c;
  uVar3 = _Unfancy<>(local_20 * 0x18 + local_14,param_2,uVar1,local_18,local_14,local_2c);
  FUN_004515d0(local_18,uVar3);
  *local_3c = local_20 * 0x18 + local_14;
  if (param_1 == *local_28) {
    FUN_00451600(*local_24,*local_28,local_14,local_18);
  }
  else {
    FUN_00451600(*local_24,param_1,local_14,local_18);
    *local_3c = local_14;
    FUN_00451600(param_1,*local_28,local_14 + 0x18 + local_20 * 0x18,local_18);
  }
  uVar3 = 0;
  FUN_00450f20(local_14,local_40,local_2c);
  local_44 = local_20 * 0x18 + local_14;
  local_8 = 0xffffffff;
  FUN_00450d40(uVar1,uVar4,uVar3);
  ExceptionList = local_10;
  return local_44;
}


/* ==== 00450740  FUN_00450740  size=110 ==== */

int FUN_00450740(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  int *piVar3;
  
  piVar3 = (int *)(in_ECX + 4);
  uVar2 = _Unfancy<>(*piVar3,param_1);
  uVar2 = FUN_00401c60(uVar2);
  FUN_00412460(uVar2);
  FUN_004023d0(*piVar3,*piVar3);
  iVar1 = *piVar3;
  *piVar3 = *piVar3 + 0x18;
  return iVar1;
}


/* ==== 004507b0  FUN_004507b0  size=461 ==== */

int FUN_004507b0(int param_1,undefined4 param_2)

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
  puStack_c = &LAB_0071070d;
  local_10 = ExceptionList;
  uVar1 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_18 = FUN_00401c60(uVar1);
  local_30 = local_1c;
  local_24 = local_1c;
  local_28 = local_1c + 1;
  local_20 = (param_1 - *local_1c) / 0x18;
  local_34 = (*local_28 - *local_1c) / 0x18;
  iVar2 = FUN_0040a390();
  if (local_34 == iVar2) {
    FUN_00401c80();
  }
  local_40 = local_34 + 1;
  local_2c = FUN_0042a360(local_40);
  local_14 = FUN_0040a510(local_18,&local_2c);
  local_4c = local_14 + 0x18 + local_20 * 0x18;
  local_8 = 0;
  local_3c = &local_4c;
  uVar4 = local_18;
  local_48 = local_4c;
  local_38 = local_4c;
  uVar3 = _Unfancy<>(local_20 * 0x18 + local_14,param_2,uVar1,local_18,local_14,local_2c);
  FUN_00412460(local_18,uVar3);
  *local_3c = local_20 * 0x18 + local_14;
  if (param_1 == *local_28) {
    FUN_00451600(*local_24,*local_28,local_14,local_18);
  }
  else {
    FUN_00451600(*local_24,param_1,local_14,local_18);
    *local_3c = local_14;
    FUN_00451600(param_1,*local_28,local_14 + 0x18 + local_20 * 0x18,local_18);
  }
  uVar3 = 0;
  FUN_00450f20(local_14,local_40,local_2c);
  local_44 = local_20 * 0x18 + local_14;
  local_8 = 0xffffffff;
  FUN_00450d40(uVar1,uVar4,uVar3);
  ExceptionList = local_10;
  return local_44;
}


/* ==== 00450980  FUN_00450980  size=312 ==== */

void FUN_00450980(uint param_1)

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
  puStack_c = &LAB_0070cacd;
  local_10 = ExceptionList;
  uVar1 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar2 = FUN_004023e0(uVar1);
  if (uVar2 < param_1) {
    FUN_00401c80();
  }
  local_18 = FUN_00401c60();
  local_28 = local_14;
  local_34 = local_14;
  local_30 = local_14 + 1;
  local_2c = *local_30 - *local_14 >> 2;
  local_24 = FUN_00410730(param_1);
  local_1c = FUN_004030e0(local_18,&local_24);
  local_3c = local_1c + local_2c * 4;
  local_8 = 0;
  local_38 = &local_3c;
  uVar4 = local_18;
  local_20 = local_3c;
  iVar3 = FUN_00450ac0(local_3c,param_1 - local_2c,local_18,uVar1,local_18,local_1c,local_24,
                       local_3c);
  *local_38 = iVar3;
  FUN_00410eb0(*local_34,*local_30,local_1c,local_18);
  uVar5 = 0;
  FUN_00410680(local_1c,param_1,local_24);
  local_8 = 0xffffffff;
  FUN_00410350(uVar1,uVar4,uVar5);
  ExceptionList = local_10;
  return;
}


/* ==== 00450ac0  FUN_00450ac0  size=100 ==== */

int FUN_00450ac0(int param_1,int param_2)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0071073d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = _Unfancy<>(param_1,DAT_007c5940 ^ (uint)&stack0xfffffffc);
  FUN_004516b0(iVar1,iVar1 + param_2 * 4);
  ExceptionList = local_10;
  return param_1 + param_2 * 4;
}


/* ==== 00450b80  FUN_00450b80  size=93 ==== */

void FUN_00450b80(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0070bdc0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar1 = _Unfancy<>(param_2 + 8,DAT_007c5940 ^ (uint)&stack0xfffffffc);
  FUN_004025f0(param_1,uVar1);
  FUN_0044f440(param_1,param_2);
  ExceptionList = local_10;
  return;
}


/* ==== 00450c20  FUN_00450c20  size=19 ==== */

void FUN_00450c20(undefined4 param_1,undefined4 *param_2)

{
  allocate(*param_2);
  return;
}


/* ==== 00450ca0  FUN_00450ca0  size=46 ==== */

undefined4 FUN_00450ca0(uint param_1)

{
  undefined4 in_ECX;
  
  FUN_00450d00();
  if ((param_1 & 1) != 0) {
    FUN_006e4b8e(in_ECX,0x2c);
  }
  return in_ECX;
}


/* ==== 00450d00  FUN_00450d00  size=23 ==== */

void FUN_00450d00(void)

{
  int in_ECX;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(in_ECX + 0xc));
  return;
}


/* ==== 00450d20  FUN_00450d20  size=23 ==== */

void FUN_00450d20(void)

{
  int in_ECX;
  
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)(in_ECX + 4));
  return;
}


/* ==== 00450d40  FUN_00450d40  size=73 ==== */

void FUN_00450d40(void)

{
  undefined4 *in_ECX;
  
  if (in_ECX[1] != 0) {
    FUN_0040ea10(in_ECX[3],in_ECX[4],*in_ECX);
    FUN_00405bf0(in_ECX[1],in_ECX[2]);
  }
  return;
}


/* ==== 00450d90  FUN_00450d90  size=39 ==== */

void FUN_00450d90(void)

{
  undefined4 *in_ECX;
  
  FUN_0044efc0(*in_ECX,in_ECX[1],in_ECX[2]);
  return;
}


/* ==== 00450dc0  FUN_00450dc0  size=73 ==== */

void FUN_00450dc0(void)

{
  undefined4 *in_ECX;
  
  if (in_ECX[1] != 0) {
    FUN_0044f570(in_ECX[3],in_ECX[4],*in_ECX);
    FUN_00411d70(in_ECX[1],in_ECX[2]);
  }
  return;
}


/* ==== 00450e10  FUN_00450e10  size=39 ==== */

void FUN_00450e10(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = 0;
  uVar1 = allocate(1);
  *(undefined4 *)(in_ECX + 4) = uVar1;
  return;
}


/* ==== 00450e40  FUN_00450e40  size=163 ==== */

void FUN_00450e40(int param_1,int param_2,int param_3)

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
    FUN_0044f570(*in_ECX,*piVar3,uVar1);
    FUN_00411d70(*in_ECX,(*piVar2 - *in_ECX) / 0x28);
  }
  *in_ECX = param_1;
  *piVar3 = param_2 * 0x28 + param_1;
  *piVar2 = param_3 * 0x28 + param_1;
  return;
}


/* ==== 00450ef0  allocate  size=34 ==== */

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
  
  uVar1 = FUN_00451730(param_1);
  FUN_00403080(uVar1);
  return;
}


/* ==== 00450f20  FUN_00450f20  size=163 ==== */

void FUN_00450f20(int param_1,int param_2,int param_3)

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
    FUN_0040ea10(*in_ECX,*piVar3,uVar1);
    FUN_00405bf0(*in_ECX,(*piVar2 - *in_ECX) / 0x18);
  }
  *in_ECX = param_1;
  *piVar3 = param_2 * 0x18 + param_1;
  *piVar2 = param_3 * 0x18 + param_1;
  return;
}


/* ==== 00450fd0  FUN_00450fd0  size=203 ==== */

undefined4 * FUN_00450fd0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *local_10;
  undefined4 *local_c;
  
  if (param_1 != param_2) {
    local_c = param_1;
    while (puVar4 = local_c + 1, puVar4 != param_2) {
      uVar1 = *puVar4;
      cVar2 = FUN_0043d0a0(uVar1,*param_1);
      local_10 = puVar4;
      if (cVar2 == '\0') {
        while( true ) {
          puVar3 = local_10 + -1;
          cVar2 = FUN_0043d0a0(uVar1,*puVar3);
          if (cVar2 == '\0') break;
          *local_10 = *puVar3;
          local_10 = puVar3;
        }
        *local_10 = uVar1;
        local_c = puVar4;
      }
      else {
        FUN_00408ad0(param_1,puVar4,local_c + 2);
        *param_1 = uVar1;
        local_c = puVar4;
      }
    }
  }
  return param_2;
}


/* ==== 004510a0  FUN_004510a0  size=88 ==== */

void FUN_004510a0(int param_1,int param_2,undefined1 param_3)

{
  undefined4 local_10;
  int local_c;
  int local_8;
  
  local_c = param_2 - param_1 >> 2;
  local_8 = param_2 - param_1 >> 3;
  while (0 < local_8) {
    local_8 = local_8 + -1;
    local_10 = *(undefined4 *)(param_1 + local_8 * 4);
    FUN_00451810(param_1,local_8,local_c,&local_10,param_3);
  }
  return;
}


/* ==== 00451100  FUN_00451100  size=53 ==== */

void FUN_00451100(int param_1,int param_2,undefined1 param_3)

{
  for (; 1 < param_2 - param_1 >> 2; param_2 = param_2 + -4) {
    FUN_004518f0(param_1,param_2,param_3);
  }
  return;
}


/* ==== 00451140  FUN_00451140  size=747 ==== */

undefined4
FUN_00451140(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,undefined1 param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *local_14;
  undefined4 *local_10;
  undefined4 *local_c;
  undefined4 *local_8;
  
  puVar3 = param_2 + ((int)param_3 - (int)param_2 >> 3);
  uVar2 = FUN_00408c40(param_3,param_4);
  FUN_00451940(param_2,puVar3,uVar2);
  local_8 = puVar3;
  local_c = (undefined4 *)FUN_00408d50(puVar3);
  for (; param_2 < local_8; local_8 = local_8 + -1) {
    uVar2 = *local_8;
    puVar3 = (undefined4 *)FUN_00408c40(local_8,uVar2);
    cVar1 = FUN_0043d0a0(*puVar3,uVar2);
    if (cVar1 != '\0') break;
    puVar3 = (undefined4 *)FUN_00408c40(local_8);
    cVar1 = FUN_0043d0a0(*local_8,*puVar3);
    if (cVar1 != '\0') break;
  }
  while (((local_c < param_3 && (cVar1 = FUN_0043d0a0(*local_c,*local_8), cVar1 == '\0')) &&
         (cVar1 = FUN_0043d0a0(*local_8,*local_c), cVar1 == '\0'))) {
    local_c = local_c + 1;
  }
  local_10 = local_c;
  local_14 = local_8;
  do {
    while (param_3 <= local_10) {
LAB_004512cb:
      for (; param_2 < local_14; local_14 = local_14 + -1) {
        puVar3 = (undefined4 *)FUN_00408c40(local_14);
        cVar1 = FUN_0043d0a0(*puVar3,*local_8);
        if (cVar1 == '\0') {
          cVar1 = FUN_0043d0a0(*local_8,*puVar3);
          if (cVar1 != '\0') break;
          local_8 = local_8 + -1;
          if (local_8 != puVar3) {
            FUN_00402490(local_8,puVar3);
          }
        }
      }
      if ((local_14 == param_2) && (local_10 == param_3)) {
        FUN_004024c0(&local_8,&local_c);
        return param_1;
      }
      if (local_14 == param_2) {
        if (local_c != local_10) {
          FUN_00402490(local_8,local_c);
        }
        local_c = local_c + 1;
        FUN_00402490(local_8,local_10);
        local_8 = local_8 + 1;
        local_10 = local_10 + 1;
      }
      else if (local_10 == param_3) {
        local_14 = local_14 + -1;
        local_8 = local_8 + -1;
        if (local_14 != local_8) {
          FUN_00402490(local_14,local_8);
        }
        local_c = local_c + -1;
        FUN_00402490(local_8,local_c);
      }
      else {
        local_14 = local_14 + -1;
        FUN_00402490(local_10,local_14);
        local_10 = local_10 + 1;
      }
    }
    cVar1 = FUN_0043d0a0(*local_8,*local_10);
    if (cVar1 == '\0') {
      cVar1 = FUN_0043d0a0(*local_10,*local_8);
      if (cVar1 != '\0') goto LAB_004512cb;
      if (local_c != local_10) {
        FUN_00402490(local_c,local_10);
      }
      local_c = local_c + 1;
    }
    local_10 = local_10 + 1;
  } while( true );
}


/* ==== 00451440  FUN_00451440  size=38 ==== */

void FUN_00451440(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_004013e0(0x28,param_2);
  FUN_00451760(param_3);
  return;
}


/* ==== 00451470  FUN_00451470  size=168 ==== */

undefined4 FUN_00451470(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071076d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = FUN_00402d20(&param_1,DAT_007c5940 ^ (uint)&stack0xfffffffc);
  iVar1 = FUN_00402d20(&param_2);
  FUN_00403180(param_3,param_4);
  local_8 = 0;
  for (; local_14 != iVar1; local_14 = local_14 + 0x28) {
    FUN_00451a30(local_14);
  }
  uVar2 = FUN_00403130();
  local_8 = 0xffffffff;
  FUN_004517e0();
  ExceptionList = local_10;
  return uVar2;
}


/* ==== 00451520  FUN_00451520  size=57 ==== */

void FUN_00451520(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  uVar1 = _Unfancy<>(*(undefined4 *)(in_ECX + 4));
  FUN_00451a70(*(undefined4 *)(in_ECX + 8),uVar1);
  *(int *)(in_ECX + 4) = *(int *)(in_ECX + 4) + 0x18;
  return;
}


/* ==== 00451560  FUN_00451560  size=63 ==== */

void FUN_00451560(undefined4 param_1)

{
  undefined4 uVar1;
  int in_ECX;
  
  uVar1 = _Unfancy<>(*(undefined4 *)(in_ECX + 4),param_1);
  FUN_00451aa0(*(undefined4 *)(in_ECX + 8),uVar1);
  *(int *)(in_ECX + 4) = *(int *)(in_ECX + 4) + 0x24;
  return;
}


/* ==== 004515a0  FUN_004515a0  size=47 ==== */

void FUN_004515a0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = _Unfancy<>(param_1);
  FUN_004013e0(0x18,uVar1);
  FUN_00405450(param_2);
  return;
}


/* ==== 004515d0  FUN_004515d0  size=38 ==== */

void FUN_004515d0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_004013e0(0x18,param_2);
  FUN_00405450(param_3);
  return;
}


/* ==== 00451600  FUN_00451600  size=168 ==== */

undefined4 FUN_00451600(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070e1dd;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = FUN_00402d20(&param_1,DAT_007c5940 ^ (uint)&stack0xfffffffc);
  iVar1 = FUN_00402d20(&param_2);
  FUN_00403180(param_3,param_4);
  local_8 = 0;
  for (; local_14 != iVar1; local_14 = local_14 + 0x18) {
    FUN_00451ad0(local_14);
  }
  uVar2 = FUN_00403130();
  local_8 = 0xffffffff;
  FUN_004103a0();
  ExceptionList = local_10;
  return uVar2;
}


/* ==== 004516b0  FUN_004516b0  size=64 ==== */

undefined4 FUN_004516b0(undefined4 param_1,undefined4 param_2)

{
  void *_Dst;
  int iVar1;
  
  _Dst = (void *)FUN_00402d20(&param_1);
  iVar1 = FUN_00402d20(&param_2);
  _memset(_Dst,0,iVar1 - (int)_Dst);
  return param_2;
}


/* ==== 004516f0  FUN_004516f0  size=57 ==== */

void FUN_004516f0(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  uVar1 = _Unfancy<>(*(undefined4 *)(in_ECX + 4));
  FUN_00451b10(*(undefined4 *)(in_ECX + 8),uVar1);
  *(int *)(in_ECX + 4) = *(int *)(in_ECX + 4) + 4;
  return;
}


/* ==== 00451730  FUN_00451730  size=40 ==== */

int FUN_00451730(uint param_1)

{
  if (0x71c71c7 < param_1) {
    FUN_004015f0(0x71c71c7);
  }
  return param_1 * 0x24;
}


/* ==== 00451760  FUN_00451760  size=115 ==== */

int FUN_00451760(int param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070ce0d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00405520(param_1);
  local_8 = 0;
  *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(param_1 + 0x18);
  FUN_00406960(param_1 + 0x1c);
  ExceptionList = local_10;
  return in_ECX;
}


/* ==== 004517e0  FUN_004517e0  size=39 ==== */

void FUN_004517e0(void)

{
  undefined4 *in_ECX;
  
  FUN_0044f570(*in_ECX,in_ECX[1],in_ECX[2]);
  return;
}


/* ==== 00451810  FUN_00451810  size=209 ==== */

void FUN_00451810(int param_1,int param_2,uint param_3,undefined4 param_4,undefined1 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int local_8;
  
  iVar2 = param_2;
  local_8 = param_2;
  iVar6 = (int)(param_3 - 1) >> 1;
  while (iVar3 = local_8, local_8 < iVar6) {
    iVar1 = local_8 * 2;
    local_8 = iVar1 + 2;
    cVar4 = FUN_0043d0a0(*(undefined4 *)(param_1 + local_8 * 4),
                         *(undefined4 *)(param_1 + -4 + local_8 * 4));
    if (cVar4 != '\0') {
      local_8 = iVar1 + 1;
    }
    *(undefined4 *)(param_1 + iVar3 * 4) = *(undefined4 *)(param_1 + local_8 * 4);
  }
  param_2 = local_8;
  if (local_8 == iVar6) {
    uVar5 = param_3 & 0x80000001;
    if ((int)uVar5 < 0) {
      uVar5 = (uVar5 - 1 | 0xfffffffe) + 1;
    }
    if (uVar5 == 0) {
      *(undefined4 *)(param_1 + local_8 * 4) = *(undefined4 *)(param_1 + -4 + param_3 * 4);
      param_2 = param_3 - 1;
    }
  }
  FUN_00451bc0(param_1,param_2,iVar2,param_4,param_5);
  return;
}


/* ==== 004518f0  FUN_004518f0  size=68 ==== */

void FUN_004518f0(int param_1,int param_2,undefined1 param_3)

{
  undefined4 *puVar1;
  undefined4 local_8;
  
  if (1 < param_2 - param_1 >> 2) {
    puVar1 = (undefined4 *)(param_2 + -4);
    local_8 = *puVar1;
    FUN_00451c40(param_1,puVar1,puVar1,&local_8,param_3);
  }
  return;
}


/* ==== 00451940  FUN_00451940  size=235 ==== */

void FUN_00451940(int param_1,int param_2,int param_3,undefined1 param_4)

{
  int iVar1;
  
  iVar1 = param_3 - param_1 >> 2;
  if (iVar1 < 0x29) {
    FUN_00451c70(param_1,param_2,param_3,param_4);
  }
  else {
    iVar1 = iVar1 + 1 >> 3;
    FUN_00451c70(param_1,param_1 + iVar1 * 4,param_1 + iVar1 * 8,param_4);
    FUN_00451c70(param_2 + iVar1 * -4,param_2,param_2 + iVar1 * 4,param_4);
    FUN_00451c70(param_3 + iVar1 * -8,param_3 + iVar1 * -4,param_3,param_4);
    FUN_00451c70(param_1 + iVar1 * 4,param_2,param_3 + iVar1 * -4,param_4);
  }
  return;
}


/* ==== 00451a30  FUN_00451a30  size=63 ==== */

void FUN_00451a30(undefined4 param_1)

{
  undefined4 uVar1;
  int in_ECX;
  
  uVar1 = _Unfancy<>(*(undefined4 *)(in_ECX + 4),param_1);
  FUN_00451d00(*(undefined4 *)(in_ECX + 8),uVar1);
  *(int *)(in_ECX + 4) = *(int *)(in_ECX + 4) + 0x28;
  return;
}


/* ==== 00451a70  FUN_00451a70  size=47 ==== */

void FUN_00451a70(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_004013e0(0x18,param_2);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  return;
}


/* ==== 00451aa0  FUN_00451aa0  size=38 ==== */

void FUN_00451aa0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_004013e0(0x24,param_2);
  FUN_00451b50(param_3);
  return;
}


/* ==== 00451ad0  FUN_00451ad0  size=63 ==== */

void FUN_00451ad0(undefined4 param_1)

{
  undefined4 uVar1;
  int in_ECX;
  
  uVar1 = _Unfancy<>(*(undefined4 *)(in_ECX + 4),param_1);
  FUN_004515d0(*(undefined4 *)(in_ECX + 8),uVar1);
  *(int *)(in_ECX + 4) = *(int *)(in_ECX + 4) + 0x18;
  return;
}


/* ==== 00451b10  FUN_00451b10  size=54 ==== */

void FUN_00451b10(undefined4 param_1,undefined4 param_2)

{
  void *_Dst;
  
  _Dst = (void *)FUN_004013e0(4,param_2);
  _memset(_Dst,0,4);
  return;
}


/* ==== 00451b50  FUN_00451b50  size=103 ==== */

undefined4 FUN_00451b50(int param_1)

{
  undefined4 in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070ce0d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00405520(param_1);
  local_8 = 0;
  FUN_00406960(param_1 + 0x18);
  ExceptionList = local_10;
  return in_ECX;
}


/* ==== 00451bc0  FUN_00451bc0  size=113 ==== */

void FUN_00451bc0(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  char cVar1;
  int local_8;
  
  while (local_8 = param_2 + -1 >> 1, param_3 < param_2) {
    cVar1 = FUN_0043d0a0(*(undefined4 *)(param_1 + local_8 * 4),*param_4);
    if (cVar1 == '\0') break;
    *(undefined4 *)(param_1 + param_2 * 4) = *(undefined4 *)(param_1 + local_8 * 4);
    param_2 = local_8;
  }
  *(undefined4 *)(param_1 + param_2 * 4) = *param_4;
  return;
}


/* ==== 00451c40  FUN_00451c40  size=48 ==== */

void FUN_00451c40(undefined4 *param_1,int param_2,undefined4 *param_3,undefined4 param_4,
                 undefined1 param_5)

{
  *param_3 = *param_1;
  FUN_00451810(param_1,0,param_2 - (int)param_1 >> 2,param_4,param_5);
  return;
}


/* ==== 00451c70  FUN_00451c70  size=134 ==== */

void FUN_00451c70(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  char cVar1;
  
  cVar1 = FUN_0043d0a0(*param_2,*param_1);
  if (cVar1 != '\0') {
    FUN_00402490(param_2,param_1);
  }
  cVar1 = FUN_0043d0a0(*param_3,*param_2);
  if (cVar1 != '\0') {
    FUN_00402490(param_3,param_2);
    cVar1 = FUN_0043d0a0(*param_2,*param_1);
    if (cVar1 != '\0') {
      FUN_00402490(param_2,param_1);
    }
  }
  return;
}


/* ==== 00451d00  FUN_00451d00  size=38 ==== */

void FUN_00451d00(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_004013e0(0x28,param_2);
  FUN_00451d30(param_3);
  return;
}


/* ==== 00451d30  FUN_00451d30  size=59 ==== */

int FUN_00451d30(int param_1)

{
  int in_ECX;
  
  FUN_00405450(param_1);
  *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(param_1 + 0x18);
  FUN_00409b20(param_1 + 0x1c);
  return in_ECX;
}


/* ==== 00451d70  FUN_00451d70  size=30 ==== */

float10 FUN_00451d70(float param_1)

{
  double dVar1;
  
  dVar1 = (double)param_1;
  FUN_006f5d50();
  return (float10)(float)dVar1;
}


/* ==== 00451d90  FUN_00451d90  size=24 ==== */

void FUN_00451d90(undefined4 param_1)

{
  FUN_00451d70(param_1);
  return;
}


/* ==== 00451db0  FUN_00451db0  size=63 ==== */

undefined4 * FUN_00451db0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  return in_ECX;
}


/* ==== 00451df0  FUN_00451df0  size=170 ==== */

undefined4 * FUN_00451df0(void)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007107a0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0040a880(DAT_007c5940 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
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
  ExceptionList = local_10;
  return in_ECX;
}


/* ==== 00451ea0  FUN_00451ea0  size=20 ==== */

void FUN_00451ea0(void)

{
  FUN_0048adf0();
  return;
}


/* ==== 00451ec0  FUN_00451ec0  size=243 ==== */

undefined4 * FUN_00451ec0(void)

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
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  in_ECX[0xe] = 0;
  in_ECX[0xf] = 0;
  in_ECX[0x10] = 0;
  in_ECX[0x11] = 0;
  in_ECX[0x12] = 0;
  in_ECX[0x13] = 0;
  in_ECX[0x14] = 0;
  in_ECX[0x15] = 0;
  in_ECX[0x16] = 0;
  return in_ECX;
}


/* ==== 00451fc0  FUN_00451fc0  size=110 ==== */

void FUN_00451fc0(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x18) = param_1;
  *(undefined4 *)(in_ECX + 0x1c) = 0;
  *(undefined4 *)(in_ECX + 0x20) = 0;
  FUN_004053a0(&DAT_007793b1);
  FUN_0040d840(param_1);
  *(undefined4 *)(in_ECX + 0x54) = 0x3f800000;
  *(undefined1 *)(in_ECX + 0x50) = 0;
  FUN_004053a0(&DAT_007793b1);
  return;
}


/* ==== 00452030  FUN_00452030  size=165 ==== */

void FUN_00452030(void)

{
  int in_ECX;
  undefined4 in_stack_0000001c;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_007107d5;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  *(undefined4 *)(in_ECX + 0x18) = in_stack_0000001c;
  FUN_0040d840(&stack0x00000020);
  FUN_0040d840(&stack0x00000004);
  *(undefined4 *)(in_ECX + 0x54) = 0x3f800000;
  *(undefined1 *)(in_ECX + 0x50) = 0;
  FUN_004053a0(&DAT_007793b1);
  local_8 = local_8 & 0xffffff00;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)&stack0x00000004);
  local_8 = 0xffffffff;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)&stack0x00000020);
  ExceptionList = local_10;
  return;
}


/* ==== 004520e0  FUN_004520e0  size=183 ==== */

void FUN_004520e0(void)

{
  int in_ECX;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00710815;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  *(undefined4 *)(in_ECX + 0x18) = in_stack_0000001c;
  *(undefined4 *)(in_ECX + 0x1c) = in_stack_00000020;
  *(undefined4 *)(in_ECX + 0x20) = in_stack_00000024;
  FUN_0040d840(&stack0x00000028);
  FUN_0040d840(&stack0x00000004);
  *(undefined4 *)(in_ECX + 0x54) = 0x3f800000;
  *(undefined1 *)(in_ECX + 0x50) = 0;
  FUN_004053a0(&DAT_007793b1);
  local_8 = local_8 & 0xffffff00;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)&stack0x00000004);
  local_8 = 0xffffffff;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)&stack0x00000028);
  ExceptionList = local_10;
  return;
}


/* ==== 004521a0  FUN_004521a0  size=330 ==== */

void FUN_004521a0(void)

{
  undefined4 *in_ECX;
  
  in_ECX[0x15] = 0;
  in_ECX[0x16] = 0;
  in_ECX[0x17] = 0;
  in_ECX[0x18] = 0;
  in_ECX[0x19] = 0;
  in_ECX[0x1a] = 0;
  in_ECX[0x1b] = 0;
  in_ECX[0x1c] = 0;
  in_ECX[0x1d] = 0;
  in_ECX[0x1e] = 0;
  in_ECX[0x1f] = 0;
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
  in_ECX[0x11] = 0;
  in_ECX[0x12] = 0;
  in_ECX[0x13] = 0;
  in_ECX[0x14] = 0;
  return;
}


/* ==== 004522f0  FUN_004522f0  size=330 ==== */

void FUN_004522f0(void)

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
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  in_ECX[0xe] = 0;
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
  in_ECX[0x19] = 0;
  in_ECX[0x1b] = 0;
  in_ECX[0x1a] = 0;
  in_ECX[0x1c] = 0;
  in_ECX[0x1d] = 0;
  in_ECX[0x1e] = 0;
  in_ECX[0x1f] = 0;
  return;
}


/* ==== 00452440  FUN_00452440  size=146 ==== */

undefined4 * FUN_00452440(void)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00710850;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0040d8b0(DAT_007c5940 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  *in_ECX = 0;
  FUN_004053a0(&DAT_007793b1);
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  in_ECX[2] = 0;
  in_ECX[1] = 0;
  ExceptionList = local_10;
  return in_ECX;
}


/* ==== 004524e0  FUN_004524e0  size=126 ==== */

undefined4 * FUN_004524e0(void)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00710880;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0040d8b0(DAT_007c5940 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  FUN_004053a0(&DAT_007793b1);
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  *in_ECX = 0;
  ExceptionList = local_10;
  return in_ECX;
}


/* ==== 00452560  FUN_00452560  size=53 ==== */

undefined4 * FUN_00452560(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  return in_ECX;
}


/* ==== 004525a0  FUN_004525a0  size=112 ==== */

undefined4 * FUN_004525a0(void)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007108b0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0040a880(DAT_007c5940 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  *in_ECX = 0;
  in_ECX[1] = 0;
  FUN_0040a900();
  ExceptionList = local_10;
  return in_ECX;
}


/* ==== 00452610  FUN_00452610  size=385 ==== */

undefined4 * FUN_00452610(undefined4 *param_1)

{
  undefined4 *in_ECX;
  uint local_10;
  uint local_c;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  in_ECX[3] = param_1[3];
  in_ECX[4] = param_1[4];
  in_ECX[5] = param_1[5];
  in_ECX[6] = param_1[6];
  in_ECX[7] = param_1[7];
  in_ECX[8] = param_1[8];
  in_ECX[9] = param_1[9];
  in_ECX[10] = param_1[10];
  for (local_c = 0; local_c < 0x20; local_c = local_c + 1) {
    *(undefined1 *)((int)in_ECX + local_c + 0x2c) = *(undefined1 *)((int)param_1 + local_c + 0x2c);
  }
  for (local_10 = 0; local_10 < 0x14; local_10 = local_10 + 1) {
    *(undefined1 *)((int)in_ECX + local_10 + 0x4c) = *(undefined1 *)((int)param_1 + local_10 + 0x4c)
    ;
  }
  *(undefined1 *)(in_ECX + 0x18) = *(undefined1 *)(param_1 + 0x18);
  in_ECX[0x19] = param_1[0x19];
  in_ECX[0x1a] = param_1[0x1a];
  in_ECX[0x1b] = param_1[0x1b];
  in_ECX[0x1c] = param_1[0x1c];
  in_ECX[0x1d] = param_1[0x1d];
  in_ECX[0x1e] = param_1[0x1e];
  FUN_0048ae50(param_1 + 0x1f);
  FUN_0048ae50(param_1 + 0x21);
  FUN_0048ae50(param_1 + 0x23);
  return in_ECX;
}


/* ==== 004527a0  FUN_004527a0  size=398 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_004527a0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  char *pcVar4;
  uint local_34;
  function<void___cdecl(void)> local_2c [24];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007108dd;
  local_10 = ExceptionList;
  local_14 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  cVar1 = game_frame_should_continue(local_14);
  if (cVar1 == '\x01') {
    uVar2 = 1;
  }
  else {
    pcVar4 = "[all]";
    uVar2 = FUN_004274d0(0);
    cVar1 = FUN_00427c60(uVar2,pcVar4);
    if (cVar1 == '\0') {
      FUN_0040d8b0();
      local_8 = 0;
      if (param_1 == 0) {
        FUN_004053a0("[swordman]");
      }
      else if (param_1 == 1) {
        FUN_004053a0("[fighter]");
      }
      else if (param_1 == 2) {
        FUN_004053a0("[gunner]");
      }
      else if (param_1 == 3) {
        FUN_004053a0("[mage]");
      }
      else if (param_1 == 4) {
        FUN_004053a0("[priest]");
      }
      for (local_34 = 0; uVar3 = FUN_004274f0(), local_34 < uVar3; local_34 = local_34 + 1) {
        uVar2 = FUN_004274d0(local_34);
        cVar1 = destroy<>(local_2c,uVar2);
        if (cVar1 != '\0') {
          local_8 = 0xffffffff;
          std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_2c);
          ExceptionList = local_10;
          return 1;
        }
      }
      local_8 = 0xffffffff;
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_2c);
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  ExceptionList = local_10;
  return uVar2;
}


/* ==== 00452930  FUN_00452930  size=20 ==== */

void FUN_00452930(void)

{
  FUN_00452950();
  return;
}


/* ==== 00452950  FUN_00452950  size=34 ==== */

void FUN_00452950(void)

{
  FUN_00489ca0();
  FUN_00489ce0();
  return;
}


/* ==== 00452980  FUN_00452980  size=94 ==== */

undefined4 FUN_00452980(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined1 local_c [4];
  undefined1 local_8 [4];
  
  cVar1 = FUN_00489cc0();
  if (cVar1 == '\0') {
    uVar2 = FUN_0040d380(local_8);
    FUN_0048c970(local_c,&stack0x00000004);
    cVar1 = FUN_0040d2d0(uVar2);
    if (cVar1 != '\0') {
      puVar3 = (undefined4 *)FUN_00489c40(&stack0x00000004);
      return *puVar3;
    }
  }
  return 0;
}


/* ==== 004529e0  FUN_004529e0  size=4738 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_004529e0(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 *puVar12;
  undefined4 uVar13;
  undefined1 local_10c [4];
  undefined1 local_108 [7];
  undefined4 local_101;
  undefined4 local_fd;
  undefined4 local_f9;
  undefined4 local_f5;
  undefined1 local_f1;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined1 local_d8 [4];
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined1 local_c8 [4];
  undefined4 local_c4;
  undefined1 local_c0 [4];
  int local_bc;
  int local_b8;
  int local_b4;
  undefined1 local_b0 [4];
  undefined1 local_ac [4];
  undefined1 local_a8 [4];
  undefined4 local_a4;
  int local_a0;
  int local_9c;
  uint local_8;
  
  local_8 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  FUN_0062eb80();
  *(undefined1 *)(local_9c + 0xe05) = 0;
  *(undefined4 *)(local_9c + 0xda8) = 0;
  *(undefined4 *)(local_9c + 0xddc) = 0;
  FUN_0040d540();
  *(undefined4 *)(local_9c + 0xd78) = 0;
  FUN_0040d5f0();
  *(undefined4 *)(local_9c + 0xd88) = 0;
  FUN_0040d5f0();
  *(undefined4 *)(local_9c + 0xd98) = 0;
  FUN_00489f80();
  *(undefined4 *)(local_9c + 0xe44) = 0;
  *(undefined4 *)(local_9c + 0xe50) = 0;
  local_b4 = local_9c + 0xe48;
  FUN_0042a9e0(local_a8);
  FUN_0042a9c0(local_c0);
  while (cVar1 = FUN_0040d2d0(local_c0), cVar1 != '\0') {
    uVar2 = FUN_0042a580();
    local_c4 = uVar2;
    FUN_004d1b30(uVar2);
    FUN_00517bc0(uVar2);
    FUN_0042a560();
  }
  FUN_0044e040();
  local_b8 = local_9c + 0xe54;
  FUN_0042a9e0(local_ac);
  FUN_0042a9c0(local_c8);
  while (cVar1 = FUN_0040d2d0(local_c8), cVar1 != '\0') {
    uVar2 = FUN_0042a580();
    local_cc = uVar2;
    FUN_004d1b30(uVar2);
    FUN_00517bc0(uVar2);
    FUN_0042a560();
  }
  FUN_0044e040();
  puVar3 = (undefined4 *)FUN_00451ec0();
  puVar6 = (undefined4 *)(local_9c + 0xd14);
  for (iVar5 = 0x17; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar6 = puVar6 + 1;
  }
  local_101 = 0;
  local_fd = 0;
  local_f9 = 0;
  local_f5 = 0;
  local_f1 = 0;
  puVar3 = (undefined4 *)FUN_00453c70();
  *(undefined4 *)(local_9c + 0xdeb) = *puVar3;
  *(undefined4 *)(local_9c + 0xdef) = puVar3[1];
  *(undefined4 *)(local_9c + 0xdf3) = puVar3[2];
  *(undefined4 *)(local_9c + 0xdf7) = puVar3[3];
  *(undefined1 *)(local_9c + 0xdfb) = *(undefined1 *)(puVar3 + 4);
  CDocObjectServer::ReleaseDocSite((CDocObjectServer *)(local_9c + 0xc84));
  local_d0 = FUN_0040b110();
  FUN_00453d00(local_d0);
  FUN_0040c940();
  iVar5 = local_9c + 0xc80;
  FUN_004d1b30(iVar5);
  FUN_00517ee0(iVar5);
  iVar5 = local_9c + 0xc7c;
  FUN_004d1b30(iVar5);
  FUN_00517ee0(iVar5);
  piVar4 = (int *)game_get_state_ptr_d1520();
  if (*piVar4 != 0) {
    game_get_state_ptr_d1520();
    piVar4 = (int *)FUN_004d58e0();
    if (*piVar4 != 0) {
      puVar3 = &local_a4;
      game_get_state_ptr_d1520(puVar3);
      FUN_004d58e0();
      FUN_0044e0f0(puVar3);
      while( true ) {
        puVar12 = local_108;
        game_get_state_ptr_d1520(puVar12);
        FUN_004d58e0();
        uVar2 = FUN_0040d9a0(puVar12);
        cVar1 = FUN_0040d2d0(uVar2);
        if (cVar1 == '\0') break;
        piVar4 = (int *)FUN_0042a580();
        if ((*piVar4 == *(int *)(local_9c + 0xd74)) ||
           (piVar4 = (int *)FUN_0042a580(), *piVar4 == *(int *)(local_9c + 0xd70))) {
          uVar13 = 0;
          uVar11 = 0xffffffff;
          uVar10 = 0xffffffff;
          uVar9 = 0xffffffff;
          uVar8 = 3;
          uVar7 = 0xffffffff;
          puVar3 = (undefined4 *)FUN_0042a580(0xffffffff,3,0xffffffff,0xffffffff,0xffffffff,0);
          uVar2 = *puVar3;
          FUN_004e50c0(uVar2);
          FUN_004e5240(uVar2,uVar7,uVar8,uVar9,uVar10,uVar11,uVar13);
          local_d4 = local_a4;
          puVar12 = local_10c;
          uVar2 = local_a4;
          game_get_state_ptr_d1520(puVar12,local_a4);
          FUN_004d58e0();
          puVar3 = (undefined4 *)FUN_0044e0a0(puVar12,uVar2);
          local_a4 = *puVar3;
        }
        else {
          FUN_0042a560();
        }
      }
    }
  }
  iVar5 = local_9c + 0xd74;
  FUN_004d1b30(iVar5);
  FUN_00517ce0(iVar5);
  iVar5 = local_9c + 0xd70;
  FUN_004d1b30(iVar5);
  FUN_00517ce0(iVar5);
  local_bc = local_9c + 0xa04;
  FUN_0042a9e0(local_b0);
  FUN_0042a9c0(local_d8);
  while (cVar1 = FUN_0040d2d0(local_d8), cVar1 != '\0') {
    uVar2 = FUN_0042a580();
    local_dc = uVar2;
    FUN_004d1b30(uVar2);
    FUN_00517ee0(uVar2);
    FUN_0042a560();
  }
  FUN_0044e040();
  *(undefined1 *)(local_9c + 0xdfc) = 0;
  *(undefined4 *)(local_9c + 0xe00) = 1;
  *(undefined4 *)(local_9c + 0xe09) = 0;
  *(undefined4 *)(local_9c + 0xe0d) = 0;
  *(undefined4 *)(local_9c + 0xe11) = 0;
  *(undefined4 *)(local_9c + 0xe15) = 0;
  *(undefined4 *)(local_9c + 0xe19) = 0;
  *(undefined4 *)(local_9c + 0xe1d) = 0;
  *(undefined4 *)(local_9c + 0xe21) = 0;
  *(undefined4 *)(local_9c + 0xe25) = 0;
  FUN_0040d5f0();
  FUN_0048aa60();
  FUN_0048a940();
  FUN_0048a940();
  FUN_0048a820();
  FUN_0040d5f0();
  FUN_0048a620();
  FUN_0048a620();
  FUN_0048a530();
  FUN_0044e040();
  FUN_0048a3a0();
  FUN_0048a2b0();
  FUN_0040d770();
  FUN_0048a160();
  FUN_0048a160();
  FUN_0048a160();
  *(undefined4 *)(local_9c + 0x930) = 0;
  *(undefined4 *)(local_9c + 0x934) = 0;
  *(undefined4 *)(local_9c + 0x1c) = 0;
  *(undefined1 *)(local_9c + 0x994) = 0;
  *(undefined4 *)(local_9c + 0x998) = 0x9c;
  *(undefined4 *)(local_9c + 0x99c) = 0;
  *(undefined4 *)(local_9c + 0x9a0) = 0;
  *(undefined4 *)(local_9c + 0x9a4) = 0;
  *(undefined4 *)(local_9c + 0xa14) = 0;
  *(undefined4 *)(local_9c + 0xa18) = 0;
  *(undefined4 *)(local_9c + 0xa1c) = 0;
  *(undefined4 *)(local_9c + 0xa20) = 0;
  for (local_a0 = 0; local_a0 < 5; local_a0 = local_a0 + 1) {
    *(undefined4 *)(local_9c + 0xa28 + local_a0 * 0x14) = 0;
    *(undefined4 *)(local_9c + 0xa2c + local_a0 * 0x14) = 0;
    *(int *)(local_9c + 0xa30 + local_a0 * 0x14) = local_a0 * 72000;
    *(undefined4 *)(local_9c + 0xa34 + local_a0 * 0x14) = 0;
    *(undefined4 *)(local_9c + 0xa38 + local_a0 * 0x14) = 0;
  }
  *(undefined4 *)(local_9c + 0x9fc) = 0;
  *(undefined4 *)(local_9c + 0xa00) = 0;
  *(undefined1 *)(local_9c + 0xa8c) = 0;
  *(undefined1 *)(local_9c + 0xa8d) = 0;
  *(undefined1 *)(local_9c + 0xa8e) = 0;
  *(undefined1 *)(local_9c + 0xa8f) = 0;
  *(undefined4 *)(local_9c + 0xa90) = 0;
  *(undefined4 *)(local_9c + 0xa24) = 0;
  *(undefined4 *)(local_9c + 0x204) = 0;
  *(undefined4 *)(local_9c + 0x200) = 0;
  *(undefined4 *)(local_9c + 0x1a4) = 1;
  *(undefined4 *)(local_9c + 0x8fc) = 2;
  *(undefined4 *)(local_9c + 0x900) = 3;
  *(undefined4 *)(local_9c + 0x904) = 2;
  *(undefined4 *)(local_9c + 0x908) = 3;
  *(undefined4 *)(local_9c + 0x90c) = 5;
  *(undefined4 *)(local_9c + 0xac4) = 0;
  *(undefined4 *)(local_9c + 0xac8) = 0;
  *(undefined4 *)(local_9c + 0xad0) = 0;
  *(undefined4 *)(local_9c + 0xad4) = 0;
  *(undefined4 *)(local_9c + 0xad8) = 0;
  *(undefined4 *)(local_9c + 0xde4) = 0;
  *(undefined4 *)(local_9c + 0xacc) = 0;
  *(undefined4 *)(local_9c + 0xac0) = 0;
  *(undefined4 *)(local_9c + 0xabc) = 0;
  *(undefined4 *)(local_9c + 0xab8) = 0;
  *(undefined4 *)(local_9c + 0xa94) = 0;
  *(undefined4 *)(local_9c + 0xac4) = 0;
  *(undefined4 *)(local_9c + 0xad0) = 0;
  *(undefined4 *)(local_9c + 0xadc) = 1;
  *(undefined4 *)(local_9c + 0xae0) = 1;
  *(undefined4 *)(local_9c + 0xae4) = 8;
  FUN_0040d540();
  FUN_0040d5a0(*(undefined4 *)(local_9c + 0xae4));
  *(undefined4 *)(local_9c + 0xaf4) = 6;
  FUN_0040d540();
  FUN_0040d5a0(*(undefined4 *)(local_9c + 0xaf4));
  *(undefined4 *)(local_9c + 0xb04) = 0x20;
  FUN_0040d540();
  FUN_0040d5a0(*(undefined4 *)(local_9c + 0xb04));
  *(undefined4 *)(local_9c + 0xb14) = 0x20;
  FUN_0040d540();
  FUN_0040d5a0(*(undefined4 *)(local_9c + 0xb14));
  *(undefined4 *)(local_9c + 0xb24) = 0x20;
  FUN_0040d540();
  FUN_0040d5a0(*(undefined4 *)(local_9c + 0xb24));
  *(undefined4 *)(local_9c + 0xb34) = 0x31;
  FUN_0040d540();
  FUN_0040d5a0(*(undefined4 *)(local_9c + 0xb34));
  *(undefined4 *)(local_9c + 0xb44) = 0x20;
  FUN_0040d540();
  FUN_0040d5a0(*(undefined4 *)(local_9c + 0xb44));
  *(undefined4 *)(local_9c + 0xb54) = 10;
  FUN_0040d540();
  FUN_0040d5a0(*(undefined4 *)(local_9c + 0xb54));
  *(undefined4 *)(local_9c + 0xb64) = 0x69;
  FUN_0040d540();
  FUN_0040d5a0(*(undefined4 *)(local_9c + 0xb64));
  *(undefined4 *)(local_9c + 0xb74) = 9;
  FUN_0040d540();
  FUN_0040d5a0(*(undefined4 *)(local_9c + 0xb74));
  *(undefined4 *)(local_9c + 0xb84) = 0x31;
  FUN_0040d540();
  FUN_0040d5a0(*(undefined4 *)(local_9c + 0xb84));
  *(undefined4 *)(local_9c + 0xb94) = 1;
  FUN_0040d540();
  FUN_0040d5a0(*(undefined4 *)(local_9c + 0xb94));
  *(undefined4 *)(local_9c + 0xba4) = 0x31;
  FUN_0040d540();
  FUN_0040d5a0(*(undefined4 *)(local_9c + 0xba4));
  *(undefined4 *)(local_9c + 0xbb4) = 3;
  FUN_0040d540();
  FUN_0040d5a0(*(undefined4 *)(local_9c + 0xbb4));
  *(undefined4 *)(local_9c + 0xbc4) = 0;
  FUN_0048a0c0();
  *(undefined4 *)(local_9c + 0xbd4) = 1;
  FUN_0048a0c0();
  FUN_0048a120(*(undefined4 *)(local_9c + 0xbd4));
  *(undefined4 *)(local_9c + 0xbf0) = 0;
  FUN_0048a0c0();
  *(undefined4 *)(local_9c + 0xc00) = 0x2a;
  *(undefined4 *)(local_9c + 0xc04) = 0x2a;
  *(undefined4 *)(local_9c + 0xc08) = 0x2a;
  *(undefined4 *)(local_9c + 0xc0c) = 0x2a;
  *(undefined4 *)(local_9c + 0xc10) = 0x2a;
  FUN_0048a020();
  local_e0 = 0;
  uVar2 = *(undefined4 *)(local_9c + 0xc00);
  FUN_0040d330(&local_e0);
  FUN_0040d5a0(uVar2);
  local_e4 = 1;
  uVar2 = *(undefined4 *)(local_9c + 0xc04);
  FUN_0040d330(&local_e4);
  FUN_0040d5a0(uVar2);
  local_e8 = 2;
  uVar2 = *(undefined4 *)(local_9c + 0xc08);
  FUN_0040d330(&local_e8);
  FUN_0040d5a0(uVar2);
  local_ec = 3;
  uVar2 = *(undefined4 *)(local_9c + 0xc0c);
  FUN_0040d330(&local_ec);
  FUN_0040d5a0(uVar2);
  local_f0 = 4;
  uVar2 = *(undefined4 *)(local_9c + 0xc10);
  FUN_0040d330(&local_f0);
  FUN_0040d5a0(uVar2);
  *(undefined4 *)(local_9c + 0xc1c) = 6;
  FUN_0040d540();
  FUN_0040d5a0(*(undefined4 *)(local_9c + 0xc1c));
  *(undefined4 *)(local_9c + 0xc2c) = 0;
  FUN_0040d540();
  *(undefined4 *)(local_9c + 0xc3c) = 0;
  FUN_0040d540();
  *(undefined4 *)(local_9c + 0xc4c) = 2;
  FUN_0040d540();
  FUN_0040d5a0(*(undefined4 *)(local_9c + 0xc4c));
  iVar5 = FUN_00405270(1);
  *(undefined4 *)(iVar5 + 8) = *(undefined4 *)(local_9c + 0xac8);
  *(undefined4 *)(local_9c + 0xc5c) = 0x18;
  FUN_0040d540();
  FUN_0040d5a0(*(undefined4 *)(local_9c + 0xc5c));
  *(undefined4 *)(local_9c + 0xc6c) = 0xe;
  FUN_0040d540();
  FUN_0040d5a0(*(undefined4 *)(local_9c + 0xc6c));
  *(undefined4 *)(local_9c + 0xe2c) = 0;
  *(undefined4 *)(local_9c + 0xe30) = 0;
  FUN_0040d5f0();
  FUN_0048ab00(*(undefined4 *)(local_9c + 0xe30));
  *(undefined4 *)(local_9c + 0x224) = 0x1da;
  *(undefined4 *)(local_9c + 0x228) = 0xea;
  *(undefined4 *)(local_9c + 0xa98) = 0;
  *(undefined4 *)(local_9c + 0xa9c) = 0;
  *(undefined4 *)(local_9c + 0xaa0) = 0;
  *(undefined4 *)(local_9c + 0xaa4) = 0;
  *(undefined4 *)(local_9c + 0xaa8) = 0;
  *(undefined4 *)(local_9c + 0xaac) = 0;
  *(undefined4 *)(local_9c + 0xab0) = 0;
  *(undefined4 *)(local_9c + 0xab4) = 0;
  *(undefined1 *)(local_9c + 0xdb8) = 0;
  *(undefined1 *)(local_9c + 0xdb9) = 0;
  *(undefined4 *)(local_9c + 0xdbc) = 0;
  *(undefined4 *)(local_9c + 0xdc0) = 0xffffffff;
  *(undefined4 *)(local_9c + 0xdc4) = 1;
  *(undefined4 *)(local_9c + 0xdc8) = 0;
  *(undefined4 *)(local_9c + 0xdcc) = 0;
  *(undefined4 *)(local_9c + 0xdd0) = 0;
  *(undefined4 *)(local_9c + 0xdd4) = 0;
  *(undefined4 *)(local_9c + 0xdd8) = 0;
  *(undefined4 *)(local_9c + 0xde0) = 0;
  *(undefined4 *)(local_9c + 0xadc) = 1;
  *(undefined4 *)(local_9c + 0xae0) = 1;
  *(undefined1 *)(local_9c + 0xde8) = 0;
  *(undefined1 *)(local_9c + 0xde9) = 0;
  *(undefined1 *)(local_9c + 0xdea) = 0;
  *(undefined1 *)(local_9c + 0xe04) = 1;
  *(undefined1 *)(local_9c + 0xe06) = 0;
  *(undefined1 *)(local_9c + 0xe07) = 0;
  *(undefined1 *)(local_9c + 0xe08) = 0;
  *(undefined4 *)(local_9c + 0xa10) = 0;
  *(undefined4 *)(local_9c + 0xa0c) = 0;
  *(undefined4 *)(local_9c + 0x9b0) = 0;
  *(undefined4 *)(local_9c + 0x9b4) = 0;
  *(undefined1 *)(local_9c + 0xe40) = 0;
  *(undefined1 *)(local_9c + 0xe41) = 0;
  *(undefined1 *)(local_9c + 0xe42) = 0;
  return;
}


/* ==== 00453c70  FUN_00453c70  size=132 ==== */

undefined1 * FUN_00453c70(void)

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
  return in_ECX;
}


/* ==== 00453d00  FUN_00453d00  size=327 ==== */

undefined1 * FUN_00453d00(undefined1 *param_1)

{
  undefined1 *in_ECX;
  
  *in_ECX = *param_1;
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
  FUN_004053e0(param_1 + 0x10);
  *(undefined4 *)(in_ECX + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(in_ECX + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(in_ECX + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(in_ECX + 0x38) = *(undefined4 *)(param_1 + 0x38);
  in_ECX[0x3c] = param_1[0x3c];
  *(undefined4 *)(in_ECX + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(in_ECX + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(in_ECX + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(in_ECX + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(in_ECX + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(in_ECX + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(in_ECX + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(in_ECX + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  FUN_0048af40(param_1 + 0x60);
  *(undefined4 *)(in_ECX + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  in_ECX[0x70] = param_1[0x70];
  FUN_004053e0(param_1 + 0x74);
  *(undefined4 *)(in_ECX + 0x8c) = *(undefined4 *)(param_1 + 0x8c);
  return in_ECX;
}


/* ==== 00453e50  FUN_00453e50  size=1577 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 * FUN_00453e50(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *in_ECX;
  int iVar3;
  undefined4 *puVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00710c72;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0062ecd0(DAT_007c5940 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  *in_ECX = CHARACTER::vftable;
  FUN_00401970();
  local_8._0_1_ = 1;
  FUN_0048aa10();
  local_8._0_1_ = 2;
  FUN_0048a920();
  local_8._0_1_ = 3;
  FUN_0048a920();
  local_8._0_1_ = 4;
  FUN_0048a800();
  local_8._0_1_ = 5;
  FUN_00489bc0();
  local_8._0_1_ = 6;
  FUN_00489bc0();
  local_8._0_1_ = 7;
  FUN_0048a600();
  local_8._0_1_ = 8;
  FUN_0048a600();
  local_8._0_1_ = 9;
  FUN_0048a510();
  local_8._0_1_ = 10;
  FUN_00489f50();
  local_8._0_1_ = 0xb;
  FUN_00489bc0();
  local_8._0_1_ = 0xc;
  FUN_0048a280();
  local_8._0_1_ = 0xd;
  FUN_0048a220();
  local_8._0_1_ = 0xe;
  FUN_0048a220();
  local_8._0_1_ = 0xf;
  FUN_0048a220();
  local_8._0_1_ = 0x10;
  FUN_00489f50();
  local_8._0_1_ = 0x11;
  FUN_004039e0(in_ECX + 0x28a,0x14,5,FUN_00451db0);
  FUN_0040d650();
  local_8._0_1_ = 0x12;
  FUN_0040d650();
  local_8._0_1_ = 0x13;
  FUN_0040d650();
  local_8._0_1_ = 0x14;
  FUN_0040d650();
  local_8._0_1_ = 0x15;
  FUN_0040d650();
  local_8._0_1_ = 0x16;
  FUN_0040d650();
  local_8._0_1_ = 0x17;
  FUN_0040d650();
  local_8._0_1_ = 0x18;
  FUN_0040d650();
  local_8._0_1_ = 0x19;
  FUN_0040d650();
  local_8._0_1_ = 0x1a;
  FUN_0040d650();
  local_8._0_1_ = 0x1b;
  FUN_0040d650();
  local_8._0_1_ = 0x1c;
  FUN_0040d650();
  local_8._0_1_ = 0x1d;
  FUN_0040d650();
  local_8._0_1_ = 0x1e;
  FUN_0040d650();
  local_8._0_1_ = 0x1f;
  FUN_00489bc0();
  local_8._0_1_ = 0x20;
  FUN_00489bc0();
  local_8._0_1_ = 0x21;
  FUN_0040d650();
  local_8._0_1_ = 0x22;
  FUN_00489bc0();
  local_8._0_1_ = 0x23;
  FUN_0048a000();
  local_8._0_1_ = 0x24;
  FUN_0040d650();
  local_8._0_1_ = 0x25;
  FUN_0040d650();
  local_8._0_1_ = 0x26;
  FUN_0040d650();
  local_8._0_1_ = 0x27;
  FUN_0040d650();
  local_8._0_1_ = 0x28;
  FUN_0040d650();
  local_8._0_1_ = 0x29;
  FUN_0040d650();
  local_8._0_1_ = 0x2a;
  FUN_0040b110();
  local_8._0_1_ = 0x2b;
  FUN_00451ec0();
  FUN_00489bc0();
  local_8._0_1_ = 0x2c;
  FUN_0040d650();
  local_8._0_1_ = 0x2d;
  FUN_00489bc0();
  local_8._0_1_ = 0x2e;
  FUN_0040d650();
  local_8._0_1_ = 0x2f;
  in_ECX[0x376] = 0;
  *(undefined1 *)((int)in_ECX + 0xde9) = 0;
  *(undefined1 *)((int)in_ECX + 0xdea) = 0;
  FUN_00453c70();
  *(undefined1 *)(in_ECX + 0x37f) = 0;
  in_ECX[0x380] = 1;
  *(undefined1 *)(in_ECX + 0x381) = 1;
  in_ECX[0x38c] = 0;
  FUN_00489bc0();
  local_8._0_1_ = 0x30;
  FUN_00489f50();
  local_8._0_1_ = 0x31;
  FUN_00489f50();
  local_8 = CONCAT31(local_8._1_3_,0x32);
  puVar1 = (undefined4 *)FUN_00451ec0();
  puVar4 = in_ECX + 0x345;
  for (iVar3 = 0x17; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar1 = (undefined4 *)FUN_00453c70();
  *(undefined4 *)((int)in_ECX + 0xdeb) = *puVar1;
  *(undefined4 *)((int)in_ECX + 0xdef) = puVar1[1];
  *(undefined4 *)((int)in_ECX + 0xdf3) = puVar1[2];
  *(undefined4 *)((int)in_ECX + 0xdf7) = puVar1[3];
  *(undefined1 *)((int)in_ECX + 0xdfb) = *(undefined1 *)(puVar1 + 4);
  uVar2 = FUN_0040b110();
  FUN_00453d00(uVar2);
  FUN_0040c940();
  in_ECX[800] = 0;
  in_ECX[799] = 0;
  in_ECX[0x35d] = 0;
  in_ECX[0x35c] = 0;
  FUN_004529e0();
  ExceptionList = local_10;
  return in_ECX;
}


/* ==== 00454480  FUN_00454480  size=34 ==== */

void FUN_00454480(void)

{
  FUN_00401ac0();
  FUN_0042f960();
  return;
}


/* ==== 004544b0  FUN_004544b0  size=20 ==== */

void FUN_004544b0(void)

{
  FUN_0048aad0();
  return;
}


/* ==== 004544d0  FUN_004544d0  size=20 ==== */

void FUN_004544d0(void)

{
  FUN_0048a9b0();
  return;
}


/* ==== 004544f0  FUN_004544f0  size=20 ==== */

void FUN_004544f0(void)

{
  FUN_0048a8c0();
  return;
}


/* ==== 00454510  FUN_00454510  size=20 ==== */

void FUN_00454510(void)

{
  FUN_0048a690();
  return;
}


/* ==== 00454530  FUN_00454530  size=20 ==== */

void FUN_00454530(void)

{
  FUN_0048a5a0();
  return;
}


/* ==== 00454550  FUN_00454550  size=20 ==== */

void FUN_00454550(void)

{
  FUN_00454590();
  return;
}


/* ==== 00454570  FUN_00454570  size=20 ==== */

void FUN_00454570(void)

{
  FUN_0048a090();
  return;
}


/* ==== 00454590  FUN_00454590  size=34 ==== */

void FUN_00454590(void)

{
  FUN_00489ca0();
  FUN_0048a380();
  return;
}


/* ==== 004545c0  FUN_004545c0  size=42 ==== */

void FUN_004545c0(void)

{
  int *in_ECX;
  
  if (in_ECX[0x85] == 1) {
    (**(code **)(*in_ECX + 0x84))(2);
  }
  return;
}


/* ==== 00454c90  FUN_00454c90  size=111 ==== */

void FUN_00454c90(void)

{
  int iVar1;
  int *piVar2;
  int in_ECX;
  
  iVar1 = game_get_player_or_session_blob();
  if ((in_ECX == iVar1) && (*(char *)(in_ECX + 0xdb8) != '\0')) {
    iVar1 = game_get_player_or_session_blob(1);
    piVar2 = (int *)FUN_004d1b20(*(undefined4 *)(iVar1 + 0x1e8));
    net_packet_send_375xx(0x9286,*(undefined4 *)(*piVar2 + 0xc));
  }
  FUN_004545f0();
  *(undefined1 *)(in_ECX + 0x96) = 1;
  FUN_00486660(0);
  *(undefined1 *)(in_ECX + 0x96) = 0;
  return;
}


/* ==== 00454d00  FUN_00454d00  size=103 ==== */

void FUN_00454d00(void)

{
  int iVar1;
  int *piVar2;
  int in_ECX;
  
  iVar1 = game_get_player_or_session_blob();
  if ((in_ECX == iVar1) && (*(char *)(in_ECX + 0xdb8) != '\0')) {
    iVar1 = game_get_player_or_session_blob(0xffffffff);
    piVar2 = (int *)FUN_004d1b20(*(undefined4 *)(iVar1 + 0x1e8));
    net_packet_send_375xx(0x9286,*(undefined4 *)(*piVar2 + 0xc));
  }
  *(undefined1 *)(in_ECX + 0x97) = 1;
  FUN_00486660(0);
  *(undefined1 *)(in_ECX + 0x97) = 0;
  return;
}


/* ==== 00454d70  FUN_00454d70  size=210 ==== */

void FUN_00454d70(int param_1)

{
  int *piVar1;
  int in_ECX;
  
  if ((*(int *)(in_ECX + 0x214) == 2) &&
     (*(int *)(in_ECX + 0x20) = *(int *)(in_ECX + 0x20) + param_1, 0x63f < *(int *)(in_ECX + 0x20)))
  {
    *(undefined4 *)(in_ECX + 0x214) = 3;
    *(undefined4 *)(in_ECX + 0x20) = 0;
  }
  if ((((*(int *)(in_ECX + 0x214) == 3) && (*(char *)(in_ECX + 0xe05) == '\0')) &&
      (*(char *)(in_ECX + 0xdb8) == '\0')) && (*(int *)(in_ECX + 0xdd8) == 4)) {
    piVar1 = (int *)game_get_state_ptr_d1520();
    if ((*(char *)(*piVar1 + 0x9d4) == '\0') &&
       (*(int *)(in_ECX + 0x20) = *(int *)(in_ECX + 0x20) + param_1, 9999 < *(int *)(in_ECX + 0x20))
       ) {
      *(undefined4 *)(in_ECX + 0x20) = 0;
      *(undefined4 *)(in_ECX + 0x214) = 0;
      ui_command_dispatch(3000,0);
    }
  }
  return;
}


/* ==== 00454e50  FUN_00454e50  size=56 ==== */

void FUN_00454e50(int param_1)

{
  int in_ECX;
  
  if ((*(int *)(in_ECX + 0x1c) != -1) &&
     (*(int *)(in_ECX + 0x1c) = *(int *)(in_ECX + 0x1c) - param_1, *(int *)(in_ECX + 0x1c) < 1)) {
    *(undefined4 *)(in_ECX + 0x1c) = 0;
  }
  return;
}


/* ==== 00454e90  FUN_00454e90  size=10 ==== */

undefined * FUN_00454e90(void)

{
  return &DAT_007c63f4;
}


/* ==== 00454ee0  FUN_00454ee0  size=10 ==== */

undefined * FUN_00454ee0(void)

{
  return &DAT_007ca66c;
}


/* ==== 00454ef0  FUN_00454ef0  size=10 ==== */

undefined * FUN_00454ef0(void)

{
  return &DAT_007ca68c;
}


/* ==== 00454f00  FUN_00454f00  size=371 ==== */

void FUN_00454f00(void)

{
  int iVar1;
  undefined4 uVar2;
  int *in_ECX;
  int iVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  if ((char)in_ECX[0x381] != '\0') {
    if ((char)in_ECX[6] == '\0') {
      uVar8 = 1;
      iVar1 = (in_ECX[0x8a] - DAT_007ca768) - in_ECX[0x8b];
      iVar3 = in_ECX[0x89] - DAT_007ca764;
      uVar2 = (**(code **)(*in_ECX + 0x60))(iVar3,iVar1,1);
      uVar7 = 3;
      uVar6 = 7;
      FUN_004e50c0(in_ECX,7,3,uVar2);
      FUN_004e5240(in_ECX,uVar6,uVar7,uVar2,iVar3,iVar1,uVar8);
    }
    else {
      fVar4 = (float)in_ECX[1] / (float)in_ECX[2];
      fVar5 = ((float)in_ECX[2] - (float)in_ECX[1]) / (float)in_ECX[2];
      uVar8 = 1;
      iVar1 = ((int)((float)in_ECX[4] * fVar4 + (float)in_ECX[0x8a] * fVar5) - DAT_007ca768) -
              (int)((float)in_ECX[5] * fVar4 + (float)in_ECX[0x8b] * fVar5);
      iVar3 = (int)((float)in_ECX[3] * fVar4 + (float)in_ECX[0x89] * fVar5) - DAT_007ca764;
      uVar2 = (**(code **)(*in_ECX + 0x60))(iVar3,iVar1,1);
      uVar7 = 3;
      uVar6 = 7;
      FUN_004e50c0(in_ECX,7,3,uVar2);
      FUN_004e5240(in_ECX,uVar6,uVar7,uVar2,iVar3,iVar1,uVar8);
    }
  }
  return;
}


/* ==== 00455080  FUN_00455080  size=79 ==== */

void FUN_00455080(void)

{
  int iVar1;
  int in_ECX;
  
  FUN_0063f7d0();
  iVar1 = game_get_player_or_session_blob();
  if (in_ECX == iVar1) {
    FUN_00667300(0);
  }
  *(undefined4 *)(in_ECX + 0x9b0) = 0;
  *(undefined4 *)(in_ECX + 0x8f8) = 0;
  *(undefined4 *)(in_ECX + 0x8f4) = 0;
  return;
}


/* ==== 004550d0  FUN_004550d0  size=99 ==== */

int FUN_004550d0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_8;
  
  local_8 = 0;
  if (*(int *)(param_1 + 0x204) == 0) {
    local_8 = param_1;
  }
  else if (*(int *)(param_1 + 0x204) == 200) {
    uVar2 = *(undefined4 *)(param_1 + 0x95c);
    game_get_state_ptr_d1520(uVar2);
    FUN_004d58e0();
    iVar1 = FUN_0042e150(uVar2);
    if (iVar1 != 0) {
      local_8 = iVar1;
    }
  }
  return local_8;
}


/* ==== 00455140  FUN_00455140  size=35 ==== */

undefined4 FUN_00455140(int param_1)

{
  undefined4 uVar1;
  
  if ((*(int *)(param_1 + 0xab8) == 0) && (*(int *)(param_1 + 0xac0) == 1)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


/* ==== 00456cf0  FUN_00456cf0  size=23 ==== */

void FUN_00456cf0(void)

{
  FUN_004039a0();
  return;
}


