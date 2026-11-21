// FUN_00645440  00645440

undefined4 FUN_00645440(undefined4 param_1)

{
  void *pvVar1;
  undefined4 local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006abd9b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pvVar1 = operator_new(0x1a0);
  local_8 = 0;
  if (pvVar1 == (void *)0x0) {
    local_20 = 0;
  }
  else {
    local_20 = FUN_00643ce0(0,param_1);
  }
  ExceptionList = local_10;
  return local_20;
}

