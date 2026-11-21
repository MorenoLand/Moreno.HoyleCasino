// FUN_00615080  00615080

void __fastcall FUN_00615080(int param_1)

{
  *(undefined1 *)(param_1 + 0x60) = 1;
  (**(code **)(**(int **)(param_1 + 0x58) + 0x74))();
  (**(code **)(**(int **)(param_1 + 0x54) + 0xcc))();
  (**(code **)(**(int **)(param_1 + 0x50) + 0xcc))();
  return;
}

