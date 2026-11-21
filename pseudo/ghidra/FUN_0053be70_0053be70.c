// FUN_0053be70  0053be70

void FUN_0053be70(undefined4 param_1)

{
  uint uVar1;
  void *pvVar2;
  undefined4 local_2c;
  undefined4 local_28;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a4be1;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*(int *)(DAT_007933f4 + 0x98) != 0) {
    FUN_005eaf00(0x7e7);
    (**(code **)(**(int **)(DAT_007933f4 + 0x98) + 0xb0))(0);
    (**(code **)(**(int **)(DAT_007933f4 + 0x98) + 0x74))();
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
  if (*(int *)(DAT_007933f4 + 0x94) != 0) {
    FUN_005eaf00(0x7e6);
    (**(code **)(**(int **)(DAT_007933f4 + 0x94) + 0xb0))(0,uVar1);
    (**(code **)(**(int **)(DAT_007933f4 + 0x94) + 0x74))();
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

