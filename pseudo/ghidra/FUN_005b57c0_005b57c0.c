// FUN_005b57c0  005b57c0

undefined4 FUN_005b57c0(void)

{
  char cVar1;
  int local_18;
  undefined4 local_14 [4];
  
  local_14[0] = 2;
  local_14[1] = 0;
  local_14[2] = 1;
  local_14[3] = 3;
  local_18 = 0;
  while( true ) {
    if (3 < local_18) {
      return 0xffffffff;
    }
    cVar1 = FUN_005b6660(local_14[local_18]);
    if (cVar1 != '\0') break;
    local_18 = local_18 + 1;
  }
  return local_14[local_18];
}

