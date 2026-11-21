// FUN_005ef370  005ef370

void __thiscall FUN_005ef370(int *param_1,int param_2,int param_3)

{
  param_1[0x1f] = param_2;
  param_1[0x20] = param_3;
  (**(code **)(*param_1 + 0xac))();
  return;
}

