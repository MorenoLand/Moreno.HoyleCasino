// FUN_004fa1d0  004fa1d0

void __fastcall FUN_004fa1d0(int param_1)

{
  undefined4 *local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a2741;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005d8230(DAT_00781870 ^ (uint)&stack0xfffffffc);
  FUN_005d85e0();
  FUN_0057ae30();
  *(undefined4 *)(param_1 + 0xa4) = 0;
  local_20 = operator_new(0x20);
  local_8 = 0;
  if (local_20 == (undefined4 *)0x0) {
    local_20 = (undefined4 *)0x0;
  }
  else {
    FUN_005fc0d0(0);
    *local_20 = RoomPokerScript::vftable;
  }
  local_8 = 0xffffffff;
  FUN_005f1b70(local_20);
  ExceptionList = local_10;
  return;
}

