// FUN_0048ccd0  0048ccd0

undefined4 * __thiscall FUN_0048ccd0(int param_1,undefined4 *param_2)

{
  char cVar1;
  uint uVar2;
  byte *pbVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  uint uVar6;
  undefined1 local_23;
  undefined1 local_22;
  undefined1 local_21;
  undefined1 local_20;
  undefined1 local_1f;
  undefined1 local_1e;
  undefined1 local_1d;
  short local_1c;
  byte local_15;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a0401;
  local_10 = ExceptionList;
  uVar2 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar6 = 0;
  local_15 = 0;
  for (local_1c = 0; local_1c < *(short *)(param_1 + 4); local_1c = local_1c + 1) {
    uVar4 = DAT_00790780;
    FUN_00464400(&local_1d);
    cVar1 = FUN_004640e0(uVar4);
    if (cVar1 == '\0') {
      FUN_005e9f20("ppcCardsInHand[shCardIndex].GetSuit() != WildSuit","..\\Casino\\PokerHand.cpp",
                   0x96a);
    }
    uVar4 = DAT_00790784;
    FUN_00464400(&local_1e);
    cVar1 = FUN_004640e0(uVar4);
    if (cVar1 == '\0') {
      FUN_005e9f20("ppcCardsInHand[shCardIndex].GetSuit() != BugSuit","..\\Casino\\PokerHand.cpp",
                   0x96b);
    }
    uVar4 = DAT_0079076c;
    FUN_00464400(&local_1f);
    cVar1 = FUN_004640b0(uVar4);
    if (cVar1 != '\0') {
      puVar5 = &local_21;
      FUN_00464480(&local_20);
      pbVar3 = (byte *)FUN_00463f80(puVar5);
      if (local_15 < *pbVar3) {
        puVar5 = &local_23;
        FUN_00464480(&local_22);
        pbVar3 = (byte *)FUN_00463f80(puVar5);
        local_15 = *pbVar3;
      }
    }
  }
  FUN_004a20d0(uVar2,param_1,uVar6);
  local_8 = 1;
  if (local_15 == *DAT_007913c8) {
    FUN_004a2100(DAT_00791390,DAT_007913b4,&DAT_007913ff,&DAT_007913ff,&DAT_007913ff,&DAT_007913ff);
  }
  else if (local_15 == *DAT_007913e0) {
    FUN_004a2100(DAT_00791390,DAT_007913f0,&DAT_007913ff,&DAT_007913ff,&DAT_007913ff,&DAT_007913ff);
  }
  else if (local_15 == *DAT_007913bc) {
    FUN_004a2100(DAT_00791390,DAT_007913d8,&DAT_007913ff,&DAT_007913ff,&DAT_007913ff,&DAT_007913ff);
  }
  else if (local_15 == *DAT_00791400) {
    FUN_004a2100(DAT_00791390,DAT_00791414,&DAT_007913ff,&DAT_007913ff,&DAT_007913ff,&DAT_007913ff);
  }
  else if (local_15 == *DAT_0079138c) {
    FUN_004a2100(DAT_00791390,DAT_007913a4,&DAT_007913ff,&DAT_007913ff,&DAT_007913ff,&DAT_007913ff);
  }
  else if (local_15 == *DAT_007913f4) {
    FUN_004a2100(DAT_00791390,DAT_00791404,&DAT_007913ff,&DAT_007913ff,&DAT_007913ff,&DAT_007913ff);
  }
  else if (local_15 == *DAT_00791410) {
    FUN_004a2100(DAT_00791390,DAT_007913f8,&DAT_007913ff,&DAT_007913ff,&DAT_007913ff,&DAT_007913ff);
  }
  else if (local_15 == *DAT_007913f8) {
    FUN_004a2100(DAT_00791390,DAT_00791410,&DAT_007913ff,&DAT_007913ff,&DAT_007913ff,&DAT_007913ff);
  }
  else if (local_15 == *DAT_00791404) {
    FUN_004a2100(DAT_00791390,DAT_007913f4,&DAT_007913ff,&DAT_007913ff,&DAT_007913ff,&DAT_007913ff);
  }
  else if (local_15 == *DAT_007913a4) {
    FUN_004a2100(DAT_00791390,DAT_0079138c,&DAT_007913ff,&DAT_007913ff,&DAT_007913ff,&DAT_007913ff);
  }
  else if (local_15 == *DAT_00791414) {
    FUN_004a2100(DAT_00791390,DAT_00791400,&DAT_007913ff,&DAT_007913ff,&DAT_007913ff,&DAT_007913ff);
  }
  else if (local_15 == *DAT_007913d8) {
    FUN_004a2100(DAT_00791390,DAT_007913bc,&DAT_007913ff,&DAT_007913ff,&DAT_007913ff,&DAT_007913ff);
  }
  else if (local_15 == *DAT_007913f0) {
    FUN_004a2100(DAT_00791390,DAT_007913e0,&DAT_007913ff,&DAT_007913ff,&DAT_007913ff,&DAT_007913ff);
  }
  else {
    FUN_004a2100(DAT_007913cc,DAT_007913c8,&DAT_007913ff,&DAT_007913ff,&DAT_007913ff,&DAT_007913ff);
  }
  *param_2 = local_14;
  local_8 = local_8 & 0xffffff00;
  FUN_004a20f0(uVar2,param_1,uVar6 | 1);
  ExceptionList = local_10;
  return param_2;
}

