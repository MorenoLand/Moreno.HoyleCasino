// FUN_0056ba40  0056ba40

undefined4 * __fastcall FUN_0056ba40(undefined4 *param_1)

{
  short local_8;
  
  FUN_005e9e20();
  *param_1 = RoadKillSlot::vftable;
  for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
    param_1[local_8 + 2] = 0;
  }
  for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
    param_1[local_8 + 0xd] = 0;
    param_1[local_8 + 0x11] = 0;
  }
  for (local_8 = 0; local_8 < 2; local_8 = local_8 + 1) {
    param_1[local_8 + 0x15] = 0;
    param_1[local_8 + 0x17] = 0;
  }
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[7] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  for (local_8 = 0; local_8 < 7; local_8 = local_8 + 1) {
    param_1[local_8 + 0x1f] = 0;
  }
  param_1[1] = 0;
  return param_1;
}

