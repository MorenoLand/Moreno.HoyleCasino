// FUN_0047a510  0047a510

undefined4 FUN_0047a510(void)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int local_c;
  
  local_c = 0;
  do {
    iVar2 = FUN_0047f950();
    if (iVar2 <= local_c) {
      FUN_005e9f20(&DAT_006b2b64,"..\\Casino\\PokerGame.cpp",0x17e);
      return 0;
    }
    iVar2 = FUN_005dcb00(local_c);
    if (iVar2 != 0) {
      piVar3 = (int *)FUN_0063aac0();
      if ((*piVar3 == 2) || (piVar3 = (int *)FUN_0063aac0(), *piVar3 == 3)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (bVar1) {
        uVar4 = FUN_005d5a50();
        return uVar4;
      }
    }
    local_c = local_c + 1;
  } while( true );
}

