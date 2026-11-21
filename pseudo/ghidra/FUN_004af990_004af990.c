// FUN_004af990  004af990

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_004af990(int param_1,uint param_2)

{
  bool bVar1;
  undefined2 uVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  double local_5c;
  double local_54;
  short local_40;
  double local_2c;
  short local_1c;
  double local_14;
  
  iVar8 = FUN_0047e420();
  local_14 = 1.0;
  fVar10 = (float10)FUN_004edfa0();
  for (local_1c = 0; iVar9 = FUN_0047f950(), local_1c < iVar9; local_1c = local_1c + 1) {
    if (local_1c != iVar8) {
      FUN_0047e390((int)local_1c);
      iVar9 = FUN_004c7010();
      if (iVar9 == 1) {
        local_2c = 0.0;
        fVar11 = (float10)FUN_004ef250(CONCAT22(extraout_var,local_1c),param_2 & 0xffff);
        if ((double)fVar11 * *(double *)(&DAT_00791ae0 + local_1c * 8 + iVar8 * 0x40) <=
            (double)(fVar10 / (float10)(int)param_2)) {
          FUN_0047e390((int)local_1c);
          uVar2 = FUN_004c7050();
          sVar3 = FUN_004f6880(CONCAT22(extraout_var_02,uVar2));
          sVar4 = FUN_004f6930(uVar2);
          sVar5 = FUN_004f6a90(CONCAT22(extraout_var_00,uVar2));
          sVar6 = FUN_004f6b20(CONCAT22(extraout_var_01,uVar2));
          iVar9 = FUN_0047f0c0();
          if (((param_1 < iVar9) && (sVar4 == 0)) && (sVar3 == 0)) {
            local_40 = FUN_004f69e0(uVar2);
          }
          else {
            local_40 = 0;
          }
          if (sVar3 < 0) {
            FUN_005e9f20("shCurrentBets >= 0","..\\Casino\\PokerHoldemAI.cpp",0x1039);
          }
          if (sVar4 < 0) {
            FUN_005e9f20("shCurrentCalls >= 0","..\\Casino\\PokerHoldemAI.cpp",0x103a);
          }
          if (local_40 < 0) {
            FUN_005e9f20("shCurrentChecks >= 0","..\\Casino\\PokerHoldemAI.cpp",0x103b);
          }
          if ((short)(sVar5 - sVar3) < 0) {
            FUN_005e9f20("shOldBets >= 0","..\\Casino\\PokerHoldemAI.cpp",0x103c);
          }
          if ((short)(sVar6 - sVar4) < 0) {
            FUN_005e9f20("shOldCalls >= 0","..\\Casino\\PokerHoldemAI.cpp",0x103d);
          }
          bVar1 = false;
          fVar11 = (float10)FUN_004edfd0();
          fVar12 = (float10)FUN_004ee0a0();
          fVar13 = (float10)FUN_004ee170();
          fVar14 = (float10)FUN_004ee240();
          sVar7 = FUN_004edeb0();
          local_2c = (double)((float10)(int)sVar4 * fVar14 +
                             (float10)(double)((float10)(int)sVar3 * fVar13 +
                                              (float10)(double)((float10)(int)(short)(sVar6 - sVar4)
                                                                * fVar12 +
                                                               (float10)(double)((float10)1 +
                                                                                (float10)(int)(short
                                                  )(sVar5 - sVar3) * fVar11)))) -
                     (double)(int)local_40 * ((double)(int)sVar7 / _DAT_006bc280);
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          iVar9 = FUN_0047f0c0();
          if (param_1 < iVar9) {
            local_14 = ((*(double *)(&DAT_00791958 + iVar8 * 8) - _DAT_006b2c38) * _PTR_006b3740 +
                       *(double *)(&DAT_007916e8 + iVar8 * 8)) * local_14;
          }
          else if (*(double *)(&DAT_007916e8 + iVar8 * 8) <= *(double *)(&DAT_00791958 + iVar8 * 8))
          {
            local_14 = ((_DAT_006be728 * *(double *)(&DAT_00791958 + iVar8 * 8) +
                        *(double *)(&DAT_007916e8 + iVar8 * 8)) / _DAT_006be720) * local_14;
          }
          else {
            local_14 = ((_DAT_006be728 * *(double *)(&DAT_007916e8 + iVar8 * 8) +
                        *(double *)(&DAT_00791958 + iVar8 * 8)) / _DAT_006be720) * local_14;
          }
        }
        else {
          local_54 = 1.0 - (1.0 - *(double *)(&DAT_007916e8 + iVar8 * 8)) * local_2c;
          local_5c = 1.0 - (1.0 - *(double *)(&DAT_00791958 + iVar8 * 8)) * local_2c;
          if (local_54 < 0.0) {
            local_54 = 0.0;
          }
          if (local_5c < 0.0) {
            local_5c = 0.0;
          }
          iVar9 = FUN_0047f0c0();
          if (param_1 < iVar9) {
            local_14 = ((local_5c - _DAT_006b2c38) * _PTR_006b3740 + local_54) * local_14;
          }
          else if (local_54 <= local_5c) {
            local_14 = ((_DAT_006be728 * local_5c + local_54) / _DAT_006be720) * local_14;
          }
          else {
            local_14 = ((_DAT_006be728 * local_54 + local_5c) / _DAT_006be720) * local_14;
          }
        }
        if (local_14 < 0.0) {
          local_14 = 0.0;
        }
      }
    }
  }
  sVar3 = FUN_004ee6a0();
  local_14 = (((double)(int)sVar3 / _DAT_006b4b00) * *(double *)(&DAT_00791728 + iVar8 * 8) +
             local_14) * *(double *)(&DAT_00791dd0 + iVar8 * 8);
  if (_DAT_006b4b00 < local_14) {
    local_14 = _DAT_006b4b00;
  }
  return (float10)local_14;
}

