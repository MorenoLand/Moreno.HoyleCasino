// FUN_0061f2d0  0061f2d0

undefined4 __thiscall FUN_0061f2d0(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((param_2 < 0) || (4 < param_2)) {
    uVar1 = 0;
  }
  else if (*(int *)(param_1 + 0xc + param_2 * 8) == 0) {
    uVar1 = 0;
  }
  else {
    memset((void *)(param_1 + 8 + param_2 * 8),0,8);
    uVar1 = 1;
  }
  return uVar1;
}

