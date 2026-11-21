// FUN_004787e0  004787e0

void __thiscall FUN_004787e0(int *param_1,undefined4 param_2)

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
  undefined4 uVar11;
  
  FUN_0064c8a0(0,0);
  FUN_005fc3a0(param_2);
  switch(param_1[5]) {
  case 0:
    FUN_0047e540(1);
    DAT_007912e8 = 0;
    DAT_00791308 = 0;
    DAT_007912f4 = 0;
    DAT_0079135c = 0;
    while (iVar3 = FUN_0047f950(), DAT_0079135c < iVar3) {
      iVar3 = FUN_0047e390(DAT_0079135c);
      *(undefined1 *)(iVar3 + 0x1d) = 0;
      FUN_0047e390(DAT_0079135c);
      iVar3 = FUN_004c6cb0();
      if (iVar3 == 0) {
LAB_00478988:
        uVar4 = 0;
        FUN_0047e390(DAT_0079135c);
        FUN_004c7030(uVar4);
        uVar4 = 0xffffffff;
        FUN_0047e390(DAT_0079135c);
        FUN_004c7070(uVar4);
      }
      else {
        FUN_0047e390(DAT_0079135c);
        iVar3 = FUN_004c6a70();
        iVar2 = FUN_0047bc20();
        if (iVar3 < iVar2) goto LAB_00478988;
        (&DAT_00790fb8)[DAT_0079135c] = 0;
        uVar4 = 1;
        FUN_0047e390(DAT_0079135c);
        FUN_004c7030(uVar4);
        iVar3 = DAT_00791308;
        FUN_0047e390(DAT_0079135c);
        FUN_004c7070(iVar3);
        FUN_0047e390(DAT_0079135c);
        FUN_004c9160();
        FUN_0047e390(DAT_0079135c);
        FUN_004dd760();
        DAT_00791308 = DAT_00791308 + 1;
        DAT_007912f4 = DAT_007912f4 + 1;
      }
      DAT_0079135c = DAT_0079135c + 1;
    }
    if (DAT_00791308 < 2) {
      (**(code **)(*param_1 + 4))(8);
      (**(code **)(*param_1 + 0x1c))(0);
    }
    else {
      FUN_0047e860();
      iVar3 = FUN_0047e170();
      if (iVar3 != 0x17) {
        iVar3 = FUN_0047d6b0();
        if (iVar3 == 1) {
          if (*(int *)(DAT_00791364 + 0xd0) == -1) {
            if (*(int *)(DAT_00791364 + 0xd4) == -1) {
              *(undefined4 *)(DAT_00791364 + 0xd0) = *(undefined4 *)(DAT_00791364 + 0xd8);
            }
            else {
              uVar4 = FUN_0047bbc0();
              *(undefined4 *)(DAT_00791364 + 0xd0) = uVar4;
            }
          }
          do {
            *(int *)(DAT_00791364 + 0xd0) = *(int *)(DAT_00791364 + 0xd0) + 1;
            iVar3 = FUN_0047f950();
            if (iVar3 + -1 < *(int *)(DAT_00791364 + 0xd0)) {
              *(undefined4 *)(DAT_00791364 + 0xd0) = 0;
            }
            FUN_0047e390(*(undefined4 *)(DAT_00791364 + 0xd0));
            iVar3 = FUN_004c7010();
          } while (iVar3 == 0);
          while (iVar3 = FUN_0047bbc0(), iVar3 != *(int *)(DAT_00791364 + 0xd0)) {
            FUN_0047bac0();
          }
        }
        else {
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
      }
      DAT_00791358 = 0;
      uVar4 = FUN_0047bbc0();
      FUN_0047e400(uVar4);
      do {
        FUN_0047e440();
        FUN_0047e3b0();
        iVar3 = FUN_004c7010();
      } while (iVar3 == 0);
      param_1[8] = 0;
      (**(code **)(*param_1 + 4))(1);
      (**(code **)(*param_1 + 0x1c))(0);
    }
    break;
  case 1:
    FUN_0047ecf0();
    FUN_004654d0();
    (**(code **)(*param_1 + 4))(2);
    (**(code **)(*param_1 + 0x1c))(0);
    break;
  case 2:
    FUN_004f4320(CONCAT22((short)((uint)param_1[5] >> 0x10),(undefined2)DAT_00791308));
    FUN_0047ec90(0);
    iVar3 = FUN_0047d6b0();
    if (iVar3 == 0) {
      (**(code **)(*param_1 + 4))(6);
    }
    else {
      (**(code **)(*param_1 + 4))(3);
    }
    (**(code **)(*param_1 + 0x1c))(0);
    break;
  case 3:
    DAT_007912f0 = 1;
    FUN_0047e3b0();
    uVar4 = FUN_004c7050();
    iVar3 = FUN_0047bc60(uVar4);
    FUN_004f5110(iVar3 * DAT_007912f0,uVar4);
    (**(code **)(*param_1 + 4))(4);
    (**(code **)(*param_1 + 0x1c))(0);
    break;
  case 4:
    DAT_007912ec = FUN_00477320();
    FUN_0047e500();
    (**(code **)(*param_1 + 4))(5);
    (**(code **)(*param_1 + 0x1c))(0xf);
    break;
  case 5:
    if (DAT_007912ec == -1) {
      uVar4 = FUN_0047bbc0();
      FUN_0047e400(uVar4);
      do {
        FUN_0047e440();
        FUN_0047e3b0();
        iVar3 = FUN_004c7010();
      } while (iVar3 == 0);
      (**(code **)(*param_1 + 4))(6);
    }
    else if (DAT_007912ec == -3) {
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
      DAT_007912e8 = 1;
      (**(code **)(*param_1 + 4))(6);
    }
    else {
      uVar4 = FUN_0047e490(DAT_007912ec);
      FUN_0047e400(uVar4);
      (**(code **)(*param_1 + 4))(4);
    }
    (**(code **)(*param_1 + 0x1c))(0);
    break;
  case 6:
    FUN_0047e3b0();
    iVar3 = FUN_004c7010();
    if (iVar3 == 0) {
      do {
        FUN_0047e440();
        FUN_0047e3b0();
        iVar3 = FUN_004c7010();
      } while (iVar3 == 0);
      param_1[8] = param_1[8] + 1;
      if (param_1[8] == DAT_00791308) {
        param_1[8] = 0;
        DAT_00791358 = DAT_00791358 + 1;
        if (DAT_00791358 < 5) {
          (**(code **)(*param_1 + 4))(6);
        }
        else {
          (**(code **)(*param_1 + 4))(8);
          (**(code **)(*param_1 + 0x1c))(0);
        }
      }
      else {
        (**(code **)(*param_1 + 4))(6);
        (**(code **)(*param_1 + 0x1c))(0);
      }
    }
    else {
      uVar11 = 0;
      uVar10 = 0;
      uVar9 = 0;
      uVar7 = 0;
      uVar6 = 1;
      piVar8 = param_1;
      uVar4 = FUN_0047e3b0(1,0,param_1,0,0,0);
      FUN_0047b010(uVar4,uVar6,uVar7,piVar8,uVar9,uVar10,uVar11);
      do {
        FUN_0047e440();
        FUN_0047e3b0();
        iVar3 = FUN_004c7010();
      } while (iVar3 == 0);
      param_1[8] = param_1[8] + 1;
      if (param_1[8] == DAT_00791308) {
        param_1[8] = 0;
        DAT_00791358 = DAT_00791358 + 1;
      }
      if (DAT_00791358 < 5) {
        (**(code **)(*param_1 + 4))(6);
      }
      else {
        (**(code **)(*param_1 + 4))(8);
      }
    }
    break;
  case 8:
    (**(code **)(*(int *)param_1[3] + 0x1c))(0);
    FUN_005fc420(0);
  }
  return;
}

