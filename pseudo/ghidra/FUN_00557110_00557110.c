// FUN_00557110  00557110

void __fastcall FUN_00557110(undefined4 *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006a5758;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = VideoPokerState::vftable;
  local_8 = 0;
  if ((undefined4 *)param_1[4] == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (*(code *)**(undefined4 **)param_1[4])(1,uVar1);
  }
  local_8 = 0xffffffff;
  FUN_005d0a00(uVar1,uVar2);
  ExceptionList = local_10;
  return;
}

