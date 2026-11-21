// FUN_004074f0  004074f0

void __fastcall FUN_004074f0(int param_1)

{
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  *(undefined4 *)(param_1 + 0x1ac + *(int *)(param_1 + 8) * 4) = *(undefined4 *)(param_1 + 0x1c);
  return;
}

