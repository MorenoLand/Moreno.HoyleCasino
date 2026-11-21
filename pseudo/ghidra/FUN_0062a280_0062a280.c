// FUN_0062a280  0062a280

void __fastcall FUN_0062a280(int param_1)

{
  FUN_005f5440();
  if (*(int *)(param_1 + 0x48) != 0) {
    (**(code **)(**(int **)(param_1 + 0x48) + 0x74))();
  }
  (**(code **)(**(int **)(param_1 + 0x4c) + 0x74))();
  (**(code **)(**(int **)(param_1 + 0x50) + 0x74))();
  if (*(int *)(param_1 + 0x54) != 0) {
    (**(code **)(**(int **)(param_1 + 0x54) + 0x74))();
  }
  return;
}

