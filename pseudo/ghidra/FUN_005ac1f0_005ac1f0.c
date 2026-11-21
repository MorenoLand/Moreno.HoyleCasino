// FUN_005ac1f0  005ac1f0

int __thiscall FUN_005ac1f0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) == 4) {
    iVar1 = FUN_005a7460(*(undefined4 *)(param_1 + 4),param_2,0);
    iVar1 = iVar1 + 2;
  }
  else {
    iVar1 = FUN_005a7460(*(undefined4 *)(param_1 + 4),param_2,0);
    iVar1 = iVar1 + -0x13;
  }
  return iVar1;
}

