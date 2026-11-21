// FUN_00432e60  00432e60

void __fastcall FUN_00432e60(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 uVar4;
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
  int local_44;
  undefined4 *local_40;
  char *local_30 [4];
  char *local_20;
  char *local_1c;
  int local_18;
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0069e763;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_30[0] = "SID_CRAPS_OPTION_TAKEMAXODDS";
  local_30[1] = "SID_CRAPS_OPTION_SHOWBIGDICE";
  local_30[2] = "SID_CRAPS_OPTION_STICKMANVOICE";
  local_30[3] = "SID_CRAPS_OPTION_AUTOROLL";
  local_20 = "SID_CRAPS_OPTION_CONTINUEBUTTON";
  local_1c = "SID_CRAPS_OPTION_ALLBETSWORKING";
  uVar15 = 0xffffffff;
  uVar13 = 5;
  uVar11 = 1;
  uVar9 = 0x41;
  uVar7 = 0x14;
  uVar6 = 0xf;
  uVar5 = 100;
  uVar4 = 0x1f;
  uVar2 = FUN_00630f40("SID_CRAPS_FREEODDS_COLON",0x1f,100,0xf,0x14,0x41,1,5,0xffffffff,
                       DAT_00781870 ^ (uint)&stack0xfffffffc);
  uVar2 = FUN_005fa5b0(0,0xffffffff,uVar2,uVar4,uVar5,uVar6,uVar7,uVar9,uVar11,uVar13,uVar15);
  FUN_005ff5a0(uVar2);
  uVar2 = FUN_005faee0(0,0x32,0x30d4d1,0x14,0x50,1,0x30dbd4,1,&PTR_006b27f8,0x1f,0x45,0x42,
                       0xffffffff);
  FUN_005ff5a0(uVar2);
  for (local_18 = 0; local_18 < 6; local_18 = local_18 + 1) {
    uVar11 = 0;
    uVar9 = 0x14;
    uVar7 = 0xffffffff;
    uVar6 = 0x42;
    uVar5 = 0x45;
    uVar4 = 0x1f;
    uVar2 = FUN_00630f40(local_30[local_18],0x1f,0x45,0x42,0xffffffff,0x14,0);
    uVar2 = FUN_005f9ef0(0,local_18 + 0x33,0x30d4c9,0x14,local_18 * 0x14 + 0x78,1,uVar2,uVar4,uVar5,
                         uVar6,uVar7,uVar9,uVar11);
    FUN_005ff5a0(uVar2);
  }
  uVar16 = 0;
  uVar14 = 0xff;
  uVar12 = 0xff;
  uVar10 = 0xff;
  uVar8 = 0xa1;
  uVar15 = 0x7c;
  uVar13 = 0x78;
  uVar11 = 2;
  uVar9 = 0x118;
  uVar7 = 0x106;
  uVar6 = 0x54;
  uVar5 = 0xf0;
  uVar4 = 0x48;
  uVar2 = FUN_00630f40("SID_GENERIC_HELP",0x48,0xf0,0x54,0x106,0x118,2,0x78,0x7c,0xa1,0xff,0xff,0xff
                       ,0);
  uVar2 = FUN_005fa790(0,10,uVar2,uVar4,uVar5,uVar6,uVar7,uVar9,uVar11,uVar13,uVar15,uVar8,uVar10,
                       uVar12,uVar14,uVar16);
  FUN_005ff5a0(uVar2);
  local_40 = operator_new(0x1d0);
  local_8 = 0;
  if (local_40 == (undefined4 *)0x0) {
    local_40 = (undefined4 *)0x0;
  }
  else {
    FUN_005ec5a0();
    *local_40 = CrapsSettingsHelpText::vftable;
  }
  local_8 = 0xffffffff;
  uVar2 = FUN_005fa5b0(local_40,0x32,&PTR_006b27f8,0x23,0xe6,0x4c,0x10c,0x124,3,5,0xffffffff);
  FUN_005ff5a0(uVar2);
  local_14 = (char *)FUN_006375d0(0xffffffff);
  cVar1 = FUN_005da830();
  if (cVar1 == '\0') {
    local_44 = (int)*local_14;
  }
  else {
    local_44 = 1;
  }
  uVar2 = 1;
  FUN_005fb5e0(0x32);
  FUN_00605ef0(local_44,uVar2);
  if (local_14[1] != '\0') {
    piVar3 = (int *)FUN_005fb350(0x33);
    (**(code **)(*piVar3 + 0xf4))();
  }
  if (local_14[2] != '\0') {
    piVar3 = (int *)FUN_005fb350(0x34);
    (**(code **)(*piVar3 + 0xf4))();
  }
  if (local_14[3] != '\0') {
    piVar3 = (int *)FUN_005fb350(0x35);
    (**(code **)(*piVar3 + 0xf4))();
  }
  if (local_14[4] != '\0') {
    piVar3 = (int *)FUN_005fb350(0x36);
    (**(code **)(*piVar3 + 0xf4))();
  }
  if (local_14[5] != '\0') {
    piVar3 = (int *)FUN_005fb350(0x37);
    (**(code **)(*piVar3 + 0xf4))();
  }
  cVar1 = FUN_00434410();
  if (cVar1 != '\0') {
    piVar3 = (int *)FUN_005fb350(0x38);
    (**(code **)(*piVar3 + 0xf4))();
  }
  if (DAT_007947b0 != 0) {
    cVar1 = FUN_005cdd60();
    if (cVar1 == '\0') {
      piVar3 = (int *)FUN_005fb350(0x37);
      (**(code **)(*piVar3 + 0xf4))();
    }
    else {
      piVar3 = (int *)FUN_005fb350(0x37);
      (**(code **)(*piVar3 + 0xf8))();
    }
  }
  cVar1 = FUN_005da830();
  if (cVar1 != '\0') {
    piVar3 = (int *)FUN_005fb5e0(0x32);
    (**(code **)(*piVar3 + 0xd0))();
    piVar3 = (int *)FUN_005fb350(0x38);
    (**(code **)(*piVar3 + 0xd0))();
  }
  *(undefined1 *)(param_1 + 0x7c) = 0;
  ExceptionList = local_10;
  return;
}

