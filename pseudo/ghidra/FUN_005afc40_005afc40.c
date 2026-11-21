// FUN_005afc40  005afc40

void FUN_005afc40(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  
  uVar2 = FUN_005b4f00();
  cVar1 = FUN_005b60c0(uVar2);
  if (cVar1 == '\0') {
    iVar3 = FUN_005b4ed0();
    *(undefined1 *)(iVar3 + 0x4a1) = 1;
  }
  else {
    iVar3 = FUN_005b4ed0();
    *(undefined1 *)(iVar3 + 0x4a0) = 1;
  }
  piVar4 = (int *)FUN_005b4ed0();
  (**(code **)(*piVar4 + 0x14))();
  FUN_005db890();
  FUN_005af1b0();
  return;
}

