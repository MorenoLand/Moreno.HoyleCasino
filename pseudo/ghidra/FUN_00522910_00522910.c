// FUN_00522910  00522910

void FUN_00522910(void)

{
  undefined4 *local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a3f84;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_20 = operator_new(0x20);
  local_8 = 0;
  if (local_20 == (undefined4 *)0x0) {
    local_20 = (undefined4 *)0x0;
  }
  else {
    FUN_005fc0d0(0);
    *local_20 = SpinRouletteWheelScript::vftable;
  }
  local_8 = 0xffffffff;
  FUN_005fc420(local_20);
  ExceptionList = local_10;
  return;
}

