// FUN_005fd6b0  005fd6b0

void __fastcall FUN_005fd6b0(int param_1)

{
  if (*(char *)(param_1 + 0x1a8) != '\0') {
    FUN_00602650();
    if (*(int *)(param_1 + 500) != 0) {
      (**(code **)(**(int **)(param_1 + 500) + 0xb0))(2);
    }
    if (*(int *)(param_1 + 0x1f8) != 0) {
      (**(code **)(**(int **)(param_1 + 0x1f8) + 0xb0))(2);
    }
  }
  return;
}

