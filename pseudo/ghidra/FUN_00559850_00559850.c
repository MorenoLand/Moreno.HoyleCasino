// FUN_00559850  00559850

undefined4 __fastcall FUN_00559850(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = FUN_00559d00(param_1);
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    iVar2 = FUN_00559d00(param_1);
    if (iVar2 < 4) {
      iVar2 = FUN_00559d00(param_1);
      if ((iVar2 == 3) && (iVar2 = FUN_00559720(), iVar2 != 0)) {
        return 1;
      }
      iVar2 = FUN_00559d00(param_1);
      if ((iVar2 == 2) && (cVar1 = FUN_00559660(), cVar1 != '\0')) {
        return 1;
      }
      iVar2 = FUN_00559d00();
      if ((iVar2 == 1) && (cVar1 = FUN_005594f0(), cVar1 != '\0')) {
        return 1;
      }
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
  }
  return uVar3;
}

