// FUN_00546240  00546240

void __fastcall FUN_00546240(undefined4 *param_1)

{
  uint uVar1;
  void *pvVar2;
  undefined4 local_30;
  undefined4 local_2c;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a50bd;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
    pvVar2 = operator_new(0x178);
    local_8 = 0;
    if (pvVar2 == (void *)0x0) {
      local_2c = 0;
    }
    else {
      local_2c = FUN_005eaaf0(uVar1);
    }
    local_8 = 0xffffffff;
    param_1[local_14 + 1] = local_2c;
    FUN_005eae80(0x311681,0,0,1,0xffffffff);
  }
  pvVar2 = operator_new(0x178);
  local_8 = 1;
  if (pvVar2 == (void *)0x0) {
    local_30 = 0;
  }
  else {
    local_30 = FUN_005eaaf0(uVar1);
  }
  local_8 = 0xffffffff;
  *param_1 = local_30;
  FUN_005eae80(param_1[0xf],0,0,1,0xffffffff);
  ExceptionList = local_10;
  return;
}

