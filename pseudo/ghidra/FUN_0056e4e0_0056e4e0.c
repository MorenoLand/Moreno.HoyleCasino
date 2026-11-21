// FUN_0056e4e0  0056e4e0

void __fastcall FUN_0056e4e0(int param_1)

{
  if (*(int *)(param_1 + 0xa4) != 2) {
    if (*(int *)(param_1 + 0xa0) == 0) {
      FUN_0056e800(1);
    }
    else {
      (**(code **)(**(int **)(param_1 + 0x14) + 0xcc))();
      if (*(int *)(param_1 + 0xa4) < 2) {
        FUN_0056e0a0(*(int *)(param_1 + 0xa4) + 1);
        FUN_0056dff0(1);
      }
    }
  }
  return;
}

