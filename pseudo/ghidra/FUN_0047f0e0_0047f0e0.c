// FUN_0047f0e0  0047f0e0

/* WARNING: Removing unreachable block (ram,0x0047f550) */
/* WARNING: Removing unreachable block (ram,0x0047f704) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0047f0e0(int param_1,int param_2)

{
  short sVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  void *pvVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 local_50;
  short local_30;
  int local_24;
  int local_1c;
  short local_18;
  short local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0069ff7a;
  local_10 = ExceptionList;
  uVar3 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (199 < *(short *)(param_1 + 2000)) {
    FUN_005e9f20("shChipPilesInUse<MAX_CHIP_PILES_IN_POT","..\\Casino\\PokerGame.cpp",0x854,uVar3);
  }
  if (param_2 < 1) {
    FUN_005e9f20("lDollarsInPile > 0L","..\\Casino\\PokerGame.cpp",0x855,uVar3);
  }
  iVar4 = FUN_0047e1d0();
  if (iVar4 == 2) {
    local_18 = 0x8c;
    local_14 = 0x13b;
    local_30 = 0x1cc;
  }
  else {
    local_18 = 0xaa;
    local_14 = 200;
    local_30 = 0x1b8;
  }
  if (param_2 < 1000000) {
    if (param_2 < 500000) {
      if (param_2 < 100000) {
        if (param_2 < 50000) {
          if (param_2 < 25000) {
            if (param_2 < 10000) {
              if (param_2 < 5000) {
                if (param_2 < 1000) {
                  if (param_2 < 500) {
                    if (param_2 < 100) {
                      if (param_2 < 0x32) {
                        if (param_2 < 0x19) {
                          if (param_2 < 10) {
                            if (param_2 < 5) {
                              local_24 = 0;
                              local_1c = param_2 + -1;
                            }
                            else {
                              local_24 = 3;
                              local_1c = param_2 + -5;
                            }
                          }
                          else {
                            local_24 = 6;
                            local_1c = param_2 + -10;
                          }
                        }
                        else {
                          local_24 = 9;
                          local_1c = param_2 + -0x19;
                        }
                      }
                      else {
                        local_24 = 0xc;
                        local_1c = param_2 + -0x32;
                      }
                    }
                    else {
                      local_24 = 0xf;
                      local_1c = param_2 + -100;
                    }
                  }
                  else {
                    local_24 = 0x12;
                    local_1c = param_2 + -500;
                  }
                }
                else {
                  local_24 = 0x15;
                  local_1c = param_2 + -1000;
                }
              }
              else {
                local_24 = 0x18;
                local_1c = param_2 + -5000;
              }
            }
            else {
              local_24 = 0x1b;
              local_1c = param_2 + -10000;
            }
          }
          else {
            local_24 = 0x1e;
            local_1c = param_2 + -25000;
          }
        }
        else {
          local_24 = 0x21;
          local_1c = param_2 + -50000;
        }
      }
      else {
        local_24 = 0x24;
        local_1c = param_2 + -100000;
      }
    }
    else {
      local_24 = 0x27;
      local_1c = param_2 + -500000;
    }
  }
  else {
    local_24 = 0x2a;
    local_1c = param_2 + -1000000;
  }
  iVar4 = FUN_0062fbf0(3);
  if (*(int *)(param_1 + 0x4b0 + *(short *)(param_1 + 2000) * 4) == 0) {
    pvVar5 = operator_new(0x178);
    local_8 = 0;
    if (pvVar5 == (void *)0x0) {
      local_50 = 0;
    }
    else {
      local_50 = FUN_005eaaf0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x4b0 + *(short *)(param_1 + 2000) * 4) = local_50;
    FUN_005eaf00(0x186a2);
    (**(code **)(**(int **)(param_1 + 0x4b0 + *(short *)(param_1 + 2000) * 4) + 0xb0))
              (iVar4 + local_24);
    (**(code **)(**(int **)(param_1 + 0x4b0 + *(short *)(param_1 + 2000) * 4) + 0x70))();
    (**(code **)(**(int **)(param_1 + 0x4b0 + *(short *)(param_1 + 2000) * 4) + 0x6c))
              (*(short *)(param_1 + 2000) + 2);
    (**(code **)(**(int **)(param_1 + 0x4b0 + *(short *)(param_1 + 2000) * 4) + 0x40))();
    (**(code **)(**(int **)(param_1 + 0x4b0 + *(short *)(param_1 + 2000) * 4) + 0x74))();
    sVar1 = FUN_005f5550();
    sVar2 = FUN_005f5590();
    iVar4 = FUN_0062fbf0(((int)(short)(local_30 - sVar1) - (int)local_14) + 1);
    iVar6 = FUN_0062fbf0(((int)(short)(local_30 - sVar1) - (int)local_14) + 1);
    iVar7 = FUN_0062fbf0(((int)(short)(0x127 - sVar2) - (int)local_18) + 1);
    iVar8 = FUN_0062fbf0(((int)(short)(0x127 - sVar2) - (int)local_18) + 1);
    (**(code **)(**(int **)(param_1 + 0x4b0 + *(short *)(param_1 + 2000) * 4) + 0x44))
              ((int)(short)(local_14 + (short)((iVar6 + iVar4) / 2)),
               (short)(local_18 + (short)((iVar8 + iVar7) / 2)) + 0x14);
  }
  else {
    FUN_005eaf00(0x186a2);
    (**(code **)(**(int **)(param_1 + 0x4b0 + *(short *)(param_1 + 2000) * 4) + 0xb0))
              (iVar4 + local_24);
    sVar1 = FUN_005f5550();
    sVar2 = FUN_005f5590();
    iVar4 = FUN_0062fbf0(((int)(short)(local_30 - sVar1) - (int)local_14) + 1);
    iVar6 = FUN_0062fbf0(((int)(short)(local_30 - sVar1) - (int)local_14) + 1);
    iVar7 = FUN_0062fbf0(((int)(short)(0x127 - sVar2) - (int)local_18) + 1);
    iVar8 = FUN_0062fbf0(((int)(short)(0x127 - sVar2) - (int)local_18) + 1);
    (**(code **)(**(int **)(param_1 + 0x4b0 + *(short *)(param_1 + 2000) * 4) + 0x44))
              ((int)(short)(local_14 + (short)((iVar6 + iVar4) / 2)),
               (short)(local_18 + (short)((iVar8 + iVar7) / 2)) + 0x14);
    (**(code **)(**(int **)(param_1 + 0x4b0 + *(short *)(param_1 + 2000) * 4) + 0x6c))
              (*(short *)(param_1 + 2000) + 2);
    (**(code **)(**(int **)(param_1 + 0x4b0 + *(short *)(param_1 + 2000) * 4) + 0x74))();
  }
  *(short *)(param_1 + 2000) = *(short *)(param_1 + 2000) + 1;
  if ((local_1c != 0) && (*(short *)(param_1 + 2000) < 200)) {
    FUN_0047f0e0(local_1c);
  }
  ExceptionList = local_10;
  return;
}

