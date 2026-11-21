// FUN_00664dd0  00664dd0

int FUN_00664dd0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_var;
  undefined4 uVar3;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_8;
  
  FUN_00664830(param_1);
  uVar3 = extraout_var;
  iVar1 = FUN_006647c0(param_1);
  local_10 = FUN_005eb4b0(uVar3);
  local_14 = FUN_005f5590();
  for (local_8 = 1; local_8 < iVar1; local_8 = local_8 + 1) {
    iVar2 = FUN_005eb4b0();
    if (local_10 < iVar2) {
      local_10 = FUN_005eb4b0();
    }
    iVar2 = FUN_005f5590();
    if (local_14 < iVar2) {
      local_14 = FUN_005f5590();
    }
  }
  if ((0x54 - local_10) - local_14 < 0) {
    local_14 = 0;
  }
  else {
    local_14 = (0x54 - local_10) - local_14;
  }
  return local_14;
}

