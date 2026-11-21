// FUN_005aa380  005aa380

void FUN_005aa380(undefined4 param_1)

{
  uint uVar1;
  void *pvVar2;
  undefined4 local_2c;
  undefined4 local_28;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a7ab2;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*(int *)(DAT_007935f8 + 0x40) != 0) {
    FUN_005eaf00(0x13ad);
    (**(code **)(**(int **)(DAT_007935f8 + 0x40) + 0xb0))(0);
    pvVar2 = operator_new(0x20);
    local_8 = 0;
    if (pvVar2 == (void *)0x0) {
      local_28 = 0;
    }
    else {
      local_28 = FUN_006010a0(param_1);
    }
    local_8 = 0xffffffff;
    FUN_005f5d50(local_28);
  }
  if (*(int *)(DAT_007935f8 + 0x3c) != 0) {
    FUN_005eaf00(0x13ac);
    (**(code **)(**(int **)(DAT_007935f8 + 0x3c) + 0xb0))(0,uVar1);
    pvVar2 = operator_new(0x20);
    local_8 = 1;
    if (pvVar2 == (void *)0x0) {
      local_2c = 0;
    }
    else {
      local_2c = FUN_006010a0(0);
    }
    local_8 = 0xffffffff;
    FUN_005f5d50(local_2c);
  }
  ExceptionList = local_10;
  return;
}

