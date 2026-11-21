// FUN_00523e40  00523e40

void __fastcall FUN_00523e40(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0xae0) + 0x70))();
  if (*(undefined4 **)(param_1 + 0xae0) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0xae0))(1);
  }
  *(undefined4 *)(param_1 + 0xae0) = 0;
  return;
}

