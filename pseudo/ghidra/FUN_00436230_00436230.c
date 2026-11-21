// FUN_00436230  00436230

undefined4 __thiscall FUN_00436230(int param_1,int param_2)

{
  int local_8;
  
  if (*(int *)(param_1 + 0xac4) == 0) {
    for (local_8 = 0; local_8 < 0x4c; local_8 = local_8 + 1) {
      if (0 < *(int *)(param_1 + 0x134 + param_2 * 0x260 + local_8 * 8)) {
        return 1;
      }
    }
  }
  return 0;
}

