// FUN_00670520  00670520

void __thiscall FUN_00670520(int param_1,int param_2,char param_3)

{
  char cVar1;
  undefined4 uVar2;
  int local_10;
  int local_c;
  
  if (param_3 == '\0') {
    cVar1 = FUN_00634560(param_2);
    if (cVar1 == '\0') {
      if (*(int *)(param_1 + 4 + param_2 * 4) + -1 < 0) {
        local_c = 0;
      }
      else {
        local_c = *(int *)(param_1 + 4 + param_2 * 4) + -1;
      }
      local_10 = local_c;
      goto LAB_00670587;
    }
  }
  local_10 = *(int *)(param_1 + 4 + param_2 * 4) + 1;
LAB_00670587:
  *(int *)(param_1 + 4 + param_2 * 4) = local_10;
  uVar2 = FUN_00634310(param_2,param_3);
  FUN_00670380(uVar2);
  return;
}

