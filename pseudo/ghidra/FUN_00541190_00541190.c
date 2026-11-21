// FUN_00541190  00541190

int FUN_00541190(void)

{
  int iVar1;
  int iVar2;
  int local_1c [6];
  
  local_1c[0] = 2;
  local_1c[1] = 0;
  local_1c[2] = 1;
  local_1c[3] = 3;
  local_1c[4] = 4;
  local_1c[5] = 0;
  while( true ) {
    if (4 < local_1c[5]) {
      return -1;
    }
    if ((local_1c[local_1c[5]] == 4) && (iVar1 = FUN_00540c30(local_1c[local_1c[5]]), iVar1 < 3))
    break;
    iVar1 = FUN_005dcb00(local_1c[local_1c[5]]);
    if ((*(char *)(iVar1 + 0x4a0) != '\0') &&
       (iVar1 = FUN_00540c30(local_1c[local_1c[5]]), iVar1 < 3)) {
      iVar1 = FUN_00540c30(local_1c[local_1c[5]]);
      iVar2 = FUN_00541110();
      if (iVar1 == iVar2) {
        return local_1c[local_1c[5]];
      }
    }
    local_1c[5] = local_1c[5] + 1;
  }
  return local_1c[local_1c[5]];
}

