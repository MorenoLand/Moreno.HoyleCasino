// FUN_0049b360  0049b360

void __fastcall FUN_0049b360(int param_1)

{
  char cVar1;
  short sVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined1 local_b9;
  undefined2 local_b8;
  undefined2 local_b6;
  undefined1 local_b3;
  undefined2 local_b2;
  undefined2 local_b0;
  undefined2 local_ae;
  undefined1 local_ab;
  undefined1 local_aa;
  undefined1 local_a9;
  undefined1 local_a8;
  undefined1 local_a7;
  undefined2 local_a6;
  undefined2 local_a4;
  undefined2 local_a2;
  undefined1 local_a0;
  undefined1 local_9f;
  undefined1 local_9e;
  undefined1 local_9d;
  undefined1 local_9c;
  undefined1 local_9b;
  undefined1 local_9a;
  undefined1 local_99;
  undefined1 local_98;
  undefined1 local_97;
  undefined1 local_96;
  undefined1 local_95;
  undefined1 local_94;
  undefined1 local_93;
  undefined2 local_92;
  undefined1 local_90;
  undefined1 local_8f;
  undefined1 local_8e;
  undefined1 local_8d;
  undefined2 local_8c;
  undefined1 local_89;
  undefined2 local_88;
  undefined2 local_86;
  undefined2 local_84;
  undefined1 local_82;
  undefined1 local_81;
  undefined1 local_80;
  undefined1 local_7f;
  undefined2 local_7e;
  undefined2 local_7c;
  undefined1 local_79;
  undefined2 local_78;
  undefined1 local_75;
  undefined2 local_74;
  undefined2 local_72;
  undefined1 local_6f;
  undefined2 local_6e;
  undefined2 local_6c;
  undefined2 local_6a;
  undefined1 local_67;
  undefined2 local_66;
  undefined1 local_63;
  undefined2 local_62;
  undefined2 local_60;
  undefined1 local_5d;
  short local_5c;
  short local_58;
  short local_54;
  short local_50 [4];
  undefined2 local_48;
  undefined2 local_44;
  short local_40;
  short local_3c;
  short local_38 [4];
  short local_30;
  short local_2c;
  short local_28;
  short local_24;
  short local_20 [4];
  uint local_18;
  undefined1 local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a0dc9;
  local_10 = ExceptionList;
  uVar3 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_18 = uVar3;
  if (*(short *)(param_1 + 4) < 0) {
    FUN_005e9f20("shSize>=0","..\\Casino\\PokerHand.cpp",0x194d,uVar3);
  }
  if (4 < *(short *)(param_1 + 4)) {
    FUN_005e9f20("shSize<=4","..\\Casino\\PokerHand.cpp",0x194e,uVar3);
  }
  if ((*(short *)(param_1 + 4) != 0) && (*(short *)(param_1 + 4) != 1)) {
    FUN_00485940(local_14,1,1,1,1,0,0,0);
    local_8 = 0;
    if (*(short *)(param_1 + 4) == 2) {
      uVar4 = DAT_00791390;
      FUN_004a2160(&local_5d);
      cVar1 = FUN_004a1e10(uVar4);
      if (cVar1 == '\0') {
        uVar4 = DAT_007913b0;
        FUN_004a2160(&local_63);
        cVar1 = FUN_004a1e10(uVar4);
        if (cVar1 == '\0') {
          FUN_005e9f20("phv.GetCategory() == OnePair","..\\Casino\\PokerHand.cpp",0x1962);
        }
        local_66 = 5;
        local_8 = 0xffffffff;
        FUN_004a20f0();
      }
      else {
        sVar2 = FUN_00484bf0();
        if (sVar2 == 2) {
          local_60 = 4;
          local_8 = 0xffffffff;
          FUN_004a20f0();
        }
        else {
          local_62 = 3;
          local_8 = 0xffffffff;
          FUN_004a20f0();
        }
      }
    }
    else if (*(short *)(param_1 + 4) == 3) {
      uVar4 = DAT_00791390;
      FUN_004a2160(&local_67);
      cVar1 = FUN_004a1e10(uVar4);
      if (cVar1 == '\0') {
        uVar4 = DAT_007913b0;
        FUN_004a2160(&local_6f);
        cVar1 = FUN_004a1e10(uVar4);
        if (cVar1 == '\0') {
          uVar4 = DAT_00791418;
          FUN_004a2160(&local_75);
          cVar1 = FUN_004a1e10(uVar4);
          if (cVar1 == '\0') {
            FUN_005e9f20("phv.GetCategory() == ThreeOfAKind","..\\Casino\\PokerHand.cpp",0x197a);
          }
          local_78 = 0xb;
          local_8 = 0xffffffff;
          FUN_004a20f0();
        }
        else {
          sVar2 = FUN_00484bf0();
          if (sVar2 == 2) {
            local_72 = 10;
            local_8 = 0xffffffff;
            FUN_004a20f0();
          }
          else {
            local_74 = 9;
            local_8 = 0xffffffff;
            FUN_004a20f0();
          }
        }
      }
      else {
        sVar2 = FUN_00484bf0();
        if (sVar2 == 3) {
          local_6a = 8;
          local_8 = 0xffffffff;
          FUN_004a20f0();
        }
        else {
          sVar2 = FUN_00484bf0();
          if (sVar2 == 2) {
            local_6c = 7;
            local_8 = 0xffffffff;
            FUN_004a20f0();
          }
          else {
            local_6e = 6;
            local_8 = 0xffffffff;
            FUN_004a20f0();
          }
        }
      }
    }
    else {
      if (*(short *)(param_1 + 4) != 4) {
        FUN_005e9f20("shSize == 4","..\\Casino\\PokerHand.cpp",0x1980,uVar3);
      }
      uVar4 = DAT_00791390;
      FUN_004a2160(&local_79);
      cVar1 = FUN_004a1e10(uVar4);
      if (cVar1 == '\0') {
        uVar4 = DAT_007913b0;
        FUN_004a2160(&local_89);
        cVar1 = FUN_004a1e10(uVar4);
        if (cVar1 == '\0') {
          uVar4 = DAT_00791380;
          FUN_004a2160(&local_a7);
          cVar1 = FUN_004a1e10(uVar4);
          if (cVar1 == '\0') {
            uVar4 = DAT_00791418;
            FUN_004a2160(&local_b3);
            cVar1 = FUN_004a1e10(uVar4);
            if (cVar1 == '\0') {
              uVar4 = DAT_00791394;
              FUN_004a2160(&local_b9);
              cVar1 = FUN_004a1e10(uVar4);
              if (cVar1 == '\0') {
                FUN_005e9f20("phv.GetCategory() == FourOfAKind","..\\Casino\\PokerHand.cpp",0x1a27);
              }
              local_8 = 0xffffffff;
              FUN_004a20f0(uVar3,param_1,0x1b);
            }
            else {
              sVar2 = FUN_00484bf0();
              if (sVar2 == 2) {
                local_b6 = 0x1a;
                local_8 = 0xffffffff;
                FUN_004a20f0();
              }
              else {
                local_b8 = 0x19;
                local_8 = 0xffffffff;
                FUN_004a20f0();
              }
            }
          }
          else {
            sVar2 = FUN_00484bf0();
            if (sVar2 == 2) {
              for (local_58 = 0; local_58 < 4; local_58 = local_58 + 1) {
                local_50[local_58] = 0;
              }
              for (local_5c = 0; local_5c < *(short *)(param_1 + 4); local_5c = local_5c + 1) {
                uVar4 = DAT_0079076c;
                FUN_00464400(&local_a8);
                cVar1 = FUN_004640b0(uVar4);
                if (cVar1 == '\0') {
                  uVar4 = DAT_00790754;
                  FUN_00464400(&local_a9);
                  cVar1 = FUN_004640b0(uVar4);
                  if (cVar1 == '\0') {
                    uVar4 = DAT_00790764;
                    FUN_00464400(&local_aa);
                    cVar1 = FUN_004640b0(uVar4);
                    if (cVar1 == '\0') {
                      uVar4 = DAT_00790770;
                      FUN_00464400(&local_ab);
                      cVar1 = FUN_004640b0(uVar4);
                      if (cVar1 != '\0') {
                        local_50[3] = local_50[3] + 1;
                      }
                    }
                    else {
                      local_50[2] = local_50[2] + 1;
                    }
                  }
                  else {
                    local_50[1] = local_50[1] + 1;
                  }
                }
                else {
                  local_50[0] = local_50[0] + 1;
                }
              }
              local_54 = 0;
              for (local_58 = 0; local_58 < 4; local_58 = local_58 + 1) {
                if (0 < local_50[local_58]) {
                  local_54 = local_54 + 1;
                }
              }
              if (local_54 == 2) {
                local_ae = 0x18;
                local_8 = 0xffffffff;
                FUN_004a20f0();
              }
              else {
                if (local_54 != 3) {
                  FUN_005e9f20("shDifferentSuits == 3","..\\Casino\\PokerHand.cpp",0x1a17);
                }
                local_b0 = 0x17;
                local_8 = 0xffffffff;
                FUN_004a20f0();
              }
            }
            else {
              local_b2 = 0x16;
              local_8 = 0xffffffff;
              FUN_004a20f0();
            }
          }
        }
        else {
          sVar2 = FUN_00484bf0();
          if (sVar2 == 3) {
            local_8c = 0x15;
            local_8 = 0xffffffff;
            FUN_004a20f0();
          }
          else {
            sVar2 = FUN_00484bf0();
            if (sVar2 == 2) {
              for (local_40 = 0; local_40 < 4; local_40 = local_40 + 1) {
                local_38[local_40] = 0;
              }
              for (local_30 = 0; local_30 < *(short *)(param_1 + 4); local_30 = local_30 + 1) {
                uVar4 = DAT_0079076c;
                FUN_00464400(&local_8d);
                cVar1 = FUN_004640b0(uVar4);
                if (cVar1 == '\0') {
                  uVar4 = DAT_00790754;
                  FUN_00464400(&local_8e);
                  cVar1 = FUN_004640b0(uVar4);
                  if (cVar1 == '\0') {
                    uVar4 = DAT_00790764;
                    FUN_00464400(&local_8f);
                    cVar1 = FUN_004640b0(uVar4);
                    if (cVar1 == '\0') {
                      uVar4 = DAT_00790770;
                      FUN_00464400(&local_90);
                      cVar1 = FUN_004640b0(uVar4);
                      if (cVar1 != '\0') {
                        local_38[3] = local_38[3] + 1;
                      }
                    }
                    else {
                      local_38[2] = local_38[2] + 1;
                    }
                  }
                  else {
                    local_38[1] = local_38[1] + 1;
                  }
                }
                else {
                  local_38[0] = local_38[0] + 1;
                }
              }
              local_3c = 0;
              for (local_40 = 0; local_40 < 4; local_40 = local_40 + 1) {
                if (0 < local_38[local_40]) {
                  local_3c = local_3c + 1;
                }
              }
              if (local_3c == 2) {
                local_92 = 0x14;
                local_8 = 0xffffffff;
                FUN_004a20f0();
              }
              else {
                if (local_3c != 3) {
                  FUN_005e9f20("shDifferentSuits == 3","..\\Casino\\PokerHand.cpp",0x19cd);
                }
                uVar4 = FUN_00464480(&local_94);
                FUN_00464480(&local_93);
                cVar1 = FUN_00464050(uVar4);
                if (cVar1 == '\0') {
                  uVar4 = FUN_00464480(&local_96);
                  FUN_00464480(&local_95);
                  cVar1 = FUN_00464050(uVar4);
                  if (cVar1 == '\0') {
                    uVar4 = FUN_00464480(&local_98);
                    FUN_00464480(&local_97);
                    cVar1 = FUN_00464050(uVar4);
                    if (cVar1 == '\0') {
                      uVar4 = FUN_00464480(&local_9a);
                      FUN_00464480(&local_99);
                      cVar1 = FUN_00464050(uVar4);
                      if (cVar1 == '\0') {
                        uVar4 = FUN_00464480(&local_9c);
                        FUN_00464480(&local_9b);
                        cVar1 = FUN_00464050(uVar4);
                        if (cVar1 == '\0') {
                          uVar4 = FUN_00464480(&local_9e);
                          FUN_00464480(&local_9d);
                          cVar1 = FUN_00464050(uVar4);
                          if (cVar1 == '\0') {
                            FUN_005e9f20("ppcCardsInHand[2].GetRank() == ppcCardsInHand[3].GetRank()"
                                         ,"..\\Casino\\PokerHand.cpp",0x19eb);
                          }
                          local_44 = 0;
                          local_48 = 1;
                        }
                        else {
                          local_44 = 0;
                          local_48 = 2;
                        }
                      }
                      else {
                        local_44 = 0;
                        local_48 = 3;
                      }
                    }
                    else {
                      local_44 = 1;
                      local_48 = 2;
                    }
                  }
                  else {
                    local_44 = 1;
                    local_48 = 3;
                  }
                }
                else {
                  local_44 = 2;
                  local_48 = 3;
                }
                uVar4 = FUN_00464400(&local_a0);
                FUN_00464400(&local_9f);
                cVar1 = FUN_004640b0(uVar4);
                if (cVar1 == '\0') {
                  local_a4 = 0x12;
                  local_8 = 0xffffffff;
                  FUN_004a20f0();
                }
                else {
                  local_a2 = 0x13;
                  local_8 = 0xffffffff;
                  FUN_004a20f0();
                }
              }
            }
            else {
              local_a6 = 0x11;
              local_8 = 0xffffffff;
              FUN_004a20f0();
            }
          }
        }
      }
      else {
        sVar2 = FUN_00484bf0();
        if (sVar2 == 4) {
          local_7c = 0x10;
          local_8 = 0xffffffff;
          FUN_004a20f0();
        }
        else {
          sVar2 = FUN_00484bf0();
          if (sVar2 == 3) {
            local_7e = 0xf;
            local_8 = 0xffffffff;
            FUN_004a20f0();
          }
          else {
            sVar2 = FUN_00484bf0();
            if (sVar2 == 2) {
              for (local_28 = 0; local_28 < 4; local_28 = local_28 + 1) {
                local_20[local_28] = 0;
              }
              for (local_2c = 0; local_2c < *(short *)(param_1 + 4); local_2c = local_2c + 1) {
                uVar4 = DAT_0079076c;
                FUN_00464400(&local_7f);
                cVar1 = FUN_004640b0(uVar4);
                if (cVar1 == '\0') {
                  uVar4 = DAT_00790754;
                  FUN_00464400(&local_80);
                  cVar1 = FUN_004640b0(uVar4);
                  if (cVar1 == '\0') {
                    uVar4 = DAT_00790764;
                    FUN_00464400(&local_81);
                    cVar1 = FUN_004640b0(uVar4);
                    if (cVar1 == '\0') {
                      uVar4 = DAT_00790770;
                      FUN_00464400(&local_82);
                      cVar1 = FUN_004640b0(uVar4);
                      if (cVar1 != '\0') {
                        local_20[3] = local_20[3] + 1;
                      }
                    }
                    else {
                      local_20[2] = local_20[2] + 1;
                    }
                  }
                  else {
                    local_20[1] = local_20[1] + 1;
                  }
                }
                else {
                  local_20[0] = local_20[0] + 1;
                }
              }
              local_24 = 0;
              for (local_28 = 0; local_28 < 4; local_28 = local_28 + 1) {
                if (0 < local_20[local_28]) {
                  local_24 = local_24 + 1;
                }
              }
              if (local_24 == 2) {
                local_84 = 0xe;
                local_8 = 0xffffffff;
                FUN_004a20f0();
              }
              else {
                if (local_24 != 3) {
                  FUN_005e9f20("shDifferentSuits == 3","..\\Casino\\PokerHand.cpp",0x19a4);
                }
                local_86 = 0xd;
                local_8 = 0xffffffff;
                FUN_004a20f0();
              }
            }
            else {
              local_88 = 0xc;
              local_8 = 0xffffffff;
              FUN_004a20f0();
            }
          }
        }
      }
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}

