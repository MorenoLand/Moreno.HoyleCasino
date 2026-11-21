// FUN_0056f3e0  0056f3e0

void __fastcall FUN_0056f3e0(int param_1)

{
  void *pvVar1;
  undefined4 local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a5ed8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pvVar1 = operator_new(0x28);
  local_8 = 0;
  if (pvVar1 == (void *)0x0) {
    local_20 = 0;
  }
  else {
    local_20 = FUN_00571200(*(undefined4 *)(param_1 + 0x2c));
  }
  local_8 = 0xffffffff;
  FUN_005f5df0(local_20);
  *(undefined1 *)(param_1 + 0x99) = 1;
  ExceptionList = local_10;
  return;
}

