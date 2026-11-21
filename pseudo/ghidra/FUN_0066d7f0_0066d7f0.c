// FUN_0066d7f0  0066d7f0

void __fastcall FUN_0066d7f0(int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int *piVar3;
  void *pvVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  undefined1 extraout_var;
  int *piVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int local_50c;
  int local_508;
  int local_504;
  int local_500;
  int local_4fc;
  int local_4f8;
  int local_4f0;
  int local_4ec;
  int local_4e8;
  int local_4e4;
  int local_4e0;
  int local_4dc;
  char local_458 [52];
  int local_424;
  FILE *local_420;
  int local_41c;
  char local_418;
  undefined1 local_417 [1027];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ad00e;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_418 = '\0';
  local_14 = uVar1;
  memset(local_417,0,0x3ff);
  FUN_005eae80(0x263928,0,0,10000,0xffffffff);
  uVar2 = FUN_005f3bf0(uVar1);
  piVar3 = (int *)(**(code **)(*DAT_0162ee84 + 0xe0))(uVar2);
  pvVar4 = operator_new(0x178);
  local_8 = 0;
  if (pvVar4 == (void *)0x0) {
    local_4dc = 0;
  }
  else {
    local_4dc = FUN_005eaaf0();
  }
  local_8 = 0xffffffff;
  param_1[0x7e] = local_4dc;
  uVar14 = 0xffffffff;
  iVar5 = FUN_005f53c0(0xffffffff);
  iVar5 = iVar5 + 5;
  uVar2 = (**(code **)(*param_1 + 0x54))(iVar5);
  uVar6 = (**(code **)(*param_1 + 0x4c))(uVar2);
  FUN_005eae80(0x263929,uVar6,uVar2,iVar5,uVar14);
  (**(code **)(*(int *)param_1[0x7e] + 0x70))();
  pvVar4 = operator_new(0x1d0);
  local_8 = 1;
  if (pvVar4 == (void *)0x0) {
    local_4e0 = 0;
  }
  else {
    local_4e0 = FUN_005ec5a0();
  }
  local_8 = 0xffffffff;
  param_1[0x7f] = local_4e0;
  uVar15 = 0xffffffff;
  uVar13 = 0x30;
  iVar5 = FUN_005f53c0(0x30,0xffffffff);
  iVar5 = iVar5 + 5;
  iVar7 = (**(code **)(*param_1 + 0x54))(iVar5);
  iVar7 = iVar7 + 0xb;
  uVar2 = (**(code **)(*param_1 + 0x4c))(iVar7);
  uVar12 = 0x27;
  uVar11 = 599;
  uVar14 = 0x99;
  uVar6 = (**(code **)(*piVar3 + 0xb4))(0x99,599,0x27,uVar2);
  FUN_005ec8f0(uVar6,uVar14,uVar11,uVar12,uVar2,iVar7,iVar5,uVar13,uVar15);
  (**(code **)(*(int *)param_1[0x7f] + 0x70))();
  iVar5 = (**(code **)(*piVar3 + 0xb8))();
  if (iVar5 != 0) {
    pvVar4 = operator_new(0x1d0);
    local_8 = 2;
    if (pvVar4 == (void *)0x0) {
      local_4e4 = 0;
    }
    else {
      local_4e4 = FUN_005ec5a0();
    }
    local_8 = 0xffffffff;
    param_1[0x80] = local_4e4;
    uVar15 = 0xffffffff;
    uVar13 = 0x30;
    iVar5 = FUN_005f53c0(0x30,0xffffffff);
    iVar5 = iVar5 + 5;
    iVar7 = (**(code **)(*param_1 + 0x54))(iVar5);
    iVar7 = iVar7 + 0x2e;
    uVar2 = (**(code **)(*param_1 + 0x4c))(iVar7);
    uVar12 = 0x19;
    uVar11 = 599;
    uVar14 = 0x96;
    uVar6 = (**(code **)(*piVar3 + 0xb8))(0x96,599,0x19,uVar2);
    FUN_005ec8f0(uVar6,uVar14,uVar11,uVar12,uVar2,iVar7,iVar5,uVar13,uVar15);
    (**(code **)(*(int *)param_1[0x80] + 0x70))();
  }
  pvVar4 = operator_new(0x1d0);
  local_8 = 3;
  if (pvVar4 == (void *)0x0) {
    local_4e8 = 0;
  }
  else {
    local_4e8 = FUN_005ec5a0();
  }
  local_8 = 0xffffffff;
  param_1[0x5e] = local_4e8;
  uVar6 = 0xffffffff;
  uVar2 = 0x11;
  iVar5 = FUN_005f53c0(0x11,0xffffffff);
  iVar5 = iVar5 + 4;
  iVar7 = (**(code **)(*param_1 + 0x54))(iVar5);
  iVar7 = iVar7 + 0x65;
  iVar8 = (**(code **)(*param_1 + 0x4c))(iVar7);
  FUN_005ec8f0(&PTR_006b27f8,0x99,0xf9,0x22,iVar8 + 0xe2,iVar7,iVar5,uVar2,uVar6);
  (**(code **)(*(int *)param_1[0x5e] + 0x70))();
  pvVar4 = operator_new(0x1d0);
  local_8 = 4;
  if (pvVar4 == (void *)0x0) {
    local_4ec = 0;
  }
  else {
    local_4ec = FUN_005ec5a0();
  }
  local_8 = 0xffffffff;
  param_1[0x68] = local_4ec;
  uVar6 = 0xffffffff;
  uVar2 = 0x12;
  iVar5 = FUN_005f53c0(0x12,0xffffffff);
  iVar5 = iVar5 + 4;
  iVar7 = (**(code **)(*param_1 + 0x54))(iVar5);
  iVar7 = iVar7 + 0x65;
  iVar8 = (**(code **)(*param_1 + 0x4c))(iVar7);
  FUN_005ec8f0(&PTR_006b27f8,0x99,0xf9,0x22,iVar8 + 0xe2,iVar7,iVar5,uVar2,uVar6);
  (**(code **)(*(int *)param_1[0x68] + 0x70))();
  pvVar4 = operator_new(0x5c);
  local_8 = 5;
  if (pvVar4 == (void *)0x0) {
    local_4f0 = 0;
  }
  else {
    local_4f0 = FUN_005f6130();
  }
  local_8 = 0xffffffff;
  param_1[0x7c] = local_4f0;
  uVar2 = 0xffffffff;
  iVar5 = FUN_005f53c0(0xffffffff);
  iVar5 = iVar5 + 2;
  iVar7 = (**(code **)(*param_1 + 0x54))(iVar5);
  iVar7 = iVar7 + 0x65;
  iVar8 = (**(code **)(*param_1 + 0x4c))(iVar7);
  FUN_005f61d0(0x189,0x22,iVar8 + 0x67,iVar7,iVar5,uVar2);
  FUN_005f6490(0xde,0xff,0);
  (**(code **)(*(int *)param_1[0x7c] + 0x70))();
  local_424 = (**(code **)(*piVar3 + 200))();
  uVar2 = (**(code **)(*piVar3 + 0xcc))();
  sprintf(&local_418,"data\\%s.hs",uVar2);
  local_420 = (FILE *)FUN_005ea9c0(&local_418,&DAT_006c2d28);
  if (local_420 == (FILE *)0x0) {
    uVar2 = FUN_00630f40("SID_GENERIC_ERROR",0);
    uVar2 = FUN_00630f40("SID_SHELL_HIGHSCORES_FILENOTFOUND",uVar2);
    FUN_0062ff10(uVar2);
    FUN_0066f370(0);
  }
  else {
    if (0 < local_424) {
      fseek(local_420,local_424 * 0x5f0,0);
    }
    fread(param_1 + 0x84,0x98,10,local_420);
    fclose(local_420);
    iVar5 = (**(code **)(*DAT_0162ee84 + 0x31c))();
    param_1[0x83] = iVar5;
    FUN_0063a3e0(0xffffffff,0);
    FUN_0063a8d0(param_1[0x93],param_1[1],0,0,0);
    iVar5 = param_1[0x92];
    piVar9 = (int *)FUN_0063aac0();
    *piVar9 = iVar5;
    if (param_1[0x92] == 2) {
      uVar2 = (**(code **)(*DAT_0162ee84 + 0x1f0))(param_1[0x94],param_1[0x95],param_1[0x96]);
      iVar5 = FUN_0063aac0();
      *(undefined4 *)(iVar5 + 0x54) = uVar2;
    }
    else if (param_1[0x92] == 3) {
      piVar9 = param_1 + 0x97;
      piVar10 = (int *)(*(int *)(*(int *)(param_1[0x83] + 0x20) + 0x14) + 0x10);
      for (iVar5 = 0x13; iVar5 != 0; iVar5 = iVar5 + -1) {
        *piVar10 = *piVar9;
        piVar9 = piVar9 + 1;
        piVar10 = piVar10 + 1;
      }
    }
    iVar5 = FUN_005f53c0();
    FUN_00646380(iVar5 + 8);
    iVar5 = (**(code **)(*param_1 + 0x54))();
    iVar5 = iVar5 + 0x4a;
    iVar7 = (**(code **)(*param_1 + 0x4c))(iVar5);
    FUN_00646150(iVar7 + 0x77,iVar5);
    FUN_00646c20(1);
    pvVar4 = operator_new(0x178);
    local_8 = 6;
    if (pvVar4 == (void *)0x0) {
      local_4f8 = 0;
    }
    else {
      local_4f8 = FUN_005eaaf0();
    }
    local_8 = 0xffffffff;
    param_1[0x7d] = local_4f8;
    uVar6 = 0xffffffff;
    iVar5 = FUN_005f53c0(0xffffffff);
    iVar5 = iVar5 + 6;
    iVar7 = (**(code **)(*param_1 + 0x54))(iVar5);
    iVar7 = iVar7 + 0x4a;
    iVar8 = (**(code **)(*param_1 + 0x4c))(iVar7);
    iVar8 = iVar8 + 0x77;
    uVar2 = (**(code **)(*DAT_0162ee84 + 0x230))(iVar8);
    FUN_005eae80(uVar2,iVar8,iVar7,iVar5,uVar6);
    (**(code **)(*(int *)param_1[0x7d] + 0x70))();
    for (local_41c = 1; local_41c < 10; local_41c = local_41c + 1) {
      pvVar4 = operator_new(0x1d0);
      local_8 = 7;
      if (pvVar4 == (void *)0x0) {
        local_4fc = 0;
      }
      else {
        local_4fc = FUN_005ec5a0();
      }
      local_8 = 0xffffffff;
      param_1[local_41c + 0x5e] = local_4fc;
      uVar6 = 0xffffffff;
      uVar2 = 0x11;
      iVar7 = FUN_005f53c0(0x11,0xffffffff);
      iVar7 = iVar7 + 2;
      iVar8 = local_41c + -1;
      iVar5 = (**(code **)(*param_1 + 0x54))(iVar7);
      iVar5 = iVar8 * 0x18 + 0xa2 + iVar5;
      iVar8 = (**(code **)(*param_1 + 0x4c))(iVar5);
      FUN_005ec8f0(&PTR_006b27f8,0x97,0x127,0x18,iVar8 + 0xa6,iVar5,iVar7,uVar2,uVar6);
      (**(code **)(*(int *)param_1[local_41c + 0x5e] + 0x70))();
      pvVar4 = operator_new(0x1d0);
      local_8 = 8;
      if (pvVar4 == (void *)0x0) {
        local_500 = 0;
      }
      else {
        local_500 = FUN_005ec5a0();
      }
      local_8 = 0xffffffff;
      param_1[local_41c + 0x68] = local_500;
      uVar6 = 0xffffffff;
      uVar2 = 0x12;
      iVar7 = FUN_005f53c0(0x12,0xffffffff);
      iVar7 = iVar7 + 2;
      iVar8 = local_41c + -1;
      iVar5 = (**(code **)(*param_1 + 0x54))(iVar7);
      iVar5 = iVar8 * 0x18 + 0xa2 + iVar5;
      iVar8 = (**(code **)(*param_1 + 0x4c))(iVar5);
      FUN_005ec8f0(&PTR_006b27f8,0x97,0x127,0x18,iVar8 + 0xa6,iVar5,iVar7,uVar2,uVar6);
      (**(code **)(*(int *)param_1[local_41c + 0x68] + 0x70))();
      pvVar4 = operator_new(0x1d0);
      local_8 = 9;
      if (pvVar4 == (void *)0x0) {
        local_504 = 0;
      }
      else {
        local_504 = FUN_005ec5a0();
      }
      local_8 = 0xffffffff;
      param_1[local_41c + 0x72] = local_504;
      uVar6 = 0xffffffff;
      uVar2 = 0x12;
      iVar7 = FUN_005f53c0(0x12,0xffffffff);
      iVar7 = iVar7 + 2;
      iVar8 = local_41c + -1;
      iVar5 = (**(code **)(*param_1 + 0x54))(iVar7);
      iVar5 = iVar8 * 0x18 + 0xa2 + iVar5;
      iVar8 = (**(code **)(*param_1 + 0x4c))(iVar5);
      FUN_005ec8f0(&PTR_006b27f8,0x97,0x19,0x18,iVar8 + 0x82,iVar5,iVar7,uVar2,uVar6);
      (**(code **)(*(int *)param_1[local_41c + 0x72] + 0x70))();
    }
    for (local_41c = 0; local_41c < 10; local_41c = local_41c + 1) {
      if (-1 < DAT_0162ee84[local_41c + 0x19]) {
        FUN_005ecd00(0x9b - (uint)(DAT_0162ee84[local_41c + 0x19] != 0),0xffffffff,
                     CONCAT13((char)((uint)local_41c >> 0x18),CONCAT12(DAT_0075ee1e,DAT_0075ee1c)));
        (**(code **)(*(int *)param_1[DAT_0162ee84[local_41c + 0x19] + 0x5e] + 0x74))();
        FUN_005ecd00(0x9b - (uint)(DAT_0162ee84[local_41c + 0x19] != 0),0xffffffff,
                     CONCAT13(extraout_var,CONCAT12(DAT_0075ee1e,DAT_0075ee1c)));
        (**(code **)(*(int *)param_1[DAT_0162ee84[local_41c + 0x19] + 0x68] + 0x74))();
        if (DAT_0162ee84[local_41c + 0x19] != 0) {
          FUN_005ecd00(0x9a,0xffffffff,CONCAT12(DAT_0075ee1e,DAT_0075ee1c));
          (**(code **)(*(int *)param_1[DAT_0162ee84[local_41c + 0x19] + 0x72] + 0x74))();
        }
        if (DAT_0162ee84[local_41c + 0x19] == 0) {
          FUN_005f6490(0x80,0xd8,0xff);
        }
      }
    }
    pvVar4 = operator_new(0x1d0);
    local_8 = 10;
    if (pvVar4 == (void *)0x0) {
      local_508 = 0;
    }
    else {
      local_508 = FUN_005ec5a0();
    }
    local_8 = 0xffffffff;
    param_1[0x81] = local_508;
    uVar2 = FUN_00630f40("SID_SHELL_HIGHSCORES_CLICKTOEND");
    sprintf(local_458,"%s ",uVar2);
    uVar6 = 0xffffffff;
    uVar2 = 0x12;
    iVar5 = FUN_005f53c0(0x12,0xffffffff);
    iVar5 = iVar5 + 2;
    iVar7 = (**(code **)(*param_1 + 0x54))(iVar5);
    iVar7 = iVar7 + 0x17c;
    iVar8 = (**(code **)(*param_1 + 0x4c))(iVar7);
    FUN_005ec8f0(local_458,0x8b,200,0x14,iVar8 + 0x186,iVar7,iVar5,uVar2,uVar6);
    (**(code **)(*(int *)param_1[0x81] + 0x74))();
    iVar5 = (**(code **)(*piVar3 + 0xbc))();
    if (iVar5 != 0) {
      pvVar4 = operator_new(0x1d0);
      local_8 = 0xb;
      if (pvVar4 == (void *)0x0) {
        local_50c = 0;
      }
      else {
        local_50c = FUN_005ec5a0();
      }
      local_8 = 0xffffffff;
      param_1[0x82] = local_50c;
      uVar14 = 0xffffffff;
      uVar6 = 0x30;
      iVar7 = FUN_005f53c0(0x30,0xffffffff);
      iVar7 = iVar7 + 5;
      iVar8 = (**(code **)(*param_1 + 0x54))(iVar7);
      iVar8 = iVar8 + 0x2e;
      uVar2 = (**(code **)(*param_1 + 0x4c))(iVar8);
      FUN_005ec8f0(iVar5,0x8b,599,0x19,uVar2,iVar8,iVar7,uVar6,uVar14);
      (**(code **)(*(int *)param_1[0x82] + 0x70))();
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

