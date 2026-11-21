// FUN_00401580  00401580

void __fastcall FUN_00401580(int param_1)

{
  undefined4 uVar1;
  void *pvVar2;
  int iVar3;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 *local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  int local_48 [14];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0069d600;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_48[0] = 6;
  local_48[1] = 7;
  local_48[2] = 8;
  local_48[3] = 3;
  local_48[4] = 4;
  local_48[5] = 5;
  local_48[6] = 9;
  local_48[7] = 10;
  local_48[8] = 0xb;
  local_48[9] = 0;
  local_48[10] = 1;
  local_48[0xb] = 2;
  local_48[0xd] = 0x28;
  uVar1 = FUN_00630f40("SID_BACCARAT",DAT_00781870 ^ (uint)&stack0xfffffffc);
  FUN_005f38b0(uVar1);
  FUN_005f1ad0(0x311280);
  for (local_48[0xc] = 0; local_48[0xc] < 5; local_48[0xc] = local_48[0xc] + 1) {
    pvVar2 = operator_new(0x18);
    local_8 = 0;
    if (pvVar2 == (void *)0x0) {
      local_8c = 0;
    }
    else {
      local_8c = FUN_00402660();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 4 + local_48[0xc] * 4) = local_8c;
    FUN_004027b0(local_48[0xc]);
  }
  pvVar2 = operator_new(0x1d0);
  local_8 = 1;
  if (pvVar2 == (void *)0x0) {
    local_90 = 0;
  }
  else {
    local_90 = FUN_005ec5a0();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x18) = local_90;
  FUN_005ec8f0(&PTR_006b27f8,0x38,0x3c,0x14,0x1a7,0x6c,0x51,0x11,0xffffffff);
  pvVar2 = operator_new(0x1d0);
  local_8 = 2;
  if (pvVar2 == (void *)0x0) {
    local_94 = 0;
  }
  else {
    local_94 = FUN_005ec5a0();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1c) = local_94;
  FUN_005ec8f0(&PTR_006b27f8,0x38,0x3c,0x14,0xa1,0x6c,0x51,0x12,0xffffffff);
  for (local_48[0xc] = 0; local_48[0xc] < 0xc; local_48[0xc] = local_48[0xc] + 1) {
    pvVar2 = operator_new(0xae8);
    local_8 = 3;
    if (pvVar2 == (void *)0x0) {
      local_98 = 0;
    }
    else {
      local_98 = FUN_00402a90();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x20 + local_48[0xc] * 4) = local_98;
    *(int *)(*(int *)(param_1 + 0x20 + local_48[0xc] * 4) + 0xae0) = local_48[0xc];
    FUN_005eae80(0x311285,0,0,2,local_48[0xc]);
    (**(code **)(**(int **)(param_1 + 0x20 + local_48[0xc] * 4) + 0xb0))(local_48[local_48[0xc]]);
    FUN_005eb5d0(0);
    FUN_005cc2c0(*(undefined4 *)(DAT_007902f0 + 4 + local_48[0xc] * 4));
    iVar3 = (**(code **)(**(int **)(param_1 + 0x20 + local_48[0xc] * 4) + 0x54))();
    uVar1 = (**(code **)(**(int **)(param_1 + 0x20 + local_48[0xc] * 4) + 0x4c))(iVar3 + 0x28);
    (**(code **)(**(int **)(param_1 + 0x20 + local_48[0xc] * 4) + 0x44))(uVar1);
    FUN_005eb700(1);
    (**(code **)(**(int **)(param_1 + 0x20 + local_48[0xc] * 4) + 0x74))();
  }
  local_9c = operator_new(0x198);
  local_8 = 4;
  if (local_9c == (undefined4 *)0x0) {
    local_9c = (undefined4 *)0x0;
  }
  else {
    FUN_005cd6a0();
    *local_9c = BaccaratDealerDisplay::vftable;
  }
  local_8 = 0xffffffff;
  *(undefined4 **)(param_1 + 0x50) = local_9c;
  FUN_005eae80(0,0,0,0,0xffffffff);
  for (local_48[0xc] = 0; local_48[0xc] < 3; local_48[0xc] = local_48[0xc] + 1) {
    pvVar2 = operator_new(0x178);
    local_8 = 5;
    if (pvVar2 == (void *)0x0) {
      local_a0 = 0;
    }
    else {
      local_a0 = FUN_005eaaf0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x5c + local_48[0xc] * 4) = local_a0;
    FUN_005eae80(0x311292,*(undefined4 *)(&DAT_00705054 + local_48[0xc] * 8),
                 *(undefined4 *)(&DAT_00705058 + local_48[0xc] * 8),0x50,0xffffffff);
    (**(code **)(**(int **)(param_1 + 0x5c + local_48[0xc] * 4) + 0x70))();
  }
  pvVar2 = operator_new(0x178);
  local_8 = 6;
  if (pvVar2 == (void *)0x0) {
    local_a4 = 0;
  }
  else {
    local_a4 = FUN_005eaaf0();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x68) = local_a4;
  FUN_005eae80(0x13b1,0,0,10,0xffffffff);
  (**(code **)(**(int **)(param_1 + 0x68) + 0x70))();
  ExceptionList = local_10;
  return;
}

