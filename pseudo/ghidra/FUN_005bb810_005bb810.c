// FUN_005bb810  005bb810

exception * __thiscall FUN_005bb810(exception *param_1,uint param_2)

{
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0xc));
  std::exception::~exception(param_1);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

