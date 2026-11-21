// FUN_00463db0  00463db0

void __thiscall FUN_00463db0(int param_1,char param_2)

{
  FUN_005eaf00(0x186a1);
  (**(code **)(**(int **)(param_1 + 8) + 0xb0))(0x35);
  if (param_2 == '\0') {
    (**(code **)(**(int **)(param_1 + 8) + 0x6c))(9);
  }
  else {
    (**(code **)(**(int **)(param_1 + 8) + 0x6c))(100);
  }
  (**(code **)(**(int **)(param_1 + 8) + 0x74))();
  return;
}

