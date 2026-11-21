// FUN_004806b0  004806b0

int __fastcall FUN_004806b0(int param_1)

{
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (6 < local_8) {
      return 0;
    }
    if (*(int *)(param_1 + 0x3e4 + local_8 * 4) == -1) break;
    local_8 = local_8 + 1;
  }
  return local_8;
}

