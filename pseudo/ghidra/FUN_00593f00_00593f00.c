// FUN_00593f00  00593f00

void __fastcall FUN_00593f00(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int local_8;
  
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  for (local_8 = 0; local_8 < *(int *)(param_1 + 500); local_8 = local_8 + 1) {
    (**(code **)(*(int *)(*(int *)(param_1 + 0x1e0) + local_8 * 0x1e8) + 200))(0x186a1);
    iVar1 = FUN_00597d30();
    uVar2 = FUN_00593850(*(undefined2 *)(DAT_007935a8 + 200 + iVar1 * 0xc + local_8 * 2));
    (**(code **)(*(int *)(*(int *)(param_1 + 0x1e0) + local_8 * 0x1e8) + 0xb0))(uVar2);
    FUN_006023d0(uVar2,uVar2,uVar2,uVar2);
    *(undefined1 *)(*(int *)(param_1 + 0x1e0) + 0x1dc + local_8 * 0x1e8) = 0;
    uVar2 = FUN_00630f40("SID_POKER_HOLD");
    (**(code **)(*(int *)(*(int *)(param_1 + 0x1e4) + local_8 * 0x1d0) + 0xb4))(uVar2);
    (**(code **)(*(int *)(*(int *)(param_1 + 0x1e8) + local_8 * 0x178) + 0x70))();
  }
  FUN_005f85d0();
  return;
}

