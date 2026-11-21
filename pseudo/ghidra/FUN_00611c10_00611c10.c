// FUN_00611c10  00611c10

int __fastcall FUN_00611c10(int *param_1)

{
  if (*param_1 == 0) {
    _invalid_parameter_noinfo();
  }
  if (*(uint *)(*param_1 + 8) <= (uint)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}

