// FUN_005ea0a0  005ea0a0

void FUN_005ea0a0(char *param_1)

{
  char local_214 [524];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  strcpy(local_214,param_1);
  FUN_005eaa40(local_214);
  GetFileAttributesA(local_214);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

