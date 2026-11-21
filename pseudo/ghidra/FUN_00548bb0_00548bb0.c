// FUN_00548bb0  00548bb0

undefined4 FUN_00548bb0(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  
  cVar1 = FUN_0054a740(param_1);
  if (cVar1 == '\0') {
    cVar1 = FUN_0054a6c0(param_1);
    if (cVar1 == '\0') {
      iVar3 = FUN_00548f80(param_1);
      if (iVar3 < 6) {
        uVar2 = 0;
      }
      else {
        uVar2 = 1;
      }
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

