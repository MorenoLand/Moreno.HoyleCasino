// FUN_00535d20  00535d20

void __fastcall FUN_00535d20(int param_1)

{
  *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
  FUN_005385b0();
  *(undefined4 *)(DAT_00793394 + 4) = *(undefined4 *)(param_1 + 8);
  FUN_0052cb00();
  return;
}

