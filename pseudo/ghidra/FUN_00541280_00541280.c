// FUN_00541280  00541280

int __fastcall FUN_00541280(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
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
    FUN_005dcb00(local_18[local_18[4]]);
    piVar2 = (int *)FUN_0063aac0();
    if ((((*piVar2 != 0) &&
         (iVar3 = FUN_005dcb00(local_18[local_18[4]]), *(char *)(iVar3 + 0x4a1) == '\0')) &&
        (*(char *)(param_1 + 0xf2 + local_18[local_18[4]]) == '\0')) &&
       (cVar1 = FUN_005414e0(local_18[local_18[4]]), cVar1 != '\0')) break;
    local_18[4] = local_18[4] + 1;
  }
  return local_18[local_18[4]];
}

