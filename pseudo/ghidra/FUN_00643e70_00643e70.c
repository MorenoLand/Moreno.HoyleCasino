// FUN_00643e70  00643e70

int FUN_00643e70(short param_1,char param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 uVar4;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  undefined2 extraout_var_04;
  int local_c;
  
  if ((param_1 == -1) || (param_2 != '\0')) {
    iVar2 = (**(code **)(*DAT_0162ee84 + 0x390))();
    return iVar2;
  }
  iVar2 = FUN_00641280(param_1);
  uVar4 = extraout_var;
  if ((iVar2 != 0xf) ||
     (iVar2 = FUN_00641290(CONCAT22(extraout_var,param_1)), uVar4 = extraout_var_00, iVar2 != 2)) {
    iVar2 = FUN_00641280(CONCAT22(uVar4,param_1));
    if ((iVar2 != 0xf) || (iVar2 = FUN_00641290(CONCAT22(extraout_var_03,param_1)), iVar2 != 1)) {
      iVar2 = FUN_006388b0();
      iVar2 = iVar2 + param_3;
      cVar1 = (**(code **)(*DAT_0162ee84 + 0x1bc))(iVar2);
      if (cVar1 != '\0') {
        return iVar2;
      }
      iVar3 = FUN_00641290(CONCAT22(extraout_var_01,param_1));
      switch(iVar3 + -1) {
      case 0:
        local_c = 0xd;
        break;
      case 1:
        local_c = 0x1a;
        break;
      case 2:
        local_c = 0x27;
        break;
      case 3:
        local_c = 0;
        break;
      default:
        FUN_005e9f20("false","..\\casinoShell\\card.cpp",0x4c7);
        local_c = 0;
      }
      iVar3 = FUN_00641280(param_1);
      if ((iVar3 != 1) && (iVar3 = FUN_00641280(CONCAT22(extraout_var_02,param_1)), iVar3 != 0xe)) {
        iVar3 = FUN_00641280(CONCAT22(extraout_var_04,param_1));
        return iVar2 + local_c + -1 + iVar3;
      }
      return iVar2 + local_c;
    }
    FUN_006375b0();
    iVar2 = FUN_00639ff0();
    if (iVar2 < 0x3010b1) {
      if (iVar2 == 0x3010b0) {
switchD_006440c4_caseD_3010b2:
        iVar2 = (**(code **)(*DAT_0162ee84 + 0x1a4))();
        return iVar2 + 9;
      }
      if (iVar2 == 0xaf0) goto LAB_006440e6;
      if (iVar2 == 0x69f7) {
        iVar2 = (**(code **)(*DAT_0162ee84 + 0x1a4))();
        return iVar2 + 7;
      }
      if (iVar2 == 0x6c2e) {
        iVar2 = (**(code **)(*DAT_0162ee84 + 0x1a4))();
        return iVar2 + 3;
      }
    }
    else {
      switch(iVar2) {
      case 0x3010b1:
        iVar2 = (**(code **)(*DAT_0162ee84 + 0x1a4))();
        return iVar2 + 0xb;
      case 0x3010b2:
        goto switchD_006440c4_caseD_3010b2;
      case 0x3010b3:
        iVar2 = (**(code **)(*DAT_0162ee84 + 0x1a4))();
        return iVar2 + 5;
      case 0x30113c:
      case 0x301140:
      case 0x301144:
      case 0x301148:
      case 0x30114c:
      case 0x301150:
        FUN_006375b0();
        iVar2 = FUN_00639ff0();
        return iVar2 + param_3;
      }
    }
    FUN_005e9f20("false","..\\casinoShell\\card.cpp",0x4a8);
LAB_006440e6:
    iVar2 = (**(code **)(*DAT_0162ee84 + 0x1a4))();
    return iVar2 + 1;
  }
  FUN_006375b0();
  iVar2 = FUN_00639ff0();
  if (iVar2 < 0x3010b1) {
    if (iVar2 == 0x3010b0) {
switchD_00643f41_caseD_3010b2:
      iVar2 = (**(code **)(*DAT_0162ee84 + 0x1a4))();
      return iVar2 + 8;
    }
    if (iVar2 != 0xaf0) {
      if (iVar2 == 0x69f7) {
        iVar2 = (**(code **)(*DAT_0162ee84 + 0x1a4))();
        return iVar2 + 6;
      }
      if (iVar2 == 0x6c2e) {
        iVar2 = (**(code **)(*DAT_0162ee84 + 0x1a4))();
        return iVar2 + 2;
      }
      goto code_r0x00643f4c;
    }
LAB_00643f63:
    iVar2 = (**(code **)(*DAT_0162ee84 + 0x1a4))();
  }
  else {
    switch(iVar2) {
    case 0x3010b1:
      iVar2 = (**(code **)(*DAT_0162ee84 + 0x1a4))();
      iVar2 = iVar2 + 10;
      break;
    case 0x3010b2:
      goto switchD_00643f41_caseD_3010b2;
    case 0x3010b3:
      iVar2 = (**(code **)(*DAT_0162ee84 + 0x1a4))();
      iVar2 = iVar2 + 4;
      break;
    default:
code_r0x00643f4c:
      FUN_005e9f20("false","..\\casinoShell\\card.cpp",0x491);
      goto LAB_00643f63;
    case 0x30113c:
    case 0x301140:
    case 0x301144:
    case 0x301148:
    case 0x30114c:
    case 0x301150:
      FUN_006375b0();
      iVar2 = FUN_00639ff0();
      iVar2 = iVar2 + param_3;
    }
  }
  return iVar2;
}

