// FUN_00582210  00582210

void __fastcall FUN_00582210(int param_1)

{
  if (0 < *(int *)(param_1 + 0x39f8 + *(int *)(param_1 + 0x407c) * 4)) {
    *(int *)(param_1 + 0x39f8 + *(int *)(param_1 + 0x407c) * 4) =
         *(int *)(param_1 + 0x39f8 + *(int *)(param_1 + 0x407c) * 4) + -1;
    FUN_00581b70();
  }
  return;
}

