// FUN_00480540  00480540

undefined4 __fastcall FUN_00480540(int param_1)

{
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (6 < local_8) {
      return 1;
    }
    if (*(int *)(param_1 + 0x3e4 + local_8 * 4) == -1) break;
    local_8 = local_8 + 1;
  }
  return 0;
}

