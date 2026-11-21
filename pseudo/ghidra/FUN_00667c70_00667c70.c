// FUN_00667c70  00667c70

void __thiscall FUN_00667c70(undefined4 param_1,char *param_2)

{
  char *pcVar1;
  char local_24 [28];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_24[0] = '\0';
  FUN_006375b0(param_1);
  pcVar1 = (char *)FUN_00520e60();
  strcat(local_24,pcVar1);
  pcVar1 = strchr(local_24,0x2e);
  *pcVar1 = '\0';
  _mkdir(local_24);
  strcat(local_24,"\\");
  strcat(local_24,param_2);
  strcpy(param_2,local_24);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

