// FUN_004cc570  004cc570

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_004cc570(int param_1,short param_2,short param_3)

{
  double dVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  
  if (param_2 < 1) {
    FUN_005e9f20("shHandStrength>0","..\\Casino\\PokerPlayer.cpp",0x9e6);
  }
  if (6 < param_2) {
    FUN_005e9f20("shHandStrength<=PokerHand::MAXTEXASHOLDEMHANDSTRENGTH",
                 "..\\Casino\\PokerPlayer.cpp",0x9e7);
  }
  if (param_3 < 2) {
    FUN_005e9f20("shPlayerCount>=2","..\\Casino\\PokerPlayer.cpp",0x9e8);
  }
  iVar2 = FUN_0047f950();
  if (iVar2 < param_3) {
    FUN_005e9f20("shPlayerCount<=pokerGame->GetNumberOfPlayersAtTable()",
                 "..\\Casino\\PokerPlayer.cpp",0x9e9);
  }
  if (*(short *)(param_1 + 100) == 0) {
    fVar4 = (float10)(int)*(short *)(param_1 + (param_2 + -1) * 0xe + 0xb4 + param_3 * 2) /
            (float10)_DAT_006b4b00;
  }
  else if (*(short *)(param_1 + 100) == 1) {
    iVar2 = FUN_0062fbf0(0x1e);
    iVar3 = FUN_0062fbf0(0x1e);
    dVar1 = (double)((-iVar3 - iVar2) +
                    (int)*(short *)(param_1 + (param_2 + -1) * 0xe + 0xb4 + param_3 * 2)) /
            _DAT_006b4b00;
    if (0.0 <= dVar1) {
      fVar4 = (float10)dVar1;
    }
    else {
      fVar4 = (float10)0;
    }
  }
  else if (*(short *)(param_1 + 100) == 2) {
    iVar2 = FUN_0062fbf0(0x1e);
    iVar3 = FUN_0062fbf0(0x1e);
    dVar1 = (double)(iVar2 + iVar3 +
                    (int)*(short *)(param_1 + (param_2 + -1) * 0xe + 0xb4 + param_3 * 2)) /
            _DAT_006b4b00;
    if (dVar1 <= 1.0) {
      fVar4 = (float10)dVar1;
    }
    else {
      fVar4 = (float10)1;
    }
  }
  else if (*(short *)(param_1 + 100) == 3) {
    iVar2 = FUN_0062fbf0(0x3c);
    iVar3 = FUN_0062fbf0(0x3c);
    dVar1 = (double)(iVar2 + iVar3 +
                    (int)*(short *)(param_1 + (param_2 + -1) * 0xe + 0xb4 + param_3 * 2)) /
            _DAT_006b4b00;
    if (dVar1 <= 1.0) {
      fVar4 = (float10)dVar1;
    }
    else {
      fVar4 = (float10)1;
    }
  }
  else {
    FUN_005e9f20(&DAT_006b2b64,"..\\Casino\\PokerPlayer.cpp",0xa06);
    fVar4 = (float10)0;
  }
  return fVar4;
}

