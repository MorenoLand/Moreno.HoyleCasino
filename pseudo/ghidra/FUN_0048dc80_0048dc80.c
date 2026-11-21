// FUN_0048dc80  0048dc80

undefined4 __fastcall FUN_0048dc80(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  short sVar5;
  short sVar6;
  undefined2 uVar7;
  undefined1 local_3e;
  undefined1 local_3d;
  undefined1 local_3c;
  undefined1 local_3b;
  undefined1 local_3a;
  undefined1 local_39;
  undefined1 local_38;
  undefined1 local_37;
  undefined1 local_36;
  undefined1 local_35;
  undefined1 local_34;
  undefined1 local_33;
  undefined1 local_32;
  undefined1 local_31;
  undefined1 local_30;
  undefined1 local_2f;
  undefined1 local_2e;
  undefined1 local_2d;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  undefined1 local_28;
  undefined1 local_27;
  undefined1 local_26;
  undefined1 local_25;
  undefined1 local_24;
  undefined1 local_23 [10];
  char local_19;
  short local_18;
  short local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a04ce;
  local_10 = ExceptionList;
  uVar2 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*(short *)(param_1 + 4) != 2) {
    FUN_005e9f20("shSize == 2","..\\Casino\\PokerHand.cpp",0xa06,uVar2);
  }
  uVar3 = FUN_00464130(DAT_007907b4,DAT_00790784);
  local_8 = 0;
  cVar1 = FUN_00484ba0(uVar3);
  if (cVar1 != '\0') {
    FUN_005e9f20("!ContainsCard(PokerCard(BugRank,BugSuit))","..\\Casino\\PokerHand.cpp",0xa07,uVar2
                );
  }
  local_8 = 0xffffffff;
  FUN_00464210();
  uVar3 = FUN_00464130(DAT_0079077c,DAT_00790780);
  local_8 = 1;
  cVar1 = FUN_00484ba0(uVar3);
  if (cVar1 != '\0') {
    FUN_005e9f20("!ContainsCard(PokerCard(WildRank,WildSuit))","..\\Casino\\PokerHand.cpp",0xa08);
  }
  local_8 = 0xffffffff;
  FUN_00464210();
  uVar3 = FUN_00464400(&local_24);
  FUN_00464400(local_23);
  cVar1 = FUN_004640b0(uVar3);
  local_19 = cVar1 != '\0';
  local_18 = 0;
  uVar3 = DAT_007907a4;
  FUN_00464480(&local_25);
  cVar1 = FUN_00464050(uVar3);
  if (cVar1 == '\0') {
    uVar3 = DAT_007907a8;
    FUN_00464480(&local_26);
    cVar1 = FUN_00464050(uVar3);
    if (cVar1 == '\0') {
      uVar3 = DAT_007907b0;
      FUN_00464480(&local_27);
      cVar1 = FUN_00464050(uVar3);
      if (cVar1 == '\0') {
        uVar3 = DAT_00790774;
        FUN_00464480(&local_28);
        cVar1 = FUN_00464050(uVar3);
        if (cVar1 == '\0') {
          uVar3 = DAT_00790788;
          FUN_00464480(&local_29);
          cVar1 = FUN_00464050(uVar3);
          if (cVar1 == '\0') {
            uVar3 = DAT_00790794;
            FUN_00464480(&local_2a);
            cVar1 = FUN_00464050(uVar3);
            if (cVar1 == '\0') {
              uVar3 = DAT_00790798;
              FUN_00464480(&local_2b);
              cVar1 = FUN_00464050(uVar3);
              if (cVar1 == '\0') {
                uVar3 = DAT_00790760;
                FUN_00464480(&local_2c);
                cVar1 = FUN_00464050(uVar3);
                if (cVar1 == '\0') {
                  uVar3 = DAT_0079079c;
                  FUN_00464480(&local_2d);
                  cVar1 = FUN_00464050(uVar3);
                  if (cVar1 == '\0') {
                    uVar3 = DAT_00790750;
                    FUN_00464480(&local_2e);
                    cVar1 = FUN_00464050(uVar3);
                    if (cVar1 == '\0') {
                      uVar3 = DAT_00790790;
                      FUN_00464480(&local_2f);
                      cVar1 = FUN_00464050(uVar3);
                      if (cVar1 == '\0') {
                        uVar3 = DAT_00790768;
                        FUN_00464480(&local_30);
                        cVar1 = FUN_00464050(uVar3);
                        if (cVar1 == '\0') {
                          uVar3 = DAT_00790758;
                          FUN_00464480(&local_31);
                          cVar1 = FUN_00464050(uVar3);
                          if (cVar1 == '\0') {
                            FUN_005e9f20(&DAT_006b2b64,"..\\Casino\\PokerHand.cpp",0xa2c);
                          }
                          else {
                            local_18 = 2;
                          }
                        }
                        else {
                          local_18 = 3;
                        }
                      }
                      else {
                        local_18 = 4;
                      }
                    }
                    else {
                      local_18 = 5;
                    }
                  }
                  else {
                    local_18 = 6;
                  }
                }
                else {
                  local_18 = 7;
                }
              }
              else {
                local_18 = 8;
              }
            }
            else {
              local_18 = 9;
            }
          }
          else {
            local_18 = 10;
          }
        }
        else {
          local_18 = 0xb;
        }
      }
      else {
        local_18 = 0xc;
      }
    }
    else {
      local_18 = 0xd;
    }
  }
  else {
    local_18 = 0xe;
  }
  local_14 = 0;
  uVar3 = DAT_007907a4;
  FUN_00464480(&local_32);
  cVar1 = FUN_00464050(uVar3);
  if (cVar1 == '\0') {
    uVar3 = DAT_007907a8;
    FUN_00464480(&local_33);
    cVar1 = FUN_00464050(uVar3);
    if (cVar1 == '\0') {
      uVar3 = DAT_007907b0;
      FUN_00464480(&local_34);
      cVar1 = FUN_00464050(uVar3);
      if (cVar1 == '\0') {
        uVar3 = DAT_00790774;
        FUN_00464480(&local_35);
        cVar1 = FUN_00464050(uVar3);
        if (cVar1 == '\0') {
          uVar3 = DAT_00790788;
          FUN_00464480(&local_36);
          cVar1 = FUN_00464050(uVar3);
          if (cVar1 == '\0') {
            uVar3 = DAT_00790794;
            FUN_00464480(&local_37);
            cVar1 = FUN_00464050(uVar3);
            if (cVar1 == '\0') {
              uVar3 = DAT_00790798;
              FUN_00464480(&local_38);
              cVar1 = FUN_00464050(uVar3);
              if (cVar1 == '\0') {
                uVar3 = DAT_00790760;
                FUN_00464480(&local_39);
                cVar1 = FUN_00464050(uVar3);
                if (cVar1 == '\0') {
                  uVar3 = DAT_0079079c;
                  FUN_00464480(&local_3a);
                  cVar1 = FUN_00464050(uVar3);
                  if (cVar1 == '\0') {
                    uVar3 = DAT_00790750;
                    FUN_00464480(&local_3b);
                    cVar1 = FUN_00464050(uVar3);
                    if (cVar1 == '\0') {
                      uVar3 = DAT_00790790;
                      FUN_00464480(&local_3c);
                      cVar1 = FUN_00464050(uVar3);
                      if (cVar1 == '\0') {
                        uVar3 = DAT_00790768;
                        FUN_00464480(&local_3d);
                        cVar1 = FUN_00464050(uVar3);
                        if (cVar1 == '\0') {
                          uVar3 = DAT_00790758;
                          FUN_00464480(&local_3e);
                          cVar1 = FUN_00464050(uVar3);
                          if (cVar1 != '\0') {
                            local_14 = 2;
                          }
                        }
                        else {
                          local_14 = 3;
                        }
                      }
                      else {
                        local_14 = 4;
                      }
                    }
                    else {
                      local_14 = 5;
                    }
                  }
                  else {
                    local_14 = 6;
                  }
                }
                else {
                  local_14 = 7;
                }
              }
              else {
                local_14 = 8;
              }
            }
            else {
              local_14 = 9;
            }
          }
          else {
            local_14 = 10;
          }
        }
        else {
          local_14 = 0xb;
        }
      }
      else {
        local_14 = 0xc;
      }
    }
    else {
      local_14 = 0xd;
    }
  }
  else {
    local_14 = 0xe;
  }
  sVar5 = local_14;
  if (local_18 < local_14) {
    local_14 = local_18;
    local_18 = sVar5;
  }
  iVar4 = (int)local_18;
  sVar5 = local_18 >> 0xf;
  if ((iVar4 < 0xc) || (local_14 < 0xc)) {
    sVar6 = local_14 >> 0xf;
    if ((local_18 < 10) || (iVar4 = (int)local_14, iVar4 < 10)) {
      if ((local_18 < 9) || (local_14 < 9)) {
        if (local_18 == 0xe) {
          uVar3 = 4;
        }
        else {
          if (local_19 == '\0') {
            iVar4 = (int)local_14;
            if ((iVar4 == 8) && (local_18 < 10)) {
              ExceptionList = local_10;
              return CONCAT22(sVar6,4);
            }
            if ((local_14 == 7) && (iVar4 = (int)local_18, iVar4 == 7)) {
              ExceptionList = local_10;
              return CONCAT22(sVar5,4);
            }
            uVar7 = (undefined2)((uint)iVar4 >> 0x10);
            if (local_14 == 8) {
              ExceptionList = local_10;
              return CONCAT22(uVar7,3);
            }
            if (local_18 == 0xd) {
              ExceptionList = local_10;
              return CONCAT22(uVar7,3);
            }
            if ((local_14 == 7) && (local_18 == 8)) {
              ExceptionList = local_10;
              return 3;
            }
            iVar4 = (int)local_18;
            if (local_14 == iVar4) {
              ExceptionList = local_10;
              return CONCAT22(sVar5,3);
            }
          }
          else {
            if ((local_14 == 8) && (local_18 < 0xb)) {
              ExceptionList = local_10;
              return CONCAT22(sVar5,4);
            }
            if ((local_14 == 7) && (local_18 == 8)) {
              ExceptionList = local_10;
              return 4;
            }
            if ((local_14 == 6) && (local_18 == 7)) {
              ExceptionList = local_10;
              return 4;
            }
            if (local_14 == 8) {
              ExceptionList = local_10;
              return 3;
            }
            if (local_18 == 0xd) {
              ExceptionList = local_10;
              return 3;
            }
            if ((local_14 == 7) && (local_18 == 9)) {
              ExceptionList = local_10;
              return 3;
            }
            iVar4 = (int)local_14;
            if ((iVar4 == 6) && (local_18 == 8)) {
              ExceptionList = local_10;
              return CONCAT22(sVar6,3);
            }
            if ((local_14 == 5) && (iVar4 = (int)local_18, iVar4 == 6)) {
              ExceptionList = local_10;
              return CONCAT22(sVar5,3);
            }
            if ((local_14 == 4) && (local_18 == 5)) {
              ExceptionList = local_10;
              return CONCAT22((short)((uint)iVar4 >> 0x10),3);
            }
          }
          uVar7 = (undefined2)((uint)iVar4 >> 0x10);
          if (local_19 == '\0') {
            if (local_18 < 0xb) {
              if (local_14 < 6) {
                uVar3 = CONCAT22(sVar6,1);
              }
              else {
                uVar3 = CONCAT22(sVar6,2);
              }
            }
            else {
              uVar3 = CONCAT22(uVar7,2);
            }
          }
          else {
            uVar3 = CONCAT22(uVar7,2);
          }
        }
      }
      else {
        uVar3 = CONCAT22((short)((uint)iVar4 >> 0x10),4);
      }
    }
    else {
      uVar3 = CONCAT22(sVar6,5);
    }
  }
  else {
    uVar3 = CONCAT22(sVar5,6);
  }
  ExceptionList = local_10;
  return uVar3;
}

