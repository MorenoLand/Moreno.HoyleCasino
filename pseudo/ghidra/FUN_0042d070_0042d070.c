// FUN_0042d070  0042d070

void __fastcall FUN_0042d070(int param_1)

{
  if (*(int *)(param_1 + 0xae0) != 0) {
    (**(code **)(**(int **)(param_1 + 0xae0) + 0x70))();
    if (*(undefined4 **)(param_1 + 0xae0) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0xae0))(1);
    }
    *(undefined4 *)(param_1 + 0xae0) = 0;
  }
  return;
}

