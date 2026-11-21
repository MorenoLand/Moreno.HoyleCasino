// FUN_0056f0d0  0056f0d0

undefined4 __fastcall FUN_0056f0d0(int param_1)

{
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (3 < local_8) {
      return 1;
    }
    if (*(int *)(param_1 + 0xac + local_8 * 4) != 1) break;
    local_8 = local_8 + 1;
  }
  return *(undefined4 *)(param_1 + 0xac + local_8 * 4);
}

