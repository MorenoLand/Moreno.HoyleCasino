// FUN_005d52e0  005d52e0

undefined4 __fastcall FUN_005d52e0(int param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  int local_8;
  
  cVar2 = (**(code **)(*DAT_007947e0 + 0x33c))(0xffffffff);
  if ((cVar2 != '\0') && (iVar3 = FUN_005de320(*(undefined4 *)(param_1 + 4)), 1 < iVar3)) {
    piVar4 = (int *)FUN_0063aac0();
    if (*piVar4 == 1) {
      return *(undefined4 *)(param_1 + 0x3a4);
    }
    for (local_8 = 0;
        (iVar3 = (**(code **)(*DAT_0162ee84 + 0x10c))(), local_8 < iVar3 &&
        (local_8 != *(int *)(param_1 + 4))); local_8 = local_8 + 1) {
      piVar4 = (int *)FUN_0063aac0();
      if ((*piVar4 == 2) || (piVar4 = (int *)FUN_0063aac0(), *piVar4 == 3)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (bVar1) {
        iVar3 = FUN_0063aac0();
        iVar5 = FUN_0063aac0();
        iVar3 = strcmp((char *)(iVar5 + 4),(char *)(iVar3 + 4));
        if (iVar3 == 0) {
          FUN_005dcb00(local_8);
          uVar6 = FUN_005d52e0();
          return uVar6;
        }
      }
    }
  }
  return *(undefined4 *)(param_1 + 0x3a4);
}

