// FUN_00461450  00461450

int __fastcall FUN_00461450(int param_1)

{
  int *piVar1;
  int iVar2;
  int local_1c [6];
  
  local_1c[0] = 3;
  local_1c[1] = 1;
  local_1c[2] = 0;
  local_1c[3] = 2;
  local_1c[4] = 4;
  local_1c[5] = 0;
  do {
    if (4 < local_1c[5]) {
      return -1;
    }
    if (local_1c[local_1c[5]] != *(int *)(DAT_00790738 + 0x10c)) {
      if ((local_1c[local_1c[5]] == 4) && (*(char *)(param_1 + 0x114) != '\0')) {
        if (*(char *)(param_1 + 0x115) == '\0') {
          return local_1c[local_1c[5]];
        }
      }
      else {
        FUN_005dcb00(local_1c[local_1c[5]]);
        piVar1 = (int *)FUN_0063aac0();
        if ((*piVar1 != 0) &&
           ((iVar2 = FUN_005dcb00(local_1c[local_1c[5]]), *(char *)(iVar2 + 0x4a1) == '\0' &&
            (iVar2 = FUN_005dcb00(local_1c[local_1c[5]]), *(char *)(iVar2 + 0x4a2) == '\0')))) {
          return local_1c[local_1c[5]];
        }
      }
    }
    local_1c[5] = local_1c[5] + 1;
  } while( true );
}

