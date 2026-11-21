// FUN_0063e3b0  0063e3b0

void __thiscall FUN_0063e3b0(int param_1,char param_2,char param_3,char *param_4)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined **ppuVar5;
  char *pcVar6;
  int local_8;
  
  if (param_2 != -1) {
    piVar2 = (int *)FUN_0063aac0();
    *piVar2 = (int)param_2;
    iVar3 = FUN_0063aac0();
    *(int *)(iVar3 + 0x54) = (int)param_3;
    piVar2 = (int *)FUN_0063aac0();
    if (*piVar2 == 2) {
      ppuVar5 = &PTR_006b27f8;
      iVar3 = FUN_0063aac0();
      strcpy((char *)(iVar3 + 0x38),(char *)ppuVar5);
    }
    else {
      pcVar6 = param_4;
      iVar3 = FUN_0063aac0();
      strcpy((char *)(iVar3 + 0x38),pcVar6);
    }
    for (local_8 = 0; iVar3 = (**(code **)(*DAT_0162ee84 + 0x10c))(), local_8 < iVar3;
        local_8 = local_8 + 1) {
      if (local_8 != *(int *)(param_1 + 0x1c4)) {
        piVar2 = (int *)FUN_0063aac0();
        if ((*piVar2 == 2) || (piVar2 = (int *)FUN_0063aac0(), *piVar2 == 3)) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (bVar1) {
          piVar2 = (int *)FUN_0063aac0();
          if ((*piVar2 == 2) || (piVar2 = (int *)FUN_0063aac0(), *piVar2 == 3)) {
            bVar1 = true;
          }
          else {
            bVar1 = false;
          }
          if (bVar1) {
            iVar3 = FUN_0063aac0();
            iVar4 = FUN_0063aac0();
            iVar3 = strcmp((char *)(iVar4 + 4),(char *)(iVar3 + 4));
            if (iVar3 == 0) {
              piVar2 = (int *)FUN_0063aac0();
              *piVar2 = (int)param_2;
              iVar3 = FUN_0063aac0();
              *(int *)(iVar3 + 0x54) = (int)param_3;
              piVar2 = (int *)FUN_0063aac0();
              if (*piVar2 == 2) {
                ppuVar5 = &PTR_006b27f8;
                iVar3 = FUN_0063aac0();
                strcpy((char *)(iVar3 + 0x38),(char *)ppuVar5);
              }
              else {
                pcVar6 = param_4;
                iVar3 = FUN_0063aac0();
                strcpy((char *)(iVar3 + 0x38),pcVar6);
              }
            }
          }
        }
      }
    }
    *(undefined4 *)(param_1 + 0x1c4) = 0xffffffff;
  }
  if (DAT_01630690 != 0) {
    FUN_005f8990();
    DAT_01630690 = 0;
  }
  FUN_0063c620();
  return;
}

