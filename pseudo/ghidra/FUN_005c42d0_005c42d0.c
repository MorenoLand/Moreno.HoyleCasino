// FUN_005c42d0  005c42d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005c42d0(int *param_1,int param_2)

{
  int iVar1;
  float fVar2;
  float local_18;
  
  param_1[6] = (int)(float)param_2;
  if (param_1[7] == 5) {
    fVar2 = (float)param_1[3] / *(float *)(*(int *)(*param_1 + 0x50) + 0x7c);
    iVar1 = *(int *)(*(int *)(*(int *)(*param_1 + 4) + 0x10) + 0x20 + param_1[1] * 0x7c);
    for (local_18 = (float)param_1[6] +
                    *(float *)(*(int *)(*param_1 + 0x50) + 0x7c) * fVar2 * fVar2 *
                    (float)_DAT_006b2c38; local_18 < (float)_DAT_006b2c50;
        local_18 = (float)iVar1 + local_18) {
    }
    for (; (float)iVar1 <= local_18; local_18 = local_18 - (float)iVar1) {
    }
    if ((float)param_1[2] < local_18) {
      local_18 = local_18 - (float)iVar1;
    }
    param_1[5] = (int)((local_18 - (float)param_1[2]) / (float)param_1[3]);
    if ((float)param_1[5] < (float)_DAT_006b2c50) {
      param_1[5] = 0;
    }
    param_1[5] = (int)((float)param_1[5] - (float)param_1[1] * (float)_DAT_006bc270);
  }
  return;
}

