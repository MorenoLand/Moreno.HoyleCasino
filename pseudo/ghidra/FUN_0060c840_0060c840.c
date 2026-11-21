// FUN_0060c840  0060c840

void __thiscall FUN_0060c840(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 4) == *(int *)(param_1 + 8)) {
    FUN_0060c720();
  }
  *(undefined4 *)(*(int *)(param_1 + 0xc) + *(int *)(param_1 + 4) * 4) = param_2;
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  return;
}

