// FUN_00481a00  00481a00

void __thiscall FUN_00481a00(int param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  char *_Source;
  undefined4 uVar5;
  undefined4 uVar6;
  int local_e0;
  char acStack_d8 [8];
  undefined4 local_d0;
  int aiStack_cc [6];
  undefined4 local_b4;
  int local_b0;
  undefined4 local_ac;
  int local_a8;
  char local_a4 [104];
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  undefined4 local_2c;
  int aiStack_28 [8];
  int local_8;
  
  local_3c = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_b0 = 0;
  if (*(int *)(param_1 + 0x110 + param_2 * 4) == 0) {
    cVar2 = FUN_004810c0(param_2);
    if (cVar2 == '\0') {
      *(undefined1 *)(DAT_007947e0 + 0x4f04) = 0;
    }
    else {
      FUN_00636ee0();
      FUN_00636f70();
      *(undefined4 *)(param_1 + 0x110 + param_2 * 4) = 1;
      local_2c = FUN_00480920();
      FUN_005dcb00(0);
      local_b4 = FUN_005d5a50();
      local_ac = FUN_00481920();
      for (local_30 = 0; local_30 < 8; local_30 = local_30 + 1) {
        aiStack_28[local_30] = -1;
      }
      FUN_004807e0(param_2);
      sprintf(local_a4,"Advancing players to round %d\n",param_2);
      FUN_0062fde0(local_a4);
      FUN_00482070(param_2,local_b4,local_2c,*(undefined4 *)(DAT_007947e0 + 0x4efc),local_ac,
                   param_1 + 0x120);
      local_e0 = 0;
      for (local_30 = 0; local_30 < 0x21; local_30 = local_30 + 1) {
        if (*(int *)(param_1 + 0x124 + local_30 * 0x14) == param_2) {
          aiStack_28[local_e0] = local_30;
          local_e0 = local_e0 + 1;
        }
      }
      if (local_e0 != 6) {
        FUN_005e9f20(&DAT_006bcf50,"..\\Casino\\PokerGame.cpp",0xd19);
      }
      for (local_30 = 0; local_30 < 6; local_30 = local_30 + 1) {
        acStack_d8[local_30] = '\0';
      }
      for (local_30 = 0; local_30 < 6; local_30 = local_30 + 1) {
        do {
          local_8 = FUN_0062fbf0(6);
          if (local_8 < 0) {
            FUN_005e9f20(&DAT_006bcf48,"..\\Casino\\PokerGame.cpp",0xd24);
          }
          if (5 < local_8) {
            FUN_005e9f20(&DAT_006bcf40,"..\\Casino\\PokerGame.cpp",0xd25);
          }
        } while (acStack_d8[local_8] != '\0');
        aiStack_cc[local_30] = local_8;
        acStack_d8[local_8] = '\x01';
      }
      local_e0 = 0;
      local_30 = 0;
      while (iVar3 = FUN_0047f950(), local_30 < iVar3) {
        iVar3 = FUN_0047e390(local_30);
        cVar2 = FUN_004c61b0();
        if (cVar2 == '\0') {
          local_a8 = aiStack_28[aiStack_cc[local_e0]];
          *(int *)(iVar3 + 0x74) = local_a8;
          local_d0 = *(undefined4 *)(&DAT_00720648 + local_a8 * 0xc);
          *(int *)(param_1 + 0x3b4 + local_30 * 4) = local_a8;
          local_b0 = FUN_005dcb00(*(undefined4 *)(iVar3 + 4));
          piVar4 = (int *)FUN_0063aac0();
          if ((*piVar4 == 2) || (piVar4 = (int *)FUN_0063aac0(), *piVar4 == 3)) {
            bVar1 = true;
          }
          else {
            bVar1 = false;
          }
          if (bVar1) {
            FUN_005e9f20("!casinoPlayer->IsHuman()","..\\Casino\\PokerGame.cpp",0xd3d);
          }
          _Source = (char *)FUN_00630f40((&PTR_s_SID_PTC_PIZZA_GUY_00720650)[local_a8 * 3]);
          iVar3 = FUN_0063aac0();
          strcpy((char *)(iVar3 + 4),_Source);
          if ((local_a8 < 0x21) && (0x16 < local_a8)) {
            FUN_0063b490(local_d0);
            *(undefined4 *)(local_b0 + 0xc) = 0xffffffff;
          }
          else {
            *(undefined4 *)(local_b0 + 0xc) = local_d0;
          }
          local_e0 = local_e0 + 1;
          local_8 = FUN_00481870(*(undefined4 *)(param_1 + 300 + local_a8 * 0x14));
          FUN_004c67d0(local_8);
          local_8 = FUN_004818e0(*(undefined4 *)(param_1 + 0x130 + local_a8 * 0x14),param_2,local_e0
                                );
          FUN_004c68c0(local_8);
          local_38 = *(undefined4 *)(param_1 + 0x120 + local_a8 * 0x14);
          local_34 = 0;
          FUN_004c6aa0(local_38);
          FUN_005d5af0(local_38,local_34);
        }
        local_30 = local_30 + 1;
      }
      FUN_0047e540(1);
      local_30 = 0;
      while (iVar3 = FUN_0047f950(), local_30 < iVar3) {
        uVar6 = 0;
        uVar5 = 0;
        FUN_005dcb00(local_30,0,0);
        FUN_006464d0(uVar5,uVar6);
        FUN_00483630(local_30);
        local_30 = local_30 + 1;
      }
      if (*(int *)(DAT_00791364 + 0xf4) == 4) {
        if (param_2 == 1) {
          iVar3 = FUN_0047e170();
          if (iVar3 != 2) {
            *(undefined4 *)(DAT_007947e0 + 0x4f18) = 2;
            FUN_0047d810(*(undefined4 *)(DAT_007947e0 + 0x4f18));
          }
        }
        else if (param_2 == 2) {
          *(undefined4 *)(DAT_007947e0 + 0x4f18) = 3;
          FUN_0047d810(*(undefined4 *)(DAT_007947e0 + 0x4f18));
        }
        else if (param_2 == 3) {
          *(undefined4 *)(DAT_007947e0 + 0x4f18) = 0;
          FUN_0047d810(*(undefined4 *)(DAT_007947e0 + 0x4f18));
        }
      }
      for (local_30 = 0; local_30 < 7; local_30 = local_30 + 1) {
        FUN_005d9180(local_30,1);
      }
    }
  }
  __security_check_cookie(local_3c ^ (uint)&stack0xfffffffc);
  return;
}

