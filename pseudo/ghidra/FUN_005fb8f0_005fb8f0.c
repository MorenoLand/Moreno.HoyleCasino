// FUN_005fb8f0  005fb8f0

void FUN_005fb8f0(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 extraout_var;
  
  piVar1 = (int *)FUN_005fb810(param_1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xb4))(param_2,extraout_var);
  }
  return;
}

