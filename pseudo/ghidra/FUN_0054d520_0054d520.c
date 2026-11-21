// FUN_0054d520  0054d520

undefined4 __fastcall FUN_0054d520(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  cVar1 = FUN_0054c970(param_1);
  if ((cVar1 != '\0') && (iVar2 = FUN_0054cec0(), iVar2 == 5)) {
    return 0;
  }
  cVar1 = FUN_0054c620();
  if (cVar1 == '\0') {
    cVar1 = FUN_0054c970(param_1);
    if (cVar1 == '\0') {
      cVar1 = FUN_0054c990();
      if (cVar1 == '\0') {
        cVar1 = FUN_0054ca10();
        if (cVar1 == '\0') {
          cVar1 = FUN_0054c670();
          if ((cVar1 == '\0') && (cVar1 = FUN_0054caa0(), cVar1 == '\0')) {
            cVar1 = FUN_0054c6b0();
            if ((cVar1 != '\0') || (cVar1 = FUN_0054cae0(), cVar1 != '\0')) {
              return 6;
            }
            cVar1 = FUN_0054c6d0();
            if ((cVar1 != '\0') || (cVar1 = FUN_0054cbb0(), cVar1 != '\0')) {
              return 7;
            }
            cVar1 = FUN_0054c710();
            if ((cVar1 == '\0') && (cVar1 = FUN_0054cbf0(), cVar1 == '\0')) {
              cVar1 = FUN_0054c780();
              if ((cVar1 != '\0') || (cVar1 = FUN_0054ccb0(), cVar1 != '\0')) {
                return 9;
              }
              cVar1 = FUN_0054c820();
              if ((cVar1 == '\0') && (cVar1 = FUN_0054cdc0(), cVar1 == '\0')) {
                return 0xffffffff;
              }
              return 10;
            }
            return 8;
          }
          uVar3 = 5;
        }
        else {
          uVar3 = 4;
        }
      }
      else {
        uVar3 = 3;
      }
    }
    else {
      uVar3 = 2;
    }
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}

