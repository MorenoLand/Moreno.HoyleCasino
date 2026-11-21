// FUN_005d44f0  005d44f0

void __fastcall FUN_005d44f0(int param_1)

{
  if (*(int *)(param_1 + 0x8c) != 0) {
    (**(code **)(**(int **)(param_1 + 0x8c) + 0x70))();
    if (*(undefined4 **)(param_1 + 0x8c) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x8c))(1);
    }
    *(undefined4 *)(param_1 + 0x8c) = 0;
  }
  return;
}

