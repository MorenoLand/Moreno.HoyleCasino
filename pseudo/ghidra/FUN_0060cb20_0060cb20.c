// FUN_0060cb20  0060cb20

void __thiscall FUN_0060cb20(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_0060cac0(param_2);
  if (-1 < iVar1) {
    if (*(int *)(param_1 + 4) == *(int *)(param_1 + 8)) {
      FUN_0060c720();
    }
    memmove((void *)(*(int *)(param_1 + 0xc) + 8 + iVar1 * 4),
            (void *)(*(int *)(param_1 + 0xc) + 4 + iVar1 * 4),
            (*(int *)(param_1 + 4) - iVar1) * 4 - 4);
    *(undefined4 *)(*(int *)(param_1 + 0xc) + 4 + iVar1 * 4) = param_3;
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  }
  return;
}

