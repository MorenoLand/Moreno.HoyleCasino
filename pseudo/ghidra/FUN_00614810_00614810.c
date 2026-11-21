// FUN_00614810  00614810

undefined4 * __fastcall FUN_00614810(undefined4 *param_1)

{
  void *pvVar1;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ab18f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005f49d0(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  *param_1 = sciScrollBox::vftable;
  param_1[0x17] = 1;
  *(undefined1 *)(param_1 + 0x18) = 1;
  param_1[0x19] = 0;
  param_1[0x1a] = 0xffffffff;
  param_1[0x1b] = 0;
  pvVar1 = operator_new(0x184);
  local_8._0_1_ = 1;
  if (pvVar1 == (void *)0x0) {
    local_40 = 0;
  }
  else {
    local_40 = FUN_005f5bf0();
  }
  local_8._0_1_ = 0;
  param_1[0x12] = local_40;
  pvVar1 = operator_new(0x60);
  local_8._0_1_ = 2;
  if (pvVar1 == (void *)0x0) {
    local_44 = 0;
  }
  else {
    local_44 = FUN_00615a20(param_1);
  }
  local_8._0_1_ = 0;
  param_1[0x13] = local_44;
  pvVar1 = operator_new(0x1e4);
  local_8._0_1_ = 3;
  if (pvVar1 == (void *)0x0) {
    local_48 = 0;
  }
  else {
    local_48 = FUN_00615b10(param_1,0);
  }
  local_8._0_1_ = 0;
  param_1[0x14] = local_48;
  FUN_00602ef0(0x14,10);
  pvVar1 = operator_new(0x1e4);
  local_8._0_1_ = 4;
  if (pvVar1 == (void *)0x0) {
    local_4c = 0;
  }
  else {
    local_4c = FUN_00615b10(param_1,1);
  }
  local_8._0_1_ = 0;
  param_1[0x15] = local_4c;
  FUN_00602ef0(0x14,10);
  pvVar1 = operator_new(400);
  local_8 = CONCAT31(local_8._1_3_,5);
  if (pvVar1 == (void *)0x0) {
    local_50 = 0;
  }
  else {
    local_50 = FUN_00615bb0(param_1);
  }
  param_1[0x16] = local_50;
  ExceptionList = local_10;
  return param_1;
}

