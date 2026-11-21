// FUN_005af990  005af990

void __fastcall FUN_005af990(undefined4 *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006a7d2b;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = RoyalMatchRoom::vftable;
  local_8 = 0;
  DAT_00793600 = 0;
  if (DAT_00793604 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)*DAT_00793604)(1,uVar1);
  }
  DAT_00793604 = (undefined4 *)0x0;
  if (DAT_007935fc == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (**(code **)*DAT_007935fc)(1);
  }
  DAT_007935fc = (undefined4 *)0x0;
  if (DAT_007935f8 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (**(code **)*DAT_007935f8)(1);
  }
  DAT_007935f8 = (undefined4 *)0x0;
  if (DAT_007935f4 == (undefined4 *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (**(code **)*DAT_007935f4)(1);
  }
  DAT_007935f4 = (undefined4 *)0x0;
  local_8 = 0xffffffff;
  FUN_005d7bd0(uVar1,uVar5,uVar4,uVar3,uVar2);
  ExceptionList = local_10;
  return;
}

