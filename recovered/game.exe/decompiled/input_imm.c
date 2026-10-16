/* Auto-decompiled pseudo-code from game.exe / input_imm */
/* NOT original source. Bucketed by evidence (strings/imports/call-graph), not raw address. */

/* ==== 006edfb0  FUN_006edfb0  size=74 ==== */

void FUN_006edfb0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *in_ECX;
  int iVar1;
  undefined4 *puVar2;
  
  *in_ECX = param_1;
  in_ECX[1] = param_2;
  in_ECX[2] = param_3;
  in_ECX[3] = 0;
  puVar2 = in_ECX + 0xb;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  in_ECX[4] = 0;
  *(undefined2 *)(in_ECX + 5) = 0;
  *(undefined1 *)((int)in_ECX + 0x16) = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  *(undefined1 *)(in_ECX + 9) = 0;
  in_ECX[10] = 0;
  return;
}


/* ==== 006ee068  input_processor<char,__crt_stdio_input::string_input_adapter<char>_>  size=68 ==== */

/* Library Function - Single Match
    public: __thiscall __crt_stdio_input::input_processor<char,class
   __crt_stdio_input::string_input_adapter<char> >::input_processor<char,class
   __crt_stdio_input::string_input_adapter<char> >(class
   __crt_stdio_input::string_input_adapter<char> const &,unsigned __int64,char const * const,struct
   __crt_locale_pointers * const,char * const)
   
   Library: Visual Studio 2019 Release */

input_processor<char,__crt_stdio_input::string_input_adapter<char>_> * __thiscall
__crt_stdio_input::input_processor<char,__crt_stdio_input::string_input_adapter<char>_>::
input_processor<char,__crt_stdio_input::string_input_adapter<char>_>
          (input_processor<char,__crt_stdio_input::string_input_adapter<char>_> *this,
          string_input_adapter<char> *param_1,__uint64 param_2,char *param_3,
          __crt_locale_pointers *param_4,char *param_5)

{
  undefined4 in_stack_00000008;
  
  *(undefined4 *)this = in_stack_00000008;
  *(undefined4 *)(this + 4) = (undefined4)param_2;
  *(undefined4 *)(this + 8) = *(undefined4 *)param_1;
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 8);
  FUN_006edfb0(in_stack_00000008,param_2);
  *(undefined4 *)(this + 0x70) = 0;
  *(char **)(this + 0x68) = param_3;
  *(__crt_locale_pointers **)(this + 0x6c) = param_4;
  return this;
}

