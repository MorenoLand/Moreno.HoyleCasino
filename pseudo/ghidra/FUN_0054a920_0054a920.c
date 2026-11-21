// FUN_0054a920  0054a920

undefined4 FUN_0054a920(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  if (*(int *)(DAT_007947e0 + 0x4f14) == 1) {
    cVar1 = FUN_0054a990(param_1);
    if (cVar1 == '\0') {
      cVar1 = FUN_0054a9d0(param_1);
      if (cVar1 == '\0') {
        cVar1 = FUN_0054aa50(param_1);
        if (cVar1 == '\0') {
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
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

