// FUN_00407520  00407520

void __fastcall FUN_00407520(int param_1)

{
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  *(undefined4 *)(param_1 + 0x1ac + *(int *)(param_1 + 8) * 4) = *(undefined4 *)(param_1 + 0x18);
  return;
}

