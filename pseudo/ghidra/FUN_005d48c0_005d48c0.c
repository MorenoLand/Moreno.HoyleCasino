// FUN_005d48c0  005d48c0

undefined4 * __fastcall FUN_005d48c0(undefined4 *param_1)

{
  void *pvVar1;
  int iVar2;
  undefined4 *local_38;
  undefined4 local_34;
  undefined4 local_30;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a8f98;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005eaaf0(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  *param_1 = CasinoFaceDemoBackground::vftable;
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
  FUN_005eae80(0x10cccd,0,0,0x1389,0xffffffff);
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
  local_38 = operator_new(0x1dc);
  local_8._0_1_ = 3;
  if (local_38 == (undefined4 *)0x0) {
    local_38 = (undefined4 *)0x0;
  }
  else {
    FUN_00601a80();
    *local_38 = CasinoExitFaceDemoButton::vftable;
  }
  local_8 = (uint)local_8._1_3_ << 8;
  param_1[0x5f] = local_38;
  FUN_005eae80(0x10ccce,0,0,0x138a,0xffffffff);
  (**(code **)(*(int *)param_1[0x5f] + 0x74))();
  ExceptionList = local_10;
  return param_1;
}

