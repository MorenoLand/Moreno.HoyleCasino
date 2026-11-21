// FUN_004ceb90  004ceb90

void __thiscall FUN_004ceb90(int param_1,short param_2,short param_3)

{
  int iVar1;
  
  if (param_2 < 0) {
    FUN_005e9f20("shSeat>=0","..\\Casino\\PokerPlayer.cpp",0xc92);
  }
  iVar1 = FUN_0047f950();
  if (iVar1 <= param_2) {
    FUN_005e9f20("shSeat<pokerGame->GetNumberOfPlayersAtTable()","..\\Casino\\PokerPlayer.cpp",0xc93
                );
  }
  if (param_3 < 2) {
    FUN_005e9f20("shPlayerCount>=2","..\\Casino\\PokerPlayer.cpp",0xc94);
  }
  iVar1 = FUN_0047f950();
  if (iVar1 < param_3) {
    FUN_005e9f20("shPlayerCount<=pokerGame->GetNumberOfPlayersAtTable()",
                 "..\\Casino\\PokerPlayer.cpp",0xc95);
  }
  *(short *)(param_2 * 0xe + *(int *)(param_1 + 0x428) + -4 + param_3 * 2) =
       *(short *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + -4 + param_3 * 2) + 1;
  if (*(short *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + -4 + param_3 * 2) == 0x3000) {
    *(short *)(param_2 * 0xe + *(int *)(param_1 + 0x428) + -4 + param_3 * 2) =
         *(short *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + -4 + param_3 * 2) + -1;
  }
  if ((2 < param_3) &&
     (*(short *)(param_2 * 0xe + *(int *)(param_1 + 0x428) + -6 + param_3 * 2) =
           *(short *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + -6 + param_3 * 2) + 1,
     *(short *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + -6 + param_3 * 2) == 0x3000)) {
    *(short *)(param_2 * 0xe + *(int *)(param_1 + 0x428) + -6 + param_3 * 2) =
         *(short *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + -6 + param_3 * 2) + -1;
  }
  iVar1 = FUN_0047f950();
  if ((param_3 < iVar1) &&
     (*(short *)(param_2 * 0xe + *(int *)(param_1 + 0x428) + -2 + param_3 * 2) =
           *(short *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + -2 + param_3 * 2) + 1,
     *(short *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + -2 + param_3 * 2) == 0x3000)) {
    *(short *)(param_2 * 0xe + *(int *)(param_1 + 0x428) + -2 + param_3 * 2) =
         *(short *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + -2 + param_3 * 2) + -1;
  }
  return;
}

