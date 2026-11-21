// FUN_006777a0  006777a0

void __fastcall FUN_006777a0(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
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
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 *local_30;
  undefined4 local_28;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ad711;
  local_10 = ExceptionList;
  uVar2 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_005fa5b0(0,0,"Cards",0x49,0x1ab,0x19,3,5,1,6,0xffffffff);
  FUN_005fa880(0,0,0x1b1,1,3,0x151,1,0x78,0x7c,0xa1,0,0,0);
  FUN_005fa880(0,0,0x1b1,1,4,0x152,1,0xff,0xff,0xff,0,0,0);
  for (local_18 = 0; (int)local_18 < 3; local_18 = local_18 + 1) {
    uVar17 = 0;
    uVar14 = 0xffffffff;
    uVar11 = 0x4a;
    uVar9 = 0x4b;
    uVar7 = 0x48;
    uVar3 = FUN_00630f40((&PTR_s_SID_GENERIC_OK_00781228)[local_18],0x48,0x4b,0x4a,0xffffffff,0,
                         uVar2);
    FUN_005f9de0(0,local_18,(-(uint)(local_18 != 0) & 0xfffffff9) + 0x30d4e5,local_18 * 0x5a + 0xa4,
                 0x15d,1,uVar3,uVar7,uVar9,uVar11,uVar14,uVar17);
  }
  uVar3 = 0xd;
  FUN_005fb300(0);
  FUN_006026f0(uVar3);
  uVar3 = 0x1b;
  FUN_005fb300(1);
  FUN_006026f0(uVar3);
  iVar4 = (**(code **)(*DAT_0162ee80 + 0x1f0))();
  if (iVar4 == 0) {
    uVar18 = 0xffffffff;
    uVar15 = 5;
    uVar12 = 1;
    uVar17 = 0x69;
    uVar14 = 0xc;
    uVar11 = 0x14;
    uVar9 = 200;
    uVar7 = 0x48;
    uVar3 = FUN_00630f40("SID_SHELL_CARDBACKS_COLON",0x48,200,0x14,0xc,0x69,1,5,0xffffffff);
    FUN_005fa5b0(0,0xffffffff,uVar3,uVar7,uVar9,uVar11,uVar14,uVar17,uVar12,uVar15,uVar18);
    FUN_005fac90(0,0,0x30d4eb,6,0x67,1,0,0x30d4cc,0xd3,0xce,0x30d4cb,0xd3,0x16,0x30d4cf,0xd2,0x25,
                 0xbb,0xd2,0x25,0x10,0xa5,7,0x18,200,0x10,0xc,0x1f,0x45,0x42,0,0,0,0x30d4d9);
    uVar12 = 0;
    uVar17 = 0xff;
    uVar14 = 0;
    uVar11 = 1;
    uVar9 = 0x6a;
    uVar7 = 0x114;
    uVar3 = (**(code **)(*DAT_0162ee84 + 0x390))(0x114,0x6a,1,0,0xff,0);
    FUN_005f9ce0(0,0,uVar3,uVar7,uVar9,uVar11,uVar14,uVar17,uVar12);
  }
  cVar1 = (**(code **)(*DAT_0162ee84 + 0x1c8))();
  if (cVar1 != '\0') {
    uVar12 = 0;
    uVar17 = 0xff;
    uVar14 = 0;
    uVar11 = 1;
    uVar9 = 0x6a;
    uVar7 = 0x164;
    uVar3 = (**(code **)(*DAT_0162ee84 + 0x398))(0x164,0x6a,1,0,0xff,0);
    FUN_005f9ce0(0,1,uVar3,uVar7,uVar9,uVar11,uVar14,uVar17,uVar12);
    uVar3 = (**(code **)(*DAT_0162ee84 + 0x398))();
    cVar1 = (**(code **)(*DAT_0162ee84 + 0x1bc))(uVar3);
    if (cVar1 != '\0') {
      FUN_005fb2b0(1);
      iVar4 = FUN_005eb240();
      if (iVar4 < 0x34) {
        FUN_005fb2b0(1);
        local_28 = FUN_005eb240();
      }
      else {
        local_28 = 0x33;
      }
      piVar5 = (int *)FUN_005fb2b0(1);
      (**(code **)(*piVar5 + 0xb0))(local_28);
    }
    uVar16 = 0;
    uVar13 = 0xff;
    uVar10 = 0xff;
    uVar8 = 0xff;
    uVar6 = 0xa1;
    uVar18 = 0x7c;
    uVar15 = 0x78;
    uVar12 = 1;
    uVar17 = 0x28;
    uVar14 = 6;
    uVar11 = 0x3c;
    uVar9 = 0x158;
    uVar7 = 0x48;
    uVar3 = FUN_00630f40("SID_SHELL_CARDFRONTS",0x48,0x158,0x3c,6,0x28,1,0x78,0x7c,0xa1,0xff,0xff,
                         0xff,0);
    FUN_005fa790(0,0,uVar3,uVar7,uVar9,uVar11,uVar14,uVar17,uVar12,uVar15,uVar18,uVar6,uVar8,uVar10,
                 uVar13,uVar16);
    local_18 = 0;
    while( true ) {
      iVar4 = (**(code **)(*DAT_0162ee84 + 0x1ac))();
      if (iVar4 <= (int)local_18) break;
      uVar3 = (**(code **)(*DAT_0162ee84 + 0x1b0))(local_18);
      uVar15 = 0;
      uVar12 = 0x14;
      uVar17 = 0xffffffff;
      uVar14 = 0x42;
      uVar11 = 0x45;
      uVar9 = 0x1f;
      uVar7 = (**(code **)(*DAT_0162ee84 + 0x1cc))(uVar3,0x1f,0x45,0x42,0xffffffff,0x14,0);
      uVar2 = local_18 & 0x80000001;
      if ((int)uVar2 < 0) {
        uVar2 = (uVar2 - 1 | 0xfffffffe) + 1;
      }
      FUN_005f9ff0(0,0,uVar3,0,0x30d4ca,((int)local_18 / 2) * 0x73 + 0x12,uVar2 * 0x14 + 0x35,1,
                   uVar7,uVar9,uVar11,uVar14,uVar17,uVar12,uVar15);
      local_18 = local_18 + 1;
    }
  }
  local_30 = operator_new(0x70);
  local_8 = 0;
  if (local_30 == (undefined4 *)0x0) {
    local_30 = (undefined4 *)0x0;
  }
  else {
    FUN_00680b70();
    *local_30 = CardsDialogHelpGroupBox::vftable;
  }
  local_8 = 0xffffffff;
  *(undefined4 **)(param_1 + 0x1bc) = local_30;
  *(int *)(*(int *)(param_1 + 0x1bc) + 4) = param_1;
  uVar18 = 0xffffffff;
  uVar15 = 0;
  uVar12 = 0x23;
  uVar17 = 0x78;
  uVar14 = 0xaa;
  uVar11 = 10;
  uVar9 = 10;
  uVar7 = 0x48;
  uVar3 = FUN_00630f40("SID_GENERIC_HELP",0x48,10,10,0xaa,0x78,0x23,0,0xffffffff);
  FUN_00680ca0(0xf7,0xc5,1,0xb8,0x86,0x78,0x7c,0xa1,0xff,0xff,0xff,uVar3,uVar7,uVar9,uVar11,uVar14,
               uVar17,uVar12,uVar15,uVar18);
  (**(code **)(**(int **)(param_1 + 0x1bc) + 0x74))();
  FUN_00677c90();
  ExceptionList = local_10;
  return;
}

