// FUN_004830e0  004830e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004830e0(double *param_1,double *param_2,int param_3,int param_4,int param_5,int param_6,
                 int *param_7)

{
  double dVar1;
  int local_10;
  int local_c;
  
  *param_2 = (double)param_4 + *param_2;
  local_c = 1;
  if (0 < *param_7) {
    *param_2 = (double)*param_7 + *param_2;
    local_c = 2;
  }
  if ((param_3 == 2) && (0 < param_7[1])) {
    *param_2 = (double)param_7[1] + *param_2;
    local_c = local_c + 1;
  }
  for (local_10 = 0; local_10 < 6; local_10 = local_10 + 1) {
    *param_2 = (double)(*(int *)(&DAT_0071e3c8 +
                                local_10 * 4 + (param_3 + -2) * 0x18 + param_5 * 0x30) * param_6) /
               _DAT_006bc208 + *param_2;
    local_c = local_c + 1;
  }
  *param_2 = *param_2 / (double)local_c;
  *param_1 = *param_1 + ((double)param_4 - *param_2) * ((double)param_4 - *param_2);
  if (0 < *param_7) {
    *param_1 = *param_1 + ((double)*param_7 - *param_2) * ((double)*param_7 - *param_2);
  }
  if ((param_3 == 2) && (0 < param_7[1])) {
    *param_1 = *param_1 + ((double)param_7[1] - *param_2) * ((double)param_7[1] - *param_2);
  }
  for (local_10 = 0; local_10 < 6; local_10 = local_10 + 1) {
    dVar1 = (double)(*(int *)(&DAT_0071e3c8 + local_10 * 4 + (param_3 + -2) * 0x18 + param_5 * 0x30)
                    * param_6) / _DAT_006bc208 - *param_2;
    *param_1 = *param_1 + dVar1 * dVar1;
  }
  *param_1 = *param_1 / (double)local_c;
  dVar1 = sqrt(*param_1);
  *param_1 = dVar1;
  return;
}

