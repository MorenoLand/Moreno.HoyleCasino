// FUN_004f73d0  004f73d0

short __thiscall FUN_004f73d0(int param_1,char param_2)

{
  char cVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  short local_2c;
  short local_24;
  short local_1c;
  undefined4 local_18;
  short local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a2697;
  local_10 = ExceptionList;
  uVar3 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*(char *)(param_1 + 1) == '\0') {
    FUN_005e9f20("bInitialized","..\\Casino\\PokerPot.cpp",0x389,uVar3);
  }
  if (*(char *)(param_1 + 3) == '\0') {
    FUN_005e9f20("bShowdownInProgress","..\\Casino\\PokerPot.cpp",0x38a,uVar3);
  }
  sVar2 = FUN_004f6e70();
  if (sVar2 != -1) {
    FUN_005e9f20("GetShowdownPlayer() == ENDOFROUND","..\\Casino\\PokerPot.cpp",0x38b,uVar3);
  }
  *(undefined1 *)(param_1 + 4) = 0;
  FUN_004a20d0();
  local_8 = 0;
  if (param_2 == '\0') {
    FUN_004a2100(DAT_007913cc,DAT_007913c8,&DAT_007913ff,&DAT_007913ff,&DAT_007913ff,&DAT_007913ff);
  }
  else {
    FUN_004a2100(DAT_00791390,&DAT_007913ff,&DAT_007913ff,&DAT_007913ff,&DAT_007913ff,&DAT_007913ff)
    ;
  }
  local_24 = 0;
  local_1c = -1;
  for (local_14 = 0; local_14 < *(short *)(param_1 + 6); local_14 = local_14 + 1) {
    *(undefined1 *)((int)local_14 + *(int *)(param_1 + 0x40)) = 1;
    if (((*(char *)(*(int *)(param_1 + 0x30) + (int)local_14) == '\0') &&
        (*(int *)(*(int *)(param_1 + 0x68) + local_14 * 4) == *(int *)(param_1 + 0x24))) &&
       (*(int *)(*(int *)(param_1 + 0x6c) + local_14 * 4) == *(int *)(param_1 + 0x28))) {
      if (param_2 == '\0') {
        if ((local_24 == 0) ||
           (cVar1 = FUN_004a2440(*(int *)(param_1 + 0x80) + local_14 * 4), cVar1 != '\0')) {
          local_24 = 1;
          local_1c = local_14;
          local_18 = *(undefined4 *)(*(int *)(param_1 + 0x80) + local_14 * 4);
        }
        else {
          cVar1 = FUN_004a2340(*(int *)(param_1 + 0x80) + local_14 * 4);
          if (cVar1 != '\0') {
            local_24 = local_24 + 1;
          }
        }
      }
      else if ((local_24 == 0) ||
              (cVar1 = FUN_004a2550(*(int *)(param_1 + 0x7c) + local_14 * 4), cVar1 != '\0')) {
        local_24 = 1;
        local_1c = local_14;
        local_18 = *(undefined4 *)(*(int *)(param_1 + 0x7c) + local_14 * 4);
      }
      else {
        cVar1 = FUN_004a2340(*(int *)(param_1 + 0x7c) + local_14 * 4);
        if (cVar1 != '\0') {
          local_24 = local_24 + 1;
        }
      }
    }
  }
  if (local_1c < 0) {
    FUN_005e9f20("shFirstWinningIndex >= 0","..\\Casino\\PokerPot.cpp",0x3b6);
  }
  if (local_24 < 0) {
    FUN_005e9f20("shNumberOfWinners >= 0","..\\Casino\\PokerPot.cpp",0x3b7);
  }
  iVar4 = FUN_004f9580();
  *(undefined1 *)(param_1 + 5) = 1;
  if (local_24 == 1) {
    *(int *)(*(int *)(param_1 + 0x70) + local_1c * 4) = iVar4;
    local_8 = 0xffffffff;
    FUN_004a20f0();
  }
  else {
    local_2c = local_1c;
    for (local_14 = 0; local_14 < *(short *)(param_1 + 6); local_14 = local_14 + 1) {
      if ((*(char *)(*(int *)(param_1 + 0x30) + (int)local_14) == '\0') &&
         (*(char *)(*(int *)(param_1 + 0x3c) + (int)local_14) != '\0')) {
        if (param_2 == '\0') {
          cVar1 = FUN_004a2340(&local_18);
          if (cVar1 != '\0') {
            *(int *)(*(int *)(param_1 + 0x70) + local_14 * 4) =
                 *(int *)(*(int *)(param_1 + 0x70) + local_14 * 4) + iVar4 / (int)local_24;
            if (*(short *)(*(int *)(param_1 + 0x4c) + local_2c * 2) <
                *(short *)(*(int *)(param_1 + 0x4c) + local_14 * 2)) {
              local_2c = local_14;
            }
            *(undefined1 *)((int)local_14 + *(int *)(param_1 + 0x40)) = 0;
          }
        }
        else {
          cVar1 = FUN_004a2340(&local_18);
          if (cVar1 != '\0') {
            *(int *)(*(int *)(param_1 + 0x70) + local_14 * 4) =
                 *(int *)(*(int *)(param_1 + 0x70) + local_14 * 4) + iVar4 / (int)local_24;
            if (*(short *)(*(int *)(param_1 + 0x4c) + local_2c * 2) <
                *(short *)(*(int *)(param_1 + 0x4c) + local_14 * 2)) {
              local_2c = local_14;
            }
            *(undefined1 *)((int)local_14 + *(int *)(param_1 + 0x40)) = 0;
          }
        }
      }
    }
    *(int *)(*(int *)(param_1 + 0x70) + local_2c * 4) =
         *(int *)(*(int *)(param_1 + 0x70) + local_2c * 4) + iVar4 % (int)local_24;
    local_8 = 0xffffffff;
    FUN_004a20f0();
    local_1c = -4;
  }
  ExceptionList = local_10;
  return local_1c;
}

