// FUN_0049ffb0  0049ffb0

void __thiscall FUN_0049ffb0(undefined4 param_1,short param_2,char *param_3)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 local_98;
  undefined1 local_97;
  undefined1 local_96;
  undefined1 local_95;
  undefined1 local_94;
  undefined1 local_93;
  undefined1 local_92;
  undefined1 local_91;
  undefined1 local_90;
  undefined1 local_8f;
  undefined1 local_8e;
  undefined1 local_8d;
  undefined1 local_8c;
  undefined1 local_8b;
  undefined1 local_8a;
  undefined1 local_89;
  undefined1 local_88;
  undefined1 local_87;
  undefined1 local_86;
  undefined1 local_85;
  undefined1 local_84;
  undefined1 local_83;
  undefined1 local_82;
  undefined1 local_81;
  undefined1 local_80;
  undefined1 local_7f;
  undefined1 local_7e;
  undefined1 local_7d;
  undefined1 local_7c;
  undefined1 local_7b;
  undefined1 local_7a;
  undefined1 local_79;
  undefined1 local_78;
  undefined1 local_77;
  undefined1 local_76;
  undefined1 local_75;
  undefined1 local_74;
  undefined1 local_73;
  undefined1 local_72;
  undefined1 local_71;
  undefined1 local_70;
  undefined1 local_6f;
  undefined1 local_6e;
  undefined1 local_6d;
  undefined1 local_6c;
  undefined1 local_6b;
  undefined1 local_6a;
  undefined1 local_69;
  undefined1 local_68;
  undefined1 local_67;
  undefined1 local_66;
  undefined1 local_65;
  undefined1 local_64;
  undefined1 local_63;
  undefined1 local_62;
  undefined1 local_61;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  undefined1 local_5c;
  undefined1 local_5b;
  undefined1 local_5a;
  undefined1 local_59;
  undefined1 local_58;
  undefined1 local_57;
  undefined1 local_56;
  undefined1 local_55;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  undefined1 local_50;
  undefined1 local_4f;
  undefined1 local_4e;
  undefined1 local_4d;
  undefined1 local_4c;
  undefined1 local_4b;
  undefined1 local_4a;
  undefined1 local_49;
  undefined1 local_48;
  undefined1 local_47;
  undefined1 local_46;
  undefined1 local_45;
  undefined1 local_44;
  undefined1 local_43;
  undefined1 local_42;
  undefined1 local_41;
  undefined1 local_40;
  undefined1 local_3f;
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
  undefined1 local_24 [7];
  char local_1d;
  undefined1 local_1c [4];
  undefined1 local_18 [4];
  short local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a108a;
  local_10 = ExceptionList;
  uVar2 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (param_2 < 0) {
    FUN_005e9f20("shHandIndex>=0","..\\Casino\\PokerHand.cpp",0x1d72,uVar2,param_1);
  }
  if (0x44 < param_2) {
    FUN_005e9f20("shHandIndex<LOWBALLNUMBEROFINDICES","..\\Casino\\PokerHand.cpp",0x1d73,uVar2,
                 param_1);
  }
  for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
    param_3[local_14] = '\0';
  }
  if (0x29 < param_2) {
    if (param_2 < 0x32) {
      FUN_00485940(local_18,0,0,1,0,0,0,0);
      local_8 = 0;
      uVar3 = DAT_00791390;
      FUN_004a2160(&local_25);
      cVar1 = FUN_004a1e10(uVar3);
      if (cVar1 == '\0') {
        uVar3 = DAT_007913b0;
        FUN_004a2160(&local_29);
        cVar1 = FUN_004a1e10(uVar3);
        if (cVar1 != '\0') {
          for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
            puVar4 = &local_2c;
            FUN_00464480(&local_2b);
            uVar3 = FUN_00463fd0(puVar4);
            FUN_004a21b0(&local_2a);
            cVar1 = FUN_004a1fb0(uVar3);
            if (cVar1 != '\0') {
              param_3[local_14] = '\x01';
              break;
            }
          }
          if (4 < local_14) {
            FUN_005e9f20("shTemp < 5","..\\Casino\\PokerHand.cpp",0x1d91);
          }
        }
      }
      else {
        for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
          puVar4 = &local_28;
          FUN_00464480(&local_27);
          uVar3 = FUN_00463fd0(puVar4);
          FUN_004a21b0(&local_26);
          cVar1 = FUN_004a1fb0(uVar3);
          if (cVar1 != '\0') {
            param_3[local_14] = '\x01';
          }
        }
      }
      if ((char)((*param_3 != '\0') + (param_3[1] != '\0') + (param_3[2] != '\0') +
                 (param_3[3] != '\0') + (param_3[4] != '\0')) != '\x01') {
        FUN_005e9f20("((bDiscard[0] ? 1 : 0) + (bDiscard[1] ? 1 : 0) + (bDiscard[2] ? 1 : 0) + (bDiscard[3] ? 1 : 0) + (bDiscard[4] ? 1 : 0) ) == 1"
                     ,"..\\Casino\\PokerHand.cpp",0x1d93);
      }
      local_8 = 0xffffffff;
      FUN_004a20f0();
    }
    else if (param_2 < 0x3b) {
      FUN_00485940(local_1c,0,0,1,0,0,0,0);
      local_8 = 1;
      uVar3 = DAT_00791390;
      FUN_004a2160(&local_2d);
      cVar1 = FUN_004a1e10(uVar3);
      if (cVar1 == '\0') {
        uVar3 = DAT_007913b0;
        FUN_004a2160(&local_34);
        cVar1 = FUN_004a1e10(uVar3);
        if (cVar1 == '\0') {
          uVar3 = DAT_00791380;
          FUN_004a2160(&local_40);
          cVar1 = FUN_004a1e10(uVar3);
          if (cVar1 == '\0') {
            uVar3 = DAT_00791418;
            FUN_004a2160(&local_47);
            cVar1 = FUN_004a1e10(uVar3);
            if (cVar1 != '\0') {
              local_1d = '\0';
              for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
                puVar4 = &local_4a;
                FUN_00464480(&local_49);
                uVar3 = FUN_00463fd0(puVar4);
                FUN_004a21b0(&local_48);
                cVar1 = FUN_004a1fb0(uVar3);
                if (cVar1 != '\0') {
                  if (local_1d != '\0') {
                    param_3[local_14] = '\x01';
                    break;
                  }
                  param_3[local_14] = '\x01';
                  local_1d = '\x01';
                }
              }
              if (4 < local_14) {
                FUN_005e9f20("shTemp < 5","..\\Casino\\PokerHand.cpp",0x1de7);
              }
            }
          }
          else {
            for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
              puVar4 = &local_43;
              FUN_00464480(&local_42);
              uVar3 = FUN_00463fd0(puVar4);
              FUN_004a21b0(&local_41);
              cVar1 = FUN_004a1fb0(uVar3);
              if (cVar1 != '\0') {
                param_3[local_14] = '\x01';
                break;
              }
            }
            if (4 < local_14) {
              FUN_005e9f20("shTemp < 5","..\\Casino\\PokerHand.cpp",0x1dc9);
            }
            for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
              puVar4 = &local_46;
              FUN_00464480(&local_45);
              uVar3 = FUN_00463fd0(puVar4);
              FUN_004a2200(&local_44);
              cVar1 = FUN_004a1fb0(uVar3);
              if (cVar1 != '\0') {
                param_3[local_14] = '\x01';
                break;
              }
            }
            if (4 < local_14) {
              FUN_005e9f20("shTemp < 5","..\\Casino\\PokerHand.cpp",0x1dd2);
            }
          }
        }
        else {
          uVar3 = FUN_004a2200(&local_36);
          FUN_004a21b0(&local_35);
          cVar1 = FUN_004a2010(uVar3);
          if (cVar1 == '\0') {
            for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
              puVar4 = &local_3c;
              FUN_00464480(&local_3b);
              uVar3 = FUN_00463fd0(puVar4);
              FUN_004a21b0(&local_3a);
              cVar1 = FUN_004a1fb0(uVar3);
              if (cVar1 != '\0') {
                param_3[local_14] = '\x01';
                break;
              }
            }
            if (4 < local_14) {
              FUN_005e9f20("shTemp < 5","..\\Casino\\PokerHand.cpp",0x1db7);
            }
            for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
              puVar4 = &local_3f;
              FUN_00464480(&local_3e);
              uVar3 = FUN_00463fd0(puVar4);
              FUN_004a2200(&local_3d);
              cVar1 = FUN_004a1fb0(uVar3);
              if (cVar1 != '\0') {
                param_3[local_14] = '\x01';
              }
            }
          }
          else {
            for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
              puVar4 = &local_39;
              FUN_00464480(&local_38);
              uVar3 = FUN_00463fd0(puVar4);
              FUN_004a21b0(&local_37);
              cVar1 = FUN_004a1fb0(uVar3);
              if (cVar1 != '\0') {
                param_3[local_14] = '\x01';
              }
            }
          }
        }
      }
      else {
        for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
          puVar4 = &local_30;
          FUN_00464480(&local_2f);
          uVar3 = FUN_00463fd0(puVar4);
          FUN_004a21b0(&local_2e);
          cVar1 = FUN_004a1fb0(uVar3);
          if (cVar1 == '\0') {
            puVar4 = &local_33;
            FUN_00464480(&local_32);
            uVar3 = FUN_00463fd0(puVar4);
            FUN_004a2200(&local_31);
            cVar1 = FUN_004a1fb0(uVar3);
            if (cVar1 != '\0') {
              param_3[local_14] = '\x01';
            }
          }
          else {
            param_3[local_14] = '\x01';
          }
        }
      }
      if ((char)((*param_3 != '\0') + (param_3[1] != '\0') + (param_3[2] != '\0') +
                 (param_3[3] != '\0') + (param_3[4] != '\0')) != '\x02') {
        FUN_005e9f20("((bDiscard[0] ? 1 : 0) + (bDiscard[1] ? 1 : 0) + (bDiscard[2] ? 1 : 0) + (bDiscard[3] ? 1 : 0) + (bDiscard[4] ? 1 : 0) ) == 2"
                     ,"..\\Casino\\PokerHand.cpp",0x1de9);
      }
      local_8 = 0xffffffff;
      FUN_004a20f0();
    }
    else {
      FUN_00485940(local_24,0,0,1,0,0,0,0);
      local_8 = 2;
      uVar3 = DAT_00791390;
      FUN_004a2160(&local_4b);
      cVar1 = FUN_004a1e10(uVar3);
      if (cVar1 == '\0') {
        uVar3 = DAT_007913b0;
        FUN_004a2160(&local_55);
        cVar1 = FUN_004a1e10(uVar3);
        if (cVar1 == '\0') {
          uVar3 = DAT_00791380;
          FUN_004a2160(&local_67);
          cVar1 = FUN_004a1e10(uVar3);
          if (cVar1 == '\0') {
            uVar3 = DAT_00791418;
            FUN_004a2160(&local_79);
            cVar1 = FUN_004a1e10(uVar3);
            if (cVar1 == '\0') {
              uVar3 = DAT_007913d4;
              FUN_004a2160(&local_88);
              cVar1 = FUN_004a1e10(uVar3);
              if (cVar1 == '\0') {
                uVar3 = DAT_00791394;
                FUN_004a2160(&local_92);
                cVar1 = FUN_004a1e10(uVar3);
                if (cVar1 == '\0') {
                  FUN_005e9f20(&DAT_006b2b64,"..\\Casino\\PokerHand.cpp",0x1e96);
                }
                else {
                  for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
                    puVar4 = &local_95;
                    FUN_00464480(&local_94);
                    uVar3 = FUN_00463fd0(puVar4);
                    FUN_004a21b0(&local_93);
                    cVar1 = FUN_004a1fb0(uVar3);
                    if (cVar1 != '\0') {
                      param_3[local_14] = '\x01';
                    }
                  }
                  for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
                    puVar4 = &local_98;
                    FUN_00464480(&local_97);
                    uVar3 = FUN_00463fd0(puVar4);
                    FUN_004a21b0(&local_96);
                    cVar1 = FUN_004a1fb0(uVar3);
                    if (cVar1 != '\0') {
                      param_3[local_14] = '\0';
                      break;
                    }
                  }
                  if (4 < local_14) {
                    FUN_005e9f20("shTemp < 5","..\\Casino\\PokerHand.cpp",0x1e93);
                  }
                }
              }
              else {
                for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
                  puVar4 = &local_8b;
                  FUN_00464480(&local_8a);
                  uVar3 = FUN_00463fd0(puVar4);
                  FUN_004a21b0(&local_89);
                  cVar1 = FUN_004a1fb0(uVar3);
                  if (cVar1 != '\0') {
                    param_3[local_14] = '\x01';
                  }
                }
                for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
                  puVar4 = &local_8e;
                  FUN_00464480(&local_8d);
                  uVar3 = FUN_00463fd0(puVar4);
                  FUN_004a21b0(&local_8c);
                  cVar1 = FUN_004a1fb0(uVar3);
                  if (cVar1 != '\0') {
                    param_3[local_14] = '\0';
                    break;
                  }
                }
                if (4 < local_14) {
                  FUN_005e9f20("shTemp < 5","..\\Casino\\PokerHand.cpp",0x1e79);
                }
                for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
                  puVar4 = &local_91;
                  FUN_00464480(&local_90);
                  uVar3 = FUN_00463fd0(puVar4);
                  FUN_004a2200(&local_8f);
                  cVar1 = FUN_004a1fb0(uVar3);
                  if (cVar1 != '\0') {
                    param_3[local_14] = '\x01';
                    break;
                  }
                }
                if (4 < local_14) {
                  FUN_005e9f20("shTemp < 5","..\\Casino\\PokerHand.cpp",0x1e82);
                }
              }
            }
            else {
              uVar3 = FUN_004a2200(&local_7b);
              FUN_004a21b0(&local_7a);
              cVar1 = FUN_004a2010(uVar3);
              if (cVar1 == '\0') {
                for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
                  puVar4 = &local_81;
                  FUN_00464480(&local_80);
                  uVar3 = FUN_00463fd0(puVar4);
                  FUN_004a21b0(&local_7f);
                  cVar1 = FUN_004a1fb0(uVar3);
                  if (cVar1 != '\0') {
                    param_3[local_14] = '\x01';
                  }
                }
                for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
                  puVar4 = &local_84;
                  FUN_00464480(&local_83);
                  uVar3 = FUN_00463fd0(puVar4);
                  FUN_004a21b0(&local_82);
                  cVar1 = FUN_004a1fb0(uVar3);
                  if (cVar1 != '\0') {
                    param_3[local_14] = '\0';
                    break;
                  }
                }
                if (4 < local_14) {
                  FUN_005e9f20("shTemp < 5","..\\Casino\\PokerHand.cpp",0x1e62);
                }
                for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
                  puVar4 = &local_87;
                  FUN_00464480(&local_86);
                  uVar3 = FUN_00463fd0(puVar4);
                  FUN_004a2200(&local_85);
                  cVar1 = FUN_004a1fb0(uVar3);
                  if (cVar1 != '\0') {
                    param_3[local_14] = '\x01';
                  }
                }
              }
              else {
                for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
                  puVar4 = &local_7e;
                  FUN_00464480(&local_7d);
                  uVar3 = FUN_00463fd0(puVar4);
                  FUN_004a21b0(&local_7c);
                  cVar1 = FUN_004a1fb0(uVar3);
                  if (cVar1 != '\0') {
                    param_3[local_14] = '\x01';
                  }
                }
              }
            }
          }
          else {
            uVar3 = FUN_004a21b0(&local_69);
            FUN_004a2250(&local_68);
            cVar1 = FUN_004a2010(uVar3);
            if (cVar1 == '\0') {
              for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
                puVar4 = &local_75;
                FUN_00464480(&local_74);
                uVar3 = FUN_00463fd0(puVar4);
                FUN_004a21b0(&local_73);
                cVar1 = FUN_004a1fb0(uVar3);
                if (cVar1 != '\0') {
                  param_3[local_14] = '\x01';
                }
              }
              for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
                puVar4 = &local_78;
                FUN_00464480(&local_77);
                uVar3 = FUN_00463fd0(puVar4);
                FUN_004a2200(&local_76);
                cVar1 = FUN_004a1fb0(uVar3);
                if (cVar1 != '\0') {
                  param_3[local_14] = '\x01';
                  break;
                }
              }
              if (4 < local_14) {
                FUN_005e9f20("shTemp < 5","..\\Casino\\PokerHand.cpp",0x1e46);
              }
            }
            else {
              for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
                puVar4 = &local_6c;
                FUN_00464480(&local_6b);
                uVar3 = FUN_00463fd0(puVar4);
                FUN_004a2250(&local_6a);
                cVar1 = FUN_004a1fb0(uVar3);
                if (cVar1 != '\0') {
                  param_3[local_14] = '\x01';
                }
              }
              for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
                puVar4 = &local_6f;
                FUN_00464480(&local_6e);
                uVar3 = FUN_00463fd0(puVar4);
                FUN_004a21b0(&local_6d);
                cVar1 = FUN_004a1fb0(uVar3);
                if (cVar1 != '\0') {
                  param_3[local_14] = '\x01';
                  break;
                }
              }
              if (4 < local_14) {
                FUN_005e9f20("shTemp < 5","..\\Casino\\PokerHand.cpp",0x1e2c);
              }
              for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
                puVar4 = &local_72;
                FUN_00464480(&local_71);
                uVar3 = FUN_00463fd0(puVar4);
                FUN_004a2200(&local_70);
                cVar1 = FUN_004a1fb0(uVar3);
                if (cVar1 != '\0') {
                  param_3[local_14] = '\x01';
                  break;
                }
              }
              if (4 < local_14) {
                FUN_005e9f20("shTemp < 5","..\\Casino\\PokerHand.cpp",0x1e35);
              }
            }
          }
        }
        else {
          uVar3 = FUN_004a2250(&local_57);
          FUN_004a21b0(&local_56);
          cVar1 = FUN_004a2010(uVar3);
          if (cVar1 == '\0') {
            for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
              puVar4 = &local_60;
              FUN_00464480(&local_5f);
              uVar3 = FUN_00463fd0(puVar4);
              FUN_004a2200(&local_5e);
              cVar1 = FUN_004a1fb0(uVar3);
              if (cVar1 == '\0') {
                puVar4 = &local_63;
                FUN_00464480(&local_62);
                uVar3 = FUN_00463fd0(puVar4);
                FUN_004a2250(&local_61);
                cVar1 = FUN_004a1fb0(uVar3);
                if (cVar1 != '\0') {
                  param_3[local_14] = '\x01';
                }
              }
              else {
                param_3[local_14] = '\x01';
              }
            }
            for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
              puVar4 = &local_66;
              FUN_00464480(&local_65);
              uVar3 = FUN_00463fd0(puVar4);
              FUN_004a21b0(&local_64);
              cVar1 = FUN_004a1fb0(uVar3);
              if (cVar1 != '\0') {
                param_3[local_14] = '\x01';
                break;
              }
            }
            if (4 < local_14) {
              FUN_005e9f20("shTemp < 5","..\\Casino\\PokerHand.cpp",0x1e18);
            }
          }
          else {
            for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
              puVar4 = &local_5a;
              FUN_00464480(&local_59);
              uVar3 = FUN_00463fd0(puVar4);
              FUN_004a21b0(&local_58);
              cVar1 = FUN_004a1fb0(uVar3);
              if (cVar1 == '\0') {
                puVar4 = &local_5d;
                FUN_00464480(&local_5c);
                uVar3 = FUN_00463fd0(puVar4);
                FUN_004a2200(&local_5b);
                cVar1 = FUN_004a1fb0(uVar3);
                if (cVar1 != '\0') {
                  param_3[local_14] = '\x01';
                }
              }
              else {
                param_3[local_14] = '\x01';
              }
            }
          }
        }
      }
      else {
        for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
          puVar4 = &local_4e;
          FUN_00464480(&local_4d);
          uVar3 = FUN_00463fd0(puVar4);
          FUN_004a21b0(&local_4c);
          cVar1 = FUN_004a1fb0(uVar3);
          if (cVar1 == '\0') {
            puVar4 = &local_51;
            FUN_00464480(&local_50);
            uVar3 = FUN_00463fd0(puVar4);
            FUN_004a2200(&local_4f);
            cVar1 = FUN_004a1fb0(uVar3);
            if (cVar1 == '\0') {
              puVar4 = &local_54;
              FUN_00464480(&local_53);
              uVar3 = FUN_00463fd0(puVar4);
              FUN_004a2250(&local_52);
              cVar1 = FUN_004a1fb0(uVar3);
              if (cVar1 != '\0') {
                param_3[local_14] = '\x01';
              }
            }
            else {
              param_3[local_14] = '\x01';
            }
          }
          else {
            param_3[local_14] = '\x01';
          }
        }
      }
      if ((char)((*param_3 != '\0') + (param_3[1] != '\0') + (param_3[2] != '\0') +
                 (param_3[3] != '\0') + (param_3[4] != '\0')) != '\x03') {
        FUN_005e9f20("((bDiscard[0] ? 1 : 0) + (bDiscard[1] ? 1 : 0) + (bDiscard[2] ? 1 : 0) + (bDiscard[3] ? 1 : 0) + (bDiscard[4] ? 1 : 0) ) == 3"
                     ,"..\\Casino\\PokerHand.cpp",0x1e98);
      }
      local_8 = 0xffffffff;
      FUN_004a20f0();
    }
  }
  ExceptionList = local_10;
  return;
}

