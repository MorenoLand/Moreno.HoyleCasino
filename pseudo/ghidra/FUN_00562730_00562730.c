// FUN_00562730  00562730

void FUN_00562730(void)

{
  void *pvVar1;
  undefined4 local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a5990;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pvVar1 = operator_new(0x1c);
  local_8 = 0;
  if (pvVar1 == (void *)0x0) {
    local_20 = 0;
  }
  else {
    local_20 = FUN_00563440(0);
  }
  local_8 = 0xffffffff;
  FUN_005f5d50(local_20);
  FUN_005627c0(1,0x14);
  ExceptionList = local_10;
  return;
}

