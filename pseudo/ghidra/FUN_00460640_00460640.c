// FUN_00460640  00460640

bool FUN_00460640(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  if (param_1 != 4) {
    FUN_005dcb00(param_1);
    piVar2 = (int *)FUN_0063aac0();
    if ((*piVar2 == 2) || (piVar2 = (int *)FUN_0063aac0(), *piVar2 == 3)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      iVar3 = FUN_005de320(param_1);
      if (iVar3 < 2) {
        FUN_005dcb00(param_1);
        iVar3 = FUN_005d5a50();
        iVar4 = FUN_00460740(param_1);
        bVar1 = iVar4 <= iVar3;
      }
      else {
        bVar1 = false;
      }
    }
    else {
      bVar1 = false;
    }
    return bVar1;
  }
  return true;
}

