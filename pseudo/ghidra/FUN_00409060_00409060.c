// FUN_00409060  00409060

int FUN_00409060(undefined4 param_1)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined2 extraout_var;
  undefined4 extraout_var_00;
  undefined4 uVar4;
  undefined4 local_18;
  undefined4 local_8;
  
  local_18 = 0;
  iVar2 = FUN_004094b0(param_1);
  uVar4 = extraout_var_00;
  for (local_8 = 0; local_8 < iVar2; local_8 = local_8 + 1) {
    uVar1 = FUN_004093d0(param_1,local_8);
    iVar3 = FUN_00641280(CONCAT22(extraout_var,uVar1),uVar4);
    if ((iVar3 < 1) || (9 < iVar3)) {
      if (iVar3 == 0xe) {
        local_18 = local_18 + 1;
      }
    }
    else {
      local_18 = local_18 + iVar3;
    }
  }
  for (; 9 < local_18; local_18 = local_18 + -10) {
  }
  return local_18;
}

