// FUN_00446e30  00446e30

void __fastcall FUN_00446e30(int param_1)

{
  undefined4 uVar1;
  void *pvVar2;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 *local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  int local_44 [13];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0069ec1b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_44[0] = 5;
  local_44[1] = 4;
  local_44[2] = 3;
  local_44[3] = 8;
  local_44[4] = 7;
  local_44[5] = 6;
  local_44[6] = 2;
  local_44[7] = 1;
  local_44[8] = 0;
  local_44[9] = 0xb;
  local_44[10] = 10;
  local_44[0xb] = 9;
  uVar1 = FUN_00630f40("SID_LETITRIDE",DAT_00781870 ^ (uint)&stack0xfffffffc);
  FUN_005f38b0(uVar1);
  FUN_005f1ad0(0x310ab0);
  FUN_005f2ba0(0x310ab3);
  FUN_005f2ba0(0x310ab4);
  for (local_44[0xc] = 0; local_44[0xc] < 4; local_44[0xc] = local_44[0xc] + 1) {
    pvVar2 = operator_new(0x20);
    local_8 = 0;
    if (pvVar2 == (void *)0x0) {
      local_8c = 0;
    }
    else {
      local_8c = FUN_00447e30();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 4 + local_44[0xc] * 4) = local_8c;
    FUN_00447f70(local_44[0xc]);
    pvVar2 = operator_new(0x1d0);
    local_8 = 1;
    if (pvVar2 == (void *)0x0) {
      local_90 = 0;
    }
    else {
      local_90 = FUN_005ec5a0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x54 + local_44[0xc] * 4) = local_90;
    FUN_005ec8f0(&PTR_006b27f8,0x38,200,0x14,0,0,0x51,0x30,0xffffffff);
  }
  for (local_44[0xc] = 0; local_44[0xc] < 0xc; local_44[0xc] = local_44[0xc] + 1) {
    pvVar2 = operator_new(0xae4);
    local_8 = 2;
    if (pvVar2 == (void *)0x0) {
      local_94 = 0;
    }
    else {
      local_94 = FUN_004485e0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x14 + local_44[0xc] * 4) = local_94;
    *(int *)(*(int *)(param_1 + 0x14 + local_44[0xc] * 4) + 0xae0) = local_44[0xc];
    FUN_005eae80(0x310ab1,0,0,1,0xffffffff);
    (**(code **)(**(int **)(param_1 + 0x14 + local_44[0xc] * 4) + 0xb0))(local_44[local_44[0xc]]);
    FUN_005eb5d0(0);
    FUN_005cc2c0(*(undefined4 *)(DAT_00790710 + 8 + local_44[0xc] * 4));
    (**(code **)(**(int **)(param_1 + 0x14 + local_44[0xc] * 4) + 0x74))();
  }
  for (local_44[0xc] = 0; local_44[0xc] < 2; local_44[0xc] = local_44[0xc] + 1) {
    pvVar2 = operator_new(0x178);
    local_8 = 3;
    if (pvVar2 == (void *)0x0) {
      local_98 = 0;
    }
    else {
      local_98 = FUN_005eaaf0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x44 + local_44[0xc] * 4) = local_98;
    (**(code **)(**(int **)(param_1 + 0x44 + local_44[0xc] * 4) + 0x40))();
  }
  local_9c = operator_new(0x198);
  local_8 = 4;
  if (local_9c == (undefined4 *)0x0) {
    local_9c = (undefined4 *)0x0;
  }
  else {
    FUN_005cd6a0();
    *local_9c = LetItRideDealerDisplay::vftable;
  }
  local_8 = 0xffffffff;
  *(undefined4 **)(param_1 + 0x4c) = local_9c;
  FUN_005eae80(0,0,0,0,0xffffffff);
  pvVar2 = operator_new(0x184);
  local_8 = 5;
  if (pvVar2 == (void *)0x0) {
    local_a0 = 0;
  }
  else {
    local_a0 = FUN_005f5bf0();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 100) = local_a0;
  FUN_005eae80(0x7e6,0,0,0x33,0xffffffff);
  pvVar2 = operator_new(0x184);
  local_8 = 6;
  if (pvVar2 == (void *)0x0) {
    local_a4 = 0;
  }
  else {
    local_a4 = FUN_005f5bf0();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x68) = local_a4;
  FUN_005eae80(0x7e7,0,0,0x32,0xffffffff);
  pvVar2 = operator_new(0x184);
  local_8 = 7;
  if (pvVar2 == (void *)0x0) {
    local_a8 = 0;
  }
  else {
    local_a8 = FUN_005f5bf0();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x6c) = local_a8;
  FUN_005eae80(0x310ea0,0,0,1,0xffffffff);
  ExceptionList = local_10;
  return;
}

