// FUN_004a4e40  004a4e40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004a4e40(int param_1,int param_2,int param_3)

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
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  float10 fVar14;
  undefined8 uVar15;
  undefined1 auStack_104 [8];
  undefined *puStack_fc;
  undefined *puStack_f8;
  undefined *puStack_f4;
  undefined *puStack_f0;
  undefined *puStack_ec;
  undefined *puStack_e8;
  undefined *puStack_e4;
  undefined *puStack_e0;
  undefined1 *puStack_dc;
  undefined *puStack_d8;
  undefined *puStack_d4;
  undefined *puStack_d0;
  undefined *puStack_cc;
  undefined *puStack_c8;
  undefined1 *puStack_c4;
  uint uStack_c0;
  int local_ac;
  int local_a0;
  int local_94;
  short local_2c;
  short local_28;
  short local_20;
  undefined1 local_1c [8];
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a11f6;
  local_10 = ExceptionList;
  uStack_c0 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  puStack_c4 = (undefined1 *)0x4a4e75;
  local_14 = FUN_0047e420();
  if ((short)(&DAT_00791d80)[local_14] == param_1) {
    if (((*(short *)(&DAT_007919b8 + local_14 * 2) == param_3) ||
        (*(short *)(&DAT_00791768 + local_14 * 2) == 6)) ||
       (*(short *)(&DAT_00791768 + local_14 * 2) == 2)) {
      puStack_c4 = (undefined1 *)param_3;
      puStack_c8 = (undefined *)param_2;
      puStack_cc = (undefined *)param_1;
      puStack_d0 = (undefined *)0x4a5269;
      fVar14 = (float10)FUN_004a5a80();
      *(double *)(&DAT_00791d90 + local_14 * 8) = (double)fVar14;
    }
    else {
      *(short *)(&DAT_007919b8 + local_14 * 2) = (short)param_3;
      puStack_c4 = (undefined1 *)param_3;
      puStack_c8 = (undefined *)param_2;
      puStack_cc = (undefined *)param_1;
      puStack_d0 = (undefined *)0x4a523c;
      fVar14 = (float10)FUN_004a5a80();
      *(double *)(&DAT_00791d90 + local_14 * 8) = (double)fVar14;
      *(undefined2 *)(&DAT_00791768 + local_14 * 2) = 1;
    }
  }
  else {
    puStack_c4 = local_1c;
    puStack_c8 = (undefined *)0x4a4e9b;
    FUN_004c7c40();
    local_8 = 0;
    if (param_1 < 5) {
      local_20 = 0;
      local_28 = 0;
      while( true ) {
        puStack_c4 = (undefined1 *)0x4a4ed5;
        iVar8 = FUN_0047f950();
        if (iVar8 <= local_28) break;
        if (local_28 != local_14) {
          puStack_c4 = (undefined1 *)(int)local_28;
          puStack_c8 = (undefined *)0x4a4ef4;
          FUN_0047e390();
          puStack_c4 = (undefined1 *)0x4a4efb;
          iVar8 = FUN_004c7010();
          if (iVar8 == 1) {
            puStack_c4 = (undefined1 *)(int)local_28;
            puStack_c8 = (undefined *)0x4a4f10;
            FUN_0047e390();
            puStack_c4 = (undefined1 *)0x4a4f17;
            puStack_c4 = (undefined1 *)FUN_004c7050();
            puStack_c8 = (undefined *)0x4a4f26;
            sVar5 = FUN_004f6a90();
            local_20 = local_20 + sVar5;
          }
        }
        local_28 = local_28 + 1;
      }
      puStack_c4 = (undefined1 *)0x4a4f40;
      sVar5 = FUN_004d2aa0();
      puStack_c4 = (undefined1 *)(int)sVar5;
      puStack_c8 = (undefined *)0x4a4f4e;
      sVar6 = FUN_0062fbf0();
      puStack_c4 = (undefined1 *)(int)sVar5;
      puStack_c8 = (undefined *)0x4a4f5d;
      sVar5 = FUN_0062fbf0();
      puStack_c4 = (undefined1 *)0x4a4f71;
      sVar7 = FUN_004d2a60();
      puStack_c4 = (undefined1 *)(sVar7 + 1);
      puStack_c8 = (undefined *)0x4a4f7d;
      sVar7 = FUN_0062fbf0();
      *(short *)(&DAT_00791798 + local_14 * 2) = (sVar6 - sVar5) - local_20 * sVar7;
    }
    else {
      *(undefined2 *)(&DAT_00791798 + local_14 * 2) = 10;
    }
    puStack_c4 = (undefined1 *)0x1;
    puStack_c8 = &DAT_00791460 + local_14 * 0x18;
    puStack_cc = &DAT_007919d8 + local_14 * 0x18;
    puStack_d0 = &DAT_007915c8 + local_14 * 0x18;
    puStack_dc = (undefined1 *)&puStack_d8;
    puStack_e0 = (undefined *)0x4a4fdd;
    FUN_004c7c40();
    puStack_dc = (undefined1 *)0x4a4fe8;
    FUN_00491df0();
    puStack_c4 = &DAT_00791688 + local_14 * 4;
    puStack_c8 = &DAT_007915a8 + local_14 * 4;
    puStack_cc = &DAT_00791560 + local_14 * 4;
    puStack_d0 = &DAT_00791420 + local_14 * 4;
    puStack_d4 = &DAT_00791d20 + local_14 * 4;
    puStack_d8 = &DAT_00791e10 + local_14 * 4;
    puStack_dc = &DAT_00791588 + local_14 * 4;
    puStack_e0 = &DAT_00791870 + local_14 * 4;
    puStack_e4 = &DAT_00791ac0 + local_14 * 4;
    puStack_e8 = &DAT_00791848 + local_14 * 4;
    puStack_ec = &DAT_00791894 + local_14 * 4;
    puStack_f0 = &DAT_007918b4 + local_14 * 4;
    puStack_f4 = &DAT_007916a8 + local_14 * 4;
    puStack_f8 = &DAT_007918d4 + local_14 * 4;
    puStack_fc = &DAT_00791938 + local_14 * 4;
    FUN_004c7c40(auStack_104);
    FUN_00492ce0();
    (&DAT_00791d80)[local_14] = (undefined2)param_1;
    *(short *)(&DAT_007919b8 + local_14 * 2) = (short)param_3;
    if (param_1 == 3) {
      puStack_c4 = (undefined1 *)0x15;
      puStack_c8 = (undefined *)0x4a50de;
      iVar8 = FUN_0062fbf0();
      puStack_c4 = (undefined1 *)0x15;
      puStack_c8 = (undefined *)0x4a50ea;
      iVar9 = FUN_0062fbf0();
      puStack_c4 = (undefined1 *)0x15;
      puStack_c8 = (undefined *)0x4a50f8;
      iVar10 = FUN_0062fbf0();
      puStack_c4 = (undefined1 *)0x15;
      puStack_c8 = (undefined *)0x4a5104;
      iVar11 = FUN_0062fbf0();
      *(double *)(&DAT_00791dd0 + local_14 * 8) =
           (double)(iVar8 + 0x3c + iVar9 + iVar10 + iVar11) * _DAT_006bc270;
      local_2c = 0;
      while( true ) {
        puStack_c4 = (undefined1 *)0x4a5142;
        iVar8 = FUN_0047f950();
        if (iVar8 <= local_2c) break;
        puStack_c4 = (undefined1 *)0x33;
        puStack_c8 = (undefined *)0x4a514d;
        iVar8 = FUN_0062fbf0();
        puStack_c4 = (undefined1 *)0x33;
        puStack_c8 = (undefined *)0x4a5159;
        iVar9 = FUN_0062fbf0();
        puStack_c4 = (undefined1 *)0x33;
        puStack_c8 = (undefined *)0x4a5167;
        iVar10 = FUN_0062fbf0();
        *(double *)(&DAT_00791ae0 + local_2c * 8 + local_14 * 0x40) =
             (double)(iVar8 + 0x19 + iVar9 + iVar10) * _DAT_006bc270;
        local_2c = local_2c + 1;
      }
    }
    puStack_c4 = (undefined1 *)param_3;
    puStack_c8 = (undefined *)param_2;
    puStack_cc = (undefined *)param_1;
    puStack_d0 = (undefined *)0x4a519c;
    fVar14 = (float10)FUN_004a5a80();
    *(double *)(&DAT_00791d90 + local_14 * 8) = (double)fVar14;
    *(undefined2 *)(&DAT_00791768 + local_14 * 2) = 1;
    if ((param_1 == 5) && (*(int *)(&DAT_007915c8 + local_14 * 0x18) == 0)) {
      *(undefined2 *)(&DAT_00791768 + local_14 * 2) = 6;
    }
    local_8 = 0xffffffff;
    puStack_c4 = (undefined1 *)0x4a51e7;
    FUN_00484470();
  }
  if (*(short *)(&DAT_00791768 + local_14 * 2) == 6) {
    puStack_c4 = (undefined1 *)0x3;
    puStack_c8 = (undefined *)0x4a5293;
    FUN_004c79d0();
    puStack_c4 = (undefined1 *)0x4a52a1;
    cVar4 = FUN_004f6640();
    if (cVar4 == '\0') {
      puStack_c4 = (undefined1 *)0x4a52e8;
      cVar4 = FUN_004f66e0();
      if (cVar4 != '\0') {
        ExceptionList = local_10;
        return 4;
      }
      ExceptionList = local_10;
      return 3;
    }
    puStack_c4 = (undefined1 *)0x4a52ad;
    cVar4 = FUN_004a39c0();
    if (cVar4 == '\0') {
      puStack_c4 = (undefined1 *)0x14;
      puStack_c8 = (undefined *)0x4a52bb;
      iVar8 = FUN_0062fbf0();
      if (iVar8 == 0) {
        ExceptionList = local_10;
        return 1;
      }
    }
    ExceptionList = local_10;
    return 2;
  }
  if (*(short *)(&DAT_00791768 + local_14 * 2) == 1) {
    puStack_c4 = (undefined1 *)0x4a5327;
    cVar4 = FUN_004f6690();
    dVar3 = _DAT_006be528;
    if (cVar4 == '\0') {
      puStack_c4 = (undefined1 *)param_3;
      puStack_c8 = (undefined *)param_1;
      puStack_cc = (undefined *)0x4a5476;
      cVar4 = FUN_004a63a0();
      if (cVar4 == '\0') {
        ExceptionList = local_10;
        return 1;
      }
    }
    else {
      puStack_c4 = (undefined1 *)0x4a5346;
      iVar8 = FUN_004c6df0();
      dVar2 = (double)iVar8 / _DAT_006b4b00 + _DAT_006b2c48;
      dVar1 = *(double *)(&DAT_00791d90 + local_14 * 8);
      puStack_c4 = (undefined1 *)0x4a5376;
      iVar8 = FUN_004f67d0();
      puStack_c4 = (undefined1 *)0x4a5390;
      iVar9 = FUN_004f6840();
      puStack_c4 = (undefined1 *)0x4a53b3;
      sVar5 = FUN_004d2df0();
      sVar5 = sVar5 * ((short)param_3 + -1);
      puStack_c4 = (undefined1 *)(int)sVar5;
      puStack_c8 = (undefined *)0x4a53cd;
      iVar10 = FUN_0062fbf0();
      puStack_c4 = (undefined1 *)(int)sVar5;
      puStack_c8 = (undefined *)0x4a53dc;
      iVar11 = FUN_0062fbf0();
      puStack_c4 = (undefined1 *)(int)sVar5;
      puStack_c8 = (undefined *)0x4a53eb;
      iVar12 = FUN_0062fbf0();
      if ((dVar2 * dVar3 * dVar1) / ((double)iVar8 / (double)iVar9) <=
          (double)((iVar10 + iVar11) - iVar12) / _DAT_006be518 + 1.0) {
        ExceptionList = local_10;
        return 0;
      }
      puStack_c4 = (undefined1 *)param_3;
      puStack_c8 = (undefined *)param_1;
      puStack_cc = (undefined *)0x4a541d;
      cVar4 = FUN_004a63a0();
      if (cVar4 == '\0') {
        puStack_c4 = (undefined1 *)0x64;
        puStack_c8 = (undefined *)0x4a5430;
        iVar8 = FUN_0062fbf0();
        puStack_c4 = (undefined1 *)0x4a5440;
        sVar5 = FUN_004d22d0();
        if (iVar8 < sVar5) {
          *(undefined2 *)(&DAT_00791768 + local_14 * 2) = 2;
        }
        ExceptionList = local_10;
        return 3;
      }
    }
  }
  if ((*(short *)(&DAT_00791768 + local_14 * 2) == 5) ||
     (*(short *)(&DAT_00791768 + local_14 * 2) == 0xc)) {
    if (*(short *)(&DAT_00791768 + local_14 * 2) == 5) {
      puStack_c4 = (undefined1 *)0x4a54cb;
      puStack_c4 = (undefined1 *)FUN_0047ce60();
      puStack_c8 = (undefined *)CONCAT31((int3)((uint)puStack_c4 >> 8),param_1 == 5);
      puStack_cc = (undefined *)0x4a54df;
      local_94 = FUN_004c6ef0();
    }
    else {
      puStack_c4 = (undefined1 *)0x4a54f2;
      local_94 = FUN_004c6f50();
    }
    puStack_c4 = (undefined1 *)(100 - local_94);
    puStack_c8 = (undefined *)0x4a5509;
    iVar8 = FUN_0062fbf0();
    puStack_c4 = (undefined1 *)0x3;
    puStack_c8 = (undefined *)param_1;
    puStack_cc = (undefined *)0x4a5526;
    sVar5 = FUN_004a4de0();
    if ((double)iVar8 < (double)(int)sVar5) {
      puStack_c4 = (undefined1 *)0x3;
      puStack_c8 = (undefined *)0x4a5553;
      FUN_004c79d0();
      puStack_c4 = (undefined1 *)0x4a5561;
      cVar4 = FUN_004f6640();
      if (cVar4 == '\0') {
        puStack_c4 = (undefined1 *)0x4a5576;
        cVar4 = FUN_004f66e0();
        if ((cVar4 == '\0') && (*(short *)(&DAT_00791768 + local_14 * 2) == 0xc)) {
          ExceptionList = local_10;
          return 0;
        }
      }
      puStack_c4 = (undefined1 *)0x64;
      puStack_c8 = (undefined *)0x4a559b;
      iVar8 = FUN_0062fbf0();
      puStack_c4 = (undefined1 *)0x4a55ab;
      sVar5 = FUN_004d2960();
      if (iVar8 < sVar5) {
        *(undefined2 *)(&DAT_00791768 + local_14 * 2) = 4;
      }
      else {
        puStack_c4 = (undefined1 *)0x64;
        puStack_c8 = (undefined *)0x4a55c8;
        iVar8 = FUN_0062fbf0();
        puStack_c4 = (undefined1 *)0x4a55d8;
        sVar5 = FUN_004d2980();
        if (iVar8 < sVar5) {
          *(undefined2 *)(&DAT_00791768 + local_14 * 2) = 1;
        }
      }
      puStack_c4 = (undefined1 *)0x4a55fa;
      cVar4 = FUN_004f6640();
      if (cVar4 != '\0') {
        ExceptionList = local_10;
        return 2;
      }
      puStack_c4 = (undefined1 *)0x4a561b;
      cVar4 = FUN_004f66e0();
      if (cVar4 != '\0') {
        ExceptionList = local_10;
        return 4;
      }
      ExceptionList = local_10;
      return 3;
    }
  }
  else if ((*(short *)(&DAT_00791768 + local_14 * 2) == 4) ||
          (*(short *)(&DAT_00791768 + local_14 * 2) == 0xb)) {
    if (*(short *)(&DAT_00791768 + local_14 * 2) == 4) {
      puStack_c4 = (undefined1 *)0x4a567c;
      uVar15 = FUN_0047ce60();
      puStack_c4 = (undefined1 *)uVar15;
      puStack_c8 = (undefined *)CONCAT31((int3)((ulonglong)uVar15 >> 0x28),param_1 == 5);
      puStack_cc = (undefined *)0x4a5690;
      local_a0 = FUN_004c6ef0();
    }
    else {
      puStack_c4 = (undefined1 *)0x4a56a3;
      local_a0 = FUN_004c6f50();
    }
    puStack_c4 = (undefined1 *)(100 - local_a0);
    puStack_c8 = (undefined *)0x4a56ba;
    iVar8 = FUN_0062fbf0();
    puStack_c4 = (undefined1 *)0x2;
    puStack_c8 = (undefined *)param_1;
    puStack_cc = (undefined *)0x4a56d7;
    sVar5 = FUN_004a4de0();
    if ((double)iVar8 < (double)(int)sVar5) {
      puStack_c4 = (undefined1 *)0x2;
      puStack_c8 = (undefined *)0x4a5704;
      FUN_004c79d0();
      puStack_c4 = (undefined1 *)0x4a5712;
      cVar4 = FUN_004f6640();
      if (cVar4 == '\0') {
        puStack_c4 = (undefined1 *)0x4a5727;
        cVar4 = FUN_004f66e0();
        if ((cVar4 == '\0') && (*(short *)(&DAT_00791768 + local_14 * 2) == 0xb)) {
          ExceptionList = local_10;
          return 0;
        }
      }
      puStack_c4 = (undefined1 *)0x64;
      puStack_c8 = (undefined *)0x4a574c;
      iVar8 = FUN_0062fbf0();
      puStack_c4 = (undefined1 *)0x4a575c;
      sVar5 = FUN_004d2960();
      if (iVar8 < sVar5) {
        *(undefined2 *)(&DAT_00791768 + local_14 * 2) = 3;
      }
      else {
        puStack_c4 = (undefined1 *)0x64;
        puStack_c8 = (undefined *)0x4a5779;
        iVar8 = FUN_0062fbf0();
        puStack_c4 = (undefined1 *)0x4a5789;
        sVar5 = FUN_004d2980();
        if (iVar8 < sVar5) {
          *(undefined2 *)(&DAT_00791768 + local_14 * 2) = 1;
        }
      }
      puStack_c4 = (undefined1 *)0x4a57ab;
      cVar4 = FUN_004f6640();
      if (cVar4 != '\0') {
        ExceptionList = local_10;
        return 2;
      }
      puStack_c4 = (undefined1 *)0x4a57cc;
      cVar4 = FUN_004f66e0();
      if (cVar4 != '\0') {
        ExceptionList = local_10;
        return 4;
      }
      if (*(short *)(&DAT_00791768 + local_14 * 2) == 0xb) {
        ExceptionList = local_10;
        return 0;
      }
      ExceptionList = local_10;
      return 3;
    }
  }
  else if ((*(short *)(&DAT_00791768 + local_14 * 2) == 3) ||
          (*(short *)(&DAT_00791768 + local_14 * 2) == 10)) {
    if (*(short *)(&DAT_00791768 + local_14 * 2) == 3) {
      puStack_c4 = (undefined1 *)0x4a5846;
      puStack_c4 = (undefined1 *)FUN_0047ce60();
      puStack_c8 = (undefined *)CONCAT31((int3)((uint)puStack_c4 >> 8),param_1 == 5);
      puStack_cc = (undefined *)0x4a585a;
      local_ac = FUN_004c6ef0();
    }
    else {
      puStack_c4 = (undefined1 *)0x4a586d;
      local_ac = FUN_004c6f50();
    }
    puStack_c4 = (undefined1 *)(100 - local_ac);
    puStack_c8 = (undefined *)0x4a5884;
    iVar8 = FUN_0062fbf0();
    puStack_c4 = (undefined1 *)0x1;
    puStack_c8 = (undefined *)param_1;
    puStack_cc = (undefined *)0x4a58a1;
    sVar5 = FUN_004a4de0();
    if ((double)iVar8 < (double)(int)sVar5) {
      puStack_c4 = (undefined1 *)0x1;
      puStack_c8 = (undefined *)0x4a58ce;
      FUN_004c79d0();
      puStack_c4 = (undefined1 *)0x4a58dc;
      cVar4 = FUN_004f6640();
      if (cVar4 == '\0') {
        puStack_c4 = (undefined1 *)0x4a58f1;
        cVar4 = FUN_004f66e0();
        if ((cVar4 == '\0') && (*(short *)(&DAT_00791768 + local_14 * 2) == 10)) {
          ExceptionList = local_10;
          return 0;
        }
      }
      puStack_c4 = (undefined1 *)0x64;
      puStack_c8 = (undefined *)0x4a5916;
      iVar8 = FUN_0062fbf0();
      puStack_c4 = (undefined1 *)0x4a5926;
      sVar5 = FUN_004d2960();
      if (iVar8 < sVar5) {
        *(undefined2 *)(&DAT_00791768 + local_14 * 2) = 2;
      }
      else {
        puStack_c4 = (undefined1 *)0x64;
        puStack_c8 = (undefined *)0x4a5943;
        iVar8 = FUN_0062fbf0();
        puStack_c4 = (undefined1 *)0x4a5953;
        sVar5 = FUN_004d2980();
        if (iVar8 < sVar5) {
          *(undefined2 *)(&DAT_00791768 + local_14 * 2) = 1;
        }
      }
      puStack_c4 = (undefined1 *)0x4a5975;
      cVar4 = FUN_004f6640();
      if (cVar4 != '\0') {
        ExceptionList = local_10;
        return 2;
      }
      puStack_c4 = (undefined1 *)0x4a5996;
      cVar4 = FUN_004f66e0();
      if (cVar4 != '\0') {
        ExceptionList = local_10;
        return 4;
      }
      if (*(short *)(&DAT_00791768 + local_14 * 2) == 10) {
        ExceptionList = local_10;
        return 0;
      }
      ExceptionList = local_10;
      return 3;
    }
  }
  puStack_c4 = (undefined1 *)0x4a59da;
  cVar4 = FUN_004f6640();
  if (cVar4 == '\0') {
    if (*(short *)(&DAT_00791768 + local_14 * 2) == 0xc) {
      ExceptionList = local_10;
      return 0;
    }
    if (*(short *)(&DAT_00791768 + local_14 * 2) == 0xb) {
      ExceptionList = local_10;
      return 0;
    }
    if (*(short *)(&DAT_00791768 + local_14 * 2) == 10) {
      ExceptionList = local_10;
      return 0;
    }
  }
  puStack_c4 = (undefined1 *)0x64;
  puStack_c8 = (undefined *)0x4a5a28;
  iVar8 = FUN_0062fbf0();
  puStack_c4 = (undefined1 *)0x4a5a38;
  sVar5 = FUN_004d2980();
  if (iVar8 < sVar5) {
    *(undefined2 *)(&DAT_00791768 + local_14 * 2) = 1;
  }
  puStack_c4 = (undefined1 *)0x4a5a5a;
  cVar4 = FUN_004f6640();
  if (cVar4 == '\0') {
    uVar13 = 3;
  }
  else {
    uVar13 = 1;
  }
  ExceptionList = local_10;
  return uVar13;
}

