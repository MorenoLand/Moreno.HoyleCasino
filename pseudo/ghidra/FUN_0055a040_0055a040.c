// FUN_0055a040  0055a040

undefined4 __fastcall FUN_0055a040(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_00559460(param_1);
  if (cVar1 == '\0') {
    cVar1 = FUN_005597b0();
    if (cVar1 == '\0') {
      cVar1 = FUN_005597d0();
      if (cVar1 == '\0') {
        cVar1 = FUN_00559850();
        if (cVar1 == '\0') {
          cVar1 = FUN_005594b0();
          if ((cVar1 == '\0') && (cVar1 = FUN_005598e0(), cVar1 == '\0')) {
            cVar1 = FUN_005594f0();
            if ((cVar1 != '\0') || (cVar1 = FUN_00559920(), cVar1 != '\0')) {
              return 5;
            }
            cVar1 = FUN_00559510();
            if ((cVar1 != '\0') || (cVar1 = FUN_005599f0(), cVar1 != '\0')) {
              return 6;
            }
            cVar1 = FUN_00559550();
            if ((cVar1 == '\0') && (cVar1 = FUN_00559a30(), cVar1 == '\0')) {
              cVar1 = FUN_005595c0();
              if ((cVar1 != '\0') || (cVar1 = FUN_00559af0(), cVar1 != '\0')) {
                return 8;
              }
              cVar1 = FUN_00559660();
              if ((cVar1 == '\0') && (cVar1 = FUN_00559c00(), cVar1 == '\0')) {
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

