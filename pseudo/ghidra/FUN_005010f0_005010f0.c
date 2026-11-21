// FUN_005010f0  005010f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_005010f0(int param_1,int param_2)

{
  double dVar1;
  char cVar2;
  int iVar3;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  int iVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  undefined4 uVar13;
  undefined1 local_145;
  undefined1 local_144 [4];
  undefined1 local_140 [10];
  char local_136;
  undefined1 local_135;
  undefined1 local_134 [4];
  undefined1 local_130 [10];
  char local_126;
  undefined1 local_125;
  undefined1 local_124 [4];
  undefined1 local_120 [10];
  char local_116;
  undefined1 local_115;
  undefined1 local_114 [4];
  undefined1 local_110 [8];
  short local_108;
  short local_104;
  short local_100;
  undefined4 local_fc;
  short local_f8;
  char local_f1;
  double local_f0;
  double local_e8;
  short local_e0;
  undefined4 local_dc;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  short local_80;
  int local_7c;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  undefined8 local_18;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a2b8c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_7c = FUN_0047e420(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_70 = 1.0;
  fVar6 = (float10)FUN_004d66f0();
  local_68 = (double)(fVar6 / (float10)param_2);
  iVar3 = FUN_0047d6f0();
  if (iVar3 == 1) {
    local_78 = 0.0;
  }
  else {
    FUN_004c7c40(local_110);
    local_8 = 0;
    FUN_00485940(local_114,1,1,1,1,0,0,0);
    local_8._0_1_ = 1;
    local_dc = FUN_004a21b0(&local_115);
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_004a20f0();
    local_8 = 0xffffffff;
    FUN_00484470();
    cVar2 = FUN_004a1fb0(DAT_007913c8);
    if (cVar2 == '\0') {
      cVar2 = FUN_004a1fb0(DAT_007913e0);
      if (cVar2 == '\0') {
        cVar2 = FUN_004a1fb0(DAT_007913bc);
        if (cVar2 == '\0') {
          cVar2 = FUN_004a1fb0(DAT_00791400);
          if (cVar2 == '\0') {
            cVar2 = FUN_004a1fb0(DAT_0079138c);
            if (cVar2 == '\0') {
              cVar2 = FUN_004a1fb0(DAT_007913f4);
              if (cVar2 == '\0') {
                cVar2 = FUN_004a1fb0(DAT_00791410);
                if (cVar2 == '\0') {
                  cVar2 = FUN_004a1fb0(DAT_007913f8);
                  if (cVar2 == '\0') {
                    local_78 = _DAT_006bcf78;
                  }
                  else {
                    local_78 = _DAT_006be688;
                  }
                }
                else {
                  local_78 = _DAT_006be710;
                }
              }
              else {
                local_78 = _DAT_006be708;
              }
            }
            else {
              local_78 = _DAT_006b2c38;
            }
          }
          else {
            local_78 = _DAT_006b3e48;
          }
        }
        else {
          local_78 = _DAT_006be6f8;
        }
      }
      else {
        local_78 = _DAT_006b3e38;
      }
    }
    else {
      local_78 = 0.0;
    }
  }
  if (param_1 == 3) {
    iVar3 = FUN_0047d6f0();
    if (iVar3 == 1) {
      local_60 = _DAT_006c0e20;
      local_58 = _DAT_006c0e18;
      local_50 = _DAT_006c0e10;
      local_48 = _DAT_006c0e08;
      local_40 = _DAT_006c0e00;
      local_38 = _DAT_006c0df8;
      local_30 = _DAT_006c0df0;
      local_28 = _DAT_006c0de8;
      local_20 = _DAT_006c0de0;
      local_18 = _DAT_006c0dd8;
    }
    else {
      local_60 = 0.0;
      local_58 = _DAT_006c0dd0;
      local_50 = _DAT_006c0dc8;
      local_48 = _DAT_006c0dc0;
      local_40 = _DAT_006c0db8;
      local_38 = _DAT_006c0db0;
      local_30 = _DAT_006c0da8;
      local_28 = _DAT_006c0da0;
      local_20 = _DAT_006c0d98;
      local_18 = _DAT_006c0d90;
    }
  }
  else if (param_1 == 4) {
    iVar3 = FUN_0047d6f0();
    if (iVar3 == 1) {
      local_60 = _DAT_006c0d88;
      local_58 = _DAT_006c0d80;
      local_50 = _DAT_006c0d78;
      local_48 = _DAT_006c0d70;
      local_40 = _DAT_006c0d68;
      local_38 = _DAT_006c0d60;
      local_30 = _DAT_006c0d58;
      local_28 = _DAT_006c0d50;
      local_20 = _DAT_006c0d48;
      local_18 = _DAT_006c0d40;
    }
    else {
      local_60 = 0.0;
      local_58 = _DAT_006c0d38;
      local_50 = _DAT_006c0d30;
      local_48 = _DAT_006c0d28;
      local_40 = _DAT_006c0d20;
      local_38 = _DAT_006c0d18;
      local_30 = _DAT_006c0d10;
      local_28 = _DAT_006c0d08;
      local_20 = _DAT_006c0d00;
      local_18 = _DAT_006c0cf8;
    }
  }
  else {
    iVar3 = FUN_0047d6f0();
    if (iVar3 == 1) {
      local_60 = _DAT_006c0cf0;
      local_58 = _DAT_006c0ce8;
      local_50 = _DAT_006c0ce0;
      local_48 = _DAT_006c0cd8;
      local_40 = _DAT_006c0cd0;
      local_38 = _DAT_006c0cc8;
      local_30 = _DAT_006c0cc0;
      local_28 = _DAT_006c0cb8;
      local_20 = _DAT_006c0cb0;
      local_18 = _DAT_006c0ca8;
    }
    else {
      local_60 = 0.0;
      local_58 = _DAT_006c0ca0;
      local_50 = _DAT_006c0c98;
      local_48 = _DAT_006c0c90;
      local_40 = _DAT_006c0c88;
      local_38 = _DAT_006c0c80;
      local_30 = _DAT_006c0c78;
      local_28 = _DAT_006c0c70;
      local_20 = _DAT_006c0c68;
      local_18 = _DAT_006c0c60;
    }
  }
  local_d0 = local_60;
  local_c8 = local_58 + local_60;
  local_c0 = local_50 + local_c8;
  local_b8 = local_48 + local_c0;
  local_b0 = local_40 + local_b8;
  local_a8 = local_38 + local_b0;
  local_a0 = local_30 + local_a8;
  local_98 = local_28 + local_a0;
  local_90 = local_20 + local_98;
  local_d8 = 1.0;
  iVar3 = FUN_0047d6f0();
  if (iVar3 == 1) {
    local_d8 = 0.0;
  }
  else {
    FUN_004c7c40(local_120);
    local_8 = 2;
    FUN_00485940(local_124,1,1,1,1,0,0,0);
    local_8._0_1_ = 3;
    uVar13 = DAT_00791418;
    FUN_004a2160(&local_125);
    local_116 = FUN_004a1e10(uVar13);
    local_8 = CONCAT31(local_8._1_3_,2);
    FUN_004a20f0();
    local_8 = 0xffffffff;
    FUN_00484470();
    if (local_116 != '\0') {
      local_d8 = 0.0;
    }
  }
  local_80 = *(short *)(&DAT_007929d8 + local_7c * 2) + *(short *)(&DAT_00792830 + local_7c * 2) +
             *(short *)(&DAT_007920f8 + local_7c * 2) + *(short *)(&DAT_00792820 + local_7c * 2) +
             *(short *)(&DAT_00792218 + local_7c * 2) + *(short *)(&DAT_00792248 + local_7c * 2) +
             *(short *)(&DAT_007925c0 + local_7c * 2) + *(short *)(&DAT_007926fc + local_7c * 2) +
             *(short *)(&DAT_00792f78 + local_7c * 2) + *(short *)(&DAT_007920e8 + local_7c * 2);
  iVar3 = FUN_0047d6f0();
  if (iVar3 == 1) {
    local_88 = ((double)(int)*(short *)(&DAT_00792830 + local_7c * 2) * (1.0 - local_d0)) /
               (double)(int)local_80 +
               ((double)(int)*(short *)(&DAT_007929d8 + local_7c * 2) * 1.0) / (double)(int)local_80
    ;
    FUN_004c80b0(local_130);
    local_8 = 4;
    FUN_00485940(local_134,1,1,1,1,0,0,0);
    local_8._0_1_ = 5;
    uVar13 = DAT_00791418;
    FUN_004a2160(&local_135);
    local_126 = FUN_004a1ed0(uVar13);
    local_8 = CONCAT31(local_8._1_3_,4);
    FUN_004a20f0();
    local_8 = 0xffffffff;
    FUN_00484470();
    if (local_126 != '\0') {
      local_88 = 0.0;
    }
  }
  else {
    local_88 = ((double)(int)*(short *)(&DAT_007925c0 + local_7c * 2) *
               ((1.0 - local_78 * local_30) - local_a8) * local_d8) / (double)(int)local_80 +
               ((double)(int)*(short *)(&DAT_00792248 + local_7c * 2) * (1.0 - local_b0)) /
               (double)(int)local_80 +
               ((double)(int)*(short *)(&DAT_00792218 + local_7c * 2) * (1.0 - local_b8)) /
               (double)(int)local_80 +
               ((double)(int)*(short *)(&DAT_00792820 + local_7c * 2) * (1.0 - local_c0)) /
               (double)(int)local_80 +
               ((double)(int)*(short *)(&DAT_007920f8 + local_7c * 2) * (1.0 - local_c8)) /
               (double)(int)local_80 +
               ((double)(int)*(short *)(&DAT_00792830 + local_7c * 2) * (1.0 - local_d0)) /
               (double)(int)local_80 +
               ((double)(int)*(short *)(&DAT_007929d8 + local_7c * 2) * 1.0) / (double)(int)local_80
    ;
    FUN_004c7c40(local_140);
    local_8 = 6;
    FUN_00485940(local_144,1,1,1,1,0,0,0);
    local_8._0_1_ = 7;
    uVar13 = DAT_00791418;
    FUN_004a2160(&local_145);
    local_136 = FUN_004a1ed0(uVar13);
    local_8 = CONCAT31(local_8._1_3_,6);
    FUN_004a20f0();
    local_8 = 0xffffffff;
    FUN_00484470();
    if (local_136 != '\0') {
      local_88 = 0.0;
    }
  }
  for (local_e0 = 0; iVar5 = (int)local_e0, iVar3 = FUN_0047f950(), iVar5 < iVar3;
      local_e0 = local_e0 + 1) {
    if (local_e0 != local_7c) {
      FUN_0047e390((int)local_e0);
      iVar3 = FUN_004c7010();
      if (iVar3 == 1) {
        local_f0 = 0.0;
        fVar6 = (float10)FUN_004d7900(CONCAT22(extraout_var_01,local_e0),
                                      CONCAT22(extraout_var,(undefined2)param_2));
        local_e8 = (double)fVar6;
        if (local_e8 * *(double *)(&DAT_007929e8 + local_e0 * 8 + local_7c * 0x40) <= local_68) {
          FUN_0047e390((int)local_e0);
          local_fc = FUN_004c7050();
          local_104 = FUN_004f6880(local_fc);
          local_100 = FUN_004f6930(CONCAT22(extraout_var_00,(undefined2)local_fc));
          local_108 = FUN_004f6a90(CONCAT22(extraout_var_02,(undefined2)local_fc));
          local_108 = local_108 - local_104;
          local_f8 = FUN_004f6b20(CONCAT22(extraout_var_03,(undefined2)local_fc));
          local_f8 = local_f8 - local_100;
          if (local_104 < 0) {
            FUN_005e9f20("shCurrentBets >= 0","..\\Casino\\PokerStudAI.cpp",0x17f);
          }
          if (local_100 < 0) {
            FUN_005e9f20("shCurrentCalls >= 0","..\\Casino\\PokerStudAI.cpp",0x180);
          }
          if (local_108 < 0) {
            FUN_005e9f20("shOldBets >= 0","..\\Casino\\PokerStudAI.cpp",0x181);
          }
          if (local_f8 < 0) {
            FUN_005e9f20("shOldCalls >= 0","..\\Casino\\PokerStudAI.cpp",0x182);
          }
          local_f1 = '\0';
          iVar3 = FUN_0047d6f0();
          if (iVar3 == 1) {
            fVar7 = (float10)FUN_004d6720();
            iVar5 = (int)local_108;
            fVar6 = (float10)_DAT_006be728;
            fVar8 = (float10)FUN_004d67f0();
            iVar4 = (int)local_f8;
            fVar11 = (float10)_DAT_006be728;
            fVar9 = (float10)FUN_004d68c0();
            iVar3 = (int)local_104;
            fVar12 = (float10)_DAT_006be728;
            fVar10 = (float10)FUN_004d6990();
            local_f0 = (double)(((float10)(int)local_100 * fVar10) / (float10)_DAT_006be728 +
                               (float10)(double)(((float10)iVar3 * fVar9) / fVar12 +
                                                (float10)(double)(((float10)iVar4 * fVar8) / fVar11
                                                                 + (float10)(double)((float10)1 +
                                                                                    ((float10)iVar5
                                                                                    * fVar7) / fVar6
                                                                                    ))));
          }
          else {
            fVar6 = (float10)FUN_004d6720();
            iVar4 = (int)local_108;
            fVar11 = (float10)FUN_004d67f0();
            iVar3 = (int)local_f8;
            fVar12 = (float10)FUN_004d68c0();
            iVar5 = (int)local_104;
            fVar7 = (float10)FUN_004d6990();
            local_f0 = (double)((float10)(int)local_100 * fVar7 +
                               (float10)(double)((float10)iVar5 * fVar12 +
                                                (float10)(double)((float10)iVar3 * fVar11 +
                                                                 (float10)(double)((float10)1 +
                                                                                  (float10)iVar4 *
                                                                                  fVar6))));
          }
        }
        else {
          local_f1 = '\x01';
        }
        if (local_f1 == '\0') {
          dVar1 = ((local_88 + 1.0) -
                  ((double)*(int *)(&DAT_00792be8 + local_e0 * 4 + local_7c * 0x20) /
                  (double)(*(int *)(&DAT_00792be8 + local_e0 * 4 + local_7c * 0x20) +
                           *(int *)(&DAT_00792108 + local_e0 * 4 + local_7c * 0x20) +
                          *(int *)(&DAT_00791ed8 + local_e0 * 4 + local_7c * 0x20))) * local_f0) -
                  ((double)*(int *)(&DAT_00792108 + local_e0 * 4 + local_7c * 0x20) /
                  (double)(*(int *)(&DAT_00792be8 + local_e0 * 4 + local_7c * 0x20) +
                           *(int *)(&DAT_00792108 + local_e0 * 4 + local_7c * 0x20) +
                          *(int *)(&DAT_00791ed8 + local_e0 * 4 + local_7c * 0x20))) *
                  local_f0 * _DAT_006b3e40;
        }
        else {
          dVar1 = ((local_88 + 1.0) -
                  (double)*(int *)(&DAT_00792be8 + local_e0 * 4 + local_7c * 0x20) /
                  (double)(*(int *)(&DAT_00792be8 + local_e0 * 4 + local_7c * 0x20) +
                           *(int *)(&DAT_00792108 + local_e0 * 4 + local_7c * 0x20) +
                          *(int *)(&DAT_00791ed8 + local_e0 * 4 + local_7c * 0x20))) -
                  ((double)*(int *)(&DAT_00792108 + local_e0 * 4 + local_7c * 0x20) /
                  (double)(*(int *)(&DAT_00792be8 + local_e0 * 4 + local_7c * 0x20) +
                           *(int *)(&DAT_00792108 + local_e0 * 4 + local_7c * 0x20) +
                          *(int *)(&DAT_00791ed8 + local_e0 * 4 + local_7c * 0x20))) * _DAT_006b3e40
          ;
        }
        local_70 = dVar1 * local_70;
        if (local_70 < 0.0) {
          local_70 = 0.0;
        }
      }
    }
  }
  local_70 = local_70 * *(double *)(&DAT_00792e38 + local_7c * 8);
  if (_DAT_006b4b00 < local_70) {
    local_70 = _DAT_006b4b00;
  }
  ExceptionList = local_10;
  return (float10)local_70;
}

