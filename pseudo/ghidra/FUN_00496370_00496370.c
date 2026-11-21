// FUN_00496370  00496370

void FUN_00496370(undefined4 param_1,undefined4 param_2,undefined2 param_3,undefined4 param_4,
                 undefined4 param_5,short param_6,int *param_7,int *param_8,int *param_9)

{
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined1 local_42 [5];
  undefined1 local_3d;
  undefined4 local_3c;
  undefined4 local_38;
  undefined2 local_34;
  char local_2f;
  char local_2e;
  undefined1 local_2d;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined2 local_20;
  undefined1 local_19;
  undefined1 local_18 [7];
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_006a0a7a;
  local_10 = ExceptionList;
  uVar2 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 1;
  if (param_6 < 1) {
    FUN_005e9f20("shHoleCards >= 1","..\\Casino\\PokerHand.cpp",0x13f9,uVar2);
  }
  if (3 < param_6) {
    FUN_005e9f20("shHoleCards <= 3","..\\Casino\\PokerHand.cpp",0x13fa,uVar2);
  }
  *param_7 = 0;
  *param_8 = 0;
  *param_9 = 0;
  FUN_00464110();
  local_8._0_1_ = 2;
  FUN_00464110();
  local_8._0_1_ = 3;
  FUN_00464110();
  local_8._0_1_ = 4;
  FUN_00485940(local_18,1,1,1,1,0,0,0);
  local_8._0_1_ = 5;
  FUN_004a20d0();
  local_8._0_1_ = 6;
  FUN_004646a0();
  local_8._0_1_ = 7;
  FUN_004646a0();
  local_8 = CONCAT31(local_8._1_3_,8);
  local_2e = param_6 != 3;
  local_2f = param_6 < 2;
  if (param_6 < 1) {
    local_11 = '\x01';
  }
  else {
    local_11 = '\0';
  }
  do {
    if ((local_11 == '\0') && (cVar1 = FUN_00464a10(&local_3d), cVar1 == '\0')) break;
    if (local_2f == '\0') {
      local_3c = param_1;
      local_38 = param_2;
      local_34 = param_3;
    }
    do {
      if ((local_2f == '\0') && (cVar1 = FUN_00464a10(&local_19), cVar1 == '\0')) break;
      if (local_2e == '\0') {
        local_28 = local_3c;
        local_24 = local_38;
        local_20 = local_34;
      }
      do {
        if ((local_2e == '\0') && (cVar1 = FUN_00464a10(&local_2d), cVar1 == '\0')) break;
        if (local_11 == '\0') {
          FUN_00484830(&local_3d);
        }
        if (local_2f == '\0') {
          FUN_00484830(&local_19);
        }
        if (local_2e == '\0') {
          FUN_00484830(&local_2d);
        }
        puVar3 = (undefined4 *)FUN_00485940(local_42,1,1,1,1,0,0,0);
        local_2c = *puVar3;
        FUN_004a20f0();
        cVar1 = FUN_004a2440(local_18);
        if (cVar1 == '\0') {
          cVar1 = FUN_004a2340(local_18);
          if (cVar1 == '\0') {
            *param_9 = *param_9 + 1;
          }
          else {
            *param_8 = *param_8 + 1;
          }
        }
        else {
          *param_7 = *param_7 + 1;
        }
        if (local_11 == '\0') {
          FUN_00484ad0(&local_3d);
        }
        if (local_2f == '\0') {
          FUN_00484ad0(&local_19);
        }
        if (local_2e == '\0') {
          FUN_00484ad0(&local_2d);
        }
      } while (local_2e == '\0');
    } while (local_2f == '\0');
  } while (local_11 == '\0');
  local_8._0_1_ = 7;
  FUN_004646e0();
  local_8._0_1_ = 6;
  FUN_004646e0();
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

