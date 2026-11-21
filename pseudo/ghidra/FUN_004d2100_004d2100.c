// FUN_004d2100  004d2100

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_004d2100(int param_1,short param_2,short param_3)

{
  ushort uVar1;
  ushort uVar2;
  double dVar3;
  char cVar4;
  int iVar5;
  float10 fVar6;
  
  if (param_2 < 0) {
    FUN_005e9f20("shSeat>=0","..\\Casino\\PokerPlayer.cpp",0xfb0);
  }
  iVar5 = FUN_0047f950();
  if (iVar5 <= param_2) {
    FUN_005e9f20("shSeat<pokerGame->GetNumberOfPlayersAtTable()","..\\Casino\\PokerPlayer.cpp",0xfb1
                );
  }
  if (param_3 < 2) {
    FUN_005e9f20("shPlayerCount>=2","..\\Casino\\PokerPlayer.cpp",0xfb2);
  }
  iVar5 = FUN_0047f950();
  if (iVar5 < param_3) {
    FUN_005e9f20("shPlayerCount<=pokerGame->GetNumberOfPlayersAtTable()",
                 "..\\Casino\\PokerPlayer.cpp",0xfb3);
  }
  dVar3 = ((double)(int)*(short *)(param_1 + 0x144) / _DAT_006b4b00) / (double)(int)param_3;
  if (*(short *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x2d4 + param_3 * 2) == 0) {
    fVar6 = (float10)dVar3;
  }
  else {
    uVar1 = *(ushort *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x2d4 + param_3 * 2);
    uVar2 = *(ushort *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x3b4 + param_3 * 2);
    cVar4 = FUN_005da7b0();
    if (cVar4 == '\0') {
      fVar6 = ((float10)uVar2 / (float10)(int)*(short *)(param_1 + 0x148) + (float10)dVar3) /
              ((float10)1 + (float10)uVar1 / (float10)(int)*(short *)(param_1 + 0x148));
    }
    else {
      fVar6 = ((float10)uVar2 / (float10)((int)*(short *)(param_1 + 0x148) / 2) + (float10)dVar3) /
              ((float10)1 + (float10)uVar1 / (float10)((int)*(short *)(param_1 + 0x148) / 2));
    }
  }
  return fVar6;
}

