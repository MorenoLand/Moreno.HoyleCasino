// FUN_006065d0  006065d0

void FUN_006065d0(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int local_8;
  
  local_8 = 0;
  while( true ) {
    iVar2 = FUN_006063e0();
    if (iVar2 <= local_8) {
      return;
    }
    FUN_00606350(local_8);
    iVar2 = FUN_005f5400();
    if (iVar2 == param_1) break;
    local_8 = local_8 + 1;
  }
  FUN_00606350(local_8);
  cVar1 = FUN_006026d0();
  if (cVar1 == '\0') {
    return;
  }
  FUN_006067e0();
  piVar3 = (int *)FUN_00606350(local_8);
  (**(code **)(*piVar3 + 0xf4))();
  return;
}

