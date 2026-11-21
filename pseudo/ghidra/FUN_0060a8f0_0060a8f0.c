// FUN_0060a8f0  0060a8f0

undefined4 __thiscall FUN_0060a8f0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (DAT_007960cb == '\0') {
    if (*(char *)(param_1 + 10) == '\0') {
      iVar1 = FUN_00609d80(param_2);
      if (iVar1 == -1) {
        uVar2 = 0xffffff00;
      }
      else {
        uVar2 = FUN_0060a870(iVar1);
      }
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

