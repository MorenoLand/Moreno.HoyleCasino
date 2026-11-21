// FUN_0048e5e0  0048e5e0

void __thiscall
FUN_0048e5e0(int *param_1,int param_2,short param_3,int *param_4,int *param_5,int *param_6,
            short param_7)

{
  char cVar1;
  short sVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined1 local_50 [4];
  undefined1 local_4c [11];
  undefined1 local_41;
  undefined4 local_40;
  undefined4 local_3c;
  undefined2 local_38;
  undefined1 local_2c [7];
  undefined1 local_25;
  short local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined2 local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_006a0563;
  local_10 = ExceptionList;
  uVar3 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((short)param_1[1] != 2) {
    FUN_005e9f20("shSize == 2","..\\Casino\\PokerHand.cpp",0xab0,uVar3);
  }
  if (param_3 < 3) {
    FUN_005e9f20("phWidow.shSize >= 3","..\\Casino\\PokerHand.cpp",0xab1,uVar3);
  }
  uVar4 = FUN_00464130(DAT_007907b4,DAT_00790784);
  local_8 = CONCAT31(local_8._1_3_,1);
  cVar1 = FUN_00484ba0(uVar4);
  if (cVar1 != '\0') {
    FUN_005e9f20("!ContainsCard(PokerCard(BugRank,BugSuit))","..\\Casino\\PokerHand.cpp",0xab2,uVar3
                );
  }
  local_8 = 0;
  FUN_00464210();
  uVar4 = FUN_00464130(DAT_0079077c,DAT_00790780);
  local_8 = CONCAT31(local_8._1_3_,2);
  cVar1 = FUN_00484ba0(uVar4);
  if (cVar1 != '\0') {
    FUN_005e9f20("!ContainsCard(PokerCard(WildRank,WildSuit))","..\\Casino\\PokerHand.cpp",0xab3);
  }
  local_8 = 0;
  FUN_00464210();
  *param_4 = 0;
  *param_5 = 0;
  *param_6 = 0;
  FUN_00484300();
  local_8._0_1_ = 3;
  FUN_004845f0(local_4c,&param_2);
  local_8._0_1_ = 4;
  FUN_00485940(local_2c,1,1,1,1,0,0,0);
  local_8._0_1_ = 6;
  FUN_00484470();
  FUN_004a20d0();
  local_8._0_1_ = 7;
  FUN_00464110();
  local_8._0_1_ = 8;
  FUN_00464110();
  local_8._0_1_ = 9;
  FUN_004646a0();
  local_8._0_1_ = 10;
  FUN_004646a0();
  local_8 = CONCAT31(local_8._1_3_,0xb);
  FUN_004646f0();
  FUN_004648b0(*param_1);
  FUN_004648b0(*param_1 + 1);
  for (local_24 = 0; local_24 < param_3; local_24 = local_24 + 1) {
    FUN_004648b0(local_24 + param_2);
  }
  do {
    cVar1 = FUN_00464a10(&local_41);
    if (cVar1 == '\0') {
      local_8._0_1_ = 10;
      FUN_004646e0();
      local_8._0_1_ = 9;
      FUN_004646e0();
      local_8._0_1_ = 8;
      FUN_00464210();
      local_8._0_1_ = 7;
      FUN_00464210();
      local_8._0_1_ = 6;
      FUN_004a20f0();
      local_8._0_1_ = 3;
      FUN_004a20f0();
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_00484470();
      local_8 = 0xffffffff;
      FUN_00484470();
      ExceptionList = local_10;
      return;
    }
    local_40 = local_1c;
    local_3c = local_18;
    local_38 = local_14;
LAB_0048e864:
    cVar1 = FUN_00464a10(&local_25);
    if (cVar1 != '\0') {
      FUN_00484b80();
      FUN_00484830(&local_41);
      FUN_00484830(&local_25);
      if (0 < param_7) break;
      goto LAB_0048e8d8;
    }
  } while( true );
  if (6 < param_7) {
    FUN_005e9f20("shStrength <= MAXTEXASHOLDEMHANDSTRENGTH","..\\Casino\\PokerHand.cpp",0xad2);
  }
  sVar2 = FUN_0048dc80();
  if (sVar2 == param_7) {
LAB_0048e8d8:
    for (local_24 = 0; local_24 < param_3; local_24 = local_24 + 1) {
      FUN_00484830(local_24 + param_2);
    }
    puVar5 = (undefined4 *)FUN_00485940(local_50,1,1,1,1,0,0,0);
    local_20 = *puVar5;
    FUN_004a20f0();
    cVar1 = FUN_004a2440(local_2c);
    if (cVar1 == '\0') {
      cVar1 = FUN_004a2340(local_2c);
      if (cVar1 == '\0') {
        *param_6 = *param_6 + 1;
      }
      else {
        *param_5 = *param_5 + 1;
      }
    }
    else {
      *param_4 = *param_4 + 1;
    }
  }
  goto LAB_0048e864;
}

