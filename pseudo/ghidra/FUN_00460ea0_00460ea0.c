// FUN_00460ea0  00460ea0

undefined4 FUN_00460ea0(void)

{
  int iVar1;
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (4 < local_8) {
      return 1;
    }
    iVar1 = FUN_00460560(local_8);
    if (iVar1 != 0) break;
    local_8 = local_8 + 1;
  }
  return 0;
}

