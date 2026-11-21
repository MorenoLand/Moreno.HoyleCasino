// FUN_0068e850  0068e850

int * __thiscall
FUN_0068e850(int param_1,int *param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  undefined1 local_24 [8];
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_8 = **(int **)(param_1 + 4);
  local_c = 0;
  if (param_1 == 0) {
    _invalid_parameter_noinfo();
  }
  local_c = param_1;
  if ((param_3 == 0) || (param_3 != param_1)) {
    _invalid_parameter_noinfo();
  }
  if (param_4 == local_8) {
    local_10 = *(int *)(param_1 + 4);
    local_14 = 0;
    if (param_1 == 0) {
      _invalid_parameter_noinfo();
    }
    local_14 = param_1;
    if ((param_5 == 0) || (param_5 != param_1)) {
      _invalid_parameter_noinfo();
    }
    if (param_6 == local_10) {
      FUN_0068f520();
      iVar1 = **(int **)(param_1 + 4);
      *param_2 = 0;
      param_2[1] = iVar1;
      if (param_1 == 0) {
        _invalid_parameter_noinfo();
      }
      *param_2 = param_1;
      return param_2;
    }
  }
  while( true ) {
    if ((param_3 == 0) || (param_3 != param_5)) {
      _invalid_parameter_noinfo();
    }
    if (param_4 == param_6) break;
    FUN_0068edc0();
    local_1c = param_3;
    local_18 = param_4;
    FUN_0068ef90(local_24,param_3,param_4);
  }
  *param_2 = param_3;
  param_2[1] = param_4;
  return param_2;
}

