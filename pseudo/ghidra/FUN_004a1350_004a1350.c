// FUN_004a1350  004a1350

undefined4 * __thiscall
FUN_004a1350(int param_1,undefined4 *param_2,undefined4 param_3,short param_4)

{
  short *psVar1;
  uint uVar2;
  byte *pbVar3;
  undefined1 *puVar4;
  undefined1 local_66;
  undefined1 local_65;
  void *local_64;
  undefined1 local_5e;
  undefined1 local_5d;
  void *local_5c;
  undefined4 local_58 [4];
  undefined4 local_48;
  short local_44;
  byte local_3d;
  short local_3c;
  short local_38;
  short local_34;
  void *local_30;
  void *local_2c;
  short local_28;
  undefined4 local_24;
  short local_20;
  byte local_19;
  short local_18;
  short local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_006a10d1;
  local_10 = ExceptionList;
  uVar2 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 1;
  local_5c = operator_new((*DAT_007913e0 + 1) * 2);
  for (local_19 = 0; local_19 <= *DAT_007913e0; local_19 = local_19 + 1) {
    *(undefined2 *)((int)local_5c + (uint)local_19 * 2) = 0;
  }
  local_2c = local_5c;
  for (local_18 = 0; local_18 < *(short *)(param_1 + 4); local_18 = local_18 + 1) {
    puVar4 = &local_5e;
    FUN_00464480(&local_5d);
    pbVar3 = (byte *)FUN_00463fd0(puVar4);
    psVar1 = (short *)((int)local_2c + (uint)*pbVar3 * 2);
    *psVar1 = *psVar1 + 1;
  }
  local_64 = operator_new((*DAT_007913e0 + 1) * 2);
  for (local_19 = 0; local_19 <= *DAT_007913e0; local_19 = local_19 + 1) {
    *(undefined2 *)((int)local_64 + (uint)local_19 * 2) = 0;
  }
  local_30 = local_64;
  for (local_18 = 0; local_18 < param_4; local_18 = local_18 + 1) {
    puVar4 = &local_66;
    FUN_00464480(&local_65);
    pbVar3 = (byte *)FUN_00463fd0(puVar4);
    psVar1 = (short *)((int)local_30 + (uint)*pbVar3 * 2);
    *psVar1 = *psVar1 + 1;
  }
  FUN_004a20d0(uVar2);
  local_8 = CONCAT31(local_8._1_3_,2);
  FUN_004a2100(DAT_00791390,DAT_007913f4,&DAT_007913ff,&DAT_007913ff,&DAT_007913ff,&DAT_007913ff);
  local_20 = 0;
  local_28 = 0;
  local_14 = 0;
  for (local_19 = *DAT_007913b4; local_19 <= *DAT_00791410; local_19 = local_19 + 1) {
    if (0 < *(short *)((int)local_2c + (uint)local_19 * 2)) {
      local_20 = local_20 + 1;
    }
    if (0 < *(short *)((int)local_30 + (uint)local_19 * 2)) {
      local_28 = local_28 + 1;
    }
    if ((0 < *(short *)((int)local_2c + (uint)local_19 * 2)) ||
       (0 < *(short *)((int)local_30 + (uint)local_19 * 2))) {
      local_14 = local_14 + 1;
    }
  }
  if (((1 < local_20) && (2 < local_28)) && (4 < local_14)) {
    local_34 = 0;
    local_3d = *DAT_007913b4;
    local_3c = 0;
    local_44 = 0;
    local_38 = 0;
    while (local_34 < 5) {
      if ((*(short *)((int)local_2c + (uint)local_3d * 2) < 1) ||
         (*(short *)((int)local_30 + (uint)local_3d * 2) < 1)) {
        if ((0 < *(short *)((int)local_2c + (uint)local_3d * 2)) && (local_44 < 2)) {
          local_44 = local_44 + 1;
          while (2 < (int)local_44 + (int)local_38) {
            local_38 = local_38 + -1;
            local_3c = local_3c + 1;
            if (3 < local_3c) {
              FUN_005e9f20("shWidowUsed <= 3","..\\Casino\\PokerHand.cpp",0x1ed2);
            }
          }
          goto LAB_004a175e;
        }
        if ((0 < *(short *)((int)local_30 + (uint)local_3d * 2)) && (local_3c < 3)) {
          local_3c = local_3c + 1;
          while (3 < (int)local_3c + (int)local_38) {
            local_38 = local_38 + -1;
            local_44 = local_44 + 1;
            if (2 < local_44) {
              FUN_005e9f20("shOwnUsed <= 2","..\\Casino\\PokerHand.cpp",0x1edc);
            }
          }
          goto LAB_004a175e;
        }
        local_3d = local_3d + 1;
        if (*DAT_00791410 < local_3d) {
          FUN_005e9f20("ucCurrent <= EightValue.ucValue","..\\Casino\\PokerHand.cpp",0x1ee2);
        }
      }
      else {
        local_38 = local_38 + 1;
LAB_004a175e:
        if (local_3d == *DAT_007913b4) {
          local_58[local_34] = DAT_007913b4;
        }
        else if (local_3d == *DAT_007913f0) {
          local_58[local_34] = DAT_007913f0;
        }
        else if (local_3d == *DAT_007913d8) {
          local_58[local_34] = DAT_007913d8;
        }
        else if (local_3d == *DAT_00791414) {
          local_58[local_34] = DAT_00791414;
        }
        else if (local_3d == *DAT_007913a4) {
          local_58[local_34] = DAT_007913a4;
        }
        else if (local_3d == *DAT_00791404) {
          local_58[local_34] = DAT_00791404;
        }
        else if (local_3d == *DAT_007913f8) {
          local_58[local_34] = DAT_007913f8;
        }
        else if (local_3d == *DAT_00791410) {
          local_58[local_34] = DAT_00791410;
        }
        local_3d = local_3d + 1;
        local_34 = local_34 + 1;
      }
    }
    FUN_004a2100(DAT_00791390,local_48,local_58[3],local_58[2],local_58[1],local_58[0]);
  }
  operator_delete(local_2c);
  operator_delete(local_30);
  *param_2 = local_24;
  local_8._0_1_ = 1;
  FUN_004a20f0();
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_00484470();
  ExceptionList = local_10;
  return param_2;
}

