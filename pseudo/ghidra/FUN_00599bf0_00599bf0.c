// FUN_00599bf0  00599bf0

void __thiscall
FUN_00599bf0(undefined4 param_1,CSize *param_2,undefined4 param_3,undefined1 param_4)

{
  bool bVar1;
  int iVar2;
  CPane *this;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  CSize *pCVar6;
  int local_2c [2];
  int local_24;
  int local_20 [2];
  int local_18 [2];
  undefined1 local_10 [8];
  int local_8;
  
  local_8 = FUN_00597d30();
  iVar2 = FUN_005dcb00(local_8);
  if (iVar2 != 0) {
    local_24 = local_8 * 3;
    FUN_005cb880(local_20,local_8);
    FUN_005cb880(local_18,local_8);
    FUN_005cb880(local_10,local_8);
    piVar3 = local_2c;
    iVar2 = local_8;
    FUN_00597ef0(param_1);
    FUN_005cb880(piVar3,iVar2);
    if (*(int *)param_2 == 0) {
      pCVar6 = param_2;
      this = (CPane *)FUN_005dcb00(local_8);
      CPane::GetMinSize(this,pCVar6);
    }
    if (*(int *)param_2 == 0) {
      iVar2 = (**(code **)(*DAT_007935a4 + 0x2b0))();
      *(int *)param_2 = iVar2;
      iVar2 = *(int *)(param_2 + 4);
      iVar5 = *(int *)param_2;
      FUN_005dcb00(local_8,iVar5,iVar2);
      FUN_005d5e10(iVar5,iVar2);
    }
    if (*(int *)param_2 < 1) {
      if (*(int *)param_2 < 0) {
        iVar5 = local_2c[0] + *(int *)param_2;
        iVar2 = (**(code **)(*DAT_007935a4 + 0x2b0))();
        if (iVar5 < iVar2) {
          *(int *)param_2 = -local_2c[0];
        }
        iVar2 = FUN_00597ef0(param_1);
        if ((iVar2 == local_24) && (local_20[0] + *(int *)param_2 < local_18[0])) {
          *(int *)param_2 = -local_20[0];
        }
      }
    }
    else {
      iVar5 = local_2c[0] + *(int *)param_2;
      iVar2 = (**(code **)(*DAT_007935a4 + 0x2b0))();
      if (iVar5 < iVar2) {
        iVar2 = (**(code **)(*DAT_007935a4 + 0x2b0))();
        *(int *)param_2 = iVar2 - local_2c[0];
      }
      iVar2 = FUN_00597ef0(param_1);
      if ((iVar2 == local_24) && (local_20[0] + *(int *)param_2 < local_18[0])) {
        *(int *)param_2 = local_18[0] - local_20[0];
      }
      iVar2 = FUN_00597ef0(param_1);
      if ((iVar2 == local_24) && (local_18[0] * 3 < local_20[0] + *(int *)param_2)) {
        *(int *)param_2 = local_18[0] * 3 - local_20[0];
      }
      FUN_005dcb00(local_8);
      iVar2 = FUN_005d5a50();
      if (iVar2 < *(int *)param_2) {
        FUN_005dcb00(local_8);
        iVar2 = FUN_005d5a50();
        *(int *)param_2 = iVar2;
      }
      iVar2 = *(int *)param_2;
      iVar5 = (**(code **)(*DAT_007935a4 + 0x2b0))();
      if (local_2c[0] + iVar2 < iVar5) {
        return;
      }
      iVar2 = FUN_00597ef0(param_1);
      if ((iVar2 == local_24) && (local_20[0] + *(int *)param_2 < local_18[0])) {
        return;
      }
      iVar2 = FUN_00597ef0(param_1);
      if (iVar2 == local_24 + 1) {
        iVar2 = local_18[0] + *(int *)param_2 * 2;
        FUN_005dcb00(local_8);
        iVar5 = FUN_005d5a50();
        if (iVar5 < iVar2) {
          FUN_005dcb00(local_8);
          piVar3 = (int *)FUN_0063aac0();
          if ((*piVar3 == 2) || (piVar3 = (int *)FUN_0063aac0(), *piVar3 == 3)) {
            bVar1 = true;
          }
          else {
            bVar1 = false;
          }
          if (!bVar1) {
            return;
          }
          uVar4 = FUN_00630f40("SID_CASINO_BETTING",0);
          uVar4 = FUN_00630f40("SID_FOURCARDPOKER_INSUFFICIENTFUNDS",uVar4);
          FUN_0062ff10(uVar4);
          return;
        }
      }
      iVar2 = FUN_00597ef0(param_1);
      if (iVar2 == local_24 + 2) {
        iVar2 = *(int *)param_2;
        FUN_005dcb00(local_8);
        iVar5 = FUN_005d5a50();
        if (iVar5 < iVar2 + local_18[0]) {
          FUN_005dcb00(local_8);
          piVar3 = (int *)FUN_0063aac0();
          if ((*piVar3 == 2) || (piVar3 = (int *)FUN_0063aac0(), *piVar3 == 3)) {
            bVar1 = true;
          }
          else {
            bVar1 = false;
          }
          if (!bVar1) {
            return;
          }
          uVar4 = FUN_00630f40("SID_CASINO_BETTING",0);
          uVar4 = FUN_00630f40("SID_FOURCARDPOKER_INSUFFICIENTFUNDS_FORANTE",uVar4);
          FUN_0062ff10(uVar4);
          return;
        }
      }
    }
    if (*(int *)param_2 != 0) {
      FUN_005cba10(param_2,param_3,param_4);
    }
  }
  return;
}

