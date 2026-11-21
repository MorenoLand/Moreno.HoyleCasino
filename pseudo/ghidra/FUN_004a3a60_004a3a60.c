// FUN_004a3a60  004a3a60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_004a3a60(int param_1,uint param_2)

{
  double dVar1;
  double dVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  int iVar6;
  int iVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  undefined1 local_9c [8];
  undefined1 local_94 [4];
  undefined1 local_90 [8];
  undefined1 local_88 [8];
  undefined1 local_80 [16];
  double local_70;
  double local_68;
  short local_5c;
  undefined1 local_55;
  short local_54;
  short local_50;
  short local_4c;
  short local_48;
  uint local_44;
  short local_40;
  char local_39;
  double local_38;
  double local_30;
  short local_28;
  int local_24;
  double local_20;
  double local_18;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a11ad;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_24 = FUN_0047e420(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_20 = 1.0;
  fVar8 = (float10)FUN_004cbe00();
  local_18 = (double)(fVar8 / (float10)(int)param_2);
  for (local_28 = 0; iVar7 = (int)local_28, iVar4 = FUN_0047f950(), iVar7 < iVar4;
      local_28 = local_28 + 1) {
    if (local_28 != local_24) {
      FUN_0047e390((int)local_28);
      iVar4 = FUN_004c7010();
      if (iVar4 == 1) {
        local_38 = 0.0;
        fVar8 = (float10)FUN_004cfe20(CONCAT22(extraout_var,local_28),param_2 & 0xffff);
        local_30 = (double)fVar8;
        if (local_30 * *(double *)(&DAT_00791ae0 + local_28 * 8 + local_24 * 0x40) <= local_18) {
          FUN_0047e390((int)local_28);
          local_44 = FUN_004c7050();
          local_50 = FUN_004f6880(CONCAT22(extraout_var_02,(undefined2)local_44));
          local_48 = FUN_004f6930(local_44 & 0xffff);
          local_54 = FUN_004f6a90(CONCAT22(extraout_var_00,(undefined2)local_44));
          local_54 = local_54 - local_50;
          local_40 = FUN_004f6b20(CONCAT22(extraout_var_01,(undefined2)local_44));
          local_40 = local_40 - local_48;
          if (local_50 < 0) {
            FUN_005e9f20("shCurrentBets >= 0","..\\Casino\\PokerHoldemAI.cpp",0x12f);
          }
          if (local_48 < 0) {
            FUN_005e9f20("shCurrentCalls >= 0","..\\Casino\\PokerHoldemAI.cpp",0x130);
          }
          if (local_54 < 0) {
            FUN_005e9f20("shOldBets >= 0","..\\Casino\\PokerHoldemAI.cpp",0x131);
          }
          if (local_40 < 0) {
            FUN_005e9f20("shOldCalls >= 0","..\\Casino\\PokerHoldemAI.cpp",0x132);
          }
          local_39 = '\0';
          fVar8 = (float10)FUN_004cbe60();
          iVar4 = (int)local_54;
          fVar11 = (float10)FUN_004cbf30();
          iVar7 = (int)local_40;
          fVar9 = (float10)FUN_004cc000();
          iVar6 = (int)local_50;
          fVar10 = (float10)FUN_004cc0d0();
          local_38 = (double)((float10)(int)local_48 * fVar10 +
                             (float10)(double)((float10)iVar6 * fVar9 +
                                              (float10)(double)((float10)iVar7 * fVar11 +
                                                               (float10)(double)((float10)1 +
                                                                                (float10)iVar4 *
                                                                                fVar8))));
          uVar5 = FUN_004c7c40(local_88);
          local_8 = 0;
          FUN_004c7c40(local_80);
          local_8._0_1_ = 1;
          FUN_004845f0(local_90,uVar5);
          local_8._0_1_ = 2;
          FUN_00485940(local_94,1,1,1,1,0,0,0);
          local_8._0_1_ = 3;
          FUN_004a2160(&local_55);
          local_8._0_1_ = 2;
          FUN_004a20f0();
          local_8._0_1_ = 1;
          FUN_00484470();
          local_8 = (uint)local_8._1_3_ << 8;
          FUN_00484470();
          local_8 = 0xffffffff;
          FUN_00484470();
          FUN_004c7c40(local_9c);
          local_8 = 4;
          local_4c = FUN_00484bf0();
          local_8 = 0xffffffff;
          FUN_00484470();
          if ((local_4c == 3) && (cVar3 = FUN_004a1e70(DAT_007913a0), cVar3 != '\0')) {
            local_38 = local_38 * *(double *)(&DAT_00791d40 + local_24 * 8);
          }
          else if ((local_4c == 4) && (cVar3 = FUN_004a1e70(DAT_007913a0), cVar3 != '\0')) {
            local_38 = local_38 * *(double *)(&DAT_007917e8 + local_24 * 8);
          }
        }
        else {
          local_39 = '\x01';
        }
        for (local_5c = 5; -1 < local_5c; local_5c = local_5c + -1) {
          local_68 = (double)(*(int *)(&DAT_007915c8 + local_5c * 4 + local_24 * 0x18) +
                              *(int *)(&DAT_007919d8 + local_5c * 4 + local_24 * 0x18) +
                             *(int *)(&DAT_00791460 + local_5c * 4 + local_24 * 0x18));
          if (local_39 == '\0') {
            fVar8 = (float10)FUN_004cfb30(local_28,local_5c + 1,
                                          CONCAT22((short)((uint)(local_24 * 0x18) >> 0x10),
                                                   (undefined2)param_2));
            local_70 = (double)fVar8;
            local_20 = ((1.0 - ((double)*(int *)(&DAT_007915c8 + local_5c * 4 + local_24 * 0x18) /
                               local_68) * local_38 * local_70) -
                       ((double)*(int *)(&DAT_007919d8 + local_5c * 4 + local_24 * 0x18) / local_68)
                       * local_38 * _DAT_006b3e40 * local_70) * local_20;
          }
          else {
            dVar1 = (double)*(int *)(&DAT_007915c8 + local_5c * 4 + local_24 * 0x18) / local_68;
            fVar8 = (float10)FUN_0048e500(local_5c + 1);
            dVar2 = (double)*(int *)(&DAT_007919d8 + local_5c * 4 + local_24 * 0x18) / local_68;
            fVar11 = (float10)FUN_0048e500(local_5c + 1);
            local_20 = (double)(((float10)(double)((float10)1 - fVar8 * (float10)dVar1) -
                                fVar11 * (float10)dVar2 * (float10)_DAT_006b3e40) *
                               (float10)local_20);
          }
          if (local_20 < 0.0) {
            local_20 = 0.0;
          }
        }
      }
    }
  }
  local_20 = local_20 * *(double *)(&DAT_00791dd0 + local_24 * 8);
  if (param_1 < 5) {
    fVar8 = (float10)FUN_004cbe30();
    local_20 = ((double)*(int *)(&DAT_00791a98 + local_24 * 4) / (_DAT_006be520 - (double)param_1))
               * (double)fVar8 * *(double *)(&DAT_00791520 + local_24 * 8) + local_20;
  }
  if (_DAT_006b4b00 < local_20) {
    local_20 = _DAT_006b4b00;
  }
  ExceptionList = local_10;
  return (float10)local_20;
}

