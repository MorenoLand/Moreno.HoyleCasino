// FUN_0054cbb0  0054cbb0

uint __fastcall FUN_0054cbb0(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = FUN_0054cec0(param_1);
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_0054cec0(param_1);
    if (uVar3 == 1) {
      cVar1 = FUN_0054c840();
      uVar3 = 0;
      if (cVar1 != '\0') {
        return 1;
      }
    }
    uVar3 = uVar3 & 0xffffff00;
  }
  return uVar3;
}

