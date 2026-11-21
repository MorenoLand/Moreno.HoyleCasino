// FUN_0068bb40  0068bb40

void __fastcall
FUN_0068bb40(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006ae069;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_0068dc60(DAT_00781870 ^ (uint)&stack0xfffffffc,param_1,param_1 + 0x1c);
  local_8 = 0xffffffff;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(param_1);
  ExceptionList = local_10;
  return;
}

