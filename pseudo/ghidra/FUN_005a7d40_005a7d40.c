// FUN_005a7d40  005a7d40

undefined1 FUN_005a7d40(int param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  
  if (param_1 == 4) {
    if (((param_3 == 0) && (*(char *)(DAT_007935fc + 9) == '\0')) &&
       (iVar2 = FUN_005b5730(), iVar2 != -1)) {
      return 1;
    }
    return 0;
  }
  iVar2 = FUN_005b58a0();
  if (iVar2 == 1) {
    FUN_005dcb00(param_1);
    piVar3 = (int *)FUN_0063aac0();
    if (((*piVar3 == 1) && (cVar1 = FUN_005b60a0(param_1,param_2), cVar1 == '\0')) &&
       ((param_3 < 2 || ((param_3 == 0 && (iVar2 = FUN_005b58f0(param_1), 1 < iVar2)))))) {
      cVar1 = FUN_005b3300(param_1,param_2);
      if ((cVar1 != '\0') || (cVar1 = FUN_005b6040(param_1), cVar1 != '\0')) {
        return 0;
      }
      iVar2 = FUN_005b5010(param_1,param_2);
      if ((iVar2 == -1) ||
         ((iVar2 = FUN_005b5010(param_1,param_2), iVar2 == 5 &&
          (cVar1 = FUN_005b6530(), cVar1 == '\0')))) {
        return 1;
      }
    }
  }
  return 0;
}

