// FUN_005025c0  005025c0

void FUN_005025c0(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined1 local_28 [8];
  short local_20;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a2c1a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_004646a0(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  FUN_004646f0();
  local_20 = 0;
  while( true ) {
    iVar5 = (int)local_20;
    iVar2 = FUN_0047f950();
    if (iVar2 <= iVar5) break;
    FUN_0047e390((int)local_20);
    iVar2 = FUN_004c7010();
    if (iVar2 != 0) {
      puVar4 = local_28;
      FUN_0047e390((int)local_20);
      uVar3 = FUN_004c8300(puVar4);
      local_8._0_1_ = 1;
      FUN_004649c0(uVar3);
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_00484470();
    }
    local_20 = local_20 + 1;
  }
  uVar3 = FUN_00464130(DAT_007907a4,DAT_0079076c);
  local_8._0_1_ = 2;
  cVar1 = FUN_00464b90(uVar3);
  local_8._0_1_ = 0;
  FUN_00464210();
  if (cVar1 == '\0') {
    uVar3 = FUN_00464130(DAT_007907a8,DAT_0079076c);
    local_8._0_1_ = 3;
    cVar1 = FUN_00464b90(uVar3);
    local_8._0_1_ = 0;
    FUN_00464210();
    if (cVar1 == '\0') {
      uVar3 = FUN_00464130(DAT_007907b0,DAT_0079076c);
      local_8._0_1_ = 4;
      cVar1 = FUN_00464b90(uVar3);
      local_8._0_1_ = 0;
      FUN_00464210();
      if (cVar1 == '\0') {
        uVar3 = FUN_00464130(DAT_00790774,DAT_0079076c);
        local_8._0_1_ = 5;
        cVar1 = FUN_00464b90(uVar3);
        local_8._0_1_ = 0;
        FUN_00464210();
        if (cVar1 == '\0') {
          uVar3 = FUN_00464130(DAT_00790788,DAT_0079076c);
          local_8._0_1_ = 6;
          cVar1 = FUN_00464b90(uVar3);
          local_8._0_1_ = 0;
          FUN_00464210();
          if (cVar1 == '\0') {
            uVar3 = FUN_00464130(DAT_00790794,DAT_0079076c);
            local_8._0_1_ = 7;
            cVar1 = FUN_00464b90(uVar3);
            local_8._0_1_ = 0;
            FUN_00464210();
            if (cVar1 == '\0') {
              uVar3 = FUN_00464130(DAT_00790798,DAT_0079076c);
              local_8._0_1_ = 8;
              cVar1 = FUN_00464b90(uVar3);
              local_8._0_1_ = 0;
              FUN_00464210();
              if (cVar1 == '\0') {
                uVar3 = FUN_00464130(DAT_00790760,DAT_0079076c);
                local_8._0_1_ = 9;
                cVar1 = FUN_00464b90(uVar3);
                local_8._0_1_ = 0;
                FUN_00464210();
                if (cVar1 == '\0') {
                  uVar3 = FUN_00464130(DAT_0079079c,DAT_0079076c);
                  local_8._0_1_ = 10;
                  cVar1 = FUN_00464b90(uVar3);
                  local_8._0_1_ = 0;
                  FUN_00464210();
                  if (cVar1 == '\0') {
                    uVar3 = FUN_00464130(DAT_00790750,DAT_0079076c);
                    local_8._0_1_ = 0xb;
                    cVar1 = FUN_00464b90(uVar3);
                    local_8._0_1_ = 0;
                    FUN_00464210();
                    if (cVar1 == '\0') {
                      uVar3 = FUN_00464130(DAT_00790790,DAT_0079076c);
                      local_8._0_1_ = 0xc;
                      cVar1 = FUN_00464b90(uVar3);
                      local_8._0_1_ = 0;
                      FUN_00464210();
                      if (cVar1 == '\0') {
                        uVar3 = FUN_00464130(DAT_00790768,DAT_0079076c);
                        local_8._0_1_ = 0xd;
                        cVar1 = FUN_00464b90(uVar3);
                        local_8 = (uint)local_8._1_3_ << 8;
                        FUN_00464210();
                        if (cVar1 == '\0') {
                          puVar4 = (undefined1 *)FUN_00464130(DAT_00790758,DAT_0079076c);
                          DAT_00792f88 = *puVar4;
                          FUN_00464210();
                        }
                        else {
                          puVar4 = (undefined1 *)FUN_00464130(DAT_00790768,DAT_0079076c);
                          DAT_00792f88 = *puVar4;
                          FUN_00464210();
                        }
                      }
                      else {
                        puVar4 = (undefined1 *)FUN_00464130(DAT_00790790,DAT_0079076c);
                        DAT_00792f88 = *puVar4;
                        FUN_00464210();
                      }
                    }
                    else {
                      puVar4 = (undefined1 *)FUN_00464130(DAT_00790750,DAT_0079076c);
                      DAT_00792f88 = *puVar4;
                      FUN_00464210();
                    }
                  }
                  else {
                    puVar4 = (undefined1 *)FUN_00464130(DAT_0079079c,DAT_0079076c);
                    DAT_00792f88 = *puVar4;
                    FUN_00464210();
                  }
                }
                else {
                  puVar4 = (undefined1 *)FUN_00464130(DAT_00790760,DAT_0079076c);
                  DAT_00792f88 = *puVar4;
                  FUN_00464210();
                }
              }
              else {
                puVar4 = (undefined1 *)FUN_00464130(DAT_00790798,DAT_0079076c);
                DAT_00792f88 = *puVar4;
                FUN_00464210();
              }
            }
            else {
              puVar4 = (undefined1 *)FUN_00464130(DAT_00790794,DAT_0079076c);
              DAT_00792f88 = *puVar4;
              FUN_00464210();
            }
          }
          else {
            puVar4 = (undefined1 *)FUN_00464130(DAT_00790788,DAT_0079076c);
            DAT_00792f88 = *puVar4;
            FUN_00464210();
          }
        }
        else {
          puVar4 = (undefined1 *)FUN_00464130(DAT_00790774,DAT_0079076c);
          DAT_00792f88 = *puVar4;
          FUN_00464210();
        }
      }
      else {
        puVar4 = (undefined1 *)FUN_00464130(DAT_007907b0,DAT_0079076c);
        DAT_00792f88 = *puVar4;
        FUN_00464210();
      }
    }
    else {
      puVar4 = (undefined1 *)FUN_00464130(DAT_007907a8,DAT_0079076c);
      DAT_00792f88 = *puVar4;
      FUN_00464210();
    }
  }
  else {
    puVar4 = (undefined1 *)FUN_00464130(DAT_007907a4,DAT_0079076c);
    DAT_00792f88 = *puVar4;
    FUN_00464210();
  }
  local_8 = 0xffffffff;
  FUN_004646e0();
  ExceptionList = local_10;
  return;
}

