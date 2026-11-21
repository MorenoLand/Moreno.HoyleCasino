// FUN_006464d0  006464d0

void __thiscall FUN_006464d0(int param_1,char param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  
  *(undefined1 *)(param_1 + 0x5c) = 1;
  FUN_00646c20(param_2);
  piVar3 = (int *)FUN_0063aac0();
  if (*piVar3 == 0) {
    if ((*(char *)(param_1 + 0x2a) != '\0') &&
       (cVar2 = (**(code **)(*DAT_0162ee80 + 0x198))(), cVar2 != '\0')) {
      FUN_0064afa0(0);
    }
  }
  else {
    piVar3 = (int *)FUN_0063aac0();
    if ((*piVar3 == 2) || (piVar3 = (int *)FUN_0063aac0(), *piVar3 == 3)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      piVar3 = (int *)FUN_0063aac0();
      if (*piVar3 == 3) {
        FUN_00664630();
      }
      else {
        uVar7 = FUN_00646d10();
        uVar4 = FUN_004842b0(uVar7);
        iVar5 = FUN_006394c0(uVar4,uVar7);
        if ((param_2 != '\0') || (iVar6 = FUN_005eafc0(), iVar6 != iVar5)) {
          FUN_005eaf00(iVar5);
          uVar7 = FUN_005eb240();
          (**(code **)(**(int **)(param_1 + 0xc) + 0xb0))(uVar7);
        }
        if ((param_2 != '\0') || (iVar6 = FUN_005eafc0(), iVar6 != iVar5)) {
          FUN_005eaf00(iVar5);
          (**(code **)(**(int **)(param_1 + 8) + 0xb0))(0);
        }
        (**(code **)(**(int **)(param_1 + 0xc) + 0x74))();
        (**(code **)(**(int **)(param_1 + 8) + 0x74))();
      }
      if (*(int *)(param_1 + 0x1c) != 0) {
        (**(code **)(**(int **)(param_1 + 0x1c) + 0x70))();
      }
    }
    piVar3 = (int *)FUN_0063aac0();
    if (*piVar3 == 1) {
      if (*(int *)(*(int *)(param_1 + 4) + 0xc) == -1) {
        uVar7 = *(undefined4 *)(*(int *)(param_1 + 4) + 8);
        uVar4 = FUN_00646d10();
        iVar5 = FUN_00639610(uVar7,uVar4);
        uVar7 = *(undefined4 *)(*(int *)(param_1 + 4) + 8);
        uVar4 = FUN_00646d10();
        iVar6 = FUN_00639670(uVar7,uVar4);
        if ((param_2 != '\0') || (cVar2 = FUN_00648200(), cVar2 == '\0')) {
          FUN_005f5d50(0);
          FUN_005eaf00(iVar5);
          (**(code **)(**(int **)(param_1 + 0xc) + 0xb0))(0);
          if (iVar6 == iVar5) {
            uVar7 = FUN_005eb240();
            (**(code **)(**(int **)(param_1 + 0xc) + 0xb0))(uVar7);
          }
        }
        if ((param_2 != '\0') ||
           (((cVar2 = FUN_00648200(), cVar2 == '\0' && (cVar2 = FUN_006481b0(), cVar2 == '\0')) &&
            (cVar2 = FUN_006480d0(), cVar2 == '\0')))) {
          FUN_005f5d50(0);
          FUN_005eaf00(iVar6);
          (**(code **)(**(int **)(param_1 + 8) + 0xb0))(0);
        }
        (**(code **)(**(int **)(param_1 + 0xc) + 0x74))();
        if ((param_2 != '\0') || (cVar2 = FUN_00648200(), cVar2 == '\0')) {
          (**(code **)(**(int **)(param_1 + 8) + 0x74))();
        }
        iVar6 = FUN_005eafc0();
        if (iVar6 == iVar5) {
          iVar5 = FUN_005eafc0();
          iVar6 = FUN_005eafc0();
          if (((iVar5 == iVar6) && (cVar2 = FUN_005f54c0(), cVar2 == '\0')) &&
             (cVar2 = FUN_005f54c0(), cVar2 != '\0')) {
            (**(code **)(**(int **)(param_1 + 8) + 0xb0))(0);
            (**(code **)(**(int **)(param_1 + 8) + 0x74))();
          }
        }
        uVar7 = FUN_005f53c0();
        FUN_00646380(uVar7);
      }
      else {
        uVar7 = *(undefined4 *)(*(int *)(param_1 + 4) + 0xc);
        uVar4 = FUN_00646d10();
        iVar5 = FUN_006394c0(uVar7,uVar4);
        if ((param_2 != '\0') || (iVar6 = FUN_005eafc0(), iVar6 != iVar5)) {
          FUN_005eaf00(iVar5);
          uVar7 = FUN_005eb240();
          (**(code **)(**(int **)(param_1 + 0xc) + 0xb0))(uVar7);
        }
        if ((param_2 != '\0') || (iVar6 = FUN_005eafc0(), iVar6 != iVar5)) {
          FUN_005eaf00(iVar5);
          (**(code **)(**(int **)(param_1 + 8) + 0xb0))(0);
        }
        (**(code **)(**(int **)(param_1 + 0xc) + 0x74))();
        (**(code **)(**(int **)(param_1 + 8) + 0x74))();
      }
      if (*(char *)(param_1 + 0x2b) != '\0') {
        if (*(int *)(param_1 + 0x1c) == 0) {
          if (*(int *)(param_1 + 0x1c) != 0) {
            (**(code **)(**(int **)(param_1 + 0x1c) + 0x70))();
          }
        }
        else {
          (**(code **)(**(int **)(param_1 + 0x1c) + 0x74))();
        }
      }
    }
    if (param_3 != 0) {
      *(int *)(param_1 + 0x30) = param_3;
    }
    if (*(char *)(param_1 + 0x2a) != '\0') {
      FUN_0064afa0(*(undefined4 *)(param_1 + 0x30));
    }
    if (((((*(char *)(param_1 + 0x2c) == '\0') ||
          (cVar2 = (**(code **)(*DAT_0162ee80 + 0x200))(), cVar2 != '\0')) ||
         (cVar2 = (**(code **)(*DAT_0162ee84 + 200))(), cVar2 == '\0')) ||
        (cVar2 = (**(code **)(*DAT_0162ee80 + 0x1e0))(), cVar2 == '\0')) ||
       ((piVar3 = (int *)FUN_0063aac0(), *piVar3 == 1 &&
        (*(int *)(*(int *)(param_1 + 4) + 0xc) != -1)))) {
      if (*(int *)(param_1 + 0x20) != 0) {
        (**(code **)(**(int **)(param_1 + 0x20) + 0x70))();
      }
      if (*(int *)(param_1 + 0x24) != 0) {
        (**(code **)(**(int **)(param_1 + 0x24) + 0x70))();
      }
    }
    else if (*(int *)(param_1 + 4) != 0) {
      if (*(int *)(param_1 + 0x20) != 0) {
        if (*(int *)(*(int *)(param_1 + 0x18) + 400) == 0) {
          iVar5 = FUN_005f53c0();
          (**(code **)(**(int **)(param_1 + 0x20) + 0x6c))(iVar5 + 10);
        }
        else {
          iVar5 = FUN_005f53c0();
          (**(code **)(**(int **)(param_1 + 0x20) + 0x6c))(iVar5 + 2);
        }
        (**(code **)(**(int **)(param_1 + 0x20) + 0x74))();
      }
      if (*(int *)(param_1 + 0x24) != 0) {
        if (*(int *)(*(int *)(param_1 + 0x18) + 400) == 0) {
          iVar5 = FUN_005f53c0();
          (**(code **)(**(int **)(param_1 + 0x24) + 0x6c))(iVar5 + 10);
        }
        else {
          iVar5 = FUN_005f53c0();
          (**(code **)(**(int **)(param_1 + 0x24) + 0x6c))(iVar5 + 2);
        }
        (**(code **)(**(int **)(param_1 + 0x24) + 0x74))();
      }
    }
  }
  return;
}

