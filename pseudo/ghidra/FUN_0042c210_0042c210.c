// FUN_0042c210  0042c210

int __thiscall FUN_0042c210(int param_1,int param_2)

{
  int iVar1;
  int local_14 [4];
  
  local_14[0] = 3;
  local_14[1] = 2;
  local_14[2] = 1;
  local_14[3] = 0;
  if ((*(int *)(param_1 + 0xb0c) < 0xf) || (0x15 < *(int *)(param_1 + 0xb0c))) {
    if ((*(int *)(param_1 + 0xb0c) < 0x19) || (0x1f < *(int *)(param_1 + 0xb0c))) {
      iVar1 = *(int *)(&DAT_007105bc + local_14[param_2] * 8 + *(int *)(param_1 + 0xb0c) * 0x20) +
              -0x2d;
    }
    else {
      iVar1 = *(int *)(&DAT_00710eac + *(int *)(param_1 + 0xb0c) * 8) + -0x2d;
    }
  }
  else {
    iVar1 = *(int *)(&DAT_00710ec4 + *(int *)(param_1 + 0xb0c) * 8) + -0x2d;
  }
  return iVar1;
}

