// FUN_0058f280  0058f280

void __fastcall FUN_0058f280(undefined4 *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006a7014;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = KenoDialogWinGameScroller::vftable;
  local_8 = 0;
  FUN_0058f450(uVar1);
  for (local_14 = 0; local_14 < 0x50; local_14 = local_14 + 1) {
    if ((undefined4 *)param_1[local_14 + 1] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[local_14 + 1])(1);
    }
    param_1[local_14 + 1] = 0;
  }
  (**(code **)(*(int *)param_1[0x51] + 0x70))();
  if ((undefined4 *)param_1[0x51] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x51])(1);
  }
  param_1[0x51] = 0;
  (**(code **)(*(int *)param_1[0x52] + 0x70))();
  if ((undefined4 *)param_1[0x52] == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (*(code *)**(undefined4 **)param_1[0x52])(1);
  }
  param_1[0x52] = 0;
  (**(code **)(*(int *)param_1[0x5e] + 0x70))();
  if ((undefined4 *)param_1[0x5e] == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (*(code *)**(undefined4 **)param_1[0x5e])(1);
  }
  param_1[0x5e] = 0;
  local_8 = 0xffffffff;
  FUN_005e9e40(uVar1,uVar3,uVar2);
  ExceptionList = local_10;
  return;
}

