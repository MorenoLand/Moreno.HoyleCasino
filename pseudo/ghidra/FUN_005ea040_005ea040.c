// FUN_005ea040  005ea040

void FUN_005ea040(char *param_1,LPCSTR param_2,byte param_3)

{
  char local_214 [524];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  strcpy(local_214,param_1);
  FUN_005eaa40(local_214);
  CopyFileA(local_214,param_2,(uint)param_3);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

