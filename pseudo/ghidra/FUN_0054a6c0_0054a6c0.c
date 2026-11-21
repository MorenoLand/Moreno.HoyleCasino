// FUN_0054a6c0  0054a6c0

undefined4 __thiscall FUN_0054a6c0(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = FUN_00549e80(param_2,1);
  if ((iVar2 == 0x15) && (iVar2 = FUN_00548f80(param_2), iVar2 == 2)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((param_2 == 1) || (param_2 == 2)) {
    if ((bVar1) && (*(char *)(param_1 + 0x24) == '\0')) {
      return 1;
    }
  }
  else if (bVar1) {
    return 1;
  }
  return 0;
}

