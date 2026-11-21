// FUN_006556d0  006556d0

void __thiscall FUN_006556d0(int *param_1,int param_2)

{
  if (param_2 == 0) {
    (**(code **)(*param_1 + 0x48))();
  }
  else if (param_2 != 1) {
    if (param_2 != 2) {
      return;
    }
    (**(code **)(*param_1 + 0x48))();
    return;
  }
  FUN_0064ee40();
  return;
}

