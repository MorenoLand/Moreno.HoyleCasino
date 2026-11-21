// FUN_00600940  00600940

void __fastcall FUN_00600940(int param_1)

{
  FUN_006005d0();
  if (*(int *)(param_1 + 0x20) != 0) {
    FUN_006041d0(*(undefined4 *)(param_1 + 0x20));
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  return;
}

