// FUN_0057d600  0057d600

undefined4 * __fastcall FUN_0057d600(undefined4 *param_1)

{
  void *pvVar1;
  undefined1 extraout_var;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a68ac;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005f5bf0(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  *param_1 = KenoAnimator::vftable;
  pvVar1 = operator_new(0x1d0);
  local_8._0_1_ = 1;
  if (pvVar1 == (void *)0x0) {
    local_7c = 0;
  }
  else {
    local_7c = FUN_005ec5a0();
  }
  local_8._0_1_ = 0;
  param_1[0x79] = local_7c;
  (**(code **)(*(int *)param_1[0x79] + 0x40))();
  FUN_005ecd00(0x2c,0xffffffff,CONCAT13(extraout_var,CONCAT12(DAT_0075ee1e,DAT_0075ee1c)));
  FUN_005ecc60(0x86);
  FUN_005eccb0(0x28);
  (**(code **)(*(int *)param_1[0x79] + 0x44))(0xf7,0xcb);
  FUN_005ef310(0x30);
  (**(code **)(*(int *)param_1[0x79] + 0x6c))(10);
  (**(code **)(*(int *)param_1[0x79] + 0x70))();
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  pvVar1 = operator_new(0x178);
  local_8._0_1_ = 2;
  if (pvVar1 == (void *)0x0) {
    local_80 = 0;
  }
  else {
    local_80 = FUN_005eaaf0();
  }
  local_8._0_1_ = 0;
  param_1[0x7e] = local_80;
  FUN_005eaf00(0x30dfe4);
  (**(code **)(*(int *)param_1[0x7e] + 0x6c))(0x14);
  (**(code **)(*(int *)param_1[0x7e] + 0x40))();
  (**(code **)(*(int *)param_1[0x7e] + 0x70))();
  pvVar1 = operator_new(0x178);
  local_8._0_1_ = 3;
  if (pvVar1 == (void *)0x0) {
    local_84 = 0;
  }
  else {
    local_84 = FUN_005eaaf0();
  }
  local_8._0_1_ = 0;
  param_1[0x7f] = local_84;
  FUN_005eaf00(0x30dfe3);
  (**(code **)(*(int *)param_1[0x7f] + 0x6c))(0x14);
  (**(code **)(*(int *)param_1[0x7f] + 0x40))();
  (**(code **)(*(int *)param_1[0x7f] + 0x70))();
  pvVar1 = operator_new(0x14);
  local_8._0_1_ = 4;
  if (pvVar1 == (void *)0x0) {
    local_88 = 0;
  }
  else {
    local_88 = FUN_0057f0f0();
  }
  local_8._0_1_ = 0;
  param_1[0x80] = local_88;
  for (local_14 = 0; local_14 < 0x14; local_14 = local_14 + 1) {
    pvVar1 = operator_new(0x178);
    local_8._0_1_ = 5;
    if (pvVar1 == (void *)0x0) {
      local_8c = 0;
    }
    else {
      local_8c = FUN_005eaaf0();
    }
    local_8._0_1_ = 0;
    param_1[local_14 + 0x65] = local_8c;
    FUN_005eaf00(0x30dfc6);
    (**(code **)(*(int *)param_1[local_14 + 0x65] + 0x6c))(0x1e);
    (**(code **)(*(int *)param_1[local_14 + 0x65] + 0x40))();
    (**(code **)(*(int *)param_1[local_14 + 0x65] + 0x70))();
  }
  pvVar1 = operator_new(0x184);
  local_8._0_1_ = 6;
  if (pvVar1 == (void *)0x0) {
    local_90 = 0;
  }
  else {
    local_90 = FUN_005f5bf0();
  }
  local_8._0_1_ = 0;
  param_1[0x61] = local_90;
  FUN_005eaf00(0x30dfc4);
  (**(code **)(*(int *)param_1[0x61] + 0x6c))(0x14);
  (**(code **)(*(int *)param_1[0x61] + 0x40))();
  (**(code **)(*(int *)param_1[0x61] + 0x70))();
  *(undefined4 *)(param_1[0x61] + 0x178) = 6;
  pvVar1 = operator_new(0x1c);
  local_8._0_1_ = 7;
  if (pvVar1 == (void *)0x0) {
    local_94 = 0;
  }
  else {
    local_94 = FUN_00600a70(0);
  }
  local_8._0_1_ = 0;
  FUN_005f5d50(local_94);
  pvVar1 = operator_new(0x184);
  local_8._0_1_ = 8;
  if (pvVar1 == (void *)0x0) {
    local_98 = 0;
  }
  else {
    local_98 = FUN_005f5bf0();
  }
  local_8._0_1_ = 0;
  param_1[0x62] = local_98;
  FUN_005eaf00(0x30dfc5);
  (**(code **)(*(int *)param_1[0x62] + 0x6c))(0x14);
  (**(code **)(*(int *)param_1[0x62] + 0x40))();
  (**(code **)(*(int *)param_1[0x62] + 0xb0))(0);
  (**(code **)(*(int *)param_1[0x62] + 0x70))();
  pvVar1 = operator_new(0x178);
  local_8._0_1_ = 9;
  if (pvVar1 == (void *)0x0) {
    local_9c = 0;
  }
  else {
    local_9c = FUN_005eaaf0();
  }
  local_8 = (uint)local_8._1_3_ << 8;
  param_1[99] = local_9c;
  FUN_005eaf00(0x30dfe5);
  (**(code **)(*(int *)param_1[99] + 0x6c))(0x14);
  (**(code **)(*(int *)param_1[99] + 0x40))();
  (**(code **)(*(int *)param_1[99] + 0x70))();
  FUN_006044b0(0x20584554,0x30dfe6,0);
  for (local_14 = 0; local_14 < 0x14; local_14 = local_14 + 1) {
    FUN_006044b0(0x20584554,local_14 + 0x30dfcc,0);
  }
  pvVar1 = operator_new(0x184);
  local_8._0_1_ = 10;
  if (pvVar1 == (void *)0x0) {
    local_a0 = 0;
  }
  else {
    local_a0 = FUN_005f5bf0();
  }
  local_8._0_1_ = 0;
  param_1[100] = local_a0;
  FUN_005eaf00(0x30dfcc);
  (**(code **)(*(int *)param_1[100] + 0x6c))(0x14);
  (**(code **)(*(int *)param_1[100] + 0x40))();
  (**(code **)(*(int *)param_1[100] + 0xb0))(0);
  (**(code **)(*(int *)param_1[100] + 0x70))();
  pvVar1 = operator_new(0x178);
  local_8._0_1_ = 0xb;
  if (pvVar1 == (void *)0x0) {
    local_a4 = 0;
  }
  else {
    local_a4 = FUN_005eaaf0();
  }
  local_8._0_1_ = 0;
  param_1[0x81] = local_a4;
  FUN_005eaf00(0x30dfe7);
  (**(code **)(*(int *)param_1[0x81] + 0x6c))(5);
  (**(code **)(*(int *)param_1[0x81] + 0x40))();
  (**(code **)(*(int *)param_1[0x81] + 0x74))();
  pvVar1 = operator_new(0x4330);
  local_8._0_1_ = 0xc;
  if (pvVar1 == (void *)0x0) {
    local_a8 = 0;
  }
  else {
    local_a8 = FUN_0057f820();
  }
  local_8 = (uint)local_8._1_3_ << 8;
  param_1[0x82] = local_a8;
  FUN_005f5cc0();
  ExceptionList = local_10;
  return param_1;
}

