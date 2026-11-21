// FUN_0066bb40  0066bb40

void __fastcall FUN_0066bb40(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined **ppuVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int local_ac;
  int local_a8;
  int local_a4;
  undefined4 local_a0;
  int local_9c;
  undefined4 local_98;
  int local_94;
  undefined4 local_90;
  undefined1 local_84 [8];
  void *local_7c;
  int local_78;
  undefined1 local_74 [8];
  void *local_6c;
  int local_68;
  void *local_64;
  int local_60;
  void *local_5c;
  undefined4 local_58;
  void *local_54;
  int local_50;
  void *local_4c;
  undefined4 local_48;
  undefined1 local_44 [8];
  void *local_3c;
  int local_38;
  void *local_34;
  undefined4 local_30;
  undefined1 local_2c [8];
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ace8e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0064ce60(DAT_00781870 ^ (uint)&stack0xfffffffc);
  cVar1 = (**(code **)(*DAT_0162ee84 + 0xb0))();
  if (cVar1 != '\0') {
    iVar2 = (**(code **)(*DAT_0162ee84 + 0x280))();
    if (iVar2 != 0) {
      uVar15 = 0;
      uVar14 = 0xff;
      uVar13 = 0;
      uVar12 = 2;
      uVar10 = 0;
      uVar9 = 0;
      uVar3 = (**(code **)(*DAT_0162ee84 + 0x280))(0,0,2,0,0xff,0);
      FUN_005f9ce0(0,0,uVar3,uVar9,uVar10,uVar12,uVar13,uVar14,uVar15);
      piVar4 = (int *)FUN_005fb2b0(0);
      (**(code **)(*piVar4 + 0x70))();
    }
    local_1c = 0;
    while( true ) {
      iVar2 = (**(code **)(*DAT_0162ee84 + 0x25c))();
      if (iVar2 <= local_1c) break;
      puVar5 = (undefined4 *)(**(code **)(*DAT_0162ee84 + 0x278))(local_2c,local_1c);
      local_18 = *puVar5;
      local_14 = puVar5[1];
      local_34 = operator_new(0x1e8);
      local_8 = 0;
      if (local_34 == (void *)0x0) {
        local_90 = 0;
      }
      else {
        iVar2 = local_1c;
        uVar3 = (**(code **)(*DAT_0162ee84 + 0x270))(local_1c);
        uVar9 = (**(code **)(*DAT_0162ee84 + 0x26c))(local_1c,uVar3);
        uVar9 = (**(code **)(*DAT_0162ee84 + 0x274))(local_1c,uVar9);
        local_90 = FUN_0066cb10(uVar9,uVar3,iVar2);
      }
      local_30 = local_90;
      local_8 = 0xffffffff;
      uVar11 = 0xffffffff;
      uVar15 = 0xffffffff;
      uVar14 = 0xffffffff;
      ppuVar8 = &PTR_006b27f8;
      uVar13 = 5;
      iVar7 = local_1c;
      uVar3 = local_18;
      uVar9 = local_14;
      uVar10 = (**(code **)(*DAT_0162ee84 + 0x260))
                         (local_1c,local_18,local_14,5,&PTR_006b27f8,0xffffffff,0xffffffff,
                          0xffffffff,0xffffffff,0);
      iVar2 = local_1c;
      uVar12 = (**(code **)(*DAT_0162ee84 + 0x268))(local_1c,uVar10);
      uVar3 = FUN_005f9de0(local_30,uVar12,iVar2,uVar10,iVar7,uVar3,uVar9,uVar13,ppuVar8,uVar14,
                           uVar15,uVar11);
      *(undefined4 *)(param_1[0x17] + local_1c * 4) = uVar3;
      iVar2 = (**(code **)(*DAT_0162ee84 + 0x264))(local_1c);
      uVar3 = (**(code **)(*DAT_0162ee84 + 0x264))(local_1c,iVar2 + 1);
      iVar7 = local_1c;
      iVar6 = (**(code **)(*DAT_0162ee84 + 0x264))(local_1c,uVar3);
      iVar6 = iVar6 + 1;
      iVar2 = local_1c;
      uVar3 = (**(code **)(*DAT_0162ee84 + 0x264))(local_1c,iVar6);
      FUN_006023d0(uVar3,iVar2,iVar6,iVar7);
      uVar3 = (**(code **)(*DAT_0162ee84 + 0x264))(local_1c);
      (**(code **)(**(int **)(param_1[0x17] + local_1c * 4) + 0xb0))(uVar3);
      FUN_005eb720(0x80);
      (**(code **)(**(int **)(param_1[0x17] + local_1c * 4) + 0x74))();
      iVar2 = (**(code **)(*DAT_0162ee84 + 0x268))(local_1c);
      if (iVar2 == 2000) {
LAB_0066bec1:
        FUN_005eb700(1);
      }
      else {
        iVar2 = (**(code **)(*DAT_0162ee84 + 0x268))(local_1c);
        if (iVar2 == 0x7d1) goto LAB_0066bec1;
      }
      if (DAT_00795f90 == 3) {
        iVar2 = (**(code **)(*DAT_0162ee84 + 0x268))(local_1c);
        if (iVar2 == 2000) {
          (**(code **)(**(int **)(param_1[0x17] + local_1c * 4) + 0xd0))();
          (**(code **)(**(int **)(param_1[0x17] + local_1c * 4) + 0x70))();
        }
      }
      local_1c = local_1c + 1;
    }
    if (DAT_00795f90 != 3) {
      if (param_1[0x19] == 0) {
        local_3c = operator_new(0x184);
        local_8 = 1;
        if (local_3c == (void *)0x0) {
          local_94 = 0;
        }
        else {
          local_94 = FUN_005f5bf0();
        }
        local_38 = local_94;
        local_8 = 0xffffffff;
        param_1[0x19] = local_94;
      }
      puVar5 = (undefined4 *)(**(code **)(*DAT_0162ee84 + 0x2ac))(local_44);
      local_24 = *puVar5;
      local_20 = puVar5[1];
      uVar13 = 0xffffffff;
      uVar10 = (**(code **)(*DAT_0162ee84 + 0x2b0))(0xffffffff);
      uVar3 = local_24;
      uVar9 = local_20;
      uVar12 = (**(code **)(*DAT_0162ee84 + 0x2a4))(local_24,local_20,uVar10);
      FUN_005eae80(uVar12,uVar3,uVar9,uVar10,uVar13);
      (**(code **)(*(int *)param_1[0x19] + 0x74))();
      cVar1 = (**(code **)(*DAT_0162ee84 + 0x2a8))();
      if (cVar1 != '\0') {
        local_4c = operator_new(0x1c);
        local_8 = 2;
        if (local_4c == (void *)0x0) {
          local_98 = 0;
        }
        else {
          local_98 = FUN_00600a70(0);
        }
        local_48 = local_98;
        local_8 = 0xffffffff;
        FUN_005f5d50(local_98);
      }
    }
    iVar2 = (**(code **)(*DAT_0162ee84 + 0x29c))();
    if (iVar2 != 0) {
      if (param_1[0x18] == 0) {
        local_54 = operator_new(0x184);
        local_8 = 3;
        if (local_54 == (void *)0x0) {
          local_9c = 0;
        }
        else {
          local_9c = FUN_005f5bf0();
        }
        local_50 = local_9c;
        local_8 = 0xffffffff;
        param_1[0x18] = local_9c;
      }
      uVar13 = 0xffffffff;
      uVar12 = 1;
      uVar10 = 0;
      uVar9 = 0;
      uVar3 = (**(code **)(*DAT_0162ee84 + 0x29c))(0,0,1,0xffffffff);
      FUN_005eae80(uVar3,uVar9,uVar10,uVar12,uVar13);
      uVar3 = (**(code **)(*DAT_0162ee84 + 0x2a0))();
      *(undefined4 *)(param_1[0x18] + 0x178) = uVar3;
      (**(code **)(*(int *)param_1[0x18] + 0x74))();
      local_5c = operator_new(0x1c);
      local_8 = 4;
      if (local_5c == (void *)0x0) {
        local_a0 = 0;
      }
      else {
        local_a0 = FUN_00600a70(0);
      }
      local_58 = local_a0;
      local_8 = 0xffffffff;
      FUN_005f5d50(local_a0);
    }
    if (param_1[0x1a] == 0) {
      local_64 = operator_new(0x178);
      local_8 = 5;
      if (local_64 == (void *)0x0) {
        local_a4 = 0;
      }
      else {
        local_a4 = FUN_005eaaf0();
      }
      local_60 = local_a4;
      local_8 = 0xffffffff;
      param_1[0x1a] = local_a4;
    }
    uVar13 = 0xffffffff;
    uVar12 = 1;
    uVar10 = 0;
    uVar9 = 0;
    uVar3 = (**(code **)(*DAT_0162ee84 + 0x294))(0,0,1,0xffffffff);
    FUN_005eae80(uVar3,uVar9,uVar10,uVar12,uVar13);
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
    param_1[0x20] = 0;
    if (param_1[0x1b] == 0) {
      local_6c = operator_new(0x178);
      local_8 = 6;
      if (local_6c == (void *)0x0) {
        local_a8 = 0;
      }
      else {
        local_a8 = FUN_005eaaf0();
      }
      local_68 = local_a8;
      local_8 = 0xffffffff;
      param_1[0x1b] = local_a8;
    }
    puVar5 = (undefined4 *)(**(code **)(*DAT_0162ee84 + 0x28c))(local_74);
    local_18 = *puVar5;
    local_14 = puVar5[1];
    uVar13 = 0xffffffff;
    uVar10 = (**(code **)(*DAT_0162ee84 + 0x290))(0xffffffff);
    uVar3 = local_18;
    uVar9 = local_14;
    uVar12 = (**(code **)(*DAT_0162ee84 + 0x288))(local_18,local_14,uVar10);
    FUN_005eae80(uVar12,uVar3,uVar9,uVar10,uVar13);
    (**(code **)(*(int *)param_1[0x1b] + 0x74))();
    if (param_1[0x1c] == 0) {
      local_7c = operator_new(0x178);
      local_8 = 7;
      if (local_7c == (void *)0x0) {
        local_ac = 0;
      }
      else {
        local_ac = FUN_005eaaf0();
      }
      local_78 = local_ac;
      local_8 = 0xffffffff;
      param_1[0x1c] = local_ac;
    }
    puVar5 = (undefined4 *)(**(code **)(*DAT_0162ee84 + 0x28c))(local_84);
    local_18 = *puVar5;
    local_14 = puVar5[1];
    uVar13 = 0xffffffff;
    uVar10 = (**(code **)(*DAT_0162ee84 + 0x290))(0xffffffff);
    uVar3 = local_18;
    uVar9 = local_14;
    uVar12 = (**(code **)(*DAT_0162ee84 + 0x288))(local_18,local_14,uVar10);
    FUN_005eae80(uVar12,uVar3,uVar9,uVar10,uVar13);
    FUN_005eb5d0(0);
    (**(code **)(*(int *)param_1[0x1c] + 0x74))();
  }
  cVar1 = (**(code **)(*DAT_0162ee84 + 0xb0))();
  if (cVar1 == '\0') {
    cVar1 = FUN_00636760();
    if (cVar1 == '\0') {
      FUN_006361f0();
    }
  }
  cVar1 = FUN_00636760();
  if (cVar1 != '\0') {
    cVar1 = (**(code **)(*DAT_0162ee84 + 0xb0))();
    if (cVar1 != '\0') {
      (**(code **)(*param_1 + 0x16c))(1,0,0xffffffff,0xffffffff,0);
    }
  }
  ExceptionList = local_10;
  return;
}

