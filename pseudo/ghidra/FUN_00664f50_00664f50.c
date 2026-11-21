// FUN_00664f50  00664f50

int FUN_00664f50(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_var;
  undefined4 uVar3;
  undefined4 local_18;
  undefined4 local_10;
  undefined4 local_8;
  
  FUN_00664830(param_1);
  uVar3 = extraout_var;
  iVar1 = FUN_006647c0(param_1);
  local_10 = FUN_005eb470(uVar3);
  local_18 = FUN_005f5550();
  for (local_8 = 1; local_8 < iVar1; local_8 = local_8 + 1) {
    iVar2 = FUN_005eb470();
    if (iVar2 < local_10) {
      local_10 = FUN_005eb470();
    }
    iVar2 = FUN_005f5550();
    if (local_18 < iVar2) {
      local_18 = FUN_005f5550();
    }
  }
  if ((100 - local_10) - local_18 < 0) {
    local_18 = 0;
  }
  else {
    local_18 = (100 - local_10) - local_18;
  }
  return local_18;
}

