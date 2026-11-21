// FUN_00531f00  00531f00

undefined4 * __thiscall FUN_00531f00(undefined4 *param_1,int param_2,int param_3,int param_4)

{
  void *pvVar1;
  undefined4 local_30;
  undefined4 local_2c;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a47e5;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005f5bf0(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  *param_1 = SlotMachineReaderBoard::vftable;
  pvVar1 = operator_new(0x178);
  local_8._0_1_ = 1;
  if (pvVar1 == (void *)0x0) {
    local_2c = 0;
  }
  else {
    local_2c = FUN_005eaaf0();
  }
  local_8 = (uint)local_8._1_3_ << 8;
  param_1[0x75] = local_2c;
  FUN_005eae80(0x30f093,param_2,param_3,param_4,0xffffffff);
  (**(code **)(*(int *)param_1[0x75] + 0x74))();
  for (local_14 = 0; local_14 < 0x10; local_14 = local_14 + 1) {
    pvVar1 = operator_new(0x178);
    local_8._0_1_ = 2;
    if (pvVar1 == (void *)0x0) {
      local_30 = 0;
    }
    else {
      local_30 = FUN_005eaaf0();
    }
    local_8 = (uint)local_8._1_3_ << 8;
    param_1[local_14 + 0x65] = local_30;
    FUN_005eae80(0x30f094,param_2 + 2,param_3 + 2,param_4 + 1,0xffffffff);
    (**(code **)(*(int *)param_1[local_14 + 0x65] + 0x70))();
  }
  param_1[0x76] = 0;
  *(undefined1 *)(param_1 + 0x7a) = 0;
  param_1[0x77] = 0;
  param_1[0x5e] = 0x14;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  FUN_005f5cc0();
  FUN_005321d0();
  ExceptionList = local_10;
  return param_1;
}

