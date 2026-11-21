// FUN_0040e2a0  0040e2a0

int __thiscall FUN_0040e2a0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) == 4) {
    iVar1 = FUN_0040d330(*(undefined4 *)(param_1 + 4),param_2,0);
    iVar1 = iVar1 + 2;
  }
  else {
    iVar1 = FUN_0040d330(*(undefined4 *)(param_1 + 4),param_2,0);
    iVar1 = iVar1 + -0x13;
  }
  return iVar1;
}

