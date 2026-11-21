// FUN_004847b0  004847b0

undefined4 __thiscall FUN_004847b0(undefined4 param_1,int *param_2)

{
  char cVar1;
  int local_8;
  
  for (local_8 = 0; local_8 < (short)param_2[1]; local_8 = local_8 + 1) {
    cVar1 = FUN_00484ba0(*param_2 + local_8);
    if (cVar1 != '\0') {
      FUN_00484ad0(*param_2 + local_8);
    }
  }
  return param_1;
}

