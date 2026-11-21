// FUN_0055a360  0055a360

undefined4 __fastcall FUN_0055a360(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  cVar1 = FUN_005597b0(param_1);
  if ((cVar1 != '\0') && (iVar2 = FUN_00559d00(), iVar2 == 5)) {
    return 0;
  }
  cVar1 = FUN_00559460();
  if (cVar1 == '\0') {
    cVar1 = FUN_005597b0(param_1);
    if (cVar1 == '\0') {
      cVar1 = FUN_005597d0();
      if (cVar1 == '\0') {
        cVar1 = FUN_00559850();
        if (cVar1 == '\0') {
          cVar1 = FUN_005594b0();
          if ((cVar1 == '\0') && (cVar1 = FUN_005598e0(), cVar1 == '\0')) {
            cVar1 = FUN_005594f0();
            if ((cVar1 != '\0') || (cVar1 = FUN_00559920(), cVar1 != '\0')) {
              return 6;
            }
            cVar1 = FUN_00559510();
            if ((cVar1 != '\0') || (cVar1 = FUN_005599f0(), cVar1 != '\0')) {
              return 7;
            }
            cVar1 = FUN_00559550();
            if ((cVar1 == '\0') && (cVar1 = FUN_00559a30(), cVar1 == '\0')) {
              cVar1 = FUN_005595c0();
              if ((cVar1 != '\0') || (cVar1 = FUN_00559af0(), cVar1 != '\0')) {
                return 9;
              }
              cVar1 = FUN_00559660();
              if ((cVar1 == '\0') && (cVar1 = FUN_00559c00(), cVar1 == '\0')) {
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

