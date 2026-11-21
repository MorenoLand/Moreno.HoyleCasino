// FUN_00497bd0  00497bd0

void FUN_00497bd0(undefined4 param_1,undefined4 param_2,undefined2 param_3)

{
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  short in_stack_00000020;
  int *in_stack_00000024;
  int *in_stack_00000028;
  int *in_stack_0000002c;
  undefined4 *in_stack_00000030;
  int *in_stack_00000034;
  int *in_stack_00000038;
  int *in_stack_0000003c;
  int *in_stack_00000040;
  int *in_stack_00000044;
  undefined1 local_5a [4];
  undefined1 local_56 [5];
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
  
  puStack_c = &LAB_006a0cfd;
  local_10 = ExceptionList;
  uVar2 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 2;
  if (in_stack_00000020 < 1) {
    FUN_005e9f20("shHoleCards >= 1","..\\Casino\\PokerHand.cpp",0x1630,uVar2);
  }
  if (3 < in_stack_00000020) {
    FUN_005e9f20("shHoleCards <= 3","..\\Casino\\PokerHand.cpp",0x1631,uVar2);
  }
  FUN_00484300();
  local_8._0_1_ = 3;
  FUN_00484b80();
  *in_stack_00000024 = 0;
  *in_stack_00000028 = 0;
  *in_stack_0000002c = 0;
  *in_stack_00000030 = 0;
  *in_stack_00000034 = 0;
  *in_stack_00000038 = 0;
  *in_stack_0000003c = 0;
  *in_stack_00000040 = 0;
  *in_stack_00000044 = 0;
  FUN_00464110();
  local_8._0_1_ = 4;
  FUN_00464110();
  local_8._0_1_ = 5;
  FUN_00464110();
  local_8._0_1_ = 6;
  FUN_00485940(local_18,1,1,1,1,0,0,0);
  local_8._0_1_ = 7;
  FUN_0048ccd0(local_40);
  local_8._0_1_ = 8;
  FUN_004a20d0();
  local_8._0_1_ = 9;
  FUN_004a20d0();
  local_8._0_1_ = 10;
  FUN_004646a0();
  local_8._0_1_ = 0xb;
  FUN_004646a0();
  local_8 = CONCAT31(local_8._1_3_,0xc);
  local_41 = in_stack_00000020 != 3;
  local_42 = in_stack_00000020 < 2;
  if (in_stack_00000020 < 1) {
    local_11 = '\x01';
  }
  else {
    local_11 = '\0';
  }
  do {
    if ((local_11 == '\0') && (cVar1 = FUN_00464a10(&local_51), cVar1 == '\0')) break;
    if (local_42 == '\0') {
      local_50 = param_1;
      local_4c = param_2;
      local_48 = param_3;
    }
    do {
      if ((local_42 == '\0') && (cVar1 = FUN_00464a10(&local_25), cVar1 == '\0')) break;
      if (local_41 == '\0') {
        local_34 = local_50;
        local_30 = local_4c;
        local_2c = local_48;
      }
      do {
        if ((local_41 == '\0') && (cVar1 = FUN_00464a10(&local_39), cVar1 == '\0')) break;
        if (local_11 == '\0') {
          FUN_00484830(&local_51);
          FUN_00484830(&local_51);
        }
        if (local_42 == '\0') {
          FUN_00484830(&local_25);
          FUN_00484830(&local_25);
        }
        if (local_41 == '\0') {
          FUN_00484830(&local_39);
          FUN_00484830(&local_39);
        }
        puVar3 = (undefined4 *)FUN_00485940(local_56,1,1,1,1,0,0,0);
        local_38 = *puVar3;
        FUN_004a20f0();
        puVar3 = (undefined4 *)FUN_0048ccd0(local_5a);
        local_24 = *puVar3;
        FUN_004a20f0();
        cVar1 = FUN_004a2440(local_18);
        if (cVar1 == '\0') {
          cVar1 = FUN_004a2340(local_18);
          if (cVar1 == '\0') {
            cVar1 = FUN_004a2550(local_40);
            if (cVar1 == '\0') {
              cVar1 = FUN_004a2340(local_40);
              if (cVar1 == '\0') {
                *in_stack_00000044 = *in_stack_00000044 + 1;
              }
              else {
                *in_stack_00000038 = *in_stack_00000038 + 1;
              }
            }
            else {
              *in_stack_0000002c = *in_stack_0000002c + 1;
            }
          }
          else {
            cVar1 = FUN_004a2550(local_40);
            if (cVar1 == '\0') {
              cVar1 = FUN_004a2340(local_40);
              if (cVar1 == '\0') {
                *in_stack_00000040 = *in_stack_00000040 + 1;
              }
              else {
                *in_stack_00000034 = *in_stack_00000034 + 1;
              }
            }
            else {
              *in_stack_00000028 = *in_stack_00000028 + 1;
            }
          }
        }
        else {
          cVar1 = FUN_004a2550(local_40);
          if (cVar1 == '\0') {
            cVar1 = FUN_004a2340(local_40);
            if (cVar1 == '\0') {
              *in_stack_0000003c = *in_stack_0000003c + 1;
            }
            else {
              *in_stack_00000024 = *in_stack_00000024 + 1;
            }
          }
          else {
            *in_stack_00000024 = *in_stack_00000024 + 1;
          }
        }
        if (local_11 == '\0') {
          FUN_00484ad0(&local_51);
          FUN_00484ad0(&local_51);
        }
        if (local_42 == '\0') {
          FUN_00484ad0(&local_25);
          FUN_00484ad0(&local_25);
        }
        if (local_41 == '\0') {
          FUN_00484ad0(&local_39);
          FUN_00484ad0(&local_39);
        }
      } while (local_41 == '\0');
    } while (local_42 == '\0');
  } while (local_11 == '\0');
  local_8._0_1_ = 0xb;
  FUN_004646e0();
  local_8._0_1_ = 10;
  FUN_004646e0();
  local_8._0_1_ = 9;
  FUN_004a20f0();
  local_8._0_1_ = 8;
  FUN_004a20f0();
  local_8._0_1_ = 7;
  FUN_004a20f0();
  local_8._0_1_ = 6;
  FUN_004a20f0();
  local_8._0_1_ = 5;
  FUN_00464210();
  local_8._0_1_ = 4;
  FUN_00464210();
  local_8._0_1_ = 3;
  FUN_00464210();
  local_8._0_1_ = 2;
  FUN_00484470();
  local_8._0_1_ = 1;
  FUN_004646e0();
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_00484470();
  local_8 = 0xffffffff;
  FUN_00484470();
  ExceptionList = local_10;
  return;
}

