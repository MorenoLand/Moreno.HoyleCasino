// FUN_00408fd0  00408fd0

int FUN_00408fd0(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 extraout_var;
  undefined4 extraout_var_00;
  undefined4 uVar4;
  int local_8;
  
  local_8 = 0;
  iVar3 = FUN_004094b0(param_1);
  if (iVar3 < 3) {
    local_8 = -1;
  }
  else {
    uVar4 = extraout_var_00;
    uVar2 = FUN_004093d0(param_1,2);
    iVar3 = FUN_00641280(CONCAT22(extraout_var,uVar2),uVar4);
    if (((iVar3 < 1) || (iVar1 = iVar3, 9 < iVar3)) && (iVar1 = local_8, iVar3 == 0xe)) {
      local_8 = 1;
      iVar1 = local_8;
    }
    while (local_8 = iVar1, 9 < local_8) {
      iVar1 = local_8 + -10;
    }
  }
  return local_8;
}

