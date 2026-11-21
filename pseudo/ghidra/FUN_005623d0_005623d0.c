// FUN_005623d0  005623d0

void __fastcall FUN_005623d0(int param_1)

{
  undefined4 local_8;
  
  FUN_005602a0();
  if (*(int *)(DAT_0079343c + 0x14) == 0) {
    FUN_00609870(*(undefined4 *)(param_1 + 0xe0),1);
    FUN_00609870(*(undefined4 *)(param_1 + 0xe4),1);
    for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
      (**(code **)(**(int **)(param_1 + 8 + local_8 * 4) + 0x70))();
    }
  }
  for (local_8 = 0; local_8 < 0xb; local_8 = local_8 + 1) {
    FUN_00562d90();
    FUN_00563080();
  }
  return;
}

