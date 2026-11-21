// FUN_0042ca40  0042ca40

void __thiscall FUN_0042ca40(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (*(int *)(param_1 + 0xaec + param_2 * 4) != 0) {
    (**(code **)(**(int **)(param_1 + 0xaec + param_2 * 4) + 0x70))();
  }
  puVar1 = *(undefined4 **)(param_1 + 0xaec + param_2 * 4);
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  *(undefined4 *)(param_1 + 0xaec + param_2 * 4) = 0;
  return;
}

