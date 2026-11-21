// FUN_00571d30  00571d30

void __thiscall FUN_00571d30(int param_1,int param_2)

{
  short local_8;
  
  for (local_8 = 0; local_8 < 7; local_8 = local_8 + 1) {
    if (*(int *)(param_1 + 0x18 + local_8 * 4) == param_2) {
      return;
    }
    if (*(int *)(param_1 + 0x18 + local_8 * 4) == -1) break;
  }
  *(int *)(param_1 + 0x18 + local_8 * 4) = param_2;
  return;
}

