// FUN_0055a1a0  0055a1a0

undefined4 __fastcall FUN_0055a1a0(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_00559460(param_1);
  if (cVar1 != '\0') {
    return 0;
  }
  cVar1 = FUN_00559850();
  if (cVar1 != '\0') {
    return 1;
  }
  cVar1 = FUN_005597d0();
  if (cVar1 != '\0') {
    return 2;
  }
  cVar1 = FUN_005594b0();
  if ((cVar1 == '\0') && (cVar1 = FUN_005598e0(), cVar1 == '\0')) {
    cVar1 = FUN_005594f0();
    if ((cVar1 != '\0') || (cVar1 = FUN_00559920(), cVar1 != '\0')) {
      return 4;
    }
    cVar1 = FUN_00559510();
    if ((cVar1 != '\0') || (cVar1 = FUN_005599f0(), cVar1 != '\0')) {
      return 5;
    }
    cVar1 = FUN_00559550();
    if ((cVar1 == '\0') && (cVar1 = FUN_00559a30(), cVar1 == '\0')) {
      cVar1 = FUN_005595c0();
      if ((cVar1 != '\0') || (cVar1 = FUN_00559af0(), cVar1 != '\0')) {
        return 7;
      }
      cVar1 = FUN_00559660();
      if ((cVar1 == '\0') && (cVar1 = FUN_00559c00(), cVar1 == '\0')) {
        cVar1 = FUN_00559680();
        if (cVar1 != '\0') {
          return 9;
        }
        if (*(int *)(DAT_007947e0 + 0x4f14) == 8) {
          iVar2 = FUN_005596e0();
          if (0xc < iVar2) {
            return 10;
          }
          iVar2 = FUN_00559d00();
          if ((iVar2 == 1) &&
             ((iVar2 = FUN_00559d60(0xd), iVar2 != 0 || (iVar2 = FUN_00559d60(0xe), iVar2 != 0)))) {
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

