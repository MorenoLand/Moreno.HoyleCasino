// FUN_005c55a0  005c55a0

/* WARNING: Removing unreachable block (ram,0x005c563c) */

int * __thiscall
FUN_005c55a0(int param_1,int *param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  int local_3c;
  
  if ((param_3 == 0) || (param_3 != param_5)) {
    _invalid_parameter_noinfo();
  }
  if (param_4 != param_6) {
    iVar2 = FUN_005c6270(param_6,*(undefined4 *)(param_1 + 8),param_4);
    iVar1 = *(int *)(param_1 + 8);
    for (local_3c = iVar2; local_3c != iVar1; local_3c = local_3c + 0x34) {
      FUN_005c3980();
    }
    *(int *)(param_1 + 8) = iVar2;
  }
  *param_2 = param_3;
  param_2[1] = param_4;
  return param_2;
}

