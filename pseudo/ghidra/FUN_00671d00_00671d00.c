// FUN_00671d00  00671d00

void __fastcall FUN_00671d00(undefined4 *param_1)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006ad22b;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = RewardsOpenTagScript::vftable;
  local_8 = 0;
  *(undefined1 *)(param_1[9] + 0x184) = 0;
  (**(code **)(*(int *)param_1[9] + 0x74))(uVar1);
  local_8 = 0xffffffff;
  FUN_005fc150();
  ExceptionList = local_10;
  return;
}

