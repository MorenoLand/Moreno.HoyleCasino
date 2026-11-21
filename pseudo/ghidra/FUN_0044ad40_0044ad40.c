// FUN_0044ad40  0044ad40

void __fastcall FUN_0044ad40(int param_1)

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
  puStack_c = &LAB_0069ee6d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005d8230(DAT_00781870 ^ (uint)&stack0xfffffffc);
  pvVar1 = operator_new(0xfc);
  local_8 = 0;
  if (pvVar1 == (void *)0x0) {
    local_40 = 0;
  }
  else {
    local_40 = FUN_0044c670();
  }
  local_8 = 0xffffffff;
  DAT_00790710 = local_40;
  FUN_0044c870();
  pvVar1 = operator_new(0xc);
  local_8 = 1;
  if (pvVar1 == (void *)0x0) {
    local_44 = 0;
  }
  else {
    local_44 = FUN_004496d0();
  }
  local_8 = 0xffffffff;
  DAT_00790714 = local_44;
  pvVar1 = operator_new(0x70);
  local_8 = 2;
  if (pvVar1 == (void *)0x0) {
    local_48 = 0;
  }
  else {
    local_48 = FUN_00446af0();
  }
  local_8 = 0xffffffff;
  DAT_00790718 = local_48;
  FUN_00446e30();
  pvVar1 = operator_new(4);
  local_8 = 3;
  if (pvVar1 == (void *)0x0) {
    local_4c = 0;
  }
  else {
    local_4c = FUN_004460e0();
  }
  local_8 = 0xffffffff;
  DAT_0079071c = local_4c;
  local_50 = operator_new(0x20);
  local_8 = 4;
  if (local_50 == (undefined4 *)0x0) {
    local_50 = (undefined4 *)0x0;
  }
  else {
    FUN_005fc0d0(0);
    *local_50 = LetItRideRoomScript::vftable;
  }
  local_8 = 0xffffffff;
  FUN_005f1b70(local_50);
  (**(code **)(**(int **)(param_1 + 4) + 0x10))();
  FUN_005d85e0();
  FUN_00449710(0);
  ExceptionList = local_10;
  return;
}

