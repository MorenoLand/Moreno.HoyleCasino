// FUN_00480740  00480740

int FUN_00480740(void)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int local_c;
  
  local_c = 0;
  while( true ) {
    iVar2 = FUN_0047f950();
    if (iVar2 <= local_c) {
      FUN_005e9f20("false","..\\Casino\\PokerGame.cpp",0xa81);
      return 0;
    }
    FUN_005dcb00(local_c);
    piVar3 = (int *)FUN_0063aac0();
    if ((*piVar3 == 2) || (piVar3 = (int *)FUN_0063aac0(), *piVar3 == 3)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) break;
    local_c = local_c + 1;
  }
  return local_c;
}

