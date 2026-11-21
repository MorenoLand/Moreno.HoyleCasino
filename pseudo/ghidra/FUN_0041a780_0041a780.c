// FUN_0041a780  0041a780

int __fastcall FUN_0041a780(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int local_18 [5];
  
  local_18[0] = 2;
  local_18[1] = 0;
  local_18[2] = 1;
  local_18[3] = 3;
  local_18[4] = 0;
  while( true ) {
    if (3 < local_18[4]) {
      return -1;
    }
    cVar1 = FUN_00419eb0(local_18[local_18[4]]);
    if ((cVar1 != '\0') &&
       (iVar2 = FUN_005dcb00(local_18[local_18[4]],param_1), *(char *)(iVar2 + 0x4a2) == '\0'))
    break;
    local_18[4] = local_18[4] + 1;
  }
  return local_18[local_18[4]];
}

