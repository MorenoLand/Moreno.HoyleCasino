// FUN_00566f00  00566f00

void __fastcall FUN_00566f00(int param_1)

{
  void *pvVar1;
  undefined4 *local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a5bdf;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005d8230(DAT_00781870 ^ (uint)&stack0xfffffffc);
  pvVar1 = operator_new(0x40);
  local_8 = 0;
  if (pvVar1 == (void *)0x0) {
    local_3c = 0;
  }
  else {
    local_3c = FUN_00568320();
  }
  local_8 = 0xffffffff;
  DAT_0079343c = local_3c;
  FUN_005685c0();
  pvVar1 = operator_new(0xfc);
  local_8 = 1;
  if (pvVar1 == (void *)0x0) {
    local_40 = 0;
  }
  else {
    local_40 = FUN_0055f930();
  }
  local_8 = 0xffffffff;
  DAT_00793440 = local_40;
  FUN_00560580();
  pvVar1 = operator_new(0x1c);
  local_8 = 2;
  if (pvVar1 == (void *)0x0) {
    local_44 = 0;
  }
  else {
    local_44 = FUN_00559230();
  }
  local_8 = 0xffffffff;
  DAT_00793444 = local_44;
  FUN_00569640();
  local_48 = operator_new(0x20);
  local_8 = 3;
  if (local_48 == (undefined4 *)0x0) {
    local_48 = (undefined4 *)0x0;
  }
  else {
    FUN_005fc0d0(0);
    *local_48 = VPMultiRoomScript::vftable;
  }
  local_8 = 0xffffffff;
  FUN_005f1b70(local_48);
  if (*(char *)(DAT_0162ee84 + 0x25) == '\0') {
    (**(code **)(**(int **)(param_1 + 4) + 0x10))();
  }
  else {
    (**(code **)(**(int **)(param_1 + 4) + 4))(1);
  }
  ExceptionList = local_10;
  return;
}

