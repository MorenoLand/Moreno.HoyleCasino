// FUN_00477f20  00477f20

int FUN_00477f20(void)

{
  char cVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 local_80;
  undefined1 local_7f [6];
  char local_79;
  undefined1 local_78;
  undefined1 local_77 [6];
  char local_71;
  undefined4 local_70;
  char local_69;
  undefined1 local_68 [8];
  undefined1 local_60 [4];
  undefined1 local_5c [8];
  undefined1 local_54 [7];
  char local_4d;
  undefined1 local_4c [8];
  int local_44;
  undefined4 local_40;
  char local_39;
  undefined1 local_38 [8];
  undefined1 local_30 [4];
  undefined1 local_2c [8];
  undefined1 local_24 [7];
  char local_1d;
  undefined1 local_1c [8];
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0069fd97;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = FUN_0047e3b0(DAT_00781870 ^ (uint)&stack0xfffffffc);
  iVar3 = FUN_004c6cb0();
  if (iVar3 == 2) {
    iVar3 = FUN_004c7010();
    if (iVar3 != 1) {
      FUN_005e9f20("currentPokerPlayer->GetPlayerStatus() == ACTIVE",
                   "..\\Casino\\PokerDrawScript.cpp",0x202);
    }
    iVar3 = FUN_0047e190();
    if (iVar3 != 0) {
      FUN_005e9f20("pokerGame->GetGameNumber() == DRAW_5_CARD","..\\Casino\\PokerDrawScript.cpp",
                   0x204);
    }
    iVar3 = FUN_0047e280();
    if (iVar3 == 0) {
      DAT_00791318 = FUN_0046cd10(DAT_007912e9 == '\0',DAT_00791308,DAT_007912f4,DAT_007912f0);
      if ((DAT_007912e9 == '\0') && (DAT_00791318 == 0)) {
        local_1d = '\0';
        FUN_004c7c40(local_1c);
        local_8 = 0;
        sVar2 = FUN_00484bf0();
        if (3 < sVar2) {
          local_1d = '\x01';
        }
        sVar2 = FUN_00485000();
        if (3 < sVar2) {
          local_1d = '\x01';
        }
        if (local_1d != '\0') {
          cVar1 = FUN_004f6640();
          if (cVar1 == '\0') {
            DAT_00791318 = 3;
          }
          else {
            DAT_00791318 = 1;
          }
        }
        local_8 = 0xffffffff;
        FUN_00484470();
      }
      if (((DAT_007912e9 == '\0') && (iVar3 = FUN_0047d7b0(), iVar3 == 1)) && (DAT_00791318 == 2)) {
        FUN_004c7c40(local_2c);
        local_8 = 1;
        FUN_00485940(local_24,1,1,1,1,0,0,0);
        local_8._0_1_ = 2;
        FUN_004a20d0();
        local_8._0_1_ = 3;
        uVar4 = FUN_004a2100(DAT_007913b0,DAT_00791400,&DAT_007913ff,&DAT_007913ff,&DAT_007913ff,
                             &DAT_007913ff);
        local_71 = FUN_004a2550(uVar4);
        local_8._0_1_ = 2;
        FUN_004a20f0();
        if (local_71 != '\0') {
          DAT_00791318 = 1;
        }
        local_8 = CONCAT31(local_8._1_3_,1);
        FUN_004a20f0();
        local_8 = 0xffffffff;
        FUN_00484470();
      }
    }
    else {
      DAT_00791318 = FUN_0046ef30(DAT_007912e9 == '\0',DAT_00791308,DAT_007912f4);
      if ((DAT_007912e9 == '\0') && (DAT_00791318 == 0)) {
        local_39 = '\0';
        FUN_004c7c40(local_38);
        local_8 = 4;
        FUN_00485940(local_30,1,1,1,1,0,0,0);
        local_8 = CONCAT31(local_8._1_3_,5);
        uVar4 = DAT_00791390;
        FUN_004a2160(local_77);
        cVar1 = FUN_004a1e10(uVar4);
        if ((cVar1 != '\0') && (cVar1 = FUN_00485320(9,1), cVar1 != '\0')) {
          local_39 = '\x01';
        }
        uVar4 = DAT_007913b0;
        FUN_004a2160(&local_78);
        cVar1 = FUN_004a1e10(uVar4);
        if ((cVar1 != '\0') && (cVar1 = FUN_00485320(9,0), cVar1 != '\0')) {
          local_39 = '\x01';
        }
        if (local_39 != '\0') {
          cVar1 = FUN_004f6640();
          if (cVar1 == '\0') {
            DAT_00791318 = 3;
          }
          else {
            DAT_00791318 = 1;
          }
        }
        local_8 = CONCAT31(local_8._1_3_,4);
        FUN_004a20f0();
        local_8 = 0xffffffff;
        FUN_00484470();
      }
    }
    iVar3 = FUN_0047d6b0();
    if ((iVar3 == 1) && ((DAT_00791318 == 2 || (DAT_00791318 == 4)))) {
      if (DAT_007912e9 == '\0') {
        uVar4 = FUN_0047bda0();
        uVar5 = FUN_0047bd60(uVar4);
        local_40 = FUN_004c79f0(uVar5,uVar4);
      }
      else {
        uVar4 = FUN_0047bde0();
        uVar5 = FUN_0047bd60(uVar4);
        local_40 = FUN_004c79f0(uVar5,uVar4);
      }
      FUN_004c79b0(local_40);
    }
    local_44 = 5;
  }
  else {
    iVar3 = FUN_004c6cb0();
    if (iVar3 == 1) {
      iVar3 = FUN_004c7010();
      if (iVar3 != 1) {
        FUN_005e9f20("currentPokerPlayer->GetPlayerStatus() == ACTIVE",
                     "..\\Casino\\PokerDrawScript.cpp",0x259);
      }
      iVar3 = FUN_0047e190();
      if (iVar3 != 0) {
        FUN_005e9f20("pokerGame->GetGameNumber() == DRAW_5_CARD","..\\Casino\\PokerDrawScript.cpp",
                     0x25a);
      }
      iVar3 = FUN_0047e280();
      if (iVar3 == 0) {
        local_44 = FUN_0046cd10(DAT_007912e9 == '\0',DAT_00791308,DAT_007912f4,DAT_007912f0);
        if ((DAT_007912e9 == '\0') && (local_44 == 0)) {
          local_4d = '\0';
          FUN_004c7c40(local_4c);
          local_8 = 6;
          sVar2 = FUN_00484bf0();
          if (3 < sVar2) {
            local_4d = '\x01';
          }
          sVar2 = FUN_00485000();
          if (3 < sVar2) {
            local_4d = '\x01';
          }
          if (local_4d != '\0') {
            cVar1 = FUN_004f6640();
            if (cVar1 == '\0') {
              local_44 = 3;
            }
            else {
              local_44 = 1;
            }
          }
          local_8 = 0xffffffff;
          FUN_00484470();
        }
        if (((DAT_007912e9 == '\0') && (iVar3 = FUN_0047d7b0(), iVar3 == 1)) && (local_44 == 2)) {
          FUN_004c7c40(local_5c);
          local_8 = 7;
          FUN_00485940(local_54,1,1,1,1,0,0,0);
          local_8._0_1_ = 8;
          FUN_004a20d0();
          local_8._0_1_ = 9;
          uVar4 = FUN_004a2100(DAT_007913b0,DAT_00791400,&DAT_007913ff,&DAT_007913ff,&DAT_007913ff,
                               &DAT_007913ff);
          local_79 = FUN_004a2550(uVar4);
          local_8._0_1_ = 8;
          FUN_004a20f0();
          if (local_79 != '\0') {
            local_44 = 1;
          }
          local_8 = CONCAT31(local_8._1_3_,7);
          FUN_004a20f0();
          local_8 = 0xffffffff;
          FUN_00484470();
        }
      }
      else {
        local_44 = FUN_0046ef30(DAT_007912e9 == '\0',DAT_00791308,DAT_007912f4);
        if ((DAT_007912e9 == '\0') && (local_44 == 0)) {
          local_69 = '\0';
          FUN_004c7c40(local_68);
          local_8 = 10;
          FUN_00485940(local_60,1,1,1,1,0,0,0);
          local_8 = CONCAT31(local_8._1_3_,0xb);
          uVar4 = DAT_00791390;
          FUN_004a2160(local_7f);
          cVar1 = FUN_004a1e10(uVar4);
          if ((cVar1 != '\0') && (cVar1 = FUN_00485320(9,1), cVar1 != '\0')) {
            local_69 = '\x01';
          }
          uVar4 = DAT_007913b0;
          FUN_004a2160(&local_80);
          cVar1 = FUN_004a1e10(uVar4);
          if ((cVar1 != '\0') && (cVar1 = FUN_00485320(9,0), cVar1 != '\0')) {
            local_69 = '\x01';
          }
          if (local_69 != '\0') {
            cVar1 = FUN_004f6640();
            if (cVar1 == '\0') {
              local_44 = 3;
            }
            else {
              local_44 = 1;
            }
          }
          local_8 = CONCAT31(local_8._1_3_,10);
          FUN_004a20f0();
          local_8 = 0xffffffff;
          FUN_00484470();
        }
      }
      iVar3 = FUN_0047d6b0();
      if ((iVar3 == 1) && ((local_44 == 2 || (local_44 == 4)))) {
        if (DAT_007912e9 == '\0') {
          uVar4 = FUN_0047bda0();
          uVar5 = FUN_0047bd60(uVar4);
          local_70 = FUN_004c79f0(uVar5,uVar4);
        }
        else {
          uVar4 = FUN_0047bde0();
          uVar5 = FUN_0047bd60(uVar4);
          local_70 = FUN_004c79f0(uVar5,uVar4);
        }
        FUN_004c79b0(local_70);
      }
      if ((local_44 == 0) && (cVar1 = FUN_004c6eb0(), cVar1 != '\0')) {
        cVar1 = FUN_004f6640();
        if (cVar1 == '\0') {
          local_44 = 3;
        }
        else {
          local_44 = 1;
        }
      }
      if (local_44 == 0) {
        iVar3 = FUN_004c6e30();
        iVar6 = FUN_0062fbf0(100);
        if (iVar6 < iVar3) {
          cVar1 = FUN_004f6640();
          if (cVar1 == '\0') {
            local_44 = 3;
          }
          else {
            local_44 = 1;
          }
        }
      }
    }
    else {
      iVar3 = FUN_004c6cb0();
      if (iVar3 == 3) {
        FUN_005e9f20(&DAT_006b2b64,"..\\Casino\\PokerDrawScript.cpp",0x2e5);
      }
      else {
        FUN_005e9f20(&DAT_006b2b64,"..\\Casino\\PokerDrawScript.cpp",0x2e8);
      }
      local_44 = 0;
    }
  }
  ExceptionList = local_10;
  return local_44;
}

