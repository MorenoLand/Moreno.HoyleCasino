// FUN_005ea770  005ea770

void FUN_005ea770(char *param_1)

{
  char *pcVar1;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a9b49;
  local_10 = ExceptionList;
  local_14 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_005ea5b0(param_1,local_14);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_30,param_1);
  local_8 = 0;
  pcVar1 = (char *)FUN_005ea760();
  strcpy(param_1,pcVar1);
  pcVar1 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::c_str(local_30);
  strcat(param_1,pcVar1);
  local_8 = 0xffffffff;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_30);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

