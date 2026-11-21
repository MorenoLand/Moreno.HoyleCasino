// FUN_0054c8a0  0054c8a0

int FUN_0054c8a0(void)

{
  int iVar1;
  int local_8;
  
  local_8 = 2;
  while( true ) {
    if (0xe < local_8) {
      return 0;
    }
    iVar1 = FUN_0054cf20(local_8);
    if (iVar1 == 2) break;
    local_8 = local_8 + 1;
  }
  return local_8;
}

