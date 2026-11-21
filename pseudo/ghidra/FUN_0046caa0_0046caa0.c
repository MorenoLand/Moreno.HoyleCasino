// FUN_0046caa0  0046caa0

undefined4 * __thiscall FUN_0046caa0(undefined4 *param_1,undefined4 param_2)

{
  FUN_00601a80();
  *param_1 = CardFiveButton::vftable;
  param_1[0x78] = param_2;
  *(undefined1 *)(param_1 + 0x77) = 0;
  return param_1;
}

