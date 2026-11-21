// FUN_0041b990  0041b990

bool __thiscall FUN_0041b990(int param_1,int param_2,int param_3)

{
  int iVar1;
  int local_c;
  
  if (param_3 == -1) {
    if (param_2 == -1) {
      param_3 = -1;
    }
    else {
      if (param_2 == 4) {
        local_c = 0;
      }
      else {
        local_c = (int)*(char *)(param_1 + 0x119 + param_2 * 0x118);
      }
      param_3 = local_c;
    }
  }
  iVar1 = FUN_00419980(param_2,param_3);
  return 0x15 < iVar1;
}

