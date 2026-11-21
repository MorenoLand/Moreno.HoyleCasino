// FUN_00571c30  00571c30

undefined4 __fastcall FUN_00571c30(int param_1)

{
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (3 < local_8) {
      return 1;
    }
    if (*(int *)(param_1 + 8 + local_8 * 4) != 1) break;
    local_8 = local_8 + 1;
  }
  return *(undefined4 *)(param_1 + 8 + local_8 * 4);
}

