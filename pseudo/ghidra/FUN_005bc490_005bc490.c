// FUN_005bc490  005bc490

int * __thiscall
FUN_005bc490(int param_1,int *param_2,int param_3,int param_4,int param_5,int param_6)

{
  undefined4 uVar1;
  
  if ((param_3 == 0) || (param_3 != param_5)) {
    _invalid_parameter_noinfo();
  }
  if (param_4 != param_6) {
    uVar1 = FUN_005c0980(param_6,*(undefined4 *)(param_1 + 8),param_4);
    *(undefined4 *)(param_1 + 8) = uVar1;
  }
  *param_2 = param_3;
  param_2[1] = param_4;
  return param_2;
}

