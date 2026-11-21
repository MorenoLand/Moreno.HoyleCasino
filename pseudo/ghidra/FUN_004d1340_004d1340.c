// FUN_004d1340  004d1340

void __thiscall FUN_004d1340(int param_1,short param_2,short param_3)

{
  int iVar1;
  
  if (param_2 < 0) {
    FUN_005e9f20("shSeat>=0","..\\Casino\\PokerPlayer.cpp",0xf1f);
  }
  iVar1 = FUN_0047f950();
  if (iVar1 <= param_2) {
    FUN_005e9f20("shSeat<pokerGame->GetNumberOfPlayersAtTable()","..\\Casino\\PokerPlayer.cpp",0xf20
                );
  }
  if (param_3 < 2) {
    FUN_005e9f20("shPlayerCount>=2","..\\Casino\\PokerPlayer.cpp",0xf21);
  }
  iVar1 = FUN_0047f950();
  if (iVar1 < param_3) {
    FUN_005e9f20("shPlayerCount<=pokerGame->GetNumberOfPlayersAtTable()",
                 "..\\Casino\\PokerPlayer.cpp",0xf22);
  }
  *(short *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x2d4 + param_3 * 2) =
       *(short *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x2d4 + param_3 * 2) + 1;
  if (*(short *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x2d4 + param_3 * 2) == 0x3000) {
    *(short *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x2d4 + param_3 * 2) =
         *(short *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x2d4 + param_3 * 2) + -1;
  }
  if ((2 < param_3) &&
     (*(short *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x2d2 + param_3 * 2) =
           *(short *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x2d2 + param_3 * 2) + 1,
     *(short *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x2d2 + param_3 * 2) == 0x3000)) {
    *(short *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x2d2 + param_3 * 2) =
         *(short *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x2d2 + param_3 * 2) + -1;
  }
  iVar1 = FUN_0047f950();
  if ((param_3 < iVar1) &&
     (*(short *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x2d6 + param_3 * 2) =
           *(short *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x2d6 + param_3 * 2) + 1,
     *(short *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x2d6 + param_3 * 2) == 0x3000)) {
    *(short *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x2d6 + param_3 * 2) =
         *(short *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x2d6 + param_3 * 2) + -1;
  }
  return;
}

