// FUN_004f64b0  004f64b0

undefined2 __fastcall FUN_004f64b0(int param_1)

{
  short sVar1;
  
  if (*(char *)(param_1 + 1) == '\0') {
    FUN_005e9f20("bInitialized","..\\Casino\\PokerPot.cpp",0x246);
  }
  sVar1 = FUN_004f9110();
  if (1 < sVar1) {
    FUN_005e9f20("ActivePlayersLeft() <= 1","..\\Casino\\PokerPot.cpp",0x247);
  }
  sVar1 = FUN_004f91a0();
  if (sVar1 < 2) {
    FUN_005e9f20("TotalPlayersLeft() > 1","..\\Casino\\PokerPot.cpp",0x248);
  }
  return *(undefined2 *)(param_1 + 0x20);
}

