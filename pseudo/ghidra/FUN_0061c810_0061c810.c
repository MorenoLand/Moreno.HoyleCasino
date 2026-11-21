// FUN_0061c810  0061c810

void FUN_0061c810(int param_1,short *param_2,int *param_3,int *param_4)

{
  void *pvVar1;
  short *psVar2;
  int local_c;
  
  *param_4 = param_1 + 8;
  psVar2 = (short *)(param_1 + 0x308);
  param_1 = param_1 + 0x30a;
  *param_2 = *psVar2;
  pvVar1 = operator_new(-(uint)((int)((ulonglong)(uint)(int)*param_2 * 8 >> 0x20) != 0) |
                        (uint)((ulonglong)(uint)(int)*param_2 * 8));
  *param_3 = (int)pvVar1;
  for (local_c = 0; local_c < *param_2; local_c = local_c + 1) {
    FUN_0061c8f0(&param_1,*param_3 + local_c * 8,local_c);
  }
  return;
}

