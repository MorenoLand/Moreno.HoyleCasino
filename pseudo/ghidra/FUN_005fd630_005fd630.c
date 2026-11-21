// FUN_005fd630  005fd630

void __fastcall FUN_005fd630(int param_1)

{
  if (*(char *)(param_1 + 0x1a8) == '\0') {
    FUN_006025c0();
    if (*(int *)(param_1 + 500) != 0) {
      (**(code **)(**(int **)(param_1 + 500) + 0xb0))(0);
    }
    if (*(int *)(param_1 + 0x1f8) != 0) {
      (**(code **)(**(int **)(param_1 + 0x1f8) + 0xb0))(0);
    }
  }
  return;
}

