// FUN_0058d040  0058d040

void __fastcall FUN_0058d040(int param_1)

{
  undefined4 *puVar1;
  int local_8;
  
  (**(code **)(**(int **)(param_1 + 0x178) + 0x70))();
  (**(code **)(**(int **)(param_1 + 0x224) + 0x70))();
  for (local_8 = 0; local_8 < 0x15; local_8 = local_8 + 1) {
    if (*(int *)(param_1 + 0x17c + local_8 * 4) != 0) {
      puVar1 = *(undefined4 **)(param_1 + 0x17c + local_8 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
      }
      *(undefined4 *)(param_1 + 0x17c + local_8 * 4) = 0;
    }
    if (*(int *)(param_1 + 0x1d0 + local_8 * 4) != 0) {
      puVar1 = *(undefined4 **)(param_1 + 0x1d0 + local_8 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
      }
      *(undefined4 *)(param_1 + 0x1d0 + local_8 * 4) = 0;
    }
  }
  FUN_005eb5a0();
  return;
}

