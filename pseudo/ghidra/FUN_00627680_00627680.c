// FUN_00627680  00627680

int __thiscall FUN_00627680(int *param_1,int param_2)

{
  if (param_1[0x13] != param_2) {
    param_1[0x13] = param_2;
    (**(code **)(*param_1 + 0xac))();
  }
  return param_1[0x13];
}

