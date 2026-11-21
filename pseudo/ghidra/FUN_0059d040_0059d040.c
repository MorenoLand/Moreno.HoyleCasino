// FUN_0059d040  0059d040

int FUN_0059d040(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 extraout_var;
  undefined4 uVar2;
  undefined4 local_8;
  
  local_8 = FUN_0059d110(param_1,param_2);
  uVar2 = extraout_var;
  iVar1 = FUN_0062fbf0(2,extraout_var);
  if (iVar1 == 0) {
    iVar1 = FUN_0062fbf0(3,uVar2);
    iVar1 = -iVar1;
  }
  else {
    iVar1 = FUN_0062fbf0(3,uVar2);
  }
  local_8 = local_8 + iVar1;
  return local_8;
}

