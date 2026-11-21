// FUN_004f6a90  004f6a90

undefined4 __thiscall FUN_004f6a90(int param_1,short param_2)

{
  if (*(char *)(param_1 + 1) == '\0') {
    FUN_005e9f20("bInitialized","..\\Casino\\PokerPot.cpp",0x2d6);
  }
  if (param_2 < 0) {
    FUN_005e9f20("shPlayer >= 0","..\\Casino\\PokerPot.cpp",0x2d7);
  }
  if (*(short *)(param_1 + 6) <= param_2) {
    FUN_005e9f20("shPlayer < shTotalPlayers","..\\Casino\\PokerPot.cpp",0x2d8);
  }
  return CONCAT22(param_2 >> 0xf,*(undefined2 *)(*(int *)(param_1 + 0x5c) + param_2 * 2));
}

