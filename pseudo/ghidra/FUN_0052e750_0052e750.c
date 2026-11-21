// FUN_0052e750  0052e750

undefined4 * __fastcall FUN_0052e750(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a4573;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005f5bf0(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  *param_1 = SlotMachineArm::vftable;
  FUN_005eb700(1);
  ExceptionList = local_10;
  return param_1;
}

