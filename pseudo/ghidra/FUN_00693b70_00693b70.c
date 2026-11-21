// FUN_00693b70  00693b70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00693b70(float param_1,float param_2)

{
  float10 fVar1;
  
  if (param_1 <= (float)_DAT_006b2c50) {
    if ((param_2 < (float)_DAT_006b2c50) || (param_2 < -param_1)) {
      return -SQRT((float10)param_2 * (float10)param_2 + (float10)param_1 * (float10)param_1);
    }
  }
  else if (param_2 <= (float)_DAT_006b2c50) {
    fVar1 = (float10)param_2 * (float10)param_2 + (float10)param_1 * (float10)param_1;
    if (param_1 <= -param_2) {
      return -SQRT(fVar1);
    }
    goto LAB_00693bff;
  }
  fVar1 = (float10)param_2 * (float10)param_2 + (float10)param_1 * (float10)param_1;
LAB_00693bff:
  return SQRT(fVar1);
}

