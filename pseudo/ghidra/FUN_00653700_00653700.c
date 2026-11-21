// FUN_00653700  00653700

void __fastcall FUN_00653700(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined **ppuVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 *local_60;
  undefined1 local_40 [32];
  uint local_20;
  int *local_1c;
  int local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ac49f;
  local_10 = ExceptionList;
  local_20 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar15 = 0xffffffff;
  uVar14 = 0x12;
  uVar13 = 1;
  uVar12 = 3;
  uVar10 = 5;
  uVar9 = 0x19;
  uVar8 = 0x1f9;
  uVar7 = 0x49;
  uVar2 = FUN_00630f40("SID_SHELL_STATISTICS",0x49,0x1f9,0x19,5,3,1,0x12,0xffffffff,local_20);
  FUN_005fa5b0(0,0,uVar2,uVar7,uVar8,uVar9,uVar10,uVar12,uVar13,uVar14,uVar15);
  for (local_18 = 0; local_18 < 3; local_18 = local_18 + 1) {
    uVar12 = 0;
    uVar10 = 0xffffffff;
    uVar9 = 0x4a;
    uVar8 = 0x4b;
    uVar7 = 0x48;
    uVar2 = FUN_00630f40((&PTR_s_SID_GENERIC_OK_0076d690)[local_18],0x48,0x4b,0x4a,0xffffffff,0);
    FUN_005f9de0(0,local_18,(-(uint)(local_18 != 0) & 0xfffffff9) + 0x30d4e5,0,0,1,uVar2,uVar7,uVar8
                 ,uVar9,uVar10,uVar12);
    piVar3 = (int *)FUN_005fb300(local_18);
    (**(code **)(*piVar3 + 0x44))(local_18 * 0x5a + 0xf4,0x188);
  }
  uVar2 = 0xd;
  FUN_005fb300(0);
  FUN_006026f0(uVar2);
  uVar2 = 0x1b;
  FUN_005fb300(1);
  FUN_006026f0(uVar2);
  FUN_005fa880(0,0,0x202,1,3,0x180,1,0x78,0x7c,0xa1,0,0,0);
  FUN_005fa880(0,0,0x202,1,4,0x181,1,0xff,0xff,0xff,0,0,0);
  uVar15 = 0xffffffff;
  uVar14 = 5;
  uVar13 = 2;
  uVar12 = 0x22;
  uVar10 = 0x15;
  uVar9 = 0x19;
  uVar8 = 200;
  uVar7 = 0x48;
  uVar2 = FUN_00630f40("SID_SHELL_PLAYER_COLON",0x48,200,0x19,0x15,0x22,2,5,0xffffffff);
  FUN_005fa5b0(0,0xffffffff,uVar2,uVar7,uVar8,uVar9,uVar10,uVar12,uVar13,uVar14,uVar15);
  local_60 = operator_new(0xcc);
  local_8 = 0;
  if (local_60 == (undefined4 *)0x0) {
    local_60 = (undefined4 *)0x0;
  }
  else {
    FUN_006280d0();
    *local_60 = StatisticsPlayersListBox::vftable;
  }
  local_8 = 0xffffffff;
  uVar2 = FUN_005fac90(local_60,0,0x30d4d8,0xf,0x20,1,0,0x30d4cc,0xd3,0x6c,0x30d4cb,0xd3,0x16,
                       0x30d4cf,0xd2,0x26,0x58,0xd2,0x27,0x10,0x43,7,0x18,200,0x10,6,0x1f,0x45,0x42,
                       0,0,0,0x30d4d9);
  *(undefined4 *)(param_1 + 0x56c) = uVar2;
  uVar15 = 0xffffffff;
  uVar14 = 5;
  uVar13 = 1;
  uVar12 = 0x21;
  uVar10 = 0x13e;
  uVar9 = 0x16;
  uVar8 = 0x88;
  uVar7 = 0x48;
  uVar2 = FUN_00630f40("SID_SHELL_GAME_COLON",0x48,0x88,0x16,0x13e,0x21,1,5,0xffffffff);
  piVar3 = (int *)FUN_005fa5b0(0,0xffffffff,uVar2,uVar7,uVar8,uVar9,uVar10,uVar12,uVar13,uVar14,
                               uVar15);
  uVar16 = 0xffffffff;
  uVar15 = 0x42;
  uVar14 = 0x45;
  uVar13 = 0x1f;
  ppuVar11 = &PTR_006b27f8;
  uVar12 = 1;
  uVar10 = 0x138e;
  uVar9 = 1;
  uVar8 = 0x39;
  uVar2 = (**(code **)(*DAT_0162ee84 + 0x318))
                    (0x39,1,0x138e,1,&PTR_006b27f8,0x1f,0x45,0x42,0xffffffff);
  uVar7 = (**(code **)(*DAT_0162ee84 + 0x3cc))(uVar2);
  FUN_005faee0(0,3,uVar7,uVar2,uVar8,uVar9,uVar10,uVar12,ppuVar11,uVar13,uVar14,uVar15,uVar16);
  FUN_006542c0();
  puVar4 = (undefined4 *)FUN_0063aac0();
  *puVar4 = 0;
  local_14 = 0;
  local_1c = (int *)(**(code **)(*DAT_0162ee84 + 0xe8))();
  if (local_1c == (int *)0x0) {
    *(undefined4 *)(param_1 + 0x570) = 0;
    *(undefined4 *)(param_1 + 0x570) = 0;
    while (iVar6 = (**(code **)(*DAT_0162ee84 + 0xec))(), *(int *)(param_1 + 0x570) < iVar6) {
      piVar5 = (int *)(**(code **)(*DAT_0162ee84 + 0xe0))(*(undefined4 *)(param_1 + 0x570));
      cVar1 = (**(code **)(*piVar5 + 0x44))();
      if (cVar1 != '\0') break;
      *(int *)(param_1 + 0x570) = *(int *)(param_1 + 0x570) + 1;
    }
  }
  else {
    uVar2 = (**(code **)(*local_1c + 0x4c))();
    *(undefined4 *)(param_1 + 0x570) = uVar2;
    if (*(int *)(param_1 + 0x570) == -1) {
      uVar2 = FUN_005f3bf0();
      *(undefined4 *)(param_1 + 0x570) = uVar2;
    }
    local_14 = (**(code **)(*local_1c + 0x50))();
  }
  uVar7 = 1;
  uVar2 = local_14;
  FUN_005fb5e0(3);
  FUN_00605ef0(uVar2,uVar7);
  iVar6 = (**(code **)(*DAT_0162ee84 + 0xec))();
  if (iVar6 == 1) {
    (**(code **)(*DAT_0162ee84 + 0x338))(0,local_40);
    (**(code **)(*piVar3 + 0xb4))(local_40);
    (**(code **)(*piVar3 + 0x44))(0x112,0x3f);
    piVar3 = (int *)FUN_005fb5e0(3);
    (**(code **)(*piVar3 + 0x70))();
  }
  FUN_006375b0();
  iVar6 = FUN_0063aac0();
  FUN_00628f40(iVar6 + 4,1);
  ExceptionList = local_10;
  __security_check_cookie(local_20 ^ (uint)&stack0xfffffffc);
  return;
}

