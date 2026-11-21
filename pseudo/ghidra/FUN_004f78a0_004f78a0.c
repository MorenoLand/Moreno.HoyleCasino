// FUN_004f78a0  004f78a0

undefined4 __thiscall FUN_004f78a0(int param_1,short param_2)

{
  if (*(char *)(param_1 + 1) == '\0') {
    FUN_005e9f20("bInitialized","..\\Casino\\PokerPot.cpp",0x3e9);
  }
  if (*(char *)(param_1 + 3) == '\0') {
    FUN_005e9f20("bShowdownInProgress","..\\Casino\\PokerPot.cpp",0x3ea);
  }
  if (param_2 < 0) {
    FUN_005e9f20("shShowdownPlayer >= 0","..\\Casino\\PokerPot.cpp",0x3eb);
  }
  if (*(short *)(param_1 + 6) <= param_2) {
    FUN_005e9f20("shShowdownPlayer < shTotalPlayers","..\\Casino\\PokerPot.cpp",0x3ec);
  }
  if (*(char *)(param_1 + 5) == '\0') {
    FUN_005e9f20("bHaveShowdownResult","..\\Casino\\PokerPot.cpp",0x3ed);
  }
  if (*(char *)(param_1 + 4) != '\0') {
    FUN_005e9f20("!bHighLowShowdownInProgress","..\\Casino\\PokerPot.cpp",0x3ee);
  }
  if (*(char *)(*(int *)(param_1 + 0x3c) + (int)param_2) == '\0') {
    FUN_005e9f20("pbInShowdownYet[shShowdownPlayer]","..\\Casino\\PokerPot.cpp",0x3ef);
  }
  return *(undefined4 *)(*(int *)(param_1 + 0x70) + param_2 * 4);
}

