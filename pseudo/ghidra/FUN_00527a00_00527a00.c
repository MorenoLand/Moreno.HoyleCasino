// FUN_00527a00  00527a00

undefined4 * __fastcall FUN_00527a00(undefined4 *param_1)

{
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a41e8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005e9e20(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  *param_1 = RouletteState::vftable;
  param_1[0x34f] = 0xffffffff;
  FUN_00528030(0xffffffff,0);
  param_1[0x36e] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x36f) = 0;
  for (local_14 = 0; local_14 < 0x1a; local_14 = local_14 + 1) {
    param_1[local_14 + 0x351] = 0xffffffff;
  }
  for (local_14 = 0; local_14 < 0xa1; local_14 = local_14 + 1) {
    param_1[local_14 + 1] = 0;
  }
  for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
    for (local_18 = 0; local_18 < 0xa1; local_18 = local_18 + 1) {
      param_1[local_14 * 0xa1 + local_18 + 0xa2] = 0;
    }
  }
  for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
    param_1[local_14 * 10 + 0x327] = 0x824;
    param_1[local_14 * 10 + 0x329] = 0x821;
    param_1[local_14 * 10 + 0x32b] = 0x822;
    param_1[local_14 * 10 + 0x32d] = 0x823;
    param_1[local_14 * 10 + 0x32f] = 0x825;
  }
  FUN_0057ab80(7,&DAT_007228e0);
  ExceptionList = local_10;
  return param_1;
}

