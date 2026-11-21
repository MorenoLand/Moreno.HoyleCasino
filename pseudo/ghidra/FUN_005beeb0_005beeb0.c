// FUN_005beeb0  005beeb0

int * __thiscall FUN_005beeb0(int *param_1,int param_2)

{
  if (*param_1 == 0) {
    _invalid_parameter_noinfo();
  }
  if ((*(uint *)(*param_1 + 8) < (uint)(param_1[1] + param_2 * 4)) ||
     ((uint)(param_1[1] + param_2 * 4) < *(uint *)(*param_1 + 4))) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + param_2 * 4;
  return param_1;
}

