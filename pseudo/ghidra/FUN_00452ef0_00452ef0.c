// FUN_00452ef0  00452ef0

void FUN_00452ef0(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  int iVar1;
  undefined4 extraout_var_03;
  undefined4 uVar2;
  char local_18 [3];
  char local_15;
  char local_10 [3];
  char local_d;
  char local_c;
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  FUN_0044efd0(param_1);
  uVar2 = extraout_var_03;
  FUN_00452fd0(CONCAT22(extraout_var,param_2),CONCAT22(extraout_var_01,param_3),local_18);
  FUN_004530b0(param_1,CONCAT22(extraout_var_00,param_2),CONCAT22(extraout_var_02,param_3),local_10)
  ;
  iVar1 = (int)local_10[0];
  if ((((iVar1 < 3) && (local_10[0] <= local_18[0])) &&
      (iVar1 = (int)local_10[0], local_18[0] <= iVar1)) &&
     (iVar1 = (int)local_18[0], local_10[0] == iVar1)) {
    if (local_10[0] == '\x01') {
      iVar1 = (int)local_15;
      if ((local_d <= iVar1) && (local_d == local_15)) {
        iVar1 = (int)local_c;
      }
    }
    else {
      iVar1 = (int)local_15;
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc,iVar1,uVar2);
  return;
}

