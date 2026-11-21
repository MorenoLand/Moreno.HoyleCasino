// FUN_0054a990  0054a990

uint FUN_0054a990(undefined4 param_1)

{
  uint uVar1;
  
  uVar1 = FUN_0054a770(param_1);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = uVar1 & 0xffffff00;
  }
  else {
    uVar1 = FUN_00548f80(param_1);
    if (uVar1 == 5) {
      uVar1 = 1;
    }
    else {
      uVar1 = uVar1 & 0xffffff00;
    }
  }
  return uVar1;
}

