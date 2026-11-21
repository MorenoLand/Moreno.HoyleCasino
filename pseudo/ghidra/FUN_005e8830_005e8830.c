// FUN_005e8830  005e8830

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __fastcall FUN_005e8830(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a9a88;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005d7b60(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  *param_1 = SlotsNavigationRoom::vftable;
  _DAT_00795070 = param_1;
  param_1[0x20] = 0xffffffff;
  FUN_005e88e0(0);
  ExceptionList = local_10;
  return param_1;
}

