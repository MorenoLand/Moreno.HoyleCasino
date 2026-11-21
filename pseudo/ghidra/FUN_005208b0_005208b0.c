// FUN_005208b0  005208b0

void FUN_005208b0(undefined1 *param_1)

{
  char cVar1;
  char *_Source;
  FILE *_File;
  int local_410;
  char local_40c;
  undefined1 local_40b [1027];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_40c = '\0';
  memset(local_40b,0,0x3ff);
  _Source = (char *)FUN_00520c40();
  strcat(&local_40c,_Source);
  _File = (FILE *)FUN_005ea9c0(&local_40c,&DAT_006c2d28);
  if (_File == (FILE *)0x0) {
    memset(param_1,0,0x6884);
    *param_1 = 0;
    for (local_410 = 0; local_410 < 0x10; local_410 = local_410 + 1) {
      *(undefined4 *)(param_1 + local_410 * 0x688 + 4) = 0xffffffff;
    }
    FUN_005209d0(param_1);
  }
  else {
    fread(param_1,0x6884,1,_File);
    fclose(_File);
    cVar1 = FUN_005204f0();
    if (cVar1 == '\x01') {
      FUN_00520a80(param_1);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

