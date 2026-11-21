// FUN_004fe1e0  004fe1e0

bool FUN_004fe1e0(undefined4 param_1)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = FUN_0047ce60();
  if (iVar1 == 3) {
    if ((*(int *)(DAT_007926f8 + 0x400) == 2) || (*(int *)(DAT_007926f8 + 0x400) == 3)) {
      iVar1 = FUN_0062fbf0(param_1);
      if (1 < iVar1) {
        return false;
      }
    }
    else {
      iVar1 = FUN_0062fbf0(param_1);
      if (iVar1 != 0) {
        return false;
      }
    }
    bVar2 = true;
  }
  else {
    iVar1 = FUN_0047ce60();
    if (iVar1 == 4) {
      iVar1 = FUN_0062fbf0(param_1);
      bVar2 = iVar1 == 0;
    }
    else {
      iVar1 = FUN_0062fbf0(param_1);
      bVar2 = iVar1 == 0;
    }
  }
  return bVar2;
}

