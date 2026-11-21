// FUN_00498920  00498920

undefined4 __fastcall FUN_00498920(int param_1)

{
  short *psVar1;
  char cVar2;
  short sVar3;
  undefined4 uVar4;
  byte *pbVar5;
  undefined1 *puVar6;
  undefined1 local_31;
  undefined1 local_30;
  undefined1 local_2f;
  undefined1 local_2e;
  undefined1 local_2d;
  void *local_2c;
  byte local_25;
  short local_24;
  short local_20;
  short local_1c;
  void *local_18;
  short local_14;
  short local_10;
  short local_c;
  byte local_6;
  byte local_5;
  
  sVar3 = FUN_00484bf0();
  if (sVar3 == 4) {
    uVar4 = 0x1d;
  }
  else {
    local_2c = operator_new((*DAT_007913c8 + 1) * 2);
    for (local_5 = 0; local_5 <= *DAT_007913c8; local_5 = local_5 + 1) {
      *(undefined2 *)((int)local_2c + (uint)local_5 * 2) = 0;
    }
    local_18 = local_2c;
    for (local_1c = 0; local_1c < *(short *)(param_1 + 4); local_1c = local_1c + 1) {
      puVar6 = &local_2e;
      FUN_00464480(&local_2d);
      pbVar5 = (byte *)FUN_00463f80(puVar6);
      psVar1 = (short *)((int)local_18 + (uint)*pbVar5 * 2);
      *psVar1 = *psVar1 + 1;
      uVar4 = DAT_007907a4;
      FUN_00464480(&local_2f);
      cVar2 = FUN_00464050(uVar4);
      if (cVar2 != '\0') {
        puVar6 = &local_31;
        FUN_00464480(&local_30);
        pbVar5 = (byte *)FUN_00463fd0(puVar6);
        psVar1 = (short *)((int)local_18 + (uint)*pbVar5 * 2);
        *psVar1 = *psVar1 + 1;
      }
    }
    local_6 = 0;
    local_10 = 0;
    local_c = 0;
    local_14 = 0;
    for (local_5 = *DAT_007913b4; local_5 <= *DAT_007913c8; local_5 = local_5 + 1) {
      if (*(short *)((int)local_18 + (uint)local_5 * 2) < 1) {
        local_10 = 0;
      }
      else {
        if (local_5 != *DAT_007913b4) {
          local_14 = local_14 + 1;
        }
        local_10 = local_10 + 1;
        if (local_c < local_10) {
          local_6 = local_5;
          local_c = local_10;
        }
      }
    }
    if (local_c == 5) {
      operator_delete(local_18);
      uVar4 = 0xffff;
    }
    else if (local_c == 4) {
      operator_delete(local_18);
      if (local_6 == *DAT_00791414) {
        uVar4 = 0x1f;
      }
      else if (local_6 == *DAT_007913c8) {
        uVar4 = 0x1f;
      }
      else {
        uVar4 = 0x1e;
      }
    }
    else if (local_14 < 4) {
      operator_delete(local_18);
      uVar4 = 0xffff;
    }
    else {
      local_20 = 0;
      for (local_5 = *DAT_007913b4; local_5 <= *DAT_0079138c; local_5 = local_5 + 1) {
        local_24 = 0;
        for (local_25 = 0; local_25 < 5; local_25 = local_25 + 1) {
          if (0 < *(short *)((int)local_18 + ((uint)local_5 + (uint)local_25) * 2)) {
            local_24 = local_24 + 1;
          }
        }
        if (local_20 < local_24) {
          local_20 = local_24;
        }
      }
      operator_delete(local_18);
      if (local_20 == 5) {
        FUN_005e9f20("shMostHave != 5","..\\Casino\\PokerHand.cpp",0x1746);
      }
      if (local_20 == 4) {
        uVar4 = 0x1f;
      }
      else {
        uVar4 = 0xffff;
      }
    }
  }
  return uVar4;
}

