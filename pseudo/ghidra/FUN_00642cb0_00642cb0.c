// FUN_00642cb0  00642cb0

undefined4 FUN_00642cb0(undefined2 param_1,undefined2 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  
  uVar1 = FUN_00641280(param_1);
  iVar2 = FUN_00641290(CONCAT22(extraout_var,param_1));
  uVar3 = FUN_00641280(CONCAT22(extraout_var_01,param_2));
  iVar4 = FUN_00641290(param_2,uVar3,uVar1);
  if (param_3 == 0) {
    uVar1 = FUN_00642950(CONCAT22(extraout_var_02,param_1),CONCAT22(extraout_var_00,param_2));
  }
  else if (iVar2 == iVar4) {
    uVar1 = FUN_00642950(CONCAT22(extraout_var_02,param_1),CONCAT22(extraout_var_00,param_2));
  }
  else if (iVar2 == param_3) {
    uVar1 = 1;
  }
  else if (iVar4 == param_3) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

