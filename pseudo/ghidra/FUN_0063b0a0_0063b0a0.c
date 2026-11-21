// FUN_0063b0a0  0063b0a0

void __fastcall FUN_0063b0a0(int param_1)

{
  size_t _Size;
  int iVar1;
  size_t _Count;
  FILE *_File;
  size_t local_418;
  int local_414;
  FILE *local_410;
  char local_40c;
  undefined1 local_40b [1027];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_40c = '\0';
  memset(local_40b,0,0x3ff);
  strcat(&local_40c,(char *)(param_1 + 0x10));
  if (*(char *)(param_1 + 0x10) == '\0') {
    FUN_005e9f20("false","..\\casinoShell\\player.cpp",0x127);
  }
  else {
    local_410 = (FILE *)FUN_005ea9c0(&local_40c,&DAT_006c2d2c);
    if (local_410 != (FILE *)0x0) {
      local_414 = 900;
      fwrite(&local_414,4,1,local_410);
      fwrite((void *)(param_1 + 0x28),900,1,local_410);
      local_414 = (**(code **)(*DAT_0162ee84 + 0xf0))();
      fwrite(&local_414,4,1,local_410);
      _Count = 1;
      _File = local_410;
      _Size = (**(code **)(*DAT_0162ee84 + 0xf0))();
      fwrite(*(void **)(param_1 + 0x3a4),_Size,_Count,_File);
      local_414 = 0;
      while (iVar1 = (**(code **)(*DAT_0162ee84 + 0xec))(), local_414 < iVar1) {
        local_418 = (**(code **)(*DAT_0162ee84 + 0x108))(local_414);
        fwrite(&local_418,4,1,local_410);
        fwrite(*(void **)(*(int *)(param_1 + 0x3a8) + local_414 * 4),local_418,1,local_410);
        local_414 = local_414 + 1;
      }
      fclose(local_410);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

