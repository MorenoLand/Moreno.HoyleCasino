// FUN_0063b2d0  0063b2d0

void __fastcall FUN_0063b2d0(int param_1)

{
  if (*(int *)(param_1 + 0x20) != 0) {
    FUN_00646c20(1);
  }
  if (*(undefined4 **)(param_1 + 0x20) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x20))(1);
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}

