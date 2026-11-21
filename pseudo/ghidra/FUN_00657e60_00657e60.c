// FUN_00657e60  00657e60

void __thiscall FUN_00657e60(int param_1,int param_2,char param_3)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 local_124;
  int local_11c;
  int local_118;
  char local_114 [260];
  uint local_10;
  undefined4 local_c;
  int local_8;
  
  local_10 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_11c = param_2;
  uVar4 = FUN_00657820();
  FUN_00658f80(uVar4);
  FUN_006067e0();
  for (local_118 = 0; local_118 < 0xc; local_118 = local_118 + 1) {
    if (*(int *)(param_1 + 0x278) == 5) {
      piVar5 = (int *)FUN_00606350(local_118);
      (**(code **)(*piVar5 + 0x6c))(6);
    }
    else {
      piVar5 = (int *)FUN_00606350(local_118);
      (**(code **)(*piVar5 + 0x6c))(3);
    }
  }
  if (param_2 == -1) {
    iVar6 = FUN_006651e0(*(undefined4 *)(param_1 + 0x278));
    if (iVar6 == 0) {
      local_11c = 0;
    }
    else {
      iVar6 = FUN_006577b0(0xffffffff);
      local_11c = (iVar6 / 0xc) * 0xc;
    }
  }
  if (param_3 == '\0') {
    FUN_006067e0();
    *(char *)(param_1 + 0x280) = (char)(local_11c / 0xc);
    FUN_00657cf0();
    for (local_118 = 0; local_118 < 0x15; local_118 = local_118 + 1) {
      FUN_00606350(local_118);
      iVar6 = FUN_005f5400();
      iVar7 = FUN_00657bb0();
      if (iVar6 + -0x473 == iVar7) {
        FUN_00606350(local_118);
        uVar4 = FUN_005f5400();
        FUN_006065d0(uVar4);
        break;
      }
    }
  }
  local_8 = FUN_00657bd0();
  for (local_118 = 0; local_118 < 0x15; local_118 = local_118 + 1) {
    FUN_00606350(local_118);
    iVar6 = FUN_005f5400();
    if (iVar6 + -0x473 < local_8) {
      piVar5 = (int *)FUN_00606350(local_118);
      (**(code **)(*piVar5 + 0x74))();
    }
    else {
      piVar5 = (int *)FUN_00606350(local_118);
      (**(code **)(*piVar5 + 0x70))();
    }
  }
  FUN_00657c40();
  cVar3 = FUN_00657820();
  if (cVar3 == '\0') {
    for (local_118 = 0; local_118 < 0xc; local_118 = local_118 + 1) {
      uVar4 = FUN_006651e0(0);
      iVar6 = FUN_00675b40(*(undefined4 *)(param_1 + 0x278),local_11c + local_118,uVar4);
      if (iVar6 == -1) {
        (**(code **)(**(int **)(param_1 + 0x60c + local_118 * 4) + 0x70))();
        piVar5 = (int *)FUN_00606350(local_118);
        (**(code **)(*piVar5 + 0x70))();
      }
      else {
        FUN_0065b1b0(*(undefined4 *)(param_1 + 0x278),local_11c + local_118);
        iVar6 = FUN_006577b0(0xffffffff);
        if (iVar6 == local_11c + local_118) {
          (**(code **)(**(int **)(param_1 + 0x60c + local_118 * 4) + 0xf4))();
        }
        if ((*(int *)(param_1 + 0x278) == 0) || (*(int *)(param_1 + 0x278) == 2)) {
          piVar5 = (int *)FUN_00606350(local_118);
          (**(code **)(*piVar5 + 0x70))();
        }
        else {
          piVar5 = (int *)FUN_00606350(local_118);
          (**(code **)(*piVar5 + 0x74))();
        }
      }
    }
  }
  else {
    bVar1 = false;
    bVar2 = false;
    iVar6 = FUN_00606570();
    if (iVar6 == 0x3fd) {
      bVar1 = true;
      bVar2 = false;
    }
    else if (iVar6 == 0x3fe) {
      bVar1 = false;
      bVar2 = true;
    }
    else if (iVar6 == 0x3ff) {
      bVar1 = true;
      bVar2 = true;
    }
    cVar3 = FUN_00657890(3);
    if ((cVar3 == '\0') && (cVar3 = FUN_00657890(4), cVar3 == '\0')) {
      local_124 = 8;
      local_c = 9;
    }
    else {
      local_124 = 3;
      local_c = 4;
    }
    for (local_118 = 0; local_118 < 0xc; local_118 = local_118 + 1) {
      uVar4 = FUN_006651e0(0);
      iVar6 = FUN_00675b40(local_124,local_11c + local_118,uVar4);
      if (iVar6 == -1) {
        (**(code **)(**(int **)(param_1 + 0x60c + local_118 * 4) + 0x70))();
        piVar5 = (int *)FUN_00606350(local_118);
        (**(code **)(*piVar5 + 0x70))();
      }
      else {
        FUN_0065b1b0(local_124,local_11c + local_118);
        iVar6 = FUN_006577b0(local_124);
        if ((iVar6 == local_11c + local_118) && (bVar1)) {
          (**(code **)(**(int **)(param_1 + 0x60c + local_118 * 4) + 0xf4))();
        }
        iVar6 = FUN_006577b0(local_c);
        if ((iVar6 == local_11c + local_118) && (bVar2)) {
          (**(code **)(**(int **)(param_1 + 0x60c + local_118 * 4) + 0xf4))();
        }
        piVar5 = (int *)FUN_00606350(local_118);
        (**(code **)(*piVar5 + 0x74))();
      }
    }
  }
  cVar3 = FUN_00657890(0);
  if (cVar3 == '\0') {
    for (local_118 = 0; local_118 < 0xc; local_118 = local_118 + 1) {
      if (*(int *)(param_1 + 0x60c + local_118 * 4) != 0) {
        if (*(int *)(*(int *)(param_1 + 0x60c + local_118 * 4) + 0x230) != 0) {
          (**(code **)(**(int **)(*(int *)(param_1 + 0x60c + local_118 * 4) + 0x230) + 0x70))();
          (**(code **)(**(int **)(*(int *)(param_1 + 0x60c + local_118 * 4) + 0x234) + 0x70))();
        }
        if (*(int *)(*(int *)(param_1 + 0x60c + local_118 * 4) + 0x238) != 0) {
          (**(code **)(**(int **)(*(int *)(param_1 + 0x60c + local_118 * 4) + 0x238) + 0x70))();
        }
      }
    }
  }
  uVar4 = FUN_00657bd0();
  iVar6 = FUN_00657bb0(uVar4);
  sprintf(local_114,"Page %i of %i",iVar6 + 1);
  (**(code **)(*(int *)(param_1 + 0x42c) + 0xb4))(local_114);
  __security_check_cookie(local_10 ^ (uint)&stack0xfffffffc);
  return;
}

