// FUN_00411cd0  00411cd0

void FUN_00411cd0(undefined4 param_1)

{
  void *pvVar1;
  undefined4 local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0069dcd5;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0040da70(DAT_00781870 ^ (uint)&stack0xfffffffc);
  pvVar1 = operator_new(0x24);
  local_8 = 0;
  if (pvVar1 == (void *)0x0) {
    local_20 = 0;
  }
  else {
    local_20 = CPrintDialog(param_1);
  }
  local_8 = 0xffffffff;
  FUN_005fc420(local_20);
  ExceptionList = local_10;
  return;
}

