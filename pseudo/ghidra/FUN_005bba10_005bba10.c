// FUN_005bba10  005bba10

exception * __thiscall FUN_005bba10(exception *param_1,exception *param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a8059;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  std::exception::exception(param_1,param_2);
  local_8 = 0;
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0xc),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_2 + 0xc));
  ExceptionList = local_10;
  return param_1;
}

