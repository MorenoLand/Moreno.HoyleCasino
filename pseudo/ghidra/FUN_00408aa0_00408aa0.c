// FUN_00408aa0  00408aa0

undefined4 __thiscall FUN_00408aa0(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_004091b0(param_1);
  iVar2 = FUN_004091d0();
  param_2 = param_2 * 3;
  if (param_3 == param_2 + 2) {
    if (iVar2 < iVar1) {
      return 1;
    }
  }
  else if (param_3 == param_2 + 1) {
    if (iVar1 < iVar2) {
      return 8;
    }
  }
  else if ((param_3 == param_2) && (iVar1 == iVar2)) {
    return 9;
  }
  if ((iVar1 == iVar2) && (param_3 != param_2)) {
    uVar3 = 2;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

