// FUN_0042c8a0  0042c8a0

void __thiscall FUN_0042c8a0(int param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  FUN_0042ca40(param_2,param_3);
  if (*(int *)(param_1 + 0xafc + param_2 * 4) != 0) {
    (**(code **)(**(int **)(param_1 + 0xafc + param_2 * 4) + 0x70))();
  }
  puVar1 = *(undefined4 **)(param_1 + 0xafc + param_2 * 4);
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  *(undefined4 *)(param_1 + 0xafc + param_2 * 4) = 0;
  return;
}

