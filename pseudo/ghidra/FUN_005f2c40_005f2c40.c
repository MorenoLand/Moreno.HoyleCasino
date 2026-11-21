// FUN_005f2c40  005f2c40

void FUN_005f2c40(undefined4 param_1)

{
  int iVar1;
  undefined4 extraout_var;
  undefined4 uVar2;
  undefined4 local_8;
  
  iVar1 = FUN_005f2300(param_1);
  if (iVar1 != 0) {
    local_8 = 0;
    uVar2 = extraout_var;
    while( true ) {
      FUN_005f2300(param_1);
      iVar1 = FUN_005feda0(uVar2);
      if (iVar1 <= local_8) break;
      iVar1 = local_8;
      FUN_005f2300(param_1);
      FUN_005ff080(iVar1);
      FUN_005fd560();
      local_8 = local_8 + 1;
    }
  }
  return;
}

