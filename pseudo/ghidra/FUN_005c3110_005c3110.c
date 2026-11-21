// FUN_005c3110  005c3110

void __thiscall FUN_005c3110(int *param_1,int param_2)

{
  (**(code **)(*param_1 + 0x10))();
  param_1[0x15] = param_2;
  (**(code **)(*param_1 + 0x10))();
  return;
}

