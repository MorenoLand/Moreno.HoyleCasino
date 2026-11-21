// FUN_005e0cc0  005e0cc0

void __fastcall FUN_005e0cc0(int param_1)

{
  FILE *_File;
  int local_418;
  int local_410;
  char local_40c;
  undefined1 local_40b [1027];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_40c = '\0';
  memset(local_40b,0,0x3ff);
  strcat(&local_40c,"c99kn.hst");
  _File = (FILE *)FUN_005ea9c0(&local_40c,&DAT_006c2d28);
  if (_File == (FILE *)0x0) {
    *(undefined4 *)(param_1 + 0x98) = 1;
    for (local_410 = 0; local_410 < 0x3e9; local_410 = local_410 + 1) {
      for (local_418 = 0; local_418 < 0x14; local_418 = local_418 + 1) {
        *(undefined1 *)(param_1 + 0x9c + local_410 * 0x14 + local_418) = 0;
      }
    }
  }
  else {
    fread((void *)(param_1 + 0x98),0x4e38,1,_File);
    fclose(_File);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

