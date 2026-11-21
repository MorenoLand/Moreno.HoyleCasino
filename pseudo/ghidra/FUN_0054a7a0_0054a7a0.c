// FUN_0054a7a0  0054a7a0

uint FUN_0054a7a0(undefined4 param_1)

{
  char cVar1;
  uint uVar2;
  
  cVar1 = FUN_0054a770(0);
  if (cVar1 == '\0') {
    uVar2 = FUN_00548f80(param_1);
    if (uVar2 == 6) {
      uVar2 = 1;
    }
    else {
      uVar2 = uVar2 & 0xffffff00;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

