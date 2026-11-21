// FUN_005a0210  005a0210

void FUN_005a0210(void)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 local_1c [8];
  undefined1 local_14 [8];
  int local_c;
  int local_8;
  
  local_8 = FUN_005a2020();
  local_c = local_8 * 3;
  cVar1 = FUN_005a2970();
  if (((cVar1 != '\0') && (piVar2 = (int *)FUN_005cb880(local_14,local_8), *piVar2 == 0)) &&
     (piVar2 = (int *)FUN_005cb880(local_1c,local_8), 0 < *piVar2)) {
    uVar3 = FUN_00630f40("SID_CASINO_BETTING",0);
    uVar3 = FUN_00630f40("SID_BIGRAISE_INVALID_ANTE_BET",uVar3);
    FUN_0062ff10(uVar3);
    return;
  }
  uVar3 = FUN_005a2020();
  cVar1 = FUN_005a2740(uVar3);
  if (cVar1 == '\0') {
    iVar4 = FUN_005a1ff0();
    *(undefined1 *)(iVar4 + 0x4a1) = 1;
  }
  else {
    iVar4 = FUN_005a1ff0();
    *(undefined1 *)(iVar4 + 0x4a0) = 1;
  }
  piVar2 = (int *)FUN_005a1ff0();
  (**(code **)(*piVar2 + 0x14))();
  FUN_005db890();
  FUN_0059fa00();
  return;
}

