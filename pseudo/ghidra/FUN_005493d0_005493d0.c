// FUN_005493d0  005493d0

void __fastcall FUN_005493d0(int param_1)

{
  char cVar1;
  
  cVar1 = FUN_0054a740(*(undefined4 *)(param_1 + 0x20));
  if (cVar1 == '\0') {
    FUN_005e9f20("Busted(currentHand)","..\\Casino\\videoblackjackstate.cpp",0x1c1);
  }
  if (*(int *)(param_1 + 0x20) == 1) {
    if (*(char *)(param_1 + 0x24) == '\0') {
      FUN_00549d60();
    }
    else {
      FUN_005456a0(1);
      FUN_00548c10();
    }
  }
  else if (*(int *)(param_1 + 0x20) == 2) {
    cVar1 = FUN_0054a740(1);
    if (cVar1 == '\0') {
      FUN_00548c10();
    }
    else {
      FUN_00549d60();
    }
  }
  return;
}

