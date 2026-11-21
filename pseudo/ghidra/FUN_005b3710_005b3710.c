// FUN_005b3710  005b3710

undefined4 FUN_005b3710(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 extraout_var;
  
  cVar1 = FUN_005b36b0(param_1);
  if (cVar1 == '\0') {
    return 0;
  }
  cVar1 = FUN_005b5950(extraout_var);
  if ((cVar1 != '\0') && (cVar1 = FUN_005b82f0(param_1,param_2), cVar1 != '\0')) {
    cVar1 = FUN_005b8570();
    if ((cVar1 == '\0') &&
       ((iVar2 = FUN_005b5f60(param_1,param_2,0), iVar2 == 1 &&
        (iVar2 = FUN_005b58f0(param_1), 1 < iVar2)))) {
      return 0;
    }
    cVar1 = FUN_005b5950();
    if ((cVar1 == '\x01') && (iVar2 = FUN_005b58f0(param_1), iVar2 == 1)) {
      return 1;
    }
    cVar1 = FUN_005b5950();
    if ((cVar1 == '\x03') && (iVar2 = FUN_005b58f0(param_1), iVar2 < 4)) {
      return 1;
    }
  }
  return 0;
}

