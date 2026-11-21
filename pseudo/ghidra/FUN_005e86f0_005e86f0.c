// FUN_005e86f0  005e86f0

void __thiscall FUN_005e86f0(int *param_1,int param_2)

{
  void *pvVar1;
  undefined4 local_24;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a9a57;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_2 == 0) {
    (**(code **)(*(int *)param_1[0x5f] + 4))(1,DAT_00781870 ^ (uint)&stack0xfffffffc);
    (**(code **)(*param_1 + 0x74))();
    pvVar1 = operator_new(0x20);
    local_8 = 0;
    if (pvVar1 == (void *)0x0) {
      local_24 = 0;
    }
    else {
      local_24 = FUN_006010a0(param_1[0x5f]);
    }
    local_8 = 0xffffffff;
    FUN_005f5d50(local_24);
  }
  else if (param_2 == 1) {
    FUN_005dc9d0();
  }
  ExceptionList = local_10;
  return;
}

