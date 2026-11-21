// FUN_004f6640  004f6640

uint __fastcall FUN_004f6640(char *param_1)

{
  uint uVar1;
  
  if (param_1[1] == '\0') {
    FUN_005e9f20("bInitialized","..\\Casino\\PokerPot.cpp",0x260);
  }
  if (*param_1 == '\0') {
    uVar1 = (uint)param_1 & 0xffffff00;
  }
  else {
    uVar1 = FUN_004f67d0();
    if (uVar1 == 0) {
      uVar1 = 1;
    }
    else {
      uVar1 = uVar1 & 0xffffff00;
    }
  }
  return uVar1;
}

