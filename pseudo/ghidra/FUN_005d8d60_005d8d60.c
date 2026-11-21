// FUN_005d8d60  005d8d60

undefined4 __thiscall FUN_005d8d60(int *param_1,undefined4 param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int local_48;
  int local_44;
  int local_8;
  
  if (param_3 != 0) {
    piVar3 = (int *)FUN_0063aac0();
    iVar4 = *piVar3;
    piVar3 = (int *)FUN_0063aac0();
    if ((iVar4 == 0) == (*piVar3 == 0)) {
      iVar4 = FUN_0063aac0();
      iVar5 = FUN_0063aac0();
      iVar4 = strcmp((char *)(iVar5 + 4),(char *)(iVar4 + 4));
      if (iVar4 == 0) {
        piVar3 = (int *)FUN_0063aac0();
        if ((*piVar3 == 2) || (piVar3 = (int *)FUN_0063aac0(), *piVar3 == 3)) {
          local_44 = 1;
        }
        else {
          local_44 = 0;
        }
        piVar3 = (int *)FUN_0063aac0();
        if ((*piVar3 == 2) || (piVar3 = (int *)FUN_0063aac0(), *piVar3 == 3)) {
          local_48 = 1;
        }
        else {
          local_48 = 0;
        }
        if (local_44 == local_48) {
          return 1;
        }
      }
    }
  }
  *(undefined1 *)(param_1 + 0x1f) = 1;
  for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
    (**(code **)(*param_1 + 0x290))(local_8);
  }
  if (DAT_0163068c != 0) {
    piVar3 = (int *)FUN_0063aac0();
    if ((*piVar3 == 2) || (piVar3 = (int *)FUN_0063aac0(), *piVar3 == 3)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if ((bVar1) && (cVar2 = FUN_005da830(), cVar2 != '\0')) {
      return 1;
    }
  }
  if (param_3 != 0) {
    (**(code **)(*param_1 + 0x264))(param_3);
  }
  return 1;
}

