// FUN_004f5e80  004f5e80

short __thiscall FUN_004f5e80(char *param_1,int param_2)

{
  char cVar1;
  short sVar2;
  short sVar3;
  
  if (param_1[1] == '\0') {
    FUN_005e9f20("bInitialized","..\\Casino\\PokerPot.cpp",0x1c3);
  }
  if (*param_1 == '\0') {
    FUN_005e9f20("bBettingRoundInProgress","..\\Casino\\PokerPot.cpp",0x1c4);
  }
  cVar1 = FUN_004f6690();
  if (cVar1 == '\0') {
    FUN_005e9f20("IsCallPossible()","..\\Casino\\PokerPot.cpp",0x1c5);
  }
  if (param_2 == 0) {
    param_2 = FUN_004f67d0();
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + param_2;
  *(int *)(*(int *)(param_1 + 0x68) + *(short *)(param_1 + 8) * 4) =
       *(int *)(*(int *)(param_1 + 0x68) + *(short *)(param_1 + 8) * 4) + param_2;
  *(undefined1 *)((int)*(short *)(param_1 + 8) + *(int *)(param_1 + 0x34)) = 1;
  *(short *)(*(int *)(param_1 + 0x60) + *(short *)(param_1 + 8) * 2) =
       *(short *)(*(int *)(param_1 + 0x60) + *(short *)(param_1 + 8) * 2) + 1;
  *(short *)(*(int *)(param_1 + 0x54) + *(short *)(param_1 + 8) * 2) =
       *(short *)(*(int *)(param_1 + 0x54) + *(short *)(param_1 + 8) * 2) + 1;
  sVar2 = FUN_004f8f20();
  if ((-1 < sVar2) && (*(int *)(*(int *)(param_1 + 0x68) + sVar2 * 4) == *(int *)(param_1 + 0x14)))
  {
    sVar3 = FUN_004f9110();
    if (sVar3 < 2) {
      *param_1 = '\0';
      FUN_004f9220();
      sVar2 = -3;
    }
    else if (*(char *)(*(int *)(param_1 + 0x38) + (int)sVar2) != '\0') {
      *param_1 = '\0';
      sVar2 = -1;
    }
  }
  return sVar2;
}

