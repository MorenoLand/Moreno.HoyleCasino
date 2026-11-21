// FUN_0047ac50  0047ac50

void FUN_0047ac50(void)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  int local_14;
  int local_8;
  
  cVar2 = FUN_005da7b0();
  if (cVar2 != '\0') {
    FUN_005e9f20("!roomPoker->InATournament()","..\\Casino\\PokerGame.cpp",0x22c);
  }
  local_8 = 0;
  do {
    iVar3 = FUN_0047f950();
    if (iVar3 <= local_8) {
      if (*(char *)(DAT_0162ee84 + 0x25) != '\0') {
        iVar3 = FUN_004798c0();
        if (iVar3 != 0) {
          iVar3 = FUN_005dcb00(*(undefined4 *)(iVar3 + 4));
          *(undefined1 *)(iVar3 + 0x4a1) = 1;
        }
      }
      return;
    }
    FUN_005dcb00(local_8);
    piVar4 = (int *)FUN_0063aac0();
    if (*piVar4 != 0) {
      FUN_005dcb00(local_8);
      iVar3 = FUN_005d5a50();
      iVar5 = FUN_0047bc20();
      if (iVar3 < iVar5) {
        if (*(char *)(DAT_0162ee84 + 0x25) == '\0') {
          FUN_005dcb00(local_8);
          piVar4 = (int *)FUN_0063aac0();
          if (*piVar4 == 2) {
LAB_0047ad50:
            bVar1 = true;
          }
          else {
            piVar4 = (int *)FUN_0063aac0();
            if (*piVar4 == 3) goto LAB_0047ad50;
            bVar1 = false;
          }
          if (bVar1) {
            uVar6 = FUN_005dcb00(local_8);
            FUN_005dbb70(uVar6);
            goto LAB_0047ac8c;
          }
        }
        iVar3 = FUN_005d9570(local_8);
        uVar6 = FUN_005dcb00(local_8);
        (**(code **)(*DAT_00791eb8 + 0x264))(uVar6);
        local_14 = 0;
        while( true ) {
          iVar5 = FUN_0047f950();
          if (iVar5 <= local_14) break;
          iVar5 = FUN_0047e390(local_14);
          iVar5 = FUN_005dcb00(*(undefined4 *)(iVar5 + 4));
          if (*(int *)(iVar5 + 8) == iVar3) {
            FUN_004c6550();
            break;
          }
          local_14 = local_14 + 1;
        }
      }
    }
LAB_0047ac8c:
    local_8 = local_8 + 1;
  } while( true );
}

