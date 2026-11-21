// FUN_004919a0  004919a0

undefined4 * __thiscall FUN_004919a0(int param_1,undefined4 *param_2)

{
  short *psVar1;
  short sVar2;
  byte *pbVar3;
  undefined1 *puVar4;
  undefined1 local_4e;
  undefined1 local_4d;
  void *local_4c;
  short local_48;
  byte local_41;
  void *local_40;
  undefined4 local_3c [4];
  undefined4 local_2c;
  short local_28;
  byte local_21;
  undefined4 local_20;
  short local_1c;
  short local_18;
  short local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a0677;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  sVar2 = FUN_00491870(DAT_00781870 ^ (uint)&stack0xfffffffc);
  if (sVar2 < 3) {
    FUN_005e9f20("GetDifferentEightsOrBetterCount() >= 3","..\\Casino\\PokerHand.cpp",0xed2);
  }
  if (5 < *(short *)(param_1 + 4)) {
    FUN_005e9f20("shSize <= 5","..\\Casino\\PokerHand.cpp",0xed3);
  }
  local_4c = operator_new((*DAT_007913e0 + 1) * 2);
  for (local_41 = 0; local_41 <= *DAT_007913e0; local_41 = local_41 + 1) {
    *(undefined2 *)((int)local_4c + (uint)local_41 * 2) = 0;
  }
  local_40 = local_4c;
  for (local_48 = 0; local_48 < *(short *)(param_1 + 4); local_48 = local_48 + 1) {
    puVar4 = &local_4e;
    FUN_00464480(&local_4d);
    pbVar3 = (byte *)FUN_00463fd0(puVar4);
    psVar1 = (short *)((int)local_40 + (uint)*pbVar3 * 2);
    *psVar1 = *psVar1 + 1;
  }
  FUN_004a20d0();
  local_8 = 1;
  local_14 = 0;
  local_21 = *DAT_007913b4;
  local_1c = 0;
  local_28 = 0;
  local_18 = 0;
  do {
    while( true ) {
      if (4 < local_14) {
        FUN_004a2100(DAT_00791390,local_2c,local_3c[3],local_3c[2],local_3c[1],local_3c[0]);
        operator_delete(local_40);
        *param_2 = local_20;
        local_8 = local_8 & 0xffffff00;
        FUN_004a20f0();
        ExceptionList = local_10;
        return param_2;
      }
      if ((*(short *)((int)local_40 + (uint)local_21 * 2) < 1) ||
         (3 < *(short *)((int)local_40 + (uint)local_21 * 2))) break;
      local_18 = local_18 + 1;
LAB_00491c59:
      if (local_21 == *DAT_007913b4) {
        local_3c[local_14] = DAT_007913b4;
      }
      else if (local_21 == *DAT_007913f0) {
        local_3c[local_14] = DAT_007913f0;
      }
      else if (local_21 == *DAT_007913d8) {
        local_3c[local_14] = DAT_007913d8;
      }
      else if (local_21 == *DAT_00791414) {
        local_3c[local_14] = DAT_00791414;
      }
      else if (local_21 == *DAT_007913a4) {
        local_3c[local_14] = DAT_007913a4;
      }
      else if (local_21 == *DAT_00791404) {
        local_3c[local_14] = DAT_00791404;
      }
      else if (local_21 == *DAT_007913f8) {
        local_3c[local_14] = DAT_007913f8;
      }
      else if (local_21 == *DAT_00791410) {
        local_3c[local_14] = DAT_00791410;
      }
      local_21 = local_21 + 1;
      local_14 = local_14 + 1;
    }
    if ((local_28 < 2) && (*(short *)((int)local_40 + (uint)local_21 * 2) < 4)) {
      local_28 = local_28 + 1;
      while (2 < (int)local_28 + (int)local_18) {
        local_18 = local_18 + -1;
        local_1c = local_1c + 1;
        if (3 < local_1c) {
          FUN_005e9f20("shWidowUsed <= 3","..\\Casino\\PokerHand.cpp",0xeef);
        }
      }
      goto LAB_00491c59;
    }
    if ((0 < *(short *)((int)local_40 + (uint)local_21 * 2)) && (local_1c < 3)) {
      local_1c = local_1c + 1;
      while (3 < (int)local_1c + (int)local_18) {
        local_18 = local_18 + -1;
        local_28 = local_28 + 1;
        if (2 < local_28) {
          FUN_005e9f20("shOwnUsed <= 2","..\\Casino\\PokerHand.cpp",0xef9);
        }
      }
      goto LAB_00491c59;
    }
    local_21 = local_21 + 1;
    if (*DAT_00791410 < local_21) {
      FUN_005e9f20("ucCurrent <= EightValue.ucValue","..\\Casino\\PokerHand.cpp",0xeff);
    }
  } while( true );
}

