// FUN_004299b0  004299b0

void __fastcall FUN_004299b0(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  int local_8;
  
  FUN_004298a0();
  for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
    FUN_0042bf10();
  }
  if (*(int *)(DAT_007906d4 + 0xab4) < 0) {
    (**(code **)(**(int **)(param_1 + 0x160) + 0x70))();
  }
  else {
    iVar2 = FUN_005dcb00(*(undefined4 *)(DAT_007906d4 + 0xab4));
    if (*(int *)(iVar2 + 0x49c) != 0) {
      FUN_005dcb00(*(undefined4 *)(DAT_007906d4 + 0xab4));
      cVar1 = FUN_005f54c0();
      if (cVar1 != '\0') {
        FUN_005dcb00(*(undefined4 *)(DAT_007906d4 + 0xab4));
        FUN_00646f80();
        iVar2 = FUN_005f53c0();
        (**(code **)(**(int **)(param_1 + 0x160) + 0x6c))(iVar2 + 1);
        FUN_005dcb00(*(undefined4 *)(DAT_007906d4 + 0xab4));
        piVar3 = (int *)FUN_00646f80();
        FUN_005dcb00(*(undefined4 *)(DAT_007906d4 + 0xab4));
        piVar4 = (int *)FUN_00646f80();
        uVar5 = (**(code **)(*piVar3 + 0x54))();
        uVar5 = (**(code **)(*piVar4 + 0x4c))(uVar5);
        (**(code **)(**(int **)(param_1 + 0x160) + 0x44))(uVar5);
        (**(code **)(**(int **)(param_1 + 0x160) + 0x74))();
      }
    }
  }
  for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
    cVar1 = FUN_004349b0(local_8);
    if (cVar1 != '\0') {
      cVar1 = FUN_005da7b0();
      if (cVar1 != '\0') {
        cVar1 = (**(code **)(*DAT_007906d0 + 0x2c4))(local_8);
        if (cVar1 == '\0') {
          cVar1 = FUN_00434a00(local_8);
          if (cVar1 != '\0') {
            FUN_00429e90();
          }
        }
      }
    }
  }
  cVar1 = FUN_005da7b0();
  if ((cVar1 != '\0') && (DAT_0163068c == 0)) {
    (**(code **)(*DAT_007906d0 + 0x2f0))();
  }
  return;
}

