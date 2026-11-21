// FUN_004271f0  004271f0

int __fastcall FUN_004271f0(undefined4 param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
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
    piVar2 = (int *)FUN_0063aac0();
    if ((((*piVar2 != 0) &&
         (iVar3 = FUN_005dcb00(local_18[local_18[4]],param_1), *(char *)(iVar3 + 0x4a1) == '\0')) &&
        (iVar3 = FUN_005dcb00(local_18[local_18[4]],param_1), *(char *)(iVar3 + 0x4a2) != '\0')) &&
       (cVar1 = FUN_004272e0(local_18[local_18[4]]), cVar1 != '\0')) break;
    local_18[4] = local_18[4] + 1;
  }
  return local_18[local_18[4]];
}

