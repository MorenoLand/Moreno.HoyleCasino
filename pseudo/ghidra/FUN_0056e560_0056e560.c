// FUN_0056e560  0056e560

void __fastcall FUN_0056e560(int param_1)

{
  if (*(int *)(param_1 + 0xa4) != 2) {
    if (*(int *)(param_1 + 0xa0) == 0) {
      FUN_0056e800(2 - *(int *)(param_1 + 0xa4));
    }
    else {
      (**(code **)(**(int **)(param_1 + 0x14) + 0xcc))();
      if (2U - *(int *)(param_1 + 0xa4) < *(uint *)(param_1 + 0xa0)) {
        FUN_0056dff0(2 - *(int *)(param_1 + 0xa4));
        FUN_0056e0a0(2);
      }
      else {
        FUN_0056e0a0(*(undefined4 *)(param_1 + 0xa0));
        FUN_0056dff0(*(undefined4 *)(param_1 + 0xa0));
      }
    }
  }
  return;
}

