// FUN_005a7080  005a7080

void __fastcall FUN_005a7080(int param_1)

{
  if (*(int *)(param_1 + 0x34) != 0) {
    FUN_005f8990();
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  FUN_005a8730(0);
  if (*(int *)(param_1 + 0x28) != 0) {
    if (*(undefined4 **)(param_1 + 0x28) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x28))(1);
    }
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}

