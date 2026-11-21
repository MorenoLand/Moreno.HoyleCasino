// FUN_005d4f50  005d4f50

void __fastcall FUN_005d4f50(undefined4 *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006a900b;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = CasinoPlayer::vftable;
  local_8 = 0;
  if ((undefined4 *)param_1[0x127] == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (*(code *)**(undefined4 **)param_1[0x127])(1,uVar1);
  }
  FUN_005d6550(uVar1,uVar2);
  FUN_005d6600();
  local_8 = 0xffffffff;
  FUN_0063a120();
  ExceptionList = local_10;
  return;
}

