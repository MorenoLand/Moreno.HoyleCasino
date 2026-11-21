// FUN_004618e0  004618e0

int __fastcall FUN_004618e0(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int local_1c [6];
  
  local_1c[0] = 3;
  local_1c[1] = 1;
  local_1c[2] = 0;
  local_1c[3] = 2;
  local_1c[4] = 4;
  local_1c[5] = 0;
  while( true ) {
    if (4 < local_1c[5]) {
      return -1;
    }
    FUN_005dcb00(local_1c[local_1c[5]]);
    piVar2 = (int *)FUN_0063aac0();
    if ((((*piVar2 != 0) &&
         (iVar3 = FUN_005dcb00(local_1c[local_1c[5]]), *(char *)(iVar3 + 0x4a1) == '\0')) &&
        (iVar3 = FUN_005dcb00(local_1c[local_1c[5]]), *(char *)(iVar3 + 0x4a2) != '\0')) &&
       ((cVar1 = FUN_004619f0(local_1c[local_1c[5]]), cVar1 != '\0' &&
        (*(char *)(param_1 + 0xfe + local_1c[local_1c[5]]) == '\0')))) break;
    local_1c[5] = local_1c[5] + 1;
  }
  return local_1c[local_1c[5]];
}

