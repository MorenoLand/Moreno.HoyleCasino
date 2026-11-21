// FUN_0044ab50  0044ab50

undefined4 * __fastcall FUN_0044ab50(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0069edf8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005d7b60(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  *param_1 = LetItRideRoom::vftable;
  FUN_005f1ad0(0x310ab0);
  DAT_0079070c = param_1;
  DAT_00790710 = 0;
  DAT_00790714 = 0;
  DAT_00790718 = 0;
  DAT_0079071c = 0;
  ExceptionList = local_10;
  return param_1;
}

