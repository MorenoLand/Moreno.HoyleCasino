// FUN_004cea40  004cea40

void __thiscall FUN_004cea40(int param_1,short param_2)

{
  int iVar1;
  short local_c;
  short local_8;
  
  if (param_2 < 0) {
    FUN_005e9f20("shSeat>=0","..\\Casino\\PokerPlayer.cpp",0xc77);
  }
  iVar1 = FUN_0047f950();
  if (iVar1 <= param_2) {
    FUN_005e9f20("shSeat<pokerGame->GetNumberOfPlayersAtTable()","..\\Casino\\PokerPlayer.cpp",0xc78
                );
  }
  local_c = 2;
  while( true ) {
    iVar1 = FUN_0047f950();
    if (iVar1 < local_c) break;
    *(undefined2 *)(param_2 * 0xe + *(int *)(param_1 + 0x428) + -4 + local_c * 2) = 0;
    *(undefined2 *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x6c + local_c * 2) = 0;
    *(undefined2 *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0xdc + local_c * 2) = 0;
    *(undefined1 *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0x14e + (int)local_c) = 0;
    for (local_8 = 0; local_8 < 6; local_8 = local_8 + 1) {
      *(undefined1 *)
       (*(int *)(param_1 + 0x428) + param_2 * 0x2a + local_8 * 7 + 0x186 + (int)local_c) = 0;
    }
    local_c = local_c + 1;
  }
  return;
}

