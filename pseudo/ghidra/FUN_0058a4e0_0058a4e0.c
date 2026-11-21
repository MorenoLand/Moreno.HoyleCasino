// FUN_0058a4e0  0058a4e0

void __thiscall FUN_0058a4e0(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x3c08) != param_2) {
    *(int *)(param_1 + 0x3c08) = param_2;
    FUN_0058dfb0(*(undefined4 *)(param_1 + 0x3be4 + *(int *)(param_1 + 0x3c08) * 4));
  }
  return;
}

