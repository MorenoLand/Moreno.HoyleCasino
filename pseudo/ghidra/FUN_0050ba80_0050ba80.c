// FUN_0050ba80  0050ba80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0050ba80(int param_1,int param_2)

{
  double dVar1;
  char cVar2;
  int iVar3;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  int iVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  undefined4 uVar10;
  undefined1 local_111;
  undefined1 local_110 [4];
  undefined1 local_10c [11];
  char local_101;
  short local_100;
  short local_fc;
  short local_f8;
  uint local_f4;
  short local_f0;
  char local_e9;
  double local_e8;
  double local_e0;
  double local_d8;
  undefined8 local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  short local_7c;
  short local_78;
  int local_74;
  double local_70;
  double local_68;
  undefined8 local_60;
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
  puStack_c = &LAB_006a329b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_74 = FUN_0047e420(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_70 = 1.0;
  fVar6 = (float10)FUN_004ebaa0();
  local_68 = (double)(fVar6 / (float10)param_2);
  local_60 = 0;
  local_58 = _DAT_006c0dd0;
  local_50 = _DAT_006c0dc8;
  local_48 = _DAT_006c0dc0;
  local_40 = _DAT_006c0db8;
  local_38 = _DAT_006c0db0;
  local_30 = _DAT_006c0da8;
  local_28 = _DAT_006c0da0;
  local_20 = _DAT_006c0d98;
  local_18 = _DAT_006c0d90;
  local_d0 = 0;
  local_c8 = _DAT_006c0dd0 + 0.0;
  local_c0 = _DAT_006c0dc8 + local_c8;
  local_b8 = _DAT_006c0dc0 + local_c0;
  local_b0 = _DAT_006c0db8 + local_b8;
  local_a8 = _DAT_006c0db0 + local_b0;
  local_a0 = _DAT_006c0da8 + local_a8;
  local_98 = _DAT_006c0da0 + local_a0;
  local_90 = _DAT_006c0d98 + local_98;
  local_7c = *(short *)(&DAT_007929d8 + local_74 * 2) + *(short *)(&DAT_00792830 + local_74 * 2) +
             *(short *)(&DAT_007920f8 + local_74 * 2) + *(short *)(&DAT_00792820 + local_74 * 2) +
             *(short *)(&DAT_00792218 + local_74 * 2) + *(short *)(&DAT_00792248 + local_74 * 2) +
             *(short *)(&DAT_007925c0 + local_74 * 2) + *(short *)(&DAT_007926fc + local_74 * 2) +
             *(short *)(&DAT_00792f78 + local_74 * 2) + *(short *)(&DAT_007920e8 + local_74 * 2);
  local_88 = ((double)(int)*(short *)(&DAT_007926fc + local_74 * 2) * (1.0 - local_a0)) /
             (double)(int)local_7c +
             ((double)(int)*(short *)(&DAT_007925c0 + local_74 * 2) * (1.0 - local_a8)) /
             (double)(int)local_7c +
             ((double)(int)*(short *)(&DAT_00792248 + local_74 * 2) * (1.0 - local_b0)) /
             (double)(int)local_7c +
             ((double)(int)*(short *)(&DAT_00792218 + local_74 * 2) * (1.0 - local_b8)) /
             (double)(int)local_7c +
             ((double)(int)*(short *)(&DAT_00792820 + local_74 * 2) * (1.0 - local_c0)) /
             (double)(int)local_7c +
             ((double)(int)*(short *)(&DAT_007920f8 + local_74 * 2) * (1.0 - local_c8)) /
             (double)(int)local_7c +
             ((double)(int)*(short *)(&DAT_00792830 + local_74 * 2) * 1.0) / (double)(int)local_7c +
             ((double)(int)*(short *)(&DAT_007929d8 + local_74 * 2) * 1.0) / (double)(int)local_7c;
  FUN_004c7c40(local_10c);
  local_8 = 0;
  FUN_00485940(local_110,1,1,1,1,0,0,0);
  local_8._0_1_ = 1;
  uVar10 = DAT_00791380;
  FUN_004a2160(&local_111);
  local_101 = FUN_004a1f00(uVar10);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_004a20f0();
  local_8 = 0xffffffff;
  FUN_00484470();
  if (local_101 != '\0') {
    local_88 = 0.0;
  }
  if (param_1 == 2) {
    local_88 = local_88 / _DAT_006be720;
  }
  else if (param_1 == 3) {
    local_88 = local_88 / _DAT_006c1050;
  }
  (&DAT_007929d0)[local_74] = 0;
  for (local_78 = 0; iVar5 = (int)local_78, iVar3 = FUN_0047f950(), iVar5 < iVar3;
      local_78 = local_78 + 1) {
    if (local_78 != local_74) {
      FUN_0047e390((int)local_78);
      iVar3 = FUN_004c7010();
      if (iVar3 == 1) {
        cVar2 = FUN_004a2440(&DAT_00793010 + local_74 * 4);
        if (cVar2 != '\0') {
          (&DAT_007929d0)[local_74] = 1;
        }
        local_e0 = 0.0;
        fVar6 = (float10)FUN_004eccb0(local_78,CONCAT22(extraout_var_00,(undefined2)param_2));
        local_d8 = (double)fVar6;
        if (local_d8 * *(double *)(&DAT_007929e8 + local_78 * 8 + local_74 * 0x40) <= local_68) {
          FUN_0047e390((int)local_78);
          local_f4 = FUN_004c7050();
          local_fc = FUN_004f6880(CONCAT22(extraout_var,(undefined2)local_f4));
          local_f8 = FUN_004f6930(CONCAT22(extraout_var_01,(undefined2)local_f4));
          local_100 = FUN_004f6a90(local_f4 & 0xffff);
          local_100 = local_100 - local_fc;
          local_f0 = FUN_004f6b20(local_f4 & 0xffff);
          local_f0 = local_f0 - local_f8;
          if (local_fc < 0) {
            FUN_005e9f20("shCurrentBets >= 0","..\\Casino\\PokerStudAI.cpp",0xdfc);
          }
          if (local_f8 < 0) {
            FUN_005e9f20("shCurrentCalls >= 0","..\\Casino\\PokerStudAI.cpp",0xdfd);
          }
          if (local_100 < 0) {
            FUN_005e9f20("shOldBets >= 0","..\\Casino\\PokerStudAI.cpp",0xdfe);
          }
          if (local_f0 < 0) {
            FUN_005e9f20("shOldCalls >= 0","..\\Casino\\PokerStudAI.cpp",0xdff);
          }
          local_e9 = '\0';
          fVar6 = (float10)FUN_004ebad0();
          iVar4 = (int)local_100;
          fVar7 = (float10)FUN_004ebba0();
          iVar3 = (int)local_f0;
          fVar8 = (float10)FUN_004ebc70();
          iVar5 = (int)local_fc;
          fVar9 = (float10)FUN_004ebd40();
          local_e0 = (double)((float10)(int)local_f8 * fVar9 +
                             (float10)(double)((float10)iVar5 * fVar8 +
                                              (float10)(double)((float10)iVar3 * fVar7 +
                                                               (float10)(double)((float10)1 +
                                                                                (float10)iVar4 *
                                                                                fVar6))));
        }
        else {
          local_e9 = '\x01';
        }
        local_e8 = (double)(*(int *)(&DAT_00792be8 + local_78 * 4 + local_74 * 0x20) +
                            *(int *)(&DAT_00792108 + local_78 * 4 + local_74 * 0x20) +
                           *(int *)(&DAT_00791ed8 + local_78 * 4 + local_74 * 0x20));
        if (local_e9 == '\0') {
          dVar1 = ((local_88 + 1.0) -
                  ((double)*(int *)(&DAT_00792be8 + local_78 * 4 + local_74 * 0x20) / local_e8) *
                  local_e0) -
                  ((double)*(int *)(&DAT_00792108 + local_78 * 4 + local_74 * 0x20) / local_e8) *
                  local_e0 * _DAT_006b3e40;
        }
        else {
          dVar1 = ((local_88 + 1.0) -
                  (double)*(int *)(&DAT_00792be8 + local_78 * 4 + local_74 * 0x20) / local_e8) -
                  ((double)*(int *)(&DAT_00792108 + local_78 * 4 + local_74 * 0x20) / local_e8) *
                  _DAT_006b3e40;
        }
        local_70 = dVar1 * local_70;
        if (local_70 < 0.0) {
          local_70 = 0.0;
        }
      }
    }
  }
  local_70 = local_70 * *(double *)(&DAT_00792e38 + local_74 * 8);
  if (_DAT_006b4b00 < local_70) {
    local_70 = _DAT_006b4b00;
  }
  ExceptionList = local_10;
  return (float10)local_70;
}

