// FUN_0043b250  0043b250

undefined4 FUN_0043b250(void)

{
  char cVar1;
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (0x4b < local_8) {
      return 0;
    }
    cVar1 = FUN_0043b220(local_8);
    if (cVar1 != '\0') break;
    local_8 = local_8 + 1;
  }
  return 1;
}

