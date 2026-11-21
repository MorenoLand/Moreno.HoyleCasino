// FUN_0056a720  0056a720

void __fastcall FUN_0056a720(int param_1)

{
  undefined4 *puVar1;
  int local_8;
  
  for (local_8 = 0; local_8 < 0x31; local_8 = local_8 + 1) {
    if (*(int *)(param_1 + 0x2e8 + local_8 * 4) != 0) {
      puVar1 = *(undefined4 **)(param_1 + 0x2e8 + local_8 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
      }
      *(undefined4 *)(param_1 + 0x2e8 + local_8 * 4) = 0;
    }
  }
  return;
}

