// FUN_0064d5e0  0064d5e0

void FUN_0064d5e0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int local_10;
  int local_8;
  
  local_8 = 0;
  do {
    iVar2 = (**(code **)(*DAT_0162ee84 + 0x10c))();
    if (iVar2 <= local_8) {
      return;
    }
    piVar3 = (int *)FUN_0063aac0();
    local_10 = local_8;
    if (*piVar3 == 0) {
      do {
        local_10 = local_10 + 1;
        iVar2 = (**(code **)(*DAT_0162ee84 + 0x10c))();
        if (iVar2 <= local_10) break;
        piVar3 = (int *)FUN_0063aac0();
      } while (*piVar3 == 0);
      iVar2 = (**(code **)(*DAT_0162ee84 + 0x10c))();
      if (local_10 < iVar2) {
        uVar1 = *(undefined4 *)(param_1 + local_8 * 4);
        *(undefined4 *)(param_1 + local_8 * 4) = *(undefined4 *)(param_1 + local_10 * 4);
        *(int *)(*(int *)(param_1 + local_8 * 4) + 4) = local_8;
        *(undefined4 *)(param_1 + local_10 * 4) = uVar1;
        *(int *)(*(int *)(param_1 + local_10 * 4) + 4) = local_10;
      }
    }
    local_8 = local_8 + 1;
  } while( true );
}

