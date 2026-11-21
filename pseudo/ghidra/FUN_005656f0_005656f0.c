// FUN_005656f0  005656f0

void __fastcall FUN_005656f0(int param_1)

{
  uint uVar1;
  void *pvVar2;
  undefined4 local_30;
  undefined4 local_2c;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a5b32;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  for (local_14 = 0; local_14 < 8; local_14 = local_14 + 1) {
    pvVar2 = operator_new(0x178);
    local_8 = 0;
    if (pvVar2 == (void *)0x0) {
      local_2c = 0;
    }
    else {
      local_2c = FUN_005eaaf0(uVar1);
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + local_14 * 4) = local_2c;
    FUN_005eae80(*(undefined4 *)(param_1 + 0x30),0,0,0x70a,0xffffffff);
    (**(code **)(**(int **)(param_1 + local_14 * 4) + 0xb0))(0);
    (**(code **)(**(int **)(param_1 + local_14 * 4) + 0x70))();
    *(undefined1 *)(param_1 + local_14 + 0x38) = 0;
  }
  for (local_14 = 0; local_14 < 2; local_14 = local_14 + 1) {
    pvVar2 = operator_new(0x178);
    local_8 = 1;
    if (pvVar2 == (void *)0x0) {
      local_30 = 0;
    }
    else {
      local_30 = FUN_005eaaf0(uVar1);
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x20 + local_14 * 4) = local_30;
    FUN_005eae80(*(undefined4 *)(param_1 + 0x30),0,0,0x70a,0xffffffff);
    (**(code **)(**(int **)(param_1 + 0x20 + local_14 * 4) + 0xb0))(10);
    (**(code **)(**(int **)(param_1 + 0x20 + local_14 * 4) + 0x70))();
  }
  ExceptionList = local_10;
  return;
}

