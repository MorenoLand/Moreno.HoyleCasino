// FUN_005ca110  005ca110

void __fastcall FUN_005ca110(int param_1)

{
  undefined4 local_8;
  
  for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
    if (*(int *)(param_1 + 4 + local_8 * 4) != 0) {
      (**(code **)(**(int **)(param_1 + 4 + local_8 * 4) + 0xd0))();
    }
  }
  for (local_8 = 0; local_8 < 2; local_8 = local_8 + 1) {
    if (*(int *)(param_1 + 0x14 + local_8 * 4) != 0) {
      (**(code **)(**(int **)(param_1 + 0x14 + local_8 * 4) + 0xd0))();
    }
  }
  (**(code **)(**(int **)(param_1 + 0x1c) + 0xd0))();
  if (*(int *)(param_1 + 0x20) != 0) {
    (**(code **)(**(int **)(param_1 + 0x20) + 0x70))();
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    (**(code **)(**(int **)(param_1 + 0x24) + 0x70))();
  }
  return;
}

