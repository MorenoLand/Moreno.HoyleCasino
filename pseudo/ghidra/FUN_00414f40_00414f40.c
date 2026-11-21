// FUN_00414f40  00414f40

void __fastcall FUN_00414f40(int param_1)

{
  void *pvVar1;
  undefined4 *local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0069dded;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005d8230(DAT_00781870 ^ (uint)&stack0xfffffffc);
  pvVar1 = operator_new(0x504);
  local_8 = 0;
  if (pvVar1 == (void *)0x0) {
    local_40 = 0;
  }
  else {
    local_40 = FUN_004182a0();
  }
  local_8 = 0xffffffff;
  DAT_00790324 = local_40;
  FUN_00418750();
  pvVar1 = operator_new(0x1c);
  local_8 = 1;
  if (pvVar1 == (void *)0x0) {
    local_44 = 0;
  }
  else {
    local_44 = FUN_00412260();
  }
  local_8 = 0xffffffff;
  DAT_00790328 = local_44;
  FUN_004122a0();
  pvVar1 = operator_new(0x48);
  local_8 = 2;
  if (pvVar1 == (void *)0x0) {
    local_48 = 0;
  }
  else {
    local_48 = FUN_0040c420();
  }
  local_8 = 0xffffffff;
  DAT_0079032c = local_48;
  FUN_0040c770();
  pvVar1 = operator_new(4);
  local_8 = 3;
  if (pvVar1 == (void *)0x0) {
    local_4c = 0;
  }
  else {
    local_4c = FUN_0040a070();
  }
  local_8 = 0xffffffff;
  DAT_00790330 = local_4c;
  local_50 = operator_new(0x20);
  local_8 = 4;
  if (local_50 == (undefined4 *)0x0) {
    local_50 = (undefined4 *)0x0;
  }
  else {
    FUN_005fc0d0(0);
    *local_50 = BlackjackRoomScript::vftable;
  }
  local_8 = 0xffffffff;
  FUN_005f1b70(local_50);
  (**(code **)(**(int **)(param_1 + 4) + 0x10))();
  FUN_005d85e0();
  FUN_004122e0(0);
  ExceptionList = local_10;
  return;
}

