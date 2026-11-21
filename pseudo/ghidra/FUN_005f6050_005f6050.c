// FUN_005f6050  005f6050

void __thiscall FUN_005f6050(int param_1,undefined4 param_2)

{
  if ((*(int *)(param_1 + 0x18c) != 0) && (*(undefined4 **)(param_1 + 0x18c) != (undefined4 *)0x0))
  {
    (**(code **)**(undefined4 **)(param_1 + 0x18c))(1);
  }
  *(undefined4 *)(param_1 + 0x18c) = param_2;
  if (*(int *)(param_1 + 0x18c) != 0) {
    (**(code **)(**(int **)(param_1 + 0x18c) + 4))(param_1);
  }
  return;
}

