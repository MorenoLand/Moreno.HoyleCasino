// FUN_00562bd0  00562bd0

void __fastcall FUN_00562bd0(undefined4 *param_1)

{
  undefined4 uVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a59f2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar1 = FUN_00562e40(DAT_00781870 ^ (uint)&stack0xfffffffc);
  pvVar2 = operator_new(0x178);
  local_8 = 0;
  if (pvVar2 == (void *)0x0) {
    local_34 = 0;
  }
  else {
    local_34 = FUN_005eaaf0();
  }
  local_8 = 0xffffffff;
  *param_1 = local_34;
  FUN_005eae80(param_1[4],0,0,700,0xffffffff);
  (**(code **)(*(int *)*param_1 + 0xb0))(param_1[5]);
  pvVar2 = operator_new(0x40);
  local_8 = 1;
  if (pvVar2 == (void *)0x0) {
    local_38 = 0;
  }
  else {
    local_38 = FUN_005655d0();
  }
  local_8 = 0xffffffff;
  param_1[1] = local_38;
  FUN_005656f0();
  FUN_00565a50(uVar1);
  uVar3 = FUN_00562eb0();
  FUN_00565cf0(uVar3);
  FUN_005664c0(0);
  pvVar2 = operator_new(0x40);
  local_8 = 2;
  if (pvVar2 == (void *)0x0) {
    local_3c = 0;
  }
  else {
    local_3c = FUN_005655d0();
  }
  local_8 = 0xffffffff;
  param_1[2] = local_3c;
  FUN_005656f0();
  FUN_00565a50(uVar1);
  uVar1 = FUN_00562f30();
  FUN_00565cf0(uVar1);
  FUN_005664c0(0);
  ExceptionList = local_10;
  return;
}

