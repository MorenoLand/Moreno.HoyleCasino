// FUN_0045d1f0  0045d1f0

undefined4 * __fastcall FUN_0045d1f0(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0069f248;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005d7b60(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  *param_1 = PaiGowRoom::vftable;
  FUN_005f1ad0(0x7d1);
  DAT_00790734 = param_1;
  DAT_00790738 = 0;
  DAT_0079073c = 0;
  DAT_00790740 = 0;
  DAT_00790744 = 0;
  ExceptionList = local_10;
  return param_1;
}

