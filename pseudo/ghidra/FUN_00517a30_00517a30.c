// FUN_00517a30  00517a30

int FUN_00517a30(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_18;
  
  FUN_0047e3b0();
  iVar2 = FUN_0047e190();
  iVar3 = FUN_004c6cb0();
  if (iVar3 == 2) {
    iVar3 = FUN_004c7010();
    if (iVar3 != 1) {
      FUN_005e9f20("currentPokerPlayer->GetPlayerStatus() == ACTIVE",
                   "..\\Casino\\PokerStudScript.cpp",0x246);
    }
    if (iVar2 == 1) {
      iVar2 = FUN_0047e280();
      if ((iVar2 == 0) && (iVar2 = FUN_0047d770(), iVar2 == 0)) {
        uVar4 = FUN_0047bca0();
        DAT_00793100 = FUN_004fe290(DAT_00793078,DAT_00793070,DAT_00793058,uVar4);
      }
      else {
        uVar4 = FUN_0047bca0();
        DAT_00793100 = FUN_00502ed0(DAT_00793078,DAT_00793070,DAT_00793058,uVar4);
      }
    }
    else if (iVar2 == 2) {
      uVar4 = FUN_0047bca0();
      DAT_00793100 = FUN_0050a190(DAT_00793078,DAT_00793070,DAT_00793058,uVar4);
    }
    else if (iVar2 == 7) {
      DAT_00793100 = FUN_0050c6c0(DAT_00793078,DAT_00793070,DAT_00793058);
    }
    else {
      FUN_005e9f20(&DAT_006b2b64,"..\\Casino\\PokerStudScript.cpp",600);
    }
    iVar2 = FUN_0047d6b0();
    if ((iVar2 == 1) && ((DAT_00793100 == 2 || (DAT_00793100 == 4)))) {
      cVar1 = FUN_00516dd0();
      if (cVar1 == '\0') {
        local_34 = FUN_0047bda0();
      }
      else {
        local_34 = FUN_0047bde0();
      }
      uVar4 = FUN_0047bd60(local_34);
      uVar4 = FUN_004c79f0(uVar4,local_34);
      FUN_004c79b0(uVar4);
    }
    local_18 = 5;
  }
  else {
    iVar3 = FUN_004c6cb0();
    if (iVar3 == 1) {
      iVar3 = FUN_004c7010();
      if (iVar3 != 1) {
        FUN_005e9f20("currentPokerPlayer->GetPlayerStatus() == ACTIVE",
                     "..\\Casino\\PokerStudScript.cpp",0x266);
      }
      local_18 = 0;
      if (iVar2 == 1) {
        iVar2 = FUN_0047e280();
        if ((iVar2 == 0) && (iVar2 = FUN_0047d770(), iVar2 == 0)) {
          uVar4 = FUN_0047bca0();
          local_18 = FUN_004fe290(DAT_00793078,DAT_00793070,DAT_00793058,uVar4);
        }
        else {
          uVar4 = FUN_0047bca0();
          local_18 = FUN_00502ed0(DAT_00793078,DAT_00793070,DAT_00793058,uVar4);
        }
        iVar2 = FUN_0047d6b0();
        if ((iVar2 == 1) && ((local_18 == 2 || (local_18 == 4)))) {
          cVar1 = FUN_00516dd0();
          if (cVar1 == '\0') {
            local_38 = FUN_0047bda0();
          }
          else {
            local_38 = FUN_0047bde0();
          }
          uVar4 = FUN_0047bd60(local_38);
          uVar4 = FUN_004c79f0(uVar4,local_38);
          FUN_004c79b0(uVar4);
        }
      }
      else if (iVar2 == 2) {
        uVar4 = FUN_0047bca0();
        local_18 = FUN_0050a190(DAT_00793078,DAT_00793070,DAT_00793058,uVar4);
        iVar2 = FUN_0047d6b0();
        if ((iVar2 == 1) && ((local_18 == 2 || (local_18 == 4)))) {
          cVar1 = FUN_00516dd0();
          if (cVar1 == '\0') {
            local_3c = FUN_0047bda0();
          }
          else {
            local_3c = FUN_0047bde0();
          }
          uVar4 = FUN_0047bd60(local_3c);
          uVar4 = FUN_004c79f0(uVar4,local_3c);
          FUN_004c79b0(uVar4);
        }
      }
      else if (iVar2 == 7) {
        local_18 = FUN_0050c6c0(DAT_00793078,DAT_00793070,DAT_00793058);
        iVar2 = FUN_0047d6b0();
        if ((iVar2 == 1) && ((local_18 == 2 || (local_18 == 4)))) {
          cVar1 = FUN_00516dd0();
          if (cVar1 == '\0') {
            local_40 = FUN_0047bda0();
          }
          else {
            local_40 = FUN_0047bde0();
          }
          uVar4 = FUN_0047bd60(local_40);
          uVar4 = FUN_004c79f0(uVar4,local_40);
          FUN_004c79b0(uVar4);
        }
      }
      else {
        FUN_005e9f20(&DAT_006b2b64,"..\\Casino\\PokerStudScript.cpp",0x291);
      }
      if ((local_18 == 0) && (cVar1 = FUN_004c6eb0(), cVar1 != '\0')) {
        cVar1 = FUN_004f6640();
        if (cVar1 == '\0') {
          local_18 = 3;
        }
        else {
          local_18 = 1;
        }
      }
      if (local_18 == 0) {
        iVar2 = FUN_004c6e30();
        iVar3 = FUN_0062fbf0(100);
        if (iVar3 < iVar2) {
          cVar1 = FUN_004f6640();
          if (cVar1 == '\0') {
            local_18 = 3;
          }
          else {
            local_18 = 1;
          }
        }
      }
    }
    else {
      iVar2 = FUN_004c6cb0();
      if (iVar2 == 3) {
        FUN_005e9f20(&DAT_006b2b64,"..\\Casino\\PokerStudScript.cpp",0x2d3);
      }
      else {
        FUN_005e9f20(&DAT_006b2b64,"..\\Casino\\PokerStudScript.cpp",0x2d6);
      }
      local_18 = 0;
    }
  }
  return local_18;
}

