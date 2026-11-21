// FUN_005bba90  005bba90

int * __thiscall FUN_005bba90(int *param_1,int param_2)

{
  if (*param_1 == 0) {
    _invalid_parameter_noinfo();
  }
  if ((*(uint *)(*param_1 + 8) < (uint)(param_2 * 0x10 + param_1[1])) ||
     ((uint)(param_2 * 0x10 + param_1[1]) < *(uint *)(*param_1 + 4))) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_2 * 0x10 + param_1[1];
  return param_1;
}

