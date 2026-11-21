// FUN_0054a310  0054a310

undefined4 FUN_0054a310(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  cVar1 = FUN_0054a740(0);
  if (cVar1 == '\0') {
    cVar1 = FUN_0054a740(1);
    if (cVar1 == '\0') {
      cVar1 = FUN_0054a920(0);
      if (cVar1 == '\0') {
        iVar3 = FUN_00549e80(1,1);
        iVar4 = FUN_00549e80(0,1);
        if (iVar3 == iVar4) {
          uVar2 = 4;
        }
        else {
          iVar3 = FUN_00549e80(1,1);
          iVar4 = FUN_00549e80(0,1);
          if (iVar3 < iVar4) {
            uVar2 = 2;
          }
          else {
            uVar2 = 3;
          }
        }
      }
      else {
        uVar2 = 6;
      }
    }
    else {
      uVar2 = 2;
    }
  }
  else {
    uVar2 = 5;
  }
  return uVar2;
}

