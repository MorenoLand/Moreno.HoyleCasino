// FUN_0054d090  0054d090

undefined4 __fastcall FUN_0054d090(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  
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
                  iVar3 = FUN_0054c8a0();
                  if (iVar3 < 0xb) {
                    uVar2 = 0xffffffff;
                  }
                  else {
                    uVar2 = 10;
                  }
                }
                else {
                  uVar2 = 9;
                }
              }
              else {
                uVar2 = 8;
              }
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
        iVar3 = FUN_0054cf20(0xe);
        if (iVar3 == 4) {
          uVar2 = 2;
        }
        else {
          iVar3 = FUN_0054cf20(0xd);
          if (((iVar3 != 4) && (iVar3 = FUN_0054cf20(0xc), iVar3 != 4)) &&
             (iVar3 = FUN_0054cf20(0xb), iVar3 != 4)) {
            return 4;
          }
          uVar2 = 3;
        }
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

