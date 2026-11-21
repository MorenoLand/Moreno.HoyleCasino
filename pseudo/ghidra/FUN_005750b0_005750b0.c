// FUN_005750b0  005750b0

void __thiscall FUN_005750b0(int param_1,undefined4 param_2)

{
  void *pvVar1;
  undefined4 local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a62c6;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  (**(code **)(**(int **)(param_1 + 0x14) + 0x70))(DAT_00781870 ^ (uint)&stack0xfffffffc);
  *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x178) = 6;
  FUN_005eaf00(0x1601e);
  (**(code **)(**(int **)(param_1 + 0x10) + 0xb0))(0);
  pvVar1 = operator_new(0x20);
  local_8 = 0;
  if (pvVar1 == (void *)0x0) {
    local_20 = 0;
  }
  else {
    local_20 = FUN_006010a0(param_2);
  }
  local_8 = 0xffffffff;
  FUN_005f5d50(local_20);
  ExceptionList = local_10;
  return;
}

