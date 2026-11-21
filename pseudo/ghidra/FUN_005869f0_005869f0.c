// FUN_005869f0  005869f0

void __fastcall FUN_005869f0(int param_1)

{
  char cVar1;
  uint uVar2;
  void *pvVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  undefined1 extraout_var_02;
  undefined1 extraout_var_03;
  undefined1 extraout_var_04;
  undefined1 extraout_var_05;
  undefined1 extraout_var_06;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  char *pcVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 *local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  char *local_98 [7];
  char *local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  int local_68 [13];
  char *local_34 [3];
  int local_28;
  char *local_24 [4];
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a6e1a;
  local_10 = ExceptionList;
  uVar2 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_24[0] = "SID_KENO_TICKET_NEW";
  local_24[1] = "SID_KENO_TICKET_DUPLICATE";
  local_24[2] = "SID_KENO_TICKET_DELETE";
  local_24[3] = "SID_KENO_TICKET_CLOSE";
  local_14 = "SID_KENO_TICKET_SUBMIT";
  local_68[3] = 0x150;
  local_68[4] = 100;
  local_68[5] = 0x16a;
  local_68[6] = 0x8a;
  local_68[7] = 0x1b4;
  local_68[8] = 100;
  local_68[9] = 0x1ce;
  local_68[10] = 0x173;
  local_68[0xb] = 0x16a;
  local_68[0xc] = 0x173;
  local_98[6] = "SID_KENO_NEWGAMEEVERY_ELLIPSIS";
  local_7c = "SID_KENO_MARK_COLON";
  local_6c = 0x16a;
  local_68[0] = 0xbb;
  local_68[1] = 0x16a;
  local_68[2] = 0xeb;
  local_78 = 0x32;
  local_74 = 0xa2;
  local_70 = 0x181;
  local_34[0] = "SID_KENO";
  local_34[1] = "SID_KENO_NEXTGAMENUMBER_COLON";
  local_34[2] = "SID_KENO_GAMETIME";
  local_98[0] = (char *)0x41;
  local_98[1] = (char *)0x19;
  local_98[2] = (char *)0xeb;
  local_98[3] = (char *)0x19;
  local_98[4] = (char *)0xaa;
  local_98[5] = (char *)0x19;
  if (*(int *)(param_1 + 0x3b68) == 0) {
    pvVar3 = operator_new(8);
    local_8 = 0;
    if (pvVar3 == (void *)0x0) {
      local_130 = 0;
    }
    else {
      local_130 = FUN_005856a0();
    }
    *(undefined4 *)(param_1 + 0x3b68) = local_130;
  }
  local_8 = 0xffffffff;
  FUN_005887c0(uVar2);
  FUN_00588c30();
  FUN_005fa880(0,0,0x206,1,0x28,0x168,1,0x78,0x7c,0xa1,0,0,0);
  FUN_005fa880(0,0,0x206,1,0x28,0x169,1,0xff,0xff,0xff,0,0,0);
  for (local_28 = 0; local_28 < 3; local_28 = local_28 + 1) {
    if (*(int *)(param_1 + 0x3b78 + local_28 * 4) == 0) {
      pvVar3 = operator_new(0x1d0);
      local_8 = 1;
      if (pvVar3 == (void *)0x0) {
        local_134 = 0;
      }
      else {
        local_134 = FUN_005ec5a0();
      }
      local_8 = 0xffffffff;
      *(undefined4 *)(param_1 + 0x3b78 + local_28 * 4) = local_134;
    }
    *(int *)(*(int *)(param_1 + 0x3b78 + local_28 * 4) + 4) = param_1;
    uVar4 = FUN_00630f40(local_34[local_28]);
    (**(code **)(**(int **)(param_1 + 0x3b78 + local_28 * 4) + 0xb4))(uVar4);
    FUN_005ecc60(local_98[local_28 * 2]);
    FUN_005eccb0(local_98[local_28 * 2 + 1]);
    FUN_005ecd00(0x49,0xffffffff,CONCAT13(extraout_var,CONCAT12(DAT_0075ee1e,DAT_0075ee1c)));
    (**(code **)(**(int **)(param_1 + 0x3b78 + local_28 * 4) + 0x40))();
    (**(code **)(**(int **)(param_1 + 0x3b78 + local_28 * 4) + 0x44))(local_98[local_28 + 8],6);
    (**(code **)(**(int **)(param_1 + 0x3b78 + local_28 * 4) + 0x6c))(1);
  }
  if (*(int *)(param_1 + 0x3b8c) == 0) {
    pvVar3 = operator_new(0x1d0);
    local_8 = 2;
    if (pvVar3 == (void *)0x0) {
      local_138 = 0;
    }
    else {
      local_138 = FUN_005ec5a0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x3b8c) = local_138;
  }
  *(int *)(*(int *)(param_1 + 0x3b8c) + 4) = param_1;
  (**(code **)(**(int **)(param_1 + 0x3b8c) + 0xb4))(&PTR_006b27f8);
  FUN_005ecd00(0x2b,0xffffffff,CONCAT13(extraout_var_00,CONCAT12(DAT_0075ee1e,DAT_0075ee1c)));
  FUN_005ecc60(0x25);
  FUN_005eccb0(0x2f);
  (**(code **)(**(int **)(param_1 + 0x3b8c) + 0x40))();
  (**(code **)(**(int **)(param_1 + 0x3b8c) + 0x6c))(1);
  (**(code **)(**(int **)(param_1 + 0x3b8c) + 0x44))(7,0x37);
  if (*(int *)(param_1 + 0x3b84) == 0) {
    pvVar3 = operator_new(0x1d0);
    local_8 = 3;
    if (pvVar3 == (void *)0x0) {
      local_13c = 0;
    }
    else {
      local_13c = FUN_005ec5a0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x3b84) = local_13c;
  }
  *(int *)(*(int *)(param_1 + 0x3b84) + 4) = param_1;
  (**(code **)(**(int **)(param_1 + 0x3b84) + 0xb4))(&DAT_006ccde8);
  FUN_005ecd00(0x1f,0xffffffff,CONCAT13(extraout_var_01,CONCAT12(DAT_0075ee1e,DAT_0075ee1c)));
  FUN_005ecc60(100);
  FUN_005eccb0(0x17);
  (**(code **)(**(int **)(param_1 + 0x3b84) + 0x40))();
  (**(code **)(**(int **)(param_1 + 0x3b84) + 0x44))(0x151,0x28);
  (**(code **)(**(int **)(param_1 + 0x3b84) + 0x6c))(1);
  if (*(int *)(param_1 + 0x3b88) == 0) {
    pvVar3 = operator_new(0x1d0);
    local_8 = 4;
    if (pvVar3 == (void *)0x0) {
      local_140 = 0;
    }
    else {
      local_140 = FUN_005ec5a0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x3b88) = local_140;
  }
  *(int *)(*(int *)(param_1 + 0x3b88) + 4) = param_1;
  uVar4 = FUN_00630f40("SID_KENO_NET_COLON");
  (**(code **)(**(int **)(param_1 + 0x3b88) + 0xb4))(uVar4);
  FUN_005ecd00(0x1f,0xffffffff,CONCAT13(extraout_var_02,CONCAT12(DAT_0075ee1e,DAT_0075ee1c)));
  FUN_005ecc60(0xb9);
  FUN_005eccb0(0x19);
  (**(code **)(**(int **)(param_1 + 0x3b88) + 0x40))();
  (**(code **)(**(int **)(param_1 + 0x3b88) + 0x44))(0x151,0x37);
  (**(code **)(**(int **)(param_1 + 0x3b88) + 0x6c))(1);
  if (*(int *)(param_1 + 0x3b90) == 0) {
    pvVar3 = operator_new(0x1d0);
    local_8 = 5;
    if (pvVar3 == (void *)0x0) {
      local_144 = 0;
    }
    else {
      local_144 = FUN_005ec5a0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x3b90) = local_144;
  }
  *(int *)(*(int *)(param_1 + 0x3b90) + 4) = param_1;
  (**(code **)(**(int **)(param_1 + 0x3b90) + 0xb4))(&PTR_006b27f8);
  FUN_005ecd00(0x2c,0xffffffff,CONCAT13(extraout_var_03,CONCAT12(DAT_0075ee1e,DAT_0075ee1c)));
  FUN_005ecc60(0x6b);
  FUN_005eccb0(0x11);
  (**(code **)(**(int **)(param_1 + 0x3b90) + 0x40))();
  (**(code **)(**(int **)(param_1 + 0x3b90) + 0x44))(0x56,0xcc);
  (**(code **)(**(int **)(param_1 + 0x3b90) + 0x6c))(1);
  if (*(int *)(param_1 + 0x3b94) == 0) {
    pvVar3 = operator_new(0x1d0);
    local_8 = 6;
    if (pvVar3 == (void *)0x0) {
      local_148 = 0;
    }
    else {
      local_148 = FUN_005ec5a0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x3b94) = local_148;
  }
  *(int *)(*(int *)(param_1 + 0x3b94) + 4) = param_1;
  (**(code **)(**(int **)(param_1 + 0x3b94) + 0xb4))(&DAT_006ccdd0);
  FUN_005ecd00(0x2b,0xffffffff,CONCAT13(extraout_var_04,CONCAT12(DAT_0075ee1e,DAT_0075ee1c)));
  FUN_005ecc60(0x58);
  FUN_005eccb0(0x1b);
  (**(code **)(**(int **)(param_1 + 0x3b94) + 0x40))();
  (**(code **)(**(int **)(param_1 + 0x3b94) + 0x6c))(1);
  (**(code **)(**(int **)(param_1 + 0x3b94) + 0x44))(0xaa,0x4b);
  pvVar3 = operator_new(0x1fc);
  local_8 = 7;
  if (pvVar3 == (void *)0x0) {
    local_14c = 0;
  }
  else {
    local_14c = FUN_0058d160();
  }
  local_8 = 0xffffffff;
  uVar4 = FUN_005fa6a0(local_14c,0,0,0x44,0x4c,&DAT_006b83fc,0x2b,0x50,0x1b,0,0,2,3,5);
  *(undefined4 *)(param_1 + 800) = uVar4;
  FUN_0060c330();
  *(undefined1 *)(*(int *)(param_1 + 800) + 0x9d) = 1;
  FUN_0060c560();
  *(undefined4 *)(*(int *)(param_1 + 800) + 0xa0) = 1;
  if (*(int *)(param_1 + 0x3b70) == 0) {
    pvVar3 = operator_new(0x228);
    local_8 = 8;
    if (pvVar3 == (void *)0x0) {
      local_150 = 0;
    }
    else {
      local_150 = FUN_0058b140();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x3b70) = local_150;
  }
  *(int *)(*(int *)(param_1 + 0x3b70) + 4) = param_1;
  (**(code **)(**(int **)(param_1 + 0x3b70) + 0x40))();
  (**(code **)(**(int **)(param_1 + 0x3b70) + 0x44))(0x113,0x28);
  FUN_005eaf00(0x30dfba);
  (**(code **)(**(int **)(param_1 + 0x3b70) + 0x6c))(100);
  if (*(int *)(param_1 + 0x3b98) == 0) {
    pvVar3 = operator_new(0x1d0);
    local_8 = 9;
    if (pvVar3 == (void *)0x0) {
      local_154 = 0;
    }
    else {
      local_154 = FUN_005ec5a0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x3b98) = local_154;
  }
  *(int *)(*(int *)(param_1 + 0x3b98) + 4) = param_1;
  (**(code **)(**(int **)(param_1 + 0x3b98) + 0xb4))(&PTR_006b27f8);
  (**(code **)(**(int **)(param_1 + 0x3b98) + 0x40))();
  FUN_005ecd00(0x1f,0xffffffff,CONCAT13(extraout_var_05,CONCAT12(DAT_0075ee1e,DAT_0075ee1c)));
  FUN_005ecc60(0xb9);
  FUN_005eccb0(0x10);
  (**(code **)(**(int **)(param_1 + 0x3b98) + 0x44))(0x151,0x46);
  (**(code **)(**(int **)(param_1 + 0x3b98) + 0x6c))(1);
  if (*(int *)(param_1 + 0x3b9c) == 0) {
    pvVar3 = operator_new(0x178);
    local_8 = 10;
    if (pvVar3 == (void *)0x0) {
      local_158 = 0;
    }
    else {
      local_158 = FUN_005eaaf0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x3b9c) = local_158;
  }
  *(int *)(*(int *)(param_1 + 0x3b9c) + 4) = param_1;
  (**(code **)(**(int **)(param_1 + 0x3b9c) + 0x40))();
  FUN_005eaf00(0x30dfbf);
  (**(code **)(**(int **)(param_1 + 0x3b9c) + 0x6c))(7);
  if (*(int *)(param_1 + 0x3ba0) == 0) {
    pvVar3 = operator_new(0x178);
    local_8 = 0xb;
    if (pvVar3 == (void *)0x0) {
      local_15c = 0;
    }
    else {
      local_15c = FUN_005eaaf0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x3ba0) = local_15c;
  }
  *(int *)(*(int *)(param_1 + 0x3ba0) + 4) = param_1;
  (**(code **)(**(int **)(param_1 + 0x3ba0) + 0x40))();
  FUN_005eaf00(0x30dfc1);
  (**(code **)(**(int **)(param_1 + 0x3ba0) + 0x6c))(10);
  for (local_28 = 0; local_28 < 5; local_28 = local_28 + 1) {
    if (*(int *)(param_1 + 0x2fc + local_28 * 4) == 0) {
      pvVar3 = operator_new(0x1dc);
      local_8 = 0xc;
      if (pvVar3 == (void *)0x0) {
        local_160 = 0;
      }
      else {
        local_160 = FUN_0058af70();
      }
      local_8 = 0xffffffff;
      *(undefined4 *)(param_1 + 0x2fc + local_28 * 4) = local_160;
    }
    *(int *)(*(int *)(param_1 + 0x2fc + local_28 * 4) + 4) = param_1;
    FUN_005eae80(0x30d4df - (uint)(local_28 != 1),local_68[local_28 * 2 + 3],
                 local_68[local_28 * 2 + 4],1,0xffffffff);
    uVar4 = FUN_00630f40(local_24[local_28],0x48,0x4b,0x4a,0xffffffff,0,0);
    (**(code **)(**(int **)(param_1 + 0x2fc + local_28 * 4) + 0xdc))(uVar4);
    FUN_005f53e0(local_28);
    if (local_28 == 3) {
      FUN_006026f0(0xd);
      FUN_006023d0(4,5,6,7);
    }
  }
  if (*(int *)(param_1 + 0x3b6c) == 0) {
    pvVar3 = operator_new(0x1dc);
    local_8 = 0xd;
    if (pvVar3 == (void *)0x0) {
      local_164 = 0;
    }
    else {
      local_164 = FUN_0058b080();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x3b6c) = local_164;
    *(int *)(*(int *)(param_1 + 0x3b6c) + 4) = param_1;
    (**(code **)(**(int **)(param_1 + 0x3b6c) + 200))(0x30dff0);
    (**(code **)(**(int **)(param_1 + 0x3b6c) + 0x40))();
    (**(code **)(**(int **)(param_1 + 0x3b6c) + 0x6c))(1);
    (**(code **)(**(int **)(param_1 + 0x3b6c) + 0x44))(0x208,0x28);
  }
  if (*(int *)(param_1 + 0x310) == 0) {
    pvVar3 = operator_new(0x208);
    local_8 = 0xe;
    if (pvVar3 == (void *)0x0) {
      local_168 = 0;
    }
    else {
      local_168 = FUN_0058d6a0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x310) = local_168;
    *(int *)(*(int *)(param_1 + 0x310) + 4) = param_1;
    FUN_005eae80(0x30dfc3,7,0x58,4,0xffffffff);
    (**(code **)(**(int **)(param_1 + 0x310) + 0xdc))
              (&PTR_006b27f8,0x67,0xffffffff,0x30,0xffffffff,0,0);
  }
  for (local_28 = 0; local_28 < 2; local_28 = local_28 + 1) {
    uVar19 = 0xffffffff;
    uVar17 = 5;
    uVar15 = 1;
    iVar5 = local_68[local_28 * 2] + -0xf;
    pcVar12 = local_98[local_28 * 2 + 0xb];
    uVar10 = 0xf;
    uVar8 = 0x96;
    uVar7 = 0x1f;
    uVar4 = FUN_00630f40(local_98[local_28 + 6],0x1f,0x96,0xf,pcVar12,iVar5,1,5,0xffffffff);
    FUN_005fa5b0(0,0xffffffff,uVar4,uVar7,uVar8,uVar10,pcVar12,iVar5,uVar15,uVar17,uVar19);
    FUN_005faee0(0,local_28,0x30d4d1,local_98[local_28 * 2 + 0xb],local_68[local_28 * 2],1,
                 (local_28 != 0) + 0x30dfbb,1,&PTR_006b27f8,0x1f,0x45,0x42,0xffffffff);
  }
  for (local_28 = 0; local_28 < 0x50; local_28 = local_28 + 1) {
    if (*(int *)(param_1 + 0x1bc + local_28 * 4) == 0) {
      pvVar3 = operator_new(0x20c);
      local_8 = 0xf;
      if (pvVar3 == (void *)0x0) {
        local_16c = 0;
      }
      else {
        local_16c = FUN_0058d320();
      }
      local_8 = 0xffffffff;
      *(undefined4 *)(param_1 + 0x1bc + local_28 * 4) = local_16c;
      *(int *)(*(int *)(param_1 + 0x1bc + local_28 * 4) + 4) = param_1;
      (**(code **)(**(int **)(param_1 + 0x1bc + local_28 * 4) + 200))(0x30dfb9);
      (**(code **)(**(int **)(param_1 + 0x1bc + local_28 * 4) + 0x40))();
      (**(code **)(**(int **)(param_1 + 0x1bc + local_28 * 4) + 0xb0))(local_28);
      (**(code **)(**(int **)(param_1 + 0x1bc + local_28 * 4) + 0x6c))(1);
      FUN_005fff90(local_28,local_28,local_28,local_28,local_28,local_28,local_28,local_28);
      FUN_00602790(0);
    }
  }
  uVar20 = 0;
  uVar18 = 0xff;
  uVar16 = 0xff;
  uVar14 = 0xff;
  uVar13 = 0xa1;
  uVar11 = 0x7c;
  uVar9 = 0x78;
  uVar19 = 1;
  uVar17 = 0x118;
  uVar15 = 0x142;
  uVar10 = 0x46;
  uVar8 = 0xd2;
  uVar7 = 0x48;
  uVar4 = FUN_00630f40("SID_GENERIC_HELP",0x48,0xd2,0x46,0x142,0x118,1,0x78,0x7c,0xa1,0xff,0xff,0xff
                       ,0);
  FUN_005fa790(0,0xffffffff,uVar4,uVar7,uVar8,uVar10,uVar15,uVar17,uVar19,uVar9,uVar11,uVar13,uVar14
               ,uVar16,uVar18,uVar20);
  if (*(int *)(param_1 + 0x3b74) == 0) {
    local_170 = operator_new(0x1d0);
    local_8 = 0x10;
    if (local_170 == (undefined4 *)0x0) {
      local_170 = (undefined4 *)0x0;
    }
    else {
      FUN_005ec5a0();
      *local_170 = KenoDialogHelpText::vftable;
    }
    local_8 = 0xffffffff;
    *(undefined4 **)(param_1 + 0x3b74) = local_170;
  }
  *(int *)(*(int *)(param_1 + 0x3b74) + 4) = param_1;
  (**(code **)(**(int **)(param_1 + 0x3b74) + 0xb4))(&PTR_006b27f8);
  (**(code **)(**(int **)(param_1 + 0x3b74) + 0x40))();
  FUN_005ef3b0(0xc);
  FUN_005ecd00(0x23,0xffffffff,CONCAT13(extraout_var_06,CONCAT12(DAT_0075ee1e,DAT_0075ee1c)));
  (**(code **)(**(int **)(param_1 + 0x3b74) + 0x44))(0x14a,0x122);
  FUN_005ecc60(0xc3);
  FUN_005eccb0(100);
  (**(code **)(**(int **)(param_1 + 0x3b74) + 0x6c))(1);
  cVar1 = FUN_005e2f60();
  if (cVar1 == '\x02') {
    piVar6 = (int *)FUN_005fb5e0(0);
    (**(code **)(*piVar6 + 0xf0))(0x30dfbd,0);
  }
  else if (cVar1 == '\x05') {
    piVar6 = (int *)FUN_005fb5e0(0);
    (**(code **)(*piVar6 + 0xf0))(0x30dfbe,0);
  }
  else if (cVar1 == '\n') {
    piVar6 = (int *)FUN_005fb5e0(0);
    (**(code **)(*piVar6 + 0xf0))(0x30dfbf,0);
  }
  iVar5 = FUN_00588a80();
  if (iVar5 == 0) {
    FUN_005f2ba0(0x30dfc0);
  }
  FUN_00589050(0xffffffff);
  FUN_0058dfb0(*(undefined4 *)(param_1 + 0x3be4 + *(int *)(param_1 + 0x3c08) * 4));
  ExceptionList = local_10;
  return;
}

