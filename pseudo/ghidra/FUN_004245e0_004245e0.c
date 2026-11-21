// FUN_004245e0  004245e0

void FUN_004245e0(int param_1)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  
  if (*(int *)(DAT_00790358 + 0xa0) == param_1) {
    FUN_005dcb00(param_1);
    piVar3 = (int *)FUN_0063aac0();
    if ((*piVar3 == 2) || (piVar3 = (int *)FUN_0063aac0(), *piVar3 == 3)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if ((bVar1) && (cVar2 = FUN_004272e0(param_1), cVar2 != '\0')) {
      FUN_00426910(param_1);
      FUN_0041fac0(param_1);
    }
    return;
  }
  return;
}

