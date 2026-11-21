// FUN_00582270  00582270

void __fastcall FUN_00582270(int param_1)

{
  if (*(int *)(param_1 + 0x39f8 + *(int *)(param_1 + 0x407c) * 4) + 1 <
      *(int *)(param_1 + 0x3a18 + *(int *)(param_1 + 0x407c) * 4)) {
    *(int *)(param_1 + 0x39f8 + *(int *)(param_1 + 0x407c) * 4) =
         *(int *)(param_1 + 0x39f8 + *(int *)(param_1 + 0x407c) * 4) + 1;
    FUN_00581b70();
  }
  return;
}

