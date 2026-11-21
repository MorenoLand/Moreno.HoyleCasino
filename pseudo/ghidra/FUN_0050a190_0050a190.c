// FUN_0050a190  0050a190

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0050a190(int param_1,int param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined2 uVar11;
  int iVar12;
  float10 fVar13;
  undefined **ppuVar14;
  undefined *puStack_174;
  undefined *puStack_170;
  undefined *puStack_16c;
  char *pcStack_168;
  char *pcStack_164;
  undefined1 *puStack_160;
  uint uStack_15c;
  char local_12c;
  undefined1 local_d8;
  undefined1 local_d7;
  undefined1 local_d6;
  undefined1 local_d5;
  undefined1 local_d4 [8];
  undefined1 local_cc [10];
  undefined1 local_c2;
  char local_c1;
  undefined1 local_c0 [11];
  char local_b5;
  undefined1 local_b4;
  undefined1 local_b3;
  undefined1 local_b2;
  undefined1 local_b1;
  undefined1 local_b0 [9];
  undefined1 local_a7;
  undefined1 local_a6;
  undefined1 local_a5;
  undefined1 local_a4 [10];
  undefined1 local_9a;
  undefined1 local_99;
  undefined1 local_98 [8];
  undefined1 *local_90;
  undefined1 local_8c [8];
  undefined1 local_84 [8];
  undefined1 local_7c [8];
  int local_74;
  double local_70;
  int local_68;
  short local_64;
  short local_60;
  undefined1 local_5c [8];
  undefined1 local_54 [4];
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  undefined1 local_48 [4];
  undefined4 local_44;
  undefined4 local_40;
  undefined2 local_3c;
  short local_38;
  short local_34;
  undefined1 local_30 [8];
  short local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined2 local_1c;
  int local_18;
  short local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a3267;
  local_10 = ExceptionList;
  uStack_15c = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  bVar1 = false;
  puStack_160 = (undefined1 *)0x50a1cf;
  local_18 = FUN_0047e420();
  if (local_18 < 0) {
    puStack_160 = (undefined1 *)0xecb;
    pcStack_164 = "..\\Casino\\PokerStudAI.cpp";
    pcStack_168 = "currentPlayer >= 0";
    puStack_16c = (undefined *)0x50a1ec;
    FUN_005e9f20();
  }
  puStack_160 = (undefined1 *)0x50a1fa;
  iVar7 = FUN_0047f950();
  if (iVar7 <= local_18) {
    puStack_160 = (undefined1 *)0xecc;
    pcStack_164 = "..\\Casino\\PokerStudAI.cpp";
    pcStack_168 = "currentPlayer < pokerGame->GetNumberOfPlayersAtTable()";
    puStack_16c = (undefined *)0x50a213;
    FUN_005e9f20();
  }
  puStack_160 = (undefined1 *)0x50a221;
  DAT_007926f8 = FUN_0047e3b0();
  if ((short)(&DAT_00792de8)[local_18] == param_1) {
    if (((*(short *)(&DAT_00792980 + local_18 * 2) == param_3) ||
        (*(short *)(&DAT_00792498 + local_18 * 2) == 6)) ||
       (*(short *)(&DAT_00792498 + local_18 * 2) == 2)) {
      puStack_160 = (undefined1 *)param_3;
      pcStack_164 = (char *)param_2;
      pcStack_168 = (char *)param_1;
      puStack_16c = (undefined *)0x50af9b;
      fVar13 = (float10)FUN_0050ba80();
      *(double *)(&DAT_00792df8 + local_18 * 8) = (double)fVar13;
    }
    else {
      *(short *)(&DAT_00792980 + local_18 * 2) = (short)param_3;
      puStack_160 = (undefined1 *)param_3;
      pcStack_164 = (char *)param_2;
      pcStack_168 = (char *)param_1;
      puStack_16c = (undefined *)0x50af6e;
      fVar13 = (float10)FUN_0050ba80();
      *(double *)(&DAT_00792df8 + local_18 * 8) = (double)fVar13;
      *(undefined2 *)(&DAT_00792498 + local_18 * 2) = 1;
    }
  }
  else {
    local_28 = 0;
    local_38 = 0;
    while( true ) {
      iVar12 = (int)local_38;
      puStack_160 = (undefined1 *)0x50a263;
      iVar7 = FUN_0047f950();
      if (iVar7 <= iVar12) break;
      if (local_38 != local_18) {
        puStack_160 = (undefined1 *)(int)local_38;
        pcStack_164 = (char *)0x50a282;
        FUN_0047e390();
        puStack_160 = (undefined1 *)0x50a289;
        iVar7 = FUN_004c7010();
        if (iVar7 == 1) {
          puStack_160 = (undefined1 *)(int)local_38;
          pcStack_164 = (char *)0x50a29e;
          FUN_0047e390();
          puStack_160 = (undefined1 *)0x50a2a5;
          puStack_160 = (undefined1 *)FUN_004c7050();
          pcStack_164 = (char *)0x50a2b4;
          sVar3 = FUN_004f6a90();
          local_28 = local_28 + sVar3;
        }
      }
      local_38 = local_38 + 1;
    }
    puStack_160 = (undefined1 *)0x50a2ce;
    local_34 = FUN_004ec160();
    puStack_160 = (undefined1 *)(int)local_34;
    pcStack_164 = (char *)0x50a2dc;
    sVar4 = FUN_0062fbf0();
    puStack_160 = (undefined1 *)(int)local_34;
    pcStack_164 = (char *)0x50a2eb;
    sVar5 = FUN_0062fbf0();
    sVar3 = local_28;
    puStack_160 = (undefined1 *)0x50a2ff;
    sVar6 = FUN_004ec120();
    puStack_160 = (undefined1 *)(sVar6 + 1);
    pcStack_164 = (char *)0x50a30b;
    sVar6 = FUN_0062fbf0();
    *(short *)(&DAT_007925b0 + local_18 * 2) = (sVar4 - sVar5) - sVar3 * sVar6;
    puStack_160 = (undefined1 *)0x50a326;
    FUN_00484300();
    local_8 = 0;
    puStack_160 = local_7c;
    pcStack_164 = (char *)0x50a33c;
    puStack_160 = (undefined1 *)FUN_004c7c40();
    local_8._0_1_ = 1;
    pcStack_164 = (char *)0x50a361;
    FUN_00484490();
    local_8._0_1_ = 0;
    puStack_160 = (undefined1 *)0x50a36d;
    FUN_00484470();
    puStack_160 = (undefined1 *)0x50a375;
    FUN_004646a0();
    local_8 = CONCAT31(local_8._1_3_,2);
    puStack_160 = (undefined1 *)0x50a381;
    FUN_004646f0();
    puStack_160 = local_30;
    pcStack_164 = (char *)0x50a38d;
    FUN_004649c0();
    local_38 = 0;
    while( true ) {
      iVar12 = (int)local_38;
      puStack_160 = (undefined1 *)0x50a3b0;
      iVar7 = FUN_0047f950();
      if (iVar7 <= iVar12) break;
      if (local_38 != local_18) {
        puStack_160 = (undefined1 *)(int)local_38;
        pcStack_164 = (char *)0x50a3cf;
        FUN_0047e390();
        puStack_160 = (undefined1 *)0x50a3d6;
        iVar7 = FUN_004c7010();
        if (iVar7 != 0) {
          puStack_160 = local_84;
          pcStack_164 = (char *)(int)local_38;
          pcStack_168 = (char *)0x50a3ee;
          FUN_0047e390();
          pcStack_164 = (char *)0x50a3f5;
          puStack_160 = (undefined1 *)FUN_004c8300();
          local_8._0_1_ = 3;
          pcStack_164 = (char *)0x50a41a;
          FUN_004649c0();
          local_8 = CONCAT31(local_8._1_3_,2);
          puStack_160 = (undefined1 *)0x50a426;
          FUN_00484470();
        }
      }
      local_38 = local_38 + 1;
    }
    puStack_160 = &DAT_007920e8 + local_18 * 2;
    pcStack_164 = &DAT_00792f78 + local_18 * 2;
    pcStack_168 = &DAT_007926fc + local_18 * 2;
    puStack_16c = &DAT_007925c0 + local_18 * 2;
    puStack_170 = &DAT_00792248 + local_18 * 2;
    puStack_174 = &DAT_00792218 + local_18 * 2;
    FUN_00495d10(local_24,local_20,local_1c,&DAT_007929d8 + local_18 * 2,
                 &DAT_00792830 + local_18 * 2,&DAT_007920f8 + local_18 * 2,
                 &DAT_00792820 + local_18 * 2);
    local_38 = 0;
    while( true ) {
      iVar12 = (int)local_38;
      puStack_160 = (undefined1 *)0x50a4dc;
      iVar7 = FUN_0047f950();
      if (iVar7 <= iVar12) break;
      if (local_38 == local_18) {
        local_44 = local_24;
        local_40 = local_20;
        local_3c = local_1c;
        local_8._0_1_ = 4;
        puStack_160 = local_30;
        pcStack_164 = (char *)0x50a515;
        FUN_00464860();
        puStack_160 = local_8c;
        pcStack_164 = (char *)0x50a527;
        puStack_160 = (undefined1 *)FUN_004c8300();
        local_8._0_1_ = 5;
        pcStack_164 = (char *)0x50a54c;
        FUN_004649c0();
        local_8._0_1_ = 4;
        puStack_160 = (undefined1 *)0x50a55b;
        FUN_00484470();
        puStack_160 = &DAT_00791ed8 + local_38 * 4 + local_18 * 0x20;
        pcStack_164 = &DAT_00792108 + local_38 * 4 + local_18 * 0x20;
        pcStack_168 = &DAT_00792be8 + local_38 * 4 + local_18 * 0x20;
        puStack_16c = (undefined *)0x1;
        local_90 = (undefined1 *)&puStack_174;
        uVar11 = (undefined2)((uint)&puStack_174 >> 0x10);
        FUN_004c8300(&puStack_174);
        FUN_00496370(local_44,local_40,CONCAT22(uVar11,local_3c));
        puStack_160 = (undefined1 *)0x64;
        pcStack_164 = (undefined *)0x50a5d7;
        iVar7 = FUN_0062fbf0();
        puStack_160 = (undefined1 *)0x50a63d;
        iVar12 = FUN_00686cc0();
        if (iVar7 < iVar12) {
          (&DAT_007924a8)[local_38] = 1;
        }
        else {
          (&DAT_007924a8)[local_38] = 0;
        }
        if (param_1 == 2) {
          puStack_160 = local_98;
          pcStack_164 = (char *)0x50a675;
          FUN_004c8300();
          local_8._0_1_ = 6;
          puStack_160 = (undefined1 *)0x0;
          pcStack_164 = (char *)0x0;
          pcStack_168 = (char *)0x0;
          puStack_16c = (undefined *)0x1;
          puStack_170 = (undefined *)0x1;
          puStack_174 = (undefined *)0x1;
          FUN_00485940(local_48,1);
          local_8 = CONCAT31(local_8._1_3_,8);
          puStack_160 = (undefined1 *)0x50a6b7;
          FUN_00484470();
          puStack_160 = (undefined1 *)DAT_007913c8;
          pcStack_164 = &local_99;
          pcStack_168 = (undefined *)0x50a6cc;
          FUN_004a21b0();
          pcStack_164 = (undefined *)0x50a6d3;
          cVar2 = FUN_004a1fb0();
          if (cVar2 == '\0') {
            puStack_160 = (undefined1 *)DAT_007913e0;
            pcStack_164 = &local_9a;
            pcStack_168 = (undefined *)0x50a700;
            FUN_004a21b0();
            pcStack_164 = (undefined *)0x50a707;
            cVar2 = FUN_004a1fb0();
            if (cVar2 == '\0') {
              *(undefined2 *)(&DAT_007929c0 + local_38 * 2) = 0;
            }
            else {
              *(undefined2 *)(&DAT_007929c0 + local_38 * 2) = 1;
            }
          }
          else {
            *(undefined2 *)(&DAT_007929c0 + local_38 * 2) = 4;
          }
          local_8._0_1_ = 4;
          puStack_160 = (undefined1 *)0x50a738;
          FUN_004a20f0();
        }
        else if (param_1 == 3) {
          puStack_160 = local_a4;
          pcStack_164 = (char *)0x50a759;
          FUN_004c8300();
          local_8._0_1_ = 9;
          puStack_160 = (undefined1 *)0x0;
          pcStack_164 = (char *)0x0;
          pcStack_168 = (char *)0x0;
          puStack_16c = (undefined *)0x1;
          puStack_170 = (undefined *)0x1;
          puStack_174 = (undefined *)0x1;
          FUN_00485940(local_4c,1);
          local_8 = CONCAT31(local_8._1_3_,0xb);
          puStack_160 = (undefined1 *)0x50a79b;
          FUN_00484470();
          puStack_160 = (undefined1 *)DAT_007913b0;
          pcStack_164 = &local_a5;
          pcStack_168 = (undefined *)0x50a7b0;
          FUN_004a2160();
          pcStack_164 = (undefined *)0x50a7b7;
          cVar2 = FUN_004a1f00();
          if (cVar2 == '\0') {
            *(undefined2 *)(&DAT_007929c0 + local_38 * 2) = 0;
          }
          else {
            puStack_160 = (undefined1 *)DAT_00791400;
            pcStack_164 = &local_a6;
            pcStack_168 = (undefined *)0x50a7d3;
            FUN_004a21b0();
            pcStack_164 = (undefined *)0x50a7da;
            cVar2 = FUN_004a2040();
            if (cVar2 == '\0') {
              puStack_160 = (undefined1 *)DAT_007913f8;
              pcStack_164 = &local_a7;
              pcStack_168 = (undefined *)0x50a807;
              FUN_004a21b0();
              pcStack_164 = (undefined *)0x50a80e;
              cVar2 = FUN_004a2040();
              if (cVar2 == '\0') {
                *(undefined2 *)(&DAT_007929c0 + local_38 * 2) = 6;
              }
              else {
                *(undefined2 *)(&DAT_007929c0 + local_38 * 2) = 8;
              }
            }
            else {
              *(undefined2 *)(&DAT_007929c0 + local_38 * 2) = 10;
            }
          }
          local_8._0_1_ = 4;
          puStack_160 = (undefined1 *)0x50a84f;
          FUN_004a20f0();
        }
        else if (param_1 == 4) {
          puStack_160 = local_b0;
          pcStack_164 = (char *)0x50a870;
          FUN_004c8300();
          local_8._0_1_ = 0xc;
          puStack_160 = (undefined1 *)0x0;
          pcStack_164 = (char *)0x0;
          pcStack_168 = (char *)0x0;
          puStack_16c = (undefined *)0x1;
          puStack_170 = (undefined *)0x1;
          puStack_174 = (undefined *)0x1;
          FUN_00485940(local_50,1);
          local_8._0_1_ = 0xe;
          puStack_160 = (undefined1 *)0x50a8b2;
          FUN_00484470();
          puStack_160 = (undefined1 *)DAT_00791418;
          pcStack_164 = &local_b1;
          pcStack_168 = (undefined *)0x50a8c8;
          FUN_004a2160();
          pcStack_164 = (undefined *)0x50a8cf;
          cVar2 = FUN_004a1e10();
          if (cVar2 == '\0') {
            puStack_160 = (undefined1 *)DAT_007913b0;
            pcStack_164 = &local_b2;
            pcStack_168 = (undefined *)0x50a8ff;
            FUN_004a2160();
            pcStack_164 = (char *)0x50a906;
            cVar2 = FUN_004a1e10();
            if (cVar2 == '\0') {
              puStack_160 = local_c0;
              pcStack_164 = (undefined *)0x50a999;
              FUN_004c8300();
              local_8._0_1_ = 0xf;
              puStack_160 = (undefined1 *)0x50a9ba;
              sVar3 = FUN_00484bf0();
              local_b5 = sVar3 == 3;
              local_8._0_1_ = 0xe;
              puStack_160 = (undefined1 *)0x50a9da;
              FUN_00484470();
              if (local_b5 == '\0') {
                puStack_160 = (undefined1 *)DAT_00791390;
                pcStack_164 = &local_c2;
                pcStack_168 = (undefined *)0x50aa0e;
                FUN_004a2160();
                pcStack_164 = (undefined *)0x50aa15;
                cVar2 = FUN_004a1e10();
                if (cVar2 == '\0') {
LAB_0050aa71:
                  local_12c = '\0';
                }
                else {
                  puStack_160 = local_cc;
                  pcStack_164 = (undefined *)0x50aa2e;
                  FUN_004c8300();
                  local_8 = CONCAT31(local_8._1_3_,0x10);
                  bVar1 = true;
                  puStack_160 = (undefined1 *)0x50aa5e;
                  sVar3 = FUN_00484db0();
                  if (sVar3 != 0) goto LAB_0050aa71;
                  local_12c = '\x01';
                }
                local_c1 = local_12c;
                local_8._0_1_ = 0xe;
                local_8._1_3_ = 0;
                if (bVar1) {
                  bVar1 = false;
                  puStack_160 = (undefined1 *)0x50aaab;
                  FUN_00484470();
                }
                if (local_c1 == '\0') {
                  *(undefined2 *)(&DAT_007929c0 + local_38 * 2) = 0;
                }
                else {
                  *(undefined2 *)(&DAT_007929c0 + local_38 * 2) = 4;
                }
              }
              else {
                *(undefined2 *)(&DAT_007929c0 + local_38 * 2) = 4;
              }
            }
            else {
              puStack_160 = (undefined1 *)DAT_007913e0;
              pcStack_164 = &local_b3;
              pcStack_168 = (undefined *)0x50a923;
              FUN_004a21b0();
              pcStack_164 = (undefined *)0x50a92a;
              cVar2 = FUN_004a2040();
              if (cVar2 == '\0') {
                puStack_160 = (undefined1 *)DAT_0079138c;
                pcStack_164 = &local_b4;
                pcStack_168 = (undefined *)0x50a956;
                FUN_004a21b0();
                pcStack_164 = (undefined *)0x50a95d;
                cVar2 = FUN_004a2040();
                if (cVar2 == '\0') {
                  *(undefined2 *)(&DAT_007929c0 + local_38 * 2) = 6;
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
            *(undefined2 *)(&DAT_007929c0 + local_38 * 2) = 10;
          }
          local_8._0_1_ = 4;
          puStack_160 = (undefined1 *)0x50aae0;
          FUN_004a20f0();
        }
        else if (param_1 == 5) {
          puStack_160 = local_5c;
          pcStack_164 = (char *)0x50aafe;
          FUN_004c8300();
          local_8._0_1_ = 0x11;
          puStack_160 = local_d4;
          pcStack_164 = (char *)0x50ab14;
          FUN_004c8300();
          local_8._0_1_ = 0x12;
          puStack_160 = (undefined1 *)0x0;
          pcStack_164 = (char *)0x0;
          pcStack_168 = (char *)0x0;
          puStack_16c = (undefined *)0x1;
          puStack_170 = (undefined *)0x1;
          puStack_174 = (undefined *)0x1;
          FUN_00485940(local_54,1);
          local_8 = CONCAT31(local_8._1_3_,0x14);
          puStack_160 = (undefined1 *)0x50ab56;
          FUN_00484470();
          puStack_160 = (undefined1 *)DAT_00791380;
          pcStack_164 = &local_d5;
          pcStack_168 = (undefined *)0x50ab6b;
          FUN_004a2160();
          pcStack_164 = (undefined *)0x50ab72;
          cVar2 = FUN_004a1f00();
          if (cVar2 == '\0') {
            puStack_160 = (undefined1 *)DAT_007913b0;
            pcStack_164 = &local_d6;
            pcStack_168 = (undefined *)0x50aba2;
            FUN_004a2160();
            pcStack_164 = (undefined *)0x50aba9;
            cVar2 = FUN_004a1e10();
            if (cVar2 == '\0') {
              puStack_160 = (undefined1 *)0x50ac20;
              sVar3 = FUN_00484db0();
              if (sVar3 == 0) {
                *(undefined2 *)(&DAT_007929c0 + local_38 * 2) = 6;
              }
              else {
                puStack_160 = (undefined1 *)0x50ac3f;
                sVar3 = FUN_00484db0();
                if (sVar3 == 1) {
                  *(undefined2 *)(&DAT_007929c0 + local_38 * 2) = 3;
                }
                else {
                  puStack_160 = (undefined1 *)0x50ac5f;
                  sVar3 = FUN_00484bf0();
                  if (sVar3 == 4) {
                    *(undefined2 *)(&DAT_007929c0 + local_38 * 2) = 7;
                  }
                  else {
                    *(undefined2 *)(&DAT_007929c0 + local_38 * 2) = 0;
                  }
                }
              }
            }
            else {
              puStack_160 = (undefined1 *)DAT_007913e0;
              pcStack_164 = &local_d7;
              pcStack_168 = (undefined *)0x50abc6;
              FUN_004a21b0();
              pcStack_164 = (undefined *)0x50abcd;
              cVar2 = FUN_004a2040();
              if (cVar2 == '\0') {
                puStack_160 = (undefined1 *)DAT_0079138c;
                pcStack_164 = &local_d8;
                pcStack_168 = (undefined *)0x50abfa;
                FUN_004a21b0();
                pcStack_164 = (undefined *)0x50ac01;
                cVar2 = FUN_004a2040();
                if (cVar2 != '\0') {
                  *(undefined2 *)(&DAT_007929c0 + local_38 * 2) = 4;
                }
              }
              else {
                *(undefined2 *)(&DAT_007929c0 + local_38 * 2) = 6;
              }
            }
          }
          else {
            *(undefined2 *)(&DAT_007929c0 + local_38 * 2) = 10;
          }
          local_8._0_1_ = 0x11;
          puStack_160 = (undefined1 *)0x50ac91;
          FUN_004a20f0();
          local_8._0_1_ = 4;
          puStack_160 = (undefined1 *)0x50ac9d;
          FUN_00484470();
        }
        local_8 = CONCAT31(local_8._1_3_,2);
        puStack_160 = (undefined1 *)0x50aca9;
        FUN_004646e0();
      }
      else {
        puStack_160 = (undefined1 *)(int)local_38;
        pcStack_164 = (undefined *)0x50acbe;
        FUN_0047e390();
        puStack_160 = (undefined1 *)0x50acc5;
        iVar7 = FUN_004c7010();
        if (iVar7 == 1) {
          puStack_160 = &DAT_00791ed8 + local_38 * 4 + local_18 * 0x20;
          pcStack_164 = &DAT_00792108 + local_38 * 4 + local_18 * 0x20;
          pcStack_168 = &DAT_00792be8 + local_38 * 4 + local_18 * 0x20;
          puStack_16c = (undefined *)0x1;
          ppuVar14 = &puStack_174;
          FUN_0047e390((int)local_38);
          FUN_004c8300(ppuVar14);
          FUN_00496370(local_24,local_20,local_1c);
        }
      }
      local_38 = local_38 + 1;
    }
    (&DAT_00792de8)[local_18] = (undefined2)param_1;
    *(short *)(&DAT_00792980 + local_18 * 2) = (short)param_3;
    if (param_1 == 2) {
      puStack_160 = (undefined1 *)0x15;
      pcStack_164 = (char *)0x50ad8a;
      iVar7 = FUN_0062fbf0();
      puStack_160 = (undefined1 *)0x15;
      pcStack_164 = (char *)0x50ad96;
      iVar12 = FUN_0062fbf0();
      puStack_160 = (undefined1 *)0x15;
      pcStack_164 = (char *)0x50ada4;
      iVar8 = FUN_0062fbf0();
      puStack_160 = (undefined1 *)0x15;
      pcStack_164 = (char *)0x50adb0;
      iVar9 = FUN_0062fbf0();
      *(double *)(&DAT_00792e38 + local_18 * 8) =
           (double)(iVar7 + 0x3c + iVar12 + iVar8 + iVar9) * _DAT_006bc270;
      local_60 = 0;
      while( true ) {
        iVar12 = (int)local_60;
        puStack_160 = (undefined1 *)0x50adf4;
        iVar7 = FUN_0047f950();
        if (iVar7 <= iVar12) break;
        puStack_160 = (undefined1 *)0x33;
        pcStack_164 = (char *)0x50adff;
        iVar7 = FUN_0062fbf0();
        puStack_160 = (undefined1 *)0x33;
        pcStack_164 = (char *)0x50ae0b;
        iVar12 = FUN_0062fbf0();
        puStack_160 = (undefined1 *)0x33;
        pcStack_164 = (char *)0x50ae19;
        iVar8 = FUN_0062fbf0();
        *(double *)(&DAT_007929e8 + local_60 * 8 + local_18 * 0x40) =
             (double)(iVar7 + 0x19 + iVar12 + iVar8) * _DAT_006bc270;
        local_60 = local_60 + 1;
      }
    }
    puStack_160 = (undefined1 *)param_3;
    pcStack_164 = (char *)param_2;
    pcStack_168 = (char *)param_1;
    puStack_16c = (undefined *)0x50ae54;
    fVar13 = (float10)FUN_0050ba80();
    *(double *)(&DAT_00792df8 + local_18 * 8) = (double)fVar13;
    *(undefined2 *)(&DAT_00792498 + local_18 * 2) = 1;
    if (param_1 == 5) {
      local_38 = 0;
      while( true ) {
        iVar12 = (int)local_38;
        puStack_160 = (undefined1 *)0x50ae9b;
        iVar7 = FUN_0047f950();
        if (iVar7 <= iVar12) break;
        if (local_38 != local_18) {
          puStack_160 = (undefined1 *)(int)local_38;
          pcStack_164 = (char *)0x50aeba;
          FUN_0047e390();
          puStack_160 = (undefined1 *)0x50aec1;
          iVar7 = FUN_004c7010();
          if ((iVar7 == 1) && (0 < *(int *)(&DAT_00792be8 + local_38 * 4 + local_18 * 0x20))) break;
        }
        local_38 = local_38 + 1;
      }
      iVar12 = (int)local_38;
      puStack_160 = (undefined1 *)0x50aeed;
      iVar7 = FUN_0047f950();
      if (iVar12 == iVar7) {
        *(undefined2 *)(&DAT_00792498 + local_18 * 2) = 6;
      }
    }
    local_8 = local_8 & 0xffffff00;
    puStack_160 = (undefined1 *)0x50af0a;
    FUN_004646e0();
    local_8 = 0xffffffff;
    puStack_160 = (undefined1 *)0x50af19;
    FUN_00484470();
  }
  if (*(short *)(&DAT_00792498 + local_18 * 2) == 6) {
    puStack_160 = (undefined1 *)0x3;
    pcStack_164 = (char *)0x50afc5;
    FUN_004c79d0();
    puStack_160 = (undefined1 *)0x50afd3;
    cVar2 = FUN_004f6640();
    if (cVar2 == '\0') {
      puStack_160 = (undefined1 *)0x50b01a;
      cVar2 = FUN_004f66e0();
      if (cVar2 != '\0') {
        ExceptionList = local_10;
        return 4;
      }
      ExceptionList = local_10;
      return 3;
    }
    puStack_160 = (undefined1 *)0x50afdf;
    cVar2 = FUN_00501040();
    if (cVar2 == '\0') {
      puStack_160 = (undefined1 *)0x14;
      pcStack_164 = (char *)0x50afed;
      iVar7 = FUN_0062fbf0();
      if (iVar7 == 0) {
        ExceptionList = local_10;
        return 1;
      }
    }
    ExceptionList = local_10;
    return 2;
  }
  if (*(short *)(&DAT_00792498 + local_18 * 2) == 1) {
    puStack_160 = (undefined1 *)0x50b059;
    cVar2 = FUN_004f6690();
    if (cVar2 == '\0') {
      puStack_160 = (undefined1 *)param_3;
      pcStack_164 = (char *)param_1;
      pcStack_168 = (char *)0x50b283;
      cVar2 = FUN_0050c2d0();
      if (cVar2 == '\0') {
        ExceptionList = local_10;
        return 1;
      }
    }
    else {
      puStack_160 = (undefined1 *)0x50b072;
      iVar7 = FUN_004f67d0();
      puStack_160 = (undefined1 *)0x50b092;
      iVar12 = FUN_004f6840();
      local_70 = *(double *)(&DAT_00792df8 + local_18 * 8) / ((double)iVar7 / (double)iVar12);
      if (param_1 == 2) {
        puStack_160 = (undefined1 *)0x50b0c2;
        sVar3 = FUN_004ed1b0();
        puStack_160 = (undefined1 *)0x5;
        pcStack_164 = (char *)0x50b0cc;
        iVar7 = FUN_0062fbf0();
        local_64 = (short)((int)sVar3 / (iVar7 + 1));
      }
      else if (param_1 == 3) {
        puStack_160 = (undefined1 *)0x50b0f0;
        sVar3 = FUN_004ed1b0();
        puStack_160 = (undefined1 *)0x2;
        pcStack_164 = (char *)0x50b0fa;
        iVar7 = FUN_0062fbf0();
        local_64 = (short)((int)sVar3 / (iVar7 + 1));
      }
      else {
        puStack_160 = (undefined1 *)0x50b118;
        local_64 = FUN_004ed1b0();
        local_64 = local_64 * ((short)param_3 + -1);
      }
      puStack_160 = (undefined1 *)(int)local_64;
      pcStack_164 = (char *)0x50b132;
      iVar7 = FUN_0062fbf0();
      puStack_160 = (undefined1 *)(int)local_64;
      pcStack_164 = (char *)0x50b141;
      iVar12 = FUN_0062fbf0();
      puStack_160 = (undefined1 *)(int)local_64;
      pcStack_164 = (char *)0x50b150;
      local_74 = FUN_0062fbf0();
      local_74 = (iVar7 + iVar12) - local_74;
      puStack_160 = (undefined1 *)0x50b163;
      sVar3 = FUN_004ed1b0();
      local_68 = (int)sVar3;
      if (10 < local_68) {
        local_68 = 10;
      }
      if (param_1 == 2) {
        puStack_160 = (undefined1 *)(10 - local_68);
        pcStack_164 = (char *)0x50b18a;
        iVar7 = FUN_0062fbf0();
        local_74 = local_74 - iVar7;
      }
      else if (param_1 == 3) {
        puStack_160 = (undefined1 *)(10 - local_68);
        pcStack_164 = (char *)0x50b1ab;
        iVar7 = FUN_0062fbf0();
        local_74 = local_74 - iVar7 / 2;
      }
      if (local_74 < -0x13) {
        local_74 = -0x13;
      }
      if (local_70 <= (double)local_74 / _DAT_006b6978 + 1.0) {
        if ((short)(&DAT_00792990)[local_18] == param_1) {
          puStack_160 = (undefined1 *)(10 - param_1);
          pcStack_164 = (char *)0x50b24d;
          iVar7 = FUN_0062fbf0();
          if (iVar7 != 0) {
            *(undefined2 *)(&DAT_00792498 + local_18 * 2) = 2;
            ExceptionList = local_10;
            return 3;
          }
        }
        ExceptionList = local_10;
        return 0;
      }
      puStack_160 = (undefined1 *)param_3;
      pcStack_164 = (char *)param_1;
      pcStack_168 = (char *)0x50b1ec;
      cVar2 = FUN_0050c2d0();
      if (cVar2 == '\0') {
        puStack_160 = (undefined1 *)0x64;
        pcStack_164 = (char *)0x50b1ff;
        iVar7 = FUN_0062fbf0();
        puStack_160 = (undefined1 *)0x50b20f;
        sVar3 = FUN_004ece80();
        if (iVar7 < sVar3) {
          *(undefined2 *)(&DAT_00792498 + local_18 * 2) = 2;
        }
        ExceptionList = local_10;
        return 3;
      }
    }
  }
  puStack_160 = (undefined1 *)0x50b2a4;
  iVar7 = FUN_0047d6b0();
  if (iVar7 == 1) {
    local_14 = 0;
  }
  else {
    puStack_160 = (undefined1 *)0x50b2bc;
    local_14 = FUN_004ed260();
  }
  if ((*(short *)(&DAT_00792498 + local_18 * 2) == 5) ||
     (*(short *)(&DAT_00792498 + local_18 * 2) == 0xd)) {
    if (param_1 == 3) {
      puStack_160 = (undefined1 *)(int)local_14;
      pcStack_164 = (char *)0x50b2f4;
      iVar7 = FUN_0062fbf0();
      if (iVar7 != 0) goto LAB_0050b9be;
    }
    if ((param_1 == 2) && ((&DAT_007929d0)[local_18] != '\0')) {
      puStack_160 = (undefined1 *)0x2;
      pcStack_164 = (char *)0x50b31b;
      iVar7 = FUN_0062fbf0();
      if (iVar7 == 0) goto LAB_0050b9be;
    }
    if ((param_1 == 3) && ((&DAT_007929d0)[local_18] != '\0')) {
      puStack_160 = (undefined1 *)0x5;
      pcStack_164 = (char *)0x50b342;
      iVar7 = FUN_0062fbf0();
      if (iVar7 < 2) goto LAB_0050b9be;
    }
    if ((param_1 == 4) && ((&DAT_007929d0)[local_18] != '\0')) {
      puStack_160 = (undefined1 *)0x3;
      pcStack_164 = (char *)0x50b36a;
      iVar7 = FUN_0062fbf0();
      if (iVar7 != 0) goto LAB_0050b9be;
    }
    if ((param_1 == 5) && ((&DAT_007929d0)[local_18] != '\0')) {
      puStack_160 = (undefined1 *)0x5;
      pcStack_164 = (char *)0x50b391;
      iVar7 = FUN_0062fbf0();
      if (iVar7 != 0) goto LAB_0050b9be;
    }
    sVar3 = *(short *)(&DAT_007929c0 + local_18 * 2);
    puStack_160 = (undefined1 *)0xa;
    pcStack_164 = (char *)0x50b3af;
    iVar7 = FUN_0062fbf0();
    puStack_160 = (undefined1 *)(100 - sVar3 * iVar7);
    pcStack_164 = (char *)0x50b3c2;
    iVar7 = FUN_0062fbf0();
    puStack_160 = (undefined1 *)0x3;
    pcStack_164 = (char *)param_1;
    pcStack_168 = (char *)0x50b3d2;
    sVar3 = FUN_0050c660();
    if (iVar7 < sVar3) {
      puStack_160 = (undefined1 *)0x50b3ee;
      cVar2 = FUN_004f6640();
      if (cVar2 == '\0') {
        puStack_160 = (undefined1 *)0x50b403;
        cVar2 = FUN_004f66e0();
        if ((cVar2 == '\0') && (*(short *)(&DAT_00792498 + local_18 * 2) == 0xd)) {
          ExceptionList = local_10;
          return 0;
        }
      }
      puStack_160 = (undefined1 *)0x3;
      pcStack_164 = (char *)0x50b42e;
      FUN_004c79d0();
      puStack_160 = (undefined1 *)0x64;
      pcStack_164 = (char *)0x50b435;
      iVar7 = FUN_0062fbf0();
      puStack_160 = (undefined1 *)0x50b445;
      sVar3 = FUN_004ec020();
      if (iVar7 < sVar3) {
        puStack_160 = (undefined1 *)0x64;
        pcStack_164 = (char *)0x50b453;
        iVar7 = FUN_0062fbf0();
        puStack_160 = (undefined1 *)0x50b463;
        sVar3 = FUN_004ec020();
        if (iVar7 < (int)sVar3 / 2) {
          *(undefined2 *)(&DAT_00792498 + local_18 * 2) = 3;
        }
        else {
          *(undefined2 *)(&DAT_00792498 + local_18 * 2) = 4;
        }
      }
      else {
        puStack_160 = (undefined1 *)0x64;
        pcStack_164 = (char *)0x50b494;
        iVar7 = FUN_0062fbf0();
        puStack_160 = (undefined1 *)0x50b4a4;
        sVar3 = FUN_004ec040();
        if (iVar7 < sVar3) {
          *(undefined2 *)(&DAT_00792498 + local_18 * 2) = 1;
        }
      }
      puStack_160 = (undefined1 *)0x50b4c6;
      cVar2 = FUN_004f6640();
      if (cVar2 != '\0') {
        ExceptionList = local_10;
        return 2;
      }
      puStack_160 = (undefined1 *)0x50b4e7;
      cVar2 = FUN_004f66e0();
      if (cVar2 != '\0') {
        puStack_160 = (undefined1 *)0x3;
        pcStack_164 = (char *)0x50b4f5;
        iVar7 = FUN_0062fbf0();
        if (iVar7 != 0) {
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
      puStack_160 = (undefined1 *)(int)local_14;
      pcStack_164 = (char *)0x50b54b;
      iVar7 = FUN_0062fbf0();
      if (iVar7 != 0) goto LAB_0050b9be;
    }
    if ((param_1 == 2) && ((&DAT_007929d0)[local_18] != '\0')) {
      puStack_160 = (undefined1 *)0x2;
      pcStack_164 = (char *)0x50b572;
      iVar7 = FUN_0062fbf0();
      if (iVar7 != 0) goto LAB_0050b9be;
    }
    if ((param_1 == 3) && ((&DAT_007929d0)[local_18] != '\0')) {
      puStack_160 = (undefined1 *)0x3;
      pcStack_164 = (char *)0x50b599;
      iVar7 = FUN_0062fbf0();
      if (iVar7 != 0) goto LAB_0050b9be;
    }
    if ((param_1 == 4) && ((&DAT_007929d0)[local_18] != '\0')) {
      puStack_160 = (undefined1 *)0x4;
      pcStack_164 = (char *)0x50b5c0;
      iVar7 = FUN_0062fbf0();
      if (iVar7 != 0) goto LAB_0050b9be;
    }
    if ((param_1 == 5) && ((&DAT_007929d0)[local_18] != '\0')) {
      puStack_160 = (undefined1 *)0x6;
      pcStack_164 = (char *)0x50b5e7;
      iVar7 = FUN_0062fbf0();
      if (iVar7 != 0) goto LAB_0050b9be;
    }
    sVar3 = *(short *)(&DAT_007929c0 + local_18 * 2);
    puStack_160 = (undefined1 *)0xa;
    pcStack_164 = (char *)0x50b605;
    iVar7 = FUN_0062fbf0();
    puStack_160 = (undefined1 *)(100 - sVar3 * iVar7);
    pcStack_164 = (char *)0x50b618;
    iVar7 = FUN_0062fbf0();
    puStack_160 = (undefined1 *)0x2;
    pcStack_164 = (char *)param_1;
    pcStack_168 = (char *)0x50b628;
    sVar3 = FUN_0050c660();
    if (iVar7 < sVar3) {
      puStack_160 = (undefined1 *)0x50b644;
      cVar2 = FUN_004f6640();
      if (cVar2 == '\0') {
        puStack_160 = (undefined1 *)0x50b659;
        cVar2 = FUN_004f66e0();
        if ((cVar2 == '\0') && (*(short *)(&DAT_00792498 + local_18 * 2) == 0xc)) {
          ExceptionList = local_10;
          return 0;
        }
      }
      puStack_160 = (undefined1 *)0x2;
      pcStack_164 = (char *)0x50b684;
      FUN_004c79d0();
      puStack_160 = (undefined1 *)0x64;
      pcStack_164 = (char *)0x50b68b;
      iVar7 = FUN_0062fbf0();
      puStack_160 = (undefined1 *)0x50b69b;
      sVar3 = FUN_004ec020();
      if (iVar7 < sVar3) {
        puStack_160 = (undefined1 *)0x64;
        pcStack_164 = (char *)0x50b6a9;
        iVar7 = FUN_0062fbf0();
        puStack_160 = (undefined1 *)0x50b6b9;
        sVar3 = FUN_004ec020();
        if (iVar7 < (int)sVar3 / 2) {
          *(undefined2 *)(&DAT_00792498 + local_18 * 2) = 2;
        }
        else {
          *(undefined2 *)(&DAT_00792498 + local_18 * 2) = 3;
        }
      }
      else {
        puStack_160 = (undefined1 *)0x64;
        pcStack_164 = (char *)0x50b6ea;
        iVar7 = FUN_0062fbf0();
        puStack_160 = (undefined1 *)0x50b6fa;
        sVar3 = FUN_004ec040();
        if (iVar7 < sVar3) {
          *(undefined2 *)(&DAT_00792498 + local_18 * 2) = 1;
        }
      }
      puStack_160 = (undefined1 *)0x50b71c;
      cVar2 = FUN_004f6640();
      if (cVar2 != '\0') {
        ExceptionList = local_10;
        return 2;
      }
      puStack_160 = (undefined1 *)0x50b73d;
      cVar2 = FUN_004f66e0();
      if (cVar2 != '\0') {
        puStack_160 = (undefined1 *)0x3;
        pcStack_164 = (char *)0x50b74b;
        iVar7 = FUN_0062fbf0();
        if (iVar7 != 0) {
          ExceptionList = local_10;
          return 4;
        }
      }
      if (*(short *)(&DAT_00792498 + local_18 * 2) == 0xc) {
        ExceptionList = local_10;
        return 0;
      }
      ExceptionList = local_10;
      return 3;
    }
  }
  else if ((*(short *)(&DAT_00792498 + local_18 * 2) == 3) ||
          (*(short *)(&DAT_00792498 + local_18 * 2) == 0xb)) {
    if (param_1 == 3) {
      puStack_160 = (undefined1 *)(int)local_14;
      pcStack_164 = (char *)0x50b7ba;
      iVar7 = FUN_0062fbf0();
      if (iVar7 != 0) goto LAB_0050b9be;
    }
    if ((param_1 == 2) && ((&DAT_007929d0)[local_18] != '\0')) {
      puStack_160 = (undefined1 *)0x3;
      pcStack_164 = (char *)0x50b7e1;
      iVar7 = FUN_0062fbf0();
      if (iVar7 != 0) goto LAB_0050b9be;
    }
    if ((param_1 == 3) && ((&DAT_007929d0)[local_18] != '\0')) {
      puStack_160 = (undefined1 *)0x4;
      pcStack_164 = (char *)0x50b808;
      iVar7 = FUN_0062fbf0();
      if (iVar7 != 0) goto LAB_0050b9be;
    }
    if ((param_1 == 4) && ((&DAT_007929d0)[local_18] != '\0')) {
      puStack_160 = (undefined1 *)0x6;
      pcStack_164 = (char *)0x50b82f;
      iVar7 = FUN_0062fbf0();
      if (iVar7 != 0) goto LAB_0050b9be;
    }
    if ((param_1 == 5) && ((&DAT_007929d0)[local_18] != '\0')) {
      puStack_160 = (undefined1 *)0x8;
      pcStack_164 = (char *)0x50b856;
      iVar7 = FUN_0062fbf0();
      if (iVar7 != 0) goto LAB_0050b9be;
    }
    sVar3 = *(short *)(&DAT_007929c0 + local_18 * 2);
    puStack_160 = (undefined1 *)0xa;
    pcStack_164 = (char *)0x50b874;
    iVar7 = FUN_0062fbf0();
    puStack_160 = (undefined1 *)(100 - sVar3 * iVar7);
    pcStack_164 = (char *)0x50b887;
    iVar7 = FUN_0062fbf0();
    puStack_160 = (undefined1 *)0x1;
    pcStack_164 = (char *)param_1;
    pcStack_168 = (char *)0x50b897;
    sVar3 = FUN_0050c660();
    if (iVar7 < sVar3) {
      puStack_160 = (undefined1 *)0x50b8b3;
      cVar2 = FUN_004f6640();
      if (cVar2 == '\0') {
        puStack_160 = (undefined1 *)0x50b8c8;
        cVar2 = FUN_004f66e0();
        if ((cVar2 == '\0') && (*(short *)(&DAT_00792498 + local_18 * 2) == 0xb)) {
          ExceptionList = local_10;
          return 0;
        }
      }
      puStack_160 = (undefined1 *)0x1;
      pcStack_164 = (char *)0x50b8f3;
      FUN_004c79d0();
      puStack_160 = (undefined1 *)0x64;
      pcStack_164 = (char *)0x50b8fa;
      iVar7 = FUN_0062fbf0();
      puStack_160 = (undefined1 *)0x50b90a;
      sVar3 = FUN_004ec020();
      if (iVar7 < sVar3) {
        *(undefined2 *)(&DAT_00792498 + local_18 * 2) = 2;
      }
      else {
        puStack_160 = (undefined1 *)0x64;
        pcStack_164 = (char *)0x50b927;
        iVar7 = FUN_0062fbf0();
        puStack_160 = (undefined1 *)0x50b937;
        sVar3 = FUN_004ec040();
        if (iVar7 < sVar3) {
          *(undefined2 *)(&DAT_00792498 + local_18 * 2) = 1;
        }
      }
      puStack_160 = (undefined1 *)0x50b959;
      cVar2 = FUN_004f6640();
      if (cVar2 != '\0') {
        ExceptionList = local_10;
        return 2;
      }
      puStack_160 = (undefined1 *)0x50b97a;
      cVar2 = FUN_004f66e0();
      if (cVar2 != '\0') {
        puStack_160 = (undefined1 *)0x3;
        pcStack_164 = (char *)0x50b988;
        iVar7 = FUN_0062fbf0();
        if (iVar7 != 0) {
          ExceptionList = local_10;
          return 4;
        }
      }
      if (*(short *)(&DAT_00792498 + local_18 * 2) == 0xb) {
        ExceptionList = local_10;
        return 0;
      }
      ExceptionList = local_10;
      return 3;
    }
  }
LAB_0050b9be:
  puStack_160 = (undefined1 *)0x50b9cc;
  cVar2 = FUN_004f6640();
  if (cVar2 == '\0') {
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
  puStack_160 = (undefined1 *)0x64;
  pcStack_164 = (char *)0x50ba1a;
  iVar7 = FUN_0062fbf0();
  puStack_160 = (undefined1 *)0x50ba2a;
  sVar3 = FUN_004ec040();
  if (iVar7 < sVar3) {
    *(undefined2 *)(&DAT_00792498 + local_18 * 2) = 1;
  }
  puStack_160 = (undefined1 *)0x50ba4c;
  cVar2 = FUN_004f6640();
  if (cVar2 == '\0') {
    uVar10 = 3;
  }
  else {
    uVar10 = 1;
  }
  ExceptionList = local_10;
  return uVar10;
}

