// FUN_0062fde0  0062fde0

void FUN_0062fde0(char *param_1)

{
  char local_814 [2052];
  uint local_10;
  int local_c;
  va_list local_8;
  
  local_10 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_8 = &stack0x00000008;
  local_c = vsprintf(local_814,param_1,local_8);
  if (0x7fe < local_c) {
    FUN_005e9f20("nBuf < 2047","..\\casinoShell\\util.cpp",0x8b);
  }
  FUN_0062fe60(local_814);
  local_8 = (va_list)0x0;
  __security_check_cookie(local_10 ^ (uint)&stack0xfffffffc);
  return;
}

