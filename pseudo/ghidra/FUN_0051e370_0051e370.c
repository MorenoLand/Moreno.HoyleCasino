// FUN_0051e370  0051e370

void FUN_0051e370(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,
                 int param_6)

{
  int *piVar1;
  char local_3c [52];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  if (param_2 < 100) {
    sprintf(local_3c,"%d-%d",param_1,param_2);
  }
  else {
    sprintf(local_3c,"%d-",param_1);
  }
  piVar1 = (int *)FUN_005fb550(param_5 + param_6);
  (**(code **)(*piVar1 + 0xb4))(local_3c);
  sprintf(local_3c,"$%d",param_3);
  piVar1 = (int *)FUN_005fb550(param_5 + 1 + param_6);
  (**(code **)(*piVar1 + 0xb4))(local_3c);
  sprintf(local_3c,"$%d",param_4);
  piVar1 = (int *)FUN_005fb550(param_5 + 2 + param_6);
  (**(code **)(*piVar1 + 0xb4))(local_3c);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

