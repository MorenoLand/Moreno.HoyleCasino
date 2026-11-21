// FUN_0054d360  0054d360

undefined4 __fastcall FUN_0054d360(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_0054c620(param_1);
  if (cVar1 != '\0') {
    return 0;
  }
  cVar1 = FUN_0054ca10();
  if (cVar1 != '\0') {
    return 1;
  }
  cVar1 = FUN_0054c990();
  if (cVar1 != '\0') {
    return 2;
  }
  cVar1 = FUN_0054c670();
  if ((cVar1 == '\0') && (cVar1 = FUN_0054caa0(), cVar1 == '\0')) {
    cVar1 = FUN_0054c6b0();
    if ((cVar1 != '\0') || (cVar1 = FUN_0054cae0(), cVar1 != '\0')) {
      return 4;
    }
    cVar1 = FUN_0054c6d0();
    if ((cVar1 != '\0') || (cVar1 = FUN_0054cbb0(), cVar1 != '\0')) {
      return 5;
    }
    cVar1 = FUN_0054c710();
    if ((cVar1 == '\0') && (cVar1 = FUN_0054cbf0(), cVar1 == '\0')) {
      cVar1 = FUN_0054c780();
      if ((cVar1 != '\0') || (cVar1 = FUN_0054ccb0(), cVar1 != '\0')) {
        return 7;
      }
      cVar1 = FUN_0054c820();
      if ((cVar1 == '\0') && (cVar1 = FUN_0054cdc0(), cVar1 == '\0')) {
        cVar1 = FUN_0054c840();
        if (cVar1 != '\0') {
          return 9;
        }
        if (*(int *)(DAT_007947e0 + 0x4f14) == 8) {
          iVar2 = FUN_0054c8a0();
          if (0xc < iVar2) {
            return 10;
          }
          iVar2 = FUN_0054cec0();
          if ((iVar2 == 1) &&
             ((iVar2 = FUN_0054cf20(0xd), iVar2 != 0 || (iVar2 = FUN_0054cf20(0xe), iVar2 != 0)))) {
            return 10;
          }
        }
        return 0xffffffff;
      }
      return 8;
    }
    return 6;
  }
  return 3;
}

