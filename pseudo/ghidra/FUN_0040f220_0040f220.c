// FUN_0040f220  0040f220

int * __thiscall FUN_0040f220(int param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  int local_c;
  
  iVar1 = *(int *)(param_1 + 0x178) + 0x48 + param_3 * 0x20;
  local_c = *(int *)(iVar1 + param_4 * 8);
  iVar1 = *(int *)(iVar1 + 4 + param_4 * 8);
  if ((param_3 < 4) && (*(char *)(DAT_00790324 + 0x10c + param_3 * 0x118 + param_4) != '\0')) {
    local_c = local_c / 2;
  }
  *param_2 = local_c;
  param_2[1] = iVar1;
  return param_2;
}

