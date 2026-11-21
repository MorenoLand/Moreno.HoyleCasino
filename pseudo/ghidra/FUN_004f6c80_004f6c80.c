// FUN_004f6c80  004f6c80

undefined4 __fastcall FUN_004f6c80(char *param_1)

{
  undefined4 uVar1;
  short local_8;
  
  if (param_1[1] == '\0') {
    FUN_005e9f20("bInitialized","..\\Casino\\PokerPot.cpp",0x2fd);
  }
  if (param_1[2] != '\0') {
    FUN_005e9f20("!bAnteRoundInProgress","..\\Casino\\PokerPot.cpp",0x2fe);
  }
  if (*param_1 != '\0') {
    FUN_005e9f20("!bBettingRoundInProgress","..\\Casino\\PokerPot.cpp",0x2ff);
  }
  param_1[0x24] = '\0';
  param_1[0x25] = '\0';
  param_1[0x26] = '\0';
  param_1[0x27] = '\0';
  param_1[0x28] = '\0';
  param_1[0x29] = '\0';
  param_1[0x2a] = '\0';
  param_1[0x2b] = '\0';
  for (local_8 = 0; local_8 < *(short *)(param_1 + 6); local_8 = local_8 + 1) {
    if ((*(char *)(*(int *)(param_1 + 0x30) + (int)local_8) == '\0') &&
       (*(int *)(param_1 + 0x24) < *(int *)(*(int *)(param_1 + 0x68) + local_8 * 4))) {
      *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(*(int *)(param_1 + 0x68) + local_8 * 4);
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(*(int *)(param_1 + 0x6c) + local_8 * 4);
    }
    else if ((*(char *)(*(int *)(param_1 + 0x30) + (int)local_8) == '\0') &&
            ((*(int *)(*(int *)(param_1 + 0x68) + local_8 * 4) == *(int *)(param_1 + 0x24) &&
             (*(int *)(param_1 + 0x28) < *(int *)(*(int *)(param_1 + 0x6c) + local_8 * 4))))) {
      *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(*(int *)(param_1 + 0x68) + local_8 * 4);
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(*(int *)(param_1 + 0x6c) + local_8 * 4);
    }
  }
  if ((*(int *)(param_1 + 0x24) < 1) && (*(int *)(param_1 + 0x28) < 1)) {
    param_1[1] = '\0';
    param_1[3] = '\0';
    param_1[5] = '\0';
    if (*(int *)(param_1 + 0xc) != 0) {
      FUN_005e9f20("lTotalPot == 0L","..\\Casino\\PokerPot.cpp",0x329);
    }
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_005e9f20("lTotalBonusChips == 0L","..\\Casino\\PokerPot.cpp",0x32a);
    }
    uVar1 = 0;
  }
  else {
    param_1[3] = '\x01';
    param_1[5] = '\0';
    param_1[0x2e] = -1;
    param_1[0x2f] = -1;
    uVar1 = 1;
  }
  return uVar1;
}

