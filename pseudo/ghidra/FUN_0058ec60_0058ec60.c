// FUN_0058ec60  0058ec60

undefined4 * __thiscall FUN_0058ec60(undefined4 *param_1,undefined4 param_2)

{
  void *pvVar1;
  undefined1 extraout_var;
  int iVar2;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  int local_30;
  int local_28;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a6ff1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005e9e20(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  *param_1 = KenoDialogWinGameScroller::vftable;
  param_1[0x5d] = param_2;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  pvVar1 = operator_new(0x1e4);
  local_8._0_1_ = 1;
  if (pvVar1 == (void *)0x0) {
    local_5c = 0;
  }
  else {
    local_5c = FUN_0058fae0(0,param_1);
  }
  local_8._0_1_ = 0;
  param_1[0x51] = local_5c;
  *(undefined4 *)(param_1[0x51] + 4) = param_1[0x5d];
  (**(code **)(*(int *)param_1[0x51] + 200))(0x30dfeb);
  (**(code **)(*(int *)param_1[0x51] + 0x40))();
  (**(code **)(*(int *)param_1[0x51] + 0x6c))(0x1e);
  (**(code **)(*(int *)param_1[0x51] + 0x44))(0xc1,0xd0);
  FUN_0058fb90();
  pvVar1 = operator_new(0x1e4);
  local_8._0_1_ = 2;
  if (pvVar1 == (void *)0x0) {
    local_60 = 0;
  }
  else {
    local_60 = FUN_0058fae0(1,param_1);
  }
  local_8._0_1_ = 0;
  param_1[0x52] = local_60;
  *(undefined4 *)(param_1[0x52] + 4) = param_1[0x5d];
  (**(code **)(*(int *)param_1[0x52] + 200))(0x30dfec);
  (**(code **)(*(int *)param_1[0x52] + 0x40))();
  (**(code **)(*(int *)param_1[0x52] + 0x6c))(0x1e);
  (**(code **)(*(int *)param_1[0x52] + 0x44))(0xfd,0xd0);
  FUN_0058fb90();
  pvVar1 = operator_new(0x1d0);
  local_8._0_1_ = 3;
  if (pvVar1 == (void *)0x0) {
    local_64 = 0;
  }
  else {
    local_64 = FUN_005ec5a0();
  }
  local_8 = (uint)local_8._1_3_ << 8;
  param_1[0x5e] = local_64;
  *(undefined4 *)(param_1[0x5e] + 4) = param_1[0x5d];
  (**(code **)(*(int *)param_1[0x5e] + 0x40))();
  (**(code **)(*(int *)param_1[0x5e] + 0xb4))(&PTR_006b27f8);
  FUN_005ecd00(0x37,0xffffffff,CONCAT13(extraout_var,CONCAT12(DAT_0075ee1e,DAT_0075ee1c)));
  (**(code **)(*(int *)param_1[0x5e] + 0x40))();
  (**(code **)(*(int *)param_1[0x5e] + 0x44))(0xc9,0xcc);
  FUN_005eccb0(0x18);
  FUN_005ecc60(0x32);
  FUN_005ef310(0x24);
  (**(code **)(*(int *)param_1[0x5e] + 0x6c))(0x1e);
  (**(code **)(*(int *)param_1[0x5e] + 0x74))();
  for (local_14 = 0; local_14 < 0x50; local_14 = local_14 + 1) {
    pvVar1 = operator_new(0x178);
    local_8._0_1_ = 4;
    if (pvVar1 == (void *)0x0) {
      local_68 = 0;
    }
    else {
      local_68 = FUN_005eaaf0();
    }
    local_8 = (uint)local_8._1_3_ << 8;
    param_1[local_14 + 1] = local_68;
    *(undefined4 *)(param_1[local_14 + 1] + 4) = param_1[0x5d];
    FUN_005eaf00(0x30dfed);
    (**(code **)(*(int *)param_1[local_14 + 1] + 0x40))();
    (**(code **)(*(int *)param_1[local_14 + 1] + 0x6c))(0x1e);
    (**(code **)(*(int *)param_1[local_14 + 1] + 0x70))();
  }
  local_18 = 0x67;
  for (local_14 = 0; local_14 < 2; local_14 = local_14 + 1) {
    for (local_30 = 0; local_30 < 4; local_30 = local_30 + 1) {
      for (local_28 = 0; local_28 < 10; local_28 = local_28 + 1) {
        iVar2 = local_30 * 10 + local_14 * 0x28 + local_28;
        if (local_28 < 5) {
          (**(code **)(*(int *)param_1[iVar2 + 1] + 0x44))
                    (local_28 * 0x1a + 3,local_30 * 0x1a + local_18);
        }
        else if (local_28 < 7) {
          (**(code **)(*(int *)param_1[iVar2 + 1] + 0x44))
                    (local_28 * 0x1a + 2,local_30 * 0x1a + local_18);
        }
        else {
          (**(code **)(*(int *)param_1[iVar2 + 1] + 0x44))
                    (local_28 * 0x1a,local_30 * 0x1a + local_18);
        }
      }
    }
    local_18 = 0xdf;
  }
  for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
    param_1[local_14 + 0x55] = 0;
    param_1[local_14 + 0x59] = 0;
  }
  ExceptionList = local_10;
  return param_1;
}

