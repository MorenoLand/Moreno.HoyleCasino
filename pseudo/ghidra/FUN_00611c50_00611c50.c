// FUN_00611c50  00611c50

int * __fastcall FUN_00611c50(int *param_1)

{
  if (*param_1 == 0) {
    _invalid_parameter_noinfo();
  }
  if (*(uint *)(*param_1 + 8) <= (uint)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 0x48;
  return param_1;
}

