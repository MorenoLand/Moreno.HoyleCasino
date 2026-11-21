// FUN_005a67d0  005a67d0

int FUN_005a67d0(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = FUN_005b4e50(param_1);
  iVar3 = FUN_005b5830(param_1,uVar2);
  iVar4 = FUN_005b58f0(param_1);
  if (((iVar3 == 2) && (cVar1 = FUN_005b82f0(param_1,uVar2), cVar1 != '\0')) &&
     (cVar1 = FUN_005b5950(), iVar4 < cVar1 + 1)) {
    iVar4 = FUN_005b5f60(param_1,uVar2,0);
    if (iVar4 == 1) {
      cVar1 = FUN_005b3710(param_1,uVar2);
      if (cVar1 != '\0') {
        return 0x1e;
      }
      cVar1 = FUN_005b6170(param_1);
      if (cVar1 != '\0') {
        return 0;
      }
      return 0xd;
    }
    cVar1 = FUN_005b36b0(param_1);
    if (cVar1 != '\0') {
      iVar3 = FUN_005b4f50(param_1,uVar2);
      return iVar3 / 2 + 0x13;
    }
  }
  cVar1 = FUN_005b6170(param_1);
  if (cVar1 != '\0') {
    return 0;
  }
  iVar4 = FUN_005b4f50(param_1,uVar2);
  if (iVar4 == 0x15) {
    return 0;
  }
  iVar4 = FUN_005b4f50(param_1,uVar2);
  if (iVar4 < 0x15) {
    iVar4 = FUN_005b5040(param_1,uVar2);
    iVar5 = FUN_005b5260(param_1,uVar2);
    if (iVar4 != iVar5) {
      iVar3 = FUN_005b4f50(param_1,uVar2);
      if (iVar3 != 0xc) {
        iVar3 = FUN_005b4f50(param_1,uVar2);
        return iVar3;
      }
      return 0xd;
    }
  }
  iVar4 = FUN_005b4f50(param_1,uVar2);
  if (iVar4 < 8) {
    return 1;
  }
  if ((iVar3 == 2) &&
     (((iVar4 = FUN_005b5f60(param_1,uVar2,0), iVar4 == 5 &&
       (iVar4 = FUN_005b5f60(param_1,uVar2,1), iVar4 == 3)) ||
      ((iVar4 = FUN_005b5f60(param_1,uVar2,0), iVar4 == 3 &&
       (iVar4 = FUN_005b5f60(param_1,uVar2,1), iVar4 == 5)))))) {
    return 2;
  }
  if ((iVar3 == 2) &&
     (((iVar3 = FUN_005b5f60(param_1,uVar2,0), iVar3 == 5 &&
       (iVar3 = FUN_005b5f60(param_1,uVar2,1), iVar3 == 2)) ||
      ((iVar3 = FUN_005b5f60(param_1,uVar2,0), iVar3 == 2 &&
       (iVar3 = FUN_005b5f60(param_1,uVar2,1), iVar3 == 6)))))) {
    return 3;
  }
  iVar3 = FUN_005b4f50(param_1,uVar2);
  if (iVar3 < 0x11) {
    iVar3 = FUN_005b4f50(param_1,uVar2);
    iVar3 = iVar3 + -4;
  }
  else {
    iVar3 = FUN_005b4f50(param_1,uVar2);
    if (iVar3 < 0x16) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_005b5260(param_1,uVar2);
      if (iVar3 < 8) {
        iVar3 = 1;
      }
      else {
        iVar3 = FUN_005b5260(param_1,uVar2);
        if (iVar3 < 0x11) {
          iVar3 = FUN_005b5260(param_1,uVar2);
          iVar3 = iVar3 + -4;
        }
        else {
          iVar3 = 0;
        }
      }
    }
  }
  return iVar3;
}

