// FUN_00648ae0  00648ae0

bool FUN_00648ae0(void)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int extraout_var;
  undefined4 uVar4;
  undefined4 uVar5;
  
  cVar1 = (**(code **)(*DAT_0162ee84 + 200))();
  if (cVar1 != '\0') {
    iVar3 = extraout_var;
    cVar1 = (**(code **)(*DAT_0162ee80 + 0x1e0))();
    if (cVar1 != '\0') {
      uVar5 = *(undefined4 *)(iVar3 + 4);
      piVar2 = (int *)FUN_0063aac0();
      if (*piVar2 == 1) {
        iVar3 = FUN_006340d0();
        return -1 < iVar3;
      }
      uVar4 = *(undefined4 *)(iVar3 + 4);
      piVar2 = (int *)FUN_0063aac0();
      if (*piVar2 != 3) {
        return false;
      }
      if ((*(int *)(iVar3 + 0x14) != 0) &&
         (cVar1 = FUN_00665250(iVar3,3,uVar4,uVar5), cVar1 != '\0')) {
        return true;
      }
      return false;
    }
  }
  return false;
}

