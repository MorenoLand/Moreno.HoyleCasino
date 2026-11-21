// FUN_005abdc0  005abdc0

void FUN_005abdc0(int param_1)

{
  void *pvVar1;
  undefined4 local_24;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a7c02;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005a7130(DAT_00781870 ^ (uint)&stack0xfffffffc);
  pvVar1 = operator_new(0x24);
  local_8 = 0;
  if (pvVar1 == (void *)0x0) {
    local_24 = 0;
  }
  else {
    local_24 = CPrintDialog(6 - (uint)(param_1 == 0));
  }
  local_8 = 0xffffffff;
  FUN_005fc420(local_24);
  ExceptionList = local_10;
  return;
}

