// FUN_00571660  00571660

undefined4 * __fastcall FUN_00571660(undefined4 *param_1)

{
  short local_8;
  
  FUN_005e9e20();
  *param_1 = RoadKillSlotDebug::vftable;
  for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
    param_1[local_8 + 2] = 0;
  }
  for (local_8 = 0; local_8 < 7; local_8 = local_8 + 1) {
    param_1[local_8 + 6] = 0xffffffff;
  }
  for (local_8 = 0; local_8 < 9; local_8 = local_8 + 1) {
    param_1[local_8 + 0x10] = 0;
  }
  for (local_8 = 0; local_8 < 8; local_8 = local_8 + 1) {
    param_1[local_8 + 0x19] = 0;
  }
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  return param_1;
}

