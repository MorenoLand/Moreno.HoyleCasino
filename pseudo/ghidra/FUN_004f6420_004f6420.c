// FUN_004f6420  004f6420

undefined4 __fastcall FUN_004f6420(int param_1)

{
  short sVar1;
  
  if (*(char *)(param_1 + 1) == '\0') {
    FUN_005e9f20("bInitialized","..\\Casino\\PokerPot.cpp",0x23d);
  }
  sVar1 = FUN_004f9110();
  if (1 < sVar1) {
    FUN_005e9f20("ActivePlayersLeft() <= 1","..\\Casino\\PokerPot.cpp",0x23e);
  }
  sVar1 = FUN_004f91a0();
  if (sVar1 < 2) {
    FUN_005e9f20("TotalPlayersLeft() > 1","..\\Casino\\PokerPot.cpp",0x23f);
  }
  return *(undefined4 *)(param_1 + 0x1c);
}

