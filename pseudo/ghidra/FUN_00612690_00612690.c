// FUN_00612690  00612690

int * __thiscall FUN_00612690(int *param_1,uint param_2,int param_3)

{
  *param_1 = 0;
  if (((param_3 == 0) || (param_2 < *(uint *)(param_3 + 4))) || (*(uint *)(param_3 + 8) < param_2))
  {
    _invalid_parameter_noinfo();
  }
  *param_1 = param_3;
  param_1[1] = param_2;
  return param_1;
}

