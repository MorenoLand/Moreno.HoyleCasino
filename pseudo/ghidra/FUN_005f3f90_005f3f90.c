// FUN_005f3f90  005f3f90

void __thiscall FUN_005f3f90(int *param_1,int param_2)

{
  param_1[0xf] = param_2;
  if (param_1[0xf] == 0) {
    (**(code **)(*param_1 + 0x74))();
  }
  else {
    FUN_005f41c0(0);
    (**(code **)(*param_1 + 0x70))();
    FUN_005f8720();
  }
  return;
}

