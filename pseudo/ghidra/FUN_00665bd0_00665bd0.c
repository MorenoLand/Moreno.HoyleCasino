// FUN_00665bd0  00665bd0

void FUN_00665bd0(void)

{
  DWORD DVar1;
  char *pcVar2;
  CHAR local_114 [264];
  uint local_c;
  undefined1 local_5;
  
  local_c = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_5 = 1;
  DVar1 = GetModuleFileNameA((HMODULE)0x0,local_114,0x104);
  if ((int)DVar1 < 1) {
    local_5 = 0;
    DAT_007951c0 = 0;
    local_114[0] = '\0';
  }
  else {
    strcpy(&DAT_007951c0,local_114);
    pcVar2 = strrchr(local_114,0x5c);
    if (pcVar2 != (char *)0x0) {
      pcVar2[1] = '\0';
    }
  }
  strcpy(&DAT_007950bc,local_114);
  pcVar2 = (char *)FUN_005ea680();
  _mkdir(pcVar2);
  _chdir(pcVar2);
  __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
  return;
}

