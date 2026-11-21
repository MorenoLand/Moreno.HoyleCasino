// FUN_004182a0  004182a0

undefined4 * __fastcall FUN_004182a0(undefined4 *param_1)

{
  int local_8;
  
  FUN_005e9e20();
  *param_1 = BlackjackState::vftable;
  param_1[0x119] = 0;
  for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
    param_1[local_8 + 0x11a] = 0;
  }
  param_1[0x13b] = 0xffffffff;
  param_1[0x13c] = 0xffffffff;
  return param_1;
}

