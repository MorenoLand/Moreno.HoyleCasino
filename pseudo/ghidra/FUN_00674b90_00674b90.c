// FUN_00674b90  00674b90

void FUN_00674b90(void)

{
  char *_Source;
  undefined1 local_113 [263];
  uint local_c;
  
  local_c = DAT_00781870 ^ (uint)&stack0xfffffffc;
  memset(local_113,0,0x103);
  _Source = (char *)FUN_00630f40("SID_SHELL_FACECREATPATH_WIN");
  strcpy(&DAT_00795fc0,_Source);
  FUN_00674960();
  __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
  return;
}

