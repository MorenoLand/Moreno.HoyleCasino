// FUN_005095b0  005095b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_005095b0(int param_1)

{
  char cVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined1 local_bc;
  undefined1 local_bb;
  undefined1 local_ba [4];
  char local_b6;
  undefined1 local_b5;
  undefined1 local_b4;
  undefined1 local_b3;
  char local_ae;
  undefined1 local_ad;
  undefined1 local_ac;
  undefined1 local_ab;
  char local_a6;
  char local_a4;
  undefined1 local_a3;
  undefined1 local_a2;
  undefined1 local_a1;
  char local_9c;
  undefined1 local_9b;
  undefined1 local_9a;
  undefined1 local_99;
  char local_93;
  char local_91;
  undefined1 local_90 [8];
  undefined1 local_88 [4];
  short local_84;
  undefined1 local_80 [8];
  undefined1 local_78 [4];
  undefined1 local_74 [8];
  undefined1 local_6c [4];
  undefined1 local_68 [8];
  undefined1 local_60 [8];
  short local_58;
  short local_54;
  undefined1 local_50 [4];
  undefined1 local_4c [8];
  undefined1 local_44 [4];
  undefined1 local_40 [8];
  undefined1 local_38 [8];
  short local_30;
  short local_2c;
  double local_28;
  int local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a3195;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_18 = FUN_0047e420(DAT_00781870 ^ (uint)&stack0xfffffffc);
  (&DAT_00792990)[local_18] = (undefined2)param_1;
  DAT_007926f8 = FUN_0047e3b0();
  local_1c = FUN_004f6840();
  iVar3 = FUN_004c6a70();
  local_14 = FUN_0047bc20();
  local_14 = iVar3 / local_14;
  if (local_14 < 1) {
    FUN_005e9f20("lBankChips > 0L","..\\Casino\\PokerStudAI.cpp",0xd16);
  }
  if (local_1c < 1) {
    FUN_005e9f20("lMatchChips > 0L","..\\Casino\\PokerStudAI.cpp",0xd17);
  }
  local_28 = 1.0;
  if (local_14 <= local_1c) {
    local_28 = (double)local_14 / (double)local_1c;
  }
  local_28 = local_28 / _DAT_006be728;
  if (param_1 == 3) {
    local_2c = 0;
    for (local_30 = 0; iVar5 = (int)local_30, iVar3 = FUN_0047f950(), iVar5 < iVar3;
        local_30 = local_30 + 1) {
      if (local_30 != local_18) {
        FUN_0047e390((int)local_30);
        iVar3 = FUN_004c7010();
        if (iVar3 == 1) {
          puVar6 = local_38;
          FUN_0047e390((int)local_30);
          FUN_004c84a0(puVar6);
          local_8 = 0;
          uVar4 = FUN_00464130(DAT_0079077c,DAT_00790780);
          local_8._0_1_ = 1;
          local_91 = FUN_00484ba0(uVar4);
          local_8 = (uint)local_8._1_3_ << 8;
          FUN_00464210();
          if (local_91 != '\0') {
            local_2c = local_2c + 1;
          }
          local_8 = 0xffffffff;
          FUN_00484470();
        }
      }
    }
    if (local_2c == 0) {
      local_99 = 1;
    }
    else if (local_2c == 1) {
      FUN_004c80b0(local_40);
      local_8 = 2;
      FUN_00485940(local_44,1,1,1,1,0,0,0);
      local_8._0_1_ = 3;
      FUN_004a20d0();
      local_8._0_1_ = 4;
      uVar4 = FUN_004a2100(DAT_007913b0,DAT_007913c8,&DAT_007913ff,&DAT_007913ff,&DAT_007913ff,
                           &DAT_007913ff);
      local_93 = FUN_004a24d0(uVar4);
      local_8._0_1_ = 3;
      FUN_004a20f0();
      if (local_93 == '\0') {
        uVar4 = FUN_00686cc0();
        iVar3 = FUN_0062fbf0(uVar4);
        sVar2 = FUN_004d6db0();
        if (iVar3 < sVar2) {
          local_9a = 1;
          local_8 = CONCAT31(local_8._1_3_,2);
          FUN_004a20f0();
          local_8 = 0xffffffff;
          FUN_00484470();
          local_99 = local_9a;
        }
        else {
          local_9b = 0;
          local_8 = CONCAT31(local_8._1_3_,2);
          FUN_004a20f0();
          local_8 = 0xffffffff;
          FUN_00484470();
          local_99 = local_9b;
        }
      }
      else {
        local_99 = 1;
        local_8 = CONCAT31(local_8._1_3_,2);
        FUN_004a20f0();
        local_8 = 0xffffffff;
        FUN_00484470();
      }
    }
    else {
      FUN_004c80b0(local_4c);
      local_8 = 5;
      FUN_00485940(local_50,1,1,1,1,0,0,0);
      local_8._0_1_ = 6;
      FUN_004a20d0();
      local_8._0_1_ = 7;
      uVar4 = FUN_004a2100(DAT_007913b0,DAT_007913c8,&DAT_007913ff,&DAT_007913ff,&DAT_007913ff,
                           &DAT_007913ff);
      local_9c = FUN_004a24d0(uVar4);
      local_8._0_1_ = 6;
      FUN_004a20f0();
      if (local_9c == '\0') {
        uVar4 = FUN_00686cc0();
        iVar3 = FUN_0062fbf0(uVar4);
        sVar2 = FUN_004d6db0();
        if (iVar3 < sVar2) {
          local_a2 = 1;
          local_8 = CONCAT31(local_8._1_3_,5);
          FUN_004a20f0();
          local_8 = 0xffffffff;
          FUN_00484470();
          local_99 = local_a2;
        }
        else {
          local_a3 = 0;
          local_8 = CONCAT31(local_8._1_3_,5);
          FUN_004a20f0();
          local_8 = 0xffffffff;
          FUN_00484470();
          local_99 = local_a3;
        }
      }
      else {
        local_a1 = 1;
        local_8 = CONCAT31(local_8._1_3_,5);
        FUN_004a20f0();
        local_8 = 0xffffffff;
        FUN_00484470();
        local_99 = local_a1;
      }
    }
  }
  else if (param_1 == 4) {
    local_54 = 0;
    for (local_58 = 0; iVar5 = (int)local_58, iVar3 = FUN_0047f950(), iVar5 < iVar3;
        local_58 = local_58 + 1) {
      if (local_58 != local_18) {
        FUN_0047e390((int)local_58);
        iVar3 = FUN_004c7010();
        if (iVar3 == 1) {
          puVar6 = local_60;
          FUN_0047e390((int)local_58);
          FUN_004c84a0(puVar6);
          local_8 = 8;
          uVar4 = FUN_00464130(DAT_0079077c,DAT_00790780);
          local_8._0_1_ = 9;
          local_a4 = FUN_00484ba0(uVar4);
          local_8 = CONCAT31(local_8._1_3_,8);
          FUN_00464210();
          if (local_a4 != '\0') {
            local_54 = local_54 + 1;
          }
          local_8 = 0xffffffff;
          FUN_00484470();
        }
      }
    }
    if (local_54 == 0) {
      local_99 = 1;
    }
    else if (local_54 == 1) {
      FUN_004c80b0(local_68);
      local_8 = 10;
      FUN_00485940(local_6c,1,1,1,1,0,0,0);
      local_8._0_1_ = 0xb;
      FUN_004a20d0();
      local_8._0_1_ = 0xc;
      uVar4 = FUN_004a2100(DAT_00791418,DAT_00791410,&DAT_007913ff,&DAT_007913ff,&DAT_007913ff,
                           &DAT_007913ff);
      local_a6 = FUN_004a24d0(uVar4);
      local_8._0_1_ = 0xb;
      FUN_004a20f0();
      if (local_a6 == '\0') {
        uVar4 = FUN_00686cc0();
        iVar3 = FUN_0062fbf0(uVar4);
        sVar2 = FUN_004d6db0();
        if (iVar3 < sVar2) {
          local_ac = 1;
          local_8 = CONCAT31(local_8._1_3_,10);
          FUN_004a20f0();
          local_8 = 0xffffffff;
          FUN_00484470();
          local_99 = local_ac;
        }
        else {
          local_ad = 0;
          local_8 = CONCAT31(local_8._1_3_,10);
          FUN_004a20f0();
          local_8 = 0xffffffff;
          FUN_00484470();
          local_99 = local_ad;
        }
      }
      else {
        local_ab = 1;
        local_8 = CONCAT31(local_8._1_3_,10);
        FUN_004a20f0();
        local_8 = 0xffffffff;
        FUN_00484470();
        local_99 = local_ab;
      }
    }
    else {
      FUN_004c80b0(local_74);
      local_8 = 0xd;
      FUN_00485940(local_78,1,1,1,1,0,0,0);
      local_8._0_1_ = 0xe;
      FUN_004a20d0();
      local_8._0_1_ = 0xf;
      uVar4 = FUN_004a2100(DAT_00791418,DAT_007913c8,&DAT_007913ff,&DAT_007913ff,&DAT_007913ff,
                           &DAT_007913ff);
      local_ae = FUN_004a24d0(uVar4);
      local_8._0_1_ = 0xe;
      FUN_004a20f0();
      if (local_ae == '\0') {
        uVar4 = FUN_00686cc0();
        iVar3 = FUN_0062fbf0(uVar4);
        sVar2 = FUN_004d6db0();
        if (iVar3 < sVar2) {
          local_b4 = 1;
          local_8 = CONCAT31(local_8._1_3_,0xd);
          FUN_004a20f0();
          local_8 = 0xffffffff;
          FUN_00484470();
          local_99 = local_b4;
        }
        else {
          local_b5 = 0;
          local_8 = CONCAT31(local_8._1_3_,0xd);
          FUN_004a20f0();
          local_8 = 0xffffffff;
          FUN_00484470();
          local_99 = local_b5;
        }
      }
      else {
        local_b3 = 1;
        local_8 = CONCAT31(local_8._1_3_,0xd);
        FUN_004a20f0();
        local_8 = 0xffffffff;
        FUN_00484470();
        local_99 = local_b3;
      }
    }
  }
  else {
    FUN_004c80b0(local_80);
    local_8 = 0x10;
    FUN_00485940(local_88,1,1,1,1,0,0,0);
    local_8._0_1_ = 0x11;
    for (local_84 = 0; iVar5 = (int)local_84, iVar3 = FUN_0047f950(), iVar5 < iVar3;
        local_84 = local_84 + 1) {
      if (local_84 != local_18) {
        FUN_0047e390((int)local_84);
        iVar3 = FUN_004c7010();
        if (iVar3 == 1) {
          puVar6 = local_90;
          FUN_0047e390((int)local_84);
          FUN_004c84a0(puVar6);
          local_8._0_1_ = 0x12;
          uVar4 = FUN_00485940(local_ba,1,1,1,1,0,0,0);
          local_8._0_1_ = 0x13;
          local_b6 = FUN_004a2550(uVar4);
          local_8._0_1_ = 0x12;
          FUN_004a20f0();
          if (local_b6 != '\0') {
            local_8._0_1_ = 0x11;
            FUN_00484470();
            break;
          }
          local_8._0_1_ = 0x11;
          FUN_00484470();
        }
      }
    }
    iVar5 = (int)local_84;
    iVar3 = FUN_0047f950();
    if (iVar5 < iVar3) {
      local_bb = 0;
      local_8 = CONCAT31(local_8._1_3_,0x10);
      FUN_004a20f0();
      local_8 = 0xffffffff;
      FUN_00484470();
      local_99 = local_bb;
    }
    else {
      uVar4 = DAT_00791398;
      FUN_004a2160(&local_bc);
      cVar1 = FUN_004a1f00(uVar4);
      if (cVar1 == '\0') {
        sVar2 = FUN_004d6db0();
        iVar3 = FUN_0062fbf0((int)((int)sVar2 + ((int)sVar2 >> 0x1f & 3U)) >> 2);
        iVar5 = FUN_0062fbf0(0xd);
        if (((double)(iVar3 + 0x46 + iVar5 * 5) / _DAT_006b4b00) *
            *(double *)(&DAT_00792df8 + local_18 * 8) <= local_28 / _PTR_006b3740) {
          local_8 = CONCAT31(local_8._1_3_,0x10);
          FUN_004a20f0();
          local_8 = 0xffffffff;
          FUN_00484470();
          local_99 = 0;
        }
        else {
          local_8 = CONCAT31(local_8._1_3_,0x10);
          FUN_004a20f0();
          local_8 = 0xffffffff;
          FUN_00484470();
          local_99 = 1;
        }
      }
      else {
        local_8 = CONCAT31(local_8._1_3_,0x10);
        FUN_004a20f0();
        local_8 = 0xffffffff;
        FUN_00484470();
        local_99 = 1;
      }
    }
  }
  ExceptionList = local_10;
  return local_99;
}

