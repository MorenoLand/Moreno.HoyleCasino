// FUN_00463c70  00463c70

undefined4 * __fastcall FUN_00463c70(undefined4 *param_1)

{
  FUN_005e9e20();
  *param_1 = Card::vftable;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[2] = 0;
  return param_1;
}

