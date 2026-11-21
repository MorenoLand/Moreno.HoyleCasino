// FUN_004f79b0  004f79b0

undefined4 __thiscall FUN_004f79b0(int param_1,short param_2,char param_3)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 1) == '\0') {
    FUN_005e9f20("bInitialized","..\\Casino\\PokerPot.cpp",0x3f9);
  }
  if (*(char *)(param_1 + 3) == '\0') {
    FUN_005e9f20("bShowdownInProgress","..\\Casino\\PokerPot.cpp",0x3fa);
  }
  if (param_2 < 0) {
    FUN_005e9f20("shShowdownPlayer >= 0","..\\Casino\\PokerPot.cpp",0x3fb);
  }
  if (*(short *)(param_1 + 6) <= param_2) {
    FUN_005e9f20("shShowdownPlayer < shTotalPlayers","..\\Casino\\PokerPot.cpp",0x3fc);
  }
  if (*(char *)(param_1 + 5) == '\0') {
    FUN_005e9f20("bHaveShowdownResult","..\\Casino\\PokerPot.cpp",0x3fd);
  }
  if (*(char *)(param_1 + 4) == '\0') {
    FUN_005e9f20("bHighLowShowdownInProgress","..\\Casino\\PokerPot.cpp",0x3fe);
  }
  if (*(char *)(*(int *)(param_1 + 0x3c) + (int)param_2) == '\0') {
    FUN_005e9f20("pbInShowdownYet[shShowdownPlayer]","..\\Casino\\PokerPot.cpp",0x3ff);
  }
  if (param_3 == '\0') {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x78) + param_2 * 4);
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x74) + param_2 * 4);
  }
  return uVar1;
}

