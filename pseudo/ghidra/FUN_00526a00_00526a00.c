// FUN_00526a00  00526a00

undefined4 FUN_00526a00(int param_1)

{
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (0xa0 < local_8) {
      return 0;
    }
    if (*(int *)(*(int *)(DAT_0079337c + 0x80 + local_8 * 4) + 0x178) == param_1) break;
    local_8 = local_8 + 1;
  }
  return *(undefined4 *)(DAT_0079337c + 0x80 + local_8 * 4);
}

