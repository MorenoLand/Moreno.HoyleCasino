// FUN_00577cd0  00577cd0

void __fastcall FUN_00577cd0(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    (**(code **)(**(int **)(param_1 + 8) + 0x1c))(0);
  }
  if (*(int *)(param_1 + 0xc) == 1) {
    FUN_005eb5d0(0xff);
  }
  else {
    FUN_005eb5d0(0);
    (**(code **)(**(int **)(param_1 + 4) + 0x70))();
  }
  FUN_006005d0();
  return;
}

