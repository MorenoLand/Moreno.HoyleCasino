// FUN_0049cd50  0049cd50

void __thiscall FUN_0049cd50(int param_1)

{
  short *psVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  byte *pbVar5;
  short in_stack_00000010;
  short in_stack_00000018;
  int *in_stack_0000001c;
  int *in_stack_00000020;
  int *in_stack_00000024;
  int *in_stack_00000028;
  int *in_stack_0000002c;
  int *in_stack_00000030;
  undefined1 *puVar6;
  undefined1 local_8e;
  undefined1 local_8d;
  void *local_8c;
  undefined1 local_86;
  undefined1 local_85;
  void *local_84;
  undefined1 local_7e;
  undefined1 local_7d;
  void *local_7c;
  undefined4 local_70 [4];
  undefined4 local_60;
  byte local_59;
  short local_58;
  short local_54;
  short local_50;
  short local_4c;
  short local_48;
  short local_40 [4];
  uint local_38;
  short local_34;
  short local_30;
  int local_2c;
  void *local_28;
  void *local_24;
  void *local_20;
  void *local_1c;
  byte local_15;
  short local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_006a0fa6;
  local_10 = ExceptionList;
  uVar3 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 3;
  local_38 = uVar3;
  if (*(short *)(param_1 + 4) != 4) {
    FUN_005e9f20("shSize == 4","..\\Casino\\PokerHand.cpp",0x1aeb,uVar3);
  }
  if ((in_stack_00000010 < 1) || (3 < in_stack_00000010)) {
    FUN_005e9f20("(phWidow.shSize >=1) && (phWidow.shSize <= 3)","..\\Casino\\PokerHand.cpp",0x1aec,
                 uVar3);
  }
  if ((in_stack_00000018 < 0) || (3 < in_stack_00000018)) {
    FUN_005e9f20("(phOtherWidow.shSize >=0) && (phOtherWidow.shSize <= 3)",
                 "..\\Casino\\PokerHand.cpp",0x1aed,uVar3);
  }
  uVar4 = FUN_00464130(DAT_007907b4,DAT_00790784);
  local_8 = CONCAT31(local_8._1_3_,4);
  cVar2 = FUN_00484ba0(uVar4);
  if (cVar2 != '\0') {
    FUN_005e9f20("!ContainsCard(PokerCard(BugRank,BugSuit))","..\\Casino\\PokerHand.cpp",0x1aee);
  }
  local_8 = 3;
  FUN_00464210();
  uVar4 = FUN_00464130(DAT_0079077c,DAT_00790780);
  local_8 = CONCAT31(local_8._1_3_,5);
  cVar2 = FUN_00484ba0(uVar4);
  if (cVar2 != '\0') {
    FUN_005e9f20("!ContainsCard(PokerCard(WildRank,WildSuit))","..\\Casino\\PokerHand.cpp",0x1aef);
  }
  local_8 = 3;
  FUN_00464210();
  uVar4 = FUN_00464130(DAT_007907b4,DAT_00790784);
  local_8 = CONCAT31(local_8._1_3_,6);
  cVar2 = FUN_00484ba0(uVar4);
  if (cVar2 != '\0') {
    FUN_005e9f20("!phWidow.ContainsCard(PokerCard(BugRank,BugSuit))","..\\Casino\\PokerHand.cpp",
                 0x1af0);
  }
  local_8 = 3;
  FUN_00464210();
  uVar4 = FUN_00464130(DAT_0079077c,DAT_00790780);
  local_8 = CONCAT31(local_8._1_3_,7);
  cVar2 = FUN_00484ba0(uVar4);
  if (cVar2 != '\0') {
    FUN_005e9f20("!phWidow.ContainsCard(PokerCard(WildRank,WildSuit))","..\\Casino\\PokerHand.cpp",
                 0x1af1);
  }
  local_8 = 3;
  FUN_00464210();
  uVar4 = FUN_00464130(DAT_007907b4,DAT_00790784);
  local_8 = CONCAT31(local_8._1_3_,8);
  cVar2 = FUN_00484ba0(uVar4);
  if (cVar2 != '\0') {
    FUN_005e9f20("!phOtherWidow.ContainsCard(PokerCard(BugRank,BugSuit))",
                 "..\\Casino\\PokerHand.cpp",0x1af2);
  }
  local_8 = 3;
  FUN_00464210();
  uVar4 = FUN_00464130(DAT_0079077c,DAT_00790780);
  local_8 = CONCAT31(local_8._1_3_,9);
  cVar2 = FUN_00484ba0(uVar4);
  if (cVar2 != '\0') {
    FUN_005e9f20("!phOtherWidow.ContainsCard(PokerCard(WildRank,WildSuit))",
                 "..\\Casino\\PokerHand.cpp",0x1af3);
  }
  local_8 = 3;
  FUN_00464210();
  *in_stack_0000001c = 0;
  *in_stack_00000020 = 0;
  *in_stack_00000024 = 0;
  *in_stack_00000028 = 0;
  *in_stack_0000002c = 0;
  *in_stack_00000030 = 0;
  local_7c = operator_new((*DAT_007913e0 + 1) * 2);
  for (local_15 = 0; local_15 <= *DAT_007913e0; local_15 = local_15 + 1) {
    *(undefined2 *)((int)local_7c + (uint)local_15 * 2) = 0;
  }
  local_24 = local_7c;
  for (local_14 = 0; local_14 < *(short *)(param_1 + 4); local_14 = local_14 + 1) {
    puVar6 = &local_7e;
    FUN_00464480(&local_7d);
    pbVar5 = (byte *)FUN_00463fd0(puVar6);
    psVar1 = (short *)((int)local_24 + (uint)*pbVar5 * 2);
    *psVar1 = *psVar1 + 1;
  }
  local_84 = operator_new((*DAT_007913e0 + 1) * 2);
  for (local_15 = 0; local_15 <= *DAT_007913e0; local_15 = local_15 + 1) {
    *(undefined2 *)((int)local_84 + (uint)local_15 * 2) = 0;
  }
  local_28 = local_84;
  for (local_14 = 0; local_14 < in_stack_00000010; local_14 = local_14 + 1) {
    puVar6 = &local_86;
    FUN_00464480(&local_85);
    pbVar5 = (byte *)FUN_00463fd0(puVar6);
    psVar1 = (short *)((int)local_28 + (uint)*pbVar5 * 2);
    *psVar1 = *psVar1 + 1;
  }
  local_8c = operator_new((*DAT_007913e0 + 1) * 2);
  for (local_15 = 0; local_15 <= *DAT_007913e0; local_15 = local_15 + 1) {
    *(undefined2 *)((int)local_8c + (uint)local_15 * 2) = 0;
  }
  local_1c = local_8c;
  for (local_14 = 0; local_14 < in_stack_00000018; local_14 = local_14 + 1) {
    puVar6 = &local_8e;
    FUN_00464480(&local_8d);
    pbVar5 = (byte *)FUN_00463fd0(puVar6);
    psVar1 = (short *)((int)local_1c + (uint)*pbVar5 * 2);
    *psVar1 = *psVar1 + 1;
  }
  local_20 = operator_new((*DAT_007913e0 + 1) * 2);
  for (local_2c = 0; local_2c < 0x6f91; local_2c = local_2c + 1) {
    for (local_15 = 0; local_15 <= *DAT_007913e0; local_15 = local_15 + 1) {
      *(undefined2 *)((int)local_20 + (uint)local_15 * 2) = 0;
    }
    local_48 = 1;
    local_40[0] = (short)(local_2c % 0xd);
    local_40[1] = (short)((local_2c / 0xd) % 0xd);
    if (local_40[0] <= local_40[1]) {
      local_40[2] = (short)((local_2c / 0xa9) % 0xd);
      if ((local_40[0] <= local_40[2]) && (local_40[1] <= local_40[2])) {
        local_40[3] = (short)(local_2c / 0x895);
        if ((local_40[0] <= local_40[3]) &&
           ((local_40[1] <= local_40[3] && (local_40[2] <= local_40[3])))) {
          for (local_4c = 0; local_4c < 4; local_4c = local_4c + 1) {
            *(short *)((int)local_20 + ((int)local_40[local_4c] + (uint)*DAT_007913b4) * 2) =
                 *(short *)((int)local_20 + ((int)local_40[local_4c] + (uint)*DAT_007913b4) * 2) + 1
            ;
          }
          local_30 = 0;
          for (local_4c = 0; local_4c < 4; local_4c = local_4c + 1) {
            if ((local_4c == 3) || (local_40[local_4c] < local_40[local_4c + 1])) {
              local_50 = ((4 - *(short *)((int)local_24 +
                                         ((int)local_40[local_4c] + (uint)*DAT_007913b4) * 2)) -
                         *(short *)((int)local_28 +
                                   ((int)local_40[local_4c] + (uint)*DAT_007913b4) * 2)) -
                         *(short *)((int)local_1c +
                                   ((int)local_40[local_4c] + (uint)*DAT_007913b4) * 2);
              local_54 = local_30 + 1;
              if (local_50 != local_54) {
                if (local_50 < local_54) {
                  local_48 = 0;
                }
                else if ((local_54 == 2) && (local_50 == 4)) {
                  local_48 = local_48 * 6;
                }
                else {
                  local_48 = local_48 * local_50;
                }
              }
              local_30 = 0;
            }
            else {
              local_30 = local_30 + 1;
            }
          }
          if (local_48 != 0) {
            FUN_004a20d0();
            local_8 = CONCAT31(local_8._1_3_,10);
            local_34 = 0;
            for (local_15 = *DAT_007913b4; local_15 <= *DAT_007913e0; local_15 = local_15 + 1) {
              if (*(short *)((int)local_20 + (uint)local_15 * 2) < 1) {
                if (0 < *(short *)((int)local_28 + (uint)local_15 * 2)) {
                  local_34 = local_34 + 1;
                }
              }
              else {
                local_34 = local_34 + 1;
              }
            }
            if (local_34 < 5) {
              FUN_004a2100(DAT_00791390,DAT_007913c8,&DAT_007913ff,&DAT_007913ff,&DAT_007913ff,
                           &DAT_007913ff);
            }
            else {
              local_58 = 0;
              local_59 = *DAT_007913b4;
              while (local_58 < 5) {
                if ((*(short *)((int)local_20 + (uint)local_59 * 2) == 0) &&
                   (*(short *)((int)local_28 + (uint)local_59 * 2) == 0)) {
                  local_59 = local_59 + 1;
                  if (*DAT_007913e0 < local_59) {
                    FUN_005e9f20("ucCurrent <= KingValue.ucValue","..\\Casino\\PokerHand.cpp",0x1b67
                                );
                  }
                }
                else {
                  if (local_59 == *DAT_007913b4) {
                    local_70[local_58] = DAT_007913b4;
                  }
                  else if (local_59 == *DAT_007913f0) {
                    local_70[local_58] = DAT_007913f0;
                  }
                  else if (local_59 == *DAT_007913d8) {
                    local_70[local_58] = DAT_007913d8;
                  }
                  else if (local_59 == *DAT_00791414) {
                    local_70[local_58] = DAT_00791414;
                  }
                  else if (local_59 == *DAT_007913a4) {
                    local_70[local_58] = DAT_007913a4;
                  }
                  else if (local_59 == *DAT_00791404) {
                    local_70[local_58] = DAT_00791404;
                  }
                  else if (local_59 == *DAT_007913f8) {
                    local_70[local_58] = DAT_007913f8;
                  }
                  else if (local_59 == *DAT_00791410) {
                    local_70[local_58] = DAT_00791410;
                  }
                  else if (local_59 == *DAT_007913f4) {
                    local_70[local_58] = DAT_007913f4;
                  }
                  else if (local_59 == *DAT_0079138c) {
                    local_70[local_58] = DAT_0079138c;
                  }
                  else if (local_59 == *DAT_00791400) {
                    local_70[local_58] = DAT_00791400;
                  }
                  else if (local_59 == *DAT_007913bc) {
                    local_70[local_58] = DAT_007913bc;
                  }
                  else if (local_59 == *DAT_007913e0) {
                    local_70[local_58] = DAT_007913e0;
                  }
                  local_59 = local_59 + 1;
                  local_58 = local_58 + 1;
                }
              }
              FUN_004a2100(DAT_00791390,local_60,local_70[3],local_70[2],local_70[1],local_70[0]);
            }
            cVar2 = FUN_004a2550(&stack0x00000004);
            if (cVar2 == '\0') {
              cVar2 = FUN_004a2340(&stack0x00000004);
              if (cVar2 == '\0') {
                *in_stack_00000024 = (int)local_48 + *in_stack_00000024;
              }
              else {
                *in_stack_00000020 = (int)local_48 + *in_stack_00000020;
              }
            }
            else {
              *in_stack_0000001c = (int)local_48 + *in_stack_0000001c;
            }
            cVar2 = FUN_004a2550(&stack0x00000008);
            if (cVar2 == '\0') {
              cVar2 = FUN_004a2340(&stack0x00000008);
              if (cVar2 == '\0') {
                *in_stack_00000030 = (int)local_48 + *in_stack_00000030;
              }
              else {
                *in_stack_0000002c = (int)local_48 + *in_stack_0000002c;
              }
            }
            else {
              *in_stack_00000028 = (int)local_48 + *in_stack_00000028;
            }
            local_8 = CONCAT31(local_8._1_3_,3);
            FUN_004a20f0();
          }
        }
      }
    }
  }
  operator_delete(local_24);
  operator_delete(local_28);
  operator_delete(local_1c);
  operator_delete(local_20);
  local_8._0_1_ = 2;
  FUN_004a20f0();
  local_8._0_1_ = 1;
  FUN_004a20f0();
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_00484470();
  local_8 = 0xffffffff;
  FUN_00484470();
  ExceptionList = local_10;
  __security_check_cookie(local_38 ^ (uint)&stack0xfffffffc);
  return;
}

