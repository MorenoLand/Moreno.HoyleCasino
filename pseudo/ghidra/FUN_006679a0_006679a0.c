// FUN_006679a0  006679a0

void FUN_006679a0(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int *param_6)

{
  char cVar1;
  int iVar2;
  char local_10c [260];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  param_1 = strrchr(param_1,0x5c);
  if (param_1 == (char *)0x0) {
    param_1 = (char *)0x0;
  }
  else {
    param_1 = param_1 + 1;
    cVar1 = FUN_00667ac0(&param_1,param_2);
    if ((((cVar1 != '\0') && (cVar1 = FUN_00667ac0(&param_1,param_3), cVar1 != '\0')) &&
        (cVar1 = FUN_00667ac0(&param_1,param_4), cVar1 != '\0')) &&
       (cVar1 = FUN_00667ac0(&param_1,param_5), cVar1 != '\0')) {
      FUN_00667ac0(&param_1,local_10c);
    }
    iVar2 = atoi(local_10c);
    *param_6 = iVar2;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

