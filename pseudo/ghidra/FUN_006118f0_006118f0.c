// FUN_006118f0  006118f0

undefined4 __thiscall FUN_006118f0(int *param_1,int *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return CONCAT31((int3)((uint)param_1[1] >> 8),param_1[1] == param_2[1]);
}

