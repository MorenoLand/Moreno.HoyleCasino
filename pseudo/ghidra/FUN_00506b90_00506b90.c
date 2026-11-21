// FUN_00506b90  00506b90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00506b90(int param_1,uint param_2)

{
  double dVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  int iVar8;
  int iVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  undefined4 uVar14;
  char local_33c;
  undefined1 local_251;
  undefined1 local_250 [4];
  undefined1 local_24c [11];
  undefined1 local_241;
  undefined1 local_240 [4];
  undefined1 local_23c [10];
  char local_232;
  undefined1 local_231;
  undefined1 local_230 [4];
  undefined1 local_22c [10];
  char local_222;
  undefined1 local_221;
  undefined1 local_220 [4];
  undefined1 local_21c [10];
  char local_212;
  undefined1 local_211;
  undefined1 local_210 [4];
  undefined1 local_20c [10];
  char local_202;
  undefined1 local_201;
  undefined1 local_200 [4];
  undefined1 local_1fc [10];
  char local_1f2;
  undefined1 local_1f1;
  undefined1 local_1f0 [4];
  undefined1 local_1ec [11];
  undefined1 local_1e1;
  undefined1 local_1e0 [4];
  undefined1 local_1dc [8];
  short local_1d4;
  short local_1d0;
  short local_1cc;
  uint local_1c8;
  short local_1c4;
  int local_1c0;
  char local_1b9;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  short local_140;
  short local_13c;
  int local_12c;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  short local_d4;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  undefined8 local_88;
  undefined4 local_80;
  short local_7c;
  double local_78;
  double local_70;
  short local_64;
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
  puStack_c = &LAB_006a30bc;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  local_12c = FUN_0047e420(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_78 = 1.0;
  fVar10 = (float10)FUN_004d8a80();
  local_70 = (double)(fVar10 / (float10)(int)param_2);
  iVar7 = FUN_0047d6f0();
  if (iVar7 == 2) {
    FUN_004c8210(local_1dc);
    local_8 = 0;
    FUN_00485940(local_1e0,1,1,1,1,0,0,0);
    local_8._0_1_ = 1;
    local_80 = FUN_004a21b0(&local_1e1);
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_004a20f0();
    local_8 = 0xffffffff;
    FUN_00484470();
  }
  else {
    FUN_004c7c40(local_1ec);
    local_8 = 2;
    FUN_00485940(local_1f0,1,1,1,1,0,0,0);
    local_8._0_1_ = 3;
    local_80 = FUN_004a21b0(&local_1f1);
    local_8 = CONCAT31(local_8._1_3_,2);
    FUN_004a20f0();
    local_8 = 0xffffffff;
    FUN_00484470();
  }
  cVar6 = FUN_004a1fb0(DAT_007913c8);
  if (cVar6 == '\0') {
    cVar6 = FUN_004a1fb0(DAT_007913e0);
    if (cVar6 == '\0') {
      cVar6 = FUN_004a1fb0(DAT_007913bc);
      if (cVar6 == '\0') {
        cVar6 = FUN_004a1fb0(DAT_00791400);
        if (cVar6 == '\0') {
          cVar6 = FUN_004a1fb0(DAT_0079138c);
          if (cVar6 == '\0') {
            cVar6 = FUN_004a1fb0(DAT_007913f4);
            if (cVar6 == '\0') {
              cVar6 = FUN_004a1fb0(DAT_00791410);
              if (cVar6 == '\0') {
                cVar6 = FUN_004a1fb0(DAT_007913f8);
                if (cVar6 == '\0') {
                  local_e0 = _DAT_006bcf78;
                }
                else {
                  local_e0 = _DAT_006be688;
                }
              }
              else {
                local_e0 = _DAT_006be710;
              }
            }
            else {
              local_e0 = _DAT_006be708;
            }
          }
          else {
            local_e0 = _DAT_006b2c38;
          }
        }
        else {
          local_e0 = _DAT_006b3e48;
        }
      }
      else {
        local_e0 = _DAT_006be6f8;
      }
    }
    else {
      local_e0 = _DAT_006b3e38;
    }
  }
  else {
    local_e0 = 0.0;
  }
  if (param_1 == 3) {
    iVar7 = FUN_0047d6f0();
    if (iVar7 == 2) {
      local_60 = _DAT_006c1008;
      local_58 = _DAT_006c1000;
      local_50 = _DAT_006c0ff8;
      local_48 = _DAT_006c0ff0;
      local_40 = _DAT_006c0fe8;
      local_38 = _DAT_006c0fe0;
      local_30 = _DAT_006c0fd8;
      local_28 = _DAT_006c0fd0;
      local_20 = _DAT_006c0fc8;
      local_18 = _DAT_006c0fc0;
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
    local_d0 = _DAT_006c0fb8;
    local_c8 = _DAT_006c0fb0;
    local_c0 = _DAT_006c0fa8;
    local_b8 = _DAT_006c0fa0;
    local_b0 = _DAT_006c0f98;
    local_a8 = _DAT_006c0f90;
    local_a0 = _DAT_006be800;
    local_98 = _DAT_006c0f88;
    local_90 = _DAT_006c0f80;
    local_88 = _DAT_006c0f78;
  }
  else if (param_1 == 4) {
    iVar7 = FUN_0047d6f0();
    if (iVar7 == 2) {
      local_60 = _DAT_006c0f70;
      local_58 = _DAT_006c0f68;
      local_50 = _DAT_006c0f60;
      local_48 = _DAT_006c0f58;
      local_40 = _DAT_006c0f50;
      local_38 = _DAT_006c0f48;
      local_30 = _DAT_006c0f40;
      local_28 = _DAT_006c0f38;
      local_20 = _DAT_006c0f30;
      local_18 = _DAT_006c0f28;
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
    local_d0 = _DAT_006be820;
    local_c8 = _DAT_006be818;
    local_c0 = _DAT_006be810;
    local_b8 = _DAT_006be808;
    local_b0 = _DAT_006be800;
    local_a8 = _DAT_006be7f8;
    local_a0 = _DAT_006be7f0;
    local_98 = _DAT_006be7e8;
    local_90 = _DAT_006be7e0;
    local_88 = _DAT_006be7d8;
  }
  else {
    iVar7 = FUN_0047d6f0();
    if (iVar7 == 2) {
      local_60 = _DAT_006c0f20;
      local_58 = _DAT_006c0f18;
      local_50 = _DAT_006c0f10;
      local_48 = _DAT_006c0f08;
      local_40 = _DAT_006c0f00;
      local_38 = _DAT_006c0ef8;
      local_30 = _DAT_006c0ef0;
      local_28 = _DAT_006c0ee8;
      local_20 = _DAT_006c0ee0;
      local_18 = _DAT_006c0ed8;
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
    local_d0 = _DAT_006be7d0;
    local_c8 = _DAT_006be7c8;
    local_c0 = _DAT_006be7c0;
    local_b8 = _DAT_006be7b8;
    local_b0 = _DAT_006be7b0;
    local_a8 = _DAT_006be7a8;
    local_a0 = _DAT_006be7a0;
    local_98 = _DAT_006be798;
    local_90 = _DAT_006be790;
    local_88 = _DAT_006be788;
  }
  local_198 = local_60;
  local_190 = local_58 + local_60;
  local_188 = local_50 + local_190;
  local_180 = local_48 + local_188;
  local_178 = local_40 + local_180;
  local_170 = local_38 + local_178;
  local_168 = local_30 + local_170;
  local_160 = local_28 + local_168;
  local_158 = local_20 + local_160;
  local_128 = local_d0;
  local_120 = local_c8 + local_d0;
  local_118 = local_c0 + local_120;
  local_110 = local_b8 + local_118;
  local_108 = local_b0 + local_110;
  local_100 = local_a8 + local_108;
  local_f8 = local_a0 + local_100;
  local_f0 = local_98 + local_f8;
  local_e8 = local_90 + local_f0;
  local_1a0 = 1.0;
  iVar7 = FUN_0047d6f0();
  if (iVar7 == 2) {
    FUN_004c8210(local_1fc);
    local_8 = 4;
    FUN_00485940(local_200,1,1,1,1,0,0,0);
    local_8._0_1_ = 5;
    uVar14 = DAT_00791418;
    FUN_004a2160(&local_201);
    local_1f2 = FUN_004a1e10(uVar14);
    local_8 = CONCAT31(local_8._1_3_,4);
    FUN_004a20f0();
    local_8 = 0xffffffff;
    FUN_00484470();
    if (local_1f2 != '\0') {
      local_1a0 = 0.0;
    }
  }
  else {
    FUN_004c7c40(local_20c);
    local_8 = 6;
    FUN_00485940(local_210,1,1,1,1,0,0,0);
    local_8._0_1_ = 7;
    uVar14 = DAT_00791418;
    FUN_004a2160(&local_211);
    local_202 = FUN_004a1e10(uVar14);
    local_8 = CONCAT31(local_8._1_3_,6);
    FUN_004a20f0();
    local_8 = 0xffffffff;
    FUN_00484470();
    if (local_202 != '\0') {
      local_1a0 = 0.0;
    }
  }
  local_140 = *(short *)(&DAT_007929d8 + local_12c * 2) + *(short *)(&DAT_00792830 + local_12c * 2)
              + *(short *)(&DAT_007920f8 + local_12c * 2) +
              *(short *)(&DAT_00792820 + local_12c * 2) + *(short *)(&DAT_00792218 + local_12c * 2)
              + *(short *)(&DAT_00792248 + local_12c * 2) +
              *(short *)(&DAT_007925c0 + local_12c * 2) + *(short *)(&DAT_007926fc + local_12c * 2)
              + *(short *)(&DAT_00792f78 + local_12c * 2) +
              *(short *)(&DAT_007920e8 + local_12c * 2);
  local_150 = ((double)(int)*(short *)(&DAT_007925c0 + local_12c * 2) *
              ((1.0 - local_e0 * local_30) - local_170) * local_1a0) / (double)(int)local_140 +
              ((double)(int)*(short *)(&DAT_00792248 + local_12c * 2) * (1.0 - local_178)) /
              (double)(int)local_140 +
              ((double)(int)*(short *)(&DAT_00792218 + local_12c * 2) * (1.0 - local_180)) /
              (double)(int)local_140 +
              ((double)(int)*(short *)(&DAT_00792820 + local_12c * 2) * (1.0 - local_188)) /
              (double)(int)local_140 +
              ((double)(int)*(short *)(&DAT_007920f8 + local_12c * 2) * (1.0 - local_190)) /
              (double)(int)local_140 +
              ((double)(int)*(short *)(&DAT_00792830 + local_12c * 2) * (1.0 - local_198)) /
              (double)(int)local_140 +
              ((double)(int)*(short *)(&DAT_007929d8 + local_12c * 2) * 1.0) /
              (double)(int)local_140;
  iVar7 = FUN_0047d6f0();
  if (iVar7 == 2) {
    FUN_004c8210(local_21c);
    local_8 = 8;
    FUN_00485940(local_220,1,1,1,1,0,0,0);
    local_8._0_1_ = 9;
    uVar14 = DAT_00791418;
    FUN_004a2160(&local_221);
    local_212 = FUN_004a1ed0(uVar14);
    local_8 = CONCAT31(local_8._1_3_,8);
    FUN_004a20f0();
    local_8 = 0xffffffff;
    FUN_00484470();
    if (local_212 != '\0') {
      local_150 = 0.0;
    }
  }
  else {
    FUN_004c7c40(local_22c);
    local_8 = 10;
    FUN_00485940(local_230,1,1,1,1,0,0,0);
    local_8._0_1_ = 0xb;
    uVar14 = DAT_00791418;
    FUN_004a2160(&local_231);
    local_222 = FUN_004a1ed0(uVar14);
    local_8 = CONCAT31(local_8._1_3_,10);
    FUN_004a20f0();
    local_8 = 0xffffffff;
    FUN_00484470();
    if (local_222 != '\0') {
      local_150 = 0.0;
    }
  }
  iVar7 = FUN_0047d770();
  if (iVar7 != 0) {
    local_148 = 0.0;
    goto LAB_00507c27;
  }
  local_148 = ((double)(int)*(short *)(&DAT_00791ec8 + local_12c * 2) * (1.0 - local_110)) /
              (double)(int)local_140 +
              ((double)(int)*(short *)(&DAT_007929a0 + local_12c * 2) * (1.0 - local_118)) /
              (double)(int)local_140 +
              ((double)(int)*(short *)(&DAT_00792208 + local_12c * 2) * (1.0 - local_120)) /
              (double)(int)local_140 +
              ((double)(int)*(short *)(&DAT_00792810 + local_12c * 2) * (1.0 - local_128)) /
              (double)(int)local_140 +
              ((double)(int)*(short *)(&DAT_007925d0 + local_12c * 2) * 1.0) /
              (double)(int)local_140;
  if (param_1 < 5) {
LAB_00507b64:
    local_33c = '\0';
  }
  else {
    FUN_004c7c40(local_23c);
    local_8 = 0xc;
    FUN_00485940(local_240,0,0,1,0,0,0,0);
    local_8 = 0xd;
    bVar5 = true;
    bVar4 = false;
    bVar3 = false;
    bVar2 = true;
    uVar14 = DAT_00791390;
    FUN_004a2160(&local_241);
    cVar6 = FUN_004a1e10(uVar14);
    if (cVar6 == '\0') goto LAB_00507b64;
    FUN_004c7c40(local_24c);
    local_8 = 0xe;
    FUN_00485940(local_250,0,0,1,0,0,0,0);
    local_8 = 0xf;
    bVar5 = true;
    bVar4 = true;
    bVar3 = true;
    bVar2 = true;
    uVar14 = DAT_007913f4;
    FUN_004a21b0(&local_251);
    cVar6 = FUN_004a20a0(uVar14);
    if (cVar6 == '\0') goto LAB_00507b64;
    local_33c = '\x01';
  }
  local_232 = local_33c;
  local_8 = 0xe;
  if (bVar3) {
    FUN_004a20f0();
  }
  local_8 = 0xd;
  if (bVar4) {
    FUN_00484470();
  }
  local_8 = 0xc;
  if (bVar5) {
    FUN_004a20f0();
  }
  local_8 = 0xffffffff;
  if (bVar2) {
    FUN_00484470();
  }
  if (local_232 != '\0') {
    local_148 = 0.0;
  }
LAB_00507c27:
  *(undefined8 *)(&DAT_00792358 + local_12c * 8) = 0x3ff0000000000000;
  *(undefined8 *)(&DAT_00792840 + local_12c * 8) = 0x3ff0000000000000;
  for (local_13c = 0; iVar9 = (int)local_13c, iVar7 = FUN_0047f950(), iVar9 < iVar7;
      local_13c = local_13c + 1) {
    if (local_13c != local_12c) {
      FUN_0047e390((int)local_13c);
      iVar7 = FUN_004c7010();
      if (iVar7 == 1) {
        local_1b8 = 0.0;
        local_1a8 = 0.0;
        fVar10 = (float10)FUN_004d9c90(CONCAT22(extraout_var,local_13c),param_2 & 0xffff);
        local_1b0 = (double)fVar10;
        if (local_1b0 * *(double *)(&DAT_007929e8 + local_13c * 8 + local_12c * 0x40) <= local_70) {
          FUN_0047e390((int)local_13c);
          local_1c8 = FUN_004c7050();
          local_1d0 = FUN_004f6880(CONCAT22(extraout_var_02,(undefined2)local_1c8));
          local_1cc = FUN_004f6930(local_1c8 & 0xffff);
          local_1d4 = FUN_004f6a90(CONCAT22(extraout_var_00,(undefined2)local_1c8));
          local_1d4 = local_1d4 - local_1d0;
          local_1c4 = FUN_004f6b20(CONCAT22(extraout_var_01,(undefined2)local_1c8));
          local_1c4 = local_1c4 - local_1cc;
          if (local_1d0 < 0) {
            FUN_005e9f20("shCurrentBets >= 0","..\\Casino\\PokerStudAI.cpp",0x6ca);
          }
          if (local_1cc < 0) {
            FUN_005e9f20("shCurrentCalls >= 0","..\\Casino\\PokerStudAI.cpp",0x6cb);
          }
          if (local_1d4 < 0) {
            FUN_005e9f20("shOldBets >= 0","..\\Casino\\PokerStudAI.cpp",0x6cc);
          }
          if (local_1c4 < 0) {
            FUN_005e9f20("shOldCalls >= 0","..\\Casino\\PokerStudAI.cpp",0x6cd);
          }
          local_1b9 = '\0';
          fVar10 = (float10)FUN_004d8ab0();
          iVar7 = (int)local_1d4;
          fVar11 = (float10)FUN_004d8b80();
          iVar9 = (int)local_1c4;
          fVar12 = (float10)FUN_004d8c50();
          iVar8 = (int)local_1d0;
          fVar13 = (float10)FUN_004d8d20();
          local_1b8 = (double)((float10)(int)local_1cc * fVar13 +
                              (float10)(double)((float10)iVar8 * fVar12 +
                                               (float10)(double)((float10)iVar9 * fVar11 +
                                                                (float10)(double)((float10)1 +
                                                                                 (float10)iVar7 *
                                                                                 fVar10))));
          iVar7 = FUN_0047d770();
          if (iVar7 == 3) {
            local_1a8 = (local_1b8 - _DAT_006b2c48) * _DAT_006c0ed0 + 1.0;
          }
          else {
            iVar7 = FUN_0047d770();
            if (iVar7 == 4) {
              local_1a8 = (local_1b8 - _DAT_006b2c48) + (local_1b8 - _DAT_006b2c48) + 1.0;
            }
            else {
              local_1a8 = local_1b8;
            }
          }
        }
        else {
          local_1b9 = '\x01';
        }
        local_1c0 = *(int *)(&DAT_00792710 + local_13c * 4 + local_12c * 0x20) +
                    *(int *)(&DAT_007924b0 + local_13c * 4 + local_12c * 0x20) +
                    *(int *)(&DAT_00791fd8 + local_13c * 4 + local_12c * 0x20) +
                    *(int *)(&DAT_007925f0 + local_13c * 4 + local_12c * 0x20) +
                    *(int *)(&DAT_00792e78 + local_13c * 4 + local_12c * 0x20) +
                    *(int *)(&DAT_00792880 + local_13c * 4 + local_12c * 0x20) +
                    *(int *)(&DAT_00792258 + local_13c * 4 + local_12c * 0x20) +
                    *(int *)(&DAT_00792ce8 + local_13c * 4 + local_12c * 0x20) +
                    *(int *)(&DAT_00792398 + local_13c * 4 + local_12c * 0x20);
        if (local_1b9 == '\0') {
          dVar1 = ((((((((_DAT_006b2c38 * local_148 + _DAT_006b2c38 * local_150 + 1.0) -
                        ((double)*(int *)(&DAT_00792710 + local_13c * 4 + local_12c * 0x20) /
                        (double)local_1c0) * local_1b8 * _DAT_006b2c48) -
                       ((double)*(int *)(&DAT_007925f0 + local_13c * 4 + local_12c * 0x20) /
                       (double)local_1c0) * local_1b8 * _DAT_006c0ec8) -
                      ((double)*(int *)(&DAT_007924b0 + local_13c * 4 + local_12c * 0x20) /
                      (double)local_1c0) * local_1b8 * _DAT_006c0ec8) -
                     ((double)*(int *)(&DAT_00791fd8 + local_13c * 4 + local_12c * 0x20) /
                     (double)local_1c0) * local_1b8 * _DAT_006be670) -
                    ((double)*(int *)(&DAT_00792258 + local_13c * 4 + local_12c * 0x20) /
                    (double)local_1c0) * local_1b8 * _DAT_006be670) -
                   ((double)*(int *)(&DAT_00792e78 + local_13c * 4 + local_12c * 0x20) /
                   (double)local_1c0) * local_1b8 * _DAT_006b3e40) -
                  ((double)*(int *)(&DAT_00792ce8 + local_13c * 4 + local_12c * 0x20) /
                  (double)local_1c0) * local_1b8 * _DAT_006bf7d8) -
                  ((double)*(int *)(&DAT_00792880 + local_13c * 4 + local_12c * 0x20) /
                  (double)local_1c0) * local_1b8 * _DAT_006bf7d8;
          *(double *)(&DAT_00792358 + local_12c * 8) =
               ((((((1.0 - ((double)*(int *)(&DAT_00792710 + local_13c * 4 + local_12c * 0x20) /
                           (double)local_1c0) * local_1b8 * _DAT_006b2c48) -
                   ((double)*(int *)(&DAT_007924b0 + local_13c * 4 + local_12c * 0x20) /
                   (double)local_1c0) * local_1b8 * _DAT_006b2c48) -
                  ((double)*(int *)(&DAT_00791fd8 + local_13c * 4 + local_12c * 0x20) /
                  (double)local_1c0) * local_1b8 * _DAT_006b2c48) -
                 ((double)*(int *)(&DAT_007925f0 + local_13c * 4 + local_12c * 0x20) /
                 (double)local_1c0) * local_1b8 * _DAT_006b3e40) -
                ((double)*(int *)(&DAT_00792e78 + local_13c * 4 + local_12c * 0x20) /
                (double)local_1c0) * local_1b8 * _DAT_006b3e40) -
               ((double)*(int *)(&DAT_00792880 + local_13c * 4 + local_12c * 0x20) /
               (double)local_1c0) * local_1b8 * _DAT_006b3e40) *
               *(double *)(&DAT_00792358 + local_12c * 8);
          *(double *)(&DAT_00792840 + local_12c * 8) =
               ((((((1.0 - ((double)*(int *)(&DAT_00792710 + local_13c * 4 + local_12c * 0x20) /
                           (double)local_1c0) * local_1a8 * _DAT_006b2c48) -
                   ((double)*(int *)(&DAT_007925f0 + local_13c * 4 + local_12c * 0x20) /
                   (double)local_1c0) * local_1a8 * _DAT_006b2c48) -
                  ((double)*(int *)(&DAT_00792258 + local_13c * 4 + local_12c * 0x20) /
                  (double)local_1c0) * local_1a8 * _DAT_006b2c48) -
                 ((double)*(int *)(&DAT_007924b0 + local_13c * 4 + local_12c * 0x20) /
                 (double)local_1c0) * local_1a8 * _DAT_006b3e40) -
                ((double)*(int *)(&DAT_00792e78 + local_13c * 4 + local_12c * 0x20) /
                (double)local_1c0) * local_1a8 * _DAT_006b3e40) -
               ((double)*(int *)(&DAT_00792ce8 + local_13c * 4 + local_12c * 0x20) /
               (double)local_1c0) * local_1a8 * _DAT_006b3e40) *
               *(double *)(&DAT_00792840 + local_12c * 8);
        }
        else {
          dVar1 = ((((((((_DAT_006b2c38 * local_148 + _DAT_006b2c38 * local_150 + 1.0) -
                        ((double)*(int *)(&DAT_00792710 + local_13c * 4 + local_12c * 0x20) /
                        (double)local_1c0) * 1.0) -
                       ((double)*(int *)(&DAT_007925f0 + local_13c * 4 + local_12c * 0x20) /
                       (double)local_1c0) * _DAT_006c0ec8) -
                      ((double)*(int *)(&DAT_007924b0 + local_13c * 4 + local_12c * 0x20) /
                      (double)local_1c0) * _DAT_006c0ec8) -
                     ((double)*(int *)(&DAT_00791fd8 + local_13c * 4 + local_12c * 0x20) /
                     (double)local_1c0) * _DAT_006be670) -
                    ((double)*(int *)(&DAT_00792258 + local_13c * 4 + local_12c * 0x20) /
                    (double)local_1c0) * _DAT_006be670) -
                   ((double)*(int *)(&DAT_00792e78 + local_13c * 4 + local_12c * 0x20) /
                   (double)local_1c0) * _DAT_006b3e40) -
                  ((double)*(int *)(&DAT_00792ce8 + local_13c * 4 + local_12c * 0x20) /
                  (double)local_1c0) * _DAT_006bf7d8) -
                  ((double)*(int *)(&DAT_00792880 + local_13c * 4 + local_12c * 0x20) /
                  (double)local_1c0) * _DAT_006bf7d8;
          *(double *)(&DAT_00792358 + local_12c * 8) =
               ((((((1.0 - ((double)*(int *)(&DAT_00792710 + local_13c * 4 + local_12c * 0x20) /
                           (double)local_1c0) * 1.0) -
                   ((double)*(int *)(&DAT_007924b0 + local_13c * 4 + local_12c * 0x20) /
                   (double)local_1c0) * 1.0) -
                  ((double)*(int *)(&DAT_00791fd8 + local_13c * 4 + local_12c * 0x20) /
                  (double)local_1c0) * 1.0) -
                 ((double)*(int *)(&DAT_007925f0 + local_13c * 4 + local_12c * 0x20) /
                 (double)local_1c0) * _DAT_006b3e40) -
                ((double)*(int *)(&DAT_00792e78 + local_13c * 4 + local_12c * 0x20) /
                (double)local_1c0) * _DAT_006b3e40) -
               ((double)*(int *)(&DAT_00792880 + local_13c * 4 + local_12c * 0x20) /
               (double)local_1c0) * _DAT_006b3e40) * *(double *)(&DAT_00792358 + local_12c * 8);
          *(double *)(&DAT_00792840 + local_12c * 8) =
               ((((((1.0 - ((double)*(int *)(&DAT_00792710 + local_13c * 4 + local_12c * 0x20) /
                           (double)local_1c0) * 1.0) -
                   ((double)*(int *)(&DAT_007925f0 + local_13c * 4 + local_12c * 0x20) /
                   (double)local_1c0) * 1.0) -
                  ((double)*(int *)(&DAT_00792258 + local_13c * 4 + local_12c * 0x20) /
                  (double)local_1c0) * 1.0) -
                 ((double)*(int *)(&DAT_007924b0 + local_13c * 4 + local_12c * 0x20) /
                 (double)local_1c0) * _DAT_006b3e40) -
                ((double)*(int *)(&DAT_00792e78 + local_13c * 4 + local_12c * 0x20) /
                (double)local_1c0) * _DAT_006b3e40) -
               ((double)*(int *)(&DAT_00792ce8 + local_13c * 4 + local_12c * 0x20) /
               (double)local_1c0) * _DAT_006b3e40) * *(double *)(&DAT_00792840 + local_12c * 8);
        }
        local_78 = dVar1 * local_78;
        if (local_78 < 0.0) {
          local_78 = 0.0;
        }
        if (*(double *)(&DAT_00792358 + local_12c * 8) < 0.0) {
          *(undefined8 *)(&DAT_00792358 + local_12c * 8) = 0;
        }
        if (*(double *)(&DAT_00792840 + local_12c * 8) < 0.0) {
          *(undefined8 *)(&DAT_00792840 + local_12c * 8) = 0;
        }
      }
    }
  }
  local_78 = local_78 * *(double *)(&DAT_00792e38 + local_12c * 8);
  *(double *)(&DAT_00792358 + local_12c * 8) =
       *(double *)(&DAT_00792358 + local_12c * 8) * *(double *)(&DAT_00792e38 + local_12c * 8);
  *(double *)(&DAT_00792840 + local_12c * 8) =
       *(double *)(&DAT_00792840 + local_12c * 8) * *(double *)(&DAT_00792e38 + local_12c * 8);
  if (_DAT_006b4b00 < local_78) {
    local_78 = _DAT_006b4b00;
  }
  if (_DAT_006b4b00 < *(double *)(&DAT_00792358 + local_12c * 8)) {
    *(double *)(&DAT_00792358 + local_12c * 8) = _DAT_006b4b00;
  }
  if (_DAT_006b4b00 < *(double *)(&DAT_00792840 + local_12c * 8)) {
    *(double *)(&DAT_00792840 + local_12c * 8) = _DAT_006b4b00;
  }
  local_7c = 0;
  local_d4 = 0;
  local_64 = 0;
  iVar7 = FUN_0047d770();
  if (iVar7 == 0) {
    if (param_1 == 7) {
      if ((local_78 <= *(double *)(&DAT_00792358 + local_12c * 8)) ||
         (local_78 <= *(double *)(&DAT_00792840 + local_12c * 8))) {
        if (*(double *)(&DAT_00792840 + local_12c * 8) <= *(double *)(&DAT_00792358 + local_12c * 8)
           ) {
          local_7c = 2;
          local_d4 = 0;
          local_64 = 1;
        }
        else {
          local_7c = 2;
          local_d4 = 1;
          local_64 = 0;
        }
      }
      else {
        local_7c = 1;
        local_d4 = 0;
        local_64 = 0;
      }
    }
    else if (param_1 == 6) {
      if ((local_78 <= *(double *)(&DAT_00792358 + local_12c * 8)) ||
         (local_78 <= *(double *)(&DAT_00792840 + local_12c * 8))) {
        if (*(double *)(&DAT_00792840 + local_12c * 8) <= *(double *)(&DAT_00792358 + local_12c * 8)
           ) {
          local_7c = 2;
          local_d4 = 0;
          local_64 = 1;
        }
        else {
          local_7c = 2;
          local_d4 = 1;
          local_64 = 0;
        }
      }
      else {
        local_7c = 1;
        local_d4 = 0;
        local_64 = 0;
      }
    }
    else if (param_1 == 5) {
      if ((local_78 <= *(double *)(&DAT_00792358 + local_12c * 8)) ||
         (local_78 <= *(double *)(&DAT_00792840 + local_12c * 8))) {
        if (*(double *)(&DAT_00792840 + local_12c * 8) <= *(double *)(&DAT_00792358 + local_12c * 8)
           ) {
          local_7c = 4;
          local_d4 = 0;
          local_64 = 1;
        }
        else {
          local_7c = 1;
          local_d4 = 1;
          local_64 = 0;
        }
      }
      else {
        local_7c = 1;
        local_d4 = 0;
        local_64 = 0;
      }
    }
    else if (param_1 == 4) {
      if ((local_78 <= *(double *)(&DAT_00792358 + local_12c * 8)) ||
         (local_78 <= *(double *)(&DAT_00792840 + local_12c * 8))) {
        if (*(double *)(&DAT_00792840 + local_12c * 8) <= *(double *)(&DAT_00792358 + local_12c * 8)
           ) {
          local_d4 = 0;
        }
        else {
          local_d4 = 3;
        }
      }
      else {
        local_d4 = 0;
      }
      local_64 = 0;
      local_7c = 1;
    }
    else if (param_1 == 3) {
      if ((local_78 <= *(double *)(&DAT_00792358 + local_12c * 8)) ||
         (local_78 <= *(double *)(&DAT_00792840 + local_12c * 8))) {
        if (*(double *)(&DAT_00792840 + local_12c * 8) <= *(double *)(&DAT_00792358 + local_12c * 8)
           ) {
          local_d4 = 0;
        }
        else {
          local_d4 = 3;
        }
      }
      else {
        local_d4 = 0;
      }
      local_64 = 0;
      local_7c = 1;
    }
    else {
      FUN_005e9f20(&DAT_006b2b64,"..\\Casino\\PokerStudAI.cpp",0x7d7);
    }
  }
  else {
    iVar7 = FUN_0047d770();
    if (iVar7 == 2) {
      if ((local_78 <= *(double *)(&DAT_00792358 + local_12c * 8)) ||
         (local_78 <= *(double *)(&DAT_00792840 + local_12c * 8))) {
        if (*(double *)(&DAT_00792840 + local_12c * 8) <= *(double *)(&DAT_00792358 + local_12c * 8)
           ) {
          if (param_1 < 5) {
            local_7c = 1;
            local_d4 = 0;
            local_64 = 7;
          }
          else {
            local_7c = 1;
            local_d4 = 0;
            local_64 = 4;
          }
        }
        else {
          local_7c = 2;
          local_d4 = 1;
          local_64 = 0;
        }
      }
      else {
        local_7c = 4;
        local_d4 = 1;
        local_64 = 2;
      }
    }
    else {
      iVar7 = FUN_0047d770();
      if (iVar7 == 4) {
        if ((local_78 <= *(double *)(&DAT_00792358 + local_12c * 8)) ||
           (local_78 <= *(double *)(&DAT_00792840 + local_12c * 8))) {
          if (*(double *)(&DAT_00792840 + local_12c * 8) <=
              *(double *)(&DAT_00792358 + local_12c * 8)) {
            if (param_1 < 5) {
              local_7c = 1;
              local_d4 = 0;
              local_64 = 4;
            }
            else {
              local_7c = 1;
              local_d4 = 0;
              local_64 = 2;
            }
          }
          else {
            local_7c = 2;
            local_d4 = 1;
            local_64 = 0;
          }
        }
        else {
          local_7c = 4;
          local_d4 = 1;
          local_64 = 2;
        }
      }
      else if ((local_78 <= *(double *)(&DAT_00792358 + local_12c * 8)) ||
              (local_78 <= *(double *)(&DAT_00792840 + local_12c * 8))) {
        if (*(double *)(&DAT_00792840 + local_12c * 8) <= *(double *)(&DAT_00792358 + local_12c * 8)
           ) {
          if (param_1 < 5) {
            local_7c = 1;
            local_d4 = 0;
            local_64 = 3;
          }
          else {
            local_7c = 1;
            local_d4 = 0;
            local_64 = 2;
          }
        }
        else {
          local_7c = 2;
          local_d4 = 1;
          local_64 = 0;
        }
      }
      else {
        local_7c = 2;
        local_d4 = 0;
        local_64 = 1;
      }
    }
  }
  ExceptionList = local_10;
  return (float10)(((double)(int)local_64 * *(double *)(&DAT_00792358 + local_12c * 8) +
                   (double)(int)local_d4 * *(double *)(&DAT_00792840 + local_12c * 8) +
                   (double)(int)local_7c * local_78) /
                  (double)((int)local_7c + (int)local_d4 + (int)local_64));
}

