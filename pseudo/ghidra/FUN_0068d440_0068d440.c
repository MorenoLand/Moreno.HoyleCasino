// FUN_0068d440  0068d440

exception * __thiscall
FUN_0068d440(exception *param_1,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ae0f9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  std::exception::exception(param_1);
  local_8 = 0;
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0xc),
             param_2);
  ExceptionList = local_10;
  return param_1;
}

