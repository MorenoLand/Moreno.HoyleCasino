// FUN_0046ef30  0046ef30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0046ef30(char param_1,undefined4 param_2,int param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  float10 fVar13;
  int local_64;
  int local_60;
  int local_5c;
  int local_38;
  double local_34;
  short local_20;
  short local_1c;
  short local_18;
  short local_14;
  short local_c;
  
  iVar8 = FUN_0047e420();
  if (iVar8 < 0) {
    FUN_005e9f20("currentPlayer >= 0","..\\Casino\\PokerDrawai.cpp",0x50f);
  }
  iVar9 = FUN_0047f950();
  if (iVar9 <= iVar8) {
    FUN_005e9f20("currentPlayer < pokerGame->GetNumberOfPlayersAtTable()",
                 "..\\Casino\\PokerDrawai.cpp",0x510);
  }
  DAT_00791048 = FUN_0047e3b0();
  if ((int)(short)(&DAT_00790fb8)[iVar8] == 2 - (uint)(param_1 != '\0')) {
    if ((((*(short *)(&DAT_0079104c + iVar8 * 2) == param_3) ||
         (*(short *)(&DAT_00791020 + iVar8 * 2) == 6)) ||
        (*(short *)(&DAT_00791020 + iVar8 * 2) == 7)) ||
       (*(short *)(&DAT_00791020 + iVar8 * 2) == 2)) {
      fVar13 = (float10)FUN_0046fd10(param_1,param_2,0);
      *(double *)(&DAT_00791260 + iVar8 * 8) = (double)fVar13;
    }
    else {
      *(undefined2 *)(&DAT_0079104c + iVar8 * 2) = (undefined2)param_3;
      FUN_00470210(param_1,param_3);
      fVar13 = (float10)FUN_0046fd10(param_1,param_2,0);
      *(double *)(&DAT_00791260 + iVar8 * 8) = (double)fVar13;
      *(undefined2 *)(&DAT_00791020 + iVar8 * 2) = 1;
    }
  }
  else {
    if (param_1 != '\0') {
      FUN_004708e0();
    }
    FUN_00470210(param_1,param_3);
    if (param_1 == '\0') {
      local_18 = 0;
      for (local_1c = 0; iVar9 = FUN_0047f950(), local_1c < iVar9; local_1c = local_1c + 1) {
        if (local_1c != iVar8) {
          FUN_0047e390((int)local_1c);
          iVar9 = FUN_004c7010();
          if (iVar9 == 1) {
            FUN_0047e390((int)local_1c);
            uVar10 = FUN_004c7050();
            sVar5 = FUN_004f6a90(uVar10);
            local_18 = local_18 + sVar5;
          }
        }
      }
      sVar5 = FUN_004e9de0();
      sVar5 = FUN_0062fbf0(sVar5 + 1);
      *(short *)(&DAT_00791010 + iVar8 * 2) =
           *(short *)(&DAT_00791010 + iVar8 * 2) - local_18 * sVar5;
    }
    else {
      local_c = 0;
      for (local_14 = 0; iVar9 = FUN_0047f950(), local_14 < iVar9; local_14 = local_14 + 1) {
        if (local_14 != iVar8) {
          FUN_0047e390((int)local_14);
          iVar9 = FUN_004c7010();
          if (iVar9 == 1) {
            FUN_0047e390((int)local_14);
            uVar10 = FUN_004c7050();
            sVar5 = FUN_004f6a90(uVar10);
            local_c = local_c + sVar5;
          }
        }
      }
      sVar5 = FUN_004e9e20();
      sVar6 = FUN_0062fbf0((int)sVar5);
      sVar5 = FUN_0062fbf0((int)sVar5);
      sVar7 = FUN_004e9de0();
      sVar7 = FUN_0062fbf0(sVar7 + 1);
      *(short *)(&DAT_00791010 + iVar8 * 2) = (sVar6 - sVar5) - local_c * sVar7;
    }
    (&DAT_00790fb8)[iVar8] = 2 - (ushort)(param_1 != '\0');
    *(undefined2 *)(&DAT_0079104c + iVar8 * 2) = (undefined2)param_3;
    fVar13 = (float10)FUN_0046fd10(param_1,param_2,0);
    *(double *)(&DAT_00791260 + iVar8 * 8) = (double)fVar13;
    *(undefined2 *)(&DAT_00791020 + iVar8 * 2) = 1;
    if (*(short *)(&DAT_00791030 + iVar8 * 2) == 0x29) {
      *(undefined2 *)(&DAT_00791020 + iVar8 * 2) = 6;
    }
    else if (*(short *)(&DAT_00791030 + iVar8 * 2) == 0x28) {
      *(undefined2 *)(&DAT_00791020 + iVar8 * 2) = 7;
    }
    else if (*(short *)(&DAT_00791030 + iVar8 * 2) == 0x27) {
      *(undefined2 *)(&DAT_00791020 + iVar8 * 2) = 7;
    }
    else if ((*(short *)(&DAT_00791030 + iVar8 * 2) == 0x26) &&
            (iVar9 = FUN_0062fbf0(10), iVar9 < 8)) {
      *(undefined2 *)(&DAT_00791020 + iVar8 * 2) = 7;
    }
    else if ((*(short *)(&DAT_00791030 + iVar8 * 2) == 0x25) &&
            (iVar9 = FUN_0062fbf0(10), iVar9 < 7)) {
      *(undefined2 *)(&DAT_00791020 + iVar8 * 2) = 7;
    }
    else if ((*(short *)(&DAT_00791030 + iVar8 * 2) == 0x24) &&
            (iVar9 = FUN_0062fbf0(10), iVar9 < 5)) {
      *(undefined2 *)(&DAT_00791020 + iVar8 * 2) = 7;
    }
  }
  if (*(short *)(&DAT_00791020 + iVar8 * 2) == 6) {
    FUN_004c79d0(3);
    cVar4 = FUN_004f6640();
    if (cVar4 == '\0') {
      cVar4 = FUN_004f66e0();
      if (cVar4 == '\0') {
        uVar10 = 3;
      }
      else {
        uVar10 = 4;
      }
    }
    else {
      cVar4 = FUN_0046dbe0();
      if ((cVar4 == '\0') && (iVar8 = FUN_0062fbf0(0x14), iVar8 == 0)) {
        uVar10 = 1;
      }
      else {
        uVar10 = 2;
      }
    }
  }
  else if (*(short *)(&DAT_00791020 + iVar8 * 2) == 7) {
    FUN_004c79d0(3);
    cVar4 = FUN_004f6640();
    if (cVar4 == '\0') {
      cVar4 = FUN_004f66e0();
      if (cVar4 == '\0') {
        uVar10 = 3;
      }
      else {
        iVar9 = FUN_0062fbf0(100);
        sVar5 = FUN_004e9ce0();
        if (iVar9 < sVar5) {
          iVar9 = FUN_0062fbf0(100);
          sVar5 = FUN_004e9ce0();
          if (iVar9 < sVar5) {
            *(undefined2 *)(&DAT_00791020 + iVar8 * 2) = 5;
          }
        }
        uVar10 = 4;
      }
    }
    else {
      cVar4 = FUN_0046dbe0();
      if ((cVar4 == '\0') && (iVar8 = FUN_0062fbf0(10), iVar8 == 0)) {
        uVar10 = 1;
      }
      else {
        uVar10 = 2;
      }
    }
  }
  else {
    if (*(short *)(&DAT_00791020 + iVar8 * 2) == 1) {
      cVar4 = FUN_004f6690();
      local_34 = _DAT_006bc278;
      if (cVar4 == '\0') {
        cVar4 = FUN_004704d0(param_1,param_3);
        if (cVar4 == '\0') {
          return 1;
        }
      }
      else {
        if (param_1 != '\0') {
          iVar9 = FUN_004c6db0();
          local_34 = (double)iVar9 / _DAT_006b4b00 + local_34;
        }
        iVar9 = FUN_004c6df0();
        dVar3 = (double)iVar9 / _DAT_006b4b00;
        dVar1 = *(double *)(&DAT_00791260 + iVar8 * 8);
        dVar2 = *(double *)(&DAT_00791260 + iVar8 * 8);
        iVar9 = FUN_004f67d0();
        iVar11 = FUN_004f6840();
        dVar1 = ((dVar3 + dVar1) * dVar2 * local_34) / ((double)iVar9 / (double)iVar11);
        local_20 = FUN_004eae70();
        sVar5 = FUN_0062fbf0(param_3 + -1);
        local_20 = local_20 * (sVar5 + 1);
        if ((param_1 != '\0') && (iVar9 = FUN_0047d6b0(), iVar9 != 1)) {
          local_20 = 0;
        }
        iVar9 = FUN_0062fbf0((int)local_20);
        iVar11 = FUN_0062fbf0((int)local_20);
        iVar12 = FUN_0062fbf0((int)local_20);
        local_38 = (iVar9 + iVar11) - iVar12;
        if (param_1 != '\0') {
          sVar5 = FUN_004e9390();
          iVar9 = FUN_0062fbf0((int)sVar5);
          local_38 = local_38 - iVar9;
          iVar12 = FUN_0047d6b0();
          if (iVar12 == 0) {
            iVar9 = FUN_004f67d0();
            iVar12 = FUN_0047bce0();
            if (iVar9 <= iVar12) {
              sVar5 = FUN_004df9e0();
              iVar12 = FUN_0062fbf0((int)sVar5);
              local_38 = local_38 - iVar12;
            }
          }
        }
        if ((param_1 != '\0') && (iVar12 = FUN_0047d6b0(), iVar12 == 0)) {
          sVar5 = FUN_004df9e0();
          iVar12 = FUN_0062fbf0((int)sVar5 / 2);
          local_38 = local_38 - iVar12;
        }
        if (local_38 < -0x13) {
          local_38 = -0x13;
        }
        dVar2 = (double)local_38 / _DAT_006b6978 + 1.0;
        if (dVar2 >= dVar1) {
          return 0;
        }
        cVar4 = FUN_004704d0(CONCAT31((int3)(CONCAT22((short)((uint)iVar12 >> 0x10),
                                                      (ushort)(dVar2 < dVar1) << 8 |
                                                      (ushort)(NAN(dVar2) || NAN(dVar1)) << 10 |
                                                      (ushort)(dVar2 == dVar1) << 0xe) >> 8),param_1
                                     ),param_3);
        if (cVar4 == '\0') {
          iVar9 = FUN_0062fbf0(100);
          sVar5 = FUN_004eab40();
          if (iVar9 < sVar5) {
            *(undefined2 *)(&DAT_00791020 + iVar8 * 2) = 2;
          }
          return 3;
        }
      }
    }
    if ((*(short *)(&DAT_00791020 + iVar8 * 2) == 5) ||
       (*(short *)(&DAT_00791020 + iVar8 * 2) == 10)) {
      if (*(short *)(&DAT_00791020 + iVar8 * 2) == 5) {
        uVar10 = FUN_0047ce60();
        local_5c = FUN_004c6ef0(param_1 == '\0',uVar10);
      }
      else {
        local_5c = FUN_004c6f50();
      }
      iVar9 = FUN_0062fbf0(100 - local_5c);
      sVar5 = FUN_00470a00(param_1,3);
      if (iVar9 < sVar5) {
        FUN_004c79d0(3);
        cVar4 = FUN_004f6640();
        if (((cVar4 == '\0') && (cVar4 = FUN_004f66e0(), cVar4 == '\0')) &&
           (*(short *)(&DAT_00791020 + iVar8 * 2) == 10)) {
          return 0;
        }
        iVar9 = FUN_0062fbf0(100);
        sVar5 = FUN_004e9ce0();
        if (iVar9 < sVar5) {
          *(undefined2 *)(&DAT_00791020 + iVar8 * 2) = 4;
        }
        else {
          iVar9 = FUN_0062fbf0(100);
          sVar5 = FUN_004e9d00();
          if (iVar9 < sVar5) {
            *(undefined2 *)(&DAT_00791020 + iVar8 * 2) = 1;
          }
        }
        cVar4 = FUN_004f6640();
        if (cVar4 != '\0') {
          return 2;
        }
        cVar4 = FUN_004f66e0();
        if ((cVar4 != '\0') && (iVar8 = FUN_0062fbf0(0x1e), 7 < iVar8)) {
          return 4;
        }
        return 3;
      }
    }
    else if ((*(short *)(&DAT_00791020 + iVar8 * 2) == 4) ||
            (*(short *)(&DAT_00791020 + iVar8 * 2) == 9)) {
      if (*(short *)(&DAT_00791020 + iVar8 * 2) == 4) {
        uVar10 = FUN_0047ce60();
        local_60 = FUN_004c6ef0(param_1 == '\0',uVar10);
      }
      else {
        local_60 = FUN_004c6f50();
      }
      iVar9 = FUN_0062fbf0(100 - local_60);
      sVar5 = FUN_00470a00(param_1,2);
      if (iVar9 < sVar5) {
        FUN_004c79d0(2);
        cVar4 = FUN_004f6640();
        if (((cVar4 == '\0') && (cVar4 = FUN_004f66e0(), cVar4 == '\0')) &&
           (*(short *)(&DAT_00791020 + iVar8 * 2) == 9)) {
          return 0;
        }
        iVar9 = FUN_0062fbf0(100);
        sVar5 = FUN_004e9ce0();
        if (iVar9 < sVar5) {
          *(undefined2 *)(&DAT_00791020 + iVar8 * 2) = 3;
        }
        else {
          iVar9 = FUN_0062fbf0(100);
          sVar5 = FUN_004e9d00();
          if (iVar9 < sVar5) {
            *(undefined2 *)(&DAT_00791020 + iVar8 * 2) = 1;
          }
        }
        cVar4 = FUN_004f6640();
        if (cVar4 != '\0') {
          return 2;
        }
        cVar4 = FUN_004f66e0();
        if ((cVar4 != '\0') && (iVar9 = FUN_0062fbf0(0x1e), 7 < iVar9)) {
          return 4;
        }
        if (*(short *)(&DAT_00791020 + iVar8 * 2) == 9) {
          return 0;
        }
        return 3;
      }
    }
    else if ((*(short *)(&DAT_00791020 + iVar8 * 2) == 3) ||
            (*(short *)(&DAT_00791020 + iVar8 * 2) == 8)) {
      if (*(short *)(&DAT_00791020 + iVar8 * 2) == 3) {
        uVar10 = FUN_0047ce60();
        local_64 = FUN_004c6ef0(param_1 == '\0',uVar10);
      }
      else {
        local_64 = FUN_004c6f50();
      }
      iVar9 = FUN_0062fbf0(100 - local_64);
      sVar5 = FUN_00470a00(param_1,1);
      if (iVar9 < sVar5) {
        FUN_004c79d0(1);
        cVar4 = FUN_004f6640();
        if (((cVar4 == '\0') && (cVar4 = FUN_004f66e0(), cVar4 == '\0')) &&
           (*(short *)(&DAT_00791020 + iVar8 * 2) == 8)) {
          return 0;
        }
        iVar9 = FUN_0062fbf0(100);
        sVar5 = FUN_004e9ce0();
        if (iVar9 < sVar5) {
          *(undefined2 *)(&DAT_00791020 + iVar8 * 2) = 2;
        }
        else {
          iVar9 = FUN_0062fbf0(100);
          sVar5 = FUN_004e9d00();
          if (iVar9 < sVar5) {
            *(undefined2 *)(&DAT_00791020 + iVar8 * 2) = 1;
          }
        }
        cVar4 = FUN_004f6640();
        if (cVar4 != '\0') {
          return 2;
        }
        cVar4 = FUN_004f66e0();
        if ((cVar4 != '\0') && (iVar9 = FUN_0062fbf0(0x1e), 7 < iVar9)) {
          return 4;
        }
        if (*(short *)(&DAT_00791020 + iVar8 * 2) == 8) {
          return 0;
        }
        return 3;
      }
    }
    cVar4 = FUN_004f6640();
    if (cVar4 == '\0') {
      if (*(short *)(&DAT_00791020 + iVar8 * 2) == 10) {
        return 0;
      }
      if (*(short *)(&DAT_00791020 + iVar8 * 2) == 9) {
        return 0;
      }
      if (*(short *)(&DAT_00791020 + iVar8 * 2) == 8) {
        return 0;
      }
    }
    iVar9 = FUN_0062fbf0(100);
    sVar5 = FUN_004e9d00();
    if (iVar9 < sVar5) {
      *(undefined2 *)(&DAT_00791020 + iVar8 * 2) = 1;
    }
    cVar4 = FUN_004f6640();
    if (cVar4 == '\0') {
      uVar10 = 3;
    }
    else {
      uVar10 = 1;
    }
  }
  return uVar10;
}

