// FUN_00563d30  00563d30

undefined4 * __fastcall FUN_00563d30(undefined4 *param_1)

{
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a5a97;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005e9e20(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  *param_1 = VPMultiExtraHandsDisplay::vftable;
  for (local_14 = 0; local_14 < 0x31; local_14 = local_14 + 1) {
    param_1[local_14 + 1] = 0;
    for (local_18 = 0; local_18 < 5; local_18 = local_18 + 1) {
      param_1[local_14 * 5 + local_18 + 0x32] = 0;
    }
    param_1[local_14 + 0x127] = 0;
    param_1[local_14 + 0x212] = 0;
  }
  param_1[0x211] = 0xffffffff;
  param_1[0x158] = 0;
  FUN_00563fb0();
  ExceptionList = local_10;
  return param_1;
}

