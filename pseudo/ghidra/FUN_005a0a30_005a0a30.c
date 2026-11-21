// FUN_005a0a30  005a0a30

void __fastcall FUN_005a0a30(int param_1)

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
  puStack_c = &LAB_006a77ed;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005d8230(DAT_00781870 ^ (uint)&stack0xfffffffc);
  pvVar1 = operator_new(0x124);
  local_8 = 0;
  if (pvVar1 == (void *)0x0) {
    local_40 = 0;
  }
  else {
    local_40 = FUN_005a1cc0();
  }
  local_8 = 0xffffffff;
  DAT_007935d0 = local_40;
  FUN_005a27c0();
  pvVar1 = operator_new(8);
  local_8 = 1;
  if (pvVar1 == (void *)0x0) {
    local_44 = 0;
  }
  else {
    local_44 = FUN_0059a680();
  }
  local_8 = 0xffffffff;
  DAT_007935c0 = local_44;
  pvVar1 = operator_new(0xa8);
  local_8 = 2;
  if (pvVar1 == (void *)0x0) {
    local_48 = 0;
  }
  else {
    local_48 = FUN_0059b4d0();
  }
  local_8 = 0xffffffff;
  DAT_007935c4 = local_48;
  FUN_0059ba30();
  pvVar1 = operator_new(0xc);
  local_8 = 3;
  if (pvVar1 == (void *)0x0) {
    local_4c = 0;
  }
  else {
    local_4c = FUN_0059e8e0();
  }
  local_8 = 0xffffffff;
  DAT_007935c8 = local_4c;
  local_50 = operator_new(0x20);
  local_8 = 4;
  if (local_50 == (undefined4 *)0x0) {
    local_50 = (undefined4 *)0x0;
  }
  else {
    FUN_005fc0d0(0);
    *local_50 = BigRaiseRoomScript::vftable;
  }
  local_8 = 0xffffffff;
  FUN_005f1b70(local_50);
  (**(code **)(**(int **)(param_1 + 4) + 0x10))();
  FUN_005d85e0();
  FUN_0059f960(0);
  ExceptionList = local_10;
  return;
}

