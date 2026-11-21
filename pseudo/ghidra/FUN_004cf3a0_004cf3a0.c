// FUN_004cf3a0  004cf3a0

void __thiscall FUN_004cf3a0(int param_1,short param_2,short param_3,short param_4)

{
  int iVar1;
  short local_10;
  short local_c;
  short local_8;
  
  if (param_2 < 0) {
    FUN_005e9f20("shSeat>=0","..\\Casino\\PokerPlayer.cpp",0xcef);
  }
  iVar1 = FUN_0047f950();
  if (iVar1 <= param_2) {
    FUN_005e9f20("shSeat<pokerGame->GetNumberOfPlayersAtTable()","..\\Casino\\PokerPlayer.cpp",0xcf0
                );
  }
  if (param_3 < 1) {
    FUN_005e9f20("shHandStrength>0","..\\Casino\\PokerPlayer.cpp",0xcf1);
  }
  if (6 < param_3) {
    FUN_005e9f20("shHandStrength<=PokerHand::MAXTEXASHOLDEMHANDSTRENGTH",
                 "..\\Casino\\PokerPlayer.cpp",0xcf2);
  }
  if (param_4 < 2) {
    FUN_005e9f20("shPlayerCount>=2","..\\Casino\\PokerPlayer.cpp",0xcf3);
  }
  iVar1 = FUN_0047f950();
  if (iVar1 < param_4) {
    FUN_005e9f20("shPlayerCount<=pokerGame->GetNumberOfPlayersAtTable()",
                 "..\\Casino\\PokerPlayer.cpp",0xcf4);
  }
  *(char *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0x14e + (int)param_4) =
       *(char *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0x14e + (int)param_4) + '\x01';
  *(char *)(*(int *)(param_1 + 0x428) + param_2 * 0x2a + (param_3 + -1) * 7 + 0x186 + (int)param_4)
       = *(char *)(*(int *)(param_1 + 0x428) + param_2 * 0x2a + (param_3 + -1) * 7 + 0x186 +
                  (int)param_4) + '\x01';
  if (*(char *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0x14e + (int)param_4) == 'P') {
    *(ushort *)(param_2 * 0xe + *(int *)(param_1 + 0x428) + -4 + param_4 * 2) =
         *(ushort *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + -4 + param_4 * 2) >> 1;
    *(ushort *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x6c + param_4 * 2) =
         *(ushort *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x6c + param_4 * 2) >> 1;
    *(ushort *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0xdc + param_4 * 2) =
         *(ushort *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0xdc + param_4 * 2) >> 1;
    *(byte *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0x14e + (int)param_4) =
         *(byte *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0x14e + (int)param_4) >> 1;
    for (local_8 = 0; local_8 < 6; local_8 = local_8 + 1) {
      *(byte *)(*(int *)(param_1 + 0x428) + param_2 * 0x2a + local_8 * 7 + 0x186 + (int)param_4) =
           *(byte *)(*(int *)(param_1 + 0x428) + param_2 * 0x2a + local_8 * 7 + 0x186 + (int)param_4
                    ) >> 1;
    }
  }
  if (2 < param_4) {
    *(char *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0x14d + (int)param_4) =
         *(char *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0x14d + (int)param_4) + '\x01';
    *(char *)(*(int *)(param_1 + 0x428) + param_2 * 0x2a + (param_3 + -1) * 7 + 0x185 + (int)param_4
             ) = *(char *)(*(int *)(param_1 + 0x428) + param_2 * 0x2a + (param_3 + -1) * 7 + 0x185 +
                          (int)param_4) + '\x01';
    if (*(char *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0x14d + (int)param_4) == 'P') {
      *(ushort *)(param_2 * 0xe + *(int *)(param_1 + 0x428) + -6 + param_4 * 2) =
           *(ushort *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + -6 + param_4 * 2) >> 1;
      *(ushort *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x6a + param_4 * 2) =
           *(ushort *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x6a + param_4 * 2) >> 1;
      *(ushort *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0xda + param_4 * 2) =
           *(ushort *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0xda + param_4 * 2) >> 1;
      *(byte *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0x14d + (int)param_4) =
           *(byte *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0x14d + (int)param_4) >> 1;
      for (local_c = 0; local_c < 6; local_c = local_c + 1) {
        *(byte *)(*(int *)(param_1 + 0x428) + param_2 * 0x2a + local_c * 7 + 0x185 + (int)param_4) =
             *(byte *)(*(int *)(param_1 + 0x428) + param_2 * 0x2a + local_c * 7 + 0x185 +
                      (int)param_4) >> 1;
      }
    }
  }
  iVar1 = FUN_0047f950();
  if (param_4 < iVar1) {
    *(char *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0x14f + (int)param_4) =
         *(char *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0x14f + (int)param_4) + '\x01';
    *(char *)(*(int *)(param_1 + 0x428) + param_2 * 0x2a + (param_3 + -1) * 7 + 0x187 + (int)param_4
             ) = *(char *)(*(int *)(param_1 + 0x428) + param_2 * 0x2a + (param_3 + -1) * 7 + 0x187 +
                          (int)param_4) + '\x01';
    if (*(char *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0x14f + (int)param_4) == 'P') {
      *(ushort *)(param_2 * 0xe + *(int *)(param_1 + 0x428) + -2 + param_4 * 2) =
           *(ushort *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + -2 + param_4 * 2) >> 1;
      *(ushort *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x6e + param_4 * 2) =
           *(ushort *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x6e + param_4 * 2) >> 1;
      *(ushort *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0xde + param_4 * 2) =
           *(ushort *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0xde + param_4 * 2) >> 1;
      *(byte *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0x14f + (int)param_4) =
           *(byte *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0x14f + (int)param_4) >> 1;
      for (local_10 = 0; local_10 < 6; local_10 = local_10 + 1) {
        *(byte *)(*(int *)(param_1 + 0x428) + param_2 * 0x2a + local_10 * 7 + 0x187 + (int)param_4)
             = *(byte *)(*(int *)(param_1 + 0x428) + param_2 * 0x2a + local_10 * 7 + 0x187 +
                        (int)param_4) >> 1;
      }
    }
  }
  return;
}

