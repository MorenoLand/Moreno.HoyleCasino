// FUN_00491df0  00491df0

void __thiscall
FUN_00491df0(int *param_1,int param_2,short param_3,int *param_4,int *param_5,int *param_6,
            char param_7)

{
  char cVar1;
  char *pcStack_b8;
  undefined4 *puStack_b4;
  uint uStack_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 *local_a4;
  undefined4 *local_a0;
  undefined4 local_9c;
  undefined4 *local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 *local_88;
  undefined4 *local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  int *local_70;
  uint local_6c;
  char local_61;
  undefined1 local_60 [4];
  undefined1 *local_5c;
  undefined1 local_58 [9];
  char local_4f;
  undefined1 local_4e [4];
  undefined1 local_4a [6];
  short local_44;
  undefined1 local_3d;
  undefined4 local_3c;
  undefined4 local_38;
  undefined2 local_34;
  undefined4 local_28;
  undefined1 local_21;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined2 local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_006a0725;
  local_10 = ExceptionList;
  uStack_b0 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_6c = 0;
  local_8 = 0;
  local_70 = param_1;
  if ((short)param_1[1] != 4) {
    puStack_b4 = (undefined4 *)0xf24;
    pcStack_b8 = "..\\Casino\\PokerHand.cpp";
    FUN_005e9f20("shSize == 4");
  }
  if (param_3 < 3) {
    puStack_b4 = (undefined4 *)0xf25;
    pcStack_b8 = "..\\Casino\\PokerHand.cpp";
    FUN_005e9f20("phWidow.shSize >= 3");
  }
  puStack_b4 = (undefined4 *)DAT_00790784;
  pcStack_b8 = DAT_007907b4;
  puStack_b4 = (undefined4 *)FUN_00464130();
  local_8 = CONCAT31(local_8._1_3_,1);
  local_6c = local_6c | 1;
  pcStack_b8 = (char *)0x491ea3;
  local_78 = puStack_b4;
  local_74 = puStack_b4;
  cVar1 = FUN_00484ba0();
  if (cVar1 != '\0') {
    puStack_b4 = (undefined4 *)0xf26;
    pcStack_b8 = "..\\Casino\\PokerHand.cpp";
    FUN_005e9f20("!ContainsCard(PokerCard(BugRank,BugSuit))");
  }
  local_8 = 0;
  if ((local_6c & 1) != 0) {
    local_6c = local_6c & 0xfffffffe;
    puStack_b4 = (undefined4 *)0x491edc;
    FUN_00464210();
  }
  puStack_b4 = (undefined4 *)DAT_00790780;
  pcStack_b8 = DAT_0079077c;
  puStack_b4 = (undefined4 *)FUN_00464130();
  local_8 = CONCAT31(local_8._1_3_,2);
  local_6c = local_6c | 2;
  pcStack_b8 = (char *)0x491f14;
  local_80 = puStack_b4;
  local_7c = puStack_b4;
  cVar1 = FUN_00484ba0();
  if (cVar1 != '\0') {
    puStack_b4 = (undefined4 *)0xf27;
    pcStack_b8 = "..\\Casino\\PokerHand.cpp";
    FUN_005e9f20("!ContainsCard(PokerCard(WildRank,WildSuit))");
  }
  local_8 = 0;
  if ((local_6c & 2) != 0) {
    local_6c = local_6c & 0xfffffffd;
    puStack_b4 = (undefined4 *)0x491f4d;
    FUN_00464210();
  }
  *param_4 = 0;
  *param_5 = 0;
  *param_6 = 0;
  puStack_b4 = (undefined4 *)0x491f70;
  FUN_00484300();
  local_8._0_1_ = 3;
  puStack_b4 = (undefined4 *)0x491f7c;
  FUN_004a20d0();
  local_8 = CONCAT31(local_8._1_3_,4);
  if (param_7 == '\0') {
    puStack_b4 = (undefined4 *)0x0;
    pcStack_b8 = (char *)0x0;
    local_88 = (undefined4 *)FUN_0048cc10(local_4e,&param_2,0,0,1,0,0);
    local_28 = *local_88;
    puStack_b4 = (undefined4 *)0x491ff2;
    FUN_004a20f0();
  }
  else {
    puStack_b4 = (undefined4 *)0x0;
    pcStack_b8 = (char *)0x0;
    local_84 = (undefined4 *)FUN_0048cc10(local_4a,&param_2,1,1,1,1,0);
    local_28 = *local_84;
    puStack_b4 = (undefined4 *)0x491fb9;
    FUN_004a20f0();
  }
  puStack_b4 = (undefined4 *)0x491ffa;
  FUN_004a20d0();
  local_8._0_1_ = 5;
  puStack_b4 = (undefined4 *)0x492006;
  FUN_00464110();
  local_8._0_1_ = 6;
  puStack_b4 = (undefined4 *)0x492012;
  FUN_00464110();
  local_8._0_1_ = 7;
  puStack_b4 = (undefined4 *)0x49201e;
  FUN_004646a0();
  local_8._0_1_ = 8;
  puStack_b4 = (undefined4 *)0x49202a;
  FUN_004646a0();
  local_8._0_1_ = 9;
  if (param_7 == '\0') {
    puStack_b4 = (undefined4 *)0x49203e;
    local_90 = FUN_004a20d0();
    local_8 = CONCAT31(local_8._1_3_,10);
    local_6c = local_6c | 4;
    puStack_b4 = (undefined4 *)&DAT_007913ff;
    pcStack_b8 = &DAT_007913ff;
    local_8c = local_90;
    puStack_b4 = (undefined4 *)FUN_004a2100(DAT_00791390,DAT_007913f4,&DAT_007913ff,&DAT_007913ff);
    pcStack_b8 = (char *)0x492092;
    cVar1 = FUN_004a24d0();
    if (cVar1 != '\0') {
      local_94 = 1;
      goto LAB_004920af;
    }
  }
  local_94 = 0;
LAB_004920af:
  local_4f = (char)local_94;
  local_8 = 9;
  if ((local_6c & 4) != 0) {
    local_6c = local_6c & 0xfffffffb;
    puStack_b4 = (undefined4 *)0x4920d3;
    FUN_004a20f0();
  }
  if (local_4f != '\0') {
    puStack_b4 = (undefined4 *)&DAT_007913ff;
    pcStack_b8 = &DAT_007913ff;
    FUN_004a2100(DAT_00791390,DAT_007913f4,&DAT_007913ff,&DAT_007913ff);
  }
  puStack_b4 = (undefined4 *)0x49210c;
  FUN_004646f0();
  puStack_b4 = (undefined4 *)*local_70;
  pcStack_b8 = (char *)0x49211a;
  FUN_004648b0();
  puStack_b4 = (undefined4 *)(*local_70 + 1);
  pcStack_b8 = (char *)0x49212b;
  FUN_004648b0();
  puStack_b4 = (undefined4 *)(*local_70 + 2);
  pcStack_b8 = (char *)0x49213c;
  FUN_004648b0();
  puStack_b4 = (undefined4 *)(*local_70 + 3);
  pcStack_b8 = (char *)0x49214d;
  FUN_004648b0();
  for (local_44 = 0; local_44 < param_3; local_44 = local_44 + 1) {
    puStack_b4 = (undefined4 *)(local_44 + param_2);
    pcStack_b8 = (char *)0x49217d;
    FUN_004648b0();
  }
  while( true ) {
    puStack_b4 = (undefined4 *)&local_3d;
    pcStack_b8 = (char *)0x49218b;
    cVar1 = FUN_00464a10();
    if (cVar1 == '\0') break;
    local_3c = local_1c;
    local_38 = local_18;
    local_34 = local_14;
    while( true ) {
      puStack_b4 = (undefined4 *)&local_21;
      pcStack_b8 = (char *)0x4921b6;
      cVar1 = FUN_00464a10();
      if (cVar1 == '\0') break;
      puStack_b4 = (undefined4 *)0x4921c9;
      FUN_00484b80();
      puStack_b4 = (undefined4 *)&local_3d;
      pcStack_b8 = (char *)0x4921d5;
      FUN_00484830();
      puStack_b4 = (undefined4 *)&local_21;
      pcStack_b8 = (char *)0x4921e1;
      FUN_00484830();
      if (param_7 == '\0') {
        local_5c = (undefined1 *)&pcStack_b8;
        local_9c = FUN_00484320(&param_2);
        local_a4 = (undefined4 *)FUN_004a1350(local_60);
        local_20 = *local_a4;
        puStack_b4 = (undefined4 *)0x4922c2;
        local_a0 = local_a4;
        FUN_004a20f0();
        puStack_b4 = (undefined4 *)0x4922ca;
        local_ac = FUN_004a20d0();
        local_8._0_1_ = 0xb;
        puStack_b4 = (undefined4 *)&DAT_007913ff;
        pcStack_b8 = &DAT_007913ff;
        local_a8 = local_ac;
        puStack_b4 = (undefined4 *)
                     FUN_004a2100(DAT_00791390,DAT_007913f4,&DAT_007913ff,&DAT_007913ff);
        pcStack_b8 = (char *)0x492315;
        local_61 = FUN_004a24d0();
        local_8 = CONCAT31(local_8._1_3_,9);
        puStack_b4 = (undefined4 *)0x492324;
        FUN_004a20f0();
        if (local_61 != '\0') {
          puStack_b4 = (undefined4 *)&DAT_007913ff;
          pcStack_b8 = &DAT_007913ff;
          FUN_004a2100(DAT_00791390,DAT_007913f4,&DAT_007913ff,&DAT_007913ff);
        }
        puStack_b4 = &local_28;
        pcStack_b8 = (char *)0x492361;
        cVar1 = FUN_004a2550();
        if (cVar1 == '\0') {
          puStack_b4 = &local_28;
          pcStack_b8 = (char *)0x492383;
          cVar1 = FUN_004a2340();
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
      else {
        puStack_b4 = (undefined4 *)0x0;
        pcStack_b8 = (char *)0x0;
        local_98 = (undefined4 *)FUN_0048cc10(local_58,&param_2,1,1,1,1,0);
        local_20 = *local_98;
        puStack_b4 = (undefined4 *)0x492224;
        FUN_004a20f0();
        puStack_b4 = &local_28;
        pcStack_b8 = (char *)0x492230;
        cVar1 = FUN_004a2440();
        if (cVar1 == '\0') {
          puStack_b4 = &local_28;
          pcStack_b8 = (char *)0x492252;
          cVar1 = FUN_004a2340();
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
    }
  }
  local_8._0_1_ = 8;
  puStack_b4 = (undefined4 *)0x4923bc;
  FUN_004646e0();
  local_8._0_1_ = 7;
  puStack_b4 = (undefined4 *)0x4923c8;
  FUN_004646e0();
  local_8._0_1_ = 6;
  puStack_b4 = (undefined4 *)0x4923d4;
  FUN_00464210();
  local_8._0_1_ = 5;
  puStack_b4 = (undefined4 *)0x4923e0;
  FUN_00464210();
  local_8._0_1_ = 4;
  puStack_b4 = (undefined4 *)0x4923ec;
  FUN_004a20f0();
  local_8._0_1_ = 3;
  puStack_b4 = (undefined4 *)0x4923f8;
  FUN_004a20f0();
  local_8 = (uint)local_8._1_3_ << 8;
  puStack_b4 = (undefined4 *)0x492404;
  FUN_00484470();
  local_8 = 0xffffffff;
  puStack_b4 = (undefined4 *)0x492413;
  FUN_00484470();
  ExceptionList = local_10;
  return;
}

