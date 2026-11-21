// FUN_005720b0  005720b0

void __fastcall FUN_005720b0(undefined4 *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006a60bb;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = RoadKillSlotRoom::vftable;
  local_8 = 0;
  FUN_005de170(uVar1);
  if (DAT_00793450 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)*DAT_00793450)(1);
  }
  DAT_00793450 = (undefined4 *)0x0;
  DAT_0079344c = 0;
  local_8 = 0xffffffff;
  FUN_005d7bd0(uVar1,uVar2);
  ExceptionList = local_10;
  return;
}

