// FUN_00672030  00672030

void __fastcall FUN_00672030(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  char *_Format;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 local_ac [32];
  char local_8c [132];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  uVar2 = FUN_005f3bf0(local_ac);
  (**(code **)(*DAT_0162ee84 + 0x338))(uVar2);
  _Format = (char *)FUN_00630f40("SID_SHELL_GETTINGSTARTED_FORMAT",local_ac);
  sprintf(local_8c,_Format);
  FUN_005fa5b0(0,0xffffffff,local_8c,0x49,0x1ab,0x19,3,5,1,6,0xffffffff);
  uVar9 = 0xd;
  uVar7 = 0xffffffff;
  uVar6 = 0x4a;
  uVar5 = 0x4b;
  uVar4 = 0x48;
  uVar2 = FUN_00630f40("SID_SHELL_PLAY",0x48,0x4b,0x4a,0xffffffff,0xd);
  FUN_005f9de0(0,0,0x30d4e5,(-(uint)(*(char *)(param_1 + 0x1bc) != '\0') & 0xffffffd6) + 0xb0,0x159,
               1,uVar2,uVar4,uVar5,uVar6,uVar7,uVar9);
  if (*(char *)(param_1 + 0x1bc) != '\0') {
    uVar9 = 0x1b;
    uVar7 = 0xffffffff;
    uVar6 = 0x4a;
    uVar5 = 0x4b;
    uVar4 = 0x48;
    uVar2 = FUN_00630f40("SID_SHELL_LEAVE",0x48,0x4b,0x4a,0xffffffff,0x1b);
    FUN_005f9de0(0,1,0x30d4de,0xe0,0x159,1,uVar2,uVar4,uVar5,uVar6,uVar7,uVar9);
  }
  uVar9 = 0;
  uVar7 = 0xffffffff;
  uVar6 = 0x4a;
  uVar5 = 0x4b;
  uVar4 = 0x48;
  uVar2 = FUN_00630f40("SID_SHELL_TUTORIAL",0x48,0x4b,0x4a,0xffffffff,0);
  FUN_005f9de0(0,2,0x30d4de,10,0x159,1,uVar2,uVar4,uVar5,uVar6,uVar7,uVar9);
  FUN_005fa880(0,0,1,0x10e,0xdb,0x21,1,0x78,0x7c,0xa1,0,0,0);
  FUN_005fa880(0,0,1,0x10e,0xdc,0x22,1,0xff,0xff,0xff,0,0,0);
  FUN_005fa880(0,0,0x1b1,1,3,0x151,1,0x78,0x7c,0xa1,0,0,0);
  FUN_005fa880(0,0,0x1b1,1,4,0x152,1,0xff,0xff,0xff,0,0,0);
  uVar10 = 0;
  uVar9 = 0x14;
  uVar7 = 0xffffffff;
  uVar6 = 0x42;
  uVar5 = 0x45;
  uVar4 = 0x1f;
  uVar2 = FUN_00630f40("SID_SHELL_ALWAYSGETSTARTED",0x1f,0x45,0x42,0xffffffff,0x14,0);
  FUN_005f9ef0(0,6,0x30d4c9,0x32,0x133,1,uVar2,uVar4,uVar5,uVar6,uVar7,uVar9,uVar10);
  cVar1 = FUN_006378a0(0xffffffff);
  if (cVar1 == '\0') {
    piVar3 = (int *)FUN_005fb350(6);
    (**(code **)(*piVar3 + 0xf8))();
  }
  else {
    piVar3 = (int *)FUN_005fb350(6);
    (**(code **)(*piVar3 + 0xf4))();
  }
  uVar10 = 0;
  uVar9 = 0xff;
  uVar7 = 0;
  uVar6 = 1;
  uVar5 = 0x24;
  uVar4 = 9;
  uVar2 = (**(code **)(*DAT_0162ee84 + 0x2fc))(9,0x24,1,0,0xff,0);
  FUN_005f9ce0(0,0,uVar2,uVar4,uVar5,uVar6,uVar7,uVar9,uVar10);
  FUN_005fa790(0,0,&PTR_006b27f8,0x48,0xcb,0x52,9,0x24,1,0x78,0x7c,0xa1,0xff,0xff,0xff,0);
  uVar11 = 0xffffffff;
  uVar8 = 5;
  uVar10 = 1;
  uVar9 = 0x2d;
  uVar7 = 0x67;
  uVar6 = 0x28;
  uVar5 = 0x69;
  uVar4 = 0x1f;
  uVar2 = FUN_00630f40("SID_SHELL_CHANGEPLAYERSETTINGS",0x1f,0x69,0x28,0x67,0x2d,1,5,0xffffffff);
  FUN_005fa5b0(0,0xffffffff,uVar2,uVar4,uVar5,uVar6,uVar7,uVar9,uVar10,uVar8,uVar11);
  uVar9 = 0;
  uVar7 = 0xffffffff;
  uVar6 = 0x4a;
  uVar5 = 0x4b;
  uVar4 = 0x48;
  uVar2 = FUN_00630f40("SID_GENERIC_PLAYERS",0x48,0x4b,0x4a,0xffffffff,0);
  FUN_005f9de0(0,3,0x30d4de,0x6c,0x55,2,uVar2,uVar4,uVar5,uVar6,uVar7,uVar9);
  uVar10 = 0;
  uVar9 = 0xff;
  uVar7 = 0;
  uVar6 = 1;
  uVar5 = 0x7e;
  uVar4 = 9;
  uVar2 = (**(code **)(*DAT_0162ee84 + 0x300))(9,0x7e,1,0,0xff,0);
  FUN_005f9ce0(0,1,uVar2,uVar4,uVar5,uVar6,uVar7,uVar9,uVar10);
  FUN_005fa790(0,1,&PTR_006b27f8,0x48,0xcb,0x52,9,0x7e,1,0x78,0x7c,0xa1,0xff,0xff,0xff,0);
  uVar11 = 0xffffffff;
  uVar8 = 5;
  uVar10 = 1;
  uVar9 = 0x87;
  uVar7 = 0x67;
  uVar6 = 0x28;
  uVar5 = 0x69;
  uVar4 = 0x1f;
  uVar2 = FUN_00630f40("SID_SHELL_CHANGEGAMESETTINGS",0x1f,0x69,0x28,0x67,0x87,1,5,0xffffffff);
  FUN_005fa5b0(0,0xffffffff,uVar2,uVar4,uVar5,uVar6,uVar7,uVar9,uVar10,uVar8,uVar11);
  uVar9 = 0;
  uVar7 = 0xffffffff;
  uVar6 = 0x4a;
  uVar5 = 0x4b;
  uVar4 = 0x48;
  uVar2 = FUN_00630f40("SID_GENERIC_SETTINGS",0x48,0x4b,0x4a,0xffffffff,0);
  FUN_005f9de0(0,4,0x30d4de,0x6c,0xaf,2,uVar2,uVar4,uVar5,uVar6,uVar7,uVar9);
  cVar1 = (**(code **)(*DAT_0162ee80 + 0xb0))();
  if (cVar1 != '\0') {
    piVar3 = (int *)FUN_005fb300(4);
    (**(code **)(*piVar3 + 0xd0))();
  }
  cVar1 = (**(code **)(*DAT_0162ee80 + 0xb4))();
  if (cVar1 != '\0') {
    piVar3 = (int *)FUN_005fb300(3);
    (**(code **)(*piVar3 + 0xd0))();
  }
  FUN_005f9ce0(0,1,0x30d4f9,9,0xd8,1,0,0xff,0);
  FUN_005fa790(0,2,&PTR_006b27f8,0x48,0xcb,0x52,9,0xd8,1,0x78,0x7c,0xa1,0xff,0xff,0xff,0);
  uVar11 = 0xffffffff;
  uVar8 = 5;
  uVar10 = 1;
  uVar9 = 0xe1;
  uVar7 = 0x67;
  uVar6 = 0x28;
  uVar5 = 0x69;
  uVar4 = 0x1f;
  uVar2 = FUN_00630f40("SID_SHELL_LEARNRULES",0x1f,0x69,0x28,0x67,0xe1,1,5,0xffffffff);
  FUN_005fa5b0(0,0xffffffff,uVar2,uVar4,uVar5,uVar6,uVar7,uVar9,uVar10,uVar8,uVar11);
  uVar9 = 0;
  uVar7 = 0xffffffff;
  uVar6 = 0x4a;
  uVar5 = 0x4b;
  uVar4 = 0x48;
  uVar2 = FUN_00630f40("SID_SHELL_RULES",0x48,0x4b,0x4a,0xffffffff,0);
  FUN_005f9de0(0,5,0x30d4de,0x6c,0x109,2,uVar2,uVar4,uVar5,uVar6,uVar7,uVar9);
  (**(code **)(*DAT_0162ee80 + 0x164))(param_1);
  piVar3 = (int *)(**(code **)(*DAT_0162ee84 + 0xe8))();
  cVar1 = (**(code **)(*piVar3 + 0x88))();
  if (cVar1 == '\0') {
    piVar3 = (int *)FUN_005fb300(2);
    (**(code **)(*piVar3 + 0x70))();
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

