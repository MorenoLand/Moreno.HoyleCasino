// FUN_004b0350  004b0350

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004b0350(int param_1,undefined4 param_2,int param_3)

{
  double dVar1;
  char cVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  float10 fVar12;
  int local_30;
  short local_20;
  short local_1c;
  short local_18;
  short local_14;
  short local_c;
  
  iVar6 = FUN_0047e420();
  if (iVar6 < 0) {
    FUN_005e9f20("currentPlayer >= 0","..\\Casino\\PokerHoldemAI.cpp",0x1a11);
  }
  iVar7 = FUN_0047f950();
  if (iVar7 <= iVar6) {
    FUN_005e9f20("currentPlayer < pokerGame->GetNumberOfPlayersAtTable()",
                 "..\\Casino\\PokerHoldemAI.cpp",0x1a12);
  }
  DAT_00791890 = FUN_0047e3b0();
  if ((short)(&DAT_00791d80)[iVar6] == param_1) {
    if ((((*(short *)(&DAT_007919b8 + iVar6 * 2) == param_3) ||
         (*(short *)(&DAT_00791768 + iVar6 * 2) == 6)) ||
        (*(short *)(&DAT_00791768 + iVar6 * 2) == 8)) ||
       ((*(short *)(&DAT_00791768 + iVar6 * 2) == 9 || (*(short *)(&DAT_00791768 + iVar6 * 2) == 2))
       )) {
      fVar12 = (float10)FUN_004b6ff0(param_1,param_2);
      *(double *)(&DAT_00791d90 + iVar6 * 8) = (double)fVar12;
    }
    else {
      *(undefined2 *)(&DAT_007919b8 + iVar6 * 2) = (undefined2)param_3;
      fVar12 = (float10)FUN_004b6ff0(param_1,param_2);
      *(double *)(&DAT_00791d90 + iVar6 * 8) = (double)fVar12;
      *(undefined2 *)(&DAT_00791768 + iVar6 * 2) = 1;
    }
  }
  else {
    if (param_1 == 0) {
      FUN_004b79a0();
      local_c = 0;
      for (local_14 = 0; iVar7 = FUN_0047f950(), local_14 < iVar7; local_14 = local_14 + 1) {
        if (local_14 != iVar6) {
          FUN_0047e390((int)local_14);
          iVar7 = FUN_004c7010();
          if (iVar7 == 1) {
            FUN_0047e390((int)local_14);
            uVar8 = FUN_004c7050();
            sVar3 = FUN_004f6a90(uVar8);
            local_c = local_c + sVar3;
          }
        }
      }
      sVar3 = FUN_004f0bc0();
      sVar4 = FUN_0062fbf0((int)sVar3);
      sVar3 = FUN_0062fbf0((int)sVar3);
      sVar5 = FUN_004f0b80();
      sVar5 = FUN_0062fbf0(sVar5 + 1);
      *(short *)(&DAT_00791798 + iVar6 * 2) = (sVar4 - sVar3) - local_c * sVar5;
    }
    else {
      local_18 = 0;
      for (local_1c = 0; iVar7 = FUN_0047f950(), local_1c < iVar7; local_1c = local_1c + 1) {
        if (local_1c != iVar6) {
          FUN_0047e390((int)local_1c);
          iVar7 = FUN_004c7010();
          if (iVar7 == 1) {
            FUN_0047e390((int)local_1c);
            uVar8 = FUN_004c7050();
            sVar3 = FUN_004f6880(uVar8);
            local_18 = local_18 + sVar3;
          }
        }
      }
      sVar3 = FUN_004f0b80();
      sVar3 = FUN_0062fbf0(sVar3 + 1);
      *(short *)(&DAT_00791798 + iVar6 * 2) =
           *(short *)(&DAT_00791798 + iVar6 * 2) - local_18 * sVar3;
    }
    (&DAT_00791d80)[iVar6] = (undefined2)param_1;
    *(undefined2 *)(&DAT_007919b8 + iVar6 * 2) = (undefined2)param_3;
    FUN_004b1060(param_1);
    fVar12 = (float10)FUN_004b6ff0(param_1,param_2);
    *(double *)(&DAT_00791d90 + iVar6 * 8) = (double)fVar12;
    *(undefined2 *)(&DAT_00791768 + iVar6 * 2) = 1;
    if ((param_1 != 5) || (*(double *)(&DAT_00791958 + iVar6 * 8) <= _DAT_006be538)) {
      if ((param_1 != 5) || (*(double *)(&DAT_007916e8 + iVar6 * 8) <= _DAT_006be538)) {
        if ((param_1 != 5) || (*(double *)(&DAT_00791958 + iVar6 * 8) <= _DAT_006be530)) {
          if ((param_1 != 5) || (*(double *)(&DAT_007916e8 + iVar6 * 8) <= _DAT_006be530)) {
            if ((param_1 != 4) || (*(double *)(&DAT_00791958 + iVar6 * 8) <= _DAT_006be530)) {
              if ((param_1 != 4) || (*(double *)(&DAT_007916e8 + iVar6 * 8) <= _DAT_006be530)) {
                if (((param_1 != 3) || (*(double *)(&DAT_00791958 + iVar6 * 8) <= _DAT_006be530)) ||
                   (iVar7 = FUN_0062fbf0(2), iVar7 != 0)) {
                  if (((param_1 != 3) || (*(double *)(&DAT_007916e8 + iVar6 * 8) <= _DAT_006be530))
                     || (iVar7 = FUN_0062fbf0(2), iVar7 != 0)) {
                    if (((param_1 != 2) || (*(double *)(&DAT_00791958 + iVar6 * 8) <= _DAT_006be530)
                        ) || (iVar7 = FUN_0062fbf0(3), iVar7 != 0)) {
                      if (((param_1 == 2) &&
                          (_DAT_006be530 < *(double *)(&DAT_007916e8 + iVar6 * 8))) &&
                         (iVar7 = FUN_0062fbf0(3), iVar7 == 0)) {
                        *(undefined2 *)(&DAT_00791768 + iVar6 * 2) = 9;
                      }
                    }
                    else {
                      *(undefined2 *)(&DAT_00791768 + iVar6 * 2) = 9;
                    }
                  }
                  else {
                    *(undefined2 *)(&DAT_00791768 + iVar6 * 2) = 9;
                  }
                }
                else {
                  *(undefined2 *)(&DAT_00791768 + iVar6 * 2) = 9;
                }
              }
              else {
                *(undefined2 *)(&DAT_00791768 + iVar6 * 2) = 9;
              }
            }
            else {
              *(undefined2 *)(&DAT_00791768 + iVar6 * 2) = 9;
            }
          }
          else {
            *(undefined2 *)(&DAT_00791768 + iVar6 * 2) = 8;
          }
        }
        else {
          *(undefined2 *)(&DAT_00791768 + iVar6 * 2) = 8;
        }
      }
      else {
        *(undefined2 *)(&DAT_00791768 + iVar6 * 2) = 6;
      }
    }
    else {
      *(undefined2 *)(&DAT_00791768 + iVar6 * 2) = 6;
    }
  }
  if (*(short *)(&DAT_00791768 + iVar6 * 2) == 6) {
    FUN_004c79d0(3);
    cVar2 = FUN_004f6640();
    if (cVar2 == '\0') {
      cVar2 = FUN_004f66e0();
      if (cVar2 == '\0') {
        uVar8 = 3;
      }
      else {
        uVar8 = 4;
      }
    }
    else {
      cVar2 = FUN_004a39c0();
      if ((cVar2 == '\0') && (iVar6 = FUN_0062fbf0(8), iVar6 == 0)) {
        uVar8 = 1;
      }
      else {
        uVar8 = 2;
      }
    }
  }
  else if (*(short *)(&DAT_00791768 + iVar6 * 2) == 8) {
    FUN_004c79d0(3);
    cVar2 = FUN_004f6640();
    if (cVar2 == '\0') {
      cVar2 = FUN_004f66e0();
      if (cVar2 == '\0') {
        uVar8 = 3;
      }
      else {
        iVar7 = FUN_0062fbf0(100);
        sVar3 = FUN_004f0a80();
        if (iVar7 < sVar3) {
          iVar7 = FUN_0062fbf0(100);
          sVar3 = FUN_004f0a80();
          if (iVar7 < sVar3) {
            *(undefined2 *)(&DAT_00791768 + iVar6 * 2) = 5;
          }
        }
        uVar8 = 4;
      }
    }
    else {
      cVar2 = FUN_004a39c0();
      if ((cVar2 == '\0') && (iVar6 = FUN_0062fbf0(5), iVar6 == 0)) {
        uVar8 = 1;
      }
      else {
        uVar8 = 2;
      }
    }
  }
  else {
    if (*(short *)(&DAT_00791768 + iVar6 * 2) == 1) {
      cVar2 = FUN_004f6690();
      if (cVar2 == '\0') {
        cVar2 = FUN_004b7670(param_1,param_3);
        if (cVar2 == '\0') {
          return 1;
        }
      }
      else {
        iVar7 = FUN_004f67d0();
        iVar9 = FUN_004f6840();
        dVar1 = *(double *)(&DAT_00791d90 + iVar6 * 8);
        local_20 = FUN_004f1c10();
        sVar3 = FUN_0062fbf0(param_3 + -1);
        local_20 = local_20 * (sVar3 + 1);
        if (param_1 == 0) {
          local_20 = 0;
        }
        iVar10 = FUN_0062fbf0((int)local_20);
        iVar11 = FUN_0062fbf0((int)local_20);
        local_30 = FUN_0062fbf0((int)local_20);
        local_30 = (iVar10 + iVar11) - local_30;
        if (param_1 == 0) {
          sVar3 = FUN_004f0410();
          iVar10 = FUN_0062fbf0((int)sVar3);
          local_30 = local_30 - iVar10;
        }
        if (local_30 < -0x13) {
          local_30 = -0x13;
        }
        if (dVar1 / ((double)iVar7 / (double)iVar9) <= (double)local_30 / _DAT_006b6978 + 1.0) {
          return 0;
        }
        cVar2 = FUN_004b7670(param_1,param_3);
        if (cVar2 == '\0') {
          iVar7 = FUN_0062fbf0(100);
          sVar3 = FUN_004f18e0();
          if (iVar7 < sVar3) {
            *(undefined2 *)(&DAT_00791768 + iVar6 * 2) = 2;
          }
          return 3;
        }
      }
    }
    if (((*(short *)(&DAT_00791768 + iVar6 * 2) == 5) ||
        (*(short *)(&DAT_00791768 + iVar6 * 2) == 0xc)) ||
       (*(short *)(&DAT_00791768 + iVar6 * 2) == 9)) {
      iVar7 = FUN_0062fbf0(100);
      sVar3 = FUN_004b7ac0(param_1,3);
      if (iVar7 < sVar3) {
        FUN_004c79d0(3);
        cVar2 = FUN_004f6640();
        if (((cVar2 == '\0') && (cVar2 = FUN_004f66e0(), cVar2 == '\0')) &&
           (*(short *)(&DAT_00791768 + iVar6 * 2) == 0xc)) {
          return 0;
        }
        iVar7 = FUN_0062fbf0(100);
        sVar3 = FUN_004f0a80();
        if (iVar7 < sVar3) {
          *(undefined2 *)(&DAT_00791768 + iVar6 * 2) = 4;
        }
        else {
          iVar7 = FUN_0062fbf0(100);
          sVar3 = FUN_004f0aa0();
          if (iVar7 < sVar3) {
            *(undefined2 *)(&DAT_00791768 + iVar6 * 2) = 1;
          }
        }
        cVar2 = FUN_004f6640();
        if (cVar2 != '\0') {
          return 2;
        }
        cVar2 = FUN_004f66e0();
        if ((cVar2 != '\0') &&
           ((iVar7 = FUN_0062fbf0(2), iVar7 != 0 || (*(short *)(&DAT_00791768 + iVar6 * 2) == 9))))
        {
          return 4;
        }
        return 3;
      }
    }
    else if ((*(short *)(&DAT_00791768 + iVar6 * 2) == 4) ||
            (*(short *)(&DAT_00791768 + iVar6 * 2) == 0xb)) {
      iVar7 = FUN_0062fbf0(100);
      sVar3 = FUN_004b7ac0(param_1,2);
      if (iVar7 < sVar3) {
        FUN_004c79d0(2);
        cVar2 = FUN_004f6640();
        if (((cVar2 == '\0') && (cVar2 = FUN_004f66e0(), cVar2 == '\0')) &&
           (*(short *)(&DAT_00791768 + iVar6 * 2) == 0xb)) {
          return 0;
        }
        iVar7 = FUN_0062fbf0(100);
        sVar3 = FUN_004f0a80();
        if (iVar7 < sVar3) {
          *(undefined2 *)(&DAT_00791768 + iVar6 * 2) = 3;
        }
        else {
          iVar7 = FUN_0062fbf0(100);
          sVar3 = FUN_004f0aa0();
          if (iVar7 < sVar3) {
            *(undefined2 *)(&DAT_00791768 + iVar6 * 2) = 1;
          }
        }
        cVar2 = FUN_004f6640();
        if (cVar2 != '\0') {
          return 2;
        }
        cVar2 = FUN_004f66e0();
        if ((cVar2 != '\0') && (iVar7 = FUN_0062fbf0(2), iVar7 != 0)) {
          return 4;
        }
        if (*(short *)(&DAT_00791768 + iVar6 * 2) == 0xb) {
          return 0;
        }
        return 3;
      }
    }
    else if ((*(short *)(&DAT_00791768 + iVar6 * 2) == 3) ||
            (*(short *)(&DAT_00791768 + iVar6 * 2) == 10)) {
      iVar7 = FUN_0062fbf0(100);
      sVar3 = FUN_004b7ac0(param_1,1);
      if (iVar7 < sVar3) {
        FUN_004c79d0(1);
        cVar2 = FUN_004f6640();
        if (((cVar2 == '\0') && (cVar2 = FUN_004f66e0(), cVar2 == '\0')) &&
           (*(short *)(&DAT_00791768 + iVar6 * 2) == 10)) {
          return 0;
        }
        iVar7 = FUN_0062fbf0(100);
        sVar3 = FUN_004f0a80();
        if (iVar7 < sVar3) {
          *(undefined2 *)(&DAT_00791768 + iVar6 * 2) = 2;
        }
        else {
          iVar7 = FUN_0062fbf0(100);
          sVar3 = FUN_004f0aa0();
          if (iVar7 < sVar3) {
            *(undefined2 *)(&DAT_00791768 + iVar6 * 2) = 1;
          }
        }
        cVar2 = FUN_004f6640();
        if (cVar2 != '\0') {
          return 2;
        }
        cVar2 = FUN_004f66e0();
        if ((cVar2 != '\0') && (iVar7 = FUN_0062fbf0(2), iVar7 != 0)) {
          return 4;
        }
        if (*(short *)(&DAT_00791768 + iVar6 * 2) == 10) {
          return 0;
        }
        return 3;
      }
    }
    cVar2 = FUN_004f6640();
    if (cVar2 == '\0') {
      if (*(short *)(&DAT_00791768 + iVar6 * 2) == 0xc) {
        return 0;
      }
      if (*(short *)(&DAT_00791768 + iVar6 * 2) == 0xb) {
        return 0;
      }
      if (*(short *)(&DAT_00791768 + iVar6 * 2) == 10) {
        return 0;
      }
    }
    iVar7 = FUN_0062fbf0(100);
    sVar3 = FUN_004f0aa0();
    if (iVar7 < sVar3) {
      *(undefined2 *)(&DAT_00791768 + iVar6 * 2) = 1;
    }
    cVar2 = FUN_004f6640();
    if (cVar2 == '\0') {
      uVar8 = 3;
    }
    else {
      uVar8 = 1;
    }
  }
  return uVar8;
}

