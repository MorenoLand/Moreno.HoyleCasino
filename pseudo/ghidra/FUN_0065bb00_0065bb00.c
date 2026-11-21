// FUN_0065bb00  0065bb00

void __fastcall FUN_0065bb00(CPropertySection *param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  void *pvVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined **ppuVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 local_54;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ac774;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar22 = 0;
  uVar19 = 0xffffffff;
  uVar17 = 0x4a;
  uVar15 = 0x4b;
  uVar13 = 0x48;
  uVar2 = FUN_00630f40("SID_SHELL_GOTOFACEMAKER",0x48,0x4b,0x4a,0xffffffff,0,
                       DAT_00781870 ^ (uint)&stack0xfffffffc);
  uVar10 = 1;
  uVar3 = (**(code **)(*(int *)param_1 + 0x48))(1,uVar2);
  uVar4 = (**(code **)(*(int *)param_1 + 0x44))(uVar3);
  uVar5 = (**(code **)(*(int *)param_1 + 0x40))(uVar4);
  iVar6 = FUN_005f9de0(0,0x5a,uVar5,uVar4,uVar3,uVar10,uVar2,uVar13,uVar15,uVar17,uVar19,uVar22);
  iVar6 = *(int *)(iVar6 + 400);
  uVar2 = (**(code **)(*(int *)param_1 + 0x4c))();
  *(undefined4 *)(iVar6 + 0xa8) = uVar2;
  iVar6 = (**(code **)(*(int *)param_1 + 0x44))();
  if (iVar6 == 0) {
    piVar7 = (int *)FUN_005fb300(0x5a);
    (**(code **)(*piVar7 + 0x70))();
  }
  iVar6 = (**(code **)(*(int *)param_1 + 0x58))();
  if (iVar6 != 0) {
    uVar23 = 0;
    uVar20 = 0xff;
    uVar22 = 0xff;
    uVar19 = 0xff;
    uVar17 = 0xa1;
    uVar15 = 0x7c;
    uVar13 = 0x78;
    uVar10 = 1;
    uVar2 = (**(code **)(*(int *)param_1 + 0x5c))(1,0x78,0x7c,0xa1,0xff,0xff,0xff,0);
    uVar3 = (**(code **)(*(int *)param_1 + 0x58))(uVar2);
    uVar4 = (**(code **)(*(int *)param_1 + 0x54))(uVar3);
    uVar5 = (**(code **)(*(int *)param_1 + 0x50))(uVar4);
    FUN_005fa790(0,0xffffffff,&PTR_006b27f8,0x1f,uVar5,uVar4,uVar3,uVar2,uVar10,uVar13,uVar15,uVar17
                 ,uVar19,uVar22,uVar20,uVar23);
    uVar15 = 0xffffffff;
    uVar13 = 5;
    uVar10 = 1;
    iVar6 = (**(code **)(*(int *)param_1 + 0x5c))(1,5,0xffffffff);
    iVar6 = iVar6 + 6;
    iVar8 = (**(code **)(*(int *)param_1 + 0x58))(iVar6);
    iVar8 = iVar8 + 10;
    uVar5 = 0x28;
    uVar4 = 0x78;
    uVar3 = 0x1f;
    uVar2 = FUN_00630f40("SID_SHELL_FACEMAKER_BUTTON_DIRECTIONS",0x1f,0x78,0x28,iVar8);
    FUN_005fa5b0(0,0xffffffff,uVar2,uVar3,uVar4,uVar5,iVar8,iVar6,uVar10,uVar13,uVar15);
  }
  uVar19 = 0;
  uVar17 = 0xffffffff;
  uVar15 = 0x4a;
  uVar13 = 0x4b;
  uVar10 = 0x48;
  uVar2 = FUN_00630f40("SID_GENERIC_DELETE",0x48,0x4b,0x4a,0xffffffff,0);
  uVar5 = 1;
  uVar3 = (**(code **)(*(int *)param_1 + 100))(1,uVar2);
  uVar4 = (**(code **)(*(int *)param_1 + 0x60))(uVar3);
  FUN_005f9de0(0,99,0x30d4de,uVar4,uVar3,uVar5,uVar2,uVar10,uVar13,uVar15,uVar17,uVar19);
  iVar6 = (**(code **)(*(int *)param_1 + 0x60))();
  if (iVar6 == 0) {
    piVar7 = (int *)FUN_005fb300(99);
    (**(code **)(*piVar7 + 0x70))();
  }
  for (local_14 = 0; local_14 < 2; local_14 = local_14 + 1) {
    if (local_14 == 0) {
      cVar1 = (**(code **)(*DAT_0162ee84 + 200))();
      if (cVar1 == '\0') {
        local_40 = FUN_00630f40("SID_SHELL_PREMADEFACE_NONTALKING");
      }
      else {
        local_40 = FUN_00630f40("SID_SHELL_PREMADEFACE");
      }
      local_44 = local_40;
    }
    else {
      cVar1 = (**(code **)(*DAT_0162ee84 + 200))();
      if (cVar1 == '\0') {
        local_48 = FUN_00630f40("SID_SHELL_FACEMAKERFACE_NONTALKING");
      }
      else {
        local_48 = FUN_00630f40("SID_SHELL_FACEMAKERFACE");
      }
      local_44 = local_48;
    }
    uVar17 = 0;
    uVar15 = 0x14;
    uVar13 = 0xffffffff;
    uVar10 = 0x42;
    uVar5 = 0x45;
    uVar4 = 0x1f;
    uVar3 = 1;
    iVar6 = (**(code **)(*(int *)param_1 + 0x6c))(1,local_44,0x1f,0x45,0x42,0xffffffff,0x14,0);
    iVar8 = (**(code **)(*(int *)param_1 + 0x70))();
    iVar6 = iVar6 + (uint)(local_14 == 0) * iVar8;
    uVar2 = (**(code **)(*(int *)param_1 + 0x68))(iVar6);
    FUN_005f9ff0(0,0,local_14 + 0x5f,0,0x30d4ca,uVar2,iVar6,uVar3,local_44,uVar4,uVar5,uVar10,uVar13
                 ,uVar15,uVar17);
  }
  iVar6 = (**(code **)(*(int *)param_1 + 0x68))();
  if (iVar6 == 0) {
    piVar7 = CPropertySection::Get(param_1,0x5f,(ulong *)0x0);
    (**(code **)(*piVar7 + 0x70))();
    piVar7 = CPropertySection::Get(param_1,0x60,(ulong *)0x0);
    (**(code **)(*piVar7 + 0x70))();
  }
  uVar4 = 0xffffffff;
  uVar3 = 0x30;
  uVar2 = 5;
  iVar6 = (**(code **)(*(int *)param_1 + 0x78))(5,0x30,0xffffffff);
  iVar6 = iVar6 + 5;
  iVar8 = (**(code **)(*(int *)param_1 + 0x74))(iVar6);
  FUN_005fa5b0(0,2,&PTR_006b27f8,0x1f,0x99,0x11,iVar8 + 2,iVar6,uVar2,uVar3,uVar4);
  pvVar9 = operator_new(0x90);
  local_8 = 0;
  if (pvVar9 == (void *)0x0) {
    local_54 = 0;
  }
  else {
    local_54 = FUN_0065cb60(param_1);
  }
  local_8 = 0xffffffff;
  uVar24 = 0x10;
  uVar21 = 0x74;
  uVar18 = 0x70;
  uVar16 = 0x14;
  uVar14 = 0x76;
  uVar11 = 0x12;
  uVar23 = 0x70;
  uVar20 = 0x30d4d0;
  uVar22 = 0x71;
  uVar19 = 4;
  uVar17 = 0x30d4cd;
  uVar15 = 0x71;
  uVar13 = 0x8a;
  uVar10 = 0x30d4ce;
  uVar5 = 1;
  uVar4 = 1;
  uVar2 = (**(code **)(*(int *)param_1 + 0x78))
                    (1,1,0x30d4ce,0x8a,0x71,0x30d4cd,4,0x71,0x30d4d0,0x70,0x12,0x76,0x14,0x70,0x74,
                     0x10);
  uVar3 = (**(code **)(*(int *)param_1 + 0x74))(uVar2);
  uVar2 = FUN_005fab80(local_54,0x62,0x30d4da,uVar3,uVar2,uVar4,uVar5,uVar10,uVar13,uVar15,uVar17,
                       uVar19,uVar22,uVar20,uVar23,uVar11,uVar14,uVar16,uVar18,uVar21,uVar24);
  *(undefined4 *)(param_1 + 0x1bc) = uVar2;
  cVar1 = (**(code **)(*DAT_0162ee84 + 200))();
  if (cVar1 != '\0') {
    iVar6 = (**(code **)(*(int *)param_1 + 0x7c))();
    if (iVar6 != 0) {
      uVar17 = 0;
      uVar15 = 0xffffffff;
      uVar13 = 0xffffffff;
      uVar10 = 0xffffffff;
      uVar5 = 0xffffffff;
      ppuVar12 = &PTR_006b27f8;
      uVar4 = 2;
      uVar2 = (**(code **)(*(int *)param_1 + 0x80))
                        (2,&PTR_006b27f8,0xffffffff,0xffffffff,0xffffffff,0xffffffff,0);
      uVar3 = (**(code **)(*(int *)param_1 + 0x7c))(uVar2);
      FUN_005f9de0(0,0x5b,0x231ae0,uVar3,uVar2,uVar4,ppuVar12,uVar5,uVar10,uVar13,uVar15,uVar17);
      uVar17 = 0x1f;
      uVar15 = 0x1f;
      uVar13 = 0x1f;
      uVar10 = 0x1f;
      ppuVar12 = &PTR_006b27f8;
      uVar5 = 1;
      uVar4 = 0x138f;
      uVar3 = 1;
      uVar2 = (**(code **)(*(int *)param_1 + 0x80))(1,0x138f,1,&PTR_006b27f8,0x1f,0x1f,0x1f,0x1f);
      iVar6 = (**(code **)(*(int *)param_1 + 0x7c))(uVar2);
      piVar7 = (int *)FUN_005faee0(0,0x5c,0x231ae1,iVar6 + 0x22,uVar2,uVar3,uVar4,uVar5,ppuVar12,
                                   uVar10,uVar13,uVar15,uVar17);
      FUN_00602e30(5,0);
      iVar6 = FUN_0065d150();
      (**(code **)(*piVar7 + 0xf0))(iVar6 + 0x186bf,1);
      if (DAT_00795f95 != '\0') {
        for (local_14 = 0x186e1; local_14 < 0x186e5; local_14 = local_14 + 1) {
          FUN_005f2ba0(local_14);
        }
        for (local_14 = 0x186e6; local_14 < 0x186ea; local_14 = local_14 + 1) {
          FUN_005f2ba0(local_14);
        }
      }
    }
  }
  ExceptionList = local_10;
  return;
}

