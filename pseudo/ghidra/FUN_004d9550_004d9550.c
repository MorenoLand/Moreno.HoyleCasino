// FUN_004d9550  004d9550

void __thiscall FUN_004d9550(int param_1,short param_2,short param_3)

{
  int iVar1;
  
  if (param_2 < 0) {
    FUN_005e9f20("shSeat>=0","..\\Casino\\PokerPlayer.cpp",0x1891);
  }
  iVar1 = FUN_0047f950();
  if (iVar1 <= param_2) {
    FUN_005e9f20("shSeat<pokerGame->GetNumberOfPlayersAtTable()","..\\Casino\\PokerPlayer.cpp",
                 0x1892);
  }
  if (param_3 < 2) {
    FUN_005e9f20("shPlayerCount>=2","..\\Casino\\PokerPlayer.cpp",0x1893);
  }
  iVar1 = FUN_0047f950();
  if (iVar1 < param_3) {
    FUN_005e9f20("shPlayerCount<=pokerGame->GetNumberOfPlayersAtTable()",
                 "..\\Casino\\PokerPlayer.cpp",0x1894);
  }
  *(short *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x884 + param_3 * 2) =
       *(short *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x884 + param_3 * 2) + 1;
  if (*(short *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x884 + param_3 * 2) == 0x3000) {
    *(short *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x884 + param_3 * 2) =
         *(short *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x884 + param_3 * 2) + -1;
  }
  if ((2 < param_3) &&
     (*(short *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x882 + param_3 * 2) =
           *(short *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x882 + param_3 * 2) + 1,
     *(short *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x882 + param_3 * 2) == 0x3000)) {
    *(short *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x882 + param_3 * 2) =
         *(short *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x882 + param_3 * 2) + -1;
  }
  iVar1 = FUN_0047f950();
  if ((param_3 < iVar1) &&
     (*(short *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x886 + param_3 * 2) =
           *(short *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x886 + param_3 * 2) + 1,
     *(short *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x886 + param_3 * 2) == 0x3000)) {
    *(short *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x886 + param_3 * 2) =
         *(short *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x886 + param_3 * 2) + -1;
  }
  return;
}

