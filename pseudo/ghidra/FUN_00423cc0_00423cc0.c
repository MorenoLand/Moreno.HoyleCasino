// FUN_00423cc0  00423cc0

undefined4 * __fastcall FUN_00423cc0(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0069e298;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005d7b60(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  *param_1 = CaribbeanStudRoom::vftable;
  FUN_005f1ad0(0x3106c8);
  DAT_00790354 = param_1;
  DAT_00790358 = 0;
  DAT_0079035c = 0;
  DAT_00790360 = 0;
  DAT_00790364 = 0;
  ExceptionList = local_10;
  return param_1;
}

