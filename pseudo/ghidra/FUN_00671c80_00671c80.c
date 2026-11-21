// FUN_00671c80  00671c80

undefined4 * __thiscall FUN_00671c80(undefined4 *param_1,undefined1 param_2,undefined4 param_3)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ad208;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_005fc0d0(0);
  local_8 = 0;
  *param_1 = RewardsOpenTagScript::vftable;
  *(undefined1 *)(param_1 + 8) = param_2;
  param_1[9] = param_3;
  (**(code **)(*(int *)param_1[9] + 0x74))(uVar1);
  ExceptionList = local_10;
  return param_1;
}

