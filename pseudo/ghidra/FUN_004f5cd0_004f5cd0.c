// FUN_004f5cd0  004f5cd0

short __fastcall FUN_004f5cd0(char *param_1)

{
  char cVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  
  if (param_1[1] == '\0') {
    FUN_005e9f20("bInitialized","..\\Casino\\PokerPot.cpp",0x1a5);
  }
  if (*param_1 == '\0') {
    FUN_005e9f20("bBettingRoundInProgress","..\\Casino\\PokerPot.cpp",0x1a6);
  }
  cVar1 = FUN_004f6690();
  if (cVar1 == '\0') {
    FUN_005e9f20("IsCallPossible()","..\\Casino\\PokerPot.cpp",0x1a7);
  }
  iVar3 = FUN_004f67d0();
  *(int *)(param_1 + 0xc) = iVar3 + *(int *)(param_1 + 0xc);
  sVar2 = *(short *)(param_1 + 8);
  iVar3 = *(int *)(param_1 + 0x68);
  iVar4 = FUN_004f67d0();
  *(int *)(*(int *)(param_1 + 0x68) + *(short *)(param_1 + 8) * 4) =
       iVar4 + *(int *)(iVar3 + sVar2 * 4);
  *(undefined1 *)((int)*(short *)(param_1 + 8) + *(int *)(param_1 + 0x38)) = 1;
  *(short *)(*(int *)(param_1 + 0x60) + *(short *)(param_1 + 8) * 2) =
       *(short *)(*(int *)(param_1 + 0x60) + *(short *)(param_1 + 8) * 2) + 1;
  *(short *)(*(int *)(param_1 + 0x54) + *(short *)(param_1 + 8) * 2) =
       *(short *)(*(int *)(param_1 + 0x54) + *(short *)(param_1 + 8) * 2) + 1;
  sVar2 = FUN_004f8f20();
  if (((-1 < sVar2) && (*(char *)(*(int *)(param_1 + 0x38) + (int)sVar2) != '\0')) &&
     (*(int *)(*(int *)(param_1 + 0x68) + sVar2 * 4) == *(int *)(param_1 + 0x14))) {
    *param_1 = '\0';
    sVar2 = FUN_004f9110();
    if (sVar2 == 1) {
      FUN_004f9220();
      iVar3 = FUN_004f6420();
      if (iVar3 != 0) {
        FUN_005e9f20("GetRefundChips() == 0L","..\\Casino\\PokerPot.cpp",0x1b6);
      }
      sVar2 = -3;
    }
    else {
      sVar2 = -1;
    }
  }
  return sVar2;
}

