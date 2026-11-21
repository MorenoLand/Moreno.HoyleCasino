// FUN_0043c060  0043c060

undefined4 __fastcall FUN_0043c060(int *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  
  cVar2 = (**(code **)(*param_1 + 0xb0))();
  if (cVar2 != '\0') {
    return 1;
  }
  iVar3 = FUN_004347f0();
  if (iVar3 != 0) {
    FUN_004347f0();
    piVar4 = (int *)FUN_0063aac0();
    if ((*piVar4 == 2) || (piVar4 = (int *)FUN_0063aac0(), *piVar4 == 3)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if ((bVar1) && (iVar3 = FUN_004347f0(), *(char *)(iVar3 + 0x4a0) == '\0')) {
      uVar5 = FUN_00435300(param_1);
      return uVar5;
    }
    return 0;
  }
  return 0;
}

