// FUN_005b6700  005b6700

undefined4 __thiscall FUN_005b6700(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((*(int *)(param_1 + 0x590 + param_2 * 8) < 1) && (*(int *)(param_1 + 0x644 + param_2 * 8) < 1)
     ) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

