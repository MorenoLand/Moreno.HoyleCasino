// FUN_00415430  00415430

void FUN_00415430(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = FUN_005dcb00(*(undefined4 *)(DAT_00790324 + 0x4d0));
  if (iVar3 == 0) goto LAB_00415613;
  FUN_005dcb00(*(undefined4 *)(DAT_00790324 + 0x4d0));
  piVar4 = (int *)FUN_0063aac0();
  if ((*piVar4 == 2) || (piVar4 = (int *)FUN_0063aac0(), *piVar4 == 3)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (!bVar1) goto LAB_00415613;
  switch(param_1) {
  case 0x30d7ea:
    cVar2 = FUN_00413360(*(undefined4 *)(DAT_00790324 + 0x4d0),1,1);
    if (cVar2 != '\0') {
      FUN_0040da70();
    }
    break;
  case 0x30d7eb:
    cVar2 = FUN_00413360(*(undefined4 *)(DAT_00790324 + 0x4d0),0,1);
    if (cVar2 != '\0') {
      FUN_0040da70();
    }
    break;
  case 0x30d7ec:
    cVar2 = FUN_00413360(*(undefined4 *)(DAT_00790324 + 0x4d0),2,1);
    if (cVar2 != '\0') {
      FUN_0040da70();
    }
    break;
  case 0x30d7ed:
    cVar2 = FUN_00413360(*(undefined4 *)(DAT_00790324 + 0x4d0),3,1);
    if (cVar2 != '\0') {
      FUN_0040da70();
    }
    break;
  case 0x30d7ee:
    cVar2 = FUN_00413360(*(undefined4 *)(DAT_00790324 + 0x4d0),4,1);
    if (cVar2 != '\0') {
      FUN_0040da70();
    }
    break;
  case 0x30d7ef:
    FUN_0041a0b0(*(undefined4 *)(DAT_00790324 + 0x4d0));
  default:
LAB_00415613:
    FUN_005dc7d0(param_1,param_2);
  }
  return;
}

