// FUN_00662f30  00662f30

void FUN_00662f30(undefined4 *param_1)

{
  uint uVar1;
  void *pvVar2;
  int *local_34;
  undefined4 local_1c;
  undefined4 local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006aca72;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  pvVar2 = operator_new(0x178);
  local_8 = 0;
  if (pvVar2 == (void *)0x0) {
    local_34 = (int *)0x0;
  }
  else {
    local_34 = (int *)FUN_005eaaf0(uVar1);
  }
  local_8 = 0xffffffff;
  local_14 = local_34;
  FUN_005eae80(*param_1,0,0,0,0xffffffff);
  FUN_005eb000(param_1[1]);
  (**(code **)(*local_14 + 0xb0))(param_1[2]);
  local_1c = FUN_005f5550();
  local_18 = FUN_005f5590();
  FUN_00663040(&local_1c);
  if (local_14 != (int *)0x0) {
    (**(code **)*local_14)(1);
  }
  ExceptionList = local_10;
  return;
}

