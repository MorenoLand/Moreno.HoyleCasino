// FUN_005f5d50  005f5d50

void __thiscall FUN_005f5d50(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  if (*(int *)(param_1 + 0x180) != 0) {
    puVar1 = *(undefined4 **)(param_1 + 0x180);
    *(undefined4 *)(param_1 + 0x180) = 0;
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(1);
    }
  }
  *(undefined4 *)(param_1 + 0x180) = param_2;
  if (*(int *)(param_1 + 0x180) != 0) {
    (**(code **)(**(int **)(param_1 + 0x180) + 4))(param_1,0);
  }
  return;
}

