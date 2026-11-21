// FUN_0060c560  0060c560

void __fastcall FUN_0060c560(int param_1)

{
  if (*(int *)(param_1 + 0x1e0) != 0) {
    if (*(undefined4 **)(param_1 + 0x1e0) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x1e0))(1);
    }
    *(undefined4 *)(param_1 + 0x1e0) = 0;
  }
  return;
}

