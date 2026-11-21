// FUN_004f6880  004f6880

undefined4 __thiscall FUN_004f6880(char *param_1,short param_2)

{
  if (param_1[1] == '\0') {
    FUN_005e9f20("bInitialized","..\\Casino\\PokerPot.cpp",0x2b2);
  }
  if (*param_1 == '\0') {
    FUN_005e9f20("bBettingRoundInProgress","..\\Casino\\PokerPot.cpp",0x2b3);
  }
  if (param_2 < 0) {
    FUN_005e9f20("shPlayer >= 0","..\\Casino\\PokerPot.cpp",0x2b4);
  }
  if (*(short *)(param_1 + 6) <= param_2) {
    FUN_005e9f20("shPlayer < shTotalPlayers","..\\Casino\\PokerPot.cpp",0x2b5);
  }
  return CONCAT22(param_2 >> 0xf,*(undefined2 *)(*(int *)(param_1 + 0x50) + param_2 * 2));
}

