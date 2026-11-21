// FUN_004a2cc0  004a2cc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004a2cc0(int param_1,undefined4 param_2,int param_3)

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
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  float10 fVar14;
  undefined1 auStack_e4 [8];
  undefined *puStack_dc;
  undefined *puStack_d8;
  undefined *puStack_d4;
  undefined1 *puStack_d0;
  uint uStack_cc;
  int local_b8;
  int local_ac;
  int local_a0;
  short local_34;
  short local_30;
  short local_28;
  undefined1 local_24 [8];
  short local_1c;
  int local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a115b;
  local_10 = ExceptionList;
  uStack_cc = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  puStack_d0 = (undefined1 *)0x4a2cf5;
  local_18 = FUN_0047e420();
  local_14 = 0;
  if ((short)(&DAT_00791d80)[local_18] == param_1) {
    if (((*(short *)(&DAT_007919b8 + local_18 * 2) == param_3) ||
        (*(short *)(&DAT_00791768 + local_18 * 2) == 6)) ||
       (*(short *)(&DAT_00791768 + local_18 * 2) == 2)) {
      puStack_d0 = (undefined1 *)param_2;
      puStack_d4 = (undefined *)param_1;
      puStack_d8 = (undefined *)0x4a31a1;
      fVar14 = (float10)FUN_004a3a60();
      *(double *)(&DAT_00791d90 + local_18 * 8) = (double)fVar14;
    }
    else {
      *(short *)(&DAT_007919b8 + local_18 * 2) = (short)param_3;
      puStack_d0 = (undefined1 *)param_2;
      puStack_d4 = (undefined *)param_1;
      puStack_d8 = (undefined *)0x4a3178;
      fVar14 = (float10)FUN_004a3a60();
      *(double *)(&DAT_00791d90 + local_18 * 8) = (double)fVar14;
      *(undefined2 *)(&DAT_00791768 + local_18 * 2) = 1;
    }
  }
  else {
    puStack_d0 = local_24;
    puStack_d4 = (undefined *)0x4a2d22;
    FUN_004c7c40();
    local_8 = 0;
    if (param_1 < 5) {
      puStack_d0 = &DAT_00791828 + local_18 * 4;
      puStack_d4 = &DAT_00791440 + local_18 * 4;
      puStack_d8 = &DAT_00791d00 + local_18 * 4;
      puStack_dc = &DAT_00791a98 + local_18 * 4;
      FUN_004c7c40(auStack_e4);
      FUN_0048ea10();
      local_28 = 0;
      local_30 = 0;
      while( true ) {
        puStack_d0 = (undefined1 *)0x4a2da9;
        iVar8 = FUN_0047f950();
        if (iVar8 <= local_30) break;
        if (local_30 != local_18) {
          puStack_d0 = (undefined1 *)(int)local_30;
          puStack_d4 = (undefined *)0x4a2dc8;
          local_14 = FUN_0047e390();
          puStack_d0 = (undefined1 *)0x4a2dd3;
          iVar8 = FUN_004c7010();
          if (iVar8 == 1) {
            puStack_d0 = (undefined1 *)0x4a2de0;
            puStack_d0 = (undefined1 *)FUN_004c7050();
            puStack_d4 = (undefined *)0x4a2def;
            sVar5 = FUN_004f6a90();
            local_28 = local_28 + sVar5;
          }
        }
        local_30 = local_30 + 1;
      }
      puStack_d0 = (undefined1 *)0x4a2e09;
      sVar5 = FUN_004cc4f0();
      puStack_d0 = (undefined1 *)(int)sVar5;
      puStack_d4 = (undefined *)0x4a2e17;
      sVar6 = FUN_0062fbf0();
      puStack_d0 = (undefined1 *)(int)sVar5;
      puStack_d4 = (undefined *)0x4a2e26;
      sVar5 = FUN_0062fbf0();
      puStack_d0 = (undefined1 *)0x4a2e3a;
      sVar7 = FUN_004cc4b0();
      puStack_d0 = (undefined1 *)(sVar7 + 1);
      puStack_d4 = (undefined *)0x4a2e46;
      sVar7 = FUN_0062fbf0();
      *(short *)(&DAT_00791798 + local_18 * 2) = (sVar6 - sVar5) - local_28 * sVar7;
    }
    else {
      *(undefined2 *)(&DAT_00791798 + local_18 * 2) = 10;
    }
    for (local_1c = 5; -1 < local_1c; local_1c = local_1c + -1) {
      puStack_d0 = (undefined1 *)(local_1c + 1);
      puStack_d4 = &DAT_00791460 + local_1c * 4 + local_18 * 0x18;
      puStack_d8 = &DAT_007919d8 + local_1c * 4 + local_18 * 0x18;
      puStack_dc = &DAT_007915c8 + local_1c * 4 + local_18 * 0x18;
      FUN_004c7c40(auStack_e4);
      FUN_0048e5e0();
    }
    (&DAT_00791d80)[local_18] = (undefined2)param_1;
    *(short *)(&DAT_007919b8 + local_18 * 2) = (short)param_3;
    if (param_1 == 3) {
      puStack_d0 = (undefined1 *)0x15;
      puStack_d4 = (undefined *)0x4a2f14;
      iVar8 = FUN_0062fbf0();
      puStack_d0 = (undefined1 *)0x15;
      puStack_d4 = (undefined *)0x4a2f20;
      iVar9 = FUN_0062fbf0();
      puStack_d0 = (undefined1 *)0x15;
      puStack_d4 = (undefined *)0x4a2f2e;
      iVar10 = FUN_0062fbf0();
      puStack_d0 = (undefined1 *)0x15;
      puStack_d4 = (undefined *)0x4a2f3a;
      iVar11 = FUN_0062fbf0();
      *(double *)(&DAT_00791dd0 + local_18 * 8) =
           (double)(iVar8 + 0x3c + iVar9 + iVar10 + iVar11) * _DAT_006bc270;
      puStack_d0 = (undefined1 *)0x15;
      puStack_d4 = (undefined *)0x4a2f5c;
      iVar8 = FUN_0062fbf0();
      puStack_d0 = (undefined1 *)0x15;
      puStack_d4 = (undefined *)0x4a2f68;
      iVar9 = FUN_0062fbf0();
      puStack_d0 = (undefined1 *)0x15;
      puStack_d4 = (undefined *)0x4a2f76;
      iVar10 = FUN_0062fbf0();
      puStack_d0 = (undefined1 *)0x15;
      puStack_d4 = (undefined *)0x4a2f82;
      iVar11 = FUN_0062fbf0();
      *(double *)(&DAT_00791520 + local_18 * 8) =
           (double)(iVar8 + 0x3c + iVar9 + iVar10 + iVar11) * _DAT_006bc270;
      local_34 = 0;
      while( true ) {
        puStack_d0 = (undefined1 *)0x4a2fc0;
        iVar8 = FUN_0047f950();
        if (iVar8 <= local_34) break;
        puStack_d0 = (undefined1 *)0x33;
        puStack_d4 = (undefined *)0x4a2fcb;
        iVar8 = FUN_0062fbf0();
        puStack_d0 = (undefined1 *)0x33;
        puStack_d4 = (undefined *)0x4a2fd7;
        iVar9 = FUN_0062fbf0();
        puStack_d0 = (undefined1 *)0x33;
        puStack_d4 = (undefined *)0x4a2fe5;
        iVar10 = FUN_0062fbf0();
        *(double *)(&DAT_00791ae0 + local_34 * 8 + local_18 * 0x40) =
             (double)(iVar8 + 0x19 + iVar9 + iVar10) * _DAT_006bc270;
        local_34 = local_34 + 1;
      }
      puStack_d0 = (undefined1 *)0x4a3014;
      sVar5 = FUN_004cc530();
      puStack_d0 = (undefined1 *)(int)sVar5;
      puStack_d4 = (undefined *)0x4a301d;
      iVar8 = FUN_0062fbf0();
      puStack_d0 = (undefined1 *)0x4a302d;
      sVar5 = FUN_004cc530();
      puStack_d0 = (undefined1 *)(int)sVar5;
      puStack_d4 = (undefined *)0x4a3036;
      iVar9 = FUN_0062fbf0();
      *(double *)(&DAT_00791d40 + local_18 * 8) = (double)(iVar8 + iVar9) / _DAT_006be518 + 1.0;
      puStack_d0 = (undefined1 *)0x4a3060;
      sVar5 = FUN_004cc550();
      puStack_d0 = (undefined1 *)(int)sVar5;
      puStack_d4 = (undefined *)0x4a3069;
      iVar8 = FUN_0062fbf0();
      puStack_d0 = (undefined1 *)0x4a3079;
      sVar5 = FUN_004cc550();
      puStack_d0 = (undefined1 *)(int)sVar5;
      puStack_d4 = (undefined *)0x4a3082;
      iVar9 = FUN_0062fbf0();
      *(double *)(&DAT_007917e8 + local_18 * 8) = (double)(iVar8 + iVar9) / _DAT_006be518 + 1.0;
    }
    puStack_d0 = (undefined1 *)param_2;
    puStack_d4 = (undefined *)param_1;
    puStack_d8 = (undefined *)0x4a30ae;
    fVar14 = (float10)FUN_004a3a60();
    *(double *)(&DAT_00791d90 + local_18 * 8) = (double)fVar14;
    *(undefined2 *)(&DAT_00791768 + local_18 * 2) = 1;
    if (param_1 == 5) {
      local_1c = 5;
      while ((-1 < local_1c && (*(int *)(&DAT_007915c8 + local_1c * 4 + local_18 * 0x18) < 1))) {
        local_1c = local_1c + -1;
      }
      if (local_1c == -1) {
        *(undefined2 *)(&DAT_00791768 + local_18 * 2) = 6;
      }
    }
    local_8 = 0xffffffff;
    puStack_d0 = (undefined1 *)0x4a3127;
    FUN_00484470();
  }
  if (*(short *)(&DAT_00791768 + local_18 * 2) == 6) {
    puStack_d0 = (undefined1 *)0x3;
    puStack_d4 = (undefined *)0x4a31cb;
    FUN_004c79d0();
    puStack_d0 = (undefined1 *)0x4a31d9;
    cVar4 = FUN_004f6640();
    if (cVar4 == '\0') {
      puStack_d0 = (undefined1 *)0x4a3220;
      cVar4 = FUN_004f66e0();
      if (cVar4 != '\0') {
        ExceptionList = local_10;
        return 4;
      }
      ExceptionList = local_10;
      return 3;
    }
    puStack_d0 = (undefined1 *)0x4a31e5;
    cVar4 = FUN_004a39c0();
    if (cVar4 == '\0') {
      puStack_d0 = (undefined1 *)0x14;
      puStack_d4 = (undefined *)0x4a31f3;
      iVar8 = FUN_0062fbf0();
      if (iVar8 == 0) {
        ExceptionList = local_10;
        return 1;
      }
    }
    ExceptionList = local_10;
    return 2;
  }
  if (*(short *)(&DAT_00791768 + local_18 * 2) == 1) {
    puStack_d0 = (undefined1 *)0x4a325f;
    cVar4 = FUN_004f6690();
    if (cVar4 == '\0') {
      puStack_d0 = (undefined1 *)param_3;
      puStack_d4 = (undefined *)param_1;
      puStack_d8 = (undefined *)0x4a33b2;
      cVar4 = FUN_004a4090();
      if (cVar4 == '\0') {
        ExceptionList = local_10;
        return 1;
      }
    }
    else {
      puStack_d0 = (undefined1 *)0x4a3275;
      iVar8 = FUN_004c6df0();
      dVar3 = (double)iVar8 / _DAT_006b4b00;
      dVar1 = *(double *)(&DAT_00791d90 + local_18 * 8);
      dVar2 = *(double *)(&DAT_00791d90 + local_18 * 8);
      puStack_d0 = (undefined1 *)0x4a32a9;
      iVar8 = FUN_004f67d0();
      puStack_d0 = (undefined1 *)0x4a32c9;
      iVar9 = FUN_004f6840();
      puStack_d0 = (undefined1 *)0x4a32ef;
      sVar5 = FUN_004d0310();
      sVar5 = sVar5 * ((short)param_3 + -1);
      puStack_d0 = (undefined1 *)(int)sVar5;
      puStack_d4 = (undefined *)0x4a3309;
      iVar10 = FUN_0062fbf0();
      puStack_d0 = (undefined1 *)(int)sVar5;
      puStack_d4 = (undefined *)0x4a3318;
      iVar11 = FUN_0062fbf0();
      puStack_d0 = (undefined1 *)(int)sVar5;
      puStack_d4 = (undefined *)0x4a3327;
      iVar12 = FUN_0062fbf0();
      if (((dVar3 + dVar1) * dVar2) / ((double)iVar8 / (double)iVar9) <=
          (double)((iVar10 + iVar11) - iVar12) / _DAT_006be518 + 1.0) {
        ExceptionList = local_10;
        return 0;
      }
      puStack_d0 = (undefined1 *)param_3;
      puStack_d4 = (undefined *)param_1;
      puStack_d8 = (undefined *)0x4a3359;
      cVar4 = FUN_004a4090();
      if (cVar4 == '\0') {
        puStack_d0 = (undefined1 *)0x64;
        puStack_d4 = (undefined *)0x4a336c;
        iVar8 = FUN_0062fbf0();
        puStack_d0 = (undefined1 *)0x4a337c;
        sVar5 = FUN_004cffe0();
        if (iVar8 < sVar5) {
          *(undefined2 *)(&DAT_00791768 + local_18 * 2) = 2;
        }
        ExceptionList = local_10;
        return 3;
      }
    }
  }
  if ((*(short *)(&DAT_00791768 + local_18 * 2) == 5) ||
     (*(short *)(&DAT_00791768 + local_18 * 2) == 0xc)) {
    if (*(short *)(&DAT_00791768 + local_18 * 2) == 5) {
      puStack_d0 = (undefined1 *)0x4a3407;
      puStack_d0 = (undefined1 *)FUN_0047ce60();
      puStack_d4 = (undefined *)CONCAT31((int3)((uint)extraout_ECX >> 8),param_1 == 5);
      puStack_d8 = (undefined *)0x4a341b;
      local_a0 = FUN_004c6ef0();
    }
    else {
      puStack_d0 = (undefined1 *)0x4a342e;
      local_a0 = FUN_004c6f50();
    }
    puStack_d0 = (undefined1 *)(100 - local_a0);
    puStack_d4 = (undefined *)0x4a3445;
    iVar8 = FUN_0062fbf0();
    puStack_d0 = (undefined1 *)0x3;
    puStack_d4 = (undefined *)param_1;
    puStack_d8 = (undefined *)0x4a3462;
    sVar5 = FUN_004a2c60();
    if ((double)iVar8 < (double)(int)sVar5) {
      puStack_d0 = (undefined1 *)0x3;
      puStack_d4 = (undefined *)0x4a348f;
      FUN_004c79d0();
      puStack_d0 = (undefined1 *)0x4a349d;
      cVar4 = FUN_004f6640();
      if (cVar4 == '\0') {
        puStack_d0 = (undefined1 *)0x4a34b2;
        cVar4 = FUN_004f66e0();
        if ((cVar4 == '\0') && (*(short *)(&DAT_00791768 + local_18 * 2) == 0xc)) {
          ExceptionList = local_10;
          return 0;
        }
      }
      puStack_d0 = (undefined1 *)0x64;
      puStack_d4 = (undefined *)0x4a34d7;
      iVar8 = FUN_0062fbf0();
      puStack_d0 = (undefined1 *)0x4a34e7;
      sVar5 = FUN_004cc3b0();
      if (iVar8 < sVar5) {
        *(undefined2 *)(&DAT_00791768 + local_18 * 2) = 4;
      }
      else {
        puStack_d0 = (undefined1 *)0x64;
        puStack_d4 = (undefined *)0x4a3504;
        iVar8 = FUN_0062fbf0();
        puStack_d0 = (undefined1 *)0x4a3514;
        sVar5 = FUN_004cc3d0();
        if (iVar8 < sVar5) {
          *(undefined2 *)(&DAT_00791768 + local_18 * 2) = 1;
        }
      }
      puStack_d0 = (undefined1 *)0x4a3536;
      cVar4 = FUN_004f6640();
      if (cVar4 != '\0') {
        ExceptionList = local_10;
        return 2;
      }
      puStack_d0 = (undefined1 *)0x4a3557;
      cVar4 = FUN_004f66e0();
      if (cVar4 != '\0') {
        ExceptionList = local_10;
        return 4;
      }
      ExceptionList = local_10;
      return 3;
    }
  }
  else if ((*(short *)(&DAT_00791768 + local_18 * 2) == 4) ||
          (*(short *)(&DAT_00791768 + local_18 * 2) == 0xb)) {
    if (*(short *)(&DAT_00791768 + local_18 * 2) == 4) {
      puStack_d0 = (undefined1 *)0x4a35b8;
      puStack_d0 = (undefined1 *)FUN_0047ce60();
      puStack_d4 = (undefined *)CONCAT31((int3)((uint)puStack_d0 >> 8),param_1 == 5);
      puStack_d8 = (undefined *)0x4a35cc;
      local_ac = FUN_004c6ef0();
    }
    else {
      puStack_d0 = (undefined1 *)0x4a35df;
      local_ac = FUN_004c6f50();
    }
    puStack_d0 = (undefined1 *)(100 - local_ac);
    puStack_d4 = (undefined *)0x4a35f6;
    iVar8 = FUN_0062fbf0();
    puStack_d0 = (undefined1 *)0x2;
    puStack_d4 = (undefined *)param_1;
    puStack_d8 = (undefined *)0x4a3613;
    sVar5 = FUN_004a2c60();
    if ((double)iVar8 < (double)(int)sVar5) {
      puStack_d0 = (undefined1 *)0x2;
      puStack_d4 = (undefined *)0x4a3640;
      FUN_004c79d0();
      puStack_d0 = (undefined1 *)0x4a364e;
      cVar4 = FUN_004f6640();
      if (cVar4 == '\0') {
        puStack_d0 = (undefined1 *)0x4a3663;
        cVar4 = FUN_004f66e0();
        if ((cVar4 == '\0') && (*(short *)(&DAT_00791768 + local_18 * 2) == 0xb)) {
          ExceptionList = local_10;
          return 0;
        }
      }
      puStack_d0 = (undefined1 *)0x64;
      puStack_d4 = (undefined *)0x4a3688;
      iVar8 = FUN_0062fbf0();
      puStack_d0 = (undefined1 *)0x4a3698;
      sVar5 = FUN_004cc3b0();
      if (iVar8 < sVar5) {
        *(undefined2 *)(&DAT_00791768 + local_18 * 2) = 3;
      }
      else {
        puStack_d0 = (undefined1 *)0x64;
        puStack_d4 = (undefined *)0x4a36b5;
        iVar8 = FUN_0062fbf0();
        puStack_d0 = (undefined1 *)0x4a36c5;
        sVar5 = FUN_004cc3d0();
        if (iVar8 < sVar5) {
          *(undefined2 *)(&DAT_00791768 + local_18 * 2) = 1;
        }
      }
      puStack_d0 = (undefined1 *)0x4a36e7;
      cVar4 = FUN_004f6640();
      if (cVar4 != '\0') {
        ExceptionList = local_10;
        return 2;
      }
      puStack_d0 = (undefined1 *)0x4a3708;
      cVar4 = FUN_004f66e0();
      if (cVar4 != '\0') {
        ExceptionList = local_10;
        return 4;
      }
      if (*(short *)(&DAT_00791768 + local_18 * 2) == 0xb) {
        ExceptionList = local_10;
        return 0;
      }
      ExceptionList = local_10;
      return 3;
    }
  }
  else if ((*(short *)(&DAT_00791768 + local_18 * 2) == 3) ||
          (*(short *)(&DAT_00791768 + local_18 * 2) == 10)) {
    if (*(short *)(&DAT_00791768 + local_18 * 2) == 3) {
      puStack_d0 = (undefined1 *)0x4a3782;
      puStack_d0 = (undefined1 *)FUN_0047ce60();
      puStack_d4 = (undefined *)CONCAT31((int3)((uint)extraout_ECX_00 >> 8),param_1 == 5);
      puStack_d8 = (undefined *)0x4a3796;
      local_b8 = FUN_004c6ef0();
    }
    else {
      puStack_d0 = (undefined1 *)0x4a37a9;
      local_b8 = FUN_004c6f50();
    }
    puStack_d0 = (undefined1 *)(100 - local_b8);
    puStack_d4 = (undefined *)0x4a37c0;
    iVar8 = FUN_0062fbf0();
    puStack_d0 = (undefined1 *)0x1;
    puStack_d4 = (undefined *)param_1;
    puStack_d8 = (undefined *)0x4a37dd;
    sVar5 = FUN_004a2c60();
    if ((double)iVar8 < (double)(int)sVar5) {
      puStack_d0 = (undefined1 *)0x1;
      puStack_d4 = (undefined *)0x4a380a;
      FUN_004c79d0();
      puStack_d0 = (undefined1 *)0x4a3818;
      cVar4 = FUN_004f6640();
      if (cVar4 == '\0') {
        puStack_d0 = (undefined1 *)0x4a382d;
        cVar4 = FUN_004f66e0();
        if ((cVar4 == '\0') && (*(short *)(&DAT_00791768 + local_18 * 2) == 10)) {
          ExceptionList = local_10;
          return 0;
        }
      }
      puStack_d0 = (undefined1 *)0x64;
      puStack_d4 = (undefined *)0x4a3852;
      iVar8 = FUN_0062fbf0();
      puStack_d0 = (undefined1 *)0x4a3862;
      sVar5 = FUN_004cc3b0();
      if (iVar8 < sVar5) {
        *(undefined2 *)(&DAT_00791768 + local_18 * 2) = 2;
      }
      else {
        puStack_d0 = (undefined1 *)0x64;
        puStack_d4 = (undefined *)0x4a387f;
        iVar8 = FUN_0062fbf0();
        puStack_d0 = (undefined1 *)0x4a388f;
        sVar5 = FUN_004cc3d0();
        if (iVar8 < sVar5) {
          *(undefined2 *)(&DAT_00791768 + local_18 * 2) = 1;
        }
      }
      puStack_d0 = (undefined1 *)0x4a38b1;
      cVar4 = FUN_004f6640();
      if (cVar4 != '\0') {
        ExceptionList = local_10;
        return 2;
      }
      puStack_d0 = (undefined1 *)0x4a38d2;
      cVar4 = FUN_004f66e0();
      if (cVar4 != '\0') {
        ExceptionList = local_10;
        return 4;
      }
      if (*(short *)(&DAT_00791768 + local_18 * 2) == 10) {
        ExceptionList = local_10;
        return 0;
      }
      ExceptionList = local_10;
      return 3;
    }
  }
  puStack_d0 = (undefined1 *)0x4a3916;
  cVar4 = FUN_004f6640();
  if (cVar4 == '\0') {
    if (*(short *)(&DAT_00791768 + local_18 * 2) == 0xc) {
      ExceptionList = local_10;
      return 0;
    }
    if (*(short *)(&DAT_00791768 + local_18 * 2) == 0xb) {
      ExceptionList = local_10;
      return 0;
    }
    if (*(short *)(&DAT_00791768 + local_18 * 2) == 10) {
      ExceptionList = local_10;
      return 0;
    }
  }
  puStack_d0 = (undefined1 *)0x64;
  puStack_d4 = (undefined *)0x4a3964;
  iVar8 = FUN_0062fbf0();
  puStack_d0 = (undefined1 *)0x4a3974;
  sVar5 = FUN_004cc3d0();
  if (iVar8 < sVar5) {
    *(undefined2 *)(&DAT_00791768 + local_18 * 2) = 1;
  }
  puStack_d0 = (undefined1 *)0x4a3996;
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

