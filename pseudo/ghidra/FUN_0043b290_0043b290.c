// FUN_0043b290  0043b290

void __fastcall FUN_0043b290(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int local_8;
  
  for (local_8 = 0; local_8 < 0x4c; local_8 = local_8 + 1) {
    if ((*(int *)(*(int *)(param_1 + 4 + local_8 * 4) + 0x110) == 1) ||
       (*(int *)(*(int *)(param_1 + 4 + local_8 * 4) + 0x110) == 3)) {
      uVar2 = FUN_005f5400();
      cVar1 = FUN_00438870(uVar2);
      if (cVar1 == '\0') {
        FUN_005cb9b0();
      }
    }
  }
  return;
}

