// FUN_00579b40  00579b40

void FUN_00579b40(void)

{
  undefined4 *local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a667b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  (**(code **)(*DAT_0162ee84 + 900))(DAT_00781870 ^ (uint)&stack0xfffffffc);
  FUN_00579bf0();
  local_20 = operator_new(0x20);
  local_8 = 0;
  if (local_20 == (undefined4 *)0x0) {
    local_20 = (undefined4 *)0x0;
  }
  else {
    FUN_005fc0d0(0);
    *local_20 = DemoRoomScript::vftable;
  }
  local_8 = 0xffffffff;
  FUN_005f1b70(local_20);
  ExceptionList = local_10;
  return;
}

