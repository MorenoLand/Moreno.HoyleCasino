// FUN_0066cec0  0066cec0

undefined4 * __fastcall FUN_0066cec0(undefined4 *param_1)

{
  void *pvVar1;
  int iVar2;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006acefb;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005eaaf0(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  *param_1 = FaceDemoBackground::vftable;
  pvVar1 = operator_new(0x184);
  local_8._0_1_ = 1;
  if (pvVar1 == (void *)0x0) {
    local_30 = 0;
  }
  else {
    local_30 = FUN_005f5bf0();
  }
  local_8._0_1_ = 0;
  param_1[0x5e] = local_30;
  FUN_005eae80(0x10cccd,0,0,500,0xffffffff);
  (**(code **)(*(int *)param_1[0x5e] + 0x74))();
  *(undefined4 *)(param_1[0x5e] + 0x178) = 0x4b;
  pvVar1 = operator_new(0x20);
  local_8._0_1_ = 2;
  if (pvVar1 == (void *)0x0) {
    local_34 = 0;
  }
  else {
    iVar2 = FUN_005eb240();
    local_34 = moneypunct<>(iVar2 + -1);
  }
  local_8._0_1_ = 0;
  FUN_005f5d50(local_34);
  pvVar1 = operator_new(0x1dc);
  local_8._0_1_ = 3;
  if (pvVar1 == (void *)0x0) {
    local_38 = 0;
  }
  else {
    local_38 = FUN_0066cdf0();
  }
  local_8 = (uint)local_8._1_3_ << 8;
  param_1[0x5f] = local_38;
  FUN_005eae80(0x10ccce,0,0,0x1f5,0xffffffff);
  (**(code **)(*(int *)param_1[0x5f] + 0x74))();
  ExceptionList = local_10;
  return param_1;
}

