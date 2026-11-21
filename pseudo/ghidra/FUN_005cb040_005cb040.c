// FUN_005cb040  005cb040

undefined4 * __fastcall FUN_005cb040(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a8a69;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00601a80(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  *param_1 = ClearCurrentBetButton::vftable;
  param_1[0x77] = 0;
  FUN_005eb700(1);
  ExceptionList = local_10;
  return param_1;
}

