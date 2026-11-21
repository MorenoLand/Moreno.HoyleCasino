// FUN_0068e340  0068e340

exception * __thiscall FUN_0068e340(exception *param_1,exception *param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ae1a9;
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
  *(undefined ***)param_1 = std::out_of_range::vftable;
  ExceptionList = local_10;
  return param_1;
}

