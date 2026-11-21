// FUN_005fb5a0  005fb5a0

void FUN_005fb5a0(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 extraout_var;
  
  piVar1 = (int *)FUN_005fb550(param_1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xb4))(param_2,extraout_var);
  }
  return;
}

