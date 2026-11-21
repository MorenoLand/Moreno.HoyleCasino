// FUN_005b0950  005b0950

void __fastcall FUN_005b0950(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
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
  uint uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  int local_d4;
  int local_d0;
  undefined4 *local_cc;
  int local_bc;
  undefined4 local_b8 [21];
  char *local_64 [4];
  char *local_54;
  char *local_50;
  char *local_4c;
  char *local_48;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  int local_24;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a7da6;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_64[0] = "SID_ROYALMATCH_CHECKBOX_DOUBLEDOWN";
  local_64[1] = "SID_ROYALMATCH_CHECKBOX_RESPLITACES";
  local_64[2] = "SID_ROYALMATCH_CHECKBOX_INSURANCE";
  local_64[3] = "SID_ROYALMATCH_CHECKBOX_DEALERHITS17";
  local_54 = "SID_ROYALMATCH_CHECKBOX_DEALERVOICE";
  local_50 = "SID_ROYALMATCH_CHECKBOX_SHOWHANDTOTALS";
  local_4c = "SID_ROYALMATCH_CHECKBOX_CARDCOUNT";
  local_48 = "SID_ROYALMATCH_CHECKBOX_CONTINUE";
  local_b8[0] = 0x10e;
  local_b8[1] = 0xcc;
  local_b8[2] = 0x10e;
  local_b8[3] = 0xdf;
  local_b8[4] = 0x10e;
  local_b8[5] = 0xf2;
  local_b8[6] = 0x10e;
  local_b8[7] = 0x105;
  local_b8[8] = 0x10e;
  local_b8[9] = 0xcc;
  local_b8[10] = 0x10e;
  local_b8[0xb] = 0xdf;
  local_b8[0xc] = 0x10e;
  local_b8[0xd] = 0xf2;
  local_b8[0xe] = 0x10e;
  local_b8[0xf] = 0xcc;
  local_b8[0x10] = 0x10e;
  local_b8[0x11] = 0xdf;
  local_b8[0x12] = 0x10e;
  local_b8[0x13] = 0xf2;
  local_40 = 0x14;
  local_3c = 0x50;
  local_38 = 0x14;
  local_34 = 0x7d;
  local_30 = 0x14;
  local_2c = 0xaa;
  local_28 = 0x14;
  local_24 = 0xd7;
  local_20 = 0x14;
  local_1c = 0x104;
  local_18 = 0;
  local_14 = 0;
  uVar17 = 0xffffffff;
  uVar14 = 5;
  uVar12 = 1;
  uVar4 = 0x41;
  uVar9 = 0x14;
  uVar8 = 0xf;
  uVar7 = 100;
  uVar6 = 0x1f;
  uVar2 = FUN_00630f40("SID_ROYALMATCH_RULES_COLON",0x1f,100,0xf,0x14,0x41,1,5,0xffffffff,
                       DAT_00781870 ^ (uint)&stack0xfffffffc);
  uVar2 = FUN_005fa5b0(0,0xffffffff,uVar2,uVar6,uVar7,uVar8,uVar9,uVar4,uVar12,uVar14,uVar17);
  FUN_005ff5a0(uVar2);
  uVar2 = FUN_005faee0(0,0x32,0x30d4d1,local_40,local_3c,1,0x3154f0,1,&PTR_006b27f8,0x1f,0x45,0x42,
                       0xffffffff);
  FUN_005ff5a0(uVar2);
  uVar14 = 0xffffffff;
  uVar12 = 5;
  uVar9 = 1;
  iVar5 = local_34 + -0xf;
  uVar8 = 0xf;
  uVar7 = 0x96;
  uVar6 = 0x1f;
  uVar2 = local_38;
  uVar4 = FUN_00630f40("SID_ROYALMATCH_NUMBEROFDECKS_COLON",0x1f,0x96,0xf,local_38,iVar5,1,5,
                       0xffffffff);
  uVar2 = FUN_005fa5b0(0,0xffffffff,uVar4,uVar6,uVar7,uVar8,uVar2,iVar5,uVar9,uVar12,uVar14);
  FUN_005ff5a0(uVar2);
  uVar2 = FUN_005faee0(0,0x33,0x30d4d1,local_38,local_34,1,0x3154f1,1,&PTR_006b27f8,0x1f,0x45,0x42,
                       0xffffffff);
  FUN_005ff5a0(uVar2);
  uVar14 = 0xffffffff;
  uVar12 = 5;
  uVar9 = 1;
  iVar5 = local_2c + -0xf;
  uVar8 = 0xf;
  uVar7 = 100;
  uVar6 = 0x1f;
  uVar2 = local_30;
  uVar4 = FUN_00630f40("SID_ROYALMATCH_DOUBLEDOWN_COLON",0x1f,100,0xf,local_30,iVar5,1,5,0xffffffff)
  ;
  uVar2 = FUN_005fa5b0(0,0xffffffff,uVar4,uVar6,uVar7,uVar8,uVar2,iVar5,uVar9,uVar12,uVar14);
  FUN_005ff5a0(uVar2);
  uVar2 = FUN_005faee0(0,0x34,0x30d4d1,local_30,local_2c,1,0x3154f2,1,&PTR_006b27f8,0x1f,0x45,0x42,
                       0xffffffff);
  FUN_005ff5a0(uVar2);
  uVar14 = 0xffffffff;
  uVar12 = 5;
  uVar9 = 1;
  iVar5 = local_24 + -0xf;
  uVar8 = 0xf;
  uVar7 = 100;
  uVar6 = 0x1f;
  uVar2 = local_28;
  uVar4 = FUN_00630f40("SID_ROYALMATCH_SURRENDER_COLON",0x1f,100,0xf,local_28,iVar5,1,5,0xffffffff);
  uVar2 = FUN_005fa5b0(0,0xffffffff,uVar4,uVar6,uVar7,uVar8,uVar2,iVar5,uVar9,uVar12,uVar14);
  FUN_005ff5a0(uVar2);
  uVar2 = FUN_005faee0(0,0x35,0x30d4d1,local_28,local_24,1,0x3154f3,1,&PTR_006b27f8,0x1f,0x45,0x42,
                       0xffffffff);
  FUN_005ff5a0(uVar2);
  uVar14 = 0xffffffff;
  uVar12 = 5;
  uVar9 = 1;
  iVar5 = local_1c + -0xf;
  uVar8 = 0xf;
  uVar7 = 100;
  uVar6 = 0x1f;
  uVar2 = local_20;
  uVar4 = FUN_00630f40("SID_ROYALMATCH_SPLITTING_COLON",0x1f,100,0xf,local_20,iVar5,1,5,0xffffffff);
  uVar2 = FUN_005fa5b0(0,0xffffffff,uVar4,uVar6,uVar7,uVar8,uVar2,iVar5,uVar9,uVar12,uVar14);
  FUN_005ff5a0(uVar2);
  uVar2 = FUN_005faee0(0,0x36,0x30d4d1,local_20,local_1c,1,0x3154f4,1,&PTR_006b27f8,0x1f,0x45,0x42,
                       0xffffffff);
  FUN_005ff5a0(uVar2);
  for (local_bc = 0; local_bc < 8; local_bc = local_bc + 1) {
    uVar12 = 0;
    uVar9 = 0x14;
    uVar8 = 0xffffffff;
    uVar7 = 0x42;
    uVar6 = 0x45;
    uVar4 = 0x1f;
    uVar2 = FUN_00630f40(local_64[local_bc],0x1f,0x45,0x42,0xffffffff,0x14,0);
    uVar2 = FUN_005f9ef0(0,local_bc + 0x37,0x30d4c9,local_b8[local_bc * 2],local_bc * 0x14 + 0x50,1,
                         uVar2,uVar4,uVar6,uVar7,uVar8,uVar9,uVar12);
    FUN_005ff5a0(uVar2);
  }
  uVar17 = 0xffffffff;
  uVar14 = 0x30;
  uVar12 = 2;
  uVar9 = 0x12e;
  uVar8 = 0x11;
  uVar7 = 0x14;
  uVar6 = 0xd4;
  uVar4 = 0x48;
  uVar2 = FUN_00630f40("SID_ROYALMATCH_SHUFFLE",0x48,0xd4,0x14,0x11,0x12e,2,0x30,0xffffffff);
  uVar2 = FUN_005fa5b0(0,0xffffffff,uVar2,uVar4,uVar6,uVar7,uVar8,uVar9,uVar12,uVar14,uVar17);
  FUN_005ff5a0(uVar2);
  uVar2 = FUN_005fa5b0(0,0xffffffff,&DAT_006b4274,0x1f,0x3d,0xf,0x16,0x157,2,0x11,0xffffffff);
  FUN_005ff5a0(uVar2);
  uVar2 = FUN_005fa5b0(0,0xffffffff,&DAT_006b4270,0x1f,100,0xf,0x7e,0x157,2,0x12,0xffffffff);
  FUN_005ff5a0(uVar2);
  uVar2 = FUN_005faa90(0,0,0x30d4d3,0xf,300,1,0x30d4d4,0x14,0xfffffffe,0xc6,1,10,0x50);
  FUN_005ff5a0(uVar2);
  uVar18 = 0;
  uVar15 = 0xff;
  uVar13 = 0xff;
  uVar11 = 0xff;
  uVar10 = 0xa1;
  uVar17 = 0x7c;
  uVar14 = 0x78;
  uVar12 = 2;
  uVar9 = 0x118;
  uVar8 = 0x108;
  uVar7 = 0x54;
  uVar6 = 0xf0;
  uVar4 = 0x48;
  uVar2 = FUN_00630f40("SID_GENERIC_HELP",0x48,0xf0,0x54,0x108,0x118,2,0x78,0x7c,0xa1,0xff,0xff,0xff
                       ,0);
  uVar2 = FUN_005fa790(0,10,uVar2,uVar4,uVar6,uVar7,uVar8,uVar9,uVar12,uVar14,uVar17,uVar10,uVar11,
                       uVar13,uVar15,uVar18);
  FUN_005ff5a0(uVar2);
  local_cc = operator_new(0x1d0);
  local_8 = 0;
  if (local_cc == (undefined4 *)0x0) {
    local_cc = (undefined4 *)0x0;
  }
  else {
    FUN_005ec5a0();
    *local_cc = RoyalMatchSettingsHelpText::vftable;
  }
  local_8 = 0xffffffff;
  uVar2 = FUN_005fa5b0(local_cc,0x32,&PTR_006b27f8,0x23,0xe6,0x4c,0x10e,0x124,3,5,0xffffffff);
  FUN_005ff5a0(uVar2);
  local_44 = FUN_006375d0(0xffffffff);
  uVar2 = 1;
  cVar1 = FUN_005b4ea0(1);
  iVar5 = (int)cVar1;
  FUN_005fb5e0(0x32);
  FUN_00605ef0(iVar5,uVar2);
  cVar1 = FUN_005da830();
  if (cVar1 == '\0') {
    local_d0 = (int)*(char *)(local_44 + 9);
  }
  else {
    local_d0 = *(int *)(DAT_007947e0 + 0x4ef4) + -1;
  }
  uVar2 = 1;
  FUN_005fb5e0(0x33);
  FUN_00605ef0(local_d0,uVar2);
  uVar2 = 1;
  cVar1 = FUN_005b4f20(1);
  iVar5 = (int)cVar1;
  FUN_005fb5e0(0x34);
  FUN_00605ef0(iVar5,uVar2);
  uVar2 = 1;
  cVar1 = FUN_005b6680(1);
  uVar16 = (uint)(cVar1 == '\0');
  FUN_005fb5e0(0x35);
  FUN_00605ef0(uVar16,uVar2);
  cVar1 = FUN_005da830();
  if (cVar1 == '\0') {
    local_d4 = (int)*(char *)(local_44 + 10);
  }
  else {
    local_d4 = 1;
  }
  uVar2 = 1;
  FUN_005fb5e0(0x36);
  FUN_00605ef0(local_d4,uVar2);
  cVar1 = FUN_005b8540();
  if (cVar1 != '\0') {
    piVar3 = (int *)FUN_005fb350(0x37);
    (**(code **)(*piVar3 + 0xf4))();
  }
  cVar1 = FUN_005b8570();
  if (cVar1 != '\0') {
    piVar3 = (int *)FUN_005fb350(0x38);
    (**(code **)(*piVar3 + 0xf4))();
  }
  cVar1 = FUN_005b6630();
  if (cVar1 != '\0') {
    piVar3 = (int *)FUN_005fb350(0x39);
    (**(code **)(*piVar3 + 0xf4))();
  }
  cVar1 = FUN_005b3dc0();
  if (cVar1 != '\0') {
    piVar3 = (int *)FUN_005fb350(0x3a);
    (**(code **)(*piVar3 + 0xf4))();
  }
  if (*(char *)(local_44 + 4) != '\0') {
    piVar3 = (int *)FUN_005fb350(0x3b);
    (**(code **)(*piVar3 + 0xf4))();
  }
  if (*(char *)(local_44 + 5) != '\0') {
    piVar3 = (int *)FUN_005fb350(0x3c);
    (**(code **)(*piVar3 + 0xf4))();
  }
  if (*(char *)(local_44 + 6) != '\0') {
    piVar3 = (int *)FUN_005fb350(0x3d);
    (**(code **)(*piVar3 + 0xf4))();
  }
  if (*(char *)(local_44 + 7) != '\0') {
    piVar3 = (int *)FUN_005fb350(0x3e);
    (**(code **)(*piVar3 + 0xf4))();
  }
  if (DAT_007947b0 != 0) {
    cVar1 = FUN_005cdd60();
    if (cVar1 == '\0') {
      piVar3 = (int *)FUN_005fb350(0x3e);
      (**(code **)(*piVar3 + 0xf4))();
    }
    else {
      piVar3 = (int *)FUN_005fb350(0x3e);
      (**(code **)(*piVar3 + 0xf8))();
    }
  }
  uVar2 = 1;
  cVar1 = FUN_005b5c30(1);
  iVar5 = (int)cVar1;
  FUN_005fb860(0);
  FUN_00605110(iVar5,uVar2);
  *(undefined1 *)(param_1 + 0x7c) = 0;
  cVar1 = FUN_005da830();
  if (cVar1 != '\0') {
    piVar3 = (int *)FUN_005fb5e0(0x32);
    (**(code **)(*piVar3 + 0xd0))();
    piVar3 = (int *)FUN_005fb5e0(0x33);
    (**(code **)(*piVar3 + 0xd0))();
    piVar3 = (int *)FUN_005fb5e0(0x34);
    (**(code **)(*piVar3 + 0xd0))();
    piVar3 = (int *)FUN_005fb5e0(0x35);
    (**(code **)(*piVar3 + 0xd0))();
    piVar3 = (int *)FUN_005fb5e0(0x36);
    (**(code **)(*piVar3 + 0xd0))();
    piVar3 = (int *)FUN_005fb350(0x37);
    (**(code **)(*piVar3 + 0xd0))();
    piVar3 = (int *)FUN_005fb350(0x38);
    (**(code **)(*piVar3 + 0xd0))();
    piVar3 = (int *)FUN_005fb350(0x39);
    (**(code **)(*piVar3 + 0xd0))();
    piVar3 = (int *)FUN_005fb350(0x3a);
    (**(code **)(*piVar3 + 0xd0))();
    piVar3 = (int *)FUN_005fb860(0);
    (**(code **)(*piVar3 + 0xb4))();
  }
  ExceptionList = local_10;
  return;
}

