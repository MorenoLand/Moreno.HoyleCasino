// FUN_00559c00  00559c00

undefined4 __fastcall FUN_00559c00(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = FUN_00559d00(param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    iVar3 = FUN_005596e0();
    if ((iVar3 == 0) || (iVar1 != 1)) {
      if (iVar1 == 2) {
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}

