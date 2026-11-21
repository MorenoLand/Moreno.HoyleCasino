// FUN_004cfb30  004cfb30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_004cfb30(int param_1,short param_2,short param_3,short param_4)

{
  short sVar1;
  double dVar2;
  int iVar3;
  float10 fVar4;
  short local_28;
  double local_24;
  double local_1c;
  
  if (param_2 < 0) {
    FUN_005e9f20("shSeat>=0","..\\Casino\\PokerPlayer.cpp",0xd35);
  }
  iVar3 = FUN_0047f950();
  if (iVar3 <= param_2) {
    FUN_005e9f20("shSeat<pokerGame->GetNumberOfPlayersAtTable()","..\\Casino\\PokerPlayer.cpp",0xd36
                );
  }
  if (param_3 < 1) {
    FUN_005e9f20("shHandStrength>0","..\\Casino\\PokerPlayer.cpp",0xd37);
  }
  if (6 < param_3) {
    FUN_005e9f20("shHandStrength<=PokerHand::MAXTEXASHOLDEMHANDSTRENGTH",
                 "..\\Casino\\PokerPlayer.cpp",0xd38);
  }
  if (param_4 < 2) {
    FUN_005e9f20("shPlayerCount>=2","..\\Casino\\PokerPlayer.cpp",0xd39);
  }
  iVar3 = FUN_0047f950();
  if (iVar3 < param_4) {
    FUN_005e9f20("shPlayerCount<=pokerGame->GetNumberOfPlayersAtTable()",
                 "..\\Casino\\PokerPlayer.cpp",0xd3a);
  }
  local_24 = 0.0;
  for (local_28 = 0; local_28 < 6; local_28 = local_28 + 1) {
    dVar2 = ((double)(int)*(short *)(param_1 + 0x10c) +
            (double)(int)*(short *)(param_1 + local_28 * 0xe + 0xb4 + param_4 * 2)) / _DAT_006b4b00;
    fVar4 = (float10)FUN_0048e500(local_28 + 1);
    local_24 = (double)(fVar4 * (float10)dVar2 + (float10)local_24);
  }
  if (local_24 <= 0.0) {
    FUN_005e9f20("dblAllHandsExpectedUse>0.0","..\\Casino\\PokerPlayer.cpp",0xd41);
  }
  sVar1 = *(short *)(param_1 + (param_3 + -1) * 0xe + 0xb4 + param_4 * 2);
  dVar2 = ((double)(int)*(short *)(param_1 + 0x10c) + (double)(int)sVar1) / _DAT_006b4b00;
  fVar4 = (float10)FUN_0048e500(CONCAT22(sVar1 >> 0xf,param_3));
  if (*(char *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0x14e + (int)param_4) == '\0') {
    local_1c = 0.0;
  }
  else {
    local_1c = (double)*(byte *)(*(int *)(param_1 + 0x428) + param_2 * 0x2a + (param_3 + -1) * 7 +
                                 0x186 + (int)param_4) /
               (double)*(byte *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0x14e + (int)param_4);
  }
  dVar2 = (((double)*(byte *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0x14e + (int)param_4) /
           (double)(int)*(short *)(param_1 + 0x114)) * local_1c +
          (double)((fVar4 * (float10)dVar2) / (float10)local_24)) /
          ((double)*(byte *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0x14e + (int)param_4) /
           (double)(int)*(short *)(param_1 + 0x114) + _DAT_006b2c48);
  if (dVar2 <= 1.0) {
    fVar4 = (float10)dVar2;
  }
  else {
    fVar4 = (float10)1;
  }
  return fVar4;
}

