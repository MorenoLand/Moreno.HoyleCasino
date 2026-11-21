// FUN_00546660  00546660

void __thiscall
FUN_00546660(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  uint uVar1;
  void *pvVar2;
  undefined4 local_2c;
  undefined4 local_28;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a50ee;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  pvVar2 = operator_new(0x178);
  local_8 = 0;
  if (pvVar2 == (void *)0x0) {
    local_28 = 0;
  }
  else {
    local_28 = FUN_005eaaf0(uVar1);
  }
  local_8 = 0xffffffff;
  *param_1 = local_28;
  FUN_005eae80(0x311681,param_2,param_3,5,0xffffffff);
  pvVar2 = operator_new(0x178);
  local_8 = 1;
  if (pvVar2 == (void *)0x0) {
    local_2c = 0;
  }
  else {
    local_2c = FUN_005eaaf0(uVar1);
  }
  local_8 = 0xffffffff;
  param_1[1] = local_2c;
  FUN_005eae80(0x311681,param_4,param_5,5,0xffffffff);
  ExceptionList = local_10;
  return;
}

