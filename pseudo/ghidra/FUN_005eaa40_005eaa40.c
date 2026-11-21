// FUN_005eaa40  005eaa40

void FUN_005eaa40(char *param_1)

{
  uint uVar1;
  FILE *_File;
  char *_Source;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a9bd3;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar1;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_30);
  local_8 = 0;
  _File = (FILE *)FUN_005ea820(param_1,&DAT_006c2d28,local_30,uVar1);
  if (_File != (FILE *)0x0) {
    fclose(_File);
  }
  _Source = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::c_str(local_30);
  strcpy(param_1,_Source);
  local_8 = 0xffffffff;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_30);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

