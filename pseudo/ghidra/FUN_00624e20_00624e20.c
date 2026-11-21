// FUN_00624e20  00624e20

uint FUN_00624e20(byte param_1)

{
  uint local_8;
  
  local_8 = 0;
  while( true ) {
    if (0x7f < local_8) {
      return (uint)param_1;
    }
    if ((&DAT_00761da0)[local_8] == param_1) break;
    local_8 = local_8 + 1;
  }
  return local_8 + 0x80;
}

