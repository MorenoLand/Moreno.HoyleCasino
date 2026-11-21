// FUN_0046cd10  0046cd10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0046cd10(char param_1,int param_2,int param_3,int param_4)

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
  int local_90;
  int local_84;
  int local_78;
  int local_38;
  double local_34;
  short local_24;
  int local_20;
  short local_1c;
  short local_18;
  short local_14;
  short local_c;
  
  iVar8 = FUN_0047e420();
  if (iVar8 < 0) {
    FUN_005e9f20("currentPlayer >= 0","..\\Casino\\PokerDrawai.cpp",0x1c8);
  }
  iVar9 = FUN_0047f950();
  if (iVar9 <= iVar8) {
    FUN_005e9f20("currentPlayer < pokerGame->GetNumberOfPlayersAtTable()",
                 "..\\Casino\\PokerDrawai.cpp",0x1c9);
  }
  DAT_00791048 = FUN_0047e3b0();
  if ((int)(short)(&DAT_00790fb8)[iVar8] == 2 - (uint)(param_1 != '\0')) {
    if ((((*(short *)(&DAT_0079104c + iVar8 * 2) == param_3) ||
         (*(short *)(&DAT_00791020 + iVar8 * 2) == 6)) ||
        (*(short *)(&DAT_00791020 + iVar8 * 2) == 7)) ||
       (*(short *)(&DAT_00791020 + iVar8 * 2) == 2)) {
      fVar13 = (float10)FUN_0046dc80(param_1,param_2);
      *(double *)(&DAT_00791260 + iVar8 * 8) = (double)fVar13;
    }
    else {
      *(undefined2 *)(&DAT_0079104c + iVar8 * 2) = (undefined2)param_3;
      FUN_0046e1f0(param_1,param_3);
      fVar13 = (float10)FUN_0046dc80(param_1,param_2);
      *(double *)(&DAT_00791260 + iVar8 * 8) = (double)fVar13;
      *(undefined2 *)(&DAT_00791020 + iVar8 * 2) = 1;
    }
  }
  else {
    if (param_1 != '\0') {
      FUN_0046e6f0();
    }
    FUN_0046e1f0(param_1,param_3);
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
      sVar5 = FUN_004e0490();
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
      sVar5 = FUN_004e04d0();
      sVar6 = FUN_0062fbf0((int)sVar5);
      sVar5 = FUN_0062fbf0((int)sVar5);
      sVar7 = FUN_004e0490();
      sVar7 = FUN_0062fbf0(sVar7 + 1);
      *(short *)(&DAT_00791010 + iVar8 * 2) = (sVar6 - sVar5) - local_c * sVar7;
    }
    (&DAT_00790fb8)[iVar8] = 2 - (ushort)(param_1 != '\0');
    *(undefined2 *)(&DAT_0079104c + iVar8 * 2) = (undefined2)param_3;
    fVar13 = (float10)FUN_0046dc80(param_1,param_2);
    *(double *)(&DAT_00791260 + iVar8 * 8) = (double)fVar13;
    *(undefined2 *)(&DAT_00791020 + iVar8 * 2) = 1;
    if (*(short *)(&DAT_00791030 + iVar8 * 2) == 0x1c) {
      *(undefined2 *)(&DAT_00791020 + iVar8 * 2) = 6;
    }
    else if (*(short *)(&DAT_00791030 + iVar8 * 2) == 0x1b) {
      *(undefined2 *)(&DAT_00791020 + iVar8 * 2) = 7;
    }
    else if (*(short *)(&DAT_00791030 + iVar8 * 2) == 0x1a) {
      *(undefined2 *)(&DAT_00791020 + iVar8 * 2) = 7;
    }
    else if ((*(short *)(&DAT_00791030 + iVar8 * 2) == 0x19) && (iVar9 = FUN_0062fbf0(5), iVar9 < 4)
            ) {
      *(undefined2 *)(&DAT_00791020 + iVar8 * 2) = 7;
    }
    else if ((*(short *)(&DAT_00791030 + iVar8 * 2) == 0x18) && (iVar9 = FUN_0062fbf0(5), iVar9 < 3)
            ) {
      *(undefined2 *)(&DAT_00791020 + iVar8 * 2) = 7;
    }
  }
  if (((param_1 != '\0') && (1 < param_4)) &&
     ((cVar4 = FUN_004f6640(), cVar4 != '\0' &&
      ((0xd < *(short *)(&DAT_00791030 + iVar8 * 2) &&
       (*(short *)(&DAT_00791030 + iVar8 * 2) < 0x1d)))))) {
    for (local_20 = 1; iVar9 = FUN_0047f950(), local_20 < (iVar9 - param_2) / 2 + param_4;
        local_20 = local_20 + 1) {
      iVar9 = FUN_0062fbf0(100);
      sVar5 = FUN_004e1650();
      if (iVar9 < sVar5) {
        iVar8 = FUN_0062fbf0(3);
        FUN_004c79d0(iVar8 + 1);
        return 2;
      }
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
        sVar5 = FUN_004e0390();
        if (iVar9 < sVar5) {
          iVar9 = FUN_0062fbf0(100);
          sVar5 = FUN_004e0390();
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
      local_34 = _DAT_006b3748;
      if (cVar4 == '\0') {
        cVar4 = FUN_0046e2f0(param_1,param_3);
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
        local_24 = FUN_004e1520();
        sVar5 = FUN_0062fbf0(param_3 + -1);
        local_24 = local_24 * (sVar5 + 1);
        if ((param_1 != '\0') && (iVar9 = FUN_0047d6b0(), iVar9 != 1)) {
          local_24 = 0;
        }
        iVar9 = FUN_0062fbf0((int)local_24);
        iVar11 = FUN_0062fbf0((int)local_24);
        iVar12 = FUN_0062fbf0((int)local_24);
        local_38 = (iVar9 + iVar11) - iVar12;
        if (param_1 != '\0') {
          sVar5 = FUN_004df9e0();
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
        cVar4 = FUN_0046e2f0(CONCAT31((int3)(CONCAT22((short)((uint)iVar12 >> 0x10),
                                                      (ushort)(dVar2 < dVar1) << 8 |
                                                      (ushort)(NAN(dVar2) || NAN(dVar1)) << 10 |
                                                      (ushort)(dVar2 == dVar1) << 0xe) >> 8),param_1
                                     ),param_3);
        if (cVar4 == '\0') {
          iVar9 = FUN_0062fbf0(100);
          sVar5 = FUN_004e11f0();
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
        local_78 = FUN_004c6ef0(param_1 == '\0',uVar10);
      }
      else {
        local_78 = FUN_004c6f50();
      }
      iVar9 = FUN_0062fbf0(100 - local_78);
      sVar5 = FUN_0046e810(param_1,3,param_3);
      if ((double)iVar9 < (double)(int)sVar5) {
        FUN_004c79d0(3);
        cVar4 = FUN_004f6640();
        if (((cVar4 == '\0') && (cVar4 = FUN_004f66e0(), cVar4 == '\0')) &&
           (*(short *)(&DAT_00791020 + iVar8 * 2) == 10)) {
          return 0;
        }
        iVar9 = FUN_0062fbf0(100);
        sVar5 = FUN_004e0390();
        if (iVar9 < sVar5) {
          *(undefined2 *)(&DAT_00791020 + iVar8 * 2) = 4;
        }
        else {
          iVar9 = FUN_0062fbf0(100);
          sVar5 = FUN_004e03b0();
          if (iVar9 < sVar5) {
            *(undefined2 *)(&DAT_00791020 + iVar8 * 2) = 1;
          }
        }
        cVar4 = FUN_004f6640();
        if (cVar4 != '\0') {
          return 2;
        }
        cVar4 = FUN_004f66e0();
        if ((cVar4 != '\0') && (iVar8 = FUN_0062fbf0(3), iVar8 != 0)) {
          return 4;
        }
        return 3;
      }
    }
    else if ((*(short *)(&DAT_00791020 + iVar8 * 2) == 4) ||
            (*(short *)(&DAT_00791020 + iVar8 * 2) == 9)) {
      if (*(short *)(&DAT_00791020 + iVar8 * 2) == 4) {
        uVar10 = FUN_0047ce60();
        local_84 = FUN_004c6ef0(param_1 == '\0',uVar10);
      }
      else {
        local_84 = FUN_004c6f50();
      }
      iVar9 = FUN_0062fbf0(100 - local_84);
      sVar5 = FUN_0046e810(param_1,2,param_3);
      if ((double)iVar9 < (double)(int)sVar5) {
        FUN_004c79d0(2);
        cVar4 = FUN_004f6640();
        if (((cVar4 == '\0') && (cVar4 = FUN_004f66e0(), cVar4 == '\0')) &&
           (*(short *)(&DAT_00791020 + iVar8 * 2) == 9)) {
          return 0;
        }
        iVar9 = FUN_0062fbf0(100);
        sVar5 = FUN_004e0390();
        if (iVar9 < sVar5) {
          *(undefined2 *)(&DAT_00791020 + iVar8 * 2) = 3;
        }
        else {
          iVar9 = FUN_0062fbf0(100);
          sVar5 = FUN_004e03b0();
          if (iVar9 < sVar5) {
            *(undefined2 *)(&DAT_00791020 + iVar8 * 2) = 1;
          }
        }
        cVar4 = FUN_004f6640();
        if (cVar4 != '\0') {
          return 2;
        }
        cVar4 = FUN_004f66e0();
        if ((cVar4 != '\0') && (iVar9 = FUN_0062fbf0(3), iVar9 != 0)) {
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
        local_90 = FUN_004c6ef0(param_1 == '\0',uVar10);
      }
      else {
        local_90 = FUN_004c6f50();
      }
      iVar9 = FUN_0062fbf0(100 - local_90);
      sVar5 = FUN_0046e810(param_1,1,param_3);
      if ((double)iVar9 < (double)(int)sVar5) {
        FUN_004c79d0(1);
        cVar4 = FUN_004f6640();
        if (((cVar4 == '\0') && (cVar4 = FUN_004f66e0(), cVar4 == '\0')) &&
           (*(short *)(&DAT_00791020 + iVar8 * 2) == 8)) {
          return 0;
        }
        iVar9 = FUN_0062fbf0(100);
        sVar5 = FUN_004e0390();
        if (iVar9 < sVar5) {
          *(undefined2 *)(&DAT_00791020 + iVar8 * 2) = 2;
        }
        else {
          iVar9 = FUN_0062fbf0(100);
          sVar5 = FUN_004e03b0();
          if (iVar9 < sVar5) {
            *(undefined2 *)(&DAT_00791020 + iVar8 * 2) = 1;
          }
        }
        cVar4 = FUN_004f6640();
        if (cVar4 != '\0') {
          return 2;
        }
        cVar4 = FUN_004f66e0();
        if ((cVar4 != '\0') && (iVar9 = FUN_0062fbf0(3), iVar9 != 0)) {
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
    sVar5 = FUN_004e03b0();
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

