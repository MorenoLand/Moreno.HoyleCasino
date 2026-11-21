// FUN_0048ea10  0048ea10

void __thiscall
FUN_0048ea10(int *param_1,int param_2,short param_3,int *param_4,int *param_5,int *param_6,
            int *param_7)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined1 local_41;
  undefined1 local_40;
  undefined1 local_3f;
  undefined1 local_3e;
  undefined1 local_3d;
  undefined1 local_3c;
  undefined1 local_3b;
  undefined1 local_3a [6];
  short local_34;
  undefined1 local_2d;
  undefined1 local_2c [8];
  undefined1 local_24 [4];
  undefined4 local_20;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_006a05e0;
  local_10 = ExceptionList;
  uVar2 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((short)param_1[1] != 2) {
    FUN_005e9f20("shSize == 2","..\\Casino\\PokerHand.cpp",0xaed,uVar2);
  }
  if ((param_3 != 3) && (param_3 != 4)) {
    FUN_005e9f20("(phWidow.shSize == 3) || (phWidow.shSize == 4)","..\\Casino\\PokerHand.cpp",0xaee,
                 uVar2);
  }
  uVar3 = FUN_00464130(DAT_007907b4,DAT_00790784);
  local_8 = CONCAT31(local_8._1_3_,1);
  cVar1 = FUN_00484ba0(uVar3);
  if (cVar1 != '\0') {
    FUN_005e9f20("!ContainsCard(PokerCard(BugRank,BugSuit))","..\\Casino\\PokerHand.cpp",0xaef,uVar2
                );
  }
  local_8 = 0;
  FUN_00464210();
  uVar3 = FUN_00464130(DAT_0079077c,DAT_00790780);
  local_8 = CONCAT31(local_8._1_3_,2);
  cVar1 = FUN_00484ba0(uVar3);
  if (cVar1 != '\0') {
    FUN_005e9f20("!ContainsCard(PokerCard(WildRank,WildSuit))","..\\Casino\\PokerHand.cpp",0xaf0);
  }
  local_8 = 0;
  FUN_00464210();
  *param_4 = 0;
  *param_5 = 0;
  *param_6 = 0;
  *param_7 = 0;
  FUN_004845f0(local_2c,&param_2);
  local_8._0_1_ = 3;
  FUN_00485940(local_24,1,1,1,1,0,0,0);
  local_8._0_1_ = 4;
  FUN_004a20d0();
  local_8._0_1_ = 5;
  FUN_00464110();
  local_8._0_1_ = 6;
  FUN_004646a0();
  local_8 = CONCAT31(local_8._1_3_,7);
  FUN_004646f0();
  FUN_004648b0(*param_1);
  FUN_004648b0(*param_1 + 1);
  for (local_34 = 0; local_34 < param_3; local_34 = local_34 + 1) {
    FUN_004648b0(local_34 + param_2);
  }
  do {
    cVar1 = FUN_00464a10(&local_2d);
    if (cVar1 == '\0') {
      local_8._0_1_ = 6;
      FUN_004646e0();
      local_8._0_1_ = 5;
      FUN_00464210();
      local_8._0_1_ = 4;
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
    FUN_00484830(&local_2d);
    puVar4 = (undefined4 *)FUN_00485940(local_3a,1,1,1,1,0,0,0);
    local_20 = *puVar4;
    FUN_004a20f0();
    uVar3 = FUN_004a2160(&local_3c);
    FUN_004a2160(&local_3b);
    cVar1 = FUN_004a1ed0(uVar3);
    if (cVar1 != '\0') {
      uVar3 = DAT_0079140c;
      FUN_004a2160(&local_3d);
      cVar1 = FUN_004a1f00(uVar3);
      if (cVar1 != '\0') {
        *param_4 = *param_4 + 1;
      }
    }
    uVar3 = FUN_004a2160(&local_3f);
    FUN_004a2160(&local_3e);
    cVar1 = FUN_004a1ed0(uVar3);
    if (cVar1 == '\0') {
      cVar1 = FUN_004a2440(local_24);
      if (cVar1 != '\0') {
        uVar3 = FUN_004a2160(&local_41);
        FUN_004a2160(&local_40);
        cVar1 = FUN_004a1e10(uVar3);
        if (cVar1 != '\0') {
          *param_6 = *param_6 + 1;
          goto LAB_0048ed76;
        }
      }
      *param_7 = *param_7 + 1;
    }
    else {
      *param_5 = *param_5 + 1;
    }
LAB_0048ed76:
    FUN_00484ad0(&local_2d);
  } while( true );
}

