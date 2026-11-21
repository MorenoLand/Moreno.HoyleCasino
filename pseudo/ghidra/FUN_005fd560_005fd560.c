// FUN_005fd560  005fd560

void __fastcall FUN_005fd560(int param_1)

{
  if (*(int *)(param_1 + 0x1f8) != 0) {
    (**(code **)(**(int **)(param_1 + 0x1f8) + 0x70))();
    if (*(undefined4 **)(param_1 + 0x1f8) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x1f8))(1);
    }
    *(undefined4 *)(param_1 + 0x1f8) = 0;
  }
  return;
}

