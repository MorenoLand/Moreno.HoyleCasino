// FUN_00438990  00438990

uint __fastcall FUN_00438990(int param_1)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0);
  if ((4 < (int)uVar1) &&
     (uVar1 = *(uint *)(param_1 + 0xad0), (int)(*(int *)(param_1 + 0xacc) + uVar1) < 9)) {
    return uVar1 & 0xffffff00;
  }
  return CONCAT31((int3)(uVar1 >> 8),1);
}

