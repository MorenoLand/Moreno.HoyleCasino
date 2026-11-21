// FUN_0040f390  0040f390

void __fastcall FUN_0040f390(int param_1)

{
  undefined4 *puVar1;
  int local_c;
  int local_8;
  
  FUN_005ccd90();
  for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
    for (local_c = 0; local_c < 0x1e; local_c = local_c + 1) {
      if (*(int *)(param_1 + 0xae0 + local_8 * 0x78 + local_c * 4) != 0) {
        (**(code **)(**(int **)(param_1 + 0xae0 + local_8 * 0x78 + local_c * 4) + 0x70))();
        puVar1 = *(undefined4 **)(param_1 + 0xae0 + local_8 * 0x78 + local_c * 4);
        if (puVar1 != (undefined4 *)0x0) {
          (**(code **)*puVar1)(1);
        }
        *(undefined4 *)(param_1 + 0xae0 + local_8 * 0x78 + local_c * 4) = 0;
      }
    }
  }
  return;
}

