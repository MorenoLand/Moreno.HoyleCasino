// FUN_00670e30  00670e30

void __thiscall FUN_00670e30(int param_1,undefined1 param_2)

{
  void *pvVar1;
  undefined4 local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ad100;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined1 *)(param_1 + 0x184) = 1;
  pvVar1 = operator_new(0x28);
  local_8 = 0;
  if (pvVar1 == (void *)0x0) {
    local_20 = 0;
  }
  else {
    local_20 = FUN_00671c80(param_2,param_1);
  }
  local_8 = 0xffffffff;
  FUN_005f5df0(local_20);
  ExceptionList = local_10;
  return;
}

