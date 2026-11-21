// FUN_00523eb0  00523eb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00523eb0(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int *extraout_var;
  int *piVar5;
  int local_8;
  
  iVar2 = FUN_005fc360();
  piVar5 = extraout_var;
  if (iVar2 == 0) {
    DAT_0079336c = 0;
    uVar3 = FUN_0062fc30(0,0x71);
    *(undefined4 *)(DAT_0079337c + 0x314) = uVar3;
    while (*(int *)(DAT_0079337c + 0x314) % 3 != 2) {
      uVar3 = FUN_0062fc30(0,0x71);
      *(undefined4 *)(DAT_0079337c + 0x314) = uVar3;
    }
    *(int *)(DAT_0079337c + 0x314) = *(int *)(DAT_0079337c + 0x314) % 0x72;
    DAT_00793368 = *(int *)(DAT_0079337c + 0x314);
    cVar1 = FUN_00637630();
    if ((cVar1 == '\0') || (DAT_00795f94 != '\0')) {
      while (DAT_0079336c < 0x71) {
        DAT_0079336c = DAT_0079336c + 1;
        DAT_00793368 = DAT_00793368 + 1;
        if (0x71 < DAT_00793368) {
          DAT_00793368 = 0;
        }
      }
      FUN_005229b0();
      return;
    }
    FUN_0062fbf0(10);
    FUN_005228d0();
    for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
      uVar3 = FUN_005dcb00(local_8);
      piVar4 = (int *)FUN_0063aac0(iVar2,piVar5,uVar3);
      if (*piVar4 != 0) {
        uVar3 = 1;
        FUN_005dcb00(local_8,1);
        FUN_00646c20(uVar3);
      }
    }
    FUN_005eaf00(0x1adba);
    (**(code **)(**(int **)(DAT_0079337c + 4) + 0x74))();
    FUN_005eaf00(0x1adb1);
    FUN_005eaf00(0x1adbf);
    (**(code **)(*DAT_0162ee84 + 0x80))
              (0x18a8f,0,0,10,3,0x3f800000,_DAT_006b3654,DAT_0079337c + 0x318);
  }
  else if (iVar2 != 1) {
    if (iVar2 != 2) {
      return;
    }
    DAT_0079336c = DAT_0079336c + 1;
    if (DAT_0079336c == 0x2d) {
      FUN_005f44e0(0x18a8f,1);
      (**(code **)(*DAT_0162ee84 + 0x80))(0x18a8e,0,0,5,1,0x3f800000,_DAT_006b3654,0);
    }
    DAT_00793368 = DAT_00793368 + 1;
    if (0x71 < DAT_00793368) {
      DAT_00793368 = 0;
    }
    if (0x70 < DAT_0079336c) {
      FUN_005229b0();
      return;
    }
    (**(code **)(*piVar5 + 8))(1,2);
    return;
  }
  (**(code **)(**(int **)(DAT_0079337c + 0x14) + 0xb0))(DAT_0079336c);
  (**(code **)(**(int **)(DAT_0079337c + 0x14) + 0x74))();
  (**(code **)(**(int **)(DAT_0079337c + 0x10) + 0xb0))(DAT_00793368);
  (**(code **)(**(int **)(DAT_0079337c + 0x10) + 0x74))();
  (**(code **)(*piVar5 + 8))(2,2);
  return;
}

