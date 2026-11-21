// FUN_0044d430  0044d430

int __fastcall FUN_0044d430(int param_1)

{
  int *piVar1;
  int iVar2;
  int local_18 [5];
  
  local_18[0] = 2;
  local_18[1] = 0;
  local_18[2] = 1;
  local_18[3] = 3;
  if (*(int *)(param_1 + 0xd4) != 2) {
    for (local_18[4] = 0; local_18[4] < 4; local_18[4] = local_18[4] + 1) {
      FUN_005dcb00(local_18[local_18[4]]);
      piVar1 = (int *)FUN_0063aac0();
      if (((*piVar1 != 0) &&
          (iVar2 = FUN_005dcb00(local_18[local_18[4]]), *(char *)(iVar2 + 0x4a1) == '\0')) &&
         (*(char *)(param_1 + 0xcd + local_18[local_18[4]]) == '\0')) {
        return local_18[local_18[4]];
      }
    }
  }
  return -1;
}

