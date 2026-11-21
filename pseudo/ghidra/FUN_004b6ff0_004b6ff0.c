// FUN_004b6ff0  004b6ff0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_004b6ff0(undefined4 param_1,int param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  short local_94;
  undefined2 local_8c;
  double local_84;
  double local_7c;
  double local_74;
  double local_6c;
  short local_5c;
  short local_58;
  double local_3c;
  double local_34;
  double local_2c;
  double local_24;
  double local_14;
  short local_8;
  
  iVar9 = FUN_0047e420();
  fVar12 = (float10)FUN_004f0500();
  local_2c = 1.0;
  local_3c = 1.0;
  local_14 = 1.0;
  local_58 = 0;
  for (local_5c = 0; iVar10 = FUN_0047f950(), local_5c < iVar10; local_5c = local_5c + 1) {
    if (local_5c != iVar9) {
      FUN_0047e390((int)local_5c);
      iVar10 = FUN_004c7010();
      if (iVar10 == 1) {
        local_58 = local_58 + 1;
        fVar13 = (float10)FUN_004f1710(CONCAT22(extraout_var_01,local_5c),
                                       CONCAT22(extraout_var,(undefined2)param_2));
        if ((double)fVar13 * *(double *)(&DAT_00791ae0 + local_5c * 8 + iVar9 * 0x40) <=
            (double)(fVar12 / (float10)param_2)) {
          FUN_0047e390((int)local_5c);
          uVar11 = FUN_004c7050();
          local_8c = (undefined2)uVar11;
          sVar4 = FUN_004f6880(uVar11);
          sVar5 = FUN_004f6930(CONCAT22(extraout_var_00,local_8c));
          sVar6 = FUN_004f6a90(CONCAT22(extraout_var_02,local_8c));
          sVar7 = FUN_004f6b20(CONCAT22(extraout_var_03,local_8c));
          if ((sVar5 == 0) && (sVar4 == 0)) {
            local_94 = FUN_004f69e0(uVar11 & 0xffff);
          }
          else {
            local_94 = 0;
          }
          if (sVar4 < 0) {
            FUN_005e9f20("shCurrentBets >= 0","..\\Casino\\PokerHoldemAI.cpp",0x18f4);
          }
          if (sVar5 < 0) {
            FUN_005e9f20("shCurrentCalls >= 0","..\\Casino\\PokerHoldemAI.cpp",0x18f5);
          }
          if (local_94 < 0) {
            FUN_005e9f20("shCurrentChecks >= 0","..\\Casino\\PokerHoldemAI.cpp",0x18f6);
          }
          if ((short)(sVar6 - sVar4) < 0) {
            FUN_005e9f20("shOldBets >= 0","..\\Casino\\PokerHoldemAI.cpp",0x18f7);
          }
          if ((short)(sVar7 - sVar5) < 0) {
            FUN_005e9f20("shOldCalls >= 0","..\\Casino\\PokerHoldemAI.cpp",0x18f8);
          }
          fVar13 = (float10)FUN_004f0530();
          fVar14 = (float10)FUN_004f0600();
          fVar15 = (float10)FUN_004f06d0();
          fVar16 = (float10)FUN_004f07a0();
          sVar8 = FUN_004f0410();
          local_6c = (double)((float10)(int)sVar5 * fVar16 +
                             (float10)(double)((float10)(int)sVar4 * fVar15 +
                                              (float10)(double)((float10)(int)(short)(sVar7 - sVar5)
                                                                * fVar14 +
                                                               (float10)(double)((float10)1 +
                                                                                (float10)(int)(short
                                                  )(sVar6 - sVar4) * fVar13)))) -
                     (double)(int)local_94 * ((double)(int)sVar8 / _DAT_006bc280);
        }
        else {
          local_6c = 1.0;
        }
        local_7c = 1.0 - (1.0 - *(double *)(&DAT_007916e8 + iVar9 * 8)) * local_6c;
        local_84 = 1.0 - (1.0 - *(double *)(&DAT_00791958 + iVar9 * 8)) * local_6c;
        if (*(double *)(&DAT_007918f8 + iVar9 * 8) <= *(double *)(&DAT_007917a8 + iVar9 * 8)) {
          if ((&DAT_00791ab8)[iVar9] == '\0') {
            local_74 = 1.0 - (1.0 - *(double *)(&DAT_007918f8 + iVar9 * 8)) * local_6c;
          }
          else {
            local_74 = 1.0 - (1.0 - *(double *)(&DAT_007917a8 + iVar9 * 8)) * local_6c;
          }
        }
        else {
          if ((&DAT_00791868)[iVar9] == '\0') {
            dVar1 = *(double *)(&DAT_007917a8 + iVar9 * 8);
          }
          else {
            dVar1 = *(double *)(&DAT_007918f8 + iVar9 * 8);
          }
          local_74 = 1.0 - (1.0 - dVar1) * local_6c;
        }
        if (local_7c < 0.0) {
          local_7c = 0.0;
        }
        if (local_84 < 0.0) {
          local_84 = 0.0;
        }
        if (local_74 < 0.0) {
          local_74 = 0.0;
        }
        if (local_84 < local_7c) {
          local_84 = local_7c;
        }
        local_2c = local_2c * local_84;
        local_3c = (_DAT_006b2c38 * local_84 + _DAT_006b2c38) * local_3c;
        if (local_74 <= local_7c) {
          local_14 = ((_DAT_006b9490 * local_74 + _PTR_006b3740 * local_7c) / _DAT_006be720) *
                     local_14;
        }
        else {
          local_14 = ((_PTR_006b3740 * local_74 + _DAT_006b9490 * local_7c) / _DAT_006be720) *
                     local_14;
        }
      }
    }
  }
  sVar4 = FUN_004f1cc0();
  dVar1 = ((double)(int)sVar4 / _DAT_006be828) * *(double *)(&DAT_00791728 + iVar9 * 8);
  local_34 = 1.0;
  for (local_8 = 0; local_8 < local_58; local_8 = local_8 + 1) {
    local_34 = local_34 * _DAT_006b2c38;
  }
  dVar2 = _DAT_006b2c38 * local_34;
  local_34 = 1.0;
  for (local_8 = 0; (int)local_8 < local_58 + -1; local_8 = local_8 + 1) {
    local_34 = local_34 * _DAT_006b2c38;
  }
  dVar3 = 1.0 - local_34;
  local_34 = 1.0;
  for (local_8 = 0; local_8 < local_58; local_8 = local_8 + 1) {
    local_34 = local_34 * _DAT_006b2c38;
  }
  local_24 = (local_2c + dVar1) * local_34 * 1.0 +
             (local_3c + dVar1) * dVar3 * _DAT_006b2c38 + dVar2 + 0.0;
  if ((local_14 <= _DAT_006be700) || (local_14 <= local_24)) {
    (&DAT_00791580)[iVar9] = 0;
  }
  else {
    local_24 = local_14;
    (&DAT_00791580)[iVar9] = 1;
  }
  local_24 = local_24 * *(double *)(&DAT_00791dd0 + iVar9 * 8);
  if (_DAT_006b4b00 < local_24) {
    local_24 = _DAT_006b4b00;
  }
  return (float10)local_24;
}

