// FUN_00566df0  00566df0

void __fastcall FUN_00566df0(undefined4 *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006a5b98;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = VPMultiRoom::vftable;
  local_8 = 0;
  DAT_00793438 = 0;
  if (DAT_0079343c == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)*DAT_0079343c)(1,uVar1);
  }
  DAT_0079343c = (undefined4 *)0x0;
  if (DAT_00793440 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (**(code **)*DAT_00793440)(1);
  }
  DAT_00793440 = (undefined4 *)0x0;
  if (DAT_00793444 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (**(code **)*DAT_00793444)(1);
  }
  DAT_00793444 = (undefined4 *)0x0;
  local_8 = 0xffffffff;
  FUN_005d7bd0(uVar1,uVar4,uVar3,uVar2);
  ExceptionList = local_10;
  return;
}

