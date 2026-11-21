// FUN_00461f10  00461f10

undefined4 __thiscall FUN_00461f10(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  FUN_005dcb00(param_2,param_1);
  piVar1 = (int *)FUN_0063aac0();
  if (*piVar1 == 0) {
    uVar2 = 0;
  }
  else {
    iVar3 = FUN_005dcb00(param_2,param_1);
    if (*(char *)(iVar3 + 0x4a1) == '\0') {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

