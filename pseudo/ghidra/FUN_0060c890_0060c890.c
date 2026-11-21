// FUN_0060c890  0060c890

void __thiscall FUN_0060c890(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_0060cac0(param_2);
  if (iVar1 != -1) {
    memmove((void *)(*(int *)(param_1 + 0xc) + iVar1 * 4),
            (void *)(*(int *)(param_1 + 0xc) + 4 + iVar1 * 4),
            (*(int *)(param_1 + 4) - iVar1) * 4 - 4);
    *(undefined4 *)(*(int *)(param_1 + 0xc) + -4 + *(int *)(param_1 + 4) * 4) = 0;
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
  }
  return;
}

