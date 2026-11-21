// FUN_0042c410  0042c410

void __fastcall FUN_0042c410(int param_1)

{
  void *pvVar1;
  undefined4 local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0069e568;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(int *)(param_1 + 0xae4) != 0) {
    pvVar1 = operator_new(0x28);
    local_8 = 0;
    if (pvVar1 == (void *)0x0) {
      local_20 = 0;
    }
    else {
      local_20 = FUN_00601110(4,1,0,0,0);
    }
    local_8 = 0xffffffff;
    FUN_005f5d50(local_20);
  }
  ExceptionList = local_10;
  return;
}

