/* Auto-decompiled pseudo-code from game.exe / crt_library */
/* NOT original source. Bucketed by evidence (strings/imports/call-graph), not raw address. */

/* ==== 00401fe0  _String_iterator<>  size=33 ==== */

/* Library Function - Multiple Matches With Same Base Name
    public: __thiscall std::_String_iterator<char,struct std::char_traits<char>,class
   std::allocator<char> >::_String_iterator<char,struct std::char_traits<char>,class
   std::allocator<char> >(char *,struct std::_Container_base0 const *)
    public: __thiscall std::_String_iterator<unsigned short,struct std::char_traits<unsigned
   short>,class std::allocator<unsigned short> >::_String_iterator<unsigned short,struct
   std::char_traits<unsigned short>,class std::allocator<unsigned short> >(unsigned short *,struct
   std::_Container_base0 const *)
    public: __thiscall std::_String_iterator<class std::_String_val<struct std::_Simple_types<char>
   > >::_String_iterator<class std::_String_val<struct std::_Simple_types<char> > >(char *,struct
   std::_Container_base0 const *)
    public: __thiscall std::_String_iterator<class std::_String_val<struct std::_Simple_types<char>
   > >::_String_iterator<class std::_String_val<struct std::_Simple_types<char> > >(char *,struct
   std::_Container_base12 const *)
     9 names - too many to list
   
   Libraries: Visual Studio 2010 Release, Visual Studio 2012 Debug, Visual Studio 2012 Release */

undefined4 _String_iterator<>(undefined4 param_1,undefined4 param_2)

{
  undefined4 in_ECX;
  
  FUN_00402040(param_1,param_2);
  return in_ECX;
}


/* ==== 00402320  _Vector_iterator<>  size=33 ==== */

/* Library Function - Multiple Matches With Same Base Name
    public: __thiscall std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class
   std::shared_ptr<struct Concurrency::details::_Task_impl<unsigned char> > > >
   >::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class std::shared_ptr<struct
   Concurrency::details::_Task_impl<unsigned char> > > > >(class std::shared_ptr<struct
   Concurrency::details::_Task_impl<unsigned char> > *,struct std::_Container_base0 const *)
    public: __thiscall std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class
   std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<unsigned char,class
   Concurrency::details::_CancellationTokenState *> > > > > >::_Vector_iterator<class
   std::_Vector_val<struct std::_Simple_types<class std::shared_ptr<struct
   Concurrency::details::_Task_impl<struct std::pair<unsigned char,class
   Concurrency::details::_CancellationTokenState *> > > > > >(class std::shared_ptr<struct
   Concurrency::details::_Task_impl<struct std::pair<unsigned char,class
   Concurrency::details::_CancellationTokenState *> > > *,struct std::_Container_base0 const *)
   
   Library: Visual Studio 2012 Release */

undefined4 _Vector_iterator<>(undefined4 param_1,undefined4 param_2)

{
  undefined4 in_ECX;
  
  FID_conflict__Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::shared_ptr<Concurrency::details::_Task_impl<std::pair<unsigned_char,Concurrency::details::_CancellationTokenState*>_>_>_>_>_>
            (param_1,param_2);
  return in_ECX;
}


/* ==== 00402460  _Max_value<unsigned_int>  size=45 ==== */

/* Library Function - Single Match
    unsigned int const & __cdecl std::_Max_value<unsigned int>(unsigned int const &,unsigned int
   const &)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

uint * __cdecl std::_Max_value<unsigned_int>(uint *param_1,uint *param_2)

{
  undefined4 local_8;
  
  if (*param_2 < *param_1) {
    local_8 = param_2;
  }
  else {
    local_8 = param_1;
  }
  return local_8;
}


/* ==== 004024f0  _Vector_alloc<>  size=25 ==== */

/* Library Function - Multiple Matches With Same Base Name
    public: __thiscall std::_Vector_alloc<0,struct std::_Vec_base_types<class std::shared_ptr<struct
   Concurrency::details::_Task_impl<unsigned char> >,class std::allocator<class
   std::shared_ptr<struct Concurrency::details::_Task_impl<unsigned char> > > >
   >::_Vector_alloc<0,struct std::_Vec_base_types<class std::shared_ptr<struct
   Concurrency::details::_Task_impl<unsigned char> >,class std::allocator<class
   std::shared_ptr<struct Concurrency::details::_Task_impl<unsigned char> > > > >(class
   std::allocator<class std::shared_ptr<struct Concurrency::details::_Task_impl<unsigned char> > >
   const &)
    public: __thiscall std::_Vector_alloc<0,struct std::_Vec_base_types<class std::shared_ptr<struct
   Concurrency::details::_Task_impl<struct std::pair<unsigned char,class
   Concurrency::details::_CancellationTokenState *> > >,class std::allocator<class
   std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<unsigned char,class
   Concurrency::details::_CancellationTokenState *> > > > > >::_Vector_alloc<0,struct
   std::_Vec_base_types<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct
   std::pair<unsigned char,class Concurrency::details::_CancellationTokenState *> > >,class
   std::allocator<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct
   std::pair<unsigned char,class Concurrency::details::_CancellationTokenState *> > > > > >(class
   std::allocator<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct
   std::pair<unsigned char,class Concurrency::details::_CancellationTokenState *> > > > const &)
   
   Library: Visual Studio 2012 Release */

undefined4 _Vector_alloc<>(void)

{
  undefined4 in_ECX;
  
  _Vector_val<>();
  return in_ECX;
}


/* ==== 004025e0  _Unfancy<>  size=8 ==== */

/* Library Function - Multiple Matches With Same Base Name
    unsigned short * __cdecl std::_Unfancy<unsigned short>(unsigned short *)
    wchar_t * __cdecl std::_Unfancy<wchar_t>(wchar_t *)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined4 _Unfancy<>(undefined4 param_1)

{
  return param_1;
}


/* ==== 004026d0  _Compressed_pair<><>  size=33 ==== */

/* Library Function - Multiple Matches With Same Base Name
    public: __thiscall std::_Compressed_pair<class std::allocator<char>,class
   std::_String_val<struct std::_Simple_types<char> >,1>::_Compressed_pair<class
   std::allocator<char>,class std::_String_val<struct std::_Simple_types<char> >,1><>(struct
   std::_Zero_then_variadic_args_t)
    public: __thiscall std::_Compressed_pair<class std::allocator<unsigned short>,class
   std::_String_val<struct std::_Simple_types<unsigned short> >,1>::_Compressed_pair<class
   std::allocator<unsigned short>,class std::_String_val<struct std::_Simple_types<unsigned short>
   >,1><>(struct std::_Zero_then_variadic_args_t)
    public: __thiscall std::_Compressed_pair<class std::allocator<wchar_t>,class
   std::_String_val<struct std::_Simple_types<wchar_t> >,1>::_Compressed_pair<class
   std::allocator<wchar_t>,class std::_String_val<struct std::_Simple_types<wchar_t> >,1><>(struct
   std::_Zero_then_variadic_args_t)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

undefined4 _Compressed_pair<><>(void)

{
  undefined4 in_ECX;
  
  allocator<>();
  _Vector_val<>();
  return in_ECX;
}


/* ==== 00402780  _Deallocate<>  size=90 ==== */

/* Library Function - Multiple Matches With Same Base Name
    void __cdecl std::_Deallocate<4,0>(void *,unsigned int)
    void __cdecl std::_Deallocate<8,0>(void *,unsigned int)
   
   Libraries: Visual Studio 2019 Debug, Visual Studio 2019 Release */

void _Deallocate<>(undefined4 param_1,uint param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0070bdc0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (0xfff < param_2) {
    FUN_004016a0(&param_1,&param_2,DAT_007c5940 ^ (uint)&stack0xfffffffc);
  }
  FUN_006e4b8e(param_1,param_2);
  ExceptionList = local_10;
  return;
}


/* ==== 00402960  _Vector_val<>  size=43 ==== */

/* Library Function - Multiple Matches With Same Base Name
    public: __thiscall std::_Vector_val<struct std::_Simple_types<class std::shared_ptr<struct
   Concurrency::details::_Task_impl<unsigned char> > > >::_Vector_val<struct
   std::_Simple_types<class std::shared_ptr<struct Concurrency::details::_Task_impl<unsigned char> >
   > >(void)
    public: __thiscall std::_Vector_val<struct std::_Simple_types<class std::shared_ptr<struct
   Concurrency::details::_Task_impl<struct std::pair<unsigned char,class
   Concurrency::details::_CancellationTokenState *> > > > >::_Vector_val<struct
   std::_Simple_types<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct
   std::pair<unsigned char,class Concurrency::details::_CancellationTokenState *> > > > >(void)
   
   Library: Visual Studio 2012 Release */

undefined4 * _Vector_val<>(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  return in_ECX;
}


/* ==== 00402f10  __ExceptionPtrDestroy  size=16 ==== */

/* Library Function - Single Match
    void __cdecl __ExceptionPtrDestroy(void *)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void __cdecl __ExceptionPtrDestroy(void *param_1)

{
  FID_conflict__scalar_deleting_destructor_(0);
  return;
}


/* ==== 004034c0  _Get_size_of_n<8>  size=42 ==== */

/* Library Function - Single Match
    unsigned int __cdecl std::_Get_size_of_n<8>(unsigned int)
   
   Libraries: Visual Studio 2019 Debug, Visual Studio 2019 Release */

uint __cdecl std::_Get_size_of_n<8>(uint param_1)

{
  if (0x3fffffff < param_1) {
    FUN_004015f0(0x3fffffff);
  }
  return param_1 << 2;
}


/* ==== 00403520  _Get_size_of_n<8>  size=42 ==== */

/* Library Function - Single Match
    unsigned int __cdecl std::_Get_size_of_n<8>(unsigned int)
   
   Libraries: Visual Studio 2019 Debug, Visual Studio 2019 Release */

uint __cdecl std::_Get_size_of_n<8>(uint param_1)

{
  if (0xfffffff < param_1) {
    FUN_004015f0(0xfffffff);
  }
  return param_1 << 4;
}


/* ==== 00403550  _Get_size_of_n<8>  size=42 ==== */

/* Library Function - Single Match
    unsigned int __cdecl std::_Get_size_of_n<8>(unsigned int)
   
   Libraries: Visual Studio 2019 Debug, Visual Studio 2019 Release */

uint __cdecl std::_Get_size_of_n<8>(uint param_1)

{
  if (0x1fffffff < param_1) {
    FUN_004015f0(0x1fffffff);
  }
  return param_1 << 3;
}


/* ==== 00405ac0  _Myptr  size=54 ==== */

/* Library Function - Single Match
    public: char const * __thiscall std::_String_val<struct std::_Simple_types<char>
   >::_Myptr(void)const 
   
   Library: Visual Studio 2019 Release */

char * __thiscall
std::_String_val<std::_Simple_types<char>_>::_Myptr(_String_val<std::_Simple_types<char>_> *this)

{
  char cVar1;
  _String_val<std::_Simple_types<char>_> *local_c;
  
  cVar1 = FUN_00405c70();
  local_c = this;
  if (cVar1 != '\0') {
    local_c = (_String_val<std::_Simple_types<char>_> *)_Unfancy<>(*(undefined4 *)this);
  }
  return (char *)local_c;
}


/* ==== 00405b40  _Max_value<unsigned_int>  size=45 ==== */

/* Library Function - Single Match
    unsigned int const & __cdecl std::_Max_value<unsigned int>(unsigned int const &,unsigned int
   const &)
   
   Libraries: Visual Studio 2019 Debug, Visual Studio 2019 Release */

uint * __cdecl std::_Max_value<unsigned_int>(uint *param_1,uint *param_2)

{
  undefined4 local_8;
  
  if (*param_1 < *param_2) {
    local_8 = param_2;
  }
  else {
    local_8 = param_1;
  }
  return local_8;
}


/* ==== 00405cd0  _Unchecked_idl0<>  size=28 ==== */

/* Library Function - Multiple Matches With Same Base Name
    class std::ostreambuf_iterator<char,struct std::char_traits<char> > __cdecl
   std::_Unchecked_idl0<class std::ostreambuf_iterator<char,struct std::char_traits<char> > >(class
   std::ostreambuf_iterator<char,struct std::char_traits<char> >)
    class std::ostreambuf_iterator<unsigned short,struct std::char_traits<unsigned short> > __cdecl
   std::_Unchecked_idl0<class std::ostreambuf_iterator<unsigned short,struct
   std::char_traits<unsigned short> > >(class std::ostreambuf_iterator<unsigned short,struct
   std::char_traits<unsigned short> >)
    class std::ostreambuf_iterator<wchar_t,struct std::char_traits<wchar_t> > __cdecl
   std::_Unchecked_idl0<class std::ostreambuf_iterator<wchar_t,struct std::char_traits<wchar_t> >
   >(class std::ostreambuf_iterator<wchar_t,struct std::char_traits<wchar_t> >)
   
   Library: Visual Studio 2015 Release */

undefined4 _Unchecked_idl0<>(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_006e6bd0(param_1,param_2,param_3);
  return param_1;
}


/* ==== 00406110  _Compressed_pair<><>  size=33 ==== */

/* Library Function - Multiple Matches With Same Base Name
    public: __thiscall std::_Compressed_pair<class std::allocator<char>,class
   std::_String_val<struct std::_Simple_types<char> >,1>::_Compressed_pair<class
   std::allocator<char>,class std::_String_val<struct std::_Simple_types<char> >,1><>(struct
   std::_Zero_then_variadic_args_t)
    public: __thiscall std::_Compressed_pair<class std::allocator<unsigned short>,class
   std::_String_val<struct std::_Simple_types<unsigned short> >,1>::_Compressed_pair<class
   std::allocator<unsigned short>,class std::_String_val<struct std::_Simple_types<unsigned short>
   >,1><>(struct std::_Zero_then_variadic_args_t)
    public: __thiscall std::_Compressed_pair<class std::allocator<wchar_t>,class
   std::_String_val<struct std::_Simple_types<wchar_t> >,1>::_Compressed_pair<class
   std::allocator<wchar_t>,class std::_String_val<struct std::_Simple_types<wchar_t> >,1><>(struct
   std::_Zero_then_variadic_args_t)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined4 _Compressed_pair<><>(void)

{
  undefined4 in_ECX;
  
  allocator<>();
  _String_val<>();
  return in_ECX;
}


/* ==== 00406a00  _Calculate_growth  size=81 ==== */

/* Library Function - Single Match
    private: static unsigned int __cdecl std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> >::_Calculate_growth(unsigned int,unsigned int,unsigned int)
   
   Libraries: Visual Studio 2019 Debug, Visual Studio 2019 Release */

uint __cdecl
std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Calculate_growth
          (uint param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  uint local_c;
  uint local_8;
  
  local_8 = param_1 | 0xf;
  if ((local_8 <= param_3) && (param_2 <= param_3 - (param_2 >> 1))) {
    local_c = (param_2 >> 1) + param_2;
    puVar1 = _Max_value<unsigned_int>(&local_8,&local_c);
    param_3 = *puVar1;
  }
  return param_3;
}


/* ==== 00406d70  _String_val<>  size=42 ==== */

/* Library Function - Multiple Matches With Same Base Name
    public: __thiscall std::_String_val<struct std::_Simple_types<char> >::_String_val<struct
   std::_Simple_types<char> >(void)
    public: __thiscall std::_String_val<struct std::_Simple_types<unsigned short>
   >::_String_val<struct std::_Simple_types<unsigned short> >(void)
    public: __thiscall std::_String_val<struct std::_Simple_types<wchar_t> >::_String_val<struct
   std::_Simple_types<wchar_t> >(void)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

int _String_val<>(void)

{
  int in_ECX;
  
  FUN_00407020();
  *(undefined4 *)(in_ECX + 0x10) = 0;
  *(undefined4 *)(in_ECX + 0x14) = 0;
  return in_ECX;
}


/* ==== 004076f0  __ExceptionPtrDestroy  size=16 ==== */

/* Library Function - Single Match
    void __cdecl __ExceptionPtrDestroy(void *)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void __cdecl __ExceptionPtrDestroy(void *param_1)

{
  FUN_004079e0(0);
  return;
}


/* ==== 00407830  __ExceptionPtrDestroy  size=16 ==== */

/* Library Function - Single Match
    void __cdecl __ExceptionPtrDestroy(void *)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void __cdecl __ExceptionPtrDestroy(void *param_1)

{
  FUN_00407a50(0);
  return;
}


/* ==== 00407840  _Get_size_of_n<8>  size=42 ==== */

/* Library Function - Single Match
    unsigned int __cdecl std::_Get_size_of_n<8>(unsigned int)
   
   Libraries: Visual Studio 2019 Debug, Visual Studio 2019 Release */

uint __cdecl std::_Get_size_of_n<8>(uint param_1)

{
  if (0x7ffffff < param_1) {
    FUN_004015f0(0x7ffffff);
  }
  return param_1 << 5;
}


/* ==== 004084f0  __ExceptionPtrDestroy  size=16 ==== */

/* Library Function - Single Match
    void __cdecl __ExceptionPtrDestroy(void *)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void __cdecl __ExceptionPtrDestroy(void *param_1)

{
  shared_ptr<_EXCEPTION_RECORD_const_> *in_stack_00000008;
  
  std::shared_ptr<_EXCEPTION_RECORD_const_>::_scalar_deleting_destructor_(in_stack_00000008,0);
  return;
}


/* ==== 00408980  `scalar_deleting_destructor'  size=46 ==== */

/* Library Function - Single Match
    public: void * __thiscall std::shared_ptr<struct _EXCEPTION_RECORD const >::`scalar deleting
   destructor'(unsigned int)
   
   Libraries: Visual Studio 2019 Debug, Visual Studio 2019 Release */

void * __thiscall
std::shared_ptr<_EXCEPTION_RECORD_const_>::_scalar_deleting_destructor_
          (shared_ptr<_EXCEPTION_RECORD_const_> *this,uint param_1)

{
  FUN_004089b0();
  if ((param_1 & 1) != 0) {
    FUN_006e4b8e(this,0x1c);
  }
  return this;
}


/* ==== 00408f60  _Get_size_of_n<1>  size=15 ==== */

/* Library Function - Single Match
    unsigned int __cdecl std::_Get_size_of_n<1>(unsigned int)
   
   Libraries: Visual Studio 2019 Debug, Visual Studio 2019 Release */

uint __cdecl std::_Get_size_of_n<1>(uint param_1)

{
  return param_1;
}


/* ==== 0040a810  _Fnv1a_append_bytes  size=64 ==== */

/* Library Function - Single Match
    unsigned int __cdecl std::_Fnv1a_append_bytes(unsigned int,unsigned char const * const,unsigned
   int)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

uint __cdecl std::_Fnv1a_append_bytes(uint param_1,uchar *param_2,uint param_3)

{
  uint local_8;
  
  for (local_8 = 0; local_8 < param_3; local_8 = local_8 + 1) {
    param_1 = (param_2[local_8] ^ param_1) * 0x1000193;
  }
  return param_1;
}


/* ==== 0040d940  _Vector_iterator<>  size=33 ==== */

/* Library Function - Multiple Matches With Same Base Name
    public: __thiscall std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class
   std::shared_ptr<struct Concurrency::details::_Task_impl<unsigned char> > > >
   >::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class std::shared_ptr<struct
   Concurrency::details::_Task_impl<unsigned char> > > > >(class std::shared_ptr<struct
   Concurrency::details::_Task_impl<unsigned char> > *,struct std::_Container_base0 const *)
    public: __thiscall std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class
   std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<unsigned char,class
   Concurrency::details::_CancellationTokenState *> > > > > >::_Vector_iterator<class
   std::_Vector_val<struct std::_Simple_types<class std::shared_ptr<struct
   Concurrency::details::_Task_impl<struct std::pair<unsigned char,class
   Concurrency::details::_CancellationTokenState *> > > > > >(class std::shared_ptr<struct
   Concurrency::details::_Task_impl<struct std::pair<unsigned char,class
   Concurrency::details::_CancellationTokenState *> > > *,struct std::_Container_base0 const *)
   
   Library: Visual Studio 2012 Release */

undefined4 _Vector_iterator<>(undefined4 param_1,undefined4 param_2)

{
  undefined4 in_ECX;
  
  _Vector_iterator<>(param_1,param_2);
  return in_ECX;
}


/* ==== 0040de90  _Vector_iterator<>  size=33 ==== */

/* Library Function - Multiple Matches With Same Base Name
    public: __thiscall std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class
   std::shared_ptr<struct Concurrency::details::_Task_impl<unsigned char> > > >
   >::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class std::shared_ptr<struct
   Concurrency::details::_Task_impl<unsigned char> > > > >(class std::shared_ptr<struct
   Concurrency::details::_Task_impl<unsigned char> > *,struct std::_Container_base0 const *)
    public: __thiscall std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class
   std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<unsigned char,class
   Concurrency::details::_CancellationTokenState *> > > > > >::_Vector_iterator<class
   std::_Vector_val<struct std::_Simple_types<class std::shared_ptr<struct
   Concurrency::details::_Task_impl<struct std::pair<unsigned char,class
   Concurrency::details::_CancellationTokenState *> > > > > >(class std::shared_ptr<struct
   Concurrency::details::_Task_impl<struct std::pair<unsigned char,class
   Concurrency::details::_CancellationTokenState *> > > *,struct std::_Container_base0 const *)
   
   Library: Visual Studio 2012 Release */

undefined4 _Vector_iterator<>(undefined4 param_1,undefined4 param_2)

{
  undefined4 in_ECX;
  
  FUN_0040e1a0(param_1,param_2);
  return in_ECX;
}


/* ==== 0040f100  _Compressed_pair<><>  size=33 ==== */

/* Library Function - Multiple Matches With Same Base Name
    public: __thiscall std::_Compressed_pair<class std::allocator<char>,class
   std::_String_val<struct std::_Simple_types<char> >,1>::_Compressed_pair<class
   std::allocator<char>,class std::_String_val<struct std::_Simple_types<char> >,1><>(struct
   std::_Zero_then_variadic_args_t)
    public: __thiscall std::_Compressed_pair<class std::allocator<unsigned short>,class
   std::_String_val<struct std::_Simple_types<unsigned short> >,1>::_Compressed_pair<class
   std::allocator<unsigned short>,class std::_String_val<struct std::_Simple_types<unsigned short>
   >,1><>(struct std::_Zero_then_variadic_args_t)
    public: __thiscall std::_Compressed_pair<class std::allocator<wchar_t>,class
   std::_String_val<struct std::_Simple_types<wchar_t> >,1>::_Compressed_pair<class
   std::allocator<wchar_t>,class std::_String_val<struct std::_Simple_types<wchar_t> >,1><>(struct
   std::_Zero_then_variadic_args_t)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

QuickBitSet * _Compressed_pair<><>(void)

{
  QuickBitSet *in_ECX;
  
  allocator<>();
  Concurrency::details::QuickBitSet::QuickBitSet(in_ECX);
  return in_ECX;
}


/* ==== 0040fe70  __ExceptionPtrDestroy  size=16 ==== */

/* Library Function - Single Match
    void __cdecl __ExceptionPtrDestroy(void *)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void __cdecl __ExceptionPtrDestroy(void *param_1)

{
  FUN_004102d0(0);
  return;
}


/* ==== 004101c0  __ExceptionPtrDestroy  size=16 ==== */

/* Library Function - Single Match
    void __cdecl __ExceptionPtrDestroy(void *)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void __cdecl __ExceptionPtrDestroy(void *param_1)

{
  FUN_00410300(0);
  return;
}


/* ==== 00411820  __ExceptionPtrDestroy  size=16 ==== */

/* Library Function - Single Match
    void __cdecl __ExceptionPtrDestroy(void *)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void __cdecl __ExceptionPtrDestroy(void *param_1)

{
  WorkQueue *in_stack_00000008;
  
  Concurrency::details::WorkQueue::_scalar_deleting_destructor_(in_stack_00000008,0);
  return;
}


/* ==== 00411870  _Hash_array_representation<char>  size=26 ==== */

/* Library Function - Single Match
    unsigned int __cdecl std::_Hash_array_representation<char>(char const * const,unsigned int)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

uint __cdecl std::_Hash_array_representation<char>(char *param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = _Fnv1a_append_bytes(0x811c9dc5,(uchar *)param_1,param_2);
  return uVar1;
}


/* ==== 00411a20  `scalar_deleting_destructor'  size=46 ==== */

/* Library Function - Single Match
    public: void * __thiscall Concurrency::details::WorkQueue::`scalar deleting destructor'(unsigned
   int)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void * __thiscall
Concurrency::details::WorkQueue::_scalar_deleting_destructor_(WorkQueue *this,uint param_1)

{
  ~WorkQueue(this);
  if ((param_1 & 1) != 0) {
    FUN_006e4b8e(this,0x24);
  }
  return this;
}


/* ==== 00427c20  _Clamp_suffix_size  size=45 ==== */

/* Library Function - Single Match
    public: unsigned int __thiscall std::_String_val<struct std::_Simple_types<char>
   >::_Clamp_suffix_size(unsigned int,unsigned int)const 
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

uint __thiscall
std::_String_val<std::_Simple_types<char>_>::_Clamp_suffix_size
          (_String_val<std::_Simple_types<char>_> *this,uint param_1,uint param_2)

{
  uint *puVar1;
  uint local_c;
  _String_val<std::_Simple_types<char>_> *local_8;
  
  local_c = *(int *)(this + 0x10) - param_1;
  local_8 = this;
  puVar1 = _Max_value<unsigned_int>(&param_2,&local_c);
  return *puVar1;
}


/* ==== 00428230  __ExceptionPtrDestroy  size=16 ==== */

/* Library Function - Single Match
    void __cdecl __ExceptionPtrDestroy(void *)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void __cdecl __ExceptionPtrDestroy(void *param_1)

{
  FUN_00429000(0);
  return;
}


/* ==== 0042b170  __ExceptionPtrDestroy  size=16 ==== */

/* Library Function - Single Match
    void __cdecl __ExceptionPtrDestroy(void *)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void __cdecl __ExceptionPtrDestroy(void *param_1)

{
  shared_ptr<_EXCEPTION_RECORD_const_> *in_stack_00000008;
  
  std::shared_ptr<_EXCEPTION_RECORD_const_>::_scalar_deleting_destructor_(in_stack_00000008,0);
  return;
}


/* ==== 0042bfa0  __ExceptionPtrDestroy  size=16 ==== */

/* Library Function - Single Match
    void __cdecl __ExceptionPtrDestroy(void *)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void __cdecl __ExceptionPtrDestroy(void *param_1)

{
  shared_ptr<_EXCEPTION_RECORD_const_> *in_stack_00000008;
  
  std::shared_ptr<_EXCEPTION_RECORD_const_>::_scalar_deleting_destructor_(in_stack_00000008,0);
  return;
}


/* ==== 0042c580  `scalar_deleting_destructor'  size=46 ==== */

/* Library Function - Single Match
    public: void * __thiscall std::shared_ptr<struct _EXCEPTION_RECORD const >::`scalar deleting
   destructor'(unsigned int)
   
   Libraries: Visual Studio 2019 Debug, Visual Studio 2019 Release */

void * __thiscall
std::shared_ptr<_EXCEPTION_RECORD_const_>::_scalar_deleting_destructor_
          (shared_ptr<_EXCEPTION_RECORD_const_> *this,uint param_1)

{
  FUN_0042c5e0();
  if ((param_1 & 1) != 0) {
    FUN_006e4b8e(this,0x20);
  }
  return this;
}


/* ==== 0042c5b0  `scalar_deleting_destructor'  size=46 ==== */

/* Library Function - Single Match
    public: void * __thiscall std::shared_ptr<struct _EXCEPTION_RECORD const >::`scalar deleting
   destructor'(unsigned int)
   
   Libraries: Visual Studio 2019 Debug, Visual Studio 2019 Release */

void * __thiscall
std::shared_ptr<_EXCEPTION_RECORD_const_>::_scalar_deleting_destructor_
          (shared_ptr<_EXCEPTION_RECORD_const_> *this,uint param_1)

{
  FUN_004089b0();
  if ((param_1 & 1) != 0) {
    FUN_006e4b8e(this,0x20);
  }
  return this;
}


/* ==== 00450360  __ExceptionPtrDestroy  size=16 ==== */

/* Library Function - Single Match
    void __cdecl __ExceptionPtrDestroy(void *)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void __cdecl __ExceptionPtrDestroy(void *param_1)

{
  WorkQueue *in_stack_00000008;
  
  Concurrency::details::WorkQueue::_scalar_deleting_destructor_(in_stack_00000008,0);
  return;
}


/* ==== 00450bf0  __ExceptionPtrDestroy  size=16 ==== */

/* Library Function - Single Match
    void __cdecl __ExceptionPtrDestroy(void *)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void __cdecl __ExceptionPtrDestroy(void *param_1)

{
  WorkQueue *in_stack_00000008;
  
  Concurrency::details::WorkQueue::_scalar_deleting_destructor_(in_stack_00000008,0);
  return;
}


/* ==== 00450c00  __ExceptionPtrDestroy  size=16 ==== */

/* Library Function - Single Match
    void __cdecl __ExceptionPtrDestroy(void *)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void __cdecl __ExceptionPtrDestroy(void *param_1)

{
  FUN_00450ca0(0);
  return;
}


/* ==== 00450c10  __ExceptionPtrDestroy  size=16 ==== */

/* Library Function - Single Match
    void __cdecl __ExceptionPtrDestroy(void *)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void __cdecl __ExceptionPtrDestroy(void *param_1)

{
  _Condition_variable *in_stack_00000008;
  
  Concurrency::details::_Condition_variable::_scalar_deleting_destructor_(in_stack_00000008,0);
  return;
}


/* ==== 00450c40  `scalar_deleting_destructor'  size=46 ==== */

/* Library Function - Single Match
    public: void * __thiscall Concurrency::details::WorkQueue::`scalar deleting destructor'(unsigned
   int)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void * __thiscall
Concurrency::details::WorkQueue::_scalar_deleting_destructor_(WorkQueue *this,uint param_1)

{
  ~WorkQueue(this);
  if ((param_1 & 1) != 0) {
    FUN_006e4b8e(this,0x24);
  }
  return this;
}


/* ==== 00450c70  `scalar_deleting_destructor'  size=46 ==== */

/* Library Function - Single Match
    public: void * __thiscall Concurrency::details::WorkQueue::`scalar deleting destructor'(unsigned
   int)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void * __thiscall
Concurrency::details::WorkQueue::_scalar_deleting_destructor_(WorkQueue *this,uint param_1)

{
  ~WorkQueue(this);
  if ((param_1 & 1) != 0) {
    FUN_006e4b8e(this,0x28);
  }
  return this;
}


/* ==== 00450cd0  `scalar_deleting_destructor'  size=46 ==== */

/* Library Function - Single Match
    public: void * __thiscall Concurrency::details::_Condition_variable::`scalar deleting
   destructor'(unsigned int)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void * __thiscall
Concurrency::details::_Condition_variable::_scalar_deleting_destructor_
          (_Condition_variable *this,uint param_1)

{
  FUN_00450d20();
  if ((param_1 & 1) != 0) {
    FUN_006e4b8e(this,0x24);
  }
  return this;
}


/* ==== 00493d00  __ExceptionPtrDestroy  size=16 ==== */

/* Library Function - Single Match
    void __cdecl __ExceptionPtrDestroy(void *)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void __cdecl __ExceptionPtrDestroy(void *param_1)

{
  FUN_00493ea0(0);
  return;
}


/* ==== 00493d20  __ExceptionPtrDestroy  size=16 ==== */

/* Library Function - Single Match
    void __cdecl __ExceptionPtrDestroy(void *)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void __cdecl __ExceptionPtrDestroy(void *param_1)

{
  WorkQueue *in_stack_00000008;
  
  Concurrency::details::WorkQueue::_scalar_deleting_destructor_(in_stack_00000008,0);
  return;
}


/* ==== 00493d40  __ExceptionPtrDestroy  size=16 ==== */

/* Library Function - Single Match
    void __cdecl __ExceptionPtrDestroy(void *)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void __cdecl __ExceptionPtrDestroy(void *param_1)

{
  FUN_00493f80(0);
  return;
}


/* ==== 00493d50  __ExceptionPtrDestroy  size=16 ==== */

/* Library Function - Single Match
    void __cdecl __ExceptionPtrDestroy(void *)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void __cdecl __ExceptionPtrDestroy(void *param_1)

{
  FUN_00493fb0(0);
  return;
}


/* ==== 00493f10  `scalar_deleting_destructor'  size=46 ==== */

/* Library Function - Single Match
    public: void * __thiscall Concurrency::details::WorkQueue::`scalar deleting destructor'(unsigned
   int)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void * __thiscall
Concurrency::details::WorkQueue::_scalar_deleting_destructor_(WorkQueue *this,uint param_1)

{
  ~WorkQueue(this);
  if ((param_1 & 1) != 0) {
    FUN_006e4b8e(this,0x24);
  }
  return this;
}


/* ==== 004967b0  __ExceptionPtrDestroy  size=16 ==== */

/* Library Function - Single Match
    void __cdecl __ExceptionPtrDestroy(void *)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void __cdecl __ExceptionPtrDestroy(void *param_1)

{
  WorkQueue *in_stack_00000008;
  
  Concurrency::details::WorkQueue::_scalar_deleting_destructor_(in_stack_00000008,0);
  return;
}


/* ==== 00497570  `scalar_deleting_destructor'  size=46 ==== */

/* Library Function - Single Match
    public: void * __thiscall Concurrency::details::WorkQueue::`scalar deleting destructor'(unsigned
   int)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void * __thiscall
Concurrency::details::WorkQueue::_scalar_deleting_destructor_(WorkQueue *this,uint param_1)

{
  ~WorkQueue(this);
  if ((param_1 & 1) != 0) {
    FUN_006e4b8e(this,0x20);
  }
  return this;
}


/* ==== 0049e480  __ExceptionPtrDestroy  size=16 ==== */

/* Library Function - Single Match
    void __cdecl __ExceptionPtrDestroy(void *)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void __cdecl __ExceptionPtrDestroy(void *param_1)

{
  FUN_0049e4b0(0);
  return;
}


/* ==== 0049e490  __ExceptionPtrDestroy  size=16 ==== */

/* Library Function - Single Match
    void __cdecl __ExceptionPtrDestroy(void *)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void __cdecl __ExceptionPtrDestroy(void *param_1)

{
  FUN_0049e4e0(0);
  return;
}


/* ==== 0049e4a0  __ExceptionPtrDestroy  size=16 ==== */

/* Library Function - Single Match
    void __cdecl __ExceptionPtrDestroy(void *)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void __cdecl __ExceptionPtrDestroy(void *param_1)

{
  FUN_0049e510(0);
  return;
}


/* ==== 004be490  `scalar_deleting_destructor'  size=46 ==== */

/* Library Function - Single Match
    public: void * __thiscall Concurrency::details::WorkQueue::`scalar deleting destructor'(unsigned
   int)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void * __thiscall
Concurrency::details::WorkQueue::_scalar_deleting_destructor_(WorkQueue *this,uint param_1)

{
  ~WorkQueue(this);
  if ((param_1 & 1) != 0) {
    FUN_006e4b8e(this,0x48);
  }
  return this;
}


/* ==== 004be4c0  `scalar_deleting_destructor'  size=46 ==== */

/* Library Function - Single Match
    public: void * __thiscall Concurrency::details::WorkQueue::`scalar deleting destructor'(unsigned
   int)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void * __thiscall
Concurrency::details::WorkQueue::_scalar_deleting_destructor_(WorkQueue *this,uint param_1)

{
  ~WorkQueue(this);
  if ((param_1 & 1) != 0) {
    FUN_006e4b8e(this,0x34);
  }
  return this;
}


/* ==== 004be4f0  `scalar_deleting_destructor'  size=46 ==== */

/* Library Function - Single Match
    public: void * __thiscall Concurrency::details::WorkQueue::`scalar deleting destructor'(unsigned
   int)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void * __thiscall
Concurrency::details::WorkQueue::_scalar_deleting_destructor_(WorkQueue *this,uint param_1)

{
  ~WorkQueue(this);
  if ((param_1 & 1) != 0) {
    FUN_006e4b8e(this,0x24);
  }
  return this;
}


/* ==== 004be520  `scalar_deleting_destructor'  size=46 ==== */

/* Library Function - Single Match
    public: void * __thiscall Concurrency::details::WorkQueue::`scalar deleting destructor'(unsigned
   int)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void * __thiscall
Concurrency::details::WorkQueue::_scalar_deleting_destructor_(WorkQueue *this,uint param_1)

{
  ~WorkQueue(this);
  if ((param_1 & 1) != 0) {
    FUN_006e4b8e(this,0x68);
  }
  return this;
}


/* ==== 004be550  `scalar_deleting_destructor'  size=46 ==== */

/* Library Function - Single Match
    public: void * __thiscall Concurrency::details::WorkQueue::`scalar deleting destructor'(unsigned
   int)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void * __thiscall
Concurrency::details::WorkQueue::_scalar_deleting_destructor_(WorkQueue *this,uint param_1)

{
  ~WorkQueue(this);
  if ((param_1 & 1) != 0) {
    FUN_006e4b8e(this,0x38);
  }
  return this;
}


/* ==== 004c5900  __ExceptionPtrDestroy  size=16 ==== */

/* Library Function - Single Match
    void __cdecl __ExceptionPtrDestroy(void *)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void __cdecl __ExceptionPtrDestroy(void *param_1)

{
  FID_conflict__scalar_deleting_destructor_(0);
  return;
}


/* ==== 004c6dd0  __ExceptionPtrDestroy  size=16 ==== */

/* Library Function - Single Match
    void __cdecl __ExceptionPtrDestroy(void *)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void __cdecl __ExceptionPtrDestroy(void *param_1)

{
  WorkQueue *in_stack_00000008;
  
  Concurrency::details::WorkQueue::_scalar_deleting_destructor_(in_stack_00000008,0);
  return;
}


/* ==== 004c6e90  `scalar_deleting_destructor'  size=46 ==== */

/* Library Function - Single Match
    public: void * __thiscall Concurrency::details::WorkQueue::`scalar deleting destructor'(unsigned
   int)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void * __thiscall
Concurrency::details::WorkQueue::_scalar_deleting_destructor_(WorkQueue *this,uint param_1)

{
  ~WorkQueue(this);
  if ((param_1 & 1) != 0) {
    FUN_006e4b8e(this,0x54);
  }
  return this;
}


/* ==== 004d19c0  `scalar_deleting_destructor'  size=46 ==== */

/* Library Function - Single Match
    public: virtual void * __thiscall Concurrency::details::UMSFreeVirtualProcessorRoot::`scalar
   deleting destructor'(unsigned int)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void * __thiscall
Concurrency::details::UMSFreeVirtualProcessorRoot::_scalar_deleting_destructor_
          (UMSFreeVirtualProcessorRoot *this,uint param_1)

{
  FUN_004d1a20();
  if ((param_1 & 1) != 0) {
    FUN_006e4b8e(this,0x78);
  }
  return this;
}


/* ==== 005178b0  `scalar_deleting_destructor'  size=49 ==== */

/* Library Function - Single Match
    public: virtual void * __thiscall Concurrency::source_block<class
   Concurrency::single_link_registry<class Concurrency::ITarget<unsigned int> >,class
   Concurrency::ordered_message_processor<unsigned int> >::`scalar deleting destructor'(unsigned
   int)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void * __thiscall
Concurrency::
source_block<Concurrency::single_link_registry<Concurrency::ITarget<unsigned_int>_>,Concurrency::ordered_message_processor<unsigned_int>_>
::_scalar_deleting_destructor_
          (source_block<Concurrency::single_link_registry<Concurrency::ITarget<unsigned_int>_>,Concurrency::ordered_message_processor<unsigned_int>_>
           *this,uint param_1)

{
  FUN_005178f0();
  if ((param_1 & 1) != 0) {
    FUN_006e4b8e(this,0x110);
  }
  return this;
}


/* ==== 00517b30  `scalar_deleting_destructor'  size=49 ==== */

/* Library Function - Single Match
    public: virtual void * __thiscall Concurrency::source_block<class
   Concurrency::single_link_registry<class Concurrency::ITarget<unsigned int> >,class
   Concurrency::ordered_message_processor<unsigned int> >::`scalar deleting destructor'(unsigned
   int)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void * __thiscall
Concurrency::
source_block<Concurrency::single_link_registry<Concurrency::ITarget<unsigned_int>_>,Concurrency::ordered_message_processor<unsigned_int>_>
::_scalar_deleting_destructor_
          (source_block<Concurrency::single_link_registry<Concurrency::ITarget<unsigned_int>_>,Concurrency::ordered_message_processor<unsigned_int>_>
           *this,uint param_1)

{
  FUN_00517b70();
  if ((param_1 & 1) != 0) {
    FUN_006e4b8e(this,0x110);
  }
  return this;
}


/* ==== 00517c70  `scalar_deleting_destructor'  size=49 ==== */

/* Library Function - Single Match
    public: virtual void * __thiscall Concurrency::details::UMSThreadProxy::`scalar deleting
   destructor'(unsigned int)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void * __thiscall
Concurrency::details::UMSThreadProxy::_scalar_deleting_destructor_
          (UMSThreadProxy *this,uint param_1)

{
  FUN_00517cb0();
  if ((param_1 & 1) != 0) {
    FUN_006e4b8e(this,0xa8);
  }
  return this;
}


/* ==== 00517d40  `scalar_deleting_destructor'  size=49 ==== */

/* Library Function - Single Match
    public: virtual void * __thiscall Concurrency::details::ContextBase::`scalar deleting
   destructor'(unsigned int)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void * __thiscall
Concurrency::details::ContextBase::_scalar_deleting_destructor_(ContextBase *this,uint param_1)

{
  ~ContextBase(this);
  if ((param_1 & 1) != 0) {
    FUN_006e4b8e(this,0x9ac);
  }
  return this;
}


/* ==== 0051d370  __ExceptionPtrDestroy  size=16 ==== */

/* Library Function - Single Match
    void __cdecl __ExceptionPtrDestroy(void *)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void __cdecl __ExceptionPtrDestroy(void *param_1)

{
  FUN_0051f3b0(0);
  return;
}


/* ==== 005226f0  __ExceptionPtrDestroy  size=16 ==== */

/* Library Function - Single Match
    void __cdecl __ExceptionPtrDestroy(void *)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void __cdecl __ExceptionPtrDestroy(void *param_1)

{
  FID_conflict__scalar_deleting_destructor_(0);
  return;
}


/* ==== 005233d0  __ExceptionPtrDestroy  size=16 ==== */

/* Library Function - Single Match
    void __cdecl __ExceptionPtrDestroy(void *)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void __cdecl __ExceptionPtrDestroy(void *param_1)

{
  FUN_005262c0(0);
  return;
}


/* ==== 005243e0  __ExceptionPtrDestroy  size=16 ==== */

/* Library Function - Single Match
    void __cdecl __ExceptionPtrDestroy(void *)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void __cdecl __ExceptionPtrDestroy(void *param_1)

{
  FUN_005263f0(0);
  return;
}


/* ==== 005244e0  __ExceptionPtrDestroy  size=16 ==== */

/* Library Function - Single Match
    void __cdecl __ExceptionPtrDestroy(void *)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void __cdecl __ExceptionPtrDestroy(void *param_1)

{
  FUN_00526420(0);
  return;
}


/* ==== 005245e0  __ExceptionPtrDestroy  size=16 ==== */

/* Library Function - Single Match
    void __cdecl __ExceptionPtrDestroy(void *)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void __cdecl __ExceptionPtrDestroy(void *param_1)

{
  WorkQueue *in_stack_00000008;
  
  Concurrency::details::WorkQueue::_scalar_deleting_destructor_(in_stack_00000008,0);
  return;
}


/* ==== 00525fe0  __ExceptionPtrDestroy  size=16 ==== */

/* Library Function - Single Match
    void __cdecl __ExceptionPtrDestroy(void *)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void __cdecl __ExceptionPtrDestroy(void *param_1)

{
  WorkQueue *in_stack_00000008;
  
  Concurrency::details::WorkQueue::_scalar_deleting_destructor_(in_stack_00000008,0);
  return;
}


/* ==== 005260d0  __ExceptionPtrDestroy  size=16 ==== */

/* Library Function - Single Match
    void __cdecl __ExceptionPtrDestroy(void *)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void __cdecl __ExceptionPtrDestroy(void *param_1)

{
  FUN_005264b0(0);
  return;
}


/* ==== 005260e0  __ExceptionPtrDestroy  size=16 ==== */

/* Library Function - Single Match
    void __cdecl __ExceptionPtrDestroy(void *)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void __cdecl __ExceptionPtrDestroy(void *param_1)

{
  FUN_005264e0(0);
  return;
}


/* ==== 00526330  `scalar_deleting_destructor'  size=49 ==== */

/* Library Function - Single Match
    public: virtual void * __thiscall Concurrency::details::_AsyncTaskCollection::`scalar deleting
   destructor'(unsigned int)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void * __thiscall
Concurrency::details::_AsyncTaskCollection::_scalar_deleting_destructor_
          (_AsyncTaskCollection *this,uint param_1)

{
  ~_AsyncTaskCollection(this);
  if ((param_1 & 1) != 0) {
    FUN_006e4b8e(this,0x17c);
  }
  return this;
}


/* ==== 00526370  `scalar_deleting_destructor'  size=49 ==== */

/* Library Function - Single Match
    public: virtual void * __thiscall Concurrency::details::_AsyncTaskCollection::`scalar deleting
   destructor'(unsigned int)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void * __thiscall
Concurrency::details::_AsyncTaskCollection::_scalar_deleting_destructor_
          (_AsyncTaskCollection *this,uint param_1)

{
  ~_AsyncTaskCollection(this);
  if ((param_1 & 1) != 0) {
    FUN_006e4b8e(this,0x178);
  }
  return this;
}


/* ==== 00526450  `scalar_deleting_destructor'  size=46 ==== */

/* Library Function - Single Match
    public: void * __thiscall Concurrency::details::WorkQueue::`scalar deleting destructor'(unsigned
   int)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void * __thiscall
Concurrency::details::WorkQueue::_scalar_deleting_destructor_(WorkQueue *this,uint param_1)

{
  ~WorkQueue(this);
  if ((param_1 & 1) != 0) {
    FUN_006e4b8e(this,0x3c);
  }
  return this;
}


/* ==== 00526480  `scalar_deleting_destructor'  size=46 ==== */

/* Library Function - Single Match
    public: void * __thiscall Concurrency::details::WorkQueue::`scalar deleting destructor'(unsigned
   int)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void * __thiscall
Concurrency::details::WorkQueue::_scalar_deleting_destructor_(WorkQueue *this,uint param_1)

{
  ~WorkQueue(this);
  if ((param_1 & 1) != 0) {
    FUN_006e4b8e(this,0x34);
  }
  return this;
}


/* ==== 00529290  __ExceptionPtrDestroy  size=16 ==== */

/* Library Function - Single Match
    void __cdecl __ExceptionPtrDestroy(void *)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void __cdecl __ExceptionPtrDestroy(void *param_1)

{
  FUN_00529bf0(0);
  return;
}


/* ==== 0052bc00  __ExceptionPtrDestroy  size=16 ==== */

/* Library Function - Single Match
    void __cdecl __ExceptionPtrDestroy(void *)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void __cdecl __ExceptionPtrDestroy(void *param_1)

{
  shared_ptr<_EXCEPTION_RECORD_const_> *in_stack_00000008;
  
  std::shared_ptr<_EXCEPTION_RECORD_const_>::_scalar_deleting_destructor_(in_stack_00000008,0);
  return;
}


/* ==== 0052c020  `scalar_deleting_destructor'  size=46 ==== */

/* Library Function - Single Match
    public: void * __thiscall std::shared_ptr<struct _EXCEPTION_RECORD const >::`scalar deleting
   destructor'(unsigned int)
   
   Libraries: Visual Studio 2019 Debug, Visual Studio 2019 Release */

void * __thiscall
std::shared_ptr<_EXCEPTION_RECORD_const_>::_scalar_deleting_destructor_
          (shared_ptr<_EXCEPTION_RECORD_const_> *this,uint param_1)

{
  FUN_004089b0();
  if ((param_1 & 1) != 0) {
    FUN_006e4b8e(this,0x2c);
  }
  return this;
}


/* ==== 0053bee0  _Yarn<char>  size=30 ==== */

/* Library Function - Single Match
    public: __thiscall std::_Yarn<char>::_Yarn<char>(void)
   
   Library: Visual Studio */

_Yarn<char> * __thiscall std::_Yarn<char>::_Yarn<char>(_Yarn<char> *this)

{
  *(undefined4 *)this = 0;
  this[4] = (_Yarn<char>)0x0;
  return this;
}


/* ==== 00582f10  __ExceptionPtrDestroy  size=16 ==== */

/* Library Function - Single Match
    void __cdecl __ExceptionPtrDestroy(void *)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void __cdecl __ExceptionPtrDestroy(void *param_1)

{
  CachedTransmogrifiedPrimary *in_stack_00000008;
  
  Concurrency::details::CachedTransmogrifiedPrimary::_scalar_deleting_destructor_
            (in_stack_00000008,0);
  return;
}


/* ==== 00583580  __ExceptionPtrDestroy  size=16 ==== */

/* Library Function - Single Match
    void __cdecl __ExceptionPtrDestroy(void *)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void __cdecl __ExceptionPtrDestroy(void *param_1)

{
  FUN_005835e0(0);
  return;
}


/* ==== 005835b0  `scalar_deleting_destructor'  size=46 ==== */

/* Library Function - Single Match
    public: virtual void * __thiscall Concurrency::details::CachedTransmogrifiedPrimary::`scalar
   deleting destructor'(unsigned int)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void * __thiscall
Concurrency::details::CachedTransmogrifiedPrimary::_scalar_deleting_destructor_
          (CachedTransmogrifiedPrimary *this,uint param_1)

{
  FUN_005437c0();
  if ((param_1 & 1) != 0) {
    FUN_006e4b8e(this,0x4c);
  }
  return this;
}


/* ==== 00584010  __ExceptionPtrDestroy  size=16 ==== */

/* Library Function - Single Match
    void __cdecl __ExceptionPtrDestroy(void *)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void __cdecl __ExceptionPtrDestroy(void *param_1)

{
  WorkQueue *in_stack_00000008;
  
  Concurrency::details::WorkQueue::_scalar_deleting_destructor_(in_stack_00000008,0);
  return;
}


/* ==== 005840e0  `scalar_deleting_destructor'  size=46 ==== */

/* Library Function - Single Match
    public: void * __thiscall Concurrency::details::WorkQueue::`scalar deleting destructor'(unsigned
   int)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void * __thiscall
Concurrency::details::WorkQueue::_scalar_deleting_destructor_(WorkQueue *this,uint param_1)

{
  ~WorkQueue(this);
  if ((param_1 & 1) != 0) {
    FUN_006e4b8e(this,0x24);
  }
  return this;
}


/* ==== 005861b0  __ExceptionPtrDestroy  size=16 ==== */

/* Library Function - Single Match
    void __cdecl __ExceptionPtrDestroy(void *)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void __cdecl __ExceptionPtrDestroy(void *param_1)

{
  WorkQueue *in_stack_00000008;
  
  Concurrency::details::WorkQueue::_scalar_deleting_destructor_(in_stack_00000008,0);
  return;
}


/* ==== 005861c0  `scalar_deleting_destructor'  size=46 ==== */

/* Library Function - Single Match
    public: void * __thiscall Concurrency::details::WorkQueue::`scalar deleting destructor'(unsigned
   int)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void * __thiscall
Concurrency::details::WorkQueue::_scalar_deleting_destructor_(WorkQueue *this,uint param_1)

{
  ~WorkQueue(this);
  if ((param_1 & 1) != 0) {
    FUN_006e4b8e(this,0x5c);
  }
  return this;
}


/* ==== 0059a720  _Vector_val<>  size=52 ==== */

/* Library Function - Multiple Matches With Same Base Name
    public: __thiscall std::_Vector_val<struct std::_Simple_types<class std::shared_ptr<struct
   Concurrency::details::_Task_impl<unsigned char> > > >::_Vector_val<struct
   std::_Simple_types<class std::shared_ptr<struct Concurrency::details::_Task_impl<unsigned char> >
   > >(void)
    public: __thiscall std::_Vector_val<struct std::_Simple_types<class std::shared_ptr<struct
   Concurrency::details::_Task_impl<struct std::pair<unsigned char,class
   Concurrency::details::_CancellationTokenState *> > > > >::_Vector_val<struct
   std::_Simple_types<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct
   std::pair<unsigned char,class Concurrency::details::_CancellationTokenState *> > > > >(void)
   
   Libraries: Visual Studio 2012 Debug, Visual Studio 2012 Release */

int _Vector_val<>(void)

{
  int in_ECX;
  
  FUN_0040d650();
  *(undefined4 *)(in_ECX + 0x14) = 1;
  *(undefined4 *)(in_ECX + 0xc) = 1;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  return in_ECX;
}


/* ==== 005cc7b0  _ATL_WIN_MODULE70  size=37 ==== */

/* Library Function - Single Match
    public: __thiscall ATL::_ATL_WIN_MODULE70::_ATL_WIN_MODULE70(void)
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2008 Debug */

_ATL_WIN_MODULE70 * __thiscall ATL::_ATL_WIN_MODULE70::_ATL_WIN_MODULE70(_ATL_WIN_MODULE70 *this)

{
  FUN_0040d8b0();
  FUN_0040d8b0();
  return this;
}


/* ==== 005f4350  _Get_size_of_n<8>  size=42 ==== */

/* Library Function - Single Match
    unsigned int __cdecl std::_Get_size_of_n<8>(unsigned int)
   
   Libraries: Visual Studio 2019 Debug, Visual Studio 2019 Release */

uint __cdecl std::_Get_size_of_n<8>(uint param_1)

{
  if (0x3ffffff < param_1) {
    FUN_004015f0(0x3ffffff);
  }
  return param_1 << 6;
}


/* ==== 00600c00  __ExceptionPtrDestroy  size=16 ==== */

/* Library Function - Single Match
    void __cdecl __ExceptionPtrDestroy(void *)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void __cdecl __ExceptionPtrDestroy(void *param_1)

{
  FID_conflict__scalar_deleting_destructor_(0);
  return;
}


/* ==== 00600c10  __ExceptionPtrDestroy  size=16 ==== */

/* Library Function - Single Match
    void __cdecl __ExceptionPtrDestroy(void *)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void __cdecl __ExceptionPtrDestroy(void *param_1)

{
  FUN_006014f0(0);
  return;
}


/* ==== 00600c20  __ExceptionPtrDestroy  size=16 ==== */

/* Library Function - Single Match
    void __cdecl __ExceptionPtrDestroy(void *)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void __cdecl __ExceptionPtrDestroy(void *param_1)

{
  FID_conflict__scalar_deleting_destructor_(0);
  return;
}


/* ==== 00600c30  __ExceptionPtrDestroy  size=16 ==== */

/* Library Function - Single Match
    void __cdecl __ExceptionPtrDestroy(void *)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void __cdecl __ExceptionPtrDestroy(void *param_1)

{
  FUN_00601550(0);
  return;
}


/* ==== 00600c40  __ExceptionPtrDestroy  size=16 ==== */

/* Library Function - Single Match
    void __cdecl __ExceptionPtrDestroy(void *)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void __cdecl __ExceptionPtrDestroy(void *param_1)

{
  FID_conflict__scalar_deleting_destructor_(0);
  return;
}


/* ==== 00600c50  __ExceptionPtrDestroy  size=16 ==== */

/* Library Function - Single Match
    void __cdecl __ExceptionPtrDestroy(void *)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void __cdecl __ExceptionPtrDestroy(void *param_1)

{
  FUN_006015b0(0);
  return;
}


/* ==== 00600c60  __ExceptionPtrDestroy  size=16 ==== */

/* Library Function - Single Match
    void __cdecl __ExceptionPtrDestroy(void *)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void __cdecl __ExceptionPtrDestroy(void *param_1)

{
  FUN_006015e0(0);
  return;
}


/* ==== 00600c70  __ExceptionPtrDestroy  size=16 ==== */

/* Library Function - Single Match
    void __cdecl __ExceptionPtrDestroy(void *)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void __cdecl __ExceptionPtrDestroy(void *param_1)

{
  WorkQueue *in_stack_00000008;
  
  Concurrency::details::WorkQueue::_scalar_deleting_destructor_(in_stack_00000008,0);
  return;
}


/* ==== 00600c80  __ExceptionPtrDestroy  size=16 ==== */

/* Library Function - Single Match
    void __cdecl __ExceptionPtrDestroy(void *)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void __cdecl __ExceptionPtrDestroy(void *param_1)

{
  FUN_00601640(0);
  return;
}


/* ==== 00600c90  __ExceptionPtrDestroy  size=16 ==== */

/* Library Function - Single Match
    void __cdecl __ExceptionPtrDestroy(void *)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void __cdecl __ExceptionPtrDestroy(void *param_1)

{
  __ExceptionPtr *in_stack_00000008;
  
  __ExceptionPtr::_scalar_deleting_destructor_(in_stack_00000008,0);
  return;
}


/* ==== 00600ca0  __ExceptionPtrDestroy  size=16 ==== */

/* Library Function - Single Match
    void __cdecl __ExceptionPtrDestroy(void *)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void __cdecl __ExceptionPtrDestroy(void *param_1)

{
  __ExceptionPtr *in_stack_00000008;
  
  __ExceptionPtr::_scalar_deleting_destructor_(in_stack_00000008,0);
  return;
}


/* ==== 00600cc0  __ExceptionPtrDestroy  size=16 ==== */

/* Library Function - Single Match
    void __cdecl __ExceptionPtrDestroy(void *)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void __cdecl __ExceptionPtrDestroy(void *param_1)

{
  WorkQueue *in_stack_00000008;
  
  Concurrency::details::WorkQueue::_scalar_deleting_destructor_(in_stack_00000008,0);
  return;
}


/* ==== 00600cd0  __ExceptionPtrDestroy  size=16 ==== */

/* Library Function - Single Match
    void __cdecl __ExceptionPtrDestroy(void *)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void __cdecl __ExceptionPtrDestroy(void *param_1)

{
  FID_conflict__scalar_deleting_destructor_(0);
  return;
}


/* ==== 00600dd0  __ExceptionPtrDestroy  size=16 ==== */

/* Library Function - Single Match
    void __cdecl __ExceptionPtrDestroy(void *)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void __cdecl __ExceptionPtrDestroy(void *param_1)

{
  FUN_00601770(0);
  return;
}


/* ==== 00600de0  __ExceptionPtrDestroy  size=16 ==== */

/* Library Function - Single Match
    void __cdecl __ExceptionPtrDestroy(void *)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void __cdecl __ExceptionPtrDestroy(void *param_1)

{
  FUN_006017a0(0);
  return;
}


/* ==== 00600df0  __ExceptionPtrDestroy  size=16 ==== */

/* Library Function - Single Match
    void __cdecl __ExceptionPtrDestroy(void *)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void __cdecl __ExceptionPtrDestroy(void *param_1)

{
  shared_ptr<_EXCEPTION_RECORD_const_> *in_stack_00000008;
  
  std::shared_ptr<_EXCEPTION_RECORD_const_>::_scalar_deleting_destructor_(in_stack_00000008,0);
  return;
}


/* ==== 00600e00  __ExceptionPtrDestroy  size=16 ==== */

/* Library Function - Single Match
    void __cdecl __ExceptionPtrDestroy(void *)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void __cdecl __ExceptionPtrDestroy(void *param_1)

{
  FUN_00601800(0);
  return;
}


/* ==== 00600e10  __ExceptionPtrDestroy  size=16 ==== */

/* Library Function - Single Match
    void __cdecl __ExceptionPtrDestroy(void *)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void __cdecl __ExceptionPtrDestroy(void *param_1)

{
  WorkQueue *in_stack_00000008;
  
  Concurrency::details::WorkQueue::_scalar_deleting_destructor_(in_stack_00000008,0);
  return;
}


/* ==== 00600e20  __ExceptionPtrDestroy  size=16 ==== */

/* Library Function - Single Match
    void __cdecl __ExceptionPtrDestroy(void *)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void __cdecl __ExceptionPtrDestroy(void *param_1)

{
  CachedTransmogrifiedPrimary *in_stack_00000008;
  
  Concurrency::details::CachedTransmogrifiedPrimary::_scalar_deleting_destructor_
            (in_stack_00000008,0);
  return;
}


/* ==== 00600e30  __ExceptionPtrDestroy  size=16 ==== */

/* Library Function - Single Match
    void __cdecl __ExceptionPtrDestroy(void *)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void __cdecl __ExceptionPtrDestroy(void *param_1)

{
  shared_ptr<_EXCEPTION_RECORD_const_> *in_stack_00000008;
  
  std::shared_ptr<_EXCEPTION_RECORD_const_>::_scalar_deleting_destructor_(in_stack_00000008,0);
  return;
}


/* ==== 00600e40  __ExceptionPtrDestroy  size=16 ==== */

/* Library Function - Single Match
    void __cdecl __ExceptionPtrDestroy(void *)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void __cdecl __ExceptionPtrDestroy(void *param_1)

{
  WorkQueue *in_stack_00000008;
  
  Concurrency::details::WorkQueue::_scalar_deleting_destructor_(in_stack_00000008,0);
  return;
}


/* ==== 00600e50  __ExceptionPtrDestroy  size=16 ==== */

/* Library Function - Single Match
    void __cdecl __ExceptionPtrDestroy(void *)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void __cdecl __ExceptionPtrDestroy(void *param_1)

{
  WorkQueue *in_stack_00000008;
  
  Concurrency::details::WorkQueue::_scalar_deleting_destructor_(in_stack_00000008,0);
  return;
}


/* ==== 00600e60  __ExceptionPtrDestroy  size=16 ==== */

/* Library Function - Single Match
    void __cdecl __ExceptionPtrDestroy(void *)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void __cdecl __ExceptionPtrDestroy(void *param_1)

{
  WorkQueue *in_stack_00000008;
  
  Concurrency::details::WorkQueue::_scalar_deleting_destructor_(in_stack_00000008,0);
  return;
}


/* ==== 00600e80  __ExceptionPtrDestroy  size=16 ==== */

/* Library Function - Single Match
    void __cdecl __ExceptionPtrDestroy(void *)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void __cdecl __ExceptionPtrDestroy(void *param_1)

{
  WorkQueue *in_stack_00000008;
  
  Concurrency::details::WorkQueue::_scalar_deleting_destructor_(in_stack_00000008,0);
  return;
}


/* ==== 00600e90  __ExceptionPtrDestroy  size=16 ==== */

/* Library Function - Single Match
    void __cdecl __ExceptionPtrDestroy(void *)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void __cdecl __ExceptionPtrDestroy(void *param_1)

{
  FUN_00601990(0);
  return;
}


/* ==== 00600ea0  __ExceptionPtrDestroy  size=16 ==== */

/* Library Function - Single Match
    void __cdecl __ExceptionPtrDestroy(void *)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void __cdecl __ExceptionPtrDestroy(void *param_1)

{
  WorkQueue *in_stack_00000008;
  
  Concurrency::details::WorkQueue::_scalar_deleting_destructor_(in_stack_00000008,0);
  return;
}


/* ==== 00600ed0  __ExceptionPtrDestroy  size=16 ==== */

/* Library Function - Single Match
    void __cdecl __ExceptionPtrDestroy(void *)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void __cdecl __ExceptionPtrDestroy(void *param_1)

{
  FUN_00601a70(0);
  return;
}


/* ==== 00600ef0  __ExceptionPtrDestroy  size=16 ==== */

/* Library Function - Single Match
    void __cdecl __ExceptionPtrDestroy(void *)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void __cdecl __ExceptionPtrDestroy(void *param_1)

{
  WorkQueue *in_stack_00000008;
  
  Concurrency::details::WorkQueue::_scalar_deleting_destructor_(in_stack_00000008,0);
  return;
}


/* ==== 00600f20  __ExceptionPtrDestroy  size=16 ==== */

/* Library Function - Single Match
    void __cdecl __ExceptionPtrDestroy(void *)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void __cdecl __ExceptionPtrDestroy(void *param_1)

{
  WorkQueue *in_stack_00000008;
  
  Concurrency::details::WorkQueue::_scalar_deleting_destructor_(in_stack_00000008,0);
  return;
}


/* ==== 00601610  `scalar_deleting_destructor'  size=46 ==== */

/* Library Function - Single Match
    public: void * __thiscall Concurrency::details::WorkQueue::`scalar deleting destructor'(unsigned
   int)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void * __thiscall
Concurrency::details::WorkQueue::_scalar_deleting_destructor_(WorkQueue *this,uint param_1)

{
  ~WorkQueue(this);
  if ((param_1 & 1) != 0) {
    FUN_006e4b8e(this,0x34);
  }
  return this;
}


/* ==== 00601670  `scalar_deleting_destructor'  size=46 ==== */

/* Library Function - Single Match
    public: void * __thiscall __ExceptionPtr::`scalar deleting destructor'(unsigned int)
   
   Libraries: Visual Studio 2015 Debug, Visual Studio 2015 Release, Visual Studio 2017 Debug, Visual
   Studio 2017 Release */

void * __thiscall __ExceptionPtr::_scalar_deleting_destructor_(__ExceptionPtr *this,uint param_1)

{
  Concurrency::details::_RunAllParam<unsigned_char>::~_RunAllParam<unsigned_char>
            ((_RunAllParam<unsigned_char> *)this);
  if ((param_1 & 1) != 0) {
    FUN_006e4b8e(this,0x54);
  }
  return this;
}


/* ==== 006016a0  `scalar_deleting_destructor'  size=46 ==== */

/* Library Function - Single Match
    public: void * __thiscall __ExceptionPtr::`scalar deleting destructor'(unsigned int)
   
   Libraries: Visual Studio 2015 Debug, Visual Studio 2015 Release, Visual Studio 2017 Debug, Visual
   Studio 2017 Release */

void * __thiscall __ExceptionPtr::_scalar_deleting_destructor_(__ExceptionPtr *this,uint param_1)

{
  Concurrency::details::_RunAllParam<unsigned_char>::~_RunAllParam<unsigned_char>
            ((_RunAllParam<unsigned_char> *)this);
  if ((param_1 & 1) != 0) {
    FUN_006e4b8e(this,0x54);
  }
  return this;
}


/* ==== 00601710  `scalar_deleting_destructor'  size=46 ==== */

/* Library Function - Single Match
    public: void * __thiscall Concurrency::details::WorkQueue::`scalar deleting destructor'(unsigned
   int)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void * __thiscall
Concurrency::details::WorkQueue::_scalar_deleting_destructor_(WorkQueue *this,uint param_1)

{
  ~WorkQueue(this);
  if ((param_1 & 1) != 0) {
    FUN_006e4b8e(this,0x40);
  }
  return this;
}


/* ==== 006017d0  `scalar_deleting_destructor'  size=46 ==== */

/* Library Function - Single Match
    public: void * __thiscall std::shared_ptr<struct _EXCEPTION_RECORD const >::`scalar deleting
   destructor'(unsigned int)
   
   Libraries: Visual Studio 2019 Debug, Visual Studio 2019 Release */

void * __thiscall
std::shared_ptr<_EXCEPTION_RECORD_const_>::_scalar_deleting_destructor_
          (shared_ptr<_EXCEPTION_RECORD_const_> *this,uint param_1)

{
  FUN_00401ea0();
  if ((param_1 & 1) != 0) {
    FUN_006e4b8e(this,0x24);
  }
  return this;
}


/* ==== 00601830  `scalar_deleting_destructor'  size=46 ==== */

/* Library Function - Single Match
    public: virtual void * __thiscall Concurrency::details::CachedTransmogrifiedPrimary::`scalar
   deleting destructor'(unsigned int)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void * __thiscall
Concurrency::details::CachedTransmogrifiedPrimary::_scalar_deleting_destructor_
          (CachedTransmogrifiedPrimary *this,uint param_1)

{
  _RunAllParam<unsigned_char>::~_RunAllParam<unsigned_char>((_RunAllParam<unsigned_char> *)this);
  if ((param_1 & 1) != 0) {
    FUN_006e4b8e(this,0x4c);
  }
  return this;
}


/* ==== 00601860  `scalar_deleting_destructor'  size=46 ==== */

/* Library Function - Single Match
    public: void * __thiscall std::shared_ptr<struct _EXCEPTION_RECORD const >::`scalar deleting
   destructor'(unsigned int)
   
   Libraries: Visual Studio 2019 Debug, Visual Studio 2019 Release */

void * __thiscall
std::shared_ptr<_EXCEPTION_RECORD_const_>::_scalar_deleting_destructor_
          (shared_ptr<_EXCEPTION_RECORD_const_> *this,uint param_1)

{
  FUN_004089b0();
  if ((param_1 & 1) != 0) {
    FUN_006e4b8e(this,0x34);
  }
  return this;
}


/* ==== 00601890  `scalar_deleting_destructor'  size=46 ==== */

/* Library Function - Single Match
    public: void * __thiscall Concurrency::details::WorkQueue::`scalar deleting destructor'(unsigned
   int)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void * __thiscall
Concurrency::details::WorkQueue::_scalar_deleting_destructor_(WorkQueue *this,uint param_1)

{
  ~WorkQueue(this);
  if ((param_1 & 1) != 0) {
    FUN_006e4b8e(this,0x24);
  }
  return this;
}


/* ==== 006018c0  `scalar_deleting_destructor'  size=46 ==== */

/* Library Function - Single Match
    public: void * __thiscall Concurrency::details::WorkQueue::`scalar deleting destructor'(unsigned
   int)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void * __thiscall
Concurrency::details::WorkQueue::_scalar_deleting_destructor_(WorkQueue *this,uint param_1)

{
  ~WorkQueue(this);
  if ((param_1 & 1) != 0) {
    FUN_006e4b8e(this,0x30);
  }
  return this;
}


/* ==== 006018f0  `scalar_deleting_destructor'  size=46 ==== */

/* Library Function - Single Match
    public: void * __thiscall Concurrency::details::WorkQueue::`scalar deleting destructor'(unsigned
   int)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void * __thiscall
Concurrency::details::WorkQueue::_scalar_deleting_destructor_(WorkQueue *this,uint param_1)

{
  ~WorkQueue(this);
  if ((param_1 & 1) != 0) {
    FUN_006e4b8e(this,0x74);
  }
  return this;
}


/* ==== 00601920  `scalar_deleting_destructor'  size=49 ==== */

/* Library Function - Single Match
    public: virtual void * __thiscall Concurrency::details::_AsyncTaskCollection::`scalar deleting
   destructor'(unsigned int)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void * __thiscall
Concurrency::details::_AsyncTaskCollection::_scalar_deleting_destructor_
          (_AsyncTaskCollection *this,uint param_1)

{
  ~_AsyncTaskCollection(this);
  if ((param_1 & 1) != 0) {
    FUN_006e4b8e(this,0x19c);
  }
  return this;
}


/* ==== 00601960  `scalar_deleting_destructor'  size=46 ==== */

/* Library Function - Single Match
    public: void * __thiscall Concurrency::details::WorkQueue::`scalar deleting destructor'(unsigned
   int)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void * __thiscall
Concurrency::details::WorkQueue::_scalar_deleting_destructor_(WorkQueue *this,uint param_1)

{
  ~WorkQueue(this);
  if ((param_1 & 1) != 0) {
    FUN_006e4b8e(this,0x20);
  }
  return this;
}


/* ==== 006019c0  `scalar_deleting_destructor'  size=46 ==== */

/* Library Function - Single Match
    public: void * __thiscall Concurrency::details::WorkQueue::`scalar deleting destructor'(unsigned
   int)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void * __thiscall
Concurrency::details::WorkQueue::_scalar_deleting_destructor_(WorkQueue *this,uint param_1)

{
  ~WorkQueue(this);
  if ((param_1 & 1) != 0) {
    FUN_006e4b8e(this,0x30);
  }
  return this;
}


/* ==== 006019f0  `scalar_deleting_destructor'  size=49 ==== */

/* Library Function - Single Match
    public: virtual void * __thiscall Concurrency::details::_AsyncTaskCollection::`scalar deleting
   destructor'(unsigned int)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void * __thiscall
Concurrency::details::_AsyncTaskCollection::_scalar_deleting_destructor_
          (_AsyncTaskCollection *this,uint param_1)

{
  ~_AsyncTaskCollection(this);
  if ((param_1 & 1) != 0) {
    FUN_006e4b8e(this,0x18c);
  }
  return this;
}


/* ==== 00601a30  `scalar_deleting_destructor'  size=49 ==== */

/* Library Function - Single Match
    public: virtual void * __thiscall Concurrency::details::_AsyncTaskCollection::`scalar deleting
   destructor'(unsigned int)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void * __thiscall
Concurrency::details::_AsyncTaskCollection::_scalar_deleting_destructor_
          (_AsyncTaskCollection *this,uint param_1)

{
  ~_AsyncTaskCollection(this);
  if ((param_1 & 1) != 0) {
    FUN_006e4b8e(this,0x14c);
  }
  return this;
}


/* ==== 00601aa0  `scalar_deleting_destructor'  size=49 ==== */

/* Library Function - Single Match
    public: virtual void * __thiscall Concurrency::details::_AsyncTaskCollection::`scalar deleting
   destructor'(unsigned int)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void * __thiscall
Concurrency::details::_AsyncTaskCollection::_scalar_deleting_destructor_
          (_AsyncTaskCollection *this,uint param_1)

{
  ~_AsyncTaskCollection(this);
  if ((param_1 & 1) != 0) {
    FUN_006e4b8e(this,0x134);
  }
  return this;
}


/* ==== 00601ae0  `scalar_deleting_destructor'  size=46 ==== */

/* Library Function - Single Match
    public: void * __thiscall Concurrency::details::WorkQueue::`scalar deleting destructor'(unsigned
   int)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void * __thiscall
Concurrency::details::WorkQueue::_scalar_deleting_destructor_(WorkQueue *this,uint param_1)

{
  ~WorkQueue(this);
  if ((param_1 & 1) != 0) {
    FUN_006e4b8e(this,0x48);
  }
  return this;
}


/* ==== 00601b10  `scalar_deleting_destructor'  size=49 ==== */

/* Library Function - Single Match
    public: virtual void * __thiscall Concurrency::details::_AsyncTaskCollection::`scalar deleting
   destructor'(unsigned int)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void * __thiscall
Concurrency::details::_AsyncTaskCollection::_scalar_deleting_destructor_
          (_AsyncTaskCollection *this,uint param_1)

{
  ~_AsyncTaskCollection(this);
  if ((param_1 & 1) != 0) {
    FUN_006e4b8e(this,0x158);
  }
  return this;
}


/* ==== 00601b50  `scalar_deleting_destructor'  size=49 ==== */

/* Library Function - Single Match
    public: virtual void * __thiscall Concurrency::details::_AsyncTaskCollection::`scalar deleting
   destructor'(unsigned int)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void * __thiscall
Concurrency::details::_AsyncTaskCollection::_scalar_deleting_destructor_
          (_AsyncTaskCollection *this,uint param_1)

{
  ~_AsyncTaskCollection(this);
  if ((param_1 & 1) != 0) {
    FUN_006e4b8e(this,0x2c8);
  }
  return this;
}


/* ==== 00601b90  `scalar_deleting_destructor'  size=46 ==== */

/* Library Function - Single Match
    public: void * __thiscall Concurrency::details::WorkQueue::`scalar deleting destructor'(unsigned
   int)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void * __thiscall
Concurrency::details::WorkQueue::_scalar_deleting_destructor_(WorkQueue *this,uint param_1)

{
  ~WorkQueue(this);
  if ((param_1 & 1) != 0) {
    FUN_006e4b8e(this,0x58);
  }
  return this;
}


/* ==== 00601bc0  `scalar_deleting_destructor'  size=49 ==== */

/* Library Function - Single Match
    public: virtual void * __thiscall Concurrency::details::_AsyncTaskCollection::`scalar deleting
   destructor'(unsigned int)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void * __thiscall
Concurrency::details::_AsyncTaskCollection::_scalar_deleting_destructor_
          (_AsyncTaskCollection *this,uint param_1)

{
  ~_AsyncTaskCollection(this);
  if ((param_1 & 1) != 0) {
    FUN_006e4b8e(this,0xb4);
  }
  return this;
}


/* ==== 00601c00  `scalar_deleting_destructor'  size=49 ==== */

/* Library Function - Single Match
    public: virtual void * __thiscall Concurrency::details::_AsyncTaskCollection::`scalar deleting
   destructor'(unsigned int)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void * __thiscall
Concurrency::details::_AsyncTaskCollection::_scalar_deleting_destructor_
          (_AsyncTaskCollection *this,uint param_1)

{
  ~_AsyncTaskCollection(this);
  if ((param_1 & 1) != 0) {
    FUN_006e4b8e(this,0x288);
  }
  return this;
}


/* ==== 00601c40  `scalar_deleting_destructor'  size=49 ==== */

/* Library Function - Single Match
    public: virtual void * __thiscall Concurrency::details::_AsyncTaskCollection::`scalar deleting
   destructor'(unsigned int)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void * __thiscall
Concurrency::details::_AsyncTaskCollection::_scalar_deleting_destructor_
          (_AsyncTaskCollection *this,uint param_1)

{
  ~_AsyncTaskCollection(this);
  if ((param_1 & 1) != 0) {
    FUN_006e4b8e(this,0x51c);
  }
  return this;
}


/* ==== 00601c80  `scalar_deleting_destructor'  size=49 ==== */

/* Library Function - Single Match
    public: virtual void * __thiscall Concurrency::details::_AsyncTaskCollection::`scalar deleting
   destructor'(unsigned int)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void * __thiscall
Concurrency::details::_AsyncTaskCollection::_scalar_deleting_destructor_
          (_AsyncTaskCollection *this,uint param_1)

{
  ~_AsyncTaskCollection(this);
  if ((param_1 & 1) != 0) {
    FUN_006e4b8e(this,0x1b8);
  }
  return this;
}


/* ==== 00601cc0  `scalar_deleting_destructor'  size=49 ==== */

/* Library Function - Single Match
    public: virtual void * __thiscall Concurrency::details::_AsyncTaskCollection::`scalar deleting
   destructor'(unsigned int)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void * __thiscall
Concurrency::details::_AsyncTaskCollection::_scalar_deleting_destructor_
          (_AsyncTaskCollection *this,uint param_1)

{
  ~_AsyncTaskCollection(this);
  if ((param_1 & 1) != 0) {
    FUN_006e4b8e(this,0x1a0);
  }
  return this;
}


/* ==== 00601d00  `scalar_deleting_destructor'  size=49 ==== */

/* Library Function - Single Match
    public: virtual void * __thiscall Concurrency::details::_AsyncTaskCollection::`scalar deleting
   destructor'(unsigned int)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void * __thiscall
Concurrency::details::_AsyncTaskCollection::_scalar_deleting_destructor_
          (_AsyncTaskCollection *this,uint param_1)

{
  ~_AsyncTaskCollection(this);
  if ((param_1 & 1) != 0) {
    FUN_006e4b8e(this,0x2b8);
  }
  return this;
}


/* ==== 00601d40  `scalar_deleting_destructor'  size=49 ==== */

/* Library Function - Single Match
    public: virtual void * __thiscall Concurrency::details::_AsyncTaskCollection::`scalar deleting
   destructor'(unsigned int)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void * __thiscall
Concurrency::details::_AsyncTaskCollection::_scalar_deleting_destructor_
          (_AsyncTaskCollection *this,uint param_1)

{
  ~_AsyncTaskCollection(this);
  if ((param_1 & 1) != 0) {
    FUN_006e4b8e(this,0x228);
  }
  return this;
}


/* ==== 00601d80  `scalar_deleting_destructor'  size=49 ==== */

/* Library Function - Single Match
    public: virtual void * __thiscall Concurrency::details::_AsyncTaskCollection::`scalar deleting
   destructor'(unsigned int)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void * __thiscall
Concurrency::details::_AsyncTaskCollection::_scalar_deleting_destructor_
          (_AsyncTaskCollection *this,uint param_1)

{
  ~_AsyncTaskCollection(this);
  if ((param_1 & 1) != 0) {
    FUN_006e4b8e(this,0x80);
  }
  return this;
}


/* ==== 00601dc0  `scalar_deleting_destructor'  size=49 ==== */

/* Library Function - Single Match
    public: virtual void * __thiscall Concurrency::details::_AsyncTaskCollection::`scalar deleting
   destructor'(unsigned int)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void * __thiscall
Concurrency::details::_AsyncTaskCollection::_scalar_deleting_destructor_
          (_AsyncTaskCollection *this,uint param_1)

{
  ~_AsyncTaskCollection(this);
  if ((param_1 & 1) != 0) {
    FUN_006e4b8e(this,0x130);
  }
  return this;
}


/* ==== 00601e00  `scalar_deleting_destructor'  size=49 ==== */

/* Library Function - Single Match
    public: virtual void * __thiscall Concurrency::details::_AsyncTaskCollection::`scalar deleting
   destructor'(unsigned int)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void * __thiscall
Concurrency::details::_AsyncTaskCollection::_scalar_deleting_destructor_
          (_AsyncTaskCollection *this,uint param_1)

{
  ~_AsyncTaskCollection(this);
  if ((param_1 & 1) != 0) {
    FUN_006e4b8e(this,0x1c4);
  }
  return this;
}


/* ==== 0068ddb0  `scalar_deleting_destructor'  size=46 ==== */

/* Library Function - Single Match
    public: virtual void * __thiscall Concurrency::details::CachedTransmogrifiedPrimary::`scalar
   deleting destructor'(unsigned int)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void * __thiscall
Concurrency::details::CachedTransmogrifiedPrimary::_scalar_deleting_destructor_
          (CachedTransmogrifiedPrimary *this,uint param_1)

{
  FUN_004bcce0();
  if ((param_1 & 1) != 0) {
    FUN_006e4b8e(this,0x4c);
  }
  return this;
}


/* ==== 006e4a3d  _Syserror_map  size=37 ==== */

/* Library Function - Single Match
    char const * __cdecl std::_Syserror_map(int)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

char * __cdecl std::_Syserror_map(int param_1)

{
  int *piVar1;
  
  piVar1 = &DAT_007304f0;
  do {
    if (*piVar1 == param_1) {
      return (char *)piVar1[1];
    }
    piVar1 = piVar1 + 2;
  } while (piVar1 != (int *)"success");
  return "unknown error";
}


/* ==== 006e4aa0  __Xtime_get_ticks  size=39 ==== */

/* Library Function - Single Match
    __Xtime_get_ticks
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8 __Xtime_get_ticks(void)

{
  uint local_c;
  int local_8;
  
  FUN_006e4afb(&local_c);
  return CONCAT44((local_8 + -0x19db1de) - (uint)(local_c < 0xd53e8000),local_c + 0x2ac18000);
}


/* ==== 006e4b50  __security_check_cookie  size=14 ==== */

/* WARNING: This is an inlined function */

void __fastcall __security_check_cookie(uintptr_t _StackCookie)

{
  if (_StackCookie == DAT_007c5940) {
    return;
  }
  FUN_006e502c();
  return;
}


/* ==== 006e4c9f  `eh_vector_destructor_iterator'  size=105 ==== */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    void __stdcall `eh vector destructor iterator'(void *,unsigned int,unsigned int,void
   (__thiscall*)(void *))
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void _eh_vector_destructor_iterator_
               (void *param_1,uint param_2,uint param_3,_func_void_void_ptr *param_4)

{
  void *in_stack_ffffffd0;
  undefined4 local_14;
  
  while( true ) {
    if (param_3 == 0) break;
    guard_check_icall();
    (*param_4)(in_stack_ffffffd0);
    param_3 = param_3 - 1;
  }
  FUN_006e4d14();
  ExceptionList = local_14;
  return;
}


/* ==== 006e4d24  __ArrayUnwind  size=76 ==== */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    void __stdcall __ArrayUnwind(void *,unsigned int,unsigned int,void (__thiscall*)(void *))
   
   Library: Visual Studio 2019 Release */

void __ArrayUnwind(void *param_1,uint param_2,uint param_3,_func_void_void_ptr *param_4)

{
  uint uVar1;
  void *in_stack_ffffffc4;
  undefined4 local_14;
  
  uVar1 = 0;
  while( true ) {
    if (uVar1 == param_3) break;
    guard_check_icall();
    (*param_4)(in_stack_ffffffc4);
    uVar1 = uVar1 + 1;
  }
  ExceptionList = local_14;
  return;
}


/* ==== 006e4df6  ___scrt_acquire_startup_lock  size=50 ==== */

/* Library Function - Single Match
    ___scrt_acquire_startup_lock
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined4 ___scrt_acquire_startup_lock(void)

{
  void *pvVar1;
  int iVar2;
  void *pvVar3;
  
  iVar2 = ___scrt_is_ucrt_dll_in_use();
  if (iVar2 != 0) {
    while( true ) {
      pvVar3 = (void *)0x0;
      LOCK();
      pvVar1 = StackBase;
      if (DAT_007c8850 != (void *)0x0) {
        pvVar3 = DAT_007c8850;
        pvVar1 = DAT_007c8850;
      }
      DAT_007c8850 = pvVar1;
      UNLOCK();
      if (pvVar3 == (void *)0x0) break;
      if (StackBase == pvVar3) {
        return 1;
      }
    }
  }
  return 0;
}


/* ==== 006e4e28  ___scrt_initialize_crt  size=57 ==== */

/* Library Function - Single Match
    ___scrt_initialize_crt
   
   Library: Visual Studio 2019 Release */

undefined1 ___scrt_initialize_crt(int param_1)

{
  char cVar1;
  
  if (param_1 == 0) {
    DAT_007c8854 = 1;
  }
  FUN_006e57cc();
  cVar1 = ___vcrt_initialize();
  if (cVar1 != '\0') {
    cVar1 = ___acrt_initialize();
    if (cVar1 != '\0') {
      return 1;
    }
    ___vcrt_uninitialize(0);
  }
  return 0;
}


/* ==== 006e4e61  ___scrt_initialize_onexit_tables  size=134 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    ___scrt_initialize_onexit_tables
   
   Library: Visual Studio 2019 Release */

undefined4 ___scrt_initialize_onexit_tables(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (DAT_007c8855 != '\0') {
    return 1;
  }
  if ((param_1 != 0) && (param_1 != 1)) {
                    /* WARNING: Subroutine does not return */
    FUN_006e5d45(5);
  }
  iVar1 = ___scrt_is_ucrt_dll_in_use();
  if ((iVar1 == 0) || (param_1 != 0)) {
    DAT_007c8858 = 0xffffffff;
    _DAT_007c885c = 0xffffffff;
    _DAT_007c8860 = 0xffffffff;
    _DAT_007c8864 = 0xffffffff;
    _DAT_007c8868 = 0xffffffff;
    _DAT_007c886c = 0xffffffff;
LAB_006e4ed4:
    DAT_007c8855 = '\x01';
    uVar2 = 1;
  }
  else {
    iVar1 = __initialize_onexit_table(&DAT_007c8858);
    if (iVar1 == 0) {
      iVar1 = __initialize_onexit_table(&DAT_007c8864);
      if (iVar1 == 0) goto LAB_006e4ed4;
    }
    uVar2 = 0;
  }
  return uVar2;
}


/* ==== 006e4ee8  ___scrt_is_nonwritable_in_current_image  size=126 ==== */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    ___scrt_is_nonwritable_in_current_image
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined4 ___scrt_is_nonwritable_in_current_image(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  void *local_14;
  
  iVar1 = FUN_006e4db4(0x400000,param_1 + -0x400000);
  if ((iVar1 == 0) || (*(int *)(iVar1 + 0x24) < 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  ExceptionList = local_14;
  return uVar2;
}


/* ==== 006e4f7c  ___scrt_release_startup_lock  size=29 ==== */

/* Library Function - Single Match
    ___scrt_release_startup_lock
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

int ___scrt_release_startup_lock(char param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = ___scrt_is_ucrt_dll_in_use();
  iVar1 = DAT_007c8850;
  if ((iVar2 != 0) && (param_1 == '\0')) {
    LOCK();
    DAT_007c8850 = 0;
    UNLOCK();
    iVar2 = iVar1;
  }
  return iVar2;
}


/* ==== 006e4f99  ___scrt_uninitialize_crt  size=40 ==== */

/* Library Function - Single Match
    ___scrt_uninitialize_crt
   
   Library: Visual Studio 2019 Release */

undefined1 ___scrt_uninitialize_crt(undefined4 param_1,char param_2)

{
  if ((DAT_007c8854 == '\0') || (param_2 == '\0')) {
    ___acrt_uninitialize(param_1);
    ___vcrt_uninitialize(param_1);
  }
  return 1;
}


/* ==== 006e5212  `eh_vector_constructor_iterator'  size=90 ==== */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    void __stdcall `eh vector constructor iterator'(void *,unsigned int,unsigned int,void
   (__thiscall*)(void *),void (__thiscall*)(void *))
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void _eh_vector_constructor_iterator_
               (void *param_1,uint param_2,uint param_3,_func_void_void_ptr *param_4,
               _func_void_void_ptr *param_5)

{
  uint uVar1;
  void *in_stack_ffffffcc;
  undefined4 local_14;
  
  for (uVar1 = 0; uVar1 != param_3; uVar1 = uVar1 + 1) {
    guard_check_icall();
    (*param_4)(in_stack_ffffffcc);
  }
  FUN_006e5272();
  ExceptionList = local_14;
  return;
}


/* ==== 006e54e0  __alldiv  size=170 ==== */

/* Library Function - Single Match
    __alldiv
   
   Library: Visual Studio 2019 Release */

undefined8 __alldiv(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar10;
  char cVar11;
  uint uVar9;
  
  cVar11 = (int)param_2 < 0;
  if ((bool)cVar11) {
    bVar10 = param_1 != 0;
    param_1 = -param_1;
    param_2 = -(uint)bVar10 - param_2;
  }
  if ((int)param_4 < 0) {
    cVar11 = cVar11 + '\x01';
    bVar10 = param_3 != 0;
    param_3 = -param_3;
    param_4 = -(uint)bVar10 - param_4;
  }
  uVar7 = param_1;
  uVar3 = param_3;
  uVar5 = param_2;
  uVar9 = param_4;
  if (param_4 == 0) {
    uVar3 = param_2 / param_3;
    iVar4 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) /
                 (ulonglong)param_3);
  }
  else {
    do {
      uVar8 = uVar9 >> 1;
      uVar3 = (uint)(CONCAT14((uVar9 & 1) != 0,uVar3) >> 1);
      uVar6 = uVar5 >> 1;
      uVar7 = (uint)(CONCAT14((uVar5 & 1) != 0,uVar7) >> 1);
      uVar5 = uVar6;
      uVar9 = uVar8;
    } while (uVar8 != 0);
    uVar1 = CONCAT44(uVar6,uVar7) / (ulonglong)uVar3;
    iVar4 = (int)uVar1;
    lVar2 = (ulonglong)param_3 * (uVar1 & 0xffffffff);
    uVar3 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar7 = uVar3 + iVar4 * param_4;
    if (((CARRY4(uVar3,iVar4 * param_4)) || (param_2 < uVar7)) ||
       ((param_2 <= uVar7 && (param_1 < (uint)lVar2)))) {
      iVar4 = iVar4 + -1;
    }
    uVar3 = 0;
  }
  if (cVar11 == '\x01') {
    bVar10 = iVar4 != 0;
    iVar4 = -iVar4;
    uVar3 = -(uint)bVar10 - uVar3;
  }
  return CONCAT44(uVar3,iVar4);
}


/* ==== 006e5590  __allmul  size=52 ==== */

/* Library Function - Single Match
    __allmul
   
   Library: Visual Studio */

longlong __allmul(uint param_1,int param_2,uint param_3,int param_4)

{
  if (param_4 == 0 && param_2 == 0) {
    return (ulonglong)param_1 * (ulonglong)param_3;
  }
  return CONCAT44((int)((ulonglong)param_1 * (ulonglong)param_3 >> 0x20) +
                  param_2 * param_3 + param_1 * param_4,
                  (int)((ulonglong)param_1 * (ulonglong)param_3));
}


/* ==== 006e55d0  __alloca_probe_16  size=22 ==== */

/* WARNING: This is an inlined function */
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* Library Function - Single Match
    __alloca_probe_16
   
   Library: Visual Studio */

uint __alloca_probe_16(void)

{
  uint in_EAX;
  uint uVar1;
  
  uVar1 = 4 - in_EAX & 0xf;
  return in_EAX + uVar1 | -(uint)CARRY4(in_EAX,uVar1);
}


/* ==== 006e55e6  __alloca_probe_8  size=22 ==== */

/* WARNING: This is an inlined function */
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* Library Function - Single Match
    __alloca_probe_8
   
   Library: Visual Studio */

uint __alloca_probe_8(void)

{
  uint in_EAX;
  uint uVar1;
  
  uVar1 = 4 - in_EAX & 7;
  return in_EAX + uVar1 | -(uint)CARRY4(in_EAX,uVar1);
}


/* ==== 006e56c0  __allshr  size=33 ==== */

/* Library Function - Single Match
    __allshr
   
   Library: Visual Studio */

undefined8 __allshr(void)

{
  uint in_EAX;
  byte in_CL;
  int in_EDX;
  int iVar1;
  
  iVar1 = in_EDX >> 0x1f;
  if (0x3f < in_CL) {
    return CONCAT44(iVar1,iVar1);
  }
  if (in_CL < 0x20) {
    return CONCAT44(in_EDX >> (in_CL & 0x1f),
                    in_EAX >> (in_CL & 0x1f) | in_EDX << 0x20 - (in_CL & 0x1f));
  }
  return CONCAT44(iVar1,in_EDX >> (in_CL & 0x1f));
}


/* ==== 006e5710  __alloca_probe  size=43 ==== */

/* WARNING: This is an inlined function */
/* Library Function - Single Match
    __chkstk
   
   Library: Visual Studio 2019 Release */

void __alloca_probe(void)

{
  undefined1 *in_EAX;
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 unaff_retaddr;
  undefined1 auStack_4 [4];
  
  puVar2 = (undefined4 *)((int)&stack0x00000000 - (int)in_EAX & ~-(uint)(&stack0x00000000 < in_EAX))
  ;
  for (puVar1 = (undefined4 *)((uint)auStack_4 & 0xfffff000); puVar2 < puVar1;
      puVar1 = puVar1 + -0x400) {
  }
  *puVar2 = unaff_retaddr;
  return;
}


/* ==== 006e5af9  __EH_epilog3  size=20 ==== */

/* WARNING: This is an inlined function */
/* Library Function - Single Match
    __EH_epilog3
   
   Libraries: Visual Studio 2005, Visual Studio 2008, Visual Studio 2010, Visual Studio 2012 */

void __EH_epilog3(void)

{
  undefined4 *unaff_EBP;
  undefined4 unaff_retaddr;
  
  ExceptionList = (void *)unaff_EBP[-3];
  *unaff_EBP = unaff_retaddr;
  return;
}


/* ==== 006e5b1c  __EH_prolog3  size=51 ==== */

/* WARNING: This is an inlined function */
/* WARNING: Unable to track spacebase fully for stack */
/* Library Function - Single Match
    __EH_prolog3
   
   Libraries: Visual Studio 2005, Visual Studio 2008, Visual Studio 2010, Visual Studio 2012 */

void __EH_prolog3(int param_1)

{
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 unaff_retaddr;
  uint auStack_1c [5];
  undefined1 local_8 [8];
  
  param_1 = -param_1;
  *(undefined4 *)((int)auStack_1c + param_1 + 0x10) = unaff_EBX;
  *(undefined4 *)((int)auStack_1c + param_1 + 0xc) = unaff_ESI;
  *(undefined4 *)((int)auStack_1c + param_1 + 8) = unaff_EDI;
  *(uint *)((int)auStack_1c + param_1 + 4) = DAT_007c5940 ^ (uint)&stack0x00000004;
  *(undefined4 *)((int)auStack_1c + param_1) = unaff_retaddr;
  ExceptionList = local_8;
  return;
}


/* ==== 006e5b4f  __EH_prolog3_GS  size=54 ==== */

/* WARNING: This is an inlined function */
/* WARNING: Unable to track spacebase fully for stack */
/* Library Function - Single Match
    __EH_prolog3_GS
   
   Libraries: Visual Studio 2005, Visual Studio 2008, Visual Studio 2010, Visual Studio 2012 */

void __EH_prolog3_GS(int param_1)

{
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 unaff_retaddr;
  uint auStack_1c [5];
  undefined1 local_8 [8];
  
  param_1 = -param_1;
  *(undefined4 *)((int)auStack_1c + param_1 + 0x10) = unaff_EBX;
  *(undefined4 *)((int)auStack_1c + param_1 + 0xc) = unaff_ESI;
  *(undefined4 *)((int)auStack_1c + param_1 + 8) = unaff_EDI;
  *(uint *)((int)auStack_1c + param_1 + 4) = DAT_007c5940 ^ (uint)&stack0x00000004;
  *(undefined4 *)((int)auStack_1c + param_1) = unaff_retaddr;
  ExceptionList = local_8;
  return;
}


/* ==== 006e5b85  __EH_prolog3_catch  size=54 ==== */

/* WARNING: This is an inlined function */
/* WARNING: Unable to track spacebase fully for stack */
/* Library Function - Single Match
    __EH_prolog3_catch
   
   Libraries: Visual Studio 2005, Visual Studio 2008, Visual Studio 2010, Visual Studio 2012 */

void __EH_prolog3_catch(int param_1)

{
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 unaff_retaddr;
  uint auStack_1c [5];
  undefined1 local_8 [8];
  
  param_1 = -param_1;
  *(undefined4 *)((int)auStack_1c + param_1 + 0x10) = unaff_EBX;
  *(undefined4 *)((int)auStack_1c + param_1 + 0xc) = unaff_ESI;
  *(undefined4 *)((int)auStack_1c + param_1 + 8) = unaff_EDI;
  *(uint *)((int)auStack_1c + param_1 + 4) = DAT_007c5940 ^ (uint)&stack0x00000004;
  *(undefined4 *)((int)auStack_1c + param_1) = unaff_retaddr;
  ExceptionList = local_8;
  return;
}


/* ==== 006e5bc0  __aulldiv  size=104 ==== */

/* Library Function - Single Match
    __aulldiv
   
   Library: Visual Studio */

undefined8 __aulldiv(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar6;
  
  uVar9 = param_1;
  uVar6 = param_4;
  uVar7 = param_2;
  uVar3 = param_3;
  if (param_4 == 0) {
    uVar3 = param_2 / param_3;
    iVar4 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) /
                 (ulonglong)param_3);
  }
  else {
    do {
      uVar5 = uVar6 >> 1;
      uVar3 = (uint)(CONCAT14((uVar6 & 1) != 0,uVar3) >> 1);
      uVar8 = uVar7 >> 1;
      uVar9 = (uint)(CONCAT14((uVar7 & 1) != 0,uVar9) >> 1);
      uVar6 = uVar5;
      uVar7 = uVar8;
    } while (uVar5 != 0);
    uVar1 = CONCAT44(uVar8,uVar9) / (ulonglong)uVar3;
    iVar4 = (int)uVar1;
    lVar2 = (ulonglong)param_3 * (uVar1 & 0xffffffff);
    uVar3 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar9 = uVar3 + iVar4 * param_4;
    if (((CARRY4(uVar3,iVar4 * param_4)) || (param_2 < uVar9)) ||
       ((param_2 <= uVar9 && (param_1 < (uint)lVar2)))) {
      iVar4 = iVar4 + -1;
    }
    uVar3 = 0;
  }
  return CONCAT44(uVar3,iVar4);
}


/* ==== 006e5c30  __aullrem  size=117 ==== */

/* Library Function - Single Match
    __aullrem
   
   Library: Visual Studio */

undefined8 __aullrem(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  
  uVar4 = param_1;
  uVar9 = param_4;
  uVar10 = param_2;
  uVar3 = param_3;
  if (param_4 == 0) {
    iVar6 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) %
                 (ulonglong)param_3);
    iVar7 = 0;
  }
  else {
    do {
      uVar5 = uVar9 >> 1;
      uVar3 = (uint)(CONCAT14((uVar9 & 1) != 0,uVar3) >> 1);
      uVar8 = uVar10 >> 1;
      uVar4 = (uint)(CONCAT14((uVar10 & 1) != 0,uVar4) >> 1);
      uVar9 = uVar5;
      uVar10 = uVar8;
    } while (uVar5 != 0);
    uVar1 = CONCAT44(uVar8,uVar4) / (ulonglong)uVar3;
    uVar3 = (int)uVar1 * param_4;
    lVar2 = (uVar1 & 0xffffffff) * (ulonglong)param_3;
    uVar9 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar4 = (uint)lVar2;
    uVar10 = uVar9 + uVar3;
    if (((CARRY4(uVar9,uVar3)) || (param_2 < uVar10)) || ((param_2 <= uVar10 && (param_1 < uVar4))))
    {
      bVar11 = uVar4 < param_3;
      uVar4 = uVar4 - param_3;
      uVar10 = (uVar10 - param_4) - (uint)bVar11;
    }
    iVar6 = -(uVar4 - param_1);
    iVar7 = -(uint)(uVar4 - param_1 != 0) - ((uVar10 - param_2) - (uint)(uVar4 < param_1));
  }
  return CONCAT44(iVar7,iVar6);
}


/* ==== 006e5cf0  __SEH_prolog4  size=69 ==== */

/* WARNING: This is an inlined function */
/* WARNING: Unable to track spacebase fully for stack */
/* Library Function - Single Match
    __SEH_prolog4
   
   Library: Visual Studio */

void __SEH_prolog4(undefined4 param_1,int param_2)

{
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 unaff_retaddr;
  uint auStack_1c [5];
  undefined1 local_8 [8];
  
  param_2 = -param_2;
  *(undefined4 *)((int)auStack_1c + param_2 + 0x10) = unaff_EBX;
  *(undefined4 *)((int)auStack_1c + param_2 + 0xc) = unaff_ESI;
  *(undefined4 *)((int)auStack_1c + param_2 + 8) = unaff_EDI;
  *(uint *)((int)auStack_1c + param_2 + 4) = DAT_007c5940 ^ (uint)&stack0x00000008;
  *(undefined4 *)((int)auStack_1c + param_2) = unaff_retaddr;
  ExceptionList = local_8;
  return;
}


/* ==== 006e5d39  ___scrt_is_ucrt_dll_in_use  size=12 ==== */

/* Library Function - Single Match
    ___scrt_is_ucrt_dll_in_use
   
   Library: Visual Studio 2019 Release */

bool ___scrt_is_ucrt_dll_in_use(void)

{
  return DAT_007cde58 != 0;
}


/* ==== 006e5f88  ___security_init_cookie  size=75 ==== */

/* Library Function - Single Match
    ___security_init_cookie
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl ___security_init_cookie(void)

{
  if ((DAT_007c5940 == 0xbb40e64e) || ((DAT_007c5940 & 0xffff0000) == 0)) {
    DAT_007c5940 = FUN_006e5f3b();
    if (DAT_007c5940 == 0xbb40e64e) {
      DAT_007c5940 = 0xbb40e64f;
    }
    else if ((DAT_007c5940 & 0xffff0000) == 0) {
      DAT_007c5940 = DAT_007c5940 | (DAT_007c5940 | 0x4711) << 0x10;
    }
  }
  DAT_007c5980 = ~DAT_007c5940;
  return;
}


/* ==== 006e62b3  _JumpToContinuation  size=43 ==== */

/* Library Function - Single Match
    void __stdcall _JumpToContinuation(void *,struct EHRegistrationNode *)
   
   Library: Visual Studio */

void _JumpToContinuation(void *param_1,EHRegistrationNode *param_2)

{
  ExceptionList = *(void **)ExceptionList;
                    /* WARNING: Could not recover jumptable at 0x006e62dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_1)();
  return;
}


/* ==== 006e62e3  _UnwindNestedFrames  size=84 ==== */

/* Library Function - Single Match
    void __stdcall _UnwindNestedFrames(struct EHRegistrationNode *,struct EHExceptionRecord *)
   
   Libraries: Visual Studio 2012 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void _UnwindNestedFrames(EHRegistrationNode *param_1,EHExceptionRecord *param_2)

{
  void *pvVar1;
  
  pvVar1 = ExceptionList;
  RtlUnwind(param_1,(PVOID)0x6e630e,(PEXCEPTION_RECORD)param_2,(PVOID)0x0);
  *(uint *)(param_2 + 4) = *(uint *)(param_2 + 4) & 0xfffffffd;
  *(void **)pvVar1 = ExceptionList;
  ExceptionList = pvVar1;
  return;
}


/* ==== 006e6368  __CreateFrameInfo  size=36 ==== */

/* Library Function - Single Match
    __CreateFrameInfo
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined4 * __CreateFrameInfo(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  
  *param_1 = param_2;
  iVar1 = ___vcrt_getptd();
  param_1[1] = *(undefined4 *)(iVar1 + 0x24);
  iVar1 = ___vcrt_getptd();
  *(undefined4 **)(iVar1 + 0x24) = param_1;
  return param_1;
}


/* ==== 006e64a9  ___std_exception_copy  size=99 ==== */

/* Library Function - Single Match
    ___std_exception_copy
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void ___std_exception_copy(int *param_1,int *param_2)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  
  if (((char)param_1[1] == '\0') || (pcVar4 = (char *)*param_1, pcVar4 == (char *)0x0)) {
    *param_2 = *param_1;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  else {
    pcVar1 = pcVar4 + 1;
    do {
      cVar2 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar2 != '\0');
    iVar3 = FUN_006f191d(pcVar4 + (1 - (int)pcVar1));
    if (iVar3 != 0) {
      FUN_006f8593(iVar3,pcVar4 + (1 - (int)pcVar1),*param_1);
      *param_2 = iVar3;
      *(undefined1 *)(param_2 + 1) = 1;
    }
    FUN_006f1902(0);
  }
  return;
}


/* ==== 006e650c  ___std_exception_destroy  size=31 ==== */

/* Library Function - Single Match
    ___std_exception_destroy
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void ___std_exception_destroy(undefined4 *param_1)

{
  if (*(char *)(param_1 + 1) != '\0') {
    FUN_006f1902(*param_1);
  }
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}


/* ==== 006e652b  ___DestructExceptionObject  size=142 ==== */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    ___DestructExceptionObject
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void ___DestructExceptionObject(int *param_1)

{
  byte *pbVar1;
  int *piVar2;
  code *pcVar3;
  void *local_14;
  
  if ((((param_1 != (int *)0x0) && (*param_1 == -0x1f928c9d)) && (param_1[4] == 3)) &&
     ((((param_1[5] == 0x19930520 || (param_1[5] == 0x19930521)) || (param_1[5] == 0x19930522)) &&
      (pbVar1 = (byte *)param_1[7], pbVar1 != (byte *)0x0)))) {
    if (*(void **)(pbVar1 + 4) == (void *)0x0) {
      if (((*pbVar1 & 0x10) != 0) && (piVar2 = *(int **)param_1[6], piVar2 != (int *)0x0)) {
        pcVar3 = *(code **)(*piVar2 + 8);
        guard_check_icall(piVar2);
        (*pcVar3)();
      }
    }
    else {
      _CallMemberFunction0((void *)param_1[6],*(void **)(pbVar1 + 4));
    }
  }
  ExceptionList = local_14;
  return;
}


/* ==== 006e65cc  _CallMemberFunction0  size=13 ==== */

/* Library Function - Single Match
    void __stdcall _CallMemberFunction0(void * const,void * const)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void _CallMemberFunction0(void *param_1,void *param_2)

{
  (*param_2)();
  return;
}


/* ==== 006e6631  __IsExceptionObjectToBeDestroyed  size=38 ==== */

/* Library Function - Single Match
    __IsExceptionObjectToBeDestroyed
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined4 __IsExceptionObjectToBeDestroyed(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = ___vcrt_getptd();
  piVar1 = *(int **)(iVar2 + 0x24);
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return 1;
    }
    if (*piVar1 == param_1) break;
    piVar1 = (int *)piVar1[1];
  }
  return 0;
}


/* ==== 006e6657  ___AdjustPointer  size=37 ==== */

/* Library Function - Single Match
    ___AdjustPointer
   
   Library: Visual Studio 2019 Release */

int ___AdjustPointer(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_2[1];
  iVar2 = *param_2 + param_1;
  if (-1 < iVar1) {
    iVar2 = iVar2 + *(int *)(*(int *)(iVar1 + param_1) + param_2[2]) + iVar1;
  }
  return iVar2;
}


/* ==== 006e7150  _memset  size=346 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    _memset
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void * __cdecl _memset(void *_Dst,int _Val,size_t _Size)

{
  int iVar1;
  undefined1 *puVar2;
  int *piVar3;
  
  if (_Size == 0) {
    return _Dst;
  }
  iVar1 = (_Val & 0xffU) * 0x1010101;
  piVar3 = _Dst;
  if (0x20 < _Size) {
    if (0x7f < _Size) {
      puVar2 = _Dst;
      if ((_DAT_007c8b94 >> 1 & 1) != 0) {
        for (; _Size != 0; _Size = _Size - 1) {
          *puVar2 = (char)iVar1;
          puVar2 = puVar2 + 1;
        }
        return _Dst;
      }
      if ((DAT_007c5998 >> 1 & 1) == 0) goto joined_r0x006e725b;
      *(int *)_Dst = iVar1;
      *(int *)((int)_Dst + 4) = iVar1;
      *(int *)((int)_Dst + 8) = iVar1;
      *(int *)((int)_Dst + 0xc) = iVar1;
      piVar3 = (int *)((int)_Dst + 0x10U & 0xfffffff0);
      _Size = (int)_Dst + (_Size - (int)piVar3);
      if (0x80 < _Size) {
        do {
          *piVar3 = iVar1;
          piVar3[1] = iVar1;
          piVar3[2] = iVar1;
          piVar3[3] = iVar1;
          piVar3[4] = iVar1;
          piVar3[5] = iVar1;
          piVar3[6] = iVar1;
          piVar3[7] = iVar1;
          piVar3[8] = iVar1;
          piVar3[9] = iVar1;
          piVar3[10] = iVar1;
          piVar3[0xb] = iVar1;
          piVar3[0xc] = iVar1;
          piVar3[0xd] = iVar1;
          piVar3[0xe] = iVar1;
          piVar3[0xf] = iVar1;
          piVar3[0x10] = iVar1;
          piVar3[0x11] = iVar1;
          piVar3[0x12] = iVar1;
          piVar3[0x13] = iVar1;
          piVar3[0x14] = iVar1;
          piVar3[0x15] = iVar1;
          piVar3[0x16] = iVar1;
          piVar3[0x17] = iVar1;
          piVar3[0x18] = iVar1;
          piVar3[0x19] = iVar1;
          piVar3[0x1a] = iVar1;
          piVar3[0x1b] = iVar1;
          piVar3[0x1c] = iVar1;
          piVar3[0x1d] = iVar1;
          piVar3[0x1e] = iVar1;
          piVar3[0x1f] = iVar1;
          piVar3 = piVar3 + 0x20;
          _Size = _Size - 0x80;
        } while ((_Size & 0xffffff00) != 0);
        goto LAB_006e7220;
      }
    }
    if ((DAT_007c5998 >> 1 & 1) != 0) {
LAB_006e7220:
      if (0x1f < _Size) {
        do {
          *piVar3 = iVar1;
          piVar3[1] = iVar1;
          piVar3[2] = iVar1;
          piVar3[3] = iVar1;
          piVar3[4] = iVar1;
          piVar3[5] = iVar1;
          piVar3[6] = iVar1;
          piVar3[7] = iVar1;
          piVar3 = piVar3 + 8;
          _Size = _Size - 0x20;
        } while (0x1f < _Size);
        if ((_Size & 0x1f) == 0) {
          return _Dst;
        }
      }
      piVar3 = (int *)((int)piVar3 + (_Size - 0x20));
      *piVar3 = iVar1;
      piVar3[1] = iVar1;
      piVar3[2] = iVar1;
      piVar3[3] = iVar1;
      piVar3[4] = iVar1;
      piVar3[5] = iVar1;
      piVar3[6] = iVar1;
      piVar3[7] = iVar1;
      return _Dst;
    }
  }
joined_r0x006e725b:
  for (; (_Size & 3) != 0; _Size = _Size - 1) {
    *(char *)piVar3 = (char)iVar1;
    piVar3 = (int *)((int)piVar3 + 1);
  }
  if ((_Size & 4) != 0) {
    *piVar3 = iVar1;
    piVar3 = piVar3 + 1;
    _Size = _Size - 4;
  }
  for (; (_Size & 0xfffffff8) != 0; _Size = _Size - 8) {
    *piVar3 = iVar1;
    piVar3[1] = iVar1;
    piVar3 = piVar3 + 2;
  }
  return _Dst;
}


/* ==== 006e72b0  _memchr  size=173 ==== */

/* Library Function - Single Match
    _memchr
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void * __cdecl _memchr(void *_Buf,int _Val,size_t _MaxCount)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  char cVar5;
  uint uVar6;
  bool bVar7;
  
  if (_MaxCount == 0) {
    return (void *)0x0;
  }
  uVar6 = _Val & 0xff;
  while (((uint)_Buf & 3) != 0) {
    uVar2 = *(uint *)_Buf;
    _Buf = (void *)((int)_Buf + 1);
    if ((char)uVar2 == (char)_Val) goto LAB_006e7346;
    _MaxCount = _MaxCount - 1;
    if (_MaxCount == 0) {
      return (void *)0x0;
    }
  }
  uVar2 = _MaxCount - 4;
  if (3 < _MaxCount) {
    uVar6 = uVar6 * 0x1010101;
    puVar4 = _Buf;
    do {
      _Buf = puVar4 + 1;
      if (((*puVar4 ^ uVar6 ^ 0xffffffff ^ (*puVar4 ^ uVar6) + 0x7efefeff) & 0x81010100) != 0) {
        uVar1 = *puVar4;
        cVar5 = (char)uVar6;
        if ((char)uVar1 == cVar5) {
          return puVar4;
        }
        if ((char)(uVar1 >> 8) == cVar5) {
          return (char *)((int)puVar4 + 1);
        }
        if ((char)(uVar1 >> 0x10) == cVar5) {
          return (char *)((int)puVar4 + 2);
        }
        if ((char)(uVar1 >> 0x18) == cVar5) goto LAB_006e7346;
      }
      bVar7 = 3 < uVar2;
      uVar2 = uVar2 - 4;
      puVar4 = _Buf;
    } while (bVar7);
  }
  iVar3 = uVar2 + 4;
  while( true ) {
    if (iVar3 == 0) {
      return (void *)0x0;
    }
    uVar2 = *(uint *)_Buf;
    _Buf = (void *)((int)_Buf + 1);
    if ((char)uVar2 == (char)uVar6) break;
    iVar3 = iVar3 + -1;
  }
LAB_006e7346:
  return (char *)((int)_Buf + -1);
}


/* ==== 006e73d0  _ValidateLocalCookies  size=50 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    _ValidateLocalCookies
   
   Library: Visual Studio 2019 Release */

void _ValidateLocalCookies(void)

{
  return;
}


/* ==== 006e7410  __except_handler4  size=350 ==== */

/* Library Function - Single Match
    __except_handler4
   
   Library: Visual Studio 2019 Release */

undefined4 __except_handler4(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  BOOL BVar5;
  undefined4 uVar6;
  int iVar7;
  int *local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  uint local_c;
  char local_5;
  
  local_5 = '\0';
  local_10 = 1;
  iVar3 = FUN_0070b1bd(*param_1);
  *param_1 = iVar3;
  iVar3 = param_2 + 0x10;
  local_c = *(uint *)(param_2 + 8) ^ DAT_007c5940;
  local_14 = iVar3;
  _ValidateLocalCookies(local_c,iVar3);
  ___except_validate_context_record(param_3);
  iVar7 = *(int *)(param_2 + 0xc);
  if ((*(byte *)(param_1 + 1) & 0x66) == 0) {
    local_20 = param_1;
    local_1c = param_3;
    *(int ***)(param_2 + -4) = &local_20;
    if (iVar7 == -2) {
      return local_10;
    }
    do {
      iVar4 = iVar7 * 3 + 4;
      iVar1 = *(int *)(local_c + iVar4 * 4);
      local_18 = local_c + iVar4 * 4;
      if (*(int *)(local_18 + 4) != 0) {
        iVar4 = _EH4_CallFilterFunc(*(int *)(local_18 + 4),iVar3);
        local_5 = '\x01';
        if (iVar4 < 0) {
          local_10 = 0;
          goto LAB_006e74d4;
        }
        if (0 < iVar4) {
          if ((*param_1 == -0x1f928c9d) &&
             (BVar5 = __IsNonwritableInCurrentImage((PBYTE)&PTR____DestructExceptionObject_00730e9c)
             , BVar5 != 0)) {
            guard_check_icall(param_1,1);
            ___DestructExceptionObject();
            iVar3 = local_14;
          }
          _EH4_GlobalUnwind2(param_2,param_1);
          if (*(int *)(param_2 + 0xc) != iVar7) {
            _EH4_LocalUnwind(param_2,iVar7,iVar3,&DAT_007c5940);
          }
          *(int *)(param_2 + 0xc) = iVar1;
          _ValidateLocalCookies(local_c,iVar3);
          _EH4_TransferToHandler(*(undefined4 *)(local_18 + 8),iVar3);
          pcVar2 = (code *)swi(3);
          uVar6 = (*pcVar2)();
          return uVar6;
        }
      }
      iVar7 = iVar1;
    } while (iVar1 != -2);
    if (local_5 == '\0') {
      return local_10;
    }
  }
  else {
    if (iVar7 == -2) {
      return local_10;
    }
    _EH4_LocalUnwind(param_2,0xfffffffe,iVar3,&DAT_007c5940);
  }
LAB_006e74d4:
  _ValidateLocalCookies(local_c,iVar3);
  return local_10;
}


/* ==== 006e756e  ___vcrt_initialize  size=31 ==== */

/* Library Function - Single Match
    ___vcrt_initialize
   
   Library: Visual Studio 2019 Release */

undefined1 ___vcrt_initialize(void)

{
  char cVar1;
  
  cVar1 = ___vcrt_initialize_locks();
  if (cVar1 != '\0') {
    cVar1 = ___vcrt_initialize_ptd();
    if (cVar1 != '\0') {
      return 1;
    }
    ___vcrt_uninitialize_locks();
  }
  return 0;
}


/* ==== 006e758d  ___vcrt_uninitialize  size=23 ==== */

/* Library Function - Single Match
    ___vcrt_uninitialize
   
   Library: Visual Studio 2019 Release */

undefined1 ___vcrt_uninitialize(char param_1)

{
  if (param_1 == '\0') {
    ___vcrt_uninitialize_ptd();
    ___vcrt_uninitialize_locks();
  }
  return 1;
}


/* ==== 006e75a4  ___std_type_info_compare  size=60 ==== */

/* Library Function - Single Match
    ___std_type_info_compare
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

uint ___std_type_info_compare(int param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  bool bVar4;
  
  if (param_1 != param_2) {
    pbVar3 = (byte *)(param_2 + 5);
    pbVar2 = (byte *)(param_1 + 5);
    do {
      bVar1 = *pbVar2;
      bVar4 = bVar1 < *pbVar3;
      if (bVar1 != *pbVar3) {
LAB_006e75d9:
        return -(uint)bVar4 | 1;
      }
      if (bVar1 == 0) {
        return 0;
      }
      bVar1 = pbVar2[1];
      bVar4 = bVar1 < pbVar3[1];
      if (bVar1 != pbVar3[1]) goto LAB_006e75d9;
      pbVar2 = pbVar2 + 2;
      pbVar3 = pbVar3 + 2;
    } while (bVar1 != 0);
  }
  return 0;
}


/* ==== 006e75fc  ___vcrt_getptd  size=14 ==== */

/* Library Function - Single Match
    ___vcrt_getptd
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void ___vcrt_getptd(void)

{
  code *pcVar1;
  int iVar2;
  BOOL BVar3;
  
  iVar2 = ___vcrt_getptd_noexit();
  if (iVar2 != 0) {
    return;
  }
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


/* ==== 006e760a  ___vcrt_getptd_noexit  size=146 ==== */

/* Library Function - Single Match
    ___vcrt_getptd_noexit
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int ___vcrt_getptd_noexit(void)

{
  DWORD dwErrCode;
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (DAT_007c59b0 == -1) {
    return 0;
  }
  dwErrCode = GetLastError();
  iVar1 = ___vcrt_FlsGetValue(DAT_007c59b0);
  if (iVar1 == -1) {
LAB_006e764a:
    iVar1 = 0;
    goto LAB_006e7690;
  }
  if (iVar1 != 0) goto LAB_006e7690;
  iVar1 = ___vcrt_FlsSetValue(DAT_007c59b0,0xffffffff);
  if (iVar1 == 0) goto LAB_006e764a;
  iVar2 = FUN_006f3f73(1,0x28);
  if (iVar2 == 0) {
LAB_006e7672:
    ___vcrt_FlsSetValue(DAT_007c59b0,0);
    iVar1 = 0;
    iVar3 = iVar2;
  }
  else {
    iVar1 = ___vcrt_FlsSetValue(DAT_007c59b0,iVar2);
    if (iVar1 == 0) goto LAB_006e7672;
    iVar3 = 0;
    iVar1 = iVar2;
  }
  FUN_006f1902(iVar3);
LAB_006e7690:
  SetLastError(dwErrCode);
  return iVar1;
}


/* ==== 006e769c  ___vcrt_initialize_ptd  size=51 ==== */

/* Library Function - Single Match
    ___vcrt_initialize_ptd
   
   Library: Visual Studio 2019 Release */

undefined4 ___vcrt_initialize_ptd(void)

{
  int iVar1;
  
  DAT_007c59b0 = ___vcrt_FlsAlloc(FUN_006e75e0);
  if (DAT_007c59b0 != -1) {
    iVar1 = ___vcrt_FlsSetValue(DAT_007c59b0,&DAT_007c8bac);
    if (iVar1 != 0) {
      return 1;
    }
    ___vcrt_uninitialize_ptd();
  }
  return 0;
}


/* ==== 006e76cf  ___vcrt_uninitialize_ptd  size=27 ==== */

/* Library Function - Single Match
    ___vcrt_uninitialize_ptd
   
   Library: Visual Studio 2019 Release */

undefined4 ___vcrt_uninitialize_ptd(void)

{
  if (DAT_007c59b0 != -1) {
    ___vcrt_FlsFree(DAT_007c59b0);
    DAT_007c59b0 = -1;
  }
  return 1;
}


/* ==== 006e7ea9  __InternalCxxFrameHandler<__FrameHandler3>  size=258 ==== */

/* Library Function - Single Match
    enum _EXCEPTION_DISPOSITION __cdecl __InternalCxxFrameHandler<class __FrameHandler3>(struct
   EHExceptionRecord *,struct EHRegistrationNode *,struct _CONTEXT *,void *,struct _s_FuncInfo const
   *,int,struct EHRegistrationNode *,unsigned char)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

_EXCEPTION_DISPOSITION __cdecl
__InternalCxxFrameHandler<__FrameHandler3>
          (EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,
          _s_FuncInfo *param_5,int param_6,EHRegistrationNode *param_7,uchar param_8)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  _EXCEPTION_DISPOSITION _Var4;
  undefined3 in_stack_00000021;
  
  ___except_validate_context_record(param_3);
  iVar2 = ___vcrt_getptd();
  if ((((*(int *)(iVar2 + 0x20) != 0) || (*(int *)param_1 == -0x1f928c9d)) ||
      (*(int *)param_1 == -0x7fffffda)) ||
     (((param_5->magicNumber_and_bbtFlags & 0x1fffffff) < 0x19930522 ||
      ((param_5->EHFlags & 1) == 0)))) {
    if (((byte)param_1[4] & 0x66) == 0) {
      if (((param_5->nTryBlocks != 0) ||
          ((uVar3 = param_5->magicNumber_and_bbtFlags & 0x1fffffff, 0x19930520 < uVar3 &&
           (param_5->pESTypeList != (ESTypeList *)0x0)))) ||
         ((0x19930521 < uVar3 && (((uint)param_5->EHFlags >> 2 & 1) != 0)))) {
        if ((((*(int *)param_1 == -0x1f928c9d) && (2 < *(uint *)(param_1 + 0x10))) &&
            (0x19930522 < *(uint *)(param_1 + 0x14))) &&
           (pcVar1 = *(code **)(*(int *)(param_1 + 0x1c) + 8), pcVar1 != (code *)0x0)) {
          guard_check_icall(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
          _Var4 = (*pcVar1)();
          return _Var4;
        }
        FUN_006e7942(param_1,param_2,param_3,param_4,param_5,_param_8,param_6,param_7);
      }
    }
    else if ((param_5->maxState != 0) && (param_6 == 0)) {
      __FrameHandler3::FrameUnwindToEmptyState(param_2,param_4,param_5);
    }
  }
  return 1;
}


/* ==== 006e83f8  _CallMemberFunction1  size=16 ==== */

/* Library Function - Single Match
    void __stdcall _CallMemberFunction1(void * const,void * const,void * const)
   
   Library: Visual Studio 2019 Release */

void _CallMemberFunction1(void *param_1,void *param_2,void *param_3)

{
  (*param_2)(param_3);
  return;
}


/* ==== 006e8408  _CallMemberFunction2  size=19 ==== */

/* Library Function - Single Match
    void __stdcall _CallMemberFunction2(void * const,void * const,void * const,int)
   
   Library: Visual Studio 2019 Release */

void _CallMemberFunction2(void *param_1,void *param_2,void *param_3,int param_4)

{
  (*param_2)(param_3,param_4);
  return;
}


/* ==== 006e8430  __CallSettingFrame@12  size=76 ==== */

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Library Function - Single Match
    __CallSettingFrame@12
   
   Library: Visual Studio */

void __CallSettingFrame_12(undefined4 param_1,undefined4 param_2,int param_3)

{
  code *pcVar1;
  
  pcVar1 = (code *)FUN_006e88f0(param_3);
  (*pcVar1)();
  if (param_3 == 0x100) {
    param_3 = 2;
  }
  FUN_006e88f0(param_3);
  return;
}


/* ==== 006e847c  ___except_validate_context_record  size=48 ==== */

/* WARNING: Removing unreachable block (ram,0x006e848b) */
/* WARNING: Removing unreachable block (ram,0x006e84a0) */
/* WARNING: Removing unreachable block (ram,0x006e84a5) */
/* Library Function - Single Match
    ___except_validate_context_record
   
   Library: Visual Studio 2019 Release */

void ___except_validate_context_record(void)

{
  return;
}


/* ==== 006e85a0  _EH4_CallFilterFunc  size=23 ==== */

/* Library Function - Single Match
    @_EH4_CallFilterFunc@8
   
   Library: Visual Studio 2019 Release
   __fastcall _EH4_CallFilterFunc,8 */

void __fastcall _EH4_CallFilterFunc(code *param_1)

{
  (*param_1)();
  return;
}


/* ==== 006e85c0  _EH4_TransferToHandler  size=25 ==== */

/* Library Function - Single Match
    @_EH4_TransferToHandler@8
   
   Library: Visual Studio 2019 Release
   __fastcall _EH4_TransferToHandler,8 */

void __fastcall _EH4_TransferToHandler(code *UNRECOVERED_JUMPTABLE)

{
  __NLG_Notify(1);
                    /* WARNING: Could not recover jumptable at 0x006e85d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


/* ==== 006e85e0  _EH4_GlobalUnwind2  size=26 ==== */

/* Library Function - Single Match
    @_EH4_GlobalUnwind2@8
   
   Library: Visual Studio 2019 Release
   __fastcall _EH4_GlobalUnwind2,8 */

void __fastcall _EH4_GlobalUnwind2(PVOID param_1,PEXCEPTION_RECORD param_2)

{
  RtlUnwind(param_1,(PVOID)0x6e85f5,param_2,(PVOID)0x0);
  return;
}


/* ==== 006e8600  _EH4_LocalUnwind  size=23 ==== */

/* Library Function - Single Match
    @_EH4_LocalUnwind@16
   
   Library: Visual Studio 2019 Release
   __fastcall _EH4_LocalUnwind,16 */

void __fastcall
_EH4_LocalUnwind(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_006e84b0(param_4,param_1,param_2);
  return;
}


/* ==== 006e8617  ___vcrt_initialize_locks  size=60 ==== */

/* Library Function - Single Match
    ___vcrt_initialize_locks
   
   Library: Visual Studio 2019 Release */

undefined4 ___vcrt_initialize_locks(void)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  
  puVar3 = &DAT_007c8bd4;
  uVar2 = 0;
  do {
    iVar1 = ___vcrt_InitializeCriticalSectionEx(puVar3,4000,0);
    if (iVar1 == 0) {
      ___vcrt_uninitialize_locks();
      return 0;
    }
    DAT_007c8bec = DAT_007c8bec + 1;
    uVar2 = uVar2 + 0x18;
    puVar3 = puVar3 + 0x18;
  } while (uVar2 < 0x18);
  return 1;
}


/* ==== 006e8653  ___vcrt_uninitialize_locks  size=47 ==== */

/* Library Function - Single Match
    ___vcrt_uninitialize_locks
   
   Library: Visual Studio 2019 Release */

undefined4 ___vcrt_uninitialize_locks(void)

{
  int iVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  if (DAT_007c8bec != 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)(&DAT_007c8bbc + DAT_007c8bec * 0x18);
    iVar1 = DAT_007c8bec;
    do {
      DeleteCriticalSection(lpCriticalSection);
      DAT_007c8bec = DAT_007c8bec + -1;
      lpCriticalSection = lpCriticalSection + -1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return 1;
}


/* ==== 006e876d  ___vcrt_FlsAlloc  size=59 ==== */

/* Library Function - Single Match
    ___vcrt_FlsAlloc
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void ___vcrt_FlsAlloc(undefined4 param_1)

{
  code *pcVar1;
  
  pcVar1 = (code *)FUN_006e8682(0,"FlsAlloc",&DAT_0073190c,"FlsAlloc");
  if (pcVar1 != (code *)0x0) {
    guard_check_icall(param_1);
    (*pcVar1)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x006e87a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TlsAlloc();
  return;
}


/* ==== 006e87a8  ___vcrt_FlsFree  size=59 ==== */

/* Library Function - Single Match
    ___vcrt_FlsFree
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void ___vcrt_FlsFree(DWORD param_1)

{
  code *pcVar1;
  
  pcVar1 = (code *)FUN_006e8682(1,"FlsFree",&DAT_00731920,"FlsFree");
  if (pcVar1 == (code *)0x0) {
    TlsFree(param_1);
  }
  else {
    guard_check_icall();
    (*pcVar1)();
  }
  return;
}


/* ==== 006e87e3  ___vcrt_FlsGetValue  size=59 ==== */

/* Library Function - Single Match
    ___vcrt_FlsGetValue
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void ___vcrt_FlsGetValue(DWORD param_1)

{
  code *pcVar1;
  
  pcVar1 = (code *)FUN_006e8682(2,"FlsGetValue",&DAT_00731930,"FlsGetValue");
  if (pcVar1 == (code *)0x0) {
    TlsGetValue(param_1);
  }
  else {
    guard_check_icall();
    (*pcVar1)();
  }
  return;
}


/* ==== 006e881e  ___vcrt_FlsSetValue  size=62 ==== */

/* Library Function - Single Match
    ___vcrt_FlsSetValue
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void ___vcrt_FlsSetValue(DWORD param_1,LPVOID param_2)

{
  code *pcVar1;
  
  pcVar1 = (code *)FUN_006e8682(3,"FlsSetValue",&DAT_00731944,"FlsSetValue");
  if (pcVar1 == (code *)0x0) {
    TlsSetValue(param_1,param_2);
  }
  else {
    guard_check_icall();
    (*pcVar1)();
  }
  return;
}


/* ==== 006e885c  ___vcrt_InitializeCriticalSectionEx  size=71 ==== */

/* Library Function - Single Match
    ___vcrt_InitializeCriticalSectionEx
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void ___vcrt_InitializeCriticalSectionEx
               (LPCRITICAL_SECTION param_1,DWORD param_2,undefined4 param_3)

{
  code *pcVar1;
  
  pcVar1 = (code *)FUN_006e8682(4,"InitializeCriticalSectionEx",&DAT_00731958,
                                "InitializeCriticalSectionEx");
  if (pcVar1 == (code *)0x0) {
    InitializeCriticalSectionAndSpinCount(param_1,param_2);
  }
  else {
    guard_check_icall(param_1,param_2,param_3);
    (*pcVar1)();
  }
  return;
}


/* ==== 006e8900  __NLG_Notify  size=31 ==== */

/* Library Function - Single Match
    __NLG_Notify
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void __NLG_Notify(ulong param_1)

{
  undefined4 in_EAX;
  undefined4 unaff_EBP;
  
  DAT_007c59c8 = param_1;
  DAT_007c59c4 = in_EAX;
  DAT_007c59cc = unaff_EBP;
  return;
}


/* ==== 006e8a33  ___acrt_call_reportfault  size=313 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    ___acrt_call_reportfault
   
   Library: Visual Studio 2019 Release */

void ___acrt_call_reportfault(int param_1,DWORD param_2,DWORD param_3)

{
  BOOL BVar1;
  LONG LVar2;
  _EXCEPTION_POINTERS local_32c;
  EXCEPTION_RECORD local_324;
  undefined4 local_2d4 [39];
  
  if (param_1 != -1) {
    FUN_006e5f33();
  }
  _memset(&local_324,0,0x50);
  _memset(local_2d4,0,0x2cc);
  local_32c.ExceptionRecord = &local_324;
  local_32c.ContextRecord = (PCONTEXT)local_2d4;
  local_2d4[0] = 0x10001;
  local_324.ExceptionCode = param_2;
  local_324.ExceptionFlags = param_3;
  BVar1 = IsDebuggerPresent();
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  LVar2 = UnhandledExceptionFilter(&local_32c);
  if (((LVar2 == 0) && (BVar1 == 0)) && (param_1 != -1)) {
    FUN_006e5f33();
  }
  return;
}


/* ==== 006e8c5c  __invoke_watson  size=52 ==== */

/* Library Function - Single Match
    __invoke_watson
   
   Library: Visual Studio 2019 Release */

void __cdecl
__invoke_watson(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5)

{
  code *pcVar1;
  BOOL BVar2;
  HANDLE hProcess;
  UINT uExitCode;
  
  BVar2 = IsProcessorFeaturePresent(0x17);
  if (BVar2 != 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)();
  }
  ___acrt_call_reportfault(2,0xc0000417,1);
  uExitCode = 0xc0000417;
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,uExitCode);
  return;
}


/* ==== 006e9936  _fread  size=29 ==== */

/* Library Function - Single Match
    _fread
   
   Library: Visual Studio 2019 Release */

size_t __cdecl _fread(void *_DstBuf,size_t _ElementSize,size_t _Count,FILE *_File)

{
  size_t sVar1;
  
  sVar1 = _fread_s(_DstBuf,0xffffffff,_ElementSize,_Count,_File);
  return sVar1;
}


/* ==== 006e9953  _fread_s  size=143 ==== */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    _fread_s
   
   Library: Visual Studio 2019 Release */

size_t __cdecl _fread_s(void *_DstBuf,size_t _DstSize,size_t _ElementSize,size_t _Count,FILE *_File)

{
  undefined4 *puVar1;
  size_t sVar2;
  void *local_14;
  
  if ((_ElementSize != 0) && (_Count != 0)) {
    if (_File != (FILE *)0x0) {
      __lock_file(_File);
      sVar2 = FUN_006e975d(_DstBuf,_DstSize,_ElementSize,_Count,_File);
      FUN_006e99e8();
      ExceptionList = local_14;
      return sVar2;
    }
    if (_DstSize != 0xffffffff) {
      _memset(_DstBuf,0,_DstSize);
    }
    puVar1 = (undefined4 *)FUN_006f390a();
    *puVar1 = 0x16;
    FUN_006e8c2f();
  }
  ExceptionList = local_14;
  return 0;
}


/* ==== 006e99f0  _memcpy_s  size=129 ==== */

/* Library Function - Single Match
    _memcpy_s
   
   Libraries: Visual Studio 2012, Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

errno_t __cdecl _memcpy_s(void *_Dst,rsize_t _DstSize,void *_Src,rsize_t _MaxCount)

{
  errno_t eVar1;
  undefined4 *puVar2;
  errno_t *peVar3;
  
  if (_MaxCount == 0) {
    eVar1 = 0;
  }
  else if (_Dst == (void *)0x0) {
    puVar2 = (undefined4 *)FUN_006f390a();
    eVar1 = 0x16;
    *puVar2 = 0x16;
    FUN_006e8c2f();
  }
  else if ((_Src == (void *)0x0) || (_DstSize < _MaxCount)) {
    _memset(_Dst,0,_DstSize);
    if (_Src == (void *)0x0) {
      peVar3 = (errno_t *)FUN_006f390a();
      eVar1 = 0x16;
    }
    else {
      if (_MaxCount <= _DstSize) {
        return 0x16;
      }
      peVar3 = (errno_t *)FUN_006f390a();
      eVar1 = 0x22;
    }
    *peVar3 = eVar1;
    FUN_006e8c2f();
  }
  else {
    FUN_006e6bd0(_Dst,_Src,_MaxCount);
    eVar1 = 0;
  }
  return eVar1;
}


/* ==== 006ec534  ___acrt_locale_get_ctype_array_value  size=34 ==== */

/* Library Function - Single Match
    ___acrt_locale_get_ctype_array_value
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

ushort ___acrt_locale_get_ctype_array_value(int param_1,int param_2,ushort param_3)

{
  if (param_2 + 1U < 0x101) {
    return *(ushort *)(param_1 + param_2 * 2) & param_3;
  }
  return 0;
}


/* ==== 006ec67c  __difftime64  size=69 ==== */

/* Library Function - Single Match
    __difftime64
   
   Library: Visual Studio 2019 Release */

double __cdecl __difftime64(__time64_t _Time1,__time64_t _Time2)

{
  undefined4 *puVar1;
  
  if ((-1 < _Time2) && (-1 < _Time1)) {
    return (double)(_Time1 - _Time2);
  }
  puVar1 = (undefined4 *)FUN_006f390a();
  *puVar1 = 0x16;
  return 0.0;
}


/* ==== 006ec6c1  __crt_time_elapsed_leap_years<__int64>  size=100 ==== */

/* Library Function - Single Match
    __int64 __cdecl __crt_time_elapsed_leap_years<__int64>(__int64)
   
   Library: Visual Studio 2019 Release */

__int64 __cdecl __crt_time_elapsed_leap_years<__int64>(__int64 param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar2 = param_1._4_4_ - (uint)((int)param_1 == 0);
  lVar3 = __alldiv(param_1 + 299,400,0);
  lVar4 = __alldiv((int)param_1 + -1,iVar2,100,0);
  lVar5 = __alldiv((int)param_1 + -1,iVar2,4,0);
  lVar5 = (lVar3 - lVar4) + lVar5;
  uVar1 = (uint)lVar5;
  return CONCAT44((int)((ulonglong)lVar5 >> 0x20) - (uint)(uVar1 < 0x11),uVar1 - 0x11);
}


/* ==== 006ec725  __crt_time_is_leap_year<__int64>  size=80 ==== */

/* Library Function - Single Match
    bool __cdecl __crt_time_is_leap_year<__int64>(__int64)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

bool __cdecl __crt_time_is_leap_year<__int64>(__int64 param_1)

{
  longlong lVar1;
  
  lVar1 = __allrem(param_1,4,0);
  if (((lVar1 != 0) || (lVar1 = __allrem(param_1,100,0), lVar1 == 0)) &&
     (lVar1 = __allrem(param_1 + 0x76c,400,0), lVar1 != 0)) {
    return false;
  }
  return true;
}


/* ==== 006f165e  ___stdio_common_vsscanf  size=36 ==== */

/* Library Function - Single Match
    ___stdio_common_vsscanf
   
   Library: Visual Studio 2019 Release */

void ___stdio_common_vsscanf
               (undefined4 param_1,undefined4 param_2,char *param_3,uint param_4,char *param_5,
               __crt_locale_pointers *param_6,char *param_7)

{
  common_vsscanf<char>(CONCAT44(param_2,param_1),param_3,param_4,param_5,param_6,param_7);
  return;
}


/* ==== 006f186f  __strlwr  size=92 ==== */

/* Library Function - Single Match
    __strlwr
   
   Library: Visual Studio 2019 Release */

char * __cdecl __strlwr(char *_String)

{
  char cVar1;
  undefined4 *puVar2;
  char *pcVar3;
  
  if (DAT_007c8dac != 0) {
    __strlwr_s_l(_String,0xffffffff,(_locale_t)0x0);
    return _String;
  }
  if (_String == (char *)0x0) {
    puVar2 = (undefined4 *)FUN_006f390a();
    *puVar2 = 0x16;
    FUN_006e8c2f();
    return (char *)0x0;
  }
  cVar1 = *_String;
  pcVar3 = _String;
  while (cVar1 != '\0') {
    if ((byte)(cVar1 + 0xbfU) < 0x1a) {
      *pcVar3 = cVar1 + ' ';
    }
    pcVar3 = pcVar3 + 1;
    cVar1 = *pcVar3;
  }
  return _String;
}


/* ==== 006f18cb  __strlwr_s_l  size=55 ==== */

/* Library Function - Single Match
    __strlwr_s_l
   
   Library: Visual Studio 2019 Release */

errno_t __cdecl __strlwr_s_l(char *_Str,size_t _Size,_locale_t _Locale)

{
  errno_t eVar1;
  int local_14;
  undefined1 local_10 [8];
  char local_8;
  
  FUN_006ee0ac(_Locale);
  eVar1 = FUN_006f16d9(_Str,_Size,local_10);
  if (local_8 != '\0') {
    *(uint *)(local_14 + 0x350) = *(uint *)(local_14 + 0x350) & 0xfffffffd;
  }
  return eVar1;
}


/* ==== 006f19df  _fopen  size=23 ==== */

/* Library Function - Single Match
    _fopen
   
   Library: Visual Studio 2019 Release */

FILE * __cdecl _fopen(char *_Filename,char *_Mode)

{
  _iobuf *p_Var1;
  
  p_Var1 = common_fsopen<char>(_Filename,_Mode,0x40);
  return p_Var1;
}


/* ==== 006f1a00  _strncmp  size=115 ==== */

/* Library Function - Single Match
    _strncmp
   
   Library: Visual Studio 2019 Release */

int __cdecl _strncmp(char *_Str1,char *_Str2,size_t _MaxCount)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  
  if (_MaxCount != 0) {
    iVar3 = (int)_Str1 - (int)_Str2;
    do {
      if (((uint)_Str2 & 3) == 0) {
        while ((((uint)(iVar3 + (int)_Str2) & 0xfff) < 0xffd &&
               (uVar2 = *(uint *)(iVar3 + (int)_Str2), uVar2 == *(uint *)_Str2))) {
          bVar4 = _MaxCount < 4;
          _MaxCount = _MaxCount - 4;
          if (bVar4 || _MaxCount == 0) {
            return 0;
          }
          _Str2 = (char *)((int)_Str2 + 4);
          if ((~uVar2 & uVar2 + 0xfefefeff & 0x80808080) != 0) {
            return 0;
          }
        }
      }
      bVar1 = *(byte *)(iVar3 + (int)_Str2);
      if (bVar1 != (byte)*(uint *)_Str2) {
        return -(uint)(bVar1 < (byte)*(uint *)_Str2) | 1;
      }
      if (bVar1 == 0) {
        return 0;
      }
      _Str2 = (char *)((int)_Str2 + 1);
      bVar4 = _MaxCount != 0;
      _MaxCount = _MaxCount - 1;
    } while (bVar4 && _MaxCount != 0);
  }
  return 0;
}


/* ==== 006f2e10  _strncpy  size=292 ==== */

/* Library Function - Single Match
    _strncpy
   
   Library: Visual Studio */

char * __cdecl _strncpy(char *_Dest,char *_Source,size_t _Count)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  uint *puVar5;
  
  if (_Count == 0) {
    return _Dest;
  }
  puVar5 = (uint *)_Dest;
  if (((uint)_Source & 3) != 0) {
    while( true ) {
      uVar4 = *(uint *)_Source;
      _Source = (char *)((int)_Source + 1);
      *(char *)puVar5 = (char)uVar4;
      puVar5 = (uint *)((int)puVar5 + 1);
      _Count = _Count - 1;
      if (_Count == 0) {
        return _Dest;
      }
      if ((char)uVar4 == '\0') break;
      if (((uint)_Source & 3) == 0) {
        uVar4 = _Count >> 2;
        goto joined_r0x006f2e5c;
      }
    }
    do {
      if (((uint)puVar5 & 3) == 0) {
        uVar4 = _Count >> 2;
        cVar3 = '\0';
        if (uVar4 == 0) goto LAB_006f2ea3;
        goto LAB_006f2f19;
      }
      *(char *)puVar5 = '\0';
      puVar5 = (uint *)((int)puVar5 + 1);
      _Count = _Count - 1;
    } while (_Count != 0);
    return _Dest;
  }
  uVar4 = _Count >> 2;
  if (uVar4 != 0) {
    do {
      uVar1 = *(uint *)_Source;
      uVar2 = *(uint *)_Source;
      _Source = (char *)((int)_Source + 4);
      if (((uVar1 ^ 0xffffffff ^ uVar1 + 0x7efefeff) & 0x81010100) != 0) {
        if ((char)uVar2 == '\0') {
          *puVar5 = 0;
joined_r0x006f2f15:
          while( true ) {
            uVar4 = uVar4 - 1;
            puVar5 = puVar5 + 1;
            if (uVar4 == 0) break;
LAB_006f2f19:
            *puVar5 = 0;
          }
          cVar3 = '\0';
          _Count = _Count & 3;
          if (_Count != 0) goto LAB_006f2ea3;
          return _Dest;
        }
        if ((char)(uVar2 >> 8) == '\0') {
          *puVar5 = uVar2 & 0xff;
          goto joined_r0x006f2f15;
        }
        if ((uVar2 & 0xff0000) == 0) {
          *puVar5 = uVar2 & 0xffff;
          goto joined_r0x006f2f15;
        }
        if ((uVar2 & 0xff000000) == 0) {
          *puVar5 = uVar2;
          goto joined_r0x006f2f15;
        }
      }
      *puVar5 = uVar2;
      puVar5 = puVar5 + 1;
      uVar4 = uVar4 - 1;
joined_r0x006f2e5c:
    } while (uVar4 != 0);
    _Count = _Count & 3;
    if (_Count == 0) {
      return _Dest;
    }
  }
  do {
    cVar3 = (char)*(uint *)_Source;
    _Source = (char *)((int)_Source + 1);
    *(char *)puVar5 = cVar3;
    puVar5 = (uint *)((int)puVar5 + 1);
    if (cVar3 == '\0') {
      while (_Count = _Count - 1, _Count != 0) {
LAB_006f2ea3:
        *(char *)puVar5 = cVar3;
        puVar5 = (uint *)((int)puVar5 + 1);
      }
      return _Dest;
    }
    _Count = _Count - 1;
  } while (_Count != 0);
  return _Dest;
}


/* ==== 006f3240  _strncat  size=309 ==== */

/* Library Function - Single Match
    _strncat
   
   Library: Visual Studio */

char * __cdecl _strncat(char *_Dest,char *_Source,size_t _Count)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  
  puVar5 = (uint *)_Dest;
  if (_Count == 0) {
    return _Dest;
  }
  do {
    if (((uint)puVar5 & 3) == 0) goto LAB_006f326c;
    uVar4 = *puVar5;
    puVar5 = (uint *)((int)puVar5 + 1);
  } while ((byte)uVar4 != 0);
  goto LAB_006f329d;
  while( true ) {
    if ((uVar4 & 0xff0000) == 0) {
      puVar6 = (uint *)((int)puVar6 + 2);
      goto LAB_006f32af;
    }
    if ((uVar4 & 0xff000000) == 0) break;
LAB_006f326c:
    do {
      puVar6 = puVar5;
      puVar5 = puVar6 + 1;
    } while (((*puVar6 ^ 0xffffffff ^ *puVar6 + 0x7efefeff) & 0x81010100) == 0);
    uVar4 = *puVar6;
    if ((char)uVar4 == '\0') goto LAB_006f32af;
    if ((char)(uVar4 >> 8) == '\0') {
      puVar6 = (uint *)((int)puVar6 + 1);
      goto LAB_006f32af;
    }
  }
LAB_006f329d:
  puVar6 = (uint *)((int)puVar5 + -1);
LAB_006f32af:
  if (((uint)_Source & 3) == 0) {
    uVar3 = _Count >> 2;
  }
  else {
    do {
      bVar1 = (byte)*(uint *)_Source;
      uVar4 = (uint)bVar1;
      _Source = (char *)((int)_Source + 1);
      if (bVar1 == 0) goto LAB_006f330a;
      *(byte *)puVar6 = bVar1;
      puVar6 = (uint *)((int)puVar6 + 1);
      _Count = _Count - 1;
      if (_Count == 0) goto LAB_006f3300;
    } while (((uint)_Source & 3) != 0);
    uVar3 = _Count >> 2;
  }
  do {
    if (uVar3 == 0) {
      for (uVar4 = _Count & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        uVar3 = *(uint *)_Source;
        _Source = (char *)((int)_Source + 1);
        *(byte *)puVar6 = (byte)uVar3;
        puVar6 = (uint *)((int)puVar6 + 1);
        if ((byte)uVar3 == 0) {
          return _Dest;
        }
      }
LAB_006f3300:
      *(byte *)puVar6 = 0;
      return _Dest;
    }
    uVar2 = *(uint *)_Source;
    uVar4 = *(uint *)_Source;
    _Source = (char *)((int)_Source + 4);
    if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
      if ((char)uVar4 == '\0') {
LAB_006f330a:
        *(byte *)puVar6 = (byte)uVar4;
        return _Dest;
      }
      if ((char)(uVar4 >> 8) == '\0') {
        *(short *)puVar6 = (short)uVar4;
        return _Dest;
      }
      if ((uVar4 & 0xff0000) == 0) {
        *(short *)puVar6 = (short)uVar4;
        *(byte *)((int)puVar6 + 2) = 0;
        return _Dest;
      }
      if ((uVar4 & 0xff000000) == 0) {
        *puVar6 = uVar4;
        return _Dest;
      }
    }
    *puVar6 = uVar4;
    puVar6 = puVar6 + 1;
    uVar3 = uVar3 - 1;
  } while( true );
}


/* ==== 006f3380  _isalnum  size=139 ==== */

/* Library Function - Single Match
    _isalnum
   
   Library: Visual Studio 2019 Release */

int __cdecl _isalnum(int _C)

{
  int iVar1;
  int *local_8;
  
  if (DAT_007c8dac == 0) {
    if (_C + 1U < 0x101) {
      return *(ushort *)(PTR_DAT_007c5a88 + _C * 2) & 0x107;
    }
  }
  else {
    iVar1 = FUN_006f8965();
    local_8 = *(int **)(iVar1 + 0x4c);
    ___acrt_update_locale_info(iVar1,&local_8);
    if (_C + 1U < 0x101) {
      return *(ushort *)(*local_8 + _C * 2) & 0x107;
    }
    if (1 < local_8[1]) {
      iVar1 = __isctype_l(_C,0x107,(_locale_t)0x0);
      return iVar1;
    }
  }
  return 0;
}


/* ==== 006f3410  _isdigit  size=132 ==== */

/* Library Function - Single Match
    _isdigit
   
   Library: Visual Studio 2019 Release */

int __cdecl _isdigit(int _C)

{
  int iVar1;
  int *local_8;
  
  if (DAT_007c8dac == 0) {
    if (_C + 1U < 0x101) {
      return *(ushort *)(PTR_DAT_007c5a88 + _C * 2) & 4;
    }
  }
  else {
    iVar1 = FUN_006f8965();
    local_8 = *(int **)(iVar1 + 0x4c);
    ___acrt_update_locale_info(iVar1,&local_8);
    if (_C + 1U < 0x101) {
      return *(ushort *)(*local_8 + _C * 2) & 4;
    }
    if (1 < local_8[1]) {
      iVar1 = __isctype_l(_C,4,(_locale_t)0x0);
      return iVar1;
    }
  }
  return 0;
}


/* ==== 006f34a0  _isspace  size=132 ==== */

/* Library Function - Single Match
    _isspace
   
   Library: Visual Studio 2019 Release */

int __cdecl _isspace(int _C)

{
  int iVar1;
  int *local_8;
  
  if (DAT_007c8dac == 0) {
    if (_C + 1U < 0x101) {
      return *(ushort *)(PTR_DAT_007c5a88 + _C * 2) & 8;
    }
  }
  else {
    iVar1 = FUN_006f8965();
    local_8 = *(int **)(iVar1 + 0x4c);
    ___acrt_update_locale_info(iVar1,&local_8);
    if (_C + 1U < 0x101) {
      return *(ushort *)(*local_8 + _C * 2) & 8;
    }
    if (1 < local_8[1]) {
      iVar1 = __isctype_l(_C,8,(_locale_t)0x0);
      return iVar1;
    }
  }
  return 0;
}


/* ==== 006f3557  __acrt_convert_wcs_mbs_cp<char,wchar_t,<lambda_62f6974d9771e494a5ea317cc32e971c>,__crt_win32_buffer_internal_dynamic_resizing>  size=178 ==== */

/* Library Function - Single Match
    int __cdecl __acrt_convert_wcs_mbs_cp<char,wchar_t,class
   <lambda_62f6974d9771e494a5ea317cc32e971c>,struct
   __crt_win32_buffer_internal_dynamic_resizing>(char const * const,class
   __crt_win32_buffer<wchar_t,struct __crt_win32_buffer_internal_dynamic_resizing> &,class
   <lambda_62f6974d9771e494a5ea317cc32e971c> const &,unsigned int)
   
   Library: Visual Studio 2019 Release */

int __cdecl
__acrt_convert_wcs_mbs_cp<char,wchar_t,<lambda_62f6974d9771e494a5ea317cc32e971c>,__crt_win32_buffer_internal_dynamic_resizing>
          (char *param_1,
          __crt_win32_buffer<wchar_t,__crt_win32_buffer_internal_dynamic_resizing> *param_2,
          <lambda_62f6974d9771e494a5ea317cc32e971c> *param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  int *piVar4;
  
  if (param_1 == (char *)0x0) {
    __crt_win32_buffer<wchar_t,__crt_win32_buffer_internal_dynamic_resizing>::_deallocate(param_2);
    *(undefined4 *)(param_2 + 8) = 0;
    *(undefined4 *)(param_2 + 0xc) = 0;
  }
  else {
    if (*param_1 != '\0') {
      uVar2 = FUN_006fdb32(param_4,9,param_1,0xffffffff,0,0);
      if (uVar2 != 0) {
        if ((*(uint *)(param_2 + 0xc) < uVar2) &&
           (iVar1 = __crt_win32_buffer<wchar_t,__crt_win32_buffer_internal_dynamic_resizing>::
                    allocate(param_2,uVar2), iVar1 != 0)) {
          return iVar1;
        }
        iVar1 = FUN_006fdb32(param_4,9,param_1,0xffffffff,*(undefined4 *)(param_2 + 8),
                             *(undefined4 *)(param_2 + 0xc));
        if (iVar1 != 0) {
          *(int *)(param_2 + 0x10) = iVar1 + -1;
          return 0;
        }
      }
      DVar3 = GetLastError();
      ___acrt_errno_map_os_error(DVar3);
      piVar4 = (int *)FUN_006f390a();
      return *piVar4;
    }
    if ((*(int *)(param_2 + 0xc) == 0) &&
       (iVar1 = __crt_win32_buffer<wchar_t,__crt_win32_buffer_internal_dynamic_resizing>::allocate
                          (param_2,1), iVar1 != 0)) {
      return iVar1;
    }
    **(undefined2 **)(param_2 + 8) = 0;
  }
  *(undefined4 *)(param_2 + 0x10) = 0;
  return 0;
}


/* ==== 006f3609  __acrt_mbs_to_wcs_cp<__crt_win32_buffer_internal_dynamic_resizing>  size=29 ==== */

/* Library Function - Single Match
    int __cdecl __acrt_mbs_to_wcs_cp<struct __crt_win32_buffer_internal_dynamic_resizing>(char const
   * const,class __crt_win32_buffer<wchar_t,struct __crt_win32_buffer_internal_dynamic_resizing>
   &,unsigned int)
   
   Library: Visual Studio 2019 Release */

int __cdecl
__acrt_mbs_to_wcs_cp<__crt_win32_buffer_internal_dynamic_resizing>
          (char *param_1,
          __crt_win32_buffer<wchar_t,__crt_win32_buffer_internal_dynamic_resizing> *param_2,
          uint param_3)

{
  int iVar1;
  <lambda_62f6974d9771e494a5ea317cc32e971c> local_5;
  
  iVar1 = __acrt_convert_wcs_mbs_cp<char,wchar_t,<lambda_62f6974d9771e494a5ea317cc32e971c>,__crt_win32_buffer_internal_dynamic_resizing>
                    (param_1,param_2,&local_5,param_3);
  return iVar1;
}


/* ==== 006f3626  __acrt_get_utf8_acp_compatibility_codepage  size=63 ==== */

/* Library Function - Single Match
    unsigned int __cdecl __acrt_get_utf8_acp_compatibility_codepage(void)
   
   Library: Visual Studio 2019 Release */

uint __cdecl __acrt_get_utf8_acp_compatibility_codepage(void)

{
  int iVar1;
  uint uVar2;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_8;
  
  FUN_006ee0ac(0);
  uVar2 = 0xfde9;
  if (*(int *)(local_10 + 8) != 0xfde9) {
    iVar1 = ___acrt_AreFileApisANSI_0();
    uVar2 = 0;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
  }
  if (local_8 != '\0') {
    *(uint *)(local_14 + 0x350) = *(uint *)(local_14 + 0x350) & 0xfffffffd;
  }
  return uVar2;
}


/* ==== 006f3665  _deallocate  size=26 ==== */

/* Library Function - Single Match
    private: void __thiscall __crt_win32_buffer<wchar_t,struct
   __crt_win32_buffer_internal_dynamic_resizing>::_deallocate(void)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __thiscall
__crt_win32_buffer<wchar_t,__crt_win32_buffer_internal_dynamic_resizing>::_deallocate
          (__crt_win32_buffer<wchar_t,__crt_win32_buffer_internal_dynamic_resizing> *this)

{
  if (this[0x14] != (__crt_win32_buffer<wchar_t,__crt_win32_buffer_internal_dynamic_resizing>)0x0) {
    FUN_006f9a4d(*(undefined4 *)(this + 8));
    this[0x14] = (__crt_win32_buffer<wchar_t,__crt_win32_buffer_internal_dynamic_resizing>)0x0;
  }
  return;
}


/* ==== 006f38b0  ___acrt_errno_map_os_error  size=35 ==== */

/* Library Function - Single Match
    ___acrt_errno_map_os_error
   
   Library: Visual Studio 2019 Release */

void ___acrt_errno_map_os_error(ulong param_1)

{
  ulong *puVar1;
  int iVar2;
  int *piVar3;
  
  puVar1 = (ulong *)FUN_006f38f7();
  *puVar1 = param_1;
  iVar2 = FID_conflict____acrt_errno_from_os_error(param_1);
  piVar3 = (int *)FUN_006f390a();
  *piVar3 = iVar2;
  return;
}


/* ==== 006f3c97  _tolower  size=48 ==== */

/* Library Function - Single Match
    _tolower
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl _tolower(int _C)

{
  if (DAT_007c8dac == 0) {
    if (_C - 0x41U < 0x1a) {
      _C = _C + 0x20;
    }
  }
  else {
    _C = FUN_006f3a9b(_C,0);
  }
  return _C;
}


/* ==== 006f3cc7  _toupper  size=48 ==== */

/* Library Function - Single Match
    _toupper
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl _toupper(int _C)

{
  if (DAT_007c8dac == 0) {
    if (_C - 0x61U < 0x1a) {
      _C = _C + -0x20;
    }
  }
  else {
    _C = FUN_006f3b99(_C,0);
  }
  return _C;
}


/* ==== 006f3e1b  __lock_file  size=20 ==== */

/* Library Function - Single Match
    __lock_file
   
   Library: Visual Studio 2019 Release */

void __cdecl __lock_file(FILE *_File)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(_File + 1));
  return;
}


/* ==== 006f3e2f  __unlock_file  size=20 ==== */

/* Library Function - Single Match
    __unlock_file
   
   Library: Visual Studio 2019 Release */

void __cdecl __unlock_file(FILE *_File)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(_File + 1));
  return;
}


/* ==== 006f3e50  _strcspn  size=70 ==== */

/* Library Function - Single Match
    _strcspn
   
   Library: Visual Studio */

size_t __cdecl _strcspn(char *_Str,char *_Control)

{
  byte bVar1;
  size_t sVar2;
  byte abStack_28 [32];
  
  abStack_28[0x1c] = 0;
  abStack_28[0x1d] = 0;
  abStack_28[0x1e] = 0;
  abStack_28[0x1f] = 0;
  abStack_28[0x18] = 0;
  abStack_28[0x19] = 0;
  abStack_28[0x1a] = 0;
  abStack_28[0x1b] = 0;
  abStack_28[0x14] = 0;
  abStack_28[0x15] = 0;
  abStack_28[0x16] = 0;
  abStack_28[0x17] = 0;
  abStack_28[0x10] = 0;
  abStack_28[0x11] = 0;
  abStack_28[0x12] = 0;
  abStack_28[0x13] = 0;
  abStack_28[0xc] = 0;
  abStack_28[0xd] = 0;
  abStack_28[0xe] = 0;
  abStack_28[0xf] = 0;
  abStack_28[8] = 0;
  abStack_28[9] = 0;
  abStack_28[10] = 0;
  abStack_28[0xb] = 0;
  abStack_28[4] = 0;
  abStack_28[5] = 0;
  abStack_28[6] = 0;
  abStack_28[7] = 0;
  abStack_28[0] = 0;
  abStack_28[1] = 0;
  abStack_28[2] = 0;
  abStack_28[3] = 0;
  while( true ) {
    bVar1 = *_Control;
    if (bVar1 == 0) break;
    _Control = _Control + 1;
    abStack_28[(int)(uint)bVar1 >> 3] = abStack_28[(int)(uint)bVar1 >> 3] | '\x01' << (bVar1 & 7);
  }
  sVar2 = 0xffffffff;
  do {
    sVar2 = sVar2 + 1;
    bVar1 = *_Str;
    if (bVar1 == 0) {
      return sVar2;
    }
    _Str = _Str + 1;
  } while ((abStack_28[(int)(uint)bVar1 >> 3] >> (bVar1 & 7) & 1) == 0);
  return sVar2;
}


/* ==== 006f4380  _qsort  size=1229 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    _qsort
   
   Library: Visual Studio 2019 Release */

void __cdecl
_qsort(void *_Base,size_t _NumOfElements,size_t _SizeOfElements,_PtFuncCompare *_PtFuncCompare)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  size_t sVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *local_110;
  undefined1 *local_108;
  undefined1 *local_100;
  undefined1 *local_fc;
  undefined4 auStack_f8 [30];
  undefined4 auStack_80 [30];
  uint local_8;
  
  local_8 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  local_108 = _Base;
  if ((((_Base == (void *)0x0) && (_NumOfElements != 0)) || (_SizeOfElements == 0)) ||
     (_PtFuncCompare == (_PtFuncCompare *)0x0)) {
    puVar2 = (undefined4 *)FUN_006f390a();
    *puVar2 = 0x16;
    FUN_006e8c2f();
  }
  else {
    puVar11 = (undefined1 *)0x0;
    if (1 < _NumOfElements) {
      local_fc = (undefined1 *)((_NumOfElements - 1) * _SizeOfElements + (int)_Base);
LAB_006f4402:
      while (uVar3 = (uint)((int)local_fc - (int)local_108) / _SizeOfElements + 1, 8 < uVar3) {
        iVar4 = (uVar3 >> 1) * _SizeOfElements;
        puVar11 = local_108 + iVar4;
        puVar9 = local_108;
        puVar8 = puVar11;
        puVar6 = puVar11;
        guard_check_icall();
        iVar5 = (*_PtFuncCompare)(puVar9,puVar8);
        puVar9 = puVar11;
        if ((0 < iVar5) && (sVar7 = _SizeOfElements, local_108 != puVar11)) {
          do {
            uVar1 = puVar11[-iVar4];
            puVar11[-iVar4] = *puVar11;
            *puVar11 = uVar1;
            puVar11 = puVar11 + 1;
            sVar7 = sVar7 - 1;
            puVar9 = puVar6;
          } while (sVar7 != 0);
        }
        puVar11 = local_108;
        puVar8 = local_fc;
        guard_check_icall();
        iVar4 = (*_PtFuncCompare)(puVar11,puVar8);
        if ((0 < iVar4) && (sVar7 = _SizeOfElements, puVar11 = local_fc, local_108 != local_fc)) {
          do {
            puVar8 = puVar11 + 1;
            uVar1 = puVar8[(int)(local_108 + (-1 - (int)local_fc))];
            puVar8[(int)(local_108 + (-1 - (int)local_fc))] = *puVar11;
            *puVar11 = uVar1;
            sVar7 = sVar7 - 1;
            puVar11 = puVar8;
          } while (sVar7 != 0);
        }
        puVar8 = puVar9;
        puVar11 = local_fc;
        guard_check_icall();
        iVar4 = (*_PtFuncCompare)(puVar8,puVar11);
        local_110 = local_108;
        local_100 = local_fc;
        if ((0 < iVar4) && (sVar7 = _SizeOfElements, puVar8 = local_fc, puVar9 != local_fc)) {
          do {
            puVar6 = puVar8 + 1;
            uVar1 = puVar6[(int)(puVar9 + (-1 - (int)local_fc))];
            puVar6[(int)(puVar9 + (-1 - (int)local_fc))] = *puVar8;
            *puVar8 = uVar1;
            sVar7 = sVar7 - 1;
            puVar8 = puVar6;
          } while (sVar7 != 0);
        }
LAB_006f4613:
        if (local_110 < puVar9) {
          do {
            local_110 = local_110 + _SizeOfElements;
            if (puVar9 <= local_110) goto LAB_006f4660;
            puVar8 = local_110;
            puVar6 = puVar9;
            guard_check_icall();
            puVar11 = (undefined1 *)0x6f4640;
            iVar4 = (*_PtFuncCompare)(puVar8,puVar6);
            puVar8 = local_100;
          } while (iVar4 < 1);
        }
        else {
LAB_006f4660:
          do {
            local_110 = local_110 + _SizeOfElements;
            puVar8 = local_100;
            if (local_fc < local_110) break;
            puVar8 = local_110;
            puVar6 = puVar9;
            guard_check_icall();
            puVar11 = (undefined1 *)0x6f4672;
            iVar4 = (*_PtFuncCompare)(puVar8,puVar6);
            puVar8 = local_100;
          } while (iVar4 < 1);
        }
        do {
          local_100 = puVar8;
          puVar8 = local_100 + -_SizeOfElements;
          if (puVar8 <= puVar9) break;
          puVar6 = puVar8;
          puVar10 = puVar9;
          guard_check_icall();
          puVar11 = (undefined1 *)0x6f46c0;
          iVar4 = (*_PtFuncCompare)(puVar6,puVar10);
        } while (0 < iVar4);
        if (local_110 <= puVar8) {
          puVar6 = puVar8;
          sVar7 = _SizeOfElements;
          if (puVar8 != local_110) {
            do {
              puVar10 = puVar6 + 1;
              uVar1 = puVar10[(int)(local_110 + (-1 - (int)puVar8))];
              puVar10[(int)(local_110 + (-1 - (int)puVar8))] = *puVar6;
              *puVar6 = uVar1;
              sVar7 = sVar7 - 1;
              puVar6 = puVar10;
            } while (sVar7 != 0);
          }
          local_100 = puVar8;
          if (puVar9 == puVar8) {
            puVar9 = local_110;
          }
          goto LAB_006f4613;
        }
        if (puVar9 < local_100) {
          do {
            local_100 = local_100 + -_SizeOfElements;
            if (local_100 <= puVar9) goto LAB_006f4780;
            puVar8 = local_100;
            puVar6 = puVar9;
            guard_check_icall();
            puVar11 = (undefined1 *)0x6f4758;
            iVar4 = (*_PtFuncCompare)(puVar8,puVar6);
          } while (iVar4 == 0);
        }
        else {
LAB_006f4780:
          do {
            local_100 = local_100 + -_SizeOfElements;
            if (local_100 <= local_108) break;
            puVar8 = local_100;
            puVar6 = puVar9;
            guard_check_icall();
            puVar11 = (undefined1 *)0x6f4798;
            iVar4 = (*_PtFuncCompare)(puVar8,puVar6);
          } while (iVar4 == 0);
        }
        if ((int)local_100 - (int)local_108 < (int)local_fc - (int)local_110) goto LAB_006f480a;
        if (local_108 < local_100) {
          auStack_80[(int)puVar11] = local_108;
          auStack_f8[(int)puVar11] = local_100;
          puVar11 = puVar11 + 1;
        }
        local_108 = local_110;
        if (local_fc <= local_110) goto LAB_006f4843;
      }
      if (local_108 < local_fc) {
        puVar9 = local_108 + _SizeOfElements;
        puVar8 = puVar9;
        local_100 = local_108;
        do {
          for (; puVar8 <= local_fc; puVar8 = puVar8 + _SizeOfElements) {
            puVar6 = puVar8;
            puVar10 = local_100;
            guard_check_icall();
            iVar4 = (*_PtFuncCompare)(puVar6,puVar10);
            if (0 < iVar4) {
              local_100 = puVar8;
            }
          }
          if (local_100 != local_fc) {
            puVar8 = local_fc;
            sVar7 = _SizeOfElements;
            do {
              uVar1 = puVar8[(int)local_100 - (int)local_fc];
              (puVar8 + 1)[((int)local_100 - (int)local_fc) + -1] = *puVar8;
              *puVar8 = uVar1;
              sVar7 = sVar7 - 1;
              puVar8 = puVar8 + 1;
            } while (sVar7 != 0);
          }
          local_fc = local_fc + -_SizeOfElements;
          puVar8 = puVar9;
          local_100 = local_108;
        } while (local_108 < local_fc);
      }
      goto LAB_006f4843;
    }
  }
  return;
LAB_006f480a:
  if (local_110 < local_fc) {
    auStack_80[(int)puVar11] = local_110;
    auStack_f8[(int)puVar11] = local_fc;
    puVar11 = puVar11 + 1;
  }
  local_fc = local_100;
  if (local_100 <= local_108) {
LAB_006f4843:
    puVar11 = puVar11 + -1;
    if ((int)puVar11 < 0) {
      return;
    }
    local_108 = (undefined1 *)auStack_80[(int)puVar11];
    local_fc = (undefined1 *)auStack_f8[(int)puVar11];
  }
  goto LAB_006f4402;
}


/* ==== 006f5b30  __libm_sse2_sqrt_precise  size=254 ==== */

/* Library Function - Single Match
    __libm_sse2_sqrt_precise
   
   Library: Visual Studio 2019 Release */

void __libm_sse2_sqrt_precise(void)

{
  undefined4 uVar1;
  ushort in_FPUControlWord;
  short in_XMM0_Wa;
  short in_XMM0_Wb;
  short in_XMM0_Wc;
  ushort in_XMM0_Wd;
  undefined8 local_8;
  
  if (((MXCSR & 0x7f80) != 0x1f80) || ((in_FPUControlWord & 0x7f) != 0x7f)) {
    FUN_006ffd40();
    return;
  }
  if (((in_XMM0_Wd & 0x7ff0) == 0x7ff0) &&
     (((((in_XMM0_Wd & 0xf) != 0 || (in_XMM0_Wc != 0)) || (in_XMM0_Wb != 0)) || (in_XMM0_Wa != 0))))
  {
    local_8._0_4_ = CONCAT22(in_XMM0_Wb,in_XMM0_Wa);
    local_8._0_6_ = CONCAT24(in_XMM0_Wc,(int)local_8);
    local_8._6_1_ = (undefined1)in_XMM0_Wd;
    local_8._7_1_ = (undefined1)(in_XMM0_Wd >> 8);
    local_8 = CONCAT17(local_8._7_1_,CONCAT16(local_8._6_1_,(undefined6)local_8)) | 0x8000000000000;
    uVar1 = 0x3f5;
  }
  else {
    if (((in_XMM0_Wd & 0x8000) == 0) ||
       (((local_8._0_4_ = CONCAT22(in_XMM0_Wb,in_XMM0_Wa), (int)local_8 == 0 &&
         (in_XMM0_Wd == 0x8000)) && (in_XMM0_Wc == 0)))) {
      return;
    }
    local_8 = 0xfff8000000000000;
    uVar1 = 0x31;
  }
  ___libm_error_support(&local_8,&local_8,&local_8,uVar1);
  return;
}


/* ==== 006f6140  __crt_fast_encode_pointer<void_(__stdcall*)(void*,unsigned_long,void*)>  size=31 ==== */

/* Library Function - Single Match
    void (__stdcall*__cdecl __crt_fast_encode_pointer<void (__stdcall*)(void *,unsigned long,void
   *)>(void (__stdcall*const)(void *,unsigned long,void *)))(void *,unsigned long,void *)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

_func_void_void_ptr_ulong_void_ptr * __cdecl
__crt_fast_encode_pointer<void_(__stdcall*)(void*,unsigned_long,void*)>
          (_func_void_void_ptr_ulong_void_ptr *param_1)

{
  byte bVar1;
  
  bVar1 = 0x20 - ((byte)DAT_007c5940 & 0x1f) & 0x1f;
  return (_func_void_void_ptr_ulong_void_ptr *)
         (((uint)param_1 >> bVar1 | (int)param_1 << 0x20 - bVar1) ^ DAT_007c5940);
}


/* ==== 006f63ed  __register_thread_local_exe_atexit_callback  size=38 ==== */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    __register_thread_local_exe_atexit_callback
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __register_thread_local_exe_atexit_callback(_func_void_void_ptr_ulong_void_ptr *param_1)

{
  code *pcVar1;
  int iVar2;
  
  if (DAT_007c8c64 == (_func_void_void_ptr_ulong_void_ptr *)DAT_007c5940) {
    DAT_007c8c64 = __crt_fast_encode_pointer<void_(__stdcall*)(void*,unsigned_long,void*)>(param_1);
    return;
  }
  iVar2 = FUN_006f8965();
  pcVar1 = *(code **)(iVar2 + 0xc);
  if (pcVar1 != (code *)0x0) {
    guard_check_icall();
    (*pcVar1)();
  }
                    /* WARNING: Subroutine does not return */
  FUN_006f6a50();
}


/* ==== 006f6f86  ___acrt_allocate_buffer_for_argv  size=79 ==== */

/* Library Function - Single Match
    ___acrt_allocate_buffer_for_argv
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined4 ___acrt_allocate_buffer_for_argv(uint param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  
  if ((param_1 < 0x3fffffff) && (param_2 < (uint)(0xffffffff / (ulonglong)param_3))) {
    if (param_2 * param_3 < ~(param_1 * 4)) {
      uVar1 = __calloc_base(param_1 * 4 + param_2 * param_3,1);
      FUN_006f9a4d(0);
      return uVar1;
    }
  }
  return 0;
}


/* ==== 006f7796  __initialize_onexit_table  size=41 ==== */

/* Library Function - Single Match
    __initialize_onexit_table
   
   Library: Visual Studio 2019 Release */

undefined4 __initialize_onexit_table(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_007c5940;
  if (param_1 == (int *)0x0) {
    return 0xffffffff;
  }
  if (*param_1 == param_1[2]) {
    *param_1 = DAT_007c5940;
    param_1[1] = iVar1;
    param_1[2] = iVar1;
  }
  return 0;
}


/* ==== 006f77bf  __register_onexit_function  size=51 ==== */

/* Library Function - Single Match
    __register_onexit_function
   
   Library: Visual Studio 2019 Release */

void __register_onexit_function(void)

{
  undefined1 *local_18;
  undefined1 *local_14;
  undefined4 local_10;
  undefined4 local_c;
  __crt_seh_guarded_call<int> local_5;
  
  local_18 = &stack0x00000004;
  local_14 = &stack0x00000008;
  local_c = 2;
  local_10 = 2;
  __crt_seh_guarded_call<int>::
  operator()<<lambda_8e746cf0007f6ed984d6f78af1fec997>,<lambda_22ebabd17bc4fa466a2aca6d8deb888d>&,<lambda_18ed0c0b38a6dc0daf1e7ac6d6adf05e>_>
            (&local_5,(<lambda_8e746cf0007f6ed984d6f78af1fec997> *)&local_10,
             (<lambda_22ebabd17bc4fa466a2aca6d8deb888d> *)&local_18,
             (<lambda_18ed0c0b38a6dc0daf1e7ac6d6adf05e> *)&local_c);
  return;
}


/* ==== 006f78ed  ___acrt_initialize  size=18 ==== */

/* Library Function - Single Match
    ___acrt_initialize
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void ___acrt_initialize(void)

{
  ___acrt_execute_initializers(&PTR_LAB_00733110,&DAT_00733190);
  return;
}


/* ==== 006f78ff  ___acrt_uninitialize  size=48 ==== */

/* Library Function - Single Match
    ___acrt_uninitialize
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined4 ___acrt_uninitialize(char param_1)

{
  undefined4 uVar1;
  
  if (param_1 != '\0') {
    if (DAT_007c8c58 != 0) {
      __flushall();
    }
    return 1;
  }
  uVar1 = ___acrt_execute_uninitializers(&PTR_LAB_00733110,&DAT_00733190);
  return uVar1;
}


/* ==== 006f79a6  ___setusermatherr  size=21 ==== */

/* Library Function - Single Match
    ___setusermatherr
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void ___setusermatherr(_func_void_void_ptr_ulong_void_ptr *param_1)

{
  DAT_007c8da4 = __crt_fast_encode_pointer<void_(__stdcall*)(void*,unsigned_long,void*)>(param_1);
  return;
}


/* ==== 006f7a39  __initterm_e  size=46 ==== */

/* Library Function - Single Match
    __initterm_e
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __initterm_e(undefined4 *param_1,undefined4 *param_2)

{
  code *pcVar1;
  int iVar2;
  
  do {
    if (param_1 == param_2) {
      return 0;
    }
    pcVar1 = (code *)*param_1;
    if (pcVar1 != (code *)0x0) {
      guard_check_icall();
      iVar2 = (*pcVar1)();
      if (iVar2 != 0) {
        return iVar2;
      }
    }
    param_1 = param_1 + 1;
  } while( true );
}


/* ==== 006f7a94  __set_fmode  size=61 ==== */

/* Library Function - Single Match
    __set_fmode
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

errno_t __cdecl __set_fmode(int _Mode)

{
  undefined4 *puVar1;
  
  if (((_Mode != 0x4000) && (_Mode != 0x8000)) && (_Mode != 0x10000)) {
    puVar1 = (undefined4 *)FUN_006f390a();
    *puVar1 = 0x16;
    FUN_006e8c2f();
    return 0x16;
  }
  LOCK();
  DAT_007c9324 = _Mode;
  UNLOCK();
  return 0;
}


/* ==== 006f7ad1  __setmode_nolock  size=207 ==== */

/* Library Function - Single Match
    __setmode_nolock
   
   Library: Visual Studio 2019 Release */

int __cdecl __setmode_nolock(int _FileHandle,int _Mode)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = _FileHandle >> 6;
  iVar4 = (_FileHandle & 0x3fU) * 0x38;
  iVar3 = (&DAT_007c8dc0)[iVar5];
  bVar1 = *(byte *)(iVar3 + 0x28 + iVar4);
  cVar2 = *(char *)(iVar3 + 0x29 + iVar4);
  if (_Mode == 0x4000) {
    *(byte *)(iVar3 + 0x28 + iVar4) = bVar1 | 0x80;
    *(undefined1 *)((&DAT_007c8dc0)[iVar5] + 0x29 + iVar4) = 0;
  }
  else if (_Mode == 0x8000) {
    *(byte *)(iVar3 + 0x28 + iVar4) = bVar1 & 0x7f;
  }
  else if ((_Mode == 0x10000) || (_Mode == 0x20000)) {
    *(byte *)(iVar3 + 0x28 + iVar4) = bVar1 | 0x80;
    *(undefined1 *)((&DAT_007c8dc0)[iVar5] + 0x29 + iVar4) = 2;
  }
  else if (_Mode == 0x40000) {
    *(byte *)(iVar3 + 0x28 + iVar4) = bVar1 | 0x80;
    *(undefined1 *)((&DAT_007c8dc0)[iVar5] + 0x29 + iVar4) = 1;
  }
  if ((bVar1 & 0x80) == 0) {
    iVar3 = 0x8000;
  }
  else if (cVar2 == '\0') {
    iVar3 = 0x4000;
  }
  else {
    iVar3 = ((cVar2 != '\x01') - 1 & 0x30000) + 0x10000;
  }
  return iVar3;
}


/* ==== 006f7c19  ___acrt_uninitialize_locale  size=39 ==== */

/* Library Function - Single Match
    ___acrt_uninitialize_locale
   
   Library: Visual Studio 2019 Release */

void ___acrt_uninitialize_locale(void)

{
  undefined4 local_10;
  undefined4 local_c;
  __crt_seh_guarded_call<void> local_5;
  
  local_c = 4;
  local_10 = 4;
  __crt_seh_guarded_call<void>::
  operator()<<lambda_e5124f882df8998aaf41531e079ba474>,<lambda_3e16ef9562a7dcce91392c22ab16ea36>&,<lambda_e25ca0880e6ef98be67edffd8c599615>_>
            (&local_5,(<lambda_e5124f882df8998aaf41531e079ba474> *)&local_10,
             (<lambda_3e16ef9562a7dcce91392c22ab16ea36> *)&local_5,
             (<lambda_e25ca0880e6ef98be67edffd8c599615> *)&local_c);
  return;
}


/* ==== 006f7c40  __configthreadlocale  size=98 ==== */

/* Library Function - Single Match
    __configthreadlocale
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl __configthreadlocale(int _Flag)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  iVar2 = FUN_006f8965();
  uVar1 = *(uint *)(iVar2 + 0x350);
  if (_Flag == -1) {
    DAT_007c63c8 = 0xffffffff;
  }
  else if (_Flag != 0) {
    if (_Flag == 1) {
      uVar4 = uVar1 | 2;
    }
    else {
      if (_Flag != 2) {
        puVar3 = (undefined4 *)FUN_006f390a();
        *puVar3 = 0x16;
        FUN_006e8c2f();
        return -1;
      }
      uVar4 = uVar1 & 0xfffffffd;
    }
    *(uint *)(iVar2 + 0x350) = uVar4;
  }
  return ((uVar1 & 2) == 0) + 1;
}


/* ==== 006f7ca9  __set_new_mode  size=47 ==== */

/* Library Function - Single Match
    __set_new_mode
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined4 __set_new_mode(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  uVar1 = DAT_007c8db0;
  if ((param_1 != 0) && (param_1 != 1)) {
    puVar2 = (undefined4 *)FUN_006f390a();
    *puVar2 = 0x16;
    FUN_006e8c2f();
    return 0xffffffff;
  }
  LOCK();
  DAT_007c8db0 = param_1;
  UNLOCK();
  return uVar1;
}


/* ==== 006f7cde  __errcode  size=52 ==== */

/* Library Function - Single Match
    __errcode
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

int __errcode(uint param_1)

{
  undefined4 uStack_8;
  
  if ((param_1 & 0x20) == 0) {
    if ((param_1 & 8) != 0) {
      return 1;
    }
    if ((param_1 & 4) == 0) {
      if ((param_1 & 1) == 0) {
        return (param_1 & 2) * 2;
      }
      uStack_8 = 3;
    }
    else {
      uStack_8 = 2;
    }
  }
  else {
    uStack_8 = 5;
  }
  return uStack_8;
}


/* ==== 006f7d12  __except1  size=206 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    __except1
   
   Library: Visual Studio 2015 Release */

float10 __except1(undefined4 param_1,undefined4 param_2,undefined8 param_3,double param_4,
                 undefined4 param_5)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  float10 fVar4;
  undefined1 local_90 [64];
  uint local_50;
  uint local_14;
  
  uVar3 = param_5;
  local_14 = DAT_007c5940 ^ (uint)&stack0xfffffff0;
  iVar2 = FUN_006f7ec2(param_1,&param_4,param_5);
  if (iVar2 == 0) {
    local_50 = local_50 & 0xfffffffe;
    __raise_exc_ex(local_90,&param_5,param_1,param_2,&param_3,&param_4,0);
    uVar3 = param_5;
  }
  iVar2 = __errcode(param_1);
  cVar1 = FUN_006f7944();
  if ((cVar1 == '\0') || (iVar2 == 0)) {
    FUN_006f8463(iVar2);
    __ctrlfp();
    fVar4 = (float10)param_4;
  }
  else {
    fVar4 = (float10)FUN_006f8494(iVar2,param_2,param_3,0,param_4,uVar3);
  }
  return fVar4;
}


/* ==== 006f814f  __raise_exc  size=35 ==== */

/* Library Function - Single Match
    __raise_exc
   
   Library: Visual Studio 2015 Release */

void __raise_exc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6)

{
  __raise_exc_ex(param_1,param_2,param_3,param_4,param_5,param_6,0);
  return;
}


/* ==== 006f8172  __raise_exc_ex  size=753 ==== */

/* Library Function - Single Match
    __raise_exc_ex
   
   Library: Visual Studio 2015 Release */

void __raise_exc_ex(uint *param_1,uint *param_2,uint param_3,int param_4,uint *param_5,uint *param_6
                   ,int param_7)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  DWORD dwExceptionCode;
  
  puVar1 = param_2;
  param_1[1] = 0;
  dwExceptionCode = 0xc000000d;
  param_1[2] = 0;
  param_1[3] = 0;
  if ((param_3 & 0x10) != 0) {
    dwExceptionCode = 0xc000008f;
    param_1[1] = param_1[1] | 1;
  }
  if ((param_3 & 2) != 0) {
    dwExceptionCode = 0xc0000093;
    param_1[1] = param_1[1] | 2;
  }
  if ((param_3 & 1) != 0) {
    dwExceptionCode = 0xc0000091;
    param_1[1] = param_1[1] | 4;
  }
  if ((param_3 & 4) != 0) {
    dwExceptionCode = 0xc000008e;
    param_1[1] = param_1[1] | 8;
  }
  if ((param_3 & 8) != 0) {
    dwExceptionCode = 0xc0000090;
    param_1[1] = param_1[1] | 0x10;
  }
  param_1[2] = param_1[2] ^ (~(*param_2 << 4) ^ param_1[2]) & 0x10;
  param_1[2] = param_1[2] ^ (~(*param_2 * 2) ^ param_1[2]) & 8;
  param_1[2] = param_1[2] ^ (~(*param_2 >> 1) ^ param_1[2]) & 4;
  param_1[2] = param_1[2] ^ (~(*param_2 >> 3) ^ param_1[2]) & 2;
  param_1[2] = param_1[2] ^ (~(*param_2 >> 5) ^ param_1[2]) & 1;
  uVar3 = FUN_006ff977();
  puVar2 = param_6;
  if ((uVar3 & 1) != 0) {
    param_1[3] = param_1[3] | 0x10;
  }
  if ((uVar3 & 4) != 0) {
    param_1[3] = param_1[3] | 8;
  }
  if ((uVar3 & 8) != 0) {
    param_1[3] = param_1[3] | 4;
  }
  if ((uVar3 & 0x10) != 0) {
    param_1[3] = param_1[3] | 2;
  }
  if ((uVar3 & 0x20) != 0) {
    param_1[3] = param_1[3] | 1;
  }
  uVar3 = *puVar1 & 0xc00;
  if (uVar3 == 0) {
    *param_1 = *param_1 & 0xfffffffc;
  }
  else {
    if (uVar3 == 0x400) {
      uVar3 = *param_1 & 0xfffffffd | 1;
    }
    else {
      if (uVar3 != 0x800) {
        if (uVar3 == 0xc00) {
          *param_1 = *param_1 | 3;
        }
        goto LAB_006f82d4;
      }
      uVar3 = *param_1 & 0xfffffffe | 2;
    }
    *param_1 = uVar3;
  }
LAB_006f82d4:
  uVar3 = *puVar1 & 0x300;
  if (uVar3 == 0) {
    uVar3 = *param_1 & 0xffffffeb | 8;
LAB_006f830a:
    *param_1 = uVar3;
  }
  else {
    if (uVar3 == 0x200) {
      uVar3 = *param_1 & 0xffffffe7 | 4;
      goto LAB_006f830a;
    }
    if (uVar3 == 0x300) {
      *param_1 = *param_1 & 0xffffffe3;
    }
  }
  *param_1 = *param_1 ^ (param_4 << 5 ^ *param_1) & 0x1ffe0;
  param_1[8] = param_1[8] | 1;
  if (param_7 == 0) {
    param_1[8] = param_1[8] & 0xffffffe3 | 2;
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)param_5;
    param_1[0x18] = param_1[0x18] | 1;
    param_1[0x18] = param_1[0x18] & 0xffffffe3 | 2;
    *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)param_6;
  }
  else {
    param_1[8] = param_1[8] & 0xffffffe1;
    param_1[4] = *param_5;
    param_1[0x18] = param_1[0x18] | 1;
    param_1[0x18] = param_1[0x18] & 0xffffffe1;
    param_1[0x14] = *param_6;
  }
  FUN_006ff8e3();
  RaiseException(dwExceptionCode,0,1,(ULONG_PTR *)&param_1);
  if ((param_1[2] & 0x10) != 0) {
    *puVar1 = *puVar1 & 0xfffffffe;
  }
  if ((param_1[2] & 8) != 0) {
    *puVar1 = *puVar1 & 0xfffffffb;
  }
  if ((param_1[2] & 4) != 0) {
    *puVar1 = *puVar1 & 0xfffffff7;
  }
  if ((param_1[2] & 2) != 0) {
    *puVar1 = *puVar1 & 0xffffffef;
  }
  if ((param_1[2] & 1) != 0) {
    *puVar1 = *puVar1 & 0xffffffdf;
  }
  uVar3 = *param_1 & 3;
  if (uVar3 == 0) {
    *puVar1 = *puVar1 & 0xfffff3ff;
  }
  else {
    if (uVar3 == 1) {
      uVar3 = *puVar1 & 0xfffff7ff | 0x400;
    }
    else {
      if (uVar3 != 2) {
        if (uVar3 == 3) {
          *puVar1 = *puVar1 | 0xc00;
        }
        goto LAB_006f841b;
      }
      uVar3 = *puVar1 & 0xfffffbff | 0x800;
    }
    *puVar1 = uVar3;
  }
LAB_006f841b:
  uVar3 = *param_1 >> 2 & 7;
  if (uVar3 == 0) {
    uVar3 = *puVar1 & 0xfffff3ff | 0x300;
  }
  else {
    if (uVar3 != 1) {
      if (uVar3 == 2) {
        *puVar1 = *puVar1 & 0xfffff3ff;
      }
      goto LAB_006f844c;
    }
    uVar3 = *puVar1 & 0xfffff3ff | 0x200;
  }
  *puVar1 = uVar3;
LAB_006f844c:
  if (param_7 == 0) {
    *(undefined8 *)puVar2 = *(undefined8 *)(param_1 + 0x14);
  }
  else {
    *puVar2 = param_1[0x14];
  }
  return;
}


/* ==== 006f8534  __controlfp_s  size=95 ==== */

/* Library Function - Single Match
    __controlfp_s
   
   Library: Visual Studio 2019 Release */

errno_t __cdecl __controlfp_s(uint *_CurrentState,uint _NewValue,uint _Mask)

{
  undefined4 *puVar1;
  errno_t eVar2;
  uint uVar3;
  
  uVar3 = _Mask & 0xfff7ffff;
  if ((_NewValue & uVar3 & 0xfcf0fce0) == 0) {
    if (_CurrentState == (uint *)0x0) {
      __control87(_NewValue,uVar3);
    }
    else {
      uVar3 = __control87(_NewValue,uVar3);
      *_CurrentState = uVar3;
    }
    eVar2 = 0;
  }
  else {
    if (_CurrentState != (uint *)0x0) {
      uVar3 = __control87(0,0);
      *_CurrentState = uVar3;
    }
    puVar1 = (undefined4 *)FUN_006f390a();
    eVar2 = 0x16;
    *puVar1 = 0x16;
    FUN_006e8c2f();
  }
  return eVar2;
}


/* ==== 006f85ed  _wcsncmp  size=58 ==== */

/* Library Function - Single Match
    _wcsncmp
   
   Library: Visual Studio 2019 Release */

int __cdecl _wcsncmp(wchar_t *_Str1,wchar_t *_Str2,size_t _MaxCount)

{
  if (_MaxCount != 0) {
    for (; ((_MaxCount = _MaxCount - 1, _MaxCount != 0 && (*_Str1 != L'\0')) && (*_Str1 == *_Str2));
        _Str1 = _Str1 + 1) {
      _Str2 = _Str2 + 1;
    }
    return (uint)(ushort)*_Str1 - (uint)(ushort)*_Str2;
  }
  return 0;
}


/* ==== 006f8c50  __fileno  size=39 ==== */

/* Library Function - Single Match
    __fileno
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl __fileno(FILE *_File)

{
  undefined4 *puVar1;
  
  if (_File == (FILE *)0x0) {
    puVar1 = (undefined4 *)FUN_006f390a();
    *puVar1 = 0x16;
    FUN_006e8c2f();
    return -1;
  }
  return _File->_file;
}


/* ==== 006f9c8b  __acrt_stdio_allocate_stream  size=93 ==== */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    class __crt_stdio_stream __cdecl __acrt_stdio_allocate_stream(void)
   
   Library: Visual Studio 2019 Release */

undefined4 * __cdecl __acrt_stdio_allocate_stream(void)

{
  undefined4 *puVar1;
  undefined4 *in_stack_00000004;
  void *local_14;
  
  *in_stack_00000004 = 0;
  ___acrt_lock(8);
  puVar1 = (undefined4 *)find_or_allocate_unused_stream_nolock();
  puVar1 = (undefined4 *)*puVar1;
  *in_stack_00000004 = puVar1;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[2] = 0;
    puVar1[7] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[4] = 0xffffffff;
  }
  FUN_006f9ceb();
  ExceptionList = local_14;
  return in_stack_00000004;
}


/* ==== 006f9cf4  __acrt_stdio_free_stream  size=59 ==== */

/* Library Function - Single Match
    void __cdecl __acrt_stdio_free_stream(class __crt_stdio_stream)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl __acrt_stdio_free_stream(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[4] = 0xffffffff;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  LOCK();
  param_1[3] = 0;
  UNLOCK();
  return;
}


/* ==== 006f9df1  ___acrt_stdio_free_buffer_nolock  size=64 ==== */

/* Library Function - Single Match
    ___acrt_stdio_free_buffer_nolock
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void ___acrt_stdio_free_buffer_nolock(undefined4 *param_1)

{
  uint *puVar1;
  
  puVar1 = param_1 + 3;
  if (((*puVar1 >> 0xd & 1) != 0) && ((*puVar1 >> 6 & 1) != 0)) {
    FUN_006f9a4d(param_1[1]);
    LOCK();
    *puVar1 = *puVar1 & 0xfffffebf;
    UNLOCK();
    param_1[1] = 0;
    *param_1 = 0;
    param_1[2] = 0;
  }
  return;
}


/* ==== 006fa0d8  __flushall  size=9 ==== */

/* Library Function - Single Match
    __flushall
   
   Library: Visual Studio 2019 Release */

int __cdecl __flushall(void)

{
  int iVar1;
  
  iVar1 = common_flush_all(true);
  return iVar1;
}


/* ==== 006fa27b  __malloc_base  size=78 ==== */

/* Library Function - Single Match
    __malloc_base
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

LPVOID __malloc_base(SIZE_T param_1)

{
  int iVar1;
  LPVOID pvVar2;
  undefined4 *puVar3;
  
  if (param_1 < 0xffffffe1) {
    if (param_1 == 0) {
      param_1 = 1;
    }
    do {
      pvVar2 = HeapAlloc(DAT_007c9320,0,param_1);
      if (pvVar2 != (LPVOID)0x0) {
        return pvVar2;
      }
      iVar1 = FUN_006f7ca2();
    } while ((iVar1 != 0) && (iVar1 = FUN_006f6ad0(param_1), iVar1 != 0));
  }
  puVar3 = (undefined4 *)FUN_006f390a();
  *puVar3 = 0xc;
  return (LPVOID)0x0;
}


/* ==== 006fa59b  ___acrt_update_locale_info  size=45 ==== */

/* Library Function - Single Match
    ___acrt_update_locale_info
   
   Library: Visual Studio 2019 Release */

void ___acrt_update_locale_info(int param_1,int *param_2)

{
  int iVar1;
  
  if ((*param_2 != DAT_007c8db8) && ((*(uint *)(param_1 + 0x350) & DAT_007c63c8) == 0)) {
    iVar1 = FUN_007027d6();
    *param_2 = iVar1;
  }
  return;
}


/* ==== 006fa657  __acrt_fp_classify  size=98 ==== */

/* Library Function - Single Match
    enum __acrt_fp_class __cdecl __acrt_fp_classify(double const &)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

__acrt_fp_class __cdecl __acrt_fp_classify(double *param_1)

{
  uint uVar1;
  undefined4 uStack_10;
  
  uVar1 = *(uint *)((int)param_1 + 4);
  if ((uVar1 >> 0x14 & 0x7ff) == 0x7ff) {
    if (*(int *)param_1 == 0 && (uVar1 & 0xfffff) == 0) {
      uStack_10 = 1;
    }
    else if (((((int)uVar1 < 1) && ((int)uVar1 < 0)) && (*(int *)param_1 == 0)) &&
            ((uVar1 & 0xfffff) == 0x80000)) {
      uStack_10 = 4;
    }
    else if ((uVar1 & 0x80000) == 0) {
      uStack_10 = 3;
    }
    else {
      uStack_10 = 2;
    }
  }
  else {
    uStack_10 = 0;
  }
  return uStack_10;
}


/* ==== 006fb698  __crt_time_elapsed_leap_years<>  size=58 ==== */

/* Library Function - Multiple Matches With Same Base Name
    int __cdecl __crt_time_elapsed_leap_years<int>(int)
    long __cdecl __crt_time_elapsed_leap_years<long>(long)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

int __crt_time_elapsed_leap_years<>(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 + -1;
  return ((int)(iVar1 + (iVar1 >> 0x1f & 3U)) >> 2) + -0x11 + ((param_1 + 299) / 400 - iVar1 / 100);
}


/* ==== 006fc47e  ___tzset  size=84 ==== */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    ___tzset
   
   Library: Visual Studio 2019 Release */

void __cdecl ___tzset(void)

{
  undefined4 local_14;
  
  if (DAT_007c8ff4 == 0) {
    ___acrt_lock(6);
    if (DAT_007c8ff4 == 0) {
      FUN_006fc3c6();
      LOCK();
      DAT_007c8ff4 = DAT_007c8ff4 + 1;
      UNLOCK();
    }
    FUN_006fc4d2();
  }
  ExceptionList = local_14;
  return;
}


/* ==== 006fc4db  __isindst  size=72 ==== */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    __isindst
   
   Library: Visual Studio 2019 Release */

int __cdecl __isindst(tm *_Time)

{
  int iVar1;
  undefined4 local_14;
  
  ___acrt_lock(6);
  iVar1 = FUN_006fbbbf(_Time);
  FUN_006fc526();
  ExceptionList = local_14;
  return iVar1;
}


/* ==== 006fc52f  ___pctype_func  size=36 ==== */

/* Library Function - Single Match
    ___pctype_func
   
   Library: Visual Studio 2019 Release */

ushort * __cdecl ___pctype_func(void)

{
  int iVar1;
  undefined4 *local_8;
  
  iVar1 = FUN_006f8965();
  local_8 = *(undefined4 **)(iVar1 + 0x4c);
  ___acrt_update_locale_info(iVar1,&local_8);
  return (ushort *)*local_8;
}


/* ==== 006fc553  _iswctype  size=105 ==== */

/* Library Function - Single Match
    _iswctype
   
   Library: Visual Studio 2019 Release */

int __cdecl _iswctype(wint_t _C,wctype_t _Type)

{
  int iVar1;
  uint in_ECX;
  wint_t local_c;
  undefined2 uStack_a;
  uint local_8;
  
  if (_C != 0xffff) {
    if (_C < 0x100) {
      return (uint)(*(ushort *)(PTR_DAT_007c5e30 + (uint)_C * 2) & _Type);
    }
    _local_c = CONCAT22((short)(in_ECX >> 0x10),_C);
    local_8 = in_ECX & 0xffff0000;
    iVar1 = ___acrt_GetStringTypeW(1,&local_c,1,&local_8);
    if (iVar1 != 0) {
      return (uint)((ushort)local_8 & _Type);
    }
  }
  return 0;
}


/* ==== 006fc5bc  __isctype_l  size=203 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    __isctype_l
   
   Library: Visual Studio 2019 Release */

int __cdecl __isctype_l(int _C,int _Type,_locale_t _Locale)

{
  undefined4 uVar1;
  int iVar2;
  int local_24;
  int *local_20 [2];
  char local_18;
  undefined1 local_14;
  undefined1 local_13;
  undefined1 local_12;
  undefined4 local_10;
  undefined2 local_c;
  uint local_8;
  
  local_8 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  FUN_006ee0ac(_Locale);
  if ((_C < -1) || (0xff < _C)) {
    if (*(short *)(*local_20[0] + (_C >> 8 & 0xffU) * 2) < 0) {
      local_12 = 0;
      uVar1 = 2;
      local_14 = (char)((uint)_C >> 8);
      local_13 = (char)_C;
    }
    else {
      local_13 = 0;
      uVar1 = 1;
      local_14 = (char)_C;
    }
    local_10 = 0;
    local_c = 0;
    iVar2 = FUN_0070240c(local_20,1,&local_14,uVar1,&local_10,local_20[0][2],1);
    if (iVar2 == 0) {
      if (local_18 != '\0') {
        *(uint *)(local_24 + 0x350) = *(uint *)(local_24 + 0x350) & 0xfffffffd;
      }
      return 0;
    }
  }
  else {
    local_10._0_2_ = *(ushort *)(*local_20[0] + _C * 2);
  }
  if (local_18 != '\0') {
    *(uint *)(local_24 + 0x350) = *(uint *)(local_24 + 0x350) & 0xfffffffd;
  }
  return (uint)(ushort)local_10 & _Type;
}


/* ==== 006fc687  __calloc_base  size=93 ==== */

/* Library Function - Single Match
    __calloc_base
   
   Library: Visual Studio 2019 Release */

LPVOID __calloc_base(uint param_1,uint param_2)

{
  int iVar1;
  LPVOID pvVar2;
  undefined4 *puVar3;
  SIZE_T dwBytes;
  
  if ((param_1 == 0) || (param_2 <= 0xffffffe0 / param_1)) {
    dwBytes = param_1 * param_2;
    if (dwBytes == 0) {
      dwBytes = 1;
    }
    do {
      pvVar2 = HeapAlloc(DAT_007c9320,8,dwBytes);
      if (pvVar2 != (LPVOID)0x0) {
        return pvVar2;
      }
      iVar1 = FUN_006f7ca2();
    } while ((iVar1 != 0) && (iVar1 = FUN_006f6ad0(dwBytes), iVar1 != 0));
  }
  puVar3 = (undefined4 *)FUN_006f390a();
  *puVar3 = 0xc;
  return (LPVOID)0x0;
}


/* ==== 006fc6e4  __fgetc_nolock  size=60 ==== */

/* Library Function - Single Match
    __fgetc_nolock
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

uint __fgetc_nolock(undefined4 *param_1)

{
  int *piVar1;
  byte bVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  if (param_1 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)FUN_006f390a();
    *puVar3 = 0x16;
    FUN_006e8c2f();
    return 0xffffffff;
  }
  piVar1 = param_1 + 2;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 < 0) {
    uVar4 = FUN_006fa270(param_1);
    return uVar4;
  }
  bVar2 = *(byte *)*param_1;
  *param_1 = (byte *)*param_1 + 1;
  return (uint)bVar2;
}


/* ==== 006fc927  ___acrt_LCMapStringA  size=73 ==== */

/* Library Function - Single Match
    ___acrt_LCMapStringA
   
   Library: Visual Studio 2019 Release */

void ___acrt_LCMapStringA
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
               undefined4 param_9)

{
  int local_14;
  undefined1 local_10 [8];
  char local_8;
  
  FUN_006ee0ac(param_1);
  FUN_006fc738(local_10,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  if (local_8 != '\0') {
    *(uint *)(local_14 + 0x350) = *(uint *)(local_14 + 0x350) & 0xfffffffd;
  }
  return;
}


/* ==== 006fc970  __acrt_stdio_parse_mode<char>  size=554 ==== */

/* Library Function - Single Match
    struct __acrt_stdio_stream_mode __cdecl __acrt_stdio_parse_mode<char>(char const * const)
   
   Library: Visual Studio 2019 Release */

char * __cdecl __acrt_stdio_parse_mode<char>(char *param_1)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  uint3 in_ECX;
  char *pcVar8;
  char *in_stack_00000008;
  undefined4 uStack_8;
  
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
  *(undefined4 *)(param_1 + 4) = DAT_007c8db4;
  for (; cVar4 = *in_stack_00000008, cVar4 == ' '; in_stack_00000008 = in_stack_00000008 + 1) {
  }
  if (cVar4 == 'a') {
    param_1[0] = '\t';
    param_1[1] = '\x01';
    param_1[2] = '\0';
    param_1[3] = '\0';
LAB_006fc9ce:
    param_1[4] = '\x02';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
  }
  else {
    if (cVar4 != 'r') {
      if (cVar4 != 'w') {
        puVar5 = (undefined4 *)FUN_006f390a();
        *puVar5 = 0x16;
        FUN_006e8c2f();
        return param_1;
      }
      param_1[0] = '\x01';
      param_1[1] = '\x03';
      param_1[2] = '\0';
      param_1[3] = '\0';
      goto LAB_006fc9ce;
    }
    param_1[4] = '\x01';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
  }
  pcVar8 = in_stack_00000008 + 1;
  uStack_8 = (uint)(in_ECX & 0xffff);
  bVar3 = false;
  bVar2 = false;
  cVar4 = '\x01';
  do {
    cVar1 = *pcVar8;
    if (cVar1 == '\0') break;
    if (cVar1 < 'T') {
      if (cVar1 == 'S') {
        if (bVar2) goto LAB_006fca3f;
        *(uint *)param_1 = *(uint *)param_1 | 0x20;
LAB_006fca57:
        bVar2 = true;
        cVar4 = '\x01';
      }
      else if (cVar1 != ' ') {
        if (cVar1 == '+') {
          cVar4 = __acrt_stdio_parse_mode_plus
                            ((__acrt_stdio_stream_mode *)param_1,(bool *)((int)&uStack_8 + 2));
        }
        else if (cVar1 == ',') {
          bVar3 = true;
LAB_006fca3f:
          cVar4 = '\0';
        }
        else if (cVar1 == 'D') {
          cVar4 = __acrt_stdio_parse_mode_D((__acrt_stdio_stream_mode *)param_1);
        }
        else {
          if (cVar1 != 'N') {
            if (cVar1 == 'R') {
              if (!bVar2) {
                *(uint *)param_1 = *(uint *)param_1 | 0x10;
                goto LAB_006fca57;
              }
              goto LAB_006fca3f;
            }
            goto LAB_006fcb83;
          }
          *(uint *)param_1 = *(uint *)param_1 | 0x80;
          cVar4 = '\x01';
        }
      }
    }
    else if (cVar1 == 'T') {
      cVar4 = __acrt_stdio_parse_mode_T((__acrt_stdio_stream_mode *)param_1);
    }
    else if (cVar1 == 'b') {
      cVar4 = FID_conflict___acrt_stdio_parse_mode_b(param_1);
    }
    else if (cVar1 == 'c') {
      cVar4 = __acrt_stdio_parse_mode_c
                        ((__acrt_stdio_stream_mode *)param_1,(bool *)((int)&uStack_8 + 3));
    }
    else if (cVar1 == 'n') {
      cVar4 = __acrt_stdio_parse_mode_n
                        ((__acrt_stdio_stream_mode *)param_1,(bool *)((int)&uStack_8 + 3));
    }
    else if (cVar1 == 't') {
      cVar4 = FID_conflict___acrt_stdio_parse_mode_b(param_1);
    }
    else {
      if (cVar1 != 'x') goto LAB_006fcb83;
      cVar4 = __acrt_stdio_parse_mode_x((__acrt_stdio_stream_mode *)param_1);
    }
    pcVar8 = pcVar8 + (cVar4 != '\0');
  } while (cVar4 != '\0');
  if (!bVar3) goto LAB_006fcace;
  do {
    pcVar8 = pcVar8 + 1;
LAB_006fcace:
  } while (*pcVar8 == ' ');
  if (bVar3) {
    iVar6 = _strncmp(pcVar8,"ccs",3);
    if (iVar6 != 0) goto LAB_006fcb83;
    for (pcVar8 = pcVar8 + 3; *pcVar8 == ' '; pcVar8 = pcVar8 + 1) {
    }
    if (*pcVar8 != '=') goto LAB_006fcb83;
    do {
      pcVar8 = pcVar8 + 1;
    } while (*pcVar8 == ' ');
    iVar6 = 5;
    iVar7 = __strnicmp(pcVar8,"UTF-8",5);
    if (iVar7 == 0) {
      *(uint *)param_1 = *(uint *)param_1 | 0x40000;
    }
    else {
      iVar6 = 8;
      iVar7 = __strnicmp(pcVar8,"UTF-16LEUNICODE",8);
      if (iVar7 == 0) {
        *(uint *)param_1 = *(uint *)param_1 | 0x20000;
      }
      else {
        iVar6 = 7;
        iVar7 = __strnicmp(pcVar8,"UNICODE",7);
        if (iVar7 != 0) goto LAB_006fcb83;
        *(uint *)param_1 = *(uint *)param_1 | 0x10000;
      }
    }
    for (pcVar8 = pcVar8 + iVar6; cVar4 = *pcVar8, cVar4 == ' '; pcVar8 = pcVar8 + 1) {
    }
  }
  else {
    cVar4 = *pcVar8;
  }
  if (cVar4 == '\0') {
    param_1[8] = '\x01';
    return param_1;
  }
LAB_006fcb83:
  puVar5 = (undefined4 *)FUN_006f390a();
  *puVar5 = 0x16;
  FUN_006e8c2f();
  return param_1;
}


/* ==== 006fcc1d  __acrt_stdio_parse_mode_D  size=27 ==== */

/* Library Function - Single Match
    bool __cdecl __acrt_stdio_parse_mode_D(struct __acrt_stdio_stream_mode &)
   
   Library: Visual Studio 2019 Release */

bool __cdecl __acrt_stdio_parse_mode_D(__acrt_stdio_stream_mode *param_1)

{
  if ((*(uint *)param_1 & 0x40) != 0) {
    return false;
  }
  *(uint *)param_1 = *(uint *)param_1 | 0x40;
  return true;
}


/* ==== 006fcc38  __acrt_stdio_parse_mode_T  size=31 ==== */

/* Library Function - Single Match
    bool __cdecl __acrt_stdio_parse_mode_T(struct __acrt_stdio_stream_mode &)
   
   Library: Visual Studio 2019 Release */

bool __cdecl __acrt_stdio_parse_mode_T(__acrt_stdio_stream_mode *param_1)

{
  if ((*(uint *)param_1 & 0x1000) != 0) {
    return false;
  }
  *(uint *)param_1 = *(uint *)param_1 | 0x1000;
  return true;
}


/* ==== 006fcc77  __acrt_stdio_parse_mode_c  size=34 ==== */

/* Library Function - Single Match
    bool __cdecl __acrt_stdio_parse_mode_c(struct __acrt_stdio_stream_mode &,bool &)
   
   Library: Visual Studio 2019 Release */

bool __cdecl __acrt_stdio_parse_mode_c(__acrt_stdio_stream_mode *param_1,bool *param_2)

{
  if (*param_2 != false) {
    return false;
  }
  *param_2 = true;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x800;
  return true;
}


/* ==== 006fcc99  __acrt_stdio_parse_mode_n  size=34 ==== */

/* Library Function - Single Match
    bool __cdecl __acrt_stdio_parse_mode_n(struct __acrt_stdio_stream_mode &,bool &)
   
   Library: Visual Studio 2019 Release */

bool __cdecl __acrt_stdio_parse_mode_n(__acrt_stdio_stream_mode *param_1,bool *param_2)

{
  if (*param_2 != false) {
    return false;
  }
  *param_2 = true;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffff7ff;
  return true;
}


/* ==== 006fccbb  __acrt_stdio_parse_mode_plus  size=54 ==== */

/* Library Function - Single Match
    bool __cdecl __acrt_stdio_parse_mode_plus(struct __acrt_stdio_stream_mode &,bool &)
   
   Library: Visual Studio 2019 Release */

bool __cdecl __acrt_stdio_parse_mode_plus(__acrt_stdio_stream_mode *param_1,bool *param_2)

{
  if (*param_2 == false) {
    *param_2 = true;
    if ((*(uint *)param_1 & 2) == 0) {
      *(uint *)param_1 = *(uint *)param_1 & 0xfffffffe | 2;
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffc | 4;
      return true;
    }
  }
  return false;
}


/* ==== 006fcd11  __acrt_stdio_parse_mode_x  size=32 ==== */

/* Library Function - Single Match
    bool __cdecl __acrt_stdio_parse_mode_x(struct __acrt_stdio_stream_mode &)
   
   Library: Visual Studio 2019 Release */

bool __cdecl __acrt_stdio_parse_mode_x(__acrt_stdio_stream_mode *param_1)

{
  if ((*(uint *)param_1 & 0x200) == 0) {
    return false;
  }
  *(uint *)param_1 = *(uint *)param_1 | 0x400;
  return true;
}


/* ==== 006fdd54  ___acrt_AreFileApisANSI@0  size=31 ==== */

/* Library Function - Single Match
    ___acrt_AreFileApisANSI@0
   
   Library: Visual Studio 2019 Release */

int ___acrt_AreFileApisANSI_0(void)

{
  _func_int *p_Var1;
  int iVar2;
  
  p_Var1 = try_get_AreFileApisANSI();
  if (p_Var1 != (_func_int *)0x0) {
    guard_check_icall();
    iVar2 = (*p_Var1)();
    return iVar2;
  }
  return 1;
}


/* ==== 006fdd73  ___acrt_CompareStringEx@36  size=93 ==== */

/* Library Function - Single Match
    ___acrt_CompareStringEx@36
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void ___acrt_CompareStringEx_36
               (wchar_t *param_1,ulong param_2,wchar_t *param_3,int param_4,wchar_t *param_5,
               int param_6,_nlsversioninfo *param_7,void *param_8,long param_9)

{
  _func_int_wchar_t_ptr_ulong_wchar_t_ptr_int_wchar_t_ptr_int__nlsversioninfo_ptr_void_ptr_long
  *p_Var1;
  LCID Locale;
  
  p_Var1 = try_get_CompareStringEx();
  if (p_Var1 == (_func_int_wchar_t_ptr_ulong_wchar_t_ptr_int_wchar_t_ptr_int__nlsversioninfo_ptr_void_ptr_long
                 *)0x0) {
    Locale = ___acrt_LocaleNameToLCID_8(param_1,0);
    CompareStringW(Locale,param_2,param_3,param_4,param_5,param_6);
  }
  else {
    guard_check_icall();
    (*p_Var1)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  }
  return;
}


/* ==== 006fddd0  ___acrt_FlsAlloc@4  size=63 ==== */

/* Library Function - Single Match
    ___acrt_FlsAlloc@4
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void ___acrt_FlsAlloc_4(undefined4 param_1)

{
  code *pcVar1;
  
  pcVar1 = (code *)FUN_006fdc8f(0x1f,"FlsAlloc",&DAT_007346b8,&DAT_007346c0);
  if (pcVar1 == (code *)0x0) {
    TlsAlloc();
  }
  else {
    guard_check_icall(param_1);
    (*pcVar1)();
  }
  return;
}


/* ==== 006fde8d  ___acrt_FlsSetValue@8  size=66 ==== */

/* Library Function - Single Match
    ___acrt_FlsSetValue@8
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void ___acrt_FlsSetValue_8(DWORD param_1,LPVOID param_2)

{
  code *pcVar1;
  
  pcVar1 = (code *)FUN_006fdc8f(0x22,"FlsSetValue",&DAT_007346d0,&DAT_007346d8);
  if (pcVar1 != (code *)0x0) {
    guard_check_icall(param_1,param_2);
    (*pcVar1)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x006fdec9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TlsSetValue(param_1,param_2);
  return;
}


/* ==== 006fdecf  ___acrt_InitializeCriticalSectionEx@12  size=75 ==== */

/* Library Function - Single Match
    ___acrt_InitializeCriticalSectionEx@12
   
   Library: Visual Studio 2019 Release */

void ___acrt_InitializeCriticalSectionEx_12
               (LPCRITICAL_SECTION param_1,DWORD param_2,undefined4 param_3)

{
  code *pcVar1;
  
  pcVar1 = (code *)FUN_006fdc8f(0xf,"InitializeCriticalSectionEx",&DAT_00734650,&DAT_00734658);
  if (pcVar1 == (code *)0x0) {
    InitializeCriticalSectionAndSpinCount(param_1,param_2);
  }
  else {
    guard_check_icall(param_1,param_2,param_3);
    (*pcVar1)();
  }
  return;
}


/* ==== 006fdf1a  ___acrt_LCMapStringEx@36  size=93 ==== */

/* Library Function - Multiple Matches With Different Base Names
    ___acrt_CompareStringEx@36
    ___acrt_LCMapStringEx@36
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void ___acrt_LCMapStringEx_36
               (wchar_t *param_1,ulong param_2,wchar_t *param_3,int param_4,wchar_t *param_5,
               int param_6,_nlsversioninfo *param_7,void *param_8,long param_9)

{
  _func_int_wchar_t_ptr_ulong_wchar_t_ptr_int_wchar_t_ptr_int__nlsversioninfo_ptr_void_ptr_long
  *p_Var1;
  LCID Locale;
  
  p_Var1 = try_get_LCMapStringEx();
  if (p_Var1 == (_func_int_wchar_t_ptr_ulong_wchar_t_ptr_int_wchar_t_ptr_int__nlsversioninfo_ptr_void_ptr_long
                 *)0x0) {
    Locale = ___acrt_LocaleNameToLCID_8(param_1,0);
    LCMapStringW(Locale,param_2,param_3,param_4,param_5,param_6);
  }
  else {
    guard_check_icall();
    (*p_Var1)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  }
  return;
}


/* ==== 006fdf77  ___acrt_LocaleNameToLCID@8  size=49 ==== */

/* Library Function - Single Match
    ___acrt_LocaleNameToLCID@8
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void ___acrt_LocaleNameToLCID_8(wchar_t *param_1,ulong param_2)

{
  _func_ulong_wchar_t_ptr_ulong *p_Var1;
  
  p_Var1 = try_get_LocaleNameToLCID();
  if (p_Var1 == (_func_ulong_wchar_t_ptr_ulong *)0x0) {
    ___acrt_DownlevelLocaleNameToLCID(param_1);
  }
  else {
    guard_check_icall();
    (*p_Var1)(param_1,param_2);
  }
  return;
}


/* ==== 006fdfbc  ___acrt_uninitialize_winapi_thunks  size=54 ==== */

/* Library Function - Single Match
    ___acrt_uninitialize_winapi_thunks
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined1 ___acrt_uninitialize_winapi_thunks(char param_1)

{
  int *piVar1;
  
  if (param_1 == '\0') {
    piVar1 = &DAT_007c90a8;
    do {
      if (*piVar1 != 0) {
        if (*piVar1 != -1) {
          FreeLibrary((HMODULE)*piVar1);
        }
        *piVar1 = 0;
      }
      piVar1 = piVar1 + 1;
    } while (piVar1 != &DAT_007c9100);
  }
  return 1;
}


/* ==== 006fec1e  __waccess_s  size=190 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    __waccess_s
   
   Library: Visual Studio 2019 Release */

errno_t __cdecl __waccess_s(wchar_t *_Filename,int _AccessMode)

{
  undefined4 *puVar1;
  BOOL BVar2;
  DWORD DVar3;
  errno_t *peVar4;
  errno_t eVar5;
  byte local_2c [36];
  uint local_8;
  
  local_8 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  if (_Filename == (wchar_t *)0x0) {
    puVar1 = (undefined4 *)FUN_006f38f7();
    *puVar1 = 0;
    puVar1 = (undefined4 *)FUN_006f390a();
    eVar5 = 0x16;
    *puVar1 = 0x16;
    FUN_006e8c2f();
  }
  else if ((_AccessMode & 0xfffffff9U) == 0) {
    BVar2 = GetFileAttributesExW(_Filename,GetFileExInfoStandard,local_2c);
    if (BVar2 == 0) {
      DVar3 = GetLastError();
      ___acrt_errno_map_os_error(DVar3);
    }
    else {
      if ((((local_2c[0] & 0x10) != 0) || ((local_2c[0] & 1) == 0)) ||
         (((uint)_AccessMode >> 1 & 1) == 0)) {
        return 0;
      }
      puVar1 = (undefined4 *)FUN_006f38f7();
      *puVar1 = 5;
      puVar1 = (undefined4 *)FUN_006f390a();
      *puVar1 = 0xd;
    }
    peVar4 = (errno_t *)FUN_006f390a();
    eVar5 = *peVar4;
  }
  else {
    puVar1 = (undefined4 *)FUN_006f38f7();
    *puVar1 = 0;
    puVar1 = (undefined4 *)FUN_006f390a();
    eVar5 = 0x16;
    *puVar1 = 0x16;
    FUN_006e8c2f();
  }
  return eVar5;
}


/* ==== 006fecdc  __access_s  size=114 ==== */

/* Library Function - Single Match
    __access_s
   
   Library: Visual Studio 2019 Release */

errno_t __cdecl __access_s(char *_Filename,int _AccessMode)

{
  errno_t eVar1;
  uint uVar2;
  int iVar3;
  undefined4 local_1c;
  undefined4 local_18;
  wchar_t *local_14;
  undefined4 local_10;
  undefined4 local_c;
  char local_8;
  
  if (_Filename == (char *)0x0) {
    eVar1 = __waccess_s((wchar_t *)0x0,_AccessMode);
    return eVar1;
  }
  local_1c = 0;
  local_18 = 0;
  local_14 = (wchar_t *)0x0;
  local_10 = 0;
  local_c = 0;
  local_8 = '\0';
  uVar2 = __acrt_get_utf8_acp_compatibility_codepage();
  iVar3 = __acrt_mbs_to_wcs_cp<__crt_win32_buffer_internal_dynamic_resizing>
                    (_Filename,
                     (__crt_win32_buffer<wchar_t,__crt_win32_buffer_internal_dynamic_resizing> *)
                     &local_1c,uVar2);
  if (iVar3 == 0) {
    eVar1 = __waccess_s(local_14,_AccessMode);
  }
  else {
    eVar1 = -1;
  }
  if (local_8 != '\0') {
    FUN_006f9a4d(local_14);
  }
  return eVar1;
}


/* ==== 006fedf9  __realloc_base  size=105 ==== */

/* Library Function - Single Match
    __realloc_base
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

LPVOID __realloc_base(LPVOID param_1,uint param_2)

{
  LPVOID pvVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (param_1 == (LPVOID)0x0) {
    pvVar1 = (LPVOID)__malloc_base(param_2);
  }
  else {
    if (param_2 == 0) {
      FUN_006f9a4d(param_1);
    }
    else {
      if (param_2 < 0xffffffe1) {
        do {
          pvVar1 = HeapReAlloc(DAT_007c9320,0,param_1,param_2);
          if (pvVar1 != (LPVOID)0x0) {
            return pvVar1;
          }
          iVar3 = FUN_006f7ca2();
        } while ((iVar3 != 0) && (iVar3 = FUN_006f6ad0(param_2), iVar3 != 0));
      }
      puVar2 = (undefined4 *)FUN_006f390a();
      *puVar2 = 0xc;
    }
    pvVar1 = (LPVOID)0x0;
  }
  return pvVar1;
}


/* ==== 006fee62  ___libm_error_support  size=500 ==== */

/* Library Function - Single Match
    ___libm_error_support
   
   Library: Visual Studio 2019 Release */

void ___libm_error_support(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_24;
  char *local_20;
  undefined8 local_1c;
  undefined8 local_14;
  undefined8 local_c;
  
  if (DAT_007c918c == 0) {
    pcVar2 = FUN_006f7970;
  }
  else {
    pcVar2 = DecodePointer(DAT_007cde60);
  }
  if (0x1a < param_4) {
    if (param_4 != 0x1b) {
      if (param_4 == 0x1c) {
        local_20 = "pow";
      }
      else if (param_4 == 0x31) {
        local_20 = "sqrt";
      }
      else if (param_4 == 0x3a) {
        local_20 = "acos";
      }
      else {
        if (param_4 != 0x3d) {
          if ((param_4 != 1000) && (param_4 != 0x3e9)) {
            return;
          }
          uVar1 = *param_1;
          goto LAB_006fef6a;
        }
        local_20 = "asin";
      }
      goto LAB_006fefca;
    }
    local_24 = 2;
LAB_006ff010:
    local_20 = "pow";
    goto LAB_006ff017;
  }
  if (param_4 == 0x1a) {
    uVar1 = 0x3ff0000000000000;
LAB_006fef6a:
    *param_3 = uVar1;
    return;
  }
  if (0xe < param_4) {
    if (param_4 == 0xf) {
      local_20 = "exp";
    }
    else {
      if (param_4 == 0x18) {
        local_24 = 3;
        goto LAB_006ff010;
      }
      if (param_4 != 0x19) {
        return;
      }
      local_20 = "pow";
    }
    local_24 = 4;
    local_1c = *param_1;
    local_14 = *param_2;
    local_c = *param_3;
    guard_check_icall(&local_24);
    (*pcVar2)();
    goto LAB_006ff04d;
  }
  if (param_4 == 0xe) {
    local_24 = 3;
    local_20 = "exp";
  }
  else {
    if (param_4 != 2) {
      if (param_4 == 3) {
        local_20 = "log";
      }
      else {
        if (param_4 == 8) {
          local_24 = 2;
          local_20 = "log10";
          goto LAB_006ff017;
        }
        if (param_4 != 9) {
          return;
        }
        local_20 = "log10";
      }
LAB_006fefca:
      local_24 = 1;
      local_1c = *param_1;
      local_14 = *param_2;
      local_c = *param_3;
      guard_check_icall(&local_24);
      iVar3 = (*pcVar2)();
      if (iVar3 == 0) {
        puVar4 = (undefined4 *)FUN_006f390a();
        *puVar4 = 0x21;
      }
      goto LAB_006ff04d;
    }
    local_24 = 2;
    local_20 = "log";
  }
LAB_006ff017:
  local_1c = *param_1;
  local_14 = *param_2;
  local_c = *param_3;
  guard_check_icall(&local_24);
  iVar3 = (*pcVar2)();
  if (iVar3 == 0) {
    puVar4 = (undefined4 *)FUN_006f390a();
    *puVar4 = 0x22;
  }
LAB_006ff04d:
  *param_3 = local_c;
  return;
}


/* ==== 006ff124  ___acrt_lowio_create_handle_array  size=123 ==== */

/* Library Function - Single Match
    ___acrt_lowio_create_handle_array
   
   Library: Visual Studio 2019 Release */

undefined4 * ___acrt_lowio_create_handle_array(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = (undefined4 *)__calloc_base(0x40,0x38);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else if (puVar2 != puVar2 + 0x380) {
    puVar3 = puVar2 + 8;
    do {
      ___acrt_InitializeCriticalSectionEx_12(puVar3 + -8,4000,0);
      puVar3[-2] = 0xffffffff;
      *(byte *)((int)puVar3 + 0xd) = *(byte *)((int)puVar3 + 0xd) & 0xf8;
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar1 = puVar3 + 6;
      puVar3[2] = 0xa0a0000;
      *(undefined1 *)(puVar3 + 3) = 10;
      *(undefined4 *)((int)puVar3 + 0xe) = 0;
      *(undefined1 *)((int)puVar3 + 0x12) = 0;
      puVar3 = puVar3 + 0xe;
    } while (puVar1 != puVar2 + 0x380);
  }
  FUN_006f9a4d(0);
  return puVar2;
}


/* ==== 006ff19f  ___acrt_lowio_destroy_handle_array  size=53 ==== */

/* Library Function - Single Match
    ___acrt_lowio_destroy_handle_array
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void ___acrt_lowio_destroy_handle_array(LPCRITICAL_SECTION param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    for (lpCriticalSection = param_1;
        lpCriticalSection != (LPCRITICAL_SECTION)&param_1[0x95].RecursionCount;
        lpCriticalSection = (LPCRITICAL_SECTION)&lpCriticalSection[2].RecursionCount) {
      DeleteCriticalSection(lpCriticalSection);
    }
    FUN_006f9a4d(param_1);
  }
  return;
}


/* ==== 006ff1d4  ___acrt_lowio_ensure_fh_exists  size=146 ==== */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    ___acrt_lowio_ensure_fh_exists
   
   Library: Visual Studio 2019 Release */

undefined4 ___acrt_lowio_ensure_fh_exists(uint param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  void *local_14;
  
  if (param_1 < 0x2000) {
    uVar3 = 0;
    ___acrt_lock(7);
    iVar4 = 0;
    iVar2 = DAT_007c8fc0;
    while (iVar2 <= (int)param_1) {
      if ((&DAT_007c8dc0)[iVar4] == 0) {
        iVar2 = ___acrt_lowio_create_handle_array();
        (&DAT_007c8dc0)[iVar4] = iVar2;
        if (iVar2 == 0) {
          uVar3 = 0xc;
          break;
        }
        iVar2 = DAT_007c8fc0 + 0x40;
        DAT_007c8fc0 = iVar2;
      }
      iVar4 = iVar4 + 1;
    }
    FUN_006ff269();
  }
  else {
    puVar1 = (undefined4 *)FUN_006f390a();
    uVar3 = 9;
    *puVar1 = 9;
    FUN_006e8c2f();
  }
  ExceptionList = local_14;
  return uVar3;
}


/* ==== 006ff272  ___acrt_lowio_lock_fh  size=35 ==== */

/* Library Function - Single Match
    ___acrt_lowio_lock_fh
   
   Library: Visual Studio 2019 Release */

void ___acrt_lowio_lock_fh(uint param_1)

{
  EnterCriticalSection
            ((LPCRITICAL_SECTION)((param_1 & 0x3f) * 0x38 + (&DAT_007c8dc0)[(int)param_1 >> 6]));
  return;
}


/* ==== 006ff327  ___acrt_lowio_unlock_fh  size=35 ==== */

/* Library Function - Single Match
    ___acrt_lowio_unlock_fh
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void ___acrt_lowio_unlock_fh(uint param_1)

{
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)((param_1 & 0x3f) * 0x38 + (&DAT_007c8dc0)[(int)param_1 >> 6]));
  return;
}


/* ==== 006ff34a  __alloc_osfhnd  size=263 ==== */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    __alloc_osfhnd
   
   Library: Visual Studio 2019 Release */

int __cdecl __alloc_osfhnd(void)

{
  LPCRITICAL_SECTION p_Var1;
  int iVar2;
  uint uVar3;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar4;
  void *local_14;
  
  ___acrt_lock(7);
  uVar3 = 0xffffffff;
  iVar4 = 0;
  do {
    if (0x7f < iVar4) {
LAB_006ff3b8:
      FUN_006ff454();
      ExceptionList = local_14;
      return uVar3;
    }
    p_Var1 = (LPCRITICAL_SECTION)(&DAT_007c8dc0)[iVar4];
    if (p_Var1 == (LPCRITICAL_SECTION)0x0) {
      iVar2 = ___acrt_lowio_create_handle_array();
      (&DAT_007c8dc0)[iVar4] = iVar2;
      if (iVar2 != 0) {
        DAT_007c8fc0 = DAT_007c8fc0 + 0x40;
        uVar3 = iVar4 << 6;
        ___acrt_lowio_lock_fh(uVar3);
        *(undefined1 *)((&DAT_007c8dc0)[(int)uVar3 >> 6] + 0x28) = 1;
      }
      goto LAB_006ff3b8;
    }
    for (lpCriticalSection = p_Var1;
        lpCriticalSection != (LPCRITICAL_SECTION)&p_Var1[0x95].RecursionCount;
        lpCriticalSection = (LPCRITICAL_SECTION)&lpCriticalSection[2].RecursionCount) {
      if (((uint)lpCriticalSection[1].LockSemaphore & 1) == 0) {
        EnterCriticalSection(lpCriticalSection);
        if (((uint)lpCriticalSection[1].LockSemaphore & 1) == 0) {
          uVar3 = iVar4 * 0x40 + ((int)lpCriticalSection - (int)p_Var1) / 0x38;
          iVar4 = (uVar3 & 0x3f) * 0x38;
          *(undefined1 *)((&DAT_007c8dc0)[(int)uVar3 >> 6] + 0x28 + iVar4) = 1;
          *(undefined4 *)((&DAT_007c8dc0)[(int)uVar3 >> 6] + 0x18 + iVar4) = 0xffffffff;
          goto LAB_006ff3b8;
        }
        LeaveCriticalSection(lpCriticalSection);
      }
    }
    iVar4 = iVar4 + 1;
  } while( true );
}


/* ==== 006ff63a  __copysign  size=35 ==== */

/* Library Function - Single Match
    __copysign
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2019 Release */

double __cdecl __copysign(double _Number,double _Sign)

{
  return (double)CONCAT44((_Sign._4_4_ ^ _Number._4_4_) & 0x7fffffff ^ _Sign._4_4_,_Number._0_4_);
}


/* ==== 006ff65d  __fpclass  size=164 ==== */

/* Library Function - Single Match
    __fpclass
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl __fpclass(double _X)

{
  int iVar1;
  undefined4 uStack_8;
  
  if ((_X._6_2_ & 0x7ff0) == 0x7ff0) {
    iVar1 = FUN_006ff800();
    if (iVar1 == 1) {
      return 0x200;
    }
    if (iVar1 == 2) {
      uStack_8 = 4;
    }
    else {
      if (iVar1 != 3) {
        return 1;
      }
      uStack_8 = 2;
    }
    return uStack_8;
  }
  if ((((ulonglong)_X & 0x7ff0000000000000) == 0) &&
     ((((ulonglong)_X & 0xfffff00000000) != 0 || (_X._0_4_ != 0)))) {
    return (-(uint)(((ulonglong)_X & 0x8000000000000000) != 0) & 0xffffff90) + 0x80;
  }
  if (_X == 0.0) {
    return (-(uint)(((ulonglong)_X & 0x8000000000000000) != 0) & 0xffffffe0) + 0x40;
  }
  return (-(uint)(((ulonglong)_X & 0x8000000000000000) != 0) & 0xffffff08) + 0x100;
}


/* ==== 006ff7d3  __set_exp  size=45 ==== */

/* Library Function - Single Match
    __set_exp
   
   Library: Visual Studio 2019 Release */

float10 __set_exp(undefined8 param_1,short param_2)

{
  undefined8 local_c;
  
  local_c = (double)CONCAT26((param_2 + 0x3fe) * 0x10 | param_1._6_2_ & 0x800f,(undefined6)param_1);
  return (float10)local_c;
}


/* ==== 006ff863  ___set_fpsr_sse2  size=80 ==== */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    ___set_fpsr_sse2
   
   Library: Visual Studio 2019 Release */

void ___set_fpsr_sse2(uint param_1)

{
  undefined4 local_14;
  
  if (0 < DAT_007c8b90) {
    if (((param_1 & 0x40) == 0) || (DAT_007c5e40 == 0)) {
      MXCSR = param_1 & 0xffffffbf;
    }
    else {
      MXCSR = param_1;
    }
  }
  ExceptionList = local_14;
  return;
}


/* ==== 006ff8f4  __ctrlfp  size=42 ==== */

/* Library Function - Single Match
    __ctrlfp
   
   Library: Visual Studio 2019 Release */

int __ctrlfp(void)

{
  short in_FPUControlWord;
  
  return (int)in_FPUControlWord;
}


/* ==== 00700023  ___acrt_lock  size=23 ==== */

/* Library Function - Single Match
    ___acrt_lock
   
   Library: Visual Studio 2019 Release */

void ___acrt_lock(int param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(&DAT_007c9190 + param_1 * 0x18));
  return;
}


/* ==== 0070006b  ___acrt_unlock  size=23 ==== */

/* Library Function - Single Match
    ___acrt_unlock
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void ___acrt_unlock(int param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_007c9190 + param_1 * 0x18));
  return;
}


/* ==== 007002b8  ___acrt_get_sigabrt_handler  size=39 ==== */

/* Library Function - Single Match
    ___acrt_get_sigabrt_handler
   
   Library: Visual Studio 2019 Release */

void ___acrt_get_sigabrt_handler(void)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined1 local_5;
  
  local_c = 3;
  local_10 = 3;
  FUN_007001e6(&local_10,&local_5,&local_c);
  return;
}


/* ==== 00700c94  ___acrt_GetModuleFileNameA  size=161 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    ___acrt_GetModuleFileNameA
   
   Library: Visual Studio 2019 Release */

undefined4 ___acrt_GetModuleFileNameA(HMODULE param_1,undefined4 param_2,undefined4 param_3)

{
  DWORD DVar1;
  uint uVar2;
  undefined4 local_230;
  undefined4 local_22c;
  undefined4 local_228;
  undefined4 local_224;
  undefined4 local_220;
  undefined1 local_21c;
  undefined1 local_215;
  WCHAR local_214 [262];
  uint local_8;
  
  local_8 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  DVar1 = GetModuleFileNameW(param_1,local_214,0x105);
  if (DVar1 == 0) {
    DVar1 = GetLastError();
    ___acrt_errno_map_os_error(DVar1);
    local_220 = 0;
  }
  else {
    local_220 = 0;
    local_230 = param_2;
    local_22c = param_3;
    local_228 = param_2;
    local_224 = param_3;
    local_21c = 0;
    uVar2 = __acrt_get_utf8_acp_compatibility_codepage();
    FUN_00700b97(local_214,&local_230,&local_215,uVar2);
  }
  return local_220;
}


/* ==== 007012b1  ___acrt_initialize_multibyte  size=72 ==== */

/* Library Function - Single Match
    ___acrt_initialize_multibyte
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined4 ___acrt_initialize_multibyte(void)

{
  undefined4 uVar1;
  
  if (DAT_007c9304 == '\0') {
    DAT_007c92fc = &DAT_007c5e50;
    DAT_007c92f8 = &DAT_007c6178;
    DAT_007c92f4 = &DAT_007c6070;
    uVar1 = FUN_006f8a20();
    FUN_007010bc(0xfffffffd,1,uVar1,&DAT_007c92fc);
    DAT_007c9304 = '\x01';
  }
  return 1;
}


/* ==== 00701561  __ismbblead  size=24 ==== */

/* Library Function - Single Match
    __ismbblead
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl __ismbblead(uint _C)

{
  int iVar1;
  
  iVar1 = FUN_00701511(0,_C,0,4);
  return iVar1;
}


/* ==== 00701f67  __recalloc_base  size=109 ==== */

/* Library Function - Single Match
    __recalloc_base
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __recalloc_base(void *param_1,uint param_2,uint param_3)

{
  undefined4 *puVar1;
  int iVar2;
  size_t sVar3;
  
  if ((param_2 == 0) || (param_3 <= 0xffffffe0 / param_2)) {
    if (param_1 == (void *)0x0) {
      sVar3 = 0;
    }
    else {
      sVar3 = FID_conflict___msize_base(param_1);
    }
    param_2 = param_2 * param_3;
    iVar2 = __realloc_base(param_1,param_2);
    if ((iVar2 != 0) && (sVar3 < param_2)) {
      _memset((void *)(iVar2 + sVar3),0,param_2 - sVar3);
    }
  }
  else {
    puVar1 = (undefined4 *)FUN_006f390a();
    *puVar1 = 0xc;
    iVar2 = 0;
  }
  return iVar2;
}


/* ==== 00701fef  ___acrt_execute_initializers  size=104 ==== */

/* Library Function - Single Match
    ___acrt_execute_initializers
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined4 ___acrt_execute_initializers(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  code *pcVar2;
  char cVar3;
  undefined4 *puVar4;
  
  puVar4 = param_1;
  if (param_1 != param_2) {
    do {
      pcVar2 = (code *)*puVar4;
      if (pcVar2 != (code *)0x0) {
        guard_check_icall();
        cVar3 = (*pcVar2)();
        if (cVar3 == '\0') break;
      }
      puVar4 = puVar4 + 2;
    } while (puVar4 != param_2);
    if (puVar4 != param_2) {
      if (puVar4 != param_1) {
        puVar4 = puVar4 + -1;
        do {
          if ((puVar4[-1] != 0) && (pcVar2 = (code *)*puVar4, pcVar2 != (code *)0x0)) {
            guard_check_icall(0);
            (*pcVar2)();
          }
          puVar1 = puVar4 + -1;
          puVar4 = puVar4 + -2;
        } while (puVar1 != param_1);
      }
      return 0;
    }
  }
  return 1;
}


/* ==== 00702057  ___acrt_execute_uninitializers  size=49 ==== */

/* Library Function - Single Match
    ___acrt_execute_uninitializers
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined1 ___acrt_execute_uninitializers(int param_1,int param_2)

{
  code *pcVar1;
  
  for (; param_1 != param_2; param_2 = param_2 + -8) {
    pcVar1 = *(code **)(param_2 + -4);
    if (pcVar1 != (code *)0x0) {
      guard_check_icall(0);
      (*pcVar1)();
    }
  }
  return 1;
}


/* ==== 00702177  ____lc_codepage_func  size=37 ==== */

/* Library Function - Single Match
    ____lc_codepage_func
   
   Library: Visual Studio 2019 Release */

UINT __cdecl ____lc_codepage_func(void)

{
  int iVar1;
  int local_8;
  
  iVar1 = FUN_006f8965();
  local_8 = *(int *)(iVar1 + 0x4c);
  ___acrt_update_locale_info(iVar1,&local_8);
  return *(UINT *)(local_8 + 8);
}


/* ==== 0070219c  ___acrt_locale_free_monetary  size=254 ==== */

/* Library Function - Single Match
    ___acrt_locale_free_monetary
   
   Library: Visual Studio 2019 Release */

void ___acrt_locale_free_monetary(int param_1)

{
  if (param_1 != 0) {
    if (*(undefined **)(param_1 + 0xc) != PTR_DAT_007c637c) {
      FUN_006f9a4d(*(undefined **)(param_1 + 0xc));
    }
    if (*(undefined **)(param_1 + 0x10) != PTR_DAT_007c6380) {
      FUN_006f9a4d(*(undefined **)(param_1 + 0x10));
    }
    if (*(undefined **)(param_1 + 0x14) != PTR_DAT_007c6384) {
      FUN_006f9a4d(*(undefined **)(param_1 + 0x14));
    }
    if (*(undefined **)(param_1 + 0x18) != PTR_DAT_007c6388) {
      FUN_006f9a4d(*(undefined **)(param_1 + 0x18));
    }
    if (*(undefined **)(param_1 + 0x1c) != PTR_DAT_007c638c) {
      FUN_006f9a4d(*(undefined **)(param_1 + 0x1c));
    }
    if (*(undefined **)(param_1 + 0x20) != PTR_DAT_007c6390) {
      FUN_006f9a4d(*(undefined **)(param_1 + 0x20));
    }
    if (*(undefined **)(param_1 + 0x24) != PTR_DAT_007c6394) {
      FUN_006f9a4d(*(undefined **)(param_1 + 0x24));
    }
    if (*(undefined **)(param_1 + 0x38) != PTR_DAT_007c63a8) {
      FUN_006f9a4d(*(undefined **)(param_1 + 0x38));
    }
    if (*(undefined **)(param_1 + 0x3c) != PTR_DAT_007c63ac) {
      FUN_006f9a4d(*(undefined **)(param_1 + 0x3c));
    }
    if (*(undefined **)(param_1 + 0x40) != PTR_DAT_007c63b0) {
      FUN_006f9a4d(*(undefined **)(param_1 + 0x40));
    }
    if (*(undefined **)(param_1 + 0x44) != PTR_DAT_007c63b4) {
      FUN_006f9a4d(*(undefined **)(param_1 + 0x44));
    }
    if (*(undefined **)(param_1 + 0x48) != PTR_DAT_007c63b8) {
      FUN_006f9a4d(*(undefined **)(param_1 + 0x48));
    }
    if (*(undefined **)(param_1 + 0x4c) != PTR_DAT_007c63bc) {
      FUN_006f9a4d(*(undefined **)(param_1 + 0x4c));
    }
  }
  return;
}


/* ==== 0070229a  ___acrt_locale_free_numeric  size=105 ==== */

/* Library Function - Single Match
    ___acrt_locale_free_numeric
   
   Library: Visual Studio 2019 Release */

void ___acrt_locale_free_numeric(int *param_1)

{
  if (param_1 != (int *)0x0) {
    if ((undefined *)*param_1 != PTR_DAT_007c6370) {
      FUN_006f9a4d((undefined *)*param_1);
    }
    if ((undefined *)param_1[1] != PTR_DAT_007c6374) {
      FUN_006f9a4d((undefined *)param_1[1]);
    }
    if ((undefined *)param_1[2] != PTR_DAT_007c6378) {
      FUN_006f9a4d((undefined *)param_1[2]);
    }
    if ((undefined *)param_1[0xc] != PTR_DAT_007c63a0) {
      FUN_006f9a4d((undefined *)param_1[0xc]);
    }
    if ((undefined *)param_1[0xd] != PTR_DAT_007c63a4) {
      FUN_006f9a4d((undefined *)param_1[0xd]);
    }
  }
  return;
}


/* ==== 00702328  ___acrt_locale_free_time  size=228 ==== */

/* Library Function - Single Match
    ___acrt_locale_free_time
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void ___acrt_locale_free_time(int param_1)

{
  if (param_1 != 0) {
    FUN_00702303(param_1,7);
    FUN_00702303(param_1 + 0x1c,7);
    FUN_00702303(param_1 + 0x38,0xc);
    FUN_00702303(param_1 + 0x68,0xc);
    FUN_00702303(param_1 + 0x98,2);
    FUN_006f9a4d(*(undefined4 *)(param_1 + 0xa0));
    FUN_006f9a4d(*(undefined4 *)(param_1 + 0xa4));
    FUN_006f9a4d(*(undefined4 *)(param_1 + 0xa8));
    FUN_00702303(param_1 + 0xb4,7);
    FUN_00702303(param_1 + 0xd0,7);
    FUN_00702303(param_1 + 0xec,0xc);
    FUN_00702303(param_1 + 0x11c,0xc);
    FUN_00702303(param_1 + 0x14c,2);
    FUN_006f9a4d(*(undefined4 *)(param_1 + 0x154));
    FUN_006f9a4d(*(undefined4 *)(param_1 + 0x158));
    FUN_006f9a4d(*(undefined4 *)(param_1 + 0x15c));
    FUN_006f9a4d(*(undefined4 *)(param_1 + 0x160));
  }
  return;
}


/* ==== 0070250d  ___acrt_add_locale_ref  size=125 ==== */

/* Library Function - Single Match
    ___acrt_add_locale_ref
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void ___acrt_add_locale_ref(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  
  LOCK();
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  UNLOCK();
  piVar1 = *(int **)(param_1 + 0x7c);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  piVar1 = *(int **)(param_1 + 0x84);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  piVar1 = *(int **)(param_1 + 0x80);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  piVar1 = *(int **)(param_1 + 0x8c);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  puVar2 = (undefined4 *)(param_1 + 0x28);
  iVar3 = 6;
  do {
    if (((undefined *)puVar2[-2] != &DAT_007c5b48) &&
       (piVar1 = (int *)*puVar2, piVar1 != (int *)0x0)) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    if ((puVar2[-3] != 0) && (piVar1 = (int *)puVar2[-1], piVar1 != (int *)0x0)) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    puVar2 = puVar2 + 4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  ___acrt_locale_add_lc_time_reference(*(undefined4 *)(param_1 + 0x9c));
  return;
}


/* ==== 0070258a  ___acrt_free_locale  size=328 ==== */

/* Library Function - Single Match
    ___acrt_free_locale
   
   Library: Visual Studio 2019 Release */

void ___acrt_free_locale(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int local_8;
  
  if ((((*(undefined ***)(param_1 + 0x88) != (undefined **)0x0) &&
       (*(undefined ***)(param_1 + 0x88) != &PTR_DAT_007c6370)) &&
      (*(int **)(param_1 + 0x7c) != (int *)0x0)) && (**(int **)(param_1 + 0x7c) == 0)) {
    piVar3 = *(int **)(param_1 + 0x84);
    if ((piVar3 != (int *)0x0) && (*piVar3 == 0)) {
      FUN_006f9a4d(piVar3);
      ___acrt_locale_free_monetary(*(undefined4 *)(param_1 + 0x88));
    }
    piVar3 = *(int **)(param_1 + 0x80);
    if ((piVar3 != (int *)0x0) && (*piVar3 == 0)) {
      FUN_006f9a4d(piVar3);
      ___acrt_locale_free_numeric(*(undefined4 *)(param_1 + 0x88));
    }
    FUN_006f9a4d(*(undefined4 *)(param_1 + 0x7c));
    FUN_006f9a4d(*(undefined4 *)(param_1 + 0x88));
  }
  if ((*(int **)(param_1 + 0x8c) != (int *)0x0) && (**(int **)(param_1 + 0x8c) == 0)) {
    FUN_006f9a4d(*(int *)(param_1 + 0x90) + -0xfe);
    FUN_006f9a4d(*(int *)(param_1 + 0x94) + -0x80);
    FUN_006f9a4d(*(int *)(param_1 + 0x98) + -0x80);
    FUN_006f9a4d(*(undefined4 *)(param_1 + 0x8c));
  }
  ___acrt_locale_free_lc_time_if_unreferenced(*(undefined4 *)(param_1 + 0x9c));
  puVar2 = (undefined4 *)(param_1 + 0xa0);
  local_8 = 6;
  piVar3 = (int *)(param_1 + 0x28);
  do {
    if ((((undefined *)piVar3[-2] != &DAT_007c5b48) &&
        (piVar1 = (int *)*piVar3, piVar1 != (int *)0x0)) && (*piVar1 == 0)) {
      FUN_006f9a4d(piVar1);
      FUN_006f9a4d(*puVar2);
    }
    if (((piVar3[-3] != 0) && (piVar1 = (int *)piVar3[-1], piVar1 != (int *)0x0)) && (*piVar1 == 0))
    {
      FUN_006f9a4d(piVar1);
    }
    puVar2 = puVar2 + 1;
    piVar3 = piVar3 + 4;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  FUN_006f9a4d(param_1);
  return;
}


/* ==== 007026d2  ___acrt_locale_add_lc_time_reference  size=41 ==== */

/* Library Function - Single Match
    ___acrt_locale_add_lc_time_reference
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined * ___acrt_locale_add_lc_time_reference(undefined **param_1)

{
  undefined *puVar1;
  
  if ((param_1 != (undefined **)0x0) && (param_1 != &PTR_DAT_00733340)) {
    LOCK();
    param_1 = param_1 + 0x2c;
    puVar1 = *param_1;
    *param_1 = *param_1 + 1;
    UNLOCK();
    return puVar1 + 1;
  }
  return (undefined *)0x7fffffff;
}


/* ==== 007026fb  ___acrt_locale_free_lc_time_if_unreferenced  size=49 ==== */

/* Library Function - Single Match
    ___acrt_locale_free_lc_time_if_unreferenced
   
   Library: Visual Studio 2019 Release */

void ___acrt_locale_free_lc_time_if_unreferenced(undefined **param_1)

{
  if (((param_1 != (undefined **)0x0) && (param_1 != &PTR_DAT_00733340)) &&
     (param_1[0x2c] == (undefined *)0x0)) {
    ___acrt_locale_free_time(param_1);
    FUN_006f9a4d(param_1);
  }
  return;
}


/* ==== 0070272c  ___acrt_locale_release_lc_time_reference  size=41 ==== */

/* Library Function - Single Match
    ___acrt_locale_release_lc_time_reference
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined * ___acrt_locale_release_lc_time_reference(undefined **param_1)

{
  undefined *puVar1;
  
  if ((param_1 != (undefined **)0x0) && (param_1 != &PTR_DAT_00733340)) {
    LOCK();
    param_1 = param_1 + 0x2c;
    puVar1 = *param_1;
    *param_1 = *param_1 + -1;
    UNLOCK();
    return puVar1 + -1;
  }
  return (undefined *)0x7fffffff;
}


/* ==== 00702755  ___acrt_release_locale_ref  size=129 ==== */

/* Library Function - Single Match
    ___acrt_release_locale_ref
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void ___acrt_release_locale_ref(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (param_1 != 0) {
    LOCK();
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
    UNLOCK();
    piVar1 = *(int **)(param_1 + 0x7c);
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    piVar1 = *(int **)(param_1 + 0x84);
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    piVar1 = *(int **)(param_1 + 0x80);
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    piVar1 = *(int **)(param_1 + 0x8c);
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    puVar2 = (undefined4 *)(param_1 + 0x28);
    iVar3 = 6;
    do {
      if (((undefined *)puVar2[-2] != &DAT_007c5b48) &&
         (piVar1 = (int *)*puVar2, piVar1 != (int *)0x0)) {
        LOCK();
        *piVar1 = *piVar1 + -1;
        UNLOCK();
      }
      if ((puVar2[-3] != 0) && (piVar1 = (int *)puVar2[-1], piVar1 != (int *)0x0)) {
        LOCK();
        *piVar1 = *piVar1 + -1;
        UNLOCK();
      }
      puVar2 = puVar2 + 4;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    ___acrt_locale_release_lc_time_reference(*(undefined4 *)(param_1 + 0x9c));
  }
  return;
}


/* ==== 00702857  __updatetlocinfoEx_nolock  size=80 ==== */

/* Library Function - Single Match
    __updatetlocinfoEx_nolock
   
   Library: Visual Studio 2019 Release */

undefined ** __updatetlocinfoEx_nolock(int *param_1,undefined **param_2)

{
  undefined **ppuVar1;
  
  if ((param_2 == (undefined **)0x0) || (param_1 == (int *)0x0)) {
    param_2 = (undefined **)0x0;
  }
  else {
    ppuVar1 = (undefined **)*param_1;
    if (ppuVar1 != param_2) {
      *param_1 = (int)param_2;
      ___acrt_add_locale_ref(param_2);
      if (((ppuVar1 != (undefined **)0x0) &&
          (___acrt_release_locale_ref(ppuVar1), ppuVar1[3] == (undefined *)0x0)) &&
         (ppuVar1 != &PTR_DAT_007c5a88)) {
        ___acrt_free_locale(ppuVar1);
      }
    }
  }
  return param_2;
}


/* ==== 007028a7  ___hw_cw_sse2  size=167 ==== */

/* Library Function - Single Match
    ___hw_cw_sse2
   
   Library: Visual Studio 2019 Release */

uint ___hw_cw_sse2(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (param_1 & 0x10) << 3;
  if ((param_1 & 8) != 0) {
    uVar1 = uVar1 | 0x200;
  }
  if ((param_1 & 4) != 0) {
    uVar1 = uVar1 | 0x400;
  }
  if ((param_1 & 2) != 0) {
    uVar1 = uVar1 | 0x800;
  }
  if ((param_1 & 1) != 0) {
    uVar1 = uVar1 | 0x1000;
  }
  if ((param_1 & 0x80000) != 0) {
    uVar1 = uVar1 | 0x100;
  }
  uVar2 = param_1 & 0x300;
  if (uVar2 != 0) {
    if (uVar2 == 0x100) {
      uVar1 = uVar1 | 0x2000;
    }
    else if (uVar2 == 0x200) {
      uVar1 = uVar1 | 0x4000;
    }
    else if (uVar2 == 0x300) {
      uVar1 = uVar1 | 0x6000;
    }
  }
  param_1 = param_1 & 0x3000000;
  if (param_1 == 0x1000000) {
    uVar1 = uVar1 | 0x8040;
  }
  else {
    if (param_1 == 0x2000000) {
      return uVar1 | 0x40;
    }
    if (param_1 == 0x3000000) {
      return uVar1 | 0x8000;
    }
  }
  return uVar1;
}


/* ==== 0070294e  __clearfp  size=222 ==== */

/* Library Function - Single Match
    __clearfp
   
   Library: Visual Studio 2019 Release */

uint __cdecl __clearfp(void)

{
  uint uVar1;
  uint uVar2;
  ushort in_FPUStatusWord;
  
  if (DAT_007c8b90 < 1) {
    uVar1 = 0;
    if ((in_FPUStatusWord & 0x3f) != 0) {
      uVar1 = (in_FPUStatusWord & 1) << 4;
      if ((in_FPUStatusWord & 4) != 0) {
        uVar1 = uVar1 | 8;
      }
      if ((in_FPUStatusWord & 8) != 0) {
        uVar1 = uVar1 | 4;
      }
      if ((in_FPUStatusWord & 0x10) != 0) {
        uVar1 = uVar1 | 2;
      }
      if ((in_FPUStatusWord & 0x20) != 0) {
        uVar1 = uVar1 | 1;
      }
      if ((in_FPUStatusWord & 2) != 0) {
        uVar1 = uVar1 | 0x80000;
      }
    }
  }
  else {
    uVar1 = 0;
    uVar2 = 0;
    if ((in_FPUStatusWord & 0x3f) != 0) {
      uVar2 = (in_FPUStatusWord & 1) << 4;
      if ((in_FPUStatusWord & 4) != 0) {
        uVar2 = uVar2 | 8;
      }
      if ((in_FPUStatusWord & 8) != 0) {
        uVar2 = uVar2 | 4;
      }
      if ((in_FPUStatusWord & 0x10) != 0) {
        uVar2 = uVar2 | 2;
      }
      if ((in_FPUStatusWord & 0x20) != 0) {
        uVar2 = uVar2 | 1;
      }
      if ((in_FPUStatusWord & 2) != 0) {
        uVar2 = uVar2 | 0x80000;
      }
    }
    if ((MXCSR & 0x3f) != 0) {
      uVar1 = (MXCSR & 1) << 4;
      if ((MXCSR & 4) != 0) {
        uVar1 = uVar1 | 8;
      }
      if ((MXCSR & 8) != 0) {
        uVar1 = uVar1 | 4;
      }
      if ((MXCSR & 0x10) != 0) {
        uVar1 = uVar1 | 2;
      }
      if ((MXCSR & 0x20) != 0) {
        uVar1 = uVar1 | 1;
      }
      if ((MXCSR & 2) != 0) {
        uVar1 = uVar1 | 0x80000;
      }
    }
    uVar1 = uVar1 | uVar2;
    MXCSR = MXCSR & 0xffffffc0;
  }
  return uVar1;
}


/* ==== 00702a2c  __control87  size=769 ==== */

/* Library Function - Single Match
    __control87
   
   Library: Visual Studio 2019 Release */

uint __cdecl __control87(uint _NewValue,uint _Mask)

{
  ushort uVar1;
  undefined4 uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ushort in_FPUControlWord;
  
  uVar4 = (in_FPUControlWord & 1) << 4;
  if ((in_FPUControlWord & 4) != 0) {
    uVar4 = uVar4 | 8;
  }
  if ((in_FPUControlWord & 8) != 0) {
    uVar4 = uVar4 | 4;
  }
  if ((in_FPUControlWord & 0x10) != 0) {
    uVar4 = uVar4 | 2;
  }
  if ((in_FPUControlWord & 0x20) != 0) {
    uVar4 = uVar4 | 1;
  }
  if ((in_FPUControlWord & 2) != 0) {
    uVar4 = uVar4 | 0x80000;
  }
  uVar1 = in_FPUControlWord & 0xc00;
  if ((in_FPUControlWord & 0xc00) != 0) {
    if (uVar1 == 0x400) {
      uVar4 = uVar4 | 0x100;
    }
    else if (uVar1 == 0x800) {
      uVar4 = uVar4 | 0x200;
    }
    else if (uVar1 == 0xc00) {
      uVar4 = uVar4 | 0x300;
    }
  }
  if ((in_FPUControlWord & 0x300) == 0) {
    uVar4 = uVar4 | 0x20000;
  }
  else if ((in_FPUControlWord & 0x300) == 0x200) {
    uVar4 = uVar4 | 0x10000;
  }
  if ((in_FPUControlWord & 0x1000) != 0) {
    uVar4 = uVar4 | 0x40000;
  }
  uVar6 = ~_Mask & uVar4 | _NewValue & _Mask;
  if (uVar6 != uVar4) {
    uVar1 = __hw_cw(uVar6);
    uVar6 = (uVar1 & 1) << 4;
    if ((uVar1 & 4) != 0) {
      uVar6 = uVar6 | 8;
    }
    if ((uVar1 & 8) != 0) {
      uVar6 = uVar6 | 4;
    }
    if ((uVar1 & 0x10) != 0) {
      uVar6 = uVar6 | 2;
    }
    if ((uVar1 & 0x20) != 0) {
      uVar6 = uVar6 | 1;
    }
    if ((uVar1 & 2) != 0) {
      uVar6 = uVar6 | 0x80000;
    }
    uVar3 = uVar1 & 0xc00;
    if ((uVar1 & 0xc00) != 0) {
      if (uVar3 == 0x400) {
        uVar6 = uVar6 | 0x100;
      }
      else if (uVar3 == 0x800) {
        uVar6 = uVar6 | 0x200;
      }
      else if (uVar3 == 0xc00) {
        uVar6 = uVar6 | 0x300;
      }
    }
    if ((uVar1 & 0x300) == 0) {
      uVar6 = uVar6 | 0x20000;
    }
    else if ((uVar1 & 0x300) == 0x200) {
      uVar6 = uVar6 | 0x10000;
    }
    if ((uVar1 & 0x1000) != 0) {
      uVar6 = uVar6 | 0x40000;
    }
  }
  if (0 < DAT_007c8b90) {
    uVar4 = MXCSR >> 3 & 0x10;
    if ((MXCSR & 0x200) != 0) {
      uVar4 = uVar4 | 8;
    }
    if ((MXCSR & 0x400) != 0) {
      uVar4 = uVar4 | 4;
    }
    if ((MXCSR & 0x800) != 0) {
      uVar4 = uVar4 | 2;
    }
    if ((MXCSR & 0x1000) != 0) {
      uVar4 = uVar4 | 1;
    }
    if ((MXCSR & 0x100) != 0) {
      uVar4 = uVar4 | 0x80000;
    }
    uVar5 = MXCSR & 0x6000;
    if (uVar5 != 0) {
      if (uVar5 == 0x2000) {
        uVar4 = uVar4 | 0x100;
      }
      else if (uVar5 == 0x4000) {
        uVar4 = uVar4 | 0x200;
      }
      else if (uVar5 == 0x6000) {
        uVar4 = uVar4 | 0x300;
      }
    }
    uVar5 = MXCSR & 0x8040;
    if (uVar5 == 0x40) {
      uVar4 = uVar4 | 0x2000000;
    }
    else if (uVar5 == 0x8000) {
      uVar4 = uVar4 | 0x3000000;
    }
    else if (uVar5 == 0x8040) {
      uVar4 = uVar4 | 0x1000000;
    }
    uVar5 = ~(_Mask & 0x308031f) & uVar4 | _Mask & 0x308031f & _NewValue;
    if (uVar5 != uVar4) {
      uVar2 = ___hw_cw_sse2(uVar5);
      ___set_fpsr_sse2(uVar2);
      uVar4 = MXCSR >> 3 & 0x10;
      if ((MXCSR & 0x200) != 0) {
        uVar4 = uVar4 | 8;
      }
      if ((MXCSR & 0x400) != 0) {
        uVar4 = uVar4 | 4;
      }
      if ((MXCSR & 0x800) != 0) {
        uVar4 = uVar4 | 2;
      }
      if ((MXCSR & 0x1000) != 0) {
        uVar4 = uVar4 | 1;
      }
      if ((MXCSR & 0x100) != 0) {
        uVar4 = uVar4 | 0x80000;
      }
      uVar5 = MXCSR & 0x6000;
      if (uVar5 != 0) {
        if (uVar5 == 0x2000) {
          uVar4 = uVar4 | 0x100;
        }
        else if (uVar5 == 0x4000) {
          uVar4 = uVar4 | 0x200;
        }
        else if (uVar5 == 0x6000) {
          uVar4 = uVar4 | 0x300;
        }
      }
      uVar5 = MXCSR & 0x8040;
      if (uVar5 == 0x40) {
        uVar4 = uVar4 | 0x2000000;
      }
      else if (uVar5 == 0x8000) {
        uVar4 = uVar4 | 0x3000000;
      }
      else if (uVar5 == 0x8040) {
        uVar4 = uVar4 | 0x1000000;
      }
    }
    uVar5 = uVar4 ^ uVar6;
    uVar6 = uVar4 | uVar6;
    if ((uVar5 & 0x8031f) != 0) {
      uVar6 = uVar6 | 0x80000000;
    }
  }
  return uVar6;
}


/* ==== 00702d2d  __hw_cw  size=158 ==== */

/* Library Function - Single Match
    __hw_cw
   
   Library: Visual Studio 2019 Release */

uint __hw_cw(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1 >> 4 & 1;
  if ((param_1 & 8) != 0) {
    uVar1 = uVar1 | 4;
  }
  if ((param_1 & 4) != 0) {
    uVar1 = uVar1 | 8;
  }
  if ((param_1 & 2) != 0) {
    uVar1 = uVar1 | 0x10;
  }
  if ((param_1 & 1) != 0) {
    uVar1 = uVar1 | 0x20;
  }
  if ((param_1 & 0x80000) != 0) {
    uVar1 = uVar1 | 2;
  }
  uVar2 = param_1 & 0x300;
  if (uVar2 != 0) {
    if (uVar2 == 0x100) {
      uVar1 = uVar1 | 0x400;
    }
    else if (uVar2 == 0x200) {
      uVar1 = uVar1 | 0x800;
    }
    else if (uVar2 == 0x300) {
      uVar1 = uVar1 | 0xc00;
    }
  }
  if ((param_1 & 0x30000) == 0) {
    uVar1 = uVar1 | 0x300;
  }
  else if ((param_1 & 0x30000) == 0x10000) {
    uVar1 = uVar1 | 0x200;
  }
  if ((param_1 & 0x40000) != 0) {
    uVar1 = uVar1 | 0x1000;
  }
  return uVar1;
}


/* ==== 00702ec3  __commit  size=125 ==== */

/* Library Function - Single Match
    __commit
   
   Library: Visual Studio 2019 Release */

int __cdecl __commit(int _FileHandle)

{
  undefined4 *puVar1;
  int iVar2;
  int local_14;
  int *local_10;
  int local_c [2];
  
  if (_FileHandle == -2) {
    puVar1 = (undefined4 *)FUN_006f390a();
    *puVar1 = 9;
  }
  else {
    if (((-1 < _FileHandle) && ((uint)_FileHandle < DAT_007c8fc0)) &&
       ((*(byte *)((&DAT_007c8dc0)[_FileHandle >> 6] + 0x28 + (_FileHandle & 0x3fU) * 0x38) & 1) !=
        0)) {
      local_10 = &_FileHandle;
      local_c[0] = _FileHandle;
      local_14 = _FileHandle;
      iVar2 = FUN_00702e21(&local_14,&local_10,local_c);
      return iVar2;
    }
    puVar1 = (undefined4 *)FUN_006f390a();
    *puVar1 = 9;
    FUN_006e8c2f();
  }
  return -1;
}


/* ==== 00702f40  ___acrt_stdio_allocate_buffer_nolock  size=92 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    ___acrt_stdio_allocate_buffer_nolock
   
   Library: Visual Studio 2019 Release */

void ___acrt_stdio_allocate_buffer_nolock(undefined4 *param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  _DAT_007c8c5c = _DAT_007c8c5c + 1;
  uVar3 = 0x1000;
  uVar2 = __calloc_base(0x1000,1);
  param_1[1] = uVar2;
  FUN_006f9a4d(0);
  puVar1 = param_1 + 3;
  if (param_1[1] == 0) {
    LOCK();
    *puVar1 = *puVar1 | 0x400;
    UNLOCK();
    param_1[1] = param_1 + 5;
    uVar3 = 2;
  }
  else {
    LOCK();
    *puVar1 = *puVar1 | 0x40;
    UNLOCK();
  }
  param_1[6] = uVar3;
  param_1[2] = 0;
  *param_1 = param_1[1];
  return;
}


/* ==== 00704956  ___acrt_GetStringTypeW  size=25 ==== */

/* Library Function - Single Match
    ___acrt_GetStringTypeW
   
   Library: Visual Studio 2019 Release */

void ___acrt_GetStringTypeW(DWORD param_1,LPCWSTR param_2,int param_3,LPWORD param_4)

{
  GetStringTypeW(param_1,param_2,param_3,param_4);
  return;
}


/* ==== 00704c38  ___acrt_fenv_get_common_round_control  size=34 ==== */

/* Library Function - Single Match
    ___acrt_fenv_get_common_round_control
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

uint ___acrt_fenv_get_common_round_control(uint param_1)

{
  uint uVar1;
  
  uVar1 = param_1 >> 0xe & 0x300;
  if (uVar1 != (param_1 >> 0x16 & 0x300)) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


/* ==== 00704c5a  ___acrt_fenv_get_control  size=128 ==== */

/* Library Function - Single Match
    ___acrt_fenv_get_control
   
   Library: Visual Studio 2019 Release */

uint ___acrt_fenv_get_control(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ushort *puVar4;
  ushort in_FPUControlWord;
  ushort local_24 [14];
  uint local_8;
  
  puVar4 = local_24;
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    puVar4[0] = 0;
    puVar4[1] = 0;
    puVar4 = puVar4 + 2;
  }
  local_24[0] = in_FPUControlWord;
  uVar1 = FUN_00704a1f(in_FPUControlWord & 7999);
  if (DAT_007c8b90 < 1) {
    uVar3 = 0;
  }
  else {
    local_8 = MXCSR;
    uVar3 = MXCSR & 0xffc0;
  }
  uVar3 = FUN_0070496f(uVar3);
  return uVar3 | ((((uVar3 & 0x3f) << 2 | uVar3 & 0xffffff00) << 6 | uVar1 & 0x3f) << 2 |
                 uVar1 & 0x300) << 0xe | uVar1;
}


/* ==== 00704efb  ___strncnt  size=28 ==== */

/* Library Function - Single Match
    ___strncnt
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void ___strncnt(char *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = 0;
  cVar1 = *param_1;
  while ((cVar1 != '\0' && (iVar2 != param_2))) {
    iVar2 = iVar2 + 1;
    cVar1 = param_1[iVar2];
  }
  return;
}


/* ==== 00704f66  __strnicmp  size=109 ==== */

/* Library Function - Single Match
    __strnicmp
   
   Library: Visual Studio 2019 Release */

int __cdecl __strnicmp(char *_Str1,char *_Str2,size_t _MaxCount)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (DAT_007c8dac == 0) {
    if ((_Str1 == (char *)0x0) || (_Str2 == (char *)0x0)) {
      puVar1 = (undefined4 *)FUN_006f390a();
      *puVar1 = 0x16;
      FUN_006e8c2f();
      iVar2 = 0x7fffffff;
    }
    else {
      if (_MaxCount < 0x80000000) {
        iVar2 = ___ascii_strnicmp(_Str1,_Str2,_MaxCount);
        return iVar2;
      }
      puVar1 = (undefined4 *)FUN_006f390a();
      *puVar1 = 0x16;
      FUN_006e8c2f();
      iVar2 = 0x7fffffff;
    }
  }
  else {
    iVar2 = FUN_00704fd3(_Str1,_Str2,_MaxCount,0);
  }
  return iVar2;
}


/* ==== 00705688  __sopen_nolock  size=110 ==== */

/* Library Function - Single Match
    __sopen_nolock
   
   Library: Visual Studio 2019 Release */

errno_t __cdecl
__sopen_nolock(int *UnlockFlag,int *_FileHandle,char *_Filename,int _OpenFlag,int _ShareFlag,
              int _PermissionFlag,int _SecureFlag)

{
  uint uVar1;
  int iVar2;
  errno_t eVar3;
  undefined4 local_1c;
  undefined4 local_18;
  wchar_t *local_14;
  undefined4 local_10;
  undefined4 local_c;
  char local_8;
  
  local_1c = 0;
  local_18 = 0;
  local_14 = (wchar_t *)0x0;
  local_10 = 0;
  local_c = 0;
  local_8 = '\0';
  uVar1 = __acrt_get_utf8_acp_compatibility_codepage();
  iVar2 = __acrt_mbs_to_wcs_cp<__crt_win32_buffer_internal_dynamic_resizing>
                    (_Filename,
                     (__crt_win32_buffer<wchar_t,__crt_win32_buffer_internal_dynamic_resizing> *)
                     &local_1c,uVar1);
  if (iVar2 == 0) {
    eVar3 = __wsopen_nolock(UnlockFlag,_FileHandle,local_14,_OpenFlag,_ShareFlag,_PermissionFlag,
                            _SecureFlag);
  }
  else {
    eVar3 = -1;
  }
  if (local_8 != '\0') {
    FUN_006f9a4d(local_14);
  }
  return eVar3;
}


/* ==== 00705716  __wsopen_nolock  size=810 ==== */

/* Library Function - Single Match
    __wsopen_nolock
   
   Library: Visual Studio 2019 Release */

errno_t __cdecl
__wsopen_nolock(int *UnlockFlag,int *_FileHandle,wchar_t *_Filename,int _OpenFlag,int _ShareFlag,
               int _PermissionFlag,int _SecureFlag)

{
  uint uVar1;
  undefined4 *puVar2;
  errno_t *peVar3;
  void *pvVar4;
  DWORD DVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  wchar_t **ppwVar9;
  wchar_t *apwStack_78 [5];
  int iStack_64;
  int iStack_60;
  undefined1 local_4c [24];
  byte local_34 [4];
  uint local_30;
  int local_28;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  byte local_10;
  void *local_c;
  byte local_5;
  
  apwStack_78[4] = (wchar_t *)local_4c;
  iStack_60 = _ShareFlag;
  iStack_64 = _OpenFlag;
  apwStack_78[3] =
       L"쒃贐큽\xf08b٪\xf359莥ￎ甹痜\xe819\xe1aa\xfffe₃謀౅ら냨ﻡ诿\xe900˚";
  puVar2 = (undefined4 *)FUN_00705464();
  pbVar8 = local_34;
  for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
    *(undefined4 *)pbVar8 = *puVar2;
    puVar2 = puVar2 + 1;
    pbVar8 = pbVar8 + 4;
  }
  if (local_28 == -1) {
    puVar2 = (undefined4 *)FUN_006f38f7();
    *puVar2 = 0;
    *_FileHandle = -1;
    goto LAB_00705755;
  }
  iVar6 = __alloc_osfhnd();
  *_FileHandle = iVar6;
  if (iVar6 == -1) {
    puVar2 = (undefined4 *)FUN_006f38f7();
    *puVar2 = 0;
    *_FileHandle = -1;
    puVar2 = (undefined4 *)FUN_006f390a();
    *puVar2 = 0x18;
    goto LAB_00705755;
  }
  local_18 = 0;
  local_1c = 0xc;
  *UnlockFlag = 1;
  local_14 = ~((uint)_OpenFlag >> 7) & 1;
  apwStack_78[1] = (wchar_t *)&local_1c;
  apwStack_78[0] = _Filename;
  pbVar8 = local_34;
  ppwVar9 = apwStack_78 + 2;
  for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
    *ppwVar9 = (wchar_t *)*(undefined4 *)pbVar8;
    pbVar8 = pbVar8 + 4;
    ppwVar9 = ppwVar9 + 1;
  }
  pvVar4 = create_file();
  local_c = pvVar4;
  if (pvVar4 == (void *)0xffffffff) {
    if (((local_30 & 0xc0000000) == 0xc0000000) && ((_OpenFlag & 1U) != 0)) {
      apwStack_78[1] = (wchar_t *)&local_1c;
      local_30 = local_30 & 0x7fffffff;
      apwStack_78[0] = _Filename;
      pbVar8 = local_34;
      ppwVar9 = apwStack_78 + 2;
      for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
        *ppwVar9 = (wchar_t *)*(undefined4 *)pbVar8;
        pbVar8 = pbVar8 + 4;
        ppwVar9 = ppwVar9 + 1;
      }
      pvVar4 = create_file();
      local_c = pvVar4;
      if (pvVar4 != (void *)0xffffffff) goto LAB_0070583c;
    }
    pbVar8 = (byte *)((&DAT_007c8dc0)[*_FileHandle >> 6] + 0x28 + (*_FileHandle & 0x3fU) * 0x38);
    *pbVar8 = *pbVar8 & 0xfe;
    GetLastError();
    iStack_60 = 0x705836;
    ___acrt_errno_map_os_error();
LAB_00705755:
    peVar3 = (errno_t *)FUN_006f390a();
    return *peVar3;
  }
LAB_0070583c:
  iStack_60 = 0x705843;
  local_c = pvVar4;
  DVar5 = GetFileType(pvVar4);
  if (DVar5 == 0) {
    DVar5 = GetLastError();
    iStack_60 = 0x705855;
    ___acrt_errno_map_os_error();
    pbVar8 = (byte *)((&DAT_007c8dc0)[*_FileHandle >> 6] + 0x28 + (*_FileHandle & 0x3fU) * 0x38);
    *pbVar8 = *pbVar8 & 0xfe;
    iStack_60 = 0x705876;
    CloseHandle(pvVar4);
    if (DVar5 == 0) {
      puVar2 = (undefined4 *)FUN_006f390a();
      *puVar2 = 0xd;
    }
    goto LAB_00705755;
  }
  if (DVar5 == 2) {
    local_34[0] = local_34[0] | 0x40;
  }
  else if (DVar5 == 3) {
    local_34[0] = local_34[0] | 8;
  }
  iStack_60 = *_FileHandle;
  iStack_64 = 0x7058af;
  local_5 = local_34[0];
  FUN_006ff295();
  local_10 = local_5 | 1;
  local_34[0] = local_10;
  *(byte *)((&DAT_007c8dc0)[*_FileHandle >> 6] + 0x28 + (*_FileHandle & 0x3fU) * 0x38) = local_10;
  *(undefined1 *)((&DAT_007c8dc0)[*_FileHandle >> 6] + 0x29 + (*_FileHandle & 0x3fU) * 0x38) = 0;
  if ((_OpenFlag & 2U) != 0) {
    iStack_60 = 0x7058fb;
    iVar6 = truncate_ctrl_z_if_present(*_FileHandle);
    if (iVar6 != 0) goto LAB_00705904;
  }
  local_5 = 0;
  iStack_60 = _OpenFlag;
  iVar6 = *_FileHandle;
  pbVar8 = local_34;
  ppwVar9 = apwStack_78;
  for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
    *ppwVar9 = (wchar_t *)*(undefined4 *)pbVar8;
    pbVar8 = pbVar8 + 4;
    ppwVar9 = ppwVar9 + 1;
  }
  iVar6 = FUN_00705179(iVar6);
  uVar1 = local_30;
  if (iVar6 != 0) {
LAB_00705904:
    iStack_60 = 0x705909;
    FUN_006f9bbb();
    return iVar6;
  }
  *(byte *)((&DAT_007c8dc0)[*_FileHandle >> 6] + 0x29 + (*_FileHandle & 0x3fU) * 0x38) = local_5;
  iVar6 = (*_FileHandle & 0x3fU) * 0x38;
  pbVar8 = (byte *)((&DAT_007c8dc0)[*_FileHandle >> 6] + 0x2d + iVar6);
  *pbVar8 = *pbVar8 ^ ((byte)((uint)_OpenFlag >> 0x10) ^
                      *(byte *)((&DAT_007c8dc0)[*_FileHandle >> 6] + 0x2d + iVar6)) & 1;
  if (((local_10 & 0x48) == 0) && ((_OpenFlag & 8U) != 0)) {
    pbVar8 = (byte *)((&DAT_007c8dc0)[*_FileHandle >> 6] + 0x28 + (*_FileHandle & 0x3fU) * 0x38);
    *pbVar8 = *pbVar8 | 0x20;
  }
  if (((local_30 & 0xc0000000) == 0xc0000000) && ((_OpenFlag & 1U) != 0)) {
    iStack_60 = 0x7059c3;
    CloseHandle(local_c);
    apwStack_78[1] = (wchar_t *)&local_1c;
    local_30 = uVar1 & 0x7fffffff;
    apwStack_78[0] = _Filename;
    pbVar8 = local_34;
    ppwVar9 = apwStack_78 + 2;
    for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
      *ppwVar9 = (wchar_t *)*(undefined4 *)pbVar8;
      pbVar8 = pbVar8 + 4;
      ppwVar9 = ppwVar9 + 1;
    }
    pvVar4 = create_file();
    if (pvVar4 == (void *)0xffffffff) {
      GetLastError();
      iStack_60 = 0x7059fb;
      ___acrt_errno_map_os_error();
      pbVar8 = (byte *)((&DAT_007c8dc0)[*_FileHandle >> 6] + 0x28 + (*_FileHandle & 0x3fU) * 0x38);
      *pbVar8 = *pbVar8 & 0xfe;
      iStack_60 = *_FileHandle;
      iStack_64 = 0x705a1b;
      FUN_006ff45d();
      goto LAB_00705755;
    }
    *(void **)((&DAT_007c8dc0)[*_FileHandle >> 6] + 0x18 + (*_FileHandle & 0x3fU) * 0x38) = pvVar4;
  }
  return 0;
}


/* ==== 00705a40  __putwch_nolock  size=50 ==== */

/* Library Function - Single Match
    __putwch_nolock
   
   Library: Visual Studio 2019 Release */

wint_t __cdecl __putwch_nolock(wchar_t _WCh)

{
  int iVar1;
  undefined1 local_8 [4];
  
  iVar1 = ___dcrt_lowio_ensure_console_output_initialized();
  if (iVar1 != 0) {
    iVar1 = ___dcrt_write_console(&_WCh,1,local_8);
    if (iVar1 != 0) {
      return _WCh;
    }
  }
  return 0xffff;
}


/* ==== 00705ac2  ___acrt_DownlevelLocaleNameToLCID  size=44 ==== */

/* Library Function - Single Match
    ___acrt_DownlevelLocaleNameToLCID
   
   Library: Visual Studio 2019 Release */

undefined4 ___acrt_DownlevelLocaleNameToLCID(int param_1)

{
  uint uVar1;
  
  if (param_1 != 0) {
    uVar1 = FID_conflict_GetTableIndexFromLocaleName(param_1);
    if ((-1 < (int)uVar1) && (uVar1 < 0xe4)) {
      return *(undefined4 *)(&DAT_0073c3a0 + uVar1 * 8);
    }
  }
  return 0;
}


/* ==== 00705aee  __wcsnicoll  size=109 ==== */

/* Library Function - Single Match
    __wcsnicoll
   
   Library: Visual Studio 2019 Release */

int __cdecl __wcsnicoll(wchar_t *_Str1,wchar_t *_Str2,size_t _MaxCount)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (DAT_007c8dac == 0) {
    if ((_Str1 == (wchar_t *)0x0) || (_Str2 == (wchar_t *)0x0)) {
      puVar1 = (undefined4 *)FUN_006f390a();
      *puVar1 = 0x16;
      FUN_006e8c2f();
      iVar2 = 0x7fffffff;
    }
    else {
      if (_MaxCount < 0x80000000) {
        iVar2 = FUN_00704f17();
        return iVar2;
      }
      puVar1 = (undefined4 *)FUN_006f390a();
      *puVar1 = 0x16;
      FUN_006e8c2f();
      iVar2 = 0x7fffffff;
    }
  }
  else {
    iVar2 = __wcsnicoll_l(_Str1,_Str2,_MaxCount,(_locale_t)0x0);
  }
  return iVar2;
}


/* ==== 00705b5b  __wcsnicoll_l  size=192 ==== */

/* Library Function - Single Match
    __wcsnicoll_l
   
   Library: Visual Studio 2019 Release */

int __cdecl __wcsnicoll_l(wchar_t *_Str1,wchar_t *_Str2,size_t _MaxCount,_locale_t _Locale)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_8;
  
  if (_MaxCount == 0) {
    iVar1 = 0;
  }
  else if ((_Str1 == (wchar_t *)0x0) || (_Str2 == (wchar_t *)0x0)) {
    puVar2 = (undefined4 *)FUN_006f390a();
    *puVar2 = 0x16;
    FUN_006e8c2f();
    iVar1 = 0x7fffffff;
  }
  else {
    iVar1 = 0x7fffffff;
    if (_MaxCount < 0x80000000) {
      FUN_006ee0ac(_Locale);
      if (*(int *)(local_10 + 0xa4) == 0) {
        iVar1 = FUN_00704f17(_Str1);
      }
      else {
        iVar3 = ___acrt_CompareStringW
                          (*(int *)(local_10 + 0xa4),0x1001,_Str1,_MaxCount,_Str2,_MaxCount);
        if (iVar3 == 0) {
          puVar2 = (undefined4 *)FUN_006f390a();
          *puVar2 = 0x16;
        }
        else {
          iVar1 = iVar3 + -2;
        }
      }
      if (local_8 != '\0') {
        *(uint *)(local_14 + 0x350) = *(uint *)(local_14 + 0x350) & 0xfffffffd;
      }
    }
    else {
      puVar2 = (undefined4 *)FUN_006f390a();
      *puVar2 = 0x16;
      FUN_006e8c2f();
    }
  }
  return iVar1;
}


/* ==== 00705c1b  __strnicoll  size=41 ==== */

/* Library Function - Single Match
    __strnicoll
   
   Library: Visual Studio 2019 Release */

int __cdecl __strnicoll(char *_Str1,char *_Str2,size_t _MaxCount)

{
  int iVar1;
  
  if (DAT_007c8dac == 0) {
    iVar1 = __strnicmp(_Str1,_Str2,_MaxCount);
    return iVar1;
  }
  iVar1 = __strnicoll_l(_Str1,_Str2,_MaxCount,(_locale_t)0x0);
  return iVar1;
}


/* ==== 00705c44  __strnicoll_l  size=200 ==== */

/* Library Function - Single Match
    __strnicoll_l
   
   Library: Visual Studio 2019 Release */

int __cdecl __strnicoll_l(char *_Str1,char *_Str2,size_t _MaxCount,_locale_t _Locale)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int local_14;
  int local_10 [2];
  char local_8;
  
  FUN_006ee0ac(_Locale);
  if (_MaxCount == 0) {
    iVar3 = 0;
  }
  else if ((_Str1 == (char *)0x0) || (_Str2 == (char *)0x0)) {
    puVar1 = (undefined4 *)FUN_006f390a();
    *puVar1 = 0x16;
    FUN_006e8c2f();
    iVar3 = 0x7fffffff;
  }
  else {
    iVar3 = 0x7fffffff;
    if (_MaxCount < 0x80000000) {
      if (*(int *)(local_10[0] + 0xa4) == 0) {
        iVar3 = FUN_00704fd3(_Str1,_Str2,_MaxCount,local_10);
      }
      else {
        iVar2 = ___acrt_CompareStringA
                          (local_10,*(int *)(local_10[0] + 0xa4),0x1001,_Str1,_MaxCount,_Str2,
                           _MaxCount,*(undefined4 *)(local_10[0] + 0x10));
        if (iVar2 == 0) {
          puVar1 = (undefined4 *)FUN_006f390a();
          *puVar1 = 0x16;
        }
        else {
          iVar3 = iVar2 + -2;
        }
      }
    }
    else {
      puVar1 = (undefined4 *)FUN_006f390a();
      *puVar1 = 0x16;
      FUN_006e8c2f();
    }
  }
  if (local_8 != '\0') {
    *(uint *)(local_14 + 0x350) = *(uint *)(local_14 + 0x350) & 0xfffffffd;
  }
  return iVar3;
}


/* ==== 00706194  ___acrt_CreateProcessA  size=238 ==== */

/* Library Function - Single Match
    ___acrt_CreateProcessA
   
   Library: Visual Studio 2019 Release */

BOOL ___acrt_CreateProcessA
               (char *param_1,char *param_2,LPSECURITY_ATTRIBUTES param_3,
               LPSECURITY_ATTRIBUTES param_4,BOOL param_5,DWORD param_6,LPVOID param_7,char *param_8
               ,LPSTARTUPINFOW param_9,LPPROCESS_INFORMATION param_10)

{
  uint uVar1;
  int iVar2;
  BOOL BVar3;
  LPCWSTR lpCurrentDirectory;
  undefined4 local_4c;
  undefined4 local_48;
  LPCWSTR local_44;
  undefined4 local_40;
  undefined4 local_3c;
  char local_38;
  undefined4 local_34;
  undefined4 local_30;
  LPWSTR local_2c;
  undefined4 local_28;
  undefined4 local_24;
  char local_20;
  undefined4 local_1c;
  undefined4 local_18;
  LPCWSTR local_14;
  undefined4 local_10;
  undefined4 local_c;
  char local_8;
  
  BVar3 = 0;
  lpCurrentDirectory = (LPCWSTR)0x0;
  local_4c = 0;
  local_48 = 0;
  local_44 = (LPCWSTR)0x0;
  local_40 = 0;
  local_3c = 0;
  local_38 = '\0';
  local_34 = 0;
  local_30 = 0;
  local_2c = (LPWSTR)0x0;
  local_28 = 0;
  local_24 = 0;
  local_20 = '\0';
  local_1c = 0;
  local_18 = 0;
  local_14 = (LPCWSTR)0x0;
  local_10 = 0;
  local_c = 0;
  local_8 = '\0';
  uVar1 = __acrt_get_utf8_acp_compatibility_codepage();
  iVar2 = __acrt_mbs_to_wcs_cp<__crt_win32_buffer_internal_dynamic_resizing>
                    (param_1,(__crt_win32_buffer<wchar_t,__crt_win32_buffer_internal_dynamic_resizing>
                              *)&local_4c,uVar1);
  if (iVar2 == 0) {
    uVar1 = __acrt_get_utf8_acp_compatibility_codepage();
    iVar2 = __acrt_mbs_to_wcs_cp<__crt_win32_buffer_internal_dynamic_resizing>
                      (param_2,(__crt_win32_buffer<wchar_t,__crt_win32_buffer_internal_dynamic_resizing>
                                *)&local_34,uVar1);
    if (iVar2 == 0) {
      if (param_8 != (char *)0x0) {
        uVar1 = __acrt_get_utf8_acp_compatibility_codepage();
        iVar2 = __acrt_mbs_to_wcs_cp<__crt_win32_buffer_internal_dynamic_resizing>
                          (param_8,(__crt_win32_buffer<wchar_t,__crt_win32_buffer_internal_dynamic_resizing>
                                    *)&local_1c,uVar1);
        lpCurrentDirectory = local_14;
        if (iVar2 != 0) goto LAB_00706251;
      }
      BVar3 = CreateProcessW(local_44,local_2c,param_3,param_4,param_5,param_6,param_7,
                             lpCurrentDirectory,param_9,param_10);
    }
  }
LAB_00706251:
  if (local_8 != '\0') {
    FUN_006f9a4d(lpCurrentDirectory);
  }
  if (local_20 != '\0') {
    FUN_006f9a4d(local_2c);
  }
  if (local_38 != '\0') {
    FUN_006f9a4d(local_44);
  }
  return BVar3;
}


/* ==== 00706335  __frnd  size=20 ==== */

/* Library Function - Single Match
    __frnd
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release, Visual Studio 2012 Release,
   Visual Studio 2019 Release */

float10 __frnd(double param_1)

{
  return (float10)ROUND(param_1);
}


/* ==== 00706620  __trandisp1  size=117 ==== */

/* Library Function - Single Match
    __trandisp1
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void __trandisp1(void)

{
  byte bVar1;
  float10 fVar2;
  char cVar3;
  undefined4 in_ECX;
  int in_EDX;
  undefined2 uVar4;
  int unaff_EBP;
  float10 in_ST0;
  
  if (*(char *)(in_EDX + 0xe) == '\x05') {
    uVar4 = (undefined2)
            CONCAT31((uint3)((byte)((ushort)*(undefined2 *)(unaff_EBP + -0xa4) >> 8) & 0xfe | 2),
                     0x3f);
  }
  else {
    uVar4 = 0x133f;
  }
  *(undefined2 *)(unaff_EBP + -0xa2) = uVar4;
  fVar2 = (float10)0;
  *(int *)(unaff_EBP + -0x94) = in_EDX;
  *(ushort *)(unaff_EBP + -0xa0) =
       (ushort)NAN(in_ST0) << 8 | (ushort)(in_ST0 < fVar2) << 9 | (ushort)(in_ST0 != fVar2) << 10 |
       (ushort)(in_ST0 == fVar2) << 0xe;
  *(undefined1 *)(unaff_EBP + -0x90) = 0;
  cVar3 = (char)(*(char *)(unaff_EBP + -0x9f) << 1) >> 1;
  bVar1 = cVar3 << 1;
  cVar3 = (&DAT_0073e59e)[bVar1 & 0xf | cVar3 < '\0'];
  guard_check_icall(CONCAT31((int3)((uint)in_ECX >> 8),bVar1) & 0x404);
                    /* WARNING: Could not recover jumptable at 0x00706693. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_EDX + cVar3 + 0x10))();
  return;
}


/* ==== 00706695  __trandisp2  size=154 ==== */

/* Library Function - Single Match
    __trandisp2
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void __trandisp2(void)

{
  byte bVar1;
  float10 fVar2;
  byte bVar3;
  char cVar4;
  byte bVar5;
  char cVar6;
  int in_EDX;
  undefined2 uVar7;
  int unaff_EBP;
  float10 in_ST0;
  float10 in_ST1;
  
  if (*(char *)(in_EDX + 0xe) == '\x05') {
    uVar7 = (undefined2)
            CONCAT31((uint3)((byte)((ushort)*(undefined2 *)(unaff_EBP + -0xa4) >> 8) & 0xfe | 2),
                     0x3f);
  }
  else {
    uVar7 = 0x133f;
  }
  *(undefined2 *)(unaff_EBP + -0xa2) = uVar7;
  fVar2 = (float10)0;
  *(int *)(unaff_EBP + -0x94) = in_EDX;
  *(ushort *)(unaff_EBP + -0xa0) =
       (ushort)NAN(in_ST0) << 8 | (ushort)(in_ST0 < fVar2) << 9 | (ushort)(in_ST0 != fVar2) << 10 |
       (ushort)(in_ST0 == fVar2) << 0xe;
  *(undefined1 *)(unaff_EBP + -0x90) = 0;
  fVar2 = (float10)0;
  *(ushort *)(unaff_EBP + -0xa0) =
       (ushort)NAN(in_ST1) << 8 | (ushort)(in_ST1 < fVar2) << 9 | (ushort)(in_ST1 != fVar2) << 10 |
       (ushort)(in_ST1 == fVar2) << 0xe;
  cVar6 = (char)(*(char *)(unaff_EBP + -0x9f) << 1) >> 1;
  bVar1 = cVar6 << 1;
  cVar6 = (&DAT_0073e59e)[bVar1 & 0xf | cVar6 < '\0'];
  cVar4 = (char)(*(char *)(unaff_EBP + -0x9f) << 1) >> 1;
  bVar5 = cVar4 << 1 | cVar4 < '\0';
  bVar3 = (&DAT_0073e59e)[bVar5 & 0xf];
  guard_check_icall(CONCAT11(bVar1,bVar5) & 0x404);
                    /* WARNING: Could not recover jumptable at 0x0070672d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_EDX + (char)(bVar3 | cVar6 << 2) + 0x10))();
  return;
}


/* ==== 007068c5  __fload_withFB  size=67 ==== */

/* Library Function - Single Match
    __fload_withFB
   
   Library: Visual Studio */

uint __fload_withFB(void)

{
  uint uVar1;
  int in_EDX;
  
  uVar1 = *(uint *)(in_EDX + 4) & 0x7ff00000;
  if (uVar1 != 0x7ff00000) {
    return uVar1;
  }
  return *(uint *)(in_EDX + 4);
}


/* ==== 0070692b  __math_exit  size=42 ==== */

/* Library Function - Single Match
    __math_exit
   
   Library: Visual Studio */

void __math_exit(void)

{
  ushort in_FPUStatusWord;
  ushort unaff_retaddr;
  
  if (((unaff_retaddr != 0x27f) && ((unaff_retaddr & 0x20) != 0)) &&
     ((in_FPUStatusWord & 0x20) != 0)) {
    __startOneArgErrorHandling();
    return;
  }
  return;
}


/* ==== 00706a27  __startOneArgErrorHandling  size=60 ==== */

/* Library Function - Single Match
    __startOneArgErrorHandling
   
   Library: Visual Studio */

float10 __startOneArgErrorHandling(void)

{
  float10 in_ST0;
  
  FUN_00709760();
  return (float10)(double)in_ST0;
}


/* ==== 00707ec0  __cintrindisp1  size=73 ==== */

/* Library Function - Single Match
    __cintrindisp1
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void __cintrindisp1(void)

{
  FUN_006f7944();
  __trandisp1();
  FUN_00707f51();
  return;
}


/* ==== 00707f09  __ctrandisp2  size=65 ==== */

/* Library Function - Single Match
    __ctrandisp2
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void __ctrandisp2(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  __fload(param_1,param_2);
  __fload(param_3,param_4);
  __trandisp2();
  FUN_00707f4a();
  return;
}


/* ==== 00708098  __ctrandisp1  size=51 ==== */

/* Library Function - Single Match
    __ctrandisp1
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void __ctrandisp1(undefined4 param_1,undefined4 param_2)

{
  __fload(param_1,param_2);
  __trandisp1();
  FUN_00707f4a();
  return;
}


/* ==== 007080cb  __fload  size=60 ==== */

/* Library Function - Single Match
    __fload
   
   Library: Visual Studio */

float10 __fload(uint param_1,int param_2)

{
  float10 fVar1;
  
  if ((param_2._2_2_ & 0x7ff0) == 0x7ff0) {
    fVar1 = (float10)CONCAT28(param_2._2_2_ | 0x7fff,
                              CONCAT44(param_2 << 0xb | param_1 >> 0x15,param_1));
  }
  else {
    fVar1 = (float10)(double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1));
  }
  return fVar1;
}


/* ==== 00708b70  _strpbrk  size=64 ==== */

/* Library Function - Single Match
    _strpbrk
   
   Library: Visual Studio */

char * __cdecl _strpbrk(char *_Str,char *_Control)

{
  byte bVar1;
  byte *pbVar2;
  byte abStack_28 [32];
  
  abStack_28[0x1c] = 0;
  abStack_28[0x1d] = 0;
  abStack_28[0x1e] = 0;
  abStack_28[0x1f] = 0;
  abStack_28[0x18] = 0;
  abStack_28[0x19] = 0;
  abStack_28[0x1a] = 0;
  abStack_28[0x1b] = 0;
  abStack_28[0x14] = 0;
  abStack_28[0x15] = 0;
  abStack_28[0x16] = 0;
  abStack_28[0x17] = 0;
  abStack_28[0x10] = 0;
  abStack_28[0x11] = 0;
  abStack_28[0x12] = 0;
  abStack_28[0x13] = 0;
  abStack_28[0xc] = 0;
  abStack_28[0xd] = 0;
  abStack_28[0xe] = 0;
  abStack_28[0xf] = 0;
  abStack_28[8] = 0;
  abStack_28[9] = 0;
  abStack_28[10] = 0;
  abStack_28[0xb] = 0;
  abStack_28[4] = 0;
  abStack_28[5] = 0;
  abStack_28[6] = 0;
  abStack_28[7] = 0;
  abStack_28[0] = 0;
  abStack_28[1] = 0;
  abStack_28[2] = 0;
  abStack_28[3] = 0;
  while( true ) {
    bVar1 = *_Control;
    if (bVar1 == 0) break;
    _Control = _Control + 1;
    abStack_28[(int)(uint)bVar1 >> 3] = abStack_28[(int)(uint)bVar1 >> 3] | '\x01' << (bVar1 & 7);
  }
  do {
    pbVar2 = (byte *)_Str;
    bVar1 = *pbVar2;
    if (bVar1 == 0) {
      return (char *)0x0;
    }
    _Str = (char *)(pbVar2 + 1);
  } while ((abStack_28[(int)(uint)bVar1 >> 3] >> (bVar1 & 7) & 1) == 0);
  return (char *)pbVar2;
}


/* ==== 00708bb0  __mbsdec  size=23 ==== */

/* Library Function - Single Match
    __mbsdec
   
   Library: Visual Studio 2019 Release */

uchar * __cdecl __mbsdec(uchar *_Start,uchar *_Pos)

{
  uchar *puVar1;
  
  puVar1 = __mbsdec_l(_Start,_Pos,(_locale_t)0x0);
  return puVar1;
}


/* ==== 00708bc7  __mbsdec_l  size=141 ==== */

/* Library Function - Single Match
    __mbsdec_l
   
   Library: Visual Studio 2019 Release */

uchar * __cdecl __mbsdec_l(uchar *_Start,uchar *_Pos,_locale_t _Locale)

{
  undefined4 *puVar1;
  byte *pbVar2;
  int local_14;
  int local_c;
  char local_8;
  
  if (_Start == (uchar *)0x0) {
    puVar1 = (undefined4 *)FUN_006f390a();
    *puVar1 = 0x16;
    FUN_006e8c2f();
    return (uchar *)0x0;
  }
  if (_Pos == (uchar *)0x0) {
    puVar1 = (undefined4 *)FUN_006f390a();
    *puVar1 = 0x16;
    FUN_006e8c2f();
  }
  else if (_Start < _Pos) {
    FUN_006ee0ac(_Locale);
    pbVar2 = _Pos + -1;
    if (*(int *)(local_c + 8) != 0) {
      do {
        pbVar2 = pbVar2 + -1;
        if (pbVar2 < _Start) break;
      } while ((*(byte *)(*pbVar2 + 0x19 + local_c) & 4) != 0);
      pbVar2 = _Pos + (-1 - ((int)_Pos - (int)pbVar2 & 1U));
    }
    if (local_8 == '\0') {
      return pbVar2;
    }
    *(uint *)(local_14 + 0x350) = *(uint *)(local_14 + 0x350) & 0xfffffffd;
    return pbVar2;
  }
  return (uchar *)0x0;
}


/* ==== 00708c63  ___acrt_SetEnvironmentVariableA  size=149 ==== */

/* Library Function - Single Match
    ___acrt_SetEnvironmentVariableA
   
   Library: Visual Studio 2019 Release */

BOOL ___acrt_SetEnvironmentVariableA(char *param_1,char *param_2)

{
  uint uVar1;
  int iVar2;
  BOOL BVar3;
  LPCWSTR pWVar4;
  undefined4 local_34;
  undefined4 local_30;
  LPCWSTR local_2c;
  undefined4 local_28;
  undefined4 local_24;
  char local_20;
  undefined4 local_1c;
  undefined4 local_18;
  LPCWSTR local_14;
  undefined4 local_10;
  undefined4 local_c;
  char local_8;
  
  BVar3 = 0;
  pWVar4 = (LPCWSTR)0x0;
  local_34 = 0;
  local_30 = 0;
  local_2c = (LPCWSTR)0x0;
  local_28 = 0;
  local_24 = 0;
  local_20 = '\0';
  local_1c = 0;
  local_18 = 0;
  local_14 = (LPCWSTR)0x0;
  local_10 = 0;
  local_c = 0;
  local_8 = '\0';
  uVar1 = __acrt_get_utf8_acp_compatibility_codepage();
  iVar2 = __acrt_mbs_to_wcs_cp<__crt_win32_buffer_internal_dynamic_resizing>
                    (param_1,(__crt_win32_buffer<wchar_t,__crt_win32_buffer_internal_dynamic_resizing>
                              *)&local_34,uVar1);
  if (iVar2 == 0) {
    uVar1 = __acrt_get_utf8_acp_compatibility_codepage();
    iVar2 = __acrt_mbs_to_wcs_cp<__crt_win32_buffer_internal_dynamic_resizing>
                      (param_2,(__crt_win32_buffer<wchar_t,__crt_win32_buffer_internal_dynamic_resizing>
                                *)&local_1c,uVar1);
    pWVar4 = local_14;
    if (iVar2 == 0) {
      BVar3 = SetEnvironmentVariableW(local_2c,local_14);
    }
  }
  if (local_8 != '\0') {
    FUN_006f9a4d(pWVar4);
  }
  if (local_20 != '\0') {
    FUN_006f9a4d(local_2c);
  }
  return BVar3;
}


/* ==== 007090f0  ___ascii_strnicmp  size=97 ==== */

/* Library Function - Single Match
    ___ascii_strnicmp
   
   Libraries: Visual Studio 2012 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl ___ascii_strnicmp(char *_Str1,char *_Str2,size_t _MaxCount)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  
  iVar5 = 0;
  if (_MaxCount != 0) {
    do {
      bVar2 = *_Str1;
      cVar1 = *_Str2;
      uVar3 = CONCAT11(bVar2,cVar1);
      if (bVar2 == 0) break;
      uVar3 = CONCAT11(bVar2,cVar1);
      uVar4 = (uint)uVar3;
      if (cVar1 == '\0') break;
      _Str1 = _Str1 + 1;
      _Str2 = _Str2 + 1;
      if ((0x40 < bVar2) && (bVar2 < 0x5b)) {
        uVar4 = (uint)CONCAT11(bVar2 + 0x20,cVar1);
      }
      uVar3 = (ushort)uVar4;
      bVar2 = (byte)uVar4;
      if ((0x40 < bVar2) && (bVar2 < 0x5b)) {
        uVar3 = (ushort)CONCAT31((int3)(uVar4 >> 8),bVar2 + 0x20);
      }
      bVar2 = (byte)(uVar3 >> 8);
      bVar6 = bVar2 < (byte)uVar3;
      if (bVar2 != (byte)uVar3) goto LAB_00709141;
      _MaxCount = _MaxCount - 1;
    } while (_MaxCount != 0);
    iVar5 = 0;
    bVar2 = (byte)(uVar3 >> 8);
    bVar6 = bVar2 < (byte)uVar3;
    if (bVar2 != (byte)uVar3) {
LAB_00709141:
      iVar5 = -1;
      if (!bVar6) {
        iVar5 = 1;
      }
    }
  }
  return iVar5;
}


/* ==== 00709151  __crt_seek_guard  size=77 ==== */

/* Library Function - Single Match
    public: __thiscall __crt_seek_guard::__crt_seek_guard(int,__int64)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

__crt_seek_guard * __thiscall
__crt_seek_guard::__crt_seek_guard(__crt_seek_guard *this,int param_1,__int64 param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  uint in_stack_00000008;
  
  uVar3 = FUN_006f8e7d(param_1,0,0,1);
  *(undefined8 *)this = uVar3;
  uVar3 = FUN_006f8e7d(param_1,0,0,2);
  iVar2 = (int)((ulonglong)uVar3 >> 0x20);
  uVar1 = (uint)uVar3;
  *(uint *)(this + 8) = uVar1;
  *(int *)(this + 0x18) = param_1;
  *(uint *)(this + 0x14) = ((int)param_2 - iVar2) - (uint)(in_stack_00000008 < uVar1);
  *(int *)(this + 0xc) = iVar2;
  *(uint *)(this + 0x10) = in_stack_00000008 - uVar1;
  return this;
}


/* ==== 0070936c  __dcrt_lowio_initialize_console_output  size=31 ==== */

/* Library Function - Single Match
    void __cdecl __dcrt_lowio_initialize_console_output(void)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void __cdecl __dcrt_lowio_initialize_console_output(void)

{
  DAT_007c63d0 = CreateFileW(L"CONOUT$",0x40000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  return;
}


/* ==== 0070938b  ___dcrt_lowio_ensure_console_output_initialized  size=31 ==== */

/* Library Function - Single Match
    ___dcrt_lowio_ensure_console_output_initialized
   
   Libraries: Visual Studio 2019 Debug, Visual Studio 2019 Release */

bool ___dcrt_lowio_ensure_console_output_initialized(void)

{
  if (DAT_007c63d0 == -2) {
    __dcrt_lowio_initialize_console_output();
  }
  return DAT_007c63d0 != -1;
}


/* ==== 007093c1  ___dcrt_write_console  size=85 ==== */

/* Library Function - Single Match
    ___dcrt_write_console
   
   Libraries: Visual Studio 2019 Debug, Visual Studio 2019 Release */

BOOL ___dcrt_write_console(void *param_1,DWORD param_2,LPDWORD param_3)

{
  BOOL BVar1;
  DWORD DVar2;
  
  BVar1 = WriteConsoleW(DAT_007c63d0,param_1,param_2,param_3,(LPVOID)0x0);
  if (BVar1 == 0) {
    DVar2 = GetLastError();
    if (DVar2 == 6) {
      FID_conflict____dcrt_terminate_console_output();
      __dcrt_lowio_initialize_console_output();
      BVar1 = WriteConsoleW(DAT_007c63d0,param_1,param_2,param_3,(LPVOID)0x0);
    }
  }
  return BVar1;
}


/* ==== 00709416  ___acrt_CompareStringW  size=101 ==== */

/* Library Function - Single Match
    ___acrt_CompareStringW
   
   Library: Visual Studio 2019 Release */

int ___acrt_CompareStringW
              (undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
              undefined4 param_5,int param_6)

{
  int iVar1;
  
  if (0 < param_4) {
    param_4 = FUN_006fa3eb(param_3,param_4);
  }
  if (0 < param_6) {
    param_6 = FUN_006fa3eb(param_5,param_6);
  }
  if ((param_4 == 0) || (param_6 == 0)) {
    if (param_4 - param_6 == 0) {
      iVar1 = 2;
    }
    else {
      iVar1 = (param_4 - param_6 >> 0x1f & 0xfffffffeU) + 3;
    }
  }
  else {
    iVar1 = ___acrt_CompareStringEx_36(param_1,param_2,param_3,param_4,param_5,param_6,0,0,0);
  }
  return iVar1;
}


/* ==== 0070971a  ___acrt_CompareStringA  size=70 ==== */

/* Library Function - Single Match
    ___acrt_CompareStringA
   
   Library: Visual Studio 2019 Release */

void ___acrt_CompareStringA
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int local_14;
  undefined1 local_10 [8];
  char local_8;
  
  FUN_006ee0ac(param_1);
  FUN_0070947b(local_10,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  if (local_8 != '\0') {
    *(uint *)(local_14 + 0x350) = *(uint *)(local_14 + 0x350) & 0xfffffffd;
  }
  return;
}


/* ==== 00709b10  __FindPESection  size=67 ==== */

/* Library Function - Single Match
    __FindPESection
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

PIMAGE_SECTION_HEADER __cdecl __FindPESection(PBYTE pImageBase,DWORD_PTR rva)

{
  int iVar1;
  PIMAGE_SECTION_HEADER p_Var2;
  uint uVar3;
  
  uVar3 = 0;
  iVar1 = *(int *)(pImageBase + 0x3c);
  p_Var2 = (PIMAGE_SECTION_HEADER)
           (pImageBase + *(ushort *)(pImageBase + iVar1 + 0x14) + 0x18 + iVar1);
  if (*(ushort *)(pImageBase + iVar1 + 6) != 0) {
    do {
      if ((p_Var2->VirtualAddress <= rva) &&
         (rva < (p_Var2->Misc).PhysicalAddress + p_Var2->VirtualAddress)) {
        return p_Var2;
      }
      uVar3 = uVar3 + 1;
      p_Var2 = p_Var2 + 1;
    } while (uVar3 < *(ushort *)(pImageBase + iVar1 + 6));
  }
  return (PIMAGE_SECTION_HEADER)0x0;
}


/* ==== 00709b60  __IsNonwritableInCurrentImage  size=164 ==== */

/* Library Function - Single Match
    __IsNonwritableInCurrentImage
   
   Library: Visual Studio 2019 Release */

BOOL __cdecl __IsNonwritableInCurrentImage(PBYTE pTarget)

{
  int iVar1;
  PIMAGE_SECTION_HEADER p_Var2;
  void *local_14;
  code *pcStack_10;
  uint local_c;
  undefined4 local_8;
  
  pcStack_10 = __except_handler4;
  local_14 = ExceptionList;
  local_c = DAT_007c5940 ^ 0x7b5568;
  ExceptionList = &local_14;
  local_8 = 0;
  iVar1 = FUN_00709c20(0x400000);
  if (iVar1 != 0) {
    p_Var2 = __FindPESection((PBYTE)&IMAGE_DOS_HEADER_00400000,(DWORD_PTR)(pTarget + -0x400000));
    if (p_Var2 != (PIMAGE_SECTION_HEADER)0x0) {
      ExceptionList = local_14;
      return ~(p_Var2->Characteristics >> 0x1f) & 1;
    }
  }
  ExceptionList = local_14;
  return 0;
}


/* ==== 00709c60  __allrem  size=178 ==== */

/* Library Function - Single Match
    __allrem
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8 __allrem(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  bool bVar13;
  
  bVar13 = (int)param_2 < 0;
  if (bVar13) {
    bVar12 = param_1 != 0;
    param_1 = -param_1;
    param_2 = -(uint)bVar12 - param_2;
  }
  uVar11 = (uint)bVar13;
  if ((int)param_4 < 0) {
    bVar13 = param_3 != 0;
    param_3 = -param_3;
    param_4 = -(uint)bVar13 - param_4;
  }
  uVar4 = param_1;
  uVar3 = param_3;
  uVar8 = param_2;
  uVar9 = param_4;
  if (param_4 == 0) {
    iVar5 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) %
                 (ulonglong)param_3);
    iVar6 = 0;
    if ((int)(uVar11 - 1) < 0) goto LAB_00709d0d;
  }
  else {
    do {
      uVar10 = uVar9 >> 1;
      uVar3 = (uint)(CONCAT14((uVar9 & 1) != 0,uVar3) >> 1);
      uVar7 = uVar8 >> 1;
      uVar4 = (uint)(CONCAT14((uVar8 & 1) != 0,uVar4) >> 1);
      uVar8 = uVar7;
      uVar9 = uVar10;
    } while (uVar10 != 0);
    uVar1 = CONCAT44(uVar7,uVar4) / (ulonglong)uVar3;
    uVar3 = (int)uVar1 * param_4;
    lVar2 = (uVar1 & 0xffffffff) * (ulonglong)param_3;
    uVar8 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar4 = (uint)lVar2;
    uVar9 = uVar8 + uVar3;
    if (((CARRY4(uVar8,uVar3)) || (param_2 < uVar9)) || ((param_2 <= uVar9 && (param_1 < uVar4)))) {
      bVar13 = uVar4 < param_3;
      uVar4 = uVar4 - param_3;
      uVar9 = (uVar9 - param_4) - (uint)bVar13;
    }
    iVar5 = uVar4 - param_1;
    iVar6 = (uVar9 - param_2) - (uint)(uVar4 < param_1);
    if (-1 < (int)(uVar11 - 1)) goto LAB_00709d0d;
  }
  bVar13 = iVar5 != 0;
  iVar5 = -iVar5;
  iVar6 = -(uint)bVar13 - iVar6;
LAB_00709d0d:
  return CONCAT44(iVar6,iVar5);
}


/* ==== 00709d20  __allshl  size=31 ==== */

/* Library Function - Single Match
    __allshl
   
   Library: Visual Studio 2019 Release */

longlong __allshl(void)

{
  uint in_EAX;
  byte in_CL;
  int in_EDX;
  
  if (0x3f < in_CL) {
    return 0;
  }
  if (in_CL < 0x20) {
    return CONCAT44(in_EDX << (in_CL & 0x1f) | in_EAX >> 0x20 - (in_CL & 0x1f),
                    in_EAX << (in_CL & 0x1f));
  }
  return (ulonglong)(in_EAX << (in_CL & 0x1f)) << 0x20;
}


/* ==== 00709d40  __aullshr  size=31 ==== */

/* Library Function - Single Match
    __aullshr
   
   Library: Visual Studio 2019 Release */

ulonglong __aullshr(void)

{
  uint in_EAX;
  byte in_CL;
  uint in_EDX;
  
  if (0x3f < in_CL) {
    return 0;
  }
  if (in_CL < 0x20) {
    return CONCAT44(in_EDX >> (in_CL & 0x1f),
                    in_EAX >> (in_CL & 0x1f) | in_EDX << 0x20 - (in_CL & 0x1f));
  }
  return (ulonglong)(in_EDX >> (in_CL & 0x1f));
}


