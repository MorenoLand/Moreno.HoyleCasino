// FUN_005a2690  005a2690

int FUN_005a2690(undefined4 param_1)

{
  short sVar1;
  int local_c;
  int local_8;
  
  local_8 = 0;
  for (local_c = 0; local_c < 3; local_c = local_c + 1) {
    sVar1 = FUN_005a26f0(param_1,local_c);
    if (sVar1 != 0) {
      local_8 = local_8 + 1;
    }
  }
  return local_8;
}

