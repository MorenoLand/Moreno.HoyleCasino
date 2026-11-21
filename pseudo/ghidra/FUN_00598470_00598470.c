// FUN_00598470  00598470

undefined4 FUN_00598470(undefined4 param_1)

{
  char cVar1;
  int local_c;
  
  local_c = 0;
  while( true ) {
    if (2 < local_c) {
      return 0;
    }
    cVar1 = FUN_005cb7d0(param_1,0);
    if (cVar1 != '\0') break;
    local_c = local_c + 1;
  }
  return 1;
}

