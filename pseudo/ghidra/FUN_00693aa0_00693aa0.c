// FUN_00693aa0  00693aa0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00693aa0(float param_1,float param_2)

{
  if (param_1 <= (float)_DAT_006b2c50) {
    if (param_2 < (float)_DAT_006b2c50) {
      return -SQRT((float10)param_2 * (float10)param_2 + (float10)param_1 * (float10)param_1);
    }
    if ((float10)param_2 < -(float10)param_1) {
      return -SQRT((float10)param_1 * (float10)param_1 - (float10)param_2 * (float10)param_2);
    }
    return SQRT((float10)param_2 * (float10)param_2 - (float10)param_1 * (float10)param_1);
  }
  if ((float)_DAT_006b2c50 < param_2) {
    return SQRT((float10)param_2 * (float10)param_2 + (float10)param_1 * (float10)param_1);
  }
  if (-param_2 < param_1) {
    return SQRT((float10)param_1 * (float10)param_1 - (float10)param_2 * (float10)param_2);
  }
  return -SQRT((float10)param_2 * (float10)param_2 - (float10)param_1 * (float10)param_1);
}

