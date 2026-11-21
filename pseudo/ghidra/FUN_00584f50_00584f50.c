// FUN_00584f50  00584f50

void __fastcall FUN_00584f50(int param_1)

{
  FUN_005f6270();
  (**(code **)(**(int **)(param_1 + 0x5c) + 0x74))();
  (**(code **)(**(int **)(param_1 + 0x60) + 0x74))();
  if (*(char *)(param_1 + 0x6c) == '\0') {
    (**(code **)(**(int **)(param_1 + 100) + 0x70))();
  }
  else {
    (**(code **)(**(int **)(param_1 + 100) + 0x74))();
  }
  return;
}

