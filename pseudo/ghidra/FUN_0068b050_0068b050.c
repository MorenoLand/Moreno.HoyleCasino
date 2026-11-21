// FUN_0068b050  0068b050

void __thiscall FUN_0068b050(int param_1,char *param_2,char *param_3)

{
  undefined4 uVar1;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *this;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_60 [28];
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  undefined4 local_34;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006adf9c;
  local_10 = ExceptionList;
  local_14 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (local_30,(char *)(param_1 + 0x107));
  local_8 = 0;
  local_40 = *(int *)(param_1 + 0x214);
  local_44 = 0;
  if (param_1 + 0x210 == 0) {
    _invalid_parameter_noinfo();
  }
  local_44 = param_1 + 0x210;
  uVar1 = FUN_0068c3a0(local_30);
  FUN_0068d4b0(uVar1,param_1 + 0x210);
  if ((local_3c == 0) || (local_3c != local_44)) {
    _invalid_parameter_noinfo();
  }
  if ((local_38 == local_40) && (*(int *)(param_1 + 0x208) != 0)) {
    FUN_0068a710(param_1 + 0x107,*(undefined4 *)(param_1 + 0x208));
  }
  local_34 = FUN_0068b720(local_30);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_60,param_2);
  local_8._0_1_ = 1;
  this = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)FUN_0068b950(local_60);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=(this,param_3);
  local_8 = (uint)local_8._1_3_ << 8;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_60);
  local_8 = 0xffffffff;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_30);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

