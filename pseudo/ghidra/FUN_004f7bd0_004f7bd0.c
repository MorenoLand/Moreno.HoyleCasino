// FUN_004f7bd0  004f7bd0

void __thiscall FUN_004f7bd0(int param_1,undefined4 param_2)

{
  char cVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  short local_60;
  int local_5c;
  int local_54;
  short local_50;
  short local_44;
  undefined4 local_38;
  short local_34;
  short local_30;
  short local_2c;
  short local_28;
  char local_21;
  short local_20;
  short local_1c;
  undefined4 local_18;
  short local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_006a26ca;
  local_10 = ExceptionList;
  uVar3 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(char *)(param_1 + 1) == '\0') {
    FUN_005e9f20("bInitialized","..\\Casino\\PokerPot.cpp",0x420,uVar3);
  }
  if (*(char *)(param_1 + 3) == '\0') {
    FUN_005e9f20("bShowdownInProgress","..\\Casino\\PokerPot.cpp",0x421,uVar3);
  }
  sVar2 = FUN_004f6e70();
  if (sVar2 != -1) {
    FUN_005e9f20("GetShowdownPlayer() == ENDOFROUND","..\\Casino\\PokerPot.cpp",0x422,uVar3);
  }
  *(undefined1 *)(param_1 + 5) = 1;
  FUN_004a20d0();
  local_8._0_1_ = 1;
  FUN_004a2100(DAT_00791390,&DAT_007913ff,&DAT_007913ff,&DAT_007913ff,&DAT_007913ff,&DAT_007913ff);
  FUN_004a20d0();
  local_8 = CONCAT31(local_8._1_3_,2);
  local_18 = param_2;
  local_34 = 0;
  local_20 = 0;
  for (local_28 = 0; local_28 < *(short *)(param_1 + 6); local_28 = local_28 + 1) {
    *(undefined1 *)((int)local_28 + *(int *)(param_1 + 0x44)) = 0;
    *(undefined1 *)((int)local_28 + *(int *)(param_1 + 0x48)) = 0;
    if ((*(char *)(*(int *)(param_1 + 0x30) + (int)local_28) == '\0') &&
       (*(char *)(*(int *)(param_1 + 0x3c) + (int)local_28) != '\0')) {
      local_34 = local_34 + 1;
      if ((*(int *)(*(int *)(param_1 + 0x84) + local_28 * 4) != 2) &&
         (cVar1 = FUN_004a2440(&local_38), cVar1 != '\0')) {
        local_38 = *(undefined4 *)(*(int *)(param_1 + 0x7c) + local_28 * 4);
      }
      if ((*(int *)(*(int *)(param_1 + 0x84) + local_28 * 4) != 1) &&
         (cVar1 = FUN_004a2550(&local_18), cVar1 != '\0')) {
        local_18 = *(undefined4 *)(*(int *)(param_1 + 0x80) + local_28 * 4);
      }
      if (*(int *)(*(int *)(param_1 + 0x84) + local_28 * 4) == 3) {
        local_20 = local_20 + 1;
      }
    }
  }
  if ((0 < local_20) && (local_20 != local_34)) {
    for (local_28 = 0; local_28 < *(short *)(param_1 + 6); local_28 = local_28 + 1) {
      if ((((*(char *)(*(int *)(param_1 + 0x30) + (int)local_28) == '\0') &&
           (*(char *)(*(int *)(param_1 + 0x3c) + (int)local_28) != '\0')) &&
          (*(int *)(*(int *)(param_1 + 0x84) + local_28 * 4) == 3)) &&
         ((cVar1 = FUN_004a23c0(&local_38), cVar1 != '\0' ||
          (cVar1 = FUN_004a23c0(&local_18), cVar1 != '\0')))) {
        FUN_004a2100(DAT_00791390,&DAT_007913ff,&DAT_007913ff,&DAT_007913ff,&DAT_007913ff,
                     &DAT_007913ff);
        FUN_004a2100(DAT_007913cc,DAT_007913c8,&DAT_007913ff,&DAT_007913ff,&DAT_007913ff,
                     &DAT_007913ff);
      }
    }
    FUN_004a2100(DAT_00791390,&DAT_007913ff,&DAT_007913ff,&DAT_007913ff,&DAT_007913ff,&DAT_007913ff)
    ;
    local_18 = param_2;
    for (local_28 = 0; local_28 < *(short *)(param_1 + 6); local_28 = local_28 + 1) {
      if ((*(char *)(*(int *)(param_1 + 0x30) + (int)local_28) == '\0') &&
         (*(char *)(*(int *)(param_1 + 0x3c) + (int)local_28) != '\0')) {
        if ((*(int *)(*(int *)(param_1 + 0x84) + local_28 * 4) != 2) &&
           (cVar1 = FUN_004a2440(&local_38), cVar1 != '\0')) {
          local_38 = *(undefined4 *)(*(int *)(param_1 + 0x7c) + local_28 * 4);
        }
        if ((*(int *)(*(int *)(param_1 + 0x84) + local_28 * 4) != 1) &&
           (cVar1 = FUN_004a2550(&local_18), cVar1 != '\0')) {
          local_18 = *(undefined4 *)(*(int *)(param_1 + 0x80) + local_28 * 4);
        }
      }
    }
  }
  local_14 = 0;
  local_30 = 0;
  local_1c = -1;
  local_2c = -1;
  for (local_28 = 0; local_28 < *(short *)(param_1 + 6); local_28 = local_28 + 1) {
    if ((*(char *)(*(int *)(param_1 + 0x30) + (int)local_28) == '\0') &&
       (*(char *)(*(int *)(param_1 + 0x3c) + (int)local_28) != '\0')) {
      cVar1 = FUN_004a2340(&local_38);
      if ((cVar1 != '\0') &&
         ((*(int *)(*(int *)(param_1 + 0x84) + local_28 * 4) == 0 ||
          (*(int *)(*(int *)(param_1 + 0x84) + local_28 * 4) == 1)))) {
        local_14 = local_14 + 1;
        local_1c = local_28;
      }
      cVar1 = FUN_004a2340(&local_18);
      if ((cVar1 != '\0') &&
         ((*(int *)(*(int *)(param_1 + 0x84) + local_28 * 4) == 0 ||
          (*(int *)(*(int *)(param_1 + 0x84) + local_28 * 4) == 2)))) {
        local_30 = local_30 + 1;
        local_2c = local_28;
      }
      cVar1 = FUN_004a2340(&local_38);
      if (((cVar1 != '\0') && (cVar1 = FUN_004a2340(&local_18), cVar1 != '\0')) &&
         (*(int *)(*(int *)(param_1 + 0x84) + local_28 * 4) == 3)) {
        local_14 = local_14 + 1;
        local_1c = local_28;
        local_30 = local_30 + 1;
        local_2c = local_28;
      }
    }
  }
  *(undefined1 *)(param_1 + 4) = 1;
  local_21 = '\0';
  if ((local_30 == 0) && (local_14 == 0)) {
    if (local_1c != -1) {
      FUN_005e9f20("shLastHighWinner == -1","..\\Casino\\PokerPot.cpp",0x493);
    }
    if (local_2c != -1) {
      FUN_005e9f20("shLastLowWinner == -1","..\\Casino\\PokerPot.cpp",0x494);
    }
    local_21 = '\x01';
    for (local_28 = 0; local_28 < *(short *)(param_1 + 6); local_28 = local_28 + 1) {
      if ((*(char *)(*(int *)(param_1 + 0x30) + (int)local_28) == '\0') &&
         (*(char *)(*(int *)(param_1 + 0x3c) + (int)local_28) != '\0')) {
        cVar1 = FUN_004a2340(&local_38);
        if ((cVar1 != '\0') && (*(int *)(*(int *)(param_1 + 0x84) + local_28 * 4) == 3)) {
          local_14 = local_14 + 1;
          local_1c = local_28;
        }
        cVar1 = FUN_004a2340(&local_18);
        if ((cVar1 != '\0') && (*(int *)(*(int *)(param_1 + 0x84) + local_28 * 4) == 3)) {
          local_30 = local_30 + 1;
          local_2c = local_28;
        }
      }
    }
    if (local_1c < 0) {
      FUN_005e9f20("shLastHighWinner >= 0","..\\Casino\\PokerPot.cpp",0x4a8);
    }
    if (local_2c < 0) {
      FUN_005e9f20("shLastLowWinner >= 0","..\\Casino\\PokerPot.cpp",0x4a9);
    }
    if (local_14 < 1) {
      FUN_005e9f20("shHighWinners>0","..\\Casino\\PokerPot.cpp",0x4aa);
    }
    if (local_30 < 1) {
      FUN_005e9f20("shLowWinners>0","..\\Casino\\PokerPot.cpp",0x4ab);
    }
  }
  if (local_30 == 0) {
    iVar4 = FUN_004f9580();
    iVar5 = (int)local_14;
    iVar6 = (int)local_14;
    if (local_1c < 0) {
      FUN_005e9f20("shLastHighWinner >= 0","..\\Casino\\PokerPot.cpp",0x4b4);
    }
    *(undefined1 *)((int)local_1c + *(int *)(param_1 + 0x44)) = 1;
    *(int *)(*(int *)(param_1 + 0x74) + local_1c * 4) =
         *(int *)(*(int *)(param_1 + 0x74) + local_1c * 4) + iVar4 / iVar6;
    local_44 = local_1c;
    if (1 < local_14) {
      for (local_28 = 0; local_28 < local_1c; local_28 = local_28 + 1) {
        if ((((*(char *)(*(int *)(param_1 + 0x30) + (int)local_28) == '\0') &&
             (*(char *)(*(int *)(param_1 + 0x3c) + (int)local_28) != '\0')) &&
            (cVar1 = FUN_004a2340(&local_38), cVar1 != '\0')) &&
           ((*(int *)(*(int *)(param_1 + 0x84) + local_28 * 4) == 0 ||
            (*(int *)(*(int *)(param_1 + 0x84) + local_28 * 4) == 1)))) {
          *(undefined1 *)((int)local_28 + *(int *)(param_1 + 0x44)) = 1;
          *(int *)(*(int *)(param_1 + 0x74) + local_28 * 4) =
               *(int *)(*(int *)(param_1 + 0x74) + local_28 * 4) + iVar4 / iVar6;
          if (*(short *)(*(int *)(param_1 + 0x4c) + local_44 * 2) <
              *(short *)(*(int *)(param_1 + 0x4c) + local_28 * 2)) {
            local_44 = local_28;
          }
        }
      }
    }
    *(int *)(*(int *)(param_1 + 0x74) + local_44 * 4) =
         *(int *)(*(int *)(param_1 + 0x74) + local_44 * 4) + iVar4 % iVar5;
  }
  else if (local_14 == 0) {
    iVar4 = FUN_004f9580();
    iVar5 = (int)local_30;
    iVar6 = (int)local_30;
    if (local_2c < 0) {
      FUN_005e9f20("shLastLowWinner >= 0","..\\Casino\\PokerPot.cpp",0x4d2);
    }
    *(undefined1 *)((int)local_2c + *(int *)(param_1 + 0x48)) = 1;
    *(int *)(*(int *)(param_1 + 0x78) + local_2c * 4) =
         *(int *)(*(int *)(param_1 + 0x78) + local_2c * 4) + iVar4 / iVar6;
    local_50 = local_2c;
    if (1 < local_30) {
      for (local_28 = 0; local_28 < local_2c; local_28 = local_28 + 1) {
        if (((*(char *)(*(int *)(param_1 + 0x30) + (int)local_28) == '\0') &&
            (*(char *)(*(int *)(param_1 + 0x3c) + (int)local_28) != '\0')) &&
           ((cVar1 = FUN_004a2340(&local_18), cVar1 != '\0' &&
            ((*(int *)(*(int *)(param_1 + 0x84) + local_28 * 4) == 0 ||
             (*(int *)(*(int *)(param_1 + 0x84) + local_28 * 4) == 2)))))) {
          *(undefined1 *)((int)local_28 + *(int *)(param_1 + 0x48)) = 1;
          *(int *)(*(int *)(param_1 + 0x78) + local_28 * 4) =
               *(int *)(*(int *)(param_1 + 0x78) + local_28 * 4) + iVar4 / iVar6;
          if (*(short *)(*(int *)(param_1 + 0x4c) + local_50 * 2) <
              *(short *)(*(int *)(param_1 + 0x4c) + local_28 * 2)) {
            local_50 = local_28;
          }
        }
      }
    }
    *(int *)(*(int *)(param_1 + 0x78) + local_50 * 4) =
         *(int *)(*(int *)(param_1 + 0x78) + local_50 * 4) + iVar4 % iVar5;
  }
  else {
    uVar3 = FUN_004f9580();
    local_5c = (int)uVar3 / 2;
    uVar3 = uVar3 & 0x80000001;
    if ((int)uVar3 < 0) {
      uVar3 = (uVar3 - 1 | 0xfffffffe) + 1;
    }
    iVar4 = local_5c % (int)local_30 + uVar3;
    local_54 = local_5c / (int)local_30;
    if ((local_14 == 1) || (local_30 != 1)) {
      local_5c = local_5c + iVar4;
    }
    else {
      local_54 = local_54 + iVar4;
    }
    iVar5 = (int)local_14;
    iVar4 = local_5c / (int)local_14;
    if (local_1c < 0) {
      FUN_005e9f20("shLastHighWinner >= 0","..\\Casino\\PokerPot.cpp",0x4f9);
    }
    *(undefined1 *)((int)local_1c + *(int *)(param_1 + 0x44)) = 1;
    *(int *)(*(int *)(param_1 + 0x74) + local_1c * 4) =
         *(int *)(*(int *)(param_1 + 0x74) + local_1c * 4) + iVar4;
    local_60 = local_1c;
    if (1 < local_14) {
      for (local_28 = 0; local_28 < local_1c; local_28 = local_28 + 1) {
        if ((*(char *)(*(int *)(param_1 + 0x30) + (int)local_28) == '\0') &&
           (*(char *)(*(int *)(param_1 + 0x3c) + (int)local_28) != '\0')) {
          if (local_21 == '\0') {
            cVar1 = FUN_004a2340(&local_38);
            if ((cVar1 != '\0') &&
               ((*(int *)(*(int *)(param_1 + 0x84) + local_28 * 4) == 0 ||
                (*(int *)(*(int *)(param_1 + 0x84) + local_28 * 4) == 1)))) {
              *(undefined1 *)((int)local_28 + *(int *)(param_1 + 0x44)) = 1;
              *(int *)(*(int *)(param_1 + 0x74) + local_28 * 4) =
                   *(int *)(*(int *)(param_1 + 0x74) + local_28 * 4) + iVar4;
              if (*(short *)(*(int *)(param_1 + 0x4c) + local_60 * 2) <
                  *(short *)(*(int *)(param_1 + 0x4c) + local_28 * 2)) {
                local_60 = local_28;
              }
            }
            cVar1 = FUN_004a2340(&local_38);
            if (((cVar1 != '\0') && (cVar1 = FUN_004a2340(&local_18), cVar1 != '\0')) &&
               (*(int *)(*(int *)(param_1 + 0x84) + local_28 * 4) == 3)) {
              *(undefined1 *)((int)local_28 + *(int *)(param_1 + 0x44)) = 1;
              *(int *)(*(int *)(param_1 + 0x74) + local_28 * 4) =
                   *(int *)(*(int *)(param_1 + 0x74) + local_28 * 4) + iVar4;
              if (*(short *)(*(int *)(param_1 + 0x4c) + local_60 * 2) <
                  *(short *)(*(int *)(param_1 + 0x4c) + local_28 * 2)) {
                local_60 = local_28;
              }
            }
          }
          else {
            cVar1 = FUN_004a2340(&local_38);
            if ((cVar1 != '\0') && (*(int *)(*(int *)(param_1 + 0x84) + local_28 * 4) == 3)) {
              *(undefined1 *)((int)local_28 + *(int *)(param_1 + 0x44)) = 1;
              *(int *)(*(int *)(param_1 + 0x74) + local_28 * 4) =
                   *(int *)(*(int *)(param_1 + 0x74) + local_28 * 4) + iVar4;
              if (*(short *)(*(int *)(param_1 + 0x4c) + local_60 * 2) <
                  *(short *)(*(int *)(param_1 + 0x4c) + local_28 * 2)) {
                local_60 = local_28;
              }
            }
          }
        }
      }
    }
    *(int *)(*(int *)(param_1 + 0x74) + local_60 * 4) =
         *(int *)(*(int *)(param_1 + 0x74) + local_60 * 4) + local_5c % iVar5;
    if (local_2c < 0) {
      FUN_005e9f20("shLastLowWinner >= 0","..\\Casino\\PokerPot.cpp",0x528);
    }
    *(undefined1 *)((int)local_2c + *(int *)(param_1 + 0x48)) = 1;
    *(int *)(*(int *)(param_1 + 0x78) + local_2c * 4) =
         *(int *)(*(int *)(param_1 + 0x78) + local_2c * 4) + local_54;
    if (1 < local_30) {
      for (local_28 = 0; local_28 < local_2c; local_28 = local_28 + 1) {
        if ((*(char *)(*(int *)(param_1 + 0x30) + (int)local_28) == '\0') &&
           (*(char *)(*(int *)(param_1 + 0x3c) + (int)local_28) != '\0')) {
          if (local_21 == '\0') {
            cVar1 = FUN_004a2340(&local_18);
            if ((cVar1 != '\0') &&
               ((*(int *)(*(int *)(param_1 + 0x84) + local_28 * 4) == 0 ||
                (*(int *)(*(int *)(param_1 + 0x84) + local_28 * 4) == 2)))) {
              *(undefined1 *)((int)local_28 + *(int *)(param_1 + 0x48)) = 1;
              *(int *)(*(int *)(param_1 + 0x78) + local_28 * 4) =
                   *(int *)(*(int *)(param_1 + 0x78) + local_28 * 4) + local_54;
            }
            cVar1 = FUN_004a2340(&local_38);
            if (((cVar1 != '\0') && (cVar1 = FUN_004a2340(&local_18), cVar1 != '\0')) &&
               (*(int *)(*(int *)(param_1 + 0x84) + local_28 * 4) == 3)) {
              *(undefined1 *)((int)local_28 + *(int *)(param_1 + 0x48)) = 1;
              *(int *)(*(int *)(param_1 + 0x78) + local_28 * 4) =
                   *(int *)(*(int *)(param_1 + 0x78) + local_28 * 4) + local_54;
            }
          }
          else {
            cVar1 = FUN_004a2340(&local_18);
            if ((cVar1 != '\0') && (*(int *)(*(int *)(param_1 + 0x84) + local_28 * 4) == 3)) {
              *(undefined1 *)((int)local_28 + *(int *)(param_1 + 0x48)) = 1;
              *(int *)(*(int *)(param_1 + 0x78) + local_28 * 4) =
                   *(int *)(*(int *)(param_1 + 0x78) + local_28 * 4) + local_54;
            }
          }
        }
      }
    }
  }
  local_8._0_1_ = 1;
  FUN_004a20f0();
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_004a20f0();
  local_8 = 0xffffffff;
  FUN_004a20f0();
  ExceptionList = local_10;
  return;
}

