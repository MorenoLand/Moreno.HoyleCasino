// FUN_00676340  00676340

undefined4 * __thiscall FUN_00676340(undefined4 *param_1,undefined4 param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ad561;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005e9e20(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  *param_1 = ResNumber::vftable;
  FUN_00676410();
  param_1[1] = param_2;
  ExceptionList = local_10;
  return param_1;
}

