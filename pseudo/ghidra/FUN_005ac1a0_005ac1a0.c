// FUN_005ac1a0  005ac1a0

int __thiscall FUN_005ac1a0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) == 4) {
    iVar1 = FUN_005a7240(*(undefined4 *)(param_1 + 4),param_2,0);
    iVar1 = iVar1 + -0x1b;
  }
  else {
    iVar1 = FUN_005a7240(*(undefined4 *)(param_1 + 4),param_2,0);
    iVar1 = iVar1 + -1;
  }
  return iVar1;
}

