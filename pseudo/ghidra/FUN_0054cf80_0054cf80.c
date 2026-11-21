// FUN_0054cf80  0054cf80

undefined4 __fastcall FUN_0054cf80(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_0054c620(param_1);
  if (cVar1 == '\0') {
    cVar1 = FUN_0054c670();
    if (cVar1 == '\0') {
      cVar1 = FUN_0054c6b0();
      if (cVar1 == '\0') {
        cVar1 = FUN_0054c6d0();
        if (cVar1 == '\0') {
          cVar1 = FUN_0054c710();
          if (cVar1 == '\0') {
            cVar1 = FUN_0054c780();
            if (cVar1 == '\0') {
              cVar1 = FUN_0054c820();
              if (cVar1 == '\0') {
                cVar1 = FUN_0054c840();
                if (cVar1 == '\0') {
                  uVar2 = 0xffffffff;
                }
                else {
                  uVar2 = 7;
                }
              }
              else {
                uVar2 = 6;
              }
            }
            else {
              uVar2 = 5;
            }
          }
          else {
            uVar2 = 4;
          }
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

