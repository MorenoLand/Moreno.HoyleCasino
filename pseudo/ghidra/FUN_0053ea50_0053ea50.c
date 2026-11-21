// FUN_0053ea50  0053ea50

void __fastcall FUN_0053ea50(undefined4 *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006a4d2b;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = ThreeCardPokerRoom::vftable;
  local_8 = 0;
  DAT_007933e8 = 0;
  if (DAT_007933ec == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)*DAT_007933ec)(1,uVar1);
  }
  DAT_007933ec = (undefined4 *)0x0;
  if (DAT_007933f0 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (**(code **)*DAT_007933f0)(1);
  }
  DAT_007933f0 = (undefined4 *)0x0;
  if (DAT_007933f4 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (**(code **)*DAT_007933f4)(1);
  }
  DAT_007933f4 = (undefined4 *)0x0;
  if (DAT_007933f8 == (undefined4 *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (**(code **)*DAT_007933f8)(1);
  }
  DAT_007933f8 = (undefined4 *)0x0;
  local_8 = 0xffffffff;
  FUN_005d7bd0(uVar1,uVar5,uVar4,uVar3,uVar2);
  ExceptionList = local_10;
  return;
}

