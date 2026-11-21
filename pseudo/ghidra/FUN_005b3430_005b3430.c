// FUN_005b3430  005b3430

undefined1 FUN_005b3430(undefined4 param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = FUN_005b58f0(param_1);
  if (((iVar3 < 2) ||
      ((cVar1 = FUN_005b8540(), cVar1 != '\0' && (cVar1 = FUN_005b6170(param_1), cVar1 == '\0'))))
     && (cVar1 = FUN_005b36b0(param_1), cVar1 != '\0')) {
    uVar4 = FUN_005b4e50(param_1);
    iVar3 = FUN_005b5830(param_1,uVar4);
    if (iVar3 < 3) {
      uVar2 = FUN_005b4f20();
      switch(uVar2) {
      case 0:
        goto switchD_005b34bf_caseD_0;
      case 1:
        uVar4 = FUN_005b4e50(param_1);
        iVar3 = FUN_005b5260(param_1,uVar4);
        if (iVar3 != 10) {
          uVar4 = FUN_005b4e50(param_1);
          iVar3 = FUN_005b5040(param_1,uVar4);
          if (iVar3 != 10) {
            uVar4 = FUN_005b4e50(param_1);
            iVar3 = FUN_005b5260(param_1,uVar4);
            if (iVar3 != 0xb) {
              uVar4 = FUN_005b4e50(param_1);
              iVar3 = FUN_005b5040(param_1,uVar4);
              if (iVar3 != 0xb) {
                return 0;
              }
            }
          }
        }
        return 1;
      case 2:
        uVar4 = FUN_005b4e50(param_1);
        iVar3 = FUN_005b5260(param_1,uVar4);
        if (iVar3 != 9) {
          uVar4 = FUN_005b4e50(param_1);
          iVar3 = FUN_005b5040(param_1,uVar4);
          if (iVar3 != 9) {
            uVar4 = FUN_005b4e50(param_1);
            iVar3 = FUN_005b5260(param_1,uVar4);
            if (iVar3 != 10) {
              uVar4 = FUN_005b4e50(param_1);
              iVar3 = FUN_005b5040(param_1,uVar4);
              if (iVar3 != 10) {
                uVar4 = FUN_005b4e50(param_1);
                iVar3 = FUN_005b5260(param_1,uVar4);
                if (iVar3 != 0xb) {
                  uVar4 = FUN_005b4e50(param_1);
                  iVar3 = FUN_005b5040(param_1,uVar4);
                  if (iVar3 != 0xb) {
                    return 0;
                  }
                }
              }
            }
          }
        }
        return 1;
      case 3:
        uVar4 = FUN_005b4e50(param_1);
        uVar2 = FUN_005b6480(param_1,uVar4);
        return uVar2;
      default:
        return 1;
      }
    }
  }
  return 0;
switchD_005b34bf_caseD_0:
  uVar4 = FUN_005b4e50(param_1);
  iVar3 = FUN_005b5260(param_1,uVar4);
  if (iVar3 != 0xb) {
    uVar4 = FUN_005b4e50(param_1);
    iVar3 = FUN_005b5040(param_1,uVar4);
    if (iVar3 != 0xb) {
      return 0;
    }
  }
  return 1;
}

