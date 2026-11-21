// FUN_0049a650  0049a650

undefined2 __fastcall FUN_0049a650(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 local_af;
  undefined2 local_ae;
  undefined1 local_ac;
  undefined1 local_ab;
  undefined2 local_aa;
  undefined2 local_a8;
  undefined1 local_a5;
  undefined2 local_a4;
  undefined1 local_a2;
  undefined1 local_a1;
  undefined2 local_a0;
  undefined2 local_9e;
  undefined1 local_9b;
  undefined2 local_9a;
  undefined1 local_98;
  undefined1 local_97;
  undefined2 local_96;
  undefined1 local_93;
  undefined2 local_92;
  undefined1 local_8f;
  undefined2 local_8e;
  undefined1 local_8b;
  undefined2 local_8a;
  undefined1 local_87;
  undefined2 local_86;
  undefined1 local_83;
  undefined2 local_82;
  undefined1 local_80;
  undefined1 local_7f;
  undefined2 local_7e;
  undefined1 local_7b;
  undefined2 local_7a;
  undefined1 local_77;
  undefined2 local_76;
  undefined1 local_73;
  undefined2 local_72;
  undefined1 local_6f;
  undefined2 local_6e;
  undefined1 local_6c;
  undefined1 local_6b;
  undefined2 local_6a;
  undefined1 local_67;
  undefined2 local_66;
  undefined1 local_63;
  undefined2 local_62;
  undefined1 local_5f;
  undefined2 local_5e;
  undefined1 local_5c;
  undefined1 local_5b;
  undefined2 local_5a;
  undefined1 local_57;
  undefined2 local_56;
  undefined1 local_53;
  undefined2 local_52;
  undefined1 local_50;
  undefined1 local_4f;
  undefined2 local_4e;
  undefined1 local_4b;
  undefined2 local_4a;
  undefined1 local_48;
  undefined1 local_47;
  undefined2 local_46;
  undefined1 local_44;
  undefined1 local_43;
  undefined2 local_42;
  undefined2 local_40;
  undefined1 local_3d;
  undefined2 local_3c;
  undefined1 local_39;
  undefined2 local_38;
  undefined1 local_35;
  undefined2 local_34;
  undefined1 local_31;
  undefined2 local_30;
  undefined1 local_2d;
  undefined2 local_2c;
  undefined1 local_29;
  undefined2 local_28;
  undefined1 local_25;
  undefined2 local_24;
  undefined1 local_21;
  undefined2 local_20;
  undefined1 local_1d;
  undefined2 local_1c;
  undefined1 local_1a;
  undefined1 local_19;
  undefined2 local_18;
  undefined1 local_15;
  undefined1 local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a0da3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00485940(local_14,0,0,1,0,0,0,0,DAT_00781870 ^ (uint)&stack0xfffffffc,param_1);
  local_8 = 0;
  uVar2 = DAT_00791380;
  FUN_004a2160(&local_15);
  cVar1 = FUN_004a1f00(uVar2);
  if (cVar1 == '\0') {
    uVar2 = DAT_007913b0;
    FUN_004a2160(&local_19);
    cVar1 = FUN_004a1e10(uVar2);
    if (cVar1 == '\0') {
      uVar2 = DAT_00791390;
      FUN_004a2160(&local_43);
      cVar1 = FUN_004a1e10(uVar2);
      if (cVar1 == '\0') {
        FUN_005e9f20("phv.GetCategory() == NoPair","..\\Casino\\PokerHand.cpp",0x18ee);
      }
      uVar2 = DAT_007913a4;
      FUN_004a21b0(&local_44);
      cVar1 = FUN_004a1fb0(uVar2);
      if (cVar1 == '\0') {
        uVar2 = DAT_00791404;
        FUN_004a21b0(&local_47);
        cVar1 = FUN_004a1fb0(uVar2);
        if (cVar1 == '\0') {
          uVar2 = DAT_007913f8;
          FUN_004a21b0(&local_4f);
          cVar1 = FUN_004a1fb0(uVar2);
          if (cVar1 == '\0') {
            uVar2 = DAT_00791410;
            FUN_004a21b0(&local_5b);
            cVar1 = FUN_004a1fb0(uVar2);
            if (cVar1 == '\0') {
              uVar2 = DAT_007913f4;
              FUN_004a21b0(&local_6b);
              cVar1 = FUN_004a1fb0(uVar2);
              if (cVar1 == '\0') {
                uVar2 = DAT_0079138c;
                FUN_004a21b0(&local_7f);
                cVar1 = FUN_004a1fb0(uVar2);
                if (cVar1 == '\0') {
                  uVar2 = DAT_00791400;
                  FUN_004a21b0(&local_97);
                  cVar1 = FUN_004a1fb0(uVar2);
                  if (cVar1 != '\0') {
                    uVar2 = DAT_00791404;
                    FUN_004a2200(&local_98);
                    cVar1 = FUN_004a20a0(uVar2);
                    if (cVar1 != '\0') {
                      local_9a = 0x14;
                      local_8 = 0xffffffff;
                      FUN_004a20f0();
                      ExceptionList = local_10;
                      return local_9a;
                    }
                    uVar2 = DAT_00791410;
                    FUN_004a2200(&local_9b);
                    cVar1 = FUN_004a20a0(uVar2);
                    if (cVar1 != '\0') {
                      local_9e = 0x13;
                      local_8 = 0xffffffff;
                      FUN_004a20f0();
                      ExceptionList = local_10;
                      return local_9e;
                    }
                    local_a0 = 0x12;
                    local_8 = 0xffffffff;
                    FUN_004a20f0();
                    ExceptionList = local_10;
                    return local_a0;
                  }
                  uVar2 = DAT_007913bc;
                  FUN_004a21b0(&local_a1);
                  cVar1 = FUN_004a1fb0(uVar2);
                  if (cVar1 != '\0') {
                    uVar2 = DAT_00791404;
                    FUN_004a2200(&local_a2);
                    cVar1 = FUN_004a20a0(uVar2);
                    if (cVar1 != '\0') {
                      local_a4 = 0x11;
                      local_8 = 0xffffffff;
                      FUN_004a20f0();
                      ExceptionList = local_10;
                      return local_a4;
                    }
                    uVar2 = DAT_00791410;
                    FUN_004a2200(&local_a5);
                    cVar1 = FUN_004a20a0(uVar2);
                    if (cVar1 != '\0') {
                      local_a8 = 0x10;
                      local_8 = 0xffffffff;
                      FUN_004a20f0();
                      ExceptionList = local_10;
                      return local_a8;
                    }
                    local_aa = 0xf;
                    local_8 = 0xffffffff;
                    FUN_004a20f0();
                    ExceptionList = local_10;
                    return local_aa;
                  }
                  uVar2 = DAT_007913e0;
                  FUN_004a21b0(&local_ab);
                  cVar1 = FUN_004a1fb0(uVar2);
                  if (cVar1 != '\0') {
                    uVar2 = DAT_00791404;
                    FUN_004a2200(&local_ac);
                    cVar1 = FUN_004a20a0(uVar2);
                    if (cVar1 != '\0') {
                      local_ae = 0xe;
                      local_8 = 0xffffffff;
                      FUN_004a20f0();
                      ExceptionList = local_10;
                      return local_ae;
                    }
                    uVar2 = DAT_007913f4;
                    FUN_004a2200(&local_af);
                    cVar1 = FUN_004a20a0(uVar2);
                    if (cVar1 != '\0') {
                      local_8 = 0xffffffff;
                      FUN_004a20f0();
                      ExceptionList = local_10;
                      return 0xd;
                    }
                    local_8 = 0xffffffff;
                    FUN_004a20f0();
                    ExceptionList = local_10;
                    return 0xc;
                  }
                }
                else {
                  uVar2 = DAT_00791414;
                  FUN_004a2200(&local_80);
                  cVar1 = FUN_004a1fb0(uVar2);
                  if (cVar1 != '\0') {
                    local_82 = 0x1a;
                    local_8 = 0xffffffff;
                    FUN_004a20f0();
                    ExceptionList = local_10;
                    return local_82;
                  }
                  uVar2 = DAT_007913a4;
                  FUN_004a2200(&local_83);
                  cVar1 = FUN_004a1fb0(uVar2);
                  if (cVar1 != '\0') {
                    local_86 = 0x19;
                    local_8 = 0xffffffff;
                    FUN_004a20f0();
                    ExceptionList = local_10;
                    return local_86;
                  }
                  uVar2 = DAT_00791404;
                  FUN_004a2200(&local_87);
                  cVar1 = FUN_004a1fb0(uVar2);
                  if (cVar1 != '\0') {
                    local_8a = 0x18;
                    local_8 = 0xffffffff;
                    FUN_004a20f0();
                    ExceptionList = local_10;
                    return local_8a;
                  }
                  uVar2 = DAT_007913f8;
                  FUN_004a2200(&local_8b);
                  cVar1 = FUN_004a1fb0(uVar2);
                  if (cVar1 != '\0') {
                    local_8e = 0x17;
                    local_8 = 0xffffffff;
                    FUN_004a20f0();
                    ExceptionList = local_10;
                    return local_8e;
                  }
                  uVar2 = DAT_00791410;
                  FUN_004a2200(&local_8f);
                  cVar1 = FUN_004a1fb0(uVar2);
                  if (cVar1 != '\0') {
                    local_92 = 0x16;
                    local_8 = 0xffffffff;
                    FUN_004a20f0();
                    ExceptionList = local_10;
                    return local_92;
                  }
                  uVar2 = DAT_007913f4;
                  FUN_004a2200(&local_93);
                  cVar1 = FUN_004a1fb0(uVar2);
                  if (cVar1 != '\0') {
                    local_96 = 0x15;
                    local_8 = 0xffffffff;
                    FUN_004a20f0();
                    ExceptionList = local_10;
                    return local_96;
                  }
                }
              }
              else {
                uVar2 = DAT_00791414;
                FUN_004a2200(&local_6c);
                cVar1 = FUN_004a1fb0(uVar2);
                if (cVar1 != '\0') {
                  local_6e = 0x1f;
                  local_8 = 0xffffffff;
                  FUN_004a20f0();
                  ExceptionList = local_10;
                  return local_6e;
                }
                uVar2 = DAT_007913a4;
                FUN_004a2200(&local_6f);
                cVar1 = FUN_004a1fb0(uVar2);
                if (cVar1 != '\0') {
                  local_72 = 0x1e;
                  local_8 = 0xffffffff;
                  FUN_004a20f0();
                  ExceptionList = local_10;
                  return local_72;
                }
                uVar2 = DAT_00791404;
                FUN_004a2200(&local_73);
                cVar1 = FUN_004a1fb0(uVar2);
                if (cVar1 != '\0') {
                  local_76 = 0x1d;
                  local_8 = 0xffffffff;
                  FUN_004a20f0();
                  ExceptionList = local_10;
                  return local_76;
                }
                uVar2 = DAT_007913f8;
                FUN_004a2200(&local_77);
                cVar1 = FUN_004a1fb0(uVar2);
                if (cVar1 != '\0') {
                  local_7a = 0x1c;
                  local_8 = 0xffffffff;
                  FUN_004a20f0();
                  ExceptionList = local_10;
                  return local_7a;
                }
                uVar2 = DAT_00791410;
                FUN_004a2200(&local_7b);
                cVar1 = FUN_004a1fb0(uVar2);
                if (cVar1 != '\0') {
                  local_7e = 0x1b;
                  local_8 = 0xffffffff;
                  FUN_004a20f0();
                  ExceptionList = local_10;
                  return local_7e;
                }
              }
            }
            else {
              uVar2 = DAT_00791414;
              FUN_004a2200(&local_5c);
              cVar1 = FUN_004a1fb0(uVar2);
              if (cVar1 != '\0') {
                local_5e = 0x23;
                local_8 = 0xffffffff;
                FUN_004a20f0();
                ExceptionList = local_10;
                return local_5e;
              }
              uVar2 = DAT_007913a4;
              FUN_004a2200(&local_5f);
              cVar1 = FUN_004a1fb0(uVar2);
              if (cVar1 != '\0') {
                local_62 = 0x22;
                local_8 = 0xffffffff;
                FUN_004a20f0();
                ExceptionList = local_10;
                return local_62;
              }
              uVar2 = DAT_00791404;
              FUN_004a2200(&local_63);
              cVar1 = FUN_004a1fb0(uVar2);
              if (cVar1 != '\0') {
                local_66 = 0x21;
                local_8 = 0xffffffff;
                FUN_004a20f0();
                ExceptionList = local_10;
                return local_66;
              }
              uVar2 = DAT_007913f8;
              FUN_004a2200(&local_67);
              cVar1 = FUN_004a1fb0(uVar2);
              if (cVar1 != '\0') {
                local_6a = 0x20;
                local_8 = 0xffffffff;
                FUN_004a20f0();
                ExceptionList = local_10;
                return local_6a;
              }
            }
          }
          else {
            uVar2 = DAT_00791414;
            FUN_004a2200(&local_50);
            cVar1 = FUN_004a1fb0(uVar2);
            if (cVar1 != '\0') {
              local_52 = 0x26;
              local_8 = 0xffffffff;
              FUN_004a20f0();
              ExceptionList = local_10;
              return local_52;
            }
            uVar2 = DAT_007913a4;
            FUN_004a2200(&local_53);
            cVar1 = FUN_004a1fb0(uVar2);
            if (cVar1 != '\0') {
              local_56 = 0x25;
              local_8 = 0xffffffff;
              FUN_004a20f0();
              ExceptionList = local_10;
              return local_56;
            }
            uVar2 = DAT_00791404;
            FUN_004a2200(&local_57);
            cVar1 = FUN_004a1fb0(uVar2);
            if (cVar1 != '\0') {
              local_5a = 0x24;
              local_8 = 0xffffffff;
              FUN_004a20f0();
              ExceptionList = local_10;
              return local_5a;
            }
          }
        }
        else {
          uVar2 = DAT_00791414;
          FUN_004a2200(&local_48);
          cVar1 = FUN_004a1fb0(uVar2);
          if (cVar1 != '\0') {
            local_4a = 0x28;
            local_8 = 0xffffffff;
            FUN_004a20f0();
            ExceptionList = local_10;
            return local_4a;
          }
          uVar2 = DAT_007913a4;
          FUN_004a2200(&local_4b);
          cVar1 = FUN_004a1fb0(uVar2);
          if (cVar1 != '\0') {
            local_4e = 0x27;
            local_8 = 0xffffffff;
            FUN_004a20f0();
            ExceptionList = local_10;
            return local_4e;
          }
        }
        FUN_005e9f20(&DAT_006b2b64,"..\\Casino\\PokerHand.cpp",0x1947);
        local_8 = 0xffffffff;
        FUN_004a20f0();
        local_18 = 0;
      }
      else {
        local_46 = 0x29;
        local_8 = 0xffffffff;
        FUN_004a20f0();
        local_18 = local_46;
      }
    }
    else {
      uVar2 = DAT_007913b4;
      FUN_004a21b0(&local_1a);
      cVar1 = FUN_004a1fb0(uVar2);
      if (cVar1 == '\0') {
        uVar2 = DAT_007913f0;
        FUN_004a21b0(&local_1d);
        cVar1 = FUN_004a1fb0(uVar2);
        if (cVar1 == '\0') {
          uVar2 = DAT_007913d8;
          FUN_004a21b0(&local_21);
          cVar1 = FUN_004a1fb0(uVar2);
          if (cVar1 == '\0') {
            uVar2 = DAT_00791414;
            FUN_004a21b0(&local_25);
            cVar1 = FUN_004a1fb0(uVar2);
            if (cVar1 == '\0') {
              uVar2 = DAT_007913a4;
              FUN_004a21b0(&local_29);
              cVar1 = FUN_004a1fb0(uVar2);
              if (cVar1 == '\0') {
                uVar2 = DAT_00791404;
                FUN_004a21b0(&local_2d);
                cVar1 = FUN_004a1fb0(uVar2);
                if (cVar1 == '\0') {
                  uVar2 = DAT_007913f8;
                  FUN_004a21b0(&local_31);
                  cVar1 = FUN_004a1fb0(uVar2);
                  if (cVar1 == '\0') {
                    uVar2 = DAT_00791410;
                    FUN_004a21b0(&local_35);
                    cVar1 = FUN_004a1fb0(uVar2);
                    if (cVar1 == '\0') {
                      uVar2 = DAT_007913f4;
                      FUN_004a21b0(&local_39);
                      cVar1 = FUN_004a1fb0(uVar2);
                      if (cVar1 == '\0') {
                        uVar2 = DAT_0079138c;
                        FUN_004a21b0(&local_3d);
                        cVar1 = FUN_004a1fb0(uVar2);
                        if (cVar1 == '\0') {
                          local_42 = 1;
                          local_8 = 0xffffffff;
                          FUN_004a20f0();
                          local_18 = local_42;
                        }
                        else {
                          local_40 = 2;
                          local_8 = 0xffffffff;
                          FUN_004a20f0();
                          local_18 = local_40;
                        }
                      }
                      else {
                        local_3c = 3;
                        local_8 = 0xffffffff;
                        FUN_004a20f0();
                        local_18 = local_3c;
                      }
                    }
                    else {
                      local_38 = 4;
                      local_8 = 0xffffffff;
                      FUN_004a20f0();
                      local_18 = local_38;
                    }
                  }
                  else {
                    local_34 = 5;
                    local_8 = 0xffffffff;
                    FUN_004a20f0();
                    local_18 = local_34;
                  }
                }
                else {
                  local_30 = 6;
                  local_8 = 0xffffffff;
                  FUN_004a20f0();
                  local_18 = local_30;
                }
              }
              else {
                local_2c = 7;
                local_8 = 0xffffffff;
                FUN_004a20f0();
                local_18 = local_2c;
              }
            }
            else {
              local_28 = 8;
              local_8 = 0xffffffff;
              FUN_004a20f0();
              local_18 = local_28;
            }
          }
          else {
            local_24 = 9;
            local_8 = 0xffffffff;
            FUN_004a20f0();
            local_18 = local_24;
          }
        }
        else {
          local_20 = 10;
          local_8 = 0xffffffff;
          FUN_004a20f0();
          local_18 = local_20;
        }
      }
      else {
        local_1c = 0xb;
        local_8 = 0xffffffff;
        FUN_004a20f0();
        local_18 = local_1c;
      }
    }
  }
  else {
    local_18 = 0;
    local_8 = 0xffffffff;
    FUN_004a20f0();
  }
  ExceptionList = local_10;
  return local_18;
}

