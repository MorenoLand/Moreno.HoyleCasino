// FUN_004286a0  004286a0

int FUN_004286a0(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int local_30;
  int local_28;
  int local_18;
  
  iVar2 = (**(code **)(*DAT_007906d0 + 0x2b0))();
  local_28 = (**(code **)(*DAT_007906d0 + 0x2b4))();
  FUN_005dcb00(param_1);
  FUN_005dcb00(param_1);
  iVar3 = FUN_005d5a50();
  piVar4 = (int *)FUN_005dcb00(param_1);
  iVar5 = (**(code **)(*piVar4 + 0x18))();
  if (iVar3 < local_28) {
    local_28 = iVar3;
  }
  if (iVar3 < iVar2) {
    iVar2 = 0;
  }
  else {
    iVar3 = FUN_0062fbf0(3);
    iVar6 = FUN_0062fbf0(5);
    local_18 = ((iVar3 * iVar2 + iVar2) * iVar5) / (iVar6 + 1);
    cVar1 = FUN_00436a50();
    if (cVar1 != '\0') {
      iVar3 = FUN_0062fbf0(8);
      local_18 = (iVar3 + 1) * local_18;
    }
    cVar1 = FUN_0043b4e0();
    if ((cVar1 != '\0') && (cVar1 = FUN_0043b530(param_1), cVar1 != '\0')) {
      piVar4 = (int *)FUN_005dcb00(param_1);
      (**(code **)(*piVar4 + 0x1c))();
      iVar3 = FUN_00686cc0();
      if (local_28 < iVar3) {
        local_30 = local_28;
      }
      else {
        piVar4 = (int *)FUN_005dcb00(param_1);
        (**(code **)(*piVar4 + 0x1c))();
        local_30 = FUN_00686cc0();
      }
      local_18 = local_30;
    }
    if ((iVar2 <= local_18) && (iVar2 = local_28, local_18 < local_28)) {
      iVar2 = local_18;
    }
  }
  return iVar2;
}

