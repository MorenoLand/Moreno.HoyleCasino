// FUN_00496b20  00496b20

void FUN_00496b20(undefined4 param_1,undefined4 param_2,undefined2 param_3,undefined4 param_4,
                 undefined4 param_5,short param_6,int *param_7,int *param_8,int *param_9,
                 int *param_10,int *param_11,int *param_12,int *param_13,int *param_14,int *param_15
                 )

{
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined1 local_52 [4];
  undefined1 local_4e [5];
  undefined1 local_49;
  undefined4 local_48;
  undefined4 local_44;
  undefined2 local_40;
  char local_3a;
  char local_39;
  undefined1 local_38 [7];
  undefined1 local_31;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined2 local_24;
  undefined1 local_1d;
  undefined4 local_1c;
  undefined1 local_18 [7];
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_006a0b38;
  local_10 = ExceptionList;
  uVar2 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 1;
  if (param_6 < 1) {
    FUN_005e9f20("shHoleCards >= 1","..\\Casino\\PokerHand.cpp",0x14b0,uVar2);
  }
  if (3 < param_6) {
    FUN_005e9f20("shHoleCards <= 3","..\\Casino\\PokerHand.cpp",0x14b1,uVar2);
  }
  *param_7 = 0;
  *param_8 = 0;
  *param_9 = 0;
  *param_10 = 0;
  *param_11 = 0;
  *param_12 = 0;
  *param_13 = 0;
  *param_14 = 0;
  *param_15 = 0;
  FUN_00464110();
  local_8._0_1_ = 2;
  FUN_00464110();
  local_8._0_1_ = 3;
  FUN_00464110();
  local_8._0_1_ = 4;
  FUN_00485940(local_18,1,1,1,1,0,0,0);
  local_8._0_1_ = 5;
  FUN_004a1910(local_38);
  local_8._0_1_ = 6;
  FUN_004a20d0();
  local_8._0_1_ = 7;
  FUN_004a20d0();
  local_8._0_1_ = 8;
  FUN_004646a0();
  local_8._0_1_ = 9;
  FUN_004646a0();
  local_8 = CONCAT31(local_8._1_3_,10);
  local_39 = param_6 != 3;
  local_3a = param_6 < 2;
  if (param_6 < 1) {
    local_11 = '\x01';
  }
  else {
    local_11 = '\0';
  }
  do {
    if ((local_11 == '\0') && (cVar1 = FUN_00464a10(&local_49), cVar1 == '\0')) break;
    if (local_3a == '\0') {
      local_48 = param_1;
      local_44 = param_2;
      local_40 = param_3;
    }
    do {
      if ((local_3a == '\0') && (cVar1 = FUN_00464a10(&local_1d), cVar1 == '\0')) break;
      if (local_39 == '\0') {
        local_2c = local_48;
        local_28 = local_44;
        local_24 = local_40;
      }
      do {
        if ((local_39 == '\0') && (cVar1 = FUN_00464a10(&local_31), cVar1 == '\0')) break;
        if (local_11 == '\0') {
          FUN_00484830(&local_49);
        }
        if (local_3a == '\0') {
          FUN_00484830(&local_1d);
        }
        if (local_39 == '\0') {
          FUN_00484830(&local_31);
        }
        puVar3 = (undefined4 *)FUN_00485940(local_4e,1,1,1,1,0,0,0);
        local_30 = *puVar3;
        FUN_004a20f0();
        puVar3 = (undefined4 *)FUN_004a1910(local_52);
        local_1c = *puVar3;
        FUN_004a20f0();
        cVar1 = FUN_004a2440(local_18);
        if (cVar1 == '\0') {
          cVar1 = FUN_004a2340(local_18);
          if (cVar1 == '\0') {
            cVar1 = FUN_004a2550(local_38);
            if (cVar1 == '\0') {
              cVar1 = FUN_004a2340(local_38);
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
          else {
            cVar1 = FUN_004a2550(local_38);
            if (cVar1 == '\0') {
              cVar1 = FUN_004a2340(local_38);
              if (cVar1 == '\0') {
                *param_14 = *param_14 + 1;
              }
              else {
                *param_11 = *param_11 + 1;
              }
            }
            else {
              *param_8 = *param_8 + 1;
            }
          }
        }
        else {
          cVar1 = FUN_004a2550(local_38);
          if (cVar1 == '\0') {
            cVar1 = FUN_004a2340(local_38);
            if (cVar1 == '\0') {
              *param_13 = *param_13 + 1;
            }
            else {
              *param_10 = *param_10 + 1;
            }
          }
          else {
            *param_7 = *param_7 + 1;
          }
        }
        if (local_11 == '\0') {
          FUN_00484ad0(&local_49);
        }
        if (local_3a == '\0') {
          FUN_00484ad0(&local_1d);
        }
        if (local_39 == '\0') {
          FUN_00484ad0(&local_31);
        }
      } while (local_39 == '\0');
    } while (local_3a == '\0');
  } while (local_11 == '\0');
  local_8._0_1_ = 9;
  FUN_004646e0();
  local_8._0_1_ = 8;
  FUN_004646e0();
  local_8._0_1_ = 7;
  FUN_004a20f0();
  local_8._0_1_ = 6;
  FUN_004a20f0();
  local_8._0_1_ = 5;
  FUN_004a20f0();
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

