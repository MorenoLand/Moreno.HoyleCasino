// FUN_00595f20  00595f20

void FUN_00595f20(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  
  uVar2 = FUN_00597d30();
  cVar1 = FUN_00598470(uVar2);
  if (cVar1 == '\0') {
    iVar3 = FUN_00597d00();
    *(undefined1 *)(iVar3 + 0x4a1) = 1;
  }
  else {
    iVar3 = FUN_00597d00();
    *(undefined1 *)(iVar3 + 0x4a0) = 1;
  }
  piVar4 = (int *)FUN_00597d00();
  (**(code **)(*piVar4 + 0x14))();
  FUN_005db890();
  FUN_00595790();
  return;
}

