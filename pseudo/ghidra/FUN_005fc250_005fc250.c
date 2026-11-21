// FUN_005fc250  005fc250

void __fastcall FUN_005fc250(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    if (*(int *)(param_1 + 0x18) != 0) {
      iVar1 = FUN_005f3e50();
      if (*(int *)(param_1 + 0x18) <= iVar1) {
        *(undefined4 *)(param_1 + 0x18) = 0;
        FUN_005fc3d0();
      }
    }
  }
  else {
    FUN_005fc250();
  }
  return;
}

