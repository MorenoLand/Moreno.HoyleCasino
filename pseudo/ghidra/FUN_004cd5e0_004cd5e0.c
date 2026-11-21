// FUN_004cd5e0  004cd5e0

void __thiscall FUN_004cd5e0(int param_1,short param_2,short param_3)

{
  undefined1 uVar1;
  undefined2 uVar2;
  int iVar3;
  short local_14;
  short local_10;
  
  if (param_2 < 0) {
    FUN_005e9f20("shSeat1>=0","..\\Casino\\PokerPlayer.cpp",0xbca);
  }
  iVar3 = FUN_0047f950();
  if (iVar3 <= param_2) {
    FUN_005e9f20("shSeat1<pokerGame->GetNumberOfPlayersAtTable()","..\\Casino\\PokerPlayer.cpp",
                 0xbcb);
  }
  if (param_3 < 0) {
    FUN_005e9f20("shSeat2>=0","..\\Casino\\PokerPlayer.cpp",0xbcc);
  }
  iVar3 = FUN_0047f950();
  if (iVar3 <= param_3) {
    FUN_005e9f20("shSeat2<pokerGame->GetNumberOfPlayersAtTable()","..\\Casino\\PokerPlayer.cpp",
                 0xbcd);
  }
  local_14 = 2;
  while( true ) {
    iVar3 = FUN_0047f950();
    if (iVar3 < local_14) break;
    uVar2 = *(undefined2 *)(param_2 * 0xe + *(int *)(param_1 + 0x428) + -4 + local_14 * 2);
    *(undefined2 *)(param_2 * 0xe + *(int *)(param_1 + 0x428) + -4 + local_14 * 2) =
         *(undefined2 *)(param_3 * 0xe + *(int *)(param_1 + 0x428) + -4 + local_14 * 2);
    *(undefined2 *)(param_3 * 0xe + *(int *)(param_1 + 0x428) + -4 + local_14 * 2) = uVar2;
    uVar2 = *(undefined2 *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x6c + local_14 * 2);
    *(undefined2 *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x6c + local_14 * 2) =
         *(undefined2 *)(*(int *)(param_1 + 0x428) + param_3 * 0xe + 0x6c + local_14 * 2);
    *(undefined2 *)(*(int *)(param_1 + 0x428) + param_3 * 0xe + 0x6c + local_14 * 2) = uVar2;
    uVar2 = *(undefined2 *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0xdc + local_14 * 2);
    *(undefined2 *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0xdc + local_14 * 2) =
         *(undefined2 *)(*(int *)(param_1 + 0x428) + param_3 * 0xe + 0xdc + local_14 * 2);
    *(undefined2 *)(*(int *)(param_1 + 0x428) + param_3 * 0xe + 0xdc + local_14 * 2) = uVar2;
    uVar1 = *(undefined1 *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0x14e + (int)local_14);
    *(undefined1 *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0x14e + (int)local_14) =
         *(undefined1 *)(*(int *)(param_1 + 0x428) + param_3 * 7 + 0x14e + (int)local_14);
    *(undefined1 *)(*(int *)(param_1 + 0x428) + param_3 * 7 + 0x14e + (int)local_14) = uVar1;
    for (local_10 = 0; local_10 < 6; local_10 = local_10 + 1) {
      uVar1 = *(undefined1 *)
               (*(int *)(param_1 + 0x428) + param_2 * 0x2a + local_10 * 7 + 0x186 + (int)local_14);
      *(undefined1 *)
       (*(int *)(param_1 + 0x428) + param_2 * 0x2a + local_10 * 7 + 0x186 + (int)local_14) =
           *(undefined1 *)
            (*(int *)(param_1 + 0x428) + param_3 * 0x2a + local_10 * 7 + 0x186 + (int)local_14);
      *(undefined1 *)
       (*(int *)(param_1 + 0x428) + param_3 * 0x2a + local_10 * 7 + 0x186 + (int)local_14) = uVar1;
    }
    uVar2 = *(undefined2 *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x2d4 + local_14 * 2);
    *(undefined2 *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x2d4 + local_14 * 2) =
         *(undefined2 *)(*(int *)(param_1 + 0x428) + param_3 * 0xe + 0x2d4 + local_14 * 2);
    *(undefined2 *)(*(int *)(param_1 + 0x428) + param_3 * 0xe + 0x2d4 + local_14 * 2) = uVar2;
    uVar2 = *(undefined2 *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x344 + local_14 * 2);
    *(undefined2 *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x344 + local_14 * 2) =
         *(undefined2 *)(*(int *)(param_1 + 0x428) + param_3 * 0xe + 0x344 + local_14 * 2);
    *(undefined2 *)(*(int *)(param_1 + 0x428) + param_3 * 0xe + 0x344 + local_14 * 2) = uVar2;
    uVar2 = *(undefined2 *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x3b4 + local_14 * 2);
    *(undefined2 *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x3b4 + local_14 * 2) =
         *(undefined2 *)(*(int *)(param_1 + 0x428) + param_3 * 0xe + 0x3b4 + local_14 * 2);
    *(undefined2 *)(*(int *)(param_1 + 0x428) + param_3 * 0xe + 0x3b4 + local_14 * 2) = uVar2;
    uVar1 = *(undefined1 *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0x426 + (int)local_14);
    *(undefined1 *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0x426 + (int)local_14) =
         *(undefined1 *)(*(int *)(param_1 + 0x428) + param_3 * 7 + 0x426 + (int)local_14);
    *(undefined1 *)(*(int *)(param_1 + 0x428) + param_3 * 7 + 0x426 + (int)local_14) = uVar1;
    uVar2 = *(undefined2 *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x45c + local_14 * 2);
    *(undefined2 *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x45c + local_14 * 2) =
         *(undefined2 *)(*(int *)(param_1 + 0x428) + param_3 * 0xe + 0x45c + local_14 * 2);
    *(undefined2 *)(*(int *)(param_1 + 0x428) + param_3 * 0xe + 0x45c + local_14 * 2) = uVar2;
    uVar2 = *(undefined2 *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x4cc + local_14 * 2);
    *(undefined2 *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x4cc + local_14 * 2) =
         *(undefined2 *)(*(int *)(param_1 + 0x428) + param_3 * 0xe + 0x4cc + local_14 * 2);
    *(undefined2 *)(*(int *)(param_1 + 0x428) + param_3 * 0xe + 0x4cc + local_14 * 2) = uVar2;
    uVar2 = *(undefined2 *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x53c + local_14 * 2);
    *(undefined2 *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x53c + local_14 * 2) =
         *(undefined2 *)(*(int *)(param_1 + 0x428) + param_3 * 0xe + 0x53c + local_14 * 2);
    *(undefined2 *)(*(int *)(param_1 + 0x428) + param_3 * 0xe + 0x53c + local_14 * 2) = uVar2;
    uVar1 = *(undefined1 *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0x5ae + (int)local_14);
    *(undefined1 *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0x5ae + (int)local_14) =
         *(undefined1 *)(*(int *)(param_1 + 0x428) + param_3 * 7 + 0x5ae + (int)local_14);
    *(undefined1 *)(*(int *)(param_1 + 0x428) + param_3 * 7 + 0x5ae + (int)local_14) = uVar1;
    uVar2 = *(undefined2 *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x5e4 + local_14 * 2);
    *(undefined2 *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x5e4 + local_14 * 2) =
         *(undefined2 *)(*(int *)(param_1 + 0x428) + param_3 * 0xe + 0x5e4 + local_14 * 2);
    *(undefined2 *)(*(int *)(param_1 + 0x428) + param_3 * 0xe + 0x5e4 + local_14 * 2) = uVar2;
    uVar2 = *(undefined2 *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x654 + local_14 * 2);
    *(undefined2 *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x654 + local_14 * 2) =
         *(undefined2 *)(*(int *)(param_1 + 0x428) + param_3 * 0xe + 0x654 + local_14 * 2);
    *(undefined2 *)(*(int *)(param_1 + 0x428) + param_3 * 0xe + 0x654 + local_14 * 2) = uVar2;
    uVar1 = *(undefined1 *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0x6c6 + (int)local_14);
    *(undefined1 *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0x6c6 + (int)local_14) =
         *(undefined1 *)(*(int *)(param_1 + 0x428) + param_3 * 7 + 0x6c6 + (int)local_14);
    *(undefined1 *)(*(int *)(param_1 + 0x428) + param_3 * 7 + 0x6c6 + (int)local_14) = uVar1;
    uVar2 = *(undefined2 *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x814 + local_14 * 2);
    *(undefined2 *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x814 + local_14 * 2) =
         *(undefined2 *)(*(int *)(param_1 + 0x428) + param_3 * 0xe + 0x814 + local_14 * 2);
    *(undefined2 *)(*(int *)(param_1 + 0x428) + param_3 * 0xe + 0x814 + local_14 * 2) = uVar2;
    uVar2 = *(undefined2 *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x884 + local_14 * 2);
    *(undefined2 *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x884 + local_14 * 2) =
         *(undefined2 *)(*(int *)(param_1 + 0x428) + param_3 * 0xe + 0x884 + local_14 * 2);
    *(undefined2 *)(*(int *)(param_1 + 0x428) + param_3 * 0xe + 0x884 + local_14 * 2) = uVar2;
    uVar1 = *(undefined1 *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0x8f6 + (int)local_14);
    *(undefined1 *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0x8f6 + (int)local_14) =
         *(undefined1 *)(*(int *)(param_1 + 0x428) + param_3 * 7 + 0x8f6 + (int)local_14);
    *(undefined1 *)(*(int *)(param_1 + 0x428) + param_3 * 7 + 0x8f6 + (int)local_14) = uVar1;
    uVar2 = *(undefined2 *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x92c + local_14 * 2);
    *(undefined2 *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x92c + local_14 * 2) =
         *(undefined2 *)(*(int *)(param_1 + 0x428) + param_3 * 0xe + 0x92c + local_14 * 2);
    *(undefined2 *)(*(int *)(param_1 + 0x428) + param_3 * 0xe + 0x92c + local_14 * 2) = uVar2;
    uVar2 = *(undefined2 *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x99c + local_14 * 2);
    *(undefined2 *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x99c + local_14 * 2) =
         *(undefined2 *)(*(int *)(param_1 + 0x428) + param_3 * 0xe + 0x99c + local_14 * 2);
    *(undefined2 *)(*(int *)(param_1 + 0x428) + param_3 * 0xe + 0x99c + local_14 * 2) = uVar2;
    uVar1 = *(undefined1 *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0xa0e + (int)local_14);
    *(undefined1 *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0xa0e + (int)local_14) =
         *(undefined1 *)(*(int *)(param_1 + 0x428) + param_3 * 7 + 0xa0e + (int)local_14);
    *(undefined1 *)(*(int *)(param_1 + 0x428) + param_3 * 7 + 0xa0e + (int)local_14) = uVar1;
    uVar2 = *(undefined2 *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0xa44 + local_14 * 2);
    *(undefined2 *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0xa44 + local_14 * 2) =
         *(undefined2 *)(*(int *)(param_1 + 0x428) + param_3 * 0xe + 0xa44 + local_14 * 2);
    *(undefined2 *)(*(int *)(param_1 + 0x428) + param_3 * 0xe + 0xa44 + local_14 * 2) = uVar2;
    uVar2 = *(undefined2 *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0xab4 + local_14 * 2);
    *(undefined2 *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0xab4 + local_14 * 2) =
         *(undefined2 *)(*(int *)(param_1 + 0x428) + param_3 * 0xe + 0xab4 + local_14 * 2);
    *(undefined2 *)(*(int *)(param_1 + 0x428) + param_3 * 0xe + 0xab4 + local_14 * 2) = uVar2;
    uVar1 = *(undefined1 *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0xb26 + (int)local_14);
    *(undefined1 *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0xb26 + (int)local_14) =
         *(undefined1 *)(*(int *)(param_1 + 0x428) + param_3 * 7 + 0xb26 + (int)local_14);
    *(undefined1 *)(*(int *)(param_1 + 0x428) + param_3 * 7 + 0xb26 + (int)local_14) = uVar1;
    uVar2 = *(undefined2 *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x6fc + local_14 * 2);
    *(undefined2 *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x6fc + local_14 * 2) =
         *(undefined2 *)(*(int *)(param_1 + 0x428) + param_3 * 0xe + 0x6fc + local_14 * 2);
    *(undefined2 *)(*(int *)(param_1 + 0x428) + param_3 * 0xe + 0x6fc + local_14 * 2) = uVar2;
    uVar2 = *(undefined2 *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x76c + local_14 * 2);
    *(undefined2 *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x76c + local_14 * 2) =
         *(undefined2 *)(*(int *)(param_1 + 0x428) + param_3 * 0xe + 0x76c + local_14 * 2);
    *(undefined2 *)(*(int *)(param_1 + 0x428) + param_3 * 0xe + 0x76c + local_14 * 2) = uVar2;
    uVar1 = *(undefined1 *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0x7de + (int)local_14);
    *(undefined1 *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0x7de + (int)local_14) =
         *(undefined1 *)(*(int *)(param_1 + 0x428) + param_3 * 7 + 0x7de + (int)local_14);
    *(undefined1 *)(*(int *)(param_1 + 0x428) + param_3 * 7 + 0x7de + (int)local_14) = uVar1;
    uVar2 = *(undefined2 *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0xb5c + local_14 * 2);
    *(undefined2 *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0xb5c + local_14 * 2) =
         *(undefined2 *)(*(int *)(param_1 + 0x428) + param_3 * 0xe + 0xb5c + local_14 * 2);
    *(undefined2 *)(*(int *)(param_1 + 0x428) + param_3 * 0xe + 0xb5c + local_14 * 2) = uVar2;
    uVar2 = *(undefined2 *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0xbcc + local_14 * 2);
    *(undefined2 *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0xbcc + local_14 * 2) =
         *(undefined2 *)(*(int *)(param_1 + 0x428) + param_3 * 0xe + 0xbcc + local_14 * 2);
    *(undefined2 *)(*(int *)(param_1 + 0x428) + param_3 * 0xe + 0xbcc + local_14 * 2) = uVar2;
    uVar1 = *(undefined1 *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0xc3e + (int)local_14);
    *(undefined1 *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0xc3e + (int)local_14) =
         *(undefined1 *)(*(int *)(param_1 + 0x428) + param_3 * 7 + 0xc3e + (int)local_14);
    *(undefined1 *)(*(int *)(param_1 + 0x428) + param_3 * 7 + 0xc3e + (int)local_14) = uVar1;
    uVar2 = *(undefined2 *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0xc74 + local_14 * 2);
    *(undefined2 *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0xc74 + local_14 * 2) =
         *(undefined2 *)(*(int *)(param_1 + 0x428) + param_3 * 0xe + 0xc74 + local_14 * 2);
    *(undefined2 *)(*(int *)(param_1 + 0x428) + param_3 * 0xe + 0xc74 + local_14 * 2) = uVar2;
    uVar2 = *(undefined2 *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0xce4 + local_14 * 2);
    *(undefined2 *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0xce4 + local_14 * 2) =
         *(undefined2 *)(*(int *)(param_1 + 0x428) + param_3 * 0xe + 0xce4 + local_14 * 2);
    *(undefined2 *)(*(int *)(param_1 + 0x428) + param_3 * 0xe + 0xce4 + local_14 * 2) = uVar2;
    uVar1 = *(undefined1 *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0xd56 + (int)local_14);
    *(undefined1 *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0xd56 + (int)local_14) =
         *(undefined1 *)(*(int *)(param_1 + 0x428) + param_3 * 7 + 0xd56 + (int)local_14);
    *(undefined1 *)(*(int *)(param_1 + 0x428) + param_3 * 7 + 0xd56 + (int)local_14) = uVar1;
    uVar2 = *(undefined2 *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0xd8c + local_14 * 2);
    *(undefined2 *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0xd8c + local_14 * 2) =
         *(undefined2 *)(*(int *)(param_1 + 0x428) + param_3 * 0xe + 0xd8c + local_14 * 2);
    *(undefined2 *)(*(int *)(param_1 + 0x428) + param_3 * 0xe + 0xd8c + local_14 * 2) = uVar2;
    uVar2 = *(undefined2 *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0xdfc + local_14 * 2);
    *(undefined2 *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0xdfc + local_14 * 2) =
         *(undefined2 *)(*(int *)(param_1 + 0x428) + param_3 * 0xe + 0xdfc + local_14 * 2);
    *(undefined2 *)(*(int *)(param_1 + 0x428) + param_3 * 0xe + 0xdfc + local_14 * 2) = uVar2;
    uVar1 = *(undefined1 *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0xe6e + (int)local_14);
    *(undefined1 *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0xe6e + (int)local_14) =
         *(undefined1 *)(*(int *)(param_1 + 0x428) + param_3 * 7 + 0xe6e + (int)local_14);
    *(undefined1 *)(*(int *)(param_1 + 0x428) + param_3 * 7 + 0xe6e + (int)local_14) = uVar1;
    local_14 = local_14 + 1;
  }
  return;
}

