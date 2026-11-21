// FUN_0053eba0  0053eba0

void __fastcall FUN_0053eba0(int param_1)

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
  puStack_c = &LAB_006a4d7d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005d8230(DAT_00781870 ^ (uint)&stack0xfffffffc);
  pvVar1 = operator_new(0x110);
  local_8 = 0;
  if (pvVar1 == (void *)0x0) {
    local_40 = 0;
  }
  else {
    local_40 = FUN_005404f0();
  }
  local_8 = 0xffffffff;
  DAT_007933ec = local_40;
  FUN_00540700();
  pvVar1 = operator_new(0xc);
  local_8 = 1;
  if (pvVar1 == (void *)0x0) {
    local_44 = 0;
  }
  else {
    local_44 = FUN_0053d2e0();
  }
  local_8 = 0xffffffff;
  DAT_007933f0 = local_44;
  pvVar1 = operator_new(0xa0);
  local_8 = 2;
  if (pvVar1 == (void *)0x0) {
    local_48 = 0;
  }
  else {
    local_48 = FUN_0053a770();
  }
  local_8 = 0xffffffff;
  DAT_007933f4 = local_48;
  FUN_0053aa90();
  pvVar1 = operator_new(8);
  local_8 = 3;
  if (pvVar1 == (void *)0x0) {
    local_4c = 0;
  }
  else {
    local_4c = FUN_00539a10();
  }
  local_8 = 0xffffffff;
  DAT_007933f8 = local_4c;
  local_50 = operator_new(0x20);
  local_8 = 4;
  if (local_50 == (undefined4 *)0x0) {
    local_50 = (undefined4 *)0x0;
  }
  else {
    FUN_005fc0d0(0);
    *local_50 = ThreeCardPokerRoomScript::vftable;
  }
  local_8 = 0xffffffff;
  FUN_005f1b70(local_50);
  (**(code **)(**(int **)(param_1 + 4) + 0x10))();
  FUN_005d85e0();
  FUN_0053d320(0);
  ExceptionList = local_10;
  return;
}

