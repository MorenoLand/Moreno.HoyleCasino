// FUN_00420110  00420110

void __fastcall FUN_00420110(int param_1)

{
  int iVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 local_18;
  undefined4 local_c;
  int local_8;
  
  iVar5 = *(int *)(DAT_00790358 + 0xb0 + *(int *)(param_1 + 4) * 4);
  iVar1 = *(int *)(DAT_00790358 + 0xc0 + *(int *)(param_1 + 4) * 4);
  local_18 = 0;
  local_c = 0;
  if (*(int *)(param_1 + 4) != 4) {
    iVar4 = FUN_00639110(*(undefined4 *)(param_1 + 4));
    if (iVar4 != 0) {
      uVar6 = 100;
      FUN_00639110(*(undefined4 *)(param_1 + 4));
      FUN_00646380(uVar6);
      uVar7 = 0;
      uVar6 = 0;
      FUN_00639110(*(undefined4 *)(param_1 + 4));
      FUN_006464d0(uVar6,uVar7);
    }
    FUN_005d9180(*(undefined4 *)(param_1 + 4),0);
  }
  for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
    (**(code **)(**(int **)(param_1 + 8 + local_8 * 4) + 0x70))();
  }
  if ((*(char *)(DAT_00790358 + 0xa9 + *(int *)(param_1 + 4)) != '\0') &&
     (iVar4 = FUN_00426370(*(undefined4 *)(param_1 + 4)), iVar4 == 5)) {
    FUN_00641e20(DAT_00790358 + 0x6c + *(int *)(param_1 + 4) * 10,5);
  }
  if ((*(int *)(param_1 + 4) == 4) ||
     (*(int *)(DAT_00790358 + 0xb0 + *(int *)(param_1 + 4) * 4) != 4)) {
    for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
      sVar3 = FUN_004262e0(*(undefined4 *)(param_1 + 4),local_8);
      if (sVar3 != 0) {
        FUN_0041f720(*(undefined4 *)(param_1 + 4),local_8);
      }
    }
  }
  if (*(int *)(param_1 + 4) != 4) {
    cVar2 = FUN_004272e0(*(undefined4 *)(param_1 + 4));
    if (cVar2 == '\0') {
      (**(code **)(**(int **)(DAT_00790360 + 0x44 + *(int *)(param_1 + 4) * 4) + 0xb0))(0);
    }
    else {
      (**(code **)(**(int **)(DAT_00790360 + 0x44 + *(int *)(param_1 + 4) * 4) + 0xb0))(1);
    }
    if ((((iVar5 == 1) || (iVar5 == 0)) || (iVar5 == 2)) || (iVar5 == 3)) {
      iVar4 = FUN_0041f920(*(undefined4 *)(param_1 + 4),0);
      iVar4 = iVar4 + 0x2d;
      uVar6 = FUN_0041f8e0(*(undefined4 *)(param_1 + 4),0);
      (**(code **)(**(int **)(param_1 + 0x1c) + 0x44))(uVar6,iVar4);
      switch(iVar5) {
      case 0:
        local_18 = 1;
        break;
      case 1:
        local_18 = 0;
        break;
      case 2:
      case 3:
        local_18 = 3;
      }
      (**(code **)(**(int **)(param_1 + 0x1c) + 0xb0))(local_18);
      (**(code **)(**(int **)(param_1 + 0x1c) + 0x74))();
    }
    else {
      (**(code **)(**(int **)(param_1 + 0x1c) + 0x70))();
    }
    if (((iVar1 == 1) || (iVar1 == 0)) || ((iVar1 == 2 || (iVar1 == 3)))) {
      iVar5 = FUN_0041f920(*(undefined4 *)(param_1 + 4),0);
      iVar5 = iVar5 + 0x55;
      uVar6 = FUN_0041f8e0(*(undefined4 *)(param_1 + 4),0);
      (**(code **)(**(int **)(param_1 + 0x20) + 0x44))(uVar6,iVar5);
      switch(iVar1) {
      case 0:
        local_c = 1;
        break;
      case 1:
        local_c = 0;
        break;
      case 2:
      case 3:
        local_c = 3;
      }
      (**(code **)(**(int **)(param_1 + 0x20) + 0xb0))(local_c);
      (**(code **)(**(int **)(param_1 + 0x20) + 0x74))();
    }
    else {
      (**(code **)(**(int **)(param_1 + 0x20) + 0x70))();
    }
  }
  return;
}

