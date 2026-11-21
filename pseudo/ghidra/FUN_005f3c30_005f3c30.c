// FUN_005f3c30  005f3c30

void __thiscall FUN_005f3c30(int *param_1,int param_2)

{
  param_1[0xc] = param_1[0xd];
  param_1[0xd] = param_2;
  param_1[0xb] = -1;
  (**(code **)(*param_1 + 0x90))(param_1[0xd]);
  return;
}

