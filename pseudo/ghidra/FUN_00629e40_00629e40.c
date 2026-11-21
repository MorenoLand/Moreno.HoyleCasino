// FUN_00629e40  00629e40

undefined4 * __fastcall FUN_00629e40(undefined4 *param_1)

{
  void *pvVar1;
  undefined4 local_2c;
  undefined4 local_28;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ab64e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005f49d0(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  *param_1 = sciSpinBox::vftable;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  pvVar1 = operator_new(0x1e4);
  local_8._0_1_ = 1;
  if (pvVar1 == (void *)0x0) {
    local_28 = 0;
  }
  else {
    local_28 = FUN_0062a760(param_1,1);
  }
  local_8._0_1_ = 0;
  param_1[0x14] = local_28;
  pvVar1 = operator_new(0x1e4);
  local_8 = CONCAT31(local_8._1_3_,2);
  if (pvVar1 == (void *)0x0) {
    local_2c = 0;
  }
  else {
    local_2c = FUN_0062a760(param_1,0);
  }
  param_1[0x13] = local_2c;
  ExceptionList = local_10;
  return param_1;
}

