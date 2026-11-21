// FUN_0054ca10  0054ca10

undefined4 __fastcall FUN_0054ca10(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = FUN_0054cec0(param_1);
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    iVar2 = FUN_0054cec0(param_1);
    if (iVar2 < 4) {
      iVar2 = FUN_0054cec0(param_1);
      if ((iVar2 == 3) && (iVar2 = FUN_0054c8e0(), iVar2 != 0)) {
        return 1;
      }
      iVar2 = FUN_0054cec0(param_1);
      if ((iVar2 == 2) && (cVar1 = FUN_0054c820(), cVar1 != '\0')) {
        return 1;
      }
      iVar2 = FUN_0054cec0();
      if ((iVar2 == 1) && (cVar1 = FUN_0054c6b0(), cVar1 != '\0')) {
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

