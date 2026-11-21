// FUN_00498c70  00498c70

void __thiscall FUN_00498c70(int param_1,short param_2,int param_3,short param_4)

{
  short *psVar1;
  char cVar2;
  short sVar3;
  uint uVar4;
  undefined4 uVar5;
  byte *pbVar6;
  undefined1 *puVar7;
  undefined1 local_f7;
  undefined1 local_f6;
  undefined1 local_f5;
  undefined1 local_f4;
  undefined1 local_f3;
  undefined1 local_f2;
  undefined1 local_f1;
  undefined1 local_f0;
  undefined1 local_ef;
  undefined1 local_ee;
  undefined1 local_ed;
  undefined1 local_ec;
  undefined1 local_eb;
  undefined1 local_ea;
  undefined1 local_e9;
  undefined1 local_e8;
  undefined1 local_e7;
  undefined1 local_e6;
  undefined1 local_e5;
  undefined1 local_e4;
  undefined1 local_e3;
  undefined1 local_e2;
  undefined1 local_e1;
  undefined1 local_e0;
  undefined1 local_df;
  undefined1 local_de;
  undefined1 local_dd;
  undefined1 local_dc;
  undefined1 local_db;
  undefined1 local_da;
  undefined1 local_d9;
  undefined1 local_d8;
  undefined1 local_d7;
  undefined1 local_d6;
  undefined1 local_d5;
  undefined1 local_d4;
  undefined1 local_d3;
  undefined1 local_d2;
  undefined1 local_d1;
  undefined1 local_d0;
  undefined1 local_cf;
  undefined1 local_ce;
  undefined1 local_cd;
  undefined1 local_cc;
  undefined1 local_cb;
  undefined1 local_ca;
  undefined1 local_c9;
  undefined1 local_c8;
  undefined1 local_c7;
  undefined1 local_c6;
  undefined1 local_c5;
  undefined1 local_c4;
  undefined1 local_c3;
  undefined1 local_c2;
  undefined1 local_c1;
  undefined1 local_c0;
  undefined1 local_bf;
  undefined1 local_be;
  undefined1 local_bd;
  void *local_bc;
  undefined1 local_b5;
  undefined1 local_b4;
  undefined1 local_b3;
  undefined1 local_b2;
  undefined1 local_b1;
  void *local_b0;
  undefined1 local_ac;
  undefined1 local_ab;
  undefined1 local_aa;
  undefined1 local_a9;
  undefined1 local_a8;
  undefined1 local_a7;
  undefined1 local_a6;
  undefined1 local_a5;
  undefined1 local_a4;
  undefined1 local_a3;
  undefined1 local_a2;
  undefined1 local_a1;
  void *local_a0;
  undefined1 local_99;
  undefined1 local_98;
  undefined1 local_97;
  undefined1 local_96;
  undefined1 local_95;
  void *local_94;
  undefined1 local_90;
  undefined1 local_8f;
  undefined1 local_8e;
  undefined1 local_8d;
  undefined1 local_8c;
  undefined1 local_8b;
  undefined1 local_8a;
  undefined1 local_89;
  undefined1 local_88;
  undefined1 local_87;
  undefined1 local_86;
  undefined1 local_85;
  undefined2 local_84;
  short local_80;
  short local_7c [4];
  short local_74;
  undefined1 local_70 [4];
  undefined1 local_6c [4];
  undefined1 local_68 [4];
  undefined1 local_64 [4];
  undefined1 local_60 [7];
  byte local_59;
  short local_58;
  short local_54;
  void *local_50;
  undefined1 local_4c [6];
  byte local_46;
  byte local_45;
  short local_44;
  void *local_40;
  short local_3c;
  short local_38;
  undefined1 local_34 [6];
  byte local_2e;
  byte local_2d;
  undefined2 local_2c;
  short local_28;
  short local_24 [4];
  uint local_1c;
  short local_18;
  short local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a0d73;
  local_10 = ExceptionList;
  uVar4 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_1c = uVar4;
  ExceptionList = &local_10;
  if (param_2 < 0) {
    FUN_005e9f20("shHandIndex>=0","..\\Casino\\PokerHand.cpp",0x1757,uVar4);
  }
  if (0x1f < param_2) {
    FUN_005e9f20("shHandIndex<DRAWNUMBEROFINDICES","..\\Casino\\PokerHand.cpp",0x1758,uVar4);
  }
  if (param_4 == 0) {
    for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
      *(undefined1 *)(param_3 + local_14) = 0;
    }
  }
  else {
    if (param_2 == 0x1d) {
      if (param_4 != -1) {
        FUN_005e9f20("shBluffIndex == -1","..\\Casino\\PokerHand.cpp",0x1765,uVar4);
      }
      for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
        *(undefined1 *)(param_3 + local_14) = 1;
      }
      for (local_28 = 0; local_28 < 4; local_28 = local_28 + 1) {
        local_24[local_28] = 0;
      }
      for (local_18 = 0; local_18 < *(short *)(param_1 + 4); local_18 = local_18 + 1) {
        uVar5 = DAT_0079076c;
        FUN_00464400(&local_85);
        cVar2 = FUN_004640b0(uVar5);
        if (cVar2 == '\0') {
          uVar5 = DAT_00790754;
          FUN_00464400(&local_86);
          cVar2 = FUN_004640b0(uVar5);
          if (cVar2 == '\0') {
            uVar5 = DAT_00790764;
            FUN_00464400(&local_87);
            cVar2 = FUN_004640b0(uVar5);
            if (cVar2 == '\0') {
              uVar5 = DAT_00790770;
              FUN_00464400(&local_88);
              cVar2 = FUN_004640b0(uVar5);
              if (cVar2 != '\0') {
                local_24[3] = local_24[3] + 1;
              }
            }
            else {
              local_24[2] = local_24[2] + 1;
            }
          }
          else {
            local_24[1] = local_24[1] + 1;
          }
        }
        else {
          local_24[0] = local_24[0] + 1;
        }
      }
      local_2c = 0;
      local_28 = 0;
      while( true ) {
        if (3 < local_28) goto LAB_00499028;
        if (local_24[local_28] == 4) break;
        local_28 = local_28 + 1;
      }
      for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
        if (local_28 == 0) {
          uVar5 = DAT_0079076c;
          FUN_00464400(&local_89);
          cVar2 = FUN_004640b0(uVar5);
          if (cVar2 != '\0') {
            *(undefined1 *)(param_3 + local_14) = 0;
          }
        }
        else if (local_28 == 1) {
          uVar5 = DAT_00790754;
          FUN_00464400(&local_8a);
          cVar2 = FUN_004640b0(uVar5);
          if (cVar2 != '\0') {
            *(undefined1 *)(param_3 + local_14) = 0;
          }
        }
        else if (local_28 == 2) {
          uVar5 = DAT_00790764;
          FUN_00464400(&local_8b);
          cVar2 = FUN_004640b0(uVar5);
          if (cVar2 != '\0') {
            *(undefined1 *)(param_3 + local_14) = 0;
          }
        }
        else if (local_28 == 3) {
          uVar5 = DAT_00790770;
          FUN_00464400(&local_8c);
          cVar2 = FUN_004640b0(uVar5);
          if (cVar2 != '\0') {
            *(undefined1 *)(param_3 + local_14) = 0;
          }
        }
      }
LAB_00499028:
      if (3 < local_28) {
        FUN_005e9f20("shSuitIndex<4","..\\Casino\\PokerHand.cpp",0x1799);
      }
      goto LAB_0049a630;
    }
    if (param_2 == 0x1e) {
      if (param_4 != -1) {
        FUN_005e9f20("shBluffIndex == -1","..\\Casino\\PokerHand.cpp",0x179f,uVar4);
      }
      FUN_00485940(local_34,1,1,1,1,0,0,0);
      local_8 = 0;
      uVar5 = DAT_007913b0;
      FUN_004a2160(&local_8d);
      cVar2 = FUN_004a1e10(uVar5);
      if (cVar2 != '\0') {
        for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
          *(undefined1 *)(param_3 + local_14) = 0;
        }
        for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
          puVar7 = &local_90;
          FUN_00464480(&local_8f);
          uVar5 = FUN_00463f80(puVar7);
          FUN_004a21b0(&local_8e);
          cVar2 = FUN_004a1fb0(uVar5);
          if (cVar2 != '\0') {
            *(undefined1 *)(param_3 + local_14) = 1;
            local_8 = 0xffffffff;
            FUN_004a20f0();
            goto LAB_0049a630;
          }
        }
        FUN_005e9f20(&DAT_006b2b64,"..\\Casino\\PokerHand.cpp",0x17ad);
      }
      for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
        *(undefined1 *)(param_3 + local_14) = 1;
      }
      local_94 = operator_new((*DAT_007913c8 + 1) * 2);
      for (local_2d = 0; local_2d <= *DAT_007913c8; local_2d = local_2d + 1) {
        *(undefined2 *)((int)local_94 + (uint)local_2d * 2) = 0;
      }
      local_40 = local_94;
      for (local_44 = 0; local_44 < *(short *)(param_1 + 4); local_44 = local_44 + 1) {
        puVar7 = &local_96;
        FUN_00464480(&local_95);
        pbVar6 = (byte *)FUN_00463f80(puVar7);
        psVar1 = (short *)((int)local_40 + (uint)*pbVar6 * 2);
        *psVar1 = *psVar1 + 1;
        uVar5 = DAT_007907a4;
        FUN_00464480(&local_97);
        cVar2 = FUN_00464050(uVar5);
        if (cVar2 != '\0') {
          puVar7 = &local_99;
          FUN_00464480(&local_98);
          pbVar6 = (byte *)FUN_00463fd0(puVar7);
          psVar1 = (short *)((int)local_40 + (uint)*pbVar6 * 2);
          *psVar1 = *psVar1 + 1;
        }
      }
      local_2e = 0;
      local_3c = 0;
      local_38 = 0;
      for (local_2d = *DAT_007913b4; local_2d <= *DAT_007913c8; local_2d = local_2d + 1) {
        if (*(short *)((int)local_40 + (uint)local_2d * 2) < 1) {
          local_3c = 0;
        }
        else {
          local_3c = local_3c + 1;
          if (local_38 < local_3c) {
            local_2e = local_2d;
            local_38 = local_3c;
          }
        }
      }
      local_a0 = local_40;
      operator_delete(local_40);
      if (local_38 != 4) {
        FUN_005e9f20("shMostInARowSoFar == 4","..\\Casino\\PokerHand.cpp",0x17d1);
      }
      for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
        puVar7 = &local_a2;
        FUN_00464480(&local_a1);
        pbVar6 = (byte *)FUN_00463fd0(puVar7);
        if (*pbVar6 == local_2e) {
          *(undefined1 *)(param_3 + local_14) = 0;
        }
        else {
          puVar7 = &local_a4;
          FUN_00464480(&local_a3);
          pbVar6 = (byte *)FUN_00463f80(puVar7);
          if ((uint)*pbVar6 == local_2e - 1) {
            *(undefined1 *)(param_3 + local_14) = 0;
          }
          else {
            puVar7 = &local_a6;
            FUN_00464480(&local_a5);
            pbVar6 = (byte *)FUN_00463f80(puVar7);
            if ((uint)*pbVar6 == local_2e - 2) {
              *(undefined1 *)(param_3 + local_14) = 0;
            }
            else {
              puVar7 = &local_a8;
              FUN_00464480(&local_a7);
              pbVar6 = (byte *)FUN_00463f80(puVar7);
              if ((uint)*pbVar6 == local_2e - 3) {
                *(undefined1 *)(param_3 + local_14) = 0;
              }
            }
          }
        }
      }
      local_8 = 0xffffffff;
      FUN_004a20f0();
    }
    else if (param_2 == 0x1f) {
      if (param_4 != -1) {
        FUN_005e9f20("shBluffIndex == -1","..\\Casino\\PokerHand.cpp",0x17e4,uVar4);
      }
      FUN_00485940(local_4c,1,1,1,1,0,0,0);
      local_8 = 1;
      uVar5 = DAT_007913b0;
      FUN_004a2160(&local_a9);
      cVar2 = FUN_004a1e10(uVar5);
      if (cVar2 != '\0') {
        for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
          *(undefined1 *)(param_3 + local_14) = 0;
        }
        for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
          puVar7 = &local_ac;
          FUN_00464480(&local_ab);
          uVar5 = FUN_00463f80(puVar7);
          FUN_004a21b0(&local_aa);
          cVar2 = FUN_004a1fb0(uVar5);
          if (cVar2 != '\0') {
            *(undefined1 *)(param_3 + local_14) = 1;
            local_8 = 0xffffffff;
            FUN_004a20f0();
            goto LAB_0049a630;
          }
        }
        FUN_005e9f20(&DAT_006b2b64,"..\\Casino\\PokerHand.cpp",0x17f2);
      }
      for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
        *(undefined1 *)(param_3 + local_14) = 1;
      }
      local_b0 = operator_new((*DAT_007913c8 + 1) * 2);
      for (local_45 = 0; local_45 <= *DAT_007913c8; local_45 = local_45 + 1) {
        *(undefined2 *)((int)local_b0 + (uint)local_45 * 2) = 0;
      }
      local_50 = local_b0;
      for (local_54 = 0; local_54 < *(short *)(param_1 + 4); local_54 = local_54 + 1) {
        puVar7 = &local_b2;
        FUN_00464480(&local_b1);
        pbVar6 = (byte *)FUN_00463f80(puVar7);
        psVar1 = (short *)((int)local_50 + (uint)*pbVar6 * 2);
        *psVar1 = *psVar1 + 1;
        uVar5 = DAT_007907a4;
        FUN_00464480(&local_b3);
        cVar2 = FUN_00464050(uVar5);
        if (cVar2 != '\0') {
          puVar7 = &local_b5;
          FUN_00464480(&local_b4);
          pbVar6 = (byte *)FUN_00463fd0(puVar7);
          psVar1 = (short *)((int)local_50 + (uint)*pbVar6 * 2);
          *psVar1 = *psVar1 + 1;
        }
      }
      local_46 = 0;
      for (local_45 = *DAT_007913b4; local_45 <= *DAT_0079138c; local_45 = local_45 + 1) {
        local_58 = 0;
        for (local_59 = 0; local_59 < 5; local_59 = local_59 + 1) {
          if (0 < *(short *)((int)local_50 + ((uint)local_45 + (uint)local_59) * 2)) {
            local_58 = local_58 + 1;
          }
        }
        if (local_58 == 5) {
          FUN_005e9f20("shHaveIt != 5","..\\Casino\\PokerHand.cpp",0x180d);
        }
        if (local_58 == 4) {
          local_46 = local_45;
        }
      }
      local_bc = local_50;
      operator_delete(local_50);
      if (local_46 == 0) {
        FUN_005e9f20("ucLastOneBaseIndex != 0","..\\Casino\\PokerHand.cpp",0x1813);
      }
      for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
        puVar7 = &local_be;
        FUN_00464480(&local_bd);
        pbVar6 = (byte *)FUN_00463fd0(puVar7);
        if (*pbVar6 == local_46) {
          *(undefined1 *)(param_3 + local_14) = 0;
        }
        else {
          puVar7 = &local_c0;
          FUN_00464480(&local_bf);
          pbVar6 = (byte *)FUN_00463f80(puVar7);
          if ((uint)*pbVar6 == local_46 + 1) {
            *(undefined1 *)(param_3 + local_14) = 0;
          }
          else {
            puVar7 = &local_c2;
            FUN_00464480(&local_c1);
            pbVar6 = (byte *)FUN_00463f80(puVar7);
            if ((uint)*pbVar6 == local_46 + 2) {
              *(undefined1 *)(param_3 + local_14) = 0;
            }
            else {
              puVar7 = &local_c4;
              FUN_00464480(&local_c3);
              pbVar6 = (byte *)FUN_00463f80(puVar7);
              if ((uint)*pbVar6 == local_46 + 3) {
                *(undefined1 *)(param_3 + local_14) = 0;
              }
              else {
                puVar7 = &local_c6;
                FUN_00464480(&local_c5);
                pbVar6 = (byte *)FUN_00463f80(puVar7);
                if ((uint)*pbVar6 == local_46 + 4) {
                  *(undefined1 *)(param_3 + local_14) = 0;
                }
              }
            }
          }
        }
      }
      local_8 = 0xffffffff;
      FUN_004a20f0();
    }
    else if (param_2 == 0x1b) {
      if (param_4 != -1) {
        FUN_005e9f20("shBluffIndex == -1","..\\Casino\\PokerHand.cpp",0x1827,uVar4);
      }
      for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
        *(undefined1 *)(param_3 + local_14) = 1;
      }
      FUN_00485940(local_60,1,1,1,1,0,0,0);
      local_8 = 2;
      uVar5 = DAT_00791394;
      FUN_004a2160(&local_c7);
      cVar2 = FUN_004a1e10(uVar5);
      if (cVar2 == '\0') {
        FUN_005e9f20("phvTemp.GetCategory() == FourOfAKind","..\\Casino\\PokerHand.cpp",0x182b);
      }
      for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
        puVar7 = &local_ca;
        FUN_00464480(&local_c9);
        uVar5 = FUN_00463f80(puVar7);
        FUN_004a21b0(&local_c8);
        cVar2 = FUN_004a1fb0(uVar5);
        if (cVar2 != '\0') {
          *(undefined1 *)(param_3 + local_14) = 0;
        }
      }
      local_8 = 0xffffffff;
      FUN_004a20f0();
    }
    else if ((param_2 < 0x18) || (0x1c < param_2)) {
      if ((param_2 < 0x15) || (0x17 < param_2)) {
        if ((param_2 < 0x12) || (0x14 < param_2)) {
          if ((param_2 < 5) || (0x11 < param_2)) {
            if ((param_2 < 0) || (4 < param_2)) {
              FUN_005e9f20(&DAT_006b2b64,"..\\Casino\\PokerHand.cpp",0x18c9,uVar4);
            }
            else {
              if ((param_4 == 2) && (sVar3 = FUN_00484bf0(), sVar3 == 3)) {
                for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
                  *(undefined1 *)(param_3 + local_14) = 1;
                }
                for (local_80 = 0; local_80 < 4; local_80 = local_80 + 1) {
                  local_7c[local_80] = 0;
                }
                for (local_74 = 0; local_74 < *(short *)(param_1 + 4); local_74 = local_74 + 1) {
                  uVar5 = DAT_0079076c;
                  FUN_00464400(&local_e3);
                  cVar2 = FUN_004640b0(uVar5);
                  if (cVar2 == '\0') {
                    uVar5 = DAT_00790754;
                    FUN_00464400(&local_e4);
                    cVar2 = FUN_004640b0(uVar5);
                    if (cVar2 == '\0') {
                      uVar5 = DAT_00790764;
                      FUN_00464400(&local_e5);
                      cVar2 = FUN_004640b0(uVar5);
                      if (cVar2 == '\0') {
                        uVar5 = DAT_00790770;
                        FUN_00464400(&local_e6);
                        cVar2 = FUN_004640b0(uVar5);
                        if (cVar2 != '\0') {
                          local_7c[3] = local_7c[3] + 1;
                        }
                      }
                      else {
                        local_7c[2] = local_7c[2] + 1;
                      }
                    }
                    else {
                      local_7c[1] = local_7c[1] + 1;
                    }
                  }
                  else {
                    local_7c[0] = local_7c[0] + 1;
                  }
                }
                local_84 = 0;
                local_80 = 0;
                while( true ) {
                  if (3 < local_80) goto LAB_0049a3d1;
                  if (local_7c[local_80] == 3) break;
                  local_80 = local_80 + 1;
                }
                for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
                  if (local_80 == 0) {
                    uVar5 = DAT_0079076c;
                    FUN_00464400(&local_e7);
                    cVar2 = FUN_004640b0(uVar5);
                    if (cVar2 != '\0') {
                      *(undefined1 *)(param_3 + local_14) = 0;
                    }
                  }
                  else if (local_80 == 1) {
                    uVar5 = DAT_00790754;
                    FUN_00464400(&local_e8);
                    cVar2 = FUN_004640b0(uVar5);
                    if (cVar2 != '\0') {
                      *(undefined1 *)(param_3 + local_14) = 0;
                    }
                  }
                  else if (local_80 == 2) {
                    uVar5 = DAT_00790764;
                    FUN_00464400(&local_e9);
                    cVar2 = FUN_004640b0(uVar5);
                    if (cVar2 != '\0') {
                      *(undefined1 *)(param_3 + local_14) = 0;
                    }
                  }
                  else if (local_80 == 3) {
                    uVar5 = DAT_00790770;
                    FUN_00464400(&local_ea);
                    cVar2 = FUN_004640b0(uVar5);
                    if (cVar2 != '\0') {
                      *(undefined1 *)(param_3 + local_14) = 0;
                    }
                  }
                }
LAB_0049a3d1:
                if (3 < local_80) {
                  FUN_005e9f20("shSuitIndex<4","..\\Casino\\PokerHand.cpp",0x18ae);
                }
                goto LAB_0049a630;
              }
              for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
                *(undefined1 *)(param_3 + local_14) = 1;
              }
              FUN_00485940(local_70,1,1,1,1,0,0,0);
              local_8 = 6;
              uVar5 = DAT_00791390;
              FUN_004a2160(&local_eb);
              cVar2 = FUN_004a1e10(uVar5);
              if (cVar2 == '\0') {
                FUN_005e9f20("phvTemp.GetCategory() == NoPair","..\\Casino\\PokerHand.cpp",0x18b4);
              }
              for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
                puVar7 = &local_ee;
                FUN_00464480(&local_ed);
                uVar5 = FUN_00463f80(puVar7);
                FUN_004a21b0(&local_ec);
                cVar2 = FUN_004a1fb0(uVar5);
                if (cVar2 == '\0') {
                  puVar7 = &local_f1;
                  FUN_00464480(&local_f0);
                  uVar5 = FUN_00463f80(puVar7);
                  FUN_004a2200(&local_ef);
                  cVar2 = FUN_004a1fb0(uVar5);
                  if (cVar2 != '\0') {
                    *(undefined1 *)(param_3 + local_14) = 0;
                  }
                }
                else {
                  *(undefined1 *)(param_3 + local_14) = 0;
                }
                if (param_4 != -1) {
                  puVar7 = &local_f4;
                  FUN_00464480(&local_f3);
                  uVar5 = FUN_00463f80(puVar7);
                  FUN_004a2250(&local_f2);
                  cVar2 = FUN_004a1fb0(uVar5);
                  if (cVar2 != '\0') {
                    *(undefined1 *)(param_3 + local_14) = 0;
                  }
                }
                if ((param_4 != -1) && (param_4 != 2)) {
                  puVar7 = &local_f7;
                  FUN_00464480(&local_f6);
                  uVar5 = FUN_00463f80(puVar7);
                  FUN_004a22a0(&local_f5);
                  cVar2 = FUN_004a1fb0(uVar5);
                  if (cVar2 != '\0') {
                    *(undefined1 *)(param_3 + local_14) = 0;
                  }
                }
              }
              local_8 = 0xffffffff;
              FUN_004a20f0();
            }
          }
          else {
            for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
              *(undefined1 *)(param_3 + local_14) = 1;
            }
            FUN_00485940(local_6c,1,1,1,1,0,0,0);
            local_8 = 5;
            uVar5 = DAT_007913b0;
            FUN_004a2160(&local_d9);
            cVar2 = FUN_004a1e10(uVar5);
            if (cVar2 == '\0') {
              FUN_005e9f20("phvTemp.GetCategory() == OnePair","..\\Casino\\PokerHand.cpp",0x1864);
            }
            for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
              puVar7 = &local_dc;
              FUN_00464480(&local_db);
              uVar5 = FUN_00463f80(puVar7);
              FUN_004a21b0(&local_da);
              cVar2 = FUN_004a1fb0(uVar5);
              if (cVar2 != '\0') {
                *(undefined1 *)(param_3 + local_14) = 0;
              }
              if (param_4 != -1) {
                puVar7 = &local_df;
                FUN_00464480(&local_de);
                uVar5 = FUN_00463f80(puVar7);
                FUN_004a2200(&local_dd);
                cVar2 = FUN_004a1fb0(uVar5);
                if (cVar2 != '\0') {
                  *(undefined1 *)(param_3 + local_14) = 0;
                }
              }
              if ((param_4 != -1) && (param_4 != 2)) {
                puVar7 = &local_e2;
                FUN_00464480(&local_e1);
                uVar5 = FUN_00463f80(puVar7);
                FUN_004a2250(&local_e0);
                cVar2 = FUN_004a1fb0(uVar5);
                if (cVar2 != '\0') {
                  *(undefined1 *)(param_3 + local_14) = 0;
                }
              }
            }
            local_8 = 0xffffffff;
            FUN_004a20f0();
          }
        }
        else {
          if (param_4 != -1) {
            FUN_005e9f20("shBluffIndex == -1","..\\Casino\\PokerHand.cpp",0x1850,uVar4);
          }
          for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
            *(undefined1 *)(param_3 + local_14) = 1;
          }
          FUN_00485940(local_68,1,1,1,1,0,0,0);
          local_8 = 4;
          uVar5 = DAT_00791380;
          FUN_004a2160(&local_d2);
          cVar2 = FUN_004a1e10(uVar5);
          if (cVar2 == '\0') {
            FUN_005e9f20("phvTemp.GetCategory() == TwoPair","..\\Casino\\PokerHand.cpp",0x1854);
          }
          for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
            puVar7 = &local_d5;
            FUN_00464480(&local_d4);
            uVar5 = FUN_00463f80(puVar7);
            FUN_004a21b0(&local_d3);
            cVar2 = FUN_004a1fb0(uVar5);
            if (cVar2 == '\0') {
              puVar7 = &local_d8;
              FUN_00464480(&local_d7);
              uVar5 = FUN_00463f80(puVar7);
              FUN_004a2200(&local_d6);
              cVar2 = FUN_004a1fb0(uVar5);
              if (cVar2 != '\0') {
                *(undefined1 *)(param_3 + local_14) = 0;
              }
            }
            else {
              *(undefined1 *)(param_3 + local_14) = 0;
            }
          }
          local_8 = 0xffffffff;
          FUN_004a20f0();
        }
      }
      else {
        for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
          *(undefined1 *)(param_3 + local_14) = 1;
        }
        FUN_00485940(local_64,1,1,1,1,0,0,0);
        local_8 = 3;
        uVar5 = DAT_00791418;
        FUN_004a2160(&local_cb);
        cVar2 = FUN_004a1e10(uVar5);
        if (cVar2 == '\0') {
          FUN_005e9f20("phvTemp.GetCategory() == ThreeOfAKind","..\\Casino\\PokerHand.cpp",0x1841);
        }
        for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
          puVar7 = &local_ce;
          FUN_00464480(&local_cd);
          uVar5 = FUN_00463f80(puVar7);
          FUN_004a21b0(&local_cc);
          cVar2 = FUN_004a1fb0(uVar5);
          if (cVar2 != '\0') {
            *(undefined1 *)(param_3 + local_14) = 0;
          }
          if (param_4 != 2) {
            puVar7 = &local_d1;
            FUN_00464480(&local_d0);
            uVar5 = FUN_00463f80(puVar7);
            FUN_004a2200(&local_cf);
            cVar2 = FUN_004a1fb0(uVar5);
            if (cVar2 != '\0') {
              *(undefined1 *)(param_3 + local_14) = 0;
            }
          }
        }
        local_8 = 0xffffffff;
        FUN_004a20f0();
      }
    }
    else {
      if (param_4 != -1) {
        FUN_005e9f20("shBluffIndex == -1","..\\Casino\\PokerHand.cpp",0x1836,uVar4);
      }
      for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
        *(undefined1 *)(param_3 + local_14) = 0;
      }
    }
  }
LAB_0049a630:
  ExceptionList = local_10;
  __security_check_cookie(local_1c ^ (uint)&stack0xfffffffc);
  return;
}

