// FUN_00585010  00585010

void __fastcall FUN_00585010(int param_1)

{
  *(undefined1 *)(param_1 + 0x6c) = 1;
  FUN_005850d0();
  (**(code **)(**(int **)(param_1 + 100) + 0x74))();
  (**(code **)(**(int **)(param_1 + 0x5c) + 0xcc))();
  (**(code **)(**(int **)(param_1 + 0x60) + 0xcc))();
  return;
}

