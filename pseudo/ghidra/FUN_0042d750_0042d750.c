// FUN_0042d750  0042d750

void FUN_0042d750(void)

{
  void *pvVar1;
  undefined4 local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0069e626;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005f2ba0(0x30dbd3);
  pvVar1 = operator_new(0x20);
  local_8 = 0;
  if (pvVar1 == (void *)0x0) {
    local_20 = 0;
  }
  else {
    local_20 = FID_conflict_evaluation_error(0);
  }
  local_8 = 0xffffffff;
  FUN_005f5d50(local_20);
  ExceptionList = local_10;
  return;
}

