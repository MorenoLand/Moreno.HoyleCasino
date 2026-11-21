// FUN_0063a0c0  0063a0c0

undefined4 * __fastcall FUN_0063a0c0(undefined4 *param_1)

{
  FUN_005e9e20();
  *param_1 = Player::vftable;
  param_1[8] = 0;
  memset(param_1 + 10,0,900);
  param_1[3] = 0xffffffff;
  param_1[9] = 0;
  return param_1;
}

