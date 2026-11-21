// FUN_0062a300  0062a300

void __fastcall FUN_0062a300(int param_1)

{
  FUN_005f5420();
  if (*(int *)(param_1 + 0x48) != 0) {
    (**(code **)(**(int **)(param_1 + 0x48) + 0x70))();
  }
  (**(code **)(**(int **)(param_1 + 0x4c) + 0x70))();
  (**(code **)(**(int **)(param_1 + 0x50) + 0x70))();
  if (*(int *)(param_1 + 0x54) != 0) {
    (**(code **)(**(int **)(param_1 + 0x54) + 0x70))();
  }
  return;
}

