// FUN_005f5860  005f5860

void __thiscall FUN_005f5860(int *param_1,int param_2)

{
  if (param_1[1] != 0) {
    (**(code **)(*param_1 + 0xac))();
    FUN_005f8ce0(param_1);
  }
  param_1[1] = param_2;
  if (param_1[10] != 0) {
    FUN_005f8ba0(param_1);
    (**(code **)(*param_1 + 0xac))();
  }
  return;
}

