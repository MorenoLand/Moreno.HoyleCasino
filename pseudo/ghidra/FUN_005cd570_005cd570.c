// FUN_005cd570  005cd570

void __fastcall FUN_005cd570(int param_1)

{
  FUN_005cd620(0xff);
  FUN_005f62b0();
  if (*(int *)(param_1 + 0x1d0) != 0) {
    FUN_005cd620(0xff);
    (**(code **)(**(int **)(param_1 + 0x1d0) + 0x70))();
  }
  return;
}

