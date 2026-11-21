// FUN_00671810  00671810

undefined4 * __thiscall FUN_00671810(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ad176;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00601a80(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  *param_1 = RewardsOpenButton::vftable;
  param_1[0x77] = param_2;
  param_1[0x78] = 0;
  iVar1 = FUN_0062fbf0(10);
  param_1[0x79] = iVar1 * 0x3c + 300;
  ExceptionList = local_10;
  return param_1;
}

