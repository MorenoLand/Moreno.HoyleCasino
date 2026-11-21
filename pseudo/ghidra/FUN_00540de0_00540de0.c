// FUN_00540de0  00540de0

undefined4 FUN_00540de0(undefined4 param_1)

{
  char cVar1;
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (2 < local_8) {
      return 0;
    }
    cVar1 = FUN_005cb7d0(param_1,0);
    if (cVar1 != '\0') break;
    local_8 = local_8 + 1;
  }
  return 1;
}

