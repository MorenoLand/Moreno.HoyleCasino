// FUN_005bc7f0  005bc7f0

undefined4 * __fastcall FUN_005bc7f0(undefined4 *param_1)

{
  undefined1 local_19;
  undefined1 *local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a812e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005c0a00(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  *param_1 = MLVSlotDisplay_Blossom::vftable;
  local_18 = &local_19;
  FUN_005bef20(0);
  param_1[0x14] = &DAT_00758d20;
  param_1[0x15] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  ExceptionList = local_10;
  return param_1;
}

