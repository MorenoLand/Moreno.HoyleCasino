// FUN_005475f0  005475f0

void __fastcall FUN_005475f0(int param_1)

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
  puStack_c = &LAB_006a521a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005d8230(DAT_00781870 ^ (uint)&stack0xfffffffc);
  pvVar1 = operator_new(0x5c);
  local_8 = 0;
  if (pvVar1 == (void *)0x0) {
    local_40 = 0;
  }
  else {
    local_40 = FUN_00548880();
  }
  local_8 = 0xffffffff;
  DAT_00793404 = local_40;
  pvVar1 = operator_new(0xd0);
  local_8 = 1;
  if (pvVar1 == (void *)0x0) {
    local_44 = 0;
  }
  else {
    local_44 = FUN_00542d90();
  }
  local_8 = 0xffffffff;
  DAT_00793408 = local_44;
  FUN_005489a0();
  FUN_00543500();
  pvVar1 = operator_new(4);
  local_8 = 2;
  if (pvVar1 == (void *)0x0) {
    local_48 = 0;
  }
  else {
    local_48 = FUN_00547390();
  }
  local_8 = 0xffffffff;
  DAT_00793410 = local_48;
  pvVar1 = operator_new(4);
  local_8 = 3;
  if (pvVar1 == (void *)0x0) {
    local_4c = 0;
  }
  else {
    local_4c = FUN_00542960();
  }
  local_8 = 0xffffffff;
  DAT_0079340c = local_4c;
  FUN_005490e0();
  local_50 = operator_new(0x20);
  local_8 = 4;
  if (local_50 == (undefined4 *)0x0) {
    local_50 = (undefined4 *)0x0;
  }
  else {
    FUN_005fc0d0(0);
    *local_50 = VideoBlackjackRoomScript::vftable;
  }
  local_8 = 0xffffffff;
  FUN_005f1b70(local_50);
  (**(code **)(**(int **)(param_1 + 4) + 0x10))();
  FUN_005473d0(0);
  ExceptionList = local_10;
  return;
}

