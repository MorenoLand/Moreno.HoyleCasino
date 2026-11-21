// FUN_005ef340  005ef340

void __thiscall FUN_005ef340(int *param_1,int param_2,int param_3)

{
  param_1[0x1d] = param_2;
  param_1[0x1e] = param_3;
  (**(code **)(*param_1 + 0xac))();
  return;
}

