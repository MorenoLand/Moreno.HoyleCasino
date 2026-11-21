// FUN_0064db70  0064db70

void __thiscall FUN_0064db70(int *param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int local_8;
  
  for (local_8 = 0; iVar3 = (**(code **)(*DAT_0162ee84 + 0xec))(), local_8 < iVar3;
      local_8 = local_8 + 1) {
    iVar3 = (**(code **)(*DAT_0162ee84 + 0xe0))(local_8);
    if (iVar3 != 0) {
      piVar4 = (int *)(**(code **)(*DAT_0162ee84 + 0xe0))(local_8);
      cVar2 = (**(code **)(*piVar4 + 0x7c))(param_2,param_3);
      if (cVar2 != '\0') {
        return;
      }
    }
  }
  cVar2 = (**(code **)(*DAT_0162ee84 + 0x254))(param_2,param_3);
  uVar1 = DAT_00795f95;
  if (cVar2 != '\0') {
    return;
  }
  if ((0x186eb < param_2) && (param_2 < 0x1870d)) {
    uVar5 = (**(code **)(*DAT_0162ee84 + 0x3b0))(param_2);
    (**(code **)(*param_1 + 0x14c))(uVar5);
    *(undefined1 *)(param_1 + 0xe) = 0;
    return;
  }
  if (param_3 == 0x186ad) {
    DAT_00795f95 = 0;
    FUN_00650400(0,0,param_2 + -0x186ae);
  }
  DAT_00795f95 = uVar1;
  if (param_2 < 0x186a3) {
    if (param_2 == 0x186a2) {
      FUN_00630030();
      return;
    }
    if (param_2 != -100) {
      return;
    }
switchD_0064dcf6_caseD_186c7:
    (**(code **)(**(int **)(DAT_007960d8 + 0x10) + 0x28))();
    FUN_0064cfa0();
  }
  else {
    switch(param_2) {
    case 0x186a4:
      (**(code **)(*param_1 + 0x18c))();
      break;
    case 0x186a5:
      FUN_0064f950(0,5);
      break;
    case 0x186a6:
      (**(code **)(*param_1 + 0x16c))(0,1,0xffffffff,0xffffffff,0);
      break;
    case 0x186a7:
      FUN_005f2840(0x186a1);
      FUN_00613f80();
      FUN_0064ef70(1);
      break;
    case 0x186a8:
      FUN_0064ef70(0);
      break;
    case 0x186a9:
      cVar2 = (**(code **)(*param_1 + 0x80))();
      if ((cVar2 == '\0') && (cVar2 = (**(code **)(*param_1 + 0xa8))(), cVar2 == '\0')) {
        uVar5 = FUN_00630f40("SID_SHELL_GAMEINPROGRESS",4);
        uVar5 = FUN_00630f40("SID_GENERIC_CONFIRMRESTART",uVar5);
        iVar3 = FUN_0062ff10(uVar5);
        if (iVar3 == 7) {
          return;
        }
      }
      *(undefined1 *)(param_1 + 0x10) = 0;
      cVar2 = (**(code **)(*param_1 + 0xa8))();
      (**(code **)(*param_1 + 0x84))(cVar2 == '\0');
      break;
    case 0x186ab:
      (**(code **)(*DAT_0162ee84 + 0x34))(0x3eb);
      break;
    case 0x186c0:
      FUN_006375b0();
      piVar4 = (int *)FUN_0063aac0();
      if (*piVar4 == 3) {
        FUN_006375b0();
        uVar5 = FUN_0057a470();
        FUN_0064f470(uVar5);
      }
      else {
        FUN_0064f470(0);
      }
      break;
    case 0x186c1:
      cVar2 = (**(code **)(*DAT_0162ee84 + 0x33c))(0xffffffff);
      if ((cVar2 == '\0') || (cVar2 = (**(code **)(*DAT_0162ee80 + 0x168))(), cVar2 != '\0')) {
        uVar5 = (**(code **)(*DAT_0162ee84 + 600))();
        (**(code **)(*DAT_0162ee84 + 0x34))(uVar5);
      }
      break;
    case 0x186c4:
      (**(code **)(*param_1 + 0x170))();
      break;
    case 0x186c5:
      (**(code **)(*param_1 + 0x174))(4);
      break;
    case 0x186c6:
      (**(code **)(*param_1 + 0x174))(3);
      break;
    case 0x186c7:
    case 0x186c8:
    case 0x186c9:
      goto switchD_0064dcf6_caseD_186c7;
    case 0x186ca:
      FUN_0064f770();
      break;
    case 0x186cb:
      FUN_0064f860();
      break;
    case 0x186d6:
      FUN_0060cce0(1);
      break;
    case 0x186d9:
      uVar5 = (**(code **)(*DAT_0162ee84 + 0xf4))(0xffffffff);
      FUN_0060cce0(uVar5);
      break;
    case 0x186da:
      (**(code **)(*param_1 + 0x17c))(1,0);
      break;
    case 0x186db:
      (**(code **)(*param_1 + 0x20c))();
      break;
    case 0x186dc:
      (**(code **)(*param_1 + 0x184))();
      break;
    case 0x186dd:
      FUN_0064f660(0);
      break;
    case 0x186de:
      FUN_0064f380();
      break;
    case 0x186df:
      uVar5 = FUN_00630f40("SID_SHELL_HOYLE_WEBSITE_URL");
      (**(code **)(*DAT_0162ee84 + 0x34c))(uVar5);
      break;
    case 0x186ea:
      FUN_0064d720();
      *(undefined1 *)(param_1 + 0xe) = 0;
      break;
    case 0x186eb:
      (**(code **)(*param_1 + 0x16c))(0,0,0xffffffff,0xffffffff,1);
    }
  }
  return;
}

