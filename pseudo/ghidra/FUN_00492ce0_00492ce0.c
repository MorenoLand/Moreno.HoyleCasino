// FUN_00492ce0  00492ce0

void __thiscall
FUN_00492ce0(int param_1,undefined4 param_2,short param_3,int *param_4,int *param_5,int *param_6,
            int *param_7,int *param_8,int *param_9,int *param_10,int *param_11,int *param_12,
            int *param_13,int *param_14,int *param_15,int *param_16,int *param_17,int *param_18)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  byte *pbVar6;
  int iVar7;
  void *pvVar8;
  undefined1 *puVar9;
  void *local_168;
  void *local_15c;
  undefined1 local_fc;
  undefined1 local_fb;
  undefined1 local_fa;
  undefined1 local_f9;
  undefined1 local_f8;
  undefined1 local_f7;
  undefined1 local_f6;
  undefined1 local_f5;
  void *local_f4;
  void *local_f0;
  void *local_ec;
  void *local_e8;
  void *local_e4;
  void *local_e0;
  void *local_dc;
  void *local_d8;
  undefined1 local_d1;
  undefined1 local_d0;
  undefined1 local_cf;
  undefined1 local_ce;
  undefined1 local_cd;
  void *local_cc;
  undefined1 local_c5;
  undefined1 local_c4;
  undefined1 local_c3;
  undefined1 local_c2;
  undefined1 local_c1;
  void *local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  short local_a8;
  char local_9a;
  byte local_99;
  short local_98;
  short local_94;
  short local_90;
  short local_8c;
  byte local_86;
  char local_85;
  short local_84;
  byte local_7f;
  byte local_7e;
  byte local_7d;
  short local_7c;
  byte local_78;
  byte local_77;
  byte local_76;
  byte local_75;
  short local_74;
  short local_70;
  short local_6c;
  short local_68;
  short local_64;
  byte local_5e;
  char local_5d;
  short local_5c;
  short local_58;
  byte local_53;
  byte local_52;
  byte local_51;
  short local_50;
  byte local_4a;
  byte local_49;
  void *local_48;
  void *local_44;
  short local_40 [4];
  short local_38;
  void *local_34;
  short local_30 [4];
  short local_28 [4];
  uint local_20;
  byte local_19;
  short local_18;
  void *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_006a08ca;
  local_10 = ExceptionList;
  uVar4 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  local_20 = uVar4;
  if (*(short *)(param_1 + 4) != 4) {
    FUN_005e9f20("shSize == 4","..\\Casino\\PokerHand.cpp",0x100e,uVar4);
  }
  if (((param_3 != 3) && (param_3 != 4)) && (param_3 != 5)) {
    FUN_005e9f20("(phWidow.shSize == 3) || (phWidow.shSize == 4) || (phWidow.shSize == 5)",
                 "..\\Casino\\PokerHand.cpp",0x100f,uVar4);
  }
  uVar5 = FUN_00464130(DAT_007907b4,DAT_00790784);
  local_8 = CONCAT31(local_8._1_3_,1);
  cVar3 = FUN_00484ba0(uVar5);
  if (cVar3 != '\0') {
    FUN_005e9f20("!ContainsCard(PokerCard(BugRank,BugSuit))","..\\Casino\\PokerHand.cpp",0x1010,
                 uVar4);
  }
  local_8 = 0;
  FUN_00464210();
  uVar5 = FUN_00464130(DAT_0079077c,DAT_00790780);
  local_8 = CONCAT31(local_8._1_3_,2);
  cVar3 = FUN_00484ba0(uVar5);
  if (cVar3 != '\0') {
    FUN_005e9f20("!ContainsCard(PokerCard(WildRank,WildSuit))","..\\Casino\\PokerHand.cpp",0x1011);
  }
  local_8 = 0;
  FUN_00464210();
  uVar5 = FUN_00464130(DAT_007907b4,DAT_00790784);
  local_8 = CONCAT31(local_8._1_3_,3);
  cVar3 = FUN_00484ba0(uVar5);
  if (cVar3 != '\0') {
    FUN_005e9f20("!phWidow.ContainsCard(PokerCard(BugRank,BugSuit))","..\\Casino\\PokerHand.cpp",
                 0x1012);
  }
  local_8 = 0;
  FUN_00464210();
  uVar5 = FUN_00464130(DAT_0079077c,DAT_00790780);
  local_8 = CONCAT31(local_8._1_3_,4);
  cVar3 = FUN_00484ba0(uVar5);
  if (cVar3 != '\0') {
    FUN_005e9f20("!phWidow.ContainsCard(PokerCard(WildRank,WildSuit))","..\\Casino\\PokerHand.cpp",
                 0x1013);
  }
  local_8 = 0;
  FUN_00464210();
  *param_4 = 0;
  *param_5 = 0;
  *param_6 = 0;
  *param_7 = 0;
  *param_8 = 0;
  *param_9 = 0;
  *param_10 = 0;
  *param_11 = 0;
  *param_12 = 0;
  *param_13 = 0;
  *param_14 = 0;
  *param_15 = 0;
  *param_16 = 0;
  *param_17 = 0;
  *param_18 = 0;
  local_c0 = operator_new((*DAT_007913c8 + 1) * 2);
  for (local_19 = 0; local_19 <= *DAT_007913c8; local_19 = local_19 + 1) {
    *(undefined2 *)((int)local_c0 + (uint)local_19 * 2) = 0;
  }
  local_44 = local_c0;
  for (local_18 = 0; local_18 < *(short *)(param_1 + 4); local_18 = local_18 + 1) {
    puVar9 = &local_c2;
    FUN_00464480(&local_c1);
    pbVar6 = (byte *)FUN_00463f80(puVar9);
    psVar1 = (short *)((int)local_44 + (uint)*pbVar6 * 2);
    *psVar1 = *psVar1 + 1;
    uVar5 = DAT_007907a4;
    FUN_00464480(&local_c3);
    cVar3 = FUN_00464050(uVar5);
    if (cVar3 != '\0') {
      puVar9 = &local_c5;
      FUN_00464480(&local_c4);
      pbVar6 = (byte *)FUN_00463fd0(puVar9);
      psVar1 = (short *)((int)local_44 + (uint)*pbVar6 * 2);
      *psVar1 = *psVar1 + 1;
    }
  }
  local_cc = operator_new((*DAT_007913c8 + 1) * 2);
  for (local_19 = 0; local_19 <= *DAT_007913c8; local_19 = local_19 + 1) {
    *(undefined2 *)((int)local_cc + (uint)local_19 * 2) = 0;
  }
  local_48 = local_cc;
  for (local_18 = 0; local_18 < param_3; local_18 = local_18 + 1) {
    puVar9 = &local_ce;
    FUN_00464480(&local_cd);
    pbVar6 = (byte *)FUN_00463f80(puVar9);
    psVar1 = (short *)((int)local_48 + (uint)*pbVar6 * 2);
    *psVar1 = *psVar1 + 1;
    uVar5 = DAT_007907a4;
    FUN_00464480(&local_cf);
    cVar3 = FUN_00464050(uVar5);
    if (cVar3 != '\0') {
      puVar9 = &local_d1;
      FUN_00464480(&local_d0);
      pbVar6 = (byte *)FUN_00463fd0(puVar9);
      psVar1 = (short *)((int)local_48 + (uint)*pbVar6 * 2);
      *psVar1 = *psVar1 + 1;
    }
  }
  local_d8 = operator_new((*DAT_007913c8 + 1) * 2);
  local_14 = (void *)0x0;
  local_34 = local_d8;
  if (param_3 < 5) {
    local_e0 = operator_new(0xc);
    local_8._0_1_ = 5;
    if (local_e0 == (void *)0x0) {
      local_15c = (void *)0x0;
    }
    else {
      local_15c = (void *)FUN_00464ed0(0xd,5 - param_3);
    }
    local_dc = local_15c;
    local_8 = (uint)local_8._1_3_ << 8;
    local_14 = local_15c;
    FUN_00465000();
  }
  do {
    for (local_19 = 0; local_19 <= *DAT_007913c8; local_19 = local_19 + 1) {
      *(undefined2 *)((int)local_34 + (uint)local_19 * 2) = 0;
    }
    local_50 = 1;
    for (local_58 = 0; (int)local_58 < 5 - param_3; local_58 = local_58 + 1) {
      iVar7 = FUN_00465110((int)local_58);
      psVar1 = (short *)((int)local_34 + (iVar7 + (uint)*DAT_007913b4) * 2);
      *psVar1 = *psVar1 + 1;
      iVar7 = FUN_00465110((int)local_58);
      sVar2 = *(short *)((int)local_44 + (iVar7 + (uint)*DAT_007913b4) * 2);
      iVar7 = FUN_00465110((int)local_58);
      local_50 = local_50 *
                 ((4 - sVar2) - *(short *)((int)local_48 + (iVar7 + (uint)*DAT_007913b4) * 2));
      if (local_50 < 0) {
        local_50 = 0;
      }
    }
    *(undefined2 *)((int)local_34 + (uint)*DAT_007913c8 * 2) =
         *(undefined2 *)((int)local_34 + (uint)*DAT_007913b4 * 2);
    if (local_50 != 0) {
      for (local_53 = *DAT_007913c8; *DAT_007913f0 <= local_53; local_53 = local_53 - 1) {
        local_5c = *(short *)((int)local_48 + (uint)local_53 * 2) +
                   *(short *)((int)local_34 + (uint)local_53 * 2);
        if ((local_5c == 2) && (*(short *)((int)local_44 + (uint)local_53 * 2) == 2)) {
          *param_5 = (int)local_50 + *param_5;
          break;
        }
        if (local_5c == 3) {
          if (*(short *)((int)local_44 + (uint)local_53 * 2) == 1) {
            *param_5 = (int)local_50 + *param_5;
          }
          else {
            *param_6 = (int)local_50 + *param_6;
          }
          break;
        }
      }
      if (local_53 < *DAT_007913f0) {
        *param_4 = (int)local_50 + *param_4;
      }
      local_52 = 0;
      local_49 = 0;
      for (local_53 = *DAT_007913c8; *DAT_007913f0 <= local_53; local_53 = local_53 - 1) {
        local_5d = '\0';
        for (local_5e = *DAT_007913c8; *DAT_007913f0 <= local_5e; local_5e = local_5e - 1) {
          if (local_5e != local_53) {
            local_68 = *(short *)((int)local_48 + (uint)local_53 * 2) +
                       *(short *)((int)local_34 + (uint)local_53 * 2);
            if (3 < local_68) {
              local_68 = 3;
            }
            local_64 = *(short *)((int)local_48 + (uint)local_5e * 2) +
                       *(short *)((int)local_34 + (uint)local_5e * 2);
            if (2 < local_64) {
              local_64 = 2;
            }
            if (2 < (int)local_68 + (int)local_64) {
              if (local_52 == 0) {
                local_52 = local_53;
                local_49 = local_5e;
              }
              if (((2 < (int)*(short *)((int)local_44 + (uint)local_53 * 2) + (int)local_68) &&
                  (1 < (int)*(short *)((int)local_44 + (uint)local_5e * 2) + (int)local_64)) &&
                 (1 < (int)*(short *)((int)local_44 + (uint)local_53 * 2) +
                      (int)*(short *)((int)local_44 + (uint)local_5e * 2))) {
                if ((local_53 == local_52) && (local_5e == local_49)) {
                  *param_8 = (int)local_50 + *param_8;
                }
                else {
                  *param_9 = (int)local_50 + *param_9;
                }
                local_5d = '\x01';
                break;
              }
            }
          }
        }
        if (local_5d != '\0') break;
      }
      if (local_53 < *DAT_007913f0) {
        if (local_52 == 0) {
          *param_7 = (int)local_50 + *param_7;
        }
        else {
          *param_10 = (int)local_50 + *param_10;
        }
      }
      local_51 = 0;
      for (local_4a = *DAT_007913c8; *DAT_007913a4 <= local_4a; local_4a = local_4a - 1) {
        local_70 = 0;
        local_74 = 0;
        local_6c = 0;
        for (local_75 = 0; local_75 < 5; local_75 = local_75 + 1) {
          if ((0 < *(short *)((int)local_48 + ((uint)local_4a - (uint)local_75) * 2)) ||
             (0 < *(short *)((int)local_34 + ((uint)local_4a - (uint)local_75) * 2))) {
            local_74 = local_74 + 1;
          }
          if (0 < *(short *)((int)local_44 + ((uint)local_4a - (uint)local_75) * 2)) {
            local_70 = local_70 + 1;
          }
          if (((0 < *(short *)((int)local_48 + ((uint)local_4a - (uint)local_75) * 2)) ||
              (0 < *(short *)((int)local_34 + ((uint)local_4a - (uint)local_75) * 2))) ||
             (0 < *(short *)((int)local_44 + ((uint)local_4a - (uint)local_75) * 2))) {
            local_6c = local_6c + 1;
          }
        }
        if (2 < local_74) {
          if (local_51 == 0) {
            local_51 = local_4a;
          }
          if ((1 < local_70) && (local_6c == 5)) {
            if (local_51 == local_4a) {
              *param_16 = (int)local_50 + *param_16;
            }
            else {
              *param_17 = (int)local_50 + *param_17;
            }
            break;
          }
        }
      }
      if (local_4a == *DAT_00791414) {
        if (local_51 == 0) {
          *param_15 = (int)local_50 + *param_15;
        }
        else {
          *param_18 = (int)local_50 + *param_18;
        }
      }
    }
  } while ((param_3 < 5) && (cVar3 = FUN_00465000(), cVar3 != '\0'));
  if (param_3 == 3) {
    for (local_76 = *DAT_007913b4; local_76 <= *DAT_007913e0; local_76 = local_76 + 1) {
      for (local_19 = 0; local_19 <= *DAT_007913c8; local_19 = local_19 + 1) {
        *(undefined2 *)((int)local_34 + (uint)local_19 * 2) = 0;
      }
      local_7c = (short)((((4 - *(short *)((int)local_44 + (uint)local_76 * 2)) -
                          (int)*(short *)((int)local_48 + (uint)local_76 * 2)) *
                         ((3 - *(short *)((int)local_44 + (uint)local_76 * 2)) -
                         (int)*(short *)((int)local_48 + (uint)local_76 * 2))) / 2);
      if (0 < local_7c) {
        *(short *)((int)local_34 + (uint)local_76 * 2) =
             *(short *)((int)local_34 + (uint)local_76 * 2) + 2;
        *(undefined2 *)((int)local_34 + (uint)*DAT_007913c8 * 2) =
             *(undefined2 *)((int)local_34 + (uint)*DAT_007913b4 * 2);
        for (local_7f = *DAT_007913c8; *DAT_007913f0 <= local_7f; local_7f = local_7f - 1) {
          local_84 = *(short *)((int)local_48 + (uint)local_7f * 2) +
                     *(short *)((int)local_34 + (uint)local_7f * 2);
          if ((local_84 == 2) && (*(short *)((int)local_44 + (uint)local_7f * 2) == 2)) {
            *param_5 = (int)local_7c + *param_5;
            break;
          }
          if (local_84 == 3) {
            if (*(short *)((int)local_44 + (uint)local_7f * 2) == 1) {
              *param_5 = (int)local_7c + *param_5;
            }
            else {
              *param_6 = (int)local_7c + *param_6;
            }
            break;
          }
        }
        if (local_7f < *DAT_007913f0) {
          *param_4 = (int)local_7c + *param_4;
        }
        local_7e = 0;
        local_77 = 0;
        for (local_7f = *DAT_007913c8; *DAT_007913f0 <= local_7f; local_7f = local_7f - 1) {
          local_85 = '\0';
          for (local_86 = *DAT_007913c8; *DAT_007913f0 <= local_86; local_86 = local_86 - 1) {
            if (local_86 != local_7f) {
              local_90 = *(short *)((int)local_48 + (uint)local_7f * 2) +
                         *(short *)((int)local_34 + (uint)local_7f * 2);
              if (3 < local_90) {
                local_90 = 3;
              }
              local_8c = *(short *)((int)local_48 + (uint)local_86 * 2) +
                         *(short *)((int)local_34 + (uint)local_86 * 2);
              if (2 < local_8c) {
                local_8c = 2;
              }
              if (2 < (int)local_90 + (int)local_8c) {
                if (local_7e == 0) {
                  local_7e = local_7f;
                  local_77 = local_86;
                }
                if (((2 < (int)*(short *)((int)local_44 + (uint)local_7f * 2) + (int)local_90) &&
                    (1 < (int)*(short *)((int)local_44 + (uint)local_86 * 2) + (int)local_8c)) &&
                   (1 < (int)*(short *)((int)local_44 + (uint)local_7f * 2) +
                        (int)*(short *)((int)local_44 + (uint)local_86 * 2))) {
                  if ((local_7f == local_7e) && (local_86 == local_77)) {
                    *param_8 = (int)local_7c + *param_8;
                  }
                  else {
                    *param_9 = (int)local_7c + *param_9;
                  }
                  local_85 = '\x01';
                  break;
                }
              }
            }
          }
          if (local_85 != '\0') break;
        }
        if (local_7f < *DAT_007913f0) {
          if (local_7e == 0) {
            *param_7 = (int)local_7c + *param_7;
          }
          else {
            *param_10 = (int)local_7c + *param_10;
          }
        }
        local_7d = 0;
        for (local_78 = *DAT_007913c8; *DAT_007913a4 <= local_78; local_78 = local_78 - 1) {
          local_94 = 0;
          local_98 = 0;
          for (local_99 = 0; local_99 < 5; local_99 = local_99 + 1) {
            if ((0 < *(short *)((int)local_48 + ((uint)local_78 - (uint)local_99) * 2)) ||
               (0 < *(short *)((int)local_34 + ((uint)local_78 - (uint)local_99) * 2))) {
              local_98 = local_98 + 1;
            }
            if (0 < *(short *)((int)local_44 + ((uint)local_78 - (uint)local_99) * 2)) {
              local_94 = local_94 + 1;
            }
          }
          if (2 < local_98) {
            if (local_7d == 0) {
              local_7d = local_78;
            }
            if (1 < local_94) {
              if (local_7d == local_78) {
                *param_16 = (int)local_7c + *param_16;
              }
              else {
                *param_17 = (int)local_7c + *param_17;
              }
              break;
            }
          }
        }
        if (local_78 == *DAT_00791414) {
          if (local_7d == 0) {
            *param_15 = (int)local_7c + *param_15;
          }
          else {
            *param_18 = (int)local_7c + *param_18;
          }
        }
      }
    }
  }
  if (param_3 < 5) {
    local_e8 = local_14;
    local_e4 = local_14;
    if (local_14 != (void *)0x0) {
      FUN_00464fd0();
      operator_delete(local_e4);
    }
  }
  local_ec = local_44;
  operator_delete(local_44);
  local_f0 = local_48;
  operator_delete(local_48);
  local_f4 = local_34;
  operator_delete(local_34);
  for (local_38 = 0; local_38 < 4; local_38 = local_38 + 1) {
    local_40[local_38] = 0;
  }
  for (local_18 = 0; local_18 < *(short *)(param_1 + 4); local_18 = local_18 + 1) {
    uVar5 = DAT_0079076c;
    FUN_00464400(&local_f5);
    cVar3 = FUN_004640b0(uVar5);
    if (cVar3 == '\0') {
      uVar5 = DAT_00790754;
      FUN_00464400(&local_f6);
      cVar3 = FUN_004640b0(uVar5);
      if (cVar3 == '\0') {
        uVar5 = DAT_00790764;
        FUN_00464400(&local_f7);
        cVar3 = FUN_004640b0(uVar5);
        if (cVar3 == '\0') {
          uVar5 = DAT_00790770;
          FUN_00464400(&local_f8);
          cVar3 = FUN_004640b0(uVar5);
          if (cVar3 != '\0') {
            local_40[3] = local_40[3] + 1;
          }
        }
        else {
          local_40[2] = local_40[2] + 1;
        }
      }
      else {
        local_40[1] = local_40[1] + 1;
      }
    }
    else {
      local_40[0] = local_40[0] + 1;
    }
  }
  for (local_38 = 0; local_38 < 4; local_38 = local_38 + 1) {
    local_30[local_38] = 0;
  }
  for (local_18 = 0; local_18 < param_3; local_18 = local_18 + 1) {
    uVar5 = DAT_0079076c;
    FUN_00464400(&local_f9);
    cVar3 = FUN_004640b0(uVar5);
    if (cVar3 == '\0') {
      uVar5 = DAT_00790754;
      FUN_00464400(&local_fa);
      cVar3 = FUN_004640b0(uVar5);
      if (cVar3 == '\0') {
        uVar5 = DAT_00790764;
        FUN_00464400(&local_fb);
        cVar3 = FUN_004640b0(uVar5);
        if (cVar3 == '\0') {
          uVar5 = DAT_00790770;
          FUN_00464400(&local_fc);
          cVar3 = FUN_004640b0(uVar5);
          if (cVar3 != '\0') {
            local_30[3] = local_30[3] + 1;
          }
        }
        else {
          local_30[2] = local_30[2] + 1;
        }
      }
      else {
        local_30[1] = local_30[1] + 1;
      }
    }
    else {
      local_30[0] = local_30[0] + 1;
    }
  }
  if (param_3 < 5) {
    pvVar8 = operator_new(0xc);
    local_8._0_1_ = 6;
    if (pvVar8 == (void *)0x0) {
      local_168 = (void *)0x0;
    }
    else {
      local_168 = (void *)FUN_00464ed0(0x34,5 - param_3);
    }
    local_8 = (uint)local_8._1_3_ << 8;
    local_14 = local_168;
    FUN_00465000();
  }
  do {
    for (local_38 = 0; local_38 < 4; local_38 = local_38 + 1) {
      local_28[local_38] = 0;
    }
    local_9a = '\0';
    FUN_00484320(&param_2);
    local_8._0_1_ = 7;
    for (local_a8 = 0; (int)local_a8 < 5 - param_3; local_a8 = local_a8 + 1) {
      local_ac = 0;
      iVar7 = FUN_00465110((int)local_a8);
      if (iVar7 / 0xd == 0) {
        local_ac = DAT_0079076c;
        local_28[0] = local_28[0] + 1;
      }
      else {
        iVar7 = FUN_00465110((int)local_a8);
        if (iVar7 / 0xd == 1) {
          local_ac = DAT_00790754;
          local_28[1] = local_28[1] + 1;
        }
        else {
          iVar7 = FUN_00465110((int)local_a8);
          if (iVar7 / 0xd == 2) {
            local_ac = DAT_00790764;
            local_28[2] = local_28[2] + 1;
          }
          else {
            iVar7 = FUN_00465110((int)local_a8);
            if (iVar7 / 0xd == 3) {
              local_ac = DAT_00790770;
              local_28[3] = local_28[3] + 1;
            }
          }
        }
      }
      local_b0 = 0;
      iVar7 = FUN_00465110((int)local_a8);
      if (iVar7 % 0xd == 0) {
        local_b0 = DAT_007907a4;
      }
      else {
        iVar7 = FUN_00465110((int)local_a8);
        if (iVar7 % 0xd == 1) {
          local_b0 = DAT_00790758;
        }
        else {
          iVar7 = FUN_00465110((int)local_a8);
          if (iVar7 % 0xd == 2) {
            local_b0 = DAT_00790768;
          }
          else {
            iVar7 = FUN_00465110((int)local_a8);
            if (iVar7 % 0xd == 3) {
              local_b0 = DAT_00790790;
            }
            else {
              iVar7 = FUN_00465110((int)local_a8);
              if (iVar7 % 0xd == 4) {
                local_b0 = DAT_00790750;
              }
              else {
                iVar7 = FUN_00465110((int)local_a8);
                if (iVar7 % 0xd == 5) {
                  local_b0 = DAT_0079079c;
                }
                else {
                  iVar7 = FUN_00465110((int)local_a8);
                  if (iVar7 % 0xd == 6) {
                    local_b0 = DAT_00790760;
                  }
                  else {
                    iVar7 = FUN_00465110((int)local_a8);
                    if (iVar7 % 0xd == 7) {
                      local_b0 = DAT_00790798;
                    }
                    else {
                      iVar7 = FUN_00465110((int)local_a8);
                      if (iVar7 % 0xd == 8) {
                        local_b0 = DAT_00790794;
                      }
                      else {
                        iVar7 = FUN_00465110((int)local_a8);
                        if (iVar7 % 0xd == 9) {
                          local_b0 = DAT_00790788;
                        }
                        else {
                          iVar7 = FUN_00465110((int)local_a8);
                          if (iVar7 % 0xd == 10) {
                            local_b0 = DAT_00790774;
                          }
                          else {
                            iVar7 = FUN_00465110((int)local_a8);
                            if (iVar7 % 0xd == 0xb) {
                              local_b0 = DAT_007907b0;
                            }
                            else {
                              iVar7 = FUN_00465110((int)local_a8);
                              if (iVar7 % 0xd == 0xc) {
                                local_b0 = DAT_007907a8;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      uVar5 = FUN_00464130(local_b0,local_ac);
      local_8._0_1_ = 8;
      cVar3 = FUN_00484ba0(uVar5);
      local_8._0_1_ = 7;
      FUN_00464210();
      if (cVar3 != '\0') {
        local_9a = '\x01';
        break;
      }
      uVar5 = FUN_00464130(local_b0,local_ac);
      local_8._0_1_ = 9;
      cVar3 = FUN_00484ba0(uVar5);
      local_8._0_1_ = 7;
      FUN_00464210();
      if (cVar3 != '\0') {
        local_9a = '\x01';
        break;
      }
      uVar5 = FUN_00464130(local_b0,local_ac);
      local_8._0_1_ = 10;
      FUN_00484830(uVar5);
      local_8._0_1_ = 7;
      FUN_00464210();
    }
    if (local_9a == '\0') {
      for (local_38 = 0; local_38 < 4; local_38 = local_38 + 1) {
        if (2 < (int)local_30[local_38] + (int)local_28[local_38]) {
          if (local_40[local_38] < 2) {
            *param_14 = *param_14 + 1;
          }
          else {
            local_b8 = 0;
            if (local_38 == 0) {
              local_b8 = DAT_0079076c;
            }
            else if (local_38 == 1) {
              local_b8 = DAT_00790754;
            }
            else if (local_38 == 2) {
              local_b8 = DAT_00790764;
            }
            else if (local_38 == 3) {
              local_b8 = DAT_00790770;
            }
            uVar5 = FUN_00464130(DAT_007907a4,local_b8);
            local_8._0_1_ = 0xb;
            cVar3 = FUN_00484ba0(uVar5);
            local_8._0_1_ = 7;
            FUN_00464210();
            if (cVar3 == '\0') {
              local_b4 = DAT_007907a4;
            }
            else {
              uVar5 = FUN_00464130(DAT_007907a8,local_b8);
              local_8._0_1_ = 0xc;
              cVar3 = FUN_00484ba0(uVar5);
              local_8._0_1_ = 7;
              FUN_00464210();
              if (cVar3 == '\0') {
                local_b4 = DAT_007907a8;
              }
              else {
                uVar5 = FUN_00464130(DAT_007907b0,local_b8);
                local_8._0_1_ = 0xd;
                cVar3 = FUN_00484ba0(uVar5);
                local_8._0_1_ = 7;
                FUN_00464210();
                if (cVar3 == '\0') {
                  local_b4 = DAT_007907b0;
                }
                else {
                  uVar5 = FUN_00464130(DAT_00790774,local_b8);
                  local_8._0_1_ = 0xe;
                  cVar3 = FUN_00484ba0(uVar5);
                  local_8._0_1_ = 7;
                  FUN_00464210();
                  if (cVar3 == '\0') {
                    local_b4 = DAT_00790774;
                  }
                  else {
                    uVar5 = FUN_00464130(DAT_00790788,local_b8);
                    local_8._0_1_ = 0xf;
                    cVar3 = FUN_00484ba0(uVar5);
                    local_8._0_1_ = 7;
                    FUN_00464210();
                    if (cVar3 == '\0') {
                      local_b4 = DAT_00790788;
                    }
                    else {
                      local_b4 = DAT_00790794;
                    }
                  }
                }
              }
            }
            uVar5 = FUN_00464130(local_b4,local_b8);
            local_8._0_1_ = 0x10;
            cVar3 = FUN_00484ba0(uVar5);
            local_8._0_1_ = 7;
            FUN_00464210();
            if (cVar3 == '\0') {
              *param_13 = *param_13 + 1;
            }
            else {
              *param_12 = *param_12 + 1;
            }
          }
          break;
        }
      }
      if (local_38 == 4) {
        *param_11 = *param_11 + 1;
      }
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_00484470();
    }
    else {
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_00484470();
    }
    if ((4 < param_3) || (cVar3 = FUN_00465000(), cVar3 == '\0')) {
      pvVar8 = local_14;
      if ((param_3 < 5) && (local_14 != (void *)0x0)) {
        FUN_00464fd0();
        operator_delete(pvVar8);
      }
      local_8 = 0xffffffff;
      FUN_00484470();
      ExceptionList = local_10;
      __security_check_cookie(local_20 ^ (uint)&stack0xfffffffc);
      return;
    }
  } while( true );
}

