// FUN_00402f20  00402f20

void __thiscall FUN_00402f20(int *param_1,int param_2)

{
  param_1[0x1d] = param_2;
  (**(code **)(*param_1 + 0xbc))(param_1[0x1d]);
  return;
}

