// FUN_00555b00  00555b00

void __fastcall FUN_00555b00(undefined4 *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006a56a8;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = VideoPokerRoom::vftable;
  local_8 = 0;
  DAT_0079341c = 0;
  if (DAT_00793420 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)*DAT_00793420)(1,uVar1);
  }
  DAT_00793420 = (undefined4 *)0x0;
  if (DAT_00793424 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (**(code **)*DAT_00793424)(1);
  }
  DAT_00793424 = (undefined4 *)0x0;
  if (DAT_00793428 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (**(code **)*DAT_00793428)(1);
  }
  DAT_00793428 = (undefined4 *)0x0;
  local_8 = 0xffffffff;
  FUN_005d7bd0(uVar1,uVar4,uVar3,uVar2);
  ExceptionList = local_10;
  return;
}

