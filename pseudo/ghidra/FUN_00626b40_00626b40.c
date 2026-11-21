// FUN_00626b40  00626b40

void __thiscall FUN_00626b40(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 100) = param_2;
  if (*(int *)(param_1 + 0x5c) != 0) {
    FUN_005ecd00(*(undefined4 *)(param_1 + 100),0xffffffff,CONCAT12(DAT_0075ee1e,DAT_0075ee1c));
  }
  return;
}

