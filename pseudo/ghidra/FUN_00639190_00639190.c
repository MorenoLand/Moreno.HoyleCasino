// FUN_00639190  00639190

void __thiscall FUN_00639190(undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  char *pcVar1;
  int iVar2;
  char local_98 [16];
  char local_88 [64];
  char local_48 [64];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  pcVar1 = (char *)FUN_00630f40("SID_GENERIC_AMPERSAND",param_1);
  strcpy(local_98,pcVar1);
  sprintf(local_88,"%s %s",param_2,local_98);
  FUN_005ee710(local_88);
  pcVar1 = (char *)(**(code **)(*param_4 + 0xb8))();
  strcpy(local_48,pcVar1);
  iVar2 = strcmp(local_48,local_88);
  if (iVar2 == 0) {
    FUN_005ee710(param_3);
  }
  else {
    sprintf(local_88,"%s %s",local_98,param_3);
    FUN_005ee710(local_88);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

