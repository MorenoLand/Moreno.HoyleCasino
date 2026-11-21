// FUN_005f5df0  005f5df0

void __thiscall FUN_005f5df0(int param_1,undefined4 param_2)

{
  if ((*(int *)(param_1 + 0x17c) != 0) && (*(undefined4 **)(param_1 + 0x17c) != (undefined4 *)0x0))
  {
    (**(code **)**(undefined4 **)(param_1 + 0x17c))(1);
  }
  *(undefined4 *)(param_1 + 0x17c) = param_2;
  if (*(int *)(param_1 + 0x17c) != 0) {
    FUN_005fc220(param_1);
  }
  return;
}

