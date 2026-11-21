// FUN_0058d620  0058d620

void __fastcall FUN_0058d620(int param_1)

{
  FUN_006001b0();
  if (*(int *)(param_1 + 0x208) != 0) {
    (**(code **)(**(int **)(param_1 + 0x208) + 0x70))();
    if (*(undefined4 **)(param_1 + 0x208) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x208))(1);
    }
    *(undefined4 *)(param_1 + 0x208) = 0;
  }
  return;
}

