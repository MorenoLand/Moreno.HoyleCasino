// FUN_006060a0  006060a0

undefined4 * __fastcall FUN_006060a0(undefined4 *param_1)

{
  FUN_005ffbb0();
  *param_1 = sciRadioButton::vftable;
  param_1[0x82] = 0;
  *(undefined1 *)(param_1 + 0x83) = 0;
  return param_1;
}

