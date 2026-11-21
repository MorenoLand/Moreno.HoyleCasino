// FUN_00646c20  00646c20

void __thiscall FUN_00646c20(int param_1,char param_2)

{
  *(undefined1 *)(param_1 + 0x5c) = 1;
  if (param_2 != '\0') {
    FUN_00648270(1);
  }
  (**(code **)(**(int **)(param_1 + 0xc) + 0x70))();
  (**(code **)(**(int **)(param_1 + 8) + 0x70))();
  (**(code **)(**(int **)(param_1 + 0x18) + 0x70))();
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_00664670();
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    (**(code **)(**(int **)(param_1 + 0x1c) + 0x70))();
  }
  return;
}

