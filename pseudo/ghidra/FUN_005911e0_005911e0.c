// FUN_005911e0  005911e0

void __fastcall FUN_005911e0(int param_1)

{
  undefined4 uVar1;
  void *pvVar2;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 *local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  int local_a8;
  int local_a4;
  void *local_a0 [37];
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a70c3;
  local_a0[0x24] = ExceptionList;
  ExceptionList = local_a0 + 0x24;
  local_a0[0x18] = (void *)0x5;
  local_a0[0x19] = (void *)0x4;
  local_a0[0x1a] = (void *)0x3;
  local_a0[0x1b] = (void *)0x8;
  local_a0[0x1c] = (void *)0x7;
  local_a0[0x1d] = (void *)0x6;
  local_a0[0x1e] = (void *)0x2;
  local_a0[0x1f] = (void *)0x1;
  local_a0[0x20] = (void *)0x0;
  local_a0[0x21] = (void *)0xb;
  local_a0[0x22] = (void *)0xa;
  local_a0[0x23] = (void *)0x9;
  local_a0[0] = (void *)0x171;
  local_a0[1] = (void *)0x151;
  local_a0[2] = (void *)0x165;
  local_a0[3] = (void *)0x126;
  local_a0[4] = (void *)0x158;
  local_a0[5] = (void *)0x100;
  local_a0[6] = (void *)0xc6;
  local_a0[7] = (void *)0x150;
  local_a0[8] = (void *)0xd0;
  local_a0[9] = (void *)0x128;
  local_a0[10] = (void *)0xd8;
  local_a0[0xb] = (void *)0x104;
  local_a0[0xc] = (void *)0x224;
  local_a0[0xd] = (void *)0x10f;
  local_a0[0xe] = (void *)0x20c;
  local_a0[0xf] = (void *)0xf1;
  local_a0[0x10] = (void *)0x1f5;
  local_a0[0x11] = (void *)0xd4;
  local_a0[0x12] = (void *)0x23;
  local_a0[0x13] = (void *)0x114;
  local_a0[0x14] = (void *)0x3c;
  local_a0[0x15] = (void *)0xf6;
  local_a0[0x16] = (void *)0x63;
  local_a0[0x17] = (void *)0xd8;
  uVar1 = FUN_00630f40("SID_FOURCARDPOKER",DAT_00781870 ^ (uint)&stack0xfffffffc);
  FUN_005f38b0(uVar1);
  FUN_005f1ad0(0xfde9);
  FUN_005f2ba0(0x314d1b);
  FUN_005f2ba0(0x314d1c);
  for (local_a4 = 0; local_a4 < 5; local_a4 = local_a4 + 1) {
    pvVar2 = operator_new(0x20);
    local_8 = 0;
    if (pvVar2 == (void *)0x0) {
      local_f0 = 0;
    }
    else {
      local_f0 = FUN_00594090();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 4 + local_a4 * 4) = local_f0;
    FUN_00594190(local_a4);
    pvVar2 = operator_new(0x1d0);
    local_8 = 1;
    if (pvVar2 == (void *)0x0) {
      local_f4 = 0;
    }
    else {
      local_f4 = FUN_005ec5a0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x80 + local_a4 * 4) = local_f4;
    FUN_005ec8f0(&PTR_006b27f8,0x38,200,0x14,0,0,0x51,0x30,0xffffffff);
  }
  for (local_a8 = 0; local_a8 < 0xc; local_a8 = local_a8 + 1) {
    pvVar2 = operator_new(0xae4);
    local_8 = 2;
    if (pvVar2 == (void *)0x0) {
      local_f8 = 0;
    }
    else {
      local_f8 = FUN_005926f0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x18 + local_a8 * 4) = local_f8;
    *(int *)(*(int *)(param_1 + 0x18 + local_a8 * 4) + 0xae0) = local_a8;
    FUN_005eae80(0x310e9e,0,0,1,0xffffffff);
    (**(code **)(**(int **)(param_1 + 0x18 + local_a8 * 4) + 0xb0))(local_a0[local_a8 + 0x18]);
    FUN_005eb5d0(0);
    FUN_005cc2c0(*(undefined4 *)(DAT_007935a8 + 8 + local_a8 * 4));
    (**(code **)(**(int **)(param_1 + 0x18 + local_a8 * 4) + 0x74))();
    pvVar2 = operator_new(0x178);
    local_8 = 3;
    if (pvVar2 == (void *)0x0) {
      local_fc = 0;
    }
    else {
      local_fc = FUN_005eaaf0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x50 + local_a8 * 4) = local_fc;
    FUN_005eae80(0x311292,local_a0[local_a8 * 2],local_a0[local_a8 * 2 + 1],100,0xffffffff);
    (**(code **)(**(int **)(param_1 + 0x50 + local_a8 * 4) + 0x70))();
  }
  (**(code **)(**(int **)(param_1 + 0x18) + 0x44))(0x13,0xffffffca);
  (**(code **)(**(int **)(param_1 + 0x1c) + 0x44))(0x11,0xffffffcc);
  (**(code **)(**(int **)(param_1 + 0x20) + 0x44))(0xe,0xffffffcf);
  (**(code **)(**(int **)(param_1 + 0x24) + 0x44))(0xfffffffd,0xffffffcc);
  (**(code **)(**(int **)(param_1 + 0x28) + 0x44))(0xfffffffa,0xffffffcd);
  (**(code **)(**(int **)(param_1 + 0x2c) + 0x44))(0xfffffff8,0xffffffd0);
  (**(code **)(**(int **)(param_1 + 0x30) + 0x44))(0x11,0x10);
  (**(code **)(**(int **)(param_1 + 0x34) + 0x44))(0x14,0xf);
  (**(code **)(**(int **)(param_1 + 0x38) + 0x44))(0x15,0xd);
  (**(code **)(**(int **)(param_1 + 0x3c) + 0x44))(0xfffffff5,0x10);
  (**(code **)(**(int **)(param_1 + 0x40) + 0x44))(0xfffffff0,0xe);
  (**(code **)(**(int **)(param_1 + 0x44) + 0x44))(0xffffffed,0xe);
  local_100 = operator_new(0x198);
  local_8 = 4;
  if (local_100 == (undefined4 *)0x0) {
    local_100 = (undefined4 *)0x0;
  }
  else {
    FUN_005cd6a0();
    *local_100 = FourCardPokerDealerDisplay::vftable;
  }
  local_8 = 0xffffffff;
  *(undefined4 **)(param_1 + 0x48) = local_100;
  FUN_005eae80(0,0,0,0,0xffffffff);
  pvVar2 = operator_new(0x184);
  local_8 = 5;
  if (pvVar2 == (void *)0x0) {
    local_104 = 0;
  }
  else {
    local_104 = FUN_005f5bf0();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x94) = local_104;
  FUN_005eae80(0x7e6,0,0,0x33,0xffffffff);
  pvVar2 = operator_new(0x184);
  local_8 = 6;
  if (pvVar2 == (void *)0x0) {
    local_108 = 0;
  }
  else {
    local_108 = FUN_005f5bf0();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x98) = local_108;
  FUN_005eae80(0x7e7,0,0,0x32,0xffffffff);
  pvVar2 = operator_new(0x184);
  local_8 = 7;
  if (pvVar2 == (void *)0x0) {
    local_10c = 0;
  }
  else {
    local_10c = FUN_005f5bf0();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x9c) = local_10c;
  FUN_005eae80(0x7d7,0,0,1,0xffffffff);
  ExceptionList = local_a0[0x24];
  return;
}

