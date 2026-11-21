// FUN_00571200  00571200

undefined4 * __thiscall FUN_00571200(undefined4 *param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a604e;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_005fc0d0(0);
  local_8 = 0;
  *param_1 = RoadKillSlotTimerScript::vftable;
  iVar2 = FUN_005f3e50(uVar1);
  param_1[9] = iVar2 + 0x1c5c;
  param_1[8] = param_2;
  *(undefined1 *)(param_1[8] + 400) = 0;
  ExceptionList = local_10;
  return param_1;
}

