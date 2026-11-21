// FUN_00576460  00576460

void __fastcall FUN_00576460(int param_1)

{
  if (*(int *)(param_1 + 0x74) != 3) {
    if (*(int *)(param_1 + 0x70) == 0) {
      FUN_00576740(1);
    }
    else {
      (**(code **)(**(int **)(param_1 + 0x50) + 0xcc))();
      if (*(int *)(param_1 + 0x74) < 3) {
        FUN_00575e20(*(int *)(param_1 + 0x74) + 1);
        FUN_00575d70(1);
      }
    }
  }
  return;
}

