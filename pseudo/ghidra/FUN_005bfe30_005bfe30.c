// FUN_005bfe30  005bfe30

int * __thiscall FUN_005bfe30(int param_1,int *param_2,int param_3,int param_4,undefined4 param_5)

{
  uint uVar1;
  int local_34;
  int local_30;
  
  if (*(int *)(param_1 + 4) == 0) {
    local_30 = 0;
  }
  else {
    local_30 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2;
  }
  if (local_30 == 0) {
    local_34 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 4);
    if (((param_1 == 0) || (uVar1 < *(uint *)(param_1 + 4))) || (*(uint *)(param_1 + 8) < uVar1)) {
      _invalid_parameter_noinfo();
    }
    if ((param_3 == 0) || (param_3 != param_1)) {
      _invalid_parameter_noinfo();
    }
    local_34 = (int)(param_4 - uVar1) >> 2;
  }
  FUN_005bff60(param_3,param_4,1,param_5);
  uVar1 = *(uint *)(param_1 + 4);
  if (((param_1 == 0) || (uVar1 < *(uint *)(param_1 + 4))) || (*(uint *)(param_1 + 8) < uVar1)) {
    _invalid_parameter_noinfo();
  }
  FUN_005beeb0(local_34);
  *param_2 = param_1;
  param_2[1] = uVar1;
  return param_2;
}

