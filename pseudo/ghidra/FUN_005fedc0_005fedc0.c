// FUN_005fedc0  005fedc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005fedc0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int local_8;
  
  iVar1 = FUN_005f84d0();
  iVar2 = FUN_005fecb0();
  iVar3 = FUN_005f8550();
  if (iVar3 < iVar1 + iVar2) {
    iVar1 = FUN_005fb2b0(0);
    if (iVar1 != 0) {
      FUN_005fb2b0(0);
      iVar1 = FUN_005eb240();
      if (6 < iVar1) {
        piVar4 = (int *)FUN_005fb2b0(0);
        (**(code **)(*piVar4 + 0xb0))(7);
      }
    }
    uVar7 = 4;
    iVar1 = FUN_005f84f0(4);
    iVar1 = iVar1 + _DAT_006d6eb8;
    iVar2 = FUN_005f84d0(iVar1);
    iVar3 = FUN_005f84d0();
    iVar5 = FUN_005fecb0();
    iVar6 = FUN_005f8550();
    FUN_005fddf0(PTR_006d6eb4 + (iVar2 - ((iVar3 + iVar5) - iVar6)),iVar1,uVar7);
  }
  iVar1 = FUN_005f84f0();
  iVar2 = FUN_005fed00();
  iVar3 = FUN_005f8570();
  if (iVar3 < iVar1 + iVar2) {
    iVar1 = FUN_005fb2b0(0);
    if (iVar1 != 0) {
      FUN_005fb2b0(0);
      iVar1 = FUN_005eb240();
      if (6 < iVar1) {
        piVar4 = (int *)FUN_005fb2b0(0);
        (**(code **)(*piVar4 + 0xb0))(7);
      }
    }
    uVar7 = 4;
    iVar1 = FUN_005f84f0(4);
    iVar2 = FUN_005f84f0();
    iVar3 = FUN_005fed00();
    iVar5 = FUN_005f8570();
    iVar2 = (iVar1 - ((iVar2 + iVar3) - iVar5)) + _DAT_006d6eb8;
    iVar1 = FUN_005f84d0(iVar2);
    FUN_005fddf0(PTR_006d6eb4 + iVar1,iVar2,uVar7);
  }
  FUN_005f85d0();
  local_8 = 0;
  while( true ) {
    iVar1 = FUN_005feda0();
    if (iVar1 <= local_8) break;
    piVar4 = (int *)FUN_005ff080(local_8);
    (**(code **)(*piVar4 + 0x74))();
    local_8 = local_8 + 1;
  }
  return;
}

