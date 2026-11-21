// FUN_0044d380  0044d380

int FUN_0044d380(void)

{
  int iVar1;
  int iVar2;
  int local_18 [5];
  
  local_18[0] = 2;
  local_18[1] = 0;
  local_18[2] = 1;
  local_18[3] = 3;
  local_18[4] = 0;
  do {
    if (3 < local_18[4]) {
      return -1;
    }
    iVar1 = FUN_005dcb00(local_18[local_18[4]]);
    if ((*(char *)(iVar1 + 0x4a0) != '\0') &&
       (iVar1 = FUN_0044ce00(local_18[local_18[4]]), iVar1 < 3)) {
      iVar1 = FUN_0044ce00(local_18[local_18[4]]);
      iVar2 = FUN_0044d300();
      if (iVar1 == iVar2) {
        return local_18[local_18[4]];
      }
    }
    local_18[4] = local_18[4] + 1;
  } while( true );
}

