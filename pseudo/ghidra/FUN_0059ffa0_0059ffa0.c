// FUN_0059ffa0  0059ffa0

undefined4 * __fastcall FUN_0059ffa0(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a7778;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005d7b60(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  *param_1 = BigRaiseRoom::vftable;
  FUN_005f1ad0(65000);
  DAT_007935cc = param_1;
  DAT_007935c0 = 0;
  DAT_007935c4 = 0;
  DAT_007935c8 = 0;
  DAT_007935d0 = 0;
  ExceptionList = local_10;
  return param_1;
}

