// FUN_00443c50  00443c50

undefined4 * __fastcall FUN_00443c50(undefined4 *param_1)

{
  short local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0069eae8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005d7b60(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  *param_1 = HorseRacingRoom::vftable;
  DAT_007906f0 = 0;
  DAT_007906f4 = 0;
  DAT_007906ec = param_1;
  for (local_14 = 0; local_14 < 3; local_14 = local_14 + 1) {
    FUN_006044b0(0x20584554,local_14 + 0x1d4c4,0);
    FUN_006044b0(0x20584554,local_14 + 0x1d4d0,0);
    FUN_006044b0(0x20584554,local_14 + 0x1d4d9,0);
    FUN_006044b0(0x20584554,local_14 + 0x1d4e1,0);
    FUN_006044b0(0x20584554,local_14 + 0x1d4e5,0);
  }
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  ExceptionList = local_10;
  return param_1;
}

