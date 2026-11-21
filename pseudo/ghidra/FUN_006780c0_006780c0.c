// FUN_006780c0  006780c0

void FUN_006780c0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int local_8;
  
  local_8 = 0;
  while( true ) {
    piVar1 = (int *)FUN_005fb720(0);
    iVar2 = (**(code **)(*piVar1 + 0xb8))();
    if (iVar2 <= local_8) {
      return;
    }
    FUN_005fb720(0);
    iVar2 = FUN_0060ca40(local_8);
    iVar3 = (**(code **)(*DAT_0162ee84 + 0x390))();
    if (*(int *)(iVar2 + 0x14) == iVar3) break;
    local_8 = local_8 + 1;
  }
  piVar1 = (int *)FUN_005fb720(0);
  (**(code **)(*piVar1 + 0xc0))(local_8,1);
  return;
}

