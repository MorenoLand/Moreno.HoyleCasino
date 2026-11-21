// FUN_0057f0f0  0057f0f0

undefined4 * __fastcall FUN_0057f0f0(undefined4 *param_1)

{
  uint uVar1;
  void *pvVar2;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a69ac;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  pvVar2 = operator_new(0x178);
  local_8 = 0;
  if (pvVar2 == (void *)0x0) {
    local_40 = 0;
  }
  else {
    local_40 = FUN_005eaaf0(uVar1);
  }
  local_8 = 0xffffffff;
  *param_1 = local_40;
  FUN_005eaf00(0x30dfe1);
  (**(code **)(*(int *)*param_1 + 0x6c))(0x14);
  (**(code **)(*(int *)*param_1 + 0x40))();
  (**(code **)(*(int *)*param_1 + 0x70))();
  pvVar2 = operator_new(0x178);
  local_8 = 1;
  if (pvVar2 == (void *)0x0) {
    local_44 = 0;
  }
  else {
    local_44 = FUN_005eaaf0();
  }
  local_8 = 0xffffffff;
  param_1[1] = local_44;
  FUN_005eaf00(0x30dfc7);
  (**(code **)(*(int *)param_1[1] + 0xb0))(9);
  (**(code **)(*(int *)param_1[1] + 0x6c))(0x14);
  (**(code **)(*(int *)param_1[1] + 0x40))();
  (**(code **)(*(int *)param_1[1] + 0x70))();
  pvVar2 = operator_new(0x178);
  local_8 = 2;
  if (pvVar2 == (void *)0x0) {
    local_48 = 0;
  }
  else {
    local_48 = FUN_005eaaf0();
  }
  local_8 = 0xffffffff;
  param_1[2] = local_48;
  FUN_005eaf00(0x30dfc8);
  (**(code **)(*(int *)param_1[2] + 0xb0))(9);
  (**(code **)(*(int *)param_1[2] + 0x6c))(0x14);
  (**(code **)(*(int *)param_1[2] + 0x40))();
  (**(code **)(*(int *)param_1[2] + 0x70))();
  pvVar2 = operator_new(0x178);
  local_8 = 3;
  if (pvVar2 == (void *)0x0) {
    local_4c = 0;
  }
  else {
    local_4c = FUN_005eaaf0();
  }
  local_8 = 0xffffffff;
  param_1[3] = local_4c;
  FUN_005eaf00(0x30dfc9);
  (**(code **)(*(int *)param_1[3] + 0xb0))(9);
  (**(code **)(*(int *)param_1[3] + 0x6c))(0x14);
  (**(code **)(*(int *)param_1[3] + 0x40))();
  (**(code **)(*(int *)param_1[3] + 0x70))();
  pvVar2 = operator_new(0x178);
  local_8 = 4;
  if (pvVar2 == (void *)0x0) {
    local_50 = 0;
  }
  else {
    local_50 = FUN_005eaaf0();
  }
  local_8 = 0xffffffff;
  param_1[4] = local_50;
  FUN_005eaf00(0x30dfca);
  (**(code **)(*(int *)param_1[4] + 0xb0))(9);
  (**(code **)(*(int *)param_1[4] + 0x6c))(0x14);
  (**(code **)(*(int *)param_1[4] + 0x40))();
  (**(code **)(*(int *)param_1[4] + 0x70))();
  ExceptionList = local_10;
  return param_1;
}

