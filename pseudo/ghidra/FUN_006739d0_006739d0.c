// FUN_006739d0  006739d0

void __fastcall FUN_006739d0(int param_1)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0x1c4) == '\0') {
    FUN_00667e60();
  }
  else {
    FUN_005fb810(0);
    FUN_0060c3d0();
    FUN_005fb810(0);
    FUN_00674270();
    cVar1 = FUN_00667d10();
    if (cVar1 == '\0') {
      return;
    }
  }
  FUN_0064f030();
  return;
}

