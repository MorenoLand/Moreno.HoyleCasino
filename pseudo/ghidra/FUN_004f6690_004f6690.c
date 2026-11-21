// FUN_004f6690  004f6690

undefined4 __fastcall FUN_004f6690(char *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1[1] == '\0') {
    FUN_005e9f20("bInitialized","..\\Casino\\PokerPot.cpp",0x26d);
  }
  if (*param_1 == '\0') {
    uVar1 = 0;
  }
  else {
    iVar2 = FUN_004f67d0();
    if (iVar2 < 1) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}

