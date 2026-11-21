// FUN_0041a2d0  0041a2d0

int * __thiscall FUN_0041a2d0(int param_1,int *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int local_c;
  
  piVar1 = (int *)(*(int *)(param_1 + 0x468 + param_3 * 4) + 0x48 + param_3 * 0x20);
  local_c = *piVar1;
  iVar2 = piVar1[1];
  if (*(char *)(param_1 + 0x10c + param_3 * 0x118) != '\0') {
    local_c = local_c / 2;
  }
  *param_2 = local_c;
  param_2[1] = iVar2;
  return param_2;
}

