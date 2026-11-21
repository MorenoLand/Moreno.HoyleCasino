// FUN_005c8bb0  005c8bb0

undefined4 * __fastcall FUN_005c8bb0(undefined4 *param_1)

{
  FUN_005d0980();
  *param_1 = MLVSlotState::vftable;
  param_1[0x38] = 0;
  memset(param_1 + 6,0,0x1c);
  memset(param_1 + 0xd,0,0x1e);
  memset(param_1 + 0x15,0,0x8c);
  *(undefined1 *)(param_1 + 5) = 1;
  *(undefined1 *)(param_1 + 0x39) = 0;
  param_1[4] = &DAT_00793618;
  return param_1;
}

