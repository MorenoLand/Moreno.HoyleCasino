// FUN_00502ed0  00502ed0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00502ed0(int param_1,int param_2,int param_3)

{
  double dVar1;
  bool bVar2;
  char cVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 extraout_ECX;
  undefined2 uVar11;
  int iVar12;
  float10 fVar13;
  undefined8 uVar14;
  int local_400;
  undefined1 *local_3fc;
  int local_3f8;
  undefined4 local_3f4;
  undefined *puStack_3f0;
  undefined *puStack_3ec;
  undefined *puStack_3e8;
  undefined *puStack_3e4;
  undefined *puStack_3e0;
  undefined *puStack_3dc;
  undefined *puStack_3d8;
  char *pcStack_3d4;
  char *pcStack_3d0;
  undefined1 *puStack_3cc;
  uint uStack_3c8;
  int local_3bc;
  int local_3b8;
  int local_3b4;
  char local_2d8;
  undefined1 local_21c [8];
  undefined1 *local_214;
  undefined1 *local_210;
  undefined1 *local_20c;
  undefined1 local_204 [8];
  undefined1 local_1fc;
  undefined1 local_1fb;
  undefined1 local_1fa;
  undefined1 local_1f9;
  undefined1 local_1f8;
  undefined1 local_1f7;
  undefined1 local_1f6;
  undefined1 local_1f5;
  undefined1 local_1f4;
  undefined1 local_1f3;
  undefined1 local_1f2;
  undefined1 local_1f1;
  undefined1 local_1f0;
  undefined1 local_1ef;
  undefined1 local_1ee;
  undefined1 local_1ed;
  undefined1 local_1ec [8];
  undefined1 local_1e4 [10];
  undefined1 local_1da;
  undefined1 local_1d9;
  undefined1 local_1d8 [9];
  char local_1cf;
  undefined1 local_1ce;
  undefined1 local_1cd;
  undefined1 local_1cc [10];
  char local_1c2;
  undefined1 local_1c1;
  undefined1 local_1c0;
  undefined1 local_1bf;
  undefined1 local_1be;
  undefined1 local_1bd;
  undefined1 local_1bc [8];
  undefined1 local_1b4 [8];
  undefined1 local_1ac;
  undefined1 local_1ab;
  undefined1 local_1aa;
  undefined1 local_1a9;
  undefined1 local_1a8 [8];
  undefined1 local_1a0 [11];
  undefined1 local_195;
  undefined1 local_194 [11];
  char local_189;
  undefined1 local_188;
  undefined1 local_187;
  undefined1 local_186;
  undefined1 local_185;
  undefined1 local_184 [8];
  undefined1 local_17c [10];
  undefined1 local_172;
  char local_171;
  undefined1 local_170 [11];
  char local_165;
  undefined1 local_164;
  undefined1 local_163;
  undefined1 local_162;
  undefined1 local_161;
  undefined1 local_160 [9];
  undefined1 local_157;
  undefined1 local_156;
  undefined1 local_155;
  undefined1 local_154 [10];
  undefined1 local_14a;
  undefined1 local_149;
  undefined1 local_148 [8];
  undefined1 *local_140;
  undefined1 *local_13c;
  undefined1 local_134 [8];
  undefined1 *local_12c;
  undefined1 *local_128;
  undefined1 *local_124;
  undefined1 local_11c [8];
  undefined1 local_114 [8];
  undefined1 local_10c [12];
  undefined1 local_100 [8];
  undefined1 local_f8 [11];
  char local_ed;
  int local_ec;
  double local_e8;
  double local_e0;
  int local_d4;
  double local_d0;
  short local_c4;
  short local_c0;
  undefined1 local_bc [11];
  char local_b1;
  short local_b0;
  undefined1 local_ac [8];
  undefined1 local_a4 [8];
  undefined1 local_9c [8];
  short local_94;
  undefined1 local_90 [8];
  undefined1 local_88 [4];
  undefined local_84 [4];
  undefined1 local_80 [4];
  undefined local_7c [4];
  undefined1 local_78 [4];
  undefined local_74 [4];
  undefined local_70 [4];
  undefined1 local_6c [8];
  undefined1 local_64 [8];
  undefined local_5c [4];
  undefined local_58 [4];
  undefined local_54 [4];
  undefined local_50 [4];
  undefined1 *local_4c;
  int local_48;
  undefined2 local_44;
  undefined1 local_40 [8];
  short local_38;
  short local_34;
  undefined1 local_30 [8];
  short local_28;
  undefined1 *local_24;
  int local_20;
  undefined2 local_1c;
  int local_18;
  short local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a2f92;
  local_10 = ExceptionList;
  uStack_3c8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  bVar2 = false;
  puStack_3cc = (undefined1 *)0x502f0f;
  local_18 = FUN_0047e420();
  if (local_18 < 0) {
    puStack_3cc = (undefined1 *)0x917;
    pcStack_3d0 = "..\\Casino\\PokerStudAI.cpp";
    pcStack_3d4 = "currentPlayer >= 0";
    puStack_3d8 = (undefined *)0x502f2c;
    FUN_005e9f20();
  }
  puStack_3cc = (undefined1 *)0x502f3a;
  iVar8 = FUN_0047f950();
  if (iVar8 <= local_18) {
    puStack_3cc = (undefined1 *)0x918;
    pcStack_3d0 = "..\\Casino\\PokerStudAI.cpp";
    pcStack_3d4 = "currentPlayer < pokerGame->GetNumberOfPlayersAtTable()";
    puStack_3d8 = (undefined *)0x502f53;
    FUN_005e9f20();
  }
  puStack_3cc = (undefined1 *)0x502f61;
  DAT_007926f8 = FUN_0047e3b0();
  if ((short)(&DAT_00792de8)[local_18] == param_1) {
    if (((((*(short *)(&DAT_00792980 + local_18 * 2) == param_3) ||
          (*(short *)(&DAT_00792498 + local_18 * 2) == 6)) ||
         (*(short *)(&DAT_00792498 + local_18 * 2) == 7)) ||
        ((*(short *)(&DAT_00792498 + local_18 * 2) == 8 ||
         (*(short *)(&DAT_00792498 + local_18 * 2) == 9)))) ||
       (*(short *)(&DAT_00792498 + local_18 * 2) == 2)) {
      puStack_3cc = (undefined1 *)param_3;
      pcStack_3d0 = (char *)param_2;
      pcStack_3d4 = (char *)param_1;
      puStack_3d8 = (undefined *)0x505dad;
      fVar13 = (float10)FUN_00506b90();
      *(double *)(&DAT_00792df8 + local_18 * 8) = (double)fVar13;
    }
    else {
      *(short *)(&DAT_00792980 + local_18 * 2) = (short)param_3;
      puStack_3cc = (undefined1 *)param_3;
      pcStack_3d0 = (char *)param_2;
      pcStack_3d4 = (char *)param_1;
      puStack_3d8 = (undefined *)0x505d80;
      fVar13 = (float10)FUN_00506b90();
      *(double *)(&DAT_00792df8 + local_18 * 8) = (double)fVar13;
      *(undefined2 *)(&DAT_00792498 + local_18 * 2) = 1;
    }
  }
  else {
    (&DAT_007926f0)[local_18] = 0;
    local_28 = 0;
    local_38 = 0;
    while( true ) {
      iVar12 = (int)local_38;
      puStack_3cc = (undefined1 *)0x502fad;
      iVar8 = FUN_0047f950();
      if (iVar8 <= iVar12) break;
      if (local_38 != local_18) {
        puStack_3cc = (undefined1 *)(int)local_38;
        pcStack_3d0 = (char *)0x502fd0;
        FUN_0047e390();
        puStack_3cc = (undefined1 *)0x502fd7;
        iVar8 = FUN_004c7010();
        if (iVar8 == 1) {
          puStack_3cc = (undefined1 *)(int)local_38;
          pcStack_3d0 = (char *)0x502ff0;
          FUN_0047e390();
          puStack_3cc = (undefined1 *)0x502ff7;
          puStack_3cc = (undefined1 *)FUN_004c7050();
          pcStack_3d0 = (char *)0x503006;
          sVar4 = FUN_004f6a90();
          local_28 = local_28 + sVar4;
          puStack_3cc = (undefined1 *)0x50301e;
          iVar8 = FUN_0047d770();
          if (iVar8 == 3) {
            puStack_3cc = local_40;
            pcStack_3d0 = (char *)(int)local_38;
            pcStack_3d4 = (char *)0x50303b;
            FUN_0047e390();
            pcStack_3d0 = (char *)0x503042;
            FUN_004c8300();
            local_8 = 0;
            puStack_3cc = (undefined1 *)DAT_0079076c;
            pcStack_3d0 = (char *)DAT_007907a4;
            pcStack_3d4 = (char *)0x503062;
            puStack_3cc = (undefined1 *)FUN_00464130();
            local_8._0_1_ = 1;
            pcStack_3d0 = (char *)0x503087;
            local_ed = FUN_00484ba0();
            local_8 = (uint)local_8._1_3_ << 8;
            puStack_3cc = (undefined1 *)0x50309c;
            FUN_00464210();
            if (local_ed != '\0') {
              (&DAT_007926f0)[local_18] = 1;
            }
            local_8 = 0xffffffff;
            puStack_3cc = (undefined1 *)0x5030c0;
            FUN_00484470();
          }
        }
      }
      local_38 = local_38 + 1;
    }
    puStack_3cc = (undefined1 *)0x5030d0;
    local_34 = FUN_004d9140();
    local_34 = local_34 / 2;
    puStack_3cc = (undefined1 *)(int)local_34;
    pcStack_3d0 = (char *)0x5030e6;
    sVar5 = FUN_0062fbf0();
    puStack_3cc = (undefined1 *)(int)local_34;
    pcStack_3d0 = (char *)0x5030f5;
    sVar6 = FUN_0062fbf0();
    sVar4 = local_28;
    puStack_3cc = (undefined1 *)0x503109;
    sVar7 = FUN_004d9100();
    puStack_3cc = (undefined1 *)(sVar7 + 1);
    pcStack_3d0 = (char *)0x503115;
    sVar7 = FUN_0062fbf0();
    *(short *)(&DAT_007925b0 + local_18 * 2) = (sVar5 - sVar6) - sVar4 * sVar7;
    puStack_3cc = (undefined1 *)0x503130;
    FUN_00484300();
    local_8 = 2;
    puStack_3cc = (undefined1 *)0x503142;
    iVar8 = FUN_0047d6f0();
    if (iVar8 == 2) {
      puStack_3cc = local_f8;
      pcStack_3d0 = (char *)0x503159;
      puStack_3cc = (undefined1 *)FUN_004c8210();
      local_8._0_1_ = 3;
      pcStack_3d0 = (char *)0x50317e;
      FUN_00484490();
      local_8 = CONCAT31(local_8._1_3_,2);
      puStack_3cc = (undefined1 *)0x50318d;
      FUN_00484470();
    }
    else {
      puStack_3cc = local_100;
      pcStack_3d0 = (char *)0x5031a1;
      puStack_3cc = (undefined1 *)FUN_004c7c40();
      local_8._0_1_ = 4;
      pcStack_3d0 = (char *)0x5031c6;
      FUN_00484490();
      local_8 = CONCAT31(local_8._1_3_,2);
      puStack_3cc = (undefined1 *)0x5031d5;
      FUN_00484470();
    }
    puStack_3cc = (undefined1 *)0x5031dd;
    FUN_004646a0();
    local_8._0_1_ = 5;
    puStack_3cc = (undefined1 *)0x5031e9;
    FUN_004646f0();
    puStack_3cc = (undefined1 *)0x5031f4;
    iVar8 = FUN_0047d6f0();
    if (iVar8 == 2) {
      puStack_3cc = (undefined1 *)DAT_0079076c;
      pcStack_3d0 = (char *)DAT_007907b0;
      pcStack_3d4 = (char *)0x503215;
      puStack_3cc = (undefined1 *)FUN_00464130();
      local_8._0_1_ = 6;
      pcStack_3d0 = (char *)0x50323a;
      FUN_004648b0();
      local_8._0_1_ = 5;
      puStack_3cc = (undefined1 *)0x503249;
      FUN_00464210();
      puStack_3cc = (undefined1 *)DAT_00790780;
      pcStack_3d0 = (char *)DAT_0079077c;
      pcStack_3d4 = (char *)0x503261;
      puStack_3cc = (undefined1 *)FUN_00464130();
      local_8._0_1_ = 7;
      pcStack_3d0 = (char *)0x503286;
      FUN_00464770();
      local_8._0_1_ = 5;
      puStack_3cc = (undefined1 *)0x503295;
      FUN_00464210();
    }
    puStack_3cc = local_30;
    pcStack_3d0 = (char *)0x5032a1;
    FUN_004649c0();
    local_38 = 0;
    while( true ) {
      iVar12 = (int)local_38;
      puStack_3cc = (undefined1 *)0x5032c4;
      iVar8 = FUN_0047f950();
      if (iVar8 <= iVar12) break;
      if (local_38 != local_18) {
        puStack_3cc = (undefined1 *)(int)local_38;
        pcStack_3d0 = (char *)0x5032e3;
        FUN_0047e390();
        puStack_3cc = (undefined1 *)0x5032ea;
        iVar8 = FUN_004c7010();
        if (iVar8 != 0) {
          puStack_3cc = local_10c;
          pcStack_3d0 = (char *)(int)local_38;
          pcStack_3d4 = (char *)0x503305;
          FUN_0047e390();
          pcStack_3d0 = (char *)0x50330c;
          puStack_3cc = (undefined1 *)FUN_004c8300();
          local_8._0_1_ = 8;
          pcStack_3d0 = (char *)0x503331;
          FUN_004649c0();
          local_8._0_1_ = 5;
          puStack_3cc = (undefined1 *)0x503340;
          FUN_00484470();
        }
      }
      local_38 = local_38 + 1;
    }
    puStack_3cc = &DAT_007920e8 + local_18 * 2;
    pcStack_3d0 = &DAT_00792f78 + local_18 * 2;
    pcStack_3d4 = &DAT_007926fc + local_18 * 2;
    puStack_3d8 = &DAT_007925c0 + local_18 * 2;
    puStack_3dc = &DAT_00792248 + local_18 * 2;
    puStack_3e0 = &DAT_00792218 + local_18 * 2;
    puStack_3e4 = &DAT_00792820 + local_18 * 2;
    puStack_3e8 = &DAT_007920f8 + local_18 * 2;
    puStack_3ec = &DAT_00792830 + local_18 * 2;
    puStack_3f0 = &DAT_007929d8 + local_18 * 2;
    local_3fc = local_24;
    local_3f8 = local_20;
    local_3f4 = CONCAT22(local_3f4._2_2_,local_1c);
    local_400 = 0x5033d3;
    FUN_004958e0();
    puStack_3cc = (undefined1 *)0x5033de;
    iVar8 = FUN_0047d770();
    if (iVar8 == 0) {
      puStack_3cc = &DAT_007925e0 + local_18 * 2;
      pcStack_3d0 = &DAT_00792238 + local_18 * 2;
      pcStack_3d4 = &DAT_007929b0 + local_18 * 2;
      puStack_3d8 = &DAT_00792228 + local_18 * 2;
      puStack_3dc = &DAT_007920d8 + local_18 * 2;
      puStack_3e0 = &DAT_00791ec8 + local_18 * 2;
      puStack_3e4 = &DAT_007929a0 + local_18 * 2;
      puStack_3e8 = &DAT_00792208 + local_18 * 2;
      puStack_3ec = &DAT_00792810 + local_18 * 2;
      puStack_3f0 = &DAT_007925d0 + local_18 * 2;
      local_3fc = local_24;
      local_3f8 = local_20;
      local_3f4 = CONCAT22(local_3f4._2_2_,local_1c);
      local_400 = 0x503474;
      FUN_004966e0();
    }
    local_38 = 0;
    while( true ) {
      iVar12 = (int)local_38;
      puStack_3cc = (undefined1 *)0x503497;
      iVar8 = FUN_0047f950();
      if (iVar8 <= iVar12) break;
      if (local_38 == local_18) {
        local_4c = local_24;
        local_48 = local_20;
        local_44 = local_1c;
        local_8._0_1_ = 9;
        puStack_3cc = local_30;
        pcStack_3d0 = (char *)0x5034d0;
        FUN_00464860();
        puStack_3cc = local_114;
        pcStack_3d0 = (char *)0x5034e2;
        puStack_3cc = (undefined1 *)FUN_004c8300();
        local_8._0_1_ = 10;
        pcStack_3d0 = (char *)0x503507;
        FUN_004649c0();
        local_8._0_1_ = 9;
        puStack_3cc = (undefined1 *)0x503516;
        FUN_00484470();
        puStack_3cc = (undefined1 *)0x503521;
        iVar8 = FUN_0047d770();
        if (iVar8 == 3) {
          puStack_3cc = (undefined1 *)0x503535;
          iVar8 = FUN_0047d6f0();
          if (iVar8 != 2) {
            puStack_3cc = (undefined1 *)0x9a4;
            pcStack_3d0 = "..\\Casino\\PokerStudAI.cpp";
            pcStack_3d4 = "pokerGame->GetWildCardRules() == THE_BITCH_WILD";
            puStack_3d8 = (undefined *)0x50354e;
            FUN_005e9f20();
          }
          puStack_3cc = (undefined1 *)DAT_0079076c;
          pcStack_3d0 = (char *)DAT_007907b0;
          pcStack_3d4 = (char *)0x503569;
          uVar9 = FUN_00464130();
          local_8 = CONCAT31(local_8._1_3_,0xb);
          puStack_3cc = local_11c;
          pcStack_3d0 = (char *)0x5035a0;
          FUN_004c8300();
          local_8 = 0xc;
          pcStack_3d0 = (char *)0x5035da;
          puStack_3cc = (undefined1 *)uVar9;
          cVar3 = FUN_00484ba0();
          if (cVar3 != '\0') {
            puStack_3cc = (undefined1 *)0x9a5;
            pcStack_3d0 = "..\\Casino\\PokerStudAI.cpp";
            pcStack_3d4 = 
            "!(currentPokerPlayer->GetLogicalStudHandShowing().ContainsCard(PokerCard(QueenRank,SpadesSuit)))"
            ;
            puStack_3d8 = (undefined *)0x5035f5;
            FUN_005e9f20();
          }
          local_8 = 0xb;
          puStack_3cc = (undefined1 *)0x50361c;
          FUN_00484470();
          local_8._0_1_ = 9;
          local_8._1_3_ = 0;
          puStack_3cc = (undefined1 *)0x503640;
          FUN_00464210();
          puStack_3cc = &DAT_00792398 + local_38 * 4 + local_18 * 0x20;
          pcStack_3d0 = &DAT_00792880 + local_38 * 4 + local_18 * 0x20;
          pcStack_3d4 = &DAT_00791fd8 + local_38 * 4 + local_18 * 0x20;
          puStack_3d8 = &DAT_00792ce8 + local_38 * 4 + local_18 * 0x20;
          puStack_3dc = &DAT_00792e78 + local_38 * 4 + local_18 * 0x20;
          puStack_3e0 = &DAT_007924b0 + local_38 * 4 + local_18 * 0x20;
          puStack_3e4 = &DAT_00792258 + local_38 * 4 + local_18 * 0x20;
          puStack_3e8 = &DAT_007925f0 + local_38 * 4 + local_18 * 0x20;
          puStack_3ec = &DAT_00792710 + local_38 * 4 + local_18 * 0x20;
          puStack_3f0 = (undefined *)((param_1 == 7) + 2);
          local_124 = (undefined1 *)&local_3f8;
          local_3fc = (undefined1 *)&local_3f8;
          local_400 = 0x503706;
          FUN_004c8300();
          local_400 = local_48;
          local_3fc = (undefined1 *)CONCAT22(local_3fc._2_2_,local_44);
          FUN_00496fe0(local_4c);
        }
        else {
          puStack_3cc = (undefined1 *)0x50373c;
          iVar8 = FUN_0047d770();
          if (iVar8 == 4) {
            puStack_3cc = &DAT_00792398 + local_38 * 4 + local_18 * 0x20;
            pcStack_3d0 = &DAT_00792880 + local_38 * 4 + local_18 * 0x20;
            pcStack_3d4 = &DAT_00791fd8 + local_38 * 4 + local_18 * 0x20;
            puStack_3d8 = &DAT_00792ce8 + local_38 * 4 + local_18 * 0x20;
            puStack_3dc = &DAT_00792e78 + local_38 * 4 + local_18 * 0x20;
            puStack_3e0 = &DAT_007924b0 + local_38 * 4 + local_18 * 0x20;
            puStack_3e4 = &DAT_00792258 + local_38 * 4 + local_18 * 0x20;
            puStack_3e8 = &DAT_007925f0 + local_38 * 4 + local_18 * 0x20;
            puStack_3ec = &DAT_00792710 + local_38 * 4 + local_18 * 0x20;
            puStack_3f0 = (undefined *)((param_1 == 7) + 2);
            local_128 = (undefined1 *)&local_3f8;
            local_3fc = (undefined1 *)&local_3f8;
            local_400 = 0x50380b;
            FUN_004c8300();
            local_8._0_1_ = 0xd;
            local_12c = (undefined1 *)&local_400;
            uVar11 = (undefined2)((uint)&local_400 >> 0x10);
            FUN_004c8700(&local_400);
            local_8._0_1_ = 9;
            FUN_00497bd0(local_4c,local_48,CONCAT22(uVar11,local_44));
          }
          else {
            puStack_3cc = (undefined1 *)0x503872;
            iVar8 = FUN_0047d770();
            if (iVar8 == 2) {
              puStack_3cc = (undefined1 *)DAT_0079076c;
              pcStack_3d0 = (char *)DAT_007907b0;
              pcStack_3d4 = (char *)0x503894;
              uVar9 = FUN_00464130();
              local_8 = CONCAT31(local_8._1_3_,0xe);
              puStack_3cc = local_134;
              pcStack_3d0 = (char *)0x5038cb;
              FUN_004c8300();
              local_8 = 0xf;
              pcStack_3d0 = (char *)0x503905;
              puStack_3cc = (undefined1 *)uVar9;
              cVar3 = FUN_00484ba0();
              if (cVar3 != '\0') {
                puStack_3cc = (undefined1 *)0x9c7;
                pcStack_3d0 = "..\\Casino\\PokerStudAI.cpp";
                pcStack_3d4 = 
                "!(currentPokerPlayer->GetLogicalStudHandShowing().ContainsCard(PokerCard(QueenRank,SpadesSuit)))"
                ;
                puStack_3d8 = (undefined *)0x503920;
                FUN_005e9f20();
              }
              local_8 = 0xe;
              puStack_3cc = (undefined1 *)0x503947;
              FUN_00484470();
              local_8._0_1_ = 9;
              local_8._1_3_ = 0;
              puStack_3cc = (undefined1 *)0x50396b;
              FUN_00464210();
              puStack_3cc = &DAT_00792398 + local_38 * 4 + local_18 * 0x20;
              pcStack_3d0 = &DAT_00792880 + local_38 * 4 + local_18 * 0x20;
              pcStack_3d4 = &DAT_00791fd8 + local_38 * 4 + local_18 * 0x20;
              puStack_3d8 = &DAT_00792ce8 + local_38 * 4 + local_18 * 0x20;
              puStack_3dc = &DAT_00792e78 + local_38 * 4 + local_18 * 0x20;
              puStack_3e0 = &DAT_007924b0 + local_38 * 4 + local_18 * 0x20;
              puStack_3e4 = &DAT_00792258 + local_38 * 4 + local_18 * 0x20;
              puStack_3e8 = &DAT_007925f0 + local_38 * 4 + local_18 * 0x20;
              puStack_3ec = &DAT_00792710 + local_38 * 4 + local_18 * 0x20;
              puStack_3f0 = (undefined *)((param_1 == 7) + 2);
              local_13c = (undefined1 *)&local_3f8;
              local_3fc = (undefined1 *)&local_3f8;
              local_400 = 0x503a31;
              FUN_004c8300();
              local_400 = local_48;
              local_3fc = (undefined1 *)CONCAT22(local_3fc._2_2_,local_44);
              FUN_00496b20(local_4c);
            }
            else {
              puStack_3cc = &DAT_00792398 + local_38 * 4 + local_18 * 0x20;
              pcStack_3d0 = &DAT_00792880 + local_38 * 4 + local_18 * 0x20;
              pcStack_3d4 = &DAT_00791fd8 + local_38 * 4 + local_18 * 0x20;
              puStack_3d8 = &DAT_00792ce8 + local_38 * 4 + local_18 * 0x20;
              puStack_3dc = &DAT_00792e78 + local_38 * 4 + local_18 * 0x20;
              puStack_3e0 = &DAT_007924b0 + local_38 * 4 + local_18 * 0x20;
              puStack_3e4 = &DAT_00792258 + local_38 * 4 + local_18 * 0x20;
              puStack_3e8 = &DAT_007925f0 + local_38 * 4 + local_18 * 0x20;
              puStack_3ec = &DAT_00792710 + local_38 * 4 + local_18 * 0x20;
              puStack_3f0 = (undefined *)((param_1 == 7) + 2);
              local_140 = (undefined1 *)&local_3f8;
              local_3fc = (undefined1 *)&local_3f8;
              local_400 = 0x503b22;
              FUN_004c8300();
              local_400 = local_48;
              local_3fc = (undefined1 *)CONCAT22(local_3fc._2_2_,local_44);
              FUN_00496b20(local_4c);
            }
          }
        }
        puStack_3cc = (undefined1 *)0x64;
        pcStack_3d0 = (undefined *)0x503b4f;
        iVar8 = FUN_0062fbf0();
        puStack_3cc = (undefined1 *)0x503c51;
        iVar12 = FUN_00686cc0();
        if (iVar8 < iVar12) {
          (&DAT_007924a8)[local_38] = 1;
        }
        else {
          (&DAT_007924a8)[local_38] = 0;
        }
        puStack_3cc = (undefined1 *)0x503c78;
        iVar8 = FUN_0047d770();
        if (iVar8 == 0) {
          if (param_1 == 3) {
            puStack_3cc = local_194;
            pcStack_3d0 = (char *)0x5043f2;
            FUN_004c8300();
            local_8._0_1_ = 0x21;
            puStack_3cc = (undefined1 *)0x0;
            pcStack_3d0 = (char *)0x0;
            pcStack_3d4 = (char *)0x0;
            puStack_3d8 = (undefined *)0x1;
            puStack_3dc = (undefined *)0x1;
            puStack_3e0 = (undefined *)0x1;
            puStack_3e4 = (undefined *)0x1;
            puStack_3e8 = local_70;
            puStack_3ec = (undefined *)0x504425;
            FUN_00485940();
            local_8._0_1_ = 0x23;
            puStack_3cc = (undefined1 *)0x504434;
            FUN_00484470();
            puStack_3cc = (undefined1 *)DAT_007913c8;
            pcStack_3d0 = &local_195;
            pcStack_3d4 = (undefined *)0x50444a;
            FUN_004a21b0();
            pcStack_3d0 = (undefined *)0x504451;
            cVar3 = FUN_004a1fb0();
            if (cVar3 == '\0') {
              *(undefined2 *)(&DAT_007929c0 + local_38 * 2) = 0;
            }
            else {
              *(undefined2 *)(&DAT_007929c0 + local_38 * 2) = 3;
            }
            local_8._0_1_ = 9;
            puStack_3cc = (undefined1 *)0x504482;
            FUN_004a20f0();
          }
          else if (param_1 == 4) {
            puStack_3cc = local_1a0;
            pcStack_3d0 = (char *)0x5044a3;
            FUN_004c8300();
            local_8._0_1_ = 0x24;
            puStack_3cc = (undefined1 *)0x0;
            pcStack_3d0 = (char *)0x0;
            pcStack_3d4 = (char *)0x0;
            puStack_3d8 = (undefined *)0x1;
            puStack_3dc = (undefined *)0x1;
            puStack_3e0 = (undefined *)0x1;
            puStack_3e4 = (undefined *)0x1;
            puStack_3e8 = local_74;
            puStack_3ec = (undefined *)0x5044d6;
            FUN_00485940();
            local_8._0_1_ = 0x26;
            puStack_3ec = (undefined *)0x5044e5;
            FUN_00484470();
            puStack_3ec = local_1a8;
            puStack_3f0 = (undefined *)0x5044f7;
            FUN_004c8300();
            local_8._0_1_ = 0x27;
            puStack_3ec = (undefined *)0x0;
            puStack_3f0 = (undefined *)0x0;
            local_3f4 = 0;
            local_3f8 = 1;
            local_3fc = (undefined1 *)0x1;
            local_400 = 1;
            FUN_00485940(local_78,0);
            local_8 = CONCAT31(local_8._1_3_,0x29);
            puStack_3cc = (undefined1 *)0x504539;
            FUN_00484470();
            puStack_3cc = (undefined1 *)DAT_007913b0;
            pcStack_3d0 = &local_1a9;
            pcStack_3d4 = (char *)0x50454f;
            FUN_004a2160();
            pcStack_3d0 = (char *)0x504556;
            cVar3 = FUN_004a1e10();
            if (cVar3 == '\0') {
              puStack_3cc = (undefined1 *)DAT_007913a4;
              pcStack_3d0 = &local_1ab;
              pcStack_3d4 = (undefined *)0x5045b6;
              FUN_004a21b0();
              pcStack_3d0 = (undefined *)0x5045bd;
              cVar3 = FUN_004a20a0();
              if (cVar3 == '\0') {
                puStack_3cc = (undefined1 *)DAT_00791410;
                pcStack_3d0 = &local_1ac;
                pcStack_3d4 = (undefined *)0x5045ea;
                FUN_004a21b0();
                pcStack_3d0 = (undefined *)0x5045f1;
                cVar3 = FUN_004a20a0();
                if (cVar3 == '\0') {
                  *(undefined2 *)(&DAT_007929c0 + local_38 * 2) = 0;
                }
                else {
                  *(undefined2 *)(&DAT_007929c0 + local_38 * 2) = 3;
                }
              }
              else {
                *(undefined2 *)(&DAT_007929c0 + local_38 * 2) = 7;
              }
            }
            else {
              puStack_3cc = (undefined1 *)DAT_007913c8;
              pcStack_3d0 = &local_1aa;
              pcStack_3d4 = (undefined *)0x504573;
              FUN_004a21b0();
              pcStack_3d0 = (undefined *)0x50457a;
              cVar3 = FUN_004a1fb0();
              if (cVar3 == '\0') {
                *(undefined2 *)(&DAT_007929c0 + local_38 * 2) = 0;
              }
              else {
                *(undefined2 *)(&DAT_007929c0 + local_38 * 2) = 7;
              }
            }
            local_8._0_1_ = 0x26;
            puStack_3cc = (undefined1 *)0x504622;
            FUN_004a20f0();
            local_8._0_1_ = 9;
            puStack_3cc = (undefined1 *)0x50462e;
            FUN_004a20f0();
          }
          else if (param_1 == 5) {
            puStack_3cc = local_1b4;
            pcStack_3d0 = (char *)0x50464f;
            FUN_004c8300();
            local_8._0_1_ = 0x2a;
            puStack_3cc = (undefined1 *)0x0;
            pcStack_3d0 = (char *)0x0;
            pcStack_3d4 = (char *)0x0;
            puStack_3d8 = (undefined *)0x1;
            puStack_3dc = (undefined *)0x1;
            puStack_3e0 = (undefined *)0x1;
            puStack_3e4 = (undefined *)0x1;
            puStack_3e8 = local_7c;
            puStack_3ec = (undefined *)0x504682;
            FUN_00485940();
            local_8._0_1_ = 0x2c;
            puStack_3ec = (undefined *)0x504691;
            FUN_00484470();
            puStack_3ec = local_1bc;
            puStack_3f0 = (undefined *)0x5046a3;
            FUN_004c8300();
            local_8._0_1_ = 0x2d;
            puStack_3ec = (undefined *)0x0;
            puStack_3f0 = (undefined *)0x0;
            local_3f4 = 0;
            local_3f8 = 1;
            local_3fc = (undefined1 *)0x1;
            local_400 = 1;
            FUN_00485940(local_80,0);
            local_8._0_1_ = 0x2f;
            puStack_3cc = (undefined1 *)0x5046e5;
            FUN_00484470();
            puStack_3cc = (undefined1 *)DAT_00791418;
            pcStack_3d0 = &local_1bd;
            pcStack_3d4 = (undefined *)0x5046fa;
            FUN_004a2160();
            pcStack_3d0 = (undefined *)0x504701;
            cVar3 = FUN_004a1e10();
            if (cVar3 == '\0') {
              puStack_3cc = (undefined1 *)DAT_007913b0;
              pcStack_3d0 = &local_1be;
              pcStack_3d4 = (undefined *)0x504731;
              FUN_004a2160();
              pcStack_3d0 = (char *)0x504738;
              cVar3 = FUN_004a1e10();
              if (cVar3 == '\0') {
                puStack_3cc = local_1cc;
                pcStack_3d0 = (char *)0x504804;
                FUN_004c8300();
                local_8._0_1_ = 0x30;
                puStack_3cc = (undefined1 *)0x504825;
                sVar4 = FUN_00484bf0();
                local_1c2 = sVar4 == 3;
                local_8._0_1_ = 0x2f;
                puStack_3cc = (undefined1 *)0x504845;
                FUN_00484470();
                if (local_1c2 == '\0') {
                  puStack_3cc = local_1d8;
                  pcStack_3d0 = (undefined *)0x5048dd;
                  FUN_004c8300();
                  local_8._0_1_ = 0x31;
                  puStack_3cc = (undefined1 *)0x5048fe;
                  sVar4 = FUN_00484db0();
                  local_1cf = '\x01' - (sVar4 != 0);
                  local_8._0_1_ = 0x2f;
                  puStack_3cc = (undefined1 *)0x50491d;
                  FUN_00484470();
                  if (local_1cf == '\0') {
                    *(undefined2 *)(&DAT_007929c0 + local_38 * 2) = 0;
                  }
                  else {
                    puStack_3cc = (undefined1 *)DAT_007913a4;
                    pcStack_3d0 = &local_1d9;
                    pcStack_3d4 = (undefined *)0x50493e;
                    FUN_004a21b0();
                    pcStack_3d0 = (undefined *)0x504945;
                    cVar3 = FUN_004a20a0();
                    if (cVar3 == '\0') {
                      puStack_3cc = (undefined1 *)DAT_00791410;
                      pcStack_3d0 = &local_1da;
                      pcStack_3d4 = (undefined *)0x504971;
                      FUN_004a21b0();
                      pcStack_3d0 = (undefined *)0x504978;
                      cVar3 = FUN_004a20a0();
                      if (cVar3 == '\0') {
                        *(undefined2 *)(&DAT_007929c0 + local_38 * 2) = 1;
                      }
                      else {
                        *(undefined2 *)(&DAT_007929c0 + local_38 * 2) = 5;
                      }
                    }
                    else {
                      *(undefined2 *)(&DAT_007929c0 + local_38 * 2) = 10;
                    }
                  }
                }
                else {
                  puStack_3cc = (undefined1 *)DAT_007913a4;
                  pcStack_3d0 = &local_1cd;
                  pcStack_3d4 = (undefined *)0x504866;
                  FUN_004a21b0();
                  pcStack_3d0 = (undefined *)0x50486d;
                  cVar3 = FUN_004a20a0();
                  if (cVar3 == '\0') {
                    puStack_3cc = (undefined1 *)DAT_00791410;
                    pcStack_3d0 = &local_1ce;
                    pcStack_3d4 = (undefined *)0x50489a;
                    FUN_004a21b0();
                    pcStack_3d0 = (undefined *)0x5048a1;
                    cVar3 = FUN_004a20a0();
                    if (cVar3 == '\0') {
                      *(undefined2 *)(&DAT_007929c0 + local_38 * 2) = 3;
                    }
                    else {
                      *(undefined2 *)(&DAT_007929c0 + local_38 * 2) = 8;
                    }
                  }
                  else {
                    *(undefined2 *)(&DAT_007929c0 + local_38 * 2) = 10;
                  }
                }
              }
              else {
                puStack_3cc = (undefined1 *)DAT_007913c8;
                pcStack_3d0 = &local_1bf;
                pcStack_3d4 = (undefined *)0x504759;
                FUN_004a21b0();
                pcStack_3d0 = (undefined *)0x504760;
                cVar3 = FUN_004a1fb0();
                if (cVar3 == '\0') {
                  *(undefined2 *)(&DAT_007929c0 + local_38 * 2) = 0;
                }
                else {
                  puStack_3cc = (undefined1 *)DAT_007913a4;
                  pcStack_3d0 = &local_1c0;
                  pcStack_3d4 = (undefined *)0x50477d;
                  FUN_004a2200();
                  pcStack_3d0 = (undefined *)0x504784;
                  cVar3 = FUN_004a20a0();
                  if (cVar3 == '\0') {
                    puStack_3cc = (undefined1 *)DAT_00791410;
                    pcStack_3d0 = &local_1c1;
                    pcStack_3d4 = (undefined *)0x5047b1;
                    FUN_004a2200();
                    pcStack_3d0 = (undefined *)0x5047b8;
                    cVar3 = FUN_004a20a0();
                    if (cVar3 == '\0') {
                      *(undefined2 *)(&DAT_007929c0 + local_38 * 2) = 2;
                    }
                    else {
                      *(undefined2 *)(&DAT_007929c0 + local_38 * 2) = 7;
                    }
                  }
                  else {
                    *(undefined2 *)(&DAT_007929c0 + local_38 * 2) = 10;
                  }
                }
              }
            }
            else {
              *(undefined2 *)(&DAT_007929c0 + local_38 * 2) = 10;
            }
            local_8._0_1_ = 0x2c;
            puStack_3cc = (undefined1 *)0x5049b9;
            FUN_004a20f0();
            local_8._0_1_ = 9;
            puStack_3cc = (undefined1 *)0x5049c5;
            FUN_004a20f0();
          }
          else if (5 < param_1) {
            puStack_3cc = local_90;
            pcStack_3d0 = (char *)0x5049e6;
            FUN_004c8300();
            local_8._0_1_ = 0x32;
            puStack_3cc = local_1e4;
            pcStack_3d0 = (char *)0x5049fc;
            FUN_004c8300();
            local_8._0_1_ = 0x33;
            puStack_3cc = (undefined1 *)0x0;
            pcStack_3d0 = (char *)0x0;
            pcStack_3d4 = (char *)0x0;
            puStack_3d8 = (undefined *)0x1;
            puStack_3dc = (undefined *)0x1;
            puStack_3e0 = (undefined *)0x1;
            puStack_3e4 = (undefined *)0x1;
            puStack_3e8 = local_84;
            puStack_3ec = (undefined *)0x504a2f;
            FUN_00485940();
            local_8._0_1_ = 0x35;
            puStack_3ec = (undefined *)0x504a3e;
            FUN_00484470();
            puStack_3ec = local_1ec;
            puStack_3f0 = (undefined *)0x504a50;
            FUN_004c8300();
            local_8._0_1_ = 0x36;
            puStack_3ec = (undefined *)0x0;
            puStack_3f0 = (undefined *)0x0;
            local_3f4 = 0;
            local_3f8 = 1;
            local_3fc = (undefined1 *)0x1;
            local_400 = 1;
            FUN_00485940(local_88,0);
            local_8 = CONCAT31(local_8._1_3_,0x38);
            puStack_3cc = (undefined1 *)0x504a95;
            FUN_00484470();
            puStack_3cc = (undefined1 *)DAT_00791380;
            pcStack_3d0 = &local_1ed;
            pcStack_3d4 = (undefined *)0x504aab;
            FUN_004a2160();
            pcStack_3d0 = (undefined *)0x504ab2;
            cVar3 = FUN_004a1f00();
            if (cVar3 == '\0') {
              puStack_3cc = (undefined1 *)DAT_007913b0;
              pcStack_3d0 = &local_1ee;
              pcStack_3d4 = (undefined *)0x504ae2;
              FUN_004a2160();
              pcStack_3d0 = (undefined *)0x504ae9;
              cVar3 = FUN_004a1e10();
              if (cVar3 == '\0') {
                puStack_3cc = (undefined1 *)0x504c32;
                sVar4 = FUN_00484bf0();
                if (sVar4 == 4) {
                  *(undefined2 *)(&DAT_007929c0 + local_38 * 2) = 10;
                }
                else {
                  puStack_3cc = (undefined1 *)0x504c58;
                  sVar4 = FUN_00484db0();
                  if (sVar4 == 0) {
                    puStack_3cc = (undefined1 *)DAT_007913a4;
                    pcStack_3d0 = &local_1f5;
                    pcStack_3d4 = (undefined *)0x504c7c;
                    FUN_004a21b0();
                    pcStack_3d0 = (undefined *)0x504c83;
                    cVar3 = FUN_004a20a0();
                    if (cVar3 == '\0') {
                      puStack_3cc = (undefined1 *)DAT_00791410;
                      pcStack_3d0 = &local_1f6;
                      pcStack_3d4 = (undefined *)0x504cb3;
                      FUN_004a21b0();
                      pcStack_3d0 = (undefined *)0x504cba;
                      cVar3 = FUN_004a20a0();
                      if (cVar3 == '\0') {
                        *(undefined2 *)(&DAT_007929c0 + local_38 * 2) = 5;
                      }
                      else {
                        *(undefined2 *)(&DAT_007929c0 + local_38 * 2) = 7;
                      }
                    }
                    else {
                      *(undefined2 *)(&DAT_007929c0 + local_38 * 2) = 10;
                    }
                  }
                  else {
                    puStack_3cc = (undefined1 *)0x504cef;
                    sVar4 = FUN_00484db0();
                    if (sVar4 == 1) {
                      puStack_3cc = (undefined1 *)DAT_007913a4;
                      pcStack_3d0 = &local_1f7;
                      pcStack_3d4 = (undefined *)0x504d14;
                      FUN_004a21b0();
                      pcStack_3d0 = (undefined *)0x504d1b;
                      cVar3 = FUN_004a20a0();
                      if (cVar3 == '\0') {
                        puStack_3cc = (undefined1 *)DAT_00791410;
                        pcStack_3d0 = &local_1f8;
                        pcStack_3d4 = (undefined *)0x504d4a;
                        FUN_004a21b0();
                        pcStack_3d0 = (undefined *)0x504d51;
                        cVar3 = FUN_004a20a0();
                        if (cVar3 == '\0') {
                          *(undefined2 *)(&DAT_007929c0 + local_38 * 2) = 0;
                        }
                        else {
                          *(undefined2 *)(&DAT_007929c0 + local_38 * 2) = 4;
                        }
                      }
                      else {
                        *(undefined2 *)(&DAT_007929c0 + local_38 * 2) = 10;
                      }
                    }
                    else {
                      puStack_3cc = (undefined1 *)0x504d86;
                      sVar4 = FUN_00484bf0();
                      if (sVar4 == 3) {
                        puStack_3cc = (undefined1 *)DAT_007913a4;
                        pcStack_3d0 = &local_1f9;
                        pcStack_3d4 = (undefined *)0x504da6;
                        FUN_004a21b0();
                        pcStack_3d0 = (undefined *)0x504dad;
                        cVar3 = FUN_004a20a0();
                        if (cVar3 == '\0') {
                          puStack_3cc = (undefined1 *)DAT_00791410;
                          pcStack_3d0 = &local_1fa;
                          pcStack_3d4 = (undefined *)0x504ddd;
                          FUN_004a21b0();
                          pcStack_3d0 = (undefined *)0x504de4;
                          cVar3 = FUN_004a20a0();
                          if (cVar3 == '\0') {
                            *(undefined2 *)(&DAT_007929c0 + local_38 * 2) = 2;
                          }
                          else {
                            *(undefined2 *)(&DAT_007929c0 + local_38 * 2) = 8;
                          }
                        }
                        else {
                          *(undefined2 *)(&DAT_007929c0 + local_38 * 2) = 10;
                        }
                      }
                      else {
                        puStack_3cc = (undefined1 *)DAT_007913a4;
                        pcStack_3d0 = &local_1fb;
                        pcStack_3d4 = (undefined *)0x504e23;
                        FUN_004a21b0();
                        pcStack_3d0 = (undefined *)0x504e2a;
                        cVar3 = FUN_004a20a0();
                        if (cVar3 == '\0') {
                          puStack_3cc = (undefined1 *)DAT_00791410;
                          pcStack_3d0 = &local_1fc;
                          pcStack_3d4 = (undefined *)0x504e5a;
                          FUN_004a21b0();
                          pcStack_3d0 = (undefined *)0x504e61;
                          cVar3 = FUN_004a20a0();
                          if (cVar3 == '\0') {
                            *(undefined2 *)(&DAT_007929c0 + local_38 * 2) = 0;
                          }
                          else {
                            *(undefined2 *)(&DAT_007929c0 + local_38 * 2) = 5;
                          }
                        }
                        else {
                          *(undefined2 *)(&DAT_007929c0 + local_38 * 2) = 10;
                        }
                      }
                    }
                  }
                }
              }
              else {
                puStack_3cc = (undefined1 *)DAT_007913c8;
                pcStack_3d0 = &local_1ef;
                pcStack_3d4 = (char *)0x504b0a;
                FUN_004a21b0();
                pcStack_3d0 = (char *)0x504b11;
                cVar3 = FUN_004a1fb0();
                if (cVar3 == '\0') {
                  puStack_3cc = (undefined1 *)DAT_00791410;
                  pcStack_3d0 = &local_1f2;
                  pcStack_3d4 = (undefined *)0x504b98;
                  FUN_004a21b0();
                  pcStack_3d0 = (undefined *)0x504b9f;
                  cVar3 = FUN_004a20a0();
                  if (cVar3 == '\0') {
                    *(undefined2 *)(&DAT_007929c0 + local_38 * 2) = 0;
                  }
                  else {
                    puStack_3cc = (undefined1 *)DAT_007913a4;
                    pcStack_3d0 = &local_1f3;
                    pcStack_3d4 = (undefined *)0x504bbf;
                    FUN_004a2200();
                    pcStack_3d0 = (undefined *)0x504bc6;
                    cVar3 = FUN_004a20a0();
                    if (cVar3 == '\0') {
                      puStack_3cc = (undefined1 *)DAT_00791410;
                      pcStack_3d0 = &local_1f4;
                      pcStack_3d4 = (undefined *)0x504bf6;
                      FUN_004a2200();
                      pcStack_3d0 = (undefined *)0x504bfd;
                      cVar3 = FUN_004a20a0();
                      if (cVar3 != '\0') {
                        *(undefined2 *)(&DAT_007929c0 + local_38 * 2) = 7;
                      }
                    }
                    else {
                      *(undefined2 *)(&DAT_007929c0 + local_38 * 2) = 10;
                    }
                  }
                }
                else {
                  puStack_3cc = (undefined1 *)DAT_007913a4;
                  pcStack_3d0 = &local_1f0;
                  pcStack_3d4 = (undefined *)0x504b2e;
                  FUN_004a2200();
                  pcStack_3d0 = (undefined *)0x504b35;
                  cVar3 = FUN_004a20a0();
                  if (cVar3 == '\0') {
                    puStack_3cc = (undefined1 *)DAT_00791410;
                    pcStack_3d0 = &local_1f1;
                    pcStack_3d4 = (undefined *)0x504b61;
                    FUN_004a2200();
                    pcStack_3d0 = (undefined *)0x504b68;
                    cVar3 = FUN_004a20a0();
                    if (cVar3 != '\0') {
                      *(undefined2 *)(&DAT_007929c0 + local_38 * 2) = 7;
                    }
                  }
                  else {
                    *(undefined2 *)(&DAT_007929c0 + local_38 * 2) = 10;
                  }
                }
              }
            }
            else {
              *(undefined2 *)(&DAT_007929c0 + local_38 * 2) = 10;
            }
            local_8._0_1_ = 0x35;
            puStack_3cc = (undefined1 *)0x504e95;
            FUN_004a20f0();
            local_8._0_1_ = 0x32;
            puStack_3cc = (undefined1 *)0x504ea1;
            FUN_004a20f0();
            local_8._0_1_ = 9;
            puStack_3cc = (undefined1 *)0x504eb0;
            FUN_00484470();
          }
        }
        else {
          if (param_1 == 3) {
            puStack_3cc = local_148;
            pcStack_3d0 = (char *)0x503c9c;
            FUN_004c8300();
            local_8._0_1_ = 0x10;
            puStack_3cc = (undefined1 *)0x0;
            pcStack_3d0 = (char *)0x0;
            pcStack_3d4 = (char *)0x0;
            puStack_3d8 = (undefined *)0x1;
            puStack_3dc = (undefined *)0x1;
            puStack_3e0 = (undefined *)0x1;
            puStack_3e4 = (undefined *)0x1;
            puStack_3e8 = local_50;
            puStack_3ec = (undefined *)0x503ccf;
            FUN_00485940();
            local_8 = CONCAT31(local_8._1_3_,0x12);
            puStack_3cc = (undefined1 *)0x503cde;
            FUN_00484470();
            puStack_3cc = (undefined1 *)DAT_007913c8;
            pcStack_3d0 = &local_149;
            pcStack_3d4 = (undefined *)0x503cf4;
            FUN_004a21b0();
            pcStack_3d0 = (undefined *)0x503cfb;
            cVar3 = FUN_004a1fb0();
            if (cVar3 == '\0') {
              puStack_3cc = (undefined1 *)DAT_007913e0;
              pcStack_3d0 = &local_14a;
              pcStack_3d4 = (undefined *)0x503d27;
              FUN_004a21b0();
              pcStack_3d0 = (undefined *)0x503d2e;
              cVar3 = FUN_004a1fb0();
              if (cVar3 == '\0') {
                *(undefined2 *)(&DAT_007929c0 + local_38 * 2) = 0;
              }
              else {
                *(undefined2 *)(&DAT_007929c0 + local_38 * 2) = 1;
              }
            }
            else {
              *(undefined2 *)(&DAT_007929c0 + local_38 * 2) = 4;
            }
            local_8._0_1_ = 9;
            puStack_3cc = (undefined1 *)0x503d5f;
            FUN_004a20f0();
          }
          else if (param_1 == 4) {
            puStack_3cc = local_154;
            pcStack_3d0 = (char *)0x503d80;
            FUN_004c8300();
            local_8._0_1_ = 0x13;
            puStack_3cc = (undefined1 *)0x0;
            pcStack_3d0 = (char *)0x0;
            pcStack_3d4 = (char *)0x0;
            puStack_3d8 = (undefined *)0x1;
            puStack_3dc = (undefined *)0x1;
            puStack_3e0 = (undefined *)0x1;
            puStack_3e4 = (undefined *)0x1;
            puStack_3e8 = local_54;
            puStack_3ec = (undefined *)0x503db3;
            FUN_00485940();
            local_8 = CONCAT31(local_8._1_3_,0x15);
            puStack_3cc = (undefined1 *)0x503dc2;
            FUN_00484470();
            puStack_3cc = (undefined1 *)DAT_007913b0;
            pcStack_3d0 = &local_155;
            pcStack_3d4 = (undefined *)0x503dd8;
            FUN_004a2160();
            pcStack_3d0 = (undefined *)0x503ddf;
            cVar3 = FUN_004a1f00();
            if (cVar3 == '\0') {
              *(undefined2 *)(&DAT_007929c0 + local_38 * 2) = 0;
            }
            else {
              puStack_3cc = (undefined1 *)DAT_00791400;
              pcStack_3d0 = &local_156;
              pcStack_3d4 = (undefined *)0x503dfc;
              FUN_004a21b0();
              pcStack_3d0 = (undefined *)0x503e03;
              cVar3 = FUN_004a2040();
              if (cVar3 == '\0') {
                puStack_3cc = (undefined1 *)DAT_007913f8;
                pcStack_3d0 = &local_157;
                pcStack_3d4 = (undefined *)0x503e2f;
                FUN_004a21b0();
                pcStack_3d0 = (undefined *)0x503e36;
                cVar3 = FUN_004a2040();
                if (cVar3 == '\0') {
                  *(undefined2 *)(&DAT_007929c0 + local_38 * 2) = 5;
                }
                else {
                  *(undefined2 *)(&DAT_007929c0 + local_38 * 2) = 7;
                }
              }
              else {
                *(undefined2 *)(&DAT_007929c0 + local_38 * 2) = 10;
              }
            }
            local_8._0_1_ = 9;
            puStack_3cc = (undefined1 *)0x503e77;
            FUN_004a20f0();
          }
          else if (param_1 == 5) {
            puStack_3cc = local_160;
            pcStack_3d0 = (char *)0x503e98;
            FUN_004c8300();
            local_8._0_1_ = 0x16;
            puStack_3cc = (undefined1 *)0x0;
            pcStack_3d0 = (char *)0x0;
            pcStack_3d4 = (char *)0x0;
            puStack_3d8 = (undefined *)0x1;
            puStack_3dc = (undefined *)0x1;
            puStack_3e0 = (undefined *)0x1;
            puStack_3e4 = (undefined *)0x1;
            puStack_3e8 = local_58;
            puStack_3ec = (undefined *)0x503ecb;
            FUN_00485940();
            local_8._0_1_ = 0x18;
            puStack_3cc = (undefined1 *)0x503eda;
            FUN_00484470();
            puStack_3cc = (undefined1 *)DAT_00791418;
            pcStack_3d0 = &local_161;
            pcStack_3d4 = (undefined *)0x503eef;
            FUN_004a2160();
            pcStack_3d0 = (undefined *)0x503ef6;
            cVar3 = FUN_004a1e10();
            if (cVar3 == '\0') {
              puStack_3cc = (undefined1 *)DAT_007913b0;
              pcStack_3d0 = &local_162;
              pcStack_3d4 = (undefined *)0x503f26;
              FUN_004a2160();
              pcStack_3d0 = (char *)0x503f2d;
              cVar3 = FUN_004a1e10();
              if (cVar3 == '\0') {
                puStack_3cc = local_170;
                pcStack_3d0 = (undefined *)0x503fc1;
                FUN_004c8300();
                local_8._0_1_ = 0x19;
                puStack_3cc = (undefined1 *)0x503fe2;
                sVar4 = FUN_00484bf0();
                local_165 = sVar4 == 3;
                local_8._0_1_ = 0x18;
                puStack_3cc = (undefined1 *)0x504002;
                FUN_00484470();
                if (local_165 == '\0') {
                  puStack_3cc = (undefined1 *)DAT_00791390;
                  pcStack_3d0 = &local_172;
                  pcStack_3d4 = (undefined *)0x504036;
                  FUN_004a2160();
                  pcStack_3d0 = (undefined *)0x50403d;
                  cVar3 = FUN_004a1e10();
                  if (cVar3 == '\0') {
LAB_00504099:
                    local_2d8 = '\0';
                  }
                  else {
                    puStack_3cc = local_17c;
                    pcStack_3d0 = (undefined *)0x504056;
                    FUN_004c8300();
                    local_8 = CONCAT31(local_8._1_3_,0x1a);
                    bVar2 = true;
                    puStack_3cc = (undefined1 *)0x504086;
                    sVar4 = FUN_00484db0();
                    if (sVar4 != 0) goto LAB_00504099;
                    local_2d8 = '\x01';
                  }
                  local_171 = local_2d8;
                  local_8._0_1_ = 0x18;
                  local_8._1_3_ = 0;
                  if (bVar2) {
                    bVar2 = false;
                    puStack_3cc = (undefined1 *)0x5040d3;
                    FUN_00484470();
                  }
                  if (local_171 == '\0') {
                    *(undefined2 *)(&DAT_007929c0 + local_38 * 2) = 0;
                  }
                  else {
                    *(undefined2 *)(&DAT_007929c0 + local_38 * 2) = 5;
                  }
                }
                else {
                  *(undefined2 *)(&DAT_007929c0 + local_38 * 2) = 7;
                }
              }
              else {
                puStack_3cc = (undefined1 *)DAT_007913e0;
                pcStack_3d0 = &local_163;
                pcStack_3d4 = (undefined *)0x503f4a;
                FUN_004a21b0();
                pcStack_3d0 = (undefined *)0x503f51;
                cVar3 = FUN_004a2040();
                if (cVar3 == '\0') {
                  puStack_3cc = (undefined1 *)DAT_0079138c;
                  pcStack_3d0 = &local_164;
                  pcStack_3d4 = (undefined *)0x503f7e;
                  FUN_004a21b0();
                  pcStack_3d0 = (undefined *)0x503f85;
                  cVar3 = FUN_004a2040();
                  if (cVar3 == '\0') {
                    *(undefined2 *)(&DAT_007929c0 + local_38 * 2) = 4;
                  }
                  else {
                    *(undefined2 *)(&DAT_007929c0 + local_38 * 2) = 7;
                  }
                }
                else {
                  *(undefined2 *)(&DAT_007929c0 + local_38 * 2) = 10;
                }
              }
            }
            else {
              *(undefined2 *)(&DAT_007929c0 + local_38 * 2) = 10;
            }
            local_8._0_1_ = 9;
            puStack_3cc = (undefined1 *)0x504108;
            FUN_004a20f0();
          }
          else if (5 < param_1) {
            puStack_3cc = local_64;
            pcStack_3d0 = (char *)0x504126;
            FUN_004c8300();
            local_8._0_1_ = 0x1b;
            puStack_3cc = local_184;
            pcStack_3d0 = (char *)0x50413c;
            FUN_004c8300();
            local_8._0_1_ = 0x1c;
            puStack_3cc = (undefined1 *)0x0;
            pcStack_3d0 = (char *)0x0;
            pcStack_3d4 = (char *)0x0;
            puStack_3d8 = (undefined *)0x1;
            puStack_3dc = (undefined *)0x1;
            puStack_3e0 = (undefined *)0x1;
            puStack_3e4 = (undefined *)0x1;
            puStack_3e8 = local_5c;
            puStack_3ec = (undefined *)0x50416f;
            FUN_00485940();
            local_8 = CONCAT31(local_8._1_3_,0x1e);
            puStack_3cc = (undefined1 *)0x50417e;
            FUN_00484470();
            puStack_3cc = (undefined1 *)DAT_00791380;
            pcStack_3d0 = &local_185;
            pcStack_3d4 = (undefined *)0x504194;
            FUN_004a2160();
            pcStack_3d0 = (undefined *)0x50419b;
            cVar3 = FUN_004a1f00();
            if (cVar3 == '\0') {
              puStack_3cc = (undefined1 *)DAT_007913b0;
              pcStack_3d0 = &local_186;
              pcStack_3d4 = (undefined *)0x5041ca;
              FUN_004a2160();
              pcStack_3d0 = (undefined *)0x5041d1;
              cVar3 = FUN_004a1e10();
              if (cVar3 == '\0') {
                puStack_3cc = (undefined1 *)0x50424a;
                sVar4 = FUN_00484db0();
                if (sVar4 == 0) {
                  *(undefined2 *)(&DAT_007929c0 + local_38 * 2) = 10;
                }
                else {
                  puStack_3cc = (undefined1 *)0x504269;
                  sVar4 = FUN_00484db0();
                  if (sVar4 == 1) {
                    *(undefined2 *)(&DAT_007929c0 + local_38 * 2) = 5;
                  }
                  else {
                    puStack_3cc = (undefined1 *)0x504289;
                    sVar4 = FUN_00484bf0();
                    if (sVar4 == 4) {
                      *(undefined2 *)(&DAT_007929c0 + local_38 * 2) = 10;
                    }
                    else {
                      puStack_3cc = (undefined1 *)0x5042a9;
                      sVar4 = FUN_00484bf0();
                      if (sVar4 == 3) {
                        *(undefined2 *)(&DAT_007929c0 + local_38 * 2) = 4;
                      }
                      else {
                        *(undefined2 *)(&DAT_007929c0 + local_38 * 2) = 0;
                      }
                    }
                  }
                }
              }
              else {
                puStack_3cc = (undefined1 *)DAT_007913e0;
                pcStack_3d0 = &local_187;
                pcStack_3d4 = (undefined *)0x5041ed;
                FUN_004a21b0();
                pcStack_3d0 = (undefined *)0x5041f4;
                cVar3 = FUN_004a2040();
                if (cVar3 == '\0') {
                  puStack_3cc = (undefined1 *)DAT_0079138c;
                  pcStack_3d0 = &local_188;
                  pcStack_3d4 = (undefined *)0x504221;
                  FUN_004a21b0();
                  pcStack_3d0 = (undefined *)0x504228;
                  cVar3 = FUN_004a2040();
                  if (cVar3 != '\0') {
                    *(undefined2 *)(&DAT_007929c0 + local_38 * 2) = 2;
                  }
                }
                else {
                  *(undefined2 *)(&DAT_007929c0 + local_38 * 2) = 5;
                }
              }
            }
            else {
              *(undefined2 *)(&DAT_007929c0 + local_38 * 2) = 10;
            }
            local_8._0_1_ = 0x1b;
            puStack_3cc = (undefined1 *)0x5042db;
            FUN_004a20f0();
            local_8._0_1_ = 9;
            puStack_3cc = (undefined1 *)0x5042e7;
            FUN_00484470();
          }
          puStack_3cc = (undefined1 *)0x5042f2;
          iVar8 = FUN_0047d770();
          if (iVar8 == 3) {
            *(short *)(&DAT_007929c0 + local_38 * 2) = *(short *)(&DAT_007929c0 + local_38 * 2) / 2;
            puStack_3cc = local_6c;
            pcStack_3d0 = (char *)0x504327;
            FUN_004c8300();
            local_8._0_1_ = 0x1f;
            puStack_3cc = (undefined1 *)DAT_0079076c;
            pcStack_3d0 = (char *)DAT_007907a4;
            pcStack_3d4 = (undefined *)0x504343;
            puStack_3cc = (undefined1 *)FUN_00464130();
            local_8._0_1_ = 0x20;
            pcStack_3d0 = (undefined *)0x504368;
            local_189 = FUN_00484ba0();
            local_8._0_1_ = 0x1f;
            puStack_3cc = (undefined1 *)0x50437d;
            FUN_00464210();
            if (local_189 != '\0') {
              *(undefined2 *)(&DAT_007929c0 + local_38 * 2) = 10;
            }
            local_8._0_1_ = 9;
            puStack_3cc = (undefined1 *)0x5043a2;
            FUN_00484470();
          }
          else {
            puStack_3cc = (undefined1 *)0x5043af;
            iVar8 = FUN_0047d770();
            if (iVar8 == 4) {
              *(short *)(&DAT_007929c0 + local_38 * 2) =
                   *(short *)(&DAT_007929c0 + local_38 * 2) / 2;
            }
          }
        }
        local_8._0_1_ = 5;
        puStack_3cc = (undefined1 *)0x504ebc;
        FUN_004646e0();
      }
      else {
        puStack_3cc = (undefined1 *)(int)local_38;
        pcStack_3d0 = (undefined *)0x504ed1;
        FUN_0047e390();
        puStack_3cc = (undefined1 *)0x504ed8;
        iVar8 = FUN_004c7010();
        if (iVar8 == 1) {
          puStack_3cc = (undefined1 *)0x504eec;
          iVar8 = FUN_0047d770();
          if (iVar8 == 3) {
            puStack_3cc = (undefined1 *)0x504f00;
            iVar8 = FUN_0047d6f0();
            if (iVar8 != 2) {
              puStack_3cc = (undefined1 *)0xadf;
              pcStack_3d0 = "..\\Casino\\PokerStudAI.cpp";
              pcStack_3d4 = "pokerGame->GetWildCardRules() == THE_BITCH_WILD";
              puStack_3d8 = (undefined *)0x504f19;
              FUN_005e9f20();
            }
            puStack_3cc = (undefined1 *)DAT_0079076c;
            pcStack_3d0 = (char *)DAT_007907b0;
            pcStack_3d4 = (char *)0x504f34;
            uVar9 = FUN_00464130();
            local_8 = CONCAT31(local_8._1_3_,0x39);
            puStack_3cc = local_204;
            pcStack_3d0 = (char *)0x504f6b;
            FUN_004c8300();
            local_8 = 0x3a;
            pcStack_3d0 = (char *)0x504fa5;
            puStack_3cc = (undefined1 *)uVar9;
            cVar3 = FUN_00484ba0();
            if (cVar3 != '\0') {
              puStack_3cc = (undefined1 *)0xae0;
              pcStack_3d0 = "..\\Casino\\PokerStudAI.cpp";
              pcStack_3d4 = 
              "!(currentPokerPlayer->GetLogicalStudHandShowing().ContainsCard(PokerCard(QueenRank,SpadesSuit)))"
              ;
              puStack_3d8 = (undefined *)0x504fc0;
              FUN_005e9f20();
            }
            local_8 = 0x39;
            puStack_3cc = (undefined1 *)0x504fe7;
            FUN_00484470();
            local_8._0_1_ = 5;
            local_8._1_3_ = 0;
            puStack_3cc = (undefined1 *)0x50500b;
            FUN_00464210();
            puStack_3cc = &DAT_00792398 + local_38 * 4 + local_18 * 0x20;
            pcStack_3d0 = &DAT_00792880 + local_38 * 4 + local_18 * 0x20;
            pcStack_3d4 = &DAT_00791fd8 + local_38 * 4 + local_18 * 0x20;
            puStack_3d8 = &DAT_00792ce8 + local_38 * 4 + local_18 * 0x20;
            puStack_3dc = &DAT_00792e78 + local_38 * 4 + local_18 * 0x20;
            puStack_3e0 = &DAT_007924b0 + local_38 * 4 + local_18 * 0x20;
            puStack_3e4 = &DAT_00792258 + local_38 * 4 + local_18 * 0x20;
            puStack_3e8 = &DAT_007925f0 + local_38 * 4 + local_18 * 0x20;
            puStack_3ec = &DAT_00792710 + local_38 * 4 + local_18 * 0x20;
            puStack_3f0 = (undefined *)((param_1 == 7) + 2);
            local_20c = (undefined1 *)&local_3f8;
            local_3fc = (undefined1 *)&local_3f8;
            local_400 = (int)local_38;
            FUN_0047e390();
            local_400 = 0x5050dd;
            FUN_004c8300();
            local_400 = local_20;
            local_3fc = (undefined1 *)CONCAT22(local_3fc._2_2_,local_1c);
            FUN_00496fe0(local_24);
          }
          else {
            puStack_3cc = (undefined1 *)0x505113;
            iVar8 = FUN_0047d770();
            if (iVar8 == 4) {
              puStack_3cc = &DAT_00792398 + local_38 * 4 + local_18 * 0x20;
              pcStack_3d0 = &DAT_00792880 + local_38 * 4 + local_18 * 0x20;
              pcStack_3d4 = &DAT_00791fd8 + local_38 * 4 + local_18 * 0x20;
              puStack_3d8 = &DAT_00792ce8 + local_38 * 4 + local_18 * 0x20;
              puStack_3dc = &DAT_00792e78 + local_38 * 4 + local_18 * 0x20;
              puStack_3e0 = &DAT_007924b0 + local_38 * 4 + local_18 * 0x20;
              puStack_3e4 = &DAT_00792258 + local_38 * 4 + local_18 * 0x20;
              puStack_3e8 = &DAT_007925f0 + local_38 * 4 + local_18 * 0x20;
              puStack_3ec = &DAT_00792710 + local_38 * 4 + local_18 * 0x20;
              puStack_3f0 = (undefined *)((param_1 == 7) + 2);
              local_210 = (undefined1 *)&local_3f8;
              local_3fc = (undefined1 *)&local_3f8;
              local_400 = (int)local_38;
              FUN_0047e390();
              local_400 = 0x5051ee;
              FUN_004c8300();
              local_8._0_1_ = 0x3b;
              local_214 = (undefined1 *)&local_400;
              uVar11 = (undefined2)((uint)&local_400 >> 0x10);
              FUN_004c8700(&local_400);
              local_8._0_1_ = 5;
              FUN_00497bd0(local_24,local_20,CONCAT22(uVar11,local_1c));
            }
            else {
              puStack_3cc = (undefined1 *)0x505255;
              iVar8 = FUN_0047d770();
              if (iVar8 == 2) {
                puStack_3cc = (undefined1 *)DAT_0079076c;
                pcStack_3d0 = (char *)DAT_007907b0;
                pcStack_3d4 = (char *)0x505276;
                uVar9 = FUN_00464130();
                local_8 = CONCAT31(local_8._1_3_,0x3c);
                puStack_3cc = local_21c;
                pcStack_3d0 = (char *)0x5052b0;
                FUN_004c8300();
                local_8 = 0x3d;
                pcStack_3d0 = (char *)0x5052ed;
                puStack_3cc = (undefined1 *)uVar9;
                cVar3 = FUN_00484ba0();
                if (cVar3 != '\0') {
                  puStack_3cc = (undefined1 *)0xb02;
                  pcStack_3d0 = "..\\Casino\\PokerStudAI.cpp";
                  pcStack_3d4 = 
                  "!(currentPokerPlayer->GetLogicalStudHandShowing().ContainsCard(PokerCard(QueenRank,SpadesSuit)))"
                  ;
                  puStack_3d8 = (undefined *)0x505308;
                  FUN_005e9f20();
                }
                local_8 = 0x3c;
                puStack_3cc = (undefined1 *)0x505334;
                FUN_00484470();
                local_8._0_1_ = 5;
                local_8._1_3_ = 0;
                puStack_3cc = (undefined1 *)0x50535e;
                FUN_00464210();
                puStack_3cc = &DAT_00792398 + local_38 * 4 + local_18 * 0x20;
                pcStack_3d0 = &DAT_00792880 + local_38 * 4 + local_18 * 0x20;
                pcStack_3d4 = &DAT_00791fd8 + local_38 * 4 + local_18 * 0x20;
                puStack_3d8 = &DAT_00792ce8 + local_38 * 4 + local_18 * 0x20;
                puStack_3dc = &DAT_00792e78 + local_38 * 4 + local_18 * 0x20;
                puStack_3e0 = &DAT_007924b0 + local_38 * 4 + local_18 * 0x20;
                puStack_3e4 = &DAT_00792258 + local_38 * 4 + local_18 * 0x20;
                puStack_3e8 = &DAT_007925f0 + local_38 * 4 + local_18 * 0x20;
                puStack_3ec = &DAT_00792710 + local_38 * 4 + local_18 * 0x20;
                puStack_3f0 = (undefined *)((param_1 == 7) + 2);
                local_3fc = (undefined1 *)&local_3f8;
                local_400 = (int)local_38;
                FUN_0047e390();
                local_400 = 0x505430;
                FUN_004c8300();
                local_400 = local_20;
                local_3fc = (undefined1 *)CONCAT22(local_3fc._2_2_,local_1c);
                FUN_00497690(local_24);
              }
              else {
                puStack_3cc = &DAT_00792398 + local_38 * 4 + local_18 * 0x20;
                pcStack_3d0 = &DAT_00792880 + local_38 * 4 + local_18 * 0x20;
                pcStack_3d4 = &DAT_00791fd8 + local_38 * 4 + local_18 * 0x20;
                puStack_3d8 = &DAT_00792ce8 + local_38 * 4 + local_18 * 0x20;
                puStack_3dc = &DAT_00792e78 + local_38 * 4 + local_18 * 0x20;
                puStack_3e0 = &DAT_007924b0 + local_38 * 4 + local_18 * 0x20;
                puStack_3e4 = &DAT_00792258 + local_38 * 4 + local_18 * 0x20;
                puStack_3e8 = &DAT_007925f0 + local_38 * 4 + local_18 * 0x20;
                puStack_3ec = &DAT_00792710 + local_38 * 4 + local_18 * 0x20;
                puStack_3f0 = (undefined *)((param_1 == 7) + 2);
                local_3fc = (undefined1 *)&local_3f8;
                local_400 = (int)local_38;
                FUN_0047e390();
                local_400 = 0x50552d;
                FUN_004c8300();
                local_400 = local_20;
                local_3fc = (undefined1 *)CONCAT22(local_3fc._2_2_,local_1c);
                FUN_00496b20(local_24);
              }
            }
          }
        }
      }
      local_38 = local_38 + 1;
    }
    (&DAT_00792de8)[local_18] = (undefined2)param_1;
    *(short *)(&DAT_00792980 + local_18 * 2) = (short)param_3;
    if (param_1 == 3) {
      puStack_3cc = (undefined1 *)0x15;
      pcStack_3d0 = (char *)0x50558e;
      iVar8 = FUN_0062fbf0();
      puStack_3cc = (undefined1 *)0x15;
      pcStack_3d0 = (char *)0x50559a;
      iVar12 = FUN_0062fbf0();
      puStack_3cc = (undefined1 *)0x15;
      pcStack_3d0 = (char *)0x5055a8;
      iVar10 = FUN_0062fbf0();
      *(double *)(&DAT_00792e38 + local_18 * 8) =
           (double)(iVar8 + 0x46 + iVar12 + iVar10) * _DAT_006bc270;
      local_94 = 0;
      while( true ) {
        iVar12 = (int)local_94;
        puStack_3cc = (undefined1 *)0x5055f8;
        iVar8 = FUN_0047f950();
        if (iVar8 <= iVar12) break;
        puStack_3cc = (undefined1 *)0x33;
        pcStack_3d0 = (char *)0x505603;
        iVar8 = FUN_0062fbf0();
        puStack_3cc = (undefined1 *)0x33;
        pcStack_3d0 = (char *)0x50560f;
        iVar12 = FUN_0062fbf0();
        puStack_3cc = (undefined1 *)0x33;
        pcStack_3d0 = (char *)0x50561d;
        iVar10 = FUN_0062fbf0();
        *(double *)(&DAT_007929e8 + local_94 * 8 + local_18 * 0x40) =
             (double)(iVar8 + 0x19 + iVar12 + iVar10) * _DAT_006bc270;
        local_94 = local_94 + 1;
      }
    }
    puStack_3cc = (undefined1 *)param_3;
    pcStack_3d0 = (char *)param_2;
    pcStack_3d4 = (char *)param_1;
    puStack_3d8 = (undefined *)0x50565b;
    fVar13 = (float10)FUN_00506b90();
    *(double *)(&DAT_00792df8 + local_18 * 8) = (double)fVar13;
    *(undefined2 *)(&DAT_00792498 + local_18 * 2) = 1;
    puStack_3cc = (undefined1 *)0x505680;
    iVar8 = FUN_0047d770();
    if (iVar8 == 3) {
      puStack_3cc = local_9c;
      pcStack_3d0 = (char *)0x50569b;
      FUN_004c8700();
      local_8._0_1_ = 0x3e;
      puStack_3cc = (undefined1 *)DAT_0079076c;
      pcStack_3d0 = (char *)DAT_007907a4;
      pcStack_3d4 = (char *)0x5056b7;
      puStack_3cc = (undefined1 *)FUN_00464130();
      local_8._0_1_ = 0x3f;
      pcStack_3d0 = (char *)0x5056df;
      cVar3 = FUN_00484ba0();
      local_8._0_1_ = 0x3e;
      puStack_3cc = (undefined1 *)0x5056f4;
      FUN_00464210();
      if (cVar3 != '\0') {
        *(undefined2 *)(&DAT_00792498 + local_18 * 2) = 9;
      }
      local_8._0_1_ = 5;
      puStack_3cc = (undefined1 *)0x50571b;
      FUN_00484470();
    }
    else {
      puStack_3cc = (undefined1 *)0x50572b;
      iVar8 = FUN_0047d770();
      if (iVar8 == 2) {
        puStack_3cc = local_a4;
        pcStack_3d0 = (char *)0x505746;
        FUN_004c8700();
        local_8._0_1_ = 0x40;
        puStack_3cc = (undefined1 *)DAT_0079076c;
        pcStack_3d0 = (char *)DAT_007907b0;
        pcStack_3d4 = (char *)0x505762;
        puStack_3cc = (undefined1 *)FUN_00464130();
        local_8._0_1_ = 0x41;
        pcStack_3d0 = (char *)0x50578a;
        cVar3 = FUN_00484ba0();
        local_8._0_1_ = 0x40;
        puStack_3cc = (undefined1 *)0x50579f;
        FUN_00464210();
        if (cVar3 != '\0') {
          *(undefined2 *)(&DAT_00792498 + local_18 * 2) = 9;
        }
        local_8._0_1_ = 5;
        puStack_3cc = (undefined1 *)0x5057c6;
        FUN_00484470();
      }
      else {
        puStack_3cc = (undefined1 *)0x5057d3;
        iVar8 = FUN_0047d770();
        if (iVar8 == 4) {
          puStack_3cc = local_ac;
          pcStack_3d0 = (char *)0x5057ea;
          FUN_004c8700();
          local_8._0_1_ = 0x42;
          puStack_3cc = &DAT_00792f88;
          pcStack_3d0 = (char *)0x5057fe;
          cVar3 = FUN_00484ba0();
          if (cVar3 != '\0') {
            *(undefined2 *)(&DAT_00792498 + local_18 * 2) = 9;
          }
          local_8._0_1_ = 5;
          puStack_3cc = (undefined1 *)0x505821;
          FUN_00484470();
        }
      }
    }
    if (param_1 == 7) {
      local_38 = 0;
      while( true ) {
        iVar12 = (int)local_38;
        puStack_3cc = (undefined1 *)0x50584e;
        iVar8 = FUN_0047f950();
        if (iVar8 <= iVar12) break;
        if (local_38 != local_18) {
          puStack_3cc = (undefined1 *)(int)local_38;
          pcStack_3d0 = (char *)0x505871;
          FUN_0047e390();
          puStack_3cc = (undefined1 *)0x505878;
          iVar8 = FUN_004c7010();
          if ((iVar8 == 1) &&
             (((0 < *(int *)(&DAT_00792710 + local_38 * 4 + local_18 * 0x20) ||
               (0 < *(int *)(&DAT_007924b0 + local_38 * 4 + local_18 * 0x20))) ||
              ((0 < *(int *)(&DAT_00791fd8 + local_38 * 4 + local_18 * 0x20) ||
               ((0 < *(int *)(&DAT_007925f0 + local_38 * 4 + local_18 * 0x20) ||
                (0 < *(int *)(&DAT_00792258 + local_38 * 4 + local_18 * 0x20))))))))) break;
        }
        local_38 = local_38 + 1;
      }
      iVar12 = (int)local_38;
      puStack_3cc = (undefined1 *)0x5058ff;
      iVar8 = FUN_0047f950();
      if (iVar12 == iVar8) {
        *(undefined2 *)(&DAT_00792498 + local_18 * 2) = 6;
      }
      local_38 = 0;
      while( true ) {
        iVar12 = (int)local_38;
        puStack_3cc = (undefined1 *)0x505933;
        iVar8 = FUN_0047f950();
        if (iVar8 <= iVar12) break;
        if (local_38 != local_18) {
          puStack_3cc = (undefined1 *)(int)local_38;
          pcStack_3d0 = (char *)0x505956;
          FUN_0047e390();
          puStack_3cc = (undefined1 *)0x50595d;
          iVar8 = FUN_004c7010();
          if ((iVar8 == 1) &&
             (((((0 < *(int *)(&DAT_00792710 + local_38 * 4 + local_18 * 0x20) ||
                 (0 < *(int *)(&DAT_007925f0 + local_38 * 4 + local_18 * 0x20))) ||
                (0 < *(int *)(&DAT_00792258 + local_38 * 4 + local_18 * 0x20))) ||
               ((0 < *(int *)(&DAT_007924b0 + local_38 * 4 + local_18 * 0x20) ||
                (0 < *(int *)(&DAT_00792e78 + local_38 * 4 + local_18 * 0x20))))) ||
              (0 < *(int *)(&DAT_00792ce8 + local_38 * 4 + local_18 * 0x20))))) break;
        }
        local_38 = local_38 + 1;
      }
      iVar12 = (int)local_38;
      puStack_3cc = (undefined1 *)0x5059fe;
      iVar8 = FUN_0047f950();
      if (iVar12 == iVar8) {
        *(undefined2 *)(&DAT_00792498 + local_18 * 2) = 6;
      }
      local_38 = 0;
      while( true ) {
        iVar12 = (int)local_38;
        puStack_3cc = (undefined1 *)0x505a32;
        iVar8 = FUN_0047f950();
        if (iVar8 <= iVar12) break;
        if (local_38 != local_18) {
          puStack_3cc = (undefined1 *)(int)local_38;
          pcStack_3d0 = (char *)0x505a55;
          FUN_0047e390();
          puStack_3cc = (undefined1 *)0x505a5c;
          iVar8 = FUN_004c7010();
          if ((iVar8 == 1) &&
             (((0 < *(int *)(&DAT_00792710 + local_38 * 4 + local_18 * 0x20) ||
               (0 < *(int *)(&DAT_007924b0 + local_38 * 4 + local_18 * 0x20))) ||
              ((0 < *(int *)(&DAT_00791fd8 + local_38 * 4 + local_18 * 0x20) ||
               (((0 < *(int *)(&DAT_007925f0 + local_38 * 4 + local_18 * 0x20) ||
                 (0 < *(int *)(&DAT_00792e78 + local_38 * 4 + local_18 * 0x20))) ||
                (0 < *(int *)(&DAT_00792880 + local_38 * 4 + local_18 * 0x20))))))))) break;
        }
        local_38 = local_38 + 1;
      }
      iVar12 = (int)local_38;
      puStack_3cc = (undefined1 *)0x505afd;
      iVar8 = FUN_0047f950();
      if (iVar12 == iVar8) {
        *(undefined2 *)(&DAT_00792498 + local_18 * 2) = 6;
      }
      if (*(short *)(&DAT_00792498 + local_18 * 2) == 6) {
        local_b0 = 0;
        local_b1 = '\0';
        local_38 = 0;
        while( true ) {
          iVar12 = (int)local_38;
          puStack_3cc = (undefined1 *)0x505b55;
          iVar8 = FUN_0047f950();
          if (iVar8 <= iVar12) break;
          if (local_38 != local_18) {
            puStack_3cc = (undefined1 *)(int)local_38;
            pcStack_3d0 = (char *)0x505b78;
            FUN_0047e390();
            puStack_3cc = (undefined1 *)0x505b7f;
            iVar8 = FUN_004c7010();
            if (iVar8 == 1) {
              local_b0 = local_b0 + 1;
              if (*(int *)(&DAT_00792398 + local_38 * 4 + local_18 * 0x20) < 1) {
                if (*(int *)(&DAT_00792ce8 + local_38 * 4 + local_18 * 0x20) < 1) {
                  if (*(int *)(&DAT_00792880 + local_38 * 4 + local_18 * 0x20) < 1) {
                    if (0 < *(int *)(&DAT_00792e78 + local_38 * 4 + local_18 * 0x20)) {
                      local_b1 = '\x01';
                    }
                  }
                  else {
                    local_b1 = '\x01';
                  }
                }
                else {
                  local_b1 = '\x01';
                }
              }
              else {
                local_b1 = '\x01';
              }
            }
          }
          local_38 = local_38 + 1;
        }
        if ((local_b1 == '\0') && (local_b0 == 1)) {
          *(undefined2 *)(&DAT_00792498 + local_18 * 2) = 7;
        }
      }
    }
    puStack_3cc = (undefined1 *)0x505c40;
    iVar8 = FUN_0047d770();
    if (iVar8 == 3) {
      puStack_3cc = local_bc;
      pcStack_3d0 = (char *)0x505c5b;
      FUN_004c8300();
      local_8._0_1_ = 0x43;
      puStack_3cc = (undefined1 *)DAT_0079076c;
      pcStack_3d0 = (char *)DAT_007907a4;
      pcStack_3d4 = (char *)0x505c78;
      puStack_3cc = (undefined1 *)FUN_00464130();
      local_8._0_1_ = 0x44;
      pcStack_3d0 = (char *)0x505ca0;
      cVar3 = FUN_00484ba0();
      local_8._0_1_ = 0x43;
      puStack_3cc = (undefined1 *)0x505cb5;
      FUN_00464210();
      if (cVar3 != '\0') {
        *(undefined2 *)(&DAT_00792498 + local_18 * 2) = 8;
      }
      local_8._0_1_ = 5;
      puStack_3cc = (undefined1 *)0x505cdc;
      FUN_00484470();
    }
    local_8 = CONCAT31(local_8._1_3_,2);
    puStack_3cc = (undefined1 *)0x505ce8;
    FUN_004646e0();
    local_8 = 0xffffffff;
    puStack_3cc = (undefined1 *)0x505cf7;
    FUN_00484470();
  }
  if (*(short *)(&DAT_00792498 + local_18 * 2) == 8) {
    puStack_3cc = (undefined1 *)0x4;
    pcStack_3d0 = (char *)0x505dd7;
    FUN_004c79d0();
    puStack_3cc = (undefined1 *)0x505de5;
    cVar3 = FUN_004f6640();
    if (cVar3 != '\0') {
      ExceptionList = local_10;
      return 2;
    }
    puStack_3cc = (undefined1 *)0x505e06;
    cVar3 = FUN_004f66e0();
    if (cVar3 != '\0') {
      ExceptionList = local_10;
      return 4;
    }
    ExceptionList = local_10;
    return 3;
  }
  if (*(short *)(&DAT_00792498 + local_18 * 2) == 7) {
    puStack_3cc = (undefined1 *)0x3;
    pcStack_3d0 = (char *)0x505e44;
    FUN_004c79d0();
    puStack_3cc = (undefined1 *)0x505e52;
    cVar3 = FUN_004f6640();
    if (cVar3 != '\0') {
      puStack_3cc = (undefined1 *)0x505e5e;
      cVar3 = FUN_00501040();
      if (cVar3 == '\0') {
        puStack_3cc = (undefined1 *)0x14;
        pcStack_3d0 = (char *)0x505e6c;
        iVar8 = FUN_0062fbf0();
        if (iVar8 == 0) {
          ExceptionList = local_10;
          return 1;
        }
      }
      ExceptionList = local_10;
      return 2;
    }
    puStack_3cc = (undefined1 *)0x505e99;
    cVar3 = FUN_004f66e0();
    if (cVar3 == '\0') {
      ExceptionList = local_10;
      return 3;
    }
    puStack_3cc = (undefined1 *)0x505eab;
    puStack_3cc = (undefined1 *)FUN_004c7050();
    pcStack_3d0 = (char *)0x505eba;
    local_c0 = FUN_004f6880();
    iVar12 = (int)local_c0;
    puStack_3cc = (undefined1 *)0x8;
    pcStack_3d0 = (char *)0x505ecf;
    iVar8 = FUN_0062fbf0();
    if (iVar8 + 3 < iVar12) {
      ExceptionList = local_10;
      return 3;
    }
    ExceptionList = local_10;
    return 4;
  }
  if (*(short *)(&DAT_00792498 + local_18 * 2) == 6) {
    puStack_3cc = (undefined1 *)0x3;
    pcStack_3d0 = (char *)0x505f18;
    FUN_004c79d0();
    puStack_3cc = (undefined1 *)0x505f26;
    cVar3 = FUN_004f6640();
    if (cVar3 == '\0') {
      puStack_3cc = (undefined1 *)0x505f6d;
      cVar3 = FUN_004f66e0();
      if (cVar3 != '\0') {
        ExceptionList = local_10;
        return 4;
      }
      ExceptionList = local_10;
      return 3;
    }
    puStack_3cc = (undefined1 *)0x505f32;
    cVar3 = FUN_00501040();
    if (cVar3 == '\0') {
      puStack_3cc = (undefined1 *)0x14;
      pcStack_3d0 = (char *)0x505f40;
      iVar8 = FUN_0062fbf0();
      if (iVar8 == 0) {
        ExceptionList = local_10;
        return 1;
      }
    }
    ExceptionList = local_10;
    return 2;
  }
  if (*(short *)(&DAT_00792498 + local_18 * 2) == 1) {
    puStack_3cc = (undefined1 *)0x505fac;
    cVar3 = FUN_004f6690();
    if (cVar3 == '\0') {
      puStack_3cc = (undefined1 *)param_3;
      pcStack_3d0 = (char *)param_1;
      pcStack_3d4 = (char *)0x5063ff;
      cVar3 = FUN_00508ed0();
      if (cVar3 == '\0') {
        ExceptionList = local_10;
        return 1;
      }
    }
    else {
      local_d0 = *(double *)(&DAT_00792df8 + local_18 * 8);
      if (4 < param_1) {
        puStack_3cc = (undefined1 *)0x505fe2;
        iVar8 = FUN_00686cc0();
        puStack_3cc = (undefined1 *)0x1e;
        pcStack_3d0 = (char *)0x505fee;
        iVar12 = FUN_0062fbf0();
        puStack_3cc = (undefined1 *)0xa;
        pcStack_3d0 = (char *)0x505ffa;
        iVar10 = FUN_0062fbf0();
        if (iVar12 - iVar10 < iVar8 + -0x50) {
          puStack_3cc = (undefined1 *)0x14;
          pcStack_3d0 = (char *)0x50600a;
          iVar8 = FUN_0062fbf0();
          puStack_3cc = (undefined1 *)0x14;
          pcStack_3d0 = (char *)0x506016;
          iVar12 = FUN_0062fbf0();
          local_d0 = (double)(iVar8 + iVar12) / _DAT_006b4b00 + local_d0;
        }
      }
      if (4 < param_1) {
        puStack_3cc = (undefined1 *)0x506054;
        iVar8 = FUN_00686cc0();
        puStack_3cc = (undefined1 *)0x1e;
        pcStack_3d0 = (char *)0x506060;
        iVar12 = FUN_0062fbf0();
        puStack_3cc = (undefined1 *)0xa;
        pcStack_3d0 = (char *)0x50606c;
        iVar10 = FUN_0062fbf0();
        if (iVar12 - iVar10 < iVar8 + -0x50) {
          puStack_3cc = (undefined1 *)0x14;
          pcStack_3d0 = (char *)0x50607c;
          iVar8 = FUN_0062fbf0();
          puStack_3cc = (undefined1 *)0x14;
          pcStack_3d0 = (char *)0x506088;
          iVar12 = FUN_0062fbf0();
          local_d0 = (double)(iVar8 + iVar12) / _DAT_006b4b00 + local_d0;
        }
      }
      local_e8 = _DAT_006c0e28;
      if (param_1 == 3) {
        puStack_3cc = (undefined1 *)0x5060c8;
        iVar8 = FUN_004c6db0();
        local_e8 = (double)iVar8 / _DAT_006b4b00 + local_e8;
      }
      puStack_3cc = (undefined1 *)0x5060f1;
      iVar8 = FUN_004c6df0();
      dVar1 = ((double)iVar8 / _DAT_006b4b00 + local_d0) * local_e8 * local_d0;
      puStack_3cc = (undefined1 *)0x506129;
      iVar8 = FUN_004f67d0();
      puStack_3cc = (undefined1 *)0x506149;
      iVar12 = FUN_004f6840();
      local_e0 = dVar1 / ((double)iVar8 / (double)iVar12);
      if (param_1 == 3) {
        puStack_3cc = (undefined1 *)0x506178;
        sVar4 = FUN_004da190();
        puStack_3cc = (undefined1 *)0x5;
        pcStack_3d0 = (char *)0x506182;
        iVar8 = FUN_0062fbf0();
        local_c4 = (short)((int)sVar4 / (iVar8 + 1));
      }
      else if (param_1 == 4) {
        puStack_3cc = (undefined1 *)0x5061a9;
        sVar4 = FUN_004da190();
        puStack_3cc = (undefined1 *)0x2;
        pcStack_3d0 = (char *)0x5061b3;
        iVar8 = FUN_0062fbf0();
        local_c4 = (short)((int)sVar4 / (iVar8 + 1));
      }
      else {
        puStack_3cc = (undefined1 *)0x5061d4;
        local_c4 = FUN_004da190();
        local_c4 = local_c4 * ((short)param_3 + -1);
      }
      puStack_3cc = (undefined1 *)0x5061f2;
      iVar8 = FUN_0047d770();
      if (iVar8 != 0) {
        local_c4 = 0;
      }
      puStack_3cc = (undefined1 *)(int)local_c4;
      pcStack_3d0 = (char *)0x50620c;
      iVar8 = FUN_0062fbf0();
      puStack_3cc = (undefined1 *)(int)local_c4;
      pcStack_3d0 = (char *)0x50621e;
      iVar12 = FUN_0062fbf0();
      puStack_3cc = (undefined1 *)(int)local_c4;
      pcStack_3d0 = (char *)0x506230;
      local_ec = FUN_0062fbf0();
      local_ec = (iVar8 + iVar12) - local_ec;
      puStack_3cc = (undefined1 *)0x506246;
      sVar4 = FUN_004da190();
      local_d4 = (int)sVar4;
      if (10 < local_d4) {
        local_d4 = 10;
      }
      puStack_3cc = (undefined1 *)0x50626d;
      iVar8 = FUN_0047d770();
      if (iVar8 == 3) {
        puStack_3cc = (undefined1 *)(0x16 - local_d4);
        pcStack_3d0 = (char *)0x506283;
        iVar8 = FUN_0062fbf0();
        local_ec = local_ec - iVar8;
      }
      else {
        puStack_3cc = (undefined1 *)0x5062a4;
        iVar8 = FUN_0047d770();
        if (iVar8 == 2) {
          puStack_3cc = (undefined1 *)((param_1 * -2 + 0x27) - local_d4);
          pcStack_3d0 = (char *)0x5062c9;
          iVar8 = FUN_0062fbf0();
          local_ec = local_ec - iVar8;
        }
        else {
          puStack_3cc = (undefined1 *)0x5062ea;
          iVar8 = FUN_0047d770();
          if (iVar8 == 0) {
            if (param_1 == 3) {
              puStack_3cc = (undefined1 *)(10 - local_d4);
              pcStack_3d0 = (char *)0x506329;
              iVar8 = FUN_0062fbf0();
              local_ec = local_ec - iVar8;
            }
            else if (param_1 == 4) {
              puStack_3cc = (undefined1 *)(10 - local_d4);
              pcStack_3d0 = (char *)0x506353;
              iVar8 = FUN_0062fbf0();
              local_ec = local_ec - iVar8 / 2;
            }
          }
          else {
            puStack_3cc = (undefined1 *)(0xf - local_d4);
            pcStack_3d0 = (char *)0x5062ff;
            iVar8 = FUN_0062fbf0();
            local_ec = local_ec - iVar8;
          }
        }
      }
      if (local_ec < -0x13) {
        local_ec = -0x13;
      }
      if (local_e0 <= (double)local_ec / _DAT_006b6978 + 1.0) {
        ExceptionList = local_10;
        return 0;
      }
      puStack_3cc = (undefined1 *)param_3;
      pcStack_3d0 = (char *)param_1;
      pcStack_3d4 = (char *)0x5063a6;
      cVar3 = FUN_00508ed0();
      if (cVar3 == '\0') {
        puStack_3cc = (undefined1 *)0x64;
        pcStack_3d0 = (char *)0x5063b9;
        iVar8 = FUN_0062fbf0();
        puStack_3cc = (undefined1 *)0x5063c9;
        sVar4 = FUN_004d9e60();
        if (iVar8 < sVar4) {
          *(undefined2 *)(&DAT_00792498 + local_18 * 2) = 2;
        }
        ExceptionList = local_10;
        return 3;
      }
    }
  }
  puStack_3cc = (undefined1 *)0x506420;
  iVar8 = FUN_0047d6b0();
  if (iVar8 == 1) {
    local_14 = 0;
  }
  else {
    puStack_3cc = (undefined1 *)0x506438;
    local_14 = FUN_004da240();
  }
  if (((*(short *)(&DAT_00792498 + local_18 * 2) == 5) ||
      (*(short *)(&DAT_00792498 + local_18 * 2) == 0xd)) ||
     (*(short *)(&DAT_00792498 + local_18 * 2) == 9)) {
    if (param_1 == 3) {
      puStack_3cc = (undefined1 *)(int)local_14;
      pcStack_3d0 = (char *)0x506480;
      cVar3 = FUN_004fe1e0();
      if (cVar3 == '\0') goto LAB_00506ace;
    }
    if (*(short *)(&DAT_00792498 + local_18 * 2) == 5) {
      puStack_3cc = (undefined1 *)0x5064aa;
      uVar14 = FUN_0047ce60();
      puStack_3cc = (undefined1 *)uVar14;
      pcStack_3d0 = (char *)CONCAT31((int3)((ulonglong)uVar14 >> 0x28),param_1 == 7);
      pcStack_3d4 = (char *)0x5064be;
      local_3b4 = FUN_004c6ef0();
    }
    else {
      puStack_3cc = (undefined1 *)0x5064d1;
      local_3b4 = FUN_004c6f50();
    }
    sVar4 = *(short *)(&DAT_007929c0 + local_18 * 2);
    puStack_3cc = (undefined1 *)0xa;
    pcStack_3d0 = (char *)0x5064e9;
    iVar8 = FUN_0062fbf0();
    puStack_3cc = (undefined1 *)((100 - sVar4 * iVar8) - local_3b4);
    pcStack_3d0 = (char *)0x506502;
    iVar8 = FUN_0062fbf0();
    puStack_3cc = (undefined1 *)0x3;
    pcStack_3d0 = (char *)param_1;
    pcStack_3d4 = (char *)0x506512;
    sVar4 = FUN_00509500();
    if (iVar8 < sVar4) {
      puStack_3cc = (undefined1 *)0x50652e;
      cVar3 = FUN_004f6640();
      if (cVar3 == '\0') {
        puStack_3cc = (undefined1 *)0x506543;
        cVar3 = FUN_004f66e0();
        if ((cVar3 == '\0') && (*(short *)(&DAT_00792498 + local_18 * 2) == 0xd)) {
          ExceptionList = local_10;
          return 0;
        }
      }
      puStack_3cc = (undefined1 *)0x3;
      pcStack_3d0 = (char *)0x50656e;
      FUN_004c79d0();
      puStack_3cc = (undefined1 *)0x64;
      pcStack_3d0 = (char *)0x506575;
      iVar8 = FUN_0062fbf0();
      puStack_3cc = (undefined1 *)0x506585;
      sVar4 = FUN_004d9000();
      if ((iVar8 < sVar4) && (*(short *)(&DAT_00792498 + local_18 * 2) != 9)) {
        puStack_3cc = (undefined1 *)0x64;
        pcStack_3d0 = (char *)0x5065a3;
        iVar8 = FUN_0062fbf0();
        puStack_3cc = (undefined1 *)0x5065b3;
        sVar4 = FUN_004d9000();
        if (iVar8 < (int)sVar4 / 2) {
          *(undefined2 *)(&DAT_00792498 + local_18 * 2) = 3;
        }
        else {
          *(undefined2 *)(&DAT_00792498 + local_18 * 2) = 4;
        }
      }
      else {
        puStack_3cc = (undefined1 *)0x64;
        pcStack_3d0 = (char *)0x5065e4;
        iVar8 = FUN_0062fbf0();
        puStack_3cc = (undefined1 *)0x5065f4;
        sVar4 = FUN_004d9020();
        if ((iVar8 < sVar4) && (*(short *)(&DAT_00792498 + local_18 * 2) != 9)) {
          *(undefined2 *)(&DAT_00792498 + local_18 * 2) = 1;
        }
      }
      puStack_3cc = (undefined1 *)0x506626;
      cVar3 = FUN_004f6640();
      if (cVar3 != '\0') {
        if ((&DAT_007926f0)[local_18] == '\0') {
          ExceptionList = local_10;
          return 2;
        }
        ExceptionList = local_10;
        return 1;
      }
      puStack_3cc = (undefined1 *)0x506661;
      cVar3 = FUN_004f66e0();
      if (cVar3 != '\0') {
        puStack_3cc = (undefined1 *)0x3;
        pcStack_3d0 = (char *)0x50666f;
        iVar8 = FUN_0062fbf0();
        if ((iVar8 != 0) && ((&DAT_007926f0)[local_18] == '\0')) {
          ExceptionList = local_10;
          return 4;
        }
      }
      ExceptionList = local_10;
      return 3;
    }
  }
  else if ((*(short *)(&DAT_00792498 + local_18 * 2) == 4) ||
          (*(short *)(&DAT_00792498 + local_18 * 2) == 0xc)) {
    if (param_1 == 3) {
      puStack_3cc = (undefined1 *)(int)local_14;
      pcStack_3d0 = (char *)0x5066d3;
      cVar3 = FUN_004fe1e0();
      if (cVar3 == '\0') goto LAB_00506ace;
    }
    if (*(short *)(&DAT_00792498 + local_18 * 2) == 4) {
      puStack_3cc = (undefined1 *)0x5066fd;
      puStack_3cc = (undefined1 *)FUN_0047ce60();
      pcStack_3d0 = (char *)CONCAT31((int3)((uint)extraout_ECX >> 8),param_1 == 7);
      pcStack_3d4 = (char *)0x506711;
      local_3b8 = FUN_004c6ef0();
    }
    else {
      puStack_3cc = (undefined1 *)0x506724;
      local_3b8 = FUN_004c6f50();
    }
    sVar4 = *(short *)(&DAT_007929c0 + local_18 * 2);
    puStack_3cc = (undefined1 *)0xa;
    pcStack_3d0 = (char *)0x50673c;
    iVar8 = FUN_0062fbf0();
    puStack_3cc = (undefined1 *)((100 - sVar4 * iVar8) - local_3b8);
    pcStack_3d0 = (char *)0x506755;
    iVar8 = FUN_0062fbf0();
    puStack_3cc = (undefined1 *)0x2;
    pcStack_3d0 = (char *)param_1;
    pcStack_3d4 = (char *)0x506765;
    sVar4 = FUN_00509500();
    if (iVar8 < sVar4) {
      puStack_3cc = (undefined1 *)0x506781;
      cVar3 = FUN_004f6640();
      if (cVar3 == '\0') {
        puStack_3cc = (undefined1 *)0x506796;
        cVar3 = FUN_004f66e0();
        if ((cVar3 == '\0') && (*(short *)(&DAT_00792498 + local_18 * 2) == 0xc)) {
          ExceptionList = local_10;
          return 0;
        }
      }
      puStack_3cc = (undefined1 *)0x2;
      pcStack_3d0 = (char *)0x5067c1;
      FUN_004c79d0();
      puStack_3cc = (undefined1 *)0x64;
      pcStack_3d0 = (char *)0x5067c8;
      iVar8 = FUN_0062fbf0();
      puStack_3cc = (undefined1 *)0x5067d8;
      sVar4 = FUN_004d9000();
      if (iVar8 < sVar4) {
        puStack_3cc = (undefined1 *)0x64;
        pcStack_3d0 = (char *)0x5067e6;
        iVar8 = FUN_0062fbf0();
        puStack_3cc = (undefined1 *)0x5067f6;
        sVar4 = FUN_004d9000();
        if (iVar8 < (int)sVar4 / 2) {
          *(undefined2 *)(&DAT_00792498 + local_18 * 2) = 2;
        }
        else {
          *(undefined2 *)(&DAT_00792498 + local_18 * 2) = 3;
        }
      }
      else {
        puStack_3cc = (undefined1 *)0x64;
        pcStack_3d0 = (char *)0x506827;
        iVar8 = FUN_0062fbf0();
        puStack_3cc = (undefined1 *)0x506837;
        sVar4 = FUN_004d9020();
        if (iVar8 < sVar4) {
          *(undefined2 *)(&DAT_00792498 + local_18 * 2) = 1;
        }
      }
      puStack_3cc = (undefined1 *)0x506859;
      cVar3 = FUN_004f6640();
      if (cVar3 != '\0') {
        if ((&DAT_007926f0)[local_18] == '\0') {
          ExceptionList = local_10;
          return 2;
        }
        ExceptionList = local_10;
        return 1;
      }
      puStack_3cc = (undefined1 *)0x506894;
      cVar3 = FUN_004f66e0();
      if (cVar3 != '\0') {
        puStack_3cc = (undefined1 *)0x3;
        pcStack_3d0 = (char *)0x5068a2;
        iVar8 = FUN_0062fbf0();
        if ((iVar8 != 0) && ((&DAT_007926f0)[local_18] == '\0')) {
          ExceptionList = local_10;
          return 4;
        }
      }
      ExceptionList = local_10;
      return 3;
    }
  }
  else if ((*(short *)(&DAT_00792498 + local_18 * 2) == 3) ||
          (*(short *)(&DAT_00792498 + local_18 * 2) == 0xb)) {
    if (param_1 == 3) {
      puStack_3cc = (undefined1 *)(int)local_14;
      pcStack_3d0 = (char *)0x506906;
      cVar3 = FUN_004fe1e0();
      if (cVar3 == '\0') goto LAB_00506ace;
    }
    if (*(short *)(&DAT_00792498 + local_18 * 2) == 3) {
      puStack_3cc = (undefined1 *)0x506930;
      uVar14 = FUN_0047ce60();
      puStack_3cc = (undefined1 *)uVar14;
      pcStack_3d0 = (char *)CONCAT31((int3)((ulonglong)uVar14 >> 0x28),param_1 == 7);
      pcStack_3d4 = (char *)0x506944;
      local_3bc = FUN_004c6ef0();
    }
    else {
      puStack_3cc = (undefined1 *)0x506957;
      local_3bc = FUN_004c6f50();
    }
    sVar4 = *(short *)(&DAT_007929c0 + local_18 * 2);
    puStack_3cc = (undefined1 *)0xa;
    pcStack_3d0 = (char *)0x50696f;
    iVar8 = FUN_0062fbf0();
    puStack_3cc = (undefined1 *)((100 - sVar4 * iVar8) - local_3bc);
    pcStack_3d0 = (char *)0x506988;
    iVar8 = FUN_0062fbf0();
    puStack_3cc = (undefined1 *)0x1;
    pcStack_3d0 = (char *)param_1;
    pcStack_3d4 = (char *)0x506998;
    sVar4 = FUN_00509500();
    if (iVar8 < sVar4) {
      puStack_3cc = (undefined1 *)0x5069b4;
      cVar3 = FUN_004f6640();
      if (cVar3 == '\0') {
        puStack_3cc = (undefined1 *)0x5069c9;
        cVar3 = FUN_004f66e0();
        if ((cVar3 == '\0') && (*(short *)(&DAT_00792498 + local_18 * 2) == 0xb)) {
          ExceptionList = local_10;
          return 0;
        }
      }
      puStack_3cc = (undefined1 *)0x1;
      pcStack_3d0 = (char *)0x5069f4;
      FUN_004c79d0();
      puStack_3cc = (undefined1 *)0x64;
      pcStack_3d0 = (char *)0x5069fb;
      iVar8 = FUN_0062fbf0();
      puStack_3cc = (undefined1 *)0x506a0b;
      sVar4 = FUN_004d9000();
      if (iVar8 < sVar4) {
        *(undefined2 *)(&DAT_00792498 + local_18 * 2) = 2;
      }
      else {
        puStack_3cc = (undefined1 *)0x64;
        pcStack_3d0 = (char *)0x506a28;
        iVar8 = FUN_0062fbf0();
        puStack_3cc = (undefined1 *)0x506a38;
        sVar4 = FUN_004d9020();
        if (iVar8 < sVar4) {
          *(undefined2 *)(&DAT_00792498 + local_18 * 2) = 1;
        }
      }
      puStack_3cc = (undefined1 *)0x506a5a;
      cVar3 = FUN_004f6640();
      if (cVar3 != '\0') {
        if ((&DAT_007926f0)[local_18] == '\0') {
          ExceptionList = local_10;
          return 2;
        }
        ExceptionList = local_10;
        return 1;
      }
      puStack_3cc = (undefined1 *)0x506a95;
      cVar3 = FUN_004f66e0();
      if (cVar3 != '\0') {
        puStack_3cc = (undefined1 *)0x3;
        pcStack_3d0 = (char *)0x506aa3;
        iVar8 = FUN_0062fbf0();
        if ((iVar8 != 0) && ((&DAT_007926f0)[local_18] == '\0')) {
          ExceptionList = local_10;
          return 4;
        }
      }
      ExceptionList = local_10;
      return 3;
    }
  }
LAB_00506ace:
  puStack_3cc = (undefined1 *)0x506adc;
  cVar3 = FUN_004f6640();
  if (cVar3 == '\0') {
    if (*(short *)(&DAT_00792498 + local_18 * 2) == 0xd) {
      ExceptionList = local_10;
      return 0;
    }
    if (*(short *)(&DAT_00792498 + local_18 * 2) == 0xc) {
      ExceptionList = local_10;
      return 0;
    }
    if (*(short *)(&DAT_00792498 + local_18 * 2) == 0xb) {
      ExceptionList = local_10;
      return 0;
    }
  }
  puStack_3cc = (undefined1 *)0x64;
  pcStack_3d0 = (char *)0x506b2a;
  iVar8 = FUN_0062fbf0();
  puStack_3cc = (undefined1 *)0x506b3a;
  sVar4 = FUN_004d9020();
  if (iVar8 < sVar4) {
    *(undefined2 *)(&DAT_00792498 + local_18 * 2) = 1;
  }
  puStack_3cc = (undefined1 *)0x506b5c;
  cVar3 = FUN_004f6640();
  if (cVar3 == '\0') {
    uVar9 = 3;
  }
  else {
    uVar9 = 1;
  }
  ExceptionList = local_10;
  return uVar9;
}

