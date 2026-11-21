// FUN_0041a700  0041a700

int __fastcall FUN_0041a700(int param_1)

{
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
    if (*(char *)(param_1 + 0x11b + local_18[local_18[4]] * 0x118) != '\0') break;
    local_18[4] = local_18[4] + 1;
  }
  return local_18[local_18[4]];
}

