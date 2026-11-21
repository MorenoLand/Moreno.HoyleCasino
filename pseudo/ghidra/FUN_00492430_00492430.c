// FUN_00492430  00492430

void __thiscall
FUN_00492430(int param_1,short *param_2,short *param_3,short *param_4,short *param_5,short *param_6,
            short *param_7,short *param_8,short *param_9,short *param_10)

{
  short *psVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte *pbVar6;
  void *pvVar7;
  int iVar8;
  undefined1 *puVar9;
  void *local_a8;
  undefined1 local_61;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  void *local_5c;
  void *local_58;
  undefined1 local_52;
  byte local_51;
  char local_4f;
  undefined1 local_4e;
  undefined1 local_4d;
  undefined1 local_4c;
  undefined1 local_4b [3];
  short local_48;
  short local_44;
  byte local_3e;
  byte local_3d;
  short local_3c;
  undefined4 local_38;
  void *local_34;
  void *local_30;
  short local_2c;
  byte local_25;
  short local_24;
  short local_20 [4];
  uint local_18;
  void *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a0788;
  local_10 = ExceptionList;
  uVar3 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_18 = uVar3;
  if (*(short *)(param_1 + 4) != 4) {
    FUN_005e9f20("shSize == 4","..\\Casino\\PokerHand.cpp",0xf77,uVar3);
  }
  uVar4 = FUN_00464130(DAT_007907b4,DAT_00790784);
  local_8 = 0;
  cVar2 = FUN_00484ba0(uVar4);
  if (cVar2 != '\0') {
    FUN_005e9f20("!ContainsCard(PokerCard(BugRank,BugSuit))","..\\Casino\\PokerHand.cpp",0xf78,uVar3
                );
  }
  local_8 = 0xffffffff;
  FUN_00464210();
  uVar4 = FUN_00464130(DAT_0079077c,DAT_00790780);
  local_8 = 1;
  cVar2 = FUN_00484ba0(uVar4);
  if (cVar2 != '\0') {
    FUN_005e9f20("!ContainsCard(PokerCard(WildRank,WildSuit))","..\\Casino\\PokerHand.cpp",0xf79);
  }
  local_8 = 0xffffffff;
  FUN_00464210();
  *param_2 = 0;
  *param_3 = 0;
  *param_4 = 0;
  *param_5 = 0;
  *param_6 = 0;
  *param_7 = 0;
  *param_8 = 0;
  *param_9 = 0;
  *param_10 = 0;
  for (local_2c = 0; local_2c < 4; local_2c = local_2c + 1) {
    local_20[local_2c] = 0;
  }
  for (local_24 = 0; local_24 < *(short *)(param_1 + 4); local_24 = local_24 + 1) {
    uVar4 = DAT_0079076c;
    FUN_00464400(local_4b);
    cVar2 = FUN_004640b0(uVar4);
    if (cVar2 == '\0') {
      uVar4 = DAT_00790754;
      FUN_00464400(&local_4c);
      cVar2 = FUN_004640b0(uVar4);
      if (cVar2 == '\0') {
        uVar4 = DAT_00790764;
        FUN_00464400(&local_4d);
        cVar2 = FUN_004640b0(uVar4);
        if (cVar2 == '\0') {
          uVar4 = DAT_00790770;
          FUN_00464400(&local_4e);
          cVar2 = FUN_004640b0(uVar4);
          if (cVar2 != '\0') {
            local_20[3] = local_20[3] + 1;
          }
        }
        else {
          local_20[2] = local_20[2] + 1;
        }
      }
      else {
        local_20[1] = local_20[1] + 1;
      }
    }
    else {
      local_20[0] = local_20[0] + 1;
    }
  }
  local_2c = 0;
  do {
    if (3 < local_2c) {
      local_58 = operator_new((*DAT_007913c8 + 1) * 2);
      local_30 = local_58;
      local_5c = operator_new((*DAT_007913c8 + 1) * 2);
      for (local_25 = 0; local_25 <= *DAT_007913c8; local_25 = local_25 + 1) {
        *(undefined2 *)((int)local_30 + (uint)local_25 * 2) = 0;
      }
      local_34 = local_5c;
      for (local_24 = 0; local_24 < *(short *)(param_1 + 4); local_24 = local_24 + 1) {
        puVar9 = &local_5e;
        FUN_00464480(&local_5d);
        pbVar6 = (byte *)FUN_00463f80(puVar9);
        psVar1 = (short *)((int)local_30 + (uint)*pbVar6 * 2);
        *psVar1 = *psVar1 + 1;
        uVar4 = DAT_007907a4;
        FUN_00464480(&local_5f);
        cVar2 = FUN_00464050(uVar4);
        if (cVar2 != '\0') {
          puVar9 = &local_61;
          FUN_00464480(&local_60);
          pbVar6 = (byte *)FUN_00463fd0(puVar9);
          psVar1 = (short *)((int)local_30 + (uint)*pbVar6 * 2);
          *psVar1 = *psVar1 + 1;
        }
      }
      for (local_25 = *DAT_007913f0; local_25 <= *DAT_007913c8; local_25 = local_25 + 1) {
        if (1 < *(short *)((int)local_30 + (uint)local_25 * 2)) {
          *param_3 = *(short *)((int)local_30 + (uint)local_25 * 2) + -2;
          *param_5 = *param_4;
          *param_4 = ((ushort)local_25 - (ushort)*DAT_007913f0) + 2;
        }
        if (0 < *(short *)((int)local_30 + (uint)local_25 * 2)) {
          *param_7 = *param_6;
          *param_6 = ((ushort)local_25 - (ushort)*DAT_007913f0) + 2;
        }
      }
      pvVar7 = operator_new(0xc);
      local_8 = 3;
      if (pvVar7 == (void *)0x0) {
        local_a8 = (void *)0x0;
      }
      else {
        local_a8 = (void *)FUN_00464ed0(0xd,3);
      }
      local_8 = 0xffffffff;
      local_14 = local_a8;
      do {
        cVar2 = FUN_00465000();
        pvVar7 = local_14;
        if (cVar2 == '\0') {
          if (local_14 != (void *)0x0) {
            FUN_00464fd0();
            operator_delete(pvVar7);
          }
          operator_delete(local_30);
          operator_delete(local_34);
          ExceptionList = local_10;
          __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
          return;
        }
        for (local_25 = 0; local_25 <= *DAT_007913c8; local_25 = local_25 + 1) {
          *(undefined2 *)((int)local_34 + (uint)local_25 * 2) = 0;
        }
        for (local_3c = 0; local_3c < 3; local_3c = local_3c + 1) {
          iVar8 = FUN_00465110((int)local_3c);
          psVar1 = (short *)((int)local_34 + (iVar8 + (uint)*DAT_007913b4) * 2);
          *psVar1 = *psVar1 + 1;
        }
        *(undefined2 *)((int)local_34 + (uint)*DAT_007913c8 * 2) =
             *(undefined2 *)((int)local_34 + (uint)*DAT_007913b4 * 2);
        for (local_3d = *DAT_007913c8; *DAT_007913a4 <= local_3d; local_3d = local_3d - 1) {
          local_48 = 0;
          local_44 = 1;
          for (local_3e = 0; local_3e < 5; local_3e = local_3e + 1) {
            if (*(short *)((int)local_34 + ((uint)local_3d - (uint)local_3e) * 2) < 1) {
              if (*(short *)((int)local_30 + ((uint)local_3d - (uint)local_3e) * 2) < 1) break;
            }
            else {
              local_48 = local_48 + 1;
              local_44 = local_44 *
                         (4 - *(short *)((int)local_30 + ((uint)local_3d - (uint)local_3e) * 2));
            }
          }
          if ((local_3e == 5) && (local_48 == 3)) {
            *param_2 = *param_2 + local_44;
            break;
          }
        }
      } while( true );
    }
    if (1 < local_20[local_2c]) {
      *param_8 = local_20[local_2c] + -2;
      for (local_25 = *DAT_007913c8; *DAT_007913f0 <= local_25; local_25 = local_25 - 1) {
        local_38 = 0;
        if (local_2c == 0) {
          local_38 = DAT_0079076c;
        }
        else if (local_2c == 1) {
          local_38 = DAT_00790754;
        }
        else if (local_2c == 2) {
          local_38 = DAT_00790764;
        }
        else if (local_2c == 3) {
          local_38 = DAT_00790770;
        }
        local_51 = local_25;
        uVar4 = local_38;
        uVar5 = FUN_004a1f30(&local_52);
        uVar4 = FUN_00464130(uVar5,uVar4);
        local_8 = 2;
        local_4f = FUN_00484ba0(uVar4);
        local_8 = 0xffffffff;
        FUN_00464210();
        if (local_4f != '\0') {
          if (*param_9 < 1) {
            *param_9 = ((ushort)local_25 - (ushort)*DAT_007913f0) + 2;
          }
          else {
            *param_10 = ((ushort)local_25 - (ushort)*DAT_007913f0) + 2;
          }
          break;
        }
      }
    }
    local_2c = local_2c + 1;
  } while( true );
}

