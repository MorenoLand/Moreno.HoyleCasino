// FUN_0049c760  0049c760

void __thiscall FUN_0049c760(int param_1,int *param_2,undefined2 *param_3)

{
  short *psVar1;
  char cVar2;
  undefined2 uVar3;
  uint uVar4;
  undefined4 uVar5;
  byte *pbVar6;
  void *pvVar7;
  int iVar8;
  undefined1 *puVar9;
  void *local_80;
  undefined1 local_41;
  undefined1 local_40;
  undefined1 local_3f;
  undefined1 local_3e;
  undefined1 local_3d;
  void *local_3c;
  void *local_38;
  byte local_32;
  byte local_31;
  short local_30;
  short local_2c;
  void *local_28;
  void *local_24;
  short local_20;
  byte local_19;
  short local_18;
  void *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a0e86;
  local_10 = ExceptionList;
  uVar4 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*(short *)(param_1 + 4) < 0) {
    FUN_005e9f20("shSize >= 0","..\\Casino\\PokerHand.cpp",0x1a81,uVar4);
  }
  if (6 < *(short *)(param_1 + 4)) {
    FUN_005e9f20("shSize <= 6","..\\Casino\\PokerHand.cpp",0x1a82,uVar4);
  }
  uVar5 = FUN_00464130(DAT_007907b4,DAT_00790784);
  local_8 = 0;
  cVar2 = FUN_00484ba0(uVar5);
  if (cVar2 != '\0') {
    FUN_005e9f20("!ContainsCard(PokerCard(BugRank,BugSuit))","..\\Casino\\PokerHand.cpp",0x1a83,
                 uVar4);
  }
  local_8 = 0xffffffff;
  FUN_00464210();
  uVar5 = FUN_00464130(DAT_0079077c,DAT_00790780);
  local_8 = 1;
  cVar2 = FUN_00484ba0(uVar5);
  if (cVar2 != '\0') {
    FUN_005e9f20("!ContainsCard(PokerCard(WildRank,WildSuit))","..\\Casino\\PokerHand.cpp",0x1a84);
  }
  local_8 = 0xffffffff;
  FUN_00464210();
  uVar3 = FUN_00484bf0();
  *param_3 = uVar3;
  local_38 = operator_new((*DAT_007913c8 + 1) * 2);
  local_24 = local_38;
  local_3c = operator_new((*DAT_007913c8 + 1) * 2);
  for (local_19 = 0; local_19 <= *DAT_007913c8; local_19 = local_19 + 1) {
    *(undefined2 *)((int)local_24 + (uint)local_19 * 2) = 0;
  }
  local_28 = local_3c;
  for (local_2c = 0; local_2c < *(short *)(param_1 + 4); local_2c = local_2c + 1) {
    puVar9 = &local_3e;
    FUN_00464480(&local_3d);
    pbVar6 = (byte *)FUN_00463f80(puVar9);
    psVar1 = (short *)((int)local_24 + (uint)*pbVar6 * 2);
    *psVar1 = *psVar1 + 1;
    uVar5 = DAT_007907a4;
    FUN_00464480(&local_3f);
    cVar2 = FUN_00464050(uVar5);
    if (cVar2 != '\0') {
      puVar9 = &local_41;
      FUN_00464480(&local_40);
      pbVar6 = (byte *)FUN_00463fd0(puVar9);
      psVar1 = (short *)((int)local_24 + (uint)*pbVar6 * 2);
      *psVar1 = *psVar1 + 1;
    }
  }
  *param_2 = 0;
  local_18 = 7 - *(short *)(param_1 + 4);
  if (4 < local_18) {
    local_18 = 4;
  }
  pvVar7 = operator_new(0xc);
  local_8 = 2;
  if (pvVar7 == (void *)0x0) {
    local_80 = (void *)0x0;
  }
  else {
    local_80 = (void *)FUN_00464ed0(0xd,(int)local_18);
  }
  local_8 = 0xffffffff;
  local_14 = local_80;
  do {
    cVar2 = FUN_00465000();
    pvVar7 = local_14;
    if (cVar2 == '\0') {
      if (local_14 != (void *)0x0) {
        FUN_00464fd0();
        operator_delete(pvVar7);
      }
      operator_delete(local_24);
      operator_delete(local_28);
      ExceptionList = local_10;
      return;
    }
    for (local_19 = 0; local_19 <= *DAT_007913c8; local_19 = local_19 + 1) {
      *(undefined2 *)((int)local_28 + (uint)local_19 * 2) = 0;
    }
    local_30 = 1;
    for (local_20 = 0; local_20 < local_18; local_20 = local_20 + 1) {
      iVar8 = FUN_00465110((int)local_20);
      psVar1 = (short *)((int)local_28 + (iVar8 + (uint)*DAT_007913b4) * 2);
      *psVar1 = *psVar1 + 1;
      iVar8 = FUN_00465110((int)local_20);
      local_30 = local_30 * (4 - *(short *)((int)local_24 + (iVar8 + (uint)*DAT_007913b4) * 2));
    }
    *(undefined2 *)((int)local_28 + (uint)*DAT_007913c8 * 2) =
         *(undefined2 *)((int)local_28 + (uint)*DAT_007913b4 * 2);
    for (local_31 = *DAT_007913c8; *DAT_007913a4 <= local_31; local_31 = local_31 - 1) {
      local_32 = 0;
      while ((local_32 < 5 &&
             ((0 < *(short *)((int)local_28 + ((uint)local_31 - (uint)local_32) * 2) ||
              (0 < *(short *)((int)local_24 + ((uint)local_31 - (uint)local_32) * 2)))))) {
        local_32 = local_32 + 1;
      }
      if (local_32 == 5) {
        *param_2 = (int)local_30 + *param_2;
        break;
      }
    }
  } while( true );
}

