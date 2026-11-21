// FUN_00522750  00522750

void FUN_00522750(void)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  
  FUN_005f2ba0(0x30eb72);
  if (DAT_00793374 == 0) {
    return;
  }
  iVar3 = FUN_00528000();
  if (iVar3 != 0) {
    FUN_00528000();
    piVar4 = (int *)FUN_0063aac0();
    if ((*piVar4 == 2) || (piVar4 = (int *)FUN_0063aac0(), *piVar4 == 3)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if ((bVar1) && (cVar2 = FUN_00528190(0xffffffff), cVar2 != '\0')) {
      FUN_005f2b20(0x30eb72,1);
    }
    return;
  }
  return;
}

