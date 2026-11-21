// FUN_00555c10  00555c10

void __fastcall FUN_00555c10(int param_1)

{
  void *pvVar1;
  undefined4 *local_3c;
  undefined4 local_38;
  undefined4 local_34;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a56e4;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005d8230(DAT_00781870 ^ (uint)&stack0xfffffffc);
  pvVar1 = operator_new(0x30);
  local_8 = 0;
  if (pvVar1 == (void *)0x0) {
    local_34 = 0;
  }
  else {
    local_34 = FUN_005570e0();
  }
  local_8 = 0xffffffff;
  DAT_00793420 = local_34;
  FUN_005571c0();
  DAT_00793424 = FUN_00552620();
  FUN_00553010();
  pvVar1 = operator_new(0x1c);
  local_8 = 1;
  if (pvVar1 == (void *)0x0) {
    local_38 = 0;
  }
  else {
    local_38 = FUN_0054c3f0();
  }
  local_8 = 0xffffffff;
  DAT_00793428 = local_38;
  FUN_00558190();
  local_3c = operator_new(0x20);
  local_8 = 2;
  if (local_3c == (undefined4 *)0x0) {
    local_3c = (undefined4 *)0x0;
  }
  else {
    FUN_005fc0d0(0);
    *local_3c = VideoPokerRoomScript::vftable;
  }
  local_8 = 0xffffffff;
  FUN_005f1b70(local_3c);
  if (*(char *)(DAT_0162ee84 + 0x25) == '\0') {
    (**(code **)(**(int **)(param_1 + 4) + 0x10))();
  }
  else {
    (**(code **)(**(int **)(param_1 + 4) + 4))(1);
  }
  ExceptionList = local_10;
  return;
}

