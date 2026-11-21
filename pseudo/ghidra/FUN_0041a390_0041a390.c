// FUN_0041a390  0041a390

int FUN_0041a390(void)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_var;
  undefined4 uVar3;
  int local_1c;
  int local_18 [5];
  
  local_18[0] = 3;
  local_18[1] = 1;
  local_18[2] = 0;
  local_18[3] = 2;
  local_1c = 4;
  iVar1 = FUN_00419610(4);
  uVar3 = extraout_var;
  for (local_18[4] = 0; local_18[4] < 4; local_18[4] = local_18[4] + 1) {
    iVar2 = FUN_00419610(local_18[local_18[4]]);
    if (iVar1 == iVar2) {
      iVar2 = FUN_005dcb00(local_18[local_18[4]],uVar3);
      if (*(char *)(iVar2 + 0x4a0) != '\0') {
        local_1c = local_18[local_18[4]];
      }
    }
  }
  return local_1c;
}

