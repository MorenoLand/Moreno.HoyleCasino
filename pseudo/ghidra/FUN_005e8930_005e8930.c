// FUN_005e8930  005e8930

void __fastcall FUN_005e8930(int *param_1)

{
  char cVar1;
  undefined4 *local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a9aae;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005d8230(DAT_00781870 ^ (uint)&stack0xfffffffc);
  cVar1 = FUN_00636760();
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x16c))(1,0,0xffffffff,0xffffffff,0);
  }
  local_20 = operator_new(0x20);
  local_8 = 0;
  if (local_20 == (undefined4 *)0x0) {
    local_20 = (undefined4 *)0x0;
  }
  else {
    FUN_005fc0d0(0);
    *local_20 = SlotsNavigationRoomScript::vftable;
  }
  local_8 = 0xffffffff;
  FUN_005f1b70(local_20);
  ExceptionList = local_10;
  return;
}

