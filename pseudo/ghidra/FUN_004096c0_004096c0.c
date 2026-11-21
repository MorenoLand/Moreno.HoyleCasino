// FUN_004096c0  004096c0

undefined4 __fastcall FUN_004096c0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int local_18 [5];
  
  iVar1 = FUN_00409520(param_1);
  local_18[4] = *(int *)(iVar1 + 8) + -1;
  if (local_18[4] < 2) {
    uVar2 = 0;
  }
  else {
    local_18[0] = FUN_004095c0(*(int *)(iVar1 + 8) + -3);
    local_18[1] = FUN_004095c0(local_18[4] + -1);
    local_18[2] = FUN_004095c0(local_18[4]);
    for (local_18[3] = 1; local_18[3] < 3; local_18[3] = local_18[3] + 1) {
      if (local_18[local_18[3]] != local_18[0]) {
        return 0;
      }
    }
    uVar2 = 1;
  }
  return uVar2;
}

