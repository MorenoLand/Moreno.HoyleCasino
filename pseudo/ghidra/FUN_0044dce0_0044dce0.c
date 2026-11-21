// FUN_0044dce0  0044dce0

int __fastcall FUN_0044dce0(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  int local_18 [5];
  
  local_18[0] = 3;
  local_18[1] = 1;
  local_18[2] = 0;
  local_18[3] = 2;
  local_18[4] = 0;
  while( true ) {
    if (3 < local_18[4]) {
      return -1;
    }
    FUN_005dcb00(local_18[local_18[4]],param_1);
    piVar1 = (int *)FUN_0063aac0();
    if (((*piVar1 != 0) &&
        (iVar2 = FUN_005dcb00(local_18[local_18[4]],param_1), *(char *)(iVar2 + 0x4a1) == '\0')) &&
       (iVar2 = FUN_005dcb00(local_18[local_18[4]],param_1), *(char *)(iVar2 + 0x4a2) == '\0'))
    break;
    local_18[4] = local_18[4] + 1;
  }
  return local_18[local_18[4]];
}

