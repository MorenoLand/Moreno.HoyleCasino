// FUN_0068fa90  0068fa90

/* WARNING: Removing unreachable block (ram,0x0068fae6) */

void FUN_0068fa90(int param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006ae319;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x28));
  local_8 = 0xffffffff;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0xc));
  ExceptionList = local_10;
  return;
}

