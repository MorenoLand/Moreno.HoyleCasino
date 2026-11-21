// FUN_0061c5e0  0061c5e0

uint FUN_0061c5e0(byte *param_1,byte param_2,byte param_3,byte param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte *local_18;
  uint local_14;
  int local_10;
  uint local_c;
  
  local_14 = 0;
  local_10 = 0x1000000;
  local_18 = param_1;
  for (local_c = 0; (int)local_c < 0x100; local_c = local_c + 1) {
    iVar1 = (uint)*local_18 - (uint)param_2;
    iVar2 = (uint)local_18[1] - (uint)param_3;
    iVar3 = (uint)local_18[2] - (uint)param_4;
    local_18 = local_18 + 3;
    if ((((-0x65 < iVar1) && (iVar1 < 0x65)) && (-0x65 < iVar2)) &&
       (((iVar2 < 0x65 && (-0x65 < iVar3)) && (iVar3 < 0x65)))) {
      iVar1 = iVar1 * iVar1 + iVar2 * iVar2 + iVar3 * iVar3;
      if (iVar1 < 0) {
        iVar1 = -iVar1;
      }
      if (iVar1 < local_10) {
        local_14 = local_c;
        local_10 = iVar1;
      }
      if (iVar1 < 1) {
        local_c = 0x100;
      }
    }
  }
  return local_14 & 0xff;
}

