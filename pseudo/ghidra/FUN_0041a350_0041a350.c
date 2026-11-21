// FUN_0041a350  0041a350

undefined4 FUN_0041a350(void)

{
  int iVar1;
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (4 < local_8) {
      return 1;
    }
    iVar1 = FUN_00419610(local_8);
    if (iVar1 != 0) break;
    local_8 = local_8 + 1;
  }
  return 0;
}

