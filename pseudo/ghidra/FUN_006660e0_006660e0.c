// FUN_006660e0  006660e0

void FUN_006660e0(void)

{
  int iVar1;
  LPCSTR pCVar2;
  char *_Source;
  int local_210;
  CHAR local_20c [256];
  CHAR local_10c [260];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_210 = 0;
  FUN_00665cb0();
  iVar1 = FUN_00665d20();
  if (iVar1 != 0) {
    pCVar2 = (LPCSTR)FUN_00630f40("SID_SHELL_BADSOUNDDRIVER");
    wsprintfA(local_10c,pCVar2);
    local_210 = 2;
  }
  iVar1 = FUN_00665da0();
  if (iVar1 != 0) {
    local_210 = 2;
    pCVar2 = (LPCSTR)FUN_00630f40("SID_SHELL_BADSCREENRESOLUTION_FORMAT",&DAT_00795634);
    wsprintfA(local_10c,pCVar2);
  }
  if (DAT_007950b5 < 0x10) {
    local_210 = 2;
    pCVar2 = (LPCSTR)FUN_00630f40("SID_SHELL_BADBITDEPTH_FORMAT",&DAT_00795634);
    wsprintfA(local_10c,pCVar2);
  }
  FUN_00665e20();
  if (local_210 == 1) {
    pCVar2 = (LPCSTR)FUN_00630f40("SID_SHELL_WARNING_FORMAT",&DAT_00795634);
    wsprintfA(local_20c,pCVar2);
    MessageBoxA((HWND)0x0,local_10c,local_20c,0x2040);
  }
  else if (local_210 == 2) {
    pCVar2 = (LPCSTR)FUN_00630f40("SID_SHELL_ERROR_FORMAT",&DAT_00795634);
    wsprintfA(local_20c,pCVar2);
    _Source = (char *)FUN_00630f40("SID_SHELL_SERIOUSWARNING");
    strcat(local_10c,_Source);
    MessageBoxA((HWND)0x0,local_10c,local_20c,0x2024);
  }
  else if (local_210 == 3) {
    MessageBoxA((HWND)0x0,local_10c,&DAT_00795634,0x2010);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

