// FUN_005f2ba0  005f2ba0

void FUN_005f2ba0(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 extraout_var;
  undefined4 uVar3;
  undefined4 local_8;
  
  local_8 = 0;
  while( true ) {
    iVar1 = FUN_005f2a60(param_1,local_8);
    if (iVar1 == 0) break;
    uVar3 = extraout_var;
    piVar2 = (int *)FUN_005f2a60(param_1,local_8);
    (**(code **)(*piVar2 + 0xd0))(uVar3);
    local_8 = local_8 + 1;
  }
  return;
}

