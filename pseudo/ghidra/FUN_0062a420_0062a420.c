// FUN_0062a420  0062a420

void __fastcall FUN_0062a420(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0062a630();
  if (iVar1 != *(int *)(param_1 + 0x60)) {
    (**(code **)(**(int **)(param_1 + 0x4c) + 0xcc))();
  }
  iVar1 = FUN_0062a630();
  if (iVar1 != *(int *)(param_1 + 0x5c)) {
    (**(code **)(**(int **)(param_1 + 0x50) + 0xcc))();
  }
  if (*(int *)(param_1 + 0x54) != 0) {
    FUN_005ecd00(*(undefined4 *)(param_1 + 0x68),0xffffffff,CONCAT12(DAT_0075ee1e,DAT_0075ee1c));
  }
  return;
}

