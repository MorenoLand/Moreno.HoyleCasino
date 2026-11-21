// FUN_004f6930  004f6930

undefined4 __thiscall FUN_004f6930(char *param_1,short param_2)

{
  if (param_1[1] == '\0') {
    FUN_005e9f20("bInitialized","..\\Casino\\PokerPot.cpp",0x2be);
  }
  if (*param_1 == '\0') {
    FUN_005e9f20("bBettingRoundInProgress","..\\Casino\\PokerPot.cpp",0x2bf);
  }
  if (param_2 < 0) {
    FUN_005e9f20("shPlayer >= 0","..\\Casino\\PokerPot.cpp",0x2c0);
  }
  if (*(short *)(param_1 + 6) <= param_2) {
    FUN_005e9f20("shPlayer < shTotalPlayers","..\\Casino\\PokerPot.cpp",0x2c1);
  }
  return CONCAT22(param_2 >> 0xf,*(undefined2 *)(*(int *)(param_1 + 0x54) + param_2 * 2));
}

