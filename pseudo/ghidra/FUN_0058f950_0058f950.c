// FUN_0058f950  0058f950

void __fastcall FUN_0058f950(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_005e10d0();
  FUN_0058fb90();
  FUN_0058fb90();
  if (*(int *)(param_1 + 0x14c) != *(int *)(param_1 + 0x150)) {
    if (*(int *)(param_1 + 0x154 + *(int *)(*(int *)(param_1 + 0x174) + 0x3c08) * 4) ==
        *(int *)(param_1 + 0x14c)) {
      FUN_0058fb90();
    }
    else {
      FUN_0058fbc0();
    }
    if ((*(int *)(param_1 + 0x154 + *(int *)(*(int *)(param_1 + 0x174) + 0x3c08) * 4) ==
         *(int *)(param_1 + 0x150)) ||
       (*(int *)(param_1 + 0x154 + *(int *)(*(int *)(param_1 + 0x174) + 0x3c08) * 4) ==
        *(int *)(param_1 + 0x150) + -1000)) {
      FUN_0058fb90();
    }
    else if (((iVar1 < *(int *)(param_1 + 0x14c)) || (*(int *)(param_1 + 0x150) < iVar1)) &&
            ((iVar1 + 1000 < *(int *)(param_1 + 0x14c) || (*(int *)(param_1 + 0x150) < iVar1 + 1000)
             ))) {
      FUN_0058fbc0();
    }
    else if (*(int *)(param_1 + 0x154 + *(int *)(*(int *)(param_1 + 0x174) + 0x3c08) * 4) == iVar1)
    {
      FUN_0058fb90();
    }
    else {
      FUN_0058fbc0();
    }
  }
  return;
}

