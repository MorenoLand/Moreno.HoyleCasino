// FUN_006578b0  006578b0

undefined4 __fastcall FUN_006578b0(int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_00657890(0);
  if ((cVar1 != '\0') || (cVar1 = FUN_00657890(1), cVar1 != '\0')) {
    return 0;
  }
  cVar1 = FUN_00657820();
  if (cVar1 == '\0') {
    if ((*(int *)(param_1 + 0x278) != 0) && (*(int *)(param_1 + 0x278) != 1)) {
      return 1;
    }
    return 0;
  }
  iVar2 = FUN_00606570();
  if (iVar2 == 0x3fd) {
    cVar1 = FUN_00657890(3);
    if (((cVar1 != '\0') || (cVar1 = FUN_00657890(4), cVar1 != '\0')) &&
       (iVar2 = FUN_006651e0(3), iVar2 != 0)) {
      return 1;
    }
    cVar1 = FUN_00657890(8);
    if (((cVar1 != '\0') || (cVar1 = FUN_00657890(9), cVar1 != '\0')) &&
       (iVar2 = FUN_006651e0(8), iVar2 != 0)) {
      return 1;
    }
    return 0;
  }
  if (iVar2 == 0x3fe) {
    cVar1 = FUN_00657890(3);
    if (((cVar1 != '\0') || (cVar1 = FUN_00657890(4), cVar1 != '\0')) &&
       (iVar2 = FUN_006651e0(4), iVar2 != 0)) {
      return 1;
    }
    cVar1 = FUN_00657890(8);
    if (((cVar1 != '\0') || (cVar1 = FUN_00657890(9), cVar1 != '\0')) &&
       (iVar2 = FUN_006651e0(9), iVar2 != 0)) {
      return 1;
    }
    return 0;
  }
  if (iVar2 != 0x3ff) {
    return 1;
  }
  cVar1 = FUN_00657890(3);
  if (((cVar1 != '\0') || (cVar1 = FUN_00657890(4), cVar1 != '\0')) &&
     ((iVar2 = FUN_006651e0(3), iVar2 != 0 || (iVar2 = FUN_006651e0(4), iVar2 != 0)))) {
    return 1;
  }
  cVar1 = FUN_00657890(8);
  if (((cVar1 != '\0') || (cVar1 = FUN_00657890(9), cVar1 != '\0')) &&
     ((iVar2 = FUN_006651e0(8), iVar2 != 0 || (iVar2 = FUN_006651e0(9), iVar2 != 0)))) {
    return 1;
  }
  return 0;
}

