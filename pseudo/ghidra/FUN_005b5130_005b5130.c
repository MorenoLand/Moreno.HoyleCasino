// FUN_005b5130  005b5130

int * __thiscall FUN_005b5130(int param_1,int *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int local_c;
  
  piVar1 = (int *)(*(int *)(param_1 + 0x580 + param_3 * 4) + 0x48 + param_3 * 0x20);
  local_c = *piVar1;
  iVar2 = piVar1[1];
  cVar3 = FUN_005b60a0(param_3,0);
  if (cVar3 != '\0') {
    local_c = local_c / 2;
  }
  *param_2 = local_c;
  param_2[1] = iVar2;
  return param_2;
}

