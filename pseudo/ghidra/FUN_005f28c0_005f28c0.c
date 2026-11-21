// FUN_005f28c0  005f28c0

void FUN_005f28c0(undefined4 param_1)

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
      iVar1 = FUN_005feda0(uVar2);
      if (iVar1 <= local_8) break;
      FUN_005ff080(local_8);
      FUN_005fd410();
      local_8 = local_8 + 1;
    }
  }
  return;
}

