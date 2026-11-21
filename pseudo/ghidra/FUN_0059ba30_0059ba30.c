// FUN_0059ba30  0059ba30

void __fastcall FUN_0059ba30(int param_1)

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
  puStack_c = &LAB_006a7513;
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
  local_a0[0] = (void *)0x142;
  local_a0[1] = (void *)0x136;
  local_a0[2] = (void *)0x12b;
  local_a0[3] = (void *)0x172;
  local_a0[4] = (void *)0x15f;
  local_a0[5] = (void *)0x153;
  local_a0[6] = (void *)0xdd;
  local_a0[7] = (void *)0x134;
  local_a0[8] = (void *)0xbd;
  local_a0[9] = (void *)0x16f;
  local_a0[10] = (void *)0xf2;
  local_a0[0xb] = (void *)0x152;
  local_a0[0xc] = (void *)0x201;
  local_a0[0xd] = (void *)0xe8;
  local_a0[0xe] = (void *)0x205;
  local_a0[0xf] = (void *)0x121;
  local_a0[0x10] = (void *)0x221;
  local_a0[0x11] = (void *)0x107;
  local_a0[0x12] = (void *)0x3a;
  local_a0[0x13] = (void *)0xe9;
  local_a0[0x14] = (void *)0xf;
  local_a0[0x15] = (void *)0x108;
  local_a0[0x16] = (void *)0x46;
  local_a0[0x17] = (void *)0x124;
  uVar1 = FUN_00630f40("SID_BIGRAISE",DAT_00781870 ^ (uint)&stack0xfffffffc);
  FUN_005f38b0(uVar1);
  FUN_005f1ad0(65000);
  FUN_005f2ba0(0x315103);
  FUN_005f2ba0(0x315104);
  FUN_005f2ba0(0x315105);
  for (local_a4 = 0; local_a4 < 6; local_a4 = local_a4 + 1) {
    pvVar2 = operator_new(0x14);
    local_8 = 0;
    if (pvVar2 == (void *)0x0) {
      local_f0 = 0;
    }
    else {
      local_f0 = FUN_0059e270();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 4 + local_a4 * 4) = local_f0;
    FUN_0059e370(local_a4);
    pvVar2 = operator_new(0x1d0);
    local_8 = 1;
    if (pvVar2 == (void *)0x0) {
      local_f4 = 0;
    }
    else {
      local_f4 = FUN_005ec5a0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x84 + local_a4 * 4) = local_f4;
    FUN_005ec8f0(&PTR_006b27f8,0x38,200,0x14,0,0,0x51,0x30,0xffffffff);
  }
  for (local_a8 = 0; local_a8 < 0xc; local_a8 = local_a8 + 1) {
    pvVar2 = operator_new(0xae4);
    local_8 = 2;
    if (pvVar2 == (void *)0x0) {
      local_f8 = 0;
    }
    else {
      local_f8 = FUN_0059cf60();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x1c + local_a8 * 4) = local_f8;
    *(int *)(*(int *)(param_1 + 0x1c + local_a8 * 4) + 0xae0) = local_a8;
    FUN_005eae80(0x310e9e,0,0,1,0xffffffff);
    (**(code **)(**(int **)(param_1 + 0x1c + local_a8 * 4) + 0xb0))(local_a0[local_a8 + 0x18]);
    FUN_005eb5d0(0);
    FUN_005cc2c0(*(undefined4 *)(DAT_007935d0 + 8 + local_a8 * 4));
    (**(code **)(**(int **)(param_1 + 0x1c + local_a8 * 4) + 0x74))();
    pvVar2 = operator_new(0x178);
    local_8 = 3;
    if (pvVar2 == (void *)0x0) {
      local_fc = 0;
    }
    else {
      local_fc = FUN_005eaaf0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x54 + local_a8 * 4) = local_fc;
    FUN_005eae80(0x311292,local_a0[local_a8 * 2],local_a0[local_a8 * 2 + 1],100,0xffffffff);
    (**(code **)(**(int **)(param_1 + 0x54 + local_a8 * 4) + 0x70))();
  }
  (**(code **)(**(int **)(param_1 + 0x1c) + 0x44))(0xffffffe4,0xffffffaf);
  (**(code **)(**(int **)(param_1 + 0x20) + 0x44))(0xffffffd7,0xffffffff);
  (**(code **)(**(int **)(param_1 + 0x24) + 0x44))(0x15,0x22);
  (**(code **)(**(int **)(param_1 + 0x28) + 0x44))(0x14,0xffffffb0);
  (**(code **)(**(int **)(param_1 + 0x2c) + 0x44))(0xffffffe7,0xfffffffb);
  (**(code **)(**(int **)(param_1 + 0x30) + 0x44))(0x12,0x28);
  (**(code **)(**(int **)(param_1 + 0x34) + 0x44))(0xffffffee,0xffffffe9);
  (**(code **)(**(int **)(param_1 + 0x38) + 0x44))(0xd,0x2b);
  (**(code **)(**(int **)(param_1 + 0x3c) + 0x44))(0x55,0x2c);
  (**(code **)(**(int **)(param_1 + 0x40) + 0x44))(0xc,0xffffffe5);
  (**(code **)(**(int **)(param_1 + 0x44) + 0x44))(0xffffffc3,0xc);
  (**(code **)(**(int **)(param_1 + 0x48) + 0x44))(0xffffffd0,0x46);
  local_100 = operator_new(0x198);
  local_8 = 4;
  if (local_100 == (undefined4 *)0x0) {
    local_100 = (undefined4 *)0x0;
  }
  else {
    FUN_005cd6a0();
    *local_100 = BigRaiseDealerDisplay::vftable;
  }
  local_8 = 0xffffffff;
  *(undefined4 **)(param_1 + 0x4c) = local_100;
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
  *(undefined4 *)(param_1 + 0x9c) = local_104;
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
  *(undefined4 *)(param_1 + 0xa0) = local_108;
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
  *(undefined4 *)(param_1 + 0xa4) = local_10c;
  FUN_005eae80(0x310ea0,0,0,1,0xffffffff);
  ExceptionList = local_a0[0x24];
  return;
}

