// FUN_0048d1c0  0048d1c0

undefined4 * __thiscall FUN_0048d1c0(int param_1,undefined4 *param_2)

{
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined1 local_18;
  undefined1 local_17;
  undefined1 local_16;
  undefined1 local_15;
  short local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a0445;
  local_10 = ExceptionList;
  uVar2 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = 0;
  do {
    if (*(short *)(param_1 + 4) <= local_14) {
      uVar4 = FUN_004a20d0(uVar2);
      local_8 = 2;
      puVar3 = (undefined4 *)
               FUN_004a2100(DAT_007913cc,DAT_007913c8,&DAT_007913ff,&DAT_007913ff,&DAT_007913ff,
                            &DAT_007913ff);
      *param_2 = *puVar3;
      local_8 = local_8 & 0xffffff00;
      FUN_004a20f0(uVar2,uVar4);
      ExceptionList = local_10;
      return param_2;
    }
    uVar4 = DAT_00790780;
    FUN_00464400(&local_15);
    cVar1 = FUN_004640e0(uVar4);
    if (cVar1 == '\0') {
      FUN_005e9f20("ppcCardsInHand[shCardIndex].GetSuit() != WildSuit","..\\Casino\\PokerHand.cpp",
                   0x998);
    }
    uVar4 = DAT_00790784;
    FUN_00464400(&local_16);
    cVar1 = FUN_004640e0(uVar4);
    if (cVar1 == '\0') {
      FUN_005e9f20("ppcCardsInHand[shCardIndex].GetSuit() != BugSuit","..\\Casino\\PokerHand.cpp",
                   0x999);
    }
    uVar4 = DAT_0079076c;
    FUN_00464400(&local_17);
    cVar1 = FUN_004640b0(uVar4);
    if (cVar1 != '\0') {
      uVar4 = DAT_007907b0;
      FUN_00464480(&local_18);
      cVar1 = FUN_00464050(uVar4);
      if (cVar1 != '\0') {
        FUN_004a20d0();
        local_8 = 1;
        puVar3 = (undefined4 *)
                 FUN_004a2100(DAT_00791390,DAT_007913b4,&DAT_007913ff,&DAT_007913ff,&DAT_007913ff,
                              &DAT_007913ff);
        *param_2 = *puVar3;
        local_8 = local_8 & 0xffffff00;
        FUN_004a20f0();
        ExceptionList = local_10;
        return param_2;
      }
    }
    local_14 = local_14 + 1;
  } while( true );
}

