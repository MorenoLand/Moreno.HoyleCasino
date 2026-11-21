// FUN_00575190  00575190

void __thiscall FUN_00575190(int param_1,undefined4 param_2)

{
  uint uVar1;
  void *pvVar2;
  undefined4 local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a62ec;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x178) = 6;
  FUN_005eaf00(0x1601f);
  (**(code **)(**(int **)(param_1 + 0x10) + 0xb0))(0,uVar1);
  pvVar2 = operator_new(0x20);
  local_8 = 0;
  if (pvVar2 == (void *)0x0) {
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

