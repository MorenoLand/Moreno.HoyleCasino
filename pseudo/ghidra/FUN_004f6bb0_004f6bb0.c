// FUN_004f6bb0  004f6bb0

undefined4 __thiscall FUN_004f6bb0(int param_1,short param_2)

{
  if (*(char *)(param_1 + 1) == '\0') {
    FUN_005e9f20("bInitialized","..\\Casino\\PokerPot.cpp",0x2ec);
  }
  if (param_2 < 0) {
    FUN_005e9f20("shPlayer >= 0","..\\Casino\\PokerPot.cpp",0x2ed);
  }
  if (*(short *)(param_1 + 6) <= param_2) {
    FUN_005e9f20("shPlayer < shTotalPlayers","..\\Casino\\PokerPot.cpp",0x2ee);
  }
  return CONCAT22(param_2 >> 0xf,*(undefined2 *)(*(int *)(param_1 + 100) + param_2 * 2));
}

