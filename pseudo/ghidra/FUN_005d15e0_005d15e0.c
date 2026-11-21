// FUN_005d15e0  005d15e0

void __fastcall FUN_005d15e0(undefined4 *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006a8e0b;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = CasinoNavigationRoom::vftable;
  local_8 = 0;
  DAT_007947dc = 0;
  if ((undefined4 *)param_1[0x22] == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (*(code *)**(undefined4 **)param_1[0x22])(1,uVar1);
  }
  if ((undefined4 *)param_1[0x23] == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (*(code *)**(undefined4 **)param_1[0x23])(1);
  }
  local_8 = 0xffffffff;
  FUN_005d7bd0(uVar1,uVar3,uVar2);
  ExceptionList = local_10;
  return;
}

