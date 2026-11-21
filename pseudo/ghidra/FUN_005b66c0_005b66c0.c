// FUN_005b66c0  005b66c0

undefined4 FUN_005b66c0(void)

{
  int iVar1;
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (3 < local_8) {
      return 1;
    }
    iVar1 = FUN_005b5ff0(local_8);
    if (0 < iVar1) break;
    local_8 = local_8 + 1;
  }
  return 0;
}

