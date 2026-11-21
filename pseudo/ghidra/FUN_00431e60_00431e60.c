// FUN_00431e60  00431e60

void __fastcall FUN_00431e60(int param_1)

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
  puStack_c = &LAB_0069e73d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005d8230(DAT_00781870 ^ (uint)&stack0xfffffffc);
  pvVar1 = operator_new(0xaf0);
  local_8 = 0;
  if (pvVar1 == (void *)0x0) {
    local_40 = 0;
  }
  else {
    local_40 = FUN_00434100();
  }
  local_8 = 0xffffffff;
  DAT_007906d4 = local_40;
  FUN_00434460();
  pvVar1 = operator_new(0x18);
  local_8 = 1;
  if (pvVar1 == (void *)0x0) {
    local_44 = 0;
  }
  else {
    local_44 = FUN_0042f090();
  }
  local_8 = 0xffffffff;
  DAT_007906d8 = local_44;
  FUN_0042f120();
  pvVar1 = operator_new(0x16c);
  local_8 = 2;
  if (pvVar1 == (void *)0x0) {
    local_48 = 0;
  }
  else {
    local_48 = FUN_00428c20();
  }
  local_8 = 0xffffffff;
  DAT_007906dc = local_48;
  FUN_00428fe0();
  pvVar1 = operator_new(4);
  local_8 = 3;
  if (pvVar1 == (void *)0x0) {
    local_4c = 0;
  }
  else {
    local_4c = FUN_00427fc0();
  }
  local_8 = 0xffffffff;
  DAT_007906e0 = local_4c;
  local_50 = operator_new(0x20);
  local_8 = 4;
  if (local_50 == (undefined4 *)0x0) {
    local_50 = (undefined4 *)0x0;
  }
  else {
    FUN_005fc0d0(0);
    *local_50 = CrapsRoomScript::vftable;
  }
  local_8 = 0xffffffff;
  FUN_005f1b70(local_50);
  (**(code **)(**(int **)(param_1 + 4) + 0x10))();
  FUN_005d85e0();
  FUN_0042f140(0);
  ExceptionList = local_10;
  return;
}

