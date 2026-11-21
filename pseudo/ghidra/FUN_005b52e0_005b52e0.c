// FUN_005b52e0  005b52e0

undefined4 FUN_005b52e0(void)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_var;
  undefined4 uVar3;
  int local_20;
  undefined4 local_18;
  undefined4 local_14 [4];
  
  local_14[0] = 3;
  local_14[1] = 1;
  local_14[2] = 0;
  local_14[3] = 2;
  local_18 = 4;
  iVar1 = FUN_005b5ff0(4);
  uVar3 = extraout_var;
  for (local_20 = 0; local_20 < 4; local_20 = local_20 + 1) {
    iVar2 = FUN_005b5ff0(local_14[local_20]);
    if (iVar1 == iVar2) {
      iVar2 = FUN_005dcb00(local_14[local_20],uVar3);
      if (*(char *)(iVar2 + 0x4a0) != '\0') {
        local_18 = local_14[local_20];
      }
    }
  }
  return local_18;
}

