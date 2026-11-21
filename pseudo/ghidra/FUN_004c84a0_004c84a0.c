// FUN_004c84a0  004c84a0

undefined4 __thiscall FUN_004c84a0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 local_2a;
  undefined1 local_29;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined1 local_18 [8];
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a244a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00484300(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_8 = 1;
  iVar1 = FUN_0047e1d0();
  if (iVar1 != 1) {
    FUN_005e9f20("pokerGame->GetGameType() == STUDPOKER","..\\Casino\\PokerPlayer.cpp",0x469);
  }
  if (*(int *)(param_1 + 8) != 0) {
    local_1c = FUN_0060c9a0();
    local_1c = local_1c + -1;
    local_20 = 2;
    while (iVar1 = FUN_0060c9a0(), local_20 < iVar1) {
      if (local_20 < 6) {
        if (local_1c - local_20 < 0) {
          FUN_005e9f20("(nAdjust-nIndex)>=0","..\\Casino\\PokerPlayer.cpp",0x472);
        }
        iVar3 = local_1c - local_20;
        iVar1 = FUN_0060c9a0();
        if (iVar1 <= iVar3) {
          FUN_005e9f20("(nAdjust-nIndex)<hand->Size()","..\\Casino\\PokerPlayer.cpp",0x473);
        }
        uVar2 = FUN_004c7310(*(undefined4 *)(param_1 + 8),local_1c - local_20);
        uVar2 = FUN_004dd940(&local_29,uVar2);
        local_8._0_1_ = 2;
        FUN_00484830(uVar2);
        local_8 = CONCAT31(local_8._1_3_,1);
        FUN_00464210();
      }
      local_20 = local_20 + 1;
    }
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    local_24 = FUN_0060c9a0();
    local_24 = local_24 + -1;
    local_28 = 0;
    while (iVar1 = FUN_0060c9a0(), local_28 < iVar1) {
      if (local_24 - local_28 < 0) {
        FUN_005e9f20("(nAdjust-nIndex)>=0","..\\Casino\\PokerPlayer.cpp",0x47d);
      }
      iVar3 = local_24 - local_28;
      iVar1 = FUN_0060c9a0();
      if (iVar1 <= iVar3) {
        FUN_005e9f20("(nAdjust-nIndex)<handSecondRow->Size()","..\\Casino\\PokerPlayer.cpp",0x47e);
      }
      uVar2 = FUN_004c7310(*(undefined4 *)(param_1 + 0xc),local_24 - local_28);
      uVar2 = FUN_004dd940(&local_2a,uVar2);
      local_8._0_1_ = 3;
      FUN_00484830(uVar2);
      local_8 = CONCAT31(local_8._1_3_,1);
      FUN_00464210();
      local_28 = local_28 + 1;
    }
  }
  FUN_00484320(local_18);
  local_8 = local_8 & 0xffffff00;
  FUN_00484470();
  ExceptionList = local_10;
  return param_2;
}

