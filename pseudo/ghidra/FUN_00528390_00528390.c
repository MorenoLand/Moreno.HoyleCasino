// FUN_00528390  00528390

undefined4 FUN_00528390(void)

{
  char cVar1;
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (0xa0 < local_8) {
      return 0;
    }
    cVar1 = FUN_00528360(local_8);
    if (cVar1 != '\0') break;
    local_8 = local_8 + 1;
  }
  return 1;
}

