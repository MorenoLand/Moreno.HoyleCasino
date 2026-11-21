// FUN_005b9fd0  005b9fd0

int * __thiscall FUN_005b9fd0(int param_1,int *param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 4);
  *param_2 = 0;
  if (((param_1 == 0) || (uVar1 < *(uint *)(param_1 + 4))) || (*(uint *)(param_1 + 8) < uVar1)) {
    _invalid_parameter_noinfo();
  }
  *param_2 = param_1;
  param_2[1] = uVar1;
  return param_2;
}

