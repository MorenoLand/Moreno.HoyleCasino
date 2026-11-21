// FUN_00402a90  00402a90

undefined4 * __fastcall FUN_00402a90(undefined4 *param_1)

{
  void *pvVar1;
  undefined4 local_20;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0069d685;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005cc1d0(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  *param_1 = BaccaratBetArea::vftable;
  pvVar1 = operator_new(0x178);
  local_8._0_1_ = 1;
  if (pvVar1 == (void *)0x0) {
    local_20 = 0;
  }
  else {
    local_20 = FUN_005eaaf0();
  }
  local_8 = (uint)local_8._1_3_ << 8;
  param_1[0x2b9] = local_20;
  FUN_005eae80(0x13b2,0,0,500,0xffffffff);
  (**(code **)(*(int *)param_1[0x2b9] + 0x70))();
  ExceptionList = local_10;
  return param_1;
}

