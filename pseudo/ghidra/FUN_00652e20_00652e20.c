// FUN_00652e20  00652e20

undefined4 * __thiscall FUN_00652e20(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  void *pvVar1;
  undefined4 local_24;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ac3fd;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00601a80(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  *param_1 = TutorialButton::vftable;
  param_1[0x7d] = param_2;
  param_1[0x77] = param_3;
  for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
    pvVar1 = operator_new(0x5c);
    local_8._0_1_ = 1;
    if (pvVar1 == (void *)0x0) {
      local_24 = 0;
    }
    else {
      local_24 = FUN_005f6130();
    }
    local_8 = (uint)local_8._1_3_ << 8;
    param_1[local_14 + 0x78] = local_24;
    FUN_005f61d0(0,0xf,0,0,0,0xffffffff);
  }
  ExceptionList = local_10;
  return param_1;
}

