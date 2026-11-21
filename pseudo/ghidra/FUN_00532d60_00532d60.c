// FUN_00532d60  00532d60

void __fastcall FUN_00532d60(int param_1)

{
  void *pvVar1;
  undefined4 *local_3c;
  undefined4 local_38;
  undefined4 local_34;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a4897;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005d8230(DAT_00781870 ^ (uint)&stack0xfffffffc);
  FUN_00532ef0();
  pvVar1 = operator_new(0x88);
  local_8 = 0;
  if (pvVar1 == (void *)0x0) {
    local_34 = 0;
  }
  else {
    local_34 = FUN_00535900();
  }
  local_8 = 0xffffffff;
  DAT_0079338c = local_34;
  FUN_00535960();
  pvVar1 = operator_new(0x178);
  local_8 = 1;
  if (pvVar1 == (void *)0x0) {
    local_38 = 0;
  }
  else {
    local_38 = FUN_00529c00();
  }
  local_8 = 0xffffffff;
  DAT_00793390 = local_38;
  FUN_0052afe0();
  local_3c = operator_new(0x20);
  local_8 = 2;
  if (local_3c == (undefined4 *)0x0) {
    local_3c = (undefined4 *)0x0;
  }
  else {
    FUN_005fc0d0(0);
    *local_3c = SlotMachineRoomScript::vftable;
  }
  local_8 = 0xffffffff;
  FUN_005f1b70(local_3c);
  if (*(char *)(DAT_0162ee84 + 0x25) == '\0') {
    (**(code **)(**(int **)(param_1 + 4) + 0x10))();
  }
  else {
    (**(code **)(**(int **)(param_1 + 4) + 4))(1);
  }
  FUN_0052c7e0();
  ExceptionList = local_10;
  return;
}

