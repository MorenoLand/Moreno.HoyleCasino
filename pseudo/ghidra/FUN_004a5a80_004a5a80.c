// FUN_004a5a80  004a5a80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_004a5a80(int param_1,uint param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  short local_f0;
  undefined2 local_e0;
  double local_d4;
  short local_c0;
  double local_bc;
  double local_b4;
  short local_a0;
  double local_9c;
  double local_94;
  double local_84;
  double local_7c;
  double local_64;
  double local_5c;
  double local_3c;
  double local_24;
  double local_1c;
  double local_14;
  
  iVar10 = FUN_0047e420();
  local_3c = 1.0;
  fVar13 = (float10)FUN_004d23e0();
  local_a0 = 0;
  for (local_c0 = 0; iVar11 = FUN_0047f950(), local_c0 < iVar11; local_c0 = local_c0 + 1) {
    if (local_c0 != iVar10) {
      FUN_0047e390((int)local_c0);
      iVar11 = FUN_004c7010();
      if (iVar11 == 1) {
        local_d4 = 0.0;
        fVar14 = (float10)FUN_004d2100(CONCAT22(extraout_var,local_c0),param_2 & 0xffff);
        if ((double)fVar14 * *(double *)(&DAT_00791ae0 + local_c0 * 8 + iVar10 * 0x40) <=
            (double)(fVar13 / (float10)(int)param_2)) {
          local_a0 = local_a0 + 1;
          FUN_0047e390((int)local_c0);
          uVar12 = FUN_004c7050();
          local_e0 = (undefined2)uVar12;
          sVar6 = FUN_004f6880(uVar12);
          sVar7 = FUN_004f6930(CONCAT22(extraout_var_00,local_e0));
          sVar8 = FUN_004f6a90(CONCAT22(extraout_var_01,local_e0));
          sVar9 = FUN_004f6b20(CONCAT22(extraout_var_02,local_e0));
          if (sVar6 < 0) {
            FUN_005e9f20("shCurrentBets >= 0","..\\Casino\\PokerHoldemAI.cpp",0x36b);
          }
          if (sVar7 < 0) {
            FUN_005e9f20("shCurrentCalls >= 0","..\\Casino\\PokerHoldemAI.cpp",0x36c);
          }
          if ((short)(sVar8 - sVar6) < 0) {
            FUN_005e9f20("shOldBets >= 0","..\\Casino\\PokerHoldemAI.cpp",0x36d);
          }
          if ((short)(sVar9 - sVar7) < 0) {
            FUN_005e9f20("shOldCalls >= 0","..\\Casino\\PokerHoldemAI.cpp",0x36e);
          }
          bVar5 = false;
          fVar14 = (float10)FUN_004d2410();
          fVar15 = (float10)FUN_004d24e0();
          fVar16 = (float10)FUN_004d25b0();
          fVar17 = (float10)FUN_004d2680();
          local_d4 = (double)((float10)(int)sVar7 * fVar17 +
                             (float10)(double)((float10)(int)sVar6 * fVar16 +
                                              (float10)(double)((float10)(int)(short)(sVar9 - sVar7)
                                                                * fVar15 +
                                                               (float10)(double)((float10)1 +
                                                                                (float10)(int)(short
                                                  )(sVar8 - sVar6) * fVar14))));
        }
        else {
          bVar5 = true;
        }
        for (local_f0 = 0; local_f0 < 6; local_f0 = local_f0 + 1) {
          dVar1 = (double)(*(int *)(&DAT_007915c8 + iVar10 * 0x18) +
                           *(int *)(&DAT_007919d8 + iVar10 * 0x18) +
                          *(int *)(&DAT_00791460 + iVar10 * 0x18));
          if (bVar5) {
            dVar1 = (1.0 - (double)*(int *)(&DAT_007915c8 + iVar10 * 0x18) / dVar1) -
                    ((double)*(int *)(&DAT_007919d8 + iVar10 * 0x18) / dVar1) * _DAT_006b3e40;
          }
          else {
            dVar1 = (1.0 - ((double)*(int *)(&DAT_007915c8 + iVar10 * 0x18) / dVar1) * local_d4) -
                    ((double)*(int *)(&DAT_007919d8 + iVar10 * 0x18) / dVar1) *
                    local_d4 * _DAT_006b3e40;
          }
          local_3c = dVar1 * local_3c;
          if (local_3c < 0.0) {
            local_3c = 0.0;
          }
        }
      }
    }
  }
  iVar11 = *(int *)(&DAT_007918b4 + iVar10 * 4) + *(int *)(&DAT_00791894 + iVar10 * 4) +
           *(int *)(&DAT_00791848 + iVar10 * 4) + *(int *)(&DAT_00791ac0 + iVar10 * 4);
  dVar1 = 1.0 - (double)*(int *)(&DAT_00791938 + iVar10 * 4) / (double)iVar11;
  local_14 = 0.0;
  if (0 < *(int *)(&DAT_007918d4 + iVar10 * 4)) {
    local_14 = (double)*(int *)(&DAT_007918d4 + iVar10 * 4) /
               (double)(*(int *)(&DAT_007918d4 + iVar10 * 4) + *(int *)(&DAT_007916a8 + iVar10 * 4))
    ;
  }
  local_5c = 1.0 - (double)*(int *)(&DAT_007918b4 + iVar10 * 4) / (double)iVar11;
  local_94 = 0.0;
  if (0 < *(int *)(&DAT_00791894 + iVar10 * 4)) {
    local_94 = (double)*(int *)(&DAT_00791894 + iVar10 * 4) /
               ((double)*(int *)(&DAT_00791894 + iVar10 * 4) +
                (double)*(int *)(&DAT_00791848 + iVar10 * 4) +
               (double)*(int *)(&DAT_00791ac0 + iVar10 * 4));
  }
  local_24 = 0.0;
  if (0 < *(int *)(&DAT_00791848 + iVar10 * 4)) {
    local_24 = (double)*(int *)(&DAT_00791848 + iVar10 * 4) /
               ((double)*(int *)(&DAT_00791894 + iVar10 * 4) +
                (double)*(int *)(&DAT_00791848 + iVar10 * 4) +
               (double)*(int *)(&DAT_00791ac0 + iVar10 * 4));
  }
  local_b4 = 1.0 - (double)*(int *)(&DAT_00791870 + iVar10 * 4) / (double)iVar11;
  local_84 = 0.0;
  if (0 < *(int *)(&DAT_00791588 + iVar10 * 4)) {
    local_84 = (double)*(int *)(&DAT_00791588 + iVar10 * 4) /
               ((double)*(int *)(&DAT_00791588 + iVar10 * 4) +
                (double)*(int *)(&DAT_00791e10 + iVar10 * 4) +
               (double)*(int *)(&DAT_00791d20 + iVar10 * 4));
  }
  local_7c = 0.0;
  if (0 < *(int *)(&DAT_00791e10 + iVar10 * 4)) {
    local_7c = (double)*(int *)(&DAT_00791e10 + iVar10 * 4) /
               ((double)*(int *)(&DAT_00791588 + iVar10 * 4) +
                (double)*(int *)(&DAT_00791e10 + iVar10 * 4) +
               (double)*(int *)(&DAT_00791d20 + iVar10 * 4));
  }
  local_9c = 1.0 - (double)*(int *)(&DAT_00791420 + iVar10 * 4) / (double)iVar11;
  local_64 = 0.0;
  if (0 < *(int *)(&DAT_00791560 + iVar10 * 4)) {
    local_64 = (double)*(int *)(&DAT_00791560 + iVar10 * 4) /
               ((double)*(int *)(&DAT_00791560 + iVar10 * 4) +
                (double)*(int *)(&DAT_007915a8 + iVar10 * 4) +
               (double)*(int *)(&DAT_00791688 + iVar10 * 4));
  }
  local_bc = 0.0;
  if (0 < *(int *)(&DAT_007915a8 + iVar10 * 4)) {
    local_bc = (double)*(int *)(&DAT_007915a8 + iVar10 * 4) /
               ((double)*(int *)(&DAT_00791560 + iVar10 * 4) +
                (double)*(int *)(&DAT_007915a8 + iVar10 * 4) +
               (double)*(int *)(&DAT_00791688 + iVar10 * 4));
  }
  sVar6 = FUN_004d2f40();
  dVar2 = (double)(int)sVar6 / _DAT_006b4b00;
  sVar6 = FUN_004d2f60();
  dVar4 = (double)(int)sVar6 / _DAT_006b4b00;
  dVar2 = dVar2 / (double)(local_a0 + 1);
  dVar3 = dVar4 / (double)(local_a0 + 1);
  if (1.0 - dVar4 < local_5c) {
    local_5c = local_5c - dVar3;
  }
  if (1.0 - dVar4 < local_b4) {
    local_b4 = local_b4 - dVar3;
  }
  if (1.0 - dVar4 < local_9c) {
    local_9c = local_9c - dVar3;
  }
  sVar6 = FUN_004d2f20();
  dVar3 = (double)((6 - param_1) + (int)local_a0) * ((double)(int)sVar6 / _DAT_006b4b00);
  local_1c = ((1.0 - dVar3) * local_3c +
             ((1.0 - local_9c) * (1.0 - local_b4) * (1.0 - local_5c) * (1.0 - dVar1) * local_3c +
             (1.0 - local_b4) * (1.0 - local_5c) * (1.0 - dVar1) * dVar2 * local_9c * local_bc +
             (1.0 - local_5c) * (1.0 - dVar1) * dVar2 * local_b4 * local_7c +
             (1.0 - dVar1) * dVar2 * local_5c * local_24 +
             (1.0 - local_b4) * (1.0 - local_5c) * (1.0 - dVar1) * local_9c * local_64 +
             (1.0 - local_5c) * (1.0 - dVar1) * local_b4 * local_84 +
             (1.0 - dVar1) * local_5c * local_94 + dVar1 * local_14) * dVar3) *
             *(double *)(&DAT_00791dd0 + iVar10 * 8);
  if (_DAT_006b4b00 < local_1c) {
    local_1c = _DAT_006b4b00;
  }
  if (local_1c < 0.0) {
    local_1c = 0.0;
  }
  return (float10)local_1c;
}

