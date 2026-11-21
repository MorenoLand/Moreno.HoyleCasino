// FUN_006145e0  006145e0

undefined4 * __thiscall FUN_006145e0(undefined4 *param_1,undefined4 param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ab128;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0062aea0(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  *param_1 = Random::vftable;
  FUN_00614670(param_2);
  ExceptionList = local_10;
  return param_1;
}

