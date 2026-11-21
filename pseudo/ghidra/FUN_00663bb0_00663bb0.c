// FUN_00663bb0  00663bb0

void FUN_00663bb0(undefined4 param_1)

{
  FILE *_File;
  char local_40c;
  undefined1 local_40b [1027];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_40c = '\0';
  memset(local_40b,0,0x3ff);
  sprintf(&local_40c,"%s%s%s",&DAT_00795fc0,&DAT_006d61f8,param_1);
  _File = (FILE *)FUN_005ea9c0(&local_40c,&DAT_006c2d28);
  if (_File != (FILE *)0x0) {
    fclose(_File);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

