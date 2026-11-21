// FUN_00601290  00601290

void __fastcall FUN_00601290(int param_1)

{
  if (*(char *)(param_1 + 0x20) == '\0') {
    (**(code **)(**(int **)(param_1 + 4) + 0x70))();
  }
  else {
    (**(code **)(**(int **)(param_1 + 4) + 0x74))();
    if (*(int *)(param_1 + 0x24) != 0) {
      FUN_005eb5d0(0xff);
    }
  }
  FUN_006005d0();
  return;
}

