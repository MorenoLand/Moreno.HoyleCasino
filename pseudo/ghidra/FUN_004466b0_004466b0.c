// FUN_004466b0  004466b0

undefined4 FUN_004466b0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_0044ce00(param_1);
  iVar2 = FUN_00462ba0(DAT_00790710 + 0x98 + param_1 * 10,iVar1,0);
  if (iVar1 == 3) {
    if ((iVar2 == 4) ||
       ((iVar2 == 2 && (iVar1 = FUN_004630c0(DAT_00790710 + 0x98 + param_1 * 10,0,3), 9 < iVar1))))
    {
      return 1;
    }
    if ((iVar2 == 6) || (iVar2 == 9)) {
      iVar1 = FUN_004630c0(DAT_00790710 + 0x98 + param_1 * 10,2,3);
      if (9 < iVar1) {
        return 1;
      }
      if ((iVar2 == 9) && (iVar1 = FUN_00463a40(DAT_00790710 + 0x98 + param_1 * 10,2,3), iVar1 == 0)
         ) {
        return 1;
      }
      iVar1 = FUN_004630c0(DAT_00790710 + 0x98 + param_1 * 10,0,3);
      iVar2 = FUN_004630c0(DAT_00790710 + 0x98 + param_1 * 10,2,3);
      if ((iVar1 - iVar2 == 3) &&
         (iVar1 = FUN_004630c0(DAT_00790710 + 0x98 + param_1 * 10,0,3), 9 < iVar1)) {
        return 1;
      }
      iVar1 = FUN_004630c0(DAT_00790710 + 0x98 + param_1 * 10,0,3);
      iVar2 = FUN_004630c0(DAT_00790710 + 0x98 + param_1 * 10,2,3);
      if ((iVar1 - iVar2 == 4) &&
         (iVar1 = FUN_004630c0(DAT_00790710 + 0x98 + param_1 * 10,1,3), 9 < iVar1)) {
        return 1;
      }
    }
  }
  else {
    if ((((iVar2 == 8) || (iVar2 == 4)) || (iVar2 == 3)) ||
       ((iVar2 == 2 && (iVar3 = FUN_004630c0(DAT_00790710 + 0x98 + param_1 * 10,0,iVar1), 9 < iVar3)
        ))) {
      return 1;
    }
    if ((iVar2 == 6) || (iVar2 == 9)) {
      return 1;
    }
    if (iVar2 == 5) {
      return 1;
    }
    if (iVar2 == 1) {
      iVar2 = FUN_004630c0(DAT_00790710 + 0x98 + param_1 * 10,0,iVar1);
      iVar3 = FUN_004630c0(DAT_00790710 + 0x98 + param_1 * 10,3,iVar1);
      if ((iVar2 - iVar3 == 4) &&
         (iVar1 = FUN_004630c0(DAT_00790710 + 0x98 + param_1 * 10,3,iVar1), 9 < iVar1)) {
        return 1;
      }
    }
  }
  return 0;
}

