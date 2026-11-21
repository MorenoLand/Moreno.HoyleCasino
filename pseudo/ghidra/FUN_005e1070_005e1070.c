// FUN_005e1070  005e1070

void __fastcall FUN_005e1070(int param_1)

{
  *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + 1;
  if (*(int *)(param_1 + 0x98) == 0x3e9) {
    *(undefined4 *)(param_1 + 0x98) = 1;
  }
  FUN_005e0df0();
  FUN_005e1100();
  if (DAT_00793584 != 0) {
    FUN_005891b0();
  }
  return;
}

