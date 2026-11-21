// FUN_00626760  00626760

void __fastcall FUN_00626760(int param_1)

{
  FUN_005f5420();
  if (*(int *)(param_1 + 0x54) != 0) {
    (**(code **)(**(int **)(param_1 + 0x54) + 0x70))();
  }
  if (*(int *)(param_1 + 0x58) != 0) {
    (**(code **)(**(int **)(param_1 + 0x58) + 0x70))();
  }
  if (*(int *)(param_1 + 0x5c) != 0) {
    (**(code **)(**(int **)(param_1 + 0x5c) + 0x70))();
  }
  return;
}

