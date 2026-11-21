// FUN_0054d200  0054d200

undefined4 __fastcall FUN_0054d200(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_0054c620(param_1);
  if (cVar1 == '\0') {
    cVar1 = FUN_0054c970();
    if (cVar1 == '\0') {
      cVar1 = FUN_0054c990();
      if (cVar1 == '\0') {
        cVar1 = FUN_0054ca10();
        if (cVar1 == '\0') {
          cVar1 = FUN_0054c670();
          if ((cVar1 == '\0') && (cVar1 = FUN_0054caa0(), cVar1 == '\0')) {
            cVar1 = FUN_0054c6b0();
            if ((cVar1 != '\0') || (cVar1 = FUN_0054cae0(), cVar1 != '\0')) {
              return 5;
            }
            cVar1 = FUN_0054c6d0();
            if ((cVar1 != '\0') || (cVar1 = FUN_0054cbb0(), cVar1 != '\0')) {
              return 6;
            }
            cVar1 = FUN_0054c710();
            if ((cVar1 == '\0') && (cVar1 = FUN_0054cbf0(), cVar1 == '\0')) {
              cVar1 = FUN_0054c780();
              if ((cVar1 != '\0') || (cVar1 = FUN_0054ccb0(), cVar1 != '\0')) {
                return 8;
              }
              cVar1 = FUN_0054c820();
              if ((cVar1 == '\0') && (cVar1 = FUN_0054cdc0(), cVar1 == '\0')) {
                return 0xffffffff;
              }
              return 9;
            }
            return 7;
          }
          uVar2 = 4;
        }
        else {
          uVar2 = 3;
        }
      }
      else {
        uVar2 = 2;
      }
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

