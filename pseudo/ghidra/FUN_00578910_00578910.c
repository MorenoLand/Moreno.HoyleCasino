// FUN_00578910  00578910

undefined4 * __fastcall FUN_00578910(undefined4 *param_1)

{
  undefined4 uVar1;
  short local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a6558;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005d7b60(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  *param_1 = SultanSlotRoom::vftable;
  uVar1 = FUN_00630f40("SID_VIDEOSLOTS");
  FUN_005f38b0(uVar1);
  DAT_00793458 = param_1;
  FUN_005f1ad0(0);
  FUN_005f1b10(0,0,0);
  for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
    FUN_006044b0(0x20584554,local_14 + 0x1601d,0);
  }
  ExceptionList = local_10;
  return param_1;
}

