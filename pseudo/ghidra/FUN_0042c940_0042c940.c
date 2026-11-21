// FUN_0042c940  0042c940

undefined1 FUN_0042c940(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_005cc2e0();
  if (0 < *(int *)(iVar1 + 0x48 + param_1 * 0x20 + param_2 * 8)) {
    FUN_005cc2e0();
    iVar1 = FUN_005f5400();
    if (0x30 < iVar1) {
      FUN_005cc2e0();
      iVar1 = FUN_005f5400();
      if (iVar1 < 0x3d) {
        return 1;
      }
    }
  }
  return 0;
}

