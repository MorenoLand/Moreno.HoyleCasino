// FUN_00434a90  00434a90

int FUN_00434a90(undefined4 param_1)

{
  char cVar1;
  int local_c;
  int local_8;
  
  local_8 = 0;
  for (local_c = 0; local_c < 4; local_c = local_c + 1) {
    cVar1 = FUN_004369a0(local_c,param_1);
    if (cVar1 != '\0') {
      local_8 = local_8 + 1;
    }
  }
  return local_8;
}

