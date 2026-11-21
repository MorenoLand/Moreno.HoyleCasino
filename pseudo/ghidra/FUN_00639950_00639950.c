// FUN_00639950  00639950

void FUN_00639950(undefined4 param_1)

{
  uint uVar1;
  void *pvVar2;
  int *local_44;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006abac2;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  pvVar2 = operator_new(0x178);
  local_8 = 0;
  if (pvVar2 == (void *)0x0) {
    local_44 = (int *)0x0;
  }
  else {
    local_44 = (int *)FUN_005eaaf0(uVar1);
  }
  local_8 = 0xffffffff;
  local_14 = local_44;
  FUN_005eaf00(0x30d4f3);
  (**(code **)(*local_14 + 0x40))();
  FUN_005ebf80(&local_28);
  if (local_14 != (int *)0x0) {
    (**(code **)*local_14)(1);
  }
  local_18 = local_1c - local_24;
  FUN_005fa5b0(0,0,param_1,0x49,(local_20 - local_28) + -0x11,0x19,3,3,1,0x12,0xffffffff);
  ExceptionList = local_10;
  return;
}

