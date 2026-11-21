// FUN_005bb990  005bb990

exception * __thiscall FUN_005bb990(exception *param_1,exception *param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a8029;
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
  *(undefined ***)param_1 = std::length_error::vftable;
  ExceptionList = local_10;
  return param_1;
}

