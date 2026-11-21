// FUN_00694480  00694480

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00694480(float param_1,float param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  int iVar3;
  
  iVar3 = (uint)(ABS(*param_4) < ABS(*param_3)) - (uint)(ABS(*param_3) < ABS(*param_4));
  if (iVar3 == 0) {
    iVar3 = (uint)(ABS(param_2) < ABS(param_1)) * 2 + -1;
  }
  if (iVar3 == 1) {
    if (*param_3 <= _DAT_006c2fe8) {
      *param_4 = *param_4 - *param_3;
    }
    else {
      *param_4 = *param_3 - *param_4;
    }
  }
  else {
    fVar1 = *param_4;
    if (*param_4 <= _DAT_006c2fe8) {
      fVar2 = *param_4 - *param_3;
    }
    else {
      fVar2 = *param_3 - *param_4;
    }
    *param_4 = fVar2;
    *param_3 = fVar1;
  }
  if (ABS(*param_3) * (float)_DAT_006e57b8 < *param_4) {
    *param_4 = ABS(*param_3) * (float)_DAT_006d7e38;
    *param_3 = -*param_3;
    return;
  }
  return;
}

