// FUN_00517fa0  00517fa0

void __thiscall FUN_00517fa0(int *param_1,undefined4 param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 uVar12;
  int iStack_8;
  
  FUN_005fc3a0(param_2);
  switch(param_1[5]) {
  case 0:
    FUN_0047e540(1);
    DAT_00793030 = 0;
    DAT_00793070 = 0;
    DAT_00793058 = 0;
    DAT_00793158 = 0;
    while (iVar3 = FUN_0047f950(), DAT_00793158 < iVar3) {
      FUN_0047e390(DAT_00793158);
      iVar3 = FUN_004c6cb0();
      if (iVar3 == 0) {
LAB_005180e0:
        uVar4 = 0;
        FUN_0047e390(DAT_00793158);
        FUN_004c7030(uVar4);
        uVar4 = 0xffffffff;
        FUN_0047e390(DAT_00793158);
        FUN_004c7070(uVar4);
      }
      else {
        FUN_0047e390(DAT_00793158);
        iVar3 = FUN_004c6a70();
        iVar2 = FUN_0047bc20();
        if (iVar3 < iVar2) goto LAB_005180e0;
        (&DAT_00792de8)[DAT_00793158] = 0xffff;
        (&DAT_00792990)[DAT_00793158] = 0xffff;
        uVar4 = 1;
        FUN_0047e390(DAT_00793158);
        FUN_004c7030(uVar4);
        uVar11 = DAT_00793070;
        FUN_0047e390(DAT_00793158);
        FUN_004c7070(uVar11);
        DAT_00793070 = DAT_00793070 + 1;
      }
      DAT_00793158 = DAT_00793158 + 1;
    }
    if (1 < (int)DAT_00793070) {
      FUN_0047e860();
      iVar3 = FUN_0047e170();
      if (iVar3 != 0x17) {
        if (*(int *)(DAT_00791364 + 0xd4) == -1) {
          if (*(int *)(DAT_00791364 + 0xd0) == -1) {
            *(undefined4 *)(DAT_00791364 + 0xd4) = *(undefined4 *)(DAT_00791364 + 0xd8);
          }
          else {
            uVar4 = FUN_0047bbc0();
            *(undefined4 *)(DAT_00791364 + 0xd4) = uVar4;
          }
        }
        do {
          *(int *)(DAT_00791364 + 0xd4) = *(int *)(DAT_00791364 + 0xd4) + 1;
          iVar3 = FUN_0047f950();
          if (iVar3 + -1 < *(int *)(DAT_00791364 + 0xd4)) {
            *(undefined4 *)(DAT_00791364 + 0xd4) = 0;
          }
          FUN_0047e390(*(undefined4 *)(DAT_00791364 + 0xd4));
          iVar3 = FUN_004c7010();
        } while (iVar3 == 0);
        while (iVar3 = FUN_0047bbc0(), iVar3 != *(int *)(DAT_00791364 + 0xd4)) {
          FUN_0047bac0();
        }
      }
      FUN_0047ecf0();
      DAT_00793154 = 0;
      uVar4 = FUN_0047bbc0();
      FUN_0047e400(uVar4);
      do {
        FUN_0047e440();
        FUN_0047e3b0();
        iVar3 = FUN_004c7010();
      } while (iVar3 == 0);
LAB_00518291:
      iVar3 = FUN_0047e190();
      if (((iVar3 != 1) || ((int)DAT_00793070 < 8)) &&
         ((iVar3 = FUN_0047e190(), iVar3 != 7 || ((int)DAT_00793070 < 8)))) {
        DAT_00793070 = 0;
        DAT_00793058 = 0;
        DAT_00793158 = 0;
        while (iVar3 = FUN_0047f950(), DAT_00793158 < iVar3) {
          FUN_0047e390(DAT_00793158);
          iVar3 = FUN_004c7010();
          if (iVar3 == 1) {
            iVar3 = DAT_00793070;
            FUN_0047e390(DAT_00793158);
            FUN_004c7070(iVar3);
            FUN_0047e390(DAT_00793158);
            FUN_004c9160();
            FUN_0047e390(DAT_00793158);
            FUN_004dd760();
            DAT_00793070 = DAT_00793070 + 1;
            DAT_00793058 = DAT_00793058 + 1;
          }
          else {
            uVar4 = 0xffffffff;
            FUN_0047e390(DAT_00793158);
            FUN_004c7070(uVar4);
          }
          DAT_00793158 = DAT_00793158 + 1;
        }
        param_1[8] = 0;
        (**(code **)(*param_1 + 4))(1);
        (**(code **)(*param_1 + 0x1c))(0);
        return;
      }
      iStack_8 = FUN_0047bbc0();
      iStack_8 = iStack_8 + -1;
      if (iStack_8 < 0) {
        iStack_8 = FUN_0047f950();
        iStack_8 = iStack_8 + -1;
      }
LAB_005182ef:
      FUN_0047e390(iStack_8);
      iVar3 = FUN_004c7010();
      if (iVar3 != 0) {
        FUN_0047e390(iStack_8);
        iVar3 = FUN_004c6cb0();
        if (iVar3 != 2) goto LAB_00518342;
      }
      iStack_8 = iStack_8 + -1;
      if (iStack_8 < 0) {
        iStack_8 = FUN_0047f950();
        iStack_8 = iStack_8 + -1;
      }
      goto LAB_005182ef;
    }
    (**(code **)(*param_1 + 4))(7);
    (**(code **)(*param_1 + 0x1c))(0);
    break;
  case 1:
    FUN_004654d0();
    (**(code **)(*param_1 + 4))(2);
    (**(code **)(*param_1 + 0x1c))(0);
    break;
  case 2:
    FUN_004f4320(DAT_00793070 & 0xffff);
    FUN_0047ec90(0);
    (**(code **)(*param_1 + 4))(3);
    (**(code **)(*param_1 + 0x1c))(0);
  case 3:
    FUN_0047e3b0();
    uVar4 = FUN_004c7050();
    uVar6 = FUN_0047bc60(uVar4);
    FUN_004f5110(uVar6,uVar4);
    (**(code **)(*param_1 + 4))(4);
    (**(code **)(*param_1 + 0x1c))(0);
    break;
  case 4:
    DAT_00793034 = FUN_00516e20();
    FUN_0047e500();
    (**(code **)(*param_1 + 4))(5);
    (**(code **)(*param_1 + 0x1c))(0xf);
    break;
  case 5:
    if (DAT_00793034 == -1) {
      uVar4 = FUN_0047bbc0();
      FUN_0047e400(uVar4);
      do {
        FUN_0047e440();
        FUN_0047e3b0();
        iVar3 = FUN_004c7010();
      } while (iVar3 == 0);
      (**(code **)(*param_1 + 4))(6);
    }
    else if (DAT_00793034 == -3) {
      uVar4 = FUN_0047bbc0();
      FUN_0047e400(uVar4);
      do {
        FUN_0047e440();
        FUN_0047e3b0();
        iVar3 = FUN_004c7010();
      } while (iVar3 == 0);
      iVar3 = FUN_004f6420();
      if (0 < iVar3) {
        iVar3 = FUN_004f6420();
        iVar2 = FUN_0047bc20();
        iVar3 = iVar3 * iVar2;
        sVar1 = FUN_004f64b0(iVar3);
        FUN_0047e3d0((int)sVar1);
        FUN_004c6b80(iVar3);
        sVar1 = FUN_004f64b0();
        FUN_0047e3d0((int)sVar1);
        FUN_004da300();
        FUN_0047ec90(0);
        sVar1 = FUN_004f64b0();
        iVar3 = FUN_0047e3d0((int)sVar1);
        uVar4 = *(undefined4 *)(iVar3 + 4);
        iVar3 = FUN_004f6420(0);
        iVar2 = FUN_0047bc20();
        uVar5 = FUN_0064c8a0(iVar3 * iVar2);
        FUN_005e7e40(uVar4,7,uVar5);
      }
      DAT_00793030 = 1;
      (**(code **)(*param_1 + 4))(6);
    }
    else {
      uVar4 = FUN_0047e490(DAT_00793034);
      FUN_0047e400(uVar4);
      (**(code **)(*param_1 + 4))(4);
    }
    (**(code **)(*param_1 + 0x1c))(0);
    break;
  case 6:
    FUN_0047e3b0();
    iVar3 = FUN_004c7010();
    if (iVar3 == 0) {
      FUN_005e9f20("pokerGame->GetCurrentPokerPlayer()->GetPlayerStatus() != NOTPLAYING",
                   "..\\Casino\\PokerStudScript.cpp",0xe5b);
    }
    uVar12 = 0;
    uVar10 = 0;
    uVar9 = 0;
    uVar7 = 0;
    uVar6 = 1;
    piVar8 = param_1;
    uVar4 = FUN_0047e3b0(1,0,param_1,0,0,0);
    FUN_0047b010(uVar4,uVar6,uVar7,piVar8,uVar9,uVar10,uVar12);
    do {
      FUN_0047e440();
      FUN_0047e3b0();
      iVar3 = FUN_004c7010();
    } while (iVar3 == 0);
    param_1[8] = param_1[8] + 1;
    if (param_1[8] == DAT_00793070) {
      param_1[8] = 0;
      DAT_00793154 = DAT_00793154 + 1;
    }
    (**(code **)(*param_1 + 4))(7);
    iVar3 = FUN_0047e190();
    if (iVar3 == 1) {
      if (DAT_00793154 < 2) {
        (**(code **)(*param_1 + 4))(6);
      }
    }
    else {
      iVar3 = FUN_0047e190();
      if (iVar3 == 2) {
        if (DAT_00793154 < 1) {
          (**(code **)(*param_1 + 4))(6);
        }
      }
      else {
        iVar3 = FUN_0047e190();
        if ((iVar3 == 7) && (DAT_00793154 < 7)) {
          (**(code **)(*param_1 + 4))(6);
        }
      }
    }
    break;
  case 7:
    (**(code **)(*(int *)param_1[3] + 0x1c))(0);
    FUN_005fc420(0);
  }
  return;
LAB_00518342:
  uVar4 = 0;
  FUN_0047e390(iStack_8);
  FUN_004c7030(uVar4);
  DAT_00793070 = DAT_00793070 - 1;
  goto LAB_00518291;
}

