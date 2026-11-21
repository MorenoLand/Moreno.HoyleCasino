// FUN_00426a40  00426a40

int __fastcall FUN_00426a40(int param_1)

{
  char cVar1;
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
    cVar1 = FUN_00426500(local_18[local_18[4]]);
    if ((cVar1 != '\0') && (*(char *)(param_1 + 0xa5 + local_18[local_18[4]]) == '\0')) break;
    local_18[4] = local_18[4] + 1;
  }
  return local_18[local_18[4]];
}

