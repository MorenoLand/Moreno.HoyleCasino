// FUN_004a1910  004a1910

undefined4 * __thiscall FUN_004a1910(int param_1,undefined4 *param_2)

{
  short *psVar1;
  uint uVar2;
  byte *pbVar3;
  undefined1 *puVar4;
  undefined1 local_46;
  undefined1 local_45;
  void *local_44;
  short local_40;
  void *local_3c;
  undefined4 local_38 [4];
  undefined4 local_28;
  byte local_21;
  undefined4 local_20;
  short local_1c;
  byte local_15;
  short local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a110d;
  local_10 = ExceptionList;
  uVar2 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_44 = operator_new((*DAT_007913e0 + 1) * 2);
  for (local_15 = 0; local_15 <= *DAT_007913e0; local_15 = local_15 + 1) {
    *(undefined2 *)((int)local_44 + (uint)local_15 * 2) = 0;
  }
  local_3c = local_44;
  for (local_40 = 0; local_40 < *(short *)(param_1 + 4); local_40 = local_40 + 1) {
    puVar4 = &local_46;
    FUN_00464480(&local_45);
    pbVar3 = (byte *)FUN_00463fd0(puVar4);
    psVar1 = (short *)((int)local_3c + (uint)*pbVar3 * 2);
    *psVar1 = *psVar1 + 1;
  }
  FUN_004a20d0(uVar2);
  local_8 = 1;
  local_1c = 0;
  for (local_15 = *DAT_007913b4; local_15 <= *DAT_007913e0; local_15 = local_15 + 1) {
    if (0 < *(short *)((int)local_3c + (uint)local_15 * 2)) {
      local_1c = local_1c + 1;
    }
  }
  if (local_1c < 5) {
    operator_delete(local_3c);
    FUN_00485940(param_2,0,0,1,0,0,0,0);
    local_8 = local_8 & 0xffffff00;
    FUN_004a20f0();
  }
  else {
    local_14 = 0;
    local_21 = *DAT_007913b4;
    while (local_14 < 5) {
      if (*(short *)((int)local_3c + (uint)local_21 * 2) == 0) {
        local_21 = local_21 + 1;
        if (*DAT_007913e0 < local_21) {
          FUN_005e9f20("ucCurrent <= KingValue.ucValue","..\\Casino\\PokerHand.cpp",0x1f20);
        }
      }
      else {
        if (local_21 == *DAT_007913b4) {
          local_38[local_14] = DAT_007913b4;
        }
        else if (local_21 == *DAT_007913f0) {
          local_38[local_14] = DAT_007913f0;
        }
        else if (local_21 == *DAT_007913d8) {
          local_38[local_14] = DAT_007913d8;
        }
        else if (local_21 == *DAT_00791414) {
          local_38[local_14] = DAT_00791414;
        }
        else if (local_21 == *DAT_007913a4) {
          local_38[local_14] = DAT_007913a4;
        }
        else if (local_21 == *DAT_00791404) {
          local_38[local_14] = DAT_00791404;
        }
        else if (local_21 == *DAT_007913f8) {
          local_38[local_14] = DAT_007913f8;
        }
        else if (local_21 == *DAT_00791410) {
          local_38[local_14] = DAT_00791410;
        }
        else if (local_21 == *DAT_007913f4) {
          local_38[local_14] = DAT_007913f4;
        }
        else if (local_21 == *DAT_0079138c) {
          local_38[local_14] = DAT_0079138c;
        }
        else if (local_21 == *DAT_00791400) {
          local_38[local_14] = DAT_00791400;
        }
        else if (local_21 == *DAT_007913bc) {
          local_38[local_14] = DAT_007913bc;
        }
        else if (local_21 == *DAT_007913e0) {
          local_38[local_14] = DAT_007913e0;
        }
        local_21 = local_21 + 1;
        local_14 = local_14 + 1;
      }
    }
    FUN_004a2100(DAT_00791390,local_28,local_38[3],local_38[2],local_38[1],local_38[0]);
    operator_delete(local_3c);
    *param_2 = local_20;
    local_8 = local_8 & 0xffffff00;
    FUN_004a20f0();
  }
  ExceptionList = local_10;
  return param_2;
}

