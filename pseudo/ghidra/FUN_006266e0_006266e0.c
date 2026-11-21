// FUN_006266e0  006266e0

void __fastcall FUN_006266e0(int param_1)

{
  FUN_005f5440();
  if (*(int *)(param_1 + 0x54) != 0) {
    (**(code **)(**(int **)(param_1 + 0x54) + 0x74))();
  }
  if (*(int *)(param_1 + 0x58) != 0) {
    (**(code **)(**(int **)(param_1 + 0x58) + 0x74))();
  }
  if ((*(int *)(param_1 + 0x5c) != 0) && (*(int *)(param_1 + 0x60) != 0)) {
    (**(code **)(**(int **)(param_1 + 0x5c) + 0x74))();
  }
  return;
}

