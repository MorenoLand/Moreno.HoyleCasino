// FUN_005f3de0  005f3de0

void __thiscall FUN_005f3de0(int param_1,undefined4 param_2)

{
  if ((*(int *)(param_1 + 0x28) != 0) && (*(undefined4 **)(param_1 + 0x28) != (undefined4 *)0x0)) {
    (**(code **)**(undefined4 **)(param_1 + 0x28))(1);
  }
  *(undefined4 *)(param_1 + 0x28) = param_2;
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_005fc220(param_1);
  }
  return;
}

