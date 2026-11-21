// FUN_004d4810  004d4810

void __thiscall FUN_004d4810(int param_1,short param_2,short param_3)

{
  int iVar1;
  
  if (param_2 < 0) {
    FUN_005e9f20("shSeat>=0","..\\Casino\\PokerPlayer.cpp",0x12b0);
  }
  iVar1 = FUN_0047f950();
  if (iVar1 <= param_2) {
    FUN_005e9f20("shSeat<pokerGame->GetNumberOfPlayersAtTable()","..\\Casino\\PokerPlayer.cpp",
                 0x12b1);
  }
  if (param_3 < 2) {
    FUN_005e9f20("shPlayerCount>=2","..\\Casino\\PokerPlayer.cpp",0x12b2);
  }
  iVar1 = FUN_0047f950();
  if (iVar1 < param_3) {
    FUN_005e9f20("shPlayerCount<=pokerGame->GetNumberOfPlayersAtTable()",
                 "..\\Casino\\PokerPlayer.cpp",0x12b3);
  }
  *(char *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0x5ae + (int)param_3) =
       *(char *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0x5ae + (int)param_3) + '\x01';
  if (*(char *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0x5ae + (int)param_3) == 'P') {
    *(ushort *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x45c + param_3 * 2) =
         *(ushort *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x45c + param_3 * 2) >> 1;
    *(ushort *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x4cc + param_3 * 2) =
         *(ushort *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x4cc + param_3 * 2) >> 1;
    *(ushort *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x53c + param_3 * 2) =
         *(ushort *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x53c + param_3 * 2) >> 1;
    *(byte *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0x5ae + (int)param_3) =
         *(byte *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0x5ae + (int)param_3) >> 1;
  }
  if ((2 < param_3) &&
     (*(char *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0x5ad + (int)param_3) =
           *(char *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0x5ad + (int)param_3) + '\x01',
     *(char *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0x5ad + (int)param_3) == 'P')) {
    *(ushort *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x45a + param_3 * 2) =
         *(ushort *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x45a + param_3 * 2) >> 1;
    *(ushort *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x4ca + param_3 * 2) =
         *(ushort *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x4ca + param_3 * 2) >> 1;
    *(ushort *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x53a + param_3 * 2) =
         *(ushort *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x53a + param_3 * 2) >> 1;
    *(byte *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0x5ad + (int)param_3) =
         *(byte *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0x5ad + (int)param_3) >> 1;
  }
  iVar1 = FUN_0047f950();
  if ((param_3 < iVar1) &&
     (*(char *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0x5af + (int)param_3) =
           *(char *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0x5af + (int)param_3) + '\x01',
     *(char *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0x5af + (int)param_3) == 'P')) {
    *(ushort *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x45e + param_3 * 2) =
         *(ushort *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x45e + param_3 * 2) >> 1;
    *(ushort *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x4ce + param_3 * 2) =
         *(ushort *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x4ce + param_3 * 2) >> 1;
    *(ushort *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x53e + param_3 * 2) =
         *(ushort *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x53e + param_3 * 2) >> 1;
    *(byte *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0x5af + (int)param_3) =
         *(byte *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0x5af + (int)param_3) >> 1;
  }
  return;
}

