// FUN_00545600  00545600

void FUN_00545600(void)

{
  void *pvVar1;
  undefined4 local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a5066;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(char *)(DAT_00793404 + 0x1c) == '\0') {
    pvVar1 = operator_new(0x1c);
    local_8 = 0;
    if (pvVar1 == (void *)0x0) {
      local_20 = 0;
    }
    else {
      local_20 = FUN_00600a70(0);
    }
    local_8 = 0xffffffff;
    FUN_005f5d50(local_20);
  }
  ExceptionList = local_10;
  return;
}

