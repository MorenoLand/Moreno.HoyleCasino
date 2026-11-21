// FUN_00452fd0  00452fd0

void FUN_00452fd0(undefined2 param_1,undefined2 param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  int local_8;
  
  for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
    param_3[local_8 + 3] = 0xff;
  }
  iVar2 = FUN_0044f680(param_1);
  iVar3 = FUN_0044f680(param_2);
  if (iVar2 == iVar3) {
    *param_3 = 2;
  }
  else {
    *param_3 = 1;
  }
  iVar2 = FUN_0044f680(param_1);
  iVar3 = FUN_0044f680(CONCAT22(extraout_var,param_2));
  if (iVar2 < iVar3) {
    uVar1 = FUN_0044f680(CONCAT22(extraout_var_00,param_2));
    param_3[3] = uVar1;
    uVar1 = FUN_0044f680(CONCAT22(extraout_var_01,param_1));
    param_3[4] = uVar1;
  }
  else {
    uVar1 = FUN_0044f680(CONCAT22(extraout_var_00,param_1));
    param_3[3] = uVar1;
    uVar1 = FUN_0044f680(CONCAT22(extraout_var_02,param_2));
    param_3[4] = uVar1;
  }
  return;
}

