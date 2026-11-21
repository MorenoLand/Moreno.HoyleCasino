// FUN_00544490  00544490

void __fastcall FUN_00544490(int param_1)

{
  uint uVar1;
  undefined4 *local_28;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a4fa8;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  for (local_14 = 0; local_14 < 9; local_14 = local_14 + 1) {
    local_28 = operator_new(0x1dc);
    local_8 = 0;
    if (local_28 == (undefined4 *)0x0) {
      local_28 = (undefined4 *)0x0;
    }
    else {
      FUN_00601a80(uVar1);
      *local_28 = VideoBlackjackTouchButton::vftable;
    }
    local_8 = 0xffffffff;
    *(undefined4 **)(param_1 + 0x8c + local_14 * 4) = local_28;
    FUN_005eae80(*(undefined4 *)(&DAT_0073b360 + local_14 * 0xc),
                 *(undefined4 *)(&DAT_0073b364 + local_14 * 0xc),
                 *(undefined4 *)(&DAT_0073b368 + local_14 * 0xc),1,0xffffffff);
    FUN_006023d0(0,1,2,3);
    FUN_005f53e0(local_14);
    *(undefined1 *)(*(int *)(param_1 + 0x8c + local_14 * 4) + 0x1b5) = 1;
    (**(code **)(**(int **)(param_1 + 0x8c + local_14 * 4) + 0xd0))();
    (**(code **)(**(int **)(param_1 + 0x8c + local_14 * 4) + 0x74))();
    FUN_005448f0(local_14);
  }
  ExceptionList = local_10;
  return;
}

