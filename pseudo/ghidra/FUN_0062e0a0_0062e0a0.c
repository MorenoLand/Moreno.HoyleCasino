// FUN_0062e0a0  0062e0a0

uint FUN_0062e0a0(void)

{
  uint local_8;
  
  if (DAT_0076208c == 0) {
    *(uint *)PTR_DAT_00762088 = *(int *)PTR_DAT_00762088 * 0x41c64e6d + 0x3039U & 0x7fffffff;
    local_8 = *(uint *)PTR_DAT_00762088;
  }
  else {
    *(int *)PTR_DAT_00762080 = *(int *)PTR_DAT_00762080 + *(int *)PTR_DAT_00762084;
    local_8 = *(int *)PTR_DAT_00762080 >> 1 & 0x7fffffff;
    PTR_DAT_00762080 = PTR_DAT_00762080 + 4;
    if (PTR_DAT_00762080 < PTR_PTR_00762098) {
      PTR_DAT_00762084 = PTR_DAT_00762084 + 4;
      if (PTR_PTR_00762098 <= PTR_DAT_00762084) {
        PTR_DAT_00762084 = PTR_DAT_00762088;
      }
    }
    else {
      PTR_DAT_00762080 = PTR_DAT_00762088;
      PTR_DAT_00762084 = PTR_DAT_00762084 + 4;
    }
  }
  return local_8;
}

