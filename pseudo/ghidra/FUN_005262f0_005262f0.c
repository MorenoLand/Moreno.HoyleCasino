// FUN_005262f0  005262f0

void FUN_005262f0(void)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  
  uVar4 = *(undefined4 *)(DAT_00793374 + 0xd38);
  cVar2 = FUN_00528090(uVar4);
  if (cVar2 != '\0') {
    FUN_00528000();
    piVar3 = (int *)FUN_0063aac0();
    if ((*piVar3 == 2) || (piVar3 = (int *)FUN_0063aac0(), *piVar3 == 3)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if ((bVar1) && (cVar2 = FUN_00528d00(uVar4), cVar2 != '\0')) {
      uVar4 = FUN_00630f40("SID_CASINO_TABLEMINNOTMET_TITLE",0);
      uVar4 = FUN_00630f40("SID_CASINO_TABLEMINNOTMET_SHORT",uVar4);
      FUN_0062ff10(uVar4);
      return;
    }
  }
  cVar2 = FUN_00528090(uVar4);
  if (cVar2 == '\0') {
    iVar5 = FUN_00528000();
    *(undefined1 *)(iVar5 + 0x4a1) = 1;
  }
  else {
    iVar5 = FUN_00528000();
    *(undefined1 *)(iVar5 + 0x4a0) = 1;
  }
  piVar3 = (int *)FUN_00528000();
  (**(code **)(*piVar3 + 0x14))();
  FUN_00528ee0(*(undefined4 *)(DAT_00793374 + 0xd38));
  FUN_005db890();
  FUN_00524500();
  return;
}

