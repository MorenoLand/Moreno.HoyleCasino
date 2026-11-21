// FUN_0068f950  0068f950

/* WARNING: Removing unreachable block (ram,0x0068f9ad) */

void FUN_0068f950(int param_1)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *this;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006ae2e9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0xc);
  local_8 = 0;
  FUN_0068dc60(DAT_00781870 ^ (uint)&stack0xfffffffc,this,param_1 + 0x28);
  local_8 = 0xffffffff;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(this);
  ExceptionList = local_10;
  return;
}

