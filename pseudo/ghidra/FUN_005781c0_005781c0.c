// FUN_005781c0  005781c0

void __fastcall FUN_005781c0(int param_1)

{
  if (*(int *)(param_1 + 0xc) == 1) {
    *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  }
  else {
    FUN_006005d0();
    (**(code **)(**(int **)(DAT_0079345c + 0x34) + 0x70))();
  }
  return;
}

