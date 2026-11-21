// FUN_005986c0  005986c0

undefined4 FUN_005986c0(void)

{
  int iVar1;
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (4 < local_8) {
      return 1;
    }
    iVar1 = FUN_005983c0(local_8);
    if (0 < iVar1) break;
    local_8 = local_8 + 1;
  }
  return 0;
}

