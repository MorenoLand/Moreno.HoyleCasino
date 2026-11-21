// FUN_00443e80  00443e80

void __fastcall FUN_00443e80(int param_1)

{
  void *pvVar1;
  undefined4 *local_38;
  undefined4 local_34;
  undefined4 local_30;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0069eb47;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005d8230(DAT_00781870 ^ (uint)&stack0xfffffffc);
  pvVar1 = operator_new(0x27c);
  local_8 = 0;
  if (pvVar1 == (void *)0x0) {
    local_30 = 0;
  }
  else {
    local_30 = FUN_00444a50();
  }
  local_8 = 0xffffffff;
  DAT_007906f0 = local_30;
  FUN_00444b10();
  pvVar1 = operator_new(0x11c);
  local_8 = 1;
  if (pvVar1 == (void *)0x0) {
    local_34 = 0;
  }
  else {
    local_34 = FUN_0043f270();
  }
  local_8 = 0xffffffff;
  DAT_007906f4 = local_34;
  FUN_0043fa00();
  local_38 = operator_new(0x20);
  local_8 = 2;
  if (local_38 == (undefined4 *)0x0) {
    local_38 = (undefined4 *)0x0;
  }
  else {
    FUN_005fc0d0(0);
    *local_38 = HorseRacingRoomScript::vftable;
  }
  local_8 = 0xffffffff;
  FUN_005f1b70(local_38);
  (**(code **)(**(int **)(param_1 + 4) + 0x10))();
  ExceptionList = local_10;
  return;
}

