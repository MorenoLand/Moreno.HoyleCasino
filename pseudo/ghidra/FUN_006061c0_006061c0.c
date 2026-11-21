// FUN_006061c0  006061c0

undefined4 * __fastcall FUN_006061c0(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006aabb8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005f49d0(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  *param_1 = sciRadioButtonGroup::vftable;
  FUN_0060c5f0();
  ExceptionList = local_10;
  return param_1;
}

