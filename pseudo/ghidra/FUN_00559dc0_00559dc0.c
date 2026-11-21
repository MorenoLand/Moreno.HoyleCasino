// FUN_00559dc0  00559dc0

undefined4 __fastcall FUN_00559dc0(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  
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

