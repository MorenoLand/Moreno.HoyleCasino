// FUN_00460840  00460840

int __fastcall FUN_00460840(int param_1)

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
    if (local_1c[local_1c[5]] != *(int *)(param_1 + 0x10c)) {
      if ((local_1c[local_1c[5]] == 4) && (*(char *)(param_1 + 0x114) == '\0')) {
        return local_1c[local_1c[5]];
      }
      FUN_005dcb00(local_1c[local_1c[5]]);
      piVar1 = (int *)FUN_0063aac0();
      if (((*piVar1 != 0) &&
          (iVar2 = FUN_005dcb00(local_1c[local_1c[5]]), *(char *)(iVar2 + 0x4a0) == '\0')) &&
         (iVar2 = FUN_005dcb00(local_1c[local_1c[5]]), *(char *)(iVar2 + 0x4a1) == '\0')) {
        return local_1c[local_1c[5]];
      }
    }
    local_1c[5] = local_1c[5] + 1;
  } while( true );
}

