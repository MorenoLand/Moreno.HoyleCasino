// FUN_0053aa90  0053aa90

void __fastcall FUN_0053aa90(int param_1)

{
  undefined4 uVar1;
  void *pvVar2;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 *local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  int local_4c [14];
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a4b3e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_4c[0] = 5;
  local_4c[1] = 4;
  local_4c[2] = 3;
  local_4c[3] = 8;
  local_4c[4] = 7;
  local_4c[5] = 6;
  local_4c[6] = 2;
  local_4c[7] = 1;
  local_4c[8] = 0;
  local_4c[9] = 0xb;
  local_4c[10] = 10;
  local_4c[0xb] = 9;
  uVar1 = FUN_00630f40("SID_THREECARDPOKER",DAT_00781870 ^ (uint)&stack0xfffffffc);
  FUN_005f38b0(uVar1);
  FUN_005f1ad0(0x310e98);
  FUN_005f2ba0(0x310e9b);
  FUN_005f2ba0(0x310e9c);
  for (local_4c[0xc] = 0; local_4c[0xc] < 5; local_4c[0xc] = local_4c[0xc] + 1) {
    pvVar2 = operator_new(0x14);
    local_8 = 0;
    if (pvVar2 == (void *)0x0) {
      local_94 = 0;
    }
    else {
      local_94 = FUN_0053bb30();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 4 + local_4c[0xc] * 4) = local_94;
    FUN_0053bc30(local_4c[0xc]);
    pvVar2 = operator_new(0x1d0);
    local_8 = 1;
    if (pvVar2 == (void *)0x0) {
      local_98 = 0;
    }
    else {
      local_98 = FUN_005ec5a0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x80 + local_4c[0xc] * 4) = local_98;
    FUN_005ec8f0(&PTR_006b27f8,0x38,200,0x14,0,0,0x51,0x30,0xffffffff);
  }
  for (local_4c[0xc] = 0; local_4c[0xc] < 0xc; local_4c[0xc] = local_4c[0xc] + 1) {
    pvVar2 = operator_new(0xae4);
    local_8 = 2;
    if (pvVar2 == (void *)0x0) {
      local_9c = 0;
    }
    else {
      local_9c = FUN_0053c1b0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x18 + local_4c[0xc] * 4) = local_9c;
    *(int *)(*(int *)(param_1 + 0x18 + local_4c[0xc] * 4) + 0xae0) = local_4c[0xc];
    FUN_005eae80(0x310e9e,0,0,1,0xffffffff);
    (**(code **)(**(int **)(param_1 + 0x18 + local_4c[0xc] * 4) + 0xb0))(local_4c[local_4c[0xc]]);
    FUN_005eb5d0(0);
    FUN_005cc2c0(*(undefined4 *)(DAT_007933ec + 8 + local_4c[0xc] * 4));
    (**(code **)(**(int **)(param_1 + 0x18 + local_4c[0xc] * 4) + 0x74))();
    local_4c[0xd] = *(int *)(&DAT_00737108 + local_4c[0xc] * 8);
    local_14 = *(undefined4 *)(&DAT_0073710c + local_4c[0xc] * 8);
    pvVar2 = operator_new(0x178);
    local_8 = 3;
    if (pvVar2 == (void *)0x0) {
      local_a0 = 0;
    }
    else {
      local_a0 = FUN_005eaaf0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x50 + local_4c[0xc] * 4) = local_a0;
    FUN_005eae80(0x311292,local_4c[0xd],local_14,100,0xffffffff);
    (**(code **)(**(int **)(param_1 + 0x50 + local_4c[0xc] * 4) + 0x70))();
  }
  local_a4 = operator_new(0x198);
  local_8 = 4;
  if (local_a4 == (undefined4 *)0x0) {
    local_a4 = (undefined4 *)0x0;
  }
  else {
    FUN_005cd6a0();
    *local_a4 = ThreeCardPokerDealerDisplay::vftable;
  }
  local_8 = 0xffffffff;
  *(undefined4 **)(param_1 + 0x48) = local_a4;
  FUN_005eae80(0,0,0,0,0xffffffff);
  pvVar2 = operator_new(0x184);
  local_8 = 5;
  if (pvVar2 == (void *)0x0) {
    local_a8 = 0;
  }
  else {
    local_a8 = FUN_005f5bf0();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x94) = local_a8;
  FUN_005eae80(0x7e6,0,0,0x33,0xffffffff);
  pvVar2 = operator_new(0x184);
  local_8 = 6;
  if (pvVar2 == (void *)0x0) {
    local_ac = 0;
  }
  else {
    local_ac = FUN_005f5bf0();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x98) = local_ac;
  FUN_005eae80(0x7e7,0,0,0x32,0xffffffff);
  pvVar2 = operator_new(0x184);
  local_8 = 7;
  if (pvVar2 == (void *)0x0) {
    local_b0 = 0;
  }
  else {
    local_b0 = FUN_005f5bf0();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x9c) = local_b0;
  FUN_005eae80(0x310ea0,0,0,1,0xffffffff);
  ExceptionList = local_10;
  return;
}

