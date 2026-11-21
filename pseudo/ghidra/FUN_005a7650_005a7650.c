// FUN_005a7650  005a7650

void __fastcall FUN_005a7650(int param_1)

{
  undefined4 uVar1;
  void *pvVar2;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 *local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  int local_48;
  int local_44;
  void *local_40 [13];
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a7961;
  local_40[0xc] = ExceptionList;
  ExceptionList = local_40 + 0xc;
  local_40[8] = (void *)0x1;
  local_40[9] = (void *)0x2;
  local_40[10] = (void *)0x0;
  local_40[0xb] = (void *)0x3;
  local_40[0] = (void *)0x177;
  local_40[1] = (void *)0x122;
  local_40[2] = (void *)0x108;
  local_40[3] = (void *)0x12c;
  local_40[4] = (void *)0x1ef;
  local_40[5] = (void *)0xf0;
  local_40[6] = (void *)0x7e;
  local_40[7] = (void *)0x115;
  uVar1 = FUN_00630f40("SID_ROYALMATCH",DAT_00781870 ^ (uint)&stack0xfffffffc);
  FUN_005f38b0(uVar1);
  FUN_005f1ad0(0xfdec);
  for (local_44 = 0; local_44 < 5; local_44 = local_44 + 1) {
    pvVar2 = operator_new(0x188);
    local_8 = 0;
    if (pvVar2 == (void *)0x0) {
      local_90 = 0;
    }
    else {
      local_90 = FUN_005abfa0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 4 + local_44 * 4) = local_90;
    FUN_005ac240(local_44);
  }
  for (local_48 = 0; local_48 < 4; local_48 = local_48 + 1) {
    pvVar2 = operator_new(0xcc4);
    local_8 = 1;
    if (pvVar2 == (void *)0x0) {
      local_94 = 0;
    }
    else {
      local_94 = FUN_005a8f40();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x18 + local_48 * 4) = local_94;
    *(undefined4 *)(*(int *)(param_1 + 0x18 + local_48 * 4) + 0xcc0) = 100;
    FUN_005eae80(0x138e,0,0,1,0xffffffff);
    (**(code **)(**(int **)(param_1 + 0x18 + local_48 * 4) + 0xb0))(local_40[local_48 + 8]);
    FUN_005eb5d0(0);
    FUN_005cc2c0(*(undefined4 *)(DAT_00793604 + 0x580 + local_48 * 4));
    (**(code **)(**(int **)(param_1 + 0x18 + local_48 * 4) + 0x74))();
    pvVar2 = operator_new(0xcc4);
    local_8 = 2;
    if (pvVar2 == (void *)0x0) {
      local_98 = 0;
    }
    else {
      local_98 = FUN_005a8f40();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x48 + local_48 * 4) = local_98;
    *(undefined4 *)(*(int *)(param_1 + 0x48 + local_48 * 4) + 0xcc0) = 0x65;
    FUN_005eae80(0x138e,0,0,1,0xffffffff);
    (**(code **)(**(int **)(param_1 + 0x48 + local_48 * 4) + 0xb0))(local_40[local_48 + 8]);
    FUN_005eb5d0(0);
    FUN_005cc2c0(*(undefined4 *)(DAT_00793604 + 0x634 + local_48 * 4));
    (**(code **)(**(int **)(param_1 + 0x48 + local_48 * 4) + 0x74))();
    pvVar2 = operator_new(0x178);
    local_8 = 3;
    if (pvVar2 == (void *)0x0) {
      local_9c = 0;
    }
    else {
      local_9c = FUN_005eaaf0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x58 + local_48 * 4) = local_9c;
    FUN_005eae80(0x311292,local_40[local_48 * 2],local_40[local_48 * 2 + 1],100,0xffffffff);
    (**(code **)(**(int **)(param_1 + 0x58 + local_48 * 4) + 0x70))();
  }
  (**(code **)(**(int **)(param_1 + 0x18) + 0x44))(0xfffffffc,9);
  (**(code **)(**(int **)(param_1 + 0x48) + 0x44))(0x19,0xffffffe0);
  (**(code **)(**(int **)(param_1 + 0x1c) + 0x44))(0x16,10);
  (**(code **)(**(int **)(param_1 + 0x4c) + 0x44))(0x43,0xffffffee);
  (**(code **)(**(int **)(param_1 + 0x20) + 0x44))(0xfffffff9,0x21);
  (**(code **)(**(int **)(param_1 + 0x50) + 0x44))(6,0xfffffff3);
  (**(code **)(**(int **)(param_1 + 0x24) + 0x44))(0x14,0x27);
  (**(code **)(**(int **)(param_1 + 0x54) + 0x44))(0x48,0x1e);
  local_a0 = operator_new(0x198);
  local_8 = 4;
  if (local_a0 == (undefined4 *)0x0) {
    local_a0 = (undefined4 *)0x0;
  }
  else {
    FUN_005cd6a0();
    *local_a0 = RoyalMatchDealerDisplay::vftable;
  }
  local_8 = 0xffffffff;
  *(undefined4 **)(param_1 + 0x2c) = local_a0;
  FUN_005eae80(0,0,0,0,0xffffffff);
  pvVar2 = operator_new(0x184);
  local_8 = 5;
  if (pvVar2 == (void *)0x0) {
    local_a4 = 0;
  }
  else {
    local_a4 = FUN_005f5bf0();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3c) = local_a4;
  FUN_005eae80(0x13a2,0,0,0x96,0xffffffff);
  pvVar2 = operator_new(0x184);
  local_8 = 6;
  if (pvVar2 == (void *)0x0) {
    local_a8 = 0;
  }
  else {
    local_a8 = FUN_005f5bf0();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x40) = local_a8;
  FUN_005eae80(0x13a3,0,0,0x97,0xffffffff);
  pvVar2 = operator_new(0x178);
  local_8 = 7;
  if (pvVar2 == (void *)0x0) {
    local_ac = 0;
  }
  else {
    local_ac = FUN_005eaaf0();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x44) = local_ac;
  FUN_005eae80(0x13a1,0,0,10,0xffffffff);
  ExceptionList = local_40[0xc];
  return;
}

