// FUN_004198d0  004198d0

int __thiscall FUN_004198d0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 local_18;
  undefined4 local_10;
  undefined4 local_8;
  
  if (param_3 == -1) {
    if (param_2 == -1) {
      param_3 = -1;
    }
    else {
      if (param_2 == 4) {
        local_18 = 0;
      }
      else {
        local_18 = (int)*(char *)(param_1 + 0x119 + param_2 * 0x118);
      }
      param_3 = local_18;
    }
  }
  local_10 = 0;
  iVar1 = FUN_00419530(param_2,param_3);
  for (local_8 = 0; local_8 < iVar1; local_8 = local_8 + 1) {
    iVar2 = FUN_00419780(param_2,param_3,local_8);
    local_10 = iVar2 + local_10;
  }
  return local_10;
}

