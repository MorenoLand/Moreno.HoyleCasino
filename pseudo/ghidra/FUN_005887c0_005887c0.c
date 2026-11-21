// FUN_005887c0  005887c0

void __fastcall FUN_005887c0(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int local_c;
  int local_8;
  
  *(undefined4 *)(param_1 + 0x3c04) = 0;
  *(undefined4 *)(param_1 + 0x3c08) = 0;
  for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
    strcpy((char *)(param_1 + 0x3ba4 + local_8 * 0x10),(char *)&PTR_006b27f8);
    *(undefined4 *)(param_1 + 0x3be4 + local_8 * 4) = 0;
    *(undefined4 *)(param_1 + 0x3bf4 + local_8 * 4) = 0;
  }
  for (local_8 = 0; iVar2 = (**(code **)(*DAT_0162ee84 + 0x10c))(), local_8 < iVar2;
      local_8 = local_8 + 1) {
    FUN_005dcb00(local_8);
    piVar3 = (int *)FUN_0063aac0();
    if ((*piVar3 == 2) || (piVar3 = (int *)FUN_0063aac0(), *piVar3 == 3)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      FUN_005dcb00(local_8);
      iVar2 = FUN_0063aac0();
      iVar2 = strcmp((char *)(param_1 + 0x3ba4 + *(int *)(param_1 + 0x3c04) * 0x10),
                     (char *)(iVar2 + 4));
      if (iVar2 != 0) {
        iVar2 = *(int *)(param_1 + 0x3c04);
        *(int *)(param_1 + 0x3c04) = *(int *)(param_1 + 0x3c04) + 1;
        FUN_005dcb00(local_8);
        iVar4 = FUN_0063aac0();
        strcpy((char *)(param_1 + 0x3ba4 + iVar2 * 0x10),(char *)(iVar4 + 4));
      }
    }
  }
  for (local_8 = 0; local_8 < *(int *)(param_1 + 0x3c04); local_8 = local_8 + 1) {
    FUN_005e2b90(param_1 + 0x3ba4 + local_8 * 0x10,param_1 + 0x328 + local_8 * 0xe10,0xffffffff);
  }
  for (local_8 = 0; local_8 < *(int *)(param_1 + 0x3c04); local_8 = local_8 + 1) {
    for (local_c = 0;
        (local_c < 100 && (*(int *)(param_1 + local_8 * 0xe10 + 0x344 + local_c * 0x24) != 0));
        local_c = local_c + 1) {
      *(int *)(param_1 + 0x3bf4 + local_8 * 4) = *(int *)(param_1 + 0x3bf4 + local_8 * 4) + 1;
    }
    if (*(int *)(param_1 + 0x3bf4 + local_8 * 4) == 0) {
      *(undefined4 *)(param_1 + 0x3bf4 + local_8 * 4) = 1;
    }
    else {
      *(int *)(param_1 + 0x3be4 + local_8 * 4) = *(int *)(param_1 + 0x3bf4 + local_8 * 4) + -1;
    }
  }
  return;
}

