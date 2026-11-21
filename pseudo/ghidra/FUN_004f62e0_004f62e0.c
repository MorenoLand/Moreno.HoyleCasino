// FUN_004f62e0  004f62e0

short __fastcall FUN_004f62e0(char *param_1)

{
  short sVar1;
  short sVar2;
  
  if (param_1[1] == '\0') {
    FUN_005e9f20("bInitialized","..\\Casino\\PokerPot.cpp",0x218);
  }
  if (*param_1 == '\0') {
    FUN_005e9f20("bBettingRoundInProgress","..\\Casino\\PokerPot.cpp",0x219);
  }
  *(undefined1 *)((int)*(short *)(param_1 + 8) + *(int *)(param_1 + 0x30)) = 1;
  sVar1 = FUN_004f8f20();
  if (-1 < sVar1) {
    sVar2 = FUN_004f91a0();
    if (sVar2 == 1) {
      *param_1 = '\0';
      sVar1 = -2;
    }
    else {
      sVar2 = FUN_004f9110();
      if (sVar2 < 2) {
        if ((*(char *)(*(int *)(param_1 + 0x30) + (int)sVar1) != '\0') ||
           (*(int *)(*(int *)(param_1 + 0x68) + sVar1 * 4) == *(int *)(param_1 + 0x14))) {
          *param_1 = '\0';
          FUN_004f9220();
          sVar1 = -3;
        }
      }
      else if ((*(char *)(*(int *)(param_1 + 0x38) + (int)sVar1) != '\0') &&
              (*(int *)(*(int *)(param_1 + 0x68) + sVar1 * 4) == *(int *)(param_1 + 0x14))) {
        *param_1 = '\0';
        sVar1 = -1;
      }
    }
  }
  return sVar1;
}

