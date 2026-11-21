// FUN_0054a8b0  0054a8b0

undefined1 __fastcall FUN_0054a8b0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 local_18;
  
  iVar1 = *(int *)(param_1 + 4);
  iVar2 = *(int *)(param_1 + 8);
  iVar3 = FUN_005d1470();
  iVar4 = FUN_005d0aa0();
  if (((iVar1 == 0) && (iVar2 == 0)) && (iVar3 < iVar4)) {
    local_18 = 1;
  }
  else {
    local_18 = 0;
  }
  return local_18;
}

