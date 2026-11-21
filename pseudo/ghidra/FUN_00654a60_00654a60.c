// FUN_00654a60  00654a60

void __fastcall FUN_00654a60(int *param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 *local_28;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ac581;
  local_10 = ExceptionList;
  uVar2 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_005fa880(0,0xffffffff,1,0x156,0x103,0x23,1,0x78,0x7c,0xa1,0,0,0);
  FUN_005fa880(0,0xffffffff,1,0x156,0x104,0x24,1,0xff,0xff,0xff,0,0,0);
  FUN_005fa880(0,0xffffffff,0x202,1,3,0x180,1,0x78,0x7c,0xa1,0,0,0);
  FUN_005fa880(0,0xffffffff,0x202,1,4,0x181,1,0xff,0xff,0xff,0,0,0);
  uVar15 = 0xffffffff;
  uVar13 = 0x12;
  uVar11 = 1;
  uVar9 = 6;
  uVar8 = 0x18b;
  uVar7 = 0x11;
  uVar6 = 0x73;
  uVar5 = 0x49;
  uVar3 = FUN_00630f40("SID_SHELL_ENVIRONMENT",0x49,0x73,0x11,0x18b,6,1,0x12,0xffffffff,uVar2);
  FUN_005fa5b0(0,0xffffffff,uVar3,uVar5,uVar6,uVar7,uVar8,uVar9,uVar11,uVar13,uVar15);
  for (local_18 = 0; local_18 < 3; local_18 = local_18 + 1) {
    uVar9 = 0;
    uVar8 = 0xffffffff;
    uVar7 = 0x4a;
    uVar6 = 0x4b;
    uVar5 = 0x48;
    uVar3 = FUN_00630f40((&PTR_s_SID_GENERIC_OK_0077082c)[local_18],0x48,0x4b,0x4a,0xffffffff,0);
    FUN_005f9de0(0,local_18,(-(uint)(local_18 != 0) & 0xfffffff9) + 0x30d4e5,local_18 * 0x5a + 0xf4,
                 0x188,1,uVar3,uVar5,uVar6,uVar7,uVar8,uVar9);
  }
  uVar3 = 0xd;
  FUN_005fb300(0);
  FUN_006026f0(uVar3);
  uVar3 = 0x1b;
  FUN_005fb300(1);
  FUN_006026f0(uVar3);
  uVar11 = 0;
  uVar9 = 0x14;
  uVar8 = 0xffffffff;
  uVar7 = 0x42;
  uVar6 = 0x45;
  uVar5 = 0x1f;
  uVar3 = FUN_00630f40("SID_SHELL_ANIMATIONS",0x1f,0x45,0x42,0xffffffff,0x14,0);
  FUN_005f9ef0(0,4,0x30d4c9,0xe,0x39,1,uVar3,uVar5,uVar6,uVar7,uVar8,uVar9,uVar11);
  uVar11 = 0;
  uVar9 = 0x14;
  uVar8 = 0xffffffff;
  uVar7 = 0x42;
  uVar6 = 0x45;
  uVar5 = 0x1f;
  uVar3 = FUN_00630f40("SID_SHELL_SOUNDEFFECTS",0x1f,0x45,0x42,0xffffffff,0x14,0);
  FUN_005f9ef0(0,6,0x30d4c9,0xe,0x52,1,uVar3,uVar5,uVar6,uVar7,uVar8,uVar9,uVar11);
  cVar1 = (**(code **)(*DAT_0162ee84 + 0xb8))();
  if (cVar1 != '\0') {
    uVar11 = 0;
    uVar9 = 0x14;
    uVar8 = 0xffffffff;
    uVar7 = 0x42;
    uVar6 = 0x45;
    uVar5 = 0x1f;
    uVar3 = FUN_00630f40("SID_SHELL_BACKGROUNDNOISE",0x1f,0x45,0x42,0xffffffff,0x14,0);
    FUN_005f9ef0(0,5,0x30d4c9,0xe,0x6b,1,uVar3,uVar5,uVar6,uVar7,uVar8,uVar9,uVar11);
  }
  cVar1 = (**(code **)(*DAT_0162ee84 + 0xb4))();
  if (cVar1 != '\0') {
    uVar13 = 0;
    uVar11 = 0x14;
    uVar9 = 0xffffffff;
    uVar8 = 0x42;
    uVar7 = 0x45;
    uVar6 = 0x1f;
    uVar3 = FUN_00630f40("SID_SHELL_SHOWINTROMOVIE",0x1f,0x45,0x42,0xffffffff,0x14,0);
    uVar5 = 1;
    cVar1 = (**(code **)(*DAT_0162ee84 + 0xb8))(1,uVar3);
    FUN_005f9ef0(0,7,0x30d4c9,0xe,0x84 - ((-(uint)(cVar1 != '\0') & 0xffffffe7) + 0x19),uVar5,uVar3,
                 uVar6,uVar7,uVar8,uVar9,uVar11,uVar13);
  }
  uVar16 = 0;
  uVar14 = 0xff;
  uVar12 = 0xff;
  uVar10 = 0xff;
  uVar15 = 0xa1;
  uVar13 = 0x7c;
  uVar11 = 0x78;
  uVar9 = 1;
  uVar8 = 0x2c;
  uVar7 = 9;
  cVar1 = (**(code **)(*DAT_0162ee84 + 0xb8))(9,0x2c,1,0x78,0x7c,0xa1,0xff,0xff,0xff,0);
  iVar4 = 0x75 - ((-(uint)(cVar1 != '\0') & 0xffffffe7) + 0x19);
  uVar6 = 0xf3;
  uVar5 = 0x48;
  uVar3 = FUN_00630f40("SID_SHELL_GENERAL",0x48,0xf3,iVar4);
  FUN_005fa790(0,0xffffffff,uVar3,uVar5,uVar6,iVar4,uVar7,uVar8,uVar9,uVar11,uVar13,uVar15,uVar10,
               uVar12,uVar14,uVar16);
  iVar4 = (**(code **)(*DAT_0162ee84 + 0x168))();
  if (0 < iVar4) {
    uVar11 = 0;
    uVar9 = 0x14;
    uVar8 = 0xffffffff;
    uVar7 = 0x42;
    uVar6 = 0x45;
    uVar5 = 0x1f;
    uVar3 = FUN_00630f40("SID_SHELL_CHARACTERSPEECH",0x1f,0x45,0x42,0xffffffff,0x14,0);
    FUN_005f9ef0(0,3,0x30d4c9,0x119,0x32,1,uVar3,uVar5,uVar6,uVar7,uVar8,uVar9,uVar11);
    uVar15 = 0xffffffff;
    uVar13 = 0x30;
    uVar11 = 2;
    uVar9 = 0x49;
    uVar8 = 0x11b;
    uVar7 = 0x14;
    uVar6 = 0xd4;
    uVar5 = 0x48;
    uVar3 = FUN_00630f40("SID_SHELL_ATTITUDE",0x48,0xd4,0x14,0x11b,0x49,2,0x30,0xffffffff);
    FUN_005fa5b0(0,0xffffffff,uVar3,uVar5,uVar6,uVar7,uVar8,uVar9,uVar11,uVar13,uVar15);
    uVar15 = 0xffffffff;
    uVar13 = 0x11;
    uVar11 = 2;
    uVar9 = 0x72;
    uVar8 = 0x120;
    uVar7 = 0xf;
    uVar6 = 0x3d;
    uVar5 = 0x1f;
    uVar3 = FUN_00630f40("SID_SHELL_SERIOUS",0x1f,0x3d,0xf,0x120,0x72,2,0x11,0xffffffff);
    FUN_005fa5b0(0,0xffffffff,uVar3,uVar5,uVar6,uVar7,uVar8,uVar9,uVar11,uVar13,uVar15);
    uVar15 = 0xffffffff;
    uVar13 = 0x12;
    uVar11 = 2;
    uVar9 = 0x72;
    uVar8 = 0x188;
    uVar7 = 0xf;
    uVar6 = 100;
    uVar5 = 0x1f;
    uVar3 = FUN_00630f40("SID_SHELL_TALKATIVE",0x1f,100,0xf,0x188,0x72,2,0x12,0xffffffff);
    FUN_005fa5b0(0,0xffffffff,uVar3,uVar5,uVar6,uVar7,uVar8,uVar9,uVar11,uVar13,uVar15);
    FUN_005faa90(0,9,0x30d4d3,0x119,0x47,1,0x30d4d4,0x14,0xfffffffe,0xc6,1,0,10);
    FUN_005fa790(0,0xffffffff,&PTR_006b27f8,0x48,0xf3,100,0x10b,0x2c,1,0x78,0x7c,0xa1,0xff,0xff,0xff
                 ,0);
  }
  cVar1 = (**(code **)(*DAT_0162ee84 + 0xbc))();
  if (cVar1 != '\0') {
    uVar13 = 0xffffffff;
    uVar11 = 0x30;
    uVar9 = 2;
    iVar4 = (**(code **)(*param_1 + 0x40))(2,0x30,0xffffffff);
    iVar4 = iVar4 + 2;
    uVar8 = 0x11b;
    uVar7 = 0x14;
    uVar6 = 0xd4;
    uVar5 = 0x48;
    uVar3 = FUN_00630f40("SID_SHELL_SPEED",0x48,0xd4,0x14,0x11b,iVar4);
    FUN_005fa5b0(0,0xffffffff,uVar3,uVar5,uVar6,uVar7,uVar8,iVar4,uVar9,uVar11,uVar13);
    uVar13 = 0xffffffff;
    uVar11 = 0x11;
    uVar9 = 2;
    iVar4 = (**(code **)(*param_1 + 0x40))(2,0x11,0xffffffff);
    iVar4 = iVar4 + 0x2b;
    uVar8 = 0x120;
    uVar7 = 0xf;
    uVar6 = 0x3d;
    uVar5 = 0x1f;
    uVar3 = FUN_00630f40("SID_SHELL_SLOW",0x1f,0x3d,0xf,0x120,iVar4);
    FUN_005fa5b0(0,0xffffffff,uVar3,uVar5,uVar6,uVar7,uVar8,iVar4,uVar9,uVar11,uVar13);
    uVar13 = 0xffffffff;
    uVar11 = 0x12;
    uVar9 = 2;
    iVar4 = (**(code **)(*param_1 + 0x40))(2,0x12,0xffffffff);
    iVar4 = iVar4 + 0x2b;
    uVar8 = 0x188;
    uVar7 = 0xf;
    uVar6 = 100;
    uVar5 = 0x1f;
    uVar3 = FUN_00630f40("SID_SHELL_FAST",0x1f,100,0xf,0x188,iVar4);
    FUN_005fa5b0(0,0xffffffff,uVar3,uVar5,uVar6,uVar7,uVar8,iVar4,uVar9,uVar11,uVar13);
    uVar15 = 10;
    uVar13 = 0;
    uVar11 = 1;
    uVar9 = 0xc6;
    uVar8 = 0xfffffffe;
    uVar7 = 0x14;
    uVar6 = 0x30d4d4;
    uVar5 = 1;
    uVar3 = (**(code **)(*param_1 + 0x40))(1,0x30d4d4,0x14,0xfffffffe,0xc6,1,0,10);
    FUN_005faa90(0,10,0x30d4d3,0x119,uVar3,uVar5,uVar6,uVar7,uVar8,uVar9,uVar11,uVar13,uVar15);
    uVar13 = 0;
    uVar11 = 0xff;
    uVar9 = 0xff;
    uVar8 = 0xff;
    uVar7 = 0xa1;
    uVar6 = 0x7c;
    uVar5 = 0x78;
    uVar3 = 1;
    iVar4 = (**(code **)(*param_1 + 0x40))(1,0x78,0x7c,0xa1,0xff,0xff,0xff,0);
    FUN_005fa790(0,0xffffffff,&PTR_006b27f8,0x48,0xf3,0x51,0x10b,iVar4 + -8,uVar3,uVar5,uVar6,uVar7,
                 uVar8,uVar9,uVar11,uVar13);
  }
  iVar4 = (**(code **)(*DAT_0162ee84 + 0x17c))();
  if (iVar4 != 0) {
    uVar13 = 0;
    uVar11 = 0x14;
    uVar9 = 0xffffffff;
    uVar8 = 0x42;
    uVar7 = 0x45;
    uVar6 = 0x1f;
    uVar3 = FUN_00630f40("SID_SHELL_BACKGROUNDMUSIC",0x1f,0x45,0x42,0xffffffff,0x14,0);
    uVar5 = 2;
    cVar1 = FUN_00655a30(2,uVar3);
    FUN_005f9ef0(0,0xc,0x30d4c9,0x119,0xfb - (-(uint)(cVar1 != '\0') & 7),uVar5,uVar3,uVar6,uVar7,
                 uVar8,uVar9,uVar11,uVar13);
    cVar1 = FUN_00655a30();
    if (cVar1 == '\0') {
      uVar15 = 0xffffffff;
      uVar13 = 0x30;
      uVar11 = 2;
      uVar9 = 0x111;
      uVar8 = 0x11b;
      uVar7 = 0x14;
      uVar6 = 0xd4;
      uVar5 = 0x48;
      uVar3 = FUN_00630f40("SID_SHELL_VOLUME",0x48,0xd4,0x14,0x11b,0x111,2,0x30,0xffffffff);
      FUN_005fa5b0(0,0xffffffff,uVar3,uVar5,uVar6,uVar7,uVar8,uVar9,uVar11,uVar13,uVar15);
      uVar15 = 0xffffffff;
      uVar13 = 0x11;
      uVar11 = 2;
      uVar9 = 0x13a;
      uVar8 = 0x120;
      uVar7 = 0xf;
      uVar6 = 0x3d;
      uVar5 = 0x1f;
      uVar3 = FUN_00630f40("SID_SHELL_LOW",0x1f,0x3d,0xf,0x120,0x13a,2,0x11,0xffffffff);
      FUN_005fa5b0(0,0xffffffff,uVar3,uVar5,uVar6,uVar7,uVar8,uVar9,uVar11,uVar13,uVar15);
      uVar15 = 0xffffffff;
      uVar13 = 0x12;
      uVar11 = 2;
      uVar9 = 0x13a;
      uVar8 = 0x188;
      uVar7 = 0xf;
      uVar6 = 100;
      uVar5 = 0x1f;
      uVar3 = FUN_00630f40("SID_SHELL_HIGH",0x1f,100,0xf,0x188,0x13a,2,0x12,0xffffffff);
      FUN_005fa5b0(0,0xffffffff,uVar3,uVar5,uVar6,uVar7,uVar8,uVar9,uVar11,uVar13,uVar15);
      FUN_005faa90(0,0xd,0x30d4d3,0x119,0x10f,1,0x30d4d4,0x14,0xfffffffe,0xc6,1,0,10);
      FUN_005fa790(0,0xffffffff,&PTR_006b27f8,0x48,0xf3,100,0x10b,0xf4,1,0x78,0x7c,0xa1,0xff,0xff,
                   0xff,0);
    }
    else {
      FUN_005fac90(0,0xb,0x30d4d8,0x110,0xf2,1,0,0x30d4cc,0xd3,0x6c,0x30d4cb,0xd3,0x16,0x30d4cf,0xd2
                   ,0x26,0x58,0xd2,0x27,0x10,0x43,7,0x18,200,0x10,6,0x1f,0x45,0x42,0,0,0,0x30d4d9);
    }
  }
  local_28 = operator_new(0x70);
  local_8 = 0;
  if (local_28 == (undefined4 *)0x0) {
    local_28 = (undefined4 *)0x0;
  }
  else {
    FUN_00680b70();
    *local_28 = EnvironmentDialogHelpGroupBox::vftable;
  }
  local_8 = 0xffffffff;
  param_1[0x6f] = (int)local_28;
  *(int **)(param_1[0x6f] + 4) = param_1;
  uVar15 = 0xffffffff;
  uVar13 = 0;
  uVar11 = 0x23;
  uVar9 = 0x47;
  uVar8 = 0xe3;
  uVar7 = 10;
  uVar6 = 10;
  uVar5 = 0x48;
  uVar3 = FUN_00630f40("SID_GENERIC_HELP",0x48,10,10,0xe3,0x47,0x23,0,0xffffffff);
  FUN_00680ca0(9,0x11c,1,0xf3,0x53,0x78,0x7c,0xa1,0xff,0xff,0xff,uVar3,uVar5,uVar6,uVar7,uVar8,uVar9
               ,uVar11,uVar13,uVar15);
  (**(code **)(*(int *)param_1[0x6f] + 0x74))();
  (**(code **)(*param_1 + 0x44))();
  ExceptionList = local_10;
  return;
}

