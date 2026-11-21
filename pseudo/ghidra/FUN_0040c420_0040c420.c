// FUN_0040c420  0040c420

undefined4 * __fastcall FUN_0040c420(undefined4 *param_1)

{
  int local_8;
  
  FUN_005e9e20();
  *param_1 = BlackjackDisplay::vftable;
  for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
    param_1[local_8 + 1] = 0;
  }
  for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
    param_1[local_8 + 6] = 0;
  }
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  return param_1;
}

