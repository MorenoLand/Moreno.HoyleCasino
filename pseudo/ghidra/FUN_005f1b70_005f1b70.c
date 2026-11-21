// FUN_005f1b70  005f1b70

void __thiscall FUN_005f1b70(int param_1,undefined4 param_2)

{
  if ((*(int *)(param_1 + 4) != 0) && (*(undefined4 **)(param_1 + 4) != (undefined4 *)0x0)) {
    (**(code **)**(undefined4 **)(param_1 + 4))(1);
  }
  *(undefined4 *)(param_1 + 4) = param_2;
  if (*(int *)(param_1 + 4) != 0) {
    FUN_005fc220(param_1);
  }
  return;
}

