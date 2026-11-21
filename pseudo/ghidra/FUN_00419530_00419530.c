// FUN_00419530  00419530

int __thiscall FUN_00419530(int param_1,int param_2,int param_3)

{
  short sVar1;
  int local_14;
  int local_c;
  int local_8;
  
  local_c = 0;
  if (param_3 == -1) {
    if (param_2 == -1) {
      param_3 = -1;
    }
    else {
      if (param_2 == 4) {
        local_14 = 0;
      }
      else {
        local_14 = (int)*(char *)(param_1 + 0x119 + param_2 * 0x118);
      }
      param_3 = local_14;
    }
  }
  if (param_2 == 4) {
    for (local_8 = 0; local_8 < 0xf; local_8 = local_8 + 1) {
      sVar1 = FUN_004193d0(4,0,local_8);
      if (sVar1 != 0) {
        local_c = local_c + 1;
      }
    }
  }
  else {
    for (local_8 = 0; local_8 < 0x16; local_8 = local_8 + 1) {
      sVar1 = FUN_004193d0(param_2,param_3,local_8);
      if (sVar1 != 0) {
        local_c = local_c + 1;
      }
    }
  }
  return local_c;
}

