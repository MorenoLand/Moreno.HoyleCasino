// FUN_00583030  00583030

void __fastcall FUN_00583030(int param_1)

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
  puStack_c = &LAB_006a6b69;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  for (local_14 = 0; local_14 < 0x14; local_14 = local_14 + 1) {
    *(undefined4 *)(param_1 + 4 + local_14 * 4) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x54) == 0) {
    pvVar2 = operator_new(0x184);
    local_8 = 0;
    if (pvVar2 == (void *)0x0) {
      local_2c = 0;
    }
    else {
      local_2c = FUN_005f5bf0(uVar1);
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x54) = local_2c;
    FUN_005eaf00(0x30dfcb);
    (**(code **)(**(int **)(param_1 + 0x54) + 0x40))();
    (**(code **)(**(int **)(param_1 + 0x54) + 0x6c))(1);
    *(undefined4 *)(*(int *)(param_1 + 0x54) + 0x178) = 8;
    pvVar2 = operator_new(0x1c);
    local_8 = 1;
    if (pvVar2 == (void *)0x0) {
      local_30 = 0;
    }
    else {
      local_30 = FUN_00600a70(0);
    }
    local_8 = 0xffffffff;
    FUN_005f5d50(local_30);
    (**(code **)(**(int **)(param_1 + 0x54) + 0x74))();
  }
  ExceptionList = local_10;
  return;
}

