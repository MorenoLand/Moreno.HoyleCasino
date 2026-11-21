// FUN_005f0a30  005f0a30

uint __thiscall FUN_005f0a30(int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  uint local_c;
  
  uVar2 = (uint)param_2;
  if (uVar2 < 0x80) {
    return (uint)param_2;
  }
  iVar1 = *(int *)(param_1 + 100);
  if (iVar1 == 1) {
    local_c = 0;
    while ((int)local_c < 10) {
      if (param_2 == (&DAT_0075ee84)[local_c]) {
        return local_c + 0x7f;
      }
      uVar2 = local_c + 1;
      local_c = uVar2;
    }
  }
  else {
    if (iVar1 == 2) {
      if ((0x7f < param_2) && (param_2 < 0xa1)) {
        return 0;
      }
      return param_2 - 0x21;
    }
    if (iVar1 == 3) {
      return (uint)param_2;
    }
  }
  return uVar2 & 0xffffff00;
}

