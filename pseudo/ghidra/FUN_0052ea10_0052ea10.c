// FUN_0052ea10  0052ea10

undefined4 * __thiscall FUN_0052ea10(undefined4 *param_1,undefined4 param_2)

{
  void *pvVar1;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a45f3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005f5bf0(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  *param_1 = SlotMachineReel::vftable;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = param_2;
  pvVar1 = operator_new(0x178);
  local_8._0_1_ = 1;
  if (pvVar1 == (void *)0x0) {
    local_40 = 0;
  }
  else {
    local_40 = FUN_005eaaf0();
  }
  local_8._0_1_ = 0;
  param_1[0x61] = local_40;
  FUN_005eae80(0,0,0,1,0xffffffff);
  pvVar1 = operator_new(0x178);
  local_8._0_1_ = 2;
  if (pvVar1 == (void *)0x0) {
    local_44 = 0;
  }
  else {
    local_44 = FUN_005eaaf0();
  }
  local_8._0_1_ = 0;
  param_1[0x62] = local_44;
  FUN_005eae80(0,0,0,1,0xffffffff);
  pvVar1 = operator_new(0x178);
  local_8._0_1_ = 3;
  if (pvVar1 == (void *)0x0) {
    local_48 = 0;
  }
  else {
    local_48 = FUN_005eaaf0();
  }
  local_8._0_1_ = 0;
  param_1[99] = local_48;
  FUN_005eae80(0,0,0,1,0xffffffff);
  pvVar1 = operator_new(0x178);
  local_8._0_1_ = 4;
  if (pvVar1 == (void *)0x0) {
    local_4c = 0;
  }
  else {
    local_4c = FUN_005eaaf0();
  }
  local_8._0_1_ = 0;
  param_1[100] = local_4c;
  FUN_005eae80(0,0,0,1,0xffffffff);
  pvVar1 = operator_new(0x178);
  local_8._0_1_ = 5;
  if (pvVar1 == (void *)0x0) {
    local_50 = 0;
  }
  else {
    local_50 = FUN_005eaaf0();
  }
  local_8 = (uint)local_8._1_3_ << 8;
  param_1[0x65] = local_50;
  FUN_005eae80(0,0,0,1,0xffffffff);
  ExceptionList = local_10;
  return param_1;
}

