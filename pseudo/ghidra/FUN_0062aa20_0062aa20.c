// FUN_0062aa20  0062aa20

void __thiscall FUN_0062aa20(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 8) == *(int *)(param_1 + 0x10)) {
    FUN_0062a980();
  }
  *(undefined4 *)(*(int *)(param_1 + 0xc) + *(int *)(param_1 + 8) * 4) = param_2;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  return;
}

