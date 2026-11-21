// FUN_0047a340  0047a340

void FUN_0047a340(void)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int local_8;
  
  cVar2 = FUN_005da830();
  if (cVar2 == '\0') {
    for (local_8 = 0; iVar3 = FUN_0047f950(), local_8 < iVar3; local_8 = local_8 + 1) {
      FUN_005dcb00(local_8);
      piVar4 = (int *)FUN_0063aac0();
      if ((*piVar4 == 2) || (piVar4 = (int *)FUN_0063aac0(), *piVar4 == 3)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if ((bVar1) && (iVar3 = FUN_005dcb00(local_8), *(char *)(iVar3 + 0x4a1) != '\0')) {
        FUN_005dcb00(local_8);
        iVar3 = FUN_005d5a50();
        iVar5 = FUN_0047bc20();
        if (iVar5 <= iVar3) {
          iVar3 = FUN_005dcb00(local_8);
          *(undefined1 *)(iVar3 + 0x4a1) = 0;
        }
      }
    }
  }
  return;
}

