// FUN_00545aa0  00545aa0

void FUN_00545aa0(void)

{
  void *pvVar1;
  undefined4 local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a508c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pvVar1 = operator_new(0x1c);
  local_8 = 0;
  if (pvVar1 == (void *)0x0) {
    local_20 = 0;
  }
  else {
    local_20 = FUN_00546900(0);
  }
  local_8 = 0xffffffff;
  FUN_005f5d50(local_20);
  FUN_00545410(1,0x14);
  ExceptionList = local_10;
  return;
}

