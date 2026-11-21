// FUN_005a4030  005a4030

void __thiscall
FUN_005a4030(undefined4 param_1,CSize *param_2,undefined4 param_3,undefined1 param_4)

{
  int iVar1;
  CPane *this;
  int iVar2;
  int *piVar3;
  CSize *pCVar4;
  undefined1 local_2c [8];
  int local_24;
  undefined4 local_20;
  int local_1c [2];
  int local_14;
  int local_10 [2];
  int local_8;
  
  local_8 = FUN_005a2020();
  iVar1 = FUN_005dcb00(local_8);
  if (iVar1 != 0) {
    local_14 = local_8 * 3;
    FUN_005cb880(&local_24,local_8);
    FUN_005cb880(local_10,local_8);
    FUN_005cb880(local_2c,local_8);
    piVar3 = local_1c;
    iVar1 = local_8;
    FUN_005a21a0(param_1);
    FUN_005cb880(piVar3,iVar1);
    if (*(int *)param_2 == 0) {
      pCVar4 = param_2;
      this = (CPane *)FUN_005dcb00(local_8);
      CPane::GetMinSize(this,pCVar4);
    }
    if (*(int *)param_2 == 0) {
      iVar1 = (**(code **)(*DAT_007935cc + 0x2b0))();
      *(int *)param_2 = iVar1;
      iVar1 = *(int *)(param_2 + 4);
      iVar2 = *(int *)param_2;
      FUN_005dcb00(local_8,iVar2,iVar1);
      FUN_005d5e10(iVar2,iVar1);
    }
    if (*(int *)param_2 < 1) {
      if (*(int *)param_2 < 0) {
        iVar2 = local_1c[0] + *(int *)param_2;
        iVar1 = (**(code **)(*DAT_007935cc + 0x2b0))();
        if (iVar2 < iVar1) {
          *(int *)param_2 = -local_1c[0];
        }
        iVar1 = FUN_005a21a0(param_1);
        if ((iVar1 == local_14 + 2) && (local_24 + *(int *)param_2 < local_10[0])) {
          *(int *)param_2 = -local_24;
        }
      }
    }
    else {
      iVar2 = local_1c[0] + *(int *)param_2;
      iVar1 = (**(code **)(*DAT_007935cc + 0x2b0))();
      if (iVar2 < iVar1) {
        iVar1 = (**(code **)(*DAT_007935cc + 0x2b0))();
        *(int *)param_2 = iVar1 - local_1c[0];
      }
      iVar1 = FUN_005a21a0(param_1);
      if ((iVar1 == local_14 + 2) && (local_24 + *(int *)param_2 < local_10[0])) {
        *(int *)param_2 = local_10[0] - local_24;
      }
      iVar1 = FUN_005a21a0(param_1);
      if ((iVar1 == local_14 + 2) && (local_10[0] * 3 < local_24 + *(int *)param_2)) {
        *(int *)param_2 = local_10[0] * 3 - local_24;
      }
      FUN_005dcb00(local_8);
      iVar1 = FUN_005d5a50();
      if (iVar1 < *(int *)param_2) {
        FUN_005dcb00(local_8);
        iVar1 = FUN_005d5a50();
        *(int *)param_2 = iVar1;
      }
      iVar1 = *(int *)param_2;
      iVar2 = (**(code **)(*DAT_007935cc + 0x2b0))();
      if (local_1c[0] + iVar1 < iVar2) {
        return;
      }
      iVar1 = FUN_005a21a0(param_1);
      if ((iVar1 == local_14 + 2) && (local_24 + *(int *)param_2 < local_10[0])) {
        return;
      }
    }
    if (*(int *)param_2 != 0) {
      iVar1 = FUN_005a21a0(param_1);
      if (iVar1 == local_14 + 1) {
        FUN_005dcb00(local_8,local_24,local_20);
        FUN_005d5cf0(local_24,local_20);
        (**(code **)(**(int **)(DAT_007935d0 + 0x10 + local_14 * 4) + 0xbc))(local_8,0);
      }
      FUN_005cba10(param_2,param_3,param_4);
    }
  }
  return;
}

