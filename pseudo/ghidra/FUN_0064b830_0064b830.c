// FUN_0064b830  0064b830

void __fastcall FUN_0064b830(int param_1)

{
  undefined4 *puVar1;
  int local_8;
  
  for (local_8 = 0; local_8 < 3; local_8 = local_8 + 1) {
    if (*(int *)(param_1 + 0x198 + local_8 * 4) != 0) {
      puVar1 = *(undefined4 **)(param_1 + 0x198 + local_8 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
      }
      *(undefined4 *)(param_1 + 0x198 + local_8 * 4) = 0;
    }
  }
  return;
}

