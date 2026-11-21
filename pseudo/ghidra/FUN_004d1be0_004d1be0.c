// FUN_004d1be0  004d1be0

void __thiscall FUN_004d1be0(int param_1,short param_2,short param_3)

{
  int iVar1;
  
  if (param_2 < 0) {
    FUN_005e9f20("shSeat>=0","..\\Casino\\PokerPlayer.cpp",0xf7c);
  }
  iVar1 = FUN_0047f950();
  if (iVar1 <= param_2) {
    FUN_005e9f20("shSeat<pokerGame->GetNumberOfPlayersAtTable()","..\\Casino\\PokerPlayer.cpp",0xf7d
                );
  }
  if (param_3 < 2) {
    FUN_005e9f20("shPlayerCount>=2","..\\Casino\\PokerPlayer.cpp",0xf7e);
  }
  iVar1 = FUN_0047f950();
  if (iVar1 < param_3) {
    FUN_005e9f20("shPlayerCount<=pokerGame->GetNumberOfPlayersAtTable()",
                 "..\\Casino\\PokerPlayer.cpp",0xf7f);
  }
  *(char *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0x426 + (int)param_3) =
       *(char *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0x426 + (int)param_3) + '\x01';
  if (*(char *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0x426 + (int)param_3) == 'P') {
    *(ushort *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x2d4 + param_3 * 2) =
         *(ushort *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x2d4 + param_3 * 2) >> 1;
    *(ushort *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x344 + param_3 * 2) =
         *(ushort *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x344 + param_3 * 2) >> 1;
    *(ushort *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x3b4 + param_3 * 2) =
         *(ushort *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x3b4 + param_3 * 2) >> 1;
    *(byte *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0x426 + (int)param_3) =
         *(byte *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0x426 + (int)param_3) >> 1;
  }
  if ((2 < param_3) &&
     (*(char *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0x425 + (int)param_3) =
           *(char *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0x425 + (int)param_3) + '\x01',
     *(char *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0x425 + (int)param_3) == 'P')) {
    *(ushort *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x2d2 + param_3 * 2) =
         *(ushort *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x2d2 + param_3 * 2) >> 1;
    *(ushort *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x342 + param_3 * 2) =
         *(ushort *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x342 + param_3 * 2) >> 1;
    *(ushort *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x3b2 + param_3 * 2) =
         *(ushort *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x3b2 + param_3 * 2) >> 1;
    *(byte *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0x425 + (int)param_3) =
         *(byte *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0x425 + (int)param_3) >> 1;
  }
  iVar1 = FUN_0047f950();
  if ((param_3 < iVar1) &&
     (*(char *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0x427 + (int)param_3) =
           *(char *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0x427 + (int)param_3) + '\x01',
     *(char *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0x427 + (int)param_3) == 'P')) {
    *(ushort *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x2d6 + param_3 * 2) =
         *(ushort *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x2d6 + param_3 * 2) >> 1;
    *(ushort *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x346 + param_3 * 2) =
         *(ushort *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x346 + param_3 * 2) >> 1;
    *(ushort *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x3b6 + param_3 * 2) =
         *(ushort *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x3b6 + param_3 * 2) >> 1;
    *(byte *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0x427 + (int)param_3) =
         *(byte *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0x427 + (int)param_3) >> 1;
  }
  return;
}

