// FUN_005da120  005da120

void FUN_005da120(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 extraout_var;
  
  FUN_0064fd20(param_1,param_2);
  iVar1 = (**(code **)(*param_1 + 0x54))(extraout_var);
  iVar1 = (**(code **)(*param_1 + 0x4c))(iVar1 + -10);
  (**(code **)(*param_1 + 0x44))(iVar1 + -0x11);
  return;
}

