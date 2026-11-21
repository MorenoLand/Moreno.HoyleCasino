// FUN_004c4b50  004c4b50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004c4b50(int *param_1,undefined4 param_2)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 uVar12;
  
  FUN_005fc3a0(param_2);
  switch(param_1[5]) {
  case 0:
    FUN_0047e540(1);
    DAT_00791e38 = 0;
    DAT_00791e50 = 0;
    DAT_00791e40 = 0;
    DAT_00791eb4 = 0;
    while (iVar4 = FUN_0047f950(), DAT_00791eb4 < iVar4) {
      iVar4 = FUN_0047e390(DAT_00791eb4);
      iVar4 = FUN_005dcb00(*(undefined4 *)(iVar4 + 4));
      if (*(char *)(iVar4 + 0x4a1) == '\0') {
        FUN_0047e390(DAT_00791eb4);
        iVar4 = FUN_004c6cb0();
        if (iVar4 == 0) goto LAB_004c4cfe;
        FUN_0047e390(DAT_00791eb4);
        iVar4 = FUN_004c6a70();
        iVar2 = FUN_0047bc20();
        if (iVar4 < iVar2) goto LAB_004c4cfe;
        (&DAT_00791d80)[DAT_00791eb4] = 0xffff;
        uVar3 = 1;
        FUN_0047e390(DAT_00791eb4);
        FUN_004c7030(uVar3);
        uVar11 = DAT_00791e50;
        FUN_0047e390(DAT_00791eb4);
        FUN_004c7070(uVar11);
        FUN_0047e390(DAT_00791eb4);
        FUN_004c9160();
        FUN_0047e390(DAT_00791eb4);
        FUN_004dd760();
        DAT_00791e50 = DAT_00791e50 + 1;
        DAT_00791e40 = DAT_00791e40 + 1;
      }
      else {
LAB_004c4cfe:
        uVar3 = 0;
        FUN_0047e390(DAT_00791eb4);
        FUN_004c7030(uVar3);
        uVar3 = 0xffffffff;
        FUN_0047e390(DAT_00791eb4);
        FUN_004c7070(uVar3);
      }
      DAT_00791eb4 = DAT_00791eb4 + 1;
    }
    if ((int)DAT_00791e50 < 2) {
      (**(code **)(*param_1 + 4))(8);
      (**(code **)(*param_1 + 0x1c))(0);
    }
    else {
      FUN_0047e860();
      iVar4 = FUN_0047e170();
      if (iVar4 != 0x17) {
        iVar4 = FUN_0047d6b0();
        if (iVar4 == 1) {
          if (*(int *)(DAT_00791364 + 0xd0) == -1) {
            if (*(int *)(DAT_00791364 + 0xd4) == -1) {
              *(undefined4 *)(DAT_00791364 + 0xd0) = *(undefined4 *)(DAT_00791364 + 0xd8);
            }
            else {
              uVar3 = FUN_0047bbc0();
              *(undefined4 *)(DAT_00791364 + 0xd0) = uVar3;
            }
          }
          do {
            *(int *)(DAT_00791364 + 0xd0) = *(int *)(DAT_00791364 + 0xd0) + 1;
            iVar4 = FUN_0047f950();
            if (iVar4 + -1 < *(int *)(DAT_00791364 + 0xd0)) {
              *(undefined4 *)(DAT_00791364 + 0xd0) = 0;
            }
            FUN_0047e390(*(undefined4 *)(DAT_00791364 + 0xd0));
            iVar4 = FUN_004c7010();
          } while (iVar4 == 0);
          while (iVar4 = FUN_0047bbc0(), iVar4 != *(int *)(DAT_00791364 + 0xd0)) {
            FUN_0047bac0();
          }
        }
        else {
          if (*(int *)(DAT_00791364 + 0xd4) == -1) {
            if (*(int *)(DAT_00791364 + 0xd0) == -1) {
              *(undefined4 *)(DAT_00791364 + 0xd4) = *(undefined4 *)(DAT_00791364 + 0xd8);
            }
            else {
              uVar3 = FUN_0047bbc0();
              *(undefined4 *)(DAT_00791364 + 0xd4) = uVar3;
            }
          }
          do {
            *(int *)(DAT_00791364 + 0xd4) = *(int *)(DAT_00791364 + 0xd4) + 1;
            iVar4 = FUN_0047f950();
            if (iVar4 + -1 < *(int *)(DAT_00791364 + 0xd4)) {
              *(undefined4 *)(DAT_00791364 + 0xd4) = 0;
            }
            FUN_0047e390(*(undefined4 *)(DAT_00791364 + 0xd4));
            iVar4 = FUN_004c7010();
          } while (iVar4 == 0);
          while (iVar4 = FUN_0047bbc0(), iVar4 != *(int *)(DAT_00791364 + 0xd4)) {
            FUN_0047bac0();
          }
        }
      }
      DAT_00791eb0 = 0;
      uVar3 = FUN_0047bbc0();
      FUN_0047e400(uVar3);
      do {
        FUN_0047e440();
        FUN_0047e3b0();
        iVar4 = FUN_004c7010();
      } while (iVar4 == 0);
      param_1[8] = 0;
      (**(code **)(*param_1 + 4))(1);
      (**(code **)(*param_1 + 0x1c))(0);
    }
    break;
  case 1:
    FUN_0047ecf0();
    FUN_004654d0();
    (**(code **)(*param_1 + 4))(2);
    (**(code **)(*DAT_0162ee84 + 0x80))(100000,param_1,0,5,1,0x3f800000,_DAT_006b3654,0);
    break;
  case 2:
    FUN_004f4320(DAT_00791e50 & 0xffff);
    FUN_0047ec90(0);
    iVar4 = FUN_0047d6b0();
    if (iVar4 == 0) {
      (**(code **)(*param_1 + 4))(6);
    }
    else {
      (**(code **)(*param_1 + 4))(3);
    }
    (**(code **)(*param_1 + 0x1c))(0);
    break;
  case 3:
    FUN_0047e3b0();
    uVar3 = FUN_004c7050();
    uVar6 = FUN_0047bc60(uVar3);
    FUN_004f5110(uVar6,uVar3);
    (**(code **)(*param_1 + 4))(4);
    (**(code **)(*param_1 + 0x1c))(0);
    break;
  case 4:
    DAT_00791e3c = FUN_004c5610();
    FUN_0047e500();
    (**(code **)(*param_1 + 4))(5);
    (**(code **)(*param_1 + 0x1c))(0xf);
    break;
  case 5:
    if (DAT_00791e3c == -1) {
      uVar3 = FUN_0047bbc0();
      FUN_0047e400(uVar3);
      do {
        FUN_0047e440();
        FUN_0047e3b0();
        iVar4 = FUN_004c7010();
      } while (iVar4 == 0);
      (**(code **)(*param_1 + 4))(6);
    }
    else if (DAT_00791e3c == -3) {
      uVar3 = FUN_0047bbc0();
      FUN_0047e400(uVar3);
      do {
        FUN_0047e440();
        FUN_0047e3b0();
        iVar4 = FUN_004c7010();
      } while (iVar4 == 0);
      iVar4 = FUN_004f6420();
      if (0 < iVar4) {
        iVar4 = FUN_004f6420();
        iVar2 = FUN_0047bc20();
        iVar4 = iVar4 * iVar2;
        sVar1 = FUN_004f64b0(iVar4);
        FUN_0047e3d0((int)sVar1);
        FUN_004c6b80(iVar4);
        sVar1 = FUN_004f64b0();
        FUN_0047e3d0((int)sVar1);
        FUN_004da300();
        FUN_0047ec90(0);
        sVar1 = FUN_004f64b0();
        iVar4 = FUN_0047e3d0((int)sVar1);
        uVar3 = *(undefined4 *)(iVar4 + 4);
        iVar4 = FUN_004f6420(0);
        iVar2 = FUN_0047bc20();
        uVar5 = FUN_0064c8a0(iVar4 * iVar2);
        FUN_005e7e40(uVar3,7,uVar5);
      }
      DAT_00791e38 = 1;
      (**(code **)(*param_1 + 4))(6);
    }
    else {
      uVar3 = FUN_0047e490(DAT_00791e3c);
      FUN_0047e400(uVar3);
      (**(code **)(*param_1 + 4))(4);
    }
    (**(code **)(*param_1 + 0x1c))(0);
    break;
  case 6:
    FUN_0047e3b0();
    iVar4 = FUN_004c7010();
    if (iVar4 == 0) {
      FUN_005e9f20("pokerGame->GetCurrentPokerPlayer()->GetPlayerStatus() != NOTPLAYING",
                   "..\\Casino\\PokerHoldScript.cpp",0xd66);
    }
    uVar12 = 0;
    uVar10 = 0;
    uVar9 = 0;
    uVar7 = 0;
    uVar6 = 1;
    piVar8 = param_1;
    uVar3 = FUN_0047e3b0(1,0,param_1,0,0,0);
    FUN_0047b010(uVar3,uVar6,uVar7,piVar8,uVar9,uVar10,uVar12);
    do {
      FUN_0047e440();
      FUN_0047e3b0();
      iVar4 = FUN_004c7010();
    } while (iVar4 == 0);
    param_1[8] = param_1[8] + 1;
    if (param_1[8] == DAT_00791e50) {
      param_1[8] = 0;
      DAT_00791eb0 = DAT_00791eb0 + 1;
    }
    iVar4 = FUN_0047e190();
    if ((iVar4 == 3) && (DAT_00791eb0 < 2)) {
      (**(code **)(*param_1 + 4))(6);
    }
    else {
      iVar4 = FUN_0047e190();
      if ((iVar4 == 4) && (DAT_00791eb0 < 4)) {
        (**(code **)(*param_1 + 4))(6);
      }
      else {
        iVar4 = FUN_0047e190();
        if ((iVar4 == 5) && (DAT_00791eb0 < 4)) {
          (**(code **)(*param_1 + 4))(6);
        }
        else {
          iVar4 = FUN_0047e190();
          if ((iVar4 == 6) && (DAT_00791eb0 < 4)) {
            (**(code **)(*param_1 + 4))(6);
          }
          else {
            iVar4 = FUN_0047e190();
            if (iVar4 == 5) {
              DAT_00791eb0 = 0;
              (**(code **)(*param_1 + 4))(7);
            }
            else {
              iVar4 = FUN_0047e190();
              if (iVar4 == 6) {
                DAT_00791eb0 = 0;
                (**(code **)(*param_1 + 4))(7);
              }
              else {
                (**(code **)(*param_1 + 4))(8);
              }
            }
          }
        }
      }
    }
    break;
  case 7:
    iVar4 = FUN_0047e190();
    if (iVar4 == 6) {
      FUN_0047b5b0(*(undefined4 *)(DAT_00791364 + 0x24),param_1);
    }
    else {
      FUN_0047b010(*(undefined4 *)(DAT_00791364 + 0x24),1,0,param_1,1,0,0);
    }
    DAT_00791eb0 = DAT_00791eb0 + 1;
    iVar4 = FUN_0047e190();
    if ((iVar4 == 5) && (DAT_00791eb0 < 4)) {
      (**(code **)(*param_1 + 4))(7);
    }
    else {
      iVar4 = FUN_0047e190();
      if ((iVar4 == 6) && (DAT_00791eb0 < 5)) {
        (**(code **)(*param_1 + 4))(7);
      }
      else {
        (**(code **)(*param_1 + 4))(8);
      }
    }
    break;
  case 8:
    iVar4 = FUN_0047e190();
    if (iVar4 == 5) {
      iVar4 = FUN_0062fbf0(4);
      FUN_0047edd0(iVar4 + 1);
    }
    (**(code **)(*(int *)param_1[3] + 0x1c))(0);
    FUN_005fc420(0);
  }
  return;
}

