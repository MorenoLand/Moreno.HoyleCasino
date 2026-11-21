// FUN_005b85e0  005b85e0

void __thiscall FUN_005b85e0(int param_1,CSize *param_2,undefined4 param_3)

{
  int iVar1;
  CPane *this;
  int iVar2;
  CSize *pCVar3;
  int local_20 [2];
  int local_18;
  undefined4 local_14;
  int local_10 [2];
  int local_8;
  
  local_8 = FUN_005b4f00();
  iVar1 = FUN_005dcb00(local_8);
  if (iVar1 != 0) {
    FUN_005cb880(local_10,local_8);
    FUN_005cb880(&local_18,local_8);
    FUN_005cb880(local_20,local_8);
    if (*(int *)param_2 == 0) {
      pCVar3 = param_2;
      this = (CPane *)FUN_005dcb00(local_8);
      CPane::GetMinSize(this,pCVar3);
    }
    if (*(int *)param_2 == 0) {
      iVar1 = (**(code **)(*DAT_00793600 + 0x2b0))();
      *(int *)param_2 = iVar1;
      iVar1 = *(int *)(param_2 + 4);
      iVar2 = *(int *)param_2;
      FUN_005dcb00(local_8,iVar2,iVar1);
      FUN_005d5e10(iVar2,iVar1);
    }
    if (*(int *)param_2 < 1) {
      if (*(int *)param_2 < 0) {
        if (((param_1 == *(int *)(DAT_00793604 + 0x634 + local_8 * 4)) &&
            (local_20[0] + *(int *)param_2 < 1)) ||
           ((param_1 == *(int *)(DAT_00793604 + 0x580 + local_8 * 4) &&
            (iVar2 = local_20[0] + *(int *)param_2, iVar1 = (**(code **)(*DAT_00793600 + 0x2b0))(),
            iVar2 < iVar1)))) {
          *(int *)param_2 = -local_20[0];
        }
        if (((param_1 == *(int *)(DAT_00793604 + 0x580 + local_8 * 4)) &&
            (iVar1 = *(int *)param_2, iVar2 = (**(code **)(*DAT_00793600 + 0x2b0))(),
            local_10[0] + iVar1 < iVar2)) && (0 < local_18)) {
          FUN_005dcb00(local_8,local_18,local_14);
          FUN_005d5cf0(local_18,local_14);
          (**(code **)(**(int **)(DAT_00793604 + 0x634 + local_8 * 4) + 0xbc))(local_8,0);
        }
      }
    }
    else {
      if (param_1 == *(int *)(DAT_00793604 + 0x634 + local_8 * 4)) {
        *(int *)param_2 = 1 - local_20[0];
      }
      else {
        iVar2 = local_20[0] + *(int *)param_2;
        iVar1 = (**(code **)(*DAT_00793600 + 0x2b0))();
        if (iVar2 < iVar1) {
          iVar1 = (**(code **)(*DAT_00793600 + 0x2b0))();
          *(int *)param_2 = iVar1 - local_20[0];
        }
      }
      FUN_005dcb00(local_8);
      iVar1 = FUN_005d5a50();
      if (iVar1 < *(int *)param_2) {
        FUN_005dcb00(local_8);
        iVar1 = FUN_005d5a50();
        *(int *)param_2 = iVar1;
      }
      iVar2 = local_20[0] + *(int *)param_2;
      iVar1 = (**(code **)(*DAT_00793600 + 0x2b4))();
      if (iVar1 < iVar2) {
        iVar1 = (**(code **)(*DAT_00793600 + 0x2b4))();
        *(int *)param_2 = iVar1 - local_20[0];
      }
      if ((param_1 == *(int *)(DAT_00793604 + 0x634 + local_8 * 4)) &&
         (local_20[0] + *(int *)param_2 < 1)) {
        return;
      }
      if ((param_1 == *(int *)(DAT_00793604 + 0x580 + local_8 * 4)) &&
         (iVar1 = *(int *)param_2, iVar2 = (**(code **)(*DAT_00793600 + 0x2b0))(),
         local_20[0] + iVar1 < iVar2)) {
        return;
      }
    }
    if (*(int *)param_2 != 0) {
      FUN_005cba10(param_2,param_3,0);
    }
  }
  return;
}

