// FUN_005a9620  005a9620

int * __thiscall FUN_005a9620(int param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  char cVar2;
  int local_c;
  
  iVar1 = *(int *)(param_1 + 0x178) + 0x48 + param_3 * 0x20;
  local_c = *(int *)(iVar1 + param_4 * 8);
  iVar1 = *(int *)(iVar1 + 4 + param_4 * 8);
  if (*(int *)(param_1 + 0xcc0) == 0x65) {
    *param_2 = local_c;
    param_2[1] = iVar1;
  }
  else {
    if (param_3 < 4) {
      cVar2 = FUN_005b60a0(param_3,param_4);
      if (cVar2 != '\0') {
        local_c = local_c / 2;
      }
    }
    *param_2 = local_c;
    param_2[1] = iVar1;
  }
  return param_2;
}

