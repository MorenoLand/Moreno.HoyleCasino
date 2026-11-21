// FUN_00542060  00542060

void __thiscall FUN_00542060(undefined4 param_1,int *param_2,undefined4 param_3,undefined1 param_4)

{
  bool bVar1;
  int iVar2;
  CPane *this;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  CSize *pCVar6;
  undefined8 local_24;
  int local_1c [2];
  int local_14;
  int local_10 [2];
  int local_8;
  
  local_24 = FUN_0064c8a0(0,0);
  local_8 = *(int *)(DAT_007933ec + 0xe8);
  iVar2 = FUN_005dcb00(local_8);
  if (iVar2 == 0) {
    return;
  }
  local_14 = local_8 * 3;
  FUN_005cb880(local_10,local_8);
  FUN_005cb880(local_1c,local_8);
  if (*param_2 == 0) {
    pCVar6 = (CSize *)&local_24;
    this = (CPane *)FUN_005dcb00(local_8);
    CPane::GetMinSize(this,pCVar6);
  }
  else {
    local_24 = *(undefined8 *)param_2;
  }
  if ((int)local_24 == 0) {
    uVar3 = (**(code **)(*DAT_007933e8 + 0x2b0))();
    local_24 = CONCAT44(local_24._4_4_,uVar3);
  }
  iVar2 = FUN_00540e40(param_1);
  if ((iVar2 == local_14 + 1) && (local_10[0] == 0)) {
    iVar2 = (**(code **)(*DAT_007933e8 + 0x2b0))();
    if ((int)local_24 < iVar2) {
      uVar3 = (**(code **)(*DAT_007933e8 + 0x2b0))();
      local_24 = CONCAT44(local_24._4_4_,uVar3);
    }
  }
  iVar2 = FUN_00540e40(param_1);
  if ((iVar2 == local_14 + 2) && (local_1c[0] == 0)) {
    iVar2 = (**(code **)(*DAT_007933e8 + 0x2b0))();
    if ((int)local_24 < iVar2) {
      uVar3 = (**(code **)(*DAT_007933e8 + 0x2b0))();
      local_24 = CONCAT44(local_24._4_4_,uVar3);
    }
  }
  FUN_005dcb00(local_8);
  iVar2 = FUN_005d5a50();
  if (iVar2 < (int)local_24) {
    FUN_005dcb00(local_8);
    uVar3 = FUN_005d5a50();
    local_24 = CONCAT44(local_24._4_4_,uVar3);
  }
  if ((int)local_24 < 1) {
LAB_0054237e:
    FUN_005cba10(param_2,param_3,param_4);
    return;
  }
  iVar2 = FUN_00540e40(param_1);
  if (iVar2 == local_14 + 1) {
    iVar2 = local_10[0] + (int)local_24 * 2;
    FUN_005dcb00(local_8);
    iVar4 = FUN_005d5a50();
    if (iVar4 < iVar2) {
      FUN_005dcb00(local_8);
      piVar5 = (int *)FUN_0063aac0();
      if (*piVar5 != 2) {
        piVar5 = (int *)FUN_0063aac0();
        if (*piVar5 != 3) {
          bVar1 = false;
          goto LAB_00542294;
        }
      }
      bVar1 = true;
LAB_00542294:
      if (!bVar1) {
        return;
      }
      uVar3 = FUN_00630f40("SID_CASINO_BETTING",0);
      uVar3 = FUN_00630f40("SID_THREECARDPOKER_INSUFFICIENTFUNDS",uVar3);
      FUN_0062ff10(uVar3);
      return;
    }
  }
  if (local_10[0] == 0) goto LAB_0054237e;
  iVar2 = FUN_00540e40(param_1);
  if (iVar2 != local_14 + 2) goto LAB_0054237e;
  FUN_005dcb00(local_8);
  iVar2 = FUN_005d5a50();
  if (local_10[0] <= iVar2 - (int)local_24) goto LAB_0054237e;
  FUN_005dcb00(local_8);
  piVar5 = (int *)FUN_0063aac0();
  if (*piVar5 != 2) {
    piVar5 = (int *)FUN_0063aac0();
    if (*piVar5 != 3) {
      bVar1 = false;
      goto LAB_0054234e;
    }
  }
  bVar1 = true;
LAB_0054234e:
  if (!bVar1) {
    return;
  }
  uVar3 = FUN_00630f40("SID_CASINO_BETTING",0);
  uVar3 = FUN_00630f40("SID_THREECARDPOKER_INSUFFICIENTFUNDS_FORANTE",uVar3);
  FUN_0062ff10(uVar3);
  return;
}

