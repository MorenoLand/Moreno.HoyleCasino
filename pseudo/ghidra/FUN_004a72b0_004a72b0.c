// FUN_004a72b0  004a72b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004a72b0(int param_1,int param_2,int param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  float10 fVar15;
  undefined8 uVar16;
  undefined1 auStack_11c [8];
  undefined *puStack_114;
  undefined *puStack_110;
  undefined *puStack_10c;
  undefined *puStack_108;
  undefined *puStack_104;
  undefined *puStack_100;
  undefined *puStack_fc;
  undefined *puStack_f8;
  undefined *puStack_f4;
  undefined *puStack_f0;
  undefined *puStack_ec;
  undefined *puStack_e8;
  undefined1 *puStack_e4;
  undefined *puStack_e0;
  undefined *puStack_dc;
  undefined *puStack_d8;
  undefined *puStack_d4;
  undefined *puStack_d0;
  undefined1 *puStack_cc;
  uint uStack_c8;
  int local_b4;
  int local_a8;
  int local_9c;
  short local_2c;
  short local_28;
  short local_20;
  undefined1 local_1c [8];
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a123f;
  local_10 = ExceptionList;
  uStack_c8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  puStack_cc = (undefined1 *)0x4a72e5;
  local_14 = FUN_0047e420();
  if ((short)(&DAT_00791d80)[local_14] == param_1) {
    if (((*(short *)(&DAT_007919b8 + local_14 * 2) == param_3) ||
        (*(short *)(&DAT_00791768 + local_14 * 2) == 6)) ||
       (*(short *)(&DAT_00791768 + local_14 * 2) == 2)) {
      puStack_cc = (undefined1 *)param_3;
      puStack_d0 = (undefined *)param_2;
      puStack_d4 = (undefined *)param_1;
      puStack_d8 = (undefined *)0x4a77a7;
      fVar15 = (float10)FUN_004a7fd0();
      *(double *)(&DAT_00791d90 + local_14 * 8) = (double)fVar15;
    }
    else {
      *(short *)(&DAT_007919b8 + local_14 * 2) = (short)param_3;
      puStack_cc = (undefined1 *)param_3;
      puStack_d0 = (undefined *)param_2;
      puStack_d4 = (undefined *)param_1;
      puStack_d8 = (undefined *)0x4a777a;
      fVar15 = (float10)FUN_004a7fd0();
      *(double *)(&DAT_00791d90 + local_14 * 8) = (double)fVar15;
      *(undefined2 *)(&DAT_00791768 + local_14 * 2) = 1;
    }
  }
  else {
    puStack_cc = local_1c;
    puStack_d0 = (undefined *)0x4a730b;
    FUN_004c7c40();
    local_8 = 0;
    if (param_1 < 5) {
      local_20 = 0;
      local_28 = 0;
      while( true ) {
        puStack_cc = (undefined1 *)0x4a7345;
        iVar9 = FUN_0047f950();
        if (iVar9 <= local_28) break;
        if (local_28 != local_14) {
          puStack_cc = (undefined1 *)(int)local_28;
          puStack_d0 = (undefined *)0x4a7364;
          FUN_0047e390();
          puStack_cc = (undefined1 *)0x4a736b;
          iVar9 = FUN_004c7010();
          if (iVar9 == 1) {
            puStack_cc = (undefined1 *)(int)local_28;
            puStack_d0 = (undefined *)0x4a7380;
            FUN_0047e390();
            puStack_cc = (undefined1 *)0x4a7387;
            puStack_cc = (undefined1 *)FUN_004c7050();
            puStack_d0 = (undefined *)0x4a7396;
            sVar6 = FUN_004f6a90();
            local_20 = local_20 + sVar6;
          }
        }
        local_28 = local_28 + 1;
      }
      puStack_cc = (undefined1 *)0x4a73b0;
      sVar6 = FUN_004d56d0();
      puStack_cc = (undefined1 *)(int)sVar6;
      puStack_d0 = (undefined *)0x4a73be;
      sVar7 = FUN_0062fbf0();
      puStack_cc = (undefined1 *)(int)sVar6;
      puStack_d0 = (undefined *)0x4a73cd;
      sVar6 = FUN_0062fbf0();
      puStack_cc = (undefined1 *)0x4a73e1;
      sVar8 = FUN_004d5690();
      puStack_cc = (undefined1 *)(sVar8 + 1);
      puStack_d0 = (undefined *)0x4a73ed;
      sVar8 = FUN_0062fbf0();
      *(short *)(&DAT_00791798 + local_14 * 2) = (sVar7 - sVar6) - local_20 * sVar8;
    }
    else {
      *(undefined2 *)(&DAT_00791798 + local_14 * 2) = 10;
    }
    puStack_cc = (undefined1 *)0x1;
    puStack_d0 = &DAT_00791460 + local_14 * 0x18;
    puStack_d4 = &DAT_007919d8 + local_14 * 0x18;
    puStack_d8 = &DAT_007915c8 + local_14 * 0x18;
    puStack_e4 = (undefined1 *)&puStack_e0;
    puStack_e8 = (undefined *)0x4a744d;
    FUN_004c7c40();
    puStack_e4 = (undefined1 *)0x4a7458;
    FUN_00491df0();
    puStack_cc = (undefined1 *)0x0;
    puStack_d0 = &DAT_00791464 + local_14 * 0x18;
    puStack_d4 = &DAT_007919dc + local_14 * 0x18;
    puStack_d8 = &DAT_007915cc + local_14 * 0x18;
    puStack_e4 = (undefined1 *)&puStack_e0;
    puStack_e8 = (undefined *)0x4a7497;
    FUN_004c7c40();
    puStack_e4 = (undefined1 *)0x4a74a2;
    FUN_00491df0();
    puStack_cc = &DAT_00791688 + local_14 * 4;
    puStack_d0 = &DAT_007915a8 + local_14 * 4;
    puStack_d4 = &DAT_00791560 + local_14 * 4;
    puStack_d8 = &DAT_00791420 + local_14 * 4;
    puStack_dc = &DAT_00791d20 + local_14 * 4;
    puStack_e0 = &DAT_00791e10 + local_14 * 4;
    puStack_e4 = &DAT_00791588 + local_14 * 4;
    puStack_e8 = &DAT_00791870 + local_14 * 4;
    puStack_ec = &DAT_00791ac0 + local_14 * 4;
    puStack_f0 = &DAT_00791848 + local_14 * 4;
    puStack_f4 = &DAT_00791894 + local_14 * 4;
    puStack_f8 = &DAT_007918b4 + local_14 * 4;
    puStack_fc = &DAT_007916a8 + local_14 * 4;
    puStack_100 = &DAT_007918d4 + local_14 * 4;
    puStack_104 = &DAT_00791938 + local_14 * 4;
    puStack_108 = &DAT_00791778 + local_14 * 4;
    puStack_10c = &DAT_00791ce0 + local_14 * 4;
    puStack_110 = &DAT_007916c8 + local_14 * 4;
    puStack_114 = &DAT_00791998 + local_14 * 4;
    FUN_004c7c40(auStack_11c);
    FUN_00494d50();
    (&DAT_00791d80)[local_14] = (undefined2)param_1;
    *(short *)(&DAT_007919b8 + local_14 * 2) = (short)param_3;
    if (param_1 == 3) {
      puStack_cc = (undefined1 *)0x15;
      puStack_d0 = (undefined *)0x4a75c3;
      iVar9 = FUN_0062fbf0();
      puStack_cc = (undefined1 *)0x15;
      puStack_d0 = (undefined *)0x4a75cf;
      iVar10 = FUN_0062fbf0();
      puStack_cc = (undefined1 *)0x15;
      puStack_d0 = (undefined *)0x4a75dd;
      iVar11 = FUN_0062fbf0();
      puStack_cc = (undefined1 *)0x15;
      puStack_d0 = (undefined *)0x4a75e9;
      iVar12 = FUN_0062fbf0();
      *(double *)(&DAT_00791dd0 + local_14 * 8) =
           (double)(iVar9 + 0x3c + iVar10 + iVar11 + iVar12) * _DAT_006bc270;
      local_2c = 0;
      while( true ) {
        puStack_cc = (undefined1 *)0x4a7627;
        iVar9 = FUN_0047f950();
        if (iVar9 <= local_2c) break;
        puStack_cc = (undefined1 *)0x33;
        puStack_d0 = (undefined *)0x4a7632;
        iVar9 = FUN_0062fbf0();
        puStack_cc = (undefined1 *)0x33;
        puStack_d0 = (undefined *)0x4a763e;
        iVar10 = FUN_0062fbf0();
        puStack_cc = (undefined1 *)0x33;
        puStack_d0 = (undefined *)0x4a764c;
        iVar11 = FUN_0062fbf0();
        *(double *)(&DAT_00791ae0 + local_2c * 8 + local_14 * 0x40) =
             (double)(iVar9 + 0x19 + iVar10 + iVar11) * _DAT_006bc270;
        local_2c = local_2c + 1;
      }
    }
    puStack_cc = (undefined1 *)param_3;
    puStack_d0 = (undefined *)param_2;
    puStack_d4 = (undefined *)param_1;
    puStack_d8 = (undefined *)0x4a7681;
    fVar15 = (float10)FUN_004a7fd0();
    *(double *)(&DAT_00791d90 + local_14 * 8) = (double)fVar15;
    *(undefined2 *)(&DAT_00791768 + local_14 * 2) = 1;
    if (param_1 == 5) {
      if (*(int *)(&DAT_007915c8 + local_14 * 0x18) + *(int *)(&DAT_007915cc + local_14 * 0x18) == 0
         ) {
        *(undefined2 *)(&DAT_00791768 + local_14 * 2) = 6;
      }
      if (*(int *)(&DAT_007915c8 + local_14 * 0x18) + *(int *)(&DAT_007919d8 + local_14 * 0x18) == 0
         ) {
        *(undefined2 *)(&DAT_00791768 + local_14 * 2) = 6;
      }
      if (*(int *)(&DAT_007915cc + local_14 * 0x18) + *(int *)(&DAT_007919dc + local_14 * 0x18) == 0
         ) {
        *(undefined2 *)(&DAT_00791768 + local_14 * 2) = 6;
      }
    }
    local_8 = 0xffffffff;
    puStack_cc = (undefined1 *)0x4a7725;
    FUN_00484470();
  }
  if (*(short *)(&DAT_00791768 + local_14 * 2) == 6) {
    puStack_cc = (undefined1 *)0x3;
    puStack_d0 = (undefined *)0x4a77d1;
    FUN_004c79d0();
    puStack_cc = (undefined1 *)0x4a77df;
    cVar5 = FUN_004f6640();
    if (cVar5 == '\0') {
      puStack_cc = (undefined1 *)0x4a7826;
      cVar5 = FUN_004f66e0();
      if (cVar5 != '\0') {
        ExceptionList = local_10;
        return 4;
      }
      ExceptionList = local_10;
      return 3;
    }
    puStack_cc = (undefined1 *)0x4a77eb;
    cVar5 = FUN_004a39c0();
    if (cVar5 == '\0') {
      puStack_cc = (undefined1 *)0x14;
      puStack_d0 = (undefined *)0x4a77f9;
      iVar9 = FUN_0062fbf0();
      if (iVar9 == 0) {
        ExceptionList = local_10;
        return 1;
      }
    }
    ExceptionList = local_10;
    return 2;
  }
  if (*(short *)(&DAT_00791768 + local_14 * 2) == 1) {
    puStack_cc = (undefined1 *)0x4a7865;
    cVar5 = FUN_004f6690();
    dVar4 = _DAT_006be528;
    if (cVar5 == '\0') {
      puStack_cc = (undefined1 *)param_3;
      puStack_d0 = (undefined *)param_1;
      puStack_d4 = (undefined *)0x4a79be;
      cVar5 = FUN_004a63a0();
      if (cVar5 == '\0') {
        ExceptionList = local_10;
        return 1;
      }
    }
    else {
      puStack_cc = (undefined1 *)0x4a7884;
      iVar9 = FUN_004c6df0();
      dVar3 = (double)iVar9 / _DAT_006b4b00;
      dVar1 = *(double *)(&DAT_00791d90 + local_14 * 8);
      dVar2 = *(double *)(&DAT_00791d90 + local_14 * 8);
      puStack_cc = (undefined1 *)0x4a78b8;
      iVar9 = FUN_004f67d0();
      puStack_cc = (undefined1 *)0x4a78d8;
      iVar10 = FUN_004f6840();
      puStack_cc = (undefined1 *)0x4a78fb;
      sVar6 = FUN_004d5a20();
      sVar6 = sVar6 * ((short)param_3 + -1);
      puStack_cc = (undefined1 *)(int)sVar6;
      puStack_d0 = (undefined *)0x4a7915;
      iVar11 = FUN_0062fbf0();
      puStack_cc = (undefined1 *)(int)sVar6;
      puStack_d0 = (undefined *)0x4a7924;
      iVar12 = FUN_0062fbf0();
      puStack_cc = (undefined1 *)(int)sVar6;
      puStack_d0 = (undefined *)0x4a7933;
      iVar13 = FUN_0062fbf0();
      if (((dVar3 + dVar1) * dVar2 * dVar4) / ((double)iVar9 / (double)iVar10) <=
          (double)((iVar11 + iVar12) - iVar13) / _DAT_006be518 + 1.0) {
        ExceptionList = local_10;
        return 0;
      }
      puStack_cc = (undefined1 *)param_3;
      puStack_d0 = (undefined *)param_1;
      puStack_d4 = (undefined *)0x4a7965;
      cVar5 = FUN_004a63a0();
      if (cVar5 == '\0') {
        puStack_cc = (undefined1 *)0x64;
        puStack_d0 = (undefined *)0x4a7978;
        iVar9 = FUN_0062fbf0();
        puStack_cc = (undefined1 *)0x4a7988;
        sVar6 = FUN_004d4f00();
        if (iVar9 < sVar6) {
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
      puStack_cc = (undefined1 *)0x4a7a13;
      puStack_cc = (undefined1 *)FUN_0047ce60();
      puStack_d0 = (undefined *)CONCAT31((int3)((uint)puStack_cc >> 8),param_1 == 5);
      puStack_d4 = (undefined *)0x4a7a27;
      local_9c = FUN_004c6ef0();
    }
    else {
      puStack_cc = (undefined1 *)0x4a7a3a;
      local_9c = FUN_004c6f50();
    }
    puStack_cc = (undefined1 *)(100 - local_9c);
    puStack_d0 = (undefined *)0x4a7a51;
    iVar9 = FUN_0062fbf0();
    puStack_cc = (undefined1 *)0x3;
    puStack_d0 = (undefined *)param_1;
    puStack_d4 = (undefined *)0x4a7a6e;
    sVar6 = FUN_004a7250();
    if ((double)iVar9 < (double)(int)sVar6) {
      puStack_cc = (undefined1 *)0x3;
      puStack_d0 = (undefined *)0x4a7a9b;
      FUN_004c79d0();
      puStack_cc = (undefined1 *)0x4a7aa9;
      cVar5 = FUN_004f6640();
      if (cVar5 == '\0') {
        puStack_cc = (undefined1 *)0x4a7abe;
        cVar5 = FUN_004f66e0();
        if ((cVar5 == '\0') && (*(short *)(&DAT_00791768 + local_14 * 2) == 0xc)) {
          ExceptionList = local_10;
          return 0;
        }
      }
      puStack_cc = (undefined1 *)0x64;
      puStack_d0 = (undefined *)0x4a7ae3;
      iVar9 = FUN_0062fbf0();
      puStack_cc = (undefined1 *)0x4a7af3;
      sVar6 = FUN_004d5590();
      if (iVar9 < sVar6) {
        *(undefined2 *)(&DAT_00791768 + local_14 * 2) = 4;
      }
      else {
        puStack_cc = (undefined1 *)0x64;
        puStack_d0 = (undefined *)0x4a7b10;
        iVar9 = FUN_0062fbf0();
        puStack_cc = (undefined1 *)0x4a7b20;
        sVar6 = FUN_004d55b0();
        if (iVar9 < sVar6) {
          *(undefined2 *)(&DAT_00791768 + local_14 * 2) = 1;
        }
      }
      puStack_cc = (undefined1 *)0x4a7b42;
      cVar5 = FUN_004f6640();
      if (cVar5 != '\0') {
        ExceptionList = local_10;
        return 2;
      }
      puStack_cc = (undefined1 *)0x4a7b63;
      cVar5 = FUN_004f66e0();
      if (cVar5 != '\0') {
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
      puStack_cc = (undefined1 *)0x4a7bc4;
      uVar16 = FUN_0047ce60();
      puStack_cc = (undefined1 *)uVar16;
      puStack_d0 = (undefined *)CONCAT31((int3)((ulonglong)uVar16 >> 0x28),param_1 == 5);
      puStack_d4 = (undefined *)0x4a7bd8;
      local_a8 = FUN_004c6ef0();
    }
    else {
      puStack_cc = (undefined1 *)0x4a7beb;
      local_a8 = FUN_004c6f50();
    }
    puStack_cc = (undefined1 *)(100 - local_a8);
    puStack_d0 = (undefined *)0x4a7c02;
    iVar9 = FUN_0062fbf0();
    puStack_cc = (undefined1 *)0x2;
    puStack_d0 = (undefined *)param_1;
    puStack_d4 = (undefined *)0x4a7c1f;
    sVar6 = FUN_004a7250();
    if ((double)iVar9 < (double)(int)sVar6) {
      puStack_cc = (undefined1 *)0x2;
      puStack_d0 = (undefined *)0x4a7c4c;
      FUN_004c79d0();
      puStack_cc = (undefined1 *)0x4a7c5a;
      cVar5 = FUN_004f6640();
      if (cVar5 == '\0') {
        puStack_cc = (undefined1 *)0x4a7c6f;
        cVar5 = FUN_004f66e0();
        if ((cVar5 == '\0') && (*(short *)(&DAT_00791768 + local_14 * 2) == 0xb)) {
          ExceptionList = local_10;
          return 0;
        }
      }
      puStack_cc = (undefined1 *)0x64;
      puStack_d0 = (undefined *)0x4a7c94;
      iVar9 = FUN_0062fbf0();
      puStack_cc = (undefined1 *)0x4a7ca4;
      sVar6 = FUN_004d5590();
      if (iVar9 < sVar6) {
        *(undefined2 *)(&DAT_00791768 + local_14 * 2) = 3;
      }
      else {
        puStack_cc = (undefined1 *)0x64;
        puStack_d0 = (undefined *)0x4a7cc1;
        iVar9 = FUN_0062fbf0();
        puStack_cc = (undefined1 *)0x4a7cd1;
        sVar6 = FUN_004d55b0();
        if (iVar9 < sVar6) {
          *(undefined2 *)(&DAT_00791768 + local_14 * 2) = 1;
        }
      }
      puStack_cc = (undefined1 *)0x4a7cf3;
      cVar5 = FUN_004f6640();
      if (cVar5 != '\0') {
        ExceptionList = local_10;
        return 2;
      }
      puStack_cc = (undefined1 *)0x4a7d14;
      cVar5 = FUN_004f66e0();
      if (cVar5 != '\0') {
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
      puStack_cc = (undefined1 *)0x4a7d8e;
      puStack_cc = (undefined1 *)FUN_0047ce60();
      puStack_d0 = (undefined *)CONCAT31((int3)((uint)puStack_cc >> 8),param_1 == 5);
      puStack_d4 = (undefined *)0x4a7da2;
      local_b4 = FUN_004c6ef0();
    }
    else {
      puStack_cc = (undefined1 *)0x4a7db5;
      local_b4 = FUN_004c6f50();
    }
    puStack_cc = (undefined1 *)(100 - local_b4);
    puStack_d0 = (undefined *)0x4a7dcc;
    iVar9 = FUN_0062fbf0();
    puStack_cc = (undefined1 *)0x1;
    puStack_d0 = (undefined *)param_1;
    puStack_d4 = (undefined *)0x4a7de9;
    sVar6 = FUN_004a7250();
    if ((double)iVar9 < (double)(int)sVar6) {
      puStack_cc = (undefined1 *)0x1;
      puStack_d0 = (undefined *)0x4a7e16;
      FUN_004c79d0();
      puStack_cc = (undefined1 *)0x4a7e24;
      cVar5 = FUN_004f6640();
      if (cVar5 == '\0') {
        puStack_cc = (undefined1 *)0x4a7e39;
        cVar5 = FUN_004f66e0();
        if ((cVar5 == '\0') && (*(short *)(&DAT_00791768 + local_14 * 2) == 10)) {
          ExceptionList = local_10;
          return 0;
        }
      }
      puStack_cc = (undefined1 *)0x64;
      puStack_d0 = (undefined *)0x4a7e5e;
      iVar9 = FUN_0062fbf0();
      puStack_cc = (undefined1 *)0x4a7e6e;
      sVar6 = FUN_004d5590();
      if (iVar9 < sVar6) {
        *(undefined2 *)(&DAT_00791768 + local_14 * 2) = 2;
      }
      else {
        puStack_cc = (undefined1 *)0x64;
        puStack_d0 = (undefined *)0x4a7e8b;
        iVar9 = FUN_0062fbf0();
        puStack_cc = (undefined1 *)0x4a7e9b;
        sVar6 = FUN_004d55b0();
        if (iVar9 < sVar6) {
          *(undefined2 *)(&DAT_00791768 + local_14 * 2) = 1;
        }
      }
      puStack_cc = (undefined1 *)0x4a7ebd;
      cVar5 = FUN_004f6640();
      if (cVar5 != '\0') {
        ExceptionList = local_10;
        return 2;
      }
      puStack_cc = (undefined1 *)0x4a7ede;
      cVar5 = FUN_004f66e0();
      if (cVar5 != '\0') {
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
  puStack_cc = (undefined1 *)0x4a7f22;
  cVar5 = FUN_004f6640();
  if (cVar5 == '\0') {
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
  puStack_cc = (undefined1 *)0x64;
  puStack_d0 = (undefined *)0x4a7f70;
  iVar9 = FUN_0062fbf0();
  puStack_cc = (undefined1 *)0x4a7f80;
  sVar6 = FUN_004d55b0();
  if (iVar9 < sVar6) {
    *(undefined2 *)(&DAT_00791768 + local_14 * 2) = 1;
  }
  puStack_cc = (undefined1 *)0x4a7fa2;
  cVar5 = FUN_004f6640();
  if (cVar5 == '\0') {
    uVar14 = 3;
  }
  else {
    uVar14 = 1;
  }
  ExceptionList = local_10;
  return uVar14;
}

