// FUN_005ca9f0  005ca9f0

undefined4 * __thiscall FUN_005ca9f0(undefined4 *param_1,undefined8 param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a8a46;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00601a80(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  *param_1 = CasinoChipButton::vftable;
  *(undefined8 *)(param_1 + 0x78) = param_2;
  *(undefined1 *)((int)param_1 + 0x1b5) = 1;
  FUN_005eb700(1);
  FUN_00602ef0(0x3c,6);
  ExceptionList = local_10;
  return param_1;
}

