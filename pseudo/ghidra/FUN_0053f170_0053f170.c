// FUN_0053f170  0053f170

void FUN_0053f170(void)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 extraout_var;
  undefined4 uVar4;
  
  cVar1 = FUN_00540de0(*(undefined4 *)(DAT_007933ec + 0xe8));
  uVar4 = extraout_var;
  if (cVar1 == '\0') {
    iVar2 = FUN_00540af0();
    *(undefined1 *)(iVar2 + 0x4a1) = 1;
  }
  else {
    iVar2 = FUN_00540af0();
    *(undefined1 *)(iVar2 + 0x4a0) = 1;
  }
  piVar3 = (int *)FUN_00540af0();
  (**(code **)(*piVar3 + 0x14))(piVar3,uVar4);
  FUN_005db890();
  FUN_0053d3c0();
  return;
}

