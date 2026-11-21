// FUN_0046dc80  0046dc80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0046dc80(char param_1,int param_2)

{
  char cVar1;
  double dVar2;
  bool bVar3;
  undefined2 uVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 extraout_ST0;
  double local_64;
  short local_5c;
  short local_58;
  short local_54;
  short local_50;
  short local_48;
  double local_34;
  short local_24;
  double local_1c;
  
  iVar6 = FUN_0047e420();
  local_1c = 1.0;
  fVar8 = (float10)FUN_004dfad0();
  cVar1 = *(char *)(DAT_00791048 + 0x1d);
  for (local_24 = 0; iVar7 = FUN_0047f950(), local_24 < iVar7; local_24 = local_24 + 1) {
    if (local_24 != iVar6) {
      FUN_0047e390((int)local_24);
      iVar7 = FUN_004c7010();
      if (iVar7 == 1) {
        local_34 = 0.0;
        fVar9 = (float10)FUN_004e1020(local_24,CONCAT22(extraout_var,(undefined2)param_2));
        if ((double)fVar9 * *(double *)(&DAT_00791060 + local_24 * 8 + iVar6 * 0x40) <=
            (double)(fVar8 / (float10)param_2)) {
          FUN_0047e390((int)local_24);
          uVar4 = FUN_004c7050();
          if (param_1 == '\0') {
            local_58 = FUN_004f6880(uVar4);
            local_50 = FUN_004f6930(CONCAT22(extraout_var_01,uVar4));
            local_5c = FUN_004f6a90(uVar4);
            local_5c = local_5c - local_58;
            local_48 = FUN_004f6b20(uVar4);
            local_48 = local_48 - local_50;
            local_58 = local_58 << 1;
            local_50 = local_50 << 1;
          }
          else {
            local_58 = FUN_004f6a90(CONCAT22(extraout_var_00,uVar4));
            local_50 = FUN_004f6b20(uVar4);
            local_5c = 0;
            local_48 = 0;
          }
          if (cVar1 != '\0') {
            local_58 = local_58 << 1;
            local_50 = local_50 << 1;
          }
          if (((param_1 == '\0') || (local_50 != 0)) || (local_58 != 0)) {
            local_54 = 0;
          }
          else {
            local_54 = FUN_004f6bb0(uVar4);
          }
          local_64 = 0.0;
          if ((param_1 == '\0') &&
             (iVar7 = FUN_0047e390((int)local_24), *(int *)(iVar7 + 0x18) == 0)) {
            fVar9 = (float10)FUN_004dfe40();
            local_64 = (double)fVar9;
          }
          else if ((param_1 == '\0') &&
                  (iVar7 = FUN_0047e390((int)local_24), *(int *)(iVar7 + 0x18) == 1)) {
            fVar9 = (float10)FUN_004dff10();
            local_64 = (double)fVar9;
          }
          else if ((param_1 == '\0') &&
                  (iVar7 = FUN_0047e390((int)local_24), *(int *)(iVar7 + 0x18) == 2)) {
            fVar9 = (float10)FUN_004dffe0();
            local_64 = (double)fVar9;
          }
          else if ((param_1 == '\0') &&
                  (iVar7 = FUN_0047e390((int)local_24), *(int *)(iVar7 + 0x18) == 3)) {
            fVar9 = (float10)FUN_004e00b0();
            local_64 = (double)fVar9;
          }
          if (local_58 < 0) {
            FUN_005e9f20("shCurrentBets >= 0","..\\Casino\\PokerDrawai.cpp",0x95);
          }
          if (local_50 < 0) {
            FUN_005e9f20("shCurrentCalls >= 0","..\\Casino\\PokerDrawai.cpp",0x96);
          }
          if (local_54 < 0) {
            FUN_005e9f20("shCurrentChecks >= 0","..\\Casino\\PokerDrawai.cpp",0x97);
          }
          if (local_5c < 0) {
            FUN_005e9f20("shOldBets >= 0","..\\Casino\\PokerDrawai.cpp",0x98);
          }
          if (local_48 < 0) {
            FUN_005e9f20("shOldCalls >= 0","..\\Casino\\PokerDrawai.cpp",0x99);
          }
          bVar3 = false;
          fVar9 = (float10)FUN_004dfb00();
          fVar10 = (float10)FUN_004dfbd0();
          fVar11 = (float10)FUN_004dfca0();
          fVar12 = (float10)FUN_004dfd70();
          sVar5 = FUN_004df9e0();
          local_34 = ((double)((float10)(int)local_50 * fVar12 +
                              (float10)(double)((float10)(int)local_58 * fVar11 +
                                               (float10)(double)((float10)(int)local_48 * fVar10 +
                                                                (float10)(double)((float10)1 +
                                                                                 (float10)(int)
                                                  local_5c * fVar9)))) -
                     (double)(int)local_54 * ((double)(int)sVar5 / _DAT_006b4b00)) + local_64;
          iVar7 = FUN_0047e390((int)local_24);
          if (*(char *)(iVar7 + 0x1d) != '\0') {
            FUN_004e00b0();
            local_34 = (double)(extraout_ST0 + (float10)local_34);
          }
        }
        else {
          bVar3 = true;
        }
        sVar5 = FUN_004e15d0(*(undefined2 *)(&DAT_00791030 + iVar6 * 2));
        dVar2 = (double)(int)sVar5 / _DAT_006bc208;
        if (!bVar3) {
          dVar2 = 1.0 - (1.0 - dVar2) * local_34;
        }
        local_1c = local_1c * dVar2;
        if (local_1c < 0.0) {
          local_1c = 0.0;
        }
        if (((param_1 == '\0') &&
            (iVar7 = FUN_0047e390((int)local_24), *(char *)(iVar7 + 0x1d) != '\0')) &&
           (*(short *)(&DAT_00791030 + iVar6 * 2) < 0xf)) {
          local_1c = 0.0;
        }
      }
    }
  }
  if ((&DAT_007912e0)[iVar6] != '\0') {
    sVar5 = FUN_004e15d0(*(undefined2 *)(&DAT_00791030 + iVar6 * 2));
    local_1c = (double)(int)sVar5 / _DAT_006bc208;
  }
  local_1c = local_1c * *(double *)(&DAT_007912a0 + iVar6 * 8);
  if (_DAT_006b4b00 < local_1c) {
    local_1c = _DAT_006b4b00;
  }
  return (float10)local_1c;
}

