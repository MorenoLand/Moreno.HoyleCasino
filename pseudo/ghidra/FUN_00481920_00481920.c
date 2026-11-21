// FUN_00481920  00481920

int FUN_00481920(void)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int local_8;
  
  local_8 = 0;
  do {
    iVar2 = FUN_0047f950();
    if (iVar2 <= local_8) {
      return -1;
    }
    FUN_005dcb00(local_8);
    piVar3 = (int *)FUN_0063aac0();
    if ((*piVar3 == 2) || (piVar3 = (int *)FUN_0063aac0(), *piVar3 == 3)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      FUN_005dcb00(local_8);
      piVar3 = (int *)FUN_0063aac0();
      if (*piVar3 == 2) {
        FUN_005dcb00(local_8);
        iVar2 = FUN_004842b0();
        iVar2 = iVar2 + -2;
        if ((-1 < iVar2) && (iVar2 < 0x17)) {
          return iVar2;
        }
      }
    }
    local_8 = local_8 + 1;
  } while( true );
}

