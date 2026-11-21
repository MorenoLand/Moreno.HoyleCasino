// FUN_0040da70  0040da70

void __fastcall FUN_0040da70(int param_1)

{
  if (*(int *)(param_1 + 0x34) != 0) {
    FUN_005f8990();
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  FUN_0040d6b0(0);
  if (*(int *)(param_1 + 0x28) != 0) {
    if (*(undefined4 **)(param_1 + 0x28) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x28))(1);
    }
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}

