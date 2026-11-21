// FUN_005703e0  005703e0

void __fastcall FUN_005703e0(undefined4 *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  short local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006a5f80;
  local_10 = ExceptionList;
  uVar2 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = RoadKillSlotCounter::vftable;
  local_8 = 0;
  if (param_1[99] != 0) {
    for (local_14 = 0; local_14 < *(short *)(param_1 + 0x61); local_14 = local_14 + 1) {
      if (*(int *)(param_1[99] + local_14 * 4) != 0) {
        puVar1 = *(undefined4 **)(param_1[99] + local_14 * 4);
        if (puVar1 != (undefined4 *)0x0) {
          (**(code **)*puVar1)(1);
        }
        *(undefined4 *)(param_1[99] + local_14 * 4) = 0;
      }
    }
    operator_delete((void *)param_1[99]);
    param_1[99] = 0;
  }
  if (param_1[100] != 0) {
    if ((undefined4 *)param_1[100] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[100])(1,uVar2);
    }
    param_1[100] = 0;
  }
  local_8 = 0xffffffff;
  FUN_005f5c40();
  ExceptionList = local_10;
  return;
}

