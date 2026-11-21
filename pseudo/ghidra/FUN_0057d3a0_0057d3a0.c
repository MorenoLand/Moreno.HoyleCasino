// FUN_0057d3a0  0057d3a0

void __fastcall FUN_0057d3a0(int param_1)

{
  undefined4 local_8;
  
  FUN_005f87d0();
  for (local_8 = 0; local_8 < *(int *)(DAT_00793578 + 0x19d4); local_8 = local_8 + 1) {
    FUN_0057c410(0);
  }
  *(undefined4 *)(param_1 + 0x1b4) = 0xffffffff;
  for (local_8 = 0; local_8 < 6; local_8 = local_8 + 1) {
    (**(code **)(**(int **)(param_1 + 0x1b8 + local_8 * 4) + 0x70))();
  }
  (**(code **)(**(int **)(param_1 + 0x1d0) + 0x70))();
  (**(code **)(**(int **)(param_1 + 0x1d4) + 0x70))();
  (**(code **)(**(int **)(param_1 + 0x1d8) + 0x70))();
  if (*(int *)(param_1 + 0x1dc) != 0) {
    FUN_005f85d0();
    *(undefined4 *)(param_1 + 0x1dc) = 0;
  }
  return;
}

