// FUN_004a7fd0  004a7fd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_004a7fd0(int param_1,uint param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  short local_110;
  undefined2 local_100;
  double local_f4;
  short local_e0;
  double local_d4;
  double local_cc;
  short local_b8;
  double local_b4;
  double local_ac;
  double local_a4;
  double local_94;
  double local_8c;
  double local_74;
  double local_6c;
  double local_5c;
  double local_54;
  double local_3c;
  double local_24;
  double local_1c;
  double local_14;
  
  iVar11 = FUN_0047e420();
  local_3c = 1.0;
  local_ac = 1.0;
  fVar14 = (float10)FUN_004d5010();
  local_b8 = 0;
  for (local_e0 = 0; iVar12 = FUN_0047f950(), local_e0 < iVar12; local_e0 = local_e0 + 1) {
    if (local_e0 != iVar11) {
      FUN_0047e390((int)local_e0);
      iVar12 = FUN_004c7010();
      if (iVar12 == 1) {
        local_f4 = 0.0;
        fVar15 = (float10)FUN_004d4d30(CONCAT22(extraout_var,local_e0),param_2 & 0xffff);
        if ((double)fVar15 * *(double *)(&DAT_00791ae0 + local_e0 * 8 + iVar11 * 0x40) <=
            (double)(fVar14 / (float10)(int)param_2)) {
          local_b8 = local_b8 + 1;
          FUN_0047e390((int)local_e0);
          uVar13 = FUN_004c7050();
          local_100 = (undefined2)uVar13;
          sVar7 = FUN_004f6880(uVar13);
          sVar8 = FUN_004f6930(CONCAT22(extraout_var_00,local_100));
          sVar9 = FUN_004f6a90(CONCAT22(extraout_var_01,local_100));
          sVar10 = FUN_004f6b20(CONCAT22(extraout_var_02,local_100));
          if (sVar7 < 0) {
            FUN_005e9f20("shCurrentBets >= 0","..\\Casino\\PokerHoldemAI.cpp",0x6ff);
          }
          if (sVar8 < 0) {
            FUN_005e9f20("shCurrentCalls >= 0","..\\Casino\\PokerHoldemAI.cpp",0x700);
          }
          if ((short)(sVar9 - sVar7) < 0) {
            FUN_005e9f20("shOldBets >= 0","..\\Casino\\PokerHoldemAI.cpp",0x701);
          }
          if ((short)(sVar10 - sVar8) < 0) {
            FUN_005e9f20("shOldCalls >= 0","..\\Casino\\PokerHoldemAI.cpp",0x702);
          }
          bVar6 = false;
          fVar15 = (float10)FUN_004d5040();
          fVar16 = (float10)FUN_004d5110();
          fVar17 = (float10)FUN_004d51e0();
          fVar18 = (float10)FUN_004d52b0();
          local_f4 = (double)((float10)(int)sVar8 * fVar18 +
                             (float10)(double)((float10)(int)sVar7 * fVar17 +
                                              (float10)(double)((float10)(int)(short)(sVar10 - sVar8
                                                                                     ) * fVar16 +
                                                               (float10)(double)((float10)1 +
                                                                                (float10)(int)(short
                                                  )(sVar9 - sVar7) * fVar15))));
        }
        else {
          bVar6 = true;
        }
        for (local_110 = 0; local_110 < 6; local_110 = local_110 + 1) {
          if (bVar6) {
            dVar2 = (1.0 - (double)*(int *)(&DAT_007915c8 + iVar11 * 0x18) /
                           (double)(*(int *)(&DAT_007915c8 + iVar11 * 0x18) +
                                    *(int *)(&DAT_007919d8 + iVar11 * 0x18) +
                                   *(int *)(&DAT_00791460 + iVar11 * 0x18))) -
                    ((double)*(int *)(&DAT_007919d8 + iVar11 * 0x18) /
                    (double)(*(int *)(&DAT_007915c8 + iVar11 * 0x18) +
                             *(int *)(&DAT_007919d8 + iVar11 * 0x18) +
                            *(int *)(&DAT_00791460 + iVar11 * 0x18))) * _DAT_006b3e40;
            dVar1 = (double)*(int *)(&DAT_007915cc + iVar11 * 0x18) /
                    (double)(*(int *)(&DAT_007915cc + iVar11 * 0x18) +
                             *(int *)(&DAT_007919dc + iVar11 * 0x18) +
                            *(int *)(&DAT_00791464 + iVar11 * 0x18));
          }
          else {
            dVar2 = (1.0 - ((double)*(int *)(&DAT_007915c8 + iVar11 * 0x18) /
                           (double)(*(int *)(&DAT_007915c8 + iVar11 * 0x18) +
                                    *(int *)(&DAT_007919d8 + iVar11 * 0x18) +
                                   *(int *)(&DAT_00791460 + iVar11 * 0x18))) * local_f4) -
                    ((double)*(int *)(&DAT_007919d8 + iVar11 * 0x18) /
                    (double)(*(int *)(&DAT_007915c8 + iVar11 * 0x18) +
                             *(int *)(&DAT_007919d8 + iVar11 * 0x18) +
                            *(int *)(&DAT_00791460 + iVar11 * 0x18))) * local_f4 * _DAT_006b3e40;
            dVar1 = ((double)*(int *)(&DAT_007915cc + iVar11 * 0x18) /
                    (double)(*(int *)(&DAT_007915cc + iVar11 * 0x18) +
                             *(int *)(&DAT_007919dc + iVar11 * 0x18) +
                            *(int *)(&DAT_00791464 + iVar11 * 0x18))) * local_f4;
          }
          local_3c = dVar2 * local_3c;
          local_ac = (1.0 - dVar1) * local_ac;
          if (local_3c < 0.0) {
            local_3c = 0.0;
          }
          if (local_ac < 0.0) {
            local_ac = 0.0;
          }
        }
      }
    }
  }
  iVar12 = *(int *)(&DAT_007918b4 + iVar11 * 4) + *(int *)(&DAT_00791894 + iVar11 * 4) +
           *(int *)(&DAT_00791848 + iVar11 * 4) + *(int *)(&DAT_00791ac0 + iVar11 * 4);
  dVar1 = 1.0 - (double)*(int *)(&DAT_00791998 + iVar11 * 4) / (double)iVar12;
  local_5c = 0.0;
  if (0 < *(int *)(&DAT_007916c8 + iVar11 * 4)) {
    local_5c = (double)*(int *)(&DAT_007916c8 + iVar11 * 4) /
               ((double)*(int *)(&DAT_007916c8 + iVar11 * 4) +
                (double)*(int *)(&DAT_00791ce0 + iVar11 * 4) +
               (double)*(int *)(&DAT_00791778 + iVar11 * 4));
  }
  local_54 = 0.0;
  if (0 < *(int *)(&DAT_00791ce0 + iVar11 * 4)) {
    local_54 = (double)*(int *)(&DAT_00791ce0 + iVar11 * 4) /
               ((double)*(int *)(&DAT_007916c8 + iVar11 * 4) +
                (double)*(int *)(&DAT_00791ce0 + iVar11 * 4) +
               (double)*(int *)(&DAT_00791778 + iVar11 * 4));
  }
  dVar2 = 1.0 - (double)*(int *)(&DAT_00791938 + iVar11 * 4) / (double)iVar12;
  local_14 = 0.0;
  if (0 < *(int *)(&DAT_007918d4 + iVar11 * 4)) {
    local_14 = (double)*(int *)(&DAT_007918d4 + iVar11 * 4) /
               (double)(*(int *)(&DAT_007918d4 + iVar11 * 4) + *(int *)(&DAT_007916a8 + iVar11 * 4))
    ;
  }
  local_6c = 1.0 - (double)*(int *)(&DAT_007918b4 + iVar11 * 4) / (double)iVar12;
  local_a4 = 0.0;
  if (0 < *(int *)(&DAT_00791894 + iVar11 * 4)) {
    local_a4 = (double)*(int *)(&DAT_00791894 + iVar11 * 4) /
               ((double)*(int *)(&DAT_00791894 + iVar11 * 4) +
                (double)*(int *)(&DAT_00791848 + iVar11 * 4) +
               (double)*(int *)(&DAT_00791ac0 + iVar11 * 4));
  }
  local_24 = 0.0;
  if (0 < *(int *)(&DAT_00791848 + iVar11 * 4)) {
    local_24 = (double)*(int *)(&DAT_00791848 + iVar11 * 4) /
               ((double)*(int *)(&DAT_00791894 + iVar11 * 4) +
                (double)*(int *)(&DAT_00791848 + iVar11 * 4) +
               (double)*(int *)(&DAT_00791ac0 + iVar11 * 4));
  }
  local_cc = 1.0 - (double)*(int *)(&DAT_00791870 + iVar11 * 4) / (double)iVar12;
  local_94 = 0.0;
  if (0 < *(int *)(&DAT_00791588 + iVar11 * 4)) {
    local_94 = (double)*(int *)(&DAT_00791588 + iVar11 * 4) /
               ((double)*(int *)(&DAT_00791588 + iVar11 * 4) +
                (double)*(int *)(&DAT_00791e10 + iVar11 * 4) +
               (double)*(int *)(&DAT_00791d20 + iVar11 * 4));
  }
  local_8c = 0.0;
  if (0 < *(int *)(&DAT_00791e10 + iVar11 * 4)) {
    local_8c = (double)*(int *)(&DAT_00791e10 + iVar11 * 4) /
               ((double)*(int *)(&DAT_00791588 + iVar11 * 4) +
                (double)*(int *)(&DAT_00791e10 + iVar11 * 4) +
               (double)*(int *)(&DAT_00791d20 + iVar11 * 4));
  }
  local_b4 = 1.0 - (double)*(int *)(&DAT_00791420 + iVar11 * 4) / (double)iVar12;
  local_74 = 0.0;
  if (0 < *(int *)(&DAT_00791560 + iVar11 * 4)) {
    local_74 = (double)*(int *)(&DAT_00791560 + iVar11 * 4) /
               ((double)*(int *)(&DAT_00791560 + iVar11 * 4) +
                (double)*(int *)(&DAT_007915a8 + iVar11 * 4) +
               (double)*(int *)(&DAT_00791688 + iVar11 * 4));
  }
  local_d4 = 0.0;
  if (0 < *(int *)(&DAT_007915a8 + iVar11 * 4)) {
    local_d4 = (double)*(int *)(&DAT_007915a8 + iVar11 * 4) /
               ((double)*(int *)(&DAT_00791560 + iVar11 * 4) +
                (double)*(int *)(&DAT_007915a8 + iVar11 * 4) +
               (double)*(int *)(&DAT_00791688 + iVar11 * 4));
  }
  sVar7 = FUN_004d5b90();
  dVar3 = (double)(int)sVar7 / _DAT_006b4b00;
  sVar7 = FUN_004d5bb0();
  dVar5 = (double)(int)sVar7 / _DAT_006b4b00;
  dVar3 = dVar3 / (double)(local_b8 + 1);
  dVar4 = dVar5 / (double)(local_b8 + 1);
  if (1.0 - dVar5 < local_6c) {
    local_6c = local_6c - dVar4;
  }
  if (1.0 - dVar5 < local_cc) {
    local_cc = local_cc - dVar4;
  }
  if (1.0 - dVar5 < local_b4) {
    local_b4 = local_b4 - dVar4;
  }
  dVar2 = (1.0 - local_b4) * (1.0 - local_cc) * (1.0 - local_6c) * (1.0 - dVar2) * local_3c +
          (1.0 - local_cc) * (1.0 - local_6c) * (1.0 - dVar2) * dVar3 * local_b4 * local_d4 +
          (1.0 - local_6c) * (1.0 - dVar2) * dVar3 * local_cc * local_8c +
          (1.0 - dVar2) * dVar3 * local_6c * local_24 +
          (1.0 - local_cc) * (1.0 - local_6c) * (1.0 - dVar2) * local_b4 * local_74 +
          (1.0 - local_6c) * (1.0 - dVar2) * local_cc * local_94 +
          (1.0 - dVar2) * local_6c * local_a4 + dVar2 * local_14;
  dVar2 = (1.0 - dVar1) * dVar2 + ((dVar3 * local_54 + dVar2 + local_5c) / _PTR_006b3740) * dVar1;
  if (*(int *)(&DAT_007915cc + iVar11 * 0x18) + *(int *)(&DAT_00791464 + iVar11 * 0x18) == 0) {
    local_ac = dVar3 * local_54 + dVar2 + local_5c;
  }
  sVar7 = FUN_004d5b70();
  dVar3 = (double)((6 - param_1) + (int)local_b8) * ((double)(int)sVar7 / _DAT_006b4b00);
  local_1c = ((1.0 - dVar3) *
              ((1.0 - dVar1) * local_3c + ((local_3c + local_ac) / _PTR_006b3740) * dVar1) +
             dVar2 * dVar3) * *(double *)(&DAT_00791dd0 + iVar11 * 8);
  if (_DAT_006b4b00 < local_1c) {
    local_1c = _DAT_006b4b00;
  }
  if (local_1c < 0.0) {
    local_1c = 0.0;
  }
  return (float10)local_1c;
}

