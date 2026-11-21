// FUN_00496fe0  00496fe0

void __thiscall
FUN_00496fe0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4,
            undefined4 param_5,undefined4 param_6,short param_7,int *param_8,int *param_9,
            int *param_10,undefined4 *param_11,int *param_12,int *param_13,int *param_14,
            int *param_15,int *param_16)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined1 local_6c [7];
  char local_65;
  undefined1 local_64 [7];
  char local_5d;
  undefined1 local_51;
  undefined4 local_50;
  undefined4 local_4c;
  undefined2 local_48;
  char local_42;
  char local_41;
  undefined1 local_40 [7];
  undefined1 local_39;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined2 local_2c;
  undefined1 local_25;
  undefined4 local_24;
  undefined1 local_18 [7];
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_006a0beb;
  local_10 = ExceptionList;
  uVar2 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 1;
  if (param_7 < 1) {
    FUN_005e9f20("shHoleCards >= 1","..\\Casino\\PokerHand.cpp",0x152c,uVar2);
  }
  if (3 < param_7) {
    FUN_005e9f20("shHoleCards <= 3","..\\Casino\\PokerHand.cpp",0x152d,uVar2);
  }
  *param_8 = 0;
  *param_9 = 0;
  *param_10 = 0;
  *param_11 = 0;
  *param_12 = 0;
  *param_13 = 0;
  *param_14 = 0;
  *param_15 = 0;
  *param_16 = 0;
  FUN_00464110();
  local_8._0_1_ = 2;
  FUN_00464110();
  local_8._0_1_ = 3;
  FUN_00464110();
  local_8._0_1_ = 4;
  FUN_00485940(local_18,1,1,1,1,0,0,0);
  local_8._0_1_ = 5;
  FUN_00484320(param_1);
  local_8._0_1_ = 6;
  uVar3 = FUN_00464130(DAT_0079077c,DAT_00790780);
  local_8._0_1_ = 7;
  local_5d = FUN_00484ba0(uVar3);
  local_8._0_1_ = 6;
  FUN_00464210();
  if (local_5d != '\0') {
    uVar3 = FUN_00464130(DAT_0079077c,DAT_00790780);
    local_8._0_1_ = 8;
    FUN_00484ad0(uVar3);
    local_8._0_1_ = 6;
    FUN_00464210();
    uVar3 = FUN_00464130(DAT_007907b0,DAT_0079076c);
    local_8._0_1_ = 9;
    FUN_00484830(uVar3);
    local_8._0_1_ = 6;
    FUN_00464210();
  }
  FUN_0048ccd0(local_40);
  local_8._0_1_ = 10;
  FUN_004a20d0();
  local_8._0_1_ = 0xb;
  FUN_004a20d0();
  local_8._0_1_ = 0xc;
  FUN_004646a0();
  local_8._0_1_ = 0xd;
  FUN_004646a0();
  local_8 = CONCAT31(local_8._1_3_,0xe);
  local_41 = param_7 != 3;
  local_42 = param_7 < 2;
  if (param_7 < 1) {
    local_11 = '\x01';
  }
  else {
    local_11 = '\0';
  }
  do {
    if ((local_11 == '\0') && (cVar1 = FUN_00464a10(&local_51), cVar1 == '\0')) break;
    if (local_42 == '\0') {
      local_50 = param_2;
      local_4c = param_3;
      local_48 = param_4;
    }
    do {
      if ((local_42 == '\0') && (cVar1 = FUN_00464a10(&local_25), cVar1 == '\0')) break;
      if (local_41 == '\0') {
        local_34 = local_50;
        local_30 = local_4c;
        local_2c = local_48;
      }
      while( true ) {
        if ((local_41 == '\0') && (cVar1 = FUN_00464a10(&local_39), cVar1 == '\0'))
        goto LAB_004975cb;
        if (local_11 == '\0') {
          FUN_00484830(&local_51);
        }
        if (local_42 == '\0') {
          FUN_00484830(&local_25);
        }
        if (local_41 == '\0') {
          FUN_00484830(&local_39);
        }
        puVar4 = (undefined4 *)FUN_00485940(local_64,1,1,1,1,0,0,0);
        local_38 = *puVar4;
        FUN_004a20f0();
        FUN_00484320(&param_5);
        local_8._0_1_ = 0xf;
        uVar3 = FUN_00464130(DAT_0079077c,DAT_00790780);
        local_8._0_1_ = 0x10;
        local_65 = FUN_00484ba0(uVar3);
        local_8._0_1_ = 0xf;
        FUN_00464210();
        if (local_65 != '\0') {
          uVar3 = FUN_00464130(DAT_0079077c,DAT_00790780);
          local_8._0_1_ = 0x11;
          FUN_00484ad0(uVar3);
          local_8._0_1_ = 0xf;
          FUN_00464210();
          uVar3 = FUN_00464130(DAT_007907b0,DAT_0079076c);
          local_8._0_1_ = 0x12;
          FUN_00484830(uVar3);
          local_8._0_1_ = 0xf;
          FUN_00464210();
        }
        puVar4 = (undefined4 *)FUN_0048ccd0(local_6c);
        local_24 = *puVar4;
        FUN_004a20f0();
        cVar1 = FUN_004a2440(local_18);
        if (cVar1 == '\0') {
          cVar1 = FUN_004a2340(local_18);
          if (cVar1 == '\0') {
            cVar1 = FUN_004a2550(local_40);
            if (cVar1 == '\0') {
              cVar1 = FUN_004a2340(local_40);
              if (cVar1 == '\0') {
                *param_16 = *param_16 + 1;
              }
              else {
                *param_13 = *param_13 + 1;
              }
            }
            else {
              *param_10 = *param_10 + 1;
            }
          }
          else {
            cVar1 = FUN_004a2550(local_40);
            if (cVar1 == '\0') {
              cVar1 = FUN_004a2340(local_40);
              if (cVar1 == '\0') {
                *param_15 = *param_15 + 1;
              }
              else {
                *param_12 = *param_12 + 1;
              }
            }
            else {
              *param_9 = *param_9 + 1;
            }
          }
        }
        else {
          cVar1 = FUN_004a2550(local_40);
          if (cVar1 == '\0') {
            cVar1 = FUN_004a2340(local_40);
            if (cVar1 == '\0') {
              *param_14 = *param_14 + 1;
            }
            else {
              *param_8 = *param_8 + 1;
            }
          }
          else {
            *param_8 = *param_8 + 1;
          }
        }
        if (local_11 == '\0') {
          FUN_00484ad0(&local_51);
        }
        if (local_42 == '\0') {
          FUN_00484ad0(&local_25);
        }
        if (local_41 == '\0') {
          FUN_00484ad0(&local_39);
        }
        if (local_41 != '\0') break;
        local_8 = CONCAT31(local_8._1_3_,0xe);
        FUN_00484470();
      }
      local_8 = CONCAT31(local_8._1_3_,0xe);
      FUN_00484470();
LAB_004975cb:
    } while (local_42 == '\0');
  } while (local_11 == '\0');
  local_8._0_1_ = 0xd;
  FUN_004646e0();
  local_8._0_1_ = 0xc;
  FUN_004646e0();
  local_8._0_1_ = 0xb;
  FUN_004a20f0();
  local_8._0_1_ = 10;
  FUN_004a20f0();
  local_8._0_1_ = 6;
  FUN_004a20f0();
  local_8._0_1_ = 5;
  FUN_00484470();
  local_8._0_1_ = 4;
  FUN_004a20f0();
  local_8._0_1_ = 3;
  FUN_00464210();
  local_8._0_1_ = 2;
  FUN_00464210();
  local_8._0_1_ = 1;
  FUN_00464210();
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_004646e0();
  local_8 = 0xffffffff;
  FUN_00484470();
  ExceptionList = local_10;
  return;
}

