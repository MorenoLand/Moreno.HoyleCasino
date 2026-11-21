// FUN_0046fd10  0046fd10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0046fd10(char param_1,uint param_2,char param_3)

{
  double dVar1;
  bool bVar2;
  undefined2 uVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  double local_64;
  short local_5c;
  short local_58;
  short local_54;
  short local_50;
  short local_48;
  double local_34;
  short local_20;
  double local_14;
  
  iVar6 = FUN_0047e420();
  local_14 = 1.0;
  fVar9 = (float10)FUN_004e9480();
  local_20 = 0;
  do {
    iVar7 = FUN_0047f950();
    if (iVar7 <= local_20) {
      if ((&DAT_007912e0)[iVar6] != '\0') {
        sVar5 = FUN_004eaf20(*(undefined2 *)(&DAT_00791030 + iVar6 * 2));
        local_14 = (double)(int)sVar5 / _DAT_006bc208;
      }
      local_14 = local_14 * *(double *)(&DAT_007912a0 + iVar6 * 8);
      if (_DAT_006b4b00 < local_14) {
        local_14 = _DAT_006b4b00;
      }
      return (float10)local_14;
    }
    if (local_20 != iVar6) {
      iVar7 = FUN_0047e390((int)local_20);
      iVar8 = FUN_004c7010();
      if (iVar8 == 1) {
        local_34 = 0.0;
        fVar10 = (float10)FUN_004ea970(CONCAT22(extraout_var,local_20),param_2 & 0xffff);
        iVar8 = (uint)(ushort)(local_20 >> 0xf) << 0x10;
        if ((double)fVar10 * *(double *)(&DAT_00791060 + local_20 * 8 + iVar6 * 0x40) <=
            (double)(fVar9 / (float10)(int)param_2)) {
          uVar3 = FUN_004c7050();
          if (param_1 == '\0') {
            sVar5 = FUN_004f6880(uVar3);
            sVar4 = FUN_004f6930(CONCAT22(extraout_var_01,uVar3));
            local_5c = FUN_004f6a90(uVar3);
            local_5c = local_5c - sVar5;
            local_48 = FUN_004f6b20(uVar3);
            local_48 = local_48 - sVar4;
LAB_0046fed1:
            if ((sVar4 == 0) && (sVar5 == 0)) {
              local_54 = FUN_004f69e0(uVar3);
            }
            else {
              local_54 = 0;
            }
          }
          else {
            sVar5 = FUN_004f6a90(CONCAT22(extraout_var_00,uVar3));
            sVar4 = FUN_004f6b20(uVar3);
            local_5c = 0;
            local_48 = 0;
            if ((sVar4 != 0) || (sVar5 != 0)) goto LAB_0046fed1;
            local_54 = FUN_004f6bb0(uVar3);
          }
          local_58 = sVar5;
          local_50 = sVar4;
          if (param_3 != '\0') {
            local_58 = 0;
            local_50 = 0;
            local_5c = sVar5;
            local_48 = sVar4;
          }
          local_64 = 0.0;
          if ((param_1 == '\0') && (*(int *)(iVar7 + 0x18) == 0)) {
            fVar10 = (float10)FUN_004e9830();
            local_64 = (double)fVar10;
          }
          else if ((param_1 == '\0') && (*(int *)(iVar7 + 0x18) == 1)) {
            fVar10 = (float10)FUN_004e9910();
            local_64 = (double)fVar10;
          }
          else if ((param_1 == '\0') && (1 < *(int *)(iVar7 + 0x18))) {
            fVar10 = (float10)FUN_004e99f0();
            local_64 = (double)fVar10;
          }
          if (param_3 != '\0') {
            if (*(int *)(iVar7 + 0x18) == 1) {
              fVar10 = (float10)FUN_004e9910();
              local_64 = (double)fVar10;
            }
            else if (*(int *)(iVar7 + 0x18) < 2) {
              fVar10 = (float10)FUN_004e9830();
              local_64 = (double)fVar10;
            }
            else {
              fVar10 = (float10)FUN_004e99f0();
              local_64 = (double)fVar10;
            }
          }
          if (local_58 < 0) {
            FUN_005e9f20("shCurrentBets >= 0","..\\Casino\\PokerDrawai.cpp",0x3c5);
          }
          if (local_50 < 0) {
            FUN_005e9f20("shCurrentCalls >= 0","..\\Casino\\PokerDrawai.cpp",0x3c6);
          }
          if (local_54 < 0) {
            FUN_005e9f20("shCurrentChecks >= 0","..\\Casino\\PokerDrawai.cpp",0x3c7);
          }
          if (local_5c < 0) {
            FUN_005e9f20("shOldBets >= 0","..\\Casino\\PokerDrawai.cpp",0x3c8);
          }
          if (local_48 < 0) {
            FUN_005e9f20("shOldCalls >= 0","..\\Casino\\PokerDrawai.cpp",0x3c9);
          }
          bVar2 = false;
          fVar10 = (float10)FUN_004e94b0();
          fVar11 = (float10)FUN_004e9590();
          fVar12 = (float10)FUN_004e9670();
          fVar13 = (float10)FUN_004e9750();
          sVar5 = FUN_004e9390();
          iVar8 = (int)sVar5;
          local_34 = ((double)((float10)(int)local_50 * fVar13 +
                              (float10)(double)((float10)(int)local_58 * fVar12 +
                                               (float10)(double)((float10)(int)local_48 * fVar11 +
                                                                (float10)(double)((float10)1 +
                                                                                 (float10)(int)
                                                  local_5c * fVar10)))) -
                     (double)(int)local_54 * ((double)iVar8 / _DAT_006bc280)) + local_64;
        }
        else {
          bVar2 = true;
        }
        sVar5 = FUN_004eaf20(CONCAT22((short)((uint)iVar8 >> 0x10),
                                      *(undefined2 *)(&DAT_00791030 + iVar6 * 2)));
        dVar1 = (double)(int)sVar5 / _DAT_006bc208;
        if (!bVar2) {
          dVar1 = 1.0 - (1.0 - dVar1) * local_34;
        }
        local_14 = local_14 * dVar1;
        if (local_14 < 0.0) {
          local_14 = 0.0;
        }
      }
    }
    local_20 = local_20 + 1;
  } while( true );
}

