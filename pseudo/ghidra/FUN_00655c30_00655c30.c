// FUN_00655c30  00655c30

void FUN_00655c30(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int local_8;
  
  local_8 = 0;
  while( true ) {
    piVar1 = (int *)FUN_005fb720(0xb);
    iVar2 = (**(code **)(*piVar1 + 0xb8))();
    if (iVar2 <= local_8) {
      return;
    }
    FUN_005fb720(0xb);
    iVar2 = FUN_0060ca40(local_8);
    FUN_006375b0();
    iVar3 = FUN_00639f50();
    if (*(int *)(iVar2 + 0x14) == iVar3) break;
    local_8 = local_8 + 1;
  }
  piVar1 = (int *)FUN_005fb720(0xb);
  (**(code **)(*piVar1 + 0xc0))(local_8,1);
  return;
}

