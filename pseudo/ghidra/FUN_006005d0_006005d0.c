// FUN_006005d0  006005d0

void __fastcall FUN_006005d0(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    (**(code **)(**(int **)(param_1 + 8) + 0x1c))(0);
  }
  *(undefined1 *)(param_1 + 0x18) = 0;
  if (*(char *)(param_1 + 0x19) != '\0') {
    (**(code **)(**(int **)(param_1 + 4) + 0x70))();
  }
  FUN_005f5d50(0);
  return;
}

