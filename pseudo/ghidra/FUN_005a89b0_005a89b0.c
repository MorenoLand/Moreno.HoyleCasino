// FUN_005a89b0  005a89b0

void FUN_005a89b0(undefined4 param_1)

{
  void *pvVar1;
  undefined4 local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a7a07;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005a7080(DAT_00781870 ^ (uint)&stack0xfffffffc);
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

