// FUN_004fe290  004fe290

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004fe290(int param_1,int param_2,int param_3,int param_4)

{
  double dVar1;
  double dVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined2 uVar14;
  int iVar15;
  float10 fVar16;
  undefined **ppuVar17;
  undefined *puStack_2d8;
  undefined *puStack_2d4;
  undefined *puStack_2d0;
  char *pcStack_2cc;
  char *pcStack_2c8;
  undefined1 *puStack_2c4;
  uint uStack_2c0;
  int local_2b4;
  int local_2b0;
  int local_2ac;
  char local_26c;
  char local_230;
  undefined1 local_154;
  undefined1 local_153;
  undefined1 local_152;
  undefined1 local_151;
  undefined1 local_150 [8];
  undefined1 local_148 [10];
  undefined1 local_13e;
  char local_13d;
  undefined1 local_13c [11];
  char local_131;
  undefined1 local_130;
  undefined1 local_12f;
  undefined1 local_12e;
  undefined1 local_12d;
  undefined1 local_12c [9];
  undefined1 local_123;
  undefined1 local_122;
  undefined1 local_121;
  undefined1 local_120 [10];
  undefined1 local_116;
  undefined1 local_115;
  undefined1 local_114 [9];
  undefined1 local_10b;
  undefined1 local_10a;
  undefined1 local_109;
  undefined1 local_108 [9];
  undefined1 local_ff;
  undefined1 local_fe;
  undefined1 local_fd;
  undefined1 local_fc [9];
  undefined1 local_f3;
  undefined1 local_f2 [2];
  undefined1 local_f0;
  char local_ef;
  char local_ed;
  undefined1 *local_ec;
  undefined1 *local_e8;
  undefined1 local_e4 [8];
  undefined1 local_dc [8];
  undefined1 local_d4 [8];
  undefined1 local_cc [24];
  undefined1 local_b4 [8];
  undefined1 local_ac [8];
  int local_a4;
  double local_a0;
  double local_98;
  int local_90;
  short local_8c;
  double local_88;
  short local_80;
  undefined1 local_7c [8];
  undefined1 local_74 [4];
  undefined1 local_70 [4];
  undefined1 local_6c [4];
  undefined1 local_68 [4];
  undefined1 local_64 [4];
  undefined1 local_60 [4];
  undefined1 local_5c [8];
  undefined1 local_54 [4];
  undefined1 local_50 [8];
  undefined4 local_48;
  undefined4 local_44;
  undefined2 local_40;
  short local_3c;
  short local_38;
  undefined1 local_34 [8];
  short local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined2 local_20;
  int local_1c;
  undefined4 local_18;
  short local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a2b16;
  local_10 = ExceptionList;
  uStack_2c0 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  bVar4 = false;
  bVar3 = false;
  puStack_2c4 = (undefined1 *)0x4fe2cf;
  local_1c = FUN_0047e420();
  local_18 = 0;
  if (local_1c < 0) {
    puStack_2c4 = (undefined1 *)0x26e;
    pcStack_2c8 = "..\\Casino\\PokerStudAI.cpp";
    pcStack_2cc = "currentPlayer >= 0";
    puStack_2d0 = (undefined *)0x4fe2f3;
    FUN_005e9f20();
  }
  puStack_2c4 = (undefined1 *)0x4fe301;
  iVar10 = FUN_0047f950();
  if (iVar10 <= local_1c) {
    puStack_2c4 = (undefined1 *)0x26f;
    pcStack_2c8 = "..\\Casino\\PokerStudAI.cpp";
    pcStack_2cc = "currentPlayer < pokerGame->GetNumberOfPlayersAtTable()";
    puStack_2d0 = (undefined *)0x4fe31a;
    FUN_005e9f20();
  }
  puStack_2c4 = (undefined1 *)0x4fe328;
  DAT_007926f8 = FUN_0047e3b0();
  if ((short)(&DAT_00792de8)[local_1c] == param_1) {
    if ((((*(short *)(&DAT_00792980 + local_1c * 2) == param_3) ||
         (*(short *)(&DAT_00792498 + local_1c * 2) == 6)) ||
        (*(short *)(&DAT_00792498 + local_1c * 2) == 10)) ||
       (*(short *)(&DAT_00792498 + local_1c * 2) == 2)) {
      puStack_2c4 = (undefined1 *)param_3;
      pcStack_2c8 = (char *)param_2;
      pcStack_2cc = (char *)param_1;
      puStack_2d0 = (undefined *)0x4ffdb2;
      fVar16 = (float10)FUN_005010f0();
      *(double *)(&DAT_00792df8 + local_1c * 8) = (double)fVar16;
    }
    else {
      *(short *)(&DAT_00792980 + local_1c * 2) = (short)param_3;
      puStack_2c4 = (undefined1 *)param_3;
      pcStack_2c8 = (char *)param_2;
      pcStack_2cc = (char *)param_1;
      puStack_2d0 = (undefined *)0x4ffd85;
      fVar16 = (float10)FUN_005010f0();
      *(double *)(&DAT_00792df8 + local_1c * 8) = (double)fVar16;
      *(undefined2 *)(&DAT_00792498 + local_1c * 2) = 1;
    }
  }
  else {
    local_2c = 0;
    local_3c = 0;
    while( true ) {
      iVar15 = (int)local_3c;
      puStack_2c4 = (undefined1 *)0x4fe36a;
      iVar10 = FUN_0047f950();
      if (iVar10 <= iVar15) break;
      if (local_3c != local_1c) {
        puStack_2c4 = (undefined1 *)(int)local_3c;
        pcStack_2c8 = (char *)0x4fe389;
        local_18 = FUN_0047e390();
        puStack_2c4 = (undefined1 *)0x4fe394;
        iVar10 = FUN_004c7010();
        if (iVar10 == 1) {
          puStack_2c4 = (undefined1 *)0x4fe3a1;
          puStack_2c4 = (undefined1 *)FUN_004c7050();
          pcStack_2c8 = (char *)0x4fe3b0;
          sVar6 = FUN_004f6a90();
          local_2c = local_2c + sVar6;
        }
      }
      local_3c = local_3c + 1;
    }
    puStack_2c4 = (undefined1 *)0x4fe3ca;
    local_38 = FUN_004d6db0();
    puStack_2c4 = (undefined1 *)(int)local_38;
    pcStack_2c8 = (char *)0x4fe3d8;
    sVar7 = FUN_0062fbf0();
    puStack_2c4 = (undefined1 *)(int)local_38;
    pcStack_2c8 = (char *)0x4fe3e7;
    sVar8 = FUN_0062fbf0();
    sVar6 = local_2c;
    puStack_2c4 = (undefined1 *)0x4fe3fb;
    sVar9 = FUN_004d6d70();
    puStack_2c4 = (undefined1 *)(sVar9 + 1);
    pcStack_2c8 = (char *)0x4fe407;
    sVar9 = FUN_0062fbf0();
    *(short *)(&DAT_007925b0 + local_1c * 2) = (sVar7 - sVar8) - sVar6 * sVar9;
    puStack_2c4 = (undefined1 *)0x4fe422;
    FUN_00484300();
    local_8 = 0;
    puStack_2c4 = (undefined1 *)0x4fe434;
    iVar10 = FUN_0047d6f0();
    if (iVar10 == 1) {
      puStack_2c4 = local_ac;
      pcStack_2c8 = (char *)0x4fe44b;
      puStack_2c4 = (undefined1 *)FUN_004c80b0();
      local_8._0_1_ = 1;
      pcStack_2c8 = (char *)0x4fe470;
      FUN_00484490();
      local_8 = (uint)local_8._1_3_ << 8;
      puStack_2c4 = (undefined1 *)0x4fe47f;
      FUN_00484470();
    }
    else {
      puStack_2c4 = local_b4;
      pcStack_2c8 = (char *)0x4fe493;
      puStack_2c4 = (undefined1 *)FUN_004c7c40();
      local_8._0_1_ = 2;
      pcStack_2c8 = (char *)0x4fe4b8;
      FUN_00484490();
      local_8 = (uint)local_8._1_3_ << 8;
      puStack_2c4 = (undefined1 *)0x4fe4c7;
      FUN_00484470();
    }
    puStack_2c4 = (undefined1 *)0x4fe4cf;
    FUN_004646a0();
    local_8._0_1_ = 3;
    puStack_2c4 = (undefined1 *)0x4fe4db;
    FUN_004646f0();
    puStack_2c4 = (undefined1 *)0x4fe4e6;
    iVar10 = FUN_0047d6f0();
    if (iVar10 == 1) {
      puStack_2c4 = (undefined1 *)DAT_0079076c;
      pcStack_2c8 = (char *)DAT_00790768;
      pcStack_2cc = (char *)0x4fe508;
      puStack_2c4 = (undefined1 *)FUN_00464130();
      local_8._0_1_ = 4;
      pcStack_2c8 = (char *)0x4fe52d;
      FUN_004648b0();
      local_8._0_1_ = 3;
      puStack_2c4 = (undefined1 *)0x4fe53c;
      FUN_00464210();
      puStack_2c4 = (undefined1 *)DAT_00790754;
      pcStack_2c8 = (char *)DAT_00790768;
      pcStack_2cc = (char *)0x4fe554;
      puStack_2c4 = (undefined1 *)FUN_00464130();
      local_8._0_1_ = 5;
      pcStack_2c8 = (char *)0x4fe579;
      FUN_004648b0();
      local_8._0_1_ = 3;
      puStack_2c4 = (undefined1 *)0x4fe588;
      FUN_00464210();
      puStack_2c4 = (undefined1 *)DAT_00790764;
      pcStack_2c8 = (char *)DAT_00790768;
      pcStack_2cc = (char *)0x4fe5a0;
      puStack_2c4 = (undefined1 *)FUN_00464130();
      local_8._0_1_ = 6;
      pcStack_2c8 = (char *)0x4fe5c5;
      FUN_004648b0();
      local_8._0_1_ = 3;
      puStack_2c4 = (undefined1 *)0x4fe5d4;
      FUN_00464210();
      puStack_2c4 = (undefined1 *)DAT_00790770;
      pcStack_2c8 = (char *)DAT_00790768;
      pcStack_2cc = (char *)0x4fe5ed;
      puStack_2c4 = (undefined1 *)FUN_00464130();
      local_8._0_1_ = 7;
      pcStack_2c8 = (char *)0x4fe612;
      FUN_004648b0();
      local_8._0_1_ = 3;
      puStack_2c4 = (undefined1 *)0x4fe621;
      FUN_00464210();
      puStack_2c4 = (undefined1 *)DAT_0079076c;
      pcStack_2c8 = (char *)DAT_00790794;
      pcStack_2cc = (char *)0x4fe639;
      puStack_2c4 = (undefined1 *)FUN_00464130();
      local_8._0_1_ = 8;
      pcStack_2c8 = (char *)0x4fe65e;
      FUN_004648b0();
      local_8._0_1_ = 3;
      puStack_2c4 = (undefined1 *)0x4fe66d;
      FUN_00464210();
      puStack_2c4 = (undefined1 *)DAT_00790754;
      pcStack_2c8 = (char *)DAT_00790794;
      pcStack_2cc = (char *)0x4fe685;
      puStack_2c4 = (undefined1 *)FUN_00464130();
      local_8._0_1_ = 9;
      pcStack_2c8 = (char *)0x4fe6aa;
      FUN_004648b0();
      local_8._0_1_ = 3;
      puStack_2c4 = (undefined1 *)0x4fe6b9;
      FUN_00464210();
      puStack_2c4 = (undefined1 *)DAT_00790764;
      pcStack_2c8 = (char *)DAT_00790794;
      pcStack_2cc = (char *)0x4fe6d2;
      puStack_2c4 = (undefined1 *)FUN_00464130();
      local_8._0_1_ = 10;
      pcStack_2c8 = (char *)0x4fe6f7;
      FUN_004648b0();
      local_8._0_1_ = 3;
      puStack_2c4 = (undefined1 *)0x4fe706;
      FUN_00464210();
      puStack_2c4 = (undefined1 *)DAT_00790770;
      pcStack_2c8 = (char *)DAT_00790794;
      pcStack_2cc = (char *)0x4fe71e;
      puStack_2c4 = (undefined1 *)FUN_00464130();
      local_8._0_1_ = 0xb;
      pcStack_2c8 = (char *)0x4fe743;
      FUN_004648b0();
      local_8._0_1_ = 3;
      puStack_2c4 = (undefined1 *)0x4fe752;
      FUN_00464210();
      puStack_2c4 = (undefined1 *)DAT_00790780;
      pcStack_2c8 = (char *)DAT_0079077c;
      pcStack_2cc = (char *)0x4fe76a;
      puStack_2c4 = (undefined1 *)FUN_00464130();
      local_8._0_1_ = 0xc;
      pcStack_2c8 = (char *)0x4fe78f;
      FUN_00464770();
      local_8._0_1_ = 3;
      puStack_2c4 = (undefined1 *)0x4fe79e;
      FUN_00464210();
      puStack_2c4 = (undefined1 *)DAT_00790780;
      pcStack_2c8 = (char *)DAT_0079077c;
      pcStack_2cc = (char *)0x4fe7b7;
      puStack_2c4 = (undefined1 *)FUN_00464130();
      local_8._0_1_ = 0xd;
      pcStack_2c8 = (char *)0x4fe7dc;
      FUN_00464770();
      local_8._0_1_ = 3;
      puStack_2c4 = (undefined1 *)0x4fe7eb;
      FUN_00464210();
      puStack_2c4 = (undefined1 *)DAT_00790780;
      pcStack_2c8 = (char *)DAT_0079077c;
      pcStack_2cc = (char *)0x4fe803;
      puStack_2c4 = (undefined1 *)FUN_00464130();
      local_8._0_1_ = 0xe;
      pcStack_2c8 = (char *)0x4fe828;
      FUN_00464770();
      local_8._0_1_ = 3;
      puStack_2c4 = (undefined1 *)0x4fe837;
      FUN_00464210();
      puStack_2c4 = (undefined1 *)DAT_00790780;
      pcStack_2c8 = (char *)DAT_0079077c;
      pcStack_2cc = (char *)0x4fe84f;
      puStack_2c4 = (undefined1 *)FUN_00464130();
      local_8._0_1_ = 0xf;
      pcStack_2c8 = (char *)0x4fe874;
      FUN_00464770();
      local_8._0_1_ = 3;
      puStack_2c4 = (undefined1 *)0x4fe883;
      FUN_00464210();
      puStack_2c4 = (undefined1 *)DAT_00790780;
      pcStack_2c8 = (char *)DAT_0079077c;
      pcStack_2cc = (char *)0x4fe89c;
      puStack_2c4 = (undefined1 *)FUN_00464130();
      local_8._0_1_ = 0x10;
      pcStack_2c8 = (char *)0x4fe8c1;
      FUN_00464770();
      local_8._0_1_ = 3;
      puStack_2c4 = (undefined1 *)0x4fe8d0;
      FUN_00464210();
      puStack_2c4 = (undefined1 *)DAT_00790780;
      pcStack_2c8 = (char *)DAT_0079077c;
      pcStack_2cc = (char *)0x4fe8e8;
      puStack_2c4 = (undefined1 *)FUN_00464130();
      local_8._0_1_ = 0x11;
      pcStack_2c8 = (char *)0x4fe90d;
      FUN_00464770();
      local_8._0_1_ = 3;
      puStack_2c4 = (undefined1 *)0x4fe91c;
      FUN_00464210();
      puStack_2c4 = (undefined1 *)DAT_00790780;
      pcStack_2c8 = (char *)DAT_0079077c;
      pcStack_2cc = (char *)0x4fe934;
      puStack_2c4 = (undefined1 *)FUN_00464130();
      local_8._0_1_ = 0x12;
      pcStack_2c8 = (char *)0x4fe959;
      FUN_00464770();
      local_8._0_1_ = 3;
      puStack_2c4 = (undefined1 *)0x4fe968;
      FUN_00464210();
      puStack_2c4 = (undefined1 *)DAT_00790780;
      pcStack_2c8 = (char *)DAT_0079077c;
      pcStack_2cc = (char *)0x4fe981;
      puStack_2c4 = (undefined1 *)FUN_00464130();
      local_8._0_1_ = 0x13;
      pcStack_2c8 = (char *)0x4fe9a6;
      FUN_00464770();
      local_8._0_1_ = 3;
      puStack_2c4 = (undefined1 *)0x4fe9b5;
      FUN_00464210();
    }
    puStack_2c4 = local_34;
    pcStack_2c8 = (char *)0x4fe9c1;
    FUN_004649c0();
    local_3c = 0;
    while( true ) {
      iVar15 = (int)local_3c;
      puStack_2c4 = (undefined1 *)0x4fe9e4;
      iVar10 = FUN_0047f950();
      if (iVar10 <= iVar15) break;
      if (local_3c != local_1c) {
        puStack_2c4 = (undefined1 *)(int)local_3c;
        pcStack_2c8 = (char *)0x4fea07;
        local_18 = FUN_0047e390();
        puStack_2c4 = (undefined1 *)0x4fea12;
        iVar10 = FUN_004c7010();
        if (iVar10 != 0) {
          puStack_2c4 = (undefined1 *)0x4fea25;
          iVar10 = FUN_0047d6f0();
          if (iVar10 == 1) {
            puStack_2c4 = local_cc;
            pcStack_2c8 = (char *)0x4fea39;
            puStack_2c4 = (undefined1 *)FUN_004c84a0();
            local_8._0_1_ = 0x14;
            pcStack_2c8 = (char *)0x4fea5e;
            FUN_004649c0();
            local_8._0_1_ = 3;
            puStack_2c4 = (undefined1 *)0x4fea6d;
            FUN_00484470();
          }
          else {
            puStack_2c4 = local_d4;
            pcStack_2c8 = (char *)0x4fea7e;
            puStack_2c4 = (undefined1 *)FUN_004c8300();
            local_8._0_1_ = 0x15;
            pcStack_2c8 = (char *)0x4feaa3;
            FUN_004649c0();
            local_8._0_1_ = 3;
            puStack_2c4 = (undefined1 *)0x4feab2;
            FUN_00484470();
          }
        }
      }
      local_3c = local_3c + 1;
    }
    puStack_2c4 = &DAT_007920e8 + local_1c * 2;
    pcStack_2c8 = &DAT_00792f78 + local_1c * 2;
    pcStack_2cc = &DAT_007926fc + local_1c * 2;
    puStack_2d0 = &DAT_007925c0 + local_1c * 2;
    puStack_2d4 = &DAT_00792248 + local_1c * 2;
    puStack_2d8 = &DAT_00792218 + local_1c * 2;
    FUN_004958e0(local_28,local_24,local_20,&DAT_007929d8 + local_1c * 2,
                 &DAT_00792830 + local_1c * 2,&DAT_007920f8 + local_1c * 2,
                 &DAT_00792820 + local_1c * 2);
    local_3c = 0;
    while( true ) {
      iVar15 = (int)local_3c;
      puStack_2c4 = (undefined1 *)0x4feb68;
      iVar10 = FUN_0047f950();
      if (iVar10 <= iVar15) break;
      if (local_3c == local_1c) {
        local_48 = local_28;
        local_44 = local_24;
        local_40 = local_20;
        local_8._0_1_ = 0x16;
        puStack_2c4 = local_34;
        pcStack_2c8 = (char *)0x4feba1;
        FUN_00464860();
        puStack_2c4 = (undefined1 *)0x4febac;
        iVar10 = FUN_0047d6f0();
        if (iVar10 == 1) {
          puStack_2c4 = local_dc;
          pcStack_2c8 = (char *)0x4febc3;
          puStack_2c4 = (undefined1 *)FUN_004c84a0();
          local_8._0_1_ = 0x17;
          pcStack_2c8 = (char *)0x4febe8;
          FUN_004649c0();
          local_8 = CONCAT31(local_8._1_3_,0x16);
          puStack_2c4 = (undefined1 *)0x4febf7;
          FUN_00484470();
        }
        else {
          puStack_2c4 = local_e4;
          pcStack_2c8 = (char *)0x4fec0b;
          puStack_2c4 = (undefined1 *)FUN_004c8300();
          local_8._0_1_ = 0x18;
          pcStack_2c8 = (char *)0x4fec30;
          FUN_004649c0();
          local_8 = CONCAT31(local_8._1_3_,0x16);
          puStack_2c4 = (undefined1 *)0x4fec3f;
          FUN_00484470();
        }
        puStack_2c4 = (undefined1 *)0x4fec4a;
        iVar10 = FUN_0047d6f0();
        if (iVar10 == 1) {
          puStack_2c4 = &DAT_00791ed8 + local_3c * 4 + local_1c * 0x20;
          pcStack_2c8 = &DAT_00792108 + local_3c * 4 + local_1c * 0x20;
          pcStack_2cc = &DAT_00792be8 + local_3c * 4 + local_1c * 0x20;
          puStack_2d0 = (undefined *)((param_1 == 7) + 2);
          local_e8 = (undefined1 *)&puStack_2d8;
          uVar14 = (undefined2)((uint)&puStack_2d8 >> 0x10);
          FUN_004c84a0(&puStack_2d8);
          FUN_00496370(local_48,local_44,CONCAT22(uVar14,local_40));
        }
        else {
          puStack_2c4 = &DAT_00791ed8 + local_3c * 4 + local_1c * 0x20;
          pcStack_2c8 = &DAT_00792108 + local_3c * 4 + local_1c * 0x20;
          pcStack_2cc = &DAT_00792be8 + local_3c * 4 + local_1c * 0x20;
          puStack_2d0 = (undefined *)((param_1 == 7) + 2);
          local_ec = (undefined1 *)&puStack_2d8;
          uVar14 = (undefined2)((uint)&puStack_2d8 >> 0x10);
          FUN_004c8300(&puStack_2d8);
          FUN_00496370(local_48,local_44,CONCAT22(uVar14,local_40));
        }
        puStack_2c4 = (undefined1 *)0x64;
        pcStack_2c8 = (undefined *)0x4fed5f;
        iVar10 = FUN_0062fbf0();
        puStack_2c4 = (undefined1 *)0x4fedc5;
        iVar15 = FUN_00686cc0();
        if (iVar10 < iVar15) {
          (&DAT_007924a8)[local_3c] = 1;
        }
        else {
          (&DAT_007924a8)[local_3c] = 0;
        }
        puStack_2c4 = (undefined1 *)0x4fedec;
        iVar10 = FUN_0047d6f0();
        if (iVar10 == 1) {
          if (param_1 == 3) {
            puStack_2c4 = local_50;
            pcStack_2c8 = (char *)0x4fee0e;
            FUN_004c84a0();
            local_8._0_1_ = 0x19;
            puStack_2c4 = (undefined1 *)DAT_00790780;
            pcStack_2c8 = (char *)DAT_0079077c;
            pcStack_2cc = (undefined *)0x4fee2a;
            puStack_2c4 = (undefined1 *)FUN_00464130();
            local_8._0_1_ = 0x1a;
            pcStack_2c8 = (undefined *)0x4fee4f;
            local_ed = FUN_00484ba0();
            local_8._0_1_ = 0x19;
            puStack_2c4 = (undefined1 *)0x4fee64;
            FUN_00464210();
            if (local_ed == '\0') {
              *(undefined2 *)(&DAT_007929c0 + local_3c * 2) = 0;
            }
            else {
              *(undefined2 *)(&DAT_007929c0 + local_3c * 2) = 10;
            }
            local_8 = CONCAT31(local_8._1_3_,0x16);
            puStack_2c4 = (undefined1 *)0x4fee99;
            FUN_00484470();
          }
          else if (param_1 == 4) {
            puStack_2c4 = local_5c;
            pcStack_2c8 = (char *)0x4feeb7;
            FUN_004c84a0();
            local_8._0_1_ = 0x1b;
            puStack_2c4 = (undefined1 *)0x0;
            pcStack_2c8 = (char *)0x0;
            pcStack_2cc = (char *)0x0;
            puStack_2d0 = (undefined *)0x1;
            puStack_2d4 = (undefined *)0x1;
            puStack_2d8 = (undefined *)0x1;
            FUN_00485940(local_54,1);
            local_8._0_1_ = 0x1c;
            puStack_2c4 = (undefined1 *)DAT_007913b0;
            pcStack_2c8 = &local_f0;
            pcStack_2cc = (char *)0x4feeef;
            FUN_004a2160();
            pcStack_2c8 = (char *)0x4feef6;
            cVar5 = FUN_004a1f00();
            if (cVar5 == '\0') {
LAB_004fef5c:
              local_230 = '\0';
            }
            else {
              puStack_2c4 = (undefined1 *)DAT_00790780;
              pcStack_2c8 = (char *)DAT_0079077c;
              pcStack_2cc = (char *)0x4fef15;
              puStack_2c4 = (undefined1 *)FUN_00464130();
              local_8 = CONCAT31(local_8._1_3_,0x1d);
              bVar3 = true;
              pcStack_2c8 = (char *)0x4fef49;
              cVar5 = FUN_00484ba0();
              if (cVar5 == '\0') goto LAB_004fef5c;
              local_230 = '\x01';
            }
            local_ef = local_230;
            local_8 = 0x1c;
            if (bVar3) {
              bVar3 = false;
              puStack_2c4 = (undefined1 *)0x4fef96;
              FUN_00464210();
            }
            if (local_ef == '\0') {
              puStack_2c4 = (undefined1 *)DAT_007913b0;
              pcStack_2c8 = &local_f3;
              pcStack_2cc = (undefined *)0x4feffb;
              FUN_004a2160();
              pcStack_2c8 = (undefined *)0x4ff002;
              cVar5 = FUN_004a1f00();
              if (cVar5 == '\0') {
                *(undefined2 *)(&DAT_007929c0 + local_3c * 2) = 0;
              }
              else {
                *(undefined2 *)(&DAT_007929c0 + local_3c * 2) = 3;
              }
            }
            else {
              puStack_2c4 = (undefined1 *)DAT_007913c8;
              pcStack_2c8 = local_f2;
              pcStack_2cc = (undefined *)0x4fefb7;
              FUN_004a21b0();
              pcStack_2c8 = (undefined *)0x4fefbe;
              cVar5 = FUN_004a1fb0();
              if (cVar5 == '\0') {
                *(undefined2 *)(&DAT_007929c0 + local_3c * 2) = 5;
              }
              else {
                *(undefined2 *)(&DAT_007929c0 + local_3c * 2) = 10;
              }
            }
            local_8._0_1_ = 0x1b;
            puStack_2c4 = (undefined1 *)0x4ff033;
            FUN_004a20f0();
            local_8 = CONCAT31(local_8._1_3_,0x16);
            puStack_2c4 = (undefined1 *)0x4ff03f;
            FUN_00484470();
          }
          else if (param_1 == 5) {
            puStack_2c4 = local_fc;
            pcStack_2c8 = (char *)0x4ff060;
            FUN_004c84a0();
            local_8._0_1_ = 0x1e;
            puStack_2c4 = (undefined1 *)0x0;
            pcStack_2c8 = (char *)0x0;
            pcStack_2cc = (char *)0x0;
            puStack_2d0 = (undefined *)0x1;
            puStack_2d4 = (undefined *)0x1;
            puStack_2d8 = (undefined *)0x1;
            FUN_00485940(local_60,1);
            local_8 = CONCAT31(local_8._1_3_,0x20);
            puStack_2c4 = (undefined1 *)0x4ff0a2;
            FUN_00484470();
            puStack_2c4 = (undefined1 *)DAT_00791418;
            pcStack_2c8 = &local_fd;
            pcStack_2cc = (char *)0x4ff0b7;
            FUN_004a2160();
            pcStack_2c8 = (char *)0x4ff0be;
            cVar5 = FUN_004a1f00();
            if (cVar5 == '\0') {
              puStack_2c4 = (undefined1 *)DAT_007913b0;
              pcStack_2c8 = &local_ff;
              pcStack_2cc = (undefined *)0x4ff11e;
              FUN_004a2160();
              pcStack_2c8 = (undefined *)0x4ff125;
              cVar5 = FUN_004a1f00();
              if (cVar5 == '\0') {
                *(undefined2 *)(&DAT_007929c0 + local_3c * 2) = 0;
              }
              else {
                *(undefined2 *)(&DAT_007929c0 + local_3c * 2) = 3;
              }
            }
            else {
              puStack_2c4 = (undefined1 *)DAT_007913c8;
              pcStack_2c8 = &local_fe;
              pcStack_2cc = (undefined *)0x4ff0da;
              FUN_004a21b0();
              pcStack_2c8 = (undefined *)0x4ff0e1;
              cVar5 = FUN_004a1fb0();
              if (cVar5 == '\0') {
                *(undefined2 *)(&DAT_007929c0 + local_3c * 2) = 8;
              }
              else {
                *(undefined2 *)(&DAT_007929c0 + local_3c * 2) = 10;
              }
            }
            local_8 = CONCAT31(local_8._1_3_,0x16);
            puStack_2c4 = (undefined1 *)0x4ff156;
            FUN_004a20f0();
          }
          else if (5 < param_1) {
            puStack_2c4 = local_108;
            pcStack_2c8 = (char *)0x4ff177;
            FUN_004c84a0();
            local_8._0_1_ = 0x21;
            puStack_2c4 = (undefined1 *)0x0;
            pcStack_2c8 = (char *)0x0;
            pcStack_2cc = (char *)0x0;
            puStack_2d0 = (undefined *)0x1;
            puStack_2d4 = (undefined *)0x1;
            puStack_2d8 = (undefined *)0x1;
            FUN_00485940(local_64,1);
            local_8 = CONCAT31(local_8._1_3_,0x23);
            puStack_2c4 = (undefined1 *)0x4ff1b9;
            FUN_00484470();
            puStack_2c4 = (undefined1 *)DAT_00791394;
            pcStack_2c8 = &local_109;
            pcStack_2cc = (undefined *)0x4ff1cf;
            FUN_004a2160();
            pcStack_2c8 = (undefined *)0x4ff1d6;
            cVar5 = FUN_004a1f00();
            if (cVar5 == '\0') {
              puStack_2c4 = (undefined1 *)DAT_00791418;
              pcStack_2c8 = &local_10a;
              pcStack_2cc = (undefined *)0x4ff203;
              FUN_004a2160();
              pcStack_2c8 = (undefined *)0x4ff20a;
              cVar5 = FUN_004a1f00();
              if (cVar5 == '\0') {
                *(undefined2 *)(&DAT_007929c0 + local_3c * 2) = 0;
              }
              else {
                puStack_2c4 = (undefined1 *)DAT_007913c8;
                pcStack_2c8 = &local_10b;
                pcStack_2cc = (undefined *)0x4ff227;
                FUN_004a21b0();
                pcStack_2c8 = (undefined *)0x4ff22e;
                cVar5 = FUN_004a1fb0();
                if (cVar5 == '\0') {
                  *(undefined2 *)(&DAT_007929c0 + local_3c * 2) = 6;
                }
                else {
                  *(undefined2 *)(&DAT_007929c0 + local_3c * 2) = 10;
                }
              }
            }
            else {
              *(undefined2 *)(&DAT_007929c0 + local_3c * 2) = 10;
            }
            local_8 = CONCAT31(local_8._1_3_,0x16);
            puStack_2c4 = (undefined1 *)0x4ff26f;
            FUN_004a20f0();
          }
        }
        else if (param_1 == 3) {
          puStack_2c4 = local_114;
          pcStack_2c8 = (char *)0x4ff290;
          FUN_004c8300();
          local_8._0_1_ = 0x24;
          puStack_2c4 = (undefined1 *)0x0;
          pcStack_2c8 = (char *)0x0;
          pcStack_2cc = (char *)0x0;
          puStack_2d0 = (undefined *)0x1;
          puStack_2d4 = (undefined *)0x1;
          puStack_2d8 = (undefined *)0x1;
          FUN_00485940(local_68,1);
          local_8 = CONCAT31(local_8._1_3_,0x26);
          puStack_2c4 = (undefined1 *)0x4ff2d2;
          FUN_00484470();
          puStack_2c4 = (undefined1 *)DAT_007913c8;
          pcStack_2c8 = &local_115;
          pcStack_2cc = (undefined *)0x4ff2e8;
          FUN_004a21b0();
          pcStack_2c8 = (undefined *)0x4ff2ef;
          cVar5 = FUN_004a1fb0();
          if (cVar5 == '\0') {
            puStack_2c4 = (undefined1 *)DAT_007913e0;
            pcStack_2c8 = &local_116;
            pcStack_2cc = (undefined *)0x4ff31b;
            FUN_004a21b0();
            pcStack_2c8 = (undefined *)0x4ff322;
            cVar5 = FUN_004a1fb0();
            if (cVar5 == '\0') {
              *(undefined2 *)(&DAT_007929c0 + local_3c * 2) = 0;
            }
            else {
              *(undefined2 *)(&DAT_007929c0 + local_3c * 2) = 1;
            }
          }
          else {
            *(undefined2 *)(&DAT_007929c0 + local_3c * 2) = 4;
          }
          local_8 = CONCAT31(local_8._1_3_,0x16);
          puStack_2c4 = (undefined1 *)0x4ff353;
          FUN_004a20f0();
        }
        else if (param_1 == 4) {
          puStack_2c4 = local_120;
          pcStack_2c8 = (char *)0x4ff374;
          FUN_004c8300();
          local_8._0_1_ = 0x27;
          puStack_2c4 = (undefined1 *)0x0;
          pcStack_2c8 = (char *)0x0;
          pcStack_2cc = (char *)0x0;
          puStack_2d0 = (undefined *)0x1;
          puStack_2d4 = (undefined *)0x1;
          puStack_2d8 = (undefined *)0x1;
          FUN_00485940(local_6c,1);
          local_8 = CONCAT31(local_8._1_3_,0x29);
          puStack_2c4 = (undefined1 *)0x4ff3b6;
          FUN_00484470();
          puStack_2c4 = (undefined1 *)DAT_007913b0;
          pcStack_2c8 = &local_121;
          pcStack_2cc = (undefined *)0x4ff3cc;
          FUN_004a2160();
          pcStack_2c8 = (undefined *)0x4ff3d3;
          cVar5 = FUN_004a1f00();
          if (cVar5 == '\0') {
            *(undefined2 *)(&DAT_007929c0 + local_3c * 2) = 0;
          }
          else {
            puStack_2c4 = (undefined1 *)DAT_00791400;
            pcStack_2c8 = &local_122;
            pcStack_2cc = (undefined *)0x4ff3f0;
            FUN_004a21b0();
            pcStack_2c8 = (undefined *)0x4ff3f7;
            cVar5 = FUN_004a2040();
            if (cVar5 == '\0') {
              puStack_2c4 = (undefined1 *)DAT_007913f8;
              pcStack_2c8 = &local_123;
              pcStack_2cc = (undefined *)0x4ff423;
              FUN_004a21b0();
              pcStack_2c8 = (undefined *)0x4ff42a;
              cVar5 = FUN_004a2040();
              if (cVar5 == '\0') {
                *(undefined2 *)(&DAT_007929c0 + local_3c * 2) = 5;
              }
              else {
                *(undefined2 *)(&DAT_007929c0 + local_3c * 2) = 7;
              }
            }
            else {
              *(undefined2 *)(&DAT_007929c0 + local_3c * 2) = 10;
            }
          }
          local_8 = CONCAT31(local_8._1_3_,0x16);
          puStack_2c4 = (undefined1 *)0x4ff46b;
          FUN_004a20f0();
        }
        else if (param_1 == 5) {
          puStack_2c4 = local_12c;
          pcStack_2c8 = (char *)0x4ff48c;
          FUN_004c8300();
          local_8._0_1_ = 0x2a;
          puStack_2c4 = (undefined1 *)0x0;
          pcStack_2c8 = (char *)0x0;
          pcStack_2cc = (char *)0x0;
          puStack_2d0 = (undefined *)0x1;
          puStack_2d4 = (undefined *)0x1;
          puStack_2d8 = (undefined *)0x1;
          FUN_00485940(local_70,1);
          local_8._0_1_ = 0x2c;
          puStack_2c4 = (undefined1 *)0x4ff4ce;
          FUN_00484470();
          puStack_2c4 = (undefined1 *)DAT_00791418;
          pcStack_2c8 = &local_12d;
          pcStack_2cc = (undefined *)0x4ff4e3;
          FUN_004a2160();
          pcStack_2c8 = (undefined *)0x4ff4ea;
          cVar5 = FUN_004a1e10();
          if (cVar5 == '\0') {
            puStack_2c4 = (undefined1 *)DAT_007913b0;
            pcStack_2c8 = &local_12e;
            pcStack_2cc = (undefined *)0x4ff51a;
            FUN_004a2160();
            pcStack_2c8 = (char *)0x4ff521;
            cVar5 = FUN_004a1e10();
            if (cVar5 == '\0') {
              puStack_2c4 = local_13c;
              pcStack_2c8 = (undefined *)0x4ff5b5;
              FUN_004c8300();
              local_8._0_1_ = 0x2d;
              puStack_2c4 = (undefined1 *)0x4ff5d6;
              sVar6 = FUN_00484bf0();
              local_131 = sVar6 == 3;
              local_8._0_1_ = 0x2c;
              puStack_2c4 = (undefined1 *)0x4ff5f6;
              FUN_00484470();
              if (local_131 == '\0') {
                puStack_2c4 = (undefined1 *)DAT_00791390;
                pcStack_2c8 = &local_13e;
                pcStack_2cc = (undefined *)0x4ff62a;
                FUN_004a2160();
                pcStack_2c8 = (undefined *)0x4ff631;
                cVar5 = FUN_004a1e10();
                if (cVar5 == '\0') {
LAB_004ff68d:
                  local_26c = '\0';
                }
                else {
                  puStack_2c4 = local_148;
                  pcStack_2c8 = (undefined *)0x4ff64a;
                  FUN_004c8300();
                  local_8 = CONCAT31(local_8._1_3_,0x2e);
                  bVar4 = true;
                  puStack_2c4 = (undefined1 *)0x4ff67a;
                  sVar6 = FUN_00484db0();
                  if (sVar6 != 0) goto LAB_004ff68d;
                  local_26c = '\x01';
                }
                local_13d = local_26c;
                local_8._0_1_ = 0x2c;
                local_8._1_3_ = 0;
                if (bVar4) {
                  bVar4 = false;
                  puStack_2c4 = (undefined1 *)0x4ff6c7;
                  FUN_00484470();
                }
                if (local_13d == '\0') {
                  *(undefined2 *)(&DAT_007929c0 + local_3c * 2) = 0;
                }
                else {
                  *(undefined2 *)(&DAT_007929c0 + local_3c * 2) = 5;
                }
              }
              else {
                *(undefined2 *)(&DAT_007929c0 + local_3c * 2) = 7;
              }
            }
            else {
              puStack_2c4 = (undefined1 *)DAT_007913e0;
              pcStack_2c8 = &local_12f;
              pcStack_2cc = (undefined *)0x4ff53e;
              FUN_004a21b0();
              pcStack_2c8 = (undefined *)0x4ff545;
              cVar5 = FUN_004a2040();
              if (cVar5 == '\0') {
                puStack_2c4 = (undefined1 *)DAT_0079138c;
                pcStack_2c8 = &local_130;
                pcStack_2cc = (undefined *)0x4ff572;
                FUN_004a21b0();
                pcStack_2c8 = (undefined *)0x4ff579;
                cVar5 = FUN_004a2040();
                if (cVar5 == '\0') {
                  *(undefined2 *)(&DAT_007929c0 + local_3c * 2) = 4;
                }
                else {
                  *(undefined2 *)(&DAT_007929c0 + local_3c * 2) = 7;
                }
              }
              else {
                *(undefined2 *)(&DAT_007929c0 + local_3c * 2) = 10;
              }
            }
          }
          else {
            *(undefined2 *)(&DAT_007929c0 + local_3c * 2) = 10;
          }
          local_8 = CONCAT31(local_8._1_3_,0x16);
          puStack_2c4 = (undefined1 *)0x4ff6fc;
          FUN_004a20f0();
        }
        else if (5 < param_1) {
          puStack_2c4 = local_7c;
          pcStack_2c8 = (char *)0x4ff71a;
          FUN_004c8300();
          local_8._0_1_ = 0x2f;
          puStack_2c4 = local_150;
          pcStack_2c8 = (char *)0x4ff730;
          FUN_004c8300();
          local_8._0_1_ = 0x30;
          puStack_2c4 = (undefined1 *)0x0;
          pcStack_2c8 = (char *)0x0;
          pcStack_2cc = (char *)0x0;
          puStack_2d0 = (undefined *)0x1;
          puStack_2d4 = (undefined *)0x1;
          puStack_2d8 = (undefined *)0x1;
          FUN_00485940(local_74,1);
          local_8 = CONCAT31(local_8._1_3_,0x32);
          puStack_2c4 = (undefined1 *)0x4ff772;
          FUN_00484470();
          puStack_2c4 = (undefined1 *)DAT_00791380;
          pcStack_2c8 = &local_151;
          pcStack_2cc = (undefined *)0x4ff788;
          FUN_004a2160();
          pcStack_2c8 = (undefined *)0x4ff78f;
          cVar5 = FUN_004a1f00();
          if (cVar5 == '\0') {
            puStack_2c4 = (undefined1 *)DAT_007913b0;
            pcStack_2c8 = &local_152;
            pcStack_2cc = (undefined *)0x4ff7be;
            FUN_004a2160();
            pcStack_2c8 = (undefined *)0x4ff7c5;
            cVar5 = FUN_004a1e10();
            if (cVar5 == '\0') {
              puStack_2c4 = (undefined1 *)0x4ff83e;
              sVar6 = FUN_00484db0();
              if (sVar6 == 0) {
                *(undefined2 *)(&DAT_007929c0 + local_3c * 2) = 10;
              }
              else {
                puStack_2c4 = (undefined1 *)0x4ff85d;
                sVar6 = FUN_00484db0();
                if (sVar6 == 1) {
                  *(undefined2 *)(&DAT_007929c0 + local_3c * 2) = 5;
                }
                else {
                  puStack_2c4 = (undefined1 *)0x4ff87d;
                  sVar6 = FUN_00484bf0();
                  if (sVar6 == 4) {
                    *(undefined2 *)(&DAT_007929c0 + local_3c * 2) = 10;
                  }
                  else {
                    puStack_2c4 = (undefined1 *)0x4ff89d;
                    sVar6 = FUN_00484bf0();
                    if (sVar6 == 3) {
                      *(undefined2 *)(&DAT_007929c0 + local_3c * 2) = 4;
                    }
                    else {
                      *(undefined2 *)(&DAT_007929c0 + local_3c * 2) = 0;
                    }
                  }
                }
              }
            }
            else {
              puStack_2c4 = (undefined1 *)DAT_007913e0;
              pcStack_2c8 = &local_153;
              pcStack_2cc = (undefined *)0x4ff7e1;
              FUN_004a21b0();
              pcStack_2c8 = (undefined *)0x4ff7e8;
              cVar5 = FUN_004a2040();
              if (cVar5 == '\0') {
                puStack_2c4 = (undefined1 *)DAT_0079138c;
                pcStack_2c8 = &local_154;
                pcStack_2cc = (undefined *)0x4ff815;
                FUN_004a21b0();
                pcStack_2c8 = (undefined *)0x4ff81c;
                cVar5 = FUN_004a2040();
                if (cVar5 != '\0') {
                  *(undefined2 *)(&DAT_007929c0 + local_3c * 2) = 2;
                }
              }
              else {
                *(undefined2 *)(&DAT_007929c0 + local_3c * 2) = 5;
              }
            }
          }
          else {
            *(undefined2 *)(&DAT_007929c0 + local_3c * 2) = 10;
          }
          local_8._0_1_ = 0x2f;
          puStack_2c4 = (undefined1 *)0x4ff8cf;
          FUN_004a20f0();
          local_8 = CONCAT31(local_8._1_3_,0x16);
          puStack_2c4 = (undefined1 *)0x4ff8db;
          FUN_00484470();
        }
        local_8._0_1_ = 3;
        puStack_2c4 = (undefined1 *)0x4ff8e7;
        FUN_004646e0();
      }
      else {
        puStack_2c4 = (undefined1 *)(int)local_3c;
        pcStack_2c8 = (undefined *)0x4ff8fc;
        FUN_0047e390();
        puStack_2c4 = (undefined1 *)0x4ff903;
        iVar10 = FUN_004c7010();
        if (iVar10 == 1) {
          puStack_2c4 = (undefined1 *)0x4ff917;
          iVar10 = FUN_0047d6f0();
          if (iVar10 == 1) {
            puStack_2c4 = &DAT_00791ed8 + local_3c * 4 + local_1c * 0x20;
            pcStack_2c8 = &DAT_00792108 + local_3c * 4 + local_1c * 0x20;
            pcStack_2cc = &DAT_00792be8 + local_3c * 4 + local_1c * 0x20;
            puStack_2d0 = (undefined *)((param_1 == 7) + 2);
            ppuVar17 = &puStack_2d8;
            FUN_0047e390((int)local_3c);
            FUN_004c84a0(ppuVar17);
            FUN_00496370(local_28,local_24,local_20);
          }
          else {
            puStack_2c4 = &DAT_00791ed8 + local_3c * 4 + local_1c * 0x20;
            pcStack_2c8 = &DAT_00792108 + local_3c * 4 + local_1c * 0x20;
            pcStack_2cc = &DAT_00792be8 + local_3c * 4 + local_1c * 0x20;
            puStack_2d0 = (undefined *)((param_1 == 7) + 2);
            ppuVar17 = &puStack_2d8;
            FUN_0047e390((int)local_3c);
            FUN_004c8300(ppuVar17);
            FUN_00496370(local_28,local_24,local_20);
          }
        }
      }
      local_3c = local_3c + 1;
    }
    (&DAT_00792de8)[local_1c] = (undefined2)param_1;
    *(short *)(&DAT_00792980 + local_1c * 2) = (short)param_3;
    if (param_1 == 3) {
      puStack_2c4 = (undefined1 *)0x15;
      pcStack_2c8 = (char *)0x4ffa78;
      iVar10 = FUN_0062fbf0();
      puStack_2c4 = (undefined1 *)0x15;
      pcStack_2c8 = (char *)0x4ffa84;
      iVar15 = FUN_0062fbf0();
      puStack_2c4 = (undefined1 *)0x15;
      pcStack_2c8 = (char *)0x4ffa92;
      iVar11 = FUN_0062fbf0();
      puStack_2c4 = (undefined1 *)0x15;
      pcStack_2c8 = (char *)0x4ffa9e;
      iVar12 = FUN_0062fbf0();
      *(double *)(&DAT_00792e38 + local_1c * 8) =
           (double)(iVar10 + 0x3c + iVar15 + iVar11 + iVar12) * _DAT_006bc270;
      local_80 = 0;
      while( true ) {
        iVar15 = (int)local_80;
        puStack_2c4 = (undefined1 *)0x4ffae2;
        iVar10 = FUN_0047f950();
        if (iVar10 <= iVar15) break;
        puStack_2c4 = (undefined1 *)0x33;
        pcStack_2c8 = (char *)0x4ffaed;
        iVar10 = FUN_0062fbf0();
        puStack_2c4 = (undefined1 *)0x33;
        pcStack_2c8 = (char *)0x4ffaf9;
        iVar15 = FUN_0062fbf0();
        puStack_2c4 = (undefined1 *)0x33;
        pcStack_2c8 = (char *)0x4ffb07;
        iVar11 = FUN_0062fbf0();
        *(double *)(&DAT_007929e8 + local_80 * 8 + local_1c * 0x40) =
             (double)(iVar10 + 0x19 + iVar15 + iVar11) * _DAT_006bc270;
        local_80 = local_80 + 1;
      }
    }
    puStack_2c4 = (undefined1 *)param_3;
    pcStack_2c8 = (char *)param_2;
    pcStack_2cc = (char *)param_1;
    puStack_2d0 = (undefined *)0x4ffb42;
    fVar16 = (float10)FUN_005010f0();
    *(double *)(&DAT_00792df8 + local_1c * 8) = (double)fVar16;
    *(undefined2 *)(&DAT_00792498 + local_1c * 2) = 1;
    if (4 < param_1) {
      local_3c = 0;
      while( true ) {
        iVar15 = (int)local_3c;
        puStack_2c4 = (undefined1 *)0x4ffb89;
        iVar10 = FUN_0047f950();
        if (iVar10 <= iVar15) break;
        if (local_3c != local_1c) {
          puStack_2c4 = (undefined1 *)(int)local_3c;
          pcStack_2c8 = (char *)0x4ffbac;
          FUN_0047e390();
          puStack_2c4 = (undefined1 *)0x4ffbb3;
          iVar10 = FUN_004c7010();
          if (iVar10 == 1) {
            local_88 = (double)*(int *)(&DAT_00791ed8 + local_3c * 4 + local_1c * 0x20) /
                       (double)(*(int *)(&DAT_00791ed8 + local_3c * 4 + local_1c * 0x20) +
                                *(int *)(&DAT_00792108 + local_3c * 4 + local_1c * 0x20) +
                               *(int *)(&DAT_00792be8 + local_3c * 4 + local_1c * 0x20));
            puStack_2c4 = (undefined1 *)0x4ffc1f;
            iVar10 = FUN_0047d6f0();
            dVar1 = _DAT_006be530;
            if (iVar10 == 1) {
              dVar1 = _DAT_006c0c38;
            }
            if (local_88 < dVar1) break;
          }
        }
        local_3c = local_3c + 1;
      }
      iVar15 = (int)local_3c;
      puStack_2c4 = (undefined1 *)0x4ffc64;
      iVar10 = FUN_0047f950();
      if (iVar15 == iVar10) {
        *(undefined2 *)(&DAT_00792498 + local_1c * 2) = 10;
      }
    }
    if (param_1 == 7) {
      local_3c = 0;
      while( true ) {
        iVar15 = (int)local_3c;
        puStack_2c4 = (undefined1 *)0x4ffca2;
        iVar10 = FUN_0047f950();
        if (iVar10 <= iVar15) break;
        if (local_3c != local_1c) {
          puStack_2c4 = (undefined1 *)(int)local_3c;
          pcStack_2c8 = (char *)0x4ffcc1;
          FUN_0047e390();
          puStack_2c4 = (undefined1 *)0x4ffcc8;
          iVar10 = FUN_004c7010();
          if ((iVar10 == 1) && (0 < *(int *)(&DAT_00792be8 + local_3c * 4 + local_1c * 0x20)))
          break;
        }
        local_3c = local_3c + 1;
      }
      iVar15 = (int)local_3c;
      puStack_2c4 = (undefined1 *)0x4ffcf4;
      iVar10 = FUN_0047f950();
      if (iVar15 == iVar10) {
        *(undefined2 *)(&DAT_00792498 + local_1c * 2) = 6;
      }
    }
    local_8 = (uint)local_8._1_3_ << 8;
    puStack_2c4 = (undefined1 *)0x4ffd11;
    FUN_004646e0();
    local_8 = 0xffffffff;
    puStack_2c4 = (undefined1 *)0x4ffd20;
    FUN_00484470();
  }
  if (*(short *)(&DAT_00792498 + local_1c * 2) == 6) {
    puStack_2c4 = (undefined1 *)0x3;
    pcStack_2c8 = (char *)0x4ffddc;
    FUN_004c79d0();
    puStack_2c4 = (undefined1 *)0x4ffdea;
    cVar5 = FUN_004f6640();
    if (cVar5 == '\0') {
      puStack_2c4 = (undefined1 *)0x4ffe31;
      cVar5 = FUN_004f66e0();
      if (cVar5 != '\0') {
        ExceptionList = local_10;
        return 4;
      }
      ExceptionList = local_10;
      return 3;
    }
    puStack_2c4 = (undefined1 *)0x4ffdf6;
    cVar5 = FUN_00501040();
    if (cVar5 == '\0') {
      puStack_2c4 = (undefined1 *)0x14;
      pcStack_2c8 = (char *)0x4ffe04;
      iVar10 = FUN_0062fbf0();
      if (iVar10 == 0) {
        ExceptionList = local_10;
        return 1;
      }
    }
    ExceptionList = local_10;
    return 2;
  }
  if (*(short *)(&DAT_00792498 + local_1c * 2) == 10) {
    puStack_2c4 = (undefined1 *)0x3;
    pcStack_2c8 = (char *)0x4ffe6f;
    FUN_004c79d0();
    puStack_2c4 = (undefined1 *)0x4ffe7d;
    cVar5 = FUN_004f6640();
    if (cVar5 == '\0') {
      puStack_2c4 = (undefined1 *)0x4ffec4;
      cVar5 = FUN_004f66e0();
      if (cVar5 != '\0') {
        puStack_2c4 = (undefined1 *)0x64;
        pcStack_2c8 = (char *)0x4ffed2;
        iVar10 = FUN_0062fbf0();
        puStack_2c4 = (undefined1 *)0x4ffee2;
        sVar6 = FUN_004d6c70();
        if (iVar10 < sVar6) {
          puStack_2c4 = (undefined1 *)0x64;
          pcStack_2c8 = (char *)0x4ffef0;
          iVar10 = FUN_0062fbf0();
          puStack_2c4 = (undefined1 *)0x4fff00;
          sVar6 = FUN_004d6c70();
          if (iVar10 < sVar6) {
            *(undefined2 *)(&DAT_00792498 + local_1c * 2) = 5;
          }
        }
        ExceptionList = local_10;
        return 4;
      }
      ExceptionList = local_10;
      return 3;
    }
    puStack_2c4 = (undefined1 *)0x4ffe89;
    cVar5 = FUN_00501040();
    if (cVar5 == '\0') {
      puStack_2c4 = (undefined1 *)0xa;
      pcStack_2c8 = (char *)0x4ffe97;
      iVar10 = FUN_0062fbf0();
      if (iVar10 == 0) {
        ExceptionList = local_10;
        return 1;
      }
    }
    ExceptionList = local_10;
    return 2;
  }
  if (*(short *)(&DAT_00792498 + local_1c * 2) == 1) {
    puStack_2c4 = (undefined1 *)0x4fff4c;
    cVar5 = FUN_004f6690();
    if (cVar5 == '\0') {
      puStack_2c4 = (undefined1 *)param_3;
      pcStack_2c8 = (char *)param_1;
      pcStack_2cc = (char *)0x5004c4;
      cVar5 = FUN_00502080();
      if (cVar5 == '\0') {
        ExceptionList = local_10;
        return 1;
      }
    }
    else {
      local_a0 = _DAT_006c0c30;
      if (param_1 == 3) {
        puStack_2c4 = (undefined1 *)0x4fff74;
        iVar10 = FUN_004c6db0();
        local_a0 = (double)iVar10 / _DAT_006b4b00 + local_a0;
      }
      puStack_2c4 = (undefined1 *)0x4fff9d;
      iVar10 = FUN_004c6df0();
      dVar2 = ((double)iVar10 / _DAT_006b4b00 + _DAT_006b2c48) * local_a0;
      dVar1 = *(double *)(&DAT_00792df8 + local_1c * 8);
      puStack_2c4 = (undefined1 *)0x4fffd9;
      iVar10 = FUN_004f67d0();
      puStack_2c4 = (undefined1 *)0x4ffff9;
      iVar15 = FUN_004f6840();
      local_98 = (dVar2 * dVar1) / ((double)iVar10 / (double)iVar15);
      if (param_1 == 3) {
        puStack_2c4 = (undefined1 *)0x500028;
        iVar10 = FUN_0047d6b0();
        if (iVar10 != 0) goto LAB_0050004d;
        puStack_2c4 = (undefined1 *)0x50003a;
        iVar10 = FUN_004f67d0();
        if (iVar10 != param_4) goto LAB_0050004d;
        local_8c = 0;
      }
      else {
LAB_0050004d:
        if (param_1 == 3) {
          puStack_2c4 = (undefined1 *)0x50005e;
          sVar6 = FUN_004d7e00();
          puStack_2c4 = (undefined1 *)0x5;
          pcStack_2c8 = (char *)0x500068;
          iVar10 = FUN_0062fbf0();
          local_8c = (short)((int)sVar6 / (iVar10 + 1));
        }
        else if (param_1 == 4) {
          puStack_2c4 = (undefined1 *)0x50008f;
          sVar6 = FUN_004d7e00();
          puStack_2c4 = (undefined1 *)0x2;
          pcStack_2c8 = (char *)0x500099;
          iVar10 = FUN_0062fbf0();
          local_8c = (short)((int)sVar6 / (iVar10 + 1));
        }
        else {
          puStack_2c4 = (undefined1 *)0x5000ba;
          local_8c = FUN_004d7e00();
          local_8c = local_8c * ((short)param_3 + -1);
        }
      }
      puStack_2c4 = (undefined1 *)(int)local_8c;
      pcStack_2c8 = (char *)0x5000da;
      iVar10 = FUN_0062fbf0();
      puStack_2c4 = (undefined1 *)(int)local_8c;
      pcStack_2c8 = (char *)0x5000ec;
      iVar15 = FUN_0062fbf0();
      puStack_2c4 = (undefined1 *)(int)local_8c;
      pcStack_2c8 = (char *)0x5000fe;
      local_a4 = FUN_0062fbf0();
      local_a4 = (iVar10 + iVar15) - local_a4;
      puStack_2c4 = (undefined1 *)0x500114;
      sVar6 = FUN_004d7e00();
      local_90 = (int)sVar6;
      if (10 < local_90) {
        local_90 = 10;
      }
      if (param_1 == 3) {
        puStack_2c4 = (undefined1 *)0x500141;
        iVar10 = FUN_0047d6f0();
        if (iVar10 != 1) goto LAB_0050016d;
        puStack_2c4 = (undefined1 *)(0x16 - local_90);
        pcStack_2c8 = (char *)0x500157;
        iVar10 = FUN_0062fbf0();
        local_a4 = local_a4 - iVar10;
      }
      else {
LAB_0050016d:
        if (param_1 == 4) {
          puStack_2c4 = (undefined1 *)0x50017e;
          iVar10 = FUN_0047d6f0();
          if (iVar10 == 1) {
            puStack_2c4 = (undefined1 *)(0xf - local_90);
            pcStack_2c8 = (char *)0x500194;
            iVar10 = FUN_0062fbf0();
            local_a4 = local_a4 - iVar10;
            goto LAB_00500371;
          }
        }
        puStack_2c4 = (undefined1 *)0x5001b5;
        iVar10 = FUN_0047d6f0();
        if (iVar10 == 1) {
          puStack_2c4 = (undefined1 *)(10 - local_90);
          pcStack_2c8 = (char *)0x5001cb;
          iVar10 = FUN_0062fbf0();
          local_a4 = local_a4 - iVar10;
        }
        else if (param_1 == 3) {
          puStack_2c4 = (undefined1 *)(0x14 - local_90);
          pcStack_2c8 = (char *)0x5001f8;
          iVar10 = FUN_0062fbf0();
          local_a4 = local_a4 - iVar10;
          puStack_2c4 = (undefined1 *)(0x11 - local_90);
          pcStack_2c8 = (char *)0x50021a;
          iVar10 = FUN_0062fbf0();
          local_a4 = local_a4 - iVar10;
          puStack_2c4 = (undefined1 *)(10 - local_90);
          pcStack_2c8 = (char *)0x50023c;
          iVar10 = FUN_0062fbf0();
          local_a4 = local_a4 - iVar10;
        }
        else if (param_1 == 4) {
          puStack_2c4 = (undefined1 *)(0x12 - local_90);
          pcStack_2c8 = (char *)0x500269;
          iVar10 = FUN_0062fbf0();
          local_a4 = local_a4 - iVar10;
          puStack_2c4 = (undefined1 *)(0x10 - local_90);
          pcStack_2c8 = (char *)0x50028b;
          iVar10 = FUN_0062fbf0();
          local_a4 = local_a4 - iVar10;
          puStack_2c4 = (undefined1 *)(10 - local_90);
          pcStack_2c8 = (char *)0x5002ad;
          iVar10 = FUN_0062fbf0();
          local_a4 = local_a4 - iVar10;
        }
        else if (param_1 == 5) {
          puStack_2c4 = (undefined1 *)(10 - local_90);
          pcStack_2c8 = (char *)0x5002da;
          iVar10 = FUN_0062fbf0();
          local_a4 = local_a4 - iVar10;
          puStack_2c4 = (undefined1 *)(10 - local_90);
          pcStack_2c8 = (char *)0x5002fc;
          iVar10 = FUN_0062fbf0();
          local_a4 = local_a4 - iVar10 / 3;
          puStack_2c4 = (undefined1 *)(10 - local_90);
          pcStack_2c8 = (char *)0x500326;
          iVar10 = FUN_0062fbf0();
          local_a4 = local_a4 - iVar10 / 3;
        }
        else if (param_1 == 6) {
          puStack_2c4 = (undefined1 *)(10 - local_90);
          pcStack_2c8 = (char *)0x500358;
          iVar10 = FUN_0062fbf0();
          local_a4 = local_a4 - iVar10 / 3;
        }
      }
LAB_00500371:
      puStack_2c4 = (undefined1 *)0x50037c;
      iVar10 = FUN_0047d6f0();
      if (iVar10 == 1) {
        puStack_2c4 = (undefined1 *)((0x11 - param_1) - local_90);
        pcStack_2c8 = (char *)0x500395;
        iVar10 = FUN_0062fbf0();
        local_a4 = local_a4 - iVar10;
        puStack_2c4 = (undefined1 *)((0x11 - param_1) - local_90);
        pcStack_2c8 = (char *)0x5003ba;
        iVar10 = FUN_0062fbf0();
        local_a4 = local_a4 - iVar10;
        puStack_2c4 = (undefined1 *)((0x11 - param_1) - local_90);
        pcStack_2c8 = (char *)0x5003df;
        iVar10 = FUN_0062fbf0();
        local_a4 = local_a4 - iVar10;
      }
      if (local_a4 < -0x13) {
        local_a4 = -0x13;
      }
      if (local_98 <= (double)local_a4 / _DAT_006b6978 + 1.0) {
        if ((short)(&DAT_00792990)[local_1c] == param_1) {
          puStack_2c4 = (undefined1 *)(10 - param_1);
          pcStack_2c8 = (char *)0x50048e;
          iVar10 = FUN_0062fbf0();
          if (iVar10 != 0) {
            *(undefined2 *)(&DAT_00792498 + local_1c * 2) = 2;
            ExceptionList = local_10;
            return 3;
          }
        }
        ExceptionList = local_10;
        return 0;
      }
      puStack_2c4 = (undefined1 *)param_3;
      pcStack_2c8 = (char *)param_1;
      pcStack_2cc = (char *)0x50042d;
      cVar5 = FUN_00502080();
      if (cVar5 == '\0') {
        puStack_2c4 = (undefined1 *)0x64;
        pcStack_2c8 = (char *)0x500440;
        iVar10 = FUN_0062fbf0();
        puStack_2c4 = (undefined1 *)0x500450;
        sVar6 = FUN_004d7ad0();
        if (iVar10 < sVar6) {
          *(undefined2 *)(&DAT_00792498 + local_1c * 2) = 2;
        }
        ExceptionList = local_10;
        return 3;
      }
    }
  }
  puStack_2c4 = (undefined1 *)0x5004e5;
  iVar10 = FUN_0047d6b0();
  if (iVar10 == 1) {
    local_14 = 0;
  }
  else {
    puStack_2c4 = (undefined1 *)0x5004fd;
    local_14 = FUN_004d7eb0();
  }
  if ((*(short *)(&DAT_00792498 + local_1c * 2) == 5) ||
     (*(short *)(&DAT_00792498 + local_1c * 2) == 0xd)) {
    if (param_1 == 3) {
      puStack_2c4 = (undefined1 *)(int)local_14;
      pcStack_2c8 = (char *)0x500535;
      cVar5 = FUN_004fe1e0();
      if (cVar5 == '\0') goto LAB_00500f88;
    }
    if (*(short *)(&DAT_00792498 + local_1c * 2) == 5) {
      puStack_2c4 = (undefined1 *)0x50055f;
      puStack_2c4 = (undefined1 *)FUN_0047ce60();
      pcStack_2c8 = (char *)CONCAT31((int3)((uint)extraout_ECX >> 8),param_1 == 7);
      pcStack_2cc = (char *)0x500573;
      local_2ac = FUN_004c6ef0();
    }
    else {
      puStack_2c4 = (undefined1 *)0x500586;
      local_2ac = FUN_004c6f50();
    }
    sVar6 = *(short *)(&DAT_007929c0 + local_1c * 2);
    puStack_2c4 = (undefined1 *)0xa;
    pcStack_2c8 = (char *)0x50059e;
    iVar10 = FUN_0062fbf0();
    puStack_2c4 = (undefined1 *)((100 - sVar6 * iVar10) - local_2ac);
    pcStack_2c8 = (char *)0x5005b7;
    iVar10 = FUN_0062fbf0();
    puStack_2c4 = (undefined1 *)0x3;
    pcStack_2c8 = (char *)param_1;
    pcStack_2cc = (char *)0x5005c7;
    sVar6 = FUN_00502530();
    if (iVar10 < sVar6) {
      puStack_2c4 = (undefined1 *)0x5005e3;
      cVar5 = FUN_004f6640();
      if (cVar5 == '\0') {
        puStack_2c4 = (undefined1 *)0x5005f8;
        cVar5 = FUN_004f66e0();
        if ((cVar5 == '\0') && (*(short *)(&DAT_00792498 + local_1c * 2) == 0xd)) {
          ExceptionList = local_10;
          return 0;
        }
      }
      puStack_2c4 = (undefined1 *)0x3;
      pcStack_2c8 = (char *)0x500623;
      FUN_004c79d0();
      puStack_2c4 = (undefined1 *)0x64;
      pcStack_2c8 = (char *)0x50062a;
      iVar10 = FUN_0062fbf0();
      puStack_2c4 = (undefined1 *)0x50063a;
      sVar6 = FUN_004d6c70();
      if (iVar10 < sVar6) {
        puStack_2c4 = (undefined1 *)0x64;
        pcStack_2c8 = (char *)0x500648;
        iVar10 = FUN_0062fbf0();
        puStack_2c4 = (undefined1 *)0x500658;
        sVar6 = FUN_004d6c70();
        if (iVar10 < (int)sVar6 / 2) {
          *(undefined2 *)(&DAT_00792498 + local_1c * 2) = 3;
        }
        else {
          *(undefined2 *)(&DAT_00792498 + local_1c * 2) = 4;
        }
      }
      else {
        puStack_2c4 = (undefined1 *)0x64;
        pcStack_2c8 = (char *)0x500689;
        iVar10 = FUN_0062fbf0();
        puStack_2c4 = (undefined1 *)0x500699;
        sVar6 = FUN_004d6c90();
        if (iVar10 < sVar6) {
          *(undefined2 *)(&DAT_00792498 + local_1c * 2) = 1;
        }
      }
      puStack_2c4 = (undefined1 *)0x5006bb;
      cVar5 = FUN_004f6640();
      if (cVar5 != '\0') {
        ExceptionList = local_10;
        return 2;
      }
      puStack_2c4 = (undefined1 *)0x5006df;
      cVar5 = FUN_004f66e0();
      if (cVar5 != '\0') {
        puStack_2c4 = (undefined1 *)0x5006f1;
        iVar10 = FUN_0047d6f0();
        if (iVar10 == 1) {
          puStack_2c4 = (undefined1 *)0x3;
          pcStack_2c8 = (char *)0x5006fd;
          iVar10 = FUN_0062fbf0();
          if (iVar10 != 0) {
            ExceptionList = local_10;
            return 4;
          }
        }
      }
      puStack_2c4 = (undefined1 *)0x500721;
      cVar5 = FUN_004f66e0();
      if (cVar5 != '\0') {
        puStack_2c4 = (undefined1 *)0x500733;
        iVar10 = FUN_0047d6f0();
        if ((iVar10 != 1) && (param_1 == 7)) {
          puStack_2c4 = (undefined1 *)0x4;
          pcStack_2c8 = (char *)0x500745;
          iVar10 = FUN_0062fbf0();
          if (iVar10 != 0) {
            ExceptionList = local_10;
            return 4;
          }
        }
      }
      puStack_2c4 = (undefined1 *)0x500769;
      cVar5 = FUN_004f66e0();
      if (cVar5 != '\0') {
        puStack_2c4 = (undefined1 *)0x50077b;
        iVar10 = FUN_0047d6f0();
        if ((iVar10 != 1) && (param_1 == 6)) {
          puStack_2c4 = (undefined1 *)0x4;
          pcStack_2c8 = (char *)0x50078d;
          iVar10 = FUN_0062fbf0();
          if (iVar10 != 0) {
            ExceptionList = local_10;
            return 4;
          }
        }
      }
      puStack_2c4 = (undefined1 *)0x5007b1;
      cVar5 = FUN_004f66e0();
      if (cVar5 != '\0') {
        puStack_2c4 = (undefined1 *)0x5007c3;
        iVar10 = FUN_0047d6f0();
        if ((iVar10 != 1) && (param_1 == 5)) {
          puStack_2c4 = (undefined1 *)0x3;
          pcStack_2c8 = (char *)0x5007d5;
          iVar10 = FUN_0062fbf0();
          if (iVar10 != 0) {
            ExceptionList = local_10;
            return 4;
          }
        }
      }
      puStack_2c4 = (undefined1 *)0x5007f9;
      cVar5 = FUN_004f66e0();
      if (cVar5 != '\0') {
        puStack_2c4 = (undefined1 *)0x50080b;
        iVar10 = FUN_0047d6f0();
        if ((iVar10 != 1) && (param_1 == 4)) {
          puStack_2c4 = (undefined1 *)0x2;
          pcStack_2c8 = (char *)0x50081d;
          iVar10 = FUN_0062fbf0();
          if (iVar10 != 0) {
            ExceptionList = local_10;
            return 4;
          }
        }
      }
      puStack_2c4 = (undefined1 *)0x50083e;
      cVar5 = FUN_004f66e0();
      if (cVar5 != '\0') {
        puStack_2c4 = (undefined1 *)0x500850;
        iVar10 = FUN_0047d6f0();
        if ((iVar10 != 1) && (param_1 == 3)) {
          puStack_2c4 = (undefined1 *)0x5;
          pcStack_2c8 = (char *)0x500862;
          iVar10 = FUN_0062fbf0();
          if (iVar10 < 2) {
            ExceptionList = local_10;
            return 4;
          }
        }
      }
      ExceptionList = local_10;
      return 3;
    }
  }
  else if ((*(short *)(&DAT_00792498 + local_1c * 2) == 4) ||
          (*(short *)(&DAT_00792498 + local_1c * 2) == 0xc)) {
    if (param_1 == 3) {
      puStack_2c4 = (undefined1 *)(int)local_14;
      pcStack_2c8 = (char *)0x5008b9;
      cVar5 = FUN_004fe1e0();
      if (cVar5 == '\0') goto LAB_00500f88;
    }
    if (*(short *)(&DAT_00792498 + local_1c * 2) == 4) {
      puStack_2c4 = (undefined1 *)0x5008e3;
      puStack_2c4 = (undefined1 *)FUN_0047ce60();
      pcStack_2c8 = (char *)CONCAT31((int3)((uint)puStack_2c4 >> 8),param_1 == 7);
      pcStack_2cc = (char *)0x5008f7;
      local_2b0 = FUN_004c6ef0();
    }
    else {
      puStack_2c4 = (undefined1 *)0x50090a;
      local_2b0 = FUN_004c6f50();
    }
    sVar6 = *(short *)(&DAT_007929c0 + local_1c * 2);
    puStack_2c4 = (undefined1 *)0xa;
    pcStack_2c8 = (char *)0x500922;
    iVar10 = FUN_0062fbf0();
    puStack_2c4 = (undefined1 *)((100 - sVar6 * iVar10) - local_2b0);
    pcStack_2c8 = (char *)0x50093b;
    iVar10 = FUN_0062fbf0();
    puStack_2c4 = (undefined1 *)0x2;
    pcStack_2c8 = (char *)param_1;
    pcStack_2cc = (char *)0x50094b;
    sVar6 = FUN_00502530();
    if (iVar10 < sVar6) {
      puStack_2c4 = (undefined1 *)0x500967;
      cVar5 = FUN_004f6640();
      if (cVar5 == '\0') {
        puStack_2c4 = (undefined1 *)0x50097c;
        cVar5 = FUN_004f66e0();
        if ((cVar5 == '\0') && (*(short *)(&DAT_00792498 + local_1c * 2) == 0xc)) {
          ExceptionList = local_10;
          return 0;
        }
      }
      puStack_2c4 = (undefined1 *)0x2;
      pcStack_2c8 = (char *)0x5009a7;
      FUN_004c79d0();
      puStack_2c4 = (undefined1 *)0x64;
      pcStack_2c8 = (char *)0x5009ae;
      iVar10 = FUN_0062fbf0();
      puStack_2c4 = (undefined1 *)0x5009be;
      sVar6 = FUN_004d6c70();
      if (iVar10 < sVar6) {
        puStack_2c4 = (undefined1 *)0x64;
        pcStack_2c8 = (char *)0x5009cc;
        iVar10 = FUN_0062fbf0();
        puStack_2c4 = (undefined1 *)0x5009dc;
        sVar6 = FUN_004d6c70();
        if (iVar10 < (int)sVar6 / 2) {
          *(undefined2 *)(&DAT_00792498 + local_1c * 2) = 2;
        }
        else {
          *(undefined2 *)(&DAT_00792498 + local_1c * 2) = 3;
        }
      }
      else {
        puStack_2c4 = (undefined1 *)0x64;
        pcStack_2c8 = (char *)0x500a0d;
        iVar10 = FUN_0062fbf0();
        puStack_2c4 = (undefined1 *)0x500a1d;
        sVar6 = FUN_004d6c90();
        if (iVar10 < sVar6) {
          *(undefined2 *)(&DAT_00792498 + local_1c * 2) = 1;
        }
      }
      puStack_2c4 = (undefined1 *)0x500a3f;
      cVar5 = FUN_004f6640();
      if (cVar5 != '\0') {
        ExceptionList = local_10;
        return 2;
      }
      puStack_2c4 = (undefined1 *)0x500a63;
      cVar5 = FUN_004f66e0();
      if (cVar5 != '\0') {
        puStack_2c4 = (undefined1 *)0x500a75;
        iVar10 = FUN_0047d6f0();
        if (iVar10 == 1) {
          puStack_2c4 = (undefined1 *)0x3;
          pcStack_2c8 = (char *)0x500a81;
          iVar10 = FUN_0062fbf0();
          if (iVar10 != 0) {
            ExceptionList = local_10;
            return 4;
          }
        }
      }
      puStack_2c4 = (undefined1 *)0x500aa5;
      cVar5 = FUN_004f66e0();
      if (cVar5 != '\0') {
        puStack_2c4 = (undefined1 *)0x500ab7;
        iVar10 = FUN_0047d6f0();
        if ((iVar10 != 1) && (param_1 == 7)) {
          puStack_2c4 = (undefined1 *)0x4;
          pcStack_2c8 = (char *)0x500ac9;
          iVar10 = FUN_0062fbf0();
          if (iVar10 != 0) {
            ExceptionList = local_10;
            return 4;
          }
        }
      }
      puStack_2c4 = (undefined1 *)0x500aed;
      cVar5 = FUN_004f66e0();
      if (cVar5 != '\0') {
        puStack_2c4 = (undefined1 *)0x500aff;
        iVar10 = FUN_0047d6f0();
        if ((iVar10 != 1) && (param_1 == 6)) {
          puStack_2c4 = (undefined1 *)0x4;
          pcStack_2c8 = (char *)0x500b11;
          iVar10 = FUN_0062fbf0();
          if (iVar10 != 0) {
            ExceptionList = local_10;
            return 4;
          }
        }
      }
      puStack_2c4 = (undefined1 *)0x500b35;
      cVar5 = FUN_004f66e0();
      if (cVar5 != '\0') {
        puStack_2c4 = (undefined1 *)0x500b47;
        iVar10 = FUN_0047d6f0();
        if ((iVar10 != 1) && (param_1 == 5)) {
          puStack_2c4 = (undefined1 *)0x3;
          pcStack_2c8 = (char *)0x500b59;
          iVar10 = FUN_0062fbf0();
          if (iVar10 != 0) {
            ExceptionList = local_10;
            return 4;
          }
        }
      }
      puStack_2c4 = (undefined1 *)0x500b7d;
      cVar5 = FUN_004f66e0();
      if (cVar5 != '\0') {
        puStack_2c4 = (undefined1 *)0x500b8f;
        iVar10 = FUN_0047d6f0();
        if ((iVar10 != 1) && (param_1 == 4)) {
          puStack_2c4 = (undefined1 *)0x2;
          pcStack_2c8 = (char *)0x500ba1;
          iVar10 = FUN_0062fbf0();
          if (iVar10 != 0) {
            ExceptionList = local_10;
            return 4;
          }
        }
      }
      puStack_2c4 = (undefined1 *)0x500bc2;
      cVar5 = FUN_004f66e0();
      if (cVar5 != '\0') {
        puStack_2c4 = (undefined1 *)0x500bd4;
        iVar10 = FUN_0047d6f0();
        if ((iVar10 != 1) && (param_1 == 3)) {
          puStack_2c4 = (undefined1 *)0x5;
          pcStack_2c8 = (char *)0x500be6;
          iVar10 = FUN_0062fbf0();
          if (iVar10 < 2) {
            ExceptionList = local_10;
            return 4;
          }
        }
      }
      if (*(short *)(&DAT_00792498 + local_1c * 2) == 0xc) {
        ExceptionList = local_10;
        return 0;
      }
      ExceptionList = local_10;
      return 3;
    }
  }
  else if ((*(short *)(&DAT_00792498 + local_1c * 2) == 3) ||
          (*(short *)(&DAT_00792498 + local_1c * 2) == 0xb)) {
    if (param_1 == 3) {
      puStack_2c4 = (undefined1 *)(int)local_14;
      pcStack_2c8 = (char *)0x500c56;
      cVar5 = FUN_004fe1e0();
      if (cVar5 == '\0') goto LAB_00500f88;
    }
    if (*(short *)(&DAT_00792498 + local_1c * 2) == 3) {
      puStack_2c4 = (undefined1 *)0x500c80;
      puStack_2c4 = (undefined1 *)FUN_0047ce60();
      pcStack_2c8 = (char *)CONCAT31((int3)((uint)extraout_ECX_00 >> 8),param_1 == 7);
      pcStack_2cc = (char *)0x500c94;
      local_2b4 = FUN_004c6ef0();
    }
    else {
      puStack_2c4 = (undefined1 *)0x500ca7;
      local_2b4 = FUN_004c6f50();
    }
    sVar6 = *(short *)(&DAT_007929c0 + local_1c * 2);
    puStack_2c4 = (undefined1 *)0xa;
    pcStack_2c8 = (char *)0x500cbf;
    iVar10 = FUN_0062fbf0();
    puStack_2c4 = (undefined1 *)((100 - sVar6 * iVar10) - local_2b4);
    pcStack_2c8 = (char *)0x500cd8;
    iVar10 = FUN_0062fbf0();
    puStack_2c4 = (undefined1 *)0x1;
    pcStack_2c8 = (char *)param_1;
    pcStack_2cc = (char *)0x500ce8;
    sVar6 = FUN_00502530();
    if (iVar10 < sVar6) {
      puStack_2c4 = (undefined1 *)0x500d04;
      cVar5 = FUN_004f6640();
      if (cVar5 == '\0') {
        puStack_2c4 = (undefined1 *)0x500d19;
        cVar5 = FUN_004f66e0();
        if ((cVar5 == '\0') && (*(short *)(&DAT_00792498 + local_1c * 2) == 0xb)) {
          ExceptionList = local_10;
          return 0;
        }
      }
      puStack_2c4 = (undefined1 *)0x1;
      pcStack_2c8 = (char *)0x500d44;
      FUN_004c79d0();
      puStack_2c4 = (undefined1 *)0x64;
      pcStack_2c8 = (char *)0x500d4b;
      iVar10 = FUN_0062fbf0();
      puStack_2c4 = (undefined1 *)0x500d5b;
      sVar6 = FUN_004d6c70();
      if (iVar10 < sVar6) {
        *(undefined2 *)(&DAT_00792498 + local_1c * 2) = 2;
      }
      else {
        puStack_2c4 = (undefined1 *)0x64;
        pcStack_2c8 = (char *)0x500d78;
        iVar10 = FUN_0062fbf0();
        puStack_2c4 = (undefined1 *)0x500d88;
        sVar6 = FUN_004d6c90();
        if (iVar10 < sVar6) {
          *(undefined2 *)(&DAT_00792498 + local_1c * 2) = 1;
        }
      }
      puStack_2c4 = (undefined1 *)0x500daa;
      cVar5 = FUN_004f6640();
      if (cVar5 != '\0') {
        ExceptionList = local_10;
        return 2;
      }
      puStack_2c4 = (undefined1 *)0x500dce;
      cVar5 = FUN_004f66e0();
      if (cVar5 != '\0') {
        puStack_2c4 = (undefined1 *)0x500de0;
        iVar10 = FUN_0047d6f0();
        if (iVar10 == 1) {
          puStack_2c4 = (undefined1 *)0x3;
          pcStack_2c8 = (char *)0x500dec;
          iVar10 = FUN_0062fbf0();
          if (iVar10 != 0) {
            ExceptionList = local_10;
            return 4;
          }
        }
      }
      puStack_2c4 = (undefined1 *)0x500e10;
      cVar5 = FUN_004f66e0();
      if (cVar5 != '\0') {
        puStack_2c4 = (undefined1 *)0x500e22;
        iVar10 = FUN_0047d6f0();
        if ((iVar10 != 1) && (param_1 == 7)) {
          puStack_2c4 = (undefined1 *)0x4;
          pcStack_2c8 = (char *)0x500e34;
          iVar10 = FUN_0062fbf0();
          if (iVar10 != 0) {
            ExceptionList = local_10;
            return 4;
          }
        }
      }
      puStack_2c4 = (undefined1 *)0x500e58;
      cVar5 = FUN_004f66e0();
      if (cVar5 != '\0') {
        puStack_2c4 = (undefined1 *)0x500e6a;
        iVar10 = FUN_0047d6f0();
        if ((iVar10 != 1) && (param_1 == 6)) {
          puStack_2c4 = (undefined1 *)0x4;
          pcStack_2c8 = (char *)0x500e7c;
          iVar10 = FUN_0062fbf0();
          if (iVar10 != 0) {
            ExceptionList = local_10;
            return 4;
          }
        }
      }
      puStack_2c4 = (undefined1 *)0x500ea0;
      cVar5 = FUN_004f66e0();
      if (cVar5 != '\0') {
        puStack_2c4 = (undefined1 *)0x500eb2;
        iVar10 = FUN_0047d6f0();
        if ((iVar10 != 1) && (param_1 == 5)) {
          puStack_2c4 = (undefined1 *)0x3;
          pcStack_2c8 = (char *)0x500ec4;
          iVar10 = FUN_0062fbf0();
          if (iVar10 != 0) {
            ExceptionList = local_10;
            return 4;
          }
        }
      }
      puStack_2c4 = (undefined1 *)0x500ee8;
      cVar5 = FUN_004f66e0();
      if (cVar5 != '\0') {
        puStack_2c4 = (undefined1 *)0x500efa;
        iVar10 = FUN_0047d6f0();
        if ((iVar10 != 1) && (param_1 == 4)) {
          puStack_2c4 = (undefined1 *)0x2;
          pcStack_2c8 = (char *)0x500f0c;
          iVar10 = FUN_0062fbf0();
          if (iVar10 != 0) {
            ExceptionList = local_10;
            return 4;
          }
        }
      }
      puStack_2c4 = (undefined1 *)0x500f2d;
      cVar5 = FUN_004f66e0();
      if (cVar5 != '\0') {
        puStack_2c4 = (undefined1 *)0x500f3f;
        iVar10 = FUN_0047d6f0();
        if ((iVar10 != 1) && (param_1 == 3)) {
          puStack_2c4 = (undefined1 *)0x5;
          pcStack_2c8 = (char *)0x500f51;
          iVar10 = FUN_0062fbf0();
          if (iVar10 < 2) {
            ExceptionList = local_10;
            return 4;
          }
        }
      }
      if (*(short *)(&DAT_00792498 + local_1c * 2) == 0xb) {
        ExceptionList = local_10;
        return 0;
      }
      ExceptionList = local_10;
      return 3;
    }
  }
LAB_00500f88:
  puStack_2c4 = (undefined1 *)0x500f96;
  cVar5 = FUN_004f6640();
  if (cVar5 == '\0') {
    if (*(short *)(&DAT_00792498 + local_1c * 2) == 0xd) {
      ExceptionList = local_10;
      return 0;
    }
    if (*(short *)(&DAT_00792498 + local_1c * 2) == 0xc) {
      ExceptionList = local_10;
      return 0;
    }
    if (*(short *)(&DAT_00792498 + local_1c * 2) == 0xb) {
      ExceptionList = local_10;
      return 0;
    }
  }
  puStack_2c4 = (undefined1 *)0x64;
  pcStack_2c8 = (char *)0x500fe4;
  iVar10 = FUN_0062fbf0();
  puStack_2c4 = (undefined1 *)0x500ff4;
  sVar6 = FUN_004d6c90();
  if (iVar10 < sVar6) {
    *(undefined2 *)(&DAT_00792498 + local_1c * 2) = 1;
  }
  puStack_2c4 = (undefined1 *)0x501016;
  cVar5 = FUN_004f6640();
  if (cVar5 == '\0') {
    uVar13 = 3;
  }
  else {
    uVar13 = 1;
  }
  ExceptionList = local_10;
  return uVar13;
}

