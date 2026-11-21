// FUN_00483c30  00483c30

undefined4 __thiscall FUN_00483c30(int param_1,undefined2 *param_2,undefined4 *param_3)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  short local_10;
  short local_c;
  int local_8;
  
  cVar1 = FUN_005da7b0();
  if (cVar1 == '\0') {
    FUN_005e9f20("roomPoker->InATournament()","..\\Casino\\PokerGame.cpp",0x1061);
  }
  *param_2 = 0;
  local_10 = 0;
  for (local_c = 0; iVar3 = FUN_0047f950(), local_c < iVar3; local_c = local_c + 1) {
    FUN_0047e390((int)local_c);
    iVar3 = FUN_004c6cb0();
    if (iVar3 != 0) {
      FUN_0047e390((int)local_c);
      iVar3 = FUN_004c6a70();
      iVar4 = FUN_0047bc20();
      if (iVar4 <= iVar3) {
        local_10 = local_10 + 1;
      }
    }
  }
  if (1 < local_10) {
    iVar3 = FUN_005da8a0();
    iVar4 = FUN_005da8c0();
    if (iVar4 <= iVar3) {
      return 0xffffffff;
    }
  }
  local_8 = -1;
  *(undefined4 *)(param_1 + 0x3d4) = 0xffffffff;
  for (local_c = 0; iVar3 = FUN_0047f950(), local_c < iVar3; local_c = local_c + 1) {
    FUN_0047e390((int)local_c);
    iVar3 = FUN_004c6cb0();
    if (iVar3 != 0) {
      FUN_0047e390((int)local_c);
      iVar3 = FUN_004c6a70();
      if (local_8 < iVar3) {
        FUN_0047e390((int)local_c);
        local_8 = FUN_004c6a70();
        *(int *)(param_1 + 0x3d4) = (int)local_c;
      }
      else {
        FUN_0047e390((int)local_c);
        iVar3 = FUN_004c6a70();
        if (iVar3 == local_8) {
          *(undefined4 *)(param_1 + 0x3d4) = 0xfffffffe;
        }
      }
    }
  }
  if (*(int *)(param_1 + 0x3d4) == -1) {
    FUN_005e9f20("nTournamentWinnerIndex != -1","..\\Casino\\PokerGame.cpp",0x1083);
  }
  if (-1 < *(int *)(param_1 + 0x3d4)) {
    uVar2 = FUN_00483e50(*(undefined4 *)(param_1 + 0x3d4));
    *param_2 = uVar2;
    FUN_0047e390(*(undefined4 *)(param_1 + 0x3d4));
    uVar5 = FUN_004c6a70();
    *param_3 = uVar5;
  }
  return *(undefined4 *)(param_1 + 0x3d4);
}

