// FUN_00549470  00549470

void __fastcall FUN_00549470(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((*(int *)(param_1 + 4) == 0) && (*(int *)(param_1 + 8) == 0)) {
    FUN_005dcb00(0);
    iVar1 = FUN_005d5a50();
    iVar2 = FUN_005d0aa0();
    if (iVar1 < iVar2) {
      uVar3 = FUN_005dcb00(0);
      FUN_005dbb70(uVar3);
      return;
    }
  }
  FUN_005dc2e0();
  return;
}

