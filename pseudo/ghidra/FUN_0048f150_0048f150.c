// FUN_0048f150  0048f150

undefined2 __fastcall FUN_0048f150(int param_1)

{
  short *psVar1;
  char cVar2;
  short sVar3;
  uint uVar4;
  byte *pbVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  undefined1 local_19d;
  undefined1 local_19c;
  undefined1 local_19b;
  undefined1 local_19a;
  undefined1 local_199;
  void *local_198;
  undefined1 local_193;
  undefined2 local_192;
  undefined2 local_190;
  undefined2 local_18e;
  void *local_18c;
  undefined1 local_185;
  undefined1 local_184;
  undefined1 local_183;
  undefined1 local_182;
  undefined1 local_181;
  void *local_180;
  undefined2 local_17a;
  undefined2 local_178;
  undefined1 local_175;
  undefined2 local_174;
  undefined2 local_172;
  undefined1 local_16f;
  undefined2 local_16e;
  undefined1 local_16b;
  undefined2 local_16a;
  undefined2 local_168;
  undefined1 local_165;
  undefined2 local_164;
  undefined2 local_162;
  undefined1 local_15f;
  undefined2 local_15e;
  undefined2 local_15c;
  undefined2 local_15a;
  void *local_158;
  undefined1 local_151;
  undefined1 local_150;
  undefined1 local_14f;
  undefined1 local_14e;
  undefined1 local_14d;
  void *local_14c;
  undefined1 local_145;
  undefined2 local_144;
  undefined1 local_141;
  undefined2 local_140;
  undefined2 local_13e;
  undefined1 local_13b;
  undefined2 local_13a;
  undefined2 local_138;
  undefined1 local_135;
  undefined1 local_134;
  undefined1 local_133;
  undefined2 local_132;
  undefined2 local_130;
  undefined1 local_12e;
  undefined1 local_12d;
  void *local_12c;
  undefined1 local_125;
  undefined1 local_124;
  undefined1 local_123;
  undefined1 local_122;
  undefined1 local_121;
  void *local_120;
  undefined2 local_11a;
  undefined2 local_118;
  undefined2 local_116;
  undefined2 local_114;
  undefined2 local_112;
  undefined2 local_110;
  undefined2 local_10e;
  undefined2 local_10c;
  undefined2 local_10a;
  void *local_108;
  undefined1 local_101;
  undefined1 local_100;
  undefined1 local_ff;
  undefined1 local_fe;
  undefined1 local_fd;
  void *local_fc;
  undefined2 local_f6;
  undefined2 local_f4;
  undefined1 local_f1;
  undefined2 local_f0;
  undefined1 local_ee;
  char local_ed;
  char local_ec;
  byte local_eb;
  char local_ea;
  char local_e9;
  char local_e8;
  byte local_e7;
  char local_e6;
  char local_e5;
  short local_e4;
  short local_e0;
  void *local_dc;
  short local_d8;
  short local_d4;
  short local_d0;
  short local_cc;
  char local_c6;
  byte local_c5;
  short local_c4;
  char local_bf;
  char local_be;
  byte local_bd;
  char local_bc;
  char local_bb;
  byte local_ba;
  char local_b9;
  short local_b8;
  short local_b4;
  void *local_b0;
  short local_ac;
  short local_a8;
  short local_a4;
  char local_9e;
  byte local_9d;
  short local_9c;
  char local_95;
  char local_94;
  byte local_93;
  char local_92;
  char local_91;
  char local_90;
  byte local_8f;
  char local_8e;
  char local_8d;
  short local_8c;
  short local_88;
  void *local_84;
  short local_80;
  short local_7c;
  short local_78;
  short local_74;
  char local_6e;
  byte local_6d;
  short local_6c;
  undefined1 local_68 [5];
  char local_63;
  char local_62;
  byte local_61;
  char local_60;
  char local_5f;
  byte local_5e;
  char local_5d;
  short local_5c;
  short local_58;
  void *local_54;
  short local_50;
  short local_4c;
  short local_48;
  char local_42;
  byte local_41;
  short local_40;
  short local_3c;
  char local_36;
  byte local_35;
  short local_34;
  char local_2f;
  char local_2e;
  byte local_2d;
  short local_2c;
  void *local_28;
  short local_24;
  short local_20;
  char local_1a;
  byte local_19;
  short local_18;
  undefined1 local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a0638;
  local_10 = ExceptionList;
  uVar4 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if ((*(short *)(param_1 + 4) != 0) &&
     ((*(short *)(param_1 + 4) < 3 || (5 < *(short *)(param_1 + 4))))) {
    FUN_005e9f20("(shSize==0) || ((shSize>=3) && (shSize<=5))","..\\Casino\\PokerHand.cpp",0xb65,
                 uVar4);
  }
  if (*(short *)(param_1 + 4) == 0) {
    local_f0 = 0;
  }
  else if (*(short *)(param_1 + 4) == 3) {
    FUN_00485940(local_14,1,1,1,1,0,0,0);
    local_8 = 0;
    uVar6 = DAT_00791418;
    FUN_004a2160(&local_ee);
    cVar2 = FUN_004a1e10(uVar6);
    if (cVar2 == '\0') {
      uVar6 = DAT_007913b0;
      FUN_004a2160(&local_f1);
      cVar2 = FUN_004a1e10(uVar6);
      if (cVar2 == '\0') {
        local_fc = operator_new((*DAT_007913c8 + 1) * 2);
        for (local_19 = 0; local_19 <= *DAT_007913c8; local_19 = local_19 + 1) {
          *(undefined2 *)((int)local_fc + (uint)local_19 * 2) = 0;
        }
        local_1a = '\0';
        local_28 = local_fc;
        for (local_2c = 0; local_2c < *(short *)(param_1 + 4); local_2c = local_2c + 1) {
          puVar7 = &local_fe;
          FUN_00464480(&local_fd);
          pbVar5 = (byte *)FUN_00463f80(puVar7);
          psVar1 = (short *)((int)local_28 + (uint)*pbVar5 * 2);
          *psVar1 = *psVar1 + 1;
          uVar6 = DAT_007907a4;
          FUN_00464480(&local_ff);
          cVar2 = FUN_00464050(uVar6);
          if (cVar2 != '\0') {
            puVar7 = &local_101;
            FUN_00464480(&local_100);
            pbVar5 = (byte *)FUN_00463fd0(puVar7);
            psVar1 = (short *)((int)local_28 + (uint)*pbVar5 * 2);
            *psVar1 = *psVar1 + 1;
            local_1a = '\x01';
          }
        }
        local_24 = 0;
        local_18 = 0;
        if (local_1a == '\0') {
          local_35 = 0;
          local_36 = '\0';
          for (local_19 = *DAT_007913f0; local_19 <= *DAT_007913e0; local_19 = local_19 + 1) {
            if (0 < *(short *)((int)local_28 + (uint)local_19 * 2)) {
              if (local_35 != 0) {
                if (local_36 != '\0') {
                  local_18 = (local_19 - 1) - (ushort)local_35;
                  break;
                }
                local_24 = (local_19 - 1) - (ushort)local_35;
                local_36 = '\x01';
              }
              local_35 = local_19;
            }
          }
        }
        else {
          local_34 = 0;
          local_2d = 0;
          local_2f = '\0';
          local_2e = '\0';
          for (local_19 = *DAT_007913b4; local_19 <= *DAT_007913c8; local_19 = local_19 + 1) {
            if (0 < *(short *)((int)local_28 + (uint)local_19 * 2)) {
              if (local_2d != 0) {
                if (local_2f == '\0') {
                  local_24 = (local_19 - 1) - (ushort)local_2d;
                  local_2f = '\x01';
                }
                else {
                  if (local_2e != '\0') {
                    local_34 = (local_19 - 1) - (ushort)local_2d;
                    break;
                  }
                  local_18 = (local_19 - 1) - (ushort)local_2d;
                  local_2e = '\x01';
                }
              }
              local_2d = local_19;
            }
          }
          if (local_34 < local_24) {
            local_24 = local_34;
          }
        }
        local_108 = local_28;
        operator_delete(local_28);
        if ((int)local_24 + (int)local_18 < 3) {
          local_20 = 2;
        }
        else if ((local_24 < 3) || (local_18 < 3)) {
          local_20 = 1;
        }
        else {
          local_20 = 0;
        }
        sVar3 = FUN_00484bf0();
        if (sVar3 == 3) {
          if (local_20 == 2) {
            local_10a = 4;
            local_8 = 0xffffffff;
            FUN_004a20f0();
            local_f0 = local_10a;
          }
          else if (local_20 == 1) {
            local_10c = 5;
            local_8 = 0xffffffff;
            FUN_004a20f0();
            local_f0 = local_10c;
          }
          else {
            local_10e = 6;
            local_8 = 0xffffffff;
            FUN_004a20f0();
            local_f0 = local_10e;
          }
        }
        else {
          sVar3 = FUN_00484bf0();
          if (sVar3 == 2) {
            if (local_20 == 2) {
              local_110 = 7;
              local_8 = 0xffffffff;
              FUN_004a20f0();
              local_f0 = local_110;
            }
            else if (local_20 == 1) {
              local_112 = 8;
              local_8 = 0xffffffff;
              FUN_004a20f0();
              local_f0 = local_112;
            }
            else {
              local_114 = 9;
              local_8 = 0xffffffff;
              FUN_004a20f0();
              local_f0 = local_114;
            }
          }
          else if (local_20 == 2) {
            local_116 = 10;
            local_8 = 0xffffffff;
            FUN_004a20f0();
            local_f0 = local_116;
          }
          else if (local_20 == 1) {
            local_118 = 0xb;
            local_8 = 0xffffffff;
            FUN_004a20f0();
            local_f0 = local_118;
          }
          else {
            local_11a = 0xc;
            local_8 = 0xffffffff;
            FUN_004a20f0();
            local_f0 = local_11a;
          }
        }
      }
      else {
        sVar3 = FUN_00484bf0();
        if (sVar3 == 2) {
          local_f4 = 2;
          local_8 = 0xffffffff;
          FUN_004a20f0();
          local_f0 = local_f4;
        }
        else {
          local_f6 = 3;
          local_8 = 0xffffffff;
          FUN_004a20f0();
          local_f0 = local_f6;
        }
      }
    }
    else {
      local_f0 = 1;
      local_8 = 0xffffffff;
      FUN_004a20f0();
    }
  }
  else {
    if (*(short *)(param_1 + 4) == 4) {
      local_3c = FUN_0049b360();
      if (local_3c == 0x1b) {
        ExceptionList = local_10;
        return 0xd;
      }
      if ((local_3c == 0x1a) || (local_3c == 0x19)) {
        ExceptionList = local_10;
        return 0xe;
      }
      if (local_3c == 0x18) {
        ExceptionList = local_10;
        return 0xf;
      }
      if (local_3c == 0x17) {
        ExceptionList = local_10;
        return 0x10;
      }
      if (local_3c == 0x16) {
        ExceptionList = local_10;
        return 0x11;
      }
      if (local_3c == 0x15) {
        ExceptionList = local_10;
        return 0x12;
      }
      if (local_3c == 0x14) {
        ExceptionList = local_10;
        return 0x13;
      }
      if ((local_3c == 0x13) || (local_3c == 0x12)) {
        ExceptionList = local_10;
        return 0x14;
      }
      if (local_3c == 0x11) {
        ExceptionList = local_10;
        return 0x15;
      }
      if (0x10 < local_3c) {
        FUN_005e9f20("shCincinnatiIndex <= 16","..\\Casino\\PokerHand.cpp",0xc02);
      }
      if (local_3c < 0xc) {
        FUN_005e9f20("shCincinnatiIndex >= 12","..\\Casino\\PokerHand.cpp",0xc03);
      }
      local_120 = operator_new((*DAT_007913c8 + 1) * 2);
      for (local_41 = 0; local_41 <= *DAT_007913c8; local_41 = local_41 + 1) {
        *(undefined2 *)((int)local_120 + (uint)local_41 * 2) = 0;
      }
      local_42 = '\0';
      local_54 = local_120;
      for (local_5c = 0; local_5c < *(short *)(param_1 + 4); local_5c = local_5c + 1) {
        puVar7 = &local_122;
        FUN_00464480(&local_121);
        pbVar5 = (byte *)FUN_00463f80(puVar7);
        psVar1 = (short *)((int)local_54 + (uint)*pbVar5 * 2);
        *psVar1 = *psVar1 + 1;
        uVar6 = DAT_007907a4;
        FUN_00464480(&local_123);
        cVar2 = FUN_00464050(uVar6);
        if (cVar2 != '\0') {
          puVar7 = &local_125;
          FUN_00464480(&local_124);
          pbVar5 = (byte *)FUN_00463fd0(puVar7);
          psVar1 = (short *)((int)local_54 + (uint)*pbVar5 * 2);
          *psVar1 = *psVar1 + 1;
          local_42 = '\x01';
        }
      }
      local_50 = 0;
      local_40 = 0;
      local_58 = 0;
      local_48 = 0;
      if (local_42 == '\0') {
        local_61 = 0;
        local_63 = '\0';
        local_62 = '\0';
        for (local_41 = *DAT_007913f0; local_41 <= *DAT_007913e0; local_41 = local_41 + 1) {
          if (0 < *(short *)((int)local_54 + (uint)local_41 * 2)) {
            if (local_61 != 0) {
              if (local_63 == '\0') {
                local_50 = (local_41 - 1) - (ushort)local_61;
                local_63 = '\x01';
              }
              else {
                if (local_62 != '\0') {
                  local_58 = (local_41 - 1) - (ushort)local_61;
                  break;
                }
                local_40 = (local_41 - 1) - (ushort)local_61;
                local_62 = '\x01';
              }
            }
            local_61 = local_41;
          }
        }
      }
      else {
        local_5e = 0;
        local_60 = '\0';
        local_5f = '\0';
        local_5d = '\0';
        for (local_41 = *DAT_007913b4; local_41 <= *DAT_007913c8; local_41 = local_41 + 1) {
          if (0 < *(short *)((int)local_54 + (uint)local_41 * 2)) {
            if (local_5e != 0) {
              if (local_60 == '\0') {
                local_50 = (local_41 - 1) - (ushort)local_5e;
                local_60 = '\x01';
              }
              else if (local_5f == '\0') {
                local_40 = (local_41 - 1) - (ushort)local_5e;
                local_5f = '\x01';
              }
              else {
                if (local_5d != '\0') {
                  local_48 = (local_41 - 1) - (ushort)local_5e;
                  break;
                }
                local_58 = (local_41 - 1) - (ushort)local_5e;
                local_5d = '\x01';
              }
            }
            local_5e = local_41;
          }
        }
      }
      local_12c = local_54;
      operator_delete(local_54);
      if (local_42 == '\0') {
        if ((int)local_50 + (int)local_40 + (int)local_58 < 2) {
          local_4c = 3;
        }
        else if ((int)local_50 + (int)local_40 < 3) {
          local_4c = 2;
        }
        else if ((int)local_40 + (int)local_58 < 3) {
          local_4c = 2;
        }
        else if (((local_50 < 4) || (local_40 < 4)) || (local_58 < 4)) {
          local_4c = 1;
        }
        else {
          local_4c = 0;
        }
      }
      else if ((int)local_50 + (int)local_40 + (int)local_58 < 2) {
        local_4c = 3;
      }
      else if ((int)local_40 + (int)local_58 + (int)local_48 < 2) {
        local_4c = 3;
      }
      else if ((int)local_50 + (int)local_40 < 3) {
        local_4c = 2;
      }
      else if ((int)local_40 + (int)local_58 < 3) {
        local_4c = 2;
      }
      else if ((int)local_58 + (int)local_48 < 3) {
        local_4c = 2;
      }
      else if (((local_50 < 4) || (local_40 < 4)) || ((local_58 < 4 || (local_48 < 4)))) {
        local_4c = 1;
      }
      else {
        local_4c = 0;
      }
      if (local_3c == 0x10) {
        if (local_4c == 3) {
          ExceptionList = local_10;
          return 0x16;
        }
        if (local_4c == 2) {
          ExceptionList = local_10;
          return 0x17;
        }
        if (local_4c == 1) {
          ExceptionList = local_10;
          return 0x18;
        }
        ExceptionList = local_10;
        return 0x19;
      }
      if (local_3c == 0xf) {
        if (local_4c == 3) {
          ExceptionList = local_10;
          return 0x1a;
        }
        if (local_4c == 2) {
          ExceptionList = local_10;
          return 0x1b;
        }
        if (local_4c == 1) {
          ExceptionList = local_10;
          return 0x1c;
        }
        ExceptionList = local_10;
        return 0x1d;
      }
      if (local_3c == 0xe) {
        if (local_4c == 3) {
          ExceptionList = local_10;
          return 0x1e;
        }
        if (local_4c == 2) {
          ExceptionList = local_10;
          return 0x1f;
        }
        if (local_4c == 1) {
          ExceptionList = local_10;
          return 0x20;
        }
        ExceptionList = local_10;
        return 0x21;
      }
      if (local_3c == 0xd) {
        if (local_4c == 3) {
          ExceptionList = local_10;
          return 0x22;
        }
        if (local_4c == 2) {
          ExceptionList = local_10;
          return 0x23;
        }
        if (local_4c == 1) {
          ExceptionList = local_10;
          return 0x24;
        }
        ExceptionList = local_10;
        return 0x25;
      }
      if (local_3c == 0xc) {
        if (local_4c == 3) {
          ExceptionList = local_10;
          return 0x26;
        }
        if (local_4c == 2) {
          ExceptionList = local_10;
          return 0x27;
        }
        if (local_4c == 1) {
          ExceptionList = local_10;
          return 0x28;
        }
        ExceptionList = local_10;
        return 0x29;
      }
      FUN_005e9f20(&DAT_006b2b64,"..\\Casino\\PokerHand.cpp",0xcb7);
    }
    else if (*(short *)(param_1 + 4) == 5) {
      FUN_00485940(local_68,1,1,1,1,0,0,0);
      local_8 = 1;
      uVar6 = DAT_00791398;
      FUN_004a2160(&local_12d);
      cVar2 = FUN_004a1e10(uVar6);
      if (cVar2 != '\0') {
        pbVar5 = DAT_007913c8;
        FUN_004a21b0(&local_12e);
        cVar2 = FUN_004a1fb0(pbVar5);
        if (cVar2 != '\0') {
          local_130 = 0x2a;
          local_8 = 0xffffffff;
          FUN_004a20f0();
          ExceptionList = local_10;
          return local_130;
        }
        local_132 = 0x2b;
        local_8 = 0xffffffff;
        FUN_004a20f0();
        ExceptionList = local_10;
        return local_132;
      }
      uVar6 = DAT_00791394;
      FUN_004a2160(&local_133);
      cVar2 = FUN_004a1e10(uVar6);
      if (cVar2 != '\0') {
        pbVar5 = DAT_007913c8;
        FUN_004a21b0(&local_134);
        cVar2 = FUN_004a1fb0(pbVar5);
        if (cVar2 == '\0') {
          pbVar5 = DAT_007913c8;
          FUN_004a2200(&local_13b);
          cVar2 = FUN_004a1fb0(pbVar5);
          if (cVar2 != '\0') {
            local_13e = 0x2c;
            local_8 = 0xffffffff;
            FUN_004a20f0();
            ExceptionList = local_10;
            return local_13e;
          }
          local_140 = 0x2d;
          local_8 = 0xffffffff;
          FUN_004a20f0();
          ExceptionList = local_10;
          return local_140;
        }
        pbVar5 = DAT_007913e0;
        FUN_004a2200(&local_135);
        cVar2 = FUN_004a1fb0(pbVar5);
        if (cVar2 != '\0') {
          local_138 = 0x2c;
          local_8 = 0xffffffff;
          FUN_004a20f0();
          ExceptionList = local_10;
          return local_138;
        }
        local_13a = 0x2d;
        local_8 = 0xffffffff;
        FUN_004a20f0();
        ExceptionList = local_10;
        return local_13a;
      }
      uVar6 = DAT_007913d4;
      FUN_004a2160(&local_141);
      cVar2 = FUN_004a1e10(uVar6);
      if (cVar2 != '\0') {
        local_144 = 0x2e;
        local_8 = 0xffffffff;
        FUN_004a20f0();
        ExceptionList = local_10;
        return local_144;
      }
      uVar6 = DAT_007913a0;
      FUN_004a2160(&local_145);
      cVar2 = FUN_004a1e10(uVar6);
      if (cVar2 != '\0') {
        local_14c = operator_new((*DAT_007913c8 + 1) * 2);
        for (local_6d = 0; local_6d <= *DAT_007913c8; local_6d = local_6d + 1) {
          *(undefined2 *)((int)local_14c + (uint)local_6d * 2) = 0;
        }
        local_6e = '\0';
        local_84 = local_14c;
        for (local_8c = 0; local_8c < *(short *)(param_1 + 4); local_8c = local_8c + 1) {
          puVar7 = &local_14e;
          FUN_00464480(&local_14d);
          pbVar5 = (byte *)FUN_00463f80(puVar7);
          psVar1 = (short *)((int)local_84 + (uint)*pbVar5 * 2);
          *psVar1 = *psVar1 + 1;
          uVar6 = DAT_007907a4;
          FUN_00464480(&local_14f);
          cVar2 = FUN_00464050(uVar6);
          if (cVar2 != '\0') {
            puVar7 = &local_151;
            FUN_00464480(&local_150);
            pbVar5 = (byte *)FUN_00463fd0(puVar7);
            psVar1 = (short *)((int)local_84 + (uint)*pbVar5 * 2);
            *psVar1 = *psVar1 + 1;
            local_6e = '\x01';
          }
        }
        local_80 = 0;
        local_6c = 0;
        local_88 = 0;
        local_78 = 0;
        local_74 = 0;
        if (local_6e == '\0') {
          local_93 = 0;
          local_95 = '\0';
          local_94 = '\0';
          local_92 = '\0';
          for (local_6d = *DAT_007913f0; local_6d <= *DAT_007913e0; local_6d = local_6d + 1) {
            if (0 < *(short *)((int)local_84 + (uint)local_6d * 2)) {
              if (local_93 != 0) {
                if (local_95 == '\0') {
                  local_80 = (local_6d - 1) - (ushort)local_93;
                  local_95 = '\x01';
                }
                else if (local_94 == '\0') {
                  local_6c = (local_6d - 1) - (ushort)local_93;
                  local_94 = '\x01';
                }
                else {
                  if (local_92 != '\0') {
                    local_78 = (local_6d - 1) - (ushort)local_93;
                    break;
                  }
                  local_88 = (local_6d - 1) - (ushort)local_93;
                  local_92 = '\x01';
                }
              }
              local_93 = local_6d;
            }
          }
        }
        else {
          local_8f = 0;
          local_91 = '\0';
          local_90 = '\0';
          local_8e = '\0';
          local_8d = '\0';
          for (local_6d = *DAT_007913b4; local_6d <= *DAT_007913c8; local_6d = local_6d + 1) {
            if (0 < *(short *)((int)local_84 + (uint)local_6d * 2)) {
              if (local_8f != 0) {
                if (local_91 == '\0') {
                  local_80 = (local_6d - 1) - (ushort)local_8f;
                  local_91 = '\x01';
                }
                else if (local_90 == '\0') {
                  local_6c = (local_6d - 1) - (ushort)local_8f;
                  local_90 = '\x01';
                }
                else if (local_8e == '\0') {
                  local_88 = (local_6d - 1) - (ushort)local_8f;
                  local_8e = '\x01';
                }
                else {
                  if (local_8d != '\0') {
                    local_74 = (local_6d - 1) - (ushort)local_8f;
                    break;
                  }
                  local_78 = (local_6d - 1) - (ushort)local_8f;
                  local_8d = '\x01';
                }
              }
              local_8f = local_6d;
            }
          }
        }
        local_158 = local_84;
        operator_delete(local_84);
        if (local_6e == '\0') {
          if ((int)local_80 + (int)local_6c + (int)local_88 < 2) {
            local_7c = 2;
          }
          else if ((int)local_6c + (int)local_88 + (int)local_78 < 2) {
            local_7c = 2;
          }
          else if ((int)local_80 + (int)local_6c < 3) {
            local_7c = 1;
          }
          else if ((int)local_6c + (int)local_88 < 3) {
            local_7c = 1;
          }
          else if ((int)local_88 + (int)local_78 < 3) {
            local_7c = 1;
          }
          else {
            local_7c = 0;
          }
        }
        else if ((int)local_80 + (int)local_6c + (int)local_88 < 2) {
          local_7c = 2;
        }
        else if ((int)local_6c + (int)local_88 + (int)local_78 < 2) {
          local_7c = 2;
        }
        else if ((int)local_88 + (int)local_78 + (int)local_74 < 2) {
          local_7c = 2;
        }
        else if ((int)local_80 + (int)local_6c < 3) {
          local_7c = 1;
        }
        else if ((int)local_6c + (int)local_88 < 3) {
          local_7c = 1;
        }
        else if ((int)local_88 + (int)local_78 < 3) {
          local_7c = 1;
        }
        else if ((int)local_78 + (int)local_74 < 3) {
          local_7c = 1;
        }
        else {
          local_7c = 0;
        }
        if (local_7c == 2) {
          local_15a = 0x2f;
          local_8 = 0xffffffff;
          FUN_004a20f0();
          ExceptionList = local_10;
          return local_15a;
        }
        if (local_7c == 1) {
          local_15c = 0x30;
          local_8 = 0xffffffff;
          FUN_004a20f0();
          ExceptionList = local_10;
          return local_15c;
        }
        local_15e = 0x31;
        local_8 = 0xffffffff;
        FUN_004a20f0();
        ExceptionList = local_10;
        return local_15e;
      }
      uVar6 = DAT_0079140c;
      FUN_004a2160(&local_15f);
      cVar2 = FUN_004a1e10(uVar6);
      if (cVar2 != '\0') {
        sVar3 = FUN_00484bf0();
        if (sVar3 == 4) {
          local_162 = 0x32;
          local_8 = 0xffffffff;
          FUN_004a20f0();
          ExceptionList = local_10;
          return local_162;
        }
        sVar3 = FUN_00484bf0();
        if (sVar3 == 3) {
          local_164 = 0x33;
          local_8 = 0xffffffff;
          FUN_004a20f0();
          ExceptionList = local_10;
          return local_164;
        }
        pbVar5 = DAT_007913c8;
        FUN_004a21b0(&local_165);
        cVar2 = FUN_004a1fb0(pbVar5);
        if (cVar2 != '\0') {
          local_168 = 0x34;
          local_8 = 0xffffffff;
          FUN_004a20f0();
          ExceptionList = local_10;
          return local_168;
        }
        local_16a = 0x35;
        local_8 = 0xffffffff;
        FUN_004a20f0();
        ExceptionList = local_10;
        return local_16a;
      }
      uVar6 = DAT_00791418;
      FUN_004a2160(&local_16b);
      cVar2 = FUN_004a1e10(uVar6);
      if (cVar2 != '\0') {
        local_16e = 0x36;
        local_8 = 0xffffffff;
        FUN_004a20f0();
        ExceptionList = local_10;
        return local_16e;
      }
      uVar6 = DAT_00791380;
      FUN_004a2160(&local_16f);
      cVar2 = FUN_004a1e10(uVar6);
      if (cVar2 != '\0') {
        sVar3 = FUN_00484bf0();
        if (sVar3 == 3) {
          local_172 = 0x37;
          local_8 = 0xffffffff;
          FUN_004a20f0();
          ExceptionList = local_10;
          return local_172;
        }
        local_174 = 0x38;
        local_8 = 0xffffffff;
        FUN_004a20f0();
        ExceptionList = local_10;
        return local_174;
      }
      uVar6 = DAT_007913b0;
      FUN_004a2160(&local_175);
      cVar2 = FUN_004a1e10(uVar6);
      if (cVar2 != '\0') {
        sVar3 = FUN_00484bf0();
        if (sVar3 == 4) {
          local_178 = 0x39;
          local_8 = 0xffffffff;
          FUN_004a20f0();
          ExceptionList = local_10;
          return local_178;
        }
        sVar3 = FUN_00484bf0();
        if (sVar3 == 3) {
          local_17a = 0x3a;
          local_8 = 0xffffffff;
          FUN_004a20f0();
          ExceptionList = local_10;
          return local_17a;
        }
        local_180 = operator_new((*DAT_007913c8 + 1) * 2);
        for (local_9d = 0; local_9d <= *DAT_007913c8; local_9d = local_9d + 1) {
          *(undefined2 *)((int)local_180 + (uint)local_9d * 2) = 0;
        }
        local_9e = '\0';
        local_b0 = local_180;
        for (local_b8 = 0; local_b8 < *(short *)(param_1 + 4); local_b8 = local_b8 + 1) {
          puVar7 = &local_182;
          FUN_00464480(&local_181);
          pbVar5 = (byte *)FUN_00463f80(puVar7);
          psVar1 = (short *)((int)local_b0 + (uint)*pbVar5 * 2);
          *psVar1 = *psVar1 + 1;
          uVar6 = DAT_007907a4;
          FUN_00464480(&local_183);
          cVar2 = FUN_00464050(uVar6);
          if (cVar2 != '\0') {
            puVar7 = &local_185;
            FUN_00464480(&local_184);
            pbVar5 = (byte *)FUN_00463fd0(puVar7);
            psVar1 = (short *)((int)local_b0 + (uint)*pbVar5 * 2);
            *psVar1 = *psVar1 + 1;
            local_9e = '\x01';
          }
        }
        local_ac = 0;
        local_9c = 0;
        local_b4 = 0;
        local_a4 = 0;
        if (local_9e == '\0') {
          local_bd = 0;
          local_bf = '\0';
          local_be = '\0';
          for (local_9d = *DAT_007913f0; local_9d <= *DAT_007913e0; local_9d = local_9d + 1) {
            if (0 < *(short *)((int)local_b0 + (uint)local_9d * 2)) {
              if (local_bd != 0) {
                if (local_bf == '\0') {
                  local_ac = (local_9d - 1) - (ushort)local_bd;
                  local_bf = '\x01';
                }
                else {
                  if (local_be != '\0') {
                    local_b4 = (local_9d - 1) - (ushort)local_bd;
                    break;
                  }
                  local_9c = (local_9d - 1) - (ushort)local_bd;
                  local_be = '\x01';
                }
              }
              local_bd = local_9d;
            }
          }
        }
        else {
          local_ba = 0;
          local_bc = '\0';
          local_bb = '\0';
          local_b9 = '\0';
          for (local_9d = *DAT_007913b4; local_9d <= *DAT_007913c8; local_9d = local_9d + 1) {
            if (0 < *(short *)((int)local_b0 + (uint)local_9d * 2)) {
              if (local_ba != 0) {
                if (local_bc == '\0') {
                  local_ac = (local_9d - 1) - (ushort)local_ba;
                  local_bc = '\x01';
                }
                else if (local_bb == '\0') {
                  local_9c = (local_9d - 1) - (ushort)local_ba;
                  local_bb = '\x01';
                }
                else {
                  if (local_b9 != '\0') {
                    local_a4 = (local_9d - 1) - (ushort)local_ba;
                    break;
                  }
                  local_b4 = (local_9d - 1) - (ushort)local_ba;
                  local_b9 = '\x01';
                }
              }
              local_ba = local_9d;
            }
          }
        }
        local_18c = local_b0;
        operator_delete(local_b0);
        if (local_9e == '\0') {
          if ((int)local_ac + (int)local_9c + (int)local_b4 < 2) {
            local_a8 = 2;
          }
          else if ((int)local_ac + (int)local_9c < 3) {
            local_a8 = 1;
          }
          else if ((int)local_9c + (int)local_b4 < 3) {
            local_a8 = 1;
          }
          else {
            local_a8 = 0;
          }
        }
        else if ((int)local_ac + (int)local_9c + (int)local_b4 < 2) {
          local_a8 = 2;
        }
        else if ((int)local_9c + (int)local_b4 + (int)local_a4 < 2) {
          local_a8 = 2;
        }
        else if ((int)local_ac + (int)local_9c < 3) {
          local_a8 = 1;
        }
        else if ((int)local_9c + (int)local_b4 < 3) {
          local_a8 = 1;
        }
        else if ((int)local_b4 + (int)local_a4 < 3) {
          local_a8 = 1;
        }
        else {
          local_a8 = 0;
        }
        if (local_a8 == 2) {
          local_18e = 0x3b;
          local_8 = 0xffffffff;
          FUN_004a20f0();
          ExceptionList = local_10;
          return local_18e;
        }
        if (local_a8 == 1) {
          local_190 = 0x3c;
          local_8 = 0xffffffff;
          FUN_004a20f0();
          ExceptionList = local_10;
          return local_190;
        }
        local_192 = 0x3d;
        local_8 = 0xffffffff;
        FUN_004a20f0();
        ExceptionList = local_10;
        return local_192;
      }
      uVar6 = DAT_00791390;
      FUN_004a2160(&local_193);
      cVar2 = FUN_004a1e10(uVar6);
      if (cVar2 != '\0') {
        local_198 = operator_new((*DAT_007913c8 + 1) * 2);
        for (local_c5 = 0; local_c5 <= *DAT_007913c8; local_c5 = local_c5 + 1) {
          *(undefined2 *)((int)local_198 + (uint)local_c5 * 2) = 0;
        }
        local_c6 = '\0';
        local_dc = local_198;
        for (local_e4 = 0; local_e4 < *(short *)(param_1 + 4); local_e4 = local_e4 + 1) {
          puVar7 = &local_19a;
          FUN_00464480(&local_199);
          pbVar5 = (byte *)FUN_00463f80(puVar7);
          psVar1 = (short *)((int)local_dc + (uint)*pbVar5 * 2);
          *psVar1 = *psVar1 + 1;
          uVar6 = DAT_007907a4;
          FUN_00464480(&local_19b);
          cVar2 = FUN_00464050(uVar6);
          if (cVar2 != '\0') {
            puVar7 = &local_19d;
            FUN_00464480(&local_19c);
            pbVar5 = (byte *)FUN_00463fd0(puVar7);
            psVar1 = (short *)((int)local_dc + (uint)*pbVar5 * 2);
            *psVar1 = *psVar1 + 1;
            local_c6 = '\x01';
          }
        }
        local_d8 = 0;
        local_c4 = 0;
        local_e0 = 0;
        local_d0 = 0;
        local_cc = 0;
        if (local_c6 == '\0') {
          local_eb = 0;
          local_ed = '\0';
          local_ec = '\0';
          local_ea = '\0';
          for (local_c5 = *DAT_007913f0; local_c5 <= *DAT_007913e0; local_c5 = local_c5 + 1) {
            if (0 < *(short *)((int)local_dc + (uint)local_c5 * 2)) {
              if (local_eb != 0) {
                if (local_ed == '\0') {
                  local_d8 = (local_c5 - 1) - (ushort)local_eb;
                  local_ed = '\x01';
                }
                else if (local_ec == '\0') {
                  local_c4 = (local_c5 - 1) - (ushort)local_eb;
                  local_ec = '\x01';
                }
                else {
                  if (local_ea != '\0') {
                    local_d0 = (local_c5 - 1) - (ushort)local_eb;
                    break;
                  }
                  local_e0 = (local_c5 - 1) - (ushort)local_eb;
                  local_ea = '\x01';
                }
              }
              local_eb = local_c5;
            }
          }
        }
        else {
          local_e7 = 0;
          local_e9 = '\0';
          local_e8 = '\0';
          local_e6 = '\0';
          local_e5 = '\0';
          for (local_c5 = *DAT_007913b4; local_c5 <= *DAT_007913c8; local_c5 = local_c5 + 1) {
            if (0 < *(short *)((int)local_dc + (uint)local_c5 * 2)) {
              if (local_e7 != 0) {
                if (local_e9 == '\0') {
                  local_d8 = (local_c5 - 1) - (ushort)local_e7;
                  local_e9 = '\x01';
                }
                else if (local_e8 == '\0') {
                  local_c4 = (local_c5 - 1) - (ushort)local_e7;
                  local_e8 = '\x01';
                }
                else if (local_e6 == '\0') {
                  local_e0 = (local_c5 - 1) - (ushort)local_e7;
                  local_e6 = '\x01';
                }
                else {
                  if (local_e5 != '\0') {
                    local_cc = (local_c5 - 1) - (ushort)local_e7;
                    break;
                  }
                  local_d0 = (local_c5 - 1) - (ushort)local_e7;
                  local_e5 = '\x01';
                }
              }
              local_e7 = local_c5;
            }
          }
        }
        operator_delete(local_dc);
        if (local_c6 == '\0') {
          if ((int)local_d8 + (int)local_c4 + (int)local_e0 < 2) {
            local_d4 = 2;
          }
          else if ((int)local_c4 + (int)local_e0 + (int)local_d0 < 2) {
            local_d4 = 2;
          }
          else if ((int)local_d8 + (int)local_c4 < 3) {
            local_d4 = 1;
          }
          else if ((int)local_c4 + (int)local_e0 < 3) {
            local_d4 = 1;
          }
          else if ((int)local_e0 + (int)local_d0 < 3) {
            local_d4 = 1;
          }
          else {
            local_d4 = 0;
          }
        }
        else if ((int)local_d8 + (int)local_c4 + (int)local_e0 < 2) {
          local_d4 = 2;
        }
        else if ((int)local_c4 + (int)local_e0 + (int)local_d0 < 2) {
          local_d4 = 2;
        }
        else if ((int)local_e0 + (int)local_d0 + (int)local_cc < 2) {
          local_d4 = 2;
        }
        else if ((int)local_d8 + (int)local_c4 < 3) {
          local_d4 = 1;
        }
        else if ((int)local_c4 + (int)local_e0 < 3) {
          local_d4 = 1;
        }
        else if ((int)local_e0 + (int)local_d0 < 3) {
          local_d4 = 1;
        }
        else if ((int)local_d0 + (int)local_cc < 3) {
          local_d4 = 1;
        }
        else {
          local_d4 = 0;
        }
        sVar3 = FUN_00484bf0();
        if (sVar3 == 4) {
          if (local_d4 == 2) {
            local_8 = 0xffffffff;
            FUN_004a20f0();
            ExceptionList = local_10;
            return 0x3e;
          }
          if (local_d4 == 1) {
            local_8 = 0xffffffff;
            FUN_004a20f0();
            ExceptionList = local_10;
            return 0x3f;
          }
          local_8 = 0xffffffff;
          FUN_004a20f0();
          ExceptionList = local_10;
          return 0x40;
        }
        sVar3 = FUN_00484bf0();
        if (sVar3 != 3) {
          if (local_d4 == 2) {
            local_8 = 0xffffffff;
            FUN_004a20f0();
            ExceptionList = local_10;
            return 0x44;
          }
          if (local_d4 == 1) {
            local_8 = 0xffffffff;
            FUN_004a20f0();
            ExceptionList = local_10;
            return 0x45;
          }
          local_8 = 0xffffffff;
          FUN_004a20f0();
          ExceptionList = local_10;
          return 0x46;
        }
        if (local_d4 == 2) {
          local_8 = 0xffffffff;
          FUN_004a20f0();
          ExceptionList = local_10;
          return 0x41;
        }
        if (local_d4 == 1) {
          local_8 = 0xffffffff;
          FUN_004a20f0();
          ExceptionList = local_10;
          return 0x42;
        }
        local_8 = 0xffffffff;
        FUN_004a20f0();
        ExceptionList = local_10;
        return 0x43;
      }
      FUN_005e9f20(&DAT_006b2b64,"..\\Casino\\PokerHand.cpp",0xeaf);
      local_8 = 0xffffffff;
      FUN_004a20f0();
    }
    else {
      FUN_005e9f20(&DAT_006b2b64,"..\\Casino\\PokerHand.cpp",0xeb2,uVar4);
    }
    local_f0 = 0;
  }
  ExceptionList = local_10;
  return local_f0;
}

