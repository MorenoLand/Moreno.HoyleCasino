// FUN_005d4200  005d4200

void __fastcall FUN_005d4200(int param_1)

{
  if (*(int *)(param_1 + 0x88) != 0) {
    (**(code **)(**(int **)(param_1 + 0x88) + 0x70))();
    if (*(undefined4 **)(param_1 + 0x88) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x88))(1);
    }
    *(undefined4 *)(param_1 + 0x88) = 0;
  }
  return;
}

