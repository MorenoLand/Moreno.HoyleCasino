// FUN_0060ca70  0060ca70

void __thiscall FUN_0060ca70(int param_1,int param_2,undefined4 param_3)

{
  while (*(int *)(param_1 + 8) <= param_2) {
    FUN_0060c720();
  }
  *(undefined4 *)(*(int *)(param_1 + 0xc) + param_2 * 4) = param_3;
  if (*(int *)(param_1 + 4) < param_2) {
    *(int *)(param_1 + 4) = param_2 + 1;
  }
  return;
}

