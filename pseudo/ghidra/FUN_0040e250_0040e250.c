// FUN_0040e250  0040e250

int __thiscall FUN_0040e250(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) == 4) {
    iVar1 = FUN_0040d0f0(*(undefined4 *)(param_1 + 4),param_2,0);
    iVar1 = iVar1 + -0x1b;
  }
  else {
    iVar1 = FUN_0040d0f0(*(undefined4 *)(param_1 + 4),param_2,0);
    iVar1 = iVar1 + -1;
  }
  return iVar1;
}

