// FUN_005fdd10  005fdd10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005fdd10(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int local_8;
  
  uVar1 = FUN_005fe7f0(param_1);
  local_8 = 0;
  while( true ) {
    iVar2 = FUN_005feda0();
    if (iVar2 <= local_8) break;
    piVar3 = (int *)FUN_005ff080(local_8);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 200))(uVar1);
    }
    local_8 = local_8 + 1;
  }
  iVar2 = FUN_005fb2b0(0);
  if (iVar2 != 0) {
    uVar5 = uVar1;
    FUN_005fb2b0(0);
    FUN_005eaf00(uVar5);
  }
  iVar2 = FUN_005fb2b0(1);
  if (iVar2 != 0) {
    FUN_005fb2b0(1);
    FUN_005eaf00(uVar1);
  }
  iVar2 = FUN_005fed00();
  iVar2 = iVar2 + _DAT_006d6eb8;
  iVar4 = FUN_005fecb0(iVar2);
  FUN_005f8510(PTR_006d6eb4 + iVar4,iVar2);
  return;
}

