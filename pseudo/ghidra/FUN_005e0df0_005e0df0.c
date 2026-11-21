// FUN_005e0df0  005e0df0

void __fastcall FUN_005e0df0(int param_1)

{
  FILE *_File;
  char local_40c;
  undefined1 local_40b [1027];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_40c = '\0';
  memset(local_40b,0,0x3ff);
  strcat(&local_40c,"c99kn.hst");
  _File = (FILE *)FUN_005ea9c0(&local_40c,&DAT_006c2d2c);
  if (_File != (FILE *)0x0) {
    fwrite((void *)(param_1 + 0x98),0x4e38,1,_File);
    fclose(_File);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

