// FUN_0051f480  0051f480

void __fastcall FUN_0051f480(int *param_1)

{
  int iVar1;
  undefined4 *local_24;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a3e11;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005d8230(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_24 = operator_new(0x20);
  local_8 = 0;
  if (local_24 == (undefined4 *)0x0) {
    local_24 = (undefined4 *)0x0;
  }
  else {
    FUN_005fc0d0(0);
    *local_24 = PokerTournamentRoomScript::vftable;
  }
  local_8 = 0xffffffff;
  FUN_005f1b70(local_24);
  iVar1 = FUN_0051f550(*(undefined4 *)(DAT_007947e0 + 0x4f20));
  if (iVar1 != -1) {
    (**(code **)(*param_1 + 0x14))(iVar1);
  }
  ExceptionList = local_10;
  return;
}

