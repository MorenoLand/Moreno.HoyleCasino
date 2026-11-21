// FUN_005ba570  005ba570

/* WARNING: Removing unreachable block (ram,0x005ba60c) */

int * __thiscall
FUN_005ba570(int param_1,int *param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  int local_58;
  
  if ((param_3 == 0) || (param_3 != param_5)) {
    _invalid_parameter_noinfo();
  }
  if (param_4 != param_6) {
    iVar2 = FUN_005bbb00(param_6,*(undefined4 *)(param_1 + 8),param_4);
    iVar1 = *(int *)(param_1 + 8);
    for (local_58 = iVar2; local_58 != iVar1; local_58 = local_58 + 0x10) {
      FUN_005be450();
    }
    *(int *)(param_1 + 8) = iVar2;
  }
  *param_2 = param_3;
  param_2[1] = param_4;
  return param_2;
}

