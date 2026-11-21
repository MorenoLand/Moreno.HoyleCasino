// FUN_005a9420  005a9420

void __thiscall FUN_005a9420(int param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  int local_8;
  
  for (local_8 = 0; local_8 < 0x1e; local_8 = local_8 + 1) {
    if (*(int *)(param_1 + 0xae0 + param_3 * 0x78 + local_8 * 4) != 0) {
      (**(code **)(**(int **)(param_1 + 0xae0 + param_3 * 0x78 + local_8 * 4) + 0x70))();
      puVar1 = *(undefined4 **)(param_1 + 0xae0 + param_3 * 0x78 + local_8 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
      }
      *(undefined4 *)(param_1 + 0xae0 + param_3 * 0x78 + local_8 * 4) = 0;
    }
  }
  FUN_005ccc70(param_2,param_3);
  return;
}

