// FUN_0052ca70  0052ca70

void FUN_0052ca70(void)

{
  void *pvVar1;
  undefined4 local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a4447;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pvVar1 = operator_new(0x1c);
  local_8 = 0;
  if (pvVar1 == (void *)0x0) {
    local_20 = 0;
  }
  else {
    local_20 = FUN_0052f7f0(0);
  }
  local_8 = 0xffffffff;
  FUN_005f5d50(local_20);
  ExceptionList = local_10;
  return;
}

