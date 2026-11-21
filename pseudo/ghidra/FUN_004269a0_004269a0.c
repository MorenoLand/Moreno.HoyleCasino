// FUN_004269a0  004269a0

int FUN_004269a0(void)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_var;
  undefined4 uVar3;
  int local_18 [5];
  
  local_18[0] = 2;
  local_18[1] = 0;
  local_18[2] = 1;
  local_18[3] = 3;
  iVar1 = FUN_00426370(4);
  local_18[4] = 0;
  uVar3 = extraout_var;
  while( true ) {
    if (3 < local_18[4]) {
      return 4;
    }
    iVar2 = FUN_00426370(local_18[local_18[4]]);
    if ((iVar1 == iVar2) &&
       (iVar2 = FUN_005dcb00(local_18[local_18[4]],uVar3), *(char *)(iVar2 + 0x4a0) != '\0')) break;
    local_18[4] = local_18[4] + 1;
  }
  return local_18[local_18[4]];
}

