// FUN_00601430  00601430

void __fastcall FUN_00601430(int param_1)

{
  if (*(int *)(param_1 + 0xc) == 1) {
    *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  }
  else {
    FUN_006005d0();
  }
  return;
}

