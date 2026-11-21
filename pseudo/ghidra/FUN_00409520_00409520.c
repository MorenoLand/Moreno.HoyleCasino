// FUN_00409520  00409520

int FUN_00409520(void)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int local_8;
  
  local_8 = 0;
  do {
    if (4 < local_8) {
      return DAT_007902f0 + 0xbc;
    }
    iVar2 = FUN_005dcb00(local_8);
    if (iVar2 != 0) {
      piVar3 = (int *)FUN_0063aac0();
      if ((*piVar3 == 2) || (piVar3 = (int *)FUN_0063aac0(), *piVar3 == 3)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (bVar1) {
        return DAT_007902f0 + 0xbc + local_8 * 0x338;
      }
    }
    local_8 = local_8 + 1;
  } while( true );
}

