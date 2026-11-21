// FUN_005af880  005af880

undefined4 * __fastcall FUN_005af880(undefined4 *param_1)

{
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a7d08;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005d7b60(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  *param_1 = RoyalMatchRoom::vftable;
  FUN_005f1ad0(0xfdec);
  for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
    FUN_006044b0(0x20584554,local_14 + 0x1389,0);
  }
  for (local_18 = 0; local_18 < 0xd; local_18 = local_18 + 1) {
    FUN_006044b0(0x20584554,local_18 + 0x13a2,0);
  }
  DAT_00793600 = param_1;
  DAT_00793604 = 0;
  DAT_007935fc = 0;
  DAT_007935f8 = 0;
  DAT_007935f4 = 0;
  ExceptionList = local_10;
  return param_1;
}

