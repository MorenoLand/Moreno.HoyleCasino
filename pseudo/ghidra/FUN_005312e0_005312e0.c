// FUN_005312e0  005312e0

void __fastcall FUN_005312e0(undefined4 *param_1)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006a47ac;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = SlotMachineTextScroller::vftable;
  local_8 = 0;
  if (param_1[0x62] != 0) {
    if ((undefined4 *)param_1[0x62] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0x62])(1,uVar1);
    }
    param_1[0x62] = 0;
  }
  local_8 = 0xffffffff;
  FUN_005f5c40();
  ExceptionList = local_10;
  return;
}

