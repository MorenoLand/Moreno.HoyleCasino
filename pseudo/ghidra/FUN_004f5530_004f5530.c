// FUN_004f5530  004f5530

void __thiscall FUN_004f5530(char *param_1,short param_2,undefined2 param_3)

{
  short sVar1;
  short local_8;
  
  if (param_1[1] == '\0') {
    FUN_005e9f20("bInitialized","..\\Casino\\PokerPot.cpp",0x12f);
  }
  sVar1 = FUN_004f9110();
  if (sVar1 < 2) {
    FUN_005e9f20("ActivePlayersLeft() >= 2","..\\Casino\\PokerPot.cpp",0x130);
  }
  if (*param_1 != '\0') {
    FUN_005e9f20("!bBettingRoundInProgress","..\\Casino\\PokerPot.cpp",0x131);
  }
  if (param_1[2] != '\0') {
    FUN_005e9f20("!bAnteRoundInProgress","..\\Casino\\PokerPot.cpp",0x132);
  }
  if (param_1[3] != '\0') {
    FUN_005e9f20("!bShowdownInProgress","..\\Casino\\PokerPot.cpp",0x133);
  }
  if (param_2 < 0) {
    FUN_005e9f20("shInitialPlayer >= 0","..\\Casino\\PokerPot.cpp",0x134);
  }
  if (*(short *)(param_1 + 6) <= param_2) {
    FUN_005e9f20("shInitialPlayer < shTotalPlayers","..\\Casino\\PokerPot.cpp",0x135);
  }
  if ((*(char *)(*(int *)(param_1 + 0x34) + (int)param_2) != '\0') ||
     (*(char *)(*(int *)(param_1 + 0x30) + (int)param_2) != '\0')) {
    FUN_005e9f20("!pbAllIn[shInitialPlayer] && !pbFolded[shInitialPlayer]",
                 "..\\Casino\\PokerPot.cpp",0x136);
  }
  *(undefined2 *)(param_1 + 0x88) = param_3;
  *param_1 = '\x01';
  *(undefined1 *)(DAT_00791364 + 0x409) = 0;
  *(undefined1 *)(DAT_00791364 + 0x40b) = 0;
  *(undefined1 *)(DAT_00791364 + 0x40a) = 0;
  FUN_00479800(0);
  *(short *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(param_1 + 0x68) + *(short *)(param_1 + 8) * 4);
  for (local_8 = 0; local_8 < *(short *)(param_1 + 6); local_8 = local_8 + 1) {
    *(undefined1 *)((int)local_8 + *(int *)(param_1 + 0x38)) = 0;
  }
  for (local_8 = 0; local_8 < *(short *)(param_1 + 6); local_8 = local_8 + 1) {
    *(undefined2 *)(*(int *)(param_1 + 0x50) + local_8 * 2) = 0;
    *(undefined2 *)(*(int *)(param_1 + 0x54) + local_8 * 2) = 0;
    *(undefined2 *)(*(int *)(param_1 + 0x58) + local_8 * 2) = 0;
  }
  return;
}

