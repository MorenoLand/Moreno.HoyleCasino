// FUN_00600c20  00600c20

void __fastcall FUN_00600c20(int param_1)

{
  FUN_00600b30();
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
  if (*(int *)(param_1 + 0x1c) < 1) {
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  return;
}

