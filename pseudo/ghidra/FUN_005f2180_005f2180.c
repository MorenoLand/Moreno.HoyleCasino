// FUN_005f2180  005f2180

undefined4 FUN_005f2180(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int local_10;
  int local_c;
  int local_8;
  
  local_10 = 0;
  local_8 = 0;
  local_c = 0;
  while( true ) {
    iVar1 = FUN_0060c9a0();
    if (iVar1 <= local_c) {
      return 0;
    }
    FUN_0060ca40(local_c);
    iVar1 = FUN_005f5400();
    if (iVar1 == param_1) break;
    local_c = local_c + 1;
  }
  piVar2 = (int *)FUN_0060ca40(local_c);
  iVar1 = FUN_0060c9a0();
  if (local_c < iVar1 + -1) {
    piVar3 = (int *)FUN_0060ca40(local_c + 1);
    local_10 = (**(code **)(*piVar3 + 0x4c))();
    iVar1 = (**(code **)(*piVar2 + 0x4c))();
    local_10 = local_10 - iVar1;
    piVar3 = (int *)FUN_0060ca40(local_c + 1);
    local_8 = (**(code **)(*piVar3 + 0x54))();
    iVar1 = (**(code **)(*piVar2 + 0x54))();
    local_8 = local_8 - iVar1;
  }
  FUN_0060c890(piVar2);
  FUN_005fbcb0(piVar2,0xffffffff);
  for (; iVar1 = FUN_0060c9a0(), local_c < iVar1; local_c = local_c + 1) {
    piVar2 = (int *)FUN_0060ca40(local_c);
    iVar1 = (**(code **)(*piVar2 + 0x54))();
    iVar1 = (**(code **)(*piVar2 + 0x4c))(iVar1 - local_8);
    (**(code **)(*piVar2 + 0x44))(iVar1 - local_10);
  }
  return 1;
}

