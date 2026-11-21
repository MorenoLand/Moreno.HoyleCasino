// FUN_00578aa0  00578aa0

void __fastcall FUN_00578aa0(int param_1)

{
  undefined4 uVar1;
  void *pvVar2;
  undefined4 *local_2c;
  int local_28;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a65ac;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005d8230(DAT_00781870 ^ (uint)&stack0xfffffffc);
  uVar1 = FUN_005f3e50();
  *(undefined4 *)(param_1 + 0x80) = uVar1;
  if (DAT_0079345c == 0) {
    pvVar2 = operator_new(0x8c);
    local_8 = 0;
    if (pvVar2 == (void *)0x0) {
      local_28 = 0;
    }
    else {
      local_28 = FUN_00573190();
    }
    local_8 = 0xffffffff;
    DAT_0079345c = local_28;
  }
  local_2c = operator_new(0x20);
  local_8 = 1;
  if (local_2c == (undefined4 *)0x0) {
    local_2c = (undefined4 *)0x0;
  }
  else {
    FUN_005fc0d0(0);
    *local_2c = SultanSlotRoomScript::vftable;
  }
  local_8 = 0xffffffff;
  FUN_005f1b70(local_2c);
  ExceptionList = local_10;
  return;
}

