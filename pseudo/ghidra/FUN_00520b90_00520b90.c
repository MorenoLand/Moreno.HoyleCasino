// FUN_00520b90  00520b90

void FUN_00520b90(void *param_1)

{
  char *_Source;
  FILE *_File;
  char local_40c;
  undefined1 local_40b [1027];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_40c = '\0';
  memset(local_40b,0,0x3ff);
  _Source = (char *)FUN_00520cd0();
  strcat(&local_40c,_Source);
  _File = (FILE *)FUN_005ea9c0(&local_40c,&DAT_006c2d2c);
  if (_File != (FILE *)0x0) {
    fwrite(param_1,0x6884,1,_File);
    fclose(_File);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

