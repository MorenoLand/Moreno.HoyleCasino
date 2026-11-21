// FUN_00559130  00559130

undefined1 __fastcall FUN_00559130(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 4) == 0) {
    FUN_005dcb00(0);
    iVar1 = FUN_005d5a50();
    iVar2 = FUN_005d0aa0();
    if (iVar1 < iVar2) {
      return 0;
    }
  }
  return 1;
}

