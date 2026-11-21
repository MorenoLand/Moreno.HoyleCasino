// FUN_005b56c0  005b56c0

int __fastcall FUN_005b56c0(int param_1)

{
  int local_18;
  int local_14 [4];
  
  local_14[0] = 2;
  local_14[1] = 0;
  local_14[2] = 1;
  local_14[3] = 3;
  local_18 = 0;
  while( true ) {
    if (3 < local_18) {
      return -1;
    }
    if (*(char *)(param_1 + 0x674 + local_14[local_18]) == '\0') break;
    local_18 = local_18 + 1;
  }
  return local_14[local_18];
}

