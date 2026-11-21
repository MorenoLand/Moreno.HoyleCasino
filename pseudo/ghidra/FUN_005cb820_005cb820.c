// FUN_005cb820  005cb820

int FUN_005cb820(undefined4 param_1)

{
  char cVar1;
  int local_c;
  int local_8;
  
  local_8 = 0;
  for (local_c = 0; local_c < 4; local_c = local_c + 1) {
    cVar1 = FUN_005cb7d0(param_1,local_c);
    if (cVar1 != '\0') {
      local_8 = local_8 + 1;
    }
  }
  return local_8;
}

