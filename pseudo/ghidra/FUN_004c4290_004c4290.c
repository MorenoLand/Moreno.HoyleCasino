// FUN_004c4290  004c4290

int FUN_004c4290(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  
  FUN_0047e3b0();
  iVar2 = FUN_004c6cb0();
  if (iVar2 == 2) {
    FUN_0047e3b0();
    iVar2 = FUN_004c7010();
    if (iVar2 != 1) {
      FUN_005e9f20("pokerGame->GetCurrentPokerPlayer()->GetPlayerStatus() == ACTIVE",
                   "..\\Casino\\PokerHoldScript.cpp",0x213);
    }
    iVar2 = FUN_0047e190();
    if (iVar2 == 3) {
      DAT_00791e7c = FUN_004a2590(DAT_00791e74,DAT_00791e50,DAT_00791e40);
    }
    else {
      iVar2 = FUN_0047e190();
      if (iVar2 == 4) {
        iVar2 = FUN_0047e280();
        if (iVar2 == 0) {
          DAT_00791e7c = FUN_004a4450(DAT_00791e74,DAT_00791e50,DAT_00791e40);
        }
        else {
          iVar2 = FUN_0047e280();
          if (iVar2 != 2) {
            FUN_005e9f20("pokerGame->GetHighlowType() == HIGHLOW","..\\Casino\\PokerHoldScript.cpp",
                         0x21f);
          }
          iVar2 = FUN_0047d7f0();
          if (iVar2 != 1) {
            FUN_005e9f20("pokerGame->GetHighlowRules() == NODECLARE_EIGHTSORBETTER",
                         "..\\Casino\\PokerHoldScript.cpp",0x220);
          }
          DAT_00791e7c = FUN_004a6760(DAT_00791e74,DAT_00791e50,DAT_00791e40);
        }
      }
      else {
        iVar2 = FUN_0047e190();
        if (iVar2 == 5) {
          DAT_00791e7c = FUN_004a8bb0(DAT_00791e74,DAT_00791e50,DAT_00791e40);
        }
        else {
          iVar2 = FUN_0047e190();
          if (iVar2 == 6) {
            DAT_00791e7c = FUN_004b0350(DAT_00791e74,DAT_00791e50,DAT_00791e40);
          }
          else {
            FUN_005e9f20(&DAT_006b2b64,"..\\Casino\\PokerHoldScript.cpp",0x229);
          }
        }
      }
    }
    iVar2 = FUN_0047d6b0();
    if ((iVar2 == 1) && ((DAT_00791e7c == 2 || (DAT_00791e7c == 4)))) {
      cVar1 = FUN_004b7d90();
      if (cVar1 == '\0') {
        uVar3 = FUN_0047bda0();
        uVar4 = FUN_0047bd60(uVar3);
        FUN_0047e3b0(uVar4);
        local_8 = FUN_004c79f0(uVar4,uVar3);
      }
      else {
        uVar3 = FUN_0047bde0();
        uVar4 = FUN_0047bd60(uVar3);
        FUN_0047e3b0(uVar4);
        local_8 = FUN_004c79f0(uVar4,uVar3);
      }
      FUN_0047e3b0(local_8);
      FUN_004c79b0(local_8);
    }
    local_c = 5;
  }
  else {
    FUN_0047e3b0();
    iVar2 = FUN_004c6cb0();
    if (iVar2 == 1) {
      FUN_0047e3b0();
      iVar2 = FUN_004c7010();
      if (iVar2 != 1) {
        FUN_005e9f20("pokerGame->GetCurrentPokerPlayer()->GetPlayerStatus() == ACTIVE",
                     "..\\Casino\\PokerHoldScript.cpp",0x23e);
      }
      local_c = 0;
      iVar2 = FUN_0047e190();
      if (iVar2 == 3) {
        local_c = FUN_004a2590(DAT_00791e74,DAT_00791e50,DAT_00791e40);
        iVar2 = FUN_0047d6b0();
        if ((iVar2 == 1) && ((local_c == 2 || (local_c == 4)))) {
          cVar1 = FUN_004b7d90();
          if (cVar1 == '\0') {
            uVar3 = FUN_0047bda0();
            uVar4 = FUN_0047bd60(uVar3);
            FUN_0047e3b0(uVar4);
            local_10 = FUN_004c79f0(uVar4,uVar3);
          }
          else {
            uVar3 = FUN_0047bde0();
            uVar4 = FUN_0047bd60(uVar3);
            FUN_0047e3b0(uVar4);
            local_10 = FUN_004c79f0(uVar4,uVar3);
          }
          FUN_0047e3b0(local_10);
          FUN_004c79b0(local_10);
        }
      }
      else {
        iVar2 = FUN_0047e190();
        if (iVar2 == 4) {
          iVar2 = FUN_0047e280();
          if (iVar2 == 0) {
            local_c = FUN_004a4450(DAT_00791e74,DAT_00791e50,DAT_00791e40);
          }
          else {
            iVar2 = FUN_0047e280();
            if (iVar2 != 2) {
              FUN_005e9f20("pokerGame->GetHighlowType() == HIGHLOW",
                           "..\\Casino\\PokerHoldScript.cpp",0x25a);
            }
            iVar2 = FUN_0047d7f0();
            if (iVar2 != 1) {
              FUN_005e9f20("pokerGame->GetHighlowRules() == NODECLARE_EIGHTSORBETTER",
                           "..\\Casino\\PokerHoldScript.cpp",0x25b);
            }
            local_c = FUN_004a6760(DAT_00791e74,DAT_00791e50,DAT_00791e40);
          }
          iVar2 = FUN_0047d6b0();
          if ((iVar2 == 1) && ((local_c == 2 || (local_c == 4)))) {
            cVar1 = FUN_004b7d90();
            if (cVar1 == '\0') {
              uVar3 = FUN_0047bda0();
              uVar4 = FUN_0047bd60(uVar3);
              FUN_0047e3b0(uVar4);
              local_14 = FUN_004c79f0(uVar4,uVar3);
            }
            else {
              uVar3 = FUN_0047bde0();
              uVar4 = FUN_0047bd60(uVar3);
              FUN_0047e3b0(uVar4);
              local_14 = FUN_004c79f0(uVar4,uVar3);
            }
            FUN_0047e3b0(local_14);
            FUN_004c79b0(local_14);
          }
        }
        else {
          iVar2 = FUN_0047e190();
          if (iVar2 == 5) {
            local_c = FUN_004a8bb0(DAT_00791e74,DAT_00791e50,DAT_00791e40);
            iVar2 = FUN_0047d6b0();
            if ((iVar2 == 1) && ((local_c == 2 || (local_c == 4)))) {
              cVar1 = FUN_004b7d90();
              if (cVar1 == '\0') {
                uVar3 = FUN_0047bda0();
                uVar4 = FUN_0047bd60(uVar3);
                FUN_0047e3b0(uVar4);
                local_18 = FUN_004c79f0(uVar4,uVar3);
              }
              else {
                uVar3 = FUN_0047bde0();
                uVar4 = FUN_0047bd60(uVar3);
                FUN_0047e3b0(uVar4);
                local_18 = FUN_004c79f0(uVar4,uVar3);
              }
              FUN_0047e3b0(local_18);
              FUN_004c79b0(local_18);
            }
          }
          else {
            iVar2 = FUN_0047e190();
            if (iVar2 == 6) {
              local_c = FUN_004b0350(DAT_00791e74,DAT_00791e50,DAT_00791e40);
              iVar2 = FUN_0047d6b0();
              if ((iVar2 == 1) && ((local_c == 2 || (local_c == 4)))) {
                cVar1 = FUN_004b7d90();
                if (cVar1 == '\0') {
                  uVar3 = FUN_0047bda0();
                  uVar4 = FUN_0047bd60(uVar3);
                  FUN_0047e3b0(uVar4);
                  local_1c = FUN_004c79f0(uVar4,uVar3);
                }
                else {
                  uVar3 = FUN_0047bde0();
                  uVar4 = FUN_0047bd60(uVar3);
                  FUN_0047e3b0(uVar4);
                  local_1c = FUN_004c79f0(uVar4,uVar3);
                }
                FUN_0047e3b0(local_1c);
                FUN_004c79b0(local_1c);
              }
            }
            else {
              FUN_005e9f20(&DAT_006b2b64,"..\\Casino\\PokerHoldScript.cpp",0x289);
            }
          }
        }
      }
      if (local_c == 0) {
        FUN_0047e3b0();
        cVar1 = FUN_004c6eb0();
        if (cVar1 != '\0') {
          cVar1 = FUN_004f6640();
          if (cVar1 == '\0') {
            local_c = 3;
          }
          else {
            local_c = 1;
          }
        }
      }
      if (local_c == 0) {
        FUN_0047e3b0();
        iVar2 = FUN_004c6e30();
        iVar5 = FUN_0062fbf0(100);
        if (iVar5 < iVar2) {
          cVar1 = FUN_004f6640();
          if (cVar1 == '\0') {
            local_c = 3;
          }
          else {
            local_c = 1;
          }
        }
      }
    }
    else {
      FUN_0047e3b0();
      iVar2 = FUN_004c6cb0();
      if (iVar2 == 3) {
        FUN_005e9f20(&DAT_006b2b64,"..\\Casino\\PokerHoldScript.cpp",0x2c7);
      }
      else {
        FUN_005e9f20(&DAT_006b2b64,"..\\Casino\\PokerHoldScript.cpp",0x2ca);
      }
      local_c = 0;
    }
  }
  return local_c;
}

