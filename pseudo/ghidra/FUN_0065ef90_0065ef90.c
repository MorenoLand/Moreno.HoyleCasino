// FUN_0065ef90  0065ef90

void FUN_0065ef90(int param_1)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  char *_Source;
  undefined **ppuVar7;
  undefined4 *local_8;
  
  uVar3 = what();
  cVar1 = FUN_006368b0(uVar3);
  if (cVar1 == '\0') {
    local_8 = (undefined4 *)(**(code **)(*DAT_0162ee84 + 0x31c))();
    FUN_0063a3e0(0,0);
    FUN_0063ab10(param_1 + 0x14);
  }
  else {
    uVar3 = what();
    iVar4 = FUN_006369b0(uVar3);
    local_8 = *(undefined4 **)(DAT_0162ee84[0x16] + iVar4 * 4);
  }
  cVar2 = *(char *)(param_1 + 0x3a);
  piVar5 = (int *)FUN_0063aac0();
  *piVar5 = (int)cVar2;
  piVar5 = (int *)FUN_0063aac0();
  if (*piVar5 == 2) {
    ppuVar7 = &PTR_006b27f8;
    iVar4 = FUN_0063aac0();
    strcpy((char *)(iVar4 + 0x38),(char *)ppuVar7);
    cVar2 = *(char *)(param_1 + 0x3b);
    iVar4 = FUN_0063aac0();
    *(int *)(iVar4 + 0x54) = (int)cVar2;
  }
  else {
    cVar2 = FUN_00663bb0(param_1 + 0x21);
    if (cVar2 == '\0') {
      puVar6 = (undefined4 *)FUN_0063aac0();
      *puVar6 = 2;
      ppuVar7 = &PTR_006b27f8;
      iVar4 = FUN_0063aac0();
      strcpy((char *)(iVar4 + 0x38),(char *)ppuVar7);
      iVar4 = FUN_0063aac0();
      *(undefined4 *)(iVar4 + 0x54) = 0;
    }
    else {
      _Source = (char *)(param_1 + 0x21);
      iVar4 = FUN_0063aac0();
      strcpy((char *)(iVar4 + 0x38),_Source);
    }
  }
  FUN_0063b0a0();
  if ((cVar1 == '\0') && (local_8 != (undefined4 *)0x0)) {
    (**(code **)*local_8)(1);
  }
  return;
}

