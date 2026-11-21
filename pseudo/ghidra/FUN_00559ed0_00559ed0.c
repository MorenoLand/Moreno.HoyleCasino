// FUN_00559ed0  00559ed0

undefined4 __fastcall FUN_00559ed0(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  
  cVar1 = FUN_00559460(param_1);
  if (cVar1 == '\0') {
    cVar1 = FUN_005594b0();
    if (cVar1 == '\0') {
      cVar1 = FUN_005594f0();
      if (cVar1 == '\0') {
        cVar1 = FUN_00559510();
        if (cVar1 == '\0') {
          cVar1 = FUN_00559550();
          if (cVar1 == '\0') {
            cVar1 = FUN_005595c0();
            if (cVar1 == '\0') {
              cVar1 = FUN_00559660();
              if (cVar1 == '\0') {
                cVar1 = FUN_00559680();
                if (cVar1 == '\0') {
                  iVar3 = FUN_005596e0();
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
        iVar3 = FUN_00559d60(0xe);
        if (iVar3 == 4) {
          uVar2 = 2;
        }
        else {
          iVar3 = FUN_00559d60(0xd);
          if (((iVar3 != 4) && (iVar3 = FUN_00559d60(0xc), iVar3 != 4)) &&
             (iVar3 = FUN_00559d60(0xb), iVar3 != 4)) {
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

