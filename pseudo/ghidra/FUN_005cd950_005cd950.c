// FUN_005cd950  005cd950

undefined4 FUN_005cd950(int param_1)

{
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (0xd7 < local_8) {
      return 0;
    }
    if (*(int *)(&DAT_0075e180 + local_8 * 8) == param_1) break;
    local_8 = local_8 + 1;
  }
  return *(undefined4 *)(&DAT_0075e184 + local_8 * 8);
}

