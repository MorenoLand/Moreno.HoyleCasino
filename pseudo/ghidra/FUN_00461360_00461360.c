// FUN_00461360  00461360

int FUN_00461360(undefined4 param_1,short param_2)

{
  short sVar1;
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (6 < local_8) {
      return -1;
    }
    sVar1 = FUN_004604d0(param_1,local_8);
    if (sVar1 == param_2) break;
    local_8 = local_8 + 1;
  }
  return local_8;
}

