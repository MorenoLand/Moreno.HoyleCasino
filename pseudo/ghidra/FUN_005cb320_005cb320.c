// FUN_005cb320  005cb320

undefined4 * __thiscall FUN_005cb320(undefined4 *param_1,undefined4 param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a8ad5;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00601a80(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  *param_1 = ChipButtonCycleButton::vftable;
  param_1[0x77] = param_2;
  FUN_00602ef0(0x3c,6);
  ExceptionList = local_10;
  return param_1;
}

