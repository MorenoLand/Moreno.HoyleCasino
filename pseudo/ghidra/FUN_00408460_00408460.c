// FUN_00408460  00408460

int FUN_00408460(void)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int local_8;
  
  local_8 = 0;
  do {
    if (4 < local_8) {
      return 0;
    }
    iVar2 = FUN_005dcb00(local_8);
    if (iVar2 != 0) {
      piVar3 = (int *)FUN_0063aac0();
      if ((*piVar3 == 2) || (piVar3 = (int *)FUN_0063aac0(), *piVar3 == 3)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (bVar1) {
        return local_8;
      }
    }
    local_8 = local_8 + 1;
  } while( true );
}

