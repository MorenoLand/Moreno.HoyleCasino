// FUN_00609c50  00609c50

uint __thiscall FUN_00609c50(uint param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(char *)(param_1 + 10) == '\0') {
    iVar1 = FUN_00608470(param_2);
    if (iVar1 == -1) {
      param_1 = 0xffffff00;
    }
    else {
      param_1 = FUN_00609b80(iVar1);
    }
  }
  else {
    param_1 = param_1 & 0xffffff00;
  }
  return param_1;
}

