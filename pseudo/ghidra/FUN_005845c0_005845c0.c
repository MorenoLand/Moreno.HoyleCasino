// FUN_005845c0  005845c0

undefined4 * __thiscall FUN_005845c0(undefined4 *param_1,undefined4 param_2)

{
  void *pvVar1;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a6c99;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005f6130(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  *param_1 = KenoScrollBox::vftable;
  param_1[0x1a] = param_2;
  *(undefined1 *)(param_1 + 0x1b) = 1;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  pvVar1 = operator_new(0x1e4);
  local_8._0_1_ = 1;
  if (pvVar1 == (void *)0x0) {
    local_30 = 0;
  }
  else {
    local_30 = FUN_005840e0(param_1,1);
  }
  local_8._0_1_ = 0;
  param_1[0x17] = local_30;
  FUN_00602ef0(0x14,10);
  pvVar1 = operator_new(0x1e4);
  local_8._0_1_ = 2;
  if (pvVar1 == (void *)0x0) {
    local_34 = 0;
  }
  else {
    local_34 = FUN_005840e0(param_1,0);
  }
  local_8._0_1_ = 0;
  param_1[0x18] = local_34;
  FUN_00602ef0(0x14,10);
  pvVar1 = operator_new(0x1a4);
  local_8 = CONCAT31(local_8._1_3_,3);
  if (pvVar1 == (void *)0x0) {
    local_38 = 0;
  }
  else {
    local_38 = FUN_00584180(param_1);
  }
  param_1[0x19] = local_38;
  ExceptionList = local_10;
  return param_1;
}

