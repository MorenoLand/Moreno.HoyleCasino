// FUN_005a80d0  005a80d0

void __fastcall FUN_005a80d0(int param_1)

{
  uint uVar1;
  void *pvVar2;
  undefined4 local_2c;
  undefined4 local_28;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a7995;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*(int *)(param_1 + 0x34) == 0) {
    pvVar2 = operator_new(0x1bc);
    local_8 = 0;
    if (pvVar2 == (void *)0x0) {
      local_28 = 0;
    }
    else {
      local_28 = FUN_005a8960();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x34) = local_28;
    (**(code **)(**(int **)(param_1 + 0x34) + 0x3c))();
    FUN_005f7340(0xfffffff6,0x82);
  }
  FUN_005f85d0(uVar1);
  FUN_005a8730(1);
  if (*(int *)(param_1 + 0x28) == 0) {
    pvVar2 = operator_new(0x5c);
    local_8 = 1;
    if (pvVar2 == (void *)0x0) {
      local_2c = 0;
    }
    else {
      local_2c = FUN_005ab410();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = local_2c;
  }
  (**(code **)(**(int **)(param_1 + 0x28) + 0x6c))(0);
  (**(code **)(**(int **)(param_1 + 0x28) + 0x40))();
  ExceptionList = local_10;
  return;
}

