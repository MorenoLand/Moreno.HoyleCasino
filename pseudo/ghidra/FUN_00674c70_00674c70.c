// FUN_00674c70  00674c70

void FUN_00674c70(void)

{
  FILE *_File;
  char local_40c;
  undefined1 local_40b [1027];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_40c = '\0';
  memset(local_40b,0,0x3ff);
  FUN_00674b90();
  sprintf(&local_40c,"%s%sfacecreator.ini",&DAT_00795fc0,&DAT_006d61f8);
  _File = (FILE *)FUN_005ea9c0(&local_40c,&DAT_006d8524);
  if (_File != (FILE *)0x0) {
    fclose(_File);
  }
  FUN_00604810(&DAT_00795fc0);
  FUN_00674c00(0xf9060);
  FUN_00674c00(1000000);
  (**(code **)(*DAT_007960d8 + 0x14))();
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

