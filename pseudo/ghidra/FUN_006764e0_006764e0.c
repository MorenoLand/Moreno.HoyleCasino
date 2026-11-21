// FUN_006764e0  006764e0

void FUN_006764e0(undefined4 param_1)

{
  void *pvVar1;
  undefined4 local_24;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ad5cd;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pvVar1 = operator_new(0x18);
  local_8 = 0;
  if (pvVar1 == (void *)0x0) {
    local_24 = 0;
  }
  else {
    local_24 = FUN_00676340(param_1);
  }
  local_8 = 0xffffffff;
  FUN_0060c840(local_24);
  ExceptionList = local_10;
  return;
}

