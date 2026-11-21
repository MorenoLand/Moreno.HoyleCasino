// FUN_005b1ea0  005b1ea0

void FUN_005b1ea0(undefined4 param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 extraout_var;
  
  if ((((param_3 == 0x37) || (param_3 == 0x38)) || (param_3 == 0x39)) || (param_3 == 0x3a)) {
    piVar1 = (int *)FUN_005fb5e0(0x32);
    (**(code **)(*piVar1 + 0xf0))(0x3154f9,0,piVar1,extraout_var);
  }
  return;
}

