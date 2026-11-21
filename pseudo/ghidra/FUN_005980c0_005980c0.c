// FUN_005980c0  005980c0

int FUN_005980c0(void)

{
  int iVar1;
  int iVar2;
  int local_1c;
  int local_18 [5];
  
  local_18[0] = 2;
  local_18[1] = 0;
  local_18[2] = 1;
  local_18[3] = 3;
  local_18[4] = 4;
  local_1c = 0;
  do {
    if (4 < local_1c) {
      return -1;
    }
    if (local_18[local_1c] == 4) {
      iVar1 = FUN_005983c0(local_18[local_1c]);
      iVar2 = FUN_00597fd0();
      if (iVar1 < iVar2) goto LAB_00598194;
    }
    iVar1 = FUN_005dcb00(local_18[local_1c]);
    if (*(char *)(iVar1 + 0x4a0) != '\0') {
      iVar1 = FUN_005983c0(local_18[local_1c]);
      iVar2 = FUN_00597fd0();
      if (iVar1 < iVar2) {
        iVar1 = FUN_005983c0(local_18[local_1c]);
        iVar2 = FUN_00597f30();
        if (iVar1 == iVar2) {
LAB_00598194:
          return local_18[local_1c];
        }
      }
    }
    local_1c = local_1c + 1;
  } while( true );
}

