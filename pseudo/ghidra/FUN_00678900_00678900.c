// FUN_00678900  00678900

undefined4 * __fastcall FUN_00678900(undefined4 *param_1)

{
  int local_8;
  
  FUN_005f5f50();
  *param_1 = WinAnimation::vftable;
  param_1[0x65] = 0;
  *(undefined1 *)(param_1 + 0xab) = 0;
  for (local_8 = 0; local_8 < 0xc; local_8 = local_8 + 1) {
    param_1[local_8 + 0x66] = 0;
    param_1[local_8 + 0x72] = 0;
  }
  for (local_8 = 0; local_8 < 3; local_8 = local_8 + 1) {
    param_1[local_8 + 0x7e] = 0;
  }
  for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
    param_1[local_8 + 0x83] = 0;
    param_1[local_8 + 0x87] = 0;
    param_1[local_8 + 0x97] = 0;
  }
  for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
    param_1[local_8 + 0x92] = 0;
  }
  param_1[0xa6] = 0;
  param_1[100] = 0;
  param_1[0xa9] = 0xffffffff;
  param_1[0x82] = 0;
  param_1[0x81] = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x90] = 0;
  for (local_8 = 0; local_8 < 3; local_8 = local_8 + 1) {
    param_1[local_8 + 0x8d] = 0;
  }
  param_1[0x91] = 0;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  for (local_8 = 0; local_8 < 3; local_8 = local_8 + 1) {
    param_1[local_8 + 0x9d] = 0;
  }
  for (local_8 = 0; local_8 < 2; local_8 = local_8 + 1) {
    param_1[local_8 + 0xa0] = 0;
    param_1[local_8 + 0xa2] = 0;
  }
  param_1[0xa4] = 0;
  param_1[0xa5] = 0;
  return param_1;
}

