// FUN_0052f930  0052f930

undefined4 * __fastcall FUN_0052f930(undefined4 *param_1)

{
  uint uVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 local_30;
  undefined4 local_2c;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a46e4;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_005fc0d0(0);
  local_8 = 0;
  *param_1 = SpinReelsScript::vftable;
  for (local_14 = 0; local_14 < 3; local_14 = local_14 + 1) {
    pvVar2 = operator_new(0x184);
    local_8._0_1_ = 1;
    if (pvVar2 == (void *)0x0) {
      local_2c = 0;
    }
    else {
      local_2c = FUN_005f5bf0(uVar1);
    }
    local_8._0_1_ = 0;
    param_1[local_14 + 8] = local_2c;
    uVar8 = 0xffffffff;
    uVar7 = 5;
    uVar3 = (**(code **)(*DAT_00793394 + 0x1c))(5,0xffffffff);
    uVar4 = FUN_0052d1a0(local_14);
    uVar5 = FUN_0052d180(uVar4,uVar3);
    FUN_005eae80(uVar5,uVar4,uVar3,uVar7,uVar8);
    pvVar2 = operator_new(0x1c);
    local_8._0_1_ = 2;
    if (pvVar2 == (void *)0x0) {
      local_30 = 0;
    }
    else {
      local_30 = FUN_00600a70(0);
    }
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_005f5d50(local_30);
    iVar6 = FUN_005eb240();
    uVar3 = FUN_0062fbf0(iVar6 + 1);
    (**(code **)(*(int *)param_1[local_14 + 8] + 0xb0))(uVar3);
    *(undefined1 *)((int)param_1 + local_14 + 0x30) = 0;
  }
  param_1[0xb] = 0;
  ExceptionList = local_10;
  return param_1;
}

