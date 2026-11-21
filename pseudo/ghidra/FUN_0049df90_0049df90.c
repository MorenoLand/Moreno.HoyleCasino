// FUN_0049df90  0049df90

undefined2 __fastcall FUN_0049df90(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 local_3b;
  undefined1 local_3a;
  undefined1 local_39;
  undefined1 local_38;
  undefined1 local_37;
  undefined2 local_36;
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
  undefined4 local_18;
  undefined1 local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a100b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00485940(local_14,0,0,1,0,0,0,0,DAT_00781870 ^ (uint)&stack0xfffffffc,param_1);
  local_8 = 0;
  uVar2 = DAT_00791390;
  FUN_004a2160(&local_19);
  cVar1 = FUN_004a1e10(uVar2);
  if (cVar1 == '\0') {
    uVar2 = DAT_007913b0;
    FUN_004a2160(&local_37);
    cVar1 = FUN_004a1e10(uVar2);
    if (cVar1 == '\0') {
      local_8 = 0xffffffff;
      FUN_004a20f0();
      local_1c = 0xffff;
    }
    else {
      uVar2 = FUN_004a2200(&local_39);
      FUN_004a21b0(&local_38);
      cVar1 = FUN_004a2010(uVar2);
      if (cVar1 == '\0') {
        local_18 = FUN_004a2200(&local_3b);
      }
      else {
        local_18 = FUN_004a21b0(&local_3a);
      }
      cVar1 = FUN_004a1fb0(DAT_00791414);
      if (cVar1 == '\0') {
        cVar1 = FUN_004a1fb0(DAT_007913a4);
        if (cVar1 == '\0') {
          cVar1 = FUN_004a1fb0(DAT_00791404);
          if (cVar1 == '\0') {
            cVar1 = FUN_004a1fb0(DAT_007913f8);
            if (cVar1 == '\0') {
              cVar1 = FUN_004a1fb0(DAT_00791410);
              if (cVar1 == '\0') {
                cVar1 = FUN_004a1fb0(DAT_007913f4);
                if (cVar1 == '\0') {
                  cVar1 = FUN_004a1fb0(DAT_0079138c);
                  if (cVar1 == '\0') {
                    local_8 = 0xffffffff;
                    FUN_004a20f0();
                    local_1c = 0x31;
                  }
                  else {
                    local_8 = 0xffffffff;
                    FUN_004a20f0();
                    local_1c = 0x30;
                  }
                }
                else {
                  local_8 = 0xffffffff;
                  FUN_004a20f0();
                  local_1c = 0x2f;
                }
              }
              else {
                local_8 = 0xffffffff;
                FUN_004a20f0();
                local_1c = 0x2e;
              }
            }
            else {
              local_8 = 0xffffffff;
              FUN_004a20f0();
              local_1c = 0x2d;
            }
          }
          else {
            local_8 = 0xffffffff;
            FUN_004a20f0();
            local_1c = 0x2c;
          }
        }
        else {
          local_8 = 0xffffffff;
          FUN_004a20f0();
          local_1c = 0x2b;
        }
      }
      else {
        local_8 = 0xffffffff;
        FUN_004a20f0();
        local_1c = 0x2a;
      }
    }
  }
  else {
    uVar2 = DAT_00791414;
    FUN_004a2200(&local_1a);
    cVar1 = FUN_004a1fb0(uVar2);
    if (cVar1 == '\0') {
      uVar2 = DAT_007913a4;
      FUN_004a2200(&local_1d);
      cVar1 = FUN_004a1fb0(uVar2);
      if (cVar1 == '\0') {
        uVar2 = DAT_00791404;
        FUN_004a2200(&local_21);
        cVar1 = FUN_004a1fb0(uVar2);
        if (cVar1 == '\0') {
          uVar2 = DAT_007913f8;
          FUN_004a2200(&local_25);
          cVar1 = FUN_004a1fb0(uVar2);
          if (cVar1 == '\0') {
            uVar2 = DAT_00791410;
            FUN_004a2200(&local_29);
            cVar1 = FUN_004a1fb0(uVar2);
            if (cVar1 == '\0') {
              uVar2 = DAT_007913f4;
              FUN_004a2200(&local_2d);
              cVar1 = FUN_004a1fb0(uVar2);
              if (cVar1 == '\0') {
                uVar2 = DAT_0079138c;
                FUN_004a2200(&local_31);
                cVar1 = FUN_004a1fb0(uVar2);
                if (cVar1 == '\0') {
                  local_36 = 0x31;
                  local_8 = 0xffffffff;
                  FUN_004a20f0();
                  local_1c = local_36;
                }
                else {
                  local_34 = 0x30;
                  local_8 = 0xffffffff;
                  FUN_004a20f0();
                  local_1c = local_34;
                }
              }
              else {
                local_30 = 0x2f;
                local_8 = 0xffffffff;
                FUN_004a20f0();
                local_1c = local_30;
              }
            }
            else {
              local_2c = 0x2e;
              local_8 = 0xffffffff;
              FUN_004a20f0();
              local_1c = local_2c;
            }
          }
          else {
            local_28 = 0x2d;
            local_8 = 0xffffffff;
            FUN_004a20f0();
            local_1c = local_28;
          }
        }
        else {
          local_24 = 0x2c;
          local_8 = 0xffffffff;
          FUN_004a20f0();
          local_1c = local_24;
        }
      }
      else {
        local_20 = 0x2b;
        local_8 = 0xffffffff;
        FUN_004a20f0();
        local_1c = local_20;
      }
    }
    else {
      local_1c = 0x2a;
      local_8 = 0xffffffff;
      FUN_004a20f0();
    }
  }
  ExceptionList = local_10;
  return local_1c;
}

