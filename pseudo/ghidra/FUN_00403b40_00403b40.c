// FUN_00403b40  00403b40

void FUN_00403b40(undefined4 param_1)

{
  int *piVar1;
  undefined4 extraout_var;
  
  piVar1 = (int *)FUN_005fb2b0(param_1);
  (**(code **)(*piVar1 + 0x74))(piVar1,extraout_var);
  return;
}

