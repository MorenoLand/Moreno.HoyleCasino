// FUN_00494d50  00494d50

void __thiscall
FUN_00494d50(int param_1,undefined4 param_2,short param_3,int *param_4,int *param_5,int *param_6,
            int *param_7,undefined4 param_8,undefined4 param_9,undefined4 param_10,
            undefined4 param_11,undefined4 param_12,undefined4 param_13,undefined4 param_14,
            undefined4 param_15,undefined4 param_16,undefined4 param_17,undefined4 param_18,
            undefined4 param_19,char *param_20,undefined4 param_21,undefined4 param_22)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  byte *pbVar4;
  void *pvVar5;
  int iVar6;
  undefined1 auStack_138 [8];
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  char *pcStack_100;
  char *pcStack_fc;
  void *local_e4;
  undefined1 local_a4;
  undefined1 local_a3 [2];
  undefined1 local_a1;
  void *local_a0;
  undefined1 local_98;
  undefined1 local_97 [2];
  undefined1 local_95;
  void *local_94;
  undefined1 *local_90;
  short local_8c;
  short local_88;
  byte abStack_84 [8];
  short local_7c;
  byte local_75;
  short local_74;
  short local_70;
  short local_6c;
  short local_68;
  short local_64;
  byte local_5d;
  short local_5c;
  short local_58;
  byte abStack_54 [8];
  uint local_4c;
  short local_48;
  byte local_41;
  short local_40;
  short local_3c;
  short local_38;
  short local_34;
  short local_30;
  short local_2c;
  void *local_28;
  void *local_24;
  void *local_20;
  byte local_19;
  short local_18;
  void *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_006a0908;
  local_10 = ExceptionList;
  local_4c = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  pcStack_fc = (char *)param_21;
  pcStack_100 = param_20;
  uStack_104 = param_19;
  uStack_108 = param_18;
  uStack_10c = param_17;
  uStack_110 = param_16;
  uStack_114 = param_15;
  uStack_118 = param_14;
  uStack_11c = param_13;
  uStack_120 = param_12;
  uStack_124 = param_11;
  uStack_128 = param_10;
  uStack_12c = param_9;
  uStack_130 = param_8;
  local_90 = auStack_138;
  FUN_00484320(&param_2);
  FUN_00492ce0();
  *param_4 = 0;
  *param_5 = 0;
  *param_6 = 0;
  *param_7 = 0;
  pcStack_fc = (char *)0x494e30;
  local_94 = operator_new((*DAT_007913c8 + 1) * 2);
  for (local_19 = 0; local_19 <= *DAT_007913c8; local_19 = local_19 + 1) {
    *(undefined2 *)((int)local_94 + (uint)local_19 * 2) = 0;
  }
  local_24 = local_94;
  for (local_18 = 0; local_18 < *(short *)(param_1 + 4); local_18 = local_18 + 1) {
    pcStack_fc = &local_95;
    pcStack_100 = (char *)0x494eb9;
    FUN_00464480();
    pcStack_fc = (char *)0x494ec0;
    pbVar4 = (byte *)FUN_00463f80();
    psVar1 = (short *)((int)local_24 + (uint)*pbVar4 * 2);
    *psVar1 = *psVar1 + 1;
    pcStack_fc = local_97;
    pcStack_100 = (char *)0x494f03;
    FUN_00464480();
    pcStack_fc = (char *)0x494f0a;
    cVar3 = FUN_00464050();
    if (cVar3 != '\0') {
      pcStack_fc = &local_98;
      pcStack_100 = (char *)0x494f30;
      FUN_00464480();
      pcStack_fc = (char *)0x494f37;
      pbVar4 = (byte *)FUN_00463fd0();
      psVar1 = (short *)((int)local_24 + (uint)*pbVar4 * 2);
      *psVar1 = *psVar1 + 1;
    }
  }
  pcStack_fc = (char *)0x494f83;
  local_a0 = operator_new((*DAT_007913c8 + 1) * 2);
  for (local_19 = 0; local_19 <= *DAT_007913c8; local_19 = local_19 + 1) {
    *(undefined2 *)((int)local_a0 + (uint)local_19 * 2) = 0;
  }
  local_28 = local_a0;
  for (local_18 = 0; local_18 < param_3; local_18 = local_18 + 1) {
    pcStack_fc = &local_a1;
    pcStack_100 = (char *)0x495001;
    FUN_00464480();
    pcStack_fc = (char *)0x495008;
    pbVar4 = (byte *)FUN_00463f80();
    psVar1 = (short *)((int)local_28 + (uint)*pbVar4 * 2);
    *psVar1 = *psVar1 + 1;
    pcStack_fc = local_a3;
    pcStack_100 = (char *)0x495046;
    FUN_00464480();
    pcStack_fc = (char *)0x49504d;
    cVar3 = FUN_00464050();
    if (cVar3 != '\0') {
      pcStack_fc = &local_a4;
      pcStack_100 = (char *)0x49506e;
      FUN_00464480();
      pcStack_fc = (char *)0x495075;
      pbVar4 = (byte *)FUN_00463fd0();
      psVar1 = (short *)((int)local_28 + (uint)*pbVar4 * 2);
      *psVar1 = *psVar1 + 1;
    }
  }
  pcStack_fc = (char *)0x4950c1;
  local_20 = operator_new((*DAT_007913c8 + 1) * 2);
  local_14 = (void *)0x0;
  if (param_3 < 5) {
    pcStack_fc = (char *)0x4950ea;
    pvVar5 = operator_new(0xc);
    local_8._0_1_ = 1;
    if (pvVar5 == (void *)0x0) {
      local_e4 = (void *)0x0;
    }
    else {
      pcStack_fc = (char *)0xd;
      pcStack_100 = (char *)0x495119;
      local_e4 = (void *)FUN_00464ed0();
    }
    local_8 = (uint)local_8._1_3_ << 8;
    local_14 = local_e4;
    FUN_00465000();
  }
  do {
    for (local_19 = 0; local_19 <= *DAT_007913c8; local_19 = local_19 + 1) {
      *(undefined2 *)((int)local_20 + (uint)local_19 * 2) = 0;
    }
    local_34 = 1;
    for (local_3c = 0; (int)local_3c < 5 - param_3; local_3c = local_3c + 1) {
      pcStack_fc = (char *)0x4951b8;
      iVar6 = FUN_00465110();
      psVar1 = (short *)((int)local_20 + (iVar6 + (uint)*DAT_007913b4) * 2);
      *psVar1 = *psVar1 + 1;
      pcStack_fc = (char *)0x4951f2;
      iVar6 = FUN_00465110();
      sVar2 = *(short *)((int)local_24 + (iVar6 + (uint)*DAT_007913b4) * 2);
      pcStack_fc = (char *)0x495218;
      iVar6 = FUN_00465110();
      local_34 = local_34 *
                 ((4 - sVar2) - *(short *)((int)local_28 + (iVar6 + (uint)*DAT_007913b4) * 2));
      if (local_34 < 0) {
        local_34 = 0;
      }
    }
    *(undefined2 *)((int)local_20 + (uint)*DAT_007913c8 * 2) =
         *(undefined2 *)((int)local_20 + (uint)*DAT_007913b4 * 2);
    if (local_34 != 0) {
      local_30 = 0;
      local_38 = 0;
      local_2c = 0;
      for (local_19 = *DAT_007913b4; local_19 <= *DAT_00791410; local_19 = local_19 + 1) {
        if (0 < *(short *)((int)local_24 + (uint)local_19 * 2)) {
          local_30 = local_30 + 1;
        }
        if ((0 < *(short *)((int)local_28 + (uint)local_19 * 2)) ||
           (0 < *(short *)((int)local_20 + (uint)local_19 * 2))) {
          local_38 = local_38 + 1;
        }
        if (((0 < *(short *)((int)local_24 + (uint)local_19 * 2)) ||
            (0 < *(short *)((int)local_28 + (uint)local_19 * 2))) ||
           (0 < *(short *)((int)local_20 + (uint)local_19 * 2))) {
          local_2c = local_2c + 1;
        }
      }
      if (local_38 < 3) {
        *param_4 = (int)local_34 + *param_4;
      }
      else if ((local_2c < 5) || (local_30 < 2)) {
        *param_7 = (int)local_34 + *param_7;
      }
      else {
        local_40 = 2;
        local_58 = 0;
        local_41 = *DAT_007913b4;
        while (local_58 < 5) {
          if ((*(short *)((int)local_28 + (uint)local_41 * 2) < 1) &&
             (*(short *)((int)local_20 + (uint)local_41 * 2) < 1)) {
            if (0 < local_40) {
              local_40 = local_40 + -1;
              abStack_54[local_58] = local_41;
              local_58 = local_58 + 1;
            }
          }
          else {
            abStack_54[local_58] = local_41;
            local_58 = local_58 + 1;
          }
          if (*DAT_00791410 < local_41) {
            pcStack_fc = "..\\Casino\\PokerHand.cpp";
            pcStack_100 = "ucCurrent <= EightValue.ucValue";
            uStack_104 = 0x495414;
            FUN_005e9f20();
          }
          local_41 = local_41 + 1;
        }
        local_48 = 0;
        for (local_5c = 0; local_5c < 5; local_5c = local_5c + 1) {
          if (0 < *(short *)((int)local_24 + (uint)abStack_54[local_5c] * 2)) {
            local_48 = local_48 + 1;
          }
        }
        if (local_48 < 2) {
          *param_6 = (int)local_34 + *param_6;
        }
        else {
          *param_5 = (int)local_34 + *param_5;
        }
      }
    }
  } while ((param_3 < 5) && (cVar3 = FUN_00465000(), cVar3 != '\0'));
  if (param_3 == 3) {
    for (local_5d = *DAT_007913b4; local_5d <= *DAT_007913e0; local_5d = local_5d + 1) {
      for (local_19 = 0; local_19 <= *DAT_007913c8; local_19 = local_19 + 1) {
        *(undefined2 *)((int)local_20 + (uint)local_19 * 2) = 0;
      }
      local_6c = (short)((((4 - *(short *)((int)local_24 + (uint)local_5d * 2)) -
                          (int)*(short *)((int)local_28 + (uint)local_5d * 2)) *
                         ((3 - *(short *)((int)local_24 + (uint)local_5d * 2)) -
                         (int)*(short *)((int)local_28 + (uint)local_5d * 2))) / 2);
      if (0 < local_6c) {
        *(short *)((int)local_20 + (uint)local_5d * 2) =
             *(short *)((int)local_20 + (uint)local_5d * 2) + 2;
        *(undefined2 *)((int)local_20 + (uint)*DAT_007913c8 * 2) =
             *(undefined2 *)((int)local_20 + (uint)*DAT_007913b4 * 2);
        local_68 = 0;
        local_70 = 0;
        local_64 = 0;
        for (local_19 = *DAT_007913b4; local_19 <= *DAT_00791410; local_19 = local_19 + 1) {
          if (0 < *(short *)((int)local_24 + (uint)local_19 * 2)) {
            local_68 = local_68 + 1;
          }
          if ((0 < *(short *)((int)local_28 + (uint)local_19 * 2)) ||
             (0 < *(short *)((int)local_20 + (uint)local_19 * 2))) {
            local_70 = local_70 + 1;
          }
          if (((0 < *(short *)((int)local_24 + (uint)local_19 * 2)) ||
              (0 < *(short *)((int)local_28 + (uint)local_19 * 2))) ||
             (0 < *(short *)((int)local_20 + (uint)local_19 * 2))) {
            local_64 = local_64 + 1;
          }
        }
        if (local_70 < 3) {
          *param_4 = (int)local_6c + *param_4;
        }
        else if ((local_64 < 5) || (local_68 < 2)) {
          *param_7 = (int)local_6c + *param_7;
        }
        else {
          local_74 = 2;
          local_88 = 0;
          local_75 = *DAT_007913b4;
          while (local_88 < 5) {
            if ((*(short *)((int)local_28 + (uint)local_75 * 2) < 1) &&
               (*(short *)((int)local_20 + (uint)local_75 * 2) < 1)) {
              if (0 < local_74) {
                local_74 = local_74 + -1;
                abStack_84[local_88] = local_75;
                local_88 = local_88 + 1;
              }
            }
            else {
              abStack_84[local_88] = local_75;
              local_88 = local_88 + 1;
            }
            if (*DAT_00791410 < local_75) {
              pcStack_fc = "..\\Casino\\PokerHand.cpp";
              pcStack_100 = "ucCurrent <= EightValue.ucValue";
              uStack_104 = 0x495768;
              FUN_005e9f20();
            }
            local_75 = local_75 + 1;
          }
          local_7c = 0;
          for (local_8c = 0; local_8c < 5; local_8c = local_8c + 1) {
            if (0 < *(short *)((int)local_24 + (uint)abStack_84[local_8c] * 2)) {
              local_7c = local_7c + 1;
            }
          }
          if (local_7c < 2) {
            *param_6 = (int)local_6c + *param_6;
          }
          else {
            *param_5 = (int)local_6c + *param_5;
          }
        }
      }
    }
  }
  pvVar5 = local_14;
  if ((param_3 < 5) && (local_14 != (void *)0x0)) {
    FUN_00464fd0();
    pcStack_fc = (char *)0x495851;
    operator_delete(pvVar5);
  }
  pcStack_fc = (char *)0x495881;
  operator_delete(local_24);
  pcStack_fc = (char *)0x495899;
  operator_delete(local_28);
  pcStack_fc = (char *)0x4958b1;
  operator_delete(local_20);
  local_8 = 0xffffffff;
  FUN_00484470();
  ExceptionList = local_10;
  __security_check_cookie(local_4c ^ (uint)&stack0xfffffffc);
  return;
}

