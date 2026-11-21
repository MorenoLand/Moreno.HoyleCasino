// FUN_00419980  00419980

void __thiscall FUN_00419980(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 local_c;
  
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
  iVar1 = FUN_004197d0(param_2,param_3);
  if (iVar1 < 0x16) {
    FUN_004197d0(param_2,param_3);
  }
  else {
    FUN_004198d0(param_2,param_3);
  }
  return;
}

