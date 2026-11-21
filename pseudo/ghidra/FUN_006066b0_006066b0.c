// FUN_006066b0  006066b0

void FUN_006066b0(int param_1)

{
  int iVar1;
  int *piVar2;
  int local_8;
  
  local_8 = 0;
  while( true ) {
    iVar1 = FUN_006063e0();
    if (iVar1 <= local_8) {
      return;
    }
    FUN_00606350(local_8);
    iVar1 = FUN_005f5400();
    if (iVar1 == param_1) break;
    local_8 = local_8 + 1;
  }
  piVar2 = (int *)FUN_00606350(local_8);
  (**(code **)(*piVar2 + 0xcc))();
  return;
}

