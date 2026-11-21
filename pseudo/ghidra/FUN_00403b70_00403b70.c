// FUN_00403b70  00403b70

void FUN_00403b70(undefined4 param_1)

{
  int *piVar1;
  undefined4 extraout_var;
  
  piVar1 = (int *)FUN_005fb2b0(param_1);
  (**(code **)(*piVar1 + 0x70))(piVar1,extraout_var);
  return;
}

