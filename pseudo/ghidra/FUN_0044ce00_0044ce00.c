// FUN_0044ce00  0044ce00

int FUN_0044ce00(undefined4 param_1)

{
  short sVar1;
  int local_c;
  int local_8;
  
  local_c = 0;
  for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
    sVar1 = FUN_0044cd70(param_1,local_8);
    if (sVar1 != 0) {
      local_c = local_c + 1;
    }
  }
  return local_c;
}

