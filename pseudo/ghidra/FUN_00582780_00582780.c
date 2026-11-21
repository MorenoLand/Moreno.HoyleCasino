// FUN_00582780  00582780

undefined4 * __thiscall FUN_00582780(undefined4 *param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  void *pvVar3;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a6aeb;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_005f71f0(0,0);
  local_8 = 0;
  *param_1 = KenoQuickPlayDialog::vftable;
  if ((param_2 < 1) || (100 < param_2)) {
    FUN_005e9f20("newGamesToPlay >=1 && newGamesToPlay <= 100","..\\Casino\\kenodisplay.cpp",0x4de,
                 uVar1);
  }
  param_1[0x6f] = param_2;
  param_1[0x70] = 0;
  FUN_005f83d0(0x4e5,0);
  FUN_005f7340(0,0);
  FUN_005f85d0();
  uVar6 = 3;
  uVar5 = 0;
  uVar4 = 0x20;
  uVar2 = FUN_00630f40("SID_KENO_QUICKPLAY",0x20,0,3);
  FUN_005f73e0(uVar2,uVar4,uVar5,uVar6);
  pvVar3 = operator_new(0x1d0);
  local_8._0_1_ = 1;
  if (pvVar3 == (void *)0x0) {
    local_30 = 0;
  }
  else {
    local_30 = FUN_005ec5a0();
  }
  local_8._0_1_ = 0;
  param_1[0x71] = local_30;
  *(undefined4 **)(param_1[0x71] + 4) = param_1;
  (**(code **)(*(int *)param_1[0x71] + 0x40))();
  (**(code **)(*(int *)param_1[0x71] + 0x6c))(10);
  FUN_005ecd00(0x23,0xffffffff,CONCAT13(extraout_var,CONCAT12(DAT_0075ee1e,DAT_0075ee1c)));
  (**(code **)(*(int *)param_1[0x71] + 0x44))(0xf,0x26);
  uVar2 = FUN_00630f40("SID_KENO_PLAYING");
  (**(code **)(*(int *)param_1[0x71] + 0xb4))(uVar2);
  (**(code **)(*(int *)param_1[0x71] + 0x74))();
  pvVar3 = operator_new(0x1d0);
  local_8._0_1_ = 2;
  if (pvVar3 == (void *)0x0) {
    local_34 = 0;
  }
  else {
    local_34 = FUN_005ec5a0();
  }
  local_8._0_1_ = 0;
  param_1[0x72] = local_34;
  *(undefined4 **)(param_1[0x72] + 4) = param_1;
  (**(code **)(*(int *)param_1[0x72] + 0x40))();
  (**(code **)(*(int *)param_1[0x72] + 0x6c))(10);
  FUN_005ecd00(0x67,0xffffffff,CONCAT13(extraout_var_00,CONCAT12(DAT_0075ee1e,DAT_0075ee1c)));
  FUN_005ecc60(0x32);
  FUN_005eccb0(0x14);
  (**(code **)(*(int *)param_1[0x72] + 0x44))(0x6d,0x28);
  (**(code **)(*(int *)param_1[0x72] + 0xb4))(&PTR_006b27f8);
  FUN_005ef310(6);
  (**(code **)(*(int *)param_1[0x72] + 0x74))();
  pvVar3 = operator_new(0x5c);
  local_8._0_1_ = 3;
  if (pvVar3 == (void *)0x0) {
    local_38 = 0;
  }
  else {
    local_38 = FUN_005f6130();
  }
  local_8 = (uint)local_8._1_3_ << 8;
  param_1[0x73] = local_38;
  *(undefined4 **)(param_1[0x73] + 4) = param_1;
  (**(code **)(*(int *)param_1[0x73] + 0x40))();
  (**(code **)(*(int *)param_1[0x73] + 0x6c))(0x3c);
  (**(code **)(*(int *)param_1[0x73] + 0x44))(0x10,0x38);
  FUN_005f6580(0xa0,0xa0,200);
  (**(code **)(*(int *)param_1[0x73] + 0x78))(0,0);
  (**(code **)(*(int *)param_1[0x73] + 0x74))();
  ExceptionList = local_10;
  return param_1;
}

