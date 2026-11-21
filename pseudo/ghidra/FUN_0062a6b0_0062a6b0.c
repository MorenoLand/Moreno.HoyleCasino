// FUN_0062a6b0  0062a6b0

void __thiscall FUN_0062a6b0(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 1) {
    iVar1 = FUN_0062a630();
    if (*(int *)(param_1 + 0x5c) <= iVar1 - *(int *)(param_1 + 100)) {
      iVar1 = FUN_0062a630();
      FUN_0062a520(iVar1 - *(int *)(param_1 + 100));
    }
  }
  else {
    iVar1 = FUN_0062a630();
    if (iVar1 + *(int *)(param_1 + 100) <= *(int *)(param_1 + 0x60)) {
      iVar1 = FUN_0062a630();
      FUN_0062a520(iVar1 + *(int *)(param_1 + 100));
    }
  }
  return;
}

