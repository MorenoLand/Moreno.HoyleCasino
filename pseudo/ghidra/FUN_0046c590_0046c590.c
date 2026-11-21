// FUN_0046c590  0046c590

undefined4 * __thiscall FUN_0046c590(undefined4 *param_1,undefined4 param_2)

{
  FUN_00601a80();
  *param_1 = CardTwoButton::vftable;
  param_1[0x78] = param_2;
  *(undefined1 *)(param_1 + 0x77) = 0;
  return param_1;
}

