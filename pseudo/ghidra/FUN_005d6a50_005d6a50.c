// FUN_005d6a50  005d6a50

undefined * __fastcall FUN_005d6a50(int param_1)

{
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (*(short *)(&DAT_0075d658 + local_8 * 0x10) == -1) {
      return (undefined *)0x0;
    }
    if ((int)*(short *)(&DAT_0075d658 + local_8 * 0x10) == *(int *)(param_1 + 8)) break;
    local_8 = local_8 + 1;
  }
  return &DAT_0075d658 + local_8 * 0x10;
}

