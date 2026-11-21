// FUN_005e9860  005e9860

void FUN_005e9860(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  void *pvVar2;
  undefined4 local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a9ad4;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  pvVar2 = operator_new(0x1dc);
  local_8 = 0;
  if (pvVar2 == (void *)0x0) {
    local_20 = 0;
  }
  else {
    local_20 = FUN_00601a80(uVar1);
  }
  local_8 = 0xffffffff;
  FUN_005f9de0(local_20,200,0x30d62d,param_1,param_2,1,&PTR_006b27f8,0xffffffff,0xffffffff,
               0xffffffff,0xffffffff,0);
  ExceptionList = local_10;
  return;
}

