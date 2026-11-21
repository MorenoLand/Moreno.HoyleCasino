// FUN_004f4e20  004f4e20

void __thiscall FUN_004f4e20(char *param_1,int param_2)

{
  short sVar1;
  short local_8;
  
  if (param_1[1] == '\0') {
    FUN_005e9f20("bInitialized","..\\Casino\\PokerPot.cpp",0xac);
  }
  if (param_2 < 1) {
    FUN_005e9f20("lBonusChips>0L","..\\Casino\\PokerPot.cpp",0xad);
  }
  if (*param_1 != '\0') {
    FUN_005e9f20("!bBettingRoundInProgress","..\\Casino\\PokerPot.cpp",0xae);
  }
  if (param_1[2] != '\0') {
    FUN_005e9f20("!bAnteRoundInProgress","..\\Casino\\PokerPot.cpp",0xaf);
  }
  if (param_1[3] != '\0') {
    FUN_005e9f20("!bShowdownInProgress","..\\Casino\\PokerPot.cpp",0xb0);
  }
  sVar1 = FUN_004f9110();
  if (sVar1 < 2) {
    FUN_005e9f20("ActivePlayersLeft() >= 2","..\\Casino\\PokerPot.cpp",0xb1);
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + param_2;
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + param_2;
  for (local_8 = 0; local_8 < *(short *)(param_1 + 6); local_8 = local_8 + 1) {
    if ((*(char *)(*(int *)(param_1 + 0x30) + (int)local_8) == '\0') &&
       (*(char *)(*(int *)(param_1 + 0x34) + (int)local_8) == '\0')) {
      *(int *)(*(int *)(param_1 + 0x6c) + local_8 * 4) =
           *(int *)(*(int *)(param_1 + 0x6c) + local_8 * 4) + param_2;
    }
  }
  return;
}

