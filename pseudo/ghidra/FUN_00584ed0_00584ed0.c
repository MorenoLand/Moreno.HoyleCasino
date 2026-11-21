// FUN_00584ed0  00584ed0

void __thiscall FUN_00584ed0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 0x78) = param_2;
  *(undefined4 *)(param_1 + 0x7c) = param_3;
  *(undefined4 *)(param_1 + 0x80) = param_4;
  (**(code **)(**(int **)(param_1 + 0x5c) + 200))(*(undefined4 *)(param_1 + 0x78));
  (**(code **)(**(int **)(param_1 + 0x60) + 200))(*(undefined4 *)(param_1 + 0x7c));
  FUN_005eaf00(*(undefined4 *)(param_1 + 0x80));
  return;
}

