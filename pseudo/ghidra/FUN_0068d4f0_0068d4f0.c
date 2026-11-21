// FUN_0068d4f0  0068d4f0

int __fastcall FUN_0068d4f0(int *param_1)

{
  if (*param_1 == 0) {
    _invalid_parameter_noinfo();
  }
  if (param_1[1] == *(int *)(*param_1 + 4)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0xc;
}

