// FUN_00636250  00636250

void __fastcall FUN_00636250(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 local_8;
  
  local_8 = 0;
  while( true ) {
    iVar2 = (**(code **)(*DAT_0162ee84 + 0x10c))();
    if (iVar2 <= local_8) break;
    if (*(int *)(*(int *)(*(int *)(param_1 + 0x58) + local_8 * 4) + 0x20) != 0) {
      FUN_0063b2d0();
    }
    local_8 = local_8 + 1;
  }
  local_8 = 0;
  while( true ) {
    iVar2 = (**(code **)(*DAT_0162ee84 + 0x10c))();
    if (iVar2 <= local_8) break;
    piVar3 = (int *)FUN_0063aac0();
    if (*piVar3 == 1) {
      puVar4 = (undefined4 *)FUN_0063aac0();
      *puVar4 = 0;
    }
    local_8 = local_8 + 1;
  }
  FUN_0064d5e0(*(undefined4 *)(param_1 + 0x58));
  local_8 = 0;
  do {
    iVar2 = (**(code **)(*DAT_0162ee84 + 0x10c))();
    if (iVar2 <= local_8) {
      return;
    }
    piVar3 = (int *)FUN_0063aac0();
    if (*piVar3 == 2) {
LAB_006363a5:
      bVar1 = true;
    }
    else {
      piVar3 = (int *)FUN_0063aac0();
      if (*piVar3 == 3) goto LAB_006363a5;
      bVar1 = false;
    }
    if (!bVar1) {
      FUN_0063a3e0(local_8,0);
    }
    local_8 = local_8 + 1;
  } while( true );
}

